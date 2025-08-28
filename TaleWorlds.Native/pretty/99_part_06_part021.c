// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager
// 99_part_06_part021.c - 8 个函数
// 函数: void function_3b9430(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_3b9430(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  function_3b9430(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (param_2[6] != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(param_2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3b94a0(int64_t param_1,int64_t param_2)
void function_3b94a0(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
// WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}
// 函数: void function_3b95a0(int64_t param_1)
void function_3b95a0(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
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
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9640(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c06730;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9740(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c06770;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// 函数: void function_3b9820(int64_t *param_1)
void function_3b9820(int64_t *param_1)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  puVar1 = (uint64_t *)*param_1;
  puVar2 = (int32_t *)puVar1[2];
  local_var_28 = *puVar2;
  local_var_24 = puVar2[1];
  local_var_20 = puVar2[2];
  local_var_1c = puVar2[3];
  local_var_18 = *(uint64_t *)(puVar2 + 4);
  function_3b4700(*puVar1,puVar1[1] + 0x30,&local_var_28);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9860(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c067b0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9960(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c065f0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// 函数: void function_3b9a40(int64_t *param_1)
void function_3b9a40(int64_t *param_1)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  puVar1 = (uint64_t *)*param_1;
  puVar2 = (int32_t *)puVar1[2];
  local_var_18 = *puVar2;
  local_var_14 = puVar2[1];
  local_var_10 = puVar2[2];
  local_var_c = puVar2[3];
  function_3b4280(*puVar1,puVar1[1] + 0x1c,&local_var_18);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9a70(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c06630;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9b60(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c06670;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9c50(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c066b0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9d40(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c064f0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9e30(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c06530;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3b9f20(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c06570;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
int8_t function_3ba0b0(int64_t param_1,uint64_t param_2,int64_t *param_3)
{
  int8_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  *(int8_t *)(*param_3 + 0x1c3a) = 0x23;
  lVar2 = *param_3;
  uVar3 = param_3[1];
  if (*(uint64_t *)(lVar2 + 0x1c30) < uVar3 + 1) {
    System_BufferManager(lVar2 + 0x1c20);
    lVar2 = *param_3;
    uVar3 = param_3[1];
  }
  if ((uint64_t)
      ((*(int64_t *)(lVar2 + 0x1c30) - *(int64_t *)(lVar2 + 0x1c28)) +
      *(int64_t *)(lVar2 + 0x1c20)) <= uVar3) {
    System_BufferManager(lVar2 + 0x1c20,
                  (*(int64_t *)(lVar2 + 0x1c28) - *(int64_t *)(lVar2 + 0x1c20)) + uVar3);
    uVar3 = param_3[1];
    lVar2 = *param_3;
  }
  function_63a180(lVar2 + 0x1c20,*(uint64_t *)(param_1 + 8),uVar3);
  *(uint64_t *)(*param_3 + 0x1c28) = *(uint64_t *)(*param_3 + 0x1c20);
  LOCK();
  uVar1 = *(int8_t *)(*param_3 + 0x1c41);
  *(int8_t *)(*param_3 + 0x1c41) = 1;
  UNLOCK();
  LOCK();
  *(int8_t *)(*param_3 + 0x1c40) = 1;
  UNLOCK();
  return uVar1;
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3ba1b0(int64_t *param_1)
void function_3ba1b0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int ***pppiVar4;
  int64_t lVar5;
  char cVar6;
  int ****ppppiVar7;
  int *****pppppiVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int64_t lVar14;
  int ****ppppiStack_68;
  uint64_t *plocal_var_60;
  int ****ppppiStack_58;
  uint64_t local_var_50;
  int ****ppppiStack_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  void *plocal_var_38;
  void *plocal_var_30;
  plocal_var_30 = (void *)0x1803ba1c1;
  function_3b2400(*param_1);
  if (*(char *)param_1[1] == '\0') {
    return;
  }
  lVar5 = *param_1;
  lVar1 = *(int64_t *)(*(int64_t *)(lVar5 + 0x68) + 0x2908);
  plVar2 = *(int64_t **)(*(int64_t *)(lVar5 + 0x68) + 0x318);
  if ((plVar2 != (int64_t *)0x0) && (cVar6 = (**(code **)(*plVar2 + 0xa0))(), cVar6 != '\0')) {
    if (*(char *)(*(int64_t *)(lVar5 + 0x68) + 0x2910) == '\0') {
      iVar12 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar13 = 0;
        lVar14 = 0;
        do {
          iVar11 = 0;
          if (0 < *(int *)(lVar1 + 0x10)) {
            do {
              lVar3 = *(int64_t *)(lVar5 + 0x40);
              puVar9 = (uint64_t *)
                       (lVar3 + ((uint64_t)(int64_t)(iVar13 + iVar11) %
                                (uint64_t)*(uint *)(lVar5 + 0x48)) * 8);
              for (ppppiVar7 = (int ****)*puVar9; ppppiVar7 != (int ****)0x0;
                  ppppiVar7 = (int ****)ppppiVar7[2]) {
                if ((iVar12 == *(int *)ppppiVar7) && (iVar11 == *(int *)((int64_t)ppppiVar7 + 4)))
                {
                  ppppiStack_68 = ppppiVar7;
                  plocal_var_60 = puVar9;
                  pppppiVar8 = &ppppiStack_68;
                  lVar10 = *(int64_t *)(lVar5 + 0x48);
                  goto LAB_1803b1fdd;
                }
              }
              lVar10 = *(int64_t *)(lVar5 + 0x48);
              local_var_50 = (uint64_t *)(lVar3 + lVar10 * 8);
              ppppiStack_58 = (int ****)*local_var_50;
              pppppiVar8 = &ppppiStack_58;
LAB_1803b1fdd:
              if ((*pppppiVar8 != *(int *****)(lVar3 + lVar10 * 8)) &&
                 (pppiVar4 = (*pppppiVar8)[1], pppiVar4 != (int ***)0x0)) {
                (*(code *)(*pppiVar4)[5])
                          (pppiVar4,*(uint64_t *)(lVar5 + 0x68),
                           (int64_t)iVar11 * 0x68 +
                           *(int64_t *)(lVar14 + *(int64_t *)(lVar1 + 0x40)),iVar12,iVar11);
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(lVar1 + 0x10));
          }
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 1000;
          lVar14 = lVar14 + 8;
        } while (iVar12 < *(int *)(lVar1 + 0xc));
      }
    }
    else {
      puVar9 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
      *puVar9 = *(uint64_t *)(lVar5 + 0x68);
      puVar9[1] = 0;
      ppppiStack_68 = (int ****)0x0;
      plocal_var_60 = (uint64_t *)0x7f7fffff00000000;
      ppppiStack_58 = (int ****)&ppppiStack_68;
      plocal_var_38 = &processed_var_5952_ptr;
      plocal_var_30 = &processed_var_5936_ptr;
      local_var_50._0_4_ = SUB84(puVar9,0);
      local_var_50._4_4_ = (int32_t)((uint64_t)puVar9 >> 0x20);
      local_var_40 = (int32_t)local_var_50;
      local_var_3c = local_var_50._4_4_;
      local_var_50 = puVar9;
      ppppiStack_48 = ppppiStack_58;
      SystemCore_SecurityManager(&ppppiStack_48);
      *(uint64_t **)(*(int64_t *)(lVar5 + 0x68) + 0x2918) = puVar9;
    }
  }
  return;
}
// 函数: void function_3ba220(int64_t *param_1)
void function_3ba220(int64_t *param_1)
{
  int iVar1;
  int64_t lVar2;
  int *piVar3;
  int64_t lVar4;
  int **ppiVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int *piStack_38;
  int64_t lStack_30;
  int *piStack_28;
  int64_t lStack_20;
  lStack_30 = 0x1803ba231;
  function_3b6df0(*param_1);
  lVar4 = *param_1;
  uVar8 = 0;
  uVar10 = uVar8;
  uVar11 = uVar8;
  if (0 < *(int *)(lVar4 + 0x14)) {
    do {
      uVar6 = uVar8;
      if (0 < *(int *)(lVar4 + 0x18)) {
        do {
          iVar1 = (int)uVar6;
          lVar2 = *(int64_t *)(lVar4 + 0x40);
          uVar6 = (uint64_t)(int64_t)((int)uVar11 + iVar1) % (uint64_t)*(uint *)(lVar4 + 0x48);
          for (piVar3 = *(int **)(lVar2 + uVar6 * 8); piVar3 != (int *)0x0;
              piVar3 = *(int **)(piVar3 + 4)) {
            if (((int)uVar10 == *piVar3) && (iVar1 == piVar3[1])) {
              lVar7 = *(int64_t *)(lVar4 + 0x48);
              piStack_38 = piVar3;
              ppiVar5 = &piStack_38;
              lStack_30 = lVar2 + uVar6 * 8;
              goto LAB_1803b8932;
            }
          }
          lVar7 = *(int64_t *)(lVar4 + 0x48);
          piStack_28 = *(int **)(lVar2 + lVar7 * 8);
          ppiVar5 = &piStack_28;
          lStack_20 = lVar2 + lVar7 * 8;
LAB_1803b8932:
          if ((*ppiVar5 != *(int **)(lVar2 + lVar7 * 8)) && (*(int64_t *)(*ppiVar5 + 2) != 0)) {
            function_3a2e70();
          }
          uVar6 = (uint64_t)(iVar1 + 1U);
        } while ((int)(iVar1 + 1U) < *(int *)(lVar4 + 0x18));
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar9;
      uVar11 = (uint64_t)((int)uVar11 + 1000);
    } while ((int)uVar9 < *(int *)(lVar4 + 0x14));
  }
  if (0 < *(int *)(lVar4 + 0x78)) {
    iVar1 = *(int *)(*(int64_t *)(lVar4 + 0x68) + 0x3054);
    uVar10 = uVar8;
    do {
      function_1fd6e0(*(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x68) + 0x60b20) + uVar8) +
                      8 + (int64_t)iVar1 * 8),lVar4 + 0x1f0 + (int64_t)(int)uVar10 * 0x1a0,
                    lVar4 + 0x188);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar9;
      uVar8 = uVar8 + 8;
    } while ((int)uVar9 < *(int *)(lVar4 + 0x78));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3ba280(int64_t param_1,int64_t param_2,uint64_t param_3)
void function_3ba280(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  char *pcVar2;
  uint64_t uVar3;
  int64_t lVar4;
  void *puVar5;
  uint64_t *puVar6;
  void *puVar7;
  char *pcVar8;
  void *puVar10;
  uint64_t *puVar11;
  int8_t stack_array_c8 [32];
  int64_t *plStack_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  char *pcVar9;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  pcVar8 = "skeleton";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  puVar6 = *(uint64_t **)(param_2 + 0x30);
  if (puVar6 != (uint64_t *)0x0) {
    do {
      pcVar8 = (char *)*puVar6;
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)0x180d48d24;
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = (char *)puVar6[2];
      }
      if (pcVar2 == pcVar9 + -0x180a19cb7) {
        pcVar2 = pcVar2 + (int64_t)pcVar8;
        if (pcVar2 <= pcVar8) {
LAB_1803ba320:
          lVar4 = *(int64_t *)(param_1 + 0x28);
          lVar1 = *(int64_t *)(lVar4 + 0x268);
          if (lVar1 == 0) {
            plocal_var_98 = &memory_allocator_3480_ptr;
            plocal_var_90 = stack_array_80;
            local_var_88 = 0;
            stack_array_80[0] = 0;
            pcVar8 = "skeleton_model";
            do {
              pcVar9 = pcVar8;
              pcVar8 = pcVar9 + 1;
            } while (*pcVar8 != '\0');
            for (puVar11 = (uint64_t *)puVar6[8]; puVar11 != (uint64_t *)0x0;
                puVar11 = (uint64_t *)puVar11[6]) {
              pcVar8 = (char *)*puVar11;
              if (pcVar8 == (char *)0x0) {
                pcVar8 = (char *)0x180d48d24;
                pcVar2 = (char *)0x0;
              }
              else {
                pcVar2 = (char *)puVar11[2];
              }
              if (pcVar2 == pcVar9 + -0x180a19ca7) {
                pcVar2 = pcVar8 + (int64_t)pcVar2;
                if (pcVar2 <= pcVar8) {
LAB_1803ba454:
                  lVar4 = 0x180d48d24;
                  if (puVar11[1] != 0) {
                    lVar4 = puVar11[1];
                  }
                  DataStructureManager0(&plocal_var_98,lVar4);
                  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x240,0x10,3);
                  uVar3 = function_2fb490(uVar3);
                  SystemCore_PointerManager(*(int64_t *)(param_1 + 0x28) + 0x260,uVar3);
                  function_2fdb10(*(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x260));
                  break;
                }
                lVar4 = (int64_t)&rendering_buffer_2344_ptr - (int64_t)pcVar8;
                while (*pcVar8 == pcVar8[lVar4]) {
                  pcVar8 = pcVar8 + 1;
                  if (pcVar2 <= pcVar8) goto LAB_1803ba454;
                }
              }
            }
            plocal_var_98 = &system_state_ptr;
          }
          else if (*(int64_t *)(lVar1 + 0x260) == 0) {
            puVar10 = &system_buffer_ptr;
            if (*(void **)(lVar1 + 0x290) != (void *)0x0) {
              puVar10 = *(void **)(lVar1 + 0x290);
            }
            if (*(int64_t *)(lVar4 + 0x20) == 0) {
              puVar7 = &ui_system_data_1344_ptr;
            }
            else {
              puVar5 = *(void **)(*(int64_t *)(lVar4 + 0x20) + 0x4e0);
              puVar7 = &system_buffer_ptr;
              if (puVar5 != (void *)0x0) {
                puVar7 = puVar5;
              }
            }
            puVar5 = &system_buffer_ptr;
            if (*(void **)(lVar4 + 0x290) != (void *)0x0) {
              puVar5 = *(void **)(lVar4 + 0x290);
            }
            SystemCore_Allocator(&ui_system_data_1248_ptr,puVar5,puVar7,puVar10);
            PhysicsSystem_CharacterController(*(uint64_t *)(param_1 + 0x28),1);
          }
          lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x260);
          if (lVar4 != 0) {
            function_2ff220(lVar4,puVar6,param_3,param_1);
            lVar4 = *(int64_t *)(param_1 + 0x28);
            if (*(int64_t *)(*(int64_t *)(lVar4 + 0x260) + 0x208) == 0) {
              plStack_a8 = *(int64_t **)(lVar4 + 0x260);
              *(uint64_t *)(lVar4 + 0x260) = 0;
              if (plStack_a8 != (int64_t *)0x0) {
                (**(code **)(*plStack_a8 + 0x38))();
              }
            }
          }
          break;
        }
        lVar4 = (int64_t)&system_param2_ptr - (int64_t)pcVar8;
        while (*pcVar8 == pcVar8[lVar4]) {
          pcVar8 = pcVar8 + 1;
          if (pcVar2 <= pcVar8) goto LAB_1803ba320;
        }
      }
      puVar6 = (uint64_t *)puVar6[0xb];
    } while (puVar6 != (uint64_t *)0x0);
  }
  function_2ee990(*(uint64_t *)(param_1 + 0x28),0);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address