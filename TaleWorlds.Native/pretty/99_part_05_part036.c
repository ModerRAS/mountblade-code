#include "TaleWorlds.Native.Split.h"

// 99_part_05_part036.c - 19 个函数

// 函数: void FUN_1802ee7f0(void)
void FUN_1802ee7f0(void)

{
  byte bVar1;
  longlong *plVar2;
  longlong in_RAX;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *in_stack_00000030;
  undefined8 *in_stack_00000040;
  
  do {
    lVar3 = in_RAX;
    in_RAX = *(longlong *)(lVar3 + 0x168);
  } while (*(longlong *)(lVar3 + 0x168) != 0);
  bVar1 = *(byte *)(lVar3 + 0x2e8);
  *(byte *)(lVar3 + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar6 = *(longlong *)(lVar3 + 0x20);
  uVar8 = 0;
  if (lVar6 != 0) {
    lVar5 = *(longlong *)(lVar3 + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(longlong *)(lVar5 + 0x170) == 0) &&
         (plVar2 = *(longlong **)(lVar3 + 0x10), plVar2 != (longlong *)0x0)) {
        in_stack_00000040 = &stack0x00000030;
        in_stack_00000030 = plVar2;
        (**(code **)(*plVar2 + 0x28))();
        uVar4 = FUN_180389a90(lVar6 + 0x29a0,&stack0x00000030);
        *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x170) = uVar4;
        lVar6 = *(longlong *)(lVar3 + 0x20);
        plVar2 = *(longlong **)(lVar6 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x18))
                    (plVar2,*(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x170),lVar3 + 0x70);
          lVar6 = *(longlong *)(lVar3 + 0x20);
        }
        plVar2 = *(longlong **)(lVar6 + 0x29a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))
                    (plVar2,*(undefined8 *)(*(longlong *)(lVar3 + 0x28) + 0x170),
                     *(undefined4 *)(lVar3 + 0x18));
        }
      }
    }
    else if (*(longlong *)(lVar5 + 0x170) != 0) {
      plVar2 = *(longlong **)(lVar6 + 0x29a8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,*(longlong *)(lVar5 + 0x170));
        lVar5 = *(longlong *)(lVar3 + 0x28);
      }
      *(undefined8 *)(lVar5 + 0x170) = 0;
    }
  }
  uVar9 = uVar8;
  if (*(longlong *)(lVar3 + 0x1c8) - *(longlong *)(lVar3 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f2700(*(undefined8 *)(uVar9 + *(longlong *)(lVar3 + 0x1c0)),(bVar1 & 1) != 0);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar9 = uVar9 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(lVar3 + 0x1c8) - *(longlong *)(lVar3 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802ee810(longlong param_1,uint param_2)
void FUN_1802ee810(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x2ac);
  uVar3 = 0;
  if (((uVar4 ^ param_2) >> 0x16 & 1) != 0) {
    iVar2 = (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3);
    uVar5 = uVar3;
    if (0 < iVar2) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + uVar5 * 8);
        (**(code **)(*plVar1 + 0xe0))(plVar1,~(byte)(uVar4 >> 0x16) & 1);
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)iVar2);
      uVar4 = *(uint *)(param_1 + 0x2ac);
    }
  }
  if (((uVar4 ^ param_2) & 0x80010000) != 0) {
    FUN_1802f09d0(param_1);
    uVar4 = *(uint *)(param_1 + 0x2ac);
  }
  if ((((uVar4 ^ param_2) >> 0x14 & 1) != 0) &&
     (uVar5 = uVar3, uVar7 = uVar3,
     *(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0)) {
    do {
      plVar1 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0xf0))(plVar1,(byte)(uVar4 >> 0x14) & 1);
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
    uVar4 = *(uint *)(param_1 + 0x2ac);
  }
  if (((uVar4 ^ param_2) >> 0x13 & 1) != 0) {
    iVar2 = (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3);
    if (0 < iVar2) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + uVar3 * 8);
        (**(code **)(*plVar1 + 0xe8))(plVar1,(byte)(uVar4 >> 0x13) & 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)iVar2);
    }
  }
  return;
}






// 函数: void FUN_1802ee826(longlong param_1,uint param_2)
void FUN_1802ee826(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint in_EAX;
  int iVar2;
  ulonglong unaff_RSI;
  uint unaff_EDI;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (((in_EAX ^ param_2) >> 0x16 & 1) != 0) {
    iVar2 = (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3);
    if (0 < iVar2) {
      uVar3 = unaff_RSI & 0xffffffff;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + uVar3 * 8);
        (**(code **)(*plVar1 + 0xe0))(plVar1,~(byte)(unaff_EDI >> 0x16) & 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)iVar2);
      unaff_EDI = *(uint *)(param_1 + 0x2ac);
    }
  }
  if (((unaff_EDI ^ param_2) & 0x80010000) != 0) {
    FUN_1802f09d0(param_1);
    unaff_EDI = *(uint *)(param_1 + 0x2ac);
  }
  if (((unaff_EDI ^ param_2) >> 0x14 & 1) != 0) {
    uVar5 = unaff_RSI & 0xffffffff;
    uVar3 = unaff_RSI;
    if (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 != 0) {
      do {
        plVar1 = *(longlong **)(uVar3 + *(longlong *)(param_1 + 0xf0));
        (**(code **)(*plVar1 + 0xf0))(plVar1,(byte)(unaff_EDI >> 0x14) & 1);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar3 = uVar3 + 8;
      } while ((ulonglong)(longlong)(int)uVar4 <
               (ulonglong)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3));
      unaff_EDI = *(uint *)(param_1 + 0x2ac);
    }
  }
  if (((unaff_EDI ^ param_2) >> 0x13 & 1) != 0) {
    iVar2 = (int)(*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3);
    if (0 < iVar2) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + unaff_RSI * 8);
        (**(code **)(*plVar1 + 0xe8))(plVar1,(byte)(unaff_EDI >> 0x13) & 1);
        unaff_RSI = unaff_RSI + 1;
      } while ((longlong)unaff_RSI < (longlong)iVar2);
    }
  }
  return;
}






// 函数: void FUN_1802ee935(void)
void FUN_1802ee935(void)

{
  longlong *plVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RSI;
  uint unaff_EDI;
  
  iVar2 = (int)(*(longlong *)(unaff_RBX + 0xf8) - *(longlong *)(unaff_RBX + 0xf0) >> 3);
  if (0 < iVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(unaff_RBX + 0xf0) + unaff_RSI * 8);
      (**(code **)(*plVar1 + 0xe8))(plVar1,(byte)(unaff_EDI >> 0x13) & 1);
      unaff_RSI = unaff_RSI + 1;
    } while (unaff_RSI < iVar2);
  }
  return;
}






// 函数: void FUN_1802ee990(longlong param_1,uint param_2)
void FUN_1802ee990(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x260);
  if ((lVar1 != 0) && (((*(uint *)(param_1 + 0x2ac) ^ param_2) >> 0x16 & 1) != 0)) {
    bVar5 = ~(byte)(*(uint *)(param_1 + 0x2ac) >> 0x16) & 1;
    iVar3 = (int)(*(longlong *)(lVar1 + 0x1b0) - *(longlong *)(lVar1 + 0x1a8) >> 3);
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x1a8) + lVar4 * 8);
        (**(code **)(*plVar2 + 0xe0))(plVar2,bVar5);
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    cVar6 = '\0';
    if ('\0' < *(char *)(lVar1 + 0x20)) {
      do {
        lVar4 = 0;
        lVar7 = (longlong)cVar6 * 0x100 + *(longlong *)(lVar1 + 0x18);
        iVar3 = (int)(*(longlong *)(lVar7 + 0xb8) - *(longlong *)(lVar7 + 0xb0) >> 3);
        if (0 < iVar3) {
          do {
            plVar2 = *(longlong **)(*(longlong *)(lVar7 + 0xb0) + lVar4 * 8);
            (**(code **)(*plVar2 + 0xe0))(plVar2,bVar5);
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar3);
        }
        cVar6 = cVar6 + '\x01';
      } while (cVar6 < *(char *)(lVar1 + 0x20));
    }
  }
  return;
}






// 函数: void FUN_1802ee9a6(longlong param_1,uint param_2)
void FUN_1802ee9a6(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong unaff_R15;
  
  if (((*(uint *)(param_1 + 0x2ac) ^ param_2) >> 0x16 & 1) != 0) {
    bVar4 = ~(byte)(*(uint *)(param_1 + 0x2ac) >> 0x16) & 1;
    iVar2 = (int)(*(longlong *)(unaff_R15 + 0x1b0) - *(longlong *)(unaff_R15 + 0x1a8) >> 3);
    if (0 < iVar2) {
      lVar3 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(unaff_R15 + 0x1a8) + lVar3 * 8);
        (**(code **)(*plVar1 + 0xe0))(plVar1,bVar4);
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
    cVar5 = '\0';
    if ('\0' < *(char *)(unaff_R15 + 0x20)) {
      do {
        lVar3 = 0;
        lVar6 = (longlong)cVar5 * 0x100 + *(longlong *)(unaff_R15 + 0x18);
        iVar2 = (int)(*(longlong *)(lVar6 + 0xb8) - *(longlong *)(lVar6 + 0xb0) >> 3);
        if (0 < iVar2) {
          do {
            plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0xb0) + lVar3 * 8);
            (**(code **)(*plVar1 + 0xe0))(plVar1,bVar4);
            lVar3 = lVar3 + 1;
          } while (lVar3 < iVar2);
        }
        cVar5 = cVar5 + '\x01';
      } while (cVar5 < *(char *)(unaff_R15 + 0x20));
    }
  }
  return;
}






// 函数: void FUN_1802ee9d7(void)
void FUN_1802ee9d7(void)

{
  longlong *plVar1;
  int in_EAX;
  int iVar2;
  longlong lVar3;
  byte unaff_BPL;
  char cVar4;
  longlong lVar5;
  longlong unaff_R15;
  
  if (0 < in_EAX) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(unaff_R15 + 0x1a8) + lVar3 * 8);
      (**(code **)(*plVar1 + 0xe0))(plVar1,unaff_BPL & 1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < in_EAX);
  }
  cVar4 = '\0';
  if ('\0' < *(char *)(unaff_R15 + 0x20)) {
    do {
      lVar3 = 0;
      lVar5 = (longlong)cVar4 * 0x100 + *(longlong *)(unaff_R15 + 0x18);
      iVar2 = (int)(*(longlong *)(lVar5 + 0xb8) - *(longlong *)(lVar5 + 0xb0) >> 3);
      if (0 < iVar2) {
        do {
          plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0xb0) + lVar3 * 8);
          (**(code **)(*plVar1 + 0xe0))(plVar1,unaff_BPL & 1);
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar2);
      }
      cVar4 = cVar4 + '\x01';
    } while (cVar4 < *(char *)(unaff_R15 + 0x20));
  }
  return;
}






// 函数: void FUN_1802eea29(void)
void FUN_1802eea29(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 unaff_BPL;
  char unaff_SIL;
  longlong lVar4;
  longlong unaff_R15;
  
  do {
    lVar3 = 0;
    lVar4 = (longlong)unaff_SIL * 0x100 + *(longlong *)(unaff_R15 + 0x18);
    iVar2 = (int)(*(longlong *)(lVar4 + 0xb8) - *(longlong *)(lVar4 + 0xb0) >> 3);
    if (0 < iVar2) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0xb0) + lVar3 * 8);
        (**(code **)(*plVar1 + 0xe0))(plVar1,unaff_BPL);
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
    }
    unaff_SIL = unaff_SIL + '\x01';
  } while (unaff_SIL < *(char *)(unaff_R15 + 0x20));
  return;
}






// 函数: void FUN_1802eea8e(void)
void FUN_1802eea8e(void)

{
  return;
}






// 函数: void FUN_1802eea9d(void)
void FUN_1802eea9d(void)

{
  return;
}






// 函数: void FUN_1802eeaa2(void)
void FUN_1802eeaa2(void)

{
  return;
}






// 函数: void FUN_1802eeab0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802eeab0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_2 != *(longlong *)(param_1 + 0x110)) {
    FUN_1802ecfb0(param_1,*param_2,*(undefined4 *)(param_1 + 0x148),param_4,0xfffffffffffffffe);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001802eeaef. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)*param_2 + 0x38))();
    return;
  }
  return;
}






// 函数: void FUN_1802eeb00(longlong param_1,longlong param_2)
void FUN_1802eeb00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0x260);
  if (param_2 != *plVar1) {
    FUN_1802ed990(param_1,1);
    if (*plVar1 != 0) {
      FUN_1802fc960(*plVar1,*(undefined8 *)(param_1 + 0x20));
      FUN_1802fdb10(*plVar1,0);
    }
    FUN_180056f10(plVar1,param_2);
    if (param_2 != 0) {
      FUN_1802fdb10(*plVar1,param_1);
      FUN_1802fc840(*plVar1,*(undefined8 *)(param_1 + 0x20));
      FUN_1802ee990(param_1,0);
    }
    *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      func_0x0001802eeba0();
    }
  }
  return;
}






// 函数: void FUN_1802eebe0(longlong param_1)
void FUN_1802eebe0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(short *)(param_1 + 0x2b2) = *(short *)(param_1 + 0x2b2) + 1;
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802eebe0(*(undefined8 *)(uVar1 + *(longlong *)(param_1 + 0x1c0)));
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1802eec0d(void)
void FUN_1802eec0d(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    FUN_1802eebe0(*(undefined8 *)(uVar1 + *(longlong *)(unaff_RBX + 0x1c0)));
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  return;
}






// 函数: void FUN_1802eec55(void)
void FUN_1802eec55(void)

{
  return;
}






// 函数: void FUN_1802eec60(longlong param_1)
void FUN_1802eec60(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  
  *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    func_0x0001802eeba0();
  }
  plStack_80 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  iVar9 = 0;
  plStack_70 = (longlong *)0x0;
  uStack_68 = 3;
  pplVar6 = (longlong **)FUN_1802f1cd0(param_1,&plStack_40);
  plVar2 = plStack_80;
  plVar3 = plStack_78;
  uVar1 = uStack_68;
  plVar7 = plStack_40;
  if (&plStack_80 != pplVar6) {
    FUN_1800b8500(&plStack_80);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    plVar2 = *pplVar6;
    *pplVar6 = plStack_80;
    plVar3 = pplVar6[1];
    pplVar6[1] = plStack_78;
    plVar7 = pplVar6[2];
    pplVar6[2] = plStack_70;
    uVar1 = *(undefined4 *)(pplVar6 + 3);
    *(undefined4 *)(pplVar6 + 3) = uStack_68;
    plStack_70 = plVar7;
    uStack_48 = uStack_68;
    plVar7 = plStack_40;
    plStack_78 = plVar3;
    plStack_80 = plVar2;
  }
  for (; uStack_68 = uVar1, plVar5 = plStack_78, plVar4 = plStack_80, plVar7 != plStack_38;
      plVar7 = plVar7 + 1) {
    plStack_80 = plVar2;
    plStack_78 = plVar3;
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar7 + 0x38))();
    }
    plVar2 = plStack_80;
    plVar3 = plStack_78;
    uVar1 = uStack_68;
    plStack_78 = plVar5;
    plStack_80 = plVar4;
  }
  if (plStack_40 != (longlong *)0x0) {
    plStack_80 = plVar2;
    plStack_78 = plVar3;
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uVar8 = (longlong)plStack_78 - (longlong)plStack_80 >> 3;
  plVar7 = plStack_80;
  plStack_80 = plVar2;
  plStack_78 = plVar3;
  plVar2 = plVar4;
  if (uVar8 != 0) {
    do {
      (**(code **)(*(longlong *)*plVar7 + 0x160))();
      iVar9 = iVar9 + 1;
      plVar7 = plVar7 + 1;
    } while ((ulonglong)(longlong)iVar9 < uVar8);
  }
  for (; plVar2 != plVar5; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (plVar4 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar4);
  }
  return;
}



ulonglong FUN_1802eee20(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  char cVar10;
  char *pcVar11;
  
  iVar2 = *(int *)(param_1 + 0xe0);
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (param_2[uVar4] != '\0');
  iVar3 = (int)uVar4;
  if ((0 < iVar3) && (0 < iVar2)) {
    iVar7 = 0;
    if (-1 < iVar2 - iVar3) {
      lVar9 = 0;
      uVar8 = (ulonglong)iVar3;
      do {
        if ((lVar9 == 0) || (*(char *)(*(longlong *)(param_1 + 0xd8) + -1 + lVar9) == ' ')) {
          iVar6 = 0;
          uVar4 = 0;
          if (0 < (longlong)uVar8) {
            pcVar11 = param_2;
            do {
              cVar5 = pcVar11[(lVar9 - (longlong)param_2) + *(longlong *)(param_1 + 0xd8)];
              cVar1 = *pcVar11;
              cVar10 = cVar5 + ' ';
              if (0x19 < (byte)(cVar5 + 0xbfU)) {
                cVar10 = cVar5;
              }
              cVar5 = cVar1 + ' ';
              if (0x19 < (byte)(cVar1 + 0xbfU)) {
                cVar5 = cVar1;
              }
              if (cVar10 != cVar5) break;
              iVar6 = iVar6 + 1;
              uVar4 = uVar4 + 1;
              pcVar11 = pcVar11 + 1;
            } while ((longlong)uVar4 < (longlong)uVar8);
          }
          if ((uVar4 == uVar8) &&
             ((iVar6 + iVar7 == iVar2 ||
              (*(char *)(*(longlong *)(param_1 + 0xd8) + lVar9 + uVar4) == ' ')))) {
            return CONCAT71((int7)(uVar4 >> 8),1);
          }
        }
        iVar7 = iVar7 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 <= iVar2 - iVar3);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



undefined * FUN_1802eef70(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_58;
  undefined8 *apuStack_50 [4];
  longlong *plStack_30;
  
  uVar10 = 0;
  puVar7 = (undefined *)register0x00000020;
  do {
    uVar3 = *(uint *)(param_1 + 0xe0);
    if (uVar10 < uVar3) {
      puVar7 = *(undefined **)(param_1 + 0xd8);
      pcVar8 = puVar7 + (int)uVar10;
      uVar11 = uVar10;
      do {
        if (*pcVar8 == ' ') {
          if (uVar11 != 0xffffffff) goto LAB_1802eefe9;
          break;
        }
        uVar11 = uVar11 + 1;
        pcVar8 = pcVar8 + 1;
      } while (uVar11 < uVar3);
    }
    uVar11 = uVar3;
LAB_1802eefe9:
    if ((int)uVar11 <= (int)uVar10) {
      return (undefined *)((ulonglong)puVar7 & 0xffffffffffffff00);
    }
    FUN_180629a40(param_1 + 0xd0,&puStack_70,uVar10,uVar11);
    puVar7 = &DAT_18098bc73;
    if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
      puVar7 = *(undefined **)(param_2 + 8);
    }
    FUN_18047a1e0(apuStack_50,puVar7);
    puVar7 = &DAT_18098bc73;
    if (puStack_68 != (undefined *)0x0) {
      puVar7 = puStack_68;
    }
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (puVar7[lVar9] != '\0');
    cVar5 = FUN_180629cc0(puVar7,puVar7 + lVar9);
    if (apuStack_50[0] != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)apuStack_50[0] + 0x2c);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      puVar6 = apuStack_50[0];
      if (iVar2 == 1) {
        while (puVar6 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)puVar6[2];
          puVar6[2] = 0;
          (**(code **)*puVar6)(puVar6,1);
          puVar6 = puVar4;
        }
      }
    }
    apuStack_50[0] = (undefined8 *)0x0;
    if ((plStack_30 != (longlong *)0x0) &&
       (puVar6 = (undefined8 *)(**(code **)(*plStack_30 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)(puVar6,1);
    }
    if (cVar5 != '\0') {
      puStack_70 = &UNK_180a3c3e0;
      if (puStack_68 == (undefined *)0x0) {
        return &UNK_180a3c301;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uVar10 = uVar11 + 1;
    puVar7 = &UNK_180a3c3e0;
    puStack_70 = &UNK_180a3c3e0;
    if (puStack_68 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_68 = (undefined *)0x0;
    uStack_58 = 0;
    puStack_70 = &UNK_18098bcb0;
  } while( true );
}






// 函数: void FUN_1802ef160(undefined8 *param_1)
void FUN_1802ef160(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  return;
}



ulonglong FUN_1802ef1b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  
  uVar10 = 0;
  uVar8 = *(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3;
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (uVar8 != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + uVar9 * 8);
      iVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar3 == 0) {
        plVar5 = (longlong *)plVar1[7];
        uVar6 = plVar1[8] - (longlong)plVar5 >> 4;
        uVar7 = (ulonglong)(uint)((int)uVar7 + (int)uVar6);
        uVar13 = uVar10;
        if (uVar6 != 0) {
          do {
            lVar4 = *plVar5;
            plVar5 = plVar5 + 2;
            uVar15 = (uint)uVar7 + 1;
            if ((*(uint *)(*(longlong *)(lVar4 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
              uVar15 = (uint)uVar7;
            }
            uVar12 = (int)uVar13 + 1;
            uVar7 = (ulonglong)uVar15;
            uVar13 = (ulonglong)uVar12;
          } while ((ulonglong)(longlong)(int)uVar12 < uVar6);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  if ((param_2 != 0) && (lVar4 = FUN_1803a0010(param_2,param_1), lVar4 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 8);
    lVar11 = *plVar1;
    plVar5 = plVar1;
    if (lVar11 == 0) {
      lVar11 = plVar1[1];
      while (plVar5 = plVar5 + 1, lVar11 == 0) {
        lVar11 = plVar5[1];
      }
    }
    while (lVar11 != plVar1[*(longlong *)(lVar4 + 0x10)]) {
      plVar14 = *(longlong **)(**(longlong **)(lVar11 + 8) + 0x38);
      uVar8 = *(longlong *)(**(longlong **)(lVar11 + 8) + 0x40) - (longlong)plVar14 >> 4;
      uVar7 = (ulonglong)(uint)((int)uVar7 + (int)uVar8);
      uVar9 = uVar10;
      if (uVar8 != 0) {
        do {
          lVar2 = *plVar14;
          plVar14 = plVar14 + 2;
          uVar15 = (uint)uVar7 + 1;
          if ((*(uint *)(*(longlong *)(lVar2 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
            uVar15 = (uint)uVar7;
          }
          uVar12 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar12;
          uVar7 = (ulonglong)uVar15;
        } while ((ulonglong)(longlong)(int)uVar12 < uVar8);
      }
      lVar11 = *(longlong *)(lVar11 + 0x10);
      while (lVar11 == 0) {
        plVar14 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar11 = *plVar14;
      }
    }
  }
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      iVar3 = FUN_1802ef1b0(*(undefined8 *)(uVar10 + *(longlong *)(param_1 + 0x1c0)),param_2);
      uVar10 = uVar10 + 8;
      uVar15 = (int)uVar9 + 1;
      uVar7 = (ulonglong)(uint)((int)uVar7 + iVar3);
      uVar9 = (ulonglong)uVar15;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return uVar7;
}



ulonglong FUN_1802ef1c4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  
  uVar10 = 0;
  uVar8 = *(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3;
  uVar7 = uVar10;
  uVar9 = uVar10;
  if (uVar8 != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + uVar9 * 8);
      iVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
      if (iVar3 == 0) {
        plVar5 = (longlong *)plVar1[7];
        uVar6 = plVar1[8] - (longlong)plVar5 >> 4;
        uVar7 = (ulonglong)(uint)((int)uVar7 + (int)uVar6);
        uVar13 = uVar10;
        if (uVar6 != 0) {
          do {
            lVar4 = *plVar5;
            plVar5 = plVar5 + 2;
            uVar15 = (uint)uVar7 + 1;
            if ((*(uint *)(*(longlong *)(lVar4 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
              uVar15 = (uint)uVar7;
            }
            uVar12 = (int)uVar13 + 1;
            uVar7 = (ulonglong)uVar15;
            uVar13 = (ulonglong)uVar12;
          } while ((ulonglong)(longlong)(int)uVar12 < uVar6);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  if ((param_2 != 0) && (lVar4 = FUN_1803a0010(param_2,param_1), lVar4 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 8);
    lVar11 = *plVar1;
    plVar5 = plVar1;
    if (lVar11 == 0) {
      lVar11 = plVar1[1];
      while (plVar5 = plVar5 + 1, lVar11 == 0) {
        lVar11 = plVar5[1];
      }
    }
    while (lVar11 != plVar1[*(longlong *)(lVar4 + 0x10)]) {
      plVar14 = *(longlong **)(**(longlong **)(lVar11 + 8) + 0x38);
      uVar8 = *(longlong *)(**(longlong **)(lVar11 + 8) + 0x40) - (longlong)plVar14 >> 4;
      uVar7 = (ulonglong)(uint)((int)uVar7 + (int)uVar8);
      uVar9 = uVar10;
      if (uVar8 != 0) {
        do {
          lVar2 = *plVar14;
          plVar14 = plVar14 + 2;
          uVar15 = (uint)uVar7 + 1;
          if ((*(uint *)(*(longlong *)(lVar2 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
            uVar15 = (uint)uVar7;
          }
          uVar12 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar12;
          uVar7 = (ulonglong)uVar15;
        } while ((ulonglong)(longlong)(int)uVar12 < uVar8);
      }
      lVar11 = *(longlong *)(lVar11 + 0x10);
      while (lVar11 == 0) {
        plVar14 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar11 = *plVar14;
      }
    }
  }
  uVar9 = uVar10;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      iVar3 = FUN_1802ef1b0(*(undefined8 *)(uVar10 + *(longlong *)(param_1 + 0x1c0)),param_2);
      uVar10 = uVar10 + 8;
      uVar15 = (int)uVar9 + 1;
      uVar7 = (ulonglong)(uint)((int)uVar7 + iVar3);
      uVar9 = (ulonglong)uVar15;
    } while ((ulonglong)(longlong)(int)uVar15 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return uVar7;
}



int FUN_1802ef287(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int unaff_EBX;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong unaff_R14;
  longlong unaff_R15;
  
  lVar4 = FUN_1803a0010();
  if (lVar4 != 0) {
    plVar1 = *(longlong **)(lVar4 + 8);
    lVar6 = *plVar1;
    plVar5 = plVar1;
    if (lVar6 == 0) {
      lVar6 = plVar1[1];
      while (plVar5 = plVar5 + 1, lVar6 == 0) {
        lVar6 = plVar5[1];
      }
    }
    while (lVar6 != plVar1[*(longlong *)(lVar4 + 0x10)]) {
      uVar10 = unaff_R14 & 0xffffffff;
      plVar8 = *(longlong **)(**(longlong **)(lVar6 + 8) + 0x38);
      uVar7 = *(longlong *)(**(longlong **)(lVar6 + 8) + 0x40) - (longlong)plVar8 >> 4;
      unaff_EBX = unaff_EBX + (int)uVar7;
      if (uVar7 != 0) {
        do {
          lVar2 = *plVar8;
          plVar8 = plVar8 + 2;
          iVar3 = unaff_EBX + 1;
          if ((*(uint *)(*(longlong *)(lVar2 + 0x1b8) + 0x138) >> 0x12 & 1) == 0) {
            iVar3 = unaff_EBX;
          }
          unaff_EBX = iVar3;
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 < uVar7);
      }
      lVar6 = *(longlong *)(lVar6 + 0x10);
      while (lVar6 == 0) {
        plVar8 = plVar5 + 1;
        plVar5 = plVar5 + 1;
        lVar6 = *plVar8;
      }
    }
  }
  uVar7 = unaff_R14;
  if (*(longlong *)(unaff_R15 + 0x1c8) - *(longlong *)(unaff_R15 + 0x1c0) >> 3 != 0) {
    do {
      iVar3 = FUN_1802ef1b0(*(undefined8 *)(unaff_R14 + *(longlong *)(unaff_R15 + 0x1c0)));
      unaff_R14 = unaff_R14 + 8;
      uVar9 = (int)uVar7 + 1;
      unaff_EBX = unaff_EBX + iVar3;
      uVar7 = (ulonglong)uVar9;
    } while ((ulonglong)(longlong)(int)uVar9 <
             (ulonglong)(*(longlong *)(unaff_R15 + 0x1c8) - *(longlong *)(unaff_R15 + 0x1c0) >> 3));
  }
  return unaff_EBX;
}






// 函数: void FUN_1802ef3c0(void)
void FUN_1802ef3c0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






