#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_03_part006.c - 1 个函数
// 函数: void function_1ca670(int64_t *param_1,uint64_t param_2)
void function_1ca670(int64_t *param_1,uint64_t param_2)
{
  int8_t auVar1 [16];
  byte bVar2;
  uint64_t *puVar3;
  bool bVar4;
  int64_t *****ppppplVar5;
  uint64_t uVar6;
  int64_t ****pppplVar7;
  int64_t *****ppppplVar8;
  byte *pbVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t *****ppppplVar13;
  uint uVar14;
  int iVar15;
  int64_t *plVar16;
  int8_t auVar17 [8];
  uint uVar18;
  int64_t *plVar19;
  int64_t lVar20;
  int64_t *****ppppplVar21;
  int64_t lVar22;
  void *puVar23;
  uint *puVar24;
  void *puVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  int8_t (*pauVar29) [16];
  int64_t *plStackX_8;
  uint64_t stack_special_x_10;
  int64_t *plStackX_18;
  int64_t ****pppplStackX_20;
  void *plocal_var_228;
  int16_t *plocal_var_220;
  uint local_var_218;
  uint64_t local_var_210;
  uint64_t local_var_208;
  void *plocal_var_200;
  void *plocal_var_1f8;
  int32_t local_var_1f0;
  uint64_t local_var_1e8;
  int64_t ****pppplStack_1e0;
  uint64_t *plocal_var_1d8;
  int64_t *plStack_1d0;
  int64_t ****pppplStack_1c8;
  int64_t ****pppplStack_1c0;
  int64_t ****pppplStack_1b8;
  uint64_t local_var_1b0;
  int64_t lStack_1a8;
  int32_t local_var_1a0;
  int8_t stack_array_198 [8];
  int64_t *plStack_190;
  int64_t *plStack_188;
  int32_t local_var_180;
  uint64_t local_var_170;
  int64_t lStack_168;
  int64_t lStack_160;
  int64_t lStack_158;
  int8_t stack_array_150 [272];
  local_var_170 = 0xfffffffffffffffe;
  local_var_1a0 = 3;
  pppplStack_1c8 = (int64_t ****)&pppplStack_1c8;
  pppplStack_1c0 = (int64_t ****)&pppplStack_1c8;
  pppplStack_1b8 = (int64_t ****)0x0;
  local_var_1b0 = 0;
  lStack_1a8 = 0;
  pppplStack_1e0 = (int64_t ****)system_resource_state;
  uVar6 = (int64_t)system_resource_state[0x159] - (int64_t)system_resource_state[0x158] >> 3;
  plStackX_8 = param_1;
  stack_special_x_10 = param_2;
  if ((int)uVar6 != 0) {
    plStackX_18 = (int64_t *)0x0;
    uVar6 = uVar6 & 0xffffffff;
    do {
      plVar11 = plStackX_18;
      puVar3 = *(uint64_t **)((int64_t)plStackX_18 + (int64_t)pppplStack_1e0[0x158]);
      pppplStackX_20 = (int64_t ****)uVar6;
      plocal_var_1d8 = puVar3;
      SystemCore_EncryptionManager(system_resource_state,&plStackX_8,puVar3 + 6,0);
      if (plStackX_8 != (int64_t *)0x0) {
        puVar10 = (uint64_t *)puVar3[1];
        pauVar29 = (int8_t (*) [16])*puVar10;
        if (pauVar29 == (int8_t (*) [16])0x0) {
          puVar28 = puVar10 + 1;
          pauVar29 = (int8_t (*) [16])*puVar28;
          while (pauVar29 == (int8_t (*) [16])0x0) {
            puVar28 = puVar28 + 1;
            pauVar29 = (int8_t (*) [16])*puVar28;
          }
        }
        if (pauVar29 != (int8_t (*) [16])puVar10[puVar3[2]]) {
          auVar1 = *pauVar29;
          _stack_array_198 = auVar1;
          local_var_208 = auVar1._8_8_;
          plStack_1d0 = (int64_t *)(local_var_208 >> 0x20);
          ppppplVar13 = &pppplStack_1c8;
          if ((int64_t *****)pppplStack_1b8 == (int64_t *****)0x0) goto LAB_1801ca835;
          ppppplVar8 = (int64_t *****)pppplStack_1b8;
          goto LAB_1801ca7d3;
        }
      }
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_18 = plVar11 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  plocal_var_200 = &system_data_buffer_ptr;
  local_var_1e8 = 0;
  plocal_var_1f8 = (void *)0x0;
  local_var_1f0 = 0;
  pppplStackX_20 = pppplStack_1c0;
  ppppplVar13 = (int64_t *****)pppplStack_1c0;
  if ((int64_t *****)pppplStack_1c0 != &pppplStack_1c8) {
    do {
      pppplStackX_20 = (int64_t ****)ppppplVar13;
      pppplStack_1e0 = (int64_t ****)(ppppplVar13 + 8);
      SystemCore_EncryptionManager(system_resource_state,&plStackX_18,ppppplVar13 + 4,0);
      if (plStackX_18 != (int64_t *)0x0) {
        plVar11 = (int64_t *)function_240a60();
        pppplVar7 = (int64_t ****)&system_buffer_ptr;
        if (ppppplVar13[5] != (int64_t ****)0x0) {
          pppplVar7 = ppppplVar13[5];
        }
        plStack_1d0 = plVar11;
        System_DataHandler(&plocal_var_200,&processed_var_832_ptr,pppplVar7);
        System_DataHandler(&plocal_var_200);
        _stack_array_198 = ZEXT816(0);
        auVar1 = _stack_array_198;
        plVar16 = (int64_t *)0x0;
        plStack_188 = (int64_t *)0x0;
        local_var_180 = 3;
        ppppplVar8 = (int64_t *****)ppppplVar13[9];
        plStack_190 = (int64_t *)0x0;
        plVar19 = plStack_190;
        if (ppppplVar8 != ppppplVar13 + 8) {
          stack_array_198 = (int8_t  [8])0x0;
          auVar17 = stack_array_198;
          _stack_array_198 = auVar1;
          do {
            plVar12 = (int64_t *)0x0;
            pppplVar7 = ppppplVar8[4];
            for (plVar11 = (int64_t *)auVar17; plVar11 != plVar19; plVar11 = plVar11 + 1) {
              if ((int64_t ****)*plVar11 == pppplVar7) {
                if (plVar11 != plVar19) goto LAB_1801cad0b;
                break;
              }
            }
            if (plVar19 < plVar16) {
              plStack_190 = plVar19 + 1;
              *plVar19 = (int64_t)pppplVar7;
              plVar19 = plVar19 + 1;
            }
            else {
              local_var_208 = (int64_t)plVar19 - (int64_t)auVar17;
              if ((int64_t)local_var_208 >> 3 == 0) {
                lVar22 = 1;
LAB_1801caca9:
                plVar12 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar22 * 8,3);
              }
              else {
                lVar22 = ((int64_t)local_var_208 >> 3) * 2;
                if (lVar22 != 0) goto LAB_1801caca9;
              }
              if (auVar17 != (int8_t  [8])plVar19) {
// WARNING: Subroutine does not return
                memmove(plVar12,auVar17,local_var_208);
              }
              *plVar12 = (int64_t)pppplVar7;
              plVar19 = plVar12 + 1;
              if (auVar17 != (int8_t  [8])0x0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(auVar17);
              }
              plStack_190 = plVar19;
              stack_array_198 = (int8_t  [8])plVar12;
              plVar16 = plVar12 + lVar22;
              auVar17 = (int8_t  [8])plVar12;
              plStack_188 = plVar16;
            }
LAB_1801cad0b:
            ppppplVar8 = (int64_t *****)Function_7bfb2422(ppppplVar8);
            ppppplVar13 = (int64_t *****)pppplStackX_20;
            plVar11 = plStack_1d0;
            auVar1 = _stack_array_198;
          } while (ppppplVar8 != (int64_t *****)pppplStack_1e0);
        }
        _stack_array_198 = auVar1;
        uVar6 = (int64_t)plVar19 - (int64_t)stack_array_198 >> 3;
        auVar17 = stack_array_198;
        if ((int)uVar6 != 0) {
          local_var_208 = uVar6 & 0xffffffff;
          plocal_var_1d8 = (uint64_t *)stack_array_198;
          do {
            pppplVar7 = (int64_t ****)*plocal_var_1d8;
            plocal_var_228 = &system_data_buffer_ptr;
            local_var_210 = 0;
            plocal_var_220 = (int16_t *)0x0;
            local_var_218 = 0;
            plocal_var_220 = (int16_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
            *(int8_t *)plocal_var_220 = 0;
            uVar6 = (uint64_t)plocal_var_220 & 0xffffffffffc00000;
            if (uVar6 == 0) {
              uVar14 = 0;
            }
            else {
              lVar22 = uVar6 + 0x80 + ((int64_t)plocal_var_220 - uVar6 >> 0x10) * 0x50;
              puVar24 = (uint *)(lVar22 - (uint64_t)*(uint *)(lVar22 + 4));
              if ((*(byte *)((int64_t)puVar24 + 0xe) & 2) == 0) {
                uVar14 = puVar24[7];
                if (0x3ffffff < uVar14) {
                  uVar14 = *puVar24 << 0x10;
                }
              }
              else {
                uVar14 = puVar24[7];
                if (uVar14 < 0x4000000) {
                  uVar26 = (uint64_t)uVar14;
                }
                else {
                  uVar26 = (uint64_t)*puVar24 << 0x10;
                }
                if (0x3ffffff < uVar14) {
                  uVar14 = *puVar24 << 0x10;
                }
                uVar14 = uVar14 - (int)(((int64_t)plocal_var_220 -
                                        (((int64_t)((int64_t)puVar24 + (-0x80 - uVar6)) / 0x50) *
                                         0x10000 + uVar6)) % uVar26);
              }
            }
            *plocal_var_220 = 0x28;
            local_var_218 = 1;
            iVar15 = 0;
            lVar22 = *plVar11;
            lVar20 = plVar11[1] - lVar22 >> 0x3f;
            local_var_210._0_4_ = uVar14;
            if ((plVar11[1] - lVar22) / 0x60 + lVar20 != lVar20) {
              uVar6 = 1;
              lVar20 = 0;
              do {
                if (((uint64_t)pppplVar7 & uVar6) != 0) {
                  puVar25 = *(void **)(lVar22 + lVar20 + 8);
                  puVar23 = &system_buffer_ptr;
                  if (puVar25 != (void *)0x0) {
                    puVar23 = puVar25;
                  }
                  System_DataHandler(&plocal_var_228,&processed_var_792_ptr,puVar23);
                  lVar22 = *plVar11;
                }
                iVar15 = iVar15 + 1;
                uVar6 = uVar6 << 1 | (uint64_t)((int64_t)uVar6 < 0);
                lVar20 = lVar20 + 0x60;
              } while ((uint64_t)(int64_t)iVar15 < (uint64_t)((plVar11[1] - lVar22) / 0x60));
            }
            iVar15 = local_var_218 + 1;
            if (iVar15 != 0) {
              uVar14 = local_var_218 + 2;
              if (plocal_var_220 == (int16_t *)0x0) {
                if ((int)uVar14 < 0x10) {
                  uVar14 = 0x10;
                }
                plocal_var_220 = (int16_t *)
                              CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar14,
                                            CONCAT71((int7)((uint64_t)lVar22 >> 8),0x13));
                *(int8_t *)plocal_var_220 = 0;
                local_var_210._0_4_ = CoreEngineSystemCleanup(plocal_var_220);
              }
              else if ((uint)local_var_210 < uVar14) {
                plocal_var_220 = (int16_t *)
                              DataValidator(system_memory_pool_ptr,plocal_var_220,uVar14,0x10,0x13);
                uVar6 = (uint64_t)plocal_var_220 & 0xffffffffffc00000;
                if (uVar6 == 0) {
                  local_var_210._0_4_ = 0;
                }
                else {
                  lVar22 = ((int64_t)plocal_var_220 - uVar6 >> 0x10) * 0x50 + 0x80 + uVar6;
                  puVar24 = (uint *)(lVar22 - (uint64_t)*(uint *)(lVar22 + 4));
                  if ((*(byte *)((int64_t)puVar24 + 0xe) & 2) == 0) {
                    local_var_210._0_4_ = puVar24[7];
                    if (0x3ffffff < (uint)local_var_210) {
                      local_var_210._0_4_ = *puVar24 << 0x10;
                    }
                  }
                  else {
                    local_var_210._0_4_ = puVar24[7];
                    if ((uint)local_var_210 < 0x4000000) {
                      uVar26 = (uint64_t)(uint)local_var_210;
                    }
                    else {
                      uVar26 = (uint64_t)*puVar24 << 0x10;
                    }
                    if (0x3ffffff < (uint)local_var_210) {
                      local_var_210._0_4_ = *puVar24 << 0x10;
                    }
                    local_var_210._0_4_ =
                         (uint)local_var_210 -
                         (int)(((int64_t)plocal_var_220 -
                               (((int64_t)((int64_t)puVar24 + (-0x80 - uVar6)) / 0x50) * 0x10000 +
                               uVar6)) % uVar26);
                  }
                }
              }
            }
            *(int16_t *)((uint64_t)local_var_218 + (int64_t)plocal_var_220) = 0x29;
            ppppplVar8 = (int64_t *****)pppplStack_1e0[2];
            ppppplVar13 = (int64_t *****)pppplStack_1e0;
            while (ppppplVar21 = ppppplVar8, ppppplVar5 = (int64_t *****)pppplStack_1e0[2],
                  ppppplVar8 = (int64_t *****)pppplStack_1e0, ppppplVar21 != (int64_t *****)0x0) {
              if (pppplVar7 < ppppplVar21[4]) {
                ppppplVar8 = (int64_t *****)ppppplVar21[1];
                ppppplVar13 = ppppplVar21;
              }
              else {
                ppppplVar8 = (int64_t *****)*ppppplVar21;
              }
            }
            while (ppppplVar21 = ppppplVar5, ppppplVar21 != (int64_t *****)0x0) {
              if (ppppplVar21[4] < pppplVar7) {
                ppppplVar5 = (int64_t *****)*ppppplVar21;
              }
              else {
                ppppplVar5 = (int64_t *****)ppppplVar21[1];
                ppppplVar8 = ppppplVar21;
              }
            }
            local_var_218 = iVar15;
            if (ppppplVar8 == ppppplVar13) {
              plocal_var_228 = &system_data_buffer_ptr;
              if (plocal_var_220 != (int16_t *)0x0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
            }
            else {
              System_DataHandler(&plocal_var_200,&processed_var_800_ptr,pppplVar7);
              System_DataHandler(&plocal_var_200,&processed_var_888_ptr);
              do {
                uVar14 = *(uint *)(ppppplVar8 + 5);
                System_DataHandler(&plocal_var_200,&processed_var_896_ptr,
                              *(int32_t *)((int64_t)ppppplVar8 + 0x2c));
                System_DataHandler(&plocal_var_200,&processed_var_856_ptr,uVar14);
                System_DataHandler(&plocal_var_200,&processed_var_880_ptr);
                uVar18 = 1;
                puVar10 = (uint64_t *)&system_state_6758;
                lVar22 = 0x20;
                do {
                  if ((uVar14 & uVar18) != 0) {
                    puVar25 = &system_buffer_ptr;
                    if ((void *)*puVar10 != (void *)0x0) {
                      puVar25 = (void *)*puVar10;
                    }
                    System_DataHandler(&plocal_var_200,&processed_var_704_ptr,puVar25);
                  }
                  uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
                  puVar10 = puVar10 + 0xb;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                System_DataHandler(&plocal_var_200,&processed_var_940_ptr);
                ppppplVar8 = (int64_t *****)Function_7bfb2422(ppppplVar8);
              } while (ppppplVar8 != ppppplVar13);
              System_DataHandler(&plocal_var_200);
              plocal_var_228 = &system_data_buffer_ptr;
              if (plocal_var_220 != (int16_t *)0x0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
            }
            local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
            plocal_var_220 = (int16_t *)0x0;
            plocal_var_228 = &system_state_ptr;
            plocal_var_1d8 = plocal_var_1d8 + 1;
            local_var_208 = local_var_208 - 1;
            plVar11 = plStack_1d0;
          } while (local_var_208 != 0);
          local_var_208 = 0;
          auVar17 = stack_array_198;
          ppppplVar13 = (int64_t *****)pppplStackX_20;
        }
        System_DataHandler(&plocal_var_200,&processed_var_916_ptr);
        System_DataHandler(&plocal_var_200,&system_state_cc18);
        if (auVar17 != (int8_t  [8])0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(auVar17);
        }
        if (plStackX_18 != (int64_t *)0x0) {
          (**(code **)(*plStackX_18 + 0x38))();
        }
      }
      ppppplVar13 = (int64_t *****)Function_7bfb2422(ppppplVar13);
      pppplStackX_20 = (int64_t ****)ppppplVar13;
    } while (ppppplVar13 != &pppplStack_1c8);
  }
  function_16cdb0(&lStack_158);
  lVar22 = function_0c4800(stack_array_150,stack_special_x_10,2);
  if (lVar22 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((int64_t)*(int *)(lStack_158 + 4) + (int64_t)&lStack_158,2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((int64_t)*(int *)(lStack_158 + 4) + (int64_t)&lStack_158,0);
  }
  puVar25 = &system_buffer_ptr;
  if (plocal_var_1f8 != (void *)0x0) {
    puVar25 = plocal_var_1f8;
  }
  uVar27 = SystemCore_Synchronizer(&lStack_158,puVar25);
  __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
            (uVar27,function_1e7680);
  lVar22 = function_0a19c0(stack_array_150);
  if (lVar22 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((int64_t)*(int *)(lStack_158 + 4) + (int64_t)&lStack_158,2);
  }
  function_09fbe0(&lStack_158);
  plocal_var_200 = &system_data_buffer_ptr;
  if (plocal_var_1f8 == (void *)0x0) {
    plocal_var_1f8 = (void *)0x0;
    local_var_1e8 = local_var_1e8 & 0xffffffff00000000;
    plocal_var_200 = &system_state_ptr;
    function_0593f0(&pppplStack_1c8,pppplStack_1b8);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
LAB_1801ca7d3:
  do {
    if ((int)puVar3[8] == 0) {
      bVar4 = false;
      ppppplVar21 = (int64_t *****)ppppplVar8[1];
    }
    else {
      if (*(int *)(ppppplVar8 + 6) == 0) {
        bVar4 = true;
      }
      else {
        pbVar9 = (byte *)puVar3[7];
        lVar22 = (int64_t)ppppplVar8[5] - (int64_t)pbVar9;
        do {
          uVar14 = (uint)pbVar9[lVar22];
          iVar15 = *pbVar9 - uVar14;
          if (*pbVar9 != uVar14) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
        bVar4 = 0 < iVar15;
        if (iVar15 < 1) {
          ppppplVar21 = (int64_t *****)ppppplVar8[1];
          goto LAB_1801ca827;
        }
      }
      ppppplVar21 = (int64_t *****)*ppppplVar8;
    }
LAB_1801ca827:
    if (bVar4) {
      ppppplVar8 = ppppplVar13;
    }
    ppppplVar13 = ppppplVar8;
    ppppplVar8 = ppppplVar21;
  } while (ppppplVar21 != (int64_t *****)0x0);
LAB_1801ca835:
  if (ppppplVar13 != &pppplStack_1c8) {
    if (*(int *)(ppppplVar13 + 6) == 0) goto LAB_1801caa3a;
    if ((int)puVar3[8] != 0) {
      pppplVar7 = ppppplVar13[5];
      lVar22 = puVar3[7] - (int64_t)pppplVar7;
      do {
        bVar2 = *(byte *)pppplVar7;
        uVar14 = (uint)*(byte *)((int64_t)pppplVar7 + lVar22);
        if (bVar2 != uVar14) break;
        pppplVar7 = (int64_t ****)((int64_t)pppplVar7 + 1);
      } while (uVar14 != 0);
      if ((int)(bVar2 - uVar14) < 1) goto LAB_1801caa3a;
    }
  }
  if ((ppppplVar13 == (int64_t *****)pppplStack_1c8) || (ppppplVar13 == &pppplStack_1c8)) {
    if ((lStack_1a8 != 0) && ((int)puVar3[8] != 0)) {
      ppppplVar13 = (int64_t *****)pppplStack_1c8;
      if (*(int *)(pppplStack_1c8 + 6) != 0) {
        pbVar9 = (byte *)puVar3[7];
        lVar22 = (int64_t)pppplStack_1c8[5] - (int64_t)pbVar9;
        do {
          bVar2 = *pbVar9;
          uVar14 = (uint)pbVar9[lVar22];
          if (bVar2 != uVar14) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
        if ((int)(bVar2 - uVar14) < 1) goto LAB_1801caa26;
      }
LAB_1801ca95c:
      bVar4 = false;
LAB_1801ca95e:
      if (ppppplVar13 != (int64_t *****)0x0) {
        if ((bVar4) || (ppppplVar13 == &pppplStack_1c8)) {
LAB_1801ca9af:
          uVar27 = 0;
        }
        else {
          if (*(int *)(ppppplVar13 + 6) != 0) {
            pppplVar7 = ppppplVar13[5];
            lVar22 = puVar3[7] - (int64_t)pppplVar7;
            do {
              bVar2 = *(byte *)pppplVar7;
              uVar14 = (uint)*(byte *)((int64_t)pppplVar7 + lVar22);
              if (bVar2 != uVar14) break;
              pppplVar7 = (int64_t ****)((int64_t)pppplVar7 + 1);
            } while (uVar14 != 0);
            if (0 < (int)(bVar2 - uVar14)) goto LAB_1801ca9af;
          }
          uVar27 = 1;
        }
        lVar22 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x70,(int8_t)local_var_1a0);
        lStack_168 = lVar22 + 0x20;
        CoreEngineDataTransformer(lStack_168,puVar3 + 6);
        lStack_160 = lVar22 + 0x40;
        *(uint64_t *)(lVar22 + 0x68) = 0;
        *(uint64_t *)(lVar22 + 0x58) = 0;
        *(int32_t *)(lVar22 + 0x68) = 3;
        *(int64_t *)lStack_160 = lStack_160;
        *(int64_t *)(lVar22 + 0x48) = lStack_160;
        *(uint64_t *)(lVar22 + 0x50) = 0;
        *(int8_t *)(lVar22 + 0x58) = 0;
        *(uint64_t *)(lVar22 + 0x60) = 0;
// WARNING: Subroutine does not return
        SystemNetworkHandler(lVar22,ppppplVar13,&pppplStack_1c8,uVar27);
      }
    }
  }
  else {
    ppppplVar8 = (int64_t *****)Function_7bfb2422(ppppplVar13);
    if ((int)puVar3[8] != 0) {
      if (*(int *)(ppppplVar13 + 6) != 0) {
        pbVar9 = (byte *)puVar3[7];
        lVar22 = (int64_t)ppppplVar13[5] - (int64_t)pbVar9;
        do {
          bVar2 = *pbVar9;
          uVar14 = (uint)pbVar9[lVar22];
          if (bVar2 != uVar14) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
        if ((int)(bVar2 - uVar14) < 1) goto LAB_1801caa26;
      }
      if (*(int *)(ppppplVar8 + 6) != 0) {
        pppplVar7 = ppppplVar8[5];
        lVar22 = puVar3[7] - (int64_t)pppplVar7;
        do {
          bVar2 = *(byte *)pppplVar7;
          uVar14 = (uint)*(byte *)((int64_t)pppplVar7 + lVar22);
          if (bVar2 != uVar14) break;
          pppplVar7 = (int64_t ****)((int64_t)pppplVar7 + 1);
        } while (uVar14 != 0);
        if (0 < (int)(bVar2 - uVar14)) {
          if (*ppppplVar13 == (int64_t ****)0x0) goto LAB_1801ca95c;
          bVar4 = true;
          ppppplVar13 = ppppplVar8;
          goto LAB_1801ca95e;
        }
      }
    }
  }
LAB_1801caa26:
  puVar10 = (uint64_t *)function_1ea410(&pppplStack_1c8,&plocal_var_228);
  ppppplVar13 = (int64_t *****)*puVar10;
LAB_1801caa3a:
  ppppplVar8 = ppppplVar13 + 8;
  auVar17 = stack_array_198;
  ppppplVar21 = ppppplVar8;
  ppppplVar5 = (int64_t *****)ppppplVar13[10];
  while (ppppplVar5 != (int64_t *****)0x0) {
    ppppplVar21 = ppppplVar5;
    if ((uint64_t)stack_array_198 < ppppplVar5[4]) {
      ppppplVar5 = (int64_t *****)ppppplVar5[1];
    }
    else {
      ppppplVar5 = (int64_t *****)*ppppplVar5;
    }
  }
  lVar22 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x30,*(int8_t *)(ppppplVar13 + 0xd));
  *(int8_t (*) [8])(lVar22 + 0x20) = auVar17;
  *(int *)(lVar22 + 0x28) = (int)local_var_208;
  *(uint *)(lVar22 + 0x2c) = auVar1._12_4_ & 0xffff;
  if ((ppppplVar21 == ppppplVar8) || ((uint64_t)auVar17 < ppppplVar21[4])) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar22,ppppplVar21,ppppplVar8,uVar27);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address