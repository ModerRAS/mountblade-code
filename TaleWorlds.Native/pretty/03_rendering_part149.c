
// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine


/* 函数别名定义: DataDeserializer */
#define DataDeserializer DataDeserializer



// 03_rendering_part149.c - 13 个函数

// 函数: void FUN_18035ddf2(uint64_t param_1,uint64_t param_2,int64_t *param_3,char param_4)
void FUN_18035ddf2(uint64_t param_1,uint64_t param_2,int64_t *param_3,char param_4)

{
  int in_EAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t in_R11;
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t unaff_XMM6_Da;
  float fVar4;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM8_Da;
  float fVar5;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  
  *(int32_t *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM8_Dd;
  if (in_EAX == 0) {
    fVar3 = *(float *)(unaff_RBP + -0x59) - *(float *)(unaff_RBP + -0x69);
    fVar1 = *(float *)(unaff_RBP + -0x51) - *(float *)(unaff_RBP + -0x61);
    fVar2 = *(float *)(unaff_RBP + -0x55) - *(float *)(unaff_RBP + -0x65);
    param_4 = *(float *)(unaff_RBP + -0x49) * *(float *)(unaff_RBP + -0x49) +
              *(float *)(unaff_RBP + -0x45) * *(float *)(unaff_RBP + -0x45) +
              *(float *)(unaff_RBP + -0x41) * *(float *)(unaff_RBP + -0x41) <
              fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
    if (!(bool)param_4) goto LAB_18035dfab;
  }
  else {
    if (in_EAX != 1) {
      return;
    }
    *(int32_t *)(unaff_RBP + 3) = 0;
    *(int32_t *)(unaff_RBP + 0x13) = 0;
    *(int32_t *)(unaff_RBP + 0x23) = 0;
    *(int32_t *)(unaff_RBP + 0x33) = 0x3f800000;
    SystemCore_PerformanceMonitor(unaff_RBP + -9,unaff_RBP + -0x49);
    fVar1 = *(float *)(unaff_RBP + -0x69);
    fVar2 = *(float *)(unaff_RBP + -0x65);
    fVar3 = *(float *)(unaff_RBP + -0x61);
    fVar5 = *(float *)(unaff_RBP + -0x49) * fVar1 + *(float *)(unaff_RBP + -0x39) * fVar2 +
            *(float *)(unaff_RBP + -0x29) * fVar3 + *(float *)(unaff_RBP + -0x19);
    fVar4 = *(float *)(unaff_RBP + -0x45) * fVar1 + *(float *)(unaff_RBP + -0x35) * fVar2 +
            *(float *)(unaff_RBP + -0x25) * fVar3 + *(float *)(unaff_RBP + -0x15);
    fVar1 = *(float *)(unaff_RBP + -0x41) * fVar1 + *(float *)(unaff_RBP + -0x31) * fVar2 +
            *(float *)(unaff_RBP + -0x21) * fVar3 + *(float *)(unaff_RBP + -0x11);
    if ((((fVar5 < -1.0) || (1.0 < fVar5)) || (fVar4 < -1.0)) ||
       (((1.0 < fVar4 || (fVar1 < -1.0)) || (1.0 < fVar1)))) goto LAB_18035de70;
LAB_18035dfab:
    if (*(char *)(unaff_RBX + 0x70) == '\0') {
      (**(code **)(*param_3 + 0xa8))(param_3,unaff_RBP + -0x59);
      (**(code **)(**(int64_t **)(unaff_RBX + 0xb8) + 0x60))();
      *(int8_t *)(unaff_RBX + 0x70) = 1;
      return;
    }
  }
  if (param_4 == '\0') {
    return;
  }
LAB_18035de70:
  if (*(char *)(unaff_RBX + 0x70) != '\0') {
    (**(code **)(*param_3 + 0x68))(param_3);
    *(int8_t *)(unaff_RBX + 0x70) = 0;
  }
  return;
}





// 函数: void FUN_18035de94(void)
void FUN_18035de94(void)

{
  return;
}





// 函数: void FUN_18035dea5(uint64_t param_1,uint64_t param_2,int64_t *param_3,char param_4)
void FUN_18035dea5(uint64_t param_1,uint64_t param_2,int64_t *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (in_EAX != 1) {
    return;
  }
  *(int32_t *)(unaff_RBP + 3) = 0;
  *(int32_t *)(unaff_RBP + 0x13) = 0;
  *(int32_t *)(unaff_RBP + 0x23) = 0;
  *(int32_t *)(unaff_RBP + 0x33) = 0x3f800000;
  SystemCore_PerformanceMonitor(unaff_RBP + -9,unaff_RBP + -0x49);
  fVar3 = *(float *)(unaff_RBP + -0x69);
  fVar1 = *(float *)(unaff_RBP + -0x65);
  fVar2 = *(float *)(unaff_RBP + -0x61);
  fVar5 = *(float *)(unaff_RBP + -0x49) * fVar3 + *(float *)(unaff_RBP + -0x39) * fVar1 +
          *(float *)(unaff_RBP + -0x29) * fVar2 + *(float *)(unaff_RBP + -0x19);
  fVar4 = *(float *)(unaff_RBP + -0x45) * fVar3 + *(float *)(unaff_RBP + -0x35) * fVar1 +
          *(float *)(unaff_RBP + -0x25) * fVar2 + *(float *)(unaff_RBP + -0x15);
  fVar3 = *(float *)(unaff_RBP + -0x41) * fVar3 + *(float *)(unaff_RBP + -0x31) * fVar1 +
          *(float *)(unaff_RBP + -0x21) * fVar2 + *(float *)(unaff_RBP + -0x11);
  if ((((-1.0 <= fVar5) && (fVar5 <= 1.0)) && (-1.0 <= fVar4)) &&
     (((fVar4 <= 1.0 && (-1.0 <= fVar3)) && (fVar3 <= 1.0)))) {
    if (*(char *)(unaff_RBX + 0x70) == '\0') {
      (**(code **)(*param_3 + 0xa8))(param_3,unaff_RBP + -0x59);
      (**(code **)(**(int64_t **)(unaff_RBX + 0xb8) + 0x60))();
      *(int8_t *)(unaff_RBX + 0x70) = 1;
      return;
    }
    if (param_4 == '\0') {
      return;
    }
  }
  if (*(char *)(unaff_RBX + 0x70) != '\0') {
    (**(code **)(*param_3 + 0x68))(param_3);
    *(int8_t *)(unaff_RBX + 0x70) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035dfe0(uint64_t *param_1)
void FUN_18035dfe0(uint64_t *param_1)

{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_60;
  int32_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  SystemCore_SyncController();
  *puVar3 = &processed_var_4296_ptr;
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  puStack_58 = (int32_t *)0x0;
  uStack_50 = 0;
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_58 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar1);
  *puVar2 = 0x756c6156;
  *(int16_t *)(puVar2 + 1) = 0x65;
  uStack_50 = 5;
  SystemNetwork_Processor(param_1,&puStack_60,param_1 + 0xe,2,uVar4);
  puStack_60 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



uint64_t FUN_18035e170(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e1c0(uint64_t param_1,uint64_t param_2)
void FUN_18035e1c0(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *puStack_60;
  int32_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_30;
  
  uStack_30 = 0x18035e1e8;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x78,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar4 = &processed_var_4296_ptr;
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  puStack_58 = (int32_t *)0x0;
  uStack_50 = 0;
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_58 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar1);
  *puVar2 = 0x756c6156;
  *(int16_t *)(puVar2 + 1) = 0x65;
  uStack_50 = 5;
  SystemNetwork_Processor(puVar3,&puStack_60,puVar3 + 0xe,2,uVar5);
  puStack_60 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e200(uint64_t param_1)
void FUN_18035e200(uint64_t param_1)

{
  int8_t auStack_188 [32];
  int32_t uStack_168;
  void **appuStack_160 [2];
  uint64_t uStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *apuStack_88 [11];
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  uStack_168 = 0;
  puStack_148 = &memory_allocator_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 5;
  strcpy_s(auStack_130,0x40,&system_data_d7b0);
  DataDeserializer0(apuStack_88,&puStack_148);
  uStack_30 = 2;
  uStack_168 = 1;
  MathOptimizationEngine0(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 6;
  appuStack_160[0] = apuStack_88;
  strcpy_s(auStack_d0,0x40,&system_data_64d8);
  DataDeserializer0(apuStack_88,&puStack_e8);
  uStack_30 = 0xb;
  uStack_168 = 2;
  MathOptimizationEngine0(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  appuStack_160[0] = apuStack_88;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e390(uint64_t param_1,uint64_t param_2)
void FUN_18035e390(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *puStack_40;
  uint64_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x78,8,3,0xfffffffffffffffe);
  puVar3 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar3 = &processed_var_4680_ptr;
  puStack_40 = &system_data_buffer_ptr;
  uStack_28 = 0;
  puStack_38 = (uint64_t *)0x0;
  uStack_30 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar3 = 0x65746172656e6547;
  *(int8_t *)(puVar3 + 1) = 0;
  uStack_30 = 8;
  SystemNetwork_Processor(puVar2,&puStack_40,puVar2 + 0xe,0xb);
  puStack_40 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e4b0(uint64_t param_1)
void FUN_18035e4b0(uint64_t param_1)

{
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void **appuStack_e8 [2];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *apuStack_78 [11];
  int32_t uStack_20;
  uint64_t uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &memory_allocator_3480_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 8;
  strcpy_s(auStack_c0,0x40,&system_data_f3d0);
  DataDeserializer0(apuStack_78,&puStack_d8);
  uStack_20 = 0xb;
  uStack_f8 = 1;
  MathOptimizationEngine0(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &system_state_ptr;
  puStack_d8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e5c0(uint64_t *param_1)
void FUN_18035e5c0(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  void *puStack_60;
  uint64_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_1;
  SystemCore_SyncController();
  *puVar2 = &processed_var_5080_ptr;
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  puStack_58 = (uint64_t *)0x0;
  uStack_50 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_58 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar1);
  *puVar2 = 0x654d206b63656843;
  *(int32_t *)(puVar2 + 1) = 0x73656873;
  *(int8_t *)((int64_t)puVar2 + 0xc) = 0;
  uStack_50 = 0xc;
  SystemNetwork_Processor(param_1,&puStack_60,param_1 + 0xe,0xb,uVar3);
  puStack_60 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e750(uint64_t param_1,uint64_t param_2)
void FUN_18035e750(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_60;
  uint64_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_30;
  
  uStack_30 = 0x18035e778;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x78,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar2 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar2 = &processed_var_5080_ptr;
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  puStack_58 = (uint64_t *)0x0;
  uStack_50 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_58 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar1);
  *puVar2 = 0x654d206b63656843;
  *(int32_t *)(puVar2 + 1) = 0x73656873;
  *(int8_t *)((int64_t)puVar2 + 0xc) = 0;
  uStack_50 = 0xc;
  SystemNetwork_Processor(puVar3,&puStack_60,puVar3 + 0xe,0xb,uVar4);
  puStack_60 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e790(uint64_t param_1)
void FUN_18035e790(uint64_t param_1)

{
  int8_t auStack_188 [32];
  int32_t uStack_168;
  void **appuStack_160 [2];
  uint64_t uStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *apuStack_88 [11];
  int32_t uStack_30;
  uint64_t uStack_28;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  uStack_168 = 0;
  puStack_148 = &memory_allocator_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xc;
  strcpy_s(auStack_130,0x40,&system_data_f560);
  DataDeserializer0(apuStack_88,&puStack_148);
  uStack_30 = 0xb;
  uStack_168 = 1;
  MathOptimizationEngine0(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 9;
  appuStack_160[0] = apuStack_88;
  strcpy_s(auStack_d0,0x40,&system_data_f550);
  DataDeserializer0(apuStack_88,&puStack_e8);
  uStack_30 = 0xb;
  uStack_168 = 2;
  MathOptimizationEngine0(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  appuStack_160[0] = apuStack_88;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e920(uint64_t *param_1)
void FUN_18035e920(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  void *puStack_90;
  uint64_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_1;
  SystemCore_SyncController();
  *puVar2 = &processed_var_5608_ptr;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(int8_t *)(puVar2 + 0x10) = 0;
  puStack_90 = &system_data_buffer_ptr;
  uStack_78 = 0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x70614d776f6c46;
  uStack_80 = 7;
  SystemNetwork_Processor(param_1,&puStack_90,param_1 + 0xe,7,uVar3);
  puStack_90 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



uint64_t FUN_18035eb50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x88,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035eba0(uint64_t param_1,uint64_t param_2)
void FUN_18035eba0(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_90;
  uint64_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_30;
  
  uStack_30 = 0x18035ebc8;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x88,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar2 = puVar3;
  SystemCore_SyncController(puVar3,param_2,param_1);
  *puVar2 = &processed_var_5608_ptr;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(int8_t *)(puVar2 + 0x10) = 0;
  puStack_90 = &system_data_buffer_ptr;
  uStack_78 = 0;
  puStack_88 = (uint64_t *)0x0;
  uStack_80 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x70614d776f6c46;
  uStack_80 = 7;
  SystemNetwork_Processor(puVar3,&puStack_90,puVar3 + 0xe,7,uVar4);
  puStack_90 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



