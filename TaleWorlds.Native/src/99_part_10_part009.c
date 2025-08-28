#include "TaleWorlds.Native.Split.h"

// 99_part_10_part009.c - 3 个函数

// 函数: void FUN_1806a787d(longlong *param_1,longlong *param_2)
void FUN_1806a787d(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong in_RAX;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RBP;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 unaff_R12;
  longlong *plVar10;
  undefined8 unaff_R15;
  ulonglong uVar11;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  
  *(undefined8 *)(in_RAX + -0x38) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x40) = unaff_R15;
  lVar1 = *param_2;
  *(undefined4 *)(unaff_RBP + 0xab) = 4;
  (**(code **)(lVar1 + 8))(param_2,&stack0x00000058,unaff_RBP + 0xab);
  lVar1 = *param_2;
  *(undefined4 *)(unaff_RBP + 0xab) = 4;
  (**(code **)(lVar1 + 8))(param_2,param_1 + 0x1d,unaff_RBP + 0xab);
  FUN_1806a85d0(param_1[0x13],param_2);
  lVar1 = *param_2;
  *(undefined4 *)(unaff_RBP + 0xab) = 4;
  _uStack0000000000000030 = param_1;
  _uStack0000000000000038 = param_2;
  (**(code **)(lVar1 + 8))(param_2,unaff_RBP + 0xac,unaff_RBP + 0xab);
  puVar6 = (undefined8 *)0x0;
  unaff_RBP[0xab] = 0;
  FUN_1806b0eb0(param_1 + 0x11,*(undefined4 *)(unaff_RBP + 0xac),unaff_RBP + 0xab);
  puVar5 = puVar6;
  if ((int)param_1[0x12] != 0) {
    do {
      lVar1 = param_1[0x11];
      *(undefined4 *)(unaff_RBP + 0xab) = 4;
      (**(code **)(*param_2 + 8))(param_2,unaff_RBP + 0xad,unaff_RBP + 0xab);
      if (*(int *)(unaff_RBP + 0xad) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*_DAT_180be0050 + 8))
                           (_DAT_180be0050,0x68,&UNK_18094b120,&UNK_18094b020,0x568);
        if (puVar3 == (undefined8 *)0x0) {
          FUN_1806a8c20(0,&stack0x00000030);
          puVar3 = puVar6;
        }
        else {
          puVar3[1] = &DAT_18098bc73;
          puVar3[2] = &DAT_18098bc73;
          *(undefined4 *)(puVar3 + 3) = 0xffffffff;
          puVar3[4] = &DAT_18098bc73;
          puVar3[5] = &DAT_18098bc73;
          *(undefined4 *)(puVar3 + 6) = 0xffffffff;
          puVar3[7] = &DAT_18098bc73;
          puVar3[8] = &DAT_18098bc73;
          *(undefined4 *)(puVar3 + 9) = 0;
          *(undefined4 *)((longlong)puVar3 + 0x4c) = 0xffffffff;
          puVar3[10] = 0;
          *puVar3 = &UNK_18094aee8;
          puVar3[0xb] = 0;
          puVar3[0xc] = 0;
          FUN_1806a8c20(puVar3,&stack0x00000030);
        }
      }
      uVar7 = (int)puVar5 + 1;
      *(undefined8 **)(lVar1 + (longlong)puVar5 * 8) = puVar3;
      puVar5 = (undefined8 *)(ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x12));
    param_1 = (longlong *)unaff_RBP[0xaa];
  }
  lVar1 = *param_2;
  *(undefined4 *)(unaff_RBP + 0xab) = 4;
  (**(code **)(lVar1 + 8))(param_2,&stack0x00000050,unaff_RBP + 0xab);
  unaff_RBP[0xab] = 0;
  FUN_1806b0dd0(param_1 + 0xf,uStack0000000000000050,unaff_RBP + 0xab);
  puVar5 = puVar6;
  if ((int)param_1[0x10] != 0) {
    do {
      lVar1 = param_1[0xf];
      *(undefined4 *)(unaff_RBP + 0xab) = 4;
      (**(code **)(*param_2 + 8))(param_2,unaff_RBP + 0xad,unaff_RBP + 0xab);
      if (*(int *)(unaff_RBP + 0xad) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*_DAT_180be0050 + 8))
                           (_DAT_180be0050,0xa0,&UNK_18094b120,&UNK_18094b020,0x568);
        if (puVar3 == (undefined8 *)0x0) {
          FUN_1806a89c0(0,&stack0x00000030);
          puVar3 = puVar6;
        }
        else {
          puVar3[1] = &DAT_18098bc73;
          puVar3[2] = &DAT_18098bc73;
          puVar3[3] = 0xffffffffffffffff;
          puVar3[4] = 0xffffffffffffffff;
          puVar3[5] = 0;
          *(undefined4 *)(puVar3 + 6) = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          *(undefined4 *)(puVar3 + 10) = 0;
          puVar3[0xb] = 0;
          puVar3[0xc] = 0;
          *(undefined2 *)(puVar3 + 0xd) = 0;
          *puVar3 = &UNK_18094aef0;
          puVar3[0xe] = 0;
          puVar3[0xf] = 0;
          puVar3[0x10] = 0;
          puVar3[0x11] = 0;
          puVar3[0x12] = 0;
          puVar3[0x13] = 0;
          FUN_1806a89c0(puVar3,&stack0x00000030);
        }
      }
      uVar7 = (int)puVar5 + 1;
      *(undefined8 **)(lVar1 + (longlong)puVar5 * 8) = puVar3;
      puVar5 = (undefined8 *)(ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x10));
    param_1 = (longlong *)unaff_RBP[0xaa];
  }
  lVar1 = *param_2;
  *(undefined4 *)(unaff_RBP + 0xab) = 4;
  plVar10 = param_1 + 0x1b;
  (**(code **)(lVar1 + 8))(param_2,(longlong)&stack0x00000050 + 4,unaff_RBP + 0xab);
  unaff_RBP[0xab] = 0;
  FUN_1806b0f90(plVar10,uStack0000000000000054,unaff_RBP + 0xab);
  puVar5 = puVar6;
  if ((int)param_1[0x1c] != 0) {
    do {
      lVar1 = *plVar10;
      *(undefined4 *)(unaff_RBP + 0xab) = 4;
      (**(code **)(*param_2 + 8))(param_2,unaff_RBP + 0xad,unaff_RBP + 0xab);
      if (*(int *)(unaff_RBP + 0xad) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (undefined8 *)
                 (**(code **)(*_DAT_180be0050 + 8))
                           (_DAT_180be0050,0x90,&UNK_18094b120,&UNK_18094b020,0x568);
        if (puVar3 == (undefined8 *)0x0) {
          FUN_1806a8e00(0,&stack0x00000030);
          puVar3 = puVar6;
        }
        else {
          puVar3[1] = &DAT_18098bc73;
          puVar3[2] = &DAT_18098bc73;
          *(undefined4 *)(puVar3 + 3) = 0xffffffff;
          puVar3[4] = &DAT_18098bc73;
          puVar3[5] = &DAT_18098bc73;
          *(undefined4 *)(puVar3 + 6) = 0xffffffff;
          puVar3[7] = 0;
          puVar3[8] = 0;
          *(undefined4 *)(puVar3 + 9) = 0;
          puVar3[10] = 0;
          puVar3[0xb] = 0;
          *puVar3 = &UNK_18094af30;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          puVar3[0xe] = 0;
          puVar3[0xf] = 0;
          puVar3[0x10] = 0;
          puVar3[0x11] = 0;
          FUN_1806a8e00(puVar3,&stack0x00000030);
        }
      }
      uVar7 = (int)puVar5 + 1;
      *(undefined8 **)(lVar1 + (longlong)puVar5 * 8) = puVar3;
      puVar5 = (undefined8 *)(ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x1c));
    param_1 = (longlong *)unaff_RBP[0xaa];
  }
  if ((*(int *)((longlong)param_1 + 0x2c) != 0) && (*(int *)((longlong)param_1 + 0x3c) != 0)) {
                    // WARNING: Subroutine does not return
    memset(param_1[4],0xffffffff,*(int *)((longlong)param_1 + 0x2c) * 4);
  }
  if ((*(int *)((longlong)param_1 + 100) != 0) && (*(int *)((longlong)param_1 + 0x74) != 0)) {
                    // WARNING: Subroutine does not return
    memset(param_1[0xb],0xffffffff,*(int *)((longlong)param_1 + 100) * 4);
  }
  if ((*(int *)((longlong)param_1 + 0xc4) != 0) && (*(int *)((longlong)param_1 + 0xd4) != 0)) {
                    // WARNING: Subroutine does not return
    memset(param_1[0x17],0xffffffff,*(int *)((longlong)param_1 + 0xc4) * 4);
  }
  *(undefined4 *)(unaff_RBP + 0xac) = 0;
  puVar5 = puVar6;
  if ((int)param_1[0x10] != 0) {
    do {
      lVar1 = *(longlong *)(param_1[0xf] + (longlong)puVar5 * 8);
      if (lVar1 != 0) {
        uStack0000000000000030 = *(undefined4 *)(lVar1 + 8);
        uStack0000000000000034 = *(undefined4 *)(lVar1 + 0xc);
        uStack0000000000000038 = *(undefined4 *)(lVar1 + 0x10);
        uStack000000000000003c = *(undefined4 *)(lVar1 + 0x14);
        puVar4 = (undefined4 *)FUN_1806ab040(param_1 + 1,&stack0x00000030,unaff_RBP + 0xaa);
        if (*(char *)(unaff_RBP + 0xaa) == '\0') {
          *puVar4 = uStack0000000000000030;
          puVar4[1] = uStack0000000000000034;
          puVar4[2] = uStack0000000000000038;
          puVar4[3] = uStack000000000000003c;
          *(longlong *)(puVar4 + 4) = lVar1;
        }
        iVar2 = (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)(lVar1 + 0x18));
        unaff_RBP[-0x10] = &UNK_18094a9a8;
        unaff_RBP[-0xf] = &DAT_18098bc73;
        unaff_RBP[-0xe] = &DAT_18098bc73;
        unaff_RBP[-0xc] = &DAT_18098bc73;
        unaff_RBP[-0xb] = &DAT_18098bc73;
        unaff_RBP[-9] = &DAT_18098bc73;
        unaff_RBP[-8] = &DAT_18098bc73;
        unaff_RBP[-4] = &DAT_18098bc73;
        unaff_RBP[-3] = &DAT_18098bc73;
        unaff_RBP[-1] = &DAT_18098bc73;
        *unaff_RBP = &DAT_18098bc73;
        unaff_RBP[2] = &DAT_18098bc73;
        unaff_RBP[3] = &DAT_18098bc73;
        unaff_RBP[7] = &DAT_18098bc73;
        unaff_RBP[8] = &DAT_18098bc73;
        unaff_RBP[10] = &DAT_18098bc73;
        unaff_RBP[0xb] = &DAT_18098bc73;
        unaff_RBP[0xd] = &DAT_18098bc73;
        unaff_RBP[0xe] = &DAT_18098bc73;
        unaff_RBP[0x12] = &DAT_18098bc73;
        unaff_RBP[0x13] = &DAT_18098bc73;
        unaff_RBP[0x15] = &DAT_18098bc73;
        unaff_RBP[0x16] = &DAT_18098bc73;
        unaff_RBP[0x18] = &DAT_18098bc73;
        unaff_RBP[0x19] = &DAT_18098bc73;
        unaff_RBP[0x1d] = &DAT_18098bc73;
        unaff_RBP[0x1e] = &DAT_18098bc73;
        unaff_RBP[0x20] = &DAT_18098bc73;
        unaff_RBP[0x21] = &DAT_18098bc73;
        unaff_RBP[0x23] = &DAT_18098bc73;
        unaff_RBP[0x24] = &DAT_18098bc73;
        unaff_RBP[0x28] = &DAT_18098bc73;
        unaff_RBP[0x29] = &DAT_18098bc73;
        unaff_RBP[0x2b] = &DAT_18098bc73;
        unaff_RBP[0x2c] = &DAT_18098bc73;
        unaff_RBP[0x2e] = &DAT_18098bc73;
        unaff_RBP[0x2f] = &DAT_18098bc73;
        unaff_RBP[0x33] = &DAT_18098bc73;
        unaff_RBP[0x34] = &DAT_18098bc73;
        *(int *)(unaff_RBP + 0xad) = iVar2;
        *(undefined4 *)(unaff_RBP + -0xd) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + -10) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + -7) = 0;
        *(undefined4 *)((longlong)unaff_RBP + -0x34) = 0xffffffff;
        unaff_RBP[-6] = 0;
        unaff_RBP[-5] = &UNK_18094a9a8;
        *(undefined4 *)(unaff_RBP + -2) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 1) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 4) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x24) = 0xffffffff;
        unaff_RBP[5] = 0;
        unaff_RBP[6] = &UNK_18094a9a8;
        *(undefined4 *)(unaff_RBP + 9) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 0xc) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 0xf) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x7c) = 0xffffffff;
        unaff_RBP[0x10] = 0;
        unaff_RBP[0x11] = &UNK_18094a9a8;
        *(undefined4 *)(unaff_RBP + 0x14) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 0x17) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 0x1a) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0xd4) = 0xffffffff;
        unaff_RBP[0x1b] = 0;
        unaff_RBP[0x1c] = &UNK_18094a9a8;
        *(undefined4 *)(unaff_RBP + 0x1f) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 0x22) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 0x25) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 300) = 0xffffffff;
        unaff_RBP[0x26] = 0;
        unaff_RBP[0x27] = &UNK_18094a9a8;
        *(undefined4 *)(unaff_RBP + 0x2a) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 0x2d) = 0xffffffff;
        *(undefined4 *)(unaff_RBP + 0x30) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x184) = 0xffffffff;
        unaff_RBP[0x31] = 0;
        unaff_RBP[0x32] = &UNK_18094a9a8;
        *(undefined4 *)(unaff_RBP + 0x35) = 0xffffffff;
        unaff_RBP[0x36] = &DAT_18098bc73;
        unaff_RBP[0x37] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x38) = 0xffffffff;
        unaff_RBP[0x39] = &DAT_18098bc73;
        unaff_RBP[0x3a] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x3b) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x1dc) = 0xffffffff;
        unaff_RBP[0x3c] = 0;
        unaff_RBP[0x3d] = &UNK_18094a9a8;
        unaff_RBP[0x3e] = &DAT_18098bc73;
        unaff_RBP[0x3f] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x40) = 0xffffffff;
        unaff_RBP[0x41] = &DAT_18098bc73;
        unaff_RBP[0x42] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x43) = 0xffffffff;
        unaff_RBP[0x44] = &DAT_18098bc73;
        unaff_RBP[0x45] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x46) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x234) = 0xffffffff;
        unaff_RBP[0x47] = 0;
        unaff_RBP[0x48] = &UNK_18094a9a8;
        unaff_RBP[0x49] = &DAT_18098bc73;
        unaff_RBP[0x4a] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x4b) = 0xffffffff;
        unaff_RBP[0x4c] = &DAT_18098bc73;
        unaff_RBP[0x4d] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x4e) = 0xffffffff;
        unaff_RBP[0x4f] = &DAT_18098bc73;
        unaff_RBP[0x50] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x51) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x28c) = 0xffffffff;
        unaff_RBP[0x52] = 0;
        unaff_RBP[0x53] = &UNK_18094a9a8;
        unaff_RBP[0x54] = &DAT_18098bc73;
        unaff_RBP[0x55] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x56) = 0xffffffff;
        unaff_RBP[0x57] = &DAT_18098bc73;
        unaff_RBP[0x58] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x59) = 0xffffffff;
        unaff_RBP[0x5a] = &DAT_18098bc73;
        unaff_RBP[0x5b] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x5c) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x2e4) = 0xffffffff;
        unaff_RBP[0x5d] = 0;
        unaff_RBP[0x5e] = &UNK_18094a9a8;
        unaff_RBP[0x5f] = &DAT_18098bc73;
        unaff_RBP[0x60] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x61) = 0xffffffff;
        unaff_RBP[0x62] = &DAT_18098bc73;
        unaff_RBP[99] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 100) = 0xffffffff;
        unaff_RBP[0x65] = &DAT_18098bc73;
        unaff_RBP[0x66] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x67) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x33c) = 0xffffffff;
        unaff_RBP[0x68] = 0;
        unaff_RBP[0x69] = &UNK_18094a9a8;
        unaff_RBP[0x6a] = &DAT_18098bc73;
        unaff_RBP[0x6b] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x6c) = 0xffffffff;
        unaff_RBP[0x6d] = &DAT_18098bc73;
        unaff_RBP[0x6e] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x6f) = 0xffffffff;
        unaff_RBP[0x70] = &DAT_18098bc73;
        unaff_RBP[0x71] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x72) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x394) = 0xffffffff;
        unaff_RBP[0x73] = 0;
        unaff_RBP[0x74] = &UNK_18094a9a8;
        unaff_RBP[0x75] = &DAT_18098bc73;
        unaff_RBP[0x76] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x77) = 0xffffffff;
        unaff_RBP[0x78] = &DAT_18098bc73;
        unaff_RBP[0x79] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x7a) = 0xffffffff;
        unaff_RBP[0x7b] = &DAT_18098bc73;
        unaff_RBP[0x7c] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x7d) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x3ec) = 0xffffffff;
        unaff_RBP[0x7e] = 0;
        unaff_RBP[0x7f] = &UNK_18094a9a8;
        unaff_RBP[0x80] = &DAT_18098bc73;
        unaff_RBP[0x81] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x82) = 0xffffffff;
        unaff_RBP[0x83] = &DAT_18098bc73;
        unaff_RBP[0x84] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x85) = 0xffffffff;
        unaff_RBP[0x86] = &DAT_18098bc73;
        unaff_RBP[0x87] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x88) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x444) = 0xffffffff;
        unaff_RBP[0x89] = 0;
        unaff_RBP[0x8a] = &UNK_18094a9a8;
        unaff_RBP[0x8b] = &DAT_18098bc73;
        unaff_RBP[0x8c] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x8d) = 0xffffffff;
        unaff_RBP[0x8e] = &DAT_18098bc73;
        unaff_RBP[0x8f] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x90) = 0xffffffff;
        unaff_RBP[0x91] = &DAT_18098bc73;
        unaff_RBP[0x92] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x93) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x49c) = 0xffffffff;
        unaff_RBP[0x94] = 0;
        unaff_RBP[0x95] = &UNK_18094a9a8;
        unaff_RBP[0x96] = &DAT_18098bc73;
        unaff_RBP[0x97] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x98) = 0xffffffff;
        unaff_RBP[0x99] = &DAT_18098bc73;
        unaff_RBP[0x9a] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x9b) = 0xffffffff;
        unaff_RBP[0x9c] = &DAT_18098bc73;
        unaff_RBP[0x9d] = &DAT_18098bc73;
        *(undefined4 *)(unaff_RBP + 0x9e) = 0;
        *(undefined4 *)((longlong)unaff_RBP + 0x4f4) = 0xffffffff;
        unaff_RBP[0x9f] = 0;
        puVar5 = puVar6;
        if (iVar2 != 0) {
          do {
            uVar7 = (**(code **)(*param_1 + 0x88))
                              (param_1,*(undefined4 *)(lVar1 + 0x18),unaff_RBP + -0x10,0x10,
                               (int)puVar5);
            uVar9 = (int)puVar5 + uVar7;
            puVar5 = (undefined8 *)(ulonglong)uVar9;
            if (uVar7 != 0) {
              puVar8 = (uint *)((longlong)unaff_RBP + -0x34);
              uVar11 = (ulonglong)uVar7;
              do {
                uVar7 = *puVar8;
                puVar3 = puVar6;
                if ((-1 < (int)uVar7) && (uVar7 < *(uint *)(param_1 + 0x12))) {
                  puVar3 = *(undefined8 **)(param_1[0x11] + (ulonglong)uVar7 * 8);
                }
                if (puVar3 != (undefined8 *)0x0) {
                  _uStack0000000000000060 = *(undefined8 *)(lVar1 + 8);
                  _uStack0000000000000068 = *(undefined8 *)(lVar1 + 0x10);
                  in_stack_00000040 = puVar3[4];
                  in_stack_00000070 = in_stack_00000040;
                  puVar4 = (undefined4 *)
                           FUN_1806aae60(param_1 + 8,&stack0x00000060,unaff_RBP + 0xab);
                  if (*(char *)(unaff_RBP + 0xab) == '\0') {
                    *puVar4 = uStack0000000000000060;
                    puVar4[1] = uStack0000000000000064;
                    puVar4[2] = uStack0000000000000068;
                    puVar4[3] = uStack000000000000006c;
                    *(undefined8 **)(puVar4 + 6) = puVar3;
                    *(undefined8 *)(puVar4 + 4) = in_stack_00000070;
                  }
                }
                puVar8 = puVar8 + 0x16;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          } while (uVar9 < *(uint *)(unaff_RBP + 0xad));
        }
      }
      uVar7 = *(int *)(unaff_RBP + 0xac) + 1;
      *(uint *)(unaff_RBP + 0xac) = uVar7;
      puVar5 = (undefined8 *)(ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x10));
    plVar10 = param_1 + 0x1b;
  }
  if ((int)param_1[0x1c] != 0) {
    do {
      lVar1 = *(longlong *)(*plVar10 + (longlong)puVar6 * 8);
      _uStack0000000000000030 = *(longlong **)(lVar1 + 0x20);
      _uStack0000000000000038 = *(longlong **)(lVar1 + 0x28);
      puVar5 = (undefined8 *)FUN_1806ab040(param_1 + 0x14,&stack0x00000030,unaff_RBP + 0xaa);
      if (*(char *)(unaff_RBP + 0xaa) == '\0') {
        *puVar5 = _uStack0000000000000030;
        puVar5[1] = _uStack0000000000000038;
        puVar5[2] = lVar1;
      }
      uVar7 = (int)puVar6 + 1;
      puVar6 = (undefined8 *)(ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x1c));
  }
  return;
}






// 函数: void FUN_1806a8572(void)
void FUN_1806a8572(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong *unaff_R13;
  longlong unaff_R14;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  do {
    lVar1 = *(longlong *)(*unaff_R13 + (ulonglong)unaff_EBX * 8);
    uStack0000000000000030 = *(undefined4 *)(lVar1 + 0x20);
    uStack0000000000000034 = *(undefined4 *)(lVar1 + 0x24);
    uStack0000000000000038 = *(undefined4 *)(lVar1 + 0x28);
    uStack000000000000003c = *(undefined4 *)(lVar1 + 0x2c);
    puVar2 = (undefined8 *)FUN_1806ab040(unaff_R14 + 0xa0,&stack0x00000030,unaff_RBP + 0x550);
    if (*(char *)(unaff_RBP + 0x550) == '\0') {
      *puVar2 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      puVar2[1] = CONCAT44(uStack000000000000003c,uStack0000000000000038);
      puVar2[2] = lVar1;
    }
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < *(uint *)(unaff_R14 + 0xe0));
  return;
}






// 函数: void FUN_1806a85d0(longlong param_1,longlong *param_2)
void FUN_1806a85d0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte *pbVar15;
  longlong lVar16;
  byte *pbVar17;
  bool bVar18;
  ulonglong auStackX_8 [2];
  char acStackX_18 [8];
  char acStackX_20 [8];
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  ulonglong uVar14;
  
  pbVar8 = (byte *)0x0;
  if ((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(param_1 + 0x7c) != 0)) {
                    // WARNING: Subroutine does not return
    memset(*(undefined8 *)(param_1 + 0x60),0xffffffff,*(int *)(param_1 + 0x6c) * 4);
  }
  if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
                    // WARNING: Subroutine does not return
    memset(*(undefined8 *)(param_1 + 0x98),0xffffffff,*(int *)(param_1 + 0xa4) * 4);
  }
  auStackX_8[0]._0_4_ = 4;
  (**(code **)(*param_2 + 8))(param_2,&uStack_70,auStackX_8);
  auStackX_8[0] = CONCAT44(auStackX_8[0]._4_4_,4);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x40,auStackX_8);
  pbStack_60 = (byte *)0x0;
  uStack_58 = 0;
  uStack_74 = 0;
  pbVar12 = pbVar8;
  pbVar15 = pbVar8;
  pbVar17 = pbVar8;
  if (uStack_70 != 0) {
LAB_1806a8770:
    auStackX_8[0]._0_4_ = 4;
    (**(code **)(*param_2 + 8))(param_2,&uStack_6c,auStackX_8);
    auStackX_8[0] = CONCAT44(auStackX_8[0]._4_4_,4);
    (**(code **)(*param_2 + 8))(param_2,&uStack_78,auStackX_8);
    uVar11 = (uint)pbVar12;
    bVar18 = uVar11 < uStack_78;
    if (bVar18) {
      auStackX_8[0] = auStackX_8[0] & 0xffffffffffffff00;
      FUN_1806a6600(&pbStack_60,uStack_78,auStackX_8);
      bVar18 = uVar11 < uStack_78;
      pbVar17 = pbStack_60;
    }
    uStack_68 = uVar11;
    if (bVar18) {
      uStack_68 = uStack_78;
    }
    (**(code **)(*param_2 + 8))(param_2,pbVar17,&uStack_78);
    uVar4 = uStack_6c;
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar11 = 0x1505;
      bVar1 = *pbVar17;
      pbVar12 = pbVar17;
      while (bVar1 != 0) {
        pbVar12 = pbVar12 + 1;
        uVar11 = uVar11 * 0x21 ^ (uint)bVar1;
        bVar1 = *pbVar12;
      }
      uVar11 = *(uint *)(*(longlong *)(param_1 + 0x20) +
                        (ulonglong)(*(int *)(param_1 + 0x2c) - 1U & uVar11) * 4);
      if (uVar11 != 0xffffffff) {
        do {
          uVar13 = (ulonglong)uVar11;
          pcVar6 = *(char **)(*(longlong *)(param_1 + 0x10) + uVar13 * 0x10);
          lVar16 = (longlong)pbVar17 - (longlong)pcVar6;
          do {
            cVar2 = *pcVar6;
            cVar3 = pcVar6[lVar16];
            if (cVar2 != cVar3) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) goto LAB_1806a8897;
          uVar11 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar13 * 4);
          if (uVar11 == 0xffffffff) break;
        } while( true );
      }
    }
    goto LAB_1806a8868;
  }
FUN_1806a8971:
  if (((((ulonglong)pbVar8 & 0x7fffffff) != 0) && (-1 < (int)pbVar8)) && (pbVar17 != (byte *)0x0)) {
    plVar7 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar7 + 0x10))(plVar7,pbVar17);
  }
  return;
LAB_1806a8897:
  if ((uVar11 == 0xffffffff) ||
     (lVar16 = uVar13 * 0x10 + *(longlong *)(param_1 + 0x10), lVar16 == 0)) {
LAB_1806a8868:
    uVar13 = 0xffffffffffffffff;
    pbVar12 = &DAT_18098bc73;
    if (pbVar17 != (byte *)0x0) {
      pbVar12 = pbVar17;
    }
    do {
      uVar14 = uVar13;
      uVar13 = uVar14 + 1;
    } while (pbVar12[uVar13] != 0);
    iVar5 = (int)uVar14 + 2;
    if (iVar5 != 0) {
      plVar7 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      pbVar8 = (byte *)(**(code **)(*plVar7 + 8))(plVar7,iVar5,&UNK_18094a258,&UNK_18094ad80,0x70);
    }
                    // WARNING: Subroutine does not return
    memcpy(pbVar8,pbVar12,uVar13 & 0xffffffff);
  }
  uVar13 = *(ulonglong *)(lVar16 + 8);
  auStackX_8[0] = CONCAT44(auStackX_8[0]._4_4_,uStack_6c);
  puVar9 = (undefined4 *)FUN_1806aad10(param_1 + 0x48,auStackX_8,acStackX_18);
  if (acStackX_18[0] == '\0') {
    *puVar9 = uVar4;
    *(ulonglong *)(puVar9 + 2) = uVar13;
  }
  auStackX_8[0] = uVar13;
  puVar10 = (ulonglong *)FUN_1806a45c0(param_1 + 0x80,auStackX_8,acStackX_20);
  if (acStackX_20[0] == '\0') {
    *puVar10 = uVar13;
    *(undefined4 *)(puVar10 + 1) = uVar4;
  }
  uStack_74 = (int)pbVar15 + 1;
  pbVar12 = (byte *)(ulonglong)uStack_68;
  pbVar15 = (byte *)(ulonglong)uStack_74;
  if (uStack_70 <= uStack_74) goto code_r0x0001806a8968;
  goto LAB_1806a8770;
code_r0x0001806a8968:
  pbVar8 = (byte *)(uStack_58 >> 0x20);
  goto FUN_1806a8971;
}






