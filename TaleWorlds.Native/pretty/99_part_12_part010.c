#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_12_part010.c - 7 个函数
// 函数: void function_7cf4e0(int64_t param_1)
void function_7cf4e0(int64_t param_1)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)(param_1 + 0x420);
  if (param_1 == 0) {
    plVar1 = (int64_t *)0x428;
  }
  if (*plVar1 != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_8752_ptr,0x96,1);
  }
  *plVar1 = 0;
  return;
}
// 函数: void function_7cf540(void)
void function_7cf540(void)
{
// WARNING: Subroutine does not return
  memset(&system_data_09a0,0,0xf0);
}
uint64_t function_7cf5f0(uint64_t param_1,uint64_t param_2,int64_t param_3,int32_t param_4)
{
  if (param_3 != 0) {
    SystemFunction_00018076b450(param_3,&processed_var_8728_ptr,param_4);
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t
function_7cf630(int64_t param_1,uint64_t param_2,uint64_t param_3,int *param_4,int *param_5,
             int *param_6,int *param_7,uint param_8)
{
  int *piVar1;
  uint *puVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  int32_t uVar6;
  if (*param_5 == 0) {
    *param_5 = 3;
    *param_6 = 2;
  }
  iVar4 = (int)(param_8 * 1000) / *param_4;
  iVar4 = iVar4 / 3 + (iVar4 >> 0x1f) +
          (int)(((int64_t)iVar4 / 3 + ((int64_t)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  else if (10 < iVar4) {
    iVar4 = 10;
  }
  piVar1 = (int *)(param_1 + 0x418);
  if (param_1 == 0) {
    piVar1 = (int *)0x420;
  }
  *piVar1 = iVar4;
  puVar2 = (uint *)(param_1 + 0x414);
  if (param_1 == 0) {
    puVar2 = (uint *)0x41c;
  }
  *puVar2 = param_8;
  iVar4 = *param_7;
  if (iVar4 == 1) {
    lVar3 = 8;
  }
  else if (iVar4 == 2) {
    lVar3 = 0x10;
  }
  else if (iVar4 == 3) {
    lVar3 = 0x18;
  }
  else {
    if ((iVar4 != 4) && (iVar4 != 5)) goto LAB_1807cf6fc;
    lVar3 = 0x20;
  }
  param_8 = (uint)((uint64_t)param_8 * lVar3 >> 3);
LAB_1807cf6fc:
  lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_6 * param_8,&processed_var_8752_ptr,
                        0x7b,0);
  plVar5 = (int64_t *)(param_1 + 0x420);
  if (param_1 == 0) {
    plVar5 = (int64_t *)0x428;
  }
  *plVar5 = lVar3;
  uVar6 = 0;
  if (lVar3 == 0) {
    uVar6 = 0x26;
  }
  return uVar6;
}
uint64_t function_7cf760(int64_t param_1)
{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint astack_special_x_8 [2];
  uVar3 = 0;
  astack_special_x_8[0] = 0;
  uVar4 = param_1 - 8;
  if (param_1 == 0) {
    uVar4 = uVar3;
  }
  iVar1 = *(int *)(*(int64_t *)(uVar4 + 0x48) + 0x6d0);
  SystemCore_PerformanceMonitor(astack_special_x_8);
  astack_special_x_8[0] = (iVar1 * astack_special_x_8[0]) / 1000;
  if (*(uint *)(uVar4 + 0x41c) <= astack_special_x_8[0] - *(int *)(uVar4 + 0x418)) {
    if (uVar4 != 0) {
      uVar3 = uVar4 + 8;
    }
    uVar2 = (**(code **)(uVar4 + 0x10))(uVar3,*(uint64_t *)(uVar4 + 0x428));
    uVar3 = (uint64_t)uVar2;
    *(int *)(uVar4 + 0x418) = *(int *)(uVar4 + 0x418) + *(int *)(uVar4 + 0x41c);
  }
  UIComponent_EventHandler(*(int32_t *)(uVar4 + 0x420));
  return uVar3;
}
uint64_t function_7cf800(int64_t param_1)
{
  int iVar1;
  int64_t *plVar2;
  uint *puVar3;
  int aiStackX_8 [2];
  aiStackX_8[0] = 0;
  plVar2 = (int64_t *)(param_1 + 0x40);
  if (param_1 == 0) {
    plVar2 = (int64_t *)0x48;
  }
  iVar1 = *(int *)(*plVar2 + 0x6d0);
  SystemCore_PerformanceMonitor(aiStackX_8);
  puVar3 = (uint *)(param_1 + 0x410);
  if (param_1 == 0) {
    puVar3 = (uint *)0x418;
  }
  *puVar3 = (uint)(iVar1 * aiStackX_8[0]) / 1000;
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7cf870(int64_t param_1)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)(param_1 + 0x418);
  if (param_1 == 0) {
    plVar1 = (int64_t *)0x420;
  }
  if (*plVar1 != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_8912_ptr,0x96,1);
  }
  return 0;
}
// 函数: void function_7cf8d0(void)
void function_7cf8d0(void)
{
// WARNING: Subroutine does not return
  memset(&system_data_0a90,0,0xf0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t function_7cf970(int64_t param_1)
{
  int iVar1;
  uint *puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int *local_var_28;
  int *local_var_30;
  int *local_var_38;
  uint local_var_40;
  if (*local_var_28 == 0) {
    *local_var_28 = 3;
    *local_var_30 = 2;
  }
  puVar2 = (uint *)(param_1 + 0x410);
  if (param_1 == 0) {
    puVar2 = (uint *)0x418;
  }
  *puVar2 = local_var_40;
  iVar1 = *local_var_38;
  if (iVar1 == 1) {
    lVar3 = 8;
  }
  else if (iVar1 == 2) {
    lVar3 = 0x10;
  }
  else if (iVar1 == 3) {
    lVar3 = 0x18;
  }
  else {
    if ((iVar1 != 4) && (iVar1 != 5)) goto LAB_1807cf9f8;
    lVar3 = 0x20;
  }
  local_var_40 = (uint)((uint64_t)local_var_40 * lVar3 >> 3);
LAB_1807cf9f8:
  lVar3 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),
                        *local_var_30 * local_var_40,&processed_var_8912_ptr,0x7b,0);
  plVar4 = (int64_t *)(param_1 + 0x418);
  if (param_1 == 0) {
    plVar4 = (int64_t *)0x420;
  }
  *plVar4 = lVar3;
  uVar5 = 0;
  if (lVar3 == 0) {
    uVar5 = 0x26;
  }
  return uVar5;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7cfa90(int64_t param_1)
{
  int64_t *plVar1;
  int32_t *puVar2;
  int64_t *plVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  bool bVar6;
  plVar3 = (int64_t *)(param_1 + 0x530);
  if (param_1 == 0) {
    plVar3 = (int64_t *)0x538;
  }
  if (*plVar3 != 0) {
    bVar6 = param_1 == 0;
    puVar5 = (int32_t *)(param_1 + 0x524);
    puVar4 = (int32_t *)(param_1 + 0x50);
    if (bVar6) {
      puVar5 = (int32_t *)0x52c;
    }
    plVar1 = (int64_t *)(param_1 + 0x40);
    if (bVar6) {
      plVar1 = (int64_t *)0x48;
    }
    puVar2 = (int32_t *)(param_1 + 0x48);
    if (bVar6) {
      puVar4 = (int32_t *)0x58;
      puVar2 = (int32_t *)0x50;
    }
    function_7c9b50(*plVar3,*puVar2,*puVar4,*(int32_t *)(*plVar1 + 0x6d0),*puVar5);
    function_768420(*plVar3);
    *plVar3 = 0;
  }
  plVar3 = (int64_t *)(param_1 + 0x510);
  if (param_1 == 0) {
    plVar3 = (int64_t *)0x518;
  }
  if (*plVar3 == 0) {
    return 0;
  }
// WARNING: Subroutine does not return
  SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar3,&processed_var_9472_ptr,0xc6,1);
}
// 函数: void function_7cfb70(void)
void function_7cfb70(void)
{
// WARNING: Subroutine does not return
  memset(&system_data_0b80,0,0x98);
}
uint64_t
function_7cfc30(uint64_t param_1,int param_2,int64_t param_3,int32_t param_4,int *param_5)
{
  void *puVar1;
  if (param_3 != 0) {
    if (param_2 == 0) {
      puVar1 = &processed_var_9072_ptr;
    }
    else if (param_2 == 1) {
      puVar1 = &processed_var_9152_ptr;
    }
    else if (param_2 == 2) {
      puVar1 = &processed_var_9232_ptr;
    }
    else if (param_2 == 3) {
      puVar1 = &processed_var_9312_ptr;
    }
    else {
      if (param_2 != 4) goto LAB_1807cfc90;
      puVar1 = &processed_var_9392_ptr;
    }
    SystemFunction_00018076b450(param_3,puVar1,param_4);
  }
LAB_1807cfc90:
  if (param_5 != (int *)0x0) {
    *param_5 = param_2;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
function_7cfce0(int64_t param_1,int param_2,uint64_t param_3,int *param_4,int *param_5,int *param_6
             ,int *param_7,uint param_8,uint64_t param_9,uint64_t param_10,void *param_11)
{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  void *puVar5;
  int8_t astack_special_x_10 [8];
  *(int32_t *)(param_1 + 0x5c) = 1;
  if (param_2 == 0) {
    *param_7 = 2;
  }
  else if (param_2 == 1) {
    *param_7 = 1;
  }
  else if (param_2 == 2) {
    *param_7 = 3;
  }
  else if (param_2 == 3) {
    *param_7 = 4;
  }
  else if (param_2 == 4) {
    *param_7 = 5;
  }
  if (*param_5 == 0) {
    *param_5 = 3;
    *param_6 = 2;
  }
  iVar4 = *param_7;
  *(int32_t *)(param_1 + 0x528) = 0;
  lVar2 = 0x20;
  if (iVar4 == 1) {
    *(int32_t *)(param_1 + 0x528) = 8;
  }
  else if (iVar4 == 2) {
    *(int32_t *)(param_1 + 0x528) = 0x10;
  }
  else if (iVar4 == 3) {
    *(int32_t *)(param_1 + 0x528) = 0x18;
  }
  else if ((iVar4 == 4) || (iVar4 == 5)) {
    *(int32_t *)(param_1 + 0x528) = 0x20;
  }
  iVar4 = *param_7;
  if (iVar4 == 1) {
    lVar2 = 8;
  }
  else if (iVar4 == 2) {
    lVar2 = 0x10;
  }
  else if (iVar4 == 3) {
    lVar2 = 0x18;
  }
  else if ((iVar4 != 4) && (uVar1 = param_8, iVar4 != 5)) goto LAB_1807cfdfc;
  uVar1 = (uint)((uint64_t)param_8 * lVar2 >> 3);
LAB_1807cfdfc:
  *(uint *)(param_1 + 0x520) = uVar1 * *param_6;
  iVar4 = (int)(param_8 * 1000) / *param_4;
  iVar4 = iVar4 / 3 + (iVar4 >> 0x1f) +
          (int)(((int64_t)iVar4 / 3 + ((int64_t)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  else if (10 < iVar4) {
    iVar4 = 10;
  }
  *(int *)(param_1 + 0x524) = iVar4;
  lVar2 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int32_t *)(param_1 + 0x520),
                        &processed_var_9472_ptr,0x93,0);
  *(int64_t *)(param_1 + 0x518) = lVar2;
  if (lVar2 != 0) {
    puVar5 = &processed_var_9600_ptr;
    if (param_11 != (void *)0x0) {
      puVar5 = param_11;
    }
    SystemFunction_00018076b450(param_1 + 0x418,puVar5,0x100);
    uVar3 = function_768440(param_1 + 0x418,1,astack_special_x_10,param_1 + 0x538);
    if ((int)uVar3 == 0) {
      if (*(int64_t *)(param_1 + 0x538) == 0) {
        return 0x12;
      }
      uVar3 = function_7d00a0(param_1);
    }
    return uVar3;
  }
  return 0x26;
}
uint64_t function_7cfe86(void)
{
  uint64_t uVar1;
  int64_t unaff_RDI;
  SystemFunction_00018076b450(unaff_RDI + 0x418);
  uVar1 = function_768440(unaff_RDI + 0x418,1,&local_buffer_00000048,unaff_RDI + 0x538);
  if ((int)uVar1 == 0) {
    if (*(int64_t *)(unaff_RDI + 0x538) == 0) {
      return 0x12;
    }
    uVar1 = function_7d00a0();
  }
  return uVar1;
}
uint64_t function_7cfece(void)
{
  uint64_t uVar1;
  int64_t unaff_RDI;
  if (*(int64_t *)(unaff_RDI + 0x538) == 0) {
    return 0x12;
  }
  uVar1 = function_7d00a0();
  return uVar1;
}
uint64_t function_7cff20(int64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  byte *pbVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint astack_special_x_8 [2];
  uVar7 = 0;
  astack_special_x_8[0] = 0;
  uVar6 = param_1 - 8;
  if (param_1 == 0) {
    uVar6 = uVar7;
  }
  iVar1 = *(int *)(*(int64_t *)(uVar6 + 0x48) + 0x6d0);
  SystemCore_PerformanceMonitor(astack_special_x_8);
  astack_special_x_8[0] = (iVar1 * astack_special_x_8[0]) / 1000;
  uVar4 = ((uint64_t)(uint)(*(int *)(uVar6 + 0x520) << 3) / (uint64_t)*(uint *)(uVar6 + 0x528)) /
          (uint64_t)*(uint *)(uVar6 + 0x58);
  uVar5 = (uint)uVar4;
  uVar2 = uVar7;
  if (uVar5 <= astack_special_x_8[0] - *(int *)(uVar6 + 0x530)) {
    uVar2 = uVar6 + 8;
    if (uVar6 == 0) {
      uVar2 = uVar7;
    }
    uVar2 = (**(code **)(uVar6 + 0x10))(uVar2,*(uint64_t *)(uVar6 + 0x518),uVar4);
    *(int *)(uVar6 + 0x530) = *(int *)(uVar6 + 0x530) + uVar5;
    if ((int)uVar2 == 0) {
      if ((*(int *)(uVar6 + 0x50) == 1) &&
         (pbVar3 = *(byte **)(uVar6 + 0x518), uVar4 = uVar7, 0 < *(int *)(uVar6 + 0x520))) {
        do {
          *pbVar3 = *pbVar3 ^ 0x80;
          pbVar3 = pbVar3 + 1;
          uVar5 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar5;
        } while ((int)uVar5 < *(int *)(uVar6 + 0x520));
      }
      if (*(int64_t *)(uVar6 + 0x538) != 0) {
        uVar4 = function_768650(*(int64_t *)(uVar6 + 0x538),*(uint64_t *)(uVar6 + 0x518),
                              *(int32_t *)(uVar6 + 0x520),0);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        *(int *)(uVar6 + 0x52c) = *(int *)(uVar6 + 0x52c) + *(int *)(uVar6 + 0x520);
      }
      UIComponent_EventHandler(*(int32_t *)(uVar6 + 0x524));
      uVar2 = uVar7;
    }
  }
  return uVar2;
}
uint64_t function_7d0030(int64_t param_1)
{
  int iVar1;
  int64_t *plVar2;
  uint *puVar3;
  int aiStackX_8 [2];
  aiStackX_8[0] = 0;
  plVar2 = (int64_t *)(param_1 + 0x40);
  if (param_1 == 0) {
    plVar2 = (int64_t *)0x48;
  }
  iVar1 = *(int *)(*plVar2 + 0x6d0);
  SystemCore_PerformanceMonitor(aiStackX_8);
  puVar3 = (uint *)(param_1 + 0x528);
  if (param_1 == 0) {
    puVar3 = (uint *)0x530;
  }
  *puVar3 = (uint)(iVar1 * aiStackX_8[0]) / 1000;
  return 0;
}
// 函数: void function_7d00a0(int64_t param_1)
void function_7d00a0(int64_t param_1)
{
  function_7c9b50(*(uint64_t *)(param_1 + 0x538),*(int32_t *)(param_1 + 0x50),
                *(int32_t *)(param_1 + 0x58),
                *(int32_t *)(*(int64_t *)(param_1 + 0x48) + 0x6d0),
                *(int32_t *)(param_1 + 0x52c));
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7d00e0(int64_t param_1)
{
  int64_t *plVar1;
  plVar1 = (int64_t *)(param_1 + 0x510);
  if (param_1 == 0) {
    plVar1 = (int64_t *)0x518;
  }
  if (*plVar1 != 0) {
// WARNING: Subroutine does not return
    SystemDataValidator(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*plVar1,&processed_var_9664_ptr,0xb1,1);
  }
  return 0;
}
// 函数: void function_7d0140(void)
void function_7d0140(void)
{
// WARNING: Subroutine does not return
  memset(&system_data_0c70,0,0x98);
}
uint64_t function_7d0210(uint64_t param_1,int param_2,int64_t param_3,int32_t param_4)
{
  if (param_3 != 0) {
    if (param_2 == 0) {
      SystemFunction_00018076b450(param_3,&processed_var_9072_ptr,param_4);
    }
    else {
      if (param_2 == 1) {
        SystemFunction_00018076b450(param_3,&processed_var_9152_ptr,param_4);
        return 0;
      }
      if (param_2 == 2) {
        SystemFunction_00018076b450(param_3,&processed_var_9232_ptr,param_4);
        return 0;
      }
      if (param_2 == 3) {
        SystemFunction_00018076b450(param_3,&processed_var_9312_ptr,param_4);
        return 0;
      }
      if (param_2 == 4) {
        SystemFunction_00018076b450(param_3,&processed_var_9392_ptr,param_4);
        return 0;
      }
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
function_7d02e0(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4,int *param_5,
             int *param_6,int *param_7,uint param_8,uint64_t param_9,uint64_t param_10,
             void *param_11)
{
  int iVar1;
  int32_t *puVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *puVar5;
  int *piVar6;
  puVar2 = (int32_t *)(param_1 + 0x54);
  if (param_1 == 0) {
    puVar2 = (int32_t *)0x5c;
  }
  *puVar2 = 1;
  if (param_2 == 0) {
    *param_7 = 2;
  }
  else if (param_2 == 1) {
    *param_7 = 1;
  }
  else if (param_2 == 2) {
    *param_7 = 3;
  }
  else if (param_2 == 3) {
    *param_7 = 4;
  }
  else if (param_2 == 4) {
    *param_7 = 5;
  }
  if (*param_5 == 0) {
    *param_5 = 3;
    *param_6 = 2;
  }
  iVar1 = *param_7;
  puVar2 = (int32_t *)(param_1 + 0x51c);
  lVar4 = 0x20;
  if (param_1 == 0) {
    puVar2 = (int32_t *)0x524;
  }
  *puVar2 = 0;
  if (iVar1 == 1) {
    *puVar2 = 8;
  }
  else if (iVar1 == 2) {
    *puVar2 = 0x10;
  }
  else if (iVar1 == 3) {
    *puVar2 = 0x18;
  }
  else if ((iVar1 == 4) || (iVar1 == 5)) {
    *puVar2 = 0x20;
  }
  iVar1 = *param_7;
  piVar6 = (int *)(param_1 + 0x518);
  if (param_1 == 0) {
    piVar6 = (int *)0x520;
  }
  if (iVar1 == 1) {
    lVar4 = 8;
  }
  else if (iVar1 == 2) {
    lVar4 = 0x10;
  }
  else if (iVar1 == 3) {
    lVar4 = 0x18;
  }
  else if ((iVar1 != 4) && (iVar1 != 5)) goto LAB_1807d041c;
  param_8 = (uint)((uint64_t)param_8 * lVar4 >> 3);
LAB_1807d041c:
  iVar1 = *param_6;
  *piVar6 = param_8 * iVar1;
  lVar4 = SystemCore_TransformationEngine0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),param_8 * iVar1,&processed_var_9664_ptr,0x8f,
                        0);
  plVar3 = (int64_t *)(param_1 + 0x510);
  if (param_1 == 0) {
    plVar3 = (int64_t *)0x518;
  }
  *plVar3 = lVar4;
  if (lVar4 != 0) {
    lVar4 = param_1 + 0x410;
    puVar5 = &processed_var_9600_ptr;
    if (param_11 != (void *)0x0) {
      puVar5 = param_11;
    }
    if (param_1 == 0) {
      lVar4 = 0x418;
    }
    SystemFunction_00018076b450(lVar4,puVar5,0x100);
    return 0;
  }
  return 0x26;
}
uint64_t function_7d04c0(int64_t param_1)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int32_t *puVar4;
  int64_t *plVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  bool bVar8;
  int8_t astack_special_x_8 [8];
  plVar5 = (int64_t *)(param_1 + 0x528);
  if (param_1 == 0) {
    plVar5 = (int64_t *)0x530;
  }
  lVar3 = param_1 + 0x410;
  if (param_1 == 0) {
    lVar3 = 0x418;
  }
  uVar1 = function_768440(lVar3,1,astack_special_x_8,plVar5);
  if ((int)uVar1 == 0) {
    if (*plVar5 == 0) {
      return 0x12;
    }
    bVar8 = param_1 == 0;
    puVar7 = (int32_t *)(param_1 + 0x520);
    puVar6 = (int32_t *)(param_1 + 0x50);
    if (bVar8) {
      puVar7 = (int32_t *)0x528;
    }
    plVar2 = (int64_t *)(param_1 + 0x40);
    if (bVar8) {
      plVar2 = (int64_t *)0x48;
    }
    puVar4 = (int32_t *)(param_1 + 0x48);
    if (bVar8) {
      puVar6 = (int32_t *)0x58;
      puVar4 = (int32_t *)0x50;
    }
    uVar1 = function_7c9b50(*plVar5,*puVar4,*puVar6,*(int32_t *)(*plVar2 + 0x6d0),*puVar7);
  }
  return uVar1;
}
uint64_t function_7d0580(int64_t param_1)
{
  int64_t *plVar1;
  int32_t *puVar2;
  int64_t *plVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  bool bVar6;
  plVar3 = (int64_t *)(param_1 + 0x528);
  if (param_1 == 0) {
    plVar3 = (int64_t *)0x530;
  }
  if (*plVar3 != 0) {
    bVar6 = param_1 == 0;
    puVar5 = (int32_t *)(param_1 + 0x520);
    puVar4 = (int32_t *)(param_1 + 0x50);
    if (bVar6) {
      puVar5 = (int32_t *)0x528;
    }
    plVar1 = (int64_t *)(param_1 + 0x40);
    if (bVar6) {
      plVar1 = (int64_t *)0x48;
    }
    puVar2 = (int32_t *)(param_1 + 0x48);
    if (bVar6) {
      puVar4 = (int32_t *)0x58;
      puVar2 = (int32_t *)0x50;
    }
    function_7c9b50(*plVar3,*puVar2,*puVar4,*(int32_t *)(*plVar1 + 0x6d0),*puVar5);
    function_768420(*plVar3);
    *plVar3 = 0;
  }
  return 0;
}
uint64_t function_7d0610(int64_t param_1)
{
  uint64_t uVar1;
  byte *pbVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uVar5 = 0;
  uVar4 = param_1 - 8;
  if (param_1 == 0) {
    uVar4 = uVar5;
  }
  uVar1 = uVar4 + 8;
  if (uVar4 == 0) {
    uVar1 = uVar5;
  }
  uVar1 = (**(code **)(uVar4 + 0x10))
                    (uVar1,*(uint64_t *)(uVar4 + 0x518),
                     ((uint64_t)(uint)(*(int *)(uVar4 + 0x520) << 3) /
                     (uint64_t)*(uint *)(uVar4 + 0x524)) / (uint64_t)*(uint *)(uVar4 + 0x58));
  if ((int)uVar1 == 0) {
    if ((*(int *)(uVar4 + 0x50) == 1) &&
       (pbVar2 = *(byte **)(uVar4 + 0x518), uVar1 = uVar5, 0 < *(int *)(uVar4 + 0x520))) {
      do {
        *pbVar2 = *pbVar2 ^ 0x80;
        pbVar2 = pbVar2 + 1;
        uVar3 = (int)uVar1 + 1;
        uVar1 = (uint64_t)uVar3;
      } while ((int)uVar3 < *(int *)(uVar4 + 0x520));
    }
    uVar1 = uVar5;
    if ((*(int64_t *)(uVar4 + 0x530) != 0) &&
       (uVar1 = function_768650(*(int64_t *)(uVar4 + 0x530),*(uint64_t *)(uVar4 + 0x518),
                              *(int32_t *)(uVar4 + 0x520),0), (int)uVar1 == 0)) {
      *(int *)(uVar4 + 0x528) = *(int *)(uVar4 + 0x528) + *(int *)(uVar4 + 0x520);
      uVar1 = uVar5;
    }
  }
  return uVar1;
}
uint64_t function_7d06c0(int64_t param_1,uint64_t param_2,char param_3,int8_t param_4)
{
  char cVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  plVar3 = *(int64_t **)(param_1 + 0x28);
  if (plVar3 != (int64_t *)(param_1 + 0x28)) {
    do {
      plVar4 = plVar3 + -1;
      if (plVar3 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x0;
      }
      cVar1 = (**(code **)*plVar4)(plVar4);
      if ((cVar1 == param_3) &&
         (uVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,param_2,param_3,param_4), (int)uVar2 != 0)) {
        return uVar2;
      }
      plVar3 = (int64_t *)*plVar3;
    } while (plVar3 != (int64_t *)(param_1 + 0x28));
  }
  return 0;
}
uint64_t function_7d0760(int64_t param_1,uint64_t param_2,char param_3,int8_t param_4)
{
  char cVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  plVar3 = *(int64_t **)(param_1 + 0x28);
  if (plVar3 != (int64_t *)(param_1 + 0x28)) {
    do {
      plVar4 = plVar3 + -1;
      if (plVar3 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x0;
      }
      cVar1 = (**(code **)*plVar4)(plVar4);
      if ((cVar1 == param_3) &&
         (uVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,param_2,param_3,param_4), (int)uVar2 != 0)) {
        return uVar2;
      }
      plVar3 = (int64_t *)*plVar3;
    } while (plVar3 != (int64_t *)(param_1 + 0x28));
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_7d0800(int64_t param_1,short param_2,uint64_t param_3,int32_t param_4)
{
  uint64_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  uint64_t stack_special_x_8;
  if (*(char *)(param_1 + 0x50) != '\0') {
    return 0x1c;
  }
  stack_special_x_8 = 0;
  SystemFunction_0001807aab00(param_4);
  if (param_2 == 0) {
    param_2 = 0x2430;
  }
  uVar3 = function_7ff2a0(param_3,param_2,0,&stack_special_x_8);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar3 = *(uint64_t *)(param_1 + 0x40);
  SystemMemoryAllocator(uVar3);
  lVar4 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x570,&processed_var_9872_ptr,0x60,0,0,1);
  if (((lVar4 != 0) && (plVar5 = (int64_t *)function_81b150(lVar4), plVar5 != (int64_t *)0x0)) &&
     (iVar2 = function_81b390(plVar5,stack_special_x_8,param_1), iVar2 == 0)) {
    plVar5[1] = *(int64_t *)(param_1 + 0x18);
    *plVar5 = param_1 + 0x10;
    *(int64_t **)(param_1 + 0x18) = plVar5;
    *(int64_t **)plVar5[1] = plVar5;
    for (puVar1 = *(uint64_t **)(param_1 + 0x28); puVar1 != (uint64_t *)(param_1 + 0x28);
        puVar1 = (uint64_t *)*puVar1) {
      plVar6 = puVar1 + -1;
      if (puVar1 == (uint64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
      }
      iVar2 = (**(code **)(*plVar6 + 0x40))(plVar6,plVar5);
      if (iVar2 != 0) break;
    }
  }
// WARNING: Subroutine does not return
  SystemMemoryManager(uVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_7d085f(void)
void function_7d085f(void)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t local_var_60;
  uVar1 = *(uint64_t *)(unaff_RSI + 0x40);
  SystemMemoryAllocator(uVar1);
  lVar4 = SystemResourceManager(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x570,&processed_var_9872_ptr,
                        (int)unaff_RBP + 0x60);
  if (((lVar4 != 0) && (plVar5 = (int64_t *)function_81b150(lVar4), plVar5 != (int64_t *)0x0)) &&
     (iVar3 = function_81b390(plVar5,local_var_60), iVar3 == 0)) {
    plVar5[1] = *(int64_t *)(unaff_RSI + 0x18);
    *plVar5 = unaff_RSI + 0x10;
    *(int64_t **)(unaff_RSI + 0x18) = plVar5;
    *(int64_t **)plVar5[1] = plVar5;
    for (puVar2 = *(uint64_t **)(unaff_RSI + 0x28); puVar2 != (uint64_t *)(unaff_RSI + 0x28);
        puVar2 = (uint64_t *)*puVar2) {
      plVar5 = puVar2 + -1;
      if (puVar2 == (uint64_t *)0x0) {
        plVar5 = unaff_RBP;
      }
      iVar3 = (**(code **)(*plVar5 + 0x40))();
      if (iVar3 != 0) break;
    }
  }
// WARNING: Subroutine does not return
  SystemMemoryManager(uVar1);
}