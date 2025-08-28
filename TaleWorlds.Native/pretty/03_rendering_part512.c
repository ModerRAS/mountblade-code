// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
// 03_rendering_part512.c - 8 个函数
// 函数: void RenderingSystem_BufferProcessor(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void RenderingSystem_BufferProcessor(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uVar4 = *param_1;
  uVar5 = *param_2;
  puVar3 = param_3;
  iVar1 = Function_7ec61d71(uVar4);
  iVar2 = Function_7ec61d71(uVar5);
  if (iVar1 < iVar2) {
    *param_2 = uVar4;
    *param_1 = uVar5;
    uVar5 = *param_2;
  }
  uVar4 = *puVar3;
  iVar1 = Function_7ec61d71(uVar4);
  iVar2 = Function_7ec61d71(uVar5);
  if (iVar2 < iVar1) {
    *param_3 = uVar5;
    *param_2 = uVar4;
    uVar5 = *param_1;
    iVar1 = Function_7ec61d71(uVar5);
    iVar2 = Function_7ec61d71(uVar4);
    if (iVar1 < iVar2) {
      *param_2 = uVar5;
      *param_1 = uVar4;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
NetworkSystem_3f310(int64_t param_1,uint64_t *param_2,uint64_t param_3,int32_t *param_4,
             uint64_t *param_5)
{
  uint64_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  puVar8 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x2c));
  plVar4 = (int64_t *)param_5;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *(int32_t *)puVar8 = *param_4;
  *(int32_t *)((int64_t)puVar8 + 4) = uVar5;
  *(int32_t *)(puVar8 + 1) = uVar6;
  *(int32_t *)((int64_t)puVar8 + 0xc) = uVar7;
  puVar8[2] = *(uint64_t *)(param_4 + 4);
  puVar1 = puVar8 + 3;
  lVar11 = (int64_t)(((int64_t *)param_5)[1] - *param_5) >> 3;
  uVar2 = *(uint *)((int64_t *)param_5 + 3);
  *(uint *)(puVar8 + 6) = uVar2;
  uVar9 = 0;
  if (lVar11 != 0) {
    uVar9 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 8,uVar2 & 0xff);
  }
  *puVar1 = uVar9;
  puVar8[4] = uVar9;
  puVar8[5] = uVar9 + lVar11 * 8;
  lVar11 = plVar4[1];
  lVar3 = *plVar4;
  if (lVar3 != lVar11) {
// WARNING: Subroutine does not return
    memmove(*puVar1,lVar3,lVar11 - lVar3);
  }
  puVar8[4] = *puVar1;
  puVar8[7] = 0;
  uVar9 = (puVar8[1] ^ puVar8[2] ^ *puVar8) % (uint64_t)*(uint *)(param_1 + 0x10);
  plVar4 = *(int64_t **)(*(int64_t *)(param_1 + 8) + uVar9 * 8);
  do {
    if (plVar4 == (int64_t *)0x0) {
LAB_18053f452:
      param_5 = puVar8;
      RenderingShaderProcessor0(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      if ((char)param_5 != '\0') {
        lVar11 = ((uint64_t)param_5 >> 0x20) * 8;
        uVar10 = CoreMemoryPoolReallocator(system_memory_pool_ptr,lVar11 + 8,8,*(int8_t *)(param_1 + 0x2c));
// WARNING: Subroutine does not return
        memset(uVar10,0,lVar11);
      }
      puVar8[7] = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar9 * 8);
      *(uint64_t **)(*(int64_t *)(param_1 + 8) + uVar9 * 8) = puVar8;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
      lVar11 = *(int64_t *)(param_1 + 8);
      *param_2 = puVar8;
      param_2[1] = lVar11 + uVar9 * 8;
      *(int8_t *)(param_2 + 2) = 1;
      return param_2;
    }
    lVar11 = *puVar8 - *plVar4;
    if ((lVar11 == 0) && (lVar11 = puVar8[1] - plVar4[1], lVar11 == 0)) {
      lVar11 = puVar8[2] - plVar4[2];
    }
    if (lVar11 == 0) {
      if (plVar4 != (int64_t *)0x0) {
        param_5 = puVar1;
        if (*puVar1 != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(puVar8);
      }
      goto LAB_18053f452;
    }
    plVar4 = (int64_t *)plVar4[7];
  } while( true );
}
uint64_t *
NetworkSystem_3f600(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0xd;
  strcpy_s(param_2[1],0x80,&processed_var_9616_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int NetworkSystem_3f680(int64_t param_1)
{
  int *piVar1;
  int iVar2;
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    render_system_data_config = render_system_data_config + -1;
    (**(code **)(*(int64_t *)*render_system_data_config + 0x60))((int64_t *)*render_system_data_config,param_1);
  }
  return iVar2 + -1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * NetworkSystem_3f6c0(uint64_t *param_1,uint64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_9784_ptr;
  param_1[2] = 0;
  DataStructureManager(param_1 + 3,8,0xe,&SUB_18005d5f0,DataCacheManager);
  puVar3 = param_1 + 0x12;
  lVar2 = 5;
  DataStructureManager(puVar3,0x180,5,NetworkSystem_44dc0,NetworkSystem_06660);
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(int32_t *)(param_1 + 0x105) = 3;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x10a] = 0;
  *(int8_t *)(param_1 + 0x10b) = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  *(int32_t *)(param_1 + 0x114) = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x115] = 0;
  _Mtx_init_in_situ(param_1 + 299,0x102);
  param_1[0x126] = param_2;
  LOCK();
  UNLOCK();
  iVar1 = render_system_config + 1;
  *(int *)(param_1 + 0x127) = render_system_config;
  render_system_config = iVar1;
  render_system_data_config = render_system_data_config + 1;
  *(int8_t *)((int64_t)param_1 + 0x8bc) = 1;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  *(int32_t *)((int64_t)param_1 + 0x8b4) = 0xffffffff;
  *(int32_t *)(param_1 + 0x117) = 0x3f800000;
  do {
    NetworkSystem_e7fe0(puVar3,0);
    puVar3 = puVar3 + 0x30;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(int8_t *)((int64_t)param_1 + 0x8be) = 1;
  NetworkSystem_3fcb0(param_1,0);
  *(int8_t *)((int64_t)param_1 + 0x8be) = 1;
  *(int32_t *)(param_1 + 0x116) = 0xffffffff;
  *(int32_t *)(param_1 + 0x118) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x8c4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8cc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8e4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8ec) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8f4) = 0x7fc000007fc00000;
  *(uint64_t *)((int64_t)param_1 + 0x8fc) = 0x7fc000007fc00000;
  *(uint64_t *)((int64_t)param_1 + 0x904) = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  *(int32_t *)((int64_t)param_1 + 0x8b4) = 0xffffffff;
  *(int32_t *)(param_1 + 0x117) = 0x3f800000;
  return param_1;
}
uint64_t NetworkSystem_3f8f0(uint64_t param_1,uint64_t param_2)
{
  NetworkSystem_3f930();
  if ((param_2 & 1) != 0) {
    free(param_1,0x9b0);
  }
  return param_1;
}
// 函数: void NetworkSystem_3f930(uint64_t *param_1)
void NetworkSystem_3f930(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar5;
  uint64_t uVar4;
  *param_1 = &processed_var_9784_ptr;
  uVar4 = 0;
  if (((param_1[0x115] != 0) && (lVar2 = *(int64_t *)(param_1[0x115] + 0x260), lVar2 != 0)) &&
     (lVar2 = *(int64_t *)(lVar2 + 0x210), lVar2 != 0)) {
    *(uint64_t *)(lVar2 + 0x48) = 0;
    *(uint64_t *)(lVar2 + 0x50) = 0;
  }
  plVar1 = param_1 + 0x102;
  lVar2 = *plVar1;
  uVar5 = uVar4;
  if (param_1[0x103] - lVar2 >> 3 != 0) {
    do {
      lVar2 = *(int64_t *)(uVar5 + lVar2);
      if (lVar2 != 0) {
        NetworkSystem_06660(lVar2);
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar2);
      }
      *(uint64_t *)(uVar5 + *plVar1) = 0;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      lVar2 = *plVar1;
      uVar5 = uVar5 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(param_1[0x103] - lVar2 >> 3));
  }
  param_1[0x103] = lVar2;
  _Mtx_destroy_in_situ();
  if ((int64_t *)param_1[0x115] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x115] + 0x38))();
  }
  if ((int64_t *)param_1[0x108] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x108] + 0x38))();
  }
  if ((int64_t *)param_1[0x107] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x107] + 0x38))();
  }
  if ((int64_t *)param_1[0x106] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x106] + 0x38))();
  }
  if (*plVar1 == 0) {
    SystemDataValidator(param_1 + 0x12,0x180,5,NetworkSystem_06660);
    SystemDataValidator(param_1 + 3,8,0xe,DataCacheManager);
    if ((int64_t *)param_1[2] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[2] + 0x38))();
    }
    *param_1 = &system_handler2_ptr;
    *param_1 = &system_handler1_ptr;
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_3fae0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void NetworkSystem_3fae0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lStackX_20;
  int32_t uVar8;
  plVar7 = (int64_t *)(param_1 + 0x90);
  lStackX_20 = 5;
  do {
    plVar2 = (int64_t *)0x0;
    if (*plVar7 != 0) {
      plVar1 = (int64_t *)*plVar7;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      uVar8 = 1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar5 = (int64_t *)param_2[1];
      if (plVar5 < (int64_t *)param_2[2]) {
        param_2[1] = (int64_t)(plVar5 + 1);
        *plVar5 = (int64_t)plVar1;
      }
      else {
        plVar4 = (int64_t *)*param_2;
        lVar3 = (int64_t)plVar5 - (int64_t)plVar4 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_18053fba9:
          plVar2 = (int64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,(char)param_2[3],param_4,uVar8);
          plVar5 = (int64_t *)param_2[1];
          plVar4 = (int64_t *)*param_2;
          plVar6 = plVar2;
        }
        else {
          lVar3 = lVar3 * 2;
          plVar6 = plVar2;
          if (lVar3 != 0) goto LAB_18053fba9;
        }
        for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
          *plVar2 = *plVar4;
          *plVar4 = 0;
          plVar2 = plVar2 + 1;
        }
        *plVar2 = (int64_t)plVar1;
        plVar5 = (int64_t *)param_2[1];
        plVar4 = (int64_t *)*param_2;
        if (plVar4 != plVar5) {
          do {
            if ((int64_t *)*plVar4 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar4 + 0x38))();
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar5);
          plVar4 = (int64_t *)*param_2;
        }
        if (plVar4 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(plVar4);
        }
        *param_2 = (int64_t)plVar6;
        param_2[1] = (int64_t)(plVar2 + 1);
        param_2[2] = (int64_t)(plVar6 + lVar3);
      }
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
    }
    plVar7 = plVar7 + 0x30;
    lStackX_20 = lStackX_20 + -1;
    if (lStackX_20 == 0) {
      return;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_3fcb0(int64_t param_1,char param_2)
void NetworkSystem_3fcb0(int64_t param_1,char param_2)
{
  uint *puVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  bool bVar13;
  iVar3 = _Mtx_lock(0x180c96690);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar5 = *(int64_t *)(param_1 + 0x8a8);
  lVar12 = 0;
  lVar6 = lVar12;
  if (lVar5 != 0) {
    lVar6 = *(int64_t *)(lVar5 + 0x260);
  }
  lVar4 = *(int64_t *)(param_1 + 0x948);
  lVar10 = lVar12;
  if (lVar4 != 0) {
    lVar10 = *(int64_t *)(lVar6 + 0x28);
  }
  if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x260), lVar5 != 0)) {
    lVar11 = lVar12;
    if (lVar4 != 0) {
      lVar11 = *(int64_t *)(lVar5 + 0x28);
    }
    if (lVar11 != 0) {
      RenderingSystem_00650(lVar5,0);
      *(int8_t *)(lVar11 + 0xaa) = 0;
      lVar4 = *(int64_t *)(param_1 + 0x948);
    }
    if (lVar4 != 0) {
      *(uint64_t *)(lVar4 + 0x940) = 0;
    }
  }
  *(uint64_t *)(param_1 + 0x948) = 0;
  if (lVar10 != 0) {
    (**(code **)(**(int64_t **)(lVar6 + 0x210) + 0x18))();
  }
  if ((lVar6 != 0) && (*(int64_t **)(lVar6 + 0x210) != (int64_t *)0x0)) {
    (**(code **)(**(int64_t **)(lVar6 + 0x210) + 0x68))();
  }
  if (*(int64_t *)(param_1 + 0x940) != 0) {
    *(uint64_t *)(*(int64_t *)(param_1 + 0x940) + 0x948) = 0;
    lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x940) + 0x8a8);
    if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x260), lVar5 != 0)) {
      (**(code **)(**(int64_t **)(lVar5 + 0x210) + 0x18))();
      RenderingSystem_00650(lVar5,0);
      if (*(int64_t **)(lVar5 + 0x210) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar5 + 0x210) + 0x140))();
      }
    }
  }
  if ((*(int64_t *)(param_1 + 0x8a8) != 0) &&
     (lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260), lVar5 != 0)) {
    *(int8_t *)(lVar5 + 0xaa) = 0;
  }
  *(uint64_t *)(param_1 + 0x940) = 0;
  *(int8_t *)(param_1 + 0x848) = 0;
  *(int8_t *)(param_1 + 0x8bc) = 1;
  *(uint64_t *)(param_1 + 0x850) = 0;
  *(int8_t *)(param_1 + 0x858) = 0;
  *(uint64_t *)(param_1 + 0x860) = 0;
  *(uint64_t *)(param_1 + 0x868) = 0;
  *(int32_t *)(param_1 + 0x8a0) = 0;
  *(uint64_t *)(param_1 + 0x870) = 0;
  *(uint64_t *)(param_1 + 0x878) = 0;
  *(uint64_t *)(param_1 + 0x880) = 0;
  *(uint64_t *)(param_1 + 0x888) = 0;
  *(uint64_t *)(param_1 + 0x890) = 0;
  *(uint64_t *)(param_1 + 0x898) = 0;
  if (*(int64_t *)(param_1 + 0x8a8) == 0) {
LAB_18053ffa1:
    iVar3 = _Mtx_lock(param_1 + 0x958);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    NetworkSystem_40840(param_1,param_2);
    NetworkSystem_401f0(param_1,1,0);
    plVar2 = *(int64_t **)(param_1 + 0x838);
    *(uint64_t *)(param_1 + 0x838) = 0;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (((*(int64_t *)(param_1 + 0x8a8) != 0) && (param_2 != '\0')) &&
       (*(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x20) != 0)) {
      CoreEngine_198980();
    }
    if (*(int64_t *)(param_1 + 0x830) != 0) {
      NetworkSystem_4a450();
      *(uint64_t *)(*(int64_t *)(param_1 + 0x830) + 0xd8) = 0;
      plVar2 = *(int64_t **)(param_1 + 0x830);
      *(uint64_t *)(param_1 + 0x830) = 0;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
    }
    NetworkSystem_40130(param_1);
    *(uint64_t *)(param_1 + 0x940) = 0;
    *(uint64_t *)(param_1 + 0x948) = 0;
    NetworkSystem_44930(param_1,0);
    *(int8_t *)(param_1 + 0x910) = 0;
    *(int32_t *)(param_1 + 0x950) = 0xffffffff;
    *(int8_t *)(param_1 + 0x8be) = 0;
    iVar3 = _Mtx_unlock(param_1 + 0x958);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    *(int32_t *)(param_1 + 0x8b4) = 0xffffffff;
    *(int32_t *)(param_1 + 0x8b8) = 0x3f800000;
    *(uint64_t *)(param_1 + 0x914) = 0xffffffffffffffff;
    *(int8_t *)(param_1 + 0x8bd) = 0;
    *(int32_t *)(param_1 + 0x91c) = 0xffffffff;
    *(int32_t *)(param_1 + 0x8c0) = 0x3f800000;
    *(int32_t *)(param_1 + 0x90c) = 0;
    iVar3 = _Mtx_unlock(0x180c96690);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    return;
  }
  puVar1 = (uint *)(*(int64_t *)(param_1 + 0x8a8) + 0x2ac);
  *puVar1 = *puVar1 & 0xefffffff;
  lVar5 = *(int64_t *)(param_1 + 0x8a8);
  if (*(int64_t *)(lVar5 + 0x20) != 0) {
    GenericFunction_1801b01f0(*(int64_t *)(lVar5 + 0x20),lVar5);
    lVar5 = *(int64_t *)(param_1 + 0x8a8);
  }
  if (((param_2 != '\0') || (*(int *)(lVar5 + 0x2b8) != -1)) || (*(int64_t *)(lVar5 + 0x20) == 0))
  goto LAB_18053ffa1;
  lVar5 = *(int64_t *)(param_1 + 0x930);
  puVar9 = (uint64_t *)(lVar5 + 0x2bb8);
  lVar6 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(lVar5 + 0x2be0));
  plVar2 = *(int64_t **)(param_1 + 0x8a8);
  *(int64_t **)(lVar6 + 0x20) = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  bVar13 = true;
  puVar8 = puVar9;
  if (*(uint64_t **)(lVar5 + 0x2bc8) != (uint64_t *)0x0) {
    puVar7 = *(uint64_t **)(lVar5 + 0x2bc8);
    do {
      puVar8 = puVar7;
      bVar13 = *(uint64_t *)(lVar6 + 0x20) < (uint64_t)puVar8[4];
      if (bVar13) {
        puVar7 = (uint64_t *)puVar8[1];
      }
      else {
        puVar7 = (uint64_t *)*puVar8;
      }
    } while (puVar7 != (uint64_t *)0x0);
  }
  puVar7 = puVar8;
  if (bVar13) {
    if (puVar8 == *(uint64_t **)(lVar5 + 0x2bc0)) goto LAB_18053ff5e;
    puVar7 = (uint64_t *)Function_e2d50782(puVar8);
  }
  if (*(uint64_t *)(lVar6 + 0x20) <= (uint64_t)puVar7[4]) {
    if (*(int64_t **)(lVar6 + 0x20) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar6 + 0x20) + 0x38))();
    }
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar6);
  }
LAB_18053ff5e:
  if ((puVar8 == puVar9) || (lVar5 = 1, *(uint64_t *)(lVar6 + 0x20) < (uint64_t)puVar8[4])) {
    lVar5 = lVar12;
  }
// WARNING: Subroutine does not return
  SystemStateController(lVar6,puVar8,puVar9,lVar5);
}
// 函数: void NetworkSystem_40130(int64_t param_1)
void NetworkSystem_40130(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  iVar2 = _Mtx_lock(param_1 + 0x958);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  plVar4 = (int64_t *)(param_1 + 0x18);
  lVar3 = 0xe;
  do {
    plVar1 = (int64_t *)*plVar4;
    *plVar4 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar4 = plVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  plVar4 = *(int64_t **)(param_1 + 0x10);
  *(uint64_t *)(param_1 + 0x10) = 0;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  iVar2 = _Mtx_unlock(param_1 + 0x958);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_401f0(int64_t param_1,char param_2,uint64_t param_3,int32_t param_4)
void NetworkSystem_401f0(int64_t param_1,char param_2,uint64_t param_3,int32_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  float fVar7;
  int64_t *plStackX_8;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint local_var_38;
  int32_t local_var_34;
  int64_t lStack_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  if (*(int64_t *)(param_1 + 0x8a8) != 0) {
    if ((*(int *)(SYSTEM_STATE_MANAGER + 0xc40) < 1) && ((param_2 == '\0' || ((char)param_3 != '\0')))) {
      if (*(int64_t *)(param_1 + 0x838) == 0) {
        fStack_50 = 0.5;
        fVar7 = 0.5;
        if ((char)param_3 != '\0') {
          fStack_50 = 0.6;
          fVar7 = 1.6;
        }
        local_var_4c = 0;
        fStack_58 = fStack_50 * 1.0;
        fStack_54 = fStack_50 * 0.0;
        fStack_50 = fStack_50 * 0.0;
        local_var_48 = CONCAT44(fVar7 * 1.0,fVar7 * 0.0);
        local_var_40 = (uint64_t)(uint)(fVar7 * 0.0);
        local_var_38 = 0;
        local_var_34 = 0;
        lStack_30 = 0x3f000000;
        local_var_28 = 0;
        local_var_24 = 0;
        local_var_20 = 0xbe4ccccd;
        local_var_1c = 0x7f7fffff;
        plVar4 = (int64_t *)GenericFunction_1800bf780();
        uVar5 = (**(code **)(*plVar4 + 0xa8))(plVar4,&plStackX_8);
        SystemCore_ChecksumValidator(param_1 + 0x838,uVar5);
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        (**(code **)(**(int64_t **)(param_1 + 0x838) + 0x148))
                  (*(int64_t **)(param_1 + 0x838),&fStack_58);
        if (*(int64_t *)(param_1 + 0x8a8) == 0) {
          DataStructure_fc0f0(0,*(uint64_t *)(param_1 + 0x838));
        }
        else {
          DataStructure_fc0f0(*(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260),
                        *(uint64_t *)(param_1 + 0x838));
        }
      }
    }
    else {
      plStackX_8 = *(int64_t **)(param_1 + 0x838);
      if (plStackX_8 != (int64_t *)0x0) {
        lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
        plVar4 = *(int64_t **)(lVar1 + 0x1b0);
        plVar6 = *(int64_t **)(lVar1 + 0x1a8);
        if (plVar6 != plVar4) {
          do {
            if ((int64_t *)*plVar6 == plStackX_8) break;
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar4);
          if (plVar6 != plVar4) {
            (**(code **)(*plStackX_8 + 0x28))
                      (plStackX_8,plVar4,param_3,param_4,0xfffffffffffffffe,&plStackX_8);
            DataStructure_fc640(lVar1,&plStackX_8);
            plVar4 = *(int64_t **)(param_1 + 0x838);
            *(uint64_t *)(param_1 + 0x838) = 0;
            if (plVar4 != (int64_t *)0x0) {
              (**(code **)(*plVar4 + 0x38))();
            }
          }
        }
      }
    }
  }
  local_var_48 = 0xfffffffffffffffe;
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  local_var_38 = local_var_38 & 0xffffff00;
  local_var_40 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  local_var_38 = CONCAT31(local_var_38._1_3_,1);
  local_var_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  UISystem_dd4d0(lVar2 + 0x2b88,&local_var_20,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_40440(int64_t param_1,int64_t param_2)
void NetworkSystem_40440(int64_t param_1,int64_t param_2)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint *puVar11;
  int64_t lVar12;
  int iVar13;
  int iVar14;
  int64_t lVar15;
  float *pfVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  int aiStackX_10 [2];
  int32_t astack_special_x_18 [2];
  int32_t astack_special_x_20 [2];
  int8_t stack_array_50 [24];
  pfVar16 = (float *)(param_1 + 0x128);
  iVar14 = 0;
  lVar15 = 0;
  lVar12 = 0;
  iVar1 = *(int *)(*(int64_t *)(param_2 + 0x8f8) + 0x9e0);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x8f8) + 0x9e8);
  do {
    lVar9 = *(int64_t *)(param_2 + 0x8f8);
    if (((*(int64_t *)(pfVar16 + -0x26) != 0) && (0 < *(int *)(lVar9 + 0x38 + lVar12))) &&
       ((lVar3 = *(int64_t *)(lVar9 + 0xd8 + lVar12),
        (*(uint *)((int64_t)*(int *)(lVar9 + 0xf8 + lVar12) * 0xa0 + 0x50 + lVar3) >> 9 & 1) == 0
        || (0 < *(short *)(lVar9 + 0x10 + lVar12))))) {
      lVar10 = *(int64_t *)(lVar9 + 0xe0 + lVar12) - lVar3;
      iVar13 = 0;
      lVar5 = lVar10 >> 0x3f;
      lVar10 = lVar10 / 0xa0 + lVar5;
      if (lVar10 != lVar5) {
        puVar11 = (uint *)(lVar3 + 0x50);
        do {
          if ((*puVar11 >> 8 & 1) != 0) {
            sVar7 = *(short *)(lVar9 + 0x10 + lVar12);
            iVar13 = (int)sVar7;
            if ((lVar15 == iVar1) && (0 < sVar7)) {
              plVar4 = *(int64_t **)(param_2 + 0x590);
              iVar8 = (int)plVar4[0x493];
              if (iVar8 != -1) {
                if ((*(int *)((int64_t)iVar8 * 0x68 + 0x58 + render_system_config) == 0x10) ||
                   (iVar8 = *(int *)((int64_t)iVar8 * 0x68 + 0x58 + render_system_config), iVar8 == 0x11)
                   ) {
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  fVar19 = *(float *)(lVar9 + 0x1d8);
                  fVar20 = (float)(**(code **)(**(int64_t **)(param_2 + 0x590) + 0x90))
                                            (*(int64_t **)(param_2 + 0x590),1);
                  bVar18 = fVar19 == fVar20;
                  bVar17 = fVar19 < fVar20;
                }
                else {
                  if (iVar8 != 0x12) goto LAB_18054079f;
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  plVar4 = *(int64_t **)(param_2 + 0x590);
                  if (((int)plVar4[0x493] == -1) ||
                     (*(char *)((int64_t)(int)plVar4[0x493] * 0x68 + 0x60 + render_system_config) !=
                      '\x04')) goto LAB_1805407d6;
                  fVar19 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,1);
                  bVar18 = fVar19 == *(float *)(lVar9 + 0x1d8);
                  bVar17 = fVar19 < *(float *)(lVar9 + 0x1d8);
                }
                if (bVar17 || bVar18) goto LAB_1805407d6;
              }
LAB_18054079f:
              if (0 < sVar7) {
                iVar13 = iVar13 + -1;
              }
            }
            else if ((plVar2 != (int64_t *)0x0) &&
                    ((*(uint *)((int64_t)(int)plVar2[0x1e] * 0xa0 + 0x50 + plVar2[0x1a]) & 0x102)
                     == 2)) {
              if ((*(int64_t **)(param_2 + 0x628) == plVar2) && (*(int *)(param_2 + 0x644) == -1))
              {
                iVar8 = *(int *)(param_2 + 0x640);
              }
              else {
                aiStackX_10[0] = -1;
                astack_special_x_20[0] = 0xffffffff;
                astack_special_x_18[0] = 0xffffffff;
                NetworkSystem_0e440(param_2,plVar2,astack_special_x_20,astack_special_x_18,aiStackX_10,stack_array_50,
                              0xffffffff);
                iVar8 = aiStackX_10[0];
              }
              if (iVar8 == iVar14) {
                plVar4 = *(int64_t **)(param_2 + 0x590);
                if (((int)plVar4[0x493] == -1) ||
                   (*(int *)((int64_t)(int)plVar4[0x493] * 0x68 + 0x58 + render_system_config) != 0x12))
                {
                  if ((*plVar2 != 0) &&
                     ((*(int *)(*plVar2 + 0x30) == *(int *)(lVar9 + 0x38 + lVar12) &&
                      (cVar6 = Function_3c7142aa(plVar2,0x80000), cVar6 != '\0')))) {
                    sVar7 = Function_00138f18(plVar2);
                    iVar13 = iVar13 - sVar7;
                  }
                }
                else {
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  plVar4 = *(int64_t **)(param_2 + 0x590);
                  if (((((int)plVar4[0x493] != -1) &&
                       (*(char *)((int64_t)(int)plVar4[0x493] * 0x68 + 0x60 + render_system_config) ==
                        '\x04')) &&
                      (fVar19 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,1),
                      *(float *)(lVar9 + 0x1d8) <= fVar19 && fVar19 != *(float *)(lVar9 + 0x1d8)))
                     && ((cVar6 = Function_3c7142aa(plVar2,0x80000), cVar6 != '\0' ||
                         (fVar19 = (float)(**(code **)(**(int64_t **)(param_2 + 0x590) + 0x90))
                                                    (*(int64_t **)(param_2 + 0x590),1),
                         fVar19 < *(float *)(lVar9 + 0x1dc))))) goto LAB_18054079f;
                }
              }
            }
LAB_1805407d6:
            *pfVar16 = (float)(8 - iVar13);
            break;
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 0x28;
        } while ((uint64_t)(int64_t)iVar13 < (uint64_t)(lVar10 - lVar5));
      }
    }
    iVar14 = iVar14 + 1;
    lVar15 = lVar15 + 1;
    lVar12 = lVar12 + 0x1f8;
    pfVar16 = pfVar16 + 0x60;
    if (0x9d7 < lVar12) {
      return;
    }
  } while( true );
}
// 函数: void NetworkSystem_40840(int64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)
void NetworkSystem_40840(int64_t param_1,char param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lStack_30;
  int32_t local_var_28;
  int8_t stack_array_20 [8];
  if (*(int64_t *)(param_1 + 0x8a8) != 0) {
    lVar2 = 5;
    lVar4 = param_1 + 0x90;
    do {
      NetworkSystem_e7fe0(lVar4,param_2);
      lVar4 = lVar4 + 0x180;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar4 = *(int64_t *)(param_1 + 0x810);
    uVar3 = 0;
    uVar6 = uVar3;
    if (*(int64_t *)(param_1 + 0x818) - lVar4 >> 3 != 0) {
      do {
        NetworkSystem_e7fe0(*(uint64_t *)(uVar3 + lVar4),param_2);
        lVar4 = *(int64_t *)(uVar3 + *(int64_t *)(param_1 + 0x810));
        if (lVar4 != 0) {
          NetworkSystem_06660(lVar4);
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(lVar4);
        }
        *(uint64_t *)(uVar3 + *(int64_t *)(param_1 + 0x810)) = 0;
        uVar5 = (int)uVar6 + 1;
        lVar4 = *(int64_t *)(param_1 + 0x810);
        uVar3 = uVar3 + 8;
        uVar6 = (uint64_t)uVar5;
      } while ((uint64_t)(int64_t)(int)uVar5 <
               (uint64_t)(*(int64_t *)(param_1 + 0x818) - lVar4 >> 3));
    }
    *(int64_t *)(param_1 + 0x818) = lVar4;
  }
  if (param_2 != '\0') {
    return;
  }
  uVar7 = 0xfffffffffffffffe;
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar4 = lVar2 + 0x2be8;
  lVar8 = lVar4;
  iVar1 = _Mtx_lock(lVar4);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  local_var_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  UISystem_dd4d0(lVar2 + 0x2b88,stack_array_20,&lStack_30,param_4,uVar7,lVar8,1);
  iVar1 = _Mtx_unlock(lVar4);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}