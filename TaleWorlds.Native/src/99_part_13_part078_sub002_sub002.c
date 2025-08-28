#include "TaleWorlds.Native.Split.h"

// 99_part_13_part078_sub002_sub002.c - 1 个函数

// 函数: void FUN_1808dea80(int *param_1)
void FUN_1808dea80(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uStackX_8;
  undefined8 uStackX_10;
  
  uStackX_8 = 0;
  if (((*param_1 == 0) ||
      ((iVar3 = func_0x00018088c590(*param_1,&uStackX_10), iVar3 == 0 &&
       (iVar3 = FUN_18088c740(&uStackX_8,uStackX_10), iVar3 == 0)))) &&
     (iVar3 = FUN_18088c620(param_1), iVar3 == 0)) {
    lVar2 = *(longlong *)(param_1 + 6);
    if ((lVar2 != 0) && (*(int **)(lVar2 + 0x2e8) != (int *)0x0)) {
      if (*(int **)(lVar2 + 0x2e8) != param_1) goto LAB_1808deb6a;
      *(undefined8 *)(lVar2 + 0x2e8) = 0;
    }
    plVar1 = (longlong *)(param_1 + 2);
    **(longlong **)(param_1 + 4) = *plVar1;
    *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_1 + 4);
    *(longlong **)(param_1 + 4) = plVar1;
    *plVar1 = (longlong)plVar1;
    **(longlong **)(param_1 + 4) = (longlong)plVar1;
    *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_1 + 4);
    *(longlong **)(param_1 + 4) = plVar1;
    *plVar1 = (longlong)plVar1;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_1,&UNK_180988b90,0x50,1);
  }
LAB_1808deb6a:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStackX_8);
}



undefined8 FUN_1808deb90(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int aiStackX_10 [2];
  
  if (param_2 == (int *)0x0) {
    return 0x1c;
  }
  iVar3 = 0;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) < 1) {
    iVar4 = (0 < *(int *)(param_1 + 0x28)) + 1;
  }
  else if (0 < *(int *)(param_1 + 0x28)) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    while( true ) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x1a8) <= iVar3)) {
        *param_2 = 3;
        return 0;
      }
      uVar2 = FUN_1808c7f30(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)iVar3 * 8) +
                             0xd0),aiStackX_10);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (aiStackX_10[0] == 4) break;
      if (aiStackX_10[0] == 2) {
        *param_2 = 2;
        return 0;
      }
      iVar3 = iVar3 + 1;
    }
    *param_2 = 4;
    return 0;
  }
  *param_2 = iVar4;
  return 0;
}



undefined8 FUN_1808debaa(longlong param_1,int *param_2)

{
  longlong lVar1;
  int in_EAX;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_RSI;
  int in_stack_00000038;
  
  iVar3 = 0;
  iVar4 = 0;
  if (*(int *)(param_1 + 0x2c) < 1) {
    iVar4 = (0 < in_EAX) + 1;
  }
  else if (0 < in_EAX) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    while( true ) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x1a8) <= iVar3)) {
        *unaff_RSI = 3;
        return 0;
      }
      uVar2 = FUN_1808c7f30(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)iVar3 * 8) +
                             0xd0),&stack0x00000038);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (in_stack_00000038 == 4) break;
      if (in_stack_00000038 == 2) {
        *unaff_RSI = 2;
        return 0;
      }
      iVar3 = iVar3 + 1;
    }
    *unaff_RSI = 4;
    return 0;
  }
  *param_2 = iVar4;
  return 0;
}



undefined8 FUN_1808dec29(void)

{
  undefined4 *unaff_RSI;
  
  *unaff_RSI = 4;
  return 0;
}



undefined8 FUN_1808dec41(void)

{
  undefined4 *unaff_RSI;
  
  *unaff_RSI = 3;
  return 0;
}



undefined8 FUN_1808dec59(undefined8 param_1,int *param_2)

{
  int in_EAX;
  undefined8 unaff_RBX;
  
  *param_2 = (int)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0 < in_EAX) + 1;
  return 0;
}



undefined8 FUN_1808dec80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = 1;
    for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(lVar1 + 0x1a8))); iVar3 = iVar3 + 1) {
      uVar2 = FUN_1808c8390(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)iVar3 * 8) +
                             0xd0),param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    return 0;
  }
  return 0x1c;
}



undefined8 FUN_1808dec96(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = 1;
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(lVar1 + 0x1a8))); iVar3 = iVar3 + 1) {
    uVar2 = FUN_1808c8390(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)iVar3 * 8) + 0xd0
                           ));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 FUN_1808decf3(void)

{
  return 0x1c;
}



undefined8 FUN_1808ded00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return 0x1c;
  }
  iVar4 = 0;
  while( true ) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x1a8) <= iVar4)) {
      return 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x1a0) + (longlong)iVar4 * 8);
    if (((*(uint *)(lVar2 + 0xf8) >> 3 & 1) != 0) &&
       (uVar3 = FUN_1808c8390(*(undefined8 *)(lVar2 + 0xd0),param_2), (int)uVar3 != 0)) break;
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}



undefined8 FUN_1808dedb0(longlong param_1,undefined8 param_2,longlong *param_3,ulonglong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lStackX_8;
  ulonglong uStackX_18;
  ulonglong *puStackX_20;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (((*(int *)((longlong)param_3 + 0x24) != 0) && ((int)param_3[1] != 0)) &&
     (iVar6 = *(int *)(*param_3 +
                      (longlong)
                      (int)(((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
                           (int)param_3[1] - 1U) * 4), iVar6 != -1)) {
    do {
      lVar3 = param_3[2] + (longlong)iVar6 * 0x18;
      if (*(longlong *)(param_3[2] + (longlong)iVar6 * 0x18) == param_1) {
        uStackX_18 = *(ulonglong *)(lVar3 + 0x10);
        goto FUN_1808dee1f;
      }
      iVar6 = *(int *)(lVar3 + 8);
    } while (iVar6 != -1);
  }
  uStackX_18 = 0;
FUN_1808dee1f:
  uVar8 = uStackX_18;
  puStackX_20 = param_4;
  if (uStackX_18 == 0) {
    if ((*(short *)(param_1 + 0xc) == 3) ||
       ((((*(int *)(param_1 + 0x58) == 0 && (*(int *)(param_1 + 0x5c) == 0)) &&
         ((*(int *)(param_1 + 0x60) == 0 && (*(int *)(param_1 + 100) == 0)))) ||
        (lStackX_8 = param_1, lVar3 = FUN_1808dc7b0(param_2), lVar3 == 0)))) {
      return 0x1c;
    }
    uVar4 = FUN_1808dedb0(lVar3,param_2,param_3,&uStackX_18);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = FUN_1808df800(param_3,&lStackX_8,&uStackX_18);
    uVar8 = uStackX_18;
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uStack_48 = *(undefined4 *)(param_1 + 0x10);
    uStack_44 = *(undefined4 *)(param_1 + 0x14);
    uStack_40 = *(undefined4 *)(param_1 + 0x18);
    uStack_3c = *(undefined4 *)(param_1 + 0x1c);
    iVar1 = *(int *)(uStackX_18 + 0x78);
    iVar9 = 0;
    iVar6 = iVar1 + -1;
    if (-1 < iVar6) {
      lVar3 = *(longlong *)(uStackX_18 + 0x70);
      do {
        iVar1 = (iVar6 + iVar9) / 2;
        uVar7 = (longlong)iVar1 * 0x10 + lVar3;
        iVar2 = memcmp(uVar7,&uStack_48,0x10);
        if (iVar2 < 0) {
          uVar5 = 0xffffffff;
        }
        else {
          iVar2 = memcmp(&uStack_48,uVar7,0x10);
          uVar5 = (uint)(iVar2 < 0);
          if (uVar5 == 0) goto LAB_1808def61;
        }
        if (-1 < (int)uVar5) {
          iVar6 = iVar1 + -1;
        }
        iVar1 = iVar1 + 1;
        if (-1 < (int)uVar5) {
          iVar1 = iVar9;
        }
        iVar9 = iVar1;
      } while (iVar9 <= iVar6);
      iVar1 = *(int *)(uVar8 + 0x78);
    }
    uVar7 = (longlong)iVar1 * 0x10 + *(longlong *)(uVar8 + 0x70);
LAB_1808def61:
    if ((uVar7 < *(ulonglong *)(uVar8 + 0x70)) ||
       ((longlong)*(int *)(uVar8 + 0x78) * 0x10 + *(ulonglong *)(uVar8 + 0x70) <= uVar7)) {
      uStack_48 = *(undefined4 *)(param_1 + 0x10);
      uStack_44 = *(undefined4 *)(param_1 + 0x14);
      uStack_40 = *(undefined4 *)(param_1 + 0x18);
      uStack_3c = *(undefined4 *)(param_1 + 0x1c);
      uVar4 = FUN_18086da90(uVar8 + 0x70,&uStack_48,uStackX_18 & 0xff);
      uVar8 = uStackX_18;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  if (puStackX_20 != (ulonglong *)0x0) {
    *puStackX_20 = uVar8;
  }
  return 0;
}



undefined8 FUN_1808dee1f(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong unaff_RBP;
  int iVar8;
  longlong unaff_RDI;
  int iVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined4 uStack000000000000002c;
  longlong *in_stack_00000088;
  
  if (unaff_RBP == 0) {
    if (((*(short *)(unaff_RDI + 0xc) == 3) ||
        ((((*(int *)(unaff_RDI + 0x58) == 0 && (*(int *)(unaff_RDI + 0x5c) == 0)) &&
          (*(int *)(unaff_RDI + 0x60) == 0)) && (*(int *)(unaff_RDI + 100) == 0)))) ||
       (lVar4 = FUN_1808dc7b0(), lVar4 == 0)) {
      return 0x1c;
    }
    uVar5 = FUN_1808dedb0(lVar4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar5 = FUN_1808df800(extraout_XMM0_Da,&stack0x00000070,&stack0x00000080);
    uVar1 = uRam0000000000000070;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uStackX_20 = *(undefined4 *)(unaff_RDI + 0x10);
    uStackX_24 = *(undefined4 *)(unaff_RDI + 0x14);
    uStack000000000000002c = *(undefined4 *)(unaff_RDI + 0x1c);
    iVar9 = 0;
    iVar8 = iRam0000000000000078 + -1;
    if (-1 < iVar8) {
      do {
        iVar2 = (iVar8 + iVar9) / 2;
        uVar7 = (longlong)iVar2 * 0x10 + uVar1;
        iVar3 = memcmp(uVar7,&uStackX_20,0x10);
        if (iVar3 < 0) {
          uVar6 = 0xffffffff;
        }
        else {
          iVar3 = memcmp(&uStackX_20,uVar7,0x10);
          uVar6 = (uint)(iVar3 < 0);
          if (uVar6 == 0) goto LAB_1808def61;
        }
        if (-1 < (int)uVar6) {
          iVar8 = iVar2 + -1;
        }
        iVar2 = iVar2 + 1;
        if (-1 < (int)uVar6) {
          iVar2 = iVar9;
        }
        iVar9 = iVar2;
      } while (iVar9 <= iVar8);
    }
    uVar7 = (longlong)iRam0000000000000078 * 0x10 + uRam0000000000000070;
LAB_1808def61:
    if ((uVar7 < uRam0000000000000070) ||
       ((longlong)iRam0000000000000078 * 0x10 + uRam0000000000000070 <= uVar7)) {
      uStackX_20 = *(undefined4 *)(unaff_RDI + 0x10);
      uStackX_24 = *(undefined4 *)(unaff_RDI + 0x14);
      uStack000000000000002c = *(undefined4 *)(unaff_RDI + 0x1c);
      uVar5 = FUN_18086da90(0x70,&uStackX_20,0);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
  }
  if (in_stack_00000088 != (longlong *)0x0) {
    *in_stack_00000088 = unaff_RBP;
  }
  return 0;
}



undefined8 FUN_1808def14(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong in_RAX;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong unaff_RDI;
  int iVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  undefined4 uStack000000000000002c;
  ulonglong uStack0000000000000080;
  ulonglong *in_stack_00000088;
  
  uStack0000000000000080 = *(ulonglong *)(in_RAX + 0x10);
  uVar7 = uStack0000000000000080;
  if (uStack0000000000000080 == 0) {
    if (((*(short *)(unaff_RDI + 0xc) == 3) ||
        ((((*(int *)(unaff_RDI + 0x58) == 0 && (*(int *)(unaff_RDI + 0x5c) == 0)) &&
          (*(int *)(unaff_RDI + 0x60) == 0)) && (*(int *)(unaff_RDI + 100) == 0)))) ||
       (lVar3 = FUN_1808dc7b0(), lVar3 == 0)) {
      return 0x1c;
    }
    uVar4 = FUN_1808dedb0(lVar3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar4 = FUN_1808df800(extraout_XMM0_Da,&stack0x00000070,&stack0x00000080);
    uVar7 = uStack0000000000000080;
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uStackX_20 = *(undefined4 *)(unaff_RDI + 0x10);
    uStackX_24 = *(undefined4 *)(unaff_RDI + 0x14);
    uStack000000000000002c = *(undefined4 *)(unaff_RDI + 0x1c);
    iVar1 = *(int *)(uStack0000000000000080 + 0x78);
    iVar9 = 0;
    iVar8 = iVar1 + -1;
    if (-1 < iVar8) {
      lVar3 = *(longlong *)(uStack0000000000000080 + 0x70);
      do {
        iVar1 = (iVar8 + iVar9) / 2;
        uVar6 = (longlong)iVar1 * 0x10 + lVar3;
        iVar2 = memcmp(uVar6,&uStackX_20,0x10);
        if (iVar2 < 0) {
          uVar5 = 0xffffffff;
        }
        else {
          iVar2 = memcmp(&uStackX_20,uVar6,0x10);
          uVar5 = (uint)(iVar2 < 0);
          if (uVar5 == 0) goto LAB_1808def61;
        }
        if (-1 < (int)uVar5) {
          iVar8 = iVar1 + -1;
        }
        iVar1 = iVar1 + 1;
        if (-1 < (int)uVar5) {
          iVar1 = iVar9;
        }
        iVar9 = iVar1;
      } while (iVar9 <= iVar8);
      iVar1 = *(int *)(uVar7 + 0x78);
    }
    uVar6 = (longlong)iVar1 * 0x10 + *(longlong *)(uVar7 + 0x70);
LAB_1808def61:
    if ((uVar6 < *(ulonglong *)(uVar7 + 0x70)) ||
       ((longlong)*(int *)(uVar7 + 0x78) * 0x10 + *(ulonglong *)(uVar7 + 0x70) <= uVar6)) {
      uStackX_20 = *(undefined4 *)(unaff_RDI + 0x10);
      uStackX_24 = *(undefined4 *)(unaff_RDI + 0x14);
      uStack000000000000002c = *(undefined4 *)(unaff_RDI + 0x1c);
      uVar4 = FUN_18086da90(uVar7 + 0x70,&uStackX_20,uStack0000000000000080 & 0xff);
      uVar7 = uStack0000000000000080;
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
  }
  if (in_stack_00000088 != (ulonglong *)0x0) {
    *in_stack_00000088 = uVar7;
  }
  return 0;
}



undefined8 FUN_1808def1d(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined8 in_R9;
  longlong unaff_R12;
  longlong unaff_R13;
  int unaff_R15D;
  undefined4 uStack000000000000002c;
  undefined1 uStack0000000000000080;
  longlong *in_stack_00000088;
  
  do {
    iVar2 = memcmp(&stack0x00000020,unaff_RBX,0x10);
    uVar4 = (uint)(iVar2 < 0);
    iVar1 = unaff_R15D;
    if (iVar2 >= 0) {
LAB_1808def61:
      if ((unaff_RBX < *(ulonglong *)(unaff_RBP + 0x70)) ||
         ((longlong)*(int *)(unaff_RBP + 0x78) * 0x10 + *(ulonglong *)(unaff_RBP + 0x70) <=
          unaff_RBX)) {
        uStack000000000000002c = *(undefined4 *)(unaff_RDI + 0x1c);
        uVar3 = FUN_18086da90(unaff_RBP + 0x70,&stack0x00000020,uStack0000000000000080,in_R9,
                              *(undefined4 *)(unaff_RDI + 0x10));
        unaff_RBP = _uStack0000000000000080;
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      if (in_stack_00000088 != (longlong *)0x0) {
        *in_stack_00000088 = unaff_RBP;
      }
      return 0;
    }
    while( true ) {
      if (-1 < (int)uVar4) {
        unaff_ESI = (int)unaff_R13 + -1;
      }
      unaff_R15D = (int)unaff_R13 + 1;
      if (-1 < (int)uVar4) {
        unaff_R15D = iVar1;
      }
      if (unaff_ESI < unaff_R15D) {
        unaff_RBX = (longlong)*(int *)(unaff_RBP + 0x78) * 0x10 + *(longlong *)(unaff_RBP + 0x70);
        goto LAB_1808def61;
      }
      unaff_R13 = (longlong)((unaff_ESI + unaff_R15D) / 2);
      unaff_RBX = unaff_R13 * 0x10 + unaff_R12;
      iVar1 = memcmp(unaff_RBX,&stack0x00000020,0x10);
      if (-1 < iVar1) break;
      uVar4 = 0xffffffff;
      iVar1 = unaff_R15D;
    }
  } while( true );
}



undefined8 FUN_1808def79(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined1 uStack0000000000000080;
  longlong *in_stack_00000088;
  
  if ((ulonglong)((longlong)*(int *)(unaff_RBP + 0x78) * 0x10 + param_1) <= unaff_RBX) {
    uStack0000000000000028 = *(undefined4 *)(unaff_RDI + 0x18);
    uStack000000000000002c = *(undefined4 *)(unaff_RDI + 0x1c);
    uVar1 = FUN_18086da90(unaff_RBP + 0x70,&stack0x00000020,uStack0000000000000080,param_4,
                          *(undefined4 *)(unaff_RDI + 0x10));
    unaff_RBP = _uStack0000000000000080;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (in_stack_00000088 != (longlong *)0x0) {
    *in_stack_00000088 = unaff_RBP;
  }
  return 0;
}



undefined8 FUN_1808deff0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iStackX_20;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar9 = 0;
LAB_1808df00a:
  do {
    if ((iVar9 < 0) || (*(int *)(param_1 + 0x68) <= iVar9)) {
      return 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar9 * 8);
    if ((-1 < *(short *)(lVar2 + 0xe)) && ((*(byte *)(lVar2 + 0xc4) & 1) == 0)) {
      iVar1 = *(int *)(lVar2 + 0x88);
      iVar12 = 0;
      iStackX_20 = -1;
      iVar13 = iStackX_20;
      if (0 < iVar1) {
        puVar11 = *(undefined4 **)(lVar2 + 0x80);
        iVar5 = *(int *)(param_1 + 0x88) + -1;
        do {
          uStack_58 = *puVar11;
          uStack_54 = puVar11[1];
          uStack_50 = puVar11[2];
          uStack_4c = puVar11[3];
          iVar13 = 0;
          if (-1 < iVar5) {
            lVar3 = *(longlong *)(param_1 + 0x80);
            iVar6 = iVar5;
            do {
              iVar7 = (iVar6 + iVar13) / 2;
              lVar4 = *(longlong *)(lVar3 + (longlong)iVar7 * 8);
              iVar8 = memcmp(&uStack_58,lVar4 + 0x10,0x10);
              if (iVar8 < 0) {
                uVar10 = 0xffffffff;
              }
              else {
                iVar8 = memcmp(lVar4 + 0x10,&uStack_58,0x10);
                uVar10 = (uint)(iVar8 < 0);
                if (uVar10 == 0) {
                  if (((-1 < iVar7) && (lVar4 != 0)) &&
                     (iVar13 = iVar12, *(int *)(lVar4 + 0x60) == 0x23)) goto LAB_1808df159;
                  break;
                }
              }
              iVar8 = iVar7 + -1;
              if (-1 < (int)uVar10) {
                iVar8 = iVar6;
              }
              if (-1 < (int)uVar10) {
                iVar13 = iVar7 + 1;
              }
              iVar6 = iVar8;
            } while (iVar13 <= iVar8);
          }
          iVar12 = iVar12 + 1;
          puVar11 = puVar11 + 4;
          iVar13 = iStackX_20;
        } while (iVar12 < iVar1);
      }
LAB_1808df159:
      iStackX_20 = iVar13;
      iVar13 = 0;
      if (0 < *(int *)(lVar2 + 0x98)) {
        puVar11 = *(undefined4 **)(lVar2 + 0x90);
        iVar12 = *(int *)(param_1 + 0x88) + -1;
        do {
          uStack_58 = *puVar11;
          uStack_54 = puVar11[1];
          uStack_50 = puVar11[2];
          uStack_4c = puVar11[3];
          iVar5 = 0;
          if (-1 < iVar12) {
            lVar3 = *(longlong *)(param_1 + 0x80);
            iVar6 = iVar12;
            do {
              iVar7 = (iVar6 + iVar5) / 2;
              lVar4 = *(longlong *)(lVar3 + (longlong)iVar7 * 8);
              iVar8 = memcmp(&uStack_58,lVar4 + 0x10,0x10);
              if (iVar8 < 0) {
                uVar10 = 0xffffffff;
              }
              else {
                iVar8 = memcmp(lVar4 + 0x10,&uStack_58,0x10);
                uVar10 = (uint)(iVar8 < 0);
                if (uVar10 == 0) {
                  if (((-1 < iVar7) && (lVar4 != 0)) && (*(int *)(lVar4 + 0x60) == 0x23)) {
                    iVar9 = iVar9 + 1;
                    *(int *)(lVar2 + 200) = iVar1 + iVar13;
                    goto LAB_1808df00a;
                  }
                  break;
                }
              }
              iVar8 = iVar7 + -1;
              if (-1 < (int)uVar10) {
                iVar8 = iVar6;
              }
              if (-1 < (int)uVar10) {
                iVar5 = iVar7 + 1;
              }
              iVar6 = iVar8;
            } while (iVar5 <= iVar8);
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 4;
        } while (iVar13 < *(int *)(lVar2 + 0x98));
      }
      *(int *)(lVar2 + 200) = iStackX_20;
    }
    iVar9 = iVar9 + 1;
  } while( true );
}



undefined8 FUN_1808df2b0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar2 = 0;
    if ((iVar3 < 0) || (iVar2 = 0, *(int *)(param_1 + 0x88) <= iVar3)) {
      while( true ) {
        if ((iVar2 < 0) || (*(int *)(param_1 + 0x98) <= iVar2)) {
          return 0;
        }
        if ((-1 < *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 8) +
                            0xe)) && (uVar1 = FUN_1808df980(), (int)uVar1 != 0)) break;
        iVar2 = iVar2 + 1;
      }
      return uVar1;
    }
    if ((-1 < *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar3 * 8) + 0xe))
       && (uVar1 = FUN_1808df980(), (int)uVar1 != 0)) break;
    iVar3 = iVar3 + 1;
  }
  return uVar1;
}



int FUN_1808df350(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lStackX_8;
  longlong lStackX_10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar5 = 0;
  uStack_48 = 0xffffffff;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_44 = 0;
LAB_1808df390:
  iVar7 = 0;
  iVar8 = iVar7;
  if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x1a8))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar5 * 8);
    if (*(short *)(lVar1 + 0xe) < 0) goto LAB_1808df47e;
    iVar8 = *(int *)(param_1 + 0x68) + -1;
    lStackX_8 = lVar1;
    if (-1 < iVar8) {
      do {
        iVar3 = (iVar8 + iVar7) / 2;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 8);
        iVar4 = memcmp(lVar1 + 0x50,lVar2 + 0x10,0x10);
        if (iVar4 < 0) {
          uVar6 = 0xffffffff;
        }
        else {
          iVar4 = memcmp(lVar2 + 0x10,lVar1 + 0x50,0x10);
          uVar6 = (uint)(iVar4 < 0);
          if (uVar6 == 0) goto LAB_1808df44b;
        }
        iVar4 = iVar3 + -1;
        if (-1 < (int)uVar6) {
          iVar4 = iVar8;
        }
        iVar8 = iVar4;
        if (-1 < (int)uVar6) {
          iVar7 = iVar3 + 1;
        }
        if (iVar8 < iVar7) break;
      } while( true );
    }
    goto LAB_1808df43f;
  }
  goto LAB_1808df488;
LAB_1808df44b:
  if ((iVar3 < 0) || (lVar2 == 0)) {
LAB_1808df43f:
    iVar3 = 0x1c;
    goto LAB_1808df515;
  }
  lStackX_10 = lVar2;
  iVar3 = FUN_1808df800(&uStack_68,&lStackX_10,&lStackX_8);
  if (iVar3 != 0) goto LAB_1808df515;
LAB_1808df47e:
  iVar5 = iVar5 + 1;
  goto LAB_1808df390;
LAB_1808df488:
  if ((iVar8 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) goto LAB_1808df4d0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar8 * 8);
  if ((-1 < *(short *)(lVar1 + 0xe)) &&
     (((*(byte *)(lVar1 + 0xc4) & 1) == 0 &&
      (iVar3 = FUN_1808dedb0(lVar1,param_1,&uStack_68,0), iVar3 != 0)))) goto LAB_1808df515;
  iVar8 = iVar8 + 1;
  goto LAB_1808df488;
LAB_1808df4d0:
  if ((iVar7 < 0) || (*(int *)(param_1 + 0x58) <= iVar7)) {
    iVar3 = 0;
LAB_1808df515:
    iVar5 = FUN_180744cc0(&uStack_68);
    if ((iVar5 == 0) && (iVar5 = FUN_1808df5e0(&uStack_58), iVar5 == 0)) {
      uStack_48 = 0xffffffff;
      uStack_44 = 0;
    }
    FUN_1808df5e0(&uStack_58);
    FUN_180744cc0(&uStack_68);
    return iVar3;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar7 * 8);
  if ((-1 < *(short *)(lVar1 + 0xe)) &&
     (((*(byte *)(lVar1 + 0xc4) & 1) == 0 &&
      (iVar3 = FUN_1808dedb0(lVar1,param_1,&uStack_68,0), iVar3 != 0)))) goto LAB_1808df515;
  iVar7 = iVar7 + 1;
  goto LAB_1808df4d0;
}



undefined8 FUN_1808df570(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x1b8) <= iVar3)) {
      return 0;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar3 * 8);
    if (-1 < *(short *)(lVar1 + 0xe)) {
      if (*(int *)(lVar1 + 0x30) == 0) {
        cVar2 = func_0x00018084ddc0(lVar1);
        if (cVar2 == '\0') goto LAB_1808df5c0;
      }
      *(uint *)(lVar1 + 0x34) = *(uint *)(lVar1 + 0x34) | 0x10;
    }
LAB_1808df5c0:
    iVar3 = iVar3 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1808df5e0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar3) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    uVar3 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    // WARNING: Subroutine does not return
    memset(*param_1 + (longlong)iVar1 * 0x18,0,(longlong)-iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((0 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) &&
     (uVar2 = FUN_180868700(param_1,0), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



undefined8 FUN_1808df6a0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar9 = *(int *)((longlong)param_1 + 0x24);
  if (iVar9 == -1) {
    return 0x1c;
  }
  iVar2 = (int)param_1[1];
  if (iVar9 == iVar2) {
    iVar9 = iVar9 * 2;
    if (iVar9 < 4) {
      iVar9 = 4;
    }
    if (((iVar9 <= iVar2) || ((int)param_1[3] != iVar2)) || ((int)param_1[4] != -1)) {
      return 0x1c;
    }
    uVar8 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)param_1 + 0x1c) ^ uVar8) - uVar8) < iVar9) &&
       (uVar5 = FUN_180868700(param_1 + 2,iVar9), (int)uVar5 != 0)) {
      return uVar5;
    }
    uVar5 = FUN_1807703c0(param_1,iVar9);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    uVar10 = 0;
    uVar6 = uVar10;
    if (0 < iVar9) {
      do {
        *(undefined4 *)(*param_1 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)iVar9);
    }
    lVar4 = param_1[3];
    uVar6 = uVar10;
    uVar11 = uVar10;
    if (0 < (int)lVar4) {
      do {
        if ((int)param_1[1] == 0) {
          return 0x1c;
        }
        lVar3 = param_1[2];
        lVar7 = (longlong)
                (int)(((uint)((ulonglong)*(undefined8 *)(uVar6 + lVar3) >> 0x20) ^
                      (uint)*(undefined8 *)(uVar6 + lVar3)) & (int)param_1[1] - 1U);
        piVar1 = (int *)(*param_1 + lVar7 * 4);
        iVar9 = *(int *)(*param_1 + lVar7 * 4);
        while (iVar9 != -1) {
          lVar7 = (longlong)iVar9 * 3 + 1;
          piVar1 = (int *)(lVar3 + lVar7 * 8);
          iVar9 = *(int *)(lVar3 + lVar7 * 8);
        }
        *piVar1 = (int)uVar10;
        uVar11 = uVar11 + 1;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        *(undefined4 *)(param_1[2] + 8 + uVar6) = 0xffffffff;
        uVar6 = uVar6 + 0x18;
      } while ((longlong)uVar11 < (longlong)(int)lVar4);
    }
  }
  return 0;
}



undefined8 FUN_1808df6c6(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int in_EAX;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *unaff_RBX;
  int unaff_EDI;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (unaff_EDI == in_EAX) {
    iVar8 = unaff_EDI * 2;
    if (iVar8 < 4) {
      iVar8 = 4;
    }
    if (((iVar8 <= in_EAX) || ((int)unaff_RBX[3] != in_EAX)) || ((int)unaff_RBX[4] != -1)) {
      return 0x1c;
    }
    uVar7 = (int)*(uint *)((longlong)unaff_RBX + 0x1c) >> 0x1f;
    if (((int)((*(uint *)((longlong)unaff_RBX + 0x1c) ^ uVar7) - uVar7) < iVar8) &&
       (uVar4 = FUN_180868700(unaff_RBX + 2,iVar8), (int)uVar4 != 0)) {
      return uVar4;
    }
    uVar4 = FUN_1807703c0();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    uVar9 = 0;
    uVar5 = uVar9;
    if (0 < iVar8) {
      do {
        *(undefined4 *)(*unaff_RBX + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar8);
    }
    lVar3 = unaff_RBX[3];
    uVar5 = uVar9;
    uVar10 = uVar9;
    if (0 < (int)lVar3) {
      do {
        if ((int)unaff_RBX[1] == 0) {
          return 0x1c;
        }
        lVar2 = unaff_RBX[2];
        lVar6 = (longlong)
                (int)(((uint)((ulonglong)*(undefined8 *)(uVar5 + lVar2) >> 0x20) ^
                      (uint)*(undefined8 *)(uVar5 + lVar2)) & (int)unaff_RBX[1] - 1U);
        piVar1 = (int *)(*unaff_RBX + lVar6 * 4);
        iVar8 = *(int *)(*unaff_RBX + lVar6 * 4);
        while (iVar8 != -1) {
          lVar6 = (longlong)iVar8 * 3 + 1;
          piVar1 = (int *)(lVar2 + lVar6 * 8);
          iVar8 = *(int *)(lVar2 + lVar6 * 8);
        }
        *piVar1 = (int)uVar9;
        uVar10 = uVar10 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(undefined4 *)(unaff_RBX[2] + 8 + uVar5) = 0xffffffff;
        uVar5 = uVar5 + 0x18;
      } while ((longlong)uVar10 < (longlong)(int)lVar3);
    }
  }
  return 0;
}



undefined8 FUN_1808df7de(void)

{
  return 0x1c;
}



undefined8 FUN_1808df800(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_2c;
  
  uVar6 = FUN_1808df6a0();
  if ((int)uVar6 == 0) {
    if ((int)param_1[1] == 0) {
      return 0x1c;
    }
    lVar3 = *param_2;
    lVar9 = (longlong)(int)(((uint)((ulonglong)lVar3 >> 0x20) ^ (uint)lVar3) & (int)param_1[1] - 1U)
    ;
    piVar12 = (int *)(*param_1 + lVar9 * 4);
    iVar4 = *(int *)(*param_1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        lVar9 = (longlong)iVar4;
        if (*(longlong *)(param_1[2] + lVar9 * 0x18) == lVar3) {
          return 0x1c;
        }
        lVar1 = param_1[2] + 8;
        iVar4 = *(int *)(lVar1 + lVar9 * 0x18);
        piVar12 = (int *)(lVar1 + lVar9 * 0x18);
      } while (iVar4 != -1);
    }
    iVar4 = (int)param_1[4];
    lVar9 = (longlong)iVar4;
    if (iVar4 == -1) {
      uVar6 = *param_3;
      iVar4 = (int)param_1[3];
      iVar8 = iVar4 + 1;
      uVar10 = (int)*(uint *)((longlong)param_1 + 0x1c) >> 0x1f;
      iVar5 = (*(uint *)((longlong)param_1 + 0x1c) ^ uVar10) - uVar10;
      if (iVar5 < iVar8) {
        iVar11 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar8;
        if (iVar8 <= iVar11) {
          iVar5 = iVar11;
        }
        if (iVar5 < 2) {
          iVar11 = 2;
        }
        else if (iVar11 < iVar8) {
          iVar11 = iVar8;
        }
        uVar7 = FUN_180868700(param_1 + 2,iVar11);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
      }
      lVar1 = param_1[3];
      lVar9 = param_1[2];
      plVar2 = (longlong *)(lVar9 + (longlong)(int)lVar1 * 0x18);
      *plVar2 = lVar3;
      plVar2[1] = CONCAT44(uStack_2c,0xffffffff);
      *(undefined8 *)(lVar9 + 0x10 + (longlong)(int)lVar1 * 0x18) = uVar6;
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    }
    else {
      lVar3 = param_1[2];
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar3 + 8 + lVar9 * 0x18);
      *(undefined4 *)(lVar3 + 8 + lVar9 * 0x18) = 0xffffffff;
      *(longlong *)(lVar3 + lVar9 * 0x18) = *param_2;
      *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x18) = *param_3;
    }
    *piVar12 = iVar4;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    uVar6 = 0;
  }
  return uVar6;
}



undefined8 FUN_1808df823(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong *unaff_RDI;
  longlong *unaff_R14;
  undefined8 *unaff_R15;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  
  if (in_EAX == 0) {
    return 0x1c;
  }
  lVar3 = *unaff_R14;
  lVar8 = (longlong)(int)(((uint)((ulonglong)lVar3 >> 0x20) ^ (uint)lVar3) & in_EAX - 1U);
  piVar11 = (int *)(*unaff_RDI + lVar8 * 4);
  iVar4 = *(int *)(*unaff_RDI + lVar8 * 4);
  if (iVar4 != -1) {
    do {
      lVar8 = (longlong)iVar4;
      if (*(longlong *)(unaff_RDI[2] + lVar8 * 0x18) == lVar3) {
        return 0x1c;
      }
      lVar1 = unaff_RDI[2] + 8;
      iVar4 = *(int *)(lVar1 + lVar8 * 0x18);
      piVar11 = (int *)(lVar1 + lVar8 * 0x18);
    } while (iVar4 != -1);
  }
  iVar4 = (int)unaff_RDI[4];
  lVar8 = (longlong)iVar4;
  if (iVar4 == -1) {
    uStack0000000000000030 = *unaff_R15;
    iVar4 = (int)unaff_RDI[3];
    iVar7 = iVar4 + 1;
    uVar9 = (int)*(uint *)((longlong)unaff_RDI + 0x1c) >> 0x1f;
    iVar5 = (*(uint *)((longlong)unaff_RDI + 0x1c) ^ uVar9) - uVar9;
    if (iVar5 < iVar7) {
      iVar10 = (int)((float)iVar5 * 1.5);
      iVar5 = iVar7;
      if (iVar7 <= iVar10) {
        iVar5 = iVar10;
      }
      if (iVar5 < 2) {
        iVar10 = 2;
      }
      else if (iVar10 < iVar7) {
        iVar10 = iVar7;
      }
      uVar6 = FUN_180868700(unaff_RDI + 2,iVar10);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    lVar1 = unaff_RDI[3];
    lVar8 = unaff_RDI[2];
    plVar2 = (longlong *)(lVar8 + (longlong)(int)lVar1 * 0x18);
    *plVar2 = lVar3;
    plVar2[1] = CONCAT44(in_stack_00000028._4_4_,0xffffffff);
    *(undefined8 *)(lVar8 + 0x10 + (longlong)(int)lVar1 * 0x18) = uStack0000000000000030;
    *(int *)(unaff_RDI + 3) = (int)unaff_RDI[3] + 1;
  }
  else {
    lVar3 = unaff_RDI[2];
    *(undefined4 *)(unaff_RDI + 4) = *(undefined4 *)(lVar3 + 8 + lVar8 * 0x18);
    *(undefined4 *)(lVar3 + 8 + lVar8 * 0x18) = 0xffffffff;
    *(longlong *)(lVar3 + lVar8 * 0x18) = *unaff_R14;
    *(undefined8 *)(lVar3 + 0x10 + lVar8 * 0x18) = *unaff_R15;
  }
  *piVar11 = iVar4;
  *(int *)((longlong)unaff_RDI + 0x24) = *(int *)((longlong)unaff_RDI + 0x24) + 1;
  return 0;
}








