#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part231.c - 3 个函数

// 函数: void FUN_18079e450(uint64_t param_1,longlong param_2,int param_3)
void FUN_18079e450(uint64_t param_1,longlong param_2,int param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int iStackX_18;
  longlong lStackX_20;
  
  _DAT_180c1b958 = 0;
  iStackX_18 = 1;
  iVar16 = 1;
  iVar9 = iVar16;
  if (8 < param_3) {
    do {
      param_3 = param_3 >> 1;
      lVar12 = 0;
      if (0 < iVar9) {
        do {
          lVar5 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          *(int *)(&DAT_180c1b958 + lVar5 + (longlong)iVar9 * 4) =
               *(int *)(&DAT_180c1b958 + lVar5) + param_3;
        } while (lVar12 < iVar9);
      }
      iVar16 = iVar9 * 2;
      iVar4 = iVar9 << 4;
      iVar9 = iVar16;
    } while (iVar4 < param_3);
  }
  iVar9 = iVar16 * 2;
  lStackX_20 = (longlong)iVar16;
  if (iVar16 * 8 == param_3) {
    uVar15 = 0;
    if (0 < iVar16) {
      iVar4 = 0;
      piVar14 = (int *)&DAT_180c1b958;
      do {
        if (0 < (int)uVar15) {
          uVar7 = (ulonglong)uVar15;
          iVar10 = 0;
          piVar8 = (int *)&DAT_180c1b958;
          do {
            iVar13 = *piVar8;
            piVar8 = piVar8 + 1;
            lVar12 = (longlong)(iVar13 + iVar4);
            iVar11 = *piVar14 + iVar10;
            lVar5 = (longlong)iVar11;
            iVar13 = iVar13 + iVar4 + iVar16 * 4;
            iVar10 = iVar10 + 2;
            uVar1 = *(int32_t *)(param_2 + 4 + lVar12 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar5 * 4);
            uVar3 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
            *(int32_t *)(param_2 + lVar5 * 4) = *(int32_t *)(param_2 + lVar12 * 4);
            *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar1;
            *(int32_t *)(param_2 + lVar12 * 4) = uVar2;
            *(int32_t *)(param_2 + 4 + lVar12 * 4) = uVar3;
            lVar12 = (longlong)iVar13;
            iVar13 = iVar13 + iVar16 * -2;
            lVar5 = (longlong)(iVar11 + iVar9);
            iVar11 = iVar11 + iVar16 * 4;
            uVar1 = *(int32_t *)(param_2 + 4 + lVar12 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar5 * 4);
            uVar3 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
            *(int32_t *)(param_2 + lVar5 * 4) = *(int32_t *)(param_2 + lVar12 * 4);
            *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar1;
            *(int32_t *)(param_2 + lVar12 * 4) = uVar2;
            *(int32_t *)(param_2 + 4 + lVar12 * 4) = uVar3;
            lVar12 = (longlong)iVar13;
            lVar5 = (longlong)iVar11;
            uVar1 = *(int32_t *)(param_2 + 4 + lVar12 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar5 * 4);
            uVar3 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
            *(int32_t *)(param_2 + lVar5 * 4) = *(int32_t *)(param_2 + lVar12 * 4);
            *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar1;
            *(int32_t *)(param_2 + lVar12 * 4) = uVar2;
            *(int32_t *)(param_2 + 4 + lVar12 * 4) = uVar3;
            lVar5 = (longlong)(iVar11 + iVar9);
            lVar12 = (longlong)(iVar16 * 4 + iVar13);
            uVar1 = *(int32_t *)(param_2 + lVar5 * 4);
            uVar2 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
            uVar3 = *(int32_t *)(param_2 + lVar12 * 4);
            *(int32_t *)(param_2 + 4 + lVar5 * 4) = *(int32_t *)(param_2 + 4 + lVar12 * 4);
            *(int32_t *)(param_2 + lVar5 * 4) = uVar3;
            *(int32_t *)(param_2 + lVar12 * 4) = uVar1;
            *(int32_t *)(param_2 + 4 + lVar12 * 4) = uVar2;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        iVar10 = *piVar14;
        uVar15 = uVar15 + 1;
        piVar14 = piVar14 + 1;
        iVar10 = iVar10 + iVar4 + iVar9;
        iVar4 = iVar4 + 2;
        lVar5 = (longlong)iVar10;
        lStackX_20 = lStackX_20 + -1;
        lVar12 = (longlong)(iVar10 + iVar9);
        uVar1 = *(int32_t *)(param_2 + lVar5 * 4);
        uVar2 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
        uVar3 = *(int32_t *)(param_2 + lVar12 * 4);
        *(int32_t *)(param_2 + 4 + lVar5 * 4) = *(int32_t *)(param_2 + 4 + lVar12 * 4);
        *(int32_t *)(param_2 + lVar5 * 4) = uVar3;
        *(int32_t *)(param_2 + lVar12 * 4) = uVar1;
        *(int32_t *)(param_2 + 4 + lVar12 * 4) = uVar2;
      } while (lStackX_20 != 0);
    }
  }
  else if (1 < lStackX_20) {
    lStackX_20 = lStackX_20 + -1;
    iVar16 = 2;
    piVar14 = (int *)0x180c1b95c;
    do {
      iVar4 = 0;
      lVar12 = 0;
      if (3 < iStackX_18) {
        iVar10 = 0;
        uVar15 = (iStackX_18 - 4U >> 2) + 1;
        uVar7 = (ulonglong)uVar15;
        iVar4 = uVar15 * 4;
        do {
          iVar11 = *piVar14;
          iVar13 = *(int *)(&DAT_180c1b958 + lVar12 * 4);
          lVar6 = (longlong)(iVar11 + iVar10);
          lVar5 = (longlong)(iVar13 + iVar16);
          uVar1 = *(int32_t *)(param_2 + lVar6 * 4);
          uVar2 = *(int32_t *)(param_2 + 4 + lVar6 * 4);
          uVar3 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
          *(int32_t *)(param_2 + lVar6 * 4) = *(int32_t *)(param_2 + lVar5 * 4);
          *(int32_t *)(param_2 + 4 + lVar6 * 4) = uVar3;
          *(int32_t *)(param_2 + lVar5 * 4) = uVar1;
          *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar2;
          lVar6 = (longlong)(iVar11 + iVar10 + iVar9);
          lVar5 = (longlong)(iVar13 + iVar16 + iVar9);
          uVar1 = *(int32_t *)(param_2 + lVar6 * 4);
          uVar2 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(param_2 + 4 + lVar6 * 4);
          *(int32_t *)(param_2 + lVar6 * 4) = *(int32_t *)(param_2 + lVar5 * 4);
          *(int32_t *)(param_2 + 4 + lVar6 * 4) = uVar2;
          *(int32_t *)(param_2 + lVar5 * 4) = uVar1;
          *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar3;
          iVar11 = *piVar14;
          lVar6 = (longlong)(iVar11 + iVar10);
          iVar13 = *(int *)(lVar12 * 4 + 0x180c1b95c) + iVar16;
          lVar5 = (longlong)iVar13;
          uVar1 = *(int32_t *)(param_2 + 8 + lVar6 * 4);
          uVar2 = *(int32_t *)(param_2 + 0xc + lVar6 * 4);
          uVar3 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
          *(int32_t *)(param_2 + 8 + lVar6 * 4) = *(int32_t *)(param_2 + lVar5 * 4);
          *(int32_t *)(param_2 + 0xc + lVar6 * 4) = uVar3;
          *(int32_t *)(param_2 + lVar5 * 4) = uVar1;
          *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar2;
          lVar6 = (longlong)(iVar11 + iVar10 + iVar9);
          lVar5 = (longlong)(iVar13 + iVar9);
          uVar1 = *(int32_t *)(param_2 + 8 + lVar6 * 4);
          uVar2 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(param_2 + 0xc + lVar6 * 4);
          *(int32_t *)(param_2 + 8 + lVar6 * 4) = *(int32_t *)(param_2 + lVar5 * 4);
          *(int32_t *)(param_2 + 0xc + lVar6 * 4) = uVar2;
          *(int32_t *)(param_2 + lVar5 * 4) = uVar1;
          *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar3;
          iVar11 = *piVar14 + iVar10 + 6;
          lVar6 = (longlong)iVar11;
          iVar13 = *(int *)(lVar12 * 4 + 0x180c1b960) + iVar16;
          lVar5 = (longlong)iVar13;
          uVar1 = *(int32_t *)(param_2 + -8 + lVar6 * 4);
          uVar2 = *(int32_t *)(param_2 + -4 + lVar6 * 4);
          uVar3 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
          *(int32_t *)(param_2 + -8 + lVar6 * 4) = *(int32_t *)(param_2 + lVar5 * 4);
          *(int32_t *)(param_2 + -4 + lVar6 * 4) = uVar3;
          *(int32_t *)(param_2 + lVar5 * 4) = uVar1;
          *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar2;
          lVar6 = (longlong)(iVar9 + iVar11);
          lVar5 = (longlong)(iVar13 + iVar9);
          uVar1 = *(int32_t *)(param_2 + -8 + lVar6 * 4);
          uVar2 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(param_2 + -4 + lVar6 * 4);
          *(int32_t *)(param_2 + -8 + lVar6 * 4) = *(int32_t *)(param_2 + lVar5 * 4);
          *(int32_t *)(param_2 + -4 + lVar6 * 4) = uVar2;
          *(int32_t *)(param_2 + lVar5 * 4) = uVar1;
          *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar3;
          iVar11 = *piVar14 + iVar10 + 6;
          iVar10 = iVar10 + 8;
          lVar6 = (longlong)iVar11;
          iVar13 = *(int *)(lVar12 * 4 + 0x180c1b964) + iVar16;
          lVar5 = (longlong)iVar13;
          iVar11 = iVar11 + iVar9;
          iVar13 = iVar13 + iVar9;
          lVar12 = lVar12 + 4;
          uVar1 = *(int32_t *)(param_2 + lVar6 * 4);
          uVar2 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(param_2 + 4 + lVar6 * 4);
          *(int32_t *)(param_2 + lVar6 * 4) = *(int32_t *)(param_2 + lVar5 * 4);
          *(int32_t *)(param_2 + 4 + lVar6 * 4) = uVar2;
          *(int32_t *)(param_2 + lVar5 * 4) = uVar1;
          *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar3;
          uVar1 = *(int32_t *)(param_2 + (longlong)iVar11 * 4);
          uVar2 = *(int32_t *)(param_2 + 4 + (longlong)iVar11 * 4);
          uVar3 = *(int32_t *)(param_2 + 4 + (longlong)iVar13 * 4);
          *(int32_t *)(param_2 + (longlong)iVar11 * 4) =
               *(int32_t *)(param_2 + (longlong)iVar13 * 4);
          *(int32_t *)(param_2 + 4 + (longlong)iVar11 * 4) = uVar3;
          *(int32_t *)(param_2 + (longlong)iVar13 * 4) = uVar1;
          *(int32_t *)(param_2 + 4 + (longlong)iVar13 * 4) = uVar2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (iVar4 < iStackX_18) {
        piVar8 = (int *)(&DAT_180c1b958 + lVar12 * 4);
        iVar10 = iVar4 * 2;
        uVar7 = (ulonglong)(uint)(iStackX_18 - iVar4);
        do {
          iVar4 = *piVar8;
          piVar8 = piVar8 + 1;
          lVar12 = (longlong)(iVar4 + iVar16);
          iVar11 = *piVar14 + iVar10;
          lVar5 = (longlong)iVar11;
          iVar10 = iVar10 + 2;
          uVar1 = *(int32_t *)(param_2 + 4 + lVar12 * 4);
          uVar2 = *(int32_t *)(param_2 + lVar5 * 4);
          uVar3 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
          *(int32_t *)(param_2 + lVar5 * 4) = *(int32_t *)(param_2 + lVar12 * 4);
          *(int32_t *)(param_2 + 4 + lVar5 * 4) = uVar1;
          *(int32_t *)(param_2 + lVar12 * 4) = uVar2;
          *(int32_t *)(param_2 + 4 + lVar12 * 4) = uVar3;
          lVar5 = (longlong)(iVar11 + iVar9);
          lVar12 = (longlong)(iVar4 + iVar16 + iVar9);
          uVar1 = *(int32_t *)(param_2 + lVar5 * 4);
          uVar2 = *(int32_t *)(param_2 + 4 + lVar5 * 4);
          uVar3 = *(int32_t *)(param_2 + lVar12 * 4);
          *(int32_t *)(param_2 + 4 + lVar5 * 4) = *(int32_t *)(param_2 + 4 + lVar12 * 4);
          *(int32_t *)(param_2 + lVar5 * 4) = uVar3;
          *(int32_t *)(param_2 + lVar12 * 4) = uVar1;
          *(int32_t *)(param_2 + 4 + lVar12 * 4) = uVar2;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      iStackX_18 = iStackX_18 + 1;
      iVar16 = iVar16 + 2;
      piVar14 = piVar14 + 1;
      lStackX_20 = lStackX_20 + -1;
    } while (lStackX_20 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18079ea10(uint64_t param_1,longlong param_2,int param_3)
void FUN_18079ea10(uint64_t param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int32_t uVar2;
  uint uVar3;
  int32_t uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iStackX_18;
  longlong lStackX_20;
  
  _DAT_180c1b958 = 0;
  iStackX_18 = 1;
  iVar18 = 1;
  iVar10 = iVar18;
  if (8 < param_3) {
    do {
      param_3 = param_3 >> 1;
      lVar13 = 0;
      if (0 < iVar10) {
        do {
          lVar6 = lVar13 * 4;
          lVar13 = lVar13 + 1;
          *(int *)(&DAT_180c1b958 + lVar6 + (longlong)iVar10 * 4) =
               *(int *)(&DAT_180c1b958 + lVar6) + param_3;
        } while (lVar13 < iVar10);
      }
      iVar18 = iVar10 * 2;
      iVar5 = iVar10 << 4;
      iVar10 = iVar18;
    } while (iVar5 < param_3);
  }
  iVar10 = iVar18 * 2;
  lStackX_20 = (longlong)iVar18;
  if (iVar18 * 8 == param_3) {
    uVar17 = 0;
    if (0 < iVar18) {
      piVar16 = (int *)&DAT_180c1b958;
      iVar5 = 0;
      do {
        if (0 < (int)uVar17) {
          uVar8 = (ulonglong)uVar17;
          iVar11 = 0;
          piVar9 = (int *)&DAT_180c1b958;
          do {
            iVar14 = *piVar9;
            piVar9 = piVar9 + 1;
            lVar13 = (longlong)(iVar14 + iVar5);
            iVar12 = *piVar16 + iVar11;
            lVar6 = (longlong)iVar12;
            iVar14 = iVar14 + iVar5 + iVar18 * 4;
            iVar11 = iVar11 + 2;
            uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar6 * 4);
            uVar4 = *(int32_t *)(param_2 + lVar13 * 4);
            *(uint *)(param_2 + 4 + lVar6 * 4) = *(uint *)(param_2 + 4 + lVar13 * 4) ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar4;
            *(uint *)(param_2 + 4 + lVar13 * 4) = uVar1 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar13 * 4) = uVar2;
            lVar13 = (longlong)iVar14;
            iVar14 = iVar14 + iVar18 * -2;
            lVar6 = (longlong)(iVar12 + iVar10);
            iVar12 = iVar12 + iVar18 * 4;
            uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar6 * 4);
            uVar4 = *(int32_t *)(param_2 + lVar13 * 4);
            *(uint *)(param_2 + 4 + lVar6 * 4) = *(uint *)(param_2 + 4 + lVar13 * 4) ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar4;
            *(uint *)(param_2 + 4 + lVar13 * 4) = uVar1 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar13 * 4) = uVar2;
            lVar13 = (longlong)iVar14;
            lVar6 = (longlong)iVar12;
            uVar1 = *(uint *)(param_2 + 4 + lVar13 * 4);
            uVar3 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar6 * 4);
            *(int32_t *)(param_2 + lVar6 * 4) = *(int32_t *)(param_2 + lVar13 * 4);
            *(uint *)(param_2 + 4 + lVar6 * 4) = uVar1 ^ 0x80000000;
            *(uint *)(param_2 + 4 + lVar13 * 4) = uVar3 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar13 * 4) = uVar2;
            lVar6 = (longlong)(iVar12 + iVar10);
            lVar13 = (longlong)(iVar18 * 4 + iVar14);
            uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar6 * 4);
            uVar4 = *(int32_t *)(param_2 + lVar13 * 4);
            *(uint *)(param_2 + 4 + lVar6 * 4) = *(uint *)(param_2 + 4 + lVar13 * 4) ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar4;
            *(int32_t *)(param_2 + lVar13 * 4) = uVar2;
            *(uint *)(param_2 + 4 + lVar13 * 4) = uVar1 ^ 0x80000000;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar17 = uVar17 + 1;
        iVar12 = *piVar16 + iVar5;
        piVar16 = piVar16 + 1;
        iVar5 = iVar5 + 2;
        lStackX_20 = lStackX_20 + -1;
        iVar11 = iVar12 + iVar18 * 4;
        *(uint *)(param_2 + 4 + (longlong)iVar12 * 4) =
             *(uint *)(param_2 + 4 + (longlong)iVar12 * 4) ^ 0x80000000;
        lVar6 = (longlong)(iVar12 + iVar10);
        lVar13 = (longlong)iVar11;
        uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
        uVar3 = *(uint *)(param_2 + 4 + lVar13 * 4);
        uVar2 = *(int32_t *)(param_2 + lVar6 * 4);
        *(int32_t *)(param_2 + lVar6 * 4) = *(int32_t *)(param_2 + lVar13 * 4);
        *(uint *)(param_2 + 4 + lVar6 * 4) = uVar3 ^ 0x80000000;
        *(int32_t *)(param_2 + lVar13 * 4) = uVar2;
        *(uint *)(param_2 + 4 + lVar13 * 4) = uVar1 ^ 0x80000000;
        lVar13 = (longlong)(iVar11 + iVar10);
        *(uint *)(param_2 + 4 + lVar13 * 4) = *(uint *)(param_2 + 4 + lVar13 * 4) ^ 0x80000000;
      } while (lStackX_20 != 0);
    }
  }
  else {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) ^ 0x80000000;
    *(uint *)(param_2 + 4 + (longlong)iVar10 * 4) =
         *(uint *)(param_2 + 4 + (longlong)iVar10 * 4) ^ 0x80000000;
    if (1 < lStackX_20) {
      lStackX_20 = lStackX_20 + -1;
      iVar18 = 2;
      piVar16 = (int *)0x180c1b95c;
      do {
        iVar5 = 0;
        lVar13 = 0;
        if (3 < iStackX_18) {
          iVar11 = 0;
          uVar17 = (iStackX_18 - 4U >> 2) + 1;
          uVar8 = (ulonglong)uVar17;
          iVar5 = uVar17 * 4;
          do {
            iVar12 = *(int *)(&DAT_180c1b958 + lVar13 * 4);
            iVar15 = iVar11 + 6;
            iVar14 = *piVar16;
            lVar6 = (longlong)(iVar12 + iVar18);
            lVar7 = (longlong)(iVar14 + iVar11);
            uVar17 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar1 = *(uint *)(param_2 + 4 + lVar7 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar7 * 4);
            *(int32_t *)(param_2 + lVar7 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
            *(uint *)(param_2 + 4 + lVar7 * 4) = uVar17 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar2;
            *(uint *)(param_2 + 4 + lVar6 * 4) = uVar1 ^ 0x80000000;
            lVar7 = (longlong)(iVar14 + iVar11 + iVar10);
            lVar6 = (longlong)(iVar12 + iVar18 + iVar10);
            uVar17 = *(uint *)(param_2 + 4 + lVar7 * 4);
            uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar7 * 4);
            *(int32_t *)(param_2 + lVar7 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
            *(uint *)(param_2 + 4 + lVar7 * 4) = uVar1 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar2;
            *(uint *)(param_2 + 4 + lVar6 * 4) = uVar17 ^ 0x80000000;
            iVar12 = *piVar16;
            iVar14 = *(int *)(lVar13 * 4 + 0x180c1b95c) + iVar18;
            lVar6 = (longlong)iVar14;
            lVar7 = (longlong)(iVar12 + iVar11);
            uVar17 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar1 = *(uint *)(param_2 + 0xc + lVar7 * 4);
            uVar2 = *(int32_t *)(param_2 + 8 + lVar7 * 4);
            *(int32_t *)(param_2 + 8 + lVar7 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
            *(uint *)(param_2 + 0xc + lVar7 * 4) = uVar17 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar2;
            *(uint *)(param_2 + 4 + lVar6 * 4) = uVar1 ^ 0x80000000;
            lVar7 = (longlong)(iVar10 + iVar12 + iVar11);
            lVar6 = (longlong)(iVar14 + iVar10);
            uVar17 = *(uint *)(param_2 + 0xc + lVar7 * 4);
            uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar2 = *(int32_t *)(param_2 + 8 + lVar7 * 4);
            *(int32_t *)(param_2 + 8 + lVar7 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
            *(uint *)(param_2 + 0xc + lVar7 * 4) = uVar1 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar2;
            *(uint *)(param_2 + 4 + lVar6 * 4) = uVar17 ^ 0x80000000;
            iVar12 = *piVar16 + iVar15;
            lVar7 = (longlong)iVar12;
            iVar14 = *(int *)(lVar13 * 4 + 0x180c1b960) + iVar18;
            lVar6 = (longlong)iVar14;
            uVar17 = *(uint *)(param_2 + -4 + lVar7 * 4);
            uVar2 = *(int32_t *)(param_2 + -8 + lVar7 * 4);
            uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
            *(int32_t *)(param_2 + -8 + lVar7 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
            *(uint *)(param_2 + -4 + lVar7 * 4) = uVar1 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar2;
            lVar7 = (longlong)(iVar10 + iVar12);
            *(uint *)(param_2 + 4 + lVar6 * 4) = uVar17 ^ 0x80000000;
            uVar2 = *(int32_t *)(param_2 + -8 + lVar7 * 4);
            uVar17 = *(uint *)(param_2 + -4 + lVar7 * 4);
            lVar6 = (longlong)(iVar14 + iVar10);
            iVar11 = iVar11 + 8;
            uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
            *(int32_t *)(param_2 + -8 + lVar7 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
            *(uint *)(param_2 + -4 + lVar7 * 4) = uVar1 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar2;
            *(uint *)(param_2 + 4 + lVar6 * 4) = uVar17 ^ 0x80000000;
            iVar15 = *piVar16 + iVar15;
            lVar7 = (longlong)iVar15;
            iVar12 = *(int *)(lVar13 * 4 + 0x180c1b964) + iVar18;
            lVar6 = (longlong)iVar12;
            iVar15 = iVar15 + iVar10;
            iVar12 = iVar12 + iVar10;
            lVar13 = lVar13 + 4;
            uVar17 = *(uint *)(param_2 + 4 + lVar7 * 4);
            uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar7 * 4);
            *(int32_t *)(param_2 + lVar7 * 4) = *(int32_t *)(param_2 + lVar6 * 4);
            *(uint *)(param_2 + 4 + lVar7 * 4) = uVar1 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar2;
            *(uint *)(param_2 + 4 + lVar6 * 4) = uVar17 ^ 0x80000000;
            uVar17 = *(uint *)(param_2 + 4 + (longlong)iVar15 * 4);
            uVar2 = *(int32_t *)(param_2 + (longlong)iVar15 * 4);
            uVar1 = *(uint *)(param_2 + 4 + (longlong)iVar12 * 4);
            *(int32_t *)(param_2 + (longlong)iVar15 * 4) =
                 *(int32_t *)(param_2 + (longlong)iVar12 * 4);
            *(uint *)(param_2 + 4 + (longlong)iVar15 * 4) = uVar1 ^ 0x80000000;
            *(int32_t *)(param_2 + (longlong)iVar12 * 4) = uVar2;
            *(uint *)(param_2 + 4 + (longlong)iVar12 * 4) = uVar17 ^ 0x80000000;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        if (iVar5 < iStackX_18) {
          piVar9 = (int *)(&DAT_180c1b958 + lVar13 * 4);
          iVar11 = iVar5 * 2;
          uVar8 = (ulonglong)(uint)(iStackX_18 - iVar5);
          do {
            iVar5 = *piVar9;
            piVar9 = piVar9 + 1;
            lVar13 = (longlong)(iVar5 + iVar18);
            iVar12 = *piVar16 + iVar11;
            lVar6 = (longlong)iVar12;
            iVar11 = iVar11 + 2;
            uVar17 = *(uint *)(param_2 + 4 + lVar13 * 4);
            uVar1 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar6 * 4);
            *(int32_t *)(param_2 + lVar6 * 4) = *(int32_t *)(param_2 + lVar13 * 4);
            *(uint *)(param_2 + 4 + lVar6 * 4) = uVar17 ^ 0x80000000;
            *(uint *)(param_2 + 4 + lVar13 * 4) = uVar1 ^ 0x80000000;
            *(int32_t *)(param_2 + lVar13 * 4) = uVar2;
            lVar6 = (longlong)(iVar12 + iVar10);
            lVar13 = (longlong)(iVar5 + iVar18 + iVar10);
            uVar17 = *(uint *)(param_2 + 4 + lVar6 * 4);
            uVar2 = *(int32_t *)(param_2 + lVar6 * 4);
            uVar4 = *(int32_t *)(param_2 + lVar13 * 4);
            *(uint *)(param_2 + 4 + lVar6 * 4) = *(uint *)(param_2 + 4 + lVar13 * 4) ^ 0x80000000;
            *(int32_t *)(param_2 + lVar6 * 4) = uVar4;
            *(int32_t *)(param_2 + lVar13 * 4) = uVar2;
            *(uint *)(param_2 + 4 + lVar13 * 4) = uVar17 ^ 0x80000000;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        iStackX_18 = iStackX_18 + 1;
        iVar5 = *piVar16 + iVar18;
        iVar18 = iVar18 + 2;
        piVar16 = piVar16 + 1;
        lStackX_20 = lStackX_20 + -1;
        *(uint *)(param_2 + 4 + (longlong)iVar5 * 4) =
             *(uint *)(param_2 + 4 + (longlong)iVar5 * 4) ^ 0x80000000;
        *(uint *)(param_2 + 4 + (longlong)(iVar5 + iVar10) * 4) =
             *(uint *)(param_2 + 4 + (longlong)(iVar5 + iVar10) * 4) ^ 0x80000000;
      } while (lStackX_20 != 0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18079f0b0(longlong param_1,float *param_2)
void FUN_18079f0b0(longlong param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar7 = param_2[4] - param_2[6];
  fVar5 = param_2[4] + param_2[6];
  fVar4 = param_2[5] + param_2[7];
  fVar6 = param_2[5] - param_2[7];
  fVar8 = param_2[1] + param_2[3];
  fVar12 = param_2[1] - param_2[3];
  fVar10 = *param_2 + param_2[2];
  fVar14 = *param_2 - param_2[2];
  param_2[1] = fVar4 + fVar8;
  param_2[5] = fVar8 - fVar4;
  *param_2 = fVar5 + fVar10;
  fVar8 = param_2[0xd] + param_2[0xf];
  fVar9 = param_2[0xd] - param_2[0xf];
  param_2[3] = fVar7 + fVar12;
  param_2[7] = fVar12 - fVar7;
  param_2[4] = fVar10 - fVar5;
  fVar15 = param_2[8] - param_2[10];
  fVar7 = param_2[8] + param_2[10];
  param_2[2] = fVar14 - fVar6;
  fVar5 = param_2[0xc] + param_2[0xe];
  fVar10 = param_2[0xc] - param_2[0xe];
  param_2[6] = fVar6 + fVar14;
  fVar4 = _DAT_180c19958;
  fVar6 = param_2[9] + param_2[0xb];
  fVar12 = param_2[9] - param_2[0xb];
  param_2[8] = fVar5 + fVar7;
  param_2[0xd] = fVar7 - fVar5;
  param_2[0xc] = fVar8 - fVar6;
  fVar5 = fVar10 + fVar12;
  param_2[9] = fVar8 + fVar6;
  fVar8 = fVar15 - fVar9;
  fVar9 = fVar9 + fVar15;
  param_2[10] = (fVar8 - fVar5) * fVar4;
  param_2[0xb] = (fVar5 + fVar8) * fVar4;
  fVar10 = fVar10 - fVar12;
  iVar3 = 0x10;
  param_2[0xf] = (fVar10 + fVar9) * fVar4;
  param_2[0xe] = (fVar10 - fVar9) * fVar4;
  if (0x10 < *(int *)(param_1 + 0x14030) * 2) {
    pfVar2 = (float *)&DAT_180c19950;
    param_2 = param_2 + 0x14;
    pfVar1 = (float *)&DAT_180c19958;
    do {
      fVar4 = pfVar1[3];
      fVar8 = pfVar2[3];
      pfVar2 = pfVar2 + 2;
      fVar5 = pfVar1[2];
      fVar6 = *pfVar2;
      fVar9 = *param_2 + param_2[2];
      fVar12 = param_2[-4] + param_2[-2];
      fVar13 = param_2[-4] - param_2[-2];
      fVar15 = *param_2 - param_2[2];
      fVar17 = fVar5 - (fVar8 + fVar8) * fVar4;
      fVar18 = (fVar8 + fVar8) * fVar5 - fVar4;
      fVar10 = param_2[-1] + param_2[-3];
      fVar16 = param_2[-3] - param_2[-1];
      fVar7 = param_2[3] + param_2[1];
      fVar11 = param_2[1] - param_2[3];
      fVar14 = fVar12 - fVar9;
      param_2[-4] = fVar9 + fVar12;
      fVar12 = fVar10 - fVar7;
      fVar9 = fVar13 - fVar11;
      fVar11 = fVar11 + fVar13;
      param_2[-3] = fVar7 + fVar10;
      *param_2 = fVar6 * fVar14 - fVar8 * fVar12;
      param_2[1] = fVar6 * fVar12 + fVar8 * fVar14;
      fVar7 = fVar15 + fVar16;
      fVar16 = fVar16 - fVar15;
      param_2[-2] = fVar5 * fVar9 - fVar4 * fVar7;
      param_2[-1] = fVar4 * fVar9 + fVar5 * fVar7;
      param_2[2] = fVar17 * fVar11 - fVar18 * fVar16;
      param_2[3] = fVar17 * fVar16 + fVar18 * fVar11;
      fVar4 = pfVar1[4];
      fVar5 = pfVar1[5];
      fVar12 = param_2[6] + param_2[4];
      fVar13 = param_2[4] - param_2[6];
      fVar9 = param_2[10] + param_2[8];
      fVar15 = param_2[8] - param_2[10];
      iVar3 = iVar3 + 0x10;
      fVar17 = fVar4 - (fVar6 + fVar6) * fVar5;
      fVar10 = param_2[7] + param_2[5];
      fVar16 = param_2[5] - param_2[7];
      fVar18 = (fVar6 + fVar6) * fVar4 - fVar5;
      fVar7 = param_2[0xb] + param_2[9];
      fVar11 = param_2[9] - param_2[0xb];
      fVar14 = fVar12 - fVar9;
      param_2[4] = fVar9 + fVar12;
      fVar12 = fVar10 - fVar7;
      fVar9 = fVar13 - fVar11;
      fVar11 = fVar11 + fVar13;
      param_2[5] = fVar7 + fVar10;
      fVar7 = fVar15 + fVar16;
      fVar16 = fVar16 - fVar15;
      param_2[8] = -(fVar8 * fVar14) - fVar6 * fVar12;
      param_2[9] = fVar6 * fVar14 - fVar8 * fVar12;
      param_2[6] = fVar4 * fVar9 - fVar5 * fVar7;
      param_2[7] = fVar5 * fVar9 + fVar4 * fVar7;
      param_2[10] = fVar17 * fVar11 - fVar18 * fVar16;
      param_2[0xb] = fVar17 * fVar16 + fVar18 * fVar11;
      param_2 = param_2 + 0x10;
      pfVar1 = pfVar1 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x14030) * 2);
  }
  return;
}





