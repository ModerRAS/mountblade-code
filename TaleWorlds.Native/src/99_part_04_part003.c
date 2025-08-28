#include "TaleWorlds.Native.Split.h"

// 99_part_04_part003.c - 6 个函数

// 函数: void FUN_1802595de(int *param_1,longlong param_2)
void FUN_1802595de(int *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_RAX;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint *puVar9;
  longlong lVar10;
  longlong unaff_RBX;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  iVar1 = *in_RAX;
  *(int **)(param_2 + 8) = in_RAX + 1;
  iVar3 = in_RAX[2];
  iVar4 = in_RAX[3];
  iVar5 = in_RAX[4];
  *param_1 = in_RAX[1];
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar5;
  lVar10 = *(longlong *)(param_2 + 8);
  puVar9 = (uint *)(lVar10 + 0x10);
  *(uint **)(unaff_RBX + 8) = puVar9;
  uVar12 = *puVar9;
  lVar10 = lVar10 + 0x14;
  *(longlong *)(unaff_RBX + 8) = lVar10;
  if (uVar12 != 0) {
    (**(code **)(*(longlong *)(param_1 + 4) + 0x18))(param_1 + 4,lVar10,uVar12);
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + (ulonglong)uVar12;
  }
  FUN_18025a7b0(&UNK_18098d7e0);
  piVar6 = *(int **)(unaff_RBX + 8);
  iVar3 = piVar6[1];
  iVar4 = piVar6[2];
  iVar5 = piVar6[3];
  param_1[0xd] = *piVar6;
  param_1[0xe] = iVar3;
  param_1[0xf] = iVar4;
  param_1[0x10] = iVar5;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 0x10);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x11] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x12] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x13] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x14] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x15] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x16] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x17] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x18] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x19] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x1a] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x1b] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x1c] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x1d] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x1e] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x1f] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x20] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x21] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x22] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x23] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x24] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x25] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 8);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x26] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x27] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x28] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x29] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x2a] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x2b] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x2c] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x2d] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x2e] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x2f] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x30] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x31] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x32] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x33] = *piVar6;
  lVar10 = *(longlong *)(unaff_RBX + 8);
  puVar7 = (undefined4 *)(lVar10 + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar7;
  uVar2 = *puVar7;
  *(longlong *)(unaff_RBX + 8) = lVar10 + 8;
  FUN_18025aa20(param_1 + 0x34,uVar2);
  lVar10 = *(longlong *)(param_1 + 0x34);
  uVar11 = 0;
  uVar13 = uVar11;
  if (*(longlong *)(param_1 + 0x36) - lVar10 >> 5 == 0) {
    puVar9 = *(uint **)(unaff_RBX + 8);
  }
  else {
    do {
      uVar12 = **(uint **)(unaff_RBX + 8);
      puVar9 = *(uint **)(unaff_RBX + 8) + 1;
      *(uint **)(unaff_RBX + 8) = puVar9;
      if (uVar12 != 0) {
        (**(code **)(*(longlong *)(lVar10 + uVar11) + 0x18))
                  ((longlong *)(lVar10 + uVar11),puVar9,uVar12);
        *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + (ulonglong)uVar12;
        puVar9 = *(uint **)(unaff_RBX + 8);
      }
      lVar10 = *(longlong *)(param_1 + 0x34);
      uVar12 = (int)uVar13 + 1;
      uVar11 = uVar11 + 0x20;
      uVar13 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)(*(longlong *)(param_1 + 0x36) - lVar10 >> 5));
  }
  param_1[0x3c] = *puVar9;
  lVar10 = *(longlong *)(unaff_RBX + 8);
  puVar9 = (uint *)(lVar10 + 4);
  *(uint **)(unaff_RBX + 8) = puVar9;
  uVar12 = *puVar9;
  piVar6 = (int *)(lVar10 + 8);
  *(int **)(unaff_RBX + 8) = piVar6;
  if (uVar12 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3e) + 0x18))(param_1 + 0x3e,piVar6,uVar12);
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + (ulonglong)uVar12;
    piVar6 = *(int **)(unaff_RBX + 8);
  }
  param_1[0x46] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x47] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x48] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x49] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x4a] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x4b] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x4c] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x4f] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x50] = *piVar6;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(int **)(unaff_RBX + 8) = piVar6;
  param_1[0x51] = *piVar6;
  puVar8 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined1 **)(unaff_RBX + 8) = puVar8;
  *(undefined1 *)(param_1 + 0x52) = *puVar8;
  puVar8 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(undefined1 **)(unaff_RBX + 8) = puVar8;
  *(undefined1 *)((longlong)param_1 + 0x149) = *puVar8;
  piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(int **)(unaff_RBX + 8) = piVar6;
  if (iVar1 != 0) {
    param_1[0x4d] = *piVar6;
    piVar6 = (int *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(int **)(unaff_RBX + 8) = piVar6;
    param_1[0x4e] = *piVar6;
    puVar8 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(undefined1 **)(unaff_RBX + 8) = puVar8;
    *(undefined1 *)((longlong)param_1 + 0x14a) = *puVar8;
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + 1;
  }
  return;
}






// 函数: void FUN_1802595eb(int *param_1,longlong param_2)
void FUN_1802595eb(int *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *in_RAX;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  longlong lVar11;
  longlong unaff_RBX;
  ulonglong uVar12;
  longlong unaff_RDI;
  uint uVar13;
  ulonglong uVar14;
  
  iVar1 = *in_RAX;
  *(int **)(param_2 + 8) = in_RAX + 1;
  iVar3 = in_RAX[2];
  iVar4 = in_RAX[3];
  iVar5 = in_RAX[4];
  *param_1 = in_RAX[1];
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar5;
  lVar11 = *(longlong *)(param_2 + 8);
  puVar10 = (uint *)(lVar11 + 0x10);
  *(uint **)(unaff_RBX + 8) = puVar10;
  uVar13 = *puVar10;
  lVar11 = lVar11 + 0x14;
  *(longlong *)(unaff_RBX + 8) = lVar11;
  if (uVar13 != 0) {
    (**(code **)(*(longlong *)(param_1 + 4) + 0x18))(param_1 + 4,lVar11,uVar13);
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + (ulonglong)uVar13;
  }
  FUN_18025a7b0(&UNK_18098d7e0);
  puVar8 = *(undefined4 **)(unaff_RBX + 8);
  uVar2 = puVar8[1];
  uVar6 = puVar8[2];
  uVar7 = puVar8[3];
  *(undefined4 *)(unaff_RDI + 0x34) = *puVar8;
  *(undefined4 *)(unaff_RDI + 0x38) = uVar2;
  *(undefined4 *)(unaff_RDI + 0x3c) = uVar6;
  *(undefined4 *)(unaff_RDI + 0x40) = uVar7;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 0x10);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x44) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x48) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x4c) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x50) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x54) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x58) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x5c) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x60) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 100) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x68) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x6c) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x70) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x74) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x78) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x7c) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x80) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x84) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x88) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x8c) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x90) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x94) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 8);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x98) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x9c) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xa0) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xa4) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xa8) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xac) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xb0) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xb4) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xb8) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xbc) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xc0) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xc4) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 200) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0xcc) = *puVar8;
  lVar11 = *(longlong *)(unaff_RBX + 8);
  puVar8 = (undefined4 *)(lVar11 + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  uVar2 = *puVar8;
  *(longlong *)(unaff_RBX + 8) = lVar11 + 8;
  FUN_18025aa20(unaff_RDI + 0xd0,uVar2);
  lVar11 = *(longlong *)(unaff_RDI + 0xd0);
  uVar12 = 0;
  uVar14 = uVar12;
  if (*(longlong *)(unaff_RDI + 0xd8) - lVar11 >> 5 == 0) {
    puVar10 = *(uint **)(unaff_RBX + 8);
  }
  else {
    do {
      uVar13 = **(uint **)(unaff_RBX + 8);
      puVar10 = *(uint **)(unaff_RBX + 8) + 1;
      *(uint **)(unaff_RBX + 8) = puVar10;
      if (uVar13 != 0) {
        (**(code **)(*(longlong *)(lVar11 + uVar12) + 0x18))
                  ((longlong *)(lVar11 + uVar12),puVar10,uVar13);
        *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + (ulonglong)uVar13;
        puVar10 = *(uint **)(unaff_RBX + 8);
      }
      lVar11 = *(longlong *)(unaff_RDI + 0xd0);
      uVar13 = (int)uVar14 + 1;
      uVar12 = uVar12 + 0x20;
      uVar14 = (ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)(*(longlong *)(unaff_RDI + 0xd8) - lVar11 >> 5));
  }
  *(uint *)(unaff_RDI + 0xf0) = *puVar10;
  lVar11 = *(longlong *)(unaff_RBX + 8);
  puVar10 = (uint *)(lVar11 + 4);
  *(uint **)(unaff_RBX + 8) = puVar10;
  uVar13 = *puVar10;
  puVar8 = (undefined4 *)(lVar11 + 8);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  if (uVar13 != 0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0xf8) + 0x18))
              ((longlong *)(unaff_RDI + 0xf8),puVar8,uVar13);
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + (ulonglong)uVar13;
    puVar8 = *(undefined4 **)(unaff_RBX + 8);
  }
  *(undefined4 *)(unaff_RDI + 0x118) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x11c) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x120) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x124) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x128) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 300) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x130) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x13c) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x140) = *puVar8;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  *(undefined4 *)(unaff_RDI + 0x144) = *puVar8;
  puVar9 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined1 **)(unaff_RBX + 8) = puVar9;
  *(undefined1 *)(unaff_RDI + 0x148) = *puVar9;
  puVar9 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(undefined1 **)(unaff_RBX + 8) = puVar9;
  *(undefined1 *)(unaff_RDI + 0x149) = *puVar9;
  puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(undefined4 **)(unaff_RBX + 8) = puVar8;
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_RDI + 0x134) = *puVar8;
    puVar8 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(undefined4 **)(unaff_RBX + 8) = puVar8;
    *(undefined4 *)(unaff_RDI + 0x138) = *puVar8;
    puVar9 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(undefined1 **)(unaff_RBX + 8) = puVar9;
    *(undefined1 *)(unaff_RDI + 0x14a) = *puVar9;
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + 1;
  }
  return;
}






// 函数: void FUN_18025991d(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_18025991d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  longlong unaff_RBX;
  ulonglong uVar6;
  longlong unaff_RDI;
  int unaff_R12D;
  uint unaff_R14D;
  
  uVar6 = (ulonglong)unaff_R14D;
  do {
    uVar1 = **(uint **)(unaff_RBX + 8);
    puVar4 = *(uint **)(unaff_RBX + 8) + 1;
    *(uint **)(unaff_RBX + 8) = puVar4;
    if (uVar1 != 0) {
      (**(code **)(*(longlong *)(param_3 + uVar6) + 0x18))
                ((longlong *)(param_3 + uVar6),puVar4,uVar1);
      *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + (ulonglong)uVar1;
      puVar4 = *(uint **)(unaff_RBX + 8);
    }
    param_3 = *(longlong *)(unaff_RDI + 0xd0);
    unaff_R14D = unaff_R14D + 1;
    uVar6 = uVar6 + 0x20;
  } while ((ulonglong)(longlong)(int)unaff_R14D <
           (ulonglong)(*(longlong *)(unaff_RDI + 0xd8) - param_3 >> 5));
  *(uint *)(unaff_RDI + 0xf0) = *puVar4;
  lVar2 = *(longlong *)(unaff_RBX + 8);
  puVar4 = (uint *)(lVar2 + 4);
  *(uint **)(unaff_RBX + 8) = puVar4;
  uVar1 = *puVar4;
  puVar5 = (undefined4 *)(lVar2 + 8);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0xf8) + 0x18))
              ((longlong *)(unaff_RDI + 0xf8),puVar5,uVar1);
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + (ulonglong)uVar1;
    puVar5 = *(undefined4 **)(unaff_RBX + 8);
  }
  *(undefined4 *)(unaff_RDI + 0x118) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x11c) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x120) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x124) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x128) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 300) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x130) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x13c) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x140) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x144) = *puVar5;
  puVar3 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined1 **)(unaff_RBX + 8) = puVar3;
  *(undefined1 *)(unaff_RDI + 0x148) = *puVar3;
  puVar3 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(undefined1 **)(unaff_RBX + 8) = puVar3;
  *(undefined1 *)(unaff_RDI + 0x149) = *puVar3;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  if (unaff_R12D != 0) {
    *(undefined4 *)(unaff_RDI + 0x134) = *puVar5;
    puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(undefined4 **)(unaff_RBX + 8) = puVar5;
    *(undefined4 *)(unaff_RDI + 0x138) = *puVar5;
    puVar3 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(undefined1 **)(unaff_RBX + 8) = puVar3;
    *(undefined1 *)(unaff_RDI + 0x14a) = *puVar3;
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + 1;
  }
  return;
}






// 函数: void FUN_180259982(void)
void FUN_180259982(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  longlong unaff_RBX;
  longlong unaff_RDI;
  int unaff_R12D;
  
  *(undefined4 *)(unaff_RDI + 0xf0) = **(undefined4 **)(unaff_RBX + 8);
  lVar2 = *(longlong *)(unaff_RBX + 8);
  puVar4 = (uint *)(lVar2 + 4);
  *(uint **)(unaff_RBX + 8) = puVar4;
  uVar1 = *puVar4;
  puVar5 = (undefined4 *)(lVar2 + 8);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0xf8) + 0x18))
              ((longlong *)(unaff_RDI + 0xf8),puVar5,uVar1);
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + (ulonglong)uVar1;
    puVar5 = *(undefined4 **)(unaff_RBX + 8);
  }
  *(undefined4 *)(unaff_RDI + 0x118) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x11c) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x120) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x124) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x128) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 300) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x130) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x13c) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x140) = *puVar5;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  *(undefined4 *)(unaff_RDI + 0x144) = *puVar5;
  puVar3 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined1 **)(unaff_RBX + 8) = puVar3;
  *(undefined1 *)(unaff_RDI + 0x148) = *puVar3;
  puVar3 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(undefined1 **)(unaff_RBX + 8) = puVar3;
  *(undefined1 *)(unaff_RDI + 0x149) = *puVar3;
  puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(undefined4 **)(unaff_RBX + 8) = puVar5;
  if (unaff_R12D != 0) {
    *(undefined4 *)(unaff_RDI + 0x134) = *puVar5;
    puVar5 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(undefined4 **)(unaff_RBX + 8) = puVar5;
    *(undefined4 *)(unaff_RDI + 0x138) = *puVar5;
    puVar3 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(undefined1 **)(unaff_RBX + 8) = puVar3;
    *(undefined1 *)(unaff_RDI + 0x14a) = *puVar3;
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + 1;
  }
  return;
}






// 函数: void FUN_1802599b9(longlong *param_1,undefined8 param_2)
void FUN_1802599b9(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  int unaff_R12D;
  
  (**(code **)(*param_1 + 0x18))(param_1,param_2,unaff_RSI & 0xffffffff);
  *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + unaff_RSI;
  *(undefined4 *)(unaff_RDI + 0x118) = **(undefined4 **)(unaff_RBX + 8);
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 0x11c) = *puVar1;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 0x120) = *puVar1;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 0x124) = *puVar1;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 0x128) = *puVar1;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 300) = *puVar1;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 0x130) = *puVar1;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 0x13c) = *puVar1;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 0x140) = *puVar1;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 0x144) = *puVar1;
  puVar2 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined1 **)(unaff_RBX + 8) = puVar2;
  *(undefined1 *)(unaff_RDI + 0x148) = *puVar2;
  puVar2 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(undefined1 **)(unaff_RBX + 8) = puVar2;
  *(undefined1 *)(unaff_RDI + 0x149) = *puVar2;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 1);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  if (unaff_R12D != 0) {
    *(undefined4 *)(unaff_RDI + 0x134) = *puVar1;
    puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(undefined4 **)(unaff_RBX + 8) = puVar1;
    *(undefined4 *)(unaff_RDI + 0x138) = *puVar1;
    puVar2 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
    *(undefined1 **)(unaff_RBX + 8) = puVar2;
    *(undefined1 *)(unaff_RDI + 0x14a) = *puVar2;
    *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + 1;
  }
  return;
}






// 函数: void FUN_180259aca(void)
void FUN_180259aca(void)

{
  undefined4 *in_RAX;
  undefined4 *puVar1;
  undefined1 *puVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0x134) = *in_RAX;
  puVar1 = (undefined4 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined4 **)(unaff_RBX + 8) = puVar1;
  *(undefined4 *)(unaff_RDI + 0x138) = *puVar1;
  puVar2 = (undefined1 *)(*(longlong *)(unaff_RBX + 8) + 4);
  *(undefined1 **)(unaff_RBX + 8) = puVar2;
  *(undefined1 *)(unaff_RDI + 0x14a) = *puVar2;
  *(longlong *)(unaff_RBX + 8) = *(longlong *)(unaff_RBX + 8) + 1;
  return;
}






