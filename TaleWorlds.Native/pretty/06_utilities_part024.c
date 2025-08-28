#include "TaleWorlds.Native.Split.h"
// 06_utilities_part024.c - 5 个函数
// 函数: void function_89e811(void)
void function_89e811(void)
{
  return;
}
uint64_t function_89e820(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int32_t uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint astack_special_x_18 [2];
  char cStackX_20;
  char acStack_a8 [4];
  uint local_var_a4;
  int8_t stack_array_a0 [40];
  int8_t stack_array_78 [32];
  int8_t stack_array_58 [32];
  uVar6 = 1;
  uVar4 = DataFlowProcessor(param_2,stack_array_58,1,0x4e415254);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = DataFlowProcessor(param_2,stack_array_78,0,0x424e5254);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  lVar1 = *param_2;
  uVar3 = SystemErrorHandler(lVar1,param_1 + 0x10,4);
  uVar4 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    uVar3 = SystemErrorHandler(lVar1,param_1 + 0x14,2);
    uVar4 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar3 = SystemErrorHandler(lVar1,param_1 + 0x16,2);
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar3 = SystemErrorHandler(lVar1,param_1 + 0x18,8);
        uVar4 = (uint64_t)uVar3;
      }
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = SystemCore_ConfigManager(param_2,param_1 + 0x20);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*param_2,param_1 + 0x30,4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*param_2,param_1 + 0x34);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  uVar4 = function_8ad130(param_1,param_2);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = CoreSystem_StateManager(param_2,param_1 + 0x50);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemConfigManager(*param_2,param_1 + 0x58);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  uVar3 = *(uint *)(param_2 + 8);
  if (0x7e < uVar3) goto LAB_18089ed1b;
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar2 = (int64_t *)*param_2;
  if (*plVar2 == 0) {
    uVar4 = 0x1c;
  }
  else if (plVar2[2] == 0) {
LAB_18089ea0f:
    uVar4 = SystemDataAnalyzer(*plVar2,stack_array_a0,1,4,0);
  }
  else {
    astack_special_x_18[0] = 0;
    uVar4 = Function_49365015(*plVar2,astack_special_x_18);
    if ((int)uVar4 == 0) {
      if ((uint64_t)astack_special_x_18[0] + 4 <= (uint64_t)plVar2[2]) goto LAB_18089ea0f;
      uVar4 = 0x11;
    }
  }
  uVar5 = 0;
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  bVar7 = *(uint *)(param_2 + 8) < 0x34;
  cStackX_20 = (char)uVar4;
  astack_special_x_18[0] = CONCAT31(astack_special_x_18[0]._1_3_,cStackX_20);
  bVar9 = false;
  if (0x37 < *(uint *)(param_2 + 8)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*param_2;
      if (*plVar2 == 0) {
        uVar3 = 0x1c;
LAB_18089eaae:
        bVar8 = uVar3 == 0;
        if (bVar8) {
          bVar7 = acStack_a8[0] != '\0';
          bVar8 = true;
        }
      }
      else {
        if (plVar2[2] == 0) {
LAB_18089ea93:
          uVar3 = SystemDataAnalyzer(*plVar2,acStack_a8,1,1,0);
          goto LAB_18089eaae;
        }
        local_var_a4 = 0;
        uVar3 = Function_49365015(*plVar2,&local_var_a4);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          if ((uint64_t)plVar2[2] < (uint64_t)local_var_a4 + 1) {
            uVar3 = 0x11;
            goto LAB_18089eaae;
          }
          goto LAB_18089ea93;
        }
      }
      uVar5 = (uint64_t)uVar3;
      if (bVar8) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0x1c;
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar4 = 0;
  if (0x66 < *(uint *)(param_2 + 8)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*param_2;
      if (*plVar2 == 0) {
        uVar3 = 0x1c;
      }
      else if (plVar2[2] == 0) {
LAB_18089eb22:
        uVar3 = SystemDataAnalyzer(*plVar2,acStack_a8,1,1,0);
      }
      else {
        local_var_a4 = 0;
        uVar3 = Function_49365015(*plVar2,&local_var_a4);
        if (uVar3 == 0) {
          if ((uint64_t)local_var_a4 + 1 <= (uint64_t)plVar2[2]) goto LAB_18089eb22;
          uVar3 = 0x11;
        }
      }
      if (uVar3 == 0) {
        astack_special_x_18[0] = CONCAT31(astack_special_x_18[0]._1_3_,acStack_a8[0] != '\0');
      }
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = 0;
  if (0x78 < *(uint *)(param_2 + 8)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*param_2;
      if (*plVar2 == 0) {
        uVar3 = 0x1c;
      }
      else if (plVar2[2] == 0) {
LAB_18089ebaa:
        uVar3 = SystemDataAnalyzer(*plVar2,acStack_a8,1,1,0);
      }
      else {
        local_var_a4 = 0;
        uVar3 = Function_49365015(*plVar2,&local_var_a4);
        if (uVar3 == 0) {
          if ((uint64_t)local_var_a4 + 1 <= (uint64_t)plVar2[2]) goto LAB_18089ebaa;
          uVar3 = 0x11;
        }
      }
      if (uVar3 == 0) {
        cStackX_20 = acStack_a8[0] != '\0';
      }
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = 0;
  if (0x79 < *(uint *)(param_2 + 8)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*param_2;
      if (*plVar2 == 0) {
        uVar3 = 0x1c;
      }
      else if (plVar2[2] == 0) {
LAB_18089ec32:
        uVar3 = SystemDataAnalyzer(*plVar2,acStack_a8,1,1,0);
      }
      else {
        local_var_a4 = 0;
        uVar3 = Function_49365015(*plVar2,&local_var_a4);
        if (uVar3 == 0) {
          if ((uint64_t)local_var_a4 + 1 <= (uint64_t)plVar2[2]) goto LAB_18089ec32;
          uVar3 = 0x11;
        }
      }
      bVar9 = uVar3 == 0 && acStack_a8[0] != '\0';
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = 0;
  if (0x7a < *(uint *)(param_2 + 8)) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*param_2;
      if (*plVar2 == 0) {
        uVar3 = 0x1c;
      }
      else if (plVar2[2] == 0) {
LAB_18089ecba:
        uVar3 = SystemDataAnalyzer(*plVar2,acStack_a8,1,1,0);
      }
      else {
        local_var_a4 = 0;
        uVar3 = Function_49365015(*plVar2,&local_var_a4);
        if (uVar3 == 0) {
          if ((uint64_t)local_var_a4 + 1 <= (uint64_t)plVar2[2]) goto LAB_18089ecba;
          uVar3 = 0x11;
        }
      }
      if (uVar3 == 0) {
        bVar9 = acStack_a8[0] != '\0';
      }
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((((!bVar7) && ((char)astack_special_x_18[0] == '\0')) && (cStackX_20 == '\0')) && (!bVar9)) {
    uVar6 = 0;
  }
  *(int32_t *)(param_1 + 0x38) = uVar6;
  uVar3 = *(uint *)(param_2 + 8);
LAB_18089ed1b:
  uVar4 = 0;
  if ((0x7e < uVar3) && (uVar4 = 0x1c, *(int *)(param_2[1] + 0x18) == 0)) {
    uVar3 = SystemErrorHandler(*param_2,param_1 + 0x38,4);
    uVar4 = (uint64_t)uVar3;
  }
  if ((int)uVar4 == 0) {
// WARNING: Subroutine does not return
    AdvancedSystemManager(param_2,stack_array_78);
  }
  return uVar4;
}
uint64_t function_89e87d(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  int unaff_R12D;
  int64_t unaff_R15;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  lVar1 = *unaff_RDI;
  uVar3 = SystemErrorHandler(lVar1,unaff_R15 + 0x10,unaff_R12D + 3);
  uVar4 = (uint64_t)uVar3;
  if (uVar3 == 0) {
    uVar3 = SystemErrorHandler(lVar1,unaff_R15 + 0x14,unaff_R12D + 1);
    uVar4 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar3 = SystemErrorHandler(lVar1,unaff_R15 + 0x16,unaff_R12D + 1);
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar3 = SystemErrorHandler(lVar1,unaff_R15 + 0x18,unaff_R12D + 7);
        uVar4 = (uint64_t)uVar3;
      }
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = SystemCore_ConfigManager();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*unaff_RDI,unaff_R15 + 0x30,4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*unaff_RDI,unaff_R15 + 0x34);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  uVar4 = function_8ad130();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = CoreSystem_StateManager();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemConfigManager(*unaff_RDI,unaff_R15 + 0x58);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  uVar3 = *(uint *)(unaff_RDI + 8);
  if (0x7e < uVar3) goto LAB_18089ed1b;
  if (*(int *)(unaff_RDI[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar2 = (int64_t *)*unaff_RDI;
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    uVar4 = 0x1c;
  }
  else if (plVar2[2] == 0) {
LAB_18089ea0f:
    uVar4 = SystemDataAnalyzer(*plVar2,unaff_RBP + -0x41,unaff_R12D,4,0);
  }
  else {
    *(int32_t *)(unaff_RBP + 0x77) = 0;
    uVar4 = Function_49365015(lVar1,unaff_RBP + 0x77);
    if ((int)uVar4 == 0) {
      if ((uint64_t)*(uint *)(unaff_RBP + 0x77) + 4 <= (uint64_t)plVar2[2]) goto LAB_18089ea0f;
      uVar4 = 0x11;
    }
  }
  uVar5 = 0;
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  bVar6 = *(uint *)(unaff_RDI + 8) < 0x34;
  *(char *)(unaff_RBP + 0x77) = (char)uVar4;
  *(char *)(unaff_RBP + 0x7f) = (char)uVar4;
  bVar8 = false;
  if (0x37 < *(uint *)(unaff_RDI + 8)) {
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*unaff_RDI;
      lVar1 = *plVar2;
      if (lVar1 == 0) {
        uVar3 = 0x1c;
LAB_18089eaae:
        bVar7 = uVar3 == 0;
        if (bVar7) {
          bVar6 = *(char *)(unaff_RBP + -0x49) != '\0';
          bVar7 = true;
        }
      }
      else {
        if (plVar2[2] == 0) {
LAB_18089ea93:
          uVar3 = SystemDataAnalyzer(*plVar2,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,0);
          goto LAB_18089eaae;
        }
        *(int32_t *)(unaff_RBP + -0x45) = 0;
        uVar3 = Function_49365015(lVar1,unaff_RBP + -0x45);
        bVar7 = uVar3 == 0;
        if (bVar7) {
          if ((uint64_t)plVar2[2] < (uint64_t)*(uint *)(unaff_RBP + -0x45) + 1) {
            uVar3 = 0x11;
            goto LAB_18089eaae;
          }
          goto LAB_18089ea93;
        }
      }
      uVar5 = (uint64_t)uVar3;
      if (bVar7) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0x1c;
    }
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar4 = 0;
  if (0x66 < *(uint *)(unaff_RDI + 8)) {
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*unaff_RDI;
      lVar1 = *plVar2;
      if (lVar1 == 0) {
        uVar3 = 0x1c;
      }
      else if (plVar2[2] == 0) {
LAB_18089eb22:
        uVar3 = SystemDataAnalyzer(*plVar2,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,0);
      }
      else {
        *(int32_t *)(unaff_RBP + -0x45) = 0;
        uVar3 = Function_49365015(lVar1,unaff_RBP + -0x45);
        if (uVar3 == 0) {
          if ((uint64_t)*(uint *)(unaff_RBP + -0x45) + 1 <= (uint64_t)plVar2[2])
          goto LAB_18089eb22;
          uVar3 = 0x11;
        }
      }
      if (uVar3 == 0) {
        *(bool *)(unaff_RBP + 0x77) = *(char *)(unaff_RBP + -0x49) != '\0';
      }
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = 0;
  if (0x78 < *(uint *)(unaff_RDI + 8)) {
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*unaff_RDI;
      lVar1 = *plVar2;
      if (lVar1 == 0) {
        uVar3 = 0x1c;
      }
      else if (plVar2[2] == 0) {
LAB_18089ebaa:
        uVar3 = SystemDataAnalyzer(*plVar2,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,0);
      }
      else {
        *(int32_t *)(unaff_RBP + -0x45) = 0;
        uVar3 = Function_49365015(lVar1,unaff_RBP + -0x45);
        if (uVar3 == 0) {
          if ((uint64_t)*(uint *)(unaff_RBP + -0x45) + 1 <= (uint64_t)plVar2[2])
          goto LAB_18089ebaa;
          uVar3 = 0x11;
        }
      }
      if (uVar3 == 0) {
        *(bool *)(unaff_RBP + 0x7f) = *(char *)(unaff_RBP + -0x49) != '\0';
      }
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = 0;
  if (0x79 < *(uint *)(unaff_RDI + 8)) {
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*unaff_RDI;
      lVar1 = *plVar2;
      if (lVar1 == 0) {
        uVar3 = 0x1c;
      }
      else if (plVar2[2] == 0) {
LAB_18089ec32:
        uVar3 = SystemDataAnalyzer(*plVar2,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,0);
      }
      else {
        *(int32_t *)(unaff_RBP + -0x45) = 0;
        uVar3 = Function_49365015(lVar1,unaff_RBP + -0x45);
        if (uVar3 == 0) {
          if ((uint64_t)*(uint *)(unaff_RBP + -0x45) + 1 <= (uint64_t)plVar2[2])
          goto LAB_18089ec32;
          uVar3 = 0x11;
        }
      }
      if (uVar3 == 0) {
        bVar8 = *(char *)(unaff_RBP + -0x49) != '\0';
      }
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  uVar4 = 0;
  if (0x7a < *(uint *)(unaff_RDI + 8)) {
    if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
      plVar2 = (int64_t *)*unaff_RDI;
      lVar1 = *plVar2;
      if (lVar1 == 0) {
        uVar3 = 0x1c;
      }
      else if (plVar2[2] == 0) {
LAB_18089ecba:
        uVar3 = SystemDataAnalyzer(*plVar2,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,0);
      }
      else {
        *(int32_t *)(unaff_RBP + -0x45) = 0;
        uVar3 = Function_49365015(lVar1,unaff_RBP + -0x45);
        if (uVar3 == 0) {
          if ((uint64_t)*(uint *)(unaff_RBP + -0x45) + 1 <= (uint64_t)plVar2[2])
          goto LAB_18089ecba;
          uVar3 = 0x11;
        }
      }
      if (uVar3 == 0) {
        bVar8 = *(char *)(unaff_RBP + -0x49) != '\0';
      }
      uVar4 = (uint64_t)uVar3;
      if (uVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((((!bVar6) && (*(char *)(unaff_RBP + 0x77) == '\0')) && (*(char *)(unaff_RBP + 0x7f) == '\0'))
     && (!bVar8)) {
    unaff_R12D = 0;
  }
  *(int *)(unaff_R15 + 0x38) = unaff_R12D;
  uVar3 = *(uint *)(unaff_RDI + 8);
LAB_18089ed1b:
  uVar4 = 0;
  if ((0x7e < uVar3) && (uVar4 = 0x1c, *(int *)(unaff_RDI[1] + 0x18) == 0)) {
    uVar3 = SystemErrorHandler(*unaff_RDI,unaff_R15 + 0x38,4);
    uVar4 = (uint64_t)uVar3;
  }
  if ((int)uVar4 == 0) {
// WARNING: Subroutine does not return
    AdvancedSystemManager();
  }
  return uVar4;
}
uint64_t function_89e9af(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint in_EAX;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  int32_t unaff_R12D;
  int64_t unaff_R15;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uVar5 = 0x1c;
  if (0x7e < in_EAX) goto LAB_18089ed1b;
  if (*(int *)(unaff_RDI[1] + 0x18) != (int)param_3) {
    return 0x1c;
  }
  plVar1 = (int64_t *)*unaff_RDI;
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    uVar4 = 0x1c;
  }
  else {
    if (plVar1[2] == param_3) {
LAB_18089ea0f:
      uVar4 = SystemDataAnalyzer(*plVar1,unaff_RBP + -0x41,unaff_R12D,4,param_3);
    }
    else {
      *(int *)(unaff_RBP + 0x77) = (int)param_3;
      uVar4 = Function_49365015(lVar2,unaff_RBP + 0x77);
      if ((int)uVar4 == 0) {
        param_3 = 0;
        if ((uint64_t)plVar1[2] < (uint64_t)*(uint *)(unaff_RBP + 0x77) + 4) {
          uVar4 = 0x11;
          goto LAB_18089ea2c;
        }
        goto LAB_18089ea0f;
      }
    }
    param_3 = 0;
  }
LAB_18089ea2c:
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  bVar6 = *(uint *)(unaff_RDI + 8) < 0x34;
  *(char *)(unaff_RBP + 0x77) = (char)uVar4;
  *(char *)(unaff_RBP + 0x7f) = (char)uVar4;
  bVar8 = false;
  if (*(uint *)(unaff_RDI + 8) < 0x38) {
    uVar4 = param_3 & 0xffffffff;
  }
  else if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    plVar1 = (int64_t *)*unaff_RDI;
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      uVar3 = 0x1c;
LAB_18089eaae:
      bVar7 = uVar3 == 0;
      if (bVar7) {
        bVar6 = *(char *)(unaff_RBP + -0x49) != '\0';
        bVar7 = true;
      }
    }
    else {
      if (plVar1[2] == 0) {
LAB_18089ea93:
        uVar3 = SystemDataAnalyzer(*plVar1,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,0);
        goto LAB_18089eaae;
      }
      *(int *)(unaff_RBP + -0x45) = (int)param_3;
      uVar3 = Function_49365015(lVar2,unaff_RBP + -0x45);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        if ((uint64_t)plVar1[2] < (uint64_t)*(uint *)(unaff_RBP + -0x45) + 1) {
          uVar3 = 0x11;
          goto LAB_18089eaae;
        }
        goto LAB_18089ea93;
      }
    }
    param_3 = 0;
    uVar4 = (uint64_t)uVar3;
    if (bVar7) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x1c;
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(uint *)(unaff_RDI + 8) < 0x67) {
    uVar4 = param_3 & 0xffffffff;
  }
  else if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    plVar1 = (int64_t *)*unaff_RDI;
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] == 0) {
LAB_18089eb22:
        uVar3 = SystemDataAnalyzer(*plVar1,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,param_3);
      }
      else {
        *(int *)(unaff_RBP + -0x45) = (int)param_3;
        uVar3 = Function_49365015(lVar2,unaff_RBP + -0x45);
        if (uVar3 == 0) {
          param_3 = 0;
          if ((uint64_t)plVar1[2] < (uint64_t)*(uint *)(unaff_RBP + -0x45) + 1) {
            uVar3 = 0x11;
            goto LAB_18089eb3c;
          }
          goto LAB_18089eb22;
        }
      }
      param_3 = 0;
    }
LAB_18089eb3c:
    if (uVar3 == 0) {
      *(bool *)(unaff_RBP + 0x77) = *(char *)(unaff_RBP + -0x49) != '\0';
    }
    uVar4 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar4 = param_3 & 0xffffffff;
    }
  }
  else {
    uVar4 = 0x1c;
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(uint *)(unaff_RDI + 8) < 0x79) {
    uVar4 = param_3 & 0xffffffff;
  }
  else if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    plVar1 = (int64_t *)*unaff_RDI;
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] == 0) {
LAB_18089ebaa:
        uVar3 = SystemDataAnalyzer(*plVar1,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,param_3);
      }
      else {
        *(int *)(unaff_RBP + -0x45) = (int)param_3;
        uVar3 = Function_49365015(lVar2,unaff_RBP + -0x45);
        if (uVar3 == 0) {
          param_3 = 0;
          if ((uint64_t)plVar1[2] < (uint64_t)*(uint *)(unaff_RBP + -0x45) + 1) {
            uVar3 = 0x11;
            goto LAB_18089ebc4;
          }
          goto LAB_18089ebaa;
        }
      }
      param_3 = 0;
    }
LAB_18089ebc4:
    if (uVar3 == 0) {
      *(bool *)(unaff_RBP + 0x7f) = *(char *)(unaff_RBP + -0x49) != '\0';
    }
    uVar4 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar4 = param_3 & 0xffffffff;
    }
  }
  else {
    uVar4 = 0x1c;
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(uint *)(unaff_RDI + 8) < 0x7a) {
    uVar4 = param_3 & 0xffffffff;
  }
  else if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    plVar1 = (int64_t *)*unaff_RDI;
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] == 0) {
LAB_18089ec32:
        uVar3 = SystemDataAnalyzer(*plVar1,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,param_3);
      }
      else {
        *(int *)(unaff_RBP + -0x45) = (int)param_3;
        uVar3 = Function_49365015(lVar2,unaff_RBP + -0x45);
        if (uVar3 == 0) {
          param_3 = 0;
          if ((uint64_t)plVar1[2] < (uint64_t)*(uint *)(unaff_RBP + -0x45) + 1) {
            uVar3 = 0x11;
            goto LAB_18089ec4c;
          }
          goto LAB_18089ec32;
        }
      }
      param_3 = 0;
    }
LAB_18089ec4c:
    if (uVar3 == 0) {
      bVar8 = *(char *)(unaff_RBP + -0x49) != '\0';
    }
    uVar4 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar4 = param_3 & 0xffffffff;
    }
  }
  else {
    uVar4 = 0x1c;
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (*(uint *)(unaff_RDI + 8) < 0x7b) {
    uVar4 = param_3 & 0xffffffff;
  }
  else if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    plVar1 = (int64_t *)*unaff_RDI;
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      uVar3 = 0x1c;
    }
    else {
      if (plVar1[2] == 0) {
LAB_18089ecba:
        uVar3 = SystemDataAnalyzer(*plVar1,unaff_RBP + -0x49,unaff_R12D,unaff_R12D,param_3);
      }
      else {
        *(int *)(unaff_RBP + -0x45) = (int)param_3;
        uVar3 = Function_49365015(lVar2,unaff_RBP + -0x45);
        if (uVar3 == 0) {
          param_3 = 0;
          if ((uint64_t)plVar1[2] < (uint64_t)*(uint *)(unaff_RBP + -0x45) + 1) {
            uVar3 = 0x11;
            goto LAB_18089ecd4;
          }
          goto LAB_18089ecba;
        }
      }
      param_3 = 0;
    }
LAB_18089ecd4:
    if (uVar3 == 0) {
      bVar8 = *(char *)(unaff_RBP + -0x49) != '\0';
    }
    uVar4 = (uint64_t)uVar3;
    if (uVar3 == 0) {
      uVar4 = param_3 & 0xffffffff;
    }
  }
  else {
    uVar4 = 0x1c;
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((((!bVar6) && (*(char *)(unaff_RBP + 0x77) == '\0')) && (*(char *)(unaff_RBP + 0x7f) == '\0'))
     && (!bVar8)) {
    unaff_R12D = (int32_t)param_3;
  }
  *(int32_t *)(unaff_R15 + 0x38) = unaff_R12D;
  in_EAX = *(uint *)(unaff_RDI + 8);
LAB_18089ed1b:
  if (in_EAX < 0x7f) {
    uVar5 = param_3 & 0xffffffff;
  }
  else if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
    uVar3 = SystemErrorHandler(*unaff_RDI,unaff_R15 + 0x38,4);
    uVar5 = (uint64_t)uVar3;
  }
  if ((int)uVar5 != 0) {
    return uVar5;
  }
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}
// 函数: void function_89edaf(void)
void function_89edaf(void)
{
  return;
}
// 函数: void function_89edc7(void)
void function_89edc7(void)
{
  return;
}
uint64_t function_89ede0(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t stack_array_48 [32];
  int8_t stack_array_28 [32];
  uVar2 = DataFlowProcessor(param_2,stack_array_28,1,0x54494157);
  if (((((int)uVar2 == 0) &&
       (uVar2 = DataFlowProcessor(param_2,stack_array_48,0,0x42494157), (int)uVar2 == 0)) &&
      (uVar2 = SystemCore_ConfigManager(param_2,param_1 + 0x10), (int)uVar2 == 0)) &&
     ((0x45 < *(uint *)(param_2 + 8) ||
      (uVar2 = function_8a2d50(param_2,param_1 + 0xd8), (int)uVar2 == 0)))) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = *param_2;
    uVar2 = SystemErrorHandler(uVar1,param_1 + 0xdc,4);
    if ((((int)uVar2 == 0) && (uVar2 = SystemErrorHandler(uVar1,param_1 + 0xe0,2), (int)uVar2 == 0)) &&
       (uVar2 = SystemErrorHandler(uVar1,param_1 + 0xe2,2), (int)uVar2 == 0)) {
      uVar2 = SystemErrorHandler(uVar1,param_1 + 0xe4,8);
    }
    if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
      AdvancedSystemManager(param_2,stack_array_48);
    }
  }
  return uVar2;
}
uint64_t function_89ee64(void)
{
  uint64_t uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = *unaff_RBX;
  uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0xdc,4);
  if ((int)uVar2 == 0) {
    uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0xe0,2);
    if ((int)uVar2 == 0) {
      uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0xe2,2);
      if ((int)uVar2 == 0) {
        uVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0xe4,8);
      }
    }
  }
  if ((int)uVar2 == 0) {
// WARNING: Subroutine does not return
    AdvancedSystemManager();
  }
  return uVar2;
}
// 函数: void function_89ee87(void)
void function_89ee87(void)
{
  uint64_t uVar1;
  int iVar2;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  uVar1 = *unaff_RBX;
  iVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0xdc,4);
  if (iVar2 == 0) {
    iVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0xe0,2);
    if (iVar2 == 0) {
      iVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0xe2,2);
      if (iVar2 == 0) {
        iVar2 = SystemErrorHandler(uVar1,unaff_RDI + 0xe4,8);
      }
    }
  }
  if (iVar2 == 0) {
// WARNING: Subroutine does not return
    AdvancedSystemManager();
  }
  return;
}
// 函数: void function_89eef2(void)
void function_89eef2(void)
{
// WARNING: Subroutine does not return
  AdvancedSystemManager();
}