#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part114.c - 9 个函数

// 函数: void FUN_180127648(void)
void FUN_180127648(void)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong unaff_RBX;
  longlong lVar9;
  int *unaff_RSI;
  char unaff_R12B;
  undefined1 unaff_000000a1;
  undefined2 unaff_000000a2;
  undefined4 unaff_000000a4;
  longlong unaff_R14;
  int unaff_R15D;
  
  lVar9 = CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
  do {
    lVar3 = *(longlong *)(*(longlong *)(unaff_R14 + 0x1c70) + lVar9 * 8);
    *(undefined8 *)(lVar3 + 100) = *(undefined8 *)(lVar3 + 8);
    if (((((*(int *)(unaff_R14 + 0x1a90) <= *(int *)(lVar3 + 0x54)) &&
          (0.0 < *(float *)(lVar3 + 0x10))) && (0.0 < *(float *)(lVar3 + 0x14))) || (lVar9 < 1)) &&
       ((lVar4 = *(longlong *)(lVar3 + 0x78), lVar4 == 0 ||
        ((*(char *)(lVar4 + 0xaf) != unaff_R12B && (*(char *)(lVar4 + 0xb6) == unaff_R12B)))))) {
      iVar8 = *unaff_RSI;
      iVar7 = unaff_RSI[1];
      if (iVar8 == iVar7) {
        if (iVar7 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar7 / 2 + iVar7;
        }
        iVar6 = iVar8 + 1;
        if (iVar8 + 1 < iVar7) {
          iVar6 = iVar7;
        }
        FUN_18011dc70(*(undefined8 *)(lVar3 + 8),iVar6);
        iVar8 = *unaff_RSI;
      }
      *(longlong *)(*(longlong *)(unaff_RSI + 2) + (longlong)iVar8 * 8) = lVar3;
      *unaff_RSI = *unaff_RSI + 1;
    }
    unaff_R15D = unaff_R15D + 1;
    lVar9 = lVar9 + 1;
  } while (unaff_R15D < *(int *)(unaff_R14 + 0x1c68));
  piVar1 = (int *)(unaff_RBX + 0x1ac0);
  lVar9 = **(longlong **)(unaff_R14 + 0x1c70);
  *(ushort *)(lVar9 + 0x49) = CONCAT11(unaff_000000a1,unaff_R12B);
  *(char *)(lVar9 + 0x48) = unaff_R12B;
  iVar8 = *(int *)(unaff_RBX + 0x1ac4);
  if (iVar8 < 0) {
    iVar8 = iVar8 / 2 + iVar8;
    iVar7 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar8) {
      iVar7 = iVar8;
    }
    FUN_18011dc70(piVar1,iVar7);
  }
  *piVar1 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  FUN_18011dc70(piVar1,*(undefined4 *)(unaff_RBX + 0x1aa0));
  iVar8 = *(int *)(unaff_RBX + 0x1aa0);
  iVar7 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  if (iVar8 != 0) {
    lVar9 = CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
    do {
      lVar3 = *(longlong *)(lVar9 + *(longlong *)(unaff_RBX + 0x1aa8));
      if ((*(char *)(lVar3 + 0xaf) == unaff_R12B) || ((*(uint *)(lVar3 + 0xc) & 0x1000000) == 0)) {
        FUN_180126b00(piVar1);
      }
      iVar8 = *(int *)(unaff_RBX + 0x1aa0);
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar7 != iVar8);
  }
  iVar7 = *piVar1;
  *piVar1 = iVar8;
  *(int *)(unaff_RBX + 0x1aa0) = iVar7;
  uVar2 = *(undefined4 *)(unaff_RBX + 0x1ac4);
  *(undefined4 *)(unaff_RBX + 0x1ac4) = *(undefined4 *)(unaff_RBX + 0x1aa4);
  *(undefined4 *)(unaff_RBX + 0x1aa4) = uVar2;
  uVar5 = *(undefined8 *)(unaff_RBX + 0x1ac8);
  *(undefined8 *)(unaff_RBX + 0x1ac8) = *(undefined8 *)(unaff_RBX + 0x1aa8);
  *(undefined8 *)(unaff_RBX + 0x1aa8) = uVar5;
  *(undefined4 *)(unaff_RBX + 0x3a4) = *(undefined4 *)(unaff_RBX + 0x1af0);
  **(char **)(unaff_RBX + 0xa0) = unaff_R12B;
  *(ulonglong *)(unaff_RBX + 0x128) =
       CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
  iVar8 = *(int *)(unaff_RBX + 0x1534);
  if (iVar8 < 0) {
    iVar8 = iVar8 / 2 + iVar8;
    iVar7 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar8) {
      iVar7 = iVar8;
    }
    FUN_18011dd10(unaff_RBX + 0x1530,iVar7);
  }
  *(uint *)(unaff_RBX + 0x1530) = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x338,0,0x54);
}





// 函数: void FUN_18012770c(void)
void FUN_18012770c(void)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong unaff_RBX;
  int iVar6;
  longlong lVar7;
  char unaff_R12B;
  undefined1 unaff_000000a1;
  undefined2 unaff_000000a2;
  undefined4 unaff_000000a4;
  longlong unaff_R14;
  
  piVar1 = (int *)(unaff_RBX + 0x1ac0);
  lVar7 = **(longlong **)(unaff_R14 + 0x1c70);
  *(ushort *)(lVar7 + 0x49) = CONCAT11(unaff_000000a1,unaff_R12B);
  *(char *)(lVar7 + 0x48) = unaff_R12B;
  iVar5 = *(int *)(unaff_RBX + 0x1ac4);
  if (iVar5 < 0) {
    iVar5 = iVar5 / 2 + iVar5;
    iVar6 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    FUN_18011dc70(piVar1,iVar6);
  }
  *piVar1 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  FUN_18011dc70(piVar1,*(undefined4 *)(unaff_RBX + 0x1aa0));
  iVar5 = *(int *)(unaff_RBX + 0x1aa0);
  iVar6 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
  if (iVar5 != 0) {
    lVar7 = CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
    do {
      lVar3 = *(longlong *)(lVar7 + *(longlong *)(unaff_RBX + 0x1aa8));
      if ((*(char *)(lVar3 + 0xaf) == unaff_R12B) || ((*(uint *)(lVar3 + 0xc) & 0x1000000) == 0)) {
        FUN_180126b00(piVar1);
      }
      iVar5 = *(int *)(unaff_RBX + 0x1aa0);
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 != iVar5);
  }
  iVar6 = *piVar1;
  *piVar1 = iVar5;
  *(int *)(unaff_RBX + 0x1aa0) = iVar6;
  uVar2 = *(undefined4 *)(unaff_RBX + 0x1ac4);
  *(undefined4 *)(unaff_RBX + 0x1ac4) = *(undefined4 *)(unaff_RBX + 0x1aa4);
  *(undefined4 *)(unaff_RBX + 0x1aa4) = uVar2;
  uVar4 = *(undefined8 *)(unaff_RBX + 0x1ac8);
  *(undefined8 *)(unaff_RBX + 0x1ac8) = *(undefined8 *)(unaff_RBX + 0x1aa8);
  *(undefined8 *)(unaff_RBX + 0x1aa8) = uVar4;
  *(undefined4 *)(unaff_RBX + 0x3a4) = *(undefined4 *)(unaff_RBX + 0x1af0);
  **(char **)(unaff_RBX + 0xa0) = unaff_R12B;
  *(ulonglong *)(unaff_RBX + 0x128) =
       CONCAT44(unaff_000000a4,CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B)));
  iVar5 = *(int *)(unaff_RBX + 0x1534);
  if (iVar5 < 0) {
    iVar5 = iVar5 / 2 + iVar5;
    iVar6 = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
    FUN_18011dd10(unaff_RBX + 0x1530,iVar6);
  }
  *(uint *)(unaff_RBX + 0x1530) = CONCAT22(unaff_000000a2,CONCAT11(unaff_000000a1,unaff_R12B));
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x338,0,0x54);
}





// 函数: void FUN_180127733(void)
void FUN_180127733(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong unaff_RBX;
  int iVar4;
  longlong lVar5;
  int unaff_R12D;
  undefined4 unaff_000000a4;
  int *unaff_R14;
  
  FUN_18011dc70();
  *unaff_R14 = unaff_R12D;
  FUN_18011dc70();
  iVar3 = *(int *)(unaff_RBX + 0x1aa0);
  if (iVar3 != 0) {
    lVar5 = CONCAT44(unaff_000000a4,unaff_R12D);
    iVar4 = unaff_R12D;
    do {
      lVar1 = *(longlong *)(lVar5 + *(longlong *)(unaff_RBX + 0x1aa8));
      if ((*(char *)(lVar1 + 0xaf) == (char)unaff_R12D) ||
         ((*(uint *)(lVar1 + 0xc) & 0x1000000) == 0)) {
        FUN_180126b00();
      }
      iVar3 = *(int *)(unaff_RBX + 0x1aa0);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 != iVar3);
  }
  iVar4 = *unaff_R14;
  *unaff_R14 = iVar3;
  *(int *)(unaff_RBX + 0x1aa0) = iVar4;
  iVar3 = unaff_R14[1];
  unaff_R14[1] = *(int *)(unaff_RBX + 0x1aa4);
  *(int *)(unaff_RBX + 0x1aa4) = iVar3;
  uVar2 = *(undefined8 *)(unaff_R14 + 2);
  *(undefined8 *)(unaff_R14 + 2) = *(undefined8 *)(unaff_RBX + 0x1aa8);
  *(undefined8 *)(unaff_RBX + 0x1aa8) = uVar2;
  *(undefined4 *)(unaff_RBX + 0x3a4) = *(undefined4 *)(unaff_RBX + 0x1af0);
  **(char **)(unaff_RBX + 0xa0) = (char)unaff_R12D;
  *(ulonglong *)(unaff_RBX + 0x128) = CONCAT44(unaff_000000a4,unaff_R12D);
  iVar3 = *(int *)(unaff_RBX + 0x1534);
  if (iVar3 < 0) {
    iVar3 = iVar3 / 2 + iVar3;
    iVar4 = unaff_R12D;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_18011dd10(unaff_RBX + 0x1530,iVar4);
  }
  *(int *)(unaff_RBX + 0x1530) = unaff_R12D;
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x338,0,0x54);
}





// 函数: void FUN_18012780c(int param_1)
void FUN_18012780c(int param_1)

{
  int iVar1;
  longlong unaff_RBX;
  int unaff_R12D;
  
  param_1 = param_1 / 2 + param_1;
  iVar1 = unaff_R12D;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  FUN_18011dd10(unaff_RBX + 0x1530,iVar1);
  *(int *)(unaff_RBX + 0x1530) = unaff_R12D;
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x338,0,0x54);
}





// 函数: void FUN_18012784c(void)
void FUN_18012784c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180127860(void)
void FUN_180127860(void)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong auStack_38 [2];
  
  lVar4 = _DAT_180c8a9b0;
  iVar7 = *(int *)(_DAT_180c8a9b0 + 0x1a90);
  if (*(int *)(_DAT_180c8a9b0 + 0x1a94) != iVar7) {
    FUN_180127440();
    iVar7 = *(int *)(lVar4 + 0x1a90);
  }
  uVar17 = 0;
  *(int *)(lVar4 + 0x1a9c) = iVar7;
  *(undefined8 *)(lVar4 + 0x39c) = 0;
  *(undefined4 *)(lVar4 + 0x398) = 0;
  lVar19 = 2;
  uVar18 = uVar17;
  uVar14 = uVar17;
  if (*(int *)(lVar4 + 0x1c68) != 0) {
    do {
      puVar11 = (undefined4 *)(*(longlong *)(uVar14 + *(longlong *)(lVar4 + 0x1c70)) + 0xb8);
      lVar15 = lVar19;
      do {
        iVar7 = puVar11[1];
        if (iVar7 < 0) {
          uVar5 = iVar7 / 2 + iVar7;
          uVar10 = uVar17;
          if (0 < (int)uVar5) {
            uVar10 = (ulonglong)uVar5;
          }
          FUN_18011dc70(puVar11,uVar10);
        }
        *puVar11 = 0;
        puVar11 = puVar11 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      uVar5 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar5;
      uVar14 = uVar14 + 8;
    } while (uVar5 != *(uint *)(lVar4 + 0x1c68));
  }
  lVar15 = *(longlong *)(lVar4 + 0x1cd8);
  uVar18 = uVar17;
  if ((lVar15 != 0) && ((*(uint *)(lVar15 + 0xc) & 0x2000) == 0)) {
    uVar18 = *(ulonglong *)(lVar15 + 0x3a0);
  }
  auStack_38[0] = uVar18;
  uVar14 = uVar17;
  if (lVar15 != 0) {
    uVar14 = *(ulonglong *)(lVar4 + 0x1ce8);
  }
  auStack_38[1] = uVar14;
  uVar10 = uVar17;
  uVar16 = uVar17;
  if (*(int *)(lVar4 + 0x1aa0) != 0) {
    do {
      uVar2 = *(ulonglong *)(uVar16 + *(longlong *)(lVar4 + 0x1aa8));
      if ((((*(char *)(uVar2 + 0xaf) != '\0') && (*(char *)(uVar2 + 0xb6) == '\0')) &&
          ((*(uint *)(uVar2 + 0xc) >> 0x18 & 1) == 0)) && ((uVar2 != uVar18 && (uVar2 != uVar14))))
      {
        FUN_180126c70(uVar2,*(uint *)(uVar2 + 0xc) >> 0x19 & 1);
      }
      uVar5 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar5;
      uVar16 = uVar16 + 8;
    } while (uVar5 != *(uint *)(lVar4 + 0x1aa0));
  }
  puVar12 = auStack_38;
  do {
    uVar18 = *puVar12;
    if (((uVar18 != 0) && (*(char *)(uVar18 + 0xaf) != '\0')) && (*(char *)(uVar18 + 0xb6) == '\0'))
    {
      FUN_180126c70(uVar18,*(uint *)(uVar18 + 0xc) >> 0x19 & 1);
    }
    puVar12 = puVar12 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  if (*(char *)(lVar4 + 200) != '\0') {
    FUN_180297c60(*(undefined8 *)(lVar4 + 0x118),*(undefined4 *)(lVar4 + 0x16bc));
  }
  *(undefined8 *)(lVar4 + 0x398) = 0;
  uVar18 = uVar17;
  if (0 < *(int *)(lVar4 + 0x1c68)) {
    do {
      lVar19 = *(longlong *)(*(longlong *)(lVar4 + 0x1c70) + uVar18);
      piVar1 = (int *)(lVar19 + 0xb8);
      iVar7 = *piVar1;
      iVar6 = *(int *)(lVar19 + 0xbc);
      iVar13 = *(int *)(lVar19 + 200) + iVar7;
      if (iVar6 < iVar13) {
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        iVar3 = iVar13;
        if (iVar13 < iVar6) {
          iVar3 = iVar6;
        }
        FUN_18011dc70(piVar1,iVar3);
      }
      *piVar1 = iVar13;
      if (*(int *)(lVar19 + 200) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(longlong *)(lVar19 + 0xc0) + (longlong)iVar7 * 8,*(undefined8 *)(lVar19 + 0xd0),
               (longlong)*(int *)(lVar19 + 200) << 3);
      }
      if (*(longlong *)(lVar19 + 0x80) != 0) {
        piVar8 = (int *)FUN_1801247c0(lVar19);
        iVar7 = *piVar8;
        if (iVar7 != 0) {
          if (((*(int *)(*(longlong *)(piVar8 + 2) + -0x30 + (longlong)iVar7 * 0x30) != 0) ||
              (*(longlong *)(*(longlong *)(piVar8 + 2) + -0x10 + (longlong)iVar7 * 0x30) != 0)) ||
             (*piVar8 = iVar7 + -1, iVar7 + -1 != 0)) {
            iVar7 = *(int *)(lVar19 + 0xbc);
            iVar6 = *piVar1;
            if (iVar6 == iVar7) {
              if (iVar7 == 0) {
                iVar7 = 8;
              }
              else {
                iVar7 = iVar7 / 2 + iVar7;
              }
              iVar13 = iVar6 + 1;
              if (iVar6 + 1 < iVar7) {
                iVar13 = iVar7;
              }
              FUN_18011dc70(piVar1,iVar13);
              iVar6 = *piVar1;
            }
            *(int **)(*(longlong *)(lVar19 + 0xc0) + (longlong)iVar6 * 8) = piVar8;
            *piVar1 = *piVar1 + 1;
          }
        }
      }
      *(undefined1 **)(lVar19 + 0x20) = (undefined1 *)(lVar19 + 0x88);
      *(undefined1 *)(lVar19 + 0x88) = 1;
      if (*piVar1 < 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(lVar19 + 0xc0);
      }
      *(undefined8 *)(lVar19 + 0x90) = uVar9;
      iVar7 = 0;
      *(int *)(lVar19 + 0x98) = *piVar1;
      *(undefined8 *)(lVar19 + 0x9c) = 0;
      *(undefined8 *)(lVar19 + 0xa4) = *(undefined8 *)(lVar19 + 8);
      *(undefined8 *)(lVar19 + 0xac) = *(undefined8 *)(lVar19 + 0x10);
      if (0 < *piVar1) {
        iVar6 = 0;
        iVar13 = 0;
        lVar15 = 0;
        do {
          iVar7 = iVar7 + 1;
          iVar13 = iVar13 + *(int *)(*(longlong *)(lVar15 + *(longlong *)(lVar19 + 0xc0)) + 0x20);
          *(int *)(lVar19 + 0xa0) = iVar13;
          iVar6 = iVar6 + *(int *)(*(longlong *)(lVar15 + *(longlong *)(lVar19 + 0xc0)) + 0x10);
          *(int *)(lVar19 + 0x9c) = iVar6;
          lVar15 = lVar15 + 8;
        } while (iVar7 < *piVar1);
      }
      uVar5 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar5;
      uVar18 = uVar18 + 8;
      *(int *)(lVar4 + 0x398) =
           *(int *)(lVar4 + 0x398) + *(int *)(*(longlong *)(lVar19 + 0x20) + 0x18);
      *(int *)(lVar4 + 0x39c) =
           *(int *)(lVar4 + 0x39c) + *(int *)(*(longlong *)(lVar19 + 0x20) + 0x14);
    } while ((int)uVar5 < *(int *)(lVar4 + 0x1c68));
  }
  if ((0 < *(int *)(*(longlong *)(**(longlong **)(lVar4 + 0x1c70) + 0x20) + 0x10)) &&
     (*(code **)(lVar4 + 0x110) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x000180127c54. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(lVar4 + 0x110))();
    return;
  }
  return;
}





// 函数: void FUN_18012786d(void)
void FUN_18012786d(void)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong unaff_RDI;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uStackX_20;
  
  iVar6 = *(int *)(unaff_RDI + 0x1a90);
  if (*(int *)(unaff_RDI + 0x1a94) != iVar6) {
    FUN_180127440();
    iVar6 = *(int *)(unaff_RDI + 0x1a90);
  }
  uVar16 = 0;
  *(int *)(unaff_RDI + 0x1a9c) = iVar6;
  *(undefined8 *)(unaff_RDI + 0x39c) = 0;
  *(undefined4 *)(unaff_RDI + 0x398) = 0;
  lVar18 = 2;
  uVar17 = uVar16;
  uVar13 = uVar16;
  if (*(int *)(unaff_RDI + 0x1c68) != 0) {
    do {
      puVar10 = (undefined4 *)(*(longlong *)(uVar13 + *(longlong *)(unaff_RDI + 0x1c70)) + 0xb8);
      lVar14 = lVar18;
      do {
        iVar6 = puVar10[1];
        if (iVar6 < 0) {
          uVar4 = iVar6 / 2 + iVar6;
          uVar9 = uVar16;
          if (0 < (int)uVar4) {
            uVar9 = (ulonglong)uVar4;
          }
          FUN_18011dc70(puVar10,uVar9);
        }
        *puVar10 = 0;
        puVar10 = puVar10 + 4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uVar4 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar4;
      uVar13 = uVar13 + 8;
    } while (uVar4 != *(uint *)(unaff_RDI + 0x1c68));
  }
  lVar14 = *(longlong *)(unaff_RDI + 0x1cd8);
  uVar17 = uVar16;
  if ((lVar14 != 0) && ((*(uint *)(lVar14 + 0xc) & 0x2000) == 0)) {
    uVar17 = *(ulonglong *)(lVar14 + 0x3a0);
  }
  uStackX_20 = uVar17;
  uVar13 = uVar16;
  if (lVar14 != 0) {
    uVar13 = *(ulonglong *)(unaff_RDI + 0x1ce8);
  }
  uVar9 = uVar16;
  uVar15 = uVar16;
  if (*(int *)(unaff_RDI + 0x1aa0) != 0) {
    do {
      uVar2 = *(ulonglong *)(uVar15 + *(longlong *)(unaff_RDI + 0x1aa8));
      if ((((*(char *)(uVar2 + 0xaf) != '\0') && (*(char *)(uVar2 + 0xb6) == '\0')) &&
          ((*(uint *)(uVar2 + 0xc) >> 0x18 & 1) == 0)) && ((uVar2 != uVar17 && (uVar2 != uVar13))))
      {
        FUN_180126c70(uVar2,*(uint *)(uVar2 + 0xc) >> 0x19 & 1);
      }
      uVar4 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar4;
      uVar15 = uVar15 + 8;
    } while (uVar4 != *(uint *)(unaff_RDI + 0x1aa0));
  }
  puVar11 = &uStackX_20;
  do {
    uVar17 = *puVar11;
    if (((uVar17 != 0) && (*(char *)(uVar17 + 0xaf) != '\0')) && (*(char *)(uVar17 + 0xb6) == '\0'))
    {
      FUN_180126c70(uVar17,*(uint *)(uVar17 + 0xc) >> 0x19 & 1);
    }
    puVar11 = puVar11 + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  if (*(char *)(unaff_RDI + 200) != '\0') {
    FUN_180297c60(*(undefined8 *)(unaff_RDI + 0x118),*(undefined4 *)(unaff_RDI + 0x16bc));
  }
  *(undefined8 *)(unaff_RDI + 0x398) = 0;
  uVar17 = uVar16;
  if (0 < *(int *)(unaff_RDI + 0x1c68)) {
    do {
      lVar18 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1c70) + uVar17);
      piVar1 = (int *)(lVar18 + 0xb8);
      iVar6 = *piVar1;
      iVar5 = *(int *)(lVar18 + 0xbc);
      iVar12 = *(int *)(lVar18 + 200) + iVar6;
      if (iVar5 < iVar12) {
        if (iVar5 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar5 / 2 + iVar5;
        }
        iVar3 = iVar12;
        if (iVar12 < iVar5) {
          iVar3 = iVar5;
        }
        FUN_18011dc70(piVar1,iVar3);
      }
      *piVar1 = iVar12;
      if (*(int *)(lVar18 + 200) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(longlong *)(lVar18 + 0xc0) + (longlong)iVar6 * 8,*(undefined8 *)(lVar18 + 0xd0),
               (longlong)*(int *)(lVar18 + 200) << 3);
      }
      if (*(longlong *)(lVar18 + 0x80) != 0) {
        piVar7 = (int *)FUN_1801247c0(lVar18);
        iVar6 = *piVar7;
        if (iVar6 != 0) {
          if (((*(int *)(*(longlong *)(piVar7 + 2) + -0x30 + (longlong)iVar6 * 0x30) != 0) ||
              (*(longlong *)(*(longlong *)(piVar7 + 2) + -0x10 + (longlong)iVar6 * 0x30) != 0)) ||
             (*piVar7 = iVar6 + -1, iVar6 + -1 != 0)) {
            iVar6 = *(int *)(lVar18 + 0xbc);
            iVar5 = *piVar1;
            if (iVar5 == iVar6) {
              if (iVar6 == 0) {
                iVar6 = 8;
              }
              else {
                iVar6 = iVar6 / 2 + iVar6;
              }
              iVar12 = iVar5 + 1;
              if (iVar5 + 1 < iVar6) {
                iVar12 = iVar6;
              }
              FUN_18011dc70(piVar1,iVar12);
              iVar5 = *piVar1;
            }
            *(int **)(*(longlong *)(lVar18 + 0xc0) + (longlong)iVar5 * 8) = piVar7;
            *piVar1 = *piVar1 + 1;
          }
        }
      }
      *(undefined1 **)(lVar18 + 0x20) = (undefined1 *)(lVar18 + 0x88);
      *(undefined1 *)(lVar18 + 0x88) = 1;
      if (*piVar1 < 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar18 + 0xc0);
      }
      *(undefined8 *)(lVar18 + 0x90) = uVar8;
      iVar6 = 0;
      *(int *)(lVar18 + 0x98) = *piVar1;
      *(undefined8 *)(lVar18 + 0x9c) = 0;
      *(undefined8 *)(lVar18 + 0xa4) = *(undefined8 *)(lVar18 + 8);
      *(undefined8 *)(lVar18 + 0xac) = *(undefined8 *)(lVar18 + 0x10);
      if (0 < *piVar1) {
        iVar5 = 0;
        iVar12 = 0;
        lVar14 = 0;
        do {
          iVar6 = iVar6 + 1;
          iVar12 = iVar12 + *(int *)(*(longlong *)(lVar14 + *(longlong *)(lVar18 + 0xc0)) + 0x20);
          *(int *)(lVar18 + 0xa0) = iVar12;
          iVar5 = iVar5 + *(int *)(*(longlong *)(lVar14 + *(longlong *)(lVar18 + 0xc0)) + 0x10);
          *(int *)(lVar18 + 0x9c) = iVar5;
          lVar14 = lVar14 + 8;
        } while (iVar6 < *piVar1);
      }
      uVar4 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar4;
      uVar17 = uVar17 + 8;
      *(int *)(unaff_RDI + 0x398) =
           *(int *)(unaff_RDI + 0x398) + *(int *)(*(longlong *)(lVar18 + 0x20) + 0x18);
      *(int *)(unaff_RDI + 0x39c) =
           *(int *)(unaff_RDI + 0x39c) + *(int *)(*(longlong *)(lVar18 + 0x20) + 0x14);
    } while ((int)uVar4 < *(int *)(unaff_RDI + 0x1c68));
  }
  if ((0 < *(int *)(*(longlong *)(**(longlong **)(unaff_RDI + 0x1c70) + 0x20) + 0x10)) &&
     (*(code **)(unaff_RDI + 0x110) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x000180127c54. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(unaff_RDI + 0x110))();
    return;
  }
  return;
}





// 函数: void FUN_180127c43(void)
void FUN_180127c43(void)

{
  longlong unaff_RDI;
  
  if (*(code **)(unaff_RDI + 0x110) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000180127c54. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(unaff_RDI + 0x110))();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180127c60(undefined8 *param_1,char *param_2,char *param_3,char param_4,undefined4 param_5)

{
  float fVar1;
  float *pfVar2;
  char *pcVar3;
  float fStackX_10;
  undefined4 uStackX_14;
  
  if (param_4 != '\0') {
    pcVar3 = (char *)0xffffffffffffffff;
    if (param_3 != (char *)0x0) {
      pcVar3 = param_3;
    }
    param_3 = param_2;
    if (param_2 < pcVar3) {
      while (*param_3 != '\0') {
        if (((*param_3 == '#') && (param_3[1] == '#')) || (param_3 = param_3 + 1, pcVar3 <= param_3)
           ) break;
      }
    }
  }
  pfVar2 = *(float **)(_DAT_180c8a9b0 + 0x19f0);
  fVar1 = *(float *)(_DAT_180c8a9b0 + 0x19f8);
  if (param_2 != param_3) {
    FUN_180297340(pfVar2,&fStackX_10,fVar1,0x7f7fffff,param_5,param_2,param_3,0);
    if (0.0 < fStackX_10) {
      fStackX_10 = fStackX_10 - fVar1 / *pfVar2;
    }
    *param_1 = CONCAT44(uStackX_14,(float)(int)(fStackX_10 + 0.95));
    return param_1;
  }
  *(float *)((longlong)param_1 + 4) = fVar1;
  *(undefined4 *)param_1 = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180127d70(void)
void FUN_180127d70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fStackX_8;
  float fStackX_c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fVar4;
  
  lVar7 = _DAT_180c8a9b0;
  lVar10 = 0;
  lVar14 = *(longlong *)(_DAT_180c8a9b0 + 0x1b78);
  if (lVar14 == 0) {
    lVar14 = 0;
    lVar5 = lVar10;
  }
  else {
    lVar5 = *(longlong *)(lVar14 + 0x28);
    *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(_DAT_180c8a9b0 + 0x1c80);
    lVar14 = *(longlong *)(lVar7 + 0x1b78);
  }
  lVar8 = lVar10;
  if ((lVar14 != 0) && ((*(uint *)(lVar14 + 0xc) & 0x200) == 0)) {
    lVar8 = lVar14;
  }
  fVar1 = *(float *)(lVar7 + 0x167c);
  fVar2 = *(float *)(lVar7 + 0x1680);
  fStackX_8 = *(float *)(lVar7 + 0x167c);
  fStackX_c = *(float *)(lVar7 + 0x1680);
  if (*(char *)(lVar7 + 0xcb) != '\0') {
    fStackX_8 = fVar1;
    if (fVar1 <= 4.0) {
      fStackX_8 = 4.0;
    }
    fStackX_c = fVar2;
    if (fVar2 <= 4.0) {
      fStackX_c = 4.0;
    }
  }
  lVar12 = lVar10;
  if (0 < *(int *)(lVar7 + 0x1aa0)) {
    lVar9 = (longlong)*(int *)(lVar7 + 0x1aa0) + -1;
    plVar11 = (longlong *)(*(longlong *)(lVar7 + 0x1aa8) + lVar9 * 8);
    lVar13 = lVar8;
    do {
      lVar6 = *plVar11;
      lVar8 = lVar13;
      if ((((*(char *)(lVar6 + 0xaf) != '\0') && (*(char *)(lVar6 + 0xb6) == '\0')) &&
          ((*(uint *)(lVar6 + 0xc) >> 9 & 1) == 0)) &&
         (*(longlong *)(lVar6 + 0x28) == *(longlong *)(lVar7 + 0x1c80))) {
        fStack_68 = (float)*(undefined8 *)(lVar6 + 0x238);
        fStack_64 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x238) >> 0x20);
        fStack_60 = (float)*(undefined8 *)(lVar6 + 0x240);
        fStack_5c = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x240) >> 0x20);
        fVar3 = fVar1;
        fVar4 = fVar2;
        if ((*(uint *)(lVar6 + 0xc) & 0x1000002) == 0) {
          fVar3 = fStackX_8;
          fVar4 = fStackX_c;
        }
        fVar16 = *(float *)(lVar7 + 0x118);
        if (((fStack_68 - fVar3 <= fVar16) &&
            (fVar15 = *(float *)(lVar7 + 0x11c), fStack_64 - fVar4 <= fVar15)) &&
           ((fVar16 < fStack_60 + fVar3 && (fVar15 < fStack_5c + fVar4)))) {
          if (*(short *)(lVar6 + 0x268) != 0) {
            fVar16 = fVar16 - *(float *)(lVar6 + 0x40);
            fVar15 = fVar15 - *(float *)(lVar6 + 0x44);
            if ((((float)(int)*(short *)(lVar6 + 0x26c) <= fVar16) &&
                ((float)(int)*(short *)(lVar6 + 0x26e) <= fVar15)) &&
               ((fVar16 < (float)((int)*(short *)(lVar6 + 0x268) + (int)*(short *)(lVar6 + 0x26c))
                && (fVar15 < (float)((int)*(short *)(lVar6 + 0x26a) + (int)*(short *)(lVar6 + 0x26e)
                                    ))))) goto LAB_180127fd0;
          }
          lVar8 = lVar6;
          if (lVar13 != 0) {
            lVar8 = lVar13;
          }
          if ((lVar12 == 0) &&
             ((lVar14 == 0 || (*(longlong *)(lVar6 + 0x3a0) != *(longlong *)(lVar14 + 0x3a0))))) {
            lVar12 = lVar6;
          }
          if ((lVar8 != 0) && (lVar12 != 0)) break;
        }
      }
LAB_180127fd0:
      plVar11 = plVar11 + -1;
      lVar9 = lVar9 + -1;
      lVar13 = lVar8;
    } while (-1 < lVar9);
  }
  *(longlong *)(lVar7 + 0x1b00) = lVar8;
  if (lVar8 != 0) {
    lVar10 = *(longlong *)(lVar8 + 0x3a0);
  }
  *(longlong *)(lVar7 + 0x1b08) = lVar10;
  *(longlong *)(lVar7 + 0x1b10) = lVar12;
  if (lVar14 != 0) {
    *(longlong *)(lVar14 + 0x28) = lVar5;
  }
  return;
}





