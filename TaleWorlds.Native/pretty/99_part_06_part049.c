#include "TaleWorlds.Native.Split.h"

// 99_part_06_part049.c - 3 个函数

// 函数: void FUN_1803d8c10(uint *param_1,undefined8 *param_2)
void FUN_1803d8c10(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  uVar2 = uVar1 >> 0xb;
  uVar4 = (ulonglong)uVar2;
  if (*(longlong *)(param_1 + (ulonglong)uVar2 * 2 + 2) == 0) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,0x4000,0x25);
    LOCK();
    bVar5 = *(longlong *)(param_1 + uVar4 * 2 + 2) == 0;
    if (bVar5) {
      *(longlong *)(param_1 + uVar4 * 2 + 2) = lVar3;
    }
    UNLOCK();
    if (bVar5) {
      LOCK();
      *(undefined1 *)(uVar4 + 0x108 + (longlong)param_1) = 0;
      UNLOCK();
    }
    else {
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      do {
      } while (*(char *)(uVar4 + 0x108 + (longlong)param_1) != '\0');
    }
  }
  else {
    do {
    } while (*(char *)(uVar4 + 0x108 + (longlong)param_1) != '\0');
  }
  *(undefined8 *)(*(longlong *)(param_1 + uVar4 * 2 + 2) + (ulonglong)(uVar1 + uVar2 * -0x800) * 8)
       = *param_2;
  return;
}



longlong * FUN_1803d8cd0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lStackX_8;
  undefined1 auStack_18 [16];
  
  plVar4 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = param_1;
    plVar5 = (longlong *)param_1[2];
    do {
      if ((*(uint *)(plVar5 + 4) < *param_2) ||
         ((*(uint *)(plVar5 + 4) <= *param_2 && ((ulonglong)plVar5[5] < *(ulonglong *)(param_2 + 2))
          ))) {
        plVar6 = (longlong *)*plVar5;
        bVar2 = true;
      }
      else {
        plVar6 = (longlong *)plVar5[1];
        bVar2 = false;
      }
      plVar4 = plVar5;
      if (bVar2) {
        plVar4 = plVar3;
      }
      plVar3 = plVar4;
      plVar5 = plVar6;
    } while (plVar6 != (longlong *)0x0);
  }
  if (plVar4 != param_1) {
    if ((*(uint *)(plVar4 + 4) <= *param_2) &&
       ((*(uint *)(plVar4 + 4) < *param_2 || ((ulonglong)plVar4[5] <= *(ulonglong *)(param_2 + 2))))
       ) {
      return plVar4 + 6;
    }
  }
  plVar3 = (longlong *)*param_1;
  if ((plVar4 == plVar3) || (plVar4 == param_1)) {
    if (param_1[4] != 0) {
      plVar4 = plVar3;
      if ((*(uint *)(plVar3 + 4) < *param_2) ||
         ((*(uint *)(plVar3 + 4) <= *param_2 && ((ulonglong)plVar3[5] < *(ulonglong *)(param_2 + 2))
          ))) goto LAB_1803d8db9;
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(plVar4);
    uVar1 = *param_2;
    if (((*(uint *)(plVar4 + 4) < uVar1) ||
        ((*(uint *)(plVar4 + 4) <= uVar1 && ((ulonglong)plVar4[5] < *(ulonglong *)(param_2 + 2)))))
       && ((uVar1 < *(uint *)(plVar3 + 4) ||
           ((uVar1 <= *(uint *)(plVar3 + 4) && (*(ulonglong *)(param_2 + 2) < (ulonglong)plVar3[5]))
           )))) {
      if (*plVar4 == 0) {
LAB_1803d8db9:
        uVar7 = 0;
        plVar3 = plVar4;
      }
      else {
        uVar7 = 1;
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_1803d91a0(param_1,&lStackX_8,plVar3,uVar7,param_2);
        goto LAB_1803d8ded;
      }
    }
  }
  plVar4 = (longlong *)FUN_1803d9030(param_1,auStack_18,plVar3,param_2);
  lStackX_8 = *plVar4;
LAB_1803d8ded:
  return (longlong *)(lStackX_8 + 0x30);
}



undefined8 * FUN_1803d8e10(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puStackX_8;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  longlong lStack_40;
  undefined8 *puStack_38;
  int *piStack_30;
  
  puStackX_8 = param_1;
  if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
    lVar1 = param_2 + 0x10;
    lVar2 = param_2 + 0x1c;
    lVar3 = param_2 + 0x18;
    iVar5 = *(int *)(param_2 + 0x20);
    lVar4 = param_2 + 0x20;
    puVar10 = param_1;
    puVar8 = (undefined8 *)param_1[2];
    do {
      lStack_80 = param_2 + 8;
      lStack_78 = param_2 + 0x14;
      puStack_38 = puVar8 + 4;
      lStack_60 = (longlong)puVar8 + 0x3c;
      puStack_58 = puVar8 + 7;
      puStack_50 = puVar8 + 6;
      puStack_48 = puVar8 + 5;
      lStack_40 = (longlong)puVar8 + 0x34;
      piStack_30 = (int *)(puVar8 + 8);
      puVar11 = puVar8;
      lStack_98 = lVar2;
      lStack_90 = lVar3;
      lStack_88 = lVar1;
      lStack_70 = param_2;
      lStack_68 = lVar4;
      if ((*piStack_30 < iVar5) ||
         ((*piStack_30 <= iVar5 &&
          (cVar7 = func_0x0001801eb6f0(&lStack_60,&lStack_98), cVar7 != '\0')))) {
        puVar11 = (undefined8 *)*puVar11;
        bVar6 = true;
      }
      else {
        puVar11 = (undefined8 *)puVar11[1];
        bVar6 = false;
      }
      param_1 = puVar8;
      if (bVar6) {
        param_1 = puVar10;
      }
      puVar10 = param_1;
      puVar8 = puVar11;
    } while (puVar11 != (undefined8 *)0x0);
  }
  puVar10 = puStackX_8;
  if (param_1 != puStackX_8) {
    puStack_38 = param_1 + 4;
    lStack_60 = (longlong)param_1 + 0x3c;
    puStack_58 = param_1 + 7;
    puStack_50 = param_1 + 6;
    puStack_48 = param_1 + 5;
    lStack_40 = (longlong)param_1 + 0x34;
    piStack_30 = (int *)(param_1 + 8);
    lStack_98 = param_2 + 0x1c;
    lStack_90 = param_2 + 0x18;
    lStack_88 = param_2 + 0x10;
    lStack_80 = param_2 + 8;
    lStack_78 = param_2 + 0x14;
    lStack_68 = param_2 + 0x20;
    lStack_70 = param_2;
    if ((*piStack_30 <= *(int *)(param_2 + 0x20)) &&
       ((*piStack_30 < *(int *)(param_2 + 0x20) ||
        (cVar7 = func_0x0001801eb6f0(&lStack_98,&lStack_60), cVar7 == '\0')))) {
      return param_1 + 9;
    }
  }
  puVar8 = (undefined8 *)FUN_1803d9410(puVar10,param_1,&puStackX_8,param_2);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_1803d9920(puVar10,&puStackX_8,param_2);
    if ((char)puStackX_8 == '\0') goto LAB_1803d901e;
    uVar9 = 0;
  }
  else {
    uVar9 = (ulonglong)puStackX_8 & 0xff;
  }
  FUN_1803d92a0(puVar10,&puStackX_8,puVar8,uVar9,param_2);
  puVar8 = puStackX_8;
LAB_1803d901e:
  return puVar8 + 9;
}



undefined8 * FUN_1803d8e3b(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong in_RAX;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 *in_R10;
  undefined8 *in_R11;
  undefined8 *puVar9;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RSI;
  *(undefined8 *)(in_RAX + 0x18) = unaff_R12;
  *(undefined8 *)(in_RAX + 0x20) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R14;
  iVar1 = *(int *)(unaff_RBX + 0x20);
  *(undefined8 *)(in_RAX + -0x28) = unaff_R15;
  lVar5 = param_2 + 8;
  lVar6 = param_2 + 0x14;
  do {
    *(longlong *)(unaff_RBP + -0x21) = lVar5;
    *(longlong *)(unaff_RBP + -1) = (longlong)in_R11 + 0x3c;
    *(undefined8 **)(unaff_RBP + 7) = in_R11 + 7;
    *(undefined8 **)(unaff_RBP + 0xf) = in_R11 + 6;
    *(undefined8 **)(unaff_RBP + 0x17) = in_R11 + 5;
    *(longlong *)(unaff_RBP + 0x1f) = (longlong)in_R11 + 0x34;
    *(longlong *)(unaff_RBP + -0x39) = param_2 + 0x1c;
    *(longlong *)(unaff_RBP + -0x31) = param_2 + 0x18;
    *(longlong *)(unaff_RBP + -0x29) = param_2 + 0x10;
    *(longlong *)(unaff_RBP + -0x19) = lVar6;
    *(longlong *)(unaff_RBP + -0x11) = unaff_RBX;
    *(longlong *)(unaff_RBP + -9) = unaff_RBX + 0x20;
    *(undefined8 **)(unaff_RBP + 0x27) = in_R11 + 4;
    *(undefined8 **)(unaff_RBP + 0x2f) = in_R11 + 8;
    iVar2 = *(int *)(in_R11 + 8);
    puVar9 = in_R11;
    if (iVar2 < iVar1) {
LAB_1803d8eeb:
      puVar9 = (undefined8 *)*puVar9;
      bVar3 = true;
    }
    else {
      if (iVar2 <= iVar1) {
        cVar4 = func_0x0001801eb6f0(unaff_RBP + -1,unaff_RBP + -0x39);
        lVar6 = unaff_RBX + 0x14;
        if (cVar4 != '\0') goto LAB_1803d8eeb;
      }
      puVar9 = (undefined8 *)puVar9[1];
      bVar3 = false;
    }
    lVar5 = unaff_RBX + 8;
    puVar7 = in_R11;
    if (bVar3) {
      puVar7 = in_R10;
    }
    in_R10 = puVar7;
    in_R11 = puVar9;
  } while (puVar9 != (undefined8 *)0x0);
  puVar9 = *(undefined8 **)(unaff_RBP + 0x67);
  if (puVar7 != puVar9) {
    iVar2 = *(int *)(unaff_RBX + 0x20);
    *(undefined8 **)(unaff_RBP + 0x27) = puVar7 + 4;
    *(longlong *)(unaff_RBP + -1) = (longlong)puVar7 + 0x3c;
    *(undefined8 **)(unaff_RBP + 7) = puVar7 + 7;
    *(undefined8 **)(unaff_RBP + 0xf) = puVar7 + 6;
    *(undefined8 **)(unaff_RBP + 0x17) = puVar7 + 5;
    *(longlong *)(unaff_RBP + 0x1f) = (longlong)puVar7 + 0x34;
    *(undefined8 **)(unaff_RBP + 0x2f) = puVar7 + 8;
    *(longlong *)(unaff_RBP + -0x39) = unaff_RBX + 0x1c;
    *(longlong *)(unaff_RBP + -0x31) = unaff_RBX + 0x18;
    *(longlong *)(unaff_RBP + -0x29) = unaff_RBX + 0x10;
    *(longlong *)(unaff_RBP + -0x21) = unaff_RBX + 8;
    *(longlong *)(unaff_RBP + -0x19) = unaff_RBX + 0x14;
    *(longlong *)(unaff_RBP + -0x11) = unaff_RBX;
    *(longlong *)(unaff_RBP + -9) = unaff_RBX + 0x20;
    iVar1 = *(int *)(puVar7 + 8);
    if (iVar1 <= iVar2) {
      if (iVar1 < iVar2) {
LAB_1803d8fc1:
        return puVar7 + 9;
      }
      cVar4 = func_0x0001801eb6f0(unaff_RBP + -0x39,unaff_RBP + -1);
      if (cVar4 == '\0') goto LAB_1803d8fc1;
    }
  }
  lVar5 = FUN_1803d9410(puVar9,puVar7,unaff_RBP + 0x67);
  if (lVar5 == 0) {
    lVar5 = FUN_1803d9920(puVar9,unaff_RBP + 0x67);
    if (*(char *)(unaff_RBP + 0x67) == '\0') goto LAB_1803d901e;
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined1 *)(unaff_RBP + 0x67);
  }
  FUN_1803d92a0(puVar9,unaff_RBP + 0x67,lVar5,uVar8);
  lVar5 = *(longlong *)(unaff_RBP + 0x67);
LAB_1803d901e:
  return (undefined8 *)(lVar5 + 0x48);
}



longlong FUN_1803d8f32(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong in_R10;
  
  if (in_R10 != unaff_RDI) {
    iVar2 = *(int *)(unaff_RBX + 0x20);
    *(longlong *)(unaff_RBP + 0x27) = in_R10 + 0x20;
    *(longlong *)(unaff_RBP + -1) = in_R10 + 0x3c;
    *(longlong *)(unaff_RBP + 7) = in_R10 + 0x38;
    *(longlong *)(unaff_RBP + 0xf) = in_R10 + 0x30;
    *(longlong *)(unaff_RBP + 0x17) = in_R10 + 0x28;
    *(longlong *)(unaff_RBP + 0x1f) = in_R10 + 0x34;
    *(int **)(unaff_RBP + 0x2f) = (int *)(in_R10 + 0x40);
    *(longlong *)(unaff_RBP + -0x39) = unaff_RBX + 0x1c;
    *(longlong *)(unaff_RBP + -0x31) = unaff_RBX + 0x18;
    *(longlong *)(unaff_RBP + -0x29) = unaff_RBX + 0x10;
    *(longlong *)(unaff_RBP + -0x21) = unaff_RBX + 8;
    *(longlong *)(unaff_RBP + -0x19) = unaff_RBX + 0x14;
    *(longlong *)(unaff_RBP + -0x11) = unaff_RBX;
    *(longlong *)(unaff_RBP + -9) = unaff_RBX + 0x20;
    iVar1 = *(int *)(in_R10 + 0x40);
    if ((iVar1 <= iVar2) &&
       ((iVar1 < iVar2 ||
        (cVar3 = func_0x0001801eb6f0(unaff_RBP + -0x39,unaff_RBP + -1), cVar3 == '\0')))) {
      return in_R10 + 0x48;
    }
  }
  lVar4 = FUN_1803d9410();
  if ((lVar4 != 0) || (lVar4 = FUN_1803d9920(), *(char *)(unaff_RBP + 0x67) != '\0')) {
    FUN_1803d92a0();
    lVar4 = *(longlong *)(unaff_RBP + 0x67);
  }
  return lVar4 + 0x48;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1803d9030(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  bVar4 = true;
  puVar7 = param_1;
  if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[2];
    do {
      puVar7 = puVar5;
      if ((*param_4 < *(uint *)(puVar7 + 4)) ||
         ((*param_4 <= *(uint *)(puVar7 + 4) && (*(ulonglong *)(param_4 + 2) < (ulonglong)puVar7[5])
          ))) {
        bVar4 = true;
        puVar5 = (undefined8 *)puVar7[1];
      }
      else {
        bVar4 = false;
        puVar5 = (undefined8 *)*puVar7;
      }
    } while (puVar5 != (undefined8 *)0x0);
  }
  puVar5 = puVar7;
  if (bVar4) {
    if (puVar7 != (undefined8 *)param_1[1]) {
      puVar5 = (undefined8 *)func_0x00018066b9a0();
      goto LAB_1803d90af;
    }
  }
  else {
LAB_1803d90af:
    if ((*param_4 <= *(uint *)(puVar5 + 4)) &&
       ((*param_4 < *(uint *)(puVar5 + 4) || (*(ulonglong *)(param_4 + 2) <= (ulonglong)puVar5[5])))
       ) {
      *param_2 = puVar5;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  if (puVar7 != param_1) {
    if ((*(uint *)(puVar7 + 4) <= *param_4) &&
       ((*(uint *)(puVar7 + 4) < *param_4 || ((ulonglong)puVar7[5] <= *(ulonglong *)(param_4 + 2))))
       ) {
      uVar8 = 1;
      goto LAB_1803d90f2;
    }
  }
  uVar8 = 0;
LAB_1803d90f2:
  lVar6 = FUN_18062b420(_DAT_180c8ed18,0x60,*(undefined1 *)(param_1 + 5));
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(uint *)(lVar6 + 0x20) = *param_4;
  *(uint *)(lVar6 + 0x24) = uVar1;
  *(uint *)(lVar6 + 0x28) = uVar2;
  *(uint *)(lVar6 + 0x2c) = uVar3;
  *(undefined4 *)(lVar6 + 0x50) = 0x3f800000;
  *(undefined8 *)(lVar6 + 0x54) = 0x40000000;
  *(undefined4 *)(lVar6 + 0x5c) = 3;
  *(undefined8 *)(lVar6 + 0x40) = 1;
  *(undefined **)(lVar6 + 0x38) = &DAT_180be0000;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  *(undefined4 *)(lVar6 + 0x58) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,puVar7,param_1,uVar8,uVar9,lVar6 + 0x30);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d91a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_1803d91a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (((char)param_4 == '\0') && (param_3 != param_1)) {
    if ((*(uint *)(param_3 + 0x20) <= *param_5) &&
       ((*(uint *)(param_3 + 0x20) < *param_5 ||
        (*(ulonglong *)(param_3 + 0x28) <= *(ulonglong *)(param_5 + 2))))) {
      uVar5 = 1;
      goto LAB_1803d91f9;
    }
  }
  uVar5 = 0;
LAB_1803d91f9:
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x60,*(undefined1 *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(uint *)(lVar4 + 0x20) = *param_5;
  *(uint *)(lVar4 + 0x24) = uVar1;
  *(uint *)(lVar4 + 0x28) = uVar2;
  *(uint *)(lVar4 + 0x2c) = uVar3;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
  *(undefined8 *)(lVar4 + 0x54) = 0x40000000;
  *(undefined4 *)(lVar4 + 0x5c) = 3;
  *(undefined8 *)(lVar4 + 0x40) = 1;
  *(undefined **)(lVar4 + 0x38) = &DAT_180be0000;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined4 *)(lVar4 + 0x58) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,param_3,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803d92a0(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
void FUN_1803d92a0(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  int *piStack_68;
  longlong lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  longlong lStack_40;
  undefined8 *puStack_38;
  int *piStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if ((param_4 == '\0') && (param_3 != param_1)) {
    lStack_70 = param_3 + 0x20;
    lStack_98 = param_3 + 0x3c;
    lStack_90 = param_3 + 0x38;
    lStack_88 = param_3 + 0x30;
    lStack_80 = param_3 + 0x28;
    lStack_78 = param_3 + 0x34;
    piStack_68 = (int *)(param_3 + 0x40);
    lStack_60 = (longlong)param_5 + 0x1c;
    puStack_58 = param_5 + 3;
    puStack_50 = param_5 + 2;
    puStack_48 = param_5 + 1;
    lStack_40 = (longlong)param_5 + 0x14;
    puStack_38 = param_5;
    piStack_30 = (int *)(param_5 + 4);
    if (*piStack_68 <= *piStack_30) {
      if (*piStack_30 <= *piStack_68) {
        cVar5 = func_0x0001801eb6f0(&lStack_60,&lStack_98);
        if (cVar5 != '\0') goto LAB_1803d938a;
      }
      uVar7 = 1;
      goto LAB_1803d938d;
    }
  }
LAB_1803d938a:
  uVar7 = 0;
LAB_1803d938d:
  lVar6 = FUN_18062b420(_DAT_180c8ed18,0xa8,*(undefined1 *)(param_1 + 0x28));
  uVar4 = param_5[1];
  *(undefined8 *)(lVar6 + 0x20) = *param_5;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_5 + 0x14);
  uVar2 = *(undefined4 *)(param_5 + 3);
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x1c);
  *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(param_5 + 2);
  *(undefined4 *)(lVar6 + 0x34) = uVar1;
  *(undefined4 *)(lVar6 + 0x38) = uVar2;
  *(undefined4 *)(lVar6 + 0x3c) = uVar3;
  *(undefined8 *)(lVar6 + 0x40) = param_5[4];
  FUN_1801eb8e0(lVar6 + 0x48);
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,param_3,param_1,uVar7);
}



longlong * FUN_1803d9410(longlong *param_1,longlong *param_2,undefined1 *param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  longlong lStack_40;
  longlong *plStack_38;
  longlong *plStack_30;
  
  plVar2 = (longlong *)*param_1;
  if ((param_2 == plVar2) || (param_2 == param_1)) {
    if (param_1[4] != 0) {
      lStack_70 = (longlong)(plVar2 + 4);
      lStack_60 = param_4 + 0x1c;
      plStack_30 = (longlong *)(param_4 + 0x20);
      plStack_58 = (longlong *)(param_4 + 0x18);
      plStack_50 = (longlong *)(param_4 + 0x10);
      plStack_48 = (longlong *)(param_4 + 8);
      lStack_40 = param_4 + 0x14;
      lStack_98 = (longlong)plVar2 + 0x3c;
      lStack_90 = (longlong)(plVar2 + 7);
      lStack_88 = (longlong)(plVar2 + 6);
      lStack_80 = (longlong)(plVar2 + 5);
      lStack_78 = (longlong)plVar2 + 0x34;
      lStack_68 = (longlong)(plVar2 + 8);
      param_2 = plVar2;
      if ((*(int *)(plVar2 + 8) < *(int *)plStack_30) ||
         ((*(int *)(plVar2 + 8) <= *(int *)plStack_30 &&
          (plStack_38 = (longlong *)param_4, cVar1 = func_0x0001801eb6f0(&lStack_98,&lStack_60),
          cVar1 != '\0')))) goto LAB_1803d961a;
    }
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70(param_2);
    iVar3 = *(int *)(param_4 + 0x20);
    plStack_38 = param_2 + 4;
    lStack_80 = param_4 + 8;
    lStack_78 = param_4 + 0x14;
    lStack_60 = (longlong)param_2 + 0x3c;
    plStack_58 = param_2 + 7;
    plStack_50 = param_2 + 6;
    plStack_48 = param_2 + 5;
    lStack_40 = (longlong)param_2 + 0x34;
    plStack_30 = param_2 + 8;
    if (((int)*plStack_30 < iVar3) ||
       (((int)*plStack_30 <= iVar3 &&
        (lStack_98 = param_4 + 0x1c, lStack_90 = param_4 + 0x18, lStack_88 = param_4 + 0x10,
        lStack_70 = param_4, lStack_68 = param_4 + 0x20,
        cVar1 = func_0x0001801eb6f0(&lStack_60,&lStack_98), cVar1 != '\0')))) {
      plStack_38 = plVar2 + 4;
      lStack_60 = (longlong)plVar2 + 0x3c;
      plStack_58 = plVar2 + 7;
      plStack_50 = plVar2 + 6;
      plStack_48 = plVar2 + 5;
      lStack_40 = (longlong)plVar2 + 0x34;
      plStack_30 = plVar2 + 8;
      lStack_80 = param_4 + 8;
      lStack_78 = param_4 + 0x14;
      if ((iVar3 < (int)*plStack_30) ||
         ((iVar3 <= (int)*plStack_30 &&
          (lStack_98 = param_4 + 0x1c, lStack_90 = param_4 + 0x18, lStack_88 = param_4 + 0x10,
          lStack_70 = param_4, lStack_68 = param_4 + 0x20,
          cVar1 = func_0x0001801eb6f0(&lStack_98,&lStack_60), cVar1 != '\0')))) {
        if (*param_2 != 0) {
          *param_3 = 1;
          return plVar2;
        }
        goto LAB_1803d961a;
      }
    }
  }
  param_2 = (longlong *)0x0;
LAB_1803d961a:
  *param_3 = 0;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803d9660(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06f60;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803d9750(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06fe0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803d9840(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c06fa0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



undefined8 * FUN_1803d9920(undefined8 *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  longlong lStack_78;
  undefined8 *puStack_70;
  int *piStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  int *piStack_30;
  
  puVar7 = (undefined8 *)param_1[2];
  bVar5 = true;
  puVar8 = param_1;
  if (puVar7 != (undefined8 *)0x0) {
    iVar4 = *(int *)(param_3 + 0x20);
    lVar1 = param_3 + 0x1c;
    lVar2 = param_3 + 0x18;
    lVar3 = param_3 + 0x20;
    do {
      lStack_40 = param_3 + 0x14;
      lStack_48 = param_3 + 8;
      lStack_50 = param_3 + 0x10;
      puStack_70 = puVar7 + 4;
      lStack_98 = (longlong)puVar7 + 0x3c;
      puStack_90 = puVar7 + 7;
      puStack_88 = puVar7 + 6;
      puStack_80 = puVar7 + 5;
      lStack_78 = (longlong)puVar7 + 0x34;
      piStack_68 = (int *)(puVar7 + 8);
      puVar8 = puVar7;
      lStack_60 = lVar1;
      lStack_58 = lVar2;
      lStack_38 = param_3;
      piStack_30 = (int *)lVar3;
      if ((iVar4 < *piStack_68) ||
         ((iVar4 <= *piStack_68 &&
          (cVar6 = func_0x0001801eb6f0(&lStack_60,&lStack_98), cVar6 != '\0')))) {
        puVar7 = (undefined8 *)puVar7[1];
        bVar5 = true;
      }
      else {
        puVar7 = (undefined8 *)*puVar7;
        bVar5 = false;
      }
    } while (puVar7 != (undefined8 *)0x0);
  }
  puVar7 = puVar8;
  if (bVar5) {
    if (puVar8 == (undefined8 *)param_1[1]) goto LAB_1803d9ae7;
    puVar7 = (undefined8 *)func_0x00018066b9a0(puVar8);
  }
  puStack_70 = puVar7 + 4;
  lStack_60 = param_3 + 0x1c;
  piStack_30 = (int *)(param_3 + 0x20);
  lStack_58 = param_3 + 0x18;
  lStack_50 = param_3 + 0x10;
  lStack_48 = param_3 + 8;
  lStack_40 = param_3 + 0x14;
  lStack_98 = (longlong)puVar7 + 0x3c;
  puStack_90 = puVar7 + 7;
  puStack_88 = puVar7 + 6;
  puStack_80 = puVar7 + 5;
  lStack_78 = (longlong)puVar7 + 0x34;
  piStack_68 = (int *)(puVar7 + 8);
  if ((*piStack_30 <= *(int *)(puVar7 + 8)) &&
     ((*piStack_30 < *(int *)(puVar7 + 8) ||
      (lStack_38 = param_3, cVar6 = func_0x0001801eb6f0(&lStack_98,&lStack_60), cVar6 == '\0')))) {
    *param_2 = 0;
    return puVar7;
  }
LAB_1803d9ae7:
  *param_2 = 1;
  return puVar8;
}



undefined8 * FUN_1803d9955(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  int unaff_EDI;
  longlong lVar6;
  undefined8 *in_R10;
  undefined8 *puVar7;
  longlong unaff_R14;
  
  lVar6 = param_3 + 8;
  do {
    *(longlong *)(unaff_RBP + -1) = param_3 + 0x1c;
    *(longlong *)(unaff_RBP + -0x39) = (longlong)in_R10 + 0x3c;
    *(undefined8 **)(unaff_RBP + -0x31) = in_R10 + 7;
    *(undefined8 **)(unaff_RBP + -0x29) = in_R10 + 6;
    *(undefined8 **)(unaff_RBP + -0x21) = in_R10 + 5;
    *(longlong *)(unaff_RBP + -0x19) = (longlong)in_R10 + 0x34;
    *(undefined8 **)(unaff_RBP + -0x11) = in_R10 + 4;
    *(undefined8 **)(unaff_RBP + -9) = in_R10 + 8;
    *(longlong *)(unaff_RBP + 7) = param_3 + 0x18;
    *(longlong *)(unaff_RBP + 0xf) = param_2;
    *(longlong *)(unaff_RBP + 0x17) = lVar6;
    *(longlong *)(unaff_RBP + 0x1f) = unaff_RBX + 0x14;
    *(longlong *)(unaff_RBP + 0x27) = unaff_RBX;
    *(longlong *)(unaff_RBP + 0x2f) = unaff_RBX + 0x20;
    iVar1 = *(int *)(in_R10 + 8);
    puVar7 = in_R10;
    if (unaff_EDI < iVar1) {
LAB_1803d9a02:
      in_R10 = (undefined8 *)in_R10[1];
      bVar3 = true;
    }
    else {
      if (unaff_EDI <= iVar1) {
        cVar4 = func_0x0001801eb6f0(unaff_RBP + -1,unaff_RBP + -0x39);
        param_2 = unaff_RBX + 0x10;
        lVar6 = unaff_RBX + 8;
        if (cVar4 != '\0') goto LAB_1803d9a02;
      }
      in_R10 = (undefined8 *)*in_R10;
      bVar3 = false;
    }
  } while (in_R10 != (undefined8 *)0x0);
  puVar5 = puVar7;
  if (bVar3) {
    if (puVar7 == *(undefined8 **)(unaff_R14 + 8)) goto LAB_1803d9ae7;
    puVar5 = (undefined8 *)func_0x00018066b9a0(puVar7);
  }
  *(longlong *)(unaff_RBP + 0x27) = unaff_RBX;
  *(undefined8 **)(unaff_RBP + -0x11) = puVar5 + 4;
  *(longlong *)(unaff_RBP + -1) = unaff_RBX + 0x1c;
  *(int **)(unaff_RBP + 0x2f) = (int *)(unaff_RBX + 0x20);
  *(longlong *)(unaff_RBP + 7) = unaff_RBX + 0x18;
  *(longlong *)(unaff_RBP + 0xf) = unaff_RBX + 0x10;
  *(longlong *)(unaff_RBP + 0x17) = unaff_RBX + 8;
  *(longlong *)(unaff_RBP + 0x1f) = unaff_RBX + 0x14;
  *(longlong *)(unaff_RBP + -0x39) = (longlong)puVar5 + 0x3c;
  *(undefined8 **)(unaff_RBP + -0x31) = puVar5 + 7;
  *(undefined8 **)(unaff_RBP + -0x29) = puVar5 + 6;
  *(undefined8 **)(unaff_RBP + -0x21) = puVar5 + 5;
  *(longlong *)(unaff_RBP + -0x19) = (longlong)puVar5 + 0x34;
  iVar2 = *(int *)(puVar5 + 8);
  *(undefined8 **)(unaff_RBP + -9) = puVar5 + 8;
  iVar1 = *(int *)(unaff_RBX + 0x20);
  if ((iVar1 <= iVar2) &&
     ((iVar1 < iVar2 ||
      (cVar4 = func_0x0001801eb6f0(unaff_RBP + -0x39,unaff_RBP + -1), cVar4 == '\0')))) {
    *unaff_RSI = 0;
    return puVar5;
  }
LAB_1803d9ae7:
  *unaff_RSI = 1;
  return puVar7;
}



longlong FUN_1803d9a29(void)

{
  int iVar1;
  int iVar2;
  char in_AL;
  char cVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong in_R11;
  longlong unaff_R14;
  
  lVar4 = in_R11;
  if (in_AL != '\0') {
    if (in_R11 == *(longlong *)(unaff_R14 + 8)) goto LAB_1803d9ae7;
    lVar4 = func_0x00018066b9a0();
  }
  *(longlong *)(unaff_RBP + 0x27) = unaff_RBX;
  *(longlong *)(unaff_RBP + -0x11) = lVar4 + 0x20;
  *(longlong *)(unaff_RBP + -1) = unaff_RBX + 0x1c;
  *(int **)(unaff_RBP + 0x2f) = (int *)(unaff_RBX + 0x20);
  *(longlong *)(unaff_RBP + 7) = unaff_RBX + 0x18;
  *(longlong *)(unaff_RBP + 0xf) = unaff_RBX + 0x10;
  *(longlong *)(unaff_RBP + 0x17) = unaff_RBX + 8;
  *(longlong *)(unaff_RBP + 0x1f) = unaff_RBX + 0x14;
  *(longlong *)(unaff_RBP + -0x39) = lVar4 + 0x3c;
  *(longlong *)(unaff_RBP + -0x31) = lVar4 + 0x38;
  *(longlong *)(unaff_RBP + -0x29) = lVar4 + 0x30;
  *(longlong *)(unaff_RBP + -0x21) = lVar4 + 0x28;
  *(longlong *)(unaff_RBP + -0x19) = lVar4 + 0x34;
  iVar2 = *(int *)(lVar4 + 0x40);
  *(longlong *)(unaff_RBP + -9) = lVar4 + 0x40;
  iVar1 = *(int *)(unaff_RBX + 0x20);
  if ((iVar1 <= iVar2) &&
     ((iVar1 < iVar2 ||
      (cVar3 = func_0x0001801eb6f0(unaff_RBP + -0x39,unaff_RBP + -1), cVar3 == '\0')))) {
    *unaff_RSI = 0;
    return lVar4;
  }
LAB_1803d9ae7:
  *unaff_RSI = 1;
  return in_R11;
}






