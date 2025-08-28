// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
// 02_core_engine_part197.c - 15 个函数
// 函数: void function_17b28d(void)
void function_17b28d(void)
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
// 函数: void function_17b2ed(int64_t param_1)
void function_17b2ed(int64_t param_1)
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
// 函数: void function_17b36c(void)
void function_17b36c(void)
{
  return;
}
// 函数: void function_17b380(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_17b380(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_17b400(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void function_17b3a0(int64_t *param_1)
void function_17b3a0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    function_17a9c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_17b400(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_17b400(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  if (param_2 != (uint64_t *)0x0) {
    function_17b400(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
    if ((int64_t *)param_2[4] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_2[4] + 0x38))();
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17b480(int64_t *param_1,int64_t *param_2,int64_t *param_3)
void function_17b480(int64_t *param_1,int64_t *param_2,int64_t *param_3)
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
      function_17b5e0(param_2,param_2 + uVar3);
      lVar2 = function_17b680(param_2 + uVar3,param_3,param_1[1]);
      param_1[1] = lVar2;
    }
    else {
      plVar4 = (int64_t *)function_17b5e0(param_2,param_3);
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
// 函数: void function_17b4bc(int64_t param_1)
void function_17b4bc(int64_t param_1)
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
// 函数: void function_17b55d(int64_t param_1,int64_t param_2,int64_t param_3)
void function_17b55d(int64_t param_1,int64_t param_2,int64_t param_3)
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
    function_17b5e0();
    uVar4 = function_17b680(param_2 + uVar2 * 8);
    *(uint64_t *)(unaff_RSI + 8) = uVar4;
  }
  else {
    plVar3 = (int64_t *)function_17b5e0();
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
int64_t * function_17b5e0(int64_t param_1,int64_t param_2,int64_t *param_3)
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
int64_t * function_17b680(int64_t *param_1,int64_t *param_2,int64_t *param_3)
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
int64_t * function_17b6e0(int64_t *param_1,int32_t *param_2,int32_t *param_3,int64_t param_4)
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
// 函数: void function_17b850(int64_t param_1)
void function_17b850(int64_t param_1)
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
  function_10d9f0(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x8c0));
  function_10da70(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x850));
  function_10d970(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x930));
  function_10d1f0(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0xf50));
  function_10d070(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x10a0));
  function_10d8f0(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x9a0));
  function_10d270(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0xee0));
  function_10d170(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0xfc0));
  function_10d870(SYSTEM_STATE_MANAGER,*(int32_t *)(SYSTEM_STATE_MANAGER + 0xa10));
  function_10d0f0(SYSTEM_STATE_MANAGER,*(int32_t *)(core_system_data_memory + 0xe00));
  plVar9 = system_message_buffer;
  function_21fbb0(system_message_buffer);
  function_220fe0(plVar9);
  function_21f910(plVar9);
  if ((void *)*plVar9 == &processed_var_6752_ptr) {
    function_0ad2a0();
    function_0acb60(plVar9);
    function_0ac700(plVar9);
    function_0ac530(plVar9);
    function_1c93c0();
    function_0ab6f0(plVar9);
    function_0a3880(plVar9,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x1d50),
                  *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1dc0),0);
  }
  else {
    (**(code **)((void *)*plVar9 + 0xa8))(plVar9);
  }
  if ((void *)*plVar9 != &processed_var_6752_ptr) {
    (**(code **)((void *)*plVar9 + 0x80))(plVar9);
  }
  function_29c9d0(plVar9[0x39b]);
  function_29ae20(plVar9[0x39b]);
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
  SystemCore_ProcessorEx(plVar9[0x39b],1);
  UtilitiesSystem_MathCalculator(plVar9[0x39b],3,0xff0000ff,0x3f800000,0x8a,0);
  lVar4 = system_resource_state;
  plVar9 = *(int64_t **)(system_resource_state + 0x138);
  if (plVar9 != *(int64_t **)(system_resource_state + 0x140)) {
    do {
      lVar1 = *plVar9;
      if ((*(int64_t *)(lVar1 + 0x15b8) == 0) && (*(int *)(lVar1 + 0x16c0) != 0)) {
        lVar5 = function_2aaef0(lVar4 + 0xac0,lVar1 + 0x16b0);
        if (lVar5 == 0) {
          uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x50,0x10,3);
          lVar5 = function_0ba230(uVar6,lVar1 + 0x16b0);
          function_2ab0c0(lVar4 + 0xac0,lVar5);
        }
        *(int64_t *)(lVar1 + 0x15b8) = lVar5;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != *(int64_t **)(lVar4 + 0x140));
  }
  function_0b3cc0(lVar4);
  function_0d7810();
  function_0f08a0();
  function_0c1a80();
  function_092820();
  function_0d7810();
  lVar4 = system_resource_state;
  plVar9 = *(int64_t **)(system_resource_state + 0x138);
  if (plVar9 != *(int64_t **)(system_resource_state + 0x140)) {
    do {
      lVar1 = *plVar9;
      lVar5 = 7;
      plVar10 = (int64_t *)(lVar1 + 0x1678);
      do {
        lVar2 = *plVar10;
        if ((lVar2 != 0) && (cVar3 = function_240670(lVar1,lVar2), cVar3 == '\0')) {
          puVar11 = &system_buffer_ptr;
          if (*(void **)(lVar2 + 0x18) != (void *)0x0) {
            puVar11 = *(void **)(lVar2 + 0x18);
          }
          puVar7 = &system_buffer_ptr;
          if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
            puVar7 = *(void **)(lVar1 + 0x18);
          }
          SystemDataInitializer(&processed_var_7664_ptr,puVar7,puVar11);
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
// 函数: void function_17bc20(uint64_t param_1)
void function_17bc20(uint64_t param_1)
{
  int8_t stack_array_118 [32];
  int32_t local_var_f8;
  uint64_t local_var_f0;
  void **applocal_var_e8 [2];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [72];
  void *aplocal_var_78 [11];
  int32_t local_var_20;
  uint64_t local_var_18;
  local_var_f0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  local_var_f8 = 0;
  plocal_var_d8 = &memory_allocator_3480_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 0xc;
  strcpy_s(stack_array_c0,0x40,&system_data_96c8);
  SystemCommunicationProcessor(aplocal_var_78,&plocal_var_d8);
  local_var_20 = 9;
  local_var_f8 = 1;
  MathOptimizationEngine0(param_1,applocal_var_e8,aplocal_var_78);
  local_var_f8 = 0;
  applocal_var_e8[0] = aplocal_var_78;
  aplocal_var_78[0] = &system_state_ptr;
  plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17bd30(uint64_t param_1)
void function_17bd30(uint64_t param_1)
{
  int8_t stack_array_668 [32];
  int32_t local_var_648;
  void **applocal_var_640 [2];
  uint64_t local_var_630;
  void *aplocal_var_628 [11];
  int32_t local_var_5d0;
  void *plocal_var_5c8;
  int8_t *plocal_var_5c0;
  int32_t local_var_5b8;
  int8_t stack_array_5b0 [72];
  void *plocal_var_568;
  int8_t *plocal_var_560;
  int32_t local_var_558;
  int8_t stack_array_550 [72];
  void *plocal_var_508;
  int8_t *plocal_var_500;
  int32_t local_var_4f8;
  int8_t stack_array_4f0 [72];
  void *plocal_var_4a8;
  int8_t *plocal_var_4a0;
  int32_t local_var_498;
  int8_t stack_array_490 [72];
  void *plocal_var_448;
  int8_t *plocal_var_440;
  int32_t local_var_438;
  int8_t stack_array_430 [72];
  void *plocal_var_3e8;
  int8_t *plocal_var_3e0;
  int32_t local_var_3d8;
  int8_t stack_array_3d0 [72];
  void *plocal_var_388;
  int8_t *plocal_var_380;
  int32_t local_var_378;
  int8_t stack_array_370 [72];
  void *plocal_var_328;
  int8_t *plocal_var_320;
  int32_t local_var_318;
  int8_t stack_array_310 [72];
  void *plocal_var_2c8;
  int8_t *plocal_var_2c0;
  int32_t local_var_2b8;
  int8_t stack_array_2b0 [72];
  void *plocal_var_268;
  int8_t *plocal_var_260;
  int32_t local_var_258;
  int8_t stack_array_250 [72];
  void *plocal_var_208;
  int8_t *plocal_var_200;
  int32_t local_var_1f8;
  int8_t stack_array_1f0 [72];
  void *plocal_var_1a8;
  int8_t *plocal_var_1a0;
  int32_t local_var_198;
  int8_t stack_array_190 [72];
  void *plocal_var_148;
  int8_t *plocal_var_140;
  int32_t local_var_138;
  int8_t stack_array_130 [72];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [72];
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [72];
  uint64_t local_var_28;
  local_var_630 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_668;
  local_var_648 = 0;
  plocal_var_5c8 = &memory_allocator_3480_ptr;
  plocal_var_5c0 = stack_array_5b0;
  stack_array_5b0[0] = 0;
  local_var_5b8 = 4;
  strcpy_s(stack_array_5b0,0x40,&system_data_96e0);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_5c8);
  local_var_5d0 = 2;
  local_var_648 = 1;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_5c8 = &system_state_ptr;
  plocal_var_568 = &memory_allocator_3480_ptr;
  plocal_var_560 = stack_array_550;
  stack_array_550[0] = 0;
  local_var_558 = 7;
  strcpy_s(stack_array_550,0x40,&system_data_96d8);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_568);
  local_var_5d0 = 10;
  local_var_648 = 2;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_568 = &system_state_ptr;
  plocal_var_508 = &memory_allocator_3480_ptr;
  plocal_var_500 = stack_array_4f0;
  stack_array_4f0[0] = 0;
  local_var_4f8 = 7;
  strcpy_s(stack_array_4f0,0x40,&system_data_96f0);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_508);
  local_var_5d0 = 10;
  local_var_648 = 4;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_508 = &system_state_ptr;
  plocal_var_4a8 = &memory_allocator_3480_ptr;
  plocal_var_4a0 = stack_array_490;
  stack_array_490[0] = 0;
  local_var_498 = 7;
  strcpy_s(stack_array_490,0x40,&system_data_96e8);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_4a8);
  local_var_5d0 = 10;
  local_var_648 = 8;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_4a8 = &system_state_ptr;
  plocal_var_448 = &memory_allocator_3480_ptr;
  plocal_var_440 = stack_array_430;
  stack_array_430[0] = 0;
  local_var_438 = 7;
  strcpy_s(stack_array_430,0x40,&system_data_9710);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_448);
  local_var_5d0 = 10;
  local_var_648 = 0x10;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_448 = &system_state_ptr;
  plocal_var_3e8 = &memory_allocator_3480_ptr;
  plocal_var_3e0 = stack_array_3d0;
  stack_array_3d0[0] = 0;
  local_var_3d8 = 0x11;
  strcpy_s(stack_array_3d0,0x40,&system_data_96f8);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_3e8);
  local_var_5d0 = 7;
  local_var_648 = 0x20;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_3e8 = &system_state_ptr;
  plocal_var_388 = &memory_allocator_3480_ptr;
  plocal_var_380 = stack_array_370;
  stack_array_370[0] = 0;
  local_var_378 = 0x22;
  strcpy_s(stack_array_370,0x40,&system_data_9728);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_388);
  local_var_5d0 = 0;
  local_var_648 = 0x40;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_388 = &system_state_ptr;
  plocal_var_328 = &memory_allocator_3480_ptr;
  plocal_var_320 = stack_array_310;
  stack_array_310[0] = 0;
  local_var_318 = 0xb;
  strcpy_s(stack_array_310,0x40,&system_data_9718);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_328);
  local_var_5d0 = 4;
  local_var_648 = 0x80;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_328 = &system_state_ptr;
  plocal_var_2c8 = &memory_allocator_3480_ptr;
  plocal_var_2c0 = stack_array_2b0;
  stack_array_2b0[0] = 0;
  local_var_2b8 = 0x12;
  strcpy_s(stack_array_2b0,0x40,&system_data_9768);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_2c8);
  local_var_5d0 = 2;
  local_var_648 = 0x100;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_2c8 = &system_state_ptr;
  plocal_var_268 = &memory_allocator_3480_ptr;
  plocal_var_260 = stack_array_250;
  stack_array_250[0] = 0;
  local_var_258 = 0x12;
  strcpy_s(stack_array_250,0x40,&system_data_9750);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_268);
  local_var_5d0 = 2;
  local_var_648 = 0x200;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_268 = &system_state_ptr;
  plocal_var_208 = &memory_allocator_3480_ptr;
  plocal_var_200 = stack_array_1f0;
  stack_array_1f0[0] = 0;
  local_var_1f8 = 0x1e;
  strcpy_s(stack_array_1f0,0x40,&system_data_97a0);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_208);
  local_var_5d0 = 2;
  local_var_648 = 0x400;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_208 = &system_state_ptr;
  plocal_var_1a8 = &memory_allocator_3480_ptr;
  plocal_var_1a0 = stack_array_190;
  stack_array_190[0] = 0;
  local_var_198 = 0x1b;
  strcpy_s(stack_array_190,0x40,&system_data_9780);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_1a8);
  local_var_5d0 = 2;
  local_var_648 = 0x800;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_1a8 = &system_state_ptr;
  plocal_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = 0;
  local_var_138 = 0x1b;
  strcpy_s(stack_array_130,0x40,&system_data_97e0);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_148);
  local_var_5d0 = 2;
  local_var_648 = 0x1000;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x18;
  strcpy_s(stack_array_d0,0x40,&system_data_97c0);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_e8);
  local_var_5d0 = 0xb;
  local_var_648 = 0x2000;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0xc;
  strcpy_s(stack_array_70,0x40,&system_data_9818);
  SystemCommunicationProcessor(aplocal_var_628,&plocal_var_88);
  local_var_5d0 = 0xb;
  local_var_648 = 0x4000;
  MathOptimizationEngine0(param_1,applocal_var_640,aplocal_var_628);
  local_var_648 = 0;
  applocal_var_640[0] = aplocal_var_628;
  aplocal_var_628[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_668);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17c750(uint64_t param_1,uint64_t param_2)
void function_17c750(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *plocal_var_80;
  uint64_t *plocal_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa8,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar3 = &processed_var_5664_ptr;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(int32_t *)(puVar3 + 0x14) = 3;
  puVar3[0xf] = 0x4024000000000000;
  puVar3[0xe] = 0x3fe0000000000000;
  *(int8_t *)((int64_t)puVar3 + 0x81) = 0;
  plocal_var_80 = &system_data_buffer_ptr;
  local_var_68 = 0;
  plocal_var_78 = (uint64_t *)0x0;
  local_var_70 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_78 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_68 = CONCAT44(local_var_68._4_4_,uVar1);
  *puVar3 = 0x6f6d4120646e6542;
  *(int32_t *)(puVar3 + 1) = 0x746e75;
  local_var_70 = 0xb;
  SystemNetwork_Processor(puVar2,&plocal_var_80,puVar2 + 0xf,1,uVar4);
  plocal_var_80 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17c7a0(uint64_t param_1,uint64_t param_2)
void function_17c7a0(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *plocal_var_90;
  uint64_t *plocal_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_30;
  local_var_30 = 0x18017c7c8;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x80,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar3 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar3 = &processed_var_6048_ptr;
  puVar3[0xe] = 0;
  *(int32_t *)(puVar3 + 0xf) = 0x3f800000;
  plocal_var_90 = &system_data_buffer_ptr;
  local_var_78 = 0;
  plocal_var_88 = (uint64_t *)0x0;
  local_var_80 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_88 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_78 = CONCAT44(local_var_78._4_4_,uVar1);
  *puVar3 = 0x6c6169726574614d;
  *(int8_t *)(puVar3 + 1) = 0;
  local_var_80 = 8;
  SystemNetwork_Processor(puVar2,&plocal_var_90,puVar2 + 0xe,10,uVar4);
  plocal_var_90 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_17c7e0(uint64_t param_1,int64_t param_2)
void function_17c7e0(uint64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int8_t stack_array_168 [32];
  uint64_t local_var_148;
  uint64_t *plocal_var_140;
  void *plocal_var_138;
  int8_t *plocal_var_130;
  int32_t local_var_128;
  int8_t stack_array_120 [16];
  void *plocal_var_110;
  int8_t *plocal_var_108;
  int32_t local_var_100;
  int8_t stack_array_f8 [32];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [32];
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [32];
  void *plocal_var_68;
  int8_t *plocal_var_60;
  int32_t local_var_58;
  int8_t stack_array_50 [32];
  uint64_t local_var_30;
  local_var_30 = 0x18017c80a;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
  local_var_148 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  puVar2 = puVar1;
  plocal_var_140 = puVar1;
  SystemCore_SyncController(puVar1,param_2,param_1);
  *puVar2 = &processed_var_6496_ptr;
  *(int16_t *)(puVar2 + 0x12) = 0;
  *(int8_t *)((int64_t)puVar2 + 0x92) = 0;
  *(bool *)((int64_t)puVar2 + 0x93) = *(char *)(param_2 + 0x2e5) == '\0';
  *(int32_t *)(puVar2 + 0x13) = 0;
  *(int8_t *)((int64_t)puVar2 + 0x94) = 0;
  *(int32_t *)((int64_t)puVar2 + 0x8c) = 0x3f800000;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  *(int32_t *)(puVar2 + 0x11) = 0x41a00000;
  plocal_var_138 = &system_config_ptr;
  plocal_var_130 = stack_array_120;
  stack_array_120[0] = 0;
  local_var_128 = 8;
  strcpy_s(stack_array_120,0x10,&processed_var_8280_ptr);
  SystemNetwork_Processor(puVar1,&plocal_var_138,puVar1 + 0x12,3);
  plocal_var_138 = &system_state_ptr;
  plocal_var_110 = &processed_var_672_ptr;
  plocal_var_108 = stack_array_f8;
  stack_array_f8[0] = 0;
  local_var_100 = 0x13;
  strcpy_s(stack_array_f8,0x20,&processed_var_6464_ptr);
  SystemNetwork_Processor(puVar1,&plocal_var_110,(int64_t)puVar1 + 0x92,3);
  plocal_var_110 = &system_state_ptr;
  plocal_var_d8 = &processed_var_672_ptr;
  plocal_var_d0 = stack_array_c0;
  stack_array_c0[0] = 0;
  local_var_c8 = 0x11;
  strcpy_s(stack_array_c0,0x20,&processed_var_6440_ptr);
  SystemNetwork_Processor(puVar1,&plocal_var_d8,(int64_t)puVar1 + 0x8c,2);
  plocal_var_d8 = &system_state_ptr;
  plocal_var_a0 = &processed_var_672_ptr;
  plocal_var_98 = stack_array_88;
  stack_array_88[0] = 0;
  local_var_90 = 0xf;
  strcpy_s(stack_array_88,0x20,&processed_var_6424_ptr);
  SystemNetwork_Processor(puVar1,&plocal_var_a0,puVar1 + 0x11,2);
  plocal_var_a0 = &system_state_ptr;
  plocal_var_68 = &processed_var_672_ptr;
  plocal_var_60 = stack_array_50;
  stack_array_50[0] = 0;
  local_var_58 = 9;
  strcpy_s(stack_array_50,0x20,&processed_var_6408_ptr);
  SystemNetwork_Processor(puVar1,&plocal_var_68,puVar1 + 0xf,5);
  plocal_var_68 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address