#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part341.c - 1 个函数
// 函数: void function_853bf0(uint64_t param_1,int param_2)
void function_853bf0(uint64_t param_1,int param_2)
{
  int iVar1;
  int32_t astack_special_x_10 [2];
  uint64_t astack_special_x_18 [2];
  if (param_2 == 0) {
    iVar1 = function_740b40(param_1,astack_special_x_18);
    if (iVar1 == 0) {
      iVar1 = function_73a840(astack_special_x_18[0],0,astack_special_x_10,0);
      if (iVar1 == 0) {
        function_7411a0(param_1,0,0,astack_special_x_10[0]);
        return;
      }
    }
  }
  else {
    function_7411a0(param_1,0,0,param_2);
  }
  return;
}
uint64_t function_853c50(int64_t param_1,uint param_2)
{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  uVar7 = (param_2 & 0xff | *(uint *)(param_1 + 0xc0)) & ~(param_2 & 0xff ^ 1);
  *(uint *)(param_1 + 0xc0) = uVar7;
  if ((((uVar7 & 1) == 0) && (*(char *)(*(int64_t *)(param_1 + 0x40) + 0x75) == '\0')) &&
     ((*(int64_t *)(param_1 + 0x60) == 0 || (cVar2 = function_8530e0(), cVar2 == '\0')))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  if (*(int64_t *)(param_1 + 0x48) != 0) {
    *(char *)(*(int64_t *)(param_1 + 0x48) + 0x2b) = cVar2;
  }
  if (((cVar2 == '\0') && ((*(byte *)(param_1 + 0xc0) & 1) == 0)) &&
     (lVar1 = *(int64_t *)(param_1 + 0x40), *(char *)(lVar1 + 0x75) == '\0')) {
    local_var_18 = *(int32_t *)(lVar1 + 0x10);
    local_var_14 = *(int32_t *)(lVar1 + 0x14);
    local_var_10 = *(int32_t *)(lVar1 + 0x18);
    local_var_c = *(int32_t *)(lVar1 + 0x1c);
    uVar6 = 0;
    cVar2 = Function_2506bc24(*(uint64_t *)(param_1 + 0x38),&local_var_18);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_180853ee2;
    }
  }
  else {
    uVar6 = 1;
  }
  uVar4 = 1;
LAB_180853ee2:
  for (puVar5 = *(uint64_t **)(param_1 + 0x80);
      (*(uint64_t **)(param_1 + 0x80) <= puVar5 &&
      (puVar5 < *(uint64_t **)(param_1 + 0x80) + *(int *)(param_1 + 0x88))); puVar5 = puVar5 + 1)
  {
    uVar3 = function_8b5de0(*puVar5,uVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  for (puVar5 = *(uint64_t **)(param_1 + 0x90);
      (*(uint64_t **)(param_1 + 0x90) <= puVar5 &&
      (puVar5 < *(uint64_t **)(param_1 + 0x90) + *(int *)(param_1 + 0x98))); puVar5 = puVar5 + 1)
  {
    uVar3 = function_8b5de0(*puVar5,uVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  function_73d7c0(*(uint64_t *)(param_1 + 0x78),uVar4);
  puVar5 = *(uint64_t **)(param_1 + 0x50);
  while( true ) {
    if (puVar5 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    uVar4 = function_853e80(puVar5[2],uVar6);
    if ((int)uVar4 != 0) break;
    if (puVar5 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    puVar5 = (uint64_t *)*puVar5;
  }
  return uVar4;
}
uint64_t function_853d20(uint64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  while( true ) {
    lVar1 = (**(code **)*param_1)(param_1);
    if ((*(int *)(lVar1 + 0xcc) != 0x7fffffff) &&
       (*(int *)(lVar1 + 0xcc) <= *(int *)(param_1 + 0x20))) break;
    param_1 = (uint64_t *)param_1[0xc];
    if (param_1 == (uint64_t *)0x0) {
      return 1;
    }
  }
  lVar1 = (**(code **)*param_1)(param_1);
  iVar2 = *(int *)(lVar1 + 0xd0);
  if (iVar2 == 0) {
    return 0;
  }
  if (iVar2 != 2) {
    if (iVar2 == 3) {
      fVar3 = (float)Function_a88fd45b(param_2);
      iVar2 = 0;
      if (*(int *)(param_1 + 0x20) < 1) {
        return 0;
      }
      lVar1 = 0;
      while (fVar4 = (float)Function_a88fd45b(*(uint64_t *)(lVar1 + param_1[0x1f])),
            fVar3 < fVar4) {
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 8;
        if (*(int *)(param_1 + 0x20) <= iVar2) {
          return 0;
        }
      }
    }
    else {
      if (iVar2 != 4) {
        return 1;
      }
      iVar2 = 0;
      if (*(int *)(param_1 + 0x20) < 1) {
        return 0;
      }
      lVar1 = 0;
      while( true ) {
        fVar3 = (float)function_85f080(*(uint64_t *)(lVar1 + param_1[0x1f]));
        fVar4 = (float)function_85f080(param_2);
        if (fVar4 <= fVar3) break;
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + 8;
        if (*(int *)(param_1 + 0x20) <= iVar2) {
          return 0;
        }
      }
    }
    return 1;
  }
  return 1;
}
byte function_853e60(uint64_t *param_1)
{
  int64_t lVar1;
  lVar1 = (**(code **)*param_1)();
  return *(byte *)(lVar1 + 0xc4) & 1;
}
uint64_t function_853e80(int64_t param_1,char param_2)
{
  int64_t lVar1;
  char cVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  if (*(int64_t *)(param_1 + 0x48) != 0) {
    *(char *)(*(int64_t *)(param_1 + 0x48) + 0x2b) = param_2;
  }
  if (((param_2 == '\0') && ((*(byte *)(param_1 + 0xc0) & 1) == 0)) &&
     (lVar1 = *(int64_t *)(param_1 + 0x40), *(char *)(lVar1 + 0x75) == '\0')) {
    local_var_18 = *(int32_t *)(lVar1 + 0x10);
    local_var_14 = *(int32_t *)(lVar1 + 0x14);
    local_var_10 = *(int32_t *)(lVar1 + 0x18);
    local_var_c = *(int32_t *)(lVar1 + 0x1c);
    uVar6 = 0;
    cVar2 = Function_2506bc24(*(uint64_t *)(param_1 + 0x38),&local_var_18);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_180853ee2;
    }
  }
  else {
    uVar6 = 1;
  }
  uVar4 = 1;
LAB_180853ee2:
  for (puVar5 = *(uint64_t **)(param_1 + 0x80);
      (*(uint64_t **)(param_1 + 0x80) <= puVar5 &&
      (puVar5 < *(uint64_t **)(param_1 + 0x80) + *(int *)(param_1 + 0x88))); puVar5 = puVar5 + 1)
  {
    uVar3 = function_8b5de0(*puVar5,uVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  for (puVar5 = *(uint64_t **)(param_1 + 0x90);
      (*(uint64_t **)(param_1 + 0x90) <= puVar5 &&
      (puVar5 < *(uint64_t **)(param_1 + 0x90) + *(int *)(param_1 + 0x98))); puVar5 = puVar5 + 1)
  {
    uVar3 = function_8b5de0(*puVar5,uVar4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  function_73d7c0(*(uint64_t *)(param_1 + 0x78),uVar4);
  puVar5 = *(uint64_t **)(param_1 + 0x50);
  while( true ) {
    if (puVar5 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    uVar4 = function_853e80(puVar5[2],uVar6);
    if ((int)uVar4 != 0) break;
    if (puVar5 == (uint64_t *)(param_1 + 0x50)) {
      return 0;
    }
    puVar5 = (uint64_t *)*puVar5;
  }
  return uVar4;
}