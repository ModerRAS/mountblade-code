#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part244.c - 10 个函数

// 函数: void FUN_18020cae0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18020cae0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  uVar6 = 0;
  for (lVar4 = *(int64_t *)(param_1 + 8); lVar4 != param_1; lVar4 = func_0x00018066bd70(lVar4)) {
    lVar5 = *(int64_t *)(lVar4 + 0x28);
    uVar8 = uVar6;
    uVar9 = uVar6;
    if (*(int64_t *)(lVar4 + 0x30) - lVar5 >> 3 != 0) {
      do {
        puVar2 = *(uint64_t **)(uVar9 + lVar5);
        if (puVar2 != (uint64_t *)0x0) {
          plVar1 = puVar2 + 5;
          iVar3 = (int)(puVar2[6] - *plVar1 >> 3);
          if (0 < iVar3) {
            do {
              FUN_18020d310(*(uint64_t *)(*plVar1 + uVar6 * 8));
              uVar6 = uVar6 + 1;
            } while ((int64_t)uVar6 < (int64_t)iVar3);
          }
          FUN_1800b8500(plVar1);
          FUN_180057830(plVar1);
          *puVar2 = &system_data_buffer_ptr;
          if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puVar2[1] = 0;
          *(int32_t *)(puVar2 + 3) = 0;
          *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar2);
        }
        *(uint64_t *)(uVar9 + *(int64_t *)(lVar4 + 0x28)) = 0;
        uVar7 = (int)uVar8 + 1;
        lVar5 = *(int64_t *)(lVar4 + 0x28);
        uVar8 = (uint64_t)uVar7;
        uVar9 = uVar9 + 8;
      } while ((uint64_t)(int64_t)(int)uVar7 <
               (uint64_t)(*(int64_t *)(lVar4 + 0x30) - lVar5 >> 3));
    }
    *(int64_t *)(lVar4 + 0x30) = lVar5;
  }
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 == (uint64_t *)0x0) {
    *(int64_t *)param_1 = param_1;
    *(int64_t *)(param_1 + 8) = param_1;
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(int8_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
    return;
  }
  FUN_180179f00(param_1,*puVar2,param_3,param_4,uVar10);
  if (puVar2[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020ccb0(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)
void FUN_18020ccb0(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4)

{
  byte bVar1;
  void *puVar2;
  uint64_t *puVar3;
  int iVar4;
  uint uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  void *puVar11;
  byte *pbVar12;
  void *puVar13;
  uint64_t *puVar14;
  int64_t *plVar15;
  int64_t lVar16;
  int64_t lVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  int iVar20;
  uint64_t uStackX_8;
  int64_t *plStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  int32_t uStack_a0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  uint64_t *puStack_68;
  uint64_t *puStack_60;
  uint64_t uStack_58;
  int64_t *plStack_50;
  uint64_t *puStack_48;
  
  puVar3 = core_system_data_memory;
  uStack_58 = 0xfffffffffffffffe;
  puStack_68 = core_system_data_memory;
  uVar18 = *system_main_module_state;
  uStackX_8 = param_1;
  SystemCore_EncryptionEngine0(&plStack_b8);
  iStack_8c = FUN_180141820(uVar18,&plStack_b8);
  plStack_b8 = (int64_t *)&system_data_buffer_ptr;
  if (plStack_b0 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plStack_b0 = (int64_t *)0x0;
  uStack_a0 = 0;
  plStack_b8 = (int64_t *)&system_state_ptr;
  puVar6 = (uint64_t *)puVar3[2];
  puVar14 = puVar3;
  if ((uint64_t *)puVar3[2] != (uint64_t *)0x0) {
    do {
      if (*(int *)(puVar6 + 4) < iStack_8c) {
        puVar7 = (uint64_t *)*puVar6;
      }
      else {
        puVar7 = (uint64_t *)puVar6[1];
        puVar14 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != (uint64_t *)0x0);
    if ((puVar14 != puVar3) && (*(int *)(puVar14 + 4) <= iStack_8c)) goto LAB_18020cd75;
  }
  puVar14 = puVar3;
LAB_18020cd75:
  iStack_90 = 0;
  iVar4 = (int)((int64_t)(puVar14[6] - puVar14[5]) >> 3);
  if (0 < iVar4) {
    lVar16 = 0;
    do {
      iVar20 = iStack_90;
      puVar13 = &system_buffer_ptr;
      if (*(void **)(param_3 + 8) != (void *)0x0) {
        puVar13 = *(void **)(param_3 + 8);
      }
      puVar2 = *(void **)(*(int64_t *)(puVar14[5] + lVar16 * 8) + 8);
      puVar11 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar11 = puVar2;
      }
      lVar8 = strstr(puVar11,puVar13);
      if (lVar8 != 0) {
        lVar16 = *(int64_t *)(puVar14[5] + (int64_t)iVar20 * 8);
        plVar19 = (int64_t *)(lVar16 + 0x28);
        iStack_94 = 0;
        lVar8 = *plVar19;
        plStack_70 = plVar19;
        if (*(int64_t *)(lVar16 + 0x30) - lVar8 >> 3 == 0) goto LAB_18020d12d;
        lStack_80 = 0;
        goto LAB_18020ce30;
      }
      iStack_90 = iVar20 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar4);
  }
  return;
LAB_18020ce30:
  lVar16 = lStack_80;
  plVar15 = *(int64_t **)(lStack_80 + lVar8);
  plStack_78 = plVar15;
  plStack_50 = plVar15;
  if (plVar15 != (int64_t *)0x0) {
    (**(code **)(*plVar15 + 0x28))(plVar15);
  }
  plStack_b8 = (int64_t *)0x0;
  plStack_b0 = (int64_t *)0x0;
  plStack_a8 = (int64_t *)0x0;
  uStack_a0 = 3;
  FUN_1802e8c60(plVar15);
  if (plStack_b0 < plStack_a8) {
    *plStack_b0 = (int64_t)plVar15;
    plVar9 = plStack_b0;
  }
  else {
    lVar8 = (int64_t)plStack_b0 - (int64_t)plStack_b8 >> 3;
    if (lVar8 == 0) {
      lVar8 = 1;
LAB_18020ceb6:
      plVar9 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr);
    }
    else {
      lVar8 = lVar8 * 2;
      if (lVar8 != 0) goto LAB_18020ceb6;
      plVar9 = (int64_t *)0x0;
    }
    if (plStack_b8 != plStack_b0) {
                    // WARNING: Subroutine does not return
      memmove(plVar9,plStack_b8,(int64_t)plStack_b0 - (int64_t)plStack_b8);
    }
    *plVar9 = (int64_t)plVar15;
    if (plStack_b8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plStack_a8 = plVar9 + lVar8;
    plStack_b8 = plVar9;
  }
  plStack_b0 = plVar9 + 1;
  iStack_98 = 0;
  if ((int64_t)plStack_b0 - (int64_t)plStack_b8 >> 3 != 0) {
    lStack_88 = 0;
    do {
      lVar16 = *param_4;
      if (param_4[1] - lVar16 >> 5 != 0) {
        lVar8 = *(int64_t *)(lStack_88 + (int64_t)plStack_b8) + 400;
        lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x78,
                               *(int8_t *)
                                (*(int64_t *)(lStack_88 + (int64_t)plStack_b8) + 0x1b8));
        puStack_48 = (uint64_t *)(lVar10 + 0x20);
        *puStack_48 = &system_state_ptr;
        *(uint64_t *)(lVar10 + 0x28) = 0;
        *(int32_t *)(lVar10 + 0x30) = 0;
        *puStack_48 = &unknown_var_3480_ptr;
        *(int8_t **)(lVar10 + 0x28) = (int8_t *)(lVar10 + 0x38);
        *(int32_t *)(lVar10 + 0x30) = 0;
        *(int8_t *)(lVar10 + 0x38) = 0;
        *(int32_t *)(lVar10 + 0x30) = *(int32_t *)(lVar16 + 0x10);
        puVar13 = &system_buffer_ptr;
        if (*(void **)(lVar16 + 8) != (void *)0x0) {
          puVar13 = *(void **)(lVar16 + 8);
        }
        puStack_60 = puStack_48;
        strcpy_s(*(uint64_t *)(lVar10 + 0x28),0x40,puVar13);
        puStack_60 = (uint64_t *)lVar10;
        lVar16 = FUN_1800590b0(lVar8,&uStackX_8,puStack_48);
        if ((char)uStackX_8 == '\0') {
          *puStack_48 = &system_state_ptr;
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar10);
        }
        if (lVar16 == lVar8) goto LAB_18020d04f;
        if (*(int *)(lVar16 + 0x30) == 0) goto LAB_18020d047;
        if (*(int *)(lVar10 + 0x30) == 0) goto LAB_18020d04f;
        pbVar12 = *(byte **)(lVar16 + 0x28);
        lVar17 = *(int64_t *)(lVar10 + 0x28) - (int64_t)pbVar12;
        goto LAB_18020d030;
      }
      iStack_98 = iStack_98 + 1;
      lStack_88 = lStack_88 + 8;
      plVar15 = plStack_78;
      lVar16 = lStack_80;
      plVar19 = plStack_70;
    } while ((uint64_t)(int64_t)iStack_98 <
             (uint64_t)((int64_t)plStack_b0 - (int64_t)plStack_b8 >> 3));
  }
  if (plStack_b8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (plVar15 != (int64_t *)0x0) {
    (**(code **)(*plVar15 + 0x38))(plVar15);
  }
  iStack_94 = iStack_94 + 1;
  lStack_80 = lVar16 + 8;
  lVar8 = *plVar19;
  iVar20 = iStack_90;
  if ((uint64_t)(plVar19[1] - lVar8 >> 3) <= (uint64_t)(int64_t)iStack_94) {
LAB_18020d12d:
    FUN_18020b790(puStack_68,iStack_8c,iVar20);
    return;
  }
  goto LAB_18020ce30;
  while (pbVar12 = pbVar12 + 1, uVar5 != 0) {
LAB_18020d030:
    bVar1 = *pbVar12;
    uVar5 = (uint)pbVar12[lVar17];
    if (bVar1 != uVar5) break;
  }
  if ((int)(bVar1 - uVar5) < 1) {
LAB_18020d047:
    uVar18 = 1;
  }
  else {
LAB_18020d04f:
    uVar18 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar10,lVar16,lVar8,uVar18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020d160(int64_t param_1)
void FUN_18020d160(int64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plStack_38;
  int64_t *plStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  
  uVar9 = 0;
  plStack_38 = (int64_t *)0x0;
  plStack_30 = (int64_t *)0x0;
  uStack_28 = 0;
  uStack_20 = 3;
  FUN_1802f5440(&plStack_38,0,*(uint64_t *)(param_1 + 0x200),*(uint64_t *)(param_1 + 0x208));
  uVar8 = uVar9;
  uVar10 = uVar9;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f1890(*(uint64_t *)(uVar10 + *(int64_t *)(param_1 + 0x1c0)),&plStack_38);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar10 = uVar10 + 8;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  lVar6 = system_cache_buffer;
  uVar8 = uVar9;
  plVar2 = plStack_38;
  plVar3 = plStack_30;
  if ((int64_t)plStack_30 - (int64_t)plStack_38 >> 3 != 0) {
    do {
      lVar4 = core_system_data_memory;
      if (**(char **)(*(int64_t *)(uVar8 + (int64_t)plStack_38) + 0x10) != '\0') {
        iVar1 = *(int *)(*(int64_t *)(uVar8 + (int64_t)plStack_38) + 0x50);
        if ((iVar1 != 0) && (lVar6 != 0)) {
          (**(code **)(lVar6 + 0x30))(iVar1);
        }
        (**(code **)(lVar4 + 0x200))(iVar1);
        lVar6 = system_cache_buffer;
        if ((iVar1 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar1);
          lVar6 = system_cache_buffer;
        }
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar7;
      uVar8 = uVar8 + 8;
      plVar2 = plStack_38;
      plVar3 = plStack_30;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)((int64_t)plStack_30 - (int64_t)plStack_38 >> 3));
  }
  for (; plVar5 = plStack_30, plVar2 != plStack_30; plVar2 = plVar2 + 1) {
    plStack_30 = plVar3;
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
    plVar3 = plStack_30;
    plStack_30 = plVar5;
  }
  if (plStack_38 == (int64_t *)0x0) {
    return;
  }
  plStack_30 = plVar3;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020d310(int64_t param_1)
void FUN_18020d310(int64_t param_1)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plStack_38;
  int64_t *plStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  
  uVar9 = 0;
  plStack_38 = (int64_t *)0x0;
  plStack_30 = (int64_t *)0x0;
  uStack_28 = 0;
  uStack_20 = 3;
  FUN_1802f5440(&plStack_38,0,*(uint64_t *)(param_1 + 0x200),*(uint64_t *)(param_1 + 0x208));
  uVar8 = uVar9;
  uVar10 = uVar9;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f1890(*(uint64_t *)(uVar10 + *(int64_t *)(param_1 + 0x1c0)),&plStack_38);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar10 = uVar10 + 8;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  lVar6 = system_cache_buffer;
  uVar8 = uVar9;
  plVar2 = plStack_38;
  plVar3 = plStack_30;
  if ((int64_t)plStack_30 - (int64_t)plStack_38 >> 3 != 0) {
    do {
      lVar4 = core_system_data_memory;
      if (**(char **)(*(int64_t *)(uVar8 + (int64_t)plStack_38) + 0x10) != '\0') {
        iVar1 = *(int *)(*(int64_t *)(uVar8 + (int64_t)plStack_38) + 0x50);
        if ((iVar1 != 0) && (lVar6 != 0)) {
          (**(code **)(lVar6 + 0x30))(iVar1);
        }
        (**(code **)(lVar4 + 0x178))(iVar1);
        lVar6 = system_cache_buffer;
        if ((iVar1 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar1);
          lVar6 = system_cache_buffer;
        }
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar7;
      uVar8 = uVar8 + 8;
      plVar2 = plStack_38;
      plVar3 = plStack_30;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)((int64_t)plStack_30 - (int64_t)plStack_38 >> 3));
  }
  for (; plVar5 = plStack_30, plVar2 != plStack_30; plVar2 = plVar2 + 1) {
    plStack_30 = plVar3;
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
    plVar3 = plStack_30;
    plStack_30 = plVar5;
  }
  if (plStack_38 == (int64_t *)0x0) {
    return;
  }
  plStack_30 = plVar3;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020d4c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18020d4c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  int iVar5;
  int iVar6;
  uint64_t *puVar7;
  int32_t uVar8;
  uint64_t *puStack_78;
  uint64_t *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  uint64_t *puStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  int32_t uStack_40;
  
  puStack_58 = (uint64_t *)0x0;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 3;
  FUN_18020c8f0(core_system_data_memory,&puStack_58,param_3,param_4,0,0xfffffffffffffffe);
  iVar6 = 0;
  uVar2 = lStack_50 - (int64_t)puStack_58 >> 3;
  puVar7 = puStack_58;
  if (uVar2 != 0) {
    do {
      uVar1 = *puVar7;
      puStack_78 = (uint64_t *)0x0;
      puStack_70 = (uint64_t *)0x0;
      puStack_68 = (uint64_t *)0x0;
      uStack_60 = 3;
      uVar8 = 1;
      FUN_1802e8c60(uVar1,&puStack_78);
      if (puStack_70 < puStack_68) {
        *puStack_70 = uVar1;
        puVar4 = puStack_70;
      }
      else {
        lVar3 = (int64_t)puStack_70 - (int64_t)puStack_78 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_18020d5b5:
          puVar4 = (uint64_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,(int8_t)uStack_60,param_4,uVar8);
        }
        else {
          lVar3 = lVar3 * 2;
          if (lVar3 != 0) goto LAB_18020d5b5;
          puVar4 = (uint64_t *)0x0;
        }
        if (puStack_78 != puStack_70) {
                    // WARNING: Subroutine does not return
          memmove(puVar4,puStack_78,(int64_t)puStack_70 - (int64_t)puStack_78);
        }
        *puVar4 = uVar1;
        if (puStack_78 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puStack_68 = puVar4 + lVar3;
        puStack_78 = puVar4;
      }
      puStack_70 = puVar4 + 1;
      iVar5 = 0;
      if ((int64_t)puStack_70 - (int64_t)puStack_78 >> 3 != 0) {
        lVar3 = 0;
        do {
          FUN_1802f1930(*(uint64_t *)(lVar3 + (int64_t)puStack_78));
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        } while ((uint64_t)(int64_t)iVar5 <
                 (uint64_t)((int64_t)puStack_70 - (int64_t)puStack_78 >> 3));
      }
      if (puStack_78 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while ((uint64_t)(int64_t)iVar6 < uVar2);
  }
  if (puStack_58 == (uint64_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



uint64_t * FUN_18020d6c0(uint64_t *param_1,int *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int8_t auStackX_8 [32];
  
  puVar1 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  if (puVar1 != (uint64_t *)0x0) {
    param_3 = param_1;
    do {
      if (*(int *)(puVar1 + 4) < *param_2) {
        puVar1 = (uint64_t *)*puVar1;
      }
      else {
        param_3 = puVar1;
        puVar1 = (uint64_t *)puVar1[1];
      }
      puVar3 = param_3;
    } while (puVar1 != (uint64_t *)0x0);
  }
  if ((puVar3 != param_1) && (*(int *)(puVar3 + 4) <= *param_2)) {
    return puVar3 + 5;
  }
  plVar2 = (int64_t *)FUN_18020d730(param_1,auStackX_8,param_3,puVar3,param_2);
  return (uint64_t *)(*plVar2 + 0x28);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18020d730(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int *param_5)

{
  bool bVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  plVar3 = (int64_t *)*param_1;
  if ((param_4 == plVar3) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar3, *(int *)(plVar3 + 4) < *param_5)) {
LAB_18020d79f:
      uVar6 = 0;
      goto LAB_18020d7a2;
    }
  }
  else {
    plVar3 = (int64_t *)func_0x00018066bd70(param_4);
    if (((int)param_4[4] < *param_5) && (*param_5 < (int)plVar3[4])) {
      if (*param_4 == 0) goto LAB_18020d79f;
      uVar6 = 1;
      param_4 = plVar3;
LAB_18020d7a2:
      if (param_4 != (int64_t *)0x0) {
        FUN_18020da10(param_1,param_2,param_4,uVar6,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar3 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar4 = (int64_t *)param_1[2];
    do {
      plVar3 = plVar4;
      bVar1 = *param_5 < (int)plVar3[4];
      if (*param_5 < (int)plVar3[4]) {
        plVar4 = (int64_t *)plVar3[1];
      }
      else {
        plVar4 = (int64_t *)*plVar3;
      }
    } while (plVar4 != (int64_t *)0x0);
  }
  plVar4 = plVar3;
  if (bVar1) {
    if (plVar3 == (int64_t *)param_1[1]) {
      iVar2 = *param_5;
      goto LAB_18020d80a;
    }
    plVar4 = (int64_t *)func_0x00018066b9a0(plVar3);
  }
  iVar2 = *param_5;
  if (iVar2 <= (int)plVar4[4]) {
    *param_2 = plVar4;
    return param_2;
  }
LAB_18020d80a:
  if ((plVar3 == param_1) || (iVar2 < (int)plVar3[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,(char)param_1[5]);
  *(int *)(lVar5 + 0x20) = *param_5;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(uint64_t *)(lVar5 + 0x30) = 0;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(int32_t *)(lVar5 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,plVar3,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020d8a0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18020d8a0(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  
  puVar9 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lVar8 = (int64_t)puVar9 - (int64_t)puVar4 >> 5;
  puVar3 = (uint64_t *)0x0;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) goto LAB_18020d911;
  }
  puVar3 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar9 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_18020d911:
  puVar6 = puVar3;
  if (puVar4 != puVar9) {
    lVar5 = (int64_t)puVar3 - (int64_t)puVar4;
    puVar4 = puVar4 + 2;
    do {
      *puVar6 = puVar4[-2];
      *(int32_t *)(lVar5 + -8 + (int64_t)puVar4) = *(int32_t *)(puVar4 + -1);
      *(uint64_t *)(lVar5 + (int64_t)puVar4) = *puVar4;
      *puVar4 = 0;
      *(uint64_t *)(lVar5 + 8 + (int64_t)puVar4) = puVar4[1];
      puVar6 = puVar6 + 4;
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 4;
    } while (puVar1 != puVar9);
  }
  *puVar6 = *param_2;
  *(int32_t *)(puVar6 + 1) = *(int32_t *)(param_2 + 1);
  plVar2 = (int64_t *)param_2[2];
  puVar6[2] = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  puVar6[3] = param_2[3];
  lVar5 = param_1[1];
  lVar7 = *param_1;
  if (lVar7 != lVar5) {
    do {
      if (*(int64_t **)(lVar7 + 0x10) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar7 + 0x10) + 0x38))();
      }
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar5);
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    *param_1 = (int64_t)puVar3;
    param_1[1] = (int64_t)(puVar6 + 4);
    param_1[2] = (int64_t)(puVar3 + lVar8 * 4);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020da10(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_18020da10(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int *param_5)

{
  int64_t lVar1;
  int32_t uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) && (*(int *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(int *)(lVar1 + 0x20) = *param_5;
  *(uint64_t *)(lVar1 + 0x28) = 0;
  *(uint64_t *)(lVar1 + 0x30) = 0;
  *(uint64_t *)(lVar1 + 0x38) = 0;
  *(int32_t *)(lVar1 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}





// 函数: void FUN_18020dae0(uint param_1,int param_2,int64_t *param_3)
void FUN_18020dae0(uint param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int8_t uStack_48;
  uint64_t uStack_40;
  int64_t *plStack_30;
  uint64_t uStack_28;
  int16_t uStack_20;
  
  if ((int)param_1 < param_2) {
    uVar5 = (uint64_t)param_1;
    do {
      uVar3 = (uint64_t)((uint)uVar5 & 0xfff);
      lVar1 = (uVar5 >> 0xc) * 8;
      plVar2 = *(int64_t **)(*(int64_t *)(*param_3 + 8 + lVar1) + uVar3 * 0x30);
      uStack_58 = 0xffffffffffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      plStack_30 = plVar2;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      uStack_28 = 0;
      uStack_20 = 1;
      *(byte *)(plVar2 + 0x5d) = *(byte *)(plVar2 + 0x5d) | 0x80;
      uStack_40 = 0;
      FUN_1803bb5f0(&uStack_58,
                    *(uint64_t *)(*(int64_t *)(*param_3 + 8 + lVar1) + 8 + uVar3 * 0x30));
      (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar4 = (uint)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while ((int)uVar4 < param_2);
  }
  return;
}





// 函数: void FUN_18020dc20(int param_1,int param_2,int64_t *param_3)
void FUN_18020dc20(int param_1,int param_2,int64_t *param_3)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int8_t uStack_38;
  uint64_t uStack_30;
  int64_t *plStack_20;
  uint64_t uStack_18;
  int16_t uStack_10;
  
  uVar4 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)*param_3;
  lVar2 = (int64_t)param_1;
  if (lVar2 < param_2) {
    lVar3 = lVar2 << 5;
    lVar2 = param_2 - lVar2;
    do {
      plStack_20 = *(int64_t **)(lVar3 + 0x10 + *(int64_t *)*puVar1);
      uStack_48 = 0xffffffffffffffff;
      uStack_40 = 0;
      uStack_38 = 0;
      if (plStack_20 != (int64_t *)0x0) {
        (**(code **)(*plStack_20 + 0x28))();
      }
      uStack_18 = 0;
      uStack_10 = 1;
      *(byte *)(plStack_20 + 0x5d) = *(byte *)(plStack_20 + 0x5d) | 0x80;
      uStack_30 = 0;
      FUN_1803ba550(&uStack_48,*(uint64_t *)(*(int64_t *)*puVar1 + lVar3),puVar1[1],
                    *(uint64_t *)(*(int64_t *)*puVar1 + 0x18 + lVar3),0,puVar1[2],uVar4);
      if (plStack_20 != (int64_t *)0x0) {
        (**(code **)(*plStack_20 + 0x38))();
      }
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18020dd10(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c038d0;
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



// 函数: void FUN_18020ddf0(uint64_t param_1,int64_t param_2)
void FUN_18020ddf0(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  void *puVar2;
  int8_t auStack_838 [32];
  int8_t *puStack_818;
  int32_t uStack_810;
  int32_t uStack_808;
  int8_t *puStack_7f8;
  void **ppuStack_7f0;
  uint64_t uStack_7e8;
  int iStack_7dc;
  void *puStack_7d8;
  int8_t auStack_7d0 [8];
  int8_t auStack_7c8 [152];
  int8_t auStack_730 [104];
  int8_t auStack_6c8 [16];
  void *puStack_6b8;
  int8_t *puStack_6b0;
  int32_t uStack_6a8;
  int8_t auStack_6a0 [264];
  void *puStack_598;
  int8_t *puStack_590;
  int32_t uStack_588;
  int8_t auStack_580 [264];
  void *apuStack_478 [68];
  int8_t auStack_258 [560];
  uint64_t uStack_28;
  
  uStack_7e8 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_838;
  uStack_808 = 0;
  puStack_6b8 = &unknown_var_2008_ptr;
  puStack_6b0 = auStack_6a0;
  uStack_6a8 = 0;
  auStack_6a0[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_6a8 = (int32_t)lVar1;
    strcpy_s(auStack_6a0,0x100,param_2);
  }
  lVar1 = FUN_180624440(apuStack_478,&puStack_6b8);
  puStack_598 = &unknown_var_2008_ptr;
  puStack_590 = auStack_580;
  auStack_580[0] = 0;
  uStack_588 = *(int32_t *)(lVar1 + 0x10);
  puVar2 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar2 = *(void **)(lVar1 + 8);
  }
  strcpy_s(auStack_580,0x100,puVar2);
  apuStack_478[0] = &system_state_ptr;
  puStack_6b8 = &system_state_ptr;
  uStack_810 = 0x118;
  puStack_818 = auStack_258;
  MultiByteToWideChar(0xfde9,0,puStack_590,0xffffffff);
  puStack_7d8 = &unknown_var_2368_ptr;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(auStack_730);
  uStack_808 = 1;
  __0__basic_ostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (&puStack_7d8,auStack_7d0,0,0);
  *(void **)(auStack_7d0 + (int64_t)*(int *)(puStack_7d8 + 4) + -8) = &unknown_var_2384_ptr;
  *(int *)((int64_t)&iStack_7dc + (int64_t)*(int *)(puStack_7d8 + 4)) =
       *(int *)(puStack_7d8 + 4) + -0xa8;
  FUN_18009ec20(auStack_7d0);
  lVar1 = FUN_18009ec80(auStack_7d0,auStack_258,0x12);
  if (lVar1 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              (auStack_7d0 + (int64_t)*(int *)(puStack_7d8 + 4) + -8,2);
  }
  ppuStack_7f0 = &puStack_7d8;
  puStack_7f8 = (int8_t *)0x0;
  puStack_818 = (int8_t *)((uint64_t)puStack_818 & 0xffffffff00000000);
  FUN_1800a1310(auStack_6c8,&puStack_7f8,param_1,0);
  lVar1 = FUN_1800a19c0(auStack_7d0);
  if (lVar1 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              (auStack_7d0 + (int64_t)*(int *)(puStack_7d8 + 4) + -8,2);
  }
  puStack_7f8 = auStack_730;
  *(void **)(auStack_7d0 + (int64_t)*(int *)(puStack_7d8 + 4) + -8) = &unknown_var_2384_ptr;
  *(int *)((int64_t)&iStack_7dc + (int64_t)*(int *)(puStack_7d8 + 4)) =
       *(int *)(puStack_7d8 + 4) + -0xa8;
  FUN_18009fb60(auStack_7d0);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_7c8);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_730);
  puStack_598 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_838);
}





