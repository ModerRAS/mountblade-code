// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
// 02_core_engine_part201.c - 13 个函数
// 函数: void GenericFunction_1801805d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_1801805d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t *puVar1;
  void *puVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t local_var_40;
  int64_t lStack_38;
  int8_t local_var_30;
  void *plocal_var_28;
  void *plocal_var_20;
  uint local_var_18;
  SystemCore_NetworkHandler0(&plocal_var_28,param_1 + 0x270,param_3,param_4,0xfffffffffffffffe);
  iVar3 = local_var_18 + 0x11;
  CoreMemoryPoolProcessor(&plocal_var_28,iVar3);
  puVar1 = (int32_t *)(plocal_var_20 + local_var_18);
  *puVar1 = 0x69676e65;
  puVar1[1] = 0x6d5f656e;
  puVar1[2] = 0x6c75646f;
  puVar1[3] = 0x6e692e65;
  *(int16_t *)(puVar1 + 4) = 0x69;
  puVar2 = &system_buffer_ptr;
  if (plocal_var_20 != (void *)0x0) {
    puVar2 = plocal_var_20;
  }
  local_var_40 = 0;
  local_var_30 = 0;
  local_var_18 = iVar3;
  SystemCore_Validator(&local_var_40,puVar2,&processed_var_4348_ptr);
  lVar4 = lStack_38;
  if (lStack_38 == 0) {
    puVar2 = &system_buffer_ptr;
    if (plocal_var_20 != (void *)0x0) {
      puVar2 = plocal_var_20;
    }
    UtilitiesSystem_26ee0(&processed_var_6960_ptr,puVar2);
  }
  else {
    GenericFunction_1800aecf0(core_system_data_config,&local_var_40);
    lVar4 = lStack_38;
    if (lStack_38 != 0) {
      fclose(lStack_38);
      lStack_38 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      lVar4 = 0;
    }
  }
  if (lVar4 != 0) {
    fclose(lVar4);
    lStack_38 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  plocal_var_28 = &system_data_buffer_ptr;
  if (plocal_var_20 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * MathOptimizationEngine0(int64_t param_1,int64_t *param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  byte bVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte *pbVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t *pstack_special_x_8;
  int64_t lStackX_10;
  lVar4 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0xc0,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  puVar1 = (uint64_t *)(lVar4 + 0x20);
  pstack_special_x_8 = puVar1;
  SystemCore_EventHandler(puVar1,param_3);
  *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(param_3 + 0x58);
  lStackX_10 = lVar4;
  lVar5 = SystemCore_SecurityValidator(param_1,&pstack_special_x_8,puVar1);
  if ((char)pstack_special_x_8 == '\0') {
    *puVar1 = &system_state_ptr;
    if (lVar4 != 0) {
      pstack_special_x_8 = puVar1;
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar4);
    }
    *param_2 = lVar5;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar5 != param_1) {
    if (*(int *)(lVar5 + 0x30) == 0) {
LAB_1801807e7:
      uVar8 = 1;
      goto LAB_1801807f2;
    }
    if (*(int *)(lVar4 + 0x30) != 0) {
      pbVar6 = *(byte **)(lVar5 + 0x28);
      lVar7 = *(int64_t *)(lVar4 + 0x28) - (int64_t)pbVar6;
      do {
        bVar2 = *pbVar6;
        uVar3 = (uint)pbVar6[lVar7];
        if (bVar2 != uVar3) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
      if ((int)(bVar2 - uVar3) < 1) goto LAB_1801807e7;
    }
  }
  uVar8 = 0;
LAB_1801807f2:
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar4,lVar5,param_1,uVar8);
}
// WARNING: Removing unreachable block (ram,0x000180362701)
// WARNING: Removing unreachable block (ram,0x000180362738)
// WARNING: Removing unreachable block (ram,0x000180362708)
// WARNING: Removing unreachable block (ram,0x000180362712)
// WARNING: Removing unreachable block (ram,0x000180362720)
// WARNING: Removing unreachable block (ram,0x000180362727)
// WARNING: Removing unreachable block (ram,0x000180362732)
// WARNING: Removing unreachable block (ram,0x00018036273a)
// WARNING: Removing unreachable block (ram,0x00018036275a)
// WARNING: Removing unreachable block (ram,0x000180362770)
// WARNING: Removing unreachable block (ram,0x00018036277e)
// WARNING: Removing unreachable block (ram,0x000180362785)
// WARNING: Removing unreachable block (ram,0x00018036273f)
// WARNING: Removing unreachable block (ram,0x0001803627bb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180180930(uint64_t param_1,uint64_t param_2)
void GenericFunction_180180930(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int8_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int iVar13;
  void *plocal_var_128;
  uint64_t *plocal_var_120;
  int32_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_48;
  int8_t stack_array_40 [8];
  int64_t lVar12;
  puVar4 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x150,8,3);
  local_var_48 = 0xfffffffffffffffe;
  puVar7 = puVar4;
  SystemCore_SyncController(puVar4,param_2,param_1);
  *puVar7 = &processed_var_7800_ptr;
  plVar8 = puVar7 + 0x12;
  *plVar8 = (int64_t)&system_state_ptr;
  iVar13 = 0;
  puVar7[0x13] = 0;
  *(int32_t *)(puVar7 + 0x14) = 0;
  *plVar8 = (int64_t)&system_data_buffer_ptr;
  puVar7[0x15] = 0;
  puVar7[0x13] = 0;
  *(int32_t *)(puVar7 + 0x14) = 0;
  plVar10 = puVar4 + 0x16;
  *plVar10 = (int64_t)&system_state_ptr;
  puVar4[0x17] = 0;
  *(int32_t *)(puVar4 + 0x18) = 0;
  *plVar10 = (int64_t)&system_data_buffer_ptr;
  puVar4[0x19] = 0;
  puVar4[0x17] = 0;
  *(int32_t *)(puVar4 + 0x18) = 0;
  puVar7 = puVar4 + 0x1a;
  puVar4[0x1d] = 0;
  *(int32_t *)(puVar4 + 0x1f) = 3;
  *puVar7 = puVar7;
  puVar4[0x1b] = puVar7;
  puVar4[0x1c] = 0;
  *(int8_t *)(puVar4 + 0x1d) = 0;
  puVar4[0x1e] = 0;
  puVar4[0x24] = 0;
  *(int8_t *)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  *(int8_t *)((int64_t)puVar4 + 0x8a) = 1;
  (**(code **)(*plVar8 + 0x10))(plVar8,&system_buffer_ptr);
  (**(code **)(*plVar10 + 0x10))(plVar10,&processed_var_7664_ptr);
  plVar10 = puVar4 + 0x20;
  *plVar10 = (int64_t)&processed_var_7664_ptr;
  puVar4[0x21] = &processed_var_7832_ptr;
  puVar4[0x22] = &processed_var_7660_ptr;
  puVar4[0x23] = &processed_var_7648_ptr;
  do {
    lVar1 = *plVar10;
    plocal_var_128 = &system_data_buffer_ptr;
    local_var_110 = 0;
    plocal_var_120 = (uint64_t *)0x0;
    local_var_118 = 0;
    if (lVar1 != 0) {
      lVar11 = -1;
      do {
        lVar12 = lVar11;
        lVar11 = lVar12 + 1;
      } while (*(char *)(lVar1 + lVar11) != '\0');
      if ((int)lVar11 != 0) {
        iVar9 = (int)lVar12 + 2;
        iVar13 = iVar9;
        if (iVar9 < 0x10) {
          iVar13 = 0x10;
        }
        puVar5 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar13,0x13);
        *puVar5 = 0;
        plocal_var_120 = (uint64_t *)puVar5;
        uVar3 = CoreMemoryPoolCleaner(puVar5);
        local_var_110 = CONCAT44(local_var_110._4_4_,uVar3);
// WARNING: Subroutine does not return
        memcpy(puVar5,lVar1,iVar9);
      }
    }
    local_var_118 = 0;
    puVar6 = puVar7;
    for (puVar2 = (uint64_t *)puVar4[0x1c]; puVar2 != (uint64_t *)0x0;
        puVar2 = (uint64_t *)puVar2[1]) {
      puVar6 = puVar2;
    }
    if ((puVar6 == puVar7) || (*(int *)(puVar6 + 6) != 0)) {
      puVar6 = (uint64_t *)GenericFunction_1800c2ab0(puVar7,stack_array_40);
      puVar6 = (uint64_t *)*puVar6;
    }
    *(int *)(puVar6 + 8) = iVar13;
    plocal_var_120 = (uint64_t *)0x0;
    local_var_110 = local_var_110 & 0xffffffff00000000;
    plocal_var_128 = &system_state_ptr;
    iVar13 = iVar13 + 1;
    plVar10 = plVar10 + 1;
  } while (iVar13 < 4);
  plVar10 = (int64_t *)puVar4[0x24];
  puVar4[0x24] = 0;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x38))();
  }
  *(int8_t *)(puVar4 + 0x29) = 0;
  *(int16_t *)(puVar4 + 0x11) = 0;
  plocal_var_128 = &system_data_buffer_ptr;
  local_var_110 = 0;
  plocal_var_120 = (uint64_t *)0x0;
  local_var_118 = 0;
  puVar7 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar7 = 0;
  plocal_var_120 = puVar7;
  uVar3 = CoreMemoryPoolCleaner(puVar7);
  local_var_110 = CONCAT44(local_var_110._4_4_,uVar3);
  *puVar7 = 0x615020746e657645;
  *(int16_t *)(puVar7 + 1) = 0x6874;
  *(int8_t *)((int64_t)puVar7 + 10) = 0;
  local_var_118 = 10;
  SystemNetwork_Processor(puVar4,&plocal_var_128,puVar4 + 0x12,9);
  plocal_var_128 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar7);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180180980(uint64_t param_1,uint64_t param_2)
void GenericFunction_180180980(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *plocal_var_40;
  uint64_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  puVar2 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x88,8,3,0xfffffffffffffffe);
  puVar3 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar3 = &memory_allocator_3520_ptr;
  puVar3[0xf] = 0;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (uint64_t *)0x0;
  local_var_30 = 0;
  puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_38 = puVar3;
  uVar1 = CoreMemoryPoolCleaner(puVar3);
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar1);
  *puVar3 = 0x614d206c61636544;
  *(int32_t *)(puVar3 + 1) = 0x69726574;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x6c61;
  *(int8_t *)((int64_t)puVar3 + 0xe) = 0;
  local_var_30 = 0xe;
  SystemNetwork_Processor(puVar2,&plocal_var_40,puVar2 + 0xf,10);
  plocal_var_40 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar3);
}
// 函数: void GenericFunction_180180ad0(void)
void GenericFunction_180180ad0(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// 函数: void GenericFunction_180181a80(int64_t param_1,int param_2,float *param_3,float *param_4,float *param_5,
void GenericFunction_180181a80(int64_t param_1,int param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,int64_t *param_7,uint64_t param_8)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int *piVar5;
  int64_t lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_18;
  float fStackX_1c;
  uint64_t uVar12;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int32_t local_var_84;
  float fStack_80;
  float fStack_7c;
  uint64_t local_var_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  int8_t stack_array_60 [8];
  uint64_t local_var_58;
  int64_t *plStack_48;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  plVar4 = param_7;
  uVar12 = 0xfffffffffffffffe;
  if (param_2 < 0x200) {
    pfVar7 = (float *)(((int64_t)param_2 + 4U) * 0x1c + param_1);
  }
  else {
    lVar3 = *(int64_t *)(param_1 + 0x48);
    for (piVar5 = *(int **)(lVar3 + ((uint64_t)(int64_t)param_2 %
                                    (uint64_t)*(uint *)(param_1 + 0x50)) * 8); piVar5 != (int *)0x0
        ; piVar5 = *(int **)(piVar5 + 8)) {
      if (param_2 == *piVar5) {
        lVar6 = *(int64_t *)(param_1 + 0x50);
        goto LAB_180181af9;
      }
    }
    lVar6 = *(int64_t *)(param_1 + 0x50);
    piVar5 = *(int **)(lVar3 + lVar6 * 8);
LAB_180181af9:
    if (piVar5 == *(int **)(lVar3 + lVar6 * 8)) {
      pfVar7 = (float *)(param_1 + 0x20);
    }
    else {
      pfVar7 = (float *)(piVar5 + 1);
    }
  }
  fVar9 = *param_3;
  fStack_88 = param_3[2];
  local_var_78 = *(uint64_t *)(param_3 + 2);
  fStack_8c = (pfVar7[3] - pfVar7[1]) * param_6[1];
  fVar10 = pfVar7[2];
  fVar11 = *pfVar7;
  fVar8 = param_3[1] + (param_6[1] * pfVar7[5] - fStack_8c);
  fStack_8c = fVar8 + fStack_8c;
  fStack_90 = fVar9 + (fVar10 - fVar11) * *param_6;
  local_var_84 = 0x7f7fffff;
  fVar1 = *param_4;
  if ((fVar1 < fStack_90) && (fVar2 = *param_5, fVar9 < fVar2)) {
    if (fVar9 < fVar1) {
      fVar11 = fVar10 - ((fStack_90 - fVar1) * (fVar10 - fVar11)) / (fStack_90 - fVar9);
      fVar9 = fVar1;
    }
    _fStack_80 = CONCAT44(fVar8,fVar9);
    if (fVar2 < fStack_90) {
      fVar10 = ((fVar2 - fVar9) * (fVar10 - fVar11)) / (fStack_90 - fVar9) + fVar11;
      fStack_90 = fVar2;
    }
    param_6 = (float *)param_7;
    if (param_7 != (int64_t *)0x0) {
      (**(code **)(*param_7 + 0x28))(param_7);
    }
    plStack_70 = (int64_t *)0x0;
    plStack_68 = (int64_t *)0x0;
    param_6 = (float *)stack_array_60;
    plStack_48 = (int64_t *)0x0;
    local_var_58 = 0;
    stack_array_60[0] = 0;
    RenderingSystem_MaterialProcessor(&plStack_70,plVar4,0);
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    param_6 = (float *)CONCAT44(pfVar7[3],fVar10);
    fStackX_1c = pfVar7[1];
    fStackX_18 = fVar11;
    DataStructure_35ae0(&plStack_70,&fStack_80,&fStack_90,&fStackX_18,&param_6,param_8,uVar12);
    if ((plStack_70 != (int64_t *)0x0) && (plStack_68 != (int64_t *)0x0)) {
      if (cStack_3e != '\0') {
        SystemConfig_Manager();
      }
      SystemSecurityManager(stack_array_60);
      if (cStack_40 != '\0') {
        SystemInitializer(plStack_70);
      }
      if (cStack_3f != '\0') {
        SystemInitializer(plStack_70);
      }
      plVar4 = plStack_68;
      param_6 = (float *)plStack_68;
      plStack_68 = (int64_t *)0x0;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x38))();
      }
    }
    param_6 = (float *)stack_array_60;
    SystemSecurityManager(stack_array_60);
    if (plStack_48 != (int64_t *)0x0) {
      (**(code **)(*plStack_48 + 0x38))();
    }
    if (plStack_68 != (int64_t *)0x0) {
      (**(code **)(*plStack_68 + 0x38))();
    }
    if (plStack_70 != (int64_t *)0x0) {
      (**(code **)(*plStack_70 + 0x38))();
    }
  }
  return;
}
float GenericFunction_180181d80(int64_t param_1,int param_2)
{
  int64_t lVar1;
  int *piVar2;
  if (param_2 < 0x200) {
    param_1 = ((int64_t)param_2 + 4U) * 0x1c + param_1;
    return *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x10);
  }
  lVar1 = *(int64_t *)(param_1 + 0x48);
  for (piVar2 = *(int **)(lVar1 + ((uint64_t)(int64_t)param_2 %
                                  (uint64_t)*(uint *)(param_1 + 0x50)) * 8); piVar2 != (int *)0x0;
      piVar2 = *(int **)(piVar2 + 8)) {
    if (param_2 == *piVar2) goto LAB_180181dc2;
  }
  piVar2 = (int *)0x0;
LAB_180181dc2:
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int **)(lVar1 + *(int64_t *)(param_1 + 0x50) * 8);
  }
  if (piVar2 == *(int **)(lVar1 + *(int64_t *)(param_1 + 0x50) * 8)) {
    return *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x30);
  }
  return (float)piVar2[7] + (float)piVar2[5];
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180181e30(uint64_t param_1,int64_t param_2,uint64_t param_3,int *param_4,
void GenericFunction_180181e30(uint64_t param_1,int64_t param_2,uint64_t param_3,int *param_4,
                  int64_t *param_5,float *param_6,float param_7)
{
  int8_t uVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  float fVar5;
  void *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int32_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  uint uVar14;
  void *puVar15;
  uint64_t uVar16;
  int iVar17;
  int iVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  float fVar21;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb;
  int32_t uVar28;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t auVar26 [16];
  float fVar29;
  int32_t uVar30;
  int64_t *plStack_c8;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  void *plocal_var_b0;
  uint local_var_a8;
  uint64_t local_var_a0;
  int8_t auVar25 [16];
  int8_t auVar27 [16];
  fVar5 = param_7;
  plVar4 = param_5;
  local_var_c0 = 0xfffffffffffffffe;
  uVar30 = 0;
  fVar29 = 0.0;
  bVar3 = false;
  uVar19 = (uint64_t)*param_4;
  iVar9 = (int)*param_5;
  uVar16 = param_3;
  uVar20 = uVar19;
  if (*param_4 < iVar9) {
    do {
      iVar17 = (int)uVar16;
      iVar18 = (int)uVar20;
      if (iVar17 <= iVar18) {
        return;
      }
      if (bVar3) {
        bVar7 = false;
        if (*(int *)(param_2 + uVar19 * 4) != 0x3e) {
          bVar7 = bVar3;
        }
      }
      else {
        iVar8 = *(int *)(param_2 + uVar19 * 4);
        if (iVar8 == 0x3c) {
          iVar8 = iVar18 + 5;
          if (((((iVar9 <= iVar8) || (iVar17 <= iVar8)) ||
               (*(int *)(param_2 + 4 + uVar19 * 4) != 0x69)) ||
              ((*(int *)(param_2 + 8 + uVar19 * 4) != 0x6d ||
               (*(int *)(param_2 + 0xc + uVar19 * 4) != 0x67)))) ||
             (*(int *)(param_2 + 0x10 + uVar19 * 4) != 0x3d)) {
            bVar7 = true;
            goto LAB_18018222c;
          }
          uVar19 = uVar19 + 5;
          plocal_var_b8 = &system_data_buffer_ptr;
          local_var_a0 = 0;
          plocal_var_b0 = (void *)0x0;
          local_var_a8 = 0;
          iVar18 = iVar8;
          if (iVar8 < (int)*plVar4) {
            uVar16 = uVar19;
            do {
              uVar19 = uVar16;
              iVar18 = iVar8;
              if ((int64_t)iVar17 <= (int64_t)uVar16) break;
              uVar1 = *(int8_t *)(param_2 + uVar16 * 4);
              CoreMemoryPoolProcessor(&plocal_var_b8);
              plocal_var_b0[local_var_a8] = uVar1;
              plocal_var_b0[local_var_a8 + 1] = 0;
              local_var_a8 = local_var_a8 + 1;
              iVar18 = iVar8 + 1;
              uVar19 = uVar16 + 1;
              if (((int64_t)uVar19 < (int64_t)iVar17) && (*(int *)(param_2 + uVar19 * 4) == 0x3e))
              {
                iVar18 = iVar8 + 2;
                uVar19 = uVar16 + 2;
                break;
              }
              uVar16 = uVar19;
              iVar8 = iVar18;
            } while (iVar18 < (int)*plVar4);
          }
          uVar14 = 0;
          lVar11 = 0;
          if (local_var_a8 != 0) {
            do {
              if (plocal_var_b0[lVar11] == ' ') {
                plocal_var_b0[lVar11] = 0x5f;
              }
              uVar14 = uVar14 + 1;
              lVar11 = lVar11 + 1;
            } while (uVar14 < local_var_a8);
          }
          plVar12 = (int64_t *)RenderingSystem_ShaderCompiler0(system_resource_state,&param_5,&plocal_var_b8);
          puVar6 = plocal_var_b0;
          if (param_5 == (int64_t *)0x0) {
            if ((local_var_a8 == 0xb) && (iVar9 = strcmp(plocal_var_b0,&processed_var_9000_ptr), iVar9 == 0)) {
              UtilitiesSystem_26ee0(&processed_var_7584_ptr,&processed_var_9000_ptr);
            }
            else {
              puVar15 = &system_buffer_ptr;
              if (puVar6 != (void *)0x0) {
                puVar15 = puVar6;
              }
              SystemCore_Allocator(&processed_var_7488_ptr,puVar15,&processed_var_8344_ptr);
              puVar13 = (uint64_t *)GenericFunction_1800befa0(core_system_data_config,&plStack_c8);
              plVar2 = (int64_t *)*puVar13;
              *puVar13 = 0;
              if (param_5 != (int64_t *)0x0) {
                lVar11 = *param_5;
                param_5 = plVar2;
                (**(code **)(lVar11 + 0x38))();
                plVar2 = param_5;
              }
              param_5 = plVar2;
              if (plStack_c8 != (int64_t *)0x0) {
                (**(code **)(*plStack_c8 + 0x38))();
              }
            }
          }
          lVar11 = *plVar12;
          uVar30 = 0;
          if (param_5 != (int64_t *)0x0) {
            (**(code **)(*param_5 + 0x38))();
          }
          if (lVar11 != 0) {
            fVar29 = fVar29 + ((*(float *)(lVar11 + 0x284) - *(float *)(lVar11 + 0x274)) * *param_6)
                              / (*(float *)(lVar11 + 0x288) - *(float *)(lVar11 + 0x278));
          }
          plocal_var_b8 = &system_data_buffer_ptr;
          if (plocal_var_b0 != (void *)0x0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          plocal_var_b0 = (void *)0x0;
          local_var_a0 = local_var_a0 & 0xffffffff00000000;
          plocal_var_b8 = &system_state_ptr;
        }
        else if (iVar8 == 9) {
          uVar10 = GenericFunction_180181d80(param_1,0x20,uVar16,iVar9,uVar30);
          auVar22._8_4_ = (int)extraout_XMM0_Qb;
          auVar22._0_8_ = extraout_XMM0_Qa;
          auVar22._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
          auVar23._4_12_ = auVar22._4_12_;
          auVar23._0_4_ = ((float)extraout_XMM0_Qa + fVar29) * 5.0;
          iVar9 = (int)auVar23._0_4_;
          uVar28 = (int32_t)((uint64_t)extraout_XMM0_Qa >> 0x20);
          auVar25._0_8_ = auVar23._0_8_;
          if (auVar23._0_4_ <= 0.0) {
            if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar23._0_4_)) {
              auVar27._8_4_ = uVar28;
              auVar27._0_8_ = auVar25._0_8_;
              auVar27._12_4_ = uVar28;
              auVar26._8_8_ = auVar27._8_8_;
              auVar26._4_4_ = auVar23._0_4_;
              auVar26._0_4_ = auVar23._0_4_;
              uVar14 = movmskps(uVar10,auVar26);
              auVar23 = ZEXT416((uint)(float)(int)(iVar9 + (uVar14 & 1 ^ 1)));
            }
            fVar29 = auVar23._0_4_ - 1e-08;
          }
          else {
            if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar23._0_4_)) {
              auVar25._8_4_ = uVar28;
              auVar25._12_4_ = uVar28;
              auVar24._8_8_ = auVar25._8_8_;
              auVar24._4_4_ = auVar23._0_4_;
              auVar24._0_4_ = auVar23._0_4_;
              uVar14 = movmskps(uVar10,auVar24);
              auVar23 = ZEXT416((uint)(float)(int)(iVar9 + (uVar14 & 1 ^ 1)));
            }
            fVar29 = auVar23._0_4_ + 1e-08;
          }
          fVar29 = (float)(int)fVar29 * 0.2;
        }
        else {
          fVar21 = (float)GenericFunction_180181d80();
          fVar29 = fVar29 + fVar21 * fVar5;
        }
        uVar16 = param_3 & 0xffffffff;
        bVar7 = bVar3;
      }
LAB_18018222c:
      bVar3 = bVar7;
      uVar19 = uVar19 + 1;
      iVar9 = (int)*plVar4;
      uVar20 = (uint64_t)(iVar18 + 1U);
    } while ((int)(iVar18 + 1U) < iVar9);
  }
  return;
}
// 函数: void GenericFunction_180182280(void)
void GenericFunction_180182280(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// 函数: void GenericFunction_180183450(int64_t param_1)
void GenericFunction_180183450(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x10) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x18) != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x10) = &system_state_ptr;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
GenericFunction_1801834d0(int64_t param_1,uint64_t *param_2,uint64_t param_3,int *param_4,uint64_t param_5
             )
{
  int64_t lVar1;
  int *piVar2;
  uint64_t uVar3;
  char acStackX_8 [4];
  uint stack_special_x_c;
  param_5 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  piVar2 = *(int **)(lVar1 + param_5 * 8);
  if (piVar2 != (int *)0x0) {
    do {
      if (*param_4 == *piVar2) {
        *param_2 = piVar2;
        param_2[1] = lVar1 + param_5 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar2 = *(int **)(piVar2 + 8);
    } while (piVar2 != (int *)0x0);
  }
  RenderingShaderProcessor0(param_1 + 0x20,acStackX_8,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  piVar2 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 0x2c));
  *piVar2 = *param_4;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  piVar2[8] = 0;
  piVar2[9] = 0;
  if (acStackX_8[0] != '\0') {
    uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)stack_special_x_c * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar3,0,(uint64_t)stack_special_x_c * 8);
  }
  *(uint64_t *)(piVar2 + 8) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + param_5 * 8);
  *(int **)(*(int64_t *)(param_1 + 8) + param_5 * 8) = piVar2;
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
  *param_2 = piVar2;
  param_2[1] = lVar1 + param_5 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18018352a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_18018352a(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  int32_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000060;
  uint local_buffer_64;
  RenderingShaderProcessor0(param_1,&local_buffer_00000060,param_3,param_4,1);
  puVar2 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  *(uint64_t *)(puVar2 + 4) = 0;
  *(uint64_t *)(puVar2 + 1) = 0;
  *(uint64_t *)(puVar2 + 3) = 0;
  *(uint64_t *)(puVar2 + 6) = 0;
  *(uint64_t *)(puVar2 + 8) = 0;
  if (cStack0000000000000060 != '\0') {
    uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)local_buffer_64 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
// WARNING: Subroutine does not return
    memset(uVar3,0,(uint64_t)local_buffer_64 * 8);
  }
  *(uint64_t *)(puVar2 + 8) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int32_t **)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void GenericFunction_18018364e(uint64_t param_1,uint64_t param_2)
void GenericFunction_18018364e(uint64_t param_1,uint64_t param_2)
{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}
// 函数: void GenericFunction_18018366a(void)
void GenericFunction_18018366a(void)
{
  int64_t lVar1;
  uint64_t in_RAX;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  if ((1 < in_RAX) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 0x20) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void GenericFunction_18018368d(void)
void GenericFunction_18018368d(void)
{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  *(uint64_t *)(unaff_R12 + 0x20) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}
// 函数: void GenericFunction_180183920(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_180183920(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)param_1[7];
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1,param_3,param_4,0xfffffffffffffffe);
    param_1[7] = 0;
  }
  return;
}
uint64_t * GenericFunction_180183970(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &ui_system_data_1080_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t *
GenericFunction_1801839a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &ui_system_data_1032_ptr;
  if (param_1[1] != 0) {
    NVGSDK_Release();
  }
  if (param_1[2] != 0) {
    GenericFunction_180188120();
  }
  *param_1 = &ui_system_data_1080_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address