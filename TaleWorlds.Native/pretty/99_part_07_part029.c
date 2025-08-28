#include "TaleWorlds.Native.Split.h"

// 99_part_07_part029.c - 1 个函数

// 函数: void FUN_1804b7440(int64_t param_1,int64_t param_2)
void FUN_1804b7440(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int32_t uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint uVar11;
  uint64_t *puVar12;
  int iVar13;
  uint64_t uVar14;
  char *pcVar15;
  char *pcVar16;
  int64_t lVar17;
  int iVar18;
  uint uStackX_18;
  uint64_t *puStackX_20;
  int64_t lStack_90;
  void *puStack_78;
  int64_t lStack_70;
  int32_t uStack_68;
  uint64_t uStack_60;
  void *puStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  
  pcVar15 = "constraints";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  puVar12 = *(uint64_t **)(param_2 + 0x30);
  if (puVar12 != (uint64_t *)0x0) {
    pcVar15 = (char *)0x0;
    do {
      pcVar6 = (char *)*puVar12;
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)0x180d48d24;
        pcVar5 = pcVar15;
      }
      else {
        pcVar5 = (char *)puVar12[2];
      }
      if (pcVar5 == pcVar16 + -0x180a2e7a7) {
        pcVar5 = pcVar5 + (int64_t)pcVar6;
        if (pcVar5 <= pcVar6) {
LAB_1804b74d8:
          pcVar16 = "constraint";
          do {
            pcVar6 = pcVar16;
            pcVar16 = pcVar6 + 1;
          } while (*pcVar16 != '\0');
          for (puVar8 = (uint64_t *)puVar12[6]; uVar11 = 0, puVar8 != (uint64_t *)0x0;
              puVar8 = (uint64_t *)puVar8[0xb]) {
            pcVar16 = (char *)*puVar8;
            if (pcVar16 == (char *)0x0) {
              pcVar16 = (char *)0x180d48d24;
              pcVar5 = pcVar15;
            }
            else {
              pcVar5 = (char *)puVar8[2];
            }
            if (pcVar5 == pcVar6 + -0x180a2e74f) {
              pcVar5 = pcVar5 + (int64_t)pcVar16;
              pcVar4 = pcVar15;
              if (pcVar5 <= pcVar16) {
LAB_1804b7550:
                do {
                  uVar11 = (int)pcVar4 + 1;
                  pcVar16 = "constraint";
                  do {
                    pcVar6 = pcVar16;
                    pcVar16 = pcVar6 + 1;
                  } while (*pcVar16 != '\0');
                  while( true ) {
                    do {
                      puVar8 = (uint64_t *)puVar8[0xb];
                      if (puVar8 == (uint64_t *)0x0) goto LAB_1804b75b6;
                      pcVar16 = (char *)*puVar8;
                      if (pcVar16 == (char *)0x0) {
                        pcVar16 = (char *)0x180d48d24;
                        pcVar5 = pcVar15;
                      }
                      else {
                        pcVar5 = (char *)puVar8[2];
                      }
                    } while (pcVar5 != pcVar6 + -0x180a2e74f);
                    pcVar5 = pcVar5 + (int64_t)pcVar16;
                    pcVar4 = (char *)(uint64_t)uVar11;
                    if (pcVar5 <= pcVar16) break;
                    lVar7 = (int64_t)&unknown_var_6992_ptr - (int64_t)pcVar16;
                    while (*pcVar16 == pcVar16[lVar7]) {
                      pcVar16 = pcVar16 + 1;
                      if (pcVar5 <= pcVar16) goto LAB_1804b7550;
                    }
                  }
                } while( true );
              }
              lVar7 = (int64_t)&unknown_var_6992_ptr - (int64_t)pcVar16;
              while (*pcVar16 == pcVar16[lVar7]) {
                pcVar16 = pcVar16 + 1;
                if (pcVar5 <= pcVar16) goto LAB_1804b7550;
              }
            }
          }
LAB_1804b75b6:
          puStack_78 = &system_data_buffer_ptr;
          uStack_60 = 0;
          lStack_70 = 0;
          uStack_68 = 0;
          puStack_58 = &system_data_buffer_ptr;
          uStack_40 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
          pcVar16 = "constraint";
          do {
            pcVar6 = pcVar16;
            pcVar16 = pcVar6 + 1;
          } while (*pcVar16 != '\0');
          puStackX_20 = (uint64_t *)puVar12[6];
          do {
            if (puStackX_20 == (uint64_t *)0x0) {
LAB_1804b7d50:
              uStack_50 = 0;
              uStack_40 = uStack_40 & 0xffffffff00000000;
              puStack_58 = &system_state_ptr;
              puStack_78 = &system_data_buffer_ptr;
              if (lStack_70 == 0) {
                return;
              }
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            pcVar16 = (char *)*puStackX_20;
            if (pcVar16 == (char *)0x0) {
              pcVar16 = (char *)0x180d48d24;
              pcVar5 = pcVar15;
            }
            else {
              pcVar5 = (char *)puStackX_20[2];
            }
            if (pcVar5 == pcVar6 + -0x180a2e74f) {
              pcVar5 = pcVar5 + (int64_t)pcVar16;
              if (pcVar5 <= pcVar16) {
LAB_1804b7656:
                plVar1 = (int64_t *)(param_1 + 0xa00);
                uVar14 = (uint64_t)(int)uVar11;
                uVar2 = (*(int64_t *)(param_1 + 0xa08) - *plVar1) / 0xa0c;
                if (uVar2 < uVar14) {
                  FUN_1804c0070(plVar1,uVar14 - uVar2);
                }
                else {
                  *(uint64_t *)(param_1 + 0xa08) = uVar14 * 0xa0c + *plVar1;
                }
                uStackX_18 = 0;
                if (0 < (int64_t)uVar14) {
                  lStack_90 = 0;
                  do {
                    pcVar6 = (char *)0x0;
                    pcVar16 = "proportional_negative_and_positive";
                    do {
                      pcVar5 = pcVar16;
                      pcVar16 = pcVar5 + 1;
                    } while (*pcVar16 != '\0');
                    puVar12 = (uint64_t *)puStackX_20[8];
                    puVar8 = puVar12;
LAB_1804b76f9:
                    if (puVar8 == (uint64_t *)0x0) {
                      FUN_180626f80(&unknown_var_7016_ptr);
                    }
                    else {
                      pcVar16 = (char *)*puVar8;
                      if (pcVar16 == (char *)0x0) {
                        pcVar16 = (char *)0x180d48d24;
                        pcVar4 = pcVar6;
                      }
                      else {
                        pcVar4 = (char *)puVar8[2];
                      }
                      if (pcVar4 != pcVar5 + -0x180a2e727) goto LAB_1804b7774;
                      pcVar4 = pcVar4 + (int64_t)pcVar16;
                      if (pcVar16 < pcVar4) {
                        lVar7 = (int64_t)&unknown_var_6952_ptr - (int64_t)pcVar16;
                        while (*pcVar16 == pcVar16[lVar7]) {
                          pcVar16 = pcVar16 + 1;
                          if (pcVar4 <= pcVar16) goto LAB_1804b7737;
                        }
                        goto LAB_1804b7774;
                      }
LAB_1804b7737:
                      lVar7 = *(int64_t *)(param_1 + 0xa00) + 0xa08 +
                              (int64_t)(int)pcVar15 * 0xa0c;
                      pcVar15 = "proportional_negative_and_positive";
                      do {
                        pcVar16 = pcVar15;
                        pcVar15 = pcVar16 + 1;
                      } while (*pcVar15 != '\0');
                      for (; pcVar15 = pcVar6, puVar12 != (uint64_t *)0x0;
                          puVar12 = (uint64_t *)puVar12[6]) {
                        pcVar15 = (char *)*puVar12;
                        if (pcVar15 == (char *)0x0) {
                          pcVar15 = (char *)0x180d48d24;
                          pcVar5 = pcVar6;
                        }
                        else {
                          pcVar5 = (char *)puVar12[2];
                        }
                        if (pcVar5 == pcVar16 + -0x180a2e727) {
                          pcVar5 = pcVar5 + (int64_t)pcVar15;
                          if (pcVar5 <= pcVar15) {
LAB_1804b77b0:
                            pcVar15 = (char *)0x180d48d24;
                            if ((char *)puVar12[1] != (char *)0x0) {
                              pcVar15 = (char *)puVar12[1];
                            }
                            break;
                          }
                          lVar9 = (int64_t)&unknown_var_6952_ptr - (int64_t)pcVar15;
                          while (*pcVar15 == pcVar15[lVar9]) {
                            pcVar15 = pcVar15 + 1;
                            if (pcVar5 <= pcVar15) goto LAB_1804b77b0;
                          }
                        }
                      }
                      if ((lVar7 != 0) && (pcVar15 != (char *)0x0)) {
                        FUN_18010cbc0(pcVar15,&system_data_6430,lVar7);
                      }
                      *(int32_t *)(lStack_90 * 0xa0c + 0xa04 + *plVar1) = 4;
                    }
                    pcVar15 = "term";
                    do {
                      pcVar16 = pcVar15;
                      pcVar15 = pcVar16 + 1;
                    } while (*pcVar15 != '\0');
                    for (puVar12 = (uint64_t *)puStackX_20[6]; puVar12 != (uint64_t *)0x0;
                        puVar12 = (uint64_t *)puVar12[0xb]) {
                      pcVar15 = (char *)*puVar12;
                      if (pcVar15 == (char *)0x0) {
                        pcVar15 = (char *)0x180d48d24;
                        pcVar5 = pcVar6;
                      }
                      else {
                        pcVar5 = (char *)puVar12[2];
                      }
                      if (pcVar5 == pcVar16 + -0x180a2e75b) {
                        pcVar5 = pcVar15 + (int64_t)pcVar5;
                        if (pcVar5 <= pcVar15) {
LAB_1804b786c:
                          iVar18 = 0;
LAB_1804b7870:
                          do {
                            iVar18 = iVar18 + 1;
                            pcVar15 = "term";
                            do {
                              pcVar16 = pcVar15;
                              pcVar15 = pcVar16 + 1;
                            } while (*pcVar15 != '\0');
                            while( true ) {
                              do {
                                puVar12 = (uint64_t *)puVar12[0xb];
                                if (puVar12 == (uint64_t *)0x0) goto LAB_1804b78e5;
                                pcVar15 = (char *)*puVar12;
                                if (pcVar15 == (char *)0x0) {
                                  pcVar6 = (char *)0x0;
                                  pcVar15 = (char *)0x180d48d24;
                                }
                                else {
                                  pcVar6 = (char *)puVar12[2];
                                }
                              } while (pcVar6 != pcVar16 + -0x180a2e75b);
                              pcVar6 = pcVar6 + (int64_t)pcVar15;
                              if (pcVar6 <= pcVar15) break;
                              lVar7 = (int64_t)&unknown_var_7004_ptr - (int64_t)pcVar15;
                              while (*pcVar15 == pcVar15[lVar7]) {
                                pcVar15 = pcVar15 + 1;
                                if (pcVar6 <= pcVar15) goto LAB_1804b7870;
                              }
                            }
                          } while( true );
                        }
                        lVar7 = (int64_t)&unknown_var_7004_ptr - (int64_t)pcVar15;
                        while (*pcVar15 == pcVar15[lVar7]) {
                          pcVar15 = pcVar15 + 1;
                          if (pcVar5 <= pcVar15) goto LAB_1804b786c;
                        }
                      }
                    }
                    iVar18 = 0;
LAB_1804b78e5:
                    iVar13 = 0x140;
                    if (iVar18 < 0x140) {
                      iVar13 = iVar18;
                    }
                    lVar7 = lStack_90 * 0xa0c;
                    *(int *)(lVar7 + *plVar1) = iVar13;
                    pcVar15 = "term";
                    do {
                      pcVar16 = pcVar15;
                      pcVar15 = pcVar16 + 1;
                    } while (*pcVar15 != '\0');
                    for (puVar12 = (uint64_t *)puStackX_20[6]; puVar12 != (uint64_t *)0x0;
                        puVar12 = (uint64_t *)puVar12[0xb]) {
                      pcVar15 = (char *)*puVar12;
                      if (pcVar15 == (char *)0x0) {
                        pcVar6 = (char *)0x0;
                        pcVar15 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar6 = (char *)puVar12[2];
                      }
                      if (pcVar6 == pcVar16 + -0x180a2e75b) {
                        pcVar6 = pcVar6 + (int64_t)pcVar15;
                        if (pcVar6 <= pcVar15) goto LAB_1804b7968;
                        lVar9 = (int64_t)&unknown_var_7004_ptr - (int64_t)pcVar15;
                        while (*pcVar15 == pcVar15[lVar9]) {
                          pcVar15 = pcVar15 + 1;
                          if (pcVar6 <= pcVar15) goto LAB_1804b7968;
                        }
                      }
                    }
                    puVar12 = (uint64_t *)0x0;
LAB_1804b7968:
                    iVar13 = 0;
                    lVar9 = 0;
                    if (0 < iVar18) {
                      do {
                        lVar10 = *plVar1;
                        lVar17 = (int64_t)(int)uStackX_18 * 0xa0c + 4;
                        if (iVar13 < *(int *)(lVar10 + lVar7)) {
                          lVar17 = lVar17 + lVar10 + (int64_t)iVar13 * 8;
                          pcVar15 = "coefficient";
                          do {
                            pcVar16 = pcVar15;
                            pcVar15 = pcVar16 + 1;
                          } while (*pcVar15 != '\0');
                          for (puVar8 = (uint64_t *)puVar12[8]; puVar8 != (uint64_t *)0x0;
                              puVar8 = (uint64_t *)puVar8[6]) {
                            pcVar15 = (char *)*puVar8;
                            if (pcVar15 == (char *)0x0) {
                              pcVar6 = (char *)0x0;
                              pcVar15 = (char *)0x180d48d24;
                            }
                            else {
                              pcVar6 = (char *)puVar8[2];
                            }
                            if (pcVar6 == pcVar16 + -0x180a2e80f) {
                              pcVar6 = pcVar6 + (int64_t)pcVar15;
                              if (pcVar6 <= pcVar15) {
LAB_1804b7a02:
                                lVar10 = 0x180d48d24;
                                if (puVar8[1] != 0) {
                                  lVar10 = puVar8[1];
                                }
                                goto LAB_1804b7a25;
                              }
                              lVar10 = (int64_t)&unknown_var_7184_ptr - (int64_t)pcVar15;
                              while (*pcVar15 == pcVar15[lVar10]) {
                                pcVar15 = pcVar15 + 1;
                                if (pcVar6 <= pcVar15) goto LAB_1804b7a02;
                              }
                            }
                          }
                          lVar10 = 0;
LAB_1804b7a25:
                          if ((lVar17 != 0) && (lVar10 != 0)) {
                            FUN_18010cbc0(lVar10,&system_data_6430,lVar17);
                          }
                          pcVar15 = "key_id";
                          do {
                            pcVar16 = pcVar15;
                            pcVar15 = pcVar16 + 1;
                          } while (*pcVar15 != '\0');
                          for (puVar8 = (uint64_t *)puVar12[8]; puVar8 != (uint64_t *)0x0;
                              puVar8 = (uint64_t *)puVar8[6]) {
                            pcVar15 = (char *)*puVar8;
                            if (pcVar15 == (char *)0x0) {
                              pcVar6 = (char *)0x0;
                              pcVar15 = (char *)0x180d48d24;
                            }
                            else {
                              pcVar6 = (char *)puVar8[2];
                            }
                            if (pcVar6 == pcVar16 + -0x180a2e807) {
                              pcVar6 = pcVar15 + (int64_t)pcVar6;
                              if (pcVar6 <= pcVar15) {
LAB_1804b7aa0:
                                lVar17 = 0x180d48d24;
                                if (puVar8[1] != 0) {
                                  lVar17 = puVar8[1];
                                }
                                (**(code **)(puStack_78 + 0x10))(&puStack_78,lVar17);
                                break;
                              }
                              lVar17 = (int64_t)&unknown_var_7176_ptr - (int64_t)pcVar15;
                              while (*pcVar15 == pcVar15[lVar17]) {
                                pcVar15 = pcVar15 + 1;
                                if (pcVar6 <= pcVar15) goto LAB_1804b7aa0;
                              }
                            }
                          }
                          uVar3 = FUN_1804b4dc0(param_1,&puStack_78);
                          *(int32_t *)(lVar7 + lVar9 * 8 + 8 + *plVar1) = uVar3;
                        }
                        else {
                          lVar17 = lVar17 + lVar10;
                          pcVar15 = "coefficient";
                          do {
                            pcVar16 = pcVar15;
                            pcVar15 = pcVar16 + 1;
                          } while (*pcVar15 != '\0');
                          for (puVar8 = (uint64_t *)puVar12[8]; puVar8 != (uint64_t *)0x0;
                              puVar8 = (uint64_t *)puVar8[6]) {
                            pcVar15 = (char *)*puVar8;
                            if (pcVar15 == (char *)0x0) {
                              pcVar6 = (char *)0x0;
                              pcVar15 = (char *)0x180d48d24;
                            }
                            else {
                              pcVar6 = (char *)puVar8[2];
                            }
                            if (pcVar6 == pcVar16 + -0x180a2e80f) {
                              pcVar6 = pcVar6 + (int64_t)pcVar15;
                              if (pcVar6 <= pcVar15) {
LAB_1804b7b40:
                                lVar10 = 0x180d48d24;
                                if (puVar8[1] != 0) {
                                  lVar10 = puVar8[1];
                                }
                                goto LAB_1804b7b63;
                              }
                              lVar10 = (int64_t)&unknown_var_7184_ptr - (int64_t)pcVar15;
                              while (*pcVar15 == pcVar15[lVar10]) {
                                pcVar15 = pcVar15 + 1;
                                if (pcVar6 <= pcVar15) goto LAB_1804b7b40;
                              }
                            }
                          }
                          lVar10 = 0;
LAB_1804b7b63:
                          if ((lVar17 != 0) && (lVar10 != 0)) {
                            FUN_18010cbc0(lVar10,&system_data_6430,lVar17);
                          }
                          pcVar15 = "key_id";
                          do {
                            pcVar16 = pcVar15;
                            pcVar15 = pcVar16 + 1;
                          } while (*pcVar15 != '\0');
                          for (puVar8 = (uint64_t *)puVar12[8]; puVar8 != (uint64_t *)0x0;
                              puVar8 = (uint64_t *)puVar8[6]) {
                            pcVar15 = (char *)*puVar8;
                            if (pcVar15 == (char *)0x0) {
                              pcVar6 = (char *)0x0;
                              pcVar15 = (char *)0x180d48d24;
                            }
                            else {
                              pcVar6 = (char *)puVar8[2];
                            }
                            if (pcVar6 == pcVar16 + -0x180a2e807) {
                              pcVar6 = pcVar6 + (int64_t)pcVar15;
                              if (pcVar6 <= pcVar15) {
LAB_1804b7be1:
                                lVar17 = 0x180d48d24;
                                if (puVar8[1] != 0) {
                                  lVar17 = puVar8[1];
                                }
                                (**(code **)(puStack_78 + 0x10))(&puStack_78,lVar17);
                                break;
                              }
                              lVar17 = (int64_t)&unknown_var_7176_ptr - (int64_t)pcVar15;
                              while (*pcVar15 == pcVar15[lVar17]) {
                                pcVar15 = pcVar15 + 1;
                                if (pcVar6 <= pcVar15) goto LAB_1804b7be1;
                              }
                            }
                          }
                          uVar3 = FUN_1804b4dc0(param_1,&puStack_78);
                          *(int32_t *)(lVar7 + 8 + *plVar1) = uVar3;
                        }
                        pcVar15 = "term";
                        do {
                          pcVar16 = pcVar15;
                          pcVar15 = pcVar16 + 1;
                        } while (*pcVar15 != '\0');
                        for (puVar12 = (uint64_t *)puVar12[0xb]; puVar12 != (uint64_t *)0x0;
                            puVar12 = (uint64_t *)puVar12[0xb]) {
                          pcVar15 = (char *)*puVar12;
                          if (pcVar15 == (char *)0x0) {
                            pcVar6 = (char *)0x0;
                            pcVar15 = (char *)0x180d48d24;
                          }
                          else {
                            pcVar6 = (char *)puVar12[2];
                          }
                          if (pcVar6 == pcVar16 + -0x180a2e75b) {
                            pcVar6 = pcVar6 + (int64_t)pcVar15;
                            if (pcVar6 <= pcVar15) goto LAB_1804b7c94;
                            lVar17 = (int64_t)&unknown_var_7004_ptr - (int64_t)pcVar15;
                            while (*pcVar15 == pcVar15[lVar17]) {
                              pcVar15 = pcVar15 + 1;
                              if (pcVar6 <= pcVar15) goto LAB_1804b7c94;
                            }
                          }
                        }
                        puVar12 = (uint64_t *)0x0;
LAB_1804b7c94:
                        iVar13 = iVar13 + 1;
                        lVar9 = lVar9 + 1;
                      } while (iVar13 < iVar18);
                    }
                    pcVar15 = "constraint";
                    do {
                      pcVar16 = pcVar15;
                      pcVar15 = pcVar16 + 1;
                    } while (*pcVar15 != '\0');
                    while (puStackX_20 = (uint64_t *)puStackX_20[0xb],
                          puStackX_20 != (uint64_t *)0x0) {
                      pcVar15 = (char *)*puStackX_20;
                      if (pcVar15 == (char *)0x0) {
                        pcVar6 = (char *)0x0;
                        pcVar15 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar6 = (char *)puStackX_20[2];
                      }
                      if (pcVar6 == pcVar16 + -0x180a2e74f) {
                        pcVar6 = pcVar6 + (int64_t)pcVar15;
                        if (pcVar6 <= pcVar15) goto LAB_1804b7d1e;
                        lVar7 = (int64_t)&unknown_var_6992_ptr - (int64_t)pcVar15;
                        while (*pcVar15 == pcVar15[lVar7]) {
                          pcVar15 = pcVar15 + 1;
                          if (pcVar6 <= pcVar15) goto LAB_1804b7d1e;
                        }
                      }
                    }
                    puStackX_20 = (uint64_t *)0x0;
LAB_1804b7d1e:
                    uStackX_18 = uStackX_18 + 1;
                    pcVar15 = (char *)(uint64_t)uStackX_18;
                    lStack_90 = lStack_90 + 1;
                  } while (lStack_90 < (int64_t)uVar14);
                }
                goto LAB_1804b7d50;
              }
              lVar7 = (int64_t)&unknown_var_6992_ptr - (int64_t)pcVar16;
              while (*pcVar16 == pcVar16[lVar7]) {
                pcVar16 = pcVar16 + 1;
                if (pcVar5 <= pcVar16) goto LAB_1804b7656;
              }
            }
            puStackX_20 = (uint64_t *)puStackX_20[0xb];
          } while( true );
        }
        lVar7 = (int64_t)&unknown_var_7080_ptr - (int64_t)pcVar6;
        while (*pcVar6 == pcVar6[lVar7]) {
          pcVar6 = pcVar6 + 1;
          if (pcVar5 <= pcVar6) goto LAB_1804b74d8;
        }
      }
      puVar12 = (uint64_t *)puVar12[0xb];
    } while (puVar12 != (uint64_t *)0x0);
  }
  return;
LAB_1804b7774:
  puVar8 = (uint64_t *)puVar8[6];
  goto LAB_1804b76f9;
}






