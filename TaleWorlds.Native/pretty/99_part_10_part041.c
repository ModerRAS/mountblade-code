/* 函数别名定义: MemoryPoolManager */
#define MemoryPoolManager MemoryPoolManager
#include "SystemAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_10_part041.c - 14 个函数
// 函数: void UtilitiesSystem_c1cc5(int32_t param_1)
void UtilitiesSystem_c1cc5(int32_t param_1)
{
  int iVar1;
  char cVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  void *puVar4;
  int64_t *unaff_RBX;
  int *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t lVar5;
  int64_t unaff_R14;
  char cVar6;
  char *unaff_R15;
  int32_t extraout_XMM0_Da;
  uint64_t stack_special_x_20;
  uint64_t local_var_28;
  int32_t local_var_30;
  int32_t local_var_38;
  uint64_t local_var_40;
  uint64_t local_var_48;
  int32_t local_buffer_50;
  int32_t local_buffer_58;
  char *local_buffer_a8;
  do {
    param_1 = MemoryPoolManager0(param_1,in_RAX);
    lVar5 = unaff_RDI[1];
    cVar6 = (char)unaff_R15;
    local_buffer_a8 = unaff_R15;
    if ((char)unaff_RBX[9] != cVar6) {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar4 = &ui_system_data_1920_ptr;
      }
      else {
        puVar4 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                        ((int64_t *)unaff_RBX[5],puVar4,&local_buffer_000000a8);
      param_1 = extraout_XMM0_Da;
      if (((cVar2 != '\0') && (local_buffer_a8 != (char *)0x0)) && (*local_buffer_a8 != cVar6))
      {
        UtilitiesSystem_c4d50(local_buffer_a8,&stack_special_x_20);
        local_var_40 = stack_special_x_20;
        local_var_48 = local_var_28;
        local_buffer_50 = local_var_30;
        local_buffer_58 = local_var_38;
        param_1 = (**(code **)(unaff_R14 + 0x10))(unaff_RBX[6],(int)lVar5,&local_buffer_00000040);
      }
    }
    lVar5 = *unaff_RBX;
    if (*(int *)(lVar5 + 0x10) != 0) {
      uVar3 = (uint64_t)(*(int *)(lVar5 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar5 + 8) + 8 + uVar3 * 0x18) != cVar6) &&
         (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + uVar3 * 0x18) != cVar6)) {
        param_1 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
        lVar5 = *unaff_RBX;
      }
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
      lVar5 = *unaff_RBX;
    }
    *(int8_t *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      cVar2 = (char)unaff_RBX[9];
      if (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x18
                   ) == cVar6) {
        cVar2 = cVar6;
      }
      *(char *)(unaff_RBX + 9) = cVar2;
    }
    *unaff_RSI = *unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 2;
    in_RAX = *unaff_RDI;
  } while (in_RAX != 0);
  lVar5 = *unaff_RBX;
  if (*(int *)(lVar5 + 0x10) != 0) {
    uVar3 = (uint64_t)(*(int *)(lVar5 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar5 + 8) + 8 + uVar3 * 0x18) != cVar6) &&
       (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + uVar3 * 0x18) != cVar6)) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar5 = *unaff_RBX;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    lVar5 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar5 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x18)
        == cVar6) {
      cVar2 = cVar6;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}
// 函数: void UtilitiesSystem_c1df8(void)
void UtilitiesSystem_c1df8(void)
{
  uint64_t uVar1;
  char cVar2;
  int64_t *unaff_RBX;
  int64_t lVar3;
  char unaff_R15B;
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (uint64_t)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar3 + 8) + 8 + uVar1 * 0x18) != unaff_R15B) &&
       (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != unaff_R15B)) {
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
        == unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}
// 函数: void UtilitiesSystem_c1e12(uint64_t param_1,uint64_t param_2,int64_t param_3)
void UtilitiesSystem_c1e12(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  int in_EAX;
  char cVar2;
  int64_t *unaff_RBX;
  char unaff_R15B;
  if ((*(char *)(*(int64_t *)(param_3 + 8) + 8 + (uint64_t)(in_EAX - 1) * 0x18) != unaff_R15B) &&
     (*(char *)(*(int64_t *)(param_3 + 8) + 0x10 + (uint64_t)(in_EAX - 1) * 0x18) != unaff_R15B))
  {
    (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
    param_3 = *unaff_RBX;
  }
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  *(int8_t *)(unaff_RBX + 9) = 1;
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(*unaff_RBX + 8) + 0x10 + (uint64_t)(iVar1 - 1) * 0x18) ==
        unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}
// 函数: void UtilitiesSystem_c1e70(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
void UtilitiesSystem_c1e70(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
{
  int iVar1;
  char cVar2;
  uint64_t uVar3;
  int8_t uVar4;
  void *puVar5;
  int *piVar6;
  int64_t lVar7;
  int aiStackX_8 [2];
  char *pcStackX_20;
  uint64_t local_var_68;
  uint64_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  SystemCore_MemoryManager(param_1,*param_3);
  aiStackX_8[0] = 0x15c;
  piVar6 = aiStackX_8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar6 = (int *)param_1[0xb];
  }
  lVar7 = *param_4;
  while (lVar7 != 0) {
    SystemCore_MemoryManager(param_1,lVar7);
    lVar7 = param_4[1];
    pcStackX_20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      iVar1 = *(int *)(*param_1 + 0x10);
      if (iVar1 == 0) {
        puVar5 = &ui_system_data_1920_ptr;
      }
      else {
        puVar5 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))
                        ((int64_t *)param_1[5],puVar5,&pcStackX_20);
      if (((cVar2 != '\0') && (pcStackX_20 != (char *)0x0)) && (*pcStackX_20 != '\0')) {
        UtilitiesSystem_c4d50(pcStackX_20,&local_var_68);
        local_var_48 = local_var_68;
        local_var_40 = local_var_60;
        local_var_38 = local_var_58;
        local_var_30 = local_var_50;
        local_var_34 = local_var_54;
        (*(code *)param_3[2])(param_1[6],(int)lVar7,&local_var_48);
      }
    }
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar3 = (uint64_t)(*(int *)(lVar7 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
         (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
        (**(code **)(*(int64_t *)param_1[5] + 0x48))();
        lVar7 = *param_1;
      }
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      lVar7 = *param_1;
    }
    *(int8_t *)(param_1 + 9) = 1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar4 = (char)param_1[9];
      if (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar4 = 0;
      }
      *(int8_t *)(param_1 + 9) = uVar4;
    }
    *piVar6 = *piVar6 + 1;
    param_4 = param_4 + 2;
    lVar7 = *param_4;
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (uint64_t)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar4;
  }
  return;
}
// 函数: void UtilitiesSystem_c1e7e(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,
void UtilitiesSystem_c1e7e(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,
                  uint64_t param_5,int32_t param_6,int32_t param_7,uint64_t param_8,
                  uint64_t param_9,int32_t param_10,int32_t param_11)
{
  int iVar1;
  char cVar2;
  uint64_t uVar3;
  int8_t uVar4;
  void *puVar5;
  int64_t *unaff_RBX;
  int *piVar6;
  int64_t lVar7;
  int32_t uVar8;
  int32_t extraout_XMM0_Da;
  uint64_t stack_special_x_20;
  int local_buffer_90;
  char *local_buffer_a8;
  uVar8 = SystemCore_MemoryManager();
  local_buffer_90 = 0x15c;
  piVar6 = &local_buffer_00000090;
  if ((int *)unaff_RBX[0xb] != (int *)0x0) {
    piVar6 = (int *)unaff_RBX[0xb];
  }
  lVar7 = *param_4;
  while (lVar7 != 0) {
    uVar8 = SystemCore_MemoryManager(uVar8,lVar7);
    lVar7 = param_4[1];
    local_buffer_a8 = (char *)0x0;
    if ((char)unaff_RBX[9] != '\0') {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar5 = &ui_system_data_1920_ptr;
      }
      else {
        puVar5 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                        ((int64_t *)unaff_RBX[5],puVar5,&local_buffer_000000a8);
      uVar8 = extraout_XMM0_Da;
      if (((cVar2 != '\0') && (local_buffer_a8 != (char *)0x0)) && (*local_buffer_a8 != '\0')) {
        UtilitiesSystem_c4d50(local_buffer_a8,&stack_special_x_20);
        param_8 = stack_special_x_20;
        param_9 = param_5;
        param_10 = param_6;
        param_11 = param_7;
        uVar8 = (**(code **)(param_3 + 0x10))(unaff_RBX[6],(int)lVar7,&param_8);
      }
    }
    lVar7 = *unaff_RBX;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar3 = (uint64_t)(*(int *)(lVar7 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
         (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
        uVar8 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
        lVar7 = *unaff_RBX;
      }
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      lVar7 = *unaff_RBX;
    }
    *(int8_t *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar4 = (char)unaff_RBX[9];
      if (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar4 = 0;
      }
      *(int8_t *)(unaff_RBX + 9) = uVar4;
    }
    *piVar6 = *piVar6 + 1;
    param_4 = param_4 + 2;
    lVar7 = *param_4;
  }
  lVar7 = *unaff_RBX;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (uint64_t)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar7 = *unaff_RBX;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (int8_t)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 0x10 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(unaff_RBX + 9) = uVar4;
  }
  return;
}
// 函数: void UtilitiesSystem_c1ec5(int32_t param_1)
void UtilitiesSystem_c1ec5(int32_t param_1)
{
  int iVar1;
  char cVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  void *puVar4;
  int64_t *unaff_RBX;
  int *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t lVar5;
  int64_t unaff_R14;
  char cVar6;
  char *unaff_R15;
  int32_t extraout_XMM0_Da;
  uint64_t stack_special_x_20;
  uint64_t local_var_28;
  int32_t local_var_30;
  int32_t local_var_38;
  uint64_t local_var_40;
  uint64_t local_var_48;
  int32_t local_buffer_50;
  int32_t local_buffer_58;
  char *local_buffer_a8;
  do {
    param_1 = SystemCore_MemoryManager(param_1,in_RAX);
    lVar5 = unaff_RDI[1];
    cVar6 = (char)unaff_R15;
    local_buffer_a8 = unaff_R15;
    if ((char)unaff_RBX[9] != cVar6) {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar4 = &ui_system_data_1920_ptr;
      }
      else {
        puVar4 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x10))
                        ((int64_t *)unaff_RBX[5],puVar4,&local_buffer_000000a8);
      param_1 = extraout_XMM0_Da;
      if (((cVar2 != '\0') && (local_buffer_a8 != (char *)0x0)) && (*local_buffer_a8 != cVar6))
      {
        UtilitiesSystem_c4d50(local_buffer_a8,&stack_special_x_20);
        local_var_40 = stack_special_x_20;
        local_var_48 = local_var_28;
        local_buffer_50 = local_var_30;
        local_buffer_58 = local_var_38;
        param_1 = (**(code **)(unaff_R14 + 0x10))(unaff_RBX[6],(int)lVar5,&local_buffer_00000040);
      }
    }
    lVar5 = *unaff_RBX;
    if (*(int *)(lVar5 + 0x10) != 0) {
      uVar3 = (uint64_t)(*(int *)(lVar5 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar5 + 8) + 8 + uVar3 * 0x18) != cVar6) &&
         (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + uVar3 * 0x18) != cVar6)) {
        param_1 = (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
        lVar5 = *unaff_RBX;
      }
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
      lVar5 = *unaff_RBX;
    }
    *(int8_t *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      cVar2 = (char)unaff_RBX[9];
      if (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x18
                   ) == cVar6) {
        cVar2 = cVar6;
      }
      *(char *)(unaff_RBX + 9) = cVar2;
    }
    *unaff_RSI = *unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 2;
    in_RAX = *unaff_RDI;
  } while (in_RAX != 0);
  lVar5 = *unaff_RBX;
  if (*(int *)(lVar5 + 0x10) != 0) {
    uVar3 = (uint64_t)(*(int *)(lVar5 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar5 + 8) + 8 + uVar3 * 0x18) != cVar6) &&
       (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + uVar3 * 0x18) != cVar6)) {
      (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
      lVar5 = *unaff_RBX;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    lVar5 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar5 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 0x10 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x18)
        == cVar6) {
      cVar2 = cVar6;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}
// 函数: void UtilitiesSystem_c1ff8(void)
void UtilitiesSystem_c1ff8(void)
{
  uint64_t uVar1;
  char cVar2;
  int64_t *unaff_RBX;
  int64_t lVar3;
  char unaff_R15B;
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (uint64_t)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar3 + 8) + 8 + uVar1 * 0x18) != unaff_R15B) &&
       (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != unaff_R15B)) {
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
        == unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}
// 函数: void UtilitiesSystem_c2012(uint64_t param_1,uint64_t param_2,int64_t param_3)
void UtilitiesSystem_c2012(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int iVar1;
  int in_EAX;
  char cVar2;
  int64_t *unaff_RBX;
  char unaff_R15B;
  if ((*(char *)(*(int64_t *)(param_3 + 8) + 8 + (uint64_t)(in_EAX - 1) * 0x18) != unaff_R15B) &&
     (*(char *)(*(int64_t *)(param_3 + 8) + 0x10 + (uint64_t)(in_EAX - 1) * 0x18) != unaff_R15B))
  {
    (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
    param_3 = *unaff_RBX;
  }
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  *(int8_t *)(unaff_RBX + 9) = 1;
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(int64_t *)(*unaff_RBX + 8) + 0x10 + (uint64_t)(iVar1 - 1) * 0x18) ==
        unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}
// 函数: void UtilitiesSystem_c2070(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
void UtilitiesSystem_c2070(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
{
  int iVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int *piVar4;
  void *puVar5;
  int aiStackX_8 [2];
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  int32_t local_var_2c;
  int32_t local_var_28;
  int32_t local_var_24;
  int32_t local_var_20;
  SystemValidator(param_1,*param_3);
  aiStackX_8[0] = 0x15c;
  piVar4 = aiStackX_8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar4 = (int *)param_1[5];
  }
  lVar3 = *param_4;
  while (lVar3 != 0) {
    SystemValidator(param_1,lVar3);
    puVar2 = (int32_t *)(*(code *)param_3[3])(&local_var_38,param_1[2],(int)param_4[1]);
    local_var_38 = *puVar2;
    local_var_34 = puVar2[1];
    local_var_30 = puVar2[2];
    local_var_2c = puVar2[3];
    local_var_28 = puVar2[4];
    local_var_24 = puVar2[5];
    local_var_20 = puVar2[6];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &ui_system_data_1920_ptr;
    }
    else {
      puVar5 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
    }
    UtilitiesSystem_d2e60(param_1[1],param_1[4],param_1[3],puVar5,&local_var_38);
    lVar3 = *param_1;
    if (*(int *)(lVar3 + 0x10) != 0) {
      if (*(char *)(*(int64_t *)(lVar3 + 8) + 8 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(int64_t *)param_1[1] + 0x20))();
        lVar3 = *param_1;
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    }
    *piVar4 = *piVar4 + 1;
    param_4 = param_4 + 2;
    lVar3 = *param_4;
  }
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar3 + 8) + 8 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar3 = *param_1;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  return;
}
// 函数: void UtilitiesSystem_c207e(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,
void UtilitiesSystem_c207e(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t *param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                  int32_t param_9,int32_t param_10,int32_t param_11,uint64_t param_12,
                  uint64_t param_13,int param_14)
{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t in_RAX;
  int32_t *puVar6;
  int64_t lVar7;
  int64_t *unaff_RBX;
  uint64_t unaff_RSI;
  int *piVar8;
  uint64_t unaff_RDI;
  void *puVar9;
  uint64_t unaff_R14;
  int32_t uVar10;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  *(uint64_t *)(in_RAX + 0x20) = unaff_R14;
  uVar10 = SystemValidator();
  param_14 = 0x15c;
  piVar8 = &param_14;
  if ((int *)unaff_RBX[5] != (int *)0x0) {
    piVar8 = (int *)unaff_RBX[5];
  }
  lVar7 = *param_4;
  uVar4 = unaff_XMM6_Dc;
  uVar5 = unaff_XMM6_Da;
  uVar2 = param_10;
  uVar3 = param_11;
  while (param_10 = uVar5, param_11 = uVar4, lVar7 != 0) {
    SystemValidator(uVar10,lVar7);
    puVar6 = (int32_t *)(**(code **)(param_3 + 0x18))(&param_6,unaff_RBX[2],(int)param_4[1]);
    param_6._0_4_ = *puVar6;
    param_6._4_4_ = puVar6[1];
    param_7._0_4_ = puVar6[2];
    param_7._4_4_ = puVar6[3];
    param_8._0_4_ = puVar6[4];
    param_8._4_4_ = puVar6[5];
    param_9 = puVar6[6];
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x10);
    }
    uVar10 = UtilitiesSystem_d2e60(unaff_RBX[1],unaff_RBX[4],unaff_RBX[3],puVar9,&param_6);
    lVar7 = *unaff_RBX;
    if (*(int *)(lVar7 + 0x10) != 0) {
      if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10)
          != '\0') {
        uVar10 = (**(code **)(*(int64_t *)unaff_RBX[1] + 0x20))();
        lVar7 = *unaff_RBX;
      }
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    }
    *piVar8 = *piVar8 + 1;
    param_4 = param_4 + 2;
    uVar4 = param_11;
    uVar5 = param_10;
    uVar2 = param_10;
    uVar3 = param_11;
    lVar7 = *param_4;
  }
  lVar7 = *unaff_RBX;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      param_10 = uVar2;
      param_11 = uVar3;
      (**(code **)(*(int64_t *)unaff_RBX[1] + 0x20))();
      lVar7 = *unaff_RBX;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return;
}
// 函数: void UtilitiesSystem_c20b9(int32_t param_1)
void UtilitiesSystem_c20b9(int32_t param_1)
{
  int iVar1;
  int64_t in_RAX;
  int32_t *puVar2;
  int64_t lVar3;
  int64_t *unaff_RBX;
  int *unaff_RSI;
  int64_t *unaff_RDI;
  void *puVar4;
  int64_t unaff_R14;
  int32_t local_var_30;
  int32_t local_buffer_34;
  int32_t local_var_38;
  int32_t local_buffer_3c;
  int32_t local_var_40;
  int32_t local_buffer_44;
  int32_t local_var_48;
  do {
    SystemValidator(param_1,in_RAX);
    puVar2 = (int32_t *)
             (**(code **)(unaff_R14 + 0x18))(&local_buffer_00000030,unaff_RBX[2],(int)unaff_RDI[1]);
    local_var_30 = *puVar2;
    local_buffer_34 = puVar2[1];
    local_var_38 = puVar2[2];
    local_buffer_3c = puVar2[3];
    local_var_40 = puVar2[4];
    local_buffer_44 = puVar2[5];
    local_var_48 = puVar2[6];
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar4 = &ui_system_data_1920_ptr;
    }
    else {
      puVar4 = *(void **)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x10);
    }
    param_1 = UtilitiesSystem_d2e60(unaff_RBX[1],unaff_RBX[4],unaff_RBX[3],puVar4,&local_buffer_00000030);
    lVar3 = *unaff_RBX;
    if (*(int *)(lVar3 + 0x10) != 0) {
      if (*(char *)(*(int64_t *)(lVar3 + 8) + 8 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x10)
          != '\0') {
        param_1 = (**(code **)(*(int64_t *)unaff_RBX[1] + 0x20))();
        lVar3 = *unaff_RBX;
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    }
    *unaff_RSI = *unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 2;
    in_RAX = *unaff_RDI;
  } while (in_RAX != 0);
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar3 + 8) + 8 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)unaff_RBX[1] + 0x20))();
      lVar3 = *unaff_RBX;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  return;
}
// 函数: void UtilitiesSystem_c2183(void)
void UtilitiesSystem_c2183(void)
{
  int64_t lVar1;
  int64_t *unaff_RBX;
  lVar1 = *unaff_RBX;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar1 + 8) + 8 + (uint64_t)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)unaff_RBX[1] + 0x20))();
      lVar1 = *unaff_RBX;
    }
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
  }
  return;
}
// 函数: void UtilitiesSystem_c21a2(uint64_t param_1,int64_t param_2)
void UtilitiesSystem_c21a2(uint64_t param_1,int64_t param_2)
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
// 函数: void UtilitiesSystem_c21d0(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
void UtilitiesSystem_c21d0(int64_t *param_1,uint64_t param_2,uint64_t *param_3,int64_t *param_4)
{
  int iVar1;
  char cVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int8_t uVar5;
  void *puVar6;
  int *piVar7;
  int64_t lVar8;
  int aiStackX_8 [2];
  char *pcStackX_20;
  MemoryPoolManager0(param_1,*param_3);
  aiStackX_8[0] = 0x16c;
  piVar7 = aiStackX_8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar7 = (int *)param_1[0xb];
  }
  lVar8 = *param_4;
  while (lVar8 != 0) {
    MemoryPoolManager0(param_1,lVar8);
    lVar8 = param_4[1];
    pcStackX_20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      iVar1 = *(int *)(*param_1 + 0x10);
      if (iVar1 == 0) {
        puVar6 = &ui_system_data_1920_ptr;
      }
      else {
        puVar6 = *(void **)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(int64_t *)param_1[5] + 0x10))
                        ((int64_t *)param_1[5],puVar6,&pcStackX_20);
      if (((cVar2 != '\0') && (pcStackX_20 != (char *)0x0)) && (*pcStackX_20 != '\0')) {
        uVar3 = UtilitiesSystem_d5410(pcStackX_20,&system_data_05d0);
        (*(code *)param_3[2])(param_1[6],(int)lVar8,uVar3);
      }
    }
    lVar8 = *param_1;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar4 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
      if ((*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
         (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
        (**(code **)(*(int64_t *)param_1[5] + 0x48))();
        lVar8 = *param_1;
      }
      *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
      lVar8 = *param_1;
    }
    *(int8_t *)(param_1 + 9) = 1;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar5 = (char)param_1[9];
      if (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(int8_t *)(param_1 + 9) = uVar5;
    }
    *piVar7 = *piVar7 + 1;
    param_4 = param_4 + 2;
    lVar8 = *param_4;
  }
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar4 = (uint64_t)(*(int *)(lVar8 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar8 = *param_1;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
    lVar8 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar5 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar8 + 8) + 0x10 + (uint64_t)(*(int *)(lVar8 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar5;
  }
  return;
}