#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part085.c - 6 个函数
// 函数: void function_24b1b0(int64_t param_1,char param_2,char param_3)
void function_24b1b0(int64_t param_1,char param_2,char param_3)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int iVar10;
  int32_t uVar11;
  int8_t stack_array_a8 [32];
  int32_t local_var_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  int iStack_68;
  int iStack_64;
  uint64_t local_var_60;
  uint64_t local_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a8;
  lVar3 = SystemOptimizer();
  if (lVar3 != 0) {
    lVar4 = SystemOptimizer(param_1);
    lVar3 = system_main_module_state;
    iVar10 = *(int *)(param_1 + 0x3578);
    if (*(int64_t *)(lVar4 + 0x1d8) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar8 = (int64_t *)
               ((int64_t)(int)((uint)*(byte *)(lVar4 + 0x335) * iVar10) * 0x10 +
               *(int64_t *)(lVar4 + 0x1d8));
      goto LAB_18024b24e;
    }
  }
  plVar8 = (int64_t *)0x0;
  lVar3 = system_main_module_state;
LAB_18024b24e:
  plVar9 = *(int64_t **)(system_message_buffer + 0x1cd8);
  if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
    (**(code **)(*plVar9 + 0x70))(plVar9,*plVar8,1);
    lVar3 = system_main_module_state;
  }
  plVar9[0x1077] = (int64_t)plVar8;
  iVar10 = 0;
  lVar4 = 0;
  do {
    if ((uint64_t)(*(int64_t *)(param_1 + 0x96b8) - *(int64_t *)(param_1 + 0x96b0) >> 3) <=
        (uint64_t)(int64_t)iVar10) break;
    lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0x96b0) + lVar4);
    plVar8 = *(int64_t **)(lVar5 + 0x1d8);
    plVar9 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if (plVar8 != (int64_t *)0x0) {
      if (lVar3 != 0) {
        *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
      }
      if (*plVar8 != 0) {
        (**(code **)(*plVar9 + 0x70))(plVar9,*plVar8,1);
        lVar3 = system_main_module_state;
      }
    }
    *(int64_t **)((int64_t)plVar9 + lVar4 + 0x83c0) = plVar8;
    iVar10 = iVar10 + 1;
    lVar4 = lVar4 + 8;
  } while (iVar10 < 4);
  lVar3 = SystemLog_Manager(param_1);
  if (((*(char *)(param_1 + 0x20) != '\0') || (*(char *)(param_1 + 0x21) != '\0')) &&
     ((lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8), *(int64_t *)(lVar4 + 0x8550) != 0 ||
      ((*(int *)(lVar4 + 0x88c4) != -1 || (*(int *)(lVar4 + 0x8ac4) != 0x10)))))) {
    local_var_78 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x23,1,&local_var_78);
    *(uint64_t *)(lVar4 + 0x8550) = 0;
    *(int32_t *)(lVar4 + 0x88c4) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8ac4) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  plVar9 = (int64_t *)0x0;
  plVar8 = *(int64_t **)(system_message_buffer + 0x1cd8);
  if (lVar3 != 0) {
    iVar10 = *(int *)(param_1 + 0x357c);
    if (*(int64_t *)(lVar3 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar9 = (int64_t *)((int64_t)(iVar10 * 2 + 1) * 0x10 + *(int64_t *)(lVar3 + 0x1e0));
      if ((plVar9 != (int64_t *)0x0) && (*plVar9 != 0)) {
        (**(code **)(*plVar8 + 0x70))(plVar8,*plVar9,4);
      }
    }
  }
  lVar4 = system_message_buffer;
  plVar8[0x107e] = (int64_t)plVar9;
  SystemCore_ProcessorEx(*(uint64_t *)(lVar4 + 0x1cd8),
                (int)(*(int64_t *)(param_1 + 0x96b8) - *(int64_t *)(param_1 + 0x96b0) >> 3) + 1);
  if (*(int *)(param_1 + 8) == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar7 & 2) != 0) {
    local_var_80._0_1_ = 1;
    local_var_88 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,*(uint64_t *)(param_1 + 0x98d0));
    local_var_80._0_1_ = 1;
    local_var_88 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),2,0,*(uint64_t *)(param_1 + 0x98d8));
    local_var_80 = CONCAT31(local_var_80._1_3_,1);
    local_var_88 = 0xffffffff;
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),3,0,*(uint64_t *)(param_1 + 0x98e0));
    NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,0,*(uint64_t *)(param_1 + 0x98f0));
    lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar4 + 0x8558) != 0) || (*(int *)(lVar4 + 0x88c8) != -1)) ||
       (lVar5 = system_message_buffer, *(int *)(lVar4 + 0x8ac8) != 0x10)) {
      local_var_78 = 0;
      (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
                (*(int64_t **)(lVar4 + 0x8400),0x24,1,&local_var_78);
      lVar5 = system_message_buffer;
      *(uint64_t *)(lVar4 + 0x8558) = 0;
      *(int32_t *)(lVar4 + 0x88c8) = 0xffffffff;
      *(int32_t *)(lVar4 + 0x8ac8) = 0x10;
      *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
    }
    local_var_70 = 0;
    plVar8 = *(int64_t **)(*(int64_t *)(lVar5 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar8 + 0x40))(plVar8,0x42,1,&local_var_70);
  }
  local_var_60 = *(uint64_t *)(param_1 + 0x11c18);
  local_var_58 = *(uint64_t *)(param_1 + 0x11c20);
  local_var_4c = *(int32_t *)(param_1 + 0x11c2c);
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  fVar1 = *(float *)(param_1 + 0x11c24);
  plVar8 = *(int64_t **)(lVar4 + 0x8400);
  fVar2 = *(float *)(param_1 + 0x11c20);
  local_var_50 = *(int32_t *)(param_1 + 0x11c28);
  (**(code **)(*plVar8 + 0x160))(plVar8,1,&local_var_60);
  plVar8 = *(int64_t **)(lVar4 + 0x8400);
  uVar7 = 0;
  uVar6 = 0;
  local_var_70 = 0;
  iStack_68 = (int)fVar2;
  iStack_64 = (int)fVar1;
  (**(code **)(*plVar8 + 0x168))(plVar8,1,&local_var_70);
  if (param_3 == '\0') {
    if (((*(uint *)(param_1 + 4) & 1) != 0) || (*(char *)(param_1 + 0x12c0a) != '\0')) {
      uVar6 = 1;
    }
    if ((param_2 == '\x01') && ((*(uint *)(param_1 + 4) & 2) != 0)) {
      uVar6 = uVar6 | 2;
    }
    if (((((*(byte *)(param_1 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_1 + 0x1bd9) & 2) == 0))
        || (*(int *)(system_system_data_ui + 0xa10) == 0)) || (*(char *)(param_1 + 0x130) == '\0')) {
      uVar11 = 0x3f800000;
    }
    else {
      uVar11 = 0;
    }
    if (uVar6 != 0) {
      local_var_80 = 0;
      local_var_88 = 0x8a;
      UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar6,
                    *(int32_t *)(param_1 + 0x11cf0),uVar11);
    }
    lVar4 = system_message_buffer;
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x357) != '\0')) && (*(char *)(lVar3 + 0x358) == '\0'))
    {
      *(int8_t *)(lVar3 + 0x358) = 1;
      local_var_80 = 0;
      local_var_88 = 0x8a;
      UtilitiesSystem_MathCalculator(*(uint64_t *)(lVar4 + 0x1cd8),2,*(int32_t *)(param_1 + 0x11cf0),uVar11);
    }
  }
  if (*(int *)(param_1 + 8) != -1) {
    uVar7 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar7 & 2) != 0) {
    lVar3 = *(int64_t *)(param_1 + 0x98d0);
    local_var_78._0_4_ = 0xffffffff;
    lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar8 = *(int64_t **)(lVar4 + 0x8400);
    (**(code **)(*plVar8 + 0x198))(plVar8,*(uint64_t *)(lVar3 + 0x208),&local_var_78);
    lVar3 = *(int64_t *)(param_1 + 0x98d8);
    local_var_78 = (uint64_t)local_var_78._4_4_ << 0x20;
    lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar8 = *(int64_t **)(lVar4 + 0x8400);
    (**(code **)(*plVar8 + 0x198))(plVar8,*(uint64_t *)(lVar3 + 0x208),&local_var_78);
    lVar3 = *(int64_t *)(param_1 + 0x98e0);
    lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar8 = *(int64_t **)(lVar4 + 0x8400);
    (**(code **)(*plVar8 + 0x198))(plVar8,*(uint64_t *)(lVar3 + 0x208),&local_var_78);
    lVar3 = *(int64_t *)(param_1 + 0x98f0);
    lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar8 = *(int64_t **)(lVar4 + 0x8400);
    (**(code **)(*plVar8 + 0x198))(plVar8,*(uint64_t *)(lVar3 + 0x20),&local_var_78);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_a8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_24b1d0(int64_t param_1,char param_2,char param_3)
void function_24b1d0(int64_t param_1,char param_2,char param_3)
{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar11;
  uint64_t unaff_RDI;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R15;
  int32_t uVar12;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R15;
  lVar4 = SystemOptimizer();
  if (lVar4 != 0) {
    lVar5 = SystemOptimizer(param_1);
    lVar4 = system_main_module_state;
    iVar11 = *(int *)(param_1 + 0x3578);
    if (*(int64_t *)(lVar5 + 0x1d8) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar9 = (int64_t *)
               ((int64_t)(int)((uint)*(byte *)(lVar5 + 0x335) * iVar11) * 0x10 +
               *(int64_t *)(lVar5 + 0x1d8));
      goto LAB_18024b24e;
    }
  }
  plVar9 = (int64_t *)0x0;
  lVar4 = system_main_module_state;
LAB_18024b24e:
  plVar10 = *(int64_t **)(system_message_buffer + 0x1cd8);
  if ((plVar9 != (int64_t *)0x0) && (*plVar9 != 0)) {
    (**(code **)(*plVar10 + 0x70))(plVar10,*plVar9,1);
    lVar4 = system_main_module_state;
  }
  plVar10[0x1077] = (int64_t)plVar9;
  iVar11 = 0;
  lVar5 = 0;
  do {
    if ((uint64_t)(*(int64_t *)(param_1 + 0x96b8) - *(int64_t *)(param_1 + 0x96b0) >> 3) <=
        (uint64_t)(int64_t)iVar11) break;
    lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x96b0) + lVar5);
    plVar9 = *(int64_t **)(lVar6 + 0x1d8);
    plVar10 = *(int64_t **)(system_message_buffer + 0x1cd8);
    if (plVar9 != (int64_t *)0x0) {
      if (lVar4 != 0) {
        *(int64_t *)(lVar6 + 0x340) = (int64_t)*(int *)(lVar4 + 0x224);
      }
      if (*plVar9 != 0) {
        (**(code **)(*plVar10 + 0x70))(plVar10,*plVar9,1);
        lVar4 = system_main_module_state;
      }
    }
    *(int64_t **)((int64_t)plVar10 + lVar5 + 0x83c0) = plVar9;
    iVar11 = iVar11 + 1;
    lVar5 = lVar5 + 8;
  } while (iVar11 < 4);
  lVar4 = SystemLog_Manager(param_1);
  if (((*(char *)(param_1 + 0x20) != '\0') || (*(char *)(param_1 + 0x21) != '\0')) &&
     ((lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8), *(int64_t *)(lVar5 + 0x8550) != 0 ||
      ((*(int *)(lVar5 + 0x88c4) != -1 || (*(int *)(lVar5 + 0x8ac4) != 0x10)))))) {
    plVar9 = *(int64_t **)(lVar5 + 0x8400);
    *(uint64_t *)(unaff_RBP + -0x19) = 0;
    (**(code **)(*plVar9 + 0x40))(plVar9,0x23,1,unaff_RBP + -0x19);
    *(uint64_t *)(lVar5 + 0x8550) = 0;
    *(int32_t *)(lVar5 + 0x88c4) = 0xffffffff;
    *(int32_t *)(lVar5 + 0x8ac4) = 0x10;
    *(int *)(lVar5 + 0x82b4) = *(int *)(lVar5 + 0x82b4) + 1;
  }
  plVar10 = (int64_t *)0x0;
  plVar9 = *(int64_t **)(system_message_buffer + 0x1cd8);
  if (lVar4 != 0) {
    iVar11 = *(int *)(param_1 + 0x357c);
    if (*(int64_t *)(lVar4 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar10 = (int64_t *)((int64_t)(iVar11 * 2 + 1) * 0x10 + *(int64_t *)(lVar4 + 0x1e0));
      if ((plVar10 != (int64_t *)0x0) && (*plVar10 != 0)) {
        (**(code **)(*plVar9 + 0x70))(plVar9,*plVar10,4);
      }
    }
  }
  lVar5 = system_message_buffer;
  plVar9[0x107e] = (int64_t)plVar10;
  SystemCore_ProcessorEx(*(uint64_t *)(lVar5 + 0x1cd8),
                (int)(*(int64_t *)(param_1 + 0x96b8) - *(int64_t *)(param_1 + 0x96b0) >> 3) + 1);
  if (*(int *)(param_1 + 8) == -1) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar8 & 2) != 0) {
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,*(uint64_t *)(param_1 + 0x98d0),
                  0xffffffff);
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),2,0,*(uint64_t *)(param_1 + 0x98d8),
                  0xffffffff);
    CoreSystem_Initializer(*(uint64_t *)(system_message_buffer + 0x1cd8),3,0,*(uint64_t *)(param_1 + 0x98e0),
                  0xffffffff);
    NetworkSystem_DataProcessor0(*(uint64_t *)(system_message_buffer + 0x1cd8),4,0,*(uint64_t *)(param_1 + 0x98f0));
    lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
    if (((*(int64_t *)(lVar5 + 0x8558) != 0) || (*(int *)(lVar5 + 0x88c8) != -1)) ||
       (lVar6 = system_message_buffer, *(int *)(lVar5 + 0x8ac8) != 0x10)) {
      plVar9 = *(int64_t **)(lVar5 + 0x8400);
      *(uint64_t *)(unaff_RBP + -0x19) = 0;
      (**(code **)(*plVar9 + 0x40))(plVar9,0x24,1,unaff_RBP + -0x19);
      lVar6 = system_message_buffer;
      *(uint64_t *)(lVar5 + 0x8558) = 0;
      *(int32_t *)(lVar5 + 0x88c8) = 0xffffffff;
      *(int32_t *)(lVar5 + 0x8ac8) = 0x10;
      *(int *)(lVar5 + 0x82b4) = *(int *)(lVar5 + 0x82b4) + 1;
    }
    lVar5 = *(int64_t *)(lVar6 + 0x1cd8);
    *(uint64_t *)(unaff_RBP + -0x11) = 0;
    plVar9 = *(int64_t **)(lVar5 + 0x8400);
    (**(code **)(*plVar9 + 0x40))(plVar9,0x42,1,unaff_RBP + -0x11);
  }
  uVar3 = *(uint64_t *)(param_1 + 0x11c20);
  uVar12 = *(int32_t *)(param_1 + 0x11c2c);
  lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
  fVar1 = *(float *)(param_1 + 0x11c24);
  plVar9 = *(int64_t **)(lVar5 + 0x8400);
  fVar2 = *(float *)(param_1 + 0x11c20);
  *(uint64_t *)(unaff_RBP + -1) = *(uint64_t *)(param_1 + 0x11c18);
  *(uint64_t *)(unaff_RBP + 7) = uVar3;
  *(int32_t *)(unaff_RBP + 0xf) = *(int32_t *)(param_1 + 0x11c28);
  *(int32_t *)(unaff_RBP + 0x13) = uVar12;
  (**(code **)(*plVar9 + 0x160))(plVar9,1,unaff_RBP + -1);
  plVar9 = *(int64_t **)(lVar5 + 0x8400);
  *(int *)(unaff_RBP + -5) = (int)fVar1;
  uVar8 = 0;
  uVar7 = 0;
  *(uint64_t *)(unaff_RBP + -0x11) = 0;
  *(int *)(unaff_RBP + -9) = (int)fVar2;
  (**(code **)(*plVar9 + 0x168))(plVar9,1,unaff_RBP + -0x11);
  if (param_3 == '\0') {
    if (((*(uint *)(param_1 + 4) & 1) != 0) || (*(char *)(param_1 + 0x12c0a) != '\0')) {
      uVar7 = 1;
    }
    if ((param_2 == '\x01') && ((*(uint *)(param_1 + 4) & 2) != 0)) {
      uVar7 = uVar7 | 2;
    }
    if (((((*(byte *)(param_1 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_1 + 0x1bd9) & 2) == 0))
        || (*(int *)(system_system_data_ui + 0xa10) == 0)) || (*(char *)(param_1 + 0x130) == '\0')) {
      uVar12 = 0x3f800000;
    }
    else {
      uVar12 = 0;
    }
    if (uVar7 != 0) {
      UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar7,
                    *(int32_t *)(param_1 + 0x11cf0),uVar12,0x8a);
    }
    lVar5 = system_message_buffer;
    if (((lVar4 != 0) && (*(char *)(lVar4 + 0x357) != '\0')) && (*(char *)(lVar4 + 0x358) == '\0'))
    {
      *(int8_t *)(lVar4 + 0x358) = 1;
      UtilitiesSystem_MathCalculator(*(uint64_t *)(lVar5 + 0x1cd8),2,*(int32_t *)(param_1 + 0x11cf0),uVar12,0x8a
                   );
    }
  }
  lVar4 = system_message_buffer;
  if (*(int *)(param_1 + 8) != -1) {
    uVar8 = *(uint *)(param_1 + 0x18);
  }
  if ((uVar8 & 2) != 0) {
    lVar5 = *(int64_t *)(param_1 + 0x98d0);
    *(int32_t *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar4 = *(int64_t *)(lVar4 + 0x1cd8);
    *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar9 = *(int64_t **)(lVar4 + 0x8400);
    (**(code **)(*plVar9 + 0x198))(plVar9,*(uint64_t *)(lVar5 + 0x208),unaff_RBP + -0x19);
    lVar5 = system_message_buffer;
    lVar4 = *(int64_t *)(param_1 + 0x98d8);
    *(int32_t *)(unaff_RBP + -0x19) = 0;
    lVar5 = *(int64_t *)(lVar5 + 0x1cd8);
    *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar9 = *(int64_t **)(lVar5 + 0x8400);
    (**(code **)(*plVar9 + 0x198))(plVar9,*(uint64_t *)(lVar4 + 0x208),unaff_RBP + -0x19);
    lVar4 = *(int64_t *)(param_1 + 0x98e0);
    lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar9 = *(int64_t **)(lVar5 + 0x8400);
    (**(code **)(*plVar9 + 0x198))(plVar9,*(uint64_t *)(lVar4 + 0x208),unaff_RBP + -0x19);
    lVar4 = *(int64_t *)(param_1 + 0x98f0);
    lVar5 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar9 = *(int64_t **)(lVar5 + 0x8400);
    (**(code **)(*plVar9 + 0x198))(plVar9,*(uint64_t *)(lVar4 + 0x20),unaff_RBP + -0x19);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x17) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_24b635(void)
void function_24b635(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  char cVar5;
  uint unaff_EBX;
  int64_t unaff_RBP;
  char unaff_R12B;
  int64_t unaff_R14;
  int64_t unaff_R15;
  int32_t uVar6;
  cVar5 = (char)unaff_EBX;
  if (((*(uint *)(unaff_R14 + 4) & 1) != 0) ||
     (uVar4 = unaff_EBX, *(char *)(unaff_R14 + 0x12c0a) != cVar5)) {
    uVar4 = 1;
  }
  if ((unaff_R12B == '\x01') && ((*(uint *)(unaff_R14 + 4) & 2) != 0)) {
    uVar4 = uVar4 | 2;
  }
  if (((((*(byte *)(unaff_R14 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(unaff_R14 + 0x1bd9) & 2) == 0))
      || (*(uint *)(system_system_data_ui + 0xa10) == unaff_EBX)) ||
     (*(char *)(unaff_R14 + 0x130) == cVar5)) {
    uVar6 = 0x3f800000;
  }
  else {
    uVar6 = 0;
  }
  if (uVar4 != 0) {
    UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),uVar4,
                  *(int32_t *)(unaff_R14 + 0x11cf0),uVar6,0x8a);
  }
  lVar2 = system_message_buffer;
  if (((unaff_R15 != 0) && (*(char *)(unaff_R15 + 0x357) != cVar5)) &&
     (*(char *)(unaff_R15 + 0x358) == cVar5)) {
    *(int8_t *)(unaff_R15 + 0x358) = 1;
    UtilitiesSystem_MathCalculator(*(uint64_t *)(lVar2 + 0x1cd8),2,*(int32_t *)(unaff_R14 + 0x11cf0),uVar6,0x8a)
    ;
  }
  lVar2 = system_message_buffer;
  uVar4 = unaff_EBX;
  if (*(int *)(unaff_R14 + 8) != -1) {
    uVar4 = *(uint *)(unaff_R14 + 0x18);
  }
  if ((uVar4 & 2) != 0) {
    lVar1 = *(int64_t *)(unaff_R14 + 0x98d0);
    *(int32_t *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar2 = *(int64_t *)(lVar2 + 0x1cd8);
    *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar1 + 0x208),unaff_RBP + -0x19);
    lVar1 = system_message_buffer;
    lVar2 = *(int64_t *)(unaff_R14 + 0x98d8);
    *(uint *)(unaff_RBP + -0x19) = unaff_EBX;
    lVar1 = *(int64_t *)(lVar1 + 0x1cd8);
    *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(int64_t *)(unaff_R14 + 0x98e0);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(int64_t *)(unaff_R14 + 0x98f0);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x20),unaff_RBP + -0x19);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x17) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_24b662(uint64_t param_1,uint64_t param_2)
void function_24b662(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  char cVar5;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_R14;
  int64_t unaff_R15;
  bool in_ZF;
  int32_t uVar6;
  cVar5 = (char)unaff_EBX;
  if ((((in_ZF) && ((*(byte *)(unaff_R14 + 0x1bd9) & 2) == 0)) ||
      (*(uint *)(system_system_data_ui + 0xa10) == unaff_EBX)) || (*(char *)(unaff_R14 + 0x130) == cVar5))
  {
    uVar6 = 0x3f800000;
  }
  else {
    uVar6 = 0;
  }
  if ((int)param_2 != 0) {
    UtilitiesSystem_MathCalculator(*(uint64_t *)(system_message_buffer + 0x1cd8),param_2,
                  *(int32_t *)(unaff_R14 + 0x11cf0),uVar6,0x8a);
  }
  lVar2 = system_message_buffer;
  if (((unaff_R15 != 0) && (*(char *)(unaff_R15 + 0x357) != cVar5)) &&
     (*(char *)(unaff_R15 + 0x358) == cVar5)) {
    *(int8_t *)(unaff_R15 + 0x358) = 1;
    UtilitiesSystem_MathCalculator(*(uint64_t *)(lVar2 + 0x1cd8),2,*(int32_t *)(unaff_R14 + 0x11cf0),uVar6,0x8a)
    ;
  }
  lVar2 = system_message_buffer;
  uVar4 = unaff_EBX;
  if (*(int *)(unaff_R14 + 8) != -1) {
    uVar4 = *(uint *)(unaff_R14 + 0x18);
  }
  if ((uVar4 & 2) != 0) {
    lVar1 = *(int64_t *)(unaff_R14 + 0x98d0);
    *(int32_t *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar2 = *(int64_t *)(lVar2 + 0x1cd8);
    *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar1 + 0x208),unaff_RBP + -0x19);
    lVar1 = system_message_buffer;
    lVar2 = *(int64_t *)(unaff_R14 + 0x98d8);
    *(uint *)(unaff_RBP + -0x19) = unaff_EBX;
    lVar1 = *(int64_t *)(lVar1 + 0x1cd8);
    *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(int64_t *)(unaff_R14 + 0x98e0);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(int64_t *)(unaff_R14 + 0x98f0);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x20),unaff_RBP + -0x19);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x17) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_24b717(void)
void function_24b717(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint uVar4;
  uint unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_R14;
  lVar2 = system_message_buffer;
  uVar4 = unaff_EBX;
  if (*(int *)(unaff_R14 + 8) != -1) {
    uVar4 = *(uint *)(unaff_R14 + 0x18);
  }
  if ((uVar4 & 2) != 0) {
    lVar1 = *(int64_t *)(unaff_R14 + 0x98d0);
    *(int32_t *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar2 = *(int64_t *)(lVar2 + 0x1cd8);
    *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar1 + 0x208),unaff_RBP + -0x19);
    lVar1 = system_message_buffer;
    lVar2 = *(int64_t *)(unaff_R14 + 0x98d8);
    *(uint *)(unaff_RBP + -0x19) = unaff_EBX;
    lVar1 = *(int64_t *)(lVar1 + 0x1cd8);
    *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(int64_t *)(unaff_R14 + 0x98e0);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(int64_t *)(unaff_R14 + 0x98f0);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x20),unaff_RBP + -0x19);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x17) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_24b72e(void)
void function_24b72e(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int32_t unaff_EBX;
  int64_t unaff_RBP;
  int64_t unaff_R14;
  lVar2 = system_message_buffer;
  if ((*(uint *)(unaff_R14 + 0x18) & 2) != 0) {
    lVar1 = *(int64_t *)(unaff_R14 + 0x98d0);
    *(int32_t *)(unaff_RBP + -0x19) = 0xffffffff;
    lVar2 = *(int64_t *)(lVar2 + 0x1cd8);
    *(int64_t *)(lVar1 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar2 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar1 + 0x208),unaff_RBP + -0x19);
    lVar1 = system_message_buffer;
    lVar2 = *(int64_t *)(unaff_R14 + 0x98d8);
    *(int32_t *)(unaff_RBP + -0x19) = unaff_EBX;
    lVar1 = *(int64_t *)(lVar1 + 0x1cd8);
    *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(int64_t *)(unaff_R14 + 0x98e0);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int64_t *)(lVar2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x208),unaff_RBP + -0x19);
    lVar2 = *(int64_t *)(unaff_R14 + 0x98f0);
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar3 = *(int64_t **)(lVar1 + 0x8400);
    (**(code **)(*plVar3 + 0x198))(plVar3,*(uint64_t *)(lVar2 + 0x20),unaff_RBP + -0x19);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x17) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address