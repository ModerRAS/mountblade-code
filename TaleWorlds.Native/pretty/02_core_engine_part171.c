#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part171.c - 8 个函数
// 函数: void function_156300(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_156300(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  int iVar2;
  int iVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  int32_t *puVar10;
  int32_t **ppuVar11;
  int32_t *puVar12;
  int64_t lVar13;
  int32_t *puVar14;
  uint64_t uVar15;
  int32_t *plocal_var_b0;
  int32_t *plocal_var_a8;
  int32_t *plocal_var_a0;
  int32_t local_var_98;
  int32_t *plocal_var_90;
  int32_t *plocal_var_88;
  int32_t *plocal_var_80;
  int32_t local_var_78;
  int32_t *plocal_var_70;
  int32_t *plocal_var_68;
  int32_t *plocal_var_60;
  int32_t local_var_58;
  uVar15 = 0xfffffffffffffffe;
  plocal_var_90 = (int32_t *)0x0;
  plocal_var_88 = (int32_t *)0x0;
  puVar8 = (int32_t *)0x0;
  plocal_var_80 = (int32_t *)0x0;
  local_var_78 = 3;
  plocal_var_b0 = (int32_t *)0x0;
  plocal_var_a8 = (int32_t *)0x0;
  plocal_var_a0 = (int32_t *)0x0;
  local_var_98 = 3;
  plocal_var_70 = (int32_t *)0x0;
  plocal_var_68 = (int32_t *)0x0;
  plocal_var_60 = (int32_t *)0x0;
  local_var_58 = 3;
  iVar2 = _Mtx_lock(param_1 + 0xc);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  ppuVar11 = (int32_t **)(param_1 + 0x16);
  puVar4 = puVar8;
  puVar10 = puVar8;
  if (&plocal_var_70 != ppuVar11) {
    puVar5 = (int32_t *)param_1[0x17];
    puVar14 = *ppuVar11;
    lVar13 = (int64_t)puVar5 - (int64_t)puVar14;
    lVar7 = lVar13 >> 2;
    if (lVar7 == 0) {
      if (puVar14 != puVar5) {
// WARNING: Subroutine does not return
        memmove(0,puVar14,lVar13,param_4,uVar15);
      }
      plocal_var_68 = (int32_t *)0x0;
    }
    else {
      puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 4,3);
      if (puVar14 != puVar5) {
// WARNING: Subroutine does not return
        memmove(puVar4,puVar14,lVar13,param_4,uVar15);
      }
      plocal_var_68 = puVar4 + lVar7;
      puVar10 = plocal_var_68;
      plocal_var_70 = puVar4;
      plocal_var_60 = plocal_var_68;
    }
  }
  puVar5 = plocal_var_70;
  function_15b590(ppuVar11,&plocal_var_b0);
  iVar2 = _Mtx_unlock(param_1 + 0xc);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = 0;
  uVar9 = (int64_t)puVar10 - (int64_t)puVar5 >> 2;
  puVar10 = plocal_var_88;
  puVar5 = plocal_var_a8;
  puVar14 = plocal_var_90;
  if (uVar9 != 0) {
    do {
      cVar1 = (**(code **)(*param_1 + 8))(param_1,*puVar4);
      if (cVar1 == '\0') {
        if (puVar5 < plocal_var_a0) {
          puVar12 = puVar5 + 1;
          *puVar5 = *puVar4;
          plocal_var_a8 = puVar12;
          goto LAB_1801565db;
        }
        lVar13 = (int64_t)puVar5 - (int64_t)plocal_var_b0;
        lVar7 = lVar13 >> 2;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_180156576:
          puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 4,(int8_t)local_var_98);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_180156576;
          puVar6 = (int32_t *)0x0;
        }
        if (plocal_var_b0 != puVar5) {
// WARNING: Subroutine does not return
          memmove(puVar6,plocal_var_b0,lVar13);
        }
        *puVar6 = *puVar4;
        puVar12 = puVar6 + 1;
        if (plocal_var_b0 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plocal_var_b0);
        }
        plocal_var_a0 = puVar6 + lVar7;
        puVar8 = plocal_var_80;
        plocal_var_b0 = puVar6;
        plocal_var_a8 = puVar12;
      }
      else {
        puVar12 = puVar5;
        if (puVar10 < puVar8) {
          plocal_var_88 = puVar10 + 1;
          *puVar10 = *puVar4;
          puVar10 = plocal_var_88;
        }
        else {
          lVar7 = (int64_t)puVar10 - (int64_t)puVar14 >> 2;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_1801564c8:
            puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 4,3);
          }
          else {
            lVar7 = lVar7 * 2;
            if (lVar7 != 0) goto LAB_1801564c8;
            puVar5 = (int32_t *)0x0;
          }
          if (puVar14 != puVar10) {
// WARNING: Subroutine does not return
            memmove(puVar5,puVar14,(int64_t)puVar10 - (int64_t)puVar14);
          }
          *puVar5 = *puVar4;
          puVar10 = puVar5 + 1;
          if (puVar14 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar14);
          }
          plocal_var_80 = puVar5 + lVar7;
          puVar8 = plocal_var_80;
          puVar14 = puVar5;
          plocal_var_90 = puVar5;
          plocal_var_88 = puVar10;
        }
      }
LAB_1801565db:
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar12;
    } while ((uint64_t)(int64_t)iVar2 < uVar9);
  }
  iVar2 = 0;
  if (plocal_var_70 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  iVar3 = _Mtx_lock(param_1 + 0x1a);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uVar9 = (int64_t)puVar10 - (int64_t)puVar14 >> 2;
  puVar8 = puVar14;
  if (uVar9 != 0) {
    do {
      (**(code **)(*param_1 + 0x108))(param_1,*puVar8);
      iVar2 = iVar2 + 1;
      puVar8 = puVar8 + 1;
    } while ((uint64_t)(int64_t)iVar2 < uVar9);
  }
  iVar2 = _Mtx_unlock(param_1 + 0x1a);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (plocal_var_b0 == (int32_t *)0x0) {
    if (puVar14 == (int32_t *)0x0) {
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar14);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_1566b0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t *pstack_special_x_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  *param_1 = &processed_var_8656_ptr;
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  *(int32_t *)(param_1 + 10) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x54) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x5c) = 3;
  param_1[8] = 1;
  param_1[7] = &system_data_0000;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  pstack_special_x_10 = param_1 + 0xc;
  _Mtx_init_in_situ(pstack_special_x_10,0x102,param_3,param_4,0xfffffffffffffffe);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 3;
  pstack_special_x_10 = param_1 + 0x1a;
  _Mtx_init_in_situ(pstack_special_x_10,0x102);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(int32_t *)(param_1 + 0x27) = 3;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(int32_t *)(param_1 + 0x2b) = 3;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 3;
  param_1[0x3d] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x214) = 0;
  *(int32_t *)((int64_t)param_1 + 0x21c) = 0;
  pstack_special_x_10 = param_1 + 0x44;
  *(int32_t *)(param_1 + 0x48) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x244) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x24c) = 3;
  param_1[0x46] = 1;
  param_1[0x45] = &system_data_0000;
  param_1[0x47] = 0;
  *(int32_t *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(int32_t *)(param_1 + 0x4b) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x214) = 0x2ee00002ee00;
  *(int32_t *)((int64_t)param_1 + 0x21c) = 1;
  uVar1 = function_6fade0(*(int32_t *)(param_1 + 0x43),*(int32_t *)((int64_t)param_1 + 0x21c),
                        0x800,&pstack_special_x_10);
  param_1[0x4a] = uVar1;
  if ((int)pstack_special_x_10 < 0) {
    SystemDataInitializer(&processed_var_7224_ptr);
    param_1[0x4a] = 0;
  }
  function_6faf00(param_1[0x4a],0xfa2,*(uint *)((int64_t)param_1 + 0x214) >> 2,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfa8,0xfffffc18,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfa6,1,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfb4,0,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfaa,10,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfac,0,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfb6,0xfffffc18,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfb0,0,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfae,0,&pstack_special_x_10);
  *(int32_t *)(param_1 + 0x4b) = 0;
  function_6faf00(param_1[0x4a],0xfbb,param_1 + 0x4b,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfc4,0x10,&pstack_special_x_10);
  function_6faf00(param_1[0x4a],0xfc8,5000,&pstack_special_x_10);
  *(int16_t *)((int64_t)param_1 + 0x161) = 0;
  *(int8_t *)(param_1 + 0x2c) = 0;
  *(int8_t *)(param_1 + 0x42) = 1;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f80000000000000;
  param_1[0x34] = 0;
  *(int32_t *)(param_1 + 0x35) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1ac) = 0;
  *(int32_t *)(param_1 + 0x36) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x1b4) = 0;
  *(int32_t *)(param_1 + 0x37) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1bc) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1c4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x39) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1cc) = 0;
  *(int32_t *)(param_1 + 0x3a) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1d4) = 0x3f800000;
  function_157050(param_1);
  plVar2 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x60,8,3);
  *plVar2 = (int64_t)&system_handler1_ptr;
  *plVar2 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar2 + 1) = 0;
  *plVar2 = (int64_t)&processed_var_7872_ptr;
  plStackX_20 = plVar2;
  function_15c2b0(plVar2 + 2);
  *plVar2 = (int64_t)&processed_var_8264_ptr;
  *(int32_t *)(plVar2 + 10) = 0xffffffff;
  plVar2[0xb] = 0;
  plStackX_18 = plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plStackX_18 = (int64_t *)param_1[0x3d];
  param_1[0x3d] = plVar2;
  if (plStackX_18 != (int64_t *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])(param_1 + 1,0,0);
  }
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  *(int32_t *)(param_1 + 0x40) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x204) = 0xbf800000;
  *(int32_t *)(param_1 + 0x41) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x20c) = 0xbf800000;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[0x3f] = 0;
  return param_1;
}
uint64_t function_156b20(uint64_t param_1,uint64_t param_2)
{
  function_1570c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x260);
  }
  return param_1;
}
// 函数: void function_156b60(int64_t param_1)
void function_156b60(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  function_15b450();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        Function_2152bae1(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_156ba0(int64_t param_1)
void function_156ba0(int64_t param_1)
{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        Function_2152bae1(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_156bc0(int64_t param_1)
void function_156bc0(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  function_15b450();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        Function_2152bae1(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_156c00(int64_t param_1)
void function_156c00(int64_t param_1)
{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        Function_2152bae1(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_156c20(uint64_t param_1,int64_t param_2,int8_t param_3)
void function_156c20(uint64_t param_1,int64_t param_2,int8_t param_3)
{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int64_t *plVar6;
  byte *pbVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  void *plocal_var_78;
  int64_t lStack_70;
  uint local_var_68;
  int32_t local_var_60;
  void *plocal_var_58;
  int64_t lStack_50;
  uint local_var_48;
  uint64_t local_var_40;
  int8_t local_var_38;
  plVar6 = core_system_data_config;
  plocal_var_58 = &system_data_buffer_ptr;
  local_var_40 = 0;
  lStack_50 = 0;
  local_var_48 = 0;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar9 = (uint64_t)uVar2;
  if (*(int64_t *)(param_2 + 8) != 0) {
    CoreEngineDataBufferProcessor(&plocal_var_58,uVar9);
  }
  if (uVar2 != 0) {
// WARNING: Subroutine does not return
    memcpy(lStack_50,*(uint64_t *)(param_2 + 8),uVar9);
  }
  if (lStack_50 != 0) {
    *(int8_t *)(uVar9 + lStack_50) = 0;
  }
  local_var_40 = CONCAT44(*(int32_t *)(param_2 + 0x1c),(int32_t)local_var_40);
  bVar5 = false;
  uVar9 = plVar6[0x25];
  uVar11 = plVar6[0x24];
  local_var_48 = uVar2;
  local_var_38 = param_3;
  if (uVar11 != uVar9) {
    iVar3 = *(int *)(param_2 + 0x10);
    do {
      iVar4 = *(int *)(uVar11 + 0x10);
      iVar8 = iVar3;
      if (iVar4 == iVar3) {
        if (iVar4 != 0) {
          pbVar7 = *(byte **)(uVar11 + 8);
          lVar10 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar7;
          do {
            pbVar1 = pbVar7 + lVar10;
            iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180156d2e:
        if (iVar8 == 0) {
          bVar5 = true;
        }
      }
      else if (iVar4 == 0) goto LAB_180156d2e;
      uVar11 = uVar11 + 0x28;
    } while (uVar11 != uVar9);
    if (bVar5) goto LAB_180156d7b;
  }
  if (uVar9 < (uint64_t)plVar6[0x26]) {
    plVar6[0x25] = uVar9 + 0x28;
    CoreEngineDataTransformer(uVar9);
    *(int8_t *)(uVar9 + 0x20) = local_var_38;
  }
  else {
    function_15bea0(plVar6 + 0x24,&plocal_var_58);
  }
LAB_180156d7b:
  function_159870();
  if (0 < *(int *)(param_2 + 0x10)) {
    CoreEngineDataBufferProcessor(&plocal_var_78,local_var_68 + *(int *)(param_2 + 0x10));
// WARNING: Subroutine does not return
    memcpy((uint64_t)local_var_68 + lStack_70,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,&plocal_var_78,param_3);
  plocal_var_78 = &system_data_buffer_ptr;
  if (lStack_70 == 0) {
    lStack_70 = 0;
    local_var_60 = 0;
    plocal_var_78 = &system_state_ptr;
    plocal_var_58 = &system_data_buffer_ptr;
    if (lStack_50 == 0) {
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_156e40(uint64_t param_1,int64_t param_2,int8_t param_3)
void function_156e40(uint64_t param_1,int64_t param_2,int8_t param_3)
{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  byte *pbVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  void *plocal_var_78;
  int64_t lStack_70;
  uint local_var_68;
  int32_t local_var_60;
  void *plocal_var_58;
  int64_t lStack_50;
  uint local_var_48;
  uint64_t local_var_40;
  int8_t local_var_38;
  plVar6 = core_system_data_config;
  plocal_var_58 = &system_data_buffer_ptr;
  local_var_40 = 0;
  lStack_50 = 0;
  local_var_48 = 0;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar10 = (uint64_t)uVar2;
  if (*(int64_t *)(param_2 + 8) != 0) {
    CoreEngineDataBufferProcessor(&plocal_var_58,uVar10);
  }
  if (uVar2 != 0) {
// WARNING: Subroutine does not return
    memcpy(lStack_50,*(uint64_t *)(param_2 + 8),uVar10);
  }
  if (lStack_50 != 0) {
    *(int8_t *)(uVar10 + lStack_50) = 0;
  }
  local_var_40 = CONCAT44(*(int32_t *)(param_2 + 0x1c),(int32_t)local_var_40);
  uVar10 = plVar6[0x28];
  uVar5 = plVar6[0x29];
  local_var_48 = uVar2;
  local_var_38 = param_3;
  if (uVar10 != uVar5) {
    iVar3 = *(int *)(param_2 + 0x10);
    do {
      iVar4 = *(int *)(uVar10 + 0x10);
      iVar8 = iVar3;
      if (iVar4 == iVar3) {
        if (iVar4 != 0) {
          pbVar7 = *(byte **)(uVar10 + 8);
          lVar9 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar7;
          do {
            pbVar1 = pbVar7 + lVar9;
            iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180156f4e:
        if (iVar8 == 0) goto LAB_180156f96;
      }
      else if (iVar4 == 0) goto LAB_180156f4e;
      uVar10 = uVar10 + 0x28;
    } while (uVar10 != uVar5);
  }
  if (uVar5 < (uint64_t)plVar6[0x2a]) {
    plVar6[0x29] = uVar5 + 0x28;
    CoreEngineDataTransformer(uVar5);
    *(int8_t *)(uVar5 + 0x20) = local_var_38;
  }
  else {
    function_15bea0(plVar6 + 0x28,&plocal_var_58);
  }
LAB_180156f96:
  function_159820();
  if (0 < *(int *)(param_2 + 0x10)) {
    CoreEngineDataBufferProcessor(&plocal_var_78,local_var_68 + *(int *)(param_2 + 0x10));
// WARNING: Subroutine does not return
    memcpy((uint64_t)local_var_68 + lStack_70,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,&plocal_var_78,param_3);
  plocal_var_78 = &system_data_buffer_ptr;
  if (lStack_70 == 0) {
    lStack_70 = 0;
    local_var_60 = 0;
    plocal_var_78 = &system_state_ptr;
    plocal_var_58 = &system_data_buffer_ptr;
    if (lStack_50 == 0) {
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_157050(int64_t param_1)
void function_157050(int64_t param_1)
{
  int iVar1;
  iVar1 = _Mtx_lock(param_1 + 0xd0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  function_15b450(param_1 + 0x30);
  iVar1 = _Mtx_unlock(param_1 + 0xd0);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address