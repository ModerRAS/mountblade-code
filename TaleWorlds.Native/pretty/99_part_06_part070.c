#include "TaleWorlds.Native.Split.h"

// 99_part_06_part070.c - 3 个函数

// 函数: void FUN_1803ea0a0(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_1803ea0a0(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  longlong lVar8;
  void *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *puVar12;
  int8_t auStack_5d8 [32];
  void **ppuStack_5b8;
  void *puStack_5b0;
  int8_t *puStack_5a8;
  int8_t uStack_598;
  int8_t auStack_597 [7];
  int32_t *puStack_590;
  uint64_t *puStack_588;
  void *puStack_580;
  void *puStack_578;
  int32_t uStack_570;
  ulonglong uStack_568;
  void *puStack_560;
  void *puStack_558;
  int32_t uStack_550;
  ulonglong uStack_548;
  void *puStack_540;
  void *puStack_538;
  int32_t uStack_530;
  ulonglong uStack_528;
  void *puStack_520;
  longlong lStack_518;
  int32_t uStack_510;
  ulonglong uStack_508;
  uint64_t *puStack_500;
  uint64_t *puStack_4f8;
  int8_t uStack_4f0;
  uint8_t uStack_4ef;
  uint64_t uStack_4e8;
  uint64_t uStack_4e0;
  uint64_t uStack_4d8;
  void *puStack_4d0;
  uint64_t uStack_4c8;
  uint64_t uStack_4c0;
  int8_t auStack_4b8 [8];
  longlong *plStack_4b0;
  int8_t auStack_4a8 [16];
  uint64_t uStack_498;
  uint64_t uStack_490;
  int8_t auStack_488 [16];
  uint64_t uStack_478;
  uint64_t uStack_470;
  int32_t auStack_468 [2];
  uint64_t uStack_460;
  uint64_t uStack_458;
  uint64_t uStack_450;
  uint64_t uStack_448;
  uint64_t uStack_440;
  int32_t auStack_428 [2];
  uint64_t uStack_420;
  uint64_t uStack_418;
  uint64_t uStack_410;
  uint64_t uStack_408;
  uint64_t uStack_400;
  uint64_t uStack_3e8;
  int8_t *puStack_3e0;
  int8_t *puStack_3d8;
  int8_t auStack_3d0 [16];
  int8_t auStack_3c0 [16];
  int8_t auStack_3b0 [16];
  uint64_t uStack_3a0;
  uint64_t uStack_398;
  uint64_t uStack_390;
  uint64_t uStack_388;
  int32_t auStack_378 [16];
  int32_t auStack_338 [16];
  int8_t auStack_2f8 [64];
  int8_t uStack_2b8;
  uint8_t uStack_2b7;
  uint64_t uStack_2a8;
  ulonglong uStack_2a0;
  void *puStack_298;
  int8_t *puStack_290;
  int32_t uStack_288;
  int8_t auStack_280 [264];
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [264];
  ulonglong uStack_58;
  
  uStack_3e8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_5d8;
  puVar6 = *(uint64_t **)(param_2 + 0x20);
  if (puVar6 != (uint64_t *)0x0) {
    if ((void *)*puVar6 == &UNK_180a0e090) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    else {
      (**(code **)((void *)*puVar6 + 0x28))();
    }
  }
  puStack_580 = &UNK_180a3c3e0;
  uStack_568 = 0;
  puStack_578 = (void *)0x0;
  uStack_570 = 0;
  iVar5 = *(int *)(param_1 + 0x4d0);
  if (iVar5 == 5) {
    lVar11 = 0;
    do {
      lVar8 = lVar11 + 1;
      if (*(char *)(*(longlong *)(param_1 + 0x4c8) + lVar11) != (&UNK_180a0ce64)[lVar11])
      goto LAB_1803ea194;
      lVar11 = lVar8;
    } while (lVar8 != 6);
    ppuStack_5b8 = &puStack_580;
    FUN_1803ef430(param_1,param_2,param_3,param_4);
  }
  else {
LAB_1803ea194:
    if ((iVar5 == 8) &&
       (iVar4 = strcmp(*(uint64_t *)(param_1 + 0x4c8),&UNK_180a0cf50), iVar4 == 0)) {
      ppuStack_5b8 = &puStack_580;
      FUN_1803ef940(param_1,param_2,param_3,param_4);
    }
    else if (iVar5 == 7) {
      lVar11 = 0;
      do {
        lVar8 = lVar11 + 1;
        if (*(char *)(*(longlong *)(param_1 + 0x4c8) + lVar11) != (&UNK_180a0ce90)[lVar11])
        goto LAB_1803ea221;
        lVar11 = lVar8;
      } while (lVar8 != 8);
      ppuStack_5b8 = &puStack_580;
      FUN_1803efe50(param_1,param_2,param_3,param_4);
    }
    else {
LAB_1803ea221:
      if ((iVar5 == 8) &&
         (iVar5 = strcmp(*(uint64_t *)(param_1 + 0x4c8),&UNK_180a0ce70), iVar5 == 0)) {
        ppuStack_5b8 = &puStack_580;
        FUN_1803f1170(param_1,param_2,param_3,param_4);
      }
      else {
        ppuStack_5b8 = &puStack_580;
        FUN_1803f25b0(param_1,param_2,param_3,param_4);
      }
    }
  }
  puStack_3e0 = auStack_3c0;
  puStack_3d8 = auStack_2f8;
  uStack_598 = 0;
  puStack_4d0 = &DAT_18098bc73;
  if (*(void **)(param_4 + 8) != (void *)0x0) {
    puStack_4d0 = *(void **)(param_4 + 8);
  }
  puStack_500 = (uint64_t *)auStack_3d0;
  puVar9 = &DAT_18098bc73;
  if (puStack_578 != (void *)0x0) {
    puVar9 = puStack_578;
  }
  puVar6 = (uint64_t *)FUN_180472360(auStack_3d0,puVar9);
  puStack_588 = (uint64_t *)&uStack_4f0;
  uStack_4e0 = 0;
  uStack_4d8 = 0xf;
  uStack_4f0 = 0;
  puStack_4f8 = puVar6;
  FUN_1800671b0(&uStack_4f0,&UNK_180a258f8,7);
  puStack_590 = (int32_t *)&uStack_4f0;
  FUN_1803f2eb0(auStack_2f8);
  puStack_588 = &uStack_4c8;
  uStack_4c8 = *puVar6;
  uStack_4c0 = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  puStack_500 = &uStack_3a0;
  uStack_3a0 = CONCAT71(uStack_4ef,uStack_4f0);
  uStack_398 = uStack_4e8;
  uStack_390 = uStack_4e0;
  uStack_388 = uStack_4d8;
  uStack_4e0 = 0;
  uStack_4d8 = 0xf;
  uStack_4f0 = 0;
  puStack_5a8 = &uStack_598;
  puStack_5b0 = &UNK_180a258e0;
  ppuStack_5b8 = &puStack_4d0;
  FUN_1803f4950(auStack_2f8,&uStack_3a0,&uStack_4c8,&UNK_180a258ec);
  FUN_180067070(&uStack_4f0);
  plVar3 = (longlong *)puVar6[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  uVar7 = FUN_1804724f0(auStack_3c0,auStack_2f8);
  puStack_590 = (int32_t *)auStack_4a8;
  puVar9 = &DAT_18098bc73;
  if (*(void **)(param_4 + 8) != (void *)0x0) {
    puVar9 = *(void **)(param_4 + 8);
  }
  uStack_498 = 0;
  uStack_490 = 0xf;
  auStack_4a8[0] = 0;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (puVar9[lVar11] != '\0');
  FUN_1800671b0(auStack_4a8);
  uVar7 = FUN_1803f3ac0(auStack_338,auStack_4a8,uVar7);
  auStack_597[0] = 0;
  puStack_590 = (int32_t *)auStack_3b0;
  puStack_588 = (uint64_t *)auStack_468;
  puStack_4f8 = (uint64_t *)auStack_468;
  auStack_468[0] = auStack_338[0];
  puStack_500 = &uStack_460;
  uStack_460 = 0;
  uStack_458 = 0;
  uStack_460 = FUN_1803f4cb0(uVar7,0,0);
  uStack_450 = 0;
  uStack_448 = 0;
  uStack_440 = 0;
  FUN_1803f44d0(auStack_468,auStack_338);
  uVar7 = FUN_1804724f0(auStack_3b0,auStack_468);
  puStack_588 = (uint64_t *)auStack_488;
  uStack_478 = 0;
  uStack_470 = 0xf;
  auStack_488[0] = 0;
  FUN_1800671b0(auStack_488,&UNK_180a259c0,4);
  ppuStack_5b8 = (void **)auStack_597;
  FUN_1803f3bc0(auStack_378,auStack_488,uVar7);
  iVar5 = _Mtx_lock(param_1 + 0x520);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  LOCK();
  piVar2 = (int *)(param_1 + 0x574);
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (iVar5 == (iVar5 / 10000) * 10000) {
    lVar11 = *(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0);
    while (4 < (ulonglong)(lVar11 / 0x118)) {
      iVar5 = _Mtx_unlock(param_1 + 0x520);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      if (*(char *)(_DAT_180c86870 + 0x1ed) == '\0') goto LAB_1803ea9e4;
      Sleep(1000);
      iVar5 = _Mtx_lock(param_1 + 0x520);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      lVar11 = *(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0);
    }
    puStack_520 = &UNK_180a3c3e0;
    uStack_508 = 0;
    lStack_518 = 0;
    uStack_510 = 0;
    FUN_180628040(&puStack_520,&UNK_180a259c8,*(int32_t *)(param_1 + 0x57c));
    puStack_540 = &UNK_180a3c3e0;
    uStack_528 = 0;
    puStack_538 = (void *)0x0;
    uStack_530 = 0;
    puStack_560 = &UNK_180a3c3e0;
    uStack_548 = 0;
    puStack_558 = (void *)0x0;
    uStack_550 = 0;
    FUN_1803ebc80(param_1,&puStack_520,&puStack_540,&puStack_560);
    puStack_298 = &UNK_1809feda8;
    puStack_290 = auStack_280;
    auStack_280[0] = 0;
    uStack_288 = uStack_550;
    puVar9 = &DAT_18098bc73;
    if (puStack_558 != (void *)0x0) {
      puVar9 = puStack_558;
    }
    strcpy_s(auStack_280,0x100,puVar9);
    FUN_1803f3880(param_1 + 0x1c0,&puStack_298);
    puStack_298 = &UNK_18098bcb0;
    puStack_178 = &UNK_1809feda8;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = uStack_530;
    puVar9 = &DAT_18098bc73;
    if (puStack_538 != (void *)0x0) {
      puVar9 = puStack_538;
    }
    strcpy_s(auStack_160,0x100,puVar9);
    FUN_1803f3880(param_1 + 0x1a0,&puStack_178);
    puStack_178 = &UNK_18098bcb0;
    *(int *)(param_1 + 0x57c) = *(int *)(param_1 + 0x57c) + 1;
    puStack_560 = &UNK_180a3c3e0;
    if (puStack_558 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_558 = (void *)0x0;
    uStack_548 = uStack_548 & 0xffffffff00000000;
    puStack_560 = &UNK_18098bcb0;
    puStack_540 = &UNK_180a3c3e0;
    if (puStack_538 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_538 = (void *)0x0;
    uStack_528 = uStack_528 & 0xffffffff00000000;
    puStack_540 = &UNK_18098bcb0;
    puStack_520 = &UNK_180a3c3e0;
    if (lStack_518 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_518 = 0;
    uStack_508 = uStack_508 & 0xffffffff00000000;
    puStack_520 = &UNK_18098bcb0;
    iVar5 = 0;
  }
  puStack_590 = auStack_428;
  puStack_588 = (uint64_t *)auStack_428;
  auStack_428[0] = auStack_378[0];
  puStack_4f8 = &uStack_420;
  uStack_420 = 0;
  uStack_418 = 0;
  uStack_420 = FUN_1803f4cb0(iVar5,0,0);
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_400 = 0;
  FUN_1803f44d0(auStack_428,auStack_378);
  FUN_1804724f0(auStack_4b8,auStack_428);
  puVar9 = *(void **)(*(longlong *)(param_1 + 0x1c8) + -0x110);
  puVar12 = &DAT_18098bc73;
  if (puVar9 != (void *)0x0) {
    puVar12 = puVar9;
  }
  uStack_2a8 = 0;
  uStack_2a0 = 0xf;
  uStack_2b8 = 0;
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (puVar12[lVar11] != '\0');
  FUN_1800671b0(&uStack_2b8,puVar12);
  ppuStack_5b8 = (void **)0x0;
  FUN_1803e8510(*(uint64_t *)(param_1 + 0x188),2,&uStack_2b8,auStack_4b8);
  if (0xf < uStack_2a0) {
    uVar10 = uStack_2a0 + 1;
    lVar8 = CONCAT71(uStack_2b7,uStack_2b8);
    lVar11 = lVar8;
    if (0xfff < uVar10) {
      uVar10 = uStack_2a0 + 0x28;
      lVar11 = *(longlong *)(lVar8 + -8);
      if (0x1f < (lVar8 - lVar11) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar11,uVar10);
  }
  uStack_2a8 = 0;
  uStack_2a0 = 0xf;
  uStack_2b8 = 0;
  if (plStack_4b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_4b0 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_4b0)(plStack_4b0);
      LOCK();
      piVar2 = (int *)((longlong)plStack_4b0 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_4b0 + 8))(plStack_4b0);
      }
    }
  }
  iVar5 = _Mtx_unlock(param_1 + 0x520);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
LAB_1803ea9e4:
  puStack_590 = auStack_378;
  FUN_1803e8470(auStack_378);
  puStack_590 = auStack_338;
  FUN_1803e8470(auStack_338);
  puStack_580 = &UNK_180a3c3e0;
  if (puStack_578 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_578 = (void *)0x0;
  uStack_568 = uStack_568 & 0xffffffff00000000;
  puStack_580 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_5d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803eaa70(longlong param_1)
void FUN_1803eaa70(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint64_t ***pppuVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint64_t *puVar11;
  uint uVar12;
  char cVar13;
  int8_t auStack_178 [32];
  uint64_t uStack_158;
  longlong lStack_148;
  int8_t *puStack_120;
  int8_t auStack_118 [8];
  int8_t auStack_110 [8];
  longlong *plStack_108;
  uint64_t uStack_100;
  int8_t auStack_f8 [64];
  int8_t uStack_b8;
  uint8_t uStack_b7;
  uint64_t uStack_a8;
  ulonglong uStack_a0;
  char acStack_98 [16];
  uint64_t **appuStack_88 [3];
  ulonglong uStack_70;
  ulonglong uStack_38;
  
  uStack_100 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  *(int8_t *)(*(longlong *)(param_1 + 0x4b8) + 0xd0) = 1;
  lVar5 = param_1 + 0x520;
  lStack_148 = lVar5;
  iVar4 = _Mtx_lock(lVar5);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar9 = 0;
  puVar11 = *(uint64_t **)(param_1 + 0x1a8);
  puVar8 = *(uint64_t **)(param_1 + 0x1a0);
  lVar3 = (longlong)puVar11 - (longlong)puVar8 >> 0x3f;
  uVar6 = uVar9;
  if (((longlong)puVar11 - (longlong)puVar8) / 0x118 + lVar3 != lVar3) {
    do {
      FUN_1803eb9e0(param_1,uVar9 * 0x118 + *(longlong *)(param_1 + 0x1a0));
      uVar12 = (int)uVar6 + 1;
      puVar11 = *(uint64_t **)(param_1 + 0x1a8);
      puVar8 = *(uint64_t **)(param_1 + 0x1a0);
      uVar9 = (ulonglong)(int)uVar12;
      uVar6 = (ulonglong)uVar12;
    } while (uVar9 < (ulonglong)(((longlong)puVar11 - (longlong)puVar8) / 0x118));
  }
  if (puVar8 != puVar11) {
    do {
      (**(code **)*puVar8)(puVar8,0);
      puVar8 = puVar8 + 0x23;
    } while (puVar8 != puVar11);
    puVar8 = *(uint64_t **)(param_1 + 0x1a0);
  }
  *(uint64_t **)(param_1 + 0x1a8) = puVar8;
  iVar4 = _Mtx_unlock(lVar5);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  puStack_120 = auStack_f8;
  FUN_1803f2eb0(auStack_f8);
  FUN_1804724f0(auStack_110,auStack_f8);
  uStack_a8 = 0;
  uStack_a0 = 0xf;
  uStack_b8 = 0;
  FUN_1800671b0(&uStack_b8,&DAT_1809fe2c8,1);
  uStack_158 = 0;
  FUN_1803e8510(*(uint64_t *)(param_1 + 0x188),1,&uStack_b8,auStack_110);
  if (0xf < uStack_a0) {
    uVar6 = uStack_a0 + 1;
    lVar3 = CONCAT71(uStack_b7,uStack_b8);
    lVar5 = lVar3;
    if (0xfff < uVar6) {
      uVar6 = uStack_a0 + 0x28;
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar5) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar5,uVar6);
  }
  uStack_a8 = 0;
  uStack_a0 = 0xf;
  uStack_b8 = 0;
  if (plStack_108 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_108 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_108)(plStack_108);
      LOCK();
      piVar1 = (int *)((longlong)plStack_108 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_108 + 8))(plStack_108);
      }
    }
  }
  do {
    pcVar2 = *(code **)(**(longlong **)(param_1 + 0x4b8) + 0x68);
    if (pcVar2 == (code *)&UNK_1800467f0) {
      cVar13 = (char)(*(longlong **)(param_1 + 0x4b8))[2] != '\0';
    }
    else {
      cVar13 = (*pcVar2)();
    }
  } while (cVar13 == '\0');
  FUN_180481dc0(*(uint64_t *)(param_1 + 0x178),acStack_98,auStack_118);
  if (acStack_98[0] != '\0') {
    pppuVar7 = appuStack_88;
    if (0xf < uStack_70) {
      pppuVar7 = (uint64_t ***)appuStack_88[0];
    }
    FUN_180626ee0(&UNK_180a259e0,pppuVar7);
  }
  plVar10 = (longlong *)(param_1 + 0x440);
  if (0xf < *(ulonglong *)(param_1 + 0x458)) {
    plVar10 = (longlong *)*plVar10;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a25a10,plVar10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803eaf60(longlong *param_1)
void FUN_1803eaf60(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  void *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int8_t auStack_1c8 [32];
  void *puStack_1a8;
  longlong lStack_1a0;
  int32_t uStack_198;
  ulonglong uStack_190;
  void *puStack_188;
  longlong lStack_180;
  int32_t uStack_178;
  ulonglong uStack_170;
  void *puStack_168;
  longlong lStack_160;
  int32_t uStack_158;
  ulonglong uStack_150;
  void *puStack_148;
  void *puStack_140;
  int32_t uStack_130;
  longlong *plStack_128;
  uint64_t uStack_120;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [32];
  void *puStack_e0;
  int8_t *puStack_d8;
  int32_t uStack_d0;
  int8_t auStack_c8 [32];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [32];
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  plStack_128 = param_1 + 7;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if ((ulonglong)*(uint *)(param_1 + 0x86) == param_1[5]) {
    (**(code **)(*param_1 + 0x10))(param_1);
    plVar3 = (longlong *)param_1[0x1b];
    if (param_1[0x1c] - (longlong)plVar3 >> 3 != 0) {
      uVar5 = 0;
      uVar7 = uVar5;
      do {
        FUN_180627ae0(&puStack_148,*(longlong *)((longlong)plVar3 + uVar7) + 0x2d0);
        puStack_168 = &UNK_180a3c3e0;
        uStack_150 = 0;
        lStack_160 = 0;
        uStack_158 = 0;
        puVar4 = &DAT_18098bc73;
        if (puStack_140 != (void *)0x0) {
          puVar4 = puStack_140;
        }
        FUN_180628040(&puStack_168,&UNK_180a25998,puVar4);
        puStack_188 = &UNK_180a3c3e0;
        uStack_170 = 0;
        lStack_180 = 0;
        uStack_178 = 0;
        puVar4 = &DAT_18098bc73;
        if (puStack_140 != (void *)0x0) {
          puVar4 = puStack_140;
        }
        FUN_180628040(&puStack_188,&UNK_180a259a8,puVar4);
        puStack_1a8 = &UNK_180a3c3e0;
        uStack_190 = 0;
        lStack_1a0 = 0;
        uStack_198 = 0;
        puVar4 = &DAT_18098bc73;
        if (puStack_140 != (void *)0x0) {
          puVar4 = puStack_140;
        }
        FUN_180628040(&puStack_1a8,&UNK_180a0d920,puVar4);
        FUN_18062da70(&puStack_188);
        FUN_18062da70(&puStack_1a8);
        FUN_18062c470(&puStack_168);
        puStack_118 = &UNK_18098bc80;
        puStack_110 = auStack_100;
        auStack_100[0] = 0;
        uStack_108 = 5;
        strcpy_s(auStack_100,0x20,&DAT_180a0be28);
        FUN_18062bd50(&puStack_148,&puStack_118);
        puStack_118 = &UNK_18098bcb0;
        puStack_e0 = &UNK_18098bc80;
        auStack_c8[0] = 0;
        uStack_d0 = 4;
        puStack_d8 = auStack_c8;
        strcpy_s(auStack_c8,0x20,&DAT_180a0af70);
        FUN_18062bd50(&puStack_148,&puStack_e0);
        puStack_e0 = &UNK_18098bcb0;
        puStack_a8 = &UNK_18098bc80;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        uStack_98 = 4;
        strcpy_s(auStack_90,0x20,&DAT_1809fd8ac);
        FUN_18062bd50(&puStack_148,&puStack_a8);
        puStack_a8 = &UNK_18098bcb0;
        puStack_70 = &UNK_18098bc80;
        puStack_68 = auStack_58;
        auStack_58[0] = 0;
        uStack_60 = 4;
        strcpy_s(auStack_58,0x20,&UNK_180a25a74);
        FUN_18062bd50(&puStack_148,&puStack_70);
        puStack_70 = &UNK_18098bcb0;
        puStack_1a8 = &UNK_180a3c3e0;
        if (lStack_1a0 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_1a0 = 0;
        uStack_190 = uStack_190 & 0xffffffff00000000;
        puStack_1a8 = &UNK_18098bcb0;
        puStack_188 = &UNK_180a3c3e0;
        if (lStack_180 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_180 = 0;
        uStack_170 = uStack_170 & 0xffffffff00000000;
        puStack_188 = &UNK_18098bcb0;
        puStack_168 = &UNK_180a3c3e0;
        if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_160 = 0;
        uStack_150 = uStack_150 & 0xffffffff00000000;
        puStack_168 = &UNK_18098bcb0;
        puStack_148 = &UNK_180a3c3e0;
        if (puStack_140 != (void *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_140 = (void *)0x0;
        uStack_130 = 0;
        puStack_148 = &UNK_18098bcb0;
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
        uVar7 = uVar7 + 8;
        plVar1 = (longlong *)param_1[0x1c];
        plVar3 = (longlong *)param_1[0x1b];
      } while ((ulonglong)(longlong)(int)uVar6 <
               (ulonglong)((longlong)plVar1 - (longlong)plVar3 >> 3));
      if (plVar3 != plVar1) {
        do {
          if ((longlong *)*plVar3 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar3 + 0x38))();
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar1);
        plVar3 = (longlong *)param_1[0x1b];
      }
      param_1[0x1c] = (longlong)plVar3;
    }
  }
  iVar2 = _Mtx_unlock(plStack_128);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




