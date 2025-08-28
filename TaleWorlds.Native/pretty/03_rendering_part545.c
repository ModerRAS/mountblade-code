#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part545.c - 1 个函数

// 函数: void FUN_180567fd0(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
void FUN_180567fd0(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
                  uint64_t param_5)

{
  double dVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void *puVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  void *puVar12;
  uint64_t uVar13;
  void *puVar14;
  int64_t lVar15;
  int8_t auStack_618 [32];
  void *puStack_5f8;
  void *puStack_5f0;
  void *puStack_5e8;
  int64_t lStack_5d8;
  float *pfStack_5d0;
  int64_t lStack_5c8;
  int16_t uStack_5c0;
  int8_t uStack_5be;
  int iStack_5b8;
  uint uStack_5b4;
  uint uStack_5b0;
  uint uStack_5ac;
  uint uStack_5a8;
  uint uStack_5a4;
  uint uStack_5a0;
  uint uStack_59c;
  uint64_t uStack_598;
  int64_t alStack_590 [2];
  void *puStack_580;
  void *puStack_578;
  uint64_t uStack_570;
  int16_t uStack_568;
  int8_t uStack_566;
  uint64_t *puStack_560;
  void *puStack_558;
  void *puStack_550;
  uint uStack_548;
  int32_t uStack_540;
  int32_t uStack_538;
  int32_t uStack_534;
  int32_t uStack_530;
  int32_t uStack_52c;
  void *puStack_528;
  void *puStack_520;
  uint64_t *puStack_518;
  uint64_t *puStack_510;
  void **ppuStack_508;
  void *puStack_4f8;
  void *puStack_4f0;
  int iStack_4e8;
  int32_t uStack_4e0;
  void *puStack_4d8;
  int8_t uStack_4d0;
  int8_t auStack_4c8 [16];
  void *puStack_4b8;
  char cStack_4b0;
  void *puStack_4a8;
  int64_t lStack_4a0;
  int32_t uStack_490;
  uint64_t uStack_488;
  uint64_t *puStack_480;
  uint64_t *puStack_478;
  uint64_t *puStack_470;
  int8_t auStack_468 [1024];
  uint64_t uStack_68;
  
  uStack_488 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_618;
  uStack_598 = param_5;
  lStack_5d8 = 0;
  lStack_5c8 = 0;
  uStack_5c0 = 0;
  uStack_5be = 3;
  pfStack_5d0 = (float *)0x0;
  puVar12 = (void *)0x4;
  puStack_560 = param_2;
  puStack_518 = param_3;
  puStack_510 = param_4;
  ppuStack_508 = (void **)param_1;
  puStack_480 = param_2;
  puStack_478 = param_3;
  puStack_470 = param_4;
  System_BufferManager(&lStack_5d8,4);
  lVar10 = param_1[3];
  if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) < 5) {
    System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (4 - lStack_5d8));
  }
  lVar9 = lStack_5d8;
  *pfStack_5d0 = (float)(int)lVar10;
  pfStack_5d0 = pfStack_5d0 + 1;
  plVar2 = (int64_t *)*param_1;
  if (plVar2 != param_1) {
    lVar10 = plVar2[2];
    uVar6 = (int64_t)
            (int)((uint)((*(uint *)(lVar10 + 0x5c8) & 7) != 0) +
                 ((int)*(uint *)(lVar10 + 0x5c8) >> 3)) + 0xc;
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) <= uVar6) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (uVar6 - lStack_5d8));
      lVar10 = plVar2[2];
    }
    uVar3 = *(int32_t *)(lVar10 + 0x5c8);
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) < 5) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (4 - lStack_5d8));
    }
    *pfStack_5d0 = (float)uVar3;
    pfStack_5d0 = pfStack_5d0 + 1;
    uVar3 = *(int32_t *)(plVar2[2] + 0x5a0);
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) < 5) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (4 - lStack_5d8));
    }
    *pfStack_5d0 = (float)uVar3;
    pfStack_5d0 = pfStack_5d0 + 1;
    lVar10 = plVar2[2];
    dVar1 = *(double *)(lVar10 + 0x5a8);
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) < 5) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (4 - lStack_5d8));
      lVar10 = plVar2[2];
    }
    *pfStack_5d0 = (float)dVar1;
    pfStack_5d0 = pfStack_5d0 + 1;
    uVar6 = (uint64_t)
            (int)((uint)((*(uint *)(lVar10 + 0x5c8) & 7) != 0) +
                 ((int)*(uint *)(lVar10 + 0x5c8) >> 3));
    uVar13 = *(uint64_t *)(lVar10 + 0x598);
    if ((uint64_t)((lStack_5c8 - (int64_t)pfStack_5d0) + lStack_5d8) <= uVar6) {
      System_BufferManager(&lStack_5d8,(int64_t)pfStack_5d0 + (uVar6 - lStack_5d8));
    }
                    // WARNING: Subroutine does not return
    memcpy(pfStack_5d0,uVar13,uVar6);
  }
  puStack_528 = (void *)((int64_t)pfStack_5d0 - lStack_5d8);
  if (lStack_5d8 == 0) {
    puStack_528 = (void *)0x0;
  }
  puStack_580 = (void *)0x0;
  puStack_578 = (void *)0x0;
  uStack_570 = 0;
  uStack_568 = 0;
  uStack_566 = 3;
  if (puStack_528 + ((uint64_t)puStack_528 >> 2) != (void *)0x0) {
    System_BufferManager(&puStack_580);
  }
  puVar14 = puStack_580;
  puStack_578 = puStack_580;
  pfStack_5d0 = (float *)lVar9;
  puStack_4d8 = &unknown_var_3856_ptr;
  uStack_4d0 = 1;
  puStack_5f8 = puStack_580;
  puStack_5f0 = puStack_528;
  puStack_520 = puStack_528;
  FUN_18021f4e0(&puStack_4d8,auStack_4c8,lVar9);
  if (cStack_4b0 != '\0') goto LAB_1805689b3;
  puStack_520 = puStack_4b8;
  FUN_1800baa40(&puStack_558);
  if (0 < *(int *)(param_2 + 2)) {
    CoreEngineDataBufferProcessor(&puStack_558,uStack_548 + *(int *)(param_2 + 2));
                    // WARNING: Subroutine does not return
    memcpy(puStack_550 + uStack_548,param_2[1],(int64_t)(*(int *)(param_2 + 2) + 1));
  }
  uVar8 = uStack_548 + 4;
  CoreEngineDataBufferProcessor(&puStack_558,uVar8);
  *(int32_t *)(puStack_550 + uStack_548) = 0x6365722e;
  *(int8_t *)((int64_t)(puStack_550 + uStack_548) + 4) = 0;
  alStack_590[0] = -1;
  puVar7 = &system_buffer_ptr;
  if (puStack_550 != (void *)0x0) {
    puVar7 = puStack_550;
  }
  uStack_548 = uVar8;
  FUN_18063ba00(alStack_590,puVar7,10,0x108);
  lVar10 = alStack_590[0];
  uVar6 = uStack_598;
  if (alStack_590[0] == -1) {
    puStack_5f0 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      puStack_5f0 = (void *)param_2[1];
    }
    puStack_5f8 = &unknown_var_8632_ptr;
    FUN_1800623b0(system_message_context,0,0x10000000000,8);
    puVar12 = &system_buffer_ptr;
    if ((void *)param_2[1] != (void *)0x0) {
      puVar12 = (void *)param_2[1];
    }
    FUN_180627160(&unknown_var_8776_ptr,puVar12);
  }
  else {
    uStack_538 = *(int32_t *)(puStack_518 + 2);
    uStack_534 = *(int32_t *)(uStack_598 + 0x98d9a0);
    uStack_530 = *(int32_t *)(puStack_510 + 2);
    FUN_180627910(&puStack_4f8,uStack_598 + 0x87bbec);
    iStack_5b8 = iStack_4e8;
    uStack_52c = *(int32_t *)(uVar6 + 0x87bca4);
    uVar6 = 4;
    lVar15 = 0;
    do {
      uStack_5b4 = 0;
      uVar11 = 0xffffffff;
      if (uVar6 < 0xffffffff) {
        uVar11 = uVar6 & 0xffffffff;
      }
      puStack_5f8 = (void *)0x0;
      WriteFile(lVar10,(int64_t)&uStack_538 + lVar15,uVar11,&uStack_5b4);
      puVar14 = puStack_580;
      lVar9 = lStack_5d8;
      lVar15 = lVar15 + (uint64_t)uStack_5b4;
      uVar6 = uVar6 - uStack_5b4;
    } while (uVar6 != 0);
    if (lVar15 == 4) {
      iVar4 = *(int *)(puStack_518 + 2);
      puVar7 = &system_buffer_ptr;
      if ((void *)puStack_518[1] != (void *)0x0) {
        puVar7 = (void *)puStack_518[1];
      }
      lVar15 = FUN_18063bd10(alStack_590,puVar7,(int64_t)(iVar4 + 1));
      if (lVar15 != iVar4 + 1) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        uStack_5b0 = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        puStack_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&uStack_534 + lVar15,uVar11,&uStack_5b0);
        puVar14 = puStack_580;
        lVar9 = lStack_5d8;
        lVar15 = lVar15 + (uint64_t)uStack_5b0;
        uVar6 = uVar6 - uStack_5b0;
      } while (uVar6 != 0);
      if (lVar15 != 4) goto LAB_180568833;
      lVar15 = (int64_t)(*(int *)(uStack_598 + 0x98d9a0) + 1);
      puVar7 = &system_buffer_ptr;
      if (*(void **)(uStack_598 + 0x98d998) != (void *)0x0) {
        puVar7 = *(void **)(uStack_598 + 0x98d998);
      }
      lVar5 = FUN_18063bd10(alStack_590,puVar7,lVar15);
      if (lVar5 != lVar15) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        uStack_5ac = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        puStack_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&uStack_530 + lVar15,uVar11,&uStack_5ac);
        puVar14 = puStack_580;
        lVar9 = lStack_5d8;
        lVar15 = lVar15 + (uint64_t)uStack_5ac;
        uVar6 = uVar6 - uStack_5ac;
      } while (uVar6 != 0);
      if (lVar15 != 4) goto LAB_180568833;
      iVar4 = *(int *)(puStack_510 + 2);
      puVar7 = &system_buffer_ptr;
      if ((void *)puStack_510[1] != (void *)0x0) {
        puVar7 = (void *)puStack_510[1];
      }
      lVar15 = FUN_18063bd10(alStack_590,puVar7,(int64_t)(iVar4 + 1));
      if (lVar15 != iVar4 + 1) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        uStack_5a8 = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        puStack_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&iStack_5b8 + lVar15,uVar11,&uStack_5a8);
        puVar14 = puStack_580;
        lVar9 = lStack_5d8;
        lVar15 = lVar15 + (uint64_t)uStack_5a8;
        uVar6 = uVar6 - uStack_5a8;
      } while (uVar6 != 0);
      if (lVar15 != 4) goto LAB_180568833;
      puVar7 = &system_buffer_ptr;
      if (puStack_4f0 != (void *)0x0) {
        puVar7 = puStack_4f0;
      }
      lVar15 = FUN_18063bd10(alStack_590,puVar7,(int64_t)(iStack_5b8 + 1));
      if (lVar15 != iStack_5b8 + 1) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        uStack_5a4 = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        puStack_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&uStack_52c + lVar15,uVar11,&uStack_5a4);
        lVar15 = lVar15 + (uint64_t)uStack_5a4;
        uVar6 = uVar6 - uStack_5a4;
      } while (uVar6 != 0);
      lVar9 = lStack_5d8;
      puVar14 = puStack_580;
      if (lVar15 != 4) goto LAB_180568833;
      uVar6 = 4;
      lVar15 = 0;
      do {
        uStack_5a0 = 0;
        uVar11 = 0xffffffff;
        if (uVar6 < 0xffffffff) {
          uVar11 = uVar6 & 0xffffffff;
        }
        puStack_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&puStack_528 + lVar15,uVar11,&uStack_5a0);
        lVar15 = lVar15 + (uint64_t)uStack_5a0;
        uVar6 = uVar6 - uStack_5a0;
      } while (uVar6 != 0);
      lVar9 = lStack_5d8;
      puVar14 = puStack_580;
      if (lVar15 != 4) goto LAB_180568833;
      lVar15 = 0;
      do {
        uStack_59c = 0;
        uVar6 = 0xffffffff;
        if (puVar12 < (void *)0xffffffff) {
          uVar6 = (uint64_t)puVar12 & 0xffffffff;
        }
        puStack_5f8 = (void *)0x0;
        WriteFile(lVar10,(int64_t)&puStack_520 + lVar15,uVar6,&uStack_59c);
        puVar14 = puStack_580;
        lVar15 = lVar15 + (uint64_t)uStack_59c;
        puVar12 = puVar12 + -(uint64_t)uStack_59c;
      } while (puVar12 != (void *)0x0);
      lVar9 = lStack_5d8;
      if (lVar15 != 4) goto LAB_180568833;
      iVar4 = (int)puStack_520;
      uVar6 = (uint64_t)puStack_520 & 0xffffffff;
      lVar15 = 0;
      if ((int)puStack_520 != 0) {
        lVar15 = 0;
        do {
          uStack_598 = uStack_598 & 0xffffffff00000000;
          uVar11 = 0xffffffff;
          if (uVar6 < 0xffffffff) {
            uVar11 = uVar6 & 0xffffffff;
          }
          puStack_5f8 = puVar12;
          WriteFile(lVar10,puVar14 + lVar15,uVar11,&uStack_598);
          lVar15 = lVar15 + (uStack_598 & 0xffffffff);
          uVar6 = uVar6 - (uStack_598 & 0xffffffff);
        } while (uVar6 != 0);
      }
      lVar9 = lStack_5d8;
      if ((int)lVar15 != iVar4) {
        uVar3 = GetLastError();
        puStack_5f0 = (void *)CONCAT44(puStack_5f0._4_4_,0x400);
        puStack_5f8 = auStack_468;
        puStack_5e8 = puVar12;
        iVar4 = FormatMessageA(0x1000,0,uVar3,0x400);
        if (iVar4 == 0) {
          uVar3 = GetLastError();
          SystemDataInitializer(&unknown_var_3400_ptr,uVar3);
        }
        puStack_5f0 = &system_buffer_ptr;
        if ((void *)puStack_560[1] != (void *)0x0) {
          puStack_5f0 = (void *)puStack_560[1];
        }
        goto LAB_1805688a3;
      }
      LOCK();
      SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
      UNLOCK();
      CloseHandle(alStack_590[0]);
      lVar10 = -1;
      alStack_590[0] = -1;
      lVar9 = lStack_5d8;
      puVar14 = puStack_580;
      param_2 = puStack_560;
    }
    else {
LAB_180568833:
      uVar3 = GetLastError();
      puStack_5e8 = (void *)0x0;
      puStack_5f0 = (void *)CONCAT44(puStack_5f0._4_4_,0x400);
      puStack_5f8 = auStack_468;
      iVar4 = FormatMessageA(0x1000,0,uVar3,0x400);
      if (iVar4 == 0) {
        uVar3 = GetLastError();
        SystemDataInitializer(&unknown_var_3400_ptr,uVar3);
      }
      puStack_5f0 = &system_buffer_ptr;
      if ((void *)puStack_560[1] != (void *)0x0) {
        puStack_5f0 = (void *)puStack_560[1];
      }
LAB_1805688a3:
      param_2 = puStack_560;
      puStack_5e8 = auStack_468;
      puStack_5f8 = &unknown_var_8672_ptr;
      FUN_1800623b0(system_message_context,0,0x10000000000,3);
    }
    puStack_4f8 = &system_data_buffer_ptr;
    if (puStack_4f0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    uStack_4e0 = 0;
    puStack_4f8 = &system_state_ptr;
    puStack_4f0 = (void *)0x0;
  }
  if (lVar10 != -1) {
    LOCK();
    SYSTEM_HANDLE_COUNTER_ADDR = SYSTEM_HANDLE_COUNTER_ADDR + -1;
    UNLOCK();
    CloseHandle(alStack_590[0]);
    alStack_590[0] = -1;
    lVar9 = lStack_5d8;
    puVar14 = puStack_580;
  }
  puStack_558 = &system_data_buffer_ptr;
  if (puStack_550 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_540 = 0;
  puStack_558 = &system_state_ptr;
  puStack_550 = (void *)0x0;
LAB_1805689b3:
  uVar13 = 0;
  FUN_180569560(ppuStack_508);
  ppuStack_508 = &puStack_4a8;
  puStack_4a8 = &system_data_buffer_ptr;
  if (lStack_4a0 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_490 = 0;
  puStack_4a8 = &system_state_ptr;
  lStack_4a0 = uVar13;
  if (((char)uStack_568 == '\0') && (puVar14 != (void *)0x0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar14);
  }
  if (((char)uStack_5c0 == '\0') && (lVar9 != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar9);
  }
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &system_state_ptr;
  *puStack_518 = &system_data_buffer_ptr;
  if (puStack_518[1] == 0) {
    puStack_518[1] = 0;
    *(int32_t *)(puStack_518 + 3) = 0;
    *puStack_518 = &system_state_ptr;
    *puStack_510 = &system_data_buffer_ptr;
    if (puStack_510[1] == 0) {
      puStack_510[1] = 0;
      *(int32_t *)(puStack_510 + 3) = 0;
      *puStack_510 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_618);
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



