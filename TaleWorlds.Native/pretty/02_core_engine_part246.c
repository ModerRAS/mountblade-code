// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
// 02_core_engine_part246.c - 18 个函数
// 函数: void DataStructure_0f790(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_0f790(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  if (*(int64_t *)(param_1 + 0x20) != 0) {
    free(*(int64_t *)(param_1 + 0x20),0x10,param_3,param_4,0xfffffffffffffffe);
  }
  uVar1 = *(uint64_t *)(param_1 + 8);
  uVar2 = *(uint64_t *)(param_1 + 0x10);
  iVar3 = _Mtx_unlock(*(uint64_t *)(param_1 + 0x10));
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  _Mtx_destroy(uVar2);
  _Cnd_destroy(uVar1);
  return;
}
// 函数: void DataStructure_0f7d0(int64_t param_1)
void DataStructure_0f7d0(int64_t param_1)
{
  uint64_t *puVar1;
  int iVar2;
  puVar1 = *(uint64_t **)(param_1 + 0x20);
  *(uint64_t *)(param_1 + 0x20) = 0;
  iVar2 = _Mtx_lock(*(uint64_t *)(param_1 + 0x10));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int8_t *)(param_1 + 0x18) = 1;
  iVar2 = _Cnd_signal(*(uint64_t *)(param_1 + 8));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = _Mtx_unlock(*(uint64_t *)(param_1 + 0x10));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  (*(code *)puVar1[1])(*puVar1);
  _Cnd_do_broadcast_at_thread_exit();
// WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
// WARNING: Treating indirect jump as call
  free(puVar1,0x10);
  return;
}
// 函数: void DataStructure_0f870(char *param_1)
void DataStructure_0f870(char *param_1)
{
  if (*param_1 != '\0') {
    _Cnd_destroy(*(uint64_t *)(param_1 + 8));
  }
  return;
}
// 函数: void DataStructure_0f8a0(char *param_1)
void DataStructure_0f8a0(char *param_1)
{
  if (*param_1 != '\0') {
    _Mtx_destroy(*(uint64_t *)(param_1 + 8));
  }
  return;
}
// 函数: void DataStructure_0f8d0(int64_t param_1)
void DataStructure_0f8d0(int64_t param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uVar1 = *(uint64_t *)(param_1 + 8);
  uVar2 = *(uint64_t *)(param_1 + 0x10);
  iVar3 = _Mtx_unlock(*(uint64_t *)(param_1 + 0x10));
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  _Mtx_destroy(uVar2);
  _Cnd_destroy(uVar1);
  return;
}
uint64_t DataStructure_0f940(int64_t param_1)
{
  uint64_t *puVar1;
  int iVar2;
  puVar1 = *(uint64_t **)(param_1 + 0x20);
  *(uint64_t *)(param_1 + 0x20) = 0;
  iVar2 = _Mtx_lock(*(uint64_t *)(param_1 + 0x10));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int8_t *)(param_1 + 0x18) = 1;
  iVar2 = _Cnd_signal(*(uint64_t *)(param_1 + 8));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = _Mtx_unlock(*(uint64_t *)(param_1 + 0x10));
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  (*(code *)puVar1[1])(*puVar1);
  _Cnd_do_broadcast_at_thread_exit();
  free(puVar1,0x10);
  return 0;
}
int64_t DataStructure_0fa10(int64_t param_1,int64_t param_2)
{
  byte bVar1;
  uint64_t uVar2;
  byte *pbVar3;
  uint uVar4;
  int64_t lStack_18;
  pbVar3 = &system_buffer_ptr;
  if (*(byte **)(param_2 + 8) != (byte *)0x0) {
    pbVar3 = *(byte **)(param_2 + 8);
  }
  uVar2 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (*(uint *)(param_2 + 0x10) != 0) {
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar4 = uVar4 + 1;
      uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
    } while (uVar4 < *(uint *)(param_2 + 0x10));
  }
  lStack_18 = SystemFunction_000180218bc0((uint64_t)*(uint *)(param_1 + 0x10),
                                  *(uint64_t *)
                                   (*(int64_t *)(param_1 + 8) +
                                   (uVar2 % (uint64_t)*(uint *)(param_1 + 0x10)) * 8),param_2);
  if (lStack_18 == 0) {
    lStack_18 = *(int64_t *)(*(int64_t *)(param_1 + 8) + *(int64_t *)(param_1 + 0x10) * 8);
  }
  if (lStack_18 == *(int64_t *)(*(int64_t *)(param_1 + 8) + *(int64_t *)(param_1 + 0x10) * 8)) {
    return 0;
  }
  return lStack_18 + 0x20;
}
// 函数: void DataStructure_0fb10(void)
void DataStructure_0fb10(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// 函数: void DataStructure_11520(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_11520(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  code *pcVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t stack_special_x_8;
  int64_t lStack_30;
  uint64_t *plocal_var_28;
  uint64_t *plocal_var_20;
  lStack_30 = 0;
  plocal_var_28 = (uint64_t *)0x0;
  plocal_var_20 = (uint64_t *)0x0;
  uVar6 = (uint64_t)(int)*(uint64_t *)(param_1 + 0x18);
  if (uVar6 != 0) {
    if (0x1fffffffffffffff < uVar6) {
      CoreEngine_189990();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    DataStructure_17b00(&lStack_30,uVar6,param_3,param_4,0xfffffffffffffffe);
  }
  plVar1 = *(int64_t **)(param_1 + 8);
  lVar5 = *plVar1;
  plVar4 = plVar1;
  if (lVar5 == 0) {
    plVar4 = plVar1 + 1;
    lVar5 = *plVar4;
    while (lVar5 == 0) {
      plVar4 = plVar4 + 1;
      lVar5 = *plVar4;
    }
  }
  lVar2 = plVar1[*(int64_t *)(param_1 + 0x10)];
  while (lVar5 != lVar2) {
    stack_special_x_8 = lVar5 + 0x20;
    if (plocal_var_20 == plocal_var_28) {
      DataStructure_18920(&lStack_30,plocal_var_28,&stack_special_x_8);
    }
    else {
      *plocal_var_28 = stack_special_x_8;
      plocal_var_28 = plocal_var_28 + 1;
    }
    lVar5 = *(int64_t *)(lVar5 + 0x80);
    while (lVar5 == 0) {
      plVar4 = plVar4 + 1;
      lVar5 = *plVar4;
    }
  }
  DataStructure_19260(lStack_30,plocal_var_28,(int64_t)plocal_var_28 - lStack_30 >> 3,stack_special_x_8 & 0xff);
  iVar7 = 0;
  if (0 < (int64_t)uVar6) {
    lVar5 = 0;
    do {
      *(int *)(*(int64_t *)(lStack_30 + lVar5 * 8) + 0x54) = *(int *)(param_1 + 0x50) + iVar7;
      if (*(uint64_t *)(param_1 + 0x38) < *(uint64_t *)(param_1 + 0x40)) {
        *(uint64_t *)(param_1 + 0x38) = *(uint64_t *)(param_1 + 0x38) + 0x60;
        DataStructure_18a80();
      }
      else {
        DataStructure_19020(param_1 + 0x30,*(uint64_t *)(lStack_30 + lVar5 * 8));
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int64_t)uVar6);
  }
  if (lStack_30 != 0) {
    uVar6 = (int64_t)plocal_var_20 - lStack_30 & 0xfffffffffffffff8;
    lVar5 = lStack_30;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar5 = *(int64_t *)(lStack_30 + -8);
      if (0x1f < (lStack_30 - lVar5) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar5,uVar6);
  }
  return;
}
// 函数: void DataStructure_11720(uint64_t *param_1)
void DataStructure_11720(uint64_t *param_1)
{
  GenericFunction_180048980();
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * DataStructure_117b0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  void *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  void *puVar6;
  lVar3 = 0;
  lVar5 = *(int64_t *)(param_1 + 0x3a0) - *(int64_t *)(param_1 + 0x398);
  lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
  lVar5 = (lVar5 >> 2) - (lVar5 >> 0x3f);
  uVar1 = *(uint *)(param_1 + 0x3b0);
  *(uint *)(param_2 + 3) = uVar1;
  if (lVar5 != 0) {
    lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x98,uVar1 & 0xff,param_4,0,0xfffffffffffffffe);
  }
  *param_2 = lVar3;
  param_2[1] = lVar3;
  param_2[2] = lVar5 * 0x98 + lVar3;
  puVar4 = (uint64_t *)*param_2;
  lVar3 = *(int64_t *)(param_1 + 0x3a0);
  if (*(int64_t *)(param_1 + 0x398) != lVar3) {
    lVar5 = *(int64_t *)(param_1 + 0x398) - (int64_t)puVar4;
    do {
      *puVar4 = &system_state_ptr;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0;
      *puVar4 = &memory_allocator_3432_ptr;
      puVar4[1] = puVar4 + 3;
      *(int32_t *)(puVar4 + 2) = 0;
      *(int8_t *)(puVar4 + 3) = 0;
      *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar5 + 0x10 + (int64_t)puVar4);
      puVar2 = *(void **)(lVar5 + 8 + (int64_t)puVar4);
      puVar6 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar6 = puVar2;
      }
      strcpy_s(puVar4[1],0x80,puVar6);
      puVar4 = puVar4 + 0x13;
    } while (lVar5 + (int64_t)puVar4 != lVar3);
  }
  param_2[1] = (int64_t)puVar4;
  return param_2;
}
uint64_t * DataStructure_11930(uint64_t *param_1)
{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_7872_ptr;
  GenericFunction_18015c2b0(param_1 + 2);
  *param_1 = &rendering_buffer_2656_ptr;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = _guard_check_icall;
  return param_1;
}
int64_t DataStructure_119c0(int64_t param_1,uint param_2,uint64_t param_3,uint64_t param_4)
{
  if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
    (**(code **)(param_1 + 0xa8))(param_1 + 0x98,0,0,param_4,0xfffffffffffffffe);
  }
  RenderingSystem_20050(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void SystemCore_NetworkHandler(int param_1,int64_t param_2)
void SystemCore_NetworkHandler(int param_1,int64_t param_2)
{
  int32_t uVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  void *plocal_var_50;
  uint64_t *plocal_var_48;
  uint local_var_40;
  uint64_t local_var_38;
  if (param_1 == 0) {
    return;
  }
  plocal_var_50 = &system_data_buffer_ptr;
  local_var_38 = 0;
  plocal_var_48 = (uint64_t *)0x0;
  local_var_40 = 0;
  plocal_var_48 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_48 = 0;
  uVar1 = CoreEngineSystemCleanup(plocal_var_48);
  local_var_38 = CONCAT44(local_var_38._4_4_,uVar1);
  *plocal_var_48 = 0x726520444f4d460a;
  *(int32_t *)(plocal_var_48 + 1) = 0x21726f72;
  *(int16_t *)((int64_t)plocal_var_48 + 0xc) = 0x2820;
  *(int8_t *)((int64_t)plocal_var_48 + 0xe) = 0;
  local_var_40 = 0xe;
  RenderingSystem_CameraController(&plocal_var_50,param_1);
  uVar2 = local_var_40;
  uVar7 = local_var_40 + 2;
  if (uVar7 != 0) {
    uVar8 = local_var_40 + 3;
    if (plocal_var_48 == (uint64_t *)0x0) {
      if ((int)uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      plocal_var_48 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar8,0x13);
      *(int8_t *)plocal_var_48 = 0;
    }
    else {
      if (uVar8 <= (uint)local_var_38) goto LAB_180211b66;
      plocal_var_48 = (uint64_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,plocal_var_48,uVar8,0x10,0x13);
    }
    uVar1 = CoreEngineSystemCleanup(plocal_var_48);
    local_var_38 = CONCAT44(local_var_38._4_4_,uVar1);
  }
LAB_180211b66:
  *(int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) = 0x2029;
  *(int8_t *)((int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) + 1) = 0;
  uVar8 = uVar2 + 3;
  local_var_40 = uVar7;
  if (uVar8 != 0) {
    uVar7 = uVar2 + 4;
    if (plocal_var_48 == (uint64_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      plocal_var_48 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
      *(int8_t *)plocal_var_48 = 0;
    }
    else {
      if (uVar7 <= (uint)local_var_38) goto LAB_180211be9;
      plocal_var_48 = (uint64_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,plocal_var_48,uVar7,0x10,0x13);
    }
    uVar1 = CoreEngineSystemCleanup(plocal_var_48);
    local_var_38 = CONCAT44(local_var_38._4_4_,uVar1);
  }
LAB_180211be9:
  *(int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) = 0x22;
  local_var_40 = uVar8;
  if (param_2 != 0) {
    lVar6 = -1;
    do {
      lVar3 = lVar6;
      lVar6 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar6) != '\0');
    if (0 < (int)lVar6) {
      iVar9 = uVar8 + (int)lVar6;
      if (iVar9 != 0) {
        uVar2 = iVar9 + 1;
        if (plocal_var_48 == (uint64_t *)0x0) {
          if ((int)uVar2 < 0x10) {
            uVar2 = 0x10;
          }
          plocal_var_48 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
          *(int8_t *)plocal_var_48 = 0;
        }
        else {
          if (uVar2 <= (uint)local_var_38) goto LAB_180211c85;
          plocal_var_48 = (uint64_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,plocal_var_48,uVar2,0x10,0x13);
        }
        uVar1 = CoreEngineSystemCleanup(plocal_var_48);
        local_var_38 = CONCAT44(local_var_38._4_4_,uVar1);
      }
LAB_180211c85:
// WARNING: Subroutine does not return
      memcpy((int8_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48),param_2,
             (int64_t)((int)lVar3 + 2));
    }
  }
  uVar7 = uVar2 + 5;
  if (uVar7 != 0) {
    uVar2 = uVar2 + 6;
    if (plocal_var_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      plocal_var_48 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *(int8_t *)plocal_var_48 = 0;
    }
    else {
      if (uVar2 <= (uint)local_var_38) goto LAB_180211d03;
      plocal_var_48 = (uint64_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,plocal_var_48,uVar2,0x10,0x13);
    }
    uVar1 = CoreEngineSystemCleanup(plocal_var_48);
    local_var_38 = CONCAT44(local_var_38._4_4_,uVar1);
  }
LAB_180211d03:
  *(int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) = 0x2022;
  *(int8_t *)((int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) + 1) = 0;
  local_var_40 = uVar7;
  lVar3 = SystemFunction_00018021a140(param_1);
  lVar6 = -1;
  if (lVar3 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = lVar5 + 1;
    } while (*(char *)(lVar3 + lVar6) != '\0');
    if (0 < (int)lVar6) {
      iVar9 = uVar7 + (int)lVar6;
      if (iVar9 != 0) {
        uVar2 = iVar9 + 1;
        if (plocal_var_48 == (uint64_t *)0x0) {
          if ((int)uVar2 < 0x10) {
            uVar2 = 0x10;
          }
          plocal_var_48 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
          *(int8_t *)plocal_var_48 = 0;
        }
        else {
          if (uVar2 <= (uint)local_var_38) goto LAB_180211da7;
          plocal_var_48 = (uint64_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,plocal_var_48,uVar2,0x10,0x13);
        }
        uVar1 = CoreEngineSystemCleanup(plocal_var_48);
        local_var_38 = CONCAT44(local_var_38._4_4_,uVar1);
      }
LAB_180211da7:
// WARNING: Subroutine does not return
      memcpy((int8_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48),lVar3,
             (int64_t)((int)lVar5 + 2));
    }
  }
  iVar9 = local_var_40 + 1;
  if (iVar9 != 0) {
    uVar2 = local_var_40 + 2;
    if (plocal_var_48 == (uint64_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      plocal_var_48 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar2,0x13);
      *(int8_t *)plocal_var_48 = 0;
    }
    else {
      if (uVar2 <= (uint)local_var_38) goto LAB_180211e24;
      plocal_var_48 = (uint64_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,plocal_var_48,uVar2,0x10,0x13);
    }
    uVar1 = CoreEngineSystemCleanup(plocal_var_48);
    local_var_38 = CONCAT44(local_var_38._4_4_,uVar1);
  }
LAB_180211e24:
  *(int16_t *)((uint64_t)local_var_40 + (int64_t)plocal_var_48) = 10;
  puVar4 = (uint64_t *)&system_buffer_ptr;
  if (plocal_var_48 != (uint64_t *)0x0) {
    puVar4 = plocal_var_48;
  }
  local_var_40 = iVar9;
  SystemConfigurationManager(system_message_context,0,0x1000000000000,3,puVar4);
  plocal_var_50 = &system_data_buffer_ptr;
  if (plocal_var_48 == (uint64_t *)0x0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
uint64_t DataStructure_11ee0(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
{
  void *plocal_var_30;
  int64_t lStack_28;
  if (param_2 == 8) {
    SystemCore_CacheManager(&plocal_var_30,param_4,param_3,param_4,0xfffffffffffffffe);
    UtilitiesSystem_23fd0(param_3,&plocal_var_30);
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_11f70(uint64_t param_1,int32_t param_2)
void DataStructure_11f70(uint64_t param_1,int32_t param_2)
{
  SystemCore_NetworkHandler(system_memory_pool_ptr,param_1,param_2,0x10,7);
  return;
}
uint64_t * DataStructure_11fa0(uint64_t *param_1)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  GenericFunction_1801566b0();
  *param_1 = &processed_var_5528_ptr;
  _Mtx_init_in_situ(param_1 + 0x4c,0x102);
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(int32_t *)(param_1 + 0x59) = 3;
  puVar1 = param_1 + 0x5a;
  param_1[0x5d] = 0;
  *(int32_t *)(param_1 + 0x5f) = 3;
  *puVar1 = puVar1;
  param_1[0x5b] = puVar1;
  param_1[0x5c] = 0;
  *(int8_t *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  _Mtx_init_in_situ(param_1 + 99,2);
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(int32_t *)(param_1 + 0x72) = 3;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(int32_t *)(param_1 + 0x76) = 3;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(int32_t *)(param_1 + 0x7a) = 3;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(int32_t *)(param_1 + 0x7e) = 3;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(int32_t *)(param_1 + 0x85) = 3;
  DataStructureManager(param_1 + 0x87,8,9,&SUB_18005d5f0,DataCacheManager);
  *(int32_t *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x60] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(int8_t *)(param_1 + 0x86) = 0;
  plVar2 = (int64_t *)param_1[0x91];
  param_1[0x91] = 0;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0x70] = param_1[0x6f];
  return param_1;
}
uint64_t DataStructure_12170(uint64_t param_1,uint64_t param_2)
{
  DataStructure_121b0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x4d8);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_121b0(uint64_t *param_1)
void DataStructure_121b0(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  int *piVar6;
  int64_t *plVar7;
  uint uVar8;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  uint64_t uVar12;
  uint64_t uVar9;
  uVar12 = 0xfffffffffffffffe;
  if ((int64_t *)param_1[0x91] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x91] + 0x38))();
  }
  SystemDataValidator(param_1 + 0x87,8,9,DataCacheManager,uVar12);
  plStackX_10 = param_1 + 0x82;
  if (*plStackX_10 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plStackX_10 = param_1 + 0x7b;
  GenericFunction_180048980();
  plStackX_10 = param_1 + 0x77;
  if (*plStackX_10 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plStackX_10 = param_1 + 0x73;
  GenericFunction_18006b6f0();
  plStackX_10 = param_1 + 0x6f;
  if (*plStackX_10 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plStackX_10 = param_1 + 99;
  _Mtx_destroy_in_situ();
  plStackX_10 = param_1 + 0x5a;
  UtilitiesSystem_Processor();
  plStackX_10 = param_1 + 0x56;
  DataStructure_185b0();
  plStackX_10 = param_1 + 0x4c;
  _Mtx_destroy_in_situ();
  *param_1 = &processed_var_8656_ptr;
  *(int8_t *)((int64_t)param_1 + 0x162) = 1;
  plVar2 = param_1 + 0x1a;
  plStackX_20 = plVar2;
  iVar5 = _Mtx_lock(plVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar9 = 0;
  uVar10 = uVar9;
  if (param_1[9] != 0) {
    do {
      uVar11 = uVar10 % (uint64_t)*(uint *)(param_1 + 8);
      iVar5 = (int)uVar9;
      for (piVar6 = *(int **)(param_1[7] + uVar11 * 8); piVar6 != (int *)0x0;
          piVar6 = *(int **)(piVar6 + 4)) {
        if (iVar5 == *piVar6) {
          if (piVar6 != (int *)0x0) goto LAB_1801571ef;
          break;
        }
      }
      RenderingShaderProcessor0(param_1 + 10,&plStackX_10,(uint64_t)*(uint *)(param_1 + 8),
                    *(int32_t *)(param_1 + 9),1);
      piVar6 = (int *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)((int64_t)param_1 + 0x5c));
      *piVar6 = iVar5;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar6[5] = 0;
      if ((char)plStackX_10 != '\0') {
        uVar11 = uVar10 % ((uint64_t)plStackX_10 >> 0x20);
        GenericFunction_18015bdc0(param_1 + 6);
      }
      *(uint64_t *)(piVar6 + 4) = *(uint64_t *)(param_1[7] + uVar11 * 8);
      *(int **)(param_1[7] + uVar11 * 8) = piVar6;
      param_1[9] = param_1[9] + 1;
LAB_1801571ef:
      plStackX_18 = *(int64_t **)(piVar6 + 2);
      piVar6[2] = 0;
      piVar6[3] = 0;
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      uVar8 = iVar5 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar10 = (int64_t)(int)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 < (uint64_t)param_1[9]);
  }
  plVar1 = param_1 + 6;
  GenericFunction_18015b450(plVar1);
  plVar3 = param_1 + 0x2d;
  plVar4 = (int64_t *)param_1[0x2e];
  plVar7 = (int64_t *)*plVar3;
  if (plVar7 != plVar4) {
    do {
      if ((int64_t *)*plVar7 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar4);
    plVar7 = (int64_t *)*plVar3;
  }
  param_1[0x2e] = plVar7;
  iVar5 = _Mtx_unlock(plVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if (param_1[0x4a] != 0) {
    free();
    param_1[0x4a] = 0;
  }
  plStackX_10 = param_1 + 0x44;
  GenericFunction_18015b4f0();
  if ((int64_t *)param_1[0x3d] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x3d] + 0x38))();
  }
  plStackX_10 = plVar3;
  DataTransformer0(plVar3);
  plStackX_10 = param_1 + 0x28;
  GenericFunction_180048980();
  plStackX_10 = param_1 + 0x24;
  GenericFunction_180048980();
  plStackX_10 = plVar2;
  _Mtx_destroy_in_situ(plVar2);
  plStackX_10 = param_1 + 0x16;
  if (*plStackX_10 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plStackX_10 = param_1 + 0xc;
  _Mtx_destroy_in_situ();
  plStackX_10 = plVar1;
  GenericFunction_18015b450(plVar1);
  if ((1 < (uint64_t)param_1[8]) && (param_1[7] != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])(param_1 + 1,0,0);
  }
  return;
}
// 函数: void DataStructure_122c0(int64_t *param_1)
void DataStructure_122c0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    if (*(int64_t **)(lVar2 + 8) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_122e0(int64_t *param_1,uint64_t param_2,int param_3)
void DataStructure_122e0(int64_t *param_1,uint64_t param_2,int param_3)
{
  int64_t *plVar1;
  int8_t stack_array_d58 [32];
  code *pcStack_d38;
  int32_t local_var_d30;
  int32_t local_var_d08;
  int32_t local_var_d04;
  uint64_t local_var_d00;
  int32_t local_var_cf8;
  uint64_t local_var_cf4;
  int32_t local_var_cec;
  uint64_t local_var_cc8;
  int8_t stack_array_b98 [2896];
  uint64_t local_var_48;
  local_var_cc8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d58;
  *(bool *)(param_1 + 0x42) = *(int *)(SYSTEM_STATE_MANAGER + 0x1ce0) != 0;
  local_var_d30 = 0xffffffff;
  pcStack_d38 = SystemResourceCleaner;
  SystemCore_38730(0,0,&ui_system_data_1648_ptr,DataStructure_11f70);
  NetworkProtocol_40330(param_1 + 0x6d,0x20214);
  local_var_d00 = 0;
  local_var_cf4 = 0;
  local_var_cec = 0;
  local_var_d08 = 0x20;
  local_var_d04 = 0x40000;
  local_var_cf8 = 0x400000;
  NetworkProtocol_49600(param_1[0x6d],&local_var_d08);
  plVar1 = param_1 + 0x6e;
  NetworkProtocol_45520(param_1[0x6d],plVar1);
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x1a0))(param_1,param_3,4);
  }
  SystemCore_3bc20(*plVar1,*(int32_t *)(SYSTEM_STATE_MANAGER + 0x1570));
  SystemCore_3bdc0(*plVar1,0x400);
// WARNING: Subroutine does not return
  memset(stack_array_b98,0,0x68);
}
// 函数: void DataStructure_12de0(int64_t param_1)
void DataStructure_12de0(int64_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        DataStructure_11720(puVar2 + 4);
        *puVar2 = &system_data_buffer_ptr;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(int32_t *)(puVar2 + 3) = 0;
          *puVar2 = &system_state_ptr;
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar2);
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void DataStructure_12e00(int64_t *param_1)
void DataStructure_12e00(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    DataStructure_11720(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void DataStructure_12e20(int64_t param_1)
void DataStructure_12e20(int64_t param_1)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uVar3 = *(uint64_t *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
      if (puVar2 != (uint64_t *)0x0) {
        DataStructure_11720(puVar2 + 4);
        *puVar2 = &system_data_buffer_ptr;
        if (puVar2[1] == 0) {
          puVar2[1] = 0;
          *(int32_t *)(puVar2 + 3) = 0;
          *puVar2 = &system_state_ptr;
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar2);
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(int64_t *)(param_1 + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
int32_t DataStructure_12e40(int64_t param_1)
{
  int32_t astack_special_x_8 [8];
  SystemCore_3a2c0(*(uint64_t *)(param_1 + 0x370),astack_special_x_8);
  return astack_special_x_8[0];
}
int32_t DataStructure_12e60(int64_t param_1)
{
  int32_t astack_special_x_8 [8];
  SystemCore_39ec0(*(uint64_t *)(param_1 + 0x370),astack_special_x_8);
  return astack_special_x_8[0];
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_12e80(uint64_t param_1,uint64_t param_2)
void DataStructure_12e80(uint64_t param_1,uint64_t param_2)
{
  int8_t stack_array_4f8 [64];
  int32_t local_var_4b8;
  uint64_t local_var_470;
  uint64_t local_var_468;
  int8_t stack_array_448 [1024];
  uint64_t local_var_48;
  local_var_470 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4f8;
  local_var_4b8 = 0;
  local_var_468 = param_2;
// WARNING: Subroutine does not return
  memset(stack_array_448,0,0x400);
}
// 函数: void DataStructure_132a0(int64_t param_1)
void DataStructure_132a0(int64_t param_1)
{
  int8_t astack_special_x_8 [32];
  SystemCore_3bc20(*(uint64_t *)(param_1 + 0x370));
  SystemCore_39ec0(*(uint64_t *)(param_1 + 0x370),astack_special_x_8);
  return;
}