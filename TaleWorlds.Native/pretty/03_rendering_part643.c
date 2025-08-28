/* 原始函数别名定义 */
#define ResourceManager_Allocate ResourceManager_Allocate  // ResourceManager_Allocate 的语义化别名
#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part643.c - 12 个函数
// 函数: void CoreMemoryPoolReallocator(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void CoreMemoryPoolReallocator(int64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
{
  int64_t *plVar1;
  code *pcVar2;
  int64_t lVar3;
  int8_t stack_array_178 [32];
  void **pplocal_var_158;
  uint64_t local_var_148;
  uint64_t local_var_140;
  void *plocal_var_138;
  int8_t *plocal_var_130;
  int32_t local_var_128;
  int8_t stack_array_120 [32];
  void *plocal_var_100;
  int8_t *plocal_var_f8;
  int32_t local_var_f0;
  int8_t stack_array_e8 [32];
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [32];
  void *plocal_var_90;
  int8_t *plocal_var_88;
  int32_t local_var_80;
  int8_t stack_array_78 [32];
  uint64_t local_var_58;
  local_var_148 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  if (param_3 < 0x10) {
    param_3 = 0x10;
  }
  if (param_3 == 0x10) {
    CoreMemoryPoolAllocator(param_1,param_2,param_4);
  }
  else if (param_2 != 0) {
    if (*(int64_t *)(param_1 + 0x20) != 0) {
      (**(code **)(param_1 + 0x28))(param_2 & 0xffffffff);
    }
    lVar3 = function_64eb10(*(uint64_t *)
                           (*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
                           0x10),param_2,param_3,0);
    if (lVar3 == 0) {
      plVar1 = *(int64_t **)(render_system_data_memory + 0x18);
      if (plVar1 != (int64_t *)0x0) {
        pcVar2 = *(code **)(*plVar1 + 0x20);
        plocal_var_90 = &processed_var_672_ptr;
        stack_array_78[0] = 0;
        local_var_80 = 1;
        plocal_var_88 = stack_array_78;
        strcpy_s(stack_array_78,0x20,&system_state_8120);
        plocal_var_c8 = &processed_var_672_ptr;
        plocal_var_c0 = stack_array_b0;
        stack_array_b0[0] = 0;
        local_var_b8 = 0xc;
        strcpy_s(stack_array_b0,0x20,&processed_var_4248_ptr);
        plocal_var_100 = &processed_var_672_ptr;
        plocal_var_f8 = stack_array_e8;
        stack_array_e8[0] = 0;
        local_var_f0 = 7;
        strcpy_s(stack_array_e8,0x20,&processed_var_48_ptr);
        plocal_var_138 = &processed_var_672_ptr;
        plocal_var_130 = stack_array_120;
        stack_array_120[0] = 0;
        local_var_128 = 0xe;
        strcpy_s(stack_array_120,0x20,&processed_var_56_ptr);
        pplocal_var_158 = &plocal_var_90;
        (*pcVar2)(plVar1,&plocal_var_138,&plocal_var_100,&plocal_var_c8);
        plocal_var_138 = &system_state_ptr;
        plocal_var_100 = &system_state_ptr;
        plocal_var_c8 = &system_state_ptr;
        plocal_var_90 = &system_state_ptr;
      }
      function_626ee0(&memory_allocator_3904_ptr,param_2);
    }
    local_var_140 = CoreMemoryPoolCleaner(lVar3);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreMemoryPoolAllocator(uint64_t param_1,uint64_t param_2)
void CoreMemoryPoolAllocator(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  code *pcVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int8_t stack_array_148 [32];
  void **pplocal_var_128;
  uint64_t local_var_118;
  void *plocal_var_110;
  int8_t *plocal_var_108;
  int32_t local_var_100;
  int8_t stack_array_f8 [32];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [32];
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [32];
  void *plocal_var_68;
  int8_t *plocal_var_60;
  int32_t local_var_58;
  int8_t stack_array_50 [32];
  uint64_t local_var_30;
  local_var_118 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  if (param_2 == 0) goto LAB_18062b644;
  uVar5 = param_2;
  if (param_2 < 0x10) {
    uVar5 = 0x10;
  }
  if (uVar5 < 0x401) {
    lVar1 = *(int64_t *)
             (*(int64_t *)
               (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
               0x10) + 8 + (uVar5 + 7 & 0xfffffffffffffff8));
    puVar4 = *(uint64_t **)(lVar1 + 0x10);
    if (puVar4 == (uint64_t *)0x0) goto LAB_18062b4be;
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
    *(uint64_t *)(lVar1 + 0x10) = *puVar4;
  }
  else {
LAB_18062b4be:
    puVar4 = (uint64_t *)function_64ddd0();
  }
  if (puVar4 == (uint64_t *)0x0) {
    plVar2 = *(int64_t **)(render_system_data_memory + 0x18);
    if (plVar2 != (int64_t *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x20);
      plocal_var_68 = &processed_var_672_ptr;
      plocal_var_60 = stack_array_50;
      stack_array_50[0] = 0;
      local_var_58 = 1;
      strcpy_s(stack_array_50,0x20,&system_state_8120);
      plocal_var_a0 = &processed_var_672_ptr;
      plocal_var_98 = stack_array_88;
      stack_array_88[0] = 0;
      local_var_90 = 0xc;
      strcpy_s(stack_array_88,0x20,&processed_var_4248_ptr);
      plocal_var_d8 = &processed_var_672_ptr;
      plocal_var_d0 = stack_array_c0;
      stack_array_c0[0] = 0;
      local_var_c8 = 7;
      strcpy_s(stack_array_c0,0x20,&processed_var_48_ptr);
      plocal_var_110 = &processed_var_672_ptr;
      plocal_var_108 = stack_array_f8;
      stack_array_f8[0] = 0;
      local_var_100 = 0xe;
      strcpy_s(stack_array_f8,0x20,&processed_var_56_ptr);
      pplocal_var_128 = &plocal_var_68;
      (*pcVar3)(plVar2,&plocal_var_110,&plocal_var_d8,&plocal_var_a0);
      plocal_var_110 = &system_state_ptr;
      plocal_var_d8 = &system_state_ptr;
      plocal_var_a0 = &system_state_ptr;
      plocal_var_68 = &system_state_ptr;
    }
    function_626ee0(&processed_var_4272_ptr,param_2);
  }
  CoreMemoryPoolCleaner(puVar4);
LAB_18062b644:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_148);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62b680(uint64_t param_1,int64_t param_2,uint64_t param_3)
void function_62b680(uint64_t param_1,int64_t param_2,uint64_t param_3)
{
  int64_t *plVar1;
  code *pcVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t stack_array_158 [32];
  void **pplocal_var_138;
  uint64_t local_var_128;
  void *plocal_var_120;
  int8_t *plocal_var_118;
  int32_t local_var_110;
  int8_t stack_array_108 [32];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [32];
  void *plocal_var_b0;
  int8_t *plocal_var_a8;
  int32_t local_var_a0;
  int8_t stack_array_98 [32];
  void *plocal_var_78;
  int8_t *plocal_var_70;
  int32_t local_var_68;
  int8_t stack_array_60 [32];
  uint64_t local_var_40;
  local_var_128 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  if (param_2 == 0) {
    CoreMemoryPoolAllocator(param_1,param_3,3);
  }
  else if (param_3 != 0) {
    uVar4 = param_3;
    if (param_3 < 0x10) {
      uVar4 = 0x10;
    }
    lVar3 = function_64ea20(*(uint64_t *)
                           (*(int64_t *)
                             ((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
                           0x10),param_2,uVar4);
    if (lVar3 == 0) {
      plVar1 = *(int64_t **)(render_system_data_memory + 0x18);
      if (plVar1 != (int64_t *)0x0) {
        pcVar2 = *(code **)(*plVar1 + 0x20);
        plocal_var_78 = &processed_var_672_ptr;
        plocal_var_70 = stack_array_60;
        stack_array_60[0] = 0;
        local_var_68 = 1;
        strcpy_s(stack_array_60,0x20,&system_state_8120);
        plocal_var_b0 = &processed_var_672_ptr;
        plocal_var_a8 = stack_array_98;
        stack_array_98[0] = 0;
        local_var_a0 = 0xc;
        strcpy_s(stack_array_98,0x20,&processed_var_4248_ptr);
        plocal_var_e8 = &processed_var_672_ptr;
        plocal_var_e0 = stack_array_d0;
        stack_array_d0[0] = 0;
        local_var_d8 = 7;
        strcpy_s(stack_array_d0,0x20,&processed_var_48_ptr);
        plocal_var_120 = &processed_var_672_ptr;
        plocal_var_118 = stack_array_108;
        stack_array_108[0] = 0;
        local_var_110 = 0xe;
        strcpy_s(stack_array_108,0x20,&processed_var_56_ptr);
        pplocal_var_138 = &plocal_var_78;
        (*pcVar2)(plVar1,&plocal_var_120,&plocal_var_e8,&plocal_var_b0);
        plocal_var_120 = &system_state_ptr;
        plocal_var_e8 = &system_state_ptr;
        plocal_var_b0 = &system_state_ptr;
        plocal_var_78 = &system_state_ptr;
      }
      function_626ee0(&memory_allocator_3904_ptr,param_3);
    }
    CoreMemoryPoolCleaner(lVar3);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataValidator(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
void DataValidator(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  int8_t param_5)
{
  uint64_t uVar1;
  int64_t *plVar2;
  code *pcVar3;
  int64_t lVar4;
  int8_t stack_array_168 [32];
  void **pplocal_var_148;
  uint64_t local_var_138;
  void *plocal_var_130;
  int8_t *plocal_var_128;
  int32_t local_var_120;
  int8_t stack_array_118 [32];
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int8_t stack_array_e0 [32];
  void *plocal_var_c0;
  int8_t *plocal_var_b8;
  int32_t local_var_b0;
  int8_t stack_array_a8 [32];
  void *plocal_var_88;
  int8_t *plocal_var_80;
  int32_t local_var_78;
  int8_t stack_array_70 [32];
  uint64_t local_var_50;
  local_var_138 = 0xfffffffffffffffe;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_168;
  if (param_4 < 0x10) {
    param_4 = 0x10;
  }
  if (param_2 == 0) {
    CoreMemoryPoolReallocator(param_1,param_3,param_4);
  }
  else if (param_4 == 0x10) {
    function_62b680();
  }
  else if (param_3 != 0) {
    uVar1 = *(uint64_t *)
             (*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) + 0x10
             );
    if (param_4 < 9) {
      lVar4 = function_64ea20(uVar1,param_2,param_3,param_5);
    }
    else {
      pplocal_var_148 = (void **)(param_2 % param_4);
      lVar4 = function_64ec60(uVar1,param_2,param_3,param_4);
    }
    if (lVar4 == 0) {
      plVar2 = *(int64_t **)(render_system_data_memory + 0x18);
      if (plVar2 != (int64_t *)0x0) {
        pcVar3 = *(code **)(*plVar2 + 0x20);
        plocal_var_88 = &processed_var_672_ptr;
        plocal_var_80 = stack_array_70;
        stack_array_70[0] = 0;
        local_var_78 = 1;
        strcpy_s(stack_array_70,0x20,&system_state_8120);
        plocal_var_c0 = &processed_var_672_ptr;
        plocal_var_b8 = stack_array_a8;
        stack_array_a8[0] = 0;
        local_var_b0 = 0xc;
        strcpy_s(stack_array_a8,0x20,&processed_var_4248_ptr);
        plocal_var_f8 = &processed_var_672_ptr;
        plocal_var_f0 = stack_array_e0;
        stack_array_e0[0] = 0;
        local_var_e8 = 7;
        strcpy_s(stack_array_e0,0x20,&processed_var_48_ptr);
        plocal_var_130 = &processed_var_672_ptr;
        plocal_var_128 = stack_array_118;
        stack_array_118[0] = 0;
        local_var_120 = 0xe;
        strcpy_s(stack_array_118,0x20,&processed_var_56_ptr);
        pplocal_var_148 = &plocal_var_88;
        (*pcVar3)(plVar2,&plocal_var_130,&plocal_var_f8,&plocal_var_c0);
        plocal_var_130 = &system_state_ptr;
        plocal_var_f8 = &system_state_ptr;
        plocal_var_c0 = &system_state_ptr;
        plocal_var_88 = &system_state_ptr;
      }
      function_626ee0(&memory_allocator_3904_ptr,param_3);
    }
    CoreMemoryPoolCleaner(lVar4);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_168);
}
int8_t function_62bb10(uint64_t param_1,int64_t param_2)
{
  if (param_2 != 0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(param_2);
  }
  return 1;
}
// 函数: void function_62bb40(void)
void function_62bb40(void)
{
  DataValidator();
  return;
}
// 函数: void function_62bb70(int64_t param_1,int64_t param_2)
void function_62bb70(int64_t param_1,int64_t param_2)
{
  char cVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  void *puVar4;
  char *pcVar5;
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 8);
  }
  uVar2 = strrchr(puVar4,0x2f);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_1 + 8);
  }
  uVar3 = strrchr(puVar4,0x2f);
  if (uVar2 == 0) {
    if (uVar3 == 0) {
      pcVar5 = "";
      if (*(char **)(param_1 + 8) != (char *)0x0) {
        pcVar5 = *(char **)(param_1 + 8);
      }
      param_2 = param_2 - (int64_t)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[param_2] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar5 = (char *)(uVar3 + 1);
      param_2 = param_2 - (int64_t)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[param_2] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
  }
  else if (uVar3 == 0) {
    pcVar5 = (char *)(uVar2 + 1);
    param_2 = param_2 - (int64_t)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  else if (uVar3 < uVar2) {
    pcVar5 = (char *)(uVar2 + 1);
    param_2 = param_2 - (int64_t)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  else {
    pcVar5 = (char *)(uVar3 + 1);
    param_2 = param_2 - (int64_t)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  return;
}
// 函数: void function_62bc90(int64_t param_1,int8_t *param_2)
void function_62bc90(int64_t param_1,int8_t *param_2)
{
  int64_t lVar1;
  void *puVar2;
  void *puVar3;
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_1 + 8);
  }
  lVar1 = strrchr(puVar3,0x2f);
  if (lVar1 == 0) {
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_1 + 8);
    }
  }
  else {
    puVar3 = (void *)(lVar1 + 1);
  }
  puVar2 = (void *)strchr(puVar3,0x2e);
  if (puVar2 == (void *)0x0) {
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 8);
    }
    puVar2 = puVar2 + *(int *)(param_1 + 0x10);
  }
  if ((int64_t)puVar2 - (int64_t)puVar3 == 0) {
    *param_2 = 0;
    return;
  }
// WARNING: Subroutine does not return
  memcpy(param_2,puVar3,(int64_t)puVar2 - (int64_t)puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_EventDispatcher(uint64_t param_1,int64_t param_2)
void UISystem_EventDispatcher(uint64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  byte *pbVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  void *puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int8_t stack_array_a8 [32];
  uint64_t *plocal_var_88;
  uint64_t *plocal_var_80;
  uint64_t local_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  void *plocal_var_60;
  byte *pbStack_58;
  int iStack_50;
  uint64_t local_var_38;
  local_var_68 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  cVar6 = UltraHighFreq_LogManager1();
  if (cVar6 != '\0') {
    plocal_var_88 = (uint64_t *)0x0;
    plocal_var_80 = (uint64_t *)0x0;
    uVar10 = 0;
    local_var_78 = 0;
    local_var_70 = 3;
    function_62d0d0(param_1,&plocal_var_88);
    puVar5 = plocal_var_80;
    puVar4 = plocal_var_88;
    uVar11 = (int64_t)plocal_var_80 - (int64_t)plocal_var_88 >> 5;
    puVar3 = puVar4;
    if (uVar11 != 0) {
      do {
        puVar1 = puVar4 + uVar10 * 4;
        cVar6 = RenderingSystem_RenderQueue(puVar1);
        if (cVar6 != '\0') {
          function_627490(&plocal_var_60,puVar1);
          iVar8 = *(int *)(param_2 + 0x10);
          if (iStack_50 == iVar8) {
            if (iStack_50 != 0) {
              pbVar7 = pbStack_58;
              do {
                pbVar2 = pbVar7 + (*(int64_t *)(param_2 + 8) - (int64_t)pbStack_58);
                iVar8 = (uint)*pbVar7 - (uint)*pbVar2;
                if (iVar8 != 0) break;
                pbVar7 = pbVar7 + 1;
              } while (*pbVar2 != 0);
            }
LAB_18062be3d:
            if ((iVar8 == 0) && (cVar6 = function_62da70(puVar1), cVar6 == '\0')) {
              puVar9 = &system_buffer_ptr;
              if ((void *)puVar1[1] != (void *)0x0) {
                puVar9 = (void *)puVar1[1];
              }
              function_627340(&processed_var_4944_ptr,puVar9);
            }
          }
          else if (iStack_50 == 0) goto LAB_18062be3d;
          plocal_var_60 = &system_state_ptr;
        }
        uVar10 = (uint64_t)((int)uVar10 + 1);
      } while (uVar10 < uVar11);
    }
    for (; puVar3 != puVar5; puVar3 = puVar3 + 4) {
      (**(code **)*puVar3)(puVar3,0);
    }
    if (puVar4 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar4);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_a8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62bed0(uint64_t param_1)
void function_62bed0(uint64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  void *puVar3;
  int8_t stack_array_608 [32];
  int8_t *plocal_var_5e8;
  int32_t local_var_5e0;
  int32_t local_var_5d8;
  void *plocal_var_5d0;
  void *plocal_var_5c8;
  int32_t local_var_5b8;
  uint64_t local_var_5b0;
  int8_t *plocal_var_5a8;
  int iStack_59c;
  void *aplocal_var_598 [2];
  byte abStack_588 [8];
  int8_t stack_array_580 [152];
  int8_t stack_array_4e8 [96];
  int8_t stack_array_488 [32];
  void *aplocal_var_468 [68];
  int8_t stack_array_248 [560];
  uint64_t local_var_18;
  local_var_5b0 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_608;
  local_var_5d8 = 0;
  uVar1 = SystemCore_EncryptionEngine(aplocal_var_468,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_5d0,uVar1);
  aplocal_var_468[0] = &system_state_ptr;
  local_var_5e0 = 0x118;
  plocal_var_5e8 = stack_array_248;
  MultiByteToWideChar(0xfde9,0,plocal_var_5c8,0xffffffff);
  aplocal_var_598[0] = &processed_var_7528_ptr;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(stack_array_4e8);
  local_var_5d8 = 1;
  __0__basic_istream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (aplocal_var_598,abStack_588,0,0);
  *(void **)((int64_t)aplocal_var_598 + (int64_t)*(int *)(aplocal_var_598[0] + 4)) = &processed_var_7544_ptr
  ;
  *(int *)((int64_t)&iStack_59c + (int64_t)*(int *)(aplocal_var_598[0] + 4)) =
       *(int *)(aplocal_var_598[0] + 4) + -0xb0;
  function_09ec20(abStack_588);
  lVar2 = function_09ec80(abStack_588,stack_array_248,0x25);
  if (lVar2 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((int64_t)aplocal_var_598 + (int64_t)*(int *)(aplocal_var_598[0] + 4),2);
  }
  if ((abStack_588[*(int *)(aplocal_var_598[0] + 4)] & 6) == 0) {
    _tellg___basic_istream_DU__char_traits_D_std___std__QEAA_AV__fpos_U_Mbstatet___2_XZ
              (aplocal_var_598,stack_array_488);
  }
  else {
    puVar3 = &system_buffer_ptr;
    if (plocal_var_5c8 != (void *)0x0) {
      puVar3 = plocal_var_5c8;
    }
    SystemCore_ResourceManager0(&processed_var_4840_ptr,puVar3);
  }
  plocal_var_5a8 = stack_array_4e8;
  *(void **)((int64_t)aplocal_var_598 + (int64_t)*(int *)(aplocal_var_598[0] + 4)) = &processed_var_7544_ptr
  ;
  *(int *)((int64_t)&iStack_59c + (int64_t)*(int *)(aplocal_var_598[0] + 4)) =
       *(int *)(aplocal_var_598[0] + 4) + -0xb0;
  function_09fb60(abStack_588);
  __1__basic_istream_DU__char_traits_D_std___std__UEAA_XZ(stack_array_580);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(stack_array_4e8);
  plocal_var_5d0 = &system_data_buffer_ptr;
  if (plocal_var_5c8 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_5c8 = (void *)0x0;
  local_var_5b8 = 0;
  plocal_var_5d0 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_608);
}
uint64_t function_62c100(uint64_t param_1)
{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  int32_t uVar4;
  uint64_t uVar5;
  void *plocal_var_28;
  int64_t lStack_20;
  uint local_var_18;
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  SystemCore_EncryptionEngine0(&plocal_var_28);
  uVar2 = 0;
  if (local_var_18 != 0) {
    lVar1 = 0;
    do {
      if (*(char *)(lVar1 + lStack_20) == '\\') {
        *(char *)(lVar1 + lStack_20) = '/';
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (uVar2 < local_var_18);
  }
  iVar3 = local_var_18 - 1;
  lVar1 = (int64_t)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(char *)(lVar1 + lStack_20) == '/') goto LAB_18062c185;
      iVar3 = iVar3 + -1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  iVar3 = -1;
LAB_18062c185:
  NetworkSystem_ProtocolParser(&plocal_var_28,param_1,0,iVar3,uVar4,uVar5);
  plocal_var_28 = &system_data_buffer_ptr;
  if (lStack_20 == 0) {
    return param_1;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void ResourceManager_Allocate(uint64_t param_1,char param_2)
void ResourceManager_Allocate(uint64_t param_1,char param_2)
{
  char cVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint uVar4;
  char *pcVar5;
  int8_t stack_array_4d8 [32];
  int8_t stack_array_4b8 [8];
  char *pcStack_4b0;
  uint local_var_4a8;
  uint64_t local_var_498;
  void *aplocal_var_488 [68];
  int8_t stack_array_268 [288];
  char acStack_148 [288];
  uint64_t local_var_28;
  local_var_498 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4d8;
  cVar1 = UltraHighFreq_LogManager1();
  if (cVar1 == '\0') {
    if (param_2 != '\0') {
      uVar2 = SystemCore_EncryptionEngine(aplocal_var_488,param_1);
      SystemCore_EncryptionEngine0(stack_array_4b8,uVar2);
      aplocal_var_488[0] = &system_state_ptr;
      uVar4 = 0;
      if (local_var_4a8 != 0) {
        lVar3 = 0;
        do {
          if (pcStack_4b0[lVar3] == '\\') {
            pcStack_4b0[lVar3] = '/';
          }
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 1;
        } while (uVar4 < local_var_4a8);
      }
      pcVar5 = "";
      if (pcStack_4b0 != (char *)0x0) {
        pcVar5 = pcStack_4b0;
      }
      lVar3 = -(int64_t)pcVar5;
      do {
        cVar1 = *pcVar5;
        pcVar5[(int64_t)(acStack_148 + lVar3)] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
// WARNING: Subroutine does not return
      memset(stack_array_268,0,0x118);
    }
    SystemManager_Processor(param_1);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_4d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62c470(uint64_t param_1)
void function_62c470(uint64_t param_1)
{
  code *pcVar1;
  int iVar2;
  uint64_t uVar3;
  void *puVar4;
  int8_t stack_array_4f8 [32];
  int16_t *plocal_var_4d8;
  int32_t local_var_4d0;
  void *plocal_var_4c8;
  void *plocal_var_4c0;
  int32_t local_var_4b0;
  uint64_t local_var_4a8;
  int32_t local_var_4a0;
  int16_t *plocal_var_498;
  uint64_t local_var_490;
  int16_t local_var_488;
  int32_t local_var_484;
  uint64_t local_var_480;
  uint64_t local_var_478;
  uint64_t local_var_470;
  void *aplocal_var_468 [68];
  int16_t stack_array_248 [280];
  uint64_t local_var_18;
  local_var_470 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4f8;
  uVar3 = SystemCore_EncryptionEngine(aplocal_var_468,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_4c8,uVar3);
  aplocal_var_468[0] = &system_state_ptr;
  puVar4 = &system_buffer_ptr;
  if (plocal_var_4c0 != (void *)0x0) {
    puVar4 = plocal_var_4c0;
  }
  local_var_4d0 = 0x118;
  plocal_var_4d8 = stack_array_248;
  iVar2 = MultiByteToWideChar(0xfde9,0,puVar4,0xffffffff);
  if ((uint64_t)((int64_t)iVar2 * 2) < 0x230) {
    stack_array_248[iVar2] = 0;
    if ((uint64_t)((int64_t)(iVar2 + 1) * 2) < 0x230) {
      stack_array_248[iVar2 + 1] = 0;
      local_var_4a8 = 0;
      local_var_4a0 = 3;
      plocal_var_498 = stack_array_248;
      local_var_490 = 0;
      local_var_488 = 0x14;
      local_var_484 = 0;
      local_var_478 = 0;
      local_var_480 = 0;
      SHFileOperationW(&local_var_4a8);
      plocal_var_4c8 = &system_data_buffer_ptr;
      if (plocal_var_4c0 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      plocal_var_4c0 = (void *)0x0;
      local_var_4b0 = 0;
      plocal_var_4c8 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_4f8);
    }
    UltraHighFreq_ThreadManager1();
  }
  UltraHighFreq_ThreadManager1();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62c5f0(uint64_t param_1,int64_t param_2)
void function_62c5f0(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t lVar7;
  int8_t stack_array_778 [32];
  uint64_t *plocal_var_758;
  int32_t local_var_750;
  uint64_t local_var_748;
  uint64_t local_var_740;
  void *plocal_var_738;
  int64_t lStack_730;
  uint local_var_728;
  int32_t local_var_720;
  void *plocal_var_718;
  int64_t lStack_710;
  uint local_var_708;
  int32_t local_var_700;
  uint64_t local_var_6f8;
  byte abStack_6e8 [44];
  short sStack_6bc;
  short sStack_6ba;
  short sStack_6b8;
  uint64_t local_var_498;
  uint64_t stack_array_278 [70];
  uint64_t local_var_48;
  local_var_6f8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_778;
  cVar2 = UltraHighFreq_LogManager1();
  if (cVar2 != '\0') {
    uVar4 = SystemCore_EncryptionEngine(&local_var_498,param_1);
    SystemCore_EncryptionEngine0(&plocal_var_718,uVar4);
    local_var_498 = &system_state_ptr;
    if (*(char *)((uint64_t)(local_var_708 - 1) + lStack_710) == '/') {
      uVar6 = local_var_708 + 1;
      CoreMemoryPoolProcessor(&plocal_var_718,uVar6);
      *(int16_t *)((uint64_t)local_var_708 + lStack_710) = 0x2a;
    }
    else {
      uVar6 = local_var_708 + 2;
      CoreMemoryPoolProcessor(&plocal_var_718,uVar6);
      *(int16_t *)((uint64_t)local_var_708 + lStack_710) = 0x2a2f;
      *(int8_t *)((int16_t *)((uint64_t)local_var_708 + lStack_710) + 1) = 0;
    }
    local_var_750 = 0x118;
    plocal_var_758 = stack_array_278;
    local_var_708 = uVar6;
    MultiByteToWideChar(0xfde9,0,lStack_710,0xffffffff);
    lVar5 = FindFirstFileW(stack_array_278,abStack_6e8);
    if (lVar5 != -1) {
      do {
        if ((((sStack_6bc != 0x2e) || (sStack_6ba != 0)) &&
            ((sStack_6bc != 0x2e || ((sStack_6ba != 0x2e || (sStack_6b8 != 0)))))) &&
           ((abStack_6e8[0] & 0x10) != 0)) {
          SystemCore_EncryptionEngine0(&plocal_var_738,param_1);
          if (*(char *)((uint64_t)(local_var_728 - 1) + lStack_730) != '/') {
            uVar6 = local_var_728 + 1;
            CoreMemoryPoolProcessor(&plocal_var_738,uVar6);
            *(int16_t *)((uint64_t)local_var_728 + lStack_730) = 0x2f;
            local_var_728 = uVar6;
          }
          local_var_740 = 0;
          local_var_748 = 0;
          local_var_750 = 0x118;
          plocal_var_758 = &local_var_498;
          WideCharToMultiByte(0xfde9,0,&sStack_6bc,0xffffffff);
          lVar1 = -1;
          do {
            lVar7 = lVar1;
            lVar1 = lVar7 + 1;
          } while (*(char *)((int64_t)&local_var_498 + lVar7 + 1) != '\0');
          iVar3 = (int)(lVar7 + 1);
          if (0 < iVar3) {
            CoreMemoryPoolProcessor(&plocal_var_738,local_var_728 + iVar3);
// WARNING: Subroutine does not return
            memcpy((uint64_t)local_var_728 + lStack_730,&local_var_498,(int64_t)((int)lVar7 + 2));
          }
          if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
            *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
            SystemCore_NetworkHandler0();
          }
          else {
            SystemCore_BackupSystem(param_2,&plocal_var_738);
          }
          plocal_var_738 = &system_data_buffer_ptr;
          if (lStack_730 != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          lStack_730 = 0;
          local_var_720 = 0;
          plocal_var_738 = &system_state_ptr;
        }
        iVar3 = FindNextFileW(lVar5,abStack_6e8);
      } while (iVar3 != 0);
    }
    FindClose(lVar5);
    plocal_var_718 = &system_data_buffer_ptr;
    if (lStack_710 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_710 = 0;
    local_var_700 = 0;
    plocal_var_718 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_778);
}