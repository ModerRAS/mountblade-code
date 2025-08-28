#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_05_part048.c - 17 个函数
// 函数: void function_2f8750(int64_t param_1,int64_t *param_2)
void function_2f8750(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int8_t stack_array_78 [32];
  int64_t *plStack_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  int8_t *plocal_var_40;
  int32_t local_var_38;
  int8_t stack_array_30 [32];
  uint64_t local_var_10;
  local_var_50 = 0xfffffffffffffffe;
  local_var_10 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  param_2 = (int64_t *)*param_2;
  if (*(int64_t **)(param_1 + 0x158) != param_2) {
    if (param_2 != (int64_t *)0x0) {
      plStack_58 = param_2;
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    plStack_58 = *(int64_t **)(param_1 + 0x158);
    *(int64_t **)(param_1 + 0x158) = param_2;
    if (plStack_58 != (int64_t *)0x0) {
      (**(code **)(*plStack_58 + 0x38))();
    }
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  uVar2 = *(int32_t *)(lVar1 + 0x28c);
  uVar3 = *(int32_t *)(lVar1 + 0x290);
  uVar4 = *(int32_t *)(lVar1 + 0x294);
  *(int32_t *)(param_1 + 0x50) = *(int32_t *)(lVar1 + 0x288);
  *(int32_t *)(param_1 + 0x54) = uVar2;
  *(int32_t *)(param_1 + 0x58) = uVar3;
  *(int32_t *)(param_1 + 0x5c) = uVar4;
  plocal_var_48 = &processed_var_672_ptr;
  plocal_var_40 = stack_array_30;
  stack_array_30[0] = 0;
  local_var_38 = 0x1a;
  strcpy_s(stack_array_30,0x20,&processed_var_736_ptr);
  uVar5 = SystemCore_LoggingSystem0(*(uint64_t *)(lVar1 + 0x1e0),&plocal_var_48,0);
  *(bool *)(param_1 + 0x178) = (*(uint64_t *)(lVar1 + 0x140) & uVar5) != 0;
  plocal_var_48 = &system_state_ptr;
  uVar5 = *(uint64_t *)(param_1 + 0x158);
  if (uVar5 != 0) {
    uVar5 = (uint64_t)(byte)(*(char *)(uVar5 + 0x2c8) + 8);
  }
  *(uint *)(param_1 + 0x4c) =
       ((int)*(float *)(param_1 + 0x30) & 0xfff0U | ((uint)uVar5 & 0xff) << 0x14) << 8 |
       (int)param_1 >> 4 & 0xfffU;
  function_2f65b0(param_1);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_10 ^ (uint64_t)stack_array_78);
}
uint64_t * function_2f88e0(uint64_t *param_1,uint64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  *param_1 = &ui_system_data_1912_ptr;
  plVar1 = (int64_t *)param_1[0xb];
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = __RTCastToVoid(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1,0);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar2);
    }
  }
  param_1[0xb] = 0;
  *param_1 = &ui_system_data_1608_ptr;
  *param_1 = &ui_system_data_1864_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}
uint64_t *
function_2f8990(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &ui_system_data_1608_ptr;
  *param_1 = &ui_system_data_1864_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
uint64_t * function_2f89e0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &ui_system_data_1864_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2f8a10(uint64_t *param_1)
void function_2f8a10(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  plVar1 = (int64_t *)param_1[0xb];
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = __RTCastToVoid(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1,0);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar2);
    }
  }
  uVar3 = system_memory_pool_ptr;
  param_1[0xb] = 0;
  uVar3 = CoreMemoryPoolReallocator(uVar3,0x11b0,0x10,4);
  lVar2 = function_434170(uVar3);
  param_1[0xb] = lVar2;
  if ((void *)*param_1 != &ui_system_data_1912_ptr) {
    (**(code **)((void *)*param_1 + 0x38))(param_1);
  }
// WARNING: Subroutine does not return
  memset(lVar2 + 0x140,0,0x1050);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2f8a31(void)
void function_2f8a31(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *unaff_RBX;
  uint64_t *unaff_RDI;
  lVar1 = __RTCastToVoid();
  (**(code **)(*unaff_RBX + 0x20))();
  uVar2 = system_memory_pool_ptr;
  if (lVar1 == 0) {
    unaff_RDI[0xb] = 0;
    uVar2 = CoreMemoryPoolReallocator(uVar2,0x11b0,0x10,4);
    lVar1 = function_434170(uVar2);
    unaff_RDI[0xb] = lVar1;
    if ((void *)*unaff_RDI != &ui_system_data_1912_ptr) {
      (**(code **)((void *)*unaff_RDI + 0x38))();
    }
// WARNING: Subroutine does not return
    memset(lVar1 + 0x140,0,0x1050);
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(lVar1);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2f8a5c(void)
void function_2f8a5c(void)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *unaff_RDI;
  uVar1 = system_memory_pool_ptr;
  unaff_RDI[0xb] = 0;
  uVar1 = CoreMemoryPoolReallocator(uVar1,0x11b0,0x10,4);
  lVar2 = function_434170(uVar1);
  unaff_RDI[0xb] = lVar2;
  if ((void *)*unaff_RDI != &ui_system_data_1912_ptr) {
    (**(code **)((void *)*unaff_RDI + 0x38))();
  }
// WARNING: Subroutine does not return
  memset(lVar2 + 0x140,0,0x1050);
}
// 函数: void function_2f8ad0(int64_t *param_1,int32_t param_2,uint64_t param_3)
void function_2f8ad0(int64_t *param_1,int32_t param_2,uint64_t param_3)
{
  uint64_t *puVar1;
  (**(code **)(*param_1 + 200))();
  puVar1 = (uint64_t *)param_1[0xb];
  if (puVar1 != (uint64_t *)0x0) {
    (**(code **)*puVar1)(puVar1,param_2,param_3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2f8b20(uint64_t *param_1,float param_2)
void function_2f8b20(uint64_t *param_1,float param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t *plVar4;
  int64_t lVar5;
  char cVar6;
  float *pfVar7;
  int64_t lVar8;
  if ((void *)*param_1 == &ui_system_data_1912_ptr) {
    if ((param_1[0xc] == 0) && (param_1[0xd] == 0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
  }
  else {
    cVar6 = (**(code **)((void *)*param_1 + 0xe8))(param_1);
  }
  if ((cVar6 != '\0') && (*(char *)(system_system_data_config + 0x210) == '\0')) {
    plVar4 = *(int64_t **)(param_1[0xb] + 8);
    lVar5 = *plVar4;
    if ((lVar5 != 0) && ((0.99 < *(float *)(plVar4 + 2) && (*(short *)(lVar5 + 0x7c) != -1)))) {
      pfVar7 = (float *)(lVar5 + 0x6c);
      lVar8 = 4;
      fVar1 = *(float *)((int64_t)plVar4 + 0x2c);
      fVar2 = *(float *)(lVar5 + 0x188);
      fVar3 = *(float *)(plVar4 + 1);
      do {
        if ((fVar3 <= *pfVar7) && (*pfVar7 < (fVar1 / fVar2) * param_2 + fVar3)) {
          (*(code *)param_1[0xd])(param_1[0xc],(int)*(short *)(lVar5 + 0x7c));
        }
        pfVar7 = pfVar7 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}
// 函数: void function_2f8b81(void)
void function_2f8b81(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t in_RAX;
  float *pfVar6;
  int64_t lVar7;
  int64_t unaff_RDI;
  float unaff_XMM8_Da;
  plVar4 = *(int64_t **)(in_RAX + 8);
  lVar5 = *plVar4;
  if (((lVar5 != 0) && (0.99 < *(float *)(plVar4 + 2))) && (*(short *)(lVar5 + 0x7c) != -1)) {
    pfVar6 = (float *)(lVar5 + 0x6c);
    lVar7 = 4;
    fVar1 = *(float *)((int64_t)plVar4 + 0x2c);
    fVar2 = *(float *)(lVar5 + 0x188);
    fVar3 = *(float *)(plVar4 + 1);
    do {
      if ((fVar3 <= *pfVar6) && (*pfVar6 < (fVar1 / fVar2) * unaff_XMM8_Da + fVar3)) {
        (**(code **)(unaff_RDI + 0x68))
                  (*(uint64_t *)(unaff_RDI + 0x60),(int)*(short *)(lVar5 + 0x7c));
      }
      pfVar6 = pfVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}
// 函数: void function_2f8bab(int64_t param_1)
void function_2f8bab(int64_t param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int64_t unaff_RBP;
  int64_t lVar5;
  int64_t unaff_RDI;
  float unaff_XMM8_Da;
  pfVar4 = (float *)(unaff_RBP + 0x6c);
  lVar5 = 4;
  fVar1 = *(float *)(param_1 + 0x2c);
  fVar2 = *(float *)(unaff_RBP + 0x188);
  fVar3 = *(float *)(param_1 + 8);
  do {
    if ((fVar3 <= *pfVar4) && (*pfVar4 < (fVar1 / fVar2) * unaff_XMM8_Da + fVar3)) {
      (**(code **)(unaff_RDI + 0x68))
                (*(uint64_t *)(unaff_RDI + 0x60),(int)*(short *)(unaff_RBP + 0x7c));
    }
    pfVar4 = pfVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}
// 函数: void function_2f8c1a(void)
void function_2f8c1a(void)
{
  return;
}
// 函数: void function_2f8c1f(void)
void function_2f8c1f(void)
{
  return;
}
// 函数: void function_2f8c50(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_2f8c50(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,int32_t param_7,int32_t param_8,
                  int32_t param_9,int8_t param_10,int8_t param_11,int8_t param_12,
                  int8_t param_13)
{
  function_4317d0(*(uint64_t *)(param_1 + 0x58),param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10,param_11,param_12,param_13,0x3f800000);
  return;
}
// 函数: void function_2f8cf0(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void function_2f8cf0(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  int8_t param_5)
{
  int32_t astack_special_x_20 [2];
  astack_special_x_20[0] = param_4;
  function_432170(*(uint64_t *)(param_1 + 0x58),param_3,astack_special_x_20,param_5);
  return;
}
// 函数: void function_2f8e80(int64_t param_1,int64_t param_2,int64_t param_3)
void function_2f8e80(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int32_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char cVar9;
  int32_t local_var_b8;
  int32_t local_var_b4;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int32_t local_var_9c;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int16_t local_var_78;
  int32_t local_var_74;
  int16_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  int32_t local_var_1c;
  int16_t local_var_18;
  int8_t local_var_16;
  if (*(byte *)(param_3 + 0x1040) == 0x40) {
    uVar7 = 0xffffffffffffffff;
    uVar8 = 0xffffffffffffffff;
  }
  else {
    uVar7 = (1L << (*(byte *)(param_3 + 0x1040) & 0x3f)) - 1;
    uVar8 = *(uint64_t *)(param_3 + 0x800) | uVar7;
  }
  *(uint64_t *)(param_3 + 0x800) = uVar8;
  *(uint64_t *)(param_3 + 0x810) = uVar7;
  lVar3 = *(int64_t *)(param_2 + 0x208);
  local_var_68 = 0x3f800000;
  local_var_64 = 0;
  local_var_60 = 0;
  local_var_5c = 0;
  local_var_58 = 0;
  local_var_54 = 0;
  local_var_50 = 0;
  local_var_4c = 0x3f800000;
  local_var_48 = 0x3f800000;
  local_var_44 = 0;
  local_var_40 = 0;
  local_var_3c = 0;
  local_var_38 = 0;
  local_var_34 = 0;
  local_var_30 = 0;
  local_var_2c = 0x3f800000;
  local_var_28 = 0;
  local_var_24 = 0;
  local_var_20 = 0;
  local_var_1c = 0;
  local_var_18 = 0xffff;
  local_var_16 = 0;
  local_var_b8 = 0x3f800000;
  local_var_b4 = 0;
  local_var_b0 = 0;
  local_var_ac = 0;
  local_var_a8 = 0;
  local_var_a4 = 0;
  local_var_a0 = 0;
  local_var_9c = 0x3f800000;
  local_var_98 = 0x3f800000;
  local_var_94 = 0;
  local_var_90 = 0;
  local_var_8c = 0;
  local_var_88 = 0;
  local_var_84 = 0;
  local_var_80 = 0;
  local_var_7c = 0x3f800000;
  local_var_78 = 0xffff;
  local_var_74 = 0;
  local_var_70 = 0;
  if (*(int64_t *)(param_1 + 0x58) != 0) {
    function_433100(*(int64_t *)(param_1 + 0x58),param_3,&local_var_68,&local_var_b8,lVar3,0,
                  *(float *)(param_2 + 0x38) <= 0.005 && *(float *)(param_2 + 0x38) != 0.005);
    if ((*(int64_t *)(param_1 + 0x58) != 0) &&
       (*(int *)(*(int64_t *)(param_1 + 0x58) + 0x10) != 0)) {
      return;
    }
  }
  cVar9 = '\0';
  if ('\0' < *(char *)(param_3 + 0x1040)) {
    do {
      uVar7 = (uint64_t)cVar9;
      cVar9 = cVar9 + '\x01';
      puVar2 = (int32_t *)(uVar7 * 0x1b0 + 0x90 + *(int64_t *)(lVar3 + 0x140));
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar1 = (int32_t *)(param_3 + (uVar7 + 0x82) * 0x10);
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *(uint64_t *)(param_3 + 0x800) =
           *(uint64_t *)(param_3 + 0x800) |
           *(uint64_t *)(uVar7 * 0x1b0 + 0xe8 + *(int64_t *)(lVar3 + 0x140));
      *(uint64_t *)(param_3 + 0x808) = *(uint64_t *)(param_3 + 0x808) | 1L << (uVar7 & 0x3f);
    } while (cVar9 < *(char *)(param_3 + 0x1040));
  }
  Function_c002a574(param_3,lVar3);
  return;
}
// 函数: void function_2f9040(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_2f9040(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6)
{
  function_433100(*(uint64_t *)(param_1 + 0x58),param_3,param_4,param_5,param_6,0,0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_2f9080(uint64_t param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,0xfffffffffffffffe);
  *puVar1 = &ui_system_data_1864_ptr;
  *puVar1 = &ui_system_data_1608_ptr;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *puVar1 = &ui_system_data_1912_ptr;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xb] = 0;
  function_2f8a10(puVar1,param_2);
  return puVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2f9110(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4)
void function_2f9110(int64_t *param_1,int64_t *param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  char *pcVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  char acStackX_20 [8];
  int32_t local_var_4c;
  int32_t local_var_44;
  acStackX_20[0] = (char)param_4;
  (**(code **)(*param_2 + 0x1c0))(param_2,0x2000,0xffffffff,param_4,0xfffffffffffffffe);
  plStackX_8 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  iVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  if (iVar3 == 0) {
    cVar2 = SystemFunction_000180282950();
    if (cVar2 != '\0') {
      uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,200,8,3);
      plVar5 = (int64_t *)function_30b420(uVar4,param_2);
      plStackX_18 = plVar5;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
        plStackX_10 = plVar5;
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      plStackX_8 = plVar5;
      plStackX_10 = param_2;
      (**(code **)(*param_2 + 0x38))(param_2);
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5);
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x98))(param_2);
  }
  PhysicsSystem_TriggersProcessor(param_1 + 0x16,&plStackX_8);
  plVar5 = plStackX_8;
  cVar2 = (**(code **)(*plStackX_8 + 0xa0))(plStackX_8);
  if (cVar2 != '\0') {
    PhysicsSystem_TriggersProcessor(param_1 + 0x1a,&plStackX_8);
    plVar5 = plStackX_8;
    iVar3 = (**(code **)(*plStackX_8 + 0x98))(plStackX_8);
    if (iVar3 == 2) {
      iVar3 = 0;
      lVar7 = plVar5[6];
      if (plVar5[7] - lVar7 >> 3 != 0) {
        lVar9 = 0;
        do {
          cVar2 = (**(code **)(**(int64_t **)(lVar9 + lVar7) + 0xa0))();
          if (cVar2 != '\0') goto LAB_1802f92c0;
          iVar3 = iVar3 + 1;
          lVar9 = lVar9 + 8;
          lVar7 = plVar5[6];
        } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(plVar5[7] - lVar7 >> 3));
      }
    }
    else {
LAB_1802f92c0:
      acStackX_20[0] = (char)((uint)((int)param_1 - *(int *)(param_3 + 0x18)) >> 8);
      iVar3 = 0;
      pcVar8 = *(char **)(param_3 + 0xb0);
      uVar10 = (int64_t)*(char **)(param_3 + 0xb8) - (int64_t)pcVar8;
      if (*(char **)(param_3 + 0xb8) != pcVar8) {
        do {
          if (*pcVar8 == acStackX_20[0]) goto LAB_1802f9310;
          iVar3 = iVar3 + 1;
          pcVar8 = pcVar8 + 1;
        } while ((uint64_t)(int64_t)iVar3 < uVar10);
      }
      NetworkSystem_StreamProcessor((uint64_t *)(param_3 + 0xb0),acStackX_20);
    }
  }
LAB_1802f9310:
  puVar1 = *(uint64_t **)(param_3 + 0x148);
  puVar6 = *(uint64_t **)(param_3 + 0x140);
  if (puVar6 != puVar1) {
    do {
      if ((int64_t *)*puVar6 == param_1) break;
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
    if (puVar6 != puVar1) goto LAB_1802f934e;
  }
  plStackX_10 = param_1;
  SystemSecurity_Manager((uint64_t *)(param_3 + 0x140),&plStackX_10);
LAB_1802f934e:
  local_var_44 = (int32_t)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(param_2 + 2) = 0;
  *(int32_t *)((int64_t)param_2 + 0x14) = local_var_4c;
  *(int *)(param_2 + 3) = (int)param_1;
  *(int32_t *)((int64_t)param_2 + 0x1c) = local_var_44;
  param_2[4] = param_3;
  if ((*(int64_t *)(param_3 + 0x10) != 0) &&
     (*(int64_t *)(*(int64_t *)(param_3 + 0x10) + 0x20) != 0)) {
    function_2548a0(param_2);
  }
// WARNING: Could not recover jumptable at 0x0001802f93a1. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar5 + 0x38))(plVar5);
  return;
}
// 函数: void function_2f93b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_2f93b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plStackX_8;
  uint64_t uVar6;
  uVar6 = 0xfffffffffffffffe;
  iVar3 = 0;
  lVar5 = *(int64_t *)(param_1 + 0xb0);
  if (*(int64_t *)(param_1 + 0xb8) - lVar5 >> 3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(int64_t **)(lVar4 + lVar5);
      uVar2 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if ((uVar2 < 8) && ((0x85U >> (uVar2 & 0x1f) & 1) != 0)) {
        plStackX_8 = plVar1;
        (**(code **)(*plVar1 + 0x28))(plVar1);
        function_2f9710(param_1,&plStackX_8,param_2,param_4,uVar6);
        iVar3 = iVar3 + -1;
        lVar4 = lVar4 + -8;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
      lVar5 = *(int64_t *)(param_1 + 0xb0);
    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(*(int64_t *)(param_1 + 0xb8) - lVar5 >> 3));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2f9480(uint *param_1,int32_t param_2,int64_t param_3,float *param_4)
void function_2f9480(uint *param_1,int32_t param_2,int64_t param_3,float *param_4)
{
  uint uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  int64_t lVar23;
  int8_t stack_array_178 [32];
  int64_t lStack_158;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint local_var_118;
  uint local_var_114;
  uint local_var_110;
  uint local_var_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint local_var_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint local_var_b8;
  uint local_var_b4;
  uint local_var_b0;
  uint local_var_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint local_var_9c;
  uint64_t local_var_98;
  local_var_98 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  iVar21 = (int)(*(int64_t *)(param_1 + 0x36) - *(int64_t *)(param_1 + 0x34) >> 3);
  if (0 < iVar21) {
    bVar19 = false;
    if (0 < iVar21) {
      lVar23 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(param_1 + 0x34) + lVar23 * 8);
        iVar22 = (**(code **)(*plVar2 + 0x98))(plVar2);
        if ((iVar22 != 2) ||
           (*(char *)(*(int64_t *)(*(int64_t *)(param_1 + 0x34) + lVar23 * 8) + 0xaa) != '\0')) {
          if (!bVar19) {
            bVar19 = true;
            do {
              LOCK();
              uVar1 = *param_1;
              *param_1 = *param_1 | 1;
              UNLOCK();
            } while ((uVar1 & 1) != 0);
            local_var_118 = param_1[1];
            local_var_114 = param_1[2];
            local_var_110 = param_1[3];
            local_var_10c = param_1[4];
            fVar4 = (float)param_1[5];
            fVar5 = (float)param_1[6];
            fVar6 = (float)param_1[7];
            local_var_fc = param_1[8];
            *param_1 = 0;
            fStack_108 = fVar4;
            fStack_104 = fVar5;
            fStack_100 = fVar6;
            local_var_b8 = local_var_118;
            local_var_b4 = local_var_114;
            local_var_b0 = local_var_110;
            local_var_ac = local_var_10c;
            fStack_a8 = fVar4;
            fStack_a4 = fVar5;
            fStack_a0 = fVar6;
            local_var_9c = local_var_fc;
            SystemSecurityManager(&fStack_148,&local_var_118);
            fVar7 = *param_4;
            fVar8 = param_4[1];
            fVar9 = param_4[2];
            fVar10 = param_4[3];
            fVar11 = param_4[4];
            fVar12 = param_4[5];
            fVar13 = param_4[6];
            fVar14 = param_4[7];
            fVar15 = param_4[8];
            fVar16 = param_4[9];
            fVar17 = param_4[10];
            fVar18 = param_4[0xb];
            fStack_f8 = fStack_144 * fVar11 + fStack_148 * fVar7 + fStack_140 * fVar15;
            fStack_f4 = fStack_144 * fVar12 + fStack_148 * fVar8 + fStack_140 * fVar16;
            fStack_f0 = fStack_144 * fVar13 + fStack_148 * fVar9 + fStack_140 * fVar17;
            fStack_ec = fStack_144 * fVar14 + fStack_148 * fVar10 + fStack_140 * fVar18;
            fStack_e8 = fStack_134 * fVar11 + fStack_138 * fVar7 + fStack_130 * fVar15;
            fStack_e4 = fStack_134 * fVar12 + fStack_138 * fVar8 + fStack_130 * fVar16;
            fStack_e0 = fStack_134 * fVar13 + fStack_138 * fVar9 + fStack_130 * fVar17;
            fStack_dc = fStack_134 * fVar14 + fStack_138 * fVar10 + fStack_130 * fVar18;
            fStack_d8 = fStack_124 * fVar11 + fStack_128 * fVar7 + fStack_120 * fVar15;
            fStack_d4 = fStack_124 * fVar12 + fStack_128 * fVar8 + fStack_120 * fVar16;
            fStack_d0 = fStack_124 * fVar13 + fStack_128 * fVar9 + fStack_120 * fVar17;
            fStack_cc = fStack_124 * fVar14 + fStack_128 * fVar10 + fStack_120 * fVar18;
            fStack_c8 = fVar5 * fVar11 + fVar4 * fVar7 + fVar6 * fVar15 + param_4[0xc];
            fStack_c4 = fVar5 * fVar12 + fVar4 * fVar8 + fVar6 * fVar16 + param_4[0xd];
            fStack_c0 = fVar5 * fVar13 + fVar4 * fVar9 + fVar6 * fVar17 + param_4[0xe];
            fStack_bc = fVar5 * fVar14 + fVar4 * fVar10 + fVar6 * fVar18 + param_4[0xf];
          }
          plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x34) + lVar23 * 8);
          (**(code **)(*plVar3 + 0x1b8))(plVar3,param_2,&fStack_f8);
        }
        cVar20 = (**(code **)(*plVar2 + 0x138))(plVar2);
        if (cVar20 != '\0') {
          lStack_158 = param_3;
          function_1985e0(*(uint64_t *)(*(int64_t *)(param_3 + 0x10) + 0x20),plVar2,3,param_1);
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 < iVar21);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_98 ^ (uint64_t)stack_array_178);
}