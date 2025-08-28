#include "TaleWorlds.Native.Split.h"

// 03_rendering_part004.c - 2 个函数

// 函数: void FUN_180270ba0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)
void FUN_180270ba0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  char *pcVar10;
  int aiStackX_20 [2];
  float afStack_88 [2];
  float afStack_80 [2];
  undefined8 uStack_78;
  int iStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  int iStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  
  FUN_180270bf0(param_1,param_4);
  FUN_180416cc0(param_1 + 8,&UNK_180a15b70,param_4);
  uStack_78 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x40);
  pcVar8 = "curve";
  do {
    pcVar10 = pcVar8;
    pcVar8 = pcVar10 + 1;
  } while (*pcVar8 != '\0');
  puVar7 = *(undefined8 **)(param_4 + 0x30);
  do {
    if (puVar7 == (undefined8 *)0x0) {
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
    puVar7 = (undefined8 *)puVar7[0xb];
  } while( true );
LAB_180416d70:
  pcVar8 = "name";
  do {
    pcVar10 = pcVar8;
    pcVar8 = pcVar10 + 1;
  } while (*pcVar8 != '\0');
  for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
      puVar9 = (undefined8 *)puVar9[6]) {
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
        lVar5 = (longlong)&UNK_180a15ff8 - (longlong)pcVar8;
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
        puVar7 = (undefined8 *)puVar7[0xb];
        if (puVar7 == (undefined8 *)0x0) {
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
  puVar9 = (undefined8 *)puVar7[8];
  do {
    if (puVar9 == (undefined8 *)0x0) goto LAB_180416f25;
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
        for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
            puVar9 = (undefined8 *)puVar9[6]) {
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
        if ((param_1 + 100 != 0) && (lVar5 != 0)) {
          FUN_18010cbc0(lVar5,&DAT_180a06430,param_1 + 100);
        }
        pcVar8 = "curve_multiplier";
        do {
          pcVar10 = pcVar8;
          pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
            puVar9 = (undefined8 *)puVar9[6]) {
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
        if ((param_1 + 0x60 != 0) && (lVar5 != 0)) {
          FUN_18010cbc0(lVar5,&DAT_180a06430,param_1 + 0x60);
        }
        pcVar8 = "keys";
        if (aiStackX_20[0] != 1) {
          do {
            pcVar10 = pcVar8;
            pcVar8 = pcVar10 + 1;
          } while (*pcVar8 != '\0');
          puVar7 = (undefined8 *)puVar7[6];
          do {
            if (puVar7 == (undefined8 *)0x0) {
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
                puVar7 = (undefined8 *)puVar7[6];
                do {
                  if (puVar7 == (undefined8 *)0x0) {
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
                      pcVar8 = "time";
                      do {
                        pcVar10 = pcVar8;
                        pcVar8 = pcVar10 + 1;
                      } while (*pcVar8 != '\0');
                      for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                          puVar9 = (undefined8 *)puVar9[6]) {
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
                      for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                          puVar9 = (undefined8 *)puVar9[6]) {
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
                      FUN_180631850(puVar7,&UNK_180a18100,&stack0x00000008);
                      (**(code **)(*(longlong *)(param_1 + 0x38) + 8))
                                ((longlong *)(param_1 + 0x38),(int)afStack_80[0],afStack_88[0],0,0);
                      pcVar8 = "key";
                      do {
                        pcVar10 = pcVar8;
                        pcVar8 = pcVar10 + 1;
                      } while (*pcVar8 != '\0');
                      puVar7 = (undefined8 *)puVar7[0xb];
                      if (puVar7 == (undefined8 *)0x0) {
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
                        puVar7 = (undefined8 *)puVar7[0xb];
                        if (puVar7 == (undefined8 *)0x0) {
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
                  puVar7 = (undefined8 *)puVar7[0xb];
                } while( true );
              }
              lVar5 = (longlong)&UNK_180a180c4 - (longlong)pcVar8;
              while (*pcVar8 == pcVar8[lVar5]) {
                pcVar8 = pcVar8 + 1;
                if (pcVar3 <= pcVar8) goto LAB_1804174f0;
              }
            }
            puVar7 = (undefined8 *)puVar7[0xb];
          } while( true );
        }
        do {
          pcVar10 = pcVar8;
          pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        puVar7 = (undefined8 *)puVar7[6];
        do {
          if (puVar7 == (undefined8 *)0x0) {
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
              for (puVar7 = (undefined8 *)puVar7[6]; puVar7 != (undefined8 *)0x0;
                  puVar7 = (undefined8 *)puVar7[0xb]) {
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
              puVar7 = (undefined8 *)0x0;
LAB_180417140:
              do {
                pcVar8 = "time";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                    puVar9 = (undefined8 *)puVar9[6]) {
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
                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                    puVar9 = (undefined8 *)puVar9[6]) {
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
                FUN_180631850(puVar7,&UNK_180a18100,&stack0x00000008);
                iStack_70 = (int)(afStack_88[0] * 29.0);
                fStack_6c = afStack_80[0];
                uStack_68 = 0;
                pcVar8 = "key";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                for (puVar7 = (undefined8 *)puVar7[0xb]; puVar7 != (undefined8 *)0x0;
                    puVar7 = (undefined8 *)puVar7[0xb]) {
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
                puVar7 = (undefined8 *)0x0;
LAB_1804172f2:
                pcVar8 = "time";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                    puVar9 = (undefined8 *)puVar9[6]) {
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
                for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
                    puVar9 = (undefined8 *)puVar9[6]) {
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
                FUN_180631850(puVar7,&UNK_180a18100,&stack0x00000008);
                iStack_60 = (int)(afStack_88[0] * 29.0);
                fStack_5c = afStack_80[0];
                uStack_58 = 0;
                FUN_1802b6e50(param_1 + 0x40,&iStack_70);
                pcVar8 = "key";
                do {
                  pcVar10 = pcVar8;
                  pcVar8 = pcVar10 + 1;
                } while (*pcVar8 != '\0');
                while( true ) {
                  do {
                    puVar7 = (undefined8 *)puVar7[0xb];
                    if (puVar7 == (undefined8 *)0x0) {
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
          puVar7 = (undefined8 *)puVar7[0xb];
        } while( true );
      }
      lVar5 = (longlong)&UNK_180a015b0 - (longlong)pcVar8;
      while (*pcVar8 == pcVar8[lVar5]) {
        pcVar8 = pcVar8 + 1;
        if (pcVar3 <= pcVar8) goto LAB_180416ed4;
      }
    }
    puVar9 = (undefined8 *)puVar9[6];
  } while( true );
}





// 函数: void FUN_180270bf0(longlong param_1,longlong param_2)
void FUN_180270bf0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "base";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  for (puVar1 = *(undefined8 **)(param_2 + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[6]) {
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a04ee3) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180270c78:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180270c93;
      }
      lVar3 = (longlong)&DAT_180a04ee4 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180270c78;
      }
    }
  }
  lVar3 = 0;
LAB_180270c93:
  if ((param_1 + 4 != 0) && (lVar3 != 0)) {
    FUN_18010cbc0(lVar3,&DAT_180a06430,param_1 + 4);
  }
  pcVar4 = "bias";
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  puVar1 = *(undefined8 **)(param_2 + 0x40);
  do {
    if (puVar1 == (undefined8 *)0x0) {
      lVar3 = 0;
LAB_180270d29:
      if ((param_1 != 0) && (lVar3 != 0)) {
        FUN_18010cbc0(lVar3,&DAT_180a06430,param_1);
      }
      return;
    }
    pcVar4 = (char *)*puVar1;
    if (pcVar4 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      pcVar2 = (char *)puVar1[2];
    }
    if (pcVar2 == pcVar5 + -0x180a1628f) {
      pcVar2 = pcVar2 + (longlong)pcVar4;
      if (pcVar2 <= pcVar4) {
LAB_180270d11:
        lVar3 = 0x180d48d24;
        if (puVar1[1] != 0) {
          lVar3 = puVar1[1];
        }
        goto LAB_180270d29;
      }
      lVar3 = (longlong)&UNK_180a16290 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar3]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar2 <= pcVar4) goto LAB_180270d11;
      }
    }
    puVar1 = (undefined8 *)puVar1[6];
  } while( true );
}





