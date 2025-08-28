#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part174.c - 4 个函数

// 函数: void FUN_18076c6cf(ulonglong param_1,ulonglong param_2,uint *param_3,ulonglong param_4)
void FUN_18076c6cf(ulonglong param_1,ulonglong param_2,uint *param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  longlong unaff_RBP;
  int iVar12;
  longlong in_R11;
  
  *(ulonglong *)(in_R11 + 8) = param_1 & 0xfffffffffffffffe;
  *(ulonglong *)(param_2 + 8) = param_4 | 1;
  *(ulonglong *)(param_4 + param_2) = param_4;
  if (param_4 >> 3 < 0x20) {
    uVar6 = (uint)(param_4 >> 3);
    puVar1 = param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2;
    puVar10 = puVar1;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar1 + 4)) {
      puVar10 = *(uint **)(puVar1 + 4);
    }
    *(ulonglong *)(puVar1 + 4) = param_2;
    *(ulonglong *)(puVar10 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar10;
    *(uint **)(param_2 + 0x18) = puVar1;
    return;
  }
  if (param_4 >> 8 == 0) {
    uVar6 = (uint)unaff_RBP;
  }
  else if (param_4 >> 8 < 0x10000) {
    iVar12 = (int)(param_4 >> 8);
    uVar6 = iVar12 - 0x100U >> 0x10 & 8;
    iVar12 = iVar12 << (sbyte)uVar6;
    uVar8 = iVar12 - 0x1000U >> 0x10 & 4;
    iVar12 = iVar12 << (sbyte)uVar8;
    uVar9 = iVar12 - 0x4000U >> 0x10 & 2;
    iVar12 = (((uint)(iVar12 << (sbyte)uVar9) >> 0xf) - uVar9) - (uVar6 + uVar8);
    uVar6 = ((uint)(param_4 >> ((char)iVar12 + 0x15U & 0x3f)) & 1) + (iVar12 + 0xe) * 2;
  }
  else {
    uVar6 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar6;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar2 = (ulonglong *)(param_3 + ((ulonglong)uVar6 + 0x4a) * 2);
  if ((param_3[1] >> (uVar6 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar6 & 0x1f);
    *puVar2 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar2;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar11 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar11 = 0x3f - (ulonglong)((uVar6 >> 1) + 6);
  }
  uVar3 = *(ulonglong *)(*puVar2 + 8);
  uVar5 = *puVar2;
  lVar11 = param_4 << ((byte)lVar11 & 0x3f);
  while( true ) {
    if ((uVar3 & 0xfffffffffffffffc) == param_4) {
      if ((*(ulonglong *)(param_3 + 6) <= uVar5) &&
         (uVar3 = *(ulonglong *)(uVar5 + 0x10), *(ulonglong *)(param_3 + 6) <= uVar3)) {
        *(ulonglong *)(uVar3 + 0x18) = param_2;
        *(ulonglong *)(uVar5 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar3;
        *(ulonglong *)(param_2 + 0x18) = uVar5;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar11 >> 0x3f);
    puVar2 = (ulonglong *)(uVar5 + lVar7 * 8);
    uVar4 = *(ulonglong *)(uVar5 + lVar7 * 8);
    if (uVar4 == 0) break;
    uVar3 = *(ulonglong *)(uVar4 + 8);
    uVar5 = uVar4;
    lVar11 = lVar11 * 2;
  }
  if (puVar2 < *(ulonglong **)(param_3 + 6)) {
    return;
  }
  *puVar2 = param_2;
  *(ulonglong *)(param_2 + 0x30) = uVar5;
  *(ulonglong *)(param_2 + 0x18) = param_2;
  *(ulonglong *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c743(uint64_t param_1,ulonglong param_2,longlong param_3,ulonglong param_4)
void FUN_18076c743(uint64_t param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong unaff_RBP;
  int iVar10;
  
  if (param_4 >> 8 == 0) {
    uVar5 = (uint)unaff_RBP;
  }
  else if (param_4 >> 8 < 0x10000) {
    iVar10 = (int)(param_4 >> 8);
    uVar5 = iVar10 - 0x100U >> 0x10 & 8;
    iVar10 = iVar10 << (sbyte)uVar5;
    uVar7 = iVar10 - 0x1000U >> 0x10 & 4;
    iVar10 = iVar10 << (sbyte)uVar7;
    uVar8 = iVar10 - 0x4000U >> 0x10 & 2;
    iVar10 = (((uint)(iVar10 << (sbyte)uVar8) >> 0xf) - uVar8) - (uVar5 + uVar7);
    uVar5 = ((uint)(param_4 >> ((char)iVar10 + 0x15U & 0x3f)) & 1) + (iVar10 + 0xe) * 2;
  }
  else {
    uVar5 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar5;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (ulonglong *)(param_3 + ((ulonglong)uVar5 + 0x4a) * 8);
  if ((*(uint *)(param_3 + 4) >> (uVar5 & 0x1f) & 1) == 0) {
    *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1 << (uVar5 & 0x1f);
    *puVar1 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar1;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar9 = unaff_RBP;
  if (uVar5 != 0x1f) {
    lVar9 = 0x3f - (ulonglong)((uVar5 >> 1) + 6);
  }
  uVar2 = *(ulonglong *)(*puVar1 + 8);
  uVar4 = *puVar1;
  lVar9 = param_4 << ((byte)lVar9 & 0x3f);
  while( true ) {
    if ((uVar2 & 0xfffffffffffffffc) == param_4) {
      if ((*(ulonglong *)(param_3 + 0x18) <= uVar4) &&
         (uVar2 = *(ulonglong *)(uVar4 + 0x10), *(ulonglong *)(param_3 + 0x18) <= uVar2)) {
        *(ulonglong *)(uVar2 + 0x18) = param_2;
        *(ulonglong *)(uVar4 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar2;
        *(ulonglong *)(param_2 + 0x18) = uVar4;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar6 = 4 - (lVar9 >> 0x3f);
    puVar1 = (ulonglong *)(uVar4 + lVar6 * 8);
    uVar3 = *(ulonglong *)(uVar4 + lVar6 * 8);
    if (uVar3 == 0) break;
    uVar2 = *(ulonglong *)(uVar3 + 8);
    uVar4 = uVar3;
    lVar9 = lVar9 * 2;
  }
  if (puVar1 < *(ulonglong **)(param_3 + 0x18)) {
    return;
  }
  *puVar1 = param_2;
  *(ulonglong *)(param_2 + 0x30) = uVar4;
  *(ulonglong *)(param_2 + 0x18) = param_2;
  *(ulonglong *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c7fd(uint param_1,longlong param_2,longlong param_3,ulonglong param_4)
void FUN_18076c7fd(uint param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RBP;
  ulonglong *in_R10;
  
  lVar6 = unaff_RBP;
  if (param_1 != 0x1f) {
    lVar6 = 0x3f - (ulonglong)((param_1 >> 1) + 6);
  }
  uVar2 = *(ulonglong *)(*in_R10 + 8);
  uVar4 = *in_R10;
  lVar6 = param_4 << ((byte)lVar6 & 0x3f);
  while( true ) {
    if ((uVar2 & 0xfffffffffffffffc) == param_4) {
      if ((*(ulonglong *)(param_3 + 0x18) <= uVar4) &&
         (uVar2 = *(ulonglong *)(uVar4 + 0x10), *(ulonglong *)(param_3 + 0x18) <= uVar2)) {
        *(longlong *)(uVar2 + 0x18) = param_2;
        *(longlong *)(uVar4 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar2;
        *(ulonglong *)(param_2 + 0x18) = uVar4;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar5 = 4 - (lVar6 >> 0x3f);
    plVar1 = (longlong *)(uVar4 + lVar5 * 8);
    uVar3 = *(ulonglong *)(uVar4 + lVar5 * 8);
    if (uVar3 == 0) break;
    uVar2 = *(ulonglong *)(uVar3 + 8);
    uVar4 = uVar3;
    lVar6 = lVar6 * 2;
  }
  if (plVar1 < *(longlong **)(param_3 + 0x18)) {
    return;
  }
  *plVar1 = param_2;
  *(ulonglong *)(param_2 + 0x30) = uVar4;
  *(longlong *)(param_2 + 0x18) = param_2;
  *(longlong *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c88f(void)
void FUN_18076c88f(void)

{
  return;
}





