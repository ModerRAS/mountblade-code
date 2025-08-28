#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part425.c - 3 个函数

// 函数: void FUN_18089dcd6(void)
void FUN_18089dcd6(void)

{
  return;
}



ulonglong FUN_18089dcf0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStackX_18 [4];
  undefined1 auStackX_1c [12];
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  uVar3 = FUN_1808ddc20(param_2,auStack_38,1,0x54495053);
  if ((((int)uVar3 == 0) &&
      (uVar3 = FUN_1808ddc20(param_2,auStack_58,0,0x42495053), (int)uVar3 == 0)) &&
     (uVar3 = FUN_180899360(param_2,param_1 + 0x10), (int)uVar3 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar3 = FUN_1808aed00(*param_2,param_1 + 0xf0,4);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if (*(int *)(param_2[1] + 0x18) == 0) {
      uVar2 = FUN_1808aed00(*param_2,param_1 + 0xf8,4);
      uVar3 = (ulonglong)uVar2;
      if (uVar2 == 0) {
        if (((*(uint *)(param_2 + 8) < 0x8a) && (*(int *)(param_1 + 0xf8) == 0)) ||
           ((*(uint *)(param_2 + 8) < 0x8e && (*(int *)(param_1 + 0xf8) == 0x7fffffff)))) {
          *(undefined4 *)(param_1 + 0xf8) = 0x21;
        }
        uVar3 = FUN_180898ef0(param_2,param_1 + 0x100);
        if ((int)uVar3 == 0) {
          uVar4 = 0x1c;
          if (*(uint *)(param_2 + 8) < 0x68) {
            uVar3 = uVar4;
            if (*(int *)(param_2[1] + 0x18) == 0) {
              uVar1 = *param_2;
              uVar3 = FUN_1808995c0(uVar1,auStackX_18);
              if ((int)uVar3 == 0) {
                uVar3 = FUN_1808995c0(uVar1,auStackX_1c);
              }
            }
          }
          else {
            uVar3 = 0;
          }
          if ((int)uVar3 == 0) {
            if (*(uint *)(param_2 + 8) < 0x39) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar4;
              if (*(int *)(param_2[1] + 0x18) == 0) {
                uVar3 = FUN_1808aed00(*param_2,param_1 + 0xf4,4);
              }
            }
            if ((int)uVar3 == 0) {
              if (*(uint *)(param_2 + 8) < 0x5e) {
                uVar3 = 0;
              }
              else {
                uVar3 = uVar4;
                if (*(int *)(param_2[1] + 0x18) == 0) {
                  uVar2 = FUN_1808995c0(*param_2,param_1 + 0xfc);
                  uVar3 = (ulonglong)uVar2;
                }
              }
              if (((int)uVar3 == 0) &&
                 ((*(uint *)(param_2 + 8) < 0x85 ||
                  (uVar3 = FUN_180899220(param_2,param_1 + 0x108), (int)uVar3 == 0)))) {
                    // WARNING: Subroutine does not return
                FUN_1808ddf80(param_2,auStack_58);
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0x1c;
    }
  }
  return uVar3;
}



ulonglong FUN_18089dd54(void)

{
  undefined8 uVar1;
  uint uVar2;
  longlong in_RAX;
  ulonglong uVar3;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar4;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf0,4);
  if ((int)uVar3 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar2 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf8,4);
      uVar3 = (ulonglong)uVar2;
      if (uVar2 == 0) {
        if (((*(uint *)(unaff_RBX + 8) < 0x8a) && (*(int *)(unaff_RSI + 0xf8) == 0)) ||
           ((*(uint *)(unaff_RBX + 8) < 0x8e && (*(int *)(unaff_RSI + 0xf8) == 0x7fffffff)))) {
          *(undefined4 *)(unaff_RSI + 0xf8) = 0x21;
        }
        uVar3 = FUN_180898ef0();
        if ((int)uVar3 == 0) {
          uVar4 = 0x1c;
          if (*(uint *)(unaff_RBX + 8) < 0x68) {
            uVar3 = uVar4;
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar1 = *unaff_RBX;
              uVar3 = FUN_1808995c0(uVar1,&stack0x00000090);
              if ((int)uVar3 == 0) {
                uVar3 = FUN_1808995c0(uVar1,&stack0x00000094);
              }
            }
          }
          else {
            uVar3 = 0;
          }
          if ((int)uVar3 == 0) {
            if (*(uint *)(unaff_RBX + 8) < 0x39) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar4;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar3 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf4,4);
              }
            }
            if ((int)uVar3 == 0) {
              if (*(uint *)(unaff_RBX + 8) < 0x5e) {
                uVar3 = 0;
              }
              else {
                uVar3 = uVar4;
                if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                  uVar2 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xfc);
                  uVar3 = (ulonglong)uVar2;
                }
              }
              if (((int)uVar3 == 0) &&
                 ((*(uint *)(unaff_RBX + 8) < 0x85 || (uVar3 = FUN_180899220(), (int)uVar3 == 0))))
              {
                    // WARNING: Subroutine does not return
                FUN_1808ddf80();
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0x1c;
    }
    return uVar3;
  }
  return uVar3;
}



ulonglong FUN_18089dd78(void)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar4;
  
  uVar3 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf0,4);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar2 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf8,4);
    uVar3 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      if (((*(uint *)(unaff_RBX + 8) < 0x8a) && (*(int *)(unaff_RSI + 0xf8) == 0)) ||
         ((*(uint *)(unaff_RBX + 8) < 0x8e && (*(int *)(unaff_RSI + 0xf8) == 0x7fffffff)))) {
        *(undefined4 *)(unaff_RSI + 0xf8) = 0x21;
      }
      uVar3 = FUN_180898ef0();
      if ((int)uVar3 == 0) {
        uVar4 = 0x1c;
        if (*(uint *)(unaff_RBX + 8) < 0x68) {
          uVar3 = uVar4;
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar1 = *unaff_RBX;
            uVar3 = FUN_1808995c0(uVar1,&stack0x00000090);
            if ((int)uVar3 == 0) {
              uVar3 = FUN_1808995c0(uVar1,&stack0x00000094);
            }
          }
        }
        else {
          uVar3 = 0;
        }
        if ((int)uVar3 == 0) {
          if (*(uint *)(unaff_RBX + 8) < 0x39) {
            uVar3 = 0;
          }
          else {
            uVar3 = uVar4;
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar3 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf4,4);
            }
          }
          if ((int)uVar3 == 0) {
            if (*(uint *)(unaff_RBX + 8) < 0x5e) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar4;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar2 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xfc);
                uVar3 = (ulonglong)uVar2;
              }
            }
            if (((int)uVar3 == 0) &&
               ((*(uint *)(unaff_RBX + 8) < 0x85 || (uVar3 = FUN_180899220(), (int)uVar3 == 0)))) {
                    // WARNING: Subroutine does not return
              FUN_1808ddf80();
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = 0x1c;
  }
  return uVar3;
}



ulonglong FUN_18089dda2(void)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  ulonglong uVar4;
  
  if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar2 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf8,4);
    uVar3 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      if (((*(uint *)(unaff_RBX + 8) < 0x8a) && (*(int *)(unaff_RSI + 0xf8) == 0)) ||
         ((*(uint *)(unaff_RBX + 8) < 0x8e && (*(int *)(unaff_RSI + 0xf8) == 0x7fffffff)))) {
        *(undefined4 *)(unaff_RSI + 0xf8) = 0x21;
      }
      uVar3 = FUN_180898ef0();
      if ((int)uVar3 == 0) {
        uVar4 = 0x1c;
        if (*(uint *)(unaff_RBX + 8) < 0x68) {
          uVar3 = uVar4;
          if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
            uVar1 = *unaff_RBX;
            uVar3 = FUN_1808995c0(uVar1,&stack0x00000090);
            if ((int)uVar3 == 0) {
              uVar3 = FUN_1808995c0(uVar1,&stack0x00000094);
            }
          }
        }
        else {
          uVar3 = 0;
        }
        if ((int)uVar3 == 0) {
          if (*(uint *)(unaff_RBX + 8) < 0x39) {
            uVar3 = 0;
          }
          else {
            uVar3 = uVar4;
            if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
              uVar3 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf4,4);
            }
          }
          if ((int)uVar3 == 0) {
            if (*(uint *)(unaff_RBX + 8) < 0x5e) {
              uVar3 = 0;
            }
            else {
              uVar3 = uVar4;
              if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
                uVar2 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xfc);
                uVar3 = (ulonglong)uVar2;
              }
            }
            if (((int)uVar3 == 0) &&
               ((*(uint *)(unaff_RBX + 8) < 0x85 || (uVar3 = FUN_180899220(), (int)uVar3 == 0)))) {
                    // WARNING: Subroutine does not return
              FUN_1808ddf80();
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = 0x1c;
  }
  return uVar3;
}



ulonglong FUN_18089de39(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  uint unaff_EDI;
  
  uVar1 = *unaff_RBX;
  uVar2 = FUN_1808995c0(uVar1,&stack0x00000090);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1808995c0(uVar1,&stack0x00000094);
  }
  if ((int)uVar2 == 0) {
    if (*(uint *)(unaff_RBX + 8) < 0x39) {
      uVar2 = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar2 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf4,4);
    }
    else {
      uVar2 = (ulonglong)unaff_EDI;
    }
    if ((int)uVar2 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x5e) {
        unaff_EDI = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        unaff_EDI = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xfc);
      }
      if (unaff_EDI == 0) {
        if ((0x84 < *(uint *)(unaff_RBX + 8)) && (uVar2 = FUN_180899220(), (int)uVar2 != 0)) {
          return uVar2;
        }
                    // WARNING: Subroutine does not return
        FUN_1808ddf80();
      }
      uVar2 = (ulonglong)unaff_EDI;
    }
  }
  return uVar2;
}



ulonglong FUN_18089de72(void)

{
  ulonglong uVar1;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  uint unaff_EDI;
  
  if (*(uint *)(unaff_RBX + 8) < 0x39) {
    uVar1 = 0;
  }
  else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
    uVar1 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0xf4,4);
  }
  else {
    uVar1 = (ulonglong)unaff_EDI;
  }
  if ((int)uVar1 == 0) {
    if (*(uint *)(unaff_RBX + 8) < 0x5e) {
      unaff_EDI = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      unaff_EDI = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0xfc);
    }
    if (unaff_EDI == 0) {
      if ((*(uint *)(unaff_RBX + 8) < 0x85) || (uVar1 = FUN_180899220(), (int)uVar1 == 0)) {
                    // WARNING: Subroutine does not return
        FUN_1808ddf80();
      }
    }
    else {
      uVar1 = (ulonglong)unaff_EDI;
    }
  }
  return uVar1;
}





// 函数: void FUN_18089df30(void)
void FUN_18089df30(void)

{
  return;
}



undefined8 FUN_18089df40(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  uVar2 = FUN_1808ddc20(param_2,auStack_28,1,0x46464553);
  if (((((int)uVar2 == 0) &&
       (uVar2 = FUN_1808ddc20(param_2,auStack_48,0,0x42464553), (int)uVar2 == 0)) &&
      (uVar2 = FUN_180899360(param_2,param_1 + 0x10), (int)uVar2 == 0)) &&
     ((0x5a < *(uint *)(param_2 + 8) ||
      (uVar2 = FUN_1808afc70(param_2,param_1 + 0x44), (int)uVar2 == 0)))) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = *param_2;
    uVar2 = FUN_1808aed00(uVar1,param_1 + 0x4c,4);
    if ((((int)uVar2 == 0) && (uVar2 = FUN_1808aed00(uVar1,param_1 + 0x50,2), (int)uVar2 == 0)) &&
       (uVar2 = FUN_1808aed00(uVar1,param_1 + 0x52,2), (int)uVar2 == 0)) {
      uVar2 = FUN_1808aed00(uVar1,param_1 + 0x54,8);
    }
    if ((int)uVar2 == 0) {
      if (*(int *)(param_2[1] + 0x18) != 0) {
        return 0x1c;
      }
      uVar2 = FUN_1808995c0(*param_2,param_1 + 0x48);
      if ((int)uVar2 == 0) {
        if (*(uint *)(param_2 + 8) < 0x3d) {
          uVar2 = 0;
        }
        else if (*(int *)(param_2[1] + 0x18) == 0) {
          uVar2 = FUN_1808a2e00(*param_2,param_1 + 0x40);
        }
        else {
          uVar2 = 0x1c;
        }
        if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
          FUN_1808ddf80(param_2,auStack_48);
        }
      }
    }
  }
  return uVar2;
}



undefined8 FUN_18089dfc1(void)

{
  undefined8 uVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 *unaff_RBX;
  longlong unaff_RDI;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = *unaff_RBX;
  uVar2 = FUN_1808aed00(uVar1,unaff_RDI + 0x4c,4);
  if ((((int)uVar2 == 0) && (uVar2 = FUN_1808aed00(uVar1,unaff_RDI + 0x50,2), (int)uVar2 == 0)) &&
     (uVar2 = FUN_1808aed00(uVar1,unaff_RDI + 0x52,2), (int)uVar2 == 0)) {
    uVar2 = FUN_1808aed00(uVar1,unaff_RDI + 0x54,8);
  }
  if ((int)uVar2 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = FUN_1808995c0(*unaff_RBX,unaff_RDI + 0x48);
    if ((int)uVar2 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x3d) {
        uVar2 = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = FUN_1808a2e00(*unaff_RBX,unaff_RDI + 0x40);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808ddf80();
      }
    }
  }
  return uVar2;
}



undefined8 FUN_18089dfe4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_RBX;
  longlong unaff_RDI;
  
  uVar1 = *unaff_RBX;
  uVar2 = FUN_1808aed00(uVar1,unaff_RDI + 0x4c,4);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1808aed00(uVar1,unaff_RDI + 0x50,2);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_1808aed00(uVar1,unaff_RDI + 0x52,2);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_1808aed00(uVar1,unaff_RDI + 0x54,8);
      }
    }
  }
  if ((int)uVar2 == 0) {
    if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar2 = FUN_1808995c0(*unaff_RBX,unaff_RDI + 0x48);
    if ((int)uVar2 == 0) {
      if (*(uint *)(unaff_RBX + 8) < 0x3d) {
        uVar2 = 0;
      }
      else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
        uVar2 = FUN_1808a2e00(*unaff_RBX,unaff_RDI + 0x40);
      }
      else {
        uVar2 = 0x1c;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808ddf80();
      }
    }
  }
  return uVar2;
}



undefined8 FUN_18089e043(void)

{
  undefined8 uVar1;
  undefined8 *unaff_RBX;
  longlong unaff_RDI;
  
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar1 = FUN_1808995c0(*unaff_RBX,unaff_RDI + 0x48);
  if ((int)uVar1 == 0) {
    if (*(uint *)(unaff_RBX + 8) < 0x3d) {
      uVar1 = 0;
    }
    else if (*(int *)(unaff_RBX[1] + 0x18) == 0) {
      uVar1 = FUN_1808a2e00(*unaff_RBX,unaff_RDI + 0x40);
    }
    else {
      uVar1 = 0x1c;
    }
    if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808ddf80();
    }
  }
  return uVar1;
}





// 函数: void FUN_18089e0be(void)
void FUN_18089e0be(void)

{
  return;
}



undefined8 FUN_18089e0d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [32];
  
  if ((0x87 < *(uint *)(param_2 + 8)) &&
     (uVar1 = FUN_1808ddc20(param_2,auStack_28,1,0x46464353), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = FUN_1808ddc20(param_2,auStack_48,0,0x46454353);
  if (((int)uVar1 == 0) && (uVar1 = FUN_180899360(param_2,param_1 + 0x10), (int)uVar1 == 0)) {
    if (*(int *)(param_2[1] + 0x18) != 0) {
      return 0x1c;
    }
    uVar1 = FUN_1808a2e00(*param_2,param_1 + 0x6c);
    if (((int)uVar1 == 0) && (uVar1 = FUN_1808a5d60(param_2,param_1 + 0x48,0), (int)uVar1 == 0)) {
      if ((*(int *)(param_2 + 8) - 0x4aU < 0x11) &&
         (uVar1 = FUN_1808afc70(param_2,param_1 + 0x44), (int)uVar1 != 0)) {
        return uVar1;
      }
      if ((0x52 < *(uint *)(param_2 + 8)) &&
         (uVar1 = FUN_1808a5d60(param_2,param_1 + 0x58,0), (int)uVar1 != 0)) {
        return uVar1;
      }
      if (*(uint *)(param_2 + 8) < 0x88) {
        uVar1 = 0;
      }
      else if (*(int *)(param_2[1] + 0x18) == 0) {
        uVar1 = FUN_1808995c0(*param_2,param_1 + 0x68);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_2,auStack_48);
      }
    }
  }
  return uVar1;
}



ulonglong FUN_18089e230(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar7;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  ulonglong uVar5;
  
  uVar2 = FUN_1808ddc20(param_2,auStack_48,1,0x50414e53);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_1808ddc20(param_2,auStack_68,0,0x42414e53);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_180899360(param_2,param_1 + 0x10);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar2 = FUN_1808aed00(*param_2,param_1 + 0x44,4);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar7 = 0;
  auStackX_20[0] = 0;
  uVar2 = FUN_1808afe30(*param_2,auStackX_20);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  auStackX_18[0] = 0;
  uVar3 = auStackX_20[0] & 1;
  uVar6 = auStackX_20[0] >> 1;
  uVar2 = uVar7;
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar2 = FUN_1808dde10(param_2,uVar2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_1808a8120(param_2,param_1 + 0x30,uVar5,param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_1808de0e0(param_2,auStackX_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      auStackX_18[0] = auStackX_18[0] & -uVar3;
      uVar2 = (ulonglong)auStackX_18[0];
    } while ((int)uVar4 < (int)uVar6);
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar3 = FUN_1808a2e00(*param_2,param_1 + 0x48);
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  if (*(int *)(param_2[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (longlong *)*param_2;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      auStackX_18[0] = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,auStackX_18);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((ulonglong)plVar1[2] < (ulonglong)auStackX_18[0] + 4) {
        uVar2 = 0x11;
        goto LAB_18089e447;
      }
    }
    uVar2 = FUN_180769ed0(*plVar1,auStackX_20,1,4,0);
  }
LAB_18089e447:
  if ((int)uVar2 == 0) {
    *(uint *)(param_1 + 0x4c) = auStackX_20[0];
    uVar2 = 0xd;
    if (auStackX_20[0] < 7) {
      uVar2 = uVar7;
    }
    if ((int)uVar2 == 0) {
      uVar2 = uVar7;
      if ((0x32 < *(uint *)(param_2 + 8)) && (uVar2 = 0x1c, *(int *)(param_2[1] + 0x18) == 0)) {
        uVar3 = FUN_1808995c0(*param_2,param_1 + 0x40);
        uVar2 = (ulonglong)uVar3;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808ddf80(param_2,auStack_68);
      }
    }
  }
  return uVar2;
}



ulonglong FUN_18089e297(void)

{
  longlong *plVar1;
  longlong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RBX;
  uint uVar4;
  longlong unaff_RSI;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint in_stack_000000b0;
  uint in_stack_000000b8;
  
  if (*(int *)(in_RAX + 0x18) != 0) {
    return 0x1c;
  }
  uVar2 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0x44,4);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar7 = 0;
  in_stack_000000b8 = 0;
  uVar2 = FUN_1808afe30(*unaff_RBX,&stack0x000000b8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  in_stack_000000b0 = 0;
  uVar4 = in_stack_000000b8 & 1;
  uVar6 = in_stack_000000b8 >> 1;
  uVar2 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar3 = FUN_1808dde10();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808a8120();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808de0e0();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar5 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar5;
      in_stack_000000b0 = in_stack_000000b0 & -uVar4;
    } while ((int)uVar5 < (int)uVar6);
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808a2e00(*unaff_RBX,unaff_RSI + 0x48);
  if (uVar4 != 0) {
    return (ulonglong)uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (longlong *)*unaff_RBX;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      in_stack_000000b0 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x000000b0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((ulonglong)plVar1[2] < (ulonglong)in_stack_000000b0 + 4) {
        uVar2 = 0x11;
        goto LAB_18089e447;
      }
    }
    uVar2 = FUN_180769ed0(*plVar1,&stack0x000000b8,1,4,0);
  }
LAB_18089e447:
  if ((int)uVar2 == 0) {
    *(uint *)(unaff_RSI + 0x4c) = in_stack_000000b8;
    uVar2 = 0xd;
    if (in_stack_000000b8 < 7) {
      uVar2 = uVar7;
    }
    if ((int)uVar2 == 0) {
      uVar2 = uVar7;
      if ((0x32 < *(uint *)(unaff_RBX + 8)) && (uVar2 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) {
        uVar4 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x40);
        uVar2 = (ulonglong)uVar4;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808ddf80();
      }
    }
  }
  return uVar2;
}



ulonglong FUN_18089e2be(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RBX;
  uint uVar4;
  longlong unaff_RSI;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint in_stack_000000b0;
  uint in_stack_000000b8;
  
  uVar2 = FUN_1808aed00(*unaff_RBX,unaff_RSI + 0x44,4);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar7 = 0;
  in_stack_000000b8 = 0;
  uVar2 = FUN_1808afe30(*unaff_RBX,&stack0x000000b8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  in_stack_000000b0 = 0;
  uVar4 = in_stack_000000b8 & 1;
  uVar6 = in_stack_000000b8 >> 1;
  uVar2 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar3 = FUN_1808dde10();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808a8120();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808de0e0();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar5 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar5;
      in_stack_000000b0 = in_stack_000000b0 & -uVar4;
    } while ((int)uVar5 < (int)uVar6);
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808a2e00(*unaff_RBX,unaff_RSI + 0x48);
  if (uVar4 != 0) {
    return (ulonglong)uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (longlong *)*unaff_RBX;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      in_stack_000000b0 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x000000b0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((ulonglong)plVar1[2] < (ulonglong)in_stack_000000b0 + 4) {
        uVar2 = 0x11;
        goto LAB_18089e447;
      }
    }
    uVar2 = FUN_180769ed0(*plVar1,&stack0x000000b8,1,4,0);
  }
LAB_18089e447:
  if ((int)uVar2 == 0) {
    *(uint *)(unaff_RSI + 0x4c) = in_stack_000000b8;
    uVar2 = 0xd;
    if (in_stack_000000b8 < 7) {
      uVar2 = uVar7;
    }
    if ((int)uVar2 == 0) {
      uVar2 = uVar7;
      if ((0x32 < *(uint *)(unaff_RBX + 8)) && (uVar2 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) {
        uVar4 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x40);
        uVar2 = (ulonglong)uVar4;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808ddf80();
      }
    }
  }
  return uVar2;
}



ulonglong FUN_18089e2e8(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *unaff_RBX;
  uint uVar4;
  longlong unaff_RSI;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint in_stack_000000b0;
  uint uStack00000000000000b8;
  
  uVar7 = 0;
  uStack00000000000000b8 = 0;
  uVar2 = FUN_1808afe30(*unaff_RBX,&stack0x000000b8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  in_stack_000000b0 = 0;
  uVar4 = uStack00000000000000b8 & 1;
  uVar6 = uStack00000000000000b8 >> 1;
  uVar2 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar3 = FUN_1808dde10();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808a8120();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1808de0e0();
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar5 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar5;
      in_stack_000000b0 = in_stack_000000b0 & -uVar4;
    } while ((int)uVar5 < (int)uVar6);
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  uVar4 = FUN_1808a2e00(*unaff_RBX,unaff_RSI + 0x48);
  if (uVar4 != 0) {
    return (ulonglong)uVar4;
  }
  if (*(int *)(unaff_RBX[1] + 0x18) != 0) {
    return 0x1c;
  }
  plVar1 = (longlong *)*unaff_RBX;
  if (*plVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    if (plVar1[2] != 0) {
      in_stack_000000b0 = 0;
      uVar2 = func_0x00018076a7d0(*plVar1,&stack0x000000b0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if ((ulonglong)plVar1[2] < (ulonglong)in_stack_000000b0 + 4) {
        uVar2 = 0x11;
        goto LAB_18089e447;
      }
    }
    uVar2 = FUN_180769ed0(*plVar1,&stack0x000000b8,1,4,0);
  }
LAB_18089e447:
  if ((int)uVar2 == 0) {
    *(uint *)(unaff_RSI + 0x4c) = uStack00000000000000b8;
    uVar2 = 0xd;
    if (uStack00000000000000b8 < 7) {
      uVar2 = uVar7;
    }
    if ((int)uVar2 == 0) {
      uVar2 = uVar7;
      if ((0x32 < *(uint *)(unaff_RBX + 8)) && (uVar2 = 0x1c, *(int *)(unaff_RBX[1] + 0x18) == 0)) {
        uVar4 = FUN_1808995c0(*unaff_RBX,unaff_RSI + 0x40);
        uVar2 = (ulonglong)uVar4;
      }
      if ((int)uVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_1808ddf80();
      }
    }
  }
  return uVar2;
}





