#include "TaleWorlds.Native.Split.h"

// 99_part_09_part057.c - 6 个函数

// 函数: void FUN_1805d9b2b(undefined8 param_1,char param_2)
void FUN_1805d9b2b(undefined8 param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 *unaff_R14;
  
  bVar1 = 1 < (int)unaff_R14[0x44e];
  cVar2 = *(char *)(unaff_R14 + 0x451);
  if ((bool)*(char *)(unaff_R14 + 0x451) != bVar1) {
    *(bool *)(unaff_R14 + 0x451) = bVar1;
    unaff_R14[0x45e] = unaff_ESI;
    *(undefined1 *)((longlong)unaff_R14 + 0x1145) = 0;
    cVar2 = bVar1;
  }
  *unaff_R14 = unaff_ESI;
  if (param_2 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      iVar3 = (int)(*(longlong *)(unaff_R14 + 0x448) - *(longlong *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar3 = unaff_R14[0x44e];
    }
    if (iVar3 < 2) {
      *(undefined1 *)((longlong)unaff_R14 + 0x1145) = 1;
    }
    FUN_1805da2b0();
    FUN_1805d9c90();
    cVar2 = *(char *)(unaff_R14 + 0x451);
  }
  if (cVar2 != '\0') {
    if (*(char *)(unaff_R14 + 0x44f) == '\0') {
      unaff_RBX = *(undefined8 **)(unaff_R14 + 0x446);
    }
    uVar4 = unaff_RBX[(longlong)(int)unaff_R14[0x450] * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)((longlong)unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)((longlong)unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar3 = (int)(*(longlong *)(unaff_R14 + 0x448) - *(longlong *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar3 = unaff_R14[0x44e];
    }
    if (iVar3 != 1) {
      return;
    }
  }
  else {
    cVar2 = *(char *)(unaff_R14 + 0x44f);
    if (cVar2 == '\0') {
      iVar3 = (int)(*(longlong *)(unaff_R14 + 0x448) - *(longlong *)(unaff_R14 + 0x446) >> 5);
    }
    else {
      iVar3 = unaff_R14[0x44e];
    }
    if (iVar3 != 1) goto LAB_1805d9c26;
  }
  if (cVar2 == '\0') {
    unaff_RBX = *(undefined8 **)(unaff_R14 + 0x446);
  }
  uVar4 = *unaff_RBX;
LAB_1805d9c6a:
  *(undefined8 *)(unaff_R14 + 0xf) = uVar4;
  unaff_R14[10] = unaff_R14[10] & 0xfffffd0f;
  return;
}






// 函数: void FUN_1805d9b80(void)
void FUN_1805d9b80(void)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *unaff_RBX;
  longlong unaff_R14;
  
  if (*(char *)(unaff_R14 + 0x113c) == '\0') {
    iVar1 = (int)(*(longlong *)(unaff_R14 + 0x1120) - *(longlong *)(unaff_R14 + 0x1118) >> 5);
  }
  else {
    iVar1 = *(int *)(unaff_R14 + 0x1138);
  }
  if (iVar1 < 2) {
    *(undefined1 *)(unaff_R14 + 0x1145) = 1;
  }
  FUN_1805da2b0();
  FUN_1805d9c90();
  if (*(char *)(unaff_R14 + 0x1144) != '\0') {
    if (*(char *)(unaff_R14 + 0x113c) == '\0') {
      unaff_RBX = *(undefined8 **)(unaff_R14 + 0x1118);
    }
    uVar2 = unaff_RBX[(longlong)*(int *)(unaff_R14 + 0x1140) * 4];
    goto LAB_1805d9c6a;
  }
  if (*(char *)(unaff_R14 + 0x1147) == '\0') {
LAB_1805d9c26:
    if (*(char *)(unaff_R14 + 0x1145) == '\0') {
      return;
    }
    cVar3 = *(char *)(unaff_R14 + 0x113c);
    if (cVar3 == '\0') {
      iVar1 = (int)(*(longlong *)(unaff_R14 + 0x1120) - *(longlong *)(unaff_R14 + 0x1118) >> 5);
    }
    else {
      iVar1 = *(int *)(unaff_R14 + 0x1138);
    }
    if (iVar1 != 1) {
      return;
    }
  }
  else {
    cVar3 = *(char *)(unaff_R14 + 0x113c);
    if (cVar3 == '\0') {
      iVar1 = (int)(*(longlong *)(unaff_R14 + 0x1120) - *(longlong *)(unaff_R14 + 0x1118) >> 5);
    }
    else {
      iVar1 = *(int *)(unaff_R14 + 0x1138);
    }
    if (iVar1 != 1) goto LAB_1805d9c26;
  }
  if (cVar3 == '\0') {
    unaff_RBX = *(undefined8 **)(unaff_R14 + 0x1118);
  }
  uVar2 = *unaff_RBX;
LAB_1805d9c6a:
  *(undefined8 *)(unaff_R14 + 0x3c) = uVar2;
  *(uint *)(unaff_R14 + 0x28) = *(uint *)(unaff_R14 + 0x28) & 0xfffffd0f;
  return;
}






// 函数: void FUN_1805d9c90(void)
void FUN_1805d9c90(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1805da2b0(void)
void FUN_1805da2b0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1805da5f0(void)
void FUN_1805da5f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



undefined1 FUN_1805dbe60(longlong param_1)

{
  uint *puVar1;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  puVar1 = (uint *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
    return *(undefined1 *)(param_1 + 0xd1);
  }
  func_0x000180507ac0(puVar1);
  if (extraout_XMM0_Da < *(float *)(param_1 + 0x94) ||
      extraout_XMM0_Da == *(float *)(param_1 + 0x94)) {
    FUN_180507b40();
    if (extraout_XMM0_Da_00 < 1.5) goto LAB_1805dbea9;
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    *(undefined1 *)(param_1 + 0xd1) = 0;
    *puVar1 = *puVar1 | 0x200;
    return 0;
  }
LAB_1805dbea9:
  *(undefined1 *)(param_1 + 0xd1) = 1;
  *puVar1 = *puVar1 | 0x200;
  return 1;
}






// 函数: void FUN_1805dbed0(longlong param_1)
void FUN_1805dbed0(longlong param_1)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(*(longlong *)(**(longlong **)(param_1 + 0x20) + 0x20) + 0x34));
}






