/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part196.c - 18 个函数
// 函数: void GenericFunction_180179f00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_180179f00(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  GenericFunction_180179f00(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if (param_2[5] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_2);
}
// 函数: void GenericFunction_180179f70(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_180179f70(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  GenericFunction_180179f00(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void GenericFunction_180179f90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_180179f90(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  GenericFunction_180179f00(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void GenericFunction_180179fc0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_180179fc0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  GenericFunction_180179f00(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void GenericFunction_180179ff0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_180179ff0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  GenericFunction_180179f00(param_1 + 1,param_1[3],param_3,param_4,0xfffffffffffffffe);
  *param_1 = &processed_var_4968_ptr;
  return;
}
// 函数: void GenericFunction_18017a030(uint64_t *param_1)
void GenericFunction_18017a030(uint64_t *param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
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
// 函数: void GenericFunction_18017a060(int64_t param_1)
void GenericFunction_18017a060(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  puVar2 = *(uint64_t **)(param_1 + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
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
uint64_t *
GenericFunction_18017a0a0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_5024_ptr;
  *param_1 = &processed_var_5056_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
uint64_t * GenericFunction_18017a0f0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_5056_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// 函数: void GenericFunction_18017a130(uint64_t *param_1)
void GenericFunction_18017a130(uint64_t *param_1)
{
  *param_1 = &processed_var_5024_ptr;
  *param_1 = &processed_var_5056_ptr;
  return;
}
uint64_t * GenericFunction_18017a160(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_5088_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// 函数: void GenericFunction_18017a1a0(uint64_t *param_1)
void GenericFunction_18017a1a0(uint64_t *param_1)
{
  *param_1 = &processed_var_5088_ptr;
  return;
}
// 函数: void GenericFunction_18017a1c0(void)
void GenericFunction_18017a1c0(void)
{
  UtilitiesSystem_Processor();
  _Mtx_destroy_in_situ();
  return;
}
uint64_t * GenericFunction_18017a200(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_5168_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// 函数: void GenericFunction_18017a240(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_18017a240(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  GenericFunction_18017b400(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// 函数: void GenericFunction_18017a270(int64_t *param_1)
void GenericFunction_18017a270(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    GenericFunction_18017a9c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void GenericFunction_18017a290(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_18017a290(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  GenericFunction_18017b400(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18017a2c0(uint64_t *param_1,int64_t *param_2)
void GenericFunction_18017a2c0(uint64_t *param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  int *piVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint uVar11;
  bool bVar12;
  int **ppiVar13;
  int **ppiVar14;
  uint uVar15;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int *piStack_88;
  int32_t local_var_80;
  int32_t local_var_7c;
  code *pcStack_78;
  code *pcStack_70;
  int *apiStack_68 [2];
  code *pcStack_58;
  void *plocal_var_50;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  uVar10 = 1;
  puVar4 = (uint64_t *)param_1[8];
  puVar9 = param_1 + 6;
  if ((uint64_t *)param_1[8] == (uint64_t *)0x0) {
LAB_18017a342:
    puVar4 = (uint64_t *)param_1[2];
    puVar9 = param_1;
    if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
      do {
        if ((int64_t *)puVar4[4] < param_2) {
          puVar5 = (uint64_t *)*puVar4;
        }
        else {
          puVar5 = (uint64_t *)puVar4[1];
          puVar9 = puVar4;
        }
        puVar4 = puVar5;
      } while (puVar5 != (uint64_t *)0x0);
      if ((puVar9 != param_1) && ((int64_t *)puVar9[4] <= param_2)) goto LAB_18017a372;
    }
    bVar12 = true;
  }
  else {
    do {
      if ((int64_t *)puVar4[4] < param_2) {
        puVar5 = (uint64_t *)*puVar4;
      }
      else {
        puVar5 = (uint64_t *)puVar4[1];
        puVar9 = puVar4;
      }
      puVar4 = puVar5;
    } while (puVar5 != (uint64_t *)0x0);
    if ((puVar9 == param_1 + 6) || (param_2 < (int64_t *)puVar9[4])) goto LAB_18017a342;
LAB_18017a372:
    bVar12 = false;
  }
  uVar15 = 0;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  if (!bVar12) {
    return;
  }
  piVar2 = (int *)(param_1 + 0x10);
  uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xf0,8,3);
  plVar7 = (int64_t *)GenericFunction_18007f2f0(uVar6);
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar3 = (int64_t *)param_2[0x42];
  param_2[0x42] = (int64_t)plVar7;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar7 = (int64_t *)param_2[0x42];
  uVar11 = 0;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    uVar11 = uVar15;
  }
  pcStack_58 = (code *)&processed_var_7712_ptr;
  plocal_var_50 = &processed_var_7696_ptr;
  pcStack_78 = (code *)&processed_var_7824_ptr;
  pcStack_70 = GenericFunction_180083100;
  local_var_a0 = SUB84(plVar7,0);
  local_var_9c = (int32_t)((uint64_t)plVar7 >> 0x20);
  local_var_80 = local_var_a0;
  local_var_7c = local_var_9c;
  ppiVar14 = apiStack_68;
  ppiVar13 = &piStack_88;
  apiStack_68[0] = piVar2;
  piStack_88 = piVar2;
  (**(code **)(**(int64_t **)(param_2[0x15] + 0x88) + 0x70))
            (*(int64_t **)(param_2[0x15] + 0x88),&system_data_c740,param_2 + 0x17,0,ppiVar13,ppiVar14)
  ;
  if (pcStack_78 != (code *)0x0) {
    (*pcStack_78)(&piStack_88,0,0);
  }
  if (pcStack_58 != (code *)0x0) {
    (*pcStack_58)(apiStack_68,0,0);
  }
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  uVar11 = uVar11 | 2;
  lVar8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(param_1 + 5));
  puVar1 = (uint64_t *)(lVar8 + 0x20);
  *puVar1 = (uint64_t)param_2;
  *(int64_t **)(lVar8 + 0x28) = plVar7;
  bVar12 = true;
  puVar4 = param_1;
  if ((uint64_t *)param_1[2] != (uint64_t *)0x0) {
    puVar9 = (uint64_t *)param_1[2];
    do {
      puVar4 = puVar9;
      bVar12 = *puVar1 < (uint64_t)puVar4[4];
      if (bVar12) {
        puVar9 = (uint64_t *)puVar4[1];
      }
      else {
        puVar9 = (uint64_t *)*puVar4;
      }
    } while (puVar9 != (uint64_t *)0x0);
  }
  puVar9 = puVar4;
  if (bVar12) {
    if (puVar4 == (uint64_t *)param_1[1]) goto LAB_18017a58d;
    puVar9 = (uint64_t *)Function_e2d50782(puVar4);
  }
  if (*puVar1 <= (uint64_t)puVar9[4]) {
    if (*(int64_t **)(lVar8 + 0x28) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar8 + 0x28) + 0x38))();
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar8);
  }
LAB_18017a58d:
  if ((puVar4 == param_1) || (*puVar1 < (uint64_t)puVar4[4])) {
    uVar10 = 0;
  }
// WARNING: Subroutine does not return
  SystemConfigProcessor(lVar8,puVar4,param_1,uVar10,ppiVar13,ppiVar14,uVar11);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18017a600(int64_t param_1,int64_t *param_2,uint64_t *param_3,uint64_t param_4,
void GenericFunction_18017a600(int64_t param_1,int64_t *param_2,uint64_t *param_3,uint64_t param_4,
                  uint64_t param_5)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  uint64_t *pstack_special_x_18;
  int64_t *plStack_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int32_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  plStack_a8 = (int64_t *)0x0;
  local_var_a0 = 0;
  local_var_98 = 0;
  local_var_90 = 0;
  local_var_88 = 3;
  local_var_80 = 0;
  local_var_78 = 0;
  local_var_70 = 0;
  local_var_68 = 3;
  pstack_special_x_18 = &local_var_60;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_50 = 0;
  local_var_48 = 3;
  plVar2 = (int64_t *)*param_2;
  plStackX_10 = param_2;
  if (plVar2 != (int64_t *)0x0) {
    plStackX_8 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plStackX_8 = plStack_a8;
  if (plStack_a8 != (int64_t *)0x0) {
    lVar10 = *plStack_a8;
    plStack_a8 = plVar2;
    (**(code **)(lVar10 + 0x38))();
    plVar2 = plStack_a8;
  }
  plStack_a8 = plVar2;
  if (&local_var_a0 != param_3) {
    GenericFunction_18017b480(&local_var_a0,*param_3,param_3[1]);
  }
  GenericFunction_18017b240(&local_var_80,param_4);
  GenericFunction_180150240(&local_var_60,param_5);
  uVar8 = *(uint64_t *)(param_1 + 0x68);
  lVar10 = 1;
  if (uVar8 < *(uint64_t *)(param_1 + 0x70)) {
    *(uint64_t *)(param_1 + 0x68) = uVar8 + 0x68;
    GenericFunction_18017b070(uVar8,&plStack_a8);
  }
  else {
    lVar9 = *(int64_t *)(param_1 + 0x60);
    lVar3 = (int64_t)(uVar8 - lVar9) / 0x68;
    if ((lVar3 == 0) || (lVar10 = lVar3 * 2, lVar3 = 0, lVar10 != 0)) {
      lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x68,*(int8_t *)(param_1 + 0x78));
      uVar8 = *(uint64_t *)(param_1 + 0x68);
      lVar9 = *(int64_t *)(param_1 + 0x60);
    }
    GenericFunction_18017b6e0(&plStackX_8,lVar9,uVar8,lVar3);
    plVar2 = plStackX_8;
    GenericFunction_18017b070(plStackX_8,&plStack_a8);
    plStackX_8 = plVar2 + 0xd;
    lVar9 = *(int64_t *)(param_1 + 0x68);
    lVar7 = *(int64_t *)(param_1 + 0x60);
    if (lVar7 != lVar9) {
      do {
        GenericFunction_18017a9c0(lVar7);
        lVar7 = lVar7 + 0x68;
      } while (lVar7 != lVar9);
      lVar7 = *(int64_t *)(param_1 + 0x60);
    }
    if (lVar7 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar7);
    }
    *(int64_t *)(param_1 + 0x60) = lVar3;
    *(int64_t **)(param_1 + 0x68) = plStackX_8;
    *(int64_t *)(param_1 + 0x70) = lVar10 * 0x68 + lVar3;
  }
  puVar1 = (uint64_t *)(param_1 + 0x30);
  plVar4 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 0x58));
  plVar2 = (int64_t *)*plStackX_10;
  plVar4[4] = (int64_t)plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  bVar11 = true;
  puVar6 = puVar1;
  if (*(uint64_t **)(param_1 + 0x40) != (uint64_t *)0x0) {
    puVar5 = *(uint64_t **)(param_1 + 0x40);
    do {
      puVar6 = puVar5;
      bVar11 = (uint64_t)plVar4[4] < (uint64_t)puVar6[4];
      if (bVar11) {
        puVar5 = (uint64_t *)puVar6[1];
      }
      else {
        puVar5 = (uint64_t *)*puVar6;
      }
    } while (puVar5 != (uint64_t *)0x0);
  }
  puVar5 = puVar6;
  plStackX_8 = plVar4;
  if (bVar11) {
    if (puVar6 == *(uint64_t **)(param_1 + 0x38)) goto LAB_18017a85e;
    puVar5 = (uint64_t *)Function_e2d50782(puVar6);
  }
  if ((uint64_t)plVar4[4] <= (uint64_t)puVar5[4]) {
    if ((int64_t *)plVar4[4] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar4[4] + 0x38))();
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar4);
  }
LAB_18017a85e:
  if ((puVar6 == puVar1) || (lVar10 = 1, (uint64_t)plVar4[4] < (uint64_t)puVar6[4])) {
    lVar10 = 0;
  }
// WARNING: Subroutine does not return
  SystemConfigProcessor(plVar4,puVar6,puVar1,lVar10);
}
// 函数: void GenericFunction_18017a9c0(int64_t *param_1)
void GenericFunction_18017a9c0(int64_t *param_1)
{
  if (param_1[9] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[5] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  DataTransformer0();
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18017aa30(int64_t param_1)
void GenericFunction_18017aa30(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t *plVar14;
  int64_t *plStack_138;
  int64_t *plStack_130;
  int64_t *plStack_128;
  int64_t *plStack_120;
  int32_t local_var_118;
  int64_t *plStack_110;
  int16_t local_var_108;
  char cStack_106;
  int64_t **pplStack_f8;
  int32_t local_var_f0;
  int32_t local_var_ec;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  uint local_var_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  int64_t *plStack_b0;
  uint local_var_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  int64_t *plStack_90;
  uint local_var_88;
  uint64_t local_var_78;
  int64_t **pplStack_70;
  int64_t **pplStack_68;
  int64_t **pplStack_60;
  int64_t *plStack_58;
  local_var_78 = 0xfffffffffffffffe;
  while (uVar4 = system_context_ptr, *(int *)(param_1 + 0x80) != 0) {
    lVar5 = PerformanceOptimizer(system_context_ptr);
    if (lVar5 != 0) {
      plVar6 = (int64_t *)PerformanceOptimizer(uVar4);
      (**(code **)(*plVar6 + 0x20))(plVar6,0);
    }
  }
  uVar11 = 0;
  lVar5 = *(int64_t *)(param_1 + 0x60);
  if ((*(int64_t *)(param_1 + 0x68) - lVar5) / 0x68 != 0) {
    pplStack_70 = &plStack_e0;
    pplStack_68 = &plStack_c0;
    pplStack_60 = &plStack_a0;
    uVar12 = uVar11;
    do {
      plVar6 = (int64_t *)0x0;
      plStack_e8 = *(int64_t **)(uVar11 + lVar5);
      if (plStack_e8 != (int64_t *)0x0) {
        (**(code **)(*plStack_e8 + 0x28))();
      }
      lVar8 = *(int64_t *)(uVar11 + 0x10 + lVar5) - *(int64_t *)(uVar11 + 8 + lVar5) >> 3;
      local_var_c8 = *(uint *)(uVar11 + 0x20 + lVar5);
      if (lVar8 != 0) {
        plVar6 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,local_var_c8 & 0xff);
      }
      plStack_d0 = plVar6 + lVar8;
      plVar7 = *(int64_t **)(uVar11 + 0x10 + lVar5);
      plStack_e0 = plVar6;
      plStack_d8 = plVar6;
      for (plVar9 = *(int64_t **)(uVar11 + 8 + lVar5); plVar9 != plVar7; plVar9 = plVar9 + 1) {
        plVar10 = (int64_t *)*plVar9;
        *plVar6 = (int64_t)plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))();
        }
        plVar6 = plVar6 + 1;
      }
      lVar8 = *(int64_t *)(uVar11 + 0x30 + lVar5) - *(int64_t *)(uVar11 + 0x28 + lVar5) >> 6;
      local_var_a8 = *(uint *)(uVar11 + 0x40 + lVar5);
      plStack_d8 = plVar6;
      if (lVar8 == 0) {
        plStack_c0 = (int64_t *)0x0;
      }
      else {
        plStack_c0 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 << 6,local_var_a8 & 0xff);
      }
      plVar6 = (int64_t *)0x0;
      plStack_b0 = plStack_c0 + lVar8 * 8;
      lVar8 = *(int64_t *)(uVar11 + 0x30 + lVar5);
      lVar2 = *(int64_t *)(uVar11 + 0x28 + lVar5);
      plStack_b8 = plStack_c0;
      if (lVar2 != lVar8) {
// WARNING: Subroutine does not return
        memmove(plStack_c0,lVar2,lVar8 - lVar2);
      }
      lVar8 = *(int64_t *)(uVar11 + 0x50 + lVar5) - *(int64_t *)(uVar11 + 0x48 + lVar5) >> 4;
      local_var_88 = *(uint *)(uVar11 + 0x60 + lVar5);
      plVar7 = plVar6;
      if (lVar8 != 0) {
        plVar7 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 << 4,local_var_88 & 0xff);
      }
      plVar9 = plStack_e8;
      plStack_90 = plVar7 + lVar8 * 2;
      lVar8 = *(int64_t *)(uVar11 + 0x50 + lVar5);
      lVar5 = *(int64_t *)(uVar11 + 0x48 + lVar5);
      plStack_a0 = plVar7;
      plStack_98 = plVar7;
      if (lVar5 != lVar8) {
// WARNING: Subroutine does not return
        memmove(plVar7,lVar5,lVar8 - lVar5);
      }
      plStack_58 = plStack_e8;
      if (plStack_e8 != (int64_t *)0x0) {
        (**(code **)(*plStack_e8 + 0x28))(plStack_e8);
      }
      plStack_138 = (int64_t *)0x0;
      plStack_130 = (int64_t *)0x0;
      pplStack_f8 = &plStack_128;
      plStack_110 = (int64_t *)0x0;
      plStack_120 = (int64_t *)0x0;
      plStack_128._0_1_ = 0;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      plVar7 = plStack_138;
      plStack_138 = plVar9;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x38))();
      }
      plStack_120 = plVar9;
      local_var_118 = 0;
      CoreEngine_07F4C0(&plStack_128);
      plVar7 = plStack_110;
      if (plStack_110 != (int64_t *)0x0) {
        (**(code **)(*plStack_110 + 0x28))(plStack_110);
      }
      plVar10 = plStack_130;
      plStack_130 = plVar7;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x38))();
      }
      local_var_108 = 0;
      cStack_106 = '\0';
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      plVar7 = plVar6;
      plVar10 = plVar6;
      plVar14 = plVar6;
      if ((int64_t)plStack_d8 - (int64_t)plStack_e0 >> 3 != 0) {
        do {
          plVar1 = (int64_t *)((int64_t)plVar7 + (int64_t)plStack_a0);
          pplStack_f8 = (int64_t **)*plVar1;
          local_var_f0 = (int32_t)plVar1[1];
          local_var_ec = *(int32_t *)((int64_t)plVar1 + 0xc);
          DataStructure_35ca0(&plStack_138,*(uint64_t *)((int64_t)plVar10 + (int64_t)plStack_e0),
                        plStack_c0 + (int64_t)plVar6 * 8,0xff,&pplStack_f8,1,0,0,1);
          uVar13 = (int)plVar14 + 1;
          plVar6 = (int64_t *)(int64_t)(int)uVar13;
          plVar7 = plVar7 + 2;
          plVar10 = plVar10 + 1;
          plVar14 = (int64_t *)(uint64_t)uVar13;
        } while (plVar6 < (int64_t *)((int64_t)plStack_d8 - (int64_t)plStack_e0 >> 3));
      }
      GenericFunction_18007ea10(plVar9,1);
      if ((plStack_138 != (int64_t *)0x0) && (plStack_130 != (int64_t *)0x0)) {
        if (cStack_106 != '\0') {
          SystemConfig_Manager();
        }
        SystemSecurityManager(&plStack_128);
        if ((char)local_var_108 != '\0') {
          SystemInitializer(plStack_138);
        }
        if (local_var_108._1_1_ != '\0') {
          SystemInitializer(plStack_138);
        }
        plVar6 = plStack_130;
        plStack_130 = (int64_t *)0x0;
        if (plVar6 != (int64_t *)0x0) {
          (**(code **)(*plVar6 + 0x38))();
        }
      }
      pplStack_f8 = &plStack_128;
      SystemSecurityManager(&plStack_128);
      if (plStack_110 != (int64_t *)0x0) {
        (**(code **)(*plStack_110 + 0x38))();
      }
      if (plStack_130 != (int64_t *)0x0) {
        (**(code **)(*plStack_130 + 0x38))();
      }
      if (plStack_138 != (int64_t *)0x0) {
        (**(code **)(*plStack_138 + 0x38))();
      }
      pplStack_f8 = &plStack_a0;
      if (plStack_a0 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      pplStack_f8 = &plStack_c0;
      if (plStack_c0 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      pplStack_f8 = &plStack_e0;
      DataTransformer0(&plStack_e0);
      if (plStack_e8 != (int64_t *)0x0) {
        (**(code **)(*plStack_e8 + 0x38))();
      }
      uVar13 = (int)uVar12 + 1;
      uVar12 = (uint64_t)uVar13;
      uVar11 = uVar11 + 0x68;
      lVar5 = *(int64_t *)(param_1 + 0x60);
    } while ((uint64_t)(int64_t)(int)uVar13 <
             (uint64_t)((*(int64_t *)(param_1 + 0x68) - lVar5) / 0x68));
  }
  for (lVar5 = *(int64_t *)(param_1 + 8); lVar5 != param_1; lVar5 = Function_7bfb2422(lVar5)) {
    plVar6 = *(int64_t **)(*(int64_t *)(lVar5 + 0x20) + 0x210);
    *(uint64_t *)(*(int64_t *)(lVar5 + 0x20) + 0x210) = 0;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x38))();
    }
  }
  puVar3 = *(uint64_t **)(param_1 + 0x10);
  if (puVar3 == (uint64_t *)0x0) {
    *(int64_t *)param_1 = param_1;
    *(int64_t *)(param_1 + 8) = param_1;
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(int8_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
    lVar5 = param_1 + 0x30;
    puVar3 = *(uint64_t **)(param_1 + 0x40);
    if (puVar3 == (uint64_t *)0x0) {
      *(int64_t *)lVar5 = lVar5;
      *(int64_t *)(param_1 + 0x38) = lVar5;
      *(uint64_t *)(param_1 + 0x40) = 0;
      *(int8_t *)(param_1 + 0x48) = 0;
      *(uint64_t *)(param_1 + 0x50) = 0;
      lVar5 = *(int64_t *)(param_1 + 0x68);
      lVar8 = *(int64_t *)(param_1 + 0x60);
      if (lVar8 == lVar5) {
        *(int64_t *)(param_1 + 0x68) = lVar8;
      }
      else {
        do {
          GenericFunction_18017a9c0(lVar8);
          lVar8 = lVar8 + 0x68;
        } while (lVar8 != lVar5);
        *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0x60);
      }
      return;
    }
    GenericFunction_18017b400(lVar5,*puVar3);
    if ((int64_t *)puVar3[4] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)puVar3[4] + 0x38))();
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
  GenericFunction_1800b9270(param_1,*puVar3);
  if ((int64_t *)puVar3[5] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)puVar3[5] + 0x38))();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * GenericFunction_18017b070(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uVar9 = 0xfffffffffffffffe;
  plVar8 = (int64_t *)*param_2;
  *param_1 = (int64_t)plVar8;
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
  lVar6 = param_2[2] - param_2[1] >> 3;
  uVar1 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) = uVar1;
  lVar5 = 0;
  lVar4 = lVar5;
  if (lVar6 != 0) {
    lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,uVar1 & 0xff,param_4,uVar9);
  }
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = lVar4 + lVar6 * 8;
  plVar8 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)param_2[2];
  for (plVar7 = (int64_t *)param_2[1]; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    plVar3 = (int64_t *)*plVar7;
    *plVar8 = (int64_t)plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
    }
    plVar8 = plVar8 + 1;
  }
  param_1[2] = (int64_t)plVar8;
  lVar6 = param_2[6] - param_2[5] >> 6;
  uVar1 = *(uint *)(param_2 + 8);
  *(uint *)(param_1 + 8) = uVar1;
  lVar4 = lVar5;
  if (lVar6 != 0) {
    lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 << 6,uVar1 & 0xff,param_4,uVar9);
  }
  param_1[5] = lVar4;
  param_1[6] = lVar4;
  param_1[7] = lVar6 * 0x40 + lVar4;
  lVar4 = param_1[5];
  lVar6 = param_2[5];
  if (lVar6 != param_2[6]) {
// WARNING: Subroutine does not return
    memmove(lVar4,lVar6,param_2[6] - lVar6);
  }
  param_1[6] = lVar4;
  lVar4 = param_2[10] - param_2[9] >> 4;
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar1;
  if (lVar4 != 0) {
    lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 << 4,uVar1 & 0xff,param_4,uVar9);
  }
  param_1[9] = lVar5;
  param_1[10] = lVar5;
  param_1[0xb] = lVar4 * 0x10 + lVar5;
  lVar4 = param_1[9];
  lVar5 = param_2[9];
  if (lVar5 != param_2[10]) {
// WARNING: Subroutine does not return
    memmove(lVar4,lVar5,param_2[10] - lVar5);
  }
  param_1[10] = lVar4;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * GenericFunction_18017b240(int64_t *param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  if (param_1 != param_2) {
    lVar1 = *param_1;
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar7 = lVar3 - lVar2;
    uVar5 = lVar7 >> 6;
    if ((uint64_t)(param_1[2] - lVar1 >> 6) < uVar5) {
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar5 << 6,(char)param_1[3]);
      }
      if (lVar2 != lVar3) {
// WARNING: Subroutine does not return
        memmove(lVar4,lVar2,lVar7);
      }
      if (*param_1 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *param_1 = lVar4;
      lVar4 = uVar5 * 0x40 + lVar4;
      param_1[2] = lVar4;
    }
    else {
      lVar4 = param_1[1];
      uVar6 = lVar4 - lVar1 >> 6;
      if (uVar5 <= uVar6) {
        if (lVar2 == lVar3) {
          param_1[1] = lVar1;
          return param_1;
        }
// WARNING: Subroutine does not return
        memmove(lVar1,lVar2,lVar7);
      }
      lVar7 = uVar6 * 0x40 + lVar2;
      if (lVar2 != lVar7) {
// WARNING: Subroutine does not return
        memmove(lVar1,lVar2);
      }
      if (lVar7 != lVar3) {
// WARNING: Subroutine does not return
        memmove(lVar4,lVar7,lVar3 - lVar7);
      }
    }
    param_1[1] = lVar4;
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18017b259(int64_t param_1,int64_t *param_2)
void GenericFunction_18017b259(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t lVar3;
  int64_t *unaff_RBX;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar6 = lVar2 - lVar1;
  uVar4 = lVar6 >> 6;
  if ((uint64_t)(in_RAX - param_1 >> 6) < uVar4) {
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 << 6,(char)unaff_RBX[3]);
    }
    if (lVar1 != lVar2) {
// WARNING: Subroutine does not return
      memmove(lVar3,lVar1,lVar6);
    }
    if (*unaff_RBX != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *unaff_RBX = lVar3;
    lVar3 = uVar4 * 0x40 + lVar3;
    unaff_RBX[2] = lVar3;
  }
  else {
    lVar3 = unaff_RBX[1];
    uVar5 = lVar3 - param_1 >> 6;
    if (uVar4 <= uVar5) {
      if (lVar1 == lVar2) {
        unaff_RBX[1] = param_1;
        return;
      }
// WARNING: Subroutine does not return
      memmove(param_1,lVar1,lVar6);
    }
    lVar6 = uVar5 * 0x40 + lVar1;
    if (lVar1 != lVar6) {
// WARNING: Subroutine does not return
      memmove(param_1,lVar1);
    }
    if (lVar6 != lVar2) {
// WARNING: Subroutine does not return
      memmove(lVar3,lVar6,lVar2 - lVar6);
    }
  }
  unaff_RBX[1] = lVar3;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address