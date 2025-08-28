#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part206.c - 12 个函数
// 函数: void function_389000(int64_t *param_1)
void function_389000(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uVar3 = 0;
  uVar5 = uVar3;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar5 + *param_1);
      *(uint64_t *)(uVar5 + *param_1) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar4;
      uVar5 = uVar5 + 8;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(param_1[1] - *param_1 >> 3));
  }
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
int64_t * function_389090(int64_t *param_1,int64_t *param_2,int64_t param_3)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  byte *pbVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  iVar10 = 0;
  lVar4 = *param_1;
  uVar8 = param_1[1] - lVar4 >> 3;
  if (uVar8 != 0) {
    iVar2 = *(int *)(param_3 + 0x10);
    lVar11 = 0;
    do {
      iVar3 = *(int *)(*(int64_t *)(lVar11 + lVar4) + 0x88);
      iVar7 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar6 = *(byte **)(*(int64_t *)(lVar11 + lVar4) + 0x80);
          lVar9 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar6;
          do {
            pbVar1 = pbVar6 + lVar9;
            iVar7 = (uint)*pbVar6 - (uint)*pbVar1;
            if (iVar7 != 0) break;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18038911f:
        if (iVar7 == 0) {
          plVar5 = *(int64_t **)(lVar4 + (int64_t)iVar10 * 8);
          *param_2 = (int64_t)plVar5;
          if (plVar5 == (int64_t *)0x0) {
            return param_2;
          }
          (**(code **)(*plVar5 + 0x28))();
          return param_2;
        }
      }
      else if (iVar3 == 0) goto LAB_18038911f;
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((uint64_t)(int64_t)iVar10 < uVar8);
  }
  *param_2 = 0;
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_389170(int64_t *param_1,int64_t param_2)
void function_389170(int64_t *param_1,int64_t param_2)
{
  char *pcVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  char *pcVar6;
  char *pcVar7;
  int64_t lVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  char *pcVar11;
  char *pcVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int32_t local_var_80;
  int32_t local_var_7c;
  uint64_t *plocal_var_70;
  uint64_t *plocal_var_68;
  uint64_t *plocal_var_60;
  int32_t local_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t **pplocal_var_48;
  void *plocal_var_40;
  code *pcStack_38;
  uVar14 = 0xfffffffffffffffe;
  plocal_var_70 = (uint64_t *)0x0;
  plocal_var_68 = (uint64_t *)0x0;
  plocal_var_60 = (uint64_t *)0x0;
  local_var_58 = 3;
  pcVar11 = "path";
  do {
    pcVar12 = pcVar11;
    pcVar11 = pcVar12 + 1;
  } while (*pcVar11 != '\0');
  pcVar12 = pcVar12 + -0x180a1022b;
  for (pcVar11 = *(char **)(param_2 + 0x30); pcVar1 = (char *)0x0, pcVar11 != (char *)0x0;
      pcVar11 = *(char **)(pcVar11 + 0x58)) {
    pcVar6 = *(char **)pcVar11;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x180d48d24;
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7 = *(char **)(pcVar11 + 0x10);
    }
    if (pcVar7 == pcVar12) {
      pcVar7 = pcVar7 + (int64_t)pcVar6;
      pcVar1 = pcVar11;
      if (pcVar7 <= pcVar6) break;
      lVar8 = (int64_t)&rendering_buffer_2796_ptr - (int64_t)pcVar6;
      while (*pcVar6 == pcVar6[lVar8]) {
        pcVar6 = pcVar6 + 1;
        if (pcVar7 <= pcVar6) goto joined_r0x000180389222;
      }
    }
  }
joined_r0x000180389222:
  do {
    if (pcVar1 == (char *)0x0) {
      pplocal_var_48 = &plocal_var_70;
      plocal_var_40 = &processed_var_9632_ptr;
      pcStack_38 = function_3896b0;
      local_var_80 = SUB84(param_1,0);
      local_var_7c = (int32_t)((uint64_t)param_1 >> 0x20);
      local_var_50 = local_var_80;
      local_var_4c = local_var_7c;
      SystemCore_DataTransformer(&local_var_50,0,(int64_t)plocal_var_68 - (int64_t)plocal_var_70 >> 3,1,
                    0xffffffffffffffff,&local_var_50,uVar14);
      if (plocal_var_70 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      return;
    }
    puVar4 = (uint64_t *)0x0;
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,600,8,CONCAT71((int7)((uint64_t)pcVar12 >> 8),3));
    plVar3 = (int64_t *)function_464ff0(uVar2,param_1[4]);
    if (plocal_var_68 < plocal_var_60) {
      *plocal_var_68 = pcVar1;
      puVar4 = plocal_var_68;
    }
    else {
      lVar8 = (int64_t)plocal_var_68 - (int64_t)plocal_var_70 >> 3;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_180389297:
        puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,(int8_t)local_var_58);
      }
      else {
        lVar8 = lVar8 * 2;
        if (lVar8 != 0) goto LAB_180389297;
      }
      if (plocal_var_70 != plocal_var_68) {
// WARNING: Subroutine does not return
        memmove(puVar4,plocal_var_70,(int64_t)plocal_var_68 - (int64_t)plocal_var_70);
      }
      *puVar4 = pcVar1;
      if (plocal_var_70 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_60 = puVar4 + lVar8;
      plocal_var_70 = puVar4;
    }
    plocal_var_68 = puVar4 + 1;
    puVar4 = (uint64_t *)0x0;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    puVar10 = (uint64_t *)param_1[1];
    if (puVar10 < (uint64_t *)param_1[2]) {
      param_1[1] = (int64_t)(puVar10 + 1);
      *puVar10 = plVar3;
    }
    else {
      puVar5 = (uint64_t *)*param_1;
      lVar8 = (int64_t)puVar10 - (int64_t)puVar5 >> 3;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_180389368:
        puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,(char)param_1[3]);
        puVar10 = (uint64_t *)param_1[1];
        puVar5 = (uint64_t *)*param_1;
        puVar13 = puVar4;
      }
      else {
        lVar8 = lVar8 * 2;
        puVar13 = puVar4;
        if (lVar8 != 0) goto LAB_180389368;
      }
      for (; puVar5 != puVar10; puVar5 = puVar5 + 1) {
        *puVar4 = *puVar5;
        *puVar5 = 0;
        puVar4 = puVar4 + 1;
      }
      *puVar4 = plVar3;
      plVar3 = (int64_t *)param_1[1];
      plVar9 = (int64_t *)*param_1;
      if (plVar9 != plVar3) {
        do {
          if ((int64_t *)*plVar9 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar9 + 0x38))();
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar3);
        plVar9 = (int64_t *)*param_1;
      }
      if (plVar9 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar9);
      }
      *param_1 = (int64_t)puVar13;
      param_1[1] = (int64_t)(puVar4 + 1);
      param_1[2] = (int64_t)(puVar13 + lVar8);
    }
    pcVar11 = "path";
    do {
      pcVar12 = pcVar11;
      pcVar11 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    pcVar12 = pcVar12 + -0x180a1022b;
    for (pcVar11 = *(char **)(pcVar1 + 0x58); pcVar1 = (char *)0x0, pcVar11 != (char *)0x0;
        pcVar11 = *(char **)(pcVar11 + 0x58)) {
      pcVar6 = *(char **)pcVar11;
      if (pcVar6 == (char *)0x0) {
        pcVar7 = (char *)0x0;
        pcVar6 = (char *)0x180d48d24;
      }
      else {
        pcVar7 = *(char **)(pcVar11 + 0x10);
      }
      if (pcVar7 == pcVar12) {
        pcVar7 = pcVar7 + (int64_t)pcVar6;
        pcVar1 = pcVar11;
        if (pcVar7 <= pcVar6) break;
        lVar8 = (int64_t)&rendering_buffer_2796_ptr - (int64_t)pcVar6;
        while (*pcVar6 == pcVar6[lVar8]) {
          pcVar6 = pcVar6 + 1;
          if (pcVar7 <= pcVar6) goto joined_r0x000180389222;
        }
      }
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_389520(int64_t *param_1,int64_t *param_2,int64_t param_3)
void function_389520(int64_t *param_1,int64_t *param_2,int64_t param_3)
{
  uint uVar1;
  char *pcVar2;
  int64_t *plVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  lVar5 = *param_1;
  iVar9 = 0;
  if (param_1[1] - lVar5 >> 3 != 0) {
    lVar10 = 0;
    do {
      lVar5 = *(int64_t *)(lVar10 + lVar5);
      uVar1 = *(uint *)(param_3 + 0x10);
      if (uVar1 <= *(uint *)(lVar5 + 0x88)) {
        uVar4 = 0;
        if (uVar1 != 0) {
          pcVar2 = *(char **)(param_3 + 8);
          lVar8 = *(int64_t *)(lVar5 + 0x80) - (int64_t)pcVar2;
          do {
            if (pcVar2[lVar8] != *pcVar2) goto LAB_18038965b;
            uVar4 = uVar4 + 1;
            pcVar2 = pcVar2 + 1;
          } while (uVar4 < uVar1);
        }
        plVar7 = (int64_t *)param_2[1];
        if (plVar7 < (int64_t *)param_2[2]) {
          param_2[1] = (int64_t)(plVar7 + 1);
          *plVar7 = lVar5;
        }
        else {
          plVar6 = (int64_t *)*param_2;
          lVar8 = (int64_t)plVar7 - (int64_t)plVar6 >> 3;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803895f5:
            plVar3 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,(char)param_2[3]);
            plVar6 = (int64_t *)*param_2;
            plVar7 = (int64_t *)param_2[1];
          }
          else {
            lVar8 = lVar8 * 2;
            if (lVar8 != 0) goto LAB_1803895f5;
            plVar3 = (int64_t *)0x0;
          }
          if (plVar6 != plVar7) {
// WARNING: Subroutine does not return
            memmove(plVar3,plVar6,(int64_t)plVar7 - (int64_t)plVar6);
          }
          *plVar3 = lVar5;
          if (*param_2 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *param_2 = (int64_t)plVar3;
          param_2[2] = (int64_t)(plVar3 + lVar8);
          param_2[1] = (int64_t)(plVar3 + 1);
        }
      }
LAB_18038965b:
      lVar5 = *param_1;
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((uint64_t)(int64_t)iVar9 < (uint64_t)(param_1[1] - lVar5 >> 3));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_389551(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void function_389551(uint64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t *plVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *unaff_RDI;
  int64_t lVar8;
  int unaff_R12D;
  int64_t *unaff_R13;
  int64_t lVar9;
  int64_t local_buffer_60;
  lVar9 = 0;
  do {
    lVar2 = *(int64_t *)(lVar9 + param_2);
    uVar1 = *(uint *)(param_4 + 0x10);
    if (uVar1 <= *(uint *)(lVar2 + 0x88)) {
      uVar5 = 0;
      if (uVar1 != 0) {
        pcVar3 = *(char **)(param_4 + 8);
        lVar8 = *(int64_t *)(lVar2 + 0x80) - (int64_t)pcVar3;
        do {
          if (pcVar3[lVar8] != *pcVar3) goto LAB_18038965b;
          uVar5 = uVar5 + 1;
          pcVar3 = pcVar3 + 1;
        } while (uVar5 < uVar1);
      }
      plVar7 = (int64_t *)unaff_RDI[1];
      if (plVar7 < (int64_t *)unaff_RDI[2]) {
        unaff_RDI[1] = (int64_t)(plVar7 + 1);
        *plVar7 = lVar2;
      }
      else {
        plVar6 = (int64_t *)*unaff_RDI;
        lVar8 = (int64_t)plVar7 - (int64_t)plVar6 >> 3;
        if (lVar8 == 0) {
          lVar8 = 1;
LAB_1803895f5:
          plVar4 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,(char)unaff_RDI[3]);
          plVar6 = (int64_t *)*unaff_RDI;
          plVar7 = (int64_t *)unaff_RDI[1];
        }
        else {
          lVar8 = lVar8 * 2;
          if (lVar8 != 0) goto LAB_1803895f5;
          plVar4 = (int64_t *)0x0;
        }
        if (plVar6 != plVar7) {
// WARNING: Subroutine does not return
          memmove(plVar4,plVar6,(int64_t)plVar7 - (int64_t)plVar6);
        }
        *plVar4 = lVar2;
        if (*unaff_RDI != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *unaff_RDI = (int64_t)plVar4;
        unaff_RDI[2] = (int64_t)(plVar4 + lVar8);
        unaff_RDI[1] = (int64_t)(plVar4 + 1);
      }
    }
LAB_18038965b:
    param_2 = *unaff_R13;
    unaff_R12D = unaff_R12D + 1;
    lVar9 = lVar9 + 8;
    param_4 = local_buffer_60;
    if ((uint64_t)(unaff_R13[1] - param_2 >> 3) <= (uint64_t)(int64_t)unaff_R12D) {
      return;
    }
  } while( true );
}
// 函数: void function_38969b(void)
void function_38969b(void)
{
  return;
}
// 函数: void function_3896b0(int param_1,int param_2,uint64_t *param_3)
void function_3896b0(int param_1,int param_2,uint64_t *param_3)
{
  int64_t lVar1;
  for (lVar1 = (int64_t)param_1; lVar1 < param_2; lVar1 = lVar1 + 1) {
    function_466800(*(uint64_t *)(*(int64_t *)*param_3 + lVar1 * 8),
                  *(uint64_t *)(*(int64_t *)param_3[1] + lVar1 * 8));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_389750(int64_t *param_1)
void function_389750(int64_t *param_1)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  lVar3 = system_context_ptr;
  plVar1 = (int64_t *)*param_1;
  if ((plVar1 != (int64_t *)0x0) && (system_context_ptr != 0)) {
    pplStackX_18 = &plStackX_10;
    plStackX_10 = plVar1;
    (**(code **)(*plVar1 + 0x28))();
    SystemCore_ErrorHandler(lVar3,&plStackX_10,0);
  }
  puVar2 = (uint64_t *)param_1[1];
  if (puVar2 != (uint64_t *)0x0) {
    lVar3 = __RTCastToVoid(puVar2);
    (**(code **)*puVar2)(puVar2,0);
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
  }
  param_1[1] = 0;
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_389800(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_389800(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  uint64_t uVar4;
  lVar3 = system_context_ptr;
  uVar4 = 0xfffffffffffffffe;
  plVar1 = (int64_t *)*param_1;
  if ((plVar1 != (int64_t *)0x0) && (system_context_ptr != 0)) {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = plVar1;
    (**(code **)(*plVar1 + 0x28))();
    SystemCore_ErrorHandler(lVar3,&plStackX_8,0);
  }
  puVar2 = (uint64_t *)param_1[1];
  if (puVar2 != (uint64_t *)0x0) {
    lVar3 = __RTCastToVoid(puVar2);
    (**(code **)*puVar2)(puVar2,0,(uint64_t *)*puVar2,param_4,uVar4);
    if (lVar3 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
  }
  param_1[1] = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3898a0(int64_t *param_1)
void function_3898a0(int64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int8_t stack_array_108 [32];
  int64_t *plStack_e8;
  void **pplocal_var_e0;
  uint64_t local_var_d8;
  void *aplocal_var_c8 [19];
  char cStack_2a;
  char cStack_27;
  uint64_t local_var_18;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  function_623de0(aplocal_var_c8);
  if (cStack_27 == '\0') {
    if (cStack_2a == '\0') {
      uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x408,8,0x1d);
      lVar3 = function_4707c0(uVar2);
      param_1[1] = lVar3;
    }
    else {
      puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2c8,8,0x1d);
      plStack_e8 = puVar1;
      function_490d10(puVar1);
      *puVar1 = &rendering_buffer_2672_ptr;
      uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc00000,0x1d);
      puVar1[0x43] = uVar2;
      uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x80,0x1d);
      puVar1[0x44] = uVar2;
      param_1[1] = (int64_t)puVar1;
    }
  }
  else {
    puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2c0,8,0x1d);
    plStack_e8 = puVar1;
    function_48dd80(puVar1);
    *puVar1 = &rendering_buffer_2480_ptr;
    uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc00000,0x1d);
    puVar1[0x42] = uVar2;
    uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x80,0x1d);
    puVar1[0x43] = uVar2;
    param_1[1] = (int64_t)puVar1;
  }
  plVar4 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x210,0x10,3);
  pplocal_var_e0 = (void **)plVar4;
  UltraHighFreq_PerformanceMonitor1(plVar4);
  *plVar4 = (int64_t)&processed_var_5144_ptr;
  function_094c20(plVar4 + 0x18);
  plVar4[0x40] = (int64_t)param_1;
  LOCK();
  *(int8_t *)(plVar4 + 2) = 1;
  UNLOCK();
  plStack_e8 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plStack_e8 = (int64_t *)*param_1;
  *param_1 = (int64_t)plVar4;
  if (plStack_e8 != (int64_t *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
  pplocal_var_e0 = aplocal_var_c8;
  aplocal_var_c8[0] = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_108);
}
uint64_t function_389a90(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  code *pcVar2;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  plVar1 = *(int64_t **)(param_1 + 8);
  plStackX_10 = param_2;
  if (plVar1 != (int64_t *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 8);
    pplStackX_18 = &plStackX_8;
    plStackX_8 = (int64_t *)*param_2;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    uVar3 = (*pcVar2)(plVar1,&plStackX_8,param_3,param_4,uVar3);
    if ((int64_t *)*param_2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_2 + 0x38))();
    }
    return uVar3;
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_389b20(int64_t param_1,int64_t param_2)
void function_389b20(int64_t param_1,int64_t param_2)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int64_t *plVar28;
  int32_t uVar29;
  int iVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t lVar35;
  int64_t lVar36;
  int64_t lVar37;
  int64_t lVar38;
  int64_t *plVar39;
  int64_t *plVar40;
  int64_t lVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  int iStack_118;
  int64_t lStack_100;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  uint64_t local_var_e0;
  int32_t local_var_d8;
  uint64_t local_var_d0;
  int64_t lStack_c8;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int32_t local_var_78;
  local_var_d0 = 0xfffffffffffffffe;
  if (*(int64_t *)(param_1 + 8) != 0) {
    plStack_f0 = (int64_t *)0x0;
    plStack_e8 = (int64_t *)0x0;
    local_var_e0 = 0;
    local_var_d8 = 3;
    (**(code **)(**(int64_t **)(param_1 + 8) + 0x38))(*(int64_t **)(param_1 + 8),&plStack_f0);
    iVar30 = (int)(((int64_t)plStack_e8 - (int64_t)plStack_f0) / 0x48);
    iStack_118 = 0;
    lVar37 = (int64_t)iVar30;
    plVar40 = plStack_f0;
    plVar28 = plStack_e8;
    if (0 < iVar30) {
      lStack_100 = 0;
      plVar39 = plStack_f0;
      do {
        lVar31 = (int64_t)iStack_118;
        lVar10 = *(int64_t *)(*(int64_t *)(lStack_100 + (int64_t)plVar39) + 0xb8);
        iVar30 = (int)((*(int64_t *)(lVar10 + 0x48) - *(int64_t *)(lVar10 + 0x40)) / 0x88);
        lVar38 = (int64_t)iVar30;
        plVar40 = plVar39;
        if (0 < iVar30) {
          lVar41 = 0x68;
          do {
            iVar30 = (int)((*(int64_t *)(lVar41 + 8 + *(int64_t *)(lVar10 + 0x40)) -
                           *(int64_t *)(lVar41 + *(int64_t *)(lVar10 + 0x40))) / 0x18);
            lVar35 = (int64_t)iVar30;
            if (0 < iVar30) {
              lVar34 = param_2 + 0x11a50;
              lVar36 = 0;
              do {
                uVar29 = render_system_control_memory;
                lVar32 = *(int64_t *)(*(int64_t *)(lVar10 + 0x40) + lVar41);
                lVar33 = (int64_t)*(int *)(lVar32 + 4 + lVar36);
                lVar11 = *(int64_t *)(*(int64_t *)(lVar10 + 0x40) + -0x40 + lVar41);
                pfVar1 = (float *)(plVar39 + lVar31 * 9 + 1);
                fVar12 = *pfVar1;
                fVar13 = pfVar1[1];
                fVar14 = pfVar1[2];
                fVar15 = pfVar1[3];
                pfVar1 = (float *)(plVar39 + lVar31 * 9 + 3);
                fVar16 = *pfVar1;
                fVar17 = pfVar1[1];
                fVar18 = pfVar1[2];
                fVar19 = pfVar1[3];
                pfVar1 = (float *)(plVar39 + lVar31 * 9 + 5);
                fVar20 = *pfVar1;
                fVar21 = pfVar1[1];
                fVar22 = pfVar1[2];
                fVar23 = pfVar1[3];
                pfVar1 = (float *)(plVar39 + lVar31 * 9 + 7);
                fVar24 = *pfVar1;
                fVar25 = pfVar1[1];
                fVar26 = pfVar1[2];
                fVar27 = pfVar1[3];
                fVar2 = *(float *)(lVar11 + 4 + lVar33 * 0x10);
                fVar3 = *(float *)(lVar11 + 8 + lVar33 * 0x10);
                fVar4 = *(float *)(lVar11 + lVar33 * 0x10);
                lVar33 = (int64_t)*(int *)(lVar32 + 8 + lVar36);
                fVar5 = *(float *)(lVar11 + 4 + lVar33 * 0x10);
                fVar6 = *(float *)(lVar11 + 8 + lVar33 * 0x10);
                fVar7 = *(float *)(lVar11 + lVar33 * 0x10);
                lVar32 = (int64_t)*(int *)(lVar32 + 0xc + lVar36);
                fVar45 = *(float *)(lVar11 + 4 + lVar32 * 0x10);
                fVar8 = *(float *)(lVar11 + 8 + lVar32 * 0x10);
                fVar9 = *(float *)(lVar11 + lVar32 * 0x10);
                fVar42 = fVar9 * fVar12 + fVar45 * fVar16 + fVar8 * fVar20 + fVar24;
                fVar43 = fVar9 * fVar13 + fVar45 * fVar17 + fVar8 * fVar21 + fVar25;
                fVar44 = fVar9 * fVar14 + fVar45 * fVar18 + fVar8 * fVar22 + fVar26;
                fVar45 = fVar9 * fVar15 + fVar45 * fVar19 + fVar8 * fVar23 + fVar27;
                if (*(char *)(param_2 + 0x11aa0) != '\0') {
                  lStack_c8 = lVar34;
                  iVar30 = _Mtx_lock(lVar34);
                  if (iVar30 != 0) {
                    __Throw_C_error_std__YAXH_Z(iVar30);
                  }
                  local_var_78 = uVar29;
                  fStack_b8 = fVar4 * fVar12 + fVar2 * fVar16 + fVar3 * fVar20 + fVar24;
                  fStack_b4 = fVar4 * fVar13 + fVar2 * fVar17 + fVar3 * fVar21 + fVar25;
                  fStack_b0 = fVar4 * fVar14 + fVar2 * fVar18 + fVar3 * fVar22 + fVar26;
                  fStack_ac = fVar4 * fVar15 + fVar2 * fVar19 + fVar3 * fVar23 + fVar27;
                  fStack_a8 = fVar7 * fVar12 + fVar5 * fVar16 + fVar6 * fVar20 + fVar24;
                  fStack_a4 = fVar7 * fVar13 + fVar5 * fVar17 + fVar6 * fVar21 + fVar25;
                  fStack_a0 = fVar7 * fVar14 + fVar5 * fVar18 + fVar6 * fVar22 + fVar26;
                  fStack_9c = fVar7 * fVar15 + fVar5 * fVar19 + fVar6 * fVar23 + fVar27;
                  fStack_98 = fVar42;
                  fStack_94 = fVar43;
                  fStack_90 = fVar44;
                  fStack_8c = fVar45;
                  fStack_88 = fVar42;
                  fStack_84 = fVar43;
                  fStack_80 = fVar44;
                  fStack_7c = fVar45;
                  function_6370a0(param_2 + 0x11b88,&fStack_b8);
                  iVar30 = _Mtx_unlock(lVar34);
                  if (iVar30 != 0) {
                    __Throw_C_error_std__YAXH_Z(iVar30);
                  }
                }
                lVar36 = lVar36 + 0x18;
                lVar35 = lVar35 + -1;
              } while (lVar35 != 0);
            }
            lVar41 = lVar41 + 0x88;
            lVar38 = lVar38 + -1;
            plVar40 = plStack_f0;
          } while (lVar38 != 0);
        }
        iStack_118 = iStack_118 + 1;
        lStack_100 = lStack_100 + 0x48;
        lVar37 = lVar37 + -1;
        plVar39 = plVar40;
        plVar40 = plStack_f0;
        plVar28 = plStack_e8;
      } while (lVar37 != 0);
    }
    for (; plVar39 = plStack_e8, plVar40 != plStack_e8; plVar40 = plVar40 + 9) {
      plStack_e8 = plVar28;
      if ((int64_t *)*plVar40 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar40 + 0x38))();
      }
      plVar28 = plStack_e8;
      plStack_e8 = plVar39;
    }
    if (plStack_f0 != (int64_t *)0x0) {
      plStack_e8 = plVar28;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
// 函数: void function_389eb0(int64_t *param_1)
void function_389eb0(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 9) {
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_389ed0(int64_t param_1)
void function_389ed0(int64_t param_1)
{
  int64_t lVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  int8_t stack_array_1c8 [12];
  int32_t local_var_1bc;
  int32_t local_var_1ac;
  int32_t local_var_19c;
  int32_t local_var_18c;
  int8_t stack_array_188 [64];
  uint64_t stack_array_148 [24];
  int8_t stack_array_88 [128];
  lVar1 = *(int64_t *)(param_1 + 0x200);
  lVar19 = 2;
  puVar15 = stack_array_148;
  puVar16 = (uint64_t *)(param_1 + 0xc0);
  do {
    puVar18 = puVar16;
    puVar17 = puVar15;
    uVar11 = puVar18[1];
    uVar12 = puVar18[2];
    uVar13 = puVar18[3];
    *puVar17 = *puVar18;
    puVar17[1] = uVar11;
    uVar11 = puVar18[4];
    uVar14 = puVar18[5];
    puVar17[2] = uVar12;
    puVar17[3] = uVar13;
    uVar12 = puVar18[6];
    uVar13 = puVar18[7];
    puVar17[4] = uVar11;
    puVar17[5] = uVar14;
    uVar11 = puVar18[8];
    uVar14 = puVar18[9];
    puVar17[6] = uVar12;
    puVar17[7] = uVar13;
    uVar12 = puVar18[10];
    uVar13 = puVar18[0xb];
    puVar17[8] = uVar11;
    puVar17[9] = uVar14;
    uVar11 = puVar18[0xc];
    uVar14 = puVar18[0xd];
    puVar17[10] = uVar12;
    puVar17[0xb] = uVar13;
    uVar12 = puVar18[0xe];
    uVar13 = puVar18[0xf];
    puVar17[0xc] = uVar11;
    puVar17[0xd] = uVar14;
    puVar17[0xe] = uVar12;
    puVar17[0xf] = uVar13;
    lVar19 = lVar19 + -1;
    puVar15 = puVar17 + 0x10;
    puVar16 = puVar18 + 0x10;
  } while (lVar19 != 0);
  uVar11 = puVar18[0x11];
  uVar12 = puVar18[0x12];
  uVar13 = puVar18[0x13];
  puVar17[0x10] = puVar18[0x10];
  puVar17[0x11] = uVar11;
  uVar3 = *(int32_t *)(puVar18 + 0x14);
  uVar4 = *(int32_t *)((int64_t)puVar18 + 0xa4);
  uVar5 = *(int32_t *)(puVar18 + 0x15);
  uVar6 = *(int32_t *)((int64_t)puVar18 + 0xac);
  puVar17[0x12] = uVar12;
  puVar17[0x13] = uVar13;
  uVar7 = *(int32_t *)(puVar18 + 0x16);
  uVar8 = *(int32_t *)((int64_t)puVar18 + 0xb4);
  uVar9 = *(int32_t *)(puVar18 + 0x17);
  uVar10 = *(int32_t *)((int64_t)puVar18 + 0xbc);
  *(int32_t *)(puVar17 + 0x14) = uVar3;
  *(int32_t *)((int64_t)puVar17 + 0xa4) = uVar4;
  *(int32_t *)(puVar17 + 0x15) = uVar5;
  *(int32_t *)((int64_t)puVar17 + 0xac) = uVar6;
  *(int32_t *)(puVar17 + 0x16) = uVar7;
  *(int32_t *)((int64_t)puVar17 + 0xb4) = uVar8;
  *(int32_t *)(puVar17 + 0x17) = uVar9;
  *(int32_t *)((int64_t)puVar17 + 0xbc) = uVar10;
  plVar2 = *(int64_t **)(lVar1 + 8);
  if (plVar2 != (int64_t *)0x0) {
    function_287b30(stack_array_88,stack_array_1c8);
    local_var_18c = 0x3f800000;
    local_var_1bc = 0;
    local_var_1ac = 0;
    local_var_19c = 0;
    function_286010(stack_array_148,stack_array_188,1);
    (**(code **)(*plVar2 + 0x68))(plVar2,stack_array_1c8,stack_array_188,0);
    plVar2 = *(int64_t **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x48))(plVar2,stack_array_148,0);
  }
  return;
}