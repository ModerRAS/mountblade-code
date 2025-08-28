#include "TaleWorlds.Native.Split.h"
// 03_rendering_part264.c - 10 个函数
// 函数: void UISystem_13980(int64_t param_1,int64_t param_2,int param_3)
void UISystem_13980(int64_t param_1,int64_t param_2,int param_3)
{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int *piVar9;
  int iVar10;
  int64_t lVar11;
  int *piVar12;
  if (0 < param_3) {
    iVar10 = 0;
    lVar6 = 0;
    piVar9 = (int *)(param_2 + 8);
    piVar12 = (int *)(param_1 + 8);
    lVar11 = (int64_t)param_3;
    do {
      if (piVar12[-2] == -1) {
        bVar2 = false;
        lVar5 = 0;
        lVar1 = 0;
        iVar7 = 0;
        do {
          lVar8 = lVar1;
          if (lVar11 <= lVar8) {
            iVar3 = iVar7;
            if (!bVar2) goto LAB_180413a61;
            break;
          }
          if ((lVar8 != lVar6) && (lVar5 = 0, !bVar2)) {
            for (; lVar5 < 3; lVar5 = lVar5 + 1) {
              lVar1 = lVar8 * 3 + lVar5;
              lVar4 = lVar1 + 1;
              if (1 < lVar5) {
                lVar4 = lVar8 * 3;
              }
              if ((piVar9[-2] == *(int *)(param_2 + lVar4 * 4)) &&
                 (piVar9[-1] == *(int *)(param_2 + lVar1 * 4))) {
                bVar2 = true;
                break;
              }
            }
          }
          iVar3 = iVar7 + 1;
          if (bVar2) {
            iVar3 = iVar7;
          }
          lVar1 = lVar8 + 1;
          iVar7 = iVar3;
        } while (!bVar2);
        piVar12[-2] = iVar3;
        *(int *)(param_1 + (lVar8 * 0x16 + lVar5) * 4) = iVar10;
      }
LAB_180413a61:
      if (piVar12[-1] == -1) {
        bVar2 = false;
        lVar5 = 0;
        lVar1 = 0;
        iVar7 = 0;
        do {
          lVar8 = lVar1;
          if (lVar11 <= lVar8) {
            iVar3 = iVar7;
            if (!bVar2) goto LAB_180413af1;
            break;
          }
          if ((lVar8 != lVar6) && (lVar5 = 0, !bVar2)) {
            for (; lVar5 < 3; lVar5 = lVar5 + 1) {
              lVar1 = lVar8 * 3 + lVar5;
              lVar4 = lVar1 + 1;
              if (1 < lVar5) {
                lVar4 = lVar8 * 3;
              }
              if ((piVar9[-1] == *(int *)(param_2 + lVar4 * 4)) &&
                 (*piVar9 == *(int *)(param_2 + lVar1 * 4))) {
                bVar2 = true;
                break;
              }
            }
          }
          iVar3 = iVar7 + 1;
          if (bVar2) {
            iVar3 = iVar7;
          }
          lVar1 = lVar8 + 1;
          iVar7 = iVar3;
        } while (!bVar2);
        piVar12[-1] = iVar3;
        *(int *)(param_1 + (lVar8 * 0x16 + lVar5) * 4) = iVar10;
      }
LAB_180413af1:
      if (*piVar12 == -1) {
        bVar2 = false;
        lVar5 = 0;
        lVar1 = 0;
        iVar7 = 0;
        do {
          lVar8 = lVar1;
          if (lVar11 <= lVar8) {
            iVar3 = iVar7;
            if (!bVar2) goto LAB_180413b80;
            break;
          }
          if ((lVar8 != lVar6) && (lVar5 = 0, !bVar2)) {
            for (; lVar5 < 3; lVar5 = lVar5 + 1) {
              lVar1 = lVar8 * 3 + lVar5;
              lVar4 = lVar1 + 1;
              if (1 < lVar5) {
                lVar4 = lVar8 * 3;
              }
              if ((*piVar9 == *(int *)(param_2 + lVar4 * 4)) &&
                 (piVar9[-2] == *(int *)(param_2 + lVar1 * 4))) {
                bVar2 = true;
                break;
              }
            }
          }
          iVar3 = iVar7 + 1;
          if (bVar2) {
            iVar3 = iVar7;
          }
          lVar1 = lVar8 + 1;
          iVar7 = iVar3;
        } while (!bVar2);
        *piVar12 = iVar3;
        *(int *)(param_1 + (lVar8 * 0x16 + lVar5) * 4) = iVar10;
      }
LAB_180413b80:
      iVar10 = iVar10 + 1;
      lVar6 = lVar6 + 1;
      piVar12 = piVar12 + 0x16;
      piVar9 = piVar9 + 3;
    } while (iVar10 < param_3);
  }
  return;
}
// 函数: void UISystem_1399a(int64_t param_1,int64_t param_2,int param_3)
void UISystem_1399a(int64_t param_1,int64_t param_2,int param_3)
{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int64_t in_RAX;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t lVar6;
  int iVar7;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar8;
  uint64_t unaff_R12;
  int *piVar9;
  int iVar10;
  uint64_t unaff_R14;
  int64_t lVar11;
  int *piVar12;
  int64_t local_var_40;
  int local_buffer_50;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBX;
  iVar10 = 0;
  *(uint64_t *)(in_RAX + -0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x18) = unaff_RSI;
  lVar6 = 0;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  piVar9 = (int *)(param_2 + 8);
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  piVar12 = (int *)(param_1 + 8);
  lVar11 = (int64_t)param_3;
  do {
    if (piVar12[-2] == -1) {
      bVar2 = false;
      lVar5 = 0;
      lVar1 = 0;
      iVar7 = 0;
      do {
        lVar8 = lVar1;
        if (lVar11 <= lVar8) {
          iVar3 = iVar7;
          if (!bVar2) goto LAB_180413a61;
          break;
        }
        if ((lVar8 != lVar6) && (lVar5 = 0, !bVar2)) {
          for (; lVar5 < 3; lVar5 = lVar5 + 1) {
            lVar1 = lVar8 * 3 + lVar5;
            lVar4 = lVar1 + 1;
            if (1 < lVar5) {
              lVar4 = lVar8 * 3;
            }
            if ((piVar9[-2] == *(int *)(param_2 + lVar4 * 4)) &&
               (piVar9[-1] == *(int *)(param_2 + lVar1 * 4))) {
              bVar2 = true;
              break;
            }
          }
        }
        iVar3 = iVar7 + 1;
        if (bVar2) {
          iVar3 = iVar7;
        }
        lVar1 = lVar8 + 1;
        iVar7 = iVar3;
      } while (!bVar2);
      piVar12[-2] = iVar3;
      *(int *)(local_var_40 + (lVar8 * 0x16 + lVar5) * 4) = iVar10;
    }
LAB_180413a61:
    if (piVar12[-1] == -1) {
      bVar2 = false;
      lVar5 = 0;
      lVar1 = 0;
      iVar7 = 0;
      do {
        lVar8 = lVar1;
        if (lVar11 <= lVar8) {
          iVar3 = iVar7;
          if (!bVar2) goto LAB_180413af1;
          break;
        }
        if ((lVar8 != lVar6) && (lVar5 = 0, !bVar2)) {
          for (; lVar5 < 3; lVar5 = lVar5 + 1) {
            lVar1 = lVar8 * 3 + lVar5;
            lVar4 = lVar1 + 1;
            if (1 < lVar5) {
              lVar4 = lVar8 * 3;
            }
            if ((piVar9[-1] == *(int *)(param_2 + lVar4 * 4)) &&
               (*piVar9 == *(int *)(param_2 + lVar1 * 4))) {
              bVar2 = true;
              break;
            }
          }
        }
        iVar3 = iVar7 + 1;
        if (bVar2) {
          iVar3 = iVar7;
        }
        lVar1 = lVar8 + 1;
        iVar7 = iVar3;
      } while (!bVar2);
      piVar12[-1] = iVar3;
      *(int *)(local_var_40 + (lVar8 * 0x16 + lVar5) * 4) = iVar10;
    }
LAB_180413af1:
    if (*piVar12 == -1) {
      bVar2 = false;
      lVar5 = 0;
      lVar1 = 0;
      iVar7 = 0;
      do {
        lVar8 = lVar1;
        if (lVar11 <= lVar8) {
          iVar3 = iVar7;
          if (!bVar2) goto LAB_180413b80;
          break;
        }
        if ((lVar8 != lVar6) && (lVar5 = 0, !bVar2)) {
          for (; lVar5 < 3; lVar5 = lVar5 + 1) {
            lVar1 = lVar8 * 3 + lVar5;
            lVar4 = lVar1 + 1;
            if (1 < lVar5) {
              lVar4 = lVar8 * 3;
            }
            if ((*piVar9 == *(int *)(param_2 + lVar4 * 4)) &&
               (piVar9[-2] == *(int *)(param_2 + lVar1 * 4))) {
              bVar2 = true;
              break;
            }
          }
        }
        iVar3 = iVar7 + 1;
        if (bVar2) {
          iVar3 = iVar7;
        }
        lVar1 = lVar8 + 1;
        iVar7 = iVar3;
      } while (!bVar2);
      *piVar12 = iVar3;
      *(int *)(local_var_40 + (lVar8 * 0x16 + lVar5) * 4) = iVar10;
    }
LAB_180413b80:
    iVar10 = iVar10 + 1;
    lVar6 = lVar6 + 1;
    piVar12 = piVar12 + 0x16;
    piVar9 = piVar9 + 3;
    if (local_buffer_50 <= iVar10) {
      return;
    }
  } while( true );
}
// 函数: void UISystem_13bc1(void)
void UISystem_13bc1(void)
{
  return;
}
// 函数: void UISystem_13bd0(int64_t param_1,int param_2,int param_3,int param_4,uint param_5)
void UISystem_13bd0(int64_t param_1,int param_2,int param_3,int param_4,uint param_5)
{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int iVar5;
  int32_t uVar6;
  int iVar7;
  byte bVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int iVar16;
  int64_t lVar17;
  int64_t lVar18;
  lVar18 = (int64_t)param_3;
  uVar11 = (uint64_t)param_2;
  param_2 = -param_2;
  lVar17 = (int64_t)param_4;
  uVar12 = uVar11;
  do {
    iVar7 = param_3 + param_2 + 1;
    if (iVar7 < 2) {
      return;
    }
    iVar10 = (int)uVar12;
    if (iVar7 == 2) {
      lVar15 = (int64_t)iVar10;
      if (*(int *)(param_1 + (lVar15 * 3 + lVar17) * 4) <=
          *(int *)(param_1 + lVar18 * 0xc + lVar17 * 4)) {
        return;
      }
      uVar6 = *(int32_t *)(param_1 + 8 + lVar15 * 0xc);
      uVar4 = *(uint64_t *)(param_1 + lVar15 * 0xc);
      puVar2 = (uint64_t *)(param_1 + lVar15 * 0xc);
      puVar3 = (uint64_t *)(param_1 + lVar18 * 0xc);
      *puVar2 = *(uint64_t *)(param_1 + lVar18 * 0xc);
      *(int32_t *)(puVar2 + 1) = *(int32_t *)(puVar3 + 1);
      *puVar3 = uVar4;
      *(int32_t *)(puVar3 + 1) = uVar6;
      return;
    }
    bVar8 = (byte)param_5 & 0x1f;
    uVar14 = uVar12 & 0xffffffff;
    param_5 = param_5 + (param_5 << bVar8 | param_5 >> 0x20 - bVar8) + 3;
    iVar7 = *(int *)(param_1 +
                    ((int64_t)(int)(param_5 % ((param_3 - iVar10) + 1U) + iVar10) * 3 + lVar17) * 4
                    );
    lVar15 = lVar18;
    iVar16 = param_3;
    do {
      uVar13 = (uint)uVar14;
      lVar9 = uVar11 * 3 + lVar17;
      piVar1 = (int *)(param_1 + lVar9 * 4);
      iVar5 = *(int *)(param_1 + lVar9 * 4);
      while (iVar5 < iVar7) {
        uVar13 = (int)uVar14 + 1;
        uVar14 = (uint64_t)uVar13;
        piVar1 = piVar1 + 3;
        uVar11 = uVar11 + 1;
        iVar5 = *piVar1;
      }
      lVar9 = lVar15 * 3 + lVar17;
      piVar1 = (int *)(param_1 + lVar9 * 4);
      iVar5 = *(int *)(param_1 + lVar9 * 4);
      while (iVar7 < iVar5) {
        iVar16 = iVar16 + -1;
        piVar1 = piVar1 + -3;
        lVar15 = lVar15 + -1;
        iVar5 = *piVar1;
      }
      if (lVar15 < (int64_t)uVar11) break;
      uVar13 = uVar13 + 1;
      uVar14 = (uint64_t)uVar13;
      uVar4 = *(uint64_t *)(param_1 + uVar11 * 0xc);
      puVar2 = (uint64_t *)(param_1 + uVar11 * 0xc);
      uVar6 = *(int32_t *)(puVar2 + 1);
      puVar3 = (uint64_t *)(param_1 + lVar15 * 0xc);
      *puVar2 = *(uint64_t *)(param_1 + lVar15 * 0xc);
      uVar11 = uVar11 + 1;
      iVar16 = iVar16 + -1;
      *(int32_t *)(puVar2 + 1) = *(int32_t *)(puVar3 + 1);
      lVar15 = lVar15 + -1;
      *puVar3 = uVar4;
      *(int32_t *)(puVar3 + 1) = uVar6;
    } while ((int64_t)uVar11 <= lVar15);
    if (iVar10 < iVar16) {
      UISystem_13bd0(param_1,uVar12 & 0xffffffff,iVar16,param_4,param_5);
    }
    if (param_3 <= (int)uVar13) {
      return;
    }
    uVar12 = (uint64_t)uVar13;
    param_2 = -uVar13;
  } while( true );
}
// 函数: void UISystem_13bf7(uint64_t param_1)
void UISystem_13bf7(uint64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int iVar5;
  int iVar6;
  int32_t uVar7;
  int iVar8;
  byte bVar9;
  int64_t lVar10;
  uint64_t unaff_RBP;
  uint64_t uVar11;
  int64_t unaff_RSI;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t unaff_R13;
  int iVar17;
  uint64_t unaff_R15;
  int8_t in_ZF;
  uint local_buffer_80;
  uVar11 = unaff_RBP;
  do {
    iVar8 = (int)uVar11;
    if ((bool)in_ZF) {
      lVar10 = (int64_t)iVar8;
      if (*(int *)(unaff_RSI + (lVar10 * 3 + unaff_R13) * 4) <=
          *(int *)(unaff_RSI + unaff_R15 * 0xc + unaff_R13 * 4)) {
        return;
      }
      uVar7 = *(int32_t *)(unaff_RSI + 8 + lVar10 * 0xc);
      uVar4 = *(uint64_t *)(unaff_RSI + lVar10 * 0xc);
      puVar2 = (uint64_t *)(unaff_RSI + lVar10 * 0xc);
      puVar3 = (uint64_t *)(unaff_RSI + unaff_R15 * 0xc);
      *puVar2 = *(uint64_t *)(unaff_RSI + unaff_R15 * 0xc);
      *(int32_t *)(puVar2 + 1) = *(int32_t *)(puVar3 + 1);
      *puVar3 = uVar4;
      *(int32_t *)(puVar3 + 1) = uVar7;
      return;
    }
    bVar9 = (byte)local_buffer_80 & 0x1f;
    uVar13 = uVar11 & 0xffffffff;
    iVar17 = (int)unaff_R15;
    local_buffer_80 =
         local_buffer_80 + (local_buffer_80 << bVar9 | local_buffer_80 >> 0x20 - bVar9) + 3;
    uVar16 = unaff_R15 & 0xffffffff;
    iVar5 = *(int *)(unaff_RSI +
                    ((int64_t)(int)(local_buffer_80 % ((iVar17 - iVar8) + 1U) + iVar8) * 3 +
                    unaff_R13) * 4);
    uVar14 = unaff_R15;
    do {
      uVar12 = (uint)uVar13;
      uVar15 = (uint)uVar16;
      lVar10 = unaff_RBP * 3 + unaff_R13;
      piVar1 = (int *)(unaff_RSI + lVar10 * 4);
      iVar6 = *(int *)(unaff_RSI + lVar10 * 4);
      while (iVar6 < iVar5) {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (uint64_t)uVar12;
        piVar1 = piVar1 + 3;
        unaff_RBP = unaff_RBP + 1;
        iVar6 = *piVar1;
      }
      lVar10 = uVar14 * 3 + unaff_R13;
      piVar1 = (int *)(unaff_RSI + lVar10 * 4);
      iVar6 = *(int *)(unaff_RSI + lVar10 * 4);
      while (iVar5 < iVar6) {
        uVar15 = (int)uVar16 - 1;
        uVar16 = (uint64_t)uVar15;
        piVar1 = piVar1 + -3;
        uVar14 = uVar14 - 1;
        iVar6 = *piVar1;
      }
      if ((int64_t)uVar14 < (int64_t)unaff_RBP) break;
      uVar12 = uVar12 + 1;
      uVar13 = (uint64_t)uVar12;
      uVar4 = *(uint64_t *)(unaff_RSI + unaff_RBP * 0xc);
      puVar2 = (uint64_t *)(unaff_RSI + unaff_RBP * 0xc);
      uVar7 = *(int32_t *)(puVar2 + 1);
      param_1 = *(uint64_t *)(unaff_RSI + uVar14 * 0xc);
      puVar3 = (uint64_t *)(unaff_RSI + uVar14 * 0xc);
      *puVar2 = param_1;
      unaff_RBP = unaff_RBP + 1;
      uVar15 = uVar15 - 1;
      uVar16 = (uint64_t)uVar15;
      *(int32_t *)(puVar2 + 1) = *(int32_t *)(puVar3 + 1);
      uVar14 = uVar14 - 1;
      *puVar3 = uVar4;
      *(int32_t *)(puVar3 + 1) = uVar7;
    } while ((int64_t)unaff_RBP <= (int64_t)uVar14);
    if (iVar8 < (int)uVar15) {
      param_1 = UISystem_13bd0(param_1,uVar11 & 0xffffffff,uVar15,unaff_R13 & 0xffffffff,
                              local_buffer_80);
    }
    if (iVar17 <= (int)uVar12) {
      return;
    }
    uVar11 = (uint64_t)uVar12;
    iVar8 = (iVar17 - uVar12) + 1;
    in_ZF = iVar8 == 2;
    if (iVar8 < 2) {
      return;
    }
  } while( true );
}
// 函数: void UISystem_13daa(void)
void UISystem_13daa(void)
{
  return;
}
// 函数: void UISystem_13dc0(int64_t param_1,int64_t param_2,int param_3,int param_4)
void UISystem_13dc0(int64_t param_1,int64_t param_2,int param_3,int param_4)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int32_t uVar3;
  bool bVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  uint *puVar25;
  uint *puVar26;
  int *piVar27;
  uint64_t *puVar28;
  int64_t lVar29;
  if (0 < param_4 + -1) {
    lVar29 = 0;
    puVar26 = (uint *)(param_1 + 0x4c);
    piVar23 = (int *)(param_1 + 0x48);
    puVar25 = (uint *)(param_1 + 0xa4);
    piVar27 = (int *)(param_1 + 0xa0);
    do {
      if (*piVar23 == *piVar27) {
        uVar21 = *puVar25;
        if (((uVar21 ^ *puVar26) & 1) != 0) {
          *puVar26 = *puVar26 | 2;
          *puVar25 = uVar21 | 2;
        }
        lVar19 = 2;
        lVar20 = 0xb0;
      }
      else {
        lVar19 = 1;
        lVar20 = 0x58;
      }
      lVar29 = lVar29 + lVar19;
      piVar27 = (int *)((int64_t)piVar27 + lVar20);
      puVar25 = (uint *)((int64_t)puVar25 + lVar20);
      piVar23 = (int *)((int64_t)piVar23 + lVar20);
      puVar26 = (uint *)((int64_t)puVar26 + lVar20);
    } while (lVar29 < param_4 + -1);
  }
  iVar24 = 0;
  bVar4 = true;
  iVar22 = 1;
  if (0 < param_3) {
    lVar29 = 0;
    do {
      if (!bVar4) {
        return;
      }
      puVar28 = (uint64_t *)(lVar29 * 0x58 + param_1);
      if ((~*(uint *)((int64_t)puVar28 + 0x4c) & 1) == 0) {
        lVar19 = (int64_t)iVar22;
        bVar17 = true;
        do {
          bVar16 = bVar17;
          if (param_4 <= lVar19) break;
          uVar21 = ~*(uint *)(lVar19 * 0x58 + 0x4c + param_1) & 1;
          bVar16 = false;
          if (uVar21 == 0) {
            bVar16 = bVar17;
          }
          if (uVar21 == 0) {
            iVar22 = iVar22 + 1;
          }
          if (uVar21 == 0) {
            lVar19 = lVar19 + 1;
          }
          bVar17 = bVar16;
        } while (bVar16);
        lVar19 = (int64_t)iVar22;
        iVar18 = iVar22 + 1;
        if (bVar16) {
          bVar4 = false;
        }
        else {
          uVar3 = *(int32_t *)(param_2 + lVar29 * 0xc);
          *(int32_t *)(param_2 + lVar29 * 0xc) = *(int32_t *)(param_2 + lVar19 * 0xc);
          *(int32_t *)(param_2 + lVar19 * 0xc) = uVar3;
          uVar3 = *(int32_t *)(param_2 + 4 + lVar29 * 0xc);
          *(int32_t *)(param_2 + 4 + lVar29 * 0xc) = *(int32_t *)(param_2 + 4 + lVar19 * 0xc);
          *(int32_t *)(param_2 + 4 + lVar19 * 0xc) = uVar3;
          uVar3 = *(int32_t *)(param_2 + 8 + lVar29 * 0xc);
          *(int32_t *)(param_2 + 8 + lVar29 * 0xc) = *(int32_t *)(param_2 + 8 + lVar19 * 0xc);
          *(int32_t *)(param_2 + 8 + lVar19 * 0xc) = uVar3;
          uVar5 = *puVar28;
          uVar6 = puVar28[1];
          uVar7 = puVar28[2];
          uVar8 = puVar28[3];
          uVar9 = puVar28[4];
          uVar10 = puVar28[5];
          uVar11 = puVar28[6];
          uVar12 = puVar28[7];
          uVar13 = puVar28[8];
          uVar14 = puVar28[9];
          uVar2 = puVar28[10];
          lVar19 = lVar19 * 0x58;
          uVar15 = ((uint64_t *)(lVar19 + param_1))[1];
          *puVar28 = *(uint64_t *)(lVar19 + param_1);
          puVar28[1] = uVar15;
          puVar1 = (uint64_t *)(lVar19 + 0x10 + param_1);
          uVar15 = puVar1[1];
          puVar28[2] = *puVar1;
          puVar28[3] = uVar15;
          puVar1 = (uint64_t *)(lVar19 + 0x20 + param_1);
          uVar15 = puVar1[1];
          puVar28[4] = *puVar1;
          puVar28[5] = uVar15;
          puVar1 = (uint64_t *)(lVar19 + 0x30 + param_1);
          uVar15 = puVar1[1];
          puVar28[6] = *puVar1;
          puVar28[7] = uVar15;
          puVar1 = (uint64_t *)(lVar19 + 0x40 + param_1);
          uVar15 = puVar1[1];
          puVar28[8] = *puVar1;
          puVar28[9] = uVar15;
          puVar28[10] = *(uint64_t *)(lVar19 + 0x50 + param_1);
          *(uint64_t *)(lVar19 + param_1) = uVar5;
          ((uint64_t *)(lVar19 + param_1))[1] = uVar6;
          puVar28 = (uint64_t *)(lVar19 + 0x10 + param_1);
          *puVar28 = uVar7;
          puVar28[1] = uVar8;
          puVar28 = (uint64_t *)(lVar19 + 0x20 + param_1);
          *puVar28 = uVar9;
          puVar28[1] = uVar10;
          puVar28 = (uint64_t *)(lVar19 + 0x30 + param_1);
          *puVar28 = uVar11;
          puVar28[1] = uVar12;
          puVar28 = (uint64_t *)(lVar19 + 0x40 + param_1);
          *puVar28 = uVar13;
          puVar28[1] = uVar14;
          *(uint64_t *)(lVar19 + 0x50 + param_1) = uVar2;
        }
      }
      else {
        iVar18 = iVar24 + 2;
        if (iVar24 + 2 <= iVar22) {
          iVar18 = iVar22;
        }
      }
      iVar22 = iVar18;
      iVar18 = iVar24 + 1;
      if (!bVar4) {
        iVar18 = iVar24;
      }
      iVar24 = iVar18;
      lVar19 = lVar29 + 1;
      if (!bVar4) {
        lVar19 = lVar29;
      }
      lVar29 = lVar19;
    } while (iVar24 < param_3);
  }
  return;
}
// 函数: void UISystem_13ddd(int64_t param_1,uint64_t param_2,int param_3)
void UISystem_13ddd(int64_t param_1,uint64_t param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int32_t uVar3;
  bool bVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int64_t lVar20;
  int64_t lVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  uint *puVar25;
  uint *puVar26;
  int64_t unaff_R13;
  int *piVar27;
  uint64_t *puVar28;
  int64_t lVar29;
  int64_t local_buffer_68;
  int local_buffer_70;
  iVar19 = (int)unaff_R13 + -1;
  if (0 < iVar19) {
    lVar29 = 0;
    puVar26 = (uint *)(param_1 + 0x4c);
    piVar23 = (int *)(param_1 + 0x48);
    puVar25 = (uint *)(param_1 + 0xa4);
    piVar27 = (int *)(param_1 + 0xa0);
    do {
      if (*piVar23 == *piVar27) {
        uVar22 = *puVar25;
        if (((uVar22 ^ *puVar26) & 1) != 0) {
          *puVar26 = *puVar26 | 2;
          *puVar25 = uVar22 | 2;
        }
        lVar20 = 2;
        lVar21 = 0xb0;
      }
      else {
        lVar20 = 1;
        lVar21 = 0x58;
      }
      lVar29 = lVar29 + lVar20;
      piVar27 = (int *)((int64_t)piVar27 + lVar21);
      puVar25 = (uint *)((int64_t)puVar25 + lVar21);
      piVar23 = (int *)((int64_t)piVar23 + lVar21);
      puVar26 = (uint *)((int64_t)puVar26 + lVar21);
      param_3 = local_buffer_70;
    } while (lVar29 < iVar19);
  }
  iVar24 = 0;
  bVar4 = true;
  iVar19 = 1;
  if (0 < param_3) {
    lVar29 = 0;
    do {
      if (!bVar4) {
        return;
      }
      puVar28 = (uint64_t *)(lVar29 * 0x58 + param_1);
      if ((~*(uint *)((int64_t)puVar28 + 0x4c) & 1) == 0) {
        lVar20 = (int64_t)iVar19;
        bVar17 = true;
        do {
          bVar16 = bVar17;
          if (unaff_R13 <= lVar20) break;
          uVar22 = ~*(uint *)(lVar20 * 0x58 + 0x4c + param_1) & 1;
          bVar16 = false;
          if (uVar22 == 0) {
            bVar16 = bVar17;
          }
          if (uVar22 == 0) {
            iVar19 = iVar19 + 1;
          }
          if (uVar22 == 0) {
            lVar20 = lVar20 + 1;
          }
          bVar17 = bVar16;
        } while (bVar16);
        lVar20 = (int64_t)iVar19;
        iVar18 = iVar19 + 1;
        if (bVar16) {
          bVar4 = false;
        }
        else {
          uVar3 = *(int32_t *)(local_buffer_68 + lVar29 * 0xc);
          *(int32_t *)(local_buffer_68 + lVar29 * 0xc) =
               *(int32_t *)(local_buffer_68 + lVar20 * 0xc);
          *(int32_t *)(local_buffer_68 + lVar20 * 0xc) = uVar3;
          uVar3 = *(int32_t *)(local_buffer_68 + 4 + lVar29 * 0xc);
          *(int32_t *)(local_buffer_68 + 4 + lVar29 * 0xc) =
               *(int32_t *)(local_buffer_68 + 4 + lVar20 * 0xc);
          *(int32_t *)(local_buffer_68 + 4 + lVar20 * 0xc) = uVar3;
          uVar3 = *(int32_t *)(local_buffer_68 + 8 + lVar29 * 0xc);
          *(int32_t *)(local_buffer_68 + 8 + lVar29 * 0xc) =
               *(int32_t *)(local_buffer_68 + 8 + lVar20 * 0xc);
          *(int32_t *)(local_buffer_68 + 8 + lVar20 * 0xc) = uVar3;
          uVar5 = *puVar28;
          uVar6 = puVar28[1];
          uVar7 = puVar28[2];
          uVar8 = puVar28[3];
          uVar9 = puVar28[4];
          uVar10 = puVar28[5];
          uVar11 = puVar28[6];
          uVar12 = puVar28[7];
          uVar13 = puVar28[8];
          uVar14 = puVar28[9];
          uVar2 = puVar28[10];
          lVar20 = lVar20 * 0x58;
          uVar15 = ((uint64_t *)(lVar20 + param_1))[1];
          *puVar28 = *(uint64_t *)(lVar20 + param_1);
          puVar28[1] = uVar15;
          puVar1 = (uint64_t *)(lVar20 + 0x10 + param_1);
          uVar15 = puVar1[1];
          puVar28[2] = *puVar1;
          puVar28[3] = uVar15;
          puVar1 = (uint64_t *)(lVar20 + 0x20 + param_1);
          uVar15 = puVar1[1];
          puVar28[4] = *puVar1;
          puVar28[5] = uVar15;
          puVar1 = (uint64_t *)(lVar20 + 0x30 + param_1);
          uVar15 = puVar1[1];
          puVar28[6] = *puVar1;
          puVar28[7] = uVar15;
          puVar1 = (uint64_t *)(lVar20 + 0x40 + param_1);
          uVar15 = puVar1[1];
          puVar28[8] = *puVar1;
          puVar28[9] = uVar15;
          puVar28[10] = *(uint64_t *)(lVar20 + 0x50 + param_1);
          *(uint64_t *)(lVar20 + param_1) = uVar5;
          ((uint64_t *)(lVar20 + param_1))[1] = uVar6;
          puVar28 = (uint64_t *)(lVar20 + 0x10 + param_1);
          *puVar28 = uVar7;
          puVar28[1] = uVar8;
          puVar28 = (uint64_t *)(lVar20 + 0x20 + param_1);
          *puVar28 = uVar9;
          puVar28[1] = uVar10;
          puVar28 = (uint64_t *)(lVar20 + 0x30 + param_1);
          *puVar28 = uVar11;
          puVar28[1] = uVar12;
          puVar28 = (uint64_t *)(lVar20 + 0x40 + param_1);
          *puVar28 = uVar13;
          puVar28[1] = uVar14;
          *(uint64_t *)(lVar20 + 0x50 + param_1) = uVar2;
        }
      }
      else {
        iVar18 = iVar24 + 2;
        if (iVar24 + 2 <= iVar19) {
          iVar18 = iVar19;
        }
      }
      iVar19 = iVar18;
      iVar18 = iVar24 + 1;
      if (!bVar4) {
        iVar18 = iVar24;
      }
      iVar24 = iVar18;
      lVar20 = lVar29 + 1;
      if (!bVar4) {
        lVar20 = lVar29;
      }
      lVar29 = lVar20;
    } while (iVar24 < param_3);
  }
  return;
}
// 函数: void UISystem_13e86(void)
void UISystem_13e86(void)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int64_t lVar18;
  uint uVar19;
  int64_t unaff_RBX;
  int unaff_EBP;
  int64_t lVar20;
  int unaff_EDI;
  int in_R10D;
  int64_t unaff_R13;
  uint64_t *puVar21;
  int unaff_R15D;
  int64_t local_buffer_68;
  lVar20 = 0;
  do {
    if (unaff_EBP == 0) {
      return;
    }
    puVar21 = (uint64_t *)(lVar20 * 0x58 + unaff_RBX);
    if ((~*(uint *)((int64_t)puVar21 + 0x4c) & 1) == 0) {
      lVar18 = (int64_t)in_R10D;
      bVar16 = true;
      do {
        bVar15 = bVar16;
        if (unaff_R13 <= lVar18) break;
        uVar19 = ~*(uint *)(lVar18 * 0x58 + 0x4c + unaff_RBX) & 1;
        bVar15 = false;
        if (uVar19 == 0) {
          bVar15 = bVar16;
        }
        if (uVar19 == 0) {
          in_R10D = in_R10D + 1;
        }
        if (uVar19 == 0) {
          lVar18 = lVar18 + 1;
        }
        bVar16 = bVar15;
      } while (bVar15);
      lVar18 = (int64_t)in_R10D;
      iVar17 = in_R10D + 1;
      if (bVar15) {
        unaff_EBP = 0;
      }
      else {
        uVar3 = *(int32_t *)(local_buffer_68 + lVar20 * 0xc);
        *(int32_t *)(local_buffer_68 + lVar20 * 0xc) =
             *(int32_t *)(local_buffer_68 + lVar18 * 0xc);
        *(int32_t *)(local_buffer_68 + lVar18 * 0xc) = uVar3;
        uVar3 = *(int32_t *)(local_buffer_68 + 4 + lVar20 * 0xc);
        *(int32_t *)(local_buffer_68 + 4 + lVar20 * 0xc) =
             *(int32_t *)(local_buffer_68 + 4 + lVar18 * 0xc);
        *(int32_t *)(local_buffer_68 + 4 + lVar18 * 0xc) = uVar3;
        uVar3 = *(int32_t *)(local_buffer_68 + 8 + lVar20 * 0xc);
        *(int32_t *)(local_buffer_68 + 8 + lVar20 * 0xc) =
             *(int32_t *)(local_buffer_68 + 8 + lVar18 * 0xc);
        *(int32_t *)(local_buffer_68 + 8 + lVar18 * 0xc) = uVar3;
        uVar4 = *puVar21;
        uVar5 = puVar21[1];
        uVar6 = puVar21[2];
        uVar7 = puVar21[3];
        uVar8 = puVar21[4];
        uVar9 = puVar21[5];
        uVar10 = puVar21[6];
        uVar11 = puVar21[7];
        uVar12 = puVar21[8];
        uVar13 = puVar21[9];
        uVar2 = puVar21[10];
        lVar18 = lVar18 * 0x58;
        uVar14 = ((uint64_t *)(lVar18 + unaff_RBX))[1];
        *puVar21 = *(uint64_t *)(lVar18 + unaff_RBX);
        puVar21[1] = uVar14;
        puVar1 = (uint64_t *)(lVar18 + 0x10 + unaff_RBX);
        uVar14 = puVar1[1];
        puVar21[2] = *puVar1;
        puVar21[3] = uVar14;
        puVar1 = (uint64_t *)(lVar18 + 0x20 + unaff_RBX);
        uVar14 = puVar1[1];
        puVar21[4] = *puVar1;
        puVar21[5] = uVar14;
        puVar1 = (uint64_t *)(lVar18 + 0x30 + unaff_RBX);
        uVar14 = puVar1[1];
        puVar21[6] = *puVar1;
        puVar21[7] = uVar14;
        puVar1 = (uint64_t *)(lVar18 + 0x40 + unaff_RBX);
        uVar14 = puVar1[1];
        puVar21[8] = *puVar1;
        puVar21[9] = uVar14;
        puVar21[10] = *(uint64_t *)(lVar18 + 0x50 + unaff_RBX);
        *(uint64_t *)(lVar18 + unaff_RBX) = uVar4;
        ((uint64_t *)(lVar18 + unaff_RBX))[1] = uVar5;
        puVar21 = (uint64_t *)(lVar18 + 0x10 + unaff_RBX);
        *puVar21 = uVar6;
        puVar21[1] = uVar7;
        puVar21 = (uint64_t *)(lVar18 + 0x20 + unaff_RBX);
        *puVar21 = uVar8;
        puVar21[1] = uVar9;
        puVar21 = (uint64_t *)(lVar18 + 0x30 + unaff_RBX);
        *puVar21 = uVar10;
        puVar21[1] = uVar11;
        puVar21 = (uint64_t *)(lVar18 + 0x40 + unaff_RBX);
        *puVar21 = uVar12;
        puVar21[1] = uVar13;
        *(uint64_t *)(lVar18 + 0x50 + unaff_RBX) = uVar2;
      }
    }
    else {
      iVar17 = unaff_EDI + 2;
      if (unaff_EDI + 2 <= in_R10D) {
        iVar17 = in_R10D;
      }
    }
    in_R10D = iVar17;
    iVar17 = unaff_EDI + 1;
    if (unaff_EBP == 0) {
      iVar17 = unaff_EDI;
    }
    unaff_EDI = iVar17;
    lVar18 = lVar20 + 1;
    if (unaff_EBP == 0) {
      lVar18 = lVar20;
    }
    lVar20 = lVar18;
    if (unaff_R15D <= unaff_EDI) {
      return;
    }
  } while( true );
}
// 函数: void UISystem_13ff9(void)
void UISystem_13ff9(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address