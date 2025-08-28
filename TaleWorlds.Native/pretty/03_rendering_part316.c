#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part316.c - 22 个函数
// 函数: void function_435038(void)
void function_435038(void)
{
  short *psVar1;
  ushort uVar2;
  int64_t lVar3;
  ushort uVar4;
  ushort uVar5;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  uVar4 = *(short *)(unaff_RDI + 0x40) - 2;
  uVar2 = *(ushort *)(unaff_RDI + 0xa8);
  if (uVar4 < 3 != (bool)((byte)uVar2 >> 2 & 1)) {
    uVar5 = uVar2 & 0xfffb;
    if (uVar4 < 3) {
      uVar5 = uVar2 | 4;
    }
    *(ushort *)(unaff_RDI + 0xa8) = uVar5;
    lVar3 = *(int64_t *)(unaff_RDI + 0x10);
    psVar1 = (short *)(lVar3 + 0x2b0);
    *psVar1 = *psVar1 + 1;
    if (*(int64_t *)(lVar3 + 0x168) != 0) {
      SystemFunction_0001802eeba0();
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x1200) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void function_4350c0(uint64_t *param_1)
void function_4350c0(uint64_t *param_1)
{
  *param_1 = &ui_system_data_1608_ptr;
  *param_1 = &ui_system_data_1864_ptr;
  return;
}
int64_t function_4350f0(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x38) = 0;
  function_435120();
  return param_1;
}
// 函数: void function_435120(uint64_t *param_1)
void function_435120(uint64_t *param_1)
{
  int64_t *plVar1;
  char cVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *(int32_t *)((int64_t)param_1 + 0x1c) = 0x3f800000;
  *(int8_t *)(param_1 + 4) = 0;
  *(int32_t *)((int64_t)param_1 + 0x24) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x2c) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x34) = 0xffffffff;
  if ((int64_t *)param_1[7] != (int64_t *)0x0) {
    cVar2 = (**(code **)(*(int64_t *)param_1[7] + 0xd8))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(int64_t *)param_1[7] + 0x80))();
      if (cVar2 != '\0') {
        (**(code **)(*(int64_t *)param_1[7] + 0x68))();
      }
    }
  }
  plVar1 = (int64_t *)param_1[7];
  param_1[7] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 8) = 0;
  return;
}
// 函数: void function_4351d0(int64_t param_1,float param_2,float param_3,int8_t param_4)
void function_4351d0(int64_t param_1,float param_2,float param_3,int8_t param_4)
{
  float fVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *plVar4;
  float fVar5;
  float fVar6;
  lVar3 = param_1;
  if (param_3 == 0.0) {
    *(float *)(param_1 + 0xc) = param_2;
    *(float *)(param_1 + 0x18) = param_2;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0xc);
    fVar6 = fVar5;
    if (fVar1 != fVar5) {
      fVar5 = (float)SystemFunction_0001804352f0();
    }
    if (((param_2 == fVar6) && (param_3 == *(float *)(lVar3 + 0x1c))) && (fVar5 == fVar1))
    goto LAB_18043524d;
    *(float *)(lVar3 + 0x18) = fVar1;
  }
  *(int8_t *)(lVar3 + 0x20) = param_4;
  *(float *)(lVar3 + 0x10) = param_2;
  *(int32_t *)(lVar3 + 0x14) = 0;
  *(float *)(lVar3 + 0x1c) = param_3;
  fVar6 = param_2;
LAB_18043524d:
  if (*(int64_t **)(lVar3 + 0x38) != (int64_t *)0x0) {
    lVar3 = **(int64_t **)(lVar3 + 0x38);
    if (0.0001 < fVar6) {
      cVar2 = (**(code **)(lVar3 + 0xd8))();
      if ((cVar2 != '\0') &&
         (cVar2 = (**(code **)(**(int64_t **)(param_1 + 0x38) + 0x80))(), cVar2 != '\0')) {
        return;
      }
      plVar4 = *(int64_t **)(param_1 + 0x38);
      *(uint64_t *)(param_1 + 0x38) = 0;
    }
    else {
      cVar2 = (**(code **)(lVar3 + 0xd8))();
      if ((cVar2 != '\0') &&
         (cVar2 = (**(code **)(**(int64_t **)(param_1 + 0x38) + 0x80))(), cVar2 != '\0')) {
        (**(code **)(**(int64_t **)(param_1 + 0x38) + 0x68))();
      }
      plVar4 = *(int64_t **)(param_1 + 0x38);
      *(uint64_t *)(param_1 + 0x38) = 0;
    }
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x38))();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_435440(int32_t *param_1,char param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  *(char *)(param_1 + 8) = param_2;
  iVar4 = 0;
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)param_2 << 4,0x10,3);
  *(uint64_t *)(param_1 + 6) = uVar2;
  if ('\0' < *(char *)(param_1 + 8)) {
    lVar3 = 0;
    do {
      lVar3 = lVar3 + 0x10;
      iVar4 = iVar4 + 1;
      puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 6) + -0x10 + lVar3);
      *puVar1 = 0x3f8000003f800000;
      puVar1[1] = 0x7f7fffff3f800000;
    } while (iVar4 < *(char *)(param_1 + 8));
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_4354c0(int32_t *param_1,int param_2,int8_t param_3)
{
  int32_t uVar1;
  int64_t *plVar2;
  int aiStackX_10 [2];
  uint64_t uVar3;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_14;
  uVar3 = 0xfffffffffffffffe;
  aiStackX_10[0] = param_2;
  if ((param_2 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(param_2);
  }
  uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3,uVar3);
  plVar2 = (int64_t *)function_485280(uVar3,aiStackX_10,param_3);
  if (plVar2 == (int64_t *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*plVar2 + 0x28))(plVar2);
    uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  local_var_20 = SUB84(plVar2,0);
  local_var_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *param_1 = local_var_20;
  param_1[1] = local_var_1c;
  param_1[2] = uVar1;
  param_1[3] = local_var_14;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if ((param_2 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))(param_2);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4355b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_4355b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  *(int8_t *)(param_1 + 0x20) = 0;
  uVar1 = system_context_ptr;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = *(int64_t **)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    function_05e450(uVar1,&plStackX_8);
    return;
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  SystemCore_TimerManager(uVar1,&plStackX_8,param_3,param_4,uVar2);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_435630(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_435630(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  uint64_t uVar2;
  uVar1 = system_context_ptr;
  uVar2 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x20) == '\0') {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(int64_t **)(param_1 + 0x18);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    SystemCore_ErrorHandler(uVar1,&plStackX_8,0,param_4,uVar2);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180435746)
uint64_t * function_435690(uint64_t *param_1,uint64_t param_2,byte param_3)
{
  int32_t uVar1;
  int64_t *plStackX_8;
  int64_t *plStack_38;
  int32_t local_var_30;
  int32_t local_var_2c;
  void *plocal_var_28;
  int64_t lStack_20;
  uVar1 = CoreMemoryPoolValidator(&plocal_var_28);
  function_0b3430(uVar1,&plStackX_8,&plocal_var_28,param_3 ^ 1);
  plStack_38 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    plStack_38 = (int64_t *)0x0;
    local_var_30 = 0xffffffff;
    plocal_var_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    local_var_30 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_38 + 0x28))(plStack_38);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plocal_var_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  *param_1 = plStack_38;
  param_1[1] = CONCAT44(local_var_2c,local_var_30);
  return param_1;
}
// 函数: void function_4357a0(uint64_t param_1,int32_t *param_2)
void function_4357a0(uint64_t param_1,int32_t *param_2)
{
  int32_t uVar1;
  int64_t *aplStackX_18 [2];
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  void *plocal_var_28;
  int64_t lStack_20;
  uVar1 = CoreMemoryPoolValidator(&plocal_var_28,param_1);
  function_0b3430(uVar1,aplStackX_18,&plocal_var_28,1);
  if (aplStackX_18[0] != (int64_t *)0x0) {
    local_var_38 = *param_2;
    local_var_34 = param_2[1];
    local_var_30 = param_2[2];
    local_var_2c = param_2[3];
    function_14cb90(local_var_38,aplStackX_18[0],&local_var_38,1);
  }
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  plocal_var_28 = &system_data_buffer_ptr;
  if (lStack_20 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_435860(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_435860(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  uint64_t uVar9;
  lVar4 = render_system_data_config;
  uVar9 = 0xfffffffffffffffe;
  lVar5 = *(int64_t *)(render_system_data_config + 8);
  do {
    if (lVar5 == lVar4) {
      puVar3 = *(uint64_t **)(lVar4 + 0x10);
      if (puVar3 == (uint64_t *)0x0) {
        *(int64_t *)lVar4 = lVar4;
        *(int64_t *)(lVar4 + 8) = lVar4;
        *(uint64_t *)(lVar4 + 0x10) = 0;
        *(int8_t *)(lVar4 + 0x18) = 0;
        *(uint64_t *)(lVar4 + 0x20) = 0;
        return;
      }
      SystemCache_Manager(lVar4,*puVar3,param_3,param_4,uVar9);
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar3);
    }
    lVar1 = *(int64_t *)(lVar5 + 0x20);
    function_14e610(*(uint64_t *)(lVar1 + 0xb8));
    *(uint64_t *)(lVar1 + 0xb8) = 0;
    if (*(char *)(lVar5 + 0x38) == '\x01') {
      plVar7 = (int64_t *)(lVar1 + 200);
      puVar8 = (int32_t *)(lVar1 + 0x108);
      lVar6 = 8;
      do {
        *puVar8 = 0;
        plVar2 = (int64_t *)*plVar7;
        if (plVar2 != (int64_t *)0x0) {
          function_14e2a0();
          if (plVar2[4] != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          if (*plVar2 == 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(plVar2);
          }
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar7 = 0;
        puVar8 = puVar8 + 1;
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *(int32_t *)(lVar1 + 0x128) = 0;
      function_14e690(*(uint64_t *)(lVar1 + 0xc0));
      *(uint64_t *)(lVar1 + 0xc0) = 0;
    }
    lVar5 = SystemFunction_00018066bd70(lVar5);
  } while( true );
}
int64_t * function_4359d0(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t uVar1;
  int64_t *plVar2;
  int64_t *plStackX_8;
  int32_t local_var_14;
  if (param_2 != 0) {
    plVar2 = (int64_t *)function_14acf0(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
    plVar2 = (int64_t *)*plVar2;
    if (plVar2 == (int64_t *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    *param_1 = (int64_t)plVar2;
    param_1[1] = CONCAT44(local_var_14,uVar1);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(local_var_14,0xffffffff);
  return param_1;
}
int8_t
function_435a80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             float *param_5)
{
  int8_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  fStack_48 = (float)param_2;
  fStack_44 = (float)((uint64_t)param_2 >> 0x20);
  fStack_54 = (float)((uint64_t)param_4 >> 0x20);
  fStack_58 = (float)param_4;
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar3 = fStack_48 * fStack_54 - fStack_44 * fStack_58;
  if (fVar3 != 0.0) {
    fStack_3c = (float)((uint64_t)param_3 >> 0x20);
    fStack_4c = (float)((uint64_t)param_1 >> 0x20);
    fStack_40 = (float)param_3;
    fStack_50 = (float)param_1;
    fVar3 = 1.0 / fVar3;
    fVar4 = ((fStack_40 - fStack_50) * fStack_54 - (fStack_3c - fStack_4c) * fStack_58) * fVar3;
    fVar3 = ((fStack_40 - fStack_50) * fStack_44 - (fStack_3c - fStack_4c) * fStack_48) * fVar3;
    if ((((-0.001 <= fVar4) && (fVar4 <= 1.001)) && (-0.001 <= fVar3)) && (fVar3 <= 1.001)) {
      fVar2 = fVar3;
      if (fVar4 <= fVar3) {
        fVar2 = fVar4;
      }
      if (fVar2 <= 1.0) {
        if (fVar3 <= fVar4) {
          fVar3 = fVar4;
        }
        if (0.0 <= fVar3) {
          uVar1 = 1;
          fVar5 = fStack_48 * fVar4 + fStack_50;
          fVar6 = fStack_44 * fVar4 + fStack_4c;
          goto LAB_180435b8f;
        }
      }
    }
  }
  uVar1 = 0;
LAB_180435b8f:
  *param_5 = fVar5;
  param_5[1] = fVar6;
  return uVar1;
}
// 函数: void function_435d10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_435d10(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t local_var_30;
  uint64_t local_var_28;
  code *pcStack_20;
  code *pcStack_18;
  if (*(int64_t *)(param_1 + 0xb8) == 0) {
    local_var_30 = 0;
    local_var_28 = 0;
    pcStack_20 = (code *)0x0;
    pcStack_18 = _guard_check_icall;
    function_14a370(param_1,1,&local_var_30,param_4,0xfffffffffffffffe);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(&local_var_30,0,0);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_435e20(int64_t param_1,uint64_t *param_2,int32_t *param_3,int param_4)
void function_435e20(int64_t param_1,uint64_t *param_2,int32_t *param_3,int param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int32_t *puVar8;
  lVar5 = render_system_data_config;
  if (*(int64_t *)(param_1 + 0xb8) != 0) {
    puVar8 = (int32_t *)
             ((int64_t)param_4 * 0x20 + *(int64_t *)(*(int64_t *)(param_1 + 0xb8) + 0x20));
    uVar4 = *(uint64_t *)(puVar8 + 3);
    *param_2 = *(uint64_t *)(puVar8 + 1);
    param_2[1] = uVar4;
    *(int32_t *)(param_2 + 2) = *puVar8;
    *param_3 = *(int32_t *)(*(int64_t *)(puVar8 + 6) + 100);
    return;
  }
  puVar8 = (int32_t *)
           ((int64_t)param_4 * 0x38 +
           *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xa8) + 0x20) + 0x40));
  uVar1 = puVar8[2];
  uVar2 = puVar8[3];
  uVar3 = puVar8[4];
  *(int32_t *)param_2 = puVar8[1];
  *(int32_t *)((int64_t)param_2 + 4) = uVar1;
  *(int32_t *)(param_2 + 1) = uVar2;
  *(int32_t *)((int64_t)param_2 + 0xc) = uVar3;
  *(int32_t *)(param_2 + 2) = *puVar8;
  iVar6 = RenderingSystem_PostProcessor(lVar5,puVar8 + 6);
  if (((iVar6 == -1) || (lVar7 = (int64_t)iVar6 * 0x68 + *(int64_t *)(lVar5 + 0x38), lVar7 == 0))
     && (lVar7 = *(int64_t *)(lVar5 + 0x28), lVar7 == 0)) {
    *param_3 = 0xffffffff;
    return;
  }
  *param_3 = *(int32_t *)(lVar7 + 100);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_435e6f(int64_t param_1,int64_t param_2,int32_t *param_3)
void function_435e6f(int64_t param_1,int64_t param_2,int32_t *param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int32_t *puVar7;
  int32_t *unaff_RBX;
  lVar4 = render_system_data_config;
  puVar7 = (int32_t *)(param_2 + *(int64_t *)(param_1 + 0x40));
  uVar1 = puVar7[2];
  uVar2 = puVar7[3];
  uVar3 = puVar7[4];
  *param_3 = puVar7[1];
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  param_3[4] = *puVar7;
  iVar5 = RenderingSystem_PostProcessor(lVar4,puVar7 + 6);
  if (((iVar5 == -1) || (lVar6 = (int64_t)iVar5 * 0x68 + *(int64_t *)(lVar4 + 0x38), lVar6 == 0))
     && (lVar6 = *(int64_t *)(lVar4 + 0x28), lVar6 == 0)) {
    *unaff_RBX = 0xffffffff;
    return;
  }
  *unaff_RBX = *(int32_t *)(lVar6 + 100);
  return;
}
// 函数: void function_435ec3(void)
void function_435ec3(void)
{
  int32_t *unaff_RBX;
  *unaff_RBX = 0xffffffff;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_435f40(int64_t param_1,uint64_t *param_2)
void function_435f40(int64_t param_1,uint64_t *param_2)
{
  int32_t local_var_38;
  uint64_t local_var_34;
  uint64_t local_var_2c;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  uint64_t local_var_10;
  local_var_34 = *param_2;
  local_var_2c = param_2[1];
  local_var_24 = *(int32_t *)(param_2 + 2);
  local_var_20 = *(int32_t *)((int64_t)param_2 + 0x14);
  local_var_1c = *(int32_t *)(param_2 + 3);
  local_var_18 = *(int32_t *)((int64_t)param_2 + 0x1c);
  local_var_10 = *(uint64_t *)(render_system_data_config + 0x28);
  local_var_38 = *(int32_t *)(param_2 + 4);
  function_4362d0(*(uint64_t *)(param_1 + 0xb8),&local_var_38);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_435f90(void)
void function_435f90(void)
{
  uint64_t uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x130,8,6);
// WARNING: Subroutine does not return
  memset(uVar1,0,0x130);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_435ff0(int64_t param_1,int32_t *param_2,int32_t param_3)
void function_435ff0(int64_t param_1,int32_t *param_2,int32_t param_3)
{
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  uint64_t local_var_10;
  local_var_24 = *param_2;
  local_var_20 = param_2[1];
  local_var_1c = param_2[2];
  local_var_18 = param_2[3];
  local_var_10 = *(uint64_t *)(render_system_data_config + 0x28);
  local_var_28 = param_3;
  function_396dd0(*(int64_t *)(param_1 + 0xb8) + 0x20,&local_var_28);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_436030(int64_t param_1,uint64_t *param_2,int param_3)
void function_436030(int64_t param_1,uint64_t *param_2,int param_3)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  uVar3 = *(uint64_t *)(render_system_data_config + 0x28);
  local_var_2c = (int32_t)param_2[1];
  local_var_28 = (int32_t)((uint64_t)param_2[1] >> 0x20);
  lVar5 = (int64_t)param_3;
  local_var_34 = (int32_t)*param_2;
  local_var_30 = (int32_t)((uint64_t)*param_2 >> 0x20);
  local_var_24 = (int32_t)param_2[2];
  local_var_20 = (int32_t)((uint64_t)param_2[2] >> 0x20);
  local_var_1c = (int32_t)param_2[3];
  local_var_18 = (int32_t)((uint64_t)param_2[3] >> 0x20);
  lVar4 = **(int64_t **)(param_1 + 0xb8);
  puVar1 = (int32_t *)(lVar4 + lVar5 * 0x30);
  *puVar1 = *(int32_t *)(param_2 + 4);
  puVar1[1] = local_var_34;
  puVar1[2] = local_var_30;
  puVar1[3] = local_var_2c;
  puVar2 = (uint64_t *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = CONCAT44(local_var_24,local_var_28);
  puVar2[1] = CONCAT44(local_var_1c,local_var_20);
  puVar2 = (uint64_t *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = CONCAT44(local_var_14,local_var_18);
  puVar2[1] = uVar3;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_436160(int64_t param_1,uint64_t *param_2,int32_t *param_3,int param_4)
void function_436160(int64_t param_1,uint64_t *param_2,int32_t *param_3,int param_4)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int32_t *puVar9;
  int64_t lVar10;
  lVar7 = render_system_data_config;
  if (*(int64_t **)(param_1 + 0xb8) != (int64_t *)0x0) {
    puVar9 = (int32_t *)((int64_t)param_4 * 0x30 + **(int64_t **)(param_1 + 0xb8));
    uVar6 = *(uint64_t *)(puVar9 + 3);
    *param_2 = *(uint64_t *)(puVar9 + 1);
    param_2[1] = uVar6;
    uVar6 = *(uint64_t *)(puVar9 + 3);
    *(uint64_t *)((int64_t)param_2 + 0x24) = *(uint64_t *)(puVar9 + 1);
    *(uint64_t *)((int64_t)param_2 + 0x2c) = uVar6;
    uVar6 = *(uint64_t *)(puVar9 + 7);
    param_2[2] = *(uint64_t *)(puVar9 + 5);
    param_2[3] = uVar6;
    uVar6 = *(uint64_t *)(puVar9 + 7);
    *(uint64_t *)((int64_t)param_2 + 0x34) = *(uint64_t *)(puVar9 + 5);
    *(uint64_t *)((int64_t)param_2 + 0x3c) = uVar6;
    uVar2 = *puVar9;
    *(int32_t *)(param_2 + 4) = uVar2;
    *(int32_t *)((int64_t)param_2 + 0x44) = uVar2;
    *param_3 = *(int32_t *)(*(int64_t *)(puVar9 + 10) + 100);
    return;
  }
  lVar10 = (int64_t)param_4 * 9 + 5;
  lVar3 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0xa8) + 0x20) + 0x60);
  puVar1 = (uint64_t *)(lVar3 + -0x24 + lVar10 * 8);
  uVar6 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar6;
  puVar1 = (uint64_t *)(lVar3 + -0x24 + lVar10 * 8);
  uVar6 = puVar1[1];
  *(uint64_t *)((int64_t)param_2 + 0x24) = *puVar1;
  *(uint64_t *)((int64_t)param_2 + 0x2c) = uVar6;
  puVar1 = (uint64_t *)(lVar3 + -0x14 + lVar10 * 8);
  uVar6 = puVar1[1];
  param_2[2] = *puVar1;
  param_2[3] = uVar6;
  puVar9 = (int32_t *)(lVar3 + -0x14 + lVar10 * 8);
  uVar2 = puVar9[1];
  uVar4 = puVar9[2];
  uVar5 = puVar9[3];
  *(int32_t *)((int64_t)param_2 + 0x34) = *puVar9;
  *(int32_t *)(param_2 + 7) = uVar2;
  *(int32_t *)((int64_t)param_2 + 0x3c) = uVar4;
  *(int32_t *)(param_2 + 8) = uVar5;
  uVar2 = *(int32_t *)(lVar3 + -0x28 + lVar10 * 8);
  *(int32_t *)(param_2 + 4) = uVar2;
  *(int32_t *)((int64_t)param_2 + 0x44) = uVar2;
  iVar8 = RenderingSystem_PostProcessor(lVar7,lVar3 + lVar10 * 8);
  if (((iVar8 == -1) || (lVar10 = (int64_t)iVar8 * 0x68 + *(int64_t *)(lVar7 + 0x38), lVar10 == 0)
      ) && (lVar10 = *(int64_t *)(lVar7 + 0x28), lVar10 == 0)) {
    *param_3 = 0xffffffff;
    return;
  }
  *param_3 = *(int32_t *)(lVar10 + 100);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4361d7(uint64_t param_1,int64_t param_2)
void function_4361d7(uint64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t in_RAX;
  int64_t lVar9;
  int32_t *unaff_RBX;
  uint64_t *in_R10;
  lVar7 = render_system_data_config;
  lVar9 = *(int64_t *)(*(int64_t *)(in_RAX + 0x20) + 0x60);
  puVar1 = (uint64_t *)(lVar9 + -0x24 + param_2 * 8);
  uVar6 = puVar1[1];
  *in_R10 = *puVar1;
  in_R10[1] = uVar6;
  puVar1 = (uint64_t *)(lVar9 + -0x24 + param_2 * 8);
  uVar6 = puVar1[1];
  *(uint64_t *)((int64_t)in_R10 + 0x24) = *puVar1;
  *(uint64_t *)((int64_t)in_R10 + 0x2c) = uVar6;
  puVar1 = (uint64_t *)(lVar9 + -0x14 + param_2 * 8);
  uVar6 = puVar1[1];
  in_R10[2] = *puVar1;
  in_R10[3] = uVar6;
  puVar2 = (int32_t *)(lVar9 + -0x14 + param_2 * 8);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(int32_t *)((int64_t)in_R10 + 0x34) = *puVar2;
  *(int32_t *)(in_R10 + 7) = uVar3;
  *(int32_t *)((int64_t)in_R10 + 0x3c) = uVar4;
  *(int32_t *)(in_R10 + 8) = uVar5;
  uVar3 = *(int32_t *)(lVar9 + -0x28 + param_2 * 8);
  *(int32_t *)(in_R10 + 4) = uVar3;
  *(int32_t *)((int64_t)in_R10 + 0x44) = uVar3;
  iVar8 = RenderingSystem_PostProcessor(lVar7,lVar9 + param_2 * 8);
  if (((iVar8 == -1) || (lVar9 = (int64_t)iVar8 * 0x68 + *(int64_t *)(lVar7 + 0x38), lVar9 == 0))
     && (lVar9 = *(int64_t *)(lVar7 + 0x28), lVar9 == 0)) {
    *unaff_RBX = 0xffffffff;
    return;
  }
  *unaff_RBX = *(int32_t *)(lVar9 + 100);
  return;
}
// 函数: void function_43625a(void)
void function_43625a(void)
{
  int32_t *unaff_RBX;
  *unaff_RBX = 0xffffffff;
  return;
}
// 函数: void function_4362a0(int64_t param_1)
void function_4362a0(int64_t param_1)
{
  function_14e610(*(uint64_t *)(param_1 + 0xb8));
  *(uint64_t *)(param_1 + 0xb8) = 0;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4362d0(uint64_t *param_1,uint64_t *param_2)
void function_4362d0(uint64_t *param_1,uint64_t *param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  puVar7 = (uint64_t *)param_1[1];
  if (puVar7 < (uint64_t *)param_1[2]) {
    param_1[1] = (uint64_t)(puVar7 + 6);
    uVar4 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar4;
    uVar4 = param_2[3];
    puVar7[2] = param_2[2];
    puVar7[3] = uVar4;
    uVar4 = param_2[5];
    puVar7[4] = param_2[4];
    puVar7[5] = uVar4;
    return;
  }
  puVar8 = (uint64_t *)*param_1;
  lVar6 = ((int64_t)puVar7 - (int64_t)puVar8) / 0x30;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      puVar5 = (uint64_t *)0x0;
      goto LAB_18043637c;
    }
  }
  puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 0x30,(char)param_1[3]);
  puVar8 = (uint64_t *)*param_1;
  puVar7 = (uint64_t *)param_1[1];
LAB_18043637c:
  if (puVar8 != puVar7) {
// WARNING: Subroutine does not return
    memmove(puVar5,puVar8,(int64_t)puVar7 - (int64_t)puVar8);
  }
  uVar4 = param_2[1];
  *puVar5 = *param_2;
  puVar5[1] = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x14);
  uVar2 = *(int32_t *)(param_2 + 3);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x1c);
  *(int32_t *)(puVar5 + 2) = *(int32_t *)(param_2 + 2);
  *(int32_t *)((int64_t)puVar5 + 0x14) = uVar1;
  *(int32_t *)(puVar5 + 3) = uVar2;
  *(int32_t *)((int64_t)puVar5 + 0x1c) = uVar3;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar2 = *(int32_t *)(param_2 + 5);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(puVar5 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((int64_t)puVar5 + 0x24) = uVar1;
  *(int32_t *)(puVar5 + 5) = uVar2;
  *(int32_t *)((int64_t)puVar5 + 0x2c) = uVar3;
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = (uint64_t)puVar5;
  param_1[1] = (uint64_t)(puVar5 + 6);
  param_1[2] = (uint64_t)(puVar5 + lVar6 * 6);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_436321(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void function_436321(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t *unaff_RBX;
  uint64_t *unaff_RBP;
  int64_t lVar6;
  int64_t unaff_RDI;
  if (param_1 / 0x30 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = (param_1 / 0x30) * 2;
    if (lVar6 == 0) {
      puVar5 = (uint64_t *)0x0;
      goto LAB_18043637c;
    }
  }
  puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 0x30,(char)unaff_RBX[3]);
  param_4 = *unaff_RBX;
  unaff_RDI = unaff_RBX[1];
LAB_18043637c:
  if (param_4 != unaff_RDI) {
// WARNING: Subroutine does not return
    memmove(puVar5,param_4,unaff_RDI - param_4);
  }
  uVar4 = unaff_RBP[1];
  *puVar5 = *unaff_RBP;
  puVar5[1] = uVar4;
  uVar1 = *(int32_t *)((int64_t)unaff_RBP + 0x14);
  uVar2 = *(int32_t *)(unaff_RBP + 3);
  uVar3 = *(int32_t *)((int64_t)unaff_RBP + 0x1c);
  *(int32_t *)(puVar5 + 2) = *(int32_t *)(unaff_RBP + 2);
  *(int32_t *)((int64_t)puVar5 + 0x14) = uVar1;
  *(int32_t *)(puVar5 + 3) = uVar2;
  *(int32_t *)((int64_t)puVar5 + 0x1c) = uVar3;
  uVar1 = *(int32_t *)((int64_t)unaff_RBP + 0x24);
  uVar2 = *(int32_t *)(unaff_RBP + 5);
  uVar3 = *(int32_t *)((int64_t)unaff_RBP + 0x2c);
  *(int32_t *)(puVar5 + 4) = *(int32_t *)(unaff_RBP + 4);
  *(int32_t *)((int64_t)puVar5 + 0x24) = uVar1;
  *(int32_t *)(puVar5 + 5) = uVar2;
  *(int32_t *)((int64_t)puVar5 + 0x2c) = uVar3;
  if (*unaff_RBX != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RBX = (int64_t)puVar5;
  unaff_RBX[1] = (int64_t)(puVar5 + 6);
  unaff_RBX[2] = (int64_t)(puVar5 + lVar6 * 6);
  return;
}
void thunk_CoreEngineMemoryPoolCleaner(void)
{
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}