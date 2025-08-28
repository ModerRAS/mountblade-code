#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part069.c - 13 个函数
// 函数: void GenericFunction_1800e8362(int64_t param_1,int64_t param_2)
void GenericFunction_1800e8362(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t unaff_RSI;
  uint64_t local_var_30;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uVar5 = 0;
  *(uint64_t *)(*(int64_t *)(param_1 + 0x1cd8) + 0x83f0) = 0;
  SystemCore_ProcessorEx(*(uint64_t *)(param_1 + 0x1cd8),
                (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
  lVar1 = SystemLog_Manager();
  if (*(int *)(lVar1 + 0x160) == 5) {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  else {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  RenderingEngineCore0(uVar3,0x10,lVar1,0x10,0xffffffff);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  lVar4 = lVar1 + 0x1a0;
  if ((((*(int64_t *)(lVar2 + 0x8540) != lVar4) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
      (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
     (((lVar4 == 0 || (*(int64_t *)(lVar1 + 0x1a8) != 0)) || (*(int64_t *)(lVar1 + 0x1b0) != 0))))
  {
    local_buffer_78 = uVar5;
    if (lVar4 != 0) {
      local_buffer_78 = *(uint64_t *)(lVar1 + 0x1b0);
    }
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
              (*(int64_t **)(lVar2 + 0x8400),0x21,1,&local_buffer_00000078);
    *(int64_t *)(lVar2 + 0x8540) = lVar4;
    *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar2 + 0x8abc) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  for (; (uint64_t)(int64_t)(int)uVar5 < (uint64_t)*(uint *)(unaff_RSI + 0x2108);
      uVar5 = (uint64_t)((int)uVar5 + 1)) {
    CoreEngine_0E8640();
  }
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = system_message_buffer, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    local_buffer_80 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x10,1,&local_buffer_00000080);
    lVar2 = system_message_buffer;
    *(uint64_t *)(lVar1 + 0x84b8) = 0;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    local_buffer_88 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x21,1,&local_buffer_00000088);
    lVar2 = system_message_buffer;
    *(uint64_t *)(lVar1 + 0x8540) = 0;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    local_var_30 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),3,1,&local_buffer_00000030);
    *(uint64_t *)(lVar1 + 0x8450) = 0;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800e8367(int64_t param_1,int64_t param_2)
void GenericFunction_1800e8367(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t unaff_RSI;
  uint64_t local_var_30;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uVar5 = 0;
  *(uint64_t *)(*(int64_t *)(param_1 + 0x1cd8) + 0x83f0) = 0;
  SystemCore_ProcessorEx(*(uint64_t *)(param_1 + 0x1cd8),
                (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
  lVar1 = SystemLog_Manager();
  if (*(int *)(lVar1 + 0x160) == 5) {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  else {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  RenderingEngineCore0(uVar3,0x10,lVar1,0x10,0xffffffff);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  lVar4 = lVar1 + 0x1a0;
  if ((((*(int64_t *)(lVar2 + 0x8540) != lVar4) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
      (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
     (((lVar4 == 0 || (*(int64_t *)(lVar1 + 0x1a8) != 0)) || (*(int64_t *)(lVar1 + 0x1b0) != 0))))
  {
    local_buffer_78 = uVar5;
    if (lVar4 != 0) {
      local_buffer_78 = *(uint64_t *)(lVar1 + 0x1b0);
    }
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
              (*(int64_t **)(lVar2 + 0x8400),0x21,1,&local_buffer_00000078);
    *(int64_t *)(lVar2 + 0x8540) = lVar4;
    *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar2 + 0x8abc) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  for (; (uint64_t)(int64_t)(int)uVar5 < (uint64_t)*(uint *)(unaff_RSI + 0x2108);
      uVar5 = (uint64_t)((int)uVar5 + 1)) {
    CoreEngine_0E8640();
  }
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = system_message_buffer, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    local_buffer_80 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x10,1,&local_buffer_00000080);
    lVar2 = system_message_buffer;
    *(uint64_t *)(lVar1 + 0x84b8) = 0;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    local_buffer_88 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x21,1,&local_buffer_00000088);
    lVar2 = system_message_buffer;
    *(uint64_t *)(lVar1 + 0x8540) = 0;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    local_var_30 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),3,1,&local_buffer_00000030);
    *(uint64_t *)(lVar1 + 0x8450) = 0;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800e84a0(void)
void GenericFunction_1800e84a0(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t unaff_R14;
  uint64_t local_var_30;
  int64_t local_buffer_80;
  int64_t local_buffer_88;
  for (; (uint64_t)(int64_t)unaff_EBX < (uint64_t)*(uint *)(unaff_RSI + 0x2108);
      unaff_EBX = unaff_EBX + 1) {
    CoreEngine_0E8640();
  }
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x84b8) != unaff_R14) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = system_message_buffer, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    local_buffer_80 = unaff_R14;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x10,1,&local_buffer_00000080);
    lVar2 = system_message_buffer;
    *(int64_t *)(lVar1 + 0x84b8) = unaff_R14;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8540) != unaff_R14) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    local_buffer_88 = unaff_R14;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x21,1,&local_buffer_00000088);
    lVar2 = system_message_buffer;
    *(int64_t *)(lVar1 + 0x8540) = unaff_R14;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8450) != unaff_R14) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),3,1,&local_buffer_00000030);
    *(int64_t *)(lVar1 + 0x8450) = unaff_R14;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}
// 函数: void GenericFunction_1800e862d(void)
void GenericFunction_1800e862d(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_0E8640(int64_t param_1,int64_t param_2)
void CoreEngine_0E8640(int64_t param_1,int64_t param_2)
{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  int iVar11;
  int64_t lStackX_10;
  int64_t *plStackX_18;
  uVar1 = *(uint *)(param_2 + 0x2e0);
  DataStructure_ddd80(param_2,param_2 + 0x88);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  UltraHighFreq_DatabaseHandler1(lVar2,*(uint64_t *)(system_message_buffer + 0x1ca0),param_2 + 0x210,0x70);
  lVar10 = 0;
  if (*(char *)(param_2 + 0x322) != '\0') {
    plVar3 = *(int64_t **)(param_1 + 0xea8);
    lStackX_10 = lVar10;
    plStackX_18 = plVar3;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
      lVar6 = system_main_module_state;
      *(int32_t *)((int64_t)plVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      if (plVar3 != (int64_t *)0xfffffffffffffff0) {
        *(int32_t *)((int64_t)plVar3 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
        lStackX_10 = plVar3[3];
      }
    }
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 200))
              (*(int64_t **)(lVar2 + 0x8400),0x48,1,&lStackX_10);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  if ((uVar1 & 0x20) != 0) {
    RenderingEngineCore0(lVar2,7,*system_system_data_config,0x10,0xffffffff);
    RenderingEngineCore0(lVar2,8,system_system_data_config[1],0x10,0xffffffff);
    RenderingEngineCore0(lVar2,9,system_system_data_config[2],0x10,0xffffffff);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    DataStructure_9f830(lVar2,*(int32_t *)(param_2 + 0x30c),*(int32_t *)(param_2 + 0x2d0));
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    DataStructure_9f9b0(lVar2,*(uint64_t *)(param_2 + 0x2b8),*(int32_t *)(param_2 + 0x2d0));
  }
  InputSystem_Handler(lVar2,param_2 + 0x88);
  if ((uVar1 & 0x2000) == 0) {
    DataStructure_9db70(lVar2,*(int8_t *)(param_2 + 0xc1),
                  *(uint64_t *)(*(int64_t *)(param_2 + 0x2a8) + 0x18));
    SystemFunction_00018029dab0(lVar2,*(uint64_t *)(*(int64_t *)(param_2 + 0x2b0) + 0x18));
  }
  if ((char)uVar1 < '\0') {
    if (system_data_2846 != '\0') goto LAB_1800e8942;
    iVar11 = *(int *)(param_2 + 0x2d0);
  }
  else {
    if (((uVar1 & 0x40) == 0) && ((*(uint *)(param_2 + 0x2e0) & 0x20400) == 0)) {
      if ((uVar1 & 0x2000) == 0) {
        if (system_data_2846 == '\0') {
          (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x60))
                    (*(int64_t **)(lVar2 + 0x8400),*(int *)(param_2 + 0x2e4) * 3,0,0);
        }
      }
      else if (system_data_2846 == '\0') {
        (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x68))
                  (*(int64_t **)(lVar2 + 0x8400),*(int32_t *)(param_2 + 0x318),
                   *(int32_t *)(param_2 + 0x31c));
      }
      goto LAB_1800e8942;
    }
    uVar1 = *(uint *)(param_2 + 0x2e0);
    if ((uVar1 & 0x40) == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = (int)(*(int64_t *)(param_2 + 0x1e0) - *(int64_t *)(param_2 + 0x1d8) >> 2);
    }
    if ((uVar1 >> 10 & 1) == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)(param_2 + 0x2d0);
    }
    if ((uVar1 >> 0x11 & 1) == 0) {
      iVar11 = 1;
    }
    else {
      iVar11 = *(int *)(param_2 + 0x2d0);
    }
    if (system_data_2846 != '\0') goto LAB_1800e8942;
    iVar11 = iVar11 * iVar7 * iVar9;
  }
  (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0xa0))
            (*(int64_t **)(lVar2 + 0x8400),*(int *)(param_2 + 0x2e4) * 3,iVar11,0,0,0);
LAB_1800e8942:
  lVar6 = system_main_module_state;
  if (*(char *)(param_2 + 0x322) != '\0') {
    lVar4 = *(int64_t *)(param_1 + 0xea0);
    lVar8 = *(int64_t *)(param_1 + 0xea8);
    if ((lVar4 == 0) ||
       (*(int32_t *)(lVar4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224),
       *(int64_t *)(lVar4 + 0x10) == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar8 = lVar4;
    }
    if ((lVar8 != 0) &&
       (*(int32_t *)(lVar8 + 0x16c) = *(int32_t *)(lVar6 + 0x224), lVar8 != -0x10)) {
      *(int32_t *)(lVar8 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
      lVar10 = *(int64_t *)(lVar8 + 0x18);
    }
    lStackX_10 = lVar10;
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 200))
              (*(int64_t **)(lVar2 + 0x8400),0x48,1,&lStackX_10);
  }
  return;
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800e8a00(uint64_t param_1,int64_t param_2)
void GenericFunction_1800e8a00(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t astack_special_x_10 [3];
  uint64_t stack_array_38 [2];
  lVar1 = system_message_buffer;
  if (*(int *)(param_2 + 0x1fe0) != 0) {
    uVar6 = 0;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    SystemCore_ProcessorEx(*(uint64_t *)(lVar1 + 0x1cd8),
                  (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
    lVar1 = SystemLog_Manager(param_2);
    if (*(int *)(lVar1 + 0x160) == 5) {
      uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    }
    else {
      uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    }
    RenderingEngineCore0(uVar3,0x10,lVar1,0x10,0xffffffff);
    lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    lVar5 = lVar1 + 0x1a0;
    if ((((*(int64_t *)(lVar2 + 0x8540) != lVar5) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
        (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
       (((lVar5 == 0 || (*(int64_t *)(lVar1 + 0x1a8) != 0)) || (*(int64_t *)(lVar1 + 0x1b0) != 0))
       )) {
      astack_special_x_10[0] = uVar6;
      if (lVar5 != 0) {
        astack_special_x_10[0] = *(uint64_t *)(lVar1 + 0x1b0);
      }
      (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
                (*(int64_t **)(lVar2 + 0x8400),0x21,1,astack_special_x_10);
      *(int64_t *)(lVar2 + 0x8540) = lVar5;
      *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar2 + 0x8abc) = 0x10;
      *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
    }
    while (iVar4 = (int)uVar6, (uint64_t)(int64_t)iVar4 < (uint64_t)*(uint *)(param_2 + 0x1fe0))
    {
      CoreEngine_0E8640(param_1,*(uint64_t *)
                             (*(int64_t *)(param_2 + 0x1fe8 + (uVar6 >> 0xb) * 8) + 0x10 +
                             (uint64_t)(uint)(iVar4 + (int)(uVar6 >> 0xb) * -0x800) * 0x18));
      uVar6 = (uint64_t)(iVar4 + 1);
    }
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
       (lVar2 = system_message_buffer, *(int *)(lVar1 + 0x8a78) != 0x10)) {
      astack_special_x_10[1] = 0;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0x10,1,astack_special_x_10 + 1);
      lVar2 = system_message_buffer;
      *(uint64_t *)(lVar1 + 0x84b8) = 0;
      *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a78) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
    if (((*(int64_t *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
       (*(int *)(lVar1 + 0x8abc) != 0x10)) {
      astack_special_x_10[2] = 0;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),0x21,1,astack_special_x_10 + 2);
      lVar2 = system_message_buffer;
      *(uint64_t *)(lVar1 + 0x8540) = 0;
      *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8abc) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
    if (((*(int64_t *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
       (*(int *)(lVar1 + 0x8a44) != 0x10)) {
      stack_array_38[0] = 0;
      (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                (*(int64_t **)(lVar1 + 0x8400),3,1,stack_array_38);
      *(uint64_t *)(lVar1 + 0x8450) = 0;
      *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
      *(int32_t *)(lVar1 + 0x8a44) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800e8a22(int64_t param_1,int64_t param_2)
void GenericFunction_1800e8a22(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t unaff_RSI;
  uint64_t local_var_30;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uVar5 = 0;
  *(uint64_t *)(*(int64_t *)(param_1 + 0x1cd8) + 0x83f0) = 0;
  SystemCore_ProcessorEx(*(uint64_t *)(param_1 + 0x1cd8),
                (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
  lVar1 = SystemLog_Manager();
  if (*(int *)(lVar1 + 0x160) == 5) {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  else {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  RenderingEngineCore0(uVar3,0x10,lVar1,0x10,0xffffffff);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  lVar4 = lVar1 + 0x1a0;
  if ((((*(int64_t *)(lVar2 + 0x8540) != lVar4) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
      (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
     (((lVar4 == 0 || (*(int64_t *)(lVar1 + 0x1a8) != 0)) || (*(int64_t *)(lVar1 + 0x1b0) != 0))))
  {
    local_buffer_78 = uVar5;
    if (lVar4 != 0) {
      local_buffer_78 = *(uint64_t *)(lVar1 + 0x1b0);
    }
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
              (*(int64_t **)(lVar2 + 0x8400),0x21,1,&local_buffer_00000078);
    *(int64_t *)(lVar2 + 0x8540) = lVar4;
    *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar2 + 0x8abc) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  for (; (uint64_t)(int64_t)(int)uVar5 < (uint64_t)*(uint *)(unaff_RSI + 0x1fe0);
      uVar5 = (uint64_t)((int)uVar5 + 1)) {
    CoreEngine_0E8640();
  }
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = system_message_buffer, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    local_buffer_80 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x10,1,&local_buffer_00000080);
    lVar2 = system_message_buffer;
    *(uint64_t *)(lVar1 + 0x84b8) = 0;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    local_buffer_88 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x21,1,&local_buffer_00000088);
    lVar2 = system_message_buffer;
    *(uint64_t *)(lVar1 + 0x8540) = 0;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    local_var_30 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),3,1,&local_buffer_00000030);
    *(uint64_t *)(lVar1 + 0x8450) = 0;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800e8a27(int64_t param_1,int64_t param_2)
void GenericFunction_1800e8a27(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t unaff_RSI;
  uint64_t local_var_30;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uVar5 = 0;
  *(uint64_t *)(*(int64_t *)(param_1 + 0x1cd8) + 0x83f0) = 0;
  SystemCore_ProcessorEx(*(uint64_t *)(param_1 + 0x1cd8),
                (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
  lVar1 = SystemLog_Manager();
  if (*(int *)(lVar1 + 0x160) == 5) {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  else {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  }
  RenderingEngineCore0(uVar3,0x10,lVar1,0x10,0xffffffff);
  lVar2 = *(int64_t *)(system_message_buffer + 0x1cd8);
  *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
  lVar4 = lVar1 + 0x1a0;
  if ((((*(int64_t *)(lVar2 + 0x8540) != lVar4) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
      (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
     (((lVar4 == 0 || (*(int64_t *)(lVar1 + 0x1a8) != 0)) || (*(int64_t *)(lVar1 + 0x1b0) != 0))))
  {
    local_buffer_78 = uVar5;
    if (lVar4 != 0) {
      local_buffer_78 = *(uint64_t *)(lVar1 + 0x1b0);
    }
    (**(code **)(**(int64_t **)(lVar2 + 0x8400) + 0x40))
              (*(int64_t **)(lVar2 + 0x8400),0x21,1,&local_buffer_00000078);
    *(int64_t *)(lVar2 + 0x8540) = lVar4;
    *(int32_t *)(lVar2 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar2 + 0x8abc) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  for (; (uint64_t)(int64_t)(int)uVar5 < (uint64_t)*(uint *)(unaff_RSI + 0x1fe0);
      uVar5 = (uint64_t)((int)uVar5 + 1)) {
    CoreEngine_0E8640();
  }
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = system_message_buffer, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    local_buffer_80 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x10,1,&local_buffer_00000080);
    lVar2 = system_message_buffer;
    *(uint64_t *)(lVar1 + 0x84b8) = 0;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    local_buffer_88 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x21,1,&local_buffer_00000088);
    lVar2 = system_message_buffer;
    *(uint64_t *)(lVar1 + 0x8540) = 0;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    local_var_30 = 0;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),3,1,&local_buffer_00000030);
    *(uint64_t *)(lVar1 + 0x8450) = 0;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800e8b60(void)
void GenericFunction_1800e8b60(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t unaff_R14;
  uint64_t local_var_30;
  int64_t local_buffer_80;
  int64_t local_buffer_88;
  for (; (uint64_t)(int64_t)unaff_EBX < (uint64_t)*(uint *)(unaff_RSI + 0x1fe0);
      unaff_EBX = unaff_EBX + 1) {
    CoreEngine_0E8640();
  }
  lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x84b8) != unaff_R14) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (lVar2 = system_message_buffer, *(int *)(lVar1 + 0x8a78) != 0x10)) {
    local_buffer_80 = unaff_R14;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x10,1,&local_buffer_00000080);
    lVar2 = system_message_buffer;
    *(int64_t *)(lVar1 + 0x84b8) = unaff_R14;
    *(int32_t *)(lVar1 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8540) != unaff_R14) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    local_buffer_88 = unaff_R14;
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),0x21,1,&local_buffer_00000088);
    lVar2 = system_message_buffer;
    *(int64_t *)(lVar1 + 0x8540) = unaff_R14;
    *(int32_t *)(lVar1 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(int64_t *)(lVar2 + 0x1cd8);
  if (((*(int64_t *)(lVar1 + 0x8450) != unaff_R14) || (*(int *)(lVar1 + 0x8844) != -1)) ||
     (*(int *)(lVar1 + 0x8a44) != 0x10)) {
    (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
              (*(int64_t **)(lVar1 + 0x8400),3,1,&local_buffer_00000030);
    *(int64_t *)(lVar1 + 0x8450) = unaff_R14;
    *(int32_t *)(lVar1 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar1 + 0x8a44) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  return;
}
// 函数: void GenericFunction_1800e8ced(void)
void GenericFunction_1800e8ced(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_DataValidator(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
void CoreEngine_DataValidator(uint64_t param_1,uint64_t param_2,int param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6)
{
  int32_t uVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int iVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  iVar6 = 0x7fffffff;
  if (*(int *)(system_system_data_config + 0x310) == 0) {
    iVar6 = 0x40;
  }
  if (0 < param_3) {
    if (iVar6 <= param_3) {
      iVar2 = param_3 / iVar6 + 1;
      iVar3 = (int)(*(int64_t *)(system_context_ptr + 0x10) - *(int64_t *)(system_context_ptr + 8) >> 3);
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      iVar3 = param_3 / iVar3;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      else if (iVar6 < iVar3) {
        iVar3 = iVar6;
      }
      plVar4 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,3);
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (int64_t)&system_handler1_ptr;
      *plVar4 = (int64_t)&system_handler2_ptr;
      *(int32_t *)(plVar4 + 1) = 0;
      *plVar4 = (int64_t)&processed_var_5008_ptr;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      LOCK();
      uVar1 = (int32_t)plVar4[2];
      *(int *)(plVar4 + 2) = iVar3;
      UNLOCK();
      auVar7._0_4_ = (float)param_3 / (float)iVar3;
      iVar6 = (int)auVar7._0_4_;
      if (auVar7._0_4_ <= 0.0) {
        if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar7._0_4_)) {
          auVar8._4_4_ = auVar7._0_4_;
          auVar8._0_4_ = auVar7._0_4_;
          auVar8._8_8_ = 0;
          movmskps(uVar1,auVar8);
        }
      }
      else if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar7._0_4_)) {
        auVar7._4_4_ = auVar7._0_4_;
        auVar7._8_8_ = 0;
        movmskps(uVar1,auVar7);
      }
      lVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x58,8,3);
// WARNING: Subroutine does not return
      memset(lVar5 + 8,0,0x50);
    }
    (**(code **)(param_6 + 0x18))(0,param_3,param_6);
  }
  if (*(code **)(param_6 + 0x10) != (code *)0x0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  return;
}
// 函数: void GenericFunction_1800e92d0(int64_t param_1,uint param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_1800e92d0(int64_t param_1,uint param_2,uint64_t param_3,uint64_t param_4)
{
  if ((int)param_2 < (int)(param_2 + 0x200)) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(param_1 + 8 + (uint64_t)(param_2 >> 9) * 8) +
           (int64_t)(int)(param_2 + (param_2 >> 9) * -0x200) * 0x340,0,0x340,param_4,
           0xfffffffffffffffe);
  }
  return;
}
// 函数: void GenericFunction_1800e9360(int64_t param_1,uint param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_1800e9360(int64_t param_1,uint param_2,uint64_t param_3,uint64_t param_4)
{
  if ((int)param_2 < (int)(param_2 + 0x200)) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(param_1 + 8 + (uint64_t)(param_2 >> 9) * 8) +
           (int64_t)(int)(param_2 + (param_2 >> 9) * -0x200) * 0x2f0,0,0x2f0,param_4,
           0xfffffffffffffffe);
  }
  return;
}