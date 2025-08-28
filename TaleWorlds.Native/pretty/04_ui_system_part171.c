#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part171.c - 5 个函数

// 函数: void FUN_18076b9d0(uint *param_1,ulonglong param_2,longlong param_3,uint param_4)
void FUN_18076b9d0(uint *param_1,ulonglong param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  uint64_t *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong *puVar14;
  uint *puVar15;
  int iVar16;
  ulonglong *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  
  puVar3 = *(ulonglong **)(param_1 + 10);
  puVar18 = param_1 + 0xda;
  do {
    if ((*(ulonglong **)puVar18 <= puVar3) &&
       (puVar3 < (ulonglong *)(*(longlong *)(puVar18 + 2) + (longlong)*(ulonglong **)puVar18)))
    break;
    puVar18 = *(uint **)(puVar18 + 4);
  } while (puVar18 != (uint *)0x0);
  lVar4 = *(longlong *)(puVar18 + 2);
  lVar12 = *(longlong *)puVar18;
  uVar19 = (lVar4 + lVar12) - 0x5f;
  if ((uVar19 & 0xf) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulonglong)(-((uint)uVar19 & 0xf) & 0xf);
  }
  puVar17 = (ulonglong *)(uVar11 + uVar19);
  if ((ulonglong *)(uVar11 + uVar19) < puVar3 + 4) {
    puVar17 = puVar3;
  }
  if ((param_2 & 0xf) == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = (ulonglong)(-((uint)param_2 & 0xf) & 0xf);
  }
  lVar1 = uVar19 + param_2;
  uVar19 = (param_3 + -0x50) - uVar19;
  *(longlong *)(param_1 + 10) = lVar1;
  *(ulonglong *)(param_1 + 4) = uVar19;
  *(ulonglong *)(lVar1 + 8) = uVar19 | 1;
  *(uint64_t *)(lVar1 + 8 + uVar19) = 0x50;
  *(uint64_t *)(param_1 + 0xc) = *(uint64_t *)(param_1 + 0xea);
  puVar6 = puVar17 + 7;
  puVar17[1] = 0x33;
  uVar19 = *(ulonglong *)(param_1 + 0xdc);
  puVar17[2] = *(ulonglong *)(param_1 + 0xda);
  puVar17[3] = uVar19;
  uVar19 = *(ulonglong *)(param_1 + 0xe0);
  puVar17[4] = *(ulonglong *)(param_1 + 0xde);
  puVar17[5] = uVar19;
  *(ulonglong *)(param_1 + 0xda) = param_2;
  *(longlong *)(param_1 + 0xdc) = param_3;
  param_1[0xe0] = param_4;
  *(ulonglong **)(param_1 + 0xde) = puVar17 + 2;
  *puVar6 = 0xb;
  for (puVar14 = puVar17 + 8; puVar14 < (ulonglong *)(lVar4 + lVar12); puVar14 = puVar14 + 1) {
    puVar6[1] = 0xb;
    puVar6 = puVar6 + 1;
  }
  if (puVar17 != puVar3) {
    puVar17[1] = puVar17[1] & 0xfffffffffffffffe;
    uVar19 = (longlong)puVar17 - (longlong)puVar3;
    puVar3[1] = uVar19 | 1;
    *puVar17 = uVar19;
    if (uVar19 >> 3 < 0x20) {
      uVar9 = (uint)(uVar19 >> 3);
      puVar18 = param_1 + ((ulonglong)(uVar9 * 2) + 8) * 2;
      puVar15 = puVar18;
      if ((*param_1 >> (uVar9 & 0x1f) & 1) == 0) {
        *param_1 = *param_1 | 1 << (uVar9 & 0x1f);
      }
      else if (*(uint **)(param_1 + 6) <= *(uint **)(puVar18 + 4)) {
        puVar15 = *(uint **)(puVar18 + 4);
      }
      *(ulonglong **)(puVar18 + 4) = puVar3;
      *(ulonglong **)(puVar15 + 6) = puVar3;
      puVar3[2] = (ulonglong)puVar15;
      puVar3[3] = (ulonglong)puVar18;
    }
    else {
      if (uVar19 >> 8 == 0) {
        uVar9 = 0;
      }
      else if (uVar19 >> 8 < 0x10000) {
        iVar16 = (int)(uVar19 >> 8);
        uVar13 = iVar16 - 0x100U >> 0x10 & 8;
        iVar16 = iVar16 << (sbyte)uVar13;
        uVar9 = iVar16 - 0x1000U >> 0x10 & 4;
        iVar16 = iVar16 << (sbyte)uVar9;
        uVar10 = iVar16 - 0x4000U >> 0x10 & 2;
        iVar16 = (((uint)(iVar16 << (sbyte)uVar10) >> 0xf) - uVar10) - (uVar13 + uVar9);
        uVar9 = ((uint)(uVar19 >> ((char)iVar16 + 0x15U & 0x3f)) & 1) + iVar16 * 2 + 0x1c;
      }
      else {
        uVar9 = 0x1f;
      }
      *(uint *)(puVar3 + 7) = uVar9;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar17 = (ulonglong *)(param_1 + ((ulonglong)uVar9 + 0x4a) * 2);
      if ((param_1[1] >> (uVar9 & 0x1f) & 1) == 0) {
        param_1[1] = param_1[1] | 1 << (uVar9 & 0x1f);
        *puVar17 = (ulonglong)puVar3;
        puVar3[6] = (ulonglong)puVar17;
        puVar3[3] = (ulonglong)puVar3;
        puVar3[2] = (ulonglong)puVar3;
      }
      else {
        if (uVar9 == 0x1f) {
          bVar8 = 0;
        }
        else {
          bVar8 = 0x3f - ((char)(uVar9 >> 1) + '\x06');
        }
        uVar11 = *(ulonglong *)(*puVar17 + 8);
        uVar7 = *puVar17;
        lVar4 = uVar19 << (bVar8 & 0x3f);
        while ((uVar11 & 0xfffffffffffffffc) != uVar19) {
          lVar12 = 4 - (lVar4 >> 0x3f);
          puVar2 = (uint64_t *)(uVar7 + lVar12 * 8);
          uVar5 = *(ulonglong *)(uVar7 + lVar12 * 8);
          if (uVar5 == 0) {
            if (puVar2 < *(uint64_t **)(param_1 + 6)) {
              return;
            }
            *puVar2 = puVar3;
            puVar3[6] = uVar7;
            puVar3[3] = (ulonglong)puVar3;
            puVar3[2] = (ulonglong)puVar3;
            return;
          }
          uVar7 = uVar5;
          lVar4 = lVar4 * 2;
          uVar11 = *(ulonglong *)(uVar5 + 8);
        }
        if ((*(ulonglong *)(param_1 + 6) <= uVar7) &&
           (uVar19 = *(ulonglong *)(uVar7 + 0x10), *(ulonglong *)(param_1 + 6) <= uVar19)) {
          *(ulonglong **)(uVar19 + 0x18) = puVar3;
          *(ulonglong **)(uVar7 + 0x10) = puVar3;
          puVar3[2] = uVar19;
          puVar3[3] = uVar7;
          puVar3[6] = 0;
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18076bcd0(ulonglong param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  ui_system_config = 0;
  if ((0x420 < param_2) && (param_2 < -param_2 - 0x420)) {
    if ((param_1 & 0xf) != 0) {
      uVar1 = (ulonglong)(-((uint)param_1 & 0xf) & 0xf);
    }
                    // WARNING: Subroutine does not return
    memset(param_1 + 0x10 + uVar1,0,0x3d0,param_4,0x58585858,param_2,0x1000,0xffffffffffffffff,
           0xffffffffffffffff,0);
  }
  uRam00000000000003c0 = param_5;
  uRam00000000000003b8 = param_4;
  return 0;
}





// 函数: void FUN_18076bd39(ulonglong param_1)
void FUN_18076bd39(ulonglong param_1)

{
  uint unaff_EBX;
  uint64_t unaff_RSI;
  ulonglong uVar1;
  uint64_t unaff_RDI;
  longlong in_R11;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RDI;
  if ((param_1 & 0xf) == 0) {
    uVar1 = (ulonglong)unaff_EBX;
  }
  else {
    uVar1 = (ulonglong)(-((uint)param_1 & 0xf) & 0xf);
  }
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x10 + uVar1,0,0x3d0);
}





// 函数: void FUN_18076bdff(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_18076bdff(uint64_t param_1,longlong param_2,longlong param_3)

{
  int in_EAX;
  ulonglong uVar1;
  longlong unaff_RDI;
  uint64_t unaff_R15;
  uint64_t in_stack_00000090;
  
  uVar1 = param_2 - (ulonglong)(-in_EAX & 0xf);
  param_3 = (ulonglong)(-in_EAX & 0xf) + param_3;
  *(longlong *)(unaff_RDI + 0x28) = param_3;
  *(ulonglong *)(unaff_RDI + 0x10) = uVar1;
  *(ulonglong *)(param_3 + 8) = uVar1 | 1;
  *(uint64_t *)(param_3 + 8 + uVar1) = 0x50;
  *(uint64_t *)(unaff_RDI + 0x30) = *(uint64_t *)(unaff_RDI + 0x3a8);
  *(int32_t *)(unaff_RDI + 0x380) = 8;
  *(uint64_t *)(unaff_RDI + 0x3c0) = in_stack_00000090;
  *(uint64_t *)(unaff_RDI + 0x3b8) = unaff_R15;
  return;
}





// 函数: void FUN_18076be47(void)
void FUN_18076be47(void)

{
  longlong unaff_RBX;
  uint64_t unaff_R15;
  uint64_t in_stack_00000090;
  
  *(uint64_t *)(unaff_RBX + 0x3c0) = in_stack_00000090;
  *(uint64_t *)(unaff_RBX + 0x3b8) = unaff_R15;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18076c0a0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_3 < 0xffffffffffffff80) {
    plVar2 = (longlong *)(param_1 + 0x388);
    if ((plVar2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x390) == 0)) {
      *(uint64_t *)(param_1 + 0x3a0) = 0xffffffffffffffff;
      *(uint64_t *)(param_1 + 0x3a8) = 0xffffffffffffffff;
      *(int32_t *)(param_1 + 0x3b0) = 0;
      if (*plVar2 == 0) {
        *plVar2 = 0x58585858;
        ui_system_config = 0;
      }
      *(uint64_t *)(param_1 + 0x390) = 0x1000;
      *(uint64_t *)(param_1 + 0x398) = 0x1000;
    }
    uVar1 = param_2 - 0x10;
    uVar6 = *(ulonglong *)(param_2 + -8);
    uVar7 = uVar6 & 0xfffffffffffffffc;
    uVar3 = uVar7 + uVar1;
    if ((((*(ulonglong *)(param_1 + 0x18) <= uVar1) && ((uVar6 & 2) != 0)) && (uVar1 < uVar3)) &&
       ((*(byte *)(uVar3 + 8) & 1) != 0)) {
      if (param_3 < 0x17) {
        uVar8 = 0x20;
      }
      else {
        uVar8 = param_3 + 0x17 & 0xfffffffffffffff0;
      }
      uVar6 = (ulonglong)((uint)uVar6 & 1);
      if (uVar7 < uVar8) {
        if ((uVar3 == *(ulonglong *)(param_1 + 0x28)) &&
           (uVar8 < *(longlong *)(param_1 + 0x10) + uVar7)) {
          uVar7 = (*(longlong *)(param_1 + 0x10) - uVar8) + uVar7;
          *(ulonglong *)(param_2 + -8) = uVar6 | uVar8 | 2;
          *(ulonglong *)(uVar8 + uVar1 + 8) = uVar7 | 1;
          *(ulonglong *)(param_1 + 0x28) = uVar8 + uVar1;
          *(ulonglong *)(param_1 + 0x10) = uVar7;
          return param_2;
        }
        lVar5 = FUN_18076c8c0(param_1,param_3);
        if (lVar5 == 0) {
          return 0;
        }
        if (uVar7 - 8 < param_3) {
          param_3 = uVar7 - 8;
        }
                    // WARNING: Subroutine does not return
        memcpy(lVar5,param_2,param_3);
      }
      uVar7 = uVar7 - uVar8;
      if (uVar7 < 0x20) {
        return param_2;
      }
      lVar5 = uVar8 + uVar1;
      *(ulonglong *)(param_2 + -8) = uVar6 | uVar8 | 2;
      *(ulonglong *)(lVar5 + 8) = uVar7 | 3;
      puVar4 = (ulonglong *)(lVar5 + 8 + uVar7);
      *puVar4 = *puVar4 | 1;
      if (lVar5 == -0x10) {
        return param_2;
      }
      FUN_18076c260(param_1);
      return param_2;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18076c260(uint *param_1,longlong param_2)
void FUN_18076c260(uint *param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint64_t *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  uint *puVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  int iVar21;
  
  if (param_2 == 0) {
    return;
  }
  puVar5 = param_1 + 0xe2;
  bVar11 = 0;
  puVar17 = (ulonglong *)(param_2 + -0x10);
  uVar9 = 0;
  if ((puVar5 != (uint *)0x0) && (*(longlong *)(param_1 + 0xe4) == 0)) {
    param_1[0xe8] = 0xffffffff;
    param_1[0xe9] = 0xffffffff;
    param_1[0xea] = 0xffffffff;
    param_1[0xeb] = 0xffffffff;
    param_1[0xec] = 0;
    if (*(longlong *)puVar5 == 0) {
      puVar5[0] = 0x58585858;
      puVar5[1] = 0;
      ui_system_config = 0;
    }
    param_1[0xe4] = 0x1000;
    param_1[0xe5] = 0;
    param_1[0xe6] = 0x1000;
    param_1[0xe7] = 0;
  }
  puVar15 = *(ulonglong **)(param_1 + 6);
  if (puVar17 < puVar15) {
    return;
  }
  uVar3 = *(ulonglong *)(param_2 + -8);
  if ((uVar3 & 2) == 0) {
    return;
  }
  uVar20 = uVar3 & 0xfffffffffffffffc;
  puVar1 = (ulonglong *)(uVar20 + (longlong)puVar17);
  if ((uVar3 & 1) == 0) {
    uVar3 = *puVar17;
    puVar17 = (ulonglong *)((longlong)puVar17 - uVar3);
    uVar20 = uVar20 + uVar3;
    if (puVar17 < puVar15) {
      return;
    }
    if (puVar17 == *(ulonglong **)(param_1 + 8)) {
      if ((puVar1[1] & 3) == 3) {
        *(ulonglong *)(param_1 + 2) = uVar20;
        puVar1[1] = puVar1[1] & 0xfffffffffffffffe;
        puVar17[1] = uVar20 | 1;
        *(ulonglong *)((longlong)puVar17 + uVar20) = uVar20;
        return;
      }
    }
    else if (uVar3 >> 3 < 0x20) {
      puVar14 = (ulonglong *)puVar17[2];
      puVar4 = (ulonglong *)puVar17[3];
      uVar12 = (uint)(uVar3 >> 3);
      if (puVar14 == puVar4) {
        *param_1 = *param_1 & ~(1 << (uVar12 & 0x1f));
      }
      else if (((puVar14 == (ulonglong *)(param_1 + ((ulonglong)(uVar12 * 2) + 8) * 2)) ||
               (puVar15 <= puVar14)) &&
              ((puVar4 == (ulonglong *)(param_1 + ((ulonglong)(uVar12 * 2) + 8) * 2) ||
               (puVar15 <= puVar4)))) {
        puVar14[3] = (ulonglong)puVar4;
        puVar4[2] = (ulonglong)puVar14;
      }
    }
    else {
      puVar14 = (ulonglong *)puVar17[3];
      uVar3 = puVar17[6];
      if (puVar14 == puVar17) {
        puVar4 = (ulonglong *)puVar17[5];
        puVar19 = puVar17 + 5;
        if ((ulonglong *)puVar17[5] == (ulonglong *)0x0) {
          puVar14 = (ulonglong *)puVar17[4];
          puVar4 = puVar14;
          puVar19 = puVar17 + 4;
          if (puVar14 == (ulonglong *)0x0) goto LAB_18076c3da;
        }
        do {
          do {
            puVar18 = puVar19;
            puVar14 = puVar4;
            puVar4 = (ulonglong *)puVar14[5];
            puVar19 = puVar14 + 5;
          } while ((ulonglong *)puVar14[5] != (ulonglong *)0x0);
          puVar4 = (ulonglong *)puVar14[4];
          puVar19 = puVar14 + 4;
        } while ((ulonglong *)puVar14[4] != (ulonglong *)0x0);
        if (puVar15 <= puVar18) {
          *puVar18 = 0;
        }
      }
      else {
        puVar4 = (ulonglong *)puVar17[2];
        if (puVar15 <= puVar4) {
          puVar4[3] = (ulonglong)puVar14;
          puVar14[2] = (ulonglong)puVar4;
        }
      }
LAB_18076c3da:
      if (uVar3 != 0) {
        if (puVar17 == *(ulonglong **)(param_1 + (ulonglong)(uint)puVar17[7] * 2 + 0x94)) {
          *(ulonglong **)(param_1 + (ulonglong)(uint)puVar17[7] * 2 + 0x94) = puVar14;
          if (puVar14 == (ulonglong *)0x0) {
            param_1[1] = param_1[1] & ~(1 << ((uint)puVar17[7] & 0x1f));
          }
          else {
LAB_18076c495:
            if (*(ulonglong **)(param_1 + 6) <= puVar14) {
              puVar14[6] = uVar3;
              uVar3 = puVar17[4];
              if ((uVar3 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar3)) {
                puVar14[4] = uVar3;
                *(ulonglong **)(uVar3 + 0x30) = puVar14;
              }
              uVar3 = puVar17[5];
              if ((uVar3 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar3)) {
                puVar14[5] = uVar3;
                *(ulonglong **)(uVar3 + 0x30) = puVar14;
              }
            }
          }
        }
        else {
          if (*(ulonglong *)(param_1 + 6) <= uVar3) {
            if (*(ulonglong **)(uVar3 + 0x20) == puVar17) {
              *(ulonglong **)(uVar3 + 0x20) = puVar14;
            }
            else {
              *(ulonglong **)(uVar3 + 0x28) = puVar14;
            }
          }
          if (puVar14 != (ulonglong *)0x0) goto LAB_18076c495;
        }
      }
    }
  }
  if (puVar1 <= puVar17) {
    return;
  }
  uVar3 = puVar1[1];
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((uVar3 & 2) != 0) {
    puVar1[1] = uVar3 & 0xfffffffffffffffe;
    puVar17[1] = uVar20 | 1;
    *(ulonglong *)(uVar20 + (longlong)puVar17) = uVar20;
    goto LAB_18076c6e6;
  }
  if (puVar1 == *(ulonglong **)(param_1 + 10)) {
    *(ulonglong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + uVar20;
    *(ulonglong **)(param_1 + 10) = puVar17;
    puVar17[1] = *(ulonglong *)(param_1 + 4) | 1;
    if (puVar17 != *(ulonglong **)(param_1 + 8)) {
      return;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (puVar1 == *(ulonglong **)(param_1 + 8)) {
    *(ulonglong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + uVar20;
    uVar3 = *(ulonglong *)(param_1 + 2);
    *(ulonglong **)(param_1 + 8) = puVar17;
    puVar17[1] = uVar3 | 1;
    *(ulonglong *)(uVar3 + (longlong)puVar17) = uVar3;
    return;
  }
  uVar20 = uVar20 + (uVar3 & 0xfffffffffffffffc);
  if (uVar3 >> 3 < 0x20) {
    puVar5 = (uint *)puVar1[2];
    puVar16 = (uint *)puVar1[3];
    uVar12 = (uint)(uVar3 >> 3);
    if (puVar5 == puVar16) {
      *param_1 = *param_1 & ~(1 << (uVar12 & 0x1f));
    }
    else if (((puVar5 == param_1 + ((ulonglong)(uVar12 * 2) + 8) * 2) ||
             (*(uint **)(param_1 + 6) <= puVar5)) &&
            ((puVar16 == param_1 + ((ulonglong)(uVar12 * 2) + 8) * 2 ||
             (*(uint **)(param_1 + 6) <= puVar16)))) {
      *(uint **)(puVar5 + 6) = puVar16;
      *(uint **)(puVar16 + 4) = puVar5;
    }
  }
  else {
    puVar15 = (ulonglong *)puVar1[3];
    uVar3 = puVar1[6];
    if (puVar15 == puVar1) {
      puVar14 = (ulonglong *)puVar1[5];
      puVar4 = puVar1 + 5;
      if ((ulonglong *)puVar1[5] == (ulonglong *)0x0) {
        puVar15 = (ulonglong *)puVar1[4];
        puVar14 = puVar15;
        puVar4 = puVar1 + 4;
        if (puVar15 == (ulonglong *)0x0) goto LAB_18076c61b;
      }
      do {
        do {
          puVar19 = puVar4;
          puVar15 = puVar14;
          puVar14 = (ulonglong *)puVar15[5];
          puVar4 = puVar15 + 5;
        } while ((ulonglong *)puVar15[5] != (ulonglong *)0x0);
        puVar14 = (ulonglong *)puVar15[4];
        puVar4 = puVar15 + 4;
      } while ((ulonglong *)puVar15[4] != (ulonglong *)0x0);
      if (*(ulonglong **)(param_1 + 6) <= puVar19) {
        *puVar19 = 0;
      }
    }
    else {
      uVar6 = puVar1[2];
      if (*(ulonglong *)(param_1 + 6) <= uVar6) {
        *(ulonglong **)(uVar6 + 0x18) = puVar15;
        puVar15[2] = uVar6;
      }
    }
LAB_18076c61b:
    if (uVar3 != 0) {
      if (puVar1 == *(ulonglong **)(param_1 + (ulonglong)(uint)puVar1[7] * 2 + 0x94)) {
        *(ulonglong **)(param_1 + (ulonglong)(uint)puVar1[7] * 2 + 0x94) = puVar15;
        if (puVar15 == (ulonglong *)0x0) {
          param_1[1] = param_1[1] & ~(1 << ((uint)puVar1[7] & 0x1f));
        }
        else {
LAB_18076c66b:
          if (*(ulonglong **)(param_1 + 6) <= puVar15) {
            puVar15[6] = uVar3;
            uVar3 = puVar1[4];
            if ((uVar3 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar3)) {
              puVar15[4] = uVar3;
              *(ulonglong **)(uVar3 + 0x30) = puVar15;
            }
            uVar3 = puVar1[5];
            if ((uVar3 != 0) && (*(ulonglong *)(param_1 + 6) <= uVar3)) {
              puVar15[5] = uVar3;
              *(ulonglong **)(uVar3 + 0x30) = puVar15;
            }
          }
        }
      }
      else {
        if (*(ulonglong *)(param_1 + 6) <= uVar3) {
          if (*(ulonglong **)(uVar3 + 0x20) == puVar1) {
            *(ulonglong **)(uVar3 + 0x20) = puVar15;
          }
          else {
            *(ulonglong **)(uVar3 + 0x28) = puVar15;
          }
        }
        if (puVar15 != (ulonglong *)0x0) goto LAB_18076c66b;
      }
    }
  }
  puVar17[1] = uVar20 | 1;
  *(ulonglong *)(uVar20 + (longlong)puVar17) = uVar20;
  if (puVar17 == *(ulonglong **)(param_1 + 8)) {
    *(ulonglong *)(param_1 + 2) = uVar20;
    return;
  }
LAB_18076c6e6:
  if (uVar20 >> 3 < 0x20) {
    uVar9 = (uint)(uVar20 >> 3);
    puVar5 = param_1 + ((ulonglong)(uVar9 * 2) + 8) * 2;
    puVar16 = puVar5;
    if ((*param_1 >> (uVar9 & 0x1f) & 1) == 0) {
      *param_1 = *param_1 | 1 << (uVar9 & 0x1f);
    }
    else if (*(uint **)(param_1 + 6) <= *(uint **)(puVar5 + 4)) {
      puVar16 = *(uint **)(puVar5 + 4);
    }
    *(ulonglong **)(puVar5 + 4) = puVar17;
    *(ulonglong **)(puVar16 + 6) = puVar17;
    puVar17[2] = (ulonglong)puVar16;
    puVar17[3] = (ulonglong)puVar5;
    return;
  }
  if (uVar20 >> 8 != 0) {
    if (uVar20 >> 8 < 0x10000) {
      iVar21 = (int)(uVar20 >> 8);
      uVar9 = iVar21 - 0x100U >> 0x10 & 8;
      iVar21 = iVar21 << (sbyte)uVar9;
      uVar12 = iVar21 - 0x1000U >> 0x10 & 4;
      iVar21 = iVar21 << (sbyte)uVar12;
      uVar13 = iVar21 - 0x4000U >> 0x10 & 2;
      iVar21 = (((uint)(iVar21 << (sbyte)uVar13) >> 0xf) - uVar13) - (uVar9 + uVar12);
      uVar9 = ((uint)(uVar20 >> ((char)iVar21 + 0x15U & 0x3f)) & 1) + (iVar21 + 0xe) * 2;
    }
    else {
      uVar9 = 0x1f;
    }
  }
  *(uint *)(puVar17 + 7) = uVar9;
  puVar17[5] = 0;
  puVar17[4] = 0;
  puVar15 = (ulonglong *)(param_1 + ((ulonglong)uVar9 + 0x4a) * 2);
  if ((param_1[1] >> (uVar9 & 0x1f) & 1) == 0) {
    param_1[1] = param_1[1] | 1 << (uVar9 & 0x1f);
    *puVar15 = (ulonglong)puVar17;
    puVar17[6] = (ulonglong)puVar15;
    puVar17[3] = (ulonglong)puVar17;
    puVar17[2] = (ulonglong)puVar17;
    return;
  }
  if (uVar9 != 0x1f) {
    bVar11 = 0x3f - ((char)(uVar9 >> 1) + '\x06');
  }
  uVar3 = *(ulonglong *)(*puVar15 + 8);
  uVar6 = *puVar15;
  lVar8 = uVar20 << (bVar11 & 0x3f);
  while( true ) {
    if ((uVar3 & 0xfffffffffffffffc) == uVar20) {
      if ((*(ulonglong *)(param_1 + 6) <= uVar6) &&
         (uVar3 = *(ulonglong *)(uVar6 + 0x10), *(ulonglong *)(param_1 + 6) <= uVar3)) {
        *(ulonglong **)(uVar3 + 0x18) = puVar17;
        *(ulonglong **)(uVar6 + 0x10) = puVar17;
        puVar17[2] = uVar3;
        puVar17[3] = uVar6;
        puVar17[6] = 0;
      }
      return;
    }
    lVar10 = 4 - (lVar8 >> 0x3f);
    puVar2 = (uint64_t *)(uVar6 + lVar10 * 8);
    uVar7 = *(ulonglong *)(uVar6 + lVar10 * 8);
    if (uVar7 == 0) break;
    uVar3 = *(ulonglong *)(uVar7 + 8);
    uVar6 = uVar7;
    lVar8 = lVar8 * 2;
  }
  if (puVar2 < *(uint64_t **)(param_1 + 6)) {
    return;
  }
  *puVar2 = puVar17;
  puVar17[6] = uVar6;
  puVar17[3] = (ulonglong)puVar17;
  puVar17[2] = (ulonglong)puVar17;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



