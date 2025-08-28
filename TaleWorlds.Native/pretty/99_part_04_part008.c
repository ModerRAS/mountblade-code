#include "TaleWorlds.Native.Split.h"

// 99_part_04_part008.c - 18 个函数

// 函数: void FUN_18025d310(undefined4 *param_1,longlong *param_2)
void FUN_18025d310(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar1 = *param_1;
  puVar4 = (undefined4 *)param_2[1];
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  uVar1 = param_1[1];
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  uVar1 = param_1[2];
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  uVar1 = param_1[3];
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  uVar1 = param_1[4];
  if ((ulonglong)((param_2[2] - (longlong)puVar4) + *param_2) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar1;
  param_2[1] = param_2[1] + 4;
  FUN_1802575d0(puVar4,param_1[5],param_2);
  puVar2 = (undefined8 *)param_2[1];
  uVar3 = *(undefined8 *)(param_1 + 6);
  if ((ulonglong)((param_2[2] - (longlong)puVar2) + *param_2) < 9) {
    FUN_180639bf0(param_2,(longlong)puVar2 + (8 - *param_2));
    *(undefined8 *)param_2[1] = uVar3;
  }
  else {
    *puVar2 = uVar3;
  }
  param_2[1] = param_2[1] + 8;
  return;
}






// 函数: void FUN_18025d480(undefined4 *param_1,longlong param_2)
void FUN_18025d480(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *param_1 = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  param_1[1] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  param_1[2] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  param_1[3] = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  uVar1 = **(undefined4 **)(param_2 + 8);
  param_1[4] = uVar1;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  FUN_180257480(uVar1,param_2,param_1 + 5);
  *(undefined8 *)(param_1 + 6) = **(undefined8 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 8;
  return;
}






// 函数: void FUN_18025d510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18025d510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  puStack_48 = &UNK_180a3c3e0;
  uStack_30 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 3;
  FUN_18025d650(&puStack_48,param_1,param_3,param_4,0xfffffffffffffffe,&uStack_28);
  FUN_18025d860(&puStack_48,param_3);
  FUN_1800ff020(&uStack_28);
  puStack_48 = &UNK_180a3c3e0;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_18025d5f0(undefined8 *param_1)
void FUN_18025d5f0(undefined8 *param_1)

{
  FUN_1800ff020();
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025d650(longlong *param_1,longlong param_2)
void FUN_18025d650(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar1 = **(uint **)(param_2 + 8);
  puVar7 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,puVar7,uVar1);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
    puVar7 = *(uint **)(param_2 + 8);
  }
  uVar1 = *puVar7;
  param_1 = param_1 + 4;
  *(uint **)(param_2 + 8) = puVar7 + 1;
  FUN_1800b8570(param_1,(longlong)(int)uVar1);
  if ((longlong)(int)uVar1 < 1) {
    return;
  }
  *(undefined4 *)*param_1 = **(undefined4 **)(param_2 + 8);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  iVar2 = **(int **)(param_2 + 8);
  uVar5 = (ulonglong)iVar2;
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 0x10);
  lVar8 = *(longlong *)(lVar3 + 8);
  uVar6 = lVar4 - lVar8 >> 3;
  if (uVar6 < uVar5) {
    uVar5 = uVar5 - uVar6;
    if ((ulonglong)(*(longlong *)(lVar3 + 0x18) - lVar4 >> 3) < uVar5) {
      uVar9 = uVar6 * 2;
      if (uVar6 == 0) {
        uVar9 = 1;
      }
      if (uVar9 < uVar6 + uVar5) {
        uVar9 = uVar6 + uVar5;
      }
      if (uVar9 == 0) {
        lVar10 = lVar4;
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_18062b420(_DAT_180c8ed18,uVar9 * 8,*(undefined1 *)(lVar3 + 0x20));
        lVar8 = *(longlong *)(lVar3 + 8);
        lVar10 = *(longlong *)(lVar3 + 0x10);
      }
      if (lVar8 != lVar10) {
                    // WARNING: Subroutine does not return
        memmove(lVar4,lVar8,lVar10 - lVar8);
      }
      if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar4,0,uVar5 * 8);
      }
      if (*(longlong *)(lVar3 + 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong *)(lVar3 + 8) = lVar4;
      *(ulonglong *)(lVar3 + 0x18) = lVar4 + uVar9 * 8;
    }
    else if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar4,0,uVar5 * 8);
    }
  }
  else {
    lVar4 = lVar8 + uVar5 * 8;
  }
  *(longlong *)(lVar3 + 0x10) = lVar4;
                    // WARNING: Subroutine does not return
  memcpy(*(undefined8 *)(*param_1 + 8),*(undefined8 *)(param_2 + 8),(longlong)(iVar2 * 8));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025d6bd(void)
void FUN_18025d6bd(void)

{
  longlong lVar1;
  undefined4 *in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_R14;
  longlong *unaff_R15;
  longlong *in_stack_00000068;
  int iStack0000000000000070;
  
  *(undefined4 *)*unaff_R15 = *in_RAX;
  *(longlong *)(unaff_R14 + 8) = *(longlong *)(unaff_R14 + 8) + 4;
  iStack0000000000000070 = **(int **)(unaff_R14 + 8);
  uVar3 = (ulonglong)iStack0000000000000070;
  *(int **)(unaff_R14 + 8) = *(int **)(unaff_R14 + 8) + 1;
  lVar1 = *unaff_R15;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  lVar5 = *(longlong *)(lVar1 + 8);
  uVar4 = lVar2 - lVar5 >> 3;
  if (uVar4 < uVar3) {
    uVar3 = uVar3 - uVar4;
    if ((ulonglong)(*(longlong *)(lVar1 + 0x18) - lVar2 >> 3) < uVar3) {
      uVar6 = uVar4 * 2;
      if (uVar4 == 0) {
        uVar6 = 1;
      }
      if (uVar6 < uVar4 + uVar3) {
        uVar6 = uVar4 + uVar3;
      }
      if (uVar6 == 0) {
        lVar7 = lVar2;
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,*(undefined1 *)(lVar1 + 0x20));
        lVar5 = *(longlong *)(lVar1 + 8);
        lVar7 = *(longlong *)(lVar1 + 0x10);
      }
      if (lVar5 != lVar7) {
                    // WARNING: Subroutine does not return
        memmove(lVar2,lVar5,lVar7 - lVar5);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar2,0,uVar3 * 8);
      }
      if (*(longlong *)(lVar1 + 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong *)(lVar1 + 8) = lVar2;
      *(ulonglong *)(lVar1 + 0x18) = lVar2 + uVar6 * 8;
    }
    else {
      in_stack_00000068 = unaff_R15;
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar2,0,uVar3 * 8);
      }
    }
  }
  else {
    lVar2 = lVar5 + uVar3 * 8;
    in_stack_00000068 = unaff_R15;
  }
  *(longlong *)(lVar1 + 0x10) = lVar2;
                    // WARNING: Subroutine does not return
  memcpy(*(undefined8 *)(*in_stack_00000068 + 8),*(undefined8 *)(unaff_R14 + 8),
         (longlong)(iStack0000000000000070 * 8));
}






// 函数: void FUN_18025d849(void)
void FUN_18025d849(void)

{
  return;
}






// 函数: void FUN_18025d860(longlong param_1,longlong *param_2)
void FUN_18025d860(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  FUN_180639ec0(param_2,param_1);
  piVar5 = (int *)param_2[1];
  iVar7 = (int)((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20)) / 0x28);
  if ((ulonglong)((*param_2 - (longlong)piVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar5 + (4 - *param_2));
    piVar5 = (int *)param_2[1];
  }
  *piVar5 = iVar7;
  puVar4 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar4;
  if (0 < iVar7) {
    uVar1 = **(undefined4 **)(param_1 + 0x20);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar1;
    param_2[1] = param_2[1] + 4;
    piVar5 = (int *)param_2[1];
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    if ((ulonglong)((*param_2 - (longlong)piVar5) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)piVar5 + (4 - *param_2));
      piVar5 = (int *)param_2[1];
    }
    iVar7 = (int)(lVar6 - lVar2 >> 3);
    *piVar5 = iVar7;
    param_2[1] = param_2[1] + 4;
    lVar6 = param_2[1];
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar8 = (longlong)iVar7 * 8;
    if ((ulonglong)((*param_2 - lVar6) + param_2[2]) <= uVar8) {
      FUN_180639bf0(param_2,uVar8 + (lVar6 - *param_2));
      lVar6 = param_2[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar6,uVar3,uVar8);
  }
  return;
}






// 函数: void FUN_18025d8e7(undefined4 *param_1)
void FUN_18025d8e7(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int iVar6;
  ulonglong uVar7;
  
  uVar1 = **(undefined4 **)(unaff_RBP + 0x20);
  if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (undefined4 *)unaff_RBX[1];
  }
  *param_1 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  piVar4 = (int *)unaff_RBX[1];
  lVar5 = *(longlong *)(*(longlong *)(unaff_RBP + 0x20) + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(unaff_RBP + 0x20) + 8);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar4 = (int *)unaff_RBX[1];
  }
  iVar6 = (int)(lVar5 - lVar2 >> 3);
  *piVar4 = iVar6;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  lVar5 = unaff_RBX[1];
  uVar3 = *(undefined8 *)(*(longlong *)(unaff_RBP + 0x20) + 8);
  uVar7 = (longlong)iVar6 * 8;
  if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar7) {
    FUN_180639bf0();
    lVar5 = unaff_RBX[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar5,uVar3,uVar7);
}






// 函数: void FUN_18025d9db(void)
void FUN_18025d9db(void)

{
  return;
}






// 函数: void FUN_18025d9f0(longlong param_1,longlong *param_2)
void FUN_18025d9f0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = 0;
  puVar3 = (undefined1 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar3;
  uVar1 = *(undefined1 *)(param_1 + 8);
  if ((ulonglong)((*param_2 - (longlong)puVar3) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
    puVar3 = (undefined1 *)param_2[1];
  }
  *puVar3 = uVar1;
  puVar4 = (undefined8 *)(param_2[1] + 1);
  param_2[1] = (longlong)puVar4;
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (0x10 - *param_2));
    puVar4 = (undefined8 *)param_2[1];
  }
  uVar2 = *(undefined8 *)(param_1 + 0x14);
  *puVar4 = *(undefined8 *)(param_1 + 0xc);
  puVar4[1] = uVar2;
  param_2[1] = param_2[1] + 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18025daf0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3,0xfffffffffffffffe);
  *puVar2 = &UNK_1809ffa18;
  *puVar2 = &UNK_180a15380;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
  if (param_2 != 0) {
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
  }
  return puVar2;
}






// 函数: void FUN_18025db70(longlong param_1)
void FUN_18025db70(longlong param_1)

{
  longlong alStack_30 [2];
  code *pcStack_20;
  code *pcStack_18;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    pcStack_20 = (code *)&UNK_18025de30;
    pcStack_18 = FUN_18025dd00;
    alStack_30[0] = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))
              (*(longlong **)(param_1 + 0x88),&DAT_180a00e28,param_1 + 0xc,0,alStack_30);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(alStack_30,0,0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025dc00(longlong param_1)
void FUN_18025dc00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined *puVar6;
  
  if (*(char *)(*(longlong *)(param_1 + 0x20) + 8) == '\0') {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,0x10,3,0xfffffffffffffffe);
    plVar5 = (longlong *)FUN_1802ac0a0(uVar4);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar1 = *(longlong **)(param_1 + 0xb0);
    *(longlong **)(param_1 + 0xb0) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
    puVar6 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x70) != (undefined *)0x0) {
      puVar6 = *(undefined **)(param_1 + 0x70);
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,puVar6);
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = param_1;
    *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0xb1) = 1;
    lVar2 = _DAT_180c86930;
    plVar5 = *(longlong **)(param_1 + 0xb0);
    iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
    *(undefined1 *)((longlong)plVar5 + 0xb2) = 1;
    FUN_1802abe00((longlong)iVar3 * 0x98 + lVar2 + 8,plVar5);
  }
  return;
}






// 函数: void FUN_18025dd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)
void FUN_18025dd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  puStack_58 = &UNK_180a3c3e0;
  uStack_40 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 3;
  FUN_18025d650(&puStack_58,param_1,param_3,param_4,0xfffffffffffffffe);
  lVar2 = *(longlong *)(*param_4 + 0xb0);
  uVar3 = *(undefined8 *)(lVar2 + 0xb8);
  *(undefined8 *)(lVar2 + 0xb8) = uStack_38;
  uVar4 = *(undefined8 *)(lVar2 + 0xc0);
  *(undefined8 *)(lVar2 + 0xc0) = uStack_30;
  uVar5 = *(undefined8 *)(lVar2 + 200);
  *(undefined8 *)(lVar2 + 200) = uStack_28;
  uVar1 = *(undefined4 *)(lVar2 + 0xd0);
  *(undefined4 *)(lVar2 + 0xd0) = uStack_20;
  uStack_38 = uVar3;
  uStack_30 = uVar4;
  uStack_28 = uVar5;
  uStack_20 = uVar1;
  FUN_1800ff020(&uStack_38);
  puStack_58 = &UNK_180a3c3e0;
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18025de70(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,0x1a);
  lVar5 = FUN_18025f2a0(uVar4);
  if (param_2 != 0) {
    *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_2 + 8);
    FUN_180627be0(lVar5 + 0x10,param_2 + 0x10);
    uVar1 = *(undefined4 *)(param_2 + 0x34);
    uVar2 = *(undefined4 *)(param_2 + 0x38);
    uVar3 = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(lVar5 + 0x34) = uVar1;
    *(undefined4 *)(lVar5 + 0x38) = uVar2;
    *(undefined4 *)(lVar5 + 0x3c) = uVar3;
    if ((undefined8 *)(lVar5 + 0x40) != (undefined8 *)(param_2 + 0x40)) {
      FUN_1802620c0((undefined8 *)(lVar5 + 0x40),*(undefined8 *)(param_2 + 0x40),
                    *(undefined8 *)(param_2 + 0x48));
    }
    if ((undefined8 *)(lVar5 + 0x60) != (undefined8 *)(param_2 + 0x60)) {
      FUN_180261ea0((undefined8 *)(lVar5 + 0x60),*(undefined8 *)(param_2 + 0x60),
                    *(undefined8 *)(param_2 + 0x68));
    }
    if ((undefined8 *)(lVar5 + 0x80) != (undefined8 *)(param_2 + 0x80)) {
      FUN_1802622c0((undefined8 *)(lVar5 + 0x80),*(undefined8 *)(param_2 + 0x80),
                    *(undefined8 *)(param_2 + 0x88));
    }
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(lVar5 + 0xa8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(lVar5 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(lVar5 + 0xb8) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(lVar5 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(lVar5 + 200) = uVar4;
    *(undefined4 *)(lVar5 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined1 *)(lVar5 + 0xd4) = *(undefined1 *)(param_2 + 0xd4);
  }
  return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025df70(longlong param_1)
void FUN_18025df70(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined *puVar3;
  
  if ((*(longlong *)(param_1 + 0xb0) == 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0xd4) == '\0')) {
    plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x140,0x10,6,0,0xfffffffffffffffe);
    *plVar2 = (longlong)&UNK_180a21690;
    *plVar2 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar2 + 1) = 0;
    *plVar2 = (longlong)&UNK_180a02e68;
    plVar1 = plVar2 + 2;
    *plVar1 = (longlong)&UNK_18098bcb0;
    plVar2[3] = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    *plVar1 = (longlong)&UNK_1809fcc28;
    plVar2[3] = (longlong)(plVar2 + 5);
    *(undefined4 *)(plVar2 + 4) = 0;
    *(undefined1 *)(plVar2 + 5) = 0;
    *(undefined1 *)((longlong)plVar2 + 0xb2) = 0;
    *(undefined4 *)(plVar2 + 1) = 0;
    *(undefined2 *)(plVar2 + 0x16) = 0;
    plVar2[0x15] = 0;
    *plVar2 = (longlong)&UNK_180a07248;
    plVar2[0x15] = param_1;
    plVar2[0x17] = 0;
    *(undefined1 *)((longlong)plVar2 + 300) = 0;
    plVar2[0x18] = 0;
    plVar2[0x19] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x1b] = 0;
    plVar2[0x1c] = 0;
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    *(undefined4 *)(plVar2 + 0x25) = 0;
    plVar2[0x21] = 0;
    plVar2[0x22] = 0;
    plVar2[0x23] = 0;
    plVar2[0x24] = 0;
    (**(code **)(*plVar2 + 0x28))(plVar2);
    puVar3 = &DAT_18098bc73;
    if (*(undefined **)(param_1 + 0x70) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar3);
    plVar1 = *(longlong **)(param_1 + 0xb0);
    *(longlong **)(param_1 + 0xb0) = plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0xb1) = 1;
    FUN_1800b5cc0();
  }
  return;
}






// 函数: void FUN_18025e150(undefined4 param_1,longlong param_2)
void FUN_18025e150(undefined4 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong in_RCX;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined *puStack_18;
  
  if (*(longlong *)(param_2 + 0xb0) == 0) {
    plVar1 = *(longlong **)(in_RCX + 0xb0);
    if (plVar1 != (longlong *)0x0) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStackX_8 = *(longlong **)(param_2 + 0xb0);
    *(longlong **)(param_2 + 0xb0) = plVar1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  else {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(longlong **)(in_RCX + 0xb0);
    if (plStackX_8 != (longlong *)0x0) {
      param_1 = (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_1800b55b0(param_1,&plStackX_8);
  }
  uStack_30 = (longlong **)CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
  if (*(longlong *)(in_RCX + 0xb0) != 0) {
    *(longlong *)(*(longlong *)(in_RCX + 0xb0) + 0xa8) = param_2;
    lVar2 = *(longlong *)(in_RCX + 0xb0);
    uStack_30 = (longlong **)CONCAT44(uStack_30._4_4_,(undefined4)uStack_30);
    if (*(longlong *)(lVar2 + 0xb8) != 0) {
      plStackX_8 = *(longlong **)(lVar2 + 0xa8);
      uStack_30 = &plStackX_8;
      pcStack_20 = (code *)&UNK_18014f390;
      puStack_18 = &UNK_18014f380;
      uStack_38 = (undefined4)lVar2;
      uStack_34 = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      (**(code **)(*(longlong *)plStackX_8[0x11] + 0x60))
                ((longlong *)plStackX_8[0x11],&DAT_180a00d48,(longlong)plStackX_8 + 0xc,0,&uStack_30
                );
      if (pcStack_20 != (code *)0x0) {
        (*pcStack_20)(&uStack_30,0,0);
      }
    }
  }
  plStackX_8 = *(longlong **)(in_RCX + 0xb0);
  *(undefined8 *)(in_RCX + 0xb0) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}






// 函数: void FUN_18025e330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18025e330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_98 = &UNK_180a3c3e0;
  uStack_80 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 6;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 6;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 6;
  FUN_18025e700(&puStack_98,param_1,param_3,param_4,&uStack_38);
  FUN_18025e470(&puStack_98,param_3);
  FUN_18014e570(&uStack_38);
  FUN_18014e4d0(&uStack_58);
  FUN_18014e470(&uStack_78);
  puStack_98 = &UNK_180a3c3e0;
  if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_18025e470(longlong param_1,longlong *param_2)
void FUN_18025e470(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  FUN_180639ec0(param_2,param_1);
  lVar7 = *(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40);
  piVar1 = (int *)param_2[1];
  lVar7 = lVar7 / 0x12 + (lVar7 >> 0x3f);
  if ((ulonglong)((*param_2 - (longlong)piVar1) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar1 + (4 - *param_2));
    piVar1 = (int *)param_2[1];
  }
  *piVar1 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  uVar6 = 0;
  puVar8 = (undefined4 *)param_2[1];
  uVar3 = (*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40)) / 0x48;
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (uVar3 != 0) {
    do {
      FUN_18025e930(*(longlong *)(param_1 + 0x40) + uVar9 * 0x48,uVar3,param_2);
      uVar4 = (int)uVar5 + 1;
      uVar3 = (*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40)) / 0x48;
      uVar5 = (ulonglong)uVar4;
      uVar9 = (longlong)(int)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 < uVar3);
    puVar8 = (undefined4 *)param_2[1];
  }
  lVar7 = *(longlong *)(param_1 + 0x68);
  lVar2 = *(longlong *)(param_1 + 0x60);
  if ((ulonglong)((*param_2 - (longlong)puVar8) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar8 + (4 - *param_2));
    puVar8 = (undefined4 *)param_2[1];
  }
  *puVar8 = (int)((lVar7 - lVar2) / 0x38);
  param_2[1] = param_2[1] + 4;
  piVar1 = (int *)param_2[1];
  uVar3 = (*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60)) / 0x38;
  uVar5 = uVar6;
  uVar9 = uVar6;
  if (uVar3 != 0) {
    do {
      FUN_18025ea90(uVar9 * 0x38 + *(longlong *)(param_1 + 0x60),uVar3,param_2);
      uVar4 = (int)uVar5 + 1;
      uVar3 = (*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60)) / 0x38;
      uVar5 = (ulonglong)uVar4;
      uVar9 = (longlong)(int)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 < uVar3);
    piVar1 = (int *)param_2[1];
  }
  lVar7 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  if ((ulonglong)((*param_2 - (longlong)piVar1) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar1 + (4 - *param_2));
    piVar1 = (int *)param_2[1];
  }
  *piVar1 = (int)(lVar7 >> 4) - (int)(lVar7 >> 0x3f);
  param_2[1] = param_2[1] + 4;
  lVar2 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  lVar7 = lVar2 >> 0x3f;
  uVar3 = uVar6;
  if (lVar2 / 0x60 + lVar7 != lVar7) {
    do {
      FUN_18025eb50(uVar3 * 0x60 + *(longlong *)(param_1 + 0x20),param_2);
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
      uVar3 = (longlong)(int)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20)) / 0x60));
  }
  return;
}






