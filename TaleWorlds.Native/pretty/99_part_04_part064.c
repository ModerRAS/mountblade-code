#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_04_part064.c - 2 个函数
// 函数: void function_2c07a0(int64_t *param_1,int64_t param_2,int64_t param_3)
void function_2c07a0(int64_t *param_1,int64_t param_2,int64_t param_3)
{
  uint64_t *puVar1;
  char *pcVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int32_t uVar8;
  int8_t stack_array_128 [32];
  int64_t *plStack_108;
  int64_t *plStack_100;
  int32_t stack_array_f8 [2];
  int64_t *plStack_f0;
  void *plocal_var_e8;
  int64_t lStack_e0;
  int iStack_d8;
  uint64_t local_var_d0;
  int64_t **applStack_c8 [2];
  int64_t *plStack_b8;
  uint64_t local_var_b0;
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_b0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_128;
  pcVar7 = (char *)0x0;
  pcVar5 = "body_name";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar1 = *(uint64_t **)(param_3 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar5 = (char *)*puVar1;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar6 + -0x180a1885f) {
      pcVar2 = pcVar5 + (int64_t)pcVar2;
      if (pcVar2 <= pcVar5) {
LAB_1802c0847:
        lVar4 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar4 = puVar1[1];
        }
        (**(code **)(*param_1 + 0x10))(param_1,lVar4);
        break;
      }
      lVar4 = (int64_t)&processed_var_7152_ptr - (int64_t)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802c0847;
      }
    }
  }
  plocal_var_e8 = &system_data_buffer_ptr;
  local_var_d0 = 0;
  lStack_e0 = 0;
  iStack_d8 = 0;
  pcVar5 = "name";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  for (puVar1 = *(uint64_t **)(param_3 + 0x40); puVar1 != (uint64_t *)0x0;
      puVar1 = (uint64_t *)puVar1[6]) {
    pcVar5 = (char *)*puVar1;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar6 + -0x180a03a83) {
      pcVar2 = pcVar2 + (int64_t)pcVar5;
      if (pcVar2 <= pcVar5) {
LAB_1802c08f8:
        lVar4 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar4 = puVar1[1];
        }
        uVar8 = CoreSystem_ConfigValidator0(&plocal_var_e8,lVar4);
        if (iStack_d8 != 0) {
          function_0c48e0(uVar8,&plStack_108,&plocal_var_e8,1);
          if (plStack_108 == (int64_t *)0x0) {
            plocal_var_a8 = &memory_allocator_3480_ptr;
            plocal_var_a0 = stack_array_90;
            stack_array_90[0] = 0;
            local_var_98 = 0xb;
            uVar8 = strcpy_s(stack_array_90,0x40,&processed_var_9000_ptr);
            puVar1 = (uint64_t *)function_0c48e0(uVar8,&plStack_100,&plocal_var_a8,1);
            plVar3 = (int64_t *)*puVar1;
            *puVar1 = 0;
            plStack_f0 = plStack_108;
            if (plStack_108 != (int64_t *)0x0) {
              lVar4 = *plStack_108;
              plStack_108 = plVar3;
              (**(code **)(lVar4 + 0x38))();
              plVar3 = plStack_108;
            }
            plStack_108 = plVar3;
            if (plStack_100 != (int64_t *)0x0) {
              (**(code **)(*plStack_100 + 0x38))();
            }
            plocal_var_a8 = &system_state_ptr;
          }
          applStack_c8[0] = &plStack_100;
          plStack_100 = plStack_108;
          if (plStack_108 != (int64_t *)0x0) {
            (**(code **)(*plStack_108 + 0x28))();
          }
          function_2c0630(param_1,param_2,&plStack_100);
          function_2c0c40(param_1,param_3);
          if (plStack_108 != (int64_t *)0x0) {
            (**(code **)(*plStack_108 + 0x38))();
          }
          goto LAB_1802c0ac6;
        }
        break;
      }
      lVar4 = (int64_t)&system_data_3a84 - (int64_t)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802c08f8;
      }
    }
  }
  plocal_var_a8 = &memory_allocator_3480_ptr;
  plocal_var_a0 = stack_array_90;
  stack_array_90[0] = 0;
  local_var_98 = 0xb;
  uVar8 = strcpy_s(stack_array_90,0x40,&processed_var_9000_ptr);
  function_0c48e0(uVar8,&plStack_f0,&plocal_var_a8,1);
  applStack_c8[0] = &plStack_100;
  plStack_100 = plStack_f0;
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x28))();
  }
  function_2c0630(param_1,param_2,&plStack_100);
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  plocal_var_a8 = &system_state_ptr;
LAB_1802c0ac6:
  stack_array_f8[0] = 0xbf800000;
  pcVar5 = "bb_radius";
  do {
    pcVar6 = pcVar5;
    pcVar5 = pcVar6 + 1;
  } while (*pcVar5 != '\0');
  puVar1 = *(uint64_t **)(param_3 + 0x40);
  do {
    if (puVar1 == (uint64_t *)0x0) {
LAB_1802c0b5f:
      if (0 < (int)param_1[2]) {
        plVar3 = (int64_t *)function_0b3430(stack_array_f8[0],applStack_c8,param_1,1);
        lVar4 = *plVar3;
        *plVar3 = 0;
        plStack_b8 = (int64_t *)param_1[7];
        param_1[7] = lVar4;
        if (plStack_b8 != (int64_t *)0x0) {
          (**(code **)(*plStack_b8 + 0x38))();
        }
        if (applStack_c8[0] != (int64_t **)0x0) {
          (*(code *)(*applStack_c8[0])[7])();
        }
      }
      plVar3 = (int64_t *)param_1[5];
      if (plVar3 != (int64_t *)0x0) {
        uVar8 = 0x31;
        if ((~(byte)((uint)*(int32_t *)(param_2 + 0x60) >> 0x1c) & 1) == 0) {
          uVar8 = 1;
        }
        plStack_108 = (int64_t *)CONCAT44(plStack_108._4_4_,uVar8);
        (**(code **)(*plVar3 + 0x128))(plVar3,&plStack_108);
      }
      plocal_var_e8 = &system_data_buffer_ptr;
      if (lStack_e0 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_e0 = 0;
      local_var_d0 = local_var_d0 & 0xffffffff00000000;
      plocal_var_e8 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_128);
    }
    pcVar5 = (char *)*puVar1;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar2 = pcVar7;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar6 + -0x180a18887) {
      pcVar2 = pcVar2 + (int64_t)pcVar5;
      if (pcVar2 <= pcVar5) {
LAB_1802c0b35:
        lVar4 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar4 = puVar1[1];
        }
        AdvancedSystemOptimizer(lVar4,&system_data_6430,stack_array_f8);
        *(int32_t *)(param_1 + 4) = stack_array_f8[0];
        goto LAB_1802c0b5f;
      }
      lVar4 = (int64_t)&processed_var_7192_ptr - (int64_t)pcVar5;
      while (*pcVar5 == pcVar5[lVar4]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar2 <= pcVar5) goto LAB_1802c0b35;
      }
    }
    puVar1 = (uint64_t *)puVar1[6];
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_2c0c40(int64_t param_1,int64_t param_2)
void function_2c0c40(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  int64_t *plVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t lVar9;
  uint *puVar10;
  int iVar11;
  char *pcVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  char *pcVar15;
  uint64_t uVar16;
  char *pcVar17;
  uint64_t *pstack_special_x_8;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  void *puVar18;
  byte *pbVar19;
  uint uVar20;
  void *plocal_var_98;
  int64_t lStack_90;
  uint local_var_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  int32_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_50;
  uint64_t local_var_48;
  local_var_48 = 0xfffffffffffffffe;
  pcVar17 = (char *)0x0;
  lVar6 = *(int64_t *)(param_1 + 0x28);
  if (lVar6 != 0) {
    uVar16 = *(int64_t *)(lVar6 + 0x40) - *(int64_t *)(lVar6 + 0x38) >> 4;
    pcVar12 = "mesh";
    do {
      pcVar15 = pcVar12;
      pcVar12 = pcVar15 + 1;
    } while (*pcVar12 != '\0');
    for (pstack_special_x_8 = *(uint64_t **)(param_2 + 0x30); pstack_special_x_8 != (uint64_t *)0x0;
        pstack_special_x_8 = (uint64_t *)pstack_special_x_8[0xb]) {
      pcVar12 = (char *)*pstack_special_x_8;
      if (pcVar12 == (char *)0x0) {
        pcVar12 = (char *)0x180d48d24;
        pcVar5 = pcVar17;
      }
      else {
        pcVar5 = (char *)pstack_special_x_8[2];
      }
      if (pcVar5 == pcVar15 + -0x180a0f3e7) {
        pcVar5 = pcVar5 + (int64_t)pcVar12;
        local_var_50 = uVar16;
        if (pcVar5 <= pcVar12) {
LAB_1802c0d10:
          do {
            plocal_var_98 = &system_data_buffer_ptr;
            local_var_80 = 0;
            lStack_90 = 0;
            local_var_88 = 0;
            pcVar12 = "name";
            do {
              pcVar15 = pcVar12;
              pcVar12 = pcVar15 + 1;
            } while (*pcVar12 != '\0');
            for (puVar13 = (uint64_t *)pstack_special_x_8[8]; puVar13 != (uint64_t *)0x0;
                puVar13 = (uint64_t *)puVar13[6]) {
              pcVar12 = (char *)*puVar13;
              if (pcVar12 == (char *)0x0) {
                pcVar12 = (char *)0x180d48d24;
                pcVar5 = pcVar17;
              }
              else {
                pcVar5 = (char *)puVar13[2];
              }
              if (pcVar5 == pcVar15 + -0x180a03a83) {
                pcVar5 = pcVar5 + (int64_t)pcVar12;
                if (pcVar5 <= pcVar12) {
LAB_1802c0da6:
                  lVar6 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar6 = puVar13[1];
                  }
                  CoreSystem_ConfigValidator0(&plocal_var_98,lVar6);
                  break;
                }
                lVar6 = (int64_t)&system_data_3a84 - (int64_t)pcVar12;
                while (*pcVar12 == pcVar12[lVar6]) {
                  pcVar12 = pcVar12 + 1;
                  if (pcVar5 <= pcVar12) goto LAB_1802c0da6;
                }
              }
            }
            plocal_var_78 = &system_data_buffer_ptr;
            local_var_60 = 0;
            lStack_70 = 0;
            local_var_68 = 0;
            pcVar12 = "material";
            do {
              pcVar15 = pcVar12;
              pcVar12 = pcVar15 + 1;
            } while (*pcVar12 != '\0');
            for (puVar13 = (uint64_t *)pstack_special_x_8[8]; puVar13 != (uint64_t *)0x0;
                puVar13 = (uint64_t *)puVar13[6]) {
              pcVar12 = (char *)*puVar13;
              if (pcVar12 == (char *)0x0) {
                pcVar12 = (char *)0x180d48d24;
                pcVar5 = pcVar17;
              }
              else {
                pcVar5 = (char *)puVar13[2];
              }
              if (pcVar5 == pcVar15 + -0x180a04ebf) {
                pcVar5 = pcVar5 + (int64_t)pcVar12;
                if (pcVar5 <= pcVar12) {
LAB_1802c0e54:
                  lVar6 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar6 = puVar13[1];
                  }
                  CoreSystem_ConfigValidator0(&plocal_var_78,lVar6);
                  break;
                }
                lVar6 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar12;
                while (*pcVar12 == pcVar12[lVar6]) {
                  pcVar12 = pcVar12 + 1;
                  if (pcVar5 <= pcVar12) goto LAB_1802c0e54;
                }
              }
            }
            if ((int)uVar16 != 0) {
              uVar7 = uVar16 & 0xffffffff;
              pcVar12 = pcVar17;
              do {
                lVar6 = *(int64_t *)(pcVar12 + *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x38))
                ;
                puVar18 = &system_data_buffer_ptr;
                uVar16 = 0;
                pbVar19 = (byte *)0x0;
                uVar20 = 0;
                if (*(int *)(lVar6 + 0x20) != 0) {
                  iVar3 = *(int *)(lVar6 + 0x20) + 1;
                  if (iVar3 < 0x10) {
                    iVar3 = 0x10;
                  }
                  pbVar19 = (byte *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar3,0x13);
                  *pbVar19 = 0;
                  uVar16 = (uint64_t)pbVar19 & 0xffffffffffc00000;
                  uVar8 = 0;
                  if (uVar16 != 0) {
                    lVar9 = uVar16 + 0x80 + ((int64_t)pbVar19 - uVar16 >> 0x10) * 0x50;
                    puVar10 = (uint *)(lVar9 - (uint64_t)*(uint *)(lVar9 + 4));
                    if ((*(byte *)((int64_t)puVar10 + 0xe) & 2) == 0) {
                      uVar8 = puVar10[7];
                      if (0x3ffffff < puVar10[7]) {
                        uVar8 = *puVar10 << 0x10;
                      }
                    }
                    else {
                      uVar8 = puVar10[7];
                      if (uVar8 < 0x4000000) {
                        uVar14 = (uint64_t)uVar8;
                      }
                      else {
                        uVar14 = (uint64_t)*puVar10 << 0x10;
                      }
                      if (0x3ffffff < uVar8) {
                        uVar8 = *puVar10 << 0x10;
                      }
                      uVar8 = uVar8 - (int)(((int64_t)pbVar19 -
                                            (((int64_t)((int64_t)puVar10 + (-0x80 - uVar16)) /
                                             0x50) * 0x10000 + uVar16)) % uVar14);
                    }
                  }
                  uVar16 = (uint64_t)uVar8;
                  if (0 < *(int *)(lVar6 + 0x20)) {
                    puVar18 = &system_buffer_ptr;
                    if (*(void **)(lVar6 + 0x18) != (void *)0x0) {
                      puVar18 = *(void **)(lVar6 + 0x18);
                    }
// WARNING: Subroutine does not return
                    memcpy(pbVar19,puVar18,(int64_t)(*(int *)(lVar6 + 0x20) + 1));
                  }
                }
                if ((*(int64_t *)(lVar6 + 0x18) != 0) && (uVar20 = 0, pbVar19 != (byte *)0x0)) {
                  *pbVar19 = 0;
                }
                while ((0 < (int)uVar20 && (lVar6 = strstr(pbVar19,&system_data_ff10), lVar6 != 0))) {
                  iVar11 = 6;
                  iVar3 = (int)lVar6 - (int)pbVar19;
                  if (uVar20 < iVar3 + 6U) {
                    iVar11 = uVar20 - iVar3;
                  }
                  uVar8 = iVar3 + iVar11;
                  if (uVar8 < uVar20) {
                    lVar6 = (int64_t)(int)uVar8;
                    do {
                      pbVar19[lVar6 - iVar11] = pbVar19[lVar6];
                      uVar8 = uVar8 + 1;
                      lVar6 = lVar6 + 1;
                    } while (uVar8 < uVar20);
                  }
                  uVar20 = uVar20 - iVar11;
                  pbVar19[uVar20] = 0;
                }
                uVar8 = local_var_88;
                if (uVar20 == local_var_88) {
                  if (uVar20 != 0) {
                    pbVar4 = pbVar19;
                    do {
                      pbVar1 = pbVar4 + (lStack_90 - (int64_t)pbVar19);
                      uVar8 = (uint)*pbVar4 - (uint)*pbVar1;
                      if (uVar8 != 0) break;
                      pbVar4 = pbVar4 + 1;
                    } while (*pbVar1 != 0);
                  }
LAB_1802c10bd:
                  if (uVar8 == 0) {
                    SystemCore_PerformanceMonitor(system_resource_state,&plStackX_18,&plocal_var_78,0,puVar18,pbVar19,uVar20,
                                  uVar16);
                    plVar2 = plStackX_18;
                    if (plStackX_18 != (int64_t *)0x0) {
                      plStackX_20 = plStackX_18;
                      (**(code **)(*plStackX_18 + 0x28))(plStackX_18);
                      UltraHighFreq_SecurityValidator1(*(uint64_t *)
                                     (pcVar12 + *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x38))
                                    ,&plStackX_20);
                      (**(code **)(*plVar2 + 0x38))(plVar2);
                    }
                    if (plStackX_18 != (int64_t *)0x0) {
                      (**(code **)(*plStackX_18 + 0x38))();
                    }
                  }
                }
                else if (uVar20 == 0) goto LAB_1802c10bd;
                if (pbVar19 != (byte *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                pcVar12 = pcVar12 + 0x10;
                uVar7 = uVar7 - 1;
                uVar16 = local_var_50;
              } while (uVar7 != 0);
            }
            pcVar12 = "mesh";
            do {
              pcVar15 = pcVar12;
              pcVar12 = pcVar15 + 1;
            } while (*pcVar12 != '\0');
            for (pstack_special_x_8 = (uint64_t *)pstack_special_x_8[0xb]; pstack_special_x_8 != (uint64_t *)0x0;
                pstack_special_x_8 = (uint64_t *)pstack_special_x_8[0xb]) {
              pcVar12 = (char *)*pstack_special_x_8;
              if (pcVar12 == (char *)0x0) {
                pcVar12 = (char *)0x180d48d24;
                pcVar5 = pcVar17;
              }
              else {
                pcVar5 = (char *)pstack_special_x_8[2];
              }
              if (pcVar5 == pcVar15 + -0x180a0f3e7) {
                pcVar5 = pcVar5 + (int64_t)pcVar12;
                if (pcVar5 <= pcVar12) goto LAB_1802c11de;
                lVar6 = (int64_t)&processed_var_9144_ptr - (int64_t)pcVar12;
                while (*pcVar12 == pcVar12[lVar6]) {
                  pcVar12 = pcVar12 + 1;
                  if (pcVar5 <= pcVar12) goto LAB_1802c11de;
                }
              }
            }
            pstack_special_x_8 = (uint64_t *)0x0;
LAB_1802c11de:
            plocal_var_78 = &system_data_buffer_ptr;
            if (lStack_70 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_70 = 0;
            local_var_60 = local_var_60 & 0xffffffff00000000;
            plocal_var_78 = &system_state_ptr;
            plocal_var_98 = &system_data_buffer_ptr;
            if (lStack_90 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            if (pstack_special_x_8 == (uint64_t *)0x0) {
              return;
            }
          } while( true );
        }
        lVar6 = (int64_t)&processed_var_9144_ptr - (int64_t)pcVar12;
        while (*pcVar12 == pcVar12[lVar6]) {
          pcVar12 = pcVar12 + 1;
          if (pcVar5 <= pcVar12) goto LAB_1802c0d10;
        }
      }
    }
  }
  return;
}
uint64_t * function_2c1260(uint64_t *param_1)
{
  int64_t *plVar1;
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  plVar1 = (int64_t *)param_1[7];
  param_1[7] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 4) = 0xc2c80000;
  *(int32_t *)(param_1 + 6) = 0x3f800000;
  return param_1;
}
uint64_t * function_2c12e0(uint64_t *param_1,uint param_2)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  *param_1 = &processed_var_7536_ptr;
  plVar3 = param_1 + 0xd;
  lVar4 = 4;
  do {
    puVar1 = (uint64_t *)*plVar3;
    if (puVar1 != (uint64_t *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
    }
    *plVar3 = 0;
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[1] = &system_state_ptr;
  *param_1 = &processed_var_5912_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address