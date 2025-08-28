
// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger



// 03_rendering_part346.c - 7 个函数

// 函数: void FUN_180452630(int64_t param_1,int64_t param_2,int32_t param_3)
void FUN_180452630(int64_t param_1,int64_t param_2,int32_t param_3)

{
  byte bVar1;
  bool bVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int8_t *puVar13;
  byte *pbVar14;
  void *puVar15;
  int64_t lVar16;
  int8_t *puVar17;
  int32_t *puVar18;
  int iVar19;
  uint64_t *puVar20;
  int8_t auStack_298 [32];
  int32_t uStack_278;
  void *puStack_270;
  int8_t uStack_268;
  int8_t uStack_260;
  int32_t uStack_258;
  int64_t lStack_250;
  int iStack_248;
  void *puStack_240;
  int32_t *puStack_238;
  int iStack_230;
  uint64_t uStack_228;
  void *puStack_220;
  int8_t *puStack_218;
  int32_t uStack_210;
  int32_t uStack_208;
  int32_t uStack_204;
  void *puStack_200;
  uint64_t *puStack_1f8;
  int32_t uStack_1f0;
  uint64_t uStack_1e8;
  int64_t lStack_1e0;
  int64_t lStack_1d8;
  uint64_t uStack_1d0;
  int16_t uStack_1c8;
  int8_t uStack_1c6;
  int32_t uStack_1c0;
  void *puStack_1b8;
  uint64_t *puStack_1b0;
  int32_t uStack_1a8;
  uint64_t uStack_1a0;
  void *puStack_198;
  byte *pbStack_190;
  int iStack_188;
  int32_t uStack_180;
  int64_t lStack_178;
  void *puStack_170;
  void *puStack_168;
  int32_t uStack_158;
  void *puStack_150;
  int64_t lStack_148;
  int32_t uStack_138;
  uint64_t uStack_130;
  int64_t lStack_128;
  void *puStack_118;
  int64_t lStack_110;
  int32_t uStack_100;
  uint64_t uStack_f8;
  void *puStack_e8;
  int8_t *puStack_e0;
  int iStack_d8;
  int8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  if (param_1 == 0) {
    return;
  }
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_298;
  uStack_258 = 0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c6 = 3;
  lStack_250 = param_2;
  uStack_1c0 = param_3;
  lStack_178 = param_1;
  CoreMemoryPoolValidator();
  puVar11 = (uint64_t *)render_system_data_memory[2];
  puVar12 = render_system_data_memory;
  if (puVar11 == (uint64_t *)0x0) {
LAB_180452759:
    puVar7 = render_system_data_memory;
  }
  else {
    do {
      if (iStack_188 == 0) {
        bVar2 = false;
        puVar20 = (uint64_t *)puVar11[1];
      }
      else {
        if (*(int *)(puVar11 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar14 = pbStack_190;
          do {
            uVar6 = (uint)pbVar14[puVar11[5] - (int64_t)pbStack_190];
            iVar19 = *pbVar14 - uVar6;
            if (*pbVar14 != uVar6) break;
            pbVar14 = pbVar14 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < iVar19;
          if (iVar19 < 1) {
            puVar20 = (uint64_t *)puVar11[1];
            goto LAB_18045271b;
          }
        }
        puVar20 = (uint64_t *)*puVar11;
      }
LAB_18045271b:
      puVar7 = puVar11;
      if (bVar2) {
        puVar7 = puVar12;
      }
      puVar12 = puVar7;
      puVar11 = puVar20;
    } while (puVar20 != (uint64_t *)0x0);
    if (puVar7 == render_system_data_memory) goto LAB_180452759;
    if (*(int *)(puVar7 + 6) != 0) {
      if (iStack_188 != 0) {
        pbVar14 = (byte *)puVar7[5];
        lVar16 = (int64_t)pbStack_190 - (int64_t)pbVar14;
        do {
          bVar1 = *pbVar14;
          uVar6 = (uint)pbVar14[lVar16];
          if (bVar1 != uVar6) break;
          pbVar14 = pbVar14 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar1 - uVar6) < 1) goto LAB_18045275c;
      }
      goto LAB_180452759;
    }
  }
LAB_18045275c:
  if ((puVar7 == render_system_data_memory) || (iVar19 = *(int *)(puVar7 + 8), iVar19 < 0)) {
    puStack_1b8 = &system_data_buffer_ptr;
    uStack_1a0 = 0;
    puStack_1b0 = (uint64_t *)0x0;
    uStack_1a8 = 0;
    puVar11 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,0x13);
    *(int8_t *)puVar11 = 0;
    puStack_1b0 = puVar11;
    uVar5 = CoreEngineSystemCleanup(puVar11);
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar5);
    *puVar11 = 0x676976616e206f4e;
    puVar11[1] = 0x656d206e6f697461;
    *(int32_t *)(puVar11 + 2) = 0x70206873;
    *(int32_t *)((int64_t)puVar11 + 0x14) = 0x61666572;
    *(int32_t *)(puVar11 + 3) = 0x61772062;
    *(int32_t *)((int64_t)puVar11 + 0x1c) = 0x6f662073;
    *(int32_t *)(puVar11 + 4) = 0x20646e75;
    *(int32_t *)((int64_t)puVar11 + 0x24) = 0x68746977;
    *(int32_t *)(puVar11 + 5) = 0x6d616e20;
    *(int32_t *)((int64_t)puVar11 + 0x2c) = 0x222065;
    uStack_1a8 = 0x2f;
    puStack_200 = &system_data_buffer_ptr;
    uStack_1e8 = 0;
    puStack_1f8 = (uint64_t *)0x0;
    uStack_1f0 = 0;
    uStack_258 = 0x10;
    puVar12 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,0x13);
    *(int8_t *)puVar12 = 0;
    puStack_1f8 = puVar12;
    uVar6 = CoreEngineSystemCleanup(puVar12);
    uVar8 = puVar11[1];
    *puVar12 = *puVar11;
    puVar12[1] = uVar8;
    uVar5 = *(int32_t *)((int64_t)puVar11 + 0x14);
    uVar3 = *(int32_t *)(puVar11 + 3);
    uVar4 = *(int32_t *)((int64_t)puVar11 + 0x1c);
    *(int32_t *)(puVar12 + 2) = *(int32_t *)(puVar11 + 2);
    *(int32_t *)((int64_t)puVar12 + 0x14) = uVar5;
    *(int32_t *)(puVar12 + 3) = uVar3;
    *(int32_t *)((int64_t)puVar12 + 0x1c) = uVar4;
    puVar12[4] = puVar11[4];
    *(int32_t *)(puVar12 + 5) = *(int32_t *)(puVar11 + 5);
    *(int16_t *)((int64_t)puVar12 + 0x2c) = *(int16_t *)((int64_t)puVar11 + 0x2c);
    *(int8_t *)((int64_t)puVar12 + 0x2e) = *(int8_t *)((int64_t)puVar11 + 0x2e);
    uStack_1f0 = 0x2f;
    *(int8_t *)((int64_t)puVar12 + 0x2f) = 0;
    puVar13 = (int8_t *)0x0;
    uStack_1e8 = (uint64_t)uVar6;
    puVar17 = puVar13;
    if (lStack_250 != 0) {
      puVar17 = (int8_t *)0xffffffffffffffff;
      do {
        puVar17 = puVar17 + 1;
      } while (puVar17[lStack_250] != '\0');
    }
    iVar19 = (int)puVar17;
    if (iVar19 < 1) {
      puStack_220 = &system_data_buffer_ptr;
      lStack_250 = 0;
      uStack_208 = 0;
      puStack_218 = (int8_t *)0x0;
      uStack_210 = 0;
      uStack_204 = 0;
      uStack_258 = 0x30;
      if (puVar12 != (uint64_t *)0x0) {
        puVar13 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,0x13);
        *puVar13 = 0;
        puStack_218 = puVar13;
        lStack_250 = CoreEngineSystemCleanup(puVar13);
        uStack_208 = (int32_t)lStack_250;
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar13,puVar12,0x2f);
    }
    if ((iVar19 != -0x2f) && (uVar6 < iVar19 + 0x30U)) {
      uStack_278 = CONCAT31(uStack_278._1_3_,0x13);
      puVar12 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar12,iVar19 + 0x30U,0x10);
      puStack_1f8 = puVar12;
      uVar5 = CoreEngineSystemCleanup(puVar12);
      uStack_1e8 = CONCAT44(uStack_1e8._4_4_,uVar5);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar12 + 0x2f),lStack_250,(int64_t)(iVar19 + 1));
  }
  lVar16 = *(int64_t *)(*system_main_module_state + 0x888);
  if ((uint64_t)(int64_t)iVar19 <
      (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar16 >> 5)) {
    lVar16 = (int64_t)iVar19 * 0x20 + lVar16;
  }
  else {
    lVar16 = MemoryDebugger0();
  }
  uVar8 = CoreEngineDataTransformer(&puStack_118,param_1 + 0x27c8);
  uStack_258 = 1;
  puStack_e8 = &memory_allocator_3432_ptr;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  iStack_d8 = iStack_188;
  pbVar14 = &system_buffer_ptr;
  if (pbStack_190 != (byte *)0x0) {
    pbVar14 = pbStack_190;
  }
  strcpy_s(auStack_d0,0x80,pbVar14);
  puStack_240 = &system_data_buffer_ptr;
  uStack_228 = 0;
  puStack_238 = (int32_t *)0x0;
  iStack_230 = 0;
  puVar9 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  puStack_238 = puVar9;
  lStack_250 = CoreEngineSystemCleanup(puVar9);
  *puVar9 = 0x4d76614e;
  puVar9[1] = 0x50687365;
  puVar9[2] = 0x61666572;
  puVar9[3] = 0x2f7362;
  iStack_230 = 0xf;
  uStack_258 = 3;
  uStack_228._0_4_ = (int)lStack_250;
  UtilitiesSystem_FileHandler(uVar8,&puStack_150,&puStack_240);
  SystemManager_Processor(&puStack_150);
  iStack_248 = 0xf;
  if (0 < iStack_d8) {
    iStack_248 = iStack_d8 + 0xf;
    if ((iStack_248 != 0) && ((uint)lStack_250 < iStack_d8 + 0x10U)) {
      uStack_278 = CONCAT31(uStack_278._1_3_,0x13);
      puVar9 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar9,iStack_d8 + 0x10U,0x10);
      puStack_238 = puVar9;
      lStack_250 = CoreEngineSystemCleanup(puVar9);
      uStack_228._0_4_ = (int32_t)lStack_250;
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar9 + 0xf),puStack_e0,(int64_t)(iStack_d8 + 1));
  }
  if (puVar9 == (int32_t *)0x0) {
    puVar9 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x14,0x13);
    *(int8_t *)puVar9 = 0;
  }
  else {
    if (0x13 < (uint)lStack_250) goto LAB_1804529b8;
    uStack_278 = CONCAT31(uStack_278._1_3_,0x13);
    puVar9 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar9,0x14,0x10);
  }
  puStack_238 = puVar9;
  uStack_228._0_4_ = CoreEngineSystemCleanup(puVar9);
LAB_1804529b8:
  *(int32_t *)((int64_t)puVar9 + 0xf) = 0x6e69622e;
  *(int8_t *)((int64_t)puVar9 + 0x13) = 0;
  iStack_230 = iStack_248 + 4;
  puStack_150 = &system_data_buffer_ptr;
  if (lStack_148 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_148 = 0;
  uStack_138 = 0;
  puStack_150 = &system_state_ptr;
  puVar18 = puVar9;
  if (puVar9 == (int32_t *)0x0) {
    puVar9 = (int32_t *)0x0;
    puVar18 = (int32_t *)&system_buffer_ptr;
  }
  UtilitiesSystem_CacheManager(lVar16,&puStack_170,puVar18);
  uStack_258 = 1;
  puStack_240 = &system_data_buffer_ptr;
  if (puVar9 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar9);
  }
  puStack_238 = (int32_t *)0x0;
  uStack_228 = (uint64_t)uStack_228._4_4_ << 0x20;
  puStack_240 = &system_state_ptr;
  puStack_e8 = &system_state_ptr;
  uStack_258 = 0;
  puStack_118 = &system_data_buffer_ptr;
  if (lStack_110 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_110 = 0;
  uStack_100 = 0;
  puStack_118 = &system_state_ptr;
  uStack_130 = 0;
  lStack_128 = 0;
  puVar15 = &system_buffer_ptr;
  if (puStack_168 != (void *)0x0) {
    puVar15 = puStack_168;
  }
  SystemCore_Validator(&uStack_130,puVar15,&processed_var_4880_ptr);
  lVar16 = lStack_128;
  if (lStack_128 == 0) {
    puVar15 = &system_buffer_ptr;
    if (puStack_168 != (void *)0x0) {
      puVar15 = puStack_168;
    }
    SystemCore_Allocator(&processed_var_408_ptr,puVar15);
  }
  else {
    uVar8 = _ftelli64(lStack_128);
    _fseeki64(lVar16,0,2);
    uVar10 = _ftelli64(lVar16);
    _fseeki64(lVar16,uVar8,0);
    System_BufferManager(&lStack_1e0,uVar10);
    fread(lStack_1d8,1,uVar10,lVar16);
    fclose(lVar16);
    lStack_128 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  lStack_1d8 = lStack_1e0 + 4;
  uStack_260 = 0;
  uStack_268 = 0;
  puStack_270 = &system_data_0300;
  uStack_278 = uStack_1c0;
  FUN_18038f1b0(lStack_178 + 0x2a68,&lStack_1e0,lStack_178 + 0x28c8,1);
  puStack_170 = &system_data_buffer_ptr;
  if (puStack_168 == (void *)0x0) {
    puStack_168 = (void *)0x0;
    uStack_158 = 0;
    puStack_170 = &system_state_ptr;
    puStack_198 = &system_data_buffer_ptr;
    if (pbStack_190 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pbStack_190 = (byte *)0x0;
    uStack_180 = 0;
    puStack_198 = &system_state_ptr;
    if (((char)uStack_1c8 == '\0') && (lStack_1e0 != 0)) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_298);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



uint64_t FUN_180452f40(uint64_t param_1,int32_t *param_2,int32_t *param_3,int32_t param_4
                       )

{
  int32_t uVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_1 != 0) {
    uStack_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    param_1 = FUN_180455a30(param_1 + 0x2a68,&uStack_18,param_1 + 0x28c8,
                            *(int32_t *)(param_1 + 0x60300),0,param_4);
    if (param_1 != 0) {
      uVar1 = *(int32_t *)(param_1 + 0x130);
      *param_3 = uVar1;
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  return param_1 & 0xffffffffffffff00;
}



bool FUN_180452fa0(int64_t param_1,int64_t param_2,int64_t param_3,int32_t param_4,
                  float *param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 1e+30;
  *param_5 = 1e+30;
  if (param_1 != 0) {
    if (*(int64_t *)(param_1 + 0x2ee8) - *(int64_t *)(param_1 + 12000) >> 3 == 0) {
      fVar3 = *(float *)(param_2 + 0x1c) - *(float *)(param_3 + 0x1c);
      fVar4 = *(float *)(param_2 + 0x18) - *(float *)(param_3 + 0x18);
      fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    }
    else {
      uVar1 = SystemCore_ErrorHandler(param_3);
      uVar2 = SystemCore_ErrorHandler(param_2);
      fVar3 = (float)FUN_180392600(param_1 + 0x2a68,uVar2,uVar1,param_2 + 0x18,
                                   (float *)(param_3 + 0x18),param_4,0x49742400);
    }
    *param_5 = fVar3;
  }
  return fVar3 < 1e+30;
}



bool FUN_180452fe6(uint64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t in_RAX;
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t unaff_RDI;
  float *unaff_R14;
  int64_t unaff_R15;
  float extraout_XMM0_Da;
  float fVar3;
  float fVar4;
  
  if (in_RAX >> 3 == 0) {
    fVar3 = *(float *)(param_2 + 0x1c) - *(float *)(param_3 + 0x1c);
    fVar4 = *(float *)(param_2 + 0x18) - *(float *)(param_3 + 0x18);
    fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  }
  else {
    uVar1 = SystemCore_ErrorHandler(param_3);
    uVar2 = SystemCore_ErrorHandler();
    FUN_180392600(unaff_RDI + 0x2a68,uVar2,uVar1,unaff_R15 + 0x18,(float *)(param_3 + 0x18));
    fVar3 = extraout_XMM0_Da;
  }
  *unaff_R14 = fVar3;
  return fVar3 < 1e+30;
}



bool FUN_180453003(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t unaff_RDI;
  float *unaff_R14;
  int64_t unaff_R15;
  float fVar3;
  
  uVar1 = SystemCore_ErrorHandler();
  uVar2 = SystemCore_ErrorHandler();
  fVar3 = (float)FUN_180392600(unaff_RDI + 0x2a68,uVar2,uVar1,unaff_R15 + 0x18);
  *unaff_R14 = fVar3;
  return fVar3 < 1e+30;
}



bool FUN_18045304e(uint64_t param_1,int64_t param_2)

{
  float *unaff_RBP;
  float *unaff_R14;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 0x1c) - unaff_RBP[1];
  fVar2 = *(float *)(param_2 + 0x18) - *unaff_RBP;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *unaff_R14 = fVar1;
  return fVar1 < 1e+30;
}



bool FUN_180453084(float param_1)

{
  return param_1 < 1e+30;
}



uint64_t FUN_1804530a0(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,
                       int32_t param_5)

{
  uint64_t in_RAX;
  uint64_t uVar1;
  float fStackX_8;
  float fStackX_c;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  if ((param_1 != 0) && (param_2 != -1)) {
    uStack_10._0_4_ = (float)param_4;
    uStack_18._0_4_ = (float)param_3;
    fStackX_8 = (float)uStack_10 - (float)uStack_18;
    uStack_10._4_4_ = (float)((uint64_t)param_4 >> 0x20);
    uStack_18._4_4_ = (float)((uint64_t)param_3 >> 0x20);
    fStackX_c = uStack_10._4_4_ - uStack_18._4_4_;
    uStack_18 = param_3;
    uStack_10 = param_4;
    uVar1 = FUN_1803944c0(param_1 + 0x2a68,
                          *(uint64_t *)(*(int64_t *)(param_1 + 12000) + (int64_t)param_2 * 8),0,
                          &uStack_18,&fStackX_8,0,param_5,0,0,0,0);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



uint64_t FUN_180453140(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                       int32_t param_5)

{
  uint64_t in_RAX;
  uint64_t uVar1;
  float fStackX_8;
  float fStackX_c;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  if (param_1 != 0) {
    uStack_10._0_4_ = (float)param_4;
    uStack_18._0_4_ = (float)param_3;
    fStackX_8 = (float)uStack_10 - (float)uStack_18;
    uStack_10._4_4_ = (float)((uint64_t)param_4 >> 0x20);
    uStack_18._4_4_ = (float)((uint64_t)param_3 >> 0x20);
    fStackX_c = uStack_10._4_4_ - uStack_18._4_4_;
    uStack_18 = param_3;
    uStack_10 = param_4;
    uVar1 = FUN_1803944c0(param_1 + 0x2a68,fStackX_c,0,&uStack_18,&fStackX_8,0,param_5,0,0,0,0);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



uint64_t FUN_1804531d0(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint64_t *puVar4;
  float fStackX_8;
  float fStackX_c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int64_t lStack_58;
  int8_t auStack_50 [80];
  
  if ((param_1 != 0) && (param_2 != -1)) {
    uStack_60._4_4_ = (float)((uint64_t)param_4 >> 0x20);
    fVar2 = uStack_60._4_4_;
    uStack_60._0_4_ = (float)param_4;
    fVar1 = (float)uStack_60;
    uStack_68._4_4_ = (float)((uint64_t)param_3 >> 0x20);
    fStackX_c = uStack_60._4_4_ - uStack_68._4_4_;
    uStack_68._0_4_ = (float)param_3;
    fStackX_8 = (float)uStack_60 - (float)uStack_68;
    lStack_58 = 0;
    uStack_68 = param_3;
    uStack_60 = param_4;
    cVar3 = FUN_1803944c0(param_1 + 0x2a68,
                          *(uint64_t *)(*(int64_t *)(param_1 + 12000) + (int64_t)param_2 * 8),0,
                          &uStack_68,&fStackX_8,0,0,0,0,0,&lStack_58);
    if ((cVar3 == '\0') && (lStack_58 != 0)) {
      fStackX_8 = fVar1 - (float)uStack_68;
      fStackX_c = fVar2 - uStack_68._4_4_;
      puVar4 = (uint64_t *)FUN_18038bc40(lStack_58,auStack_50,&uStack_68,&fStackX_8);
      param_4 = *puVar4;
    }
  }
  return param_4;
}



float * FUN_180453300(float *param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  uint64_t uVar4;
  float fVar5;
  float fVar6;
  int64_t lStackX_8;
  float fStackX_10;
  float fStackX_14;
  uint64_t uStack_58;
  float fStack_50;
  float fStack_4c;
  
  if (param_2 != 0) {
    pfVar1 = (float *)(param_3 + 0x18);
    uStack_58 = param_4;
    uVar4 = SystemCore_ErrorHandler(param_3);
    fVar6 = (float)uStack_58;
    fVar2 = uStack_58._4_4_;
    fStackX_10 = (float)uStack_58 - *pfVar1;
    lStackX_8 = 0;
    fStackX_14 = uStack_58._4_4_ - *(float *)(param_3 + 0x1c);
    cVar3 = FUN_1803944c0(param_2 + 0x2a68,uVar4,0,pfVar1,&fStackX_10,0,0,0,0,0,&lStackX_8);
    if (cVar3 != '\0') {
      fVar5 = (float)func_0x00018038d2f0(lStackX_8,&uStack_58);
      *param_1 = fVar6;
      param_1[1] = fVar2;
      param_1[2] = fVar5;
      param_1[3] = 3.4028235e+38;
      return param_1;
    }
    if (lStackX_8 != 0) {
      fStackX_10 = fVar6 - *pfVar1;
      fStackX_14 = fVar2 - *(float *)(param_3 + 0x1c);
      FUN_18038bc40(lStackX_8,&fStack_50,pfVar1,&fStackX_10);
      fVar6 = (float)func_0x00018038d2f0(lStackX_8,&fStack_50);
      *param_1 = fStack_50;
      param_1[1] = fStack_4c;
      param_1[2] = fVar6;
      param_1[3] = 3.4028235e+38;
      return param_1;
    }
  }
  param_1[0] = NAN;
  param_1[1] = NAN;
  param_1[2] = NAN;
  param_1[3] = NAN;
  return param_1;
}



uint64_t FUN_1804534d0(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  
  if (param_1 != 0) {
    if (*(int64_t *)(param_1 + 0x2ee8) - *(int64_t *)(param_1 + 12000) >> 3 == 0) {
      return 1;
    }
    lVar1 = SystemCore_ErrorHandler(param_2);
    if ((lVar1 != 0) && (lVar1 = SystemCore_ErrorHandler(param_3), lVar1 != 0)) {
      lVar1 = SystemCore_ErrorHandler(param_3);
      lVar2 = SystemCore_ErrorHandler(param_2);
      if (*(int *)(lVar2 + 0x128) == *(int *)(lVar1 + 0x128)) {
        return 1;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180453580(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180453580(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puStack_40;
  uint64_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  if (param_1 != 0) {
    puStack_40 = &system_data_buffer_ptr;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,0xfffffffffffffffe);
    *(int8_t *)puVar2 = 0;
    puStack_38 = puVar2;
    uVar1 = CoreEngineSystemCleanup(puVar2);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
    *puVar2 = 0x6c705f64756f6c63;
    *(int32_t *)(puVar2 + 1) = 0x656e61;
    uStack_30 = 0xb;
    FUN_1801a9dd0(param_1,&puStack_40);
    puStack_40 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  return;
}





// 函数: void FUN_180453750(int64_t param_1,int64_t *param_2)
void FUN_180453750(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  if ((param_1 != 0) && (param_2 != (int64_t *)0x0)) {
    (**(code **)(*param_2 + 0x28))(param_2);
    plVar1 = *(int64_t **)(param_1 + 0x3b8);
    *(int64_t **)(param_1 + 0x3b8) = param_2;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}



uint64_t FUN_1804537b0(int64_t param_1)

{
  int64_t *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (int64_t *)FUN_1801b4a60();
    return plVar1[1] - *plVar1 >> 3 & 0xffffffff;
  }
  return 0;
}



uint64_t FUN_1804537e0(int64_t param_1)

{
  int64_t *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (int64_t *)FUN_1801b4cd0();
    return plVar1[1] - *plVar1 >> 3 & 0xffffffff;
  }
  return 0;
}



uint64_t FUN_180453810(int64_t param_1,int param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  
  if (param_1 != 0) {
    plVar1 = (int64_t *)FUN_1801b4a60();
    puVar2 = (uint64_t *)(*plVar1 + (int64_t)param_2 * 8);
    if ((int)(plVar1[1] - *plVar1 >> 3) <= param_2) {
      puVar2 = (uint64_t *)&system_data_f0c8;
    }
    return *puVar2;
  }
  return 0;
}



uint64_t FUN_180453860(int64_t param_1,int param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  
  if (param_1 != 0) {
    plVar1 = (int64_t *)FUN_1801b4cd0();
    puVar2 = (uint64_t *)(*plVar1 + (int64_t)param_2 * 8);
    if ((int)(plVar1[1] - *plVar1 >> 3) <= param_2) {
      puVar2 = (uint64_t *)&system_data_f0c8;
    }
    return *puVar2;
  }
  return 0;
}



int64_t * FUN_1804538b0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int32_t uStack_34;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_18;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = CONCAT44(uStack_34,0xffffffff);
    return param_1;
  }
  uVar2 = CoreMemoryPoolValidator(&puStack_30,param_3,param_3,param_4,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_180389090(param_2 + 0x2970,&plStackX_8,uVar2);
  plVar3 = (int64_t *)*plVar3;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 == 0) {
    lStack_28 = 0;
    uStack_18 = 0;
    puStack_30 = &system_state_ptr;
    if (plVar3 == (int64_t *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    *param_1 = (int64_t)plVar3;
    param_1[1] = CONCAT44(uStack_34,uVar1);
    return param_1;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_1804539b0(int64_t param_1)
void FUN_1804539b0(int64_t param_1)

{
  byte *pbVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  int64_t *plVar7;
  uint uVar8;
  int64_t lVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  void *puStack_40;
  int64_t lStack_38;
  uint64_t uVar9;
  
  if (param_1 != 0) {
    lVar4 = CoreMemoryPoolValidator(&puStack_40);
    uVar9 = 0;
    plVar12 = *(int64_t **)(param_1 + 0x2978);
    lVar10 = *(int64_t *)(param_1 + 0x2970);
    if ((int64_t)plVar12 - lVar10 >> 3 != 0) {
      uVar13 = uVar9;
      do {
        iVar2 = *(int *)(*(int64_t *)(uVar13 + lVar10) + 0x88);
        if ((iVar2 == *(int *)(lVar4 + 0x10)) && (iVar2 != 0)) {
          pbVar5 = *(byte **)(*(int64_t *)(uVar13 + lVar10) + 0x80);
          lVar11 = *(int64_t *)(lVar4 + 8) - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar11;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
LAB_180453a73:
          if (iVar6 != 0) goto LAB_180453a75;
          plVar7 = (int64_t *)(lVar10 + (int64_t)(int)uVar9 * 8);
          plVar3 = plVar7 + 1;
          if ((plVar3 < plVar12) && (lVar10 = (int64_t)plVar12 - (int64_t)plVar3 >> 3, 0 < lVar10)
             ) {
            do {
              plVar12 = plVar7 + 1;
              lVar4 = *plVar12;
              *plVar12 = 0;
              plVar3 = (int64_t *)*plVar7;
              *plVar7 = lVar4;
              if (plVar3 != (int64_t *)0x0) {
                (**(code **)(*plVar3 + 0x38))();
              }
              lVar10 = lVar10 + -1;
              plVar7 = plVar12;
            } while (0 < lVar10);
            plVar12 = *(int64_t **)(param_1 + 0x2978);
          }
          *(int64_t **)(param_1 + 0x2978) = plVar12 + -1;
          plVar12 = (int64_t *)plVar12[-1];
          if (plVar12 != (int64_t *)0x0) {
            (**(code **)(*plVar12 + 0x38))();
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x10);
        if (iVar2 == 0) goto LAB_180453a73;
LAB_180453a75:
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
        uVar13 = uVar13 + 8;
        plVar12 = *(int64_t **)(param_1 + 0x2978);
        lVar10 = *(int64_t *)(param_1 + 0x2970);
      } while ((uint64_t)(int64_t)(int)uVar8 < (uint64_t)((int64_t)plVar12 - lVar10 >> 3));
    }
    puStack_40 = &system_data_buffer_ptr;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180453b60(int64_t param_1)
void FUN_180453b60(int64_t param_1)

{
  int64_t *plVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  byte *pbVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t *plStackX_8;
  uint64_t uVar11;
  void *puStack_30;
  int64_t lStack_28;
  
  if (param_1 != 0) {
    uVar11 = 0xfffffffffffffffe;
    plVar1 = (int64_t *)(param_1 + 0x2970);
    lVar5 = CoreMemoryPoolValidator(&puStack_30);
    iVar10 = 0;
    lVar8 = *plVar1;
    if (*(int64_t *)(param_1 + 0x2978) - lVar8 >> 3 != 0) {
      iVar3 = *(int *)(lVar5 + 0x10);
      lVar9 = 0;
      do {
        iVar4 = *(int *)(*(int64_t *)(lVar9 + lVar8) + 0x88);
        iVar7 = iVar3;
        if (iVar4 == iVar3) {
          if (iVar4 != 0) {
            pbVar6 = *(byte **)(*(int64_t *)(lVar9 + lVar8) + 0x80);
            lVar8 = *(int64_t *)(lVar5 + 8) - (int64_t)pbVar6;
            do {
              pbVar2 = pbVar6 + lVar8;
              iVar7 = (uint)*pbVar6 - (uint)*pbVar2;
              if (iVar7 != 0) break;
              pbVar6 = pbVar6 + 1;
            } while (*pbVar2 != 0);
          }
LAB_180453bef:
          if (iVar7 == 0) goto LAB_180453c6a;
        }
        else if (iVar4 == 0) goto LAB_180453bef;
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + 8;
        lVar8 = *plVar1;
      } while ((uint64_t)(int64_t)iVar10 <
               (uint64_t)(*(int64_t *)(param_1 + 0x2978) - lVar8 >> 3));
    }
    uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,600,8,3,uVar11);
    plStackX_8 = (int64_t *)FUN_180465210(uVar11,lVar5,*(uint64_t *)(param_1 + 0x2990));
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
    }
    FUN_1800b87c0(plVar1,&plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
LAB_180453c6a:
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}





// 函数: void FUN_180453cb0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180453cb0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  uint64_t uVar4;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_18;
  
  if (param_1 != 0) {
    uVar4 = 0xfffffffffffffffe;
    uVar2 = CoreMemoryPoolValidator(&puStack_30);
    plVar3 = (int64_t *)FUN_180389090(param_1 + 0x2970,&plStackX_8,uVar2,param_4,uVar4);
    lVar1 = *plVar3;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_28 = 0;
    uStack_18 = 0;
    puStack_30 = &system_state_ptr;
    if (lVar1 != 0) {
      FUN_1804661f0(lVar1,param_3,0);
    }
  }
  return;
}





// 函数: void FUN_180453d60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180453d60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int64_t lVar2;
  void *puVar3;
  uint64_t uVar4;
  void *puStack_30;
  int64_t lStack_28;
  
  if (param_1 != 0) {
    uVar4 = 0xfffffffffffffffe;
    lVar2 = CoreMemoryPoolValidator(&puStack_30);
    pcVar1 = *(code **)(*(int64_t *)(param_1 + 0x4d8) + 0x10);
    puVar3 = &system_buffer_ptr;
    if (*(void **)(lVar2 + 8) != (void *)0x0) {
      puVar3 = *(void **)(lVar2 + 8);
    }
    (*pcVar1)((int64_t *)(param_1 + 0x4d8),puVar3,pcVar1,param_4,uVar4);
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



