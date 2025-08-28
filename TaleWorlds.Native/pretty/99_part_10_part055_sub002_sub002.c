#include "SystemAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_10_part055_sub002_sub002.c - 1 个函数
// 函数: void function_6ce700(int64_t param_1,int64_t *param_2,int32_t param_3)
void function_6ce700(int64_t param_1,int64_t *param_2,int32_t param_3)
{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void *puVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int aiStackX_8 [2];
  int *piStackX_10;
  int32_t stack_special_x_18;
  int8_t stack_array_278 [576];
  stack_special_x_18 = param_3;
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x1d8));
  aiStackX_8[0] = 0x16c;
  piStackX_10 = aiStackX_8;
  if ((int *)param_2[5] != (int *)0x0) {
    piStackX_10 = (int *)param_2[5];
  }
  if (system_system_buffer_config != 0) {
    plVar7 = (int64_t *)&system_data_0560;
    lVar3 = system_system_buffer_config;
    do {
      SystemValidator(param_2,lVar3);
      iVar2 = (**(code **)(param_1 + 0x1f0))(param_2[2],(int)plVar7[1]);
      lVar3 = *param_2;
      if (*(int *)(lVar3 + 0x10) == 0) {
        puVar5 = &ui_system_data_1920_ptr;
      }
      else {
        puVar5 = *(void **)
                  (*(int64_t *)(lVar3 + 8) + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x10);
      }
      plVar4 = (int64_t *)&system_data_05d0;
      plVar6 = (int64_t *)param_2[1];
      if (system_system_buffer_config != 0) {
        do {
          if ((int)plVar4[1] == iVar2) {
            (**(code **)(*plVar6 + 0x10))(plVar6,puVar5,*plVar4);
          }
          plVar4 = plVar4 + 2;
        } while (*plVar4 != 0);
        lVar3 = *param_2;
        plVar6 = (int64_t *)param_2[1];
      }
      if (*(int *)(lVar3 + 0x10) != 0) {
        if (*(char *)(*(int64_t *)(lVar3 + 8) + 8 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*plVar6 + 0x20))(plVar6);
          lVar3 = *param_2;
        }
        *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
      }
      plVar7 = plVar7 + 2;
      *piStackX_10 = *piStackX_10 + 1;
      lVar3 = *plVar7;
    } while (lVar3 != 0);
  }
  lVar3 = *param_2;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar3 + 8) + 8 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar3 = *param_2;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  SystemValidator(param_2,*(uint64_t *)(param_1 + 600));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
// WARNING: Subroutine does not return
  memset(stack_array_278,0,0xc0);
}
int function_6cf000(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int16_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void *puVar9;
  void *puVar10;
  int32_t uVar11;
  int8_t astack_special_x_18 [8];
  function_6bffb0(param_2,param_1);
  function_6c2070(param_2,param_3 + 1,param_1 + 0x30,0x180be0530,astack_special_x_18);
  function_6c0450(param_2,param_1 + 0x98,param_3 + 5);
  pcVar5 = *(code **)(param_1 + 0xd8);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 200));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = (int16_t *)(*pcVar5)(astack_special_x_18,param_2[2]);
  puVar10 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar9,*puVar6,0x180be0430);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0xf8);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xe8));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar11);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x118);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x108));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar11);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x138);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x128));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar11);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x158);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x148));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar11);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 8 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 400);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x180));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar7 = (*pcVar5)(param_2[2]);
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
  return param_3 + 0xf;
}
int function_6cf480(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int32_t *puVar6;
  int64_t lVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  int8_t astack_special_x_18 [16];
  pcVar5 = *(code **)(param_1 + 0x50);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  puVar9 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x70);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = (int32_t *)(*pcVar5)(astack_special_x_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar9,*puVar6,0x180be0740);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 2;
}
int function_6cf610(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int16_t *puVar6;
  int64_t lVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  int8_t astack_special_x_18 [8];
  pcVar5 = *(code **)(param_1 + 0x200);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x1f0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  puVar9 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x220);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x210));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x240);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x230));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x260);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x250));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x280);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x270));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar10);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x2a0);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x290));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = (int16_t *)(*pcVar5)(astack_special_x_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar9,*puVar6,0x180be0680);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 8;
}
int function_6cfa80(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t astack_special_x_18 [16];
  pcVar5 = *(code **)(param_1 + 0x1e8);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x1d8));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar7 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x208);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x1f8));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 3;
}
int function_6cfc40(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  char cVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int8_t *puVar10;
  void *puVar11;
  void *puVar12;
  int32_t uVar13;
  int8_t astack_special_x_8 [8];
  void *plocal_var_68;
  int64_t lStack_60;
  int64_t lStack_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  lStack_60 = *param_1;
  lStack_58 = param_1[1];
  local_var_50 = *(int32_t *)(param_1 + 2);
  local_var_4c = *(int32_t *)((int64_t)param_1 + 0x14);
  local_var_48 = *(int32_t *)(param_1 + 3);
  local_var_44 = *(int32_t *)((int64_t)param_1 + 0x1c);
  SystemValidator(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar7 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  puVar12 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  plVar3 = (int64_t *)param_2[4];
  plVar4 = (int64_t *)param_2[1];
  if (lVar7 != 0) {
    cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar7);
    if (cVar6 == '\0') {
      uVar8 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar8,0x20,&ui_system_data_1424_ptr,0x32,&ui_system_data_1328_ptr,puVar11);
    }
  }
  lVar9 = 0;
  if (lVar7 != 0) {
    lVar9 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar7);
    if (lVar9 == 0) {
      lVar9 = lVar7;
    }
  }
  plocal_var_68 = &processed_var_9192_ptr;
  lStack_60 = lVar7;
  lStack_58 = lVar9;
  (**(code **)(*plVar4 + 8))(plVar4,puVar11,&plocal_var_68);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 6);
  local_var_4c = *(int32_t *)((int64_t)param_1 + 0x34);
  local_var_48 = *(int32_t *)(param_1 + 7);
  local_var_44 = *(int32_t *)((int64_t)param_1 + 0x3c);
  SystemValidator(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar13 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar5 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar5,uVar13);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar5)(puVar5,astack_special_x_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar11,puVar5[4]);
  puVar5[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 10);
  local_var_4c = *(int32_t *)((int64_t)param_1 + 0x54);
  local_var_48 = *(int32_t *)(param_1 + 0xb);
  local_var_44 = *(int32_t *)((int64_t)param_1 + 0x5c);
  SystemValidator(param_2,param_1[8]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar13 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar5 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar5,uVar13);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar5)(puVar5,astack_special_x_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar11,puVar5[4]);
  puVar5[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0xe);
  local_var_4c = *(int32_t *)((int64_t)param_1 + 0x74);
  local_var_48 = *(int32_t *)(param_1 + 0xf);
  local_var_44 = *(int32_t *)((int64_t)param_1 + 0x7c);
  SystemValidator(param_2,param_1[0xc]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar13 = (*(code *)CONCAT44(local_var_4c,local_var_50))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar5 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar5,uVar13);
  astack_special_x_8[0] = 0;
  (**(code **)*puVar5)(puVar5,astack_special_x_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar11,puVar5[4]);
  puVar5[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  local_var_50 = *(int32_t *)(param_1 + 0x12);
  local_var_4c = *(int32_t *)((int64_t)param_1 + 0x94);
  local_var_48 = *(int32_t *)(param_1 + 0x13);
  local_var_44 = *(int32_t *)((int64_t)param_1 + 0x9c);
  SystemValidator(param_2,param_1[0x10]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar10 = (int8_t *)(*(code *)CONCAT44(local_var_4c,local_var_50))(astack_special_x_8,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar12 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar12,*puVar10,0x180be0510);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 5;
}
int function_6d0030(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t astack_special_x_18 [16];
  pcVar5 = *(code **)(param_1 + 0xb0);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar7 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0xd0);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xc0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 2;
}
int function_6d01f0(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t astack_special_x_18 [8];
  pcVar5 = (code *)param_1[2];
  SystemValidator(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar8 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar7 = &ui_system_data_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = (code *)param_1[6];
  SystemValidator(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar7 = &ui_system_data_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = (code *)param_1[10];
  SystemValidator(param_2,param_1[8]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar7 = &ui_system_data_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = (code *)param_1[0xe];
  SystemValidator(param_2,param_1[0xc]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar7 = &ui_system_data_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = (code *)param_1[0x12];
  SystemValidator(param_2,param_1[0x10]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 5;
}
int function_6d05b0(int64_t param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t astack_special_x_18 [8];
  pcVar5 = *(code **)(param_1 + 0xb0);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar7 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0xd0);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xc0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0xf0);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x110);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x100));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar3,uVar9);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 4;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int function_6d08f0(int64_t param_1,int64_t *param_2,int param_3)
{
  int *piVar1;
  uint64_t *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int16_t *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  void *puVar10;
  void *puVar11;
  int64_t *plVar12;
  int32_t uVar13;
  uint astack_special_x_8 [2];
  pcVar3 = *(code **)(param_1 + 0x28);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x18));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar13 = (*pcVar3)(param_2[2]);
  puVar10 = &ui_system_data_1920_ptr;
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar12 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar13);
  astack_special_x_8[0] = astack_special_x_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar12 + 0x10))(plVar12,puVar11,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0x48);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x38));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar13 = (*pcVar3)(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar12 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar13);
  astack_special_x_8[0] = astack_special_x_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar12 + 0x10))(plVar12,puVar11,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0x68);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x58));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar13 = (*pcVar3)(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar12 = (int64_t *)param_2[1];
  SystemCore_CleanupManager(puVar2,uVar13);
  astack_special_x_8[0] = astack_special_x_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,astack_special_x_8,1);
  (**(code **)(*plVar12 + 0x10))(plVar12,puVar11,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0x88);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x78));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar6 = (int16_t *)(*pcVar3)(astack_special_x_8,param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  function_6d82a0(param_2[1],param_2[3],puVar11,*puVar6,0x180be00c0);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0xa8);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0x98));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  astack_special_x_8[0] = (*pcVar3)(param_2[2]);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)
               (*(int64_t *)(lVar7 + 8) + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
  }
  plVar8 = (int64_t *)&system_data_0100;
  plVar12 = (int64_t *)param_2[1];
  plVar9 = (int64_t *)&system_data_0100;
  uVar4 = astack_special_x_8[0];
  if (system_system_buffer_config != 0) {
    do {
      if (*(uint *)(plVar9 + 1) == uVar4) {
        (**(code **)(*plVar12 + 0x10))(plVar12,puVar11,*plVar9);
        uVar4 = astack_special_x_8[0];
      }
      plVar9 = plVar9 + 2;
    } while (*plVar9 != 0);
    plVar12 = (int64_t *)param_2[1];
    lVar7 = *param_2;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*plVar12 + 0x20))(plVar12);
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 200);
  SystemValidator(param_2,*(uint64_t *)(param_1 + 0xb8));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar5 = (*pcVar3)(param_2[2]);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    puVar10 = *(void **)
               (*(int64_t *)(lVar7 + 8) + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
  }
  plVar12 = (int64_t *)param_2[1];
  if (system_system_buffer_config != 0) {
    do {
      if ((int)plVar8[1] == iVar5) {
        (**(code **)(*plVar12 + 0x10))(plVar12,puVar10,*plVar8);
      }
      plVar8 = plVar8 + 2;
    } while (*plVar8 != 0);
    lVar7 = *param_2;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 9;
}
int function_6d0d40(uint64_t *param_1,int64_t *param_2,int param_3)
{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  int8_t astack_special_x_18 [16];
  int32_t local_var_78;
  int32_t local_var_74;
  int32_t local_var_70;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  local_var_40 = *(int32_t *)(param_1 + 2);
  local_var_3c = *(int32_t *)((int64_t)param_1 + 0x14);
  local_var_38 = *(int32_t *)(param_1 + 3);
  local_var_34 = *(int32_t *)((int64_t)param_1 + 0x1c);
  SystemValidator(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(local_var_3c,local_var_40))(&local_var_68,param_2[2]);
  puVar8 = &ui_system_data_1920_ptr;
  local_var_78 = *puVar5;
  local_var_74 = puVar5[1];
  local_var_70 = puVar5[2];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar7 = &ui_system_data_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  function_6d3290(puVar3,&local_var_78);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  local_var_40 = *(int32_t *)(param_1 + 6);
  local_var_3c = *(int32_t *)((int64_t)param_1 + 0x34);
  local_var_38 = *(int32_t *)(param_1 + 7);
  local_var_34 = *(int32_t *)((int64_t)param_1 + 0x3c);
  SystemValidator(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(local_var_3c,local_var_40))(&local_var_78,param_2[2]);
  local_var_68 = *puVar5;
  local_var_64 = puVar5[1];
  local_var_60 = puVar5[2];
  local_var_5c = puVar5[3];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  function_6d3200(puVar3,&local_var_68);
  astack_special_x_18[0] = 0;
  (**(code **)*puVar3)(puVar3,astack_special_x_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 2;
}