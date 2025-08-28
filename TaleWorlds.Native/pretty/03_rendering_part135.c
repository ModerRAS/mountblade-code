// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine
// 03_rendering_part135.c - 18 个函数
// 函数: void function_34a281(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)
void function_34a281(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  int64_t unaff_RBX;
  lVar1 = *(int64_t *)(param_1 + 0x18);
  cVar3 = SystemFunction_000180285f10(param_1 + 0x9c,lVar1 + 0x70);
  if (cVar3 == '\0') {
    *(int32_t *)(unaff_RBX + 0x98) = 0x40000000;
    if (*(int *)(*(int64_t *)(unaff_RBX + 0x70) + 0x4c) != 0) {
      *(int8_t *)(unaff_RBX + 0x94) = 1;
    }
    function_31b950(*(int64_t *)(unaff_RBX + 0x70),lVar1 + 0x70,0);
  }
  else {
    *(float *)(unaff_RBX + 0x98) = *(float *)(unaff_RBX + 0x98) - param_4;
  }
  uVar2 = *(uint64_t *)(lVar1 + 0x78);
  *(uint64_t *)(unaff_RBX + 0x9c) = *(uint64_t *)(lVar1 + 0x70);
  *(uint64_t *)(unaff_RBX + 0xa4) = uVar2;
  uVar2 = *(uint64_t *)(lVar1 + 0x88);
  *(uint64_t *)(unaff_RBX + 0xac) = *(uint64_t *)(lVar1 + 0x80);
  *(uint64_t *)(unaff_RBX + 0xb4) = uVar2;
  uVar2 = *(uint64_t *)(lVar1 + 0x98);
  *(uint64_t *)(unaff_RBX + 0xbc) = *(uint64_t *)(lVar1 + 0x90);
  *(uint64_t *)(unaff_RBX + 0xc4) = uVar2;
  uVar2 = *(uint64_t *)(lVar1 + 0xa8);
  *(uint64_t *)(unaff_RBX + 0xcc) = *(uint64_t *)(lVar1 + 0xa0);
  *(uint64_t *)(unaff_RBX + 0xd4) = uVar2;
  if ((*(char *)(unaff_RBX + 0x94) != '\0') &&
     (*(float *)(unaff_RBX + 0x98) <= 0.0 && *(float *)(unaff_RBX + 0x98) != 0.0)) {
    *(int8_t *)(unaff_RBX + 0x94) = 0;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x70) + 0x4c) = 0;
    *(int8_t *)(*(int64_t *)(unaff_RBX + 0x70) + 0x50) = 1;
  }
  return;
}
// 函数: void function_34a328(void)
void function_34a328(void)
{
  int64_t unaff_RBX;
  if (*(float *)(unaff_RBX + 0x98) <= 0.0 && *(float *)(unaff_RBX + 0x98) != 0.0) {
    *(int8_t *)(unaff_RBX + 0x94) = 0;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x70) + 0x4c) = 0;
    *(int8_t *)(*(int64_t *)(unaff_RBX + 0x70) + 0x50) = 1;
  }
  return;
}
// 函数: void function_34a360(int64_t param_1)
void function_34a360(int64_t param_1)
{
  uint64_t uVar1;
  char cVar2;
  float *pfVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int32_t uVar6;
  pfVar3 = (float *)(*(int64_t *)(param_1 + 0x18) + 0x70);
  puVar4 = (uint64_t *)(param_1 + 0x9c);
  cVar2 = SystemFunction_000180285f10(pfVar3,puVar4,0x3c23d70a);
  if (cVar2 == '\0') {
    uVar1 = *(uint64_t *)(pfVar3 + 2);
    cVar2 = '\x01';
    *puVar4 = *(uint64_t *)pfVar3;
    puVar4[1] = uVar1;
    uVar1 = *(uint64_t *)(pfVar3 + 6);
    puVar4[2] = *(uint64_t *)(pfVar3 + 4);
    puVar4[3] = uVar1;
    uVar1 = *(uint64_t *)(pfVar3 + 10);
    puVar4[4] = *(uint64_t *)(pfVar3 + 8);
    puVar4[5] = uVar1;
    uVar1 = *(uint64_t *)(pfVar3 + 0xe);
    puVar4[6] = *(uint64_t *)(pfVar3 + 0xc);
    puVar4[7] = uVar1;
    lVar5 = *(int64_t *)(param_1 + 0x70);
    uVar1 = *(uint64_t *)(pfVar3 + 2);
    *(uint64_t *)(lVar5 + 100) = *(uint64_t *)pfVar3;
    *(uint64_t *)(lVar5 + 0x6c) = uVar1;
    uVar1 = *(uint64_t *)(pfVar3 + 6);
    *(uint64_t *)(lVar5 + 0x74) = *(uint64_t *)(pfVar3 + 4);
    *(uint64_t *)(lVar5 + 0x7c) = uVar1;
    uVar1 = *(uint64_t *)(pfVar3 + 10);
    *(uint64_t *)(lVar5 + 0x84) = *(uint64_t *)(pfVar3 + 8);
    *(uint64_t *)(lVar5 + 0x8c) = uVar1;
    uVar1 = *(uint64_t *)(pfVar3 + 0xe);
    *(uint64_t *)(lVar5 + 0x94) = *(uint64_t *)(pfVar3 + 0xc);
    *(uint64_t *)(lVar5 + 0x9c) = uVar1;
    uVar6 = 0;
    *(int32_t *)(lVar5 + 0x70) = 0;
    *(int32_t *)(lVar5 + 0x80) = 0;
    *(int32_t *)(lVar5 + 0x90) = 0;
    *(int32_t *)(lVar5 + 0xa0) = 0x3f800000;
    *(float *)(lVar5 + 0x48) =
         SQRT(pfVar3[4] * pfVar3[4] + pfVar3[5] * pfVar3[5] + pfVar3[6] * pfVar3[6] +
              *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1] + pfVar3[2] * pfVar3[2] +
              pfVar3[8] * pfVar3[8] + pfVar3[9] * pfVar3[9] + pfVar3[10] * pfVar3[10]);
    function_31bc40();
    if (cVar2 != '\0') {
      *(int32_t *)(lVar5 + 0x4c) = uVar6;
    }
    return;
  }
  return;
}
// 函数: void function_34a3c0(int64_t param_1,int64_t param_2)
void function_34a3c0(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  int32_t uVar6;
  int iVar7;
  lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20);
  if (*(char *)(param_1 + 0x93) != '\0') {
    return;
  }
  if (lVar1 == 0) {
    return;
  }
  iVar7 = *(int *)(param_2 + 0x10);
  if ((iVar7 == 8) && (iVar5 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_8280_ptr), iVar5 == 0)) {
    *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x148) = *(int8_t *)(param_1 + 0x90);
    return;
  }
  if ((iVar7 == 0x11) && (iVar5 = strcmp(*(uint64_t *)(param_2 + 8)), iVar5 == 0)) {
    lVar2 = *(int64_t *)(param_1 + 0x70);
    *(int32_t *)(lVar2 + 0x144) = *(int32_t *)(param_1 + 0x8c);
    uVar6 = 0x14;
    if (*(int *)(lVar2 + 0x4c) != 0x18) {
      uVar6 = 0;
    }
    *(int32_t *)(lVar2 + 0x4c) = uVar6;
  }
  else if ((iVar7 == 9) && (iVar5 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_6408_ptr), iVar5 == 0)
          ) {
    lVar2 = *(int64_t *)(param_1 + 0x70);
    uVar6 = *(int32_t *)(param_1 + 0x7c);
    uVar3 = *(int32_t *)(param_1 + 0x80);
    uVar4 = *(int32_t *)(param_1 + 0x84);
    *(int32_t *)(lVar2 + 0xe4) = *(int32_t *)(param_1 + 0x78);
    *(int32_t *)(lVar2 + 0xe8) = uVar6;
    *(int32_t *)(lVar2 + 0xec) = uVar3;
    *(int32_t *)(lVar2 + 0xf0) = uVar4;
    function_31bc40();
  }
  else if ((iVar7 == 0xf) &&
          (iVar5 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_6424_ptr), iVar5 == 0)) {
    lVar2 = *(int64_t *)(param_1 + 0x70);
    *(int32_t *)(lVar2 + 0x60) = *(int32_t *)(param_1 + 0x88);
    *(int8_t *)(lVar2 + 0x50) = 1;
  }
  else {
    if (iVar7 != 0x13) {
      return;
    }
    iVar7 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_6464_ptr);
    if (iVar7 != 0) {
      return;
    }
    *(int8_t *)(*(int64_t *)(param_1 + 0x70) + 0x149) = *(int8_t *)(param_1 + 0x92);
  }
  function_3179d0(lVar1 + 0x60c10,1);
  return;
}
// 函数: void function_34a3f3(uint64_t param_1,int64_t param_2)
void function_34a3f3(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  int32_t uVar5;
  int iVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  iVar6 = *(int *)(param_2 + 0x10);
  if ((iVar6 == 8) && (iVar4 = strcmp(*(uint64_t *)(unaff_RSI + 8),&processed_var_8280_ptr), iVar4 == 0)) {
    *(int8_t *)(*(int64_t *)(unaff_RBX + 0x70) + 0x148) = *(int8_t *)(unaff_RBX + 0x90);
    return;
  }
  if ((iVar6 == 0x11) && (iVar4 = strcmp(*(uint64_t *)(unaff_RSI + 8)), iVar4 == 0)) {
    lVar1 = *(int64_t *)(unaff_RBX + 0x70);
    *(int32_t *)(lVar1 + 0x144) = *(int32_t *)(unaff_RBX + 0x8c);
    uVar5 = 0x14;
    if (*(int *)(lVar1 + 0x4c) != 0x18) {
      uVar5 = 0;
    }
    *(int32_t *)(lVar1 + 0x4c) = uVar5;
  }
  else {
    if (iVar6 == 9) {
      iVar4 = strcmp(*(uint64_t *)(unaff_RSI + 8),&processed_var_6408_ptr);
      if (iVar4 == 0) {
        lVar1 = *(int64_t *)(unaff_RBX + 0x70);
        uVar5 = *(int32_t *)(unaff_RBX + 0x7c);
        uVar2 = *(int32_t *)(unaff_RBX + 0x80);
        uVar3 = *(int32_t *)(unaff_RBX + 0x84);
        *(int32_t *)(lVar1 + 0xe4) = *(int32_t *)(unaff_RBX + 0x78);
        *(int32_t *)(lVar1 + 0xe8) = uVar5;
        *(int32_t *)(lVar1 + 0xec) = uVar2;
        *(int32_t *)(lVar1 + 0xf0) = uVar3;
        function_31bc40();
        goto LAB_18034a4ee;
      }
    }
    if (iVar6 == 0xf) {
      iVar4 = strcmp(*(uint64_t *)(unaff_RSI + 8),&processed_var_6424_ptr);
      if (iVar4 == 0) {
        lVar1 = *(int64_t *)(unaff_RBX + 0x70);
        *(int32_t *)(lVar1 + 0x60) = *(int32_t *)(unaff_RBX + 0x88);
        *(int8_t *)(lVar1 + 0x50) = 1;
        goto LAB_18034a4ee;
      }
    }
    if (iVar6 != 0x13) {
      return;
    }
    iVar6 = strcmp(*(uint64_t *)(unaff_RSI + 8),&processed_var_6464_ptr);
    if (iVar6 != 0) {
      return;
    }
    *(int8_t *)(*(int64_t *)(unaff_RBX + 0x70) + 0x149) = *(int8_t *)(unaff_RBX + 0x92);
  }
LAB_18034a4ee:
  function_3179d0(unaff_RBP + 0x60c10,1);
  return;
}
// 函数: void function_34a501(void)
void function_34a501(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34a520(uint64_t param_1)
void function_34a520(uint64_t param_1)
{
  int8_t stack_array_2a8 [32];
  int32_t local_var_288;
  void **applocal_var_280 [2];
  uint64_t local_var_270;
  void *aplocal_var_268 [11];
  int32_t local_var_210;
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
  local_var_270 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2a8;
  local_var_288 = 0;
  plocal_var_208 = &memory_allocator_3480_ptr;
  plocal_var_200 = stack_array_1f0;
  stack_array_1f0[0] = 0;
  local_var_1f8 = 8;
  strcpy_s(stack_array_1f0,0x40,&processed_var_8280_ptr);
  SystemCommunicationProcessor(aplocal_var_268,&plocal_var_208);
  local_var_210 = 3;
  local_var_288 = 1;
  MathOptimizationEngine0(param_1,applocal_var_280,aplocal_var_268);
  local_var_288 = 0;
  applocal_var_280[0] = aplocal_var_268;
  aplocal_var_268[0] = &system_state_ptr;
  plocal_var_208 = &system_state_ptr;
  plocal_var_1a8 = &memory_allocator_3480_ptr;
  plocal_var_1a0 = stack_array_190;
  stack_array_190[0] = 0;
  local_var_198 = 0x13;
  strcpy_s(stack_array_190,0x40,&processed_var_6464_ptr);
  SystemCommunicationProcessor(aplocal_var_268,&plocal_var_1a8);
  local_var_210 = 3;
  local_var_288 = 2;
  MathOptimizationEngine0(param_1,applocal_var_280,aplocal_var_268);
  local_var_288 = 0;
  applocal_var_280[0] = aplocal_var_268;
  aplocal_var_268[0] = &system_state_ptr;
  plocal_var_1a8 = &system_state_ptr;
  plocal_var_148 = &memory_allocator_3480_ptr;
  plocal_var_140 = stack_array_130;
  stack_array_130[0] = 0;
  local_var_138 = 0x11;
  strcpy_s(stack_array_130,0x40,&processed_var_6440_ptr);
  SystemCommunicationProcessor(aplocal_var_268,&plocal_var_148);
  local_var_210 = 2;
  local_var_288 = 4;
  MathOptimizationEngine0(param_1,applocal_var_280,aplocal_var_268);
  local_var_288 = 0;
  applocal_var_280[0] = aplocal_var_268;
  aplocal_var_268[0] = &system_state_ptr;
  plocal_var_148 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3480_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0xf;
  strcpy_s(stack_array_d0,0x40,&processed_var_6424_ptr);
  SystemCommunicationProcessor(aplocal_var_268,&plocal_var_e8);
  local_var_210 = 2;
  local_var_288 = 8;
  MathOptimizationEngine0(param_1,applocal_var_280,aplocal_var_268);
  local_var_288 = 0;
  applocal_var_280[0] = aplocal_var_268;
  aplocal_var_268[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 9;
  strcpy_s(stack_array_70,0x40,&processed_var_6408_ptr);
  SystemCommunicationProcessor(aplocal_var_268,&plocal_var_88);
  local_var_210 = 5;
  local_var_288 = 0x10;
  MathOptimizationEngine0(param_1,applocal_var_280,aplocal_var_268);
  local_var_288 = 0;
  applocal_var_280[0] = aplocal_var_268;
  aplocal_var_268[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_2a8);
}
uint64_t * function_34a890(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_6912_ptr;
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
    free(param_1,0xa8);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34a930(uint64_t *param_1)
void function_34a930(uint64_t *param_1)
{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *plocal_var_a0;
  uint64_t *plocal_var_98;
  int32_t local_var_90;
  uint64_t local_var_88;
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  SystemCore_SyncController();
  *puVar3 = &processed_var_6912_ptr;
  puVar1 = puVar3 + 0xe;
  *puVar1 = &system_state_ptr;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(int32_t *)(puVar3 + 0x10) = 0;
  plocal_var_a0 = &system_data_buffer_ptr;
  local_var_88 = 0;
  plocal_var_98 = (uint64_t *)0x0;
  local_var_90 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_98 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  local_var_88 = CONCAT44(local_var_88._4_4_,uVar2);
  *puVar3 = 0x6d614e2068746150;
  *(int16_t *)(puVar3 + 1) = 0x65;
  local_var_90 = 9;
  SystemNetwork_Processor(param_1,&plocal_var_a0,puVar1,0,uVar4);
  plocal_var_a0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34abd0(uint64_t param_1)
void function_34abd0(uint64_t param_1)
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
  local_var_d8 = 5;
  strcpy_s(stack_array_d0,0x40,&system_data_d570);
  SystemCommunicationProcessor(aplocal_var_1a8,&plocal_var_e8);
  local_var_150 = 1;
  local_var_1c8 = 2;
  MathOptimizationEngine0(param_1,applocal_var_1c0,aplocal_var_1a8);
  local_var_1c8 = 0;
  applocal_var_1c0[0] = aplocal_var_1a8;
  aplocal_var_1a8[0] = &system_state_ptr;
  plocal_var_e8 = &system_state_ptr;
  plocal_var_88 = &memory_allocator_3480_ptr;
  plocal_var_80 = stack_array_70;
  stack_array_70[0] = 0;
  local_var_78 = 0x16;
  strcpy_s(stack_array_70,0x40,&system_data_d558);
  SystemCommunicationProcessor(aplocal_var_1a8,&plocal_var_88);
  local_var_150 = 1;
  local_var_1c8 = 4;
  MathOptimizationEngine0(param_1,applocal_var_1c0,aplocal_var_1a8);
  local_var_1c8 = 0;
  applocal_var_1c0[0] = aplocal_var_1a8;
  aplocal_var_1a8[0] = &system_state_ptr;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_1e8);
}
// 函数: void function_34adf0(int64_t param_1,float param_2,uint64_t param_3,uint64_t param_4)
void function_34adf0(int64_t param_1,float param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  float fVar4;
  double dVar5;
  int64_t *plStackX_8;
  int8_t stack_array_60 [88];
  *(double *)(param_1 + 0xa0) =
       (double)param_2 * *(double *)(param_1 + 0x90) + *(double *)(param_1 + 0xa0);
  plVar2 = (int64_t *)
           function_389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,&plStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  lVar1 = *plVar2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (lVar1 != 0) {
    fVar4 = (float)function_466420(lVar1);
    dVar5 = *(double *)(param_1 + 0xa0);
    if ((double)fVar4 < dVar5) {
      *(uint64_t *)(param_1 + 0xa0) = 0;
      dVar5 = 0.0;
    }
    uVar3 = function_466700(lVar1,stack_array_60,(float)dVar5);
    NetworkProtocol_Transmitter(*(uint64_t *)(param_1 + 0x18),uVar3);
  }
  return;
}
uint64_t * function_34aec0(uint64_t *param_1,uint64_t param_2)
{
  int64_t *plVar1;
  *param_1 = &processed_var_7280_ptr;
  plVar1 = (int64_t *)param_1[0x2e];
  param_1[0x2e] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((int64_t *)param_1[0x2e] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x2e] + 0x38))();
  }
  param_1[0x2a] = &system_data_buffer_ptr;
  if (param_1[0x2b] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x2b] = 0;
  *(int32_t *)(param_1 + 0x2d) = 0;
  param_1[0x2a] = &system_state_ptr;
  function_362cf0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x178);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34af90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_34af90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int8_t stack_array_48 [64];
  uVar3 = 0xfffffffffffffffe;
  if ((*(int64_t *)(param_1 + 0x170) != 0) && (*(int *)(*(int64_t *)(param_1 + 0x170) + 8) == 1))
  {
    plVar1 = *(int64_t **)(param_1 + 0x170);
    *(uint64_t *)(param_1 + 0x170) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (*(int64_t *)(param_1 + 0x170) != 0) {
    lVar2 = *(int64_t *)(param_1 + 0x18);
    local_var_88 = *(uint64_t *)(lVar2 + 0x70);
    local_var_80 = *(uint64_t *)(lVar2 + 0x78);
    local_var_78 = *(int32_t *)(lVar2 + 0x80);
    local_var_74 = *(int32_t *)(lVar2 + 0x84);
    local_var_70 = *(int32_t *)(lVar2 + 0x88);
    local_var_6c = *(int32_t *)(lVar2 + 0x8c);
    local_var_68 = *(int32_t *)(lVar2 + 0x90);
    local_var_64 = *(int32_t *)(lVar2 + 0x94);
    local_var_60 = *(int32_t *)(lVar2 + 0x98);
    local_var_5c = *(int32_t *)(lVar2 + 0x9c);
    lVar2 = function_4664b0(*(int64_t *)(param_1 + 0x170),stack_array_48,render_system_data_memory + 0x1b8,param_4,
                          uVar3);
    local_var_58 = *(int32_t *)(lVar2 + 0x30);
    local_var_54 = *(int32_t *)(lVar2 + 0x34);
    local_var_50 = *(int32_t *)(lVar2 + 0x38);
    local_var_4c = *(int32_t *)(lVar2 + 0x3c);
    NetworkProtocol_Transmitter(*(uint64_t *)(param_1 + 0x18),&local_var_88);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_34b050(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_34b050(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int8_t stack_array_48 [64];
  uVar3 = 0xfffffffffffffffe;
  function_362ef0();
  if ((*(int64_t *)(param_1 + 0x170) != 0) && (*(int *)(*(int64_t *)(param_1 + 0x170) + 8) == 1))
  {
    plVar1 = *(int64_t **)(param_1 + 0x170);
    *(uint64_t *)(param_1 + 0x170) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if (*(int64_t *)(param_1 + 0x170) != 0) {
    lVar2 = *(int64_t *)(param_1 + 0x18);
    local_var_88 = *(uint64_t *)(lVar2 + 0x70);
    local_var_80 = *(uint64_t *)(lVar2 + 0x78);
    local_var_78 = *(int32_t *)(lVar2 + 0x80);
    local_var_74 = *(int32_t *)(lVar2 + 0x84);
    local_var_70 = *(int32_t *)(lVar2 + 0x88);
    local_var_6c = *(int32_t *)(lVar2 + 0x8c);
    local_var_68 = *(int32_t *)(lVar2 + 0x90);
    local_var_64 = *(int32_t *)(lVar2 + 0x94);
    local_var_60 = *(int32_t *)(lVar2 + 0x98);
    local_var_5c = *(int32_t *)(lVar2 + 0x9c);
    lVar2 = function_4664b0(*(int64_t *)(param_1 + 0x170),stack_array_48,render_system_data_memory + 0x1b8,param_4,
                          uVar3);
    local_var_58 = *(int32_t *)(lVar2 + 0x30);
    local_var_54 = *(int32_t *)(lVar2 + 0x34);
    local_var_50 = *(int32_t *)(lVar2 + 0x38);
    local_var_4c = *(int32_t *)(lVar2 + 0x3c);
    NetworkProtocol_Transmitter(*(uint64_t *)(param_1 + 0x18),&local_var_88);
  }
  return;
}
// 函数: void function_34b120(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_34b120(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t *aplStackX_10 [3];
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  function_362e30();
  puVar2 = (uint64_t *)
           function_389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_10,
                         param_1 + 0x150,param_4,uVar3);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plVar1 = *(int64_t **)(param_1 + 0x170);
  *(uint64_t *)(param_1 + 0x170) = uVar3;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}
// 函数: void function_34b1a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_34b1a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t *aplStackX_10 [3];
  puVar3 = (uint64_t *)
           function_389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_10,
                         param_1 + 0x150,param_4,0xfffffffffffffffe);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plVar2 = *(int64_t **)(param_1 + 0x170);
  *(uint64_t *)(param_1 + 0x170) = uVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (aplStackX_10[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}
// 函数: void function_34b220(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_34b220(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
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
               function_389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,
                             aplStackX_18,param_1 + 0x150);
      uVar1 = *puVar4;
      *puVar4 = 0;
      plVar2 = *(int64_t **)(param_1 + 0x170);
      *(uint64_t *)(param_1 + 0x170) = uVar1;
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
// 函数: void function_34b2c0(uint64_t *param_1)
void function_34b2c0(uint64_t *param_1)
{
  int32_t uVar1;
  uint64_t *puVar2;
  void *plocal_var_b8;
  uint64_t *plocal_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  puVar2 = param_1;
  SystemCore_SyncController();
  *puVar2 = &processed_var_7952_ptr;
  DataStructureManager(puVar2 + 0xe,0x20,4,function_627850,SystemValidator);
  DataStructureManager(param_1 + 0x1e,0x20,4,function_627850,SystemValidator);
  param_1[0x2f] = 0;
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  plocal_var_b0 = (uint64_t *)0x0;
  local_var_a8 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_b0 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  local_var_a0 = CONCAT44(local_var_a0._4_4_,uVar1);
  *puVar2 = 0x614d72656d6d7553;
  *(int32_t *)(puVar2 + 1) = 0x69726574;
  *(int16_t *)((int64_t)puVar2 + 0xc) = 0x6c61;
  *(int8_t *)((int64_t)puVar2 + 0xe) = 0;
  local_var_a8 = 0xe;
  SystemNetwork_Processor(param_1,&plocal_var_b8,param_1 + 0xe,0);
  plocal_var_b8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}
uint64_t * function_34b610(uint64_t *param_1,uint64_t param_2)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_7952_ptr;
  *(int32_t *)(param_1 + 0x2e) = 0;
  if ((int64_t *)param_1[0x2f] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x2f] + 0x38))();
  }
  SystemDataValidator(param_1 + 0x1e,0x20,4,SystemValidator,uVar1);
  SystemDataValidator(param_1 + 0xe,0x20,4,SystemValidator);
  UIComponent_Manager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x180);
  }
  return param_1;
}
// 函数: void function_34b6c0(int64_t param_1)
void function_34b6c0(int64_t param_1)
{
  void *puVar1;
  uint uVar2;
  void *puVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t *plStack_30;
  int64_t lStack_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  int64_t *plVar3;
  plStack_30 = (int64_t *)0x0;
  lStack_28 = 0;
  plVar5 = (int64_t *)0x0;
  local_var_20 = 0;
  local_var_18 = 3;
  function_2e93a0(*(uint64_t *)(param_1 + 0x18),&plStack_30);
  uVar8 = (uint)(lStack_28 - (int64_t)plStack_30 >> 3);
  if (uVar8 == 0) {
    puVar1 = *(void **)(*(int64_t *)(param_1 + 0x18) + 0x290);
    puVar4 = &system_buffer_ptr;
    if (puVar1 != (void *)0x0) {
      puVar4 = puVar1;
    }
    SystemCore_Allocator(&processed_var_7880_ptr,puVar4);
  }
  else {
    if (uVar8 != 0) {
      plVar3 = plVar5;
      do {
        if (*(int64_t *)(*plStack_30 + 0x1b8) !=
            *(int64_t *)(plStack_30[(int64_t)plVar3] + 0x1b8)) goto LAB_18034b77d;
        uVar2 = (int)plVar3 + 1;
        plVar3 = (int64_t *)(uint64_t)uVar2;
      } while (uVar2 < uVar8);
    }
    plVar5 = *(int64_t **)(*plStack_30 + 0x1b8);
LAB_18034b77d:
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar3 = *(int64_t **)(param_1 + 0x178);
    *(int64_t **)(param_1 + 0x178) = plVar5;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    if (*(int64_t *)(param_1 + 0x178) == 0) {
      puVar1 = *(void **)(*(int64_t *)(param_1 + 0x18) + 0x290);
      puVar4 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar4 = puVar1;
      }
      SystemCore_Allocator(&processed_var_7792_ptr,puVar4);
    }
    else {
      *(int32_t *)(param_1 + 0x170) =
           *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x3054);
      if (*(int *)(param_1 + 0x80) == 0) {
        puVar1 = *(void **)(*(int64_t *)(param_1 + 0x178) + 0x18);
        puVar4 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar4 = puVar1;
        }
        (**(code **)(*(int64_t *)(param_1 + 0x70) + 0x10))((int64_t *)(param_1 + 0x70),puVar4);
      }
      plVar5 = (int64_t *)(param_1 + 0xf8);
      lVar6 = 4;
      do {
        uVar8 = *(uint *)(plVar5 + -0xf);
        uVar7 = (uint64_t)uVar8;
        if (plVar5[-0x10] != 0) {
          CoreEngineDataBufferProcessor(plVar5 + -1,uVar7);
        }
        if (uVar8 != 0) {
// WARNING: Subroutine does not return
          memcpy(*plVar5,plVar5[-0x10],uVar7);
        }
        *(int32_t *)(plVar5 + 1) = 0;
        if (*plVar5 != 0) {
          *(int8_t *)(uVar7 + *plVar5) = 0;
        }
        *(int32_t *)((int64_t)plVar5 + 0x14) = *(int32_t *)((int64_t)plVar5 + -0x6c);
        plVar5 = plVar5 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      function_34bd70(param_1,*(int32_t *)(param_1 + 0x170));
    }
  }
  if (plStack_30 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_34b8b0(int64_t param_1)
void function_34b8b0(int64_t param_1)
{
  int iVar1;
  iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x3054);
  if (iVar1 != *(int *)(param_1 + 0x170)) {
    function_34bd70(param_1,iVar1);
    *(int *)(param_1 + 0x170) = iVar1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address