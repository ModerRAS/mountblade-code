#include "TaleWorlds.Native.Split.h"

// 03_rendering_part125.c - 4 个函数

// 函数: void FUN_180340b00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)
void FUN_180340b00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  uVar12 = 0;
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
  iVar9 = *(int *)(param_2 + 0x10);
  FUN_1806277c0(param_2,iVar9 + 0x11);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x20666923;
  puVar6[1] = 0x45584950;
  puVar6[2] = 0x48535f4c;
  puVar6[3] = 0x52454441;
  *(undefined2 *)(puVar6 + 4) = 10;
  *(int *)(param_2 + 0x10) = iVar9 + 0x11;
  FUN_1806277c0(param_2,iVar9 + 0x1e);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x69616d2064696f76;
  *(undefined4 *)(puVar7 + 1) = 0x73705f6e;
  *(undefined2 *)((longlong)puVar7 + 0xc) = 0x28;
  *(int *)(param_2 + 0x10) = iVar9 + 0x1e;
  FUN_1806277c0(param_2,iVar9 + 0x35);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar5 + 4);
  *(int *)(param_2 + 0x10) = iVar9 + 0x35;
  FUN_1806277c0(param_2,iVar9 + 0x3a);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x296e4920;
  *(undefined2 *)(puVar6 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar9 + 0x3a;
  FUN_1806277c0(param_2,iVar9 + 0x3c);
  puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar8 = 0xa7b;
  *(undefined1 *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x3c;
  FUN_1806277c0(param_2,iVar9 + 0x83);
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
  *(int *)(param_2 + 0x10) = iVar9 + 0x83;
  FUN_1806277c0(param_2,iVar9 + 0xd7);
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
  *(int *)(param_2 + 0x10) = iVar9 + 0xd7;
  FUN_1806277c0(param_2,iVar9 + 0x122);
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
  *(int *)(param_2 + 0x10) = iVar9 + 0x122;
  iVar9 = iVar9 + 0x159;
  FUN_1806277c0(param_2,iVar9);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x616c75636c616309;
  puVar7[1] = 0x705f7265705f6574;
  puVar7[2] = 0x6174735f6c657869;
  puVar7[3] = 0x697261765f636974;
  *(undefined4 *)(puVar7 + 4) = 0x656c6261;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x6e492873;
  *(undefined4 *)(puVar7 + 5) = 0x7070202c;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x6174735f;
  puVar7[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = iVar9;
  puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490));
  uVar14 = uVar12;
  if ((longlong)puVar7 / 0x98 + ((longlong)puVar7 >> 0x3f) != (longlong)puVar7 >> 0x3f) {
    do {
      iVar10 = iVar9 + 1;
      FUN_1806277c0(param_2,iVar10);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar10;
      lVar1 = *(longlong *)(param_3 + 0x490);
      iVar11 = *(int *)(lVar1 + 0x10 + uVar12);
      if (0 < iVar11) {
        FUN_1806277c0(param_2,iVar10 + iVar11);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
               *(undefined8 *)(lVar1 + 8 + uVar12),(longlong)(*(int *)(lVar1 + 0x10 + uVar12) + 1));
      }
      iVar9 = iVar9 + 7;
      FUN_1806277c0(param_2,iVar9);
      puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar6 = 0x296e4928;
      *(undefined2 *)(puVar6 + 1) = 0xa3b;
      *(undefined1 *)((longlong)puVar6 + 6) = 0;
      *(int *)(param_2 + 0x10) = iVar9;
      uVar13 = (int)uVar14 + 1;
      uVar12 = uVar12 + 0x98;
      puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490));
      uVar14 = (ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)((longlong)puVar7 / 0x98));
  }
  if (*(int *)(param_3 + 0xa40) != 0) {
    iVar11 = iVar9 + 1;
    FUN_1806277c0(param_2,iVar11);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar11;
    if (0 < *(int *)(param_3 + 0xa40)) {
      FUN_1806277c0(param_2,iVar11 + *(int *)(param_3 + 0xa40));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
             *(undefined8 *)(param_3 + 0xa38),(longlong)(*(int *)(param_3 + 0xa40) + 1));
    }
    iVar9 = iVar9 + 0x2b;
    FUN_1806277c0(param_2,iVar9);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7070202c206e4928;
    puVar7[1] = 0x206369746174735f;
    puVar7[2] = 0x646f6d5f7070202c;
    puVar7[3] = 0x2c656c6261696669;
    puVar7[4] = 0x297875615f707020;
    *(undefined2 *)(puVar7 + 5) = 0xa3b;
    *(undefined1 *)((longlong)puVar7 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar9;
  }
  if (*(int *)(param_3 + 0xad8) != 0) {
    iVar11 = iVar9 + 1;
    FUN_1806277c0(param_2,iVar11);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar11;
    if (0 < *(int *)(param_3 + 0xad8)) {
      FUN_1806277c0(param_2,iVar11 + *(int *)(param_3 + 0xad8));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
             *(undefined8 *)(param_3 + 0xad0),(longlong)(*(int *)(param_3 + 0xad8) + 1));
    }
    FUN_1806277c0(param_2,iVar9 + 0x2b);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7070202c206e4928;
    puVar7[1] = 0x206369746174735f;
    puVar7[2] = 0x646f6d5f7070202c;
    puVar7[3] = 0x2c656c6261696669;
    puVar7[4] = 0x297875615f707020;
    *(undefined2 *)(puVar7 + 5) = 0xa3b;
    *(undefined1 *)((longlong)puVar7 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x2b;
  }
  FUN_180344f00(puVar7,param_2,param_3);
  iVar9 = *(int *)(param_2 + 0x10);
  iVar11 = iVar9 + 2;
  FUN_1806277c0(param_2,iVar11);
  puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar8 = 0xa7d;
  *(undefined1 *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar11;
  iVar9 = iVar9 + 9;
  FUN_1806277c0(param_2,iVar9);
  *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar9;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180341100(undefined8 param_1,longlong param_2,undefined8 param_3)
void FUN_180341100(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  FUN_18033ffe0(param_1,&puStack_88);
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
  iVar5 = *(int *)(param_2 + 0x10) + 10;
  FUN_1806277c0(param_2,iVar5);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x6d776f646168735f;
  *(undefined2 *)(puVar2 + 1) = 0x7061;
  *(undefined1 *)((longlong)puVar2 + 10) = 0;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180341380(undefined8 param_1,longlong param_2,undefined8 param_3)
void FUN_180341380(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  FUN_1803400b0(param_1,&puStack_88);
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
  iVar5 = *(int *)(param_2 + 0x10) + 0xb;
  FUN_1806277c0(param_2,iVar5);
  puVar2 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar2 = 0x696c746e696f705f;
  *(undefined4 *)(puVar2 + 1) = 0x746867;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803415f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)
void FUN_1803415f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
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
  iVar10 = *(int *)(param_2 + 0x10);
  FUN_1806277c0(param_2,iVar10 + 0x11);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x20666923;
  puVar6[1] = 0x45584950;
  puVar6[2] = 0x48535f4c;
  puVar6[3] = 0x52454441;
  *(undefined2 *)(puVar6 + 4) = 10;
  *(int *)(param_2 + 0x10) = iVar10 + 0x11;
  FUN_1806277c0(param_2,iVar10 + 0x1e);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x69616d2064696f76;
  *(undefined4 *)(puVar7 + 1) = 0x73705f6e;
  *(undefined2 *)((longlong)puVar7 + 0xc) = 0x28;
  *(int *)(param_2 + 0x10) = iVar10 + 0x1e;
  FUN_1806277c0(param_2,iVar10 + 0x35);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar5 + 4);
  *(int *)(param_2 + 0x10) = iVar10 + 0x35;
  FUN_1806277c0(param_2,iVar10 + 0x3a);
  puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar6 = 0x296e4920;
  *(undefined2 *)(puVar6 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar10 + 0x3a;
  FUN_1806277c0(param_2,iVar10 + 0x3c);
  puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar8 = 0xa7b;
  *(undefined1 *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x3c;
  FUN_1806277c0(param_2,iVar10 + 0x83);
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
  *(int *)(param_2 + 0x10) = iVar10 + 0x83;
  FUN_1806277c0(param_2,iVar10 + 0xd7);
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
  *(int *)(param_2 + 0x10) = iVar10 + 0xd7;
  FUN_1806277c0(param_2,iVar10 + 0x122);
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
  *(int *)(param_2 + 0x10) = iVar10 + 0x122;
  iVar10 = iVar10 + 0x159;
  FUN_1806277c0(param_2,iVar10);
  puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar7 = 0x616c75636c616309;
  puVar7[1] = 0x705f7265705f6574;
  puVar7[2] = 0x6174735f6c657869;
  puVar7[3] = 0x697261765f636974;
  *(undefined4 *)(puVar7 + 4) = 0x656c6261;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0x6e492873;
  *(undefined4 *)(puVar7 + 5) = 0x7070202c;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x6174735f;
  puVar7[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = iVar10;
  lVar9 = *(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490);
  lVar1 = lVar9 >> 0x3f;
  uVar15 = uVar13;
  if (lVar9 / 0x98 + lVar1 != lVar1) {
    do {
      iVar11 = iVar10 + 1;
      FUN_1806277c0(param_2,iVar11);
      *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar11;
      lVar1 = *(longlong *)(param_3 + 0x490);
      iVar12 = *(int *)(lVar1 + 0x10 + uVar13);
      if (0 < iVar12) {
        FUN_1806277c0(param_2,iVar11 + iVar12);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
               *(undefined8 *)(lVar1 + 8 + uVar13),(longlong)(*(int *)(lVar1 + 0x10 + uVar13) + 1));
      }
      iVar10 = iVar10 + 7;
      FUN_1806277c0(param_2,iVar10);
      puVar6 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *puVar6 = 0x296e4928;
      *(undefined2 *)(puVar6 + 1) = 0xa3b;
      *(undefined1 *)((longlong)puVar6 + 6) = 0;
      *(int *)(param_2 + 0x10) = iVar10;
      uVar14 = (int)uVar15 + 1;
      uVar13 = uVar13 + 0x98;
      uVar15 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)((*(longlong *)(param_3 + 0x498) - *(longlong *)(param_3 + 0x490)) / 0x98));
  }
  if (*(int *)(param_3 + 0xa40) != 0) {
    iVar12 = iVar10 + 1;
    FUN_1806277c0(param_2,iVar12);
    *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar12;
    if (0 < *(int *)(param_3 + 0xa40)) {
      FUN_1806277c0(param_2,iVar12 + *(int *)(param_3 + 0xa40));
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
             *(undefined8 *)(param_3 + 0xa38),(longlong)(*(int *)(param_3 + 0xa40) + 1));
    }
    iVar10 = iVar10 + 0x2b;
    FUN_1806277c0(param_2,iVar10);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7070202c206e4928;
    puVar7[1] = 0x206369746174735f;
    puVar7[2] = 0x646f6d5f7070202c;
    puVar7[3] = 0x2c656c6261696669;
    puVar7[4] = 0x297875615f707020;
    *(undefined2 *)(puVar7 + 5) = 0xa3b;
    *(undefined1 *)((longlong)puVar7 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar10;
  }
  iVar12 = iVar10 + 1;
  FUN_1806277c0(param_2,iVar12);
  *(undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) = 9;
  *(int *)(param_2 + 0x10) = iVar12;
  if (*(int *)(param_3 + 0xad8) < 1) {
    FUN_1806277c0(param_2,iVar10 + 0x2b);
    puVar7 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar7 = 0x7070202c206e4928;
    puVar7[1] = 0x206369746174735f;
    *(undefined4 *)(puVar7 + 2) = 0x7070202c;
    *(undefined4 *)((longlong)puVar7 + 0x14) = 0x646f6d5f;
    *(undefined4 *)(puVar7 + 3) = 0x61696669;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x2c656c62;
    puVar7[4] = 0x297875615f707020;
    *(undefined2 *)(puVar7 + 5) = 0xa3b;
    *(undefined1 *)((longlong)puVar7 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar10 + 0x2b;
    FUN_180344f00(puVar7,param_2,param_3);
    iVar10 = *(int *)(param_2 + 0x10);
    iVar12 = iVar10 + 2;
    FUN_1806277c0(param_2,iVar12);
    puVar8 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar8 = 0xa7d;
    *(undefined1 *)(puVar8 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar12;
    iVar10 = iVar10 + 9;
    FUN_1806277c0(param_2,iVar10);
    *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
         0xa6669646e6523;
    *(int *)(param_2 + 0x10) = iVar10;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar5);
  }
  FUN_1806277c0(param_2,iVar12 + *(int *)(param_3 + 0xad8));
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),
         *(undefined8 *)(param_3 + 0xad0),(longlong)(*(int *)(param_3 + 0xad8) + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



