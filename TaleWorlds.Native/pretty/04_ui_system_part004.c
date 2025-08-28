#include "ultra_high_freq_fun_definitions.h"
/* SystemCore_ConfigValidator - SystemCore_ConfigValidator */
#define SystemCore_ConfigValidator SystemCore_ConfigValidator
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part004.c - 19 个函数
// 函数: void function_651970(int64_t param_1,uint64_t param_2)
void function_651970(int64_t param_1,uint64_t param_2)
{
  uint64_t astack_special_x_10 [3];
  astack_special_x_10[0] = param_2;
  SystemInitializer(param_1 + 0x168,astack_special_x_10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_651990(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_651990(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  void *puVar1;
  void *puVar2;
  int64_t *plStackX_10;
  void *plocal_var_50;
  void *plocal_var_48;
  int32_t local_var_38;
  void *plocal_var_30;
  void *plocal_var_28;
  plStackX_10 = param_2;
  SystemInitializer(param_1 + 0x168,&plStackX_10,param_3,param_4,0xfffffffffffffffe);
  (**(code **)(*param_2 + 8))(param_2,&plocal_var_30);
  (**(code **)(*param_2 + 0x10))(param_2,&plocal_var_50);
  puVar2 = &system_buffer_ptr;
  if (plocal_var_48 != (void *)0x0) {
    puVar2 = plocal_var_48;
  }
  puVar1 = &system_buffer_ptr;
  if (plocal_var_28 != (void *)0x0) {
    puVar1 = plocal_var_28;
  }
  (**(code **)(system_cache_buffer + 0xe8))(puVar1,puVar2);
  (**(code **)*param_2)(param_2);
  plocal_var_50 = &system_data_buffer_ptr;
  if (plocal_var_48 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_48 = (void *)0x0;
  local_var_38 = 0;
  plocal_var_50 = &system_state_ptr;
  plocal_var_30 = &system_data_buffer_ptr;
  if (plocal_var_28 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_651a80(int64_t param_1,int64_t param_2,int64_t param_3)
void function_651a80(int64_t param_1,int64_t param_2,int64_t param_3)
{
  code *pcVar1;
  void *puVar2;
  void *puVar3;
  pcVar1 = ui_system_data_config;
  *(int8_t *)(param_1 + 0x189) = 1;
  if (pcVar1 == (code *)0x0) {
    UtilitiesSystem_PerformanceMonitor(&processed_var_9680_ptr);
  }
  else {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar2 = *(void **)(param_2 + 8);
    }
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_3 + 8);
    }
    (*pcVar1)(puVar2,puVar3,ui_system_data_config,ui_system_control_config);
  }
  if (ui_system_data_config == (code *)0x0) {
    SystemDataInitializer(&processed_var_9720_ptr);
    if (ui_system_data_config == (code *)0x0) {
      UtilitiesSystem_PerformanceMonitor(&processed_var_9680_ptr);
      goto LAB_180651b0f;
    }
  }
  (*ui_system_data_config)();
LAB_180651b0f:
  *(int64_t *)(param_1 + 0x10) = param_1;
  (**(code **)(param_1 + 0x78))(0,function_6555f0);
  (**(code **)(param_1 + 0x78))(1,function_6552e0);
  (**(code **)(param_1 + 0x78))(2,&processed_var_4448_ptr);
  (**(code **)(param_1 + 0x78))(3,function_655e60);
  (**(code **)(param_1 + 0x78))(4,&processed_var_4224_ptr);
  (**(code **)(param_1 + 0x78))(5,&memory_allocator_3232_ptr);
  (**(code **)(param_1 + 0x78))(6,&processed_var_4448_ptr);
  (**(code **)(param_1 + 0x78))(7,&processed_var_5088_ptr);
  (**(code **)(param_1 + 0x78))(8,function_656160);
  (**(code **)(param_1 + 0x78))(9,function_656110);
  (**(code **)(param_1 + 0x78))(10,&processed_var_5104_ptr);
  (**(code **)(param_1 + 0x78))(0xb,function_656020);
  (**(code **)(param_1 + 0x78))(0xc,&processed_var_8096_ptr);
  (**(code **)(param_1 + 0x78))(0xd,function_655f50);
  (**(code **)(param_1 + 0x78))(0xe,&processed_var_4912_ptr);
  (**(code **)(param_1 + 0x78))(0xf,&processed_var_5472_ptr);
  (**(code **)(param_1 + 0x78))(0x10,function_6563a0);
  (**(code **)(param_1 + 0x78))(0x11,function_6561d0);
  (**(code **)(param_1 + 0x78))(0x12,&processed_var_5456_ptr);
  (**(code **)(param_1 + 0x78))(0x13,function_656340);
  (**(code **)(param_1 + 0x78))(0x14,function_656410);
  (**(code **)(param_1 + 0x78))(0x15,function_6565a0);
  (**(code **)(param_1 + 0x78))(0x16,function_656610);
  (**(code **)(param_1 + 0x78))(0x17,function_6566c0);
  (**(code **)(param_1 + 0x78))(0x18,function_06f4c0);
  (**(code **)(param_1 + 0x78))(0x19,&processed_var_6448_ptr);
  (**(code **)(param_1 + 0x78))(0x1a,&processed_var_9328_ptr);
  (**(code **)(param_1 + 0x78))(0x1b,_guard_check_icall);
  (**(code **)(param_1 + 0x78))(0x1c,_guard_check_icall);
  (**(code **)(param_1 + 0x78))(0x1d,0x180069ee0);
  (**(code **)(param_1 + 0x78))(0x1e,&processed_var_8224_ptr);
  (**(code **)(param_1 + 0x78))(0x1f,_guard_check_icall);
  (**(code **)(param_1 + 0x78))(0x20,_guard_check_icall);
  (**(code **)(param_1 + 0x80))();
// WARNING: Could not recover jumptable at 0x000180651d0e. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x58))();
  return;
}
// 函数: void function_651d20(int64_t param_1)
void function_651d20(int64_t param_1)
{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(int64_t *)(param_1 + 0x170) - *(int64_t *)(param_1 + 0x168) >> 3 == 0) {
    *(int8_t *)(param_1 + 0x188) = 1;
    return;
  }
  do {
    (**(code **)**(uint64_t **)(uVar1 + *(int64_t *)(param_1 + 0x168)))();
    uVar1 = uVar1 + 8;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (uint64_t)uVar2;
  } while ((uint64_t)(int64_t)(int)uVar2 <
           (uint64_t)(*(int64_t *)(param_1 + 0x170) - *(int64_t *)(param_1 + 0x168) >> 3));
  *(int8_t *)(param_1 + 0x188) = 1;
  return;
}
// 函数: void function_651d46(void)
void function_651d46(void)
{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)**(uint64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0x168)))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x170) - *(int64_t *)(unaff_RBX + 0x168) >> 3));
  *(int8_t *)(unaff_RBX + 0x188) = 1;
  return;
}
// 函数: void function_651d97(int64_t param_1)
void function_651d97(int64_t param_1)
{
  *(int8_t *)(param_1 + 0x188) = 1;
  return;
}
uint64_t function_652100(int64_t param_1,uint64_t param_2,int32_t param_3)
{
  int64_t lVar1;
  void *puVar2;
  lVar1 = (**(code **)(param_1 + 0x148))(param_3);
  puVar2 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar2 = *(void **)(lVar1 + 8);
  }
  CoreMemoryPoolValidator(param_2,puVar2);
  return param_2;
}
uint64_t function_652190(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t in_RAX;
  int64_t lVar1;
  int64_t lVar2;
  void *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void *plocal_var_30;
  int64_t lStack_28;
  uint local_var_20;
  int32_t local_var_14;
  uVar5 = 0xfffffffffffffffe;
  if (*(int *)(param_3 + 0x10) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_3 + 8);
  }
  lVar1 = (**(code **)(param_1 + 0xb0))(puVar3);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(lVar1 + 8) != (void *)0x0) {
    puVar3 = *(void **)(lVar1 + 8);
  }
  CoreMemoryPoolValidator(&plocal_var_30,puVar3);
  if (local_var_20 == 7) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      if (*(char *)(lStack_28 + lVar1) != (&processed_var_768_ptr)[lVar1]) goto LAB_180652228;
      lVar1 = lVar2;
    } while (lVar2 != 8);
    uVar4 = 0;
  }
  else {
LAB_180652228:
    if (lStack_28 != 0) {
      CoreEngineDataBufferProcessor(param_2,local_var_20);
    }
    if (local_var_20 != 0) {
// WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(param_2 + 8),lStack_28,(uint64_t)local_var_20,param_4,uVar5);
    }
    *(int32_t *)(param_2 + 0x10) = 0;
    if (*(int64_t *)(param_2 + 8) != 0) {
      *(int8_t *)((uint64_t)local_var_20 + *(int64_t *)(param_2 + 8)) = 0;
    }
    *(int32_t *)(param_2 + 0x1c) = local_var_14;
    uVar4 = 1;
  }
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar4;
}
uint64_t function_6522b0(int64_t param_1,int64_t param_2)
{
  void *puVar1;
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  (**(code **)(param_1 + 0x110))(puVar1);
  return 1;
}
uint64_t function_6522e0(int64_t param_1,int64_t param_2)
{
  void *puVar1;
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_2 + 8);
  }
  (**(code **)(param_1 + 0x118))(puVar1);
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int * function_652310(int64_t param_1,int *param_2,int64_t *param_3,uint64_t param_4)
{
  void *puVar1;
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *puVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uVar9 = 0xfffffffffffffffe;
  uVar5 = 0;
  iVar2 = (**(code **)(param_1 + 0x60))(param_3[1] - *param_3 >> 5);
  *param_2 = iVar2;
  if ((iVar2 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(iVar2);
  }
  uVar8 = 1;
  lVar3 = *param_3;
  uVar6 = uVar5;
  if (param_3[1] - lVar3 >> 5 != 0) {
    do {
      puVar1 = *(void **)(lVar3 + 8 + uVar6);
      puVar7 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar7 = puVar1;
      }
      (**(code **)(param_1 + 0x128))(*param_2,uVar5,puVar7,param_4,uVar8,uVar9);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      lVar3 = *param_3;
      uVar6 = uVar6 + 0x20;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(param_3[1] - lVar3 >> 5));
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t get_ftdn_managed_interface(void)
{
// 0x6523f0  33  get_ftdn_managed_interface
  return system_cache_buffer;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_652400(int64_t *param_1,int64_t param_2)
void function_652400(int64_t *param_1,int64_t param_2)
{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  int16_t astack_special_x_10 [4];
  uint64_t stack_special_x_18;
  uint64_t stack_special_x_20;
  uint64_t *plocal_var_98;
  uint64_t *plocal_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  int32_t local_var_60;
  uint64_t *plocal_var_58;
  uint64_t *plocal_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  if (*(int *)(param_2 + 0x10) != 0) {
    plocal_var_98 = (uint64_t *)0x0;
    plocal_var_90 = (uint64_t *)0x0;
    local_var_88 = 0;
    local_var_80 = 3;
    astack_special_x_10[0] = 10;
    if (*(int64_t *)(param_2 + 8) != 0) {
      CoreSystem_DataCollector(param_2,&plocal_var_98,astack_special_x_10);
    }
    uVar9 = (int64_t)plocal_var_90 - (int64_t)plocal_var_98 >> 5;
    puVar15 = plocal_var_98;
    puVar13 = plocal_var_98;
    puVar5 = plocal_var_90;
    if ((int)uVar9 != 0) {
      uVar9 = uVar9 & 0xffffffff;
      do {
        plocal_var_58 = (uint64_t *)0x0;
        plocal_var_50 = (uint64_t *)0x0;
        local_var_48 = 0;
        local_var_40 = 3;
        astack_special_x_10[0] = 0x40;
        stack_special_x_18 = uVar9;
        if (puVar15[1] != 0) {
          CoreSystem_DataCollector(puVar15,&plocal_var_58,astack_special_x_10);
        }
        puVar6 = plocal_var_50;
        puVar5 = plocal_var_58;
        puVar13 = plocal_var_58;
        if (((int64_t)plocal_var_50 - (int64_t)plocal_var_58 & 0xffffffffffffffe0U) == 0x60) {
          CoreEngineDataTransformer(&plocal_var_78,plocal_var_58);
          iVar7 = atoi(puVar5[5]);
          iVar8 = atoi(puVar5[9]);
          stack_special_x_20 = function_650c20(&plocal_var_78);
          puVar13 = (uint64_t *)param_1[1];
          if (puVar13 < (uint64_t *)param_1[2]) {
            *puVar13 = stack_special_x_20;
            puVar13[1] = (int64_t)iVar7;
            puVar13[2] = (int64_t)iVar8;
            param_1[1] = param_1[1] + 0x18;
          }
          else {
            lVar14 = *param_1;
            lVar12 = ((int64_t)puVar13 - lVar14) / 0x18;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_18065258b:
              puVar10 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0x18,(char)param_1[3]);
              puVar13 = (uint64_t *)param_1[1];
              lVar14 = *param_1;
            }
            else {
              lVar12 = lVar12 * 2;
              if (lVar12 != 0) goto LAB_18065258b;
              puVar10 = (uint64_t *)0x0;
            }
            lVar11 = ((int64_t)puVar13 - lVar14) / 0x18;
            puVar13 = puVar10;
            if (0 < lVar11) {
              do {
                puVar1 = (int32_t *)((int64_t)puVar13 + (lVar14 - (int64_t)puVar10));
                uVar2 = puVar1[1];
                uVar3 = puVar1[2];
                uVar4 = puVar1[3];
                *(int32_t *)puVar13 = *puVar1;
                *(int32_t *)((int64_t)puVar13 + 4) = uVar2;
                *(int32_t *)(puVar13 + 1) = uVar3;
                *(int32_t *)((int64_t)puVar13 + 0xc) = uVar4;
                puVar13[2] = *(uint64_t *)
                              ((int64_t)puVar13 + (lVar14 - (int64_t)puVar10) + 0x10);
                lVar11 = lVar11 + -1;
                puVar13 = puVar13 + 3;
              } while (0 < lVar11);
            }
            *puVar13 = stack_special_x_20;
            puVar13[1] = (int64_t)iVar7;
            puVar13[2] = (int64_t)iVar8;
            if (*param_1 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            *param_1 = (int64_t)puVar10;
            param_1[1] = (int64_t)(puVar13 + 3);
            param_1[2] = (int64_t)(puVar10 + lVar12 * 3);
            uVar9 = stack_special_x_18;
          }
          plocal_var_78 = &system_data_buffer_ptr;
          if (lStack_70 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_70 = 0;
          local_var_60 = 0;
          plocal_var_78 = &system_state_ptr;
          for (puVar13 = puVar5; puVar13 != puVar6; puVar13 = puVar13 + 4) {
            (**(code **)*puVar13)(puVar13,0);
          }
        }
        else {
          for (; puVar13 != puVar6; puVar13 = puVar13 + 4) {
            (**(code **)*puVar13)(puVar13,0);
          }
        }
        if (puVar5 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar5);
        }
        puVar15 = puVar15 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      stack_special_x_18 = 0;
      puVar15 = plocal_var_98;
      puVar13 = plocal_var_98;
      puVar5 = plocal_var_90;
    }
    for (; puVar10 = plocal_var_90, puVar6 = plocal_var_98, puVar15 != plocal_var_90; puVar15 = puVar15 + 4)
    {
      plocal_var_98 = puVar13;
      plocal_var_90 = puVar5;
      (**(code **)*puVar15)(puVar15,0);
      puVar13 = plocal_var_98;
      puVar5 = plocal_var_90;
      plocal_var_90 = puVar10;
      plocal_var_98 = puVar6;
    }
    if (plocal_var_98 != (uint64_t *)0x0) {
      plocal_var_98 = puVar13;
      plocal_var_90 = puVar5;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar6);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_6526f0(void)
void function_6526f0(void)
{
  int8_t stack_array_2a8 [144];
  uint64_t local_var_218;
  int8_t stack_array_178 [288];
  uint64_t local_var_58;
  local_var_218 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2a8;
// WARNING: Subroutine does not return
  memset(stack_array_178,0,0x118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_652b60(uint64_t param_1,int64_t *param_2)
void function_652b60(uint64_t param_1,int64_t *param_2)
{
  int iVar1;
  int64_t lVar2;
  int8_t stack_array_de8 [184];
  int8_t stack_array_d30 [32];
  uint64_t local_var_d10;
  uint64_t local_var_d08;
  int8_t stack_array_848 [2048];
  uint64_t local_var_48;
  local_var_d10 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_de8;
  SystemCore_ConfigValidator();
  local_var_d08 = 0x180c96740;
  iVar1 = _Mtx_lock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  lVar2 = (param_2[1] - *param_2) / 6 + (param_2[1] - *param_2 >> 0x3f);
  if ((int)(lVar2 >> 2) != (int)(lVar2 >> 0x3f)) {
    function_629090(stack_array_d30);
// WARNING: Subroutine does not return
    memset(stack_array_848,0,0x800);
  }
  iVar1 = _Mtx_unlock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_de8);
}
uint64_t *
function_653220(int64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char *pcVar1;
  void *puVar2;
  int64_t lVar3;
  uint64_t uVar5;
  int64_t lVar6;
  void *puVar7;
  void *plocal_var_38;
  int64_t lStack_30;
  int32_t local_var_28;
  int32_t local_var_20;
  int32_t local_var_1c;
  int64_t lVar4;
  lVar6 = 0;
  CoreMemoryPoolValidator(&plocal_var_38,&system_buffer_ptr,param_3,param_4,0,0xfffffffffffffffe);
  lVar4 = -1;
  do {
    lVar3 = lVar4 + 1;
    pcVar1 = (char *)(lVar4 + 0x180c8f021);
    lVar4 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 == 0) {
    uVar5 = param_1[1] - *param_1 >> 5;
    if ((int)uVar5 == 0) {
      CoreMemoryPoolValidator(param_2,&processed_var_9944_ptr);
      plocal_var_38 = &system_data_buffer_ptr;
      if (lStack_30 == 0) {
        return param_2;
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    uVar5 = uVar5 & 0xffffffff;
    do {
      puVar2 = *(void **)(lVar6 + 8 + *param_1);
      puVar7 = &system_buffer_ptr;
      if (puVar2 != (void *)0x0) {
        puVar7 = puVar2;
      }
      System_DataHandler(&plocal_var_38,&processed_var_92_ptr,puVar7);
      lVar6 = lVar6 + 0x20;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  else {
    (**(code **)(plocal_var_38 + 0x10))(&plocal_var_38);
  }
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  *(int32_t *)(param_2 + 2) = local_var_28;
  param_2[1] = lStack_30;
  *(int32_t *)((int64_t)param_2 + 0x1c) = local_var_1c;
  *(int32_t *)(param_2 + 3) = local_var_20;
  return param_2;
}
// 函数: void function_6533a0(int64_t param_1)
void function_6533a0(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  if (param_1 == 0) {
// 函数: void function_6533b4(int64_t param_1)
void function_6533b4(int64_t param_1)
{
  uint uVar1;
  int64_t lVar2;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  uVar1 = (uint)lVar2;
  if (0x1fff < uVar1) {
    uVar1 = 0x1fff;
  }
// WARNING: Subroutine does not return
  memcpy(&system_data_f020,param_1,(int64_t)(int)uVar1);
}
// 函数: void function_65340f(void)
void function_65340f(void)
{
  code *pcVar1;
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
uint64_t *
function_653420(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int8_t stack_array_28 [8];
  uint64_t local_var_20;
  int32_t local_var_18;
  int32_t local_var_10;
  int32_t local_var_c;
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    uVar1 = mono_string_to_utf8(param_2);
    CoreMemoryPoolValidator(stack_array_28,uVar1,param_3,param_4,uVar2,uVar3);
    mono_free(uVar1);
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &system_data_buffer_ptr;
    *(int32_t *)(param_1 + 2) = local_var_18;
    param_1[1] = local_var_20;
    *(int32_t *)((int64_t)param_1 + 0x1c) = local_var_c;
    *(int32_t *)(param_1 + 3) = local_var_10;
    return param_1;
  }
  uVar3 = MemoryDebugger0();
  CoreEngineDataTransformer(param_1,uVar3);
  return param_1;
}
// 函数: void function_653530(uint64_t param_1)
void function_653530(uint64_t param_1)
{
  function_6533a0();
  OutputDebugStringA(param_1);
  UtilitiesSystem_PerformanceMonitor(&ui_system_data_16_ptr);
// 函数: void function_653670(int64_t param_1,int64_t param_2)
void function_653670(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  uVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,param_1 * param_2,0x19);
// WARNING: Subroutine does not return
  memset(uVar1,0,param_1 * param_2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_6536d0(void)
void function_6536d0(void)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3,0xfffffffffffffffe);
  *puVar1 = 1;
  puVar1[1] = function_653580;
  puVar1[2] = function_6535c0;
  puVar1[3] = function_653630;
  puVar1[4] = function_653670;
  mono_set_allocator_vtable(puVar1);
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar2 = 0;
  CoreEngineSystemCleanup(puVar2);
  *puVar2 = 0x7372756e;
  puVar2[1] = 0x2d797265;
  puVar2[2] = 0x657a6973;
  puVar2[3] = 0x3931383d;
  *(int16_t *)(puVar2 + 4) = 0x6b32;
  *(int8_t *)((int64_t)puVar2 + 0x12) = 0;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar1 = 0;
  CoreEngineSystemCleanup(puVar1);
  *puVar1 = 0x5f43475f4f4e4f4d;
  *(int32_t *)(puVar1 + 1) = 0x41524150;
  *(int16_t *)((int64_t)puVar1 + 0xc) = 0x534d;
  *(int8_t *)((int64_t)puVar1 + 0xe) = 0;
  SetEnvironmentVariableA(puVar1,puVar2);
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_653940(void)
void function_653940(void)
{
  int64_t *plVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  int8_t stack_array_d8 [32];
  void *plocal_var_b8;
  int32_t *plocal_var_b0;
  uint local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  void *plocal_var_90;
  uint64_t *plocal_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_50;
  uint64_t local_var_30;
  plVar1 = ui_system_config;
  local_var_50 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  local_var_98 = 0;
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  plocal_var_b0 = (int32_t *)0x0;
  local_var_a8 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_b8,0x15);
  puVar2 = plocal_var_b0;
  uVar7 = (uint64_t)local_var_a8;
  puVar6 = (int32_t *)((int64_t)plocal_var_b0 + uVar7);
  *puVar6 = 0x656c6154;
  puVar6[1] = 0x6c726f57;
  puVar6[2] = 0x442e7364;
  puVar6[3] = 0x654e746f;
  *(int32_t *)((int64_t)plocal_var_b0 + uVar7 + 0x10) = 0x6c642e74;
  *(int16_t *)((int64_t)plocal_var_b0 + uVar7 + 0x14) = 0x6c;
  local_var_a8 = 0x15;
  puVar6 = (int32_t *)&system_buffer_ptr;
  if (plocal_var_b0 != (int32_t *)0x0) {
    puVar6 = plocal_var_b0;
  }
  lVar4 = mono_domain_assembly_open(ui_system_config,puVar6);
  plocal_var_b8 = &system_data_buffer_ptr;
  if (puVar2 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  plocal_var_b0 = (int32_t *)0x0;
  local_var_a0 = local_var_a0 & 0xffffffff00000000;
  plocal_var_b8 = &system_state_ptr;
  *plVar1 = lVar4;
  if (lVar4 == 0) {
    UtilitiesSystem_PerformanceMonitor(&processed_var_80_ptr,&system_data_dda8);
    lVar4 = *plVar1;
  }
  lVar4 = mono_assembly_get_image(lVar4);
  plVar1[1] = lVar4;
  if (lVar4 == 0) {
    UtilitiesSystem_PerformanceMonitor(&memory_allocator_328_ptr);
  }
  plocal_var_90 = &system_data_buffer_ptr;
  local_var_78 = 0;
  plocal_var_88 = (uint64_t *)0x0;
  local_var_80 = 0;
  puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_88 = puVar5;
  uVar3 = CoreEngineSystemCleanup(puVar5);
  local_var_78 = CONCAT44(local_var_78._4_4_,uVar3);
  *puVar5 = 0x6c6c6f72746e6f43;
  *(int16_t *)(puVar5 + 1) = 0x7265;
  *(int8_t *)((int64_t)puVar5 + 10) = 0;
  local_var_80 = 10;
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  plocal_var_b0 = (int32_t *)0x0;
  local_var_a8 = 0;
  puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13);
  *(int8_t *)puVar6 = 0;
  plocal_var_b0 = puVar6;
  uVar3 = CoreEngineSystemCleanup(puVar6);
  local_var_a0 = CONCAT44(local_var_a0._4_4_,uVar3);
  *puVar6 = 0x656c6154;
  puVar6[1] = 0x6c726f57;
  puVar6[2] = 0x442e7364;
  puVar6[3] = 0x654e746f;
  *(int16_t *)(puVar6 + 4) = 0x74;
  local_var_a8 = 0x11;
  mono_class_from_name(plVar1[1],puVar6,puVar5);
  plocal_var_b8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar6);
}
uint64_t *
function_653ce0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x10;
  strcpy_s(param_2[1],0x80,&memory_allocator_384_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_653d60(int64_t param_1,uint64_t param_2,int param_3)
void function_653d60(int64_t param_1,uint64_t param_2,int param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 0x18);
  lVar2 = *(int64_t *)(param_1 + 0x10);
  uVar3 = lVar1 - lVar2;
  uVar6 = (uint64_t)(iVar7 + param_3);
  if (uVar3 < uVar6) {
    uVar6 = (lVar2 - lVar1) + uVar6;
    if ((uint64_t)(*(int64_t *)(param_1 + 0x20) - lVar1) < uVar6) {
      uVar5 = uVar3 * 2;
      if (uVar3 == 0) {
        uVar5 = 1;
      }
      if (uVar5 < uVar3 + uVar6) {
        uVar5 = uVar3 + uVar6;
      }
      if (uVar5 == 0) {
        lVar4 = lVar1;
        lVar1 = 0;
      }
      else {
        lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar5,*(int8_t *)(param_1 + 0x28));
        lVar2 = *(int64_t *)(param_1 + 0x10);
        lVar4 = *(int64_t *)(param_1 + 0x18);
      }
      if (lVar2 != lVar4) {
// WARNING: Subroutine does not return
        memmove(lVar1,lVar2,lVar4 - lVar2);
      }
      if (uVar6 != 0) {
// WARNING: Subroutine does not return
        memset(lVar1,0,uVar6);
      }
      if (*(int64_t *)(param_1 + 0x10) != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(int64_t *)(param_1 + 0x10) = lVar1;
      *(uint64_t *)(param_1 + 0x20) = lVar1 + uVar5;
    }
    else if (uVar6 != 0) {
// WARNING: Subroutine does not return
      memset(lVar1,0,uVar6);
    }
  }
  else {
    lVar1 = lVar2 + uVar6;
  }
  *(int64_t *)(param_1 + 0x18) = lVar1;
// WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  memcpy((int64_t)iVar7 + *(int64_t *)(param_1 + 0x10),param_2,(int64_t)param_3);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_653dac(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void function_653dac(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t lVar1;
  uint64_t unaff_RBP;
  uint64_t uVar2;
  int64_t unaff_RSI;
  uint64_t uVar3;
  int unaff_R12D;
  int64_t *unaff_R15;
  uint64_t local_buffer_58;
  uVar3 = (param_1 - unaff_RBX) + param_4;
  if ((uint64_t)(in_RAX - unaff_RBX) < uVar3) {
    uVar2 = param_2 * 2;
    if (param_2 == 0) {
      uVar2 = 1;
    }
    if (uVar2 < param_2 + uVar3) {
      uVar2 = param_2 + uVar3;
    }
    if (uVar2 == 0) {
      lVar1 = unaff_RBX;
      unaff_RBX = 0;
    }
    else {
      unaff_RBX = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar2,*(int8_t *)(unaff_RSI + 0x28));
      param_1 = *(int64_t *)(unaff_RSI + 0x10);
      lVar1 = *unaff_R15;
    }
    if (param_1 != lVar1) {
// WARNING: Subroutine does not return
      memmove(unaff_RBX,param_1,lVar1 - param_1);
    }
    if (uVar3 != 0) {
// WARNING: Subroutine does not return
      memset(unaff_RBX,0,uVar3);
    }
    if (*(int64_t *)(unaff_RSI + 0x10) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(int64_t *)(unaff_RSI + 0x10) = unaff_RBX;
    *(uint64_t *)(unaff_RSI + 0x20) = unaff_RBX + uVar2;
  }
  else {
    local_buffer_58 = unaff_RBP;
    if (uVar3 != 0) {
// WARNING: Subroutine does not return
      memset();
    }
  }
  *unaff_R15 = unaff_RBX;
// WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  memcpy((int64_t)unaff_R12D + *(int64_t *)(unaff_RSI + 0x10),local_buffer_58);
  return;
}
// 函数: void function_653e6b(void)
void function_653e6b(void)
{
  uint64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int unaff_R12D;
  uint64_t *unaff_R15;
  if (unaff_RDI != 0) {
// WARNING: Subroutine does not return
    memset();
  }
  *unaff_R15 = unaff_RBX;
// WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
// WARNING: Subroutine does not return
// WARNING: Treating indirect jump as call
  memcpy((int64_t)unaff_R12D + *(int64_t *)(unaff_RSI + 0x10));
  return;
}