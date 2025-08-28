#include "TaleWorlds.Native.Split.h"

// 99_part_13_part022.c - 10 个函数

// 函数: void FUN_1808b31d5(void)
void FUN_1808b31d5(void)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  longlong in_RAX;
  longlong lVar14;
  undefined8 unaff_RBX;
  longlong *plVar15;
  longlong *unaff_RDI;
  longlong unaff_R13;
  int unaff_R14D;
  longlong unaff_R15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM7_Da;
  float fVar19;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Dc;
  float unaff_XMM14_Da;
  int iStackX_20;
  undefined8 in_stack_00000028;
  longlong in_stack_00000030;
  int in_stack_00000038;
  float fStack0000000000000058;
  float fStack000000000000005c;
  int in_stack_00000060;
  ulonglong in_stack_00000070;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  
  iVar4 = in_stack_00000038;
  plVar1 = (longlong *)(unaff_R13 + 0x38);
  plVar15 = (longlong *)(in_RAX + -8);
  if (in_RAX == 0) {
    plVar15 = unaff_RDI;
  }
  plVar3 = unaff_RDI;
  uVar9 = unaff_XMM13_Dc;
  uVar10 = unaff_XMM13_Da;
  uVar11 = unaff_XMM12_Dc;
  uVar12 = unaff_XMM12_Da;
  uVar8 = in_stack_000000a8;
  uVar7 = in_stack_000000a0;
  uVar6 = in_stack_00000098;
  uVar5 = in_stack_00000090;
  if (plVar15 != (longlong *)0x0) {
    plVar3 = plVar15 + 1;
    uVar9 = unaff_XMM13_Dc;
    uVar10 = unaff_XMM13_Da;
    uVar11 = unaff_XMM12_Dc;
    uVar12 = unaff_XMM12_Da;
  }
  while (in_stack_000000a0 = uVar12, in_stack_000000a8 = uVar11, in_stack_00000090 = uVar10,
        in_stack_00000098 = uVar9, fVar19 = unaff_XMM7_Da, plVar3 != plVar1) {
    plVar15 = plVar3 + -1;
    if (plVar3 == (longlong *)0x0) {
      plVar15 = unaff_RDI;
    }
    fVar16 = (float)(**(code **)(*plVar15 + 8))(plVar15);
    if (iStackX_20 == 0) {
      lVar14 = (**(code **)*plVar15)(plVar15);
      iVar2 = *(int *)(lVar14 + 0x48);
      if (unaff_R15 == 0) {
        fVar17 = 100.0;
      }
      else {
        fVar17 = (float)func_0x0001808c64d0();
      }
      fVar16 = fVar16 * fVar17 * 0.01;
      if ((iVar2 == 0) && (iVar4 == 4)) {
        unaff_XMM9_Da = unaff_XMM9_Da * fVar16;
      }
      else {
LAB_1808b32c9:
        fStack0000000000000058 = unaff_XMM7_Da + fVar16;
        fVar19 = fStack0000000000000058;
      }
    }
    else if (iStackX_20 == 1) {
      if (unaff_R15 != 0) {
        fVar16 = (float)func_0x0001808c6590(fVar16,fVar16);
      }
      fVar19 = unaff_XMM10_Da;
      fStack0000000000000058 = unaff_XMM10_Da;
      if ((unaff_XMM7_Da != unaff_XMM10_Da) && (-80.0 < fVar16)) goto LAB_1808b32c9;
    }
    unaff_RBX = in_stack_00000028;
    unaff_R13 = in_stack_00000030;
    unaff_R14D = iStackX_20;
    fStack000000000000005c = unaff_XMM9_Da;
    uVar5 = in_stack_00000090;
    uVar6 = in_stack_00000098;
    uVar7 = in_stack_000000a0;
    uVar8 = in_stack_000000a8;
    if (plVar3 == plVar1) break;
    plVar15 = (longlong *)(*plVar3 + -8);
    if (*plVar3 == 0) {
      plVar15 = unaff_RDI;
    }
    plVar3 = unaff_RDI;
    uVar9 = in_stack_00000098;
    uVar10 = in_stack_00000090;
    uVar11 = in_stack_000000a8;
    uVar12 = in_stack_000000a0;
    unaff_XMM7_Da = fVar19;
    if (plVar15 != (longlong *)0x0) {
      plVar3 = plVar15 + 1;
    }
  }
  in_stack_000000a8 = uVar8;
  in_stack_000000a0 = uVar7;
  in_stack_00000098 = uVar6;
  in_stack_00000090 = uVar5;
  iVar4 = in_stack_00000060;
  fVar17 = (float)FUN_1808b3770(&stack0x00000038);
  fVar16 = fVar17;
  do {
    fVar18 = *(float *)(&stack0x00000050 + (longlong)unaff_RDI * 4);
    if (fVar18 != unaff_XMM14_Da) {
      fVar17 = (float)FUN_1808b3770(&stack0x00000038,
                                    *(undefined4 *)(&stack0x00000048 + (longlong)unaff_RDI * 4),
                                    iVar4 + 1);
      fVar17 = (fVar17 - fVar16) * fVar18;
      fVar16 = fVar16 + fVar17;
    }
    unaff_RDI = (longlong *)((longlong)unaff_RDI + 1);
  } while ((longlong)unaff_RDI < 2);
  if (unaff_R14D == 1) {
    fVar18 = fVar16;
    if (((-80.0 < fVar16) && (fVar18 = unaff_XMM10_Da, fVar16 != unaff_XMM10_Da)) &&
       (-80.0 < fVar19)) {
      fVar18 = fVar16 + fVar19;
    }
  }
  else {
    fVar18 = (fVar19 + fVar16) * unaff_XMM9_Da;
    if ((unaff_R14D == 0) && (unaff_R15 != 0)) {
      fVar18 = (float)func_0x0001808c6590(fVar17,fVar18);
    }
  }
  if ((fVar18 != *(float *)(unaff_R13 + 0x54)) ||
     (cVar13 = FUN_1808b3900(unaff_R13,unaff_RBX), cVar13 != '\0')) {
    *(float *)(unaff_R13 + 0x54) = fVar18;
    if ((*(uint *)(unaff_R13 + 0x5c) >> 3 & 1) == 0) {
      FUN_1808b20c0(unaff_R13,fVar18,unaff_RBX);
    }
    else {
      (**(code **)(**(longlong **)(unaff_R13 + 0x28) + 0x10))
                (*(longlong **)(unaff_R13 + 0x28),unaff_R13);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b31e0(void)
void FUN_1808b31e0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  longlong in_RAX;
  longlong lVar14;
  undefined8 unaff_RBX;
  longlong *plVar15;
  longlong *unaff_RDI;
  longlong unaff_R13;
  int unaff_R14D;
  longlong unaff_R15;
  bool in_ZF;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM7_Da;
  float fVar19;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Dc;
  float unaff_XMM14_Da;
  int iStackX_20;
  undefined8 in_stack_00000028;
  longlong in_stack_00000030;
  int in_stack_00000038;
  float fStack0000000000000058;
  float fStack000000000000005c;
  int in_stack_00000060;
  ulonglong in_stack_00000070;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  
  iVar4 = in_stack_00000038;
  plVar1 = (longlong *)(unaff_R13 + 0x38);
  plVar15 = (longlong *)(in_RAX + -8);
  if (in_ZF) {
    plVar15 = unaff_RDI;
  }
  plVar3 = unaff_RDI;
  uVar9 = unaff_XMM13_Dc;
  uVar10 = unaff_XMM13_Da;
  uVar11 = unaff_XMM12_Dc;
  uVar12 = unaff_XMM12_Da;
  uVar8 = in_stack_000000a8;
  uVar7 = in_stack_000000a0;
  uVar6 = in_stack_00000098;
  uVar5 = in_stack_00000090;
  if (plVar15 != (longlong *)0x0) {
    plVar3 = plVar15 + 1;
    uVar9 = unaff_XMM13_Dc;
    uVar10 = unaff_XMM13_Da;
    uVar11 = unaff_XMM12_Dc;
    uVar12 = unaff_XMM12_Da;
  }
  while (in_stack_000000a0 = uVar12, in_stack_000000a8 = uVar11, in_stack_00000090 = uVar10,
        in_stack_00000098 = uVar9, fVar19 = unaff_XMM7_Da, plVar3 != plVar1) {
    plVar15 = plVar3 + -1;
    if (plVar3 == (longlong *)0x0) {
      plVar15 = unaff_RDI;
    }
    fVar16 = (float)(**(code **)(*plVar15 + 8))(plVar15);
    if (iStackX_20 == 0) {
      lVar14 = (**(code **)*plVar15)(plVar15);
      iVar2 = *(int *)(lVar14 + 0x48);
      if (unaff_R15 == 0) {
        fVar17 = 100.0;
      }
      else {
        fVar17 = (float)func_0x0001808c64d0();
      }
      fVar16 = fVar16 * fVar17 * 0.01;
      if ((iVar2 == 0) && (iVar4 == 4)) {
        unaff_XMM9_Da = unaff_XMM9_Da * fVar16;
      }
      else {
LAB_1808b32c9:
        fStack0000000000000058 = unaff_XMM7_Da + fVar16;
        fVar19 = fStack0000000000000058;
      }
    }
    else if (iStackX_20 == 1) {
      if (unaff_R15 != 0) {
        fVar16 = (float)func_0x0001808c6590(fVar16,fVar16);
      }
      fVar19 = unaff_XMM10_Da;
      fStack0000000000000058 = unaff_XMM10_Da;
      if ((unaff_XMM7_Da != unaff_XMM10_Da) && (-80.0 < fVar16)) goto LAB_1808b32c9;
    }
    unaff_RBX = in_stack_00000028;
    unaff_R13 = in_stack_00000030;
    unaff_R14D = iStackX_20;
    fStack000000000000005c = unaff_XMM9_Da;
    uVar5 = in_stack_00000090;
    uVar6 = in_stack_00000098;
    uVar7 = in_stack_000000a0;
    uVar8 = in_stack_000000a8;
    if (plVar3 == plVar1) break;
    plVar15 = (longlong *)(*plVar3 + -8);
    if (*plVar3 == 0) {
      plVar15 = unaff_RDI;
    }
    plVar3 = unaff_RDI;
    uVar9 = in_stack_00000098;
    uVar10 = in_stack_00000090;
    uVar11 = in_stack_000000a8;
    uVar12 = in_stack_000000a0;
    unaff_XMM7_Da = fVar19;
    if (plVar15 != (longlong *)0x0) {
      plVar3 = plVar15 + 1;
    }
  }
  in_stack_000000a8 = uVar8;
  in_stack_000000a0 = uVar7;
  in_stack_00000098 = uVar6;
  in_stack_00000090 = uVar5;
  iVar4 = in_stack_00000060;
  fVar17 = (float)FUN_1808b3770(&stack0x00000038);
  fVar16 = fVar17;
  do {
    fVar18 = *(float *)(&stack0x00000050 + (longlong)unaff_RDI * 4);
    if (fVar18 != unaff_XMM14_Da) {
      fVar17 = (float)FUN_1808b3770(&stack0x00000038,
                                    *(undefined4 *)(&stack0x00000048 + (longlong)unaff_RDI * 4),
                                    iVar4 + 1);
      fVar17 = (fVar17 - fVar16) * fVar18;
      fVar16 = fVar16 + fVar17;
    }
    unaff_RDI = (longlong *)((longlong)unaff_RDI + 1);
  } while ((longlong)unaff_RDI < 2);
  if (unaff_R14D == 1) {
    fVar18 = fVar16;
    if (((-80.0 < fVar16) && (fVar18 = unaff_XMM10_Da, fVar16 != unaff_XMM10_Da)) &&
       (-80.0 < fVar19)) {
      fVar18 = fVar16 + fVar19;
    }
  }
  else {
    fVar18 = (fVar19 + fVar16) * unaff_XMM9_Da;
    if ((unaff_R14D == 0) && (unaff_R15 != 0)) {
      fVar18 = (float)func_0x0001808c6590(fVar17,fVar18);
    }
  }
  if ((fVar18 != *(float *)(unaff_R13 + 0x54)) ||
     (cVar13 = FUN_1808b3900(unaff_R13,unaff_RBX), cVar13 != '\0')) {
    *(float *)(unaff_R13 + 0x54) = fVar18;
    if ((*(uint *)(unaff_R13 + 0x5c) >> 3 & 1) == 0) {
      FUN_1808b20c0(unaff_R13,fVar18,unaff_RBX);
    }
    else {
      (**(code **)(**(longlong **)(unaff_R13 + 0x28) + 0x10))
                (*(longlong **)(unaff_R13 + 0x28),unaff_R13);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b3226(void)
void FUN_1808b3226(void)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int unaff_EBX;
  longlong *unaff_RSI;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *unaff_R12;
  int unaff_R13D;
  longlong unaff_R15;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM14_Da;
  int iStackX_20;
  undefined8 in_stack_00000028;
  longlong in_stack_00000030;
  float in_stack_00000058;
  float fStack000000000000005c;
  int in_stack_00000060;
  ulonglong in_stack_00000070;
  
  do {
    plVar4 = unaff_RSI + -1;
    if (unaff_RSI == (longlong *)0x0) {
      plVar4 = unaff_RDI;
    }
    fVar5 = (float)(**(code **)(*plVar4 + 8))(plVar4);
    fVar8 = unaff_XMM7_Da;
    if (unaff_EBX == 0) {
      lVar3 = (**(code **)*plVar4)(plVar4);
      iVar1 = *(int *)(lVar3 + 0x48);
      if (unaff_R15 == 0) {
        fVar6 = 100.0;
      }
      else {
        fVar6 = (float)func_0x0001808c64d0();
      }
      fVar5 = fVar5 * fVar6 * 0.01;
      if ((iVar1 == 0) && (unaff_R13D == 4)) {
        unaff_XMM9_Da = unaff_XMM9_Da * fVar5;
      }
      else {
LAB_1808b32c9:
        in_stack_00000058 = unaff_XMM7_Da + fVar5;
        fVar8 = in_stack_00000058;
      }
    }
    else if (unaff_EBX == 1) {
      if (unaff_R15 != 0) {
        fVar5 = (float)func_0x0001808c6590(fVar5,fVar5);
      }
      fVar8 = unaff_XMM10_Da;
      in_stack_00000058 = unaff_XMM10_Da;
      if ((unaff_XMM7_Da != unaff_XMM10_Da) && (unaff_XMM11_Da < fVar5)) goto LAB_1808b32c9;
    }
    iVar1 = in_stack_00000060;
    if (unaff_RSI == unaff_R12) break;
    plVar4 = (longlong *)(*unaff_RSI + -8);
    if (*unaff_RSI == 0) {
      plVar4 = unaff_RDI;
    }
    unaff_RSI = unaff_RDI;
    if (plVar4 != (longlong *)0x0) {
      unaff_RSI = plVar4 + 1;
    }
    unaff_XMM7_Da = fVar8;
  } while (unaff_RSI != unaff_R12);
  fStack000000000000005c = unaff_XMM9_Da;
  fVar6 = (float)FUN_1808b3770(&stack0x00000038);
  fVar5 = fVar6;
  do {
    fVar7 = *(float *)(&stack0x00000050 + (longlong)unaff_RDI * 4);
    if (fVar7 != unaff_XMM14_Da) {
      fVar6 = (float)FUN_1808b3770(&stack0x00000038,
                                   *(undefined4 *)(&stack0x00000048 + (longlong)unaff_RDI * 4),
                                   iVar1 + 1);
      fVar6 = (fVar6 - fVar5) * fVar7;
      fVar5 = fVar5 + fVar6;
    }
    unaff_RDI = (longlong *)((longlong)unaff_RDI + 1);
  } while ((longlong)unaff_RDI < 2);
  if (iStackX_20 == 1) {
    fVar7 = fVar5;
    if (((unaff_XMM11_Da < fVar5) && (fVar7 = unaff_XMM10_Da, fVar5 != unaff_XMM10_Da)) &&
       (unaff_XMM11_Da < fVar8)) {
      fVar7 = fVar5 + fVar8;
    }
  }
  else {
    fVar7 = (fVar8 + fVar5) * unaff_XMM9_Da;
    if ((iStackX_20 == 0) && (unaff_R15 != 0)) {
      fVar7 = (float)func_0x0001808c6590(fVar6,fVar7);
    }
  }
  if ((fVar7 != *(float *)(in_stack_00000030 + 0x54)) ||
     (cVar2 = FUN_1808b3900(in_stack_00000030,in_stack_00000028), cVar2 != '\0')) {
    *(float *)(in_stack_00000030 + 0x54) = fVar7;
    if ((*(uint *)(in_stack_00000030 + 0x5c) >> 3 & 1) == 0) {
      FUN_1808b20c0(in_stack_00000030,fVar7,in_stack_00000028);
    }
    else {
      (**(code **)(**(longlong **)(in_stack_00000030 + 0x28) + 0x10))
                (*(longlong **)(in_stack_00000030 + 0x28),in_stack_00000030);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b332b(undefined8 param_1,undefined8 param_2)
void FUN_1808b332b(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong unaff_RDI;
  longlong unaff_R13;
  int unaff_R14D;
  longlong unaff_R15;
  float fVar3;
  float extraout_XMM0_Da;
  float fVar4;
  float fVar5;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM14_Da;
  int in_stack_00000060;
  ulonglong in_stack_00000070;
  
  iVar1 = in_stack_00000060;
  fVar3 = (float)FUN_1808b3770(&stack0x00000038,param_2,in_stack_00000060);
  fVar4 = fVar3;
  do {
    fVar5 = *(float *)(&stack0x00000050 + unaff_RDI * 4);
    if (fVar5 != unaff_XMM14_Da) {
      fVar3 = (float)FUN_1808b3770(&stack0x00000038,
                                   *(undefined4 *)(&stack0x00000048 + unaff_RDI * 4),iVar1 + 1);
      fVar3 = (fVar3 - fVar4) * fVar5;
      fVar4 = fVar4 + fVar3;
    }
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < 2);
  if (unaff_R14D == 1) {
    fVar5 = fVar4;
    if (((unaff_XMM11_Da < fVar4) && (fVar5 = unaff_XMM10_Da, fVar4 != unaff_XMM10_Da)) &&
       (unaff_XMM11_Da < unaff_XMM7_Da)) {
      fVar5 = fVar4 + unaff_XMM7_Da;
    }
  }
  else {
    fVar5 = (unaff_XMM7_Da + fVar4) * unaff_XMM9_Da;
    if ((unaff_R14D == 0) && (unaff_R15 != 0)) {
      fVar3 = (float)func_0x0001808c6590(fVar3,fVar5);
      fVar5 = fVar3;
    }
  }
  if ((fVar5 != *(float *)(unaff_R13 + 0x54)) ||
     (cVar2 = FUN_1808b3900(), fVar3 = extraout_XMM0_Da, cVar2 != '\0')) {
    *(float *)(unaff_R13 + 0x54) = fVar5;
    if ((*(uint *)(unaff_R13 + 0x5c) >> 3 & 1) == 0) {
      FUN_1808b20c0(fVar3,fVar5);
    }
    else {
      (**(code **)(**(longlong **)(unaff_R13 + 0x28) + 0x10))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b3350(float param_1)
void FUN_1808b3350(float param_1)

{
  char cVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong unaff_R13;
  int unaff_R14D;
  longlong unaff_R15;
  float fVar2;
  float extraout_XMM0_Da;
  float unaff_XMM6_Da;
  float fVar3;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM14_Da;
  ulonglong in_stack_00000070;
  
  do {
    fVar3 = *(float *)(&stack0x00000050 + unaff_RDI * 4);
    if (fVar3 != unaff_XMM14_Da) {
      fVar2 = (float)FUN_1808b3770(&stack0x00000038,
                                   *(undefined4 *)(&stack0x00000048 + unaff_RDI * 4),unaff_ESI + 1);
      param_1 = (fVar2 - unaff_XMM6_Da) * fVar3;
      unaff_XMM6_Da = unaff_XMM6_Da + param_1;
    }
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < 2);
  if (unaff_R14D == 1) {
    fVar3 = unaff_XMM6_Da;
    if (((unaff_XMM11_Da < unaff_XMM6_Da) &&
        (fVar3 = unaff_XMM10_Da, unaff_XMM6_Da != unaff_XMM10_Da)) &&
       (unaff_XMM11_Da < unaff_XMM7_Da)) {
      fVar3 = unaff_XMM6_Da + unaff_XMM7_Da;
    }
  }
  else {
    fVar3 = (unaff_XMM7_Da + unaff_XMM6_Da) * unaff_XMM9_Da;
    if ((unaff_R14D == 0) && (unaff_R15 != 0)) {
      param_1 = (float)func_0x0001808c6590(param_1,fVar3);
      fVar3 = param_1;
    }
  }
  if ((fVar3 != *(float *)(unaff_R13 + 0x54)) ||
     (cVar1 = FUN_1808b3900(), param_1 = extraout_XMM0_Da, cVar1 != '\0')) {
    *(float *)(unaff_R13 + 0x54) = fVar3;
    if ((*(uint *)(unaff_R13 + 0x5c) >> 3 & 1) == 0) {
      FUN_1808b20c0(param_1,fVar3);
    }
    else {
      (**(code **)(**(longlong **)(unaff_R13 + 0x28) + 0x10))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b3395(void)
void FUN_1808b3395(void)

{
  char cVar1;
  longlong unaff_R13;
  float unaff_XMM6_Da;
  float fVar2;
  float unaff_XMM7_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  ulonglong in_stack_00000070;
  
  fVar2 = unaff_XMM6_Da;
  if (((unaff_XMM11_Da < unaff_XMM6_Da) && (fVar2 = unaff_XMM10_Da, unaff_XMM6_Da != unaff_XMM10_Da)
      ) && (unaff_XMM11_Da < unaff_XMM7_Da)) {
    fVar2 = unaff_XMM6_Da + unaff_XMM7_Da;
  }
  if ((fVar2 != *(float *)(unaff_R13 + 0x54)) || (cVar1 = FUN_1808b3900(), cVar1 != '\0')) {
    *(float *)(unaff_R13 + 0x54) = fVar2;
    if ((*(uint *)(unaff_R13 + 0x5c) >> 3 & 1) == 0) {
      FUN_1808b20c0();
    }
    else {
      (**(code **)(**(longlong **)(unaff_R13 + 0x28) + 0x10))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808b33e7(void)
void FUN_1808b33e7(void)

{
  char cVar1;
  longlong unaff_R13;
  undefined4 unaff_XMM6_Da;
  ulonglong in_stack_00000070;
  
  cVar1 = FUN_1808b3900();
  if (cVar1 != '\0') {
    *(undefined4 *)(unaff_R13 + 0x54) = unaff_XMM6_Da;
    if ((*(uint *)(unaff_R13 + 0x5c) >> 3 & 1) == 0) {
      FUN_1808b20c0();
    }
    else {
      (**(code **)(**(longlong **)(unaff_R13 + 0x28) + 0x10))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000070 ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_1808b3490(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plStack_10;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plStack_10 = (longlong *)(*(longlong *)(param_1 + 0x10) + -8);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plStack_10 = plVar6;
  }
  if (plStack_10 == (longlong *)0x0) {
    plStack_10 = (longlong *)0x0;
  }
  else {
    plStack_10 = plStack_10 + 1;
  }
  if (plStack_10 == plVar1) {
LAB_1808b3536:
    if (plStack_10 != plVar1) {
      *(longlong *)plStack_10[1] = *plStack_10;
      *(longlong *)(*plStack_10 + 8) = plStack_10[1];
      plStack_10[1] = (longlong)plStack_10;
      *plStack_10 = (longlong)plStack_10;
      cVar3 = FUN_1808b22c0(param_1);
      if (cVar3 == '\0') {
        for (puVar2 = *(undefined8 **)(param_1 + 0x20); puVar2 != (undefined8 *)(param_1 + 0x20);
            puVar2 = (undefined8 *)*puVar2) {
          uVar5 = FUN_1808b3060(puVar2,0);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          if (puVar2 == (undefined8 *)(param_1 + 0x20)) {
            return 0;
          }
        }
      }
      return 0;
    }
  }
  else {
    do {
      plVar4 = plStack_10 + -1;
      if (plStack_10 == (longlong *)0x0) {
        plVar4 = plVar6;
      }
      if (plVar4 == param_2) goto LAB_1808b3536;
      if (plStack_10 == plVar1) {
        return 0x1c;
      }
      plVar4 = (longlong *)(*plStack_10 + -8);
      if (*plStack_10 == 0) {
        plVar4 = plVar6;
      }
      plStack_10 = plVar6;
      if (plVar4 != (longlong *)0x0) {
        plStack_10 = plVar4 + 1;
      }
    } while (plStack_10 != plVar1);
  }
  return 0x1c;
}



undefined8 FUN_1808b35b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  float afStackX_8 [2];
  
  plVar8 = (longlong *)0x0;
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -8);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar5 = plVar8;
  }
  plVar1 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    plVar1 = plVar5 + 1;
  }
  do {
    if (plVar1 == (longlong *)(param_1 + 0x10)) {
      return 0;
    }
    plVar5 = plVar1 + -1;
    if (plVar1 == (longlong *)0x0) {
      plVar5 = plVar8;
    }
    cVar2 = (**(code **)(*plVar5 + 8))(plVar5);
    if (cVar2 != '\0') {
      *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
      afStackX_8[0] = 0.0;
      uVar9 = (**(code **)(*plVar5 + 0x10))(plVar5,afStackX_8);
      if ((*(int *)(param_2 + 4) == 1) && (*(longlong *)(param_2 + 0x30) != 0)) {
        uVar9 = func_0x0001808c6590(*(longlong *)(param_2 + 0x30),uVar9);
      }
      pfVar6 = (float *)(param_2 + 0x18);
      if (afStackX_8[0] == 1.0) {
        FUN_1808b2d60(param_2,uVar9,param_2 + 0xc);
        lVar3 = param_2 + 0x10;
        lVar7 = 2;
        do {
          if (*pfVar6 != 0.0) {
            FUN_1808b2d60(param_2,uVar9,lVar3);
          }
          lVar3 = lVar3 + 4;
          pfVar6 = pfVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      else {
        if (*pfVar6 == 0.0) {
          lVar3 = 0x18;
          uVar4 = 0x10;
        }
        else {
          lVar3 = 0x1c;
          uVar4 = 0x14;
        }
        if (*(float *)(lVar3 + param_2) != 0.0) {
          return 0x1c;
        }
        *(float *)(lVar3 + param_2) = afStackX_8[0];
        *(undefined4 *)((ulonglong)uVar4 + param_2) = *(undefined4 *)(param_2 + 0xc);
        FUN_1808b2d60(param_2,uVar9);
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + -1;
      }
    }
    if (plVar1 == (longlong *)(param_1 + 0x10)) {
      return 0;
    }
    plVar5 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar5 = plVar8;
    }
    plVar1 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar1 = plVar8;
    }
  } while( true );
}



float FUN_1808b3770(undefined4 *param_1,float param_2,int param_3)

{
  float fVar1;
  
  if (param_3 < 1) {
    fVar1 = (float)param_1[2];
    if ((param_1[1] == 0) && (*(longlong *)(param_1 + 0xc) != 0)) {
      fVar1 = (float)func_0x0001808c6500(*(longlong *)(param_1 + 0xc),fVar1);
    }
    return fVar1;
  }
  switch(*param_1) {
  case 0:
  case 1:
  case 4:
  case 5:
    goto code_r0x0001808b37af;
  case 2:
    if (param_1[1] != 1) {
      if (*(longlong *)(param_1 + 0xc) == 0) {
        return param_2 + 0.0;
      }
      fVar1 = (float)func_0x0001808c6500(*(longlong *)(param_1 + 0xc),0);
      return fVar1 + param_2;
    }
    if (param_2 <= -80.0) {
      param_2 = -80.0;
    }
code_r0x0001808b37af:
    return param_2;
  case 3:
    return param_2 / (float)param_3;
  default:
    return 0.0;
  }
}



int FUN_1808b3850(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == param_1[9]) {
    return 0;
  }
  if (param_1[9] != 0) {
    *(longlong *)param_1[1] = *param_1;
    *(longlong *)(*param_1 + 8) = param_1[1];
    param_1[1] = (longlong)param_1;
    *param_1 = (longlong)param_1;
    FUN_1808b22c0();
  }
  param_1[9] = param_2;
  if (param_2 == 0) {
    return 0;
  }
  plVar1 = (longlong *)*param_1;
  iVar3 = 0;
  if (plVar1 != param_1) {
    iVar2 = 0;
    do {
      plVar1 = (longlong *)*plVar1;
      iVar2 = iVar2 + 1;
    } while (plVar1 != param_1);
    if (iVar2 != 0) {
      iVar3 = 0x1c;
      goto LAB_1808b38e0;
    }
  }
  param_1[1] = *(longlong *)(param_2 + 0x28);
  *param_1 = param_2 + 0x20;
  *(longlong **)(param_2 + 0x28) = param_1;
  *(longlong **)param_1[1] = param_1;
LAB_1808b38e0:
  if (iVar3 == 0) {
    return 0;
  }
  return iVar3;
}



undefined8 FUN_1808b3900(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(uint *)(param_1 + 0x5c) >> 1 & 1) == 0) || (param_2 != 0)) {
    return 1;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
  if ((cVar1 == '\0') && (cVar1 = FUN_1808b2c50(param_1), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}






// 函数: void FUN_1808b3950(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4)
void FUN_1808b3950(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if ((param_4 != '\0') && (uVar1 = 5, *(short *)(*(longlong *)(param_1 + 0x20) + 0x4a) == 1)) {
    uVar1 = 4;
  }
  FUN_1808b1d10(param_1,param_1 + 0x58,param_2,param_3,uVar1,0,0,0);
  return;
}






// 函数: void FUN_1808b3a30(longlong *param_1)
void FUN_1808b3a30(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((((puVar1 != (undefined8 *)0x0) && (lVar2 = *param_1, lVar2 != 0)) &&
      ((puVar1[0xb] == 0 ||
       (((*(uint *)(puVar1 + 0x11) >> 2 & 1) == 0 || (iVar3 = FUN_1808b4e20(puVar1), iVar3 == 0)))))
      ) && ((puVar1[9] == 0 ||
            (((*(int *)(puVar1 + 0xe) == -1 && (*(int *)((longlong)puVar1 + 0x74) == -1)) ||
             (iVar3 = FUN_180862910(puVar1[9],puVar1), iVar3 == 0)))))) {
    uVar4 = (**(code **)*puVar1)(puVar1);
    iVar3 = FUN_1808b5a30(puVar1,uVar4);
    if (iVar3 == 0) {
      if (puVar1[6] != 0) {
        iVar3 = FUN_180740d90();
        if (iVar3 != 0) {
          return;
        }
        puVar1[6] = 0;
      }
      lVar5 = (**(code **)*puVar1)(puVar1);
      if (*(short *)(lVar5 + 0xc) == 7) {
        uVar4 = (**(code **)*puVar1)(puVar1);
        iVar3 = FUN_1808b4d60(puVar1,uVar4);
        if (iVar3 != 0) {
          return;
        }
      }
      *(uint *)(puVar1 + 0x11) = *(uint *)(puVar1 + 0x11) | 0x80000000;
      iVar3 = FUN_1808b5780(*(undefined8 *)(lVar2 + 8),puVar1);
      if (iVar3 == 0) {
        func_0x0001808bef30(*(undefined8 *)(lVar2 + 0x10),puVar1);
      }
    }
  }
  return;
}






// 函数: void FUN_1808b3a43(longlong *param_1)
void FUN_1808b3a43(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *unaff_RBX;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (((unaff_RBX[0xb] != 0) && ((*(uint *)(unaff_RBX + 0x11) >> 2 & 1) != 0)) &&
       (iVar2 = FUN_1808b4e20(), iVar2 != 0)) {
      return;
    }
    if (((unaff_RBX[9] != 0) &&
        ((*(int *)(unaff_RBX + 0xe) != -1 || (*(int *)((longlong)unaff_RBX + 0x74) != -1)))) &&
       (iVar2 = FUN_180862910(), iVar2 != 0)) {
      return;
    }
    (**(code **)*unaff_RBX)();
    iVar2 = FUN_1808b5a30();
    if (iVar2 == 0) {
      if (unaff_RBX[6] != 0) {
        iVar2 = FUN_180740d90();
        if (iVar2 != 0) {
          return;
        }
        unaff_RBX[6] = 0;
      }
      lVar3 = (**(code **)*unaff_RBX)();
      if (*(short *)(lVar3 + 0xc) == 7) {
        (**(code **)*unaff_RBX)();
        iVar2 = FUN_1808b4d60();
        if (iVar2 != 0) {
          return;
        }
      }
      *(uint *)(unaff_RBX + 0x11) = *(uint *)(unaff_RBX + 0x11) | 0x80000000;
      iVar2 = FUN_1808b5780(*(undefined8 *)(lVar1 + 8));
      if (iVar2 == 0) {
        func_0x0001808bef30(*(undefined8 *)(lVar1 + 0x10));
      }
    }
  }
  return;
}






