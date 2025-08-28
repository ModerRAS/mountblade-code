#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 99_part_01_part018.c - 3 个函数

// 函数: void SystemInitializer(int64_t param_1,int64_t ***param_2,int64_t param_3,int *param_4)
void SystemInitializer(int64_t param_1,int64_t ***param_2,int64_t param_3,int *param_4)

{
  double *pdVar1;
  code *pcVar2;
  uint64_t *puVar3;
  double dVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint64_t *puVar18;
  int64_t lVar19;
  int64_t **pplVar20;
  uint64_t uVar21;
  int64_t *plVar22;
  uint64_t *puVar23;
  uint64_t *puVar24;
  uint64_t uVar25;
  void *puVar26;
  int32_t uVar27;
  uint64_t uVar28;
  uint64_t *puVar29;
  uint uVar30;
  int64_t *plVar31;
  int64_t lVar32;
  int8_t auStack_548 [32];
  uint uStack_528;
  int64_t ***ppplStack_520;
  int64_t *plStack_518;
  uint64_t *puStack_510;
  uint64_t *puStack_508;
  uint64_t *puStack_500;
  int32_t uStack_4f8;
  int32_t uStack_4f0;
  int64_t lStack_4e8;
  uint64_t *puStack_4e0;
  int64_t **pplStack_4d8;
  int64_t **pplStack_4d0;
  int64_t *plStack_4c8;
  int64_t **pplStack_4c0;
  int64_t **pplStack_4b8;
  int64_t lStack_4b0;
  int64_t *plStack_4a8;
  int64_t *plStack_4a0;
  uint64_t *puStack_498;
  uint64_t uStack_490;
  uint64_t uStack_488;
  uint64_t uStack_480;
  int64_t **pplStack_478;
  uint64_t *puStack_470;
  uint64_t uStack_468;
  uint64_t uStack_460;
  uint64_t uStack_458;
  uint64_t uStack_450;
  int iStack_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  uint64_t uStack_438;
  uint64_t uStack_428;
  uint64_t uStack_420;
  uint64_t uStack_418;
  uint64_t uStack_410;
  int iStack_408;
  int iStack_404;
  int iStack_400;
  int iStack_3fc;
  uint64_t uStack_3f8;
  int64_t *plStack_3e8;
  int8_t *puStack_3e0;
  int32_t uStack_3d8;
  int8_t auStack_3d0 [128];
  int64_t *aplStack_350 [19];
  int64_t *aplStack_2b8 [20];
  int64_t *plStack_218;
  int8_t *puStack_210;
  int32_t uStack_208;
  int8_t auStack_200 [128];
  int32_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  uint64_t uStack_148;
  int64_t *plStack_140;
  int64_t *plStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [128];
  int32_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  uint64_t uStack_68;
  int64_t *plStack_60;
  uint64_t uStack_58;
  
  uStack_480 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_548;
  *param_2 = (int64_t **)0x0;
  uStack_4f0 = 1;
  puVar29 = (uint64_t *)(param_1 + 0x770);
  ppplStack_520 = param_2;
  lStack_4e8 = param_3;
  puStack_4e0 = puVar29;
  puStack_498 = puVar29;
  pplStack_478 = (int64_t **)param_2;
  iVar16 = _Mtx_lock(puVar29);
  if (iVar16 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar16);
  }
  puStack_510 = (uint64_t *)0x0;
  puStack_508 = (uint64_t *)0x0;
  puStack_500 = (uint64_t *)0x0;
  uStack_4f8 = 3;
  uVar25 = 0;
  uStack_528 = 0;
  plVar31 = (int64_t *)(param_1 + 0x6c0);
  lVar19 = *plVar31;
  plStack_4a8 = plVar31;
  if (*(int64_t *)(param_1 + 0x6c8) - lVar19 >> 3 != 0) {
    uVar28 = 0;
    do {
      puVar24 = puStack_508;
      puVar29 = puStack_510;
      uVar30 = (uint)uVar25;
      if (*(int *)(*(int64_t *)(lVar19 + uVar28 * 8) + 8) == 1) {
        uStack_490 = *(int64_t *)(*plVar31 + uVar28 * 8);
        uStack_488 = *(uint64_t *)(uStack_490 + 0x270);
        if (puStack_508 < puStack_500) {
          uStack_490._4_4_ = (int32_t)((uint64_t)uStack_490 >> 0x20);
          uStack_488._4_4_ = (int32_t)((uint64_t)uStack_488 >> 0x20);
          *(int32_t *)puStack_508 = (int32_t)uStack_490;
          *(int32_t *)((int64_t)puStack_508 + 4) = uStack_490._4_4_;
          *(int32_t *)(puStack_508 + 1) = (int32_t)uStack_488;
          *(int32_t *)((int64_t)puStack_508 + 0xc) = uStack_488._4_4_;
          puStack_508 = puStack_508 + 2;
        }
        else {
          lStack_4b0 = (int64_t)puStack_508 - (int64_t)puStack_510;
          if (lStack_4b0 >> 4 == 0) {
            lVar19 = 1;
LAB_1800b1376:
            puVar18 = (uint64_t *)
                      CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar19 << 4,CONCAT71((int7)(uVar25 >> 8),3));
          }
          else {
            lVar19 = (lStack_4b0 >> 4) * 2;
            if (lVar19 != 0) goto LAB_1800b1376;
            puVar18 = (uint64_t *)0x0;
          }
          if (puVar29 != puVar24) {
                    // WARNING: Subroutine does not return
            memmove(puVar18,puVar29,lStack_4b0);
          }
          *(int32_t *)puVar18 = (int32_t)uStack_490;
          *(int32_t *)((int64_t)puVar18 + 4) = uStack_490._4_4_;
          *(int32_t *)(puVar18 + 1) = (int32_t)uStack_488;
          *(int32_t *)((int64_t)puVar18 + 0xc) = uStack_488._4_4_;
          if (puVar29 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar29);
          }
          puStack_500 = puVar18 + lVar19 * 2;
          plVar31 = plStack_4a8;
          puStack_510 = puVar18;
          puStack_508 = puVar18 + 2;
          uVar30 = uStack_528;
        }
      }
      uStack_528 = uVar30 + 1;
      uVar25 = (uint64_t)uStack_528;
      lVar19 = *plVar31;
      uVar28 = (uint64_t)uStack_528;
      puVar29 = puStack_4e0;
      param_2 = ppplStack_520;
    } while (uVar28 < (uint64_t)(plVar31[1] - lVar19 >> 3));
  }
  puVar18 = puStack_508;
  puVar24 = puStack_510;
  if (puStack_510 != puStack_508) {
    iVar16 = 0;
    lVar32 = (int64_t)puStack_508 - (int64_t)puStack_510 >> 4;
    for (lVar19 = lVar32; lVar19 != 0; lVar19 = lVar19 >> 1) {
      iVar16 = iVar16 + 1;
    }
    FUN_1800b95d0(puStack_510,puStack_508,(int64_t)(iVar16 + -1) * 2,0);
    if (lVar32 < 0x1d) {
      FUN_1800b9400();
    }
    else {
      puVar24 = puVar24 + 0x38;
      FUN_1800b9400();
      for (; puVar24 != puVar18; puVar24 = puVar24 + 2) {
        uVar21 = *puVar24;
        dVar4 = (double)puVar24[1];
        puVar23 = puVar24;
        puVar3 = puVar24;
        if ((double)puVar24[-1] <= dVar4 && dVar4 != (double)puVar24[-1]) {
          do {
            uVar27 = *(int32_t *)((int64_t)puVar3 + -0xc);
            uVar5 = *(int32_t *)(puVar3 + -1);
            uVar6 = *(int32_t *)((int64_t)puVar3 + -4);
            *(int32_t *)puVar23 = *(int32_t *)(puVar3 + -2);
            *(int32_t *)((int64_t)puVar23 + 4) = uVar27;
            *(int32_t *)(puVar23 + 1) = uVar5;
            *(int32_t *)((int64_t)puVar23 + 0xc) = uVar6;
            puVar23 = puVar23 + -2;
            pdVar1 = (double *)(puVar3 + -3);
            puVar3 = puVar3 + -2;
          } while (*pdVar1 <= dVar4 && dVar4 != *pdVar1);
        }
        *puVar23 = uVar21;
        puVar23[1] = dVar4;
      }
    }
  }
  uVar25 = 0;
  uVar28 = (int64_t)puVar18 - (int64_t)puStack_510 >> 4;
  if (uVar28 != 0) {
    do {
      plVar22 = (int64_t *)puStack_510[uVar25 * 2];
      if ((((((((int)plVar22[0x21] == *param_4) &&
              (*(int *)((int64_t)plVar22 + 0x10c) == param_4[1])) &&
             ((int)plVar22[0x22] == param_4[2])) &&
            ((*(int *)((int64_t)plVar22 + 0x114) == param_4[3] &&
             ((int)plVar22[0x23] == param_4[4])))) &&
           ((*(char *)((int64_t)plVar22 + 0x12d) == *(char *)((int64_t)param_4 + 0x25) &&
            ((*(char *)((int64_t)plVar22 + 0x12e) == *(char *)((int64_t)param_4 + 0x26) &&
             (*(char *)((int64_t)plVar22 + 300) == (char)param_4[9])))))) &&
          (*(char *)((int64_t)plVar22 + 0x12f) == *(char *)((int64_t)param_4 + 0x27))) &&
         ((((((char)plVar22[0x26] == (char)param_4[10] &&
             (*(char *)((int64_t)plVar22 + 0x131) == *(char *)((int64_t)param_4 + 0x29))) &&
            (*(char *)((int64_t)plVar22 + 0x132) == *(char *)((int64_t)param_4 + 0x2a))) &&
           (((ABS(*(float *)((int64_t)plVar22 + 0x11c) - (float)param_4[5]) < 0.01 &&
             (ABS(*(float *)(plVar22 + 0x24) - (float)param_4[6]) < 0.01)) &&
            ((ABS(*(float *)((int64_t)plVar22 + 0x124) - (float)param_4[7]) < 0.01 &&
             ((ABS(*(float *)(plVar22 + 0x25) - (float)param_4[8]) < 0.01 &&
              (*(char *)((int64_t)plVar22 + 0x133) == *(char *)((int64_t)param_4 + 0x2b)))))))))
          && (((int)plVar22[0x27] == param_4[0xc] && ((int)plVar22[0x3d] == param_4[0xc])))))) {
        plStack_4a0 = plVar22;
        (**(code **)(*plVar22 + 0x28))(plVar22);
        plStack_4a0 = (int64_t *)*param_2;
        *param_2 = (int64_t **)plVar22;
        if (plStack_4a0 != (int64_t *)0x0) {
          (**(code **)(*plStack_4a0 + 0x38))();
        }
        lVar19 = lStack_4e8;
        puVar26 = &system_buffer_ptr;
        if (*(void **)(lStack_4e8 + 8) != (void *)0x0) {
          puVar26 = *(void **)(lStack_4e8 + 8);
        }
        (**(code **)((int64_t)(*param_2)[2] + 0x10))(*param_2 + 2,puVar26);
        if ((char)param_4[0xb] == '\0') {
          if ((int)plVar22[0x70] == 0) {
            LOCK();
            *(int32_t *)(plVar22 + 0x70) = 1;
            UNLOCK();
            iVar16 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
            iVar17 = _Thrd_id();
            if (iVar17 == iVar16) {
              uStack_468 = *(uint64_t *)param_4;
              uStack_460 = *(uint64_t *)(param_4 + 2);
              uStack_458 = *(uint64_t *)(param_4 + 4);
              uStack_450 = *(uint64_t *)(param_4 + 6);
              iStack_448 = param_4[8];
              iStack_444 = param_4[9];
              iStack_440 = param_4[10];
              iStack_43c = param_4[0xb];
              uStack_438 = *(uint64_t *)(param_4 + 0xc);
              FUN_1800a43c0(system_message_buffer,&uStack_468,*param_2);
            }
            else {
              ppplStack_520 = (int64_t ***)&plStack_218;
              plStack_218 = (int64_t *)&memory_allocator_3432_ptr;
              puStack_210 = auStack_200;
              uStack_208 = 0;
              auStack_200[0] = 0;
              uStack_180 = 0x1c;
              uStack_178 = *(uint64_t *)param_4;
              uStack_170 = *(uint64_t *)(param_4 + 2);
              uStack_168 = *(uint64_t *)(param_4 + 4);
              uStack_160 = *(uint64_t *)(param_4 + 6);
              iStack_158 = param_4[8];
              iStack_154 = param_4[9];
              iStack_150 = param_4[10];
              iStack_14c = param_4[0xb];
              uStack_148 = *(uint64_t *)(param_4 + 0xc);
              plStack_140 = (int64_t *)*param_2;
              if ((void *)*plStack_140 == &processed_var_8720_ptr) {
                LOCK();
                *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
                UNLOCK();
              }
              else {
                (**(code **)((void *)*plStack_140 + 0x28))();
              }
              uVar21 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
              pplVar20 = (int64_t **)SystemCore_StreamController(uVar21,&plStack_218);
              pplStack_4d8 = pplVar20;
              if (pplVar20 != (int64_t **)0x0) {
                (*(code *)(*pplVar20)[5])(pplVar20);
              }
              lVar19 = system_context_ptr;
              ppplStack_520 = &pplStack_4d0;
              pplStack_4d0 = pplVar20;
              if (pplVar20 != (int64_t **)0x0) {
                (*(code *)(*pplVar20)[5])(pplVar20);
              }
              SystemPerformance_Monitor(lVar19,&pplStack_4d0);
              if (pplVar20 != (int64_t **)0x0) {
                (*(code *)(*pplVar20)[7])(pplVar20);
              }
              ppplStack_520 = (int64_t ***)&plStack_218;
              plStack_218 = (int64_t *)&system_state_ptr;
            }
            break;
          }
          if ((int)plVar22[0x70] != 2) break;
          SystemCore_Scheduler(*param_2);
          ppplStack_520 = (int64_t ***)aplStack_350;
          puStack_4e0 = (uint64_t *)SystemCore_EventHandler(aplStack_350,lVar19);
        }
        else {
          if ((int)plVar22[0x70] != 2) break;
          SystemCore_Scheduler(*param_2);
          ppplStack_520 = (int64_t ***)aplStack_2b8;
          puStack_4e0 = (uint64_t *)SystemCore_EventHandler(aplStack_2b8,lVar19);
        }
        *puStack_4e0 = &system_state_ptr;
        break;
      }
      uVar25 = (uint64_t)((int)uVar25 + 1);
    } while (uVar25 < uVar28);
  }
  if (*param_2 == (int64_t **)0x0) {
    uVar27 = 4;
    if (1 < (uint)param_4[2]) {
      uVar27 = 6;
    }
    uVar21 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
    plVar22 = (int64_t *)FUN_18023a2e0(uVar21,uVar27);
    if (plVar22 != (int64_t *)0x0) {
      pplStack_4c0 = (int64_t **)plVar22;
      (**(code **)(*plVar22 + 0x28))(plVar22);
    }
    pplStack_4c0 = *param_2;
    *param_2 = (int64_t **)plVar22;
    if (pplStack_4c0 != (int64_t **)0x0) {
      (*(code *)(*pplStack_4c0)[7])();
    }
    iVar16 = param_4[1];
    iVar17 = param_4[2];
    iVar7 = param_4[3];
    iVar8 = param_4[4];
    iVar9 = param_4[5];
    iVar10 = param_4[6];
    iVar11 = param_4[7];
    iVar12 = param_4[8];
    iVar13 = param_4[9];
    iVar14 = param_4[10];
    iVar15 = param_4[0xb];
    lVar19 = *(int64_t *)(param_4 + 0xc);
    plVar22 = (int64_t *)*param_2;
    *(int *)(plVar22 + 0x21) = *param_4;
    *(int *)((int64_t)plVar22 + 0x10c) = iVar16;
    *(int *)(plVar22 + 0x22) = iVar17;
    *(int *)((int64_t)plVar22 + 0x114) = iVar7;
    *(int *)(plVar22 + 0x23) = iVar8;
    *(int *)((int64_t)plVar22 + 0x11c) = iVar9;
    *(int *)(plVar22 + 0x24) = iVar10;
    *(int *)((int64_t)plVar22 + 0x124) = iVar11;
    *(int *)(plVar22 + 0x25) = iVar12;
    *(int *)((int64_t)plVar22 + 300) = iVar13;
    *(int *)(plVar22 + 0x26) = iVar14;
    *(int *)((int64_t)plVar22 + 0x134) = iVar15;
    plVar22[0x27] = lVar19;
    plVar22 = (int64_t *)*param_2;
    iVar16 = param_4[1];
    *(short *)((int64_t)plVar22 + 0x32c) = (short)*param_4;
    *(short *)((int64_t)plVar22 + 0x32e) = (short)iVar16;
    *(short *)((int64_t)plVar22 + 0x332) = (short)param_4[2];
    iVar16 = param_4[3];
    *(char *)((int64_t)plVar22 + 0x335) = (char)iVar16;
    *(int *)((int64_t)plVar22 + 0x35c) = iVar16;
    *(int *)((int64_t)plVar22 + 0x324) = param_4[4];
    if ((char)param_4[10] != '\0') {
      *(uint *)(plVar22 + 0x65) = *(uint *)(plVar22 + 0x65) | 0x2000;
    }
    if ((char)param_4[9] != '\0') {
      *(int8_t *)((int64_t)plVar22 + 0x355) = 1;
    }
    puVar26 = &system_buffer_ptr;
    if (*(void **)(lStack_4e8 + 8) != (void *)0x0) {
      puVar26 = *(void **)(lStack_4e8 + 8);
    }
    (**(code **)((int64_t)(*param_2)[2] + 0x10))(*param_2 + 2,puVar26);
    if ((char)param_4[0xb] == '\0') {
      LOCK();
      *(int32_t *)(*param_2 + 0x70) = 1;
      UNLOCK();
      iVar16 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
      iVar17 = _Thrd_id();
      if (iVar17 == iVar16) {
        uStack_428 = *(uint64_t *)param_4;
        uStack_420 = *(uint64_t *)(param_4 + 2);
        uStack_418 = *(uint64_t *)(param_4 + 4);
        uStack_410 = *(uint64_t *)(param_4 + 6);
        iStack_408 = param_4[8];
        iStack_404 = param_4[9];
        iStack_400 = param_4[10];
        iStack_3fc = param_4[0xb];
        uStack_3f8 = *(uint64_t *)(param_4 + 0xc);
        FUN_1800a43c0(system_message_buffer,&uStack_428,*param_2);
        pplStack_4b8 = &plStack_3e8;
        plStack_3e8 = (int64_t *)&memory_allocator_3432_ptr;
        puStack_3e0 = auStack_3d0;
        auStack_3d0[0] = 0;
        uStack_3d8 = *(int32_t *)(lStack_4e8 + 0x10);
        puVar26 = &system_buffer_ptr;
        if (*(void **)(lStack_4e8 + 8) != (void *)0x0) {
          puVar26 = *(void **)(lStack_4e8 + 8);
        }
        strcpy_s(auStack_3d0,0x80,puVar26);
        pplStack_4d8 = &plStack_3e8;
      }
      else {
        ppplStack_520 = (int64_t ***)&plStack_138;
        plStack_138 = (int64_t *)&memory_allocator_3432_ptr;
        puStack_130 = auStack_120;
        uStack_128 = 0;
        auStack_120[0] = 0;
        uStack_a0 = 0x1c;
        uStack_98 = *(uint64_t *)param_4;
        uStack_90 = *(uint64_t *)(param_4 + 2);
        uStack_88 = *(uint64_t *)(param_4 + 4);
        uStack_80 = *(uint64_t *)(param_4 + 6);
        iStack_78 = param_4[8];
        iStack_74 = param_4[9];
        iStack_70 = param_4[10];
        iStack_6c = param_4[0xb];
        uStack_68 = *(uint64_t *)(param_4 + 0xc);
        plStack_60 = (int64_t *)*param_2;
        if ((void *)*plStack_60 == &processed_var_8720_ptr) {
          LOCK();
          *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)((void *)*plStack_60 + 0x28))();
        }
        uVar21 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        plVar22 = (int64_t *)SystemCore_StreamController(uVar21,&plStack_138);
        pplStack_4b8 = (int64_t **)plVar22;
        if (plVar22 != (int64_t *)0x0) {
          (**(code **)(*plVar22 + 0x28))(plVar22);
        }
        lVar19 = system_context_ptr;
        pplStack_4d8 = &plStack_518;
        plStack_518 = plVar22;
        if (plVar22 != (int64_t *)0x0) {
          (**(code **)(*plVar22 + 0x28))(plVar22);
        }
        pplStack_4c0 = &plStack_518;
        puVar24 = *(uint64_t **)(*(int64_t *)(lVar19 + 8) + 8);
        pcVar2 = *(code **)*puVar24;
        pplStack_4d8 = &plStack_4c8;
        plStack_4c8 = plStack_518;
        if (plStack_518 != (int64_t *)0x0) {
          (**(code **)(*plStack_518 + 0x28))();
        }
        (*pcVar2)(puVar24,&plStack_4c8);
        if (plStack_518 != (int64_t *)0x0) {
          (**(code **)(*plStack_518 + 0x38))();
        }
        if (plVar22 != (int64_t *)0x0) {
          (**(code **)(*plVar22 + 0x38))(plVar22);
        }
        pplStack_4b8 = &plStack_138;
        plStack_138 = (int64_t *)&system_state_ptr;
      }
    }
    puStack_470 = puVar29;
    iVar16 = _Mtx_lock(puVar29);
    if (iVar16 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar16);
    }
    PhysicsSystem_TriggersProcessor(plVar31,param_2);
    *(int *)(*param_2 + 0x3d) = param_4[0xc];
    iVar16 = _Mtx_unlock(puVar29);
    if (iVar16 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar16);
    }
  }
  *(int8_t *)((int64_t)*param_2 + 0xc9) = 0;
  (*param_2)[0x68] = (int64_t *)(int64_t)*(int *)(system_main_module_state + 0x224);
  if (puStack_510 == (uint64_t *)0x0) {
    iVar16 = _Mtx_unlock(puStack_498);
    if (iVar16 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar16);
    }
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_548);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puStack_510);
}






// 函数: void FUN_1800b1d50(uint64_t *param_1)
void FUN_1800b1d50(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
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




// 函数: void FUN_1800b1d80(uint64_t param_1,int64_t *param_2,int64_t param_3,int *param_4)
void FUN_1800b1d80(uint64_t param_1,int64_t *param_2,int64_t param_3,int *param_4)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t lVar12;
  void *puVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t *plVar16;
  int8_t auStack_408 [32];
  int64_t **pplStack_3e8;
  int64_t *plStack_3e0;
  int64_t **pplStack_3d8;
  int32_t uStack_3d0;
  int64_t *plStack_3c8;
  int64_t *plStack_3c0;
  int64_t **pplStack_3b8;
  void **ppuStack_3b0;
  int64_t lStack_3a8;
  int iStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  uint64_t uStack_388;
  int iStack_380;
  int iStack_378;
  int iStack_374;
  int iStack_370;
  int iStack_36c;
  uint64_t uStack_368;
  int iStack_360;
  uint64_t uStack_358;
  int64_t *plStack_350;
  int64_t lStack_348;
  int64_t *aplStack_340 [19];
  void *apuStack_2a8 [20];
  int64_t *plStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [128];
  int32_t uStack_170;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  uint64_t uStack_158;
  int iStack_150;
  int64_t lStack_148;
  void *puStack_128;
  int8_t *puStack_120;
  int32_t uStack_118;
  int8_t auStack_110 [128];
  int32_t uStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  uint64_t uStack_78;
  int iStack_70;
  int64_t lStack_68;
  uint64_t uStack_48;
  
  lVar3 = system_resource_state;
  uStack_358 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_408;
  uVar15 = 0;
  *param_2 = 0;
  uStack_3d0 = 1;
  lVar1 = lVar3 + 0x7c0;
  lStack_3a8 = lVar1;
  plStack_350 = param_2;
  iVar8 = _Mtx_lock(lVar1);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  plVar16 = (int64_t *)(lVar3 + 0x6e0);
  lVar12 = *plVar16;
  if (*(int64_t *)(lVar3 + 0x6e8) - lVar12 >> 3 != 0) {
    do {
      if ((((((*(int *)(*(int64_t *)(lVar12 + uVar15 * 8) + 8) == 1) &&
             (plVar11 = *(int64_t **)(*plVar16 + uVar15 * 8), (int)plVar11[0x28] == *param_4)) &&
            (*(int *)((int64_t)plVar11 + 0x144) == param_4[1])) &&
           (((int)plVar11[0x29] == param_4[2] && (*(int *)((int64_t)plVar11 + 0x14c) == param_4[3])
            ))) && (((float)param_4[4] == *(float *)(plVar11 + 0x2a) &&
                    ((*(char *)((int64_t)plVar11 + 0x154) == (char)param_4[5] &&
                     (*(char *)((int64_t)plVar11 + 0x157) == *(char *)((int64_t)param_4 + 0x17))))
                    ))) &&
         ((*(char *)((int64_t)plVar11 + 0x156) == *(char *)((int64_t)param_4 + 0x16) &&
          ((int)plVar11[0x3d] == param_4[6])))) {
        if (plVar11 != (int64_t *)0x0) {
          pplStack_3d8 = (int64_t **)plVar11;
          (**(code **)(*plVar11 + 0x28))(plVar11);
        }
        pplStack_3d8 = (int64_t **)*param_2;
        *param_2 = (int64_t)plVar11;
        if (pplStack_3d8 != (int64_t **)0x0) {
          (*(code *)(*pplStack_3d8)[7])();
        }
        puVar13 = &system_buffer_ptr;
        if (*(void **)(param_3 + 8) != (void *)0x0) {
          puVar13 = *(void **)(param_3 + 8);
        }
        (**(code **)(*(int64_t *)(*param_2 + 0x10) + 0x10))((int64_t *)(*param_2 + 0x10),puVar13);
        lVar3 = *param_2;
        iVar8 = param_4[1];
        *(short *)(lVar3 + 0x32c) = (short)*param_4;
        *(short *)(lVar3 + 0x32e) = (short)iVar8;
        *(short *)(lVar3 + 0x332) = (short)param_4[2];
        *(int *)(lVar3 + 0x324) = param_4[3];
        if (*(int *)(*param_2 + 0x380) == 0) {
          iVar8 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
          iVar9 = _Thrd_id();
          if (iVar9 == iVar8) {
            iStack_398 = *param_4;
            iStack_394 = param_4[1];
            iStack_390 = param_4[2];
            iStack_38c = param_4[3];
            uStack_388 = *(uint64_t *)(param_4 + 4);
            iStack_380 = param_4[6];
            FUN_1800a4c50(system_message_buffer,&iStack_398,*param_2);
          }
          else {
            pplStack_3d8 = &plStack_208;
            plStack_208 = (int64_t *)&memory_allocator_3432_ptr;
            puStack_200 = auStack_1f0;
            uStack_1f8 = 0;
            auStack_1f0[0] = 0;
            uStack_170 = 0x1d;
            iStack_168 = *param_4;
            iStack_164 = param_4[1];
            iStack_160 = param_4[2];
            iStack_15c = param_4[3];
            uStack_158 = *(uint64_t *)(param_4 + 4);
            iStack_150 = param_4[6];
            lStack_148 = *param_2;
            uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
            plVar11 = (int64_t *)SystemCore_StreamController(uVar10,&plStack_208);
            pplStack_3e8 = (int64_t **)plVar11;
            if (plVar11 != (int64_t *)0x0) {
              (**(code **)(*plVar11 + 0x28))(plVar11);
            }
            lVar3 = system_context_ptr;
            pplStack_3d8 = &plStack_3c8;
            plStack_3c8 = plVar11;
            if (plVar11 != (int64_t *)0x0) {
              (**(code **)(*plVar11 + 0x28))(plVar11);
            }
            SystemPerformance_Monitor(lVar3,&plStack_3c8);
            if (plVar11 != (int64_t *)0x0) {
              (**(code **)(*plVar11 + 0x38))(plVar11);
            }
            pplStack_3e8 = &plStack_208;
            plStack_208 = (int64_t *)&system_state_ptr;
          }
        }
        else if (*(int *)(*param_2 + 0x380) == 2) {
          SystemCore_Scheduler(*param_2);
          pplStack_3e8 = aplStack_340;
          pplStack_3d8 = (int64_t **)SystemCore_EventHandler(aplStack_340,param_3);
          *pplStack_3d8 = (int64_t *)&system_state_ptr;
        }
        break;
      }
      uVar15 = (uint64_t)((int)uVar15 + 1);
      lVar12 = *plVar16;
    } while (uVar15 < (uint64_t)(*(int64_t *)(lVar3 + 0x6e8) - lVar12 >> 3));
  }
  iVar8 = _Mtx_unlock(lStack_3a8);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  if (*param_2 == 0) {
    uVar2 = param_4[2];
    uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
    uVar14 = 5;
    if (uVar2 < 2) {
      uVar14 = 3;
    }
    plVar11 = (int64_t *)FUN_18023a2e0(uVar10,uVar14);
    if (plVar11 != (int64_t *)0x0) {
      pplStack_3b8 = (int64_t **)plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    pplStack_3b8 = (int64_t **)*param_2;
    *param_2 = (int64_t)plVar11;
    if (pplStack_3b8 != (int64_t **)0x0) {
      (*(code *)(*pplStack_3b8)[7])();
    }
    iVar9 = param_4[1];
    iVar6 = param_4[2];
    iVar7 = param_4[3];
    uVar10 = *(uint64_t *)(param_4 + 4);
    iVar8 = param_4[6];
    lVar3 = *param_2;
    *(int *)(lVar3 + 0x140) = *param_4;
    *(int *)(lVar3 + 0x144) = iVar9;
    *(int *)(lVar3 + 0x148) = iVar6;
    *(int *)(lVar3 + 0x14c) = iVar7;
    *(uint64_t *)(lVar3 + 0x150) = uVar10;
    *(int *)(lVar3 + 0x158) = iVar8;
    lVar3 = *param_2;
    iVar8 = param_4[1];
    *(short *)(lVar3 + 0x32c) = (short)*param_4;
    *(short *)(lVar3 + 0x32e) = (short)iVar8;
    *(short *)(lVar3 + 0x332) = (short)param_4[2];
    *(int *)(lVar3 + 0x324) = param_4[3];
    puVar13 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar13 = *(void **)(param_3 + 8);
    }
    (**(code **)(*(int64_t *)(*param_2 + 0x10) + 0x10))((int64_t *)(*param_2 + 0x10),puVar13);
    iVar8 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
    iVar9 = _Thrd_id();
    if (iVar9 == iVar8) {
      iStack_378 = *param_4;
      iStack_374 = param_4[1];
      iStack_370 = param_4[2];
      iStack_36c = param_4[3];
      uStack_368 = *(uint64_t *)(param_4 + 4);
      iStack_360 = param_4[6];
      FUN_1800a4c50(system_message_buffer,&iStack_378,*param_2);
      ppuStack_3b0 = apuStack_2a8;
      pplStack_3e8 = (int64_t **)SystemCore_EventHandler(apuStack_2a8,param_3);
      *pplStack_3e8 = (int64_t *)&system_state_ptr;
    }
    else {
      pplStack_3e8 = (int64_t **)&puStack_128;
      puStack_128 = &memory_allocator_3432_ptr;
      puStack_120 = auStack_110;
      uStack_118 = 0;
      auStack_110[0] = 0;
      uStack_90 = 0x1d;
      iStack_88 = *param_4;
      iStack_84 = param_4[1];
      iStack_80 = param_4[2];
      iStack_7c = param_4[3];
      uStack_78 = *(uint64_t *)(param_4 + 4);
      iStack_70 = param_4[6];
      lStack_68 = *param_2;
      uVar10 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
      plVar11 = (int64_t *)SystemCore_StreamController(uVar10,&puStack_128);
      ppuStack_3b0 = (void **)plVar11;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11);
      }
      lVar3 = system_context_ptr;
      pplStack_3e8 = &plStack_3e0;
      plStack_3e0 = plVar11;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11);
      }
      pplStack_3b8 = &plStack_3e0;
      puVar4 = *(uint64_t **)(*(int64_t *)(lVar3 + 8) + 8);
      pcVar5 = *(code **)*puVar4;
      pplStack_3e8 = &plStack_3c0;
      plStack_3c0 = plStack_3e0;
      if (plStack_3e0 != (int64_t *)0x0) {
        (**(code **)(*plStack_3e0 + 0x28))();
      }
      (*pcVar5)(puVar4,&plStack_3c0);
      if (plStack_3e0 != (int64_t *)0x0) {
        (**(code **)(*plStack_3e0 + 0x38))();
      }
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x38))(plVar11);
      }
      ppuStack_3b0 = &puStack_128;
      puStack_128 = &system_state_ptr;
    }
    lStack_348 = lVar1;
    iVar8 = _Mtx_lock(lVar1);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
    PhysicsSystem_TriggersProcessor(plVar16,param_2);
    iVar8 = _Mtx_unlock(lVar1);
    if (iVar8 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar8);
    }
  }
  *(int64_t *)(*param_2 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_408);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




