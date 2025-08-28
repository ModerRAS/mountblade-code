#include "TaleWorlds.Native.Split.h"
// 99_part_11_part022.c - 28 个函数
// 函数: void function_6f0dbf(void)
void function_6f0dbf(void)
{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint unaff_EDI;
  int64_t *unaff_R12;
  code *local_buffer_70;
  do {
    (**(code **)*unaff_RBX)();
    (*local_buffer_70)();
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < unaff_EBP);
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}
// 函数: void function_6f0e19(void)
void function_6f0e19(void)
{
  uint64_t *unaff_RBX;
  int64_t *unaff_R12;
  int8_t local_buffer_60;
  local_buffer_60 = 0;
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}
// 函数: void function_6f0e51(void)
void function_6f0e51(void)
{
  return;
}
// 函数: void function_6f0e70(int64_t *param_1,uint64_t *param_2,uint param_3,int64_t param_4,uint param_5,
void function_6f0e70(int64_t *param_1,uint64_t *param_2,uint param_3,int64_t param_4,uint param_5,
                  uint64_t param_6,code *param_7)
{
  uint uVar1;
  code *pcVar2;
  void *puVar3;
  uint uVar4;
  int32_t uVar5;
  pcVar2 = param_7;
  uVar1 = param_5;
  if ((param_5 != 0) && (param_4 != 0)) {
    uVar4 = 0;
    if (param_5 != 0) {
      do {
        if ((uVar4 == 0) || (uVar4 % param_3 != 0)) {
          uVar5 = 1;
          puVar3 = &system_data_c8e4;
        }
        else {
          uVar5 = 4;
          puVar3 = &processed_var_8768_ptr;
        }
        (**(code **)*param_2)(param_2,puVar3,uVar5);
        (*pcVar2)(param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    param_5 = param_5 & 0xffffff00;
    (**(code **)*param_2)(param_2,&param_5,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_6,param_2[4]);
    param_2[3] = 0;
  }
  return;
}
// 函数: void function_6f0ea4(void)
void function_6f0ea4(void)
{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint uVar1;
  int64_t *unaff_R12;
  code *local_buffer_70;
  uVar1 = 0;
  if (unaff_EBP != 0) {
    do {
      (**(code **)*unaff_RBX)();
      (*local_buffer_70)();
      uVar1 = uVar1 + 1;
    } while (uVar1 < unaff_EBP);
  }
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}
// 函数: void function_6f0eaf(void)
void function_6f0eaf(void)
{
  uint64_t *unaff_RBX;
  uint unaff_EBP;
  uint unaff_EDI;
  int64_t *unaff_R12;
  code *local_buffer_70;
  do {
    (**(code **)*unaff_RBX)();
    (*local_buffer_70)();
    unaff_EDI = unaff_EDI + 1;
  } while (unaff_EDI < unaff_EBP);
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}
// 函数: void function_6f0f09(void)
void function_6f0f09(void)
{
  uint64_t *unaff_RBX;
  int64_t *unaff_R12;
  int8_t local_buffer_60;
  local_buffer_60 = 0;
  (**(code **)*unaff_RBX)();
  (**(code **)(*unaff_R12 + 0x10))();
  unaff_RBX[3] = 0;
  return;
}
// 函数: void function_6f0f41(void)
void function_6f0f41(void)
{
  return;
}
// 函数: void function_6f0f70(uint64_t param_1,int16_t *param_2)
void function_6f0f70(uint64_t param_1,int16_t *param_2)
{
  uint64_t *puVar1;
  int8_t stack_array_88 [88];
  uint64_t local_var_30;
  local_var_30 = 0x1806f0f8d;
  puVar1 = (uint64_t *)function_6c4e00(param_1,&rendering_buffer_2208_ptr,*param_2);
  local_var_30 = 0x1806f0fa6;
  (**(code **)*puVar1)(puVar1,&system_data_c8e4,1);
  local_var_30 = 0x1806f0fba;
  puVar1 = (uint64_t *)function_6c4e00(puVar1,&rendering_buffer_2208_ptr,param_2[1]);
  local_var_30 = 0x1806f0fd3;
  (**(code **)*puVar1)(puVar1,&system_data_c8e4,1);
// WARNING: Subroutine does not return
  memset(stack_array_88,0,0x80);
}
// 函数: void function_6f1000(uint64_t param_1,int32_t *param_2)
void function_6f1000(uint64_t param_1,int32_t *param_2)
{
  uint64_t *puVar1;
  int8_t stack_array_88 [88];
  uint64_t local_var_30;
  local_var_30 = 0x1806f101c;
  puVar1 = (uint64_t *)function_6c4e00(param_1,&rendering_buffer_2208_ptr,*param_2);
  local_var_30 = 0x1806f1035;
  (**(code **)*puVar1)(puVar1,&system_data_c8e4,1);
  local_var_30 = 0x1806f1048;
  puVar1 = (uint64_t *)function_6c4e00(puVar1,&rendering_buffer_2208_ptr,param_2[1]);
  local_var_30 = 0x1806f1061;
  (**(code **)*puVar1)(puVar1,&system_data_c8e4,1);
// WARNING: Subroutine does not return
  memset(stack_array_88,0,0x80);
}
// 函数: void function_6f1080(uint64_t *param_1)
void function_6f1080(uint64_t *param_1)
{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  uVar2 = 0;
  puVar3 = (uint64_t *)param_1[2];
  uVar1 = (uint64_t)*(uint *)(param_1 + 3);
  if (puVar3 + *(uint *)(param_1 + 3) < puVar3) {
    uVar1 = uVar2;
  }
  if (uVar1 != 0) {
    do {
      (**(code **)(**(int64_t **)*param_1 + 0x10))(*(int64_t **)*param_1,*puVar3);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(int32_t *)(param_1 + 3) = 0;
  if ((*(int *)((int64_t)param_1 + 0x4c) != 0) && (*(int *)((int64_t)param_1 + 0x5c) != 0)) {
// WARNING: Subroutine does not return
    memset(param_1[8],0xffffffff,*(int *)((int64_t)param_1 + 0x4c) * 4);
  }
  if (param_1[5] != 0) {
    (**(code **)(**(int64_t **)param_1[4] + 0x10))();
  }
  if ((((*(uint *)((int64_t)param_1 + 0x1c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((int64_t)param_1 + 0x1c))) && (param_1[2] != 0)) {
    (**(code **)(**(int64_t **)param_1[1] + 0x10))();
  }
  return;
}
// 函数: void function_6f11b0(void)
void function_6f11b0(void)
{
  int8_t stack_array_88 [128];
// WARNING: Subroutine does not return
  memset(stack_array_88,0,0x80);
}
uint64_t * function_6f1240(uint64_t *param_1,uint param_2)
{
  *param_1 = &processed_var_8576_ptr;
  param_1[1] = &processed_var_8592_ptr;
  function_6f1550(param_1[2],param_1[4]);
  param_1[1] = &system_handler1_ptr;
  *param_1 = &ui_system_data_1760_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}
int64_t * function_6f12b0(uint64_t *param_1,int param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lStackX_8;
  uint astack_special_x_10 [2];
  astack_special_x_10[0] = param_2 + 0x8fU & 0xffffff80;
  if ((*(int *)((int64_t)param_1 + 0x5c) != 0) &&
     (uVar4 = ~(astack_special_x_10[0] << 0xf) + astack_special_x_10[0], uVar4 = (uVar4 >> 10 ^ uVar4) * 9,
     uVar4 = uVar4 ^ uVar4 >> 6, uVar4 = ~(uVar4 << 0xb) + uVar4,
     uVar4 = *(uint *)(param_1[8] +
                      (uint64_t)((uVar4 >> 0x10 ^ uVar4) & *(int *)((int64_t)param_1 + 0x4c) - 1U)
                      * 4), uVar4 != 0xffffffff)) {
    do {
      uVar5 = (uint64_t)uVar4;
      if (*(uint *)(param_1[6] + uVar5 * 0x10) == astack_special_x_10[0]) {
        if ((uVar4 != 0xffffffff) && (lVar3 = uVar5 * 0x10 + param_1[6], lVar3 != 0)) {
          plVar1 = *(int64_t **)(lVar3 + 8);
          lVar2 = *plVar1;
          *(int64_t *)(lVar3 + 8) = lVar2;
          if (lVar2 == 0) {
            Function_3d7a8a18(param_1 + 4,astack_special_x_10);
          }
          return plVar1 + 2;
        }
        break;
      }
      uVar4 = *(uint *)(param_1[7] + uVar5 * 4);
    } while (uVar4 != 0xffffffff);
  }
  uVar4 = astack_special_x_10[0];
  if (astack_special_x_10[0] < *(uint *)(param_1 + 0xc)) {
    uVar4 = *(uint *)(param_1 + 0xc);
  }
  lVar3 = (**(code **)(**(int64_t **)*param_1 + 8))
                    (*(int64_t **)*param_1,uVar4,&processed_var_8544_ptr,&processed_var_8448_ptr,0xc1);
  if (*(uint *)(param_1 + 3) < (*(uint *)((int64_t)param_1 + 0x1c) & 0x7fffffff)) {
    *(int64_t *)(param_1[2] + (uint64_t)*(uint *)(param_1 + 3) * 8) = lVar3;
    *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
  }
  else {
    lStackX_8 = lVar3;
    function_6b4c20(param_1 + 1,&lStackX_8);
  }
  *(uint *)(lVar3 + 8) = uVar4;
  return (int64_t *)(lVar3 + 0x10);
}
int64_t function_6f1350(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *in_RAX;
  int64_t lVar1;
  int32_t unaff_EBX;
  int64_t unaff_RDI;
  bool in_CF;
  int64_t local_var_40;
  if (in_CF) {
    unaff_EBX = *(int32_t *)(unaff_RDI + 0x60);
  }
  lVar1 = (**(code **)(*(int64_t *)*in_RAX + 8))
                    ((int64_t *)*in_RAX,unaff_EBX,param_3,param_4,0xc1);
  if (*(uint *)(unaff_RDI + 0x18) < (*(uint *)(unaff_RDI + 0x1c) & 0x7fffffff)) {
    *(int64_t *)(*(int64_t *)(unaff_RDI + 0x10) + (uint64_t)*(uint *)(unaff_RDI + 0x18) * 8) =
         lVar1;
    *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
  }
  else {
    local_var_40 = lVar1;
    function_6b4c20(unaff_RDI + 8,&local_buffer_00000040);
  }
  *(int32_t *)(lVar1 + 8) = unaff_EBX;
  return lVar1 + 0x10;
}
int64_t * function_6f1392(uint64_t param_1,int64_t param_2,int param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t in_RAX;
  uint unaff_EBX;
  uint64_t *unaff_RDI;
  int64_t local_var_40;
  if ((param_3 != -1) && (param_2 = in_RAX * 0x10 + param_2, param_2 != 0)) {
    plVar1 = *(int64_t **)(param_2 + 8);
    lVar2 = *plVar1;
    *(int64_t *)(param_2 + 8) = lVar2;
    if (lVar2 == 0) {
      Function_3d7a8a18(unaff_RDI + 4,&local_buffer_00000048);
    }
    return plVar1 + 2;
  }
  if (unaff_EBX < *(uint *)(unaff_RDI + 0xc)) {
    unaff_EBX = *(uint *)(unaff_RDI + 0xc);
  }
  lVar2 = (**(code **)(**(int64_t **)*unaff_RDI + 8))
                    (*(int64_t **)*unaff_RDI,unaff_EBX,&processed_var_8544_ptr,&processed_var_8448_ptr,0xc1);
  if (*(uint *)(unaff_RDI + 3) < (*(uint *)((int64_t)unaff_RDI + 0x1c) & 0x7fffffff)) {
    *(int64_t *)(unaff_RDI[2] + (uint64_t)*(uint *)(unaff_RDI + 3) * 8) = lVar2;
    *(int *)(unaff_RDI + 3) = *(int *)(unaff_RDI + 3) + 1;
  }
  else {
    local_var_40 = lVar2;
    function_6b4c20(unaff_RDI + 1,&local_buffer_00000040);
  }
  *(uint *)(lVar2 + 8) = unaff_EBX;
  return (int64_t *)(lVar2 + 0x10);
}
int64_t function_6f13ce(void)
{
  int64_t in_RAX;
  int32_t unaff_EBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  *(int64_t *)(*(int64_t *)(unaff_RDI + 0x10) + in_RAX * 8) = unaff_RSI;
  *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) + 1;
  *(int32_t *)(unaff_RSI + 8) = unaff_EBX;
  return unaff_RSI + 0x10;
}
int64_t function_6f1400(int64_t param_1,int *param_2,int8_t *param_3)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  bool bVar5;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *param_3 = 0;
  }
  else {
    iVar1 = *param_2;
    uVar2 = ~(iVar1 << 0xf) + iVar1;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + ~(uVar2 << 0xb);
    uVar4 = (uint64_t)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x2c) - 1U);
    uVar2 = *(uint *)(*(int64_t *)(param_1 + 0x20) + uVar4 * 4);
    bVar5 = uVar2 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(int *)(*(int64_t *)(param_1 + 0x10) + (uint64_t)uVar2 * 0x10) == iVar1) break;
        uVar2 = *(uint *)(*(int64_t *)(param_1 + 0x18) + (uint64_t)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
      bVar5 = uVar2 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (uint64_t)uVar2 * 0x10 + *(int64_t *)(param_1 + 0x10);
    }
  }
  if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x28)) goto LAB_1806f1509;
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (uVar2 == 0) {
    uVar3 = 0x10;
LAB_1806f14c7:
    function_6f1810(param_1,uVar3);
    uVar2 = *(uint *)(param_1 + 0x2c);
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar2 < uVar3) goto LAB_1806f14c7;
  }
  uVar3 = *param_2 + ~(*param_2 << 0xf);
  uVar3 = (uVar3 >> 10 ^ uVar3) * 9;
  uVar3 = uVar3 ^ uVar3 >> 6;
  uVar3 = uVar3 + ~(uVar3 << 0xb);
  uVar4 = (uint64_t)((uVar3 >> 0x10 ^ uVar3) & uVar2 - 1);
LAB_1806f1509:
  uVar2 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x34) = uVar2 + 1;
  *(int32_t *)(*(int64_t *)(param_1 + 0x18) + (uint64_t)uVar2 * 4) =
       *(int32_t *)(*(int64_t *)(param_1 + 0x20) + uVar4 * 4);
  *(uint *)(*(int64_t *)(param_1 + 0x20) + uVar4 * 4) = uVar2;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return (uint64_t)uVar2 * 0x10 + *(int64_t *)(param_1 + 0x10);
}
// 函数: void function_6f1550(int64_t param_1,int64_t param_2)
void function_6f1550(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int32_t astack_special_x_10 [2];
  int32_t astack_special_x_18 [2];
  if (param_2 != 0) {
    puVar1 = (uint64_t *)(param_2 + -0x10);
    uVar2 = *(int32_t *)(param_2 + -8);
    *puVar1 = 0;
    astack_special_x_10[0] = uVar2;
    puVar3 = (int32_t *)Function_e17a8c7f(param_1 + 0x28,astack_special_x_10);
    if (puVar3 == (int32_t *)0x0) {
      astack_special_x_18[0] = uVar2;
      puVar3 = (int32_t *)function_6f1400(param_1 + 0x28,astack_special_x_18,astack_special_x_10);
      if ((char)astack_special_x_10[0] != '\0') {
        return;
      }
      *puVar3 = uVar2;
    }
    else {
      *puVar1 = *(uint64_t *)(puVar3 + 2);
    }
    *(uint64_t **)(puVar3 + 2) = puVar1;
  }
  return;
}
// 函数: void function_6f1559(int64_t param_1,int64_t param_2)
void function_6f1559(int64_t param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t *puVar3;
  char cStack0000000000000038;
  int32_t local_var_40;
  puVar1 = (uint64_t *)(param_2 + -0x10);
  uVar2 = *(int32_t *)(param_2 + -8);
  *puVar1 = 0;
  _cStack0000000000000038 = uVar2;
  puVar3 = (int32_t *)Function_e17a8c7f(param_1 + 0x28,&local_buffer_00000038);
  if (puVar3 == (int32_t *)0x0) {
    local_var_40 = uVar2;
    puVar3 = (int32_t *)function_6f1400(param_1 + 0x28,&local_buffer_00000040,&local_buffer_00000038);
    if (cStack0000000000000038 != '\0') {
      return;
    }
    *puVar3 = uVar2;
  }
  else {
    *puVar1 = *(uint64_t *)(puVar3 + 2);
  }
  *(uint64_t **)(puVar3 + 2) = puVar1;
  return;
}
// 函数: void function_6f15cb(void)
void function_6f15cb(void)
{
  return;
}
uint64_t function_6f17c0(int64_t param_1,uint64_t param_2,int param_3)
{
  if (*(uint *)(param_1 + 0x14) + param_3 <= *(uint *)(param_1 + 0x10)) {
// WARNING: Subroutine does not return
    memcpy(param_2,(uint64_t)*(uint *)(param_1 + 0x14) + *(int64_t *)(param_1 + 0x18),param_3);
  }
  return 0;
}
// 函数: void function_6f1810(uint64_t *param_1,uint param_2)
void function_6f1810(uint64_t *param_1,uint param_2)
{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    param_2 = param_2 >> 1 | param_2;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 >> 0x10 | param_2) + 1;
  }
  iVar3 = (int)(int64_t)((float)param_2 * *(float *)(param_1 + 6));
  iVar2 = param_2 * 4 + iVar3 * 4;
  uVar1 = (**(code **)(**(int64_t **)*param_1 + 8))
                    (*(int64_t **)*param_1,iVar3 * 0x10 + iVar2 + (-iVar2 & 0xfU),&processed_var_6480_ptr,
                     &rendering_buffer_2848_ptr,0x174);
// WARNING: Subroutine does not return
  memset(uVar1,0xffffffff,param_2 * 4);
}
// 函数: void function_6f19b0(int64_t param_1,uint64_t param_2,int param_3)
void function_6f19b0(int64_t param_1,uint64_t param_2,int param_3)
{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  uVar2 = *(int *)(param_1 + 0x18) + param_3;
  if (*(uint *)(param_1 + 0x28) < uVar2) {
    uVar3 = 0x20;
    if (0x20 < uVar2) {
      do {
        uVar3 = uVar3 * 2;
      } while (uVar3 < uVar2);
    }
    lVar1 = function_6f12b0(*(int64_t *)(param_1 + 0x10) + 8,uVar3);
    if (*(int *)(param_1 + 0x18) != 0) {
// WARNING: Subroutine does not return
      memcpy(lVar1,*(uint64_t *)(param_1 + 0x20),*(int *)(param_1 + 0x18));
    }
    function_6f1550(*(uint64_t *)(param_1 + 0x10),*(uint64_t *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x28) = uVar3;
    *(int64_t *)(param_1 + 0x20) = lVar1;
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 0x20);
  }
// WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_1 + 0x18) + lVar1,param_2,param_3);
}
// 函数: void function_6f19d9(uint param_1)
void function_6f19d9(uint param_1)
{
  int64_t lVar1;
  uint uVar2;
  int64_t unaff_RDI;
  uVar2 = 0x20;
  if (0x20 < param_1) {
    do {
      uVar2 = uVar2 * 2;
    } while (uVar2 < param_1);
  }
  lVar1 = function_6f12b0(*(int64_t *)(unaff_RDI + 0x10) + 8,uVar2);
  if (*(int *)(unaff_RDI + 0x18) != 0) {
// WARNING: Subroutine does not return
    memcpy(lVar1,*(uint64_t *)(unaff_RDI + 0x20),*(int *)(unaff_RDI + 0x18));
  }
  function_6f1550(*(uint64_t *)(unaff_RDI + 0x10),*(uint64_t *)(unaff_RDI + 0x20));
  *(uint *)(unaff_RDI + 0x28) = uVar2;
  *(int64_t *)(unaff_RDI + 0x20) = lVar1;
// WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(unaff_RDI + 0x18) + lVar1);
}
// 函数: void function_6f1a30(void)
void function_6f1a30(void)
{
  int64_t unaff_RDI;
// WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(unaff_RDI + 0x18) + *(int64_t *)(unaff_RDI + 0x20));
}
// 函数: void function_6f1a80(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void function_6f1a80(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *plocal_var_3e8;
  int64_t lStack_3e0;
  uint64_t local_var_3d8;
  uint64_t **pplocal_var_3d0;
  uint64_t local_var_3c8;
  uint64_t local_var_3c0;
  int64_t lStack_3b8;
  uint64_t local_var_3b0;
  uint64_t local_var_3a8;
  uint64_t local_var_3a0;
  int8_t stack_array_398 [912];
  plocal_var_3e8 = *(uint64_t **)(param_3 + 0x10);
  lStack_3e0 = 0;
  local_var_3d8 = 0;
  function_6f3080(stack_array_398);
  pplocal_var_3d0 = &plocal_var_3e8;
  local_var_3a8 = 0;
  local_var_3a0 = 0;
  local_var_3c8 = param_2;
  local_var_3c0 = param_1;
  lStack_3b8 = param_3;
  local_var_3b0 = param_4;
  function_6cf000(stack_array_398,&pplocal_var_3d0,0);
  pplocal_var_3d0 = &plocal_var_3e8;
  local_var_3a8 = 0;
  local_var_3a0 = 0;
  local_var_3c8 = param_2;
  local_var_3c0 = param_1;
  lStack_3b8 = param_3;
  local_var_3b0 = param_4;
  function_6ce700(stack_array_398,&pplocal_var_3d0,0);
  if ((((local_var_3d8 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_3d8)) && (lStack_3e0 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_3e8 + 0x10))();
  }
  return;
}
// 函数: void function_6f1b90(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void function_6f1b90(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *plocal_var_328;
  int64_t lStack_320;
  uint64_t local_var_318;
  uint64_t **pplocal_var_310;
  uint64_t local_var_308;
  uint64_t local_var_300;
  int64_t lStack_2f8;
  uint64_t local_var_2f0;
  uint64_t local_var_2e8;
  uint64_t local_var_2e0;
  int8_t stack_array_2d8 [720];
  plocal_var_328 = *(uint64_t **)(param_3 + 0x10);
  lStack_320 = 0;
  local_var_318 = 0;
  function_6f3440(stack_array_2d8);
  pplocal_var_310 = &plocal_var_328;
  local_var_2e8 = 0;
  local_var_2e0 = 0;
  local_var_308 = param_2;
  local_var_300 = param_1;
  lStack_2f8 = param_3;
  local_var_2f0 = param_4;
  function_6cf000(stack_array_2d8,&pplocal_var_310,0);
  pplocal_var_310 = &plocal_var_328;
  local_var_2e8 = 0;
  local_var_2e0 = 0;
  local_var_308 = param_2;
  local_var_300 = param_1;
  lStack_2f8 = param_3;
  local_var_2f0 = param_4;
  function_6cf610(stack_array_2d8,&pplocal_var_310,0);
  if ((((local_var_318 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_318)) && (lStack_320 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_328 + 0x10))();
  }
  return;
}
// 函数: void function_6f1ca0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void function_6f1ca0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *plocal_var_288;
  int64_t lStack_280;
  uint64_t local_var_278;
  uint64_t **pplocal_var_270;
  uint64_t local_var_268;
  uint64_t local_var_260;
  int64_t lStack_258;
  uint64_t local_var_250;
  uint64_t local_var_248;
  uint64_t local_var_240;
  int8_t stack_array_238 [560];
  plocal_var_288 = *(uint64_t **)(param_3 + 0x10);
  lStack_280 = 0;
  local_var_278 = 0;
  function_6f3850(stack_array_238);
  pplocal_var_270 = &plocal_var_288;
  local_var_248 = 0;
  local_var_240 = 0;
  local_var_268 = param_2;
  local_var_260 = param_1;
  lStack_258 = param_3;
  local_var_250 = param_4;
  function_6cf000(stack_array_238,&pplocal_var_270,0);
  pplocal_var_270 = &plocal_var_288;
  local_var_248 = 0;
  local_var_240 = 0;
  local_var_268 = param_2;
  local_var_260 = param_1;
  lStack_258 = param_3;
  local_var_250 = param_4;
  function_6cfa80(stack_array_238,&pplocal_var_270,0);
  if ((((local_var_278 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_278)) && (lStack_280 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_288 + 0x10))();
  }
  return;
}
// 函数: void function_6f1db0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void function_6f1db0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *plocal_var_2f8;
  int64_t lStack_2f0;
  uint64_t local_var_2e8;
  uint64_t **pplocal_var_2e0;
  uint64_t local_var_2d8;
  uint64_t local_var_2d0;
  int64_t lStack_2c8;
  uint64_t local_var_2c0;
  uint64_t local_var_2b8;
  uint64_t local_var_2b0;
  int8_t stack_array_2a8 [672];
  plocal_var_2f8 = *(uint64_t **)(param_3 + 0x10);
  lStack_2f0 = 0;
  local_var_2e8 = 0;
  function_6f39b0(stack_array_2a8);
  pplocal_var_2e0 = &plocal_var_2f8;
  local_var_2b8 = 0;
  local_var_2b0 = 0;
  local_var_2d8 = param_2;
  local_var_2d0 = param_1;
  lStack_2c8 = param_3;
  local_var_2c0 = param_4;
  function_6cf000(stack_array_2a8,&pplocal_var_2e0,0);
  pplocal_var_2e0 = &plocal_var_2f8;
  local_var_2b8 = 0;
  local_var_2b0 = 0;
  local_var_2d8 = param_2;
  local_var_2d0 = param_1;
  lStack_2c8 = param_3;
  local_var_2c0 = param_4;
  function_6d0f20(stack_array_2a8,&pplocal_var_2e0,0);
  if ((((local_var_2e8 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_2e8)) && (lStack_2f0 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_2f8 + 0x10))();
  }
  return;
}
// 函数: void function_6f1ec0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void function_6f1ec0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *plocal_var_358;
  int64_t lStack_350;
  uint64_t local_var_348;
  uint64_t **pplocal_var_340;
  uint64_t local_var_338;
  uint64_t local_var_330;
  int64_t lStack_328;
  uint64_t local_var_320;
  uint64_t local_var_318;
  uint64_t local_var_310;
  int8_t stack_array_308 [768];
  plocal_var_358 = *(uint64_t **)(param_3 + 0x10);
  lStack_350 = 0;
  local_var_348 = 0;
  function_6f3c00(stack_array_308);
  pplocal_var_340 = &plocal_var_358;
  local_var_318 = 0;
  local_var_310 = 0;
  local_var_338 = param_2;
  local_var_330 = param_1;
  lStack_328 = param_3;
  local_var_320 = param_4;
  function_6cf000(stack_array_308,&pplocal_var_340,0);
  pplocal_var_340 = &plocal_var_358;
  local_var_318 = 0;
  local_var_310 = 0;
  local_var_338 = param_2;
  local_var_330 = param_1;
  lStack_328 = param_3;
  local_var_320 = param_4;
  function_6d12f0(stack_array_308,&pplocal_var_340,0);
  if ((((local_var_348 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_348)) && (lStack_350 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_358 + 0x10))();
  }
  return;
}
// 函数: void function_6f1fd0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void function_6f1fd0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *plocal_var_2d8;
  int64_t lStack_2d0;
  uint64_t local_var_2c8;
  uint64_t **pplocal_var_2c0;
  uint64_t local_var_2b8;
  uint64_t local_var_2b0;
  int64_t lStack_2a8;
  uint64_t local_var_2a0;
  uint64_t local_var_298;
  uint64_t local_var_290;
  int8_t stack_array_288 [640];
  plocal_var_2d8 = *(uint64_t **)(param_3 + 0x10);
  lStack_2d0 = 0;
  local_var_2c8 = 0;
  function_6f3ea0(stack_array_288);
  pplocal_var_2c0 = &plocal_var_2d8;
  local_var_298 = 0;
  local_var_290 = 0;
  local_var_2b8 = param_2;
  local_var_2b0 = param_1;
  lStack_2a8 = param_3;
  local_var_2a0 = param_4;
  function_6cf000(stack_array_288,&pplocal_var_2c0,0);
  pplocal_var_2c0 = &plocal_var_2d8;
  local_var_298 = 0;
  local_var_290 = 0;
  local_var_2b8 = param_2;
  local_var_2b0 = param_1;
  lStack_2a8 = param_3;
  local_var_2a0 = param_4;
  function_6d2430(stack_array_288,&pplocal_var_2c0,0);
  if ((((local_var_2c8 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)local_var_2c8)) && (lStack_2d0 != 0)
     ) {
    (**(code **)(*(int64_t *)*plocal_var_2d8 + 0x10))();
  }
  return;
}
uint64_t *
function_6f20e0(int64_t *param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4,
             uint64_t *param_5,int64_t *param_6)
{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStackX_10;
  int64_t *aplStackX_18 [2];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  int32_t local_var_40;
  plVar4 = (int64_t *)0x0;
  plStackX_10 = (int64_t *)0x0;
  aplStackX_18[0] = (int64_t *)0x0;
  local_var_48 = 0;
  local_var_40 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_54 = 0;
  local_var_50 = 0;
  local_var_4c = 0x3f800000;
  local_var_78 = 0;
  local_var_74 = 0;
  local_var_70 = 0;
  local_var_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&processed_var_8672_ptr);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = function_6c4940(param_3,param_6,&processed_var_8792_ptr,&plStackX_10);
    bVar3 = function_6c4940(param_3,param_6,&processed_var_8800_ptr,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto label_6f2215;
  }
  plVar4 = (int64_t *)function_6d8aa0(*param_5,plVar7,&local_var_58,plVar6,&local_var_78);
  if (plVar4 != (int64_t *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
label_6f2215:
  param_2[1] = plVar4;
  *param_2 = &processed_var_9320_ptr;
  param_2[2] = plVar4;
  return param_2;
}
// 函数: void function_6f21a2(void)
void function_6f21a2(void)
{
  int64_t *plVar1;
  uint64_t *unaff_RSI;
  int64_t *unaff_R12;
  int64_t *unaff_R15;
  uint64_t *local_buffer_d0;
  plVar1 = (int64_t *)function_6d8aa0(*local_buffer_d0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &processed_var_9320_ptr;
  unaff_RSI[2] = plVar1;
  return;
}
// 函数: void function_6f2215(void)
void function_6f2215(void)
{
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  unaff_RSI[1] = unaff_RDI;
  *unaff_RSI = &processed_var_9320_ptr;
  unaff_RSI[2] = unaff_RDI;
  return;
}
uint64_t *
function_6f2240(int64_t *param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4,
             uint64_t *param_5,int64_t *param_6)
{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStackX_10;
  int64_t *aplStackX_18 [2];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  int32_t local_var_40;
  plVar4 = (int64_t *)0x0;
  plStackX_10 = (int64_t *)0x0;
  aplStackX_18[0] = (int64_t *)0x0;
  local_var_48 = 0;
  local_var_40 = 0;
  local_var_68 = 0;
  local_var_60 = 0;
  local_var_58 = 0;
  local_var_54 = 0;
  local_var_50 = 0;
  local_var_4c = 0x3f800000;
  local_var_78 = 0;
  local_var_74 = 0;
  local_var_70 = 0;
  local_var_6c = 0x3f800000;
  cVar1 = (**(code **)(*param_3 + 0x18))(param_3,&processed_var_8672_ptr);
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (cVar1 != '\0') {
    bVar2 = function_6c4940(param_3,param_6,&processed_var_8792_ptr,&plStackX_10);
    bVar3 = function_6c4940(param_3,param_6,&processed_var_8800_ptr,aplStackX_18);
    (**(code **)(*param_3 + 0x48))(param_3);
    plVar6 = aplStackX_18[0];
    plVar7 = plStackX_10;
    if ((bVar2 & bVar3) == 0) goto label_6f2375;
  }
  plVar4 = (int64_t *)function_6e6000(*param_5,plVar7,&local_var_58,plVar6,&local_var_78);
  if (plVar4 != (int64_t *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 200))(plVar4);
    (**(code **)(*param_6 + 8))(param_6,uVar5,0);
    (**(code **)(*param_1 + 0x28))(param_1,plVar4,param_3,param_4,param_5,param_6);
  }
label_6f2375:
  param_2[1] = plVar4;
  *param_2 = &processed_var_9336_ptr;
  param_2[2] = plVar4;
  return param_2;
}
// 函数: void function_6f2302(void)
void function_6f2302(void)
{
  int64_t *plVar1;
  uint64_t *unaff_RSI;
  int64_t *unaff_R12;
  int64_t *unaff_R15;
  uint64_t *local_buffer_d0;
  plVar1 = (int64_t *)function_6e6000(*local_buffer_d0);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
    (**(code **)(*unaff_R15 + 8))();
    (**(code **)(*unaff_R12 + 0x28))();
  }
  unaff_RSI[1] = plVar1;
  *unaff_RSI = &processed_var_9336_ptr;
  unaff_RSI[2] = plVar1;
  return;
}