#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: DataDeserializer */
#define DataDeserializer DataDeserializer


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part024_sub001.c - 13 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_01_part024.c - 14 个函数


// 函数: void FUN_1800b7a70(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b7a70(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lStackX_8;
  int64_t *plStackX_10;
  int64_t lStackX_18;
  uint64_t uVar7;
  
  lVar3 = system_resource_state;
  uVar7 = 0xfffffffffffffffe;
  lVar2 = system_resource_state + 0x8b0;
  lStackX_8 = param_1;
  plStackX_10 = param_2;
  lStackX_18 = lVar2;
  iVar5 = _Mtx_lock(lVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lVar6 = lVar3 + 0xa90;
  HighFreq_AnimationSystem1(lVar6,&lStackX_8,*param_2 + 0x1f0,param_4,uVar7);
  lVar4 = lStackX_8;
  if (lStackX_8 != lVar6) {
    plVar1 = (int64_t *)(lVar3 + 0xab0);
    *plVar1 = *plVar1 + -1;
    func_0x00018066bd70(lStackX_8);
    RenderingSystem_BufferHandler(lVar4,lVar6);
    FUN_1800b94f0(lVar4);
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar4);
    }
  }
  iVar5 = _Mtx_unlock(lVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1800b7b50(uint64_t param_1,int64_t *param_2,int8_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plStack_28;
  int64_t *plStack_20;
  uint64_t uStack_18;
  int32_t uStack_10;
  
  plStack_28 = (int64_t *)0x0;
  plStack_20 = (int64_t *)0x0;
  uStack_18 = 0;
  uStack_10 = 3;
  FUN_1800b7ca0(system_resource_state,param_3,&plStack_28,param_4,0,0xfffffffffffffffe);
  plVar3 = plStack_20;
  plVar2 = plStack_28;
  uVar5 = (int64_t)plStack_20 - (int64_t)plStack_28 >> 3;
  if (uVar5 == 0) {
    FUN_1800befa0(system_system_data_config,param_2);
    for (plVar4 = plVar2; plVar4 != plVar3; plVar4 = plVar4 + 1) {
      if ((int64_t *)*plVar4 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar4 + 0x38))();
      }
    }
  }
  else {
    system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
    system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
    system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
    plVar4 = (int64_t *)plStack_28[(int)((uint64_t)(system_memory_flags - 1) % (uVar5 & 0xffffffff))];
    *param_2 = (int64_t)plVar4;
    plVar1 = plVar2;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x28))();
    }
    for (; plVar1 != plVar3; plVar1 = plVar1 + 1) {
      if ((int64_t *)*plVar1 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar1 + 0x38))();
      }
    }
  }
  if (plVar2 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1800b7ca0(int64_t param_1,byte param_2,int64_t *param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t *plVar2;
  byte bVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  plVar8 = *(int64_t **)(param_1 + 0x4c8);
  if (plVar8 < *(int64_t **)(param_1 + 0x4d0)) {
    do {
      plVar2 = (int64_t *)*plVar8;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar4 = (int64_t *)0x0;
      lVar5 = plVar2[0x37];
      bVar3 = *(byte *)(lVar5 + 0x38c);
      if (bVar3 == 9) {
        uVar1 = *(uint *)(lVar5 + 0x388);
        if ((uVar1 >> 0x1e & 1) == 0) {
          if ((uVar1 >> 0x1c & 1) == 0) {
            bVar3 = (byte)(uVar1 >> 0x18);
            if ((int)uVar1 < 0) {
              if ((uVar1 >> 0x1b & 1) == 0) {
                bVar3 = bVar3 & 1 | 0xc;
              }
              else {
                bVar3 = bVar3 & 1 | 0xe;
              }
            }
            else if ((uVar1 >> 0x19 & 1) == 0) {
              bVar3 = bVar3 & 1;
            }
            else if ((uVar1 >> 0x1b & 1) == 0) {
              bVar3 = bVar3 & 1 | 2;
            }
            else {
              bVar3 = ((uVar1 >> 0x18 & 1) != 0) + 7;
            }
          }
          else {
            bVar3 = 4;
          }
        }
        else {
          bVar3 = 9;
        }
        *(byte *)(lVar5 + 0x38c) = bVar3;
      }
      if (bVar3 == param_2) {
        plVar6 = (int64_t *)param_3[1];
        if (plVar6 < (int64_t *)param_3[2]) {
          param_3[1] = (int64_t)(plVar6 + 1);
          *plVar6 = (int64_t)plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        else {
          plVar7 = (int64_t *)*param_3;
          lVar5 = (int64_t)plVar6 - (int64_t)plVar7 >> 3;
          if (lVar5 == 0) {
            lVar5 = 1;
LAB_1800b7dd5:
            plVar4 = (int64_t *)
                     CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 8,(char)param_3[3],param_4,uVar10);
            plVar6 = (int64_t *)param_3[1];
            plVar7 = (int64_t *)*param_3;
            plVar9 = plVar4;
          }
          else {
            lVar5 = lVar5 * 2;
            plVar9 = plVar4;
            if (lVar5 != 0) goto LAB_1800b7dd5;
          }
          for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
            *plVar4 = *plVar7;
            *plVar7 = 0;
            plVar4 = plVar4 + 1;
          }
          *plVar4 = (int64_t)plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
          plVar6 = (int64_t *)param_3[1];
          plVar7 = (int64_t *)*param_3;
          if (plVar7 != plVar6) {
            do {
              if ((int64_t *)*plVar7 != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*plVar7 + 0x38))();
              }
              plVar7 = plVar7 + 1;
            } while (plVar7 != plVar6);
            plVar7 = (int64_t *)*param_3;
          }
          if (plVar7 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreMemoryPoolInitializer(plVar7);
          }
          *param_3 = (int64_t)plVar9;
          param_3[1] = (int64_t)(plVar4 + 1);
          param_3[2] = (int64_t)(plVar9 + lVar5);
        }
      }
      (**(code **)(*plVar2 + 0x38))(plVar2);
      plVar8 = plVar8 + 1;
    } while (plVar8 < *(int64_t **)(param_1 + 0x4d0));
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b7eb0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b7eb0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  
  lVar4 = system_resource_state;
  uVar11 = 0xfffffffffffffffe;
  lVar1 = system_resource_state + 0x8b0;
  iVar5 = _Mtx_lock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar2 = *(uint64_t *)(lVar4 + 0xab0);
  lVar8 = *param_2;
  if ((uint64_t)(param_2[2] - lVar8 >> 3) < uVar2) {
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar2 * 8,(char)param_2[3],param_4,uVar11);
      lVar8 = *param_2;
    }
    if (lVar8 != param_2[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar6,lVar8,param_2[1] - lVar8);
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *param_2 = lVar6;
    param_2[1] = lVar6;
    param_2[2] = lVar6 + uVar2 * 8;
  }
  lVar8 = *(int64_t *)(lVar4 + 0xa98);
  do {
    if (lVar8 == lVar4 + 0xa90) {
      iVar5 = _Mtx_unlock(lVar1);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      return;
    }
    uVar3 = *(uint64_t *)(lVar8 + 0x40);
    puVar10 = (uint64_t *)param_2[1];
    if (puVar10 < (uint64_t *)param_2[2]) {
      param_2[1] = (int64_t)(puVar10 + 1);
      *puVar10 = uVar3;
    }
    else {
      puVar9 = (uint64_t *)*param_2;
      lVar6 = (int64_t)puVar10 - (int64_t)puVar9 >> 3;
      if (lVar6 == 0) {
        lVar6 = 1;
LAB_1800b7fe3:
        puVar7 = (uint64_t *)
                 CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,(char)param_2[3],param_4,uVar11);
        puVar10 = (uint64_t *)param_2[1];
        puVar9 = (uint64_t *)*param_2;
      }
      else {
        lVar6 = lVar6 * 2;
        if (lVar6 != 0) goto LAB_1800b7fe3;
        puVar7 = (uint64_t *)0x0;
      }
      if (puVar9 != puVar10) {
                    // WARNING: Subroutine does not return
        memmove(puVar7,puVar9,(int64_t)puVar10 - (int64_t)puVar9);
      }
      *puVar7 = uVar3;
      if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *param_2 = (int64_t)puVar7;
      param_2[1] = (int64_t)(puVar7 + 1);
      param_2[2] = (int64_t)(puVar7 + lVar6);
    }
    lVar8 = func_0x00018066bd70(lVar8);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b8090(int64_t *param_1)
void FUN_1800b8090(int64_t *param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar5;
  int64_t *plVar6;
  void *puVar7;
  int iVar8;
  int8_t auStack_168 [32];
  int64_t *plStack_148;
  int64_t *plStack_140;
  uint64_t uStack_138;
  int64_t *plStack_130;
  int32_t uStack_f8;
  void *puStack_e8;
  void *puStack_e0;
  uint uStack_d8;
  uint8_t auStack_d0 [136];
  char acStack_48 [16];
  uint64_t uStack_38;
  int64_t lVar4;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_168;
  iVar8 = 0;
  puStack_e8 = &memory_allocator_3432_ptr;
  puStack_e0 = auStack_d0;
  uStack_d8 = 0;
  auStack_d0[0] = 0;
  FUN_1800c0570(system_system_data_config,&plStack_148);
  do {
    (**(code **)(puStack_e8 + 0x10))(&puStack_e8,&processed_var_8408_ptr);
    RenderingEngine_BufferManager(acStack_48,&processed_var_4576_ptr,iVar8);
    lVar4 = -1;
    do {
      lVar3 = lVar4 + 1;
      lVar1 = lVar4 + 1;
      lVar4 = lVar3;
    } while (acStack_48[lVar1] != '\0');
    iVar2 = (int)lVar3;
    if ((0 < iVar2) && (uStack_d8 + iVar2 < 0x7f)) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_e0 + uStack_d8,acStack_48,(int64_t)(iVar2 + 1));
    }
    uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3);
    plVar6 = (int64_t *)FUN_180075030(uVar5,0,1);
    plStack_130 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    puVar7 = &system_buffer_ptr;
    if (puStack_e0 != (void *)0x0) {
      puVar7 = puStack_e0;
    }
    (**(code **)(plVar6[2] + 0x10))(plVar6 + 2,puVar7);
    *(uint *)(plVar6 + 0x20) = *(uint *)(plVar6 + 0x20) | 0x40080;
    UltraHighFreq_SecurityValidator1(plVar6,&plStack_148);
    *(int32_t *)(plVar6 + 0x4e) = 0x31;
    uStack_f8 = 0x443504f3;
    *(int32_t *)((int64_t)plVar6 + 0x274) = 0;
    *(int32_t *)(plVar6 + 0x4f) = 0;
    *(int32_t *)((int64_t)plVar6 + 0x27c) = 0;
    *(int32_t *)(plVar6 + 0x50) = 0x7f7fffff;
    *(uint64_t *)((int64_t)plVar6 + 0x284) = 0x4480000044800000;
    *(uint64_t *)((int64_t)plVar6 + 0x28c) = 0x7f7fffff00000000;
    *(int32_t *)((int64_t)plVar6 + 0x294) = 0x44000000;
    *(int32_t *)(plVar6 + 0x53) = 0x44000000;
    *(int32_t *)((int64_t)plVar6 + 0x29c) = 0;
    *(int32_t *)(plVar6 + 0x54) = 0x7f7fffff;
    *(int32_t *)((int64_t)plVar6 + 0x2a4) = 0x443504f3;
    *(uint *)(plVar6 + 0x20) = *(uint *)(plVar6 + 0x20) | 0x80;
    plStack_140 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    plStack_140 = (int64_t *)*param_1;
    *param_1 = (int64_t)plVar6;
    if (plStack_140 != (int64_t *)0x0) {
      (**(code **)(*plStack_140 + 0x38))();
    }
    (**(code **)(*plVar6 + 0x38))(plVar6);
    iVar8 = iVar8 + 1;
    param_1 = param_1 + 1;
  } while (iVar8 < 10);
  if (plStack_148 != (int64_t *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  puStack_e8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b82b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1800b82b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_40 [56];
  
  uVar1 = *(uint64_t *)(param_1 + 0xf8);
  uVar2 = FUN_18009eae0(auStack_40,param_1 + 0xc0,param_3,param_4,0xfffffffffffffffe);
  FUN_1800a5110(system_message_buffer,uVar2,uVar1);
  return;
}



uint64_t *
DataDeserializer0(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &memory_allocator_3480_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x40,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void SystemCore_ConfigManager(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void SystemCore_ConfigManager(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  void *puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  
  uVar6 = param_1[1];
  if (uVar6 < param_1[2]) {
    param_1[1] = uVar6 + 0x58;
    DataDeserializer0(uVar6);
    return;
  }
  uVar8 = *param_1;
  lVar10 = (int64_t)(uVar6 - uVar8) / 0x58;
  puVar3 = (uint64_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1800b8417;
  }
  puVar3 = (uint64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x58,(char)param_1[3],param_4,0xfffffffffffffffe);
  uVar6 = param_1[1];
  uVar8 = *param_1;
LAB_1800b8417:
  puVar4 = puVar3;
  if (uVar8 != uVar6) {
    lVar9 = uVar8 - (int64_t)puVar3;
    do {
      *puVar4 = &system_state_ptr;
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 2) = 0;
      *puVar4 = &memory_allocator_3480_ptr;
      puVar4[1] = puVar4 + 3;
      *(int32_t *)(puVar4 + 2) = 0;
      *(int8_t *)(puVar4 + 3) = 0;
      *(int32_t *)(puVar4 + 2) = *(int32_t *)(lVar9 + 0x10 + (int64_t)puVar4);
      puVar1 = *(void **)(lVar9 + 8 + (int64_t)puVar4);
      puVar7 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar7 = puVar1;
      }
      strcpy_s(puVar4[1],0x40,puVar7);
      puVar4 = puVar4 + 0xb;
    } while (lVar9 + (int64_t)puVar4 != uVar6);
  }
  DataDeserializer0(puVar4,param_2);
  puVar2 = (uint64_t *)param_1[1];
  puVar5 = (uint64_t *)*param_1;
  if (puVar5 != puVar2) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 0xb;
    } while (puVar5 != puVar2);
    puVar5 = (uint64_t *)*param_1;
  }
  if (puVar5 == (uint64_t *)0x0) {
    *param_1 = (uint64_t)puVar3;
    param_1[1] = (uint64_t)(puVar4 + 0xb);
    param_1[2] = (uint64_t)(puVar3 + lVar10 * 0xb);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar5);
}







// 函数: void SystemCore_Controller(int64_t *param_1)
void SystemCore_Controller(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
  if (plVar2 != plVar1) {
    do {
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (int64_t)plVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b8570(int64_t *param_1,uint64_t param_2)
void FUN_1800b8570(int64_t *param_1,uint64_t param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  
  lVar11 = param_1[1];
  lVar10 = *param_1;
  uVar12 = (lVar11 - lVar10) / 0x28;
  if (param_2 <= uVar12) {
    lVar7 = param_2 * 0x28 + lVar10;
    if (lVar7 != lVar11) {
      do {
        if (*(int64_t *)(lVar7 + 8) != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar11);
      lVar10 = *param_1;
    }
    param_1[1] = param_2 * 0x28 + lVar10;
    return;
  }
  param_2 = param_2 - uVar12;
  puVar6 = (uint64_t *)param_1[1];
  if (param_2 <= (uint64_t)((param_1[2] - (int64_t)puVar6) / 0x28)) {
    if (param_2 != 0) {
      puVar5 = puVar6 + 2;
      uVar12 = param_2;
      do {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(int32_t *)(puVar5 + 2) = 0x12;
        puVar6 = puVar6 + 5;
        puVar5 = puVar5 + 5;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      puVar6 = (uint64_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar6 + param_2 * 5);
    return;
  }
  puVar5 = (uint64_t *)*param_1;
  lVar11 = ((int64_t)puVar6 - (int64_t)puVar5) / 0x28;
  uVar12 = lVar11 * 2;
  if (lVar11 == 0) {
    uVar12 = 1;
  }
  if (uVar12 < lVar11 + param_2) {
    uVar12 = lVar11 + param_2;
  }
  puVar3 = (int32_t *)0x0;
  if (uVar12 != 0) {
    puVar3 = (int32_t *)
             CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar12 * 0x28,(char)param_1[3],puVar5,0xfffffffffffffffe);
    puVar6 = (uint64_t *)param_1[1];
    puVar5 = (uint64_t *)*param_1;
  }
  puVar4 = puVar3;
  if (puVar5 != puVar6) {
    lVar11 = (int64_t)puVar3 - (int64_t)puVar5;
    puVar5 = puVar5 + 4;
    do {
      *puVar4 = *(int32_t *)(puVar5 + -4);
      puVar9 = (uint64_t *)((int64_t)puVar5 + lVar11 + -0x18);
      *puVar9 = 0;
      *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar11 + -8 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar11 + (int64_t)puVar5) = *(int32_t *)puVar5;
      uVar2 = *puVar9;
      *puVar9 = puVar5[-3];
      puVar5[-3] = uVar2;
      uVar2 = *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar5);
      *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar5) = puVar5[-2];
      puVar5[-2] = uVar2;
      uVar2 = *(uint64_t *)(lVar11 + -8 + (int64_t)puVar5);
      *(uint64_t *)(lVar11 + -8 + (int64_t)puVar5) = puVar5[-1];
      puVar5[-1] = uVar2;
      uVar1 = *(int32_t *)(lVar11 + (int64_t)puVar5);
      *(int32_t *)(lVar11 + (int64_t)puVar5) = *(int32_t *)puVar5;
      *(int32_t *)puVar5 = uVar1;
      puVar4 = puVar4 + 10;
      puVar9 = puVar5 + 1;
      puVar5 = puVar5 + 5;
    } while (puVar9 != puVar6);
  }
  if (param_2 != 0) {
    puVar6 = (uint64_t *)(puVar4 + 4);
    uVar8 = param_2;
    do {
      puVar6[-2] = 0;
      *(int32_t *)((int64_t)puVar6 + 0x14) = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(int32_t *)(puVar6 + 2) = 0x12;
      puVar6 = puVar6 + 5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  lVar11 = *param_1;
  if (lVar11 != param_1[1]) {
    do {
      if (*(int64_t *)(lVar11 + 8) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lVar11 = lVar11 + 0x28;
    } while (lVar11 != param_1[1]);
    lVar11 = *param_1;
  }
  if (lVar11 == 0) {
    *param_1 = (int64_t)puVar3;
    param_1[1] = (int64_t)(puVar4 + param_2 * 10);
    param_1[2] = (int64_t)(puVar3 + uVar12 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(lVar11);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b8630(int64_t *param_1,uint64_t param_2)
void FUN_1800b8630(int64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  
  plVar3 = (int64_t *)param_1[1];
  plVar5 = (int64_t *)*param_1;
  uVar2 = (int64_t)plVar3 - (int64_t)plVar5 >> 3;
  if (param_2 <= uVar2) {
    plVar1 = plVar5 + param_2;
    if (plVar1 != plVar3) {
      do {
        if ((int64_t *)*plVar1 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar1 + 0x38))();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar3);
      plVar5 = (int64_t *)*param_1;
    }
    param_1[1] = (int64_t)(plVar5 + param_2);
    return;
  }
  param_2 = param_2 - uVar2;
  if ((uint64_t)(param_1[2] - (int64_t)plVar3 >> 3) < param_2) {
    uVar4 = uVar2 * 2;
    if (uVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 < uVar2 + param_2) {
      uVar4 = uVar2 + param_2;
    }
    plVar1 = (int64_t *)0x0;
    plVar6 = plVar1;
    if (uVar4 != 0) {
      plVar1 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 8,(char)param_1[3]);
      plVar5 = (int64_t *)*param_1;
      plVar3 = (int64_t *)param_1[1];
      plVar6 = plVar1;
    }
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      *plVar1 = *plVar5;
      plVar1 = plVar1 + 1;
      *plVar5 = 0;
    }
    uVar2 = param_2;
    plVar5 = plVar1;
    if (param_2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *plVar5 = 0;
        plVar5 = plVar5 + 1;
      }
    }
    plVar5 = (int64_t *)param_1[1];
    plVar3 = (int64_t *)*param_1;
    if (plVar3 != plVar5) {
      do {
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar5);
      plVar3 = (int64_t *)*param_1;
    }
    if (plVar3 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(plVar3);
    }
    *param_1 = (int64_t)plVar6;
    param_1[2] = (int64_t)(plVar6 + uVar4);
    param_1[1] = (int64_t)(plVar1 + param_2);
    return;
  }
  uVar2 = param_2;
  if (param_2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *plVar3 = 0;
      plVar3 = plVar3 + 1;
    }
    plVar3 = (int64_t *)param_1[1];
  }
  param_1[1] = (int64_t)(plVar3 + param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b8674(int64_t param_1,uint64_t param_2,uint64_t *param_3)
void FUN_1800b8674(int64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *unaff_RBX;
  uint64_t uVar4;
  int64_t unaff_RSI;
  uint64_t *puVar5;
  int64_t *plVar6;
  int64_t *unaff_R14;
  uint64_t *puVar7;
  
  uVar4 = param_1 * 2;
  if (param_1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (uint64_t)(param_1 + unaff_RSI)) {
    uVar4 = param_1 + unaff_RSI;
  }
  puVar2 = (uint64_t *)0x0;
  puVar7 = puVar2;
  if (uVar4 != 0) {
    puVar2 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 8,(char)unaff_R14[3]);
    param_3 = (uint64_t *)*unaff_R14;
    unaff_RBX = (uint64_t *)unaff_R14[1];
    puVar7 = puVar2;
  }
  for (; param_3 != unaff_RBX; param_3 = param_3 + 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
    *param_3 = 0;
  }
  lVar3 = unaff_RSI;
  puVar5 = puVar2;
  if (unaff_RSI != 0) {
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  plVar1 = (int64_t *)unaff_R14[1];
  plVar6 = (int64_t *)*unaff_R14;
  if (plVar6 != plVar1) {
    do {
      if ((int64_t *)*plVar6 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = (int64_t *)*unaff_R14;
  }
  if (plVar6 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar6);
  }
  *unaff_R14 = (int64_t)puVar7;
  unaff_R14[2] = (int64_t)(puVar7 + uVar4);
  unaff_R14[1] = (int64_t)(puVar2 + unaff_RSI);
  return;
}







// 函数: void FUN_1800b8754(void)
void FUN_1800b8754(void)

{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_R14;
  
  lVar1 = unaff_RSI;
  if (unaff_RSI != 0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *unaff_RBX = 0;
      unaff_RBX = unaff_RBX + 1;
    }
    unaff_RBX = *(uint64_t **)(unaff_R14 + 8);
  }
  *(uint64_t **)(unaff_R14 + 8) = unaff_RBX + unaff_RSI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b87c0(int64_t *param_1,uint64_t *param_2)
void FUN_1800b87c0(int64_t *param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  
  puVar6 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)0x0;
  if (puVar6 < (uint64_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar6 + 1);
    *puVar6 = *param_2;
    *param_2 = 0;
    return;
  }
  puVar3 = (uint64_t *)*param_1;
  lVar4 = (int64_t)puVar6 - (int64_t)puVar3 >> 3;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    puVar7 = puVar2;
    if (lVar4 == 0) goto joined_r0x0001800b8850;
  }
  puVar2 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,(char)param_1[3]);
  puVar6 = (uint64_t *)param_1[1];
  puVar3 = (uint64_t *)*param_1;
  puVar7 = puVar2;
joined_r0x0001800b8850:
  for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    *puVar3 = 0;
  }
  *puVar2 = *param_2;
  *param_2 = 0;
  plVar1 = (int64_t *)param_1[1];
  plVar5 = (int64_t *)*param_1;
  if (plVar5 != plVar1) {
    do {
      if ((int64_t *)*plVar5 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar5 + 0x38))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    plVar5 = (int64_t *)*param_1;
  }
  if (plVar5 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar5);
  }
  *param_1 = (int64_t)puVar7;
  param_1[1] = (int64_t)(puVar2 + 1);
  param_1[2] = (int64_t)(puVar7 + lVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void PhysicsSystem_TriggersProcessor(int64_t *param_1,int64_t *param_2)
void PhysicsSystem_TriggersProcessor(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  
  plVar4 = (int64_t *)param_1[1];
  if (plVar4 < (int64_t *)param_1[2]) {
    param_1[1] = (int64_t)(plVar4 + 1);
    param_2 = (int64_t *)*param_2;
    *plVar4 = (int64_t)param_2;
    if (param_2 == (int64_t *)0x0) {
      return;
    }
                    // WARNING: Could not recover jumptable at 0x0001800b8907. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 0x28))();
    return;
  }
  plVar3 = (int64_t *)*param_1;
  plVar1 = (int64_t *)0x0;
  lVar2 = (int64_t)plVar4 - (int64_t)plVar3 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    plVar5 = plVar1;
    if (lVar2 == 0) goto joined_r0x0001800b8970;
  }
  plVar1 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,(char)param_1[3]);
  plVar4 = (int64_t *)param_1[1];
  plVar3 = (int64_t *)*param_1;
  plVar5 = plVar1;
joined_r0x0001800b8970:
  for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    *plVar1 = *plVar3;
    plVar1 = plVar1 + 1;
    *plVar3 = 0;
  }
  param_2 = (int64_t *)*param_2;
  *plVar1 = (int64_t)param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))();
  }
  plVar4 = (int64_t *)param_1[1];
  plVar3 = (int64_t *)*param_1;
  if (plVar3 != plVar4) {
    do {
      if ((int64_t *)*plVar3 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4);
    plVar3 = (int64_t *)*param_1;
  }
  if (plVar3 == (int64_t *)0x0) {
    *param_1 = (int64_t)plVar5;
    param_1[1] = (int64_t)(plVar1 + 1);
    param_1[2] = (int64_t)(plVar5 + lVar2);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(plVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





