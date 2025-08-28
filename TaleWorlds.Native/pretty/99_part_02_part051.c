
// $fun 的语义化别名
#define $alias_name $fun

/* SystemScheduler - RenderingSystem_ResourceBinder */
#define RenderingSystem_ResourceBinder SystemScheduler


/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor



// 99_part_02_part051.c - 18 个函数

// 函数: void FUN_1801bbfb0(int param_1,int param_2,int64_t *param_3)
void FUN_1801bbfb0(int param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int32_t auStackX_18 [2];
  int64_t lStackX_20;
  int64_t alStack_a8 [2];
  int64_t **pplStack_98;
  int64_t *aplStack_90 [2];
  code *pcStack_80;
  code *pcStack_78;
  int64_t lStack_70;
  int64_t *plStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  alStack_a8[1] = 0xfffffffffffffffe;
  lVar3 = (int64_t)param_1;
  if (lVar3 < param_2) {
    lVar4 = lVar3 * 8 + 0x118;
    lVar3 = param_2 - lVar3;
    do {
      alStack_a8[0] = *param_3;
      lStack_70 = alStack_a8[0] + 0x570;
      lStackX_20 = *(int64_t *)(lVar4 + *(int64_t *)(*(int64_t *)param_3[1] + 0x3580));
      uStack_50 = lStackX_20 + 0x30;
      uStack_60 = ((int64_t)*(int *)(*(int64_t *)(*(int64_t *)param_3[1] + 0x3580) + 0x628) *
                   0x80 + (int64_t)*(int *)(lStackX_20 + 0x9a28)) * 0x20 + system_system_data_config;
      lVar1 = *(int64_t *)(alStack_a8[0] + 0x610);
      lVar2 = *(int64_t *)(alStack_a8[0] + 0x608);
      auStackX_18[0] = 0;
      if ((*(uint *)(lStackX_20 + 4) & 0x100000) != 0) {
        auStackX_18[0] = *(int32_t *)(lStackX_20 + 0x174);
      }
      pplStack_98 = aplStack_90;
      plStack_68 = &lStackX_20;
      uStack_58 = alStack_a8;
      uStack_48 = auStackX_18;
      pcStack_80 = FUN_180254410;
      pcStack_78 = FUN_1802542a0;
      aplStack_90[0] = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags);
      *aplStack_90[0] = lStack_70;
      aplStack_90[0][1] = (int64_t)plStack_68;
      *(int32_t *)(aplStack_90[0] + 2) = (int32_t)uStack_60;
      *(int32_t *)((int64_t)aplStack_90[0] + 0x14) = uStack_60._4_4_;
      *(int32_t *)(aplStack_90[0] + 3) = (int32_t)uStack_58;
      *(int32_t *)((int64_t)aplStack_90[0] + 0x1c) = uStack_58._4_4_;
      *(int32_t *)(aplStack_90[0] + 4) = (int32_t)uStack_50;
      *(int32_t *)((int64_t)aplStack_90[0] + 0x24) = uStack_50._4_4_;
      *(int32_t *)(aplStack_90[0] + 5) = (int32_t)uStack_48;
      *(int32_t *)((int64_t)aplStack_90[0] + 0x2c) = uStack_48._4_4_;
      SystemCore_DataTransformer((int32_t)uStack_50,0,(int)((lVar1 - lVar2) / 0xbc),0x80,0xffffffffffffffff,
                    aplStack_90);
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801bc1b0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c02e80;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}






// 函数: void FUN_1801bc2d0(int64_t *param_1)
void FUN_1801bc2d0(int64_t *param_1)

{
  int64_t lVar1;
  
  if (*(char *)(*param_1 + 0x48) == '\0') {
    lVar1 = param_1[1];
    FUN_1801aa780(lVar1);
    *(int64_t *)(lVar1 + 0x2f90) = lVar1;
  }
  return;
}






// 函数: void FUN_1801bc2dd(int64_t param_1)
void FUN_1801bc2dd(int64_t param_1)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  FUN_1801aa780(lVar1);
  *(int64_t *)(lVar1 + 0x2f90) = lVar1;
  return;
}






// 函数: void FUN_1801bc2fa(void)
void FUN_1801bc2fa(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801bc3a0(int64_t *param_1)
void FUN_1801bc3a0(int64_t *param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  FUN_1801aaf60(*param_1,0);
  if ((system_data_2847 == '\0') && (*(int *)(*param_1 + 0x60a10) != 1)) {
    FUN_1803b6f20(*(uint64_t *)(*param_1 + 0x60b80));
  }
  if (*(int *)(*param_1 + 0x60a10) == 1) {
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1e0,8,3);
    uVar2 = FUN_1802ca920(uVar2);
    *(uint64_t *)(*param_1 + 0x358) = uVar2;
  }
  SystemCore_FileSystem(system_context_ptr);
  if ((*(char *)(param_1[1] + 0x46) == '\0') &&
     (plVar1 = *(int64_t **)(system_operation_state + 0x1860), plVar1 != (int64_t *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x0001801bc445. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x28))(plVar1,0x3e3851ec);
    return;
  }
  return;
}






// 函数: void FUN_1801bc4e0(int64_t *param_1)
void FUN_1801bc4e0(int64_t *param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  
  puVar1 = (uint64_t *)((uint64_t *)*param_1)[1];
  for (puVar4 = *(uint64_t **)*param_1; puVar4 != puVar1; puVar4 = puVar4 + 3) {
    lVar2 = param_1[1];
    uVar3 = *puVar4;
    pplStackX_10 = &plStackX_8;
    plStackX_8 = (int64_t *)puVar4[1];
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_180198b90(lVar2,&plStackX_8,0,0,uVar3,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801bc5d0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c02cc0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801bc6c0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c02c80;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}






// 函数: void FUN_1801bc8d0(int64_t *param_1)
void FUN_1801bc8d0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  
  lVar1 = *param_1;
  uVar4 = 0;
  lVar2 = param_1[1];
  uVar6 = uVar4;
  if (*(int64_t *)(lVar1 + 0xe8) - *(int64_t *)(lVar1 + 0xe0) >> 3 != 0) {
    do {
      plVar3 = *(int64_t **)(uVar4 + *(int64_t *)(lVar1 + 0xe0));
      (**(code **)(*plVar3 + 0x20))(plVar3,lVar1,lVar2);
      uVar4 = uVar4 + 8;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 <
             (uint64_t)(*(int64_t *)(lVar1 + 0xe8) - *(int64_t *)(lVar1 + 0xe0) >> 3));
  }
  return;
}






// 函数: void FUN_1801bc8ff(void)
void FUN_1801bc8ff(void)

{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0xe0)) + 0x20))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0xe8) - *(int64_t *)(unaff_RBX + 0xe0) >> 3));
  return;
}






// 函数: void FUN_1801bc94c(void)
void FUN_1801bc94c(void)

{
  return;
}






// 函数: void FUN_1801bc9a0(int param_1,int param_2,uint64_t *param_3)
void FUN_1801bc9a0(int param_1,int param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  
  for (lVar2 = (int64_t)param_1; lVar2 < param_2; lVar2 = lVar2 + 1) {
    plVar1 = *(int64_t **)(*(int64_t *)*param_3 + lVar2 * 8);
    (**(code **)(*plVar1 + 0x90))(plVar1,*(int32_t *)param_3[1]);
  }
  return;
}






// 函数: void FUN_1801bca90(uint64_t param_1,uint64_t param_2,int64_t param_3,int8_t param_4)
void FUN_1801bca90(uint64_t param_1,uint64_t param_2,int64_t param_3,int8_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  void *puStack_90;
  int64_t lStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  void *puStack_68;
  int64_t lStack_60;
  int32_t uStack_50;
  int iStack_48;
  
  uVar9 = 0xfffffffffffffffe;
  lVar5 = param_2 - param_1;
  do {
    if ((lVar5 < 0x488) || (param_3 < 1)) {
      if (param_3 == 0) {
        FUN_1801bd4e0(param_1,param_2,param_2,param_4,uVar9);
      }
      return;
    }
    uVar7 = param_1 + ((int64_t)(param_2 - param_1) / 0x50) * 0x28;
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(uVar7 + 0x20);
    iVar3 = *(int *)(param_2 - 8);
    if (iVar2 < iVar1) {
      uVar6 = uVar7;
      if (iVar2 <= iVar3) {
        iVar4 = iVar1 - iVar3;
        uVar7 = param_1;
        iVar2 = iVar1;
LAB_1801bcb44:
        uVar6 = uVar7;
        if (iVar2 != iVar3 && SBORROW4(iVar2,iVar3) == iVar4 < 0) {
          uVar6 = param_2 - 0x28;
        }
      }
    }
    else {
      uVar6 = param_1;
      if (iVar1 <= iVar3) {
        iVar4 = iVar2 - iVar3;
        goto LAB_1801bcb44;
      }
    }
    CoreEngineDataTransformer(&puStack_68,uVar6);
    iStack_48 = *(int *)(uVar6 + 0x20);
    uVar6 = param_1;
    uVar7 = param_2;
    while( true ) {
      for (; iStack_48 < *(int *)(uVar6 + 0x20); uVar6 = uVar6 + 0x28) {
      }
      iVar1 = *(int *)(uVar7 - 8);
      uVar8 = uVar7;
      while (uVar7 = uVar8 - 0x28, iVar1 < iStack_48) {
        iVar1 = *(int *)(uVar8 - 0x30);
        uVar8 = uVar7;
      }
      if (uVar7 <= uVar6) break;
      puStack_90 = &system_data_buffer_ptr;
      uStack_80 = *(int32_t *)(uVar6 + 0x10);
      lStack_88 = *(int64_t *)(uVar6 + 8);
      uStack_78._4_4_ = *(uint *)(uVar6 + 0x1c);
      uStack_78._0_4_ = *(int32_t *)(uVar6 + 0x18);
      *(int32_t *)(uVar6 + 0x10) = 0;
      *(uint64_t *)(uVar6 + 8) = 0;
      *(uint64_t *)(uVar6 + 0x18) = 0;
      uStack_70 = *(int32_t *)(uVar6 + 0x20);
      RenderingSystem_ResourceBinder(uVar6,uVar7);
      *(int32_t *)(uVar6 + 0x20) = *(int32_t *)(uVar8 - 8);
      RenderingSystem_ResourceBinder(uVar7,&puStack_90);
      *(int32_t *)(uVar8 - 8) = uStack_70;
      puStack_90 = &system_data_buffer_ptr;
      if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_88 = 0;
      uStack_78 = (uint64_t)uStack_78._4_4_ << 0x20;
      puStack_90 = &system_state_ptr;
      uVar6 = uVar6 + 0x28;
    }
    puStack_68 = &system_data_buffer_ptr;
    if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_60 = 0;
    uStack_50 = 0;
    puStack_68 = &system_state_ptr;
    param_3 = param_3 + -1;
    FUN_1801bca90(uVar6,param_2,param_3,param_4);
    lVar5 = uVar6 - param_1;
    param_2 = uVar6;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1801bcce0(float param_1,int64_t param_2,int64_t param_3,float param_4)

{
  int64_t in_RCX;
  float fVar1;
  float in_XMM1_Da;
  float fVar2;
  
  if ((*(byte *)(in_RCX + 0xa8) & 1) == 0) {
    if ((*(byte *)(in_RCX + 0xa8) >> 1 & 1) == 0) {
      fVar2 = *(float *)(param_3 + 0x30) - *(float *)(param_2 + 0x30);
      fVar1 = *(float *)(param_3 + 0x38) - *(float *)(param_2 + 0x38);
      in_XMM1_Da = *(float *)(param_3 + 0x34) - *(float *)(param_2 + 0x34);
      in_XMM1_Da = in_XMM1_Da * in_XMM1_Da;
      fVar1 = (fVar2 * fVar2 + in_XMM1_Da + fVar1 * fVar1) * 0.75 + 200.0;
      param_1 = fVar1 * 10.0 + 10000.0;
      param_4 = (fVar1 / param_1) * param_4;
      if (*(float *)(in_RCX + 0x34) <= param_4 && param_4 != *(float *)(in_RCX + 0x34))
      goto LAB_1801bcd78;
    }
    else {
      param_4 = -1.0;
    }
    SystemCore_FileSystem(param_1,in_XMM1_Da,param_4);
  }
LAB_1801bcd78:
  if ((*(byte *)(in_RCX + 0xa8) >> 3 & 1) != 0) {
    (**(code **)(**(int64_t **)(in_RCX + 0x210) + 0xd0))(*(int64_t **)(in_RCX + 0x210),in_RCX);
  }
  FUN_1802fb280(in_RCX);
  if (*(int64_t *)(in_RCX + 0x28) != 0) {
    FUN_1802fb280();
  }
  return *(int *)(in_RCX + 0x50) == *(int *)(system_main_module_state + 0x224);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1801bcdd0(int64_t param_1,float param_2,int64_t param_3,float param_4)

{
  int64_t in_RDX;
  float in_XMM0_Da;
  float fVar1;
  float fVar2;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    if ((*(byte *)(param_1 + 0xa8) >> 1 & 1) == 0) {
      fVar2 = *(float *)(param_3 + 0x30) - *(float *)(in_RDX + 0x30);
      fVar1 = *(float *)(param_3 + 0x38) - *(float *)(in_RDX + 0x38);
      param_2 = *(float *)(param_3 + 0x34) - *(float *)(in_RDX + 0x34);
      param_2 = param_2 * param_2;
      fVar1 = (fVar2 * fVar2 + param_2 + fVar1 * fVar1) * 0.32 + 79.36508;
      in_XMM0_Da = fVar1 * 18.0 + 10000.0;
      param_4 = (fVar1 / in_XMM0_Da) * param_4;
      if (*(float *)(param_1 + 0x34) <= param_4 && param_4 != *(float *)(param_1 + 0x34))
      goto LAB_1801bce68;
    }
    else {
      param_4 = -1.0;
    }
    SystemCore_FileSystem(in_XMM0_Da,param_2,param_4);
  }
LAB_1801bce68:
  if ((*(byte *)(param_1 + 0xa8) >> 3 & 1) != 0) {
    (**(code **)(**(int64_t **)(param_1 + 0x210) + 0xd0))(*(int64_t **)(param_1 + 0x210),param_1);
  }
  FUN_1802fb280(param_1);
  if (*(int64_t *)(param_1 + 0x28) != 0) {
    FUN_1802fb280();
  }
  return *(int *)(param_1 + 0x50) == *(int *)(system_main_module_state + 0x224);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t *
FUN_1801bcec0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4,
             int64_t param_5,int64_t param_6)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t auStackX_18 [2];
  
  auStackX_18[0] = param_3;
  RenderingShaderProcessor0(param_1 + 0x20,auStackX_18,*(int32_t *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  if ((char)auStackX_18[0] != '\0') {
    lVar1 = (auStackX_18[0] >> 0x20) * 8;
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,lVar1 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar2,0,lVar1);
  }
  *(uint64_t *)(param_6 + 0xa0) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + param_5 * 8);
  *(int64_t *)(*(int64_t *)(param_1 + 8) + param_5 * 8) = param_6;
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
  *param_2 = param_6;
  param_2[1] = lVar1 + param_5 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}






// 函数: void FUN_1801bcf13(uint64_t param_1)
void FUN_1801bcf13(uint64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t in_stack_00000070;
  
  lVar1 = (in_stack_00000070 >> 0x20) * 8;
  uVar2 = CoreEngineMemoryPoolReallocator(param_1,lVar1 + 8,8);
                    // WARNING: Subroutine does not return
  memset(uVar2,0,lVar1);
}






// 函数: void FUN_1801bcf61(void)
void FUN_1801bcf61(void)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  byte *pbVar5;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  uint uVar6;
  uint64_t in_R11;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int64_t in_stack_00000088;
  
  do {
    lVar2 = *(int64_t *)(unaff_RDI + 8);
    lVar3 = *(int64_t *)(lVar2 + in_R11 * 8);
    while (lVar3 != 0) {
      pbVar5 = &system_buffer_ptr;
      if (*(byte **)(lVar3 + 8) != (byte *)0x0) {
        pbVar5 = *(byte **)(lVar3 + 8);
      }
      uVar6 = 0;
      uVar4 = 0xcbf29ce484222325;
      if (*(uint *)(lVar3 + 0x10) != 0) {
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          uVar6 = uVar6 + 1;
          uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
        } while (uVar6 < *(uint *)(lVar3 + 0x10));
      }
      *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + in_R11 * 8) = *(uint64_t *)(lVar3 + 0xa0);
      uVar4 = uVar4 % unaff_RBP & 0xffffffff;
      *(uint64_t *)(lVar3 + 0xa0) = *(uint64_t *)(unaff_RSI + uVar4 * 8);
      *(int64_t *)(unaff_RSI + uVar4 * 8) = lVar3;
      lVar2 = *(int64_t *)(unaff_RDI + 8);
      lVar3 = *(int64_t *)(lVar2 + in_R11 * 8);
    }
    in_R11 = in_R11 + 1;
  } while (in_R11 < *(uint64_t *)(unaff_RDI + 0x10));
  if ((1 < *(uint64_t *)(unaff_RDI + 0x10)) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_RSI;
  *(uint64_t *)(in_stack_00000088 + 0xa0) = *(uint64_t *)(unaff_RSI + unaff_R15 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R15 * 8) = in_stack_00000088;
  lVar2 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = in_stack_00000088;
  unaff_R14[1] = lVar2 + unaff_R15 * 8;
  *(int8_t *)(unaff_R14 + 2) = 1;
  return;
}






// 函数: void FUN_1801bd014(void)
void FUN_1801bd014(void)

{
  int64_t lVar1;
  uint64_t in_RAX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  int64_t unaff_R15;
  int64_t in_stack_00000088;
  
  if ((1 < in_RAX) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_RSI;
  *(uint64_t *)(in_stack_00000088 + 0xa0) = *(uint64_t *)(unaff_RSI + unaff_R15 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R15 * 8) = in_stack_00000088;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = in_stack_00000088;
  unaff_R14[1] = lVar1 + unaff_R15 * 8;
  *(int8_t *)(unaff_R14 + 2) = 1;
  return;
}






// 函数: void FUN_1801bd037(void)
void FUN_1801bd037(void)

{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t *unaff_R14;
  int64_t in_stack_00000080;
  int64_t in_stack_00000088;
  
  *(uint64_t *)(in_stack_00000088 + 0xa0) =
       *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + in_stack_00000080 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + in_stack_00000080 * 8) = in_stack_00000088;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R14 = in_stack_00000088;
  unaff_R14[1] = lVar1 + in_stack_00000080 * 8;
  *(int8_t *)(unaff_R14 + 2) = 1;
  return;
}






// 函数: void FUN_1801bd090(int64_t *param_1)
void FUN_1801bd090(int64_t *param_1)

{
  if (param_1[0x59] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if ((int64_t *)param_1[0x55] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x55] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  if (*param_1 != 0) {
    FUN_180080060();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801bd130(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c02b00;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x50,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801bd230(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c02ac0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x50,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



uint64_t *
FUN_1801bd320(uint64_t *param_1,int32_t *param_2,int32_t *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar6 = param_2 + 0x18;
    do {
      puVar4 = (uint64_t *)*param_1;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(int32_t *)(puVar4 + 3) = puVar6[-0x12];
      uVar5 = *puVar4;
      *puVar4 = *(uint64_t *)(puVar6 + -0x18);
      *(uint64_t *)(puVar6 + -0x18) = uVar5;
      uVar5 = puVar4[1];
      puVar4[1] = *(uint64_t *)(puVar6 + -0x16);
      *(uint64_t *)(puVar6 + -0x16) = uVar5;
      uVar5 = puVar4[2];
      puVar4[2] = *(uint64_t *)(puVar6 + -0x14);
      *(uint64_t *)(puVar6 + -0x14) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 3);
      *(int32_t *)(puVar4 + 3) = puVar6[-0x12];
      puVar6[-0x12] = uVar3;
      puVar4[4] = *(uint64_t *)(puVar6 + -0x10);
      puVar1 = puVar4 + 5;
      *puVar1 = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(int32_t *)(puVar4 + 8) = puVar6[-8];
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -0xe);
      *(uint64_t *)(puVar6 + -0xe) = uVar5;
      uVar5 = puVar4[6];
      puVar4[6] = *(uint64_t *)(puVar6 + -0xc);
      *(uint64_t *)(puVar6 + -0xc) = uVar5;
      uVar5 = puVar4[7];
      puVar4[7] = *(uint64_t *)(puVar6 + -10);
      *(uint64_t *)(puVar6 + -10) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 8);
      *(int32_t *)(puVar4 + 8) = puVar6[-8];
      puVar6[-8] = uVar3;
      puVar1 = puVar4 + 9;
      *puVar1 = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(int32_t *)(puVar4 + 0xc) = *puVar6;
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -6);
      *(uint64_t *)(puVar6 + -6) = uVar5;
      uVar5 = puVar4[10];
      puVar4[10] = *(uint64_t *)(puVar6 + -4);
      *(uint64_t *)(puVar6 + -4) = uVar5;
      uVar5 = puVar4[0xb];
      puVar4[0xb] = *(uint64_t *)(puVar6 + -2);
      *(uint64_t *)(puVar6 + -2) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 0xc);
      *(int32_t *)(puVar4 + 0xc) = *puVar6;
      *puVar6 = uVar3;
      puVar1 = puVar4 + 0xd;
      *puVar1 = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      *(int32_t *)(puVar4 + 0x10) = puVar6[8];
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + 2);
      *(uint64_t *)(puVar6 + 2) = uVar5;
      uVar5 = puVar4[0xe];
      puVar4[0xe] = *(uint64_t *)(puVar6 + 4);
      *(uint64_t *)(puVar6 + 4) = uVar5;
      uVar5 = puVar4[0xf];
      puVar4[0xf] = *(uint64_t *)(puVar6 + 6);
      *(uint64_t *)(puVar6 + 6) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 0x10);
      *(int32_t *)(puVar4 + 0x10) = puVar6[8];
      puVar6[8] = uVar3;
      *param_1 = puVar4 + 0x11;
      puVar2 = puVar6 + 10;
      puVar6 = puVar6 + 0x22;
    } while (puVar2 != param_3);
  }
  return param_1;
}






// 函数: void FUN_1801bd4e0(int64_t param_1,int64_t *param_2,int64_t *param_3,int8_t param_4)
void FUN_1801bd4e0(int64_t param_1,int64_t *param_2,int64_t *param_3,int8_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  void *puStack_68;
  int64_t lStack_60;
  int32_t uStack_58;
  int64_t lStack_50;
  int32_t uStack_48;
  
  uVar5 = 0xfffffffffffffffe;
  lVar2 = ((int64_t)param_2 - param_1) / 0x28;
  if (1 < lVar2) {
    lVar3 = (lVar2 + -2 >> 1) + 1;
    plVar4 = (int64_t *)(param_1 + (lVar3 * 5 + 1) * 8);
    do {
      lVar3 = lVar3 + -1;
      plVar1 = plVar4 + -5;
      puStack_68 = &system_data_buffer_ptr;
      uStack_58 = (int32_t)plVar4[-4];
      lStack_60 = *plVar1;
      lStack_50 = plVar4[-3];
      *(int32_t *)(plVar4 + -4) = 0;
      *plVar1 = 0;
      plVar4[-3] = 0;
      uStack_48 = (int32_t)plVar4[-2];
      FUN_1801bd850(param_1,lVar3,lVar2,lVar3,&puStack_68,param_4,uVar5);
      puStack_68 = &system_data_buffer_ptr;
      if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plVar4 = plVar1;
    } while (lVar3 != 0);
  }
  if (param_2 < param_3) {
    plVar4 = param_2 + 1;
    do {
      if (*(int *)(param_1 + 0x20) < (int)plVar4[3]) {
        puStack_68 = &system_data_buffer_ptr;
        uStack_58 = (int32_t)plVar4[1];
        lStack_60 = *plVar4;
        lStack_50 = plVar4[2];
        *(int32_t *)(plVar4 + 1) = 0;
        *plVar4 = 0;
        plVar4[2] = 0;
        uStack_48 = (int32_t)plVar4[3];
        RenderingSystem_ResourceBinder(plVar4 + -1,param_1);
        *(int32_t *)(plVar4 + 3) = *(int32_t *)(param_1 + 0x20);
        FUN_1801bd850(param_1,0,lVar2,0,&puStack_68,param_4);
        puStack_68 = &system_data_buffer_ptr;
        if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      plVar1 = plVar4 + 4;
      plVar4 = plVar4 + 5;
    } while (plVar1 < param_3);
  }
  if (1 < lVar2) {
    param_2 = param_2 + -3;
    do {
      puStack_68 = &system_data_buffer_ptr;
      uStack_58 = (int32_t)*param_2;
      lStack_60 = param_2[-1];
      lStack_50 = param_2[1];
      *(int32_t *)param_2 = 0;
      param_2[-1] = 0;
      param_2[1] = 0;
      uStack_48 = (int32_t)param_2[2];
      RenderingSystem_ResourceBinder(param_2 + -2,param_1);
      *(int32_t *)(param_2 + 2) = *(int32_t *)(param_1 + 0x20);
      FUN_1801bd850(param_1,0,((0x18 - param_1) + (int64_t)param_2) / 0x28 + -1,0,&puStack_68,
                    param_4,uVar5);
      puStack_68 = &system_data_buffer_ptr;
      if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_2 = param_2 + -5;
    } while (0x4f < (0x18 - param_1) + (int64_t)param_2);
  }
  return;
}






// 函数: void FUN_1801bd850(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_1801bd850(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  int64_t param_5)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar1 = param_4 * 2;
  while (lVar2 = lVar1 + 2, lVar2 < param_3) {
    lVar3 = lVar1 + 1;
    if (*(int *)(param_1 + 0x20 + lVar2 * 0x28) <= *(int *)(param_1 + -8 + lVar2 * 0x28)) {
      lVar3 = lVar2;
    }
    lVar1 = param_1 + lVar3 * 0x28;
    lVar2 = param_1 + param_4 * 0x28;
    RenderingSystem_ResourceBinder(lVar2,lVar1);
    *(int32_t *)(lVar2 + 0x20) = *(int32_t *)(lVar1 + 0x20);
    param_4 = lVar3;
    lVar1 = lVar3 * 2;
  }
  if (lVar2 == param_3) {
    lVar2 = param_1 + lVar2 * 0x28;
    lVar3 = param_1 + param_4 * 0x28;
    RenderingSystem_ResourceBinder(lVar3,lVar2 + -0x28);
    param_4 = lVar1 + 1;
    *(int32_t *)(lVar3 + 0x20) = *(int32_t *)(lVar2 + -8);
  }
  while (param_2 < param_4) {
    lVar2 = param_4 + -1 >> 1;
    lVar1 = param_1 + lVar2 * 0x28;
    if (*(int *)(lVar1 + 0x20) <= *(int *)(param_5 + 0x20)) break;
    lVar3 = param_1 + param_4 * 0x28;
    RenderingSystem_ResourceBinder(lVar3,lVar1);
    *(int32_t *)(lVar3 + 0x20) = *(int32_t *)(lVar1 + 0x20);
    param_4 = lVar2;
  }
  param_1 = param_1 + param_4 * 0x28;
  RenderingSystem_ResourceBinder(param_1,param_5);
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(param_5 + 0x20);
  return;
}






