#include "TaleWorlds.Native.Split.h"

// 99_part_08_part028.c - 19 个函数

// 函数: void FUN_1804fb4f0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804fb4f0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 unaff_R14;
  
  pcVar1 = (char *)(param_1 + 0x424);
  if (*pcVar1 != '\0') {
    if (*(int *)(param_1 + 0x420) + 1 < 0x101) {
      *(undefined4 *)(param_1 + (longlong)*(int *)(param_1 + 0x420) * 4) = *param_2;
      *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
      return;
    }
    plVar4 = (longlong *)(param_1 + 0x400);
    FUN_18014e8b0(plVar4,0x200);
    lVar2 = param_1;
    if (*pcVar1 == '\0') {
      lVar2 = *plVar4;
    }
    lVar6 = param_1;
    if (*pcVar1 == '\0') {
      lVar6 = *plVar4;
    }
    FUN_180455b60(plVar4,lVar6,lVar2 + 0x400);
    *pcVar1 = '\0';
  }
  plVar4 = (longlong *)(param_1 + 0x400);
  puVar7 = *(undefined4 **)(param_1 + 0x408);
  if (puVar7 < *(undefined4 **)(param_1 + 0x410)) {
    *(undefined4 **)(param_1 + 0x408) = puVar7 + 1;
    *puVar7 = *param_2;
    return;
  }
  puVar5 = (undefined4 *)*plVar4;
  lVar2 = (longlong)puVar7 - (longlong)puVar5 >> 2;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
      goto LAB_18005726e;
    }
  }
  puVar3 = (undefined4 *)
           FUN_18062b420(_DAT_180c8ed18,lVar2 * 4,*(undefined1 *)(param_1 + 0x418),param_4,unaff_R14
                        );
  puVar5 = (undefined4 *)*plVar4;
  puVar7 = *(undefined4 **)(param_1 + 0x408);
LAB_18005726e:
  if (puVar5 != puVar7) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar5,(longlong)puVar7 - (longlong)puVar5);
  }
  *puVar3 = *param_2;
  if (*plVar4 == 0) {
    *plVar4 = (longlong)puVar3;
    *(undefined4 **)(param_1 + 0x408) = puVar3 + 1;
    *(undefined4 **)(param_1 + 0x410) = puVar3 + lVar2;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804fb528(void)
void FUN_1804fb528(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong unaff_RBX;
  longlong lVar5;
  undefined4 *unaff_RSI;
  undefined4 *puVar6;
  undefined8 in_R9;
  char *unaff_R14;
  undefined8 in_stack_00000020;
  
  plVar1 = (longlong *)(unaff_RBX + 0x400);
  FUN_18014e8b0(plVar1,0x200);
  lVar2 = unaff_RBX;
  if (*unaff_R14 == '\0') {
    lVar2 = *plVar1;
  }
  lVar5 = unaff_RBX;
  if (*unaff_R14 == '\0') {
    lVar5 = *plVar1;
  }
  FUN_180455b60(plVar1,lVar5,lVar2 + 0x400);
  *unaff_R14 = '\0';
  puVar6 = *(undefined4 **)(unaff_RBX + 0x408);
  if (puVar6 < *(undefined4 **)(unaff_RBX + 0x410)) {
    *(undefined4 **)(unaff_RBX + 0x408) = puVar6 + 1;
    *puVar6 = *unaff_RSI;
    return;
  }
  puVar4 = (undefined4 *)*plVar1;
  lVar2 = (longlong)puVar6 - (longlong)puVar4 >> 2;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
      goto LAB_18005726e;
    }
  }
  puVar3 = (undefined4 *)
           FUN_18062b420(_DAT_180c8ed18,lVar2 * 4,*(undefined1 *)(unaff_RBX + 0x418),in_R9,
                         in_stack_00000020);
  puVar4 = (undefined4 *)*plVar1;
  puVar6 = *(undefined4 **)(unaff_RBX + 0x408);
LAB_18005726e:
  if (puVar4 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(puVar3,puVar4,(longlong)puVar6 - (longlong)puVar4);
  }
  *puVar3 = *unaff_RSI;
  if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *plVar1 = (longlong)puVar3;
  *(undefined4 **)(unaff_RBX + 0x408) = puVar3 + 1;
  *(undefined4 **)(unaff_RBX + 0x410) = puVar3 + lVar2;
  return;
}






// 函数: void FUN_1804fb58c(longlong param_1,undefined4 *param_2)
void FUN_1804fb58c(longlong param_1,undefined4 *param_2)

{
  longlong unaff_RBX;
  
  *(undefined4 *)(unaff_RBX + param_1 * 4) = *param_2;
  *(int *)(unaff_RBX + 0x420) = *(int *)(unaff_RBX + 0x420) + 1;
  return;
}






// 函数: void FUN_1804fb5d0(longlong param_1)
void FUN_1804fb5d0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x424) == '\0') {
    *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 0x400);
    *(undefined1 *)(param_1 + 0x424) = 1;
  }
  *(undefined4 *)(param_1 + 0x420) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x400);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804fb650(longlong param_1)
void FUN_1804fb650(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804fb680(undefined4 *param_1)
void FUN_1804fb680(undefined4 *param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  FUN_180080ca0(param_1 + 2,0);
  puVar5 = (uint *)0x0;
  if (0 < (int)param_1[1]) {
    do {
      uVar4 = (uint)puVar5;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 10) + ((ulonglong)puVar5 >> 4) * 8) + 8 +
       (ulonglong)(uVar4 & 0xf) * 0x40) = 0;
      puVar5 = *(uint **)(param_1 + 4);
      if (puVar5 < *(uint **)(param_1 + 6)) {
        *(uint **)(param_1 + 4) = puVar5 + 1;
        *puVar5 = uVar4;
      }
      else {
        puVar3 = *(uint **)(param_1 + 2);
        lVar1 = (longlong)puVar5 - (longlong)puVar3 >> 2;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_1804fb71b:
          puVar2 = (uint *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(param_1 + 8));
          puVar3 = *(uint **)(param_1 + 2);
          puVar5 = *(uint **)(param_1 + 4);
        }
        else {
          lVar1 = lVar1 * 2;
          puVar2 = (uint *)0x0;
          if (lVar1 != 0) goto LAB_1804fb71b;
        }
        if (puVar3 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar2,puVar3,(longlong)puVar5 - (longlong)puVar3);
        }
        *puVar2 = uVar4;
        if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint **)(param_1 + 2) = puVar2;
        *(uint **)(param_1 + 6) = puVar2 + lVar1;
        *(uint **)(param_1 + 4) = puVar2 + 1;
      }
      puVar5 = (uint *)(ulonglong)(uVar4 + 1);
    } while ((int)(uVar4 + 1) < (int)param_1[1]);
  }
  *param_1 = 0;
  param_1[0x12] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804fb6ac(void)
void FUN_1804fb6ac(void)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint unaff_ESI;
  uint *puVar4;
  undefined4 uVar5;
  uint *unaff_R12;
  undefined4 *unaff_R15;
  
  do {
    uVar5 = SUB84(unaff_R12,0);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(unaff_R15 + 10) + (ulonglong)(unaff_ESI >> 4) * 8) + 8 +
     (ulonglong)(unaff_ESI & 0xf) * 0x40) = uVar5;
    puVar4 = *(uint **)(unaff_R15 + 4);
    if (puVar4 < *(uint **)(unaff_R15 + 6)) {
      *(uint **)(unaff_R15 + 4) = puVar4 + 1;
      *puVar4 = unaff_ESI;
    }
    else {
      puVar3 = *(uint **)(unaff_R15 + 2);
      lVar1 = (longlong)puVar4 - (longlong)puVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804fb71b:
        puVar2 = (uint *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_R15 + 8));
        puVar3 = *(uint **)(unaff_R15 + 2);
        puVar4 = *(uint **)(unaff_R15 + 4);
      }
      else {
        lVar1 = lVar1 * 2;
        puVar2 = unaff_R12;
        if (lVar1 != 0) goto LAB_1804fb71b;
      }
      if (puVar3 != puVar4) {
                    // WARNING: Subroutine does not return
        memmove(puVar2,puVar3,(longlong)puVar4 - (longlong)puVar3);
      }
      *puVar2 = unaff_ESI;
      if (*(longlong *)(unaff_R15 + 2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint **)(unaff_R15 + 2) = puVar2;
      *(uint **)(unaff_R15 + 6) = puVar2 + lVar1;
      *(uint **)(unaff_R15 + 4) = puVar2 + 1;
    }
    unaff_ESI = unaff_ESI + 1;
    if ((int)unaff_R15[1] <= (int)unaff_ESI) {
      *unaff_R15 = uVar5;
      unaff_R15[0x12] = uVar5;
      return;
    }
  } while( true );
}






// 函数: void FUN_1804fb79e(void)
void FUN_1804fb79e(void)

{
  undefined4 unaff_R12D;
  undefined4 *unaff_R15;
  
  *unaff_R15 = unaff_R12D;
  unaff_R15[0x12] = unaff_R12D;
  return;
}



uint FUN_1804fb7c0(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 2 == 0) {
    FUN_1804fd200();
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 4) + -4);
  *(uint **)(param_1 + 4) = (uint *)(*(longlong *)(param_1 + 4) + -4);
  lVar1 = (ulonglong)(uVar2 >> 4) * 8;
  lVar4 = (ulonglong)(uVar2 & 0xf) * 0x40;
  *(undefined4 *)(lVar4 + 8 + *(longlong *)(lVar1 + *(longlong *)(param_1 + 10))) = 1;
  param_1[0x12] = param_1[0x12] + 1;
  if (*param_1 <= (int)uVar2) {
    *param_1 = uVar2 + 1;
  }
  puVar5 = (undefined8 *)(lVar4 + *(longlong *)(lVar1 + *(longlong *)(param_1 + 10)));
  if ((undefined *)*puVar5 == &UNK_180a308a0) {
    puVar5[2] = 0;
    plVar3 = (longlong *)puVar5[3];
    puVar5[3] = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
      return uVar2;
    }
    return uVar2;
  }
  (**(code **)((undefined *)*puVar5 + 8))(puVar5);
  return uVar2;
}






// 函数: void FUN_1804fb8a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1804fb8a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar4 = (int)(*(longlong *)(param_1 + 0x30) - *plVar1 >> 3);
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(*plVar1 + lVar7 * 8);
      if (lVar2 != 0) {
        uVar3 = *(ulonglong *)(lVar2 + -0x10);
        uVar5 = uVar3 >> 0x20;
        uVar6 = 0;
        if ((int)(uVar3 >> 0x20) != 0) {
          do {
            (*(code *)**(undefined8 **)(uVar6 + lVar2))
                      ((undefined8 *)(uVar6 + lVar2),0,param_3,param_4,uVar8);
            uVar6 = (ulonglong)(uint)((int)uVar6 + (int)uVar3);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2 + -0x10);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  if (*plVar1 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804fb980(undefined4 *param_1)
void FUN_1804fb980(undefined4 *param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  FUN_180080ca0(param_1 + 2,0);
  puVar5 = (uint *)0x0;
  if (0 < (int)param_1[1]) {
    do {
      uVar4 = (uint)puVar5;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 10) + ((ulonglong)puVar5 >> 4) * 8) + 8 +
       (ulonglong)(uVar4 & 0xf) * 0xbe0) = 0;
      puVar5 = *(uint **)(param_1 + 4);
      if (puVar5 < *(uint **)(param_1 + 6)) {
        *(uint **)(param_1 + 4) = puVar5 + 1;
        *puVar5 = uVar4;
      }
      else {
        puVar3 = *(uint **)(param_1 + 2);
        lVar1 = (longlong)puVar5 - (longlong)puVar3 >> 2;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_1804fba1e:
          puVar2 = (uint *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(param_1 + 8));
          puVar3 = *(uint **)(param_1 + 2);
          puVar5 = *(uint **)(param_1 + 4);
        }
        else {
          lVar1 = lVar1 * 2;
          puVar2 = (uint *)0x0;
          if (lVar1 != 0) goto LAB_1804fba1e;
        }
        if (puVar3 != puVar5) {
                    // WARNING: Subroutine does not return
          memmove(puVar2,puVar3,(longlong)puVar5 - (longlong)puVar3);
        }
        *puVar2 = uVar4;
        if (*(longlong *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint **)(param_1 + 2) = puVar2;
        *(uint **)(param_1 + 6) = puVar2 + lVar1;
        *(uint **)(param_1 + 4) = puVar2 + 1;
      }
      puVar5 = (uint *)(ulonglong)(uVar4 + 1);
    } while ((int)(uVar4 + 1) < (int)param_1[1]);
  }
  *param_1 = 0;
  param_1[0x12] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804fb9ac(void)
void FUN_1804fb9ac(void)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  uint unaff_ESI;
  uint *puVar4;
  undefined4 uVar5;
  uint *unaff_R12;
  undefined4 *unaff_R15;
  
  do {
    uVar5 = SUB84(unaff_R12,0);
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(unaff_R15 + 10) + (ulonglong)(unaff_ESI >> 4) * 8) + 8 +
     (ulonglong)(unaff_ESI & 0xf) * 0xbe0) = uVar5;
    puVar4 = *(uint **)(unaff_R15 + 4);
    if (puVar4 < *(uint **)(unaff_R15 + 6)) {
      *(uint **)(unaff_R15 + 4) = puVar4 + 1;
      *puVar4 = unaff_ESI;
    }
    else {
      puVar3 = *(uint **)(unaff_R15 + 2);
      lVar1 = (longlong)puVar4 - (longlong)puVar3 >> 2;
      if (lVar1 == 0) {
        lVar1 = 1;
LAB_1804fba1e:
        puVar2 = (uint *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 4,*(undefined1 *)(unaff_R15 + 8));
        puVar3 = *(uint **)(unaff_R15 + 2);
        puVar4 = *(uint **)(unaff_R15 + 4);
      }
      else {
        lVar1 = lVar1 * 2;
        puVar2 = unaff_R12;
        if (lVar1 != 0) goto LAB_1804fba1e;
      }
      if (puVar3 != puVar4) {
                    // WARNING: Subroutine does not return
        memmove(puVar2,puVar3,(longlong)puVar4 - (longlong)puVar3);
      }
      *puVar2 = unaff_ESI;
      if (*(longlong *)(unaff_R15 + 2) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint **)(unaff_R15 + 2) = puVar2;
      *(uint **)(unaff_R15 + 6) = puVar2 + lVar1;
      *(uint **)(unaff_R15 + 4) = puVar2 + 1;
    }
    unaff_ESI = unaff_ESI + 1;
    if ((int)unaff_R15[1] <= (int)unaff_ESI) {
      *unaff_R15 = uVar5;
      unaff_R15[0x12] = uVar5;
      return;
    }
  } while( true );
}






// 函数: void FUN_1804fbaa1(void)
void FUN_1804fbaa1(void)

{
  undefined4 unaff_R12D;
  undefined4 *unaff_R15;
  
  *unaff_R15 = unaff_R12D;
  unaff_R15[0x12] = unaff_R12D;
  return;
}






// 函数: void FUN_1804fbac0(longlong param_1)
void FUN_1804fbac0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  plVar3 = (longlong *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = (longlong)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(undefined8 *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x7f);
  return;
}






// 函数: void FUN_1804fbb20(longlong param_1)
void FUN_1804fbb20(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x3fe4) == '\0') {
    *(undefined8 *)(param_1 + 0x3fc8) = *(undefined8 *)(param_1 + 0x3fc0);
    *(undefined1 *)(param_1 + 0x3fe4) = 1;
  }
  *(undefined4 *)(param_1 + 0x3fe0) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x3fc0);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804fbb80(longlong param_1)
void FUN_1804fbb80(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined1 auStack_40 [24];
  
  plVar5 = (longlong *)(param_1 + 0x6d8);
  lVar4 = 0x7f8;
  do {
    if (-1 < (int)plVar5[-0xd9]) {
      pcVar1 = *(code **)((undefined *)plVar5[-0xdb] + 0x68);
      if ((undefined *)plVar5[-0xdb] == &UNK_180a30f40) {
        lVar2 = *plVar5;
        if (lVar2 != 0) {
          if (*(char *)(lVar2 + 0x8be) != '\0') {
            FUN_18053fcb0(lVar2,CONCAT71((int7)((ulonglong)pcVar1 >> 8),1));
            uStack_48 = *(undefined4 *)(lVar2 + 0x938);
            lStack_50 = lVar2;
            FUN_1804dd4d0(*(longlong *)(lVar2 + 0x930) + 0x2b58,auStack_40,&lStack_50);
          }
          plVar3 = (longlong *)*plVar5;
          *plVar5 = 0;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        plVar3 = (longlong *)plVar5[-0x11];
        plVar5[-0x11] = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        plVar5[0xc] = 0;
        *(undefined1 *)((longlong)plVar5 + 0x2ac) = 0;
      }
      else {
        (*pcVar1)();
      }
      *(undefined4 *)(plVar5 + -0xd9) = 0xffffffff;
    }
    plVar5 = plVar5 + 0x14c;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar6 = (undefined2 *)(param_1 + 0x52ad00);
  for (lVar4 = 0x7f8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = 0xffff;
    puVar6 = puVar6 + 1;
  }
  *(undefined8 *)(param_1 + 0x52bcf0) = 0;
  return;
}



ulonglong FUN_1804fbcd0(longlong param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  short sVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  short *psVar18;
  longlong lVar19;
  
  uVar10 = 0;
  iVar16 = 0;
  uVar12 = uVar10;
  while( true ) {
    iVar11 = (int)uVar12;
    lVar14 = (longlong)iVar11;
    if (*(int *)(lVar14 * 0xa60 + 0x10 + param_1) < 0) break;
    uVar12 = (ulonglong)(iVar11 + 1U);
    if (0x7f7 < (int)(iVar11 + 1U)) {
      return 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x52bcf0) = *(int *)(param_1 + 0x52bcf0) + 1;
  bVar4 = false;
  lVar19 = lVar14 * 0xa60;
  *(int *)(lVar19 + 0x10 + param_1) = iVar11;
  iVar2 = *(int *)(param_1 + 0x52bcf4);
  uVar17 = uVar10;
  if (0 < iVar2) {
    psVar18 = (short *)(param_1 + 0x52ad00);
    uVar7 = uVar10;
    uVar13 = uVar10;
    uVar15 = uVar10;
    do {
      if ((((longlong)uVar15 < 0) || (iVar2 <= (int)uVar7)) || (*psVar18 < 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      uVar5 = (ulonglong)((int)uVar13 + 1);
      if (!bVar3) {
        uVar5 = uVar13;
      }
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar15 = uVar15 + 1;
      psVar18 = psVar18 + 1;
      iVar16 = (int)uVar5;
      uVar13 = uVar5;
    } while ((int)uVar8 < iVar2);
  }
  do {
    iVar9 = (int)uVar10;
    if (((iVar9 < 0) || (iVar2 <= iVar9)) ||
       (*(short *)(param_1 + 0x52ad00 + (longlong)iVar9 * 2) < 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar7 = (ulonglong)((int)uVar17 + 1);
    if (!bVar3) {
      uVar7 = uVar17;
    }
    if ((0 < iVar2) && (iVar16 <= (int)uVar7)) {
      iVar16 = iVar11;
      if (iVar11 <= iVar9) {
        iVar16 = iVar9;
        iVar9 = iVar11;
      }
      *(short *)(param_1 + 0x52ad00 + (longlong)iVar9 * 2) = (short)iVar16;
      *(undefined2 *)(param_1 + 0x52ad00 + (longlong)iVar16 * 2) = 0x7f9;
      goto LAB_1804fbe06;
    }
    if (bVar4) {
      if (bVar3) {
        *(short *)(param_1 + 0x52ad00 + (longlong)iVar11 * 2) = (short)uVar10;
        goto LAB_1804fbe06;
      }
    }
    else if (iVar9 == iVar11) {
      bVar4 = true;
    }
    else if (iVar9 < iVar11) {
      sVar1 = *(short *)(param_1 + 0x52ad00 + (longlong)iVar9 * 2);
      if (iVar11 <= sVar1) {
        *(short *)(param_1 + 0x52ad00 + (longlong)iVar9 * 2) = (short)uVar12;
        sVar6 = sVar1 + 1;
        if (sVar1 != iVar2) {
          sVar6 = sVar1;
        }
        *(short *)(param_1 + 0x52ad00 + (longlong)iVar11 * 2) = sVar6;
        goto LAB_1804fbe06;
      }
    }
    uVar10 = (ulonglong)(iVar9 + 1U);
    uVar17 = uVar7;
  } while ((int)(iVar9 + 1U) < 0x7f8);
  *(undefined2 *)(param_1 + 0x52ad00 + lVar14 * 2) = 0x7f9;
LAB_1804fbe06:
  (**(code **)(*(longlong *)(lVar19 + param_1) + 0x60))(lVar19 + param_1);
  iVar16 = iVar11 + 1;
  if (iVar11 + 1 < *(int *)(param_1 + 0x52bcf4)) {
    iVar16 = *(int *)(param_1 + 0x52bcf4);
  }
  *(int *)(param_1 + 0x52bcf4) = iVar16;
  return uVar12;
}



int FUN_1804fbd12(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar10;
  int iVar11;
  short *psVar12;
  longlong lVar13;
  
  iVar11 = (int)param_4;
  bVar3 = false;
  lVar13 = unaff_RSI * 0xa60;
  *(int *)(lVar13 + 0x10 + param_1) = unaff_EBX;
  iVar7 = *(int *)(param_1 + 0x52bcf4);
  if (0 < iVar7) {
    psVar12 = (short *)(param_1 + 0x52ad00);
    uVar9 = param_4 & 0xffffffff;
    uVar10 = param_4;
    do {
      if ((((longlong)uVar10 < 0) || (iVar7 <= param_2)) || (*psVar12 < (short)param_4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar4 = (ulonglong)((int)uVar9 + 1);
      if (!bVar2) {
        uVar4 = uVar9;
      }
      param_2 = param_2 + 1;
      uVar10 = uVar10 + 1;
      psVar12 = psVar12 + 1;
      iVar11 = (int)uVar4;
      uVar9 = uVar4;
    } while (param_2 < iVar7);
  }
  uVar9 = param_4 & 0xffffffff;
  do {
    iVar8 = (int)uVar9;
    if (((iVar8 < 0) || (iVar7 <= iVar8)) ||
       (*(short *)(unaff_RDI + 0x52ad00 + (longlong)iVar8 * 2) < 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar6 = (uint)param_4 + 1;
    if (!bVar2) {
      uVar6 = (uint)param_4;
    }
    if ((0 < iVar7) && (iVar11 <= (int)uVar6)) {
      iVar7 = unaff_EBX;
      if (unaff_EBX <= iVar8) {
        iVar7 = iVar8;
        iVar8 = unaff_EBX;
      }
      *(short *)(unaff_RDI + 0x52ad00 + (longlong)iVar8 * 2) = (short)iVar7;
      *(undefined2 *)(unaff_RDI + 0x52ad00 + (longlong)iVar7 * 2) = 0x7f9;
      goto LAB_1804fbe06;
    }
    if (bVar3) {
      if (bVar2) {
        *(short *)(unaff_RDI + 0x52ad00 + (longlong)unaff_EBX * 2) = (short)uVar9;
        goto LAB_1804fbe06;
      }
    }
    else if (iVar8 == unaff_EBX) {
      bVar3 = true;
    }
    else if (iVar8 < unaff_EBX) {
      sVar1 = *(short *)(unaff_RDI + 0x52ad00 + (longlong)iVar8 * 2);
      if (unaff_EBX <= sVar1) {
        *(short *)(unaff_RDI + 0x52ad00 + (longlong)iVar8 * 2) = (short)unaff_EBX;
        sVar5 = sVar1 + 1;
        if (sVar1 != iVar7) {
          sVar5 = sVar1;
        }
        *(short *)(unaff_RDI + 0x52ad00 + (longlong)unaff_EBX * 2) = sVar5;
        goto LAB_1804fbe06;
      }
    }
    uVar9 = (ulonglong)(iVar8 + 1U);
    param_4 = (ulonglong)uVar6;
  } while ((int)(iVar8 + 1U) < 0x7f8);
  *(undefined2 *)(unaff_RDI + 0x52ad00 + unaff_RSI * 2) = 0x7f9;
LAB_1804fbe06:
  (**(code **)(*(longlong *)(lVar13 + unaff_RDI) + 0x60))(lVar13 + unaff_RDI);
  iVar7 = unaff_EBX + 1;
  if (unaff_EBX + 1 < *(int *)(unaff_RDI + 0x52bcf4)) {
    iVar7 = *(int *)(unaff_RDI + 0x52bcf4);
  }
  *(int *)(unaff_RDI + 0x52bcf4) = iVar7;
  return unaff_EBX;
}



int FUN_1804fbe3e(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  longlong unaff_RDI;
  longlong unaff_R15;
  
  iVar2 = param_2;
  iVar1 = unaff_EBX;
  if (unaff_EBX <= param_2) {
    iVar2 = unaff_EBX;
    iVar1 = param_2;
  }
  *(short *)(unaff_RDI + 0x52ad00 + (longlong)iVar2 * 2) = (short)iVar1;
  *(undefined2 *)(unaff_RDI + 0x52ad00 + (longlong)iVar1 * 2) = 0x7f9;
  (**(code **)(*(longlong *)(unaff_R15 + unaff_RDI) + 0x60))(unaff_R15 + unaff_RDI);
  iVar1 = unaff_EBX + 1;
  if (unaff_EBX + 1 < *(int *)(unaff_RDI + 0x52bcf4)) {
    iVar1 = *(int *)(unaff_RDI + 0x52bcf4);
  }
  *(int *)(unaff_RDI + 0x52bcf4) = iVar1;
  return unaff_EBX;
}






// 函数: void FUN_1804fbe90(undefined8 param_1)
void FUN_1804fbe90(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1804fbb80();
  FUN_1808fc8a8(param_1,0xa60,0x7f8,FUN_180523570,uVar1);
  return;
}






// 函数: void FUN_1804fbed0(longlong *param_1)
void FUN_1804fbed0(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar3[3] != (undefined8 *)0x0) {
      *(undefined8 *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x2041);
    lVar4 = *(longlong *)(lVar4 + 0x2038);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_1804fbed4(longlong *param_1)
void FUN_1804fbed4(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar3[3] != (undefined8 *)0x0) {
      *(undefined8 *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x2041);
    lVar4 = *(longlong *)(lVar4 + 0x2038);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_1804fbee9(void)
void FUN_1804fbee9(void)

{
  undefined8 *unaff_RBX;
  
  if ((undefined8 *)unaff_RBX[3] != (undefined8 *)0x0) {
    *(undefined8 *)unaff_RBX[3] = 0;
  }
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






