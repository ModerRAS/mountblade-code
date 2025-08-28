#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part621.c - 18 个函数
// 函数: void function_610ac0(int64_t param_1)
void function_610ac0(int64_t param_1)
{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int64_t lVar4;
  uint64_t uVar5;
  short *psVar6;
  uint64_t uVar7;
  function_4f0d70();
  function_4f0ad0(param_1,1);
  uVar2 = *(uint *)(param_1 + 0x52ed94);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    piVar3 = (int *)(param_1 + 0x30b0);
    uVar7 = uVar5;
    do {
      if (-1 < *piVar3) goto LAB_180610b0b;
      uVar7 = (uint64_t)((int)uVar7 + 1);
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 0x298;
    } while ((int64_t)uVar5 < (int64_t)(int)uVar2);
  }
  uVar7 = (uint64_t)uVar2;
LAB_180610b0b:
  if ((int)uVar7 < *(int *)(param_1 + 0x52ed94)) {
    do {
      function_4f4250(param_1,uVar7,1);
      lVar4 = (int64_t)(int)uVar7;
      sVar1 = *(short *)(param_1 + 0x52dda0 + lVar4 * 2);
      psVar6 = (short *)(param_1 + 0x52dda0 + lVar4 * 2);
      if (sVar1 == -1) {
        for (; (lVar4 < *(int *)(param_1 + 0x52ed94) && (*psVar6 == -1)); psVar6 = psVar6 + 1) {
          uVar7 = (uint64_t)((int)uVar7 + 1);
          lVar4 = lVar4 + 1;
        }
      }
      else {
        uVar7 = (uint64_t)(uint)(int)sVar1;
      }
    } while ((int)uVar7 < *(int *)(param_1 + 0x52ed94));
  }
  *(int32_t *)(param_1 + 0x98d930) = 0xffffffff;
  if ((system_status_flag != 0) && (system_status_flag != 5)) {
    *(int64_t *)(param_1 + 0x87b798) =
         *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x87b7a0) * 8) + 300000;
  }
  if ((*(int64_t *)(param_1 + 0x18) != 0) &&
     (*(int64_t *)(*(int64_t *)(param_1 + 0x18) + 0x260) != 0)) {
    function_2d2f50();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_610bd0(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_610bd0(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  float fVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int32_t uVar4;
  float fVar5;
  float afStackX_8 [2];
  float afStackX_10 [2];
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t *aplocal_var_88 [2];
  code *pcStack_78;
  code *pcStack_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  int32_t local_var_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int32_t local_var_2c;
  uint64_t local_var_28;
  local_var_28 = 0xfffffffffffffffe;
  fVar1 = *(float *)(*(int64_t *)(param_1 + 0x18) + 0x5ba4);
  fVar5 = 0.05;
  if ((0.05 <= fVar1) && (fVar5 = fVar1, 1.0 <= fVar1)) {
    fVar5 = 1.0;
  }
  *(float *)(*(int64_t *)(param_1 + 0x18) + 0x5ba4) = fVar5;
  uVar3 = param_2[1];
  *(uint64_t *)(param_1 + 0x98d94c) = *param_2;
  *(uint64_t *)(param_1 + 0x98d954) = uVar3;
  uVar3 = param_2[3];
  *(uint64_t *)(param_1 + 0x98d95c) = param_2[2];
  *(uint64_t *)(param_1 + 0x98d964) = uVar3;
  uVar3 = param_2[5];
  *(uint64_t *)(param_1 + 0x98d96c) = param_2[4];
  *(uint64_t *)(param_1 + 0x98d974) = uVar3;
  uVar3 = param_2[7];
  *(uint64_t *)(param_1 + 0x98d97c) = param_2[6];
  *(uint64_t *)(param_1 + 0x98d984) = uVar3;
  lVar2 = *(int64_t *)(param_1 + 0x18);
  *(uint64_t *)(lVar2 + 0x3c8) = *(uint64_t *)(lVar2 + 0x408);
  *(uint64_t *)(lVar2 + 0x3d0) = *(uint64_t *)(lVar2 + 0x410);
  *(uint64_t *)(lVar2 + 0x3d8) = *(uint64_t *)(lVar2 + 0x418);
  *(uint64_t *)(lVar2 + 0x3e0) = *(uint64_t *)(lVar2 + 0x420);
  *(uint64_t *)(lVar2 + 1000) = *(uint64_t *)(lVar2 + 0x428);
  *(uint64_t *)(lVar2 + 0x3f0) = *(uint64_t *)(lVar2 + 0x430);
  *(uint64_t *)(lVar2 + 0x3f8) = *(uint64_t *)(lVar2 + 0x438);
  *(uint64_t *)(lVar2 + 0x400) = *(uint64_t *)(lVar2 + 0x440);
  uVar3 = param_2[1];
  *(uint64_t *)(lVar2 + 0x408) = *param_2;
  *(uint64_t *)(lVar2 + 0x410) = uVar3;
  uVar3 = param_2[3];
  *(uint64_t *)(lVar2 + 0x418) = param_2[2];
  *(uint64_t *)(lVar2 + 0x420) = uVar3;
  uVar3 = param_2[5];
  *(uint64_t *)(lVar2 + 0x428) = param_2[4];
  *(uint64_t *)(lVar2 + 0x430) = uVar3;
  uVar3 = param_2[7];
  *(uint64_t *)(lVar2 + 0x438) = param_2[6];
  *(uint64_t *)(lVar2 + 0x440) = uVar3;
  *(int8_t *)(lVar2 + 0x562) = 1;
  if ((*(int64_t *)(system_main_module_state + 0x3d8) == 0) ||
     (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) != 1)) {
    afStackX_10[0] = *(float *)(system_main_module_state + 300);
    afStackX_8[0] = afStackX_10[0] * 5.0;
    afStackX_10[0] = afStackX_10[0] + afStackX_10[0];
    if (*(char *)(param_1 + 0x87296c) == '\0') {
      uVar4 = (int32_t)
              (*(int64_t *)(param_1 + 0x872950) - *(int64_t *)(param_1 + 0x872948) >> 3);
    }
    else {
      uVar4 = *(int32_t *)(param_1 + 0x872968);
    }
    pcStack_78 = function_502740;
    pcStack_70 = function_502660;
    aplocal_var_88[0] = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags);
    local_var_a8 = (int32_t)param_1;
    local_var_a4 = (int32_t)((uint64_t)param_1 >> 0x20);
    *aplocal_var_88[0] = local_var_a8;
    aplocal_var_88[0][1] = local_var_a4;
    *(float **)(aplocal_var_88[0] + 2) = afStackX_8;
    local_var_90 = SUB84(param_2,0);
    local_var_8c = (int32_t)((uint64_t)param_2 >> 0x20);
    *(float **)(aplocal_var_88[0] + 4) = afStackX_10;
    aplocal_var_88[0][6] = local_var_90;
    aplocal_var_88[0][7] = local_var_8c;
    SystemCore_DataTransformer(local_var_a8,0,uVar4,0x10,0xffffffffffffffff,aplocal_var_88);
  }
  local_var_68 = *param_2;
  local_var_60 = param_2[1];
  local_var_58 = param_2[2];
  local_var_50 = param_2[3];
  fStack_48 = *(float *)(param_2 + 4);
  fStack_44 = *(float *)((int64_t)param_2 + 0x24);
  fStack_40 = *(float *)(param_2 + 5);
  local_var_3c = *(int32_t *)((int64_t)param_2 + 0x2c);
  local_var_2c = *(int32_t *)((int64_t)param_2 + 0x3c);
  fStack_38 = *(float *)(param_2 + 6) + fStack_48 * -0.4;
  fStack_34 = *(float *)((int64_t)param_2 + 0x34) + fStack_44 * -0.4;
  fStack_30 = *(float *)(param_2 + 7) + fStack_40 * -0.4;
  (**(code **)(*render_system_data_memory + 0x48))(render_system_data_memory,&local_var_68,param_4);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_610e80(void)
void function_610e80(void)
{
  char *pcVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  pcVar1 = render_system_memory;
  if (*render_system_memory != '\0') {
    lVar4 = 8;
    *render_system_memory = '\0';
    plVar5 = (int64_t *)(pcVar1 + 0x368);
    do {
      lVar6 = 0x18;
      plVar3 = plVar5;
      do {
        if (((int64_t *)*plVar3 != (int64_t *)0x0) &&
           (cVar2 = (**(code **)(*(int64_t *)*plVar3 + 0xd8))(), cVar2 != '\0')) {
          (**(code **)(*(int64_t *)*plVar3 + 0x68))();
        }
        plVar3 = plVar3 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      plVar5 = plVar5 + 0x199;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}
// 函数: void function_610e92(void)
void function_610e92(void)
{
  char cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int8_t *unaff_RSI;
  int64_t *plVar4;
  int64_t lVar5;
  lVar3 = 8;
  *unaff_RSI = 0;
  plVar4 = (int64_t *)(unaff_RSI + 0x368);
  do {
    lVar5 = 0x18;
    plVar2 = plVar4;
    do {
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        cVar1 = (**(code **)(*(int64_t *)*plVar2 + 0xd8))();
        if (cVar1 != '\0') {
          (**(code **)(*(int64_t *)*plVar2 + 0x68))();
        }
      }
      plVar2 = plVar2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    plVar4 = plVar4 + 0x199;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}
// 函数: void function_610efc(void)
void function_610efc(void)
{
  return;
}
int * function_610f30(int *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
                   int8_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                   uint64_t param_9)
{
  int iVar1;
  int64_t lVar2;
  iVar1 = function_4f10e0(param_2,param_3,param_5,param_6,param_7,param_8,param_9);
  *param_1 = iVar1;
  lVar2 = param_2 + 0x30a0 + (int64_t)iVar1 * 0xa60;
  *(int64_t *)(param_1 + 2) = lVar2;
  *(int64_t *)(param_1 + 4) = *(int64_t *)(lVar2 + 0x20) + 0xc;
  *(int64_t *)(param_1 + 6) = lVar2 + 0x10;
  *(int64_t *)(param_1 + 8) = lVar2 + 0x56c;
  *(int64_t *)(param_1 + 10) = lVar2 + 0x568;
  return param_1;
}
uint64_t * function_611010(uint64_t *param_1,int64_t param_2,uint param_3)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t local_var_18;
  uint64_t local_var_10;
  lVar2 = (uint64_t)(param_3 & 0xf) * 0xbe0 +
          *(int64_t *)(*(int64_t *)(param_2 + 0x87b340) + (uint64_t)(param_3 >> 4) * 8);
  if (*(char *)(lVar2 + 0x3d2) != '\0') {
    (**(code **)(**(int64_t **)(lVar2 + 0xe8) + 0xa0))(*(int64_t **)(lVar2 + 0xe8),&local_var_18);
    *param_1 = local_var_18;
    param_1[1] = local_var_10;
    return param_1;
  }
  uVar1 = *(uint64_t *)(lVar2 + 0x94);
  *param_1 = *(uint64_t *)(lVar2 + 0x8c);
  param_1[1] = uVar1;
  return param_1;
}
int64_t function_6110c0(int64_t param_1,uint64_t *param_2)
{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int64_t lVar6;
  int64_t lVar7;
  lVar6 = *(int64_t *)(param_1 + 0x98d8f8);
  if (lVar6 != *(int64_t *)(param_1 + 0x98d900)) {
    iVar2 = *(int *)(param_2 + 2);
    do {
      iVar3 = *(int *)(lVar6 + 0x58);
      iVar5 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar4 = *(byte **)(lVar6 + 0x50);
          lVar7 = param_2[1] - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar7;
            iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar5 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18061112e:
        if (iVar5 == 0) {
          *param_2 = &system_data_buffer_ptr;
          if (param_2[1] == 0) {
            param_2[1] = 0;
            *(int32_t *)(param_2 + 3) = 0;
            *param_2 = &system_state_ptr;
            return lVar6;
          }
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      else if (iVar3 == 0) goto LAB_18061112e;
      lVar6 = lVar6 + 0x70;
    } while (lVar6 != *(int64_t *)(param_1 + 0x98d900));
  }
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] == 0) {
    param_2[1] = 0;
    *(int32_t *)(param_2 + 3) = 0;
    *param_2 = &system_state_ptr;
    return 0;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_6111b0(void)
void function_6111b0(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// 函数: void function_611440(int64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)
void function_611440(int64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_3;
  local_var_14 = param_3[1];
  local_var_10 = param_3[2];
  local_var_c = param_3[3];
  function_395630(*(int64_t *)(param_1 + 0x18) + 0x2a68,param_2,&local_var_18,param_4,
                *(int64_t *)(param_1 + 0x18) + 0x28c8);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_611480(int64_t param_1,int64_t param_2,int64_t *param_3,int param_4,
void function_611480(int64_t param_1,int64_t param_2,int64_t *param_3,int param_4,
                  int8_t param_5)
{
  void **ppuVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int8_t stack_array_338 [32];
  void **pplocal_var_318;
  void **pplocal_var_310;
  void *plocal_var_308;
  int64_t lStack_300;
  int32_t local_var_2f0;
  int64_t lStack_2e8;
  int64_t lStack_2e0;
  uint64_t local_var_2d8;
  int32_t local_var_2d0;
  uint64_t local_var_2c8;
  void *plocal_var_2b8;
  int64_t lStack_2b0;
  uint64_t local_var_2a8;
  int32_t local_var_2a0;
  uint64_t local_var_288;
  uint64_t local_var_280;
  uint64_t local_var_278;
  void *plocal_var_270;
  int64_t lStack_268;
  int iStack_260;
  uint64_t local_var_258;
  int8_t local_var_250;
  int8_t stack_array_248 [512];
  uint64_t local_var_48;
  local_var_2c8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_338;
  lVar5 = (int64_t)param_4;
  if (((param_2 == 0) || (param_3 == (int64_t *)0x0)) || (param_4 < 3)) {
    SystemCore_CacheManager(stack_array_248,0x200,&ui_system_data_1952_ptr,&processed_var_8584_ptr);
    function_61c7a0(stack_array_248);
  }
  else {
    pplocal_var_310 = &plocal_var_308;
    uVar2 = SystemCore_CacheManager(&plocal_var_308);
    lVar3 = function_6110c0(param_1,uVar2);
    if (lVar3 == 0) {
      pplocal_var_310 = &plocal_var_2b8;
      plocal_var_2b8 = (void *)0x0;
      lStack_2b0 = 0;
      local_var_2a8 = 0;
      local_var_2a0 = 3;
      local_var_288 = 0;
      local_var_280 = 0;
      local_var_278 = 0;
      pplocal_var_318 = &plocal_var_270;
      plocal_var_270 = &system_data_buffer_ptr;
      local_var_258 = 0;
      lStack_268 = 0;
      iStack_260 = 0;
      lVar3 = SystemCore_CacheManager(&plocal_var_308,param_2);
      if (lStack_268 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      iStack_260 = *(int *)(lVar3 + 0x10);
      lStack_268 = *(int64_t *)(lVar3 + 8);
      local_var_258 = *(uint64_t *)(lVar3 + 0x18);
      *(int32_t *)(lVar3 + 0x10) = 0;
      *(uint64_t *)(lVar3 + 8) = 0;
      *(uint64_t *)(lVar3 + 0x18) = 0;
      plocal_var_308 = &system_data_buffer_ptr;
      if (lStack_300 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_300 = 0;
      local_var_2f0 = 0;
      plocal_var_308 = &system_state_ptr;
      local_var_250 = param_5;
      lStack_2e8 = 0;
      lStack_2e0 = 0;
      local_var_2d8 = 0;
      local_var_2d0 = 3;
      function_33a920(&lStack_2e8,lVar5);
      lVar3 = lStack_2e8;
      if (0 < lVar5) {
        lVar4 = lStack_2e8 - (int64_t)param_3;
        do {
          pplocal_var_310 = (void **)*param_3;
          *(void ***)(lVar4 + (int64_t)param_3) = pplocal_var_310;
          param_3 = param_3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lVar5 = lStack_2e0 - lStack_2e8;
      function_640330(lStack_2e8);
      function_63efb0(&plocal_var_2b8,&lStack_2e8,lVar5 >> 3 & 0xffffffff,0);
      if (((uint64_t)(lStack_2b0 - (int64_t)plocal_var_2b8 >> 3) < 3) || (iStack_260 == 0)) {
        SystemDataInitializer(&processed_var_8720_ptr,param_2);
      }
      else {
        ppuVar1 = *(void ***)(param_1 + 0x98d900);
        if (ppuVar1 < *(void ***)(param_1 + 0x98d908)) {
          *(void ***)(param_1 + 0x98d900) = ppuVar1 + 0xe;
          pplocal_var_318 = ppuVar1;
          function_63e690(ppuVar1);
          CoreEngineDataTransformer(ppuVar1 + 9,&plocal_var_270);
          *(int8_t *)(ppuVar1 + 0xd) = local_var_250;
        }
        else {
          function_614b20(param_1 + 0x98d8f8,&plocal_var_2b8);
        }
      }
      if (lVar3 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar3);
      }
      pplocal_var_318 = &plocal_var_270;
      plocal_var_270 = &system_data_buffer_ptr;
      if (lStack_268 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_268 = 0;
      local_var_258 = local_var_258 & 0xffffffff00000000;
      plocal_var_270 = &system_state_ptr;
      pplocal_var_318 = &plocal_var_2b8;
      if (plocal_var_2b8 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    else {
      SystemCore_CacheManager(stack_array_248,0x200,&ui_system_data_1952_ptr,&processed_var_8512_ptr);
      function_61c7a0(stack_array_248);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_338);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_6117e0(int64_t param_1,int64_t param_2)
void function_6117e0(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  uint64_t uVar7;
  int8_t *puVar8;
  uint64_t uVar9;
  int8_t stack_array_268 [32];
  uint64_t local_var_248;
  int8_t *plocal_var_240;
  int8_t stack_array_238 [32];
  int8_t stack_array_218 [512];
  uint64_t local_var_18;
  local_var_248 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
  plocal_var_240 = stack_array_238;
  uVar3 = SystemCore_CacheManager(stack_array_238);
  lVar4 = function_6110c0(param_1,uVar3);
  if (lVar4 == 0) {
    SystemCore_CacheManager(stack_array_218,0x200,&ui_system_data_1952_ptr,&processed_var_8640_ptr);
    function_61c7a0(stack_array_218);
  }
  else {
    uVar9 = *(uint64_t *)(param_1 + 0x98d900);
    for (uVar7 = *(uint64_t *)(param_1 + 0x98d8f8); uVar7 != uVar9; uVar7 = uVar7 + 0x70) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(param_2 + lVar4) != '\0');
      iVar2 = *(int *)(uVar7 + 0x58);
      iVar6 = (int)lVar4;
      if (iVar2 == iVar6) {
        if (iVar2 != 0) {
          pbVar5 = *(byte **)(uVar7 + 0x50);
          lVar4 = param_2 - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar4;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1806118cd:
        if (iVar6 == 0) {
          if ((uVar7 + 0x70 < uVar9) &&
             (lVar4 = (int64_t)(uVar9 - (uVar7 + 0x70)) / 0x70, 0 < lVar4)) {
            puVar8 = (int8_t *)(uVar7 + 0xd8);
            do {
              function_35b1b0(puVar8 + -0xd8,puVar8 + -0x68);
              SystemScheduler(puVar8 + -0x90,puVar8 + -0x20);
              puVar8[-0x70] = *puVar8;
              lVar4 = lVar4 + -1;
              puVar8 = puVar8 + 0x70;
            } while (0 < lVar4);
            uVar9 = *(uint64_t *)(param_1 + 0x98d900);
          }
          *(uint64_t *)(param_1 + 0x98d900) = uVar9 - 0x70;
          function_502300();
          break;
        }
      }
      else if (iVar2 == 0) goto LAB_1806118cd;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_268);
}
// 函数: void function_6119a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void function_6119a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  int param_5,int *param_6)
{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int8_t stack_array_30 [40];
  lVar7 = (int64_t)(int)param_3;
  iVar8 = 0;
  *param_6 = 0;
  uVar2 = SystemCore_CacheManager(stack_array_30,param_2,param_3,param_4,0xfffffffffffffffe);
  plVar3 = (int64_t *)function_6110c0(param_1,uVar2);
  if (plVar3 != (int64_t *)0x0) {
    uVar6 = (plVar3[1] - *plVar3 >> 3) - lVar7;
    iVar5 = (int)uVar6;
    if ((uint64_t)(int64_t)param_5 <= uVar6) {
      iVar5 = param_5;
    }
    *param_6 = iVar5;
    if (0 < iVar5) {
      lVar4 = lVar7 * 8;
      param_4 = param_4 + lVar7 * -8;
      do {
        uVar1 = *(int32_t *)(lVar4 + 4 + *plVar3);
        *(int32_t *)(param_4 + lVar4) = *(int32_t *)(lVar4 + *plVar3);
        *(int32_t *)(param_4 + 4 + lVar4) = uVar1;
        iVar8 = iVar8 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar8 < *param_6);
    }
  }
  return;
}
float function_611aa0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  int8_t stack_array_30 [40];
  uVar1 = SystemCore_CacheManager(stack_array_30,param_2,param_3,param_4,0xfffffffffffffffe);
  lVar2 = function_6110c0(param_1,uVar1);
  if (lVar2 != 0) {
    fVar4 = *(float *)(lVar2 + 0x38) - *(float *)(lVar2 + 0x30);
    fVar3 = *(float *)(lVar2 + 0x3c) - *(float *)(lVar2 + 0x34);
    return SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  }
  return -1.0;
}
uint64_t function_611b40(uint64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  int8_t astack_special_x_8 [32];
  uint64_t stack_array_18 [3];
  stack_array_18[0] = param_2;
  puVar1 = (uint64_t *)function_4f6240(param_1,astack_special_x_8,stack_array_18);
  return *puVar1;
}
// 函数: void function_611b60(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
void function_611b60(uint64_t param_1,uint64_t param_2,int32_t *param_3,uint64_t param_4,
                  int8_t param_5,int32_t param_6,int32_t param_7)
{
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_3;
  local_var_14 = param_3[1];
  local_var_10 = param_3[2];
  local_var_c = param_3[3];
  function_4f83f0(local_var_18,0,&local_var_18,param_4,param_5,param_6,param_7,0,0,0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_611bc0(uint64_t param_1,int32_t param_2,int32_t *param_3,int8_t param_4,
void function_611bc0(uint64_t param_1,int32_t param_2,int32_t *param_3,int8_t param_4,
                  int8_t param_5,int32_t param_6,int32_t param_7,uint64_t param_8)
{
  int8_t stack_array_178 [32];
  code *pcStack_158;
  int32_t local_var_150;
  int32_t local_var_148;
  int8_t *plocal_var_140;
  uint64_t local_var_138;
  int32_t local_var_130;
  uint64_t local_var_128;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int8_t stack_array_108 [192];
  int32_t local_var_48;
  uint64_t local_var_38;
  local_var_128 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  pcStack_158 = SystemCore_MemoryManager;
  DataStructureManager(stack_array_108,0x30,4,function_1c2890);
  local_var_48 = 0;
  function_1594d0(stack_array_108,param_8);
  local_var_120 = *param_3;
  local_var_11c = param_3[1];
  local_var_118 = param_3[2];
  local_var_114 = param_3[3];
  local_var_130 = 0;
  local_var_138 = 0;
  plocal_var_140 = stack_array_108;
  local_var_148 = param_7;
  local_var_150 = param_6;
  pcStack_158 = (code *)CONCAT71(pcStack_158._1_7_,param_5);
  function_4f83f0(param_1,param_2,&local_var_120,param_4);
  SystemDataValidator(stack_array_108,0x30,4,SystemCore_MemoryManager);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// 函数: void function_611ce0(int64_t param_1,int param_2,int32_t *param_3,int param_4)
void function_611ce0(int64_t param_1,int param_2,int32_t *param_3,int param_4)
{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  uint64_t local_var_40;
  uint64_t local_var_38;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  int64_t lStack_10;
  cVar2 = function_61c990(param_1,param_4,&processed_var_8288_ptr);
  if (cVar2 != '\0') {
    local_var_50 = *param_3;
    local_var_4c = param_3[1];
    local_var_48 = param_3[2];
    local_var_38 = *(uint64_t *)(param_3 + 1);
    local_var_44 = param_3[3];
    iVar3 = *(int *)(param_1 + 0x98d930);
    if ((param_4 == iVar3) ||
       ((-1 < iVar3 && (param_4 == *(int *)((int64_t)iVar3 * 0xa60 + 0x3604 + param_1))))) {
      local_var_40 = CONCAT44(local_var_50,param_2);
      local_var_2c = 0x1000001;
      local_var_28 = 0;
      local_var_24 = 0;
      local_var_20 = 0;
      local_var_1c = 0;
      local_var_18 = 0;
      local_var_14 = 0x3f800000;
      lStack_10 = (uint64_t)local_var_54 << 0x20;
      if (-1 < param_2) {
        local_var_30 = local_var_44;
        function_545140(&system_data_6110,&local_var_40,0,0);
      }
    }
    else {
      plVar4 = *(int64_t **)((int64_t)param_4 * 0xa60 + 0x3988 + param_1);
      if (((plVar4 != (int64_t *)0x0) ||
          ((iVar3 = *(int *)((int64_t)param_4 * 0xa60 + 0x3600 + param_1), -1 < iVar3 &&
           (plVar4 = *(int64_t **)((int64_t)iVar3 * 0xa60 + 0x3988 + param_1),
           plVar4 != (int64_t *)0x0)))) && (lVar1 = *plVar4, lVar1 != 0)) {
        uVar5 = function_5b5ad0(lVar1);
        function_5ae910(uVar5,param_2,&local_var_50,1,0);
        if (*(char *)(lVar1 + 0x31) == '\0') {
          function_5faa20(lVar1 + 0x50);
          iVar3 = _Mtx_unlock(lVar1 + 0x5990);
          if (iVar3 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar3);
          }
        }
      }
    }
  }
  return;
}
// 函数: void function_611e90(int64_t param_1,uint64_t param_2,int32_t *param_3,int32_t param_4)
void function_611e90(int64_t param_1,uint64_t param_2,int32_t *param_3,int32_t param_4)
{
  char cVar1;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  if ((*(byte *)(param_1 + 0x87b714) & 1) != 0) {
    cVar1 = function_61c990(param_1,param_2,&processed_var_8232_ptr);
    if (cVar1 != '\0') {
      local_var_28 = *param_3;
      local_var_24 = param_3[1];
      local_var_20 = param_3[2];
      local_var_1c = param_3[3];
      function_4f5d10(param_1,param_2 & 0xffffffff,&local_var_28,param_4);
    }
  }
  return;
}
// 函数: void function_611f50(int64_t param_1)
void function_611f50(int64_t param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int64_t lVar5;
  iVar1 = *(int *)(param_1 + 0x52ed94);
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < iVar1) {
    lVar5 = 0;
    piVar4 = (int *)(param_1 + 0x30b0);
    do {
      iVar2 = iVar3;
      if (-1 < *piVar4) break;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
      piVar4 = piVar4 + 0x298;
      iVar2 = iVar1;
    } while (lVar5 < iVar1);
  }
  for (; iVar2 < iVar1; iVar2 = (int)*(short *)(param_1 + 0x52dda0 + (int64_t)iVar2 * 2)) {
    lVar5 = (int64_t)iVar2 * 0xa60;
    *(int32_t *)(lVar5 + 0x3568 + param_1) = 0;
    *(uint64_t *)(lVar5 + 0x356c + param_1) = 0;
    *(int32_t *)(lVar5 + 0x3564 + param_1) = 0;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_611ff0(uint64_t param_1,float param_2)
void function_611ff0(uint64_t param_1,float param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  char cVar7;
  uint astack_special_x_18 [4];
  lVar2 = render_system_memory;
  lVar3 = *(int64_t *)(render_system_memory + 0x668);
  if (lVar3 != render_system_memory) {
    uVar6 = (uint)(ushort)astack_special_x_18[0];
    cVar7 = (char)astack_special_x_18[0];
    do {
      lVar3 = *(int64_t *)(lVar3 + 0x10);
      if ((double)param_2 < *(double *)(lVar3 + 0x5a8) ||
          (double)param_2 == *(double *)(lVar3 + 0x5a8)) {
        return;
      }
      astack_special_x_18[0] = 0;
      *(int32_t *)(lVar3 + 0x5c4) = 0;
      SystemSynchronizationProcessor(lVar3,astack_special_x_18,&processed_var_8192_ptr);
      function_569670(lVar3);
      if (0 < (int)astack_special_x_18[0]) {
        uVar5 = (uint64_t)astack_special_x_18[0];
        do {
          astack_special_x_18[0] = (uint)(cVar7 != '\0');
          SystemSynchronizationProcessor(lVar3,astack_special_x_18,&processed_var_8176_ptr);
          cVar7 = astack_special_x_18[0] != 0;
          if (astack_special_x_18[0] == 0) {
            astack_special_x_18[0] = uVar6;
            SystemSynchronizationProcessor(lVar3,astack_special_x_18,&memory_allocator_3472_ptr);
            uVar6 = astack_special_x_18[0] & 0xffff;
            uVar4 = (uint64_t)uVar6;
            lVar1 = *(int64_t *)(uVar4 * 0x10 + 0x180c95bf8);
            if ((lVar1 != 0) || (*(int64_t *)(uVar4 * 0x10 + 0x180c95c00) != 0)) {
              (**(code **)(uVar4 * 0x10 + 0x180c95c00))(lVar1,render_system_memory,lVar3);
            }
          }
          else {
            render_system_memory = lVar3;
            (**(code **)(render_system_data_memory + 0x138))();
            render_system_memory = 0;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (*(int *)(lVar3 + 0x5c4) < *(int *)(lVar3 + 0x5c8)) {
        function_5fdc90(lVar3,lVar2 + 0x648);
      }
      lVar3 = **(int64_t **)(lVar2 + 0x668);
      *(int64_t *)(lVar2 + 0x668) = lVar3;
    } while (lVar3 != lVar2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_612015(void)
void function_612015(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  int64_t unaff_RBP;
  uint64_t uVar4;
  uint uVar5;
  char cVar6;
  float unaff_XMM6_Da;
  char cStack0000000000000070;
  uVar5 = (uint)_cStack0000000000000070;
  cVar6 = cStack0000000000000070;
  do {
    lVar1 = *(int64_t *)(in_RAX + 0x10);
    if ((double)unaff_XMM6_Da < *(double *)(lVar1 + 0x5a8) ||
        (double)unaff_XMM6_Da == *(double *)(lVar1 + 0x5a8)) {
      return;
    }
    _cStack0000000000000070 = 0;
    *(int32_t *)(lVar1 + 0x5c4) = 0;
    SystemSynchronizationProcessor(lVar1,&local_buffer_00000070,&processed_var_8192_ptr);
    function_569670(lVar1);
    if (0 < (int)_cStack0000000000000070) {
      uVar4 = (uint64_t)_cStack0000000000000070;
      do {
        _cStack0000000000000070 = (uint)(cVar6 != '\0');
        SystemSynchronizationProcessor(lVar1,&local_buffer_00000070,&processed_var_8176_ptr);
        cVar6 = _cStack0000000000000070 != 0;
        if (_cStack0000000000000070 == 0) {
          _cStack0000000000000070 = uVar5;
          SystemSynchronizationProcessor(lVar1,&local_buffer_00000070,&memory_allocator_3472_ptr);
          uVar5 = _cStack0000000000000070 & 0xffff;
          uVar3 = (uint64_t)uVar5;
          lVar2 = *(int64_t *)(uVar3 * 0x10 + 0x180c95bf8);
          if ((lVar2 != 0) || (*(int64_t *)(uVar3 * 0x10 + 0x180c95c00) != 0)) {
            (**(code **)(uVar3 * 0x10 + 0x180c95c00))(lVar2,render_system_memory,lVar1);
          }
        }
        else {
          render_system_memory = lVar1;
          (**(code **)(render_system_data_memory + 0x138))();
          render_system_memory = 0;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (*(int *)(lVar1 + 0x5c4) < *(int *)(lVar1 + 0x5c8)) {
      function_5fdc90(lVar1,unaff_RBP + 0x648);
    }
    in_RAX = **(int64_t **)(unaff_RBP + 0x668);
    *(int64_t *)(unaff_RBP + 0x668) = in_RAX;
  } while (in_RAX != unaff_RBP);
  return;
}
// 函数: void function_61219c(void)
void function_61219c(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address