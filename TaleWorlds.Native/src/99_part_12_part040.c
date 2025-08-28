#include "TaleWorlds.Native.Split.h"

// 99_part_12_part040.c - 3 个函数

// 函数: void FUN_1807e58c0(longlong param_1,undefined8 param_2,int param_3)
void FUN_1807e58c0(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1f0);
  if (*(uint *)(param_1 + 0x24) < param_3 + uVar1) {
    param_3 = *(uint *)(param_1 + 0x24) - uVar1;
  }
                    // WARNING: Subroutine does not return
  memcpy(param_2,(ulonglong)uVar1 + *(longlong *)(param_1 + 0x1f8),param_3);
}



undefined8 FUN_1807e5950(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1807e4c80(lVar1);
  *(undefined4 *)(lVar1 + 0x328) = 0;
  return 0;
}



ulonglong FUN_1807e59f0(longlong param_1,longlong param_2,undefined8 param_3,uint *param_4,
                       uint *param_5)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint auStackX_8 [2];
  uint auStack_48 [4];
  
  iVar10 = *(int *)(param_1 + 700);
  uVar3 = 0;
  uVar6 = *param_4;
  uVar9 = 0;
  if (iVar10 == 1) {
    iVar10 = 1;
  }
  else if (iVar10 == 2) {
    iVar10 = 2;
  }
  else if (iVar10 == 3) {
    iVar10 = 3;
  }
  else if ((iVar10 == 4) || (iVar10 == 5)) {
    iVar10 = 4;
  }
  else {
    iVar10 = 1;
  }
  iVar10 = iVar10 * (uint)*(ushort *)(param_1 + 0x118);
  if ((*(uint *)(param_1 + 100) >> 0xc & 1) != 0) {
                    // WARNING: Subroutine does not return
    memset(param_2,0,*param_4 * iVar10);
  }
  *param_5 = (uint)*(ushort *)(param_1 + 0x118);
  if ((-2 < *(int *)(param_1 + 0x25c)) && (*(uint *)(param_1 + 0x264) < *(uint *)(param_1 + 0x260)))
  {
    *(int *)(param_1 + 600) = *(int *)(param_1 + 0x25c);
    *(undefined4 *)(param_1 + 0x25c) = 0xfffffffe;
    *(uint *)(param_1 + 0x264) = *(uint *)(param_1 + 0x260);
  }
  do {
    if (uVar6 == 0) goto LAB_1807e5c97;
    auStackX_8[0] = 0;
    if (((*(byte *)(param_1 + 0x2c0) & 2) == 0) || (*(int *)(param_1 + 600) == 0)) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x318) + 0x2c) & 1) == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(int *)(param_1 + 0x2b8) - 1;
      }
    }
    else {
      uVar7 = *(int *)(param_1 + 0x2c4) + -1 + *(int *)(param_1 + 0x2c8);
    }
    uVar5 = *(uint *)(param_1 + 0x2d8);
    if (uVar7 < uVar5) {
LAB_1807e5bad:
      uVar3 = 0x10;
    }
    else {
      uVar8 = uVar6;
      if (uVar7 < uVar5 + uVar6) {
        uVar8 = (uVar7 - uVar5) + 1;
      }
      if (uVar8 == 0) goto LAB_1807e5bad;
      uVar4 = FUN_1807730d0(*(undefined8 *)(param_1 + 0x318),param_2,uVar8,auStackX_8);
      uVar3 = (uint)uVar4;
      if ((uVar4 & 0xffffffef) != 0) {
        return uVar4;
      }
      param_2 = param_2 + (ulonglong)(auStackX_8[0] * iVar10);
      uVar5 = *(int *)(param_1 + 0x2d8) + auStackX_8[0];
      *(uint *)(param_1 + 0x2d8) = uVar5;
      if (auStackX_8[0] < uVar8) {
        uVar8 = auStackX_8[0];
      }
      uVar9 = uVar9 + uVar8;
      if (uVar6 < auStackX_8[0]) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 - auStackX_8[0];
      }
    }
  } while ((((*(int *)(param_1 + 0x240) != 1) || (uVar5 != auStackX_8[0])) && (uVar3 != 0x10)) &&
          (uVar5 <= uVar7));
  if (((*(byte *)(param_1 + 0x2c0) & 2) == 0) || (iVar1 = *(int *)(param_1 + 600), iVar1 == 0)) {
    if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      memset(param_2,0,iVar10 * uVar6);
    }
    uVar3 = 0x10;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x2c4);
    *(uint *)(param_1 + 0x2d8) = uVar6;
    if (0 < iVar1) {
      *(int *)(param_1 + 600) = iVar1 + -1;
    }
    pcVar2 = *(code **)(*(longlong *)(param_1 + 0x318) + 0xf8);
    if (pcVar2 != (code *)0x0) {
      auStack_48[0] = 0;
      (*pcVar2)(*(longlong *)(param_1 + 0x318),0,0,auStack_48,0,0,0);
      if (auStack_48[0] != 0) {
        uVar6 = (uVar6 / auStack_48[0]) * auStack_48[0];
      }
    }
    FUN_180773610(*(undefined8 *)(param_1 + 0x318),0,uVar6,2);
    *(uint *)(param_1 + 0x2d8) = uVar6;
  }
LAB_1807e5c97:
  *param_4 = uVar9;
  return (ulonglong)uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1807e5cd0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 *apuStackX_8 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x318);
  if (lVar5 != 0) {
    if ((*(code **)(lVar5 + 0x108) != (code *)0x0) && ((*(uint *)(lVar5 + 0x2c) & 0x200) != 0)) {
      (**(code **)(lVar5 + 0x108))(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x3b8));
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x318) + 0x2c);
      *puVar1 = *puVar1 & 0xfffffdff;
      lVar5 = *(longlong *)(param_1 + 0x318);
    }
    if ((*(code **)(lVar5 + 0x58) != (code *)0x0) &&
       (uVar6 = (**(code **)(lVar5 + 0x58))(lVar5), (int)uVar6 != 0)) {
      return uVar6;
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    if ((*(uint *)(param_1 + 100) >> 5 & 1) != 0) {
      return 10;
    }
    if ((*(uint *)(param_1 + 100) >> 6 & 1) != 0) {
      return 8;
    }
    if ((*(longlong *)(param_1 + 0xa8) != 0) &&
       (uVar6 = FUN_180743ab0(*(longlong *)(param_1 + 0xa8),param_1), (int)uVar6 != 0)) {
      return uVar6;
    }
    if ((*(uint *)(param_1 + 100) & 0x300) != 0) {
      FUN_180743160(*(undefined8 *)(param_1 + 0xa8),1);
      uVar6 = FUN_18075dcc0(param_1,0,0,1,1,4);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      lVar5 = *(longlong *)(param_1 + 0xe8);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x38) != 0)) {
        *(longlong *)(param_1 + 0xb0) = param_1;
        (**(code **)(lVar5 + 0x38))();
      }
      lVar5 = *(longlong *)(param_1 + 0x200);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x200) = 0;
        if (((*(longlong *)(param_1 + 0x210) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) ||
           (uVar6 = FUN_18075e410(param_1), (int)uVar6 == 0)) {
          if (*(int *)(param_1 + 0x100) == 0xf) {
            plVar4 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x12780);
            plVar7 = (longlong *)*plVar4;
            if (plVar7 != plVar4) goto LAB_18075fba0;
            plVar2 = plVar7;
            if (*(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x12788) != plVar4) {
              while (plVar7 = plVar2, plVar7 != plVar4) {
LAB_18075fba0:
                plVar2 = (longlong *)*plVar7;
                if (plVar7[2] == param_1) {
                  *(longlong **)plVar7[1] = (longlong *)*plVar7;
                  *(longlong *)(*plVar7 + 8) = plVar7[1];
                  plVar7[1] = (longlong)plVar7;
                  *plVar7 = (longlong)plVar7;
                    // WARNING: Subroutine does not return
                  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar7,&UNK_1809589a0,0xb73,
                                1);
                }
              }
            }
          }
          if ((*(uint *)(param_1 + 100) >> 2 & 1) != 0) {
            uVar6 = func_0x000180771c60(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x11418),
                                        *(undefined4 *)(param_1 + 0xfc),apuStackX_8);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            if (0 < *(int *)(apuStackX_8[0] + 0x44)) {
              *(int *)(apuStackX_8[0] + 0x44) = *(int *)(apuStackX_8[0] + 0x44) + -1;
            }
          }
          if ((*(uint *)(param_1 + 100) >> 1 & 1) != 0) {
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(undefined8 *)(param_1 + 0xe8),
                          &UNK_1809589a0,0xb8f,1);
          }
          if ((*(uint *)(param_1 + 100) >> 9 & 1) == 0) {
            *(undefined4 *)(param_1 + 0x5c) = 0xdeadbead;
            if (*(longlong *)(param_1 + 0x130) == 0) {
              uVar8 = 0xb9e;
            }
            else {
              uVar8 = 0xb9a;
              param_1 = *(longlong *)(param_1 + 0x130);
            }
                    // WARNING: Subroutine does not return
            FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,&UNK_1809589a0,uVar8,1);
          }
          uVar6 = 0;
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x1f0) == 0) {
LAB_18075fb15:
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),lVar5,&UNK_1809589a0,0xb53,1);
        }
        uVar6 = FUN_180743cc0(*(undefined8 *)(param_1 + 0xa8),0);
        if ((int)uVar6 == 0) {
          uVar3 = (**(code **)(param_1 + 0x1f0))(param_1,0,lVar5 + 8);
          uVar6 = FUN_180743da0(*(undefined8 *)(param_1 + 0xa8));
          if (((int)uVar6 == 0) && ((uVar3 == 0 || (uVar6 = (ulonglong)uVar3, uVar3 == 0))))
          goto LAB_18075fb15;
        }
      }
      return uVar6;
    }
    uVar6 = FUN_180743700(*(undefined8 *)(param_1 + 0xa8),apuStackX_8,0x18,1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x400;
    UNLOCK();
    *apuStackX_8[0] = 5;
    *(longlong *)(apuStackX_8[0] + 8) = param_1;
    apuStackX_8[0][0x10] = 1;
    apuStackX_8[0][0x11] = 1;
    apuStackX_8[0][0x12] = 1;
    uVar6 = func_0x000180743b40(*(undefined8 *)(param_1 + 0xa8),apuStackX_8[0],1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  return 0;
}



undefined8 FUN_1807e5d50(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uStackX_14;
  uint auStackX_18 [4];
  
  uVar1 = func_0x0001807e57d0();
  if ((int)uVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x318);
    uStackX_14 = (uint)((ulonglong)param_2 >> 0x20);
    auStackX_18[0] = 0;
    uVar3 = uStackX_14;
    if (*(code **)(lVar2 + 0xf8) != (code *)0x0) {
      (**(code **)(lVar2 + 0xf8))(lVar2,0,0,auStackX_18,0,0,0);
      lVar2 = *(longlong *)(param_1 + 0x318);
      if (auStackX_18[0] != 0) {
        uVar3 = (uStackX_14 / auStackX_18[0]) * auStackX_18[0];
      }
    }
    *(undefined4 *)(lVar2 + 0x158) = 0;
    if (*(longlong *)(lVar2 + 0x140) != 0) {
                    // WARNING: Subroutine does not return
      memset(*(longlong *)(lVar2 + 0x140),0,*(undefined4 *)(lVar2 + 0x154));
    }
    if (*(code **)(lVar2 + 0xb0) != (code *)0x0) {
      (**(code **)(lVar2 + 0xb0))(lVar2);
    }
    FUN_180773610(*(undefined8 *)(param_1 + 0x318),0,uVar3,2);
    if (auStackX_18[0] != 0) {
      *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + uStackX_14 % auStackX_18[0];
    }
    *(uint *)(param_1 + 0x2d8) = uVar3;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_1807e5d6a(void)

{
  longlong lVar1;
  uint uVar2;
  longlong unaff_RDI;
  undefined8 in_stack_00000068;
  uint uStack0000000000000070;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x318);
  uStack0000000000000070 = 0;
  uVar2 = in_stack_00000068._4_4_;
  if (*(code **)(lVar1 + 0xf8) != (code *)0x0) {
    (**(code **)(lVar1 + 0xf8))(lVar1,0,0,&stack0x00000070,0);
    lVar1 = *(longlong *)(unaff_RDI + 0x318);
    if (uStack0000000000000070 != 0) {
      uVar2 = (in_stack_00000068._4_4_ / uStack0000000000000070) * uStack0000000000000070;
    }
  }
  *(undefined4 *)(lVar1 + 0x158) = 0;
  if (*(longlong *)(lVar1 + 0x140) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(lVar1 + 0x140),0,*(undefined4 *)(lVar1 + 0x154));
  }
  if (*(code **)(lVar1 + 0xb0) != (code *)0x0) {
    (**(code **)(lVar1 + 0xb0))(lVar1);
  }
  FUN_180773610(*(undefined8 *)(unaff_RDI + 0x318),0,uVar2,2);
  if (uStack0000000000000070 != 0) {
    *(int *)(unaff_RDI + 0x26c) =
         *(int *)(unaff_RDI + 0x26c) + in_stack_00000068._4_4_ % uStack0000000000000070;
  }
  *(uint *)(unaff_RDI + 0x2d8) = uVar2;
  return 0;
}



undefined8 FUN_1807e5d7f(void)

{
  longlong unaff_RBX;
  uint unaff_ESI;
  longlong unaff_RDI;
  undefined8 in_stack_00000068;
  uint uStack0000000000000070;
  
  uStack0000000000000070 = 0;
  if (*(code **)(unaff_RBX + 0xf8) != (code *)0x0) {
    (**(code **)(unaff_RBX + 0xf8))();
    unaff_RBX = *(longlong *)(unaff_RDI + 0x318);
    if (uStack0000000000000070 != 0) {
      unaff_ESI = (unaff_ESI / uStack0000000000000070) * uStack0000000000000070;
    }
  }
  *(undefined4 *)(unaff_RBX + 0x158) = 0;
  if (*(longlong *)(unaff_RBX + 0x140) != 0) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(unaff_RBX + 0x140),0,*(undefined4 *)(unaff_RBX + 0x154));
  }
  if (*(code **)(unaff_RBX + 0xb0) != (code *)0x0) {
    (**(code **)(unaff_RBX + 0xb0))(unaff_RBX);
  }
  FUN_180773610(*(undefined8 *)(unaff_RDI + 0x318),0,unaff_ESI,2);
  if (uStack0000000000000070 != 0) {
    *(int *)(unaff_RDI + 0x26c) =
         *(int *)(unaff_RDI + 0x26c) + in_stack_00000068._4_4_ % uStack0000000000000070;
  }
  *(uint *)(unaff_RDI + 0x2d8) = unaff_ESI;
  return 0;
}






// 函数: void FUN_1807e5de8(undefined8 param_1)
void FUN_1807e5de8(undefined8 param_1)

{
  longlong unaff_RBX;
  
                    // WARNING: Subroutine does not return
  memset(param_1,0,*(undefined4 *)(unaff_RBX + 0x154));
}



undefined8 FUN_1807e5e2b(uint param_1)

{
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  undefined8 in_stack_00000068;
  
  *(int *)(unaff_RDI + 0x26c) = *(int *)(unaff_RDI + 0x26c) + in_stack_00000068._4_4_ % param_1;
  *(undefined4 *)(unaff_RDI + 0x2d8) = unaff_ESI;
  return 0;
}






// 函数: void FUN_1807e5e46(void)
void FUN_1807e5e46(void)

{
  return;
}



undefined8 FUN_1807e5e50(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint auStackX_8 [2];
  int aiStackX_10 [4];
  undefined4 auStackX_20 [2];
  ulonglong uVar9;
  
  iVar2 = *(int *)(param_1 + 0x2ec);
  iVar3 = *(int *)(param_1 + 0x2e8);
  lVar7 = *(longlong *)(param_1 + 0x248);
  aiStackX_10[0] = 0;
  auStackX_8[0] = 0;
  auStackX_20[0] = 0;
  uVar5 = FUN_1807e4970();
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x318);
  if ((*(code **)(lVar6 + 0x108) != (code *)0x0) && ((*(uint *)(lVar6 + 0x2c) & 0x200) != 0)) {
    (**(code **)(lVar6 + 0x108))(lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x3b8));
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x318) + 0x2c);
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  uVar5 = (**(code **)(*(longlong *)(param_2 + 0x60) + 0x88))
                    (*(longlong *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0xc0),param_1 + 0x2e0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  *(uint *)(*(longlong *)(param_1 + 0x318) + 0x2c) =
       *(uint *)(*(longlong *)(param_2 + 0x60) + 0x2c) | 0x100;
  *(uint *)(*(longlong *)(param_1 + 0x318) + 0x160) =
       *(uint *)(*(longlong *)(param_2 + 0x60) + 0x160) & 0x4000;
  uVar9 = *(ulonglong *)(param_2 + 0x160);
  uVar5 = FUN_1807e5830(param_1 + 0x330,*(undefined8 *)(param_1 + 0xa8),
                        *(undefined4 *)(param_2 + 0x48),0,uVar9);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  pcVar4 = *(code **)(*(longlong *)(param_2 + 0x60) + 0xf8);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = *(code **)(*(longlong *)(param_1 + 0x318) + 0xf8);
    if (pcVar4 != (code *)0x0) {
      uVar9 = 0;
      uVar5 = (*pcVar4)(*(longlong *)(param_1 + 0x318),*(undefined4 *)(param_1 + 0x2ec),aiStackX_10,
                        auStackX_8,0,auStackX_20,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x3b8));
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
  }
  else {
    uVar9 = 0;
    uVar5 = (*pcVar4)(*(longlong *)(param_2 + 0x60),*(undefined4 *)(param_1 + 0x2ec),aiStackX_10,
                      auStackX_8,0,auStackX_20,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x3b8));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  if (auStackX_8[0] < 2) {
    uVar5 = func_0x000180746360(*(undefined8 *)(param_1 + 0xa8),auStackX_8,0);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else if (auStackX_8[0] == 0xffffffff) {
    auStackX_8[0] = 0;
  }
  if (aiStackX_10[0] == *(int *)(param_1 + 0x328)) {
LAB_1807e60dd:
    if (((*(uint *)(param_1 + 0x284) != auStackX_8[0]) || (*(int *)(param_1 + 0x2ec) != iVar2)) ||
       (*(int *)(param_1 + 0x2e8) != iVar3)) {
      *(uint *)(param_1 + 0x284) = auStackX_8[0];
      uVar8 = auStackX_8[0] + 8;
      iVar2 = *(int *)(param_1 + 0x2e8);
      if (iVar2 == 1) {
        lVar6 = 8;
LAB_1807e613d:
        uVar8 = (uint)((ulonglong)uVar8 * lVar6 >> 3);
      }
      else {
        if (iVar2 == 2) {
          lVar6 = 0x10;
          goto LAB_1807e613d;
        }
        if (iVar2 == 3) {
          lVar6 = 0x18;
          goto LAB_1807e613d;
        }
        if ((iVar2 == 4) || (iVar2 == 5)) {
          lVar6 = 0x20;
          goto LAB_1807e613d;
        }
      }
      *(uint *)(param_1 + 0x288) = uVar8 * *(int *)(param_1 + 0x2ec) + 0x1f & 0xffffffe0;
      if (*(longlong *)(param_1 + 0x270) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(lVar7 + 0x30,*(longlong *)(param_1 + 0x270),&DAT_18098bc73,0,1);
      }
      if (auStackX_8[0] != 0) {
        lVar7 = FUN_180742050(lVar7 + 0x30,*(int *)(param_1 + 0x288) + 0x20,&DAT_18098bc73,0,
                              uVar9 & 0xffffffff00000000);
        *(longlong *)(param_1 + 0x270) = lVar7;
        if (lVar7 == 0) goto LAB_1807e61c9;
        *(ulonglong *)(param_1 + 0x278) = lVar7 + 0x1fU & 0xffffffffffffffe0;
      }
    }
    pcVar4 = *(code **)(*(longlong *)(param_1 + 0x318) + 0x100);
    if (pcVar4 != (code *)0x0) {
      uVar5 = (*pcVar4)(*(longlong *)(param_1 + 0x318),*(undefined4 *)(param_1 + 0x2ec),
                        *(undefined4 *)(param_1 + 0x2f0),*(undefined4 *)(param_2 + 0xc0),
                        *(undefined8 *)(param_1 + 800),*(undefined8 *)(param_2 + 0x60),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x3b8));
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x318) + 0x2c);
      *puVar1 = *puVar1 | 0x200;
    }
    *(undefined2 *)(param_1 + 0x118) = *(undefined2 *)(param_1 + 0x2ec);
    *(undefined **)(param_1 + 0x298) = &UNK_1807e59e0;
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 0x54);
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c);
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    *(int *)(param_1 + 0x328) = aiStackX_10[0];
    if (*(longlong *)(param_1 + 800) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(lVar7 + 0x30,*(longlong *)(param_1 + 800),&DAT_18098bc73,0,1);
    }
    if (aiStackX_10[0] == 0) goto LAB_1807e60dd;
    uVar9 = uVar9 & 0xffffffff00000000;
    lVar6 = FUN_180742050(lVar7 + 0x30,*(undefined4 *)(param_1 + 0x328),&DAT_18098bc73,0,uVar9);
    *(longlong *)(param_1 + 800) = lVar6;
    if (lVar6 != 0) goto LAB_1807e60dd;
LAB_1807e61c9:
    uVar5 = 0x26;
  }
  return uVar5;
}



undefined8 FUN_1807e6055(undefined8 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  int in_EAX;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RBX;
  int unaff_EBP;
  longlong unaff_RDI;
  uint uVar6;
  ulonglong unaff_R12;
  int unaff_R14D;
  longlong unaff_R15;
  int in_stack_00000080;
  
  if (in_EAX == *(int *)(unaff_RBX + 0x328)) {
LAB_1807e60dd:
    if (((*(int *)(unaff_RBX + 0x284) != param_2) || (*(int *)(unaff_RBX + 0x2ec) != unaff_EBP)) ||
       (*(int *)(unaff_RBX + 0x2e8) != unaff_R14D)) {
      *(int *)(unaff_RBX + 0x284) = param_2;
      uVar6 = param_2 + 8;
      iVar2 = *(int *)(unaff_RBX + 0x2e8);
      if (iVar2 == 1) {
        lVar4 = 8;
LAB_1807e613d:
        uVar6 = (uint)((ulonglong)uVar6 * lVar4 >> 3);
      }
      else {
        if (iVar2 == 2) {
          lVar4 = 0x10;
          goto LAB_1807e613d;
        }
        if (iVar2 == 3) {
          lVar4 = 0x18;
          goto LAB_1807e613d;
        }
        if ((iVar2 == 4) || (iVar2 == 5)) {
          lVar4 = 0x20;
          goto LAB_1807e613d;
        }
      }
      *(uint *)(unaff_RBX + 0x288) = uVar6 * *(int *)(unaff_RBX + 0x2ec) + 0x1f & 0xffffffe0;
      if (*(longlong *)(unaff_RBX + 0x270) != 0) {
                    // WARNING: Subroutine does not return
        FUN_180742250(unaff_R15 + 0x30,*(longlong *)(unaff_RBX + 0x270),&DAT_18098bc73,0,1);
      }
      if (param_2 != 0) {
        lVar4 = FUN_180742050(unaff_R15 + 0x30,*(int *)(unaff_RBX + 0x288) + 0x20,&DAT_18098bc73,0,
                              unaff_R12 & 0xffffffff);
        *(longlong *)(unaff_RBX + 0x270) = lVar4;
        if (lVar4 == 0) goto LAB_1807e61c9;
        *(ulonglong *)(unaff_RBX + 0x278) = lVar4 + 0x1fU & 0xffffffffffffffe0;
      }
    }
    pcVar3 = *(code **)(*(longlong *)(unaff_RBX + 0x318) + 0x100);
    if (pcVar3 != (code *)0x0) {
      uVar5 = (*pcVar3)(*(longlong *)(unaff_RBX + 0x318),*(undefined4 *)(unaff_RBX + 0x2ec),
                        *(undefined4 *)(unaff_RBX + 0x2f0),*(undefined4 *)(unaff_RDI + 0xc0),
                        *(undefined8 *)(unaff_RBX + 800));
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      puVar1 = (uint *)(*(longlong *)(unaff_RBX + 0x318) + 0x2c);
      *puVar1 = *puVar1 | 0x200;
    }
    *(undefined2 *)(unaff_RBX + 0x118) = *(undefined2 *)(unaff_RBX + 0x2ec);
    *(undefined **)(unaff_RBX + 0x298) = &UNK_1807e59e0;
    *(undefined4 *)(unaff_RBX + 0x2b8) = *(undefined4 *)(unaff_RDI + 0x44);
    *(undefined4 *)(unaff_RBX + 600) = *(undefined4 *)(unaff_RDI + 0x54);
    *(ulonglong *)(unaff_RBX + 0x238) = unaff_R12;
    *(ulonglong *)(unaff_RBX + 0x268) = unaff_R12;
    *(int *)(unaff_RBX + 0x294) = (int)unaff_R12;
    *(undefined4 *)(unaff_RBX + 0x2c4) = *(undefined4 *)(unaff_RDI + 0x4c);
    *(undefined4 *)(unaff_RBX + 0x2c8) = *(undefined4 *)(unaff_RDI + 0x50);
    *(undefined4 *)(unaff_RBX + 0x2c0) = *(undefined4 *)(unaff_RDI + 0x2c);
    uVar5 = 0;
    *(undefined4 *)(unaff_RBX + 0x25c) = 0xfffffffe;
    *(int *)(unaff_RBX + 0x58) = (int)unaff_R12;
  }
  else {
    *(int *)(unaff_RBX + 0x328) = in_EAX;
    if (*(longlong *)(unaff_RBX + 800) != 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(unaff_R15 + 0x30,*(longlong *)(unaff_RBX + 800),&DAT_18098bc73,0,1);
    }
    if (in_EAX == 0) goto LAB_1807e60dd;
    lVar4 = FUN_180742050(unaff_R15 + 0x30,*(undefined4 *)(unaff_RBX + 0x328),&DAT_18098bc73,0,
                          unaff_R12 & 0xffffffff);
    *(longlong *)(unaff_RBX + 800) = lVar4;
    param_2 = in_stack_00000080;
    if (lVar4 != 0) goto LAB_1807e60dd;
LAB_1807e61c9:
    uVar5 = 0x26;
  }
  return uVar5;
}






