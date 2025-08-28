#include "TaleWorlds.Native.Split.h"

// 99_part_05_part065.c - 5 个函数

// 函数: void FUN_1803a1590(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)
void FUN_1803a1590(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong *plStackX_20;
  
  plStackX_20 = param_4;
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
  plVar5 = (longlong *)FUN_18023a2e0(uVar4,0);
  puVar6 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
  *(undefined1 *)puVar6 = 0;
  uVar2 = FUN_18064e990(puVar6);
  *puVar6 = 0x72726574;
  puVar6[1] = 0x5f6e6961;
  puVar6[2] = 0x65646f6e;
  puVar6[3] = 0x6965685f;
  *(undefined8 *)(puVar6 + 4) = 0x5f70616d746867;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  iVar9 = *(int *)(lVar7 + 0x4e8);
  if (0 < iVar9) {
    if ((iVar9 != -0x17) && (uVar2 < iVar9 + 0x18U)) {
      puVar6 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar6,iVar9 + 0x18U,0x10,0x13);
      FUN_18064e990(puVar6);
      iVar9 = *(int *)(lVar7 + 0x4e8);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar6 + 0x17),*(undefined8 *)(lVar7 + 0x4e0),
           (longlong)(iVar9 + 1));
  }
  puVar8 = (undefined4 *)&DAT_18098bc73;
  if (puVar6 != (undefined4 *)0x0) {
    puVar8 = puVar6;
  }
  (**(code **)(plVar5[2] + 0x10))(plVar5 + 2,puVar8);
  lVar7 = FUN_1803a1a70(&plStackX_20);
  *(undefined1 *)(lVar7 + 0x11) = 1;
  *(longlong *)(param_1 + 0x818) = lVar7;
  FUN_1800a5810(_DAT_180c86938,lVar7,0,0,plVar5,
                *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0xa4));
  FUN_18023ce10(plVar5);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
    (**(code **)(*plVar5 + 0x28))(plVar5);
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  *(longlong **)(param_1 + 0x1c0) = plVar5;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))();
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  *(undefined1 *)(lVar7 + 0x11) = 0;
  if (puVar6 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar6);
  }
  iVar9 = 0;
  do {
    iVar3 = *(int *)param_4[1];
    param_4[1] = (longlong)((int *)param_4[1] + 1);
    if ((iVar3 != 0) && (lVar7 = FUN_1803a1a70(&plStackX_20), lVar7 != 0)) {
      *(undefined4 *)(lVar7 + 0x54) = 0xb;
      FUN_1803a39b0(param_1,iVar9,lVar7);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x60a70);
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
  plVar5 = (longlong *)FUN_18023a2e0(uVar4,0);
  puVar6 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
  *(undefined1 *)puVar6 = 0;
  uVar2 = FUN_18064e990(puVar6);
  *puVar6 = 0x72726574;
  puVar6[1] = 0x5f6e6961;
  puVar6[2] = 0x65646f6e;
  puVar6[3] = 0x726f6e5f;
  *(undefined8 *)(puVar6 + 4) = 0x5f70616d6c616d;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  iVar3 = *(int *)(lVar7 + 0x4e8);
  if (0 < iVar3) {
    if ((iVar3 != -0x17) && (uVar2 < iVar3 + 0x18U)) {
      puVar6 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar6,iVar3 + 0x18U,0x10,0x13);
      FUN_18064e990(puVar6);
      iVar3 = *(int *)(lVar7 + 0x4e8);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar6 + 0x17),*(undefined8 *)(lVar7 + 0x4e0),
           (longlong)(iVar3 + 1));
  }
  puVar8 = (undefined4 *)&DAT_18098bc73;
  if (puVar6 != (undefined4 *)0x0) {
    puVar8 = puVar6;
  }
  (**(code **)(plVar5[2] + 0x10))(plVar5 + 2,puVar8);
  lVar7 = FUN_1803a1a70(&plStackX_20);
  *(undefined1 *)(lVar7 + 0x11) = 1;
  if (iVar9 < 1) {
    *(longlong *)(param_1 + 0x810) = lVar7;
    FUN_1800a5810(_DAT_180c86938,lVar7,0,0,plVar5,
                  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0xa4));
    FUN_18023ce10(plVar5);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
      (**(code **)(*plVar5 + 0x28))(plVar5);
      plStackX_20 = plVar5;
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plStackX_20 = *(longlong **)(param_1 + 0x138);
    *(longlong **)(param_1 + 0x138) = plVar5;
    if (plStackX_20 != (longlong *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
  }
  *(undefined1 *)(lVar7 + 0x11) = 0;
  if (puVar6 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar6);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001803a1c68)
// WARNING: Removing unreachable block (ram,0x0001803a1db7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a1a70(longlong *param_1)
void FUN_1803a1a70(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 auStack_158 [128];
  undefined8 uStack_d8;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  ushort uStack_3e;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined5 uStack_39;
  ulonglong uStack_28;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_8e = 3;
  uStack_3e = 0;
  uStack_3c = 0;
  uStack_3b = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_40 = 0;
  uStack_3a = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  iStack_a8 = 0;
  lVar2 = *param_1;
  piVar3 = *(int **)(lVar2 + 8);
  iVar1 = *piVar3;
  *(int **)(lVar2 + 8) = piVar3 + 1;
  if (iVar1 == 0x30484354) {
    iVar1 = piVar3[1];
    piVar6 = piVar3 + 2;
    *(int **)(lVar2 + 8) = piVar6;
    if (iVar1 == 2) {
      iVar1 = *piVar6;
      *(int **)(lVar2 + 8) = piVar3 + 3;
      if (iVar1 == 0x14) {
        iVar1 = piVar3[3];
        *(int **)(lVar2 + 8) = piVar3 + 4;
        iVar4 = piVar3[4];
        iStack_cc = piVar3[5];
        iStack_c8 = piVar3[6];
        iStack_c4 = piVar3[7];
        iStack_b0 = piVar3[8];
        *(int **)(lVar2 + 8) = piVar3 + 9;
        iStack_d0 = iVar4;
        uVar5 = func_0x000180220c90(iVar4);
        strcpy_s(&uStack_8c,0x40,uVar5);
        uStack_4c = CONCAT44(iStack_cc,iVar4);
        uStack_44 = (undefined2)iStack_c8;
        uStack_42 = (undefined2)((uint)iStack_c8 >> 0x10);
        uStack_40 = (undefined2)iStack_c4;
        uStack_3e = (ushort)((uint)iStack_c4 >> 0x10) & 0xff;
        uStack_3c = (undefined1)iStack_b0;
        uStack_3b = (undefined1)((uint)iStack_c4 >> 0x18);
        uStack_3a = 0;
        FUN_1802a1bc0(&uStack_a0);
        iStack_a8 = iVar1;
LAB_1803a1c46:
                    // WARNING: Subroutine does not return
        memcpy(uStack_a0,*(undefined8 *)(lVar2 + 8),(longlong)(int)uStack_98);
      }
    }
    else if (iVar1 == 3) {
      iVar1 = *piVar6;
      *(int **)(lVar2 + 8) = piVar3 + 3;
      if (iVar1 == 0x58) {
        iVar1 = piVar3[3];
        *(int **)(lVar2 + 8) = piVar3 + 4;
        uStack_8c = *(undefined8 *)(piVar3 + 4);
        uStack_84 = *(undefined8 *)(piVar3 + 6);
        uStack_7c = *(undefined8 *)(piVar3 + 8);
        uStack_74 = *(undefined8 *)(piVar3 + 10);
        uStack_6c = *(undefined8 *)(piVar3 + 0xc);
        uStack_64 = *(undefined8 *)(piVar3 + 0xe);
        uStack_5c = *(undefined8 *)(piVar3 + 0x10);
        uStack_54 = *(undefined8 *)(piVar3 + 0x12);
        uStack_4c = *(undefined8 *)(piVar3 + 0x14);
        uVar5 = *(undefined8 *)(piVar3 + 0x16);
        uStack_44 = (undefined2)uVar5;
        uStack_42 = (undefined2)((ulonglong)uVar5 >> 0x10);
        uStack_40 = (undefined2)((ulonglong)uVar5 >> 0x20);
        uStack_3e = (ushort)((ulonglong)uVar5 >> 0x30);
        uVar5 = *(undefined8 *)(piVar3 + 0x18);
        uStack_3c = (undefined1)uVar5;
        uStack_3b = (undefined1)((ulonglong)uVar5 >> 8);
        uStack_39 = (undefined5)((ulonglong)uVar5 >> 0x18);
        *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x58;
        uStack_3a = 0;
        FUN_1802a1bc0(&uStack_a0);
        iStack_a8 = iVar1;
        goto LAB_1803a1c46;
      }
    }
  }
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a1df0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)
void FUN_1803a1df0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int *piVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  int iVar24;
  longlong *plStackX_20;
  
  plStackX_20 = param_4;
  uVar16 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
  plVar17 = (longlong *)FUN_18023a2e0(uVar16,0);
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  iVar24 = 0;
  puVar18 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
  *(undefined1 *)puVar18 = 0;
  uVar14 = FUN_18064e990(puVar18);
  *puVar18 = 0x72726574;
  puVar18[1] = 0x5f6e6961;
  puVar18[2] = 0x65646f6e;
  puVar18[3] = 0x6965685f;
  *(undefined8 *)(puVar18 + 4) = 0x5f70616d746867;
  lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  iVar15 = *(int *)(lVar19 + 0x4e8);
  if (0 < iVar15) {
    if ((iVar15 != -0x17) && (uVar14 < iVar15 + 0x18U)) {
      puVar18 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar18,iVar15 + 0x18U,0x10,0x13);
      FUN_18064e990(puVar18);
      iVar15 = *(int *)(lVar19 + 0x4e8);
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar18 + 0x17),*(undefined8 *)(lVar19 + 0x4e0),
           (longlong)(iVar15 + 1));
  }
  puVar22 = (undefined4 *)&DAT_18098bc73;
  if (puVar18 != (undefined4 *)0x0) {
    puVar22 = puVar18;
  }
  (**(code **)(plVar17[2] + 0x10))(plVar17 + 2,puVar22);
  lVar19 = FUN_1803a24a0(&plStackX_20,0xc);
  *(undefined1 *)(lVar19 + 0x11) = 1;
  *(longlong *)(param_1 + 0x818) = lVar19;
  if (DAT_180c82847 == '\0') {
    FUN_1800a5810(_DAT_180c86938,lVar19,0,0,plVar17,
                  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0xa4));
    FUN_18023ce10(plVar17);
  }
  else {
    uVar5 = *(undefined8 *)(lVar19 + 0x1c);
    uVar6 = *(undefined8 *)(lVar19 + 0x24);
    uVar7 = *(undefined8 *)(lVar19 + 0x2c);
    uVar8 = *(undefined8 *)(lVar19 + 0x34);
    uVar9 = *(undefined8 *)(lVar19 + 0x3c);
    uVar10 = *(undefined8 *)(lVar19 + 0x44);
    uVar11 = *(undefined8 *)(lVar19 + 0x4c);
    uVar12 = *(undefined8 *)(lVar19 + 0x54);
    uVar13 = *(undefined8 *)(lVar19 + 0x5c);
    uVar16 = *(undefined8 *)(lVar19 + 100);
    *(undefined8 *)((longlong)plVar17 + 0x2e4) = *(undefined8 *)(lVar19 + 0x14);
    *(undefined8 *)((longlong)plVar17 + 0x2ec) = uVar5;
    *(undefined8 *)((longlong)plVar17 + 0x2f4) = uVar6;
    *(undefined8 *)((longlong)plVar17 + 0x2fc) = uVar7;
    *(undefined8 *)((longlong)plVar17 + 0x304) = uVar8;
    *(undefined8 *)((longlong)plVar17 + 0x30c) = uVar9;
    *(undefined8 *)((longlong)plVar17 + 0x314) = uVar10;
    *(undefined8 *)((longlong)plVar17 + 0x31c) = uVar11;
    *(undefined8 *)((longlong)plVar17 + 0x324) = uVar12;
    *(undefined8 *)((longlong)plVar17 + 0x32c) = uVar13;
    *(undefined8 *)((longlong)plVar17 + 0x334) = uVar16;
  }
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x28))(plVar17);
    (**(code **)(*plVar17 + 0x28))(plVar17);
  }
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  *(longlong **)(param_1 + 0x1c0) = plVar17;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x38))();
  }
  *(undefined1 *)(lVar19 + 0x11) = 0;
  if (puVar18 == (undefined4 *)0x0) {
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0x38))(plVar17);
    }
    do {
      iVar15 = *(int *)param_4[1];
      param_4[1] = (longlong)((int *)param_4[1] + 1);
      if (iVar15 != 0) {
        puVar20 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
        *puVar20 = 0;
        puVar20[1] = 0;
        *(undefined2 *)(puVar20 + 2) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x62) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x54) = 0;
        *(undefined4 *)((longlong)puVar20 + 0x5c) = 0;
        *(undefined2 *)(puVar20 + 0xc) = 0;
        *(undefined1 *)((longlong)puVar20 + 0x66) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x24) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x34) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x3c) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x44) = 0;
        *(undefined8 *)((longlong)puVar20 + 0x4c) = 0;
        *(undefined1 *)((longlong)puVar20 + 0x12) = 0x23;
        iVar15 = *(int *)param_4[1];
        piVar21 = (int *)param_4[1] + 1;
        param_4[1] = (longlong)piVar21;
        if (iVar15 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar15,3);
          piVar21 = (int *)param_4[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(uVar16,piVar21,(longlong)iVar15);
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < 0x10);
    if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x60a70) < 1) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x198) == 0)) {
      uVar16 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
      plVar17 = (longlong *)FUN_18023a2e0(uVar16,0);
      puVar18 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
      *(undefined1 *)puVar18 = 0;
      uVar14 = FUN_18064e990(puVar18);
      *puVar18 = 0x72726574;
      puVar18[1] = 0x5f6e6961;
      puVar18[2] = 0x65646f6e;
      puVar18[3] = 0x726f6e5f;
      *(undefined8 *)(puVar18 + 4) = 0x5f70616d6c616d;
      lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
      iVar15 = *(int *)(lVar19 + 0x4e8);
      if (0 < iVar15) {
        if ((iVar15 != -0x17) && (uVar14 < iVar15 + 0x18U)) {
          puVar18 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar18,iVar15 + 0x18U,0x10,0x13);
          FUN_18064e990(puVar18);
          iVar15 = *(int *)(lVar19 + 0x4e8);
        }
                    // WARNING: Subroutine does not return
        memcpy((undefined1 *)((longlong)puVar18 + 0x17),*(undefined8 *)(lVar19 + 0x4e0),
               (longlong)(iVar15 + 1));
      }
      puVar22 = (undefined4 *)&DAT_18098bc73;
      if (puVar18 != (undefined4 *)0x0) {
        puVar22 = puVar18;
      }
      (**(code **)(plVar17[2] + 0x10))(plVar17 + 2,puVar22);
      lVar19 = FUN_1803a24a0(&plStackX_20,0,0);
      *(undefined1 *)(lVar19 + 0x11) = 1;
      *(longlong *)(param_1 + 0x810) = lVar19;
      if (DAT_180c82847 == '\0') {
        FUN_1800a5810(_DAT_180c86938,lVar19,0,0,plVar17,
                      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0xa4));
        FUN_18023ce10(plVar17);
      }
      else {
        uVar16 = *(undefined8 *)(lVar19 + 0x1c);
        *(undefined8 *)((longlong)plVar17 + 0x2e4) = *(undefined8 *)(lVar19 + 0x14);
        *(undefined8 *)((longlong)plVar17 + 0x2ec) = uVar16;
        uVar16 = *(undefined8 *)(lVar19 + 0x2c);
        *(undefined8 *)((longlong)plVar17 + 0x2f4) = *(undefined8 *)(lVar19 + 0x24);
        *(undefined8 *)((longlong)plVar17 + 0x2fc) = uVar16;
        uVar16 = *(undefined8 *)(lVar19 + 0x3c);
        *(undefined8 *)((longlong)plVar17 + 0x304) = *(undefined8 *)(lVar19 + 0x34);
        *(undefined8 *)((longlong)plVar17 + 0x30c) = uVar16;
        uVar16 = *(undefined8 *)(lVar19 + 0x4c);
        *(undefined8 *)((longlong)plVar17 + 0x314) = *(undefined8 *)(lVar19 + 0x44);
        *(undefined8 *)((longlong)plVar17 + 0x31c) = uVar16;
        uVar2 = *(undefined4 *)(lVar19 + 0x58);
        uVar3 = *(undefined4 *)(lVar19 + 0x5c);
        uVar4 = *(undefined4 *)(lVar19 + 0x60);
        *(undefined4 *)((longlong)plVar17 + 0x324) = *(undefined4 *)(lVar19 + 0x54);
        *(undefined4 *)(plVar17 + 0x65) = uVar2;
        *(undefined4 *)((longlong)plVar17 + 0x32c) = uVar3;
        *(undefined4 *)(plVar17 + 0x66) = uVar4;
        *(undefined8 *)((longlong)plVar17 + 0x334) = *(undefined8 *)(lVar19 + 100);
      }
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x28))(plVar17);
        (**(code **)(*plVar17 + 0x28))(plVar17);
        plStackX_20 = plVar17;
        (**(code **)(*plVar17 + 0x28))(plVar17);
      }
      plStackX_20 = *(longlong **)(param_1 + 0x138);
      *(longlong **)(param_1 + 0x138) = plVar17;
      if (plStackX_20 != (longlong *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x38))();
        (**(code **)(*plVar17 + 0x38))(plVar17);
      }
      *(undefined1 *)(lVar19 + 0x11) = 0;
      if (puVar18 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar18);
      }
    }
    else {
      uVar23 = (ulonglong)*(int *)param_4[1];
      piVar21 = (int *)param_4[1] + 1;
      param_4[1] = (longlong)piVar21;
      if ((ulonglong)((param_4[2] - (longlong)piVar21) + *param_4) <= uVar23) {
        FUN_180639bf0(param_4,(uVar23 - *param_4) + (longlong)piVar21);
        piVar21 = (int *)param_4[1];
      }
      param_4[1] = (longlong)piVar21 + uVar23;
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a24a0(longlong *param_1)
void FUN_1803a24a0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
  uVar4 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined2 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x62) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x54) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x5c) = 0;
  *(undefined2 *)(puVar3 + 0xc) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x66) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x12) = 0x23;
  piVar2 = *(int **)(*param_1 + 8);
  iVar1 = *piVar2;
  *(int **)(*param_1 + 8) = piVar2 + 1;
  if (iVar1 != 0) {
    uVar4 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar1,3);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar4,*(undefined8 *)(*param_1 + 8),(longlong)iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a25c0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
void FUN_1803a25c0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 param_5,longlong param_6)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  int iVar12;
  longlong lVar13;
  longlong *plStack_98;
  undefined *puStack_78;
  undefined1 *puStack_70;
  uint uStack_68;
  uint uStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  uint uStack_48;
  undefined8 uStack_40;
  longlong lVar11;
  
  FUN_1800634b0(param_2,0x40,&UNK_180a22838,param_4,param_5);
  FUN_180627ae0(&puStack_58,param_6);
  uVar9 = uStack_48 + 1;
  FUN_1806277c0(&puStack_58,uVar9);
  *(undefined2 *)((ulonglong)uStack_48 + (longlong)puStack_50) = 0x2f;
  uStack_48 = uVar9;
  if (param_2 != 0) {
    lVar13 = -1;
    do {
      lVar10 = lVar13;
      lVar13 = lVar10 + 1;
    } while (*(char *)(param_2 + lVar13) != '\0');
    if (0 < (int)lVar13) {
      FUN_1806277c0(&puStack_58,uVar9 + (int)lVar13);
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)uStack_48 + (longlong)puStack_50,param_2,(longlong)((int)lVar10 + 2));
    }
  }
  cVar2 = FUN_180624af0(&puStack_58);
  iVar12 = 0;
  if (cVar2 != '\0') {
    FUN_180627910(&puStack_78,param_2);
    FUN_1800b2cd0();
    puStack_78 = &UNK_180a3c3e0;
    if (puStack_70 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_70 = (undefined1 *)0x0;
    uStack_60 = 0;
    puStack_78 = &UNK_18098bcb0;
    if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x28))();
      (**(code **)(*plStack_98 + 0x28))(plStack_98);
    }
    plVar1 = *(longlong **)(param_1 + 0x1c0);
    *(longlong **)(param_1 + 0x1c0) = plStack_98;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
      (**(code **)(*plStack_98 + 0x38))();
    }
  }
  puStack_58 = &UNK_180a3c3e0;
  if (puStack_50 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_50 = (undefined1 *)0x0;
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  puStack_58 = &UNK_18098bcb0;
  lVar13 = 0x80;
  do {
    bVar8 = (byte)iVar12;
    if ((((((*(uint *)(param_1 + 0x860) >> (bVar8 & 0x1f) & 1) != 0) ||
          ((*(uint *)(param_1 + 0x864) >> (bVar8 & 0x1f) & 1) != 0)) ||
         ((*(uint *)(param_1 + 0x868) >> (bVar8 & 0x1f) & 1) != 0)) ||
        ((*(uint *)(param_1 + 0x86c) >> (bVar8 & 0x1f) & 1) != 0)) &&
       ((iVar12 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x78) &&
        (*(char *)(*(longlong *)(lVar13 + *(longlong *)(param_1 + 0x10)) + 0x150) == '\0')))) {
      FUN_1800634b0(param_2,0x40,&UNK_180a22820,param_4 & 0xffffffff,param_5,iVar12);
      FUN_180627ae0(&puStack_78,param_6);
      uVar9 = uStack_68 + 1;
      if (uVar9 != 0) {
        uVar3 = uStack_68 + 2;
        if (puStack_70 == (undefined1 *)0x0) {
          if ((int)uVar3 < 0x10) {
            uVar3 = 0x10;
          }
          puStack_70 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar3,0x13);
          *puStack_70 = 0;
        }
        else {
          if (uVar3 <= uStack_60) goto LAB_1803a286b;
          puStack_70 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_70,uVar3,0x10,0x13);
        }
        uStack_60 = FUN_18064e990(puStack_70);
      }
LAB_1803a286b:
      *(undefined2 *)(puStack_70 + uStack_68) = 0x2f;
      uStack_68 = uVar9;
      if (param_2 != 0) {
        lVar10 = -1;
        do {
          lVar11 = lVar10;
          lVar10 = lVar11 + 1;
        } while (*(char *)(param_2 + lVar10) != '\0');
        if (0 < (int)lVar10) {
          iVar12 = uVar9 + (int)lVar10;
          if (iVar12 != 0) {
            uVar9 = iVar12 + 1;
            if (puStack_70 == (undefined1 *)0x0) {
              if ((int)uVar9 < 0x10) {
                uVar9 = 0x10;
              }
              puStack_70 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar9,0x13);
              *puStack_70 = 0;
            }
            else {
              if (uVar9 <= uStack_60) goto LAB_1803a290a;
              puStack_70 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_70,uVar9,0x10,0x13);
            }
            uStack_60 = FUN_18064e990(puStack_70);
          }
LAB_1803a290a:
                    // WARNING: Subroutine does not return
          memcpy(puStack_70 + uStack_68,param_2,(longlong)((int)lVar11 + 2));
        }
      }
      cVar2 = FUN_180624af0(&puStack_78);
      if (cVar2 == '\0') {
        if ((0 < *(int *)(param_6 + 0x10)) &&
           (*(char *)(*(longlong *)(param_1 + 0x10) + 0x30) != '\0')) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x30) = 0;
          FUN_180627020(&UNK_180a227f8,param_2);
        }
      }
      else {
        puVar6 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
        puVar7 = (undefined1 *)0x0;
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined2 *)(puVar6 + 2) = 0;
        *(undefined1 *)((longlong)puVar6 + 0x12) = 3;
        *(undefined4 *)((longlong)puVar6 + 0x62) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
        *(undefined4 *)((longlong)puVar6 + 0x5c) = 0;
        *(undefined2 *)(puVar6 + 0xc) = 0;
        *(undefined1 *)((longlong)puVar6 + 0x66) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x3c) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
        *(undefined8 *)((longlong)puVar6 + 0x4c) = 0;
        puStack_58 = &UNK_180a3c3e0;
        uStack_40 = 0;
        puStack_50 = (undefined1 *)0x0;
        uStack_48 = 0;
        if (uStack_68 != 0) {
          iVar4 = uStack_68 + 1;
          if (iVar4 < 0x10) {
            iVar4 = 0x10;
          }
          puVar7 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,0x13);
          *puVar7 = 0;
          puStack_50 = puVar7;
          uVar5 = FUN_18064e990(puVar7);
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
          if (uStack_68 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puVar7,puStack_70,uStack_68 + 1);
          }
        }
        if (puStack_70 != (undefined1 *)0x0) {
          uStack_48 = 0;
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = 0;
          }
          uStack_40 = uStack_40 & 0xffffffff;
        }
        FUN_1802a7680(&puStack_58,puVar6);
        puStack_58 = &UNK_180a3c3e0;
        if (puStack_50 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_50 = (undefined1 *)0x0;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        puStack_58 = &UNK_18098bcb0;
        *(undefined4 *)((longlong)puVar6 + 0x54) = 0xb;
        FUN_1803a39b0(param_1,iVar12,puVar6);
      }
      puStack_78 = &UNK_180a3c3e0;
      if (puStack_70 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_70 = (undefined1 *)0x0;
      uStack_60 = 0;
      puStack_78 = &UNK_18098bcb0;
    }
    iVar12 = iVar12 + 1;
    lVar13 = lVar13 + 8;
    if (0xf < iVar12) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




