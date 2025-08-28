#include "TaleWorlds.Native.Split.h"

// 03_rendering_part269_sub001.c - 2 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part269.c - 2 个函数


// 函数: void FUN_180416cc0(longlong *param_1,longlong param_2,longlong param_3)
void FUN_180416cc0(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *puVar6;
  uint64_t *puVar7;
  char *pcVar8;
  uint64_t *puVar9;
  char *pcVar10;
  uint64_t uStackX_8;
  int aiStackX_20 [2];
  float afStack_88 [2];
  float afStack_80 [2];
  uint64_t uStack_78;
  int iStack_70;
  float fStack_6c;
  float fStack_68;
  int32_t uStack_64;
  int iStack_60;
  float fStack_5c;
  float fStack_58;
  int32_t uStack_54;
  
  uStack_78 = 0xfffffffffffffffe;
  param_1[2] = param_1[1];
  pcVar8 = "curve";
  do {
    pcVar10 = pcVar8;
    pcVar8 = pcVar10 + 1;
  } while (*pcVar8 != '\0');
  puVar7 = *(uint64_t **)(param_3 + 0x30);
  do {
    if (puVar7 == (uint64_t *)0x0) {
      return;
    }
    pcVar8 = (char *)*puVar7;
    if (pcVar8 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar7[2];
    }
    if (pcVar3 == pcVar10 + -0x180a180f3) {
      pcVar3 = pcVar3 + (longlong)pcVar8;
      if (pcVar3 <= pcVar8) break;
      lVar5 = (longlong)&UNK_180a180f4 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180416d70;
      }
    }
    puVar7 = (uint64_t *)puVar7[0xb];
  } while( true );
LAB_180416d70:
  pcVar8 = "name";
  do {
    pcVar10 = pcVar8;
    pcVar8 = pcVar10 + 1;
  } while (*pcVar8 != '\0');
  for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar8 = (char *)*puVar9;
    if (pcVar8 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar9[2];
    }
    if (pcVar3 == pcVar10 + -0x180a03a83) {
      pcVar3 = pcVar8 + (longlong)pcVar3;
      if (pcVar3 <= pcVar8) {
LAB_180416dd0:
        pcVar8 = (char *)0x180d48d24;
        if ((char *)puVar9[1] != (char *)0x0) {
          pcVar8 = (char *)puVar9[1];
        }
        lVar5 = param_2 - (longlong)pcVar8;
        goto LAB_180416de4;
      }
      lVar5 = (longlong)&DAT_180a03a84 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180416dd0;
      }
    }
  }
  goto LAB_180416dfb;
  while (pcVar8 = pcVar8 + 1, cVar2 != '\0') {
LAB_180416de4:
    cVar1 = *pcVar8;
    cVar2 = pcVar8[lVar5];
    if (cVar1 != cVar2) break;
  }
  if (cVar1 != cVar2) {
LAB_180416dfb:
    pcVar8 = "curve";
    do {
      pcVar10 = pcVar8;
      pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
    while( true ) {
      do {
        puVar7 = (uint64_t *)puVar7[0xb];
        if (puVar7 == (uint64_t *)0x0) {
          return;
        }
        pcVar8 = (char *)*puVar7;
        if (pcVar8 == (char *)0x0) {
          pcVar3 = (char *)0x0;
          pcVar8 = (char *)0x180d48d24;
        }
        else {
          pcVar3 = (char *)puVar7[2];
        }
      } while (pcVar3 != pcVar10 + -0x180a180f3);
      pcVar3 = pcVar3 + (longlong)pcVar8;
      if (pcVar3 <= pcVar8) break;
      lVar5 = (longlong)&UNK_180a180f4 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180416d70;
      }
    }
    goto LAB_180416d70;
  }
  aiStackX_20[0] = 0;
  pcVar8 = "version";
  do {
    pcVar10 = pcVar8;
    pcVar8 = pcVar10 + 1;
  } while (*pcVar8 != '\0');
  puVar9 = (uint64_t *)puVar7[8];
  do {
    if (puVar9 == (uint64_t *)0x0) goto LAB_180416f25;
    pcVar8 = (char *)*puVar9;
    if (pcVar8 == (char *)0x0) {
      pcVar3 = (char *)0x0;
      pcVar8 = (char *)0x180d48d24;
    }
    else {
      pcVar3 = (char *)puVar9[2];
    }
    if (pcVar3 == pcVar10 + -0x180a015af) {
      pcVar3 = pcVar3 + (longlong)pcVar8;
      if (pcVar3 <= pcVar8) {
LAB_180416ed4:
        pcVar8 = (char *)0x180d48d24;
        if ((char *)puVar9[1] != (char *)0x0) {
          pcVar8 = (char *)puVar9[1];
        }
        uVar4 = 0xffffffffffffffff;
        do {
          uVar4 = uVar4 + 1;
        } while (pcVar8[uVar4] != '\0');
        if (((uVar4 < 3) || (*pcVar8 != '0')) ||
           (puVar6 = &UNK_180a3cb84, (pcVar8[1] + 0xa8U & 0xdf) != 0)) {
          puVar6 = &UNK_180a063a0;
        }
        FUN_18010cbc0(pcVar8,puVar6,aiStackX_20);
LAB_180416f25:
        pcVar8 = "default";
        do {
          pcVar10 = pcVar8;
          pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
            puVar9 = (uint64_t *)puVar9[6]) {
          pcVar8 = (char *)*puVar9;
          if (pcVar8 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
          }
          else {
            pcVar3 = (char *)puVar9[2];
          }
          if (pcVar3 == pcVar10 + -0x180a0b1bf) {
            pcVar3 = pcVar8 + (longlong)pcVar3;
            if (pcVar3 <= pcVar8) {
LAB_180416f88:
              lVar5 = 0x180d48d24;
              if (puVar9[1] != 0) {
                lVar5 = puVar9[1];
              }
              goto LAB_180416fa0;
            }
            lVar5 = (longlong)&DAT_180a0b1c0 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
              pcVar8 = pcVar8 + 1;
              if (pcVar3 <= pcVar8) goto LAB_180416f88;
            }
          }
        }
        lVar5 = 0;
LAB_180416fa0:
        if (((longlong)param_1 + 0x2c != 0) && (lVar5 != 0)) {
          FUN_18010cbc0(lVar5,&DAT_180a06430,(longlong)param_1 + 0x2c);
        }
        pcVar8 = "curve_multiplier";
        do {
          pcVar10 = pcVar8;
          pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
            puVar9 = (uint64_t *)puVar9[6]) {
          pcVar8 = (char *)*puVar9;
          if (pcVar8 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
          }
          else {
            pcVar3 = (char *)puVar9[2];
          }
          if (pcVar3 == pcVar10 + -0x180a180af) {
            pcVar3 = pcVar3 + (longlong)pcVar8;
            if (pcVar3 <= pcVar8) {
LAB_180417020:
              lVar5 = 0x180d48d24;
              if (puVar9[1] != 0) {
                lVar5 = puVar9[1];
              }
              goto LAB_180417038;
            }
            lVar5 = (longlong)&UNK_180a180b0 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
              pcVar8 = pcVar8 + 1;
              if (pcVar3 <= pcVar8) goto LAB_180417020;
            }
          }
        }
        lVar5 = 0;
LAB_180417038:
        if ((param_1 + 5 != (longlong *)0x0) && (lVar5 != 0)) {
          FUN_18010cbc0(lVar5,&DAT_180a06430,param_1 + 5);
        }
        pcVar8 = "keys";
        if (aiStackX_20[0] != 1) {
          do {
            pcVar10 = pcVar8;
            pcVar8 = pcVar10 + 1;
          } while (*pcVar8 != '\0');
          puVar7 = (uint64_t *)puVar7[6];
          do {
            if (puVar7 == (uint64_t *)0x0) {
              return;
            }
            pcVar8 = (char *)*puVar7;
            if (pcVar8 == (char *)0x0) {
              pcVar3 = (char *)0x0;
              pcVar8 = (char *)0x180d48d24;
            }
            else {
              pcVar3 = (char *)puVar7[2];
            }
            if (pcVar3 == pcVar10 + -0x180a180c3) {
              pcVar3 = pcVar8 + (longlong)pcVar3;
              if (pcVar3 <= pcVar8) {
LAB_1804174f0:
                pcVar8 = "key";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                puVar7 = (uint64_t *)puVar7[6];
                do {
                  if (puVar7 == (uint64_t *)0x0) {
                    return;
                  }
                  pcVar8 = (char *)*puVar7;
                  if (pcVar8 == (char *)0x0) {
                    pcVar3 = (char *)0x0;
                    pcVar8 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar3 = (char *)puVar7[2];
                  }
                  if (pcVar3 == pcVar10 + -0x180a18107) {
                    pcVar3 = pcVar3 + (longlong)pcVar8;
                    if (pcVar3 <= pcVar8) {
LAB_180417570:
                      uStackX_8 = 0;
                      pcVar8 = "time";
                      do {
                        pcVar10 = pcVar8;
                        pcVar8 = pcVar10 + 1;
                      } while (*pcVar8 != '\0');
                      for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                          puVar9 = (uint64_t *)puVar9[6]) {
                        pcVar8 = (char *)*puVar9;
                        if (pcVar8 == (char *)0x0) {
                          pcVar3 = (char *)0x0;
                          pcVar8 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar3 = (char *)puVar9[2];
                        }
                        if (pcVar3 == pcVar10 + -0x180a1810b) {
                          pcVar3 = pcVar3 + (longlong)pcVar8;
                          if (pcVar3 <= pcVar8) {
LAB_1804175d5:
                            lVar5 = 0x180d48d24;
                            if (puVar9[1] != 0) {
                              lVar5 = puVar9[1];
                            }
                            FUN_18010cbc0(lVar5,&DAT_180a06430,afStack_80);
                            break;
                          }
                          lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar8;
                          while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_1804175d5;
                          }
                        }
                      }
                      pcVar8 = "value";
                      do {
                        pcVar10 = pcVar8;
                        pcVar8 = pcVar10 + 1;
                      } while (*pcVar8 != '\0');
                      for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                          puVar9 = (uint64_t *)puVar9[6]) {
                        pcVar8 = (char *)*puVar9;
                        if (pcVar8 == (char *)0x0) {
                          pcVar3 = (char *)0x0;
                          pcVar8 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar3 = (char *)puVar9[2];
                        }
                        if (pcVar3 == pcVar10 + -0x180a0696b) {
                          pcVar3 = pcVar3 + (longlong)pcVar8;
                          if (pcVar3 <= pcVar8) {
LAB_180417650:
                            lVar5 = 0x180d48d24;
                            if (puVar9[1] != 0) {
                              lVar5 = puVar9[1];
                            }
                            FUN_18010cbc0(lVar5,&DAT_180a06430,afStack_88);
                            break;
                          }
                          lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
                          while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_180417650;
                          }
                        }
                      }
                      FUN_180631850(puVar7,&UNK_180a18100,&uStackX_8);
                      (**(code **)(*param_1 + 8))
                                (param_1,(int)afStack_80[0],afStack_88[0],uStackX_8,0);
                      pcVar8 = "key";
                      do {
                        pcVar10 = pcVar8;
                        pcVar8 = pcVar10 + 1;
                      } while (*pcVar8 != '\0');
                      puVar7 = (uint64_t *)puVar7[0xb];
                      if (puVar7 == (uint64_t *)0x0) {
                        return;
                      }
                      do {
                        pcVar8 = (char *)*puVar7;
                        if (pcVar8 == (char *)0x0) {
                          pcVar3 = (char *)0x0;
                          pcVar8 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar3 = (char *)puVar7[2];
                        }
                        if (pcVar3 == pcVar10 + -0x180a18107) {
                          pcVar3 = pcVar3 + (longlong)pcVar8;
                          if (pcVar3 <= pcVar8) goto LAB_180417570;
                          lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                          while (*pcVar8 == pcVar8[lVar5]) {
                            pcVar8 = pcVar8 + 1;
                            if (pcVar3 <= pcVar8) goto LAB_180417570;
                          }
                        }
                        puVar7 = (uint64_t *)puVar7[0xb];
                        if (puVar7 == (uint64_t *)0x0) {
                          return;
                        }
                      } while( true );
                    }
                    lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                    while (*pcVar8 == pcVar8[lVar5]) {
                      pcVar8 = pcVar8 + 1;
                      if (pcVar3 <= pcVar8) goto LAB_180417570;
                    }
                  }
                  puVar7 = (uint64_t *)puVar7[0xb];
                } while( true );
              }
              lVar5 = (longlong)&UNK_180a180c4 - (longlong)pcVar8;
              while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_1804174f0;
              }
            }
            puVar7 = (uint64_t *)puVar7[0xb];
          } while( true );
        }
        do {
          pcVar10 = pcVar8;
          pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        puVar7 = (uint64_t *)puVar7[6];
        do {
          if (puVar7 == (uint64_t *)0x0) {
            return;
          }
          pcVar8 = (char *)*puVar7;
          if (pcVar8 == (char *)0x0) {
            pcVar3 = (char *)0x0;
            pcVar8 = (char *)0x180d48d24;
          }
          else {
            pcVar3 = (char *)puVar7[2];
          }
          if (pcVar3 == pcVar10 + -0x180a180c3) {
            pcVar3 = pcVar8 + (longlong)pcVar3;
            if (pcVar3 <= pcVar8) {
LAB_1804170b5:
              pcVar8 = "key";
              do {
                pcVar10 = pcVar8;
                pcVar8 = pcVar10 + 1;
              } while (*pcVar8 != '\0');
              for (puVar7 = (uint64_t *)puVar7[6]; puVar7 != (uint64_t *)0x0;
                  puVar7 = (uint64_t *)puVar7[0xb]) {
                pcVar8 = (char *)*puVar7;
                if (pcVar8 == (char *)0x0) {
                  pcVar3 = (char *)0x0;
                  pcVar8 = (char *)0x180d48d24;
                }
                else {
                  pcVar3 = (char *)puVar7[2];
                }
                if (pcVar3 == pcVar10 + -0x180a18107) {
                  pcVar3 = pcVar3 + (longlong)pcVar8;
                  if (pcVar3 <= pcVar8) goto LAB_180417140;
                  lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                  while (*pcVar8 == pcVar8[lVar5]) {
                    pcVar8 = pcVar8 + 1;
                    if (pcVar3 <= pcVar8) goto LAB_180417140;
                  }
                }
              }
              puVar7 = (uint64_t *)0x0;
LAB_180417140:
              do {
                uStackX_8 = 0;
                pcVar8 = "time";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                    puVar9 = (uint64_t *)puVar9[6]) {
                  pcVar8 = (char *)*puVar9;
                  if (pcVar8 == (char *)0x0) {
                    pcVar3 = (char *)0x0;
                    pcVar8 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar3 = (char *)puVar9[2];
                  }
                  if (pcVar3 == pcVar10 + -0x180a1810b) {
                    pcVar3 = pcVar3 + (longlong)pcVar8;
                    if (pcVar3 <= pcVar8) {
LAB_1804171a0:
                      lVar5 = 0x180d48d24;
                      if (puVar9[1] != 0) {
                        lVar5 = puVar9[1];
                      }
                      FUN_18010cbc0(lVar5,&DAT_180a06430,afStack_88);
                      break;
                    }
                    lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar8;
                    while (*pcVar8 == pcVar8[lVar5]) {
                      pcVar8 = pcVar8 + 1;
                      if (pcVar3 <= pcVar8) goto LAB_1804171a0;
                    }
                  }
                }
                pcVar8 = "value";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                    puVar9 = (uint64_t *)puVar9[6]) {
                  pcVar8 = (char *)*puVar9;
                  if (pcVar8 == (char *)0x0) {
                    pcVar3 = (char *)0x0;
                    pcVar8 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar3 = (char *)puVar9[2];
                  }
                  if (pcVar3 == pcVar10 + -0x180a0696b) {
                    pcVar3 = pcVar3 + (longlong)pcVar8;
                    if (pcVar3 <= pcVar8) {
LAB_180417224:
                      lVar5 = 0x180d48d24;
                      if (puVar9[1] != 0) {
                        lVar5 = puVar9[1];
                      }
                      FUN_18010cbc0(lVar5,&DAT_180a06430,afStack_80);
                      break;
                    }
                    lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
                    while (*pcVar8 == pcVar8[lVar5]) {
                      pcVar8 = pcVar8 + 1;
                      if (pcVar3 <= pcVar8) goto LAB_180417224;
                    }
                  }
                }
                FUN_180631850(puVar7,&UNK_180a18100,&uStackX_8);
                iStack_70 = (int)(afStack_88[0] * 29.0);
                fStack_6c = afStack_80[0];
                fStack_68 = (float)uStackX_8;
                _fStack_68 = CONCAT44((int)((ulonglong)uStackX_8 >> 0x20),fStack_68 * 29.0);
                pcVar8 = "key";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                for (puVar7 = (uint64_t *)puVar7[0xb]; puVar7 != (uint64_t *)0x0;
                    puVar7 = (uint64_t *)puVar7[0xb]) {
                  pcVar8 = (char *)*puVar7;
                  if (pcVar8 == (char *)0x0) {
                    pcVar3 = (char *)0x0;
                    pcVar8 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar3 = (char *)puVar7[2];
                  }
                  if (pcVar3 == pcVar10 + -0x180a18107) {
                    pcVar3 = pcVar3 + (longlong)pcVar8;
                    if (pcVar3 <= pcVar8) goto LAB_1804172f2;
                    lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                    while (*pcVar8 == pcVar8[lVar5]) {
                      pcVar8 = pcVar8 + 1;
                      if (pcVar3 <= pcVar8) goto LAB_1804172f2;
                    }
                  }
                }
                puVar7 = (uint64_t *)0x0;
LAB_1804172f2:
                pcVar8 = "time";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                    puVar9 = (uint64_t *)puVar9[6]) {
                  pcVar8 = (char *)*puVar9;
                  if (pcVar8 == (char *)0x0) {
                    pcVar3 = (char *)0x0;
                    pcVar8 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar3 = (char *)puVar9[2];
                  }
                  if (pcVar3 == pcVar10 + -0x180a1810b) {
                    pcVar3 = pcVar3 + (longlong)pcVar8;
                    if (pcVar3 <= pcVar8) {
LAB_180417341:
                      lVar5 = 0x180d48d24;
                      if (puVar9[1] != 0) {
                        lVar5 = puVar9[1];
                      }
                      FUN_18010cbc0(lVar5,&DAT_180a06430,afStack_88);
                      break;
                    }
                    lVar5 = (longlong)&UNK_180a1810c - (longlong)pcVar8;
                    while (*pcVar8 == pcVar8[lVar5]) {
                      pcVar8 = pcVar8 + 1;
                      if (pcVar3 <= pcVar8) goto LAB_180417341;
                    }
                  }
                }
                pcVar8 = "value";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
                    puVar9 = (uint64_t *)puVar9[6]) {
                  pcVar8 = (char *)*puVar9;
                  if (pcVar8 == (char *)0x0) {
                    pcVar3 = (char *)0x0;
                    pcVar8 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar3 = (char *)puVar9[2];
                  }
                  if (pcVar3 == pcVar10 + -0x180a0696b) {
                    pcVar3 = pcVar3 + (longlong)pcVar8;
                    if (pcVar3 <= pcVar8) {
LAB_1804173c4:
                      lVar5 = 0x180d48d24;
                      if (puVar9[1] != 0) {
                        lVar5 = puVar9[1];
                      }
                      FUN_18010cbc0(lVar5,&DAT_180a06430,afStack_80);
                      break;
                    }
                    lVar5 = (longlong)&UNK_180a0696c - (longlong)pcVar8;
                    while (*pcVar8 == pcVar8[lVar5]) {
                      pcVar8 = pcVar8 + 1;
                      if (pcVar3 <= pcVar8) goto LAB_1804173c4;
                    }
                  }
                }
                FUN_180631850(puVar7,&UNK_180a18100,&uStackX_8);
                iStack_60 = (int)(afStack_88[0] * 29.0);
                fStack_5c = afStack_80[0];
                fStack_58 = (float)uStackX_8;
                _fStack_58 = CONCAT44((int)((ulonglong)uStackX_8 >> 0x20),fStack_58 * 29.0);
                FUN_1802b6e50(param_1 + 1,&iStack_70);
                pcVar8 = "key";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                while( true ) {
                  do {
                    puVar7 = (uint64_t *)puVar7[0xb];
                    if (puVar7 == (uint64_t *)0x0) {
                      return;
                    }
                    pcVar8 = (char *)*puVar7;
                    if (pcVar8 == (char *)0x0) {
                      pcVar3 = (char *)0x0;
                      pcVar8 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar3 = (char *)puVar7[2];
                    }
                  } while (pcVar3 != pcVar10 + -0x180a18107);
                  pcVar3 = pcVar8 + (longlong)pcVar3;
                  if (pcVar3 <= pcVar8) break;
                  lVar5 = (longlong)&UNK_180a18108 - (longlong)pcVar8;
                  while (*pcVar8 == pcVar8[lVar5]) {
                    pcVar8 = pcVar8 + 1;
                    if (pcVar3 <= pcVar8) goto LAB_180417140;
                  }
                }
              } while( true );
            }
            lVar5 = (longlong)&UNK_180a180c4 - (longlong)pcVar8;
            while (*pcVar8 == pcVar8[lVar5]) {
              pcVar8 = pcVar8 + 1;
              if (pcVar3 <= pcVar8) goto LAB_1804170b5;
            }
          }
          puVar7 = (uint64_t *)puVar7[0xb];
        } while( true );
      }
      lVar5 = (longlong)&UNK_180a015b0 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180416ed4;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




