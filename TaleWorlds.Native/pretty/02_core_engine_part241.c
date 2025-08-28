#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part241.c - 2 个函数

// 函数: void FUN_180209b00(uint64_t param_1,int64_t param_2,int param_3)
void FUN_180209b00(uint64_t param_1,int64_t param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  char *pcVar14;
  char *pcVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t *plVar18;
  bool bVar19;
  void *puStack_128;
  int64_t lStack_120;
  code *pcStack_118;
  code *pcStack_110;
  void *puStack_108;
  int64_t lStack_100;
  uint uStack_f8;
  uint64_t uStack_f0;
  void *puStack_e8;
  int64_t lStack_e0;
  int iStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  int64_t lStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  void *puStack_a8;
  int64_t lStack_a0;
  int32_t uStack_98;
  uint64_t uStack_90;
  int64_t *plStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  int64_t *plStack_60;
  int64_t *plStack_58;
  int64_t lStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar16 = 0;
  plStack_58 = core_system_data_memory;
  lStack_50 = (int64_t)param_3;
  plVar18 = core_system_data_memory;
  if (0 < param_3) {
    do {
      pcVar15 = (char *)0x0;
      lVar17 = lVar16 * 0x3088 + param_2;
      pcVar14 = "base";
      do {
        pcVar6 = pcVar14;
        pcVar14 = pcVar6 + 1;
      } while (*pcVar14 != '\0');
      puVar13 = *(uint64_t **)(lVar17 + 0x30);
      if (puVar13 != (uint64_t *)0x0) {
LAB_180209ba0:
        pcVar14 = (char *)*puVar13;
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)0x180d48d24;
          pcVar7 = pcVar15;
        }
        else {
          pcVar7 = (char *)puVar13[2];
        }
        if (pcVar7 != pcVar6 + -0x180a04ee3) goto LAB_180209c13;
        pcVar7 = pcVar14 + (int64_t)pcVar7;
        if (pcVar14 < pcVar7) {
          lVar11 = (int64_t)&system_data_4ee4 - (int64_t)pcVar14;
          while (*pcVar14 == pcVar14[lVar11]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar7 <= pcVar14) goto LAB_180209bd8;
          }
          goto LAB_180209c13;
        }
LAB_180209bd8:
        pcVar14 = "skinned_decals";
        do {
          pcVar6 = pcVar14;
          pcVar14 = pcVar6 + 1;
        } while (*pcVar14 != '\0');
        for (pcVar14 = (char *)puVar13[6]; pcVar7 = pcVar15, pcVar14 != (char *)0x0;
            pcVar14 = *(char **)(pcVar14 + 0x58)) {
          pcVar8 = *(char **)pcVar14;
          if (pcVar8 == (char *)0x0) {
            pcVar8 = (char *)0x180d48d24;
            pcVar9 = pcVar15;
          }
          else {
            pcVar9 = *(char **)(pcVar14 + 0x10);
          }
          if (pcVar9 == pcVar6 + -0x18098c5e7) {
            pcVar9 = pcVar9 + (int64_t)pcVar8;
            pcVar7 = pcVar14;
            if (pcVar9 <= pcVar8) break;
            lVar11 = (int64_t)&system_data_c5e8 - (int64_t)pcVar8;
            while (*pcVar8 == pcVar8[lVar11]) {
              pcVar8 = pcVar8 + 1;
              if (pcVar9 <= pcVar8) goto LAB_180209c65;
            }
          }
        }
LAB_180209c65:
        pcVar14 = "skinned_decal";
        do {
          pcVar6 = pcVar14;
          pcVar14 = pcVar6 + 1;
        } while (*pcVar14 != '\0');
        for (pcVar14 = *(char **)(pcVar7 + 0x30); pcVar7 = pcVar15, pcVar14 != (char *)0x0;
            pcVar14 = *(char **)(pcVar14 + 0x58)) {
          pcVar8 = *(char **)pcVar14;
          if (pcVar8 == (char *)0x0) {
            pcVar8 = (char *)0x180d48d24;
            pcVar9 = pcVar15;
          }
          else {
            pcVar9 = *(char **)(pcVar14 + 0x10);
          }
          if (pcVar9 == pcVar6 + -0x180a0ff37) {
            pcVar9 = pcVar8 + (int64_t)pcVar9;
            pcVar7 = pcVar14;
            if (pcVar9 <= pcVar8) break;
            lVar11 = (int64_t)&rendering_buffer_2040_ptr - (int64_t)pcVar8;
            while (*pcVar8 == pcVar8[lVar11]) {
              pcVar8 = pcVar8 + 1;
              if (pcVar9 <= pcVar8) goto LAB_180209cd5;
            }
          }
        }
LAB_180209cd5:
        pcVar14 = "textures";
        do {
          pcVar6 = pcVar14;
          pcVar14 = pcVar6 + 1;
        } while (*pcVar14 != '\0');
        for (puVar13 = *(uint64_t **)(pcVar7 + 0x30); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[0xb]) {
          pcVar14 = (char *)*puVar13;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            pcVar8 = pcVar15;
          }
          else {
            pcVar8 = (char *)puVar13[2];
          }
          if (pcVar8 == pcVar6 + -0x180a0f117) {
            pcVar8 = pcVar8 + (int64_t)pcVar14;
            if (pcVar8 <= pcVar14) {
LAB_180209d30:
              pcVar14 = "texture";
              do {
                pcVar6 = pcVar14;
                pcVar14 = pcVar6 + 1;
              } while (*pcVar14 != '\0');
              for (pcVar14 = (char *)puVar13[6]; pcVar8 = pcVar15, pcVar14 != (char *)0x0;
                  pcVar14 = *(char **)(pcVar14 + 0x58)) {
                pcVar9 = *(char **)pcVar14;
                if (pcVar9 == (char *)0x0) {
                  pcVar9 = (char *)0x180d48d24;
                  pcVar4 = pcVar15;
                }
                else {
                  pcVar4 = *(char **)(pcVar14 + 0x10);
                }
                if (pcVar4 == pcVar6 + -0x180a0e89f) {
                  pcVar4 = pcVar9 + (int64_t)pcVar4;
                  pcVar8 = pcVar14;
                  if (pcVar4 <= pcVar9) break;
                  lVar11 = (int64_t)&system_data_e8a0 - (int64_t)pcVar9;
                  while (*pcVar9 == pcVar9[lVar11]) {
                    pcVar9 = pcVar9 + 1;
                    if (pcVar4 <= pcVar9) goto joined_r0x000180209daf;
                  }
                }
              }
joined_r0x000180209daf:
              do {
                if (pcVar8 == (char *)0x0) goto LAB_18020a368;
                puStack_e8 = &system_data_buffer_ptr;
                uStack_d0 = 0;
                lStack_e0 = 0;
                iStack_d8 = 0;
                pcVar14 = "type";
                do {
                  pcVar15 = pcVar14;
                  pcVar14 = pcVar15 + 1;
                } while (*pcVar14 != '\0');
                for (puVar13 = *(uint64_t **)(pcVar8 + 0x40); puVar13 != (uint64_t *)0x0;
                    puVar13 = (uint64_t *)puVar13[6]) {
                  pcVar14 = (char *)*puVar13;
                  if (pcVar14 == (char *)0x0) {
                    pcVar14 = (char *)0x180d48d24;
                    pcVar6 = (char *)0x0;
                  }
                  else {
                    pcVar6 = (char *)puVar13[2];
                  }
                  if (pcVar6 == pcVar15 + -0x180a0ee2f) {
                    pcVar6 = pcVar6 + (int64_t)pcVar14;
                    if (pcVar6 <= pcVar14) {
LAB_180209e40:
                      lVar11 = 0x180d48d24;
                      if (puVar13[1] != 0) {
                        lVar11 = puVar13[1];
                      }
                      CoreSystem_ConfigValidator0(&puStack_e8,lVar11);
                      break;
                    }
                    lVar11 = (int64_t)&processed_var_7680_ptr - (int64_t)pcVar14;
                    while (*pcVar14 == pcVar14[lVar11]) {
                      pcVar14 = pcVar14 + 1;
                      if (pcVar6 <= pcVar14) goto LAB_180209e40;
                    }
                  }
                }
                iVar3 = iStack_d8;
                lVar11 = lStack_e0;
                if (iStack_d8 == 10) {
                  iVar2 = strcmp(lStack_e0,&rendering_buffer_2056_ptr);
                  bVar19 = iVar2 == 0;
                }
                else {
                  bVar19 = false;
                }
                if (bVar19) {
                  puStack_c8 = &system_data_buffer_ptr;
                  uStack_b0 = 0;
                  lStack_c0 = 0;
                  uStack_b8 = 0;
                  pcVar14 = "name";
                  do {
                    pcVar15 = pcVar14;
                    pcVar14 = pcVar15 + 1;
                  } while (*pcVar14 != '\0');
                  for (puVar13 = *(uint64_t **)(pcVar8 + 0x40); puVar13 != (uint64_t *)0x0;
                      puVar13 = (uint64_t *)puVar13[6]) {
                    pcVar14 = (char *)*puVar13;
                    if (pcVar14 == (char *)0x0) {
                      pcVar14 = (char *)0x180d48d24;
                      pcVar6 = (char *)0x0;
                    }
                    else {
                      pcVar6 = (char *)puVar13[2];
                    }
                    if (pcVar6 == pcVar15 + -0x180a03a83) {
                      pcVar6 = pcVar6 + (int64_t)pcVar14;
                      if (pcVar6 <= pcVar14) {
LAB_180209f34:
                        lVar11 = 0x180d48d24;
                        if (puVar13[1] != 0) {
                          lVar11 = puVar13[1];
                        }
                        CoreSystem_ConfigValidator0(&puStack_c8,lVar11);
                        break;
                      }
                      lVar11 = (int64_t)&system_data_3a84 - (int64_t)pcVar14;
                      while (*pcVar14 == pcVar14[lVar11]) {
                        pcVar14 = pcVar14 + 1;
                        if (pcVar6 <= pcVar14) goto LAB_180209f34;
                      }
                    }
                  }
                  plVar5 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStack_80,&puStack_c8,1);
                  lVar11 = *plVar5;
                  *plVar5 = 0;
                  plVar5 = (int64_t *)*plVar18;
                  *plVar18 = lVar11;
                  if (plVar5 != (int64_t *)0x0) {
                    (**(code **)(*plVar5 + 0x38))();
                  }
                  if (plStack_80 != (int64_t *)0x0) {
                    (**(code **)(*plStack_80 + 0x38))();
                  }
                  puStack_c8 = &system_data_buffer_ptr;
                  if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngine_MemoryPoolManager();
                  }
                  lStack_c0 = 0;
                  uStack_b0 = uStack_b0 & 0xffffffff00000000;
                  puStack_c8 = &system_state_ptr;
                }
                else {
                  if (iVar3 == 9) {
                    iVar2 = strcmp(lVar11,&system_data_ff18);
                    bVar19 = iVar2 == 0;
                  }
                  else {
                    bVar19 = false;
                  }
                  if (bVar19) {
                    puStack_a8 = &system_data_buffer_ptr;
                    uStack_90 = 0;
                    lStack_a0 = 0;
                    uStack_98 = 0;
                    pcVar14 = "name";
                    do {
                      pcVar15 = pcVar14;
                      pcVar14 = pcVar15 + 1;
                    } while (*pcVar14 != '\0');
                    for (puVar13 = *(uint64_t **)(pcVar8 + 0x40); puVar13 != (uint64_t *)0x0;
                        puVar13 = (uint64_t *)puVar13[6]) {
                      pcVar14 = (char *)*puVar13;
                      if (pcVar14 == (char *)0x0) {
                        pcVar14 = (char *)0x180d48d24;
                        pcVar6 = (char *)0x0;
                      }
                      else {
                        pcVar6 = (char *)puVar13[2];
                      }
                      if (pcVar6 == pcVar15 + -0x180a03a83) {
                        pcVar6 = pcVar14 + (int64_t)pcVar6;
                        if (pcVar6 <= pcVar14) {
LAB_18020a094:
                          lVar11 = 0x180d48d24;
                          if (puVar13[1] != 0) {
                            lVar11 = puVar13[1];
                          }
                          CoreSystem_ConfigValidator0(&puStack_a8,lVar11);
                          break;
                        }
                        lVar11 = (int64_t)&system_data_3a84 - (int64_t)pcVar14;
                        while (*pcVar14 == pcVar14[lVar11]) {
                          pcVar14 = pcVar14 + 1;
                          if (pcVar6 <= pcVar14) goto LAB_18020a094;
                        }
                      }
                    }
                    plVar5 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStack_70,&puStack_a8,1);
                    lVar11 = *plVar5;
                    *plVar5 = 0;
                    plStack_78 = (int64_t *)plVar18[1];
                    plVar18[1] = lVar11;
                    if (plStack_78 != (int64_t *)0x0) {
                      (**(code **)(*plStack_78 + 0x38))();
                    }
                    if (plStack_70 != (int64_t *)0x0) {
                      (**(code **)(*plStack_70 + 0x38))();
                    }
                    puStack_a8 = &system_data_buffer_ptr;
                    if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
                      CoreEngine_MemoryPoolManager();
                    }
                    lStack_a0 = 0;
                    uStack_90 = uStack_90 & 0xffffffff00000000;
                    puStack_a8 = &system_state_ptr;
                  }
                  else {
                    if (iVar3 == 0xb) {
                      iVar3 = strcmp(lVar11,&rendering_buffer_2024_ptr);
                      bVar19 = iVar3 == 0;
                    }
                    else {
                      bVar19 = false;
                    }
                    if (bVar19) {
                      puStack_128 = &system_data_buffer_ptr;
                      pcStack_110 = (code *)0x0;
                      lStack_120 = 0;
                      pcStack_118 = (code *)((uint64_t)pcStack_118 & 0xffffffff00000000);
                      pcVar14 = "name";
                      do {
                        pcVar15 = pcVar14;
                        pcVar14 = pcVar15 + 1;
                      } while (*pcVar14 != '\0');
                      for (puVar13 = *(uint64_t **)(pcVar8 + 0x40); puVar13 != (uint64_t *)0x0;
                          puVar13 = (uint64_t *)puVar13[6]) {
                        pcVar14 = (char *)*puVar13;
                        if (pcVar14 == (char *)0x0) {
                          pcVar14 = (char *)0x180d48d24;
                          pcVar6 = (char *)0x0;
                        }
                        else {
                          pcVar6 = (char *)puVar13[2];
                        }
                        if (pcVar6 == pcVar15 + -0x180a03a83) {
                          pcVar6 = pcVar6 + (int64_t)pcVar14;
                          if (pcVar6 <= pcVar14) {
LAB_18020a1f4:
                            lVar11 = 0x180d48d24;
                            if (puVar13[1] != 0) {
                              lVar11 = puVar13[1];
                            }
                            CoreSystem_ConfigValidator0(&puStack_128,lVar11);
                            break;
                          }
                          lVar11 = (int64_t)&system_data_3a84 - (int64_t)pcVar14;
                          while (*pcVar14 == pcVar14[lVar11]) {
                            pcVar14 = pcVar14 + 1;
                            if (pcVar6 <= pcVar14) goto LAB_18020a1f4;
                          }
                        }
                      }
                      plVar5 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStack_60,&puStack_128,1);
                      lVar11 = *plVar5;
                      *plVar5 = 0;
                      plStack_68 = (int64_t *)plVar18[2];
                      plVar18[2] = lVar11;
                      if (plStack_68 != (int64_t *)0x0) {
                        (**(code **)(*plStack_68 + 0x38))();
                      }
                      if (plStack_60 != (int64_t *)0x0) {
                        (**(code **)(*plStack_60 + 0x38))();
                      }
                      puStack_128 = &system_data_buffer_ptr;
                      if (lStack_120 != 0) {
                    // WARNING: Subroutine does not return
                        CoreEngine_MemoryPoolManager();
                      }
                      lStack_120 = 0;
                      pcStack_110 = (code *)((uint64_t)pcStack_110 & 0xffffffff00000000);
                      puStack_128 = &system_state_ptr;
                    }
                  }
                }
                pcVar14 = "texture";
                do {
                  pcVar15 = pcVar14;
                  pcVar14 = pcVar15 + 1;
                } while (*pcVar14 != '\0');
                for (pcVar14 = *(char **)(pcVar8 + 0x58); pcVar8 = (char *)0x0,
                    pcVar14 != (char *)0x0; pcVar14 = *(char **)(pcVar14 + 0x58)) {
                  pcVar6 = *(char **)pcVar14;
                  if (pcVar6 == (char *)0x0) {
                    pcVar6 = (char *)0x180d48d24;
                    pcVar9 = (char *)0x0;
                  }
                  else {
                    pcVar9 = *(char **)(pcVar14 + 0x10);
                  }
                  if (pcVar9 == pcVar15 + -0x180a0e89f) {
                    pcVar9 = pcVar9 + (int64_t)pcVar6;
                    pcVar8 = pcVar14;
                    if (pcVar9 <= pcVar6) break;
                    lVar11 = (int64_t)&system_data_e8a0 - (int64_t)pcVar6;
                    while (*pcVar6 == pcVar6[lVar11]) {
                      pcVar6 = pcVar6 + 1;
                      if (pcVar9 <= pcVar6) goto LAB_18020a31a;
                    }
                  }
                }
LAB_18020a31a:
                puStack_e8 = &system_data_buffer_ptr;
                if (lStack_e0 != 0) {
                    // WARNING: Subroutine does not return
                  CoreEngine_MemoryPoolManager();
                }
                lStack_e0 = 0;
                uStack_d0 = uStack_d0 & 0xffffffff00000000;
                puStack_e8 = &system_state_ptr;
              } while( true );
            }
            lVar11 = (int64_t)&processed_var_8424_ptr - (int64_t)pcVar14;
            while (*pcVar14 == pcVar14[lVar11]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar8 <= pcVar14) goto LAB_180209d30;
            }
          }
        }
LAB_18020a368:
        pcVar14 = (char *)0x0;
        pcVar15 = "materials";
        do {
          pcVar6 = pcVar15;
          pcVar15 = pcVar6 + 1;
        } while (*pcVar15 != '\0');
        for (puVar13 = *(uint64_t **)(pcVar7 + 0x30); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[0xb]) {
          pcVar15 = (char *)*puVar13;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)0x180d48d24;
            pcVar7 = pcVar14;
          }
          else {
            pcVar7 = (char *)puVar13[2];
          }
          if (pcVar7 == pcVar6 + -0x180a04ab7) {
            pcVar7 = pcVar7 + (int64_t)pcVar15;
            if (pcVar7 <= pcVar15) {
LAB_18020a3c0:
              pcVar15 = "material";
              do {
                pcVar6 = pcVar15;
                pcVar15 = pcVar6 + 1;
              } while (*pcVar15 != '\0');
              for (pcVar15 = (char *)puVar13[6]; pcVar7 = pcVar14, plVar5 = plVar18,
                  pcVar15 != (char *)0x0; pcVar15 = *(char **)(pcVar15 + 0x58)) {
                pcVar8 = *(char **)pcVar15;
                if (pcVar8 == (char *)0x0) {
                  pcVar8 = (char *)0x180d48d24;
                  pcVar9 = pcVar14;
                }
                else {
                  pcVar9 = *(char **)(pcVar15 + 0x10);
                }
                if (pcVar9 == pcVar6 + -0x180a04ebf) {
                  pcVar9 = pcVar8 + (int64_t)pcVar9;
                  pcVar7 = pcVar15;
                  if (pcVar9 <= pcVar8) break;
                  lVar11 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar8;
                  while (*pcVar8 == pcVar8[lVar11]) {
                    pcVar8 = pcVar8 + 1;
                    if (pcVar9 <= pcVar8) goto joined_r0x00018020a436;
                  }
                }
              }
joined_r0x00018020a436:
              do {
                if (pcVar7 == (char *)0x0) goto LAB_18020a626;
                plVar18 = plVar5 + 5;
                puStack_108 = &system_data_buffer_ptr;
                uStack_f0 = 0;
                lStack_100 = 0;
                uStack_f8 = 0;
                pcVar15 = "name";
                do {
                  pcVar6 = pcVar15;
                  pcVar15 = pcVar6 + 1;
                } while (*pcVar15 != '\0');
                for (puVar13 = *(uint64_t **)(pcVar7 + 0x40); puVar13 != (uint64_t *)0x0;
                    puVar13 = (uint64_t *)puVar13[6]) {
                  pcVar15 = (char *)*puVar13;
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = (char *)0x180d48d24;
                    pcVar8 = (char *)0x0;
                  }
                  else {
                    pcVar8 = (char *)puVar13[2];
                  }
                  if (pcVar8 == pcVar6 + -0x180a03a83) {
                    pcVar8 = pcVar8 + (int64_t)pcVar15;
                    if (pcVar8 <= pcVar15) {
LAB_18020a4d0:
                      lVar11 = 0x180d48d24;
                      if (puVar13[1] != 0) {
                        lVar11 = puVar13[1];
                      }
                      CoreSystem_ConfigValidator0(&puStack_108,lVar11);
                      break;
                    }
                    lVar11 = (int64_t)&system_data_3a84 - (int64_t)pcVar15;
                    while (*pcVar15 == pcVar15[lVar11]) {
                      pcVar15 = pcVar15 + 1;
                      if (pcVar8 <= pcVar15) goto LAB_18020a4d0;
                    }
                  }
                }
                uVar1 = uStack_f8;
                uVar12 = (uint64_t)uStack_f8;
                if (uStack_f8 == 4) {
                  lVar11 = 0;
                  do {
                    lVar10 = lVar11 + 1;
                    if (*(char *)(lStack_100 + lVar11) != (&system_data_b57c)[lVar11])
                    goto LAB_18020a528;
                    lVar11 = lVar10;
                  } while (lVar10 != 5);
                }
                else {
LAB_18020a528:
                  *(int *)(plVar5 + 3) = (int)pcVar14;
                  if (lStack_100 != 0) {
                    CoreMemoryPoolProcessor(plVar5 + 4,uStack_f8);
                  }
                  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(*plVar18,lStack_100,uVar12);
                  }
                  *(int32_t *)(plVar5 + 6) = 0;
                  if (*plVar18 != 0) {
                    *(int8_t *)(uVar12 + *plVar18) = 0;
                  }
                  *(int32_t *)((int64_t)plVar5 + 0x3c) = uStack_f0._4_4_;
                }
                pcVar14 = (char *)(uint64_t)((int)pcVar14 + 1);
                pcVar15 = "material";
                do {
                  pcVar6 = pcVar15;
                  pcVar15 = pcVar6 + 1;
                } while (*pcVar15 != '\0');
                for (pcVar7 = *(char **)(pcVar7 + 0x58); pcVar7 != (char *)0x0;
                    pcVar7 = *(char **)(pcVar7 + 0x58)) {
                  pcVar8 = *(char **)pcVar7;
                  pcVar15 = (char *)0x0;
                  if (pcVar8 == (char *)0x0) {
                    pcVar8 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar15 = *(char **)(pcVar7 + 0x10);
                  }
                  if (pcVar15 == pcVar6 + -0x180a04ebf) {
                    pcVar15 = pcVar8 + (int64_t)pcVar15;
                    if (pcVar15 <= pcVar8) goto LAB_18020a5e9;
                    lVar11 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar8;
                    while (*pcVar8 == pcVar8[lVar11]) {
                      pcVar8 = pcVar8 + 1;
                      if (pcVar15 <= pcVar8) goto LAB_18020a5e9;
                    }
                  }
                }
                pcVar7 = (char *)0x0;
LAB_18020a5e9:
                puStack_108 = &system_data_buffer_ptr;
                if (lStack_100 != 0) {
                    // WARNING: Subroutine does not return
                  CoreEngine_MemoryPoolManager();
                }
                lStack_100 = 0;
                uStack_f0 = uStack_f0 & 0xffffffff00000000;
                puStack_108 = &system_state_ptr;
                plVar5 = plVar18;
                plVar18 = plStack_58;
              } while( true );
            }
            lVar11 = (int64_t)&processed_var_5832_ptr - (int64_t)pcVar15;
            while (*pcVar15 == pcVar15[lVar11]) {
              pcVar15 = pcVar15 + 1;
              if (pcVar7 <= pcVar15) goto LAB_18020a3c0;
            }
          }
        }
LAB_18020a626:
        for (lVar11 = *(int64_t *)(lVar17 + 0x30); lVar11 != 0;
            lVar11 = *(int64_t *)(lVar11 + 0x58)) {
          *(uint64_t *)(lVar11 + 0x20) = 0;
        }
        *(uint64_t *)(lVar17 + 0x30) = 0;
        for (lVar11 = *(int64_t *)(lVar17 + 0x40); lVar11 != 0;
            lVar11 = *(int64_t *)(lVar11 + 0x30)) {
          *(uint64_t *)(lVar11 + 0x20) = 0;
        }
        *(uint64_t *)(lVar17 + 0x40) = 0;
        FUN_180057010(lVar17 + 0x60);
      }
LAB_18020a68a:
      lVar16 = lVar16 + 1;
    } while (lVar16 < lStack_50);
  }
  if (*plVar18 != 0) {
    puStack_128 = (void *)0x0;
    lStack_120 = 0;
    pcStack_118 = (code *)0x0;
    pcStack_110 = _guard_check_icall;
    FUN_18023c450(*plVar18,1,0xffffffff,&puStack_128);
    if (pcStack_118 != (code *)0x0) {
      (*pcStack_118)(&puStack_128,0,0);
    }
  }
  if (plVar18[1] != 0) {
    puStack_128 = (void *)0x0;
    lStack_120 = 0;
    pcStack_118 = (code *)0x0;
    pcStack_110 = _guard_check_icall;
    FUN_18023c450(plVar18[1],1,0xffffffff,&puStack_128);
    if (pcStack_118 != (code *)0x0) {
      (*pcStack_118)(&puStack_128,0,0);
    }
  }
  if (plVar18[2] != 0) {
    puStack_128 = (void *)0x0;
    lStack_120 = 0;
    pcStack_118 = (code *)0x0;
    pcStack_110 = _guard_check_icall;
    FUN_18023c450(plVar18[2],1,0xffffffff,&puStack_128);
    if (pcStack_118 != (code *)0x0) {
      (*pcStack_118)(&puStack_128,0,0);
    }
  }
  return;
LAB_180209c13:
  puVar13 = (uint64_t *)puVar13[0xb];
  if (puVar13 == (uint64_t *)0x0) goto LAB_18020a68a;
  goto LAB_180209ba0;
}





// 函数: void FUN_18020a7b0(int64_t param_1,int64_t param_2,float *param_3)
void FUN_18020a7b0(int64_t param_1,int64_t param_2,float *param_3)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        uVar9 = *(int *)(param_1 + 0x10) + iVar10;
        uVar8 = uVar9 >> 0xc;
        lVar3 = *(int64_t *)(param_2 + 0x1220 + (uint64_t)uVar8 * 8);
        lVar7 = (uint64_t)(uVar9 + uVar8 * -0x1000) * 0x20;
        fVar13 = *(float *)(lVar3 + 4 + lVar7) - param_3[1];
        fVar12 = *(float *)(lVar3 + lVar7) - *param_3;
        fVar11 = *(float *)(lVar3 + 8 + lVar7) - param_3[2];
        if (fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11 < 0.040000003) {
          return;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 8));
    }
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar10 < *(int *)(param_1 + 0xc)) {
      uVar4 = *(uint64_t *)(param_3 + 2);
      uVar9 = *(int *)(param_1 + 0x10) + iVar10;
      uVar5 = *(uint64_t *)(param_3 + 4);
      uVar6 = *(uint64_t *)(param_3 + 6);
      uVar8 = uVar9 >> 0xc;
      lVar3 = *(int64_t *)(param_2 + 0x1220 + (uint64_t)uVar8 * 8);
      lVar7 = (uint64_t)(uVar9 + uVar8 * -0x1000) * 0x20;
      puVar2 = (uint64_t *)(lVar3 + lVar7);
      *puVar2 = *(uint64_t *)param_3;
      puVar2[1] = uVar4;
      puVar2 = (uint64_t *)(lVar3 + 0x10 + lVar7);
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
    }
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



