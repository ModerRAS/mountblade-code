#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part041_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801b0d10(int64_t param_1,int64_t param_2,uint64_t *param_3)
void FUN_1801b0d10(int64_t param_1,int64_t param_2,uint64_t *param_3)

{
  char cVar1;
  int iVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  char *pcVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t **ppuVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  int32_t extraout_XMM0_Da;
  int32_t uVar18;
  uint64_t *puStackX_20;
  void *puStack_e8;
  int32_t *puStack_e0;
  int iStack_d8;
  uint64_t uStack_d0;
  void *puStack_c8;
  char *pcStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t *apuStack_a8 [9];
  int64_t *plStack_60;
  uint64_t uStack_58;
  
  uStack_58 = 0xfffffffffffffffe;
  pcVar15 = "flora_bounding_rect";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  pcVar15 = (char *)0x0;
  for (puVar7 = *(uint64_t **)(param_2 + 0x30); puVar7 != (uint64_t *)0x0;
      puVar7 = (uint64_t *)puVar7[0xb]) {
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar8 = (char *)0x180d48d24;
      pcVar9 = pcVar15;
    }
    else {
      pcVar9 = (char *)puVar7[2];
    }
    if (pcVar9 == pcVar16 + -0x180a0bae7) {
      pcVar9 = pcVar9 + (int64_t)pcVar8;
      if (pcVar9 <= pcVar8) {
LAB_1801b0db0:
        FUN_180631850(puVar7,&unknown_var_4548_ptr,param_1 + 0x3004);
        FUN_180631850(puVar7,&unknown_var_4580_ptr,param_1 + 0x300c);
        break;
      }
      lVar11 = (int64_t)&unknown_var_4552_ptr - (int64_t)pcVar8;
      while (*pcVar8 == pcVar8[lVar11]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar9 <= pcVar8) goto LAB_1801b0db0;
      }
    }
  }
  pcVar16 = "levels";
  do {
    pcVar8 = pcVar16;
    pcVar16 = pcVar8 + 1;
  } while (*pcVar16 != '\0');
  puVar7 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar7 == (uint64_t *)0x0) {
      puStack_e8 = &system_data_buffer_ptr;
      uStack_d0 = 0;
      puStack_e0 = (int32_t *)0x0;
      iStack_d8 = 0;
      puVar3 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar3 = 0;
      puStack_e0 = puVar3;
      uVar18 = FUN_18064e990(puVar3);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar18);
      *puVar3 = 0x65736162;
      *(int8_t *)(puVar3 + 1) = 0;
      iStack_d8 = 4;
      FUN_1801b8770(param_1 + 0x60300,&puStack_e8,1);
      puStack_e8 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar3);
    }
    pcVar16 = (char *)*puVar7;
    if (pcVar16 == (char *)0x0) {
      pcVar16 = (char *)0x180d48d24;
      pcVar9 = pcVar15;
    }
    else {
      pcVar9 = (char *)puVar7[2];
    }
    if (pcVar9 == pcVar8 + -0x180a0bafb) {
      pcVar9 = pcVar9 + (int64_t)pcVar16;
      if (pcVar9 <= pcVar16) {
LAB_1801b0e50:
        pcVar16 = "level";
        do {
          pcVar8 = pcVar16;
          pcVar16 = pcVar8 + 1;
        } while (*pcVar16 != '\0');
        for (pcVar16 = (char *)puVar7[6]; pcVar16 != (char *)0x0;
            pcVar16 = *(char **)(pcVar16 + 0x58)) {
          pcVar9 = *(char **)pcVar16;
          if (pcVar9 == (char *)0x0) {
            pcVar9 = (char *)0x180d48d24;
            pcVar10 = pcVar15;
          }
          else {
            pcVar10 = *(char **)(pcVar16 + 0x10);
          }
          if (pcVar10 == pcVar8 + -0x180a0bb0f) {
            pcVar10 = pcVar10 + (int64_t)pcVar9;
            if (pcVar10 <= pcVar9) {
LAB_1801b0ee0:
              do {
                puStack_e8 = &system_data_buffer_ptr;
                uStack_d0 = 0;
                puStack_e0 = (int32_t *)0x0;
                iStack_d8 = 0;
                pcVar8 = "name";
                do {
                  pcVar9 = pcVar8;
                  pcVar8 = pcVar9 + 1;
                } while (*pcVar8 != '\0');
                for (puVar7 = *(uint64_t **)(pcVar16 + 0x40); puVar7 != (uint64_t *)0x0;
                    puVar7 = (uint64_t *)puVar7[6]) {
                  pcVar8 = (char *)*puVar7;
                  if (pcVar8 == (char *)0x0) {
                    pcVar8 = (char *)0x180d48d24;
                    pcVar10 = pcVar15;
                  }
                  else {
                    pcVar10 = (char *)puVar7[2];
                  }
                  if (pcVar10 == pcVar9 + -0x180a03a83) {
                    pcVar10 = pcVar8 + (int64_t)pcVar10;
                    if (pcVar10 <= pcVar8) {
LAB_1801b0f67:
                      lVar11 = 0x180d48d24;
                      if (puVar7[1] != 0) {
                        lVar11 = puVar7[1];
                      }
                      FUN_180627c50(&puStack_e8,lVar11);
                      break;
                    }
                    lVar11 = (int64_t)&system_data_3a84 - (int64_t)pcVar8;
                    while (*pcVar8 == pcVar8[lVar11]) {
                      pcVar8 = pcVar8 + 1;
                      if (pcVar10 <= pcVar8) goto LAB_1801b0f67;
                    }
                  }
                }
                pcVar8 = "mask";
                do {
                  pcVar9 = pcVar8;
                  pcVar8 = pcVar9 + 1;
                } while (*pcVar8 != '\0');
                for (puVar7 = *(uint64_t **)(pcVar16 + 0x40); puVar7 != (uint64_t *)0x0;
                    puVar7 = (uint64_t *)puVar7[6]) {
                  pcVar8 = (char *)*puVar7;
                  if (pcVar8 == (char *)0x0) {
                    pcVar8 = (char *)0x180d48d24;
                    pcVar10 = pcVar15;
                  }
                  else {
                    pcVar10 = (char *)puVar7[2];
                  }
                  if (pcVar10 == pcVar9 + -0x180a0bb07) {
                    pcVar10 = pcVar10 + (int64_t)pcVar8;
                    if (pcVar10 <= pcVar8) {
LAB_1801b0ff5:
                      lVar11 = 0x180d48d24;
                      if (puVar7[1] != 0) {
                        lVar11 = puVar7[1];
                      }
                      FUN_18010cbc0(lVar11,&unknown_var_2208_ptr,&puStackX_20);
                      break;
                    }
                    lVar11 = (int64_t)&unknown_var_4584_ptr - (int64_t)pcVar8;
                    while (*pcVar8 == pcVar8[lVar11]) {
                      pcVar8 = pcVar8 + 1;
                      if (pcVar10 <= pcVar8) goto LAB_1801b0ff5;
                    }
                  }
                }
                FUN_1801b8770(param_1 + 0x60300,&puStack_e8,(uint64_t)puStackX_20 & 0xffffffff);
                pcVar8 = "level";
                do {
                  pcVar9 = pcVar8;
                  pcVar8 = pcVar9 + 1;
                } while (*pcVar8 != '\0');
                for (pcVar8 = *(char **)(pcVar16 + 0x58); pcVar16 = pcVar15, pcVar8 != (char *)0x0;
                    pcVar8 = *(char **)(pcVar8 + 0x58)) {
                  pcVar10 = *(char **)pcVar8;
                  if (pcVar10 == (char *)0x0) {
                    pcVar10 = (char *)0x180d48d24;
                    pcVar5 = pcVar15;
                  }
                  else {
                    pcVar5 = *(char **)(pcVar8 + 0x10);
                  }
                  if (pcVar5 == pcVar9 + -0x180a0bb0f) {
                    pcVar5 = pcVar5 + (int64_t)pcVar10;
                    pcVar16 = pcVar8;
                    if (pcVar5 <= pcVar10) break;
                    lVar11 = (int64_t)&unknown_var_4592_ptr - (int64_t)pcVar10;
                    while (*pcVar10 == pcVar10[lVar11]) {
                      pcVar10 = pcVar10 + 1;
                      if (pcVar5 <= pcVar10) goto LAB_1801b109e;
                    }
                  }
                }
LAB_1801b109e:
                puStack_e8 = &system_data_buffer_ptr;
                if (puStack_e0 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
              } while (pcVar16 != (char *)0x0);
              break;
            }
            lVar11 = (int64_t)&unknown_var_4592_ptr - (int64_t)pcVar9;
            while (*pcVar9 == pcVar9[lVar11]) {
              pcVar9 = pcVar9 + 1;
              if (pcVar10 <= pcVar9) goto LAB_1801b0ee0;
            }
          }
        }
        pcVar16 = "environment_properties";
        do {
          pcVar8 = pcVar16;
          pcVar16 = pcVar8 + 1;
        } while (*pcVar16 != '\0');
        puVar7 = *(uint64_t **)(param_2 + 0x30);
        do {
          if (puVar7 == (uint64_t *)0x0) {
            return;
          }
          pcVar16 = (char *)*puVar7;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = (char *)0x180d48d24;
            pcVar9 = pcVar15;
          }
          else {
            pcVar9 = (char *)puVar7[2];
          }
          if (pcVar9 == pcVar8 + -0x180a0bb27) {
            pcVar9 = pcVar9 + (int64_t)pcVar16;
            if (pcVar9 <= pcVar16) {
LAB_1801b13b0:
              pcVar16 = "property";
              do {
                pcVar8 = pcVar16;
                pcVar16 = pcVar8 + 1;
              } while (*pcVar16 != '\0');
              for (pcVar16 = (char *)puVar7[6]; pcVar9 = pcVar15, pcVar16 != (char *)0x0;
                  pcVar16 = *(char **)(pcVar16 + 0x58)) {
                pcVar10 = *(char **)pcVar16;
                if (pcVar10 == (char *)0x0) {
                  pcVar10 = (char *)0x180d48d24;
                  pcVar5 = pcVar15;
                }
                else {
                  pcVar5 = *(char **)(pcVar16 + 0x10);
                }
                if (pcVar5 == pcVar8 + -0x180a0bb17) {
                  pcVar5 = pcVar5 + (int64_t)pcVar10;
                  pcVar9 = pcVar16;
                  if (pcVar5 <= pcVar10) break;
                  lVar11 = (int64_t)&unknown_var_4600_ptr - (int64_t)pcVar10;
                  while (*pcVar10 == pcVar10[lVar11]) {
                    pcVar10 = pcVar10 + 1;
                    if (pcVar5 <= pcVar10) goto LAB_1801b1426;
                  }
                }
              }
LAB_1801b1426:
              puStack_e8 = &system_data_buffer_ptr;
              uStack_d0 = 0;
              puStack_e0 = (int32_t *)0x0;
              iStack_d8 = 0;
              apuStack_a8[0] = puVar7;
              if (pcVar9 != (char *)0x0) {
LAB_1801b1470:
                pcVar16 = "name";
                do {
                  pcVar8 = pcVar16;
                  pcVar16 = pcVar8 + 1;
                } while (*pcVar16 != '\0');
                for (puVar13 = *(uint64_t **)(pcVar9 + 0x40); puVar13 != (uint64_t *)0x0;
                    puVar13 = (uint64_t *)puVar13[6]) {
                  pcVar16 = (char *)*puVar13;
                  if (pcVar16 == (char *)0x0) {
                    pcVar16 = (char *)0x180d48d24;
                    pcVar10 = pcVar15;
                  }
                  else {
                    pcVar10 = (char *)puVar13[2];
                  }
                  if (pcVar10 == pcVar8 + -0x180a03a83) {
                    pcVar10 = pcVar16 + (int64_t)pcVar10;
                    if (pcVar10 <= pcVar16) {
LAB_1801b14d0:
                      lVar11 = 0x180d48d24;
                      if (puVar13[1] != 0) {
                        lVar11 = puVar13[1];
                      }
                      (**(code **)(puStack_e8 + 0x10))(&puStack_e8,lVar11);
                      break;
                    }
                    lVar11 = (int64_t)&system_data_3a84 - (int64_t)pcVar16;
                    while (*pcVar16 == pcVar16[lVar11]) {
                      pcVar16 = pcVar16 + 1;
                      if (pcVar10 <= pcVar16) goto LAB_1801b14d0;
                    }
                  }
                }
                if (iStack_d8 == 0x11) {
                  iVar2 = strcmp(puStack_e0,&unknown_var_4672_ptr);
                  if (iVar2 == 0) {
                    FUN_180631850(pcVar9,&unknown_var_3692_ptr,param_1 + 0x60b68);
                  }
                }
                else if (iStack_d8 == 0x18) {
                  iVar2 = strcmp(puStack_e0,&unknown_var_4640_ptr);
                  if (iVar2 == 0) {
                    FUN_180631000(pcVar9,&unknown_var_3692_ptr,param_1 + 0x48);
                  }
                  else {
LAB_1801b169b:
                    iVar2 = strcmp(puStack_e0,&unknown_var_4736_ptr);
                    if (iVar2 == 0) {
                      puStackX_20 = (uint64_t *)((uint64_t)puStackX_20 & 0xffffffffffffff00);
                      FUN_180631000(pcVar9,&unknown_var_3692_ptr,&puStackX_20);
                      *(bool *)(param_1 + 0x3f62) = (char)puStackX_20 == '\0';
                    }
                    else {
LAB_1801b18fb:
                      iVar2 = strcmp(puStack_e0,&unknown_var_4944_ptr);
                      if (iVar2 == 0) {
                        pcVar16 = "value";
                        do {
                          pcVar8 = pcVar16;
                          pcVar16 = pcVar8 + 1;
                        } while (*pcVar16 != '\0');
                        for (puVar13 = *(uint64_t **)(pcVar9 + 0x40); pcVar16 = pcVar15,
                            puVar13 != (uint64_t *)0x0; puVar13 = (uint64_t *)puVar13[6]) {
                          pcVar16 = (char *)*puVar13;
                          if (pcVar16 == (char *)0x0) {
                            pcVar16 = (char *)0x180d48d24;
                            pcVar10 = pcVar15;
                          }
                          else {
                            pcVar10 = (char *)puVar13[2];
                          }
                          if (pcVar10 == pcVar8 + -0x180a0696b) {
                            pcVar10 = pcVar10 + (int64_t)pcVar16;
                            if (pcVar10 <= pcVar16) {
LAB_1801b1970:
                              pcVar16 = (char *)0x180d48d24;
                              if ((char *)puVar13[1] != (char *)0x0) {
                                pcVar16 = (char *)puVar13[1];
                              }
                              break;
                            }
                            lVar11 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar16;
                            while (*pcVar16 == pcVar16[lVar11]) {
                              pcVar16 = pcVar16 + 1;
                              if (pcVar10 <= pcVar16) goto LAB_1801b1970;
                            }
                          }
                        }
                        if (pcVar16 != (char *)0x0) {
                          FUN_180627910(&puStack_c8);
                          cVar1 = *pcStack_c0;
                          pcVar16 = pcVar15;
                          while (cVar1 != '\0') {
                            lVar11 = strchr(&unknown_var_5540_ptr,(int)pcStack_c0[(int64_t)pcVar16]);
                            if (lVar11 != 0) {
                              pcStack_c0[(int64_t)pcVar16] = ' ';
                            }
                            pcVar16 = pcVar16 + 1;
                            cVar1 = pcStack_c0[(int64_t)pcVar16];
                          }
                          pcVar16 = "";
                          if (pcStack_c0 != (char *)0x0) {
                            pcVar16 = pcStack_c0;
                          }
                          FUN_18010cbc0(pcVar16,&unknown_var_5556_ptr,param_1 + 0x4bc,param_1 + 0x4c0,
                                        param_1 + 0x4c4);
                          puStack_c8 = &system_data_buffer_ptr;
                          if (pcStack_c0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900();
                          }
                          pcStack_c0 = (char *)0x0;
                          uStack_b0 = uStack_b0 & 0xffffffff00000000;
                          puStack_c8 = &system_state_ptr;
                        }
                      }
                    }
                  }
                }
                else if (iStack_d8 == 0x12) {
                  iVar2 = strcmp(puStack_e0,&unknown_var_4712_ptr);
                  if (iVar2 == 0) {
                    FUN_180631850(pcVar9,&unknown_var_3692_ptr,param_1 + 0x60b70);
                  }
                  else {
LAB_1801b1781:
                    iVar2 = strcmp(puStack_e0,&unknown_var_4856_ptr);
                    if (iVar2 == 0) {
                      FUN_1806313c0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x4ac);
                    }
                    else {
LAB_1801b17e9:
                      iVar2 = strcmp(puStack_e0,&system_data_6cc8);
                      if (iVar2 == 0) {
                        FUN_1806313c0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x4a8);
                      }
                    }
                  }
                }
                else if (iStack_d8 == 0xb) {
                  iVar2 = strcmp(puStack_e0,&unknown_var_4696_ptr);
                  if (iVar2 == 0) {
                    pcVar16 = "value";
                    do {
                      pcVar8 = pcVar16;
                      pcVar16 = pcVar8 + 1;
                    } while (*pcVar16 != '\0');
                    for (puVar13 = *(uint64_t **)(pcVar9 + 0x40); pcVar16 = pcVar15,
                        puVar13 != (uint64_t *)0x0; puVar13 = (uint64_t *)puVar13[6]) {
                      pcVar16 = (char *)*puVar13;
                      if (pcVar16 == (char *)0x0) {
                        pcVar16 = (char *)0x180d48d24;
                        pcVar10 = pcVar15;
                      }
                      else {
                        pcVar10 = (char *)puVar13[2];
                      }
                      if (pcVar10 == pcVar8 + -0x180a0696b) {
                        pcVar10 = pcVar10 + (int64_t)pcVar16;
                        if (pcVar10 <= pcVar16) {
LAB_1801b1620:
                          pcVar16 = (char *)0x180d48d24;
                          if ((char *)puVar13[1] != (char *)0x0) {
                            pcVar16 = (char *)puVar13[1];
                          }
                          break;
                        }
                        lVar11 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar16;
                        while (*pcVar16 == pcVar16[lVar11]) {
                          pcVar16 = pcVar16 + 1;
                          if (pcVar10 <= pcVar16) goto LAB_1801b1620;
                        }
                      }
                    }
                    if ((param_1 + 0x3f50 != 0) && (pcVar16 != (char *)0x0)) {
                      FUN_18010cbc0(pcVar16,&system_data_6430,param_1 + 0x3f50);
                    }
                  }
                }
                else if (iStack_d8 == 10) {
                  iVar2 = strcmp(puStack_e0,&unknown_var_4768_ptr);
                  if (iVar2 == 0) {
                    FUN_180631000(pcVar9,&unknown_var_3692_ptr,param_1 + 0x3000);
                  }
                }
                else {
                  if (iStack_d8 == 0x18) goto LAB_1801b169b;
                  if (iStack_d8 == 0xc) {
                    iVar2 = strcmp(puStack_e0,&unknown_var_4816_ptr);
                    if (iVar2 == 0) {
                      FUN_180631960(pcVar9,&unknown_var_3692_ptr,param_1 + 0x3e60);
                    }
                  }
                  else if (iStack_d8 == 0xe) {
                    iVar2 = strcmp(puStack_e0,&system_data_6ad0);
                    if (iVar2 == 0) {
                      FUN_1806313c0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x4b4);
                    }
                    else {
LAB_1801b1a8b:
                      iVar2 = strcmp(puStack_e0,&unknown_var_4928_ptr);
                      if (iVar2 == 0) {
                        FUN_180631000(pcVar9,&unknown_var_3692_ptr,param_1 + 0x4c8);
                      }
                    }
                  }
                  else if (iStack_d8 == 0x1a) {
                    iVar2 = strcmp(puStack_e0,&unknown_var_4784_ptr);
                    if (iVar2 == 0) {
                      FUN_1806313c0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x4b8);
                    }
                  }
                  else {
                    if (iStack_d8 == 0x12) goto LAB_1801b1781;
                    if (iStack_d8 == 0x16) {
                      iVar2 = strcmp(puStack_e0,&unknown_var_4832_ptr);
                      if (iVar2 == 0) {
                        FUN_1806313c0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x4cc);
                      }
                      else {
LAB_1801b18c1:
                        iVar2 = strcmp(puStack_e0,&unknown_var_4880_ptr);
                        if (iVar2 == 0) {
                          FUN_1806313c0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x4b0);
                        }
                      }
                    }
                    else {
                      if (iStack_d8 == 0x12) goto LAB_1801b17e9;
                      if (iStack_d8 == 0x14) {
                        iVar2 = strcmp(puStack_e0,&unknown_var_4904_ptr);
                        if (iVar2 == 0) {
                          pcVar16 = "value";
                          do {
                            pcVar8 = pcVar16;
                            pcVar16 = pcVar8 + 1;
                          } while (*pcVar16 != '\0');
                          for (puVar13 = *(uint64_t **)(pcVar9 + 0x40);
                              puVar13 != (uint64_t *)0x0; puVar13 = (uint64_t *)puVar13[6]) {
                            pcVar16 = (char *)*puVar13;
                            if (pcVar16 == (char *)0x0) {
                              pcVar16 = (char *)0x180d48d24;
                              pcVar10 = pcVar15;
                            }
                            else {
                              pcVar10 = (char *)puVar13[2];
                            }
                            if (pcVar10 == pcVar8 + -0x180a0696b) {
                              pcVar10 = pcVar10 + (int64_t)pcVar16;
                              if (pcVar10 <= pcVar16) {
LAB_1801b1891:
                                lVar11 = 0x180d48d24;
                                if (puVar13[1] != 0) {
                                  lVar11 = puVar13[1];
                                }
                                (**(code **)(*(int64_t *)(param_1 + 0x488) + 0x10))
                                          (param_1 + 0x488,lVar11);
                                break;
                              }
                              lVar11 = (int64_t)&unknown_var_3692_ptr - (int64_t)pcVar16;
                              while (*pcVar16 == pcVar16[lVar11]) {
                                pcVar16 = pcVar16 + 1;
                                if (pcVar10 <= pcVar16) goto LAB_1801b1891;
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (iStack_d8 == 0x16) goto LAB_1801b18c1;
                        if (iStack_d8 == 0x18) goto LAB_1801b18fb;
                        if (iStack_d8 == 0xe) goto LAB_1801b1a8b;
                      }
                    }
                  }
                }
                pcVar16 = "property";
                do {
                  pcVar8 = pcVar16;
                  pcVar16 = pcVar8 + 1;
                } while (*pcVar16 != '\0');
                pcVar9 = *(char **)(pcVar9 + 0x58);
                if (pcVar9 != (char *)0x0) {
                  do {
                    pcVar16 = *(char **)pcVar9;
                    if (pcVar16 == (char *)0x0) {
                      pcVar16 = (char *)0x180d48d24;
                      pcVar10 = pcVar15;
                    }
                    else {
                      pcVar10 = *(char **)(pcVar9 + 0x10);
                    }
                    if (pcVar10 == pcVar8 + -0x180a0bb17) {
                      pcVar10 = pcVar10 + (int64_t)pcVar16;
                      if (pcVar10 <= pcVar16) goto LAB_1801b1470;
                      lVar11 = (int64_t)&unknown_var_4600_ptr - (int64_t)pcVar16;
                      while (*pcVar16 == pcVar16[lVar11]) {
                        pcVar16 = pcVar16 + 1;
                        if (pcVar10 <= pcVar16) goto LAB_1801b1470;
                      }
                    }
                    pcVar9 = *(char **)(pcVar9 + 0x58);
                    if (pcVar9 == (char *)0x0) break;
                  } while( true );
                }
              }
              pcVar16 = "atmosphere_properties";
              do {
                pcVar8 = pcVar16;
                pcVar16 = pcVar8 + 1;
              } while (*pcVar16 != '\0');
              puVar13 = (uint64_t *)puVar7[6];
              do {
                if (puVar13 == (uint64_t *)0x0) goto LAB_1801b1e03;
                pcVar16 = (char *)*puVar13;
                if (pcVar16 == (char *)0x0) {
                  pcVar16 = (char *)0x180d48d24;
                  pcVar9 = pcVar15;
                }
                else {
                  pcVar9 = (char *)puVar13[2];
                }
                if (pcVar9 == pcVar8 + -0x180a0bc9f) {
                  pcVar9 = pcVar16 + (int64_t)pcVar9;
                  if (pcVar9 <= pcVar16) {
LAB_1801b1b60:
                    pcVar16 = "property";
                    do {
                      pcVar8 = pcVar16;
                      pcVar16 = pcVar8 + 1;
                    } while (*pcVar16 != '\0');
                    for (puVar13 = (uint64_t *)puVar13[6]; puVar13 != (uint64_t *)0x0;
                        puVar13 = (uint64_t *)puVar13[0xb]) {
                      pcVar16 = (char *)*puVar13;
                      if (pcVar16 == (char *)0x0) {
                        pcVar16 = (char *)0x180d48d24;
                        pcVar9 = pcVar15;
                      }
                      else {
                        pcVar9 = (char *)puVar13[2];
                      }
                      if (pcVar9 == pcVar8 + -0x180a0bb17) {
                        pcVar9 = pcVar9 + (int64_t)pcVar16;
                        if (pcVar9 <= pcVar16) {
LAB_1801b1bd0:
                          lVar11 = FUN_1800a02a0(puVar13,&system_data_3a84);
                          if (lVar11 != 0) {
                            lVar12 = 0x180d48d24;
                            if (*(int64_t *)(lVar11 + 8) != 0) {
                              lVar12 = *(int64_t *)(lVar11 + 8);
                            }
                            (**(code **)(puStack_e8 + 0x10))(&puStack_e8,lVar12);
                          }
                          if (iStack_d8 == 0xf) {
                            iVar2 = strcmp(puStack_e0,&unknown_var_4976_ptr);
                            bVar17 = iVar2 == 0;
                          }
                          else {
                            bVar17 = false;
                          }
                          if (bVar17) {
                            puStack_c8 = &system_data_buffer_ptr;
                            uStack_b0 = 0;
                            pcStack_c0 = (char *)0x0;
                            uStack_b8 = 0;
                            lVar11 = FUN_1800a02a0(puVar13,&unknown_var_3692_ptr);
                            uVar18 = extraout_XMM0_Da;
                            if (lVar11 != 0) {
                              lVar12 = 0x180d48d24;
                              if (*(int64_t *)(lVar11 + 8) != 0) {
                                lVar12 = *(int64_t *)(lVar11 + 8);
                              }
                              uVar18 = (**(code **)(puStack_c8 + 0x10))(&puStack_c8,lVar12);
                            }
                            uVar4 = FUN_18018dff0(uVar18,&puStack_c8);
                            *param_3 = uVar4;
                            puStack_c8 = &system_data_buffer_ptr;
                            if (pcStack_c0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
                              FUN_18064e900();
                            }
                            pcStack_c0 = (char *)0x0;
                            uStack_b0 = uStack_b0 & 0xffffffff00000000;
                            puStack_c8 = &system_state_ptr;
                          }
                          else {
                            pcVar16 = pcVar15;
                            if (iStack_d8 == 4) {
                              do {
                                pcVar8 = pcVar16 + 1;
                                if (pcVar16[(int64_t)puStack_e0] != pcVar16[0x180a04cf8])
                                goto LAB_1801b1d8b;
                                pcVar16 = pcVar8;
                              } while (pcVar8 != (char *)0x5);
                              puStackX_20 = (uint64_t *)0x0;
                              FUN_180631850(puVar13,&unknown_var_3692_ptr,&puStackX_20);
                              uVar18 = FUN_1801be430(&puStackX_20);
                              *(uint64_t **)(*(int64_t *)(param_1 + 0x81f0) + 4) = puStackX_20;
                              FUN_1801be430();
                              *(int32_t *)(*(int64_t *)(param_1 + 0x81f0) + 0xc) = uVar18;
                            }
                            else if (iStack_d8 == 0x1b) {
                              iVar2 = strcmp(puStack_e0,&unknown_var_5048_ptr);
                              if (iVar2 == 0) {
                                FUN_180631000(puVar13,&unknown_var_3692_ptr,param_1 + 0x60c1c);
                              }
                            }
                            else if ((iStack_d8 == 0x18) &&
                                    (iVar2 = strcmp(puStack_e0,&unknown_var_5016_ptr), iVar2 == 0)) {
                              FUN_1806313c0(puVar13,&unknown_var_3692_ptr,param_1 + 0x2a64);
                            }
                          }
LAB_1801b1d8b:
                          pcVar16 = "property";
                          do {
                            pcVar8 = pcVar16;
                            pcVar16 = pcVar8 + 1;
                          } while (*pcVar16 != '\0');
                          puVar13 = (uint64_t *)puVar13[0xb];
                          puVar7 = apuStack_a8[0];
                          if (puVar13 != (uint64_t *)0x0) {
                            do {
                              pcVar16 = (char *)*puVar13;
                              if (pcVar16 == (char *)0x0) {
                                pcVar16 = (char *)0x180d48d24;
                                pcVar9 = pcVar15;
                              }
                              else {
                                pcVar9 = (char *)puVar13[2];
                              }
                              if (pcVar9 == pcVar8 + -0x180a0bb17) {
                                pcVar9 = pcVar16 + (int64_t)pcVar9;
                                if (pcVar9 <= pcVar16) goto LAB_1801b1bd0;
                                lVar11 = (int64_t)&unknown_var_4600_ptr - (int64_t)pcVar16;
                                while (*pcVar16 == pcVar16[lVar11]) {
                                  pcVar16 = pcVar16 + 1;
                                  if (pcVar9 <= pcVar16) goto LAB_1801b1bd0;
                                }
                              }
                              puVar13 = (uint64_t *)puVar13[0xb];
                              if (puVar13 == (uint64_t *)0x0) break;
                            } while( true );
                          }
                          break;
                        }
                        lVar11 = (int64_t)&unknown_var_4600_ptr - (int64_t)pcVar16;
                        while (*pcVar16 == pcVar16[lVar11]) {
                          pcVar16 = pcVar16 + 1;
                          if (pcVar9 <= pcVar16) goto LAB_1801b1bd0;
                        }
                      }
                    }
LAB_1801b1e03:
                    pcVar16 = "water_properties";
                    do {
                      pcVar8 = pcVar16;
                      pcVar16 = pcVar8 + 1;
                    } while (*pcVar16 != '\0');
                    puVar13 = (uint64_t *)puVar7[6];
                    do {
                      if (puVar13 == (uint64_t *)0x0) goto LAB_1801b22be;
                      pcVar16 = (char *)*puVar13;
                      if (pcVar16 == (char *)0x0) {
                        pcVar16 = (char *)0x180d48d24;
                        pcVar9 = pcVar15;
                      }
                      else {
                        pcVar9 = (char *)puVar13[2];
                      }
                      if (pcVar9 == pcVar8 + -0x180a0bd07) {
                        pcVar9 = pcVar16 + (int64_t)pcVar9;
                        if (pcVar9 <= pcVar16) {
LAB_1801b1e66:
                          *(int32_t *)(param_1 + 0x3e90) = 0;
                          FUN_180631330(puVar13,&unknown_var_2256_ptr,param_1 + 0x3e90);
                          pcVar16 = "property";
                          do {
                            pcVar8 = pcVar16;
                            pcVar16 = pcVar8 + 1;
                          } while (*pcVar16 != '\0');
                          for (pcVar16 = (char *)puVar13[6]; pcVar9 = pcVar15,
                              pcVar16 != (char *)0x0; pcVar16 = *(char **)(pcVar16 + 0x58)) {
                            pcVar10 = *(char **)pcVar16;
                            if (pcVar10 == (char *)0x0) {
                              pcVar10 = (char *)0x180d48d24;
                              pcVar5 = pcVar15;
                            }
                            else {
                              pcVar5 = *(char **)(pcVar16 + 0x10);
                            }
                            if (pcVar5 == pcVar8 + -0x180a0bb17) {
                              pcVar5 = pcVar5 + (int64_t)pcVar10;
                              pcVar9 = pcVar16;
                              if (pcVar5 <= pcVar10) break;
                              lVar11 = (int64_t)&unknown_var_4600_ptr - (int64_t)pcVar10;
                              while (*pcVar10 == pcVar10[lVar11]) {
                                pcVar10 = pcVar10 + 1;
                                if (pcVar5 <= pcVar10) goto LAB_1801b1efe;
                              }
                            }
                          }
LAB_1801b1efe:
                          puStack_c8 = &system_data_buffer_ptr;
                          uStack_b0 = 0;
                          pcStack_c0 = (char *)0x0;
                          uStack_b8 = 0;
                          if (pcVar9 != (char *)0x0) {
LAB_1801b1f31:
                            lVar11 = FUN_1800a02a0(pcVar9,&system_data_3a84);
                            if (lVar11 != 0) {
                              lVar12 = 0x180d48d24;
                              if (*(int64_t *)(lVar11 + 8) != 0) {
                                lVar12 = *(int64_t *)(lVar11 + 8);
                              }
                              (**(code **)(puStack_e8 + 0x10))(&puStack_e8,lVar12);
                            }
                            if (iStack_d8 == 0xb) {
                              iVar2 = strcmp(puStack_e0,&unknown_var_5080_ptr);
                              if (iVar2 == 0) {
                                FUN_1806313c0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x3ec4);
                              }
                            }
                            else if (iStack_d8 == 0xe) {
                              iVar2 = strcmp(puStack_e0,&unknown_var_5144_ptr);
                              if (iVar2 == 0) {
                                FUN_1806313c0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x3ec8);
                              }
                              else {
LAB_1801b2018:
                                iVar2 = strcmp(puStack_e0,&unknown_var_5184_ptr);
                                if (iVar2 == 0) {
                                  FUN_180630fb0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x3ed0);
                                  plVar6 = (int64_t *)
                                           FUN_1800b30d0(system_resource_state,&plStack_60,param_1 + 0x3ed0
                                                         ,0);
                                  lVar11 = *plVar6;
                                  if (plStack_60 != (int64_t *)0x0) {
                                    (**(code **)(*plStack_60 + 0x38))();
                                  }
                                  if ((lVar11 == 0) || (*(int *)(param_1 + 0x3ee0) == 0)) {
                                    (**(code **)(*(int64_t *)(param_1 + 0x3ed0) + 0x10))
                                              (param_1 + 0x3ed0,&unknown_var_2256_ptr);
                                  }
                                }
                              }
                            }
                            else if (iStack_d8 == 0x15) {
                              iVar2 = strcmp(puStack_e0,&unknown_var_5120_ptr);
                              if (iVar2 == 0) {
                                FUN_1806313c0(pcVar9,&unknown_var_3692_ptr,param_1 + 0x3ecc);
                              }
                            }
                            else {
                              if (iStack_d8 == 0xe) goto LAB_1801b2018;
                              if (iStack_d8 == 0x13) {
                                iVar2 = strcmp(puStack_e0,&unknown_var_5160_ptr);
                                if (iVar2 == 0) {
                                  FUN_180631960(pcVar9,&unknown_var_3692_ptr,param_1 + 0x3e94);
                                }
                                else {
LAB_1801b2186:
                                  iVar2 = strcmp(puStack_e0,&unknown_var_5264_ptr);
                                  if (iVar2 == 0) {
                                    puStackX_20 = (uint64_t *)0x0;
                                    ppuVar14 = &puStackX_20;
                                  }
                                  else {
                                    iVar2 = strcmp(puStack_e0,&unknown_var_5240_ptr);
                                    if (iVar2 != 0) goto LAB_1801b209e;
                                    apuStack_a8[0] = (uint64_t *)0x0;
                                    ppuVar14 = apuStack_a8;
                                  }
                                  FUN_180631850(pcVar9,&unknown_var_3692_ptr,ppuVar14);
                                  *(int8_t *)(param_1 + 0x3ef0) = 1;
                                }
                              }
                              else if (iStack_d8 == 0x10) {
                                iVar2 = strcmp(puStack_e0,&unknown_var_5216_ptr);
                                if (iVar2 == 0) {
                                  FUN_180631960(pcVar9,&unknown_var_3692_ptr,param_1 + 0x3ea4);
                                }
                              }
                              else if (iStack_d8 == 0xc) {
                                iVar2 = strcmp(puStack_e0,&unknown_var_5200_ptr);
                                if (iVar2 == 0) {
                                  FUN_180631000(pcVar9,&unknown_var_3692_ptr,param_1 + 0x3ef0);
                                }
                              }
                              else {
                                if (iStack_d8 == 0x13) goto LAB_1801b2186;
                                if ((iStack_d8 == 0x11) &&
                                   (iVar2 = strcmp(puStack_e0,&unknown_var_5328_ptr), iVar2 == 0)) {
                                  FUN_180631000(pcVar9,&unknown_var_3692_ptr,param_1 + 0x314);
                                }
                              }
                            }
LAB_1801b209e:
                            pcVar16 = "property";
                            do {
                              pcVar8 = pcVar16;
                              pcVar16 = pcVar8 + 1;
                            } while (*pcVar16 != '\0');
                            pcVar9 = *(char **)(pcVar9 + 0x58);
                            if (pcVar9 != (char *)0x0) {
                              do {
                                pcVar16 = *(char **)pcVar9;
                                if (pcVar16 == (char *)0x0) {
                                  pcVar16 = (char *)0x180d48d24;
                                  pcVar10 = pcVar15;
                                }
                                else {
                                  pcVar10 = *(char **)(pcVar9 + 0x10);
                                }
                                if (pcVar10 == pcVar8 + -0x180a0bb17) {
                                  pcVar10 = pcVar10 + (int64_t)pcVar16;
                                  if (pcVar10 <= pcVar16) goto LAB_1801b1f31;
                                  lVar11 = (int64_t)&unknown_var_4600_ptr - (int64_t)pcVar16;
                                  while (*pcVar16 == pcVar16[lVar11]) {
                                    pcVar16 = pcVar16 + 1;
                                    if (pcVar10 <= pcVar16) goto LAB_1801b1f31;
                                  }
                                }
                                pcVar9 = *(char **)(pcVar9 + 0x58);
                                if (pcVar9 == (char *)0x0) break;
                              } while( true );
                            }
                          }
                          if (*(int *)(param_1 + 0x3e90) == 0) {
                            *(int32_t *)(param_1 + 0x3ea4) = 0x3f800000;
                            *(int32_t *)(param_1 + 0x3ea8) = 0x3f800000;
                            *(int32_t *)(param_1 + 0x3eac) = 0x3f800000;
                            *(int32_t *)(param_1 + 0x3eb0) = 0x3f800000;
                            *(int32_t *)(param_1 + 0x3e94) = 0x3f800000;
                            *(int32_t *)(param_1 + 0x3e98) = 0x3f800000;
                            *(int32_t *)(param_1 + 0x3e9c) = 0x3f800000;
                            *(int32_t *)(param_1 + 0x3ea0) = 0x3f800000;
                          }
                          pcStack_c0 = (char *)0x0;
                          uStack_b0 = uStack_b0 & 0xffffffff00000000;
                          puStack_c8 = &system_state_ptr;
LAB_1801b22be:
                          lVar11 = FUN_18005d4b0(puVar7,&unknown_var_5288_ptr,0);
                          if ((lVar11 != 0) &&
                             (puVar7 = (uint64_t *)FUN_18005d4b0(lVar11,&unknown_var_4600_ptr,0),
                             puVar7 != (uint64_t *)0x0)) {
LAB_1801b2300:
                            lVar11 = FUN_1800a02a0(puVar7,&system_data_3a84);
                            if (lVar11 != 0) {
                              lVar12 = 0x180d48d24;
                              if (*(int64_t *)(lVar11 + 8) != 0) {
                                lVar12 = *(int64_t *)(lVar11 + 8);
                              }
                              (**(code **)(puStack_e8 + 0x10))(&puStack_e8,lVar12);
                            }
                            if (iStack_d8 == 0xe) {
                              iVar2 = strcmp(puStack_e0,&unknown_var_5368_ptr);
                              if (iVar2 == 0) {
                                FUN_1806313c0(puVar7,&unknown_var_3692_ptr,param_1 + 0x3f38);
                              }
                              else {
                                iVar2 = strcmp(puStack_e0,&unknown_var_5352_ptr);
                                if (iVar2 == 0) {
                                  FUN_180631960(puVar7,&unknown_var_3692_ptr,param_1 + 0x3f3c);
                                }
                              }
                            }
                            pcVar16 = "property";
                            do {
                              pcVar8 = pcVar16;
                              pcVar16 = pcVar8 + 1;
                            } while (*pcVar16 != '\0');
                            puVar7 = (uint64_t *)puVar7[0xb];
                            if (puVar7 != (uint64_t *)0x0) {
                              do {
                                pcVar16 = (char *)*puVar7;
                                if (pcVar16 == (char *)0x0) {
                                  pcVar16 = (char *)0x180d48d24;
                                  pcVar9 = pcVar15;
                                }
                                else {
                                  pcVar9 = (char *)puVar7[2];
                                }
                                if (pcVar9 == pcVar8 + -0x180a0bb17) {
                                  pcVar9 = pcVar9 + (int64_t)pcVar16;
                                  if (pcVar9 <= pcVar16) goto LAB_1801b2300;
                                  lVar11 = (int64_t)&unknown_var_4600_ptr - (int64_t)pcVar16;
                                  while (*pcVar16 == pcVar16[lVar11]) {
                                    pcVar16 = pcVar16 + 1;
                                    if (pcVar9 <= pcVar16) goto LAB_1801b2300;
                                  }
                                }
                                puVar7 = (uint64_t *)puVar7[0xb];
                                if (puVar7 == (uint64_t *)0x0) break;
                              } while( true );
                            }
                          }
                          puStack_e8 = &system_data_buffer_ptr;
                          if (puStack_e0 == (int32_t *)0x0) {
                            return;
                          }
                    // WARNING: Subroutine does not return
                          FUN_18064e900();
                        }
                        lVar11 = (int64_t)&unknown_var_5096_ptr - (int64_t)pcVar16;
                        while (*pcVar16 == pcVar16[lVar11]) {
                          pcVar16 = pcVar16 + 1;
                          if (pcVar9 <= pcVar16) goto LAB_1801b1e66;
                        }
                      }
                      puVar13 = (uint64_t *)puVar13[0xb];
                    } while( true );
                  }
                  lVar11 = (int64_t)&unknown_var_4992_ptr - (int64_t)pcVar16;
                  while (*pcVar16 == pcVar16[lVar11]) {
                    pcVar16 = pcVar16 + 1;
                    if (pcVar9 <= pcVar16) goto LAB_1801b1b60;
                  }
                }
                puVar13 = (uint64_t *)puVar13[0xb];
              } while( true );
            }
            lVar11 = (int64_t)&unknown_var_4616_ptr - (int64_t)pcVar16;
            while (*pcVar16 == pcVar16[lVar11]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar9 <= pcVar16) goto LAB_1801b13b0;
            }
          }
          puVar7 = (uint64_t *)puVar7[0xb];
        } while( true );
      }
      lVar11 = (int64_t)&unknown_var_4572_ptr - (int64_t)pcVar16;
      while (*pcVar16 == pcVar16[lVar11]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar9 <= pcVar16) goto LAB_1801b0e50;
      }
    }
    puVar7 = (uint64_t *)puVar7[0xb];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






