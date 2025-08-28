#include "TaleWorlds.Native.Split.h"
// 99_part_06_part025.c - 1 个函数
// 函数: void function_3bcdd0(int64_t param_1,int64_t param_2)
void function_3bcdd0(int64_t param_1,int64_t param_2)
{
  char cVar1;
  int64_t *plVar2;
  void *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int64_t lVar8;
  void *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  char *pcVar12;
  uint64_t uVar13;
  uint uVar14;
  void *puVar15;
  char *pcVar16;
  char *pcVar17;
  int32_t uVar18;
  char *pcVar19;
  uint uVar20;
  uint64_t uVar21;
  int aiStackX_8 [2];
  uint64_t uVar22;
  void *plocal_var_70;
  char *pcStack_68;
  uint local_var_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  void *plocal_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uVar22 = 0xfffffffffffffffe;
  pcVar19 = (char *)0x0;
  uVar18 = 0;
  pcVar16 = "flags";
  do {
    pcVar17 = pcVar16;
    pcVar16 = pcVar17 + 1;
  } while (*pcVar16 != '\0');
  puVar10 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar10 == (uint64_t *)0x0) goto LAB_1803bd465;
    pcVar16 = (char *)*puVar10;
    if (pcVar16 == (char *)0x0) {
      pcVar16 = (char *)0x180d48d24;
      pcVar6 = pcVar19;
    }
    else {
      pcVar6 = (char *)puVar10[2];
    }
    if (pcVar6 == pcVar17 + -0x180a06b77) {
      pcVar6 = pcVar6 + (int64_t)pcVar16;
      if (pcVar6 <= pcVar16) {
LAB_1803bce70:
        pcVar16 = "flag";
        do {
          pcVar17 = pcVar16;
          pcVar16 = pcVar17 + 1;
        } while (*pcVar16 != '\0');
        for (pcVar16 = (char *)puVar10[6]; pcVar16 != (char *)0x0;
            pcVar16 = *(char **)(pcVar16 + 0x58)) {
          pcVar6 = *(char **)pcVar16;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = (char *)0x180d48d24;
            pcVar7 = pcVar19;
          }
          else {
            pcVar7 = *(char **)(pcVar16 + 0x10);
          }
          if (pcVar7 == pcVar17 + -0x180a06ba3) {
            pcVar7 = pcVar7 + (int64_t)pcVar6;
            pcVar12 = pcVar19;
            if (pcVar7 <= pcVar6) {
LAB_1803bcf00:
              do {
                plocal_var_50 = &system_data_buffer_ptr;
                local_var_38 = 0;
                plocal_var_48 = (void *)0x0;
                local_var_40 = local_var_40 & 0xffffffff00000000;
                plocal_var_70 = &system_data_buffer_ptr;
                local_var_58 = 0;
                pcStack_68 = (char *)0x0;
                local_var_60 = 0;
                pcVar17 = "name";
                do {
                  pcVar6 = pcVar17;
                  pcVar17 = pcVar6 + 1;
                } while (*pcVar17 != '\0');
                for (puVar10 = *(uint64_t **)(pcVar16 + 0x40); puVar10 != (uint64_t *)0x0;
                    puVar10 = (uint64_t *)puVar10[6]) {
                  pcVar17 = (char *)*puVar10;
                  if (pcVar17 == (char *)0x0) {
                    pcVar17 = (char *)0x180d48d24;
                    pcVar7 = pcVar19;
                  }
                  else {
                    pcVar7 = (char *)puVar10[2];
                  }
                  if (pcVar7 == pcVar6 + -0x180a03a83) {
                    pcVar7 = pcVar17 + (int64_t)pcVar7;
                    if (pcVar7 <= pcVar17) {
LAB_1803bcf95:
                      lVar8 = 0x180d48d24;
                      if (puVar10[1] != 0) {
                        lVar8 = puVar10[1];
                      }
                      CoreSystem_ConfigValidator0(&plocal_var_50,lVar8,pcVar7,puVar10,uVar22);
                      break;
                    }
                    lVar8 = (int64_t)&system_flag_3a84 - (int64_t)pcVar17;
                    while (*pcVar17 == pcVar17[lVar8]) {
                      pcVar17 = pcVar17 + 1;
                      if (pcVar7 <= pcVar17) goto LAB_1803bcf95;
                    }
                  }
                }
                pcVar17 = "value";
                do {
                  pcVar6 = pcVar17;
                  pcVar17 = pcVar6 + 1;
                } while (*pcVar17 != '\0');
                for (puVar10 = *(uint64_t **)(pcVar16 + 0x40); puVar10 != (uint64_t *)0x0;
                    puVar10 = (uint64_t *)puVar10[6]) {
                  pcVar17 = (char *)*puVar10;
                  if (pcVar17 == (char *)0x0) {
                    pcVar17 = (char *)0x180d48d24;
                    pcVar7 = pcVar19;
                  }
                  else {
                    pcVar7 = (char *)puVar10[2];
                  }
                  if (pcVar7 == pcVar6 + -0x180a0696b) {
                    pcVar7 = pcVar7 + (int64_t)pcVar17;
                    if (pcVar7 <= pcVar17) {
LAB_1803bd024:
                      lVar8 = 0x180d48d24;
                      if (puVar10[1] != 0) {
                        lVar8 = puVar10[1];
                      }
                      (**(code **)(plocal_var_70 + 0x10))(&plocal_var_70,lVar8);
                      break;
                    }
                    lVar8 = (int64_t)&memory_allocator_3692_ptr - (int64_t)pcVar17;
                    while (*pcVar17 == pcVar17[lVar8]) {
                      pcVar17 = pcVar17 + 1;
                      if (pcVar7 <= pcVar17) goto LAB_1803bd024;
                    }
                  }
                }
                puVar3 = plocal_var_48;
                pcVar17 = pcVar19;
                pcVar6 = pcVar19;
                if (local_var_60 != 0) {
                  do {
                    if ((byte)(pcVar17[(int64_t)pcStack_68] + 0xbfU) < 0x1a) {
                      pcVar17[(int64_t)pcStack_68] = pcVar17[(int64_t)pcStack_68] + ' ';
                    }
                    uVar14 = (int)pcVar6 + 1;
                    pcVar6 = (char *)(uint64_t)uVar14;
                    pcVar17 = pcVar17 + 1;
                  } while (uVar14 < local_var_60);
                }
                uVar14 = (uint)pcVar12;
                pcVar17 = pcVar19;
                if ((int)local_var_40 == 3) {
                  do {
                    pcVar6 = pcVar17 + 1;
                    if (pcVar17[(int64_t)plocal_var_48] != pcVar17[0x180a23600]) goto LAB_1803bd11d;
                    pcVar17 = pcVar6;
                  } while (pcVar6 != (char *)0x4);
                  pcVar17 = "";
                  if (pcStack_68 != (char *)0x0) {
                    pcVar17 = pcStack_68;
                  }
                  AdvancedSystemOptimizer(pcVar17,&processed_var_4576_ptr,aiStackX_8);
                  pcVar12 = (char *)(uint64_t)((uVar14 | 0xf0) ^ 0xf0 | aiStackX_8[0] << 4);
                }
                else if ((int)local_var_40 == 6) {
                  do {
                    pcVar6 = pcVar17 + 1;
                    if (pcVar17[(int64_t)plocal_var_48] != pcVar17[0x180a235f8]) goto LAB_1803bd11d;
                    pcVar17 = pcVar6;
                  } while (pcVar6 != (char *)0x7);
                  pcVar12 = (char *)(uint64_t)(uVar14 | 0x400);
                }
                else {
LAB_1803bd11d:
                  pcVar17 = pcVar19;
                  if (local_var_60 == 4) {
                    do {
                      pcVar6 = pcVar17 + 1;
                      if (pcStack_68[(int64_t)pcVar17] != pcVar17[0x180a06418]) goto LAB_1803bd373;
                      pcVar17 = pcVar6;
                    } while (pcVar6 != (char *)0x5);
                  }
                  else if ((local_var_60 != 1) ||
                          (((*pcStack_68 != '1' || (pcStack_68[1] != '\0')) &&
                           ((*pcStack_68 != 't' || (pcStack_68[1] != '\0')))))) goto LAB_1803bd373;
                  if ((int)local_var_40 == 0xf) {
                    iVar4 = strcmp(plocal_var_48);
                    if (iVar4 != 0) goto LAB_1803bd340;
                    pcVar12 = (char *)(uint64_t)(uVar14 | 0x2000);
                  }
                  else if ((int)local_var_40 == 0x16) {
                    iVar4 = strcmp(plocal_var_48);
                    if (iVar4 == 0) {
                      pcVar12 = (char *)(uint64_t)(uVar14 | 0x400000);
                    }
                    else {
LAB_1803bd293:
                      iVar4 = strcmp(puVar3);
                      if (iVar4 == 0) {
                        pcVar12 = (char *)(uint64_t)(uVar14 | 0x4000);
                      }
                      else {
LAB_1803bd2d5:
                        iVar4 = strcmp(puVar3);
                        if (iVar4 == 0) {
                          pcVar12 = (char *)(uint64_t)(uVar14 | 0x100000);
                        }
                        else {
                          iVar4 = strcmp(puVar3);
                          if (iVar4 != 0) goto LAB_1803bd340;
                          pcVar12 = (char *)(uint64_t)(uVar14 | 0x40000);
                        }
                      }
                    }
                  }
                  else if ((int)local_var_40 == 0x14) {
                    iVar4 = strcmp(plocal_var_48);
                    if (iVar4 != 0) goto LAB_1803bd340;
                    pcVar12 = (char *)(uint64_t)(uVar14 | 0x100);
                  }
                  else if ((int)local_var_40 == 0x19) {
                    iVar4 = strcmp(plocal_var_48);
                    if (iVar4 == 0) {
                      pcVar12 = (char *)(uint64_t)(uVar14 | 0x800);
                    }
                    else {
LAB_1803bd26e:
                      iVar4 = strcmp(puVar3);
                      if (iVar4 != 0) goto LAB_1803bd340;
                      pcVar12 = (char *)(uint64_t)(uVar14 | 0x80000000);
                    }
                  }
                  else if ((int)local_var_40 == 0x20) {
                    iVar4 = strcmp(plocal_var_48);
                    if (iVar4 != 0) goto LAB_1803bd340;
                    pcVar12 = (char *)(uint64_t)(uVar14 | 0x1000);
                  }
                  else if ((int)local_var_40 == 0x10) {
                    iVar4 = strcmp(plocal_var_48);
                    if (iVar4 != 0) goto LAB_1803bd340;
                    pcVar12 = (char *)(uint64_t)(uVar14 | 0x10000);
                  }
                  else {
                    if ((int)local_var_40 == 0x19) goto LAB_1803bd26e;
                    if ((int)local_var_40 == 0x16) goto LAB_1803bd293;
                    if ((int)local_var_40 == 0x17) {
                      iVar4 = strcmp(plocal_var_48);
                      if (iVar4 != 0) goto LAB_1803bd340;
                      pcVar12 = (char *)(uint64_t)(uVar14 | 0x4000000);
                      goto LAB_1803bd373;
                    }
                    if ((int)local_var_40 == 0x16) goto LAB_1803bd2d5;
                    if ((int)local_var_40 == 0x1e) {
                      iVar4 = strcmp(plocal_var_48);
                      if (iVar4 == 0) {
                        pcVar12 = (char *)(uint64_t)(uVar14 | 0x80000);
                      }
                      else {
LAB_1803bd340:
                        puVar9 = *(void **)(*(int64_t *)(param_1 + 0x28) + 0x290);
                        puVar15 = &system_buffer_ptr;
                        if (puVar9 != (void *)0x0) {
                          puVar15 = puVar9;
                        }
                        puVar9 = &system_buffer_ptr;
                        if (puVar3 != (void *)0x0) {
                          puVar9 = puVar3;
                        }
                        SystemDataInitializer(&rendering_buffer_2384_ptr,puVar9,puVar15);
                      }
                    }
                    else if (((int)local_var_40 != 0xc) || (iVar4 = strcmp(plocal_var_48), iVar4 != 0))
                    goto LAB_1803bd340;
                  }
                }
LAB_1803bd373:
                uVar18 = SUB84(pcVar12,0);
                pcVar17 = "flag";
                do {
                  pcVar6 = pcVar17;
                  pcVar17 = pcVar6 + 1;
                } while (*pcVar17 != '\0');
                for (pcVar17 = *(char **)(pcVar16 + 0x58); pcVar16 = pcVar19, pcVar17 != (char *)0x0
                    ; pcVar17 = *(char **)(pcVar17 + 0x58)) {
                  pcVar7 = *(char **)pcVar17;
                  if (pcVar7 == (char *)0x0) {
                    pcVar7 = (char *)0x180d48d24;
                    pcVar5 = pcVar19;
                  }
                  else {
                    pcVar5 = *(char **)(pcVar17 + 0x10);
                  }
                  if (pcVar5 == pcVar6 + -0x180a06ba3) {
                    pcVar5 = pcVar7 + (int64_t)pcVar5;
                    pcVar16 = pcVar17;
                    if (pcVar5 <= pcVar7) break;
                    lVar8 = (int64_t)&processed_var_4260_ptr - (int64_t)pcVar7;
                    while (*pcVar7 == pcVar7[lVar8]) {
                      pcVar7 = pcVar7 + 1;
                      if (pcVar5 <= pcVar7) goto LAB_1803bd3de;
                    }
                  }
                }
LAB_1803bd3de:
                plocal_var_70 = &system_data_buffer_ptr;
                if (pcStack_68 != (char *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                pcStack_68 = (char *)0x0;
                local_var_58 = local_var_58 & 0xffffffff00000000;
                plocal_var_70 = &system_state_ptr;
                plocal_var_50 = &system_data_buffer_ptr;
                if (plocal_var_48 != (void *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                plocal_var_48 = (void *)0x0;
                local_var_38 = local_var_38 & 0xffffffff00000000;
                plocal_var_50 = &system_state_ptr;
              } while (pcVar16 != (char *)0x0);
              break;
            }
            lVar8 = (int64_t)&processed_var_4260_ptr - (int64_t)pcVar6;
            while (*pcVar6 == pcVar6[lVar8]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar7 <= pcVar6) goto LAB_1803bcf00;
            }
          }
        }
        *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x2ac) = uVar18;
LAB_1803bd465:
        uVar18 = 0;
        pcVar16 = "visibility_masks";
        do {
          pcVar17 = pcVar16;
          pcVar16 = pcVar17 + 1;
        } while (*pcVar16 != '\0');
        puVar10 = *(uint64_t **)(param_2 + 0x30);
        do {
          if (puVar10 == (uint64_t *)0x0) goto label_2ee810;
          pcVar16 = (char *)*puVar10;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = (char *)0x180d48d24;
            pcVar6 = pcVar19;
          }
          else {
            pcVar6 = (char *)puVar10[2];
          }
          if (pcVar6 == pcVar17 + -0x180a238f7) {
            pcVar6 = pcVar6 + (int64_t)pcVar16;
            if (pcVar6 <= pcVar16) {
LAB_1803bd4c2:
              pcVar16 = "visibility_mask";
              do {
                pcVar17 = pcVar16;
                pcVar16 = pcVar17 + 1;
              } while (*pcVar16 != '\0');
              pcVar16 = (char *)puVar10[6];
              do {
                if (pcVar16 == (char *)0x0) {
LAB_1803bd8a3:
                  *(int32_t *)(*(int64_t *)(param_1 + 0x28) + 0x2c4) = uVar18;
label_2ee810:
                  lVar8 = *(int64_t *)(param_1 + 0x28);
                  uVar14 = *(uint *)(lVar8 + 0x2ac);
                  uVar11 = 0;
                  if ((uVar14 >> 0x16 & 1) != 0) {
                    iVar4 = (int)(*(int64_t *)(lVar8 + 0xf8) - *(int64_t *)(lVar8 + 0xf0) >> 3);
                    uVar13 = uVar11;
                    if (0 < iVar4) {
                      do {
                        plVar2 = *(int64_t **)(*(int64_t *)(lVar8 + 0xf0) + uVar13 * 8);
                        local_var_40 = 0x1802ee888;
                        (**(code **)(*plVar2 + 0xe0))(plVar2,~(byte)(uVar14 >> 0x16) & 1);
                        uVar13 = uVar13 + 1;
                      } while ((int64_t)uVar13 < (int64_t)iVar4);
                      uVar14 = *(uint *)(lVar8 + 0x2ac);
                    }
                  }
                  if ((uVar14 & 0x80010000) != 0) {
                    local_var_40 = 0x1802ee8aa;
                    function_2f09d0(lVar8);
                    uVar14 = *(uint *)(lVar8 + 0x2ac);
                  }
                  if (((uVar14 >> 0x14 & 1) != 0) &&
                     (uVar13 = uVar11, uVar21 = uVar11,
                     *(int64_t *)(lVar8 + 0xf8) - *(int64_t *)(lVar8 + 0xf0) >> 3 != 0)) {
                    do {
                      plVar2 = *(int64_t **)(uVar13 + *(int64_t *)(lVar8 + 0xf0));
                      local_var_40 = 0x1802ee8f9;
                      (**(code **)(*plVar2 + 0xf0))(plVar2,(byte)(uVar14 >> 0x14) & 1);
                      uVar20 = (int)uVar21 + 1;
                      uVar13 = uVar13 + 8;
                      uVar21 = (uint64_t)uVar20;
                    } while ((uint64_t)(int64_t)(int)uVar20 <
                             (uint64_t)
                             (*(int64_t *)(lVar8 + 0xf8) - *(int64_t *)(lVar8 + 0xf0) >> 3));
                    uVar14 = *(uint *)(lVar8 + 0x2ac);
                  }
                  if ((uVar14 >> 0x13 & 1) != 0) {
                    iVar4 = (int)(*(int64_t *)(lVar8 + 0xf8) - *(int64_t *)(lVar8 + 0xf0) >> 3);
                    if (0 < iVar4) {
                      do {
                        plVar2 = *(int64_t **)(*(int64_t *)(lVar8 + 0xf0) + uVar11 * 8);
                        local_var_40 = 0x1802ee978;
                        (**(code **)(*plVar2 + 0xe8))(plVar2,(byte)(uVar14 >> 0x13) & 1);
                        uVar11 = uVar11 + 1;
                      } while ((int64_t)uVar11 < (int64_t)iVar4);
                    }
                  }
                  return;
                }
                pcVar6 = *(char **)pcVar16;
                if (pcVar6 == (char *)0x0) {
                  pcVar6 = (char *)0x180d48d24;
                  pcVar7 = pcVar19;
                }
                else {
                  pcVar7 = *(char **)(pcVar16 + 0x10);
                }
                if (pcVar7 == pcVar17 + -0x180a2398f) {
                  pcVar7 = pcVar6 + (int64_t)pcVar7;
                  pcVar12 = pcVar19;
                  if (pcVar7 <= pcVar6) {
LAB_1803bd540:
                    do {
                      plocal_var_50 = &system_data_buffer_ptr;
                      local_var_38 = 0;
                      plocal_var_48 = (void *)0x0;
                      local_var_40 = local_var_40 & 0xffffffff00000000;
                      plocal_var_70 = &system_data_buffer_ptr;
                      local_var_58 = 0;
                      pcStack_68 = (char *)0x0;
                      local_var_60 = 0;
                      pcVar17 = "name";
                      do {
                        pcVar6 = pcVar17;
                        pcVar17 = pcVar6 + 1;
                      } while (*pcVar17 != '\0');
                      for (puVar10 = *(uint64_t **)(pcVar16 + 0x40); puVar10 != (uint64_t *)0x0;
                          puVar10 = (uint64_t *)puVar10[6]) {
                        pcVar17 = (char *)*puVar10;
                        if (pcVar17 == (char *)0x0) {
                          pcVar17 = (char *)0x180d48d24;
                          pcVar7 = pcVar19;
                        }
                        else {
                          pcVar7 = (char *)puVar10[2];
                        }
                        if (pcVar7 == pcVar6 + -0x180a03a83) {
                          pcVar7 = pcVar17 + (int64_t)pcVar7;
                          if (pcVar7 <= pcVar17) {
LAB_1803bd5e3:
                            lVar8 = 0x180d48d24;
                            if (puVar10[1] != 0) {
                              lVar8 = puVar10[1];
                            }
                            CoreSystem_ConfigValidator0(&plocal_var_50,lVar8);
                            break;
                          }
                          lVar8 = (int64_t)&system_flag_3a84 - (int64_t)pcVar17;
                          while (*pcVar17 == pcVar17[lVar8]) {
                            pcVar17 = pcVar17 + 1;
                            if (pcVar7 <= pcVar17) goto LAB_1803bd5e3;
                          }
                        }
                      }
                      pcVar17 = "value";
                      do {
                        pcVar6 = pcVar17;
                        pcVar17 = pcVar6 + 1;
                      } while (*pcVar17 != '\0');
                      for (puVar10 = *(uint64_t **)(pcVar16 + 0x40); puVar10 != (uint64_t *)0x0;
                          puVar10 = (uint64_t *)puVar10[6]) {
                        pcVar17 = (char *)*puVar10;
                        if (pcVar17 == (char *)0x0) {
                          pcVar17 = (char *)0x180d48d24;
                          pcVar7 = pcVar19;
                        }
                        else {
                          pcVar7 = (char *)puVar10[2];
                        }
                        if (pcVar7 == pcVar6 + -0x180a0696b) {
                          pcVar7 = pcVar7 + (int64_t)pcVar17;
                          if (pcVar7 <= pcVar17) {
LAB_1803bd665:
                            lVar8 = 0x180d48d24;
                            if (puVar10[1] != 0) {
                              lVar8 = puVar10[1];
                            }
                            (**(code **)(plocal_var_70 + 0x10))(&plocal_var_70,lVar8);
                            break;
                          }
                          lVar8 = (int64_t)&memory_allocator_3692_ptr - (int64_t)pcVar17;
                          while (*pcVar17 == pcVar17[lVar8]) {
                            pcVar17 = pcVar17 + 1;
                            if (pcVar7 <= pcVar17) goto LAB_1803bd665;
                          }
                        }
                      }
                      puVar3 = plocal_var_48;
                      pcVar17 = pcVar19;
                      pcVar6 = pcVar19;
                      if (local_var_60 != 0) {
                        do {
                          cVar1 = pcVar17[(int64_t)pcStack_68];
                          if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                            pcVar17[(int64_t)pcStack_68] = cVar1 + ' ';
                          }
                          uVar14 = (int)pcVar6 + 1;
                          pcVar6 = (char *)(uint64_t)uVar14;
                          pcVar17 = pcVar17 + 1;
                        } while (uVar14 < local_var_60);
                      }
                      pcVar17 = pcVar19;
                      if (local_var_60 == 4) {
                        do {
                          pcVar6 = pcVar17 + 1;
                          if (pcStack_68[(int64_t)pcVar17] != pcVar17[0x180a06418])
                          goto LAB_1803bd792;
                          pcVar17 = pcVar6;
                        } while (pcVar6 != (char *)0x5);
LAB_1803bd718:
                        uVar14 = (uint)pcVar12;
                        if ((int)local_var_40 == 9) {
                          iVar4 = strcmp(plocal_var_48);
                          if (iVar4 == 0) {
                            pcVar12 = (char *)(uint64_t)(uVar14 | 4);
                          }
                          else {
LAB_1803bd758:
                            puVar9 = *(void **)(*(int64_t *)(param_1 + 0x28) + 0x290);
                            puVar15 = &system_buffer_ptr;
                            if (puVar9 != (void *)0x0) {
                              puVar15 = puVar9;
                            }
                            puVar9 = &system_buffer_ptr;
                            if (puVar3 != (void *)0x0) {
                              puVar9 = puVar3;
                            }
                            SystemDataInitializer(&rendering_buffer_2592_ptr,puVar9,puVar15);
                          }
                        }
                        else {
                          if ((int)local_var_40 == 0x14) {
                            iVar4 = strcmp(plocal_var_48);
                          }
                          else {
                            if ((int)local_var_40 != 0x19) {
                              if (((int)local_var_40 != 0x12) ||
                                 (iVar4 = strcmp(plocal_var_48), iVar4 != 0)) goto LAB_1803bd758;
                              pcVar12 = (char *)(uint64_t)(uVar14 | 8);
                              goto LAB_1803bd792;
                            }
                            iVar4 = strcmp(plocal_var_48);
                          }
                          if (iVar4 != 0) goto LAB_1803bd758;
                          pcVar12 = (char *)(uint64_t)(uVar14 | 2);
                        }
                      }
                      else if (((local_var_60 == 1) && (*pcStack_68 == '1')) && (pcStack_68[1] == '\0')
                              ) goto LAB_1803bd718;
LAB_1803bd792:
                      uVar18 = SUB84(pcVar12,0);
                      pcVar17 = "visibility_mask";
                      do {
                        pcVar6 = pcVar17;
                        pcVar17 = pcVar6 + 1;
                      } while (*pcVar17 != '\0');
                      for (pcVar17 = *(char **)(pcVar16 + 0x58); pcVar16 = pcVar19,
                          pcVar17 != (char *)0x0; pcVar17 = *(char **)(pcVar17 + 0x58)) {
                        pcVar7 = *(char **)pcVar17;
                        if (pcVar7 == (char *)0x0) {
                          pcVar7 = (char *)0x180d48d24;
                          pcVar5 = pcVar19;
                        }
                        else {
                          pcVar5 = *(char **)(pcVar17 + 0x10);
                        }
                        if (pcVar5 == pcVar6 + -0x180a2398f) {
                          pcVar5 = pcVar5 + (int64_t)pcVar7;
                          pcVar16 = pcVar17;
                          if (pcVar5 <= pcVar7) break;
                          lVar8 = (int64_t)&rendering_buffer_2512_ptr - (int64_t)pcVar7;
                          while (*pcVar7 == pcVar7[lVar8]) {
                            pcVar7 = pcVar7 + 1;
                            if (pcVar5 <= pcVar7) goto LAB_1803bd842;
                          }
                        }
                      }
LAB_1803bd842:
                      plocal_var_70 = &system_data_buffer_ptr;
                      if (pcStack_68 != (char *)0x0) {
// WARNING: Subroutine does not return
                        CoreEngineMemoryPoolCleaner();
                      }
                      pcStack_68 = (char *)0x0;
                      local_var_58 = local_var_58 & 0xffffffff00000000;
                      plocal_var_70 = &system_state_ptr;
                      plocal_var_50 = &system_data_buffer_ptr;
                      if (plocal_var_48 != (void *)0x0) {
// WARNING: Subroutine does not return
                        CoreEngineMemoryPoolCleaner();
                      }
                      plocal_var_48 = (void *)0x0;
                      local_var_38 = local_var_38 & 0xffffffff00000000;
                      plocal_var_50 = &system_state_ptr;
                    } while (pcVar16 != (char *)0x0);
                    goto LAB_1803bd8a3;
                  }
                  lVar8 = (int64_t)&rendering_buffer_2512_ptr - (int64_t)pcVar6;
                  while (*pcVar6 == pcVar6[lVar8]) {
                    pcVar6 = pcVar6 + 1;
                    if (pcVar7 <= pcVar6) goto LAB_1803bd540;
                  }
                }
                pcVar16 = *(char **)(pcVar16 + 0x58);
              } while( true );
            }
            lVar8 = (int64_t)&system_param2_ptr - (int64_t)pcVar16;
            while (*pcVar16 == pcVar16[lVar8]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar6 <= pcVar16) goto LAB_1803bd4c2;
            }
          }
          puVar10 = (uint64_t *)puVar10[0xb];
        } while( true );
      }
      lVar8 = (int64_t)&processed_var_4216_ptr - (int64_t)pcVar16;
      while (*pcVar16 == pcVar16[lVar8]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar6 <= pcVar16) goto LAB_1803bce70;
      }
    }
    puVar10 = (uint64_t *)puVar10[0xb];
  } while( true );
}