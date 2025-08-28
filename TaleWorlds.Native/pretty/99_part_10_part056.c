#include "SystemAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_10_part056.c - 10 个函数
// 函数: void function_6d0f20(int64_t param_1,int64_t param_2)
void function_6d0f20(int64_t param_1,int64_t param_2)
{
  int *piVar1;
  int8_t stack_array_108 [224];
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x208));
  piVar1 = *(int **)(param_2 + 0x28);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
// WARNING: Subroutine does not return
  memset(stack_array_108,0,0xe0);
}
// 函数: void function_6d12f0(int64_t param_1,int64_t param_2)
void function_6d12f0(int64_t param_1,int64_t param_2)
{
  int *piVar1;
  int8_t stack_array_110 [232];
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x208));
  piVar1 = *(int **)(param_2 + 0x28);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
// WARNING: Subroutine does not return
  memset(stack_array_110,0,0xe0);
}
int function_6d1870(int64_t param_1,int64_t *param_2,int param_3)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int8_t *puVar4;
  int64_t lVar5;
  uint *puVar6;
  int iVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  uint astack_special_x_18 [2];
  int8_t stack_array_58 [4];
  int iStack_54;
  uint local_var_50;
  int32_t local_var_4c;
  uint64_t *plocal_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  local_var_50 = *(int32_t *)(param_1 + 0x318);
  local_var_4c = *(int32_t *)(param_1 + 0x31c);
  plocal_var_48 = *(uint64_t **)(param_1 + 800);
  local_var_40 = *(int32_t *)(param_1 + 0x328);
  local_var_3c = *(int32_t *)(param_1 + 0x32c);
  local_var_38 = *(int32_t *)(param_1 + 0x330);
  local_var_34 = *(int32_t *)(param_1 + 0x334);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x318));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_3c,local_var_40))(param_2[2]);
  puVar8 = &ui_system_data_1920_ptr;
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar10);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x338);
  local_var_4c = *(int32_t *)(param_1 + 0x33c);
  plocal_var_48 = *(uint64_t **)(param_1 + 0x340);
  local_var_40 = *(int32_t *)(param_1 + 0x348);
  local_var_3c = *(int32_t *)(param_1 + 0x34c);
  local_var_38 = *(int32_t *)(param_1 + 0x350);
  local_var_34 = *(int32_t *)(param_1 + 0x354);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x338));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_3c,local_var_40))(param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar10);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x358);
  local_var_4c = *(int32_t *)(param_1 + 0x35c);
  plocal_var_48 = *(uint64_t **)(param_1 + 0x360);
  local_var_40 = *(int32_t *)(param_1 + 0x368);
  local_var_3c = *(int32_t *)(param_1 + 0x36c);
  local_var_38 = *(int32_t *)(param_1 + 0x370);
  local_var_34 = *(int32_t *)(param_1 + 0x374);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x358));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar4 = (int8_t *)(*(code *)CONCAT44(local_var_3c,local_var_40))(astack_special_x_18,param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar9,*puVar4,0x180be0250);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x378);
  local_var_4c = *(int32_t *)(param_1 + 0x37c);
  plocal_var_48 = *(uint64_t **)(param_1 + 0x380);
  local_var_40 = *(int32_t *)(param_1 + 0x388);
  local_var_3c = *(int32_t *)(param_1 + 0x38c);
  local_var_38 = *(int32_t *)(param_1 + 0x390);
  local_var_34 = *(int32_t *)(param_1 + 0x394);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x378));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_3c,local_var_40))(param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar10);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  astack_special_x_18[0] = 0x3b;
  puVar6 = astack_special_x_18;
  if ((uint *)param_2[5] != (uint *)0x0) {
    puVar6 = (uint *)param_2[5];
  }
  iVar7 = 0;
  if ((int *)param_2[6] != (int *)0x0) {
    iVar7 = *(int *)param_2[6];
  }
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x398));
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x3a8));
  iStack_54 = iVar7 + 0xd4;
  local_var_50 = CONCAT31(local_var_50._1_3_,1);
  stack_array_58[0] = 1;
  plocal_var_48 = (uint64_t *)(param_1 + 0x398);
  function_6c14e0(param_2,*puVar6,stack_array_58);
  *puVar6 = *puVar6 + 1;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x3b0));
  iStack_54 = iVar7 + 0xd8;
  local_var_50 = local_var_50 & 0xffffff00;
  function_6c14e0(param_2,*puVar6,stack_array_58);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    lVar5 = *param_2;
  }
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  local_var_40 = *(int32_t *)(param_1 + 0x3d8);
  local_var_3c = *(int32_t *)(param_1 + 0x3dc);
  local_var_38 = *(int32_t *)(param_1 + 0x3e0);
  local_var_34 = *(int32_t *)(param_1 + 0x3e4);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x3c8));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(local_var_3c,local_var_40))(param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 != 0) {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar10);
  astack_special_x_18[0] = astack_special_x_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  return param_3 + 8;
}
int function_6d1d70(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  int8_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void *puVar9;
  void *puVar10;
  int32_t uVar11;
  int8_t astack_special_x_18 [8];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  function_6d6010(param_2,param_1 + 0x30);
  local_var_48 = *(uint64_t *)(param_1 + 0x48);
  local_var_40 = *(int32_t *)(param_1 + 0x50);
  local_var_3c = *(int32_t *)(param_1 + 0x54);
  local_var_38 = *(int32_t *)(param_1 + 0x58);
  local_var_34 = *(int32_t *)(param_1 + 0x5c);
  local_var_30 = *(int32_t *)(param_1 + 0x60);
  local_var_2c = *(int32_t *)(param_1 + 100);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x48));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar4 = (uint64_t *)(*(code *)CONCAT44(local_var_34,local_var_38))(&local_var_78,param_2[2]);
  puVar10 = &ui_system_data_1920_ptr;
  local_var_50 = *puVar4;
  local_var_48 = puVar4[1];
  local_var_3c = *(int32_t *)((int64_t)puVar4 + 0x14);
  local_var_40 = *(int32_t *)(puVar4 + 2);
  local_var_38 = *(int32_t *)(puVar4 + 3);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d2e60(param_2[1],param_2[4],param_2[3],puVar9,&local_var_50);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x68);
  local_var_6c = *(int32_t *)(param_1 + 0x6c);
  local_var_68 = *(int32_t *)(param_1 + 0x70);
  local_var_64 = *(int32_t *)(param_1 + 0x74);
  local_var_60 = *(int32_t *)(param_1 + 0x78);
  local_var_5c = *(int32_t *)(param_1 + 0x7c);
  local_var_58 = *(int32_t *)(param_1 + 0x80);
  local_var_54 = *(int32_t *)(param_1 + 0x84);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x68));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(local_var_5c,local_var_60))(&local_var_50,param_2[2]);
  local_var_78 = *puVar5;
  local_var_74 = puVar5[1];
  local_var_70 = puVar5[2];
  local_var_6c = puVar5[3];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d2d50(param_2[1],param_2[4],param_2[3],puVar9,&local_var_78);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  local_var_70 = *(int32_t *)(param_1 + 0x88);
  local_var_6c = *(int32_t *)(param_1 + 0x8c);
  local_var_68 = *(int32_t *)(param_1 + 0x90);
  local_var_64 = *(int32_t *)(param_1 + 0x94);
  local_var_60 = *(int32_t *)(param_1 + 0x98);
  local_var_5c = *(int32_t *)(param_1 + 0x9c);
  local_var_58 = *(int32_t *)(param_1 + 0xa0);
  local_var_54 = *(int32_t *)(param_1 + 0xa4);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x88));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(local_var_5c,local_var_60))(&local_var_50,param_2[2]);
  local_var_78 = *puVar5;
  local_var_74 = puVar5[1];
  local_var_70 = puVar5[2];
  local_var_6c = puVar5[3];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d2d50(param_2[1],param_2[4],param_2[3],puVar9,&local_var_78);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  SystemValidator(param_2,&ui_system_data_1560_ptr);
  function_6c17d0(param_2,param_1 + 0xa8);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  local_var_38 = *(int32_t *)(param_1 + 0xd8);
  local_var_34 = *(int32_t *)(param_1 + 0xdc);
  local_var_30 = *(int32_t *)(param_1 + 0xe0);
  local_var_2c = *(int32_t *)(param_1 + 0xe4);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 200));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*(code *)CONCAT44(local_var_34,local_var_38))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar11);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar9,puVar4[4]);
  puVar4[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  local_var_38 = *(int32_t *)(param_1 + 0xf8);
  local_var_34 = *(int32_t *)(param_1 + 0xfc);
  local_var_30 = *(int32_t *)(param_1 + 0x100);
  local_var_2c = *(int32_t *)(param_1 + 0x104);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xe8));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*(code *)CONCAT44(local_var_34,local_var_38))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar11);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar9,puVar4[4]);
  puVar4[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  local_var_38 = *(int32_t *)(param_1 + 0x118);
  local_var_34 = *(int32_t *)(param_1 + 0x11c);
  local_var_30 = *(int32_t *)(param_1 + 0x120);
  local_var_2c = *(int32_t *)(param_1 + 0x124);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x108));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*(code *)CONCAT44(local_var_34,local_var_38))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar11);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar9,puVar4[4]);
  puVar4[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  local_var_38 = *(int32_t *)(param_1 + 0x138);
  local_var_34 = *(int32_t *)(param_1 + 0x13c);
  local_var_30 = *(int32_t *)(param_1 + 0x140);
  local_var_2c = *(int32_t *)(param_1 + 0x144);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x128));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*(code *)CONCAT44(local_var_34,local_var_38))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar4,uVar11);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar4)(puVar4,astack_special_x_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar9,puVar4[4]);
  puVar4[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  local_var_38 = *(int32_t *)(param_1 + 0x158);
  local_var_34 = *(int32_t *)(param_1 + 0x15c);
  local_var_30 = *(int32_t *)(param_1 + 0x160);
  local_var_2c = *(int32_t *)(param_1 + 0x164);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x148));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = (int8_t *)(*(code *)CONCAT44(local_var_34,local_var_38))(astack_special_x_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar9,*puVar6,0x180be0070);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  local_var_38 = *(int32_t *)(param_1 + 400);
  local_var_34 = *(int32_t *)(param_1 + 0x194);
  local_var_30 = *(int32_t *)(param_1 + 0x198);
  local_var_2c = *(int32_t *)(param_1 + 0x19c);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x180));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar7 = (*(code *)CONCAT44(local_var_34,local_var_38))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d2c10(param_2[1],param_2[4],param_2[3],puVar10,uVar7);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  return param_3 + 0x10;
}
// 函数: void function_6d2430(int64_t param_1,int64_t param_2)
void function_6d2430(int64_t param_1,int64_t param_2)
{
  int *piVar1;
  int8_t stack_array_100 [232];
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x1d8));
  piVar1 = *(int **)(param_2 + 0x28);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
// WARNING: Subroutine does not return
  memset(stack_array_100,0,0xe0);
}
int function_6d26b0(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t *puVar6;
  int8_t *puVar7;
  int64_t lVar8;
  void *puVar9;
  int8_t astack_special_x_18 [8];
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int64_t lStack_108;
  int64_t lStack_100;
  int32_t *plocal_var_f8;
  code *pcStack_f0;
  int64_t lStack_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  int8_t stack_array_90 [40];
  int8_t stack_array_68 [64];
  lStack_100 = *param_1;
  plocal_var_f8 = (int32_t *)param_1[1];
  pcStack_f0 = (code *)param_1[2];
  lStack_e8 = param_1[3];
  SystemValidator(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  local_var_d0 = 0;
  local_var_c8 = 0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  local_var_b0 = 0;
  local_var_a8 = 0;
  local_var_a0 = 0;
  local_var_98 = 0;
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(&local_var_d0);
  puVar6 = (int32_t *)(*pcStack_f0)(stack_array_90,param_2[2]);
  lVar8 = *param_2;
  lVar3 = param_2[1];
  lVar4 = param_2[3];
  local_var_128 = *puVar6;
  lVar5 = param_2[4];
  local_var_124 = puVar6[1];
  local_var_120 = puVar6[2];
  local_var_11c = puVar6[3];
  local_var_118 = puVar6[4];
  local_var_114 = puVar6[5];
  local_var_110 = puVar6[6];
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(stack_array_68);
  plocal_var_f8 = &local_var_128;
  local_var_e0 = 0;
  local_var_d8 = 0;
  lStack_108 = lVar8;
  lStack_100 = lVar3;
  pcStack_f0 = (code *)lVar4;
  lStack_e8 = lVar5;
  function_6d0d40(stack_array_68,&lStack_108,0);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcStack_f0 = (code *)param_1[6];
  lStack_e8 = param_1[7];
  SystemValidator(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar7 = (int8_t *)(*pcStack_f0)(astack_special_x_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar9,*puVar7,0x180be0510);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  function_6c1230(param_2,param_1 + 8,param_3 + 2);
  return param_3 + 3;
}
// 函数: void function_6d28e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_6d28e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  int32_t uVar1;
  uint64_t local_var_3d8;
  uint64_t local_var_3d0;
  uint64_t local_var_3c8;
  uint64_t local_var_3c0;
  uint64_t local_var_3b8;
  uint64_t local_var_3b0;
  uint64_t local_var_3a8;
  int8_t stack_array_398 [768];
  int8_t stack_array_98 [128];
  __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(stack_array_398);
  local_var_3b0 = 0;
  local_var_3a8 = 0;
  local_var_3b8 = param_5;
  local_var_3d8 = param_1;
  local_var_3d0 = param_3;
  local_var_3c8 = param_2;
  local_var_3c0 = param_4;
  uVar1 = function_6c50f0(stack_array_398,&local_var_3d8,0);
  local_var_3b0 = 0;
  local_var_3a8 = 0;
  local_var_3b8 = param_5;
  local_var_3d8 = param_1;
  local_var_3d0 = param_3;
  local_var_3c8 = param_2;
  local_var_3c0 = param_4;
  function_6cd860(stack_array_398,&local_var_3d8,uVar1);
  local_var_3b0 = 0;
  local_var_3a8 = 0;
  local_var_3b8 = param_5;
  local_var_3d8 = param_1;
  local_var_3d0 = param_3;
  local_var_3c8 = param_2;
  local_var_3c0 = param_4;
  function_6d68d0(&local_var_3d8,stack_array_98);
  return;
}
// 函数: void function_6d29e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_6d29e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  uint64_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int8_t stack_array_e8 [224];
  function_6f4280(stack_array_e8);
  local_var_100 = 0;
  local_var_f8 = 0;
  local_var_108 = param_5;
  local_var_128 = param_1;
  local_var_120 = param_3;
  local_var_118 = param_2;
  local_var_110 = param_4;
  function_6d01f0(stack_array_e8,&local_var_128,0);
  local_var_100 = 0;
  local_var_f8 = 0;
  local_var_108 = param_5;
  local_var_128 = param_1;
  local_var_120 = param_3;
  local_var_118 = param_2;
  local_var_110 = param_4;
  function_6d0030(stack_array_e8,&local_var_128,0);
  return;
}
// 函数: void function_6d2ab0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_6d2ab0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  uint64_t local_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  int8_t stack_array_e8 [224];
  function_6f4350(stack_array_e8);
  local_var_100 = 0;
  local_var_f8 = 0;
  local_var_108 = param_5;
  local_var_128 = param_1;
  local_var_120 = param_3;
  local_var_118 = param_2;
  local_var_110 = param_4;
  function_6d01f0(stack_array_e8,&local_var_128,0);
  local_var_100 = 0;
  local_var_f8 = 0;
  local_var_108 = param_5;
  local_var_128 = param_1;
  local_var_120 = param_3;
  local_var_118 = param_2;
  local_var_110 = param_4;
  function_6d0030(stack_array_e8,&local_var_128,0);
  return;
}
// 函数: void function_6d2b80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void function_6d2b80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5)
{
  uint64_t local_var_228;
  uint64_t local_var_220;
  uint64_t local_var_218;
  uint64_t local_var_210;
  uint64_t local_var_208;
  uint64_t local_var_200;
  uint64_t local_var_1f8;
  int8_t stack_array_1e8 [480];
  __0PxShapeGeneratedInfo_physx__QEAA_XZ(stack_array_1e8);
  local_var_208 = param_5;
  local_var_200 = 0;
  local_var_1f8 = 0;
  local_var_228 = param_1;
  local_var_220 = param_3;
  local_var_218 = param_2;
  local_var_210 = param_4;
  function_6d1d70(stack_array_1e8,&local_var_228,0);
  return;
}
// 函数: void function_6d2c10(int64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
void function_6d2c10(int64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
                  char *param_5)
{
  int64_t lVar1;
  if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (param_5[lVar1] != '\0');
    (**(code **)*param_3)(param_3);
  }
  param_5._0_1_ = 0;
  (**(code **)*param_3)(param_3,&param_5,1);
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_3[4]);
  param_3[3] = 0;
  return;
}
// 函数: void function_6d2c90(void)
void function_6d2c90(void)
{
  int8_t stack_array_88 [128];
// WARNING: Subroutine does not return
  memset(stack_array_88,0,0x80);
}
// 函数: void function_6d2d50(int64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
void function_6d2d50(int64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
                  int32_t *param_5)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  puVar1 = param_5;
  puVar2 = (uint64_t *)function_6c4e00(param_3,&rendering_buffer_2208_ptr,*param_5);
  (**(code **)*puVar2)(puVar2,&system_data_c8e4,1);
  puVar2 = (uint64_t *)function_6c4e00(puVar2,&rendering_buffer_2208_ptr,puVar1[1]);
  (**(code **)*puVar2)(puVar2,&system_data_c8e4,1);
  puVar2 = (uint64_t *)function_6c4e00(puVar2,&rendering_buffer_2208_ptr,puVar1[2]);
  (**(code **)*puVar2)(puVar2,&system_data_c8e4,1);
  function_6c4e00(puVar2,&rendering_buffer_2208_ptr,puVar1[3]);
  param_5._0_1_ = 0;
  (**(code **)*param_3)(param_3,&param_5,1);
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_3[4]);
  param_3[3] = 0;
  return;
}