#include "TaleWorlds.Native.Split.h"

// 01_initialization_part041.c - 2 个函数

// 函数: void FUN_18006f530(longlong param_1)
void FUN_18006f530(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x38))();
  }
  return;
}



undefined8 *
FUN_18006f590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_180c8aa69 == '\0') {
    *param_1 = &UNK_18098bcb0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = &UNK_180a3c3e0;
    param_1[3] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_1806277c0(param_1,0,param_3,param_4,0,0xfffffffffffffffe);
    *(undefined4 *)(param_1 + 2) = 0;
    if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
      *(undefined1 *)param_1[1] = 0;
    }
  }
  else {
    FUN_1802265d0(param_1,param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18006f620(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined *puVar8;
  bool bVar9;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined *puStack_28;
  
  lVar3 = _DAT_180c82868;
  uVar7 = FUN_1800f9600(param_2);
  if (((char)uVar7 != '\0') || (uVar7 = WaitForSingleObject(_DAT_180c91900,0), (int)uVar7 != 0)) {
    return uVar7 & 0xffffffffffffff00;
  }
  if (lVar3 != 0) {
    FUN_18005dab0(lVar3);
  }
  bVar9 = true;
  cVar4 = (**(code **)**(undefined8 **)(_DAT_180c8ed08 + 0x18))();
  if ((cVar4 == '\0') && (iVar5 = IsDebuggerPresent(), iVar5 != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (lVar3 != 0) {
    iVar5 = *(int *)(**(longlong **)(lVar3 + 8) + 0x48);
    iVar6 = _Thrd_id();
    bVar9 = iVar6 == iVar5;
  }
  FUN_1800f9ce0(auStack_30,0);
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined *)0x0;
  uStack_40 = 0;
  FUN_180628040(&puStack_50,&UNK_1809ff538,param_2);
  FUN_180062380(_DAT_180c86928,5,0xffffffff00000000,&UNK_1809ff550);
  puVar8 = &DAT_18098bc73;
  if (puStack_48 != (undefined *)0x0) {
    puVar8 = puStack_48;
  }
  FUN_180062380(_DAT_180c86928,5,0xffffffff00000000,&UNK_1809ff5b0,puVar8);
  puVar8 = &DAT_18098bc73;
  if (puStack_28 != (undefined *)0x0) {
    puVar8 = puStack_28;
  }
  FUN_1800623b0(_DAT_180c86928,5,0xffffffff00000000,3,puVar8);
  FUN_1800623e0();
  puVar8 = &DAT_18098bc73;
  if (puStack_48 != (undefined *)0x0) {
    puVar8 = puStack_48;
  }
  OutputDebugStringA(puVar8);
  FUN_18004c2b0(param_2);
  lVar3 = _DAT_180c86950;
  if (((bVar9) && (_DAT_180c86950 != 0)) && (*(char *)(_DAT_180c86950 + 0x1609) != '\x01')) {
    FUN_1801723a0(*(undefined8 *)(_DAT_180c86870 + 8),*(char *)(_DAT_180c868d0 + 0x2028) != '\0',
                  *(undefined4 *)(_DAT_180c86950 + 0x160c));
    *(undefined1 *)(lVar3 + 0x1609) = 1;
  }
  if (DAT_180c82842 == '\0') {
    if ((DAT_180c82860 == '\0') ||
       ((iVar5 = IsDebuggerPresent(), iVar5 != 0 && (DAT_180c82842 == '\0')))) {
      MessageBoxA(0,param_2,&UNK_1809ff5b8,0x41010);
    }
    else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
      FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd,&UNK_180a04f08,&UNK_1809ff5b8,param_2);
    }
  }
  else if (DAT_180c82860 == '\0') {
    puVar8 = &DAT_18098bc73;
    if (puStack_48 != (undefined *)0x0) {
      puVar8 = puStack_48;
    }
    FUN_1806272a0(puVar8);
  }
  iVar5 = FUN_1800f98e0(param_2);
  if ((!bVar2) && (iVar5 == 0)) {
    FUN_180066320();
  }
  FUN_1800f96b0(param_2,0);
  if (_DAT_180c86870 == 0) {
    _Exit(5);
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  FUN_180055f70();
  pcVar1 = (code *)swi(3);
  uVar7 = (*pcVar1)();
  return uVar7;
}



// WARNING: Removing unreachable block (ram,0x00018006fc4b)
// WARNING: Removing unreachable block (ram,0x00018006fc66)
// WARNING: Removing unreachable block (ram,0x00018006fc6b)
// WARNING: Removing unreachable block (ram,0x00018006fe26)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18006f940(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong in_RAX;
  longlong lVar10;
  undefined *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  bool bVar15;
  byte bStackX_20;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined4 uStack_d0;
  ulonglong uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  ulonglong uStack_88;
  undefined *puStack_80;
  longlong lStack_78;
  undefined4 uStack_68;
  undefined8 uStack_40;
  
  lVar4 = _DAT_180c82868;
  uStack_40 = 0xfffffffffffffffe;
  bStackX_20 = 0;
  if (((DAT_180c82860 == '\0') || (in_RAX = FUN_1800f9600(param_2), (char)in_RAX != '\0')) ||
     (in_RAX = WaitForSingleObject(_DAT_180c91900,0), (int)in_RAX != 0)) {
    uVar12 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if (lVar4 != 0) {
      FUN_18005dab0(lVar4);
    }
    bVar15 = true;
    cVar6 = (**(code **)**(undefined8 **)(_DAT_180c8ed08 + 0x18))();
    if ((cVar6 == '\0') && (iVar7 = IsDebuggerPresent(), iVar7 != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (lVar4 != 0) {
      iVar7 = *(int *)(**(longlong **)(lVar4 + 8) + 0x48);
      iVar8 = _Thrd_id();
      bVar15 = iVar8 == iVar7;
    }
    puStack_c0 = &UNK_180a3c3e0;
    uStack_a8 = 0;
    puStack_b8 = (undefined *)0x0;
    uStack_b0 = 0;
    if (!bVar3) {
      lVar10 = FUN_1800f9ce0(&puStack_e0,0);
      uStack_b0 = *(undefined4 *)(lVar10 + 0x10);
      puStack_b8 = *(undefined **)(lVar10 + 8);
      uStack_a8 = *(undefined8 *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 8) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      puStack_e0 = &UNK_180a3c3e0;
      if (puStack_d8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_d8 = (undefined8 *)0x0;
      uStack_c8 = uStack_c8 & 0xffffffff00000000;
      puStack_e0 = &UNK_18098bcb0;
    }
    puVar5 = puStack_b8;
    puStack_a0 = &UNK_180a3c3e0;
    uStack_88 = 0;
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    FUN_180628040(&puStack_a0,&UNK_1809ff5c0,param_2);
    FUN_180062380(_DAT_180c86928,5,0xffffffff00000000,&UNK_1809ff550);
    puVar11 = &DAT_18098bc73;
    if (puStack_98 != (undefined *)0x0) {
      puVar11 = puStack_98;
    }
    FUN_180062380(_DAT_180c86928,2,0xffffffff00000000,&UNK_1809ff5b0,puVar11);
    puVar11 = &DAT_18098bc73;
    if (puVar5 != (undefined *)0x0) {
      puVar11 = puVar5;
    }
    FUN_1800623b0(_DAT_180c86928,2,0xffffffff00000000,3,puVar11);
    FUN_1800623e0();
    puVar11 = &DAT_18098bc73;
    if (puStack_98 != (undefined *)0x0) {
      puVar11 = puStack_98;
    }
    OutputDebugStringA(puVar11);
    FUN_18004c2b0(param_2);
    if (((DAT_180c82860 != '\0') && (bVar3)) &&
       ((*(char *)(_DAT_180c86870 + 0x25) != '\0' ||
        ((param_3 == '\0' || (*(int *)(_DAT_180c86870 + 0x340) == 2)))))) {
      if (DAT_180c82851 == '\0') {
        pcVar2 = (code *)swi(3);
        uVar12 = (*pcVar2)();
        return uVar12;
      }
      bStackX_20 = 1;
    }
    if (DAT_180c82842 == '\0') {
      if (bVar15) {
        if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
          FUN_1801719d0(*(longlong *)(_DAT_180c86870 + 8));
        }
        lVar4 = _DAT_180c86950;
        if ((_DAT_180c86950 != 0) && (*(char *)(_DAT_180c86950 + 0x1609) != '\x01')) {
          FUN_1801723a0(*(undefined8 *)(_DAT_180c86870 + 8),
                        *(char *)(_DAT_180c868d0 + 0x2028) != '\0',
                        *(undefined4 *)(_DAT_180c86950 + 0x160c));
          *(undefined1 *)(lVar4 + 0x1609) = 1;
        }
      }
      puStack_e0 = &UNK_180a3c3e0;
      uStack_c8 = 0;
      puStack_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      puVar14 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
      *(undefined1 *)puVar14 = 0;
      puStack_d8 = puVar14;
      uVar9 = FUN_18064e990(puVar14);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar9);
      *puVar14 = 0x4e524157204c4752;
      *(undefined4 *)(puVar14 + 1) = 0x474e49;
      uStack_d0 = 0xb;
      if (((DAT_180c82860 == '\0') || (iVar7 = IsDebuggerPresent(), iVar7 != 0)) &&
         (DAT_180c82842 == '\0')) {
        MessageBoxA(0,param_2,puVar14,0x41030);
      }
      else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
        FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd,&UNK_180a04f08,puVar14,param_2);
      }
      puStack_e0 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar14);
    }
    if (DAT_180c82860 == '\0') {
      FUN_1806272a0(&UNK_1809ff5d0,param_2);
    }
    iVar7 = FUN_1800f98e0(param_2);
    if (((!bVar3) && (iVar7 == 0)) && (*(char *)(_DAT_180c86870 + 0x2a) != '\0')) {
      uVar1 = *(undefined1 *)(_DAT_180c86870 + 0x141);
      uVar13 = FUN_180627ae0(&puStack_80,_DAT_180c86870 + 0x148);
      uVar13 = FUN_180627ae0(&puStack_e0,uVar13);
      puStack_80 = &UNK_180a3c3e0;
      if (lStack_78 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_78 = 0;
      uStack_68 = 0;
      puStack_80 = &UNK_18098bcb0;
      puVar11 = &DAT_18098bc73;
      if (puVar5 != (undefined *)0x0) {
        puVar11 = puVar5;
      }
      FUN_180066320(uVar13,&puStack_e0,uVar1,0,puVar11);
      puStack_e0 = &UNK_180a3c3e0;
      if (puStack_d8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_d8 = (undefined8 *)0x0;
      uStack_c8 = uStack_c8 & 0xffffffff00000000;
      puStack_e0 = &UNK_18098bcb0;
    }
    FUN_1800f96b0(param_2,0);
    if (_DAT_180c86870 == 0) {
      cVar6 = '\x01';
    }
    else {
      cVar6 = *(char *)(_DAT_180c86870 + 0x29);
    }
    if (*(char *)(_DAT_180c86870 + 0x25) != '\0') {
      FUN_180055f70(_DAT_180c86870,5);
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return uVar12;
    }
    if (cVar6 != '\0') {
      _DAT_180c82854 = 5;
    }
    if ((DAT_180c82842 == '\0') && (bVar15)) {
      if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
        FUN_1801718f0();
      }
      if (_DAT_180c86950 != 0) {
        FUN_180092940(_DAT_180c86950,*(undefined1 *)(_DAT_180c86950 + 0x160a));
      }
    }
    if (lVar4 != 0) {
      FUN_18005db30(lVar4);
    }
    do {
      iVar7 = ReleaseSemaphore(_DAT_180c91900,1);
    } while (iVar7 == 0);
    puStack_a0 = &UNK_180a3c3e0;
    if (puStack_98 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_98 = (undefined *)0x0;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    puStack_a0 = &UNK_18098bcb0;
    puStack_c0 = &UNK_180a3c3e0;
    if (puVar5 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
    uVar12 = (ulonglong)bStackX_20;
  }
  return uVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18006ff80(undefined8 param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined *puVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  byte bStack_d8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  ulonglong uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  ulonglong uStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  undefined4 uStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  undefined4 uStack_38;
  undefined8 uStack_30;
  
  lVar2 = _DAT_180c82868;
  uStack_30 = 0xfffffffffffffffe;
  bStack_d8 = 0;
  puVar6 = (undefined1 *)register0x00000020;
  if (((DAT_180c82860 == '\0') ||
      (puVar6 = (undefined1 *)FUN_1800f9600(param_2), (char)puVar6 != '\0')) ||
     (puVar6 = (undefined1 *)WaitForSingleObject(_DAT_180c91900,0), (int)puVar6 != 0)) {
    return (ulonglong)puVar6 & 0xffffffffffffff00;
  }
  if (lVar2 != 0) {
    FUN_18005dab0(lVar2);
  }
  bVar14 = true;
  cVar3 = (**(code **)**(undefined8 **)(_DAT_180c8ed08 + 0x18))();
  if ((cVar3 == '\0') && (iVar4 = IsDebuggerPresent(), iVar4 != 0)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if (lVar2 != 0) {
    iVar4 = *(int *)(**(longlong **)(lVar2 + 8) + 0x48);
    iVar5 = _Thrd_id();
    bVar14 = iVar5 == iVar4;
  }
  puVar12 = (undefined *)0x0;
  if (!bVar15) {
    lVar7 = FUN_1800f9ce0(&puStack_70,0);
    puVar12 = *(undefined **)(lVar7 + 8);
    *(undefined4 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    puStack_70 = &UNK_180a3c3e0;
    if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_68 = 0;
    uStack_58 = 0;
    puStack_70 = &UNK_18098bcb0;
  }
  puStack_b0 = &UNK_180a3c3e0;
  uStack_98 = 0;
  puStack_a8 = (undefined *)0x0;
  uStack_a0 = 0;
  FUN_180628040(&puStack_b0,&UNK_1809ff5f8,param_2);
  FUN_180062380(_DAT_180c86928,5,0xffffffff00000000,&UNK_1809ff550);
  puVar10 = &DAT_18098bc73;
  if (puStack_a8 != (undefined *)0x0) {
    puVar10 = puStack_a8;
  }
  FUN_180062380(_DAT_180c86928,2,0xffffffff00000000,&UNK_1809ff5b0,puVar10);
  if (DAT_180bf0100 != '\0') {
    puVar10 = &DAT_18098bc73;
    if (puVar12 != (undefined *)0x0) {
      puVar10 = puVar12;
    }
    FUN_1800623b0(_DAT_180c86928,2,0xffffffff00000000,3,puVar10);
  }
  FUN_1800623e0();
  puVar10 = &DAT_18098bc73;
  if (puStack_a8 != (undefined *)0x0) {
    puVar10 = puStack_a8;
  }
  OutputDebugStringA(puVar10);
  FUN_18004c2b0(param_2);
  if ((DAT_180c82860 != '\0') && (bVar15)) {
    if ((*(char *)(_DAT_180c86870 + 0x25) == '\0') &&
       ((param_3 != '\0' && (*(int *)(_DAT_180c86870 + 0x340) != 2)))) {
      uVar11 = 1;
      bStack_d8 = 1;
      goto LAB_180070230;
    }
    if (DAT_180c82851 == '\0') {
      pcVar1 = (code *)swi(3);
      uVar11 = (*pcVar1)();
      return uVar11;
    }
  }
  uVar11 = 0;
LAB_180070230:
  if (*(int *)(_DAT_180c86908 + 0x460) == 0) {
    if (DAT_180c82842 == '\0') {
      if (bVar14) {
        if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
          FUN_1801719d0(*(longlong *)(_DAT_180c86870 + 8));
        }
        lVar7 = _DAT_180c86950;
        if ((_DAT_180c86950 != 0) && (*(char *)(_DAT_180c86950 + 0x1609) != '\x01')) {
          FUN_1801723a0(*(undefined8 *)(_DAT_180c86870 + 8),
                        *(char *)(_DAT_180c868d0 + 0x2028) != '\0',
                        *(undefined4 *)(_DAT_180c86950 + 0x160c));
          *(undefined1 *)(lVar7 + 0x1609) = 1;
        }
      }
      if (((DAT_180c82860 == '\0') || (iVar4 = IsDebuggerPresent(), iVar4 != 0)) &&
         (DAT_180c82842 == '\0')) {
        MessageBoxA(0,param_2,&UNK_1809ff630,0x41030);
      }
      else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
        FUN_1800623b0(_DAT_180c86928,3,0xffffffff00000000,0xd,&UNK_180a04f08,&UNK_1809ff630,param_2)
        ;
      }
    }
    else if (DAT_180c82860 == '\0') {
      FUN_1806272a0(&UNK_1809ff610,param_2);
    }
    iVar4 = FUN_1800f98e0(param_2);
    if ((!bVar15) && (iVar4 == 0)) {
      bVar15 = _DAT_180c86870 == 0;
      if (bVar15) {
        uVar13 = 0;
        puStack_90 = &UNK_180a3c3e0;
        uStack_78 = 0;
        puStack_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        puVar9 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x34,0x13);
        *(undefined1 *)puVar9 = 0;
        puStack_88 = puVar9;
        uVar16 = FUN_18064e990(puVar9);
        uStack_78 = CONCAT44(uStack_78._4_4_,uVar16);
        *puVar9 = 0x7270706d75645c5c;
        puVar9[1] = 0x2e726f737365636f;
        puVar9[2] = 0x6c726f77656c6174;
        puVar9[3] = 0x445c6d6f632e7364;
        *(undefined4 *)(puVar9 + 4) = 0x50706d75;
        *(undefined4 *)((longlong)puVar9 + 0x24) = 0x65636f72;
        *(undefined4 *)(puVar9 + 5) = 0x6e697373;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = 0x6c6f4667;
        *(undefined4 *)(puVar9 + 6) = 0x726564;
        uStack_80 = 0x33;
        ppuVar8 = &puStack_90;
      }
      else {
        uVar13 = *(undefined1 *)(_DAT_180c86870 + 0x141);
        ppuVar8 = (undefined **)FUN_180627ae0(&puStack_50,_DAT_180c86870 + 0x148);
        puVar9 = puStack_88;
      }
      uVar16 = FUN_180627ae0(&puStack_70,ppuVar8);
      if (bVar15) {
        puStack_90 = &UNK_180a3c3e0;
        if (puVar9 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar9);
        }
        puStack_88 = (undefined8 *)0x0;
        uStack_78 = uStack_78 & 0xffffffff00000000;
        puStack_90 = &UNK_18098bcb0;
      }
      if (!bVar15) {
        puStack_50 = &UNK_180a3c3e0;
        if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_48 = 0;
        uStack_38 = 0;
        puStack_50 = &UNK_18098bcb0;
      }
      puVar10 = &DAT_18098bc73;
      if (puVar12 != (undefined *)0x0) {
        puVar10 = puVar12;
      }
      FUN_180066320(uVar16,&puStack_70,uVar13,0,puVar10);
      puStack_70 = &UNK_180a3c3e0;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_68 = 0;
      uStack_58 = 0;
      puStack_70 = &UNK_18098bcb0;
    }
    FUN_1800f96b0(param_2,0);
    if (_DAT_180c86870 == 0) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = *(char *)(_DAT_180c86870 + 0x29);
    }
    if (*(char *)(_DAT_180c86870 + 0x25) != '\0') {
      FUN_180055f70(_DAT_180c86870,5);
      pcVar1 = (code *)swi(3);
      uVar11 = (*pcVar1)();
      return uVar11;
    }
    if (cVar3 != '\0') {
      _DAT_180c82854 = 5;
    }
    if ((DAT_180c82842 == '\0') && (bVar14)) {
      if (*(longlong *)(_DAT_180c86870 + 8) != 0) {
        FUN_1801718f0();
      }
      if (_DAT_180c86950 != 0) {
        FUN_180092940(_DAT_180c86950,*(undefined1 *)(_DAT_180c86950 + 0x160a));
      }
    }
    if (lVar2 != 0) {
      FUN_18005db30(lVar2);
    }
    do {
      iVar4 = ReleaseSemaphore(_DAT_180c91900,1);
    } while (iVar4 == 0);
    puStack_b0 = &UNK_180a3c3e0;
    if (puStack_a8 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_a8 = (undefined *)0x0;
    uStack_98 = uStack_98 & 0xffffffff00000000;
    puStack_b0 = &UNK_18098bcb0;
    if (puVar12 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar12);
    }
    uVar11 = (ulonglong)bStack_d8;
  }
  else {
    if (*(int *)(_DAT_180c86908 + 0x460) == 1) {
      FUN_1806272a0(&UNK_1809ff610,param_2);
    }
    puStack_b0 = &UNK_180a3c3e0;
    if (puStack_a8 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_a8 = (undefined *)0x0;
    uStack_98 = uStack_98 & 0xffffffff00000000;
    puStack_b0 = &UNK_18098bcb0;
    if (puVar12 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar12);
    }
  }
  return uVar11;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180070680(undefined8 param_1,undefined8 param_2)
void FUN_180070680(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  bool bVar9;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  undefined4 uStack_38;
  
  iVar3 = WaitForSingleObject(_DAT_180c91900,0);
  if (iVar3 != 0) {
    return;
  }
  bVar9 = true;
  cVar2 = (**(code **)**(undefined8 **)(_DAT_180c8ed08 + 0x18))();
  if ((cVar2 == '\0') && (iVar3 = IsDebuggerPresent(), iVar3 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (_DAT_180c82868 != 0) {
    iVar3 = *(int *)(**(longlong **)(_DAT_180c82868 + 8) + 0x48);
    iVar4 = _Thrd_id();
    bVar9 = iVar4 == iVar3;
  }
  puVar8 = (undefined *)0x0;
  if (!bVar1) {
    lVar5 = FUN_1800f9ce0(&puStack_50,0);
    puVar8 = *(undefined **)(lVar5 + 8);
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    puStack_50 = &UNK_180a3c3e0;
    if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_48 = 0;
    uStack_38 = 0;
    puStack_50 = &UNK_18098bcb0;
  }
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (undefined *)0x0;
  uStack_60 = 0;
  FUN_180628040(&puStack_70,&UNK_1809ff538,param_2);
  FUN_180062380(_DAT_180c86928,5,0xffffffff00000000,&UNK_1809ff550);
  puVar6 = &DAT_18098bc73;
  if (puStack_68 != (undefined *)0x0) {
    puVar6 = puStack_68;
  }
  FUN_180062380(_DAT_180c86928,5,0xffffffff00000000,&UNK_1809ff5b0,puVar6);
  puVar6 = &DAT_18098bc73;
  if (puVar8 != (undefined *)0x0) {
    puVar6 = puVar8;
  }
  FUN_1800623b0(_DAT_180c86928,5,0xffffffff00000000,3,puVar6);
  FUN_1800623e0();
  puVar8 = &DAT_18098bc73;
  if (puStack_68 != (undefined *)0x0) {
    puVar8 = puStack_68;
  }
  OutputDebugStringA(puVar8);
  lVar5 = _DAT_180c86950;
  if (((bVar9) && (_DAT_180c86950 != 0)) && (*(char *)(_DAT_180c86950 + 0x1609) != '\x01')) {
    FUN_1801723a0(*(undefined8 *)(_DAT_180c86870 + 8),*(char *)(_DAT_180c868d0 + 0x2028) != '\0',
                  *(undefined4 *)(_DAT_180c86950 + 0x160c));
    *(undefined1 *)(lVar5 + 0x1609) = 1;
  }
  if (DAT_180c82842 == '\0') {
    FUN_1800f93e0();
  }
  else {
    uVar7 = func_0x0001800464d0(&puStack_70);
    FUN_1806272a0(uVar7);
  }
  FUN_180046130(&DAT_180c91900,1);
  _Exit(5);
  return;
}



// WARNING: Removing unreachable block (ram,0x000180070cdc)
// WARNING: Removing unreachable block (ram,0x000180070ce2)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



