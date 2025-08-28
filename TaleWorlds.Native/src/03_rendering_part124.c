#include "TaleWorlds.Native.Split.h"

// 03_rendering_part124.c - 2 个函数

// 函数: void FUN_18033fca0(undefined8 param_1,longlong param_2,undefined8 param_3)
void FUN_18033fca0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  uint uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  int iStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  ulonglong uStack_38;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uStack_c8 = 0;
  FUN_18033ff10(param_1,&puStack_88);
  puStack_60 = &UNK_1809fdc18;
  puStack_58 = auStack_48;
  auStack_48[0] = 0;
  uStack_50 = 6;
  strcpy_s(auStack_48,0x10,&UNK_180a3c07c);
  uStack_c8 = 2;
  FUN_1806279c0(&puStack_c0,&puStack_60);
  uStack_c8 = 0;
  puStack_60 = &UNK_18098bcb0;
  uVar4 = uStack_b0 + 0x10;
  FUN_1806277c0(&puStack_c0,uVar4);
  puVar1 = (undefined4 *)(puStack_b8 + uStack_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(undefined1 *)(puVar1 + 4) = 0;
  uStack_b0 = uVar4;
  FUN_180627be0(param_2,param_3);
  iVar5 = *(int *)(param_2 + 0x10) + 8;
  FUN_1806277c0(param_2,iVar5);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x726566667562675f;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar5;
  if (0 < iVar5) {
    FUN_1806277c0(&puStack_c0,iVar5 + uStack_b0);
                    // WARNING: Subroutine does not return
    memcpy(puStack_b8 + uStack_b0,*(undefined8 *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar5 = uStack_b0 + 3;
  FUN_1806277c0(&puStack_c0,iVar5);
  *(undefined4 *)(puStack_b8 + uStack_b0) = 0x73722e;
  uStack_a0 = 0;
  lStack_98 = 0;
  puVar3 = &DAT_18098bc73;
  if (puStack_b8 != (undefined *)0x0) {
    puVar3 = puStack_b8;
  }
  uStack_b0 = iVar5;
  FUN_18062dee0(&uStack_a0,puVar3,&DAT_1809fc7ec);
  lVar6 = lStack_98;
  puVar3 = &DAT_18098bc73;
  if (puStack_80 != (undefined *)0x0) {
    puVar3 = puStack_80;
  }
  fwrite(puVar3,(longlong)iStack_78,1,lStack_98);
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_c0 = &UNK_180a3c3e0;
  if (puStack_b8 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_b8 = (undefined *)0x0;
  uStack_a8 = 0;
  puStack_c0 = &UNK_18098bcb0;
  puStack_88 = &UNK_180a3c3e0;
  if (puStack_80 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_80 = (undefined *)0x0;
  uStack_70 = 0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_e8);
}



undefined8 *
FUN_18033ff10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar1 + 0x15,param_3,param_4,1,0xfffffffffffffffe);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x46554247;
  puVar2[3] = 0x5f524546;
  puVar2[4] = 0x53534150;
  *(undefined2 *)(puVar2 + 5) = 10;
  *(int *)(param_2 + 2) = iVar1 + 0x15;
  uVar3 = FUN_18033eb00(puVar2,param_2,param_3);
  uVar3 = FUN_18033f560(uVar3,param_2,param_3);
  uVar3 = FUN_180342f20(uVar3,param_2,param_3);
  FUN_180340190(uVar3,param_2,param_3);
  return param_2;
}



undefined8 *
FUN_18033ffe0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar1 + 0x17,param_3,param_4,1,0xfffffffffffffffe);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x44414853;
  puVar2[3] = 0x414d574f;
  *(undefined8 *)(puVar2 + 4) = 0xa535341505f50;
  *(int *)(param_2 + 2) = iVar1 + 0x17;
  uVar3 = FUN_18033eb00(0x66656423,param_2,param_3);
  uVar3 = FUN_18033f560(uVar3,param_2,param_3);
  uVar3 = FUN_180342f20(uVar3,param_2,param_3);
  FUN_180340b00(uVar3,param_2,param_3);
  return param_2;
}



undefined8 *
FUN_1803400b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(param_2 + 2);
  FUN_1806277c0(param_2,iVar1 + 0x22,param_3,param_4,1,0xfffffffffffffffe);
  puVar2 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar2 = 0x66656423;
  puVar2[1] = 0x20656e69;
  puVar2[2] = 0x4e494f50;
  puVar2[3] = 0x47494c54;
  puVar2[4] = 0x535f5448;
  puVar2[5] = 0x4f444148;
  puVar2[6] = 0x50414d57;
  puVar2[7] = 0x5341505f;
  *(undefined2 *)(puVar2 + 8) = 0xa53;
  *(undefined1 *)((longlong)puVar2 + 0x22) = 0;
  *(int *)(param_2 + 2) = iVar1 + 0x22;
  uVar3 = FUN_18033eb00(puVar2,param_2,param_3);
  uVar3 = FUN_18033f560(uVar3,param_2,param_3);
  uVar3 = FUN_180342f20(uVar3,param_2,param_3);
  FUN_1803415f0(uVar3,param_2,param_3);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180340190(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)
void FUN_180340190(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  ulonglong uVar13;
  
  uVar13 = 0;
  puVar5 = (undefined4 *)
           FUN_18062b420(_DAT_180c8ed18,0x18,0x13,param_4,0,0xfffffffffffffffe,&UNK_180a3c3e0,0,0,0)
  ;
  *(undefined1 *)puVar5 = 0;
  FUN_18064e990(puVar5);
  *puVar5 = 0x65786950;
  puVar5[1] = 0x68735f6c;
  puVar5[2] = 0x72656461;
  puVar5[3] = 0x706e695f;
  *(undefined8 *)(puVar5 + 4) = 0x657079745f7475;
  iVar17 = *(int *)(param_2 + 0x10);
  iVar15 = iVar17 + 0x11;
  FUN_1806277c0(param_2,iVar15);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x20666923;
  puVar6[1] = 0x45584950;
  puVar6[2] = 0x48535f4c;
  puVar6[3] = 0x52454441;
  *(undefined2 *)(puVar6 + 4) = 10;
  *(int *)(param_2 + 0x10) = iVar15;
  if (*(char *)(param_3 + 0x10f8) == '\0') {
    FUN_1806277c0(param_2,iVar17 + 0x39);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x504c412120666923;
    puVar7[1] = 0x20545345545f4148;
    *(undefined4 *)(puVar7 + 2) = 0x21202626;
    *(undefined4 *)((longlong)puVar7 + 0x14) = 0x5f455355;
    *(undefined4 *)(puVar7 + 3) = 0x4f4f4d53;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x465f4854;
    puVar7[4] = 0xa54554f5f454441;
    *(undefined1 *)(puVar7 + 5) = 0;
    *(int *)(param_2 + 0x10) = iVar17 + 0x39;
    FUN_1806277c0(param_2,iVar17 + 0x4d);
    puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar6 = 0x7261655b;
    puVar6[1] = 0x6564796c;
    puVar6[2] = 0x73687470;
    puVar6[3] = 0x636e6574;
    puVar6[4] = 0xa5d6c69;
    *(undefined1 *)(puVar6 + 5) = 0;
    *(int *)(param_2 + 0x10) = iVar17 + 0x4d;
    iVar15 = iVar17 + 0x54;
    FUN_1806277c0(param_2,iVar15);
    *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
         0xa6669646e6523;
    *(int *)(param_2 + 0x10) = iVar15;
  }
  FUN_1806277c0(param_2,iVar15 + 0x1a);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x4f5f5350;
  puVar6[1] = 0x55505455;
  puVar6[2] = 0x42475f54;
  puVar6[3] = 0x45464655;
  *(undefined8 *)(puVar6 + 4) = 0x705f6e69616d2052;
  *(undefined2 *)(puVar6 + 6) = 0x2873;
  *(undefined1 *)((longlong)puVar6 + 0x1a) = 0;
  *(int *)(param_2 + 0x10) = iVar15 + 0x1a;
  FUN_1806277c0(param_2,iVar15 + 0x31);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  uVar19 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar19;
  puVar6[2] = uVar1;
  puVar6[3] = uVar2;
  *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar5 + 4);
  *(int *)(param_2 + 0x10) = iVar15 + 0x31;
  FUN_1806277c0(param_2,iVar15 + 0x36);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x296e4920;
  *(undefined2 *)(puVar6 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar15 + 0x36;
  FUN_1806277c0(param_2,iVar15 + 0x38);
  puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar8 = 0xa7b;
  *(undefined1 *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar15 + 0x38;
  FUN_1806277c0(param_2,iVar15 + 0x6a);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x5054554f5f535009;
  puVar7[1] = 0x46465542475f5455;
  *(undefined4 *)(puVar7 + 2) = 0x4f205245;
  *(undefined4 *)((longlong)puVar7 + 0x14) = 0x75707475;
  *(undefined4 *)(puVar7 + 3) = 0x203d2074;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x5f535028;
  *(undefined4 *)(puVar7 + 4) = 0x5054554f;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x475f5455;
  *(undefined4 *)(puVar7 + 5) = 0x46465542;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x30295245;
  *(undefined2 *)(puVar7 + 6) = 0xa3b;
  *(undefined1 *)((longlong)puVar7 + 0x32) = 0;
  *(int *)(param_2 + 0x10) = iVar15 + 0x6a;
  FUN_1806277c0(param_2,iVar15 + 0xb1);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x69746174735f6c65;
  puVar7[2] = 0x6261697261765f63;
  puVar7[3] = 0x735f70702073656c;
  puVar7[4] = 0x203d206369746174;
  puVar7[5] = 0x7869705f72655028;
  *(undefined4 *)(puVar7 + 6) = 0x735f6c65;
  *(undefined4 *)((longlong)puVar7 + 0x34) = 0x69746174;
  *(undefined4 *)(puVar7 + 7) = 0x61765f63;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x62616972;
  puVar7[8] = 0xa3b302973656c;
  *(int *)(param_2 + 0x10) = iVar15 + 0xb1;
  FUN_1806277c0(param_2,iVar15 + 0x105);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x6669646f6d5f6c65;
  puVar7[2] = 0x61765f656c626169;
  puVar7[3] = 0x2073656c62616972;
  puVar7[4] = 0x6669646f6d5f7070;
  puVar7[5] = 0x203d20656c626169;
  *(undefined4 *)(puVar7 + 6) = 0x72655028;
  *(undefined4 *)((longlong)puVar7 + 0x34) = 0x7869705f;
  *(undefined4 *)(puVar7 + 7) = 0x6d5f6c65;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x6669646f;
  *(undefined4 *)(puVar7 + 8) = 0x6c626169;
  *(undefined4 *)((longlong)puVar7 + 0x44) = 0x61765f65;
  *(undefined4 *)(puVar7 + 9) = 0x62616972;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = 0x2973656c;
  *(undefined4 *)(puVar7 + 10) = 0xa0a3b30;
  *(undefined1 *)((longlong)puVar7 + 0x54) = 0;
  *(int *)(param_2 + 0x10) = iVar15 + 0x105;
  FUN_1806277c0(param_2,iVar15 + 0x150);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x6c697875615f6c65;
  puVar7[2] = 0x7261765f79726169;
  puVar7[3] = 0x702073656c626169;
  puVar7[4] = 0x203d207875615f70;
  puVar7[5] = 0x7869705f72655028;
  *(undefined4 *)(puVar7 + 6) = 0x615f6c65;
  *(undefined4 *)((longlong)puVar7 + 0x34) = 0x6c697875;
  *(undefined4 *)(puVar7 + 7) = 0x79726169;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x7261765f;
  puVar7[8] = 0x302973656c626169;
  *(undefined4 *)(puVar7 + 9) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = iVar15 + 0x150;
  iVar15 = iVar15 + 0x187;
  FUN_1806277c0(param_2,iVar15);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x616c75636c616309;
  puVar7[1] = 0x705f7265705f6574;
  puVar7[2] = 0x6174735f6c657869;
  puVar7[3] = 0x697261765f636974;
  uVar19 = 0x656c6261;
  *(undefined4 *)(puVar7 + 4) = 0x656c6261;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x6e492873;
  *(undefined4 *)(puVar7 + 5) = 0x7070202c;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x6174735f;
  puVar7[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = iVar15;
  lVar9 = *(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490);
  lVar14 = lVar9 >> 0x3f;
  uVar18 = uVar13;
  if (lVar9 / 0x98 + lVar14 != lVar14) {
    do {
      iVar16 = iVar15 + 1;
      FUN_1806277c0(param_2,iVar16);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar16;
      lVar14 = *(longlong *)(param_3 + 0x490);
      iVar17 = *(int *)(lVar14 + 0x10 + uVar18);
      if (0 < iVar17) {
        FUN_1806277c0(param_2,iVar16 + iVar17);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
               *(undefined8 *)(lVar14 + 8 + uVar18),(longlong)(*(int *)(lVar14 + 0x10 + uVar18) + 1)
              );
      }
      iVar15 = iVar15 + 7;
      uVar19 = FUN_1806277c0(param_2,iVar15);
      puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar6 = 0x296e4928;
      *(undefined2 *)(puVar6 + 1) = 0xa3b;
      *(undefined1 *)((longlong)puVar6 + 6) = 0;
      *(int *)(param_2 + 0x10) = iVar15;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar18 = uVar18 + 0x98;
    } while ((ulonglong)(longlong)(int)uVar12 <
             (ulonglong)((*(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490)) / 0x98));
  }
  lVar14 = 0;
  do {
    if (lVar14 != 6) {
      lVar9 = lVar14 * 0x98 + param_3;
      if (*(int *)(lVar9 + 0xa40) != 0) {
        iVar17 = *(int *)(param_2 + 0x10);
        iVar15 = iVar17 + 1;
        FUN_1806277c0(param_2,iVar15);
        *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
        *(int *)(param_2 + 0x10) = iVar15;
        if (0 < *(int *)(lVar9 + 0xa40)) {
          FUN_1806277c0(param_2,iVar15 + *(int *)(lVar9 + 0xa40));
                    // WARNING: Subroutine does not return
          memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
                 *(undefined8 *)(lVar9 + 0xa38),(longlong)(*(int *)(lVar9 + 0xa40) + 1));
        }
        iVar17 = iVar17 + 0x2b;
        FUN_1806277c0(param_2,iVar17);
        puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *puVar7 = 0x7070202c206e4928;
        puVar7[1] = 0x206369746174735f;
        puVar7[2] = 0x646f6d5f7070202c;
        puVar7[3] = 0x2c656c6261696669;
        uVar19 = 0x5f707020;
        puVar7[4] = 0x297875615f707020;
        *(undefined2 *)(puVar7 + 5) = 0xa3b;
        *(undefined1 *)((longlong)puVar7 + 0x2a) = 0;
        *(int *)(param_2 + 0x10) = iVar17;
      }
      if (lVar14 == 1) {
        uVar19 = FUN_180344f00(uVar19,param_2,param_3);
      }
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 < 7);
  iVar17 = *(int *)(param_2 + 0x10);
  FUN_1806277c0(param_2,iVar17 + 0x39);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x6f2074616f6c6609;
  puVar7[1] = 0x6e6f6973756c6363;
  puVar7[2] = 0x203d206f666e695f;
  puVar7[3] = 0x6669646f6d5f7070;
  *(undefined4 *)(puVar7 + 4) = 0x6c626169;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x6d612e65;
  *(undefined4 *)(puVar7 + 5) = 0x6e656962;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x6f615f74;
  puVar7[6] = 0x3b726f746361665f;
  *(undefined2 *)(puVar7 + 7) = 10;
  *(int *)(param_2 + 0x10) = iVar17 + 0x39;
  FUN_1806277c0(param_2,iVar17 + 0x14f);
  lVar14 = 2;
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  puVar4 = (undefined8 *)&UNK_180a1bd10;
  do {
    puVar11 = puVar4;
    puVar10 = puVar7;
    uVar3 = puVar11[1];
    *puVar10 = *puVar11;
    puVar10[1] = uVar3;
    uVar3 = puVar11[3];
    puVar10[2] = puVar11[2];
    puVar10[3] = uVar3;
    uVar3 = puVar11[5];
    puVar10[4] = puVar11[4];
    puVar10[5] = uVar3;
    uVar3 = puVar11[7];
    puVar10[6] = puVar11[6];
    puVar10[7] = uVar3;
    uVar3 = puVar11[9];
    puVar10[8] = puVar11[8];
    puVar10[9] = uVar3;
    uVar3 = puVar11[0xb];
    puVar10[10] = puVar11[10];
    puVar10[0xb] = uVar3;
    uVar3 = puVar11[0xd];
    puVar10[0xc] = puVar11[0xc];
    puVar10[0xd] = uVar3;
    uVar19 = *(undefined4 *)((longlong)puVar11 + 0x74);
    uVar1 = *(undefined4 *)(puVar11 + 0xf);
    uVar2 = *(undefined4 *)((longlong)puVar11 + 0x7c);
    *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(puVar11 + 0xe);
    *(undefined4 *)((longlong)puVar10 + 0x74) = uVar19;
    *(undefined4 *)(puVar10 + 0xf) = uVar1;
    *(undefined4 *)((longlong)puVar10 + 0x7c) = uVar2;
    lVar14 = lVar14 + -1;
    puVar7 = puVar10 + 0x10;
    puVar4 = puVar11 + 0x10;
  } while (lVar14 != 0);
  uVar19 = *(undefined4 *)((longlong)puVar11 + 0x84);
  uVar1 = *(undefined4 *)(puVar11 + 0x11);
  uVar2 = *(undefined4 *)((longlong)puVar11 + 0x8c);
  *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar11 + 0x10);
  *(undefined4 *)((longlong)puVar10 + 0x84) = uVar19;
  *(undefined4 *)(puVar10 + 0x11) = uVar1;
  *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar2;
  *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)(puVar11 + 0x12);
  *(undefined2 *)((longlong)puVar10 + 0x94) = *(undefined2 *)((longlong)puVar11 + 0x94);
  *(undefined *)((longlong)puVar10 + 0x96) = *(undefined *)((longlong)puVar11 + 0x96);
  *(int *)(param_2 + 0x10) = iVar17 + 0x14f;
  FUN_1806277c0(param_2,iVar17 + 0x177);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x7562675f74657309;
  puVar7[1] = 0x746f6d5f72656666;
  *(undefined4 *)(puVar7 + 2) = 0x5f6e6f69;
  *(undefined4 *)((longlong)puVar7 + 0x14) = 0x74636576;
  *(undefined4 *)(puVar7 + 3) = 0x4928726f;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x4f202c6e;
  puVar7[4] = 0xa3b297475707475;
  *(undefined1 *)(puVar7 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x177;
  FUN_1806277c0(param_2,iVar17 + 0x1b6);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x7562675f74657309;
  puVar7[1] = 0x746e655f72656666;
  puVar7[2] = 0x492864695f797469;
  puVar7[3] = 0x74735f7070202c6e;
  *(undefined4 *)(puVar7 + 4) = 0x63697461;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x7070202c;
  *(undefined4 *)(puVar7 + 5) = 0x646f6d5f;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x61696669;
  *(undefined4 *)(puVar7 + 6) = 0x2c656c62;
  *(undefined4 *)((longlong)puVar7 + 0x34) = 0x74754f20;
  *(undefined4 *)(puVar7 + 7) = 0x29747570;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = iVar17 + 0x1b6;
  FUN_1806277c0(param_2,iVar17 + 0x1d7);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x64666923;
  puVar6[1] = 0x53206665;
  puVar6[2] = 0x45545359;
  puVar6[3] = 0x48535f4d;
  puVar6[4] = 0x565f574f;
  puVar6[5] = 0x45545245;
  puVar6[6] = 0x4f435f58;
  puVar6[7] = 0x53524f4c;
  *(undefined2 *)(puVar6 + 8) = 10;
  *(int *)(param_2 + 0x10) = iVar17 + 0x1d7;
  FUN_1806277c0(param_2,iVar17 + 0x22d);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x414d282066692309;
  puVar7[1] = 0x495f4c4149524554;
  puVar7[2] = 0x4941525245545f44;
  puVar7[3] = 0x5f796d203d21204e;
  puVar7[4] = 0x6c6169726574616d;
  puVar7[5] = 0x202626202964695f;
  *(undefined4 *)(puVar7 + 6) = 0x54414d28;
  *(undefined4 *)((longlong)puVar7 + 0x34) = 0x41495245;
  *(undefined4 *)(puVar7 + 7) = 0x44495f4c;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0x4152475f;
  *(undefined4 *)(puVar7 + 8) = 0x21205353;
  *(undefined4 *)((longlong)puVar7 + 0x44) = 0x796d203d;
  *(undefined4 *)(puVar7 + 9) = 0x74616d5f;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = 0x61697265;
  *(undefined4 *)(puVar7 + 10) = 0x64695f6c;
  *(undefined2 *)((longlong)puVar7 + 0x54) = 0xa29;
  *(undefined1 *)((longlong)puVar7 + 0x56) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x22d;
  FUN_1806277c0(param_2,iVar17 + 0x288);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x74757074754f0909;
  puVar7[1] = 0x726566667562672e;
  puVar7[2] = 0x5f6f6465626c615f;
  puVar7[3] = 0x73656e6b63696874;
  puVar7[4] = 0x203d206267722e73;
  puVar7[5] = 0x6b73616d5f746567;
  puVar7[6] = 0x65747265765f6465;
  puVar7[7] = 0x28726f6c6f635f78;
  *(undefined4 *)(puVar7 + 8) = 0x762e6e49;
  *(undefined4 *)((longlong)puVar7 + 0x44) = 0x65747265;
  *(undefined4 *)(puVar7 + 9) = 0x6f635f78;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = 0x2e726f6c;
  puVar7[10] = 0x67722e2961626772;
  *(undefined4 *)(puVar7 + 0xb) = 0xa3b62;
  *(int *)(param_2 + 0x10) = iVar17 + 0x288;
  FUN_1806277c0(param_2,iVar17 + 0x290);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0xa6669646e652309;
  *(undefined1 *)(puVar7 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x290;
  FUN_1806277c0(param_2,iVar17 + 0x297);
  *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar17 + 0x297;
  FUN_1806277c0(param_2,iVar17 + 0x2a7);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x74657209;
  puVar6[1] = 0x206e7275;
  puVar6[2] = 0x7074754f;
  puVar6[3] = 0xa3b7475;
  *(undefined1 *)(puVar6 + 4) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x2a7;
  FUN_1806277c0(param_2,iVar17 + 0x2a9);
  puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar8 = 0xa7d;
  *(undefined1 *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar17 + 0x2a9;
  FUN_1806277c0(param_2,iVar17 + 0x2b0);
  *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar17 + 0x2b0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



