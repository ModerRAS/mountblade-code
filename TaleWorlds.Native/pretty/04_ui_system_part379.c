#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part379.c - 3 个函数

// 函数: void FUN_180872540(longlong *param_1)
void FUN_180872540(longlong *param_1)

{
  int iVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_1[2] != 0) {
    iVar1 = FUN_180768380(param_1[2],0);
    if (iVar1 != 0) goto LAB_18087257d;
    param_1[2] = 0;
  }
  if ((param_1[3] != 0) && (iVar1 = FUN_1807688f0(), iVar1 == 0)) {
    param_1[3] = 0;
  }
LAB_18087257d:
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return;
    }
    if ((0 < (int)uVar4) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
    uVar4 = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    lVar3 = (longlong)-iVar1;
    if (iVar1 < 0) {
      puVar2 = (uint64_t *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      do {
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
    }
  }
  *(int32_t *)(param_1 + 1) = 0;
  if (0 < (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
    FUN_1807d3f50(param_1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180872630(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  
  iVar2 = FUN_180744cc0(param_1 + 0x87);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x89), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x8b) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x45c) = 0;
  }
  FUN_1808555a0(param_1 + 0x89);
  FUN_180744cc0(param_1 + 0x87);
  iVar2 = FUN_180744cc0(param_1 + 0x82);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x84), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x86) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x434) = 0;
  }
  FUN_1808555a0(param_1 + 0x84);
  FUN_180744cc0(param_1 + 0x82);
  iVar2 = FUN_180744cc0(param_1 + 0x7d);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x7f), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x81) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x40c) = 0;
  }
  FUN_1808555a0(param_1 + 0x7f);
  FUN_180744cc0(param_1 + 0x7d);
  iVar2 = FUN_180744cc0(param_1 + 0x78);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x7a), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x7c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x3e4) = 0;
  }
  FUN_1808555a0(param_1 + 0x7a);
  FUN_180744cc0(param_1 + 0x78);
  iVar2 = FUN_180744cc0(param_1 + 0x73);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x75), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x77) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x3bc) = 0;
  }
  FUN_1808555a0(param_1 + 0x75);
  FUN_180744cc0(param_1 + 0x73);
  iVar2 = FUN_180744cc0(param_1 + 0x6e);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x70), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x72) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x394) = 0;
  }
  FUN_1808555a0(param_1 + 0x70);
  FUN_180744cc0(param_1 + 0x6e);
  iVar2 = FUN_180744cc0(param_1 + 0x69);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x6b), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x6d) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x36c) = 0;
  }
  FUN_1808555a0(param_1 + 0x6b);
  FUN_180744cc0(param_1 + 0x69);
  iVar2 = FUN_180744cc0(param_1 + 100);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x66), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x68) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x344) = 0;
  }
  FUN_1808555a0(param_1 + 0x66);
  FUN_180744cc0(param_1 + 100);
  iVar2 = FUN_180744cc0(param_1 + 0x5f);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x61), iVar2 == 0)) {
    *(int32_t *)(param_1 + 99) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x31c) = 0;
  }
  FUN_1808555a0(param_1 + 0x61);
  FUN_180744cc0(param_1 + 0x5f);
  iVar2 = FUN_180744cc0(param_1 + 0x5a);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x5c), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x5e) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x2f4) = 0;
  }
  FUN_1808555a0(param_1 + 0x5c);
  FUN_180744cc0(param_1 + 0x5a);
  iVar2 = FUN_180744cc0(param_1 + 0x55);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x57), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x59) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x2cc) = 0;
  }
  FUN_1808555a0(param_1 + 0x57);
  FUN_180744cc0(param_1 + 0x55);
  iVar2 = FUN_180744cc0(param_1 + 0x50);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x52), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x54) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x2a4) = 0;
  }
  FUN_1808555a0(param_1 + 0x52);
  FUN_180744cc0(param_1 + 0x50);
  iVar2 = FUN_180744cc0(param_1 + 0x4b);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x4d), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x4f) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x27c) = 0;
  }
  FUN_1808555a0(param_1 + 0x4d);
  FUN_180744cc0(param_1 + 0x4b);
  iVar2 = FUN_180744cc0(param_1 + 0x46);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x48), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x4a) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x254) = 0;
  }
  FUN_1808555a0(param_1 + 0x48);
  FUN_180744cc0(param_1 + 0x46);
  iVar2 = FUN_180744cc0(param_1 + 0x41);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x43), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x45) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x22c) = 0;
  }
  FUN_1808555a0(param_1 + 0x43);
  FUN_180744cc0(param_1 + 0x41);
  iVar2 = FUN_180744cc0(param_1 + 0x3c);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x3e), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x40) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x204) = 0;
  }
  FUN_1808555a0(param_1 + 0x3e);
  FUN_180744cc0(param_1 + 0x3c);
  iVar2 = FUN_180744cc0(param_1 + 0x37);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x39), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x3b) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1dc) = 0;
  }
  FUN_1808555a0(param_1 + 0x39);
  FUN_180744cc0(param_1 + 0x37);
  iVar2 = FUN_180744cc0(param_1 + 0x32);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x34), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x36) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1b4) = 0;
  }
  FUN_1808555a0(param_1 + 0x34);
  FUN_180744cc0(param_1 + 0x32);
  iVar2 = FUN_180744cc0(param_1 + 0x2d);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x2f), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x31) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x18c) = 0;
  }
  FUN_1808555a0(param_1 + 0x2f);
  FUN_180744cc0(param_1 + 0x2d);
  iVar2 = FUN_180744cc0(param_1 + 0x28);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x2a), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x2c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x164) = 0;
  }
  FUN_1808555a0(param_1 + 0x2a);
  FUN_180744cc0(param_1 + 0x28);
  iVar2 = FUN_180744cc0(param_1 + 0x23);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x25), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x27) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x13c) = 0;
  }
  FUN_1808555a0(param_1 + 0x25);
  FUN_180744cc0(param_1 + 0x23);
  iVar2 = FUN_180744cc0(param_1 + 0x1e);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x20), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x22) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x114) = 0;
  }
  FUN_1808555a0(param_1 + 0x20);
  FUN_180744cc0(param_1 + 0x1e);
  iVar2 = FUN_180744cc0(param_1 + 0x19);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x1b), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x1d) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0xec) = 0;
  }
  FUN_1808555a0(param_1 + 0x1b);
  FUN_180744cc0(param_1 + 0x19);
  iVar2 = FUN_180744cc0(param_1 + 0x14);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x16), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x18) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0xc4) = 0;
  }
  FUN_1808555a0(param_1 + 0x16);
  FUN_180744cc0(param_1 + 0x14);
  iVar2 = FUN_180744cc0(param_1 + 0xf);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x11), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x13) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x9c) = 0;
  }
  FUN_1808555a0(param_1 + 0x11);
  FUN_180744cc0(param_1 + 0xf);
  iVar2 = FUN_180744cc0(param_1 + 10);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0xc), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0xe) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x74) = 0;
  }
  FUN_1808555a0(param_1 + 0xc);
  FUN_180744cc0(param_1 + 10);
  iVar2 = FUN_180744cc0(param_1 + 5);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 7), iVar2 == 0)) {
    *(int32_t *)(param_1 + 9) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x4c) = 0;
  }
  FUN_1808555a0(param_1 + 7);
  FUN_180744cc0(param_1 + 5);
  iVar2 = FUN_180744cc0(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 2), iVar2 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_1808555a0(param_1 + 2);
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    uVar4 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar1 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  if ((0 < (int)uVar1) && (uVar3 = FUN_180747e10(param_1,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180872cc0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  
  iVar2 = FUN_180744cc0(param_1 + 0x28);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x2a), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x2c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x164) = 0;
  }
  FUN_1808555a0(param_1 + 0x2a);
  FUN_180744cc0(param_1 + 0x28);
  iVar2 = FUN_180744cc0(param_1 + 0x23);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x25), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x27) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x13c) = 0;
  }
  FUN_1808555a0(param_1 + 0x25);
  FUN_180744cc0(param_1 + 0x23);
  iVar2 = FUN_180744cc0(param_1 + 0x1e);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x20), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x22) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x114) = 0;
  }
  FUN_1808555a0(param_1 + 0x20);
  FUN_180744cc0(param_1 + 0x1e);
  iVar2 = FUN_180744cc0(param_1 + 0x19);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x1b), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x1d) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0xec) = 0;
  }
  FUN_1808555a0(param_1 + 0x1b);
  FUN_180744cc0(param_1 + 0x19);
  iVar2 = FUN_180744cc0(param_1 + 0x14);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x16), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x18) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0xc4) = 0;
  }
  FUN_1808555a0(param_1 + 0x16);
  FUN_180744cc0(param_1 + 0x14);
  iVar2 = FUN_180744cc0(param_1 + 0xf);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0x11), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0x13) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x9c) = 0;
  }
  FUN_1808555a0(param_1 + 0x11);
  FUN_180744cc0(param_1 + 0xf);
  iVar2 = FUN_180744cc0(param_1 + 10);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 0xc), iVar2 == 0)) {
    *(int32_t *)(param_1 + 0xe) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x74) = 0;
  }
  FUN_1808555a0(param_1 + 0xc);
  FUN_180744cc0(param_1 + 10);
  iVar2 = FUN_180744cc0(param_1 + 5);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 7), iVar2 == 0)) {
    *(int32_t *)(param_1 + 9) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x4c) = 0;
  }
  FUN_1808555a0(param_1 + 7);
  FUN_180744cc0(param_1 + 5);
  iVar2 = FUN_180744cc0(param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_1808555a0(param_1 + 2), iVar2 == 0)) {
    *(int32_t *)(param_1 + 4) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x24) = 0;
  }
  FUN_1808555a0(param_1 + 2);
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0) {
    if (0 < (int)param_1[1]) {
      return 0x1c;
    }
    if ((0 < (int)uVar4) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
    }
    *param_1 = 0;
    uVar4 = 0;
    *(int32_t *)((longlong)param_1 + 0xc) = 0;
  }
  *(int32_t *)(param_1 + 1) = 0;
  uVar1 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = uVar4;
  }
  if ((0 < (int)uVar1) && (uVar3 = FUN_180747e10(param_1,0), (int)uVar3 != 0)) {
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180872ef0(longlong param_1)
void FUN_180872ef0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(param_1 + 0x7c);
  uVar7 = 0;
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x78) < 1) {
      if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x70) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x70),
                      &UNK_180957f70,0x100,1);
      }
      *(uint64_t *)(param_1 + 0x70) = 0;
      *(int32_t *)(param_1 + 0x7c) = 0;
      uVar5 = 0;
      goto LAB_180872f61;
    }
  }
  else {
LAB_180872f61:
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
        memset(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8,0,(ulonglong)(uint)-iVar2 << 3);
      }
    }
    *(int32_t *)(param_1 + 0x78) = 0;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      FUN_180882f00(param_1 + 0x70,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x6c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x68) < 1) {
      if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x60) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x60),
                      &UNK_180957f70,0x100,1);
      }
      *(uint64_t *)(param_1 + 0x60) = 0;
      *(int32_t *)(param_1 + 0x6c) = 0;
      goto LAB_180872ff9;
    }
  }
  else {
LAB_180872ff9:
    uVar5 = *(uint *)(param_1 + 0x68);
    uVar6 = (ulonglong)uVar5;
    if ((int)uVar5 < 0) {
      lVar4 = (longlong)(int)-uVar5;
      if (0 < lVar4) {
        lVar3 = (longlong)(int)uVar5 * 0x30 + 0x2c + *(longlong *)(param_1 + 0x60);
        do {
          *(uint64_t *)(lVar3 + -0x2c) = 0;
          *(uint64_t *)(lVar3 + -0x24) = 0;
          *(uint64_t *)(lVar3 + -0x1c) = 0;
          *(uint64_t *)(lVar3 + -0x14) = 0;
          *(uint64_t *)(lVar3 + -0xc) = 0;
          *(uint64_t *)(lVar3 + -4) = 0;
          lVar3 = lVar3 + 0x30;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else if (0 < (int)uVar5) {
      lVar4 = *(longlong *)(param_1 + 0x60) + 0x20;
      do {
        FUN_180872480(lVar4);
        lVar4 = lVar4 + 0x30;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar5 = (int)*(uint *)(param_1 + 0x6c) >> 0x1f;
    *(int32_t *)(param_1 + 0x68) = 0;
    if (0 < (int)((*(uint *)(param_1 + 0x6c) ^ uVar5) - uVar5)) {
      FUN_180883520(param_1 + 0x60,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x5c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x58) < 1) {
      if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x50) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x50),
                      &UNK_180957f70,0x100,1);
      }
      *(uint64_t *)(param_1 + 0x50) = 0;
      *(int32_t *)(param_1 + 0x5c) = 0;
      uVar5 = 0;
      goto LAB_1808730e3;
    }
  }
  else {
LAB_1808730e3:
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
        memset(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x18,0,
               (ulonglong)(uint)-iVar2 * 0x18);
      }
    }
    *(int32_t *)(param_1 + 0x58) = 0;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      FUN_1808676f0(param_1 + 0x50,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x4c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x48) < 1) {
      if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x40) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x40),
                      &UNK_180957f70,0x100,1);
      }
      *(uint64_t *)(param_1 + 0x40) = 0;
      *(int32_t *)(param_1 + 0x4c) = 0;
      uVar5 = uVar7;
      goto LAB_18087317c;
    }
  }
  else {
LAB_18087317c:
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 4,0,(longlong)-iVar2 << 2);
    }
    *(int32_t *)(param_1 + 0x48) = 0;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      FUN_180747e10(param_1 + 0x40,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x3c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x38) < 1) {
      if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x30) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x30),
                      &UNK_180957f70,0x100,1);
      }
      *(uint64_t *)(param_1 + 0x30) = 0;
      *(int32_t *)(param_1 + 0x3c) = 0;
      uVar5 = uVar7;
      goto LAB_18087320a;
    }
  }
  else {
LAB_18087320a:
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x30),0,(longlong)-iVar2 << 4);
    }
    *(int32_t *)(param_1 + 0x38) = 0;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      FUN_180748010(param_1 + 0x30,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x2c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x28)) goto LAB_1808732e4;
    if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x20) != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x20),
                    &UNK_180957f70,0x100,1);
    }
    *(uint64_t *)(param_1 + 0x20) = 0;
    *(int32_t *)(param_1 + 0x2c) = 0;
    uVar5 = uVar7;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x6c + *(longlong *)(param_1 + 0x20),0,(ulonglong)(uint)-iVar2 * 0x6c
            );
    }
  }
  *(int32_t *)(param_1 + 0x28) = 0;
  if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    FUN_180882c70(param_1 + 0x20,0);
  }
LAB_1808732e4:
  uVar5 = *(uint *)(param_1 + 0x1c);
  plVar1 = (longlong *)(param_1 + 0x10);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      return;
    }
    if ((0 < (int)uVar5) && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*plVar1,&UNK_180957f70,0x100,1);
    }
    *plVar1 = 0;
    *(int32_t *)(param_1 + 0x1c) = 0;
    uVar5 = uVar7;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset(*plVar1 + (longlong)iVar2 * 0x28,0,(ulonglong)(uint)-iVar2 * 0x28);
    }
  }
  *(int32_t *)(param_1 + 0x18) = 0;
  if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    FUN_180882dd0(plVar1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180872f02(longlong param_1,uint64_t param_2,uint param_3)
void FUN_180872f02(longlong param_1,uint64_t param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong unaff_R14;
  
  uVar7 = (uint)unaff_R14;
  if ((int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x78) <= (int)uVar7) {
      if ((0 < (int)param_3) && (*(longlong *)(param_1 + 0x70) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x70),
                      &UNK_180957f70,0x100,1);
      }
      *(longlong *)(param_1 + 0x70) = unaff_R14;
      *(uint *)(param_1 + 0x7c) = uVar7;
      param_3 = uVar7;
      goto LAB_180872f61;
    }
  }
  else {
LAB_180872f61:
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
        memset(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8,0,(ulonglong)(uint)-iVar2 << 3);
      }
    }
    *(uint *)(param_1 + 0x78) = uVar7;
    if (0 < (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f))) {
      FUN_180882f00(param_1 + 0x70,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x6c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x68) <= (int)uVar7) {
      if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x60) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x60),
                      &UNK_180957f70,0x100,1);
      }
      *(longlong *)(param_1 + 0x60) = unaff_R14;
      *(uint *)(param_1 + 0x6c) = uVar7;
      goto LAB_180872ff9;
    }
  }
  else {
LAB_180872ff9:
    uVar5 = *(uint *)(param_1 + 0x68);
    uVar6 = (ulonglong)uVar5;
    if ((int)uVar5 < 0) {
      lVar4 = (longlong)(int)-uVar5;
      if (0 < lVar4) {
        lVar3 = (longlong)(int)uVar5 * 0x30 + 0x2c + *(longlong *)(param_1 + 0x60);
        do {
          *(longlong *)(lVar3 + -0x2c) = unaff_R14;
          *(longlong *)(lVar3 + -0x24) = unaff_R14;
          *(longlong *)(lVar3 + -0x1c) = unaff_R14;
          *(longlong *)(lVar3 + -0x14) = unaff_R14;
          *(longlong *)(lVar3 + -0xc) = unaff_R14;
          *(longlong *)(lVar3 + -4) = unaff_R14;
          lVar3 = lVar3 + 0x30;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else if (0 < (int)uVar5) {
      lVar4 = *(longlong *)(param_1 + 0x60) + 0x20;
      do {
        FUN_180872480(lVar4);
        lVar4 = lVar4 + 0x30;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar5 = (int)*(uint *)(param_1 + 0x6c) >> 0x1f;
    *(uint *)(param_1 + 0x68) = uVar7;
    if (0 < (int)((*(uint *)(param_1 + 0x6c) ^ uVar5) - uVar5)) {
      FUN_180883520(param_1 + 0x60,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x5c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x58) <= (int)uVar7) {
      if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x50) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x50),
                      &UNK_180957f70,0x100,1);
      }
      *(longlong *)(param_1 + 0x50) = unaff_R14;
      *(uint *)(param_1 + 0x5c) = uVar7;
      uVar5 = uVar7;
      goto LAB_1808730e3;
    }
  }
  else {
LAB_1808730e3:
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
        memset(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x18,0,
               (ulonglong)(uint)-iVar2 * 0x18);
      }
    }
    *(uint *)(param_1 + 0x58) = uVar7;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      FUN_1808676f0(param_1 + 0x50,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x4c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x48) <= (int)uVar7) {
      if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x40) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x40),
                      &UNK_180957f70,0x100,1);
      }
      *(longlong *)(param_1 + 0x40) = unaff_R14;
      *(uint *)(param_1 + 0x4c) = uVar7;
      uVar5 = uVar7;
      goto LAB_18087317c;
    }
  }
  else {
LAB_18087317c:
    iVar2 = *(int *)(param_1 + 0x48);
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 4,0,(longlong)-iVar2 << 2);
    }
    *(uint *)(param_1 + 0x48) = uVar7;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      FUN_180747e10(param_1 + 0x40,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x3c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if (*(int *)(param_1 + 0x38) <= (int)uVar7) {
      if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x30) != 0)) {
                    // WARNING: Subroutine does not return
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x30),
                      &UNK_180957f70,0x100,1);
      }
      *(longlong *)(param_1 + 0x30) = unaff_R14;
      *(uint *)(param_1 + 0x3c) = uVar7;
      uVar5 = uVar7;
      goto LAB_18087320a;
    }
  }
  else {
LAB_18087320a:
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x30),0,(longlong)-iVar2 << 4);
    }
    *(uint *)(param_1 + 0x38) = uVar7;
    if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      FUN_180748010(param_1 + 0x30,0);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x2c);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if ((int)uVar7 < *(int *)(param_1 + 0x28)) goto LAB_1808732e4;
    if ((0 < (int)uVar5) && (*(longlong *)(param_1 + 0x20) != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(param_1 + 0x20),
                    &UNK_180957f70,0x100,1);
    }
    *(longlong *)(param_1 + 0x20) = unaff_R14;
    *(uint *)(param_1 + 0x2c) = uVar7;
    uVar5 = uVar7;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset((longlong)iVar2 * 0x6c + *(longlong *)(param_1 + 0x20),0,(ulonglong)(uint)-iVar2 * 0x6c
            );
    }
  }
  *(uint *)(param_1 + 0x28) = uVar7;
  if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    FUN_180882c70(param_1 + 0x20,0);
  }
LAB_1808732e4:
  uVar5 = *(uint *)(param_1 + 0x1c);
  plVar1 = (longlong *)(param_1 + 0x10);
  if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) < 0) {
    if ((int)uVar7 < *(int *)(param_1 + 0x18)) {
      return;
    }
    if ((0 < (int)uVar5) && (*plVar1 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*plVar1,&UNK_180957f70,0x100,1);
    }
    *plVar1 = unaff_R14;
    *(uint *)(param_1 + 0x1c) = uVar7;
    uVar5 = uVar7;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 < 0) {
    if (iVar2 < 0) {
                    // WARNING: Subroutine does not return
      memset(*plVar1 + (longlong)iVar2 * 0x28,0,(ulonglong)(uint)-iVar2 * 0x28);
    }
  }
  *(uint *)(param_1 + 0x18) = uVar7;
  if (0 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    FUN_180882dd0(plVar1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



