// $fun 的语义化别名
#define $alias_name $fun
/* SystemCore_Initializer - SystemCore_Initializer */
#define SystemCore_Initializer SystemCore_Initializer
// 03_rendering_part130.c - 12 个函数
// 函数: void function_345040(int64_t param_1,uint64_t param_2,int64_t param_3)
void function_345040(int64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int *piVar8;
  void *puVar9;
  uint64_t uVar10;
  int *piVar11;
  int64_t lVar12;
  function_23fa30();
  uVar7 = 0;
  lVar2 = *(int64_t *)(param_3 + 0x28) - *(int64_t *)(param_3 + 0x20);
  lVar3 = lVar2 >> 0x3f;
  uVar4 = uVar7;
  uVar6 = uVar7;
  if (lVar2 / 0x98 + lVar3 != lVar3) {
    do {
      function_217f60(param_1 + 0x20,uVar6 * 0x98 + *(int64_t *)(param_3 + 0x20));
      uVar5 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar5;
      uVar6 = (int64_t)(int)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)((*(int64_t *)(param_3 + 0x28) - *(int64_t *)(param_3 + 0x20)) / 0x98));
  }
  lVar2 = *(int64_t *)(param_3 + 0x180) - *(int64_t *)(param_3 + 0x178);
  lVar3 = lVar2 >> 0x3f;
  uVar4 = uVar7;
  uVar6 = uVar7;
  if (lVar2 / 0x98 + lVar3 != lVar3) {
    do {
      function_217f60(param_1 + 0x178,uVar6 * 0x98 + *(int64_t *)(param_3 + 0x178));
      uVar5 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar5;
      uVar6 = (int64_t)(int)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)((*(int64_t *)(param_3 + 0x180) - *(int64_t *)(param_3 + 0x178)) / 0x98));
  }
  if (*(int *)(param_3 + 0xdc) != 0) {
    *(int *)(param_1 + 0xdc) = *(int *)(param_3 + 0xdc);
  }
  *(int8_t *)(param_1 + 0xd8) = *(int8_t *)(param_3 + 0xd8);
  uVar5 = *(uint *)(param_3 + 0x10);
  uVar4 = (uint64_t)uVar5;
  if (*(int64_t *)(param_3 + 8) != 0) {
    CoreEngineDataBufferProcessor(param_1,uVar4);
  }
  if (uVar5 == 0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    if (*(int64_t *)(param_1 + 8) != 0) {
      *(int8_t *)(uVar4 + *(int64_t *)(param_1 + 8)) = 0;
    }
    *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_3 + 0x1c);
    if (*(int *)(param_3 + 0x1110) != 0) {
      *(int *)(param_1 + 0x1110) = *(int *)(param_3 + 0x1110);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1108) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1108);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1108),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x11a8) != 0) {
      *(int *)(param_1 + 0x11a8) = *(int *)(param_3 + 0x11a8);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x11a0) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x11a0);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x11a0),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x1240) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x1240);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1238) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1238);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x12d8) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x12d8);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x12d0) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x12d0);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x1370) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x1370);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1368) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1368);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x1408) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x1408);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1400) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1400);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x50) != 0) {
      *(int *)(param_1 + 0x1240) = *(int *)(param_3 + 0x50);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x48) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x48);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar9);
    }
    piVar8 = (int *)(param_3 + 0x1a8);
    lVar2 = param_1 - param_3;
    lVar3 = 5;
    do {
      if (*piVar8 != 0) {
        *(int *)(lVar2 + (int64_t)piVar8) = *piVar8;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(piVar8 + -2) != (void *)0x0) {
          puVar9 = *(void **)(piVar8 + -2);
        }
        strcpy_s(*(uint64_t *)(lVar2 + -8 + (int64_t)piVar8),0x80,puVar9);
      }
      piVar8 = piVar8 + 0x26;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    piVar8 = (int *)(param_3 + 0xa40);
    lVar3 = 9;
    do {
      if (*piVar8 != 0) {
        *(int *)((int64_t)piVar8 + lVar2) = *piVar8;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(piVar8 + -2) != (void *)0x0) {
          puVar9 = *(void **)(piVar8 + -2);
        }
        strcpy_s(*(uint64_t *)((int64_t)piVar8 + lVar2 + -8),0x80,puVar9);
      }
      piVar8 = piVar8 + 0x26;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar3 = *(int64_t *)(param_3 + 0x490);
    lVar1 = *(int64_t *)(param_3 + 0x498) - lVar3;
    lVar12 = lVar1 >> 0x3f;
    uVar4 = uVar7;
    uVar6 = uVar7;
    uVar10 = uVar7;
    if (lVar1 / 0x98 + lVar12 != lVar12) {
      do {
        if (*(int *)(uVar6 + 0x10 + lVar3) != 0) {
          function_217f60(param_1 + 0x490,uVar10 * 0x98 + lVar3);
        }
        lVar3 = *(int64_t *)(param_3 + 0x490);
        uVar5 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar5;
        uVar6 = uVar6 + 0x98;
        uVar10 = (int64_t)(int)uVar5;
      } while ((uint64_t)(int64_t)(int)uVar5 <
               (uint64_t)((*(int64_t *)(param_3 + 0x498) - lVar3) / 0x98));
    }
    lVar3 = *(int64_t *)(param_3 + 0x10b8);
    lVar1 = *(int64_t *)(param_3 + 0x10c0) - lVar3;
    lVar12 = lVar1 >> 0x3f;
    uVar4 = uVar7;
    uVar6 = uVar7;
    if (lVar1 / 0x98 + lVar12 != lVar12) {
      do {
        if (*(int *)(uVar7 + 0x10 + lVar3) != 0) {
          function_217f60(param_1 + 0x10b8,uVar4 * 0x98 + lVar3);
        }
        lVar3 = *(int64_t *)(param_3 + 0x10b8);
        uVar5 = (int)uVar6 + 1;
        uVar7 = uVar7 + 0x98;
        uVar4 = (int64_t)(int)uVar5;
        uVar6 = (uint64_t)uVar5;
      } while ((uint64_t)(int64_t)(int)uVar5 <
               (uint64_t)((*(int64_t *)(param_3 + 0x10c0) - lVar3) / 0x98));
    }
    piVar8 = (int *)(param_3 + 0x4c0);
    lVar12 = 0x10;
    lVar3 = 0x10;
    piVar11 = piVar8;
    do {
      if (*piVar11 != 0) {
        *(int *)((int64_t)piVar11 + lVar2) = *piVar11;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(piVar11 + -2) != (void *)0x0) {
          puVar9 = *(void **)(piVar11 + -2);
        }
        strcpy_s(*(uint64_t *)((int64_t)piVar11 + lVar2 + -8),0x40,puVar9);
      }
      piVar11 = piVar11 + 0x16;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar5 = *(uint *)(param_3 + 0x10e8);
    if (uVar5 != 0) {
      if (*(int64_t *)(param_3 + 0x10e0) != 0) {
        CoreEngineDataBufferProcessor(param_1 + 0x10d8,uVar5);
      }
      if (uVar5 != 0) {
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(param_1 + 0x10e0),*(uint64_t *)(param_3 + 0x10e0),(uint64_t)uVar5)
        ;
      }
      *(int32_t *)(param_1 + 0x10e8) = 0;
      if (*(int64_t *)(param_1 + 0x10e0) != 0) {
        *(int8_t *)((uint64_t)uVar5 + *(int64_t *)(param_1 + 0x10e0)) = 0;
      }
      *(int32_t *)(param_1 + 0x10f4) = *(int32_t *)(param_3 + 0x10f4);
    }
    if (*(int *)(param_3 + 0xf98) != 0) {
      *(int *)(param_1 + 0xf98) = *(int *)(param_3 + 0xf98);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0xf90) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0xf90);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0xf90),0x80,puVar9);
    }
    if (*(int *)(param_3 + 0x1030) != 0) {
      *(int *)(param_1 + 0x1030) = *(int *)(param_3 + 0x1030);
      puVar9 = &system_buffer_ptr;
      if (*(void **)(param_3 + 0x1028) != (void *)0x0) {
        puVar9 = *(void **)(param_3 + 0x1028);
      }
      strcpy_s(*(uint64_t *)(param_1 + 0x1028),0x80,puVar9);
    }
    do {
      if (*piVar8 != 0) {
        *(int *)(lVar2 + (int64_t)piVar8) = *piVar8;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(piVar8 + -2) != (void *)0x0) {
          puVar9 = *(void **)(piVar8 + -2);
        }
        strcpy_s(*(uint64_t *)(lVar2 + -8 + (int64_t)piVar8),0x40,puVar9);
      }
      piVar8 = piVar8 + 0x16;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(int8_t *)(param_1 + 0x10f8) = *(int8_t *)(param_3 + 0x10f8);
    return;
  }
// WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(param_1 + 8),*(uint64_t *)(param_3 + 8),uVar4);
}
uint64_t *
function_345660(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x1a;
  strcpy_s(param_2[1],0x80,&processed_var_4504_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
uint64_t * SystemCore_SyncController(uint64_t *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_4912_ptr;
  param_1[3] = 0;
  puVar1 = param_1 + 4;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 9) = 3;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  param_1[6] = 0;
  *(int8_t *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *param_1 = &processed_var_4544_ptr;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 0xd;
  lVar2 = param_1[3];
  if (param_1[3] != param_2) {
    lVar2 = param_2;
  }
  param_1[3] = lVar2;
  param_1[2] = param_3;
  return param_1;
}
uint64_t function_345790(uint64_t param_1,uint64_t param_2)
{
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}
// 函数: void UIComponent_Manager(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UIComponent_Manager(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_4544_ptr;
  function_080df0();
  *param_1 = &processed_var_4912_ptr;
  function_2f5b10(param_1 + 4,param_1[6],param_3,param_4,uVar1);
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_345840(int64_t param_1)
void function_345840(int64_t param_1)
{
  int8_t stack_array_348 [176];
  int8_t stack_array_298 [544];
  uint64_t local_var_78;
  local_var_78 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_348;
  if ((*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50)) / 0x30 != 0) {
// WARNING: Subroutine does not return
    memset(stack_array_298,0,0x200);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_78 ^ (uint64_t)stack_array_348);
}
// 函数: void function_3458a2(void)
void function_3458a2(void)
{
  uint64_t unaff_RBX;
  uint64_t unaff_RSI;
  int64_t in_R11;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x38) = unaff_RSI;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
// WARNING: Subroutine does not return
  memset(&local_buffer_000000b0,0,0x200);
}
// 函数: void function_3459e3(void)
void function_3459e3(void)
{
  uint64_t local_var_2d0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_2d0 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_345a10(int64_t param_1,uint64_t *param_2)
void function_345a10(int64_t param_1,uint64_t *param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  lVar8 = *(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50);
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  uVar4 = 0;
  uVar3 = *param_2;
  uVar5 = (lVar8 >> 3) - (lVar8 >> 0x3f);
  if ((uint64_t)((int64_t)(param_2[2] - uVar3) >> 5) < uVar5) {
    uVar2 = uVar4;
    if (uVar5 != 0) {
      uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar5 * 0x20,(char)param_2[3]);
      uVar3 = *param_2;
    }
    uVar3 = SystemCore_Initializer(uVar3,param_2[1],uVar2);
    puVar1 = (uint64_t *)param_2[1];
    puVar7 = (uint64_t *)*param_2;
    if (puVar7 != puVar1) {
      do {
        (**(code **)*puVar7)(puVar7,0);
        puVar7 = puVar7 + 4;
      } while (puVar7 != puVar1);
      puVar7 = (uint64_t *)*param_2;
    }
    if (puVar7 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar7);
    }
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar5 * 0x20 + uVar2;
  }
  uVar3 = uVar4;
  if (uVar5 != 0) {
    do {
      if (param_2[1] < param_2[2]) {
        param_2[1] = param_2[1] + 0x20;
        CoreEngineDataTransformer();
      }
      else {
        SystemCore_BackupSystem(param_2,uVar4 * 0x30 + *(int64_t *)(param_1 + 0x50));
      }
      uVar6 = (int)uVar3 + 1;
      uVar4 = (uint64_t)(int)uVar6;
      uVar3 = (uint64_t)uVar6;
    } while (uVar4 < uVar5);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_345a5f(uint64_t param_1)
void function_345a5f(uint64_t param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  uint64_t unaff_RBP;
  uint uVar4;
  uint64_t unaff_RSI;
  uint64_t *puVar5;
  uVar2 = unaff_RSI;
  if (unaff_RBP != 0) {
    uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RBP << 5,(char)unaff_RBX[3]);
    param_1 = *unaff_RBX;
  }
  uVar3 = SystemCore_Initializer(param_1,unaff_RBX[1],uVar2);
  puVar1 = (uint64_t *)unaff_RBX[1];
  puVar5 = (uint64_t *)*unaff_RBX;
  if (puVar5 != puVar1) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
    puVar5 = (uint64_t *)*unaff_RBX;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *unaff_RBX = uVar2;
    unaff_RBX[1] = uVar3;
    unaff_RBX[2] = unaff_RBP * 0x20 + uVar2;
    if (unaff_RBP != 0) {
      do {
        if (unaff_RBX[1] < unaff_RBX[2]) {
          unaff_RBX[1] = unaff_RBX[1] + 0x20;
          CoreEngineDataTransformer();
        }
        else {
          SystemCore_BackupSystem();
        }
        uVar4 = (int)unaff_RSI + 1;
        unaff_RSI = (uint64_t)uVar4;
      } while ((uint64_t)(int64_t)(int)uVar4 < unaff_RBP);
    }
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_345a69(uint64_t param_1)
void function_345a69(uint64_t param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  uint64_t unaff_RBP;
  uint uVar4;
  uint64_t unaff_RSI;
  uint64_t *puVar5;
  uVar2 = unaff_RSI;
  if (unaff_RBP != 0) {
    uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RBP << 5,(char)unaff_RBX[3]);
    param_1 = *unaff_RBX;
  }
  uVar3 = SystemCore_Initializer(param_1,unaff_RBX[1],uVar2);
  puVar1 = (uint64_t *)unaff_RBX[1];
  puVar5 = (uint64_t *)*unaff_RBX;
  if (puVar5 != puVar1) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
    puVar5 = (uint64_t *)*unaff_RBX;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *unaff_RBX = uVar2;
    unaff_RBX[1] = uVar3;
    unaff_RBX[2] = unaff_RBP * 0x20 + uVar2;
    if (unaff_RBP != 0) {
      do {
        if (unaff_RBX[1] < unaff_RBX[2]) {
          unaff_RBX[1] = unaff_RBX[1] + 0x20;
          CoreEngineDataTransformer();
        }
        else {
          SystemCore_BackupSystem();
        }
        uVar4 = (int)unaff_RSI + 1;
        unaff_RSI = (uint64_t)uVar4;
      } while ((uint64_t)(int64_t)(int)uVar4 < unaff_RBP);
    }
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}
// 函数: void function_345ae1(void)
void function_345ae1(void)
{
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_345b0d(void)
void function_345b0d(void)
{
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int unaff_ESI;
  if (unaff_RBP != 0) {
    do {
      if (*(uint64_t *)(unaff_RBX + 8) < *(uint64_t *)(unaff_RBX + 0x10)) {
        *(uint64_t *)(unaff_RBX + 8) = *(uint64_t *)(unaff_RBX + 8) + 0x20;
        CoreEngineDataTransformer();
      }
      else {
        SystemCore_BackupSystem();
      }
      unaff_ESI = unaff_ESI + 1;
    } while ((uint64_t)(int64_t)unaff_ESI < unaff_RBP);
  }
  return;
}
// 函数: void function_345b70(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint param_4)
void function_345b70(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint param_4)
{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  uint64_t uVar17;
  void *puVar18;
  int64_t lVar19;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int iStack_38;
  void *plocal_var_28;
  int64_t lStack_20;
  if (param_4 < 0xe) {
    lVar19 = (uint64_t)*(uint *)(&system_data_5f30 + (int64_t)(int)param_4 * 4) + 0x180000000;
    switch(param_4) {
    case 0:
      lVar19 = RenderingSystem_LightingEngine0(param_1);
      CoreEngineDataTransformer(&local_var_48,*(uint64_t *)(lVar19 + 0x20));
      puVar18 = &system_buffer_ptr;
      if ((void *)CONCAT44(local_var_3c,local_var_40) != (void *)0x0) {
        puVar18 = (void *)CONCAT44(local_var_3c,local_var_40);
      }
// WARNING: Subroutine does not return
      memcpy(param_3 + 0x20,puVar18,(int64_t)iStack_38);
    case 1:
      lVar19 = RenderingSystem_LightingEngine0(param_1);
      *(uint64_t *)(param_3 + 0xa0) = **(uint64_t **)(lVar19 + 0x20);
      break;
    case 2:
      lVar19 = RenderingSystem_LightingEngine0(param_1);
      param_3[0xa2] = **(int32_t **)(lVar19 + 0x20);
      break;
    case 3:
      lVar19 = RenderingSystem_LightingEngine0(param_1);
      param_3[0xa3] = (uint)**(byte **)(lVar19 + 0x20);
      break;
    case 4:
      lVar19 = RenderingSystem_LightingEngine0(param_1);
      param_3[0xa4] = **(int32_t **)(lVar19 + 0x20);
      break;
    case 5:
      uVar17 = SystemCore_EncryptionEngine0(&plocal_var_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = RenderingSystem_LightingEngine0(param_1,uVar17);
      puVar1 = *(int32_t **)(lVar19 + 0x20);
      local_var_48 = *puVar1;
      local_var_44 = puVar1[1];
      local_var_40 = puVar1[2];
      local_var_3c = puVar1[3];
      plocal_var_28 = &system_data_buffer_ptr;
      if (lStack_20 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_3[0x14] = local_var_48;
      param_3[0x15] = local_var_44;
      param_3[0x16] = local_var_40;
      param_3[0x17] = local_var_3c;
      break;
    case 6:
      lVar19 = RenderingSystem_LightingEngine0(param_1);
      *(uint64_t *)(param_3 + 0x18) = **(uint64_t **)(lVar19 + 0x20);
      break;
    case 7:
      uVar17 = SystemCore_EncryptionEngine0(&plocal_var_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = RenderingSystem_LightingEngine0(param_1,uVar17);
      *(uint64_t *)(param_3 + 0x1a) = **(uint64_t **)(lVar19 + 0x20);
      plocal_var_28 = &system_data_buffer_ptr;
      if (lStack_20 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      break;
    case 8:
      uVar17 = SystemCore_EncryptionEngine0(&plocal_var_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = RenderingSystem_LightingEngine0(param_1,uVar17);
      *(uint64_t *)(param_3 + 0x1c) = **(uint64_t **)(lVar19 + 0x20);
      plocal_var_28 = &system_data_buffer_ptr;
      if (lStack_20 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      break;
    case 9:
      lVar19 = RenderingSystem_LightingEngine0(param_1);
      CoreEngineDataTransformer(&local_var_48,*(uint64_t *)(lVar19 + 0x20));
      puVar18 = &system_buffer_ptr;
      if ((void *)CONCAT44(local_var_3c,local_var_40) != (void *)0x0) {
        puVar18 = (void *)CONCAT44(local_var_3c,local_var_40);
      }
// WARNING: Subroutine does not return
      memcpy(param_3 + 0x60,puVar18,(int64_t)iStack_38);
    case 10:
      uVar17 = SystemCore_EncryptionEngine0(&plocal_var_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = RenderingSystem_LightingEngine0(param_1,uVar17);
      *(uint64_t *)(param_3 + 0x1e) = **(uint64_t **)(lVar19 + 0x20);
      plocal_var_28 = &system_data_buffer_ptr;
      if (lStack_20 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      break;
    case 0xc:
      uVar17 = SystemCore_EncryptionEngine0(&plocal_var_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = RenderingSystem_LightingEngine0(param_1,uVar17);
      puVar1 = *(int32_t **)(lVar19 + 0x20);
      local_var_48 = *puVar1;
      local_var_44 = puVar1[1];
      local_var_40 = puVar1[2];
      local_var_3c = puVar1[3];
      plocal_var_28 = &system_data_buffer_ptr;
      if (lStack_20 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_3[0x10] = local_var_48;
      param_3[0x11] = local_var_44;
      param_3[0x12] = local_var_40;
      param_3[0x13] = local_var_3c;
      break;
    case 0xd:
      uVar17 = SystemCore_EncryptionEngine0(&plocal_var_28,param_2,param_3,lVar19,0,0xfffffffffffffffe);
      lVar19 = RenderingSystem_LightingEngine0(param_1,uVar17);
      puVar1 = *(int32_t **)(lVar19 + 0x20);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      *param_3 = *puVar1;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
      param_3[4] = uVar5;
      param_3[5] = uVar6;
      param_3[6] = uVar7;
      param_3[7] = uVar8;
      param_3[8] = uVar9;
      param_3[9] = uVar10;
      param_3[10] = uVar11;
      param_3[0xb] = uVar12;
      param_3[0xc] = uVar13;
      param_3[0xd] = uVar14;
      param_3[0xe] = uVar15;
      param_3[0xf] = uVar16;
      plocal_var_28 = &system_data_buffer_ptr;
      if (lStack_20 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
  }
  return;
}
int32_t function_345f70(int64_t param_1,int64_t param_2)
{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  uint64_t uVar7;
  lVar10 = *(int64_t *)(param_1 + 0x50);
  lVar8 = *(int64_t *)(param_1 + 0x58) - lVar10;
  uVar5 = 0;
  lVar9 = lVar8 >> 0x3f;
  if (lVar8 / 0x30 + lVar9 != lVar9) {
    uVar7 = uVar5;
    do {
      iVar3 = *(int *)(uVar5 + 0x10 + lVar10);
      if ((iVar3 == *(int *)(param_2 + 0x10)) && (iVar3 != 0)) {
        pcVar4 = *(char **)(uVar5 + 8 + lVar10);
        lVar9 = *(int64_t *)(param_2 + 8) - (int64_t)pcVar4;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[lVar9];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        bVar11 = cVar1 == cVar2;
      }
      else {
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x10) == 0)) goto LAB_180346068;
        bVar11 = false;
      }
      if (bVar11) {
LAB_180346068:
        return *(int32_t *)(lVar10 + 0x28 + (int64_t)(int)uVar7 * 0x30);
      }
      lVar10 = *(int64_t *)(param_1 + 0x50);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
      uVar5 = uVar5 + 0x30;
    } while ((uint64_t)(int64_t)(int)uVar6 <
             (uint64_t)((*(int64_t *)(param_1 + 0x58) - lVar10) / 0x30));
  }
  return 0xffffffff;
}
bool function_346080(void)
{
  int64_t lVar1;
  lVar1 = RenderingSystem_LightingEngine0();
  return lVar1 != 0;
}
// 函数: void SystemNetwork_Processor(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void SystemNetwork_Processor(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
{
  uint64_t *puVar1;
  void *plocal_var_50;
  int64_t lStack_48;
  int32_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  SystemCore_EncryptionEngine0(&plocal_var_50);
  puVar1 = *(uint64_t **)(param_1 + 0x58);
  local_var_30 = param_3;
  local_var_28 = param_4;
  if (puVar1 < *(uint64_t **)(param_1 + 0x60)) {
    *(uint64_t **)(param_1 + 0x58) = puVar1 + 6;
    *puVar1 = &system_state_ptr;
    puVar1[1] = 0;
    *(int32_t *)(puVar1 + 2) = 0;
    *puVar1 = &system_data_buffer_ptr;
    puVar1[3] = 0;
    puVar1[1] = 0;
    *(int32_t *)(puVar1 + 2) = 0;
    *(int32_t *)(puVar1 + 2) = local_var_40;
    puVar1[1] = lStack_48;
    *(int32_t *)((int64_t)puVar1 + 0x1c) = local_var_38._4_4_;
    *(int32_t *)(puVar1 + 3) = (int32_t)local_var_38;
    local_var_40 = 0;
    lStack_48 = 0;
    local_var_38 = 0;
    puVar1[4] = param_3;
    *(int32_t *)(puVar1 + 5) = param_4;
  }
  else {
    function_346430(param_1 + 0x50,&plocal_var_50);
  }
  plocal_var_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}