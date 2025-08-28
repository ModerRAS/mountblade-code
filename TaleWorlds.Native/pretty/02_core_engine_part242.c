#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part242.c - 2 个函数

// 函数: void FUN_18020a890(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4,
void FUN_18020a890(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t *param_4,
                  int64_t *param_5)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int32_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t *******pppppppuVar11;
  byte *pbVar12;
  uint64_t ******ppppppuVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  int iVar22;
  void *puVar23;
  int64_t *plVar24;
  int64_t lVar25;
  uint64_t *******pppppppuVar26;
  uint64_t uVar27;
  char *pcVar28;
  char *pcVar29;
  uint64_t *******pppppppuVar30;
  uint64_t *******pppppppuVar31;
  int iVar32;
  int8_t auStack_508 [32];
  int8_t auStack_4e8 [8];
  void *puStack_4e0;
  byte *pbStack_4d8;
  int iStack_4d0;
  uint64_t uStack_4c8;
  char *pcStack_4c0;
  uint64_t *puStack_4b8;
  int64_t *plStack_4b0;
  uint64_t uStack_4a8;
  int64_t *plStack_4a0;
  char *pcStack_498;
  int64_t *plStack_490;
  uint64_t *******pppppppuStack_488;
  uint64_t *******pppppppuStack_480;
  uint64_t *******pppppppuStack_478;
  uint64_t uStack_470;
  uint64_t uStack_468;
  int32_t uStack_460;
  int32_t uStack_458;
  int64_t *plStack_450;
  int64_t *plStack_448;
  int64_t *plStack_440;
  int64_t *plStack_438;
  int64_t *plStack_430;
  int64_t lStack_428;
  uint64_t uStack_420;
  void *apuStack_418 [3];
  int8_t auStack_400 [8];
  int8_t auStack_3f8 [152];
  int64_t alStack_360 [13];
  void *puStack_2f8;
  void *puStack_2f0;
  char acStack_d8 [144];
  uint64_t uStack_48;
  
  pcVar28 = core_system_data_memory;
  uStack_420 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_508;
  plStack_430 = param_5;
  uVar27 = 0;
  uStack_458 = 0;
  pcStack_498 = core_system_data_memory;
  plStack_448 = param_4;
  plStack_440 = (int64_t *)param_2;
  lStack_428 = param_3;
  plVar5 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x50,8,3);
  *plVar5 = (int64_t)&system_state_ptr;
  plVar5[1] = 0;
  *(int32_t *)(plVar5 + 2) = 0;
  *plVar5 = (int64_t)&system_data_buffer_ptr;
  plVar5[3] = 0;
  plVar5[1] = 0;
  *(int32_t *)(plVar5 + 2) = 0;
  plStack_4a0 = plVar5 + 5;
  *plStack_4a0 = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  *(int32_t *)(plVar5 + 8) = 3;
  *(int8_t *)(plVar5 + 9) = 1;
  plStack_450 = plVar5;
  plStack_438 = plVar5;
  (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
  uVar7 = *system_main_module_state;
  uVar6 = FUN_1800bb630(&pcStack_4c0,plVar5);
  uVar4 = FUN_180141820(uVar7,uVar6);
  *(int32_t *)(plVar5 + 4) = uVar4;
  pcStack_4c0 = &system_data_buffer_ptr;
  if (puStack_4b8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_4b8 = (uint64_t *)0x0;
  uStack_4a8 = (int64_t *)((uint64_t)uStack_4a8._4_4_ << 0x20);
  pcStack_4c0 = &system_state_ptr;
  uVar7 = FUN_18020d6c0(pcVar28,plVar5 + 4);
  SystemInitializer(uVar7,&plStack_450);
  uStack_460 = 3;
  pppppppuStack_488 = &pppppppuStack_488;
  pppppppuStack_480 = &pppppppuStack_488;
  pppppppuStack_478 = (uint64_t *******)0x0;
  uStack_470 = 0;
  uStack_468 = 0;
  if (*(int *)(system_main_module_state + 4) == 1) {
    pcStack_4c0 = &system_data_buffer_ptr;
    uStack_4a8 = (int64_t *)0x0;
    puStack_4b8 = (uint64_t *)0x0;
    plStack_4b0 = (int64_t *)((uint64_t)plStack_4b0 & 0xffffffff00000000);
    puVar8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x45,0x13);
    *(int8_t *)puVar8 = 0;
    puStack_4b8 = puVar8;
    uVar4 = CoreEngineSystemCleanup(puVar8);
    uStack_4a8 = (int64_t *)CONCAT44(uStack_4a8._4_4_,uVar4);
    *puVar8 = 0x6f4d2f4553414224;
    puVar8[1] = 0x614e2f73656c7564;
    puVar8[2] = 0x646f4d2f65766974;
    puVar8[3] = 0x2f61746144656c75;
    *(int32_t *)(puVar8 + 4) = 0x65726f43;
    *(int32_t *)((int64_t)puVar8 + 0x24) = 0x656d6147;
    *(int32_t *)(puVar8 + 5) = 0x65666552;
    *(int32_t *)((int64_t)puVar8 + 0x2c) = 0x636e6572;
    *(int32_t *)(puVar8 + 6) = 0x702f7365;
    *(int32_t *)((int64_t)puVar8 + 0x34) = 0x61666572;
    *(int32_t *)(puVar8 + 7) = 0x6e655f62;
    *(int32_t *)((int64_t)puVar8 + 0x3c) = 0x79746974;
    *(int32_t *)(puVar8 + 8) = 0x7478742e;
    *(int8_t *)((int64_t)puVar8 + 0x44) = 0;
    plStack_4b0 = (int64_t *)CONCAT44(plStack_4b0._4_4_,0x44);
    FUN_180624440(&puStack_2f8,&pcStack_4c0);
    puVar23 = &system_buffer_ptr;
    if (puStack_2f0 != (void *)0x0) {
      puVar23 = puStack_2f0;
    }
    apuStack_418[0] = &ui_system_data_1752_ptr;
    apuStack_418[2] = &rendering_buffer_2368_ptr;
    __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(alStack_360);
    uStack_458 = 1;
    __0__basic_iostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__Z
              (apuStack_418,auStack_400,0);
    *(void **)((int64_t)apuStack_418 + (int64_t)*(int *)(apuStack_418[0] + 4)) =
         &ui_system_data_1768_ptr;
    *(int *)((int64_t)apuStack_418 + (int64_t)*(int *)(apuStack_418[0] + 4) + -4) =
         *(int *)(apuStack_418[0] + 4) + -0xb8;
    FUN_18009ec20(auStack_400);
    lVar9 = FUN_1800c4800(auStack_400,puVar23,1);
    if (lVar9 == 0) {
      _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                ((int64_t)apuStack_418 + (int64_t)*(int *)(apuStack_418[0] + 4),2,0);
    }
    plVar5 = (int64_t *)
             _getline___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                       (apuStack_418,acStack_d8,0x80);
    if ((*(byte *)((int64_t)*(int *)(*plVar5 + 4) + 0x10 + (int64_t)plVar5) & 6) == 0) {
      puStack_4e0 = &system_data_buffer_ptr;
      uStack_4c8 = 0;
      pbStack_4d8 = (byte *)0x0;
      iStack_4d0 = 0;
      lVar9 = -1;
      do {
        lVar25 = lVar9;
        lVar9 = lVar25 + 1;
      } while (acStack_d8[lVar25 + 1] != '\0');
      if ((int)(lVar25 + 1) != 0) {
        iVar22 = (int)lVar25 + 2;
        iVar32 = iVar22;
        if (iVar22 < 0x10) {
          iVar32 = 0x10;
        }
        pbStack_4d8 = (byte *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar32,0x13);
        *pbStack_4d8 = 0;
        uVar4 = CoreEngineSystemCleanup(pbStack_4d8);
        uStack_4c8 = CONCAT44(uStack_4c8._4_4_,uVar4);
                    // WARNING: Subroutine does not return
        memcpy(pbStack_4d8,acStack_d8,iVar22);
      }
      iStack_4d0 = 0;
      FUN_180628a40(&puStack_4e0);
      plVar10 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,(int8_t)uStack_460);
      plVar5 = plVar10 + 4;
      CoreEngineDataTransformer(plVar5,&puStack_4e0);
      plStack_450 = plVar10;
      bVar2 = true;
      pppppppuVar31 = &pppppppuStack_488;
      pppppppuVar11 = pppppppuStack_478;
      while (pppppppuVar11 != (uint64_t *******)0x0) {
        pppppppuVar31 = pppppppuVar11;
        if (*(int *)(pppppppuVar11 + 6) == 0) {
          bVar2 = false;
LAB_18020acc0:
          pppppppuVar11 = (uint64_t *******)*pppppppuVar11;
        }
        else {
          if ((int)plVar10[6] == 0) {
            bVar2 = true;
          }
          else {
            ppppppuVar13 = pppppppuVar11[5];
            lVar9 = plVar10[5] - (int64_t)ppppppuVar13;
            do {
              bVar1 = *(byte *)ppppppuVar13;
              uVar18 = (uint)*(byte *)((int64_t)ppppppuVar13 + lVar9);
              if (bVar1 != uVar18) break;
              ppppppuVar13 = (uint64_t ******)((int64_t)ppppppuVar13 + 1);
            } while (uVar18 != 0);
            bVar2 = 0 < (int)(bVar1 - uVar18);
          }
          if (!bVar2) goto LAB_18020acc0;
          pppppppuVar11 = (uint64_t *******)pppppppuVar11[1];
        }
      }
      pppppppuVar11 = pppppppuVar31;
      if (bVar2) {
        if (pppppppuVar31 != pppppppuStack_480) {
          pppppppuVar11 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar31);
          goto LAB_18020ace0;
        }
      }
      else {
LAB_18020ace0:
        if ((int)plVar10[6] == 0) {
LAB_18020adb5:
          *plVar5 = (int64_t)&system_data_buffer_ptr;
          plStack_490 = plVar5;
          if (plVar10[5] == 0) {
            plVar10[5] = 0;
            *(int32_t *)(plVar10 + 7) = 0;
            *plVar5 = (int64_t)&system_state_ptr;
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(plVar10);
          }
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        if (*(int *)(pppppppuVar11 + 6) != 0) {
          pbVar12 = (byte *)plVar10[5];
          lVar9 = (int64_t)pppppppuVar11[5] - (int64_t)pbVar12;
          do {
            bVar1 = *pbVar12;
            uVar18 = (uint)pbVar12[lVar9];
            if (bVar1 != uVar18) break;
            pbVar12 = pbVar12 + 1;
          } while (uVar18 != 0);
          if ((int)(bVar1 - uVar18) < 1) goto LAB_18020adb5;
        }
      }
      if ((uint64_t ********)pppppppuVar31 == &pppppppuStack_488) goto LAB_18020ada0;
      if (*(int *)(pppppppuVar31 + 6) != 0) {
        if ((int)plVar10[6] == 0) goto LAB_18020ada0;
        ppppppuVar13 = pppppppuVar31[5];
        lVar9 = plVar10[5] - (int64_t)ppppppuVar13;
        do {
          bVar1 = *(byte *)ppppppuVar13;
          uVar18 = (uint)*(byte *)((int64_t)ppppppuVar13 + lVar9);
          if (bVar1 != uVar18) break;
          ppppppuVar13 = (uint64_t ******)((int64_t)ppppppuVar13 + 1);
        } while (uVar18 != 0);
        if (0 < (int)(bVar1 - uVar18)) goto LAB_18020ada0;
      }
      uVar27 = 1;
LAB_18020ada0:
                    // WARNING: Subroutine does not return
      SystemConfigProcessor(plVar10,pppppppuVar31,&pppppppuStack_488,uVar27);
    }
    plStack_490 = alStack_360;
    *(void **)((int64_t)apuStack_418 + (int64_t)*(int *)(apuStack_418[0] + 4)) =
         &ui_system_data_1768_ptr;
    *(int *)((int64_t)apuStack_418 + (int64_t)*(int *)(apuStack_418[0] + 4) + -4) =
         *(int *)(apuStack_418[0] + 4) + -0xb8;
    FUN_18009fb60(auStack_400);
    __1__basic_iostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_3f8);
    __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(alStack_360);
    puStack_2f8 = &system_state_ptr;
    pcStack_4c0 = &system_data_buffer_ptr;
    if (puStack_4b8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_4b8 = (uint64_t *)0x0;
    uStack_4a8 = (int64_t *)((uint64_t)uStack_4a8 & 0xffffffff00000000);
    pcStack_4c0 = &system_state_ptr;
  }
  uVar7 = CoreMemoryPoolValidator(&pcStack_4c0,param_2);
  cVar3 = FUN_180624af0(uVar7);
  pcStack_4c0 = &system_data_buffer_ptr;
  if (puStack_4b8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_4b8 = (uint64_t *)0x0;
  uStack_4a8 = (int64_t *)((uint64_t)uStack_4a8 & 0xffffffff00000000);
  pcStack_4c0 = &system_state_ptr;
  if (cVar3 == '\0') goto LAB_18020b750;
  puVar14 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3088,8,3);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[4] = 0;
  *(int32_t *)(puVar14 + 5) = 0;
  puVar14[6] = 0;
  puVar14[8] = 0;
  puVar14[0x60f] = 0;
  puVar14[0x610] = 0;
  puVar8 = puVar14 + 0xf;
  puVar14[0xc] = puVar8;
  puVar14[0xd] = (uint64_t)(-(int)puVar8 & 7) + (int64_t)puVar8;
  puVar14[0xe] = puVar14 + 0x60f;
  puVar14[0x60f] = &processed_var_8432_ptr;
  puVar14[0x610] = SystemResourceCleaner;
  puVar8 = (uint64_t *)param_4[1];
  plStack_490 = puVar14;
  if (puVar8 < (uint64_t *)param_4[2]) {
    param_4[1] = (int64_t)(puVar8 + 1);
    *puVar8 = puVar14;
  }
  else {
    puVar16 = (uint64_t *)*param_4;
    lVar9 = (int64_t)puVar8 - (int64_t)puVar16 >> 3;
    if (lVar9 == 0) {
      lVar9 = 1;
LAB_18020afd3:
      puVar15 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 8,(char)param_4[3]);
      puVar8 = (uint64_t *)param_4[1];
      puVar16 = (uint64_t *)*param_4;
    }
    else {
      lVar9 = lVar9 * 2;
      if (lVar9 != 0) goto LAB_18020afd3;
      puVar15 = (uint64_t *)0x0;
    }
    if (puVar16 != puVar8) {
                    // WARNING: Subroutine does not return
      memmove(puVar15,puVar16,(int64_t)puVar8 - (int64_t)puVar16);
    }
    *puVar15 = puVar14;
    if (*param_4 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_4 = (int64_t)puVar15;
    param_4[1] = (int64_t)(puVar15 + 1);
    param_4[2] = (int64_t)(puVar15 + lVar9);
  }
  puVar16 = (uint64_t *)0x0;
  plVar5 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *(int32_t *)(plVar5 + 3) = 10;
  puVar8 = (uint64_t *)param_5[1];
  plStack_490 = plVar5;
  if (puVar8 < (uint64_t *)param_5[2]) {
    param_5[1] = (int64_t)(puVar8 + 1);
    *puVar8 = plVar5;
  }
  else {
    puVar15 = (uint64_t *)*param_5;
    lVar9 = (int64_t)puVar8 - (int64_t)puVar15 >> 3;
    if (lVar9 == 0) {
      lVar9 = 1;
LAB_18020b0af:
      puVar16 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 8,(char)param_5[3]);
      puVar8 = (uint64_t *)param_5[1];
      puVar15 = (uint64_t *)*param_5;
    }
    else {
      lVar9 = lVar9 * 2;
      if (lVar9 != 0) goto LAB_18020b0af;
    }
    if (puVar15 != puVar8) {
                    // WARNING: Subroutine does not return
      memmove(puVar16,puVar15,(int64_t)puVar8 - (int64_t)puVar15);
    }
    *puVar16 = plVar5;
    if (*param_5 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_5 = (int64_t)puVar16;
    param_5[1] = (int64_t)(puVar16 + 1);
    param_5[2] = (int64_t)(puVar16 + lVar9);
  }
  if (param_2 != 0) {
    FUN_180631420(param_2,puVar14,plVar5);
  }
  pcVar28 = "prefabs";
  do {
    pcVar29 = pcVar28;
    pcVar28 = pcVar29 + 1;
  } while (*pcVar28 != '\0');
  for (puVar8 = (uint64_t *)puVar14[6]; puVar8 != (uint64_t *)0x0;
      puVar8 = (uint64_t *)puVar8[0xb]) {
    pcVar19 = (char *)*puVar8;
    pcVar28 = (char *)0x0;
    if (pcVar19 == (char *)0x0) {
      pcVar19 = (char *)0x180d48d24;
    }
    else {
      pcVar28 = (char *)puVar8[2];
    }
    if (pcVar28 == pcVar29 + -0x180a0ffa7) {
      pcVar28 = pcVar28 + (int64_t)pcVar19;
      if (pcVar28 <= pcVar19) goto LAB_18020b1b3;
      lVar9 = (int64_t)&rendering_buffer_2152_ptr - (int64_t)pcVar19;
      while (*pcVar19 == pcVar19[lVar9]) {
        pcVar19 = pcVar19 + 1;
        if (pcVar28 <= pcVar19) goto LAB_18020b1b3;
      }
    }
  }
  puVar8 = (uint64_t *)0x0;
LAB_18020b1b3:
  lVar9 = FUN_180631000(puVar8,&rendering_buffer_2160_ptr,auStack_4e8);
  plVar5 = plStack_438;
  if (lVar9 == 0) {
    auStack_4e8[0] = 1;
  }
  *(int8_t *)(plStack_438 + 9) = auStack_4e8[0];
  plVar10 = (int64_t *)FUN_18020d6c0(pcStack_498,plStack_438 + 4);
  plStack_448 = plVar10;
  if (puVar8 != (uint64_t *)0x0) {
    pcVar28 = "game_entity";
    do {
      pcVar29 = pcVar28;
      pcVar28 = pcVar29 + 1;
    } while (*pcVar28 != '\0');
    for (pcVar28 = (char *)puVar8[6]; pcVar28 != (char *)0x0; pcVar28 = *(char **)(pcVar28 + 0x58))
    {
      pcVar19 = *(char **)pcVar28;
      if (pcVar19 == (char *)0x0) {
        pcVar19 = (char *)0x180d48d24;
        pcVar21 = (char *)0x0;
      }
      else {
        pcVar21 = *(char **)(pcVar28 + 0x10);
      }
      if (pcVar21 == pcVar29 + -0x180a0b67f) {
        pcVar21 = pcVar21 + (int64_t)pcVar19;
        if (pcVar21 <= pcVar19) goto LAB_18020b280;
        lVar9 = (int64_t)&memory_allocator_3424_ptr - (int64_t)pcVar19;
        while (*pcVar19 == pcVar19[lVar9]) {
          pcVar19 = pcVar19 + 1;
          if (pcVar21 <= pcVar19) goto LAB_18020b280;
        }
      }
    }
  }
LAB_18020b750:
  FUN_18005d260(&pppppppuStack_488,pppppppuStack_478);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_508);
  while( true ) {
    uStack_4c8 = uStack_4c8 & 0xffffffff00000000;
    pbStack_4d8 = (byte *)0x0;
    puStack_4e0 = &system_state_ptr;
    if (pcVar28 == (char *)0x0) break;
LAB_18020b280:
    pcVar29 = (char *)0x0;
    puStack_4e0 = &system_data_buffer_ptr;
    uStack_4c8 = 0;
    pbStack_4d8 = (byte *)0x0;
    iStack_4d0 = 0;
    pcVar19 = "name";
    do {
      pcVar21 = pcVar19;
      pcVar19 = pcVar21 + 1;
    } while (*pcVar19 != '\0');
    for (puVar8 = *(uint64_t **)(pcVar28 + 0x40); puVar8 != (uint64_t *)0x0;
        puVar8 = (uint64_t *)puVar8[6]) {
      pcVar19 = (char *)*puVar8;
      if (pcVar19 == (char *)0x0) {
        pcVar19 = (char *)0x180d48d24;
        pcVar17 = pcVar29;
      }
      else {
        pcVar17 = (char *)puVar8[2];
      }
      if (pcVar17 == pcVar21 + -0x180a03a83) {
        pcVar17 = pcVar19 + (int64_t)pcVar17;
        if (pcVar17 <= pcVar19) {
LAB_18020b304:
          lVar9 = 0x180d48d24;
          if (puVar8[1] != 0) {
            lVar9 = puVar8[1];
          }
          FUN_180627c50(&puStack_4e0,lVar9);
          break;
        }
        lVar9 = (int64_t)&system_state_3a84 - (int64_t)pcVar19;
        while (*pcVar19 == pcVar19[lVar9]) {
          pcVar19 = pcVar19 + 1;
          if (pcVar17 <= pcVar19) goto LAB_18020b304;
        }
      }
    }
    if (*(int *)(system_main_module_state + 4) != 1) goto LAB_18020b488;
    pppppppuVar31 = &pppppppuStack_488;
    pppppppuVar11 = pppppppuStack_478;
    if (pppppppuStack_478 == (uint64_t *******)0x0) {
LAB_18020b3fb:
      pcVar19 = "game_entity";
      do {
        pcVar21 = pcVar19;
        pcVar19 = pcVar21 + 1;
      } while (*pcVar19 != '\0');
      for (pcVar19 = *(char **)(pcVar28 + 0x58); pcVar28 = pcVar29, pcVar19 != (char *)0x0;
          pcVar19 = *(char **)(pcVar19 + 0x58)) {
        pcVar17 = *(char **)pcVar19;
        if (pcVar17 == (char *)0x0) {
          pcVar17 = (char *)0x180d48d24;
          pcVar20 = pcVar29;
        }
        else {
          pcVar20 = *(char **)(pcVar19 + 0x10);
        }
        if (pcVar20 == pcVar21 + -0x180a0b67f) {
          pcVar20 = pcVar20 + (int64_t)pcVar17;
          pcVar28 = pcVar19;
          if (pcVar20 <= pcVar17) break;
          lVar9 = (int64_t)&memory_allocator_3424_ptr - (int64_t)pcVar17;
          while (*pcVar17 == pcVar17[lVar9]) {
            pcVar17 = pcVar17 + 1;
            if (pcVar20 <= pcVar17) goto LAB_18020b45e;
          }
        }
      }
LAB_18020b45e:
      puStack_4e0 = &system_data_buffer_ptr;
      if (pbStack_4d8 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    else {
      do {
        if (iStack_4d0 == 0) {
          bVar2 = false;
          pppppppuVar26 = (uint64_t *******)pppppppuVar11[1];
        }
        else {
          if (*(int *)(pppppppuVar11 + 6) == 0) {
            bVar2 = true;
          }
          else {
            pbVar12 = pbStack_4d8;
            do {
              uVar18 = (uint)pbVar12[(int64_t)pppppppuVar11[5] - (int64_t)pbStack_4d8];
              iVar32 = *pbVar12 - uVar18;
              if (*pbVar12 != uVar18) break;
              pbVar12 = pbVar12 + 1;
            } while (uVar18 != 0);
            bVar2 = 0 < iVar32;
            if (iVar32 < 1) {
              pppppppuVar26 = (uint64_t *******)pppppppuVar11[1];
              goto LAB_18020b3a7;
            }
          }
          pppppppuVar26 = (uint64_t *******)*pppppppuVar11;
        }
LAB_18020b3a7:
        pppppppuVar30 = pppppppuVar11;
        if (bVar2) {
          pppppppuVar30 = pppppppuVar31;
        }
        pppppppuVar11 = pppppppuVar26;
        pppppppuVar31 = pppppppuVar30;
      } while (pppppppuVar26 != (uint64_t *******)0x0);
      if ((uint64_t ********)pppppppuVar30 == &pppppppuStack_488) goto LAB_18020b3fb;
      if (*(int *)(pppppppuVar30 + 6) != 0) {
        if (iStack_4d0 != 0) {
          ppppppuVar13 = pppppppuVar30[5];
          lVar9 = (int64_t)pbStack_4d8 - (int64_t)ppppppuVar13;
          do {
            bVar1 = *(byte *)ppppppuVar13;
            uVar18 = (uint)*(byte *)((int64_t)ppppppuVar13 + lVar9);
            if (bVar1 != uVar18) break;
            ppppppuVar13 = (uint64_t ******)((int64_t)ppppppuVar13 + 1);
          } while (uVar18 != 0);
          if ((int)(bVar1 - uVar18) < 1) goto LAB_18020b488;
        }
        goto LAB_18020b3fb;
      }
LAB_18020b488:
      plStack_4b0 = (int64_t *)0x0;
      iVar32 = (int)(plVar10[1] - *plVar10 >> 3) + -1;
      puStack_4b8 = (uint64_t *)CONCAT44(puStack_4b8._4_4_,iVar32);
      pcStack_4c0 = pcVar28;
      uStack_4a8 = plVar5;
      uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2f0,0x10,0xd);
      plVar10 = (int64_t *)FUN_1802e6b00(uVar7,4);
      plStack_490 = plVar10;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10);
      }
      plVar24 = plStack_4a0;
      puVar8 = (uint64_t *)plStack_4a0[1];
      if (puVar8 < (uint64_t *)plStack_4a0[2]) {
        plStack_4a0[1] = (int64_t)(puVar8 + 1);
        *puVar8 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
      }
      else {
        puVar14 = (uint64_t *)*plStack_4a0;
        lVar9 = (int64_t)puVar8 - (int64_t)puVar14 >> 3;
        if (lVar9 == 0) {
          lVar9 = 1;
LAB_18020b539:
          pcVar29 = (char *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 8);
          puVar8 = (uint64_t *)plVar24[1];
          puVar14 = (uint64_t *)*plVar24;
          pcVar19 = pcVar29;
        }
        else {
          lVar9 = lVar9 * 2;
          pcVar19 = pcVar29;
          if (lVar9 != 0) goto LAB_18020b539;
        }
        for (; puVar14 != puVar8; puVar14 = puVar14 + 1) {
          *(uint64_t *)pcVar29 = *puVar14;
          *puVar14 = 0;
          pcVar29 = pcVar29 + 8;
        }
        *(int64_t **)pcVar29 = plVar10;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        pcStack_498 = pcVar29 + 8;
        plVar5 = (int64_t *)plVar24[1];
        plVar24 = (int64_t *)*plStack_4a0;
        if (plVar24 != plVar5) {
          do {
            if ((int64_t *)*plVar24 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar24 + 0x38))();
            }
            plVar24 = plVar24 + 1;
          } while (plVar24 != plVar5);
          plVar24 = (int64_t *)*plStack_4a0;
        }
        if (plVar24 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar24);
        }
        *plStack_4a0 = (int64_t)pcVar19;
        plStack_4a0[1] = (int64_t)pcStack_498;
        plStack_4a0[2] = (int64_t)(pcVar19 + lVar9 * 8);
        plVar5 = plStack_438;
      }
      if (plVar10 != (int64_t *)0x0) {
        plStack_440 = plVar10;
        (**(code **)(*plVar10 + 0x28))(plVar10);
      }
      plStack_440 = (int64_t *)0x0;
      pcVar29 = *(char **)(lStack_428 + 8);
      plStack_4b0 = plVar10;
      if (pcVar29 < *(char **)(lStack_428 + 0x10)) {
        *(char **)(lStack_428 + 8) = pcVar29 + 0x20;
        *(char **)pcVar29 = pcVar28;
        *(int *)(pcVar29 + 8) = iVar32;
        *(int64_t **)(pcVar29 + 0x10) = plVar10;
        pcStack_498 = pcVar29;
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x28))(plVar10);
        }
        *(int64_t **)(pcVar29 + 0x18) = plVar5;
        plVar24 = plVar10;
      }
      else {
        FUN_18020d8a0(lStack_428,&pcStack_4c0);
        plVar24 = plStack_4b0;
      }
      pcVar29 = "game_entity";
      do {
        pcVar19 = pcVar29;
        pcVar29 = pcVar19 + 1;
      } while (*pcVar29 != '\0');
      for (pcVar29 = *(char **)(pcVar28 + 0x58); pcVar28 = (char *)0x0, pcVar29 != (char *)0x0;
          pcVar29 = *(char **)(pcVar29 + 0x58)) {
        pcVar21 = *(char **)pcVar29;
        if (pcVar21 == (char *)0x0) {
          pcVar17 = (char *)0x0;
          pcVar21 = (char *)0x180d48d24;
        }
        else {
          pcVar17 = *(char **)(pcVar29 + 0x10);
        }
        if (pcVar17 == pcVar19 + -0x180a0b67f) {
          pcVar17 = pcVar17 + (int64_t)pcVar21;
          pcVar28 = pcVar29;
          if (pcVar17 <= pcVar21) break;
          lVar9 = (int64_t)&memory_allocator_3424_ptr - (int64_t)pcVar21;
          while (*pcVar21 == pcVar21[lVar9]) {
            pcVar21 = pcVar21 + 1;
            if (pcVar17 <= pcVar21) goto LAB_18020b6e6;
          }
        }
      }
LAB_18020b6e6:
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10);
      }
      if (plVar24 != (int64_t *)0x0) {
        (**(code **)(*plVar24 + 0x38))(plVar24);
      }
      puStack_4e0 = &system_data_buffer_ptr;
      plVar10 = plStack_448;
      if (pbStack_4d8 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
  }
  goto LAB_18020b750;
}





// 函数: void FUN_18020b790(void)
void FUN_18020b790(void)

{
                    // WARNING: Subroutine does not return
  SystemEventProcessor();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



