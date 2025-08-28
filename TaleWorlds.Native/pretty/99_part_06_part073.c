#include "TaleWorlds.Native.Split.h"

// 99_part_06_part073.c - 4 个函数

// 函数: void FUN_1803ee170(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803ee170(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001803eec0e)
// WARNING: Removing unreachable block (ram,0x0001803eeb81)
// WARNING: Removing unreachable block (ram,0x0001803eec5c)
// WARNING: Removing unreachable block (ram,0x0001803eec67)
// WARNING: Removing unreachable block (ram,0x0001803eec6b)
// WARNING: Removing unreachable block (ram,0x0001803eec9e)
// WARNING: Removing unreachable block (ram,0x0001803eedda)
// WARNING: Removing unreachable block (ram,0x0001803eeda1)
// WARNING: Removing unreachable block (ram,0x0001803eed68)
// WARNING: Removing unreachable block (ram,0x0001803eed2c)
// WARNING: Removing unreachable block (ram,0x0001803eecf0)
// WARNING: Removing unreachable block (ram,0x0001803eecb4)
// WARNING: Removing unreachable block (ram,0x0001803eee12)
// WARNING: Removing unreachable block (ram,0x0001803eee23)
// WARNING: Removing unreachable block (ram,0x0001803eee2b)
// WARNING: Removing unreachable block (ram,0x0001803eee5b)
// WARNING: Removing unreachable block (ram,0x0001803eee60)
// WARNING: Removing unreachable block (ram,0x0001803eee79)
// WARNING: Removing unreachable block (ram,0x0001803eee7e)
// WARNING: Removing unreachable block (ram,0x0001803eee97)
// WARNING: Removing unreachable block (ram,0x0001803eee9c)
// WARNING: Recovered jumptable eliminated as dead code
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ee190(longlong param_1,longlong param_2)
void FUN_1803ee190(longlong param_1,longlong param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  char cVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  int32_t *puVar11;
  ulonglong uVar12;
  void *puVar13;
  char *pcVar14;
  int iVar15;
  longlong *plVar16;
  void *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int8_t auStack_4f8 [32];
  longlong *plStack_4d8;
  uint64_t *puStack_4d0;
  int32_t *puStack_4c8;
  longlong **pplStack_4c0;
  int32_t auStack_4b8 [2];
  uint64_t uStack_4b0;
  uint64_t uStack_4a8;
  void *puStack_4a0;
  int32_t *puStack_498;
  int32_t uStack_490;
  uint64_t uStack_488;
  int iStack_480;
  uint64_t uStack_478;
  int32_t uStack_470;
  int16_t auStack_46c [2];
  int8_t uStack_468;
  int32_t uStack_464;
  void *puStack_460;
  uint64_t uStack_458;
  int32_t uStack_450;
  uint64_t uStack_448;
  void *puStack_440;
  uint64_t uStack_438;
  int32_t uStack_430;
  uint64_t uStack_428;
  void *puStack_420;
  void *puStack_418;
  int32_t uStack_410;
  uint64_t uStack_408;
  void *puStack_400;
  longlong lStack_3f8;
  int32_t uStack_3f0;
  ulonglong uStack_3e8;
  void *puStack_3e0;
  longlong lStack_3d8;
  int32_t uStack_3d0;
  ulonglong uStack_3c8;
  longlong *aplStack_3c0 [2];
  longlong lStack_3b0;
  longlong lStack_3a8;
  longlong *plStack_3a0;
  longlong *plStack_398;
  longlong *plStack_390;
  longlong lStack_388;
  void *puStack_380;
  void *puStack_378;
  int32_t uStack_368;
  uint64_t *puStack_360;
  uint64_t *puStack_358;
  uint64_t uStack_350;
  int32_t uStack_348;
  void *puStack_340;
  longlong lStack_338;
  int32_t uStack_328;
  uint64_t uStack_320;
  longlong lStack_318;
  int8_t uStack_310;
  void *puStack_308;
  longlong lStack_300;
  int32_t uStack_2f0;
  uint64_t uStack_2e8;
  longlong lStack_2d8;
  uint64_t uStack_2d0;
  int32_t uStack_2c8;
  int16_t uStack_2c4;
  longlong *plStack_2b8;
  int8_t *puStack_270;
  uint uStack_260;
  longlong alStack_258 [6];
  int iStack_228;
  int32_t uStack_224;
  int32_t uStack_220;
  int32_t uStack_21c;
  int16_t uStack_218;
  int8_t uStack_216;
  void *puStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [136];
  void *puStack_168;
  int8_t *puStack_160;
  int32_t uStack_158;
  int8_t auStack_150 [264];
  ulonglong uStack_48;
  
  uStack_2e8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_4f8;
  puStack_420 = &UNK_180a3c3e0;
  uStack_408 = 0;
  puStack_418 = (void *)0x0;
  uStack_410 = 0;
  pcVar14 = "";
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 8);
  }
  plVar10 = (longlong *)(param_1 + 0x440);
  plVar16 = plVar10;
  if (0xf < *(ulonglong *)(param_1 + 0x458)) {
    plVar16 = (longlong *)*plVar10;
  }
  lStack_3b0 = param_1;
  lStack_3a8 = param_2;
  FUN_180628040(&puStack_420,&UNK_180a25ca0,plVar16,puVar13);
  puVar13 = &system_buffer_ptr;
  if (puStack_418 != (void *)0x0) {
    puVar13 = puStack_418;
  }
  uStack_320 = 0;
  uStack_310 = 0;
  FUN_18062dee0(&uStack_320,puVar13,&UNK_180a01ff0);
  if (lStack_318 == 0) {
    if (*(char **)(param_2 + 8) != (char *)0x0) {
      pcVar14 = *(char **)(param_2 + 8);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_180a0dcf8,pcVar14);
  }
  uVar7 = _ftelli64(lStack_318);
  _fseeki64(lStack_318,0,2);
  uVar8 = _ftelli64(lStack_318);
  uStack_4a8 = uVar8;
  _fseeki64(lStack_318,uVar7,0);
  iVar15 = (int)uVar8;
  if (iVar15 == 0) {
    uStack_4b0 = 0;
  }
  else {
    uStack_4b0 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar15,3);
  }
  fread(uStack_4b0,(longlong)iVar15,1,lStack_318);
  fclose(lStack_318);
  uVar12 = 0;
  lStack_318 = 0;
  LOCK();
  _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
  UNLOCK();
  FUN_18062da70(&puStack_420);
  puStack_440 = &UNK_180a3c3e0;
  uStack_428 = 0;
  uStack_438 = 0;
  uStack_430 = 0;
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 8);
  }
  FUN_180628040(&puStack_440,&UNK_180a25bfc,puVar13);
  puStack_460 = &UNK_180a3c3e0;
  uStack_448 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  puVar13 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar13 = *(void **)(param_2 + 8);
  }
  if (0xf < *(ulonglong *)(param_1 + 0x458)) {
    plVar10 = (longlong *)*plVar10;
  }
  FUN_180628040(&puStack_460,&UNK_180a25c04,plVar10,puVar13);
  cVar5 = FUN_180624af0(&puStack_440);
  if (cVar5 == '\0') {
    cVar5 = FUN_180624a00(&puStack_460);
    if (cVar5 != '\0') {
      puStack_360 = (uint64_t *)0x0;
      puStack_358 = (uint64_t *)0x0;
      uStack_350 = 0;
      uStack_348 = 3;
      puStack_168 = &UNK_1809feda8;
      puStack_160 = auStack_150;
      auStack_150[0] = 0;
      uStack_158 = 4;
      strcpy_s(auStack_150,0x100,&UNK_180a25cdc);
      FUN_18062cb00(&puStack_460,&puStack_360,&puStack_168);
      puVar3 = puStack_360;
      lVar18 = lStack_3b0;
      puStack_168 = &UNK_18098bcb0;
      uVar20 = (longlong)puStack_358 - (longlong)puStack_360 >> 5;
      puVar1 = puVar3;
      puVar2 = puStack_358;
      if (uVar20 != 0) {
        plVar10 = puStack_360 + 1;
        uVar19 = uVar12;
        do {
          iVar15 = (int)plVar10[1] + -1;
          if (-1 < iVar15) {
            lVar9 = (longlong)iVar15;
            do {
              if (*(char *)(*plVar10 + lVar9) == '/') goto LAB_1803ee585;
              iVar15 = iVar15 + -1;
              lVar9 = lVar9 + -1;
            } while (-1 < lVar9);
          }
          iVar15 = -1;
LAB_1803ee585:
          FUN_180629a40(puVar3 + uVar12 * 4,&puStack_380,iVar15 + 1,0xffffffff);
          puStack_3e0 = &UNK_180a3c3e0;
          uStack_3c8 = 0;
          lStack_3d8 = 0;
          uStack_3d0 = 0;
          puVar13 = &system_buffer_ptr;
          if (puStack_378 != (void *)0x0) {
            puVar13 = puStack_378;
          }
          puVar17 = &system_buffer_ptr;
          if (*(void **)(lVar18 + 0x508) != (void *)0x0) {
            puVar17 = *(void **)(lVar18 + 0x508);
          }
          FUN_180628040(&puStack_3e0,&UNK_180a25c04,puVar17,puVar13);
          FUN_18062dce0(puVar3 + uVar12 * 4,&puStack_3e0);
          puStack_3e0 = &UNK_180a3c3e0;
          if (lStack_3d8 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_3d8 = 0;
          uStack_3c8 = uStack_3c8 & 0xffffffff00000000;
          puStack_3e0 = &UNK_18098bcb0;
          puStack_380 = &UNK_180a3c3e0;
          if (puStack_378 != (void *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_378 = (void *)0x0;
          uStack_368 = 0;
          puStack_380 = &UNK_18098bcb0;
          uVar6 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar6;
          plVar10 = plVar10 + 4;
          uVar12 = (ulonglong)(int)uVar6;
          puVar2 = puStack_358;
          param_2 = lStack_3a8;
        } while (uVar12 < uVar20);
      }
      for (; puVar4 = puStack_358, puVar1 != puStack_358; puVar1 = puVar1 + 4) {
        puStack_358 = puVar2;
        (**(code **)*puVar1)(puVar1,0);
        puVar2 = puStack_358;
        puStack_358 = puVar4;
      }
      puStack_358 = puVar2;
      if (puVar3 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar3);
      }
    }
  }
  else {
    puStack_400 = &UNK_180a3c3e0;
    uStack_3e8 = 0;
    lStack_3f8 = 0;
    uStack_3f0 = 0;
    puVar13 = &system_buffer_ptr;
    if (*(void **)(param_2 + 8) != (void *)0x0) {
      puVar13 = *(void **)(param_2 + 8);
    }
    puVar17 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x508) != (void *)0x0) {
      puVar17 = *(void **)(param_1 + 0x508);
    }
    FUN_180628040(&puStack_400,&UNK_180a25c10,puVar17,puVar13);
    cVar5 = FUN_18062dce0(&puStack_440,&puStack_400);
    if (cVar5 == '\0') {
      puVar13 = &system_buffer_ptr;
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        puVar13 = *(void **)(param_2 + 8);
      }
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a25c20,puVar13);
    }
    puStack_400 = &UNK_180a3c3e0;
    if (lStack_3f8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_3f8 = 0;
    uStack_3e8 = uStack_3e8 & 0xffffffff00000000;
    puStack_400 = &UNK_18098bcb0;
  }
  lVar18 = 0;
  FUN_1801eb9b0(&lStack_2d8);
  uStack_478 = 0xffffffffffffffff;
  uStack_470 = 0xffffffff;
  auStack_46c[0] = 0xffff;
  aplStack_3c0[0] = (longlong *)0x0;
  if (*(uint *)(param_2 + 0x10) < 2) {
LAB_1803ee8e0:
    uVar7 = FUN_180629a40(param_2,&puStack_308,2);
    puStack_4d0 = &uStack_2d0;
    plStack_4d8 = &lStack_388;
    FUN_1801c85f0(plStack_4d8,uVar7);
    plVar10 = plStack_2b8;
    puStack_308 = &UNK_180a3c3e0;
    if (lStack_300 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_300 = 0;
    uStack_2f0 = 0;
    puStack_308 = &UNK_18098bcb0;
    plStack_390 = plStack_2b8;
    plStack_2b8 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x38))();
    }
    lStack_2d8 = lStack_388;
    if (*(char **)(lStack_388 + 0x18) != (char *)0x0) {
      pcVar14 = *(char **)(lStack_388 + 0x18);
    }
    iStack_228 = 0x1505;
    cVar5 = *pcVar14;
    while (cVar5 != '\0') {
      pcVar14 = pcVar14 + 1;
      iStack_228 = iStack_228 * 0x21 + (int)cVar5;
      cVar5 = *pcVar14;
    }
    uStack_224 = (int32_t)((ulonglong)uStack_2d0 >> 0x20);
    uStack_220 = (int32_t)uStack_2d0;
    uStack_21c = uStack_2c8;
    uStack_218 = uStack_2c4;
    uStack_216 = (int8_t)auStack_4b8[0];
    lVar18 = lStack_388;
  }
  else {
    do {
      if ((&UNK_180a0d604 + lVar18)[*(longlong *)(param_2 + 8) + -0x180a0d604] !=
          (&UNK_180a0d604)[lVar18]) goto LAB_1803ee8e0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < 2);
    FUN_180629a40(param_2,&puStack_340,2);
    puStack_208 = &UNK_1809fcc28;
    puStack_200 = auStack_1f0;
    uStack_1f8 = 0;
    auStack_1f0[0] = 0;
    pplStack_4c0 = aplStack_3c0;
    puStack_4c8 = &uStack_464;
    puStack_4d0 = (uint64_t *)auStack_46c;
    plStack_4d8 = (longlong *)&uStack_470;
    FUN_1801d0890(&puStack_340,auStack_4b8,&puStack_208,&uStack_478);
    uStack_468 = (int8_t)auStack_4b8[0];
    plVar10 = (longlong *)FUN_1800b31f0(_DAT_180c86930,&plStack_3a0,&puStack_208,1);
    lVar18 = *plVar10;
    if (plStack_3a0 != (longlong *)0x0) {
      (**(code **)(*plStack_3a0 + 0x38))();
    }
    plVar10 = aplStack_3c0[0];
    if (*(char **)(lVar18 + 0x18) != (char *)0x0) {
      pcVar14 = *(char **)(lVar18 + 0x18);
    }
    iStack_480 = 0x1505;
    cVar5 = *pcVar14;
    while (cVar5 != '\0') {
      pcVar14 = pcVar14 + 1;
      iStack_480 = iStack_480 * 0x21 + (int)cVar5;
      cVar5 = *pcVar14;
    }
    uStack_2c4 = auStack_46c[0];
    uStack_2c8 = uStack_470;
    uStack_2d0 = uStack_478;
    plStack_398 = aplStack_3c0[0];
    lStack_2d8 = lVar18;
    if (aplStack_3c0[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_3c0[0] + 0x28))(aplStack_3c0[0]);
    }
    plVar16 = plStack_2b8;
    plStack_398 = plStack_2b8;
    plStack_2b8 = plVar10;
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x38))();
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x38))(plVar10);
    }
    FUN_1803d1790(&lStack_2d8,uStack_464);
    puStack_208 = &UNK_18098bcb0;
    puStack_340 = &UNK_180a3c3e0;
    if (lStack_338 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_338 = 0;
    uStack_328 = 0;
    puStack_340 = &UNK_18098bcb0;
  }
  switch(auStack_4b8[0]) {
  case 0:
    puVar13 = &UNK_180a0d2a8;
    break;
  case 1:
    puVar13 = &UNK_180a0d2e0;
    break;
  case 2:
    puVar13 = &UNK_180a0d298;
    break;
  case 3:
  case 4:
    puVar13 = &UNK_180a0d2b0;
    break;
  case 5:
    puVar13 = &UNK_180a0d2a0;
    break;
  default:
    goto LAB_1803eea49;
  }
  (**(code **)(alStack_258[0] + 0x10))(alStack_258,puVar13);
LAB_1803eea49:
  puStack_4a0 = &UNK_180a3c3e0;
  uStack_488 = 0;
  puStack_498 = (int32_t *)0x0;
  uStack_490 = 0;
  puVar11 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x17,0x13);
  *(int8_t *)puVar11 = 0;
  puStack_498 = puVar11;
  uVar6 = FUN_18064e990(puVar11);
  *puVar11 = 0x2e2f2e2e;
  puVar11[1] = 0x68532f2e;
  puVar11[2] = 0x72656461;
  puVar11[3] = 0x6f532f73;
  puVar11[4] = 0x65637275;
  *(int16_t *)(puVar11 + 5) = 0x2f73;
  *(int8_t *)((longlong)puVar11 + 0x16) = 0;
  uStack_490 = 0x16;
  iVar15 = *(int *)(lVar18 + 0x16c0);
  uStack_488._0_4_ = uVar6;
  if (0 < iVar15) {
    if ((iVar15 != -0x16) && (uVar6 < iVar15 + 0x17U)) {
      plStack_4d8 = (longlong *)CONCAT71(plStack_4d8._1_7_,0x13);
      puVar11 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar11,iVar15 + 0x17U,0x10);
      puStack_498 = puVar11;
      uStack_488._0_4_ = FUN_18064e990(puVar11);
      iVar15 = *(int *)(lVar18 + 0x16c0);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((longlong)puVar11 + 0x16),*(uint64_t *)(lVar18 + 0x16b8),
           (longlong)(iVar15 + 1));
  }
  if (puVar11 == (int32_t *)0x0) {
    puVar11 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x1a,0x13);
    *(int8_t *)puVar11 = 0;
LAB_1803eeb9e:
    puStack_498 = puVar11;
    uStack_488._0_4_ = FUN_18064e990(puVar11);
  }
  else if (uVar6 < 0x1a) {
    plStack_4d8 = (longlong *)CONCAT71(plStack_4d8._1_7_,0x13);
    puVar11 = (int32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar11,0x1a,0x10);
    goto LAB_1803eeb9e;
  }
  *(int32_t *)((longlong)puVar11 + 0x16) = 0x73722e;
  uStack_490 = 0x19;
  if (puVar11 != (int32_t *)0x0) {
    if (puStack_270 == (int8_t *)0x0) {
      puStack_270 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,0x1a,0x13);
      *puStack_270 = 0;
    }
    else {
      if (0x19 < uStack_260) goto LAB_1803eec46;
      plStack_4d8 = (longlong *)CONCAT71(plStack_4d8._1_7_,0x13);
      puStack_270 = (int8_t *)FUN_18062b8b0(_DAT_180c8ed18,puStack_270,0x1a,0x10);
    }
    uStack_260 = FUN_18064e990(puStack_270);
  }
LAB_1803eec46:
                    // WARNING: Subroutine does not return
  memcpy(puStack_270,puVar11,0x19);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803eef10(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_1803eef10(longlong param_1,longlong param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  void *puVar2;
  void *puVar3;
  int8_t auStack_158 [32];
  void *puStack_138;
  void *puStack_130;
  int32_t uStack_128;
  ulonglong uStack_120;
  uint64_t uStack_118;
  int8_t *puStack_110;
  void *puStack_108;
  longlong alStack_100 [4];
  int32_t uStack_e0;
  int8_t uStack_d4;
  int8_t auStack_b0 [80];
  uint64_t *puStack_60;
  int16_t uStack_58;
  ulonglong uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  puStack_138 = &UNK_180a3c3e0;
  uStack_120 = 0;
  puStack_130 = (void *)0x0;
  uStack_128 = 0;
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_2 + 8);
  }
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x4e8) != (void *)0x0) {
    puVar3 = *(void **)(param_1 + 0x4e8);
  }
  FUN_180628040(&puStack_138,&UNK_180a25ce8,puVar3,puVar2);
  FUN_180637560(&puStack_108);
  uStack_58 = 1;
  uStack_e0 = 0;
  uStack_d4 = 0;
  puStack_108 = &UNK_1809fe6d8;
  puVar2 = &system_buffer_ptr;
  if (puStack_130 != (void *)0x0) {
    puVar2 = puStack_130;
  }
  (**(code **)(alStack_100[0] + 0x10))(alStack_100,puVar2);
  puVar1 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  *puVar1 = 0;
  *(int8_t *)(puVar1 + 2) = 0;
  FUN_18062dee0(puVar1,puVar2,&system_data_c7ec);
  puStack_60 = puVar1;
  if (puVar1[1] != 0) {
    uStack_58 = 0x100;
    (**(code **)(puStack_108 + 0x78))(&puStack_108,param_3);
    puStack_108 = &UNK_180a3cf50;
    if (uStack_58._1_1_ != '\0') {
      FUN_180639250(&puStack_108);
    }
    puStack_110 = auStack_b0;
    _Mtx_destroy_in_situ(auStack_b0);
    FUN_1805065c0(&puStack_108);
    puStack_138 = &UNK_180a3c3e0;
    if (puStack_130 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_130 = (void *)0x0;
    uStack_120 = uStack_120 & 0xffffffff00000000;
    puStack_138 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_158);
  }
  uStack_58 = CONCAT11(uStack_58._1_1_,1);
  puVar2 = &system_buffer_ptr;
  if (puStack_130 != (void *)0x0) {
    puVar2 = puStack_130;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a25cf8,puVar2);
}



void * FUN_1803ef110(longlong param_1,int32_t param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x4d0);
  if (iVar2 == 5) {
    lVar3 = 0;
    do {
      lVar4 = lVar3 + 1;
      if (*(char *)(*(longlong *)(param_1 + 0x4c8) + lVar3) != (&UNK_180a0ce64)[lVar3])
      goto LAB_1803ef1c9;
      lVar3 = lVar4;
    } while (lVar4 != 6);
    switch(param_2) {
    case 0:
      return &UNK_180a02200;
    case 1:
      return &UNK_180a02228;
    case 2:
      return &UNK_180a02238;
    case 3:
      return &UNK_180a02248;
    case 4:
      return &UNK_180a02270;
    case 5:
      return &UNK_180a02218;
    }
  }
  else {
LAB_1803ef1c9:
    if ((iVar2 == 8) &&
       (iVar1 = strcmp(*(uint64_t *)(param_1 + 0x4c8),&UNK_180a0cf50), iVar1 == 0)) {
      switch(param_2) {
      case 0:
        return &UNK_180a02258;
      case 1:
        return &UNK_180a02290;
      case 2:
        return &UNK_180a022a0;
      case 3:
        return &UNK_180a022b8;
      case 4:
        return &UNK_180a022d8;
      case 5:
        return &UNK_180a02280;
      }
    }
    else if (iVar2 == 7) {
      lVar3 = 0;
      do {
        lVar4 = lVar3 + 1;
        if (*(char *)(*(longlong *)(param_1 + 0x4c8) + lVar3) != (&UNK_180a0ce90)[lVar3])
        goto LAB_1803ef2d7;
        lVar3 = lVar4;
      } while (lVar4 != 8);
      switch(param_2) {
      case 0:
        return &UNK_180a020d8;
      case 1:
        return &UNK_180a020d0;
      case 2:
        return &UNK_180a020f8;
      case 3:
        return &UNK_180a020e0;
      case 4:
        return &UNK_180a020f0;
      case 5:
        return &UNK_180a020e8;
      }
    }
    else {
LAB_1803ef2d7:
      if ((iVar2 == 8) &&
         (iVar2 = strcmp(*(uint64_t *)(param_1 + 0x4c8),&UNK_180a0ce70), iVar2 == 0)) {
        switch(param_2) {
        case 0:
          return &UNK_180a020a8;
        case 1:
          return &UNK_180a020a0;
        case 2:
          return &UNK_180a020c8;
        case 3:
          return &UNK_180a020b0;
        case 4:
          return &UNK_180a020c0;
        case 5:
          return &UNK_180a020b8;
        }
      }
      else {
        switch(param_2) {
        case 0:
          return &UNK_180a01d04;
        case 1:
          return &UNK_180a01cfc;
        case 2:
          return &UNK_180a01d24;
        case 3:
          return &UNK_180a01d0c;
        case 4:
          return &UNK_180a01d1c;
        case 5:
          return &UNK_180a01d14;
        }
      }
    }
  }
  return &system_data_5d28;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ef430(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
void FUN_1803ef430(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  uint64_t uVar2;
  ulonglong *puVar3;
  void *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int8_t *puVar7;
  void *puVar8;
  void *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  int8_t auStack_348 [32];
  char cStack_328;
  int32_t uStack_324;
  void *puStack_320;
  void *puStack_318;
  int iStack_310;
  ulonglong uStack_308;
  longlong *plStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  void **ppuStack_2e8;
  uint64_t uStack_2e0;
  int8_t uStack_2d8;
  uint8_t uStack_2d7;
  uint64_t uStack_2c8;
  ulonglong uStack_2c0;
  ulonglong uStack_2b8;
  ulonglong uStack_2b0;
  ulonglong uStack_2a8;
  ulonglong uStack_2a0;
  int8_t uStack_298;
  uint8_t uStack_297;
  uint64_t uStack_288;
  ulonglong uStack_280;
  void *apuStack_278 [68];
  ulonglong uStack_58;
  
  uStack_2e0 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_348;
  uVar11 = 0;
  uStack_324 = 0;
  ppuStack_2e8 = &puStack_320;
  puStack_320 = &UNK_180a3c3e0;
  uStack_308 = 0;
  puStack_318 = (void *)0x0;
  iStack_310 = 0;
  plStack_300 = param_1;
  lStack_2f8 = param_4;
  lStack_2f0 = param_2;
  cStack_328 = (**(code **)(*param_1 + 0x38))(param_1,param_2 + 0x48,&puStack_320);
  puVar4 = &system_buffer_ptr;
  if ((void *)param_1[0x41] != (void *)0x0) {
    puVar4 = (void *)param_1[0x41];
  }
  (**(code **)(*param_5 + 0x10))(param_5,puVar4);
  FUN_180627f00(param_5,&UNK_180a25ca8);
  uVar2 = FUN_1803ef110(param_1,*(int32_t *)(param_2 + 0xa4));
  FUN_180627f00(param_5,uVar2);
  FUN_180627f00(param_5,&system_data_5cb4);
  FUN_180627f00(param_5,&system_data_22f0);
  FUN_180627e90(param_5,param_2 + 0x80);
  lVar10 = *param_3;
  lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar10),8) +
          (param_3[1] - lVar10);
  uVar6 = uVar11;
  if (lVar5 >> 6 != lVar5 >> 0x3f) {
    do {
      if ((*(int *)(uVar11 + 0x10 + lVar10) == 0xd) &&
         (iVar1 = strcmp(*(uint64_t *)(uVar11 + 8 + lVar10),&UNK_180a02158), iVar1 == 0)) {
        puVar4 = *(void **)(uVar11 + 0x60 + lVar10);
        puVar8 = &system_buffer_ptr;
        if (puVar4 != (void *)0x0) {
          puVar8 = puVar4;
        }
        FUN_180628040(param_5,&UNK_180a25cc0,puVar8);
      }
      else {
        puVar4 = *(void **)(uVar11 + 0x60 + lVar10);
        puVar8 = &system_buffer_ptr;
        if (puVar4 != (void *)0x0) {
          puVar8 = puVar4;
        }
        puVar4 = *(void **)(uVar11 + 8 + lVar10);
        puVar9 = &system_buffer_ptr;
        if (puVar4 != (void *)0x0) {
          puVar9 = puVar4;
        }
        FUN_180628040(param_5,&UNK_180a25cd0,puVar9,puVar8);
      }
      uVar13 = (int)uVar6 + 1;
      uVar11 = uVar11 + 0x78;
      lVar10 = *param_3;
      lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar10),8) +
              (param_3[1] - lVar10);
      param_1 = plStack_300;
      uVar6 = (ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)((lVar5 >> 6) - (lVar5 >> 0x3f)));
  }
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lStack_2f8 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lStack_2f8 + 8);
  }
  plVar12 = param_1 + 0x88;
  uStack_2c8 = 0;
  uStack_2c0 = 0xf;
  uStack_2d8 = 0;
  uStack_324 = 1;
  FUN_1803f45e0(&uStack_2d8,param_1[0x8a] + 1);
  if (0xf < (ulonglong)param_1[0x8b]) {
    plVar12 = (longlong *)*plVar12;
  }
  FUN_1803f5400(&uStack_2d8,plVar12,param_1[0x8a]);
  FUN_1803f5400(&uStack_2d8,&system_data_cfb8,1);
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (puVar4[lVar10] != '\0');
  puVar3 = (ulonglong *)FUN_1803f5400(&uStack_2d8,puVar4);
  uStack_2b8 = *puVar3;
  uStack_2b0 = puVar3[1];
  uStack_2a8 = puVar3[2];
  uStack_2a0 = puVar3[3];
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  *(int8_t *)puVar3 = 0;
  uStack_324 = 3;
  FUN_1803f3a40(&uStack_298,&uStack_2b8,&system_data_209c);
  uStack_324 = 1;
  if (0xf < uStack_2a0) {
    uVar6 = uStack_2a0 + 1;
    uVar11 = uStack_2b8;
    if (0xfff < uVar6) {
      uVar6 = uStack_2a0 + 0x28;
      uVar11 = *(ulonglong *)(uStack_2b8 - 8);
      if (0x1f < (uStack_2b8 - uVar11) - 8) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(uVar11,uVar6);
  }
  uStack_2a8 = 0;
  uStack_2a0 = 0xf;
  uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
  uStack_324 = 0;
  if (0xf < uStack_2c0) {
    uVar11 = uStack_2c0 + 1;
    if ((0xfff < uVar11) &&
       (uVar11 = uStack_2c0 + 0x28,
       0x1f < (CONCAT71(uStack_2d7,uStack_2d8) - *(longlong *)(CONCAT71(uStack_2d7,uStack_2d8) + -8)
              ) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(0,uVar11);
  }
  uStack_2c8 = 0;
  uStack_2c0 = 0xf;
  uStack_2d8 = 0;
  if ((char)param_1[0xaf] != '\0') {
    puVar4 = &system_buffer_ptr;
    if ((void *)param_1[0xa1] != (void *)0x0) {
      puVar4 = (void *)param_1[0xa1];
    }
    FUN_180628040(param_5,&UNK_180a25d78,puVar4);
  }
  if ((cStack_328 != '\0') && (iStack_310 != 0)) {
    puVar4 = &system_buffer_ptr;
    if (puStack_318 != (void *)0x0) {
      puVar4 = puStack_318;
    }
    FUN_180628040(param_5,&UNK_180a25d90,puVar4);
  }
  FUN_180627f00(param_5,&UNK_180a25d98);
  FUN_180627f00(param_5,&system_data_2320);
  puVar7 = &uStack_298;
  if (0xf < uStack_280) {
    puVar7 = (int8_t *)CONCAT71(uStack_297,uStack_298);
  }
  FUN_180627f00(param_5,puVar7);
  FUN_180627f00(param_5,&system_data_c8e4);
  lVar10 = FUN_180624440(apuStack_278,lStack_2f0 + 0x60);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar10 + 8);
  }
  FUN_180627f00(param_5,puVar4);
  apuStack_278[0] = &UNK_18098bcb0;
  if (0xf < uStack_280) {
    uVar11 = uStack_280 + 1;
    lVar5 = CONCAT71(uStack_297,uStack_298);
    lVar10 = lVar5;
    if (0xfff < uVar11) {
      uVar11 = uStack_280 + 0x28;
      lVar10 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar11);
  }
  uStack_288 = 0;
  uStack_280 = 0xf;
  uStack_298 = 0;
  ppuStack_2e8 = &puStack_320;
  puStack_320 = &UNK_180a3c3e0;
  if (puStack_318 == (void *)0x0) {
    puStack_318 = (void *)0x0;
    uStack_308 = uStack_308 & 0xffffffff00000000;
    puStack_320 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_348);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




