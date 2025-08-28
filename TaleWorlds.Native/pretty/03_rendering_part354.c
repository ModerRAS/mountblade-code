#include "ultra_high_freq_fun_definitions.h"
/* SystemCore_Handler - SystemCore_Handler */
#define SystemCore_Handler SystemCore_Handler
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#define SystemInitializer System_Initializer2  // 系统初始化器
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part354.c - 13 个函数
// 函数: void function_45c5c0(int64_t param_1)
void function_45c5c0(int64_t param_1)
{
  code *pcVar1;
  int iVar2;
  int32_t uVar3;
  int64_t lVar4;
  int8_t stack_array_178 [32];
  void *plocal_var_158;
  int32_t *plocal_var_150;
  int32_t local_var_148;
  uint64_t local_var_140;
  void *plocal_var_130;
  int64_t lStack_128;
  int32_t local_var_118;
  void *plocal_var_110;
  int64_t lStack_108;
  int32_t local_var_f8;
  void *plocal_var_f0;
  int64_t lStack_e8;
  int32_t local_var_d8;
  uint64_t local_var_d0;
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [136];
  uint64_t local_var_28;
  local_var_d0 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  plocal_var_c8 = &memory_allocator_3432_ptr;
  plocal_var_c0 = stack_array_b0;
  local_var_b8 = 0;
  stack_array_b0[0] = 0;
  if (param_1 != 0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(param_1 + lVar4) != '\0');
    local_var_b8 = (int32_t)lVar4;
    strcpy_s(stack_array_b0,0x80,param_1);
  }
  function_19e140(&plocal_var_f0,&plocal_var_c8);
  plocal_var_c8 = &system_state_ptr;
  lVar4 = *system_main_module_state;
  CoreMemoryPoolValidator(&plocal_var_130,param_1);
  iVar2 = function_1426a0(lVar4,&plocal_var_130);
  plocal_var_130 = &system_data_buffer_ptr;
  if (lStack_128 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_128 = 0;
  local_var_118 = 0;
  plocal_var_130 = &system_state_ptr;
  if (iVar2 == -1) {
    pcVar1 = *(code **)(*system_cache_buffer + 0x70);
    plocal_var_158 = &system_data_buffer_ptr;
    local_var_140 = 0;
    plocal_var_150 = (int32_t *)0x0;
    local_var_148 = 0;
    plocal_var_150 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)plocal_var_150 = 0;
    uVar3 = CoreMemoryPoolCleaner(plocal_var_150);
    *plocal_var_150 = 0x4e454353;
    plocal_var_150[1] = 0x4f4e5f45;
    plocal_var_150[2] = 0x4f465f54;
    plocal_var_150[3] = 0x444e55;
    local_var_148 = 0xf;
    local_var_140._0_4_ = uVar3;
    (*pcVar1)(system_cache_buffer,&plocal_var_158);
    plocal_var_158 = &system_data_buffer_ptr;
    if (plocal_var_150 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_150 = (int32_t *)0x0;
    local_var_140 = (uint64_t)local_var_140._4_4_ << 0x20;
    plocal_var_158 = &system_state_ptr;
  }
  else {
    if ((iVar2 < 0) ||
       ((uint64_t)(*(int64_t *)(lVar4 + 0x890) - *(int64_t *)(lVar4 + 0x888) >> 5) <=
        (uint64_t)(int64_t)iVar2)) {
      lVar4 = MemoryDebugger0();
    }
    else {
      lVar4 = (int64_t)iVar2 * 0x20 + *(int64_t *)(lVar4 + 0x888);
    }
    UtilitiesSystem_FileHandler(lVar4,&plocal_var_110,&plocal_var_f0);
    (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&plocal_var_110);
    plocal_var_110 = &system_data_buffer_ptr;
    if (lStack_108 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_108 = 0;
    local_var_f8 = 0;
    plocal_var_110 = &system_state_ptr;
  }
  plocal_var_f0 = &system_data_buffer_ptr;
  if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_e8 = 0;
  local_var_d8 = 0;
  plocal_var_f0 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_45c820(uint64_t param_1)
{
  code *pcVar1;
  int64_t lVar2;
  int iVar3;
  int32_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  void *plocal_var_68;
  int8_t *plocal_var_60;
  uint local_var_58;
  uint64_t local_var_50;
  int8_t stack_array_48 [32];
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  lVar2 = *system_main_module_state;
  uVar6 = CoreMemoryPoolValidator(stack_array_48,param_1);
  iVar3 = function_142220(lVar2,uVar6);
  plocal_var_68 = &system_data_buffer_ptr;
  local_var_50 = 0;
  plocal_var_60 = (int8_t *)0x0;
  local_var_58 = 0;
  lVar7 = *(int64_t *)(lVar2 + 0x860);
  if (lVar7 != lVar2 + 0x858) {
    do {
      if (((*(int64_t *)(lVar7 + 0x48) - (int64_t)*(int **)(lVar7 + 0x40) & 0xfffffffffffffffcU)
           == 4) && (**(int **)(lVar7 + 0x40) == iVar3)) {
        if (0 < *(int *)(lVar7 + 0x30)) {
          iVar3 = local_var_58 + *(int *)(lVar7 + 0x30);
          if (iVar3 != 0) {
            uVar8 = iVar3 + 1;
            if (plocal_var_60 == (int8_t *)0x0) {
              if ((int)uVar8 < 0x10) {
                uVar8 = 0x10;
              }
              plocal_var_60 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar8,0x13);
              *plocal_var_60 = 0;
            }
            else {
              if (uVar8 <= (uint)local_var_50) goto LAB_18045c96d;
              plocal_var_60 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_60,uVar8,0x10,0x13);
            }
            uVar4 = CoreMemoryPoolCleaner(plocal_var_60);
            local_var_50 = CONCAT44(local_var_50._4_4_,uVar4);
          }
LAB_18045c96d:
// WARNING: Subroutine does not return
          memcpy(plocal_var_60 + local_var_58,*(uint64_t *)(lVar7 + 0x28),
                 (int64_t)(*(int *)(lVar7 + 0x30) + 1));
        }
        uVar8 = local_var_58 + 1;
        if (uVar8 != 0) {
          uVar5 = local_var_58 + 2;
          if (plocal_var_60 == (int8_t *)0x0) {
            if ((int)uVar5 < 0x10) {
              uVar5 = 0x10;
            }
            plocal_var_60 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar5,0x13);
            *plocal_var_60 = 0;
          }
          else {
            if (uVar5 <= (uint)local_var_50) goto LAB_18045c9ed;
            plocal_var_60 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_60,uVar5,0x10,0x13);
          }
          uVar4 = CoreMemoryPoolCleaner(plocal_var_60);
          local_var_50 = CONCAT44(local_var_50._4_4_,uVar4);
        }
LAB_18045c9ed:
        *(int16_t *)(plocal_var_60 + local_var_58) = 0x2a;
        local_var_58 = uVar8;
      }
      lVar7 = Function_7bfb2422(lVar7);
    } while (lVar7 != lVar2 + 0x858);
  }
  uVar4 = (*pcVar1)(system_cache_buffer,&plocal_var_68);
  plocal_var_68 = &system_data_buffer_ptr;
  if (plocal_var_60 == (int8_t *)0x0) {
    return uVar4;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
function_45ca80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  void *plocal_var_28;
  int64_t lStack_20;
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  uVar3 = SystemCore_NetworkHandler0(&plocal_var_28,system_main_module_state + 0x2c0,param_3,param_4,0,0xfffffffffffffffe);
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3,param_3,param_4,1);
  plocal_var_28 = &system_data_buffer_ptr;
  if (lStack_20 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t function_45cb50(void)
{
  int64_t *plVar1;
  char cVar2;
  plVar1 = *(int64_t **)(system_global_data_ptr + 0x40);
  if (plVar1 != (int64_t *)0x0) {
    if (*(code **)(*plVar1 + 0x68) == (code *)&processed_var_9696_ptr) {
      cVar2 = (char)plVar1[2] != '\0';
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x68))();
    }
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45cba0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_45cba0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  void *plocal_var_70;
  int64_t lStack_68;
  int32_t local_var_58;
  void *plocal_var_50;
  int64_t lStack_48;
  int32_t local_var_38;
  void *plocal_var_30;
  int64_t lStack_28;
  *(int8_t *)(system_operation_state + 0x17e8) = 0;
  CoreMemoryPoolValidator(&plocal_var_30,param_3,param_3,param_4,0xfffffffffffffffe);
  CoreMemoryPoolValidator(&plocal_var_50,param_2);
  CoreMemoryPoolValidator(&plocal_var_70,param_1);
  function_1d5720();
  plocal_var_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_68 = 0;
  local_var_58 = 0;
  plocal_var_70 = &system_state_ptr;
  plocal_var_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_48 = 0;
  local_var_38 = 0;
  plocal_var_50 = &system_state_ptr;
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45cca0(int64_t param_1,int64_t param_2,uint64_t param_3)
void function_45cca0(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int8_t stack_array_f8 [32];
  void *plocal_var_d8;
  int64_t lStack_d0;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  void *plocal_var_b0;
  int8_t *plocal_var_a8;
  int32_t local_var_a0;
  int8_t stack_array_98 [32];
  void *plocal_var_78;
  int8_t *plocal_var_70;
  int32_t local_var_68;
  int8_t stack_array_60 [32];
  uint64_t local_var_40;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  *(int8_t *)(system_operation_state + 0x17e8) = 0;
  CoreMemoryPoolValidator(&plocal_var_d8,param_3);
  plocal_var_78 = &processed_var_672_ptr;
  plocal_var_70 = stack_array_60;
  local_var_68 = 0;
  stack_array_60[0] = 0;
  lVar2 = -1;
  lVar1 = lVar2;
  if (param_2 != 0) {
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    local_var_68 = (int32_t)lVar1;
    strcpy_s(stack_array_60,0x20,param_2);
  }
  plocal_var_b0 = &processed_var_672_ptr;
  plocal_var_a8 = stack_array_98;
  local_var_a0 = 0;
  stack_array_98[0] = 0;
  if (param_1 != 0) {
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_1 + lVar2) != '\0');
    local_var_a0 = (int32_t)lVar2;
    strcpy_s(stack_array_98,0x20,param_1);
  }
  function_1d6240();
  plocal_var_b0 = &system_state_ptr;
  plocal_var_78 = &system_state_ptr;
  plocal_var_d8 = &system_data_buffer_ptr;
  if (lStack_d0 == 0) {
    lStack_d0 = 0;
    local_var_c0 = 0;
    plocal_var_d8 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_f8);
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45ce10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_45ce10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  void *plocal_var_30;
  int64_t lStack_28;
  *(int8_t *)(system_operation_state + 0x17e8) = 0;
  CoreMemoryPoolValidator(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  function_1c4410();
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int8_t function_45ceb0(void)
{
  int8_t uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t ***ppplVar4;
  int iVar5;
  int64_t ****pppplVar6;
  char cVar7;
  int64_t ***ppplStackX_8;
  int64_t ***ppplStackX_10;
  int64_t ***ppplStackX_18;
  pppplVar6 = (int64_t ****)CoreMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3,0xfffffffffffffffe);
  ppplVar4 = system_global_data_ptr;
  ppplStackX_8 = (int64_t ***)pppplVar6;
  UltraHighFreq_PerformanceMonitor1(pppplVar6);
  *pppplVar6 = (int64_t ***)&memory_allocator_3624_ptr;
  *(int8_t *)(pppplVar6 + 0x18) = 0;
  pppplVar6[0x19] = ppplVar4;
  ppplStackX_18 = (int64_t ***)pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  lVar3 = system_context_ptr;
  ppplStackX_10 = (int64_t ***)&ppplStackX_8;
  ppplStackX_8 = (int64_t ***)pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  function_05e300(lVar3,&ppplStackX_8);
  iVar5 = _Thrd_id();
  lVar3 = system_context_ptr;
  if (render_system_memory == 0) {
    iVar2 = *(int *)(**(int64_t **)(system_context_ptr + 8) + 0x48);
joined_r0x00018045cfc8:
    if (iVar5 != iVar2) {
      while( true ) {
        if ((*pppplVar6)[0xd] == (int64_t **)&processed_var_9696_ptr) {
          cVar7 = *(char *)(pppplVar6 + 2) != '\0';
        }
        else {
          cVar7 = (*(code *)(*pppplVar6)[0xd])(pppplVar6);
        }
        if (cVar7 != '\0') break;
        Sleep(1000);
      }
      goto LAB_18045cf9b;
    }
  }
  else {
    iVar2 = render_system_memory;
    if (iVar5 != *(int *)(**(int64_t **)(system_context_ptr + 8) + 0x48)) goto joined_r0x00018045cfc8;
  }
  ppplStackX_8 = (int64_t ***)&ppplStackX_10;
  ppplStackX_10 = (int64_t ***)pppplVar6;
  (*(code *)(*pppplVar6)[5])(pppplVar6);
  SystemCore_ErrorHandler(lVar3,&ppplStackX_10,1);
LAB_18045cf9b:
  uVar1 = *(int8_t *)(pppplVar6 + 0x18);
  (*(code *)(*pppplVar6)[7])(pppplVar6);
  return uVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
function_45d030(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int64_t lStack_48;
  void *plocal_var_30;
  int64_t lStack_28;
  pcVar1 = *(code **)(*system_cache_buffer + 0x70);
  CoreMemoryPoolValidator(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar3 = SystemCore_Handler();
  uVar2 = (*pcVar1)(system_cache_buffer,uVar3);
  if (lStack_48 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar2;
}
// 函数: void function_45d100(void)
void function_45d100(void)
{
  code *pcVar1;
  _Exit();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// 函数: void function_45d1d0(uint64_t param_1)
void function_45d1d0(uint64_t param_1)
{
  void *plocal_var_60;
  int64_t lStack_58;
  int32_t local_var_48;
  void *plocal_var_40;
  int64_t lStack_38;
  CoreMemoryPoolValidator(&plocal_var_40);
  CoreMemoryPoolValidator(&plocal_var_60,param_1);
  function_047e70();
  plocal_var_60 = &system_data_buffer_ptr;
  if (lStack_58 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_58 = 0;
  local_var_48 = 0;
  plocal_var_60 = &system_state_ptr;
  plocal_var_40 = &system_data_buffer_ptr;
  if (lStack_38 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45d290(uint64_t param_1,uint64_t param_2,float param_3)
void function_45d290(uint64_t param_1,uint64_t param_2,float param_3)
{
  char cVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  char *pcVar5;
  bool bVar6;
  int8_t stack_array_e8 [32];
  void *plocal_var_c8;
  char *pcStack_c0;
  int iStack_b8;
  int32_t local_var_b0;
  void *plocal_var_a8;
  int64_t lStack_a0;
  int32_t local_var_90;
  uint64_t local_var_88;
  void *plocal_var_80;
  int8_t *plocal_var_78;
  int iStack_70;
  int8_t stack_array_68 [32];
  uint64_t local_var_48;
  local_var_88 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  uVar4 = CoreMemoryPoolValidator(&plocal_var_a8);
  iVar3 = function_046b80(&system_ptr_5240,uVar4);
  if (iVar3 == -1) {
    iVar3 = function_046890(&system_ptr_5240,uVar4);
  }
  plocal_var_a8 = &system_data_buffer_ptr;
  if (lStack_a0 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lStack_a0 = 0;
  local_var_90 = 0;
  plocal_var_a8 = &system_state_ptr;
  CoreMemoryPoolValidator(&plocal_var_c8,param_1);
  plocal_var_80 = &processed_var_672_ptr;
  plocal_var_78 = stack_array_68;
  stack_array_68[0] = 0;
  iStack_70 = 0xc;
  strcpy_s(stack_array_68,0x20,&processed_var_880_ptr);
  if (iStack_b8 == iStack_70) {
    if (iStack_b8 != 0) {
      pcVar5 = pcStack_c0;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[(int64_t)plocal_var_78 - (int64_t)pcStack_c0];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      bVar6 = cVar1 == cVar2;
      goto LAB_18045d3b8;
    }
LAB_18045d3ae:
    if (iStack_70 == 0) {
      bVar6 = true;
      goto LAB_18045d3b8;
    }
  }
  else if (iStack_b8 == 0) goto LAB_18045d3ae;
  bVar6 = false;
LAB_18045d3b8:
  plocal_var_80 = &system_state_ptr;
  if (bVar6) {
    *(double *)((int64_t)iVar3 * 0x100 + 0x78 + render_system_control_memory) = (double)param_3;
  }
  plocal_var_c8 = &system_data_buffer_ptr;
  if (pcStack_c0 != (char *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  pcStack_c0 = (char *)0x0;
  local_var_b0 = 0;
  plocal_var_c8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45d430(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void function_45d430(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  void *plocal_var_70;
  int64_t lStack_68;
  uint64_t *plocal_var_50;
  uint64_t *plocal_var_48;
  uint64_t local_var_40;
  int32_t local_var_38;
  CoreMemoryPoolValidator(&plocal_var_70,param_1,param_3,param_4,0xfffffffffffffffe);
  plocal_var_50 = (uint64_t *)0x0;
  plocal_var_48 = (uint64_t *)0x0;
  uVar5 = 0;
  local_var_40 = 0;
  local_var_38 = 3;
  if (lStack_68 != 0) {
    CoreSystem_DataCollector(&plocal_var_70,&plocal_var_50,&system_ptr_ccb0);
  }
  puVar2 = plocal_var_48;
  puVar1 = plocal_var_50;
  lVar9 = *render_system_data_memory;
  uVar10 = (int64_t)plocal_var_48 - (int64_t)plocal_var_50 >> 5;
  if (uVar10 < 2) {
    uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x88,8,3);
    puVar6 = puVar1 + 4;
  }
  else {
    uVar8 = uVar5;
    if (uVar10 != 1) {
      do {
        lVar3 = function_161e00(lVar9,puVar1 + uVar5 * 4);
        if (lVar3 == 0) {
          uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x88,8,3);
          lVar3 = function_1614d0(uVar4,puVar1 + uVar5 * 4);
          function_161eb0(lVar9,lVar3);
        }
        lVar9 = lVar3;
        uVar7 = (int)uVar8 + 1;
        uVar5 = (uint64_t)(int)uVar7;
        uVar8 = (uint64_t)uVar7;
      } while (uVar5 < uVar10 - 1);
    }
    uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x88,8,3);
    puVar6 = puVar1 + uVar10 * 4 + -4;
  }
  lVar3 = function_1614d0(uVar4,puVar6);
  *(int32_t *)(lVar3 + 0x20) = 3;
  function_161eb0(lVar9,lVar3);
  for (puVar6 = puVar1; puVar6 != puVar2; puVar6 = puVar6 + 4) {
    (**(code **)*puVar6)(puVar6,0);
  }
  if (puVar1 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar1);
  }
  plocal_var_70 = &system_data_buffer_ptr;
  if (lStack_68 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// 函数: void function_45d610(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)
void function_45d610(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)
{
  float fVar1;
  int64_t *plStackX_8;
  uint64_t **ppstack_special_x_10;
  uint64_t **applocal_var_90 [2];
  void *plocal_var_80;
  code *pcStack_78;
  int64_t alStack_68 [10];
  alStack_68[0] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  alStack_68[5] = 0;
  alStack_68[6] = 0;
  alStack_68[7] = 0;
  alStack_68[8] = 0;
  plStackX_8 = alStack_68;
  ppstack_special_x_10 = applocal_var_90;
  plocal_var_80 = &rendering_buffer_2640_ptr;
  pcStack_78 = function_0adba0;
  applocal_var_90[0] = &plStackX_8;
  SystemCore_SecurityManager(applocal_var_90);
  fVar1 = (float)alStack_68[0];
  if (alStack_68[0] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_1 = fVar1;
  fVar1 = (float)alStack_68[2];
  if (alStack_68[2] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_2 = fVar1;
  fVar1 = (float)alStack_68[3];
  if (alStack_68[3] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_3 = fVar1;
  fVar1 = (float)alStack_68[4];
  if (alStack_68[4] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_4 = fVar1;
  fVar1 = (float)alStack_68[5];
  if (alStack_68[5] < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  *param_5 = fVar1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45d760(void)
void function_45d760(void)
{
  uint64_t in_R9;
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < render_system_config_memory) {
    SystemInitializer(&system_ptr_99c8);
    if (render_system_config_memory == -1) {
      render_system_config_memory = &processed_var_9208_ptr;
      render_system_config_memory = &system_ptr_99e8;
// 函数: void function_45d9f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_45d9f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t stack_array_30 [48];
  CoreMemoryPoolValidator(stack_array_30,param_1,param_3,param_4,0xfffffffffffffffe);
  function_046ca0();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45da50(uint64_t param_1)
void function_45da50(uint64_t param_1)
{
  void *plocal_var_50;
  int64_t lStack_48;
  int8_t stack_array_30 [40];
  SystemCore_FileSystem(system_context_ptr);
  function_0bc000(&plocal_var_50,param_1);
  SystemCore_NetworkHandler0(stack_array_30,&plocal_var_50);
  function_056c50();
  SystemCore_FileSystem(system_context_ptr);
  plocal_var_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_45daf0(uint64_t param_1)
void function_45daf0(uint64_t param_1)
{
  int8_t stack_array_30 [40];
  SystemCore_FileSystem(system_context_ptr);
  CoreMemoryPoolValidator(stack_array_30,param_1);
  function_056c50();
  SystemCore_FileSystem(system_context_ptr);
  return;
}
// WARNING: Removing unreachable block (ram,0x00018017747d)
// WARNING: Removing unreachable block (ram,0x000180177a18)
// WARNING: Removing unreachable block (ram,0x000180177a22)
// WARNING: Removing unreachable block (ram,0x000180177a2e)
// WARNING: Removing unreachable block (ram,0x000180177a35)
// WARNING: Removing unreachable block (ram,0x000180177581)
// WARNING: Removing unreachable block (ram,0x000180177590)
// WARNING: Removing unreachable block (ram,0x00018017759c)
// WARNING: Removing unreachable block (ram,0x0001801775a3)
// WARNING: Removing unreachable block (ram,0x0001801775b3)
// WARNING: Removing unreachable block (ram,0x0001801775c0)
// WARNING: Removing unreachable block (ram,0x0001801775cc)
// WARNING: Removing unreachable block (ram,0x0001801775d3)
// WARNING: Removing unreachable block (ram,0x000180177263)
// WARNING: Removing unreachable block (ram,0x000180177296)
// WARNING: Removing unreachable block (ram,0x00018017726a)
// WARNING: Removing unreachable block (ram,0x000180177274)
// WARNING: Removing unreachable block (ram,0x000180177280)
// WARNING: Removing unreachable block (ram,0x000180177287)
// WARNING: Removing unreachable block (ram,0x000180177290)
// WARNING: Removing unreachable block (ram,0x000180177298)
// WARNING: Removing unreachable block (ram,0x00018017753a)
// WARNING: Removing unreachable block (ram,0x000180177540)
// WARNING: Removing unreachable block (ram,0x000180177550)
// WARNING: Removing unreachable block (ram,0x00018017755c)
// WARNING: Removing unreachable block (ram,0x000180177563)
// WARNING: Removing unreachable block (ram,0x0001801772c2)
// WARNING: Removing unreachable block (ram,0x0001801772d0)
// WARNING: Removing unreachable block (ram,0x0001801772dc)
// WARNING: Removing unreachable block (ram,0x0001801772e3)
// WARNING: Removing unreachable block (ram,0x00018017764c)
// WARNING: Removing unreachable block (ram,0x00018017749a)
// WARNING: Removing unreachable block (ram,0x0001801774a8)
// WARNING: Removing unreachable block (ram,0x0001801774aa)
// WARNING: Removing unreachable block (ram,0x000180176fc3)
// WARNING: Removing unreachable block (ram,0x000180177722)
// WARNING: Removing unreachable block (ram,0x00018017729d)
// WARNING: Removing unreachable block (ram,0x00018017766b)
// WARNING: Removing unreachable block (ram,0x000180177677)
// WARNING: Removing unreachable block (ram,0x000180177679)
// WARNING: Removing unreachable block (ram,0x00018017739f)
// WARNING: Removing unreachable block (ram,0x0001801773a6)
// WARNING: Removing unreachable block (ram,0x0001801773b0)
// WARNING: Removing unreachable block (ram,0x0001801773bc)
// WARNING: Removing unreachable block (ram,0x0001801773c3)
// WARNING: Removing unreachable block (ram,0x00018017731b)
// WARNING: Removing unreachable block (ram,0x000180177321)
// WARNING: Removing unreachable block (ram,0x000180177330)
// WARNING: Removing unreachable block (ram,0x00018017733c)
// WARNING: Removing unreachable block (ram,0x000180177343)
// WARNING: Removing unreachable block (ram,0x00018017734b)
// WARNING: Removing unreachable block (ram,0x000180177356)
// WARNING: Removing unreachable block (ram,0x000180177360)
// WARNING: Removing unreachable block (ram,0x00018017736c)
// WARNING: Removing unreachable block (ram,0x000180177373)
// WARNING: Removing unreachable block (ram,0x00018017737b)
// WARNING: Removing unreachable block (ram,0x000180177385)
// WARNING: Removing unreachable block (ram,0x0001801773cb)
// WARNING: Removing unreachable block (ram,0x000180177381)
// WARNING: Removing unreachable block (ram,0x0001801773cd)
// WARNING: Removing unreachable block (ram,0x0001801773d6)
// WARNING: Removing unreachable block (ram,0x0001801773da)
// WARNING: Removing unreachable block (ram,0x0001801773e4)
// WARNING: Removing unreachable block (ram,0x0001801773eb)
// WARNING: Removing unreachable block (ram,0x000180177400)
// WARNING: Removing unreachable block (ram,0x00018017740c)
// WARNING: Removing unreachable block (ram,0x000180177413)
// WARNING: Removing unreachable block (ram,0x00018017741e)
// WARNING: Removing unreachable block (ram,0x000180177417)
// WARNING: Removing unreachable block (ram,0x000180177420)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address