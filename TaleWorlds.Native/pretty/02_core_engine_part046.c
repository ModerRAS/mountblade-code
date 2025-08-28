#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part046.c - 3 个函数
// 函数: void function_086e40(int64_t param_1,int64_t *param_2,int64_t param_3)
void function_086e40(int64_t param_1,int64_t *param_2,int64_t param_3)
{
  void *puVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int8_t stack_array_2a8 [32];
  void *plocal_var_288;
  int8_t *plocal_var_280;
  int32_t local_var_278;
  uint64_t local_var_270;
  int64_t alStack_268 [2];
  void *plocal_var_258;
  void *plocal_var_250;
  uint local_var_248;
  uint8_t stack_array_240 [520];
  uint64_t local_var_38;
  alStack_268[1] = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2a8;
  uVar2 = 0;
  plocal_var_258 = &processed_var_9208_ptr;
  plocal_var_250 = stack_array_240;
  stack_array_240[0] = 0;
  local_var_248 = *(uint *)(param_3 + 0x10);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar1 = *(void **)(param_3 + 8);
  }
  strcpy_s(stack_array_240,0x200,puVar1);
  uVar4 = uVar2;
  if (local_var_248 != 0) {
    do {
      if ((byte)(plocal_var_250[uVar2] + 0xbf) < 0x1a) {
        plocal_var_250[uVar2] = plocal_var_250[uVar2] + ' ';
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 1;
      uVar4 = (uint64_t)uVar3;
    } while (uVar3 < local_var_248);
  }
  if ((*param_2 == 0) && (param_2[1] == 0)) {
    function_0871c0(param_1,param_3);
  }
  else {
    function_08d5c0(param_1 + 0x78,alStack_268,param_2);
    if (alStack_268[0] != param_1 + 0x78) {
      plocal_var_288 = &system_data_buffer_ptr;
      local_var_270 = 0;
      plocal_var_280 = (int8_t *)0x0;
      local_var_278 = 0;
      CoreEngineDataBufferProcessor(&plocal_var_288,local_var_248);
      if (0 < (int)local_var_248) {
        puVar1 = &system_buffer_ptr;
        if (plocal_var_250 != (void *)0x0) {
          puVar1 = plocal_var_250;
        }
// WARNING: Subroutine does not return
        memcpy(plocal_var_280,puVar1,(int64_t)(int)(local_var_248 + 1));
      }
      if ((plocal_var_250 != (void *)0x0) && (local_var_278 = 0, plocal_var_280 != (int8_t *)0x0)) {
        *plocal_var_280 = 0;
      }
      function_08d4a0(alStack_268[0] + 0x60,alStack_268,&plocal_var_288);
      plocal_var_288 = &system_data_buffer_ptr;
      if (plocal_var_280 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_280 = (int8_t *)0x0;
      local_var_270 = local_var_270 & 0xffffffff00000000;
      plocal_var_288 = &system_state_ptr;
    }
  }
  plocal_var_258 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_2a8);
}
uint64_t function_087070(int64_t param_1,int64_t *param_2,uint64_t param_3)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lStackX_20;
  if ((*param_2 != 0) || (param_2[1] != 0)) {
    function_08d5c0(param_1 + 0x78,&lStackX_20,param_2);
    if ((lStackX_20 != param_1 + 0x78) &&
       (lVar2 = lStackX_20 + 0x30, function_08d400(lVar2,&lStackX_20,param_3), lStackX_20 != lVar2)) {
      return *(uint64_t *)(lStackX_20 + 0x30);
    }
    return 0;
  }
  lVar2 = *(int64_t *)(param_1 + 0x80);
  do {
    if (lVar2 == param_1 + 0x78) {
      return 0;
    }
    puVar3 = (uint64_t *)(lVar2 + 0x30);
    puVar4 = *(uint64_t **)(lVar2 + 0x40);
    if (*(uint64_t **)(lVar2 + 0x40) != (uint64_t *)0x0) {
      do {
        iVar1 = memcmp(puVar4 + 4,param_3,0x10);
        if (iVar1 < 0) {
          puVar5 = (uint64_t *)*puVar4;
        }
        else {
          puVar5 = (uint64_t *)puVar4[1];
          puVar3 = puVar4;
        }
        puVar4 = puVar5;
      } while (puVar5 != (uint64_t *)0x0);
      if ((puVar3 != (uint64_t *)(lVar2 + 0x30)) &&
         (iVar1 = memcmp(param_3,puVar3 + 4,0x10), -1 < iVar1)) {
        return puVar3[6];
      }
    }
    lVar2 = SystemFunction_00018066bd70(lVar2);
  } while( true );
}
uint64_t function_0870a2(int64_t param_1)
{
  int64_t lVar1;
  int64_t local_var_48;
  function_08d5c0(param_1 + 0x78,&local_buffer_00000048);
  if (local_var_48 != param_1 + 0x78) {
    lVar1 = local_var_48 + 0x30;
    function_08d400(lVar1,&local_buffer_00000048);
    if (local_var_48 != lVar1) {
      return *(uint64_t *)(local_var_48 + 0x30);
    }
  }
  return 0;
}
uint64_t function_0870ef(void)
{
  return 0;
}
uint64_t function_087100(int64_t param_1,uint64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  lVar2 = *(int64_t *)(param_1 + 0x80);
  do {
    if (lVar2 == param_1 + 0x78) {
      return 0;
    }
    puVar3 = (uint64_t *)(lVar2 + 0x30);
    puVar4 = *(uint64_t **)(lVar2 + 0x40);
    if (*(uint64_t **)(lVar2 + 0x40) != (uint64_t *)0x0) {
      do {
        iVar1 = memcmp(puVar4 + 4,param_2,0x10);
        if (iVar1 < 0) {
          puVar5 = (uint64_t *)*puVar4;
        }
        else {
          puVar5 = (uint64_t *)puVar4[1];
          puVar3 = puVar4;
        }
        puVar4 = puVar5;
      } while (puVar5 != (uint64_t *)0x0);
      if ((puVar3 != (uint64_t *)(lVar2 + 0x30)) &&
         (iVar1 = memcmp(param_2,puVar3 + 4,0x10), -1 < iVar1)) {
        return puVar3[6];
      }
    }
    lVar2 = SystemFunction_00018066bd70(lVar2);
  } while( true );
}
uint64_t function_0871c0(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int64_t lVar5;
  uint uVar6;
  int iVar7;
  void *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  void *plocal_var_50;
  byte *pbStack_48;
  int iStack_40;
  uint64_t local_var_38;
  lVar5 = *(int64_t *)(param_1 + 0x80);
  do {
    if (lVar5 == param_1 + 0x78) {
      return 0;
    }
    puVar1 = (uint64_t *)(lVar5 + 0x60);
    plocal_var_50 = &system_data_buffer_ptr;
    local_var_38 = 0;
    pbStack_48 = (byte *)0x0;
    iStack_40 = 0;
    CoreEngineDataBufferProcessor(&plocal_var_50,*(int32_t *)(param_2 + 0x10));
    if (0 < *(int *)(param_2 + 0x10)) {
      puVar8 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar8 = *(void **)(param_2 + 8);
      }
// WARNING: Subroutine does not return
      memcpy(pbStack_48,puVar8,(int64_t)(*(int *)(param_2 + 0x10) + 1));
    }
    if ((*(int64_t *)(param_2 + 8) != 0) && (iStack_40 = 0, pbStack_48 != (byte *)0x0)) {
      *pbStack_48 = 0;
    }
    puVar11 = *(uint64_t **)(lVar5 + 0x70);
    puVar9 = puVar1;
    if (puVar11 == (uint64_t *)0x0) {
LAB_180087337:
      puVar10 = puVar1;
    }
    else {
      do {
        if (iStack_40 == 0) {
          bVar3 = false;
          puVar12 = (uint64_t *)puVar11[1];
        }
        else {
          if (*(int *)(puVar11 + 6) == 0) {
            bVar3 = true;
          }
          else {
            pbVar4 = pbStack_48;
            do {
              uVar6 = (uint)pbVar4[puVar11[5] - (int64_t)pbStack_48];
              iVar7 = *pbVar4 - uVar6;
              if (*pbVar4 != uVar6) break;
              pbVar4 = pbVar4 + 1;
            } while (uVar6 != 0);
            bVar3 = 0 < iVar7;
            if (iVar7 < 1) {
              puVar12 = (uint64_t *)puVar11[1];
              goto LAB_1800872f7;
            }
          }
          puVar12 = (uint64_t *)*puVar11;
        }
LAB_1800872f7:
        puVar10 = puVar11;
        if (bVar3) {
          puVar10 = puVar9;
        }
        puVar9 = puVar10;
        puVar11 = puVar12;
      } while (puVar12 != (uint64_t *)0x0);
      if (puVar10 == puVar1) goto LAB_180087337;
      if (*(int *)(puVar10 + 6) != 0) {
        if (iStack_40 != 0) {
          pbVar4 = (byte *)puVar10[5];
          lVar13 = (int64_t)pbStack_48 - (int64_t)pbVar4;
          do {
            bVar2 = *pbVar4;
            uVar6 = (uint)pbVar4[lVar13];
            if (bVar2 != uVar6) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar6 != 0);
          if ((int)(bVar2 - uVar6) < 1) goto LAB_18008733a;
        }
        goto LAB_180087337;
      }
    }
LAB_18008733a:
    plocal_var_50 = &system_data_buffer_ptr;
    if (pbStack_48 != (byte *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    pbStack_48 = (byte *)0x0;
    local_var_38 = local_var_38 & 0xffffffff00000000;
    plocal_var_50 = &system_state_ptr;
    if (puVar10 != puVar1) {
      return puVar10[8];
    }
    lVar5 = SystemFunction_00018066bd70(lVar5);
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_0873b0(int param_1,int64_t *param_2,int8_t *param_3)
{
  char cVar1;
  int64_t lVar2;
  void *puVar3;
  uint64_t uVar4;
  void *puVar5;
  void *plocal_var_b8;
  int64_t lStack_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int64_t lStack_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  int32_t local_var_68;
  uint64_t local_var_60;
  void *plocal_var_58;
  void *plocal_var_50;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  uVar4 = 0;
  if (param_1 < 0) {
LAB_180087418:
    lVar2 = MemoryDebugger0();
  }
  else {
    lVar2 = *(int64_t *)(*system_main_module_state + 0x888);
    if ((uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar2 >> 5) <=
        (uint64_t)(int64_t)param_1) goto LAB_180087418;
    lVar2 = (int64_t)param_1 * 0x20 + lVar2;
  }
  CoreEngineDataTransformer(&plocal_var_58,lVar2);
  plocal_var_78 = &system_data_buffer_ptr;
  local_var_60 = 0;
  lStack_70 = 0;
  local_var_68 = 0;
  puVar3 = &system_buffer_ptr;
  if (core_system_control_memory != (void *)0x0) {
    puVar3 = core_system_control_memory;
  }
  puVar5 = &system_buffer_ptr;
  if (plocal_var_50 != (void *)0x0) {
    puVar5 = plocal_var_50;
  }
  System_DataHandler(&plocal_var_78,&processed_var_8076_ptr,puVar5,puVar3);
  plocal_var_98 = &system_data_buffer_ptr;
  local_var_80 = 0;
  lStack_90 = 0;
  local_var_88 = 0;
  puVar3 = &system_buffer_ptr;
  if (core_system_control_memory != (void *)0x0) {
    puVar3 = core_system_control_memory;
  }
  puVar5 = &system_buffer_ptr;
  if (plocal_var_50 != (void *)0x0) {
    puVar5 = plocal_var_50;
  }
  System_DataHandler(&plocal_var_98,&processed_var_8076_ptr,puVar5,puVar3);
  plocal_var_b8 = &system_data_buffer_ptr;
  local_var_a0 = 0;
  lStack_b0 = 0;
  local_var_a8 = 0;
  puVar3 = &system_buffer_ptr;
  if (core_system_control_memory != (void *)0x0) {
    puVar3 = core_system_control_memory;
  }
  puVar5 = &system_buffer_ptr;
  if (plocal_var_50 != (void *)0x0) {
    puVar5 = plocal_var_50;
  }
  System_DataHandler(&plocal_var_b8,&processed_var_8076_ptr,puVar5,puVar3);
  cVar1 = UltraHighFreq_LogManager1(&plocal_var_78);
  if (cVar1 == '\0') {
LAB_18008755d:
    cVar1 = UltraHighFreq_LogManager1(&plocal_var_b8);
    if (cVar1 == '\0') goto LAB_18008758f;
    puVar3 = &system_buffer_ptr;
    if (core_system_control_memory != (void *)0x0) {
      puVar3 = core_system_control_memory;
    }
    (**(code **)(*param_2 + 0x10))(param_2,puVar3);
    *param_3 = 1;
  }
  else {
    cVar1 = UltraHighFreq_LogManager1(&plocal_var_98);
    if (cVar1 == '\0') goto LAB_18008755d;
    puVar3 = &system_buffer_ptr;
    if (core_system_control_memory != (void *)0x0) {
      puVar3 = core_system_control_memory;
    }
    (**(code **)(*param_2 + 0x10))(param_2,puVar3);
  }
  uVar4 = 1;
LAB_18008758f:
  plocal_var_b8 = &system_data_buffer_ptr;
  if (lStack_b0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_b0 = 0;
  local_var_a0 = local_var_a0 & 0xffffffff00000000;
  plocal_var_b8 = &system_state_ptr;
  plocal_var_98 = &system_data_buffer_ptr;
  if (lStack_90 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_90 = 0;
  local_var_80 = local_var_80 & 0xffffffff00000000;
  plocal_var_98 = &system_state_ptr;
  plocal_var_78 = &system_data_buffer_ptr;
  if (lStack_70 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_70 = 0;
  local_var_60 = local_var_60 & 0xffffffff00000000;
  plocal_var_78 = &system_state_ptr;
  plocal_var_58 = &system_data_buffer_ptr;
  if (plocal_var_50 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_087630(uint64_t param_1,int64_t param_2,int64_t param_3)
void function_087630(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  void *puVar1;
  void *puVar2;
  void *puVar3;
  void *plocal_var_30;
  void *plocal_var_28;
  function_142300(*system_main_module_state,&plocal_var_30,param_1);
  *(int32_t *)(param_3 + 0x10) = 0;
  if (*(int8_t **)(param_3 + 8) != (int8_t *)0x0) {
    **(int8_t **)(param_3 + 8) = 0;
  }
  puVar1 = &system_buffer_ptr;
  if (core_system_control_memory != (void *)0x0) {
    puVar1 = core_system_control_memory;
  }
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_2 + 8);
  }
  puVar2 = &system_buffer_ptr;
  if (plocal_var_28 != (void *)0x0) {
    puVar2 = plocal_var_28;
  }
  System_DataHandler(param_3,&processed_var_8064_ptr,puVar2,puVar3,puVar1);
  plocal_var_30 = &system_data_buffer_ptr;
  if (plocal_var_28 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_087700(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
void function_087700(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t param_4,
                  int8_t param_5)
{
  int *piVar1;
  int32_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  char cVar9;
  int iVar10;
  int8_t *puVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t lVar15;
  int64_t *plVar16;
  uint64_t *puVar17;
  int64_t *plVar18;
  uint64_t *puVar19;
  int64_t *plVar20;
  int64_t *plVar21;
  uint64_t *puVar22;
  uint64_t uVar23;
  uint64_t *puVar24;
  void *puVar25;
  uint64_t uVar26;
  void *puVar27;
  uint *puVar28;
  int8_t stack_array_158 [32];
  void *plocal_var_138;
  void *plocal_var_128;
  int8_t *plocal_var_120;
  int32_t local_var_118;
  uint64_t local_var_110;
  int64_t alStack_108 [2];
  uint local_var_f8;
  uint local_var_f4;
  uint local_var_f0;
  int64_t *plStack_e8;
  uint64_t *plocal_var_e0;
  int8_t *plocal_var_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  uint64_t *plocal_var_c0;
  uint64_t *plocal_var_b8;
  uint64_t local_var_b0;
  uint64_t *plocal_var_a8;
  uint64_t *plocal_var_a0;
  int iStack_98;
  uint local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  uint local_var_80;
  uint64_t local_var_7c;
  uint64_t local_var_70;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  uint64_t local_var_50;
  local_var_b0 = 0xfffffffffffffffe;
  local_var_50 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_158;
  plVar18 = (int64_t *)0x0;
  *param_1 = 0;
  plocal_var_128 = &system_data_buffer_ptr;
  local_var_110 = 0;
  plocal_var_120 = (int8_t *)0x0;
  local_var_118 = 0;
  plocal_var_e0 = param_2;
  plocal_var_c0 = param_3;
  plocal_var_b8 = param_1;
  plocal_var_a8 = param_2;
  plocal_var_a0 = param_3;
  function_087630(param_2,param_3,&plocal_var_128);
  alStack_108[0] = -1;
  puVar11 = &system_buffer_ptr;
  if (plocal_var_120 != (int8_t *)0x0) {
    puVar11 = plocal_var_120;
  }
  cVar9 = function_63ba00(alStack_108,puVar11,5,0x105);
  plVar20 = plVar18;
  lVar15 = alStack_108[0];
  if (cVar9 == '\0') {
    local_var_118 = 0;
    if (plocal_var_120 != (int8_t *)0x0) {
      *plocal_var_120 = 0;
    }
    plocal_var_138 = &system_buffer_ptr;
    if (core_system_control_memory != (void *)0x0) {
      plocal_var_138 = core_system_control_memory;
    }
    puVar27 = &system_buffer_ptr;
    if ((void *)param_3[1] != (void *)0x0) {
      puVar27 = (void *)param_3[1];
    }
    puVar25 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar25 = (void *)param_2[1];
    }
    System_DataHandler(&plocal_var_128,&processed_var_8064_ptr,puVar25,puVar27);
    puVar11 = &system_buffer_ptr;
    if (plocal_var_120 != (int8_t *)0x0) {
      puVar11 = plocal_var_120;
    }
    cVar9 = function_63ba00(alStack_108,puVar11,5,0x105);
    lVar15 = alStack_108[0];
    if (cVar9 != '\0') goto LAB_1800878e0;
    puVar11 = &system_buffer_ptr;
    if (plocal_var_120 != (int8_t *)0x0) {
      puVar11 = plocal_var_120;
    }
    System_DataHandler(param_4,&processed_var_8088_ptr,puVar11);
    if (alStack_108[0] != -1) {
      LOCK();
      SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
      UNLOCK();
      CloseHandle(alStack_108[0]);
      alStack_108[0] = -1;
    }
    plocal_var_128 = &system_data_buffer_ptr;
    if (plocal_var_120 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    local_var_110 = local_var_110 & 0xffffffff00000000;
  }
  else {
LAB_1800878e0:
    do {
      uVar26 = 0x1000000;
      if (0x24U - (int64_t)plVar20 < 0x1000000) {
        uVar26 = 0x24U - (int64_t)plVar20 & 0xffffffff;
      }
      local_var_f8 = 0;
      plocal_var_138 = (void *)0x0;
      iVar10 = ReadFile(lVar15,(int64_t)&iStack_98 + (int64_t)plVar20,uVar26,&local_var_f8);
      if (iVar10 == 0) goto LAB_18008807f;
    } while ((local_var_f8 != 0) &&
            (plVar20 = (int64_t *)((int64_t)plVar20 + (uint64_t)local_var_f8),
            plVar20 < (int64_t *)0x24));
    if (plVar20 != (int64_t *)0x24) {
LAB_18008807f:
      puVar11 = &system_buffer_ptr;
      if ((int8_t *)param_2[1] != (int8_t *)0x0) {
        puVar11 = (int8_t *)param_2[1];
      }
      System_DataHandler(param_4,&processed_var_8112_ptr,puVar11);
      if (lVar15 != -1) {
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(alStack_108[0]);
        alStack_108[0] = -1;
      }
      plocal_var_128 = &system_data_buffer_ptr;
      if (plocal_var_120 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_120 = (int8_t *)0x0;
      local_var_110 = local_var_110 & 0xffffffff00000000;
      plocal_var_128 = &system_state_ptr;
      *param_2 = &system_data_buffer_ptr;
      if (param_2[1] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_2[1] = 0;
      *(int32_t *)(param_2 + 3) = 0;
      *param_2 = &system_state_ptr;
      *param_3 = &system_data_buffer_ptr;
      if (param_3[1] != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_3[1] = 0;
      *(int32_t *)(param_3 + 3) = 0;
      *param_3 = &system_state_ptr;
      goto LAB_180088131;
    }
    if (iStack_98 == 0x43415054) {
      if (local_var_94 < 3) {
        SetFilePointerEx(lVar15,0,&lStack_d0,1);
        lStack_c8 = lStack_d0;
        plVar20 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
        *plVar20 = 0;
        plVar20[1] = 0;
        plVar20[2] = 0;
        *(int16_t *)(plVar20 + 3) = 0;
        *(int8_t *)((int64_t)plVar20 + 0x1a) = 3;
        if ((int)local_var_7c != 0) {
          plVar12 = (int64_t *)(local_var_7c & 0xffffffff);
          System_BufferManager(plVar20,local_var_7c & 0xffffffff);
          lVar13 = plVar20[1];
          plVar21 = plVar18;
          param_2 = plocal_var_e0;
          if (plVar12 != (int64_t *)0x0) {
            do {
              uVar26 = 0x1000000;
              if ((uint64_t)((int64_t)plVar12 - (int64_t)plVar21) < 0x1000000) {
                uVar26 = (int64_t)plVar12 - (int64_t)plVar21 & 0xffffffff;
              }
              local_var_f4 = 0;
              plocal_var_138 = (void *)0x0;
              iVar10 = ReadFile(lVar15,lVar13 + (int64_t)plVar21,uVar26,&local_var_f4);
              param_2 = plocal_var_e0;
            } while (((iVar10 != 0) && (local_var_f4 != 0)) &&
                    (plVar21 = (int64_t *)((int64_t)plVar21 + (uint64_t)local_var_f4),
                    plVar21 < plVar12));
          }
        }
        if (lVar15 != -1) {
          LOCK();
          SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
          UNLOCK();
          CloseHandle(alStack_108[0]);
          alStack_108[0] = -1;
        }
        puVar11 = (int8_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1a0,8,0x1a);
        *puVar11 = 0;
        *(int32_t *)(puVar11 + 4) = 0xffffffff;
        *(int32_t *)(puVar11 + 8) = local_var_90;
        *(int32_t *)(puVar11 + 0xc) = local_var_8c;
        *(int32_t *)(puVar11 + 0x10) = local_var_88;
        *(int32_t *)(puVar11 + 0x14) = local_var_84;
        plocal_var_d8 = puVar11;
        SystemCore_EncryptionEngine0(puVar11 + 0x18,param_2);
        SystemCore_EncryptionEngine0(puVar11 + 0x38,param_3);
        puVar24 = (uint64_t *)(puVar11 + 0x58);
        *puVar24 = &system_state_ptr;
        *(uint64_t *)(puVar11 + 0x60) = 0;
        *(int32_t *)(puVar11 + 0x68) = 0;
        *puVar24 = &system_data_buffer_ptr;
        *(uint64_t *)(puVar11 + 0x70) = 0;
        *(uint64_t *)(puVar11 + 0x60) = 0;
        *(int32_t *)(puVar11 + 0x68) = 0;
        plStack_e8 = puVar24;
        function_257b80(puVar11 + 0x78);
        puVar11[0x178] = param_5;
        plVar21 = (int64_t *)(puVar11 + 0x180);
        *plVar21 = 0;
        *(uint64_t *)(puVar11 + 0x188) = 0;
        *(uint64_t *)(puVar11 + 400) = 0;
        *(int32_t *)(puVar11 + 0x198) = 0x1a;
        plStack_e8 = plVar21;
        function_086bd0(puVar24,puVar11 + 0x18,puVar11 + 0x38);
        local_var_f0 = 0;
        if (local_var_80 != 0) {
          do {
            puVar24 = (uint64_t *)plVar20[1];
            local_var_70 = *puVar24;
            local_var_68 = puVar24[1];
            plVar20[1] = (int64_t)(puVar24 + 2);
            local_var_60 = *(int32_t *)(puVar24 + 2);
            local_var_5c = *(int32_t *)((int64_t)puVar24 + 0x14);
            local_var_58 = *(int32_t *)(puVar24 + 3);
            local_var_54 = *(int32_t *)((int64_t)puVar24 + 0x1c);
            plVar20[1] = (int64_t)(puVar24 + 4);
            plVar12 = plVar18;
            if (1 < local_var_94) {
              plVar12 = (int64_t *)(uint64_t)*(uint *)(puVar24 + 4);
              plVar20[1] = (int64_t)puVar24 + 0x24;
            }
            puVar24 = *(uint64_t **)(core_system_data_memory + 0xa8);
            puVar17 = (uint64_t *)puVar24[2];
            puVar19 = puVar24;
            if (puVar17 == (uint64_t *)0x0) {
LAB_180087f81:
// WARNING: Subroutine does not return
              SystemParameterHandler(system_message_context,&processed_var_9136_ptr);
            }
            do {
              iVar10 = memcmp(puVar17 + 4,&local_var_70,0x10);
              if (iVar10 < 0) {
                puVar22 = (uint64_t *)*puVar17;
              }
              else {
                puVar22 = (uint64_t *)puVar17[1];
                puVar19 = puVar17;
              }
              puVar17 = puVar22;
            } while (puVar22 != (uint64_t *)0x0);
            if ((puVar19 == puVar24) || (iVar10 = memcmp(&local_var_70,puVar19 + 4,0x10), iVar10 < 0))
            goto LAB_180087f81;
            plVar12 = (int64_t *)(*(code *)puVar19[6])(&local_var_60,plVar12);
            if (plVar12 != (int64_t *)0x0) {
              uVar3 = *(uint *)plVar20[1];
              puVar28 = (uint *)plVar20[1] + 1;
              plVar20[1] = (int64_t)puVar28;
              if (uVar3 != 0) {
                (**(code **)(plVar12[0xd] + 0x18))(plVar12 + 0xd,puVar28,uVar3);
                plVar20[1] = plVar20[1] + (uint64_t)uVar3;
                puVar28 = (uint *)plVar20[1];
              }
              lVar13 = SystemFunction_000180639d60(plVar20);
              lVar13 = lVar13 + lStack_c8;
              lVar15 = *(int64_t *)puVar28;
              plVar20[1] = (int64_t)(puVar28 + 2);
              plStack_e8 = (int64_t *)SystemFunction_000180639d60();
              plVar14 = plVar18;
              if (lVar15 != 0) {
                plVar14 = (int64_t *)(**(code **)(*plVar12 + 0x68))(plVar12,0);
                (**(code **)(*plVar14 + 0x10))(plVar14,plVar20);
              }
              plVar20[1] = *plVar20;
              function_639d80(plVar20,(int8_t *)((int64_t)plStack_e8 + lVar15));
              uVar4 = *(uint64_t *)plVar20[1];
              plVar20[1] = (int64_t)((uint64_t *)plVar20[1] + 1);
              function_256530(plVar12,plVar14,uVar4,lVar13);
              iVar10 = *(int *)plVar20[1];
              piVar1 = (int *)plVar20[1] + 1;
              plVar20[1] = (int64_t)piVar1;
              plVar14 = (int64_t *)plVar12[0x11];
              if (plVar14 == (int64_t *)0x0) {
                if (plocal_var_d8[0x178] == '\0') {
                  plVar14 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x1a);
                  *plVar14 = (int64_t)&ui_system_data_1952_ptr;
                  plVar14[1] = 0;
                  plVar14[2] = (int64_t)plVar12;
                  plVar14[3] = 0;
                  *(int32_t *)(plVar14 + 4) = 0;
                  *plVar14 = (int64_t)&ui_system_data_1824_ptr;
                  plStack_e8 = plVar14;
                }
                else {
                  plVar14 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x1a);
                  *plVar14 = (int64_t)&ui_system_data_1952_ptr;
                  plVar14[1] = 0;
                  plVar14[2] = (int64_t)plVar12;
                  plVar14[3] = 0;
                  *(int32_t *)(plVar14 + 4) = 0;
                }
                plVar12[0x11] = (int64_t)plVar14;
              }
              (**(code **)(*plVar14 + 8))(plVar14,plocal_var_d8,piVar1,iVar10);
              function_639d80(plVar20,(int64_t)iVar10 * 0x45);
              uVar23 = (uint64_t)*(int *)plVar20[1];
              plVar20[1] = (int64_t)((int *)plVar20[1] + 1);
              plVar14 = plVar12 + 0x12;
              lVar15 = plVar12[0x13] - *plVar14;
              lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
              uVar26 = (lVar15 >> 3) - (lVar15 >> 0x3f);
              if (uVar26 < uVar23) {
                function_08dbb0(plVar14,uVar23 - uVar26);
              }
              else {
                plVar12[0x13] = uVar23 * 0x30 + *plVar14;
              }
              plVar16 = plVar18;
              if (0 < (int64_t)uVar23) {
                do {
                  lVar15 = *plVar14;
                  uVar4 = ((uint64_t *)plVar20[1])[1];
                  *(uint64_t *)(lVar15 + (int64_t)plVar16) = *(uint64_t *)plVar20[1];
                  ((uint64_t *)(lVar15 + (int64_t)plVar16))[1] = uVar4;
                  plVar20[1] = plVar20[1] + 0x10;
                  uVar4 = ((uint64_t *)plVar20[1])[1];
                  puVar24 = (uint64_t *)(*plVar14 + 0x10 + (int64_t)plVar16);
                  *puVar24 = *(uint64_t *)plVar20[1];
                  puVar24[1] = uVar4;
                  plVar20[1] = plVar20[1] + 0x10;
                  puVar5 = (int32_t *)plVar20[1];
                  uVar6 = puVar5[1];
                  uVar7 = puVar5[2];
                  uVar8 = puVar5[3];
                  puVar2 = (int32_t *)(*plVar14 + 0x20 + (int64_t)plVar16);
                  *puVar2 = *puVar5;
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  plVar20[1] = plVar20[1] + 0x10;
                  uVar23 = uVar23 - 1;
                  plVar16 = plVar16 + 6;
                } while (uVar23 != 0);
              }
              puVar24 = *(uint64_t **)(puVar11 + 0x188);
              if (puVar24 < *(uint64_t **)(puVar11 + 400)) {
                *(uint64_t **)(puVar11 + 0x188) = puVar24 + 1;
                *puVar24 = plVar12;
              }
              else {
                puVar17 = (uint64_t *)*plVar21;
                lVar15 = (int64_t)puVar24 - (int64_t)puVar17 >> 3;
                if (lVar15 == 0) {
                  lVar15 = 1;
LAB_180087f16:
                  plVar14 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar15 * 8,puVar11[0x198]);
                  puVar24 = *(uint64_t **)(puVar11 + 0x188);
                  puVar17 = (uint64_t *)*plVar21;
                }
                else {
                  lVar15 = lVar15 * 2;
                  plVar14 = plVar18;
                  if (lVar15 != 0) goto LAB_180087f16;
                }
                if (puVar17 != puVar24) {
// WARNING: Subroutine does not return
                  memmove(plVar14,puVar17,(int64_t)puVar24 - (int64_t)puVar17);
                }
                *plVar14 = (int64_t)plVar12;
                if (*plVar21 != 0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                *plVar21 = (int64_t)plVar14;
                *(int64_t **)(puVar11 + 0x188) = plVar14 + 1;
                *(int64_t **)(puVar11 + 400) = plVar14 + lVar15;
              }
            }
            local_var_f0 = local_var_f0 + 1;
          } while (local_var_f0 < local_var_80);
        }
        if (((char)plVar20[3] == '\0') && (*plVar20 != 0)) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar20);
      }
      puVar11 = &system_buffer_ptr;
      if ((int8_t *)param_2[1] != (int8_t *)0x0) {
        puVar11 = (int8_t *)param_2[1];
      }
      System_DataHandler(param_4,&processed_var_8168_ptr,local_var_94,puVar11);
      if (lVar15 != -1) {
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(alStack_108[0]);
        alStack_108[0] = -1;
      }
      plocal_var_128 = &system_data_buffer_ptr;
      if (plocal_var_120 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      local_var_110 = local_var_110 & 0xffffffff00000000;
    }
    else {
      puVar11 = &system_buffer_ptr;
      if ((int8_t *)param_2[1] != (int8_t *)0x0) {
        puVar11 = (int8_t *)param_2[1];
      }
      System_DataHandler(param_4,&processed_var_8136_ptr,puVar11);
      if (lVar15 != -1) {
        LOCK();
        SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
        UNLOCK();
        CloseHandle(alStack_108[0]);
        alStack_108[0] = -1;
      }
      plocal_var_128 = &system_data_buffer_ptr;
      if (plocal_var_120 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      local_var_110 = local_var_110 & 0xffffffff00000000;
    }
  }
  plocal_var_120 = (int8_t *)0x0;
  plocal_var_128 = &system_state_ptr;
  SystemValidator(param_2);
  SystemValidator(param_3);
LAB_180088131:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_50 ^ (uint64_t)stack_array_158);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address