#include "TaleWorlds.Native.Split.h"

// 99_part_06_part067.c - 13 个函数

// 函数: void FUN_1803e7430(longlong *param_1,ulonglong param_2,longlong *param_3)
void FUN_1803e7430(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar7 = (longlong *)param_1[1];
  lVar5 = *param_1;
  uVar4 = (longlong)plVar7 - lVar5 >> 3;
  if (param_2 <= uVar4) {
    plVar6 = (longlong *)(param_2 * 8 + lVar5);
    if (plVar6 != plVar7) {
      do {
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar6 + 0x38))();
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar7);
      lVar5 = *param_1;
    }
    param_1[1] = lVar5 + param_2 * 8;
    return;
  }
  param_2 = param_2 - uVar4;
  plVar7 = (longlong *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)plVar7 >> 3) < param_2) {
    plVar6 = (longlong *)*param_1;
    lVar5 = (longlong)plVar7 - (longlong)plVar6 >> 3;
    uVar4 = lVar5 * 2;
    if (lVar5 == 0) {
      uVar4 = 1;
    }
    if (uVar4 < lVar5 + param_2) {
      uVar4 = lVar5 + param_2;
    }
    plVar3 = (longlong *)0x0;
    plVar8 = plVar3;
    if (uVar4 != 0) {
      plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)param_1[3]);
      plVar7 = (longlong *)param_1[1];
      plVar6 = (longlong *)*param_1;
      plVar8 = plVar3;
    }
    for (; uVar1 = param_2, plVar2 = plVar3, plVar6 != plVar7; plVar6 = plVar6 + 1) {
      *plVar3 = *plVar6;
      plVar3 = plVar3 + 1;
      *plVar6 = 0;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      plVar7 = (longlong *)*param_3;
      *plVar2 = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))();
      }
      plVar2 = plVar2 + 1;
    }
    plVar7 = (longlong *)*param_1;
    plVar6 = (longlong *)param_1[1];
    if (plVar7 != plVar6) {
      do {
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar7 + 0x38))();
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar6);
      plVar7 = (longlong *)*param_1;
    }
    if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar7);
    }
    *param_1 = (longlong)plVar8;
    param_1[2] = (longlong)(plVar8 + uVar4);
    param_1[1] = (longlong)(plVar3 + param_2);
    return;
  }
  uVar4 = param_2;
  if (param_2 != 0) {
    do {
      plVar6 = (longlong *)*param_3;
      *plVar7 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))();
      }
      plVar7 = plVar7 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    plVar7 = (longlong *)param_1[1];
  }
  param_1[1] = (longlong)(plVar7 + param_2);
  return;
}



undefined8 * FUN_1803e74c0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  char cStackX_8;
  undefined7 uStackX_9;
  
  puVar4 = param_1;
  if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
    uVar1 = *param_2;
    puVar5 = (undefined8 *)param_1[2];
    do {
      uVar2 = *(uint *)(puVar5 + 4);
      if ((uVar2 < uVar1) ||
         ((uVar2 <= uVar1 && (*(int *)((longlong)puVar5 + 0x24) < (int)param_2[1])))) {
LAB_1803e7538:
        puVar6 = (undefined8 *)*puVar5;
        bVar3 = true;
      }
      else {
        if (uVar2 <= uVar1) {
          if ((*(int *)((longlong)puVar5 + 0x24) <= (int)param_2[1]) &&
             (*(int *)(puVar5 + 5) < (int)param_2[2])) goto LAB_1803e7538;
          if (uVar2 <= uVar1) {
            if ((*(int *)((longlong)puVar5 + 0x24) <= (int)param_2[1]) &&
               (((*(int *)((longlong)puVar5 + 0x24) < (int)param_2[1] ||
                 (*(int *)(puVar5 + 5) <= (int)param_2[2])) &&
                (*(int *)((longlong)puVar5 + 0x2c) < (int)param_2[3])))) goto LAB_1803e7538;
          }
        }
        puVar6 = (undefined8 *)puVar5[1];
        bVar3 = false;
      }
      if (bVar3) {
        puVar5 = puVar4;
      }
      puVar4 = puVar5;
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)0x0);
  }
  if (puVar4 != param_1) {
    uVar1 = *param_2;
    uVar2 = *(uint *)(puVar4 + 4);
    if (((uVar2 <= uVar1) &&
        ((uVar2 < uVar1 || (*(int *)((longlong)puVar4 + 0x24) <= (int)param_2[1])))) &&
       ((uVar2 < uVar1 ||
        (((uVar2 <= uVar1 && (*(int *)((longlong)puVar4 + 0x24) < (int)param_2[1])) ||
         (*(int *)(puVar4 + 5) <= (int)param_2[2])))))) {
      if (uVar2 < uVar1) goto LAB_1803e75ef;
      if ((*(int *)((longlong)puVar4 + 0x24) < (int)param_2[1]) ||
         (((*(int *)((longlong)puVar4 + 0x24) <= (int)param_2[1] &&
           (*(int *)(puVar4 + 5) < (int)param_2[2])) ||
          (*(int *)((longlong)puVar4 + 0x2c) <= (int)param_2[3])))) goto LAB_1803e75ef;
    }
  }
  puVar4 = (undefined8 *)FUN_1803e7da0(param_1,puVar4,&cStackX_8,param_2);
  cVar7 = cStackX_8;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_1803e8310(param_1,&cStackX_8,param_2);
    if (cStackX_8 == '\0') goto LAB_1803e75ef;
    cVar7 = '\0';
  }
  FUN_1803e7c80(param_1,&cStackX_8,puVar4,cVar7,param_2);
  puVar4 = (undefined8 *)CONCAT71(uStackX_9,cStackX_8);
LAB_1803e75ef:
  return puVar4 + 6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e7610(longlong *param_1,ulonglong param_2,longlong *param_3)
void FUN_1803e7610(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)param_1[1];
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)plVar4 >> 3)) {
    uVar6 = param_2;
    if (param_2 != 0) {
      do {
        plVar2 = (longlong *)*param_3;
        *plVar4 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
        plVar4 = plVar4 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      plVar4 = (longlong *)param_1[1];
    }
    param_1[1] = (longlong)(plVar4 + param_2);
    return;
  }
  plVar2 = (longlong *)*param_1;
  lVar3 = (longlong)plVar4 - (longlong)plVar2 >> 3;
  uVar6 = lVar3 * 2;
  if (lVar3 == 0) {
    uVar6 = 1;
  }
  if (uVar6 < lVar3 + param_2) {
    uVar6 = lVar3 + param_2;
  }
  plVar1 = (longlong *)0x0;
  plVar7 = plVar1;
  if (uVar6 != 0) {
    plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar6 * 8,(char)param_1[3]);
    plVar4 = (longlong *)param_1[1];
    plVar2 = (longlong *)*param_1;
    plVar7 = plVar1;
  }
  for (; plVar2 != plVar4; plVar2 = plVar2 + 1) {
    *plVar1 = *plVar2;
    plVar1 = plVar1 + 1;
    *plVar2 = 0;
  }
  plVar4 = plVar1;
  uVar5 = param_2;
  if (param_2 != 0) {
    do {
      plVar2 = (longlong *)*param_3;
      *plVar4 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  plVar4 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar4 != plVar2) {
    do {
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar4 + 0x38))();
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    *param_1 = (longlong)plVar7;
    param_1[2] = (longlong)(plVar7 + uVar6);
    param_1[1] = (longlong)(plVar1 + param_2);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e7646(undefined8 param_1,longlong param_2)
void FUN_1803e7646(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *in_RAX;
  longlong *plVar2;
  longlong *unaff_RBX;
  longlong *plVar3;
  longlong unaff_RBP;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *unaff_R14;
  longlong *unaff_R15;
  
  param_2 = param_2 >> 3;
  uVar5 = param_2 * 2;
  if (param_2 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < (ulonglong)(param_2 + unaff_RBP)) {
    uVar5 = param_2 + unaff_RBP;
  }
  plVar2 = (longlong *)0x0;
  plVar6 = plVar2;
  if (uVar5 != 0) {
    plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar5 * 8,(char)unaff_R14[3]);
    unaff_RBX = (longlong *)unaff_R14[1];
    in_RAX = (longlong *)*unaff_R14;
    plVar6 = plVar2;
  }
  for (; in_RAX != unaff_RBX; in_RAX = in_RAX + 1) {
    *plVar2 = *in_RAX;
    plVar2 = plVar2 + 1;
    *in_RAX = 0;
  }
  plVar3 = plVar2;
  lVar4 = unaff_RBP;
  if (unaff_RBP != 0) {
    do {
      plVar1 = (longlong *)*unaff_R15;
      *plVar3 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  plVar3 = (longlong *)*unaff_R14;
  plVar1 = (longlong *)unaff_R14[1];
  if (plVar3 != plVar1) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = (longlong *)*unaff_R14;
  }
  if (plVar3 == (longlong *)0x0) {
    *unaff_R14 = (longlong)plVar6;
    unaff_R14[2] = (longlong)(plVar6 + uVar5);
    unaff_R14[1] = (longlong)(plVar2 + unaff_RBP);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar3);
}






// 函数: void FUN_1803e7758(void)
void FUN_1803e7758(void)

{
  longlong *plVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong lVar2;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  lVar2 = unaff_RBP;
  if (unaff_RBP != 0) {
    do {
      plVar1 = (longlong *)*unaff_R15;
      *unaff_RBX = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      unaff_RBX = unaff_RBX + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    unaff_RBX = *(longlong **)(unaff_R14 + 8);
  }
  *(longlong **)(unaff_R14 + 8) = unaff_RBX + unaff_RBP;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1803e77a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             int *param_5)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  plVar2 = (longlong *)*param_1;
  if ((param_4 == plVar2) || (param_4 == param_1)) {
    if (param_1[4] != 0) {
      param_4 = plVar2;
      if ((*(int *)(plVar2 + 4) < *param_5) ||
         ((*(int *)(plVar2 + 4) <= *param_5 && (*(int *)((longlong)plVar2 + 0x24) < param_5[1]))))
      goto LAB_1803e781f;
    }
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70(param_4);
    iVar5 = *param_5;
    if ((((int)param_4[4] < iVar5) ||
        (((int)param_4[4] <= iVar5 && (*(int *)((longlong)param_4 + 0x24) < param_5[1])))) &&
       ((iVar5 < (int)plVar2[4] ||
        ((iVar5 <= (int)plVar2[4] && (param_5[1] < *(int *)((longlong)plVar2 + 0x24))))))) {
      if (*param_4 == 0) {
LAB_1803e781f:
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
        param_4 = plVar2;
      }
      if (param_4 != (longlong *)0x0) {
        FUN_1803e7f50(param_1,param_2,param_4,uVar6,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar2 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
    do {
      plVar2 = plVar3;
      if ((*param_5 < (int)plVar2[4]) ||
         ((*param_5 <= (int)plVar2[4] && (param_5[1] < *(int *)((longlong)plVar2 + 0x24))))) {
        plVar3 = (longlong *)plVar2[1];
        bVar1 = true;
      }
      else {
        plVar3 = (longlong *)*plVar2;
        bVar1 = false;
      }
    } while (plVar3 != (longlong *)0x0);
  }
  plVar3 = plVar2;
  if (bVar1) {
    if (plVar2 == (longlong *)param_1[1]) {
      iVar5 = *param_5;
      goto FUN_1803e78af;
    }
    plVar3 = (longlong *)func_0x00018066b9a0(plVar2);
  }
  iVar5 = *param_5;
  if ((iVar5 <= (int)plVar3[4]) &&
     ((iVar5 < (int)plVar3[4] || (param_5[1] <= *(int *)((longlong)plVar3 + 0x24))))) {
    *param_2 = plVar3;
    return param_2;
  }
FUN_1803e78af:
  if (((plVar2 == param_1) || (iVar5 < (int)plVar2[4])) ||
     ((iVar5 <= (int)plVar2[4] && (param_5[1] < *(int *)((longlong)plVar2 + 0x24))))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x30,(char)param_1[5]);
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)param_5;
  *(undefined8 *)(lVar4 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar2,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e78af(void)
void FUN_1803e78af(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(unaff_RSI + 0x28));
  *(undefined8 *)(lVar1 + 0x20) = *unaff_RDI;
  *(undefined8 *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e78d0(void)
void FUN_1803e78d0(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(unaff_RSI + 0x28));
  *(undefined8 *)(lVar1 + 0x20) = *unaff_RDI;
  *(undefined8 *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e78d4(void)
void FUN_1803e78d4(void)

{
  longlong lVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(unaff_RSI + 0x28));
  *(undefined8 *)(lVar1 + 0x20) = *unaff_RDI;
  *(undefined8 *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}






// 函数: void FUN_1803e7919(void)
void FUN_1803e7919(void)

{
  undefined8 unaff_RBX;
  undefined8 *unaff_R15;
  
  *unaff_R15 = unaff_RBX;
  return;
}



undefined8 *
FUN_1803e7940(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             int *param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_18 [16];
  
  plVar2 = (longlong *)*param_1;
  if ((param_4 == plVar2) || (param_4 == param_1)) {
    if (param_1[4] == 0) goto LAB_1803e7a01;
    param_4 = plVar2;
    if (*param_5 <= *(int *)(plVar2 + 4)) {
      if (*param_5 < *(int *)(plVar2 + 4)) goto LAB_1803e7a01;
      if ((param_5[1] <= *(int *)((longlong)plVar2 + 0x24)) &&
         ((param_5[1] < *(int *)((longlong)plVar2 + 0x24) || (param_5[2] <= *(int *)(plVar2 + 5)))))
      goto LAB_1803e7a01;
    }
LAB_1803e79e7:
    uVar4 = 0;
    plVar2 = param_4;
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70(param_4);
    iVar1 = *param_5;
    if (iVar1 <= (int)param_4[4]) {
      if (iVar1 < (int)param_4[4]) goto LAB_1803e7a01;
      if ((param_5[1] <= *(int *)((longlong)param_4 + 0x24)) &&
         ((param_5[1] < *(int *)((longlong)param_4 + 0x24) || (param_5[2] <= (int)param_4[5]))))
      goto LAB_1803e7a01;
    }
    if ((int)plVar2[4] <= iVar1) {
      if ((int)plVar2[4] < iVar1) goto LAB_1803e7a01;
      if ((*(int *)((longlong)plVar2 + 0x24) <= param_5[1]) &&
         ((*(int *)((longlong)plVar2 + 0x24) < param_5[1] || ((int)plVar2[5] <= param_5[2]))))
      goto LAB_1803e7a01;
    }
    if (*param_4 == 0) goto LAB_1803e79e7;
    uVar4 = 1;
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_1803e8150(param_1,param_2,plVar2,uVar4,param_5);
    return param_2;
  }
LAB_1803e7a01:
  puVar3 = (undefined8 *)FUN_1803e8000(param_1,auStack_18,plVar2,param_5);
  *param_2 = *puVar3;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e7a90(longlong param_1,longlong *param_2,longlong *param_3)
void FUN_1803e7a90(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  char acStackX_8 [8];
  char acStackX_10 [4];
  uint uStackX_14;
  
  lVar7 = *param_2;
  lVar8 = param_2[1];
  iVar10 = 0;
  while (lVar7 != *param_3) {
    lVar7 = *(longlong *)(lVar7 + 0x10);
    while (lVar7 == 0) {
      plVar1 = (longlong *)(lVar8 + 8);
      lVar8 = lVar8 + 8;
      lVar7 = *plVar1;
    }
    iVar10 = iVar10 + 1;
  }
  FUN_18066c220(param_1 + 0x20,acStackX_8,*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),iVar10);
  if (acStackX_8[0] != '\0') {
    FUN_1803b94a0(param_1);
  }
  piVar2 = (int *)*param_3;
  piVar3 = (int *)*param_2;
  do {
    if (piVar3 == piVar2) {
      return;
    }
    uVar11 = (ulonglong)(*piVar3 * 1000 + piVar3[1]);
    uVar9 = uVar11 % (ulonglong)*(uint *)(param_1 + 0x10);
    for (piVar6 = *(int **)(*(longlong *)(param_1 + 8) + uVar9 * 8); piVar6 != (int *)0x0;
        piVar6 = *(int **)(piVar6 + 4)) {
      if ((*piVar3 == *piVar6) && (piVar3[1] == piVar6[1])) goto LAB_1803e7c1e;
    }
    piVar6 = (int *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x2c));
    iVar10 = piVar3[1];
    iVar4 = piVar3[2];
    iVar5 = piVar3[3];
    *piVar6 = *piVar3;
    piVar6[1] = iVar10;
    piVar6[2] = iVar4;
    piVar6[3] = iVar5;
    piVar6[4] = 0;
    piVar6[5] = 0;
    FUN_18066c220(param_1 + 0x20,acStackX_10,*(undefined4 *)(param_1 + 0x10),
                  *(undefined4 *)(param_1 + 0x18),1);
    if (acStackX_10[0] != '\0') {
      uVar9 = uVar11 % (ulonglong)uStackX_14;
      FUN_1803b94a0(param_1);
    }
    *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar9 * 8);
    *(int **)(*(longlong *)(param_1 + 8) + uVar9 * 8) = piVar6;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
LAB_1803e7c1e:
    piVar3 = *(int **)(piVar3 + 4);
    *param_2 = (longlong)piVar3;
    if (piVar3 == (int *)0x0) {
      lVar7 = param_2[1];
      do {
        piVar3 = *(int **)(lVar7 + 8);
        lVar7 = lVar7 + 8;
      } while (piVar3 == (int *)0x0);
      *param_2 = (longlong)piVar3;
      param_2[1] = lVar7;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e7b2b(void)
void FUN_1803e7b2b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *unaff_RBX;
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  int *unaff_R13;
  undefined8 *unaff_R14;
  char cStack0000000000000088;
  uint uStack000000000000008c;
  
  do {
    uVar7 = (ulonglong)(*unaff_RBX * 1000 + unaff_RBX[1]);
    uVar6 = uVar7 % (ulonglong)*(uint *)(unaff_RDI + 0x10);
    for (piVar4 = *(int **)(*(longlong *)(unaff_RDI + 8) + uVar6 * 8); piVar4 != (int *)0x0;
        piVar4 = *(int **)(piVar4 + 4)) {
      if ((*unaff_RBX == *piVar4) && (unaff_RBX[1] == piVar4[1])) goto LAB_1803e7c1e;
    }
    piVar4 = (int *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(unaff_RDI + 0x2c));
    iVar1 = unaff_RBX[1];
    iVar2 = unaff_RBX[2];
    iVar3 = unaff_RBX[3];
    *piVar4 = *unaff_RBX;
    piVar4[1] = iVar1;
    piVar4[2] = iVar2;
    piVar4[3] = iVar3;
    piVar4[4] = 0;
    piVar4[5] = 0;
    FUN_18066c220(unaff_RDI + 0x20,&stack0x00000088,*(undefined4 *)(unaff_RDI + 0x10),
                  *(undefined4 *)(unaff_RDI + 0x18),1);
    if (cStack0000000000000088 != '\0') {
      uVar6 = uVar7 % (ulonglong)uStack000000000000008c;
      FUN_1803b94a0();
    }
    *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + uVar6 * 8);
    *(int **)(*(longlong *)(unaff_RDI + 8) + uVar6 * 8) = piVar4;
    *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
LAB_1803e7c1e:
    unaff_RBX = *(int **)(unaff_RBX + 4);
    *unaff_R14 = unaff_RBX;
    if (unaff_RBX == (int *)0x0) {
      lVar5 = unaff_R14[1];
      do {
        unaff_RBX = *(int **)(lVar5 + 8);
        lVar5 = lVar5 + 8;
      } while (unaff_RBX == (int *)0x0);
      *unaff_R14 = unaff_RBX;
      unaff_R14[1] = lVar5;
    }
    if (unaff_RBX == unaff_R13) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1803e7c67(void)
void FUN_1803e7c67(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e7c80(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_1803e7c80(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    uVar1 = *param_5;
    uVar2 = *(uint *)(param_3 + 0x20);
    if ((uVar2 <= uVar1) && ((uVar2 < uVar1 || (*(int *)(param_3 + 0x24) <= (int)param_5[1])))) {
      if ((uVar2 < uVar1) ||
         (((uVar2 <= uVar1 && (*(int *)(param_3 + 0x24) < (int)param_5[1])) ||
          (*(int *)(param_3 + 0x28) <= (int)param_5[2])))) {
        if (uVar1 <= uVar2) {
          if ((((int)param_5[1] <= *(int *)(param_3 + 0x24)) &&
              (((int)param_5[1] < *(int *)(param_3 + 0x24) ||
               ((int)param_5[2] <= *(int *)(param_3 + 0x28))))) &&
             ((int)param_5[3] < *(int *)(param_3 + 0x2c))) goto LAB_1803e7d0f;
        }
        uVar5 = 1;
        goto LAB_1803e7d11;
      }
    }
  }
LAB_1803e7d0f:
  uVar5 = 0;
LAB_1803e7d11:
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x50,*(undefined1 *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(uint *)(lVar4 + 0x20) = *param_5;
  *(uint *)(lVar4 + 0x24) = uVar1;
  *(uint *)(lVar4 + 0x28) = uVar2;
  *(uint *)(lVar4 + 0x2c) = uVar3;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined4 *)(lVar4 + 0x48) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,param_3,param_1,uVar5);
}



longlong * FUN_1803e7da0(longlong *param_1,longlong *param_2,undefined1 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if ((param_2 == plVar3) || (param_2 == param_1)) {
    if (param_1[4] == 0) goto LAB_1803e7f33;
    uVar1 = *(uint *)(plVar3 + 4);
    uVar2 = *param_4;
    if ((uVar2 <= uVar1) &&
       ((uVar2 < uVar1 || ((int)param_4[1] <= *(int *)((longlong)plVar3 + 0x24))))) {
      if ((uVar2 < uVar1) ||
         (((uVar2 <= uVar1 && ((int)param_4[1] < *(int *)((longlong)plVar3 + 0x24))) ||
          ((int)param_4[2] <= *(int *)(plVar3 + 5))))) {
        if (uVar1 <= uVar2) {
          if (((*(int *)((longlong)plVar3 + 0x24) <= (int)param_4[1]) &&
              ((*(int *)((longlong)plVar3 + 0x24) < (int)param_4[1] ||
               (*(int *)(plVar3 + 5) <= (int)param_4[2])))) &&
             (*(int *)((longlong)plVar3 + 0x2c) < (int)param_4[3])) goto LAB_1803e7f1d;
        }
        goto LAB_1803e7f33;
      }
    }
LAB_1803e7f1d:
    *param_3 = 0;
    return plVar3;
  }
  plVar3 = (longlong *)func_0x00018066bd70(param_2);
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = *param_4;
  if ((uVar2 <= uVar1) &&
     ((uVar2 < uVar1 || ((int)param_4[1] <= *(int *)((longlong)param_2 + 0x24))))) {
    if ((uVar2 < uVar1) ||
       (((uVar2 <= uVar1 && ((int)param_4[1] < *(int *)((longlong)param_2 + 0x24))) ||
        ((int)param_4[2] <= (int)param_2[5])))) {
      if (uVar2 < uVar1) goto LAB_1803e7f33;
      if ((((int)param_4[1] < *(int *)((longlong)param_2 + 0x24)) ||
          (((int)param_4[1] <= *(int *)((longlong)param_2 + 0x24) &&
           ((int)param_4[2] < (int)param_2[5])))) ||
         ((int)param_4[3] <= *(int *)((longlong)param_2 + 0x2c))) goto LAB_1803e7f33;
    }
  }
  uVar1 = *(uint *)(plVar3 + 4);
  if ((uVar1 <= uVar2) &&
     ((uVar1 < uVar2 || (*(int *)((longlong)plVar3 + 0x24) <= (int)param_4[1])))) {
    if ((uVar1 < uVar2) ||
       (((uVar1 <= uVar2 && (*(int *)((longlong)plVar3 + 0x24) < (int)param_4[1])) ||
        ((int)plVar3[5] <= (int)param_4[2])))) {
      if ((((uVar1 < uVar2) ||
           ((uVar1 <= uVar2 && (*(int *)((longlong)plVar3 + 0x24) < (int)param_4[1])))) ||
          ((uVar1 <= uVar2 &&
           ((*(int *)((longlong)plVar3 + 0x24) <= (int)param_4[1] &&
            ((int)plVar3[5] < (int)param_4[2])))))) ||
         (*(int *)((longlong)plVar3 + 0x2c) <= (int)param_4[3])) {
LAB_1803e7f33:
        *param_3 = 0;
        return (longlong *)0x0;
      }
    }
  }
  if (*param_2 != 0) {
    *param_3 = 1;
    return plVar3;
  }
  *param_3 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e7f50(longlong param_1,undefined8 param_2,longlong param_3,char param_4,int *param_5)
void FUN_1803e7f50(longlong param_1,undefined8 param_2,longlong param_3,char param_4,int *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_4 == '\0') && (param_3 != param_1)) {
    if ((*(int *)(param_3 + 0x20) <= *param_5) &&
       ((*(int *)(param_3 + 0x20) < *param_5 || (*(int *)(param_3 + 0x24) <= param_5[1])))) {
      uVar2 = 1;
      goto LAB_1803e7f9e;
    }
  }
  uVar2 = 0;
LAB_1803e7f9e:
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(param_1 + 0x28));
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)param_5;
  *(undefined8 *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1803e8000(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  
  bVar4 = true;
  puVar3 = param_1;
  if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[2];
    do {
      puVar3 = puVar1;
      if (*param_4 < *(int *)(puVar3 + 4)) {
LAB_1803e8055:
        puVar1 = (undefined8 *)puVar3[1];
        bVar4 = true;
      }
      else {
        if (*param_4 <= *(int *)(puVar3 + 4)) {
          if ((param_4[1] < *(int *)((longlong)puVar3 + 0x24)) ||
             ((param_4[1] <= *(int *)((longlong)puVar3 + 0x24) &&
              (param_4[2] < *(int *)(puVar3 + 5))))) goto LAB_1803e8055;
        }
        puVar1 = (undefined8 *)*puVar3;
        bVar4 = false;
      }
    } while (puVar1 != (undefined8 *)0x0);
  }
  puVar1 = puVar3;
  if (bVar4) {
    if (puVar3 != (undefined8 *)param_1[1]) {
      puVar1 = (undefined8 *)func_0x00018066b9a0(puVar3);
      goto LAB_1803e807a;
    }
  }
  else {
LAB_1803e807a:
    if (*param_4 <= *(int *)(puVar1 + 4)) {
      if (*param_4 < *(int *)(puVar1 + 4)) {
LAB_1803e8098:
        *param_2 = puVar1;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if ((param_4[1] <= *(int *)((longlong)puVar1 + 0x24)) &&
         ((param_4[1] < *(int *)((longlong)puVar1 + 0x24) || (param_4[2] <= *(int *)(puVar1 + 5)))))
      goto LAB_1803e8098;
    }
  }
  if (puVar3 != param_1) {
    if (*(int *)(puVar3 + 4) <= *param_4) {
      if (*param_4 <= *(int *)(puVar3 + 4)) {
        if ((param_4[1] < *(int *)((longlong)puVar3 + 0x24)) ||
           ((param_4[1] <= *(int *)((longlong)puVar3 + 0x24) && (param_4[2] < *(int *)(puVar3 + 5)))
           )) goto LAB_1803e80e3;
      }
      uVar5 = 1;
      goto LAB_1803e80e6;
    }
  }
LAB_1803e80e3:
  uVar5 = 0;
LAB_1803e80e6:
  lVar2 = FUN_18062b420(_DAT_180c8ed18,0x38,*(undefined1 *)(param_1 + 5));
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)param_4;
  *(int *)(lVar2 + 0x28) = param_4[2];
  *(undefined8 *)(lVar2 + 0x2c) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar2,puVar3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




