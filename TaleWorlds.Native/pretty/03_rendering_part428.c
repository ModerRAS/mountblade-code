#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part428.c - 12 个函数
// 函数: void function_49e270(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_49e270(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  byte bVar2;
  uint64_t *puVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t ****ppppuVar6;
  byte *pbVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  void *puVar11;
  uint64_t *pstack_special_x_18;
  uint64_t *pstack_special_x_20;
  void *plocal_var_90;
  int8_t *plocal_var_88;
  uint local_var_80;
  uint64_t local_var_78;
  uint64_t ***ppplocal_var_70;
  uint64_t ***ppplocal_var_68;
  uint64_t *plocal_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  if (*(int *)(system_main_module_state + 0x20) != 0) {
    lVar1 = param_1 + 8;
    function_05d260(lVar1,*(uint64_t *)(param_1 + 0x18),param_3,param_4,0xfffffffffffffffe);
    *(int64_t *)lVar1 = lVar1;
    *(int64_t *)(param_1 + 0x10) = lVar1;
    uVar10 = 0;
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(int8_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
    local_var_48 = 3;
    ppplocal_var_70 = &ppplocal_var_70;
    ppplocal_var_68 = &ppplocal_var_70;
    plocal_var_60 = (uint64_t *)0x0;
    local_var_58 = 0;
    local_var_50 = 0;
    function_4aac20(param_2,&ppplocal_var_70);
    ppppuVar6 = (uint64_t ****)ppplocal_var_68;
    if ((uint64_t ****)ppplocal_var_68 != &ppplocal_var_70) {
      do {
        plocal_var_90 = &system_data_buffer_ptr;
        local_var_78 = 0;
        plocal_var_88 = (int8_t *)0x0;
        local_var_80 = 0;
        CoreEngineDataBufferProcessor(&plocal_var_90,*(int32_t *)(ppppuVar6 + 6));
        if (*(int *)(ppppuVar6 + 6) != 0) {
// WARNING: Subroutine does not return
          memcpy(plocal_var_88,ppppuVar6[5],*(int *)(ppppuVar6 + 6) + 1);
        }
        if (ppppuVar6[5] != (uint64_t ***)0x0) {
          local_var_80 = 0;
          if (plocal_var_88 != (int8_t *)0x0) {
            *plocal_var_88 = 0;
          }
          local_var_78 = local_var_78 & 0xffffffff;
        }
        puVar11 = &system_buffer_ptr;
        if (render_system_control_memory != (void *)0x0) {
          puVar11 = render_system_control_memory;
        }
        lVar8 = -1;
        do {
          lVar5 = lVar8;
          lVar8 = lVar5 + 1;
        } while (puVar11[lVar8] != '\0');
        if (0 < (int)lVar8) {
          CoreEngineDataBufferProcessor(&plocal_var_90,local_var_80 + (int)lVar8);
// WARNING: Subroutine does not return
          memcpy(plocal_var_88 + local_var_80,puVar11,(int64_t)((int)lVar5 + 2));
        }
        lVar8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x30));
        CoreEngineDataTransformer(lVar8 + 0x20,&plocal_var_90);
        lVar5 = SystemCore_SecurityValidator(lVar1,&pstack_special_x_18,lVar8 + 0x20);
        if ((char)pstack_special_x_18 != '\0') {
          if (lVar5 == lVar1) goto LAB_18049e482;
          if (*(int *)(lVar5 + 0x30) == 0) goto LAB_18049e477;
          if (*(int *)(lVar8 + 0x30) == 0) goto LAB_18049e482;
          pbVar7 = *(byte **)(lVar5 + 0x28);
          lVar9 = *(int64_t *)(lVar8 + 0x28) - (int64_t)pbVar7;
          goto LAB_18049e460;
        }
        function_05d1f0();
        plocal_var_90 = &system_data_buffer_ptr;
        if (plocal_var_88 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plocal_var_88 = (int8_t *)0x0;
        local_var_78 = local_var_78 & 0xffffffff00000000;
        plocal_var_90 = &system_state_ptr;
        ppppuVar6 = (uint64_t ****)SystemFunction_00018066bd70(ppppuVar6);
      } while (ppppuVar6 != &ppplocal_var_70);
    }
    puVar3 = plocal_var_60;
    pstack_special_x_18 = plocal_var_60;
    if (plocal_var_60 != (uint64_t *)0x0) {
      function_05d260(&ppplocal_var_70,*plocal_var_60);
      pstack_special_x_20 = puVar3 + 4;
      *pstack_special_x_20 = &system_data_buffer_ptr;
      if (puVar3[5] == 0) {
        puVar3[5] = 0;
        *(int32_t *)(puVar3 + 7) = 0;
        *pstack_special_x_20 = &system_state_ptr;
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar3);
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
  while (pbVar7 = pbVar7 + 1, uVar4 != 0) {
LAB_18049e460:
    bVar2 = *pbVar7;
    uVar4 = (uint)pbVar7[lVar9];
    if (bVar2 != uVar4) break;
  }
  if ((int)(bVar2 - uVar4) < 1) {
LAB_18049e477:
    uVar10 = 1;
  }
LAB_18049e482:
// WARNING: Subroutine does not return
  SystemStateController(lVar8,lVar5,lVar1,uVar10);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_49e560(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void *puVar4;
  int8_t astack_special_x_18 [16];
  void *plocal_var_30;
  int64_t lStack_28;
  if (*(int *)(system_main_module_state + 0x20) == 0) {
    return CONCAT71((int7)((uint64_t)system_main_module_state >> 8),1);
  }
  iVar1 = *(int *)(param_2 + 0x10) + -1;
  if (-1 < iVar1) {
    lVar3 = (int64_t)iVar1;
    do {
      if (*(char *)(*(int64_t *)(param_2 + 8) + lVar3) == '/') goto LAB_18049e5b3;
      iVar1 = iVar1 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  iVar1 = -1;
LAB_18049e5b3:
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 8);
  }
  SystemCore_CacheManager(&plocal_var_30,puVar4 + (int64_t)iVar1 + 1,param_2,param_4,0xfffffffffffffffe);
  plVar2 = (int64_t *)HighFreq_AnimationSystem1(param_1 + 8,astack_special_x_18,&plocal_var_30);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return (uint64_t)(*plVar2 != param_1 + 8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_49e630(void)
void function_49e630(void)
{
  uint uVar1;
  int32_t *puVar2;
  int iVar3;
  int8_t stack_array_c8 [32];
  int8_t local_var_a8;
  void *plocal_var_98;
  int32_t *plocal_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  void *plocal_var_70;
  int8_t *plocal_var_68;
  uint local_var_60;
  uint local_var_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  int8_t *plocal_var_40;
  int32_t local_var_38;
  int8_t stack_array_30 [16];
  uint64_t local_var_20;
  local_var_50 = 0xfffffffffffffffe;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  local_var_78 = 0;
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  plocal_var_90 = (int32_t *)0x0;
  local_var_88 = 0;
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  plocal_var_90 = puVar2;
  uVar1 = CoreEngineSystemCleanup(puVar2);
  *puVar2 = 0x61746144;
  puVar2[1] = 0x6e616c2f;
  puVar2[2] = 0x67617567;
  puVar2[3] = 0x2f7365;
  local_var_88 = 0xf;
  if (uVar1 < 0x12) {
    local_var_a8 = 0x13;
    local_var_80._0_4_ = uVar1;
    puVar2 = (int32_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,puVar2,0x12,0x10);
    plocal_var_90 = puVar2;
    uVar1 = CoreEngineSystemCleanup(puVar2);
  }
  *(int16_t *)((int64_t)puVar2 + 0xf) = 0x6e65;
  *(int8_t *)((int64_t)puVar2 + 0x11) = 0;
  local_var_88 = 0x11;
  local_var_80._0_4_ = uVar1;
  if (puVar2 == (int32_t *)0x0) {
    puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x20,0x13);
    *(int8_t *)puVar2 = 0;
LAB_18049e76b:
    plocal_var_90 = puVar2;
    local_var_80._0_4_ = CoreEngineSystemCleanup(puVar2);
  }
  else if (uVar1 < 0x20) {
    local_var_a8 = 0x13;
    puVar2 = (int32_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,puVar2,0x20,0x10);
    goto LAB_18049e76b;
  }
  *(uint64_t *)((int64_t)puVar2 + 0x11) = 0x61645f746e6f662f;
  *(int32_t *)((int64_t)puVar2 + 0x19) = 0x782e6174;
  *(int16_t *)((int64_t)puVar2 + 0x1d) = 0x6c6d;
  *(int8_t *)((int64_t)puVar2 + 0x1f) = 0;
  local_var_88 = 0x1f;
  plocal_var_48 = &system_config_ptr;
  plocal_var_40 = stack_array_30;
  stack_array_30[0] = 0;
  local_var_38 = 6;
  strcpy_s(stack_array_30,0x10,&rendering_buffer_2588_ptr);
  local_var_78 = 1;
  SystemCore_EncryptionEngine0(&plocal_var_70,&plocal_var_48);
  local_var_78 = 0;
  plocal_var_48 = &system_state_ptr;
  iVar3 = local_var_60 + 0x12;
  if (iVar3 != 0) {
    uVar1 = local_var_60 + 0x13;
    if (plocal_var_68 == (int8_t *)0x0) {
      if ((int)uVar1 < 0x10) {
        uVar1 = 0x10;
      }
      plocal_var_68 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar1,0x13);
      *plocal_var_68 = 0;
    }
    else {
      if (uVar1 <= local_var_58) goto LAB_18049e871;
      local_var_a8 = 0x13;
      plocal_var_68 = (int8_t *)SystemCore_NetworkHandler(system_memory_pool_ptr,plocal_var_68,uVar1,0x10);
    }
    local_var_58 = CoreEngineSystemCleanup(plocal_var_68);
  }
LAB_18049e871:
  puVar2 = (int32_t *)(plocal_var_68 + local_var_60);
  *puVar2 = 0x61746144;
  puVar2[1] = 0x6e6f662f;
  puVar2[2] = 0x61645f74;
  puVar2[3] = 0x782e6174;
  *(int16_t *)(puVar2 + 4) = 0x6c6d;
  *(int8_t *)((int64_t)puVar2 + 0x12) = 0;
  local_var_60 = iVar3;
  function_180ad0(puVar2,&system_flag_24f0,&plocal_var_98,&plocal_var_70);
  plocal_var_70 = &system_data_buffer_ptr;
  if (plocal_var_68 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_68 = (int8_t *)0x0;
  local_var_58 = 0;
  plocal_var_70 = &system_state_ptr;
  plocal_var_98 = &system_data_buffer_ptr;
  if (plocal_var_90 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_90 = (int32_t *)0x0;
  local_var_80 = (uint64_t)local_var_80._4_4_ << 0x20;
  plocal_var_98 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_49e920(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_49e920(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&system_pattern2_ptr,param_3,param_4,0xfffffffffffffffe);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_49ec60(void)
void function_49ec60(void)
{
  int64_t lVar1;
  char cVar2;
  int32_t uVar3;
  int32_t *puVar4;
  void *puVar5;
  uint64_t uVar6;
  uint64_t in_R9;
  int32_t astack_special_x_18 [2];
  uint64_t uVar7;
  void *plocal_var_60;
  int32_t *plocal_var_58;
  int32_t local_var_50;
  uint64_t local_var_48;
  void *plocal_var_40;
  int64_t lStack_38;
  uint local_var_30;
  int32_t local_var_28;
  int32_t local_var_24;
  lVar1 = render_system_data_memory;
  uVar7 = 0xfffffffffffffffe;
  if (system_debug_flag != '\0') {
    astack_special_x_18[0] = 1;
    uVar3 = 1;
    if ((*(int64_t *)(render_system_data_memory + 0x1b0) != 0) &&
       (cVar2 = (**(code **)(render_system_data_memory + 0x1b8))(astack_special_x_18), uVar3 = astack_special_x_18[0],
       cVar2 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x160) != (void *)0x0) {
          puVar5 = *(void **)(lVar1 + 0x160);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar5);
      }
      uVar3 = *(int32_t *)(lVar1 + 0x198);
    }
    *(int32_t *)(lVar1 + 0x150) = uVar3;
  }
  plocal_var_60 = &system_data_buffer_ptr;
  local_var_48 = 0;
  plocal_var_58 = (int32_t *)0x0;
  local_var_50 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1e,0x13,in_R9,uVar7);
  *(int8_t *)puVar4 = 0;
  plocal_var_58 = puVar4;
  uVar3 = CoreEngineSystemCleanup(puVar4);
  local_var_48 = CONCAT44(local_var_48._4_4_,uVar3);
  *puVar4 = 0x6e756f4d;
  puVar4[1] = 0x6e612074;
  puVar4[2] = 0x6c422064;
  puVar4[3] = 0x20656461;
  *(uint64_t *)(puVar4 + 4) = 0x656e6e6142204949;
  puVar4[6] = 0x726f6c72;
  *(int16_t *)(puVar4 + 7) = 100;
  local_var_50 = 0x1d;
  function_0533d0(100,&plocal_var_40,&plocal_var_60);
  lVar1 = system_main_module_state;
  uVar6 = (uint64_t)local_var_30;
  if (lStack_38 != 0) {
    CoreEngineDataBufferProcessor(system_main_module_state + 0x1c8,uVar6);
  }
  if (local_var_30 == 0) {
    *(int32_t *)(lVar1 + 0x1d8) = 0;
    if (*(int64_t *)(lVar1 + 0x1d0) != 0) {
      *(int8_t *)(uVar6 + *(int64_t *)(lVar1 + 0x1d0)) = 0;
    }
    *(int32_t *)(lVar1 + 0x1e4) = local_var_24;
    plocal_var_40 = &system_data_buffer_ptr;
    if (lStack_38 == 0) {
      lStack_38 = 0;
      local_var_28 = 0;
      plocal_var_40 = &system_state_ptr;
      plocal_var_60 = &system_data_buffer_ptr;
      if (plocal_var_58 == (int32_t *)0x0) {
        return;
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plocal_var_58,0);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lStack_38,lStack_38);
  }
// WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(lVar1 + 0x1d0),lStack_38,uVar6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_49ee30(uint64_t param_1,int64_t *param_2,int64_t param_3)
void function_49ee30(uint64_t param_1,int64_t *param_2,int64_t param_3)
{
  int iVar1;
  char *pcVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t *puVar5;
  int iVar6;
  uint64_t *puVar7;
  char *pcVar8;
  char *pcVar9;
  int8_t stack_array_c8 [32];
  uint64_t local_var_a8;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int iStack_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_a8 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  pcVar8 = "id";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_3 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar7[2];
    }
    if (pcVar2 == pcVar9 + -0x180a0ae27) {
      pcVar2 = pcVar2 + (int64_t)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_18049eec8:
        lVar3 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar3 = puVar7[1];
        }
        (**(code **)(*param_2 + 0x10))(param_2,lVar3);
        break;
      }
      lVar3 = (int64_t)&ui_system_data_1288_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar3]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_18049eec8;
      }
    }
  }
  pcVar8 = "animation_name";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  for (puVar7 = *(uint64_t **)(param_3 + 0x40); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[6]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar7[2];
    }
    if (pcVar2 == pcVar9 + -0x180a2cb5f) {
      pcVar2 = pcVar2 + (int64_t)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_18049ef45:
        lVar3 = 0x180d48d24;
        if (puVar7[1] != 0) {
          lVar3 = puVar7[1];
        }
        (**(code **)(param_2[4] + 0x10))(param_2 + 4,lVar3);
        break;
      }
      lVar3 = (int64_t)&processed_var_9840_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar3]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_18049ef45;
      }
    }
  }
  *(int8_t *)(param_2 + 8) = 0;
  pcVar8 = "flags";
  do {
    pcVar9 = pcVar8;
    pcVar8 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  puVar7 = *(uint64_t **)(param_3 + 0x30);
  do {
    if (puVar7 == (uint64_t *)0x0) {
      lVar3 = 0;
LAB_18049efd3:
      plocal_var_98 = &memory_allocator_3480_ptr;
      puVar5 = stack_array_80;
      iStack_88 = 0;
      stack_array_80[0] = 0;
      plocal_var_90 = puVar5;
      if (lVar3 != 0) {
        iVar6 = 0;
        do {
          pcVar8 = "name";
          do {
            pcVar9 = pcVar8;
            pcVar8 = pcVar9 + 1;
          } while (*pcVar8 != '\0');
          for (puVar7 = *(uint64_t **)(lVar3 + 0x40); puVar7 != (uint64_t *)0x0;
              puVar7 = (uint64_t *)puVar7[6]) {
            pcVar8 = (char *)*puVar7;
            if (pcVar8 == (char *)0x0) {
              pcVar2 = (char *)0x0;
              pcVar8 = (char *)0x180d48d24;
            }
            else {
              pcVar2 = (char *)puVar7[2];
            }
            if (pcVar2 == pcVar9 + -0x180a03a83) {
              pcVar2 = pcVar2 + (int64_t)pcVar8;
              if (pcVar2 <= pcVar8) {
LAB_18049f080:
                lVar4 = 0x180d48d24;
                if (puVar7[1] != 0) {
                  lVar4 = puVar7[1];
                }
                (**(code **)(plocal_var_98 + 0x10))(&plocal_var_98,lVar4);
                puVar5 = plocal_var_90;
                iVar6 = iStack_88;
                break;
              }
              lVar4 = (int64_t)&system_flag_3a84 - (int64_t)pcVar8;
              while (*pcVar8 == pcVar8[lVar4]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar2 <= pcVar8) goto LAB_18049f080;
              }
            }
          }
          if (iVar6 == 8) {
            iVar1 = strcmp(puVar5,&ui_system_data_1336_ptr);
            if (iVar1 == 0) {
              *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 1;
            }
          }
          else if (iVar6 == 0xe) {
            iVar1 = strcmp(puVar5,&ui_system_data_1320_ptr);
            if (iVar1 == 0) {
              *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
            }
          }
          lVar3 = *(int64_t *)(lVar3 + 0x58);
        } while (lVar3 != 0);
      }
      plocal_var_98 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_c8);
    }
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar7[2];
    }
    if (pcVar2 == pcVar9 + -0x180a06b77) {
      pcVar2 = pcVar2 + (int64_t)pcVar8;
      if (pcVar2 <= pcVar8) {
LAB_18049efc5:
        lVar3 = puVar7[6];
        goto LAB_18049efd3;
      }
      lVar3 = (int64_t)&processed_var_4216_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar3]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar2 <= pcVar8) goto LAB_18049efc5;
      }
    }
    puVar7 = (uint64_t *)puVar7[0xb];
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_49f130(uint64_t param_1,int64_t *param_2)
void function_49f130(uint64_t param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x368,8,3,0xfffffffffffffffe);
  *puVar1 = &processed_var_5424_ptr;
  *(int32_t *)(puVar1 + 2) = 0;
  puVar1[3] = &processed_var_5408_ptr;
  puVar1[4] = 0;
  render_system_data_memory = puVar1;
  *(int32_t *)(puVar1 + 1) = 0;
  *(int8_t *)((int64_t)puVar1 + 0xc) = 0;
// WARNING: Could not recover jumptable at 0x00018049f19a. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 8))(param_2);
  return;
}
// 函数: void function_49f1a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_49f1a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  void *plocal_var_30;
  uint64_t *plocal_var_28;
  int32_t local_var_20;
  uint64_t local_var_18;
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  plocal_var_28 = (uint64_t *)0x0;
  local_var_20 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_30,0xd,param_3,param_4,0xfffffffffffffffe);
  *plocal_var_28 = 0x735f7463656a626f;
  *(int32_t *)(plocal_var_28 + 1) = 0x656b6168;
  *(int16_t *)((int64_t)plocal_var_28 + 0xc) = 0x72;
  local_var_20 = 0xd;
  function_354b70(&plocal_var_30,function_4c60b0,_guard_check_icall);
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  plocal_var_28 = (uint64_t *)0x0;
  local_var_20 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_30,0x13);
  *(int32_t *)plocal_var_28 = 0x6e696b73;
  *(int32_t *)((int64_t)plocal_var_28 + 4) = 0x5f64656e;
  *(int32_t *)((int64_t)plocal_var_28 + 8) = 0x6873656d;
  *(int32_t *)((int64_t)plocal_var_28 + 0xc) = 0x6569765f;
  *(int32_t *)((int64_t)plocal_var_28 + 0x10) = 0x726577;
  local_var_20 = 0x13;
  function_354b70(&plocal_var_30,function_49d2b0,function_4a8e90);
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  plocal_var_28 = (uint64_t *)0x0;
  local_var_20 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_30,0x1d);
  *(int32_t *)plocal_var_28 = 0x626d6f63;
  *(int32_t *)((int64_t)plocal_var_28 + 4) = 0x705f7461;
  *(int32_t *)((int64_t)plocal_var_28 + 8) = 0x69747261;
  *(int32_t *)((int64_t)plocal_var_28 + 0xc) = 0x5f656c63;
  *(uint64_t *)((int64_t)plocal_var_28 + 0x10) = 0x736e695f64697267;
  *(int32_t *)((int64_t)plocal_var_28 + 0x18) = 0x636e6174;
  *(int16_t *)((int64_t)plocal_var_28 + 0x1c) = 0x65;
  local_var_20 = 0x1d;
  function_354b70(&plocal_var_30,function_49d300,function_4a9a20);
  plocal_var_30 = &system_data_buffer_ptr;
  local_var_18 = 0;
  plocal_var_28 = (uint64_t *)0x0;
  local_var_20 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_30,0xe);
  *plocal_var_28 = 0x5f726574736c6f68;
  *(int32_t *)(plocal_var_28 + 1) = 0x69726373;
  *(int16_t *)((int64_t)plocal_var_28 + 0xc) = 0x7470;
  *(int8_t *)((int64_t)plocal_var_28 + 0xe) = 0;
  local_var_20 = 0xe;
  function_354b70(&plocal_var_30,function_49d010,function_49d150);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_49f3b0(int64_t param_1)
void function_49f3b0(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int8_t stack_array_c8 [32];
  int32_t local_var_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  uint64_t local_var_90;
  int64_t *plStack_88;
  void *plocal_var_78;
  int8_t *plocal_var_70;
  int32_t local_var_68;
  int8_t stack_array_60 [72];
  uint64_t local_var_18;
  local_var_90 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  local_var_a8 = 0;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xc0,8,3);
  uVar2 = function_4c6e20(uVar2);
  *(uint64_t *)(system_operation_state + 0x1860) = uVar2;
  *(int32_t *)(param_1 + 0x410) = 0;
  plStack_a0 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,3);
  *plStack_a0 = 0;
  plStack_88 = plStack_a0 + 2;
  *plStack_88 = (int64_t)&system_state_ptr;
  plStack_a0[3] = 0;
  *(int32_t *)(plStack_a0 + 4) = 0;
  *plStack_88 = (int64_t)&system_data_buffer_ptr;
  plStack_a0[5] = 0;
  plStack_a0[3] = 0;
  *(int32_t *)(plStack_a0 + 4) = 0;
  *(int64_t **)(param_1 + 0x418) = plStack_a0;
  function_4c9a60(plStack_a0);
  uVar2 = system_resource_state;
  plocal_var_78 = &memory_allocator_3480_ptr;
  plocal_var_70 = stack_array_60;
  stack_array_60[0] = 0;
  local_var_68 = 0x12;
  strcpy_s(stack_array_60,0x40,&processed_var_9760_ptr);
  SystemCore_GarbageCollector(uVar2,&plStack_a0,&plocal_var_78,0);
  plVar1 = plStack_a0;
  local_var_a8 = 1;
  plocal_var_78 = &system_state_ptr;
  plStack_a0 = (int64_t *)0x0;
  plStack_98 = *(int64_t **)(system_parameter_buffer + 0xed0);
  *(int64_t **)(system_parameter_buffer + 0xed0) = plVar1;
  if (plStack_98 != (int64_t *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
  local_var_a8 = 0;
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_49f560(uint64_t param_1,int8_t *param_2)
void function_49f560(uint64_t param_1,int8_t *param_2)
{
  *param_2 = 0;
  (**(code **)(*(int64_t *)(param_2 + 8) + 0x10))(param_2 + 8,&system_flag_f500);
  (**(code **)(render_system_memory + 0x10))(&system_flag_24d0,&system_flag_d128);
  SystemCore_ConfigurationHandler0(param_2 + 0x80,&system_flag_24d0);
  SystemCore_ConfigurationHandler0(param_2 + 0xa0,&system_flag_24f0);
  param_2[0x7c] = 1;
  (**(code **)(*(int64_t *)(param_2 + 0x38) + 0x10))(param_2 + 0x38,&processed_var_9976_ptr);
  (**(code **)(*(int64_t *)(param_2 + 0x58) + 0x10))(param_2 + 0x58,&system_flag_cc08);
  *(int32_t *)(param_2 + 0x78) = 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_49f600(uint64_t param_1,int64_t param_2)
void function_49f600(uint64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  plVar2 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3090,8,3,0xfffffffffffffffe);
  *plVar2 = (int64_t)&ui_system_data_1920_ptr;
  plVar2[1] = 0;
  function_4d9b70(plVar2 + 2);
  function_4ca350(plVar2 + 0x5a6,0x400);
  plVar1 = *(int64_t **)(param_2 + 0x3c0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,0);
  }
  *(int64_t **)(param_2 + 0x3c0) = plVar2;
  (**(code **)(*plVar2 + 8))(plVar2,param_2);
  function_1be530(plVar2[1] + 0xe0,plVar2 + 2);
  function_1be530(plVar2[1] + 0xe0,plVar2 + 0x5a6);
  *(int8_t *)(plVar2[1] + 0x60d08) = 1;
  return;
}
// 函数: void function_49f6f0(uint64_t param_1,int64_t param_2)
void function_49f6f0(uint64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  plVar1 = *(int64_t **)(param_2 + 0x3c0);
  function_4e0970(plVar1);
  plVar2 = *(int64_t **)(param_2 + 0x3c0);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,0);
  }
  *(uint64_t *)(param_2 + 0x3c0) = 0;
  if (plVar1 != (int64_t *)0x0) {
    lVar3 = __RTCastToVoid(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_49f7c0(uint64_t param_1,int param_2)
void function_49f7c0(uint64_t param_1,int param_2)
{
  int64_t **pplVar1;
  bool bVar2;
  uint64_t uVar3;
  int64_t ***ppplVar4;
  int64_t ***ppplStackX_10;
  int64_t ***ppplStackX_18;
  int64_t ****pppplStackX_20;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  void *plocal_var_48;
  void *plocal_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  if (param_2 == 0) {
    local_var_30 = 0x18049f7cd;
    function_18fb50();
    bVar2 = false;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    local_var_30 = 0x18049f7e7;
    (**(code **)(system_cache_buffer + 0x58))();
    local_var_30 = 0x18049f7f1;
    (**(code **)(render_system_data_memory + 0x58))();
    local_var_30 = 0x18049f7fe;
    (**(code **)(render_system_data_memory + 0xf8))();
    bVar2 = true;
  }
  uVar3 = system_context_ptr;
  if (!bVar2) {
    function_544f90(&system_flag_6110);
    SystemFunction_000180539530();
    function_538220();
    render_system_memory = sinf(render_system_memory * 0.017453292);
    render_system_memory = render_system_memory;
    local_var_38 = 0x3f800000;
    local_var_30 = 0;
    local_var_28 = 0;
    local_var_24 = 0x3f800000;
    local_var_20 = 0;
    local_var_1c = 0;
    local_var_18 = 0;
    local_var_14 = 0;
    local_var_10 = 0x3f800000;
    local_var_c = 0;
    render_system_memory = (float)render_system_memory;
    function_085c10(&local_var_38,render_system_memory);
    function_085970(&local_var_38,render_system_memory);
    function_085ac0(&local_var_38,render_system_memory);
    AdvancedProcessor_StateManager0(&local_var_58,&local_var_38);
    render_system_memory = local_var_58;
    uRam0000000180c96374 = local_var_54;
    uRam0000000180c96378 = local_var_50;
    uRam0000000180c9637c = local_var_4c;
    function_570940(&system_flag_60c0);
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    ppplStackX_18 = (int64_t ***)&local_var_58;
    plocal_var_48 = &processed_var_5104_ptr;
    plocal_var_40 = &processed_var_5088_ptr;
    ppplVar4 = (int64_t ***)SystemCore_ErrorHandler(uVar3,&local_var_58);
    if (ppplVar4 != (int64_t ***)0x0) {
      ppplStackX_10 = ppplVar4;
      (*(code *)(*ppplVar4)[5])(ppplVar4);
    }
    ppplStackX_10 = render_system_memory;
    if (render_system_memory != (int64_t ***)0x0) {
      pplVar1 = *render_system_memory;
      render_system_memory = ppplVar4;
      (*(code *)pplVar1[7])();
      ppplVar4 = render_system_memory;
    }
    render_system_memory = ppplVar4;
    render_system_memory[3] = (int64_t **)0xfffffffffffffffd;
    uVar3 = system_context_ptr;
    ppplStackX_18 = (int64_t ***)&ppplStackX_10;
    ppplStackX_10 = render_system_memory;
    if (render_system_memory != (int64_t ***)0x0) {
      (*(code *)(*render_system_memory)[5])();
    }
    SystemCore_TimerManager(uVar3,&ppplStackX_10);
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
    ppplStackX_10 = (int64_t ***)&local_var_58;
    plocal_var_48 = &processed_var_5056_ptr;
    plocal_var_40 = &processed_var_5040_ptr;
    ppplVar4 = (int64_t ***)SystemCore_ErrorHandler(uVar3,&local_var_58);
    if (ppplVar4 != (int64_t ***)0x0) {
      ppplStackX_18 = ppplVar4;
      (*(code *)(*ppplVar4)[5])(ppplVar4);
    }
    ppplStackX_18 = render_system_memory;
    if (render_system_memory != (int64_t ***)0x0) {
      pplVar1 = *render_system_memory;
      render_system_memory = ppplVar4;
      (*(code *)pplVar1[7])();
      ppplVar4 = render_system_memory;
    }
    render_system_memory = ppplVar4;
    render_system_memory[3] = (int64_t **)0xfffffffffffffffd;
    uVar3 = system_context_ptr;
    ppplStackX_18 = (int64_t ***)&ppplStackX_10;
    ppplStackX_10 = render_system_memory;
    if (render_system_memory != (int64_t ***)0x0) {
      (*(code *)(*render_system_memory)[5])();
    }
    SystemCore_TimerManager(uVar3,&ppplStackX_10);
    return;
  }
  if (bVar2) {
    ppplStackX_18 = (int64_t ***)&ppplStackX_10;
    ppplStackX_10 = render_system_memory;
    if (render_system_memory != (int64_t ***)0x0) {
      (*(code *)(*render_system_memory)[5])();
    }
    SystemCore_ErrorHandler(uVar3,&ppplStackX_10,0);
    uVar3 = system_context_ptr;
    pppplStackX_20 = &ppplStackX_18;
    ppplStackX_18 = render_system_memory;
    if (render_system_memory != (int64_t ***)0x0) {
      (*(code *)(*render_system_memory)[5])();
    }
    SystemCore_ErrorHandler(uVar3,&ppplStackX_18,0);
    function_54c430();
    (**(code **)(render_system_data_memory + 0x118))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address