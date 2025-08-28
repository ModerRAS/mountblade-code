#include "TaleWorlds.Native.Split.h"

// 03_rendering_part052.c - 13 个函数

// 函数: void FUN_1802966a2(void)
void FUN_1802966a2(void)

{
  ushort uVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 uVar5;
  int unaff_ESI;
  int iVar7;
  int iVar8;
  longlong in_R10;
  longlong in_R11;
  longlong lVar9;
  undefined1 uVar6;
  
  iVar4 = 0;
  lVar9 = 0;
  do {
    iVar7 = 0;
    do {
      lVar3 = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7);
      uVar2 = 0;
      if ((&UNK_180991280)[lVar9] == '.') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(lVar3 + *(longlong *)(in_R10 + 0x18)) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991280)[lVar9] == 'X') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(lVar3 + 0x6d + *(longlong *)(in_R10 + 0x18)) = uVar2;
      lVar3 = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7);
      uVar2 = 0;
      if ((&UNK_180991281)[lVar9] == '.') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 1 + lVar3) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991281)[lVar9] == 'X') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x6e + lVar3) = uVar2;
      lVar3 = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7);
      uVar2 = 0;
      if ((&UNK_180991282)[lVar9] == '.') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 2 + lVar3) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991282)[lVar9] == 'X') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x6f + lVar3) = uVar2;
      lVar3 = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7);
      uVar2 = 0;
      uVar5 = 0xff;
      if ((&UNK_180991283)[lVar9] == '.') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 3 + lVar3) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991283)[lVar9] == 'X') {
        uVar2 = uVar5;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x70 + lVar3) = uVar2;
      lVar3 = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7);
      uVar2 = 0;
      if ((&UNK_180991284)[lVar9] == '.') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 4 + lVar3) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991284)[lVar9] == 'X') {
        uVar2 = uVar5;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x71 + lVar3) = uVar2;
      lVar3 = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7);
      uVar2 = 0;
      if ((&UNK_180991285)[lVar9] == '.') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 5 + lVar3) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991285)[lVar9] == 'X') {
        uVar2 = uVar5;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x72 + lVar3) = uVar2;
      lVar3 = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7);
      uVar2 = 0;
      if ((&UNK_180991286)[lVar9] == '.') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 6 + lVar3) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991286)[lVar9] == 'X') {
        uVar2 = uVar5;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x73 + lVar3) = uVar2;
      lVar3 = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7);
      uVar2 = 0;
      uVar6 = 0xff;
      uVar5 = 0xff;
      if ((&UNK_180991287)[lVar9] == '.') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 7 + lVar3) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991287)[lVar9] == 'X') {
        uVar2 = uVar6;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x74 + lVar3) = uVar2;
      lVar3 = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7);
      uVar2 = 0;
      if ((&UNK_180991288)[lVar9] == '.') {
        uVar2 = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 8 + lVar3) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991288)[lVar9] == 'X') {
        uVar2 = uVar6;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x75 + lVar3) = uVar2;
      iVar8 = (uint)*(ushort *)(in_R11 + 8) +
              ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7;
      uVar2 = 0;
      if ((&UNK_180991289)[lVar9] == '.') {
        uVar2 = uVar6;
      }
      *(undefined1 *)((longlong)iVar8 + 9 + *(longlong *)(in_R10 + 0x18)) = uVar2;
      uVar2 = 0;
      if ((&UNK_180991289)[lVar9] == 'X') {
        uVar2 = uVar5;
      }
      *(undefined1 *)((longlong)iVar8 + 0x76 + *(longlong *)(in_R10 + 0x18)) = uVar2;
      iVar8 = (uint)*(ushort *)(in_R11 + 8) +
              ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7;
      uVar2 = 0;
      if ((&UNK_18099128a)[lVar9] == '.') {
        uVar2 = uVar6;
      }
      *(undefined1 *)((longlong)iVar8 + 10 + *(longlong *)(in_R10 + 0x18)) = uVar2;
      uVar2 = 0;
      if ((&UNK_18099128a)[lVar9] == 'X') {
        uVar2 = uVar5;
      }
      *(undefined1 *)((longlong)iVar8 + 0x77 + *(longlong *)(in_R10 + 0x18)) = uVar2;
      iVar8 = (uint)*(ushort *)(in_R11 + 8) +
              ((uint)*(ushort *)(in_R11 + 10) + iVar4) * unaff_ESI + iVar7;
      uVar2 = 0;
      if ((&UNK_18099128b)[lVar9] == '.') {
        uVar2 = uVar6;
      }
      *(undefined1 *)((longlong)iVar8 + 0xb + *(longlong *)(in_R10 + 0x18)) = uVar2;
      uVar2 = 0;
      if ((&UNK_18099128b)[lVar9] == 'X') {
        uVar2 = uVar5;
      }
      lVar9 = lVar9 + 0xc;
      iVar7 = iVar7 + 0xc;
      *(undefined1 *)((longlong)iVar8 + 0x78 + *(longlong *)(in_R10 + 0x18)) = uVar2;
    } while (iVar7 < 0x6c);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1b);
  uVar1 = *(ushort *)(in_R11 + 10);
  *(float *)(in_R10 + 0x38) = ((float)*(ushort *)(in_R11 + 8) + 0.5) * *(float *)(in_R10 + 0x30);
  *(float *)(in_R10 + 0x3c) = ((float)uVar1 + 0.5) * *(float *)(in_R10 + 0x34);
  return;
}





// 函数: void FUN_1802969ee(void)
void FUN_1802969ee(void)

{
  ushort uVar1;
  int iVar2;
  int unaff_ESI;
  longlong in_R10;
  longlong in_R11;
  
  iVar2 = (uint)*(ushort *)(in_R11 + 10) * unaff_ESI + (uint)*(ushort *)(in_R11 + 8);
  *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 1 + (longlong)(iVar2 + unaff_ESI)) = 0xff;
  *(undefined1 *)((longlong)(iVar2 + unaff_ESI) + *(longlong *)(in_R10 + 0x18)) = 0xff;
  *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 1 + (longlong)iVar2) = 0xff;
  *(undefined1 *)((longlong)iVar2 + *(longlong *)(in_R10 + 0x18)) = 0xff;
  uVar1 = *(ushort *)(in_R11 + 10);
  *(float *)(in_R10 + 0x38) = ((float)*(ushort *)(in_R11 + 8) + 0.5) * *(float *)(in_R10 + 0x30);
  *(float *)(in_R10 + 0x3c) = ((float)uVar1 + 0.5) * *(float *)(in_R10 + 0x34);
  return;
}



longlong FUN_180296a70(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x4c) = 0x3f;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_180296b70(param_1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180296ad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180296ad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_180296b70();
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,uVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,uVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180296b70(undefined4 *param_1)
void FUN_180296b70(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  lVar2 = _DAT_180c8a9b0;
  lVar1 = *(longlong *)(param_1 + 6);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 4) = 0;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x3a8) = *(int *)(lVar2 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8);
  }
  lVar1 = *(longlong *)(param_1 + 10);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x3a8) = *(int *)(lVar2 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8);
  }
  lVar1 = *(longlong *)(param_1 + 0xe);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xc) = 0;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x3a8) = *(int *)(lVar2 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined2 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x1b] = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180296c40(longlong param_1)
void FUN_180296c40(longlong param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  
  lVar10 = _DAT_180c8a9b0;
  uVar12 = 0;
  uVar11 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    puVar6 = *(ushort **)(param_1 + 0x18);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x10);
    uVar13 = uVar12;
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 0x14;
      uVar11 = (uint)uVar2;
      if ((uint)uVar2 <= (uint)uVar13) {
        uVar11 = (uint)uVar13;
      }
      uVar13 = (ulonglong)uVar11;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (lVar4 == 0) {
      *(undefined1 *)(param_1 + 0x68) = 0;
      FUN_180296f10(param_1,uVar11 + 1);
      iVar8 = *(int *)(param_1 + 0x10);
      uVar13 = uVar12;
      if (0 < iVar8) {
        do {
          iVar14 = (int)uVar13;
          uVar9 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar14 * 0x28);
          *(undefined4 *)(*(longlong *)(param_1 + 0x28) + uVar9 * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar14 * 0x28);
          *(short *)(*(longlong *)(param_1 + 0x38) + uVar9 * 2) = (short)uVar13;
          uVar13 = (ulonglong)(iVar14 + 1U);
          iVar8 = *(int *)(param_1 + 0x10);
        } while ((int)(iVar14 + 1U) < iVar8);
      }
      iVar14 = *(int *)(param_1 + 0x30);
      if (iVar14 < 0x21) {
        lVar10 = *(longlong *)(param_1 + 0x40);
      }
      else {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x38) + 0x40);
        if (uVar2 == 0xffff) {
          lVar10 = *(longlong *)(param_1 + 0x40);
        }
        else {
          lVar10 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 0x28;
        }
      }
      if (lVar10 != 0) {
        if (*(short *)(*(longlong *)(param_1 + 0x18) + -0x28 + (longlong)iVar8 * 0x28) != 9) {
          FUN_180299230(param_1 + 0x10,iVar8 + 1);
          iVar14 = *(int *)(param_1 + 0x30);
        }
        lVar4 = (longlong)*(int *)(param_1 + 0x10);
        lVar10 = *(longlong *)(param_1 + 0x18);
        if (iVar14 < 0x21) {
          puVar5 = *(undefined8 **)(param_1 + 0x40);
        }
        else {
          uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x38) + 0x40);
          if (uVar2 == 0xffff) {
            puVar5 = *(undefined8 **)(param_1 + 0x40);
          }
          else {
            puVar5 = (undefined8 *)(lVar10 + (ulonglong)uVar2 * 0x28);
          }
        }
        uVar3 = puVar5[1];
        puVar1 = (undefined8 *)(lVar10 + -0x28 + lVar4 * 0x28);
        *puVar1 = *puVar5;
        puVar1[1] = uVar3;
        uVar3 = puVar5[3];
        puVar1 = (undefined8 *)(lVar10 + -0x18 + lVar4 * 0x28);
        *puVar1 = puVar5[2];
        puVar1[1] = uVar3;
        *(undefined8 *)(lVar10 + -8 + lVar4 * 0x28) = puVar5[4];
        fVar15 = *(float *)(lVar10 + -0x24 + lVar4 * 0x28) * 4.0;
        *(undefined2 *)(lVar10 + -0x28 + lVar4 * 0x28) = 9;
        *(float *)(lVar10 + -0x24 + lVar4 * 0x28) = fVar15;
        *(float *)(*(longlong *)(param_1 + 0x28) + 0x24) = fVar15;
        *(short *)(*(longlong *)(param_1 + 0x38) +
                  (ulonglong)*(ushort *)(lVar10 + -0x28 + lVar4 * 0x28) * 2) =
             *(short *)(param_1 + 0x10) + -1;
        iVar14 = *(int *)(param_1 + 0x30);
      }
      uVar13 = uVar12;
      if (((int)(uint)*(ushort *)(param_1 + 0x4c) < iVar14) &&
         (uVar2 = *(ushort *)
                   (*(longlong *)(param_1 + 0x38) + (ulonglong)*(ushort *)(param_1 + 0x4c) * 2),
         uVar2 != 0xffff)) {
        uVar13 = *(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 0x28;
      }
      *(ulonglong *)(param_1 + 0x40) = uVar13;
      if (uVar13 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(uVar13 + 4);
      }
      uVar13 = (ulonglong)(int)(uVar11 + 1);
      *(undefined4 *)(param_1 + 0x48) = uVar16;
      if (3 < uVar13) {
        pfVar7 = (float *)(*(longlong *)(param_1 + 0x28) + 8);
        lVar10 = (uVar13 - 4 >> 2) + 1;
        uVar12 = lVar10 * 4;
        do {
          if (pfVar7[-2] <= 0.0 && pfVar7[-2] != 0.0) {
            pfVar7[-2] = *(float *)(param_1 + 0x48);
          }
          if (pfVar7[-1] <= 0.0 && pfVar7[-1] != 0.0) {
            pfVar7[-1] = *(float *)(param_1 + 0x48);
          }
          if (*pfVar7 <= 0.0 && *pfVar7 != 0.0) {
            *pfVar7 = *(float *)(param_1 + 0x48);
          }
          if (pfVar7[1] <= 0.0 && pfVar7[1] != 0.0) {
            pfVar7[1] = *(float *)(param_1 + 0x48);
          }
          pfVar7 = pfVar7 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if ((longlong)uVar12 < (longlong)uVar13) {
        lVar10 = *(longlong *)(param_1 + 0x28);
        do {
          pfVar7 = (float *)(lVar10 + uVar12 * 4);
          if (*pfVar7 <= 0.0 && *pfVar7 != 0.0) {
            *(undefined4 *)(lVar10 + uVar12 * 4) = *(undefined4 *)(param_1 + 0x48);
          }
          uVar12 = uVar12 + 1;
        } while ((longlong)uVar12 < (longlong)uVar13);
      }
      return;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar10 != 0) {
      *(int *)(lVar10 + 0x3a8) = *(int *)(lVar10 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar4,_DAT_180c8a9a8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar10 != 0) {
    *(int *)(lVar10 + 0x3a8) = *(int *)(lVar10 + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(lVar4,_DAT_180c8a9a8);
}





// 函数: void FUN_180296f10(longlong param_1,int param_2)
void FUN_180296f10(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)(param_1 + 0x30);
  if (*piVar1 < param_2) {
    iVar6 = 8;
    piVar2 = (int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 < param_2) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      iVar5 = param_2;
      if (param_2 < iVar3) {
        iVar5 = iVar3;
      }
      FUN_18011dbd0(piVar2,iVar5);
    }
    lVar4 = (longlong)*piVar2;
    if (*piVar2 < param_2) {
      for (; lVar4 < param_2; lVar4 = lVar4 + 1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar4 * 4) = 0xbf800000;
      }
    }
    *piVar2 = param_2;
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 < param_2) {
      if (iVar3 != 0) {
        iVar6 = iVar3 + iVar3 / 2;
      }
      iVar3 = param_2;
      if (param_2 < iVar6) {
        iVar3 = iVar6;
      }
      FUN_18011dd10(piVar1,iVar3);
    }
    lVar4 = (longlong)*piVar1;
    if (*piVar1 < param_2) {
      for (; lVar4 < param_2; lVar4 = lVar4 + 1) {
        *(undefined2 *)(*(longlong *)(param_1 + 0x38) + lVar4 * 2) = 0xffff;
      }
    }
    *piVar1 = param_2;
  }
  return;
}





// 函数: void FUN_180296f2e(longlong param_1)
void FUN_180296f2e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong unaff_RBX;
  uint uVar7;
  int *unaff_RDI;
  undefined4 in_XMM0_Da;
  undefined4 uStack0000000000000048;
  
  uVar7 = 8;
  piVar1 = (int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  iVar6 = (int)unaff_RBX;
  uStack0000000000000048 = in_XMM0_Da;
  if (iVar2 < iVar6) {
    if (iVar2 == 0) {
      uVar3 = 8;
    }
    else {
      uVar3 = iVar2 / 2 + iVar2;
    }
    uVar5 = unaff_RBX & 0xffffffff;
    if (iVar6 < (int)uVar3) {
      uVar5 = (ulonglong)uVar3;
    }
    in_XMM0_Da = FUN_18011dbd0(piVar1,uVar5);
  }
  lVar4 = (longlong)*piVar1;
  if (*piVar1 < iVar6) {
    for (; lVar4 < (longlong)unaff_RBX; lVar4 = lVar4 + 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar4 * 4) = uStack0000000000000048;
    }
  }
  *piVar1 = iVar6;
  iVar2 = unaff_RDI[1];
  if (iVar2 < iVar6) {
    if (iVar2 != 0) {
      uVar7 = iVar2 + iVar2 / 2;
    }
    uVar5 = unaff_RBX & 0xffffffff;
    if (iVar6 < (int)uVar7) {
      uVar5 = (ulonglong)uVar7;
    }
    FUN_18011dd10(in_XMM0_Da,uVar5);
  }
  lVar4 = (longlong)*unaff_RDI;
  if (*unaff_RDI < iVar6) {
    for (; lVar4 < (longlong)unaff_RBX; lVar4 = lVar4 + 1) {
      *(undefined2 *)(*(longlong *)(unaff_RDI + 2) + lVar4 * 2) = 0xffff;
    }
  }
  *unaff_RDI = iVar6;
  return;
}





// 函数: void FUN_180296f3d(undefined4 param_1)
void FUN_180296f3d(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong in_RCX;
  ulonglong uVar5;
  int iVar6;
  ulonglong unaff_RBX;
  uint unaff_EBP;
  int *unaff_RDI;
  undefined4 uStack0000000000000048;
  
  piVar1 = (int *)(in_RCX + 0x20);
  iVar2 = *(int *)(in_RCX + 0x24);
  iVar6 = (int)unaff_RBX;
  uStack0000000000000048 = param_1;
  if (iVar2 < iVar6) {
    uVar3 = unaff_EBP;
    if (iVar2 != 0) {
      uVar3 = iVar2 / 2 + iVar2;
    }
    uVar5 = unaff_RBX & 0xffffffff;
    if (iVar6 < (int)uVar3) {
      uVar5 = (ulonglong)uVar3;
    }
    param_1 = FUN_18011dbd0(piVar1,uVar5);
  }
  lVar4 = (longlong)*piVar1;
  if (*piVar1 < iVar6) {
    for (; lVar4 < (longlong)unaff_RBX; lVar4 = lVar4 + 1) {
      *(undefined4 *)(*(longlong *)(in_RCX + 0x28) + lVar4 * 4) = uStack0000000000000048;
    }
  }
  *piVar1 = iVar6;
  iVar2 = unaff_RDI[1];
  if (iVar2 < iVar6) {
    if (iVar2 != 0) {
      unaff_EBP = iVar2 + iVar2 / 2;
    }
    uVar5 = unaff_RBX & 0xffffffff;
    if (iVar6 < (int)unaff_EBP) {
      uVar5 = (ulonglong)unaff_EBP;
    }
    FUN_18011dd10(param_1,uVar5);
  }
  lVar4 = (longlong)*unaff_RDI;
  if (*unaff_RDI < iVar6) {
    for (; lVar4 < (longlong)unaff_RBX; lVar4 = lVar4 + 1) {
      *(undefined2 *)(*(longlong *)(unaff_RDI + 2) + lVar4 * 2) = 0xffff;
    }
  }
  *unaff_RDI = iVar6;
  return;
}





// 函数: void FUN_180296fae(void)
void FUN_180296fae(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  int *unaff_RDI;
  
  FUN_18011dd10();
  lVar1 = (longlong)*unaff_RDI;
  if (*unaff_RDI < (int)unaff_RBX) {
    for (; lVar1 < unaff_RBX; lVar1 = lVar1 + 1) {
      *(undefined2 *)(*(longlong *)(unaff_RDI + 2) + lVar1 * 2) = 0xffff;
    }
  }
  *unaff_RDI = (int)unaff_RBX;
  return;
}





// 函数: void FUN_180296fd7(void)
void FUN_180296fd7(void)

{
  longlong in_RAX;
  longlong unaff_RBX;
  undefined4 *unaff_RDI;
  
  if (in_RAX < unaff_RBX) {
    do {
      *(undefined2 *)(*(longlong *)(unaff_RDI + 2) + in_RAX * 2) = 0xffff;
      in_RAX = in_RAX + 1;
    } while (in_RAX < unaff_RBX);
  }
  *unaff_RDI = (int)unaff_RBX;
  return;
}





// 函数: void FUN_180297007(void)
void FUN_180297007(void)

{
  return;
}





// 函数: void FUN_180297010(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
void FUN_180297010(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,float param_11)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_180299230(param_1 + 0x10,*(int *)(param_1 + 0x10) + 1);
  lVar2 = (longlong)*(int *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + -0x18 + lVar2 * 0x28) = param_5;
  *(undefined4 *)(lVar1 + -0x14 + lVar2 * 0x28) = param_6;
  *(undefined4 *)(lVar1 + -0x10 + lVar2 * 0x28) = param_7;
  *(undefined4 *)(lVar1 + -0xc + lVar2 * 0x28) = param_8;
  *(undefined4 *)(lVar1 + -8 + lVar2 * 0x28) = param_9;
  *(undefined4 *)(lVar1 + -4 + lVar2 * 0x28) = param_10;
  *(undefined4 *)(lVar1 + -0x20 + lVar2 * 0x28) = param_3;
  *(undefined4 *)(lVar1 + -0x1c + lVar2 * 0x28) = param_4;
  *(undefined2 *)(lVar1 + -0x28 + lVar2 * 0x28) = param_2;
  param_11 = param_11 + *(float *)(*(longlong *)(param_1 + 0x50) + 0x24);
  *(float *)(lVar1 + -0x24 + lVar2 * 0x28) = param_11;
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x20) != '\0') {
    *(float *)(lVar1 + -0x24 + lVar2 * 0x28) = (float)(int)(param_11 + 0.5);
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(int *)(param_1 + 0x6c) =
       *(int *)(param_1 + 0x6c) +
       (int)((float)*(int *)(*(longlong *)(param_1 + 0x58) + 0x28) *
             (*(float *)(lVar1 + -8 + lVar2 * 0x28) - *(float *)(lVar1 + -0x10 + lVar2 * 0x28)) +
            1.99) *
       (int)((*(float *)(lVar1 + -4 + lVar2 * 0x28) - *(float *)(lVar1 + -0xc + lVar2 * 0x28)) *
             (float)*(int *)(*(longlong *)(param_1 + 0x58) + 0x2c) + 1.99);
  return;
}



char * FUN_1802971b0(longlong param_1,float param_2,char *param_3,char *param_4,float param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pcVar5 = (char *)0x0;
  fVar11 = 0.0;
  fVar10 = 0.0;
  fVar9 = 0.0;
  bVar1 = true;
  param_2 = param_5 / param_2;
  pcVar6 = param_3;
  pcVar7 = param_3;
  if (param_3 < param_4) {
    do {
      param_5 = (float)(int)*pcVar7;
      if ((uint)param_5 < 0x80) {
        lVar3 = 1;
      }
      else {
        iVar2 = FUN_180121550(&param_5,pcVar7,param_4);
        lVar3 = (longlong)iVar2;
      }
      param_3 = pcVar7 + lVar3;
      if (param_5 == 0.0) {
        return pcVar7;
      }
      pcVar4 = pcVar6;
      if ((uint)param_5 < 0x20) {
        if (param_5 == 1.4013e-44) {
          fVar9 = 0.0;
          fVar10 = 0.0;
          fVar11 = 0.0;
          bVar1 = true;
        }
        else if (param_5 != 1.82169e-44) goto LAB_18029726b;
      }
      else {
LAB_18029726b:
        if ((int)param_5 < *(int *)(param_1 + 0x20)) {
          fVar8 = *(float *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uint)param_5 * 4);
        }
        else {
          fVar8 = *(float *)(param_1 + 0x48);
        }
        if (((param_5 == 4.48416e-44) || (param_5 == 1.26117e-44)) || (param_5 == 1.72192e-41)) {
          if (bVar1) {
            fVar11 = fVar11 + fVar9;
            fVar9 = 0.0;
          }
          fVar9 = fVar9 + fVar8;
          pcVar4 = pcVar7;
          if (!bVar1) {
            pcVar4 = pcVar6;
          }
LAB_1802972e6:
          bVar1 = false;
        }
        else {
          fVar10 = fVar10 + fVar8;
          pcVar4 = param_3;
          if (!bVar1) {
            fVar9 = fVar9 + fVar10;
            fVar10 = 0.0;
            fVar11 = fVar11 + fVar9;
            fVar9 = 0.0;
            pcVar4 = pcVar6;
            pcVar5 = pcVar6;
          }
          if (((uint)param_5 < 0x40) &&
             ((0x8800500600000000U >> ((ulonglong)(uint)param_5 & 0x3f) & 1) != 0))
          goto LAB_1802972e6;
          bVar1 = true;
        }
        if (param_2 <= fVar10 + fVar11) {
          if (param_2 <= fVar10) {
            return pcVar7;
          }
          if (pcVar5 == (char *)0x0) {
            return pcVar4;
          }
          return pcVar5;
        }
      }
      pcVar6 = pcVar4;
      pcVar7 = param_3;
    } while (param_3 < param_4);
  }
  return param_3;
}



char * FUN_1802971f4(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char unaff_BL;
  char *unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong unaff_R14;
  char *unaff_R15;
  float fVar5;
  float in_XMM4_Da;
  float in_XMM5_Da;
  uint uStack0000000000000060;
  
  do {
    uStack0000000000000060 = (uint)*unaff_RDI;
    if (uStack0000000000000060 < 0x80) {
      lVar3 = 1;
    }
    else {
      iVar2 = FUN_180121550(&stack0x00000060,unaff_RDI);
      lVar3 = (longlong)iVar2;
    }
    pcVar1 = unaff_RDI + lVar3;
    if (uStack0000000000000060 == 0) {
      return unaff_RDI;
    }
    pcVar4 = unaff_RSI;
    if (uStack0000000000000060 < 0x20) {
      if (uStack0000000000000060 == 10) {
        param_3 = 0.0;
        param_4 = 0.0;
        in_XMM4_Da = 0.0;
        unaff_BL = '\x01';
      }
      else if (uStack0000000000000060 != 0xd) goto LAB_18029726b;
    }
    else {
LAB_18029726b:
      if ((int)uStack0000000000000060 < *(int *)(unaff_R14 + 0x20)) {
        fVar5 = *(float *)(*(longlong *)(unaff_R14 + 0x28) + (ulonglong)uStack0000000000000060 * 4);
      }
      else {
        fVar5 = *(float *)(unaff_R14 + 0x48);
      }
      if (((uStack0000000000000060 == 0x20) || (uStack0000000000000060 == 9)) ||
         (uStack0000000000000060 == 0x3000)) {
        if (unaff_BL != '\0') {
          in_XMM4_Da = in_XMM4_Da + param_3;
          param_3 = 0.0;
        }
        param_3 = param_3 + fVar5;
        pcVar4 = unaff_RDI;
        if (unaff_BL == '\0') {
          pcVar4 = unaff_RSI;
        }
LAB_1802972e6:
        unaff_BL = '\0';
      }
      else {
        param_4 = param_4 + fVar5;
        pcVar4 = pcVar1;
        if (unaff_BL == '\0') {
          param_3 = param_3 + param_4;
          param_4 = 0.0;
          in_XMM4_Da = in_XMM4_Da + param_3;
          param_3 = 0.0;
          pcVar4 = unaff_RSI;
          unaff_RBP = unaff_RSI;
        }
        if ((uStack0000000000000060 < 0x40) &&
           ((0x8800500600000000U >> ((ulonglong)uStack0000000000000060 & 0x3f) & 1) != 0))
        goto LAB_1802972e6;
        unaff_BL = '\x01';
      }
      if (in_XMM5_Da <= param_4 + in_XMM4_Da) {
        if (in_XMM5_Da <= param_4) {
          return unaff_RDI;
        }
        if (unaff_RBP == (char *)0x0) {
          return pcVar4;
        }
        return unaff_RBP;
      }
    }
    unaff_RSI = pcVar4;
    unaff_RDI = pcVar1;
    if (unaff_R15 <= pcVar1) {
      return pcVar1;
    }
  } while( true );
}





// 函数: void FUN_180297308(void)
void FUN_180297308(void)

{
  return;
}





