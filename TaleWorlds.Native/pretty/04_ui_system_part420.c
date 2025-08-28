#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
// 04_ui_system_part420.c - 7 个函数
// 函数: void function_89b7c7(void)
void function_89b7c7(void)
{
  return;
}
uint64_t function_89b7d0(int64_t param_1,int64_t *param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  char acStackX_18 [8];
  uint astack_special_x_20 [2];
  int8_t stack_array_48 [32];
  uVar5 = DataFlowProcessor(param_2,stack_array_48,0,0x54534e49);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar5 = SystemCore_ConfigManager(param_2,param_1 + 0x60);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemConfigManager(*param_2,param_1 + 0x90);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemConfigManager(*param_2,param_1 + 0xa4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*param_2,param_1 + 0xb0,4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  uVar8 = 0x1c;
  uVar5 = 0;
  if (*(uint *)(param_2 + 8) < 0x82) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    plVar1 = (int64_t *)*param_2;
    uVar3 = 1;
    if (*plVar1 == 0) {
      uVar4 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089b91c:
      uVar4 = SystemDataAnalyzer(*plVar1,acStackX_18,1,1,0);
    }
    else {
      astack_special_x_20[0] = 0;
      uVar4 = SystemFunction_00018076a7d0(*plVar1,astack_special_x_20);
      if (uVar4 == 0) {
        if ((uint64_t)astack_special_x_20[0] + 1 <= (uint64_t)plVar1[2]) goto LAB_18089b91c;
        uVar4 = 0x11;
      }
    }
    uVar7 = 0;
    if (uVar4 == 0) {
      uVar7 = (uint)(acStackX_18[0] != '\0');
      uVar3 = (uint)(acStackX_18[0] == '\0');
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      return (uint64_t)uVar4;
    }
    *(uint *)(param_1 + 0xb8) = (*(uint *)(param_1 + 0xb8) | uVar7) & ~uVar3;
  }
  else {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar6 = SystemErrorHandler(*param_2,param_1 + 0xb8,4);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  uVar6 = uVar8;
  if ((((*(int *)(param_2[1] + 0x18) == 0) &&
       (uVar6 = SystemConfigManager(*param_2,param_1 + 0x94), (int)uVar6 == 0)) &&
      (uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0)) &&
     ((uVar6 = SystemConfigManager(*param_2,param_1 + 0x98), (int)uVar6 == 0 &&
      (uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0)))) {
    lVar2 = *param_2;
    uVar6 = SystemConfigManager(lVar2,param_1 + 0x80);
    if (((((int)uVar6 == 0) &&
         ((uVar6 = SystemConfigManager(lVar2,param_1 + 0x84), (int)uVar6 == 0 &&
          (uVar6 = CoreSystem_StateManager(param_2,param_1 + 0x88), (int)uVar6 == 0)))) &&
        (uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0)) &&
       ((((uVar6 = UIEventHandler(*param_2,param_1 + 0x70), (int)uVar6 == 0 &&
          (uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0)) &&
         (uVar6 = SystemConfigManager(*param_2,param_1 + 0xa8), (int)uVar6 == 0)) &&
        (((uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0 &&
          (uVar6 = SystemConfigManager(*param_2,param_1 + 0x9c), (int)uVar6 == 0)) &&
         ((uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0 &&
          ((uVar6 = SystemErrorHandler(*param_2,param_1 + 0xb4,4), (int)uVar6 == 0 &&
           (uVar6 = function_89d490(param_1 + 0x30,param_2), (int)uVar6 == 0)))))))))) {
      uVar6 = uVar5;
      if (0x34 < *(uint *)(param_2 + 8)) {
        if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar6 = SystemErrorHandler(*param_2,param_1 + 0xbc,4);
        }
        else {
          uVar6 = 0x1c;
        }
      }
      if ((int)uVar6 == 0) {
        uVar6 = uVar5;
        if (0x46 < *(uint *)(param_2 + 8)) {
          if (*(int *)(param_2[1] + 0x18) == 0) {
            uVar6 = SystemErrorHandler(*param_2,param_1 + 0xc0,4);
          }
          else {
            uVar6 = 0x1c;
          }
        }
        if ((int)uVar6 == 0) {
          uVar6 = uVar5;
          if (0x47 < *(uint *)(param_2 + 8)) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              uVar6 = SystemConfigManager(*param_2,param_1 + 0xa0);
            }
            else {
              uVar6 = 0x1c;
            }
          }
          if ((int)uVar6 == 0) {
            uVar6 = uVar5;
            if (0x4f < *(uint *)(param_2 + 8)) {
              if (*(int *)(param_2[1] + 0x18) == 0) {
                uVar3 = SystemConfigManager(*param_2,param_1 + 0xac);
                uVar6 = (uint64_t)uVar3;
              }
              else {
                uVar6 = 0x1c;
              }
            }
            if ((int)uVar6 == 0) {
              if (*(uint *)(param_2 + 8) < 0x82) {
LAB_18089bbcc:
// WARNING: Subroutine does not return
                AdvancedSystemManager(param_2,stack_array_48);
              }
              uVar6 = uVar8;
              if (*(int *)(param_2[1] + 0x18) == 0) {
                uVar3 = function_8993e0(param_1 + 200,*param_2);
                uVar6 = (uint64_t)uVar3;
                if (uVar3 == 0) goto LAB_18089bbcc;
              }
            }
          }
        }
      }
    }
  }
  return uVar6;
}
uint64_t function_89b813(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  int64_t in_RAX;
  uint64_t uVar5;
  uint uVar6;
  int64_t *unaff_RBX;
  uint64_t uVar7;
  int64_t unaff_RSI;
  uint64_t uVar8;
  char local_buffer_90;
  uint local_buffer_98;
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x90);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xa4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xb0,4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  uVar8 = 0x1c;
  uVar7 = 0;
  if (*(uint *)(unaff_RBX + 8) < 0x82) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    plVar1 = (int64_t *)*unaff_RBX;
    uVar3 = 1;
    if (*plVar1 == 0) {
      uVar4 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089b91c:
      uVar4 = SystemDataAnalyzer(*plVar1,&local_buffer_00000090,1,1,0);
    }
    else {
      local_buffer_98 = 0;
      uVar4 = SystemFunction_00018076a7d0(*plVar1,&local_buffer_00000098);
      if (uVar4 == 0) {
        if ((uint64_t)local_buffer_98 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089b91c;
        uVar4 = 0x11;
      }
    }
    uVar6 = 0;
    if (uVar4 == 0) {
      uVar6 = (uint)(local_buffer_90 != '\0');
      uVar3 = (uint)(local_buffer_90 == '\0');
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      return (uint64_t)uVar4;
    }
    *(uint *)(unaff_RSI + 0xb8) = (*(uint *)(unaff_RSI + 0xb8) | uVar6) & ~uVar3;
  }
  else {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xb8,4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  uVar5 = uVar8;
  if ((((*(int *)(unaff_RBX[1] + 0x18) == 0) &&
       (uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x94), (int)uVar5 == 0)) &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
     ((uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x98), (int)uVar5 == 0 &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)))) {
    lVar2 = *unaff_RBX;
    uVar5 = SystemConfigManager(lVar2,unaff_RSI + 0x80);
    if (((((int)uVar5 == 0) &&
         ((uVar5 = SystemConfigManager(lVar2,unaff_RSI + 0x84), (int)uVar5 == 0 &&
          (uVar5 = CoreSystem_StateManager(), (int)uVar5 == 0)))) &&
        (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
       ((((uVar5 = UIEventHandler(*unaff_RBX,unaff_RSI + 0x70), (int)uVar5 == 0 &&
          (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
         (uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xa8), (int)uVar5 == 0)) &&
        (((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          (uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x9c), (int)uVar5 == 0)) &&
         ((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          ((uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xb4,4), (int)uVar5 == 0 &&
           (uVar5 = function_89d490(unaff_RSI + 0x30), (int)uVar5 == 0)))))))))) {
      uVar5 = uVar7;
      if (0x34 < *(uint *)(unaff_RBX + 8)) {
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xbc,4);
        }
        else {
          uVar5 = 0x1c;
        }
      }
      if ((int)uVar5 == 0) {
        uVar5 = uVar7;
        if (0x46 < *(uint *)(unaff_RBX + 8)) {
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xc0,4);
          }
          else {
            uVar5 = 0x1c;
          }
        }
        if ((int)uVar5 == 0) {
          uVar5 = uVar7;
          if (0x47 < *(uint *)(unaff_RBX + 8)) {
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xa0);
            }
            else {
              uVar5 = 0x1c;
            }
          }
          if ((int)uVar5 == 0) {
            if (0x4f < *(uint *)(unaff_RBX + 8)) {
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xac);
                uVar7 = (uint64_t)uVar3;
              }
              else {
                uVar7 = 0x1c;
              }
            }
            uVar5 = uVar7;
            if ((int)uVar7 == 0) {
              if (*(uint *)(unaff_RBX + 8) < 0x82) {
LAB_18089bbcc:
// WARNING: Subroutine does not return
                AdvancedSystemManager();
              }
              uVar5 = uVar8;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = function_8993e0(unaff_RSI + 200,*unaff_RBX);
                uVar5 = (uint64_t)uVar3;
                if (uVar3 == 0) goto LAB_18089bbcc;
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}
uint64_t function_89b86d(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t *unaff_RBX;
  uint64_t uVar7;
  int64_t unaff_RSI;
  uint64_t uVar8;
  char local_buffer_90;
  uint local_buffer_98;
  uVar3 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xb0,4);
  if (uVar3 != 0) {
    return (uint64_t)uVar3;
  }
  uVar8 = 0x1c;
  uVar7 = 0;
  if (*(uint *)(unaff_RBX + 8) < 0x82) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    plVar1 = (int64_t *)*unaff_RBX;
    uVar3 = 1;
    if (*plVar1 == 0) {
      uVar4 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089b91c:
      uVar4 = SystemDataAnalyzer(*plVar1,&local_buffer_00000090,1,1,0);
    }
    else {
      local_buffer_98 = 0;
      uVar4 = SystemFunction_00018076a7d0(*plVar1,&local_buffer_00000098);
      if (uVar4 == 0) {
        if ((uint64_t)local_buffer_98 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089b91c;
        uVar4 = 0x11;
      }
    }
    uVar6 = 0;
    if (uVar4 == 0) {
      uVar6 = (uint)(local_buffer_90 != '\0');
      uVar3 = (uint)(local_buffer_90 == '\0');
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      return (uint64_t)uVar4;
    }
    *(uint *)(unaff_RSI + 0xb8) = (*(uint *)(unaff_RSI + 0xb8) | uVar6) & ~uVar3;
  }
  else {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xb8,4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  uVar5 = uVar8;
  if ((((*(int *)(unaff_RBX[1] + 0x18) == 0) &&
       (uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x94), (int)uVar5 == 0)) &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
     ((uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x98), (int)uVar5 == 0 &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)))) {
    lVar2 = *unaff_RBX;
    uVar5 = SystemConfigManager(lVar2,unaff_RSI + 0x80);
    if (((((int)uVar5 == 0) &&
         ((uVar5 = SystemConfigManager(lVar2,unaff_RSI + 0x84), (int)uVar5 == 0 &&
          (uVar5 = CoreSystem_StateManager(), (int)uVar5 == 0)))) &&
        (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
       ((((uVar5 = UIEventHandler(*unaff_RBX,unaff_RSI + 0x70), (int)uVar5 == 0 &&
          (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
         (uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xa8), (int)uVar5 == 0)) &&
        (((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          (uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x9c), (int)uVar5 == 0)) &&
         ((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          ((uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xb4,4), (int)uVar5 == 0 &&
           (uVar5 = function_89d490(unaff_RSI + 0x30), (int)uVar5 == 0)))))))))) {
      uVar5 = uVar7;
      if (0x34 < *(uint *)(unaff_RBX + 8)) {
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xbc,4);
        }
        else {
          uVar5 = 0x1c;
        }
      }
      if ((int)uVar5 == 0) {
        uVar5 = uVar7;
        if (0x46 < *(uint *)(unaff_RBX + 8)) {
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xc0,4);
          }
          else {
            uVar5 = 0x1c;
          }
        }
        if ((int)uVar5 == 0) {
          uVar5 = uVar7;
          if (0x47 < *(uint *)(unaff_RBX + 8)) {
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xa0);
            }
            else {
              uVar5 = 0x1c;
            }
          }
          if ((int)uVar5 == 0) {
            if (0x4f < *(uint *)(unaff_RBX + 8)) {
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xac);
                uVar7 = (uint64_t)uVar3;
              }
              else {
                uVar7 = 0x1c;
              }
            }
            uVar5 = uVar7;
            if ((int)uVar7 == 0) {
              if (*(uint *)(unaff_RBX + 8) < 0x82) {
LAB_18089bbcc:
// WARNING: Subroutine does not return
                AdvancedSystemManager();
              }
              uVar5 = uVar8;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = function_8993e0(unaff_RSI + 200,*unaff_RBX);
                uVar5 = (uint64_t)uVar3;
                if (uVar3 == 0) goto LAB_18089bbcc;
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}
uint64_t function_89b896(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t *unaff_RBX;
  uint64_t uVar7;
  int64_t unaff_RSI;
  uint64_t uVar8;
  char local_buffer_90;
  uint local_buffer_98;
  uVar8 = 0x1c;
  uVar7 = 0;
  if (*(uint *)(unaff_RBX + 8) < 0x82) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    plVar1 = (int64_t *)*unaff_RBX;
    uVar4 = 1;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089b91c:
      uVar3 = SystemDataAnalyzer(*plVar1,&local_buffer_00000090,1,1,0);
    }
    else {
      local_buffer_98 = 0;
      uVar3 = SystemFunction_00018076a7d0(*plVar1,&local_buffer_00000098);
      if (uVar3 == 0) {
        if ((uint64_t)local_buffer_98 + 1 <= (uint64_t)plVar1[2]) goto LAB_18089b91c;
        uVar3 = 0x11;
      }
    }
    uVar6 = 0;
    if (uVar3 == 0) {
      uVar6 = (uint)(local_buffer_90 != '\0');
      uVar4 = (uint)(local_buffer_90 == '\0');
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      return (uint64_t)uVar3;
    }
    *(uint *)(unaff_RSI + 0xb8) = (*(uint *)(unaff_RSI + 0xb8) | uVar6) & ~uVar4;
  }
  else {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xb8,4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  uVar5 = uVar8;
  if ((((*(int *)(unaff_RBX[1] + 0x18) == 0) &&
       (uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x94), (int)uVar5 == 0)) &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
     ((uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x98), (int)uVar5 == 0 &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)))) {
    lVar2 = *unaff_RBX;
    uVar5 = SystemConfigManager(lVar2,unaff_RSI + 0x80);
    if (((((int)uVar5 == 0) &&
         ((uVar5 = SystemConfigManager(lVar2,unaff_RSI + 0x84), (int)uVar5 == 0 &&
          (uVar5 = CoreSystem_StateManager(), (int)uVar5 == 0)))) &&
        (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
       ((((uVar5 = UIEventHandler(*unaff_RBX,unaff_RSI + 0x70), (int)uVar5 == 0 &&
          (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
         (uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xa8), (int)uVar5 == 0)) &&
        (((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          (uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0x9c), (int)uVar5 == 0)) &&
         ((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          ((uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xb4,4), (int)uVar5 == 0 &&
           (uVar5 = function_89d490(unaff_RSI + 0x30), (int)uVar5 == 0)))))))))) {
      uVar5 = uVar7;
      if (0x34 < *(uint *)(unaff_RBX + 8)) {
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xbc,4);
        }
        else {
          uVar5 = 0x1c;
        }
      }
      if ((int)uVar5 == 0) {
        uVar5 = uVar7;
        if (0x46 < *(uint *)(unaff_RBX + 8)) {
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar5 = SystemErrorHandler(*unaff_RBX,unaff_RSI + 0xc0,4);
          }
          else {
            uVar5 = 0x1c;
          }
        }
        if ((int)uVar5 == 0) {
          uVar5 = uVar7;
          if (0x47 < *(uint *)(unaff_RBX + 8)) {
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar5 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xa0);
            }
            else {
              uVar5 = 0x1c;
            }
          }
          if ((int)uVar5 == 0) {
            if (0x4f < *(uint *)(unaff_RBX + 8)) {
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar4 = SystemConfigManager(*unaff_RBX,unaff_RSI + 0xac);
                uVar7 = (uint64_t)uVar4;
              }
              else {
                uVar7 = 0x1c;
              }
            }
            uVar5 = uVar7;
            if ((int)uVar7 == 0) {
              if (*(uint *)(unaff_RBX + 8) < 0x82) {
LAB_18089bbcc:
// WARNING: Subroutine does not return
                AdvancedSystemManager();
              }
              uVar5 = uVar8;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar4 = function_8993e0(unaff_RSI + 200,*unaff_RBX);
                uVar5 = (uint64_t)uVar4;
                if (uVar4 == 0) goto LAB_18089bbcc;
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}
// 函数: void function_89bbff(void)
void function_89bbff(void)
{
  return;
}
// 函数: void function_89bc10(int64_t param_1,uint64_t *param_2)
void function_89bc10(int64_t param_1,uint64_t *param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint astack_special_x_18 [2];
  uint astack_special_x_20 [2];
  int8_t stack_array_48 [32];
  iVar4 = DataFlowProcessor(param_2,stack_array_48,0,0x2050414d);
  if ((iVar4 == 0) && (iVar4 = SystemCore_ConfigManager(param_2,param_1 + 0x10), iVar4 == 0)) {
    astack_special_x_20[0] = 0;
    iVar4 = SystemCore_Manager(*param_2,astack_special_x_20);
    uVar3 = astack_special_x_20[0];
    if (iVar4 == 0) {
      uVar6 = astack_special_x_20[0] & 1;
      uVar7 = astack_special_x_20[0] >> 1;
      iVar4 = function_8af700((int64_t *)(param_1 + 0x20),uVar7);
      if (iVar4 == 0) {
        astack_special_x_18[0] = 0;
        iVar4 = 0;
        if (uVar3 >> 1 != 0) {
          do {
            iVar5 = UISystemEventHandler(param_2,astack_special_x_18[0]);
            if (iVar5 != 0) {
              return;
            }
            if (*(int *)(param_2[1] + 0x18) == 0) {
              uVar2 = *param_2;
              lVar1 = *(int64_t *)(param_1 + 0x20) + (int64_t)iVar4 * 8;
              iVar5 = SystemConfigManager(uVar2,lVar1);
              if (iVar5 != 0) {
                return;
              }
              iVar5 = SystemConfigManager(uVar2,lVar1 + 4);
            }
            else {
              iVar5 = 0x1c;
            }
            if (iVar5 != 0) {
              return;
            }
            iVar5 = SystemCore_Initializer(param_2,astack_special_x_18);
            if (iVar5 != 0) {
              return;
            }
            iVar4 = iVar4 + 1;
            astack_special_x_18[0] = astack_special_x_18[0] & -uVar6;
          } while (iVar4 < (int)uVar7);
        }
// WARNING: Subroutine does not return
        AdvancedSystemManager(param_2,stack_array_48);
      }
    }
  }
  return;
}
// 函数: void function_89bc5a(void)
void function_89bc5a(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int64_t unaff_RBX;
  uint64_t *unaff_RDI;
  uint uVar6;
  uint local_buffer_88;
  local_buffer_88 = 0;
  iVar4 = SystemCore_Manager();
  uVar3 = local_buffer_88;
  if (iVar4 == 0) {
    uVar6 = local_buffer_88 >> 1;
    iVar4 = function_8af700((int64_t *)(unaff_RBX + 0x20),uVar6);
    if (iVar4 == 0) {
      iVar4 = 0;
      if (uVar3 >> 1 != 0) {
        do {
          iVar5 = UISystemEventHandler();
          if (iVar5 != 0) {
            return;
          }
          if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
            uVar2 = *unaff_RDI;
            lVar1 = *(int64_t *)(unaff_RBX + 0x20) + (int64_t)iVar4 * 8;
            iVar5 = SystemConfigManager(uVar2,lVar1);
            if (iVar5 != 0) {
              return;
            }
            iVar5 = SystemConfigManager(uVar2,lVar1 + 4);
          }
          else {
            iVar5 = 0x1c;
          }
          if (iVar5 != 0) {
            return;
          }
          iVar5 = SystemCore_Initializer();
          if (iVar5 != 0) {
            return;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar6);
      }
// WARNING: Subroutine does not return
      AdvancedSystemManager();
    }
  }
  return;
}
// 函数: void function_89bd61(void)
void function_89bd61(void)
{
  return;
}
uint64_t function_89bd70(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uVar1 = UISystemEventHandler(param_2,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = SystemConfigManager(*param_2,param_1 + 0x30);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = SystemConfigManager(*param_2,param_1 + 0x34);
      if (((int)uVar1 == 0) && (uVar1 = SystemCore_Initializer(param_2,0), (int)uVar1 == 0)) {
        if ((0x6b < *(uint *)(param_2 + 8)) &&
           (uVar1 = function_8a6150(param_2,param_1 + 0x38,0), (int)uVar1 != 0)) {
          return uVar1;
        }
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
// 函数: void function_89be10(int64_t param_1,uint64_t *param_2,int param_3)
void function_89be10(int64_t param_1,uint64_t *param_2,int param_3)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  uint uVar7;
  uint astack_special_x_8 [2];
  uint astack_special_x_20 [2];
  astack_special_x_20[0] = function_8a5630(param_2,param_1,0);
  if (astack_special_x_20[0] != 0) {
    return;
  }
  iVar2 = SystemCore_Manager(*param_2,astack_special_x_20);
  uVar1 = astack_special_x_20[0];
  if (iVar2 != 0) {
    return;
  }
  uVar7 = astack_special_x_20[0] & 1;
  uVar4 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f;
  uVar5 = astack_special_x_20[0] >> 1;
  if (((int)((*(uint *)(param_1 + 0x1c) ^ uVar4) - uVar4) < (int)uVar5) &&
     (iVar2 = UltraHighFreq_StateController1(param_1 + 0x10,uVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 < (int)uVar5) {
// WARNING: Subroutine does not return
    memset((int64_t)iVar2 * 0x10 + *(int64_t *)(param_1 + 0x10),0,
           (int64_t)(int)(uVar5 - iVar2) << 4);
  }
  *(uint *)(param_1 + 0x18) = uVar5;
  astack_special_x_8[0] = 0;
  iVar2 = 0;
  if (uVar1 >> 1 != 0) {
    do {
      iVar3 = UISystemEventHandler(param_2,astack_special_x_8[0]);
      if (iVar3 != 0) {
        return;
      }
      if (*(int *)(param_2[1] + 0x18) == 0) {
        iVar3 = UIEventHandler(*param_2,(int64_t)iVar2 * 0x10 + *(int64_t *)(param_1 + 0x10));
      }
      else {
        iVar3 = 0x1c;
      }
      if (iVar3 != 0) {
        return;
      }
      iVar3 = SystemCore_Initializer(param_2,astack_special_x_8);
      if (iVar3 != 0) {
        return;
      }
      iVar2 = iVar2 + 1;
      astack_special_x_8[0] = astack_special_x_8[0] & -uVar7;
    } while (iVar2 < (int)uVar5);
  }
  astack_special_x_8[0] = 0;
  iVar2 = SystemCore_Manager(*param_2,astack_special_x_8);
  uVar1 = astack_special_x_8[0];
  if (iVar2 != 0) {
    return;
  }
  lVar6 = (int64_t)(int)astack_special_x_8[0];
  uVar4 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
  if (((int)((*(uint *)(param_1 + 0x2c) ^ uVar4) - uVar4) < (int)astack_special_x_8[0]) &&
     (iVar2 = SystemDeallocationProcessor(param_1 + 0x20,astack_special_x_8[0]), iVar2 != 0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < (int)uVar1) {
// WARNING: Subroutine does not return
    memset((int64_t)iVar2 + *(int64_t *)(param_1 + 0x20),0,(int64_t)(int)(uVar1 - iVar2));
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  if (uVar1 != 0) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      iVar2 = SystemErrorHandler(*param_2,*(uint64_t *)(param_1 + 0x20),lVar6);
      if (iVar2 == 0) goto LAB_18089bfc7;
    }
    else {
      iVar2 = 0x1c;
    }
    if (iVar2 != 0) {
      return;
    }
  }
LAB_18089bfc7:
  if (param_3 == 0) {
    iVar2 = function_8a84c0(param_1,param_2);
  }
  else {
    iVar2 = function_8ad600(param_2,param_1 + 0x30);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = function_8ad600(param_2,param_1 + 0x40);
  }
  if (iVar2 == 0) {
    SystemFunction_000180069ee0(param_1);
  }
  return;
}
// 函数: void function_89be41(void)
void function_89be41(void)
{
  uint in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint64_t *unaff_RBX;
  uint uVar4;
  int64_t lVar5;
  int unaff_R12D;
  int64_t unaff_R15;
  uint local_buffer_50;
  uint local_buffer_68;
  local_buffer_68 = in_EAX;
  iVar1 = SystemCore_Manager();
  if (iVar1 != 0) {
    return;
  }
  uVar3 = (int)*(uint *)(unaff_R15 + 0x1c) >> 0x1f;
  uVar4 = local_buffer_68 >> 1;
  if (((int)((*(uint *)(unaff_R15 + 0x1c) ^ uVar3) - uVar3) < (int)uVar4) &&
     (iVar1 = UltraHighFreq_StateController1(unaff_R15 + 0x10,uVar4), iVar1 != 0)) {
    return;
  }
  iVar1 = *(int *)(unaff_R15 + 0x18);
  if (iVar1 < (int)uVar4) {
// WARNING: Subroutine does not return
    memset((int64_t)iVar1 * 0x10 + *(int64_t *)(unaff_R15 + 0x10),0,
           (int64_t)(int)(uVar4 - iVar1) << 4);
  }
  *(uint *)(unaff_R15 + 0x18) = uVar4;
  local_buffer_50 = 0;
  iVar1 = 0;
  if (local_buffer_68 >> 1 != 0) {
    do {
      iVar2 = UISystemEventHandler();
      if (iVar2 != 0) {
        return;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        iVar2 = UIEventHandler(*unaff_RBX,(int64_t)iVar1 * 0x10 + *(int64_t *)(unaff_R15 + 0x10));
      }
      else {
        iVar2 = 0x1c;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = SystemCore_Initializer();
      if (iVar2 != 0) {
        return;
      }
      iVar1 = iVar1 + 1;
      local_buffer_50 = local_buffer_50 & -(local_buffer_68 & 1);
    } while (iVar1 < (int)uVar4);
  }
  local_buffer_50 = 0;
  iVar2 = SystemCore_Manager(*unaff_RBX,&local_buffer_00000050);
  iVar1 = local_buffer_50;
  if (iVar2 != 0) {
    return;
  }
  lVar5 = (int64_t)(int)local_buffer_50;
  uVar3 = (int)*(uint *)(unaff_R15 + 0x2c) >> 0x1f;
  if (((int)((*(uint *)(unaff_R15 + 0x2c) ^ uVar3) - uVar3) < (int)local_buffer_50) &&
     (iVar2 = SystemDeallocationProcessor(unaff_R15 + 0x20,local_buffer_50), iVar2 != 0)) {
    return;
  }
  iVar2 = *(int *)(unaff_R15 + 0x28);
  if (iVar2 < iVar1) {
// WARNING: Subroutine does not return
    memset((int64_t)iVar2 + *(int64_t *)(unaff_R15 + 0x20),0,(int64_t)(iVar1 - iVar2));
  }
  *(int *)(unaff_R15 + 0x28) = iVar1;
  if (iVar1 != 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      iVar1 = SystemErrorHandler(*unaff_RBX,*(uint64_t *)(unaff_R15 + 0x20),lVar5);
      if (iVar1 == 0) goto LAB_18089bfc7;
    }
    else {
      iVar1 = 0x1c;
    }
    if (iVar1 != 0) {
      return;
    }
  }
LAB_18089bfc7:
  if (unaff_R12D == 0) {
    iVar1 = function_8a84c0();
  }
  else {
    iVar1 = function_8ad600();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = function_8ad600();
  }
  if (iVar1 == 0) {
    SystemFunction_000180069ee0();
  }
  return;
}