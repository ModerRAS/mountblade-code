// 原始函数语义化别名定义
// 本文件包含当前文件中使用的原始函数的语义化别名
// 这些别名提高了代码的可读性和维护性
#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemAdvancedValidator_definition.h"
#include "SystemDataAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_02_part039.c - 11 个函数
// 函数: void GenericFunction_1801ae1a0(int64_t *param_1)
void GenericFunction_1801ae1a0(int64_t *param_1)
{
  int64_t *plVar1;
  int iVar2;
  void *puVar3;
  uint64_t uVar4;
  int64_t *plStack_40;
  int64_t *plStack_38;
  int8_t stack_array_30 [8];
  uint64_t local_var_28;
  int64_t *plStack_18;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  uVar4 = 0xfffffffffffffffe;
  param_1 = (int64_t *)*param_1;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  plStack_40 = (int64_t *)0x0;
  plStack_38 = (int64_t *)0x0;
  plStack_18 = (int64_t *)0x0;
  local_var_28 = 0;
  stack_array_30[0] = 0;
  RenderingSystem_MaterialProcessor(&plStack_40,param_1,0);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  iVar2 = DataStructure_349a0(plStack_38);
  if ((10 < iVar2) ||
     ((int)((int)plStack_38[0x11] + ((int)plStack_38[0x11] >> 0x1f & 3U)) >> 2 < iVar2)) {
    puVar3 = &system_buffer_ptr;
    if ((void *)plStack_40[3] != (void *)0x0) {
      puVar3 = (void *)plStack_40[3];
    }
    SystemConfigurationManager(system_message_context,0,0x80000000000,3,&processed_var_5472_ptr,iVar2,puVar3,(int)plStack_38[0xc],
                  uVar4);
  }
  cStack_10 = '\x01';
  if (plStack_38 != (int64_t *)0x0) {
    if (cStack_e != '\0') {
      SystemConfig_Manager(plStack_40);
    }
    SystemSecurityManager(stack_array_30);
    if (cStack_10 != '\0') {
      SystemInitializer(plStack_40);
    }
    if (cStack_f != '\0') {
      SystemInitializer(plStack_40);
    }
    plVar1 = plStack_38;
    plStack_38 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  if ((plStack_40 != (int64_t *)0x0) && (plStack_38 != (int64_t *)0x0)) {
    if (cStack_e != '\0') {
      SystemConfig_Manager();
    }
    SystemSecurityManager(stack_array_30);
    if (cStack_10 != '\0') {
      SystemInitializer(plStack_40);
    }
    if (cStack_f != '\0') {
      SystemInitializer(plStack_40);
    }
    plVar1 = plStack_38;
    plStack_38 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  SystemSecurityManager(stack_array_30);
  if (plStack_18 != (int64_t *)0x0) {
    (**(code **)(*plStack_18 + 0x38))();
  }
  if (plStack_38 != (int64_t *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStack_40 != (int64_t *)0x0) {
    (**(code **)(*plStack_40 + 0x38))();
  }
  return;
}
int64_t * GenericFunction_1801ae3a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plStack_40;
  uint64_t local_var_38;
  int64_t *plStack_28;
  GenericFunction_1801be910(param_1 + 0x607e0,&plStack_40,param_3,param_4,0xfffffffffffffffe);
  uVar5 = local_var_38;
  plVar6 = plStack_28;
  do {
    if (uVar5 == *(uint64_t *)(param_1 + 0x60838)) {
      return (int64_t *)0x0;
    }
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    cVar2 = DataStructure_eee20(plVar6,&processed_var_5552_ptr);
    if (cVar2 != '\0') {
      if (plVar6 == (int64_t *)0x0) {
        return (int64_t *)0x0;
      }
      (**(code **)(*plVar6 + 0x38))(plVar6);
      return plVar6;
    }
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    lVar1 = *plStack_40;
    do {
      uVar5 = uVar5 + 1;
      lVar3 = (uVar5 & 0xffffffff) * 0x10;
      lVar4 = lVar3 + 8 + lVar1;
      if ((*(uint64_t *)(lVar3 + lVar1) & 0xffffffff00000000) == 0) {
        lVar4 = 0;
      }
      if (lVar4 != 0) {
        plVar6 = *(int64_t **)(lVar1 + 8 + (uVar5 & 0xffffffff) * 0x10);
        break;
      }
    } while (uVar5 != plStack_40[1]);
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801ae4a0(int64_t param_1,int64_t param_2,int64_t *param_3,uint64_t param_4)
void GenericFunction_1801ae4a0(int64_t param_1,int64_t param_2,int64_t *param_3,uint64_t param_4)
{
  int64_t *plVar1;
  char cVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  int64_t *plStack_60;
  uint64_t local_var_58;
  int64_t *plStack_48;
  GenericFunction_1801be910(param_1 + 0x607e0,&plStack_60,param_3,param_4,0xfffffffffffffffe);
  plVar10 = plStack_48;
  uVar11 = local_var_58;
  do {
    puVar3 = (uint64_t *)0x0;
    if (uVar11 == *(uint64_t *)(param_1 + 0x60838)) {
      return;
    }
    if (plVar10 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10);
    }
    if ((param_2 != 0) && (cVar2 = DataStructure_eee20(plVar10,param_2), cVar2 != '\0')) {
      puVar8 = (uint64_t *)param_3[1];
      if (puVar8 < (uint64_t *)param_3[2]) {
        param_3[1] = (int64_t)(puVar8 + 1);
        *puVar8 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
      }
      else {
        puVar4 = (uint64_t *)*param_3;
        lVar7 = (int64_t)puVar8 - (int64_t)puVar4 >> 3;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_1801ae592:
          puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,(char)param_3[3]);
          puVar8 = (uint64_t *)param_3[1];
          puVar4 = (uint64_t *)*param_3;
          puVar12 = puVar3;
        }
        else {
          lVar7 = lVar7 * 2;
          puVar12 = puVar3;
          if (lVar7 != 0) goto LAB_1801ae592;
        }
        for (; puVar4 != puVar8; puVar4 = puVar4 + 1) {
          *puVar3 = *puVar4;
          *puVar4 = 0;
          puVar3 = puVar3 + 1;
        }
        *puVar3 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        plVar1 = (int64_t *)param_3[1];
        plVar9 = (int64_t *)*param_3;
        if (plVar9 != plVar1) {
          do {
            if ((int64_t *)*plVar9 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar9 + 0x38))();
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar1);
          plVar9 = (int64_t *)*param_3;
        }
        if (plVar9 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar9);
        }
        *param_3 = (int64_t)puVar12;
        param_3[1] = (int64_t)(puVar3 + 1);
        param_3[2] = (int64_t)(puVar12 + lVar7);
      }
    }
    if (plVar10 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    lVar7 = *plStack_60;
    do {
      uVar11 = uVar11 + 1;
      lVar5 = (uVar11 & 0xffffffff) * 0x10;
      lVar6 = lVar5 + 8 + lVar7;
      if ((*(uint64_t *)(lVar5 + lVar7) & 0xffffffff00000000) == 0) {
        lVar6 = 0;
      }
      if (lVar6 != 0) {
        plVar10 = *(int64_t **)(lVar7 + 8 + (uVar11 & 0xffffffff) * 0x10);
        break;
      }
    } while (uVar11 != plStack_60[1]);
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801ae6c0(int64_t param_1,int8_t *param_2,float *param_3,uint64_t *param_4,
void GenericFunction_1801ae6c0(int64_t param_1,int8_t *param_2,float *param_3,uint64_t *param_4,
                  float *param_5,float *param_6)
{
  int64_t *plVar1;
  bool bVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint local_buffer_58;
  char local_buffer_60;
  int8_t stack_array_1b8 [48];
  void *plocal_var_188;
  int32_t local_var_180;
  uint local_var_17c;
  int8_t local_var_178;
  uint64_t local_var_170;
  int8_t local_var_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int8_t local_var_13c;
  void **pplocal_var_138;
  uint64_t local_var_130;
  int8_t stack_array_128 [64];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float afStack_c8 [4];
  uint64_t stack_array_b8 [2];
  int iStack_a8;
  uint64_t stack_array_98 [3];
  float fStack_7c;
  float afStack_78 [3];
  int8_t stack_array_6c [8];
  int8_t stack_array_64 [12];
  int iStack_58;
  uint64_t local_var_48;
  local_var_130 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1b8;
  *param_2 = 0;
  SystemFunction_0001801be7c0(stack_array_128);
  fStack_d0 = param_6[2] - param_5[2];
  fStack_d4 = param_6[1] - param_5[1];
  fStack_d8 = *param_6 - *param_5;
  fStack_e8 = *param_5;
  fStack_e4 = param_5[1];
  fStack_e0 = param_5[2];
  fStack_dc = param_5[3];
  fStack_cc = 3.4028235e+38;
  fStack_140 = (float)SystemFunction_00018023a1e0(&fStack_d8);
  local_var_178 = 0;
  plocal_var_188 = &processed_var_6280_ptr;
  local_var_168 = 1;
  uVar8 = 0;
  local_var_170 = 0;
  local_var_17c = local_buffer_58 | 0x31b189;
  local_var_180 = 2;
  iStack_58 = 0;
  fStack_160 = fStack_e8;
  fStack_15c = fStack_e4;
  fStack_158 = fStack_e0;
  fStack_154 = fStack_dc;
  fStack_150 = fStack_d8;
  fStack_14c = fStack_d4;
  fStack_148 = fStack_d0;
  fStack_144 = fStack_cc;
  local_var_13c = 0;
  pplocal_var_138 = &plocal_var_188;
  plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
  afStack_c8[0] = fStack_140;
  (**(code **)(*plVar1 + 0x118))(plVar1,&fStack_160,stack_array_98);
  iVar7 = iStack_58;
  bVar2 = 0 < iStack_58;
  uVar10 = uVar8;
  if (0 < iStack_58) {
    uVar10 = stack_array_98[0];
  }
  if ((local_buffer_60 != '\0') && (uVar10 != 0)) {
    iStack_a8 = 0;
    plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0x28f8) + 0x318);
    (**(code **)(*plVar1 + 0x118))(plVar1,&fStack_160,&fStack_e8);
    if ((iStack_a8 != 0) &&
       (((CONCAT44(fStack_e4,fStack_e8) != 0 &&
         ((fStack_7c - fStack_cc) * (fStack_7c - fStack_cc) +
          (afStack_78[0] - afStack_c8[0]) * (afStack_78[0] - afStack_c8[0]) +
          (afStack_78[1] - afStack_c8[1]) * (afStack_78[1] - afStack_c8[1]) < 10.0)) &&
        (iStack_58 = iStack_a8, uVar10 = uVar8, 0 < iStack_a8)))) {
      do {
        *(uint64_t *)((int64_t)stack_array_98 + uVar8) =
             *(uint64_t *)((int64_t)&fStack_e8 + uVar8);
        *(uint64_t *)((int64_t)stack_array_98 + uVar8 + 8) =
             *(uint64_t *)((int64_t)&fStack_e0 + uVar8);
        uVar6 = *(uint64_t *)((int64_t)&fStack_d0 + uVar8);
        *(uint64_t *)((int64_t)stack_array_98 + uVar8 + 0x10) =
             *(uint64_t *)((int64_t)&fStack_d8 + uVar8);
        *(uint64_t *)(&local_buffer_ffffffffffffff80 + uVar8) = uVar6;
        uVar3 = *(int32_t *)((int64_t)afStack_c8 + uVar8 + 4);
        uVar4 = *(int32_t *)((int64_t)afStack_c8 + uVar8 + 8);
        uVar5 = *(int32_t *)((int64_t)afStack_c8 + uVar8 + 0xc);
        *(int32_t *)((int64_t)afStack_78 + uVar8) =
             *(int32_t *)((int64_t)afStack_c8 + uVar8);
        *(int32_t *)((int64_t)afStack_78 + uVar8 + 4) = uVar3;
        *(int32_t *)((int64_t)afStack_78 + uVar8 + 8) = uVar4;
        *(int32_t *)(stack_array_6c + uVar8) = uVar5;
        uVar6 = *(uint64_t *)((int64_t)stack_array_b8 + uVar8 + 8);
        *(uint64_t *)(stack_array_6c + uVar8 + 4) = *(uint64_t *)((int64_t)stack_array_b8 + uVar8);
        *(uint64_t *)(stack_array_64 + uVar8 + 4) = uVar6;
        uVar9 = (int)uVar10 + 1;
        uVar8 = uVar8 + 0x40;
        uVar10 = (uint64_t)uVar9;
      } while ((int)uVar9 < iStack_58);
    }
    iStack_a8 = 0;
  }
  *param_2 = bVar2;
  if (0 < iVar7) {
    *param_3 = fStack_7c;
    param_3[1] = afStack_78[0];
    param_3[2] = afStack_78[1];
    param_3[3] = afStack_78[2];
    *param_4 = stack_array_6c;
    param_4[1] = stack_array_64._0_8_;
  }
  iStack_58 = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801ae990(int64_t param_1,int64_t *param_2)
void GenericFunction_1801ae990(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int8_t stack_array_d8 [32];
  void *plocal_var_b8;
  uint64_t *plocal_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  int64_t *plStack_98;
  uint64_t local_var_88;
  int64_t *plStack_80;
  uint64_t local_var_40;
  local_var_88 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  plVar2 = (int64_t *)*param_2;
  plStack_80 = param_2;
  if (plVar2 != (int64_t *)0x0) {
    plVar1 = (int64_t *)(param_1 + 0x388);
    plStack_98 = plVar2;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    plStack_98 = (int64_t *)*plVar1;
    *plVar1 = (int64_t)plVar2;
    if (plStack_98 != (int64_t *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    DataStructure_2cd30(*plVar1,0,*(uint64_t *)(*(int64_t *)(param_1 + 0x380) + 0x38));
    DataStructure_2cd30(*plVar1,1,*(uint64_t *)(*(int64_t *)(param_1 + 0x380) + 0x40));
    uVar3 = *(uint64_t *)(*plVar1 + 0x1e0);
    plocal_var_b8 = &system_data_buffer_ptr;
    local_var_a0 = 0;
    plocal_var_b0 = (uint64_t *)0x0;
    local_var_a8 = 0;
    puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar5 = 0;
    plocal_var_b0 = puVar5;
    uVar4 = CoreEngineSystemCleanup(puVar5);
    local_var_a0 = CONCAT44(local_var_a0._4_4_,uVar4);
    *puVar5 = 0x657463656a6f7270;
    *(int32_t *)(puVar5 + 1) = 0x72675f64;
    *(int16_t *)((int64_t)puVar5 + 0xc) = 0x6469;
    *(int8_t *)((int64_t)puVar5 + 0xe) = 0;
    local_var_a8 = 0xe;
    SystemCore_LoggingSystem0(uVar3,&plocal_var_b8,0);
    plocal_var_b8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar5);
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801aedf0(int64_t param_1)
void GenericFunction_1801aedf0(int64_t param_1)
{
  int64_t **pplVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  void *puVar7;
  int64_t *plVar8;
  int8_t stack_array_d8 [32];
  int32_t local_var_b8;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  int64_t *plStack_98;
  float fStack_90;
  float fStack_8c;
  int32_t local_var_84;
  uint64_t local_var_78;
  void *plocal_var_68;
  uint *plocal_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  uint stack_array_50 [6];
  float fStack_38;
  float fStack_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  uint64_t local_var_28;
  local_var_78 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  if ((*(int64_t *)(param_1 + 0x60b80) == 0) || (*(char *)(param_1 + 0x3ef0) == '\0')) {
    GenericFunction_1801b0140();
    plVar8 = *(int64_t **)(param_1 + 0x8218);
    if (plVar8 == (int64_t *)0x0) goto LAB_1801af114;
    plStack_98 = plVar8;
    (**(code **)(*plVar8 + 0x28))();
    local_var_a8 = &plStack_98;
    local_var_b8 = 0x39;
    CoreEngine_198980(param_1,plStack_98);
    if (plStack_98 == (int64_t *)0x0) goto LAB_1801af114;
    lVar4 = *plStack_98;
    plVar8 = plStack_98;
  }
  else {
    GenericFunction_1801afca0();
    plStack_98 = (int64_t *)0x0;
    if (*(int *)(param_1 + 0x3e90) == 0) {
LAB_1801aeebc:
      plocal_var_68 = &processed_var_672_ptr;
      plocal_var_60 = stack_array_50;
      stack_array_50[0] = stack_array_50[0] & 0xffffff00;
      local_var_58 = 0xe;
      strcpy_s(stack_array_50,0x20,&processed_var_4456_ptr);
      puVar5 = (uint64_t *)SystemCore_PerformanceMonitor(system_resource_state,&local_var_a0,&plocal_var_68,0);
      plVar8 = (int64_t *)*puVar5;
      *puVar5 = 0;
      local_var_a8 = (int64_t **)0x0;
      plStack_98 = plVar8;
      if (local_var_a0 != (int64_t *)0x0) {
        (**(code **)(*local_var_a0 + 0x38))();
      }
      plocal_var_68 = &system_state_ptr;
    }
    else {
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x3ed8) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 0x3ed8);
      }
      lVar4 = strstr(puVar7,&processed_var_4424_ptr);
      if (lVar4 != 0) goto LAB_1801aeebc;
      puVar5 = (uint64_t *)SystemCore_PerformanceMonitor(system_resource_state,&local_var_a0,param_1 + 0x3ed0,0);
      plVar8 = (int64_t *)*puVar5;
      *puVar5 = 0;
      local_var_a8 = (int64_t **)0x0;
      plStack_98 = plVar8;
      if (local_var_a0 != (int64_t *)0x0) {
        (**(code **)(*local_var_a0 + 0x38))();
      }
    }
    local_var_a8 = (int64_t **)&local_var_a0;
    local_var_a0 = plVar8;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    GenericFunction_1801ae990(param_1,&local_var_a0);
    if (*(int64_t *)(param_1 + 0x8218) == 0) {
      SystemFunction_0001801be740(param_1 + 0x60c10);
      if ((*(int *)(param_1 + 0x60c40) != -1) &&
         (*(int64_t *)
           (*(int64_t *)(param_1 + 0x60c20) + (int64_t)*(int *)(param_1 + 0x60c40) * 8) != 0)) {
        if (*(int *)(param_1 + 0x4e8) == 8) {
          iVar3 = strcmp(*(uint64_t *)(param_1 + 0x4e0),&memory_allocator_3680_ptr);
          if (iVar3 == 0) goto LAB_1801af0c0;
        }
        uVar6 = RenderingSystem_19490(param_1 + 0x60c10,&local_var_a8);
        SystemCore_ChecksumValidator(param_1 + 0x8218,uVar6);
        if (local_var_a8 != (int64_t **)0x0) {
          (*(code *)(*local_var_a8)[7])();
        }
      }
    }
    else {
      local_var_84 = 0;
      lVar4 = *(int64_t *)(param_1 + 0x60b80);
      if (lVar4 == 0) {
        pplVar1 = *(int64_t ***)(param_1 + 0x464);
        plVar2 = *(int64_t **)(param_1 + 0x454);
        local_var_a0._0_4_ = SUB84(plVar2,0);
        local_var_a8._0_4_ = SUB84(pplVar1,0);
        fStack_90 = (float)local_var_a0 + (float)local_var_a8;
        local_var_a0._4_4_ = (float)((uint64_t)plVar2 >> 0x20);
        local_var_a8._4_4_ = (float)((uint64_t)pplVar1 >> 0x20);
        fStack_8c = local_var_a0._4_4_ + local_var_a8._4_4_;
        local_var_a8 = pplVar1;
        local_var_a0 = plVar2;
      }
      else {
        fStack_90 = *(float *)(lVar4 + 0x20);
        fStack_8c = *(float *)(lVar4 + 0x24);
      }
      fStack_90 = fStack_90 * 0.5;
      fStack_8c = fStack_8c * 0.5;
      plocal_var_68 = (void *)0x3f800000;
      plocal_var_60 = (uint *)0x0;
      local_var_58 = 0;
      local_var_54 = 0x3f800000;
      stack_array_50[0] = 0;
      stack_array_50[1] = 0;
      stack_array_50[2] = 0;
      stack_array_50[3] = 0;
      stack_array_50[4] = 0x3f800000;
      stack_array_50[5] = 0;
      fStack_38 = fStack_90;
      local_var_2c = 0;
      local_var_30 = *(int32_t *)(param_1 + 0x3ec4);
      fStack_34 = fStack_8c;
      NetworkProtocol_Transmitter(*(int64_t *)(param_1 + 0x8218),&plocal_var_68);
    }
LAB_1801af0c0:
    if (plVar8 == (int64_t *)0x0) goto LAB_1801af114;
    lVar4 = *plVar8;
  }
  (**(code **)(lVar4 + 0x38))(plVar8);
LAB_1801af114:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801af140(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_1801af140(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  int64_t *plStack_60;
  uint64_t local_var_58;
  int64_t *plStack_48;
  GenericFunction_1801be910(param_1 + 0x607e0,&plStack_60,param_3,param_4,0xfffffffffffffffe);
  uVar8 = local_var_58;
  plVar11 = plStack_48;
  do {
    puVar2 = (uint64_t *)0x0;
    if (uVar8 == *(uint64_t *)(param_1 + 0x60838)) {
      return;
    }
    if (plVar11[0x2d] == 0) {
      (**(code **)(*plVar11 + 0x28))(plVar11);
      puVar9 = (uint64_t *)param_2[1];
      if (puVar9 < (uint64_t *)param_2[2]) {
        param_2[1] = (int64_t)(puVar9 + 1);
        *puVar9 = plVar11;
      }
      else {
        puVar3 = (uint64_t *)*param_2;
        lVar6 = (int64_t)puVar9 - (int64_t)puVar3 >> 3;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_1801af208:
          puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,(char)param_2[3]);
          puVar9 = (uint64_t *)param_2[1];
          puVar3 = (uint64_t *)*param_2;
          puVar10 = puVar2;
        }
        else {
          lVar6 = lVar6 * 2;
          puVar10 = puVar2;
          if (lVar6 != 0) goto LAB_1801af208;
        }
        for (; puVar3 != puVar9; puVar3 = puVar3 + 1) {
          *puVar2 = *puVar3;
          *puVar3 = 0;
          puVar2 = puVar2 + 1;
        }
        *puVar2 = plVar11;
        plVar1 = (int64_t *)param_2[1];
        plVar7 = (int64_t *)*param_2;
        if (plVar7 != plVar1) {
          do {
            if ((int64_t *)*plVar7 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar7 + 0x38))();
            }
            plVar7 = plVar7 + 1;
          } while (plVar7 != plVar1);
          plVar7 = (int64_t *)*param_2;
        }
        if (plVar7 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar7);
        }
        *param_2 = (int64_t)puVar10;
        param_2[1] = (int64_t)(puVar2 + 1);
        param_2[2] = (int64_t)(puVar10 + lVar6);
      }
    }
    lVar6 = *plStack_60;
    do {
      uVar8 = uVar8 + 1;
      lVar4 = (uVar8 & 0xffffffff) * 0x10;
      lVar5 = lVar4 + 8 + lVar6;
      if ((*(uint64_t *)(lVar4 + lVar6) & 0xffffffff00000000) == 0) {
        lVar5 = 0;
      }
      if (lVar5 != 0) {
        plVar11 = *(int64_t **)(lVar6 + 8 + (uVar8 & 0xffffffff) * 0x10);
        break;
      }
    } while (uVar8 != plStack_60[1]);
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t *
GenericFunction_1801af320(uint64_t param_1,int64_t *param_2,int8_t *param_3,int64_t param_4,
             uint64_t param_5,int8_t param_6)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void *puVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  bool bVar12;
  int64_t *plStackX_20;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2f0,0x10,0xd);
  plVar2 = (int64_t *)DataStructure_e6b00(uVar1,*param_3);
  *param_2 = (int64_t)plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  lVar6 = *param_2;
  if (param_4 == 0) {
    if (*(int64_t *)(lVar6 + 0x268) == 0) {
      GenericFunction_180170ac0(lVar6,&processed_var_4472_ptr);
    }
  }
  else {
    puVar7 = &system_buffer_ptr;
    if (*(void **)(param_4 + 0x290) != (void *)0x0) {
      puVar7 = *(void **)(param_4 + 0x290);
    }
    (**(code **)(*(int64_t *)(lVar6 + 0x288) + 0x10))((int64_t *)(lVar6 + 0x288),puVar7);
    plVar2 = (int64_t *)(system_system_data_memory + 8);
    bVar12 = system_system_data_memory == *plVar2;
    lVar6 = system_system_data_memory;
    while (!bVar12) {
      iVar9 = 0;
      lVar3 = SystemFunction_00018066b9a0(lVar6);
      if (*(int64_t *)(lVar3 + 0x30) - *(int64_t *)(lVar3 + 0x28) >> 3 != 0) {
        lVar3 = 0;
        do {
          lVar4 = SystemFunction_00018066b9a0(lVar6);
          lVar4 = *(int64_t *)(lVar3 + *(int64_t *)(lVar4 + 0x28));
          iVar10 = 0;
          plVar5 = *(int64_t **)(lVar4 + 0x28);
          uVar11 = *(int64_t *)(lVar4 + 0x30) - (int64_t)plVar5 >> 3;
          if (uVar11 != 0) {
            do {
              if (*plVar5 == param_4) {
                cVar8 = '\x01';
                goto LAB_1801af476;
              }
              iVar10 = iVar10 + 1;
              plVar5 = plVar5 + 1;
            } while ((uint64_t)(int64_t)iVar10 < uVar11);
          }
          iVar9 = iVar9 + 1;
          lVar3 = lVar3 + 8;
          lVar4 = SystemFunction_00018066b9a0(lVar6);
        } while ((uint64_t)(int64_t)iVar9 <
                 (uint64_t)(*(int64_t *)(lVar4 + 0x30) - *(int64_t *)(lVar4 + 0x28) >> 3));
      }
      lVar6 = SystemFunction_00018066b9a0(lVar6);
      bVar12 = lVar6 == *plVar2;
    }
    cVar8 = '\0';
LAB_1801af476:
    DataStructure_ec6e0(*param_2,param_4,cVar8,param_6,0);
    if (cVar8 == '\0') {
      if (*(int64_t *)(param_4 + 0x268) != 0) {
        DataStructure_efa20(*param_2,param_4);
      }
    }
    else {
      DataStructure_ef920(*param_2,param_4);
    }
  }
  NetworkProtocol_Transmitter(*param_2,param_5);
  plStackX_20 = (int64_t *)*param_2;
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))();
  }
  GenericFunction_180198b90(param_1,&plStackX_20,1,1,0,param_6,0);
  return param_2;
}
// 函数: void GenericFunction_1801af550(int64_t param_1,uint64_t param_2,uint64_t param_3)
void GenericFunction_1801af550(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t lVar1;
  int32_t uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Db;
  int32_t extraout_XMM0_Db_00;
  float fVar8;
  int8_t auVar10 [16];
  int8_t auVar12 [16];
  uint64_t stack_special_x_10;
  uint64_t stack_special_x_18;
  int8_t auVar9 [16];
  int8_t auVar11 [16];
  lVar1 = param_1 + 0x28c8;
  stack_special_x_10 = param_2;
  stack_special_x_18 = param_3;
  SystemFunction_0001801c0ee0(lVar1);
  if (*(char *)(param_1 + 0x2901) != '\0') {
    *(int8_t *)(param_1 + 0x2901) = 0;
    GenericFunction_1801c0df0(lVar1);
  }
  uVar2 = logf(((float)stack_special_x_18 - (float)stack_special_x_10) * 0.2);
  fVar7 = extraout_XMM0_Da * 1.442695;
  auVar10._4_4_ = extraout_XMM0_Db;
  auVar10._0_4_ = fVar7;
  iVar4 = (int)fVar7;
  fVar8 = fVar7;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar7)) {
    auVar10._8_4_ = extraout_XMM0_Db;
    auVar10._12_4_ = extraout_XMM0_Db;
    auVar9._8_8_ = auVar10._8_8_;
    auVar9._4_4_ = fVar7;
    auVar9._0_4_ = fVar7;
    uVar3 = movmskps(uVar2,auVar9);
    fVar8 = (float)(int)(iVar4 + (uVar3 & 1 ^ 1));
  }
  if (fVar7 <= 0.0) {
    fVar8 = fVar8 - 1e-08;
  }
  else {
    fVar8 = fVar8 + 1e-08;
  }
  iVar6 = (int)fVar8;
  uVar2 = logf((stack_special_x_18._4_4_ - stack_special_x_10._4_4_) * 0.2);
  fVar7 = extraout_XMM0_Da_00 * 1.442695;
  auVar12._4_4_ = extraout_XMM0_Db_00;
  auVar12._0_4_ = fVar7;
  iVar4 = (int)fVar7;
  fVar8 = fVar7;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar7)) {
    auVar12._8_4_ = extraout_XMM0_Db_00;
    auVar12._12_4_ = extraout_XMM0_Db_00;
    auVar11._8_8_ = auVar12._8_8_;
    auVar11._4_4_ = fVar7;
    auVar11._0_4_ = fVar7;
    uVar3 = movmskps(uVar2,auVar11);
    fVar8 = (float)(int)(iVar4 + (uVar3 & 1 ^ 1));
  }
  if (fVar7 <= 0.0) {
    fVar8 = fVar8 - 1e-08;
  }
  else {
    fVar8 = fVar8 + 1e-08;
  }
  iVar5 = (int)fVar8;
  iVar4 = 2;
  if ((1 < iVar6) && (iVar4 = iVar6, 10 < iVar6)) {
    iVar4 = 10;
  }
  iVar6 = 2;
  if ((1 < iVar5) && (iVar6 = iVar5, 10 < iVar5)) {
    iVar6 = 10;
  }
  GenericFunction_1801be620(lVar1,&stack_special_x_10,&stack_special_x_18,iVar4,iVar6);
  *(int64_t *)(param_1 + 0x28f8) = param_1;
  *(int8_t *)(param_1 + 0x2901) = 1;
  return;
}
// 函数: void GenericFunction_1801af570(uint64_t param_1)
void GenericFunction_1801af570(uint64_t param_1)
{
  int32_t uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int64_t unaff_RBX;
  int iVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Db;
  int32_t extraout_XMM0_Db_00;
  float fVar7;
  int8_t auVar9 [16];
  int8_t auVar11 [16];
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  int8_t auVar8 [16];
  int8_t auVar10 [16];
  SystemFunction_0001801c0ee0();
  if (*(char *)(unaff_RBX + 0x39) != '\0') {
    *(int8_t *)(unaff_RBX + 0x39) = 0;
    GenericFunction_1801c0df0();
  }
  uVar1 = logf((fStack0000000000000070 - fStack0000000000000068) * 0.2);
  fVar6 = extraout_XMM0_Da * 1.442695;
  auVar9._4_4_ = extraout_XMM0_Db;
  auVar9._0_4_ = fVar6;
  iVar3 = (int)fVar6;
  fVar7 = fVar6;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar6)) {
    auVar9._8_4_ = extraout_XMM0_Db;
    auVar9._12_4_ = extraout_XMM0_Db;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._4_4_ = fVar6;
    auVar8._0_4_ = fVar6;
    uVar2 = movmskps(uVar1,auVar8);
    fVar7 = (float)(int)(iVar3 + (uVar2 & 1 ^ 1));
  }
  if (fVar6 <= 0.0) {
    fVar7 = fVar7 - 1e-08;
  }
  else {
    fVar7 = fVar7 + 1e-08;
  }
  iVar5 = (int)fVar7;
  uVar1 = logf((fStack0000000000000074 - fStack000000000000006c) * 0.2);
  fVar6 = extraout_XMM0_Da_00 * 1.442695;
  auVar11._4_4_ = extraout_XMM0_Db_00;
  auVar11._0_4_ = fVar6;
  iVar3 = (int)fVar6;
  fVar7 = fVar6;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar6)) {
    auVar11._8_4_ = extraout_XMM0_Db_00;
    auVar11._12_4_ = extraout_XMM0_Db_00;
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._4_4_ = fVar6;
    auVar10._0_4_ = fVar6;
    uVar2 = movmskps(uVar1,auVar10);
    fVar7 = (float)(int)(iVar3 + (uVar2 & 1 ^ 1));
  }
  if (fVar6 <= 0.0) {
    fVar7 = fVar7 - 1e-08;
  }
  else {
    fVar7 = fVar7 + 1e-08;
  }
  iVar4 = (int)fVar7;
  iVar3 = 2;
  if ((1 < iVar5) && (iVar3 = iVar5, 10 < iVar5)) {
    iVar3 = 10;
  }
  iVar5 = 2;
  if ((1 < iVar4) && (iVar5 = iVar4, 10 < iVar4)) {
    iVar5 = 10;
  }
  GenericFunction_1801be620(fVar6,&local_buffer_00000068,&local_buffer_00000070,iVar3,iVar5);
  *(uint64_t *)(unaff_RBX + 0x30) = param_1;
  *(int8_t *)(unaff_RBX + 0x39) = 1;
  return;
}
// 函数: void GenericFunction_1801af661(void)
void GenericFunction_1801af661(void)
{
  int64_t unaff_RBX;
  uint64_t unaff_RSI;
  GenericFunction_1801be620();
  *(uint64_t *)(unaff_RBX + 0x30) = unaff_RSI;
  *(int8_t *)(unaff_RBX + 0x39) = 1;
  return;
}
// 函数: void GenericFunction_1801af682(void)
void GenericFunction_1801af682(void)
{
  int64_t unaff_RBX;
  uint64_t unaff_RSI;
  GenericFunction_1801be620();
  *(uint64_t *)(unaff_RBX + 0x30) = unaff_RSI;
  *(int8_t *)(unaff_RBX + 0x39) = 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801af6d0(int64_t param_1)
void GenericFunction_1801af6d0(int64_t param_1)
{
  uint64_t uVar1;
  if (*(int64_t *)(param_1 + 0x3a8) == 0) {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1070,0x10,3);
    uVar1 = DataStructure_c5aa0(uVar1);
    *(uint64_t *)(param_1 + 0x3a8) = uVar1;
    DataStructure_c5bc0(uVar1);
    *(int32_t *)(*(int64_t *)(param_1 + 0x3a8) + 0x1064) = *(int32_t *)(param_1 + 0xa0);
  }
  return;
}