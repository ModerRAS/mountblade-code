/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part331.c - 16 个函数

// 函数: void FUN_1804403d0(int64_t *param_1,int64_t *param_2,int8_t param_3)
void FUN_1804403d0(int64_t *param_1,int64_t *param_2,int8_t param_3)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  if ((param_1 != (int64_t *)0x0) && (param_2 != (int64_t *)0x0)) {
    FUN_1802e8a50(param_1,param_2,param_3,1,uVar1);
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}



int64_t * FUN_1804404b0(int64_t *param_1,int64_t param_2,int param_3)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(int64_t **)(*(int64_t *)(param_2 + 0x1c0) + (int64_t)param_3 * 8);
  if (plVar1 != (int64_t *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    *param_1 = (int64_t)plVar1;
    param_1[1] = CONCAT44(uStack_c,uVar2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(uStack_c,0xffffffff);
  return param_1;
}



int64_t * FUN_180440560(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = CONCAT44(uStack_c,0xffffffff);
    return param_1;
  }
  plVar1 = *(int64_t **)(param_2 + 0x168);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}





// 函数: void FUN_18044056e(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18044056e(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *unaff_RDI;
  
  plVar1 = *(int64_t **)(param_2 + 0x168);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *unaff_RDI = (int64_t)plVar1;
  unaff_RDI[1] = CONCAT44(param_5._4_4_,uVar2);
  return;
}





// 函数: void FUN_1804405bc(uint64_t *param_1)
void FUN_1804405bc(uint64_t *param_1)

{
  uint64_t in_stack_00000028;
  
  *param_1 = 0;
  param_1[1] = CONCAT44(in_stack_00000028._4_4_,0xffffffff);
  return;
}





// 函数: void FUN_1804405e0(int64_t param_1,uint64_t param_2,int8_t param_3)
void FUN_1804405e0(int64_t param_1,uint64_t param_2,int8_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  plVar2 = (int64_t *)
           FUN_1802f4600(*(uint64_t *)(param_1 + 0xf0),*(uint64_t *)(param_1 + 0xf8),param_2);
  if (plVar2 == *(int64_t **)(param_1 + 0xf8)) {
    lVar1 = *(int64_t *)(param_1 + 0x260);
    if (lVar1 == 0) {
      return;
    }
    plVar2 = (int64_t *)
             FUN_1802f4600(*(uint64_t *)(lVar1 + 0x1a8),*(uint64_t *)(lVar1 + 0x1b0),param_2);
    if (plVar2 == *(int64_t **)(lVar1 + 0x1b0)) {
      return;
    }
  }
  *(int8_t *)(*plVar2 + 0xbc) = param_3;
  return;
}





// 函数: void FUN_180440660(int64_t param_1,int8_t param_2)
void FUN_180440660(int64_t param_1,int8_t param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  lVar3 = 0;
  iVar1 = (int)(*(int64_t *)(param_1 + 0x1e8) - *(int64_t *)(param_1 + 0x1e0) >> 3);
  lVar4 = lVar3;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(param_1 + 0x1e0) + lVar4 * 8) + 0x98))();
      if (iVar2 == 3) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x1e0) + lVar4 * 8) + 0xbc) = param_2;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
  }
  lVar4 = *(int64_t *)(param_1 + 0x260);
  if ((lVar4 != 0) &&
     (iVar1 = (int)(*(int64_t *)(lVar4 + 0x1d0) - *(int64_t *)(lVar4 + 0x1c8) >> 3), 0 < iVar1)) {
    do {
      iVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar4 + 0x1c8) + lVar3 * 8) + 0x98))();
      if (iVar2 == 3) {
        *(int8_t *)(*(int64_t *)(*(int64_t *)(lVar4 + 0x1c8) + lVar3 * 8) + 0xbc) = param_2;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}



uint64_t * FUN_180440750(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *plStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int64_t *plStack_48;
  void *puStack_40;
  int64_t lStack_38;
  int iStack_30;
  
  if (param_3 == 0) {
    SystemDataInitializer(&processed_var_9528_ptr);
    plStack_60 = (int64_t *)0x0;
    uStack_58 = 0xffffffff;
  }
  else {
    CoreMemoryPoolValidator(&puStack_40,param_3,param_3,param_4,0xfffffffffffffffe);
    FUN_1801c2360(param_2 + 0x60830,&plStack_60);
    plVar7 = (int64_t *)0x0;
    uVar6 = CONCAT44(uStack_54,uStack_58);
LAB_1804407d0:
    if (uVar6 != *(uint64_t *)(param_2 + 0x60838)) {
      if ((plStack_48 != (int64_t *)0x0) && (*(char *)((int64_t)plStack_48 + 0x2e5) == '\x04')) {
        iVar2 = (int)plStack_48[0x53];
        iVar8 = iStack_30;
        if (iVar2 == iStack_30) {
          if (iVar2 != 0) {
            pbVar3 = (byte *)plStack_48[0x52];
            lVar9 = lStack_38 - (int64_t)pbVar3;
            do {
              pbVar1 = pbVar3 + lVar9;
              iVar8 = (uint)*pbVar3 - (uint)*pbVar1;
              if (iVar8 != 0) break;
              pbVar3 = pbVar3 + 1;
            } while (*pbVar1 != 0);
          }
        }
        else if (iVar2 != 0) goto LAB_180440833;
        if (iVar8 == 0) {
          uStack_58 = (**(code **)(*plStack_48 + 8))(plStack_48);
          plVar7 = plStack_48;
          goto LAB_180440882;
        }
      }
LAB_180440833:
      lVar9 = *plStack_60;
      do {
        uVar6 = uVar6 + 1;
        lVar4 = (uVar6 & 0xffffffff) * 0x10;
        plVar5 = (int64_t *)(lVar4 + 8 + lVar9);
        if ((*(uint64_t *)(lVar4 + lVar9) & 0xffffffff00000000) == 0) {
          plVar5 = plVar7;
        }
        if (plVar5 != (int64_t *)0x0) {
          plStack_48 = *(int64_t **)(lVar9 + 8 + (uVar6 & 0xffffffff) * 0x10);
          break;
        }
      } while (uVar6 != plStack_60[1]);
      goto LAB_1804407d0;
    }
    uStack_58 = 0xffffffff;
LAB_180440882:
    plStack_60 = plVar7;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    puStack_40 = &system_data_buffer_ptr;
    if (lStack_38 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  *param_1 = plStack_60;
  param_1[1] = CONCAT44(uStack_54,uStack_58);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180440910(int64_t param_1,uint64_t param_2)
void FUN_180440910(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plStackX_8;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  uint64_t uVar3;
  void *puStack_68;
  int64_t lStack_60;
  int32_t uStack_50;
  void *puStack_48;
  int64_t lStack_40;
  
  if (param_1 != 0) {
    uVar3 = 0xfffffffffffffffe;
    CoreMemoryPoolValidator(&puStack_48);
    uVar1 = CoreMemoryPoolValidator(&puStack_68,param_2);
    FUN_1800c1520(render_system_data_config,&plStackX_18,uVar1);
    puStack_68 = &system_data_buffer_ptr;
    if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_60 = 0;
    uStack_50 = 0;
    puStack_68 = &system_state_ptr;
    if (plStackX_18 == (int64_t *)0x0) {
      SystemDataInitializer(&processed_var_9624_ptr,param_2);
    }
    else {
      uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x168,8,3,uVar3);
      plVar2 = (int64_t *)FUN_1802ac390(uVar1);
      plStackX_20 = plVar2;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plStackX_8 = plStackX_18;
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x28))();
      }
      FUN_1802adab0(plVar2,&plStackX_8);
      plStackX_8 = plVar2;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      PhysicsSystem_TerrainCollider(param_1,plStackX_8,1);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
      }
    }
    if (plStackX_18 != (int64_t *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    puStack_48 = &system_data_buffer_ptr;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}





// 函数: void FUN_180440aa0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180440aa0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t *plStackX_8;
  
  uVar1 = FUN_1802ed190(param_1,4,param_3,param_4,0xfffffffffffffffe);
  if (0 < (int)uVar1) {
    uVar2 = (uint64_t)uVar1;
    do {
      FUN_1802ed2b0(param_1,&plStackX_8,4);
      FUN_1802ee610(param_1,plStackX_8);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



int64_t FUN_180440b20(int64_t param_1,int param_2,int64_t param_3,uint64_t param_4)

{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  void *puStack_70;
  int64_t lStack_68;
  int64_t *plStack_50;
  uint64_t uStack_48;
  int64_t lStack_38;
  
  uVar4 = (uint64_t)param_2;
  FUN_1801c2360((int64_t *)(param_1 + 0x60830),&plStack_50,param_3,param_4,0xfffffffffffffffe);
  lVar8 = 0;
  uVar5 = uStack_48;
  lVar6 = lStack_38;
  if ((((param_2 != -1) && (uVar4 < *(uint64_t *)(param_1 + 0x60838))) &&
      ((*(uint64_t *)(*(int64_t *)(param_1 + 0x60830) + uVar4 * 0x10) & 0xffffffff00000000) != 0))
     && (uVar5 = uVar4, uVar4 != *(uint64_t *)(param_1 + 0x60838))) {
    lVar7 = *plStack_50;
    do {
      uVar4 = uVar4 + 1;
      lVar2 = (uVar4 & 0xffffffff) * 0x10;
      lVar3 = lVar2 + 8 + lVar7;
      if ((*(uint64_t *)(lVar2 + lVar7) & 0xffffffff00000000) == 0) {
        lVar3 = lVar8;
      }
      uVar5 = uVar4;
      if (lVar3 != 0) {
        lVar6 = *(int64_t *)(lVar7 + 8 + (uVar4 & 0xffffffff) * 0x10);
        break;
      }
    } while (uVar4 != plStack_50[1]);
  }
  CoreMemoryPoolValidator(&puStack_70,param_4);
  do {
    lVar7 = lVar8;
    if (uVar5 == *(uint64_t *)(param_1 + 0x60838)) {
LAB_180440c55:
      puStack_70 = &system_data_buffer_ptr;
      if (lStack_68 == 0) {
        return lVar7;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (param_3 == 0) {
      cVar1 = FUN_1802eef70(lVar6,&puStack_70);
    }
    else {
      cVar1 = FUN_1802eee20(lVar6,param_3);
    }
    lVar7 = lVar6;
    if (cVar1 != '\0') goto LAB_180440c55;
    lVar7 = *plStack_50;
    do {
      uVar5 = uVar5 + 1;
      lVar2 = (uVar5 & 0xffffffff) * 0x10;
      lVar3 = lVar2 + 8 + lVar7;
      if ((*(uint64_t *)(lVar2 + lVar7) & 0xffffffff00000000) == 0) {
        lVar3 = lVar8;
      }
      if (lVar3 != 0) {
        lVar6 = *(int64_t *)(lVar7 + 8 + (uVar5 & 0xffffffff) * 0x10);
        break;
      }
    } while (uVar5 != plStack_50[1]);
  } while( true );
}



uint64_t * FUN_180440cb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_c;
  
  uVar1 = 0xffffffff;
  plVar2 = (int64_t *)FUN_180440b20(param_2,0xffffffff,param_3,0);
  if (plVar2 != (int64_t *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = plVar2;
  param_1[1] = CONCAT44(uStack_c,uVar1);
  return param_1;
}



uint64_t * FUN_180440d20(uint64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_c;
  
  plVar2 = (int64_t *)
           FUN_180440b20(*(uint64_t *)(param_2 + 0x20),*(int32_t *)(param_2 + 0x2b8),param_3,0)
  ;
  if (plVar2 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = plVar2;
  param_1[1] = CONCAT44(uStack_c,uVar1);
  return param_1;
}



uint64_t * FUN_180440d90(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_c;
  
  uVar1 = 0xffffffff;
  plVar2 = (int64_t *)FUN_180440b20(param_2,0xffffffff,0,param_3);
  if (plVar2 != (int64_t *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = plVar2;
  param_1[1] = CONCAT44(uStack_c,uVar1);
  return param_1;
}



uint64_t * FUN_180440e00(uint64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_c;
  
  plVar2 = (int64_t *)
           FUN_180440b20(*(uint64_t *)(param_2 + 0x20),*(int32_t *)(param_2 + 0x2b8),0,param_3)
  ;
  if (plVar2 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = plVar2;
  param_1[1] = CONCAT44(uStack_c,uVar1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_180440e70(int64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plStack_18;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_2 == 0) {
    puVar2 = (uint64_t *)render_system_data_config[2];
    puVar1 = render_system_data_config;
    if (puVar2 == (uint64_t *)0x0) {
LAB_180440ecf:
      puVar1 = render_system_data_config;
    }
    else {
      do {
        if (*(int *)(puVar2 + 4) < 0) {
          puVar2 = (uint64_t *)*puVar2;
        }
        else {
          puVar1 = puVar2;
          puVar2 = (uint64_t *)puVar2[1];
        }
      } while (puVar2 != (uint64_t *)0x0);
      if ((puVar1 == render_system_data_config) || (0 < *(int *)(puVar1 + 4))) goto LAB_180440ecf;
    }
    plStack_18 = *(int64_t **)puVar1[5];
    if (plStack_18 != (int64_t *)0x0) {
      uStack_10 = (**(code **)(*plStack_18 + 8))(plStack_18);
      (**(code **)(*plStack_18 + 0x28))(plStack_18);
      goto LAB_180440f0c;
    }
  }
  plStack_18 = (int64_t *)0x0;
  uStack_10 = 0xffffffff;
LAB_180440f0c:
  *param_1 = (int64_t)plStack_18;
  param_1[1] = CONCAT44(uStack_c,uStack_10);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180440f30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  uint uVar2;
  void **ppuVar3;
  uint64_t uVar4;
  bool bVar5;
  int32_t uVar6;
  uint64_t uVar7;
  void *puStack_58;
  int64_t lStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  void *puStack_38;
  int64_t lStack_30;
  
  uVar7 = 0xfffffffffffffffe;
  if (param_1 == 0) {
    pcVar1 = *(code **)(*system_cache_buffer + 0x70);
    uVar7 = MemoryDebugger0();
    uVar4 = (*pcVar1)(system_cache_buffer,uVar7);
  }
  else {
    pcVar1 = *(code **)(*system_cache_buffer + 0x70);
    bVar5 = *(int *)(param_1 + 0xe0) == 0;
    if (bVar5) {
      puStack_58 = &system_data_buffer_ptr;
      uStack_40 = 0;
      lStack_50 = 0;
      uStack_48 = 0;
      ppuVar3 = &puStack_58;
      uVar6 = 2;
    }
    else {
      ppuVar3 = (void **)CoreEngineDataTransformer(&puStack_38);
      uVar6 = 1;
    }
    uVar2 = (*pcVar1)(system_cache_buffer,ppuVar3,param_3,param_4,uVar6,uVar7);
    uVar4 = (uint64_t)uVar2;
    if (bVar5) {
      puStack_58 = &system_data_buffer_ptr;
      if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_50 = 0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      puStack_58 = &system_state_ptr;
    }
    if ((!bVar5) && (puStack_38 = &system_data_buffer_ptr, lStack_30 != 0)) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return uVar4;
}



int8_t FUN_180441070(int64_t param_1,int64_t param_2)

{
  char cVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    cVar1 = FUN_1802eee20();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}





// 函数: void FUN_1804410a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804410a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  if (param_1 != 0) {
    uVar2 = 0xfffffffffffffffe;
    uVar1 = CoreMemoryPoolValidator(&puStack_30);
    FUN_1802f0fe0(param_1,uVar1,param_3,param_4,uVar2);
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}





// 函数: void FUN_180441110(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180441110(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  if (param_1 != 0) {
    uVar2 = 0xfffffffffffffffe;
    uVar1 = CoreMemoryPoolValidator(&puStack_30);
    FUN_1802f1080(param_1,uVar1,param_3,param_4,uVar2);
    puStack_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180441180(int64_t param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((param_1 != 0) &&
      ((*(int64_t *)(param_1 + 0x208) - (int64_t)*(uint64_t **)(param_1 + 0x200) &
       0xfffffffffffffff8U) != 0)) &&
     (cVar1 = (**(code **)(*(int64_t *)**(uint64_t **)(param_1 + 0x200) + 0xe8))(), cVar1 != '\0'
     )) {
    iVar2 = *(int *)(**(int64_t **)(param_1 + 0x200) + 0x50);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar2);
    }
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar2);
      return iVar2;
    }
  }
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180441260(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  if (param_1 != 0) {
    lVar6 = *(int64_t *)(param_1 + 0x208) - *(int64_t *)(param_1 + 0x200) >> 3;
    if (lVar6 == 0) {
      plVar5 = (int64_t *)0x0;
    }
    else {
      plVar5 = (int64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,*(uint *)(param_1 + 0x218) & 0xff,param_4,0,
                             0xfffffffffffffffe);
    }
    plVar2 = *(int64_t **)(param_1 + 0x208);
    plVar7 = plVar5;
    for (plVar8 = *(int64_t **)(param_1 + 0x200); plVar8 != plVar2; plVar8 = plVar8 + 1) {
      plVar3 = (int64_t *)*plVar8;
      *plVar7 = (int64_t)plVar3;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))();
      }
      plVar7 = plVar7 + 1;
    }
    plVar2 = plVar5;
    if ((-1 < param_2) &&
       ((uint64_t)(int64_t)param_2 < (uint64_t)((int64_t)plVar7 - (int64_t)plVar5 >> 3))) {
      cVar4 = (**(code **)(*(int64_t *)plVar5[param_2] + 0xe8))();
      if (cVar4 != '\0') {
        iVar1 = *(int *)(plVar5[param_2] + 0x50);
        if ((iVar1 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x30))(iVar1);
        }
        if ((iVar1 != 0) && (system_cache_buffer != 0)) {
          (**(code **)(system_cache_buffer + 0x18))(iVar1);
        }
        for (; plVar2 != plVar7; plVar2 = plVar2 + 1) {
          if ((int64_t *)*plVar2 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar2 + 0x38))();
          }
        }
        if (plVar5 == (int64_t *)0x0) {
          return iVar1;
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar5);
      }
    }
    for (; plVar2 != plVar7; plVar2 = plVar2 + 1) {
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar2 + 0x38))();
      }
    }
    if (plVar5 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar5);
    }
  }
  return 0;
}



uint64_t * FUN_180441420(uint64_t *param_1,int64_t param_2)

{
  int32_t uVar1;
  int64_t *plVar2;
  int32_t uStack_c;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = CONCAT44(uStack_c,0xffffffff);
    return param_1;
  }
  if (*(int64_t *)(param_2 + 0xf8) - (int64_t)*(uint64_t **)(param_2 + 0xf0) >> 3 == 0) {
    plVar2 = (int64_t *)0x0;
  }
  else {
    plVar2 = (int64_t *)(**(code **)(*(int64_t *)**(uint64_t **)(param_2 + 0xf0) + 0x178))();
    if (plVar2 != (int64_t *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
      goto LAB_180441472;
    }
  }
  uVar1 = 0xffffffff;
LAB_180441472:
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *param_1 = plVar2;
  param_1[1] = CONCAT44(uStack_c,uVar1);
  return param_1;
}





// 函数: void FUN_1804414d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804414d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  int64_t **pplStackX_20;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  lVar3 = *(int64_t *)(param_1 + 0xf0);
  if (*(int64_t *)(param_1 + 0xf8) - lVar3 >> 3 != 0) {
    iVar4 = 0;
    pplStackX_10 = &plStackX_8;
    lVar5 = 0;
    do {
      plVar1 = *(int64_t **)(lVar5 + lVar3);
      plStackX_18 = plVar1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      FUN_1802ee610(param_1,plVar1,param_3,param_4,uVar6);
      uVar2 = *(uint64_t *)(param_1 + 0x260);
      pplStackX_20 = &plStackX_8;
      plStackX_8 = plVar1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      FUN_1802fc0f0(uVar2,plStackX_8);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
      lVar3 = *(int64_t *)(param_1 + 0xf0);
    } while ((uint64_t)(int64_t)iVar4 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar3 >> 3));
  }
  return;
}





// 函数: void FUN_1804415d0(int64_t param_1,char param_2)
void FUN_1804415d0(int64_t param_1,char param_2)

{
  uint64_t *puVar1;
  
  if ((param_1 != 0) && (*(int64_t *)(param_1 + 0x260) != 0)) {
    puVar1 = *(uint64_t **)(*(int64_t *)(param_1 + 0x260) + 0x210);
    if (param_2 == '\0') {
      if ((void *)*puVar1 == &ui_system_data_1912_ptr) {
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        return;
      }
      (**(code **)((void *)*puVar1 + 0xe0))();
    }
    else if ((puVar1[0xc] == 0) && (puVar1[0xd] == 0)) {
      puVar1[0xc] = param_1;
      puVar1[0xd] = &processed_var_6496_ptr;
      return;
    }
  }
  return;
}



uint FUN_180441640(int64_t param_1)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int64_t *)(param_1 + 0xf8) - (int64_t)*(uint64_t **)(param_1 + 0xf0) >> 3 != 0) {
    lVar2 = (**(code **)(*(int64_t *)**(uint64_t **)(param_1 + 0xf0) + 0x178))();
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(int64_t *)**(uint64_t **)(param_1 + 0xf0) + 0x178))();
      uVar1 = (uint)(int64_t)(*(float *)(lVar2 + 0x244) * 256.0);
      uVar6 = 0xff;
      if (uVar1 < 0xff) {
        uVar6 = uVar1;
      }
      uVar3 = (uint)(int64_t)(*(float *)(lVar2 + 0x238) * 256.0);
      uVar1 = 0xff;
      if (uVar3 < 0xff) {
        uVar1 = uVar3;
      }
      uVar4 = (uint)(int64_t)(*(float *)(lVar2 + 0x23c) * 256.0);
      uVar3 = 0xff;
      if (uVar4 < 0xff) {
        uVar3 = uVar4;
      }
      uVar5 = (uint)(int64_t)(*(float *)(lVar2 + 0x240) * 256.0);
      uVar4 = 0xff;
      if (uVar5 < 0xff) {
        uVar4 = uVar5;
      }
      return ((uVar1 | uVar6 << 8) << 8 | uVar3) << 8 | uVar4;
    }
  }
  return 0xffffffff;
}





// 函数: void FUN_180441730(int64_t param_1,uint param_2)
void FUN_180441730(int64_t param_1,uint param_2)

{
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_1 != 0) {
    fStack_c = (float)(param_2 >> 0x18) * 0.003921569;
    fStack_18 = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
    fStack_14 = (float)(param_2 >> 8 & 0xff) * 0.003921569;
    fStack_10 = (float)(param_2 & 0xff) * 0.003921569;
    FUN_1802ea310(fStack_10,&fStack_18);
  }
  return;
}





// 函数: void FUN_1804417b0(int64_t param_1,uint param_2)
void FUN_1804417b0(int64_t param_1,uint param_2)

{
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_1 != 0) {
    fStack_c = (float)(param_2 >> 0x18) * 0.003921569;
    fStack_18 = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
    fStack_14 = (float)(param_2 >> 8 & 0xff) * 0.003921569;
    fStack_10 = (float)(param_2 & 0xff) * 0.003921569;
    FUN_1802ea480(fStack_10,&fStack_18);
  }
  return;
}





// 函数: void FUN_180441830(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180441830(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plStackX_8;
  uint64_t uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0xfffffffffffffffe;
    plStackX_8 = param_2;
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    FUN_1802ec200(param_1,&plStackX_8,param_3,param_4,uVar1);
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x38))(param_2);
    }
  }
  return;
}





// 函数: void FUN_180441890(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_180441890(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if (param_1 != 0) {
    uStack_c = param_5;
    uStack_18 = param_2;
    uStack_14 = param_3;
    uStack_10 = param_4;
    FUN_1802ee3e0(param_5,&uStack_18);
  }
  return;
}



int8_t FUN_1804418e0(int64_t param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = FUN_1802ee610();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180441910(int64_t param_1)
void FUN_180441910(int64_t param_1)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1802267d0(param_1 + 0x170);
                    // WARNING: Could not recover jumptable at 0x000180441935. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,uVar1,*(code **)(*system_cache_buffer + 0x70));
  return;
}



// WARNING: Removing unreachable block (ram,0x0001804419bf)

uint64_t *
FUN_180441950(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plStackX_8;
  int64_t *plStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  
  if ((param_2 == 0) ||
     (FUN_1802ed2b0(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe), plStack_20 = plStackX_8
     , plStackX_8 == (int64_t *)0x0)) {
    plStack_20 = (int64_t *)0x0;
    uStack_18 = 0xffffffff;
  }
  else {
    uStack_18 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  *param_1 = plStack_20;
  param_1[1] = CONCAT44(uStack_14,uStack_18);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



