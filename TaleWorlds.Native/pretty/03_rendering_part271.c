#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part271.c - 1 个函数

// 函数: void FUN_1804186d0(uint64_t *param_1,longlong param_2)
void FUN_1804186d0(uint64_t *param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  code *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  longlong *plVar9;
  char *pcVar10;
  char *pcVar11;
  longlong **pplVar12;
  longlong lVar13;
  longlong lVar14;
  void *puVar15;
  longlong lVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  char *pcVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  char *pcVar22;
  int8_t auStack_548 [32];
  uint64_t uStack_528;
  uint64_t *puStack_520;
  int32_t auStack_518 [2];
  void *puStack_510;
  longlong lStack_508;
  int32_t uStack_500;
  ulonglong uStack_4f8;
  code *pcStack_4f0;
  longlong **pplStack_4e8;
  code *pcStack_4e0;
  int8_t auStack_4d8 [8];
  int32_t auStack_4d0 [2];
  uint64_t *puStack_4c8;
  uint64_t uStack_4c0;
  uint64_t uStack_4b8;
  void *puStack_4b0;
  uint64_t uStack_4a8;
  uint64_t uStack_4a0;
  int32_t uStack_498;
  int32_t uStack_494;
  int32_t uStack_490;
  int32_t uStack_48c;
  int32_t uStack_488;
  int32_t uStack_484;
  int32_t uStack_480;
  int32_t uStack_47c;
  longlong *plStack_478;
  longlong *plStack_470;
  longlong *plStack_468;
  longlong alStack_460 [128];
  longlong lStack_60;
  ulonglong uStack_58;
  
  uStack_4a0 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_548;
  auStack_4d0[0] = 0xf0;
  puStack_4c8 = param_1;
  FUN_180419360();
  pcVar19 = "interpolation_data";
  do {
    pcVar22 = pcVar19;
    pcVar19 = pcVar22 + 1;
  } while (*pcVar19 != '\0');
  puVar17 = *(uint64_t **)(param_2 + 0x30);
  uStack_4c0 = (longlong **)CONCAT44(uStack_4c0._4_4_,(int32_t)uStack_4c0);
  if (puVar17 != (uint64_t *)0x0) {
    pcVar19 = (char *)0x0;
    do {
      pcVar10 = (char *)*puVar17;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x180d48d24;
        pcVar8 = pcVar19;
      }
      else {
        pcVar8 = (char *)puVar17[2];
      }
      if (pcVar8 == pcVar22 + -0x180a27b7f) {
        pcVar8 = pcVar8 + (longlong)pcVar10;
        if (pcVar8 <= pcVar10) {
LAB_180418790:
          pcVar22 = "version";
          do {
            pcVar10 = pcVar22;
            pcVar22 = pcVar10 + 1;
          } while (*pcVar22 != '\0');
          puVar20 = (uint64_t *)puVar17[8];
          do {
            if (puVar20 == (uint64_t *)0x0) {
              pcVar22 = "interpolation_element";
              do {
                pcVar10 = pcVar22;
                pcVar22 = pcVar10 + 1;
              } while (*pcVar22 != '\0');
              for (puVar17 = (uint64_t *)puVar17[6];
                  uStack_4c0 = (longlong **)CONCAT44(uStack_4c0._4_4_,(int32_t)uStack_4c0),
                  puVar17 != (uint64_t *)0x0; puVar17 = (uint64_t *)puVar17[0xb]) {
                pcVar22 = (char *)*puVar17;
                if (pcVar22 == (char *)0x0) {
                  pcVar22 = (char *)0x180d48d24;
                  pcVar8 = pcVar19;
                }
                else {
                  pcVar8 = (char *)puVar17[2];
                }
                if (pcVar8 == pcVar10 + -0x180a27b97) {
                  pcVar8 = pcVar8 + (longlong)pcVar22;
                  if (pcVar8 <= pcVar22) {
LAB_180418fe0:
                    do {
                      puStack_510 = &unknown_var_3456_ptr;
                      uStack_4f8 = 0;
                      lStack_508 = 0;
                      uStack_500 = 0;
                      pcVar19 = "name";
                      do {
                        pcVar22 = pcVar19;
                        pcVar19 = pcVar22 + 1;
                      } while (*pcVar19 != '\0');
                      for (puVar20 = (uint64_t *)puVar17[8]; puVar20 != (uint64_t *)0x0;
                          puVar20 = (uint64_t *)puVar20[6]) {
                        pcVar19 = (char *)*puVar20;
                        if (pcVar19 == (char *)0x0) {
                          pcVar19 = (char *)0x180d48d24;
                          pcVar10 = (char *)0x0;
                        }
                        else {
                          pcVar10 = (char *)puVar20[2];
                        }
                        if (pcVar10 == pcVar22 + -0x180a03a83) {
                          pcVar10 = pcVar10 + (longlong)pcVar19;
                          if (pcVar10 <= pcVar19) {
LAB_180419067:
                            lVar14 = 0x180d48d24;
                            if (puVar20[1] != 0) {
                              lVar14 = puVar20[1];
                            }
                            FUN_180627c50(&puStack_510,lVar14);
                            break;
                          }
                          lVar14 = (longlong)&system_data_3a84 - (longlong)pcVar19;
                          while (*pcVar19 == pcVar19[lVar14]) {
                            pcVar19 = pcVar19 + 1;
                            if (pcVar10 <= pcVar19) goto LAB_180419067;
                          }
                        }
                      }
                      puVar20 = puStack_4c8;
                      FUN_1804182d0(puStack_4c8,&puStack_510);
                      pcVar19 = "key_frame";
                      do {
                        pcVar22 = pcVar19;
                        pcVar19 = pcVar22 + 1;
                      } while (*pcVar19 != '\0');
                      for (puVar18 = (uint64_t *)puVar17[6]; puVar18 != (uint64_t *)0x0;
                          puVar18 = (uint64_t *)puVar18[0xb]) {
                        pcVar19 = (char *)*puVar18;
                        if (pcVar19 == (char *)0x0) {
                          pcVar10 = (char *)0x0;
                          pcVar19 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar10 = (char *)puVar18[2];
                        }
                        if (pcVar10 == pcVar22 + -0x180a27baf) {
                          pcVar10 = pcVar10 + (longlong)pcVar19;
                          if (pcVar10 <= pcVar19) {
LAB_180419117:
                            do {
                              pplStack_4e8 = (longlong **)0x0;
                              pcVar19 = "frame";
                              do {
                                pcVar22 = pcVar19;
                                pcVar19 = pcVar22 + 1;
                              } while (*pcVar19 != '\0');
                              puVar21 = (uint64_t *)puVar18[8];
LAB_180419133:
                              if (puVar21 != (uint64_t *)0x0) {
                                pcVar19 = (char *)*puVar21;
                                if (pcVar19 == (char *)0x0) {
                                  pcVar10 = (char *)0x0;
                                  pcVar19 = (char *)0x180d48d24;
                                }
                                else {
                                  pcVar10 = (char *)puVar21[2];
                                }
                                if (pcVar10 != pcVar22 + -0x180a015a7) goto LAB_180419203;
                                pcVar10 = pcVar10 + (longlong)pcVar19;
                                if (pcVar19 < pcVar10) {
                                  lVar14 = (longlong)&unknown_var_2248_ptr - (longlong)pcVar19;
                                  while (*pcVar19 == pcVar19[lVar14]) {
                                    pcVar19 = pcVar19 + 1;
                                    if (pcVar10 <= pcVar19) goto LAB_180419184;
                                  }
                                  goto LAB_180419203;
                                }
LAB_180419184:
                                pcVar19 = (char *)0x180d48d24;
                                if ((char *)puVar21[1] != (char *)0x0) {
                                  pcVar19 = (char *)puVar21[1];
                                }
                                uVar6 = 0xffffffffffffffff;
                                do {
                                  uVar6 = uVar6 + 1;
                                } while (pcVar19[uVar6] != '\0');
                                if (((uVar6 < 3) || (*pcVar19 != '0')) ||
                                   (puVar15 = &unknown_var_5412_ptr, (pcVar19[1] + 0xa8U & 0xdf) != 0)) {
                                  puVar15 = &unknown_var_2208_ptr;
                                }
                                FUN_18010cbc0(pcVar19,puVar15,auStack_518);
                              }
                              pcVar19 = "value";
                              do {
                                pcVar22 = pcVar19;
                                pcVar19 = pcVar22 + 1;
                              } while (*pcVar19 != '\0');
                              for (puVar21 = (uint64_t *)puVar18[8]; puVar21 != (uint64_t *)0x0;
                                  puVar21 = (uint64_t *)puVar21[6]) {
                                pcVar19 = (char *)*puVar21;
                                if (pcVar19 == (char *)0x0) {
                                  pcVar10 = (char *)0x0;
                                  pcVar19 = (char *)0x180d48d24;
                                }
                                else {
                                  pcVar10 = (char *)puVar21[2];
                                }
                                if (pcVar10 == pcVar22 + -0x180a0696b) {
                                  pcVar10 = pcVar10 + (longlong)pcVar19;
                                  if (pcVar10 <= pcVar19) {
LAB_180419244:
                                    lVar14 = 0x180d48d24;
                                    if (puVar21[1] != 0) {
                                      lVar14 = puVar21[1];
                                    }
                                    FUN_18010cbc0(lVar14,&system_data_6430,&pcStack_4f0);
                                    break;
                                  }
                                  lVar14 = (longlong)&unknown_var_3692_ptr - (longlong)pcVar19;
                                  while (*pcVar19 == pcVar19[lVar14]) {
                                    pcVar19 = pcVar19 + 1;
                                    if (pcVar10 <= pcVar19) goto LAB_180419244;
                                  }
                                }
                              }
                              FUN_180631850(puVar18,&unknown_var_5264_ptr,&pplStack_4e8);
                              pplVar12 = pplStack_4e8;
                              uVar1 = auStack_518[0];
                              uVar2 = pcStack_4f0._0_4_;
                              plVar9 = (longlong *)FUN_18041adc0(puVar20 + 1,&puStack_510);
                              uStack_528 = CONCAT71(uStack_528._1_7_,1);
                              (**(code **)(*plVar9 + 8))(plVar9,uVar1,uVar2,pplVar12);
                              puVar18 = (uint64_t *)puVar18[0xb];
                              if (puVar18 == (uint64_t *)0x0) goto LAB_1804192cd;
                            } while( true );
                          }
                          lVar14 = (longlong)&unknown_var_9440_ptr - (longlong)pcVar19;
                          while (*pcVar19 == pcVar19[lVar14]) {
                            pcVar19 = pcVar19 + 1;
                            if (pcVar10 <= pcVar19) goto LAB_180419117;
                          }
                        }
                      }
LAB_1804192cd:
                      puVar17 = (uint64_t *)puVar17[0xb];
                      puStack_510 = &unknown_var_3456_ptr;
                      if (lStack_508 != 0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900();
                      }
                      lStack_508 = 0;
                      uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
                      puStack_510 = &unknown_var_720_ptr;
                      uStack_4c0 = (longlong **)CONCAT44(uStack_4c0._4_4_,(int32_t)uStack_4c0);
                    } while (puVar17 != (uint64_t *)0x0);
                    break;
                  }
                  lVar14 = (longlong)&unknown_var_9416_ptr - (longlong)pcVar22;
                  while (*pcVar22 == pcVar22[lVar14]) {
                    pcVar22 = pcVar22 + 1;
                    if (pcVar8 <= pcVar22) goto LAB_180418fe0;
                  }
                }
              }
              goto LAB_18041931c;
            }
            pcVar22 = (char *)*puVar20;
            if (pcVar22 == (char *)0x0) {
              pcVar22 = (char *)0x180d48d24;
              pcVar8 = pcVar19;
            }
            else {
              pcVar8 = (char *)puVar20[2];
            }
            if (pcVar8 == pcVar10 + -0x180a015af) {
              pcVar8 = pcVar8 + (longlong)pcVar22;
              if (pcVar8 <= pcVar22) {
LAB_180418814:
                pcVar22 = (char *)0x180d48d24;
                if ((char *)puVar20[1] != (char *)0x0) {
                  pcVar22 = (char *)puVar20[1];
                }
                uVar6 = 0xffffffffffffffff;
                do {
                  uVar6 = uVar6 + 1;
                } while (pcVar22[uVar6] != '\0');
                if (((uVar6 < 3) || (*pcVar22 != '0')) ||
                   (puVar15 = &unknown_var_5412_ptr, (pcVar22[1] + 0xa8U & 0xdf) != 0)) {
                  puVar15 = &unknown_var_2208_ptr;
                }
                FUN_18010cbc0(pcVar22,puVar15,auStack_4d8);
                pcVar22 = "interpolation_element";
                do {
                  pcVar10 = pcVar22;
                  pcVar22 = pcVar10 + 1;
                } while (*pcVar22 != '\0');
                for (pcVar22 = (char *)puVar17[6]; pcVar8 = pcVar19, pcVar22 != (char *)0x0;
                    pcVar22 = *(char **)(pcVar22 + 0x58)) {
                  pcVar11 = *(char **)pcVar22;
                  if (pcVar11 == (char *)0x0) {
                    pcVar11 = (char *)0x180d48d24;
                    pcVar7 = pcVar19;
                  }
                  else {
                    pcVar7 = *(char **)(pcVar22 + 0x10);
                  }
                  if (pcVar7 == pcVar10 + -0x180a27b97) {
                    pcVar7 = pcVar11 + (longlong)pcVar7;
                    pcVar8 = pcVar22;
                    if (pcVar7 <= pcVar11) break;
                    lVar14 = (longlong)&unknown_var_9416_ptr - (longlong)pcVar11;
                    while (*pcVar11 == pcVar11[lVar14]) {
                      pcVar11 = pcVar11 + 1;
                      if (pcVar7 <= pcVar11) goto LAB_1804188d6;
                    }
                  }
                }
LAB_1804188d6:
                pplVar12 = &plStack_478;
                lVar14 = 8;
                plVar9 = alStack_460;
                do {
                  plVar4 = pplVar12[1];
                  *plVar9 = (longlong)*pplVar12;
                  plVar9[1] = (longlong)plVar4;
                  plVar4 = pplVar12[3];
                  plVar9[2] = (longlong)pplVar12[2];
                  plVar9[3] = (longlong)plVar4;
                  plVar4 = pplVar12[5];
                  plVar9[4] = (longlong)pplVar12[4];
                  plVar9[5] = (longlong)plVar4;
                  plVar4 = pplVar12[7];
                  plVar9[6] = (longlong)pplVar12[6];
                  plVar9[7] = (longlong)plVar4;
                  plVar4 = pplVar12[9];
                  plVar9[8] = (longlong)pplVar12[8];
                  plVar9[9] = (longlong)plVar4;
                  plVar4 = pplVar12[0xb];
                  plVar9[10] = (longlong)pplVar12[10];
                  plVar9[0xb] = (longlong)plVar4;
                  uVar1 = *(int32_t *)((longlong)pplVar12 + 100);
                  uVar2 = *(int32_t *)(pplVar12 + 0xd);
                  uVar3 = *(int32_t *)((longlong)pplVar12 + 0x6c);
                  *(int32_t *)(plVar9 + 0xc) = *(int32_t *)(pplVar12 + 0xc);
                  *(int32_t *)((longlong)plVar9 + 100) = uVar1;
                  *(int32_t *)(plVar9 + 0xd) = uVar2;
                  *(int32_t *)((longlong)plVar9 + 0x6c) = uVar3;
                  plVar4 = pplVar12[0xf];
                  plVar9[0xe] = (longlong)pplVar12[0xe];
                  plVar9[0xf] = (longlong)plVar4;
                  pplVar12 = pplVar12 + 0x10;
                  lVar14 = lVar14 + -1;
                  plVar9 = plVar9 + 0x10;
                } while (lVar14 != 0);
                lStack_60 = 0x400;
                plStack_478 = alStack_460;
                plStack_470 = alStack_460;
                plStack_468 = &lStack_60;
                do {
                  if (pcVar8 == (char *)0x0) {
                    puStack_4c8 = &uStack_4c0;
                    pplStack_4e8 = &plStack_478;
                    pcStack_4e0 = (code *)auStack_4d0;
                    puStack_4b0 = &unknown_var_7152_ptr;
                    uStack_4a8 = FUN_18041b4d0;
                    puStack_520 = &uStack_4c0;
                    uStack_528 = 0xffffffffffffffff;
                    uStack_4b8 = pcStack_4e0;
                    uStack_4c0 = pplStack_4e8;
                    FUN_18015b810(puStack_520,0,(longlong)plStack_470 - (longlong)plStack_478 >> 3,1
                                 );
                    goto LAB_18041931c;
                  }
                  puStack_510 = &unknown_var_3456_ptr;
                  uStack_4f8 = 0;
                  lStack_508 = 0;
                  uStack_500 = 0;
                  pcVar19 = "name";
                  do {
                    pcVar22 = pcVar19;
                    pcVar19 = pcVar22 + 1;
                  } while (*pcVar19 != '\0');
                  for (puVar17 = *(uint64_t **)(pcVar8 + 0x40); puVar17 != (uint64_t *)0x0;
                      puVar17 = (uint64_t *)puVar17[6]) {
                    pcVar19 = (char *)*puVar17;
                    if (pcVar19 == (char *)0x0) {
                      pcVar10 = (char *)0x0;
                      pcVar19 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar10 = (char *)puVar17[2];
                    }
                    if (pcVar10 == pcVar22 + -0x180a03a83) {
                      pcVar10 = pcVar19 + (longlong)pcVar10;
                      if (pcVar10 <= pcVar19) {
LAB_180418a30:
                        lVar14 = 0x180d48d24;
                        if (puVar17[1] != 0) {
                          lVar14 = puVar17[1];
                        }
                        FUN_180627c50(&puStack_510,lVar14);
                        break;
                      }
                      lVar14 = (longlong)&system_data_3a84 - (longlong)pcVar19;
                      while (*pcVar19 == pcVar19[lVar14]) {
                        pcVar19 = pcVar19 + 1;
                        if (pcVar10 <= pcVar19) goto LAB_180418a30;
                      }
                    }
                  }
                  FUN_1804182d0(param_1,&puStack_510);
                  pcVar19 = "key_frame";
                  do {
                    pcVar22 = pcVar19;
                    pcVar19 = pcVar22 + 1;
                  } while (*pcVar19 != '\0');
                  for (puVar17 = *(uint64_t **)(pcVar8 + 0x30); puVar17 != (uint64_t *)0x0;
                      puVar17 = (uint64_t *)puVar17[0xb]) {
                    pcVar19 = (char *)*puVar17;
                    if (pcVar19 == (char *)0x0) {
                      pcVar10 = (char *)0x0;
                      pcVar19 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar10 = (char *)puVar17[2];
                    }
                    if (pcVar10 == pcVar22 + -0x180a27baf) {
                      pcVar10 = pcVar19 + (longlong)pcVar10;
                      if (pcVar10 <= pcVar19) goto LAB_180418ace;
                      lVar14 = (longlong)&unknown_var_9440_ptr - (longlong)pcVar19;
                      while (*pcVar19 == pcVar19[lVar14]) {
                        pcVar19 = pcVar19 + 1;
                        if (pcVar10 <= pcVar19) goto LAB_180418ace;
                      }
                    }
                  }
                  puVar17 = (uint64_t *)0x0;
LAB_180418ace:
                  if (puVar17 != (uint64_t *)0x0) {
                    do {
                      pcStack_4f0 = (code *)0x0;
                      pcVar19 = "frame";
                      do {
                        pcVar22 = pcVar19;
                        pcVar19 = pcVar22 + 1;
                      } while (*pcVar19 != '\0');
                      puVar20 = (uint64_t *)puVar17[8];
LAB_180418b00:
                      if (puVar20 != (uint64_t *)0x0) {
                        pcVar19 = (char *)*puVar20;
                        if (pcVar19 == (char *)0x0) {
                          pcVar10 = (char *)0x0;
                          pcVar19 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar10 = (char *)puVar20[2];
                        }
                        if (pcVar10 != pcVar22 + -0x180a015a7) goto LAB_180418bd3;
                        pcVar10 = pcVar10 + (longlong)pcVar19;
                        if (pcVar19 < pcVar10) {
                          lVar14 = (longlong)&unknown_var_2248_ptr - (longlong)pcVar19;
                          while (*pcVar19 == pcVar19[lVar14]) {
                            pcVar19 = pcVar19 + 1;
                            if (pcVar10 <= pcVar19) goto LAB_180418b54;
                          }
                          goto LAB_180418bd3;
                        }
LAB_180418b54:
                        pcVar19 = (char *)0x180d48d24;
                        if ((char *)puVar20[1] != (char *)0x0) {
                          pcVar19 = (char *)puVar20[1];
                        }
                        uVar6 = 0xffffffffffffffff;
                        do {
                          uVar6 = uVar6 + 1;
                        } while (pcVar19[uVar6] != '\0');
                        if (((uVar6 < 3) || (*pcVar19 != '0')) ||
                           (puVar15 = &unknown_var_5412_ptr, (pcVar19[1] + 0xa8U & 0xdf) != 0)) {
                          puVar15 = &unknown_var_2208_ptr;
                        }
                        FUN_18010cbc0(pcVar19,puVar15,auStack_518);
                      }
                      pcVar19 = "value";
                      do {
                        pcVar22 = pcVar19;
                        pcVar19 = pcVar22 + 1;
                      } while (*pcVar19 != '\0');
                      for (puVar20 = (uint64_t *)puVar17[8]; puVar20 != (uint64_t *)0x0;
                          puVar20 = (uint64_t *)puVar20[6]) {
                        pcVar19 = (char *)*puVar20;
                        if (pcVar19 == (char *)0x0) {
                          pcVar10 = (char *)0x0;
                          pcVar19 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar10 = (char *)puVar20[2];
                        }
                        if (pcVar10 == pcVar22 + -0x180a0696b) {
                          pcVar10 = pcVar10 + (longlong)pcVar19;
                          if (pcVar10 <= pcVar19) {
LAB_180418c14:
                            lVar14 = 0x180d48d24;
                            if (puVar20[1] != 0) {
                              lVar14 = puVar20[1];
                            }
                            FUN_18010cbc0(lVar14,&system_data_6430,&pplStack_4e8);
                            break;
                          }
                          lVar14 = (longlong)&unknown_var_3692_ptr - (longlong)pcVar19;
                          while (*pcVar19 == pcVar19[lVar14]) {
                            pcVar19 = pcVar19 + 1;
                            if (pcVar10 <= pcVar19) goto LAB_180418c14;
                          }
                        }
                      }
                      FUN_180631850(puVar17,&unknown_var_5264_ptr,&pcStack_4f0);
                      uStack_4c0._0_4_ = auStack_518[0];
                      uStack_4c0._4_4_ = pplStack_4e8._0_4_;
                      uStack_4b8 = pcStack_4f0;
                      lVar14 = puVar17[0xb];
                      pcVar19 = "frame";
                      do {
                        pcVar22 = pcVar19;
                        pcVar19 = pcVar22 + 1;
                      } while (*pcVar19 != '\0');
                      for (puVar17 = *(uint64_t **)(lVar14 + 0x40); puVar17 != (uint64_t *)0x0;
                          puVar17 = (uint64_t *)puVar17[6]) {
                        pcVar19 = (char *)*puVar17;
                        if (pcVar19 == (char *)0x0) {
                          pcVar10 = (char *)0x0;
                          pcVar19 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar10 = (char *)puVar17[2];
                        }
                        if (pcVar10 == pcVar22 + -0x180a015a7) {
                          pcVar10 = pcVar10 + (longlong)pcVar19;
                          if (pcVar10 <= pcVar19) {
LAB_180418cd5:
                            pcVar19 = (char *)0x180d48d24;
                            if ((char *)puVar17[1] != (char *)0x0) {
                              pcVar19 = (char *)puVar17[1];
                            }
                            uVar6 = 0xffffffffffffffff;
                            do {
                              uVar6 = uVar6 + 1;
                            } while (pcVar19[uVar6] != '\0');
                            if (((uVar6 < 3) || (*pcVar19 != '0')) ||
                               (puVar15 = &unknown_var_5412_ptr, (pcVar19[1] + 0xa8U & 0xdf) != 0)) {
                              puVar15 = &unknown_var_2208_ptr;
                            }
                            FUN_18010cbc0(pplStack_4e8._0_4_,puVar15,auStack_518);
                            break;
                          }
                          lVar16 = (longlong)&unknown_var_2248_ptr - (longlong)pcVar19;
                          while (*pcVar19 == pcVar19[lVar16]) {
                            pcVar19 = pcVar19 + 1;
                            if (pcVar10 <= pcVar19) goto LAB_180418cd5;
                          }
                        }
                      }
                      lVar16 = FUN_1800a02a0(lVar14,&unknown_var_3692_ptr);
                      if (lVar16 != 0) {
                        lVar13 = 0x180d48d24;
                        if (*(longlong *)(lVar16 + 8) != 0) {
                          lVar13 = *(longlong *)(lVar16 + 8);
                        }
                        FUN_18010cbc0(lVar13,&system_data_6430,&pplStack_4e8);
                      }
                      FUN_180631850(lVar14,&unknown_var_5264_ptr,&pcStack_4f0);
                      puStack_4b0 = (void *)CONCAT44(puStack_4b0._4_4_,auStack_518[0]);
                      uStack_4a8 = pcStack_4f0;
                      pcVar5 = uStack_4a8;
                      uStack_498 = (int32_t)uStack_4c0;
                      uStack_494 = uStack_4c0._4_4_;
                      uStack_490 = (int32_t)uStack_4b8;
                      uStack_48c = uStack_4b8._4_4_;
                      uStack_4a8._0_4_ = SUB84(pcStack_4f0,0);
                      uStack_4a8._4_4_ = (int32_t)((ulonglong)pcStack_4f0 >> 0x20);
                      uStack_488 = auStack_518[0];
                      uStack_484 = pplStack_4e8._0_4_;
                      uStack_480 = (int32_t)uStack_4a8;
                      uStack_47c = uStack_4a8._4_4_;
                      uStack_4a8 = pcVar5;
                      lVar16 = FUN_18041adc0(param_1 + 1,&puStack_510);
                      FUN_1802b6e50(lVar16 + 8,&uStack_498);
                      puVar17 = *(uint64_t **)(lVar14 + 0x58);
                      if (puVar17 == (uint64_t *)0x0) break;
                    } while( true );
                  }
                  lVar14 = FUN_18041adc0(param_1 + 1,&puStack_510);
                  if (plStack_470 < plStack_468) {
                    *plStack_470 = lVar14;
                    plVar9 = plStack_470;
                  }
                  else {
                    lVar16 = (longlong)plStack_470 - (longlong)plStack_478 >> 3;
                    if (lVar16 == 0) {
                      lVar16 = 1;
LAB_180418e21:
                      plVar9 = (longlong *)((longlong)alStack_460 + lStack_60);
                      lStack_60 = lStack_60 + lVar16 * 8;
                    }
                    else {
                      lVar16 = lVar16 * 2;
                      if (lVar16 != 0) goto LAB_180418e21;
                      plVar9 = (longlong *)0x0;
                    }
                    if (plStack_478 != plStack_470) {
                    // WARNING: Subroutine does not return
                      memmove(plVar9,plStack_478);
                    }
                    *plVar9 = lVar14;
                    plStack_468 = plVar9 + lVar16;
                    plStack_478 = plVar9;
                  }
                  plStack_470 = plVar9 + 1;
                  pcVar8 = *(char **)(pcVar8 + 0x58);
                  puStack_510 = &unknown_var_3456_ptr;
                  if (lStack_508 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  lStack_508 = 0;
                  uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
                  puStack_510 = &unknown_var_720_ptr;
                  param_1 = puStack_4c8;
                } while( true );
              }
              lVar14 = (longlong)&unknown_var_2256_ptr - (longlong)pcVar22;
              while (*pcVar22 == pcVar22[lVar14]) {
                pcVar22 = pcVar22 + 1;
                if (pcVar8 <= pcVar22) goto LAB_180418814;
              }
            }
            puVar20 = (uint64_t *)puVar20[6];
          } while( true );
        }
        lVar14 = (longlong)&unknown_var_9392_ptr - (longlong)pcVar10;
        while (*pcVar10 == pcVar10[lVar14]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar8 <= pcVar10) goto LAB_180418790;
        }
      }
      puVar17 = (uint64_t *)puVar17[0xb];
      uStack_4c0 = (longlong **)CONCAT44(uStack_4c0._4_4_,(int32_t)uStack_4c0);
    } while (puVar17 != (uint64_t *)0x0);
  }
LAB_18041931c:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_548);
LAB_180419203:
  puVar21 = (uint64_t *)puVar21[6];
  goto LAB_180419133;
LAB_180418bd3:
  puVar20 = (uint64_t *)puVar20[6];
  goto LAB_180418b00;
}





