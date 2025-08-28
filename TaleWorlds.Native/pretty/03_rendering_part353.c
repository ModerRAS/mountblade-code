// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
// 03_rendering_part353.c - 18 个函数
// 函数: void function_45af40(uint64_t *param_1)
void function_45af40(uint64_t *param_1)
{
  SystemCore_NetworkHandler(*param_1,0);
// WARNING: Could not recover jumptable at 0x00018045af5e. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*(int64_t *)*param_1 + 0x38))();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_45afb0(int32_t *param_1)
{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x108,8,3,0xfffffffffffffffe);
  function_244190(plVar3);
  *plVar3 = (int64_t)&processed_var_7416_ptr;
  plVar3[0x1e] = 0;
  plVar3[0x1f] = 0;
  plVar1 = (int64_t *)plVar3[0x1e];
  plVar3[0x1e] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)plVar3[0x1f];
  plVar3[0x1f] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(plVar3 + 0x20) = 1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  (**(code **)(*plVar3 + 0x28))(plVar3);
  local_var_20 = SUB84(plVar3,0);
  local_var_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar2;
  param_1[3] = local_var_14;
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return param_1;
}
// 函数: void function_45b0b0(int64_t param_1,int64_t *param_2)
void function_45b0b0(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  if (param_1 != 0) {
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    plVar1 = *(int64_t **)(param_1 + 0xf0);
    *(int64_t **)(param_1 + 0xf0) = param_2;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    function_488de0(param_1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_45b120(int32_t *param_1)
{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1e8,8,3,0xfffffffffffffffe);
  plVar3 = (int64_t *)function_489240(uVar2);
  if (plVar3 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  local_var_20 = SUB84(plVar3,0);
  local_var_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar1;
  param_1[3] = local_var_14;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}
// 函数: void function_45b1d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void function_45b1d0(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,int32_t param_7)
{
  uint64_t uVar1;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar1 = 0xfffffffffffffffe;
  SystemCore_CacheManager(&plocal_var_30,param_6);
  if (param_1 == 0) {
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    function_48c490(param_1,param_2,param_3,param_4,param_5,&plocal_var_30,param_4 + 0x10,
                  *(int16_t *)(param_4 + 0x32c),*(int16_t *)(param_4 + 0x32e),param_7,uVar1);
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
// 函数: void function_45b2f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_45b2f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar1 = 0xfffffffffffffffe;
  SystemCore_CacheManager(&plocal_var_30);
  function_489b50(param_1,&plocal_var_30,param_3,param_4,uVar1);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// 函数: void function_45b360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_45b360(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,uint64_t param_7,uint64_t param_8,
                  int32_t param_9)
{
  uint64_t uVar1;
  void *plocal_var_50;
  int64_t lStack_48;
  int32_t local_var_38;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar1 = 0xfffffffffffffffe;
  SystemCore_CacheManager(&plocal_var_30,param_7);
  SystemCore_CacheManager(&plocal_var_50,param_8);
  if (param_1 == 0) {
    plocal_var_50 = &system_data_buffer_ptr;
    if (lStack_48 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_48 = 0;
    local_var_38 = 0;
    plocal_var_50 = &system_state_ptr;
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    function_48c490(param_1,param_2,param_3,0,param_4,&plocal_var_30,&plocal_var_50,param_5,param_6,param_9,
                  uVar1);
    plocal_var_50 = &system_data_buffer_ptr;
    if (lStack_48 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_48 = 0;
    local_var_38 = 0;
    plocal_var_50 = &system_state_ptr;
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_45b510(int32_t *param_1)
{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1e8,8,3,0xfffffffffffffffe);
  plVar3 = (int64_t *)function_30cef0(uVar2);
  if (plVar3 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  local_var_20 = SUB84(plVar3,0);
  local_var_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar1;
  param_1[3] = local_var_14;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45b5b0(int64_t param_1)
void function_45b5b0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  *(int8_t *)(param_1 + 0x120) = 1;
  uVar3 = 0;
  uVar5 = uVar3;
  if ((*(int64_t **)(param_1 + 0x110))[1] - **(int64_t **)(param_1 + 0x110) >> 3 != 0) {
    do {
      lVar2 = *(int64_t *)(uVar3 + **(int64_t **)(param_1 + 0x110));
      *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(lVar2 + 8);
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (uint64_t)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 <
             (uint64_t)
             ((*(int64_t **)(param_1 + 0x110))[1] - **(int64_t **)(param_1 + 0x110) >> 3));
  }
  uVar4 = *(int *)(param_1 + 0x124) + 1U & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(param_1 + 0x124) = uVar4;
  *(int32_t *)(param_1 + 0x128) = 0;
  SystemCore_Controller(param_1 + 0x170 + (int64_t)(int)uVar4 * 0x20);
  lVar2 = *(int64_t *)(param_1 + 0x1c0);
  while( true ) {
    if (lVar2 == param_1 + 0x1b8) {
      *(int32_t *)(param_1 + 0x11c) = 0;
      *(int32_t *)(param_1 + 0x118) = *(int32_t *)(render_system_data_memory + 0x40);
      return;
    }
    lVar1 = *(int64_t *)(lVar2 + 0x30);
    *(int32_t *)(lVar1 + 0x20) = 0;
    *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
    if (0x78 < *(int *)(lVar1 + 0x24)) break;
    lVar2 = SystemFunction_00018066bd70(lVar2);
  }
  DataTransformer0(lVar1);
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar1);
}
// 函数: void function_45b7c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_45b7c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,int64_t *param_7,uint64_t param_8)
{
  int64_t *plVar1;
  uint64_t uVar2;
  plVar1 = param_7;
  uVar2 = 0xfffffffffffffffe;
  if (param_7 != (int64_t *)0x0) {
    (**(code **)(*param_7 + 0x28))(param_7);
  }
  function_30d960(param_1,param_2,param_3,param_4,param_5,param_6,&param_7,param_8,uVar2);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}
// 函数: void function_45b880(uint64_t param_1,int64_t *param_2,uint64_t param_3)
void function_45b880(uint64_t param_1,int64_t *param_2,uint64_t param_3)
{
  int64_t *plStackX_8;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  function_30d960(param_1,0,0,0,0,0,&plStackX_8,param_3,uVar1);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  return;
}
int8_t function_45b900(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t uVar1;
  int64_t *plStackX_8;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  uVar1 = function_30e490(param_1,&plStackX_8,param_3,param_4,uVar2);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  return uVar1;
}
// 函数: void function_45b970(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_45b970(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,int64_t *param_7,uint64_t param_8)
{
  int64_t *plVar1;
  uint64_t uVar2;
  plVar1 = param_7;
  uVar2 = 0xfffffffffffffffe;
  if (param_7 != (int64_t *)0x0) {
    (**(code **)(*param_7 + 0x28))(param_7);
  }
  function_30dcc0(param_1,param_2,param_3,param_4,param_5,param_6,&param_7,param_8,uVar2);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_45ba30(void)
{
  int32_t uVar1;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_20;
  uint64_t local_var_18;
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  lStack_28 = 0;
  local_var_20 = 0;
  System_DataHandler(&plocal_var_30,&processed_var_896_ptr,0,0,0xfffffffffffffffe);
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_30);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}
// 函数: void function_45bb20(void)
void function_45bb20(void)
{
  int8_t stack_array_30 [40];
  SystemCore_CacheManager(stack_array_30);
  function_200780();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_45bbb0(void)
{
  int32_t uVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  int64_t *plStackX_8;
  uint64_t **ppstack_special_x_10;
  void *plocal_var_118;
  int64_t lStack_110;
  int32_t local_var_108;
  uint64_t local_var_100;
  void *plocal_var_f8;
  uint64_t local_var_f0;
  int32_t local_var_e8;
  uint64_t local_var_e0;
  void *plocal_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  uint64_t local_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t **applocal_var_98 [2];
  void *plocal_var_88;
  code *pcStack_80;
  int64_t alStack_78 [10];
  uint64_t local_var_28;
  local_var_28 = 0xfffffffffffffffe;
  plocal_var_118 = &system_data_buffer_ptr;
  local_var_100 = 0;
  lStack_110 = 0;
  local_var_108 = 0;
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  plocal_var_d8 = &system_data_buffer_ptr;
  local_var_c0 = 0;
  local_var_d0 = 0;
  local_var_c8 = 0;
  plocal_var_f8 = &system_data_buffer_ptr;
  local_var_e0 = 0;
  local_var_f0 = 0;
  local_var_e8 = 0;
  lVar2 = function_623ce0();
  alStack_78[0] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  alStack_78[5] = 0;
  alStack_78[6] = 0;
  alStack_78[7] = 0;
  alStack_78[8] = 0;
  plStackX_8 = alStack_78;
  ppstack_special_x_10 = applocal_var_98;
  plocal_var_88 = &rendering_buffer_2640_ptr;
  pcStack_80 = function_0adba0;
  applocal_var_98[0] = &plStackX_8;
  SystemCore_SecurityManager(applocal_var_98);
  fVar3 = (float)alStack_78[0];
  if (alStack_78[0] < 0) {
    fVar3 = fVar3 + 1.8446744e+19;
  }
  fVar4 = (float)lVar2;
  if (lVar2 < 0) {
    fVar4 = fVar4 + 1.8446744e+19;
  }
  System_DataHandler(&plocal_var_118,&processed_var_784_ptr,(double)(fVar4 * 9.536743e-07),
                (double)(fVar3 * 9.536743e-07));
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_118);
  local_var_f0 = 0;
  local_var_e0 = local_var_e0 & 0xffffffff00000000;
  plocal_var_f8 = &system_state_ptr;
  local_var_d0 = 0;
  local_var_c0 = local_var_c0 & 0xffffffff00000000;
  plocal_var_d8 = &system_state_ptr;
  local_var_b0 = 0;
  local_var_a0 = local_var_a0 & 0xffffffff00000000;
  plocal_var_b8 = &system_state_ptr;
  plocal_var_118 = &system_data_buffer_ptr;
  if (lStack_110 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t
function_45bdb0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t uVar1;
  uint64_t uVar2;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar2 = SystemCore_CacheManager(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = function_051f00(system_main_module_state,uVar2);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_45be20(void)
{
  code *pcVar1;
  int32_t uVar2;
  uint64_t in_R9;
  void *plocal_var_30;
  int32_t *plocal_var_28;
  int32_t local_var_20;
  uint64_t local_var_18;
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  plocal_var_28 = (int32_t *)0x0;
  local_var_20 = 0;
  plocal_var_28 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1f,0x13,in_R9,0xfffffffffffffffe);
  *(int8_t *)plocal_var_28 = 0;
  uVar2 = CoreEngineSystemCleanup(plocal_var_28);
  local_var_18 = CONCAT44(local_var_18._4_4_,uVar2);
  *plocal_var_28 = 0x74696445;
  plocal_var_28[1] = 0x646f6d20;
  plocal_var_28[2] = 0x656e2065;
  plocal_var_28[3] = 0x20736465;
  *(uint64_t *)(plocal_var_28 + 4) = 0x6e65206562206f74;
  plocal_var_28[6] = 0x656c6261;
  *(int16_t *)(plocal_var_28 + 7) = 0x2164;
  *(int8_t *)((int64_t)plocal_var_28 + 0x1e) = 0;
  local_var_20 = 0x1e;
  uVar2 = (*pcVar1)(system_cache_buffer,&plocal_var_30);
  plocal_var_30 = &system_data_buffer_ptr;
  if (plocal_var_28 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45bf30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_45bf30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t stack_array_30 [16];
  void *plocal_var_20;
  void *plocal_var_18;
  function_13f940(*system_main_module_state,1,param_3,param_4,0xfffffffffffffffe);
  *(int32_t *)(system_main_module_state + 4) = 0;
  function_088160();
  function_0c3730();
  function_0c33e0(render_system_data_memory);
  function_0c3c70();
  function_18fb50();
  function_21e0a0();
  function_21e9c0();
  plocal_var_20 = &processed_var_4944_ptr;
  plocal_var_18 = &processed_var_4928_ptr;
  SystemCore_SecurityManager(stack_array_30);
  return;
}
float function_45bfc0(void)
{
  int64_t lVar1;
  float fVar2;
  lVar1 = function_623ce0();
  fVar2 = (float)lVar1;
  if (lVar1 < 0) {
    fVar2 = fVar2 + 1.8446744e+19;
  }
  return fVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45c010(void)
void function_45c010(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  lVar1 = system_main_module_state;
  lVar2 = CoreEngineMemoryPoolReallocator();
  *(int32_t *)(lVar2 + 0x19) = 0;
  *(int16_t *)(lVar2 + 0x1d) = 0;
  *(int8_t *)(lVar2 + 0x1f) = 0;
  *(int32_t *)(lVar2 + 0x28) = 3;
  *(int64_t *)lVar2 = lVar2;
  *(int64_t *)(lVar2 + 8) = lVar2;
  *(uint64_t *)(lVar2 + 0x10) = 0;
  *(int8_t *)(lVar2 + 0x18) = 0;
  *(uint64_t *)(lVar2 + 0x20) = 0;
  lVar3 = lVar2 + 0x30;
  *(uint64_t *)(lVar2 + 0x48) = 0;
  *(int32_t *)(lVar2 + 0x58) = 3;
  *(int64_t *)lVar3 = lVar3;
  *(int64_t *)(lVar2 + 0x38) = lVar3;
  *(uint64_t *)(lVar2 + 0x40) = 0;
  *(int8_t *)(lVar2 + 0x48) = 0;
  *(uint64_t *)(lVar2 + 0x50) = 0;
  *(uint64_t *)(lVar2 + 0x60) = 0;
  *(uint64_t *)(lVar2 + 0x68) = 0;
  *(uint64_t *)(lVar2 + 0x70) = 0;
  *(int32_t *)(lVar2 + 0x78) = 3;
  LOCK();
  *(int32_t *)(lVar2 + 0x80) = 0;
  UNLOCK();
  *(int64_t *)(lVar1 + 0x98) = lVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45c0d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_45c0d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  lVar2 = system_main_module_state;
  uVar3 = 0xfffffffffffffffe;
  function_17aa30(*(uint64_t *)(system_main_module_state + 0x98));
  lVar1 = *(int64_t *)(lVar2 + 0x98);
  if (lVar1 != 0) {
    function_17b3a0();
    function_17b400(lVar1 + 0x30,*(uint64_t *)(lVar1 + 0x40),param_3,param_4,uVar3);
    function_0b9270(lVar1,*(uint64_t *)(lVar1 + 0x10));
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar1);
  }
  *(uint64_t *)(lVar2 + 0x98) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45c160(void)
void function_45c160(void)
{
  code *pcVar1;
  uint64_t uVar2;
  int8_t stack_array_168 [32];
  uint64_t local_var_148;
  void *aplocal_var_138 [36];
  uint64_t local_var_18;
  local_var_148 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar2 = function_6240a0(aplocal_var_138);
  (*pcVar1)(system_cache_buffer,uVar2);
  aplocal_var_138[0] = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_168);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45c1d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_45c1d0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  void *puVar2;
  void *plocal_var_30;
  int64_t lStack_28;
  lVar1 = SystemCore_CacheManager(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  puVar2 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar2 = *(void **)(lVar1 + 8);
  }
  (**(code **)(*(int64_t *)(system_main_module_state + 0x148) + 0x10))
            ((int64_t *)(system_main_module_state + 0x148),puVar2);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45c250(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_45c250(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar1 = SystemCore_CacheManager(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  function_054360(system_main_module_state,uVar1);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45c2c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_45c2c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void **appstack_special_x_18 [2];
  uint64_t uVar4;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar4 = 0xfffffffffffffffe;
  lVar1 = *system_main_module_state;
  appstack_special_x_18[0] = &plocal_var_30;
  uVar3 = SystemCore_CacheManager(&plocal_var_30);
  uVar2 = function_142220(lVar1,uVar3,param_3,param_4,uVar4);
  SystemCore_CacheManager(&plocal_var_30,param_1);
  appstack_special_x_18[0] = (void **)CONCAT44(appstack_special_x_18[0]._4_4_,uVar2);
  uVar3 = function_09b5a0(lVar1 + 0x858,&plocal_var_30);
  SystemDatabaseProcessor(uVar3,appstack_special_x_18);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
function_45c380(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *plocal_var_30;
  int64_t lStack_28;
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar3 = function_0524c0(*system_cache_buffer,&plocal_var_30,param_3,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45c3f0(uint64_t param_1)
void function_45c3f0(uint64_t param_1)
{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int8_t stack_array_2b8 [32];
  int32_t local_var_298;
  void *plocal_var_290;
  int64_t lStack_288;
  int32_t local_var_278;
  uint64_t local_var_270;
  int8_t *plocal_var_268;
  int8_t stack_array_260 [40];
  void *aplocal_var_238 [68];
  uint64_t local_var_18;
  local_var_270 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  local_var_298 = 0;
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  lVar4 = *system_main_module_state;
  plocal_var_268 = stack_array_260;
  uVar3 = SystemCore_CacheManager(stack_array_260,param_1);
  iVar2 = function_142220(lVar4,uVar3);
  if (-1 < iVar2) {
    if ((uint64_t)(int64_t)iVar2 <
        (uint64_t)(*(int64_t *)(lVar4 + 0x890) - *(int64_t *)(lVar4 + 0x888) >> 5)) {
      lVar4 = (int64_t)iVar2 * 0x20 + *(int64_t *)(lVar4 + 0x888);
      goto LAB_18045c493;
    }
  }
  lVar4 = MemoryDebugger0();
LAB_18045c493:
  uVar3 = SystemCore_EncryptionEngine(aplocal_var_238,lVar4);
  uVar3 = SystemCore_EncryptionEngine0(&plocal_var_290,uVar3);
  local_var_298 = 1;
  aplocal_var_238[0] = &system_state_ptr;
  (*pcVar1)(system_cache_buffer,uVar3);
  local_var_298 = 0;
  plocal_var_290 = &system_data_buffer_ptr;
  if (lStack_288 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_288 = 0;
  local_var_278 = 0;
  plocal_var_290 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
function_45c540(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *plocal_var_30;
  int64_t lStack_28;
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar3 = function_13f590(*system_main_module_state,&plocal_var_30,param_3,param_4,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address