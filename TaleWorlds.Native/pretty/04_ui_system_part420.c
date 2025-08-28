#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part420.c - 7 个函数

// 函数: void FUN_18089b7c7(void)
void FUN_18089b7c7(void)

{
  return;
}



ulonglong FUN_18089b7d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  char acStackX_18 [8];
  uint auStackX_20 [2];
  undefined1 auStack_48 [32];
  
  uVar5 = FUN_1808ddc20(param_2,auStack_48,0,0x54534e49);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  uVar5 = FUN_180899360(param_2,param_1 + 0x60);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808995c0(*param_2,param_1 + 0x90);
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808995c0(*param_2,param_1 + 0xa4);
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808aed00(*param_2,param_1 + 0xb0,4);
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  uVar8 = 0x1c;
  uVar5 = 0;
  if (*(uint *)(param_2 + 8) < 0x82) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    plVar1 = (longlong *)*param_2;
    uVar3 = 1;
    if (*plVar1 == 0) {
      uVar4 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089b91c:
      uVar4 = FUN_180769ed0(*plVar1,acStackX_18,1,1,0);
    }
    else {
      auStackX_20[0] = 0;
      uVar4 = func_0x00018076a7d0(*plVar1,auStackX_20);
      if (uVar4 == 0) {
        if ((ulonglong)auStackX_20[0] + 1 <= (ulonglong)plVar1[2]) goto LAB_18089b91c;
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
      return (ulonglong)uVar4;
    }
    *(uint *)(param_1 + 0xb8) = (*(uint *)(param_1 + 0xb8) | uVar7) & ~uVar3;
  }
  else {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar6 = FUN_1808aed00(*param_2,param_1 + 0xb8,4);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  uVar6 = uVar8;
  if ((((*(int *)(param_2[1] + 0x18) == 0) &&
       (uVar6 = FUN_1808995c0(*param_2,param_1 + 0x94), (int)uVar6 == 0)) &&
      (uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0)) &&
     ((uVar6 = FUN_1808995c0(*param_2,param_1 + 0x98), (int)uVar6 == 0 &&
      (uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0)))) {
    lVar2 = *param_2;
    uVar6 = FUN_1808995c0(lVar2,param_1 + 0x80);
    if (((((int)uVar6 == 0) &&
         ((uVar6 = FUN_1808995c0(lVar2,param_1 + 0x84), (int)uVar6 == 0 &&
          (uVar6 = FUN_180899220(param_2,param_1 + 0x88), (int)uVar6 == 0)))) &&
        (uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0)) &&
       ((((uVar6 = FUN_180899090(*param_2,param_1 + 0x70), (int)uVar6 == 0 &&
          (uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0)) &&
         (uVar6 = FUN_1808995c0(*param_2,param_1 + 0xa8), (int)uVar6 == 0)) &&
        (((uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0 &&
          (uVar6 = FUN_1808995c0(*param_2,param_1 + 0x9c), (int)uVar6 == 0)) &&
         ((uVar6 = uVar8, *(int *)(param_2[1] + 0x18) == 0 &&
          ((uVar6 = FUN_1808aed00(*param_2,param_1 + 0xb4,4), (int)uVar6 == 0 &&
           (uVar6 = FUN_18089d490(param_1 + 0x30,param_2), (int)uVar6 == 0)))))))))) {
      uVar6 = uVar5;
      if (0x34 < *(uint *)(param_2 + 8)) {
        if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar6 = FUN_1808aed00(*param_2,param_1 + 0xbc,4);
        }
        else {
          uVar6 = 0x1c;
        }
      }
      if ((int)uVar6 == 0) {
        uVar6 = uVar5;
        if (0x46 < *(uint *)(param_2 + 8)) {
          if (*(int *)(param_2[1] + 0x18) == 0) {
            uVar6 = FUN_1808aed00(*param_2,param_1 + 0xc0,4);
          }
          else {
            uVar6 = 0x1c;
          }
        }
        if ((int)uVar6 == 0) {
          uVar6 = uVar5;
          if (0x47 < *(uint *)(param_2 + 8)) {
            if (*(int *)(param_2[1] + 0x18) == 0) {
              uVar6 = FUN_1808995c0(*param_2,param_1 + 0xa0);
            }
            else {
              uVar6 = 0x1c;
            }
          }
          if ((int)uVar6 == 0) {
            uVar6 = uVar5;
            if (0x4f < *(uint *)(param_2 + 8)) {
              if (*(int *)(param_2[1] + 0x18) == 0) {
                uVar3 = FUN_1808995c0(*param_2,param_1 + 0xac);
                uVar6 = (ulonglong)uVar3;
              }
              else {
                uVar6 = 0x1c;
              }
            }
            if ((int)uVar6 == 0) {
              if (*(uint *)(param_2 + 8) < 0x82) {
LAB_18089bbcc:
                    // WARNING: Subroutine does not return
                FUN_1808ddf80(param_2,auStack_48);
              }
              uVar6 = uVar8;
              if (*(int *)(param_2[1] + 0x18) == 0) {
                uVar3 = FUN_1808993e0(param_1 + 200,*param_2);
                uVar6 = (ulonglong)uVar3;
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



ulonglong FUN_18089b813(void)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong in_RAX;
  ulonglong uVar5;
  uint uVar6;
  longlong *unaff_RBX;
  ulonglong uVar7;
  longlong unaff_RSI;
  ulonglong uVar8;
  char in_stack_00000090;
  uint in_stack_00000098;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x90);
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xa4);
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xb0,4);
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  uVar8 = 0x1c;
  uVar7 = 0;
  if (*(uint *)(unaff_RBX + 8) < 0x82) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    plVar1 = (longlong *)*unaff_RBX;
    uVar3 = 1;
    if (*plVar1 == 0) {
      uVar4 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089b91c:
      uVar4 = FUN_180769ed0(*plVar1,&stack0x00000090,1,1,0);
    }
    else {
      in_stack_00000098 = 0;
      uVar4 = func_0x00018076a7d0(*plVar1,&stack0x00000098);
      if (uVar4 == 0) {
        if ((ulonglong)in_stack_00000098 + 1 <= (ulonglong)plVar1[2]) goto LAB_18089b91c;
        uVar4 = 0x11;
      }
    }
    uVar6 = 0;
    if (uVar4 == 0) {
      uVar6 = (uint)(in_stack_00000090 != '\0');
      uVar3 = (uint)(in_stack_00000090 == '\0');
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      return (ulonglong)uVar4;
    }
    *(uint *)(unaff_RSI + 0xb8) = (*(uint *)(unaff_RSI + 0xb8) | uVar6) & ~uVar3;
  }
  else {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xb8,4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  uVar5 = uVar8;
  if ((((*(int *)(unaff_RBX[1] + 0x18) == 0) &&
       (uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x94), (int)uVar5 == 0)) &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
     ((uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x98), (int)uVar5 == 0 &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)))) {
    lVar2 = *unaff_RBX;
    uVar5 = FUN_1808995c0(lVar2,unaff_RSI + 0x80);
    if (((((int)uVar5 == 0) &&
         ((uVar5 = FUN_1808995c0(lVar2,unaff_RSI + 0x84), (int)uVar5 == 0 &&
          (uVar5 = FUN_180899220(), (int)uVar5 == 0)))) &&
        (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
       ((((uVar5 = FUN_180899090(*unaff_RBX,unaff_RSI + 0x70), (int)uVar5 == 0 &&
          (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
         (uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xa8), (int)uVar5 == 0)) &&
        (((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          (uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x9c), (int)uVar5 == 0)) &&
         ((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          ((uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xb4,4), (int)uVar5 == 0 &&
           (uVar5 = FUN_18089d490(unaff_RSI + 0x30), (int)uVar5 == 0)))))))))) {
      uVar5 = uVar7;
      if (0x34 < *(uint *)(unaff_RBX + 8)) {
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xbc,4);
        }
        else {
          uVar5 = 0x1c;
        }
      }
      if ((int)uVar5 == 0) {
        uVar5 = uVar7;
        if (0x46 < *(uint *)(unaff_RBX + 8)) {
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xc0,4);
          }
          else {
            uVar5 = 0x1c;
          }
        }
        if ((int)uVar5 == 0) {
          uVar5 = uVar7;
          if (0x47 < *(uint *)(unaff_RBX + 8)) {
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xa0);
            }
            else {
              uVar5 = 0x1c;
            }
          }
          if ((int)uVar5 == 0) {
            if (0x4f < *(uint *)(unaff_RBX + 8)) {
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xac);
                uVar7 = (ulonglong)uVar3;
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
                FUN_1808ddf80();
              }
              uVar5 = uVar8;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = FUN_1808993e0(unaff_RSI + 200,*unaff_RBX);
                uVar5 = (ulonglong)uVar3;
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



ulonglong FUN_18089b86d(void)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *unaff_RBX;
  ulonglong uVar7;
  longlong unaff_RSI;
  ulonglong uVar8;
  char in_stack_00000090;
  uint in_stack_00000098;
  
  uVar3 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xb0,4);
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  uVar8 = 0x1c;
  uVar7 = 0;
  if (*(uint *)(unaff_RBX + 8) < 0x82) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    plVar1 = (longlong *)*unaff_RBX;
    uVar3 = 1;
    if (*plVar1 == 0) {
      uVar4 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089b91c:
      uVar4 = FUN_180769ed0(*plVar1,&stack0x00000090,1,1,0);
    }
    else {
      in_stack_00000098 = 0;
      uVar4 = func_0x00018076a7d0(*plVar1,&stack0x00000098);
      if (uVar4 == 0) {
        if ((ulonglong)in_stack_00000098 + 1 <= (ulonglong)plVar1[2]) goto LAB_18089b91c;
        uVar4 = 0x11;
      }
    }
    uVar6 = 0;
    if (uVar4 == 0) {
      uVar6 = (uint)(in_stack_00000090 != '\0');
      uVar3 = (uint)(in_stack_00000090 == '\0');
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      return (ulonglong)uVar4;
    }
    *(uint *)(unaff_RSI + 0xb8) = (*(uint *)(unaff_RSI + 0xb8) | uVar6) & ~uVar3;
  }
  else {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xb8,4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  uVar5 = uVar8;
  if ((((*(int *)(unaff_RBX[1] + 0x18) == 0) &&
       (uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x94), (int)uVar5 == 0)) &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
     ((uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x98), (int)uVar5 == 0 &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)))) {
    lVar2 = *unaff_RBX;
    uVar5 = FUN_1808995c0(lVar2,unaff_RSI + 0x80);
    if (((((int)uVar5 == 0) &&
         ((uVar5 = FUN_1808995c0(lVar2,unaff_RSI + 0x84), (int)uVar5 == 0 &&
          (uVar5 = FUN_180899220(), (int)uVar5 == 0)))) &&
        (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
       ((((uVar5 = FUN_180899090(*unaff_RBX,unaff_RSI + 0x70), (int)uVar5 == 0 &&
          (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
         (uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xa8), (int)uVar5 == 0)) &&
        (((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          (uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x9c), (int)uVar5 == 0)) &&
         ((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          ((uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xb4,4), (int)uVar5 == 0 &&
           (uVar5 = FUN_18089d490(unaff_RSI + 0x30), (int)uVar5 == 0)))))))))) {
      uVar5 = uVar7;
      if (0x34 < *(uint *)(unaff_RBX + 8)) {
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xbc,4);
        }
        else {
          uVar5 = 0x1c;
        }
      }
      if ((int)uVar5 == 0) {
        uVar5 = uVar7;
        if (0x46 < *(uint *)(unaff_RBX + 8)) {
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xc0,4);
          }
          else {
            uVar5 = 0x1c;
          }
        }
        if ((int)uVar5 == 0) {
          uVar5 = uVar7;
          if (0x47 < *(uint *)(unaff_RBX + 8)) {
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xa0);
            }
            else {
              uVar5 = 0x1c;
            }
          }
          if ((int)uVar5 == 0) {
            if (0x4f < *(uint *)(unaff_RBX + 8)) {
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xac);
                uVar7 = (ulonglong)uVar3;
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
                FUN_1808ddf80();
              }
              uVar5 = uVar8;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = FUN_1808993e0(unaff_RSI + 200,*unaff_RBX);
                uVar5 = (ulonglong)uVar3;
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



ulonglong FUN_18089b896(void)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *unaff_RBX;
  ulonglong uVar7;
  longlong unaff_RSI;
  ulonglong uVar8;
  char in_stack_00000090;
  uint in_stack_00000098;
  
  uVar8 = 0x1c;
  uVar7 = 0;
  if (*(uint *)(unaff_RBX + 8) < 0x82) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    plVar1 = (longlong *)*unaff_RBX;
    uVar4 = 1;
    if (*plVar1 == 0) {
      uVar3 = 0x1c;
    }
    else if (plVar1[2] == 0) {
LAB_18089b91c:
      uVar3 = FUN_180769ed0(*plVar1,&stack0x00000090,1,1,0);
    }
    else {
      in_stack_00000098 = 0;
      uVar3 = func_0x00018076a7d0(*plVar1,&stack0x00000098);
      if (uVar3 == 0) {
        if ((ulonglong)in_stack_00000098 + 1 <= (ulonglong)plVar1[2]) goto LAB_18089b91c;
        uVar3 = 0x11;
      }
    }
    uVar6 = 0;
    if (uVar3 == 0) {
      uVar6 = (uint)(in_stack_00000090 != '\0');
      uVar4 = (uint)(in_stack_00000090 == '\0');
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      return (ulonglong)uVar3;
    }
    *(uint *)(unaff_RSI + 0xb8) = (*(uint *)(unaff_RSI + 0xb8) | uVar6) & ~uVar4;
  }
  else {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xb8,4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  uVar5 = uVar8;
  if ((((*(int *)(unaff_RBX[1] + 0x18) == 0) &&
       (uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x94), (int)uVar5 == 0)) &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
     ((uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x98), (int)uVar5 == 0 &&
      (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)))) {
    lVar2 = *unaff_RBX;
    uVar5 = FUN_1808995c0(lVar2,unaff_RSI + 0x80);
    if (((((int)uVar5 == 0) &&
         ((uVar5 = FUN_1808995c0(lVar2,unaff_RSI + 0x84), (int)uVar5 == 0 &&
          (uVar5 = FUN_180899220(), (int)uVar5 == 0)))) &&
        (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
       ((((uVar5 = FUN_180899090(*unaff_RBX,unaff_RSI + 0x70), (int)uVar5 == 0 &&
          (uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0)) &&
         (uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xa8), (int)uVar5 == 0)) &&
        (((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          (uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x9c), (int)uVar5 == 0)) &&
         ((uVar5 = uVar8, *(int *)(unaff_RBX[1] + 0x18) == 0 &&
          ((uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xb4,4), (int)uVar5 == 0 &&
           (uVar5 = FUN_18089d490(unaff_RSI + 0x30), (int)uVar5 == 0)))))))))) {
      uVar5 = uVar7;
      if (0x34 < *(uint *)(unaff_RBX + 8)) {
        if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
          uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xbc,4);
        }
        else {
          uVar5 = 0x1c;
        }
      }
      if ((int)uVar5 == 0) {
        uVar5 = uVar7;
        if (0x46 < *(uint *)(unaff_RBX + 8)) {
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar5 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xc0,4);
          }
          else {
            uVar5 = 0x1c;
          }
        }
        if ((int)uVar5 == 0) {
          uVar5 = uVar7;
          if (0x47 < *(uint *)(unaff_RBX + 8)) {
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar5 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xa0);
            }
            else {
              uVar5 = 0x1c;
            }
          }
          if ((int)uVar5 == 0) {
            if (0x4f < *(uint *)(unaff_RBX + 8)) {
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar4 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xac);
                uVar7 = (ulonglong)uVar4;
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
                FUN_1808ddf80();
              }
              uVar5 = uVar8;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar4 = FUN_1808993e0(unaff_RSI + 200,*unaff_RBX);
                uVar5 = (ulonglong)uVar4;
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





// 函数: void FUN_18089bbff(void)
void FUN_18089bbff(void)

{
  return;
}





// 函数: void FUN_18089bc10(longlong param_1,undefined8 *param_2)
void FUN_18089bc10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  undefined1 auStack_48 [32];
  
  iVar4 = FUN_1808ddc20(param_2,auStack_48,0,0x2050414d);
  if ((iVar4 == 0) && (iVar4 = FUN_180899360(param_2,param_1 + 0x10), iVar4 == 0)) {
    auStackX_20[0] = 0;
    iVar4 = FUN_1808afe30(*param_2,auStackX_20);
    uVar3 = auStackX_20[0];
    if (iVar4 == 0) {
      uVar6 = auStackX_20[0] & 1;
      uVar7 = auStackX_20[0] >> 1;
      iVar4 = FUN_1808af700((longlong *)(param_1 + 0x20),uVar7);
      if (iVar4 == 0) {
        auStackX_18[0] = 0;
        iVar4 = 0;
        if (uVar3 >> 1 != 0) {
          do {
            iVar5 = FUN_1808dde10(param_2,auStackX_18[0]);
            if (iVar5 != 0) {
              return;
            }
            if (*(int *)(param_2[1] + 0x18) == 0) {
              uVar2 = *param_2;
              lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 8;
              iVar5 = FUN_1808995c0(uVar2,lVar1);
              if (iVar5 != 0) {
                return;
              }
              iVar5 = FUN_1808995c0(uVar2,lVar1 + 4);
            }
            else {
              iVar5 = 0x1c;
            }
            if (iVar5 != 0) {
              return;
            }
            iVar5 = FUN_1808de0e0(param_2,auStackX_18);
            if (iVar5 != 0) {
              return;
            }
            iVar4 = iVar4 + 1;
            auStackX_18[0] = auStackX_18[0] & -uVar6;
          } while (iVar4 < (int)uVar7);
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_2,auStack_48);
      }
    }
  }
  return;
}





// 函数: void FUN_18089bc5a(void)
void FUN_18089bc5a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong unaff_RBX;
  undefined8 *unaff_RDI;
  uint uVar6;
  uint uStack0000000000000088;
  
  uStack0000000000000088 = 0;
  iVar4 = FUN_1808afe30();
  uVar3 = uStack0000000000000088;
  if (iVar4 == 0) {
    uVar6 = uStack0000000000000088 >> 1;
    iVar4 = FUN_1808af700((longlong *)(unaff_RBX + 0x20),uVar6);
    if (iVar4 == 0) {
      iVar4 = 0;
      if (uVar3 >> 1 != 0) {
        do {
          iVar5 = FUN_1808dde10();
          if (iVar5 != 0) {
            return;
          }
          if (*(int *)(unaff_RDI[1] + 0x18) == 0) {
            uVar2 = *unaff_RDI;
            lVar1 = *(longlong *)(unaff_RBX + 0x20) + (longlong)iVar4 * 8;
            iVar5 = FUN_1808995c0(uVar2,lVar1);
            if (iVar5 != 0) {
              return;
            }
            iVar5 = FUN_1808995c0(uVar2,lVar1 + 4);
          }
          else {
            iVar5 = 0x1c;
          }
          if (iVar5 != 0) {
            return;
          }
          iVar5 = FUN_1808de0e0();
          if (iVar5 != 0) {
            return;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar6);
      }
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return;
}





// 函数: void FUN_18089bd61(void)
void FUN_18089bd61(void)

{
  return;
}



undefined8 FUN_18089bd70(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1808dde10(param_2,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_1808995c0(*param_2,param_1 + 0x30);
    if ((int)uVar1 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar1 = FUN_1808995c0(*param_2,param_1 + 0x34);
      if (((int)uVar1 == 0) && (uVar1 = FUN_1808de0e0(param_2,0), (int)uVar1 == 0)) {
        if ((0x6b < *(uint *)(param_2 + 8)) &&
           (uVar1 = FUN_1808a6150(param_2,param_1 + 0x38,0), (int)uVar1 != 0)) {
          return uVar1;
        }
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}





// 函数: void FUN_18089be10(longlong param_1,undefined8 *param_2,int param_3)
void FUN_18089be10(longlong param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  auStackX_20[0] = FUN_1808a5630(param_2,param_1,0);
  if (auStackX_20[0] != 0) {
    return;
  }
  iVar2 = FUN_1808afe30(*param_2,auStackX_20);
  uVar1 = auStackX_20[0];
  if (iVar2 != 0) {
    return;
  }
  uVar7 = auStackX_20[0] & 1;
  uVar4 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f;
  uVar5 = auStackX_20[0] >> 1;
  if (((int)((*(uint *)(param_1 + 0x1c) ^ uVar4) - uVar4) < (int)uVar5) &&
     (iVar2 = FUN_180748010(param_1 + 0x10,uVar5), iVar2 != 0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 < (int)uVar5) {
                    // WARNING: Subroutine does not return
    memset((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x10),0,
           (longlong)(int)(uVar5 - iVar2) << 4);
  }
  *(uint *)(param_1 + 0x18) = uVar5;
  auStackX_8[0] = 0;
  iVar2 = 0;
  if (uVar1 >> 1 != 0) {
    do {
      iVar3 = FUN_1808dde10(param_2,auStackX_8[0]);
      if (iVar3 != 0) {
        return;
      }
      if (*(int *)(param_2[1] + 0x18) == 0) {
        iVar3 = FUN_180899090(*param_2,(longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x10));
      }
      else {
        iVar3 = 0x1c;
      }
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_1808de0e0(param_2,auStackX_8);
      if (iVar3 != 0) {
        return;
      }
      iVar2 = iVar2 + 1;
      auStackX_8[0] = auStackX_8[0] & -uVar7;
    } while (iVar2 < (int)uVar5);
  }
  auStackX_8[0] = 0;
  iVar2 = FUN_1808afe30(*param_2,auStackX_8);
  uVar1 = auStackX_8[0];
  if (iVar2 != 0) {
    return;
  }
  lVar6 = (longlong)(int)auStackX_8[0];
  uVar4 = (int)*(uint *)(param_1 + 0x2c) >> 0x1f;
  if (((int)((*(uint *)(param_1 + 0x2c) ^ uVar4) - uVar4) < (int)auStackX_8[0]) &&
     (iVar2 = FUN_180849030(param_1 + 0x20,auStackX_8[0]), iVar2 != 0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < (int)uVar1) {
                    // WARNING: Subroutine does not return
    memset((longlong)iVar2 + *(longlong *)(param_1 + 0x20),0,(longlong)(int)(uVar1 - iVar2));
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  if (uVar1 != 0) {
    if (*(int *)(param_2[1] + 0x18) == 0) {
      iVar2 = FUN_1808aed00(*param_2,*(undefined8 *)(param_1 + 0x20),lVar6);
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
    iVar2 = FUN_1808a84c0(param_1,param_2);
  }
  else {
    iVar2 = FUN_1808ad600(param_2,param_1 + 0x30);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_1808ad600(param_2,param_1 + 0x40);
  }
  if (iVar2 == 0) {
    func_0x000180069ee0(param_1);
  }
  return;
}





// 函数: void FUN_18089be41(void)
void FUN_18089be41(void)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *unaff_RBX;
  uint uVar4;
  longlong lVar5;
  int unaff_R12D;
  longlong unaff_R15;
  uint in_stack_00000050;
  uint uStack0000000000000068;
  
  uStack0000000000000068 = in_EAX;
  iVar1 = FUN_1808afe30();
  if (iVar1 != 0) {
    return;
  }
  uVar3 = (int)*(uint *)(unaff_R15 + 0x1c) >> 0x1f;
  uVar4 = uStack0000000000000068 >> 1;
  if (((int)((*(uint *)(unaff_R15 + 0x1c) ^ uVar3) - uVar3) < (int)uVar4) &&
     (iVar1 = FUN_180748010(unaff_R15 + 0x10,uVar4), iVar1 != 0)) {
    return;
  }
  iVar1 = *(int *)(unaff_R15 + 0x18);
  if (iVar1 < (int)uVar4) {
                    // WARNING: Subroutine does not return
    memset((longlong)iVar1 * 0x10 + *(longlong *)(unaff_R15 + 0x10),0,
           (longlong)(int)(uVar4 - iVar1) << 4);
  }
  *(uint *)(unaff_R15 + 0x18) = uVar4;
  in_stack_00000050 = 0;
  iVar1 = 0;
  if (uStack0000000000000068 >> 1 != 0) {
    do {
      iVar2 = FUN_1808dde10();
      if (iVar2 != 0) {
        return;
      }
      if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        iVar2 = FUN_180899090(*unaff_RBX,(longlong)iVar1 * 0x10 + *(longlong *)(unaff_R15 + 0x10));
      }
      else {
        iVar2 = 0x1c;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_1808de0e0();
      if (iVar2 != 0) {
        return;
      }
      iVar1 = iVar1 + 1;
      in_stack_00000050 = in_stack_00000050 & -(uStack0000000000000068 & 1);
    } while (iVar1 < (int)uVar4);
  }
  in_stack_00000050 = 0;
  iVar2 = FUN_1808afe30(*unaff_RBX,&stack0x00000050);
  iVar1 = in_stack_00000050;
  if (iVar2 != 0) {
    return;
  }
  lVar5 = (longlong)(int)in_stack_00000050;
  uVar3 = (int)*(uint *)(unaff_R15 + 0x2c) >> 0x1f;
  if (((int)((*(uint *)(unaff_R15 + 0x2c) ^ uVar3) - uVar3) < (int)in_stack_00000050) &&
     (iVar2 = FUN_180849030(unaff_R15 + 0x20,in_stack_00000050), iVar2 != 0)) {
    return;
  }
  iVar2 = *(int *)(unaff_R15 + 0x28);
  if (iVar2 < iVar1) {
                    // WARNING: Subroutine does not return
    memset((longlong)iVar2 + *(longlong *)(unaff_R15 + 0x20),0,(longlong)(iVar1 - iVar2));
  }
  *(int *)(unaff_R15 + 0x28) = iVar1;
  if (iVar1 != 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      iVar1 = FUN_1808aed00(*unaff_RBX,*(undefined8 *)(unaff_R15 + 0x20),lVar5);
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
    iVar1 = FUN_1808a84c0();
  }
  else {
    iVar1 = FUN_1808ad600();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_1808ad600();
  }
  if (iVar1 == 0) {
    func_0x000180069ee0();
  }
  return;
}





