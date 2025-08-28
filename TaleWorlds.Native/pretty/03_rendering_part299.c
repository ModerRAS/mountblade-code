#include "TaleWorlds.Native.Split.h"

// 03_rendering_part299.c - 2 个函数

// 函数: void FUN_180428a70(void)
void FUN_180428a70(void)

{
  return;
}





// 函数: void FUN_180428a75(void)
void FUN_180428a75(void)

{
  return;
}



uint64_t FUN_180428a90(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint64_t uVar4;
  uint64_t uVar6;
  byte bVar7;
  int iVar8;
  uint64_t uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  pbVar2 = *(byte **)(param_1 + 0xb8);
  pbVar1 = *(byte **)(param_1 + 0xc0);
  if (pbVar2 < pbVar1) {
    pbVar2 = pbVar2 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar2;
  }
  else if (*(int *)(param_1 + 0x30) != 0) {
    FUN_18041ee20(param_1);
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 1;
    pbVar2 = *(byte **)(param_1 + 0xb8);
    pbVar1 = *(byte **)(param_1 + 0xc0);
  }
  if (pbVar2 < pbVar1) {
    bVar7 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar2;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar7 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    bVar7 = **(byte **)(param_1 + 0xb8);
    pbVar2 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar2;
  }
  uVar6 = uVar5;
  if (1 < bVar7) goto FUN_180428d1c;
  if (pbVar2 < *(byte **)(param_1 + 0xc0)) {
    bVar3 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar3 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    bVar3 = **(byte **)(param_1 + 0xb8);
    pbVar2 = *(byte **)(param_1 + 0xb8) + 1;
  }
  if (bVar7 == 1) {
    if ((bVar3 - 1 & 0xf7) != 0) goto FUN_180428d1c;
    if ((*(longlong *)(param_1 + 0x10) == 0) || (3 < *(int *)(param_1 + 0xc0) - (int)pbVar2)) {
      pbVar2 = pbVar2 + 4;
      *(byte **)(param_1 + 0xb8) = pbVar2;
    }
    else {
      *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xc0);
      (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
      pbVar2 = *(byte **)(param_1 + 0xb8);
    }
    if (pbVar2 < *(byte **)(param_1 + 0xc0)) {
      bVar3 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      pbVar1 = pbVar2;
    }
    else {
      if (*(int *)(param_1 + 0x30) == 0) {
        bVar3 = 0;
      }
      else {
        FUN_18041ee20(param_1);
        bVar3 = **(byte **)(param_1 + 0xb8);
        pbVar2 = *(byte **)(param_1 + 0xb8) + 1;
      }
      pbVar1 = (byte *)((ulonglong)pbVar2 & 0xffffffff);
    }
    if (((0x18 < bVar3) || ((0x1018100U >> (bVar3 & 0x1f) & 1) == 0)) && (bVar3 != 0x20))
    goto FUN_180428d1c;
    if ((*(longlong *)(param_1 + 0x10) == 0) ||
       (iVar8 = *(int *)(param_1 + 0xc0) - (int)pbVar1, 3 < iVar8)) {
      pbVar2 = pbVar2 + 4;
      goto LAB_180428c99;
    }
    *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xc0);
    (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),4 - iVar8);
  }
  else {
    if ((((bVar3 - 2 & 0xf6) != 0) || (bVar3 == 0xb)) && (uVar6 = uVar4, bVar3 != 0xb))
    goto FUN_180428d1c;
    if ((*(longlong *)(param_1 + 0x10) == 0) ||
       (iVar8 = *(int *)(param_1 + 0xc0) - (int)pbVar2, 8 < iVar8)) {
      pbVar2 = pbVar2 + 9;
LAB_180428c99:
      *(byte **)(param_1 + 0xb8) = pbVar2;
    }
    else {
      *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xc0);
      (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),9 - iVar8);
    }
  }
  iVar8 = FUN_18041f0a0(param_1);
  uVar6 = uVar5;
  if ((iVar8 < 1) || (iVar8 = FUN_18041f0a0(), uVar6 = uVar4, iVar8 < 1)) goto FUN_180428d1c;
  if (*(byte **)(param_1 + 0xb8) < *(byte **)(param_1 + 0xc0)) {
    bVar3 = **(byte **)(param_1 + 0xb8);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar3 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    bVar3 = **(byte **)(param_1 + 0xb8);
  }
  if (bVar7 == 1) {
    if (bVar3 != 8) {
      if (bVar3 != 0x10) goto FUN_180428d1c;
      goto LAB_180428cfa;
    }
  }
  else {
LAB_180428cfa:
    if (((0x18 < bVar3) || ((0x1018100U >> (bVar3 & 0x1f) & 1) == 0)) && (bVar3 != 0x20))
    goto FUN_180428d1c;
  }
  uVar6 = 1;
FUN_180428d1c:
  *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
  *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
  return uVar6;
}



ulonglong FUN_180428b2a(char *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  longlong unaff_RBX;
  int iVar4;
  ulonglong unaff_RBP;
  char unaff_DIL;
  int iVar5;
  byte *pbVar6;
  
  iVar4 = (int)unaff_RBP;
  if (param_1 < *(char **)(unaff_RBX + 0xc0)) {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  }
  else if (*(int *)(unaff_RBX + 0x30) == iVar4) {
    cVar2 = '\0';
  }
  else {
    FUN_18041ee20();
    cVar2 = **(char **)(unaff_RBX + 0xb8);
    param_1 = *(char **)(unaff_RBX + 0xb8) + 1;
  }
  if (unaff_DIL == '\x01') {
    if ((cVar2 - 1U & 0xf7) != 0) goto LAB_180428d12;
    if (*(ulonglong *)(unaff_RBX + 0x10) == unaff_RBP) {
LAB_180428bbc:
      pbVar1 = (byte *)(param_1 + 4);
      *(byte **)(unaff_RBX + 0xb8) = pbVar1;
    }
    else {
      if (3 < *(int *)(unaff_RBX + 0xc0) - (int)param_1) goto LAB_180428bbc;
      *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 0xc0);
      (**(code **)(unaff_RBX + 0x18))(*(uint64_t *)(unaff_RBX + 0x28));
      pbVar1 = *(byte **)(unaff_RBX + 0xb8);
    }
    if (pbVar1 < *(byte **)(unaff_RBX + 0xc0)) {
      bVar3 = *pbVar1;
      pbVar1 = pbVar1 + 1;
      pbVar6 = pbVar1;
    }
    else {
      if (*(int *)(unaff_RBX + 0x30) == iVar4) {
        bVar3 = 0;
      }
      else {
        FUN_18041ee20();
        bVar3 = **(byte **)(unaff_RBX + 0xb8);
        pbVar1 = *(byte **)(unaff_RBX + 0xb8) + 1;
      }
      pbVar6 = (byte *)((ulonglong)pbVar1 & 0xffffffff);
    }
    if (((0x18 < bVar3) || ((0x1018100U >> (bVar3 & 0x1f) & 1) == 0)) && (bVar3 != 0x20))
    goto LAB_180428d12;
    if (*(ulonglong *)(unaff_RBX + 0x10) != unaff_RBP) {
      iVar5 = *(int *)(unaff_RBX + 0xc0) - (int)pbVar6;
      if (iVar5 < 4) {
        *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 0xc0);
        (**(code **)(unaff_RBX + 0x18))(*(uint64_t *)(unaff_RBX + 0x28),4 - iVar5);
        goto LAB_180428ca0;
      }
    }
    pbVar1 = pbVar1 + 4;
LAB_180428c99:
    *(byte **)(unaff_RBX + 0xb8) = pbVar1;
  }
  else {
    if ((((cVar2 - 2U & 0xf6) != 0) || (cVar2 == '\v')) && (cVar2 != '\v')) goto LAB_180428d12;
    if (*(ulonglong *)(unaff_RBX + 0x10) == unaff_RBP) {
LAB_180428c95:
      pbVar1 = (byte *)(param_1 + 9);
      goto LAB_180428c99;
    }
    iVar5 = *(int *)(unaff_RBX + 0xc0) - (int)param_1;
    if (8 < iVar5) goto LAB_180428c95;
    *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 0xc0);
    (**(code **)(unaff_RBX + 0x18))(*(uint64_t *)(unaff_RBX + 0x28),9 - iVar5);
  }
LAB_180428ca0:
  iVar5 = FUN_18041f0a0();
  if (iVar5 < 1) goto LAB_180428d12;
  iVar5 = FUN_18041f0a0();
  if (iVar5 < 1) goto LAB_180428d12;
  if (*(byte **)(unaff_RBX + 0xb8) < *(byte **)(unaff_RBX + 0xc0)) {
    bVar3 = **(byte **)(unaff_RBX + 0xb8);
  }
  else if (*(int *)(unaff_RBX + 0x30) == iVar4) {
    bVar3 = 0;
  }
  else {
    FUN_18041ee20();
    bVar3 = **(byte **)(unaff_RBX + 0xb8);
  }
  if (unaff_DIL == '\x01') {
    if (bVar3 != 8) {
      if (bVar3 != 0x10) goto LAB_180428d12;
      goto LAB_180428cfa;
    }
  }
  else {
LAB_180428cfa:
    if (((0x18 < bVar3) || ((0x1018100U >> (bVar3 & 0x1f) & 1) == 0)) && (bVar3 != 0x20))
    goto LAB_180428d12;
  }
  unaff_RBP = 1;
LAB_180428d12:
  *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 200);
  *(uint64_t *)(unaff_RBX + 0xc0) = *(uint64_t *)(unaff_RBX + 0xd0);
  return unaff_RBP & 0xffffffff;
}



int32_t FUN_180428d1c(void)

{
  longlong unaff_RBX;
  int32_t unaff_EBP;
  
  *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 200);
  *(uint64_t *)(unaff_RBX + 0xc0) = *(uint64_t *)(unaff_RBX + 0xd0);
  return unaff_EBP;
}





