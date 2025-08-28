#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part173.c - 4 个函数

// 函数: void FUN_18076c476(ulonglong param_1,ulonglong param_2,uint *param_3,ulonglong param_4)
void FUN_18076c476(ulonglong param_1,ulonglong param_2,uint *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  int iVar14;
  ulonglong in_R11;
  
  if (*(ulonglong *)(param_3 + 6) <= unaff_RSI) {
    if (*(ulonglong *)(unaff_RSI + 0x20) == param_2) {
      *(ulonglong *)(unaff_RSI + 0x20) = param_1;
    }
    else {
      *(ulonglong *)(unaff_RSI + 0x28) = param_1;
    }
  }
  if ((param_1 != 0) && (*(ulonglong *)(param_3 + 6) <= param_1)) {
    *(ulonglong *)(param_1 + 0x30) = unaff_RSI;
    uVar10 = *(ulonglong *)(param_2 + 0x20);
    if ((uVar10 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar10)) {
      *(ulonglong *)(param_1 + 0x20) = uVar10;
      *(ulonglong *)(uVar10 + 0x30) = param_1;
    }
    uVar10 = *(ulonglong *)(param_2 + 0x28);
    if ((uVar10 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar10)) {
      *(ulonglong *)(param_1 + 0x28) = uVar10;
      *(ulonglong *)(uVar10 + 0x30) = param_1;
    }
  }
  if (in_R11 <= param_2) {
    return;
  }
  uVar10 = *(ulonglong *)(in_R11 + 8);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if ((uVar10 & 2) != 0) {
    *(ulonglong *)(in_R11 + 8) = uVar10 & 0xfffffffffffffffe;
    *(ulonglong *)(param_2 + 8) = param_4 | 1;
    *(ulonglong *)(param_4 + param_2) = param_4;
    goto LAB_18076c6e6;
  }
  if (in_R11 == *(ulonglong *)(param_3 + 10)) {
    *(ulonglong *)(param_3 + 4) = *(longlong *)(param_3 + 4) + param_4;
    *(ulonglong *)(param_3 + 10) = param_2;
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_3 + 4) | 1;
    if (param_2 != *(ulonglong *)(param_3 + 8)) {
      return;
    }
    *(longlong *)(param_3 + 8) = unaff_RBP;
    *(longlong *)(param_3 + 2) = unaff_RBP;
    return;
  }
  if (in_R11 == *(ulonglong *)(param_3 + 8)) {
    *(ulonglong *)(param_3 + 2) = *(longlong *)(param_3 + 2) + param_4;
    uVar10 = *(ulonglong *)(param_3 + 2);
    *(ulonglong *)(param_3 + 8) = param_2;
    *(ulonglong *)(param_2 + 8) = uVar10 | 1;
    *(ulonglong *)(uVar10 + param_2) = uVar10;
    return;
  }
  param_4 = param_4 + (uVar10 & 0xfffffffffffffffc);
  if (uVar10 >> 3 < 0x20) {
    puVar2 = *(uint **)(in_R11 + 0x10);
    puVar11 = *(uint **)(in_R11 + 0x18);
    uVar6 = (uint)(uVar10 >> 3);
    if (puVar2 == puVar11) {
      *param_3 = *param_3 & ~(1 << (uVar6 & 0x1f));
    }
    else if (((puVar2 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar2)) &&
            ((puVar11 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar11)))) {
      *(uint **)(puVar2 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar2;
    }
  }
  else {
    uVar10 = *(ulonglong *)(in_R11 + 0x18);
    uVar3 = *(ulonglong *)(in_R11 + 0x30);
    if (uVar10 == in_R11) {
      uVar4 = *(ulonglong *)(in_R11 + 0x28);
      plVar5 = (longlong *)(in_R11 + 0x28);
      if (*(ulonglong *)(in_R11 + 0x28) == 0) {
        uVar10 = *(ulonglong *)(in_R11 + 0x20);
        uVar4 = uVar10;
        plVar5 = (longlong *)(in_R11 + 0x20);
        if (uVar10 == 0) goto LAB_18076c61b;
      }
      do {
        do {
          plVar13 = plVar5;
          uVar10 = uVar4;
          uVar4 = *(ulonglong *)(uVar10 + 0x28);
          plVar5 = (longlong *)(uVar10 + 0x28);
        } while (*(ulonglong *)(uVar10 + 0x28) != 0);
        uVar4 = *(ulonglong *)(uVar10 + 0x20);
        plVar5 = (longlong *)(uVar10 + 0x20);
      } while (*(ulonglong *)(uVar10 + 0x20) != 0);
      if (*(longlong **)(param_3 + 6) <= plVar13) {
        *plVar13 = unaff_RBP;
      }
    }
    else {
      uVar4 = *(ulonglong *)(in_R11 + 0x10);
      if (*(ulonglong *)(param_3 + 6) <= uVar4) {
        *(ulonglong *)(uVar4 + 0x18) = uVar10;
        *(ulonglong *)(uVar10 + 0x10) = uVar4;
      }
    }
LAB_18076c61b:
    if (uVar3 != 0) {
      if (in_R11 == *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94)) {
        *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94) = uVar10;
        if (uVar10 == 0) {
          param_3[1] = param_3[1] & ~(1 << (*(uint *)(in_R11 + 0x38) & 0x1f));
        }
        else {
LAB_18076c66b:
          if (*(ulonglong *)(param_3 + 6) <= uVar10) {
            *(ulonglong *)(uVar10 + 0x30) = uVar3;
            uVar3 = *(ulonglong *)(in_R11 + 0x20);
            if ((uVar3 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar3)) {
              *(ulonglong *)(uVar10 + 0x20) = uVar3;
              *(ulonglong *)(uVar3 + 0x30) = uVar10;
            }
            uVar3 = *(ulonglong *)(in_R11 + 0x28);
            if ((uVar3 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar3)) {
              *(ulonglong *)(uVar10 + 0x28) = uVar3;
              *(ulonglong *)(uVar3 + 0x30) = uVar10;
            }
          }
        }
      }
      else {
        if (*(ulonglong *)(param_3 + 6) <= uVar3) {
          if (*(ulonglong *)(uVar3 + 0x20) == in_R11) {
            *(ulonglong *)(uVar3 + 0x20) = uVar10;
          }
          else {
            *(ulonglong *)(uVar3 + 0x28) = uVar10;
          }
        }
        if (uVar10 != 0) goto LAB_18076c66b;
      }
    }
  }
  *(ulonglong *)(param_2 + 8) = param_4 | 1;
  *(ulonglong *)(param_4 + param_2) = param_4;
  if (param_2 == *(ulonglong *)(param_3 + 8)) {
    *(ulonglong *)(param_3 + 2) = param_4;
    return;
  }
LAB_18076c6e6:
  if (param_4 >> 3 < 0x20) {
    uVar6 = (uint)(param_4 >> 3);
    puVar2 = param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(ulonglong *)(puVar2 + 4) = param_2;
    *(ulonglong *)(puVar11 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar11;
    *(uint **)(param_2 + 0x18) = puVar2;
    return;
  }
  if (param_4 >> 8 == 0) {
    uVar6 = (uint)unaff_RBP;
  }
  else if (param_4 >> 8 < 0x10000) {
    iVar14 = (int)(param_4 >> 8);
    uVar6 = iVar14 - 0x100U >> 0x10 & 8;
    iVar14 = iVar14 << (sbyte)uVar6;
    uVar8 = iVar14 - 0x1000U >> 0x10 & 4;
    iVar14 = iVar14 << (sbyte)uVar8;
    uVar9 = iVar14 - 0x4000U >> 0x10 & 2;
    iVar14 = (((uint)(iVar14 << (sbyte)uVar9) >> 0xf) - uVar9) - (uVar6 + uVar8);
    uVar6 = ((uint)(param_4 >> ((char)iVar14 + 0x15U & 0x3f)) & 1) + (iVar14 + 0xe) * 2;
  }
  else {
    uVar6 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar6;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (ulonglong *)(param_3 + ((ulonglong)uVar6 + 0x4a) * 2);
  if ((param_3[1] >> (uVar6 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar6 & 0x1f);
    *puVar1 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar1;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar12 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar12 = 0x3f - (ulonglong)((uVar6 >> 1) + 6);
  }
  uVar10 = *(ulonglong *)(*puVar1 + 8);
  uVar3 = *puVar1;
  lVar12 = param_4 << ((byte)lVar12 & 0x3f);
  while( true ) {
    if ((uVar10 & 0xfffffffffffffffc) == param_4) {
      if ((*(ulonglong *)(param_3 + 6) <= uVar3) &&
         (uVar10 = *(ulonglong *)(uVar3 + 0x10), *(ulonglong *)(param_3 + 6) <= uVar10)) {
        *(ulonglong *)(uVar10 + 0x18) = param_2;
        *(ulonglong *)(uVar3 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar10;
        *(ulonglong *)(param_2 + 0x18) = uVar3;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar12 >> 0x3f);
    puVar1 = (ulonglong *)(uVar3 + lVar7 * 8);
    uVar4 = *(ulonglong *)(uVar3 + lVar7 * 8);
    if (uVar4 == 0) break;
    uVar10 = *(ulonglong *)(uVar4 + 8);
    uVar3 = uVar4;
    lVar12 = lVar12 * 2;
  }
  if (puVar1 < *(ulonglong **)(param_3 + 6)) {
    return;
  }
  *puVar1 = param_2;
  *(ulonglong *)(param_2 + 0x30) = uVar3;
  *(ulonglong *)(param_2 + 0x18) = param_2;
  *(ulonglong *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c4de(uint64_t param_1,ulonglong param_2,uint *param_3,ulonglong param_4)
void FUN_18076c4de(uint64_t param_1,ulonglong param_2,uint *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong unaff_RBP;
  int iVar14;
  ulonglong in_R11;
  
  if ((*(byte *)(in_R11 + 8) & 3) == 3) {
    *(ulonglong *)(param_3 + 2) = param_4;
    *(ulonglong *)(in_R11 + 8) = *(ulonglong *)(in_R11 + 8) & 0xfffffffffffffffe;
    *(ulonglong *)(param_2 + 8) = param_4 | 1;
    *(ulonglong *)(param_2 + param_4) = param_4;
    return;
  }
  if (in_R11 <= param_2) {
    return;
  }
  uVar10 = *(ulonglong *)(in_R11 + 8);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if ((uVar10 & 2) != 0) {
    *(ulonglong *)(in_R11 + 8) = uVar10 & 0xfffffffffffffffe;
    *(ulonglong *)(param_2 + 8) = param_4 | 1;
    *(ulonglong *)(param_4 + param_2) = param_4;
    goto LAB_18076c6e6;
  }
  if (in_R11 == *(ulonglong *)(param_3 + 10)) {
    *(ulonglong *)(param_3 + 4) = *(longlong *)(param_3 + 4) + param_4;
    *(ulonglong *)(param_3 + 10) = param_2;
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_3 + 4) | 1;
    if (param_2 != *(ulonglong *)(param_3 + 8)) {
      return;
    }
    *(longlong *)(param_3 + 8) = unaff_RBP;
    *(longlong *)(param_3 + 2) = unaff_RBP;
    return;
  }
  if (in_R11 == *(ulonglong *)(param_3 + 8)) {
    *(ulonglong *)(param_3 + 2) = *(longlong *)(param_3 + 2) + param_4;
    uVar10 = *(ulonglong *)(param_3 + 2);
    *(ulonglong *)(param_3 + 8) = param_2;
    *(ulonglong *)(param_2 + 8) = uVar10 | 1;
    *(ulonglong *)(uVar10 + param_2) = uVar10;
    return;
  }
  param_4 = param_4 + (uVar10 & 0xfffffffffffffffc);
  if (uVar10 >> 3 < 0x20) {
    puVar2 = *(uint **)(in_R11 + 0x10);
    puVar11 = *(uint **)(in_R11 + 0x18);
    uVar6 = (uint)(uVar10 >> 3);
    if (puVar2 == puVar11) {
      *param_3 = *param_3 & ~(1 << (uVar6 & 0x1f));
    }
    else if (((puVar2 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar2)) &&
            ((puVar11 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar11)))) {
      *(uint **)(puVar2 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar2;
    }
  }
  else {
    uVar10 = *(ulonglong *)(in_R11 + 0x18);
    uVar3 = *(ulonglong *)(in_R11 + 0x30);
    if (uVar10 == in_R11) {
      uVar4 = *(ulonglong *)(in_R11 + 0x28);
      plVar5 = (longlong *)(in_R11 + 0x28);
      if (*(ulonglong *)(in_R11 + 0x28) == 0) {
        uVar10 = *(ulonglong *)(in_R11 + 0x20);
        uVar4 = uVar10;
        plVar5 = (longlong *)(in_R11 + 0x20);
        if (uVar10 == 0) goto LAB_18076c61b;
      }
      do {
        do {
          plVar13 = plVar5;
          uVar10 = uVar4;
          uVar4 = *(ulonglong *)(uVar10 + 0x28);
          plVar5 = (longlong *)(uVar10 + 0x28);
        } while (*(ulonglong *)(uVar10 + 0x28) != 0);
        uVar4 = *(ulonglong *)(uVar10 + 0x20);
        plVar5 = (longlong *)(uVar10 + 0x20);
      } while (*(ulonglong *)(uVar10 + 0x20) != 0);
      if (*(longlong **)(param_3 + 6) <= plVar13) {
        *plVar13 = unaff_RBP;
      }
    }
    else {
      uVar4 = *(ulonglong *)(in_R11 + 0x10);
      if (*(ulonglong *)(param_3 + 6) <= uVar4) {
        *(ulonglong *)(uVar4 + 0x18) = uVar10;
        *(ulonglong *)(uVar10 + 0x10) = uVar4;
      }
    }
LAB_18076c61b:
    if (uVar3 != 0) {
      if (in_R11 == *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94)) {
        *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94) = uVar10;
        if (uVar10 == 0) {
          param_3[1] = param_3[1] & ~(1 << (*(uint *)(in_R11 + 0x38) & 0x1f));
        }
        else {
LAB_18076c66b:
          if (*(ulonglong *)(param_3 + 6) <= uVar10) {
            *(ulonglong *)(uVar10 + 0x30) = uVar3;
            uVar3 = *(ulonglong *)(in_R11 + 0x20);
            if ((uVar3 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar3)) {
              *(ulonglong *)(uVar10 + 0x20) = uVar3;
              *(ulonglong *)(uVar3 + 0x30) = uVar10;
            }
            uVar3 = *(ulonglong *)(in_R11 + 0x28);
            if ((uVar3 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar3)) {
              *(ulonglong *)(uVar10 + 0x28) = uVar3;
              *(ulonglong *)(uVar3 + 0x30) = uVar10;
            }
          }
        }
      }
      else {
        if (*(ulonglong *)(param_3 + 6) <= uVar3) {
          if (*(ulonglong *)(uVar3 + 0x20) == in_R11) {
            *(ulonglong *)(uVar3 + 0x20) = uVar10;
          }
          else {
            *(ulonglong *)(uVar3 + 0x28) = uVar10;
          }
        }
        if (uVar10 != 0) goto LAB_18076c66b;
      }
    }
  }
  *(ulonglong *)(param_2 + 8) = param_4 | 1;
  *(ulonglong *)(param_4 + param_2) = param_4;
  if (param_2 == *(ulonglong *)(param_3 + 8)) {
    *(ulonglong *)(param_3 + 2) = param_4;
    return;
  }
LAB_18076c6e6:
  if (param_4 >> 3 < 0x20) {
    uVar6 = (uint)(param_4 >> 3);
    puVar2 = param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(ulonglong *)(puVar2 + 4) = param_2;
    *(ulonglong *)(puVar11 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar11;
    *(uint **)(param_2 + 0x18) = puVar2;
    return;
  }
  if (param_4 >> 8 == 0) {
    uVar6 = (uint)unaff_RBP;
  }
  else if (param_4 >> 8 < 0x10000) {
    iVar14 = (int)(param_4 >> 8);
    uVar6 = iVar14 - 0x100U >> 0x10 & 8;
    iVar14 = iVar14 << (sbyte)uVar6;
    uVar8 = iVar14 - 0x1000U >> 0x10 & 4;
    iVar14 = iVar14 << (sbyte)uVar8;
    uVar9 = iVar14 - 0x4000U >> 0x10 & 2;
    iVar14 = (((uint)(iVar14 << (sbyte)uVar9) >> 0xf) - uVar9) - (uVar6 + uVar8);
    uVar6 = ((uint)(param_4 >> ((char)iVar14 + 0x15U & 0x3f)) & 1) + (iVar14 + 0xe) * 2;
  }
  else {
    uVar6 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar6;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (ulonglong *)(param_3 + ((ulonglong)uVar6 + 0x4a) * 2);
  if ((param_3[1] >> (uVar6 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar6 & 0x1f);
    *puVar1 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar1;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar12 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar12 = 0x3f - (ulonglong)((uVar6 >> 1) + 6);
  }
  uVar10 = *(ulonglong *)(*puVar1 + 8);
  uVar3 = *puVar1;
  lVar12 = param_4 << ((byte)lVar12 & 0x3f);
  while( true ) {
    if ((uVar10 & 0xfffffffffffffffc) == param_4) {
      if ((*(ulonglong *)(param_3 + 6) <= uVar3) &&
         (uVar10 = *(ulonglong *)(uVar3 + 0x10), *(ulonglong *)(param_3 + 6) <= uVar10)) {
        *(ulonglong *)(uVar10 + 0x18) = param_2;
        *(ulonglong *)(uVar3 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar10;
        *(ulonglong *)(param_2 + 0x18) = uVar3;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar12 >> 0x3f);
    puVar1 = (ulonglong *)(uVar3 + lVar7 * 8);
    uVar4 = *(ulonglong *)(uVar3 + lVar7 * 8);
    if (uVar4 == 0) break;
    uVar10 = *(ulonglong *)(uVar4 + 8);
    uVar3 = uVar4;
    lVar12 = lVar12 * 2;
  }
  if (puVar1 < *(ulonglong **)(param_3 + 6)) {
    return;
  }
  *puVar1 = param_2;
  *(ulonglong *)(param_2 + 0x30) = uVar3;
  *(ulonglong *)(param_2 + 0x18) = param_2;
  *(ulonglong *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c518(ulonglong param_1,ulonglong param_2,uint *param_3,longlong param_4)
void FUN_18076c518(ulonglong param_1,ulonglong param_2,uint *param_3,longlong param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong unaff_RBP;
  ulonglong uVar14;
  int iVar15;
  ulonglong in_R11;
  
  if (in_R11 == *(ulonglong *)(param_3 + 8)) {
    *(longlong *)(param_3 + 2) = *(longlong *)(param_3 + 2) + param_4;
    uVar14 = *(ulonglong *)(param_3 + 2);
    *(ulonglong *)(param_3 + 8) = param_2;
    *(ulonglong *)(param_2 + 8) = uVar14 | 1;
    *(ulonglong *)(uVar14 + param_2) = uVar14;
    return;
  }
  uVar14 = param_4 + (param_1 & 0xfffffffffffffffc);
  if (param_1 >> 3 < 0x20) {
    puVar2 = *(uint **)(in_R11 + 0x10);
    puVar11 = *(uint **)(in_R11 + 0x18);
    uVar6 = (uint)(param_1 >> 3);
    if (puVar2 == puVar11) {
      *param_3 = *param_3 & ~(1 << (uVar6 & 0x1f));
    }
    else if (((puVar2 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar2)) &&
            ((puVar11 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar11)))) {
      *(uint **)(puVar2 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar2;
    }
    goto LAB_18076c6a3;
  }
  uVar10 = *(ulonglong *)(in_R11 + 0x18);
  uVar3 = *(ulonglong *)(in_R11 + 0x30);
  if (uVar10 == in_R11) {
    uVar4 = *(ulonglong *)(in_R11 + 0x28);
    plVar5 = (longlong *)(in_R11 + 0x28);
    if (*(ulonglong *)(in_R11 + 0x28) == 0) {
      uVar10 = *(ulonglong *)(in_R11 + 0x20);
      uVar4 = uVar10;
      plVar5 = (longlong *)(in_R11 + 0x20);
      if (uVar10 == 0) goto LAB_18076c61b;
    }
    do {
      do {
        plVar13 = plVar5;
        uVar10 = uVar4;
        uVar4 = *(ulonglong *)(uVar10 + 0x28);
        plVar5 = (longlong *)(uVar10 + 0x28);
      } while (*(ulonglong *)(uVar10 + 0x28) != 0);
      uVar4 = *(ulonglong *)(uVar10 + 0x20);
      plVar5 = (longlong *)(uVar10 + 0x20);
    } while (*(ulonglong *)(uVar10 + 0x20) != 0);
    if (*(longlong **)(param_3 + 6) <= plVar13) {
      *plVar13 = unaff_RBP;
    }
  }
  else {
    uVar4 = *(ulonglong *)(in_R11 + 0x10);
    if (*(ulonglong *)(param_3 + 6) <= uVar4) {
      *(ulonglong *)(uVar4 + 0x18) = uVar10;
      *(ulonglong *)(uVar10 + 0x10) = uVar4;
    }
  }
LAB_18076c61b:
  if (uVar3 != 0) {
    if (in_R11 == *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94)) {
      *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94) = uVar10;
      if (uVar10 == 0) {
        param_3[1] = param_3[1] & ~(1 << (*(uint *)(in_R11 + 0x38) & 0x1f));
        goto LAB_18076c6a3;
      }
    }
    else {
      if (*(ulonglong *)(param_3 + 6) <= uVar3) {
        if (*(ulonglong *)(uVar3 + 0x20) == in_R11) {
          *(ulonglong *)(uVar3 + 0x20) = uVar10;
        }
        else {
          *(ulonglong *)(uVar3 + 0x28) = uVar10;
        }
      }
      if (uVar10 == 0) goto LAB_18076c6a3;
    }
    if (*(ulonglong *)(param_3 + 6) <= uVar10) {
      *(ulonglong *)(uVar10 + 0x30) = uVar3;
      uVar3 = *(ulonglong *)(in_R11 + 0x20);
      if ((uVar3 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar3)) {
        *(ulonglong *)(uVar10 + 0x20) = uVar3;
        *(ulonglong *)(uVar3 + 0x30) = uVar10;
      }
      uVar3 = *(ulonglong *)(in_R11 + 0x28);
      if ((uVar3 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar3)) {
        *(ulonglong *)(uVar10 + 0x28) = uVar3;
        *(ulonglong *)(uVar3 + 0x30) = uVar10;
      }
    }
  }
LAB_18076c6a3:
  *(ulonglong *)(param_2 + 8) = uVar14 | 1;
  *(ulonglong *)(uVar14 + param_2) = uVar14;
  if (param_2 == *(ulonglong *)(param_3 + 8)) {
    *(ulonglong *)(param_3 + 2) = uVar14;
    return;
  }
  if (uVar14 >> 3 < 0x20) {
    uVar6 = (uint)(uVar14 >> 3);
    puVar2 = param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(ulonglong *)(puVar2 + 4) = param_2;
    *(ulonglong *)(puVar11 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar11;
    *(uint **)(param_2 + 0x18) = puVar2;
    return;
  }
  if (uVar14 >> 8 == 0) {
    uVar6 = (uint)unaff_RBP;
  }
  else if (uVar14 >> 8 < 0x10000) {
    iVar15 = (int)(uVar14 >> 8);
    uVar6 = iVar15 - 0x100U >> 0x10 & 8;
    iVar15 = iVar15 << (sbyte)uVar6;
    uVar8 = iVar15 - 0x1000U >> 0x10 & 4;
    iVar15 = iVar15 << (sbyte)uVar8;
    uVar9 = iVar15 - 0x4000U >> 0x10 & 2;
    iVar15 = (((uint)(iVar15 << (sbyte)uVar9) >> 0xf) - uVar9) - (uVar6 + uVar8);
    uVar6 = ((uint)(uVar14 >> ((char)iVar15 + 0x15U & 0x3f)) & 1) + (iVar15 + 0xe) * 2;
  }
  else {
    uVar6 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar6;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (ulonglong *)(param_3 + ((ulonglong)uVar6 + 0x4a) * 2);
  if ((param_3[1] >> (uVar6 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar6 & 0x1f);
    *puVar1 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar1;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar12 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar12 = 0x3f - (ulonglong)((uVar6 >> 1) + 6);
  }
  uVar10 = *(ulonglong *)(*puVar1 + 8);
  uVar3 = *puVar1;
  lVar12 = uVar14 << ((byte)lVar12 & 0x3f);
  while( true ) {
    if ((uVar10 & 0xfffffffffffffffc) == uVar14) {
      if ((*(ulonglong *)(param_3 + 6) <= uVar3) &&
         (uVar14 = *(ulonglong *)(uVar3 + 0x10), *(ulonglong *)(param_3 + 6) <= uVar14)) {
        *(ulonglong *)(uVar14 + 0x18) = param_2;
        *(ulonglong *)(uVar3 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar14;
        *(ulonglong *)(param_2 + 0x18) = uVar3;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar12 >> 0x3f);
    puVar1 = (ulonglong *)(uVar3 + lVar7 * 8);
    uVar4 = *(ulonglong *)(uVar3 + lVar7 * 8);
    if (uVar4 == 0) break;
    uVar10 = *(ulonglong *)(uVar4 + 8);
    uVar3 = uVar4;
    lVar12 = lVar12 * 2;
  }
  if (puVar1 < *(ulonglong **)(param_3 + 6)) {
    return;
  }
  *puVar1 = param_2;
  *(ulonglong *)(param_2 + 0x30) = uVar3;
  *(ulonglong *)(param_2 + 0x18) = param_2;
  *(ulonglong *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c54c(ulonglong param_1,ulonglong param_2,uint *param_3,longlong param_4)
void FUN_18076c54c(ulonglong param_1,ulonglong param_2,uint *param_3,longlong param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong unaff_RBP;
  ulonglong uVar14;
  int iVar15;
  ulonglong in_R11;
  
  uVar14 = param_4 + (param_1 & 0xfffffffffffffffc);
  if (param_1 >> 3 < 0x20) {
    puVar2 = *(uint **)(in_R11 + 0x10);
    puVar11 = *(uint **)(in_R11 + 0x18);
    uVar6 = (uint)(param_1 >> 3);
    if (puVar2 == puVar11) {
      *param_3 = *param_3 & ~(1 << (uVar6 & 0x1f));
    }
    else if (((puVar2 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar2)) &&
            ((puVar11 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar11)))) {
      *(uint **)(puVar2 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar2;
    }
    goto LAB_18076c6a3;
  }
  uVar10 = *(ulonglong *)(in_R11 + 0x18);
  uVar3 = *(ulonglong *)(in_R11 + 0x30);
  if (uVar10 == in_R11) {
    uVar4 = *(ulonglong *)(in_R11 + 0x28);
    plVar5 = (longlong *)(in_R11 + 0x28);
    if (*(ulonglong *)(in_R11 + 0x28) == 0) {
      uVar10 = *(ulonglong *)(in_R11 + 0x20);
      uVar4 = uVar10;
      plVar5 = (longlong *)(in_R11 + 0x20);
      if (uVar10 == 0) goto LAB_18076c61b;
    }
    do {
      do {
        plVar13 = plVar5;
        uVar10 = uVar4;
        uVar4 = *(ulonglong *)(uVar10 + 0x28);
        plVar5 = (longlong *)(uVar10 + 0x28);
      } while (*(ulonglong *)(uVar10 + 0x28) != 0);
      uVar4 = *(ulonglong *)(uVar10 + 0x20);
      plVar5 = (longlong *)(uVar10 + 0x20);
    } while (*(ulonglong *)(uVar10 + 0x20) != 0);
    if (*(longlong **)(param_3 + 6) <= plVar13) {
      *plVar13 = unaff_RBP;
    }
  }
  else {
    uVar4 = *(ulonglong *)(in_R11 + 0x10);
    if (*(ulonglong *)(param_3 + 6) <= uVar4) {
      *(ulonglong *)(uVar4 + 0x18) = uVar10;
      *(ulonglong *)(uVar10 + 0x10) = uVar4;
    }
  }
LAB_18076c61b:
  if (uVar3 != 0) {
    if (in_R11 == *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94)) {
      *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94) = uVar10;
      if (uVar10 == 0) {
        param_3[1] = param_3[1] & ~(1 << (*(uint *)(in_R11 + 0x38) & 0x1f));
        goto LAB_18076c6a3;
      }
    }
    else {
      if (*(ulonglong *)(param_3 + 6) <= uVar3) {
        if (*(ulonglong *)(uVar3 + 0x20) == in_R11) {
          *(ulonglong *)(uVar3 + 0x20) = uVar10;
        }
        else {
          *(ulonglong *)(uVar3 + 0x28) = uVar10;
        }
      }
      if (uVar10 == 0) goto LAB_18076c6a3;
    }
    if (*(ulonglong *)(param_3 + 6) <= uVar10) {
      *(ulonglong *)(uVar10 + 0x30) = uVar3;
      uVar3 = *(ulonglong *)(in_R11 + 0x20);
      if ((uVar3 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar3)) {
        *(ulonglong *)(uVar10 + 0x20) = uVar3;
        *(ulonglong *)(uVar3 + 0x30) = uVar10;
      }
      uVar3 = *(ulonglong *)(in_R11 + 0x28);
      if ((uVar3 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar3)) {
        *(ulonglong *)(uVar10 + 0x28) = uVar3;
        *(ulonglong *)(uVar3 + 0x30) = uVar10;
      }
    }
  }
LAB_18076c6a3:
  *(ulonglong *)(param_2 + 8) = uVar14 | 1;
  *(ulonglong *)(uVar14 + param_2) = uVar14;
  if (param_2 == *(ulonglong *)(param_3 + 8)) {
    *(ulonglong *)(param_3 + 2) = uVar14;
    return;
  }
  if (uVar14 >> 3 < 0x20) {
    uVar6 = (uint)(uVar14 >> 3);
    puVar2 = param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(ulonglong *)(puVar2 + 4) = param_2;
    *(ulonglong *)(puVar11 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar11;
    *(uint **)(param_2 + 0x18) = puVar2;
    return;
  }
  if (uVar14 >> 8 == 0) {
    uVar6 = (uint)unaff_RBP;
  }
  else if (uVar14 >> 8 < 0x10000) {
    iVar15 = (int)(uVar14 >> 8);
    uVar6 = iVar15 - 0x100U >> 0x10 & 8;
    iVar15 = iVar15 << (sbyte)uVar6;
    uVar8 = iVar15 - 0x1000U >> 0x10 & 4;
    iVar15 = iVar15 << (sbyte)uVar8;
    uVar9 = iVar15 - 0x4000U >> 0x10 & 2;
    iVar15 = (((uint)(iVar15 << (sbyte)uVar9) >> 0xf) - uVar9) - (uVar6 + uVar8);
    uVar6 = ((uint)(uVar14 >> ((char)iVar15 + 0x15U & 0x3f)) & 1) + (iVar15 + 0xe) * 2;
  }
  else {
    uVar6 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar6;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (ulonglong *)(param_3 + ((ulonglong)uVar6 + 0x4a) * 2);
  if ((param_3[1] >> (uVar6 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar6 & 0x1f);
    *puVar1 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar1;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar12 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar12 = 0x3f - (ulonglong)((uVar6 >> 1) + 6);
  }
  uVar10 = *(ulonglong *)(*puVar1 + 8);
  uVar3 = *puVar1;
  lVar12 = uVar14 << ((byte)lVar12 & 0x3f);
  while( true ) {
    if ((uVar10 & 0xfffffffffffffffc) == uVar14) {
      if ((*(ulonglong *)(param_3 + 6) <= uVar3) &&
         (uVar14 = *(ulonglong *)(uVar3 + 0x10), *(ulonglong *)(param_3 + 6) <= uVar14)) {
        *(ulonglong *)(uVar14 + 0x18) = param_2;
        *(ulonglong *)(uVar3 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar14;
        *(ulonglong *)(param_2 + 0x18) = uVar3;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar12 >> 0x3f);
    puVar1 = (ulonglong *)(uVar3 + lVar7 * 8);
    uVar4 = *(ulonglong *)(uVar3 + lVar7 * 8);
    if (uVar4 == 0) break;
    uVar10 = *(ulonglong *)(uVar4 + 8);
    uVar3 = uVar4;
    lVar12 = lVar12 * 2;
  }
  if (puVar1 < *(ulonglong **)(param_3 + 6)) {
    return;
  }
  *puVar1 = param_2;
  *(ulonglong *)(param_2 + 0x30) = uVar3;
  *(ulonglong *)(param_2 + 0x18) = param_2;
  *(ulonglong *)(param_2 + 0x10) = param_2;
  return;
}





