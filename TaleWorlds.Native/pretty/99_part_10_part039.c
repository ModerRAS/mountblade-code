#include "SystemAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_10_part039.c - 19 个函数
// 函数: void function_6c0b60(int64_t *param_1,uint64_t *param_2)
void function_6c0b60(int64_t *param_1,uint64_t *param_2)
{
  int32_t *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int *piVar6;
  char cVar7;
  uint64_t uVar8;
  int8_t uVar9;
  void *puVar10;
  int64_t lVar11;
  int32_t uVar12;
  int32_t uVar13;
  char *pcStackX_8;
  char *pcStackX_10;
  uint64_t local_var_68;
  uint local_var_60;
  int32_t local_var_5c;
  int8_t local_var_58;
  uint8_t local_var_57;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  lVar11 = *param_1;
  local_var_38 = *(int32_t *)(param_2 + 2);
  local_var_34 = *(int32_t *)((int64_t)param_2 + 0x14);
  local_var_30 = *(int32_t *)(param_2 + 3);
  local_var_2c = *(int32_t *)((int64_t)param_2 + 0x1c);
  uVar4 = *param_2;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar8 = (uint64_t)(*(int *)(lVar11 + 0x10) - 1);
    if (*(char *)(*(int64_t *)(lVar11 + 8) + 8 + uVar8 * 0x18) == '\0') {
      cVar7 = (char)param_1[9];
      if (cVar7 != '\0') {
        cVar7 = (**(code **)(*(int64_t *)param_1[5] + 0x18))
                          ((int64_t *)param_1[5],
                           *(uint64_t *)(*(int64_t *)(lVar11 + 8) + uVar8 * 0x18));
        lVar11 = *param_1;
        *(char *)(param_1 + 9) = cVar7;
      }
      *(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + (uint64_t)(*(int *)(lVar11 + 0x10) - 1) * 0x18)
           = cVar7;
      *(char *)(*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
           = (char)param_1[9];
      lVar11 = *param_1;
    }
  }
  local_var_58 = (int8_t)param_1[9];
  uVar2 = *(uint *)(lVar11 + 0x10);
  local_var_60 = local_var_60 & 0xffffff00;
  local_var_68 = uVar4;
  if (uVar2 < (*(uint *)(lVar11 + 0x14) & 0x7fffffff)) {
    lVar5 = *(int64_t *)(lVar11 + 8);
    local_var_68._0_4_ = (int32_t)uVar4;
    local_var_68._4_4_ = (int32_t)((uint64_t)uVar4 >> 0x20);
    puVar1 = (int32_t *)(lVar5 + (uint64_t)uVar2 * 0x18);
    *puVar1 = (int32_t)local_var_68;
    puVar1[1] = local_var_68._4_4_;
    puVar1[2] = local_var_60;
    puVar1[3] = local_var_5c;
    *(uint64_t *)(lVar5 + 0x10 + (uint64_t)uVar2 * 0x18) = CONCAT71(local_var_57,local_var_58);
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
  }
  else {
    function_6d5b60(lVar11,&local_var_68);
  }
  piVar6 = (int *)param_1[0xb];
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  pcStackX_10 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar3 = *(int *)(*param_1 + 0x10);
    if (iVar3 == 0) {
      puVar10 = &ui_system_data_1920_ptr;
    }
    else {
      puVar10 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(int64_t *)param_1[5] + 0x10))
                      ((int64_t *)param_1[5],puVar10,&pcStackX_10);
    if (((cVar7 != '\0') && (pcStackX_10 != (char *)0x0)) && (*pcStackX_10 != '\0')) {
      pcStackX_8 = pcStackX_10;
      uVar12 = SystemMonitoringProcessor(pcStackX_10,&pcStackX_8);
      uVar13 = SystemMonitoringProcessor(pcStackX_8,&pcStackX_8);
      local_var_60 = SystemMonitoringProcessor(pcStackX_8,&pcStackX_8);
      local_var_68 = CONCAT44(uVar13,uVar12);
      (*(code *)CONCAT44(local_var_2c,local_var_30))(param_1[6],&local_var_68);
    }
  }
  lVar11 = *param_1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar8 = (uint64_t)(*(int *)(lVar11 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar11 + 8) + 8 + uVar8 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + uVar8 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar11 = *param_1;
    }
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
    lVar11 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar9 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + (uint64_t)(*(int *)(lVar11 + 0x10) - 1) * 0x18
                 ) == '\0') {
      uVar9 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar9;
  }
  return;
}
// 函数: void function_6c0ca4(uint64_t param_1)
void function_6c0ca4(uint64_t param_1)
{
  uint64_t uVar1;
  char cVar2;
  int64_t *unaff_RBX;
  char unaff_DIL;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t stack_special_x_20;
  int32_t stack_special_x_24;
  code *local_buffer_58;
  uint64_t local_buffer_90;
  local_buffer_90 = param_1;
  uVar4 = SystemMonitoringProcessor(param_1,&local_buffer_00000090);
  uVar5 = SystemMonitoringProcessor(local_buffer_90,&local_buffer_00000090);
  SystemMonitoringProcessor(local_buffer_90,&local_buffer_00000090);
  stack_special_x_20 = uVar4;
  stack_special_x_24 = uVar5;
  (*local_buffer_58)(unaff_RBX[6],&stack_special_x_20);
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (uint64_t)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar3 + 8) + 8 + uVar1 * 0x18) != unaff_DIL) &&
       (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != unaff_DIL)) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar3 = *unaff_RBX;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == unaff_DIL) {
      cVar2 = unaff_DIL;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}
// 函数: void function_6c0d1c(void)
void function_6c0d1c(void)
{
  uint64_t uVar1;
  char cVar2;
  int64_t *unaff_RBX;
  char unaff_DIL;
  int64_t lVar3;
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (uint64_t)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar3 + 8) + 8 + uVar1 * 0x18) != unaff_DIL) &&
       (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != unaff_DIL)) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar3 = *unaff_RBX;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == unaff_DIL) {
      cVar2 = unaff_DIL;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}
// 函数: void function_6c0d90(int64_t *param_1,uint64_t *param_2)
void function_6c0d90(int64_t *param_1,uint64_t *param_2)
{
  int iVar1;
  uint64_t uVar2;
  int *piVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void *puVar9;
  int8_t astack_special_x_8 [8];
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  uint64_t local_var_48;
  uint local_var_40;
  int32_t local_var_3c;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  lVar8 = *param_1;
  local_var_20 = *(int32_t *)(param_2 + 2);
  local_var_1c = *(int32_t *)((int64_t)param_2 + 0x14);
  local_var_18 = *(int32_t *)(param_2 + 3);
  local_var_14 = *(int32_t *)((int64_t)param_2 + 0x1c);
  uVar2 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar7 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar7 * 0x10) == '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x18))
                ((int64_t *)param_1[1],*(uint64_t *)(*(int64_t *)(lVar8 + 8) + uVar7 * 0x10));
      *(int8_t *)
       (*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      lVar8 = *param_1;
    }
  }
  local_var_40 = local_var_40 & 0xffffff00;
  local_var_48 = uVar2;
  if (*(uint *)(lVar8 + 0x10) < (*(uint *)(lVar8 + 0x14) & 0x7fffffff)) {
    local_var_48._0_4_ = (int32_t)uVar2;
    local_var_48._4_4_ = (int32_t)((uint64_t)uVar2 >> 0x20);
    puVar6 = (int32_t *)(*(int64_t *)(lVar8 + 8) + (uint64_t)*(uint *)(lVar8 + 0x10) * 0x10);
    *puVar6 = (int32_t)local_var_48;
    puVar6[1] = local_var_48._4_4_;
    puVar6[2] = local_var_40;
    puVar6[3] = local_var_3c;
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  }
  else {
    function_6d5a70(lVar8,&local_var_48);
  }
  piVar3 = (int *)param_1[5];
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  puVar6 = (int32_t *)(*(code *)CONCAT44(local_var_1c,local_var_20))(&local_var_48,param_1[2]);
  local_var_58 = *puVar6;
  local_var_54 = puVar6[1];
  local_var_50 = puVar6[2];
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_1[3];
  plVar5 = (int64_t *)param_1[1];
  function_6d3290(puVar4,&local_var_58);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_8,1);
  (**(code **)(*plVar5 + 0x10))(plVar5,puVar9,puVar4[4]);
  puVar4[3] = 0;
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar8 = *param_1;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  return;
}
// 函数: void function_6c0f20(int64_t *param_1,uint64_t *param_2)
void function_6c0f20(int64_t *param_1,uint64_t *param_2)
{
  int32_t *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int *piVar6;
  char cVar7;
  uint64_t uVar8;
  int8_t uVar9;
  void *puVar10;
  int64_t lVar11;
  int32_t uVar12;
  char *pcStackX_8;
  int8_t astack_special_x_10 [8];
  uint64_t local_var_48;
  uint local_var_40;
  int32_t local_var_3c;
  int8_t local_var_38;
  uint8_t local_var_37;
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  lVar11 = *param_1;
  local_var_18 = *(int32_t *)(param_2 + 2);
  local_var_14 = *(int32_t *)((int64_t)param_2 + 0x14);
  local_var_10 = *(int32_t *)(param_2 + 3);
  local_var_c = *(int32_t *)((int64_t)param_2 + 0x1c);
  uVar4 = *param_2;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar8 = (uint64_t)(*(int *)(lVar11 + 0x10) - 1);
    if (*(char *)(*(int64_t *)(lVar11 + 8) + 8 + uVar8 * 0x18) == '\0') {
      cVar7 = (char)param_1[9];
      if (cVar7 != '\0') {
        cVar7 = (**(code **)(*(int64_t *)param_1[5] + 0x18))
                          ((int64_t *)param_1[5],
                           *(uint64_t *)(*(int64_t *)(lVar11 + 8) + uVar8 * 0x18));
        lVar11 = *param_1;
        *(char *)(param_1 + 9) = cVar7;
      }
      *(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + (uint64_t)(*(int *)(lVar11 + 0x10) - 1) * 0x18)
           = cVar7;
      *(char *)(*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
           = (char)param_1[9];
      lVar11 = *param_1;
    }
  }
  local_var_38 = (int8_t)param_1[9];
  uVar2 = *(uint *)(lVar11 + 0x10);
  local_var_40 = local_var_40 & 0xffffff00;
  local_var_48 = uVar4;
  if (uVar2 < (*(uint *)(lVar11 + 0x14) & 0x7fffffff)) {
    lVar5 = *(int64_t *)(lVar11 + 8);
    local_var_48._0_4_ = (int32_t)uVar4;
    local_var_48._4_4_ = (int32_t)((uint64_t)uVar4 >> 0x20);
    puVar1 = (int32_t *)(lVar5 + (uint64_t)uVar2 * 0x18);
    *puVar1 = (int32_t)local_var_48;
    puVar1[1] = local_var_48._4_4_;
    puVar1[2] = local_var_40;
    puVar1[3] = local_var_3c;
    *(uint64_t *)(lVar5 + 0x10 + (uint64_t)uVar2 * 0x18) = CONCAT71(local_var_37,local_var_38);
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
  }
  else {
    function_6d5b60(lVar11,&local_var_48);
  }
  piVar6 = (int *)param_1[0xb];
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  pcStackX_8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar3 = *(int *)(*param_1 + 0x10);
    if (iVar3 == 0) {
      puVar10 = &ui_system_data_1920_ptr;
    }
    else {
      puVar10 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar3 - 1) * 0x18);
    }
    cVar7 = (**(code **)(*(int64_t *)param_1[5] + 0x10))
                      ((int64_t *)param_1[5],puVar10,&pcStackX_8);
    if (((cVar7 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar12 = SystemMonitoringProcessor(pcStackX_8,astack_special_x_10);
      (*(code *)CONCAT44(local_var_c,local_var_10))(param_1[6],uVar12);
    }
  }
  lVar11 = *param_1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar8 = (uint64_t)(*(int *)(lVar11 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar11 + 8) + 8 + uVar8 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + uVar8 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar11 = *param_1;
    }
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
    lVar11 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar9 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + (uint64_t)(*(int *)(lVar11 + 0x10) - 1) * 0x18
                 ) == '\0') {
      uVar9 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar9;
  }
  return;
}
// 函数: void function_6c10d0(int64_t *param_1,uint64_t *param_2)
void function_6c10d0(int64_t *param_1,uint64_t *param_2)
{
  int32_t *puVar1;
  int iVar2;
  uint64_t uVar3;
  int *piVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void *puVar9;
  int32_t uVar10;
  int8_t astack_special_x_8 [8];
  uint64_t local_var_48;
  uint local_var_40;
  int32_t local_var_3c;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  lVar8 = *param_1;
  local_var_20 = *(int32_t *)(param_2 + 2);
  local_var_1c = *(int32_t *)((int64_t)param_2 + 0x14);
  local_var_18 = *(int32_t *)(param_2 + 3);
  local_var_14 = *(int32_t *)((int64_t)param_2 + 0x1c);
  uVar3 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar7 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar7 * 0x10) == '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x18))
                ((int64_t *)param_1[1],*(uint64_t *)(*(int64_t *)(lVar8 + 8) + uVar7 * 0x10));
      *(int8_t *)
       (*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
      lVar8 = *param_1;
    }
  }
  local_var_40 = local_var_40 & 0xffffff00;
  local_var_48 = uVar3;
  if (*(uint *)(lVar8 + 0x10) < (*(uint *)(lVar8 + 0x14) & 0x7fffffff)) {
    local_var_48._0_4_ = (int32_t)uVar3;
    local_var_48._4_4_ = (int32_t)((uint64_t)uVar3 >> 0x20);
    puVar1 = (int32_t *)(*(int64_t *)(lVar8 + 8) + (uint64_t)*(uint *)(lVar8 + 0x10) * 0x10);
    *puVar1 = (int32_t)local_var_48;
    puVar1[1] = local_var_48._4_4_;
    puVar1[2] = local_var_40;
    puVar1[3] = local_var_3c;
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  }
  else {
    function_6d5a70(lVar8,&local_var_48);
  }
  piVar4 = (int *)param_1[5];
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_1c,local_var_20))(param_1[2]);
  iVar2 = *(int *)(*param_1 + 0x10);
  if (iVar2 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar2 - 1) * 0x10);
  }
  puVar5 = (uint64_t *)param_1[3];
  plVar6 = (int64_t *)param_1[1];
  SystemCore_CleanupManager(puVar5,uVar10);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar5)(puVar5,astack_special_x_8,1);
  (**(code **)(*plVar6 + 0x10))(plVar6,puVar9,puVar5[4]);
  puVar5[3] = 0;
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar8 = *param_1;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  return;
}
// 函数: void function_6c1230(int64_t *param_1,int64_t *param_2)
void function_6c1230(int64_t *param_1,int64_t *param_2)
{
  int iVar1;
  int *piVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void *puVar8;
  void *plocal_var_38;
  int64_t lStack_30;
  int64_t lStack_28;
  int32_t local_var_20;
  int32_t local_var_1c;
  int32_t local_var_18;
  int32_t local_var_14;
  lStack_30 = *param_2;
  lStack_28 = param_2[1];
  local_var_20 = (int32_t)param_2[2];
  local_var_1c = *(int32_t *)((int64_t)param_2 + 0x14);
  local_var_18 = (int32_t)param_2[3];
  local_var_14 = *(int32_t *)((int64_t)param_2 + 0x1c);
  SystemValidator((int)*param_2,*param_2);
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar6 = (*(code *)CONCAT44(local_var_1c,local_var_20))(param_1[2]);
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  plVar3 = (int64_t *)param_1[4];
  plVar4 = (int64_t *)param_1[1];
  if (*(short *)(lVar6 + 8) == 3) {
    cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar6);
    if (cVar5 == '\0') {
      uVar7 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar7,0x20,&ui_system_data_1424_ptr,0x32,&ui_system_data_1328_ptr,puVar8);
    }
    lStack_28 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar6);
    plocal_var_38 = &processed_var_9144_ptr;
  }
  else {
    if (*(short *)(lVar6 + 8) != 4) goto LAB_1806c1383;
    cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar6);
    if (cVar5 == '\0') {
      uVar7 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar7,0x20,&ui_system_data_1424_ptr,0x32,&ui_system_data_1328_ptr,puVar8);
    }
    lStack_28 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar6);
    plocal_var_38 = &processed_var_9168_ptr;
  }
  if (lStack_28 == 0) {
    lStack_28 = lVar6;
  }
  lStack_30 = lVar6;
  (**(code **)(*plVar4 + 8))(plVar4,puVar8,&plocal_var_38);
LAB_1806c1383:
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar6 = *param_1;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return;
}
// 函数: void function_6c123b(uint64_t param_1,uint64_t *param_2)
void function_6c123b(uint64_t param_1,uint64_t *param_2)
{
  int iVar1;
  int *piVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  char cVar9;
  int64_t in_RAX;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t *in_RCX;
  void *puVar12;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t unaff_R14;
  uint64_t in_XMM0_Qb;
  void *local_var_30;
  int64_t local_var_38;
  int64_t local_var_40;
  code *local_var_48;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  uVar5 = *(int32_t *)(param_2 + 2);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x14);
  uVar7 = *(int32_t *)(param_2 + 3);
  uVar8 = *(int32_t *)((int64_t)param_2 + 0x1c);
  uVar11 = *param_2;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x30) = param_1;
  *(uint64_t *)(in_RAX + -0x28) = in_XMM0_Qb;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R14;
  *(int32_t *)(in_RAX + -0x20) = uVar5;
  *(int32_t *)(in_RAX + -0x1c) = uVar6;
  *(int32_t *)(in_RAX + -0x18) = uVar7;
  *(int32_t *)(in_RAX + -0x14) = uVar8;
  SystemValidator(in_RCX,uVar11);
  piVar2 = (int *)in_RCX[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar10 = (*local_var_48)(in_RCX[2]);
  iVar1 = *(int *)(*in_RCX + 0x10);
  if (iVar1 == 0) {
    puVar12 = &ui_system_data_1920_ptr;
  }
  else {
    puVar12 = *(void **)(*(int64_t *)(*in_RCX + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  plVar3 = (int64_t *)in_RCX[4];
  plVar4 = (int64_t *)in_RCX[1];
  if (*(short *)(lVar10 + 8) == 3) {
    cVar9 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar10);
    if (cVar9 == '\0') {
      uVar11 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar11,0x20,&ui_system_data_1424_ptr,0x32,&ui_system_data_1328_ptr);
    }
    local_var_40 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar10);
    local_var_30 = &processed_var_9144_ptr;
  }
  else {
    if (*(short *)(lVar10 + 8) != 4) goto LAB_1806c1383;
    cVar9 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar10);
    if (cVar9 == '\0') {
      uVar11 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar11,0x20,&ui_system_data_1424_ptr,0x32,&ui_system_data_1328_ptr);
    }
    local_var_40 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar10);
    local_var_30 = &processed_var_9168_ptr;
  }
  if (local_var_40 == 0) {
    local_var_40 = lVar10;
  }
  local_var_38 = lVar10;
  (**(code **)(*plVar4 + 8))(plVar4,puVar12,&local_buffer_00000030);
LAB_1806c1383:
  lVar10 = *in_RCX;
  if (*(int *)(lVar10 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar10 + 8) + 8 + (uint64_t)(*(int *)(lVar10 + 0x10) - 1) * 0x10)
        != '\0') {
      (**(code **)(*(int64_t *)in_RCX[1] + 0x20))();
      lVar10 = *in_RCX;
    }
    *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
  }
  return;
}
// 函数: void function_6c13a7(uint64_t param_1,int64_t param_2)
void function_6c13a7(uint64_t param_1,int64_t param_2)
{
  int in_EAX;
  int64_t *unaff_RBX;
  if (*(char *)(*(int64_t *)(param_2 + 8) + 8 + (uint64_t)(in_EAX - 1) * 0x10) != '\0') {
    (**(code **)(*(int64_t *)unaff_RBX[1] + 0x20))();
    param_2 = *unaff_RBX;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  return;
}
// 函数: void function_6c13d0(int64_t *param_1,uint64_t param_2,int64_t param_3)
void function_6c13d0(int64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int32_t uVar4;
  byte *pbVar5;
  void *puVar6;
  char *pcStackX_8;
  char *pcStackX_20;
  pcStackX_8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar6 = &ui_system_data_1920_ptr;
    }
    else {
      puVar6 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar6,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      pcStackX_20 = pcStackX_8;
      uVar4 = strtoul(pcStackX_8,&pcStackX_20,10);
      pbVar5 = (byte *)(**(code **)(*(int64_t *)param_1[6] + 0x1a8))
                                 ((int64_t *)param_1[6],&pcStackX_8);
      if (((*pbVar5 & 1) == 0) || (1 < *(int *)(*(int64_t *)(param_3 + 0x10) + 8) - 0x2cU)) {
        lVar2 = param_1[6];
        (**(code **)(*(int64_t *)(param_3 + 0x10) + 0x28))(lVar2,&pcStackX_20,&pcStackX_8);
        if (*(char *)(param_3 + 8) != '\0') {
          (**(code **)(*(int64_t *)(param_3 + 0x10) + 0x20))
                    (lVar2,uVar4,(uint64_t)pcStackX_8 & 0xffffffff);
          return;
        }
        (**(code **)(*(int64_t *)(param_3 + 0x10) + 0x20))
                  (lVar2,(uint64_t)pcStackX_20 & 0xffffffff,uVar4);
      }
    }
  }
  return;
}
// 函数: void function_6c1448(uint64_t param_1)
void function_6c1448(uint64_t param_1)
{
  uint64_t uVar1;
  int32_t uVar2;
  byte *pbVar3;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t local_var_30;
  uint64_t local_var_48;
  local_var_48 = param_1;
  uVar2 = strtoul(param_1,&local_buffer_00000048);
  pbVar3 = (byte *)(**(code **)(**(int64_t **)(unaff_RBX + 0x30) + 0x1a8))
                             (*(int64_t **)(unaff_RBX + 0x30),&local_buffer_00000030);
  if (((*pbVar3 & 1) == 0) || (1 < *(int *)(*(int64_t *)(unaff_RDI + 0x10) + 8) - 0x2cU)) {
    uVar1 = *(uint64_t *)(unaff_RBX + 0x30);
    (**(code **)(*(int64_t *)(unaff_RDI + 0x10) + 0x28))(uVar1,&local_buffer_00000048,&local_buffer_00000030);
    if (*(char *)(unaff_RDI + 8) != '\0') {
      (**(code **)(*(int64_t *)(unaff_RDI + 0x10) + 0x20))(uVar1,uVar2,local_var_30);
      return;
    }
    (**(code **)(*(int64_t *)(unaff_RDI + 0x10) + 0x20))
              (uVar1,local_var_48 & 0xffffffff,uVar2);
  }
  return;
}
// 函数: void function_6c14c5(uint64_t param_1)
void function_6c14c5(uint64_t param_1)
{
  int64_t in_RAX;
  int32_t unaff_ESI;
  int32_t local_var_48;
  (**(code **)(in_RAX + 0x20))(param_1,local_var_48,unaff_ESI);
  return;
}
// 函数: void function_6c14d4(void)
void function_6c14d4(void)
{
  return;
}
// 函数: void function_6c14e0(int64_t *param_1,uint64_t param_2,int64_t param_3)
void function_6c14e0(int64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint uVar4;
  void *puVar5;
  uint astack_special_x_8 [2];
  uint astack_special_x_18 [4];
  (**(code **)(*(int64_t *)(param_3 + 0x10) + 0x28))(param_1[2],astack_special_x_18,astack_special_x_8);
  uVar4 = astack_special_x_8[0];
  if (*(char *)(param_3 + 8) != '\0') {
    uVar4 = astack_special_x_18[0];
  }
  iVar1 = *(int *)(*param_1 + 0x10);
  if (iVar1 == 0) {
    puVar5 = &ui_system_data_1920_ptr;
  }
  else {
    puVar5 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_1[3];
  plVar3 = (int64_t *)param_1[1];
  function_6c4e00(puVar2,&rendering_buffer_2208_ptr,uVar4);
  astack_special_x_8[0] = astack_special_x_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar5,puVar2[4]);
  puVar2[3] = 0;
  return;
}
// 函数: void function_6c1590(int64_t *param_1,uint64_t param_2,int64_t param_3)
void function_6c1590(int64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  void *puVar4;
  int32_t uVar5;
  char *pcStackX_8;
  int32_t astack_special_x_20 [2];
  pcStackX_8 = (char *)0x0;
  if ((char)param_1[9] != '\0') {
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar3 = (**(code **)(*(int64_t *)param_1[5] + 0x10))((int64_t *)param_1[5],puVar4,&pcStackX_8)
    ;
    if (((cVar3 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      uVar5 = SystemMonitoringProcessor(pcStackX_8,astack_special_x_20);
      lVar2 = param_1[6];
      (**(code **)(*(int64_t *)(param_3 + 0x10) + 0x28))(lVar2,astack_special_x_20,&pcStackX_8);
      if (*(char *)(param_3 + 8) != '\0') {
        (**(code **)(*(int64_t *)(param_3 + 0x10) + 0x20))(lVar2,uVar5,pcStackX_8._0_4_);
        return;
      }
      (**(code **)(*(int64_t *)(param_3 + 0x10) + 0x20))(lVar2,astack_special_x_20[0],uVar5);
    }
  }
  return;
}
// 函数: void function_6c15fb(void)
void function_6c15fb(void)
{
  uint64_t uVar1;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  int32_t uVar2;
  int32_t local_var_40;
  int32_t local_buffer_58;
  uVar2 = SystemMonitoringProcessor();
  uVar1 = *(uint64_t *)(unaff_RBX + 0x30);
  (**(code **)(*(int64_t *)(unaff_RDI + 0x10) + 0x28))(uVar1,&local_buffer_00000058,&local_buffer_00000040);
  if (*(char *)(unaff_RDI + 8) != '\0') {
    (**(code **)(*(int64_t *)(unaff_RDI + 0x10) + 0x20))(uVar1,uVar2,local_var_40);
    return;
  }
  (**(code **)(*(int64_t *)(unaff_RDI + 0x10) + 0x20))(uVar1,local_buffer_58,uVar2);
  return;
}
// 函数: void function_6c1649(uint64_t param_1)
void function_6c1649(uint64_t param_1)
{
  int64_t in_RAX;
  int32_t local_buffer_58;
  (**(code **)(in_RAX + 0x20))(param_1,local_buffer_58);
  return;
}
// 函数: void function_6c165a(void)
void function_6c165a(void)
{
  return;
}
// 函数: void function_6c1670(int64_t *param_1,uint64_t param_2)
void function_6c1670(int64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int iVar5;
  void *puVar6;
  int32_t uVar7;
  int8_t astack_special_x_8 [8];
  int64_t lStack_158;
  int64_t *plStack_150;
  uint64_t local_var_148;
  uint64_t *plocal_var_140;
  int64_t lStack_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int64_t lStack_120;
  int64_t *plStack_118;
  uint64_t local_var_110;
  uint64_t *plocal_var_108;
  int64_t lStack_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  int8_t stack_array_e8 [160];
  uint64_t local_var_48;
  code *pcStack_38;
  lVar1 = *param_1;
  plVar2 = (int64_t *)param_1[1];
  puVar3 = (uint64_t *)param_1[3];
  lVar4 = param_1[4];
  function_6f4110(stack_array_e8);
  local_var_130 = 0;
  local_var_128 = 0;
  lStack_158 = lVar1;
  plStack_150 = plVar2;
  local_var_148 = param_2;
  plocal_var_140 = puVar3;
  lStack_138 = lVar4;
  function_6d01f0(stack_array_e8,&lStack_158,0);
  local_var_f8 = 0;
  local_var_f0 = 0;
  lStack_120 = lVar1;
  plStack_118 = plVar2;
  local_var_110 = param_2;
  plocal_var_108 = puVar3;
  lStack_100 = lVar4;
  SystemValidator(&lStack_120,local_var_48);
  uVar7 = (*pcStack_38)(param_2);
  if (*(int *)(lVar1 + 0x10) == 0) {
    puVar6 = &ui_system_data_1920_ptr;
  }
  else {
    puVar6 = *(void **)
              (*(int64_t *)(lVar1 + 8) + (uint64_t)(*(int *)(lVar1 + 0x10) - 1) * 0x10);
  }
  SystemCore_CleanupManager(puVar3,uVar7);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_8,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,puVar6,puVar3[4]);
  puVar3[3] = 0;
  iVar5 = *(int *)(lVar1 + 0x10);
  if (iVar5 != 0) {
    if (*(char *)(*(int64_t *)(lVar1 + 8) + 8 + (uint64_t)(iVar5 - 1) * 0x10) != '\0') {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      iVar5 = *(int *)(lVar1 + 0x10);
    }
    *(int *)(lVar1 + 0x10) = iVar5 + -1;
  }
  return;
}