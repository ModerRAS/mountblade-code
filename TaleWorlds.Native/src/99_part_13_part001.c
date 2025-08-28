#include "TaleWorlds.Native.Split.h"

// 99_part_13_part001.c - 8 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_13.c - 500 个函数


// 函数: void FUN_1808a6137(void)
void FUN_1808a6137(void)

{
  return;
}



undefined8 FUN_1808a6150(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  auStackX_20[0] = 0;
  uVar2 = FUN_1808afe30(*param_1,auStackX_20);
  uVar1 = auStackX_20[0];
  if ((int)uVar2 == 0) {
    uVar4 = (int)*(uint *)((longlong)param_2 + 0xc) >> 0x1f;
    uVar8 = auStackX_20[0] & 1;
    uVar6 = auStackX_20[0] >> 1;
    if (((int)uVar6 <= (int)((*(uint *)((longlong)param_2 + 0xc) ^ uVar4) - uVar4)) ||
       (uVar2 = FUN_180748010(param_2,uVar6), (int)uVar2 == 0)) {
      iVar7 = (int)param_2[1];
      if (iVar7 < (int)uVar6) {
                    // WARNING: Subroutine does not return
        memset((longlong)iVar7 * 0x10 + *param_2,0,(longlong)(int)(uVar6 - iVar7) << 4);
      }
      *(uint *)(param_2 + 1) = uVar6;
      iVar7 = 0;
      auStackX_8[0] = 0;
      if (uVar1 >> 1 != 0) {
        do {
          uVar2 = FUN_1808dde10(param_1,auStackX_8[0]);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar2 = *param_1;
            lVar5 = (longlong)iVar7 * 0x10 + *param_2;
            uVar3 = FUN_1808aed00(uVar2,lVar5,4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808aed00(uVar2,lVar5 + 4,2);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808aed00(uVar2,lVar5 + 6,2);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar2 = FUN_1808aed00(uVar2,lVar5 + 8,8);
          }
          else {
            uVar2 = 0x1c;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808de0e0(param_1,auStackX_8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar7 = iVar7 + 1;
          auStackX_8[0] = auStackX_8[0] & -uVar8;
        } while (iVar7 < (int)uVar6);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



ulonglong FUN_1808a617f(void)

{
  undefined8 uVar1;
  uint in_EAX;
  ulonglong uVar2;
  uint unaff_EBX;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *unaff_R13;
  undefined8 *unaff_R14;
  uint in_stack_00000068;
  
  uVar4 = in_stack_00000068 >> 1;
  if (((int)uVar4 <= (int)((in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f))) ||
     (uVar2 = FUN_180748010(), (int)uVar2 == 0)) {
    iVar5 = (int)unaff_R13[1];
    if (iVar5 < (int)uVar4) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar5 * 0x10 + *unaff_R13,0,(longlong)(int)(uVar4 - iVar5) << 4);
    }
    *(uint *)(unaff_R13 + 1) = uVar4;
    uVar2 = (ulonglong)unaff_EBX;
    if (unaff_EBX == 0) {
      iVar5 = 0;
      if (in_stack_00000068 >> 1 != 0) {
        do {
          uVar2 = FUN_1808dde10();
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (*(int *)(unaff_R14[1] + 0x18) == 0) {
            uVar1 = *unaff_R14;
            lVar3 = (longlong)iVar5 * 0x10 + *unaff_R13;
            uVar2 = FUN_1808aed00(uVar1,lVar3,4);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            uVar2 = FUN_1808aed00(uVar1,lVar3 + 4,2);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            uVar2 = FUN_1808aed00(uVar1,lVar3 + 6,2);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            uVar2 = FUN_1808aed00(uVar1,lVar3 + 8,8);
          }
          else {
            uVar2 = 0x1c;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808de0e0();
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar4);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined8 FUN_1808a61e2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint unaff_EBX;
  longlong lVar3;
  int unaff_EBP;
  longlong *unaff_R13;
  undefined8 *unaff_R14;
  int unaff_R15D;
  uint uStack0000000000000050;
  
  uStack0000000000000050 = unaff_EBX;
  if (unaff_EBP != 0) {
    do {
      uVar1 = FUN_1808dde10();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar1 = *unaff_R14;
        lVar3 = (longlong)(int)unaff_EBX * 0x10 + *unaff_R13;
        uVar2 = FUN_1808aed00(uVar1,lVar3,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,lVar3 + 4,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,lVar3 + 6,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar1 = FUN_1808aed00(uVar1,lVar3 + 8,8);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1808de0e0();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EBX = unaff_EBX + 1;
      uStack0000000000000050 = uStack0000000000000050 & -unaff_R15D;
    } while ((int)unaff_EBX < unaff_EBP);
  }
  return 0;
}






// 函数: void FUN_1808a62b4(void)
void FUN_1808a62b4(void)

{
  return;
}






// 函数: void FUN_1808a62be(void)
void FUN_1808a62be(void)

{
  return;
}



undefined8 FUN_1808a62d0(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint auStackX_8 [2];
  uint auStackX_20 [2];
  
  auStackX_20[0] = 0;
  uVar2 = FUN_1808afe30(*param_1,auStackX_20);
  uVar1 = auStackX_20[0];
  if ((int)uVar2 == 0) {
    uVar6 = auStackX_20[0] >> 1;
    uVar7 = auStackX_20[0] & 1;
    uVar2 = FUN_1808afb90(param_2,uVar6);
    if ((int)uVar2 == 0) {
      iVar5 = 0;
      auStackX_8[0] = 0;
      if (uVar1 >> 1 != 0) {
        do {
          uVar2 = FUN_1808dde10(param_1,auStackX_8[0]);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = (longlong)iVar5 * 0x20 + *param_2;
          if (*(int *)(param_1[1] + 0x18) == 0) {
            uVar2 = *param_1;
            uVar3 = FUN_1808aed00(uVar2,lVar4,4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808aed00(uVar2,lVar4 + 4,2);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808aed00(uVar2,lVar4 + 6,2);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808aed00(uVar2,lVar4 + 8,8);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808aed00(uVar2,lVar4 + 0x10,4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808aed00(uVar2,lVar4 + 0x14,4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = FUN_1808aed00(uVar2,lVar4 + 0x18,4);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar2 = FUN_1808995c0(uVar2,lVar4 + 0x1c);
          }
          else {
            uVar2 = 0x1c;
          }
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808de0e0(param_1,auStackX_8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar5 = iVar5 + 1;
          auStackX_8[0] = auStackX_8[0] & -uVar7;
        } while (iVar5 < (int)uVar6);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined8 FUN_1808a62fb(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int unaff_EBX;
  longlong lVar3;
  longlong *unaff_R13;
  undefined8 *unaff_R14;
  uint in_stack_00000078;
  
  uVar1 = FUN_1808afb90();
  if ((int)uVar1 == 0) {
    if (in_stack_00000078 >> 1 != 0) {
      do {
        uVar1 = FUN_1808dde10();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar3 = (longlong)unaff_EBX * 0x20 + *unaff_R13;
        if (*(int *)(unaff_R14[1] + 0x18) == 0) {
          uVar1 = *unaff_R14;
          uVar2 = FUN_1808aed00(uVar1,lVar3,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808aed00(uVar1,lVar3 + 4,2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808aed00(uVar1,lVar3 + 6,2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808aed00(uVar1,lVar3 + 8,8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808aed00(uVar1,lVar3 + 0x10,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808aed00(uVar1,lVar3 + 0x14,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = FUN_1808aed00(uVar1,lVar3 + 0x18,4);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar1 = FUN_1808995c0(uVar1,lVar3 + 0x1c);
        }
        else {
          uVar1 = 0x1c;
        }
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_1808de0e0();
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        unaff_EBX = unaff_EBX + 1;
      } while (unaff_EBX < (int)(in_stack_00000078 >> 1));
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_1808a6327(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint unaff_EBX;
  longlong lVar3;
  int unaff_R12D;
  longlong *unaff_R13;
  undefined8 *unaff_R14;
  int unaff_R15D;
  uint uStack0000000000000060;
  
  uStack0000000000000060 = unaff_EBX;
  if (unaff_R12D != 0) {
    do {
      uVar1 = FUN_1808dde10();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar3 = (longlong)(int)unaff_EBX * 0x20 + *unaff_R13;
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        uVar1 = *unaff_R14;
        uVar2 = FUN_1808aed00(uVar1,lVar3,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,lVar3 + 4,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,lVar3 + 6,2);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,lVar3 + 8,8);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,lVar3 + 0x10,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,lVar3 + 0x14,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = FUN_1808aed00(uVar1,lVar3 + 0x18,4);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar1 = FUN_1808995c0(uVar1,lVar3 + 0x1c);
      }
      else {
        uVar1 = 0x1c;
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1808de0e0();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      unaff_EBX = unaff_EBX + 1;
      uStack0000000000000060 = uStack0000000000000060 & -unaff_R15D;
    } while ((int)unaff_EBX < unaff_R12D);
  }
  return 0;
}






// 函数: void FUN_1808a6465(void)
void FUN_1808a6465(void)

{
  return;
}






// 函数: void FUN_1808a646f(void)
void FUN_1808a646f(void)

{
  return;
}



undefined8 FUN_1808a6480(longlong *param_1,ulonglong *param_2,uint param_3)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  undefined4 uStack_38;
  undefined4 auStack_34 [3];
  
  uVar5 = (int)param_2[1] * 2 | param_3;
  if (uVar5 < 0x8000) {
    auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)uVar5);
    puVar2 = auStackX_18;
    uVar4 = 2;
  }
  else {
    puVar2 = auStackX_10;
    uVar4 = 4;
    auStackX_10[0] = (uVar5 & 0xffffc000 | 0x4000) * 2 | uVar5 & 0x7fff;
  }
  uVar4 = (**(code **)**(undefined8 **)(*param_1 + 8))(*(undefined8 **)(*param_1 + 8),puVar2,uVar4);
  if ((int)uVar4 == 0) {
    auStackX_8[0] = 0;
    for (uVar3 = *param_2;
        (*param_2 <= uVar3 && (uVar3 < (longlong)(int)param_2[1] * 0x20 + *param_2));
        uVar3 = uVar3 + 0x20) {
      uVar4 = FUN_1808ddf00(param_1,auStackX_8[0]);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      if (*(int *)(param_1[1] + 0x18) != 0) {
        return 0x1c;
      }
      lVar1 = *param_1;
      uVar4 = FUN_180899ef0(lVar1,uVar3);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStackX_18[0] = *(uint *)(uVar3 + 0x10);
      uVar4 = (**(code **)**(undefined8 **)(lVar1 + 8))(*(undefined8 **)(lVar1 + 8),auStackX_18,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStackX_10[0] = *(uint *)(uVar3 + 0x14);
      uVar4 = (**(code **)**(undefined8 **)(lVar1 + 8))(*(undefined8 **)(lVar1 + 8),auStackX_10,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uStack_38 = *(undefined4 *)(uVar3 + 0x18);
      uVar4 = (**(code **)**(undefined8 **)(lVar1 + 8))(*(undefined8 **)(lVar1 + 8),&uStack_38,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStack_34[0] = *(undefined4 *)(uVar3 + 0x1c);
      uVar4 = (**(code **)**(undefined8 **)(lVar1 + 8))(*(undefined8 **)(lVar1 + 8),auStack_34,4);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar4 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
    }
    uVar4 = 0;
  }
  return uVar4;
}



undefined8
FUN_1808a64f4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  ulonglong *unaff_R14;
  int unaff_R15D;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uStackX_24;
  uint uStack0000000000000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  
  uStack0000000000000060 = 0;
  uVar3 = *unaff_R14;
  while( true ) {
    if ((uVar3 < *unaff_R14) || ((longlong)(int)unaff_R14[1] * 0x20 + *unaff_R14 <= uVar3)) {
      return 0;
    }
    uVar2 = FUN_1808ddf00(param_1,uStack0000000000000060);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
      return 0x1c;
    }
    lVar1 = *unaff_RSI;
    uVar2 = FUN_180899ef0(lVar1,uVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    in_stack_00000070 = *(undefined4 *)(uVar3 + 0x10);
    uVar2 = (**(code **)**(undefined8 **)(lVar1 + 8))
                      (*(undefined8 **)(lVar1 + 8),&stack0x00000070,4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    in_stack_00000068 = *(undefined4 *)(uVar3 + 0x14);
    uVar2 = (**(code **)**(undefined8 **)(lVar1 + 8))
                      (*(undefined8 **)(lVar1 + 8),&stack0x00000068,4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = (**(code **)**(undefined8 **)(lVar1 + 8))
                      (*(undefined8 **)(lVar1 + 8),&stack0x00000020,4,param_4,
                       *(undefined4 *)(uVar3 + 0x18));
    if ((int)uVar2 != 0) break;
    uStackX_24 = *(undefined4 *)(uVar3 + 0x1c);
    uVar2 = (**(code **)**(undefined8 **)(lVar1 + 8))(*(undefined8 **)(lVar1 + 8),&uStackX_24,4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = FUN_1808de160(extraout_XMM0_Da,&stack0x00000060);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack0000000000000060 = uStack0000000000000060 & -unaff_R15D;
    uVar3 = uVar3 + 0x20;
    param_1 = extraout_XMM0_Da_00;
  }
  return uVar2;
}






// 函数: void FUN_1808a6625(void)
void FUN_1808a6625(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808a6630(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint auStackX_8 [2];
  longlong lStackX_10;
  uint auStackX_20 [2];
  
  iVar5 = 0;
  auStackX_20[0] = 0;
  lStackX_10 = param_2;
  uVar1 = FUN_1808afe30(*param_1,auStackX_20);
  if ((int)uVar1 == 0) {
    uVar6 = auStackX_20[0] & 1;
    auStackX_8[0] = 0;
    uVar7 = auStackX_20[0] >> 1;
    if (uVar7 != 0) {
      do {
        uVar1 = FUN_1808dde10(param_1,auStackX_8[0]);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        plVar2 = (longlong *)
                 FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x28,&UNK_180986ef0,0x269,0,
                               (char)uVar1,1);
        if (plVar2 == (longlong *)0x0) {
          return 0x26;
        }
        *plVar2 = (longlong)plVar2;
        plVar2[1] = (longlong)plVar2;
        plVar2[2] = 0;
        plVar2[3] = 0;
        *(undefined4 *)(plVar2 + 4) = 0;
        if (*(int *)(param_1[1] + 0x18) == 0) {
          iVar4 = FUN_1808a2740(*param_1,plVar2 + 2);
          if (iVar4 != 0) goto LAB_1808a674a;
          if (*(int *)(param_1[1] + 0x18) != 0) {
            iVar4 = 0x1c;
            goto LAB_1808a674a;
          }
          iVar4 = FUN_1808995c0(*param_1,plVar2 + 4);
          if (iVar4 != 0) goto LAB_1808a674a;
        }
        else {
          iVar4 = 0x1c;
LAB_1808a674a:
          if (iVar4 != 0) {
            FUN_180840270(plVar2 + 2);
            *(longlong *)plVar2[1] = *plVar2;
            *(longlong *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (longlong)plVar2;
            *plVar2 = (longlong)plVar2;
            *(longlong **)plVar2[1] = plVar2;
            *(longlong *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (longlong)plVar2;
            *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_18095b500,0xc6,1);
          }
        }
        plVar3 = (longlong *)*plVar2;
        if (plVar3 != plVar2) {
          iVar4 = 0;
          do {
            plVar3 = (longlong *)*plVar3;
            iVar4 = iVar4 + 1;
          } while (plVar3 != plVar2);
          if (iVar4 != 0) {
            FUN_180840270(plVar2 + 2);
            *(longlong *)plVar2[1] = *plVar2;
            *(longlong *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (longlong)plVar2;
            *plVar2 = (longlong)plVar2;
            *(longlong **)plVar2[1] = plVar2;
            *(longlong *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (longlong)plVar2;
            *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_18095b500,0xc6,1);
          }
        }
        plVar2[1] = *(longlong *)(lStackX_10 + 8);
        *plVar2 = lStackX_10;
        *(longlong **)(lStackX_10 + 8) = plVar2;
        *(longlong **)plVar2[1] = plVar2;
        uVar1 = FUN_1808de0e0(param_1,auStackX_8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar5 = iVar5 + 1;
        auStackX_8[0] = auStackX_8[0] & -uVar6;
      } while (iVar5 < (int)uVar7);
    }
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808a665a(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong unaff_RDI;
  undefined8 *unaff_R14;
  uint uStack0000000000000080;
  longlong in_stack_00000088;
  uint in_stack_00000098;
  
  uStack0000000000000080 = (uint)unaff_RDI;
  uVar6 = unaff_RDI & 0xffffffff;
  if (in_stack_00000098 >> 1 == 0) {
LAB_1808a68ad:
    uVar1 = 0;
  }
  else {
    while (uVar1 = FUN_1808dde10(), (int)uVar1 == 0) {
      plVar2 = (longlong *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x28,&UNK_180986ef0,0x269,
                             (int)unaff_RDI);
      if (plVar2 == (longlong *)0x0) {
        return 0x26;
      }
      *plVar2 = (longlong)plVar2;
      plVar2[1] = (longlong)plVar2;
      plVar2[2] = unaff_RDI;
      plVar2[3] = 0;
      *(int *)(plVar2 + 4) = (int)unaff_RDI;
      if (*(int *)(unaff_R14[1] + 0x18) == 0) {
        iVar4 = FUN_1808a2740(*unaff_R14,plVar2 + 2);
        if (iVar4 != 0) goto LAB_1808a674a;
        if (*(int *)(unaff_R14[1] + 0x18) != 0) {
          iVar4 = 0x1c;
          goto LAB_1808a674a;
        }
        iVar4 = FUN_1808995c0(*unaff_R14,plVar2 + 4);
        if (iVar4 != 0) goto LAB_1808a674a;
      }
      else {
        iVar4 = 0x1c;
LAB_1808a674a:
        if (iVar4 != 0) {
          FUN_180840270(plVar2 + 2);
          *(longlong *)plVar2[1] = *plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
          *(longlong **)plVar2[1] = plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_18095b500,0xc6,1);
        }
      }
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        iVar4 = 0;
        do {
          plVar3 = (longlong *)*plVar3;
          iVar4 = iVar4 + 1;
        } while (plVar3 != plVar2);
        if (iVar4 != 0) {
          FUN_180840270(plVar2 + 2);
          *(longlong *)plVar2[1] = *plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
          *(longlong **)plVar2[1] = plVar2;
          *(longlong *)(*plVar2 + 8) = plVar2[1];
          plVar2[1] = (longlong)plVar2;
          *plVar2 = (longlong)plVar2;
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar2,&UNK_18095b500,0xc6,1);
        }
      }
      plVar2[1] = *(longlong *)(in_stack_00000088 + 8);
      *plVar2 = in_stack_00000088;
      *(longlong **)(in_stack_00000088 + 8) = plVar2;
      *(longlong **)plVar2[1] = plVar2;
      uVar1 = FUN_1808de0e0();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uStack0000000000000080 = uStack0000000000000080 & -(in_stack_00000098 & 1);
      if ((int)(in_stack_00000098 >> 1) <= (int)uVar5) goto LAB_1808a68ad;
      unaff_RDI = 0;
    }
  }
  return uVar1;
}






// 函数: void FUN_1808a68d0(void)
void FUN_1808a68d0(void)

{
  return;
}



undefined8 FUN_1808a68e0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint auStackX_8 [2];
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  
  iVar2 = 0;
  for (puVar1 = (undefined8 *)*param_2; puVar1 != param_2; puVar1 = (undefined8 *)*puVar1) {
    iVar2 = iVar2 + 1;
  }
  uVar3 = iVar2 * 2 | param_3;
  if (uVar3 < 0x8000) {
    auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,(short)uVar3);
    puVar4 = auStackX_18;
    uVar5 = 2;
  }
  else {
    puVar4 = auStackX_10;
    uVar5 = 4;
    auStackX_10[0] = (uVar3 & 0xffffc000 | 0x4000) * 2 | uVar3 & 0x7fff;
  }
  uVar5 = (**(code **)**(undefined8 **)(*param_1 + 8))(*(undefined8 **)(*param_1 + 8),puVar4,uVar5);
  if ((int)uVar5 == 0) {
    puVar1 = (undefined8 *)*param_2;
    auStackX_8[0] = 0;
    for (; puVar1 != param_2; puVar1 = (undefined8 *)*puVar1) {
      uVar5 = FUN_1808ddf00(param_1,auStackX_8[0]);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (*(int *)(param_1[1] + 0x18) == 0) {
        uVar5 = FUN_1808a27f0(*param_1,puVar1 + 2);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (*(int *)(param_1[1] + 0x18) != 0) {
          uVar5 = 0x1c;
          goto LAB_1808a69ee;
        }
        auStackX_18[0] = *(uint *)(puVar1 + 4);
        uVar5 = (**(code **)**(undefined8 **)(*param_1 + 8))
                          (*(undefined8 **)(*param_1 + 8),auStackX_18,4);
        if ((int)uVar5 != 0) goto LAB_1808a69ee;
      }
      else {
        uVar5 = 0x1c;
LAB_1808a69ee:
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
      uVar5 = FUN_1808de160(param_1,auStackX_8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      auStackX_8[0] = auStackX_8[0] & -param_3;
      if (puVar1 == param_2) break;
    }
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 FUN_1808a6964(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint unaff_EBX;
  longlong *unaff_RSI;
  undefined8 *unaff_R14;
  int unaff_R15D;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Da_02;
  uint uStack0000000000000050;
  undefined4 in_stack_00000060;
  
  puVar1 = (undefined8 *)*unaff_R14;
  uStack0000000000000050 = unaff_EBX;
  do {
    if (puVar1 == unaff_R14) {
      return 0;
    }
    uVar2 = FUN_1808ddf00(param_1,uStack0000000000000050);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(unaff_RSI[1] + 0x18) == 0) {
      uVar2 = FUN_1808a27f0(*unaff_RSI,puVar1 + 2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (*(int *)(unaff_RSI[1] + 0x18) != 0) {
        uVar2 = 0x1c;
        uVar3 = extraout_XMM0_Da_00;
        goto LAB_1808a69ee;
      }
      in_stack_00000060 = *(undefined4 *)(puVar1 + 4);
      uVar2 = (**(code **)**(undefined8 **)(*unaff_RSI + 8))
                        (*(undefined8 **)(*unaff_RSI + 8),&stack0x00000060,4);
      uVar3 = extraout_XMM0_Da_01;
      if ((int)uVar2 != 0) goto LAB_1808a69ee;
    }
    else {
      uVar2 = 0x1c;
      uVar3 = extraout_XMM0_Da;
LAB_1808a69ee:
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = FUN_1808de160(uVar3,&stack0x00000050);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uStack0000000000000050 = uStack0000000000000050 & -unaff_R15D;
    if (puVar1 == unaff_R14) {
      return 0;
    }
    puVar1 = (undefined8 *)*puVar1;
    param_1 = extraout_XMM0_Da_02;
  } while( true );
}






