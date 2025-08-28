#include "TaleWorlds.Native.Split.h"

// 03_rendering_part648.c - 2 个函数

// 函数: void FUN_180634a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180634a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined1 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_c0 = param_1;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  func_0x000180632b30(auStack_b8,param_2,param_3,param_4);
  uStack_d8 = param_7;
  FUN_180633220(param_1,auStack_b8,*param_5,param_6);
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180634b20(longlong param_1)
void FUN_180634b20(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  
  lVar7 = _DAT_180c8ed68;
  iVar8 = _Mtx_lock();
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  iVar8 = _Mtx_lock(lVar7);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar13 = (undefined8 *)0x0;
  lVar14 = *(longlong *)(lVar7 + 0x98);
  lVar10 = *(longlong *)(lVar7 + 0xa0) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x30 + lVar16 != lVar16) {
    do {
      puVar17 = *(undefined8 **)(param_1 + 0xa0);
      if (puVar17 < *(undefined8 **)(param_1 + 0xa8)) {
        *(undefined8 **)(param_1 + 0xa0) = puVar17 + 6;
        puVar17[4] = 0xffffffffffffffff;
        uVar6 = ((undefined8 *)((longlong)puVar19 + lVar14))[1];
        *puVar17 = *(undefined8 *)((longlong)puVar19 + lVar14);
        puVar17[1] = uVar6;
        puVar1 = (undefined4 *)((longlong)puVar19 + lVar14 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar17 + 2) = *puVar1;
        *(undefined4 *)((longlong)puVar17 + 0x14) = uVar3;
        *(undefined4 *)(puVar17 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar5;
        *(undefined4 *)(puVar17 + 4) = *(undefined4 *)((longlong)puVar19 + lVar14 + 0x20);
        *(undefined4 *)((longlong)puVar17 + 0x24) =
             *(undefined4 *)((longlong)puVar19 + lVar14 + 0x24);
        *(undefined4 *)((longlong)puVar17 + 0x2c) =
             *(undefined4 *)((longlong)puVar19 + lVar14 + 0x2c);
        *(undefined4 *)(puVar17 + 5) = *(undefined4 *)((longlong)puVar19 + lVar14 + 0x28);
      }
      else {
        puVar12 = *(undefined8 **)(param_1 + 0x98);
        lVar16 = ((longlong)puVar17 - (longlong)puVar12) / 0x30;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_180634c56:
          puVar9 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar16 * 0x30,*(undefined1 *)(param_1 + 0xb0));
          puVar17 = *(undefined8 **)(param_1 + 0xa0);
          puVar12 = *(undefined8 **)(param_1 + 0x98);
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          if (lVar16 != 0) goto LAB_180634c56;
        }
        puVar11 = puVar9;
        if (puVar12 != puVar17) {
          lVar10 = (longlong)puVar9 - (longlong)puVar12;
          puVar12 = puVar12 + 4;
          do {
            *(undefined8 *)(lVar10 + (longlong)puVar12) = 0xffffffffffffffff;
            uVar6 = puVar12[-3];
            *puVar11 = puVar12[-4];
            puVar11[1] = uVar6;
            uVar6 = puVar12[-1];
            puVar2 = (undefined8 *)(lVar10 + -0x10 + (longlong)puVar12);
            *puVar2 = puVar12[-2];
            puVar2[1] = uVar6;
            *(undefined4 *)(lVar10 + (longlong)puVar12) = *(undefined4 *)puVar12;
            *(undefined4 *)(lVar10 + 4 + (longlong)puVar12) = *(undefined4 *)((longlong)puVar12 + 4)
            ;
            *(undefined4 *)(lVar10 + 0xc + (longlong)puVar12) =
                 *(undefined4 *)((longlong)puVar12 + 0xc);
            *(undefined4 *)(lVar10 + 8 + (longlong)puVar12) = *(undefined4 *)(puVar12 + 1);
            puVar11 = puVar11 + 6;
            puVar2 = puVar12 + 2;
            puVar12 = puVar12 + 6;
          } while (puVar2 != puVar17);
        }
        puVar11[4] = 0xffffffffffffffff;
        uVar6 = ((undefined8 *)((longlong)puVar19 + lVar14))[1];
        *puVar11 = *(undefined8 *)((longlong)puVar19 + lVar14);
        puVar11[1] = uVar6;
        puVar1 = (undefined4 *)((longlong)puVar19 + lVar14 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar11 + 2) = *puVar1;
        *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
        *(undefined4 *)(puVar11 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar5;
        *(undefined4 *)(puVar11 + 4) = *(undefined4 *)((longlong)puVar19 + lVar14 + 0x20);
        *(undefined4 *)((longlong)puVar11 + 0x24) =
             *(undefined4 *)((longlong)puVar19 + lVar14 + 0x24);
        *(undefined4 *)((longlong)puVar11 + 0x2c) =
             *(undefined4 *)((longlong)puVar19 + lVar14 + 0x2c);
        *(undefined4 *)(puVar11 + 5) = *(undefined4 *)((longlong)puVar19 + lVar14 + 0x28);
        if (*(longlong *)(param_1 + 0x98) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 0x98) = puVar9;
        *(undefined8 **)(param_1 + 0xa0) = puVar11 + 6;
        *(undefined8 **)(param_1 + 0xa8) = puVar9 + lVar16 * 6;
      }
      uVar18 = (int)puVar15 + 1;
      lVar14 = *(longlong *)(lVar7 + 0x98);
      puVar15 = (undefined8 *)(ulonglong)uVar18;
      puVar19 = puVar19 + 6;
    } while ((ulonglong)(longlong)(int)uVar18 <
             (ulonglong)((*(longlong *)(lVar7 + 0xa0) - lVar14) / 0x30));
  }
  lVar14 = *(longlong *)(lVar7 + 0xb8);
  lVar10 = *(longlong *)(lVar7 + 0xc0) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x30 + lVar16 != lVar16) {
    do {
      puVar17 = *(undefined8 **)(param_1 + 0xc0);
      if (puVar17 < *(undefined8 **)(param_1 + 200)) {
        *(undefined8 **)(param_1 + 0xc0) = puVar17 + 6;
        puVar17[4] = 0xffffffffffffffff;
        uVar6 = ((undefined8 *)((longlong)puVar19 + lVar14))[1];
        *puVar17 = *(undefined8 *)((longlong)puVar19 + lVar14);
        puVar17[1] = uVar6;
        puVar1 = (undefined4 *)((longlong)puVar19 + lVar14 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar17 + 2) = *puVar1;
        *(undefined4 *)((longlong)puVar17 + 0x14) = uVar3;
        *(undefined4 *)(puVar17 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar5;
        *(undefined4 *)(puVar17 + 4) = *(undefined4 *)((longlong)puVar19 + lVar14 + 0x20);
        *(undefined4 *)((longlong)puVar17 + 0x24) =
             *(undefined4 *)((longlong)puVar19 + lVar14 + 0x24);
        *(undefined4 *)((longlong)puVar17 + 0x2c) =
             *(undefined4 *)((longlong)puVar19 + lVar14 + 0x2c);
        *(undefined4 *)(puVar17 + 5) = *(undefined4 *)((longlong)puVar19 + lVar14 + 0x28);
      }
      else {
        puVar12 = *(undefined8 **)(param_1 + 0xb8);
        lVar16 = ((longlong)puVar17 - (longlong)puVar12) / 0x30;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_180634e66:
          puVar9 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar16 * 0x30,*(undefined1 *)(param_1 + 0xd0));
          puVar17 = *(undefined8 **)(param_1 + 0xc0);
          puVar12 = *(undefined8 **)(param_1 + 0xb8);
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          if (lVar16 != 0) goto LAB_180634e66;
        }
        puVar11 = puVar9;
        if (puVar12 != puVar17) {
          lVar10 = (longlong)puVar9 - (longlong)puVar12;
          puVar12 = puVar12 + 4;
          do {
            *(undefined8 *)(lVar10 + (longlong)puVar12) = 0xffffffffffffffff;
            uVar6 = puVar12[-3];
            *puVar11 = puVar12[-4];
            puVar11[1] = uVar6;
            uVar6 = puVar12[-1];
            puVar2 = (undefined8 *)(lVar10 + -0x10 + (longlong)puVar12);
            *puVar2 = puVar12[-2];
            puVar2[1] = uVar6;
            *(undefined4 *)(lVar10 + (longlong)puVar12) = *(undefined4 *)puVar12;
            *(undefined4 *)(lVar10 + 4 + (longlong)puVar12) = *(undefined4 *)((longlong)puVar12 + 4)
            ;
            *(undefined4 *)(lVar10 + 0xc + (longlong)puVar12) =
                 *(undefined4 *)((longlong)puVar12 + 0xc);
            *(undefined4 *)(lVar10 + 8 + (longlong)puVar12) = *(undefined4 *)(puVar12 + 1);
            puVar11 = puVar11 + 6;
            puVar2 = puVar12 + 2;
            puVar12 = puVar12 + 6;
          } while (puVar2 != puVar17);
        }
        puVar11[4] = 0xffffffffffffffff;
        uVar6 = ((undefined8 *)((longlong)puVar19 + lVar14))[1];
        *puVar11 = *(undefined8 *)((longlong)puVar19 + lVar14);
        puVar11[1] = uVar6;
        puVar1 = (undefined4 *)((longlong)puVar19 + lVar14 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar11 + 2) = *puVar1;
        *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
        *(undefined4 *)(puVar11 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar5;
        *(undefined4 *)(puVar11 + 4) = *(undefined4 *)((longlong)puVar19 + lVar14 + 0x20);
        *(undefined4 *)((longlong)puVar11 + 0x24) =
             *(undefined4 *)((longlong)puVar19 + lVar14 + 0x24);
        *(undefined4 *)((longlong)puVar11 + 0x2c) =
             *(undefined4 *)((longlong)puVar19 + lVar14 + 0x2c);
        *(undefined4 *)(puVar11 + 5) = *(undefined4 *)((longlong)puVar19 + lVar14 + 0x28);
        if (*(longlong *)(param_1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 0xb8) = puVar9;
        *(undefined8 **)(param_1 + 0xc0) = puVar11 + 6;
        *(undefined8 **)(param_1 + 200) = puVar9 + lVar16 * 6;
      }
      uVar18 = (int)puVar15 + 1;
      lVar14 = *(longlong *)(lVar7 + 0xb8);
      puVar15 = (undefined8 *)(ulonglong)uVar18;
      puVar19 = puVar19 + 6;
    } while ((ulonglong)(longlong)(int)uVar18 <
             (ulonglong)((*(longlong *)(lVar7 + 0xc0) - lVar14) / 0x30));
  }
  lVar14 = *(longlong *)(lVar7 + 0x118);
  lVar10 = *(longlong *)(lVar7 + 0x120) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x44 + lVar16 != lVar16) {
    do {
      puVar17 = *(undefined8 **)(param_1 + 0x120);
      if (puVar17 < *(undefined8 **)(param_1 + 0x128)) {
        *(ulonglong *)(param_1 + 0x120) = (longlong)puVar17 + 0x44;
        uVar6 = ((undefined8 *)((longlong)puVar15 + lVar14))[1];
        *puVar17 = *(undefined8 *)((longlong)puVar15 + lVar14);
        puVar17[1] = uVar6;
        puVar12 = (undefined8 *)((longlong)puVar15 + lVar14 + 0x10);
        uVar6 = puVar12[1];
        puVar17[2] = *puVar12;
        puVar17[3] = uVar6;
        puVar1 = (undefined4 *)((longlong)puVar15 + lVar14 + 0x20);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar17 + 4) = *puVar1;
        *(undefined4 *)((longlong)puVar17 + 0x24) = uVar3;
        *(undefined4 *)(puVar17 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar5;
        puVar12 = (undefined8 *)((longlong)puVar15 + lVar14 + 0x30);
        uVar6 = puVar12[1];
        puVar17[6] = *puVar12;
        puVar17[7] = uVar6;
        *(undefined4 *)(puVar17 + 8) = *(undefined4 *)((longlong)puVar15 + lVar14 + 0x40);
      }
      else {
        puVar12 = *(undefined8 **)(param_1 + 0x118);
        lVar16 = ((longlong)puVar17 - (longlong)puVar12) / 0x44;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_180635074:
          puVar9 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar16 * 0x44,*(undefined1 *)(param_1 + 0x130));
          puVar17 = *(undefined8 **)(param_1 + 0x120);
          puVar12 = *(undefined8 **)(param_1 + 0x118);
          puVar11 = puVar9;
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          puVar11 = puVar13;
          if (lVar16 != 0) goto LAB_180635074;
        }
        for (; puVar12 != puVar17; puVar12 = (undefined8 *)((longlong)puVar12 + 0x44)) {
          uVar6 = puVar12[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          uVar6 = puVar12[3];
          puVar9[2] = puVar12[2];
          puVar9[3] = uVar6;
          uVar6 = puVar12[5];
          puVar9[4] = puVar12[4];
          puVar9[5] = uVar6;
          uVar6 = puVar12[7];
          puVar9[6] = puVar12[6];
          puVar9[7] = uVar6;
          *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar12 + 8);
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x44);
        }
        uVar6 = ((undefined8 *)((longlong)puVar15 + lVar14))[1];
        *puVar9 = *(undefined8 *)((longlong)puVar15 + lVar14);
        puVar9[1] = uVar6;
        puVar17 = (undefined8 *)((longlong)puVar15 + lVar14 + 0x10);
        uVar6 = puVar17[1];
        puVar9[2] = *puVar17;
        puVar9[3] = uVar6;
        puVar1 = (undefined4 *)((longlong)puVar15 + lVar14 + 0x20);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar9 + 4) = *puVar1;
        *(undefined4 *)((longlong)puVar9 + 0x24) = uVar3;
        *(undefined4 *)(puVar9 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar5;
        puVar1 = (undefined4 *)((longlong)puVar15 + lVar14 + 0x30);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar9 + 6) = *puVar1;
        *(undefined4 *)((longlong)puVar9 + 0x34) = uVar3;
        *(undefined4 *)(puVar9 + 7) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar5;
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)((longlong)puVar15 + lVar14 + 0x40);
        if (*(longlong *)(param_1 + 0x118) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 0x118) = puVar11;
        *(undefined4 **)(param_1 + 0x120) = (undefined4 *)((longlong)puVar9 + 0x44);
        *(undefined4 **)(param_1 + 0x128) = (undefined4 *)(lVar16 * 0x44 + (longlong)puVar11);
      }
      uVar18 = (int)puVar19 + 1;
      lVar14 = *(longlong *)(lVar7 + 0x118);
      puVar15 = (undefined8 *)((longlong)puVar15 + 0x44);
      puVar19 = (undefined8 *)(ulonglong)uVar18;
    } while ((ulonglong)(longlong)(int)uVar18 <
             (ulonglong)((*(longlong *)(lVar7 + 0x120) - lVar14) / 0x44));
  }
  lVar14 = *(longlong *)(lVar7 + 0xf8);
  lVar10 = *(longlong *)(lVar7 + 0x100) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x44 + lVar16 != lVar16) {
    do {
      puVar17 = *(undefined8 **)(param_1 + 0x100);
      if (puVar17 < *(undefined8 **)(param_1 + 0x108)) {
        *(ulonglong *)(param_1 + 0x100) = (longlong)puVar17 + 0x44;
        uVar6 = ((undefined8 *)((longlong)puVar15 + lVar14))[1];
        *puVar17 = *(undefined8 *)((longlong)puVar15 + lVar14);
        puVar17[1] = uVar6;
        puVar12 = (undefined8 *)((longlong)puVar15 + lVar14 + 0x10);
        uVar6 = puVar12[1];
        puVar17[2] = *puVar12;
        puVar17[3] = uVar6;
        puVar1 = (undefined4 *)((longlong)puVar15 + lVar14 + 0x20);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar17 + 4) = *puVar1;
        *(undefined4 *)((longlong)puVar17 + 0x24) = uVar3;
        *(undefined4 *)(puVar17 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar5;
        puVar12 = (undefined8 *)((longlong)puVar15 + lVar14 + 0x30);
        uVar6 = puVar12[1];
        puVar17[6] = *puVar12;
        puVar17[7] = uVar6;
        *(undefined4 *)(puVar17 + 8) = *(undefined4 *)((longlong)puVar15 + lVar14 + 0x40);
      }
      else {
        puVar12 = *(undefined8 **)(param_1 + 0xf8);
        lVar16 = ((longlong)puVar17 - (longlong)puVar12) / 0x44;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_180635234:
          puVar9 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar16 * 0x44,*(undefined1 *)(param_1 + 0x110));
          puVar17 = *(undefined8 **)(param_1 + 0x100);
          puVar12 = *(undefined8 **)(param_1 + 0xf8);
          puVar11 = puVar9;
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          puVar11 = puVar13;
          if (lVar16 != 0) goto LAB_180635234;
        }
        for (; puVar12 != puVar17; puVar12 = (undefined8 *)((longlong)puVar12 + 0x44)) {
          uVar6 = puVar12[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          uVar6 = puVar12[3];
          puVar9[2] = puVar12[2];
          puVar9[3] = uVar6;
          uVar6 = puVar12[5];
          puVar9[4] = puVar12[4];
          puVar9[5] = uVar6;
          uVar6 = puVar12[7];
          puVar9[6] = puVar12[6];
          puVar9[7] = uVar6;
          *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar12 + 8);
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x44);
        }
        uVar6 = ((undefined8 *)((longlong)puVar15 + lVar14))[1];
        *puVar9 = *(undefined8 *)((longlong)puVar15 + lVar14);
        puVar9[1] = uVar6;
        puVar17 = (undefined8 *)((longlong)puVar15 + lVar14 + 0x10);
        uVar6 = puVar17[1];
        puVar9[2] = *puVar17;
        puVar9[3] = uVar6;
        puVar1 = (undefined4 *)((longlong)puVar15 + lVar14 + 0x20);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar9 + 4) = *puVar1;
        *(undefined4 *)((longlong)puVar9 + 0x24) = uVar3;
        *(undefined4 *)(puVar9 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar5;
        puVar1 = (undefined4 *)((longlong)puVar15 + lVar14 + 0x30);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar9 + 6) = *puVar1;
        *(undefined4 *)((longlong)puVar9 + 0x34) = uVar3;
        *(undefined4 *)(puVar9 + 7) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar5;
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)((longlong)puVar15 + lVar14 + 0x40);
        if (*(longlong *)(param_1 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 0xf8) = puVar11;
        *(undefined4 **)(param_1 + 0x100) = (undefined4 *)((longlong)puVar9 + 0x44);
        *(undefined4 **)(param_1 + 0x108) = (undefined4 *)(lVar16 * 0x44 + (longlong)puVar11);
      }
      uVar18 = (int)puVar19 + 1;
      lVar14 = *(longlong *)(lVar7 + 0xf8);
      puVar15 = (undefined8 *)((longlong)puVar15 + 0x44);
      puVar19 = (undefined8 *)(ulonglong)uVar18;
    } while ((ulonglong)(longlong)(int)uVar18 <
             (ulonglong)((*(longlong *)(lVar7 + 0x100) - lVar14) / 0x44));
  }
  lVar14 = *(longlong *)(lVar7 + 0x138);
  lVar10 = *(longlong *)(lVar7 + 0x140) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x44 + lVar16 != lVar16) {
    do {
      puVar17 = *(undefined8 **)(param_1 + 0x140);
      if (puVar17 < *(undefined8 **)(param_1 + 0x148)) {
        *(ulonglong *)(param_1 + 0x140) = (longlong)puVar17 + 0x44;
        uVar6 = ((undefined8 *)(lVar14 + (longlong)puVar15))[1];
        *puVar17 = *(undefined8 *)(lVar14 + (longlong)puVar15);
        puVar17[1] = uVar6;
        puVar12 = (undefined8 *)(lVar14 + 0x10 + (longlong)puVar15);
        uVar6 = puVar12[1];
        puVar17[2] = *puVar12;
        puVar17[3] = uVar6;
        puVar1 = (undefined4 *)(lVar14 + 0x20 + (longlong)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar17 + 4) = *puVar1;
        *(undefined4 *)((longlong)puVar17 + 0x24) = uVar3;
        *(undefined4 *)(puVar17 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar5;
        puVar12 = (undefined8 *)(lVar14 + 0x30 + (longlong)puVar15);
        uVar6 = puVar12[1];
        puVar17[6] = *puVar12;
        puVar17[7] = uVar6;
        *(undefined4 *)(puVar17 + 8) = *(undefined4 *)(lVar14 + 0x40 + (longlong)puVar15);
      }
      else {
        puVar12 = *(undefined8 **)(param_1 + 0x138);
        lVar16 = ((longlong)puVar17 - (longlong)puVar12) / 0x44;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_1806353f4:
          puVar9 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar16 * 0x44,*(undefined1 *)(param_1 + 0x150));
          puVar17 = *(undefined8 **)(param_1 + 0x140);
          puVar12 = *(undefined8 **)(param_1 + 0x138);
          puVar11 = puVar9;
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          puVar11 = puVar13;
          if (lVar16 != 0) goto LAB_1806353f4;
        }
        for (; puVar12 != puVar17; puVar12 = (undefined8 *)((longlong)puVar12 + 0x44)) {
          uVar6 = puVar12[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          uVar6 = puVar12[3];
          puVar9[2] = puVar12[2];
          puVar9[3] = uVar6;
          uVar6 = puVar12[5];
          puVar9[4] = puVar12[4];
          puVar9[5] = uVar6;
          uVar6 = puVar12[7];
          puVar9[6] = puVar12[6];
          puVar9[7] = uVar6;
          *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar12 + 8);
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x44);
        }
        uVar6 = ((undefined8 *)(lVar14 + (longlong)puVar15))[1];
        *puVar9 = *(undefined8 *)(lVar14 + (longlong)puVar15);
        puVar9[1] = uVar6;
        puVar17 = (undefined8 *)(lVar14 + 0x10 + (longlong)puVar15);
        uVar6 = puVar17[1];
        puVar9[2] = *puVar17;
        puVar9[3] = uVar6;
        puVar1 = (undefined4 *)(lVar14 + 0x20 + (longlong)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar9 + 4) = *puVar1;
        *(undefined4 *)((longlong)puVar9 + 0x24) = uVar3;
        *(undefined4 *)(puVar9 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar5;
        puVar1 = (undefined4 *)(lVar14 + 0x30 + (longlong)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(puVar9 + 6) = *puVar1;
        *(undefined4 *)((longlong)puVar9 + 0x34) = uVar3;
        *(undefined4 *)(puVar9 + 7) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar5;
        *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(lVar14 + 0x40 + (longlong)puVar15);
        if (*(longlong *)(param_1 + 0x138) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 0x138) = puVar11;
        *(undefined4 **)(param_1 + 0x140) = (undefined4 *)((longlong)puVar9 + 0x44);
        *(undefined4 **)(param_1 + 0x148) = (undefined4 *)(lVar16 * 0x44 + (longlong)puVar11);
      }
      uVar18 = (int)puVar19 + 1;
      lVar14 = *(longlong *)(lVar7 + 0x138);
      puVar15 = (undefined8 *)((longlong)puVar15 + 0x44);
      puVar19 = (undefined8 *)(ulonglong)uVar18;
    } while ((ulonglong)(longlong)(int)uVar18 <
             (ulonglong)((*(longlong *)(lVar7 + 0x140) - lVar14) / 0x44));
  }
  lVar14 = *(longlong *)(lVar7 + 0x158);
  lVar10 = *(longlong *)(lVar7 + 0x160) - lVar14;
  lVar16 = lVar10 >> 0x3f;
  puVar15 = puVar13;
  puVar19 = puVar13;
  if (lVar10 / 0x14 + lVar16 != lVar16) {
    do {
      puVar17 = *(undefined8 **)(param_1 + 0x160);
      if (puVar17 < *(undefined8 **)(param_1 + 0x168)) {
        *(undefined4 **)(param_1 + 0x160) = (undefined4 *)((longlong)puVar17 + 0x14);
        puVar1 = (undefined4 *)(lVar14 + (longlong)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)puVar17 = *puVar1;
        *(undefined4 *)((longlong)puVar17 + 4) = uVar3;
        *(undefined4 *)(puVar17 + 1) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar5;
        *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(lVar14 + 0x10 + (longlong)puVar15);
      }
      else {
        puVar12 = *(undefined8 **)(param_1 + 0x158);
        lVar16 = ((longlong)puVar17 - (longlong)puVar12) / 0x14;
        if (lVar16 == 0) {
          lVar16 = 1;
LAB_1806355a6:
          puVar9 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar16 * 0x14,*(undefined1 *)(param_1 + 0x170));
          puVar17 = *(undefined8 **)(param_1 + 0x160);
          puVar12 = *(undefined8 **)(param_1 + 0x158);
          puVar11 = puVar9;
        }
        else {
          lVar16 = lVar16 * 2;
          puVar9 = puVar13;
          puVar11 = puVar13;
          if (lVar16 != 0) goto LAB_1806355a6;
        }
        for (; puVar12 != puVar17; puVar12 = (undefined8 *)((longlong)puVar12 + 0x14)) {
          uVar6 = puVar12[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar12 + 2);
          puVar9 = (undefined8 *)((longlong)puVar9 + 0x14);
        }
        puVar1 = (undefined4 *)(lVar14 + (longlong)puVar15);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)puVar9 = *puVar1;
        *(undefined4 *)((longlong)puVar9 + 4) = uVar3;
        *(undefined4 *)(puVar9 + 1) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0xc) = uVar5;
        *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(lVar14 + 0x10 + (longlong)puVar15);
        if (*(longlong *)(param_1 + 0x158) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 **)(param_1 + 0x158) = puVar11;
        *(undefined4 **)(param_1 + 0x160) = (undefined4 *)((longlong)puVar9 + 0x14);
        *(undefined4 **)(param_1 + 0x168) = (undefined4 *)((longlong)puVar11 + lVar16 * 0x14);
      }
      uVar18 = (int)puVar19 + 1;
      lVar14 = *(longlong *)(lVar7 + 0x158);
      puVar15 = (undefined8 *)((longlong)puVar15 + 0x14);
      puVar19 = (undefined8 *)(ulonglong)uVar18;
    } while ((ulonglong)(longlong)(int)uVar18 <
             (ulonglong)((*(longlong *)(lVar7 + 0x160) - lVar14) / 0x14));
  }
  lVar14 = *(longlong *)(lVar7 + 0x178);
  puVar15 = puVar13;
  if ((*(longlong *)(lVar7 + 0x180) - lVar14) / 0x50 != 0) {
    do {
      if (*(ulonglong *)(param_1 + 0x180) < *(ulonglong *)(param_1 + 0x188)) {
        *(ulonglong *)(param_1 + 0x180) = *(ulonglong *)(param_1 + 0x180) + 0x50;
        FUN_1800940b0();
      }
      else {
        FUN_180093d90(param_1 + 0x178,(longlong)puVar13 * 0x50 + lVar14);
      }
      uVar18 = (int)puVar15 + 1;
      lVar14 = *(longlong *)(lVar7 + 0x178);
      puVar13 = (undefined8 *)(longlong)(int)uVar18;
      puVar15 = (undefined8 *)(ulonglong)uVar18;
    } while (puVar13 < (undefined8 *)((*(longlong *)(lVar7 + 0x180) - lVar14) / 0x50));
  }
  iVar8 = _Mtx_unlock(lVar7);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  iVar8 = _Mtx_unlock(param_1);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  return;
}





