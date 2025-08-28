#include "TaleWorlds.Native.Split.h"

// 99_part_03_part019.c - 11 个函数

// 函数: void FUN_1801de530(longlong param_1)
void FUN_1801de530(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x30;
  for (lVar3 = *(longlong *)(param_1 + 0x38); lVar3 != lVar4; lVar3 = func_0x00018066bd70(lVar3)) {
    plVar1 = *(longlong **)(lVar3 + 0x28);
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 == 0) {
        *plVar1 = 0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar1);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_18004b790(lVar4,*puVar2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(param_1 + 0x38) = lVar4;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  lVar4 = *(longlong *)(param_1 + 8);
  do {
    if (lVar4 == param_1) {
      FUN_1800572d0(param_1);
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
      return;
    }
    plVar1 = *(longlong **)(lVar4 + 0x28);
    switch(*(undefined4 *)(param_1 + 0x6c)) {
    case 0:
      lVar3 = *plVar1;
      break;
    case 1:
      lVar3 = plVar1[1];
      break;
    case 2:
      lVar3 = plVar1[4];
      break;
    case 3:
      lVar3 = plVar1[3];
      break;
    case 4:
      lVar3 = plVar1[2];
      break;
    case 5:
      lVar3 = plVar1[5];
      break;
    default:
      goto LAB_1801de630;
    }
    if ((lVar3 != 0) && (*(longlong **)(lVar3 + 0x18) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x10))();
    }
LAB_1801de630:
    lVar4 = func_0x00018066bd70(lVar4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1801de690(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  
  if ((*(char *)(_DAT_180c86870 + 0x60) == '\0') && (*(char *)(param_1 + 0x309) == '\0')) {
    switch(param_3) {
    case 0:
      plVar3 = *(longlong **)(_DAT_180c86938 + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x60);
      lVar2 = *param_2;
      break;
    case 1:
      plVar3 = *(longlong **)(_DAT_180c86938 + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x78);
      lVar2 = param_2[1];
      break;
    case 2:
      plVar3 = *(longlong **)(_DAT_180c86938 + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x88);
      lVar2 = param_2[4];
      break;
    case 3:
      plVar3 = *(longlong **)(_DAT_180c86938 + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x80);
      lVar2 = param_2[3];
      break;
    case 4:
      plVar3 = *(longlong **)(_DAT_180c86938 + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x90);
      lVar2 = param_2[2];
      break;
    case 5:
      plVar3 = *(longlong **)(_DAT_180c86938 + 0x1d78);
      pcVar4 = *(code **)(*plVar3 + 0x68);
      lVar2 = param_2[5];
      break;
    default:
      goto LAB_1801de7a2;
    }
    iVar1 = (*pcVar4)(plVar3,param_4,(longlong)*(int *)(lVar2 + 0x10),0,lVar2 + 0x18);
    if (iVar1 < 0) {
      return 0;
    }
  }
LAB_1801de7a2:
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801de7d0(void)
void FUN_1801de7d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puStackX_8;
  undefined *puStack_158;
  undefined1 *puStack_150;
  uint uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined4 uStack_128;
  ulonglong uStack_120;
  undefined4 uStack_118;
  undefined *puStack_110;
  longlong lStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined **ppuStack_e8;
  ulonglong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  longlong lStack_a8;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 auStack_58 [24];
  ulonglong uVar14;
  
  lVar4 = _DAT_180c8aa08;
  uStack_90 = 0xfffffffffffffffe;
  uVar12 = 0;
  uStack_118 = 0;
  puStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uStack_b8 = 3;
  FUN_180052200(_DAT_180c86870,&puStack_d0);
  puVar6 = puStack_d0;
  puStack_d8 = puStack_c8;
  uStack_e0 = (longlong)puStack_c8 - (longlong)puStack_d0 >> 5;
  puVar1 = puStack_c8;
  puVar3 = puVar6;
  if (uStack_e0 != 0) {
    puStackX_8 = puStack_d0 + 1;
    uVar14 = uVar12;
    do {
      if (((int)uVar14 < 0) ||
         (lVar10 = *(longlong *)(*_DAT_180c86870 + 0x888),
         (ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - lVar10 >> 5) <= uVar12)) {
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = uVar12 * 0x20 + lVar10;
      }
      puStack_158 = &UNK_180a3c3e0;
      uStack_140 = 0;
      puStack_150 = (undefined1 *)0x0;
      uStack_148 = 0;
      FUN_1806277c0(&puStack_158,*(undefined4 *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_150,*(undefined8 *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        uStack_148 = 0;
        if (puStack_150 != (undefined1 *)0x0) {
          *puStack_150 = 0;
        }
        uStack_140 = uStack_140 & 0xffffffff;
      }
      FUN_180628040(&puStack_158,&DAT_180a0cfc8);
      FUN_180628040(&puStack_158,&DAT_180a0cf7c);
      puStack_138 = &UNK_180a3c3e0;
      uStack_120 = 0;
      puStack_130 = (undefined1 *)0x0;
      uStack_128 = 0;
      FUN_1806277c0(&puStack_138,uStack_148);
      if (uStack_148 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_130,puStack_150,uStack_148 + 1);
      }
      if (puStack_150 != (undefined1 *)0x0) {
        uStack_128 = 0;
        if (puStack_130 != (undefined1 *)0x0) {
          *puStack_130 = 0;
        }
        uStack_120 = uStack_120 & 0xffffffff;
      }
      FUN_180628040(&puStack_138,&DAT_180a0ce08);
      cVar7 = FUN_180624af0(&puStack_138);
      if (cVar7 == '\0') {
        puStack_138 = &UNK_180a3c3e0;
        if (puStack_130 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_130 = (undefined1 *)0x0;
        uStack_120 = uStack_120 & 0xffffffff00000000;
        puStack_138 = &UNK_18098bcb0;
        puStack_158 = &UNK_180a3c3e0;
        if (puStack_150 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else {
        puVar8 = (undefined8 *)FUN_1808fc418(0x398);
        *puVar8 = &UNK_180a21690;
        *puVar8 = &UNK_180a21720;
        *(undefined4 *)(puVar8 + 1) = 0;
        *puVar8 = &UNK_180a0e090;
        puStack_88 = puVar8;
        FUN_1808fc838(puVar8 + 2,0x70,6,FUN_1801ecb30,FUN_1801ecbb0);
        puVar1 = puVar8 + 0x56;
        *puVar1 = &UNK_18098bcb0;
        puVar8[0x57] = 0;
        *(undefined4 *)(puVar8 + 0x58) = 0;
        *puVar1 = &UNK_180a3c3e0;
        puVar8[0x59] = 0;
        puVar8[0x57] = 0;
        *(undefined4 *)(puVar8 + 0x58) = 0;
        puVar2 = puVar8 + 0x5a;
        *puVar2 = &UNK_18098bcb0;
        puVar8[0x5b] = 0;
        *(undefined4 *)(puVar8 + 0x5c) = 0;
        *puVar2 = &UNK_180a3c3e0;
        puVar8[0x5d] = 0;
        puVar8[0x5b] = 0;
        *(undefined4 *)(puVar8 + 0x5c) = 0;
        puStack_70 = puVar8 + 0x5e;
        *puStack_70 = 0;
        puVar8[0x5f] = 0;
        puVar8[0x60] = 0;
        *(undefined4 *)(puVar8 + 0x61) = 3;
        puStack_68 = puVar8 + 0x65;
        puVar8[0x68] = 0;
        *(undefined4 *)(puVar8 + 0x6a) = 0x11;
        *puStack_68 = puStack_68;
        puVar8[0x66] = puStack_68;
        puVar8[0x67] = 0;
        *(undefined1 *)(puVar8 + 0x68) = 0;
        puVar8[0x69] = 0;
        puVar8[0x6c] = 0;
        puStack_60 = puVar8 + 0x6d;
        puVar8[0x70] = 0;
        *(undefined4 *)(puVar8 + 0x72) = 3;
        *puStack_60 = puStack_60;
        puVar8[0x6e] = puStack_60;
        puVar8[0x6f] = 0;
        *(undefined1 *)(puVar8 + 0x70) = 0;
        puVar8[0x71] = 0;
        *(undefined4 *)((longlong)puVar8 + 0x7c) = 0;
        *(undefined4 *)((longlong)puVar8 + 0xec) = 1;
        *(undefined4 *)((longlong)puVar8 + 0x15c) = 2;
        *(undefined4 *)((longlong)puVar8 + 0x1cc) = 3;
        *(undefined4 *)((longlong)puVar8 + 0x23c) = 4;
        *(undefined4 *)((longlong)puVar8 + 0x2ac) = 5;
        *(undefined1 *)(puVar8 + 0x6b) = 0;
        puVar8[99] = 0;
        puVar8[0x62] = 0;
        puVar8[100] = 0;
        puVar8[99] = 0;
        puStack_80 = puVar1;
        puStack_78 = puVar2;
        ppuStack_e8 = (undefined **)FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
        uVar13 = uStack_148;
        *(undefined4 *)((longlong)ppuStack_e8 + 0x19) = 0;
        *(undefined2 *)((longlong)ppuStack_e8 + 0x1d) = 0;
        *(undefined1 *)((longlong)ppuStack_e8 + 0x1f) = 0;
        *(undefined4 *)(ppuStack_e8 + 5) = 0x11;
        *ppuStack_e8 = (undefined *)ppuStack_e8;
        ppuStack_e8[1] = (undefined *)ppuStack_e8;
        ppuStack_e8[2] = (undefined *)0x0;
        *(undefined1 *)(ppuStack_e8 + 3) = 0;
        ppuStack_e8[4] = (undefined *)0x0;
        puVar8[100] = ppuStack_e8;
        uVar11 = (ulonglong)uStack_148;
        if (puStack_150 != (undefined1 *)0x0) {
          FUN_1806277c0(puVar1,uVar11);
        }
        uVar5 = uStack_148;
        if (uVar13 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar8[0x57],puStack_150,uVar11);
        }
        *(undefined4 *)(puVar8 + 0x58) = 0;
        if (puVar8[0x57] != 0) {
          *(undefined1 *)(uVar11 + puVar8[0x57]) = 0;
        }
        *(undefined4 *)((longlong)puVar8 + 0x2cc) = uStack_140._4_4_;
        uVar11 = (ulonglong)uStack_148;
        if (puStack_150 != (undefined1 *)0x0) {
          FUN_1806277c0(puVar2,uVar11);
        }
        if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar8[0x5b],puStack_150,uVar11);
        }
        *(undefined4 *)(puVar8 + 0x5c) = 0;
        if (puVar8[0x5b] != 0) {
          *(undefined1 *)(uVar11 + puVar8[0x5b]) = 0;
        }
        *(undefined4 *)((longlong)puVar8 + 0x2ec) = uStack_140._4_4_;
        cVar7 = FUN_1801d8e90(_DAT_180c8aa08,0,puVar8);
        if (cVar7 == '\0') {
          puVar9 = &DAT_18098bc73;
          if ((undefined *)*puStackX_8 != (undefined *)0x0) {
            puVar9 = (undefined *)*puStackX_8;
          }
          FUN_1806272a0(&UNK_180a0dcb8,puVar9);
          lVar10 = __RTCastToVoid(puVar8);
          (**(code **)*puVar8)(puVar8,0);
          if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar10);
          }
        }
        else {
          lVar10 = FUN_180627ae0(&puStack_b0,puVar6 + uVar12 * 4);
          ppuStack_e8 = &puStack_110;
          puStack_110 = &UNK_180a3c3e0;
          uStack_100 = *(undefined4 *)(lVar10 + 0x10);
          lStack_108 = *(longlong *)(lVar10 + 8);
          uStack_f8._4_4_ = *(uint *)(lVar10 + 0x1c);
          uStack_f8._0_4_ = *(undefined4 *)(lVar10 + 0x18);
          *(undefined4 *)(lVar10 + 0x10) = 0;
          *(undefined8 *)(lVar10 + 8) = 0;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          uStack_118 = 1;
          puStack_f0 = puVar8;
          FUN_1801eae40(lVar4 + 0x58,auStack_58);
          uStack_118 = 0;
          ppuStack_e8 = &puStack_110;
          puStack_110 = &UNK_180a3c3e0;
          if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_108 = 0;
          uStack_f8 = (ulonglong)uStack_f8._4_4_ << 0x20;
          puStack_110 = &UNK_18098bcb0;
          puStack_b0 = &UNK_180a3c3e0;
          if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_a8 = 0;
          uStack_98 = 0;
          puStack_b0 = &UNK_18098bcb0;
        }
        puStack_138 = &UNK_180a3c3e0;
        if (puStack_130 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_130 = (undefined1 *)0x0;
        uStack_120 = uStack_120 & 0xffffffff00000000;
        puStack_138 = &UNK_18098bcb0;
        puStack_158 = &UNK_180a3c3e0;
        if (puStack_150 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      puStack_130 = (undefined1 *)0x0;
      puStack_138 = &UNK_18098bcb0;
      uStack_140 = uStack_140 & 0xffffffff00000000;
      puStack_150 = (undefined1 *)0x0;
      puStack_158 = &UNK_18098bcb0;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      puStackX_8 = puStackX_8 + 4;
      uVar12 = (ulonglong)(int)uVar13;
      puVar1 = puStack_d8;
    } while (uVar12 < uStack_e0);
  }
  for (; puVar2 = puStack_d8, puVar3 != puStack_d8; puVar3 = puVar3 + 4) {
    puStack_d8 = puVar1;
    (**(code **)*puVar3)(puVar3,0);
    puVar1 = puStack_d8;
    puStack_d8 = puVar2;
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  puStack_d8 = puVar1;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar6);
}






// 函数: void FUN_1801deed0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801deed0(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_358 [60];
  int iStack_31c;
  uint uStack_4c;
  int iStack_18;
  
  iVar1 = *param_2;
  FUN_18018e7e0(auStack_358,param_1,param_3,param_4,0xfffffffffffffffe);
  if (iStack_31c != iVar1) {
    uStack_4c = uStack_4c & 0xffffffef;
  }
  iStack_18 = iStack_18 + 1;
  iStack_31c = iVar1;
  FUN_180198750(param_3,auStack_358);
  FUN_1801431d0(auStack_358);
  return;
}



undefined8 *
FUN_1801def40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = &UNK_180a0dee8;
  puVar1 = param_1 + 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 3;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  _Mtx_init_in_situ(param_1 + 7,0x102,param_3,param_4,0xfffffffffffffffe);
  _Mtx_init_in_situ(param_1 + 0x11,2);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 3;
  _Mtx_init_in_situ(param_1 + 0x1f,2);
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 3;
  param_1[0x2b] = 1;
  param_1[0x2a] = &DAT_180be0000;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return param_1;
}






// 函数: void FUN_1801df040(undefined8 *param_1)
void FUN_1801df040(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &UNK_180a0e090;
  puVar3 = param_1 + 2;
  lVar5 = 6;
  do {
    FUN_1801de530(puVar3);
    puVar3 = puVar3 + 0xe;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  for (puVar3 = (undefined8 *)param_1[0x6e]; puVar3 != param_1 + 0x6d;
      puVar3 = (undefined8 *)func_0x00018066bd70(puVar3)) {
    plVar1 = (longlong *)puVar3[7];
    lVar5 = *plVar1;
    plVar4 = plVar1;
    if (lVar5 == 0) {
      plVar4 = plVar1 + 1;
      lVar5 = *plVar4;
      while (lVar5 == 0) {
        plVar4 = plVar4 + 1;
        lVar5 = *plVar4;
      }
    }
    if (lVar5 != plVar1[puVar3[8]]) {
      do {
        lVar2 = *(longlong *)(lVar5 + 0x10);
        if (lVar2 != 0) {
          FUN_18029a450(lVar2);
          *(undefined **)(lVar2 + 0x88) = &UNK_18098bcb0;
          _Mtx_destroy_in_situ();
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar2);
        }
        *(undefined8 *)(lVar5 + 0x10) = 0;
        lVar5 = *(longlong *)(lVar5 + 0x18);
        while (lVar5 == 0) {
          plVar4 = plVar4 + 1;
          lVar5 = *plVar4;
        }
      } while (lVar5 != *(longlong *)(puVar3[7] + puVar3[8] * 8));
    }
  }
  if (param_1[99] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[99] = 0;
  lVar5 = param_1[100];
  if (lVar5 != 0) {
    FUN_18004b730(lVar5);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  param_1[100] = 0;
  plVar4 = (longlong *)param_1[0x62];
  if (plVar4 != (longlong *)0x0) {
    if (*plVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar4 = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar4);
  }
  param_1[0x62] = 0;
  FUN_1801bdf70(param_1 + 0x6d,param_1[0x6f]);
  FUN_18004b730();
  FUN_18005d580();
  param_1[0x5a] = &UNK_180a3c3e0;
  if (param_1[0x5b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5a] = &UNK_18098bcb0;
  param_1[0x56] = &UNK_180a3c3e0;
  if (param_1[0x57] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x56] = &UNK_18098bcb0;
  FUN_1808fc8a8(param_1 + 2,0x70,6,FUN_1801ecbb0);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801df2e0(longlong param_1)
void FUN_1801df2e0(longlong param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x68) == (code *)&UNK_1800467f0) {
      cVar6 = (char)plVar1[2] != '\0';
    }
    else {
      cVar6 = (**(code **)(*plVar1 + 0x68))();
    }
    if (cVar6 == '\0') {
      return;
    }
  }
  cVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 200) + 0x18))();
  *(char *)(param_1 + 0xc0) = cVar6;
  if (cVar6 != '\0') {
    puVar2 = *(undefined **)**(undefined8 **)(param_1 + 200);
    if (puVar2 == &UNK_180a25f28) {
      iVar4 = *(int *)((longlong)**(undefined8 **)(param_1 + 200) + 0x434);
    }
    else {
      iVar4 = (**(code **)(puVar2 + 0x20))();
    }
    puVar3 = (undefined8 *)**(longlong **)(param_1 + 200);
    if (puVar3 != (undefined8 *)0x0) {
      lVar5 = __RTCastToVoid(puVar3);
      (**(code **)*puVar3)(puVar3,0);
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
      }
    }
    **(undefined8 **)(param_1 + 200) = 0;
    if (iVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a0dd40,iVar4);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801df34d(undefined8 param_1,longlong param_2)
void FUN_1801df34d(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *in_RAX;
  longlong lVar3;
  longlong unaff_RBX;
  
  lVar3 = *(longlong *)*in_RAX;
  if (lVar3 == param_2) {
    iVar2 = *(int *)(*in_RAX + 0x434);
  }
  else {
    iVar2 = (**(code **)(lVar3 + 0x20))();
  }
  puVar1 = (undefined8 *)**(longlong **)(unaff_RBX + 200);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  **(undefined8 **)(unaff_RBX + 200) = 0;
  if (iVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a0dd40,iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801df37e(void)
void FUN_1801df37e(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  undefined8 *unaff_RSI;
  int unaff_EDI;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RSI)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  **(undefined8 **)(unaff_RBX + 200) = 0;
  if (unaff_EDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_180a0dd40,unaff_EDI);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801df3a8(void)
void FUN_1801df3a8(void)

{
  longlong unaff_RBX;
  int unaff_EDI;
  
  **(undefined8 **)(unaff_RBX + 200) = 0;
  if (unaff_EDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_180a0dd40,unaff_EDI);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801df3bf(void)
void FUN_1801df3bf(void)

{
  undefined4 unaff_EDI;
  
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a0dd40,unaff_EDI);
}






// 函数: void FUN_1801df3e4(void)
void FUN_1801df3e4(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801df3f1(void)
void FUN_1801df3f1(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong in_RAX;
  longlong unaff_RBX;
  
  iVar2 = (**(code **)(in_RAX + 0x20))();
  puVar1 = (undefined8 *)**(longlong **)(unaff_RBX + 200);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
  }
  **(undefined8 **)(unaff_RBX + 200) = 0;
  if (iVar2 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a0dd40,iVar2);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




