#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part234.c - 7 个函数

// 函数: void FUN_1808009a3(void)
void FUN_1808009a3(void)

{
  func_0x000180806c80();
  return;
}



undefined8 FUN_1808009c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uStackX_14;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60);
  uVar2 = func_0x000180806ca0();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar4 = 0xffffffff;
  }
  else if (((*(byte *)(param_1 + 0x38) & 1) == 0) && (*(int *)(param_1 + 0x54) != 0)) {
    uVar4 = *(int *)(param_1 + 0x58) + -1 + *(int *)(param_1 + 0x5c);
  }
  else {
    uVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x44) - 1;
  }
  uStackX_14 = (uint)((ulonglong)param_2 >> 0x20);
  if (uVar4 < uStackX_14) {
    return 0x20;
  }
  if (((*(uint *)(*(longlong *)(param_1 + 0x18) + 0x48) & 0x40000) != 0) && (param_2 != 0)) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x20000;
  }
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      if (*(longlong *)(param_1 + 0x290) != 0) {
        lVar3 = param_1 + 0x70;
        goto LAB_180800a70;
      }
      lVar3 = *(longlong *)(param_1 + 0x2d8);
      if (*(longlong *)(param_1 + 0x2d8) == 0) {
        lVar3 = lVar1;
      }
    }
    uVar2 = 1;
  }
  else {
LAB_180800a70:
    uVar2 = 0;
  }
  uVar2 = FUN_180762c70(lVar3,param_2,uVar2,1);
  return uVar2;
}



undefined8 FUN_180800ab0(longlong *param_1,undefined4 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((param_3 & 0x10) == 0) {
    return 0x44;
  }
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,&uStack_18);
  if ((int)uVar1 == 0) {
    uStack_18 = param_2;
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1,CONCAT44(uStack_14,param_2));
  }
  return uVar1;
}



undefined8 FUN_180800b10(longlong param_1,int param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puStackX_8;
  
  lVar4 = (longlong)param_2;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x12640 + lVar4 * 0x18) == 0) {
    plVar1[lVar4 + 0x2a] = 0;
  }
  else {
    lVar2 = plVar1[lVar4 + 0x2a];
    if (param_3 == 0.0) {
      if (lVar2 != 0) {
        uVar3 = FUN_180743700(*(longlong *)(param_1 + 8),&puStackX_8,0x10,
                              CONCAT71((int7)((ulonglong)plVar1 >> 8),1));
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *puStackX_8 = 3;
        *(longlong *)(puStackX_8 + 8) = lVar2;
        uVar3 = func_0x000180743b40(*(undefined8 *)(param_1 + 8),puStackX_8,1);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x150 + lVar4 * 8) = 0;
        *(undefined8 *)(param_1 + 0x2f8) = 0;
      }
    }
    else {
      if (lVar2 == 0) {
        if ((*(longlong *)(param_1 + 0x2f8) == 0) &&
           (uVar3 = (**(code **)(*plVar1 + 0x120))(plVar1,0xfffffffd,param_1 + 0x2f8),
           (int)uVar3 != 0)) {
          return uVar3;
        }
        uVar3 = FUN_1807ff980(param_1,*(undefined8 *)(param_1 + 0x2f8),param_2);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = FUN_180801220(param_1,*(longlong *)(param_1 + 8) + 0x12638 + lVar4 * 0x18,
                            *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x30));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
  }
  return 0;
}



undefined8 FUN_180800c40(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x3c) & 0x80) == 0) {
    uVar1 = FUN_180800f70();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*(longlong *)(param_1 + 0x2f8) != 0) {
      iVar2 = 0;
      do {
        uVar1 = FUN_180801220(param_1,*(longlong *)(param_1 + 8) +
                                      ((longlong)iVar2 * 3 + 0x24c7) * 8,param_2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
  }
  return 0;
}



undefined8 FUN_180800cb0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x3c) & 0x20) == 0) {
    if (*(longlong *)(param_1 + 0x290) != 0) {
      FUN_180762070(param_1 + 0x70,1);
    }
    if (*(longlong *)(param_1 + 0x2d8) != 0) {
      FUN_180762070(*(longlong *)(param_1 + 0x2d8),1);
    }
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      FUN_180762070(*(longlong *)(param_1 + 0x2e8),1);
    }
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      FUN_180762070(*(longlong *)(param_1 + 0x2f0),1);
    }
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      FUN_180762070(*(longlong *)(param_1 + 0x2e0),1);
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_180762070(*(longlong *)(param_1 + 0x30),1);
    }
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffff6f;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x40;
  return 0;
}



undefined8 FUN_180800d60(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if (((*(uint *)((longlong)param_1 + 0x3c) & 0x10000) == 0) && (param_1[0x5f] != 0)) {
    lVar4 = 0x150;
    do {
      lVar2 = *(longlong *)(param_1[1] + 0x12640 + lVar5);
      if (lVar2 != 0) {
        FUN_18075dbf0(lVar2,param_1[0x5f],*(undefined8 *)(lVar4 + param_1[3]),4);
      }
      lVar5 = lVar5 + 0x18;
      *(undefined8 *)(lVar4 + param_1[3]) = 0;
      lVar4 = lVar4 + 8;
    } while (lVar4 < 0x170);
    param_1[0x5f] = 0;
  }
  plVar3 = (longlong *)param_1[0x5c];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1,0,0);
    FUN_180762070(param_1[0x5c],0,1);
    FUN_18075d600(param_1[0x5c],0,1);
    lVar5 = param_1[0x5c];
    if (*(longlong *)(lVar5 + 0x248) != 0) {
      *(undefined1 *)
       ((longlong)*(int *)(lVar5 + 0x250) + *(longlong *)(*(longlong *)(lVar5 + 0x248) + 0x20)) = 0;
      piVar1 = (int *)(*(longlong *)(lVar5 + 0x248) + 0x10);
      *piVar1 = *piVar1 + -1;
    }
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0x42c80000;
    *(undefined4 *)((longlong)param_1 + 100) = 0x49742400;
  }
  plVar3 = (longlong *)param_1[0x5b];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1,0,0);
    FUN_180762070(param_1[0x5b],0,1);
    (**(code **)(*(longlong *)param_1[0x5b] + 0x10))();
    param_1[0x5b] = 0;
  }
  if (param_1[0x52] != 0) {
    (**(code **)(param_1[0xe] + 0x28))(param_1 + 0xe,1,0,0);
    FUN_180762070(param_1 + 0xe,0,1);
    FUN_18075d600(param_1 + 0xe,0,1);
  }
  if (param_1[6] != 0) {
    FUN_180762070(param_1[6],0,1);
    FUN_18075d600(param_1[6],0,1);
  }
  if (param_1[2] != 0) {
    piVar1 = (int *)(param_1[2] + 4);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffdfe8f;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x80;
  (**(code **)(*param_1 + 200))();
  return 0;
}



undefined8 FUN_180800d66(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if (((*(uint *)((longlong)param_1 + 0x3c) & 0x10000) == 0) && (param_1[0x5f] != 0)) {
    lVar4 = 0x150;
    do {
      lVar2 = *(longlong *)(param_1[1] + 0x12640 + lVar5);
      if (lVar2 != 0) {
        FUN_18075dbf0(lVar2,param_1[0x5f],*(undefined8 *)(lVar4 + param_1[3]),4);
      }
      lVar5 = lVar5 + 0x18;
      *(undefined8 *)(lVar4 + param_1[3]) = 0;
      lVar4 = lVar4 + 8;
    } while (lVar4 < 0x170);
    param_1[0x5f] = 0;
  }
  plVar3 = (longlong *)param_1[0x5c];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1,0,0);
    FUN_180762070(param_1[0x5c],0,1);
    FUN_18075d600(param_1[0x5c],0,1);
    lVar5 = param_1[0x5c];
    if (*(longlong *)(lVar5 + 0x248) != 0) {
      *(undefined1 *)
       ((longlong)*(int *)(lVar5 + 0x250) + *(longlong *)(*(longlong *)(lVar5 + 0x248) + 0x20)) = 0;
      piVar1 = (int *)(*(longlong *)(lVar5 + 0x248) + 0x10);
      *piVar1 = *piVar1 + -1;
    }
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0x42c80000;
    *(undefined4 *)((longlong)param_1 + 100) = 0x49742400;
  }
  plVar3 = (longlong *)param_1[0x5b];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1,0,0);
    FUN_180762070(param_1[0x5b],0,1);
    (**(code **)(*(longlong *)param_1[0x5b] + 0x10))();
    param_1[0x5b] = 0;
  }
  if (param_1[0x52] != 0) {
    (**(code **)(param_1[0xe] + 0x28))(param_1 + 0xe,1,0,0);
    FUN_180762070(param_1 + 0xe,0,1);
    FUN_18075d600(param_1 + 0xe,0,1);
  }
  if (param_1[6] != 0) {
    FUN_180762070(param_1[6],0,1);
    FUN_18075d600(param_1[6],0,1);
  }
  if (param_1[2] != 0) {
    piVar1 = (int *)(param_1[2] + 4);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffdfe8f;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) | 0x80;
  (**(code **)(*param_1 + 200))();
  return 0;
}



undefined8 FUN_180800d6e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  
  lVar5 = 0;
  if (((*(uint *)(param_1 + 0x3c) & 0x10000) == 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    lVar4 = 0x150;
    do {
      lVar2 = *(longlong *)(unaff_RDI[1] + 0x12640 + lVar5);
      if (lVar2 != 0) {
        FUN_18075dbf0(lVar2,unaff_RDI[0x5f],*(undefined8 *)(lVar4 + unaff_RDI[3]),4);
      }
      lVar5 = lVar5 + 0x18;
      *(undefined8 *)(lVar4 + unaff_RDI[3]) = 0;
      lVar4 = lVar4 + 8;
    } while (lVar4 < 0x170);
    unaff_RDI[0x5f] = 0;
  }
  plVar3 = (longlong *)unaff_RDI[0x5c];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1,0,0);
    FUN_180762070(unaff_RDI[0x5c],0,1);
    FUN_18075d600(unaff_RDI[0x5c],0,1);
    lVar5 = unaff_RDI[0x5c];
    if (*(longlong *)(lVar5 + 0x248) != 0) {
      *(undefined1 *)
       ((longlong)*(int *)(lVar5 + 0x250) + *(longlong *)(*(longlong *)(lVar5 + 0x248) + 0x20)) = 0;
      piVar1 = (int *)(*(longlong *)(lVar5 + 0x248) + 0x10);
      *piVar1 = *piVar1 + -1;
    }
    unaff_RDI[0x5c] = 0;
    *(undefined4 *)(unaff_RDI + 0xd) = 0x42c80000;
    *(undefined4 *)((longlong)unaff_RDI + 100) = 0x49742400;
  }
  plVar3 = (longlong *)unaff_RDI[0x5b];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1,0,0);
    FUN_180762070(unaff_RDI[0x5b],0,1);
    (**(code **)(*(longlong *)unaff_RDI[0x5b] + 0x10))();
    unaff_RDI[0x5b] = 0;
  }
  if (unaff_RDI[0x52] != 0) {
    (**(code **)(unaff_RDI[0xe] + 0x28))(unaff_RDI + 0xe,1,0,0);
    FUN_180762070(unaff_RDI + 0xe,0,1);
    FUN_18075d600(unaff_RDI + 0xe,0,1);
  }
  if (unaff_RDI[6] != 0) {
    FUN_180762070(unaff_RDI[6],0,1);
    FUN_18075d600(unaff_RDI[6],0,1);
  }
  if (unaff_RDI[2] != 0) {
    piVar1 = (int *)(unaff_RDI[2] + 4);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) & 0xfffdfe8f;
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) | 0x80;
  (**(code **)(*unaff_RDI + 200))();
  return 0;
}



undefined8 FUN_180800d87(void)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong unaff_RBP;
  ulonglong uVar5;
  longlong *unaff_RDI;
  
  lVar4 = 0x150;
  uVar5 = unaff_RBP & 0xffffffff;
  do {
    lVar2 = *(longlong *)(unaff_RDI[1] + 0x12640 + uVar5);
    if (lVar2 != 0) {
      FUN_18075dbf0(lVar2,unaff_RDI[0x5f],*(undefined8 *)(lVar4 + unaff_RDI[3]),4);
    }
    uVar5 = uVar5 + 0x18;
    *(ulonglong *)(lVar4 + unaff_RDI[3]) = unaff_RBP;
    lVar4 = lVar4 + 8;
  } while (lVar4 < 0x170);
  unaff_RDI[0x5f] = unaff_RBP;
  plVar3 = (longlong *)unaff_RDI[0x5c];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1,0,0);
    FUN_180762070(unaff_RDI[0x5c],0,1);
    FUN_18075d600(unaff_RDI[0x5c],0,1);
    lVar4 = unaff_RDI[0x5c];
    if (*(longlong *)(lVar4 + 0x248) != 0) {
      *(char *)((longlong)*(int *)(lVar4 + 0x250) +
               *(longlong *)(*(longlong *)(lVar4 + 0x248) + 0x20)) = (char)unaff_RBP;
      piVar1 = (int *)(*(longlong *)(lVar4 + 0x248) + 0x10);
      *piVar1 = *piVar1 + -1;
    }
    unaff_RDI[0x5c] = unaff_RBP;
    *(undefined4 *)(unaff_RDI + 0xd) = 0x42c80000;
    *(undefined4 *)((longlong)unaff_RDI + 100) = 0x49742400;
  }
  plVar3 = (longlong *)unaff_RDI[0x5b];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1,0,0);
    FUN_180762070(unaff_RDI[0x5b],0,1);
    (**(code **)(*(longlong *)unaff_RDI[0x5b] + 0x10))();
    unaff_RDI[0x5b] = unaff_RBP;
  }
  if (unaff_RDI[0x52] != 0) {
    (**(code **)(unaff_RDI[0xe] + 0x28))(unaff_RDI + 0xe,1,0,0);
    FUN_180762070(unaff_RDI + 0xe,0,1);
    FUN_18075d600(unaff_RDI + 0xe,0,1);
  }
  if (unaff_RDI[6] != 0) {
    FUN_180762070(unaff_RDI[6],0,1);
    FUN_18075d600(unaff_RDI[6],0,1);
  }
  if (unaff_RDI[2] != 0) {
    piVar1 = (int *)(unaff_RDI[2] + 4);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) & 0xfffdfe8f;
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) | 0x80;
  (**(code **)(*unaff_RDI + 200))();
  return 0;
}



undefined8 FUN_180800df0(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  
  plVar2 = (longlong *)unaff_RDI[0x5c];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1,0,0);
    FUN_180762070(unaff_RDI[0x5c],0,1);
    FUN_18075d600(unaff_RDI[0x5c],0,1);
    lVar3 = unaff_RDI[0x5c];
    if (*(longlong *)(lVar3 + 0x248) != 0) {
      *(char *)((longlong)*(int *)(lVar3 + 0x250) +
               *(longlong *)(*(longlong *)(lVar3 + 0x248) + 0x20)) = (char)unaff_RBP;
      piVar1 = (int *)(*(longlong *)(lVar3 + 0x248) + 0x10);
      *piVar1 = *piVar1 + -1;
    }
    unaff_RDI[0x5c] = unaff_RBP;
    *(undefined4 *)(unaff_RDI + 0xd) = 0x42c80000;
    *(undefined4 *)((longlong)unaff_RDI + 100) = 0x49742400;
  }
  plVar2 = (longlong *)unaff_RDI[0x5b];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1,0,0);
    FUN_180762070(unaff_RDI[0x5b],0,1);
    (**(code **)(*(longlong *)unaff_RDI[0x5b] + 0x10))();
    unaff_RDI[0x5b] = unaff_RBP;
  }
  if (unaff_RDI[0x52] != 0) {
    (**(code **)(unaff_RDI[0xe] + 0x28))(unaff_RDI + 0xe,1,0,0);
    FUN_180762070(unaff_RDI + 0xe,0,1);
    FUN_18075d600(unaff_RDI + 0xe,0,1);
  }
  if (unaff_RDI[6] != 0) {
    FUN_180762070(unaff_RDI[6],0,1);
    FUN_18075d600(unaff_RDI[6],0,1);
  }
  if (unaff_RDI[2] != 0) {
    piVar1 = (int *)(unaff_RDI[2] + 4);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) & 0xfffdfe8f;
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) | 0x80;
  (**(code **)(*unaff_RDI + 200))();
  return 0;
}



undefined8 FUN_180800ec7(void)

{
  int *piVar1;
  longlong *unaff_RDI;
  
  (**(code **)(unaff_RDI[0xe] + 0x28))(unaff_RDI + 0xe,1,0,0);
  FUN_180762070(unaff_RDI + 0xe,0,1);
  FUN_18075d600(unaff_RDI + 0xe,0,1);
  if (unaff_RDI[6] != 0) {
    FUN_180762070(unaff_RDI[6],0,1);
    FUN_18075d600(unaff_RDI[6],0,1);
  }
  if (unaff_RDI[2] != 0) {
    piVar1 = (int *)(unaff_RDI[2] + 4);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) & 0xfffdfe8f;
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) | 0x80;
  (**(code **)(*unaff_RDI + 200))();
  return 0;
}



undefined8 FUN_180800f04(undefined8 param_1)

{
  int *piVar1;
  longlong *unaff_RDI;
  
  FUN_180762070(param_1,0,1);
  FUN_18075d600(unaff_RDI[6],0,1);
  if (unaff_RDI[2] != 0) {
    piVar1 = (int *)(unaff_RDI[2] + 4);
    *piVar1 = *piVar1 + -1;
  }
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) & 0xfffdfe8f;
  *(uint *)((longlong)unaff_RDI + 0x3c) = *(uint *)((longlong)unaff_RDI + 0x3c) | 0x80;
  (**(code **)(*unaff_RDI + 200))();
  return 0;
}





// 函数: void FUN_180800f70(longlong param_1,float param_2)
void FUN_180800f70(longlong param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(lVar5 + 0x70);
  if ((*(uint *)(lVar5 + 0x48) & 2) != 0) {
    param_2 = 0.0;
  }
  fVar8 = *(float *)(lVar5 + 0xf0);
  fVar8 = (fVar8 * *(float *)(lVar5 + 0x78) + (1.0 - fVar8)) * param_2 * *(float *)(lVar5 + 0x218) *
          (fVar8 * *(float *)(lVar5 + 0xa4) + (1.0 - fVar8));
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x118), lVar3 != 0)) {
    fVar8 = fVar8 * *(float *)(lVar3 + 0x78);
  }
  fVar9 = (1.0 - *(float *)(lVar5 + 0xd0)) * (1.0 - *(float *)(lVar5 + 0xc0));
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    fVar8 = fVar8 * fVar9;
    goto LAB_180801195;
  }
  fVar9 = fVar9 * *(float *)(lVar5 + 0x220);
  fVar7 = 0.0;
  if (((*(uint *)(*(longlong *)(param_1 + 8) + 0x78) & 0x200) != 0) &&
     (lVar3 = *(longlong *)(param_1 + 0x2f0), lVar3 != 0)) {
    if ((*(uint *)(lVar5 + 0x48) >> 0x14 & 1) == 0) {
      fVar10 = *(float *)(lVar5 + 0x98);
      if (fVar10 <= *(float *)(lVar5 + 0xa0)) {
        fVar1 = *(float *)(lVar5 + 0x9c);
        if (fVar1 < fVar10) {
          fVar7 = (fVar10 - fVar1) / (*(float *)(lVar5 + 0xa0) - fVar1);
        }
        goto LAB_1808010b4;
      }
      fVar7 = 1.0;
    }
    else {
      fVar7 = *(float *)(lVar5 + 0xf8);
LAB_1808010b4:
      if (fVar7 <= 0.0) {
        func_0x0001807621a0(lVar3,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
        goto LAB_1808010ff;
      }
    }
    func_0x0001807621a0(lVar3,0);
    func_0x000180762a70(*(undefined8 *)(param_1 + 0x2f0),0,
                        fVar7 * fVar7 * (*(float *)(*(longlong *)(param_1 + 0x18) + 0xfc) - 10.0) +
                        10.0);
  }
LAB_1808010ff:
  if ((fVar9 < 1.0) || (0.0 < fVar7)) {
    func_0x0001807621a0(*(undefined8 *)(param_1 + 0x2e8),0);
    fVar10 = *(float *)(*(longlong *)(param_1 + 0x18) + 0xfc);
    fVar10 = (1.0 - fVar7) * (1.0 - fVar7) * (22050.0 - fVar10) + fVar10;
    fVar9 = fVar9 * 22050.0 * fVar9;
    if (fVar9 <= fVar10) {
      fVar10 = fVar9;
    }
    func_0x000180762a70(*(undefined8 *)(param_1 + 0x2e8),0,fVar10);
    lVar5 = *(longlong *)(param_1 + 0x18);
  }
  else {
    func_0x0001807621a0(*(undefined8 *)(param_1 + 0x2e8),1);
    lVar5 = *(longlong *)(param_1 + 0x18);
  }
LAB_180801195:
  uVar6 = 0;
  uVar4 = 0x40;
  if ((*(uint *)(lVar5 + 0x48) >> 0x15 & 1) == 0) {
    if ((*(longlong *)(lVar5 + 0x20) == 0) ||
       ((*(byte *)(*(longlong *)(lVar5 + 0x20) + 0x48) & 0x10) == 0)) {
      uVar4 = 0x40;
      if ((*(uint *)(lVar5 + 0x48) & 0xc0020) != 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar6 = 1;
  }
  func_0x00018076f590(uVar2,fVar8,uVar4,(*(byte *)(param_1 + 0x3e) ^ 0xff) & 1,uVar6);
  return;
}





// 函数: void FUN_180800f8c(longlong param_1,longlong param_2,float param_3)
void FUN_180800f8c(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong unaff_RBX;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
    param_3 = 0.0;
  }
  fVar7 = *(float *)(param_2 + 0xf0);
  fVar7 = (fVar7 * *(float *)(param_2 + 0x78) + (1.0 - fVar7)) *
          param_3 * *(float *)(param_2 + 0x218) *
          (fVar7 * *(float *)(param_2 + 0xa4) + (1.0 - fVar7));
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x118), lVar3 != 0)) {
    fVar7 = fVar7 * *(float *)(lVar3 + 0x78);
  }
  fVar8 = (1.0 - *(float *)(param_2 + 0xd0)) * (1.0 - *(float *)(param_2 + 0xc0));
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    fVar7 = fVar7 * fVar8;
    goto LAB_180801195;
  }
  fVar8 = fVar8 * *(float *)(param_2 + 0x220);
  fVar6 = 0.0;
  if (((*(uint *)(*(longlong *)(param_1 + 8) + 0x78) & 0x200) != 0) &&
     (lVar3 = *(longlong *)(param_1 + 0x2f0), lVar3 != 0)) {
    if ((*(uint *)(param_2 + 0x48) >> 0x14 & 1) == 0) {
      fVar9 = *(float *)(param_2 + 0x98);
      if (fVar9 <= *(float *)(param_2 + 0xa0)) {
        fVar1 = *(float *)(param_2 + 0x9c);
        if (fVar1 < fVar9) {
          fVar6 = (fVar9 - fVar1) / (*(float *)(param_2 + 0xa0) - fVar1);
        }
        goto LAB_1808010b4;
      }
      fVar6 = 1.0;
    }
    else {
      fVar6 = *(float *)(param_2 + 0xf8);
LAB_1808010b4:
      if (fVar6 <= 0.0) {
        func_0x0001807621a0(lVar3,1);
        goto LAB_1808010ff;
      }
    }
    func_0x0001807621a0(lVar3,0);
    func_0x000180762a70(*(undefined8 *)(unaff_RBX + 0x2f0),0,
                        fVar6 * fVar6 * (*(float *)(*(longlong *)(unaff_RBX + 0x18) + 0xfc) - 10.0)
                        + 10.0);
  }
LAB_1808010ff:
  if ((fVar8 < 1.0) || (0.0 < fVar6)) {
    func_0x0001807621a0(*(undefined8 *)(unaff_RBX + 0x2e8),0);
    fVar9 = *(float *)(*(longlong *)(unaff_RBX + 0x18) + 0xfc);
    fVar9 = (1.0 - fVar6) * (1.0 - fVar6) * (22050.0 - fVar9) + fVar9;
    fVar8 = fVar8 * 22050.0 * fVar8;
    if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    func_0x000180762a70(*(undefined8 *)(unaff_RBX + 0x2e8),0,fVar9);
    param_2 = *(longlong *)(unaff_RBX + 0x18);
  }
  else {
    func_0x0001807621a0(*(undefined8 *)(unaff_RBX + 0x2e8),1);
    param_2 = *(longlong *)(unaff_RBX + 0x18);
  }
LAB_180801195:
  uVar5 = 0;
  uVar4 = 0x40;
  if ((*(uint *)(param_2 + 0x48) >> 0x15 & 1) == 0) {
    if ((*(longlong *)(param_2 + 0x20) == 0) ||
       ((*(byte *)(*(longlong *)(param_2 + 0x20) + 0x48) & 0x10) == 0)) {
      uVar4 = 0x40;
      if ((*(uint *)(param_2 + 0x48) & 0xc0020) != 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar5 = 1;
  }
  func_0x00018076f590(uVar2,fVar7,uVar4,(*(byte *)(unaff_RBX + 0x3e) ^ 0xff) & 1,uVar5);
  return;
}





// 函数: void FUN_180801047(longlong param_1,longlong param_2,uint param_3)
void FUN_180801047(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong unaff_RBX;
  undefined1 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar7;
  float unaff_XMM10_Da;
  
  fVar5 = 0.0;
  if (((*(uint *)(in_RAX + 0x78) & 0x200) == 0) ||
     (lVar2 = *(longlong *)(param_1 + 0x2f0), lVar2 == 0)) goto LAB_1808010ff;
  if ((param_3 >> 0x14 & 1) == 0) {
    fVar7 = *(float *)(param_2 + 0x98);
    fVar6 = unaff_XMM9_Da;
    if (fVar7 <= *(float *)(param_2 + 0xa0)) {
      fVar6 = *(float *)(param_2 + 0x9c);
      if (fVar6 < fVar7) {
        fVar5 = (fVar7 - fVar6) / (*(float *)(param_2 + 0xa0) - fVar6);
      }
      goto LAB_1808010b4;
    }
  }
  else {
    fVar5 = *(float *)(param_2 + 0xf8);
LAB_1808010b4:
    fVar6 = fVar5;
    if (fVar5 <= unaff_XMM10_Da) {
      func_0x0001807621a0(lVar2,1);
      goto LAB_1808010ff;
    }
  }
  func_0x0001807621a0(lVar2,0);
  func_0x000180762a70(*(undefined8 *)(unaff_RBX + 0x2f0),0,
                      fVar6 * fVar6 * (*(float *)(*(longlong *)(unaff_RBX + 0x18) + 0xfc) - 10.0) +
                      10.0);
  fVar5 = fVar6;
LAB_1808010ff:
  if ((unaff_XMM8_Da < unaff_XMM9_Da) || (unaff_XMM10_Da < fVar5)) {
    func_0x0001807621a0(*(undefined8 *)(unaff_RBX + 0x2e8),0);
    fVar7 = *(float *)(*(longlong *)(unaff_RBX + 0x18) + 0xfc);
    fVar7 = (unaff_XMM9_Da - fVar5) * (unaff_XMM9_Da - fVar5) * (22050.0 - fVar7) + fVar7;
    fVar5 = unaff_XMM8_Da * 22050.0 * unaff_XMM8_Da;
    if (fVar5 <= fVar7) {
      fVar7 = fVar5;
    }
    uVar4 = func_0x000180762a70(*(undefined8 *)(unaff_RBX + 0x2e8),0,fVar7);
    lVar2 = *(longlong *)(unaff_RBX + 0x18);
  }
  else {
    uVar4 = func_0x0001807621a0(*(undefined8 *)(unaff_RBX + 0x2e8),1);
    lVar2 = *(longlong *)(unaff_RBX + 0x18);
  }
  uVar3 = 0;
  uVar1 = 0x40;
  if ((*(uint *)(lVar2 + 0x48) >> 0x15 & 1) == 0) {
    if ((*(longlong *)(lVar2 + 0x20) == 0) ||
       ((*(byte *)(*(longlong *)(lVar2 + 0x20) + 0x48) & 0x10) == 0)) {
      uVar1 = 0x40;
      if ((*(uint *)(lVar2 + 0x48) & 0xc0020) != 0) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  func_0x00018076f590(uVar4,lVar2,uVar1,(*(byte *)(unaff_RBX + 0x3e) ^ 0xff) & 1,uVar3);
  return;
}





// 函数: void FUN_180801124(void)
void FUN_180801124(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong unaff_RBX;
  undefined1 uVar3;
  float fVar4;
  undefined4 uVar5;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar6;
  
  func_0x0001807621a0(*(undefined8 *)(unaff_RBX + 0x2e8),0);
  fVar6 = *(float *)(*(longlong *)(unaff_RBX + 0x18) + 0xfc);
  fVar6 = (unaff_XMM9_Da - unaff_XMM6_Da) * (unaff_XMM9_Da - unaff_XMM6_Da) * (22050.0 - fVar6) +
          fVar6;
  fVar4 = unaff_XMM8_Da * 22050.0 * unaff_XMM8_Da;
  if (fVar4 <= fVar6) {
    fVar6 = fVar4;
  }
  uVar5 = func_0x000180762a70(*(undefined8 *)(unaff_RBX + 0x2e8),0,fVar6);
  lVar1 = *(longlong *)(unaff_RBX + 0x18);
  uVar3 = 0;
  uVar2 = 0x40;
  if ((*(uint *)(lVar1 + 0x48) >> 0x15 & 1) == 0) {
    if ((*(longlong *)(lVar1 + 0x20) == 0) ||
       ((*(byte *)(*(longlong *)(lVar1 + 0x20) + 0x48) & 0x10) == 0)) {
      uVar2 = 0x40;
      if ((*(uint *)(lVar1 + 0x48) & 0xc0020) != 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  func_0x00018076f590(uVar5,lVar1,uVar2,(*(byte *)(unaff_RBX + 0x3e) ^ 0xff) & 1,uVar3);
  return;
}





// 函数: void FUN_180801190(void)
void FUN_180801190(void)

{
  func_0x00018076f590();
  return;
}





// 函数: void FUN_1808011b9(void)
void FUN_1808011b9(void)

{
  func_0x00018076f590();
  return;
}



undefined8 FUN_180801220(longlong param_1,longlong param_2,float param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  float fVar8;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(lVar2 + 0x48);
  if ((uVar1 & 2) != 0) {
    param_3 = 0.0;
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x150 + (longlong)*(int *)(param_2 + 0x10) * 8);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x20);
      fVar8 = (1.0 - *(float *)(lVar2 + 0xd4)) * (1.0 - *(float *)(lVar2 + 0xc4)) *
              *(float *)(lVar4 + 500) *
              *(float *)(lVar2 + 0x13c + (longlong)*(int *)(param_2 + 0x10) * 4) *
              *(float *)(lVar2 + 0x218) *
              (*(float *)(lVar2 + 0xf0) * *(float *)(lVar2 + 0x78) +
              (1.0 - *(float *)(lVar2 + 0xf0))) * *(float *)(lVar4 + 0x1ec);
      if ((*(longlong *)(param_1 + 0x28) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x118), lVar2 != 0)) {
        fVar8 = fVar8 * *(float *)(lVar2 + 0x78);
      }
      uVar7 = 0;
      uVar5 = 0x40;
      if ((uVar1 >> 0x15 & 1) == 0) {
        if ((*(byte *)(lVar4 + 0x48) & 0x10) == 0) {
          uVar5 = 0x40;
          if ((uVar1 & 0xc0020) != 0) {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar7 = 1;
      }
      uVar6 = FUN_180765c40(lVar3,fVar8 * param_3,uVar5,(*(byte *)(param_1 + 0x3e) ^ 0xff) & 1,uVar7
                           );
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
  }
  return 0;
}



undefined8 * FUN_180801350(undefined8 *param_1)

{
  FUN_1807f7c50();
  *param_1 = &UNK_18097ea18;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1;
}



undefined8
FUN_180801390(longlong param_1,uint param_2,uint param_3,longlong *param_4,longlong *param_5,
             uint *param_6,int *param_7)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      iVar4 = 0x10;
      goto LAB_1808013f0;
    }
    if (iVar4 == 3) {
      iVar4 = 0x18;
      goto LAB_1808013f0;
    }
    if ((iVar4 == 4) || (iVar4 == 5)) {
      iVar4 = 0x20;
      goto LAB_1808013f0;
    }
  }
  iVar4 = 8;
LAB_1808013f0:
  uVar1 = *(uint *)(param_1 + 0x180);
  if ((((uVar1 != 0) && (uVar1 < param_2 + param_3)) &&
      (param_2 < *(int *)(param_1 + 0x68) * iVar4 + uVar1)) &&
     (uVar3 = FUN_1808015c0(param_1), (int)uVar3 != 0)) {
    return uVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  lVar2 = *(longlong *)(param_1 + 0x160);
  if ((param_2 < uVar1) && (param_3 <= uVar1)) {
    *param_4 = lVar2 + (ulonglong)param_2;
    if (uVar1 < param_2 + param_3) {
      if (param_6 != (uint *)0x0) {
        *param_6 = *(int *)(param_1 + 0x48) - param_2;
      }
      if (param_5 != (longlong *)0x0) {
        *param_5 = lVar2;
      }
      if (param_7 != (int *)0x0) {
        *param_7 = (param_2 - *(int *)(param_1 + 0x48)) + param_3;
      }
    }
    else {
      if (param_6 != (uint *)0x0) {
        *param_6 = param_3;
      }
      if (param_5 != (longlong *)0x0) {
        *param_5 = 0;
      }
      if (param_7 != (int *)0x0) {
        *param_7 = 0;
        return 0;
      }
    }
    uVar3 = 0;
  }
  else {
    *param_4 = 0;
    if (param_5 != (longlong *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = 0;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = 0;
    }
    uVar3 = 0x1f;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



