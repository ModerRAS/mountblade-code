/* 此文件包含部分未处理的原始函数，这些函数将在后续处理中完成语义化替换 */
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
// 03_rendering_part139.c - 8 个函数
// 函数: void RenderingSystem_4ef70(uint64_t *param_1)
void RenderingSystem_4ef70(uint64_t *param_1)
{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  void *plocal_var_98;
  uint64_t *plocal_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  SystemCore_SyncController();
  *puVar3 = &processed_var_9296_ptr;
  plVar1 = puVar3 + 0xe;
  *plVar1 = (int64_t)&system_state_ptr;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  puVar3[0x12] = 0;
  plVar5 = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  plocal_var_90 = (uint64_t *)0x0;
  local_var_88 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_90 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  local_var_80 = CONCAT44(local_var_80._4_4_,uVar2);
  *puVar3 = 0x6d614e2068746150;
  *(int16_t *)(puVar3 + 1) = 0x65;
  local_var_88 = 9;
  SystemNetwork_Processor(param_1,&plocal_var_98,plVar1,0,uVar4,plVar5);
  plocal_var_98 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
uint64_t * RenderingSystem_4f1f0(uint64_t *param_1,uint64_t param_2)
{
  int64_t *plVar1;
  *param_1 = &processed_var_9296_ptr;
  plVar1 = (int64_t *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((int64_t *)param_1[0x12] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x12] + 0x38))();
  }
  param_1[0xe] = &system_data_buffer_ptr;
  if (param_1[0xf] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &system_state_ptr;
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xa0);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_4f2c0(int64_t param_1)
void RenderingSystem_4f2c0(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  int32_t unaff_XMM6_Da;
  float fVar10;
  int32_t unaff_XMM6_Db;
  float fVar11;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t local_var_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t local_var_10c;
  int32_t local_var_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t local_var_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t local_var_ac;
  uint64_t local_var_40;
  uint64_t local_var_18;
  local_var_18 = 0xfffffffffffffffe;
  if ((*(int64_t *)(param_1 + 0x90) != 0) && (*(int *)(*(int64_t *)(param_1 + 0x90) + 8) == 1)) {
    plVar1 = *(int64_t **)(param_1 + 0x90);
    *(uint64_t *)(param_1 + 0x90) = 0;
    if (plVar1 != (int64_t *)0x0) {
      local_var_40 = 0x18034f30b;
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  lVar4 = render_system_data_memory;
  if (*(int64_t *)(param_1 + 0x90) != 0) {
    lVar2 = *(int64_t *)(param_1 + 0x18);
    local_var_148 = *(uint64_t *)(lVar2 + 0x70);
    local_var_140 = *(uint64_t *)(lVar2 + 0x78);
    local_var_138 = *(uint64_t *)(lVar2 + 0x80);
    local_var_130 = *(uint64_t *)(lVar2 + 0x88);
    fVar16 = *(float *)(lVar2 + 0x90);
    fVar12 = *(float *)(lVar2 + 0x94);
    fVar13 = *(float *)(lVar2 + 0x98);
    uVar3 = *(int32_t *)(lVar2 + 0x9c);
    fStack_128 = fVar16;
    fStack_124 = fVar12;
    fStack_120 = fVar13;
    local_var_11c = uVar3;
    UISystem_664b0(*(int64_t *)(param_1 + 0x90),&local_var_e8,render_system_data_memory + 0x1b8);
    fStack_118 = fStack_b8;
    fStack_114 = fStack_b4;
    fStack_110 = fStack_b0;
    local_var_10c = local_var_ac;
    if (*(char *)(param_1 + 0x98) != '\0') {
      local_var_18 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      local_var_40 = CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
      RenderingSystem_LightSystem(&local_var_148,&fStack_f8);
      fVar11 = fStack_b8 - *(float *)(lVar4 + 0x1b8);
      fVar10 = fStack_b4 - *(float *)(lVar4 + 0x1bc);
      fVar9 = fStack_b0 - *(float *)(lVar4 + 0x1c0);
      fVar5 = fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar8 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar5 = fVar12 * fVar12 + fVar16 * fVar16 + fVar13 * fVar13;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar13 = fVar13 * fVar5;
      fVar16 = fVar16 * fVar5;
      fVar12 = fVar12 * fVar5;
      fVar15 = fVar12 * fVar9 * fVar8 - fVar13 * fVar10 * fVar8;
      fVar14 = fVar13 * fVar11 * fVar8 - fVar16 * fVar9 * fVar8;
      local_var_fc = 0x7f7fffff;
      fVar11 = fVar16 * fVar10 * fVar8 - fVar12 * fVar11 * fVar8;
      fVar5 = fVar15 * fVar15 + fVar14 * fVar14 + fVar11 * fVar11;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar14 = fVar14 * fVar5;
      fVar11 = fVar11 * fVar5;
      fVar15 = fVar15 * fVar5;
      fVar10 = fVar13 * fVar14 - fVar12 * fVar11;
      fVar9 = fVar11 * fVar16 - fVar13 * fVar15;
      fVar8 = fVar12 * fVar15 - fVar14 * fVar16;
      fVar5 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      local_var_148 = CONCAT44(fStack_f8 * fVar14,fStack_f8 * fVar15);
      local_var_130 = CONCAT44(0x7f7fffff,fVar8 * fVar5 * fStack_f4);
      local_var_140 = CONCAT44(0x7f7fffff,fStack_f8 * fVar11);
      local_var_138 = CONCAT44(fVar9 * fVar5 * fStack_f4,fStack_f4 * fVar10 * fVar5);
      fStack_128 = fStack_f0 * fVar16;
      fStack_124 = fVar12 * fStack_f0;
      fStack_120 = fVar13 * fStack_f0;
      local_var_11c = uVar3;
    }
    if (*(char *)(param_1 + 0x99) != '\0') {
      local_var_148 = local_var_e8;
      local_var_140 = local_var_e0;
      fStack_128 = fStack_c8;
      fStack_124 = fStack_c4;
      fStack_120 = fStack_c0;
      local_var_11c = local_var_bc;
      local_var_138 = local_var_d8;
      local_var_130 = local_var_d0;
      fStack_118 = fStack_b8;
      fStack_114 = fStack_b4;
      fStack_110 = fStack_b0;
      local_var_10c = local_var_ac;
    }
    NetworkProtocol_Transmitter(*(uint64_t *)(param_1 + 0x18),&local_var_148);
  }
  return;
}
// 函数: void RenderingSystem_4f320(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_4f320(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t *aplStackX_10 [3];
  puVar3 = (uint64_t *)
           RenderingSystem_89090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_10,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plVar2 = *(int64_t **)(param_1 + 0x90);
  *(uint64_t *)(param_1 + 0x90) = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_4f3a0(uint64_t param_1)
void RenderingSystem_4f3a0(uint64_t param_1)
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
  local_var_138 = 9;
  strcpy_s(stack_array_130,0x40,&system_data_d578);
  SystemCommunicationProcessor(aplocal_var_1a8,&plocal_var_148);
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
  local_var_d8 = 0x10;
  strcpy_s(stack_array_d0,0x40,&system_data_dec0);
  SystemCommunicationProcessor(aplocal_var_1a8,&plocal_var_e8);
  local_var_150 = 3;
  local_var_1c8 = 2;
  MathOptimizationEngine0(param_1,applocal_var_1c0,aplocal_var_1a8);
  local_var_1c8 = 0;
  applocal_var_1c0[0] = aplocal_var_1a8;
  aplocal_var_1a8[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0xb;
  strcpy_s(stack_array_70,0x40,&system_data_deb0);
  SystemCommunicationProcessor(aplocal_var_1a8,&plocal_var_88);
  local_var_150 = 3;
  local_var_1c8 = 4;
  MathOptimizationEngine0(param_1,applocal_var_1c0,aplocal_var_1a8);
  local_var_1c8 = 0;
  applocal_var_1c0[0] = aplocal_var_1a8;
  aplocal_var_1a8[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_1e8);
}
// 函数: void RenderingSystem_4f5c0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_4f5c0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t *puVar4;
  int64_t *aplStackX_18 [2];
  if (*(int *)(param_2 + 0x10) == 9) {
    iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&system_data_d578,param_3,param_4,0xfffffffffffffffe);
    if (iVar3 == 0) {
      puVar4 = (uint64_t *)
               RenderingSystem_89090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,
                             aplStackX_18,param_1 + 0x70);
      uVar1 = *puVar4;
      *puVar4 = 0;
      plVar2 = *(int64_t **)(param_1 + 0x90);
      *(uint64_t *)(param_1 + 0x90) = uVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      if (aplStackX_18[0] != (int64_t *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x38))();
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_4f660(int64_t param_1)
void RenderingSystem_4f660(int64_t param_1)
{
  int64_t lVar1;
  int32_t uVar2;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t local_var_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t local_var_10c;
  int32_t local_var_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t local_var_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t local_var_ac;
  lVar3 = render_system_data_memory;
  if (*(int64_t *)(param_1 + 0x90) != 0) {
    lVar1 = *(int64_t *)(param_1 + 0x18);
    local_var_148 = *(uint64_t *)(lVar1 + 0x70);
    local_var_140 = *(uint64_t *)(lVar1 + 0x78);
    local_var_138 = *(uint64_t *)(lVar1 + 0x80);
    local_var_130 = *(uint64_t *)(lVar1 + 0x88);
    fVar15 = *(float *)(lVar1 + 0x90);
    fVar11 = *(float *)(lVar1 + 0x94);
    fVar12 = *(float *)(lVar1 + 0x98);
    uVar2 = *(int32_t *)(lVar1 + 0x9c);
    fStack_128 = fVar15;
    fStack_124 = fVar11;
    fStack_120 = fVar12;
    local_var_11c = uVar2;
    UISystem_664b0(*(int64_t *)(param_1 + 0x90),&local_var_e8,render_system_data_memory + 0x1b8);
    fStack_118 = fStack_b8;
    fStack_114 = fStack_b4;
    fStack_110 = fStack_b0;
    local_var_10c = local_var_ac;
    if (*(char *)(param_1 + 0x98) != '\0') {
      RenderingSystem_LightSystem(&local_var_148,&fStack_f8);
      fVar10 = fStack_b8 - *(float *)(lVar3 + 0x1b8);
      fVar9 = fStack_b4 - *(float *)(lVar3 + 0x1bc);
      fVar8 = fStack_b0 - *(float *)(lVar3 + 0x1c0);
      fVar4 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar7 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      fVar4 = fVar11 * fVar11 + fVar15 * fVar15 + fVar12 * fVar12;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      fVar12 = fVar12 * fVar4;
      fVar15 = fVar15 * fVar4;
      fVar11 = fVar11 * fVar4;
      fVar14 = fVar11 * fVar8 * fVar7 - fVar12 * fVar9 * fVar7;
      fVar13 = fVar12 * fVar10 * fVar7 - fVar15 * fVar8 * fVar7;
      local_var_fc = 0x7f7fffff;
      fVar10 = fVar15 * fVar9 * fVar7 - fVar11 * fVar10 * fVar7;
      fVar4 = fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      fVar13 = fVar13 * fVar4;
      fVar10 = fVar10 * fVar4;
      fVar14 = fVar14 * fVar4;
      fVar9 = fVar12 * fVar13 - fVar11 * fVar10;
      fVar8 = fVar10 * fVar15 - fVar12 * fVar14;
      fVar7 = fVar11 * fVar14 - fVar13 * fVar15;
      fVar4 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      local_var_148 = CONCAT44(fStack_f8 * fVar13,fStack_f8 * fVar14);
      local_var_130 = CONCAT44(0x7f7fffff,fVar7 * fVar4 * fStack_f4);
      local_var_140 = CONCAT44(0x7f7fffff,fStack_f8 * fVar10);
      local_var_138 = CONCAT44(fVar8 * fVar4 * fStack_f4,fStack_f4 * fVar9 * fVar4);
      fStack_128 = fStack_f0 * fVar15;
      fStack_124 = fVar11 * fStack_f0;
      fStack_120 = fVar12 * fStack_f0;
      local_var_11c = uVar2;
    }
    if (*(char *)(param_1 + 0x99) != '\0') {
      local_var_148 = local_var_e8;
      local_var_140 = local_var_e0;
      fStack_128 = fStack_c8;
      fStack_124 = fStack_c4;
      fStack_120 = fStack_c0;
      local_var_11c = local_var_bc;
      local_var_138 = local_var_d8;
      local_var_130 = local_var_d0;
      fStack_118 = fStack_b8;
      fStack_114 = fStack_b4;
      fStack_110 = fStack_b0;
      local_var_10c = local_var_ac;
    }
    NetworkProtocol_Transmitter(*(uint64_t *)(param_1 + 0x18),&local_var_148);
  }
  return;
}
// 函数: void RenderingSystem_4f69c(void)
void RenderingSystem_4f69c(void)
{
  int32_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t uVar5;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  int32_t unaff_XMM6_Da;
  float fVar11;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  float fVar12;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  float fVar13;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM10_Da;
  float fVar14;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  float fVar15;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  float fVar16;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM13_Da;
  float fVar17;
  int32_t unaff_XMM13_Dc;
  float fVar18;
  uint64_t local_var_30;
  uint64_t local_var_38;
  uint64_t local_var_40;
  uint64_t local_var_48;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t local_buffer_5c;
  float local_var_60;
  float fStack0000000000000064;
  float local_var_68;
  int32_t local_buffer_6c;
  uint64_t local_var_78;
  int32_t local_var_f0;
  int32_t local_var_f8;
  int32_t local_var_100;
  int32_t local_var_108;
  int32_t local_var_110;
  int32_t local_var_118;
  int32_t local_var_120;
  int32_t local_var_128;
  int32_t local_var_130;
  int32_t local_var_138;
  int32_t local_var_140;
  int32_t local_var_148;
  int32_t local_var_150;
  int32_t local_var_158;
  int32_t local_var_160;
  int32_t local_var_168;
  local_var_30 = *(uint64_t *)(in_RAX + 0x70);
  local_var_38 = *(uint64_t *)(in_RAX + 0x78);
  local_var_40 = *(uint64_t *)(in_RAX + 0x80);
  local_var_48 = *(uint64_t *)(in_RAX + 0x88);
  fVar18 = *(float *)(in_RAX + 0x90);
  fVar14 = *(float *)(in_RAX + 0x94);
  fVar15 = *(float *)(in_RAX + 0x98);
  uVar1 = *(int32_t *)(in_RAX + 0x9c);
  fStack0000000000000050 = fVar18;
  fStack0000000000000054 = fVar14;
  fStack0000000000000058 = fVar15;
  local_buffer_5c = uVar1;
  UISystem_664b0(*(int32_t *)(in_RAX + 0x70),unaff_RBP + -0x70);
  fVar2 = *(float *)(unaff_RBP + -0x40);
  fVar3 = *(float *)(unaff_RBP + -0x3c);
  fVar4 = *(float *)(unaff_RBP + -0x38);
  uVar5 = *(int32_t *)(unaff_RBP + -0x34);
  local_var_60 = fVar2;
  fStack0000000000000064 = fVar3;
  local_var_68 = fVar4;
  local_buffer_6c = uVar5;
  if (*(char *)(unaff_RBX + 0x98) != '\0') {
    local_var_f0 = unaff_XMM13_Da;
    local_var_f8 = unaff_XMM13_Dc;
    local_var_100 = unaff_XMM12_Da;
    local_var_108 = unaff_XMM12_Dc;
    local_var_110 = unaff_XMM11_Da;
    local_var_118 = unaff_XMM11_Dc;
    local_var_120 = unaff_XMM10_Da;
    local_var_128 = unaff_XMM10_Dc;
    local_var_130 = unaff_XMM9_Da;
    local_var_138 = unaff_XMM9_Dc;
    local_var_140 = unaff_XMM8_Da;
    local_var_148 = unaff_XMM8_Dc;
    local_var_150 = unaff_XMM7_Da;
    local_var_158 = unaff_XMM7_Dc;
    local_var_160 = unaff_XMM6_Da;
    local_var_168 = unaff_XMM6_Dc;
    RenderingSystem_LightSystem(&local_buffer_00000030,unaff_RBP + -0x80);
    fVar12 = fVar2 - *(float *)(unaff_RDI + 0x1b8);
    fVar11 = fVar3 - *(float *)(unaff_RDI + 0x1bc);
    fVar10 = fVar4 - *(float *)(unaff_RDI + 0x1c0);
    fVar6 = fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = fVar14 * fVar14 + fVar18 * fVar18 + fVar15 * fVar15;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar15 = fVar15 * fVar6;
    fVar18 = fVar18 * fVar6;
    fVar14 = fVar14 * fVar6;
    fVar17 = fVar14 * fVar10 * fVar9 - fVar15 * fVar11 * fVar9;
    fVar16 = fVar15 * fVar12 * fVar9 - fVar18 * fVar10 * fVar9;
    local_var_78._4_4_ = 0x7f7fffff;
    fVar13 = fVar18 * fVar11 * fVar9 - fVar14 * fVar12 * fVar9;
    fVar6 = fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar16 = fVar16 * fVar6;
    fVar13 = fVar13 * fVar6;
    fVar17 = fVar17 * fVar6;
    fVar12 = fVar15 * fVar16 - fVar14 * fVar13;
    fVar11 = fVar13 * fVar18 - fVar15 * fVar17;
    fVar10 = fVar14 * fVar17 - fVar16 * fVar18;
    fVar6 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = *(float *)(unaff_RBP + -0x80);
    fVar7 = *(float *)(unaff_RBP + -0x7c);
    local_var_30 = CONCAT44(fVar6 * fVar16,fVar6 * fVar17);
    local_var_48 = CONCAT44(0x7f7fffff,fVar10 * fVar9 * fVar7);
    local_var_38 = CONCAT44(0x7f7fffff,fVar6 * fVar13);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x78);
    local_var_40 = CONCAT44(fVar11 * fVar9 * fVar7,fVar7 * fVar12 * fVar9);
    fStack0000000000000050 = fStack0000000000000058 * fVar18;
    fStack0000000000000054 = fVar14 * fStack0000000000000058;
    fStack0000000000000058 = fVar15 * fStack0000000000000058;
    local_buffer_5c = uVar1;
  }
  if (*(char *)(unaff_RBX + 0x99) != '\0') {
    local_var_30 = *(uint64_t *)(unaff_RBP + -0x70);
    local_var_38 = *(uint64_t *)(unaff_RBP + -0x68);
    local_var_40 = *(uint64_t *)(unaff_RBP + -0x60);
    local_var_48 = *(uint64_t *)(unaff_RBP + -0x58);
    fStack0000000000000050 = *(float *)(unaff_RBP + -0x50);
    fStack0000000000000054 = *(float *)(unaff_RBP + -0x4c);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x48);
    local_buffer_5c = *(int32_t *)(unaff_RBP + -0x44);
    local_var_60 = fVar2;
    fStack0000000000000064 = fVar3;
    local_var_68 = fVar4;
    local_buffer_6c = uVar5;
  }
  NetworkProtocol_Transmitter(*(uint64_t *)(unaff_RBX + 0x18),&local_buffer_00000030);
  return;
}
// 函数: void RenderingSystem_4f6a9(void)
void RenderingSystem_4f6a9(void)
{
  int32_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t uVar5;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  float fVar10;
  int32_t unaff_XMM6_Da;
  float fVar11;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  float fVar12;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM9_Da;
  float fVar13;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM10_Da;
  float fVar14;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  float fVar15;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  float fVar16;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM13_Da;
  float fVar17;
  int32_t unaff_XMM13_Dc;
  float fVar18;
  uint64_t local_var_30;
  uint64_t local_var_38;
  uint64_t local_var_40;
  uint64_t local_var_48;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  int32_t local_buffer_5c;
  float local_var_60;
  float fStack0000000000000064;
  float local_var_68;
  int32_t local_buffer_6c;
  uint64_t local_var_78;
  int32_t local_var_f0;
  int32_t local_var_f8;
  int32_t local_var_100;
  int32_t local_var_108;
  int32_t local_var_110;
  int32_t local_var_118;
  int32_t local_var_120;
  int32_t local_var_128;
  int32_t local_var_130;
  int32_t local_var_138;
  int32_t local_var_140;
  int32_t local_var_148;
  int32_t local_var_150;
  int32_t local_var_158;
  int32_t local_var_160;
  int32_t local_var_168;
  local_var_30 = *(uint64_t *)(in_RAX + 0x70);
  local_var_38 = *(uint64_t *)(in_RAX + 0x78);
  local_var_40 = *(uint64_t *)(in_RAX + 0x80);
  local_var_48 = *(uint64_t *)(in_RAX + 0x88);
  fVar18 = *(float *)(in_RAX + 0x90);
  fVar14 = *(float *)(in_RAX + 0x94);
  fVar15 = *(float *)(in_RAX + 0x98);
  uVar1 = *(int32_t *)(in_RAX + 0x9c);
  fStack0000000000000050 = fVar18;
  fStack0000000000000054 = fVar14;
  fStack0000000000000058 = fVar15;
  local_buffer_5c = uVar1;
  UISystem_664b0();
  fVar2 = *(float *)(unaff_RBP + -0x40);
  fVar3 = *(float *)(unaff_RBP + -0x3c);
  fVar4 = *(float *)(unaff_RBP + -0x38);
  uVar5 = *(int32_t *)(unaff_RBP + -0x34);
  local_var_60 = fVar2;
  fStack0000000000000064 = fVar3;
  local_var_68 = fVar4;
  local_buffer_6c = uVar5;
  if (*(char *)(unaff_RBX + 0x98) != '\0') {
    local_var_f0 = unaff_XMM13_Da;
    local_var_f8 = unaff_XMM13_Dc;
    local_var_100 = unaff_XMM12_Da;
    local_var_108 = unaff_XMM12_Dc;
    local_var_110 = unaff_XMM11_Da;
    local_var_118 = unaff_XMM11_Dc;
    local_var_120 = unaff_XMM10_Da;
    local_var_128 = unaff_XMM10_Dc;
    local_var_130 = unaff_XMM9_Da;
    local_var_138 = unaff_XMM9_Dc;
    local_var_140 = unaff_XMM8_Da;
    local_var_148 = unaff_XMM8_Dc;
    local_var_150 = unaff_XMM7_Da;
    local_var_158 = unaff_XMM7_Dc;
    local_var_160 = unaff_XMM6_Da;
    local_var_168 = unaff_XMM6_Dc;
    RenderingSystem_LightSystem(&local_buffer_00000030,unaff_RBP + -0x80);
    fVar12 = fVar2 - *(float *)(unaff_RDI + 0x1b8);
    fVar11 = fVar3 - *(float *)(unaff_RDI + 0x1bc);
    fVar10 = fVar4 - *(float *)(unaff_RDI + 0x1c0);
    fVar6 = fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = fVar14 * fVar14 + fVar18 * fVar18 + fVar15 * fVar15;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar15 = fVar15 * fVar6;
    fVar18 = fVar18 * fVar6;
    fVar14 = fVar14 * fVar6;
    fVar17 = fVar14 * fVar10 * fVar9 - fVar15 * fVar11 * fVar9;
    fVar16 = fVar15 * fVar12 * fVar9 - fVar18 * fVar10 * fVar9;
    local_var_78._4_4_ = 0x7f7fffff;
    fVar13 = fVar18 * fVar11 * fVar9 - fVar14 * fVar12 * fVar9;
    fVar6 = fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar16 = fVar16 * fVar6;
    fVar13 = fVar13 * fVar6;
    fVar17 = fVar17 * fVar6;
    fVar12 = fVar15 * fVar16 - fVar14 * fVar13;
    fVar11 = fVar13 * fVar18 - fVar15 * fVar17;
    fVar10 = fVar14 * fVar17 - fVar16 * fVar18;
    fVar6 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = *(float *)(unaff_RBP + -0x80);
    fVar7 = *(float *)(unaff_RBP + -0x7c);
    local_var_30 = CONCAT44(fVar6 * fVar16,fVar6 * fVar17);
    local_var_48 = CONCAT44(0x7f7fffff,fVar10 * fVar9 * fVar7);
    local_var_38 = CONCAT44(0x7f7fffff,fVar6 * fVar13);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x78);
    local_var_40 = CONCAT44(fVar11 * fVar9 * fVar7,fVar7 * fVar12 * fVar9);
    fStack0000000000000050 = fStack0000000000000058 * fVar18;
    fStack0000000000000054 = fVar14 * fStack0000000000000058;
    fStack0000000000000058 = fVar15 * fStack0000000000000058;
    local_buffer_5c = uVar1;
  }
  if (*(char *)(unaff_RBX + 0x99) != '\0') {
    local_var_30 = *(uint64_t *)(unaff_RBP + -0x70);
    local_var_38 = *(uint64_t *)(unaff_RBP + -0x68);
    local_var_40 = *(uint64_t *)(unaff_RBP + -0x60);
    local_var_48 = *(uint64_t *)(unaff_RBP + -0x58);
    fStack0000000000000050 = *(float *)(unaff_RBP + -0x50);
    fStack0000000000000054 = *(float *)(unaff_RBP + -0x4c);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x48);
    local_buffer_5c = *(int32_t *)(unaff_RBP + -0x44);
    local_var_60 = fVar2;
    fStack0000000000000064 = fVar3;
    local_var_68 = fVar4;
    local_buffer_6c = uVar5;
  }
  NetworkProtocol_Transmitter(*(uint64_t *)(unaff_RBX + 0x18),&local_buffer_00000030);
  return;
}