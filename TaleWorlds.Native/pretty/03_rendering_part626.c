n//  的语义化别名
#define SystemCore_MemoryManager
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: SystemOutputManager */
#define SystemOutputManager SystemOutputManager
// 03_rendering_part626.c - 13 个函数
// 函数: void UtilitiesSystem_16ba0(char param_1)
void UtilitiesSystem_16ba0(char param_1)
{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  int8_t stack_array_238 [32];
  int8_t stack_array_218 [512];
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_238;
  if (render_system_memory == 0) {
    SystemCore_CacheManager(stack_array_218,0x200,&ui_system_data_1952_ptr,&ui_system_data_1408_ptr);
    UtilitiesSystem_1c7a0(stack_array_218);
  }
  else {
    cVar1 = UtilitiesSystem_1ca90(render_system_memory);
    if (cVar1 != '\0') {
      plVar3 = (int64_t *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,render_system_memory);
      render_system_memory = 0;
      render_system_memory = 0xffffffff;
      if (*plVar3 != 0) {
        if (param_1 == '\0') {
          NetworkSystem_b5950();
        }
        else {
          NetworkSystem_b5b20();
        }
      }
    }
  }
  iVar2 = _Mtx_unlock(0x180c95d70);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_238);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t UtilitiesSystem_16c90(int32_t param_1)
{
  char cVar1;
  int64_t *plVar2;
  cVar1 = UtilitiesSystem_1ca90();
  if (cVar1 != '\0') {
    plVar2 = (int64_t *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar2 != 0) {
      return *(uint64_t *)(*plVar2 + 0x58e8);
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
double UtilitiesSystem_16ce0(int32_t param_1)
{
  char cVar1;
  int64_t *plVar2;
  cVar1 = UtilitiesSystem_1ca90();
  if (cVar1 != '\0') {
    plVar2 = (int64_t *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar2 != 0) {
      return *(double *)(*plVar2 + 0x58e0) * 100.0;
    }
  }
  return 0.0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint UtilitiesSystem_16d30(int32_t param_1)
{
  uint64_t uVar1;
  char cVar2;
  int64_t *plVar3;
  uint uVar4;
  cVar2 = UtilitiesSystem_1ca90();
  if (cVar2 != '\0') {
    plVar3 = (int64_t *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar3 != 0) {
      uVar1 = *(uint64_t *)(*plVar3 + 0x14);
      uVar4 = (uint)((uint64_t)uVar1 >> 0x20);
      return (uVar4 & 0xff0000 | (uint)(ushort)((uint64_t)uVar1 >> 0x30)) >> 8 |
             (uVar4 << 0x10 | uVar4 & 0xff00) << 8;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t UtilitiesSystem_16db0(int32_t param_1)
{
  char cVar1;
  int64_t *plVar2;
  cVar1 = UtilitiesSystem_1ca90();
  if (cVar1 != '\0') {
    plVar2 = (int64_t *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar2 != 0) {
      return *(uint64_t *)(*plVar2 + 0x14) >> 0x20;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t UtilitiesSystem_16e00(int32_t param_1)
{
  char cVar1;
  int64_t *plVar2;
  cVar1 = UtilitiesSystem_1ca90();
  if (cVar1 != '\0') {
    plVar2 = (int64_t *)(**(code **)(render_system_memory + 0x20))(&system_data_25a0,param_1);
    if (*plVar2 != 0) {
      return *(uint64_t *)(*plVar2 + 0x14) & 0xffff;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * UtilitiesSystem_16e50(uint64_t *param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puVar5;
  int32_t uVar6;
  int64_t *plStackX_8;
  int64_t *plStack_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  void *plocal_var_48;
  void *plocal_var_40;
  int iStack_38;
  uVar6 = CoreMemoryPoolValidator(&plocal_var_48);
  if (0 < iStack_38) {
    plVar2 = (int64_t *)GenericFunction_1800b3970(uVar6,&plStackX_8,&plocal_var_48,1);
    lVar1 = *plVar2;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (lVar1 != 0) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
      *puVar3 = &ui_system_data_1864_ptr;
      *puVar3 = &ui_system_data_1608_ptr;
      puVar3[9] = 0;
      puVar3[10] = 0;
      *puVar3 = &ui_system_data_1912_ptr;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xb] = 0;
      DataStructure_f8a10(puVar3,lVar1);
      uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x240,0x10,3);
      plStack_58 = (int64_t *)DataStructure_fb490(uVar4);
      if (plStack_58 != (int64_t *)0x0) {
        (**(code **)(*plStack_58 + 0x28))(plStack_58);
      }
      DataStructure_fa090(plStack_58,lVar1,puVar3);
      if (plStack_58 == (int64_t *)0x0) {
        local_var_50 = 0xffffffff;
      }
      else {
        local_var_50 = (**(code **)(*plStack_58 + 8))(plStack_58);
        (**(code **)(*plStack_58 + 0x28))(plStack_58);
        (**(code **)(*plStack_58 + 0x38))(plStack_58);
      }
      plocal_var_48 = &system_data_buffer_ptr;
      if (plocal_var_40 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      goto LAB_180616ef8;
    }
    puVar5 = &system_buffer_ptr;
    if (plocal_var_40 != (void *)0x0) {
      puVar5 = plocal_var_40;
    }
    SystemDataInitializer(&ui_system_data_1488_ptr,puVar5);
  }
  plStack_58 = (int64_t *)0x0;
  local_var_50 = 0xffffffff;
  plocal_var_48 = &system_data_buffer_ptr;
  if (plocal_var_40 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
LAB_180616ef8:
  *param_1 = plStack_58;
  param_1[1] = CONCAT44(local_var_4c,local_var_50);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
UtilitiesSystem_17030(uint64_t *param_1,uint64_t param_2,char param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)
{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void *puVar6;
  int32_t uVar7;
  int64_t *plStackX_8;
  int64_t *plStack_70;
  int64_t lStack_68;
  int32_t local_var_58;
  void *plocal_var_50;
  void *plocal_var_48;
  int iStack_40;
  uVar7 = CoreMemoryPoolValidator(&plocal_var_50);
  if (0 < iStack_40) {
    plVar3 = (int64_t *)GenericFunction_1800b3970(uVar7,&plStackX_8,&plocal_var_50,1);
    lVar1 = *plVar3;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (lVar1 != 0) {
      if (param_3 == '\0') {
        uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x25a0,0x10,3);
        uVar4 = NetworkSystem_7c730(uVar4);
        CoreMemoryPoolValidator(&plStack_70,param_5);
        iVar2 = NetworkSystem_55eb0(&system_data_60a0,&plStack_70);
        NetworkSystem_7c8c0(uVar4,param_6,(int64_t)iVar2 * 0x1a8 + render_system_memory);
        plStack_70 = (int64_t *)&system_data_buffer_ptr;
        if (lStack_68 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_68 = 0;
        local_var_58 = 0;
        plStack_70 = (int64_t *)&system_state_ptr;
      }
      else {
        uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xac00,0x10,3);
        uVar4 = NetworkSystem_72910(uVar4);
        NetworkSystem_72c50(uVar4,param_6,0,0);
      }
      uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x240,0x10,3);
      plVar3 = (int64_t *)DataStructure_fb490(uVar5);
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      DataStructure_fa090(plVar3,lVar1,uVar4);
      if (plVar3 == (int64_t *)0x0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 8))(plVar3);
      }
      lStack_68 = CONCAT44(lStack_68._4_4_,uVar7);
      plStack_70 = plVar3;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
      plocal_var_50 = &system_data_buffer_ptr;
      if (plocal_var_48 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      goto LAB_1806170f2;
    }
    puVar6 = &system_buffer_ptr;
    if (plocal_var_48 != (void *)0x0) {
      puVar6 = plocal_var_48;
    }
    SystemDataInitializer(&ui_system_data_1488_ptr,puVar6);
  }
  plStack_70 = (int64_t *)0x0;
  lStack_68 = CONCAT44(lStack_68._4_4_,0xffffffff);
  plocal_var_50 = &system_data_buffer_ptr;
  if (plocal_var_48 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
LAB_1806170f2:
  *param_1 = plStack_70;
  param_1[1] = lStack_68;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * UtilitiesSystem_17280(int32_t *param_1,int *param_2)
{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  uVar7 = 0xfffffffffffffffe;
  lVar6 = (int64_t)*param_2 * 0xe0 + render_system_memory;
  if (*(int *)(lVar6 + 0x60) == 0) {
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xac00,0x10,4,0xfffffffffffffffe);
    puVar3 = (uint64_t *)NetworkSystem_72910(uVar2);
    if (param_2[2] < 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (int64_t)param_2[2] * 0x1a8 + render_system_memory;
    }
    NetworkSystem_72c50(puVar3,param_2,lVar5,0);
  }
  else if (*(int *)(lVar6 + 0x60) == 1) {
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x25a0,0x10,4,0xfffffffffffffffe);
    puVar3 = (uint64_t *)NetworkSystem_7c730(uVar2);
    NetworkSystem_7c8c0(puVar3,param_2,(int64_t)param_2[2] * 0x1a8 + render_system_memory);
  }
  else {
    puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,4,0xfffffffffffffffe);
    *puVar3 = &ui_system_data_1864_ptr;
    *puVar3 = &ui_system_data_1608_ptr;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *puVar3 = &ui_system_data_1912_ptr;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xb] = 0;
    DataStructure_f8a10(puVar3,*(uint64_t *)(lVar6 + 0x58));
  }
  uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x240,0x10,4,uVar7);
  plVar4 = (int64_t *)DataStructure_fb490(uVar7);
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  DataStructure_fa090(plVar4,*(uint64_t *)(lVar6 + 0x58),puVar3);
  if (plVar4 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar4 + 8))(plVar4);
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  local_var_20 = SUB84(plVar4,0);
  local_var_1c = (int32_t)((uint64_t)plVar4 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar1;
  param_1[3] = local_var_14;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  return param_1;
}
// 函数: void UtilitiesSystem_17480(int64_t param_1,int32_t param_2)
void UtilitiesSystem_17480(int64_t param_1,int32_t param_2)
{
  uint64_t *puVar1;
  if ((param_1 != 0) &&
     (puVar1 = *(uint64_t **)(*(int64_t *)(param_1 + 0x210) + 0xabf0),
     puVar1 != (uint64_t *)0x0)) {
    (**(code **)*puVar1)(puVar1,0,0);
    *(int32_t *)(puVar1 + 0x113) = param_2;
  }
  return;
}
// 函数: void UtilitiesSystem_17498(void)
void UtilitiesSystem_17498(void)
{
  uint64_t *puVar1;
  int64_t in_RAX;
  int32_t unaff_XMM6_Da;
  puVar1 = *(uint64_t **)(in_RAX + 0xabf0);
  if (puVar1 != (uint64_t *)0x0) {
    (**(code **)*puVar1)(puVar1,0,0);
    *(int32_t *)(puVar1 + 0x113) = unaff_XMM6_Da;
  }
  return;
}
// 函数: void UtilitiesSystem_174cd(void)
void UtilitiesSystem_174cd(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t UtilitiesSystem_174d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  void *puVar2;
  int32_t uVar3;
  void *puVar4;
  void *plocal_var_30;
  int64_t lStack_28;
  if (((param_1 == 0) ||
      (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x210) + 0xabf0), lVar1 == 0)) ||
     (lVar1 = *(int64_t *)(lVar1 + 0x88), lVar1 == 0)) {
    return 0;
  }
  puVar2 = *(void **)(lVar1 + 0x18);
  puVar4 = &system_buffer_ptr;
  if (puVar2 != (void *)0x0) {
    puVar4 = puVar2;
  }
  CoreMemoryPoolValidator(&plocal_var_30,puVar4,param_3,param_4,0xfffffffffffffffe);
  uVar3 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_30);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_17580(int64_t param_1,int8_t param_2,int param_3,int32_t param_4,
void UtilitiesSystem_17580(int64_t param_1,int8_t param_2,int param_3,int32_t param_4,
                  uint64_t *param_5)
{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t stack_array_58 [32];
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  uint64_t local_var_10;
  if (param_1 != 0) {
    iVar1 = *(int *)(render_system_memory + (int64_t)param_3 * 4);
    if (iVar1 == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint64_t *)(render_system_memory + (int64_t)iVar1 * 8);
    }
    lVar3 = UISystem_0c880(*(uint64_t *)(param_1 + 0x208),stack_array_58,uVar4,param_2,param_4,0);
    SystemSecurityManager(&local_var_38);
    uVar4 = *(uint64_t *)(lVar3 + 0x10);
    uVar2 = *(uint64_t *)(lVar3 + 0x18);
    *param_5 = local_var_38;
    param_5[1] = local_var_30;
    param_5[2] = local_var_28;
    param_5[3] = local_var_20;
    param_5[4] = local_var_18;
    param_5[5] = local_var_10;
    param_5[6] = uVar4;
    param_5[7] = uVar2;
    return;
  }
  *param_5 = 0x3f800000;
  param_5[1] = 0;
  param_5[2] = 0x3f80000000000000;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[5] = 0x3f800000;
  param_5[6] = 0;
  param_5[7] = 0x3f80000000000000;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_17650(int64_t param_1,char param_2,char param_3,char param_4,uint64_t *param_5)
void UtilitiesSystem_17650(int64_t param_1,char param_2,char param_3,char param_4,uint64_t *param_5)
{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint *puVar9;
  int8_t stack_array_108 [32];
  uint local_var_e8;
  uint local_var_e4;
  uint local_var_e0;
  uint local_var_dc;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  int32_t local_var_c4;
  int32_t local_var_c0;
  int32_t local_var_bc;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int8_t stack_array_68 [32];
  uint local_var_48;
  uint local_var_44;
  uint local_var_40;
  uint local_var_3c;
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  if (param_1 == 0) {
    *param_5 = 0x3f800000;
    param_5[1] = 0;
    param_5[2] = 0x3f80000000000000;
    param_5[3] = 0;
    *(int32_t *)(param_5 + 4) = 0;
    *(int32_t *)((int64_t)param_5 + 0x24) = 0;
    *(int32_t *)(param_5 + 5) = 0x3f800000;
    *(int32_t *)((int64_t)param_5 + 0x2c) = 0;
    *(int32_t *)(param_5 + 6) = 0;
    *(int32_t *)((int64_t)param_5 + 0x34) = 0;
    *(int32_t *)(param_5 + 7) = 0;
    *(int32_t *)((int64_t)param_5 + 0x3c) = 0x3f800000;
  }
  else {
    if (param_3 != '\0') {
      param_2 = *(char *)(*(int64_t *)(param_1 + 0x208) + 0xc0 + (int64_t)param_2);
    }
    if (param_4 == '\0') {
      puVar9 = (uint *)((int64_t)param_2 * 0x100 + *(int64_t *)(param_1 + 0x18));
      do {
        LOCK();
        uVar1 = *puVar9;
        *puVar9 = *puVar9 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      local_var_e8 = puVar9[1];
      local_var_e4 = puVar9[2];
      local_var_e0 = puVar9[3];
      local_var_dc = puVar9[4];
      uVar6 = *(uint64_t *)(puVar9 + 5);
      uVar7 = *(uint64_t *)(puVar9 + 7);
      *puVar9 = 0;
      local_var_d8 = uVar6;
      local_var_d0 = uVar7;
      local_var_48 = local_var_e8;
      local_var_44 = local_var_e4;
      local_var_40 = local_var_e0;
      local_var_3c = local_var_dc;
      local_var_38 = uVar6;
      local_var_30 = uVar7;
      SystemSecurityManager(&local_var_98,&local_var_e8);
      *(int32_t *)param_5 = local_var_98;
      *(int32_t *)((int64_t)param_5 + 4) = local_var_94;
      *(int32_t *)(param_5 + 1) = local_var_90;
      *(int32_t *)((int64_t)param_5 + 0xc) = local_var_8c;
      *(int32_t *)(param_5 + 2) = local_var_88;
      *(int32_t *)((int64_t)param_5 + 0x14) = local_var_84;
      *(int32_t *)(param_5 + 3) = local_var_80;
      *(int32_t *)((int64_t)param_5 + 0x1c) = local_var_7c;
      *(int32_t *)(param_5 + 4) = local_var_78;
      *(int32_t *)((int64_t)param_5 + 0x24) = local_var_74;
      *(int32_t *)(param_5 + 5) = local_var_70;
      *(int32_t *)((int64_t)param_5 + 0x2c) = local_var_6c;
      param_5[6] = uVar6;
      param_5[7] = uVar7;
    }
    else {
      lVar8 = NetworkSystem_34770(param_1,stack_array_68,param_2);
      SystemSecurityManager(&local_var_c8);
      uVar2 = *(int32_t *)(lVar8 + 0x10);
      uVar3 = *(int32_t *)(lVar8 + 0x14);
      uVar4 = *(int32_t *)(lVar8 + 0x18);
      uVar5 = *(int32_t *)(lVar8 + 0x1c);
      *(int32_t *)param_5 = local_var_c8;
      *(int32_t *)((int64_t)param_5 + 4) = local_var_c4;
      *(int32_t *)(param_5 + 1) = local_var_c0;
      *(int32_t *)((int64_t)param_5 + 0xc) = local_var_bc;
      *(int32_t *)(param_5 + 2) = local_var_b8;
      *(int32_t *)((int64_t)param_5 + 0x14) = local_var_b4;
      *(int32_t *)(param_5 + 3) = local_var_b0;
      *(int32_t *)((int64_t)param_5 + 0x1c) = local_var_ac;
      param_5[4] = local_var_a8;
      param_5[5] = local_var_a0;
      *(int32_t *)(param_5 + 6) = uVar2;
      *(int32_t *)((int64_t)param_5 + 0x34) = uVar3;
      *(int32_t *)(param_5 + 7) = uVar4;
      *(int32_t *)((int64_t)param_5 + 0x3c) = uVar5;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_108);
}
// 函数: void UtilitiesSystem_176f0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
void UtilitiesSystem_176f0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint *in_RAX;
  int32_t *unaff_RBX;
  uint local_var_28;
  uint local_buffer_2c;
  uint64_t local_var_30;
  uint64_t local_var_38;
  int32_t local_buffer_70;
  int32_t local_buffer_74;
  int32_t local_buffer_78;
  int32_t local_buffer_7c;
  int32_t local_buffer_80;
  int32_t local_buffer_84;
  int32_t local_buffer_88;
  int32_t local_buffer_8c;
  int32_t local_buffer_90;
  int32_t local_buffer_94;
  int32_t local_buffer_98;
  int32_t local_buffer_9c;
  uint local_buffer_c0;
  uint local_buffer_c4;
  uint local_buffer_c8;
  uint local_buffer_cc;
  uint64_t local_buffer_d0;
  uint64_t local_buffer_d8;
  uint64_t local_buffer_e0;
  do {
    LOCK();
    uVar1 = *in_RAX;
    *in_RAX = *in_RAX | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  local_buffer_c0 = in_RAX[1];
  local_buffer_c4 = in_RAX[2];
  local_var_28 = in_RAX[3];
  local_buffer_2c = in_RAX[4];
  uVar2 = *(uint64_t *)(in_RAX + 5);
  uVar3 = *(uint64_t *)(in_RAX + 7);
  *in_RAX = 0;
  local_var_30 = uVar2;
  local_var_38 = uVar3;
  local_buffer_c8 = local_var_28;
  local_buffer_cc = local_buffer_2c;
  local_buffer_d0 = uVar2;
  local_buffer_d8 = uVar3;
  SystemSecurityManager(&local_buffer_00000070,&local_buffer_00000020,param_3,param_4,local_buffer_c0);
  *unaff_RBX = local_buffer_70;
  unaff_RBX[1] = local_buffer_74;
  unaff_RBX[2] = local_buffer_78;
  unaff_RBX[3] = local_buffer_7c;
  unaff_RBX[4] = local_buffer_80;
  unaff_RBX[5] = local_buffer_84;
  unaff_RBX[6] = local_buffer_88;
  unaff_RBX[7] = local_buffer_8c;
  unaff_RBX[8] = local_buffer_90;
  unaff_RBX[9] = local_buffer_94;
  unaff_RBX[10] = local_buffer_98;
  unaff_RBX[0xb] = local_buffer_9c;
  *(uint64_t *)(unaff_RBX + 0xc) = uVar2;
  *(uint64_t *)(unaff_RBX + 0xe) = uVar3;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_e0 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UtilitiesSystem_17771(void)
void UtilitiesSystem_17771(void)
{
  uint64_t *unaff_RBX;
  uint64_t local_buffer_e0;
  *unaff_RBX = 0x3f800000;
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0x3f80000000000000;
  unaff_RBX[3] = 0;
  *(int32_t *)(unaff_RBX + 4) = 0;
  *(int32_t *)((int64_t)unaff_RBX + 0x24) = 0;
  *(int32_t *)(unaff_RBX + 5) = 0x3f800000;
  *(int32_t *)((int64_t)unaff_RBX + 0x2c) = 0;
  *(int32_t *)(unaff_RBX + 6) = 0;
  *(int32_t *)((int64_t)unaff_RBX + 0x34) = 0;
  *(int32_t *)(unaff_RBX + 7) = 0;
  *(int32_t *)((int64_t)unaff_RBX + 0x3c) = 0x3f800000;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_e0 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_177c0(int64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
void UtilitiesSystem_177c0(int64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4,
                  float param_5)
{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t in_XMM3_Da;
  if (param_1 == 0) {
    return;
  }
  if ((int)param_2 < 0) {
// WARNING: Could not recover jumptable at 0x0001806177f8. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(**(int64_t **)(param_1 + 0x210) + 0x78))
              (*(int64_t **)(param_1 + 0x210),param_3,0,0x3727c5ac);
    return;
  }
  iVar1 = *(int *)(render_system_memory + (int64_t)(int)param_2 * 4);
  lVar3 = (int64_t)iVar1;
  if ((iVar1 != -1) && (lVar3 = *(int64_t *)(render_system_memory + lVar3 * 8), lVar3 != 0)) {
    if (param_5 < 0.0) {
      param_5 = *(float *)(lVar3 + 0x1e4);
    }
    uVar2 = *(uint64_t *)(lVar3 + 0x1d0) >> 0x24 & 0xffff;
    uVar4 = (uint64_t)((uint)uVar2 | 0x4000);
    if ((*(uint64_t *)(lVar3 + 0x1d0) & 0x110000000) != 0) {
      uVar4 = uVar2;
    }
    RenderingSystem_00970(param_1,param_3,lVar3,uVar4,param_5,in_XMM3_Da);
    return;
  }
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0(&ui_system_data_1584_ptr,param_2,lVar3,param_4,param_2,lVar3,param_4);
}
// 函数: void UtilitiesSystem_178d0(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void UtilitiesSystem_178d0(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t param_5)
{
  int64_t lVar1;
  uint64_t uVar2;
  void *plocal_var_30;
  int64_t lStack_28;
  if ((param_1 != 0) && (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x210) + 0xabf0), lVar1 != 0)
     ) {
    uVar2 = CoreMemoryPoolValidator(&plocal_var_30,param_3);
    NetworkSystem_ef2e0(lVar1,param_2,uVar2,param_5);
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
// 函数: void UtilitiesSystem_17970(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void UtilitiesSystem_17970(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)
{
  int32_t local_var_38;
  int iStack_34;
  uint64_t local_var_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  if (param_1 == 0) {
// WARNING: Subroutine does not return
    local_var_18 = 0x180626fa0;
    SystemCore_MemoryManager0(&ui_system_data_1528_ptr,param_2,param_3,0,param_2,param_3,0);
  }
  iStack_34 = (int)param_3;
  if (-1 < iStack_34) {
    local_var_24 = 0;
    local_var_1c = param_5;
    local_var_20 = 0x3f800000;
    local_var_38 = (int32_t)param_2;
    local_var_18 = 0x3ecccccdbe4ccccd;
    local_var_30 = 0;
    local_var_28 = param_4;
    (**(code **)(**(int64_t **)(param_1 + 0x210) + 0x160))
              (*(int64_t **)(param_1 + 0x210),&local_var_38,*(uint64_t *)(param_1 + 0x208));
    return;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t UtilitiesSystem_17a30(int64_t param_1,int param_2,int param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t in_RAX;
  uint64_t uVar4;
  if ((param_1 == 0) || (param_3 < 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = *(int64_t *)(param_1 + 0x210);
  iVar3 = SystemCacheManager(&system_data_5f30,*(int32_t *)(lVar1 + 0xac));
  iVar3 = *(int *)(render_system_memory + (int64_t)iVar3 * 4);
  uVar4 = render_system_memory;
  if (iVar3 != -1) {
    lVar2 = *(int64_t *)(render_system_memory + (int64_t)iVar3 * 8);
    uVar4 = render_system_memory;
    if (((lVar2 != 0) && (iVar3 = *(int *)(lVar2 + 0x1f0), uVar4 = render_system_memory, iVar3 != -1)) &&
       (uVar4 = (int64_t)param_2, iVar3 == *(int *)(lVar1 + 0x2450 + (int64_t)param_2 * 0x48))) {
      return CONCAT71((int7)(int3)((uint)param_2 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t UtilitiesSystem_17a43(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t unaff_RBX;
  lVar1 = *(int64_t *)(param_1 + 0x210);
  iVar3 = SystemCacheManager(&system_data_5f30,*(int32_t *)(lVar1 + 0xac));
  iVar3 = *(int *)(render_system_memory + (int64_t)iVar3 * 4);
  if (iVar3 != -1) {
    lVar2 = *(int64_t *)(render_system_memory + (int64_t)iVar3 * 8);
    if (((lVar2 != 0) && (iVar3 = *(int *)(lVar2 + 0x1f0), iVar3 != -1)) &&
       (iVar3 == *(int *)(lVar1 + 0x2450 + unaff_RBX * 0x48))) {
      return 1;
    }
  }
  return 0;
}
int8_t UtilitiesSystem_17aac(void)
{
  return 0;
}
int8_t UtilitiesSystem_17ab9(void)
{
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_17af0(uint64_t param_1,uint64_t *param_2)
void UtilitiesSystem_17af0(uint64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  lVar2 = (int64_t)*(int *)(param_2 + 1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2,3);
  }
// WARNING: Subroutine does not return
  memcpy(uVar1,*param_2,lVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t UtilitiesSystem_17ba0(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plStackX_20;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_18;
  uVar2 = CoreMemoryPoolValidator(&plocal_var_30);
  GenericFunction_1801580f0(render_system_data_memory,&plStackX_20,param_1,uVar2,param_3,0,0);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_28 = 0;
  local_var_18 = 0;
  plocal_var_30 = &system_state_ptr;
  (**(code **)(*plStackX_20 + 0x60))();
  lVar1 = plStackX_20[10];
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return (int)lVar1;
}
int8_t * UtilitiesSystem_17c60(int param_1,uint64_t *param_2)
{
  int8_t *puVar1;
  int iStack_48;
  uint64_t local_var_44;
  uint64_t local_var_3c;
  int32_t local_var_34;
  uint64_t local_var_30;
  uint64_t local_var_28;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  local_var_1c = 0x3f800000;
  local_var_34 = 1;
  local_var_20 = 0;
  local_var_18 = 0;
  local_var_44 = *param_2;
  local_var_3c = param_2[1];
  local_var_30 = 0;
  local_var_28 = 0;
  if (-1 < param_1) {
    iStack_48 = param_1;
    puVar1 = (int8_t *)NetworkSystem_45140(&system_data_6110,&iStack_48,0,0);
    return puVar1;
  }
  return &local_buffer_00000000;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_17cd0(uint param_1,int32_t param_2,int32_t param_3,uint64_t *param_4)
void UtilitiesSystem_17cd0(uint param_1,int32_t param_2,int32_t param_3,uint64_t *param_4)
{
  uint uVar1;
  int8_t stack_array_188 [32];
  code *pcStack_168;
  uint64_t local_var_160;
  int32_t local_var_158;
  int8_t *plocal_var_150;
  uint64_t local_var_148;
  int8_t local_var_140;
  uint local_var_138;
  uint64_t local_var_134;
  uint64_t local_var_12c;
  int32_t local_var_124;
  code *pcStack_120;
  uint64_t local_var_118;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  uint64_t local_var_100;
  int8_t stack_array_f8 [8];
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int8_t local_var_d0;
  int32_t local_var_38;
  uint64_t local_var_28;
  local_var_100 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_188;
  pcStack_168 = SystemCore_MemoryManager;
  DataStructureManager(stack_array_f8,0x30,4,GenericFunction_1801c2890);
  local_var_38 = 0;
  local_var_e8 = 0;
  if (plocal_var_f0 != (int8_t *)0x0) {
    *plocal_var_f0 = 0;
  }
  local_var_d0 = 1;
  local_var_38 = 1;
  local_var_134 = *param_4;
  local_var_12c = param_4[1];
  local_var_124 = 1;
  pcStack_120 = (code *)0x0;
  local_var_118 = 0;
  local_var_110 = 0;
  local_var_10c = 0x3f800000;
  local_var_108 = 0;
  local_var_138 = param_1;
  local_var_d8 = param_2;
  local_var_d4 = param_3;
  if ((-1 < (int)param_1) && (uVar1 = (**(code **)(*render_system_data_memory + 0xe8))(), local_var_138 < uVar1))
  {
    if (((char)local_var_124 == '\0') &&
       (((system_status_flag - 2U & 0xfffffffc) == 0 && (system_status_flag != 4)))) {
      local_var_158 = CONCAT31(local_var_158._1_3_,local_var_124._1_1_);
      local_var_160 = local_var_118;
      pcStack_168 = pcStack_120;
      NetworkSystem_458e0(&system_data_6110,local_var_138,stack_array_f8,&local_var_134);
    }
    local_var_140 = local_var_124._2_1_;
    local_var_148 = 0;
    plocal_var_150 = stack_array_f8;
    local_var_158 = local_var_108;
    local_var_160 = CONCAT44(local_var_160._4_4_,local_var_10c);
    pcStack_168 = (code *)CONCAT44(pcStack_168._4_4_,local_var_110);
    NetworkSystem_45230(&system_data_6110,local_var_138,&local_var_134,local_var_124._3_1_);
  }
  SystemDataValidator(stack_array_f8,0x30,4,SystemCore_MemoryManager);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_188);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address