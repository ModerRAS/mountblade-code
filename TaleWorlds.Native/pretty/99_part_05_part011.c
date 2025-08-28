#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part011.c - 4 个函数

// 函数: void FUN_1802db450(int64_t param_1,uint64_t *param_2,int32_t *param_3,int32_t *param_4,
void FUN_1802db450(int64_t param_1,uint64_t *param_2,int32_t *param_3,int32_t *param_4,
                  int32_t param_5)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  int32_t *puVar17;
  int32_t *puVar18;
  
  uVar1 = *(int32_t *)param_2;
  uVar2 = *(int32_t *)((int64_t)param_2 + 4);
  uVar13 = *param_2;
  uVar3 = *(int32_t *)(param_2 + 1);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0xc);
  uVar14 = param_2[1];
  puVar17 = *(int32_t **)(param_1 + 0x30);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = *param_4;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  if (puVar17 < *(int32_t **)(param_1 + 0x38)) {
    *(int32_t **)(param_1 + 0x30) = puVar17 + 0xd;
    *puVar17 = uVar1;
    puVar17[1] = uVar2;
    puVar17[2] = uVar3;
    puVar17[3] = uVar4;
    puVar17[4] = uVar5;
    puVar17[5] = uVar6;
    puVar17[6] = uVar7;
    puVar17[7] = uVar8;
    puVar17[8] = uVar9;
    puVar17[9] = uVar10;
    puVar17[10] = uVar11;
    puVar17[0xb] = uVar12;
    puVar17[0xc] = param_5;
    return;
  }
  puVar18 = *(int32_t **)(param_1 + 0x28);
  lVar16 = ((int64_t)puVar17 - (int64_t)puVar18) / 0x34;
  if (lVar16 == 0) {
    lVar16 = 1;
  }
  else {
    lVar16 = lVar16 * 2;
    if (lVar16 == 0) {
      puVar15 = (uint64_t *)0x0;
      goto LAB_1802db516;
    }
  }
  puVar15 = (uint64_t *)
            CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 0x34,*(int8_t *)(param_1 + 0x40));
  puVar18 = *(int32_t **)(param_1 + 0x28);
  puVar17 = *(int32_t **)(param_1 + 0x30);
LAB_1802db516:
  if (puVar18 != puVar17) {
                    // WARNING: Subroutine does not return
    memmove(puVar15,puVar18,(int64_t)puVar17 - (int64_t)puVar18);
  }
  *puVar15 = uVar13;
  puVar15[1] = uVar14;
  *(int32_t *)(puVar15 + 2) = uVar5;
  *(int32_t *)((int64_t)puVar15 + 0x14) = uVar6;
  *(int32_t *)(puVar15 + 3) = uVar7;
  *(int32_t *)((int64_t)puVar15 + 0x1c) = uVar8;
  *(int32_t *)(puVar15 + 4) = uVar9;
  *(int32_t *)((int64_t)puVar15 + 0x24) = uVar10;
  *(int32_t *)(puVar15 + 5) = uVar11;
  *(int32_t *)((int64_t)puVar15 + 0x2c) = uVar12;
  *(int32_t *)(puVar15 + 6) = param_5;
  if (*(int64_t *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(param_1 + 0x28) = puVar15;
  *(int64_t *)(param_1 + 0x38) = lVar16 * 0x34 + (int64_t)puVar15;
  *(int64_t *)(param_1 + 0x30) = (int64_t)puVar15 + 0x34;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802db4bc(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_1802db4bc(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  uint64_t param_9)

{
  uint64_t *puVar1;
  int64_t unaff_RBX;
  int64_t lVar2;
  int64_t unaff_RDI;
  int32_t unaff_R14D;
  uint64_t uStackX_20;
  
  if (param_1 / 0x34 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = (param_1 / 0x34) * 2;
    if (lVar2 == 0) {
      puVar1 = (uint64_t *)0x0;
      goto LAB_1802db516;
    }
  }
  puVar1 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 0x34,*(int8_t *)(unaff_RBX + 0x40));
  param_4 = *(int64_t *)(unaff_RBX + 0x28);
  unaff_RDI = *(int64_t *)(unaff_RBX + 0x30);
LAB_1802db516:
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar1,param_4,unaff_RDI - param_4);
  }
  *puVar1 = uStackX_20;
  puVar1[1] = param_5;
  *(int32_t *)(puVar1 + 2) = (int32_t)param_6;
  *(int32_t *)((int64_t)puVar1 + 0x14) = param_6._4_4_;
  *(int32_t *)(puVar1 + 3) = (int32_t)param_7;
  *(int32_t *)((int64_t)puVar1 + 0x1c) = param_7._4_4_;
  *(int32_t *)(puVar1 + 4) = (int32_t)param_8;
  *(int32_t *)((int64_t)puVar1 + 0x24) = param_8._4_4_;
  *(int32_t *)(puVar1 + 5) = (int32_t)param_9;
  *(int32_t *)((int64_t)puVar1 + 0x2c) = param_9._4_4_;
  *(int32_t *)(puVar1 + 6) = unaff_R14D;
  if (*(int64_t *)(unaff_RBX + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(unaff_RBX + 0x28) = puVar1;
  *(int64_t *)(unaff_RBX + 0x38) = lVar2 * 0x34 + (int64_t)puVar1;
  *(int64_t *)(unaff_RBX + 0x30) = (int64_t)puVar1 + 0x34;
  return;
}



void thunk_CoreEngineMemoryPoolCleaner(void)

{
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_1802db5b0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_1802db5b0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int64_t param_5)

{
  uint64_t uVar1;
  void *puVar2;
  void *puStack_60;
  int64_t lStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_5 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_5 + 8);
  }
  FUN_180627c50(&puStack_60,puVar2,FUN_180627c50,param_4,0xfffffffffffffffe);
  param_5 = CONCAT44(param_3,param_2);
  uStack_40 = param_5;
  uVar1 = *(uint64_t *)(param_1 + 0x50);
  uStack_38 = param_4;
  if (uVar1 < *(uint64_t *)(param_1 + 0x58)) {
    *(uint64_t *)(param_1 + 0x50) = uVar1 + 0x30;
    CoreEngineDataTransformer(uVar1);
    *(uint64_t *)(uVar1 + 0x20) = uStack_40;
    *(int32_t *)(uVar1 + 0x28) = uStack_38;
  }
  else {
    FUN_1802dcad0(param_1 + 0x48,&puStack_60);
  }
  puStack_60 = &system_data_buffer_ptr;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802db6d0(int8_t *param_1)
void FUN_1802db6d0(int8_t *param_1)

{
  uint64_t uVar1;
  int64_t **pplVar2;
  int64_t *plVar3;
  int64_t ***ppplVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int8_t auStack_1d8 [32];
  int64_t ***ppplStack_1b8;
  int64_t **pplStack_1b0;
  int64_t **pplStack_1a8;
  int64_t *plStack_1a0;
  int64_t *plStack_198;
  int64_t *plStack_190;
  int64_t ***ppplStack_188;
  int64_t **pplStack_180;
  uint64_t uStack_178;
  int64_t **pplStack_170;
  int64_t *plStack_168;
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  int8_t auStack_140 [72];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  iVar7 = 0x10;
  if ((*(int64_t *)(param_1 + 0x68) == 0) ||
     ((uint64_t)(int64_t)*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x68) + 0x18) + 0x184) <
      (uint64_t)(((*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 8)) / 0x28) * 2))) {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa0,8,3);
    pplVar2 = (int64_t **)FUN_1800842a0(uVar1);
    pplStack_170 = pplVar2;
    if (pplVar2 != (int64_t **)0x0) {
      (*(code *)(*pplVar2)[5])(pplVar2);
    }
    if (*(int64_t *)(param_1 + 0x68) == 0) {
      iVar5 = 0x10;
    }
    else {
      iVar5 = (int)((*(int64_t *)(param_1 + 0x18) - *(int64_t *)(param_1 + 8)) / 0x28) * 2;
    }
    *(int *)(pplVar2 + 2) = iVar5 * 2;
    *(int16_t *)((int64_t)pplVar2 + 0x14) = 0x104;
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
    puStack_158 = &unknown_var_3480_ptr;
    puStack_150 = auStack_140;
    auStack_140[0] = 0;
    uStack_148 = 0x13;
    ppplStack_1b8 = (int64_t ***)plVar3;
    strcpy_s(auStack_140,0x40,&unknown_var_9840_ptr);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&unknown_var_7064_ptr;
    LOCK();
    *(int8_t *)(plVar3 + 2) = 0;
    UNLOCK();
    LOCK();
    *(int32_t *)((int64_t)plVar3 + 0x14) = 0;
    UNLOCK();
    plVar3[3] = 0;
    plVar3[4] = 0;
    plStack_198 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plStack_198 = *(int64_t **)(param_1 + 0x68);
    *(int64_t **)(param_1 + 0x68) = plVar3;
    if (plStack_198 != (int64_t *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
    puStack_158 = &system_state_ptr;
    uVar1 = *(uint64_t *)(param_1 + 0x68);
    ppplStack_1b8 = &pplStack_1b0;
    pplStack_1b0 = pplVar2;
    (*(code *)(*pplVar2)[5])(pplVar2);
    FUN_180255880(uVar1,&pplStack_1b0);
    *param_1 = 1;
    (*(code *)(*pplVar2)[7])(pplVar2);
  }
  if ((*(int64_t *)(param_1 + 0x70) == 0) ||
     ((uint64_t)(int64_t)*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x70) + 0x18) + 0x184) <
      (uint64_t)(((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x28)) / 0x34) * 3))) {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa0,8,3);
    pplVar2 = (int64_t **)FUN_1800842a0(uVar1);
    pplStack_180 = pplVar2;
    if (pplVar2 != (int64_t **)0x0) {
      (*(code *)(*pplVar2)[5])(pplVar2);
    }
    if (*(int64_t *)(param_1 + 0x70) == 0) {
      iVar5 = 0x10;
    }
    else {
      iVar5 = (int)((*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x28)) / 0x34) * 2;
    }
    *(int *)(pplVar2 + 2) = iVar5 * 3;
    *(int16_t *)((int64_t)pplVar2 + 0x14) = 0x104;
    plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
    puStack_f8 = &unknown_var_3480_ptr;
    puStack_f0 = auStack_e0;
    auStack_e0[0] = 0;
    uStack_e8 = 0x17;
    ppplStack_1b8 = (int64_t ***)plVar3;
    strcpy_s(auStack_e0,0x40,&unknown_var_9816_ptr);
    *plVar3 = (int64_t)&system_handler1_ptr;
    *plVar3 = (int64_t)&system_handler2_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (int64_t)&unknown_var_7064_ptr;
    LOCK();
    *(int8_t *)(plVar3 + 2) = 0;
    UNLOCK();
    LOCK();
    *(int32_t *)((int64_t)plVar3 + 0x14) = 0;
    UNLOCK();
    plVar3[3] = 0;
    plVar3[4] = 0;
    plStack_190 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    plStack_190 = *(int64_t **)(param_1 + 0x70);
    *(int64_t **)(param_1 + 0x70) = plVar3;
    if (plStack_190 != (int64_t *)0x0) {
      (**(code **)(*plStack_190 + 0x38))();
    }
    puStack_f8 = &system_state_ptr;
    uVar1 = *(uint64_t *)(param_1 + 0x70);
    ppplStack_1b8 = &pplStack_1a8;
    pplStack_1a8 = pplVar2;
    (*(code *)(*pplVar2)[5])(pplVar2);
    FUN_180255880(uVar1,&pplStack_1a8);
    *param_1 = 1;
    (*(code *)(*pplVar2)[7])(pplVar2);
  }
  lVar6 = *(int64_t *)(param_1 + 0x78);
  if ((lVar6 == 0) ||
     ((uint64_t)(int64_t)*(int *)(*(int64_t *)(lVar6 + 0x18) + 0x184) <
      (uint64_t)(((*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x48)) / 0x30) * 0x180))
     ) {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xa0,8,CONCAT71((int7)((uint64_t)lVar6 >> 8),3));
    plVar3 = (int64_t *)FUN_1800842a0(uVar1);
    plStack_168 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    if (*(int64_t *)(param_1 + 0x78) != 0) {
      lVar6 = (*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x48)) / 6 +
              (*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x48) >> 0x3f);
      iVar7 = ((int)(lVar6 >> 3) - (int)(lVar6 >> 0x3f)) * 0x80;
    }
    *(int *)(plVar3 + 2) = iVar7 * 6;
    *(int16_t *)((int64_t)plVar3 + 0x14) = 0x104;
    ppplVar4 = (int64_t ***)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x13;
    ppplStack_1b8 = ppplVar4;
    strcpy_s(auStack_80,0x40,&unknown_var_9792_ptr);
    *ppplVar4 = (int64_t **)&system_handler1_ptr;
    *ppplVar4 = (int64_t **)&system_handler2_ptr;
    *(int32_t *)(ppplVar4 + 1) = 0;
    *ppplVar4 = (int64_t **)&unknown_var_7064_ptr;
    LOCK();
    *(int8_t *)(ppplVar4 + 2) = 0;
    UNLOCK();
    LOCK();
    *(int32_t *)((int64_t)ppplVar4 + 0x14) = 0;
    UNLOCK();
    ppplVar4[3] = (int64_t **)0x0;
    ppplVar4[4] = (int64_t **)0x0;
    ppplStack_188 = ppplVar4;
    (*(code *)(*ppplVar4)[5])(ppplVar4);
    ppplStack_188 = *(int64_t ****)(param_1 + 0x78);
    *(int64_t ****)(param_1 + 0x78) = ppplVar4;
    if (ppplStack_188 != (int64_t ***)0x0) {
      (**(code **)((int64_t)*ppplStack_188 + 0x38))();
    }
    puStack_98 = &system_state_ptr;
    uVar1 = *(uint64_t *)(param_1 + 0x78);
    pplStack_180 = &plStack_1a0;
    plStack_1a0 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    FUN_180255880(uVar1,&plStack_1a0);
    *param_1 = 1;
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_1d8);
}



// WARNING: Removing unreachable block (ram,0x0001802dc922)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




