#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part175_sub002_sub002.c - 1 个函数

// 函数: void FUN_18076c894(longlong *param_1,longlong param_2,longlong param_3)
void FUN_18076c894(longlong *param_1,longlong param_2,longlong param_3)

{
  uint64_t in_R10;
  
  if (*(longlong **)(param_3 + 0x18) <= param_1) {
    *param_1 = param_2;
    *(uint64_t *)(param_2 + 0x30) = in_R10;
    *(longlong *)(param_2 + 0x18) = param_2;
    *(longlong *)(param_2 + 0x10) = param_2;
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18076c8c0(uint *param_1,ulonglong param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  
  puVar1 = param_1 + 0xe2;
  uVar18 = 0xffffffffffffffff;
  if ((puVar1 != (uint *)0x0) && (*(longlong *)(param_1 + 0xe4) == 0)) {
    param_1[0xe8] = 0xffffffff;
    param_1[0xe9] = 0xffffffff;
    param_1[0xea] = 0xffffffff;
    param_1[0xeb] = 0xffffffff;
    param_1[0xec] = 0;
    if (*(longlong *)puVar1 == 0) {
      puVar1[0] = 0x58585858;
      puVar1[1] = 0;
      ui_system_config = 0;
    }
    param_1[0xe4] = 0x1000;
    param_1[0xe5] = 0;
    param_1[0xe6] = 0x1000;
    param_1[0xe7] = 0;
  }
  if (param_2 < 0xe9) {
    if (param_2 < 0x17) {
      uVar18 = 0x20;
    }
    else {
      uVar18 = param_2 + 0x17 & 0xfffffffffffffff0;
    }
    uVar20 = *param_1;
    bVar5 = (byte)(uVar18 >> 3);
    bVar4 = bVar5 & 0x1f;
    uVar6 = uVar20 >> bVar4;
    if ((uVar6 & 3) != 0) {
      uVar6 = (int)(uVar18 >> 3) + (~uVar6 & 1);
      lVar8 = (ulonglong)(uVar6 * 2) + 8;
      lVar2 = *(longlong *)(param_1 + lVar8 * 2 + 4);
      puVar1 = param_1 + lVar8 * 2;
      puVar13 = *(uint **)(lVar2 + 0x10);
      if (puVar1 == puVar13) {
        *param_1 = uVar20 & ~(1 << (uVar6 & 0x1f));
      }
      else if (*(uint **)(param_1 + 6) <= puVar13) {
        *(uint **)(puVar1 + 4) = puVar13;
        *(uint **)(puVar13 + 6) = puVar1;
      }
      *(ulonglong *)(lVar2 + 8) = (ulonglong)(uVar6 * 8) | 3;
      puVar23 = (ulonglong *)((ulonglong)(uVar6 * 8) + 8 + lVar2);
      *puVar23 = *puVar23 | 1;
      return lVar2 + 0x10;
    }
    if (*(ulonglong *)(param_1 + 2) < uVar18) {
      if (uVar20 >> bVar4 != 0) {
        uVar6 = (uVar6 & 0xfffffffe) << (bVar5 & 0x1f);
        uVar14 = (-uVar6 & uVar6) - 1;
        uVar7 = uVar14 >> 0xc & 0x10;
        uVar14 = uVar14 >> (sbyte)uVar7;
        uVar10 = uVar14 >> 5 & 8;
        uVar14 = uVar14 >> (sbyte)uVar10;
        uVar11 = uVar14 >> 2 & 4;
        uVar14 = uVar14 >> (sbyte)uVar11;
        uVar12 = uVar14 >> 1 & 2;
        uVar14 = uVar14 >> (sbyte)uVar12;
        uVar6 = uVar14 >> 1 & 1;
        uVar6 = (uVar14 >> (sbyte)uVar6) + uVar7 + uVar10 + uVar11 + uVar12 + uVar6;
        lVar8 = (ulonglong)(uVar6 * 2) + 8;
        puVar1 = param_1 + lVar8 * 2;
        lVar8 = *(longlong *)(param_1 + lVar8 * 2 + 4);
        puVar13 = *(uint **)(lVar8 + 0x10);
        if (puVar1 == puVar13) {
          *param_1 = uVar20 & ~(1 << (uVar6 & 0x1f));
        }
        else if (*(uint **)(param_1 + 6) <= puVar13) {
          *(uint **)(puVar1 + 4) = puVar13;
          *(uint **)(puVar13 + 6) = puVar1;
        }
        uVar6 = uVar6 * 8;
        uVar15 = uVar6 - uVar18;
        if (0x1f < uVar15) {
          lVar2 = lVar8 + uVar18;
          *(ulonglong *)(lVar8 + 8) = uVar18 | 3;
          *(ulonglong *)(lVar2 + 8) = uVar15 | 1;
          *(ulonglong *)(lVar2 + uVar15) = uVar15;
          if (*(ulonglong *)(param_1 + 2) != 0) {
            lVar3 = *(longlong *)(param_1 + 8);
            uVar20 = (uint)(*(ulonglong *)(param_1 + 2) >> 3);
            puVar1 = param_1 + ((ulonglong)(uVar20 * 2) + 8) * 2;
            puVar13 = puVar1;
            if ((*param_1 >> (uVar20 & 0x1f) & 1) == 0) {
              *param_1 = *param_1 | 1 << (uVar20 & 0x1f);
            }
            else if (*(uint **)(param_1 + 6) <= *(uint **)(puVar1 + 4)) {
              puVar13 = *(uint **)(puVar1 + 4);
            }
            *(longlong *)(puVar1 + 4) = lVar3;
            *(longlong *)(puVar13 + 6) = lVar3;
            *(uint **)(lVar3 + 0x10) = puVar13;
            *(uint **)(lVar3 + 0x18) = puVar1;
          }
          *(ulonglong *)(param_1 + 2) = uVar15;
          *(longlong *)(param_1 + 8) = lVar2;
          return lVar8 + 0x10;
        }
        *(ulonglong *)(lVar8 + 8) = (ulonglong)uVar6 | 3;
        puVar23 = (ulonglong *)((ulonglong)uVar6 + 8 + lVar8);
        *puVar23 = *puVar23 | 1;
        return lVar8 + 0x10;
      }
      if ((param_1[1] != 0) && (lVar8 = FUN_18076d990(param_1,uVar18), lVar8 != 0)) {
        return lVar8;
      }
    }
  }
  else if (((param_2 < 0xffffffffffffff80) &&
           (uVar18 = param_2 + 0x17 & 0xfffffffffffffff0, param_1[1] != 0)) &&
          (lVar8 = FUN_18076d490(param_1,uVar18), lVar8 != 0)) {
    return lVar8;
  }
  uVar15 = *(ulonglong *)(param_1 + 2);
  if (uVar18 <= uVar15) {
    lVar8 = *(longlong *)(param_1 + 8);
    uVar16 = uVar15 - uVar18;
    if (uVar16 < 0x20) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *(ulonglong *)(lVar8 + 8) = uVar15 | 3;
      puVar23 = (ulonglong *)(uVar15 + 8 + lVar8);
      *puVar23 = *puVar23 | 1;
      return lVar8 + 0x10;
    }
    lVar2 = lVar8 + uVar18;
    *(ulonglong *)(param_1 + 2) = uVar16;
    *(longlong *)(param_1 + 8) = lVar2;
    *(ulonglong *)(lVar2 + 8) = uVar16 | 1;
    *(ulonglong *)(lVar2 + uVar16) = uVar16;
    *(ulonglong *)(lVar8 + 8) = uVar18 | 3;
    return lVar8 + 0x10;
  }
  if (uVar18 < *(ulonglong *)(param_1 + 4)) {
    lVar8 = *(longlong *)(param_1 + 10);
    uVar15 = *(ulonglong *)(param_1 + 4) - uVar18;
    *(ulonglong *)(param_1 + 4) = uVar15;
    *(ulonglong *)(param_1 + 10) = lVar8 + uVar18;
    *(ulonglong *)(lVar8 + uVar18 + 8) = uVar15 | 1;
    *(ulonglong *)(lVar8 + 8) = uVar18 | 3;
    return lVar8 + 0x10;
  }
  if (*(longlong *)(param_1 + 0xee) == 0) {
    return 0;
  }
  puVar21 = (ulonglong *)0x0;
  puVar1 = param_1 + 0xe2;
  uVar15 = 0xffffffffffffffff;
  puVar23 = (ulonglong *)0x0;
  if ((puVar1 != (uint *)0x0) && (*(longlong *)(param_1 + 0xe4) == 0)) {
    param_1[0xe8] = 0xffffffff;
    param_1[0xe9] = 0xffffffff;
    param_1[0xea] = 0xffffffff;
    param_1[0xeb] = 0xffffffff;
    param_1[0xec] = 0;
    if (*(longlong *)puVar1 == 0) {
      puVar1[0] = 0x58585858;
      puVar1[1] = 0;
      ui_system_config = 0;
    }
    param_1[0xe4] = 0x1000;
    param_1[0xe5] = 0;
    param_1[0xe6] = 0x1000;
    param_1[0xe7] = 0;
  }
  puVar24 = puVar21;
  if ((param_1[0xd8] & 4) == 0) {
    uVar16 = *(ulonglong *)(param_1 + 10);
    puVar19 = puVar21;
    if (uVar16 != 0) {
      puVar17 = (ulonglong *)(param_1 + 0xda);
      do {
        if ((*puVar17 <= uVar16) && (puVar19 = puVar17, uVar16 < *puVar17 + puVar17[1])) break;
        puVar17 = (ulonglong *)puVar17[2];
        puVar19 = puVar21;
      } while (puVar17 != (ulonglong *)0x0);
    }
    if (puVar19 == (ulonglong *)0x0) {
      uVar16 = (**(code **)(param_1 + 0xee))(0);
      if (uVar16 != 0xffffffffffffffff) {
        puVar17 = (ulonglong *)
                  (uVar18 + 0x51 + *(longlong *)(param_1 + 0xe6) &
                  ~(*(longlong *)(param_1 + 0xe6) - 1U));
        uVar9 = *(longlong *)(param_1 + 0xe4) - 1;
        if ((uVar16 & uVar9) != 0) {
          puVar17 = (ulonglong *)
                    ((longlong)puVar17 +
                    ((*(longlong *)(param_1 + 0xe4) + uVar16 & ~uVar9) - uVar16));
        }
        puVar24 = puVar23;
        if (puVar17 < (ulonglong *)0x7fffffffffffffff) {
          iVar22 = (int)puVar17;
          uVar9 = (**(code **)(param_1 + 0xee))((ulonglong)puVar17 & 0xffffffff);
          puVar23 = puVar21;
          if (uVar9 == uVar16) goto LAB_18076d1cc;
          goto LAB_18076d1d9;
        }
      }
LAB_18076d25f:
      param_1[0xd8] = param_1[0xd8] | 4;
      goto LAB_18076d266;
    }
    puVar17 = (ulonglong *)
              (uVar18 + 0x51 + (*(longlong *)(param_1 + 0xe6) - *(longlong *)(param_1 + 4)) &
              ~(*(longlong *)(param_1 + 0xe6) - 1U));
    puVar24 = puVar23;
    if ((ulonglong *)0x7ffffffffffffffe < puVar17) goto LAB_18076d25f;
    iVar22 = (int)puVar17;
    uVar16 = (**(code **)(param_1 + 0xee))((ulonglong)puVar17 & 0xffffffff);
    uVar9 = uVar16;
    if (uVar16 == puVar19[1] + *puVar19) {
LAB_18076d1cc:
      iVar22 = (int)puVar17;
      uVar15 = uVar16;
      puVar23 = puVar17;
      if (uVar16 != 0xffffffffffffffff) goto LAB_18076d2e5;
    }
LAB_18076d1d9:
    uVar16 = uVar9;
    puVar24 = puVar23;
    if (uVar16 == 0xffffffffffffffff) goto LAB_18076d25f;
    if ((puVar17 < (ulonglong *)(uVar18 + 0x51)) &&
       (uVar9 = uVar18 + 0x51 + (*(longlong *)(param_1 + 0xe6) - (longlong)puVar17) &
                ~(*(longlong *)(param_1 + 0xe6) - 1U), uVar9 < 0x7fffffffffffffff)) {
      lVar8 = (**(code **)(param_1 + 0xee))(uVar9 & 0xffffffff,*(uint64_t *)(param_1 + 0xf0));
      if (lVar8 == -1) {
        (**(code **)(param_1 + 0xee))(-iVar22);
        goto LAB_18076d25f;
      }
      puVar17 = (ulonglong *)((longlong)puVar17 + uVar9);
    }
  }
  else {
LAB_18076d266:
    lVar8 = (*(ulonglong *)(param_1 + 0xe4) - uVar18 % *(ulonglong *)(param_1 + 0xe4)) + uVar18;
    uVar9 = ~(*(longlong *)(param_1 + 0xe6) - 1U) & *(longlong *)(param_1 + 0xe6) + 0x51 + lVar8;
    uVar16 = uVar15;
    puVar17 = puVar24;
    if (uVar9 < 0x7fffffffffffffff) {
      uVar15 = (**(code **)(param_1 + 0xee))(uVar9,*(uint64_t *)(param_1 + 0xf0));
      uVar9 = (**(code **)(param_1 + 0xee))(0,*(uint64_t *)(param_1 + 0xf0));
      if ((((uVar15 != 0xffffffffffffffff) && (uVar9 != 0xffffffffffffffff)) && (uVar15 < uVar9)) &&
         ((ulonglong *)(lVar8 + 0x50U) < (ulonglong *)(uVar9 - uVar15))) {
        uVar16 = uVar15;
        puVar17 = (ulonglong *)(uVar9 - uVar15);
      }
    }
  }
  if (uVar16 == 0xffffffffffffffff) {
    return 0;
  }
LAB_18076d2e5:
  uVar15 = *(longlong *)(param_1 + 0xd4) + (longlong)puVar17;
  *(ulonglong *)(param_1 + 0xd4) = uVar15;
  if (*(ulonglong *)(param_1 + 0xd6) < uVar15) {
    *(ulonglong *)(param_1 + 0xd6) = uVar15;
  }
  uVar15 = *(ulonglong *)(param_1 + 10);
  puVar23 = (ulonglong *)(param_1 + 0xda);
  puVar21 = puVar23;
  if (uVar15 == 0) {
    *puVar23 = uVar16;
    *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)puVar1;
    *(ulonglong *)(param_1 + 6) = uVar16;
    *(ulonglong **)(param_1 + 0xdc) = puVar17;
    param_1[0xe0] = 0;
    func_0x00018076be80(param_1);
    if (param_1 == (uint *)0x180c0c750) {
      func_0x00018076c060(0x180c0c750,uVar16,puVar17 + -10);
    }
    else {
      lVar8 = (longlong)param_1 + ((*(ulonglong *)(param_1 + -2) & 0xfffffffffffffffc) - 0x10);
      func_0x00018076c060(param_1,lVar8,(longlong)puVar17 + (uVar16 - lVar8) + -0x50);
    }
  }
  else {
    for (; puVar21 != (ulonglong *)0x0; puVar21 = (ulonglong *)puVar21[2]) {
      uVar9 = *puVar21 + puVar21[1];
      if (uVar16 == uVar9) {
        if ((((puVar21[3] & 8) == 0) && (*puVar21 <= uVar15)) && (uVar15 < uVar9)) {
          puVar21[1] = puVar21[1] + (longlong)puVar17;
          func_0x00018076c060(param_1,*(uint64_t *)(param_1 + 10),
                              *(longlong *)(param_1 + 4) + (longlong)puVar17);
          goto LAB_18076d3e2;
        }
        break;
      }
    }
    if (uVar16 < *(ulonglong *)(param_1 + 6)) {
      *(ulonglong *)(param_1 + 6) = uVar16;
    }
    if (puVar23 != (ulonglong *)0x0) {
      do {
        uVar15 = *puVar23;
        if (uVar15 == (longlong)puVar17 + uVar16) {
          if ((puVar23[3] & 8) == 0) {
            puVar23[1] = puVar23[1] + (longlong)puVar17;
            *puVar23 = uVar16;
            lVar8 = FUN_18076cc50(param_1,uVar16,uVar15,uVar18);
            return lVar8;
          }
          break;
        }
        puVar23 = (ulonglong *)puVar23[2];
      } while (puVar23 != (ulonglong *)0x0);
    }
    FUN_18076b9d0(param_1,uVar16,puVar17,0);
  }
LAB_18076d3e2:
  if (*(ulonglong *)(param_1 + 4) <= uVar18) {
    return 0;
  }
  lVar8 = *(longlong *)(param_1 + 10);
  uVar15 = *(ulonglong *)(param_1 + 4) - uVar18;
  *(ulonglong *)(param_1 + 4) = uVar15;
  *(ulonglong *)(param_1 + 10) = lVar8 + uVar18;
  *(ulonglong *)(lVar8 + uVar18 + 8) = uVar15 | 1;
  *(ulonglong *)(lVar8 + 8) = uVar18 | 3;
  return lVar8 + 0x10;
}



longlong FUN_18076cc50(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint64_t *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint64_t *puVar17;
  int iVar18;
  ulonglong uVar19;
  
  uVar16 = 0;
  uVar10 = uVar16;
  if ((param_2 & 0xf) != 0) {
    uVar10 = (ulonglong)(-((uint)param_2 & 0xf) & 0xf);
  }
  lVar1 = uVar10 + param_2;
  uVar10 = uVar16;
  if ((param_3 & 0xf) != 0) {
    uVar10 = (ulonglong)(-((uint)param_3 & 0xf) & 0xf);
  }
  param_3 = param_3 + uVar10;
  uVar10 = lVar1 + param_4;
  uVar19 = (param_3 - lVar1) - param_4;
  *(ulonglong *)(lVar1 + 8) = param_4 | 3;
  if (param_3 == *(ulonglong *)(param_1 + 10)) {
    *(ulonglong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + uVar19;
    *(ulonglong *)(param_1 + 10) = uVar10;
    *(ulonglong *)(uVar10 + 8) = *(ulonglong *)(param_1 + 4) | 1;
    return lVar1 + 0x10;
  }
  if (param_3 == *(ulonglong *)(param_1 + 8)) {
    *(ulonglong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + uVar19;
    uVar16 = *(ulonglong *)(param_1 + 2);
    *(ulonglong *)(param_1 + 8) = uVar10;
    *(ulonglong *)(uVar10 + 8) = uVar16 | 1;
    *(ulonglong *)(uVar16 + uVar10) = uVar16;
    return lVar1 + 0x10;
  }
  uVar3 = *(ulonglong *)(param_3 + 8);
  if ((uVar3 & 2) != 0) goto FUN_18076ce6f;
  if (uVar3 >> 3 < 0x20) {
    puVar4 = *(uint **)(param_3 + 0x10);
    puVar15 = *(uint **)(param_3 + 0x18);
    uVar9 = (uint)(uVar3 >> 3);
    if (puVar4 == puVar15) {
      *param_1 = *param_1 & ~(1 << (uVar9 & 0x1f));
    }
    else if (((puVar4 == param_1 + ((ulonglong)(uVar9 * 2) + 8) * 2) ||
             (*(uint **)(param_1 + 6) <= puVar4)) &&
            ((puVar15 == param_1 + ((ulonglong)(uVar9 * 2) + 8) * 2 ||
             (*(uint **)(param_1 + 6) <= puVar15)))) {
      *(uint **)(puVar4 + 6) = puVar15;
      *(uint **)(puVar15 + 4) = puVar4;
    }
  }
  else {
    uVar14 = *(ulonglong *)(param_3 + 0x18);
    uVar5 = *(ulonglong *)(param_3 + 0x30);
    if (uVar14 == param_3) {
      uVar6 = *(ulonglong *)(param_3 + 0x28);
      puVar8 = (uint64_t *)(param_3 + 0x28);
      if (*(ulonglong *)(param_3 + 0x28) == 0) {
        uVar14 = *(ulonglong *)(param_3 + 0x20);
        uVar6 = uVar14;
        puVar8 = (uint64_t *)(param_3 + 0x20);
        if (uVar14 == 0) goto LAB_18076cddb;
      }
      do {
        do {
          puVar17 = puVar8;
          uVar14 = uVar6;
          uVar6 = *(ulonglong *)(uVar14 + 0x28);
          puVar8 = (uint64_t *)(uVar14 + 0x28);
        } while (*(ulonglong *)(uVar14 + 0x28) != 0);
        uVar6 = *(ulonglong *)(uVar14 + 0x20);
        puVar8 = (uint64_t *)(uVar14 + 0x20);
      } while (*(ulonglong *)(uVar14 + 0x20) != 0);
      if (*(uint64_t **)(param_1 + 6) <= puVar17) {
        *puVar17 = 0;
      }
    }
    else {
      uVar6 = *(ulonglong *)(param_3 + 0x10);
      if (*(ulonglong *)(param_1 + 6) <= uVar6) {
        *(ulonglong *)(uVar6 + 0x18) = uVar14;
        *(ulonglong *)(uVar14 + 0x10) = uVar6;
      }
    }
LAB_18076cddb:
    if (uVar5 != 0) {
      if (param_3 == *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94)) {
        *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94) = uVar14;
        if (uVar14 == 0) {
          param_1[1] = param_1[1] & ~(1 << (*(uint *)(param_3 + 0x38) & 0x1f));
        }
        else {
LAB_18076ce27:
          if (*(ulonglong *)(param_1 + 6) <= uVar14) {
            *(ulonglong *)(uVar14 + 0x30) = uVar5;
            uVar5 = *(ulonglong *)(param_3 + 0x20);
            if ((uVar5 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar5)) {
              *(ulonglong *)(uVar14 + 0x20) = uVar5;
              *(ulonglong *)(uVar5 + 0x30) = uVar14;
            }
            uVar5 = *(ulonglong *)(param_3 + 0x28);
            if ((uVar5 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar5)) {
              *(ulonglong *)(uVar14 + 0x28) = uVar5;
              *(ulonglong *)(uVar5 + 0x30) = uVar14;
            }
          }
        }
      }
      else {
        if (*(ulonglong *)(param_1 + 6) <= uVar5) {
          if (*(ulonglong *)(uVar5 + 0x20) == param_3) {
            *(ulonglong *)(uVar5 + 0x20) = uVar14;
          }
          else {
            *(ulonglong *)(uVar5 + 0x28) = uVar14;
          }
        }
        if (uVar14 != 0) goto LAB_18076ce27;
      }
    }
  }
  param_3 = param_3 + (uVar3 & 0xfffffffffffffffc);
  uVar19 = uVar19 + (uVar3 & 0xfffffffffffffffc);
FUN_18076ce6f:
  *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) & 0xfffffffffffffffe;
  *(ulonglong *)(uVar10 + 8) = uVar19 | 1;
  *(ulonglong *)(uVar19 + uVar10) = uVar19;
  if (uVar19 >> 3 < 0x20) {
    uVar9 = (uint)(uVar19 >> 3);
    puVar4 = param_1 + ((ulonglong)(uVar9 * 2) + 8) * 2;
    puVar15 = puVar4;
    if ((*param_1 >> (uVar9 & 0x1f) & 1) == 0) {
      *param_1 = *param_1 | 1 << (uVar9 & 0x1f);
    }
    else if (*(uint **)(param_1 + 6) <= *(uint **)(puVar4 + 4)) {
      puVar15 = *(uint **)(puVar4 + 4);
    }
    *(ulonglong *)(puVar4 + 4) = uVar10;
    *(ulonglong *)(puVar15 + 6) = uVar10;
    *(uint **)(uVar10 + 0x10) = puVar15;
    *(uint **)(uVar10 + 0x18) = puVar4;
    return lVar1 + 0x10;
  }
  if (uVar19 >> 8 == 0) {
    uVar9 = 0;
  }
  else if (uVar19 >> 8 < 0x10000) {
    iVar18 = (int)(uVar19 >> 8);
    uVar9 = iVar18 - 0x100U >> 0x10 & 8;
    iVar18 = iVar18 << (sbyte)uVar9;
    uVar12 = iVar18 - 0x1000U >> 0x10 & 4;
    iVar18 = iVar18 << (sbyte)uVar12;
    uVar13 = iVar18 - 0x4000U >> 0x10 & 2;
    iVar18 = (((uint)(iVar18 << (sbyte)uVar13) >> 0xf) - uVar13) - (uVar9 + uVar12);
    uVar9 = ((uint)(uVar19 >> ((char)iVar18 + 0x15U & 0x3f)) & 1) + (iVar18 + 0xe) * 2;
  }
  else {
    uVar9 = 0x1f;
  }
  *(uint *)(uVar10 + 0x38) = uVar9;
  *(uint64_t *)(uVar10 + 0x28) = 0;
  *(uint64_t *)(uVar10 + 0x20) = 0;
  puVar2 = (ulonglong *)(param_1 + ((ulonglong)uVar9 + 0x4a) * 2);
  if ((param_1[1] >> (uVar9 & 0x1f) & 1) == 0) {
    param_1[1] = param_1[1] | 1 << (uVar9 & 0x1f);
    *puVar2 = uVar10;
    *(ulonglong **)(uVar10 + 0x30) = puVar2;
    *(ulonglong *)(uVar10 + 0x18) = uVar10;
    *(ulonglong *)(uVar10 + 0x10) = uVar10;
    return lVar1 + 0x10;
  }
  if (uVar9 != 0x1f) {
    uVar16 = 0x3f - (ulonglong)((uVar9 >> 1) + 6);
  }
  uVar3 = *(ulonglong *)(*puVar2 + 8);
  uVar14 = *puVar2;
  lVar7 = uVar19 << ((byte)uVar16 & 0x3f);
  do {
    if ((uVar3 & 0xfffffffffffffffc) == uVar19) {
      if ((*(ulonglong *)(param_1 + 6) <= uVar14) &&
         (uVar16 = *(ulonglong *)(uVar14 + 0x10), *(ulonglong *)(param_1 + 6) <= uVar16)) {
        *(ulonglong *)(uVar16 + 0x18) = uVar10;
        *(ulonglong *)(uVar14 + 0x10) = uVar10;
        *(ulonglong *)(uVar10 + 0x10) = uVar16;
        *(ulonglong *)(uVar10 + 0x18) = uVar14;
        *(uint64_t *)(uVar10 + 0x30) = 0;
      }
LAB_18076d011:
      return lVar1 + 0x10;
    }
    lVar11 = 4 - (lVar7 >> 0x3f);
    puVar2 = (ulonglong *)(uVar14 + lVar11 * 8);
    uVar16 = *(ulonglong *)(uVar14 + lVar11 * 8);
    if (uVar16 == 0) {
      if (*(ulonglong **)(param_1 + 6) <= puVar2) {
        *puVar2 = uVar10;
        *(ulonglong *)(uVar10 + 0x30) = uVar14;
        *(ulonglong *)(uVar10 + 0x18) = uVar10;
        *(ulonglong *)(uVar10 + 0x10) = uVar10;
        return lVar1 + 0x10;
      }
      goto LAB_18076d011;
    }
    uVar3 = *(ulonglong *)(uVar16 + 8);
    uVar14 = uVar16;
    lVar7 = lVar7 * 2;
  } while( true );
}



longlong FUN_18076ccf0(uint64_t param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong unaff_RBP;
  int iVar15;
  uint *in_R10;
  ulonglong in_R11;
  longlong unaff_R14;
  
  uVar2 = *(ulonglong *)(param_3 + 8);
  if ((uVar2 & 2) != 0) goto FUN_18076ce6f;
  if (uVar2 >> 3 < 0x20) {
    puVar3 = *(uint **)(param_3 + 0x10);
    puVar12 = *(uint **)(param_3 + 0x18);
    uVar7 = (uint)(uVar2 >> 3);
    if (puVar3 == puVar12) {
      *in_R10 = *in_R10 & ~(1 << (uVar7 & 0x1f));
    }
    else if (((puVar3 == in_R10 + ((ulonglong)(uVar7 * 2) + 8) * 2) ||
             (*(uint **)(in_R10 + 6) <= puVar3)) &&
            ((puVar12 == in_R10 + ((ulonglong)(uVar7 * 2) + 8) * 2 ||
             (*(uint **)(in_R10 + 6) <= puVar12)))) {
      *(uint **)(puVar3 + 6) = puVar12;
      *(uint **)(puVar12 + 4) = puVar3;
    }
  }
  else {
    uVar11 = *(ulonglong *)(param_3 + 0x18);
    uVar5 = *(ulonglong *)(param_3 + 0x30);
    if (uVar11 == param_3) {
      uVar4 = *(ulonglong *)(param_3 + 0x28);
      plVar6 = (longlong *)(param_3 + 0x28);
      if (*(ulonglong *)(param_3 + 0x28) == 0) {
        uVar11 = *(ulonglong *)(param_3 + 0x20);
        uVar4 = uVar11;
        plVar6 = (longlong *)(param_3 + 0x20);
        if (uVar11 == 0) goto LAB_18076cddb;
      }
      do {
        do {
          plVar14 = plVar6;
          uVar11 = uVar4;
          uVar4 = *(ulonglong *)(uVar11 + 0x28);
          plVar6 = (longlong *)(uVar11 + 0x28);
        } while (*(ulonglong *)(uVar11 + 0x28) != 0);
        uVar4 = *(ulonglong *)(uVar11 + 0x20);
        plVar6 = (longlong *)(uVar11 + 0x20);
      } while (*(ulonglong *)(uVar11 + 0x20) != 0);
      if (*(longlong **)(in_R10 + 6) <= plVar14) {
        *plVar14 = unaff_RBP;
      }
    }
    else {
      uVar4 = *(ulonglong *)(param_3 + 0x10);
      if (*(ulonglong *)(in_R10 + 6) <= uVar4) {
        *(ulonglong *)(uVar4 + 0x18) = uVar11;
        *(ulonglong *)(uVar11 + 0x10) = uVar4;
      }
    }
LAB_18076cddb:
    if (uVar5 != 0) {
      if (param_3 == *(ulonglong *)(in_R10 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94)) {
        *(ulonglong *)(in_R10 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94) = uVar11;
        if (uVar11 == 0) {
          in_R10[1] = in_R10[1] & ~(1 << (*(uint *)(param_3 + 0x38) & 0x1f));
        }
        else {
LAB_18076ce27:
          if (*(ulonglong *)(in_R10 + 6) <= uVar11) {
            *(ulonglong *)(uVar11 + 0x30) = uVar5;
            uVar5 = *(ulonglong *)(param_3 + 0x20);
            if ((uVar5 != 0) && (*(ulonglong *)(in_R10 + 6) <= uVar5)) {
              *(ulonglong *)(uVar11 + 0x20) = uVar5;
              *(ulonglong *)(uVar5 + 0x30) = uVar11;
            }
            uVar5 = *(ulonglong *)(param_3 + 0x28);
            if ((uVar5 != 0) && (*(ulonglong *)(in_R10 + 6) <= uVar5)) {
              *(ulonglong *)(uVar11 + 0x28) = uVar5;
              *(ulonglong *)(uVar5 + 0x30) = uVar11;
            }
          }
        }
      }
      else {
        if (*(ulonglong *)(in_R10 + 6) <= uVar5) {
          if (*(ulonglong *)(uVar5 + 0x20) == param_3) {
            *(ulonglong *)(uVar5 + 0x20) = uVar11;
          }
          else {
            *(ulonglong *)(uVar5 + 0x28) = uVar11;
          }
        }
        if (uVar11 != 0) goto LAB_18076ce27;
      }
    }
  }
  param_3 = param_3 + (uVar2 & 0xfffffffffffffffc);
  in_R11 = in_R11 + (uVar2 & 0xfffffffffffffffc);
FUN_18076ce6f:
  *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) & 0xfffffffffffffffe;
  *(ulonglong *)(param_2 + 8) = in_R11 | 1;
  *(ulonglong *)(in_R11 + param_2) = in_R11;
  if (in_R11 >> 3 < 0x20) {
    uVar7 = (uint)(in_R11 >> 3);
    puVar3 = in_R10 + ((ulonglong)(uVar7 * 2) + 8) * 2;
    puVar12 = puVar3;
    if ((*in_R10 >> (uVar7 & 0x1f) & 1) == 0) {
      *in_R10 = *in_R10 | 1 << (uVar7 & 0x1f);
    }
    else if (*(uint **)(in_R10 + 6) <= *(uint **)(puVar3 + 4)) {
      puVar12 = *(uint **)(puVar3 + 4);
    }
    *(ulonglong *)(puVar3 + 4) = param_2;
    *(ulonglong *)(puVar12 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar12;
    *(uint **)(param_2 + 0x18) = puVar3;
    return unaff_R14 + 0x10;
  }
  if (in_R11 >> 8 == 0) {
    uVar7 = (uint)unaff_RBP;
  }
  else if (in_R11 >> 8 < 0x10000) {
    iVar15 = (int)(in_R11 >> 8);
    uVar7 = iVar15 - 0x100U >> 0x10 & 8;
    iVar15 = iVar15 << (sbyte)uVar7;
    uVar9 = iVar15 - 0x1000U >> 0x10 & 4;
    iVar15 = iVar15 << (sbyte)uVar9;
    uVar10 = iVar15 - 0x4000U >> 0x10 & 2;
    iVar15 = (((uint)(iVar15 << (sbyte)uVar10) >> 0xf) - uVar10) - (uVar7 + uVar9);
    uVar7 = ((uint)(in_R11 >> ((char)iVar15 + 0x15U & 0x3f)) & 1) + (iVar15 + 0xe) * 2;
  }
  else {
    uVar7 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar7;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (ulonglong *)(in_R10 + ((ulonglong)uVar7 + 0x4a) * 2);
  if ((in_R10[1] >> (uVar7 & 0x1f) & 1) == 0) {
    in_R10[1] = in_R10[1] | 1 << (uVar7 & 0x1f);
    *puVar1 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar1;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return unaff_R14 + 0x10;
  }
  lVar13 = unaff_RBP;
  if (uVar7 != 0x1f) {
    lVar13 = 0x3f - (ulonglong)((uVar7 >> 1) + 6);
  }
  uVar2 = *(ulonglong *)(*puVar1 + 8);
  uVar11 = *puVar1;
  lVar13 = in_R11 << ((byte)lVar13 & 0x3f);
  do {
    if ((uVar2 & 0xfffffffffffffffc) == in_R11) {
      if ((*(ulonglong *)(in_R10 + 6) <= uVar11) &&
         (uVar2 = *(ulonglong *)(uVar11 + 0x10), *(ulonglong *)(in_R10 + 6) <= uVar2)) {
        *(ulonglong *)(uVar2 + 0x18) = param_2;
        *(ulonglong *)(uVar11 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar2;
        *(ulonglong *)(param_2 + 0x18) = uVar11;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
LAB_18076d011:
      return unaff_R14 + 0x10;
    }
    lVar8 = 4 - (lVar13 >> 0x3f);
    puVar1 = (ulonglong *)(uVar11 + lVar8 * 8);
    uVar5 = *(ulonglong *)(uVar11 + lVar8 * 8);
    if (uVar5 == 0) {
      if (*(ulonglong **)(in_R10 + 6) <= puVar1) {
        *puVar1 = param_2;
        *(ulonglong *)(param_2 + 0x30) = uVar11;
        *(ulonglong *)(param_2 + 0x18) = param_2;
        *(ulonglong *)(param_2 + 0x10) = param_2;
        return unaff_R14 + 0x10;
      }
      goto LAB_18076d011;
    }
    uVar2 = *(ulonglong *)(uVar5 + 8);
    uVar11 = uVar5;
    lVar13 = lVar13 * 2;
  } while( true );
}



longlong FUN_18076cd07(uint64_t param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  int iVar14;
  uint *in_R10;
  longlong in_R11;
  ulonglong uVar15;
  longlong unaff_R14;
  
  if (unaff_RSI >> 3 < 0x20) {
    puVar2 = *(uint **)(param_3 + 0x10);
    puVar11 = *(uint **)(param_3 + 0x18);
    uVar7 = (uint)(unaff_RSI >> 3);
    if (puVar2 == puVar11) {
      *in_R10 = *in_R10 & ~(1 << (uVar7 & 0x1f));
    }
    else if (((puVar2 == in_R10 + ((ulonglong)(uVar7 * 2) + 8) * 2) ||
             (*(uint **)(in_R10 + 6) <= puVar2)) &&
            ((puVar11 == in_R10 + ((ulonglong)(uVar7 * 2) + 8) * 2 ||
             (*(uint **)(in_R10 + 6) <= puVar11)))) {
      *(uint **)(puVar2 + 6) = puVar11;
      *(uint **)(puVar11 + 4) = puVar2;
    }
    goto FUN_18076ce64;
  }
  uVar15 = *(ulonglong *)(param_3 + 0x18);
  uVar4 = *(ulonglong *)(param_3 + 0x30);
  if (uVar15 == param_3) {
    uVar3 = *(ulonglong *)(param_3 + 0x28);
    plVar6 = (longlong *)(param_3 + 0x28);
    if (*(ulonglong *)(param_3 + 0x28) == 0) {
      uVar15 = *(ulonglong *)(param_3 + 0x20);
      uVar3 = uVar15;
      plVar6 = (longlong *)(param_3 + 0x20);
      if (uVar15 == 0) goto LAB_18076cddb;
    }
    do {
      do {
        plVar13 = plVar6;
        uVar15 = uVar3;
        uVar3 = *(ulonglong *)(uVar15 + 0x28);
        plVar6 = (longlong *)(uVar15 + 0x28);
      } while (*(ulonglong *)(uVar15 + 0x28) != 0);
      uVar3 = *(ulonglong *)(uVar15 + 0x20);
      plVar6 = (longlong *)(uVar15 + 0x20);
    } while (*(ulonglong *)(uVar15 + 0x20) != 0);
    if (*(longlong **)(in_R10 + 6) <= plVar13) {
      *plVar13 = unaff_RBP;
    }
  }
  else {
    uVar3 = *(ulonglong *)(param_3 + 0x10);
    if (*(ulonglong *)(in_R10 + 6) <= uVar3) {
      *(ulonglong *)(uVar3 + 0x18) = uVar15;
      *(ulonglong *)(uVar15 + 0x10) = uVar3;
    }
  }
LAB_18076cddb:
  if (uVar4 != 0) {
    if (param_3 == *(ulonglong *)(in_R10 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94)) {
      *(ulonglong *)(in_R10 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94) = uVar15;
      if (uVar15 == 0) {
        in_R10[1] = in_R10[1] & ~(1 << (*(uint *)(param_3 + 0x38) & 0x1f));
        goto FUN_18076ce64;
      }
    }
    else {
      if (*(ulonglong *)(in_R10 + 6) <= uVar4) {
        if (*(ulonglong *)(uVar4 + 0x20) == param_3) {
          *(ulonglong *)(uVar4 + 0x20) = uVar15;
        }
        else {
          *(ulonglong *)(uVar4 + 0x28) = uVar15;
        }
      }
      if (uVar15 == 0) goto FUN_18076ce64;
    }
    if (*(ulonglong *)(in_R10 + 6) <= uVar15) {
      *(ulonglong *)(uVar15 + 0x30) = uVar4;
      uVar4 = *(ulonglong *)(param_3 + 0x20);
      if ((uVar4 != 0) && (*(ulonglong *)(in_R10 + 6) <= uVar4)) {
        *(ulonglong *)(uVar15 + 0x20) = uVar4;
        *(ulonglong *)(uVar4 + 0x30) = uVar15;
      }
      uVar4 = *(ulonglong *)(param_3 + 0x28);
      if ((uVar4 != 0) && (*(ulonglong *)(in_R10 + 6) <= uVar4)) {
        *(ulonglong *)(uVar15 + 0x28) = uVar4;
        *(ulonglong *)(uVar4 + 0x30) = uVar15;
      }
    }
  }
FUN_18076ce64:
  uVar15 = in_R11 + unaff_RSI;
  puVar1 = (ulonglong *)(param_3 + unaff_RSI + 8);
  *puVar1 = *puVar1 & 0xfffffffffffffffe;
  *(ulonglong *)(param_2 + 8) = uVar15 | 1;
  *(ulonglong *)(uVar15 + param_2) = uVar15;
  if (uVar15 >> 3 < 0x20) {
    uVar7 = (uint)(uVar15 >> 3);
    puVar2 = in_R10 + ((ulonglong)(uVar7 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*in_R10 >> (uVar7 & 0x1f) & 1) == 0) {
      *in_R10 = *in_R10 | 1 << (uVar7 & 0x1f);
    }
    else if (*(uint **)(in_R10 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(ulonglong *)(puVar2 + 4) = param_2;
    *(ulonglong *)(puVar11 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar11;
    *(uint **)(param_2 + 0x18) = puVar2;
    return unaff_R14 + 0x10;
  }
  if (uVar15 >> 8 == 0) {
    uVar7 = (uint)unaff_RBP;
  }
  else if (uVar15 >> 8 < 0x10000) {
    iVar14 = (int)(uVar15 >> 8);
    uVar7 = iVar14 - 0x100U >> 0x10 & 8;
    iVar14 = iVar14 << (sbyte)uVar7;
    uVar9 = iVar14 - 0x1000U >> 0x10 & 4;
    iVar14 = iVar14 << (sbyte)uVar9;
    uVar10 = iVar14 - 0x4000U >> 0x10 & 2;
    iVar14 = (((uint)(iVar14 << (sbyte)uVar10) >> 0xf) - uVar10) - (uVar7 + uVar9);
    uVar7 = ((uint)(uVar15 >> ((char)iVar14 + 0x15U & 0x3f)) & 1) + (iVar14 + 0xe) * 2;
  }
  else {
    uVar7 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar7;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (ulonglong *)(in_R10 + ((ulonglong)uVar7 + 0x4a) * 2);
  if ((in_R10[1] >> (uVar7 & 0x1f) & 1) == 0) {
    in_R10[1] = in_R10[1] | 1 << (uVar7 & 0x1f);
    *puVar1 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar1;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return unaff_R14 + 0x10;
  }
  lVar12 = unaff_RBP;
  if (uVar7 != 0x1f) {
    lVar12 = 0x3f - (ulonglong)((uVar7 >> 1) + 6);
  }
  uVar4 = *(ulonglong *)(*puVar1 + 8);
  uVar3 = *puVar1;
  lVar12 = uVar15 << ((byte)lVar12 & 0x3f);
  do {
    if ((uVar4 & 0xfffffffffffffffc) == uVar15) {
      if ((*(ulonglong *)(in_R10 + 6) <= uVar3) &&
         (uVar15 = *(ulonglong *)(uVar3 + 0x10), *(ulonglong *)(in_R10 + 6) <= uVar15)) {
        *(ulonglong *)(uVar15 + 0x18) = param_2;
        *(ulonglong *)(uVar3 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar15;
        *(ulonglong *)(param_2 + 0x18) = uVar3;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
LAB_18076d011:
      return unaff_R14 + 0x10;
    }
    lVar8 = 4 - (lVar12 >> 0x3f);
    puVar1 = (ulonglong *)(uVar3 + lVar8 * 8);
    uVar5 = *(ulonglong *)(uVar3 + lVar8 * 8);
    if (uVar5 == 0) {
      if (*(ulonglong **)(in_R10 + 6) <= puVar1) {
        *puVar1 = param_2;
        *(ulonglong *)(param_2 + 0x30) = uVar3;
        *(ulonglong *)(param_2 + 0x18) = param_2;
        *(ulonglong *)(param_2 + 0x10) = param_2;
        return unaff_R14 + 0x10;
      }
      goto LAB_18076d011;
    }
    uVar4 = *(ulonglong *)(uVar5 + 8);
    uVar3 = uVar5;
    lVar12 = lVar12 * 2;
  } while( true );
}



longlong FUN_18076cd6e(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int iVar14;
  uint *in_R10;
  longlong in_R11;
  ulonglong uVar15;
  longlong unaff_R14;
  
  uVar15 = *(ulonglong *)(param_3 + 0x30);
  if (param_1 == param_3) {
    uVar3 = *(ulonglong *)(param_3 + 0x28);
    plVar6 = (longlong *)(param_3 + 0x28);
    if (*(ulonglong *)(param_3 + 0x28) == 0) {
      param_1 = *(ulonglong *)(param_3 + 0x20);
      uVar3 = param_1;
      plVar6 = (longlong *)(param_3 + 0x20);
      if (param_1 == 0) goto LAB_18076cddb;
    }
    do {
      do {
        plVar13 = plVar6;
        param_1 = uVar3;
        uVar3 = *(ulonglong *)(param_1 + 0x28);
        plVar6 = (longlong *)(param_1 + 0x28);
      } while (*(ulonglong *)(param_1 + 0x28) != 0);
      uVar3 = *(ulonglong *)(param_1 + 0x20);
      plVar6 = (longlong *)(param_1 + 0x20);
    } while (*(ulonglong *)(param_1 + 0x20) != 0);
    if (*(longlong **)(in_R10 + 6) <= plVar13) {
      *plVar13 = unaff_RBP;
    }
  }
  else {
    uVar3 = *(ulonglong *)(param_3 + 0x10);
    if (*(ulonglong *)(in_R10 + 6) <= uVar3) {
      *(ulonglong *)(uVar3 + 0x18) = param_1;
      *(ulonglong *)(param_1 + 0x10) = uVar3;
    }
  }
LAB_18076cddb:
  if (uVar15 != 0) {
    if (param_3 == *(ulonglong *)(in_R10 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94)) {
      *(ulonglong *)(in_R10 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94) = param_1;
      if (param_1 == 0) {
        in_R10[1] = in_R10[1] & ~(1 << (*(uint *)(param_3 + 0x38) & 0x1f));
        goto LAB_18076ce5f;
      }
    }
    else {
      if (*(ulonglong *)(in_R10 + 6) <= uVar15) {
        if (*(ulonglong *)(uVar15 + 0x20) == param_3) {
          *(ulonglong *)(uVar15 + 0x20) = param_1;
        }
        else {
          *(ulonglong *)(uVar15 + 0x28) = param_1;
        }
      }
      if (param_1 == 0) goto LAB_18076ce5f;
    }
    if (*(ulonglong *)(in_R10 + 6) <= param_1) {
      *(ulonglong *)(param_1 + 0x30) = uVar15;
      uVar15 = *(ulonglong *)(param_3 + 0x20);
      if ((uVar15 != 0) && (*(ulonglong *)(in_R10 + 6) <= uVar15)) {
        *(ulonglong *)(param_1 + 0x20) = uVar15;
        *(ulonglong *)(uVar15 + 0x30) = param_1;
      }
      uVar15 = *(ulonglong *)(param_3 + 0x28);
      if ((uVar15 != 0) && (*(ulonglong *)(in_R10 + 6) <= uVar15)) {
        *(ulonglong *)(param_1 + 0x28) = uVar15;
        *(ulonglong *)(uVar15 + 0x30) = param_1;
      }
    }
  }
LAB_18076ce5f:
  uVar15 = in_R11 + unaff_RSI;
  puVar1 = (ulonglong *)(param_3 + unaff_RSI + 8);
  *puVar1 = *puVar1 & 0xfffffffffffffffe;
  *(ulonglong *)(param_2 + 8) = uVar15 | 1;
  *(ulonglong *)(uVar15 + param_2) = uVar15;
  if (uVar15 >> 3 < 0x20) {
    uVar7 = (uint)(uVar15 >> 3);
    puVar2 = in_R10 + ((ulonglong)(uVar7 * 2) + 8) * 2;
    puVar11 = puVar2;
    if ((*in_R10 >> (uVar7 & 0x1f) & 1) == 0) {
      *in_R10 = *in_R10 | 1 << (uVar7 & 0x1f);
    }
    else if (*(uint **)(in_R10 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar11 = *(uint **)(puVar2 + 4);
    }
    *(ulonglong *)(puVar2 + 4) = param_2;
    *(ulonglong *)(puVar11 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar11;
    *(uint **)(param_2 + 0x18) = puVar2;
    return unaff_R14 + 0x10;
  }
  if (uVar15 >> 8 == 0) {
    uVar7 = (uint)unaff_RBP;
  }
  else if (uVar15 >> 8 < 0x10000) {
    iVar14 = (int)(uVar15 >> 8);
    uVar7 = iVar14 - 0x100U >> 0x10 & 8;
    iVar14 = iVar14 << (sbyte)uVar7;
    uVar9 = iVar14 - 0x1000U >> 0x10 & 4;
    iVar14 = iVar14 << (sbyte)uVar9;
    uVar10 = iVar14 - 0x4000U >> 0x10 & 2;
    iVar14 = (((uint)(iVar14 << (sbyte)uVar10) >> 0xf) - uVar10) - (uVar7 + uVar9);
    uVar7 = ((uint)(uVar15 >> ((char)iVar14 + 0x15U & 0x3f)) & 1) + (iVar14 + 0xe) * 2;
  }
  else {
    uVar7 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar7;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (ulonglong *)(in_R10 + ((ulonglong)uVar7 + 0x4a) * 2);
  if ((in_R10[1] >> (uVar7 & 0x1f) & 1) == 0) {
    in_R10[1] = in_R10[1] | 1 << (uVar7 & 0x1f);
    *puVar1 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar1;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return unaff_R14 + 0x10;
  }
  lVar12 = unaff_RBP;
  if (uVar7 != 0x1f) {
    lVar12 = 0x3f - (ulonglong)((uVar7 >> 1) + 6);
  }
  uVar3 = *(ulonglong *)(*puVar1 + 8);
  uVar5 = *puVar1;
  lVar12 = uVar15 << ((byte)lVar12 & 0x3f);
  do {
    if ((uVar3 & 0xfffffffffffffffc) == uVar15) {
      if ((*(ulonglong *)(in_R10 + 6) <= uVar5) &&
         (uVar15 = *(ulonglong *)(uVar5 + 0x10), *(ulonglong *)(in_R10 + 6) <= uVar15)) {
        *(ulonglong *)(uVar15 + 0x18) = param_2;
        *(ulonglong *)(uVar5 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar15;
        *(ulonglong *)(param_2 + 0x18) = uVar5;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
LAB_18076d011:
      return unaff_R14 + 0x10;
    }
    lVar8 = 4 - (lVar12 >> 0x3f);
    puVar1 = (ulonglong *)(uVar5 + lVar8 * 8);
    uVar4 = *(ulonglong *)(uVar5 + lVar8 * 8);
    if (uVar4 == 0) {
      if (*(ulonglong **)(in_R10 + 6) <= puVar1) {
        *puVar1 = param_2;
        *(ulonglong *)(param_2 + 0x30) = uVar5;
        *(ulonglong *)(param_2 + 0x18) = param_2;
        *(ulonglong *)(param_2 + 0x10) = param_2;
        return unaff_R14 + 0x10;
      }
      goto LAB_18076d011;
    }
    uVar3 = *(ulonglong *)(uVar4 + 8);
    uVar5 = uVar4;
    lVar12 = lVar12 * 2;
  } while( true );
}



longlong FUN_18076ce64(uint64_t param_1,ulonglong param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
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
  longlong unaff_RSI;
  int iVar12;
  uint *in_R10;
  longlong in_R11;
  ulonglong uVar13;
  longlong unaff_R14;
  
  uVar13 = in_R11 + unaff_RSI;
  puVar1 = (ulonglong *)(param_3 + unaff_RSI + 8);
  *puVar1 = *puVar1 & 0xfffffffffffffffe;
  *(ulonglong *)(param_2 + 8) = uVar13 | 1;
  *(ulonglong *)(uVar13 + param_2) = uVar13;
  if (uVar13 >> 3 < 0x20) {
    uVar6 = (uint)(uVar13 >> 3);
    puVar2 = in_R10 + ((ulonglong)(uVar6 * 2) + 8) * 2;
    puVar10 = puVar2;
    if ((*in_R10 >> (uVar6 & 0x1f) & 1) == 0) {
      *in_R10 = *in_R10 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(in_R10 + 6) <= *(uint **)(puVar2 + 4)) {
      puVar10 = *(uint **)(puVar2 + 4);
    }
    *(ulonglong *)(puVar2 + 4) = param_2;
    *(ulonglong *)(puVar10 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar10;
    *(uint **)(param_2 + 0x18) = puVar2;
    return unaff_R14 + 0x10;
  }
  if (uVar13 >> 8 == 0) {
    uVar6 = (uint)unaff_RBP;
  }
  else if (uVar13 >> 8 < 0x10000) {
    iVar12 = (int)(uVar13 >> 8);
    uVar6 = iVar12 - 0x100U >> 0x10 & 8;
    iVar12 = iVar12 << (sbyte)uVar6;
    uVar8 = iVar12 - 0x1000U >> 0x10 & 4;
    iVar12 = iVar12 << (sbyte)uVar8;
    uVar9 = iVar12 - 0x4000U >> 0x10 & 2;
    iVar12 = (((uint)(iVar12 << (sbyte)uVar9) >> 0xf) - uVar9) - (uVar6 + uVar8);
    uVar6 = ((uint)(uVar13 >> ((char)iVar12 + 0x15U & 0x3f)) & 1) + (iVar12 + 0xe) * 2;
  }
  else {
    uVar6 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar6;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar1 = (ulonglong *)(in_R10 + ((ulonglong)uVar6 + 0x4a) * 2);
  if ((in_R10[1] >> (uVar6 & 0x1f) & 1) == 0) {
    in_R10[1] = in_R10[1] | 1 << (uVar6 & 0x1f);
    *puVar1 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar1;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return unaff_R14 + 0x10;
  }
  lVar11 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar11 = 0x3f - (ulonglong)((uVar6 >> 1) + 6);
  }
  uVar3 = *(ulonglong *)(*puVar1 + 8);
  uVar5 = *puVar1;
  lVar11 = uVar13 << ((byte)lVar11 & 0x3f);
  do {
    if ((uVar3 & 0xfffffffffffffffc) == uVar13) {
      if ((*(ulonglong *)(in_R10 + 6) <= uVar5) &&
         (uVar13 = *(ulonglong *)(uVar5 + 0x10), *(ulonglong *)(in_R10 + 6) <= uVar13)) {
        *(ulonglong *)(uVar13 + 0x18) = param_2;
        *(ulonglong *)(uVar5 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar13;
        *(ulonglong *)(param_2 + 0x18) = uVar5;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
LAB_18076d011:
      return unaff_R14 + 0x10;
    }
    lVar7 = 4 - (lVar11 >> 0x3f);
    puVar1 = (ulonglong *)(uVar5 + lVar7 * 8);
    uVar4 = *(ulonglong *)(uVar5 + lVar7 * 8);
    if (uVar4 == 0) {
      if (*(ulonglong **)(in_R10 + 6) <= puVar1) {
        *puVar1 = param_2;
        *(ulonglong *)(param_2 + 0x30) = uVar5;
        *(ulonglong *)(param_2 + 0x18) = param_2;
        *(ulonglong *)(param_2 + 0x10) = param_2;
        return unaff_R14 + 0x10;
      }
      goto LAB_18076d011;
    }
    uVar3 = *(ulonglong *)(uVar4 + 8);
    uVar5 = uVar4;
    lVar11 = lVar11 * 2;
  } while( true );
}



longlong FUN_18076ce6f(uint64_t param_1,ulonglong param_2,longlong param_3)

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
  uint *in_R10;
  ulonglong in_R11;
  longlong unaff_R14;
  
  *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) & 0xfffffffffffffffe;
  *(ulonglong *)(param_2 + 8) = in_R11 | 1;
  *(ulonglong *)(in_R11 + param_2) = in_R11;
  if (in_R11 >> 3 < 0x20) {
    uVar6 = (uint)(in_R11 >> 3);
    puVar1 = in_R10 + ((ulonglong)(uVar6 * 2) + 8) * 2;
    puVar10 = puVar1;
    if ((*in_R10 >> (uVar6 & 0x1f) & 1) == 0) {
      *in_R10 = *in_R10 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(in_R10 + 6) <= *(uint **)(puVar1 + 4)) {
      puVar10 = *(uint **)(puVar1 + 4);
    }
    *(ulonglong *)(puVar1 + 4) = param_2;
    *(ulonglong *)(puVar10 + 6) = param_2;
    *(uint **)(param_2 + 0x10) = puVar10;
    *(uint **)(param_2 + 0x18) = puVar1;
    return unaff_R14 + 0x10;
  }
  if (in_R11 >> 8 == 0) {
    uVar6 = (uint)unaff_RBP;
  }
  else if (in_R11 >> 8 < 0x10000) {
    iVar12 = (int)(in_R11 >> 8);
    uVar6 = iVar12 - 0x100U >> 0x10 & 8;
    iVar12 = iVar12 << (sbyte)uVar6;
    uVar8 = iVar12 - 0x1000U >> 0x10 & 4;
    iVar12 = iVar12 << (sbyte)uVar8;
    uVar9 = iVar12 - 0x4000U >> 0x10 & 2;
    iVar12 = (((uint)(iVar12 << (sbyte)uVar9) >> 0xf) - uVar9) - (uVar6 + uVar8);
    uVar6 = ((uint)(in_R11 >> ((char)iVar12 + 0x15U & 0x3f)) & 1) + (iVar12 + 0xe) * 2;
  }
  else {
    uVar6 = 0x1f;
  }
  *(uint *)(param_2 + 0x38) = uVar6;
  *(longlong *)(param_2 + 0x28) = unaff_RBP;
  *(longlong *)(param_2 + 0x20) = unaff_RBP;
  puVar2 = (ulonglong *)(in_R10 + ((ulonglong)uVar6 + 0x4a) * 2);
  if ((in_R10[1] >> (uVar6 & 0x1f) & 1) == 0) {
    in_R10[1] = in_R10[1] | 1 << (uVar6 & 0x1f);
    *puVar2 = param_2;
    *(ulonglong **)(param_2 + 0x30) = puVar2;
    *(ulonglong *)(param_2 + 0x18) = param_2;
    *(ulonglong *)(param_2 + 0x10) = param_2;
    return unaff_R14 + 0x10;
  }
  lVar11 = unaff_RBP;
  if (uVar6 != 0x1f) {
    lVar11 = 0x3f - (ulonglong)((uVar6 >> 1) + 6);
  }
  uVar3 = *(ulonglong *)(*puVar2 + 8);
  uVar5 = *puVar2;
  lVar11 = in_R11 << ((byte)lVar11 & 0x3f);
  do {
    if ((uVar3 & 0xfffffffffffffffc) == in_R11) {
      if ((*(ulonglong *)(in_R10 + 6) <= uVar5) &&
         (uVar3 = *(ulonglong *)(uVar5 + 0x10), *(ulonglong *)(in_R10 + 6) <= uVar3)) {
        *(ulonglong *)(uVar3 + 0x18) = param_2;
        *(ulonglong *)(uVar5 + 0x10) = param_2;
        *(ulonglong *)(param_2 + 0x10) = uVar3;
        *(ulonglong *)(param_2 + 0x18) = uVar5;
        *(longlong *)(param_2 + 0x30) = unaff_RBP;
      }
LAB_18076d011:
      return unaff_R14 + 0x10;
    }
    lVar7 = 4 - (lVar11 >> 0x3f);
    puVar2 = (ulonglong *)(uVar5 + lVar7 * 8);
    uVar4 = *(ulonglong *)(uVar5 + lVar7 * 8);
    if (uVar4 == 0) {
      if (*(ulonglong **)(in_R10 + 6) <= puVar2) {
        *puVar2 = param_2;
        *(ulonglong *)(param_2 + 0x30) = uVar5;
        *(ulonglong *)(param_2 + 0x18) = param_2;
        *(ulonglong *)(param_2 + 0x10) = param_2;
        return unaff_R14 + 0x10;
      }
      goto LAB_18076d011;
    }
    uVar3 = *(ulonglong *)(uVar4 + 8);
    uVar5 = uVar4;
    lVar11 = lVar11 * 2;
  } while( true );
}



longlong FUN_18076ce95(uint64_t param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *in_R10;
  longlong unaff_R14;
  
  puVar1 = in_R10 + ((ulonglong)(param_3 * 2) + 8) * 2;
  puVar2 = puVar1;
  if ((*in_R10 >> (param_3 & 0x1f) & 1) == 0) {
    *in_R10 = *in_R10 | 1 << (param_3 & 0x1f);
  }
  else if (*(uint **)(in_R10 + 6) <= *(uint **)(puVar1 + 4)) {
    puVar2 = *(uint **)(puVar1 + 4);
  }
  *(longlong *)(puVar1 + 4) = param_2;
  *(longlong *)(puVar2 + 6) = param_2;
  *(uint **)(param_2 + 0x10) = puVar2;
  *(uint **)(param_2 + 0x18) = puVar1;
  return unaff_R14 + 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18076d040(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  
  puVar8 = (ulonglong *)0x0;
  plVar1 = (longlong *)(param_1 + 0x388);
  uVar6 = 0xffffffffffffffff;
  puVar10 = (ulonglong *)0x0;
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
  puVar11 = puVar8;
  if ((*(byte *)(param_1 + 0x360) & 4) == 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    puVar7 = puVar8;
    if (uVar2 != 0) {
      puVar5 = (ulonglong *)(param_1 + 0x368);
      do {
        if ((*puVar5 <= uVar2) && (puVar7 = puVar5, uVar2 < *puVar5 + puVar5[1])) break;
        puVar5 = (ulonglong *)puVar5[2];
        puVar7 = puVar8;
      } while (puVar5 != (ulonglong *)0x0);
    }
    if (puVar7 == (ulonglong *)0x0) {
      uVar2 = (**(code **)(param_1 + 0x3b8))(0);
      if (uVar2 != 0xffffffffffffffff) {
        puVar5 = (ulonglong *)
                 (param_2 + 0x51 + *(longlong *)(param_1 + 0x398) &
                 ~(*(longlong *)(param_1 + 0x398) - 1U));
        uVar3 = *(longlong *)(param_1 + 0x390) - 1;
        if ((uVar2 & uVar3) != 0) {
          puVar5 = (ulonglong *)
                   ((longlong)puVar5 + ((*(longlong *)(param_1 + 0x390) + uVar2 & ~uVar3) - uVar2));
        }
        puVar11 = puVar10;
        if (puVar5 < (ulonglong *)0x7fffffffffffffff) {
          iVar9 = (int)puVar5;
          uVar3 = (**(code **)(param_1 + 0x3b8))((ulonglong)puVar5 & 0xffffffff);
          puVar10 = puVar8;
          if (uVar3 == uVar2) goto LAB_18076d1cc;
          goto LAB_18076d1d9;
        }
      }
LAB_18076d25f:
      *(uint *)(param_1 + 0x360) = *(uint *)(param_1 + 0x360) | 4;
      goto LAB_18076d266;
    }
    puVar5 = (ulonglong *)
             (param_2 + 0x51 + (*(longlong *)(param_1 + 0x398) - *(longlong *)(param_1 + 0x10)) &
             ~(*(longlong *)(param_1 + 0x398) - 1U));
    puVar11 = puVar10;
    if ((ulonglong *)0x7ffffffffffffffe < puVar5) goto LAB_18076d25f;
    iVar9 = (int)puVar5;
    uVar2 = (**(code **)(param_1 + 0x3b8))((ulonglong)puVar5 & 0xffffffff);
    uVar3 = uVar2;
    if (uVar2 == puVar7[1] + *puVar7) {
LAB_18076d1cc:
      iVar9 = (int)puVar5;
      uVar6 = uVar2;
      puVar10 = puVar5;
      if (uVar2 != 0xffffffffffffffff) goto LAB_18076d2e5;
    }
LAB_18076d1d9:
    uVar2 = uVar3;
    puVar11 = puVar10;
    if (uVar2 == 0xffffffffffffffff) goto LAB_18076d25f;
    if ((puVar5 < (ulonglong *)(param_2 + 0x51)) &&
       (uVar3 = param_2 + 0x51 + (*(longlong *)(param_1 + 0x398) - (longlong)puVar5) &
                ~(*(longlong *)(param_1 + 0x398) - 1U), uVar3 < 0x7fffffffffffffff)) {
      lVar4 = (**(code **)(param_1 + 0x3b8))(uVar3 & 0xffffffff,*(uint64_t *)(param_1 + 0x3c0));
      if (lVar4 == -1) {
        (**(code **)(param_1 + 0x3b8))(-iVar9);
        goto LAB_18076d25f;
      }
      puVar5 = (ulonglong *)((longlong)puVar5 + uVar3);
    }
  }
  else {
LAB_18076d266:
    lVar4 = (*(ulonglong *)(param_1 + 0x390) - param_2 % *(ulonglong *)(param_1 + 0x390)) + param_2;
    uVar3 = ~(*(longlong *)(param_1 + 0x398) - 1U) & *(longlong *)(param_1 + 0x398) + 0x51 + lVar4;
    uVar2 = uVar6;
    puVar5 = puVar11;
    if (uVar3 < 0x7fffffffffffffff) {
      uVar6 = (**(code **)(param_1 + 0x3b8))(uVar3,*(uint64_t *)(param_1 + 0x3c0));
      uVar3 = (**(code **)(param_1 + 0x3b8))(0,*(uint64_t *)(param_1 + 0x3c0));
      if ((((uVar6 != 0xffffffffffffffff) && (uVar3 != 0xffffffffffffffff)) && (uVar6 < uVar3)) &&
         ((ulonglong *)(lVar4 + 0x50U) < (ulonglong *)(uVar3 - uVar6))) {
        uVar2 = uVar6;
        puVar5 = (ulonglong *)(uVar3 - uVar6);
      }
    }
  }
  if (uVar2 == 0xffffffffffffffff) {
    return 0;
  }
LAB_18076d2e5:
  uVar6 = *(longlong *)(param_1 + 0x350) + (longlong)puVar5;
  *(ulonglong *)(param_1 + 0x350) = uVar6;
  if (*(ulonglong *)(param_1 + 0x358) < uVar6) {
    *(ulonglong *)(param_1 + 0x358) = uVar6;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x28);
  puVar10 = (ulonglong *)(param_1 + 0x368);
  puVar8 = puVar10;
  if (uVar6 == 0) {
    *puVar10 = uVar2;
    *(longlong *)(param_1 + 0x38) = *plVar1;
    *(ulonglong *)(param_1 + 0x18) = uVar2;
    *(ulonglong **)(param_1 + 0x370) = puVar5;
    *(int32_t *)(param_1 + 0x380) = 0;
    func_0x00018076be80(param_1);
    if (param_1 == 0x180c0c750) {
      func_0x00018076c060(0x180c0c750,uVar2,puVar5 + -10);
    }
    else {
      lVar4 = param_1 + -0x10 + (*(ulonglong *)(param_1 + -8) & 0xfffffffffffffffc);
      func_0x00018076c060(param_1,lVar4,(longlong)puVar5 + (uVar2 - lVar4) + -0x50);
    }
  }
  else {
    for (; puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[2]) {
      uVar3 = *puVar8 + puVar8[1];
      if (uVar2 == uVar3) {
        if ((((puVar8[3] & 8) == 0) && (*puVar8 <= uVar6)) && (uVar6 < uVar3)) {
          puVar8[1] = puVar8[1] + (longlong)puVar5;
          func_0x00018076c060(param_1,*(uint64_t *)(param_1 + 0x28),
                              *(longlong *)(param_1 + 0x10) + (longlong)puVar5);
          goto LAB_18076d3e2;
        }
        break;
      }
    }
    if (uVar2 < *(ulonglong *)(param_1 + 0x18)) {
      *(ulonglong *)(param_1 + 0x18) = uVar2;
    }
    if (puVar10 != (ulonglong *)0x0) {
      do {
        uVar6 = *puVar10;
        if (uVar6 == (longlong)puVar5 + uVar2) {
          if ((puVar10[3] & 8) == 0) {
            puVar10[1] = puVar10[1] + (longlong)puVar5;
            *puVar10 = uVar2;
            lVar4 = FUN_18076cc50(param_1,uVar2,uVar6,param_2);
            return lVar4;
          }
          break;
        }
        puVar10 = (ulonglong *)puVar10[2];
      } while (puVar10 != (ulonglong *)0x0);
    }
    FUN_18076b9d0(param_1,uVar2,puVar5,0);
  }
LAB_18076d3e2:
  if (*(ulonglong *)(param_1 + 0x10) <= param_2) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  uVar6 = *(ulonglong *)(param_1 + 0x10) - param_2;
  *(ulonglong *)(param_1 + 0x10) = uVar6;
  *(ulonglong *)(param_1 + 0x28) = lVar4 + param_2;
  *(ulonglong *)(lVar4 + param_2 + 8) = uVar6 | 1;
  *(ulonglong *)(lVar4 + 8) = param_2 | 3;
  return lVar4 + 0x10;
}



uint64_t * FUN_18076d490(uint *param_1,ulonglong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint64_t *puVar10;
  ulonglong uVar11;
  uint64_t *puVar12;
  uint *puVar13;
  uint uVar14;
  uint64_t *puVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint64_t *puVar19;
  ulonglong uVar20;
  uint64_t *puVar21;
  uint uVar22;
  int iVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  
  puVar24 = (uint64_t *)0x0;
  uVar20 = -param_2;
  uVar17 = 0x1f;
  puVar25 = puVar24;
  if (param_2 >> 8 != 0) {
    if (param_2 >> 8 < 0x10000) {
      iVar23 = (int)(param_2 >> 8);
      uVar22 = iVar23 - 0x100U >> 0x10 & 8;
      iVar23 = iVar23 << (sbyte)uVar22;
      uVar6 = iVar23 - 0x1000U >> 0x10 & 4;
      iVar23 = iVar23 << (sbyte)uVar6;
      uVar7 = iVar23 - 0x4000U >> 0x10 & 2;
      iVar23 = (((uint)(iVar23 << (sbyte)uVar7) >> 0xf) - uVar7) - (uVar22 + uVar6);
      puVar25 = (uint64_t *)
                (ulonglong)
                (((uint)(param_2 >> ((char)iVar23 + 0x15U & 0x3f)) & 1) + (iVar23 + 0xe) * 2);
    }
    else {
      puVar25 = (uint64_t *)0x1f;
    }
  }
  puVar4 = *(uint64_t **)(param_1 + (longlong)puVar25 * 2 + 0x94);
  puVar10 = puVar24;
  if (puVar4 == (uint64_t *)0x0) {
LAB_18076d5d0:
    uVar22 = -2 << ((byte)puVar25 & 0x1f) & param_1[1];
    puVar25 = puVar4;
    if (uVar22 != 0) {
      uVar14 = (-uVar22 & uVar22) - 1;
      uVar22 = uVar14 >> 0xc & 0x10;
      uVar14 = uVar14 >> (sbyte)uVar22;
      uVar6 = uVar14 >> 5 & 8;
      uVar14 = uVar14 >> (sbyte)uVar6;
      uVar7 = uVar14 >> 2 & 4;
      uVar14 = uVar14 >> (sbyte)uVar7;
      uVar8 = uVar14 >> 1 & 2;
      uVar14 = uVar14 >> (sbyte)uVar8;
      uVar9 = uVar14 >> 1 & 1;
      puVar25 = *(uint64_t **)
                 (param_1 +
                 (ulonglong)((uVar14 >> (sbyte)uVar9) + uVar22 + uVar6 + uVar7 + uVar8 + uVar9) * 2
                 + 0x94);
    }
    while (puVar4 = puVar25, puVar4 != (uint64_t *)0x0) {
LAB_18076d640:
      uVar16 = (puVar4[1] & 0xfffffffffffffffc) - param_2;
      puVar12 = puVar4;
      if (uVar20 <= uVar16) {
        uVar16 = uVar20;
        puVar12 = puVar10;
      }
      puVar25 = (uint64_t *)puVar4[4];
      uVar20 = uVar16;
      puVar10 = puVar12;
      if ((uint64_t *)puVar4[4] == (uint64_t *)0x0) {
        puVar25 = (uint64_t *)puVar4[5];
      }
    }
    if (puVar10 == (uint64_t *)0x0) {
      return (uint64_t *)0x0;
    }
  }
  else {
    if ((int)puVar25 != 0x1f) {
      puVar10 = (uint64_t *)(0x3f - (ulonglong)((int)((ulonglong)puVar25 >> 1) + 6));
    }
    lVar18 = param_2 << ((byte)puVar10 & 0x3f);
    puVar12 = puVar4;
    puVar15 = puVar24;
    uVar16 = uVar20;
    puVar21 = puVar24;
    while ((puVar4 = puVar12, uVar11 = (puVar4[1] & 0xfffffffffffffffc) - param_2, uVar20 = uVar11,
           puVar10 = puVar4, uVar16 <= uVar11 || (uVar11 != 0))) {
      if (uVar16 <= uVar11) {
        uVar20 = uVar16;
      }
      puVar19 = (uint64_t *)puVar4[5];
      if (uVar16 <= uVar11) {
        puVar10 = puVar21;
      }
      puVar12 = (uint64_t *)puVar4[4 - (lVar18 >> 0x3f)];
      puVar4 = puVar15;
      if ((puVar19 != (uint64_t *)0x0) && (puVar19 != puVar12)) {
        puVar4 = puVar19;
      }
      if (puVar12 == (uint64_t *)0x0) break;
      lVar18 = lVar18 * 2;
      puVar15 = puVar4;
      uVar16 = uVar20;
      puVar21 = puVar10;
    }
    if (puVar4 != (uint64_t *)0x0) goto LAB_18076d640;
    if (puVar10 == (uint64_t *)0x0) goto LAB_18076d5d0;
  }
  if (((*(longlong *)(param_1 + 2) - param_2 <= uVar20) ||
      (puVar25 = *(uint64_t **)(param_1 + 6), puVar10 < puVar25)) ||
     (puVar4 = (uint64_t *)((longlong)puVar10 + param_2), puVar4 <= puVar10)) {
    return (uint64_t *)0x0;
  }
  puVar12 = (uint64_t *)puVar10[3];
  uVar16 = puVar10[6];
  if (puVar12 == puVar10) {
    puVar15 = (uint64_t *)puVar10[5];
    puVar21 = puVar10 + 5;
    if ((uint64_t *)puVar10[5] == (uint64_t *)0x0) {
      puVar12 = (uint64_t *)puVar10[4];
      puVar15 = puVar12;
      puVar21 = puVar10 + 4;
      if (puVar12 == (uint64_t *)0x0) goto LAB_18076d71a;
    }
    do {
      do {
        puVar19 = puVar21;
        puVar12 = puVar15;
        puVar15 = (uint64_t *)puVar12[5];
        puVar21 = puVar12 + 5;
      } while ((uint64_t *)puVar12[5] != (uint64_t *)0x0);
      puVar15 = (uint64_t *)puVar12[4];
      puVar21 = puVar12 + 4;
    } while ((uint64_t *)puVar12[4] != (uint64_t *)0x0);
    if (puVar25 <= puVar19) {
      *puVar19 = 0;
    }
  }
  else {
    puVar15 = (uint64_t *)puVar10[2];
    if (puVar25 <= puVar15) {
      puVar15[3] = puVar12;
      puVar12[2] = puVar15;
    }
  }
LAB_18076d71a:
  if (uVar16 != 0) {
    if (puVar10 == *(uint64_t **)(param_1 + (ulonglong)*(uint *)(puVar10 + 7) * 2 + 0x94)) {
      *(uint64_t **)(param_1 + (ulonglong)*(uint *)(puVar10 + 7) * 2 + 0x94) = puVar12;
      if (puVar12 == (uint64_t *)0x0) {
        param_1[1] = param_1[1] & ~(1 << (*(uint *)(puVar10 + 7) & 0x1f));
        goto LAB_18076d79c;
      }
    }
    else {
      if (*(ulonglong *)(param_1 + 6) <= uVar16) {
        if (*(uint64_t **)(uVar16 + 0x20) == puVar10) {
          *(uint64_t **)(uVar16 + 0x20) = puVar12;
        }
        else {
          *(uint64_t **)(uVar16 + 0x28) = puVar12;
        }
      }
      if (puVar12 == (uint64_t *)0x0) goto LAB_18076d79c;
    }
    if (*(uint64_t **)(param_1 + 6) <= puVar12) {
      puVar12[6] = uVar16;
      uVar16 = puVar10[4];
      if ((uVar16 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar16)) {
        puVar12[4] = uVar16;
        *(uint64_t **)(uVar16 + 0x30) = puVar12;
      }
      uVar16 = puVar10[5];
      if ((uVar16 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar16)) {
        puVar12[5] = uVar16;
        *(uint64_t **)(uVar16 + 0x30) = puVar12;
      }
    }
  }
LAB_18076d79c:
  if (uVar20 < 0x20) {
    puVar10[1] = uVar20 + param_2 | 3;
    puVar2 = (ulonglong *)((longlong)puVar10 + param_2 + uVar20 + 8);
    *puVar2 = *puVar2 | 1;
    return puVar10 + 2;
  }
  puVar10[1] = param_2 | 3;
  puVar4[1] = uVar20 | 1;
  *(ulonglong *)((longlong)puVar4 + uVar20) = uVar20;
  if (uVar20 >> 3 < 0x20) {
    uVar17 = (uint)(uVar20 >> 3);
    puVar1 = param_1 + ((ulonglong)(uVar17 * 2) + 8) * 2;
    puVar13 = puVar1;
    if ((*param_1 >> (uVar17 & 0x1f) & 1) == 0) {
      *param_1 = *param_1 | 1 << (uVar17 & 0x1f);
    }
    else if (*(uint **)(param_1 + 6) <= *(uint **)(puVar1 + 4)) {
      puVar13 = *(uint **)(puVar1 + 4);
    }
    *(uint64_t **)(puVar1 + 4) = puVar4;
    *(uint64_t **)(puVar13 + 6) = puVar4;
    puVar4[2] = puVar13;
    puVar4[3] = puVar1;
    return puVar10 + 2;
  }
  if (uVar20 >> 8 == 0) {
    uVar17 = 0;
  }
  else if (uVar20 >> 8 < 0x10000) {
    iVar23 = (int)(uVar20 >> 8);
    uVar17 = iVar23 - 0x100U >> 0x10 & 8;
    iVar23 = iVar23 << (sbyte)uVar17;
    uVar22 = iVar23 - 0x1000U >> 0x10 & 4;
    iVar23 = iVar23 << (sbyte)uVar22;
    uVar6 = iVar23 - 0x4000U >> 0x10 & 2;
    iVar23 = (((uint)(iVar23 << (sbyte)uVar6) >> 0xf) - uVar6) - (uVar17 + uVar22);
    uVar17 = ((uint)(uVar20 >> ((char)iVar23 + 0x15U & 0x3f)) & 1) + (iVar23 + 0xe) * 2;
  }
  *(uint *)(puVar4 + 7) = uVar17;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar2 = (ulonglong *)(param_1 + ((ulonglong)uVar17 + 0x4a) * 2);
  if ((param_1[1] >> (uVar17 & 0x1f) & 1) == 0) {
    param_1[1] = param_1[1] | 1 << (uVar17 & 0x1f);
    *puVar2 = (ulonglong)puVar4;
    puVar4[6] = puVar2;
    puVar4[3] = puVar4;
    puVar4[2] = puVar4;
    return puVar10 + 2;
  }
  if (uVar17 != 0x1f) {
    puVar24 = (uint64_t *)(0x3f - (ulonglong)((uVar17 >> 1) + 6));
  }
  uVar16 = *(ulonglong *)(*puVar2 + 8);
  uVar11 = *puVar2;
  lVar18 = uVar20 << ((byte)puVar24 & 0x3f);
  do {
    if ((uVar16 & 0xfffffffffffffffc) == uVar20) {
      if ((*(ulonglong *)(param_1 + 6) <= uVar11) &&
         (uVar20 = *(ulonglong *)(uVar11 + 0x10), *(ulonglong *)(param_1 + 6) <= uVar20)) {
        *(uint64_t **)(uVar20 + 0x18) = puVar4;
        *(uint64_t **)(uVar11 + 0x10) = puVar4;
        puVar4[2] = uVar20;
        puVar4[3] = uVar11;
        puVar4[6] = 0;
      }
LAB_18076d951:
      return puVar10 + 2;
    }
    lVar5 = 4 - (lVar18 >> 0x3f);
    puVar25 = (uint64_t *)(uVar11 + lVar5 * 8);
    uVar3 = *(ulonglong *)(uVar11 + lVar5 * 8);
    if (uVar3 == 0) {
      if (*(uint64_t **)(param_1 + 6) <= puVar25) {
        *puVar25 = puVar4;
        puVar4[6] = uVar11;
        puVar4[3] = puVar4;
        puVar4[2] = puVar4;
        return puVar10 + 2;
      }
      goto LAB_18076d951;
    }
    uVar16 = *(ulonglong *)(uVar3 + 8);
    uVar11 = uVar3;
    lVar18 = lVar18 * 2;
  } while( true );
}



longlong FUN_18076d990(uint *param_1,ulonglong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint64_t *puVar18;
  
  uVar15 = (-param_1[1] & param_1[1]) - 1;
  uVar6 = uVar15 >> 0xc & 0x10;
  uVar15 = uVar15 >> (sbyte)uVar6;
  uVar8 = uVar15 >> 5 & 8;
  uVar15 = uVar15 >> (sbyte)uVar8;
  uVar9 = uVar15 >> 2 & 4;
  uVar15 = uVar15 >> (sbyte)uVar9;
  uVar10 = uVar15 >> 1 & 2;
  uVar15 = uVar15 >> (sbyte)uVar10;
  uVar11 = uVar15 >> 1 & 1;
  uVar14 = *(ulonglong *)
            (param_1 +
            (ulonglong)((uVar15 >> (sbyte)uVar11) + uVar6 + uVar8 + uVar9 + uVar10 + uVar11) * 2 +
            0x94);
  uVar7 = uVar14;
  uVar12 = (*(ulonglong *)(uVar14 + 8) & 0xfffffffffffffffc) - param_2;
  while( true ) {
    uVar17 = uVar12;
    uVar16 = uVar7;
    uVar7 = *(ulonglong *)(uVar14 + 0x20);
    if (uVar7 == 0) {
      uVar7 = *(ulonglong *)(uVar14 + 0x28);
    }
    if (uVar7 == 0) break;
    uVar12 = (*(ulonglong *)(uVar7 + 8) & 0xfffffffffffffffc) - param_2;
    uVar14 = uVar7;
    if (uVar17 <= uVar12) {
      uVar7 = uVar16;
      uVar12 = uVar17;
    }
  }
  if ((uVar16 < *(ulonglong *)(param_1 + 6)) || (uVar14 = uVar16 + param_2, uVar14 <= uVar16)) {
    return 0;
  }
  uVar7 = *(ulonglong *)(uVar16 + 0x18);
  uVar12 = *(ulonglong *)(uVar16 + 0x30);
  if (uVar7 == uVar16) {
    uVar3 = *(ulonglong *)(uVar16 + 0x28);
    puVar5 = (uint64_t *)(uVar16 + 0x28);
    if (*(ulonglong *)(uVar16 + 0x28) == 0) {
      uVar7 = *(ulonglong *)(uVar16 + 0x20);
      uVar3 = uVar7;
      puVar5 = (uint64_t *)(uVar16 + 0x20);
      if (uVar7 == 0) goto LAB_18076dacf;
    }
    do {
      do {
        puVar18 = puVar5;
        uVar7 = uVar3;
        uVar3 = *(ulonglong *)(uVar7 + 0x28);
        puVar5 = (uint64_t *)(uVar7 + 0x28);
      } while (*(ulonglong *)(uVar7 + 0x28) != 0);
      uVar3 = *(ulonglong *)(uVar7 + 0x20);
      puVar5 = (uint64_t *)(uVar7 + 0x20);
    } while (*(ulonglong *)(uVar7 + 0x20) != 0);
    if (*(uint64_t **)(param_1 + 6) <= puVar18) {
      *puVar18 = 0;
    }
  }
  else {
    uVar3 = *(ulonglong *)(uVar16 + 0x10);
    if (*(ulonglong *)(param_1 + 6) <= uVar3) {
      *(ulonglong *)(uVar3 + 0x18) = uVar7;
      *(ulonglong *)(uVar7 + 0x10) = uVar3;
    }
  }
LAB_18076dacf:
  if (uVar12 != 0) {
    if (uVar16 == *(ulonglong *)(param_1 + (ulonglong)*(uint *)(uVar16 + 0x38) * 2 + 0x94)) {
      *(ulonglong *)(param_1 + (ulonglong)*(uint *)(uVar16 + 0x38) * 2 + 0x94) = uVar7;
      if (uVar7 == 0) {
        param_1[1] = param_1[1] & ~(1 << (*(uint *)(uVar16 + 0x38) & 0x1f));
        goto LAB_18076db53;
      }
    }
    else {
      if (*(ulonglong *)(param_1 + 6) <= uVar12) {
        if (*(ulonglong *)(uVar12 + 0x20) == uVar16) {
          *(ulonglong *)(uVar12 + 0x20) = uVar7;
        }
        else {
          *(ulonglong *)(uVar12 + 0x28) = uVar7;
        }
      }
      if (uVar7 == 0) goto LAB_18076db53;
    }
    if (*(ulonglong *)(param_1 + 6) <= uVar7) {
      *(ulonglong *)(uVar7 + 0x30) = uVar12;
      uVar12 = *(ulonglong *)(uVar16 + 0x20);
      if ((uVar12 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar12)) {
        *(ulonglong *)(uVar7 + 0x20) = uVar12;
        *(ulonglong *)(uVar12 + 0x30) = uVar7;
      }
      uVar12 = *(ulonglong *)(uVar16 + 0x28);
      if ((uVar12 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar12)) {
        *(ulonglong *)(uVar7 + 0x28) = uVar12;
        *(ulonglong *)(uVar12 + 0x30) = uVar7;
      }
    }
  }
LAB_18076db53:
  if (uVar17 < 0x20) {
    *(ulonglong *)(uVar16 + 8) = uVar17 + param_2 | 3;
    puVar2 = (ulonglong *)(uVar17 + uVar16 + 8 + param_2);
    *puVar2 = *puVar2 | 1;
    return uVar16 + 0x10;
  }
  *(ulonglong *)(uVar16 + 8) = param_2 | 3;
  *(ulonglong *)(uVar14 + 8) = uVar17 | 1;
  *(ulonglong *)(uVar14 + uVar17) = uVar17;
  if (*(ulonglong *)(param_1 + 2) != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    uVar6 = (uint)(*(ulonglong *)(param_1 + 2) >> 3);
    puVar1 = param_1 + ((ulonglong)(uVar6 * 2) + 8) * 2;
    puVar13 = puVar1;
    if ((*param_1 >> (uVar6 & 0x1f) & 1) == 0) {
      *param_1 = *param_1 | 1 << (uVar6 & 0x1f);
    }
    else if (*(uint **)(param_1 + 6) <= *(uint **)(puVar1 + 4)) {
      puVar13 = *(uint **)(puVar1 + 4);
    }
    *(longlong *)(puVar1 + 4) = lVar4;
    *(longlong *)(puVar13 + 6) = lVar4;
    *(uint **)(lVar4 + 0x10) = puVar13;
    *(uint **)(lVar4 + 0x18) = puVar1;
  }
  *(ulonglong *)(param_1 + 2) = uVar17;
  *(ulonglong *)(param_1 + 8) = uVar14;
  return uVar16 + 0x10;
}



longlong FUN_18076da5c(uint64_t param_1,uint64_t param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  ulonglong in_RAX;
  uint *puVar7;
  uint uVar8;
  ulonglong unaff_RBX;
  longlong unaff_RSI;
  uint *in_R10;
  uint64_t *puVar9;
  
  uVar3 = *(ulonglong *)(param_3 + 0x30);
  if (in_RAX == param_3) {
    uVar4 = *(ulonglong *)(param_3 + 0x28);
    puVar6 = (uint64_t *)(param_3 + 0x28);
    if (*(ulonglong *)(param_3 + 0x28) == 0) {
      in_RAX = *(ulonglong *)(param_3 + 0x20);
      uVar4 = in_RAX;
      puVar6 = (uint64_t *)(param_3 + 0x20);
      if (in_RAX == 0) goto LAB_18076dacf;
    }
    do {
      do {
        puVar9 = puVar6;
        in_RAX = uVar4;
        uVar4 = *(ulonglong *)(in_RAX + 0x28);
        puVar6 = (uint64_t *)(in_RAX + 0x28);
      } while (*(ulonglong *)(in_RAX + 0x28) != 0);
      uVar4 = *(ulonglong *)(in_RAX + 0x20);
      puVar6 = (uint64_t *)(in_RAX + 0x20);
    } while (*(ulonglong *)(in_RAX + 0x20) != 0);
    if (*(uint64_t **)(in_R10 + 6) <= puVar9) {
      *puVar9 = 0;
    }
  }
  else {
    uVar4 = *(ulonglong *)(param_3 + 0x10);
    if (*(ulonglong *)(in_R10 + 6) <= uVar4) {
      *(ulonglong *)(uVar4 + 0x18) = in_RAX;
      *(ulonglong *)(in_RAX + 0x10) = uVar4;
    }
  }
LAB_18076dacf:
  if (uVar3 != 0) {
    if (param_3 == *(ulonglong *)(in_R10 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94)) {
      *(ulonglong *)(in_R10 + (ulonglong)*(uint *)(param_3 + 0x38) * 2 + 0x94) = in_RAX;
      if (in_RAX == 0) {
        in_R10[1] = in_R10[1] & ~(1 << (*(uint *)(param_3 + 0x38) & 0x1f));
        goto LAB_18076db53;
      }
    }
    else {
      if (*(ulonglong *)(in_R10 + 6) <= uVar3) {
        if (*(ulonglong *)(uVar3 + 0x20) == param_3) {
          *(ulonglong *)(uVar3 + 0x20) = in_RAX;
        }
        else {
          *(ulonglong *)(uVar3 + 0x28) = in_RAX;
        }
      }
      if (in_RAX == 0) goto LAB_18076db53;
    }
    if (*(ulonglong *)(in_R10 + 6) <= in_RAX) {
      *(ulonglong *)(in_RAX + 0x30) = uVar3;
      uVar3 = *(ulonglong *)(param_3 + 0x20);
      if ((uVar3 != 0) && (*(ulonglong *)(in_R10 + 6) <= uVar3)) {
        *(ulonglong *)(in_RAX + 0x20) = uVar3;
        *(ulonglong *)(uVar3 + 0x30) = in_RAX;
      }
      uVar3 = *(ulonglong *)(param_3 + 0x28);
      if ((uVar3 != 0) && (*(ulonglong *)(in_R10 + 6) <= uVar3)) {
        *(ulonglong *)(in_RAX + 0x28) = uVar3;
        *(ulonglong *)(uVar3 + 0x30) = in_RAX;
      }
    }
  }
LAB_18076db53:
  if (0x1f < param_4) {
    *(ulonglong *)(param_3 + 8) = unaff_RBX | 3;
    *(ulonglong *)(unaff_RSI + 8) = param_4 | 1;
    *(ulonglong *)(unaff_RSI + param_4) = param_4;
    if (*(ulonglong *)(in_R10 + 2) != 0) {
      lVar5 = *(longlong *)(in_R10 + 8);
      uVar8 = (uint)(*(ulonglong *)(in_R10 + 2) >> 3);
      puVar1 = in_R10 + ((ulonglong)(uVar8 * 2) + 8) * 2;
      puVar7 = puVar1;
      if ((*in_R10 >> (uVar8 & 0x1f) & 1) == 0) {
        *in_R10 = *in_R10 | 1 << (uVar8 & 0x1f);
      }
      else if (*(uint **)(in_R10 + 6) <= *(uint **)(puVar1 + 4)) {
        puVar7 = *(uint **)(puVar1 + 4);
      }
      *(longlong *)(puVar1 + 4) = lVar5;
      *(longlong *)(puVar7 + 6) = lVar5;
      *(uint **)(lVar5 + 0x10) = puVar7;
      *(uint **)(lVar5 + 0x18) = puVar1;
    }
    *(ulonglong *)(in_R10 + 2) = param_4;
    *(longlong *)(in_R10 + 8) = unaff_RSI;
    return param_3 + 0x10;
  }
  *(ulonglong *)(param_3 + 8) = param_4 + unaff_RBX | 3;
  puVar2 = (ulonglong *)(param_4 + param_3 + 8 + unaff_RBX);
  *puVar2 = *puVar2 | 1;
  return param_3 + 0x10;
}



longlong FUN_18076db5e(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong unaff_RBX;
  
  *(ulonglong *)(param_3 + 8) = param_4 + unaff_RBX | 3;
  puVar1 = (ulonglong *)(param_4 + param_3 + 8 + unaff_RBX);
  *puVar1 = *puVar1 | 1;
  return param_3 + 0x10;
}



int32_t FUN_18076dc00(short *param_1,longlong param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 4);
  if ((lVar3 != 0) && ((int)*param_1 * (int)param_1[1] != (int)param_3[1] * (int)*param_3)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(param_2 + 0x10bd0,lVar3,&system_buffer_ptr,0,1);
  }
  if (lVar3 == 0) {
    if (*(longlong *)(param_3 + 4) == 0) {
      return 0;
    }
    lVar3 = FUN_180741e10(param_2 + 0x10bd0,(int)*param_3 * (int)param_3[1] * 4,&system_buffer_ptr,0,0,0
                          ,1);
    if (lVar3 == 0) {
      return 0x26;
    }
    sVar1 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = sVar1;
    *(longlong *)(param_1 + 4) = lVar3;
  }
  if ((*(longlong *)(param_3 + 4) != 0) && (param_1 != param_3)) {
    sVar1 = *param_3;
    *param_1 = sVar1;
    sVar2 = param_3[1];
    param_1[1] = sVar2;
                    // WARNING: Subroutine does not return
    memcpy(lVar3,*(uint64_t *)(param_3 + 4),(longlong)((int)sVar1 * (int)sVar2) << 2);
  }
  return 0;
}



uint64_t FUN_18076dd20(short *param_1,longlong param_2,int *param_3,int *param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int32_t uVar7;
  
  if (param_2 == 0) {
    if (param_3 == (int *)0x0) {
      if (param_4 == (int *)0x0) {
        return 0x1f;
      }
    }
    else {
      *param_3 = (int)param_1[1];
      if (param_4 == (int *)0x0) {
        return 0;
      }
    }
    *param_4 = (int)*param_1;
    return 0;
  }
  if ((param_3 != (int *)0x0) && (param_4 != (int *)0x0)) {
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar2 = (int)param_1[1];
      *param_3 = iVar2;
    }
    iVar4 = *param_4;
    if (iVar4 == 0) {
      iVar4 = (int)*param_1;
      *param_4 = iVar4;
      iVar2 = *param_3;
    }
    if ((((iVar2 < 0x21) && (iVar4 < 0x21)) && (-1 < iVar2)) && (-1 < iVar4)) {
      iVar6 = iVar4;
      if (param_5 != 0) {
        iVar6 = param_5;
      }
      if (((*(longlong *)(param_1 + 4) != 0) && (iVar2 == param_1[1])) && (iVar6 == *param_1)) {
                    // WARNING: Subroutine does not return
        memcpy(param_2,*(longlong *)(param_1 + 4),(longlong)(iVar2 * iVar4) << 2);
      }
      iVar4 = 0;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          iVar3 = 0;
          if (0 < *param_4) {
            lVar5 = 0;
            do {
              if (*(longlong *)(param_1 + 4) == 0) {
                if (lVar5 == iVar4) {
                  uVar7 = 0x3f800000;
                }
                else {
LAB_18076de65:
                  uVar7 = 0;
                }
              }
              else {
                if ((param_1[1] <= iVar4) || (*param_1 <= iVar3)) goto LAB_18076de65;
                uVar7 = *(int32_t *)
                         (*(longlong *)(param_1 + 4) + (longlong)(*param_1 * iVar4 + iVar3) * 4);
              }
              lVar1 = iVar2 + lVar5;
              iVar3 = iVar3 + 1;
              lVar5 = lVar5 + 1;
              *(int32_t *)(param_2 + lVar1 * 4) = uVar7;
            } while (iVar3 < *param_4);
          }
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + iVar6;
        } while (iVar4 < *param_3);
      }
      return 0;
    }
  }
  return 0x1f;
}



uint64_t FUN_18076ddb2(int32_t param_1,int param_2,uint64_t param_3,longlong param_4)

{
  longlong lVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RSI;
  int iVar5;
  short *in_R10;
  int *in_R11;
  int *unaff_R14;
  int iVar6;
  bool in_ZF;
  int32_t uVar7;
  
  iVar6 = param_2;
  if (!in_ZF) {
    iVar6 = in_EAX;
  }
  if (((param_4 != 0) && (in_ECX == in_R10[1])) && (iVar6 == *in_R10)) {
                    // WARNING: Subroutine does not return
    memcpy(param_1,param_4,(longlong)(in_ECX * param_2) << 2);
  }
  iVar5 = 0;
  if (0 < in_ECX) {
    iVar4 = 0;
    do {
      iVar2 = 0;
      if (0 < *in_R11) {
        lVar3 = 0;
        do {
          if (*(longlong *)(in_R10 + 4) == 0) {
            if (lVar3 == iVar5) {
              uVar7 = 0x3f800000;
            }
            else {
LAB_18076de65:
              uVar7 = 0;
            }
          }
          else {
            if ((in_R10[1] <= iVar5) || (*in_R10 <= iVar2)) goto LAB_18076de65;
            uVar7 = *(int32_t *)
                     (*(longlong *)(in_R10 + 4) + (longlong)(*in_R10 * iVar5 + iVar2) * 4);
          }
          lVar1 = iVar4 + lVar3;
          iVar2 = iVar2 + 1;
          lVar3 = lVar3 + 1;
          *(int32_t *)(unaff_RSI + lVar1 * 4) = uVar7;
        } while (iVar2 < *in_R11);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + iVar6;
    } while (iVar5 < *unaff_R14);
  }
  return 0;
}



uint64_t FUN_18076ddf9(int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RSI;
  int iVar5;
  short *in_R10;
  int *in_R11;
  int *unaff_R14;
  int unaff_R15D;
  int32_t uVar6;
  
  iVar5 = 0;
  if (0 < param_1) {
    iVar4 = 0;
    do {
      iVar2 = 0;
      if (0 < *in_R11) {
        lVar3 = 0;
        do {
          if (*(longlong *)(in_R10 + 4) == 0) {
            if (lVar3 == iVar5) {
              uVar6 = 0x3f800000;
            }
            else {
LAB_18076de65:
              uVar6 = 0;
            }
          }
          else {
            if ((in_R10[1] <= iVar5) || (*in_R10 <= iVar2)) goto LAB_18076de65;
            uVar6 = *(int32_t *)
                     (*(longlong *)(in_R10 + 4) + (longlong)(*in_R10 * iVar5 + iVar2) * 4);
          }
          lVar1 = iVar4 + lVar3;
          iVar2 = iVar2 + 1;
          lVar3 = lVar3 + 1;
          *(int32_t *)(unaff_RSI + lVar1 * 4) = uVar6;
        } while (iVar2 < *in_R11);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + unaff_R15D;
    } while (iVar5 < *unaff_R14);
  }
  return 0;
}



uint64_t FUN_18076de0f(uint64_t param_1,int32_t param_2,int32_t param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RSI;
  short *in_R10;
  int *in_R11;
  int *unaff_R14;
  int unaff_R15D;
  int32_t uVar5;
  
  iVar4 = 0;
  do {
    iVar2 = 0;
    if (0 < *in_R11) {
      lVar3 = 0;
      do {
        uVar5 = param_3;
        if (*(longlong *)(in_R10 + 4) == 0) {
          if (lVar3 == param_4) {
            uVar5 = param_2;
          }
        }
        else if ((param_4 < in_R10[1]) && (iVar2 < *in_R10)) {
          uVar5 = *(int32_t *)
                   (*(longlong *)(in_R10 + 4) + (longlong)(*in_R10 * param_4 + iVar2) * 4);
        }
        lVar1 = iVar4 + lVar3;
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 1;
        *(int32_t *)(unaff_RSI + lVar1 * 4) = uVar5;
      } while (iVar2 < *in_R11);
    }
    param_4 = param_4 + 1;
    iVar4 = iVar4 + unaff_R15D;
  } while (param_4 < *unaff_R14);
  return 0;
}



uint64_t FUN_18076de95(void)

{
  return 0;
}







