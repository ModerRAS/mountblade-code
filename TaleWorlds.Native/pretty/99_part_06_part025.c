#include "TaleWorlds.Native.Split.h"

// 99_part_06_part025.c - 1 个函数

// 函数: void FUN_1803bcdd0(longlong param_1,longlong param_2)
void FUN_1803bcdd0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  void *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  void *puVar9;
  uint64_t *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  ulonglong uVar13;
  uint uVar14;
  void *puVar15;
  char *pcVar16;
  char *pcVar17;
  int32_t uVar18;
  char *pcVar19;
  uint uVar20;
  ulonglong uVar21;
  int aiStackX_8 [2];
  uint64_t uVar22;
  void *puStack_70;
  char *pcStack_68;
  uint uStack_60;
  ulonglong uStack_58;
  void *puStack_50;
  void *puStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
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
      pcVar6 = pcVar6 + (longlong)pcVar16;
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
            pcVar7 = pcVar7 + (longlong)pcVar6;
            pcVar12 = pcVar19;
            if (pcVar7 <= pcVar6) {
LAB_1803bcf00:
              do {
                puStack_50 = &unknown_var_3456_ptr;
                uStack_38 = 0;
                puStack_48 = (void *)0x0;
                uStack_40 = uStack_40 & 0xffffffff00000000;
                puStack_70 = &unknown_var_3456_ptr;
                uStack_58 = 0;
                pcStack_68 = (char *)0x0;
                uStack_60 = 0;
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
                    pcVar7 = pcVar17 + (longlong)pcVar7;
                    if (pcVar7 <= pcVar17) {
LAB_1803bcf95:
                      lVar8 = 0x180d48d24;
                      if (puVar10[1] != 0) {
                        lVar8 = puVar10[1];
                      }
                      FUN_180627c50(&puStack_50,lVar8,pcVar7,puVar10,uVar22);
                      break;
                    }
                    lVar8 = (longlong)&system_flag_3a84 - (longlong)pcVar17;
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
                    pcVar7 = pcVar7 + (longlong)pcVar17;
                    if (pcVar7 <= pcVar17) {
LAB_1803bd024:
                      lVar8 = 0x180d48d24;
                      if (puVar10[1] != 0) {
                        lVar8 = puVar10[1];
                      }
                      (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar8);
                      break;
                    }
                    lVar8 = (longlong)&unknown_var_3692_ptr - (longlong)pcVar17;
                    while (*pcVar17 == pcVar17[lVar8]) {
                      pcVar17 = pcVar17 + 1;
                      if (pcVar7 <= pcVar17) goto LAB_1803bd024;
                    }
                  }
                }
                puVar3 = puStack_48;
                pcVar17 = pcVar19;
                pcVar6 = pcVar19;
                if (uStack_60 != 0) {
                  do {
                    if ((byte)(pcVar17[(longlong)pcStack_68] + 0xbfU) < 0x1a) {
                      pcVar17[(longlong)pcStack_68] = pcVar17[(longlong)pcStack_68] + ' ';
                    }
                    uVar14 = (int)pcVar6 + 1;
                    pcVar6 = (char *)(ulonglong)uVar14;
                    pcVar17 = pcVar17 + 1;
                  } while (uVar14 < uStack_60);
                }
                uVar14 = (uint)pcVar12;
                pcVar17 = pcVar19;
                if ((int)uStack_40 == 3) {
                  do {
                    pcVar6 = pcVar17 + 1;
                    if (pcVar17[(longlong)puStack_48] != pcVar17[0x180a23600]) goto LAB_1803bd11d;
                    pcVar17 = pcVar6;
                  } while (pcVar6 != (char *)0x4);
                  pcVar17 = "";
                  if (pcStack_68 != (char *)0x0) {
                    pcVar17 = pcStack_68;
                  }
                  FUN_18010cbc0(pcVar17,&unknown_var_4576_ptr,aiStackX_8);
                  pcVar12 = (char *)(ulonglong)((uVar14 | 0xf0) ^ 0xf0 | aiStackX_8[0] << 4);
                }
                else if ((int)uStack_40 == 6) {
                  do {
                    pcVar6 = pcVar17 + 1;
                    if (pcVar17[(longlong)puStack_48] != pcVar17[0x180a235f8]) goto LAB_1803bd11d;
                    pcVar17 = pcVar6;
                  } while (pcVar6 != (char *)0x7);
                  pcVar12 = (char *)(ulonglong)(uVar14 | 0x400);
                }
                else {
LAB_1803bd11d:
                  pcVar17 = pcVar19;
                  if (uStack_60 == 4) {
                    do {
                      pcVar6 = pcVar17 + 1;
                      if (pcStack_68[(longlong)pcVar17] != pcVar17[0x180a06418]) goto LAB_1803bd373;
                      pcVar17 = pcVar6;
                    } while (pcVar6 != (char *)0x5);
                  }
                  else if ((uStack_60 != 1) ||
                          (((*pcStack_68 != '1' || (pcStack_68[1] != '\0')) &&
                           ((*pcStack_68 != 't' || (pcStack_68[1] != '\0')))))) goto LAB_1803bd373;
                  if ((int)uStack_40 == 0xf) {
                    iVar4 = strcmp(puStack_48);
                    if (iVar4 != 0) goto LAB_1803bd340;
                    pcVar12 = (char *)(ulonglong)(uVar14 | 0x2000);
                  }
                  else if ((int)uStack_40 == 0x16) {
                    iVar4 = strcmp(puStack_48);
                    if (iVar4 == 0) {
                      pcVar12 = (char *)(ulonglong)(uVar14 | 0x400000);
                    }
                    else {
LAB_1803bd293:
                      iVar4 = strcmp(puVar3);
                      if (iVar4 == 0) {
                        pcVar12 = (char *)(ulonglong)(uVar14 | 0x4000);
                      }
                      else {
LAB_1803bd2d5:
                        iVar4 = strcmp(puVar3);
                        if (iVar4 == 0) {
                          pcVar12 = (char *)(ulonglong)(uVar14 | 0x100000);
                        }
                        else {
                          iVar4 = strcmp(puVar3);
                          if (iVar4 != 0) goto LAB_1803bd340;
                          pcVar12 = (char *)(ulonglong)(uVar14 | 0x40000);
                        }
                      }
                    }
                  }
                  else if ((int)uStack_40 == 0x14) {
                    iVar4 = strcmp(puStack_48);
                    if (iVar4 != 0) goto LAB_1803bd340;
                    pcVar12 = (char *)(ulonglong)(uVar14 | 0x100);
                  }
                  else if ((int)uStack_40 == 0x19) {
                    iVar4 = strcmp(puStack_48);
                    if (iVar4 == 0) {
                      pcVar12 = (char *)(ulonglong)(uVar14 | 0x800);
                    }
                    else {
LAB_1803bd26e:
                      iVar4 = strcmp(puVar3);
                      if (iVar4 != 0) goto LAB_1803bd340;
                      pcVar12 = (char *)(ulonglong)(uVar14 | 0x80000000);
                    }
                  }
                  else if ((int)uStack_40 == 0x20) {
                    iVar4 = strcmp(puStack_48);
                    if (iVar4 != 0) goto LAB_1803bd340;
                    pcVar12 = (char *)(ulonglong)(uVar14 | 0x1000);
                  }
                  else if ((int)uStack_40 == 0x10) {
                    iVar4 = strcmp(puStack_48);
                    if (iVar4 != 0) goto LAB_1803bd340;
                    pcVar12 = (char *)(ulonglong)(uVar14 | 0x10000);
                  }
                  else {
                    if ((int)uStack_40 == 0x19) goto LAB_1803bd26e;
                    if ((int)uStack_40 == 0x16) goto LAB_1803bd293;
                    if ((int)uStack_40 == 0x17) {
                      iVar4 = strcmp(puStack_48);
                      if (iVar4 != 0) goto LAB_1803bd340;
                      pcVar12 = (char *)(ulonglong)(uVar14 | 0x4000000);
                      goto LAB_1803bd373;
                    }
                    if ((int)uStack_40 == 0x16) goto LAB_1803bd2d5;
                    if ((int)uStack_40 == 0x1e) {
                      iVar4 = strcmp(puStack_48);
                      if (iVar4 == 0) {
                        pcVar12 = (char *)(ulonglong)(uVar14 | 0x80000);
                      }
                      else {
LAB_1803bd340:
                        puVar9 = *(void **)(*(longlong *)(param_1 + 0x28) + 0x290);
                        puVar15 = &system_buffer_ptr;
                        if (puVar9 != (void *)0x0) {
                          puVar15 = puVar9;
                        }
                        puVar9 = &system_buffer_ptr;
                        if (puVar3 != (void *)0x0) {
                          puVar9 = puVar3;
                        }
                        FUN_180626f80(&unknown_var_2384_ptr,puVar9,puVar15);
                      }
                    }
                    else if (((int)uStack_40 != 0xc) || (iVar4 = strcmp(puStack_48), iVar4 != 0))
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
                    pcVar5 = pcVar7 + (longlong)pcVar5;
                    pcVar16 = pcVar17;
                    if (pcVar5 <= pcVar7) break;
                    lVar8 = (longlong)&unknown_var_4260_ptr - (longlong)pcVar7;
                    while (*pcVar7 == pcVar7[lVar8]) {
                      pcVar7 = pcVar7 + 1;
                      if (pcVar5 <= pcVar7) goto LAB_1803bd3de;
                    }
                  }
                }
LAB_1803bd3de:
                puStack_70 = &unknown_var_3456_ptr;
                if (pcStack_68 != (char *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                pcStack_68 = (char *)0x0;
                uStack_58 = uStack_58 & 0xffffffff00000000;
                puStack_70 = &unknown_var_720_ptr;
                puStack_50 = &unknown_var_3456_ptr;
                if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                puStack_48 = (void *)0x0;
                uStack_38 = uStack_38 & 0xffffffff00000000;
                puStack_50 = &unknown_var_720_ptr;
              } while (pcVar16 != (char *)0x0);
              break;
            }
            lVar8 = (longlong)&unknown_var_4260_ptr - (longlong)pcVar6;
            while (*pcVar6 == pcVar6[lVar8]) {
              pcVar6 = pcVar6 + 1;
              if (pcVar7 <= pcVar6) goto LAB_1803bcf00;
            }
          }
        }
        *(int32_t *)(*(longlong *)(param_1 + 0x28) + 0x2ac) = uVar18;
LAB_1803bd465:
        uVar18 = 0;
        pcVar16 = "visibility_masks";
        do {
          pcVar17 = pcVar16;
          pcVar16 = pcVar17 + 1;
        } while (*pcVar16 != '\0');
        puVar10 = *(uint64_t **)(param_2 + 0x30);
        do {
          if (puVar10 == (uint64_t *)0x0) goto FUN_1802ee810;
          pcVar16 = (char *)*puVar10;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = (char *)0x180d48d24;
            pcVar6 = pcVar19;
          }
          else {
            pcVar6 = (char *)puVar10[2];
          }
          if (pcVar6 == pcVar17 + -0x180a238f7) {
            pcVar6 = pcVar6 + (longlong)pcVar16;
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
                  *(int32_t *)(*(longlong *)(param_1 + 0x28) + 0x2c4) = uVar18;
FUN_1802ee810:
                  lVar8 = *(longlong *)(param_1 + 0x28);
                  uVar14 = *(uint *)(lVar8 + 0x2ac);
                  uVar11 = 0;
                  if ((uVar14 >> 0x16 & 1) != 0) {
                    iVar4 = (int)(*(longlong *)(lVar8 + 0xf8) - *(longlong *)(lVar8 + 0xf0) >> 3);
                    uVar13 = uVar11;
                    if (0 < iVar4) {
                      do {
                        plVar2 = *(longlong **)(*(longlong *)(lVar8 + 0xf0) + uVar13 * 8);
                        uStack_40 = 0x1802ee888;
                        (**(code **)(*plVar2 + 0xe0))(plVar2,~(byte)(uVar14 >> 0x16) & 1);
                        uVar13 = uVar13 + 1;
                      } while ((longlong)uVar13 < (longlong)iVar4);
                      uVar14 = *(uint *)(lVar8 + 0x2ac);
                    }
                  }
                  if ((uVar14 & 0x80010000) != 0) {
                    uStack_40 = 0x1802ee8aa;
                    FUN_1802f09d0(lVar8);
                    uVar14 = *(uint *)(lVar8 + 0x2ac);
                  }
                  if (((uVar14 >> 0x14 & 1) != 0) &&
                     (uVar13 = uVar11, uVar21 = uVar11,
                     *(longlong *)(lVar8 + 0xf8) - *(longlong *)(lVar8 + 0xf0) >> 3 != 0)) {
                    do {
                      plVar2 = *(longlong **)(uVar13 + *(longlong *)(lVar8 + 0xf0));
                      uStack_40 = 0x1802ee8f9;
                      (**(code **)(*plVar2 + 0xf0))(plVar2,(byte)(uVar14 >> 0x14) & 1);
                      uVar20 = (int)uVar21 + 1;
                      uVar13 = uVar13 + 8;
                      uVar21 = (ulonglong)uVar20;
                    } while ((ulonglong)(longlong)(int)uVar20 <
                             (ulonglong)
                             (*(longlong *)(lVar8 + 0xf8) - *(longlong *)(lVar8 + 0xf0) >> 3));
                    uVar14 = *(uint *)(lVar8 + 0x2ac);
                  }
                  if ((uVar14 >> 0x13 & 1) != 0) {
                    iVar4 = (int)(*(longlong *)(lVar8 + 0xf8) - *(longlong *)(lVar8 + 0xf0) >> 3);
                    if (0 < iVar4) {
                      do {
                        plVar2 = *(longlong **)(*(longlong *)(lVar8 + 0xf0) + uVar11 * 8);
                        uStack_40 = 0x1802ee978;
                        (**(code **)(*plVar2 + 0xe8))(plVar2,(byte)(uVar14 >> 0x13) & 1);
                        uVar11 = uVar11 + 1;
                      } while ((longlong)uVar11 < (longlong)iVar4);
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
                  pcVar7 = pcVar6 + (longlong)pcVar7;
                  pcVar12 = pcVar19;
                  if (pcVar7 <= pcVar6) {
LAB_1803bd540:
                    do {
                      puStack_50 = &unknown_var_3456_ptr;
                      uStack_38 = 0;
                      puStack_48 = (void *)0x0;
                      uStack_40 = uStack_40 & 0xffffffff00000000;
                      puStack_70 = &unknown_var_3456_ptr;
                      uStack_58 = 0;
                      pcStack_68 = (char *)0x0;
                      uStack_60 = 0;
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
                          pcVar7 = pcVar17 + (longlong)pcVar7;
                          if (pcVar7 <= pcVar17) {
LAB_1803bd5e3:
                            lVar8 = 0x180d48d24;
                            if (puVar10[1] != 0) {
                              lVar8 = puVar10[1];
                            }
                            FUN_180627c50(&puStack_50,lVar8);
                            break;
                          }
                          lVar8 = (longlong)&system_flag_3a84 - (longlong)pcVar17;
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
                          pcVar7 = pcVar7 + (longlong)pcVar17;
                          if (pcVar7 <= pcVar17) {
LAB_1803bd665:
                            lVar8 = 0x180d48d24;
                            if (puVar10[1] != 0) {
                              lVar8 = puVar10[1];
                            }
                            (**(code **)(puStack_70 + 0x10))(&puStack_70,lVar8);
                            break;
                          }
                          lVar8 = (longlong)&unknown_var_3692_ptr - (longlong)pcVar17;
                          while (*pcVar17 == pcVar17[lVar8]) {
                            pcVar17 = pcVar17 + 1;
                            if (pcVar7 <= pcVar17) goto LAB_1803bd665;
                          }
                        }
                      }
                      puVar3 = puStack_48;
                      pcVar17 = pcVar19;
                      pcVar6 = pcVar19;
                      if (uStack_60 != 0) {
                        do {
                          cVar1 = pcVar17[(longlong)pcStack_68];
                          if ((byte)(cVar1 + 0xbfU) < 0x1a) {
                            pcVar17[(longlong)pcStack_68] = cVar1 + ' ';
                          }
                          uVar14 = (int)pcVar6 + 1;
                          pcVar6 = (char *)(ulonglong)uVar14;
                          pcVar17 = pcVar17 + 1;
                        } while (uVar14 < uStack_60);
                      }
                      pcVar17 = pcVar19;
                      if (uStack_60 == 4) {
                        do {
                          pcVar6 = pcVar17 + 1;
                          if (pcStack_68[(longlong)pcVar17] != pcVar17[0x180a06418])
                          goto LAB_1803bd792;
                          pcVar17 = pcVar6;
                        } while (pcVar6 != (char *)0x5);
LAB_1803bd718:
                        uVar14 = (uint)pcVar12;
                        if ((int)uStack_40 == 9) {
                          iVar4 = strcmp(puStack_48);
                          if (iVar4 == 0) {
                            pcVar12 = (char *)(ulonglong)(uVar14 | 4);
                          }
                          else {
LAB_1803bd758:
                            puVar9 = *(void **)(*(longlong *)(param_1 + 0x28) + 0x290);
                            puVar15 = &system_buffer_ptr;
                            if (puVar9 != (void *)0x0) {
                              puVar15 = puVar9;
                            }
                            puVar9 = &system_buffer_ptr;
                            if (puVar3 != (void *)0x0) {
                              puVar9 = puVar3;
                            }
                            FUN_180626f80(&unknown_var_2592_ptr,puVar9,puVar15);
                          }
                        }
                        else {
                          if ((int)uStack_40 == 0x14) {
                            iVar4 = strcmp(puStack_48);
                          }
                          else {
                            if ((int)uStack_40 != 0x19) {
                              if (((int)uStack_40 != 0x12) ||
                                 (iVar4 = strcmp(puStack_48), iVar4 != 0)) goto LAB_1803bd758;
                              pcVar12 = (char *)(ulonglong)(uVar14 | 8);
                              goto LAB_1803bd792;
                            }
                            iVar4 = strcmp(puStack_48);
                          }
                          if (iVar4 != 0) goto LAB_1803bd758;
                          pcVar12 = (char *)(ulonglong)(uVar14 | 2);
                        }
                      }
                      else if (((uStack_60 == 1) && (*pcStack_68 == '1')) && (pcStack_68[1] == '\0')
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
                          pcVar5 = pcVar5 + (longlong)pcVar7;
                          pcVar16 = pcVar17;
                          if (pcVar5 <= pcVar7) break;
                          lVar8 = (longlong)&unknown_var_2512_ptr - (longlong)pcVar7;
                          while (*pcVar7 == pcVar7[lVar8]) {
                            pcVar7 = pcVar7 + 1;
                            if (pcVar5 <= pcVar7) goto LAB_1803bd842;
                          }
                        }
                      }
LAB_1803bd842:
                      puStack_70 = &unknown_var_3456_ptr;
                      if (pcStack_68 != (char *)0x0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900();
                      }
                      pcStack_68 = (char *)0x0;
                      uStack_58 = uStack_58 & 0xffffffff00000000;
                      puStack_70 = &unknown_var_720_ptr;
                      puStack_50 = &unknown_var_3456_ptr;
                      if (puStack_48 != (void *)0x0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900();
                      }
                      puStack_48 = (void *)0x0;
                      uStack_38 = uStack_38 & 0xffffffff00000000;
                      puStack_50 = &unknown_var_720_ptr;
                    } while (pcVar16 != (char *)0x0);
                    goto LAB_1803bd8a3;
                  }
                  lVar8 = (longlong)&unknown_var_2512_ptr - (longlong)pcVar6;
                  while (*pcVar6 == pcVar6[lVar8]) {
                    pcVar6 = pcVar6 + 1;
                    if (pcVar7 <= pcVar6) goto LAB_1803bd540;
                  }
                }
                pcVar16 = *(char **)(pcVar16 + 0x58);
              } while( true );
            }
            lVar8 = (longlong)&unknown_var_2360_ptr - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar8]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar6 <= pcVar16) goto LAB_1803bd4c2;
            }
          }
          puVar10 = (uint64_t *)puVar10[0xb];
        } while( true );
      }
      lVar8 = (longlong)&unknown_var_4216_ptr - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar8]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar6 <= pcVar16) goto LAB_1803bce70;
      }
    }
    puVar10 = (uint64_t *)puVar10[0xb];
  } while( true );
}






