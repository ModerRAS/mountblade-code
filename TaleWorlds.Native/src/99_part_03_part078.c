#include "TaleWorlds.Native.Split.h"

// 99_part_03_part078.c - 6 个函数

// 函数: void FUN_1802436f0(longlong param_1)
void FUN_1802436f0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined *puVar15;
  uint uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_f8 [32];
  undefined1 uStack_d8;
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  uint uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  uint uStack_90;
  undefined8 uStack_88;
  longlong *plStack_80;
  longlong **pplStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_38;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_c8 = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x9690);
  lVar2 = *(longlong *)(param_1 + 0x9650);
  puStack_a0 = &UNK_180a3c3e0;
  uStack_88 = 0;
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0;
  if (*(int *)(lVar2 + 0xb8) == 0) {
    puVar15 = &DAT_18098bc73;
    if (*(undefined **)(*_DAT_180c86870 + 0x440) != (undefined *)0x0) {
      puVar15 = *(undefined **)(*_DAT_180c86870 + 0x440);
    }
    FUN_180627c50(&puStack_a0,puVar15);
    uVar16 = uStack_90;
    puStack_c0 = &UNK_180a3c3e0;
    uStack_a8 = 0;
    puStack_b8 = (undefined *)0x0;
    uStack_b0 = 0;
    uStack_c8 = 1;
    uVar14 = (ulonglong)uStack_90;
    if (puStack_98 != (undefined *)0x0) {
      FUN_1806277c0(&puStack_c0,uVar14);
    }
    if (uVar16 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_b8,puStack_98,uVar14);
    }
    uStack_b0 = uVar16;
    if (puStack_b8 != (undefined *)0x0) {
      puStack_b8[uVar14] = 0;
    }
    uStack_a8._4_4_ = uStack_88._4_4_;
    FUN_1806277c0(&puStack_c0,0x12);
    uVar14 = (ulonglong)uStack_b0;
    puVar1 = (undefined4 *)(puStack_b8 + uVar14);
    *puVar1 = 0x656e6547;
    puVar1[1] = 0x65746172;
    puVar1[2] = 0x78655464;
    puVar1[3] = 0x65727574;
    *(undefined2 *)(puStack_b8 + uVar14 + 0x10) = 0x2f73;
    puStack_b8[uVar14 + 0x12] = 0;
    uStack_b0 = 0x12;
    if (puStack_98 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_90 = 0x12;
    puStack_98 = puStack_b8;
    uStack_88 = CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8);
    uStack_b0 = 0;
    uStack_c8 = 0;
    puStack_b8 = (undefined *)0x0;
    uStack_a8 = 0;
    puStack_c0 = &UNK_18098bcb0;
  }
  else {
    uVar16 = *(uint *)(param_1 + 0x95d8);
    uVar14 = (ulonglong)uVar16;
    if (*(longlong *)(param_1 + 0x95d0) != 0) {
      FUN_1806277c0(&puStack_a0,uVar14);
    }
    if (uVar16 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_98,*(undefined8 *)(param_1 + 0x95d0),uVar14);
    }
    if (puStack_98 != (undefined *)0x0) {
      puStack_98[uVar14] = 0;
    }
    uStack_88 = CONCAT44(*(undefined4 *)(param_1 + 0x95e4),(undefined4)uStack_88);
    uStack_90 = 0;
  }
  if (0 < *(int *)(param_1 + 0x95f8)) {
    FUN_1806277c0(&puStack_a0,uStack_90 + *(int *)(param_1 + 0x95f8));
                    // WARNING: Subroutine does not return
    memcpy(puStack_98 + uStack_90,*(undefined8 *)(param_1 + 0x95f0),
           (longlong)(*(int *)(param_1 + 0x95f8) + 1));
  }
  lVar9 = FUN_1800f9980(&puStack_60,*(undefined4 *)(param_1 + 0x9608));
  if (0 < *(int *)(lVar9 + 0x10)) {
    FUN_1806277c0(&puStack_a0,uStack_90 + *(int *)(lVar9 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_98 + uStack_90,*(undefined8 *)(lVar9 + 8),(longlong)(*(int *)(lVar9 + 0x10) + 1))
    ;
  }
  puStack_60 = &UNK_18098bcb0;
  if (*(char *)(lVar2 + 0xea) == '\0') {
    uVar11 = FUN_18023a940(uVar11);
    FUN_180225ee0(extraout_XMM0_Da,&puStack_a0,*(undefined4 *)(param_1 + 0x9608),uVar11);
  }
  else {
    puVar10 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined2 *)(puVar10 + 2) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x12) = 3;
    *(undefined4 *)((longlong)puVar10 + 0x62) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x54) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x5c) = 0;
    *(undefined2 *)(puVar10 + 0xc) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x66) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x4c) = 0;
    uVar11 = FUN_18023a940(uVar11);
    FUN_1800a5fc0(_DAT_180c86938,uVar11,puVar10);
    plVar12 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xf0,8,3);
    uVar5 = *(undefined4 *)(param_1 + 0x9608);
    pplStack_78 = (longlong **)plVar12;
    FUN_180049830(plVar12);
    *plVar12 = (longlong)&UNK_180a143e8;
    plStack_80 = plVar12 + 0x18;
    *plStack_80 = (longlong)&UNK_18098bcb0;
    plVar12[0x19] = 0;
    *(undefined4 *)(plVar12 + 0x1a) = 0;
    *plStack_80 = (longlong)&UNK_180a3c3e0;
    plVar12[0x1b] = 0;
    plVar12[0x19] = 0;
    *(undefined4 *)(plVar12 + 0x1a) = 0;
    plVar12[0x1c] = (longlong)puVar10;
    puVar15 = &DAT_18098bc73;
    if (puStack_98 != (undefined *)0x0) {
      puVar15 = puStack_98;
    }
    (**(code **)(*plStack_80 + 0x10))(plStack_80,puVar15);
    *(undefined4 *)(plVar12 + 0x1d) = uVar5;
    plStack_68 = plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12);
    uVar11 = _DAT_180c82868;
    pplStack_78 = &plStack_80;
    plStack_80 = plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12);
    FUN_18005e110(uVar11,&plStack_80);
    (**(code **)(*plVar12 + 0x38))(plVar12);
  }
  uVar16 = 0;
  puStack_a0 = &UNK_180a3c3e0;
  if (puStack_98 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_98 = (undefined *)0x0;
  uStack_88 = uStack_88 & 0xffffffff00000000;
  puStack_a0 = &UNK_18098bcb0;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar10 = 0;
  puStack_58 = puVar10;
  uVar5 = FUN_18064e990(puVar10);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar5);
  *puVar10 = 0x2f736573736170;
  uStack_50 = 7;
  cVar4 = FUN_180624a00(&puStack_60);
  if (cVar4 == '\0') {
    FUN_180624910(&puStack_60);
  }
  plStack_80 = (longlong *)FUN_18023a940(*(undefined8 *)(param_1 + 0x9690));
  uVar3 = uStack_50;
  puVar10 = puStack_58;
  puStack_c0 = &UNK_180a3c3e0;
  uStack_a8 = 0;
  puVar13 = (undefined1 *)0x0;
  puStack_b8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  uStack_c8 = 2;
  uVar14 = (ulonglong)uStack_50;
  uVar7 = 0;
  if (puStack_58 == (undefined8 *)0x0) {
LAB_180243c26:
    uVar16 = uVar7;
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar13,puVar10,uVar14);
    }
  }
  else if (uStack_50 != 0) {
    iVar6 = uStack_50 + 1;
    if (iVar6 < 0x10) {
      iVar6 = 0x10;
    }
    puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar6,0x13);
    *puVar13 = 0;
    puStack_b8 = puVar13;
    uVar7 = FUN_18064e990(puVar13);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar7);
    goto LAB_180243c26;
  }
  uStack_b0 = uVar3;
  if (puVar13 != (undefined1 *)0x0) {
    puVar13[uVar14] = 0;
  }
  uStack_a8._4_4_ = uStack_48._4_4_;
  iVar6 = uVar3 + 9;
  if (iVar6 != 0) {
    uVar7 = uVar3 + 10;
    if (puVar13 == (undefined1 *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar7,0x13);
      *puVar13 = 0;
    }
    else {
      if (uVar7 <= uVar16) goto LAB_180243cb3;
      uStack_d8 = 0x13;
      puVar13 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar13,uVar7,0x10);
    }
    puStack_b8 = puVar13;
    uStack_a8._0_4_ = FUN_18064e990(puVar13);
  }
LAB_180243cb3:
  *(undefined8 *)(puVar13 + uVar14) = 0x64642e6c616e6966;
  *(undefined2 *)(puVar13 + uVar14 + 8) = 0x73;
  uStack_b0 = iVar6;
  FUN_180225ee0(0x616e6966,&puStack_c0,3,plStack_80);
  uStack_c8 = 0;
  puStack_c0 = &UNK_180a3c3e0;
  if (puStack_b8 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b8 = (undefined *)0x0;
  uStack_a8 = (ulonglong)uStack_a8._4_4_ << 0x20;
  puStack_c0 = &UNK_18098bcb0;
  pplStack_78 = (longlong **)FUN_18023a940();
  puVar13 = (undefined1 *)0x0;
  puStack_a0 = &UNK_180a3c3e0;
  plStack_80 = (longlong *)0x0;
  puStack_98 = (undefined1 *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_c8 = 4;
  if (puVar10 == (undefined8 *)0x0) {
LAB_180243da1:
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar13,puVar10,uVar14);
    }
  }
  else if (uVar3 != 0) {
    iVar8 = uVar3 + 1;
    if (iVar8 < 0x10) {
      iVar8 = 0x10;
    }
    puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
    *puVar13 = 0;
    puStack_98 = puVar13;
    plStack_80 = (longlong *)FUN_18064e990(puVar13);
    uStack_88 = CONCAT44(uStack_88._4_4_,(int)plStack_80);
    goto LAB_180243da1;
  }
  uStack_90 = uVar3;
  if (puVar13 != (undefined1 *)0x0) {
    puVar13[uVar14] = 0;
  }
  uStack_88._4_4_ = uStack_48._4_4_;
  if (iVar6 != 0) {
    uVar16 = uVar3 + 10;
    if (puVar13 == (undefined1 *)0x0) {
      if ((int)uVar16 < 0x10) {
        uVar16 = 0x10;
      }
      puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar16,0x13);
      *puVar13 = 0;
    }
    else {
      if (uVar16 <= (uint)plStack_80) goto LAB_180243e2b;
      uStack_d8 = 0x13;
      puVar13 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar13,uVar16,0x10);
    }
    puStack_98 = puVar13;
    uStack_88._0_4_ = FUN_18064e990(puVar13);
  }
LAB_180243e2b:
  *(undefined8 *)(puVar13 + uVar14) = 0x64642e6874706564;
  *(undefined2 *)(puVar13 + uVar14 + 8) = 0x73;
  uStack_90 = iVar6;
  FUN_180225ee0(0x74706564,&puStack_a0,3,pplStack_78);
  uStack_c8 = 0;
  puStack_a0 = &UNK_180a3c3e0;
  if (puStack_98 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar13 = (undefined1 *)0x0;
  puStack_98 = (undefined *)0x0;
  uVar16 = 0;
  uStack_88 = (ulonglong)uStack_88._4_4_ << 0x20;
  puStack_a0 = &UNK_18098bcb0;
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x99d0) + 0x58) + -8) + 0x428) == 0)
  goto LAB_18024401f;
  uVar11 = FUN_18023a940();
  puStack_c0 = &UNK_180a3c3e0;
  uStack_a8 = 0;
  puStack_b8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  uStack_c8 = 8;
  uVar7 = 0;
  if (puVar10 == (undefined8 *)0x0) {
LAB_180243f24:
    uVar16 = uVar7;
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar13,puVar10,uVar14);
    }
  }
  else if (uVar3 != 0) {
    iVar6 = uVar3 + 1;
    if (iVar6 < 0x10) {
      iVar6 = 0x10;
    }
    puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar6,0x13);
    *puVar13 = 0;
    puStack_b8 = puVar13;
    uVar7 = FUN_18064e990(puVar13);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar7);
    goto LAB_180243f24;
  }
  uStack_b0 = uVar3;
  if (puVar13 != (undefined1 *)0x0) {
    puVar13[uVar14] = 0;
  }
  uStack_a8._4_4_ = uStack_48._4_4_;
  if (uVar3 + 10 != 0) {
    uVar7 = uVar3 + 0xb;
    if (puVar13 == (undefined1 *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puVar13 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar7,0x13);
      *puVar13 = 0;
    }
    else {
      if (uVar7 <= uVar16) goto LAB_180243fae;
      uStack_d8 = 0x13;
      puVar13 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar13,uVar7,0x10);
    }
    puStack_b8 = puVar13;
    uStack_a8._0_4_ = FUN_18064e990(puVar13);
  }
LAB_180243fae:
  *(undefined8 *)(puVar13 + uVar14) = 0x642e776f64616873;
  *(undefined2 *)(puVar13 + uVar14 + 8) = 0x7364;
  puVar13[uVar14 + 10] = 0;
  uStack_b0 = uVar3 + 10;
  FUN_180225ee0(0x64616873,&puStack_c0,3,uVar11);
  uStack_c8 = 0;
  puStack_c0 = &UNK_180a3c3e0;
  if (puStack_b8 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b8 = (undefined *)0x0;
  uStack_a8 = (ulonglong)uStack_a8._4_4_ << 0x20;
  puStack_c0 = &UNK_18098bcb0;
LAB_18024401f:
  uStack_c8 = 0;
  puStack_60 = &UNK_180a3c3e0;
  if (puVar10 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
  puStack_58 = (undefined8 *)0x0;
  uStack_48 = uStack_48 & 0xffffffff00000000;
  puStack_60 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}



undefined8 *
FUN_180244080(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0xc;
  strcpy_s(param_2[1],0x80,&UNK_180a14668,param_4,0,0xfffffffffffffffe);
  return param_2;
}



undefined8 *
FUN_180244110(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 7;
  strcpy_s(param_2[1],0x80,&DAT_180a14640,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180244190(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uStackX_10;
  undefined8 uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  *param_1 = (longlong)&UNK_180a21690;
  *param_1 = (longlong)&UNK_180a21720;
  puVar4 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)&UNK_180a14478;
  param_1[2] = 0;
  *param_1 = (longlong)&UNK_180a144f8;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar1 = param_1 + 0x11;
  *plVar1 = (longlong)&UNK_18098bcb0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = (longlong)&UNK_18098bcb0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x15] = (longlong)&UNK_180a3c3e0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f8000003f800000;
  param_1[0xc] = 0x3f8000003f800000;
  param_1[0xd] = 0x3f8000003f800000;
  param_1[0xe] = 0x3f8000003f800000;
  uStackX_10 = (ulonglong)
               CONCAT24(*(undefined2 *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x32e),
                        (uint)*(ushort *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x32c));
  param_1[0xf] = uStackX_10;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xde) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  plVar2 = (longlong *)param_1[7];
  param_1[7] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined4 *)((longlong)param_1 + 0xcc) = 3;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  lVar3 = _DAT_180c86950;
  (**(code **)(*param_1 + 0x28))(param_1);
  puVar8 = *(undefined8 **)(lVar3 + 0x1870);
  if (puVar8 < *(undefined8 **)(lVar3 + 0x1878)) {
    *(undefined8 **)(lVar3 + 0x1870) = puVar8 + 1;
    *puVar8 = param_1;
    goto LAB_180244462;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0x1868);
  lVar6 = (longlong)puVar8 - (longlong)puVar5 >> 3;
  if (lVar6 == 0) {
    lVar6 = 1;
LAB_1802443a8:
    puVar4 = (undefined8 *)
             FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,*(undefined1 *)(lVar3 + 0x1880),param_4,uVar10);
    puVar8 = *(undefined8 **)(lVar3 + 0x1870);
    puVar5 = *(undefined8 **)(lVar3 + 0x1868);
    puVar9 = puVar4;
  }
  else {
    lVar6 = lVar6 * 2;
    puVar9 = puVar4;
    if (lVar6 != 0) goto LAB_1802443a8;
  }
  for (; puVar5 != puVar8; puVar5 = puVar5 + 1) {
    *puVar4 = *puVar5;
    *puVar5 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar4 = param_1;
  plVar2 = *(longlong **)(lVar3 + 0x1870);
  plVar7 = *(longlong **)(lVar3 + 0x1868);
  if (plVar7 != plVar2) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
    plVar7 = *(longlong **)(lVar3 + 0x1868);
  }
  if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar7);
  }
  *(undefined8 **)(lVar3 + 0x1868) = puVar9;
  *(undefined8 **)(lVar3 + 0x1870) = puVar4 + 1;
  *(undefined8 **)(lVar3 + 0x1878) = puVar9 + lVar6;
LAB_180244462:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdd) = 1;
  *(undefined4 *)(param_1 + 0x19) = 3;
  (**(code **)(*plVar1 + 0x10))(plVar1,&UNK_180a14648);
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_1802445c0(param_1);
  return param_1;
}



undefined8 FUN_1802444c0(undefined8 param_1,ulonglong param_2)

{
  FUN_180244780();
  if ((param_2 & 1) != 0) {
    free(param_1,0xf0);
  }
  return param_1;
}






// 函数: void FUN_180244500(undefined8 *param_1)
void FUN_180244500(undefined8 *param_1)

{
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



undefined8 *
FUN_180244540(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802445c0(longlong *param_1)
void FUN_1802445c0(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float fStackX_8;
  float fStackX_c;
  
  lVar4 = (**(code **)(*param_1 + 0x60))();
  if (lVar4 == 0) {
    if (_DAT_180c86950 != 0) {
      uVar1 = *(undefined8 *)(_DAT_180c86950 + 0x17ec);
      fStackX_8 = (float)uVar1;
      *(int *)(param_1 + 8) = (int)fStackX_8;
      fStackX_c = (float)((ulonglong)uVar1 >> 0x20);
      *(int *)((longlong)param_1 + 0x44) = (int)fStackX_c;
    }
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    *(uint *)(param_1 + 8) = (uint)*(ushort *)(lVar4 + 0x32c);
    lVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    *(uint *)((longlong)param_1 + 0x44) = (uint)*(ushort *)(lVar4 + 0x32e);
  }
  cVar2 = (char)param_1[0x10];
  if (cVar2 == '\0') {
    iVar3 = lroundf((float)(int)param_1[8] * *(float *)(param_1 + 0xb));
    cVar2 = (char)param_1[0x10];
  }
  else {
    iVar3 = (int)param_1[0xf];
  }
  *(float *)(param_1 + 9) = (float)iVar3;
  if (cVar2 == '\0') {
    iVar3 = lroundf((float)*(int *)((longlong)param_1 + 0x44) * *(float *)((longlong)param_1 + 0x5c)
                   );
  }
  else {
    iVar3 = *(int *)((longlong)param_1 + 0x7c);
  }
  *(float *)((longlong)param_1 + 0x4c) = (float)iVar3;
  *(float *)(param_1 + 4) =
       (float)*(int *)((longlong)param_1 + 0x44) * *(float *)((longlong)param_1 + 0x54);
  *(float *)((longlong)param_1 + 0x1c) = (float)(int)param_1[8] * *(float *)(param_1 + 10);
  iVar3 = lroundf((float)(int)param_1[8] * *(float *)(param_1 + 0xb) * *(float *)(param_1 + 0xd));
  *(float *)((longlong)param_1 + 0x24) = (float)iVar3;
  iVar3 = lroundf((float)*(int *)((longlong)param_1 + 0x44) * *(float *)((longlong)param_1 + 0x5c) *
                  *(float *)((longlong)param_1 + 0x6c));
  *(float *)(param_1 + 5) = (float)iVar3;
  return;
}






// 函数: void FUN_180244780(undefined8 *param_1)
void FUN_180244780(undefined8 *param_1)

{
  *param_1 = &UNK_180a144f8;
  param_1[0x15] = &UNK_180a3c3e0;
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x15] = &UNK_18098bcb0;
  param_1[0x11] = &UNK_180a3c3e0;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x11] = &UNK_18098bcb0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180244860(longlong *param_1,longlong param_2)
void FUN_180244860(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_178 [32];
  undefined1 uStack_158;
  undefined *puStack_148;
  undefined4 *puStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  uint uStack_128;
  uint uStack_124;
  longlong *plStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x60))();
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(_DAT_180c86938 + 0x121e0);
  }
  uStack_128 = (uint)*(ushort *)((longlong)plVar5 + 0x32c);
  uStack_124 = (uint)*(ushort *)((longlong)plVar5 + 0x32e);
  lVar1 = *(longlong *)(_DAT_180c86890 + 0x7ab8);
  if ((((lVar1 == 0) ||
       (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x3580) + 0x78))(), cVar2 == '\0')) ||
      (*(char *)(lVar1 + 0xd8) == '\0')) || (*(int *)(_DAT_180c86920 + 0x540) + -1 < 0)) {
    plStack_120 = (longlong *)CONCAT44(uStack_124,uStack_128);
  }
  else {
    FUN_1802aa800(lVar1,&plStack_120,&uStack_128);
  }
  if (((int)param_1[0xf] != (int)plStack_120) ||
     (*(int *)((longlong)param_1 + 0x7c) != (int)((ulonglong)plStack_120 >> 0x20))) {
    param_1[0xf] = (longlong)plStack_120;
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  if ((char)param_1[0x1d] == '\0') {
    puStack_148 = &UNK_180a3c3e0;
    uStack_130 = 0;
    puStack_140 = (undefined4 *)0x0;
    uStack_138 = 0;
    puVar6 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13);
    *(undefined1 *)puVar6 = 0;
    puStack_140 = puVar6;
    uVar3 = FUN_18064e990(puVar6);
    *puVar6 = 0x566c6772;
    puVar6[1] = 0x3a776569;
    puVar6[2] = 0x7065643a;
    puVar6[3] = 0x625f6874;
    puVar6[4] = 0x65666675;
    *(undefined2 *)(puVar6 + 5) = 0x5f72;
    *(undefined1 *)((longlong)puVar6 + 0x16) = 0;
    uStack_138 = 0x16;
    iVar4 = *(int *)(param_2 + 0x3530);
    uStack_130._0_4_ = uVar3;
    if (0 < iVar4) {
      if ((iVar4 != -0x16) && (uVar3 < iVar4 + 0x17U)) {
        uStack_158 = 0x13;
        puVar6 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar6,iVar4 + 0x17U,0x10);
        puStack_140 = puVar6;
        uStack_130._0_4_ = FUN_18064e990(puVar6);
        iVar4 = *(int *)(param_2 + 0x3530);
      }
                    // WARNING: Subroutine does not return
      memcpy((undefined1 *)((longlong)puVar6 + 0x16),*(undefined8 *)(param_2 + 0x3528),
             (longlong)(iVar4 + 1));
    }
    uStack_110 = 1;
    uStack_104 = 0x1018a;
    uStack_108 = 0;
    uStack_118 = (undefined4)(longlong)*(float *)(param_1 + 9);
    uStack_114 = (undefined4)(longlong)*(float *)((longlong)param_1 + 0x4c);
    uStack_10c = 0x2f;
    uStack_100 = *(undefined4 *)(param_2 + 0x1bd4);
    puStack_e8 = &UNK_1809fcc28;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 0x16;
    puVar8 = (undefined4 *)&DAT_18098bc73;
    if (puVar6 != (undefined4 *)0x0) {
      puVar8 = puVar6;
    }
    strcpy_s(auStack_d0,0x80,puVar8);
    FUN_1800db370(&puStack_e8,param_1 + 7,&uStack_118);
    puStack_e8 = &UNK_18098bcb0;
    puStack_148 = &UNK_180a3c3e0;
    if (puVar6 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
  }
  else {
    puStack_148 = &UNK_180a3c3e0;
    uStack_130 = 0;
    puStack_140 = (undefined4 *)0x0;
    uStack_138 = 0;
    puVar6 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1c,0x13);
    *(undefined1 *)puVar6 = 0;
    puStack_140 = puVar6;
    uVar3 = FUN_18064e990(puVar6);
    *puVar6 = 0x566c6772;
    puVar6[1] = 0x3a776569;
    puVar6[2] = 0x7065643a;
    puVar6[3] = 0x625f6874;
    *(undefined8 *)(puVar6 + 4) = 0x75615f7265666675;
    puVar6[6] = 0x5f6f74;
    uStack_138 = 0x1b;
    iVar4 = *(int *)(param_2 + 0x3530);
    uStack_130._0_4_ = uVar3;
    if (0 < iVar4) {
      if ((iVar4 != -0x1b) && (uVar3 < iVar4 + 0x1cU)) {
        uStack_158 = 0x13;
        puVar6 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar6,iVar4 + 0x1cU,0x10);
        puStack_140 = puVar6;
        uStack_130._0_4_ = FUN_18064e990(puVar6);
        iVar4 = *(int *)(param_2 + 0x3530);
      }
                    // WARNING: Subroutine does not return
      memcpy((undefined1 *)((longlong)puVar6 + 0x1b),*(undefined8 *)(param_2 + 0x3528),
             (longlong)(iVar4 + 1));
    }
    uStack_110 = 1;
    uStack_104 = 0x1018a;
    uStack_108 = 0;
    uStack_118 = (undefined4)(longlong)*(float *)(param_1 + 9);
    uStack_114 = (undefined4)(longlong)*(float *)((longlong)param_1 + 0x4c);
    uStack_10c = 0x2f;
    uStack_100 = *(undefined4 *)(param_2 + 0x1bd4);
    puStack_e8 = &UNK_1809fcc28;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 0x1b;
    puVar8 = (undefined4 *)&DAT_18098bc73;
    if (puVar6 != (undefined4 *)0x0) {
      puVar8 = puVar6;
    }
    uVar9 = strcpy_s(auStack_d0,0x80,puVar8);
    plVar7 = (longlong *)FUN_1800b1d80(uVar9,&uStack_128,&puStack_e8,&uStack_118);
    lVar1 = *plVar7;
    *plVar7 = 0;
    plStack_120 = (longlong *)param_1[7];
    param_1[7] = lVar1;
    if (plStack_120 != (longlong *)0x0) {
      (**(code **)(*plStack_120 + 0x38))();
    }
    if ((longlong *)CONCAT44(uStack_124,uStack_128) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_124,uStack_128) + 0x38))();
    }
    puStack_e8 = &UNK_18098bcb0;
    puStack_148 = &UNK_180a3c3e0;
    if (puVar6 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
  }
  uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
  puStack_e8 = &UNK_18098bcb0;
  puStack_140 = (undefined4 *)0x0;
  puStack_148 = &UNK_18098bcb0;
  plStack_120 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plStack_120 = *(longlong **)(param_2 + 0x9690);
  *(longlong **)(param_2 + 0x9690) = plVar5;
  if (plStack_120 != (longlong *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
  plVar5 = (longlong *)param_1[7];
  if (plVar5 != (longlong *)0x0) {
    plStack_120 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStack_120 = *(longlong **)(param_2 + 0x96a8);
  *(longlong **)(param_2 + 0x96a8) = plVar5;
  if (plStack_120 != (longlong *)0x0) {
    (**(code **)(*plStack_120 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_178);
}



undefined8 *
FUN_180244d90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,7,param_3,param_4,0,0xfffffffffffffffe);
  *(undefined8 *)param_2[1] = 0x776569566c6772;
  *(undefined4 *)(param_2 + 2) = 7;
  return param_2;
}






// 函数: void FUN_180244e10(longlong *param_1)
void FUN_180244e10(longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xd8))();
  if ((lVar1 != 0) && (*(char *)((longlong)param_1 + 0xe9) != '\0')) {
    *(longlong **)(lVar1 + 0x9650) = param_1;
    if (*(code **)(lVar1 + 0x9620) != (code *)0x0) {
      (**(code **)(lVar1 + 0x9620))(lVar1 + 0x9610,0,0);
    }
    *(undefined **)(lVar1 + 0x9620) = &UNK_1800ee4d0;
    *(undefined **)(lVar1 + 0x9628) = &UNK_1800ee4c0;
    *(code **)(lVar1 + 0x9610) = FUN_1802436f0;
    puVar2 = &DAT_18098bc73;
    if ((undefined *)param_1[0x16] != (undefined *)0x0) {
      puVar2 = (undefined *)param_1[0x16];
    }
    (**(code **)(*(longlong *)(lVar1 + 0x95c8) + 0x10))((longlong *)(lVar1 + 0x95c8),puVar2);
    puVar2 = &DAT_18098bc73;
    if ((undefined *)param_1[0x12] != (undefined *)0x0) {
      puVar2 = (undefined *)param_1[0x12];
    }
    (**(code **)(*(longlong *)(lVar1 + 0x95e8) + 0x10))((longlong *)(lVar1 + 0x95e8),puVar2);
    *(int *)(lVar1 + 0x9608) = (int)param_1[0x19];
    *(undefined1 *)((longlong)param_1 + 0xe9) = 0;
  }
  return;
}






