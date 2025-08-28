#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part069.c - 4 个函数

// 函数: void FUN_18023b050(int64_t *param_1,char param_2)
void FUN_18023b050(int64_t *param_1,char param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  uint uVar15;
  int8_t auStack_4e8 [32];
  char cStack_4c8;
  int64_t ***ppplStack_4c0;
  int iStack_4b8;
  int64_t **pplStack_4b0;
  int64_t **pplStack_4a8;
  int64_t *plStack_4a0;
  int64_t *plStack_498;
  int64_t *plStack_490;
  int64_t *plStack_488;
  int64_t *plStack_480;
  int64_t *plStack_478;
  uint64_t uStack_470;
  uint64_t uStack_468;
  void *puStack_460;
  int64_t lStack_458;
  int32_t uStack_448;
  int32_t uStack_440;
  int32_t uStack_43c;
  int32_t uStack_438;
  int32_t uStack_434;
  void *puStack_430;
  code *pcStack_428;
  int64_t *aplStack_420 [2];
  void *puStack_410;
  void *puStack_408;
  uint64_t uStack_400;
  int64_t *plStack_3f8;
  int64_t **pplStack_3f0;
  int64_t *plStack_3e8;
  int64_t *plStack_3e0;
  int64_t *plStack_3d8;
  int64_t *plStack_3c8;
  int8_t *puStack_3c0;
  int32_t uStack_3b8;
  int8_t auStack_3b0 [128];
  int32_t uStack_330;
  int64_t lStack_328;
  int64_t *plStack_320;
  int64_t *plStack_2e8;
  int8_t *puStack_2e0;
  int32_t uStack_2d8;
  int8_t auStack_2d0 [128];
  int32_t uStack_250;
  int64_t lStack_248;
  int64_t *plStack_240;
  int64_t *plStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [128];
  int32_t uStack_170;
  uint64_t uStack_168;
  int64_t *plStack_128;
  int8_t *puStack_120;
  int32_t uStack_118;
  int8_t auStack_110 [128];
  int32_t uStack_90;
  int64_t lStack_88;
  uint64_t uStack_48;
  
  uStack_400 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_4e8;
  plStack_478 = param_1 + 0x44;
  cStack_4c8 = param_2;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  puVar14 = (uint64_t *)param_1[0x3e];
  if (puVar14 == (uint64_t *)0x0) {
    if ((int)param_1[0x70] == 2) {
      plVar9 = (int64_t *)0x0;
      if (((int)param_1[0x2c] - 4U & 0xfffffffd) == 0) {
        lVar13 = system_main_module_state;
        plVar12 = plVar9;
        if (*(short *)((int64_t)param_1 + 0x332) != 0) {
          do {
            bVar4 = *(byte *)((int64_t)param_1 + 0x335);
            iVar5 = (int)plVar12;
            plVar12 = plVar9;
            if (bVar4 != 0) {
              do {
                lVar2 = param_1[0x3b];
                iVar6 = (int)plVar12;
                plVar12 = plVar9;
                if (lVar2 != 0) {
                  if (lVar13 != 0) {
                    param_1[0x68] = (int64_t)*(int *)(lVar13 + 0x224);
                    bVar4 = *(byte *)((int64_t)param_1 + 0x335);
                  }
                  plVar12 = (int64_t *)
                            ((int64_t)(int)((uint)bVar4 * iVar5 + iVar6) * 0x10 + lVar2);
                }
                if (plVar12 != (int64_t *)0x0) {
                  plVar12 = plVar9;
                  if (lVar2 != 0) {
                    if (lVar13 != 0) {
                      param_1[0x68] = (int64_t)*(int *)(lVar13 + 0x224);
                    }
                    plVar12 = (int64_t *)
                              ((int64_t)(int)((uint)bVar4 * iVar5 + iVar6) * 0x10 + lVar2);
                  }
                  if (system_data_ecee == '\0') {
                    if (plVar12[1] != 0) {
                      iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
                      iVar7 = _Thrd_id();
                      if (iVar7 == iVar1) {
                        lVar13 = system_main_module_state;
                        if ((int64_t *)plVar12[1] != (int64_t *)0x0) {
                          (**(code **)(*(int64_t *)plVar12[1] + 0x10))();
                          lVar13 = system_main_module_state;
                        }
                      }
                      else {
                        ppplStack_4c0 = (int64_t ***)&plStack_128;
                        plStack_128 = (int64_t *)&unknown_var_3432_ptr;
                        puStack_120 = auStack_110;
                        uStack_118 = 0;
                        auStack_110[0] = 0;
                        uStack_90 = 0x13;
                        lStack_88 = plVar12[1];
                        uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
                        plVar11 = (int64_t *)FUN_18005ce30(uVar8,&plStack_128);
                        plStack_3e8 = plVar11;
                        if (plVar11 != (int64_t *)0x0) {
                          (**(code **)(*plVar11 + 0x28))(plVar11);
                        }
                        lVar13 = system_context_ptr;
                        ppplStack_4c0 = (int64_t ***)&plStack_498;
                        plStack_498 = plVar11;
                        if (plVar11 != (int64_t *)0x0) {
                          (**(code **)(*plVar11 + 0x28))(plVar11);
                        }
                        FUN_18005e370(lVar13,&plStack_498);
                        if (plVar11 != (int64_t *)0x0) {
                          (**(code **)(*plVar11 + 0x38))(plVar11);
                        }
                        ppplStack_4c0 = (int64_t ***)&plStack_128;
                        plStack_128 = (int64_t *)&system_state_ptr;
                        lVar13 = system_main_module_state;
                      }
                    }
                    *plVar12 = 0;
                    plVar12[1] = 0;
                    bVar4 = *(byte *)((int64_t)param_1 + 0x335);
                  }
                }
                plVar12 = (int64_t *)(uint64_t)(iVar6 + 1U);
              } while ((int)(iVar6 + 1U) < (int)(uint)bVar4);
            }
            plVar12 = (int64_t *)(uint64_t)(iVar5 + 1U);
            param_2 = cStack_4c8;
          } while ((int)(iVar5 + 1U) < (int)(uint)*(ushort *)((int64_t)param_1 + 0x332));
        }
      }
      else if ((((int)param_1[0x2c] - 3U & 0xfffffffd) == 0) &&
              (iStack_4b8 = 0, lVar13 = system_main_module_state, plVar12 = plVar9, plVar11 = plVar9,
              *(short *)((int64_t)param_1 + 0x332) != 0)) {
        do {
          do {
            if (param_1[0x3c] != 0) {
              if (lVar13 != 0) {
                param_1[0x68] = (int64_t)*(int *)(lVar13 + 0x224);
              }
              puVar14 = (uint64_t *)
                        ((int64_t)((int)plVar12 + (int)plVar11) * 0x10 + param_1[0x3c]);
              if (puVar14 != (uint64_t *)0x0) {
                if (lVar13 != 0) {
                  param_1[0x68] = (int64_t)*(int *)(lVar13 + 0x224);
                }
                if (system_data_ecee == '\0') {
                  iVar5 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
                  iVar6 = _Thrd_id();
                  if (iVar6 == iVar5) {
                    if ((int64_t *)puVar14[1] != (int64_t *)0x0) {
                      (**(code **)(*(int64_t *)puVar14[1] + 0x10))();
                      puVar14[1] = 0;
                    }
                  }
                  else {
                    pplStack_4b0 = &plStack_208;
                    plStack_208 = (int64_t *)&unknown_var_3432_ptr;
                    puStack_200 = auStack_1f0;
                    uStack_1f8 = 0;
                    auStack_1f0[0] = 0;
                    uStack_170 = 0x13;
                    uStack_168 = puVar14[1];
                    uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
                    pplVar10 = (int64_t **)FUN_18005ce30(uVar8,&plStack_208);
                    pplStack_3f0 = pplVar10;
                    if (pplVar10 != (int64_t **)0x0) {
                      (*(code *)(*pplVar10)[5])(pplVar10);
                    }
                    lVar13 = system_context_ptr;
                    ppplStack_4c0 = &pplStack_4b0;
                    pplStack_4b0 = pplVar10;
                    if (pplVar10 != (int64_t **)0x0) {
                      (*(code *)(*pplVar10)[5])(pplVar10);
                    }
                    FUN_18005e370(lVar13,&pplStack_4b0);
                    puVar14[1] = 0;
                    if (pplVar10 != (int64_t **)0x0) {
                      (*(code *)(*pplVar10)[7])(pplVar10);
                    }
                    ppplStack_4c0 = (int64_t ***)&plStack_208;
                    plStack_208 = (int64_t *)&system_state_ptr;
                  }
                  *puVar14 = 0;
                  puVar14[1] = 0;
                  lVar13 = system_main_module_state;
                }
              }
            }
            uVar15 = (int)plVar12 + 1;
            plVar12 = (int64_t *)(uint64_t)uVar15;
          } while ((int)uVar15 < 2);
          iStack_4b8 = iStack_4b8 + 1;
          plVar12 = plVar9;
          param_2 = cStack_4c8;
          plVar11 = (int64_t *)(uint64_t)((int)plVar11 + 2);
        } while (iStack_4b8 < (int)(uint)*(ushort *)((int64_t)param_1 + 0x332));
      }
      if (param_1[0x3b] != 0) {
        ppplStack_4c0 = (int64_t ***)&plStack_3c8;
        plStack_3c8 = (int64_t *)&unknown_var_3432_ptr;
        puStack_3c0 = auStack_3b0;
        uStack_3b8 = 0;
        auStack_3b0[0] = 0;
        uStack_330 = 0x2b;
        lStack_328 = param_1[0x3b];
        plStack_320 = param_1;
        if (param_2 != '\0') {
          plStack_320 = plVar9;
        }
        uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        plVar12 = (int64_t *)FUN_18005ce30(uVar8,&plStack_3c8);
        plStack_3e0 = plVar12;
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x28))(plVar12);
        }
        iVar5 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
        iVar6 = _Thrd_id();
        lVar13 = system_context_ptr;
        if (iVar6 == iVar5) {
          (**(code **)(*plVar12 + 0x60))(plVar12);
        }
        else {
          ppplStack_4c0 = (int64_t ***)&plStack_490;
          plStack_490 = plVar12;
          if (plVar12 != (int64_t *)0x0) {
            (**(code **)(*plVar12 + 0x28))(plVar12);
          }
          FUN_18005e370(lVar13,&plStack_490);
        }
        if (plVar12 != (int64_t *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12);
        }
        ppplStack_4c0 = (int64_t ***)&plStack_3c8;
        plStack_3c8 = (int64_t *)&system_state_ptr;
      }
      if (param_1[0x3c] != 0) {
        ppplStack_4c0 = (int64_t ***)&plStack_2e8;
        plStack_2e8 = (int64_t *)&unknown_var_3432_ptr;
        puStack_2e0 = auStack_2d0;
        uStack_2d8 = 0;
        auStack_2d0[0] = 0;
        uStack_250 = 0x2c;
        lStack_248 = param_1[0x3c];
        plStack_240 = param_1;
        if (param_2 != '\0') {
          plStack_240 = plVar9;
        }
        uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
        plVar9 = (int64_t *)FUN_18005ce30(uVar8,&plStack_2e8);
        plStack_3d8 = plVar9;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9);
        }
        iVar5 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
        iVar6 = _Thrd_id();
        lVar13 = system_context_ptr;
        if (iVar6 == iVar5) {
          (**(code **)(*plVar9 + 0x60))(plVar9);
        }
        else {
          ppplStack_4c0 = (int64_t ***)&plStack_488;
          plStack_488 = plVar9;
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x28))(plVar9);
          }
          FUN_18005e370(lVar13,&plStack_488);
        }
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x38))(plVar9);
        }
        ppplStack_4c0 = (int64_t ***)&plStack_2e8;
        plStack_2e8 = (int64_t *)&system_state_ptr;
      }
      FUN_1802a01a0(param_1 + 0x2d);
      FUN_1802a01a0(param_1 + 0x34);
      FUN_1802a0bb0(param_1 + 0x3f);
      if (*(int *)((int64_t)param_1 + 0x36c) != 0) {
        *(int32_t *)((int64_t)param_1 + 0x36c) = 1;
        pplStack_4a8 = (int64_t **)param_1[0x6e];
        param_1[0x6e] = 0;
        if (pplStack_4a8 != (int64_t **)0x0) {
          (*(code *)(*pplStack_4a8)[7])();
        }
      }
      if (param_2 == '\0') {
        SystemCore_EncryptionEngine0(&puStack_460,param_1 + 2);
        uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
        ppplStack_4c0 = (int64_t ***)aplStack_420;
        puStack_410 = &unknown_var_4672_ptr;
        puStack_408 = &unknown_var_4512_ptr;
        aplStack_420[0] = param_1;
        plVar9 = (int64_t *)FUN_18006b640(uVar8,aplStack_420);
        uStack_470 = plVar9;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9);
        }
        LOCK();
        *(int8_t *)(param_1 + 0x19) = 1;
        UNLOCK();
        iVar5 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
        iVar6 = _Thrd_id();
        lVar13 = system_context_ptr;
        if (iVar6 == iVar5) {
          (**(code **)(*plVar9 + 0x60))(plVar9);
        }
        else {
          ppplStack_4c0 = (int64_t ***)&plStack_480;
          plStack_480 = plVar9;
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x28))(plVar9);
          }
          FUN_18005e370(lVar13,&plStack_480);
        }
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x38))(plVar9);
        }
        puStack_460 = &system_data_buffer_ptr;
        if (lStack_458 != 0) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        lStack_458 = 0;
        uStack_448 = 0;
        puStack_460 = &system_state_ptr;
      }
      LOCK();
      *(int32_t *)(param_1 + 0x70) = 0;
      UNLOCK();
    }
    else if (*(char *)((int64_t)param_1 + 0xc9) != '\0') {
      if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      param_1[0x3b] = 0;
      if (param_1[0x3c] != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      param_1[0x3c] = 0;
    }
  }
  else {
    plVar9 = (int64_t *)puVar14[1];
    iVar5 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
    iVar6 = _Thrd_id();
    if (iVar6 == iVar5) {
      cVar3 = FUN_1802e5280(plVar9,puVar14);
      if (cVar3 != '\0') {
        (**(code **)(*(int64_t *)plVar9[0x29] + 0x168))((int64_t *)plVar9[0x29],*puVar14);
        *puVar14 = 0;
        FUN_1802e5110(puVar14);
        param_1[0x3e] = 0;
        LOCK();
        *(int32_t *)(param_1 + 0x70) = 0;
        UNLOCK();
        goto LAB_18023ba58;
      }
    }
    else {
      uVar8 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      pplStack_4a8 = (int64_t **)&uStack_440;
      puStack_430 = &unknown_var_6656_ptr;
      pcStack_428 = FUN_1802e51e0;
      uStack_470._0_4_ = SUB84(plVar9,0);
      uStack_470._4_4_ = (int32_t)((uint64_t)plVar9 >> 0x20);
      uStack_468._0_4_ = SUB84(puVar14,0);
      uStack_468._4_4_ = (int32_t)((uint64_t)puVar14 >> 0x20);
      uStack_440 = (int32_t)uStack_470;
      uStack_43c = uStack_470._4_4_;
      uStack_438 = (int32_t)uStack_468;
      uStack_434 = uStack_468._4_4_;
      uStack_470 = plVar9;
      uStack_468 = puVar14;
      plVar9 = (int64_t *)FUN_18006b640(uVar8,&uStack_440);
      plStack_3f8 = plVar9;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      lVar13 = system_context_ptr;
      pplStack_4a8 = &plStack_4a0;
      plStack_4a0 = plVar9;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9);
      }
      FUN_18005e370(lVar13,&plStack_4a0);
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9);
      }
    }
    param_1[0x3e] = 0;
    LOCK();
    *(int32_t *)(param_1 + 0x70) = 0;
    UNLOCK();
  }
LAB_18023ba58:
  iVar5 = _Mtx_unlock(plStack_478);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_4e8);
}



code * FUN_18023baa0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint param_4,
                    int8_t *param_5)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  code *pcVar6;
  int iVar7;
  int8_t *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int64_t *plVar15;
  int iStackX_8;
  uint64_t in_stack_fffffffffffffd38;
  int32_t uVar16;
  int64_t lStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  int64_t *plStack_290;
  int64_t *plStack_288;
  int8_t auStack_280 [16];
  code *pcStack_270;
  code *pcStack_268;
  int32_t uStack_260;
  int8_t *puStack_258;
  int64_t *plStack_248;
  int64_t lStack_240;
  int8_t auStack_238 [16];
  code *pcStack_228;
  code *pcStack_220;
  int64_t lStack_218;
  int iStack_210;
  int iStack_20c;
  int32_t uStack_208;
  int32_t uStack_204;
  int32_t uStack_200;
  int32_t uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  int iStack_1ec;
  uint64_t uStack_1e8;
  int8_t auStack_1e0 [16];
  code *pcStack_1d0;
  int8_t auStack_1c0 [16];
  code *pcStack_1b0;
  int8_t auStack_1a0 [16];
  code *pcStack_190;
  int8_t auStack_180 [16];
  code *pcStack_170;
  int8_t auStack_160 [48];
  int8_t auStack_130 [48];
  int8_t auStack_100 [96];
  int8_t auStack_a0 [104];
  
  uVar16 = (int32_t)((uint64_t)in_stack_fffffffffffffd38 >> 0x20);
  uStack_1e8 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(param_1[0x15] + 0x20);
  uVar2 = *(uint *)(lVar1 + 0x28);
  if (((((int)uVar2 < 1) || ((uVar2 & uVar2 - 1) != 0)) ||
      (uVar2 = *(uint *)(lVar1 + 0x2c), (int)uVar2 < 1)) || ((uVar2 & uVar2 - 1) != 0)) {
    *(int16_t *)((int64_t)param_1 + 0x332) = *(int16_t *)(lVar1 + 0x34);
    *(int16_t *)(param_1 + 0x66) = *(int16_t *)(lVar1 + 0x30);
    *(int32_t *)(param_1 + 0x65) = *(int32_t *)(lVar1 + 0x24);
    *(int32_t *)((int64_t)param_1 + 0x324) = *(int32_t *)(lVar1 + 0x20);
    *(int16_t *)((int64_t)param_1 + 0x32e) = *(int16_t *)(lVar1 + 0x2c);
    *(int8_t *)((int64_t)param_1 + 0x334) = *(int8_t *)(lVar1 + 0x37);
    *(int8_t *)((int64_t)param_1 + 0x335) = *(int8_t *)(lVar1 + 0x36);
    *(int16_t *)((int64_t)param_1 + 0x32c) = *(int16_t *)(lVar1 + 0x28);
    pcVar6 = (code *)FUN_18023c450(param_1,0,0xffffffff,param_5);
    return pcVar6;
  }
  pcVar6 = (code *)0x0;
  LOCK();
  uVar2 = *(uint *)(param_1 + 0x70);
  if (uVar2 == 0) {
    *(uint *)(param_1 + 0x70) = 1;
  }
  else {
    pcVar6 = (code *)(uint64_t)uVar2;
  }
  UNLOCK();
  if (uVar2 != 0) {
    return pcVar6;
  }
  lVar1 = *(int64_t *)(param_1[0x15] + 0x20);
  plStack_290 = *(int64_t **)(param_1[0x15] + 0x88);
  uVar9 = ((*(uint *)(lVar1 + 0x18) >> 0x15 & 1) + 1) * 0x200;
  iVar10 = -1;
  uVar2 = uVar9;
  do {
    iVar10 = iVar10 + 1;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  iVar3 = -1;
  if (param_4 != 0) {
    do {
      iVar3 = iVar3 + 1;
      param_4 = param_4 >> 1;
    } while (param_4 != 0);
  }
  iVar10 = iVar10 - iVar3;
  uVar14 = (int)uVar9 >> ((byte)iVar10 & 0x1f);
  iVar3 = *(int *)(lVar1 + 0x28);
  iVar12 = *(int *)(lVar1 + 0x2c);
  iVar13 = 0;
  uVar2 = (uint)*(byte *)(lVar1 + 0x36);
  if (1 < *(byte *)(lVar1 + 0x36)) {
    iVar11 = 1;
    iVar7 = iVar12;
    iVar4 = iVar3;
    do {
      if ((iVar4 <= (int)uVar9) && (iVar7 <= (int)uVar9)) break;
      iVar13 = iVar13 + 1;
      iVar11 = iVar11 + 1;
      iVar4 = iVar4 >> 1;
      iVar7 = iVar7 >> 1;
    } while (iVar11 < (int)uVar2);
  }
  iVar7 = 0;
  if (uVar2 != 0) {
    do {
      if (*(char *)(lVar1 + 0x38) != '\0') {
        FUN_180626ee0(&unknown_var_1312_ptr);
        iVar13 = iStackX_8;
        break;
      }
      iVar4 = iVar3 >> 1;
      iVar3 = 1;
      if (1 < iVar4) {
        iVar3 = iVar4;
      }
      iVar4 = iVar12 >> 1;
      iVar12 = 1;
      if (1 < iVar4) {
        iVar12 = iVar4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar2);
  }
  plVar15 = plStack_290;
  iVar3 = (uint)*(byte *)(lVar1 + 0x36) - iVar13;
  if (iVar3 <= iVar10) {
    iVar10 = iVar3 + -1;
  }
  if (0 < iVar10) {
    iVar3 = iVar10 + iVar13;
    do {
      if ((uVar14 <= *(uint *)(lVar1 + 0x28) >> ((byte)iVar3 & 0x1f)) ||
         (uVar14 <= *(uint *)(lVar1 + 0x2c) >> ((byte)iVar3 & 0x1f))) break;
      iVar10 = iVar10 + -1;
      iVar3 = iVar3 + -1;
    } while (0 < iVar10);
  }
  (**(code **)(*plStack_290 + 0x18))(plStack_290,&system_data_0fb0,param_1[0x15] + 0xc,&lStack_2a8);
  uVar2 = *(uint *)(lVar1 + 0x28);
  if (lStack_2a8 == 0) {
    uVar9 = *(uint *)(lVar1 + 0x2c);
    uVar14 = (uint)*(byte *)(lVar1 + 0x36);
    iVar3 = iVar10 + iVar13;
  }
  else {
    uVar2 = uVar2 >> ((byte)iVar13 & 0x1f);
    if ((int)uVar2 < 1) {
      uVar2 = 1;
    }
    uVar9 = *(uint *)(lVar1 + 0x2c) >> ((byte)iVar13 & 0x1f);
    if ((int)uVar9 < 1) {
      uVar9 = 1;
    }
    uVar14 = (uint)*(byte *)(lVar1 + 0x36) - iVar13;
    iVar3 = iVar10;
  }
  uStack_2a0 = 0xffffffffffffffff;
  uStack_298 = 0xffffffffffffffff;
  if (*(char *)(lVar1 + 0x38) == '\0') {
    FUN_1802a0f80(*(int32_t *)(lVar1 + 0x20),uVar2,uVar9,uVar14,CONCAT44(uVar16,iVar3),
                  &uStack_2a0,&uStack_298);
  }
  else {
    SystemCore_ResourceManager0(&unknown_var_2792_ptr);
    uStack_2a0 = 0;
    uStack_298 = 0;
  }
  puStack_258 = auStack_238;
  pcStack_228 = (code *)0x0;
  pcStack_220 = _guard_check_icall;
  plStack_248 = param_1;
  lStack_240 = lVar1;
  if (auStack_238 != param_5) {
    pcVar6 = *(code **)(param_5 + 0x10);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(auStack_238,param_5,1);
      pcVar6 = *(code **)(param_5 + 0x10);
    }
    pcStack_220 = *(code **)(param_5 + 0x18);
    plVar15 = plStack_290;
    pcStack_228 = pcVar6;
  }
  lStack_218 = lStack_2a8;
  uStack_208 = (int32_t)uStack_2a0;
  uStack_204 = uStack_2a0._4_4_;
  uStack_200 = (int32_t)uStack_298;
  uStack_1fc = uStack_298._4_4_;
  puStack_258 = auStack_280;
  pcStack_270 = (code *)0x0;
  pcStack_268 = _guard_check_icall;
  plStack_288 = param_1;
  iStack_210 = iVar10;
  iStack_20c = iVar13;
  uStack_1f8 = uVar2;
  uStack_1f4 = uVar9;
  uStack_1f0 = uVar14;
  iStack_1ec = iVar3;
  if (auStack_280 != param_5) {
    pcVar6 = *(code **)(param_5 + 0x10);
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(auStack_280,param_5,1);
      pcVar6 = *(code **)(param_5 + 0x10);
    }
    pcStack_268 = *(code **)(param_5 + 0x18);
    pcStack_270 = pcVar6;
  }
  uStack_260 = 0xffffffff;
  if ((void *)*param_1 == &unknown_var_8720_ptr) {
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)((void *)*param_1 + 0x28))(param_1);
  }
  if (lStack_2a8 == 0) {
    pcVar6 = *(code **)(*plVar15 + 0x70);
    uVar5 = FUN_18023c3b0(auStack_130,&plStack_288);
    FUN_18023da60(auStack_180,uVar5);
    uVar5 = FUN_18023c2e0(auStack_a0,&plStack_248);
    FUN_18023d990(auStack_1a0,uVar5);
    (*pcVar6)(plVar15,&system_data_1050,param_1[0x15] + 0xc,&uStack_2a0,auStack_1a0,auStack_180);
    if (pcStack_190 != (code *)0x0) {
      (*pcStack_190)(auStack_1a0,0,0);
    }
    if (pcStack_170 == (code *)0x0) goto LAB_18023bf81;
    puVar8 = auStack_180;
    pcStack_1b0 = pcStack_170;
  }
  else {
    plVar15 = *(int64_t **)(param_1[0x15] + 0x88);
    pcVar6 = *(code **)(*plVar15 + 0x68);
    uVar5 = FUN_18023c3b0(auStack_160,&plStack_288);
    FUN_18023da60(auStack_1c0,uVar5);
    uVar5 = FUN_18023c2e0(auStack_100,&plStack_248);
    FUN_18023d990(auStack_1e0,uVar5);
    (*pcVar6)(plVar15,lStack_2a8,&uStack_2a0,auStack_1e0,auStack_1c0);
    if (pcStack_1d0 != (code *)0x0) {
      (*pcStack_1d0)(auStack_1e0,0,0);
    }
    if (pcStack_1b0 == (code *)0x0) goto LAB_18023bf81;
    puVar8 = auStack_1c0;
  }
  (*pcStack_1b0)(puVar8,0,0);
LAB_18023bf81:
  if (pcStack_270 != (code *)0x0) {
    (*pcStack_270)(auStack_280,0,0);
  }
  if (pcStack_228 != (code *)0x0) {
    pcStack_228 = (code *)(*pcStack_228)(auStack_238,0,0);
  }
  return pcStack_228;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023c060(int64_t *param_1,int64_t param_2,uint64_t param_3)
void FUN_18023c060(int64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  void *puVar5;
  int8_t auStack_e8 [32];
  int64_t lStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  int64_t lStack_a8;
  uint64_t uStack_a0;
  int16_t uStack_98;
  int8_t uStack_96;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  int32_t uStack_4c;
  int16_t uStack_48;
  int16_t uStack_46;
  int8_t uStack_44;
  char cStack_43;
  char cStack_42;
  uint64_t uStack_38;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  bVar2 = (char)*(int32_t *)((int64_t)param_1 + 0x3c) + (char)(int)param_1[7];
  uVar4 = *(uint *)(param_1[1] + 0x28) >> (bVar2 & 0x1f);
  if ((int)uVar4 < 1) {
    uVar4 = 1;
  }
  uVar3 = *(uint *)(param_1[1] + 0x2c) >> (bVar2 & 0x1f);
  if ((int)uVar3 < 1) {
    uVar3 = 1;
  }
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_96 = 3;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_4c = CONCAT22((short)uVar3,(short)uVar4);
  lVar1 = param_1[1];
  uStack_48 = *(int16_t *)(lVar1 + 0x30);
  uStack_54 = (uint64_t)*(uint *)(lVar1 + 0x20);
  _uStack_46 = CONCAT13(*(char *)(lVar1 + 0x36) - bVar2,
                        CONCAT12(*(int8_t *)(lVar1 + 0x37),*(int16_t *)(lVar1 + 0x34)));
  cStack_42 = *(char *)(lVar1 + 0x38);
  if (cStack_42 == '\0') {
    uStack_98 = 1;
    lStack_a8 = *(int64_t *)(param_2 + 8);
    uStack_a0 = param_3;
  }
  else {
    puVar5 = &system_buffer_ptr;
    if (*(void **)(*param_1 + 0x18) != (void *)0x0) {
      puVar5 = *(void **)(*param_1 + 0x18);
    }
    FUN_180626ee0(&unknown_var_8144_ptr,cStack_42,puVar5);
  }
  uStack_c0 = 0xffffffff;
  lStack_c8 = *param_1;
  FUN_1800a5810(system_message_buffer,&lStack_a8,1,0);
  if (param_1[4] != 0) {
    (*(code *)param_1[5])(1,*param_1);
  }
  (**(code **)(*(int64_t *)*param_1 + 0x38))();
  if (uStack_98._1_1_ == '\0') {
    if (((char)uStack_98 == '\0') && (lStack_a8 != 0)) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023c230(uint64_t *param_1)
void FUN_18023c230(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uVar1 = *(int32_t *)(param_1 + 5);
  uVar2 = *param_1;
  uVar3 = FUN_1800c0100();
  FUN_1800a5810(system_message_buffer,uVar3,1,0,uVar2,uVar1);
  if (param_1[3] != 0) {
    (*(code *)param_1[4])(0,*param_1,param_1 + 1);
  }
                    // WARNING: Could not recover jumptable at 0x00018023c294. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int64_t *)*param_1 + 0x38))();
  return;
}






// 函数: void FUN_18023c2a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18023c2a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(param_1 + 0x10,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}



uint64_t *
FUN_18023c2e0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  code *pcVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[4] = 0;
  param_1[5] = _guard_check_icall;
  if (param_1 + 2 != param_2 + 2) {
    pcVar2 = (code *)param_2[4];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1 + 2,param_2 + 2,1,param_4,0xfffffffffffffffe);
      pcVar2 = (code *)param_2[4];
    }
    param_1[4] = pcVar2;
    param_1[5] = param_2[5];
  }
  param_1[6] = param_2[6];
  *(int32_t *)(param_1 + 7) = *(int32_t *)(param_2 + 7);
  *(int32_t *)((int64_t)param_1 + 0x3c) = *(int32_t *)((int64_t)param_2 + 0x3c);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  *(int32_t *)(param_1 + 10) = *(int32_t *)(param_2 + 10);
  *(int32_t *)((int64_t)param_1 + 0x54) = *(int32_t *)((int64_t)param_2 + 0x54);
  *(int32_t *)(param_1 + 0xb) = *(int32_t *)(param_2 + 0xb);
  *(int32_t *)((int64_t)param_1 + 0x5c) = *(int32_t *)((int64_t)param_2 + 0x5c);
  return param_1;
}



uint64_t *
FUN_18023c3b0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  
  *param_1 = *param_2;
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  if (param_1 + 1 != param_2 + 1) {
    pcVar1 = (code *)param_2[3];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 1,param_2 + 1,1,param_4,0xfffffffffffffffe);
      pcVar1 = (code *)param_2[3];
    }
    param_1[3] = pcVar1;
    param_1[4] = param_2[4];
  }
  *(int32_t *)(param_1 + 5) = *(int32_t *)(param_2 + 5);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




