#include "TaleWorlds.Native.Split.h"

// 99_part_07_part012.c - 19 个函数

// 函数: void FUN_1804a52b0(longlong param_1,undefined4 param_2)
void FUN_1804a52b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong alStack_40 [2];
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar5 = 0xfffffffffffffffe;
  if ((DAT_180c82860 != '\0') && (_DAT_180c8f008 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*_DAT_180c8f008 + 0x28))();
    if (cVar3 != '\0') {
      (**(code **)(_DAT_180c8ece0 + 0x358))(*(undefined4 *)(_DAT_180c8ece0 + 0x10),param_2);
    }
  }
  FUN_1804abca0();
  if (*(int *)(param_1 + 0x410) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x418);
    *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
    lVar4 = _DAT_180c86870;
    if (*(char *)(_DAT_180c86870 + 0x38) != '\0') {
      if (*(int *)(lVar1 + 0x30) == 0) {
        *(undefined4 *)(lVar1 + 0x30) = 1;
      }
      else {
        (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x10))((longlong *)(lVar1 + 0x10),&DAT_18098bc73)
        ;
        lVar4 = _DAT_180c86870;
      }
      lVar1 = *(longlong *)(lVar4 + 0x2b0);
      FUN_1804ca020(*(undefined8 *)(lVar1 + 0x418));
      plVar2 = *(longlong **)(lVar1 + 0x418);
      if (plVar2 != (longlong *)0x0) {
        plVar2[2] = (longlong)&UNK_180a3c3e0;
        if (plVar2[3] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar2[3] = 0;
        *(undefined4 *)(plVar2 + 5) = 0;
        plVar2[2] = (longlong)&UNK_18098bcb0;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar2 + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar2);
      }
      *(undefined8 *)(lVar1 + 0x418) = 0;
      *(undefined4 *)(lVar1 + 0x410) = 1;
      (**(code **)(_DAT_180c8ece0 + 0x340))(*(undefined4 *)(_DAT_180c8ece0 + 0x10));
      FUN_1800622d0(_DAT_180c86928,0,0xd,&UNK_180a2fb48);
      *(undefined1 *)(_DAT_180c86870 + 0x1ef) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x410) == 1) {
    (**(code **)(_DAT_180c8a9c0 + 0xa0))(param_2);
    *(undefined4 *)(param_1 + 0x420) = param_2;
    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3,uVar5);
    puStack_30 = &UNK_1804a6c60;
    puStack_28 = &UNK_1804a6c40;
    alStack_40[0] = param_1;
    uVar5 = FUN_18006b640(uVar5,alStack_40);
    FUN_180056f10(_DAT_180c8a9c0 + 0x220,uVar5);
    *(undefined8 *)(*(longlong *)(_DAT_180c8a9c0 + 0x220) + 0x18) = 0xfffffffffffffffd;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a54e0(undefined8 param_1,undefined8 param_2)
void FUN_1804a54e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 auStackX_18 [2];
  undefined8 uStackX_20;
  undefined8 uVar3;
  undefined4 **ppuVar4;
  undefined4 *apuStack_40 [2];
  code *pcStack_30;
  code *pcStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  if (_DAT_180c92590 != 0) {
    FUN_18056df90();
  }
  cVar1 = (**(code **)(_DAT_180c925c8 + 0x30))(&DAT_180c925c8);
  if (cVar1 != '\0') {
    auStackX_18[0] = (int)param_2;
    _DAT_180c95be0 = FUN_18055c500(&DAT_180c925a0,param_2);
    FUN_1805f7e10(0x180c92c58,&DAT_180c92cd8,&DAT_180c92cf8);
    uStackX_20 = _DAT_180c96070;
    lVar2 = _DAT_180c92ce0 - _DAT_180c92cd8;
    ppuVar4 = apuStack_40;
    pcStack_30 = FUN_18055ec90;
    pcStack_28 = FUN_18055ec20;
    apuStack_40[0] = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc);
    *apuStack_40[0] = 0x80c925a0;
    apuStack_40[0][1] = 1;
    *(undefined4 **)(apuStack_40[0] + 2) = auStackX_18;
    *(undefined8 **)(apuStack_40[0] + 4) = &uStackX_20;
    FUN_18015b810(0x80c925a0,0,lVar2 >> 3 & 0xffffffff,3,0xffffffffffffffff,apuStack_40,uVar3,
                  ppuVar4);
  }
  _DAT_180c95d68 = _DAT_180c95d68 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void create_game_application(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_b8 [32];
  code *pcStack_98;
  undefined *puStack_88;
  undefined1 *puStack_80;
  uint uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  int iStack_40;
  undefined auStack_38 [8];
  undefined8 uStack_30;
  ulonglong uStack_28;
  
                    // 0x4a5650  32  create_game_application
  uStack_30 = 0x1804a566e;
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x428,8,3);
  uStack_60 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  uStack_68 = 0;
  *puVar1 = &UNK_180a0e170;
  *puVar1 = &UNK_180a2d448;
  pcStack_98 = FUN_180627b90;
  puStack_58 = puVar1;
  FUN_1808fc838(puVar1 + 2,0x20,0x20,FUN_180627850);
  puVar1[0x83] = 0;
  *(undefined4 *)(puVar1 + 0x82) = 0xffffffff;
  FUN_18049dc80();
  (**(code **)(_DAT_180c924d0 + 0x10))(&DAT_180c924d0,&DAT_1809fd128);
  *(undefined4 *)(puVar1 + 1) = 0;
  puStack_50 = &UNK_1809fdc18;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  iStack_40 = 6;
  strcpy_s(auStack_38,0x10,&UNK_180a3c07c);
  uStack_68 = 1;
  puStack_88 = &UNK_180a3c3e0;
  uStack_70 = 0;
  puStack_80 = (undefined1 *)0x0;
  uStack_78 = 0;
  FUN_1806277c0(&puStack_88,iStack_40);
  if (0 < iStack_40) {
    puVar2 = &DAT_18098bc73;
    if (puStack_48 != (undefined *)0x0) {
      puVar2 = puStack_48;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_80,puVar2,(longlong)(iStack_40 + 1));
  }
  if (puStack_48 != (undefined *)0x0) {
    uStack_78 = 0;
    if (puStack_80 != (undefined1 *)0x0) {
      *puStack_80 = 0;
    }
  }
  uVar4 = uStack_78;
  uStack_68 = 0;
  puStack_50 = &UNK_18098bcb0;
  uVar3 = uStack_78 + 8;
  FUN_1806277c0(&puStack_88,uVar3);
  *(undefined8 *)(puStack_80 + uStack_78) = 0x2f73656c75646f4d;
  *(undefined1 *)((longlong)(puStack_80 + uStack_78) + 8) = 0;
  uStack_78 = uVar3;
  if (0 < _DAT_180c924e0) {
    FUN_1806277c0(&puStack_88,uVar3 + _DAT_180c924e0);
                    // WARNING: Subroutine does not return
    memcpy(puStack_80 + uStack_78,_DAT_180c924d8,(longlong)(_DAT_180c924e0 + 1));
  }
  uVar4 = uVar4 + 9;
  FUN_1806277c0(&puStack_88,(ulonglong)uVar4);
  *(undefined2 *)(puStack_80 + uStack_78) = 0x2f;
  uStack_78 = uVar4;
  if (puStack_80 != (undefined1 *)0x0) {
    FUN_1806277c0(&DAT_180c924f0,uVar4);
  }
  if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(_DAT_180c924f8,puStack_80,uVar4);
  }
  _DAT_180c92500 = uVar4;
  if (_DAT_180c924f8 != 0) {
    *(undefined1 *)((ulonglong)uVar4 + _DAT_180c924f8) = 0;
  }
  _DAT_180c9250c = uStack_70._4_4_;
  *(undefined4 *)(puVar1 + 0x84) = 0;
  puStack_88 = &UNK_180a3c3e0;
  if (puStack_80 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_80 = (undefined1 *)0x0;
  uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_b8,0);
}






// 函数: void FUN_1804a5930(longlong param_1)
void FUN_1804a5930(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5950(ulonglong *param_1)
void FUN_1804a5950(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 7) {
    *puVar4 = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5970(longlong *param_1)
void FUN_1804a5970(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_1804a6ca0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a5990(longlong param_1)
void FUN_1804a5990(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804a59b0(longlong *param_1)
void FUN_1804a59b0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  *param_1 = (longlong)&UNK_180a35a70;
  plVar2 = param_1 + 0x4f1;
  lVar5 = 0x3ff;
  lVar3 = 0x3ff;
  do {
    LOCK();
    *(undefined2 *)plVar2 = 0xffff;
    UNLOCK();
    plVar2 = (longlong *)((longlong)plVar2 + 2);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  cVar1 = (**(code **)(param_1[5] + 0x30))(param_1 + 5);
  if (cVar1 != '\0') {
    (**(code **)(param_1[5] + 0x18))(param_1 + 5);
  }
  (**(code **)(*param_1 + 8))(param_1);
  plVar2 = param_1 + 0xf2;
  uVar6 = 0;
  do {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      if ((*(int *)(lVar3 + 0x4c) != 0) && (_DAT_180c8f008 != 0)) {
        (**(code **)(_DAT_180c8f008 + 0x18))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *plVar2 = 0;
    plVar2 = plVar2 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar2 = param_1 + 0xe7;
  lVar3 = *plVar2;
  uVar7 = uVar6;
  if (param_1[0xe8] - lVar3 >> 3 != 0) {
    do {
      lVar3 = *(longlong *)(uVar7 + lVar3);
      if (lVar3 != 0) {
        FUN_18055e8d0(lVar3);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(undefined8 *)(uVar7 + *plVar2) = 0;
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
      lVar3 = *plVar2;
      uVar7 = uVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_1[0xe8] - lVar3 >> 3));
  }
  if (param_1[0x6bf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x6bb] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180368c20();
  if (param_1[0x6ac] == 0) {
    param_1[0x6ac] = 0;
    _Mtx_destroy_in_situ();
    FUN_18055e7a0();
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = (longlong)&UNK_180a36778;
    cVar1 = (**(code **)(param_1[5] + 0x30))(param_1 + 5);
    if (cVar1 != '\0') {
      (**(code **)(param_1[5] + 0x18))(param_1 + 5);
    }
    (**(code **)(*param_1 + 8))(param_1);
    FUN_18056fd20(param_1 + 0xc3);
    if (param_1[0xba] == 0) {
      param_1[0xba] = 0;
      param_1[5] = (longlong)&UNK_180a36730;
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a59d0(ulonglong *param_1)
void FUN_1804a59d0(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xd) {
    *puVar4 = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a59f0(longlong param_1)
void FUN_1804a59f0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1804a5d80();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5a30(longlong param_1)
void FUN_1804a5a30(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1804a5d80();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5a70(ulonglong *param_1)
void FUN_1804a5a70(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xd) {
    *puVar4 = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5ad0(longlong param_1)
void FUN_1804a5ad0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1804a5d80();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5b00(ulonglong *param_1)
void FUN_1804a5b00(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 7) {
    *puVar4 = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5b60(longlong *param_1)
void FUN_1804a5b60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_1804a6ca0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1804a5bc0(longlong param_1)
void FUN_1804a5bc0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5bc6(longlong param_1)
void FUN_1804a5bc6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5bf0(void)
void FUN_1804a5bf0(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R14;
  undefined8 unaff_R15;
  
  do {
    lVar3 = *(longlong *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *(undefined8 *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(undefined8 *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(ulonglong *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(undefined8 **)(unaff_RBP + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5c26(void)
void FUN_1804a5c26(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(undefined8 **)(unaff_RBP + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}






// 函数: void FUN_1804a5c44(void)
void FUN_1804a5c44(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(unaff_RBP + 8);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1804a5c60(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar4 = *param_3;
  iVar1 = (int)param_3[1];
  bVar9 = true;
  puVar7 = (undefined8 *)param_1[2];
  puVar5 = param_1;
  while (puVar7 != (undefined8 *)0x0) {
    puVar5 = puVar7;
    if ((uVar4 < (ulonglong)puVar7[4]) ||
       ((uVar4 <= (ulonglong)puVar7[4] && (iVar1 < *(int *)(puVar7 + 5))))) {
      bVar9 = true;
      puVar7 = (undefined8 *)puVar7[1];
    }
    else {
      bVar9 = false;
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  puVar7 = puVar5;
  if (bVar9) {
    if (puVar5 == (undefined8 *)param_1[1]) goto LAB_1804a5d01;
    puVar7 = (undefined8 *)func_0x00018066b9a0(puVar5);
  }
  if ((uVar4 <= (ulonglong)puVar7[4]) &&
     ((uVar4 < (ulonglong)puVar7[4] || (iVar1 <= *(int *)(puVar7 + 5))))) {
    *param_2 = puVar7;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1804a5d01:
  lVar8 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(param_1 + 5));
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  uVar6 = param_3[1];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(int *)(lVar8 + 0x20) = (int)*param_3;
  *(undefined4 *)(lVar8 + 0x24) = uVar2;
  *(int *)(lVar8 + 0x28) = (int)uVar6;
  *(undefined4 *)(lVar8 + 0x2c) = uVar3;
  if (((puVar5 == param_1) || (uVar4 < (ulonglong)puVar5[4])) ||
     ((uVar4 <= (ulonglong)puVar5[4] && (iVar1 < *(int *)(puVar5 + 5))))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar8,puVar5,param_1,uVar10);
}






