// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
/* 函数别名定义: DataDeserializer */
#define DataDeserializer DataDeserializer
// 99_part_07_part014.c - 11 个函数
// 函数: void function_4a7c00(int64_t param_1)
void function_4a7c00(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  function_4a7ac0();
  if (*(int64_t *)(param_1 + 0x30) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        Function_2152bae1(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
int64_t function_4a7c60(int64_t param_1)
{
  if (*(int64_t *)(param_1 + 0x40) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  if (*(int64_t *)(param_1 + 0x18) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return param_1;
}
// 函数: void function_4a7cb0(uint64_t *param_1)
void function_4a7cb0(uint64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uVar3 = 0;
  uVar4 = 0;
  if (0 < *(int *)((int64_t)param_1 + 4)) {
    uVar5 = uVar3;
    if (*(int *)((int64_t)param_1 + 4) < 1) goto LAB_1804a7d37;
    do {
      uVar4 = (uint)uVar5;
      lVar2 = *(int64_t *)(param_1[6] + (int64_t)((int)uVar4 >> 10) * 8);
      lVar1 = (int64_t)(int)(*(uint *)(param_1 + 10) & uVar4) * 0x68;
      if ((*(int *)(lVar2 + lVar1) != -1) && (lVar2 = lVar1 + 8 + lVar2, lVar2 != 0)) {
        if (*(int64_t *)(lVar2 + 0x40) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        if (*(int64_t *)(lVar2 + 0x18) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
      }
LAB_1804a7d37:
      uVar5 = (uint64_t)(uVar4 + 1);
    } while ((int)(uVar4 + 1) < *(int *)((int64_t)param_1 + 4));
  }
  lVar2 = param_1[6];
  uVar5 = uVar3;
  if (param_1[7] - lVar2 >> 3 != 0) {
    do {
      if (*(int64_t *)(uVar3 + lVar2) != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      *(uint64_t *)(uVar3 + lVar2) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      lVar2 = param_1[6];
      uVar5 = (uint64_t)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(param_1[7] - lVar2 >> 3));
  }
  param_1[7] = lVar2;
  param_1[3] = param_1[2];
  *param_1 = 0;
  return;
}
// 函数: void function_4a7db0(int64_t param_1)
void function_4a7db0(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  function_4a7cb0();
  if (*(int64_t *)(param_1 + 0x30) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        Function_2152bae1(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_4a7e10(uint64_t *param_1)
void function_4a7e10(uint64_t *param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  lVar1 = param_1[6];
  uVar2 = 0;
  uVar4 = uVar2;
  if (param_1[7] - lVar1 >> 3 != 0) {
    do {
      if (*(int64_t *)(uVar4 + lVar1) != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      *(uint64_t *)(uVar4 + lVar1) = 0;
      uVar3 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar3;
      lVar1 = param_1[6];
      uVar4 = uVar4 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(param_1[7] - lVar1 >> 3));
  }
  param_1[7] = lVar1;
  param_1[3] = param_1[2];
  *param_1 = 0;
  return;
}
// 函数: void function_4a7e3a(void)
void function_4a7e3a(void)
{
  uint64_t in_RAX;
  uint64_t *unaff_RBX;
  uint64_t unaff_RBP;
  int unaff_ESI;
  uint64_t uVar1;
  uVar1 = unaff_RBP & 0xffffffff;
  do {
    if (*(int64_t *)(uVar1 + in_RAX) != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    *(uint64_t *)(uVar1 + in_RAX) = unaff_RBP;
    unaff_ESI = unaff_ESI + 1;
    in_RAX = unaff_RBX[6];
    uVar1 = uVar1 + 8;
  } while ((uint64_t)(int64_t)unaff_ESI < (uint64_t)((int64_t)(unaff_RBX[7] - in_RAX) >> 3));
  unaff_RBX[7] = in_RAX;
  unaff_RBX[3] = unaff_RBX[2];
  *unaff_RBX = unaff_RBP;
  return;
}
// 函数: void function_4a7e79(void)
void function_4a7e79(void)
{
  uint64_t in_RAX;
  uint64_t *unaff_RBX;
  uint64_t unaff_RBP;
  unaff_RBX[7] = in_RAX;
  unaff_RBX[3] = unaff_RBX[2];
  *unaff_RBX = unaff_RBP;
  return;
}
// 函数: void function_4a7ea0(int64_t param_1)
void function_4a7ea0(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  function_4a7e10();
  if (*(int64_t *)(param_1 + 0x30) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemCore_DebugHandler();
          return;
        }
      }
      else {
        Function_2152bae1(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_4a7f00(uint64_t *param_1)
void function_4a7f00(uint64_t *param_1)
{
  *param_1 = &ui_system_data_1952_ptr;
  function_4a7e10(param_1 + 0x598);
  if (param_1[0x59e] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  if (param_1[0x59a] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  function_368c20();
  function_4a7cb0(param_1 + 0x587);
  if (param_1[0x58d] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  if (param_1[0x589] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  _Mtx_destroy_in_situ();
  function_17b400(param_1 + 0x577,param_1[0x579]);
  UtilitiesSystem_Processor();
  UtilitiesSystem_Processor();
  function_15b4f0();
  function_4a7ac0(param_1 + 0x559);
  if (param_1[0x55f] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  if (param_1[0x55b] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  function_1b99e0(param_1 + 0xd8);
  function_4a7730(param_1 + 0xcd);
  function_4a7e10(param_1 + 0xc2);
  if (param_1[200] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  if (param_1[0xc4] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  function_4a7910(param_1 + 0xb7);
  function_4a77f0(param_1 + 0xac);
  function_4a77f0(param_1 + 0xa1);
  function_4a7730(param_1 + 0x96);
  function_4a7730(param_1 + 0x8b);
  if ((int64_t *)param_1[0x89] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x89] + 0x38))();
  }
  if ((int64_t *)param_1[0x88] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x88] + 0x38))();
  }
  if (param_1[0x84] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  function_4a7730(param_1 + 0x79);
  function_4a7730(param_1 + 0x6e);
  SystemDataValidator(param_1 + 0x16,0x58,8,function_4a7600);
  if (param_1[0xd] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *param_1 = &memory_allocator_3952_ptr;
  if (param_1[1] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}
uint64_t * function_4a8200(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_4296_ptr;
  param_1[0x1e] = &system_data_buffer_ptr;
  if (param_1[0x1f] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  param_1[0x1e] = &system_state_ptr;
  param_1[0x1a] = &system_data_buffer_ptr;
  if (param_1[0x1b] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = &system_state_ptr;
  param_1[0x16] = &system_data_buffer_ptr;
  if (param_1[0x17] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x16] = &system_state_ptr;
  param_1[0x12] = &system_data_buffer_ptr;
  if (param_1[0x13] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x12] = &system_state_ptr;
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x118);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4a8340(uint64_t *param_1)
void function_4a8340(uint64_t *param_1)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *plocal_var_a0;
  uint64_t *plocal_var_98;
  int32_t local_var_90;
  uint64_t local_var_88;
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  SystemCore_SyncController();
  *puVar3 = &processed_var_4296_ptr;
  puVar3[0xe] = &system_state_ptr;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  puVar3[0xe] = &system_data_buffer_ptr;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  param_1[0x12] = &system_state_ptr;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  param_1[0x12] = &system_data_buffer_ptr;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  puVar3 = param_1 + 0x16;
  *puVar3 = &system_state_ptr;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  *puVar3 = &system_data_buffer_ptr;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x1a] = &system_state_ptr;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = &system_data_buffer_ptr;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = &system_state_ptr;
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  param_1[0x1e] = &system_data_buffer_ptr;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  plocal_var_a0 = &system_data_buffer_ptr;
  local_var_88 = 0;
  plocal_var_98 = (uint64_t *)0x0;
  local_var_90 = 0;
  puVar2 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_98 = puVar2;
  uVar1 = function_64e990(puVar2);
  local_var_88 = CONCAT44(local_var_88._4_4_,uVar1);
  *puVar2 = 0x656d614e6873654d;
  *(int8_t *)(puVar2 + 1) = 0;
  local_var_90 = 8;
  SystemNetwork_Processor(param_1,&plocal_var_a0,puVar3,0,uVar4);
  plocal_var_a0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4a8630(uint64_t param_1)
void function_4a8630(uint64_t param_1)
{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t ****pppplVar6;
  int64_t ****pppplVar7;
  int64_t ***ppplVar8;
  int iVar9;
  byte *pbVar10;
  int64_t *****ppppplVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint uVar15;
  int iVar16;
  int64_t lVar17;
  void *puVar18;
  int32_t uVar19;
  int8_t stack_array_178 [32];
  int32_t local_var_158;
  int32_t local_var_150;
  int32_t local_var_148;
  int32_t local_var_140;
  int32_t local_var_138;
  int8_t local_var_130;
  int8_t local_var_128;
  int8_t local_var_120;
  int8_t local_var_118;
  int64_t ****pppplStack_108;
  int64_t ****pppplStack_100;
  int64_t ****pppplStack_f8;
  int64_t ****apppplStack_f0 [2];
  uint64_t local_var_e0;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int iStack_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  local_var_e0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  lVar12 = 0;
  lVar17 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
  uVar14 = param_1;
  if (lVar17 == 0) {
LAB_1804a86c5:
    if (*(int *)(param_1 + 0x80) != 0) {
      function_0b3970(uVar14,&pppplStack_100,param_1 + 0x70,0);
      if ((int64_t *****)pppplStack_100 != (int64_t *****)0x0) {
        ppppplVar11 = (int64_t *****)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x70,8,3);
        *ppppplVar11 = (int64_t ****)&ui_system_data_1864_ptr;
        *ppppplVar11 = (int64_t ****)&ui_system_data_1608_ptr;
        ppppplVar11[9] = (int64_t ****)0x0;
        ppppplVar11[10] = (int64_t ****)0x0;
        *ppppplVar11 = (int64_t ****)&ui_system_data_1912_ptr;
        ppppplVar11[0xc] = (int64_t ****)0x0;
        ppppplVar11[0xd] = (int64_t ****)0x0;
        ppppplVar11[0xb] = (int64_t ****)0x0;
        pppplStack_f8 = (int64_t ****)ppppplVar11;
        function_2f8a10(ppppplVar11,pppplStack_100);
        function_2ec3d0(*(uint64_t *)(param_1 + 0x18),pppplStack_100,ppppplVar11);
      }
      if ((int64_t *****)pppplStack_100 != (int64_t *****)0x0) {
        (*(code *)(*pppplStack_100)[7])();
      }
    }
  }
  else {
    lVar17 = *(int64_t *)(lVar17 + 0x208);
    uVar3 = *(uint *)(lVar17 + 0x20);
    uVar15 = *(uint *)(param_1 + 0x80);
    uVar14 = (uint64_t)uVar15;
    if (uVar3 == uVar15) {
      if (uVar3 != 0) {
        pbVar10 = *(byte **)(lVar17 + 0x18);
        lVar17 = *(int64_t *)(param_1 + 0x78) - (int64_t)pbVar10;
        do {
          bVar2 = pbVar10[lVar17];
          uVar14 = (uint64_t)bVar2;
          uVar15 = (uint)*pbVar10 - (uint)bVar2;
          if (uVar15 != 0) break;
          pbVar10 = pbVar10 + 1;
        } while (bVar2 != 0);
      }
    }
    else if (uVar3 != 0) goto LAB_1804a86c5;
    if (uVar15 != 0) goto LAB_1804a86c5;
  }
  if (*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260) == 0) goto LAB_1804a8e62;
  iVar9 = *(int *)(param_1 + 0xe0);
  iVar16 = *(int *)(param_1 + 0xa0);
  if (iVar9 == iVar16) {
    if (iVar9 != 0) {
      pbVar10 = *(byte **)(param_1 + 0xd8);
      lVar17 = *(int64_t *)(param_1 + 0x98) - (int64_t)pbVar10;
      do {
        pbVar1 = pbVar10 + lVar17;
        iVar16 = (uint)*pbVar10 - (uint)*pbVar1;
        if (iVar16 != 0) break;
        pbVar10 = pbVar10 + 1;
      } while (*pbVar1 != 0);
    }
LAB_1804a87cd:
    if (iVar16 != 0) goto LAB_1804a87d3;
  }
  else {
    if (iVar9 == 0) goto LAB_1804a87cd;
LAB_1804a87d3:
    plocal_var_d8 = &memory_allocator_3480_ptr;
    plocal_var_d0 = stack_array_c0;
    stack_array_c0[0] = 0;
    iStack_c8 = *(int *)(param_1 + 0xa0);
    puVar18 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x98) != (void *)0x0) {
      puVar18 = *(void **)(param_1 + 0x98);
    }
    strcpy_s(stack_array_c0,0x40,puVar18);
    if (((0 < iStack_c8) && (iVar9 = function_53a2e0(&system_data_5f30,&plocal_var_d8), iVar9 != -1)) &&
       (iVar9 = *(int *)(system_system_memory + (int64_t)iVar9 * 4), iVar9 != -1)) {
      lVar12 = *(int64_t *)(system_system_memory + (int64_t)iVar9 * 8);
    }
    plocal_var_d8 = &system_state_ptr;
    if (lVar12 != 0) {
      SystemCore_ConfigurationHandler0(param_1 + 0xd0,param_1 + 0x90);
      lVar17 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
      plVar4 = *(int64_t **)(lVar17 + 0x210);
      local_var_118 = 0;
      local_var_120 = 0;
      local_var_128 = 1;
      local_var_130 = 0;
      local_var_138 = 0x3f800000;
      local_var_140 = 0;
      local_var_148 = 0x4004;
      local_var_150 = 0;
      local_var_158 = 0x3f800000;
      (**(code **)(*plVar4 + 0x70))(plVar4,0,lVar12,*(uint64_t *)(lVar17 + 0x208));
    }
  }
  iVar9 = *(int *)(param_1 + 0x100);
  iVar16 = *(int *)(param_1 + 0xc0);
  if (iVar9 == iVar16) {
    if (iVar9 != 0) {
      pbVar10 = *(byte **)(param_1 + 0xf8);
      lVar17 = *(int64_t *)(param_1 + 0xb8) - (int64_t)pbVar10;
      do {
        pbVar1 = pbVar10 + lVar17;
        iVar16 = (uint)*pbVar10 - (uint)*pbVar1;
        if (iVar16 != 0) break;
        pbVar10 = pbVar10 + 1;
      } while (*pbVar1 != 0);
    }
LAB_1804a892d:
    if (iVar16 == 0) goto LAB_1804a8e62;
  }
  else if (iVar9 == 0) goto LAB_1804a892d;
  SystemCore_ConfigurationHandler0(param_1 + 0xf0,param_1 + 0xb0);
  uVar19 = function_2fc320(*(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260));
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  iStack_c8 = 0;
  stack_array_c0[0] = 0;
  lVar17 = -1;
  if (*(int64_t *)(&processed_var_6160_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(*(int64_t *)
                        (&processed_var_6160_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar12)
             != '\0');
    iStack_c8 = (int)lVar12;
    uVar19 = strcpy_s(stack_array_c0,0x80);
  }
  function_0c48e0(uVar19,&pppplStack_100,&plocal_var_d8,1);
  plocal_var_d8 = &system_state_ptr;
  uVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
  pppplStack_f8 = (int64_t ****)&pppplStack_108;
  pppplStack_108 = pppplStack_100;
  if ((int64_t *****)pppplStack_100 != (int64_t *****)0x0) {
    (*(code *)(*pppplStack_100)[5])();
  }
  apppplStack_f0[0] = (int64_t ****)&pppplStack_108;
  uVar19 = function_2fc0f0(uVar5,pppplStack_108);
  if ((int64_t *****)pppplStack_108 != (int64_t *****)0x0) {
    uVar19 = (*(code *)(*pppplStack_108)[7])();
  }
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  iStack_c8 = 0;
  stack_array_c0[0] = 0;
  if (*(int64_t *)(&processed_var_6080_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(*(int64_t *)
                        (&processed_var_6080_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar12)
             != '\0');
    iStack_c8 = (int)lVar12;
    uVar19 = strcpy_s(stack_array_c0,0x80);
  }
  puVar13 = (uint64_t *)function_0c48e0(uVar19,&pppplStack_f8,&plocal_var_d8,1);
  pppplVar6 = (int64_t ****)*puVar13;
  *puVar13 = 0;
  apppplStack_f0[0] = pppplStack_100;
  if ((int64_t *****)pppplStack_100 != (int64_t *****)0x0) {
    pppplVar7 = (int64_t ****)*pppplStack_100;
    pppplStack_100 = pppplVar6;
    (*(code *)pppplVar7[7])();
    pppplVar6 = pppplStack_100;
  }
  pppplStack_100 = pppplVar6;
  if ((int64_t *****)pppplStack_f8 != (int64_t *****)0x0) {
    (*(code *)(*pppplStack_f8)[7])();
  }
  plocal_var_d8 = &system_state_ptr;
  uVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
  pppplStack_f8 = (int64_t ****)&pppplStack_108;
  pppplStack_108 = pppplStack_100;
  if (pppplStack_100 != (int64_t ****)0x0) {
    (*(code *)(*pppplStack_100)[5])();
  }
  apppplStack_f0[0] = (int64_t ****)&pppplStack_108;
  uVar19 = function_2fc0f0(uVar5,pppplStack_108);
  if (pppplStack_108 != (int64_t ****)0x0) {
    uVar19 = (*(code *)(*pppplStack_108)[7])();
  }
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  iStack_c8 = 0;
  stack_array_c0[0] = 0;
  if (*(int64_t *)(&processed_var_6320_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(*(int64_t *)
                        (&processed_var_6320_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar12)
             != '\0');
    iStack_c8 = (int)lVar12;
    uVar19 = strcpy_s(stack_array_c0,0x80);
  }
  puVar13 = (uint64_t *)function_0c48e0(uVar19,apppplStack_f0,&plocal_var_d8,1);
  pppplVar6 = (int64_t ****)*puVar13;
  *puVar13 = 0;
  pppplStack_f8 = pppplStack_100;
  if (pppplStack_100 != (int64_t ****)0x0) {
    ppplVar8 = *pppplStack_100;
    pppplStack_100 = pppplVar6;
    (*(code *)ppplVar8[7])();
    pppplVar6 = pppplStack_100;
  }
  pppplStack_100 = pppplVar6;
  if ((int64_t *****)apppplStack_f0[0] != (int64_t *****)0x0) {
    (*(code *)(*apppplStack_f0[0])[7])();
  }
  plocal_var_d8 = &system_state_ptr;
  uVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
  pppplStack_f8 = (int64_t ****)&pppplStack_108;
  pppplStack_108 = pppplStack_100;
  if (pppplStack_100 != (int64_t ****)0x0) {
    (*(code *)(*pppplStack_100)[5])();
  }
  apppplStack_f0[0] = (int64_t ****)&pppplStack_108;
  uVar19 = function_2fc0f0(uVar5,pppplStack_108);
  if (pppplStack_108 != (int64_t ****)0x0) {
    uVar19 = (*(code *)(*pppplStack_108)[7])();
  }
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  iStack_c8 = 0;
  stack_array_c0[0] = 0;
  if (*(int64_t *)(&processed_var_6400_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(*(int64_t *)
                        (&processed_var_6400_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar12)
             != '\0');
    iStack_c8 = (int)lVar12;
    uVar19 = strcpy_s(stack_array_c0,0x80);
  }
  puVar13 = (uint64_t *)function_0c48e0(uVar19,apppplStack_f0,&plocal_var_d8,1);
  ppppplVar11 = (int64_t *****)*puVar13;
  *puVar13 = 0;
  pppplStack_f8 = pppplStack_100;
  if (pppplStack_100 != (int64_t ****)0x0) {
    ppplVar8 = *pppplStack_100;
    pppplStack_100 = (int64_t ****)ppppplVar11;
    (*(code *)ppplVar8[7])();
    ppppplVar11 = (int64_t *****)pppplStack_100;
  }
  pppplStack_100 = (int64_t ****)ppppplVar11;
  if ((int64_t *****)apppplStack_f0[0] != (int64_t *****)0x0) {
    (*(code *)(*apppplStack_f0[0])[7])();
  }
  plocal_var_d8 = &system_state_ptr;
  uVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
  pppplStack_f8 = (int64_t ****)&pppplStack_108;
  pppplStack_108 = pppplStack_100;
  if ((int64_t *****)pppplStack_100 != (int64_t *****)0x0) {
    (*(code *)(*pppplStack_100)[5])();
  }
  apppplStack_f0[0] = (int64_t ****)&pppplStack_108;
  uVar19 = function_2fc0f0(uVar5,pppplStack_108);
  if ((int64_t *****)pppplStack_108 != (int64_t *****)0x0) {
    uVar19 = (*(code *)(*pppplStack_108)[7])();
  }
  plocal_var_d8 = &memory_allocator_3432_ptr;
  plocal_var_d0 = stack_array_c0;
  iStack_c8 = 0;
  stack_array_c0[0] = 0;
  if (*(int64_t *)(&processed_var_6240_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) != 0) {
    do {
      lVar17 = lVar17 + 1;
    } while (*(char *)(*(int64_t *)
                        (&processed_var_6240_ptr + (int64_t)(*(int *)(param_1 + 0x110) % 10) * 8) + lVar17)
             != '\0');
    iStack_c8 = (int)lVar17;
    uVar19 = strcpy_s(stack_array_c0,0x80);
  }
  puVar13 = (uint64_t *)function_0c48e0(uVar19,apppplStack_f0,&plocal_var_d8,0);
  ppppplVar11 = (int64_t *****)*puVar13;
  *puVar13 = 0;
  pppplStack_f8 = pppplStack_100;
  if ((int64_t *****)pppplStack_100 != (int64_t *****)0x0) {
    pppplVar6 = (int64_t ****)*pppplStack_100;
    pppplStack_100 = (int64_t ****)ppppplVar11;
    (*(code *)pppplVar6[7])();
    ppppplVar11 = (int64_t *****)pppplStack_100;
  }
  pppplStack_100 = (int64_t ****)ppppplVar11;
  if ((int64_t *****)apppplStack_f0[0] != (int64_t *****)0x0) {
    (*(code *)(*apppplStack_f0[0])[7])();
  }
  plocal_var_d8 = &system_state_ptr;
  if ((int64_t *****)pppplStack_100 != (int64_t *****)0x0) {
    uVar5 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260);
    pppplStack_f8 = (int64_t ****)&pppplStack_108;
    pppplStack_108 = pppplStack_100;
    (*(code *)(*pppplStack_100)[5])();
    function_2fc2e0(uVar5,&pppplStack_108);
  }
  if ((int64_t *****)pppplStack_100 != (int64_t *****)0x0) {
    (*(code *)(*pppplStack_100)[7])();
  }
LAB_1804a8e62:
// WARNING: Subroutine does not return
  CoreSystemConfigManager(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4a8e90(uint64_t param_1)
void function_4a8e90(uint64_t param_1)
{
  int8_t stack_array_1e8 [32];
  int32_t local_var_1c8;
  void **applocal_var_1c0 [2];
  uint64_t local_var_1b0;
  void *aplocal_var_1a8 [11];
  int32_t local_var_150;
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
  local_var_1b0 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  local_var_1c8 = 0;
  plocal_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = 0;
  local_var_138 = 8;
  strcpy_s(stack_array_130,0x40,&system_data_dca0);
  DataDeserializer0(aplocal_var_1a8,&plocal_var_148);
  local_var_150 = 0;
  local_var_1c8 = 1;
  MathOptimizationEngine0(param_1,applocal_var_1c0,aplocal_var_1a8);
  local_var_1c8 = 0;
  applocal_var_1c0[0] = aplocal_var_1a8;
  aplocal_var_1a8[0] = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0xc;
  strcpy_s(stack_array_d0,0x40,&system_data_dc90);
  DataDeserializer0(aplocal_var_1a8,&plocal_var_e8);
  local_var_150 = 0;
  local_var_1c8 = 2;
  MathOptimizationEngine0(param_1,applocal_var_1c0,aplocal_var_1a8);
  local_var_1c8 = 0;
  applocal_var_1c0[0] = aplocal_var_1a8;
  aplocal_var_1a8[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0xd;
  strcpy_s(stack_array_70,0x40,&system_data_dcb0);
  DataDeserializer0(aplocal_var_1a8,&plocal_var_88);
  local_var_150 = 0;
  local_var_1c8 = 4;
  MathOptimizationEngine0(param_1,applocal_var_1c0,aplocal_var_1a8);
  local_var_1c8 = 0;
  applocal_var_1c0[0] = aplocal_var_1a8;
  aplocal_var_1a8[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  CoreSystemConfigManager(local_var_28 ^ (uint64_t)stack_array_1e8);
}
uint64_t *
function_4a90a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_4704_ptr;
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address