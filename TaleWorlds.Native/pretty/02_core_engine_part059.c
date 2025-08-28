#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part059.c - 5 个函数
// 函数: void function_095420(int64_t param_1)
void function_095420(int64_t param_1)
{
  int64_t *plVar1;
  plVar1 = *(int64_t **)(param_1 + 0x10);
  *(uint64_t *)(param_1 + 0x10) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x18);
  *(uint64_t *)(param_1 + 0x18) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_095480(void)
{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  void *plocal_var_50;
  byte *pbStack_48;
  int iStack_40;
  int32_t local_var_38;
  lVar14 = core_system_data_ui;
  puVar11 = (uint64_t *)(core_system_data_ui + 0x40);
  SystemCore_EncryptionEngine0(&plocal_var_50);
  puVar13 = *(uint64_t **)(lVar14 + 0x50);
  puVar9 = puVar11;
  if (puVar13 != (uint64_t *)0x0) {
    do {
      if (iStack_40 == 0) {
        bVar3 = false;
        puVar12 = (uint64_t *)puVar13[1];
      }
      else {
        if (*(int *)(puVar13 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar4 = pbStack_48;
          do {
            uVar7 = (uint)pbVar4[puVar13[5] - (int64_t)pbStack_48];
            iVar8 = *pbVar4 - uVar7;
            if (*pbVar4 != uVar7) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar7 != 0);
          bVar3 = 0 < iVar8;
          if (iVar8 < 1) {
            puVar12 = (uint64_t *)puVar13[1];
            goto LAB_180095527;
          }
        }
        puVar12 = (uint64_t *)*puVar13;
      }
LAB_180095527:
      puVar10 = puVar13;
      if (bVar3) {
        puVar10 = puVar9;
      }
      puVar9 = puVar10;
      puVar13 = puVar12;
    } while (puVar12 != (uint64_t *)0x0);
    puVar13 = (uint64_t *)0x0;
    if (puVar10 != puVar11) {
      if (*(int *)(puVar10 + 6) == 0) goto LAB_18009556a;
      if (iStack_40 != 0) {
        pbVar4 = (byte *)puVar10[5];
        lVar14 = (int64_t)pbStack_48 - (int64_t)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar7 = (uint)pbVar4[lVar14];
          if (bVar2 != uVar7) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar2 - uVar7) < 1) goto LAB_18009556a;
      }
    }
  }
  puVar10 = puVar11;
LAB_18009556a:
  plocal_var_50 = &system_data_buffer_ptr;
  if (pbStack_48 != (byte *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  pbStack_48 = (byte *)0x0;
  local_var_38 = 0;
  plocal_var_50 = &system_state_ptr;
  if (puVar10 == puVar11) {
    return 0;
  }
  pbVar4 = (byte *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,CONCAT71((int7)((uint64_t)puVar13 >> 8),0x13))
  ;
  *pbVar4 = 0;
  CoreMemoryPoolCleaner(pbVar4);
  pbVar4[0] = 0x41;
  pbVar4[1] = 0x6c;
  pbVar4[2] = 0x6c;
  pbVar4[3] = 0;
  puVar11 = puVar10 + 8;
  puVar13 = (uint64_t *)puVar10[10];
  if ((uint64_t *)puVar10[10] != (uint64_t *)0x0) {
    do {
      if (*(int *)(puVar13 + 6) == 0) {
        bVar3 = true;
LAB_180095648:
        puVar9 = (uint64_t *)*puVar13;
      }
      else {
        pbVar5 = pbVar4;
        do {
          uVar7 = (uint)pbVar5[puVar13[5] - (int64_t)pbVar4];
          iVar8 = *pbVar5 - uVar7;
          if (*pbVar5 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        bVar3 = 0 < iVar8;
        if (0 < iVar8) goto LAB_180095648;
        puVar9 = (uint64_t *)puVar13[1];
      }
      if (bVar3) {
        puVar13 = puVar11;
      }
      puVar11 = puVar13;
      puVar13 = puVar9;
    } while (puVar9 != (uint64_t *)0x0);
    if ((puVar11 != puVar10 + 8) && (*(int *)(puVar11 + 6) != 0)) {
      pcVar6 = (char *)puVar11[5];
      lVar14 = (int64_t)pbVar4 - (int64_t)pcVar6;
      do {
        pcVar1 = pcVar6 + lVar14;
        if (*pcVar6 != *pcVar1) break;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
    }
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(pbVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_095720(void)
{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  void *plocal_var_50;
  byte *pbStack_48;
  int iStack_40;
  int32_t local_var_38;
  lVar14 = core_system_data_ui;
  puVar11 = (uint64_t *)(core_system_data_ui + 0x40);
  SystemCore_EncryptionEngine0(&plocal_var_50);
  puVar13 = *(uint64_t **)(lVar14 + 0x50);
  puVar9 = puVar11;
  if (puVar13 != (uint64_t *)0x0) {
    do {
      if (iStack_40 == 0) {
        bVar3 = false;
        puVar12 = (uint64_t *)puVar13[1];
      }
      else {
        if (*(int *)(puVar13 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar4 = pbStack_48;
          do {
            uVar7 = (uint)pbVar4[puVar13[5] - (int64_t)pbStack_48];
            iVar8 = *pbVar4 - uVar7;
            if (*pbVar4 != uVar7) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar7 != 0);
          bVar3 = 0 < iVar8;
          if (iVar8 < 1) {
            puVar12 = (uint64_t *)puVar13[1];
            goto LAB_1800957c7;
          }
        }
        puVar12 = (uint64_t *)*puVar13;
      }
LAB_1800957c7:
      puVar10 = puVar13;
      if (bVar3) {
        puVar10 = puVar9;
      }
      puVar9 = puVar10;
      puVar13 = puVar12;
    } while (puVar12 != (uint64_t *)0x0);
    puVar13 = (uint64_t *)0x0;
    if (puVar10 != puVar11) {
      if (*(int *)(puVar10 + 6) == 0) goto LAB_18009580a;
      if (iStack_40 != 0) {
        pbVar4 = (byte *)puVar10[5];
        lVar14 = (int64_t)pbStack_48 - (int64_t)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar7 = (uint)pbVar4[lVar14];
          if (bVar2 != uVar7) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar2 - uVar7) < 1) goto LAB_18009580a;
      }
    }
  }
  puVar10 = puVar11;
LAB_18009580a:
  plocal_var_50 = &system_data_buffer_ptr;
  if (pbStack_48 != (byte *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  pbStack_48 = (byte *)0x0;
  local_var_38 = 0;
  plocal_var_50 = &system_state_ptr;
  if (puVar10 == puVar11) {
    return 0;
  }
  pbVar4 = (byte *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,CONCAT71((int7)((uint64_t)puVar13 >> 8),0x13))
  ;
  *pbVar4 = 0;
  CoreMemoryPoolCleaner(pbVar4);
  pbVar4[0] = 0x41;
  pbVar4[1] = 0x6c;
  pbVar4[2] = 0x6c;
  pbVar4[3] = 0;
  puVar11 = puVar10 + 8;
  puVar13 = (uint64_t *)puVar10[10];
  if ((uint64_t *)puVar10[10] != (uint64_t *)0x0) {
    do {
      if (*(int *)(puVar13 + 6) == 0) {
        bVar3 = true;
LAB_1800958e8:
        puVar9 = (uint64_t *)*puVar13;
      }
      else {
        pbVar5 = pbVar4;
        do {
          uVar7 = (uint)pbVar5[puVar13[5] - (int64_t)pbVar4];
          iVar8 = *pbVar5 - uVar7;
          if (*pbVar5 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        bVar3 = 0 < iVar8;
        if (0 < iVar8) goto LAB_1800958e8;
        puVar9 = (uint64_t *)puVar13[1];
      }
      if (bVar3) {
        puVar13 = puVar11;
      }
      puVar11 = puVar13;
      puVar13 = puVar9;
    } while (puVar9 != (uint64_t *)0x0);
    if ((puVar11 != puVar10 + 8) && (*(int *)(puVar11 + 6) != 0)) {
      pcVar6 = (char *)puVar11[5];
      lVar14 = (int64_t)pbVar4 - (int64_t)pcVar6;
      do {
        pcVar1 = pcVar6 + lVar14;
        if (*pcVar6 != *pcVar1) break;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
    }
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(pbVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_095bf0(uint64_t param_1,int32_t param_2,int32_t param_3)
void function_095bf0(uint64_t param_1,int32_t param_2,int32_t param_3)
{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  puVar1 = core_system_data_ui;
  uVar6 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock(0x180c91970);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uVar3 = function_124730();
  SYSTEM_DATA_MANAGER_A = uVar3;
  function_290fd0(0);
  uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe8,8,3,uVar6);
  uVar6 = function_095350(uVar6,uVar3);
  *puVar1 = uVar6;
  uVar6 = function_124730();
  SYSTEM_DATA_MANAGER_A = uVar6;
  function_290fd0(0);
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe8,8,3);
  uVar6 = function_095350(uVar3,uVar6);
  puVar1[1] = uVar6;
  function_098ae0(*puVar1,param_2,param_3,function_098980);
  function_098ae0(puVar1[1],param_2,param_3,0);
  SYSTEM_DATA_MANAGER_A = *(uint64_t *)*puVar1;
  function_080ca0(puVar1 + 0xf,0x96);
  puVar5 = (int32_t *)puVar1[0xf];
  uVar4 = (uint64_t)((int64_t)puVar1[0x10] + (3 - (int64_t)puVar5)) >> 2;
  if ((int32_t *)puVar1[0x10] < puVar5) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0x3d072b02;
      puVar5 = puVar5 + 1;
    }
  }
  function_080ca0(puVar1 + 0x13,0x96);
  puVar5 = (int32_t *)puVar1[0x13];
  uVar4 = (uint64_t)((int64_t)puVar1[0x14] + (3 - (int64_t)puVar5)) >> 2;
  if ((int32_t *)puVar1[0x14] < puVar5) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0x3c83126f;
      puVar5 = puVar5 + 1;
    }
  }
  *(int8_t *)(puVar1 + 7) = 1;
  iVar2 = _Mtx_unlock(0x180c91970);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_095da0(uint64_t param_1,int64_t param_2,int64_t param_3,char param_4)
void function_095da0(uint64_t param_1,int64_t param_2,int64_t param_3,char param_4)
{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  char *pcVar7;
  int16_t *puVar8;
  int32_t *puVar9;
  void *puVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int iVar13;
  int16_t *puVar14;
  float fVar15;
  int32_t stack_special_x_18;
  int32_t stack_special_x_1c;
  char acStackX_20 [8];
  acStackX_20[0] = param_4;
  pfVar6 = (float *)function_09b3a0(param_3 + 0xc0,param_2 + 0x20);
  fVar15 = *pfVar6;
  Function_5557a7fb();
  iVar13 = 0;
  uVar11 = 0;
  if ((*(int64_t *)(param_2 + 0x50) - *(int64_t *)(param_2 + 0x48) & 0xfffffffffffffff8U) == 0) {
    uVar11 = 0x100;
  }
  puVar10 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar10 = *(void **)(param_2 + 8);
  }
  cVar2 = function_118a80((double)(fVar15 * 1000.0),uVar11,&ui_system_data_1872_ptr,puVar10,
                        (double)(fVar15 * 1000.0));
  function_134130();
  pcVar7 = (char *)function_09b960(param_3 + 0xf0,param_2 + 0x20);
  acStackX_20[0] = *pcVar7;
  puVar8 = (int16_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar8 = 0;
  uVar4 = CoreMemoryPoolCleaner(puVar8);
  *puVar8 = 0x2323;
  *(int8_t *)(puVar8 + 1) = 0;
  iVar5 = *(int *)(param_2 + 0x30);
  if (0 < iVar5) {
    if ((iVar5 != -2) && (uVar4 < iVar5 + 3U)) {
      puVar8 = (int16_t *)DataValidator(system_memory_pool_ptr,puVar8,iVar5 + 3U,0x10,0x13);
      CoreMemoryPoolCleaner(puVar8);
      iVar5 = *(int *)(param_2 + 0x30);
    }
// WARNING: Subroutine does not return
    memcpy(puVar8 + 1,*(uint64_t *)(param_2 + 0x28),(int64_t)(iVar5 + 1));
  }
  puVar14 = (int16_t *)&system_buffer_ptr;
  if (puVar8 != (int16_t *)0x0) {
    puVar14 = puVar8;
  }
  cVar3 = function_111070(puVar14,acStackX_20);
  cVar1 = acStackX_20[0];
  if (cVar3 != '\0') {
    pcVar7 = (char *)function_09b960(param_3 + 0xf0,param_2 + 0x20);
    *pcVar7 = cVar1;
  }
  if (cVar1 != '\0') {
    Function_fca4e9a0(0,0xbf800000);
  }
  if (puVar8 != (int16_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar8);
  }
  function_134130();
  puVar9 = (int32_t *)function_09b3a0(param_3 + 0x90,param_2 + 0x20);
  stack_special_x_18 = 0xbf800000;
  stack_special_x_1c = 0;
  function_111c30(*puVar9,&stack_special_x_18);
  function_134130();
  if (cVar2 != '\0') {
    if (*(int64_t *)(param_2 + 0x50) - *(int64_t *)(param_2 + 0x48) >> 3 != 0) {
      lVar12 = 0;
      do {
        function_095da0(param_1,*(uint64_t *)(lVar12 + *(int64_t *)(param_2 + 0x48)),param_3,1);
        iVar13 = iVar13 + 1;
        lVar12 = lVar12 + 8;
      } while ((uint64_t)(int64_t)iVar13 <
               (uint64_t)(*(int64_t *)(param_2 + 0x50) - *(int64_t *)(param_2 + 0x48) >> 3));
    }
    Function_c79a029a();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_096040(void)
void function_096040(void)
{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  void *plocal_var_30;
  byte *pbStack_28;
  int iStack_20;
  int32_t local_var_18;
  lVar11 = core_system_data_ui;
  puVar8 = (uint64_t *)(core_system_data_ui + 0x40);
  SystemCore_EncryptionEngine0(&plocal_var_30);
  puVar9 = *(uint64_t **)(lVar11 + 0x50);
  puVar6 = puVar8;
  if (puVar9 != (uint64_t *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar2 = false;
        puVar10 = (uint64_t *)puVar9[1];
      }
      else {
        if (*(int *)(puVar9 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar4 = pbStack_28;
          do {
            uVar5 = (uint)pbVar4[puVar9[5] - (int64_t)pbStack_28];
            iVar3 = *pbVar4 - uVar5;
            if (*pbVar4 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar3;
          if (iVar3 < 1) {
            puVar10 = (uint64_t *)puVar9[1];
            goto LAB_1800960d8;
          }
        }
        puVar10 = (uint64_t *)*puVar9;
      }
LAB_1800960d8:
      puVar7 = puVar9;
      if (bVar2) {
        puVar7 = puVar6;
      }
      puVar6 = puVar7;
      puVar9 = puVar10;
    } while (puVar10 != (uint64_t *)0x0);
    if (puVar7 != puVar8) {
      if (*(int *)(puVar7 + 6) == 0) goto LAB_18009611a;
      if (iStack_20 != 0) {
        pbVar4 = (byte *)puVar7[5];
        lVar11 = (int64_t)pbStack_28 - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar11];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) goto LAB_18009611a;
      }
    }
  }
  puVar7 = puVar8;
LAB_18009611a:
  plocal_var_30 = &system_data_buffer_ptr;
  if (pbStack_28 == (byte *)0x0) {
    pbStack_28 = (byte *)0x0;
    local_var_18 = 0;
    plocal_var_30 = &system_state_ptr;
    if (puVar7 != puVar8) {
      iVar3 = _Mtx_lock(puVar7 + 0x2d);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      puVar8 = puVar7 + 0x1a;
      RenderingSystem_CameraSystem(puVar8,puVar7[0x1c]);
      *puVar8 = puVar8;
      puVar7[0x1b] = puVar8;
      puVar7[0x1c] = 0;
      *(int8_t *)(puVar7 + 0x1d) = 0;
      puVar7[0x1e] = 0;
      puVar8 = puVar7 + 8;
      function_0593f0(puVar8,puVar7[10]);
      *puVar8 = puVar8;
      puVar7[9] = puVar8;
      puVar7[10] = 0;
      *(int8_t *)(puVar7 + 0xb) = 0;
      puVar7[0xc] = 0;
      puVar8 = puVar7 + 0x14;
      function_0593f0(puVar8,puVar7[0x16]);
      *puVar8 = puVar8;
      puVar7[0x15] = puVar8;
      puVar7[0x16] = 0;
      *(int8_t *)(puVar7 + 0x17) = 0;
      puVar7[0x18] = 0;
      puVar8 = puVar7 + 0xe;
      function_058710(puVar8,puVar7[0x10]);
      *puVar8 = puVar8;
      puVar7[0xf] = puVar8;
      puVar7[0x10] = 0;
      *(int8_t *)(puVar7 + 0x11) = 0;
      puVar7[0x12] = 0;
      iVar3 = _Mtx_unlock(puVar7 + 0x2d);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
    }
    return;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_096240(uint64_t param_1,int64_t param_2,uint64_t *param_3)
void function_096240(uint64_t param_1,int64_t param_2,uint64_t *param_3)
{
  byte bVar1;
  int64_t *plVar2;
  bool bVar3;
  short sVar4;
  int64_t *plVar5;
  int8_t *puVar6;
  float *pfVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  int64_t *plVar13;
  byte *pbVar14;
  uint64_t *puVar15;
  uint uVar16;
  uint64_t uVar17;
  int iVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint uVar23;
  uint64_t uVar24;
  int64_t *plVar25;
  float extraout_XMM0_Da;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  int8_t astack_special_x_10 [8];
  uint64_t *pstack_special_x_18;
  int8_t astack_special_x_20 [8];
  void *plocal_var_b0;
  int8_t *plocal_var_a8;
  uint local_var_a0;
  uint64_t local_var_98;
  uVar17 = 0;
  uVar16 = 0;
  uVar22 = uVar17;
  uVar24 = uVar17;
  pstack_special_x_18 = param_3;
  if (*(int64_t *)(param_2 + 0x50) - *(int64_t *)(param_2 + 0x48) >> 3 != 0) {
    do {
      plocal_var_b0 = &system_data_buffer_ptr;
      local_var_98 = 0;
      plocal_var_a8 = (int8_t *)0x0;
      local_var_a0 = 0;
      CoreMemoryPoolProcessor(&plocal_var_b0,*(int32_t *)(param_2 + 0x30));
      if (*(int *)(param_2 + 0x30) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_a8,*(uint64_t *)(param_2 + 0x28),*(int *)(param_2 + 0x30) + 1);
      }
      if (*(int64_t *)(param_2 + 0x28) != 0) {
        local_var_a0 = 0;
        if (plocal_var_a8 != (int8_t *)0x0) {
          *plocal_var_a8 = 0;
        }
        local_var_98 = local_var_98 & 0xffffffff;
      }
      uVar23 = local_var_a0 + 2;
      CoreMemoryPoolProcessor(&plocal_var_b0,(uint64_t)uVar23);
      *(int16_t *)(plocal_var_a8 + local_var_a0) = 0x2f2f;
      *(int8_t *)((int64_t)(plocal_var_a8 + local_var_a0) + 2) = 0;
      lVar11 = *(int64_t *)(uVar24 + *(int64_t *)(param_2 + 0x48));
      local_var_a0 = uVar23;
      if (0 < *(int *)(lVar11 + 0x10)) {
        CoreMemoryPoolProcessor(&plocal_var_b0,uVar23 + *(int *)(lVar11 + 0x10));
// WARNING: Subroutine does not return
        memcpy(plocal_var_a8 + local_var_a0,*(uint64_t *)(lVar11 + 8),
               (int64_t)(*(int *)(lVar11 + 0x10) + 1));
      }
      lVar11 = *(int64_t *)(uVar24 + *(int64_t *)(param_2 + 0x48));
      if (plocal_var_a8 != (int8_t *)0x0) {
        CoreMemoryPoolProcessor(lVar11 + 0x20,uVar23);
      }
      if (uVar23 != 0) {
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar11 + 0x28),plocal_var_a8,uVar23);
      }
      *(int32_t *)(lVar11 + 0x30) = 0;
      if (*(int64_t *)(lVar11 + 0x28) != 0) {
        *(int8_t *)((uint64_t)uVar23 + *(int64_t *)(lVar11 + 0x28)) = 0;
      }
      *(uint *)(lVar11 + 0x3c) = local_var_98._4_4_;
      plocal_var_b0 = &system_data_buffer_ptr;
      if (plocal_var_a8 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(plocal_var_a8,plocal_var_a8);
      }
      plocal_var_a8 = (int8_t *)0x0;
      local_var_98 = (uint64_t)local_var_98._4_4_ << 0x20;
      plocal_var_b0 = &system_state_ptr;
      uVar23 = (int)uVar22 + 1;
      uVar22 = (uint64_t)uVar23;
      uVar24 = uVar24 + 8;
    } while ((uint64_t)(int64_t)(int)uVar23 <
             (uint64_t)(*(int64_t *)(param_2 + 0x50) - *(int64_t *)(param_2 + 0x48) >> 3));
  }
  puVar12 = pstack_special_x_18;
  if (*(char *)((int64_t)pstack_special_x_18 + 0x124) != '\x01') {
    plVar5 = *(int64_t **)(param_2 + 0x48);
    uVar22 = uVar17;
    uVar24 = uVar17;
    if (*(int64_t *)(param_2 + 0x50) - (int64_t)plVar5 >> 3 != 0) {
      do {
        function_096240(param_1,*(uint64_t *)(uVar22 + *(int64_t *)(param_2 + 0x48)),puVar12);
        uVar23 = (int)uVar24 + 1;
        plVar5 = *(int64_t **)(param_2 + 0x48);
        uVar22 = uVar22 + 8;
        uVar24 = (uint64_t)uVar23;
      } while ((uint64_t)(int64_t)(int)uVar23 <
               (uint64_t)(*(int64_t *)(param_2 + 0x50) - (int64_t)plVar5 >> 3));
    }
    if ((*(char *)((int64_t)puVar12 + 0x125) != '\0') &&
       (plVar2 = *(int64_t **)(param_2 + 0x50), plVar5 != plVar2)) {
      lVar21 = (int64_t)plVar2 - (int64_t)plVar5 >> 3;
      for (lVar11 = lVar21; lVar11 != 0; lVar11 = lVar11 >> 1) {
        uVar16 = (int)uVar17 + 1;
        uVar17 = (uint64_t)uVar16;
      }
      function_09d3a0(plVar5,plVar2,(int64_t)(int)(uVar16 - 1) * 2,puVar12);
      if (lVar21 < 0x1d) {
        function_09d140(plVar5,plVar2,puVar12);
      }
      else {
        plVar25 = plVar5 + 0x1c;
        function_09d140(plVar5,plVar25,puVar12);
        if (plVar25 != plVar2) {
LAB_180096990:
          lVar11 = *plVar25;
          plVar5 = plVar25;
          do {
            lVar21 = plVar5[-1];
            > HighFreq_AnimationSystem1(puVar12 + 0x12,astack_special_x_10,lVar11 + 0x20);
            plVar13 = (int64_t *)> HighFreq_AnimationSystem1(puVar12 + 0x12,astack_special_x_20,lVar21 + 0x20);
            if (extraout_XMM0_Da == *(float *)(*plVar13 + 0x40)) {
              if (*(int *)(lVar11 + 0x30) == 0) {
                bVar3 = false;
              }
              else if (*(int *)(lVar21 + 0x30) == 0) {
                bVar3 = true;
              }
              else {
                pbVar14 = *(byte **)(lVar11 + 0x28);
                lVar19 = *(int64_t *)(lVar21 + 0x28) - (int64_t)pbVar14;
                do {
                  bVar1 = *pbVar14;
                  uVar16 = (uint)pbVar14[lVar19];
                  if (bVar1 != uVar16) break;
                  pbVar14 = pbVar14 + 1;
                } while (uVar16 != 0);
                bVar3 = 0 < (int)(bVar1 - uVar16);
              }
            }
            else {
              bVar3 = *(float *)(*plVar13 + 0x40) < extraout_XMM0_Da;
            }
            if (!bVar3) goto LAB_180096a34;
            *plVar5 = lVar21;
            plVar5 = plVar5 + -1;
          } while( true );
        }
      }
    }
    return;
  }
  puVar8 = pstack_special_x_18 + 0x1e;
  lVar11 = param_2 + 0x20;
  plVar5 = (int64_t *)> HighFreq_AnimationSystem1(puVar8,&pstack_special_x_18,lVar11);
  if ((uint64_t *)*plVar5 == puVar8) {
    puVar6 = (int8_t *)function_09b960(puVar8,lVar11);
    *puVar6 = 0;
  }
  puVar8 = puVar12 + 0x18;
  > HighFreq_AnimationSystem1(puVar8,&pstack_special_x_18,lVar11);
  dVar27 = 0.0;
  if (pstack_special_x_18 == puVar8) {
    fVar29 = (float)*(double *)(param_2 + 0x40);
    pfVar7 = (float *)function_09b3a0(puVar8,lVar11);
  }
  else {
    fVar29 = *(float *)(pstack_special_x_18 + 8);
    pstack_special_x_18 = (uint64_t *)CONCAT44(pstack_special_x_18._4_4_,fVar29);
    sVar4 = _fdtest(&pstack_special_x_18);
    if (sVar4 == 2) {
      fVar29 = 0.0;
    }
    pstack_special_x_18 = *(uint64_t **)(param_2 + 0x40);
    sVar4 = _dtest(&pstack_special_x_18);
    if (sVar4 == 2) {
      *(uint64_t *)(param_2 + 0x40) = 0;
      dVar26 = 0.0;
    }
    else {
      dVar26 = *(double *)(param_2 + 0x40);
    }
    fVar28 = fVar29;
    if (*(char *)((int64_t)puVar12 + 0x124) != '\0') {
      fVar28 = (float)dVar26;
    }
    pstack_special_x_18 = (uint64_t *)CONCAT44(pstack_special_x_18._4_4_,fVar28);
    sVar4 = _fdtest(&pstack_special_x_18);
    if (sVar4 == 2) {
      fVar28 = fVar29;
    }
    pfVar7 = (float *)function_09b3a0(puVar8,lVar11);
    fVar29 = (fVar28 - fVar29) * 0.02 + fVar29;
  }
  *pfVar7 = fVar29;
  puVar8 = puVar12 + 0x12;
  if ((uint64_t *)puVar12[0x13] == puVar8) {
    if (0.0 < *(float *)(puVar12 + 0x24)) {
      dVar27 = *(double *)(param_2 + 0x40) / (double)*(float *)(puVar12 + 0x24);
    }
    fVar29 = (float)dVar27;
  }
  else {
    pfVar7 = (float *)function_09b3a0(puVar8,lVar11);
    fVar29 = *pfVar7;
    if ((*(char *)((int64_t)puVar12 + 0x124) == '\0') || (*(float *)(puVar12 + 0x24) == 0.0)) {
      dVar27 = (double)fVar29;
    }
    else {
      dVar27 = *(double *)(param_2 + 0x40) / (double)*(float *)(puVar12 + 0x24);
    }
    fVar29 = ((float)dVar27 - fVar29) * 0.02 + fVar29;
  }
  pfVar7 = (float *)function_09b3a0(puVar8,lVar11);
  *pfVar7 = fVar29;
  puVar8 = puVar12;
  if ((uint64_t *)puVar12[2] != (uint64_t *)0x0) {
    puVar20 = (uint64_t *)puVar12[2];
    do {
      if (*(int *)(param_2 + 0x30) == 0) {
        bVar3 = false;
        puVar15 = (uint64_t *)puVar20[1];
      }
      else {
        if (*(int *)(puVar20 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar14 = *(byte **)(param_2 + 0x28);
          lVar21 = puVar20[5] - (int64_t)pbVar14;
          do {
            uVar16 = (uint)pbVar14[lVar21];
            iVar18 = *pbVar14 - uVar16;
            if (*pbVar14 != uVar16) break;
            pbVar14 = pbVar14 + 1;
          } while (uVar16 != 0);
          bVar3 = 0 < iVar18;
          if (iVar18 < 1) {
            puVar15 = (uint64_t *)puVar20[1];
            goto LAB_18009662b;
          }
        }
        puVar15 = (uint64_t *)*puVar20;
      }
LAB_18009662b:
      if (bVar3) {
        puVar20 = puVar8;
      }
      puVar8 = puVar20;
      puVar20 = puVar15;
    } while (puVar15 != (uint64_t *)0x0);
  }
  if (puVar8 == puVar12) {
LAB_18009667a:
    puVar8 = (uint64_t *)function_09bf40(puVar12,&pstack_special_x_18);
    puVar8 = (uint64_t *)*puVar8;
  }
  else if (*(int *)(puVar8 + 6) != 0) {
    if (*(int *)(param_2 + 0x30) != 0) {
      pbVar14 = (byte *)puVar8[5];
      lVar21 = *(int64_t *)(param_2 + 0x28) - (int64_t)pbVar14;
      do {
        bVar1 = *pbVar14;
        uVar16 = (uint)pbVar14[lVar21];
        if (bVar1 != uVar16) break;
        pbVar14 = pbVar14 + 1;
      } while (uVar16 != 0);
      if ((int)(bVar1 - uVar16) < 1) goto LAB_180096691;
    }
    goto LAB_18009667a;
  }
LAB_180096691:
  puVar20 = puVar8 + 8;
  function_09b5a0(puVar12 + 6,lVar11);
  puVar9 = (uint64_t *)function_09b780(puVar12 + 0xc,lVar11);
  dVar27 = *(double *)(param_2 + 0x40);
  puVar15 = (uint64_t *)puVar8[10];
  puVar10 = puVar20;
  if (puVar15 != (uint64_t *)0x0) {
    do {
      if (*(int *)(puVar15 + 4) < *(int *)(puVar12 + 0x2f)) {
        puVar15 = (uint64_t *)*puVar15;
      }
      else {
        puVar10 = puVar15;
        puVar15 = (uint64_t *)puVar15[1];
      }
    } while (puVar15 != (uint64_t *)0x0);
  }
  if ((puVar10 == puVar20) || (*(int *)(puVar12 + 0x2f) < *(int *)(puVar10 + 4))) {
    puVar10 = (uint64_t *)function_09c5b0(puVar20,astack_special_x_10);
    puVar10 = (uint64_t *)*puVar10;
  }
  *(float *)((int64_t)puVar10 + 0x24) = (float)dVar27;
  if (0x96 < (uint64_t)puVar8[0xc]) {
    lVar11 = puVar8[9];
    puVar8[0xc] = puVar8[0xc] - 1;
    Function_7bfb2422(lVar11);
    RenderingSystem_BufferHandler(lVar11,puVar20);
    if (lVar11 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar11);
    }
  }
  lVar11 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(puVar9 + 5));
  dVar27 = *(double *)(param_2 + 0x40);
  *(float *)(lVar11 + 0x20) = (float)dVar27;
  bVar3 = true;
  puVar12 = (uint64_t *)puVar9[2];
  puVar8 = puVar9;
  while (puVar12 != (uint64_t *)0x0) {
    bVar3 = (float)dVar27 < *(float *)(puVar12 + 4);
    puVar8 = puVar12;
    if (bVar3) {
      puVar12 = (uint64_t *)puVar12[1];
    }
    else {
      puVar12 = (uint64_t *)*puVar12;
    }
  }
  puVar12 = puVar8;
  if (bVar3) {
    if (puVar8 == (uint64_t *)puVar9[1]) goto LAB_1800967cd;
    puVar12 = (uint64_t *)Function_e2d50782(puVar8);
  }
  if (*(float *)(lVar11 + 0x20) < *(float *)(puVar12 + 4) ||
      *(float *)(lVar11 + 0x20) == *(float *)(puVar12 + 4)) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar11);
  }
LAB_1800967cd:
  if ((puVar8 == puVar9) ||
     (uVar22 = 1,
     *(float *)(lVar11 + 0x20) <= *(float *)(puVar8 + 4) &&
     *(float *)(puVar8 + 4) != *(float *)(lVar11 + 0x20))) {
    uVar22 = uVar17;
  }
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar11,puVar8,puVar9,uVar22);
LAB_180096a34:
  *plVar5 = lVar11;
  plVar25 = plVar25 + 1;
  if (plVar25 == plVar2) {
    return;
  }
  goto LAB_180096990;
}
bool CoreEngine_ConfigValidator(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  byte bVar1;
  int64_t *plVar2;
  byte *pbVar3;
  uint uVar4;
  int64_t lVar5;
  float extraout_XMM0_Da;
  int8_t astack_special_x_8 [8];
  lVar5 = *param_1;
  > HighFreq_AnimationSystem1(lVar5 + 0x90,astack_special_x_8,param_2 + 0x20);
  plVar2 = (int64_t *)> HighFreq_AnimationSystem1(lVar5 + 0x90,astack_special_x_8,param_3 + 0x20);
  if (extraout_XMM0_Da != *(float *)(*plVar2 + 0x40)) {
    return *(float *)(*plVar2 + 0x40) < extraout_XMM0_Da;
  }
  if (*(int *)(param_2 + 0x30) == 0) {
    return false;
  }
  if (*(int *)(param_3 + 0x30) == 0) {
    return true;
  }
  pbVar3 = *(byte **)(param_2 + 0x28);
  lVar5 = *(int64_t *)(param_3 + 0x28) - (int64_t)pbVar3;
  do {
    bVar1 = *pbVar3;
    uVar4 = (uint)pbVar3[lVar5];
    if (bVar1 != uVar4) break;
    pbVar3 = pbVar3 + 1;
  } while (uVar4 != 0);
  return 0 < (int)(bVar1 - uVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address