#include "TaleWorlds.Native.Split.h"

// 99_part_02_part045.c - 9 个函数

// 函数: void FUN_1801b6b70(longlong *param_1,longlong param_2)
void FUN_1801b6b70(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int **ppiVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 uVar20;
  float fVar21;
  undefined1 auStack_388 [32];
  undefined1 uStack_368;
  int iStack_358;
  undefined4 uStack_354;
  longlong *plStack_350;
  int iStack_348;
  int iStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined4 uStack_318;
  undefined8 uStack_310;
  float fStack_2f8;
  float fStack_2f4;
  undefined8 uStack_2f0;
  longlong *plStack_2e8;
  longlong *plStack_2e0;
  int *piStack_2d8;
  undefined8 *puStack_2d0;
  int *piStack_2c8;
  longlong *plStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined4 uStack_298;
  undefined1 auStack_290 [136];
  undefined8 auStack_208 [24];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  ulonglong uStack_c8;
  
  uStack_2b8 = 0xfffffffffffffffe;
  uStack_c8 = _DAT_180bf00a8 ^ (ulonglong)auStack_388;
  iVar16 = 0x200;
  if (*(int *)(param_2 + 0x9a34) == 2) {
    iVar16 = 0x400;
  }
  iStack_358 = iVar16;
  plStack_350 = param_1;
  puVar8 = (undefined4 *)FUN_1800daa50();
  FUN_180094b30(puVar8,&UNK_180a0bf70);
  *puVar8 = 0x20;
  *(undefined8 *)(puVar8 + 0x4706) = 0;
  puVar8[0x4708] = (float)iVar16;
  puVar8[0x4709] = (float)iVar16;
  puVar8[0x470a] = 0;
  puVar8[0x470b] = 0x3f800000;
  lVar19 = 2;
  puVar8[1] = 2;
  puVar8[0x473c] = 0;
  FUN_1801be080(puVar8 + 2);
  puVar8[0x6e] = 0x40008182;
  *(undefined1 *)(puVar8 + 9) = 1;
  lVar2 = param_1[0xc170];
  fStack_fc = *(float *)(lVar2 + 0x24) * 0.5;
  fStack_100 = *(float *)(lVar2 + 0x20) * 0.5;
  fStack_104 = -fStack_100;
  fStack_f8 = -fStack_fc;
  uStack_2f0 = DAT_180a00330._8_8_;
  fStack_2f4 = fStack_fc;
  fStack_2f8 = fStack_100;
  fVar21 = -1e+30;
  iVar16 = 0;
  if (0 < *(int *)(lVar2 + 0x14)) {
    do {
      iVar14 = 0;
      if (0 < *(int *)(lVar2 + 0x18)) {
        plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x40) + *(longlong *)(lVar2 + 0x48) * 8);
        uVar18 = (ulonglong)(iVar16 * 1000);
        do {
          puVar13 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x40) + (uVar18 % (ulonglong)*(uint *)(lVar2 + 0x48)) * 8
                    );
          for (piVar9 = (int *)*puVar13; piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 4)) {
            if ((iVar16 == *piVar9) && (iVar14 == piVar9[1])) {
              piStack_2d8 = piVar9;
              puStack_2d0 = puVar13;
              ppiVar10 = &piStack_2d8;
              goto LAB_1801b6d83;
            }
          }
          piStack_2c8 = (int *)*plVar1;
          plStack_2c0 = plVar1;
          ppiVar10 = &piStack_2c8;
LAB_1801b6d83:
          if (*ppiVar10 == (int *)*plVar1) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(longlong *)(*ppiVar10 + 2);
          }
          fVar6 = *(float *)(lVar11 + 0x7c);
          if (*(float *)(lVar11 + 0x7c) <= fVar21) {
            fVar6 = fVar21;
          }
          fVar21 = fVar6;
          iVar14 = iVar14 + 1;
          uVar18 = uVar18 + 1;
        } while (iVar14 < *(int *)(lVar2 + 0x18));
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(lVar2 + 0x14));
  }
  FUN_180094c20(auStack_208);
  uStack_148 = 0x3f800000;
  uStack_140 = 0;
  uStack_138 = 0x3f80000000000000;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x3f800000;
  uStack_118 = fStack_2f8;
  uStack_114 = fStack_2f4;
  uStack_2f0._0_4_ = 0x43c80000;
  uStack_110 = 0x43c80000;
  uStack_10c = uStack_2f0._4_4_;
  FUN_1802864f0(auStack_208);
  uStack_108 = 0;
  uStack_f4 = 0x3a83126f;
  uStack_f0 = 0x44480000;
  FUN_1802864f0(auStack_208);
  puVar13 = (undefined8 *)(puVar8 + 0xc);
  puVar17 = auStack_208;
  do {
    puVar15 = puVar17;
    puVar12 = puVar13;
    uVar20 = puVar15[1];
    *puVar12 = *puVar15;
    puVar12[1] = uVar20;
    uVar20 = puVar15[3];
    puVar12[2] = puVar15[2];
    puVar12[3] = uVar20;
    uVar20 = puVar15[5];
    puVar12[4] = puVar15[4];
    puVar12[5] = uVar20;
    uVar20 = puVar15[7];
    puVar12[6] = puVar15[6];
    puVar12[7] = uVar20;
    uVar20 = puVar15[9];
    puVar12[8] = puVar15[8];
    puVar12[9] = uVar20;
    uVar20 = puVar15[0xb];
    puVar12[10] = puVar15[10];
    puVar12[0xb] = uVar20;
    uVar20 = puVar15[0xd];
    puVar12[0xc] = puVar15[0xc];
    puVar12[0xd] = uVar20;
    uVar20 = puVar15[0xf];
    puVar12[0xe] = puVar15[0xe];
    puVar12[0xf] = uVar20;
    lVar19 = lVar19 + -1;
    puVar13 = puVar12 + 0x10;
    puVar17 = puVar15 + 0x10;
  } while (lVar19 != 0);
  uVar20 = puVar15[0x11];
  puVar12[0x10] = puVar15[0x10];
  puVar12[0x11] = uVar20;
  uVar20 = puVar15[0x13];
  puVar12[0x12] = puVar15[0x12];
  puVar12[0x13] = uVar20;
  uVar20 = puVar15[0x15];
  puVar12[0x14] = puVar15[0x14];
  puVar12[0x15] = uVar20;
  uVar3 = *(undefined4 *)((longlong)puVar15 + 0xb4);
  uVar4 = *(undefined4 *)(puVar15 + 0x17);
  uVar5 = *(undefined4 *)((longlong)puVar15 + 0xbc);
  *(undefined4 *)(puVar12 + 0x16) = *(undefined4 *)(puVar15 + 0x16);
  *(undefined4 *)((longlong)puVar12 + 0xb4) = uVar3;
  *(undefined4 *)(puVar12 + 0x17) = uVar4;
  *(undefined4 *)((longlong)puVar12 + 0xbc) = uVar5;
  FUN_18024b8d0(puVar8);
  puStack_328 = &UNK_180a3c3e0;
  puStack_320 = (undefined8 *)0x0;
  uStack_318 = 0;
  uStack_310 = lVar19;
  puVar13 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13);
  *(undefined1 *)puVar13 = 0;
  puStack_320 = puVar13;
  uVar7 = FUN_18064e990(puVar13);
  plVar1 = plStack_350;
  iVar14 = iStack_358;
  *puVar13 = 0x5f6e776f64706f74;
  puVar13[1] = 0x73645f6874706564;
  *(undefined2 *)(puVar13 + 2) = 0x5f;
  uStack_318 = 0x11;
  iVar16 = (int)plStack_350[0x9d];
  uStack_310._0_4_ = uVar7;
  if (0 < iVar16) {
    if ((iVar16 != -0x11) && (uVar7 < iVar16 + 0x12U)) {
      uStack_368 = 0x13;
      puVar13 = (undefined8 *)FUN_18062b8b0(_DAT_180c8ed18,puVar13,iVar16 + 0x12U,0x10);
      puStack_320 = puVar13;
      uStack_310._0_4_ = FUN_18064e990(puVar13);
      iVar16 = (int)plVar1[0x9d];
    }
                    // WARNING: Subroutine does not return
    memcpy((undefined1 *)((longlong)puVar13 + 0x11),plVar1[0x9c],(longlong)(iVar16 + 1));
  }
  uStack_340 = 1;
  uStack_334 = 0x101018a;
  iStack_348 = iStack_358;
  iStack_344 = iStack_358;
  uStack_33c = 0x19;
  uStack_338 = 0x3f800000;
  uStack_330 = *(undefined4 *)(param_2 + 0x1bd4);
  lVar2 = *(longlong *)(param_2 + 0x3580);
  puStack_2a8 = &UNK_1809fcc28;
  puStack_2a0 = auStack_290;
  auStack_290[0] = 0;
  uStack_298 = 0x11;
  puVar17 = (undefined8 *)&DAT_18098bc73;
  if (puVar13 != (undefined8 *)0x0) {
    puVar17 = puVar13;
  }
  uVar20 = strcpy_s(auStack_290,0x80,puVar17);
  lVar19 = *(longlong *)(lVar2 + 0x648);
  if ((((((lVar19 == 0) || (*(int *)(lVar19 + 0x140) != iVar14)) ||
        (*(int *)(lVar19 + 0x144) != iVar14)) ||
       ((*(int *)(lVar19 + 0x148) != 1 || (*(int *)(lVar19 + 0x14c) != 0x19)))) ||
      ((*(float *)(lVar19 + 0x150) != 1.0 ||
       ((*(char *)(lVar19 + 0x154) != -0x76 || (*(char *)(lVar19 + 0x157) != '\x01')))))) ||
     ((*(char *)(lVar19 + 0x156) != '\x01' || (*(int *)(lVar19 + 0x380) == 0)))) {
    puVar13 = (undefined8 *)FUN_1800b1d80(uVar20,&iStack_358,&puStack_2a8,&iStack_348);
    uVar20 = *puVar13;
    *puVar13 = 0;
    plStack_350 = *(longlong **)(lVar2 + 0x648);
    *(undefined8 *)(lVar2 + 0x648) = uVar20;
    if (plStack_350 != (longlong *)0x0) {
      (**(code **)(*plStack_350 + 0x38))();
    }
    if ((longlong *)CONCAT44(uStack_354,iStack_358) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_354,iStack_358) + 0x38))();
    }
  }
  _Thrd_id();
  puStack_2a8 = &UNK_18098bcb0;
  plStack_2e8 = *(longlong **)(puVar8 + 0x25a4);
  *(undefined8 *)(puVar8 + 0x25a4) = 0;
  if (plStack_2e8 != (longlong *)0x0) {
    (**(code **)(*plStack_2e8 + 0x38))();
  }
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x3580) + 0x648);
  if (plVar1 != (longlong *)0x0) {
    plStack_2e0 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plStack_2e0 = *(longlong **)(puVar8 + 0x25aa);
  *(longlong **)(puVar8 + 0x25aa) = plVar1;
  if (plStack_2e0 != (longlong *)0x0) {
    (**(code **)(*plStack_2e0 + 0x38))();
  }
  if (param_2 == -0x11d00) {
    *(undefined1 *)(puVar8 + 0x473d) = 0;
  }
  else {
    FUN_1801c1c40(puVar8 + 0x4740);
    *(undefined1 *)(puVar8 + 0x473d) = 1;
  }
  FUN_180304010(*(undefined8 *)(param_2 + 0x3580),puVar8);
  LOCK();
  piVar9 = (int *)(param_2 + 0x11a48);
  iVar16 = *piVar9;
  *piVar9 = *piVar9 + 1;
  UNLOCK();
  *(undefined4 **)(param_2 + 0x9a48 + (longlong)iVar16 * 8) = puVar8;
  uVar20 = *(undefined8 *)(param_2 + 0x9a3c);
  *(undefined8 *)(puVar8 + 0x268d) = *(undefined8 *)(param_2 + 0x9a34);
  *(undefined8 *)(puVar8 + 0x268f) = uVar20;
  puStack_328 = &UNK_180a3c3e0;
  if (puStack_320 == (undefined8 *)0x0) {
    puStack_320 = (undefined8 *)0x0;
    uStack_310 = (ulonglong)uStack_310._4_4_ << 0x20;
    puStack_328 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_c8 ^ (ulonglong)auStack_388);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 *
FUN_1801b7270(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x38))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  *param_1 = &UNK_180a0c178;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b72f0(longlong param_1)
void FUN_1801b72f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined1 uStack_b8;
  longlong *aplStack_a8 [2];
  longlong *plStack_98;
  undefined *puStack_90;
  undefined4 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x3000) == '\0') {
    puStack_90 = &UNK_180a3c3e0;
    uStack_78 = 0;
    puStack_88 = (undefined4 *)0x0;
    uStack_80 = 0;
    puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x22,0x13);
    *(undefined1 *)puVar4 = 0;
    puStack_88 = puVar4;
    uVar3 = FUN_18064e990(puVar4);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
    *puVar4 = 0x6e657665;
    puVar4[1] = 0x6d2f3a74;
    puVar4[2] = 0x69737369;
    puVar4[3] = 0x612f6e6f;
    puVar4[4] = 0x6569626d;
    puVar4[5] = 0x612f746e;
    puVar4[6] = 0x2f616572;
    puVar4[7] = 0x6961725f;
    *(undefined2 *)(puVar4 + 8) = 0x6e;
    uStack_80 = 0x21;
    uStack_b8 = 1;
    puVar5 = (undefined8 *)FUN_180157390(0x6e,aplStack_a8,&puStack_90,lVar1);
    uVar2 = *puVar5;
    *puVar5 = 0;
    plStack_98 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    if (plStack_98 != (longlong *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    if (aplStack_a8[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_a8[0] + 0x38))();
    }
    puStack_90 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b77f0(longlong param_1,undefined8 param_2,longlong param_3)
void FUN_1801b77f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_1c8 [32];
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_148;
  undefined1 auStack_138 [192];
  undefined4 uStack_78;
  ulonglong uStack_68;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_68 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  uVar2 = *(undefined8 *)(param_3 + 0xf0);
  uVar3 = *(undefined8 *)(param_3 + 0xf8);
  fVar7 = (float)_DAT_180c8ed30;
  lVar1 = *(longlong *)(param_1 + 8);
  if (((*(char *)(lVar1 + 0x60b90) != '\0') && (0.9 < *(float *)(lVar1 + 0x3140))) &&
     (*(float *)(param_1 + 0x38 + (longlong)*(int *)(param_1 + 0x28) * 0x10) <= fVar7 * 1e-05)) {
    uVar5 = *(int *)(param_1 + 0x28) + 1U & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(param_1 + 0x28) = uVar5;
    if (*(char *)(param_1 + 0x2c + (longlong)(int)uVar5 * 0x10) == '\0') {
      *(undefined4 *)(lVar1 + 0x3414) = *(undefined4 *)(lVar1 + 0x367c);
      *(undefined4 *)(lVar1 + 0x3418) = *(undefined4 *)(lVar1 + 0x3678);
      *(undefined1 *)(lVar1 + 0x3680) = 0;
      *(uint *)(lVar1 + 0x3674) = *(uint *)(lVar1 + 0x3674) & 0xfffffffd;
      iVar6 = *(int *)(param_1 + 0x28);
    }
    else {
      _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
      fVar8 = (float)(_DAT_180bf65b8 - 1) * 8.381903e-08;
      if (*(int *)(param_1 + 0x28) == 1) {
        pcStack_1a8 = FUN_18004a130;
        FUN_1808fc838(auStack_138,0x30,4,FUN_1801c2890);
        uStack_78 = 0;
                    // WARNING: Subroutine does not return
        FUN_1808fd400(fVar8);
      }
      lVar1 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(lVar1 + 0x3414) = *(undefined4 *)(lVar1 + 0x367c);
      *(undefined4 *)(lVar1 + 0x3418) = *(undefined4 *)(lVar1 + 0x3678);
      *(undefined1 *)(lVar1 + 0x3680) = 0;
      *(uint *)(lVar1 + 0x3674) = *(uint *)(lVar1 + 0x3674) & 0xfffffffd;
      lVar1 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(lVar1 + 0x367c) = *(undefined4 *)(lVar1 + 0x3414);
      *(float *)(lVar1 + 0x3678) = *(float *)(lVar1 + 0x3418);
      *(float *)(lVar1 + 0x3414) = fVar8;
      *(float *)(lVar1 + 0x3418) = *(float *)(lVar1 + 0x3418) * 45.0;
      *(undefined1 *)(lVar1 + 0x3680) = 1;
      *(uint *)(lVar1 + 0x3674) = *(uint *)(lVar1 + 0x3674) & 0xfffffffd;
      _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
      _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
      iVar6 = *(int *)(param_1 + 0x28);
      if ((iVar6 == 1) && (((char)_DAT_180bf65b8 - 1U & 1) != 0)) {
        iVar6 = 3;
        *(undefined4 *)(param_1 + 0x28) = 3;
      }
    }
    _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
    _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
    _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
    *(float *)(param_1 + 0x38 + (longlong)*(int *)(param_1 + 0x28) * 0x10) =
         fVar7 * 1e-05 + *(float *)(param_1 + ((longlong)*(int *)(param_1 + 0x28) + 3) * 0x10) +
         (float)(_DAT_180bf65b8 - 1) * 2.3283064e-10 *
         *(float *)(param_1 + 0x34 + (longlong)iVar6 * 0x10);
  }
  if (((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
      (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))(), cVar4 == '\0')) &&
     (0.7 < *(float *)(*(longlong *)(param_1 + 8) + 0x3140))) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uStack_198 = 0x3f800000;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_184 = 0x3f800000;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0x3f800000;
    uStack_16c = 0;
    uStack_168 = uVar2;
    uStack_160 = uVar3;
    FUN_1802ea790(*(longlong *)(param_1 + 0x10),&uStack_198);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_1c8);
}






// 函数: void FUN_1801b7c30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801b7c30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x30c4) = *(undefined4 *)(lVar1 + 0x332c);
  *(undefined4 *)(lVar1 + 0x30c8) = *(undefined4 *)(lVar1 + 0x3328);
  *(undefined1 *)(lVar1 + 0x3330) = 0;
  *(uint *)(lVar1 + 0x3324) = *(uint *)(lVar1 + 0x3324) & 0xfffffffd;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (plVar2[4] == lVar1) {
      pplStackX_10 = &plStackX_8;
      plStackX_8 = plVar2;
      (**(code **)(*plVar2 + 0x28))();
      pplStackX_18 = &plStackX_8;
      FUN_180198980(lVar1,plStackX_8,param_3,param_4,0x3c);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = *(longlong **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x68))();
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x68))();
    plStackX_8 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(longlong **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}






// 函数: void FUN_1801b7d40(longlong param_1,longlong param_2)
void FUN_1801b7d40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) == param_2) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001801b7d76. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x38))();
      return;
    }
  }
  return;
}



undefined8 *
FUN_1801b7d80(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  *param_1 = &UNK_180a0c178;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b7df0(longlong param_1)
void FUN_1801b7df0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_d8 [32];
  ulonglong uStack_b8;
  longlong *plStack_a8;
  longlong *plStack_a0;
  undefined *puStack_98;
  undefined4 *puStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 *puStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x10) == 0) &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0x3000) == '\0')) {
    puVar2 = (undefined8 *)FUN_180198890(*(longlong *)(param_1 + 8),&plStack_a0,0);
    uVar3 = *puVar2;
    *puVar2 = 0;
    plStack_a8 = *(longlong **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    if (plStack_a0 != (longlong *)0x0) {
      (**(code **)(*plStack_a0 + 0x38))();
    }
    puStack_70 = &UNK_18098bc80;
    puStack_68 = auStack_58;
    auStack_58[0] = 0;
    uStack_60 = 0x12;
    strcpy_s(auStack_58,0x20,&UNK_180a0c038);
    uVar3 = FUN_18020bef0(_DAT_180c868e8,&puStack_70);
    puStack_70 = &UNK_18098bcb0;
    uStack_b8 = 0;
    FUN_1802ec6e0(*(undefined8 *)(param_1 + 0x10),uVar3,0,1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_98 = &UNK_180a3c3e0;
    uStack_80 = 0;
    puStack_90 = (undefined4 *)0x0;
    uStack_88 = 0;
    puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x27,0x13);
    *(undefined1 *)puVar4 = 0;
    puStack_90 = puVar4;
    uVar1 = FUN_18064e990(puVar4);
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
    *puVar4 = 0x6e657665;
    puVar4[1] = 0x6d2f3a74;
    puVar4[2] = 0x69737369;
    puVar4[3] = 0x612f6e6f;
    puVar4[4] = 0x6569626d;
    puVar4[5] = 0x612f746e;
    puVar4[6] = 0x2f616572;
    puVar4[7] = 0x6f6e735f;
    puVar4[8] = 0x6f747377;
    *(undefined2 *)(puVar4 + 9) = 0x6d72;
    *(undefined1 *)((longlong)puVar4 + 0x26) = 0;
    uStack_88 = 0x26;
    uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    puVar2 = (undefined8 *)FUN_180157390(0x6d72,&plStack_a0,&puStack_98,uVar3);
    uVar3 = *puVar2;
    *puVar2 = 0;
    plStack_a8 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    if (plStack_a8 != (longlong *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    if (plStack_a0 != (longlong *)0x0) {
      (**(code **)(*plStack_a0 + 0x38))();
    }
    puStack_98 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}






// 函数: void FUN_1801b8010(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)
void FUN_1801b8010(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar5 = *(undefined4 *)(param_3 + 0xf0);
  uVar2 = *(undefined4 *)(param_3 + 0xf4);
  uVar6 = *(undefined4 *)(param_3 + 0xf8);
  uVar3 = *(undefined4 *)(param_3 + 0xfc);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((plVar1 != (longlong *)0x0) &&
     (cVar4 = (**(code **)(*plVar1 + 0x80))(plVar1,param_2,uVar5,param_4,uVar5,uVar6), cVar4 == '\0'
     )) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uStack_48 = 0x3f800000;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0x3f800000;
    uStack_1c = 0;
    uStack_38 = 0;
    uStack_34 = 0x3f800000;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_18 = uVar5;
    uStack_14 = uVar2;
    uStack_10 = uVar6;
    uStack_c = uVar3;
    FUN_1802ea790(*(longlong *)(param_1 + 0x10),&uStack_48);
  }
  return;
}






// 函数: void FUN_1801b8090(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801b8090(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong **pplStackX_18;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_1 + 8);
    if (plVar1[4] == lVar2) {
      pplStackX_10 = &plStackX_8;
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))();
      pplStackX_18 = &plStackX_8;
      FUN_180198980(lVar2,plStackX_8,param_3,param_4,0x3d);
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = *(longlong **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x68))();
    plStackX_8 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_1801b8150(undefined4 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined *puStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = 1;
  plVar1 = (longlong *)(param_1 + 2);
  FUN_1808fc838(plVar1,0x20,0x20,FUN_1801b82f0,FUN_18004a130);
  param_1[0x102] = 0;
  if (plVar1 != (longlong *)(param_1 + 0x102)) {
    plVar6 = (longlong *)(param_1 + 4);
    do {
      lVar5 = FUN_180628ca0();
      uVar3 = *(uint *)(lVar5 + 0x10);
      uVar7 = (ulonglong)uVar3;
      if (*(longlong *)(lVar5 + 8) != 0) {
        FUN_1806277c0(plVar6 + -1,uVar7);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*plVar6,*(undefined8 *)(lVar5 + 8),uVar7);
      }
      *(undefined4 *)(plVar6 + 1) = 0;
      if (*plVar6 != 0) {
        *(undefined1 *)(uVar7 + *plVar6) = 0;
      }
      *(undefined4 *)((longlong)plVar6 + 0x14) = *(undefined4 *)(lVar5 + 0x1c);
      plVar2 = plVar6 + 3;
      plVar6 = plVar6 + 4;
    } while (plVar2 != (longlong *)(param_1 + 0x102));
  }
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  puStack_48 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puStack_48 = 0;
  uVar4 = FUN_18064e990(puStack_48);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar4);
  *puStack_48 = 0x65736162;
  *(undefined1 *)(puStack_48 + 1) = 0;
  uStack_40 = 4;
  FUN_18005d190(plVar1,&puStack_50);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}



undefined8 * FUN_1801b82f0(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



undefined8 *
FUN_1801b8340(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar1 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 3;
  uVar2 = 1;
  param_1 = param_1 + 8;
  do {
    if (*(int *)(param_1 + 0x10) != 0) {
      if ((ulonglong)param_2[1] < (ulonglong)param_2[2]) {
        param_2[1] = param_2[1] + 0x20;
        FUN_180627ae0();
      }
      else {
        FUN_180059820(param_2,param_1,param_3,param_4,uVar2,uVar3);
      }
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x20;
  } while (uVar1 < 0x20);
  return param_2;
}



int FUN_1801b83d0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_2 + 0x10);
  puVar7 = (undefined8 *)(param_1 + 0x10);
  uVar8 = 0;
  do {
    iVar3 = *(int *)(puVar7 + 1);
    iVar5 = iVar2;
    if (iVar3 == iVar2) {
      if (iVar3 != 0) {
        pbVar4 = (byte *)*puVar7;
        lVar6 = *(longlong *)(param_2 + 8) - (longlong)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar6;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
LAB_1801b841e:
      if (iVar5 == 0) {
        return 1 << ((byte)uVar8 & 0x1f);
      }
    }
    else if (iVar3 == 0) goto LAB_1801b841e;
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 4;
    if (0x1f < uVar8) {
      return 0;
    }
  } while( true );
}






// 函数: void FUN_1801b8450(uint *param_1,longlong param_2)
void FUN_1801b8450(uint *param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar7 = param_1 + 4;
  uVar8 = 0;
  do {
    uVar3 = puVar7[2];
    uVar5 = uVar2;
    if (uVar3 == uVar2) {
      if (uVar3 != 0) {
        pbVar4 = *(byte **)puVar7;
        lVar6 = *(longlong *)(param_2 + 8) - (longlong)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar6;
          uVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (uVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
LAB_1801b84ae:
      if (uVar5 == 0) {
        *param_1 = *param_1 | 1 << ((byte)uVar8 & 0x1f);
        return;
      }
    }
    else if (uVar3 == 0) goto LAB_1801b84ae;
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 8;
    if (0x1f < uVar8) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




