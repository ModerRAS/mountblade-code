#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part023.c - 2 个函数
// 函数: void function_3bb5f0(int64_t param_1,int64_t param_2)
void function_3bb5f0(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  int8_t uVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int iVar13;
  char *pcVar14;
  void *puVar15;
  int64_t lVar16;
  int64_t *plVar17;
  void *puVar18;
  uint uVar19;
  uint64_t *puVar20;
  char *pcVar22;
  int64_t *plVar23;
  uint64_t uVar24;
  void *plocal_var_128;
  void *plocal_var_120;
  int iStack_118;
  uint64_t local_var_110;
  void *plocal_var_108;
  int8_t *plocal_var_100;
  int32_t local_var_f8;
  uint64_t local_var_f0;
  void *plocal_var_e8;
  int64_t lStack_e0;
  int32_t local_var_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int64_t *plStack_b8;
  uint local_var_b0;
  uint64_t local_var_a8;
  int8_t stack_array_a0 [16];
  int8_t stack_array_90 [16];
  int8_t stack_array_80 [32];
  int8_t stack_array_60 [40];
  int64_t *plVar21;
  local_var_a8 = 0xfffffffffffffffe;
  pcVar9 = (char *)0x0;
  puVar20 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar20 == (uint64_t *)0x0) {
      return;
    }
    pcVar14 = (char *)*puVar20;
    if ((pcVar14 != (char *)0x0) && (puVar20[2] == 7)) {
      pcVar22 = pcVar14 + 7;
      if (pcVar22 <= pcVar14) {
LAB_1803bb665:
        pcVar14 = "script";
        do {
          pcVar22 = pcVar14;
          pcVar14 = pcVar22 + 1;
        } while (*pcVar14 != '\0');
        plVar12 = (int64_t *)puVar20[6];
        do {
          if (plVar12 == (int64_t *)0x0) {
            return;
          }
          pcVar14 = (char *)*plVar12;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            pcVar10 = pcVar9;
          }
          else {
            pcVar10 = (char *)plVar12[2];
          }
          if (pcVar10 == pcVar22 + -0x180a2355b) {
            pcVar10 = pcVar10 + (int64_t)pcVar14;
            if (pcVar10 <= pcVar14) {
LAB_1803bb6f0:
              do {
                plVar21 = (int64_t *)0x0;
                plocal_var_128 = &system_data_buffer_ptr;
                local_var_110 = 0;
                plocal_var_120 = (void *)0x0;
                iStack_118 = 0;
                pcVar14 = "name";
                do {
                  pcVar22 = pcVar14;
                  pcVar14 = pcVar22 + 1;
                } while (*pcVar14 != '\0');
                for (puVar20 = (uint64_t *)plVar12[8]; puVar20 != (uint64_t *)0x0;
                    puVar20 = (uint64_t *)puVar20[6]) {
                  pcVar14 = (char *)*puVar20;
                  if (pcVar14 == (char *)0x0) {
                    pcVar14 = (char *)0x180d48d24;
                    plVar6 = plVar21;
                  }
                  else {
                    plVar6 = (int64_t *)puVar20[2];
                  }
                  if (plVar6 == (int64_t *)(pcVar22 + -0x180a03a83)) {
                    pcVar10 = pcVar14 + (int64_t)plVar6;
                    if (pcVar10 <= pcVar14) {
LAB_1803bb784:
                      lVar11 = 0x180d48d24;
                      if (puVar20[1] != 0) {
                        lVar11 = puVar20[1];
                      }
                      CoreSystem_ConfigValidator0(&plocal_var_128,lVar11);
                      break;
                    }
                    lVar11 = (int64_t)&system_flag_3a84 - (int64_t)pcVar14;
                    while (*pcVar14 == pcVar14[lVar11]) {
                      pcVar14 = pcVar14 + 1;
                      if (pcVar10 <= pcVar14) goto LAB_1803bb784;
                    }
                  }
                }
                plocal_var_108 = &system_data_buffer_ptr;
                local_var_f0 = 0;
                plocal_var_100 = (int8_t *)0x0;
                local_var_f8 = 0;
                CoreEngineDataBufferProcessor(&plocal_var_108,iStack_118);
                if (iStack_118 != 0) {
// WARNING: Subroutine does not return
                  memcpy(plocal_var_100,plocal_var_120,iStack_118 + 1);
                }
                if (plocal_var_120 != (void *)0x0) {
                  local_var_f8 = 0;
                  if (plocal_var_100 != (int8_t *)0x0) {
                    *plocal_var_100 = 0;
                  }
                  local_var_f0 = local_var_f0 & 0xffffffff;
                }
                lVar16 = system_system_data_memory;
                lVar11 = *(int64_t *)
                          (*(int64_t *)(system_system_data_memory + 8) +
                          *(int64_t *)(system_system_data_memory + 0x10) * 8);
                plVar6 = (int64_t *)function_355030(system_system_data_memory,stack_array_a0,&plocal_var_108);
                if (*plVar6 == lVar11) {
                  uVar7 = CoreEngineDataTransformer(stack_array_80,&plocal_var_108);
                  uVar7 = function_354db0(&plocal_var_e8,uVar7);
                  SystemScheduler(&plocal_var_108,uVar7);
                  plocal_var_e8 = &system_data_buffer_ptr;
                  if (lStack_e0 != 0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  lStack_e0 = 0;
                  local_var_d0 = 0;
                  plocal_var_e8 = &system_state_ptr;
                  lVar16 = system_system_data_memory;
                }
                lVar11 = *(int64_t *)(*(int64_t *)(lVar16 + 8) + *(int64_t *)(lVar16 + 0x10) * 8)
                ;
                plVar6 = (int64_t *)function_355030(lVar16,stack_array_90,&plocal_var_108);
                plocal_var_108 = &system_data_buffer_ptr;
                if (plocal_var_100 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                plocal_var_100 = (int8_t *)0x0;
                local_var_f0 = local_var_f0 & 0xffffffff00000000;
                if (*plVar6 == lVar11) {
                  puVar15 = *(void **)(*(int64_t *)(param_1 + 0x28) + 0x290);
                  puVar18 = &system_buffer_ptr;
                  if (puVar15 != (void *)0x0) {
                    puVar18 = puVar15;
                  }
                  puVar15 = &system_buffer_ptr;
                  if (plocal_var_120 != (void *)0x0) {
                    puVar15 = plocal_var_120;
                  }
                  SystemDataInitializer(&ui_system_data_1544_ptr,puVar15,puVar18);
                  pcVar14 = "script";
                  do {
                    pcVar22 = pcVar14;
                    pcVar14 = pcVar22 + 1;
                  } while (*pcVar14 != '\0');
                  for (plVar6 = (int64_t *)plVar12[0xb]; plVar12 = plVar21,
                      plVar6 != (int64_t *)0x0; plVar6 = (int64_t *)plVar6[0xb]) {
                    pcVar14 = (char *)*plVar6;
                    if (pcVar14 == (char *)0x0) {
                      pcVar14 = (char *)0x180d48d24;
                    }
                    else {
                      plVar12 = (int64_t *)plVar6[2];
                    }
                    if (plVar12 == (int64_t *)(pcVar22 + -0x180a2355b)) {
                      pcVar10 = (char *)((int64_t)plVar12 + (int64_t)pcVar14);
                      plVar12 = plVar6;
                      if (pcVar10 <= pcVar14) break;
                      lVar11 = (int64_t)&ui_system_data_1436_ptr - (int64_t)pcVar14;
                      while (*pcVar14 == pcVar14[lVar11]) {
                        pcVar14 = pcVar14 + 1;
                        if (pcVar10 <= pcVar14) goto LAB_1803bbbee;
                      }
                    }
                  }
LAB_1803bbbee:
                  plocal_var_128 = &system_data_buffer_ptr;
                  if (plocal_var_120 != (void *)0x0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                }
                else {
                  lVar11 = *(int64_t *)(param_1 + 0x28);
                  if (*(int64_t *)(lVar11 + 0x268) == 0) {
                    uVar2 = *(int8_t *)(param_1 + 0x38);
                    uVar7 = CoreEngineDataTransformer(stack_array_60,&plocal_var_128);
                    pcVar9 = (char *)function_3543b0(*(uint64_t *)(param_1 + 0x28),uVar7,0,uVar2);
                  }
                  else {
                    lVar16 = *(int64_t *)(lVar11 + 0x208) - *(int64_t *)(lVar11 + 0x200) >> 3;
                    local_var_b0 = *(uint *)(lVar11 + 0x218);
                    plVar6 = plVar21;
                    if (lVar16 != 0) {
                      plVar6 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar16 * 8,local_var_b0 & 0xff)
                      ;
                    }
                    plStack_b8 = plVar6 + lVar16;
                    plVar4 = *(int64_t **)(lVar11 + 0x208);
                    plVar17 = plVar6;
                    plStack_c8 = plVar6;
                    plStack_c0 = plVar6;
                    for (plVar23 = *(int64_t **)(lVar11 + 0x200); plVar23 != plVar4;
                        plVar23 = plVar23 + 1) {
                      plVar5 = (int64_t *)*plVar23;
                      *plVar17 = (int64_t)plVar5;
                      if (plVar5 != (int64_t *)0x0) {
                        (**(code **)(*plVar5 + 0x28))();
                      }
                      plVar17 = plVar17 + 1;
                    }
                    uVar24 = (int64_t)plVar17 - (int64_t)plVar6 >> 3;
                    plVar23 = plVar21;
                    plStack_c0 = plVar17;
                    plVar4 = plVar6;
                    pcVar14 = pcVar9;
                    if (uVar24 != 0) {
                      do {
                        lVar11 = *(int64_t *)((char *)plVar6[(int64_t)plVar23] + 0x10);
                        iVar3 = *(int *)(lVar11 + 0x18);
                        iVar13 = iStack_118;
                        if (iVar3 == iStack_118) {
                          if (iVar3 != 0) {
                            pbVar8 = *(byte **)(lVar11 + 0x10);
                            lVar11 = (int64_t)plocal_var_120 - (int64_t)pbVar8;
                            do {
                              pbVar1 = pbVar8 + lVar11;
                              iVar13 = (uint)*pbVar8 - (uint)*pbVar1;
                              if (iVar13 != 0) break;
                              pbVar8 = pbVar8 + 1;
                            } while (*pbVar1 != 0);
                          }
LAB_1803bba1d:
                          pcVar14 = (char *)plVar6[(int64_t)plVar23];
                          if (iVar13 == 0) break;
                        }
                        else if (iVar3 == 0) goto LAB_1803bba1d;
                        uVar19 = (int)plVar21 + 1;
                        plVar21 = (int64_t *)(uint64_t)uVar19;
                        plVar23 = (int64_t *)((int64_t)plVar23 + 1);
                        pcVar14 = pcVar9;
                      } while ((uint64_t)(int64_t)(int)uVar19 < uVar24);
                    }
                    for (; pcVar9 = pcVar14, plVar4 != plVar17; plVar4 = plVar4 + 1) {
                      if ((int64_t *)*plVar4 != (int64_t *)0x0) {
                        (**(code **)(*(int64_t *)*plVar4 + 0x38))();
                      }
                      pcVar14 = pcVar9;
                    }
                    if (plVar6 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
                      CoreEngineMemoryPoolCleaner(plVar6);
                    }
                  }
                  if (pcVar9 != (char *)0x0) {
                    function_2f2be0();
                  }
                  pcVar14 = "script";
                  do {
                    pcVar22 = pcVar14;
                    pcVar14 = pcVar22 + 1;
                  } while (*pcVar14 != '\0');
                  for (plVar21 = (int64_t *)plVar12[0xb]; plVar12 = (int64_t *)0x0,
                      plVar21 != (int64_t *)0x0; plVar21 = (int64_t *)plVar21[0xb]) {
                    pcVar14 = (char *)*plVar21;
                    if (pcVar14 == (char *)0x0) {
                      pcVar10 = (char *)0x0;
                      pcVar14 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar10 = (char *)plVar21[2];
                    }
                    if (pcVar10 == pcVar22 + -0x180a2355b) {
                      pcVar10 = pcVar10 + (int64_t)pcVar14;
                      plVar12 = plVar21;
                      if (pcVar10 <= pcVar14) break;
                      lVar11 = (int64_t)&ui_system_data_1436_ptr - (int64_t)pcVar14;
                      while (*pcVar14 == pcVar14[lVar11]) {
                        pcVar14 = pcVar14 + 1;
                        if (pcVar10 <= pcVar14) goto LAB_1803bbb1e;
                      }
                    }
                  }
LAB_1803bbb1e:
                  plocal_var_128 = &system_data_buffer_ptr;
                  if (plocal_var_120 != (void *)0x0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                }
                if (plVar12 == (int64_t *)0x0) {
                  return;
                }
              } while( true );
            }
            lVar11 = (int64_t)&ui_system_data_1436_ptr - (int64_t)pcVar14;
            while (*pcVar14 == pcVar14[lVar11]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar10 <= pcVar14) goto LAB_1803bb6f0;
            }
          }
          plVar12 = (int64_t *)plVar12[0xb];
        } while( true );
      }
      lVar11 = (int64_t)&ui_system_data_1448_ptr - (int64_t)pcVar14;
      while (*pcVar14 == pcVar14[lVar11]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar22 <= pcVar14) goto LAB_1803bb665;
      }
    }
    puVar20 = (uint64_t *)puVar20[0xb];
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3bbc50(int64_t param_1,int64_t param_2)
void function_3bbc50(int64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint64_t uVar12;
  int8_t stack_array_108 [32];
  void *plocal_var_e8;
  int64_t lStack_e0;
  int iStack_d8;
  uint64_t local_var_d0;
  int64_t *plStack_c0;
  uint64_t local_var_b8;
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [72];
  uint64_t local_var_48;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  pcVar9 = (char *)0x0;
  uVar12 = 0;
  plocal_var_a8 = &memory_allocator_3480_ptr;
  plocal_var_a0 = stack_array_90;
  stack_array_90[0] = 0;
  local_var_98 = 0;
  strcpy_s(stack_array_90,0x40,&system_buffer_ptr);
  pcVar10 = "occlusion_body_name";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar2 = *(uint64_t **)(param_2 + 0x40); puVar2 != (uint64_t *)0x0;
      puVar2 = (uint64_t *)puVar2[6]) {
    pcVar10 = (char *)*puVar2;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar3 = pcVar9;
    }
    else {
      pcVar3 = (char *)puVar2[2];
    }
    if (pcVar3 == pcVar11 + -0x180a235af) {
      pcVar3 = pcVar10 + (int64_t)pcVar3;
      if (pcVar3 <= pcVar10) {
LAB_1803bbd36:
        lVar6 = 0x180d48d24;
        if (puVar2[1] != 0) {
          lVar6 = puVar2[1];
        }
        (**(code **)(plocal_var_a8 + 0x10))(&plocal_var_a8,lVar6);
        puVar2 = (uint64_t *)function_0b3430();
        uVar12 = *puVar2;
        if (plStack_c0 != (int64_t *)0x0) {
          (**(code **)(*plStack_c0 + 0x38))();
        }
        goto LAB_1803bbd91;
      }
      lVar6 = (int64_t)&ui_system_data_1520_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar3 <= pcVar10) goto LAB_1803bbd36;
      }
    }
  }
  lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x268);
  if (lVar6 != 0) {
    uVar12 = *(uint64_t *)(lVar6 + 0x10);
  }
LAB_1803bbd91:
  pcVar10 = "occlusion_body_flags";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  puVar2 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar2 == (uint64_t *)0x0) {
      lVar6 = *(int64_t *)(param_1 + 0x28);
      if (*(int64_t *)(lVar6 + 0x268) != 0) {
        pcVar9 = (char *)(uint64_t)*(uint *)(*(int64_t *)(lVar6 + 0x268) + 0x18);
      }
LAB_1803bbfb5:
      function_2ed050(lVar6,uVar12,pcVar9);
      plocal_var_a8 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_108);
    }
    pcVar10 = (char *)*puVar2;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar3 = pcVar9;
    }
    else {
      pcVar3 = (char *)puVar2[2];
    }
    if (pcVar3 == pcVar11 + -0x180a23597) {
      pcVar3 = pcVar3 + (int64_t)pcVar10;
      if (pcVar3 <= pcVar10) {
LAB_1803bbdf1:
        pcVar10 = "occlusion_body_flag";
        do {
          pcVar11 = pcVar10;
          pcVar10 = pcVar11 + 1;
        } while (*pcVar10 != '\0');
        for (pcVar10 = (char *)puVar2[6]; pcVar3 = pcVar9, pcVar10 != (char *)0x0;
            pcVar10 = *(char **)(pcVar10 + 0x58)) {
          pcVar5 = *(char **)pcVar10;
          if (pcVar5 == (char *)0x0) {
            pcVar5 = (char *)0x180d48d24;
            pcVar4 = pcVar9;
          }
          else {
            pcVar4 = *(char **)(pcVar10 + 0x10);
          }
          if (pcVar4 == pcVar11 + -0x180a2357f) {
            pcVar4 = pcVar4 + (int64_t)pcVar5;
            pcVar3 = pcVar10;
            if (pcVar4 <= pcVar5) break;
            lVar6 = (int64_t)&ui_system_data_1472_ptr - (int64_t)pcVar5;
            while (*pcVar5 == pcVar5[lVar6]) {
              pcVar5 = pcVar5 + 1;
              if (pcVar4 <= pcVar5) goto LAB_1803bbe61;
            }
          }
        }
LAB_1803bbe61:
        plocal_var_e8 = &system_data_buffer_ptr;
        local_var_d0 = 0;
        lStack_e0 = 0;
        iStack_d8 = 0;
        if (pcVar3 != (char *)0x0) {
          iVar8 = 0;
          lVar6 = 0;
          do {
            pcVar10 = "name";
            do {
              pcVar11 = pcVar10;
              pcVar10 = pcVar11 + 1;
            } while (*pcVar10 != '\0');
            for (puVar2 = *(uint64_t **)(pcVar3 + 0x40); puVar2 != (uint64_t *)0x0;
                puVar2 = (uint64_t *)puVar2[6]) {
              pcVar10 = (char *)*puVar2;
              if (pcVar10 == (char *)0x0) {
                pcVar5 = (char *)0x0;
                pcVar10 = (char *)0x180d48d24;
              }
              else {
                pcVar5 = (char *)puVar2[2];
              }
              if (pcVar5 == pcVar11 + -0x180a03a83) {
                pcVar5 = pcVar5 + (int64_t)pcVar10;
                if (pcVar5 <= pcVar10) {
LAB_1803bbef3:
                  lVar6 = 0x180d48d24;
                  if (puVar2[1] != 0) {
                    lVar6 = puVar2[1];
                  }
                  (**(code **)(plocal_var_e8 + 0x10))(&plocal_var_e8,lVar6);
                  lVar6 = lStack_e0;
                  iVar8 = iStack_d8;
                  break;
                }
                lVar7 = (int64_t)&system_flag_3a84 - (int64_t)pcVar10;
                while (*pcVar10 == pcVar10[lVar7]) {
                  pcVar10 = pcVar10 + 1;
                  if (pcVar5 <= pcVar10) goto LAB_1803bbef3;
                }
              }
            }
            if (iVar8 == 9) {
              iVar1 = strcmp(lVar6,&processed_var_8160_ptr);
              if (iVar1 == 0) {
                pcVar9 = (char *)(uint64_t)((uint)pcVar9 | 4);
              }
            }
            else if ((iVar8 == 8) && (iVar1 = strcmp(lVar6,&processed_var_4504_ptr), iVar1 == 0)) {
              pcVar9 = (char *)(uint64_t)((uint)pcVar9 | 1);
            }
            pcVar3 = *(char **)(pcVar3 + 0x58);
          } while (pcVar3 != (char *)0x0);
        }
        plocal_var_e8 = &system_data_buffer_ptr;
        if (lStack_e0 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_e0 = 0;
        local_var_d0 = local_var_d0 & 0xffffffff00000000;
        plocal_var_e8 = &system_state_ptr;
        lVar6 = *(int64_t *)(param_1 + 0x28);
        goto LAB_1803bbfb5;
      }
      lVar6 = (int64_t)&ui_system_data_1496_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar3 <= pcVar10) goto LAB_1803bbdf1;
      }
    }
    puVar2 = (uint64_t *)puVar2[0xb];
  } while( true );
}