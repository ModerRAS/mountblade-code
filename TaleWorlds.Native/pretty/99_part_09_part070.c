#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_09_part070.c - 4 个函数
// 函数: void function_5ea350(int64_t param_1)
void function_5ea350(int64_t param_1)
{
  int64_t *plVar1;
  float fStack_18;
  uint64_t local_var_14;
  int32_t local_var_c;
  fStack_18 = *(float *)(param_1 + 0x90);
  if (fStack_18 != *(float *)(param_1 + 0x8c)) {
    local_var_14 = 0;
    local_var_c = 0x7f7fffff;
    (**(code **)(**(int64_t **)(param_1 + 0x58) + 400))(*(int64_t **)(param_1 + 0x58),&fStack_18);
    *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(param_1 + 0x90);
  }
  if (*(float *)(param_1 + 0x98) != *(float *)(param_1 + 0x94)) {
    plVar1 = *(int64_t **)(param_1 + 0x60);
    if (plVar1 != (int64_t *)0x0) {
      fStack_18 = 0.0;
      local_var_14 = (uint64_t)(uint)*(float *)(param_1 + 0x98);
      local_var_c = 0x7f7fffff;
      (**(code **)(*plVar1 + 400))(plVar1,&fStack_18);
    }
    plVar1 = *(int64_t **)(param_1 + 0x68);
    if (plVar1 != (int64_t *)0x0) {
      fStack_18 = 0.0;
      local_var_14 = (uint64_t)*(uint *)(param_1 + 0x98);
      local_var_c = 0x7f7fffff;
      (**(code **)(*plVar1 + 400))(plVar1,&fStack_18);
    }
    plVar1 = *(int64_t **)(param_1 + 0x70);
    if (plVar1 != (int64_t *)0x0) {
      fStack_18 = 0.0;
      local_var_14 = (uint64_t)*(uint *)(param_1 + 0x98);
      local_var_c = 0x7f7fffff;
      (**(code **)(*plVar1 + 400))(plVar1,&fStack_18);
    }
    plVar1 = *(int64_t **)(param_1 + 0x78);
    if (plVar1 != (int64_t *)0x0) {
      fStack_18 = 0.0;
      local_var_14 = (uint64_t)*(uint *)(param_1 + 0x98);
      local_var_c = 0x7f7fffff;
      (**(code **)(*plVar1 + 400))(plVar1,&fStack_18);
    }
    *(int32_t *)(param_1 + 0x94) = *(int32_t *)(param_1 + 0x98);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5ea4b0(int64_t param_1,int64_t param_2,int64_t param_3,char *param_4,
void function_5ea4b0(int64_t param_1,int64_t param_2,int64_t param_3,char *param_4,
                  int8_t *param_5,int8_t *param_6,int8_t *param_7)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  plVar1 = *(int64_t **)(param_3 + 0x210);
  *param_4 = '\0';
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  if (*(char *)(param_1 + 0x125) == '\0') {
    if (*(char *)(param_1 + 0x124) != '\0') {
      *param_4 = '\x01';
      *param_5 = param_2 != 0;
      return;
    }
    if (param_2 != 0) {
      if (*(char *)(param_2 + 0x125) == '\0') {
        if (*(char *)(param_1 + 0x126) != '\0') {
          return;
        }
        *param_4 = '\x01';
        *param_5 = *(int8_t *)(param_1 + 0x127);
        return;
      }
      if ((int)plVar1[0x493] == -1) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int64_t)(int)plVar1[0x493] * 0x68 + 0x58 + system_system_config);
        if (iVar3 == 0x12) {
          lVar2 = SystemCore_Initializer(&system_data_5f30,*(int32_t *)((int64_t)plVar1 + 0xac));
          if ((int)plVar1[0x493] == -1) {
            return;
          }
          if (*(char *)((int64_t)(int)plVar1[0x493] * 0x68 + 0x60 + system_system_config) != '\x04') {
            return;
          }
          fVar5 = (float)(**(code **)(*plVar1 + 0x90))(plVar1,1);
          if (fVar5 < *(float *)(lVar2 + 0x1d8) || fVar5 == *(float *)(lVar2 + 0x1d8)) {
            return;
          }
          *param_4 = '\x01';
          if (*(float *)(lVar2 + 0x1dc) <= 0.0) {
            return;
          }
          fVar5 = (float)(**(code **)(*plVar1 + 0x90))(plVar1,1);
          if (fVar5 < *(float *)(lVar2 + 0x1dc) || fVar5 == *(float *)(lVar2 + 0x1dc)) {
            return;
          }
          *param_5 = *(int8_t *)(param_1 + 0x127);
          return;
        }
      }
      if (*(char *)(param_1 + 0x126) != '\0') {
        return;
      }
      if (iVar3 == 0x10) {
        return;
      }
      *param_4 = '\x01';
      *param_5 = *(int8_t *)(param_1 + 0x127);
      return;
    }
    if (*(int *)(param_1 + 0x16c) < 0) {
      return;
    }
    goto LAB_1805ea764;
  }
  if ((*(char *)(param_1 + 0x121) == '\0') || (*(char *)(param_1 + 0x120) == '\0')) {
    *param_4 = '\x01';
  }
  else {
    iVar3 = (int)plVar1[0x493];
    if (iVar3 == -1) {
LAB_1805ea5e4:
      *param_4 = *(char *)(param_1 + 0x126) == '\0';
    }
    else if (*(int *)((int64_t)iVar3 * 0x68 + 0x58 + system_system_config) == 0x11) {
      lVar2 = (**(code **)(*plVar1 + 0x128))(plVar1,1);
      fVar5 = *(float *)(lVar2 + 0x1d8);
      fVar4 = (float)(**(code **)(*plVar1 + 0x90))(plVar1,1);
      *param_4 = fVar4 < fVar5;
    }
    else {
      if (*(int *)((int64_t)iVar3 * 0x68 + 0x58 + system_system_config) != 0x12) goto LAB_1805ea5e4;
      lVar2 = SystemCore_Initializer(&system_data_5f30,*(int32_t *)((int64_t)plVar1 + 0xac));
      if (((int)plVar1[0x493] != -1) &&
         (*(char *)((int64_t)(int)plVar1[0x493] * 0x68 + 0x60 + system_system_config) == '\x04')) {
        fVar5 = (float)(**(code **)(*plVar1 + 0x90))(plVar1,1);
        *param_4 = *(float *)(lVar2 + 0x1d8) <= fVar5 && fVar5 != *(float *)(lVar2 + 0x1d8);
      }
    }
  }
  if (*(int *)(param_1 + 0x16c) < 0) {
    return;
  }
  if (*(char *)(param_1 + 0x123) != '\0') {
    if (*(int64_t *)(param_1 + 0x60) != 0) {
      *param_6 = 1;
      return;
    }
    if ((*param_4 != '\0') && (*(int64_t *)(param_1 + 0x70) == 0)) {
      return;
    }
  }
LAB_1805ea764:
  *param_7 = 1;
  return;
}
// 函数: void function_5ea54f(void)
void function_5ea54f(void)
{
  float fVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t unaff_RBX;
  int8_t *unaff_RBP;
  char *unaff_RSI;
  int64_t *unaff_RDI;
  int8_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  float fVar3;
  lVar2 = (**(code **)(in_RAX + 0x128))();
  fVar1 = *(float *)(lVar2 + 0x1d8);
  fVar3 = (float)(**(code **)(*unaff_RDI + 0x90))(extraout_XMM0_Da,1);
  *unaff_RSI = fVar3 < fVar1;
  if (*(int *)(unaff_RBX + 0x16c) < 0) {
    return;
  }
  if (*(char *)(unaff_RBX + 0x123) != '\0') {
    if (*(int64_t *)(unaff_RBX + 0x60) != 0) {
      *unaff_RBP = 1;
      return;
    }
    if ((*unaff_RSI != '\0') && (*(int64_t *)(unaff_RBX + 0x70) == 0)) {
      return;
    }
  }
  *unaff_R15 = 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_5ea582(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_5ea582(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t unaff_RBX;
  int8_t *unaff_RBP;
  char *unaff_RSI;
  int64_t *unaff_RDI;
  int8_t *unaff_R15;
  int32_t extraout_XMM0_Da;
  float fVar2;
  if (*(int *)(param_2 * 0x68 + 0x58 + param_1) == 0x12) {
    lVar1 = SystemCore_Initializer(&system_data_5f30,*(int32_t *)((int64_t)unaff_RDI + 0xac));
    if (((int)unaff_RDI[0x493] != -1) &&
       (*(char *)((int64_t)(int)unaff_RDI[0x493] * 0x68 + 0x60 + system_system_config) == '\x04')) {
      fVar2 = (float)(**(code **)(*unaff_RDI + 0x90))(extraout_XMM0_Da,1);
      *unaff_RSI = *(float *)(lVar1 + 0x1d8) <= fVar2 && fVar2 != *(float *)(lVar1 + 0x1d8);
    }
  }
  else {
    *(bool *)param_4 = *(char *)(unaff_RBX + 0x126) == '\0';
  }
  if (*(int *)(unaff_RBX + 0x16c) < 0) {
    return;
  }
  if (*(char *)(unaff_RBX + 0x123) != '\0') {
    if (*(int64_t *)(unaff_RBX + 0x60) != 0) {
      *unaff_RBP = 1;
      return;
    }
    if ((*unaff_RSI != '\0') && (*(int64_t *)(unaff_RBX + 0x70) == 0)) {
      return;
    }
  }
  *unaff_R15 = 1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address