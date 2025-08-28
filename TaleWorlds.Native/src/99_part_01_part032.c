#include "TaleWorlds.Native.Split.h"

// 99_part_01_part032.c - 4 个函数

// 函数: void FUN_1800bf9e0(undefined8 param_1,undefined8 *param_2)
void FUN_1800bf9e0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_158 [32];
  undefined8 *puStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float fStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong alStack_a0 [15];
  
  lVar2 = _DAT_180c86898;
  uStack_c8 = 0xfffffffffffffffe;
  alStack_a0[2] = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  uStack_110 = 0;
  lVar1 = _DAT_180c86898 + 0x418;
  puStack_c0 = param_2;
  lStack_b8 = lVar1;
  iVar6 = _Mtx_lock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plVar12 = *(longlong **)(lVar2 + 0x340);
  if (plVar12 == (longlong *)0x0) {
    uStack_108 = 0x3f800000;
    uStack_100 = 0;
    uStack_f8 = 0x3f80000000000000;
    uStack_f0 = 0;
    fStack_e8 = 0.0;
    fStack_e4 = 0.0;
    fStack_e0 = 1.0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d0 = 0x3f80000000000000;
    puVar15 = &uStack_b0;
    lVar14 = 4;
    do {
      func_0x00018005d390(puVar15);
      puVar15 = puVar15 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    uStack_b0 = 0x3f8000003f800000;
    uStack_a8 = 0x3f80000000000000;
    uStack_128 = 0x3f800000;
    alStack_a0[1] = 0x3f800000;
    alStack_a0[0] = lVar14;
    uVar11 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
    plVar12 = (longlong *)FUN_180075030(uVar11,1);
    if (plVar12 != (longlong *)0x0) {
      uStack_120 = plVar12;
      (**(code **)(*plVar12 + 0x28))(plVar12);
    }
    uStack_120 = *(longlong **)(lVar2 + 0x340);
    *(longlong **)(lVar2 + 0x340) = plVar12;
    if (uStack_120 != (longlong *)0x0) {
      (**(code **)(*uStack_120 + 0x38))();
    }
    plVar12 = (longlong *)(*(longlong *)(lVar2 + 0x340) + 0x10);
    (**(code **)(*plVar12 + 0x10))(plVar12,&UNK_180a03600);
    lVar14 = *(longlong *)(lVar2 + 0x340);
    if (*(char *)(lVar14 + 0xfa) != '\x01') {
      *(undefined1 *)(lVar14 + 0xfa) = 1;
      FUN_180079520();
      lVar14 = *(longlong *)(lVar2 + 0x340);
    }
    if (*(char *)(lVar14 + 0xfb) != '\x01') {
      *(undefined1 *)(lVar14 + 0xfb) = 1;
      FUN_180079520();
      lVar14 = *(longlong *)(lVar2 + 0x340);
    }
    FUN_180076a20(lVar14);
    fVar17 = fStack_e0;
    fVar18 = fStack_e4;
    fVar16 = fStack_e8;
    fVar5 = (float)uStack_100;
    fStack_118 = (float)uStack_100 + fStack_e0;
    fVar4 = uStack_108._4_4_;
    fVar3 = (float)uStack_108;
    uStack_120 = (longlong *)CONCAT44(uStack_108._4_4_ + fStack_e4,(float)uStack_108 + fStack_e8);
    uStack_114 = 0x7f7fffff;
    uVar7 = FUN_1800c11a0(*(undefined8 *)(lVar2 + 0x340),&uStack_120);
    fStack_118 = fVar17 - fVar5;
    uStack_120 = (longlong *)CONCAT44(fVar18 - fVar4,fVar16 - fVar3);
    uStack_114 = 0x7f7fffff;
    uVar8 = FUN_1800c11a0(*(undefined8 *)(lVar2 + 0x340),&uStack_120);
    fVar17 = -fVar17;
    fVar18 = -fVar18;
    fVar16 = -fVar16;
    fStack_118 = fVar17 - fVar5;
    uStack_120 = (longlong *)CONCAT44(fVar18 - fVar4,fVar16 - fVar3);
    uStack_114 = 0x7f7fffff;
    uVar9 = FUN_1800c11a0(*(undefined8 *)(lVar2 + 0x340),&uStack_120);
    fStack_118 = fVar5 + fVar17;
    uStack_120 = (longlong *)CONCAT44(fVar4 + fVar18,fVar3 + fVar16);
    uStack_114 = 0x7f7fffff;
    uVar10 = FUN_1800c11a0(*(undefined8 *)(lVar2 + 0x340),&uStack_120);
    uStack_128._0_4_ = 0xffffffff;
    puStack_138 = &uStack_f8;
    uVar7 = FUN_1800c1040(*(undefined8 *)(lVar2 + 0x340),uVar7,&uStack_b0,&uStack_128);
    uStack_128._0_4_ = 0xffffffff;
    puStack_138 = &uStack_f8;
    uVar8 = FUN_1800c1040(*(undefined8 *)(lVar2 + 0x340),uVar8,&uStack_a8,&uStack_128);
    uStack_128._0_4_ = 0xffffffff;
    puStack_138 = &uStack_f8;
    uVar9 = FUN_1800c1040(*(undefined8 *)(lVar2 + 0x340),uVar9,alStack_a0,&uStack_128);
    uStack_128 = CONCAT44(uStack_128._4_4_,0xffffffff);
    puStack_138 = &uStack_f8;
    uVar10 = FUN_1800c1040(*(undefined8 *)(lVar2 + 0x340),uVar10,alStack_a0 + 1,&uStack_128);
    FUN_1800c0ef0(*(undefined8 *)(lVar2 + 0x340),uVar7,uVar8,uVar9);
    FUN_1800c0ef0(*(undefined8 *)(lVar2 + 0x340),uVar7,uVar9,uVar10);
    uVar11 = *(undefined8 *)(lVar2 + 0x340);
    uVar13 = FUN_1800be9a0(_DAT_180c86898,&uStack_120,0);
    FUN_180076910(uVar11,uVar13);
    if (uStack_120 != (longlong *)0x0) {
      (**(code **)(*uStack_120 + 0x38))();
    }
    FUN_180075b70(*(undefined8 *)(lVar2 + 0x340));
    plVar12 = *(longlong **)(lVar2 + 0x340);
  }
  *param_2 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x28))();
  }
  uStack_110 = 1;
  iVar6 = _Mtx_unlock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(alStack_a0[2] ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1800bfec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *aplStackX_10 [3];
  
  lVar3 = _DAT_180c86898;
  if (*(longlong *)(_DAT_180c86898 + 0x3d8) == 0) {
    puVar4 = (undefined8 *)
             FUN_18009e9e0(param_1,aplStackX_10,&UNK_180a036f0,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(longlong **)(lVar3 + 0x3d8);
    *(undefined8 *)(lVar3 + 0x3d8) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (longlong *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(undefined8 *)(lVar3 + 0x3d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1800bff50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *aplStackX_10 [3];
  
  lVar3 = _DAT_180c86898;
  if (*(longlong *)(_DAT_180c86898 + 0x3b8) == 0) {
    puVar4 = (undefined8 *)
             FUN_18009e9e0(param_1,aplStackX_10,&DAT_180a036e0,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(longlong **)(lVar3 + 0x3b8);
    *(undefined8 *)(lVar3 + 0x3b8) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (longlong *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(undefined8 *)(lVar3 + 0x3b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1800bffe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *aplStackX_10 [3];
  
  lVar3 = _DAT_180c86898;
  if (*(longlong *)(_DAT_180c86898 + 0x3f0) == 0) {
    puVar4 = (undefined8 *)
             FUN_18009e9e0(param_1,aplStackX_10,&UNK_180a03720,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(longlong **)(lVar3 + 0x3f0);
    *(undefined8 *)(lVar3 + 0x3f0) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (longlong *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(undefined8 *)(lVar3 + 0x3f0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1800c0070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *aplStackX_10 [3];
  
  lVar3 = _DAT_180c86898;
  if (*(longlong *)(_DAT_180c86898 + 0x3f8) == 0) {
    puVar4 = (undefined8 *)
             FUN_18009e9e0(param_1,aplStackX_10,&UNK_180a03758,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(longlong **)(lVar3 + 0x3f8);
    *(undefined8 *)(lVar3 + 0x3f8) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (longlong *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(undefined8 *)(lVar3 + 0x3f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800c0100(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong alStackX_8 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *plStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  plVar2 = _DAT_180c86898;
  if (*_DAT_180c86898 == 0) {
    alStackX_8[0] = param_1;
    alStackX_8[0] = FUN_1800bd410(_DAT_180c86898);
    puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x12) = 3;
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
    *plVar2 = (longlong)puVar3;
    plVar1 = *(longlong **)(*(longlong *)(alStackX_8[0] + 0xa8) + 0x88);
    plStack_28 = alStackX_8;
    pcStack_20 = (code *)&UNK_1800c0ea0;
    pcStack_18 = FUN_1800c0da0;
    uStack_40 = SUB84(plVar2,0);
    uStack_3c = (undefined4)((ulonglong)plVar2 >> 0x20);
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    (**(code **)(*plVar1 + 0x60))
              (plVar1,&DAT_180a01050,*(longlong *)(alStackX_8[0] + 0xa8) + 0xc,0,&uStack_30);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(&uStack_30,0,0);
    }
  }
  return *plVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c0230(undefined8 param_1,longlong *param_2)
void FUN_1800c0230(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong **pplVar10;
  undefined1 auStack_78 [32];
  undefined4 uStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [20];
  
  lVar6 = _DAT_180c86898;
  uStack_48 = 0xfffffffffffffffe;
  auStack_2c._4_8_ = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  lVar9 = 0;
  uStack_58 = 0;
  plStack_40 = param_2;
  if (*(longlong *)(_DAT_180c86898 + 0x290) == 0) {
    puVar7 = (undefined8 *)FUN_180095000(param_1,&plStack_38,&UNK_180a037a0,1);
    uVar3 = *puVar7;
    *puVar7 = 0;
    plStack_50 = *(longlong **)(lVar6 + 0x290);
    *(undefined8 *)(lVar6 + 0x290) = uVar3;
    if (plStack_50 != (longlong *)0x0) {
      (**(code **)(*plStack_50 + 0x38))();
    }
    if (plStack_38 != (longlong *)0x0) {
      (**(code **)(*plStack_38 + 0x38))();
    }
    plVar4 = *(longlong **)(lVar6 + 0x290);
    plStack_38 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    FUN_1800b4e00();
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    plStack_38 = (longlong *)0x200000000;
    uStack_30 = 4;
    pplVar10 = &plStack_38;
    lVar8 = 3;
    if (auStack_2c < &plStack_38) {
      lVar8 = lVar9;
    }
    do {
      lVar5 = *(longlong *)(lVar6 + 0x290);
      lVar2 = (longlong)*(int *)pplVar10 * 8 + 0xb8;
      puVar1 = (uint *)(*(longlong *)(lVar2 + lVar5) + 0x328);
      *puVar1 = *puVar1 | 0x20000000;
      FUN_1800b4e00(lVar5,*(undefined8 *)(lVar2 + *(longlong *)(lVar6 + 0x290)),
                    *(undefined4 *)(lVar6 + 0x468));
      pplVar10 = (longlong **)((longlong)pplVar10 + 4);
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar8);
  }
  plVar4 = *(longlong **)(lVar6 + 0x290);
  *param_2 = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))();
  }
  uStack_58 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(auStack_2c._4_8_ ^ (ulonglong)auStack_78);
}



// WARNING: Removing unreachable block (ram,0x0001800c0524)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800c03c0(longlong *param_1,longlong *param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong *plStackX_8;
  longlong *plStackX_10;
  ulonglong uStackX_18;
  longlong alStack_40 [3];
  
  lVar2 = *(longlong *)(_DAT_180c86898 + 0x2a8);
  puVar6 = *(ulonglong **)(lVar2 + (param_3 % (ulonglong)*(uint *)(_DAT_180c86898 + 0x2b0)) * 8);
  do {
    if (puVar6 == (ulonglong *)0x0) {
      lVar5 = *(longlong *)(_DAT_180c86898 + 0x2b0);
      puVar6 = *(ulonglong **)(lVar2 + lVar5 * 8);
LAB_1800c043d:
      lVar1 = _DAT_180c86898 + 0x2a0;
      plStackX_8 = param_1;
      plStackX_10 = param_2;
      uStackX_18 = param_3;
      if (puVar6 == *(ulonglong **)(lVar2 + lVar5 * 8)) {
        FUN_1800b4a00(_DAT_180c86930,&plStackX_8,param_4,1);
        plVar4 = plStackX_8;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
        }
        FUN_1800b4e00();
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4);
        }
        FUN_1800c08e0(lVar1,alStack_40);
        plVar4 = plStackX_8;
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
        }
        plVar3 = *(longlong **)(alStack_40[0] + 8);
        *(longlong **)(alStack_40[0] + 8) = plVar4;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        *param_2 = (longlong)plStackX_8;
      }
      else {
        plVar4 = (longlong *)puVar6[1];
        *param_2 = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))();
        }
      }
      return param_2;
    }
    if (param_3 == *puVar6) {
      lVar5 = *(longlong *)(_DAT_180c86898 + 0x2b0);
      goto LAB_1800c043d;
    }
    puVar6 = (ulonglong *)puVar6[2];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800c0570(longlong param_1,undefined8 *param_2)
void FUN_1800c0570(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  longlong *plStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [88];
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [32];
  ulonglong uStack_28;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_d8 = 0;
  plVar3 = *(longlong **)(param_1 + 0x2d0);
  puStack_c0 = param_2;
  if (plVar3 == (longlong *)0x0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x470,0x10,3);
    plVar3 = (longlong *)FUN_18022b590(uVar2);
    if (plVar3 != (longlong *)0x0) {
      plStack_d0 = plVar3;
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plStack_d0 = *(longlong **)(param_1 + 0x2d0);
    *(longlong **)(param_1 + 0x2d0) = plVar3;
    if (plStack_d0 != (longlong *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x2d0) + 0x10);
    (**(code **)(*plVar3 + 0x10))(plVar3,&UNK_180a037c0);
    uVar2 = *(undefined8 *)(param_1 + 0x2d0);
    plStack_d0 = (longlong *)auStack_b8;
    puStack_60 = &UNK_18098bc80;
    puStack_58 = auStack_48;
    auStack_48[0] = 0;
    uStack_50 = 0xb;
    strcpy_s(auStack_48,0x20,&UNK_180a036f0);
    uVar4 = FUN_1800b8300(auStack_b8,&puStack_60);
    FUN_18022ccc0(uVar2,uVar4);
    puStack_60 = &UNK_18098bcb0;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x2d0) + 0x138);
    *puVar1 = *puVar1 | 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x2d0) + 0x388) = 0x40000000;
    plVar3 = *(longlong **)(param_1 + 0x2d0);
  }
  *param_2 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  uStack_d8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1800c0750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *aplStackX_10 [3];
  
  lVar3 = _DAT_180c86898;
  if (*(longlong *)(_DAT_180c86898 + 1000) == 0) {
    puVar4 = (undefined8 *)
             FUN_18009e9e0(param_1,aplStackX_10,&UNK_180a037e0,param_4,0xfffffffffffffffe);
    uVar1 = *puVar4;
    *puVar4 = 0;
    plVar2 = *(longlong **)(lVar3 + 1000);
    *(undefined8 *)(lVar3 + 1000) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (aplStackX_10[0] != (longlong *)0x0) {
      (**(code **)(*aplStackX_10[0] + 0x38))();
    }
  }
  return *(undefined8 *)(lVar3 + 1000);
}



undefined8 *
FUN_1800c07e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a03810;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1800c0830(longlong param_1)
void FUN_1800c0830(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1800c08e0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
  plVar3 = (longlong *)*plVar4;
  if (plVar3 != (longlong *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = plVar4;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (longlong *)plVar3[2];
    } while (plVar3 != (longlong *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),1);
  plVar4 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x2c));
  *plVar4 = *param_4;
  plVar4[1] = 0;
  plVar4[2] = 0;
  if ((char)param_5 == '\0') {
    plVar4[2] = *(longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
    *(longlong **)(*(longlong *)(param_1 + 8) + uVar2 * 8) = plVar4;
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
    lVar1 = *(longlong *)(param_1 + 8);
    *param_2 = plVar4;
    param_2[1] = lVar1 + uVar2 * 8;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_2;
  }
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                        *(undefined1 *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar5,0,(ulonglong)param_5._4_4_ * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800c0ad0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puStack_48;
  undefined4 *puStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = _DAT_180c8a998;
  puStack_48 = &UNK_180a3c3e0;
  uStack_30 = 0;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1d,0x13,param_4,0,0xfffffffffffffffe);
  *(undefined1 *)puVar3 = 0;
  puStack_40 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  *puVar3 = 0x6f736552;
  puVar3[1] = 0x65637275;
  puVar3[2] = 0x66754220;
  puVar3[3] = 0x73726566;
  *(undefined8 *)(puVar3 + 4) = 0x6f6f70206e6f6e28;
  puVar3[6] = 0x2964656c;
  *(undefined1 *)(puVar3 + 7) = 0;
  uStack_38 = 0x1c;
  uStack_30._0_4_ = uVar2;
  FUN_1802037e0(0,param_4,&puStack_48);
  puStack_48 = &UNK_180a3c3e0;
  if (puStack_40 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  puStack_48 = &UNK_18098bcb0;
  FUN_1800c0c20(uVar1,param_2);
  *(undefined8 *)(*param_2 + 0x10) = param_3;
  *(undefined4 *)(*param_2 + 0x18) = param_4;
  *(undefined4 *)(*param_2 + 0x1c) = param_4;
  *(undefined1 *)(*param_2 + 0x20) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1800c0c20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a03810;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(undefined4 *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a03810;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




