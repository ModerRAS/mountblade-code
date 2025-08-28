#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part173.c - 4 个函数

// 函数: void FUN_18076c476(uint64_t param_1,uint64_t param_2,uint *param_3,uint64_t param_4)
void FUN_18076c476(uint64_t param_1,uint64_t param_2,uint *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint uVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint *puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  int iVar14;
  uint64_t in_R11;
  
  if (*(uint64_t *)(param_3 + 6) <= unaff_RSI) {
    if (*(uint64_t *)(unaff_RSI + 0x20) == param_2) {
      *(uint64_t *)(unaff_RSI + 0x20) = param_1;
    }
    else {
      *(uint64_t *)(unaff_RSI + 0x28) = param_1;
    }
  }
  if ((param_1 != 0) && (*(uint64_t *)(param_3 + 6) <= param_1)) {
    *(uint64_t *)(param_1 + 0x30) = unaff_RSI;
    uVar10 = *(uint64_t *)(param_2 + 0x20);
    if ((uVar10 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar10)) {
      *(uint64_t *)(param_1 + 0x20) = uVar10;
      *(uint64_t *)(uVar10 + 0x30) = param_1;
    }
    uVar10 = *(uint64_t *)(param_2 + 0x28);
    if ((uVar10 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar10)) {
      *(uint64_t *)(param_1 + 0x28) = uVar10;
      *(uint64_t *)(uVar10 + 0x30) = param_1;
    }
  }
  if (in_R11 <= param_2) {
    return;
  }
  uVar10 = *(uint64_t *)(in_R11 + 8);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if ((uVar10 & 2) != 0) {
    *(uint64_t *)(in_R11 + 8) = uVar10 & 0xfffffffffffffffe;
    *(uint64_t *)(param_2 + 8) = param_4 | 1;
    *(uint64_t *)(param_4 + param_2) = param_4;
    goto LAB_18076c6e6;
  }
  if (in_R11 == *(uint64_t *)(param_3 + 10)) {
    *(uint64_t *)(param_3 + 4) = *(int64_t *)(param_3 + 4) + param_4;
    *(uint64_t *)(param_3 + 10) = param_2;
    *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_3 + 4) | 1;
    if (param_2 != *(uint64_t *)(param_3 + 8)) {
      return;
    }
    *(int64_t *)(param_3 + 8) = unaff_RBP;
    *(int64_t *)(param_3 + 2) = unaff_RBP;
    return;
  }
  if (in_R11 == *(uint64_t *)(param_3 + 8)) {
    *(uint64_t *)(param_3 + 2) = *(int64_t *)(param_3 + 2) + param_4;
    uVar10 = *(uint64_t *)(param_3 + 2);
    *(uint64_t *)(param_3 + 8) = param_2;
    *(uint64_t *)(param_2 + 8) = uVar10 | 1;
    *(uint64_t *)(uVar10 + param_2) = uVar10;
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
    else if (((puVar2 == param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar2)) &&
            ((puVar11 == param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar11)))) {
      *(uint **)(puVar2 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar2;
    }
  }
  else {
    uVar10 = *(uint64_t *)(in_R11 + 0x18);
    uVar3 = *(uint64_t *)(in_R11 + 0x30);
    if (uVar10 == in_R11) {
      uVar4 = *(uint64_t *)(in_R11 + 0x28);
      plVar5 = (int64_t *)(in_R11 + 0x28);
      if (*(uint64_t *)(in_R11 + 0x28) == 0) {
        uVar10 = *(uint64_t *)(in_R11 + 0x20);
        uVar4 = uVar10;
        plVar5 = (int64_t *)(in_R11 + 0x20);
        if (uVar10 == 0) goto LAB_18076c61b;
      }
      do {
        do {
          plVar13 = plVar5;
          uVar10 = uVar4;
          uVar4 = *(uint64_t *)(uVar10 + 0x28);
          plVar5 = (int64_t *)(uVar10 + 0x28);
        } while (*(uint64_t *)(uVar10 + 0x28) != 0);
        uVar4 = *(uint64_t *)(uVar10 + 0x20);
        plVar5 = (int64_t *)(uVar10 + 0x20);
      } while (*(uint64_t *)(uVar10 + 0x20) != 0);
      if (*(int64_t **)(param_3 + 6) <= plVar13) {
        *plVar13 = unaff_RBP;
      }
    }
    else {
      uVar4 = *(uint64_t *)(in_R11 + 0x10);
      if (*(uint64_t *)(param_3 + 6) <= uVar4) {
        *(uint64_t *)(uVar4 + 0x18) = uVar10;
        *(uint64_t *)(uVar10 + 0x10) = uVar4;
      }
    }
LAB_18076c61b:
    if (uVar3 != 0) {
      if (in_R11 == *(uint64_t *)(param_3 + (uint64_t)*(uint *)(in_R11 + 0x38) * 2 + 0x94)) {
        *(uint64_t *)(param_3 + (uint64_t)*(uint *)(in_R11 + 0x38) * 2 + 0x94) = uVar10;
        if (uVar10 == 0) {
          param_3[1] = param_3[1] & ~(1 << (*(uint *)(in_R11 + 0x38) & 0x1f));
        }
        else {
LAB_18076c66b:
          if (*(uint64_t *)(param_3 + 6) <= uVar10) {
            *(uint64_t *)(uVar10 + 0x30) = uVar3;
            uVar3 = *(uint64_t *)(in_R11 + 0x20);
            if ((uVar3 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar3)) {
              *(uint64_t *)(uVar10 + 0x20) = uVar3;
              *(uint64_t *)(uVar3 + 0x30) = uVar10;
            }
            uVar3 = *(uint64_t *)(in_R11 + 0x28);
            if ((uVar3 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar3)) {
              *(uint64_t *)(uVar10 + 0x28) = uVar3;
              *(uint64_t *)(uVar3 + 0x30) = uVar10;
            }
          }
        }
      }
      else {
        if (*(uint64_t *)(param_3 + 6) <= uVar3) {
          if (*(uint64_t *)(uVar3 + 0x20) == in_R11) {
            *(uint64_t *)(uVar3 + 0x20) = uVar10;
          }
          else {
            *(uint64_t *)(uVar3 + 0x28) = uVar10;
          }
        }
        if (uVar10 != 0) goto LAB_18076c66b;
      }
    }
  }
  *(uint64_t *)(param_2 + 8) = param_4 | 1;
  *(uint64_t *)(param_4 + param_2) = param_4;
  if (param_2 == *(uint64_t *)(param_3 + 8)) {
    *(uint64_t *)(param_3 + 2) = param_4;
    return;
  }
LAB_18076c6e6:
  if (param_4 >> 3 < 0x20) {
    uVar6 = (uint)(param_4 >> 3);
    puVar2 = param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(uint64_t *)(puVar2 + 4) = param_2;
    *(uint64_t *)(puVar11 + 6) = param_2;
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
  *(int64_t *)(param_2 + 0x28) = unaff_RBP;
  *(int64_t *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (uint64_t *)(param_3 + ((uint64_t)uVar6 + 0x4a) * 2);
  if ((param_3[1] >> (uVar6 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar6 & 0x1f);
    *puVar1 = param_2;
    *(uint64_t **)(param_2 + 0x30) = puVar1;
    *(uint64_t *)(param_2 + 0x18) = param_2;
    *(uint64_t *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar12 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar12 = 0x3f - (uint64_t)((uVar6 >> 1) + 6);
  }
  uVar10 = *(uint64_t *)(*puVar1 + 8);
  uVar3 = *puVar1;
  lVar12 = param_4 << ((byte)lVar12 & 0x3f);
  while( true ) {
    if ((uVar10 & 0xfffffffffffffffc) == param_4) {
      if ((*(uint64_t *)(param_3 + 6) <= uVar3) &&
         (uVar10 = *(uint64_t *)(uVar3 + 0x10), *(uint64_t *)(param_3 + 6) <= uVar10)) {
        *(uint64_t *)(uVar10 + 0x18) = param_2;
        *(uint64_t *)(uVar3 + 0x10) = param_2;
        *(uint64_t *)(param_2 + 0x10) = uVar10;
        *(uint64_t *)(param_2 + 0x18) = uVar3;
        *(int64_t *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar12 >> 0x3f);
    puVar1 = (uint64_t *)(uVar3 + lVar7 * 8);
    uVar4 = *(uint64_t *)(uVar3 + lVar7 * 8);
    if (uVar4 == 0) break;
    uVar10 = *(uint64_t *)(uVar4 + 8);
    uVar3 = uVar4;
    lVar12 = lVar12 * 2;
  }
  if (puVar1 < *(uint64_t **)(param_3 + 6)) {
    return;
  }
  *puVar1 = param_2;
  *(uint64_t *)(param_2 + 0x30) = uVar3;
  *(uint64_t *)(param_2 + 0x18) = param_2;
  *(uint64_t *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c4de(uint64_t param_1,uint64_t param_2,uint *param_3,uint64_t param_4)
void FUN_18076c4de(uint64_t param_1,uint64_t param_2,uint *param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint uVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint *puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t unaff_RBP;
  int iVar14;
  uint64_t in_R11;
  
  if ((*(byte *)(in_R11 + 8) & 3) == 3) {
    *(uint64_t *)(param_3 + 2) = param_4;
    *(uint64_t *)(in_R11 + 8) = *(uint64_t *)(in_R11 + 8) & 0xfffffffffffffffe;
    *(uint64_t *)(param_2 + 8) = param_4 | 1;
    *(uint64_t *)(param_2 + param_4) = param_4;
    return;
  }
  if (in_R11 <= param_2) {
    return;
  }
  uVar10 = *(uint64_t *)(in_R11 + 8);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if ((uVar10 & 2) != 0) {
    *(uint64_t *)(in_R11 + 8) = uVar10 & 0xfffffffffffffffe;
    *(uint64_t *)(param_2 + 8) = param_4 | 1;
    *(uint64_t *)(param_4 + param_2) = param_4;
    goto LAB_18076c6e6;
  }
  if (in_R11 == *(uint64_t *)(param_3 + 10)) {
    *(uint64_t *)(param_3 + 4) = *(int64_t *)(param_3 + 4) + param_4;
    *(uint64_t *)(param_3 + 10) = param_2;
    *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_3 + 4) | 1;
    if (param_2 != *(uint64_t *)(param_3 + 8)) {
      return;
    }
    *(int64_t *)(param_3 + 8) = unaff_RBP;
    *(int64_t *)(param_3 + 2) = unaff_RBP;
    return;
  }
  if (in_R11 == *(uint64_t *)(param_3 + 8)) {
    *(uint64_t *)(param_3 + 2) = *(int64_t *)(param_3 + 2) + param_4;
    uVar10 = *(uint64_t *)(param_3 + 2);
    *(uint64_t *)(param_3 + 8) = param_2;
    *(uint64_t *)(param_2 + 8) = uVar10 | 1;
    *(uint64_t *)(uVar10 + param_2) = uVar10;
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
    else if (((puVar2 == param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar2)) &&
            ((puVar11 == param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar11)))) {
      *(uint **)(puVar2 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar2;
    }
  }
  else {
    uVar10 = *(uint64_t *)(in_R11 + 0x18);
    uVar3 = *(uint64_t *)(in_R11 + 0x30);
    if (uVar10 == in_R11) {
      uVar4 = *(uint64_t *)(in_R11 + 0x28);
      plVar5 = (int64_t *)(in_R11 + 0x28);
      if (*(uint64_t *)(in_R11 + 0x28) == 0) {
        uVar10 = *(uint64_t *)(in_R11 + 0x20);
        uVar4 = uVar10;
        plVar5 = (int64_t *)(in_R11 + 0x20);
        if (uVar10 == 0) goto LAB_18076c61b;
      }
      do {
        do {
          plVar13 = plVar5;
          uVar10 = uVar4;
          uVar4 = *(uint64_t *)(uVar10 + 0x28);
          plVar5 = (int64_t *)(uVar10 + 0x28);
        } while (*(uint64_t *)(uVar10 + 0x28) != 0);
        uVar4 = *(uint64_t *)(uVar10 + 0x20);
        plVar5 = (int64_t *)(uVar10 + 0x20);
      } while (*(uint64_t *)(uVar10 + 0x20) != 0);
      if (*(int64_t **)(param_3 + 6) <= plVar13) {
        *plVar13 = unaff_RBP;
      }
    }
    else {
      uVar4 = *(uint64_t *)(in_R11 + 0x10);
      if (*(uint64_t *)(param_3 + 6) <= uVar4) {
        *(uint64_t *)(uVar4 + 0x18) = uVar10;
        *(uint64_t *)(uVar10 + 0x10) = uVar4;
      }
    }
LAB_18076c61b:
    if (uVar3 != 0) {
      if (in_R11 == *(uint64_t *)(param_3 + (uint64_t)*(uint *)(in_R11 + 0x38) * 2 + 0x94)) {
        *(uint64_t *)(param_3 + (uint64_t)*(uint *)(in_R11 + 0x38) * 2 + 0x94) = uVar10;
        if (uVar10 == 0) {
          param_3[1] = param_3[1] & ~(1 << (*(uint *)(in_R11 + 0x38) & 0x1f));
        }
        else {
LAB_18076c66b:
          if (*(uint64_t *)(param_3 + 6) <= uVar10) {
            *(uint64_t *)(uVar10 + 0x30) = uVar3;
            uVar3 = *(uint64_t *)(in_R11 + 0x20);
            if ((uVar3 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar3)) {
              *(uint64_t *)(uVar10 + 0x20) = uVar3;
              *(uint64_t *)(uVar3 + 0x30) = uVar10;
            }
            uVar3 = *(uint64_t *)(in_R11 + 0x28);
            if ((uVar3 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar3)) {
              *(uint64_t *)(uVar10 + 0x28) = uVar3;
              *(uint64_t *)(uVar3 + 0x30) = uVar10;
            }
          }
        }
      }
      else {
        if (*(uint64_t *)(param_3 + 6) <= uVar3) {
          if (*(uint64_t *)(uVar3 + 0x20) == in_R11) {
            *(uint64_t *)(uVar3 + 0x20) = uVar10;
          }
          else {
            *(uint64_t *)(uVar3 + 0x28) = uVar10;
          }
        }
        if (uVar10 != 0) goto LAB_18076c66b;
      }
    }
  }
  *(uint64_t *)(param_2 + 8) = param_4 | 1;
  *(uint64_t *)(param_4 + param_2) = param_4;
  if (param_2 == *(uint64_t *)(param_3 + 8)) {
    *(uint64_t *)(param_3 + 2) = param_4;
    return;
  }
LAB_18076c6e6:
  if (param_4 >> 3 < 0x20) {
    uVar6 = (uint)(param_4 >> 3);
    puVar2 = param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(uint64_t *)(puVar2 + 4) = param_2;
    *(uint64_t *)(puVar11 + 6) = param_2;
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
  *(int64_t *)(param_2 + 0x28) = unaff_RBP;
  *(int64_t *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (uint64_t *)(param_3 + ((uint64_t)uVar6 + 0x4a) * 2);
  if ((param_3[1] >> (uVar6 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar6 & 0x1f);
    *puVar1 = param_2;
    *(uint64_t **)(param_2 + 0x30) = puVar1;
    *(uint64_t *)(param_2 + 0x18) = param_2;
    *(uint64_t *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar12 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar12 = 0x3f - (uint64_t)((uVar6 >> 1) + 6);
  }
  uVar10 = *(uint64_t *)(*puVar1 + 8);
  uVar3 = *puVar1;
  lVar12 = param_4 << ((byte)lVar12 & 0x3f);
  while( true ) {
    if ((uVar10 & 0xfffffffffffffffc) == param_4) {
      if ((*(uint64_t *)(param_3 + 6) <= uVar3) &&
         (uVar10 = *(uint64_t *)(uVar3 + 0x10), *(uint64_t *)(param_3 + 6) <= uVar10)) {
        *(uint64_t *)(uVar10 + 0x18) = param_2;
        *(uint64_t *)(uVar3 + 0x10) = param_2;
        *(uint64_t *)(param_2 + 0x10) = uVar10;
        *(uint64_t *)(param_2 + 0x18) = uVar3;
        *(int64_t *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar12 >> 0x3f);
    puVar1 = (uint64_t *)(uVar3 + lVar7 * 8);
    uVar4 = *(uint64_t *)(uVar3 + lVar7 * 8);
    if (uVar4 == 0) break;
    uVar10 = *(uint64_t *)(uVar4 + 8);
    uVar3 = uVar4;
    lVar12 = lVar12 * 2;
  }
  if (puVar1 < *(uint64_t **)(param_3 + 6)) {
    return;
  }
  *puVar1 = param_2;
  *(uint64_t *)(param_2 + 0x30) = uVar3;
  *(uint64_t *)(param_2 + 0x18) = param_2;
  *(uint64_t *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c518(uint64_t param_1,uint64_t param_2,uint *param_3,int64_t param_4)
void FUN_18076c518(uint64_t param_1,uint64_t param_2,uint *param_3,int64_t param_4)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint uVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint *puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t unaff_RBP;
  uint64_t uVar14;
  int iVar15;
  uint64_t in_R11;
  
  if (in_R11 == *(uint64_t *)(param_3 + 8)) {
    *(int64_t *)(param_3 + 2) = *(int64_t *)(param_3 + 2) + param_4;
    uVar14 = *(uint64_t *)(param_3 + 2);
    *(uint64_t *)(param_3 + 8) = param_2;
    *(uint64_t *)(param_2 + 8) = uVar14 | 1;
    *(uint64_t *)(uVar14 + param_2) = uVar14;
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
    else if (((puVar2 == param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar2)) &&
            ((puVar11 == param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar11)))) {
      *(uint **)(puVar2 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar2;
    }
    goto LAB_18076c6a3;
  }
  uVar10 = *(uint64_t *)(in_R11 + 0x18);
  uVar3 = *(uint64_t *)(in_R11 + 0x30);
  if (uVar10 == in_R11) {
    uVar4 = *(uint64_t *)(in_R11 + 0x28);
    plVar5 = (int64_t *)(in_R11 + 0x28);
    if (*(uint64_t *)(in_R11 + 0x28) == 0) {
      uVar10 = *(uint64_t *)(in_R11 + 0x20);
      uVar4 = uVar10;
      plVar5 = (int64_t *)(in_R11 + 0x20);
      if (uVar10 == 0) goto LAB_18076c61b;
    }
    do {
      do {
        plVar13 = plVar5;
        uVar10 = uVar4;
        uVar4 = *(uint64_t *)(uVar10 + 0x28);
        plVar5 = (int64_t *)(uVar10 + 0x28);
      } while (*(uint64_t *)(uVar10 + 0x28) != 0);
      uVar4 = *(uint64_t *)(uVar10 + 0x20);
      plVar5 = (int64_t *)(uVar10 + 0x20);
    } while (*(uint64_t *)(uVar10 + 0x20) != 0);
    if (*(int64_t **)(param_3 + 6) <= plVar13) {
      *plVar13 = unaff_RBP;
    }
  }
  else {
    uVar4 = *(uint64_t *)(in_R11 + 0x10);
    if (*(uint64_t *)(param_3 + 6) <= uVar4) {
      *(uint64_t *)(uVar4 + 0x18) = uVar10;
      *(uint64_t *)(uVar10 + 0x10) = uVar4;
    }
  }
LAB_18076c61b:
  if (uVar3 != 0) {
    if (in_R11 == *(uint64_t *)(param_3 + (uint64_t)*(uint *)(in_R11 + 0x38) * 2 + 0x94)) {
      *(uint64_t *)(param_3 + (uint64_t)*(uint *)(in_R11 + 0x38) * 2 + 0x94) = uVar10;
      if (uVar10 == 0) {
        param_3[1] = param_3[1] & ~(1 << (*(uint *)(in_R11 + 0x38) & 0x1f));
        goto LAB_18076c6a3;
      }
    }
    else {
      if (*(uint64_t *)(param_3 + 6) <= uVar3) {
        if (*(uint64_t *)(uVar3 + 0x20) == in_R11) {
          *(uint64_t *)(uVar3 + 0x20) = uVar10;
        }
        else {
          *(uint64_t *)(uVar3 + 0x28) = uVar10;
        }
      }
      if (uVar10 == 0) goto LAB_18076c6a3;
    }
    if (*(uint64_t *)(param_3 + 6) <= uVar10) {
      *(uint64_t *)(uVar10 + 0x30) = uVar3;
      uVar3 = *(uint64_t *)(in_R11 + 0x20);
      if ((uVar3 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar3)) {
        *(uint64_t *)(uVar10 + 0x20) = uVar3;
        *(uint64_t *)(uVar3 + 0x30) = uVar10;
      }
      uVar3 = *(uint64_t *)(in_R11 + 0x28);
      if ((uVar3 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar3)) {
        *(uint64_t *)(uVar10 + 0x28) = uVar3;
        *(uint64_t *)(uVar3 + 0x30) = uVar10;
      }
    }
  }
LAB_18076c6a3:
  *(uint64_t *)(param_2 + 8) = uVar14 | 1;
  *(uint64_t *)(uVar14 + param_2) = uVar14;
  if (param_2 == *(uint64_t *)(param_3 + 8)) {
    *(uint64_t *)(param_3 + 2) = uVar14;
    return;
  }
  if (uVar14 >> 3 < 0x20) {
    uVar6 = (uint)(uVar14 >> 3);
    puVar2 = param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(uint64_t *)(puVar2 + 4) = param_2;
    *(uint64_t *)(puVar11 + 6) = param_2;
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
  *(int64_t *)(param_2 + 0x28) = unaff_RBP;
  *(int64_t *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (uint64_t *)(param_3 + ((uint64_t)uVar6 + 0x4a) * 2);
  if ((param_3[1] >> (uVar6 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar6 & 0x1f);
    *puVar1 = param_2;
    *(uint64_t **)(param_2 + 0x30) = puVar1;
    *(uint64_t *)(param_2 + 0x18) = param_2;
    *(uint64_t *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar12 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar12 = 0x3f - (uint64_t)((uVar6 >> 1) + 6);
  }
  uVar10 = *(uint64_t *)(*puVar1 + 8);
  uVar3 = *puVar1;
  lVar12 = uVar14 << ((byte)lVar12 & 0x3f);
  while( true ) {
    if ((uVar10 & 0xfffffffffffffffc) == uVar14) {
      if ((*(uint64_t *)(param_3 + 6) <= uVar3) &&
         (uVar14 = *(uint64_t *)(uVar3 + 0x10), *(uint64_t *)(param_3 + 6) <= uVar14)) {
        *(uint64_t *)(uVar14 + 0x18) = param_2;
        *(uint64_t *)(uVar3 + 0x10) = param_2;
        *(uint64_t *)(param_2 + 0x10) = uVar14;
        *(uint64_t *)(param_2 + 0x18) = uVar3;
        *(int64_t *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar12 >> 0x3f);
    puVar1 = (uint64_t *)(uVar3 + lVar7 * 8);
    uVar4 = *(uint64_t *)(uVar3 + lVar7 * 8);
    if (uVar4 == 0) break;
    uVar10 = *(uint64_t *)(uVar4 + 8);
    uVar3 = uVar4;
    lVar12 = lVar12 * 2;
  }
  if (puVar1 < *(uint64_t **)(param_3 + 6)) {
    return;
  }
  *puVar1 = param_2;
  *(uint64_t *)(param_2 + 0x30) = uVar3;
  *(uint64_t *)(param_2 + 0x18) = param_2;
  *(uint64_t *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c54c(uint64_t param_1,uint64_t param_2,uint *param_3,int64_t param_4)
void FUN_18076c54c(uint64_t param_1,uint64_t param_2,uint *param_3,int64_t param_4)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint uVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint *puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  int64_t unaff_RBP;
  uint64_t uVar14;
  int iVar15;
  uint64_t in_R11;
  
  uVar14 = param_4 + (param_1 & 0xfffffffffffffffc);
  if (param_1 >> 3 < 0x20) {
    puVar2 = *(uint **)(in_R11 + 0x10);
    puVar11 = *(uint **)(in_R11 + 0x18);
    uVar6 = (uint)(param_1 >> 3);
    if (puVar2 == puVar11) {
      *param_3 = *param_3 & ~(1 << (uVar6 & 0x1f));
    }
    else if (((puVar2 == param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar2)) &&
            ((puVar11 == param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar11)))) {
      *(uint **)(puVar2 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar2;
    }
    goto LAB_18076c6a3;
  }
  uVar10 = *(uint64_t *)(in_R11 + 0x18);
  uVar3 = *(uint64_t *)(in_R11 + 0x30);
  if (uVar10 == in_R11) {
    uVar4 = *(uint64_t *)(in_R11 + 0x28);
    plVar5 = (int64_t *)(in_R11 + 0x28);
    if (*(uint64_t *)(in_R11 + 0x28) == 0) {
      uVar10 = *(uint64_t *)(in_R11 + 0x20);
      uVar4 = uVar10;
      plVar5 = (int64_t *)(in_R11 + 0x20);
      if (uVar10 == 0) goto LAB_18076c61b;
    }
    do {
      do {
        plVar13 = plVar5;
        uVar10 = uVar4;
        uVar4 = *(uint64_t *)(uVar10 + 0x28);
        plVar5 = (int64_t *)(uVar10 + 0x28);
      } while (*(uint64_t *)(uVar10 + 0x28) != 0);
      uVar4 = *(uint64_t *)(uVar10 + 0x20);
      plVar5 = (int64_t *)(uVar10 + 0x20);
    } while (*(uint64_t *)(uVar10 + 0x20) != 0);
    if (*(int64_t **)(param_3 + 6) <= plVar13) {
      *plVar13 = unaff_RBP;
    }
  }
  else {
    uVar4 = *(uint64_t *)(in_R11 + 0x10);
    if (*(uint64_t *)(param_3 + 6) <= uVar4) {
      *(uint64_t *)(uVar4 + 0x18) = uVar10;
      *(uint64_t *)(uVar10 + 0x10) = uVar4;
    }
  }
LAB_18076c61b:
  if (uVar3 != 0) {
    if (in_R11 == *(uint64_t *)(param_3 + (uint64_t)*(uint *)(in_R11 + 0x38) * 2 + 0x94)) {
      *(uint64_t *)(param_3 + (uint64_t)*(uint *)(in_R11 + 0x38) * 2 + 0x94) = uVar10;
      if (uVar10 == 0) {
        param_3[1] = param_3[1] & ~(1 << (*(uint *)(in_R11 + 0x38) & 0x1f));
        goto LAB_18076c6a3;
      }
    }
    else {
      if (*(uint64_t *)(param_3 + 6) <= uVar3) {
        if (*(uint64_t *)(uVar3 + 0x20) == in_R11) {
          *(uint64_t *)(uVar3 + 0x20) = uVar10;
        }
        else {
          *(uint64_t *)(uVar3 + 0x28) = uVar10;
        }
      }
      if (uVar10 == 0) goto LAB_18076c6a3;
    }
    if (*(uint64_t *)(param_3 + 6) <= uVar10) {
      *(uint64_t *)(uVar10 + 0x30) = uVar3;
      uVar3 = *(uint64_t *)(in_R11 + 0x20);
      if ((uVar3 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar3)) {
        *(uint64_t *)(uVar10 + 0x20) = uVar3;
        *(uint64_t *)(uVar3 + 0x30) = uVar10;
      }
      uVar3 = *(uint64_t *)(in_R11 + 0x28);
      if ((uVar3 != 0) && (*(uint64_t *)(param_3 + 6) <= uVar3)) {
        *(uint64_t *)(uVar10 + 0x28) = uVar3;
        *(uint64_t *)(uVar3 + 0x30) = uVar10;
      }
    }
  }
LAB_18076c6a3:
  *(uint64_t *)(param_2 + 8) = uVar14 | 1;
  *(uint64_t *)(uVar14 + param_2) = uVar14;
  if (param_2 == *(uint64_t *)(param_3 + 8)) {
    *(uint64_t *)(param_3 + 2) = uVar14;
    return;
  }
  if (uVar14 >> 3 < 0x20) {
    uVar6 = (uint)(uVar14 >> 3);
    puVar2 = param_3 + ((uint64_t)(uVar6 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(uint64_t *)(puVar2 + 4) = param_2;
    *(uint64_t *)(puVar11 + 6) = param_2;
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
  *(int64_t *)(param_2 + 0x28) = unaff_RBP;
  *(int64_t *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (uint64_t *)(param_3 + ((uint64_t)uVar6 + 0x4a) * 2);
  if ((param_3[1] >> (uVar6 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar6 & 0x1f);
    *puVar1 = param_2;
    *(uint64_t **)(param_2 + 0x30) = puVar1;
    *(uint64_t *)(param_2 + 0x18) = param_2;
    *(uint64_t *)(param_2 + 0x10) = param_2;
    return;
  }
  lVar12 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar12 = 0x3f - (uint64_t)((uVar6 >> 1) + 6);
  }
  uVar10 = *(uint64_t *)(*puVar1 + 8);
  uVar3 = *puVar1;
  lVar12 = uVar14 << ((byte)lVar12 & 0x3f);
  while( true ) {
    if ((uVar10 & 0xfffffffffffffffc) == uVar14) {
      if ((*(uint64_t *)(param_3 + 6) <= uVar3) &&
         (uVar14 = *(uint64_t *)(uVar3 + 0x10), *(uint64_t *)(param_3 + 6) <= uVar14)) {
        *(uint64_t *)(uVar14 + 0x18) = param_2;
        *(uint64_t *)(uVar3 + 0x10) = param_2;
        *(uint64_t *)(param_2 + 0x10) = uVar14;
        *(uint64_t *)(param_2 + 0x18) = uVar3;
        *(int64_t *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar12 >> 0x3f);
    puVar1 = (uint64_t *)(uVar3 + lVar7 * 8);
    uVar4 = *(uint64_t *)(uVar3 + lVar7 * 8);
    if (uVar4 == 0) break;
    uVar10 = *(uint64_t *)(uVar4 + 8);
    uVar3 = uVar4;
    lVar12 = lVar12 * 2;
  }
  if (puVar1 < *(uint64_t **)(param_3 + 6)) {
    return;
  }
  *puVar1 = param_2;
  *(uint64_t *)(param_2 + 0x30) = uVar3;
  *(uint64_t *)(param_2 + 0x18) = param_2;
  *(uint64_t *)(param_2 + 0x10) = param_2;
  return;
}





