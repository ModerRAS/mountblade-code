
// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MathOptimizationEngine */
#define MathOptimizationEngine MathOptimizationEngine



// 03_rendering_part135.c - 18 个函数

// 函数: void FUN_18034a281(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)
void FUN_18034a281(int64_t param_1,uint64_t param_2,uint64_t param_3,float param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  int64_t unaff_RBX;
  
  lVar1 = *(int64_t *)(param_1 + 0x18);
  cVar3 = func_0x000180285f10(param_1 + 0x9c,lVar1 + 0x70);
  if (cVar3 == '\0') {
    *(int32_t *)(unaff_RBX + 0x98) = 0x40000000;
    if (*(int *)(*(int64_t *)(unaff_RBX + 0x70) + 0x4c) != 0) {
      *(int8_t *)(unaff_RBX + 0x94) = 1;
    }
    FUN_18031b950(*(int64_t *)(unaff_RBX + 0x70),lVar1 + 0x70,0);
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





// 函数: void FUN_18034a328(void)
void FUN_18034a328(void)

{
  int64_t unaff_RBX;
  
  if (*(float *)(unaff_RBX + 0x98) <= 0.0 && *(float *)(unaff_RBX + 0x98) != 0.0) {
    *(int8_t *)(unaff_RBX + 0x94) = 0;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x70) + 0x4c) = 0;
    *(int8_t *)(*(int64_t *)(unaff_RBX + 0x70) + 0x50) = 1;
  }
  return;
}





// 函数: void FUN_18034a360(int64_t param_1)
void FUN_18034a360(int64_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  float *pfVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int32_t uVar6;
  
  pfVar3 = (float *)(*(int64_t *)(param_1 + 0x18) + 0x70);
  puVar4 = (uint64_t *)(param_1 + 0x9c);
  cVar2 = func_0x000180285f10(pfVar3,puVar4,0x3c23d70a);
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
    FUN_18031bc40();
    if (cVar2 != '\0') {
      *(int32_t *)(lVar5 + 0x4c) = uVar6;
    }
    return;
  }
  return;
}





// 函数: void FUN_18034a3c0(int64_t param_1,int64_t param_2)
void FUN_18034a3c0(int64_t param_1,int64_t param_2)

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
    FUN_18031bc40();
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
  FUN_1803179d0(lVar1 + 0x60c10,1);
  return;
}





// 函数: void FUN_18034a3f3(uint64_t param_1,int64_t param_2)
void FUN_18034a3f3(uint64_t param_1,int64_t param_2)

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
        FUN_18031bc40();
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
  FUN_1803179d0(unaff_RBP + 0x60c10,1);
  return;
}





// 函数: void FUN_18034a501(void)
void FUN_18034a501(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034a520(uint64_t param_1)
void FUN_18034a520(uint64_t param_1)

{
  int8_t auStack_2a8 [32];
  int32_t uStack_288;
  void **appuStack_280 [2];
  uint64_t uStack_270;
  void *apuStack_268 [11];
  int32_t uStack_210;
  void *puStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [72];
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [72];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_270 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2a8;
  uStack_288 = 0;
  puStack_208 = &memory_allocator_3480_ptr;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 8;
  strcpy_s(auStack_1f0,0x40,&processed_var_8280_ptr);
  SystemCommunicationProcessor(apuStack_268,&puStack_208);
  uStack_210 = 3;
  uStack_288 = 1;
  MathOptimizationEngine0(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &system_state_ptr;
  puStack_208 = &system_state_ptr;
  puStack_1a8 = &memory_allocator_3480_ptr;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0x13;
  strcpy_s(auStack_190,0x40,&processed_var_6464_ptr);
  SystemCommunicationProcessor(apuStack_268,&puStack_1a8);
  uStack_210 = 3;
  uStack_288 = 2;
  MathOptimizationEngine0(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &system_state_ptr;
  puStack_1a8 = &system_state_ptr;
  puStack_148 = &memory_allocator_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0x11;
  strcpy_s(auStack_130,0x40,&processed_var_6440_ptr);
  SystemCommunicationProcessor(apuStack_268,&puStack_148);
  uStack_210 = 2;
  uStack_288 = 4;
  MathOptimizationEngine0(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xf;
  strcpy_s(auStack_d0,0x40,&processed_var_6424_ptr);
  SystemCommunicationProcessor(apuStack_268,&puStack_e8);
  uStack_210 = 2;
  uStack_288 = 8;
  MathOptimizationEngine0(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 9;
  strcpy_s(auStack_70,0x40,&processed_var_6408_ptr);
  SystemCommunicationProcessor(apuStack_268,&puStack_88);
  uStack_210 = 5;
  uStack_288 = 0x10;
  MathOptimizationEngine0(param_1,appuStack_280,apuStack_268);
  uStack_288 = 0;
  appuStack_280[0] = apuStack_268;
  apuStack_268[0] = &system_state_ptr;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_2a8);
}



uint64_t * FUN_18034a890(uint64_t *param_1,uint64_t param_2)

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



// 函数: void FUN_18034a930(uint64_t *param_1)
void FUN_18034a930(uint64_t *param_1)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *puStack_a0;
  uint64_t *puStack_98;
  int32_t uStack_90;
  uint64_t uStack_88;
  
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
  puStack_a0 = &system_data_buffer_ptr;
  uStack_88 = 0;
  puStack_98 = (uint64_t *)0x0;
  uStack_90 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_98 = puVar3;
  uVar2 = CoreEngineSystemCleanup(puVar3);
  uStack_88 = CONCAT44(uStack_88._4_4_,uVar2);
  *puVar3 = 0x6d614e2068746150;
  *(int16_t *)(puVar3 + 1) = 0x65;
  uStack_90 = 9;
  SystemNetwork_Processor(param_1,&puStack_a0,puVar1,0,uVar4);
  puStack_a0 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034abd0(uint64_t param_1)
void FUN_18034abd0(uint64_t param_1)

{
  int8_t auStack_1e8 [32];
  int32_t uStack_1c8;
  void **appuStack_1c0 [2];
  uint64_t uStack_1b0;
  void *apuStack_1a8 [11];
  int32_t uStack_150;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  uStack_1c8 = 0;
  puStack_148 = &memory_allocator_3480_ptr;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 9;
  strcpy_s(auStack_130,0x40,&system_data_d578);
  SystemCommunicationProcessor(apuStack_1a8,&puStack_148);
  uStack_150 = 0;
  uStack_1c8 = 1;
  MathOptimizationEngine0(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &system_state_ptr;
  puStack_148 = &system_state_ptr;
  puStack_e8 = &memory_allocator_3480_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 5;
  strcpy_s(auStack_d0,0x40,&system_data_d570);
  SystemCommunicationProcessor(apuStack_1a8,&puStack_e8);
  uStack_150 = 1;
  uStack_1c8 = 2;
  MathOptimizationEngine0(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x16;
  strcpy_s(auStack_70,0x40,&system_data_d558);
  SystemCommunicationProcessor(apuStack_1a8,&puStack_88);
  uStack_150 = 1;
  uStack_1c8 = 4;
  MathOptimizationEngine0(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &system_state_ptr;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_1e8);
}





// 函数: void FUN_18034adf0(int64_t param_1,float param_2,uint64_t param_3,uint64_t param_4)
void FUN_18034adf0(int64_t param_1,float param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  float fVar4;
  double dVar5;
  int64_t *plStackX_8;
  int8_t auStack_60 [88];
  
  *(double *)(param_1 + 0xa0) =
       (double)param_2 * *(double *)(param_1 + 0x90) + *(double *)(param_1 + 0xa0);
  plVar2 = (int64_t *)
           FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,&plStackX_8,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  lVar1 = *plVar2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (lVar1 != 0) {
    fVar4 = (float)FUN_180466420(lVar1);
    dVar5 = *(double *)(param_1 + 0xa0);
    if ((double)fVar4 < dVar5) {
      *(uint64_t *)(param_1 + 0xa0) = 0;
      dVar5 = 0.0;
    }
    uVar3 = FUN_180466700(lVar1,auStack_60,(float)dVar5);
    NetworkProtocol_Transmitter(*(uint64_t *)(param_1 + 0x18),uVar3);
  }
  return;
}



uint64_t * FUN_18034aec0(uint64_t *param_1,uint64_t param_2)

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
  FUN_180362cf0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x178);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034af90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18034af90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int8_t auStack_48 [64];
  
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
    uStack_88 = *(uint64_t *)(lVar2 + 0x70);
    uStack_80 = *(uint64_t *)(lVar2 + 0x78);
    uStack_78 = *(int32_t *)(lVar2 + 0x80);
    uStack_74 = *(int32_t *)(lVar2 + 0x84);
    uStack_70 = *(int32_t *)(lVar2 + 0x88);
    uStack_6c = *(int32_t *)(lVar2 + 0x8c);
    uStack_68 = *(int32_t *)(lVar2 + 0x90);
    uStack_64 = *(int32_t *)(lVar2 + 0x94);
    uStack_60 = *(int32_t *)(lVar2 + 0x98);
    uStack_5c = *(int32_t *)(lVar2 + 0x9c);
    lVar2 = FUN_1804664b0(*(int64_t *)(param_1 + 0x170),auStack_48,render_system_data_memory + 0x1b8,param_4,
                          uVar3);
    uStack_58 = *(int32_t *)(lVar2 + 0x30);
    uStack_54 = *(int32_t *)(lVar2 + 0x34);
    uStack_50 = *(int32_t *)(lVar2 + 0x38);
    uStack_4c = *(int32_t *)(lVar2 + 0x3c);
    NetworkProtocol_Transmitter(*(uint64_t *)(param_1 + 0x18),&uStack_88);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034b050(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18034b050(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int8_t auStack_48 [64];
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180362ef0();
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
    uStack_88 = *(uint64_t *)(lVar2 + 0x70);
    uStack_80 = *(uint64_t *)(lVar2 + 0x78);
    uStack_78 = *(int32_t *)(lVar2 + 0x80);
    uStack_74 = *(int32_t *)(lVar2 + 0x84);
    uStack_70 = *(int32_t *)(lVar2 + 0x88);
    uStack_6c = *(int32_t *)(lVar2 + 0x8c);
    uStack_68 = *(int32_t *)(lVar2 + 0x90);
    uStack_64 = *(int32_t *)(lVar2 + 0x94);
    uStack_60 = *(int32_t *)(lVar2 + 0x98);
    uStack_5c = *(int32_t *)(lVar2 + 0x9c);
    lVar2 = FUN_1804664b0(*(int64_t *)(param_1 + 0x170),auStack_48,render_system_data_memory + 0x1b8,param_4,
                          uVar3);
    uStack_58 = *(int32_t *)(lVar2 + 0x30);
    uStack_54 = *(int32_t *)(lVar2 + 0x34);
    uStack_50 = *(int32_t *)(lVar2 + 0x38);
    uStack_4c = *(int32_t *)(lVar2 + 0x3c);
    NetworkProtocol_Transmitter(*(uint64_t *)(param_1 + 0x18),&uStack_88);
  }
  return;
}





// 函数: void FUN_18034b120(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18034b120(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t *aplStackX_10 [3];
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180362e30();
  puVar2 = (uint64_t *)
           FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_10,
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





// 函数: void FUN_18034b1a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18034b1a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t *aplStackX_10 [3];
  
  puVar3 = (uint64_t *)
           FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_10,
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





// 函数: void FUN_18034b220(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18034b220(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

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
               FUN_180389090(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x2970,
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



// 函数: void FUN_18034b2c0(uint64_t *param_1)
void FUN_18034b2c0(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puStack_b8;
  uint64_t *puStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar2 = param_1;
  SystemCore_SyncController();
  *puVar2 = &processed_var_7952_ptr;
  DataStructureManager(puVar2 + 0xe,0x20,4,FUN_180627850,SystemValidator);
  DataStructureManager(param_1 + 0x1e,0x20,4,FUN_180627850,SystemValidator);
  param_1[0x2f] = 0;
  puStack_b8 = &system_data_buffer_ptr;
  uStack_a0 = 0;
  puStack_b0 = (uint64_t *)0x0;
  uStack_a8 = 0;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_b0 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
  *puVar2 = 0x614d72656d6d7553;
  *(int32_t *)(puVar2 + 1) = 0x69726574;
  *(int16_t *)((int64_t)puVar2 + 0xc) = 0x6c61;
  *(int8_t *)((int64_t)puVar2 + 0xe) = 0;
  uStack_a8 = 0xe;
  SystemNetwork_Processor(param_1,&puStack_b8,param_1 + 0xe,0);
  puStack_b8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



uint64_t * FUN_18034b610(uint64_t *param_1,uint64_t param_2)

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





// 函数: void FUN_18034b6c0(int64_t param_1)
void FUN_18034b6c0(int64_t param_1)

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
  uint64_t uStack_20;
  int32_t uStack_18;
  int64_t *plVar3;
  
  plStack_30 = (int64_t *)0x0;
  lStack_28 = 0;
  plVar5 = (int64_t *)0x0;
  uStack_20 = 0;
  uStack_18 = 3;
  FUN_1802e93a0(*(uint64_t *)(param_1 + 0x18),&plStack_30);
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
      FUN_18034bd70(param_1,*(int32_t *)(param_1 + 0x170));
    }
  }
  if (plStack_30 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_18034b8b0(int64_t param_1)
void FUN_18034b8b0(int64_t param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20) + 0x3054);
  if (iVar1 != *(int *)(param_1 + 0x170)) {
    FUN_18034bd70(param_1,iVar1);
    *(int *)(param_1 + 0x170) = iVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



