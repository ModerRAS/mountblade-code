#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part172.c - 3 个函数

// 函数: void FUN_18076c270(longlong param_1,longlong param_2,uint *param_3)
void FUN_18076c270(longlong param_1,longlong param_2,uint *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  uint *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  int iVar22;
  
  plVar1 = (longlong *)(param_1 + 0x388);
  bVar12 = 0;
  puVar18 = (ulonglong *)(param_2 + -0x10);
  uVar10 = 0;
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x390) == 0)) {
    *(uint64_t *)(param_1 + 0x3a0) = 0xffffffffffffffff;
    *(uint64_t *)(param_1 + 0x3a8) = 0xffffffffffffffff;
    *(int32_t *)(param_1 + 0x3b0) = 0;
    if (*plVar1 == 0) {
      *plVar1 = 0x58585858;
      ui_system_config = 0;
    }
    *(uint64_t *)(param_1 + 0x390) = 0x1000;
    *(uint64_t *)(param_1 + 0x398) = 0x1000;
  }
  puVar16 = *(ulonglong **)(param_1 + 0x18);
  if (puVar18 < puVar16) {
    return;
  }
  uVar4 = *(ulonglong *)(param_2 + -8);
  if ((uVar4 & 2) == 0) {
    return;
  }
  uVar21 = uVar4 & 0xfffffffffffffffc;
  puVar2 = (ulonglong *)(uVar21 + (longlong)puVar18);
  if ((uVar4 & 1) == 0) {
    uVar4 = *puVar18;
    puVar18 = (ulonglong *)((longlong)puVar18 - uVar4);
    uVar21 = uVar21 + uVar4;
    if (puVar18 < puVar16) {
      return;
    }
    if (puVar18 == *(ulonglong **)(param_3 + 8)) {
      if ((puVar2[1] & 3) == 3) {
        *(ulonglong *)(param_3 + 2) = uVar21;
        puVar2[1] = puVar2[1] & 0xfffffffffffffffe;
        puVar18[1] = uVar21 | 1;
        *(ulonglong *)((longlong)puVar18 + uVar21) = uVar21;
        return;
      }
    }
    else if (uVar4 >> 3 < 0x20) {
      puVar15 = (ulonglong *)puVar18[2];
      puVar5 = (ulonglong *)puVar18[3];
      uVar13 = (uint)(uVar4 >> 3);
      if (puVar15 == puVar5) {
        *param_3 = *param_3 & ~(1 << (uVar13 & 0x1f));
      }
      else if (((puVar15 == (ulonglong *)(param_3 + ((ulonglong)(uVar13 * 2) + 8) * 2)) ||
               (puVar16 <= puVar15)) &&
              ((puVar5 == (ulonglong *)(param_3 + ((ulonglong)(uVar13 * 2) + 8) * 2) ||
               (puVar16 <= puVar5)))) {
        puVar15[3] = (ulonglong)puVar5;
        puVar5[2] = (ulonglong)puVar15;
      }
    }
    else {
      puVar15 = (ulonglong *)puVar18[3];
      uVar4 = puVar18[6];
      if (puVar15 == puVar18) {
        puVar5 = (ulonglong *)puVar18[5];
        puVar20 = puVar18 + 5;
        if ((ulonglong *)puVar18[5] == (ulonglong *)0x0) {
          puVar15 = (ulonglong *)puVar18[4];
          puVar5 = puVar15;
          puVar20 = puVar18 + 4;
          if (puVar15 == (ulonglong *)0x0) goto LAB_18076c3da;
        }
        do {
          do {
            puVar19 = puVar20;
            puVar15 = puVar5;
            puVar5 = (ulonglong *)puVar15[5];
            puVar20 = puVar15 + 5;
          } while ((ulonglong *)puVar15[5] != (ulonglong *)0x0);
          puVar5 = (ulonglong *)puVar15[4];
          puVar20 = puVar15 + 4;
        } while ((ulonglong *)puVar15[4] != (ulonglong *)0x0);
        if (puVar16 <= puVar19) {
          *puVar19 = 0;
        }
      }
      else {
        puVar5 = (ulonglong *)puVar18[2];
        if (puVar16 <= puVar5) {
          puVar5[3] = (ulonglong)puVar15;
          puVar15[2] = (ulonglong)puVar5;
        }
      }
LAB_18076c3da:
      if (uVar4 != 0) {
        if (puVar18 == *(ulonglong **)(param_3 + (ulonglong)(uint)puVar18[7] * 2 + 0x94)) {
          *(ulonglong **)(param_3 + (ulonglong)(uint)puVar18[7] * 2 + 0x94) = puVar15;
          if (puVar15 == (ulonglong *)0x0) {
            param_3[1] = param_3[1] & ~(1 << ((uint)puVar18[7] & 0x1f));
          }
          else {
LAB_18076c495:
            if (*(ulonglong **)(param_3 + 6) <= puVar15) {
              puVar15[6] = uVar4;
              uVar4 = puVar18[4];
              if ((uVar4 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar4)) {
                puVar15[4] = uVar4;
                *(ulonglong **)(uVar4 + 0x30) = puVar15;
              }
              uVar4 = puVar18[5];
              if ((uVar4 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar4)) {
                puVar15[5] = uVar4;
                *(ulonglong **)(uVar4 + 0x30) = puVar15;
              }
            }
          }
        }
        else {
          if (*(ulonglong *)(param_3 + 6) <= uVar4) {
            if (*(ulonglong **)(uVar4 + 0x20) == puVar18) {
              *(ulonglong **)(uVar4 + 0x20) = puVar15;
            }
            else {
              *(ulonglong **)(uVar4 + 0x28) = puVar15;
            }
          }
          if (puVar15 != (ulonglong *)0x0) goto LAB_18076c495;
        }
      }
    }
  }
  if (puVar2 <= puVar18) {
    return;
  }
  uVar4 = puVar2[1];
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((uVar4 & 2) != 0) {
    puVar2[1] = uVar4 & 0xfffffffffffffffe;
    puVar18[1] = uVar21 | 1;
    *(ulonglong *)(uVar21 + (longlong)puVar18) = uVar21;
    goto LAB_18076c6e6;
  }
  if (puVar2 == *(ulonglong **)(param_3 + 10)) {
    *(ulonglong *)(param_3 + 4) = *(longlong *)(param_3 + 4) + uVar21;
    *(ulonglong **)(param_3 + 10) = puVar18;
    puVar18[1] = *(ulonglong *)(param_3 + 4) | 1;
    if (puVar18 != *(ulonglong **)(param_3 + 8)) {
      return;
    }
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    return;
  }
  if (puVar2 == *(ulonglong **)(param_3 + 8)) {
    *(ulonglong *)(param_3 + 2) = *(longlong *)(param_3 + 2) + uVar21;
    uVar4 = *(ulonglong *)(param_3 + 2);
    *(ulonglong **)(param_3 + 8) = puVar18;
    puVar18[1] = uVar4 | 1;
    *(ulonglong *)(uVar4 + (longlong)puVar18) = uVar4;
    return;
  }
  uVar21 = uVar21 + (uVar4 & 0xfffffffffffffffc);
  if (uVar4 >> 3 < 0x20) {
    puVar6 = (uint *)puVar2[2];
    puVar17 = (uint *)puVar2[3];
    uVar13 = (uint)(uVar4 >> 3);
    if (puVar6 == puVar17) {
      *param_3 = *param_3 & ~(1 << (uVar13 & 0x1f));
    }
    else if (((puVar6 == param_3 + ((ulonglong)(uVar13 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar6)) &&
            ((puVar17 == param_3 + ((ulonglong)(uVar13 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar17)))) {
      *(uint **)(puVar6 + 6) = puVar17;
      *(uint **)(puVar17 + 4) = puVar6;
    }
  }
  else {
    puVar16 = (ulonglong *)puVar2[3];
    uVar4 = puVar2[6];
    if (puVar16 == puVar2) {
      puVar15 = (ulonglong *)puVar2[5];
      puVar5 = puVar2 + 5;
      if ((ulonglong *)puVar2[5] == (ulonglong *)0x0) {
        puVar16 = (ulonglong *)puVar2[4];
        puVar15 = puVar16;
        puVar5 = puVar2 + 4;
        if (puVar16 == (ulonglong *)0x0) goto LAB_18076c61b;
      }
      do {
        do {
          puVar20 = puVar5;
          puVar16 = puVar15;
          puVar15 = (ulonglong *)puVar16[5];
          puVar5 = puVar16 + 5;
        } while ((ulonglong *)puVar16[5] != (ulonglong *)0x0);
        puVar15 = (ulonglong *)puVar16[4];
        puVar5 = puVar16 + 4;
      } while ((ulonglong *)puVar16[4] != (ulonglong *)0x0);
      if (*(ulonglong **)(param_3 + 6) <= puVar20) {
        *puVar20 = 0;
      }
    }
    else {
      uVar7 = puVar2[2];
      if (*(ulonglong *)(param_3 + 6) <= uVar7) {
        *(ulonglong **)(uVar7 + 0x18) = puVar16;
        puVar16[2] = uVar7;
      }
    }
LAB_18076c61b:
    if (uVar4 != 0) {
      if (puVar2 == *(ulonglong **)(param_3 + (ulonglong)(uint)puVar2[7] * 2 + 0x94)) {
        *(ulonglong **)(param_3 + (ulonglong)(uint)puVar2[7] * 2 + 0x94) = puVar16;
        if (puVar16 == (ulonglong *)0x0) {
          param_3[1] = param_3[1] & ~(1 << ((uint)puVar2[7] & 0x1f));
        }
        else {
LAB_18076c66b:
          if (*(ulonglong **)(param_3 + 6) <= puVar16) {
            puVar16[6] = uVar4;
            uVar4 = puVar2[4];
            if ((uVar4 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar4)) {
              puVar16[4] = uVar4;
              *(ulonglong **)(uVar4 + 0x30) = puVar16;
            }
            uVar4 = puVar2[5];
            if ((uVar4 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar4)) {
              puVar16[5] = uVar4;
              *(ulonglong **)(uVar4 + 0x30) = puVar16;
            }
          }
        }
      }
      else {
        if (*(ulonglong *)(param_3 + 6) <= uVar4) {
          if (*(ulonglong **)(uVar4 + 0x20) == puVar2) {
            *(ulonglong **)(uVar4 + 0x20) = puVar16;
          }
          else {
            *(ulonglong **)(uVar4 + 0x28) = puVar16;
          }
        }
        if (puVar16 != (ulonglong *)0x0) goto LAB_18076c66b;
      }
    }
  }
  puVar18[1] = uVar21 | 1;
  *(ulonglong *)(uVar21 + (longlong)puVar18) = uVar21;
  if (puVar18 == *(ulonglong **)(param_3 + 8)) {
    *(ulonglong *)(param_3 + 2) = uVar21;
    return;
  }
LAB_18076c6e6:
  if (uVar21 >> 3 < 0x20) {
    uVar10 = (uint)(uVar21 >> 3);
    puVar6 = param_3 + ((ulonglong)(uVar10 * 2) + 8) * 2;
    puVar17 = puVar6;
    if ((*param_3 >> (uVar10 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar10 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar6 + 4)) {
      puVar17 = *(uint **)(puVar6 + 4);
    }
    *(ulonglong **)(puVar6 + 4) = puVar18;
    *(ulonglong **)(puVar17 + 6) = puVar18;
    puVar18[2] = (ulonglong)puVar17;
    puVar18[3] = (ulonglong)puVar6;
    return;
  }
  if (uVar21 >> 8 != 0) {
    if (uVar21 >> 8 < 0x10000) {
      iVar22 = (int)(uVar21 >> 8);
      uVar10 = iVar22 - 0x100U >> 0x10 & 8;
      iVar22 = iVar22 << (sbyte)uVar10;
      uVar13 = iVar22 - 0x1000U >> 0x10 & 4;
      iVar22 = iVar22 << (sbyte)uVar13;
      uVar14 = iVar22 - 0x4000U >> 0x10 & 2;
      iVar22 = (((uint)(iVar22 << (sbyte)uVar14) >> 0xf) - uVar14) - (uVar10 + uVar13);
      uVar10 = ((uint)(uVar21 >> ((char)iVar22 + 0x15U & 0x3f)) & 1) + (iVar22 + 0xe) * 2;
    }
    else {
      uVar10 = 0x1f;
    }
  }
  *(uint *)(puVar18 + 7) = uVar10;
  puVar18[5] = 0;
  puVar18[4] = 0;
  puVar16 = (ulonglong *)(param_3 + ((ulonglong)uVar10 + 0x4a) * 2);
  if ((param_3[1] >> (uVar10 & 0x1f) & 1) == 0) {
    param_3[1] = param_3[1] | 1 << (uVar10 & 0x1f);
    *puVar16 = (ulonglong)puVar18;
    puVar18[6] = (ulonglong)puVar16;
    puVar18[3] = (ulonglong)puVar18;
    puVar18[2] = (ulonglong)puVar18;
    return;
  }
  if (uVar10 != 0x1f) {
    bVar12 = 0x3f - ((char)(uVar10 >> 1) + '\x06');
  }
  uVar4 = *(ulonglong *)(*puVar16 + 8);
  uVar7 = *puVar16;
  lVar9 = uVar21 << (bVar12 & 0x3f);
  while( true ) {
    if ((uVar4 & 0xfffffffffffffffc) == uVar21) {
      if ((*(ulonglong *)(param_3 + 6) <= uVar7) &&
         (uVar4 = *(ulonglong *)(uVar7 + 0x10), *(ulonglong *)(param_3 + 6) <= uVar4)) {
        *(ulonglong **)(uVar4 + 0x18) = puVar18;
        *(ulonglong **)(uVar7 + 0x10) = puVar18;
        puVar18[2] = uVar4;
        puVar18[3] = uVar7;
        puVar18[6] = 0;
      }
      return;
    }
    lVar11 = 4 - (lVar9 >> 0x3f);
    puVar3 = (uint64_t *)(uVar7 + lVar11 * 8);
    uVar8 = *(ulonglong *)(uVar7 + lVar11 * 8);
    if (uVar8 == 0) break;
    uVar4 = *(ulonglong *)(uVar8 + 8);
    uVar7 = uVar8;
    lVar9 = lVar9 * 2;
  }
  if (puVar3 < *(uint64_t **)(param_3 + 6)) {
    return;
  }
  *puVar3 = puVar18;
  puVar18[6] = uVar7;
  puVar18[3] = (ulonglong)puVar18;
  puVar18[2] = (ulonglong)puVar18;
  return;
}





// 函数: void FUN_18076c370(ulonglong param_1,ulonglong param_2,uint *param_3,ulonglong param_4)
void FUN_18076c370(ulonglong param_1,ulonglong param_2,uint *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong unaff_RBP;
  longlong *unaff_RDI;
  int iVar14;
  ulonglong in_R11;
  
  uVar10 = *(ulonglong *)(param_2 + 0x30);
  if (param_1 == param_2) {
    uVar4 = *(ulonglong *)(param_2 + 0x28);
    plVar2 = (longlong *)(param_2 + 0x28);
    if (*(ulonglong *)(param_2 + 0x28) == 0) {
      param_1 = *(ulonglong *)(param_2 + 0x20);
      uVar4 = param_1;
      plVar2 = (longlong *)(param_2 + 0x20);
      if (param_1 == 0) goto LAB_18076c3da;
    }
    do {
      do {
        plVar13 = plVar2;
        param_1 = uVar4;
        uVar4 = *(ulonglong *)(param_1 + 0x28);
        plVar2 = (longlong *)(param_1 + 0x28);
      } while (*(ulonglong *)(param_1 + 0x28) != 0);
      uVar4 = *(ulonglong *)(param_1 + 0x20);
      plVar2 = (longlong *)(param_1 + 0x20);
    } while (*(ulonglong *)(param_1 + 0x20) != 0);
    if (unaff_RDI <= plVar13) {
      *plVar13 = unaff_RBP;
    }
  }
  else {
    plVar2 = *(longlong **)(param_2 + 0x10);
    if (unaff_RDI <= plVar2) {
      plVar2[3] = param_1;
      *(longlong **)(param_1 + 0x10) = plVar2;
    }
  }
LAB_18076c3da:
  if (uVar10 != 0) {
    if (param_2 == *(ulonglong *)(param_3 + (ulonglong)*(uint *)(param_2 + 0x38) * 2 + 0x94)) {
      *(ulonglong *)(param_3 + (ulonglong)*(uint *)(param_2 + 0x38) * 2 + 0x94) = param_1;
      if (param_1 == 0) {
        param_3[1] = param_3[1] & ~(1 << (*(uint *)(param_2 + 0x38) & 0x1f));
      }
      else {
LAB_18076c495:
        if (*(ulonglong *)(param_3 + 6) <= param_1) {
          *(ulonglong *)(param_1 + 0x30) = uVar10;
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
      }
    }
    else {
      if (*(ulonglong *)(param_3 + 6) <= uVar10) {
        if (*(ulonglong *)(uVar10 + 0x20) == param_2) {
          *(ulonglong *)(uVar10 + 0x20) = param_1;
        }
        else {
          *(ulonglong *)(uVar10 + 0x28) = param_1;
        }
      }
      if (param_1 != 0) goto LAB_18076c495;
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
    puVar3 = *(uint **)(in_R11 + 0x10);
    puVar11 = *(uint **)(in_R11 + 0x18);
    uVar6 = (uint)(uVar10 >> 3);
    if (puVar3 == puVar11) {
      *param_3 = *param_3 & ~(1 << (uVar6 & 0x1f));
    }
    else if (((puVar3 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2) ||
             (*(uint **)(param_3 + 6) <= puVar3)) &&
            ((puVar11 == param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2 ||
             (*(uint **)(param_3 + 6) <= puVar11)))) {
      *(uint **)(puVar3 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar3;
    }
  }
  else {
    uVar10 = *(ulonglong *)(in_R11 + 0x18);
    uVar4 = *(ulonglong *)(in_R11 + 0x30);
    if (uVar10 == in_R11) {
      uVar5 = *(ulonglong *)(in_R11 + 0x28);
      plVar2 = (longlong *)(in_R11 + 0x28);
      if (*(ulonglong *)(in_R11 + 0x28) == 0) {
        uVar10 = *(ulonglong *)(in_R11 + 0x20);
        uVar5 = uVar10;
        plVar2 = (longlong *)(in_R11 + 0x20);
        if (uVar10 == 0) goto LAB_18076c61b;
      }
      do {
        do {
          plVar13 = plVar2;
          uVar10 = uVar5;
          uVar5 = *(ulonglong *)(uVar10 + 0x28);
          plVar2 = (longlong *)(uVar10 + 0x28);
        } while (*(ulonglong *)(uVar10 + 0x28) != 0);
        uVar5 = *(ulonglong *)(uVar10 + 0x20);
        plVar2 = (longlong *)(uVar10 + 0x20);
      } while (*(ulonglong *)(uVar10 + 0x20) != 0);
      if (*(longlong **)(param_3 + 6) <= plVar13) {
        *plVar13 = unaff_RBP;
      }
    }
    else {
      uVar5 = *(ulonglong *)(in_R11 + 0x10);
      if (*(ulonglong *)(param_3 + 6) <= uVar5) {
        *(ulonglong *)(uVar5 + 0x18) = uVar10;
        *(ulonglong *)(uVar10 + 0x10) = uVar5;
      }
    }
LAB_18076c61b:
    if (uVar4 != 0) {
      if (in_R11 == *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94)) {
        *(ulonglong *)(param_3 + (ulonglong)*(uint *)(in_R11 + 0x38) * 2 + 0x94) = uVar10;
        if (uVar10 == 0) {
          param_3[1] = param_3[1] & ~(1 << (*(uint *)(in_R11 + 0x38) & 0x1f));
        }
        else {
LAB_18076c66b:
          if (*(ulonglong *)(param_3 + 6) <= uVar10) {
            *(ulonglong *)(uVar10 + 0x30) = uVar4;
            uVar4 = *(ulonglong *)(in_R11 + 0x20);
            if ((uVar4 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar4)) {
              *(ulonglong *)(uVar10 + 0x20) = uVar4;
              *(ulonglong *)(uVar4 + 0x30) = uVar10;
            }
            uVar4 = *(ulonglong *)(in_R11 + 0x28);
            if ((uVar4 != 0) && (*(ulonglong *)(param_3 + 6) <= uVar4)) {
              *(ulonglong *)(uVar10 + 0x28) = uVar4;
              *(ulonglong *)(uVar4 + 0x30) = uVar10;
            }
          }
        }
      }
      else {
        if (*(ulonglong *)(param_3 + 6) <= uVar4) {
          if (*(ulonglong *)(uVar4 + 0x20) == in_R11) {
            *(ulonglong *)(uVar4 + 0x20) = uVar10;
          }
          else {
            *(ulonglong *)(uVar4 + 0x28) = uVar10;
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
    puVar3 = param_3 + ((ulonglong)(uVar6 * 2) + 8) * 2;
    puVar11 = puVar3;
    if ((*param_3 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_3 = *param_3 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_3 + 6) <= *(uint **)(puVar3 + 4)) {
      puVar11 = *(uint **)(puVar3 + 4);
    }
    *(ulonglong *)(puVar3 + 4) = param_2;
    *(ulonglong *)(puVar11 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar11;
    *(uint **)(param_2 + 0x18) = puVar3;
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
  uVar4 = *puVar1;
  lVar12 = param_4 << ((byte)lVar12 & 0x3f);
  while( true ) {
    if ((uVar10 & 0xfffffffffffffffc) == param_4) {
      if ((*(ulonglong *)(param_3 + 6) <= uVar4) &&
         (uVar10 = *(ulonglong *)(uVar4 + 0x10), *(ulonglong *)(param_3 + 6) <= uVar10)) {
        *(ulonglong *)(uVar10 + 0x18) = param_2;
        *(ulonglong *)(uVar4 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar10;
        *(ulonglong *)(param_2 + 0x18) = uVar4;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
      return;
    }
    lVar7 = 4 - (lVar12 >> 0x3f);
    puVar1 = (ulonglong *)(uVar4 + lVar7 * 8);
    uVar5 = *(ulonglong *)(uVar4 + lVar7 * 8);
    if (uVar5 == 0) break;
    uVar10 = *(ulonglong *)(uVar5 + 8);
    uVar4 = uVar5;
    lVar12 = lVar12 * 2;
  }
  if (puVar1 < *(ulonglong **)(param_3 + 6)) {
    return;
  }
  *puVar1 = param_2;
  *(ulonglong *)(param_2 + 0x30) = uVar4;
  *(ulonglong *)(param_2 + 0x18) = param_2;
  *(ulonglong *)(param_2 + 0x10) = param_2;
  return;
}





// 函数: void FUN_18076c414(uint64_t param_1,ulonglong param_2,uint *param_3,ulonglong param_4)
void FUN_18076c414(uint64_t param_1,ulonglong param_2,uint *param_3,ulonglong param_4)

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





