#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
// 03_rendering_part644.c - 9 个函数
// 函数: void function_62c8f0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_62c8f0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *plocal_var_70;
  int8_t *plocal_var_68;
  int iStack_60;
  uint64_t local_var_58;
  uint64_t *plocal_var_50;
  uint64_t *plocal_var_48;
  uint64_t local_var_40;
  int32_t local_var_38;
  plocal_var_50 = (uint64_t *)0x0;
  plocal_var_48 = (uint64_t *)0x0;
  uVar5 = 0;
  local_var_40 = 0;
  local_var_38 = 3;
  function_62c5f0(0,&plocal_var_50,param_3,param_4,0xfffffffffffffffe);
  puVar3 = plocal_var_50;
  uVar6 = (int64_t)plocal_var_48 - (int64_t)plocal_var_50 >> 5;
  puVar2 = puVar3;
  puVar1 = plocal_var_48;
  if (uVar6 != 0) {
    do {
      plocal_var_70 = &system_data_buffer_ptr;
      local_var_58 = 0;
      plocal_var_68 = (int8_t *)0x0;
      iStack_60 = 0;
      CoreEngineDataBufferProcessor(&plocal_var_70,*(int32_t *)(puVar3 + uVar5 * 4 + 2));
      if (*(int *)(puVar3 + uVar5 * 4 + 2) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_68,puVar3[uVar5 * 4 + 1],*(int *)(puVar3 + uVar5 * 4 + 2) + 1);
      }
      if (puVar3[uVar5 * 4 + 1] != 0) {
        iStack_60 = 0;
        if (plocal_var_68 != (int8_t *)0x0) {
          *plocal_var_68 = 0;
        }
        local_var_58 = local_var_58 & 0xffffffff;
      }
      puVar1 = *(uint64_t **)(param_2 + 8);
      if (puVar1 < *(uint64_t **)(param_2 + 0x10)) {
        *(uint64_t **)(param_2 + 8) = puVar1 + 4;
        *puVar1 = &system_state_ptr;
        puVar1[1] = 0;
        *(int32_t *)(puVar1 + 2) = 0;
        *puVar1 = &system_data_buffer_ptr;
        puVar1[3] = 0;
        puVar1[1] = 0;
        *(int32_t *)(puVar1 + 2) = 0;
        CoreEngineDataBufferProcessor(puVar1,iStack_60);
        if (iStack_60 != 0) {
// WARNING: Subroutine does not return
          memcpy(puVar1[1],plocal_var_68,iStack_60 + 1);
        }
        if (plocal_var_68 != (int8_t *)0x0) {
          *(int32_t *)(puVar1 + 2) = 0;
          if ((int8_t *)puVar1[1] != (int8_t *)0x0) {
            *(int8_t *)puVar1[1] = 0;
          }
          *(int32_t *)((int64_t)puVar1 + 0x1c) = 0;
        }
      }
      else {
        SystemCore_BackupSystem(param_2,&plocal_var_70);
      }
      plocal_var_70 = &system_data_buffer_ptr;
      if (plocal_var_68 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_68 = (int8_t *)0x0;
      local_var_58 = local_var_58 & 0xffffffff00000000;
      plocal_var_70 = &system_state_ptr;
      uVar5 = (uint64_t)((int)uVar5 + 1);
      puVar1 = plocal_var_48;
    } while (uVar5 < uVar6);
  }
  for (; puVar4 = plocal_var_48, puVar2 != plocal_var_48; puVar2 = puVar2 + 4) {
    plocal_var_48 = puVar1;
    (**(code **)*puVar2)(puVar2,0);
    puVar1 = plocal_var_48;
    plocal_var_48 = puVar4;
  }
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  plocal_var_48 = puVar1;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62cb00(uint64_t param_1,int64_t param_2,uint64_t param_3)
void function_62cb00(uint64_t param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  void *puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int8_t stack_array_f8 [32];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int iStack_c8;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  int8_t *plocal_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t *plocal_var_90;
  uint64_t *plocal_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *aplocal_var_68 [5];
  uint64_t local_var_40;
  local_var_70 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  plocal_var_90 = (uint64_t *)0x0;
  plocal_var_88 = (uint64_t *)0x0;
  uVar10 = 0;
  local_var_80 = 0;
  local_var_78 = 3;
  local_var_98 = param_3;
  function_62d0d0(0,&plocal_var_90);
  puVar4 = plocal_var_90;
  uVar3 = local_var_98;
  uVar11 = (int64_t)plocal_var_88 - (int64_t)plocal_var_90 >> 5;
  puVar1 = puVar4;
  puVar2 = plocal_var_88;
  if (uVar11 != 0) {
    do {
      puVar2 = puVar4 + uVar10 * 4;
      plocal_var_b8 = &system_data_buffer_ptr;
      local_var_a0 = 0;
      plocal_var_b0 = (int8_t *)0x0;
      local_var_a8 = 0;
      CoreEngineDataBufferProcessor(&plocal_var_b8,*(int32_t *)(puVar2 + 2));
      if (*(int *)(puVar2 + 2) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_b0,puVar2[1],*(int *)(puVar2 + 2) + 1);
      }
      if (puVar2[1] != 0) {
        local_var_a8 = 0;
        if (plocal_var_b0 != (int8_t *)0x0) {
          *plocal_var_b0 = 0;
        }
        local_var_a0 = local_var_a0 & 0xffffffff;
      }
      lVar7 = function_627490(aplocal_var_68,puVar2);
      plocal_var_d8 = &system_data_buffer_ptr;
      local_var_c0 = 0;
      plocal_var_d0 = (int8_t *)0x0;
      iStack_c8 = 0;
      CoreEngineDataBufferProcessor(&plocal_var_d8,*(int32_t *)(lVar7 + 0x10));
      if (0 < *(int *)(lVar7 + 0x10)) {
        puVar9 = &system_buffer_ptr;
        if (*(void **)(lVar7 + 8) != (void *)0x0) {
          puVar9 = *(void **)(lVar7 + 8);
        }
// WARNING: Subroutine does not return
        memcpy(plocal_var_d0,puVar9,(int64_t)(*(int *)(lVar7 + 0x10) + 1));
      }
      if ((*(int64_t *)(lVar7 + 8) != 0) && (iStack_c8 = 0, plocal_var_d0 != (int8_t *)0x0)) {
        *plocal_var_d0 = 0;
      }
      aplocal_var_68[0] = &system_state_ptr;
      lVar7 = SystemFunction_0001800464d0(uVar3);
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(char *)(lVar7 + lVar8) != '\0');
      iVar6 = (int)lVar8;
      if (iStack_c8 == iVar6) {
        if (iStack_c8 != 0) {
          iVar6 = _stricmp(plocal_var_d0,lVar7);
        }
LAB_18062ccd5:
        if (iVar6 == 0) {
          if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
            *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
            CoreEngineDataTransformer();
          }
          else {
            SystemCore_BackupSystem(param_2,puVar2);
          }
        }
      }
      else if (iStack_c8 == 0) goto LAB_18062ccd5;
      plocal_var_d8 = &system_data_buffer_ptr;
      if (plocal_var_d0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_d0 = (int8_t *)0x0;
      local_var_c0 = local_var_c0 & 0xffffffff00000000;
      plocal_var_d8 = &system_state_ptr;
      plocal_var_b8 = &system_data_buffer_ptr;
      if (plocal_var_b0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_b0 = (int8_t *)0x0;
      local_var_a0 = local_var_a0 & 0xffffffff00000000;
      plocal_var_b8 = &system_state_ptr;
      uVar10 = (uint64_t)((int)uVar10 + 1);
      puVar2 = plocal_var_88;
    } while (uVar10 < uVar11);
  }
  for (; puVar5 = plocal_var_88, puVar1 != plocal_var_88; puVar1 = puVar1 + 4) {
    plocal_var_88 = puVar2;
    (**(code **)*puVar1)(puVar1,0);
    puVar2 = plocal_var_88;
    plocal_var_88 = puVar5;
  }
  if (puVar4 != (uint64_t *)0x0) {
    plocal_var_88 = puVar2;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar4);
  }
  plocal_var_88 = puVar2;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_f8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62cdc0(uint64_t param_1,int64_t param_2,uint64_t param_3)
void function_62cdc0(uint64_t param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  void *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int8_t stack_array_118 [32];
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int iStack_e8;
  uint64_t local_var_e0;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t *plocal_var_b8;
  uint64_t *plocal_var_b0;
  uint64_t local_var_a8;
  int32_t local_var_a0;
  uint64_t *plocal_var_98;
  uint64_t *plocal_var_90;
  uint64_t local_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  void *aplocal_var_70 [5];
  uint64_t local_var_48;
  local_var_78 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  plocal_var_b8 = (uint64_t *)0x0;
  plocal_var_b0 = (uint64_t *)0x0;
  uVar9 = 0;
  local_var_a8 = 0;
  local_var_a0 = 3;
  plocal_var_98 = (uint64_t *)0x0;
  plocal_var_90 = (uint64_t *)0x0;
  local_var_88 = 0;
  local_var_80 = 3;
  function_62d3b0(0,&plocal_var_b8,&plocal_var_98);
  puVar1 = plocal_var_b0;
  puVar8 = plocal_var_98;
  puVar2 = plocal_var_90;
  if ((int64_t)plocal_var_b0 - (int64_t)plocal_var_b8 >> 5 != 0) {
    do {
      puVar1 = plocal_var_b8;
      plocal_var_d8 = &system_data_buffer_ptr;
      local_var_c0 = 0;
      plocal_var_d0 = (int8_t *)0x0;
      local_var_c8 = 0;
      CoreEngineDataBufferProcessor(&plocal_var_d8,*(int32_t *)(plocal_var_b8 + uVar9 * 4 + 2));
      if (*(int *)(puVar1 + uVar9 * 4 + 2) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_d0,puVar1[uVar9 * 4 + 1],*(int *)(puVar1 + uVar9 * 4 + 2) + 1);
      }
      if (puVar1[uVar9 * 4 + 1] != 0) {
        local_var_c8 = 0;
        if (plocal_var_d0 != (int8_t *)0x0) {
          *plocal_var_d0 = 0;
        }
        local_var_c0 = local_var_c0 & 0xffffffff;
      }
      lVar5 = function_627490(aplocal_var_70,plocal_var_b8 + uVar9 * 4);
      plocal_var_f8 = &system_data_buffer_ptr;
      local_var_e0 = 0;
      plocal_var_f0 = (int8_t *)0x0;
      iStack_e8 = 0;
      CoreEngineDataBufferProcessor(&plocal_var_f8,*(int32_t *)(lVar5 + 0x10));
      if (0 < *(int *)(lVar5 + 0x10)) {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(lVar5 + 8) != (void *)0x0) {
          puVar7 = *(void **)(lVar5 + 8);
        }
// WARNING: Subroutine does not return
        memcpy(plocal_var_f0,puVar7,(int64_t)(*(int *)(lVar5 + 0x10) + 1));
      }
      if ((*(int64_t *)(lVar5 + 8) != 0) && (iStack_e8 = 0, plocal_var_f0 != (int8_t *)0x0)) {
        *plocal_var_f0 = 0;
      }
      aplocal_var_70[0] = &system_state_ptr;
      lVar5 = SystemFunction_0001800464d0(param_3);
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (*(char *)(lVar5 + lVar6) != '\0');
      iVar4 = (int)lVar6;
      if (iStack_e8 == iVar4) {
        if (iStack_e8 != 0) {
          iVar4 = _stricmp(plocal_var_f0,lVar5);
        }
LAB_18062cfad:
        if (iVar4 == 0) {
          if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
            *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
            CoreEngineDataTransformer();
          }
          else {
            SystemCore_BackupSystem(param_2,plocal_var_b8 + uVar9 * 4);
          }
        }
      }
      else if (iStack_e8 == 0) goto LAB_18062cfad;
      plocal_var_f8 = &system_data_buffer_ptr;
      if (plocal_var_f0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_f0 = (int8_t *)0x0;
      local_var_e0 = local_var_e0 & 0xffffffff00000000;
      plocal_var_f8 = &system_state_ptr;
      plocal_var_d8 = &system_data_buffer_ptr;
      if (plocal_var_d0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_d0 = (int8_t *)0x0;
      local_var_c0 = local_var_c0 & 0xffffffff00000000;
      plocal_var_d8 = &system_state_ptr;
      uVar9 = (uint64_t)((int)uVar9 + 1);
      puVar1 = plocal_var_b0;
      puVar8 = plocal_var_98;
      puVar2 = plocal_var_90;
    } while (uVar9 < (uint64_t)((int64_t)plocal_var_b0 - (int64_t)plocal_var_b8 >> 5));
  }
  for (; puVar3 = plocal_var_90, plocal_var_b0 = puVar1, puVar8 != plocal_var_90; puVar8 = puVar8 + 4) {
    plocal_var_90 = puVar2;
    (**(code **)*puVar8)(puVar8,0);
    puVar1 = plocal_var_b0;
    puVar2 = plocal_var_90;
    plocal_var_90 = puVar3;
  }
  if (plocal_var_98 != (uint64_t *)0x0) {
    plocal_var_90 = puVar2;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_98 = (uint64_t *)0x0;
  plocal_var_90 = puVar2;
  for (puVar8 = plocal_var_b8; puVar8 != puVar1; puVar8 = puVar8 + 4) {
    (**(code **)*puVar8)(puVar8,0);
  }
  if (plocal_var_b8 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_118);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62d0d0(uint64_t param_1,int64_t param_2)
void function_62d0d0(uint64_t param_1,int64_t param_2)
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
    uVar6 = local_var_708 + 2;
    CoreEngineDataBufferProcessor(&plocal_var_718,uVar6);
    *(int16_t *)((uint64_t)local_var_708 + lStack_710) = 0x2a2f;
    *(int8_t *)((int16_t *)((uint64_t)local_var_708 + lStack_710) + 1) = 0;
    local_var_750 = 0x118;
    plocal_var_758 = stack_array_278;
    local_var_708 = uVar6;
    MultiByteToWideChar(0xfde9,0,lStack_710,0xffffffff);
    lVar5 = FindFirstFileW(stack_array_278,abStack_6e8);
    if (lVar5 != -1) {
      do {
        if ((((sStack_6bc != 0x2e) || (sStack_6ba != 0)) &&
            ((sStack_6bc != 0x2e || ((sStack_6ba != 0x2e || (sStack_6b8 != 0)))))) &&
           ((abStack_6e8[0] & 0x10) == 0)) {
          SystemCore_EncryptionEngine0(&plocal_var_738,param_1);
          if (*(char *)((uint64_t)(local_var_728 - 1) + lStack_730) != '/') {
            uVar6 = local_var_728 + 1;
            CoreEngineDataBufferProcessor(&plocal_var_738,uVar6);
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
            CoreEngineDataBufferProcessor(&plocal_var_738,local_var_728 + iVar3);
// WARNING: Subroutine does not return
            memcpy((uint64_t)local_var_728 + lStack_730,&local_var_498,(int64_t)((int)lVar7 + 2));
          }
          if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
            *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
            CoreEngineDataTransformer();
          }
          else {
            SystemCore_BackupSystem(param_2,&plocal_var_738);
          }
          plocal_var_738 = &system_data_buffer_ptr;
          if (lStack_730 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
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
      CoreEngineMemoryPoolCleaner();
    }
    lStack_710 = 0;
    local_var_700 = 0;
    plocal_var_718 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_778);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62d3b0(int64_t param_1,int64_t param_2,uint64_t param_3)
void function_62d3b0(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void *puVar6;
  uint uVar7;
  int64_t lVar8;
  int8_t stack_array_8c8 [32];
  char *pcStack_8a8;
  int32_t local_var_8a0;
  uint64_t local_var_898;
  uint64_t local_var_890;
  void *plocal_var_888;
  int8_t *plocal_var_880;
  uint local_var_878;
  uint64_t local_var_870;
  void *plocal_var_868;
  int64_t lStack_860;
  uint local_var_858;
  int32_t local_var_850;
  void *plocal_var_848;
  void *plocal_var_840;
  uint local_var_838;
  int32_t local_var_830;
  void *plocal_var_828;
  int64_t lStack_820;
  int32_t local_var_810;
  void *plocal_var_808;
  int64_t lStack_800;
  int32_t local_var_7f0;
  uint64_t local_var_7e8;
  byte abStack_7d8 [44];
  short sStack_7ac;
  short sStack_7aa;
  short sStack_7a8;
  void *aplocal_var_588 [68];
  char acStack_368 [272];
  char acStack_258 [528];
  uint64_t local_var_48;
  local_var_7e8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_8c8;
  cVar2 = UltraHighFreq_LogManager1();
  if (cVar2 != '\0') {
    uVar4 = SystemCore_EncryptionEngine(aplocal_var_588,param_1);
    SystemCore_EncryptionEngine0(&plocal_var_848,uVar4);
    aplocal_var_588[0] = &system_state_ptr;
    uVar7 = local_var_838 + 2;
    CoreEngineDataBufferProcessor(&plocal_var_848,uVar7);
    *(int16_t *)(plocal_var_840 + local_var_838) = 0x2a2f;
    *(int8_t *)((int64_t)(plocal_var_840 + local_var_838) + 2) = 0;
    puVar6 = &system_buffer_ptr;
    if (plocal_var_840 != (void *)0x0) {
      puVar6 = plocal_var_840;
    }
    local_var_8a0 = 0x104;
    pcStack_8a8 = acStack_258;
    local_var_838 = uVar7;
    MultiByteToWideChar(0xfde9,0,puVar6,0xffffffff);
    lVar5 = FindFirstFileW(acStack_258,abStack_7d8);
    if (lVar5 != -1) {
      do {
        if (((sStack_7ac != 0x2e) || (sStack_7aa != 0)) &&
           ((sStack_7ac != 0x2e || ((sStack_7aa != 0x2e || (sStack_7a8 != 0)))))) {
          local_var_890 = 0;
          pcStack_8a8 = acStack_368;
          local_var_898 = 0;
          local_var_8a0 = 0x104;
          if ((abStack_7d8[0] & 0x10) == 0) {
            WideCharToMultiByte(0xfde9,0,&sStack_7ac,0xffffffff);
            SystemCore_EncryptionEngine0(&plocal_var_868,param_1);
            if (*(char *)((uint64_t)(local_var_858 - 1) + lStack_860) != '/') {
              uVar7 = local_var_858 + 1;
              CoreEngineDataBufferProcessor(&plocal_var_868,uVar7);
              *(int16_t *)((uint64_t)local_var_858 + lStack_860) = 0x2f;
              local_var_858 = uVar7;
            }
            lVar1 = -1;
            do {
              lVar8 = lVar1;
              lVar1 = lVar8 + 1;
            } while (acStack_368[lVar8 + 1] != '\0');
            iVar3 = (int)(lVar8 + 1);
            if (0 < iVar3) {
              CoreEngineDataBufferProcessor(&plocal_var_868,local_var_858 + iVar3);
// WARNING: Subroutine does not return
              memcpy((uint64_t)local_var_858 + lStack_860,acStack_368,(int64_t)((int)lVar8 + 2));
            }
            if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
              *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
              CoreEngineDataTransformer();
            }
            else {
              SystemCore_BackupSystem(param_2,&plocal_var_868);
            }
            uVar4 = SystemCore_CacheManager(&plocal_var_808,acStack_368);
            uVar4 = function_627560(aplocal_var_588,uVar4);
            SystemCore_EncryptionEngine0(&plocal_var_828,uVar4);
            DataEncryptionHandler0(param_3,&plocal_var_828);
            plocal_var_828 = &system_data_buffer_ptr;
            if (lStack_820 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_820 = 0;
            local_var_810 = 0;
            plocal_var_828 = &system_state_ptr;
            aplocal_var_588[0] = &system_state_ptr;
            plocal_var_808 = &system_data_buffer_ptr;
            if (lStack_800 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_800 = 0;
            local_var_7f0 = 0;
            plocal_var_808 = &system_state_ptr;
            plocal_var_868 = &system_data_buffer_ptr;
            if (lStack_860 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_860 = 0;
            local_var_850 = 0;
            plocal_var_868 = &system_state_ptr;
          }
          else {
            WideCharToMultiByte();
            plocal_var_888 = &system_data_buffer_ptr;
            local_var_870 = 0;
            plocal_var_880 = (int8_t *)0x0;
            local_var_878 = 0;
            CoreEngineDataBufferProcessor(&plocal_var_888,*(int32_t *)(param_1 + 0x10));
            if (0 < *(int *)(param_1 + 0x10)) {
              puVar6 = &system_buffer_ptr;
              if (*(void **)(param_1 + 8) != (void *)0x0) {
                puVar6 = *(void **)(param_1 + 8);
              }
// WARNING: Subroutine does not return
              memcpy(plocal_var_880,puVar6,(int64_t)(*(int *)(param_1 + 0x10) + 1));
            }
            if ((*(int64_t *)(param_1 + 8) != 0) &&
               (local_var_878 = 0, plocal_var_880 != (int8_t *)0x0)) {
              *plocal_var_880 = 0;
            }
            if (plocal_var_880[local_var_878 - 1] != '/') {
              uVar7 = local_var_878 + 1;
              CoreEngineDataBufferProcessor(&plocal_var_888,uVar7);
              *(int16_t *)(plocal_var_880 + local_var_878) = 0x2f;
              local_var_878 = uVar7;
            }
            lVar1 = -1;
            do {
              lVar8 = lVar1;
              lVar1 = lVar8 + 1;
            } while (acStack_368[lVar8 + 1] != '\0');
            iVar3 = (int)(lVar8 + 1);
            if (0 < iVar3) {
              CoreEngineDataBufferProcessor(&plocal_var_888,local_var_878 + iVar3);
// WARNING: Subroutine does not return
              memcpy(plocal_var_880 + local_var_878,acStack_368,(int64_t)((int)lVar8 + 2));
            }
            function_62d3b0(&plocal_var_888,param_2,param_3);
            plocal_var_888 = &system_data_buffer_ptr;
            if (plocal_var_880 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            plocal_var_880 = (int8_t *)0x0;
            local_var_870 = local_var_870 & 0xffffffff00000000;
            plocal_var_888 = &system_state_ptr;
          }
        }
        iVar3 = FindNextFileW(lVar5,abStack_7d8);
      } while (iVar3 != 0);
    }
    FindClose(lVar5);
    plocal_var_848 = &system_data_buffer_ptr;
    if (plocal_var_840 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_840 = (void *)0x0;
    local_var_830 = 0;
    plocal_var_848 = &system_state_ptr;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_8c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62d860(uint64_t param_1)
void function_62d860(uint64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  void *puVar4;
  int8_t stack_array_4f8 [32];
  int8_t *plocal_var_4d8;
  int32_t local_var_4d0;
  void *plocal_var_4c8;
  void *plocal_var_4c0;
  int32_t local_var_4b0;
  uint64_t local_var_4a8;
  int8_t stack_array_4a0 [56];
  void *aplocal_var_468 [68];
  int8_t stack_array_248 [560];
  uint64_t local_var_18;
  local_var_4a8 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4f8;
  uVar2 = SystemCore_EncryptionEngine(aplocal_var_468,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_4c8,uVar2);
  aplocal_var_468[0] = &system_state_ptr;
  local_var_4d0 = 0x118;
  plocal_var_4d8 = stack_array_248;
  MultiByteToWideChar(0xfde9,0,plocal_var_4c0,0xffffffff);
  iVar1 = _wstat64(stack_array_248,stack_array_4a0);
  if (iVar1 == -1) {
    puVar3 = (int32_t *)_errno();
    uVar2 = strerror(*puVar3);
    puVar3 = (int32_t *)_errno();
    puVar4 = &system_buffer_ptr;
    if (plocal_var_4c0 != (void *)0x0) {
      puVar4 = plocal_var_4c0;
    }
    SystemDataInitializer(&processed_var_4872_ptr,puVar4,*puVar3,uVar2);
  }
  plocal_var_4c8 = &system_data_buffer_ptr;
  if (plocal_var_4c0 == (void *)0x0) {
    plocal_var_4c0 = (void *)0x0;
    local_var_4b0 = 0;
    plocal_var_4c8 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_4f8);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_62d9a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  void *puVar3;
  uint64_t local_var_20;
  int64_t lStack_18;
  int8_t local_var_10;
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_1 + 8);
  }
  local_var_20 = 0;
  local_var_10 = 0;
  SystemCore_Validator(&local_var_20,puVar3,&processed_var_4880_ptr,param_4,0xfffffffffffffffe);
  if (lStack_18 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = _ftelli64(lStack_18);
    _fseeki64(lStack_18,0,2);
    uVar2 = _ftelli64(lStack_18);
    _fseeki64(lStack_18,uVar1,0);
    fclose(lStack_18);
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62da70(uint64_t param_1)
void function_62da70(uint64_t param_1)
{
  uint64_t uVar1;
  int8_t stack_array_4c8 [32];
  int8_t *plocal_var_4a8;
  int32_t local_var_4a0;
  void *plocal_var_498;
  int64_t lStack_490;
  int32_t local_var_480;
  uint64_t local_var_478;
  void *aplocal_var_468 [68];
  int8_t stack_array_248 [560];
  uint64_t local_var_18;
  local_var_478 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4c8;
  uVar1 = SystemCore_EncryptionEngine(aplocal_var_468,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_498,uVar1);
  aplocal_var_468[0] = &system_state_ptr;
  local_var_4a0 = 0x118;
  plocal_var_4a8 = stack_array_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  DeleteFileW(stack_array_248);
  plocal_var_498 = &system_data_buffer_ptr;
  if (lStack_490 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_490 = 0;
  local_var_480 = 0;
  plocal_var_498 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_4c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62db60(uint64_t param_1,uint64_t param_2)
void function_62db60(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  int8_t stack_array_728 [32];
  int8_t *plocal_var_708;
  int32_t local_var_700;
  void *plocal_var_6f8;
  int64_t lStack_6f0;
  int32_t local_var_6e0;
  void *plocal_var_6d8;
  int64_t lStack_6d0;
  int32_t local_var_6c0;
  uint64_t local_var_6b8;
  void *aplocal_var_6a8 [68];
  int8_t stack_array_488 [560];
  int8_t stack_array_258 [560];
  uint64_t local_var_28;
  local_var_6b8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_728;
  uVar2 = SystemCore_EncryptionEngine(aplocal_var_6a8,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_6d8,uVar2);
  aplocal_var_6a8[0] = &system_state_ptr;
  uVar2 = SystemCore_EncryptionEngine(aplocal_var_6a8,param_2);
  SystemCore_EncryptionEngine0(&plocal_var_6f8,uVar2);
  aplocal_var_6a8[0] = &system_state_ptr;
  local_var_700 = 0x118;
  plocal_var_708 = stack_array_488;
  MultiByteToWideChar(0xfde9,0,lStack_6d0,0xffffffff);
  local_var_700 = 0x118;
  plocal_var_708 = stack_array_258;
  MultiByteToWideChar(0xfde9,0,lStack_6f0,0xffffffff);
  iVar1 = CopyFileW(stack_array_258,stack_array_488,0);
  if (iVar1 == 0) {
    GetLastError();
  }
  plocal_var_6f8 = &system_data_buffer_ptr;
  if (lStack_6f0 == 0) {
    lStack_6f0 = 0;
    local_var_6e0 = 0;
    plocal_var_6f8 = &system_state_ptr;
    plocal_var_6d8 = &system_data_buffer_ptr;
    if (lStack_6d0 == 0) {
      lStack_6d0 = 0;
      local_var_6c0 = 0;
      plocal_var_6d8 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_728);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_62dce0(uint64_t param_1)
void function_62dce0(uint64_t param_1)
{
  uint64_t uVar1;
  int8_t stack_array_728 [32];
  int8_t *plocal_var_708;
  int32_t local_var_700;
  void *plocal_var_6f8;
  int64_t lStack_6f0;
  int32_t local_var_6e0;
  void *plocal_var_6d8;
  int64_t lStack_6d0;
  int32_t local_var_6c0;
  uint64_t local_var_6b8;
  void *aplocal_var_6a8 [68];
  int8_t stack_array_488 [560];
  int8_t stack_array_258 [560];
  uint64_t local_var_28;
  local_var_6b8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_728;
  uVar1 = SystemCore_EncryptionEngine(aplocal_var_6a8);
  SystemCore_EncryptionEngine0(&plocal_var_6d8,uVar1);
  aplocal_var_6a8[0] = &system_state_ptr;
  uVar1 = SystemCore_EncryptionEngine(aplocal_var_6a8,param_1);
  SystemCore_EncryptionEngine0(&plocal_var_6f8,uVar1);
  aplocal_var_6a8[0] = &system_state_ptr;
  local_var_700 = 0x118;
  plocal_var_708 = stack_array_488;
  MultiByteToWideChar(0xfde9,0,lStack_6d0,0xffffffff);
  local_var_700 = 0x118;
  plocal_var_708 = stack_array_258;
  MultiByteToWideChar(0xfde9,0,lStack_6f0,0xffffffff);
  MoveFileW(stack_array_258,stack_array_488);
  plocal_var_6f8 = &system_data_buffer_ptr;
  if (lStack_6f0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_6f0 = 0;
  local_var_6e0 = 0;
  plocal_var_6f8 = &system_state_ptr;
  plocal_var_6d8 = &system_data_buffer_ptr;
  if (lStack_6d0 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_6d0 = 0;
  local_var_6c0 = 0;
  plocal_var_6d8 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_728);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address