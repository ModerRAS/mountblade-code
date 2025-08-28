#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part208.c - 8 个函数

// 函数: void FUN_18018b590(int64_t param_1)
void FUN_18018b590(int64_t param_1)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  void *puVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  void *puVar8;
  int aiStackX_8 [2];
  int64_t lStack_30;
  int *piStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  lVar3 = *(int64_t *)(param_1 + 0xb0);
  puVar4 = *(void **)(*(int64_t *)(lVar3 + 0xa8) + 0x70);
  puVar8 = &system_buffer_ptr;
  if (puVar4 != (void *)0x0) {
    puVar8 = puVar4;
  }
  (**(code **)(*(int64_t *)(lVar3 + 0x10) + 0x10))((int64_t *)(lVar3 + 0x10),puVar8);
  lVar5 = *(int64_t *)(*(int64_t *)(lVar3 + 0xa8) + 0x20);
  if (*(int64_t *)(lVar3 + 0xb0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(lVar3 + 0xb0) = 0;
  aiStackX_8[0] = *(int *)(lVar5 + 0x24);
  *(int *)(lVar3 + 0xb8) = aiStackX_8[0];
  iVar1 = *(int *)(lVar5 + 0x28);
  *(int *)(lVar3 + 0xbc) = iVar1;
  iVar2 = *(int *)(lVar5 + 0x2c);
  *(int *)(lVar3 + 0xc0) = iVar2;
  *(float *)(lVar3 + 0xc4) = 1.0 / (float)aiStackX_8[0];
  *(float *)(lVar3 + 200) = 1.0 / (float)iVar1;
  *(float *)(lVar3 + 0xcc) = 1.0 / (float)iVar2;
  aiStackX_8[0] = iVar2 * iVar1 * aiStackX_8[0];
  if (aiStackX_8[0] * 3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(aiStackX_8[0] * 3) * 4,3);
  }
  *(uint64_t *)(lVar3 + 0xb0) = uVar7;
  plVar6 = *(int64_t **)(*(int64_t *)(lVar3 + 0xa8) + 0x88);
  piStack_28 = aiStackX_8;
  pcStack_20 = (code *)&unknown_var_3120_ptr;
  pcStack_18 = FUN_18018c050;
  lStack_30 = lVar3;
  (**(code **)(*plVar6 + 0x60))
            (plVar6,&system_data_e0d0,*(int64_t *)(lVar3 + 0xa8) + 0xc,0,&lStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&lStack_30,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18018b740(int64_t param_1)
void FUN_18018b740(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void *puVar3;
  int64_t alStack_30 [3];
  
  plVar2 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3);
  *plVar2 = (int64_t)&system_handler1_ptr;
  *plVar2 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&unknown_var_1136_ptr;
  plVar1 = plVar2 + 2;
  *plVar1 = (int64_t)&system_state_ptr;
  plVar2[3] = 0;
  *(int32_t *)(plVar2 + 4) = 0;
  *plVar1 = (int64_t)&unknown_var_3432_ptr;
  plVar2[3] = (int64_t)(plVar2 + 5);
  *(int32_t *)(plVar2 + 4) = 0;
  *(int8_t *)(plVar2 + 5) = 0;
  plVar2[0x16] = 0;
  plVar2[0x15] = param_1;
  if (param_1 != 0) {
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      puVar3 = *(void **)(param_1 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar3);
  }
  plVar2[0x17] = 0;
  *(int32_t *)(plVar2 + 0x18) = 0;
  *(int32_t *)((int64_t)plVar2 + 0xc4) = 0x7f7fffff;
  *(int32_t *)(plVar2 + 0x19) = 0x7f7fffff;
  *(int32_t *)((int64_t)plVar2 + 0xcc) = 0x7f7fffff;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar1 = *(int64_t **)(param_1 + 0xb0);
  *(int64_t **)(param_1 + 0xb0) = plVar2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xb0);
  FUN_18018be60(core_system_data_config,alStack_30);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  plVar2 = *(int64_t **)(alStack_30[0] + 0x10);
  *(int64_t **)(alStack_30[0] + 0x10) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18018b8c0(int64_t param_1)
void FUN_18018b8c0(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  
  lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0xa8);
  lVar1 = *(int64_t *)(core_system_data_config + 8);
  plVar5 = (int64_t *)
           (lVar1 + ((*(uint64_t *)(lVar4 + 0x14) ^ *(uint64_t *)(lVar4 + 0xc)) %
                    (uint64_t)*(uint *)(core_system_data_config + 0x10)) * 8);
  plVar6 = (int64_t *)*plVar5;
  do {
    if (plVar6 == (int64_t *)0x0) {
LAB_18018b92f:
      lVar4 = *(int64_t *)(core_system_data_config + 0x10);
      plVar5 = (int64_t *)(lVar1 + lVar4 * 8);
      plVar6 = (int64_t *)*plVar5;
LAB_18018b93a:
      if (plVar6 == *(int64_t **)(lVar1 + lVar4 * 8)) {
        return;
      }
      lVar4 = plVar6[3];
      plVar2 = plVar5;
      while (lVar4 == 0) {
        plVar2 = plVar2 + 1;
        lVar4 = *plVar2;
      }
      plVar2 = (int64_t *)*plVar5;
      plVar3 = (int64_t *)plVar2[3];
      if (plVar2 == plVar6) {
        *plVar5 = (int64_t)plVar3;
      }
      else {
        for (; plVar3 != plVar6; plVar3 = (int64_t *)plVar3[3]) {
          plVar2 = plVar3;
        }
        plVar2[3] = plVar3[3];
      }
      if ((int64_t *)plVar6[2] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)plVar6[2] + 0x38))();
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar6);
    }
    if ((*(int64_t *)(lVar4 + 0xc) == *plVar6) && (*(int64_t *)(lVar4 + 0x14) == plVar6[1])) {
      if (plVar6 != (int64_t *)0x0) {
        lVar4 = *(int64_t *)(core_system_data_config + 0x10);
        goto LAB_18018b93a;
      }
      goto LAB_18018b92f;
    }
    plVar6 = (int64_t *)plVar6[3];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18018b9e0(int64_t param_1,int64_t param_2)
void FUN_18018b9e0(int64_t param_1,int64_t param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  byte *pbVar5;
  int32_t *puVar6;
  int iVar7;
  int iVar8;
  int64_t *plVar9;
  int8_t auStack_488 [32];
  uint64_t uStack_468;
  void *puStack_458;
  byte *pbStack_450;
  int iStack_448;
  byte abStack_440 [1032];
  uint64_t uStack_38;
  
  uStack_468 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_488;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
  iVar8 = 0;
  puStack_458 = &unknown_var_336_ptr;
  pbStack_450 = abStack_440;
  iStack_448 = 0;
  abStack_440[0] = 0;
  uVar3 = **(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar1;
  if (uVar3 != 0) {
    FUN_180045f60(&puStack_458,puVar1,uVar3);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
  }
  plVar9 = (int64_t *)0x180bf6740;
  do {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(*plVar9 + lVar4) != '\0');
    iVar7 = (int)lVar4;
    if (iStack_448 == iVar7) {
      if (iStack_448 != 0) {
        pbVar5 = pbStack_450;
        do {
          pbVar2 = pbVar5 + (*plVar9 - (int64_t)pbStack_450);
          iVar7 = (uint)*pbVar5 - (uint)*pbVar2;
          if (iVar7 != 0) break;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar2 != 0);
      }
LAB_18018baee:
      if (iVar7 == 0) {
        *(int32_t *)(param_1 + 8) = *(int32_t *)((int64_t)iVar8 * 0x10 + 0x180bf6748);
        goto LAB_18018baff;
      }
    }
    else if (iStack_448 == 0) goto LAB_18018baee;
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 2;
    if (0x180bf674f < (int64_t)plVar9) {
LAB_18018baff:
      puStack_458 = &system_state_ptr;
      *(int32_t *)(param_1 + 0x24) = **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      *(int32_t *)(param_1 + 0x28) = **(int32_t **)(param_2 + 8);
      *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      *(int32_t *)(param_1 + 0x2c) = **(int32_t **)(param_2 + 8);
      puVar6 = (int32_t *)(*(int64_t *)(param_2 + 8) + 4);
      *(int32_t **)(param_2 + 8) = puVar6;
      if (*(int *)(param_1 + 8) == 0) {
        *(int32_t *)(param_1 + 0x20) = *puVar6;
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0x1c) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0xc) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0x10) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0x14) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
        *(int32_t *)(param_1 + 0x18) = **(int32_t **)(param_2 + 8);
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 4;
      }
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_488);
    }
  } while( true );
}





// 函数: void FUN_18018bbd0(int64_t param_1,int64_t *param_2)
void FUN_18018bbd0(int64_t param_1,int64_t *param_2)

{
  int32_t uVar1;
  int *piVar2;
  int iVar3;
  int32_t *puVar4;
  
  puVar4 = (int32_t *)param_2[1];
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  iVar3 = 0;
  piVar2 = (int *)0x180bf6748;
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  do {
    if (*piVar2 == *(int *)(param_1 + 8)) {
      FUN_180639de0(param_2,*(uint64_t *)((int64_t)iVar3 * 0x10 + 0x180bf6740));
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 4;
  } while ((int64_t)piVar2 < 0x180bf6758);
  puVar4 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x24);
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x28);
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x2c);
  if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
    System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
    puVar4 = (int32_t *)param_2[1];
  }
  *puVar4 = uVar1;
  puVar4 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (int64_t)puVar4;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = *(int32_t *)(param_1 + 0x20);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x1c);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0xc);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x10);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x14);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    puVar4 = (int32_t *)param_2[1];
    uVar1 = *(int32_t *)(param_1 + 0x18);
    if ((uint64_t)((*param_2 - (int64_t)puVar4) + param_2[2]) < 5) {
      System_BufferManager(param_2,(int64_t)puVar4 + (4 - *param_2));
      puVar4 = (int32_t *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
  }
  return;
}





// 函数: void FUN_18018bd0d(int32_t *param_1)
void FUN_18018bd0d(int32_t *param_1)

{
  int32_t uVar1;
  int64_t in_RAX;
  int32_t *puVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  
  uVar1 = *(int32_t *)(unaff_RDI + 0x20);
  if ((uint64_t)((in_RAX - (int64_t)param_1) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    param_1 = (int32_t *)unaff_RBX[1];
  }
  *param_1 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x1c);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0xc);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x10);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x14);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x18);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}





// 函数: void FUN_18018bd5f(void)
void FUN_18018bd5f(void)

{
  int32_t uVar1;
  int32_t *puVar2;
  int64_t *unaff_RBX;
  int32_t unaff_ESI;
  int64_t unaff_RDI;
  
  System_BufferManager();
  *(int32_t *)unaff_RBX[1] = unaff_ESI;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0xc);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x10);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x14);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (int32_t *)unaff_RBX[1];
  uVar1 = *(int32_t *)(unaff_RDI + 0x18);
  if ((uint64_t)((*unaff_RBX - (int64_t)puVar2) + unaff_RBX[2]) < 5) {
    System_BufferManager();
    puVar2 = (int32_t *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18018be60(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  
  uVar3 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 8) + uVar3 * 8);
  plVar8 = (int64_t *)*puVar1;
  do {
    if (plVar8 == (int64_t *)0x0) {
LAB_18018bee2:
      FUN_18066c220(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x20,*(int8_t *)(param_1 + 0x2c));
      uVar4 = *(int32_t *)((int64_t)param_4 + 4);
      lVar2 = param_4[1];
      uVar5 = *(int32_t *)((int64_t)param_4 + 0xc);
      *puVar6 = (int)*param_4;
      puVar6[1] = uVar4;
      puVar6[2] = (int)lVar2;
      puVar6[3] = uVar5;
      *(uint64_t *)(puVar6 + 4) = 0;
      *(uint64_t *)(puVar6 + 6) = 0;
      if ((char)param_5 == '\0') {
        *(uint64_t *)(puVar6 + 6) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar3 * 8);
        *(int32_t **)(*(int64_t *)(param_1 + 8) + uVar3 * 8) = puVar6;
        *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
        lVar2 = *(int64_t *)(param_1 + 8);
        *param_2 = puVar6;
        param_2[1] = lVar2 + uVar3 * 8;
        *(int8_t *)(param_2 + 2) = 1;
        return param_2;
      }
      uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                            *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
      memset(uVar7,0,(uint64_t)param_5._4_4_ * 8);
    }
    if ((*param_4 == *plVar8) && (param_4[1] == plVar8[1])) {
      if (plVar8 != (int64_t *)0x0) {
        *param_2 = plVar8;
        param_2[1] = puVar1;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_18018bee2;
    }
    plVar8 = (int64_t *)plVar8[3];
  } while( true );
}





// 函数: void FUN_18018c050(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_18018c050(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(*param_4 + 0xb0),*(uint64_t *)(param_1 + 8),
         (int64_t)(*(int *)param_4[1] * 0xc));
}



int64_t * FUN_18018c160(int64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  int64_t *plVar7;
  int32_t uVar8;
  int64_t *plStackX_8;
  uint64_t *puStackX_10;
  int64_t lStack_40;
  int64_t lStack_38;
  int64_t lStack_30;
  int32_t uStack_28;
  int32_t uStack_20;
  
  plStackX_8 = &lStack_40;
  lStack_40 = 0;
  lStack_30 = 0;
  uStack_28 = 3;
  lStack_38 = 0;
  uStack_20 = 0;
  puStackX_10 = param_2;
  plVar7 = (int64_t *)FUN_18018ca20();
  if (plVar7 != &lStack_40) {
    plVar7[1] = *plVar7;
    lVar1 = *plVar7;
    *plVar7 = 0;
    lVar2 = plVar7[1];
    plVar7[1] = 0;
    lVar3 = plVar7[2];
    plVar7[2] = 0;
    lVar5 = plVar7[3];
    *(int *)(plVar7 + 3) = (int)plVar7[3];
    lVar4 = *plVar7;
    *plVar7 = lVar1;
    plVar7[1] = lVar2;
    plVar7[2] = lVar3;
    *(int *)(plVar7 + 3) = (int)lVar5;
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = *plVar7;
    *plVar7 = lStack_40;
    lVar2 = plVar7[1];
    plVar7[1] = lStack_38;
    lVar3 = plVar7[2];
    plVar7[2] = lStack_30;
    lVar4 = plVar7[3];
    *(int32_t *)(plVar7 + 3) = uStack_28;
    lStack_40 = lVar1;
    lStack_38 = lVar2;
    lStack_30 = lVar3;
    uStack_28 = (int)lVar4;
  }
  *(int32_t *)(plVar7 + 4) = uStack_20;
  plStackX_8 = &lStack_40;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  FUN_180058080(param_1,&plStackX_8,param_2);
  plVar7 = plStackX_8;
  cVar6 = FUN_180371c60(plStackX_8 + 8,param_2);
  if (cVar6 == '\0') {
    FUN_180058080(param_1,&plStackX_8,param_2);
    plVar7 = plStackX_8;
    if (plStackX_8 != param_1) {
      param_1[4] = param_1[4] + -1;
      func_0x00018066bd70(plStackX_8);
      uVar8 = FUN_18066ba00(plVar7,param_1);
      FUN_180058830(uVar8,plVar7);
    }
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    plVar7 = (int64_t *)0x0;
  }
  else {
    *param_2 = &system_data_buffer_ptr;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    plVar7 = plVar7 + 8;
  }
  *param_2 = &system_state_ptr;
  return plVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



