#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part020.c - 10 个函数

// 函数: void FUN_1802e4d10(int64_t param_1,int64_t param_2)
void FUN_1802e4d10(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  byte *pbVar9;
  uint uVar10;
  void *puVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int8_t auStack_8c8 [32];
  void **ppuStack_8a8;
  void *puStack_8a0;
  int64_t lStack_898;
  int32_t uStack_888;
  void *puStack_880;
  int64_t lStack_878;
  int32_t uStack_868;
  int64_t lStack_860;
  uint64_t uStack_858;
  int64_t lStack_850;
  int8_t auStack_848 [2048];
  uint64_t uStack_48;
  
  uStack_858 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_8c8;
  lVar12 = param_1 + 8;
  lStack_850 = lVar12;
  iVar5 = _Mtx_lock(lVar12);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lVar6 = FUN_1802e5300(param_1,param_2);
  if (lVar6 != 0) goto LAB_1802e500d;
  puVar11 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_2 + 8);
  }
  mbstowcs(auStack_848,puVar11,(int64_t)(*(int *)(param_2 + 0x10) + 1));
  lVar6 = (**(code **)(**(int64_t **)(param_1 + 0x148) + 0x10))
                    (*(int64_t **)(param_1 + 0x148),auStack_848);
  if ((lVar6 == 0) &&
     (lVar6 = (**(code **)(**(int64_t **)(param_1 + 0x148) + 0x10))
                        (*(int64_t **)(param_1 + 0x148),&unknown_var_88_ptr), lVar6 == 0)) {
    lVar6 = (**(code **)(**(int64_t **)(param_1 + 0x148) + 8))(*(int64_t **)(param_1 + 0x148),0);
  }
  lVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
  *(int64_t *)(lVar7 + 0x20) = lVar6;
  *(int64_t *)(lVar7 + 0x28) = param_1;
  SystemCore_EncryptionEngine0(&puStack_8a0,param_2);
  lVar6 = FUN_1802e5300(param_1,&puStack_8a0);
  uVar13 = 0;
  if (lVar6 != 0) {
LAB_1802e4fea:
    puStack_8a0 = &system_data_buffer_ptr;
    if (lStack_898 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_898 = 0;
    uStack_888 = 0;
    puStack_8a0 = &system_state_ptr;
LAB_1802e500d:
    iVar5 = _Mtx_unlock(lVar12);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_8c8);
  }
  CoreEngineDataTransformer(&puStack_880,&puStack_8a0);
  puVar1 = (uint64_t *)(param_1 + 0x150);
  lStack_860 = lVar7;
  lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(param_1 + 0x178));
  ppuStack_8a8 = (void **)(lVar6 + 0x20);
  CoreEngineDataTransformer(ppuStack_8a8,&puStack_880);
  *(int64_t *)(lVar6 + 0x40) = lStack_860;
  bVar3 = true;
  puVar4 = puVar1;
  puVar8 = *(uint64_t **)(param_1 + 0x160);
  while (puVar8 != (uint64_t *)0x0) {
    puVar4 = puVar8;
    if (*(int *)(puVar8 + 6) == 0) {
      bVar3 = false;
LAB_1802e4ec0:
      puVar8 = (uint64_t *)*puVar8;
    }
    else {
      if (*(int *)(lVar6 + 0x30) == 0) {
        bVar3 = true;
      }
      else {
        pbVar9 = (byte *)puVar8[5];
        lVar7 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
        do {
          bVar2 = *pbVar9;
          uVar10 = (uint)pbVar9[lVar7];
          if (bVar2 != uVar10) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        bVar3 = 0 < (int)(bVar2 - uVar10);
      }
      if (!bVar3) goto LAB_1802e4ec0;
      puVar8 = (uint64_t *)puVar8[1];
    }
  }
  puVar8 = puVar4;
  if (bVar3) {
    if (puVar4 != *(uint64_t **)(param_1 + 0x158)) {
      puVar8 = (uint64_t *)func_0x00018066b9a0(puVar4);
      goto LAB_1802e4ee0;
    }
  }
  else {
LAB_1802e4ee0:
    if (*(int *)(lVar6 + 0x30) == 0) {
LAB_1802e4fb4:
      FUN_18008ea80();
      ppuStack_8a8 = &puStack_880;
      puStack_880 = &system_data_buffer_ptr;
      if (lStack_878 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_878 = 0;
      uStack_868 = 0;
      puStack_880 = &system_state_ptr;
      goto LAB_1802e4fea;
    }
    if (*(int *)(puVar8 + 6) != 0) {
      pbVar9 = *(byte **)(lVar6 + 0x28);
      lVar7 = puVar8[5] - (int64_t)pbVar9;
      do {
        bVar2 = *pbVar9;
        uVar10 = (uint)pbVar9[lVar7];
        if (bVar2 != uVar10) break;
        pbVar9 = pbVar9 + 1;
      } while (uVar10 != 0);
      if ((int)(bVar2 - uVar10) < 1) goto LAB_1802e4fb4;
    }
  }
  if (puVar4 == puVar1) goto LAB_1802e4fa0;
  if (*(int *)(puVar4 + 6) != 0) {
    if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1802e4fa0;
    pbVar9 = (byte *)puVar4[5];
    lVar12 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar10 = (uint)pbVar9[lVar12];
      if (bVar2 != uVar10) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar10 != 0);
    if (0 < (int)(bVar2 - uVar10)) goto LAB_1802e4fa0;
  }
  uVar13 = 1;
LAB_1802e4fa0:
                    // WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,puVar4,puVar1,uVar13);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e5050(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802e5050(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int8_t auStack_d8 [32];
  uint64_t uStack_b8;
  uint64_t *puStack_b0;
  char acStack_a8 [128];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar3 = (uint64_t *)func_0x00018004b9a0();
  uStack_b8 = 0;
  puStack_b0 = &uStackX_18;
  __stdio_common_vsprintf(*puVar3 | 1,acStack_a8,0x80,param_2);
  lVar1 = -1;
  do {
    lVar4 = lVar1;
    lVar1 = lVar4 + 1;
  } while (acStack_a8[lVar4 + 1] != '\0');
  iVar2 = (int)(lVar4 + 1);
  if ((0 < iVar2) && (*(uint *)(param_1 + 0x10) + iVar2 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_1 + 0x10) + *(int64_t *)(param_1 + 8),acStack_a8,
           (int64_t)((int)lVar4 + 2));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_d8);
}






// 函数: void FUN_1802e5110(int64_t param_1)
void FUN_1802e5110(int64_t param_1)

{
  int64_t lVar1;
  int32_t uStack_14;
  uint64_t uStack_10;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(int64_t *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(uint64_t *)(lVar1 + 0x170) = 0;
    *(uint64_t *)(lVar1 + 0x178) = 0;
    *(int32_t *)(lVar1 + 0x180) = 0;
    *(int32_t *)(lVar1 + 0x184) = 0;
    *(int32_t *)(lVar1 + 0x188) = 0;
    *(int32_t *)(lVar1 + 0x18c) = uStack_14;
    *(uint64_t *)(lVar1 + 400) = uStack_10;
    LOCK();
    *(int32_t *)(*(int64_t *)(param_1 + 0x10) + 0x380) = 0;
    UNLOCK();
  }
  *(uint64_t *)(param_1 + 0x20) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x20) = &system_state_ptr;
  if (*(int64_t **)(param_1 + 0x10) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x38))();
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_1);
}






// 函数: void FUN_1802e51e0(int64_t *param_1)
void FUN_1802e51e0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int32_t uStack_14;
  uint64_t uStack_10;
  
  cVar3 = FUN_1802e5280(*param_1,param_1[1]);
  if (cVar3 == '\0') {
    return;
  }
  (**(code **)(**(int64_t **)(*param_1 + 0x148) + 0x168))
            (*(int64_t **)(*param_1 + 0x148),*(uint64_t *)param_1[1]);
  *(uint64_t *)param_1[1] = 0;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar1 = *(int64_t *)(lVar2 + 0x10);
    if (lVar1 != 0) {
      *(uint64_t *)(lVar1 + 0x170) = 0;
      *(uint64_t *)(lVar1 + 0x178) = 0;
      *(int32_t *)(lVar1 + 0x180) = 0;
      *(int32_t *)(lVar1 + 0x184) = 0;
      *(int32_t *)(lVar1 + 0x188) = 0;
      *(int32_t *)(lVar1 + 0x18c) = uStack_14;
      *(uint64_t *)(lVar1 + 400) = uStack_10;
      LOCK();
      *(int32_t *)(*(int64_t *)(lVar2 + 0x10) + 0x380) = 0;
      UNLOCK();
    }
    *(uint64_t *)(lVar2 + 0x20) = &system_data_buffer_ptr;
    if (*(int64_t *)(lVar2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar2 + 0x28) = 0;
    *(int32_t *)(lVar2 + 0x38) = 0;
    *(uint64_t *)(lVar2 + 0x20) = &system_state_ptr;
    if (*(int64_t **)(lVar2 + 0x10) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar2 + 0x10) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar2);
  }
  return;
}



int8_t FUN_1802e5280(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 0x188);
  while( true ) {
    if (lVar1 == param_1 + 0x180) {
      return 0;
    }
    if (*(int64_t *)(lVar1 + 0x40) == param_2) break;
    lVar1 = func_0x00018066bd70(lVar1);
  }
  *(int64_t *)(param_1 + 0x1a0) = *(int64_t *)(param_1 + 0x1a0) + -1;
  func_0x00018066bd70(lVar1);
  FUN_18066ba00(lVar1,param_1 + 0x180);
  FUN_18008ea80();
  return 1;
}



uint64_t FUN_1802e5300(int64_t param_1)

{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  void *puStack_30;
  byte *pbStack_28;
  int iStack_20;
  
  puVar1 = (uint64_t *)(param_1 + 0x150);
  SystemCore_EncryptionEngine0(&puStack_30);
  puVar9 = *(uint64_t **)(param_1 + 0x160);
  puVar7 = puVar1;
  if (puVar9 != (uint64_t *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar3 = false;
        puVar10 = (uint64_t *)puVar9[1];
      }
      else {
        if (*(int *)(puVar9 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar4 = pbStack_28;
          do {
            uVar5 = (uint)pbVar4[puVar9[5] - (int64_t)pbStack_28];
            iVar6 = *pbVar4 - uVar5;
            if (*pbVar4 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          bVar3 = 0 < iVar6;
          if (iVar6 < 1) {
            puVar10 = (uint64_t *)puVar9[1];
            goto LAB_1802e538b;
          }
        }
        puVar10 = (uint64_t *)*puVar9;
      }
LAB_1802e538b:
      puVar8 = puVar9;
      if (bVar3) {
        puVar8 = puVar7;
      }
      puVar7 = puVar8;
      puVar9 = puVar10;
    } while (puVar10 != (uint64_t *)0x0);
    if (puVar8 != puVar1) {
      if (*(int *)(puVar8 + 6) == 0) goto LAB_1802e53ca;
      if (iStack_20 != 0) {
        pbVar4 = (byte *)puVar8[5];
        lVar11 = (int64_t)pbStack_28 - (int64_t)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar11];
          if (bVar2 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar2 - uVar5) < 1) goto LAB_1802e53ca;
      }
    }
  }
  puVar8 = puVar1;
LAB_1802e53ca:
  puStack_30 = &system_data_buffer_ptr;
  if (pbStack_28 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (puVar8 == puVar1) {
    return 0;
  }
  return puVar8[8];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1802e5430(uint64_t *param_1)

{
  uint64_t uVar1;
  
  *param_1 = 0;
  uVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x800000,5);
  *param_1 = uVar1;
  LOCK();
  param_1[1] = 0;
  UNLOCK();
  *(int32_t *)(param_1 + 2) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e5470(uint64_t *param_1)
void FUN_1802e5470(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int8_t auStack_138 [32];
  code *pcStack_118;
  int64_t *plStack_108;
  int64_t **pplStack_100;
  int64_t *plStack_f8;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  void *puStack_90;
  int8_t *puStack_88;
  int32_t uStack_80;
  int8_t auStack_78 [16];
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  pcStack_118 = SystemTimer;
  puStack_a8 = param_1;
  DataStructureManager(param_1 + 6,8,2,&SUB_18005d5f0);
  plStack_108 = param_1 + 8;
  _Mtx_init_in_situ(plStack_108,2);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x15) = 0x18;
  plStack_108 = param_1 + 0x16;
  *plStack_108 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 3;
  *(int32_t *)(param_1 + 0x1a) = 0;
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0xb;
  strcpy_s(auStack_50,0x20,&unknown_var_248_ptr);
  puVar2 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStack_e0,&puStack_68,1);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_e8 = (int64_t *)param_1[2];
  param_1[2] = uVar3;
  if (plStack_e8 != (int64_t *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
  if (plStack_e0 != (int64_t *)0x0) {
    (**(code **)(*plStack_e0 + 0x38))();
  }
  puStack_68 = &system_state_ptr;
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa0,8,3);
  plVar4 = (int64_t *)FUN_1800842a0(uVar3);
  plStack_a0 = plVar4;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  *(int32_t *)(plVar4 + 2) = 0x8000;
  *(int16_t *)((int64_t)plVar4 + 0x14) = 0x100;
  plVar5 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
  puStack_90 = &system_config_ptr;
  puStack_88 = auStack_78;
  auStack_78[0] = 0;
  uStack_80 = 5;
  pplStack_100 = (int64_t **)plVar5;
  strcpy_s(auStack_78,0x10,&unknown_var_3576_ptr);
  *plVar5 = (int64_t)&system_handler1_ptr;
  *plVar5 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar5 + 1) = 0;
  *plVar5 = (int64_t)&unknown_var_7064_ptr;
  LOCK();
  *(int8_t *)(plVar5 + 2) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)((int64_t)plVar5 + 0x14) = 0;
  UNLOCK();
  plVar5[3] = 0;
  plVar5[4] = 0;
  plStack_d8 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plStack_d8 = (int64_t *)param_1[3];
  param_1[3] = plVar5;
  if (plStack_d8 != (int64_t *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
  puStack_90 = &system_state_ptr;
  uVar3 = param_1[3];
  pplStack_100 = &plStack_f8;
  plStack_f8 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_180255880(uVar3,&plStack_f8);
  plVar5 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
  *plVar5 = (int64_t)&system_handler1_ptr;
  *plVar5 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar5 + 1) = 0;
  *plVar5 = (int64_t)&unknown_var_6752_ptr;
  plVar5[4] = 0;
  plVar5[2] = 0;
  *(byte *)(plVar5 + 5) = *(byte *)(plVar5 + 5) | 1;
  pplStack_100 = (int64_t **)plVar5;
  plStack_98 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  *(int32_t *)(plVar5 + 2) = 0xc000;
  *(int8_t *)(plVar5 + 3) = 1;
  *(int32_t *)((int64_t)plVar5 + 0x14) = 2;
  plVar6 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  *plVar6 = (int64_t)&system_handler1_ptr;
  *plVar6 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar6 + 1) = 0;
  *plVar6 = (int64_t)&unknown_var_6960_ptr;
  LOCK();
  *(int32_t *)(plVar6 + 2) = 0;
  UNLOCK();
  plVar6[3] = 0;
  pplStack_100 = (int64_t **)plVar6;
  plStack_d0 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plStack_d0 = (int64_t *)param_1[4];
  param_1[4] = plVar6;
  if (plStack_d0 != (int64_t *)0x0) {
    (**(code **)(*plStack_d0 + 0x38))();
  }
  uVar3 = param_1[4];
  pplStack_100 = &plStack_f0;
  plStack_f0 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_180255b70(uVar3,&plStack_f0);
  LOCK();
  param_1[1] = 0;
  UNLOCK();
  LOCK();
  *param_1 = 0;
  UNLOCK();
  uVar1 = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x17a0);
  *(int32_t *)(param_1 + 5) = uVar1;
  puVar2 = (uint64_t *)FUN_1802e65f0(uVar1,&plStack_c0);
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_c8 = (int64_t *)param_1[6];
  param_1[6] = uVar3;
  if (plStack_c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_c8 + 0x38))();
  }
  if (plStack_c0 != (int64_t *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  puVar2 = (uint64_t *)FUN_1802e65f0();
  uVar3 = *puVar2;
  *puVar2 = 0;
  plStack_b8 = (int64_t *)param_1[7];
  param_1[7] = uVar3;
  if (plStack_b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_b8 + 0x38))();
  }
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  (**(code **)(*plVar5 + 0x38))(plVar5);
  (**(code **)(*plVar4 + 0x38))(plVar4);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_138);
}



int FUN_1802e5900(int64_t param_1,int8_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  iVar3 = _Mtx_lock(param_1 + 0x40);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar1 = *(int64_t *)(param_1 + 0xb8);
  if (*(int64_t *)(param_1 + 0xb0) == lVar1) {
    iVar3 = *(int *)(param_1 + 0xd0);
    iVar4 = iVar3 + 1;
    *(int *)(param_1 + 0xd0) = iVar4;
    uVar2 = (*(int64_t *)(param_1 + 0x98) - *(int64_t *)(param_1 + 0x90)) / 0xc;
    if (uVar2 <= (uint64_t)(int64_t)iVar3) {
      uVar5 = (uint64_t)iVar4;
      if (uVar2 < uVar5) {
        FUN_1802e6720(param_1 + 0x90,uVar5 - uVar2,param_3,iVar4,uVar6);
      }
      else {
        *(uint64_t *)(param_1 + 0x98) = *(int64_t *)(param_1 + 0x90) + uVar5 * 0xc;
      }
    }
  }
  else {
    iVar3 = *(int *)(lVar1 + -4);
    *(int64_t *)(param_1 + 0xb8) = lVar1 + -4;
  }
  if (iVar3 != -1) {
    lVar1 = (int64_t)iVar3 * 0xc;
    *(int32_t *)(*(int64_t *)(param_1 + 0x90) + 4 + lVar1) = 0xffffffff;
    *(int8_t *)(lVar1 + *(int64_t *)(param_1 + 0x90)) = param_2;
    *(int8_t *)(*(int64_t *)(param_1 + 0x90) + 8 + lVar1) = 1;
    *(int8_t *)(*(int64_t *)(param_1 + 0x90) + 9 + lVar1) = 0;
  }
  iVar4 = _Mtx_unlock(param_1 + 0x40);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return iVar3;
}






// 函数: void FUN_1802e5a50(int64_t param_1,int param_2)
void FUN_1802e5a50(int64_t param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(param_1 + 0x40);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  *(int8_t *)(*(int64_t *)(param_1 + 0x90) + 9 + (int64_t)param_2 * 0xc) = 1;
  iVar1 = _Mtx_unlock(param_1 + 0x40);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}






// 函数: void FUN_1802e5ad0(int64_t *param_1,int param_2,uint64_t *param_3,float *param_4)
void FUN_1802e5ad0(int64_t *param_1,int param_2,uint64_t *param_3,float *param_4)

{
  uint64_t *puVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((uint64_t)param_1[1] < 0x1fff) {
    lVar5 = (int64_t)param_2;
    fVar9 = 0.0;
    lVar3 = param_1[0x12];
    iVar2 = *(int *)(lVar3 + 4 + lVar5 * 0xc);
    if (iVar2 != -1) {
      lVar6 = (int64_t)iVar2 * 0x2c;
      fVar10 = *(float *)(lVar6 + 0xe8 + (int64_t)param_1) - param_4[1];
      fVar11 = *(float *)(lVar6 + 0xe4 + (int64_t)param_1) - *param_4;
      fVar9 = *(float *)(lVar6 + 0xec + (int64_t)param_1) - param_4[2];
      fVar9 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
      if (fVar9 < *(float *)(&unknown_var_1608_ptr + (int64_t)*(char *)(lVar3 + lVar5 * 0xc) * 4)) {
        return;
      }
      fVar9 = fVar9 + *(float *)(lVar6 + 0xf4 + (int64_t)param_1);
    }
    LOCK();
    lVar6 = *param_1;
    *param_1 = *param_1 + 1;
    UNLOCK();
    uVar4 = param_3[1];
    uVar8 = (uint)lVar6 & 0x1fff;
    lVar7 = (uint64_t)uVar8 * 0x2c;
    puVar1 = (uint64_t *)(lVar7 + 0xd4 + (int64_t)param_1);
    *puVar1 = *param_3;
    puVar1[1] = uVar4;
    uVar4 = *(uint64_t *)(param_4 + 2);
    puVar1 = (uint64_t *)(lVar7 + 0xe4 + (int64_t)param_1);
    *puVar1 = *(uint64_t *)param_4;
    puVar1[1] = uVar4;
    lVar6 = param_1[5];
    *(float *)(lVar7 + 0xf4 + (int64_t)param_1) = fVar9;
    *(int *)(lVar7 + 0xf8 + (int64_t)param_1) = (int)lVar6;
    *(int32_t *)(lVar7 + 0xfc + (int64_t)param_1) = *(int32_t *)(lVar3 + 4 + lVar5 * 0xc);
    *(uint *)(lVar3 + 4 + lVar5 * 0xc) = uVar8;
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
  }
  return;
}






// 函数: void FUN_1802e5aee(int64_t param_1,float param_2,uint64_t param_3,float *param_4)
void FUN_1802e5aee(int64_t param_1,float param_2,uint64_t param_3,float *param_4)

{
  uint64_t *puVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t in_RAX;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t *unaff_RDI;
  int64_t *in_R10;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = *(int64_t *)(param_1 + 0x90);
  iVar2 = *(int *)(lVar3 + 4 + in_RAX * 0xc);
  if (iVar2 != -1) {
    lVar5 = (int64_t)iVar2 * 0x2c;
    fVar9 = *(float *)(lVar5 + 0xe8 + (int64_t)in_R10) - param_4[1];
    fVar10 = *(float *)(lVar5 + 0xe4 + (int64_t)in_R10) - *param_4;
    fVar8 = *(float *)(lVar5 + 0xec + (int64_t)in_R10) - param_4[2];
    param_2 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
    if (param_2 < *(float *)(&unknown_var_1608_ptr + (int64_t)*(char *)(lVar3 + in_RAX * 0xc) * 4)) {
      return;
    }
    param_2 = param_2 + *(float *)(lVar5 + 0xf4 + (int64_t)in_R10);
  }
  LOCK();
  lVar5 = *in_R10;
  *in_R10 = *in_R10 + 1;
  UNLOCK();
  uVar4 = unaff_RDI[1];
  uVar7 = (uint)lVar5 & 0x1fff;
  lVar6 = (uint64_t)uVar7 * 0x2c;
  puVar1 = (uint64_t *)(lVar6 + 0xd4 + (int64_t)in_R10);
  *puVar1 = *unaff_RDI;
  puVar1[1] = uVar4;
  uVar4 = *(uint64_t *)(param_4 + 2);
  puVar1 = (uint64_t *)(lVar6 + 0xe4 + (int64_t)in_R10);
  *puVar1 = *(uint64_t *)param_4;
  puVar1[1] = uVar4;
  lVar5 = in_R10[5];
  *(float *)(lVar6 + 0xf4 + (int64_t)in_R10) = param_2;
  *(int *)(lVar6 + 0xf8 + (int64_t)in_R10) = (int)lVar5;
  *(int32_t *)(lVar6 + 0xfc + (int64_t)in_R10) = *(int32_t *)(lVar3 + 4 + in_RAX * 0xc);
  *(uint *)(lVar3 + 4 + in_RAX * 0xc) = uVar7;
  LOCK();
  in_R10[1] = in_R10[1] + 1;
  UNLOCK();
  return;
}






// 函数: void FUN_1802e5bd6(void)
void FUN_1802e5bd6(void)

{
  return;
}






// 函数: void FUN_1802e5be0(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_1802e5be0(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  int64_t lVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0x30) + 0x10);
  iVar22 = 0;
  lVar19 = *(int64_t *)(param_1 + 0x98) - *(int64_t *)(param_1 + 0x90);
  uVar16 = lVar19 / 0xc;
  lVar17 = (int64_t)(int)uVar16;
  if (0 < (int)uVar16) {
    lVar18 = 0;
    lVar21 = 0;
    do {
      lVar8 = *(int64_t *)(param_1 + 0x90);
      if (*(char *)(lVar21 + 8 + lVar8) != '\0') {
        fVar3 = *(float *)(&unknown_var_5608_ptr + (int64_t)*(char *)(lVar21 + lVar8) * 4);
        uVar5 = *(uint *)(lVar21 + 4 + lVar8);
        uVar16 = (uint64_t)uVar5;
        if (uVar5 != 0xffffffff) {
          puVar20 = (uint64_t *)(lVar18 * 0x50 + lVar7);
          fVar25 = 0.0;
          while( true ) {
            lVar19 = (int64_t)(int)uVar16 * 0x2c;
            iVar6 = *(int *)(lVar19 + 0xfc + param_1);
            uVar16 = (uint64_t)iVar6;
            if (iVar6 == -1) break;
            param_4 = uVar16 * 0x2c;
            fVar4 = *(float *)(lVar19 + 0xf8 + param_1);
            fVar23 = fVar4 * fVar25;
            fVar24 = *(float *)(param_4 + 0xf8 + param_1);
            if (fVar24 <= 0.0) {
              fVar24 = 0.0;
            }
            fVar25 = 1.0;
            if (0.0 < fVar4) {
              iVar22 = iVar22 + 1;
              lVar18 = lVar18 + 1;
              puVar1 = (uint64_t *)(lVar19 + 0xd4 + param_1);
              uVar11 = puVar1[1];
              *puVar20 = *puVar1;
              puVar20[1] = uVar11;
              puVar1 = (uint64_t *)(lVar19 + 0xe4 + param_1);
              uVar11 = puVar1[1];
              puVar20[2] = *puVar1;
              puVar20[3] = uVar11;
              puVar1 = (uint64_t *)(param_4 + 0xd4 + param_1);
              uVar11 = puVar1[1];
              puVar20[4] = *puVar1;
              puVar20[5] = uVar11;
              puVar2 = (int32_t *)(param_4 + 0xe4 + param_1);
              uVar13 = puVar2[1];
              uVar14 = puVar2[2];
              uVar15 = puVar2[3];
              *(int32_t *)(puVar20 + 6) = *puVar2;
              *(int32_t *)((int64_t)puVar20 + 0x34) = uVar13;
              *(int32_t *)(puVar20 + 7) = uVar14;
              *(int32_t *)((int64_t)puVar20 + 0x3c) = uVar15;
              *(int32_t *)(puVar20 + 8) = *(int32_t *)(lVar19 + 0xf4 + param_1);
              *(int32_t *)((int64_t)puVar20 + 0x44) = *(int32_t *)(param_4 + 0xf4 + param_1);
              *(float *)(puVar20 + 9) = fVar23 * fVar3;
              *(float *)((int64_t)puVar20 + 0x4c) = fVar24 * fVar3;
              puVar20 = puVar20 + 10;
              fVar25 = 1.0;
            }
          }
        }
      }
      lVar21 = lVar21 + 0xc;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  plVar9 = *(int64_t **)(param_1 + 0x18);
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,uVar16,lVar19,param_4,0xfffffffffffffffe);
  }
  plVar10 = *(int64_t **)(param_2 + 0x34e8);
  *(int64_t **)(param_2 + 0x34e8) = plVar9;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x38))();
  }
  plVar9 = *(int64_t **)(param_1 + 0x10);
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plVar10 = *(int64_t **)(param_2 + 0x34f8);
  *(int64_t **)(param_2 + 0x34f8) = plVar9;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x38))();
  }
  plVar9 = *(int64_t **)(param_1 + 0x18);
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plVar10 = *(int64_t **)(param_2 + 0x34e8);
  *(int64_t **)(param_2 + 0x34e8) = plVar9;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x38))();
  }
  plVar9 = *(int64_t **)(param_1 + 0x20);
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plVar10 = *(int64_t **)(param_2 + 0x34f0);
  *(int64_t **)(param_2 + 0x34f0) = plVar9;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x38))();
  }
  *(int *)(param_2 + 0x3508) = iVar22;
  plVar9 = *(int64_t **)(param_1 + 0x30);
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  plVar10 = *(int64_t **)(param_2 + 0x3500);
  *(int64_t **)(param_2 + 0x3500) = plVar9;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x38))();
  }
  uVar11 = *(uint64_t *)(param_1 + 0x30);
  *(uint64_t *)(param_1 + 0x30) = 0;
  uVar12 = *(uint64_t *)(param_1 + 0x38);
  *(uint64_t *)(param_1 + 0x38) = 0;
  plVar9 = *(int64_t **)(param_1 + 0x30);
  *(uint64_t *)(param_1 + 0x30) = uVar12;
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x38))();
  }
  plVar9 = *(int64_t **)(param_1 + 0x38);
  *(uint64_t *)(param_1 + 0x38) = uVar11;
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




