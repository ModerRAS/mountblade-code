#include "TaleWorlds.Native.Split.h"

// 99_part_10_part041.c - 14 个函数

// 函数: void FUN_1806c1cc5(undefined4 param_1)
void FUN_1806c1cc5(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  longlong in_RAX;
  ulonglong uVar3;
  undefined *puVar4;
  longlong *unaff_RBX;
  int *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong unaff_R14;
  char cVar6;
  char *unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined8 uStackX_20;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  char *in_stack_000000a8;
  
  do {
    param_1 = FUN_1806d7000(param_1,in_RAX);
    lVar5 = unaff_RDI[1];
    cVar6 = (char)unaff_R15;
    in_stack_000000a8 = unaff_R15;
    if ((char)unaff_RBX[9] != cVar6) {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar4 = &UNK_18094c9c0;
      }
      else {
        puVar4 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                        ((longlong *)unaff_RBX[5],puVar4,&stack0x000000a8);
      param_1 = extraout_XMM0_Da;
      if (((cVar2 != '\0') && (in_stack_000000a8 != (char *)0x0)) && (*in_stack_000000a8 != cVar6))
      {
        FUN_1806c4d50(in_stack_000000a8,&uStackX_20);
        in_stack_00000040 = uStackX_20;
        in_stack_00000048 = in_stack_00000028;
        in_stack_00000050 = in_stack_00000030;
        in_stack_00000058 = in_stack_00000038;
        param_1 = (**(code **)(unaff_R14 + 0x10))(unaff_RBX[6],(int)lVar5,&stack0x00000040);
      }
    }
    lVar5 = *unaff_RBX;
    if (*(int *)(lVar5 + 0x10) != 0) {
      uVar3 = (ulonglong)(*(int *)(lVar5 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar5 + 8) + 8 + uVar3 * 0x18) != cVar6) &&
         (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + uVar3 * 0x18) != cVar6)) {
        param_1 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
        lVar5 = *unaff_RBX;
      }
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
      lVar5 = *unaff_RBX;
    }
    *(undefined1 *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      cVar2 = (char)unaff_RBX[9];
      if (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18
                   ) == cVar6) {
        cVar2 = cVar6;
      }
      *(char *)(unaff_RBX + 9) = cVar2;
    }
    *unaff_RSI = *unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 2;
    in_RAX = *unaff_RDI;
  } while (in_RAX != 0);
  lVar5 = *unaff_RBX;
  if (*(int *)(lVar5 + 0x10) != 0) {
    uVar3 = (ulonglong)(*(int *)(lVar5 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar5 + 8) + 8 + uVar3 * 0x18) != cVar6) &&
       (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + uVar3 * 0x18) != cVar6)) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar5 = *unaff_RBX;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    lVar5 = *unaff_RBX;
  }
  *(undefined1 *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar5 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18)
        == cVar6) {
      cVar2 = cVar6;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c1df8(void)
void FUN_1806c1df8(void)

{
  ulonglong uVar1;
  char cVar2;
  longlong *unaff_RBX;
  longlong lVar3;
  char unaff_R15B;
  
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar3 + 8) + 8 + uVar1 * 0x18) != unaff_R15B) &&
       (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != unaff_R15B)) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar3 = *unaff_RBX;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *unaff_RBX;
  }
  *(undefined1 *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c1e12(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1806c1e12(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int in_EAX;
  char cVar2;
  longlong *unaff_RBX;
  char unaff_R15B;
  
  if ((*(char *)(*(longlong *)(param_3 + 8) + 8 + (ulonglong)(in_EAX - 1) * 0x18) != unaff_R15B) &&
     (*(char *)(*(longlong *)(param_3 + 8) + 0x10 + (ulonglong)(in_EAX - 1) * 0x18) != unaff_R15B))
  {
    (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
    param_3 = *unaff_RBX;
  }
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  *(undefined1 *)(unaff_RBX + 9) = 1;
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(longlong *)(*unaff_RBX + 8) + 0x10 + (ulonglong)(iVar1 - 1) * 0x18) ==
        unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c1e70(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)
void FUN_1806c1e70(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  int *piVar6;
  longlong lVar7;
  int aiStackX_8 [2];
  char *pcStackX_20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  FUN_1806d7080(param_1,*param_3);
  aiStackX_8[0] = 0x15c;
  piVar6 = aiStackX_8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar6 = (int *)param_1[0xb];
  }
  lVar7 = *param_4;
  while (lVar7 != 0) {
    FUN_1806d7080(param_1,lVar7);
    lVar7 = param_4[1];
    pcStackX_20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      iVar1 = *(int *)(*param_1 + 0x10);
      if (iVar1 == 0) {
        puVar5 = &UNK_18094c9c0;
      }
      else {
        puVar5 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                        ((longlong *)param_1[5],puVar5,&pcStackX_20);
      if (((cVar2 != '\0') && (pcStackX_20 != (char *)0x0)) && (*pcStackX_20 != '\0')) {
        FUN_1806c4d50(pcStackX_20,&uStack_68);
        uStack_48 = uStack_68;
        uStack_40 = uStack_60;
        uStack_38 = uStack_58;
        uStack_30 = uStack_50;
        uStack_34 = uStack_54;
        (*(code *)param_3[2])(param_1[6],(int)lVar7,&uStack_48);
      }
    }
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar3 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
         (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
        (**(code **)(*(longlong *)param_1[5] + 0x48))();
        lVar7 = *param_1;
      }
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      lVar7 = *param_1;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar4 = (char)param_1[9];
      if (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar4 = 0;
      }
      *(undefined1 *)(param_1 + 9) = uVar4;
    }
    *piVar6 = *piVar6 + 1;
    param_4 = param_4 + 2;
    lVar7 = *param_4;
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *param_1;
  }
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (undefined1)param_1[9];
    if (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 9) = uVar4;
  }
  return;
}






// 函数: void FUN_1806c1e7e(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
void FUN_1806c1e7e(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  longlong *unaff_RBX;
  int *piVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined8 uStackX_20;
  int in_stack_00000090;
  char *in_stack_000000a8;
  
  uVar8 = FUN_1806d7080();
  in_stack_00000090 = 0x15c;
  piVar6 = &stack0x00000090;
  if ((int *)unaff_RBX[0xb] != (int *)0x0) {
    piVar6 = (int *)unaff_RBX[0xb];
  }
  lVar7 = *param_4;
  while (lVar7 != 0) {
    uVar8 = FUN_1806d7080(uVar8,lVar7);
    lVar7 = param_4[1];
    in_stack_000000a8 = (char *)0x0;
    if ((char)unaff_RBX[9] != '\0') {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar5 = &UNK_18094c9c0;
      }
      else {
        puVar5 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                        ((longlong *)unaff_RBX[5],puVar5,&stack0x000000a8);
      uVar8 = extraout_XMM0_Da;
      if (((cVar2 != '\0') && (in_stack_000000a8 != (char *)0x0)) && (*in_stack_000000a8 != '\0')) {
        FUN_1806c4d50(in_stack_000000a8,&uStackX_20);
        param_8 = uStackX_20;
        param_9 = param_5;
        param_10 = param_6;
        param_11 = param_7;
        uVar8 = (**(code **)(param_3 + 0x10))(unaff_RBX[6],(int)lVar7,&param_8);
      }
    }
    lVar7 = *unaff_RBX;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar3 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
         (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
        uVar8 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
        lVar7 = *unaff_RBX;
      }
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      lVar7 = *unaff_RBX;
    }
    *(undefined1 *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar4 = (char)unaff_RBX[9];
      if (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar4 = 0;
      }
      *(undefined1 *)(unaff_RBX + 9) = uVar4;
    }
    *piVar6 = *piVar6 + 1;
    param_4 = param_4 + 2;
    lVar7 = *param_4;
  }
  lVar7 = *unaff_RBX;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar7 = *unaff_RBX;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *unaff_RBX;
  }
  *(undefined1 *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (undefined1)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(undefined1 *)(unaff_RBX + 9) = uVar4;
  }
  return;
}






// 函数: void FUN_1806c1ec5(undefined4 param_1)
void FUN_1806c1ec5(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  longlong in_RAX;
  ulonglong uVar3;
  undefined *puVar4;
  longlong *unaff_RBX;
  int *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong unaff_R14;
  char cVar6;
  char *unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined8 uStackX_20;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  char *in_stack_000000a8;
  
  do {
    param_1 = FUN_1806d7080(param_1,in_RAX);
    lVar5 = unaff_RDI[1];
    cVar6 = (char)unaff_R15;
    in_stack_000000a8 = unaff_R15;
    if ((char)unaff_RBX[9] != cVar6) {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar4 = &UNK_18094c9c0;
      }
      else {
        puVar4 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                        ((longlong *)unaff_RBX[5],puVar4,&stack0x000000a8);
      param_1 = extraout_XMM0_Da;
      if (((cVar2 != '\0') && (in_stack_000000a8 != (char *)0x0)) && (*in_stack_000000a8 != cVar6))
      {
        FUN_1806c4d50(in_stack_000000a8,&uStackX_20);
        in_stack_00000040 = uStackX_20;
        in_stack_00000048 = in_stack_00000028;
        in_stack_00000050 = in_stack_00000030;
        in_stack_00000058 = in_stack_00000038;
        param_1 = (**(code **)(unaff_R14 + 0x10))(unaff_RBX[6],(int)lVar5,&stack0x00000040);
      }
    }
    lVar5 = *unaff_RBX;
    if (*(int *)(lVar5 + 0x10) != 0) {
      uVar3 = (ulonglong)(*(int *)(lVar5 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar5 + 8) + 8 + uVar3 * 0x18) != cVar6) &&
         (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + uVar3 * 0x18) != cVar6)) {
        param_1 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
        lVar5 = *unaff_RBX;
      }
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
      lVar5 = *unaff_RBX;
    }
    *(undefined1 *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar5 + 0x10) != 0) {
      cVar2 = (char)unaff_RBX[9];
      if (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18
                   ) == cVar6) {
        cVar2 = cVar6;
      }
      *(char *)(unaff_RBX + 9) = cVar2;
    }
    *unaff_RSI = *unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 2;
    in_RAX = *unaff_RDI;
  } while (in_RAX != 0);
  lVar5 = *unaff_RBX;
  if (*(int *)(lVar5 + 0x10) != 0) {
    uVar3 = (ulonglong)(*(int *)(lVar5 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar5 + 8) + 8 + uVar3 * 0x18) != cVar6) &&
       (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + uVar3 * 0x18) != cVar6)) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar5 = *unaff_RBX;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    lVar5 = *unaff_RBX;
  }
  *(undefined1 *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar5 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x18)
        == cVar6) {
      cVar2 = cVar6;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c1ff8(void)
void FUN_1806c1ff8(void)

{
  ulonglong uVar1;
  char cVar2;
  longlong *unaff_RBX;
  longlong lVar3;
  char unaff_R15B;
  
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar3 + 8) + 8 + uVar1 * 0x18) != unaff_R15B) &&
       (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != unaff_R15B)) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar3 = *unaff_RBX;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *unaff_RBX;
  }
  *(undefined1 *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c2012(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1806c2012(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int in_EAX;
  char cVar2;
  longlong *unaff_RBX;
  char unaff_R15B;
  
  if ((*(char *)(*(longlong *)(param_3 + 8) + 8 + (ulonglong)(in_EAX - 1) * 0x18) != unaff_R15B) &&
     (*(char *)(*(longlong *)(param_3 + 8) + 0x10 + (ulonglong)(in_EAX - 1) * 0x18) != unaff_R15B))
  {
    (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
    param_3 = *unaff_RBX;
  }
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  *(undefined1 *)(unaff_RBX + 9) = 1;
  iVar1 = *(int *)(*unaff_RBX + 0x10);
  if (iVar1 != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(longlong *)(*unaff_RBX + 8) + 0x10 + (ulonglong)(iVar1 - 1) * 0x18) ==
        unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c2070(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)
void FUN_1806c2070(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  undefined *puVar5;
  int aiStackX_8 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_1806d7170(param_1,*param_3);
  aiStackX_8[0] = 0x15c;
  piVar4 = aiStackX_8;
  if ((int *)param_1[5] != (int *)0x0) {
    piVar4 = (int *)param_1[5];
  }
  lVar3 = *param_4;
  while (lVar3 != 0) {
    FUN_1806d7170(param_1,lVar3);
    puVar2 = (undefined4 *)(*(code *)param_3[3])(&uStack_38,param_1[2],(int)param_4[1]);
    uStack_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
    uStack_2c = puVar2[3];
    uStack_28 = puVar2[4];
    uStack_24 = puVar2[5];
    uStack_20 = puVar2[6];
    iVar1 = *(int *)(*param_1 + 0x10);
    if (iVar1 == 0) {
      puVar5 = &UNK_18094c9c0;
    }
    else {
      puVar5 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
    }
    FUN_1806d2e60(param_1[1],param_1[4],param_1[3],puVar5,&uStack_38);
    lVar3 = *param_1;
    if (*(int *)(lVar3 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
        lVar3 = *param_1;
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    }
    *piVar4 = *piVar4 + 1;
    param_4 = param_4 + 2;
    lVar3 = *param_4;
  }
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar3 = *param_1;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c207e(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
void FUN_1806c207e(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,int param_14)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong in_RAX;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *unaff_RBX;
  undefined8 unaff_RSI;
  int *piVar8;
  undefined8 unaff_RDI;
  undefined *puVar9;
  undefined8 unaff_R14;
  undefined4 uVar10;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Dc;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RSI;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RDI;
  *(undefined8 *)(in_RAX + 0x20) = unaff_R14;
  uVar10 = FUN_1806d7170();
  param_14 = 0x15c;
  piVar8 = &param_14;
  if ((int *)unaff_RBX[5] != (int *)0x0) {
    piVar8 = (int *)unaff_RBX[5];
  }
  lVar7 = *param_4;
  uVar4 = unaff_XMM6_Dc;
  uVar5 = unaff_XMM6_Da;
  uVar2 = param_10;
  uVar3 = param_11;
  while (param_10 = uVar5, param_11 = uVar4, lVar7 != 0) {
    FUN_1806d7170(uVar10,lVar7);
    puVar6 = (undefined4 *)(**(code **)(param_3 + 0x18))(&param_6,unaff_RBX[2],(int)param_4[1]);
    param_6._0_4_ = *puVar6;
    param_6._4_4_ = puVar6[1];
    param_7._0_4_ = puVar6[2];
    param_7._4_4_ = puVar6[3];
    param_8._0_4_ = puVar6[4];
    param_8._4_4_ = puVar6[5];
    param_9 = puVar6[6];
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar9 = &UNK_18094c9c0;
    }
    else {
      puVar9 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x10);
    }
    uVar10 = FUN_1806d2e60(unaff_RBX[1],unaff_RBX[4],unaff_RBX[3],puVar9,&param_6);
    lVar7 = *unaff_RBX;
    if (*(int *)(lVar7 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10)
          != '\0') {
        uVar10 = (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
        lVar7 = *unaff_RBX;
      }
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    }
    *piVar8 = *piVar8 + 1;
    param_4 = param_4 + 2;
    uVar4 = param_11;
    uVar5 = param_10;
    uVar2 = param_10;
    uVar3 = param_11;
    lVar7 = *param_4;
  }
  lVar7 = *unaff_RBX;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      param_10 = uVar2;
      param_11 = uVar3;
      (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
      lVar7 = *unaff_RBX;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c20b9(undefined4 param_1)
void FUN_1806c20b9(undefined4 param_1)

{
  int iVar1;
  longlong in_RAX;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  int *unaff_RSI;
  longlong *unaff_RDI;
  undefined *puVar4;
  longlong unaff_R14;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 in_stack_00000048;
  
  do {
    FUN_1806d7170(param_1,in_RAX);
    puVar2 = (undefined4 *)
             (**(code **)(unaff_R14 + 0x18))(&stack0x00000030,unaff_RBX[2],(int)unaff_RDI[1]);
    uStack0000000000000030 = *puVar2;
    uStack0000000000000034 = puVar2[1];
    uStack0000000000000038 = puVar2[2];
    uStack000000000000003c = puVar2[3];
    uStack0000000000000040 = puVar2[4];
    uStack0000000000000044 = puVar2[5];
    in_stack_00000048 = puVar2[6];
    iVar1 = *(int *)(*unaff_RBX + 0x10);
    if (iVar1 == 0) {
      puVar4 = &UNK_18094c9c0;
    }
    else {
      puVar4 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x10);
    }
    param_1 = FUN_1806d2e60(unaff_RBX[1],unaff_RBX[4],unaff_RBX[3],puVar4,&stack0x00000030);
    lVar3 = *unaff_RBX;
    if (*(int *)(lVar3 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10)
          != '\0') {
        param_1 = (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
        lVar3 = *unaff_RBX;
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    }
    *unaff_RSI = *unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 2;
    in_RAX = *unaff_RDI;
  } while (in_RAX != 0);
  lVar3 = *unaff_RBX;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
      lVar3 = *unaff_RBX;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c2183(void)
void FUN_1806c2183(void)

{
  longlong lVar1;
  longlong *unaff_RBX;
  
  lVar1 = *unaff_RBX;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
      lVar1 = *unaff_RBX;
    }
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c21a2(undefined8 param_1,longlong param_2)
void FUN_1806c21a2(undefined8 param_1,longlong param_2)

{
  int in_EAX;
  longlong *unaff_RBX;
  
  if (*(char *)(*(longlong *)(param_2 + 8) + 8 + (ulonglong)(in_EAX - 1) * 0x10) != '\0') {
    (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
    param_2 = *unaff_RBX;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  return;
}






// 函数: void FUN_1806c21d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)
void FUN_1806c21d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  int *piVar7;
  longlong lVar8;
  int aiStackX_8 [2];
  char *pcStackX_20;
  
  FUN_1806d7000(param_1,*param_3);
  aiStackX_8[0] = 0x16c;
  piVar7 = aiStackX_8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar7 = (int *)param_1[0xb];
  }
  lVar8 = *param_4;
  while (lVar8 != 0) {
    FUN_1806d7000(param_1,lVar8);
    lVar8 = param_4[1];
    pcStackX_20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      iVar1 = *(int *)(*param_1 + 0x10);
      if (iVar1 == 0) {
        puVar6 = &UNK_18094c9c0;
      }
      else {
        puVar6 = *(undefined **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                        ((longlong *)param_1[5],puVar6,&pcStackX_20);
      if (((cVar2 != '\0') && (pcStackX_20 != (char *)0x0)) && (*pcStackX_20 != '\0')) {
        uVar3 = FUN_1806d5410(pcStackX_20,&DAT_180be05d0);
        (*(code *)param_3[2])(param_1[6],(int)lVar8,uVar3);
      }
    }
    lVar8 = *param_1;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar4 = (ulonglong)(*(int *)(lVar8 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
         (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
        (**(code **)(*(longlong *)param_1[5] + 0x48))();
        lVar8 = *param_1;
      }
      *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
      lVar8 = *param_1;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar5 = (char)param_1[9];
      if (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(undefined1 *)(param_1 + 9) = uVar5;
    }
    *piVar7 = *piVar7 + 1;
    param_4 = param_4 + 2;
    lVar8 = *param_4;
  }
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar4 = (ulonglong)(*(int *)(lVar8 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
      lVar8 = *param_1;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
    lVar8 = *param_1;
  }
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar5 = (undefined1)param_1[9];
    if (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 9) = uVar5;
  }
  return;
}






