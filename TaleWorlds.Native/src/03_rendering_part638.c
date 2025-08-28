#include "TaleWorlds.Native.Split.h"

// 03_rendering_part638.c - 17 个函数

// 函数: void FUN_1806240a0(undefined8 *param_1)
void FUN_1806240a0(undefined8 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_3f8 [32];
  undefined1 *puStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined1 auStack_378 [288];
  undefined1 auStack_258 [560];
  ulonglong uStack_28;
  
  uStack_390 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_3f8;
  uStack_3b8 = 0;
  puStack_388 = param_1;
  iVar1 = GetModuleFileNameW(0,auStack_258,0x118);
  if (iVar1 == 0) {
    *param_1 = &UNK_18098bcb0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = &UNK_1809feda8;
    param_1[1] = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    strcpy_s(param_1[1],0x100,&DAT_18098bc73);
    uStack_3b8 = 1;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_3f8);
  }
  puVar2 = (undefined2 *)wcsrchr(auStack_258,0x5c);
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)wcsrchr(auStack_258,0x5c);
    if (puVar2 == (undefined2 *)0x0) goto LAB_180624138;
  }
  *puVar2 = 0;
LAB_180624138:
  puStack_3b0 = &UNK_180a3c3e0;
  uStack_398 = 0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0x118;
  puStack_3d8 = auStack_378;
  iVar1 = WideCharToMultiByte(0xfde9,0,auStack_258,0xffffffff);
  FUN_1806277c0(&puStack_3b0,iVar1);
                    // WARNING: Subroutine does not return
  memcpy(uStack_3a8,auStack_378,(longlong)iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806242f0(undefined8 *param_1)
void FUN_1806242f0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_298 [32];
  undefined1 *puStack_278;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined1 auStack_248 [560];
  ulonglong uStack_18;
  
  uStack_260 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  uStack_268 = 0;
  puStack_278 = auStack_248;
  puStack_258 = param_1;
  SHGetFolderPathW(0,0x23,0,0);
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uStack_268 = 1;
  FUN_180628e80(param_1,auStack_248);
  iVar1 = *(int *)(param_1 + 2);
  FUN_1806277c0(param_1,iVar1 + 1);
  *(undefined2 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]) = 0x2f;
  *(int *)(param_1 + 2) = iVar1 + 1;
  FUN_1806277c0(param_1,iVar1 + 0x1e);
  puVar4 = (undefined4 *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
  *puVar4 = 0x6e756f4d;
  puVar4[1] = 0x6e612074;
  puVar4[2] = 0x6c422064;
  puVar4[3] = 0x20656461;
  *(undefined8 *)(puVar4 + 4) = 0x656e6e6142204949;
  puVar4[6] = 0x726f6c72;
  *(undefined2 *)(puVar4 + 7) = 100;
  *(int *)(param_1 + 2) = iVar1 + 0x1e;
  FUN_1806277c0(param_1,iVar1 + 0x1f);
  uVar2 = *(uint *)(param_1 + 2);
  lVar3 = param_1[1];
  *(undefined2 *)((ulonglong)uVar2 + lVar3) = 0x2f;
  *(int *)(param_1 + 2) = iVar1 + 0x1f;
  FUN_18062c1e0(param_1,CONCAT71((int7)((ulonglong)uVar2 + lVar3 >> 8),1));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624440(undefined8 param_1)
void FUN_180624440(undefined8 param_1)

{
  undefined1 auStack_2f8 [32];
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [312];
  undefined1 auStack_168 [288];
  ulonglong uStack_48;
  
  uStack_2d0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_2f8;
  uStack_2d8 = 0;
  puStack_2b8 = &UNK_1809fdc18;
  puStack_2b0 = auStack_2a0;
  auStack_2a0[0] = 0;
  uStack_2a8 = 6;
  uStack_2c8 = param_1;
  strcpy_s(auStack_2a0,0x10,&UNK_180a3c07c);
  uStack_2d8 = 0;
  puStack_2b8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  memset(auStack_168,0,0x118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624730(longlong param_1)
void FUN_180624730(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_d08 [32];
  undefined **ppuStack_ce8;
  undefined4 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined *puStack_cc8;
  undefined8 uStack_cc0;
  undefined4 uStack_cb8;
  undefined8 uStack_cb0;
  undefined4 uStack_ca8;
  undefined8 uStack_ca0;
  longlong lStack_c98;
  undefined *apuStack_c88 [68];
  undefined1 auStack_a68 [560];
  undefined1 auStack_838 [2048];
  ulonglong uStack_38;
  
  uStack_ca0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d08;
  uStack_ca8 = 0;
  lStack_c98 = param_1;
  uVar2 = FUN_180624440(apuStack_c88);
  FUN_180068ff0(param_1,uVar2);
  uStack_ca8 = 1;
  apuStack_c88[0] = &UNK_18098bcb0;
  uStack_ce0 = 0x118;
  ppuStack_ce8 = (undefined **)auStack_a68;
  MultiByteToWideChar(0xfde9,0,*(undefined8 *)(param_1 + 8),0xffffffff);
  GetFullPathNameW(auStack_a68,0x400,auStack_838,0);
  puStack_cc8 = &UNK_180a3c3e0;
  uStack_cb0 = 0;
  uStack_cc0 = 0;
  uStack_cb8 = 0;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_ce0 = 0x118;
  ppuStack_ce8 = apuStack_c88;
  iVar1 = WideCharToMultiByte(0xfde9,0,auStack_838,0xffffffff);
  FUN_1806277c0(&puStack_cc8,iVar1);
                    // WARNING: Subroutine does not return
  memcpy(uStack_cc0,apuStack_c88,(longlong)iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624910(undefined8 param_1)
void FUN_180624910(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_4c8 [32];
  undefined1 *puStack_4a8;
  undefined4 uStack_4a0;
  undefined *puStack_498;
  longlong lStack_490;
  undefined4 uStack_480;
  undefined8 uStack_478;
  undefined *apuStack_468 [68];
  undefined1 auStack_248 [560];
  ulonglong uStack_18;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_4c8;
  uVar1 = FUN_180624440(apuStack_468,param_1);
  FUN_1806279c0(&puStack_498,uVar1);
  apuStack_468[0] = &UNK_18098bcb0;
  uStack_4a0 = 0x118;
  puStack_4a8 = auStack_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  CreateDirectoryW(auStack_248,0);
  puStack_498 = &UNK_180a3c3e0;
  if (lStack_490 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_490 = 0;
  uStack_480 = 0;
  puStack_498 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_4c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624a00(undefined8 param_1)
void FUN_180624a00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_4c8 [32];
  undefined1 *puStack_4a8;
  undefined4 uStack_4a0;
  undefined *puStack_498;
  longlong lStack_490;
  undefined4 uStack_480;
  undefined8 uStack_478;
  undefined *apuStack_468 [68];
  undefined1 auStack_248 [560];
  ulonglong uStack_18;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_4c8;
  uVar1 = FUN_180624440(apuStack_468,param_1);
  FUN_1806279c0(&puStack_498,uVar1);
  apuStack_468[0] = &UNK_18098bcb0;
  uStack_4a0 = 0x118;
  puStack_4a8 = auStack_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  GetFileAttributesW(auStack_248);
  puStack_498 = &UNK_180a3c3e0;
  if (lStack_490 == 0) {
    lStack_490 = 0;
    uStack_480 = 0;
    puStack_498 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_4c8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624af0(undefined8 param_1)
void FUN_180624af0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_4c8 [32];
  undefined1 *puStack_4a8;
  undefined4 uStack_4a0;
  undefined *puStack_498;
  longlong lStack_490;
  undefined4 uStack_480;
  undefined8 uStack_478;
  undefined *apuStack_468 [68];
  undefined1 auStack_248 [560];
  ulonglong uStack_18;
  
  uStack_478 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_4c8;
  uVar1 = FUN_180624440(apuStack_468,param_1);
  FUN_1806279c0(&puStack_498,uVar1);
  apuStack_468[0] = &UNK_18098bcb0;
  uStack_4a0 = 0x118;
  puStack_4a8 = auStack_248;
  MultiByteToWideChar(0xfde9,0,lStack_490,0xffffffff);
  GetFileAttributesW(auStack_248);
  puStack_498 = &UNK_180a3c3e0;
  if (lStack_490 == 0) {
    lStack_490 = 0;
    uStack_480 = 0;
    puStack_498 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_4c8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624be0(longlong *param_1)
void FUN_180624be0(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  uint auStack_28 [2];
  undefined1 auStack_20 [16];
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_48;
  auStack_28[0] = 0x10;
  iVar2 = GetComputerNameA(auStack_20,auStack_28);
  if (iVar2 == 0) {
    FUN_180627160(&UNK_180a3c110);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_48);
  }
  if ((ulonglong)auStack_28[0] < 0x10) {
    auStack_20[auStack_28[0]] = 0;
    (**(code **)(*param_1 + 0x10))(param_1,auStack_20);
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_48);
  }
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180624c70(undefined8 param_1,longlong param_2)
void FUN_180624c70(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  uint uVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined1 auStack_258 [32];
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_218;
  undefined1 *puStack_210;
  uint uStack_208;
  undefined1 auStack_200 [72];
  undefined *puStack_1b8;
  uint *puStack_1b0;
  uint uStack_1a8;
  uint auStack_1a0 [6];
  undefined *puStack_188;
  undefined *puStack_180;
  uint uStack_178;
  undefined auStack_170 [136];
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined4 uStack_d8;
  undefined auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_230 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  uVar7 = 0;
  uStack_238 = 0;
  uStack_228 = param_1;
  if (*(int *)(param_2 + 0x10) == 0) {
    FUN_180627ae0();
  }
  else {
    puStack_1b8 = &UNK_1809fdc18;
    puStack_1b0 = auStack_1a0;
    auStack_1a0[0] = auStack_1a0[0] & 0xffffff00;
    uStack_1a8 = 6;
    strcpy_s(auStack_1a0,0x10,&UNK_180a3c07c);
    if (*(uint *)(param_2 + 0x10) < uStack_1a8) {
LAB_180624d38:
      bVar1 = false;
    }
    else {
      if (uStack_1a8 != 0) {
        pcVar6 = *(char **)(param_2 + 8);
        lVar3 = (longlong)puStack_1b0 - (longlong)pcVar6;
        do {
          if (*pcVar6 != pcVar6[lVar3]) goto LAB_180624d38;
          uVar7 = uVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (uVar7 < uStack_1a8);
      }
      bVar1 = true;
    }
    uStack_238 = 0;
    puStack_1b8 = &UNK_18098bcb0;
    if (bVar1) {
      FUN_180627ae0(param_1,param_2);
    }
    else {
      puStack_218 = &UNK_1809fcc58;
      puStack_210 = auStack_200;
      auStack_200[0] = 0;
      uStack_208 = 6;
      strcpy_s(auStack_200,0x40,&UNK_180a3c130);
      iVar2 = FUN_180628d60(param_2,&puStack_218);
      if (iVar2 < 0) {
        (**(code **)(puStack_218 + 0x10))(&puStack_218,&UNK_180a3c0e8);
        iVar2 = FUN_180628d60(param_2,&puStack_218);
        if (iVar2 < 0) {
          puStack_188 = &UNK_1809fcc58;
          puStack_180 = auStack_170;
          auStack_170[0] = 0;
          uStack_178 = 8;
          strcpy_s(auStack_170,0x40,&UNK_180a3c0d8);
          uStack_208 = uStack_178;
          puVar8 = &DAT_18098bc73;
          if (puStack_180 != (undefined *)0x0) {
            puVar8 = puStack_180;
          }
          strcpy_s(puStack_210,0x40,puVar8);
          puStack_188 = &UNK_18098bcb0;
          iVar2 = FUN_180628d60(param_2,&puStack_218);
          if (iVar2 < 0) {
            FUN_180627ae0(param_1,param_2);
          }
          else {
            lVar3 = FUN_180629a40(param_2,&puStack_1b8,uStack_208 + iVar2,
                                  *(undefined4 *)(param_2 + 0x10));
            puStack_e8 = &UNK_1809fcc28;
            puStack_e0 = auStack_d0;
            auStack_d0[0] = 0;
            uStack_d8 = *(undefined4 *)(lVar3 + 0x10);
            puVar8 = &DAT_18098bc73;
            if (*(undefined **)(lVar3 + 8) != (undefined *)0x0) {
              puVar8 = *(undefined **)(lVar3 + 8);
            }
            strcpy_s(auStack_d0,0x80,puVar8);
            puStack_1b8 = &UNK_180a3c3e0;
            if (puStack_1b0 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puStack_1b0 = (uint *)0x0;
            auStack_1a0[0] = 0;
            puStack_1b8 = &UNK_18098bcb0;
            uVar4 = FUN_180624030(&puStack_1b8);
            FUN_180049b30(&puStack_188,uVar4);
            puStack_1b8 = &UNK_18098bcb0;
            puVar8 = &DAT_18098bc73;
            if (puStack_e0 != (undefined *)0x0) {
              puVar8 = puStack_e0;
            }
            lVar3 = -1;
            do {
              lVar5 = lVar3;
              lVar3 = lVar5 + 1;
            } while (puVar8[lVar3] != '\0');
            if ((0 < (int)lVar3) && (uStack_178 + (int)lVar3 < 0x7f)) {
                    // WARNING: Subroutine does not return
              memcpy(puStack_180 + uStack_178,puVar8,(longlong)((int)lVar5 + 2));
            }
            FUN_1806279c0(param_1,&puStack_188);
            puStack_188 = &UNK_18098bcb0;
            puStack_e8 = &UNK_18098bcb0;
          }
        }
        else {
          lVar3 = FUN_180629a40(param_2,&puStack_1b8,uStack_208 + iVar2,
                                *(undefined4 *)(param_2 + 0x10));
          puStack_e8 = &UNK_1809fcc28;
          puStack_e0 = auStack_d0;
          auStack_d0[0] = 0;
          uStack_d8 = *(undefined4 *)(lVar3 + 0x10);
          puVar8 = &DAT_18098bc73;
          if (*(undefined **)(lVar3 + 8) != (undefined *)0x0) {
            puVar8 = *(undefined **)(lVar3 + 8);
          }
          strcpy_s(auStack_d0,0x80,puVar8);
          puStack_1b8 = &UNK_180a3c3e0;
          if (puStack_1b0 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_1b0 = (uint *)0x0;
          auStack_1a0[0] = 0;
          puStack_1b8 = &UNK_18098bcb0;
          uVar4 = FUN_180624030(&puStack_1b8);
          FUN_180049b30(&puStack_188,uVar4);
          puStack_1b8 = &UNK_18098bcb0;
          puVar8 = &DAT_18098bc73;
          if (puStack_e0 != (undefined *)0x0) {
            puVar8 = puStack_e0;
          }
          lVar3 = -1;
          do {
            lVar5 = lVar3;
            lVar3 = lVar5 + 1;
          } while (puVar8[lVar3] != '\0');
          if ((0 < (int)lVar3) && (uStack_178 + (int)lVar3 < 0x7f)) {
                    // WARNING: Subroutine does not return
            memcpy(puStack_180 + uStack_178,puVar8,(longlong)((int)lVar5 + 2));
          }
          FUN_1806279c0(param_1,&puStack_188);
          puStack_188 = &UNK_18098bcb0;
          puStack_e8 = &UNK_18098bcb0;
        }
      }
      else {
        lVar3 = FUN_180629a40(param_2,&puStack_1b8,uStack_208 + iVar2,
                              *(undefined4 *)(param_2 + 0x10));
        puStack_e8 = &UNK_1809fcc28;
        puStack_e0 = auStack_d0;
        auStack_d0[0] = 0;
        uStack_d8 = *(undefined4 *)(lVar3 + 0x10);
        puVar8 = &DAT_18098bc73;
        if (*(undefined **)(lVar3 + 8) != (undefined *)0x0) {
          puVar8 = *(undefined **)(lVar3 + 8);
        }
        strcpy_s(auStack_d0,0x80,puVar8);
        puStack_1b8 = &UNK_180a3c3e0;
        if (puStack_1b0 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_1b8 = &UNK_1809fdc18;
        puStack_1b0 = auStack_1a0;
        auStack_1a0[0] = 0;
        uStack_1a8 = 6;
        strcpy_s(auStack_1a0,0x10,&UNK_180a3c07c);
        uStack_238 = 4;
        puStack_188 = &UNK_1809fcc28;
        puStack_180 = auStack_170;
        auStack_170[0] = 0;
        uStack_178 = uStack_1a8;
        puVar9 = (uint *)&DAT_18098bc73;
        if (puStack_1b0 != (uint *)0x0) {
          puVar9 = puStack_1b0;
        }
        strcpy_s(auStack_170,0x80,puVar9);
        uStack_238 = 0;
        puStack_1b8 = &UNK_18098bcb0;
        puVar8 = &DAT_18098bc73;
        if (puStack_e0 != (undefined *)0x0) {
          puVar8 = puStack_e0;
        }
        lVar3 = -1;
        do {
          lVar5 = lVar3;
          lVar3 = lVar5 + 1;
        } while (puVar8[lVar3] != '\0');
        if ((0 < (int)lVar3) && (uStack_178 + (int)lVar3 < 0x7f)) {
                    // WARNING: Subroutine does not return
          memcpy(puStack_180 + uStack_178,puVar8,(longlong)((int)lVar5 + 2));
        }
        FUN_1806279c0(param_1,&puStack_188);
        puStack_188 = &UNK_18098bcb0;
        puStack_e8 = &UNK_18098bcb0;
      }
      puStack_218 = &UNK_18098bcb0;
    }
  }
  uStack_238 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_258);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806252c0(undefined4 *param_1)
void FUN_1806252c0(undefined4 *param_1)

{
  undefined1 auStack_cf8 [224];
  undefined1 auStack_c18 [3072];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_cf8;
  *param_1 = 0xffffffff;
                    // WARNING: Subroutine does not return
  memset(auStack_c18,0,0x400);
}





// 函数: void FUN_180625330(undefined8 param_1,longlong param_2)
void FUN_180625330(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong unaff_RBX;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = FUN_180060680(&stack0x000004e0 + iVar2,&UNK_180a3c108,param_2);
      param_2 = *(longlong *)(unaff_RBX + 8);
      unaff_RBX = unaff_RBX + 8;
      iVar2 = iVar2 + iVar1;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  memset(&stack0x000008e0,0,0x400);
}





// 函数: void FUN_180625374(void)
void FUN_180625374(void)

{
                    // WARNING: Subroutine does not return
  memset(&stack0x000008e0,0,0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_180625470(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar11;
  undefined4 uStack_60;
  longlong lStack_5c;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined *puStack_48;
  uint uStack_40;
  undefined8 uStack_38;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_1806277c0(&puStack_50,*(int *)(param_1 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_48 + uStack_40,*(undefined8 *)(param_1 + 8),
           (longlong)(*(int *)(param_1 + 0x10) + 1));
  }
  FUN_1806277c0(&puStack_50,9);
  *(undefined8 *)(puStack_48 + uStack_40) = 0x6d642e706d75642f;
  *(undefined2 *)((longlong)(puStack_48 + uStack_40) + 8) = 0x70;
  uStack_40 = 9;
  if (param_2 != 0) {
    uVar1 = GetCurrentThreadId();
    uVar2 = GetCurrentProcessId();
    uVar5 = OpenProcess(0x450,0,uVar2);
    puVar7 = &DAT_18098bc73;
    if (puStack_48 != (undefined *)0x0) {
      puVar7 = puStack_48;
    }
    lVar6 = CreateFileA(puVar7,0xc0000000,0,0,CONCAT44(uVar8,2),CONCAT44(uVar11,0x80),0);
    if (lVar6 - 1U < 0xfffffffffffffffe) {
      uStack_54 = 0;
      uVar8 = 0xe9975;
      if (DAT_180c8ecec != '\0') {
        uVar8 = 0xe9977;
      }
      lVar9 = _DAT_180c8ed10 + 8;
      uStack_60 = uVar1;
      lStack_5c = param_2;
      iVar3 = _Mtx_lock(lVar9);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      iVar3 = MiniDumpWriteDump(uVar5,uVar2,lVar6,uVar8,&uStack_60,0,0);
      iVar4 = _Mtx_unlock(lVar9);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      CloseHandle(uVar5);
      CloseHandle(lVar6);
      bVar10 = iVar3 == 1;
      goto LAB_180625640;
    }
  }
  bVar10 = false;
LAB_180625640:
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return bVar10;
}





// 函数: void FUN_180625690(void)
void FUN_180625690(void)

{
  RaiseException(0xdeadface,0,0,0);
  Sleep(1000);
  return;
}



undefined8 * FUN_1806256c0(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar6 = 1;
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    piVar3 = (int *)(param_2 + 0x10);
    do {
      iVar5 = *(int *)(param_1 + 2) + 4;
      FUN_1806277c0(param_1,iVar5);
      uVar1 = *(uint *)(param_1 + 2);
      lVar2 = param_1[1];
      *(undefined4 *)((ulonglong)uVar1 + lVar2) = 0x23575423;
      *(undefined1 *)((undefined4 *)((ulonglong)uVar1 + lVar2) + 1) = 0;
      *(int *)(param_1 + 2) = iVar5;
      if (0 < *piVar3) {
        FUN_1806277c0(param_1,iVar5 + *piVar3);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_1 + 2) + param_1[1],*(undefined8 *)(piVar3 + -2),
               (longlong)(*piVar3 + 1),param_4,uVar6,uVar7);
      }
      piVar3 = piVar3 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806257b0(undefined8 *param_1)
void FUN_1806257b0(undefined8 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined1 auStack_4e8 [32];
  undefined *puStack_4c8;
  undefined4 *puStack_4c0;
  undefined *puStack_4b8;
  undefined4 *puStack_4b0;
  undefined4 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 auStack_498 [8];
  undefined *puStack_490;
  undefined *puStack_488;
  undefined4 uStack_478;
  undefined8 uStack_470;
  undefined4 *puStack_468;
  undefined1 *puStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined2 uStack_43c;
  undefined1 auStack_438 [1024];
  ulonglong uStack_38;
  
  cVar1 = DAT_180c82840;
  uStack_470 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_4e8;
  *param_1 = &UNK_180a3c268;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar2 = GetCurrentProcessId();
  puStack_4b8 = &UNK_180a3c3e0;
  uStack_4a0 = 0;
  puStack_4b0 = (undefined4 *)0x0;
  uStack_4a8 = 0;
  puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_4b0 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar3);
  *puVar5 = 0x2e5c2e2e;
  puVar5[1] = 0x2e2e5c2e;
  puVar5[2] = 0x6f6f545c;
  puVar5[3] = 0x435c736c;
  *(undefined2 *)(puVar5 + 4) = 0x4244;
  *(undefined1 *)((longlong)puVar5 + 0x12) = 0;
  uStack_4a8 = 0x12;
  FUN_1806242f0(&puStack_490);
  puVar6 = &UNK_180a3c170;
  if (cVar1 == '\0') {
    puVar6 = &UNK_180a3c1f0;
  }
  puStack_4c8 = &DAT_18098bc73;
  if (puStack_488 != (undefined *)0x0) {
    puStack_4c8 = puStack_488;
  }
  puStack_4c0 = puVar5;
  FUN_180626a10(auStack_438,puVar6,uVar2);
  uStack_450 = 0x63746157;
  uStack_44c = 0x676f6468;
  uStack_448 = 0x7461575c;
  uStack_444 = 0x6f646863;
  uStack_440 = 0x78652e67;
  uStack_43c = 0x65;
  puStack_468 = &uStack_450;
  puStack_460 = auStack_438;
  uStack_458 = 0;
  puStack_4c0 = (undefined4 *)((ulonglong)puStack_4c0 & 0xffffffffffffff00);
  iVar4 = FUN_1806252c0(auStack_498);
  if (0 < iVar4) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  puStack_490 = &UNK_180a3c3e0;
  if (puStack_488 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_488 = (undefined *)0x0;
  uStack_478 = 0;
  puStack_490 = &UNK_18098bcb0;
  puStack_4b8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806259b0(longlong param_1,undefined4 param_2)
void FUN_1806259b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  undefined *puStack_60;
  uint uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  char acStack_40 [32];
  ulonglong uStack_20;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  FUN_180627910(&puStack_68,&DAT_180a3c230);
  uVar3 = uStack_58 + 3;
  FUN_1806277c0(&puStack_68,uVar3);
  *(undefined4 *)(puStack_60 + uStack_58) = 0x64742d;
  uStack_58 = uVar3;
  FUN_180626eb0(acStack_40,0x20,&UNK_180a3c39c,param_2);
  lVar1 = -1;
  do {
    lVar5 = lVar1;
    lVar1 = lVar5 + 1;
  } while (acStack_40[lVar5 + 1] != '\0');
  iVar4 = (int)(lVar5 + 1);
  if (0 < iVar4) {
    FUN_1806277c0(&puStack_68,uStack_58 + iVar4);
                    // WARNING: Subroutine does not return
    memcpy(puStack_60 + uStack_58,acStack_40,(longlong)((int)lVar5 + 2));
  }
  uVar3 = uStack_58 + 2;
  FUN_1806277c0(&puStack_68,uVar3);
  *(undefined2 *)(puStack_60 + uStack_58) = 0x2d2d;
  *(undefined1 *)((longlong)(puStack_60 + uStack_58) + 2) = 0;
  uStack_58 = uVar3;
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_1806277c0(&puStack_68,*(int *)(param_1 + 0x10) + uVar3);
                    // WARNING: Subroutine does not return
    memcpy(puStack_60 + uStack_58,*(undefined8 *)(param_1 + 8),
           (longlong)(*(int *)(param_1 + 0x10) + 1));
  }
  puVar2 = &DAT_18098bc73;
  if (puStack_60 != (undefined *)0x0) {
    puVar2 = puStack_60;
  }
  OutputDebugStringA(puVar2);
  puStack_68 = &UNK_180a3c3e0;
  if (puStack_60 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  puStack_68 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_88);
}





// 函数: void FUN_180625b30(undefined8 param_1,undefined8 param_2,undefined4 param_3)
void FUN_180625b30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puStack_30;
  longlong lStack_28;
  
  FUN_1806279c0(&puStack_30);
  FUN_1806259b0(&puStack_30,param_3);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_180625ba0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)
void FUN_180625ba0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  uint uStack_20;
  
  FUN_180627910(&puStack_30,&DAT_180a3c230,param_3,param_4,0xfffffffffffffffe);
  uVar3 = uStack_20;
  uVar2 = uStack_20 + 3;
  FUN_1806277c0(&puStack_30,uVar2);
  *(undefined4 *)(puStack_28 + uStack_20) = 0x72672d;
  uStack_20 = uVar2;
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(&puStack_30,uVar2 + *(int *)(param_2 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_28 + uStack_20,*(undefined8 *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1));
  }
  uVar3 = uVar3 + 7;
  FUN_1806277c0(&puStack_30,uVar3);
  *(undefined4 *)(puStack_28 + uStack_20) = 0x23575423;
  *(undefined1 *)((longlong)(puStack_28 + uStack_20) + 4) = 0;
  uStack_20 = uVar3;
  if (0 < *(int *)(param_3 + 0x10)) {
    FUN_1806277c0(&puStack_30,uVar3 + *(int *)(param_3 + 0x10));
                    // WARNING: Subroutine does not return
    memcpy(puStack_28 + uStack_20,*(undefined8 *)(param_3 + 8),
           (longlong)(*(int *)(param_3 + 0x10) + 1));
  }
  puVar1 = &DAT_18098bc73;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  OutputDebugStringA(puVar1);
  puStack_30 = &UNK_180a3c3e0;
  if (puStack_28 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



