#include "TaleWorlds.Native.Split.h"

// 99_part_10_part042.c - 14 个函数

// 函数: void FUN_1806c21de(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)
void FUN_1806c21de(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  longlong *unaff_RBX;
  int *piVar7;
  longlong lVar8;
  int in_stack_00000050;
  char *in_stack_00000068;
  
  FUN_1806d7000();
  in_stack_00000050 = 0x16c;
  piVar7 = &stack0x00000050;
  if ((int *)unaff_RBX[0xb] != (int *)0x0) {
    piVar7 = (int *)unaff_RBX[0xb];
  }
  lVar8 = *param_4;
  while (lVar8 != 0) {
    FUN_1806d7000();
    lVar8 = param_4[1];
    in_stack_00000068 = (char *)0x0;
    if ((char)unaff_RBX[9] != '\0') {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar6 = &UNK_18094c9c0;
      }
      else {
        puVar6 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                        ((longlong *)unaff_RBX[5],puVar6,&stack0x00000068);
      if (((cVar2 != '\0') && (in_stack_00000068 != (char *)0x0)) && (*in_stack_00000068 != '\0')) {
        uVar3 = FUN_1806d5410(in_stack_00000068,&DAT_180be05d0);
        (**(code **)(param_3 + 0x10))(unaff_RBX[6],(int)lVar8,uVar3);
      }
    }
    lVar8 = *unaff_RBX;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar4 = (ulonglong)(*(int *)(lVar8 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
         (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
        (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
        lVar8 = *unaff_RBX;
      }
      *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
      lVar8 = *unaff_RBX;
    }
    *(undefined1 *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar8 + 0x10) != 0) {
      uVar5 = (char)unaff_RBX[9];
      if (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(undefined1 *)(unaff_RBX + 9) = uVar5;
    }
    *piVar7 = *piVar7 + 1;
    param_4 = param_4 + 2;
    lVar8 = *param_4;
  }
  lVar8 = *unaff_RBX;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar4 = (ulonglong)(*(int *)(lVar8 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar8 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar8 = *unaff_RBX;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
    lVar8 = *unaff_RBX;
  }
  *(undefined1 *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar8 + 0x10) != 0) {
    uVar5 = (undefined1)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar8 + 8) + 0x10 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(undefined1 *)(unaff_RBX + 9) = uVar5;
  }
  return;
}






// 函数: void FUN_1806c221f(void)
void FUN_1806c221f(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  longlong *unaff_RBX;
  int *unaff_RBP;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong unaff_R14;
  char cVar7;
  char *unaff_R15;
  char *in_stack_00000068;
  
  do {
    FUN_1806d7000();
    lVar6 = unaff_RDI[1];
    cVar7 = (char)unaff_R15;
    in_stack_00000068 = unaff_R15;
    if ((char)unaff_RBX[9] != cVar7) {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar5 = &UNK_18094c9c0;
      }
      else {
        puVar5 = *(undefined **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                        ((longlong *)unaff_RBX[5],puVar5,&stack0x00000068);
      if (((cVar2 != '\0') && (in_stack_00000068 != (char *)0x0)) && (*in_stack_00000068 != cVar7))
      {
        uVar3 = FUN_1806d5410(in_stack_00000068,&DAT_180be05d0);
        (**(code **)(unaff_R14 + 0x10))(unaff_RBX[6],(int)lVar6,uVar3);
      }
    }
    lVar6 = *unaff_RBX;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar4 = (ulonglong)(*(int *)(lVar6 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar6 + 8) + 8 + uVar4 * 0x18) != cVar7) &&
         (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != cVar7)) {
        (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
        lVar6 = *unaff_RBX;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
      lVar6 = *unaff_RBX;
    }
    *(undefined1 *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      cVar2 = (char)unaff_RBX[9];
      if (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x18
                   ) == cVar7) {
        cVar2 = cVar7;
      }
      *(char *)(unaff_RBX + 9) = cVar2;
    }
    *unaff_RBP = *unaff_RBP + 1;
    unaff_RDI = unaff_RDI + 2;
  } while (*unaff_RDI != 0);
  lVar6 = *unaff_RBX;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar4 = (ulonglong)(*(int *)(lVar6 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar6 + 8) + 8 + uVar4 * 0x18) != cVar7) &&
       (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != cVar7)) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar6 = *unaff_RBX;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    lVar6 = *unaff_RBX;
  }
  *(undefined1 *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    cVar2 = (char)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x18)
        == cVar7) {
      cVar2 = cVar7;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c230f(void)
void FUN_1806c230f(void)

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






// 函数: void FUN_1806c2329(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1806c2329(undefined8 param_1,undefined8 param_2,longlong param_3)

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






// 函数: void FUN_1806c2390(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
void FUN_1806c2390(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  
  FUN_1806d7000(param_1,*param_3);
  lVar6 = *param_4;
  while (lVar6 != 0) {
    FUN_1806d7000(param_1,lVar6);
    lVar6 = param_4[1];
    cVar2 = FUN_1806d56e0(param_1);
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)(*(code *)param_3[3])(auStack_48,param_1[6],(int)lVar6);
      uStack_68 = *puVar3;
      uStack_64 = puVar3[1];
      uStack_60 = puVar3[2];
      lStack_28 = param_1[4];
      uStack_5c = puVar3[3];
      uStack_38 = (undefined4)param_1[2];
      uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_30 = (undefined4)param_1[3];
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
      cVar2 = FUN_1806c3840(&uStack_38,*param_1,param_1[1],param_1[5],&uStack_68,param_1[7],
                            param_1[8],param_5);
      if (cVar2 == '\0') {
        *(undefined1 *)param_1[10] = 1;
      }
      uStack_58 = CONCAT44(uStack_64,uStack_68);
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      (*(code *)param_3[2])(param_1[6],(int)lVar6,&uStack_58);
    }
    lVar6 = *param_1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar4 = (ulonglong)(*(int *)(lVar6 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
         (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
        (**(code **)(*(longlong *)param_1[5] + 0x48))();
        lVar6 = *param_1;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
      lVar6 = *param_1;
    }
    *(undefined1 *)(param_1 + 9) = 1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar5 = (char)param_1[9];
      if (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(undefined1 *)(param_1 + 9) = uVar5;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar6 = *plVar1;
  }
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar4 = (ulonglong)(*(int *)(lVar6 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
      lVar6 = *param_1;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    lVar6 = *param_1;
  }
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar5 = (undefined1)param_1[9];
    if (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 9) = uVar5;
  }
  return;
}






// 函数: void FUN_1806c23a3(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)
void FUN_1806c23a3(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong in_RAX;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong *unaff_RBX;
  undefined8 unaff_RDI;
  longlong lVar6;
  undefined8 unaff_R14;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  longlong in_stack_00000080;
  
  *(undefined8 *)(in_RAX + 0x18) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x18) = unaff_R14;
  uVar7 = FUN_1806d7000();
  lVar6 = *param_4;
  while (lVar6 != 0) {
    FUN_1806d7000(uVar7,lVar6);
    lVar6 = param_4[1];
    cVar2 = FUN_1806d56e0();
    uVar7 = extraout_XMM0_Da;
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)(**(code **)(param_3 + 0x18))(&stack0x00000060,unaff_RBX[6],(int)lVar6)
      ;
      uStack0000000000000040 = *puVar3;
      uStack0000000000000044 = puVar3[1];
      uStack0000000000000048 = puVar3[2];
      in_stack_00000080 = unaff_RBX[4];
      uStack000000000000004c = puVar3[3];
      uStack0000000000000070 = (undefined4)unaff_RBX[2];
      uStack0000000000000074 = *(undefined4 *)((longlong)unaff_RBX + 0x14);
      uStack0000000000000078 = (undefined4)unaff_RBX[3];
      uStack000000000000007c = *(undefined4 *)((longlong)unaff_RBX + 0x1c);
      cVar2 = FUN_1806c3840(&stack0x00000070,*unaff_RBX,unaff_RBX[1],unaff_RBX[5],&stack0x00000040);
      if (cVar2 == '\0') {
        *(undefined1 *)unaff_RBX[10] = 1;
      }
      in_stack_00000050 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
      uStack0000000000000058 = uStack0000000000000048;
      uStack000000000000005c = uStack000000000000004c;
      uVar7 = (**(code **)(param_3 + 0x10))(unaff_RBX[6],(int)lVar6,&stack0x00000050);
    }
    lVar6 = *unaff_RBX;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar4 = (ulonglong)(*(int *)(lVar6 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
         (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
        uVar7 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
        lVar6 = *unaff_RBX;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
      lVar6 = *unaff_RBX;
    }
    *(undefined1 *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      uVar5 = (char)unaff_RBX[9];
      if (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar5 = 0;
      }
      *(undefined1 *)(unaff_RBX + 9) = uVar5;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar6 = *plVar1;
  }
  lVar6 = *unaff_RBX;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar4 = (ulonglong)(*(int *)(lVar6 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar6 + 8) + 8 + uVar4 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + uVar4 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar6 = *unaff_RBX;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    lVar6 = *unaff_RBX;
  }
  *(undefined1 *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar5 = (undefined1)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar6 + 8) + 0x10 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar5 = 0;
    }
    *(undefined1 *)(unaff_RBX + 9) = uVar5;
  }
  return;
}






// 函数: void FUN_1806c23c5(undefined4 param_1)
void FUN_1806c23c5(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong in_RAX;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  longlong lVar5;
  longlong unaff_R14;
  char unaff_R15B;
  undefined4 extraout_XMM0_Da;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  longlong in_stack_00000080;
  
  do {
    FUN_1806d7000(param_1,in_RAX);
    uVar1 = *(undefined4 *)(unaff_RDI + 8);
    cVar2 = FUN_1806d56e0();
    param_1 = extraout_XMM0_Da;
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)(**(code **)(unaff_R14 + 0x18))(&stack0x00000060,unaff_RBX[6],uVar1);
      uStack0000000000000040 = *puVar3;
      uStack0000000000000044 = puVar3[1];
      uStack0000000000000048 = puVar3[2];
      in_stack_00000080 = unaff_RBX[4];
      uStack000000000000004c = puVar3[3];
      uStack0000000000000070 = (undefined4)unaff_RBX[2];
      uStack0000000000000074 = *(undefined4 *)((longlong)unaff_RBX + 0x14);
      uStack0000000000000078 = (undefined4)unaff_RBX[3];
      uStack000000000000007c = *(undefined4 *)((longlong)unaff_RBX + 0x1c);
      cVar2 = FUN_1806c3840(&stack0x00000070,*unaff_RBX,unaff_RBX[1],unaff_RBX[5],&stack0x00000040);
      if (cVar2 == '\0') {
        *(undefined1 *)unaff_RBX[10] = 1;
      }
      in_stack_00000050 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
      uStack0000000000000058 = uStack0000000000000048;
      uStack000000000000005c = uStack000000000000004c;
      param_1 = (**(code **)(unaff_R14 + 0x10))(unaff_RBX[6],uVar1,&stack0x00000050);
    }
    lVar5 = *unaff_RBX;
    if (*(int *)(lVar5 + 0x10) != 0) {
      uVar4 = (ulonglong)(*(int *)(lVar5 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar5 + 8) + 8 + uVar4 * 0x18) != unaff_R15B) &&
         (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + uVar4 * 0x18) != unaff_R15B)) {
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
                   ) == unaff_R15B) {
        cVar2 = unaff_R15B;
      }
      *(char *)(unaff_RBX + 9) = cVar2;
    }
    in_RAX = *(longlong *)(unaff_RDI + 0x10);
    unaff_RDI = unaff_RDI + 0x10;
  } while (in_RAX != 0);
  lVar5 = *unaff_RBX;
  if (*(int *)(lVar5 + 0x10) != 0) {
    uVar4 = (ulonglong)(*(int *)(lVar5 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar5 + 8) + 8 + uVar4 * 0x18) != unaff_R15B) &&
       (*(char *)(*(longlong *)(lVar5 + 8) + 0x10 + uVar4 * 0x18) != unaff_R15B)) {
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
        == unaff_R15B) {
      cVar2 = unaff_R15B;
    }
    *(char *)(unaff_RBX + 9) = cVar2;
  }
  return;
}






// 函数: void FUN_1806c2543(void)
void FUN_1806c2543(void)

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






// 函数: void FUN_1806c255e(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1806c255e(undefined8 param_1,undefined8 param_2,longlong param_3)

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






// 函数: void FUN_1806c25c0(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)
void FUN_1806c25c0(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined4 *puStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [128];
  
  FUN_1806d7170(param_1,*param_3);
  lVar6 = *param_4;
  while (lVar6 != 0) {
    FUN_1806d7170(param_1,lVar6);
    puVar5 = (undefined4 *)(*(code *)param_3[3])(auStack_c0,param_1[2],(int)param_4[1]);
    lVar6 = *param_1;
    lVar2 = param_1[1];
    lVar3 = param_1[3];
    uStack_108 = *puVar5;
    lVar4 = param_1[4];
    uStack_104 = puVar5[1];
    uStack_100 = puVar5[2];
    uStack_fc = puVar5[3];
    func_0x0001806f45b0(auStack_a8);
    puStack_e8 = &uStack_108;
    uStack_d0 = 0;
    uStack_c8 = 0;
    lStack_f8 = lVar6;
    lStack_f0 = lVar2;
    lStack_e0 = lVar3;
    lStack_d8 = lVar4;
    FUN_1806ce230(auStack_a8,&lStack_f8,0);
    puStack_e8 = &uStack_108;
    uStack_d0 = 0;
    uStack_c8 = 0;
    lStack_f8 = lVar6;
    lStack_f0 = lVar2;
    lStack_e0 = lVar3;
    lStack_d8 = lVar4;
    FUN_1806cf480(auStack_a8,&lStack_f8,0);
    lVar6 = *param_1;
    if (*(int *)(lVar6 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
        lVar6 = *param_1;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar6 = *plVar1;
  }
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar6 = *param_1;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c25d7(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
void FUN_1806c25d7(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,undefined4 *param_8,
                  longlong param_9,longlong param_10,undefined8 param_11,undefined8 param_12)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong in_RAX;
  undefined4 *puVar5;
  longlong lVar6;
  longlong unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong *unaff_R15;
  undefined4 uVar7;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  
  *(undefined8 *)(in_RAX + -0x18) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x20) = unaff_R13;
  uVar7 = FUN_1806d7170();
  lVar6 = *param_4;
  while (lVar6 != 0) {
    FUN_1806d7170(uVar7,lVar6);
    puVar5 = (undefined4 *)
             (**(code **)(param_3 + 0x18))(&stack0x00000068,unaff_R15[2],(int)param_4[1]);
    lVar6 = *unaff_R15;
    lVar2 = unaff_R15[1];
    lVar3 = unaff_R15[3];
    uStackX_20 = *puVar5;
    lVar4 = unaff_R15[4];
    uStackX_24 = puVar5[1];
    func_0x0001806f45b0(unaff_RBP + -0x80);
    param_8 = &uStackX_20;
    param_11 = 0;
    param_12 = 0;
    param_6 = lVar6;
    param_7 = lVar2;
    param_9 = lVar3;
    param_10 = lVar4;
    FUN_1806ce230(unaff_RBP + -0x80,&param_6,0);
    param_8 = &uStackX_20;
    param_11 = 0;
    param_12 = 0;
    param_6 = lVar6;
    param_7 = lVar2;
    param_9 = lVar3;
    param_10 = lVar4;
    uVar7 = FUN_1806cf480(unaff_RBP + -0x80,&param_6,0);
    lVar6 = *unaff_R15;
    if (*(int *)(lVar6 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10)
          != '\0') {
        uVar7 = (**(code **)(*(longlong *)unaff_R15[1] + 0x20))();
        lVar6 = *unaff_R15;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    }
    plVar1 = param_4 + 2;
    param_4 = param_4 + 2;
    lVar6 = *plVar1;
  }
  lVar6 = *unaff_R15;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)unaff_R15[1] + 0x20))();
      lVar6 = *unaff_R15;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c25f7(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_1806c25f7(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,undefined1 *param_8,
                  longlong param_9,longlong param_10,undefined8 param_11,undefined8 param_12)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong in_RAX;
  undefined4 *puVar4;
  longlong lVar5;
  longlong unaff_RBP;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  undefined4 uVar6;
  
  do {
    FUN_1806d7170(param_1,in_RAX);
    puVar4 = (undefined4 *)
             (**(code **)(unaff_R13 + 0x18))
                       (&stack0x00000068,unaff_R15[2],*(undefined4 *)(unaff_R12 + 8));
    lVar5 = *unaff_R15;
    lVar1 = unaff_R15[1];
    lVar2 = unaff_R15[3];
    uVar6 = *puVar4;
    lVar3 = unaff_R15[4];
    func_0x0001806f45b0(unaff_RBP + -0x80);
    param_8 = &stack0x00000020;
    param_11 = 0;
    param_12 = 0;
    param_6 = lVar5;
    param_7 = lVar1;
    param_9 = lVar2;
    param_10 = lVar3;
    FUN_1806ce230(unaff_RBP + -0x80,&param_6,0,param_4,uVar6);
    param_8 = &stack0x00000020;
    param_11 = 0;
    param_12 = 0;
    param_6 = lVar5;
    param_7 = lVar1;
    param_9 = lVar2;
    param_10 = lVar3;
    param_1 = FUN_1806cf480(unaff_RBP + -0x80,&param_6,0);
    lVar5 = *unaff_R15;
    if (*(int *)(lVar5 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
          != '\0') {
        param_1 = (**(code **)(*(longlong *)unaff_R15[1] + 0x20))();
        lVar5 = *unaff_R15;
      }
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    }
    in_RAX = *(longlong *)(unaff_R12 + 0x10);
    unaff_R12 = unaff_R12 + 0x10;
  } while (in_RAX != 0);
  lVar5 = *unaff_R15;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)unaff_R15[1] + 0x20))();
      lVar5 = *unaff_R15;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c2749(void)
void FUN_1806c2749(void)

{
  longlong lVar1;
  longlong *unaff_R15;
  
  lVar1 = *unaff_R15;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 8) + 8 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)unaff_R15[1] + 0x20))();
      lVar1 = *unaff_R15;
    }
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806c2763(undefined8 param_1,longlong param_2)
void FUN_1806c2763(undefined8 param_1,longlong param_2)

{
  int in_EAX;
  longlong *unaff_R15;
  
  if (*(char *)(*(longlong *)(param_2 + 8) + 8 + (ulonglong)(in_EAX - 1) * 0x10) != '\0') {
    (**(code **)(*(longlong *)unaff_R15[1] + 0x20))();
    param_2 = *unaff_R15;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  return;
}






