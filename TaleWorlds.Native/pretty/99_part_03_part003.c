#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part003.c - 2 个函数
// 函数: void function_1c6120(void)
void function_1c6120(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  void *puVar10;
  void *puVar11;
  int8_t *puVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint uVar15;
  uint64_t uVar16;
  void *plocal_var_158;
  void *plocal_var_150;
  uint local_var_148;
  uint64_t local_var_140;
  void *plocal_var_138;
  int8_t *plocal_var_130;
  uint local_var_128;
  uint64_t local_var_120;
  void *plocal_var_118;
  int8_t *plocal_var_110;
  uint local_var_108;
  uint64_t local_var_100;
  void *plocal_var_f8;
  void *plocal_var_f0;
  uint local_var_e8;
  int32_t local_var_e0;
  uint64_t local_var_d8;
  int64_t lStack_d0;
  uint64_t local_var_c0;
  int64_t lStack_b8;
  uint64_t local_var_a8;
  int64_t lStack_a0;
  uint64_t local_var_90;
  int64_t lStack_88;
  uint64_t local_var_78;
  int64_t lStack_70;
  void *plocal_var_60;
  int64_t lStack_58;
  int32_t local_var_48;
  uint64_t local_var_40;
  lVar3 = system_global_data_ptr;
  local_var_40 = 0xfffffffffffffffe;
  if (*(char *)(system_main_module_state + 0x168) == '\0') {
    lVar1 = system_global_data_ptr + 1000;
    iVar5 = _Mtx_lock();
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    uVar13 = 0;
    plVar2 = (int64_t *)(lVar3 + 0x348);
    lVar6 = *plVar2;
    uVar9 = uVar13;
    uVar16 = uVar13;
    if ((*(int64_t *)(lVar3 + 0x350) - lVar6) / 0x50 != 0) {
      do {
        if (*(int *)(lVar6 + 0x40 + uVar9) < 1) {
          local_var_a8 = 0;
          lStack_a0 = 0;
          puVar11 = *(void **)(lVar6 + 8 + uVar9);
          puVar10 = &system_buffer_ptr;
          if (puVar11 != (void *)0x0) {
            puVar10 = puVar11;
          }
          SystemCore_Validator(&local_var_a8,puVar10,&processed_var_9772_ptr);
          lVar7 = lStack_a0;
          if (lStack_a0 == 0) {
// WARNING: Subroutine does not return
            SystemParameterHandler(system_message_context,&rendering_buffer_24_ptr);
          }
          fwrite(*(uint64_t *)(lVar6 + 0x20 + uVar9),(int64_t)*(int *)(lVar6 + 0x28 + uVar9),1,
                 lStack_a0);
          fclose(lVar7);
          lStack_a0 = 0;
          LOCK();
          SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
          UNLOCK();
        }
        else {
          local_var_d8 = 0;
          lStack_d0 = 0;
          SystemCore_NetworkHandler0(&plocal_var_f8,uVar9 + 0x30 + lVar6);
          iVar5 = *(int *)(lVar6 + 0x10 + uVar9);
          if (0 < iVar5) {
            CoreMemoryPoolProcessor(&plocal_var_f8,local_var_e8 + iVar5);
// WARNING: Subroutine does not return
            memcpy(plocal_var_f0 + local_var_e8,*(uint64_t *)(lVar6 + 8 + uVar9),
                   (int64_t)(*(int *)(lVar6 + 0x10 + uVar9) + 1));
          }
          puVar11 = &system_buffer_ptr;
          if (plocal_var_f0 != (void *)0x0) {
            puVar11 = plocal_var_f0;
          }
          SystemCore_Validator(&local_var_d8,puVar11,&processed_var_9772_ptr);
          lVar7 = lStack_d0;
          fwrite(*(uint64_t *)(lVar6 + 0x20 + uVar9),(int64_t)*(int *)(lVar6 + 0x28 + uVar9),1,
                 lStack_d0);
          if (lVar7 != 0) {
            fclose(lVar7);
            lStack_d0 = 0;
            LOCK();
            SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
            UNLOCK();
            lVar7 = 0;
          }
          plocal_var_f8 = &system_data_buffer_ptr;
          if (plocal_var_f0 != (void *)0x0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          plocal_var_f0 = (void *)0x0;
          local_var_e0 = 0;
          plocal_var_f8 = &system_state_ptr;
          if (lVar7 != 0) {
            fclose(lVar7);
            lStack_d0 = 0;
            LOCK();
            SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
            UNLOCK();
          }
        }
        uVar15 = (int)uVar16 + 1;
        lVar6 = *plVar2;
        uVar9 = uVar9 + 0x50;
        uVar16 = (uint64_t)uVar15;
      } while ((uint64_t)(int64_t)(int)uVar15 <
               (uint64_t)((*(int64_t *)(lVar3 + 0x350) - lVar6) / 0x50));
    }
    function_1e11f0(plVar2);
    if ((*(int64_t *)(lVar3 + 0x370) - *(int64_t *)(lVar3 + 0x368)) / 0x18 != 0) {
      plocal_var_158 = &system_data_buffer_ptr;
      local_var_140 = 0;
      plocal_var_150 = (void *)0x0;
      local_var_148 = 0;
      lVar6 = function_0baa80(&plocal_var_60);
      if (plocal_var_150 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      uVar15 = *(uint *)(lVar6 + 0x10);
      plocal_var_150 = *(void **)(lVar6 + 8);
      local_var_140 = *(uint64_t *)(lVar6 + 0x18);
      *(int32_t *)(lVar6 + 0x10) = 0;
      *(uint64_t *)(lVar6 + 8) = 0;
      *(uint64_t *)(lVar6 + 0x18) = 0;
      plocal_var_60 = &system_data_buffer_ptr;
      local_var_148 = uVar15;
      if (lStack_58 != 0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      lStack_58 = 0;
      local_var_48 = 0;
      plocal_var_60 = &system_state_ptr;
      CoreMemoryPoolProcessor(&plocal_var_158,uVar15 + 0x12);
      puVar8 = (int32_t *)(plocal_var_150 + local_var_148);
      *puVar8 = 0x65726f43;
      puVar8[1] = 0x64616853;
      puVar8[2] = 0x2f737265;
      puVar8[3] = 0x31443344;
      *(int16_t *)(puVar8 + 4) = 0x2f31;
      *(int8_t *)((int64_t)puVar8 + 0x12) = 0;
      local_var_148 = uVar15 + 0x12;
      CoreMemoryPoolProcessor(&plocal_var_158,uVar15 + 0x24);
      puVar8 = (int32_t *)(plocal_var_150 + local_var_148);
      *puVar8 = 0x64616873;
      puVar8[1] = 0x6d5f7265;
      puVar8[2] = 0x69707061;
      puVar8[3] = 0x622e676e;
      *(int16_t *)(puVar8 + 4) = 0x6e69;
      *(int8_t *)((int64_t)puVar8 + 0x12) = 0;
      local_var_c0 = 0;
      lStack_b8 = 0;
      puVar11 = &system_buffer_ptr;
      if (plocal_var_150 != (void *)0x0) {
        puVar11 = plocal_var_150;
      }
      local_var_148 = uVar15 + 0x24;
      SystemCore_Validator(&local_var_c0,puVar11,&memory_allocator_3200_ptr);
      lVar6 = lStack_b8;
      if (lStack_b8 == 0) {
// WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&processed_var_9968_ptr);
      }
      uVar9 = uVar13;
      if ((*(int64_t *)(lVar3 + 0x370) - *(int64_t *)(lVar3 + 0x368)) / 0x18 != 0) {
        do {
          lVar7 = *(int64_t *)(lVar3 + 0x368) + uVar9 * 0x18;
          fwrite(lVar7,0x14,1,lVar6);
          fwrite(lVar7 + 0x14,4,1,lVar6);
          uVar15 = (int)uVar13 + 1;
          uVar13 = (uint64_t)uVar15;
          uVar9 = (int64_t)(int)uVar15;
        } while ((uint64_t)(int64_t)(int)uVar15 <
                 (uint64_t)((*(int64_t *)(lVar3 + 0x370) - *(int64_t *)(lVar3 + 0x368)) / 0x18));
      }
      *(uint64_t *)(lVar3 + 0x370) = *(uint64_t *)(lVar3 + 0x368);
      if (lVar6 != 0) {
        fclose(lVar6);
        lStack_b8 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
        lVar6 = 0;
      }
      if (lVar6 != 0) {
        fclose(lVar6);
        lStack_b8 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
      plocal_var_158 = &system_data_buffer_ptr;
      if (plocal_var_150 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      plocal_var_150 = (void *)0x0;
      local_var_140 = local_var_140 & 0xffffffff00000000;
      plocal_var_158 = &system_state_ptr;
    }
    lVar6 = lVar3 + 0x388;
    for (lVar7 = *(int64_t *)(lVar3 + 0x390); lVar7 != lVar6; lVar7 = Function_7bfb2422(lVar7)) {
      uVar9 = 0;
      plocal_var_138 = &system_data_buffer_ptr;
      local_var_120 = 0;
      plocal_var_130 = (int8_t *)0x0;
      local_var_128 = 0;
      CoreMemoryPoolProcessor(&plocal_var_138,*(int32_t *)(lVar7 + 0x30));
      if (*(int *)(lVar7 + 0x30) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_130,*(uint64_t *)(lVar7 + 0x28),*(int *)(lVar7 + 0x30) + 1);
      }
      if (*(int64_t *)(lVar7 + 0x28) != 0) {
        local_var_128 = 0;
        if (plocal_var_130 != (int8_t *)0x0) {
          *plocal_var_130 = 0;
        }
        local_var_120 = local_var_120 & 0xffffffff;
      }
      iVar5 = local_var_128 + 0x12;
      CoreMemoryPoolProcessor(&plocal_var_138,iVar5);
      puVar8 = (int32_t *)(plocal_var_130 + local_var_128);
      *puVar8 = 0x64616873;
      puVar8[1] = 0x6d5f7265;
      puVar8[2] = 0x69707061;
      puVar8[3] = 0x622e676e;
      *(int16_t *)(puVar8 + 4) = 0x6e69;
      *(int8_t *)((int64_t)puVar8 + 0x12) = 0;
      local_var_90 = 0;
      lStack_88 = 0;
      puVar12 = &system_buffer_ptr;
      if (plocal_var_130 != (int8_t *)0x0) {
        puVar12 = plocal_var_130;
      }
      local_var_128 = iVar5;
      SystemCore_Validator(&local_var_90,puVar12,&memory_allocator_3200_ptr);
      lVar4 = lStack_88;
      if (lStack_88 == 0) {
// WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&processed_var_9968_ptr);
      }
      lVar14 = *(int64_t *)(lVar7 + 0x40);
      uVar16 = uVar9;
      if ((*(int64_t *)(lVar7 + 0x48) - lVar14) / 0x18 != 0) {
        do {
          lVar14 = lVar14 + uVar9 * 0x18;
          fwrite(lVar14,0x18,1,lVar4);
          fwrite(lVar14 + 0x14,4,1,lVar4);
          uVar15 = (int)uVar16 + 1;
          lVar14 = *(int64_t *)(lVar7 + 0x40);
          uVar9 = (uint64_t)(int)uVar15;
          uVar16 = (uint64_t)uVar15;
        } while (uVar9 < (uint64_t)((*(int64_t *)(lVar7 + 0x48) - lVar14) / 0x18));
      }
      fclose(lVar4);
      lStack_88 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      plocal_var_138 = &system_data_buffer_ptr;
      if (plocal_var_130 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      plocal_var_130 = (int8_t *)0x0;
      local_var_120 = local_var_120 & 0xffffffff00000000;
      plocal_var_138 = &system_state_ptr;
    }
    function_058710(lVar6,*(uint64_t *)(lVar3 + 0x398));
    *(int64_t *)lVar6 = lVar6;
    *(int64_t *)(lVar3 + 0x390) = lVar6;
    *(uint64_t *)(lVar3 + 0x398) = 0;
    *(int8_t *)(lVar3 + 0x3a0) = 0;
    *(uint64_t *)(lVar3 + 0x3a8) = 0;
    lVar6 = lVar3 + 0x3b8;
    for (lVar7 = *(int64_t *)(lVar3 + 0x3c0); lVar7 != lVar6; lVar7 = Function_7bfb2422(lVar7)) {
      plocal_var_118 = &system_data_buffer_ptr;
      local_var_100 = 0;
      plocal_var_110 = (int8_t *)0x0;
      local_var_108 = 0;
      CoreMemoryPoolProcessor(&plocal_var_118,*(int32_t *)(lVar7 + 0x30));
      if (*(int *)(lVar7 + 0x30) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_110,*(uint64_t *)(lVar7 + 0x28),*(int *)(lVar7 + 0x30) + 1);
      }
      if (*(int64_t *)(lVar7 + 0x28) != 0) {
        local_var_108 = 0;
        if (plocal_var_110 != (int8_t *)0x0) {
          *plocal_var_110 = 0;
        }
        local_var_100 = local_var_100 & 0xffffffff;
      }
      iVar5 = local_var_108 + 0x12;
      CoreMemoryPoolProcessor(&plocal_var_118,iVar5);
      puVar8 = (int32_t *)(plocal_var_110 + local_var_108);
      *puVar8 = 0x64616873;
      puVar8[1] = 0x6d5f7265;
      puVar8[2] = 0x69707061;
      puVar8[3] = 0x622e676e;
      *(int16_t *)(puVar8 + 4) = 0x6e69;
      *(int8_t *)((int64_t)puVar8 + 0x12) = 0;
      local_var_78 = 0;
      lStack_70 = 0;
      puVar12 = &system_buffer_ptr;
      if (plocal_var_110 != (int8_t *)0x0) {
        puVar12 = plocal_var_110;
      }
      local_var_108 = iVar5;
      SystemCore_Validator(&local_var_78,puVar12,&memory_allocator_3200_ptr);
      lVar4 = lStack_70;
      if (lStack_70 == 0) {
// WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&processed_var_9968_ptr);
      }
      lVar14 = *(int64_t *)(lVar7 + 0x40);
      uVar9 = 0;
      uVar16 = 0;
      if ((*(int64_t *)(lVar7 + 0x48) - lVar14) / 0x28 != 0) {
        do {
          lVar14 = lVar14 + uVar9 * 0x28;
          fwrite(lVar14,0x20,1,lVar4);
          fwrite(lVar14 + 0x20,4,1,lVar4);
          uVar15 = (int)uVar16 + 1;
          lVar14 = *(int64_t *)(lVar7 + 0x40);
          uVar9 = (int64_t)(int)uVar15;
          uVar16 = (uint64_t)uVar15;
        } while ((uint64_t)(int64_t)(int)uVar15 <
                 (uint64_t)((*(int64_t *)(lVar7 + 0x48) - lVar14) / 0x28));
      }
      fclose(lVar4);
      lStack_70 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      plocal_var_118 = &system_data_buffer_ptr;
      if (plocal_var_110 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      plocal_var_110 = (int8_t *)0x0;
      local_var_100 = local_var_100 & 0xffffffff00000000;
      plocal_var_118 = &system_state_ptr;
    }
    function_058710(lVar6,*(uint64_t *)(lVar3 + 0x3c8));
    *(int64_t *)lVar6 = lVar6;
    *(int64_t *)(lVar3 + 0x3c0) = lVar6;
    *(uint64_t *)(lVar3 + 0x3c8) = 0;
    *(int8_t *)(lVar3 + 0x3d0) = 0;
    *(uint64_t *)(lVar3 + 0x3d8) = 0;
    iVar5 = _Mtx_unlock(lVar1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  return;
}
uint64_t *
function_1c6b50(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int32_t param_4,
             char param_5)
{
  int32_t *puVar1;
  int iVar2;
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  if (param_5 != '\0') {
    function_1c5870(param_2,0,param_3,param_4,1,0xfffffffffffffffe);
  }
  System_DataHandler(param_2,&processed_var_4576_ptr,param_4);
  switch((int)param_3) {
  case 0:
    iVar2 = *(int *)(param_2 + 2) + 6;
    CoreMemoryPoolProcessor(param_2,iVar2);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e76;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 1:
    iVar2 = *(int *)(param_2 + 2) + 6;
    CoreMemoryPoolProcessor(param_2,iVar2);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e70;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 2:
    iVar2 = *(int *)(param_2 + 2) + 6;
    CoreMemoryPoolProcessor(param_2,iVar2);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e64;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 3:
    iVar2 = *(int *)(param_2 + 2) + 6;
    CoreMemoryPoolProcessor(param_2,iVar2);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e68;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 4:
    iVar2 = *(int *)(param_2 + 2) + 6;
    CoreMemoryPoolProcessor(param_2,iVar2);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e63;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  case 5:
    iVar2 = *(int *)(param_2 + 2) + 6;
    CoreMemoryPoolProcessor(param_2,iVar2);
    puVar1 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
    *puVar1 = 0x61732e67;
    *(int16_t *)(puVar1 + 1) = 0x7863;
    break;
  default:
    goto LAB_1801c6d27;
  }
  *(int8_t *)((int64_t)puVar1 + 6) = 0;
  *(int *)(param_2 + 2) = iVar2;
LAB_1801c6d27:
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_1c6d60(uint64_t param_1,int64_t param_2,int *param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int iVar4;
  int32_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  void *puVar11;
  void *plocal_var_d0;
  uint64_t *plocal_var_c8;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  void *plocal_var_b0;
  uint64_t *plocal_var_a8;
  int32_t local_var_a0;
  uint64_t local_var_98;
  void *plocal_var_90;
  int64_t lStack_88;
  int iStack_80;
  int32_t local_var_78;
  int8_t stack_array_70 [32];
  uint64_t local_var_50;
  int64_t lStack_48;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  uVar8 = 0;
  local_var_50 = 0;
  lStack_48 = 0;
  puVar11 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar11 = *(void **)(param_2 + 8);
  }
  SystemCore_Validator(&local_var_50,puVar11,&processed_var_4880_ptr);
  lVar3 = lStack_48;
  if (lStack_48 != 0) {
    uVar7 = _ftelli64(lStack_48);
    _fseeki64(lVar3,0,2);
    iVar4 = _ftelli64(lVar3);
    _fseeki64(lVar3,uVar7,0);
    if (iVar4 != 0) {
      uVar8 = CoreMemoryPoolAllocator(system_memory_pool_ptr,iVar4,0x11);
    }
    fread(uVar8,iVar4,1,lVar3);
    fclose(lVar3);
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    *param_3 = iVar4;
    return uVar8;
  }
  plocal_var_b0 = &system_data_buffer_ptr;
  local_var_98 = 0;
  plocal_var_a8 = (uint64_t *)0x0;
  local_var_a0 = 0;
  puVar9 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x29,0x13);
  *(int8_t *)puVar9 = 0;
  plocal_var_a8 = puVar9;
  uVar5 = CoreMemoryPoolCleaner(puVar9);
  local_var_98 = CONCAT44(local_var_98._4_4_,uVar5);
  *puVar9 = 0x6120726564616853;
  puVar9[1] = 0x20796c626d657373;
  *(int32_t *)(puVar9 + 2) = 0x6c756f63;
  *(int32_t *)((int64_t)puVar9 + 0x14) = 0x6f6e2064;
  *(int32_t *)(puVar9 + 3) = 0x65622074;
  *(int32_t *)((int64_t)puVar9 + 0x1c) = 0x756f6620;
  puVar9[4] = 0x3a20726f6620646e;
  *(int8_t *)(puVar9 + 5) = 0;
  local_var_a0 = 0x28;
  SystemCore_EncryptionEngine0(&plocal_var_90,param_2);
  plocal_var_d0 = &system_data_buffer_ptr;
  local_var_b8 = 0;
  plocal_var_c8 = (uint64_t *)0x0;
  local_var_c0 = 0;
  puVar10 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x29,0x13);
  *(int8_t *)puVar10 = 0;
  plocal_var_c8 = puVar10;
  uVar6 = CoreMemoryPoolCleaner(puVar10);
  uVar8 = puVar9[1];
  *puVar10 = *puVar9;
  puVar10[1] = uVar8;
  uVar5 = *(int32_t *)((int64_t)puVar9 + 0x14);
  uVar1 = *(int32_t *)(puVar9 + 3);
  uVar2 = *(int32_t *)((int64_t)puVar9 + 0x1c);
  *(int32_t *)(puVar10 + 2) = *(int32_t *)(puVar9 + 2);
  *(int32_t *)((int64_t)puVar10 + 0x14) = uVar5;
  *(int32_t *)(puVar10 + 3) = uVar1;
  *(int32_t *)((int64_t)puVar10 + 0x1c) = uVar2;
  puVar10[4] = puVar9[4];
  local_var_c0 = 0x28;
  *(int8_t *)(puVar10 + 5) = 0;
  local_var_b8 = (uint64_t)uVar6;
  if (0 < iStack_80) {
    if ((iStack_80 != -0x28) && (uVar6 < iStack_80 + 0x29U)) {
      puVar10 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar10,iStack_80 + 0x29U,0x10,0x13);
      plocal_var_c8 = puVar10;
      uVar5 = CoreMemoryPoolCleaner(puVar10);
      local_var_b8 = CONCAT44(local_var_b8._4_4_,uVar5);
    }
// WARNING: Subroutine does not return
    memcpy(puVar10 + 5,lStack_88,(int64_t)(iStack_80 + 1));
  }
  UtilitiesSystem_CacheManager(&plocal_var_d0,stack_array_70,&processed_var_92_ptr);
  plocal_var_d0 = &system_data_buffer_ptr;
  if (puVar10 == (uint64_t *)0x0) {
    plocal_var_c8 = (uint64_t *)0x0;
    local_var_b8 = local_var_b8 & 0xffffffff00000000;
    plocal_var_d0 = &system_state_ptr;
    plocal_var_90 = &system_data_buffer_ptr;
    if (lStack_88 == 0) {
      lStack_88 = 0;
      local_var_78 = 0;
      plocal_var_90 = &system_state_ptr;
      plocal_var_b0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar9);
    }
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar10);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_1c70b0(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
{
  uint uVar1;
  int32_t uVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  int8_t *puVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t stack_special_x_8;
  int8_t astack_special_x_10 [8];
  int64_t alStack_70 [2];
  void *plocal_var_60;
  int8_t *plocal_var_58;
  uint local_var_50;
  uint64_t local_var_48;
  uVar10 = 0;
  plocal_var_60 = &system_data_buffer_ptr;
  local_var_48 = 0;
  plocal_var_58 = (int8_t *)0x0;
  local_var_50 = 0;
  stack_special_x_8 = param_1;
  if ((param_4 == 0) || (*(int64_t *)(param_4 + 800) == 0)) {
    function_1c5700(&plocal_var_60,param_3);
  }
  else {
    uVar3 = *(uint *)(param_4 + 0x2e0);
    if (*(int64_t *)(param_4 + 0x2d8) == 0) {
LAB_1801c7166:
      if (uVar3 != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_58,*(uint64_t *)(param_4 + 0x2d8),(uint64_t)uVar3);
      }
    }
    else if (uVar3 != 0) {
      uVar1 = uVar3 + 1;
      if ((int)(uVar3 + 1) < 0x10) {
        uVar1 = 0x10;
      }
      plocal_var_58 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar1,0x13);
      *plocal_var_58 = 0;
      uVar2 = CoreMemoryPoolCleaner(plocal_var_58);
      local_var_48 = CONCAT44(local_var_48._4_4_,uVar2);
      goto LAB_1801c7166;
    }
    if (plocal_var_58 != (int8_t *)0x0) {
      plocal_var_58[uVar3] = 0;
    }
    local_var_48 = CONCAT44(*(int32_t *)(param_4 + 0x2ec),(uint)local_var_48);
    local_var_50 = uVar3;
  }
  iVar9 = local_var_50 + 0x1c;
  if (iVar9 != 0) {
    uVar3 = local_var_50 + 0x1d;
    if (plocal_var_58 == (int8_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      plocal_var_58 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar3,0x13);
      *plocal_var_58 = 0;
    }
    else {
      if (uVar3 <= (uint)local_var_48) goto LAB_1801c720f;
      plocal_var_58 = (int8_t *)DataValidator(system_memory_pool_ptr,plocal_var_58,uVar3,0x10,0x13);
    }
    uVar2 = CoreMemoryPoolCleaner(plocal_var_58);
    local_var_48 = CONCAT44(local_var_48._4_4_,uVar2);
  }
LAB_1801c720f:
  puVar6 = (int32_t *)(plocal_var_58 + local_var_50);
  *puVar6 = 0x706d6f63;
  puVar6[1] = 0x73736572;
  puVar6[2] = 0x735f6465;
  puVar6[3] = 0x65646168;
  *(uint64_t *)(puVar6 + 4) = 0x2e65686361635f72;
  puVar6[6] = 0x6b636173;
  *(int8_t *)(puVar6 + 7) = 0;
  alStack_70[0] = -1;
  puVar8 = &system_buffer_ptr;
  if (plocal_var_58 != (int8_t *)0x0) {
    puVar8 = plocal_var_58;
  }
  local_var_50 = iVar9;
  function_63ba00(alStack_70,puVar8,5,0x104);
  lVar11 = alStack_70[0];
  SetFilePointerEx(alStack_70[0],*(uint64_t *)(param_2 + 8),astack_special_x_10,0);
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar9 = 0;
    uVar5 = uVar10;
  }
  else {
    uVar5 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(param_2 + 0x10),3);
    iVar9 = *(int *)(param_2 + 0x10);
  }
  if (iVar9 != 0) {
    do {
      uVar7 = (int64_t)iVar9 - uVar10;
      uVar12 = 0x1000000;
      if (uVar7 < 0x1000000) {
        uVar12 = uVar7 & 0xffffffff;
      }
      stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
      iVar4 = ReadFile(lVar11,uVar10 + uVar5,uVar12,&stack_special_x_8,0);
    } while (((iVar4 != 0) && ((int)stack_special_x_8 != 0)) &&
            (uVar10 = uVar10 + (stack_special_x_8 & 0xffffffff), uVar10 < (uint64_t)(int64_t)iVar9));
  }
  if (lVar11 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(alStack_70[0]);
    lVar11 = -1;
    alStack_70[0] = -1;
  }
  if (lVar11 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(alStack_70[0]);
    alStack_70[0] = -1;
  }
  plocal_var_60 = &system_data_buffer_ptr;
  if (plocal_var_58 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return uVar5;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t *
function_1c7390(int64_t param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lStackX_8;
  int32_t *pstack_special_x_10;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int8_t uVar8;
  lVar2 = system_global_data_ptr;
  uVar6 = 0xfffffffffffffffe;
  uVar5 = 0;
  lVar4 = *(int64_t *)(system_global_data_ptr + 0x50) + 0x360;
  uVar8 = 1;
  lStackX_8 = param_1;
  pstack_special_x_10 = param_2;
  lVar7 = lVar4;
  AcquireSRWLockShared(lVar4);
  function_1e6940(*(uint64_t *)(*(int64_t *)(lVar2 + 0x50) + 0x318),&lStackX_8,param_3,param_4,
                uVar5,uVar6,lVar7,uVar8);
  if (lStackX_8 == *(int64_t *)(*(int64_t *)(lVar2 + 0x50) + 0x318)) {
    for (lVar3 = *(int64_t *)(lVar2 + 0x60); lVar3 != lVar2 + 0x58;
        lVar3 = Function_7bfb2422(lVar3)) {
      function_1e6940(*(uint64_t *)(*(int64_t *)(lVar3 + 0x40) + 800),&lStackX_8,param_3,param_4,
                    uVar5,uVar6,lVar7,uVar8);
      if (lStackX_8 != *(int64_t *)(*(int64_t *)(lVar3 + 0x40) + 800)) {
        *param_2 = *(int32_t *)(lStackX_8 + 0x34);
        plVar1 = *(int64_t **)(lVar3 + 0x40);
        *(int64_t **)(param_2 + 2) = plVar1;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x28))();
        }
        goto LAB_1801c74a0;
      }
    }
    *param_2 = 0xffffffff;
    *(uint64_t *)(param_2 + 2) = 0;
  }
  else {
    *param_2 = *(int32_t *)(lStackX_8 + 0x34);
    plVar1 = *(int64_t **)(lVar2 + 0x50);
    *(int64_t **)(param_2 + 2) = plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
  }
LAB_1801c74a0:
  ReleaseSRWLockShared(lVar4);
  return param_2;
}
// 函数: void function_1c7500(void)
void function_1c7500(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}