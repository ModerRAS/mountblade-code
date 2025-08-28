#include "TaleWorlds.Native.Split.h"

// 03_rendering_part522_sub002_sub002.c - 1 个函数

// 函数: void FUN_18054cb10(longlong param_1,ulonglong param_2)
void FUN_18054cb10(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  int *piVar17;
  uint *puVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  longlong lVar22;
  char *pcVar23;
  longlong lVar24;
  ulonglong uVar25;
  int *piVar26;
  int *piVar27;
  ulonglong uVar28;
  undefined4 *puVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 *puVar33;
  int iVar34;
  ulonglong uVar35;
  undefined1 *puVar36;
  char *pcVar37;
  char *pcVar38;
  uint uVar39;
  uint uVar40;
  ulonglong uVar41;
  undefined8 uStackX_10;
  uint uStackX_18;
  uint uStackX_1c;
  uint uStackX_20;
  uint uStackX_24;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  int iStack_c8;
  ulonglong uStack_c0;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  longlong lStack_98;
  int iStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  if (param_2 == 0) {
    return;
  }
  uStack_68 = 0xfffffffffffffffe;
  uStackX_10 = param_2;
  if (*(longlong *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pcVar23 = (char *)0x0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar40 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  uStackX_18 = 0;
  uStackX_20 = 0;
  iStack_b8 = 0;
  iStack_b4 = 0;
  iStack_b0 = 0;
  puStack_a0 = &UNK_180a3c3e0;
  uStack_88 = 0;
  lStack_98 = 0;
  iStack_90 = 0;
  pcVar37 = "base_set";
  do {
    pcVar38 = pcVar37;
    pcVar37 = pcVar38 + 1;
  } while (*pcVar37 != '\0');
  for (puVar14 = *(undefined8 **)(param_2 + 0x40); puVar14 != (undefined8 *)0x0;
      puVar14 = (undefined8 *)puVar14[6]) {
    pcVar37 = (char *)*puVar14;
    if (pcVar37 == (char *)0x0) {
      pcVar37 = (char *)0x180d48d24;
      pcVar19 = pcVar23;
    }
    else {
      pcVar19 = (char *)puVar14[2];
    }
    if (pcVar19 == pcVar38 + -0x180a2f62f) {
      pcVar19 = pcVar19 + (longlong)pcVar37;
      if (pcVar19 <= pcVar37) {
LAB_18054cc80:
        lVar24 = 0x180d48d24;
        if (puVar14[1] != 0) {
          lVar24 = puVar14[1];
        }
        FUN_180627c50(&puStack_a0,lVar24);
        break;
      }
      lVar24 = (longlong)&UNK_180a2f630 - (longlong)pcVar37;
      while (*pcVar37 == pcVar37[lVar24]) {
        pcVar37 = pcVar37 + 1;
        if (pcVar19 <= pcVar37) goto LAB_18054cc80;
      }
    }
  }
  uVar25 = uStackX_10;
  pcVar37 = "movement_sets";
  do {
    pcVar38 = pcVar37;
    pcVar37 = pcVar38 + 1;
  } while (*pcVar37 != '\0');
  puStack_80 = *(undefined8 **)(param_2 + 0x30);
LAB_18054ccba:
  if (puStack_80 == (undefined8 *)0x0) {
    puStack_80 = (undefined8 *)0x0;
  }
  else {
    pcVar37 = (char *)*puStack_80;
    if (pcVar37 == (char *)0x0) {
      pcVar37 = (char *)0x180d48d24;
      pcVar19 = pcVar23;
    }
    else {
      pcVar19 = (char *)puStack_80[2];
    }
    if (pcVar19 != pcVar38 + -0x180a2fcc7) goto LAB_18054cd37;
    pcVar19 = pcVar19 + (longlong)pcVar37;
    if (pcVar37 < pcVar19) {
      lVar24 = (longlong)&DAT_180a2fcc8 - (longlong)pcVar37;
      while (*pcVar37 == pcVar37[lVar24]) {
        pcVar37 = pcVar37 + 1;
        if (pcVar19 <= pcVar37) goto LAB_18054cd08;
      }
      goto LAB_18054cd37;
    }
LAB_18054cd08:
    pcVar37 = "movement_set";
    do {
      pcVar38 = pcVar37;
      pcVar37 = pcVar38 + 1;
    } while (*pcVar37 != '\0');
    for (puVar14 = (undefined8 *)puStack_80[6]; uVar39 = uVar40, puVar14 != (undefined8 *)0x0;
        puVar14 = (undefined8 *)puVar14[0xb]) {
      pcVar37 = (char *)*puVar14;
      if (pcVar37 == (char *)0x0) {
        pcVar37 = (char *)0x180d48d24;
        pcVar19 = pcVar23;
      }
      else {
        pcVar19 = (char *)puVar14[2];
      }
      if (pcVar19 == pcVar38 + -0x180a345b7) {
        pcVar19 = pcVar19 + (longlong)pcVar37;
        pcVar20 = pcVar23;
        if (pcVar19 <= pcVar37) {
LAB_18054cd80:
          do {
            uVar39 = (int)pcVar20 + 1;
            pcVar37 = "movement_set";
            do {
              pcVar38 = pcVar37;
              pcVar37 = pcVar38 + 1;
            } while (*pcVar37 != '\0');
            while( true ) {
              do {
                puVar14 = (undefined8 *)puVar14[0xb];
                if (puVar14 == (undefined8 *)0x0) goto LAB_18054cde5;
                pcVar37 = (char *)*puVar14;
                if (pcVar37 == (char *)0x0) {
                  pcVar37 = (char *)0x180d48d24;
                  pcVar19 = pcVar23;
                }
                else {
                  pcVar19 = (char *)puVar14[2];
                }
              } while (pcVar19 != pcVar38 + -0x180a345b7);
              pcVar19 = pcVar19 + (longlong)pcVar37;
              pcVar20 = (char *)(ulonglong)uVar39;
              if (pcVar19 <= pcVar37) break;
              lVar24 = (longlong)&UNK_180a345b8 - (longlong)pcVar37;
              while (*pcVar37 == pcVar37[lVar24]) {
                pcVar37 = pcVar37 + 1;
                if (pcVar19 <= pcVar37) goto LAB_18054cd80;
              }
            }
          } while( true );
        }
        lVar24 = (longlong)&UNK_180a345b8 - (longlong)pcVar37;
        while (*pcVar37 == pcVar37[lVar24]) {
          pcVar37 = pcVar37 + 1;
          if (pcVar19 <= pcVar37) goto LAB_18054cd80;
        }
      }
    }
LAB_18054cde5:
    *(uint *)(param_1 + 0x158) = uVar39;
  }
  pcVar37 = "flags";
  do {
    pcVar38 = pcVar37;
    pcVar37 = pcVar38 + 1;
  } while (*pcVar37 != '\0');
  puStack_70 = *(undefined8 **)(param_2 + 0x30);
LAB_18054ce10:
  if (puStack_70 == (undefined8 *)0x0) {
    puStack_70 = (undefined8 *)0x0;
  }
  else {
    pcVar37 = (char *)*puStack_70;
    if (pcVar37 == (char *)0x0) {
      pcVar37 = (char *)0x180d48d24;
      pcVar19 = pcVar23;
    }
    else {
      pcVar19 = (char *)puStack_70[2];
    }
    if (pcVar19 != pcVar38 + -0x180a06b77) goto LAB_18054ce87;
    pcVar19 = pcVar37 + (longlong)pcVar19;
    if (pcVar37 < pcVar19) {
      lVar24 = (longlong)&UNK_180a06b78 - (longlong)pcVar37;
      while (*pcVar37 == pcVar37[lVar24]) {
        pcVar37 = pcVar37 + 1;
        if (pcVar19 <= pcVar37) goto LAB_18054ce55;
      }
      goto LAB_18054ce87;
    }
LAB_18054ce55:
    pcVar37 = "flag";
    do {
      pcVar38 = pcVar37;
      pcVar37 = pcVar38 + 1;
    } while (*pcVar37 != '\0');
    for (puVar14 = (undefined8 *)puStack_70[6]; uVar39 = uVar40, puVar14 != (undefined8 *)0x0;
        puVar14 = (undefined8 *)puVar14[0xb]) {
      pcVar37 = (char *)*puVar14;
      if (pcVar37 == (char *)0x0) {
        pcVar37 = (char *)0x180d48d24;
        pcVar19 = pcVar23;
      }
      else {
        pcVar19 = (char *)puVar14[2];
      }
      if (pcVar19 == pcVar38 + -0x180a06ba3) {
        pcVar19 = pcVar37 + (longlong)pcVar19;
        pcVar20 = pcVar23;
        if (pcVar19 <= pcVar37) {
LAB_18054cec0:
          do {
            uVar39 = (int)pcVar20 + 1;
            pcVar37 = "flag";
            do {
              pcVar38 = pcVar37;
              pcVar37 = pcVar38 + 1;
            } while (*pcVar37 != '\0');
            while( true ) {
              do {
                puVar14 = (undefined8 *)puVar14[0xb];
                if (puVar14 == (undefined8 *)0x0) goto LAB_18054cf25;
                pcVar37 = (char *)*puVar14;
                if (pcVar37 == (char *)0x0) {
                  pcVar37 = (char *)0x180d48d24;
                  pcVar19 = pcVar23;
                }
                else {
                  pcVar19 = (char *)puVar14[2];
                }
              } while (pcVar19 != pcVar38 + -0x180a06ba3);
              pcVar19 = pcVar19 + (longlong)pcVar37;
              pcVar20 = (char *)(ulonglong)uVar39;
              if (pcVar19 <= pcVar37) break;
              lVar24 = (longlong)&UNK_180a06ba4 - (longlong)pcVar37;
              while (*pcVar37 == pcVar37[lVar24]) {
                pcVar37 = pcVar37 + 1;
                if (pcVar19 <= pcVar37) goto LAB_18054cec0;
              }
            }
          } while( true );
        }
        lVar24 = (longlong)&UNK_180a06ba4 - (longlong)pcVar37;
        while (*pcVar37 == pcVar37[lVar24]) {
          pcVar37 = pcVar37 + 1;
          if (pcVar19 <= pcVar37) goto LAB_18054cec0;
        }
      }
    }
LAB_18054cf25:
    *(uint *)(param_1 + 0x60) = uVar39;
  }
  pcVar37 = "usages";
  do {
    pcVar38 = pcVar37;
    pcVar37 = pcVar38 + 1;
  } while (*pcVar37 != '\0');
  puStack_a8 = *(undefined8 **)(uStackX_10 + 0x30);
LAB_18054cf5b:
  if (puStack_a8 == (undefined8 *)0x0) {
    puStack_a8 = (undefined8 *)0x0;
  }
  else {
    pcVar37 = (char *)*puStack_a8;
    if (pcVar37 == (char *)0x0) {
      pcVar37 = (char *)0x180d48d24;
      pcVar19 = pcVar23;
    }
    else {
      pcVar19 = (char *)puStack_a8[2];
    }
    if (pcVar19 != pcVar38 + -0x180a34563) goto LAB_18054cfcb;
    pcVar19 = pcVar19 + (longlong)pcVar37;
    if (pcVar37 < pcVar19) {
      lVar24 = (longlong)&UNK_180a34564 - (longlong)pcVar37;
      while (*pcVar37 == pcVar37[lVar24]) {
        pcVar37 = pcVar37 + 1;
        if (pcVar19 <= pcVar37) goto LAB_18054cfa1;
      }
      goto LAB_18054cfcb;
    }
LAB_18054cfa1:
    pcVar37 = "usage";
    do {
      pcVar38 = pcVar37;
      pcVar37 = pcVar38 + 1;
    } while (*pcVar37 != '\0');
    for (puVar14 = (undefined8 *)puStack_a8[6]; puVar14 != (undefined8 *)0x0;
        puVar14 = (undefined8 *)puVar14[0xb]) {
      pcVar37 = (char *)*puVar14;
      if (pcVar37 == (char *)0x0) {
        pcVar37 = (char *)0x180d48d24;
        pcVar19 = pcVar23;
      }
      else {
        pcVar19 = (char *)puVar14[2];
      }
      if (pcVar19 == pcVar38 + -0x180a3455b) {
        pcVar19 = pcVar37 + (longlong)pcVar19;
        pcVar20 = pcVar23;
        if (pcVar19 <= pcVar37) {
LAB_18054d010:
          do {
            uVar40 = (int)pcVar20 + 1;
            pcVar37 = "usage";
            do {
              pcVar38 = pcVar37;
              pcVar37 = pcVar38 + 1;
            } while (*pcVar37 != '\0');
            while( true ) {
              do {
                puVar14 = (undefined8 *)puVar14[0xb];
                if (puVar14 == (undefined8 *)0x0) goto LAB_18054d075;
                pcVar37 = (char *)*puVar14;
                if (pcVar37 == (char *)0x0) {
                  pcVar37 = (char *)0x180d48d24;
                  pcVar19 = pcVar23;
                }
                else {
                  pcVar19 = (char *)puVar14[2];
                }
              } while (pcVar19 != pcVar38 + -0x180a3455b);
              pcVar19 = pcVar19 + (longlong)pcVar37;
              pcVar20 = (char *)(ulonglong)uVar40;
              if (pcVar19 <= pcVar37) break;
              lVar24 = (longlong)&UNK_180a3455c - (longlong)pcVar37;
              while (*pcVar37 == pcVar37[lVar24]) {
                pcVar37 = pcVar37 + 1;
                if (pcVar19 <= pcVar37) goto LAB_18054d010;
              }
            }
          } while( true );
        }
        lVar24 = (longlong)&UNK_180a3455c - (longlong)pcVar37;
        while (*pcVar37 == pcVar37[lVar24]) {
          pcVar37 = pcVar37 + 1;
          if (pcVar19 <= pcVar37) goto LAB_18054d010;
        }
      }
    }
LAB_18054d075:
    *(uint *)(param_1 + 100) = uVar40;
  }
  puVar14 = puStack_a8;
  pcVar37 = "kick_usages";
  do {
    pcVar38 = pcVar37;
    pcVar37 = pcVar38 + 1;
  } while (*pcVar37 != '\0');
  pcVar37 = *(char **)(uStackX_10 + 0x30);
LAB_18054d0a7:
  uVar40 = 0;
  pcVar19 = pcVar23;
  if (pcVar37 == (char *)0x0) goto LAB_18054d1ce;
  pcVar19 = *(char **)pcVar37;
  if (pcVar19 == (char *)0x0) {
    pcVar19 = (char *)0x180d48d24;
    pcVar20 = pcVar23;
  }
  else {
    pcVar20 = *(char **)(pcVar37 + 0x10);
  }
  if (pcVar20 == pcVar38 + -0x180a3457f) {
    pcVar20 = pcVar20 + (longlong)pcVar19;
    if (pcVar20 <= pcVar19) {
LAB_18054d0f0:
      pcVar38 = "kick_usage";
      do {
        pcVar19 = pcVar38;
        pcVar38 = pcVar19 + 1;
      } while (*pcVar38 != '\0');
      for (puVar11 = *(undefined8 **)(pcVar37 + 0x30); uVar39 = uVar40, puVar11 != (undefined8 *)0x0
          ; puVar11 = (undefined8 *)puVar11[0xb]) {
        pcVar38 = (char *)*puVar11;
        if (pcVar38 == (char *)0x0) {
          pcVar38 = (char *)0x180d48d24;
          pcVar20 = pcVar23;
        }
        else {
          pcVar20 = (char *)puVar11[2];
        }
        if (pcVar20 == pcVar19 + -0x180a3456f) {
          pcVar20 = pcVar20 + (longlong)pcVar38;
          pcVar21 = pcVar23;
          if (pcVar20 <= pcVar38) {
LAB_18054d160:
            do {
              uVar39 = (int)pcVar21 + 1;
              pcVar38 = "kick_usage";
              do {
                pcVar19 = pcVar38;
                pcVar38 = pcVar19 + 1;
              } while (*pcVar38 != '\0');
              while( true ) {
                do {
                  puVar11 = (undefined8 *)puVar11[0xb];
                  if (puVar11 == (undefined8 *)0x0) goto LAB_18054d1c5;
                  pcVar38 = (char *)*puVar11;
                  if (pcVar38 == (char *)0x0) {
                    pcVar38 = (char *)0x180d48d24;
                    pcVar20 = pcVar23;
                  }
                  else {
                    pcVar20 = (char *)puVar11[2];
                  }
                } while (pcVar20 != pcVar19 + -0x180a3456f);
                pcVar20 = pcVar38 + (longlong)pcVar20;
                pcVar21 = (char *)(ulonglong)uVar39;
                if (pcVar20 <= pcVar38) break;
                lVar24 = (longlong)&UNK_180a34570 - (longlong)pcVar38;
                while (*pcVar38 == pcVar38[lVar24]) {
                  pcVar38 = pcVar38 + 1;
                  if (pcVar20 <= pcVar38) goto LAB_18054d160;
                }
              }
            } while( true );
          }
          lVar24 = (longlong)&UNK_180a34570 - (longlong)pcVar38;
          while (*pcVar38 == pcVar38[lVar24]) {
            pcVar38 = pcVar38 + 1;
            if (pcVar20 <= pcVar38) goto LAB_18054d160;
          }
        }
      }
LAB_18054d1c5:
      *(uint *)(param_1 + 0x70) = uVar39;
      pcVar19 = pcVar37;
LAB_18054d1ce:
      pcVar37 = "guards";
      do {
        pcVar38 = pcVar37;
        pcVar37 = pcVar38 + 1;
      } while (*pcVar37 != '\0');
      for (pcVar37 = *(char **)(uStackX_10 + 0x30); pcVar20 = pcVar23, pcVar37 != (char *)0x0;
          pcVar37 = *(char **)(pcVar37 + 0x58)) {
        pcVar20 = *(char **)pcVar37;
        if (pcVar20 == (char *)0x0) {
          pcVar20 = (char *)0x180d48d24;
          pcVar21 = pcVar23;
        }
        else {
          pcVar21 = *(char **)(pcVar37 + 0x10);
        }
        if (pcVar21 == pcVar38 + -0x180a3465b) {
          pcVar21 = pcVar21 + (longlong)pcVar20;
          if (pcVar21 <= pcVar20) {
LAB_18054d240:
            pcVar38 = "guard";
            do {
              pcVar20 = pcVar38;
              pcVar38 = pcVar20 + 1;
            } while (*pcVar38 != '\0');
            for (puVar11 = *(undefined8 **)(pcVar37 + 0x30); puVar11 != (undefined8 *)0x0;
                puVar11 = (undefined8 *)puVar11[0xb]) {
              pcVar38 = (char *)*puVar11;
              if (pcVar38 == (char *)0x0) {
                pcVar38 = (char *)0x180d48d24;
                pcVar21 = pcVar23;
              }
              else {
                pcVar21 = (char *)puVar11[2];
              }
              if (pcVar21 == pcVar20 + -0x180a34653) {
                pcVar21 = pcVar38 + (longlong)pcVar21;
                pcVar16 = pcVar23;
                if (pcVar21 <= pcVar38) {
LAB_18054d2b0:
                  do {
                    uVar40 = (int)pcVar16 + 1;
                    pcVar38 = "guard";
                    do {
                      pcVar20 = pcVar38;
                      pcVar38 = pcVar20 + 1;
                    } while (*pcVar38 != '\0');
                    while( true ) {
                      do {
                        puVar11 = (undefined8 *)puVar11[0xb];
                        if (puVar11 == (undefined8 *)0x0) goto LAB_18054d315;
                        pcVar38 = (char *)*puVar11;
                        if (pcVar38 == (char *)0x0) {
                          pcVar38 = (char *)0x180d48d24;
                          pcVar21 = pcVar23;
                        }
                        else {
                          pcVar21 = (char *)puVar11[2];
                        }
                      } while (pcVar21 != pcVar20 + -0x180a34653);
                      pcVar21 = pcVar21 + (longlong)pcVar38;
                      pcVar16 = (char *)(ulonglong)uVar40;
                      if (pcVar21 <= pcVar38) break;
                      lVar24 = (longlong)&UNK_180a34654 - (longlong)pcVar38;
                      while (*pcVar38 == pcVar38[lVar24]) {
                        pcVar38 = pcVar38 + 1;
                        if (pcVar21 <= pcVar38) goto LAB_18054d2b0;
                      }
                    }
                  } while( true );
                }
                lVar24 = (longlong)&UNK_180a34654 - (longlong)pcVar38;
                while (*pcVar38 == pcVar38[lVar24]) {
                  pcVar38 = pcVar38 + 1;
                  if (pcVar21 <= pcVar38) goto LAB_18054d2b0;
                }
              }
            }
LAB_18054d315:
            *(uint *)(param_1 + 0xb0) = uVar40;
            pcVar20 = pcVar37;
            break;
          }
          lVar24 = (longlong)&UNK_180a3465c - (longlong)pcVar20;
          while (*pcVar20 == pcVar20[lVar24]) {
            pcVar20 = pcVar20 + 1;
            if (pcVar21 <= pcVar20) goto LAB_18054d240;
          }
        }
      }
      pcVar37 = "idles";
      do {
        pcVar38 = pcVar37;
        pcVar37 = pcVar38 + 1;
      } while (*pcVar37 != '\0');
      for (pcVar37 = *(char **)(uStackX_10 + 0x30); pcVar37 != (char *)0x0;
          pcVar37 = *(char **)(pcVar37 + 0x58)) {
        pcVar21 = *(char **)pcVar37;
        if (pcVar21 == (char *)0x0) {
          pcVar21 = (char *)0x180d48d24;
          pcVar16 = pcVar23;
        }
        else {
          pcVar16 = *(char **)(pcVar37 + 0x10);
        }
        if (pcVar16 == pcVar38 + -0x180a34673) {
          pcVar16 = pcVar16 + (longlong)pcVar21;
          if (pcVar16 <= pcVar21) {
LAB_18054d381:
            uVar8 = FUN_180631780(pcVar37,&UNK_180a34d04);
            *(undefined4 *)(param_1 + 0xf0) = uVar8;
            pcVar23 = pcVar37;
            break;
          }
          lVar24 = (longlong)&UNK_180a34674 - (longlong)pcVar21;
          while (*pcVar21 == pcVar21[lVar24]) {
            pcVar21 = pcVar21 + 1;
            if (pcVar16 <= pcVar21) goto LAB_18054d381;
          }
        }
      }
      pcVar37 = "rider_idles";
      do {
        pcVar38 = pcVar37;
        pcVar37 = pcVar38 + 1;
      } while (*pcVar37 != '\0');
      for (puVar11 = *(undefined8 **)(uVar25 + 0x30); puVar11 != (undefined8 *)0x0;
          puVar11 = (undefined8 *)puVar11[0xb]) {
        pcVar37 = (char *)*puVar11;
        if (pcVar37 == (char *)0x0) {
          pcVar21 = (char *)0x0;
          pcVar37 = (char *)0x180d48d24;
        }
        else {
          pcVar21 = (char *)puVar11[2];
        }
        if (pcVar21 == pcVar38 + -0x180a34667) {
          pcVar21 = pcVar37 + (longlong)pcVar21;
          if (pcVar21 <= pcVar37) {
LAB_18054d406:
            puStack_78 = puVar11;
            uVar8 = FUN_180631780(puVar11,&UNK_180a34600);
            *(undefined4 *)(param_1 + 0x130) = uVar8;
            goto LAB_18054d42d;
          }
          lVar24 = (longlong)&UNK_180a34668 - (longlong)pcVar37;
          while (*pcVar37 == pcVar37[lVar24]) {
            pcVar37 = pcVar37 + 1;
            if (pcVar21 <= pcVar37) goto LAB_18054d406;
          }
        }
      }
      puVar11 = (undefined8 *)0x0;
      puStack_78 = (undefined8 *)0x0;
LAB_18054d42d:
      if (iStack_90 < 1) {
        uVar8 = FUN_180552800(&DAT_180c95ff0,param_1);
        *(undefined4 *)(param_1 + 0x20) = uVar8;
        uVar13 = FUN_180552d10((longlong)*(int *)(param_1 + 100));
        *(undefined8 *)(param_1 + 0x28) = uVar13;
        uVar13 = FUN_180552d90((longlong)*(int *)(param_1 + 0x70));
        *(undefined8 *)(param_1 + 0x68) = uVar13;
        uVar13 = FUN_180552e00((longlong)*(int *)(param_1 + 0xb0));
        *(undefined8 *)(param_1 + 0x78) = uVar13;
        if ((longlong)*(int *)(param_1 + 0xf0) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0xf0) * 0xc);
        }
        uVar12 = 0;
        *(undefined8 *)(param_1 + 0xb8) = uVar13;
        if ((longlong)*(int *)(param_1 + 0x130) != 0) {
          uVar12 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x130) * 0x18);
        }
        uVar13 = 0;
        *(undefined8 *)(param_1 + 0xf8) = uVar12;
        if (*(int *)(param_1 + 0x158) == 0) {
          iVar9 = 0;
        }
        else {
          uVar13 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x158) * 4);
          iVar9 = *(int *)(param_1 + 0x158);
        }
        uVar12 = 0;
        *(undefined8 *)(param_1 + 0x148) = uVar13;
        if (iVar9 != 0) {
          uVar12 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9 * 4,3);
        }
        *(undefined8 *)(param_1 + 0x150) = uVar12;
      }
      else {
        iVar9 = FUN_180552800(&DAT_180c95ff0,&puStack_a0);
        *(int *)(param_1 + 0x20) = iVar9;
        if (-1 < iVar9) {
          lVar24 = (longlong)iVar9 * 0x170 + _DAT_180c95ff0;
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar24 + 0x20);
          *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(lVar24 + 0x134);
          *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(lVar24 + 0x140);
          iVar9 = *(int *)(param_1 + 0x158);
          iVar10 = *(int *)(lVar24 + 0x158) + iVar9;
          if (iVar10 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar10 * 4);
            iVar9 = *(int *)(param_1 + 0x158);
          }
          uVar12 = 0;
          *(undefined8 *)(param_1 + 0x148) = uVar13;
          if (*(int *)(lVar24 + 0x158) + iVar9 != 0) {
            uVar12 = FUN_18062b420(_DAT_180c8ed18);
            iVar9 = *(int *)(param_1 + 0x158);
          }
          lVar31 = 0;
          *(undefined8 *)(param_1 + 0x150) = uVar12;
          iVar34 = 0;
          iVar10 = *(int *)(lVar24 + 0x158);
          if (0 < iVar10) {
            do {
              *(undefined4 *)
               (*(longlong *)(param_1 + 0x148) + (longlong)(*(int *)(param_1 + 0x158) + iVar34) * 4)
                   = *(undefined4 *)(lVar31 + *(longlong *)(lVar24 + 0x148));
              *(undefined4 *)
               (*(longlong *)(param_1 + 0x150) + (longlong)(*(int *)(param_1 + 0x158) + iVar34) * 4)
                   = *(undefined4 *)(lVar31 + *(longlong *)(lVar24 + 0x150));
              iVar34 = iVar34 + 1;
              lVar31 = lVar31 + 4;
              iVar10 = *(int *)(lVar24 + 0x158);
            } while (iVar34 < iVar10);
            iVar9 = *(int *)(param_1 + 0x158);
          }
          *(int *)(param_1 + 0x158) = iVar10 + iVar9;
          *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(lVar24 + 0x138);
          *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(lVar24 + 0x13c);
          *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar24 + 0x15c);
          *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(lVar24 + 0x160);
          *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(lVar24 + 0x164);
          *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(lVar24 + 0x168);
          uVar13 = FUN_180552d10();
          *(undefined8 *)(param_1 + 0x28) = uVar13;
          iVar9 = 0;
          uStackX_18 = *(uint *)(lVar24 + 100);
          if (0 < (int)uStackX_18) {
            lVar31 = 0;
            do {
              puVar14 = (undefined8 *)(*(longlong *)(lVar24 + 0x28) + lVar31);
              lVar22 = 2;
              puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar31);
              do {
                uVar13 = puVar14[1];
                *puVar15 = *puVar14;
                puVar15[1] = uVar13;
                uVar13 = puVar14[3];
                puVar15[2] = puVar14[2];
                puVar15[3] = uVar13;
                uVar13 = puVar14[5];
                puVar15[4] = puVar14[4];
                puVar15[5] = uVar13;
                uVar13 = puVar14[7];
                puVar15[6] = puVar14[6];
                puVar15[7] = uVar13;
                uVar13 = puVar14[9];
                puVar15[8] = puVar14[8];
                puVar15[9] = uVar13;
                uVar13 = puVar14[0xb];
                puVar15[10] = puVar14[10];
                puVar15[0xb] = uVar13;
                uVar8 = *(undefined4 *)((longlong)puVar14 + 100);
                uVar5 = *(undefined4 *)(puVar14 + 0xd);
                uVar6 = *(undefined4 *)((longlong)puVar14 + 0x6c);
                *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar14 + 0xc);
                *(undefined4 *)((longlong)puVar15 + 100) = uVar8;
                *(undefined4 *)(puVar15 + 0xd) = uVar5;
                *(undefined4 *)((longlong)puVar15 + 0x6c) = uVar6;
                puVar1 = puVar15 + 0x10;
                uVar13 = puVar14[0xf];
                puVar15[0xe] = puVar14[0xe];
                puVar15[0xf] = uVar13;
                puVar14 = puVar14 + 0x10;
                lVar22 = lVar22 + -1;
                puVar15 = puVar1;
              } while (lVar22 != 0);
              *puVar1 = *puVar14;
              iVar9 = iVar9 + 1;
              lVar31 = lVar31 + 0x108;
              uStackX_18 = *(uint *)(lVar24 + 100);
              puVar14 = puStack_a8;
            } while (iVar9 < (int)uStackX_18);
          }
          *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + uStackX_18;
          uVar13 = FUN_180552d90((longlong)(*(int *)(lVar24 + 0x70) + *(int *)(param_1 + 0x70)));
          *(undefined8 *)(param_1 + 0x68) = uVar13;
          iVar9 = 0;
          uStackX_20 = *(uint *)(lVar24 + 0x70);
          if (0 < (int)uStackX_20) {
            lVar31 = 0;
            do {
              lVar22 = *(longlong *)(lVar24 + 0x68);
              lVar4 = *(longlong *)(param_1 + 0x68);
              puVar2 = (undefined4 *)(lVar31 + lVar22);
              uVar8 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              puVar29 = (undefined4 *)(lVar4 + lVar31);
              *puVar29 = *puVar2;
              puVar29[1] = uVar8;
              puVar29[2] = uVar5;
              puVar29[3] = uVar6;
              *(undefined4 *)(lVar4 + 0x10 + lVar31) = *(undefined4 *)(lVar31 + 0x10 + lVar22);
              iVar9 = iVar9 + 1;
              lVar31 = lVar31 + 0x14;
              uStackX_20 = *(uint *)(lVar24 + 0x70);
              puVar14 = puStack_a8;
            } while (iVar9 < (int)uStackX_20);
          }
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + uStackX_20;
          uVar13 = FUN_180552e00((longlong)(*(int *)(lVar24 + 0xb0) + *(int *)(param_1 + 0xb0)));
          *(undefined8 *)(param_1 + 0x78) = uVar13;
          uVar25 = 0;
          iStack_b8 = *(int *)(lVar24 + 0xb0);
          uVar41 = uVar25;
          if (0 < iStack_b8) {
            do {
              lVar31 = *(longlong *)(lVar24 + 0x78);
              lVar22 = *(longlong *)(param_1 + 0x78);
              uVar13 = ((undefined8 *)(uVar25 + lVar31))[1];
              *(undefined8 *)(uVar25 + lVar22) = *(undefined8 *)(uVar25 + lVar31);
              ((undefined8 *)(uVar25 + lVar22))[1] = uVar13;
              puVar14 = (undefined8 *)(uVar25 + 0x10 + lVar31);
              uVar13 = puVar14[1];
              puVar15 = (undefined8 *)(uVar25 + 0x10 + lVar22);
              *puVar15 = *puVar14;
              puVar15[1] = uVar13;
              puVar14 = (undefined8 *)(uVar25 + 0x20 + lVar31);
              uVar13 = puVar14[1];
              puVar15 = (undefined8 *)(uVar25 + 0x20 + lVar22);
              *puVar15 = *puVar14;
              puVar15[1] = uVar13;
              puVar14 = (undefined8 *)(uVar25 + 0x30 + lVar31);
              uVar13 = puVar14[1];
              puVar15 = (undefined8 *)(uVar25 + 0x30 + lVar22);
              *puVar15 = *puVar14;
              puVar15[1] = uVar13;
              puVar14 = (undefined8 *)(uVar25 + 0x40 + lVar31);
              uVar13 = puVar14[1];
              puVar15 = (undefined8 *)(uVar25 + 0x40 + lVar22);
              *puVar15 = *puVar14;
              puVar15[1] = uVar13;
              puVar14 = (undefined8 *)(uVar25 + 0x50 + lVar31);
              uVar13 = puVar14[1];
              puVar15 = (undefined8 *)(uVar25 + 0x50 + lVar22);
              *puVar15 = *puVar14;
              puVar15[1] = uVar13;
              *(undefined8 *)(uVar25 + 0x60 + lVar22) = *(undefined8 *)(uVar25 + 0x60 + lVar31);
              uVar40 = (int)uVar41 + 1;
              uVar41 = (ulonglong)uVar40;
              uVar25 = uVar25 + 0x68;
              iStack_b8 = *(int *)(lVar24 + 0xb0);
              puVar14 = puStack_a8;
            } while ((int)uVar40 < iStack_b8);
          }
          uVar13 = 0;
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + iStack_b8;
          iVar9 = *(int *)(lVar24 + 0xf0) + *(int *)(param_1 + 0xf0);
          if (iVar9 != 0) {
            uVar13 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9 * 0xc,
                                   CONCAT71((int7)(uVar41 >> 8),3));
          }
          lVar31 = 0;
          *(undefined8 *)(param_1 + 0xb8) = uVar13;
          iVar9 = 0;
          iStack_b4 = *(int *)(lVar24 + 0xf0);
          if (0 < iStack_b4) {
            do {
              lVar22 = *(longlong *)(lVar24 + 0xb8);
              lVar4 = *(longlong *)(param_1 + 0xb8);
              *(undefined8 *)(lVar4 + lVar31) = *(undefined8 *)(lVar31 + lVar22);
              *(undefined4 *)(lVar4 + 8 + lVar31) = *(undefined4 *)(lVar31 + 8 + lVar22);
              iVar9 = iVar9 + 1;
              lVar31 = lVar31 + 0xc;
              iStack_b4 = *(int *)(lVar24 + 0xf0);
              puVar14 = puStack_a8;
            } while (iVar9 < iStack_b4);
          }
          uVar13 = 0;
          *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + iStack_b4;
          iVar9 = *(int *)(lVar24 + 0x130) + *(int *)(param_1 + 0x130);
          if (iVar9 != 0) {
            uVar13 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar9 * 0x18,3);
          }
          uVar25 = 0;
          *(undefined8 *)(param_1 + 0xf8) = uVar13;
          iStack_b0 = *(int *)(lVar24 + 0x130);
          uVar41 = uVar25;
          if (0 < iStack_b0) {
            do {
              lVar31 = *(longlong *)(lVar24 + 0xf8);
              lVar22 = *(longlong *)(param_1 + 0xf8);
              puVar2 = (undefined4 *)(uVar25 + lVar31);
              uVar8 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              puVar29 = (undefined4 *)(uVar25 + lVar22);
              *puVar29 = *puVar2;
              puVar29[1] = uVar8;
              puVar29[2] = uVar5;
              puVar29[3] = uVar6;
              *(undefined8 *)(uVar25 + 0x10 + lVar22) = *(undefined8 *)(uVar25 + 0x10 + lVar31);
              uVar40 = (int)uVar41 + 1;
              uVar41 = (ulonglong)uVar40;
              uVar25 = uVar25 + 0x18;
              iStack_b0 = *(int *)(lVar24 + 0x130);
              puVar14 = puStack_a8;
            } while ((int)uVar40 < iStack_b0);
          }
          *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + iStack_b0;
          uVar25 = uStackX_10;
        }
      }
      FUN_180631000(uVar25,&UNK_180a345e8,param_1 + 0x134);
      puStack_d8 = &UNK_180a3c3e0;
      uStack_c0 = 0;
      puStack_d0 = (undefined1 *)0x0;
      iStack_c8 = 0;
      lVar24 = FUN_1800a02a0(uVar25,&UNK_180a34638);
      if (lVar24 != 0) {
        lVar31 = 0x180d48d24;
        if (*(longlong *)(lVar24 + 8) != 0) {
          lVar31 = *(longlong *)(lVar24 + 8);
        }
        (**(code **)(puStack_d8 + 0x10))(&puStack_d8,lVar31);
      }
      if (0 < iStack_c8) {
        uVar8 = FUN_18055b2f0(&DAT_180c96150,&puStack_d8);
        *(undefined4 *)(param_1 + 0x138) = uVar8;
      }
      iStack_c8 = 0;
      if (puStack_d0 != (undefined1 *)0x0) {
        *puStack_d0 = 0;
      }
      lVar24 = FUN_1800a02a0(uVar25,&UNK_180a34610);
      if (lVar24 != 0) {
        lVar31 = 0x180d48d24;
        if (*(longlong *)(lVar24 + 8) != 0) {
          lVar31 = *(longlong *)(lVar24 + 8);
        }
        (**(code **)(puStack_d8 + 0x10))(&puStack_d8,lVar31);
      }
      if (0 < iStack_c8) {
        uVar8 = FUN_18055b2f0(&DAT_180c96150,&puStack_d8);
        *(undefined4 *)(param_1 + 0x13c) = uVar8;
      }
      iStack_c8 = 0;
      if (puStack_d0 != (undefined1 *)0x0) {
        *puStack_d0 = 0;
      }
      lVar24 = FUN_1800a02a0(uVar25,&UNK_180a346e8);
      if (lVar24 != 0) {
        lVar31 = 0x180d48d24;
        if (*(longlong *)(lVar24 + 8) != 0) {
          lVar31 = *(longlong *)(lVar24 + 8);
        }
        (**(code **)(puStack_d8 + 0x10))(&puStack_d8,lVar31);
      }
      if (0 < iStack_c8) {
        uVar8 = (**(code **)(*_DAT_180c86878 + 0xd0))(_DAT_180c86878,&puStack_d8);
        *(undefined4 *)(param_1 + 0x15c) = uVar8;
      }
      iStack_c8 = 0;
      if (puStack_d0 != (undefined1 *)0x0) {
        *puStack_d0 = 0;
      }
      lVar24 = FUN_1800a02a0(uVar25,&UNK_180a346d0);
      if (lVar24 != 0) {
        lVar31 = 0x180d48d24;
        if (*(longlong *)(lVar24 + 8) != 0) {
          lVar31 = *(longlong *)(lVar24 + 8);
        }
        (**(code **)(puStack_d8 + 0x10))(&puStack_d8,lVar31);
      }
      if (0 < iStack_c8) {
        uVar8 = (**(code **)(*_DAT_180c86878 + 0xd0))(_DAT_180c86878,&puStack_d8);
        *(undefined4 *)(param_1 + 0x160) = uVar8;
      }
      iStack_c8 = 0;
      if (puStack_d0 != (undefined1 *)0x0) {
        *puStack_d0 = 0;
      }
      lVar24 = FUN_1800a02a0(uVar25,&UNK_180a34708);
      if (lVar24 != 0) {
        lVar31 = 0x180d48d24;
        if (*(longlong *)(lVar24 + 8) != 0) {
          lVar31 = *(longlong *)(lVar24 + 8);
        }
        (**(code **)(puStack_d8 + 0x10))(&puStack_d8,lVar31);
      }
      if (0 < iStack_c8) {
        uVar8 = (**(code **)(*_DAT_180c86878 + 0xd0))(_DAT_180c86878,&puStack_d8);
        *(undefined4 *)(param_1 + 0x164) = uVar8;
      }
      iStack_c8 = 0;
      if (puStack_d0 != (undefined1 *)0x0) {
        *puStack_d0 = 0;
      }
      lVar24 = FUN_1800a02a0(uVar25);
      if (lVar24 != 0) {
        (**(code **)(puStack_d8 + 0x10))(&puStack_d8);
      }
      if (0 < iStack_c8) {
        uVar8 = (**(code **)(*_DAT_180c86878 + 0xd0))();
        *(undefined4 *)(param_1 + 0x168) = uVar8;
      }
      if ((puStack_80 != (undefined8 *)0x0) &&
         (puVar15 = (undefined8 *)FUN_18005d4b0(puStack_80,&UNK_180a345b8,0),
         puVar15 != (undefined8 *)0x0)) {
        pcVar37 = (char *)0x0;
LAB_18054dc60:
        iStack_c8 = 0;
        if (puStack_d0 != (undefined1 *)0x0) {
          *puStack_d0 = 0;
        }
        lVar24 = FUN_1800a02a0(puVar15,&UNK_180a0ae28);
        if (lVar24 != 0) {
          lVar31 = 0x180d48d24;
          if (*(longlong *)(lVar24 + 8) != 0) {
            lVar31 = *(longlong *)(lVar24 + 8);
          }
          (**(code **)(puStack_d8 + 0x10))(&puStack_d8,lVar31);
        }
        pcVar38 = pcVar37 + *(longlong *)(param_1 + 0x148);
        pcVar38[0] = -1;
        pcVar38[1] = -1;
        pcVar38[2] = -1;
        pcVar38[3] = -1;
        if (0 < iStack_c8) {
          uVar8 = FUN_180554d20(&DAT_180c96050,&puStack_d8);
          *(undefined4 *)(pcVar37 + *(longlong *)(param_1 + 0x148)) = uVar8;
        }
        iStack_c8 = 0;
        if (puStack_d0 != (undefined1 *)0x0) {
          *puStack_d0 = 0;
        }
        lVar24 = FUN_1800a02a0(puVar15,&UNK_180a34688);
        if (lVar24 != 0) {
          lVar31 = 0x180d48d24;
          if (*(longlong *)(lVar24 + 8) != 0) {
            lVar31 = *(longlong *)(lVar24 + 8);
          }
          (**(code **)(puStack_d8 + 0x10))(&puStack_d8,lVar31);
        }
        pcVar38 = pcVar37 + *(longlong *)(param_1 + 0x150);
        pcVar38[0] = -1;
        pcVar38[1] = -1;
        pcVar38[2] = -1;
        pcVar38[3] = -1;
        if (0 < iStack_c8) {
          uVar8 = FUN_180552800(&DAT_180c95ff0,&puStack_d8);
          *(undefined4 *)(pcVar37 + *(longlong *)(param_1 + 0x150)) = uVar8;
        }
        pcVar37 = pcVar37 + 4;
        pcVar38 = "movement_set";
        do {
          pcVar21 = pcVar38;
          pcVar38 = pcVar21 + 1;
        } while (*pcVar38 != '\0');
        puVar15 = (undefined8 *)puVar15[0xb];
        puVar11 = puStack_78;
        puVar14 = puStack_a8;
        if (puVar15 != (undefined8 *)0x0) {
          do {
            pcVar38 = (char *)*puVar15;
            if (pcVar38 == (char *)0x0) {
              pcVar38 = (char *)0x180d48d24;
              pcVar16 = (char *)0x0;
            }
            else {
              pcVar16 = (char *)puVar15[2];
            }
            if (pcVar16 == pcVar21 + -0x180a345b7) {
              pcVar16 = pcVar16 + (longlong)pcVar38;
              if (pcVar16 <= pcVar38) goto LAB_18054dc60;
              lVar24 = (longlong)&UNK_180a345b8 - (longlong)pcVar38;
              while (*pcVar38 == pcVar38[lVar24]) {
                pcVar38 = pcVar38 + 1;
                if (pcVar16 <= pcVar38) goto LAB_18054dc60;
              }
            }
            puVar15 = (undefined8 *)puVar15[0xb];
            if (puVar15 == (undefined8 *)0x0) break;
          } while( true );
        }
      }
      if (puStack_70 != (undefined8 *)0x0) {
        FUN_18054c5e0(param_1);
      }
      if ((puVar14 != (undefined8 *)0x0) &&
         (puVar14 = (undefined8 *)FUN_18005d4b0(puVar14,&UNK_180a3455c,0), uVar40 = uStackX_18,
         puVar14 != (undefined8 *)0x0)) {
LAB_18054de10:
        do {
          FUN_18054ff10((longlong)(int)uVar40 * 0x108 + *(longlong *)(param_1 + 0x28),puVar14);
          uVar40 = uVar40 + 1;
          pcVar37 = "usage";
          do {
            pcVar38 = pcVar37;
            pcVar37 = pcVar38 + 1;
          } while (*pcVar37 != '\0');
          while( true ) {
            do {
              puVar14 = (undefined8 *)puVar14[0xb];
              if (puVar14 == (undefined8 *)0x0) goto LAB_18054de8f;
              pcVar37 = (char *)*puVar14;
              if (pcVar37 == (char *)0x0) {
                pcVar21 = (char *)0x0;
                pcVar37 = (char *)0x180d48d24;
              }
              else {
                pcVar21 = (char *)puVar14[2];
              }
            } while (pcVar21 != pcVar38 + -0x180a3455b);
            pcVar21 = pcVar21 + (longlong)pcVar37;
            if (pcVar21 <= pcVar37) break;
            lVar24 = (longlong)&UNK_180a3455c - (longlong)pcVar37;
            while (*pcVar37 == pcVar37[lVar24]) {
              pcVar37 = pcVar37 + 1;
              if (pcVar21 <= pcVar37) goto LAB_18054de10;
            }
          }
        } while( true );
      }
LAB_18054de8f:
      if (pcVar19 != (char *)0x0) {
        pcVar37 = "kick_usage";
        do {
          pcVar38 = pcVar37;
          pcVar37 = pcVar38 + 1;
        } while (*pcVar37 != '\0');
        for (puVar14 = *(undefined8 **)(pcVar19 + 0x30); puVar14 != (undefined8 *)0x0;
            puVar14 = (undefined8 *)puVar14[0xb]) {
          pcVar37 = (char *)*puVar14;
          if (pcVar37 == (char *)0x0) {
            pcVar19 = (char *)0x0;
            pcVar37 = (char *)0x180d48d24;
          }
          else {
            pcVar19 = (char *)puVar14[2];
          }
          if (pcVar19 == pcVar38 + -0x180a3456f) {
            pcVar19 = pcVar19 + (longlong)pcVar37;
            uVar40 = uStackX_20;
            if (pcVar19 <= pcVar37) {
LAB_18054df10:
              FUN_1805528b0(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar40 * 0x14);
              uVar40 = uVar40 + 1;
              pcVar37 = "kick_usage";
              do {
                pcVar38 = pcVar37;
                pcVar37 = pcVar38 + 1;
              } while (*pcVar37 != '\0');
              puVar14 = (undefined8 *)puVar14[0xb];
              if (puVar14 != (undefined8 *)0x0) {
                do {
                  pcVar37 = (char *)*puVar14;
                  if (pcVar37 == (char *)0x0) {
                    pcVar19 = (char *)0x0;
                    pcVar37 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar19 = (char *)puVar14[2];
                  }
                  if (pcVar19 == pcVar38 + -0x180a3456f) {
                    pcVar19 = pcVar37 + (longlong)pcVar19;
                    if (pcVar19 <= pcVar37) goto LAB_18054df10;
                    lVar24 = (longlong)&UNK_180a34570 - (longlong)pcVar37;
                    while (*pcVar37 == pcVar37[lVar24]) {
                      pcVar37 = pcVar37 + 1;
                      if (pcVar19 <= pcVar37) goto LAB_18054df10;
                    }
                  }
                  puVar14 = (undefined8 *)puVar14[0xb];
                  if (puVar14 == (undefined8 *)0x0) break;
                } while( true );
              }
              break;
            }
            lVar24 = (longlong)&UNK_180a34570 - (longlong)pcVar37;
            while (*pcVar37 == pcVar37[lVar24]) {
              pcVar37 = pcVar37 + 1;
              if (pcVar19 <= pcVar37) goto LAB_18054df10;
            }
          }
        }
      }
      if (pcVar20 != (char *)0x0) {
        pcVar37 = "guard";
        do {
          pcVar38 = pcVar37;
          pcVar37 = pcVar38 + 1;
        } while (*pcVar37 != '\0');
        for (puVar14 = *(undefined8 **)(pcVar20 + 0x30); puVar14 != (undefined8 *)0x0;
            puVar14 = (undefined8 *)puVar14[0xb]) {
          pcVar37 = (char *)*puVar14;
          if (pcVar37 == (char *)0x0) {
            pcVar37 = (char *)0x180d48d24;
            pcVar19 = (char *)0x0;
          }
          else {
            pcVar19 = (char *)puVar14[2];
          }
          if (pcVar19 == pcVar38 + -0x180a34653) {
            pcVar19 = pcVar19 + (longlong)pcVar37;
            iVar9 = iStack_b8;
            if (pcVar19 <= pcVar37) {
LAB_18054e010:
              FUN_1805511b0((longlong)iVar9 * 0x68 + *(longlong *)(param_1 + 0x78));
              iVar9 = iVar9 + 1;
              pcVar37 = "guard";
              do {
                pcVar38 = pcVar37;
                pcVar37 = pcVar38 + 1;
              } while (*pcVar37 != '\0');
              puVar14 = (undefined8 *)puVar14[0xb];
              if (puVar14 != (undefined8 *)0x0) {
                do {
                  pcVar37 = (char *)*puVar14;
                  if (pcVar37 == (char *)0x0) {
                    pcVar37 = (char *)0x180d48d24;
                    pcVar19 = (char *)0x0;
                  }
                  else {
                    pcVar19 = (char *)puVar14[2];
                  }
                  if (pcVar19 == pcVar38 + -0x180a34653) {
                    pcVar19 = pcVar19 + (longlong)pcVar37;
                    if (pcVar19 <= pcVar37) goto LAB_18054e010;
                    lVar24 = (longlong)&UNK_180a34654 - (longlong)pcVar37;
                    while (*pcVar37 == pcVar37[lVar24]) {
                      pcVar37 = pcVar37 + 1;
                      if (pcVar19 <= pcVar37) goto LAB_18054e010;
                    }
                  }
                  puVar14 = (undefined8 *)puVar14[0xb];
                  if (puVar14 == (undefined8 *)0x0) break;
                } while( true );
              }
              break;
            }
            lVar24 = (longlong)&UNK_180a34654 - (longlong)pcVar37;
            while (*pcVar37 == pcVar37[lVar24]) {
              pcVar37 = pcVar37 + 1;
              if (pcVar19 <= pcVar37) goto LAB_18054e010;
            }
          }
        }
      }
      if (pcVar23 != (char *)0x0) {
        pcVar37 = "idle";
        do {
          pcVar38 = pcVar37;
          pcVar37 = pcVar38 + 1;
        } while (*pcVar37 != '\0');
        for (puVar14 = *(undefined8 **)(pcVar23 + 0x30); puVar14 != (undefined8 *)0x0;
            puVar14 = (undefined8 *)puVar14[0xb]) {
          pcVar23 = (char *)*puVar14;
          if (pcVar23 == (char *)0x0) {
            pcVar23 = (char *)0x180d48d24;
            pcVar37 = (char *)0x0;
          }
          else {
            pcVar37 = (char *)puVar14[2];
          }
          if (pcVar37 == pcVar38 + -0x180a34d03) {
            pcVar37 = pcVar23 + (longlong)pcVar37;
            iVar9 = iStack_b4;
            if (pcVar37 <= pcVar23) {
LAB_18054e120:
              FUN_180551870(*(longlong *)(param_1 + 0xb8) + (longlong)iVar9 * 0xc);
              iVar9 = iVar9 + 1;
              pcVar23 = "idle";
              do {
                pcVar37 = pcVar23;
                pcVar23 = pcVar37 + 1;
              } while (*pcVar23 != '\0');
              puVar14 = (undefined8 *)puVar14[0xb];
              if (puVar14 != (undefined8 *)0x0) {
                do {
                  pcVar23 = (char *)*puVar14;
                  if (pcVar23 == (char *)0x0) {
                    pcVar23 = (char *)0x180d48d24;
                    pcVar38 = (char *)0x0;
                  }
                  else {
                    pcVar38 = (char *)puVar14[2];
                  }
                  if (pcVar38 == pcVar37 + -0x180a34d03) {
                    pcVar38 = pcVar38 + (longlong)pcVar23;
                    if (pcVar38 <= pcVar23) goto LAB_18054e120;
                    lVar24 = (longlong)&UNK_180a34d04 - (longlong)pcVar23;
                    while (*pcVar23 == pcVar23[lVar24]) {
                      pcVar23 = pcVar23 + 1;
                      if (pcVar38 <= pcVar23) goto LAB_18054e120;
                    }
                  }
                  puVar14 = (undefined8 *)puVar14[0xb];
                  if (puVar14 == (undefined8 *)0x0) break;
                } while( true );
              }
              break;
            }
            lVar24 = (longlong)&UNK_180a34d04 - (longlong)pcVar23;
            while (*pcVar23 == pcVar23[lVar24]) {
              pcVar23 = pcVar23 + 1;
              if (pcVar37 <= pcVar23) goto LAB_18054e120;
            }
          }
        }
      }
      if (puVar11 != (undefined8 *)0x0) {
        pcVar23 = "rider_idle";
        do {
          pcVar37 = pcVar23;
          pcVar23 = pcVar37 + 1;
        } while (*pcVar23 != '\0');
        for (puVar14 = (undefined8 *)puVar11[6]; puVar14 != (undefined8 *)0x0;
            puVar14 = (undefined8 *)puVar14[0xb]) {
          pcVar23 = (char *)*puVar14;
          if (pcVar23 == (char *)0x0) {
            pcVar23 = (char *)0x180d48d24;
            pcVar38 = (char *)0x0;
          }
          else {
            pcVar38 = (char *)puVar14[2];
          }
          if (pcVar38 == pcVar37 + -0x180a345ff) {
            pcVar38 = pcVar23 + (longlong)pcVar38;
            iVar9 = iStack_b0;
            if (pcVar38 <= pcVar23) {
LAB_18054e220:
              FUN_180551ad0(*(longlong *)(param_1 + 0xf8) + (longlong)iVar9 * 0x18);
              iVar9 = iVar9 + 1;
              pcVar23 = "rider_idle";
              do {
                pcVar37 = pcVar23;
                pcVar23 = pcVar37 + 1;
              } while (*pcVar23 != '\0');
              puVar14 = (undefined8 *)puVar14[0xb];
              if (puVar14 != (undefined8 *)0x0) {
                do {
                  pcVar23 = (char *)*puVar14;
                  if (pcVar23 == (char *)0x0) {
                    pcVar23 = (char *)0x180d48d24;
                    pcVar38 = (char *)0x0;
                  }
                  else {
                    pcVar38 = (char *)puVar14[2];
                  }
                  if (pcVar38 == pcVar37 + -0x180a345ff) {
                    pcVar38 = pcVar38 + (longlong)pcVar23;
                    if (pcVar38 <= pcVar23) goto LAB_18054e220;
                    lVar24 = (longlong)&UNK_180a34600 - (longlong)pcVar23;
                    while (*pcVar23 == pcVar23[lVar24]) {
                      pcVar23 = pcVar23 + 1;
                      if (pcVar38 <= pcVar23) goto LAB_18054e220;
                    }
                  }
                  puVar14 = (undefined8 *)puVar14[0xb];
                  if (puVar14 == (undefined8 *)0x0) break;
                } while( true );
              }
              break;
            }
            lVar24 = (longlong)&UNK_180a34600 - (longlong)pcVar23;
            while (*pcVar23 == pcVar23[lVar24]) {
              pcVar23 = pcVar23 + 1;
              if (pcVar38 <= pcVar23) goto LAB_18054e220;
            }
          }
        }
      }
      uVar25 = 0;
      iVar10 = 0;
      iVar9 = *(int *)(param_1 + 100);
      if (0 < iVar9) {
        iVar34 = 1;
        uVar41 = uVar25;
        uVar35 = uVar25;
        do {
          uVar28 = uVar35;
          iVar10 = iVar34;
          if (iVar34 < iVar9) {
            do {
              lVar24 = *(longlong *)(param_1 + 0x28);
              if (((((*(int *)(lVar24 + uVar35) != -1) &&
                    (*(int *)(lVar24 + uVar35) == *(int *)(uVar28 + 0x108 + lVar24))) &&
                   (*(char *)(lVar24 + 4 + uVar35) == *(char *)(uVar28 + 0x10c + lVar24))) &&
                  ((*(char *)(lVar24 + 5 + uVar35) == *(char *)(uVar28 + 0x10d + lVar24) &&
                   (*(char *)(lVar24 + 6 + uVar35) == *(char *)(uVar28 + 0x10e + lVar24))))) &&
                 (*(int *)(lVar24 + 8 + uVar35) == *(int *)(uVar28 + 0x110 + lVar24))) {
                *(undefined4 *)(lVar24 + uVar35) = 0xffffffff;
                uVar41 = (ulonglong)((int)uVar41 + 1);
              }
              iVar10 = iVar10 + 1;
              iVar9 = *(int *)(param_1 + 100);
              uVar28 = uVar28 + 0x108;
            } while (iVar10 < iVar9);
          }
          iVar10 = (int)uVar41;
          iVar34 = iVar34 + 1;
          uVar35 = uVar35 + 0x108;
        } while (iVar34 <= iVar9);
      }
      if (0 < iVar10) {
        piVar26 = *(int **)(param_1 + 0x28);
        uVar13 = FUN_180552d10((longlong)(iVar9 - iVar10));
        *(undefined8 *)(param_1 + 0x28) = uVar13;
        iVar9 = *(int *)(param_1 + 100);
        piVar27 = piVar26;
        uVar41 = uVar25;
        uVar35 = uVar25;
        if (0 < iVar9) {
          do {
            if (*piVar27 != -1) {
              lVar24 = 2;
              piVar17 = piVar27;
              puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar35);
              do {
                uVar13 = *(undefined8 *)(piVar17 + 2);
                *puVar14 = *(undefined8 *)piVar17;
                puVar14[1] = uVar13;
                uVar13 = *(undefined8 *)(piVar17 + 6);
                puVar14[2] = *(undefined8 *)(piVar17 + 4);
                puVar14[3] = uVar13;
                uVar13 = *(undefined8 *)(piVar17 + 10);
                puVar14[4] = *(undefined8 *)(piVar17 + 8);
                puVar14[5] = uVar13;
                uVar13 = *(undefined8 *)(piVar17 + 0xe);
                puVar14[6] = *(undefined8 *)(piVar17 + 0xc);
                puVar14[7] = uVar13;
                uVar13 = *(undefined8 *)(piVar17 + 0x12);
                puVar14[8] = *(undefined8 *)(piVar17 + 0x10);
                puVar14[9] = uVar13;
                uVar13 = *(undefined8 *)(piVar17 + 0x16);
                puVar14[10] = *(undefined8 *)(piVar17 + 0x14);
                puVar14[0xb] = uVar13;
                iVar9 = piVar17[0x19];
                iVar34 = piVar17[0x1a];
                iVar7 = piVar17[0x1b];
                *(int *)(puVar14 + 0xc) = piVar17[0x18];
                *(int *)((longlong)puVar14 + 100) = iVar9;
                *(int *)(puVar14 + 0xd) = iVar34;
                *(int *)((longlong)puVar14 + 0x6c) = iVar7;
                puVar11 = puVar14 + 0x10;
                uVar13 = *(undefined8 *)(piVar17 + 0x1e);
                puVar14[0xe] = *(undefined8 *)(piVar17 + 0x1c);
                puVar14[0xf] = uVar13;
                piVar17 = piVar17 + 0x20;
                lVar24 = lVar24 + -1;
                puVar14 = puVar11;
              } while (lVar24 != 0);
              *puVar11 = *(undefined8 *)piVar17;
              uVar35 = uVar35 + 0x108;
            }
            uVar40 = (int)uVar41 + 1;
            iVar9 = *(int *)(param_1 + 100);
            piVar27 = piVar27 + 0x42;
            uVar41 = (ulonglong)uVar40;
          } while ((int)uVar40 < iVar9);
        }
        iVar9 = iVar9 - iVar10;
        *(int *)(param_1 + 100) = iVar9;
        if (piVar26 != (int *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(piVar26);
        }
      }
      if (0 < iVar9) {
        lVar24 = param_1 + 0x30;
        do {
          uVar39 = (uint)uVar25;
          piVar26 = (int *)((longlong)(int)uVar39 * 0x108 + *(longlong *)(param_1 + 0x28));
          uVar40 = piVar26[2] + 1;
          if (piVar26[2] < -1) {
            uVar40 = 0;
          }
          uVar40 = (((uint)*(byte *)((longlong)piVar26 + 6) * 2 |
                    (uint)*(byte *)((longlong)piVar26 + 5)) << 6 | uVar40) << 5 | *piVar26 * 2 + 2U
                   | (uint)*(byte *)(piVar26 + 1);
          uVar25 = (ulonglong)(longlong)(int)uVar40 % (ulonglong)*(uint *)(param_1 + 0x40);
          for (puVar18 = *(uint **)(*(longlong *)(param_1 + 0x38) + uVar25 * 8);
              puVar18 != (uint *)0x0; puVar18 = *(uint **)(puVar18 + 2)) {
            if (uVar40 == *puVar18) {
              if (puVar18 != (uint *)0x0) goto LAB_18054e516;
              break;
            }
          }
          FUN_18066c220(param_1 + 0x50,&uStackX_10,(ulonglong)*(uint *)(param_1 + 0x40),
                        *(undefined4 *)(param_1 + 0x48),1);
          puVar18 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x10,*(undefined1 *)(param_1 + 0x5c));
          *puVar18 = uVar40;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar18[3] = 0;
          if ((char)uStackX_10 != '\0') {
            uVar25 = (ulonglong)(longlong)(int)uVar40 % (uStackX_10 >> 0x20);
            FUN_18053e470(lVar24);
          }
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar25 * 8)
          ;
          *(uint **)(*(longlong *)(param_1 + 0x38) + uVar25 * 8) = puVar18;
          *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
LAB_18054e516:
          puVar18[1] = uVar39;
          lVar22 = (longlong)(int)uVar39 * 0x108;
          lVar31 = *(longlong *)(param_1 + 0x28);
          if (*(int *)(lVar31 + lVar22) == 9) {
            uVar40 = 2;
            do {
              lVar31 = *(longlong *)(param_1 + 0x28);
              iVar9 = *(int *)(lVar31 + 8 + lVar22);
              uVar30 = iVar9 + 1;
              if (iVar9 < -1) {
                uVar30 = 0;
              }
              uStackX_18 = (uVar30 | ((uint)*(byte *)(lVar31 + 6 + lVar22) * 2 |
                                     (uint)*(byte *)(lVar31 + 5 + lVar22)) << 6) << 5 |
                           (uint)*(byte *)(lVar31 + 4 + lVar22) | uVar40;
              uStackX_1c = uVar39;
              FUN_180552c00(lVar24,auStack_60,&uStackX_18);
              uVar40 = uVar40 + 2;
            } while ((int)uVar40 < 10);
            lVar31 = *(longlong *)(param_1 + 0x28);
          }
          if (*(int *)(lVar31 + lVar22) == 8) {
            uVar40 = 10;
            do {
              lVar31 = *(longlong *)(param_1 + 0x28);
              iVar9 = *(int *)(lVar31 + lVar22 + 8);
              uVar30 = iVar9 + 1;
              if (iVar9 < -1) {
                uVar30 = 0;
              }
              uStackX_20 = (uVar30 | ((uint)*(byte *)(lVar31 + lVar22 + 6) * 2 |
                                     (uint)*(byte *)(lVar31 + lVar22 + 5)) << 6) << 5 |
                           (uint)*(byte *)(lVar31 + lVar22 + 4) | uVar40;
              uStackX_24 = uVar39;
              FUN_180552c00(lVar24,auStack_60,&uStackX_20);
              uVar40 = uVar40 + 2;
            } while ((int)uVar40 < 0x14);
          }
          uVar25 = (ulonglong)(uVar39 + 1);
        } while ((int)(uVar39 + 1) < *(int *)(param_1 + 100));
      }
      uVar25 = 0;
      iVar9 = *(int *)(param_1 + 0x70);
      if (0 < iVar9) {
        iVar10 = 1;
        uVar41 = uVar25;
        uVar35 = uVar25;
        do {
          uVar28 = uVar35;
          iVar34 = iVar10;
          if (iVar10 < iVar9) {
            do {
              lVar24 = *(longlong *)(param_1 + 0x68);
              if ((*(int *)(lVar24 + uVar35) != -1) &&
                 (*(char *)(lVar24 + 0x10 + uVar35) == *(char *)(lVar24 + 0x10 + uVar28 + 0x14))) {
                *(undefined4 *)(lVar24 + uVar35) = 0xffffffff;
                uVar41 = (ulonglong)((int)uVar41 + 1);
              }
              iVar34 = iVar34 + 1;
              iVar9 = *(int *)(param_1 + 0x70);
              uVar28 = uVar28 + 0x14;
            } while (iVar34 < iVar9);
          }
          iVar10 = iVar10 + 1;
          uVar35 = uVar35 + 0x14;
        } while (iVar10 <= iVar9);
        iVar10 = (int)uVar41;
        if (0 < iVar10) {
          piVar26 = *(int **)(param_1 + 0x68);
          uVar13 = FUN_180552d90((longlong)(iVar9 - iVar10));
          *(undefined8 *)(param_1 + 0x68) = uVar13;
          iVar9 = *(int *)(param_1 + 0x70);
          piVar27 = piVar26;
          uVar41 = uVar25;
          uVar35 = uVar25;
          if (0 < iVar9) {
            do {
              if (*piVar27 != -1) {
                lVar24 = *(longlong *)(param_1 + 0x68);
                iVar9 = piVar27[1];
                iVar34 = piVar27[2];
                iVar7 = piVar27[3];
                piVar17 = (int *)(lVar24 + uVar35);
                *piVar17 = *piVar27;
                piVar17[1] = iVar9;
                piVar17[2] = iVar34;
                piVar17[3] = iVar7;
                *(int *)(lVar24 + 0x10 + uVar35) = piVar27[4];
                uVar35 = uVar35 + 0x14;
              }
              uVar40 = (int)uVar41 + 1;
              iVar9 = *(int *)(param_1 + 0x70);
              piVar27 = piVar27 + 5;
              uVar41 = (ulonglong)uVar40;
            } while ((int)uVar40 < iVar9);
          }
          *(int *)(param_1 + 0x70) = iVar9 - iVar10;
          if (piVar26 != (int *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(piVar26);
          }
        }
      }
      iVar10 = 0;
      iVar9 = *(int *)(param_1 + 0xb0);
      if (0 < iVar9) {
        iVar34 = 1;
        uVar41 = uVar25;
        uVar35 = uVar25;
        do {
          uVar28 = uVar35;
          iVar10 = iVar34;
          if (iVar34 < iVar9) {
            do {
              uVar28 = uVar28 + 0x68;
              lVar24 = *(longlong *)(param_1 + 0x78);
              if ((((*(int *)(lVar24 + uVar35) != -2) &&
                   (*(int *)(lVar24 + uVar35) == *(int *)(lVar24 + uVar28))) &&
                  (*(char *)(lVar24 + 4 + uVar35) == *(char *)(lVar24 + 4 + uVar28))) &&
                 ((*(char *)(lVar24 + 5 + uVar35) == *(char *)(lVar24 + 5 + uVar28) &&
                  (*(int *)(lVar24 + 8 + uVar35) == *(int *)(lVar24 + 8 + uVar28))))) {
                *(undefined4 *)(lVar24 + uVar35) = 0xfffffffe;
                uVar41 = (ulonglong)((int)uVar41 + 1);
              }
              iVar10 = iVar10 + 1;
              iVar9 = *(int *)(param_1 + 0xb0);
            } while (iVar10 < iVar9);
          }
          iVar10 = (int)uVar41;
          iVar34 = iVar34 + 1;
          uVar35 = uVar35 + 0x68;
        } while (iVar34 <= iVar9);
      }
      if (0 < iVar10) {
        piVar26 = *(int **)(param_1 + 0x78);
        uVar13 = FUN_180552e00((longlong)(iVar9 - iVar10));
        *(undefined8 *)(param_1 + 0x78) = uVar13;
        iVar9 = *(int *)(param_1 + 0xb0);
        piVar27 = piVar26;
        uVar41 = uVar25;
        uVar35 = uVar25;
        if (0 < iVar9) {
          do {
            if (*piVar27 != -2) {
              lVar24 = *(longlong *)(param_1 + 0x78);
              uVar13 = *(undefined8 *)(piVar27 + 2);
              *(undefined8 *)(lVar24 + uVar35) = *(undefined8 *)piVar27;
              ((undefined8 *)(lVar24 + uVar35))[1] = uVar13;
              uVar13 = *(undefined8 *)(piVar27 + 6);
              puVar14 = (undefined8 *)(lVar24 + 0x10 + uVar35);
              *puVar14 = *(undefined8 *)(piVar27 + 4);
              puVar14[1] = uVar13;
              uVar13 = *(undefined8 *)(piVar27 + 10);
              puVar14 = (undefined8 *)(lVar24 + 0x20 + uVar35);
              *puVar14 = *(undefined8 *)(piVar27 + 8);
              puVar14[1] = uVar13;
              uVar13 = *(undefined8 *)(piVar27 + 0xe);
              puVar14 = (undefined8 *)(lVar24 + 0x30 + uVar35);
              *puVar14 = *(undefined8 *)(piVar27 + 0xc);
              puVar14[1] = uVar13;
              uVar13 = *(undefined8 *)(piVar27 + 0x12);
              puVar14 = (undefined8 *)(lVar24 + 0x40 + uVar35);
              *puVar14 = *(undefined8 *)(piVar27 + 0x10);
              puVar14[1] = uVar13;
              uVar13 = *(undefined8 *)(piVar27 + 0x16);
              puVar14 = (undefined8 *)(lVar24 + 0x50 + uVar35);
              *puVar14 = *(undefined8 *)(piVar27 + 0x14);
              puVar14[1] = uVar13;
              *(undefined8 *)(lVar24 + 0x60 + uVar35) = *(undefined8 *)(piVar27 + 0x18);
              uVar35 = uVar35 + 0x68;
            }
            uVar40 = (int)uVar41 + 1;
            iVar9 = *(int *)(param_1 + 0xb0);
            piVar27 = piVar27 + 0x1a;
            uVar41 = (ulonglong)uVar40;
          } while ((int)uVar40 < iVar9);
        }
        iVar9 = iVar9 - iVar10;
        *(int *)(param_1 + 0xb0) = iVar9;
        if (piVar26 != (int *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(piVar26);
        }
      }
      if (0 < iVar9) {
        uVar41 = uVar25;
        do {
          piVar26 = (int *)(*(longlong *)(param_1 + 0x78) + uVar41);
          iVar9 = piVar26[2] + 1;
          if (piVar26[2] < -1) {
            iVar9 = 0;
          }
          uVar40 = (iVar9 * 2 | (uint)*(byte *)((longlong)piVar26 + 5)) << 4 | *piVar26 * 2 + 2U |
                   (uint)*(byte *)(piVar26 + 1);
          uVar35 = (ulonglong)(longlong)(int)uVar40 % (ulonglong)*(uint *)(param_1 + 0x90);
          for (puVar18 = *(uint **)(*(longlong *)(param_1 + 0x88) + uVar35 * 8);
              puVar18 != (uint *)0x0; puVar18 = *(uint **)(puVar18 + 2)) {
            if (uVar40 == *puVar18) {
              if (puVar18 != (uint *)0x0) goto LAB_18054e936;
              break;
            }
          }
          FUN_18066c220(param_1 + 0xa0,&uStackX_10,(ulonglong)*(uint *)(param_1 + 0x90),
                        *(undefined4 *)(param_1 + 0x98),1);
          puVar18 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x10,*(undefined1 *)(param_1 + 0xac));
          *puVar18 = uVar40;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar18[3] = 0;
          if ((char)uStackX_10 != '\0') {
            uVar35 = (ulonglong)(longlong)(int)uVar40 % (uStackX_10 >> 0x20);
            FUN_18053e470(param_1 + 0x80);
          }
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + uVar35 * 8)
          ;
          *(uint **)(*(longlong *)(param_1 + 0x88) + uVar35 * 8) = puVar18;
          *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
LAB_18054e936:
          puVar18[1] = (uint)uVar25;
          uVar40 = (uint)uVar25 + 1;
          uVar25 = (ulonglong)uVar40;
          uVar41 = uVar41 + 0x68;
        } while ((int)uVar40 < *(int *)(param_1 + 0xb0));
      }
      uVar25 = 0;
      *(undefined1 *)(param_1 + 0x135) = 0;
      if (0 < *(int *)(param_1 + 0xb0)) {
        pcVar23 = (char *)(*(longlong *)(param_1 + 0x78) + 5);
        uVar41 = uVar25;
        do {
          if (*pcVar23 != '\0') {
            *(undefined1 *)(param_1 + 0x135) = 1;
            break;
          }
          uVar40 = (int)uVar41 + 1;
          uVar41 = (ulonglong)uVar40;
          pcVar23 = pcVar23 + 0x68;
        } while ((int)uVar40 < *(int *)(param_1 + 0xb0));
      }
      iVar9 = *(int *)(param_1 + 0x158);
      if (0 < iVar9) {
        uVar41 = uVar25;
        uVar35 = uVar25;
        uVar28 = 1;
        do {
          uVar32 = uVar28;
          iVar10 = (int)uVar32;
          uVar28 = uVar35;
          if (iVar10 < iVar9) {
            do {
              uVar28 = uVar28 + 4;
              if ((*(int *)(*(longlong *)(param_1 + 0x150) + uVar35) ==
                   *(int *)(*(longlong *)(param_1 + 0x150) + uVar28)) &&
                 (*(int *)(*(longlong *)(param_1 + 0x148) + uVar28) != -1)) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x148) + uVar28) = 0xffffffff;
                uVar41 = (ulonglong)((int)uVar41 + 1);
              }
              uVar40 = (int)uVar32 + 1;
              uVar32 = (ulonglong)uVar40;
              iVar9 = *(int *)(param_1 + 0x158);
            } while ((int)uVar40 < iVar9);
          }
          uVar40 = iVar10 + 1;
          uVar35 = uVar35 + 4;
          uVar28 = (ulonglong)uVar40;
        } while ((int)uVar40 <= iVar9);
        iVar10 = (int)uVar41;
        if (0 < iVar10) {
          lVar24 = *(longlong *)(param_1 + 0x148);
          puVar2 = *(undefined4 **)(param_1 + 0x150);
          uVar41 = uVar25;
          if (iVar9 - iVar10 != 0) {
            uVar41 = FUN_18062b420(_DAT_180c8ed18,(longlong)(iVar9 - iVar10) * 4,
                                   CONCAT71((int7)(uVar32 >> 8),3));
            iVar9 = *(int *)(param_1 + 0x158);
          }
          *(ulonglong *)(param_1 + 0x148) = uVar41;
          uVar41 = uVar25;
          if (iVar9 - iVar10 != 0) {
            uVar41 = FUN_18062b420(_DAT_180c8ed18,(longlong)(iVar9 - iVar10) * 4,3);
            iVar9 = *(int *)(param_1 + 0x158);
          }
          *(ulonglong *)(param_1 + 0x150) = uVar41;
          if (iVar9 < 1) {
            iVar9 = *(int *)(param_1 + 0x158);
          }
          else {
            puVar29 = puVar2;
            uVar41 = uVar25;
            uVar35 = uVar25;
            do {
              iVar9 = *(int *)((lVar24 - (longlong)puVar2) + (longlong)puVar29);
              if (iVar9 != -1) {
                *(int *)(uVar41 + *(longlong *)(param_1 + 0x148)) = iVar9;
                *(undefined4 *)(uVar41 + *(longlong *)(param_1 + 0x150)) = *puVar29;
                uVar41 = uVar41 + 4;
              }
              uVar40 = (int)uVar35 + 1;
              uVar35 = (ulonglong)uVar40;
              puVar29 = puVar29 + 1;
              iVar9 = *(int *)(param_1 + 0x158);
            } while ((int)uVar40 < iVar9);
          }
          *(int *)(param_1 + 0x158) = iVar9 - iVar10;
          if (lVar24 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar24);
          }
          if (puVar2 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar2);
          }
        }
      }
      iVar10 = 0;
      iVar9 = *(int *)(param_1 + 0xf0);
      if (0 < iVar9) {
        iVar34 = 1;
        lVar24 = 0xc;
        uVar41 = uVar25;
        do {
          lVar31 = lVar24;
          iVar10 = iVar34;
          if (iVar34 < iVar9) {
            do {
              lVar22 = *(longlong *)(param_1 + 0xb8);
              if (*(int *)(lVar22 + lVar24 + -4) != -1) {
                lVar4 = lVar22 + lVar24;
                pcVar23 = (char *)(lVar22 + lVar31);
                if (((*(char *)(lVar4 + -0xc) == *pcVar23) &&
                    (*(char *)(lVar4 + -0xb) == pcVar23[1])) &&
                   (*(int *)(lVar4 + -8) == *(int *)(pcVar23 + 4))) {
                  *(undefined4 *)(lVar22 + lVar24 + -4) = 0xffffffff;
                  uVar41 = (ulonglong)((int)uVar41 + 1);
                }
              }
              iVar10 = iVar10 + 1;
              iVar9 = *(int *)(param_1 + 0xf0);
              lVar31 = lVar31 + 0xc;
            } while (iVar10 < iVar9);
          }
          iVar10 = (int)uVar41;
          iVar34 = iVar34 + 1;
          lVar24 = lVar24 + 0xc;
        } while (iVar34 <= iVar9);
      }
      if (0 < iVar10) {
        puVar14 = *(undefined8 **)(param_1 + 0xb8);
        uVar41 = uVar25;
        if (iVar9 - iVar10 != 0) {
          uVar41 = FUN_18062b420(_DAT_180c8ed18,(longlong)(iVar9 - iVar10) * 0xc,3);
          iVar9 = *(int *)(param_1 + 0xf0);
        }
        *(ulonglong *)(param_1 + 0xb8) = uVar41;
        puVar11 = puVar14;
        uVar41 = uVar25;
        uVar35 = uVar25;
        if (0 < iVar9) {
          do {
            if (*(int *)(puVar11 + 1) != -1) {
              lVar24 = *(longlong *)(param_1 + 0xb8);
              *(undefined8 *)(lVar24 + uVar35) = *puVar11;
              *(undefined4 *)(lVar24 + 8 + uVar35) = *(undefined4 *)(puVar11 + 1);
              uVar35 = uVar35 + 0xc;
            }
            uVar40 = (int)uVar41 + 1;
            puVar11 = (undefined8 *)((longlong)puVar11 + 0xc);
            uVar41 = (ulonglong)uVar40;
          } while ((int)uVar40 < *(int *)(param_1 + 0xf0));
        }
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) - iVar10;
        iVar9 = *(int *)(param_1 + 0xf0);
        if (puVar14 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar14);
        }
      }
      if (0 < iVar9) {
        uVar41 = uVar25;
        do {
          lVar24 = *(longlong *)(param_1 + 0xb8);
          iVar9 = *(int *)(lVar24 + 4 + uVar25);
          uVar40 = iVar9 + 1;
          if (iVar9 < -1) {
            uVar40 = 0;
          }
          uVar40 = uVar40 | ((uint)*(byte *)(lVar24 + 1 + uVar25) * 2 |
                            (uint)*(byte *)(lVar24 + uVar25)) << 6;
          uVar35 = (ulonglong)(longlong)(int)uVar40 % (ulonglong)*(uint *)(param_1 + 0xd0);
          for (puVar18 = *(uint **)(*(longlong *)(param_1 + 200) + uVar35 * 8);
              puVar18 != (uint *)0x0; puVar18 = *(uint **)(puVar18 + 2)) {
            if (uVar40 == *puVar18) {
              if (puVar18 != (uint *)0x0) goto LAB_18054ed16;
              break;
            }
          }
          FUN_18066c220(param_1 + 0xe0,&uStackX_10,(ulonglong)*(uint *)(param_1 + 0xd0),
                        *(undefined4 *)(param_1 + 0xd8),1);
          puVar18 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x10,*(undefined1 *)(param_1 + 0xec));
          *puVar18 = uVar40;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar18[3] = 0;
          if ((char)uStackX_10 != '\0') {
            uVar35 = (ulonglong)(longlong)(int)uVar40 % (ulonglong)uStackX_10._4_4_;
            FUN_18053e470(param_1 + 0xc0,uStackX_10._4_4_);
          }
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(*(longlong *)(param_1 + 200) + uVar35 * 8);
          *(uint **)(*(longlong *)(param_1 + 200) + uVar35 * 8) = puVar18;
          *(longlong *)(param_1 + 0xd8) = *(longlong *)(param_1 + 0xd8) + 1;
LAB_18054ed16:
          puVar18[1] = (uint)uVar41;
          uVar40 = (uint)uVar41 + 1;
          uVar41 = (ulonglong)uVar40;
          uVar25 = uVar25 + 0xc;
        } while ((int)uVar40 < *(int *)(param_1 + 0xf0));
      }
      uVar25 = 0;
      iVar10 = 0;
      iVar9 = *(int *)(param_1 + 0x130);
      if (0 < iVar9) {
        iVar34 = 1;
        puVar36 = &DAT_00000018;
        uVar41 = uVar25;
        do {
          puVar33 = puVar36;
          iVar10 = iVar34;
          if (iVar34 < iVar9) {
            do {
              lVar24 = *(longlong *)(param_1 + 0xf8);
              if ((((*(int *)(puVar36 + lVar24 + -4) != -1) &&
                   (*(int *)(puVar36 + lVar24 + -0x14) == *(int *)(puVar33 + lVar24 + 4))) &&
                  ((puVar36[lVar24 + -0x10] == puVar33[lVar24 + 8] &&
                   ((*(int *)(puVar36 + lVar24 + -0xc) == *(int *)(puVar33 + lVar24 + 0xc) &&
                    (*(int *)(puVar36 + lVar24 + -0x18) == *(int *)(puVar33 + lVar24))))))) &&
                 (*(int *)(puVar36 + lVar24 + -8) == *(int *)(puVar33 + lVar24 + 0x10))) {
                *(undefined4 *)(puVar36 + lVar24 + -4) = 0xffffffff;
                uVar41 = (ulonglong)((int)uVar41 + 1);
              }
              iVar10 = iVar10 + 1;
              iVar9 = *(int *)(param_1 + 0x130);
              puVar33 = puVar33 + 0x18;
            } while (iVar10 < iVar9);
          }
          iVar10 = (int)uVar41;
          iVar34 = iVar34 + 1;
          puVar36 = puVar36 + 0x18;
        } while (iVar34 <= iVar9);
      }
      if (0 < iVar10) {
        puVar2 = *(undefined4 **)(param_1 + 0xf8);
        uVar41 = uVar25;
        if (iVar9 - iVar10 != 0) {
          uVar41 = FUN_18062b420(_DAT_180c8ed18,(longlong)(iVar9 - iVar10) * 0x18,3);
          iVar9 = *(int *)(param_1 + 0x130);
        }
        *(ulonglong *)(param_1 + 0xf8) = uVar41;
        puVar29 = puVar2;
        uVar41 = uVar25;
        uVar35 = uVar25;
        if (0 < iVar9) {
          do {
            if (puVar29[5] != -1) {
              lVar24 = *(longlong *)(param_1 + 0xf8);
              uVar8 = puVar29[1];
              uVar5 = puVar29[2];
              uVar6 = puVar29[3];
              puVar3 = (undefined4 *)(uVar35 + lVar24);
              *puVar3 = *puVar29;
              puVar3[1] = uVar8;
              puVar3[2] = uVar5;
              puVar3[3] = uVar6;
              *(undefined8 *)(uVar35 + 0x10 + lVar24) = *(undefined8 *)(puVar29 + 4);
              uVar35 = uVar35 + 0x18;
            }
            uVar40 = (int)uVar41 + 1;
            puVar29 = puVar29 + 6;
            uVar41 = (ulonglong)uVar40;
          } while ((int)uVar40 < *(int *)(param_1 + 0x130));
        }
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) - iVar10;
        iVar9 = *(int *)(param_1 + 0x130);
        if (puVar2 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
      }
      if (0 < iVar9) {
        uVar41 = uVar25;
        do {
          piVar26 = (int *)(*(longlong *)(param_1 + 0xf8) + uVar41);
          uVar40 = piVar26[3] + 1;
          if (piVar26[3] < -1) {
            uVar40 = 0;
          }
          uVar40 = ((piVar26[4] * 2 | (uint)*(byte *)(piVar26 + 2)) << 6 | uVar40) << 10 |
                   (*piVar26 + 1) * 0x10 | piVar26[1];
          uVar35 = (ulonglong)(longlong)(int)uVar40 % (ulonglong)*(uint *)(param_1 + 0x110);
          for (puVar18 = *(uint **)(*(longlong *)(param_1 + 0x108) + uVar35 * 8);
              puVar18 != (uint *)0x0; puVar18 = *(uint **)(puVar18 + 2)) {
            if (uVar40 == *puVar18) {
              if (puVar18 != (uint *)0x0) goto LAB_18054ef7b;
              break;
            }
          }
          FUN_18066c220(param_1 + 0x120,&uStackX_10,(ulonglong)*(uint *)(param_1 + 0x110),
                        *(undefined4 *)(param_1 + 0x118),1);
          puVar18 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x10,*(undefined1 *)(param_1 + 300));
          *puVar18 = uVar40;
          puVar18[1] = 0;
          puVar18[2] = 0;
          puVar18[3] = 0;
          if ((char)uStackX_10 != '\0') {
            uVar35 = (ulonglong)(longlong)(int)uVar40 % (ulonglong)uStackX_10._4_4_;
            FUN_18053e470(param_1 + 0x100,uStackX_10._4_4_);
          }
          *(undefined8 *)(puVar18 + 2) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x108) + uVar35 * 8);
          *(uint **)(*(longlong *)(param_1 + 0x108) + uVar35 * 8) = puVar18;
          *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 1;
LAB_18054ef7b:
          puVar18[1] = (uint)uVar25;
          uVar40 = (uint)uVar25 + 1;
          uVar25 = (ulonglong)uVar40;
          uVar41 = uVar41 + 0x18;
        } while ((int)uVar40 < *(int *)(param_1 + 0x130));
      }
      puStack_d8 = &UNK_180a3c3e0;
      if (puStack_d0 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_d0 = (undefined1 *)0x0;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      puStack_d8 = &UNK_18098bcb0;
      puStack_a0 = &UNK_180a3c3e0;
      if (lStack_98 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar24 = (longlong)&UNK_180a34580 - (longlong)pcVar19;
    while (*pcVar19 == pcVar19[lVar24]) {
      pcVar19 = pcVar19 + 1;
      if (pcVar20 <= pcVar19) goto LAB_18054d0f0;
    }
  }
  pcVar37 = *(char **)(pcVar37 + 0x58);
  goto LAB_18054d0a7;
LAB_18054cd37:
  puStack_80 = (undefined8 *)puStack_80[0xb];
  goto LAB_18054ccba;
LAB_18054ce87:
  puStack_70 = (undefined8 *)puStack_70[0xb];
  goto LAB_18054ce10;
LAB_18054cfcb:
  puStack_a8 = (undefined8 *)puStack_a8[0xb];
  goto LAB_18054cf5b;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18054f000(longlong param_1,int param_2,byte param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puStack_38;
  
  lVar3 = *(longlong *)(param_1 + 200);
  uVar14 = 0xffffffff;
  uVar12 = CONCAT44(0,*(uint *)(param_1 + 0xd0));
  uVar8 = 0xffffffff;
  puVar15 = (uint *)0x0;
  uVar13 = (uint)param_3;
  if (param_2 < 0) {
    uVar8 = (uVar13 | 2) << 6;
    for (puVar4 = *(uint **)(lVar3 + ((ulonglong)uVar8 % uVar12) * 8);
        (puVar10 = puVar15, puVar4 != (uint *)0x0 && (puVar10 = puVar4, uVar8 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    if (puVar10 == (uint *)0x0) {
      puVar10 = *(uint **)(lVar3 + *(longlong *)(param_1 + 0xd0) * 8);
    }
    puVar4 = *(uint **)(lVar3 + *(longlong *)(param_1 + 0xd0) * 8);
    if (puVar10 != puVar4) {
      uVar14 = puVar10[1];
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar12;
    for (puVar10 = *(uint **)(lVar3 + SUB168((ZEXT116(param_3) << 6) % auVar7,0) * 8);
        (puVar9 = puVar15, puVar10 != (uint *)0x0 && (puVar9 = puVar10, uVar13 << 6 != *puVar10));
        puVar10 = *(uint **)(puVar10 + 2)) {
    }
    puStack_38 = puVar4;
    if (puVar9 != (uint *)0x0) {
      puStack_38 = puVar9;
    }
    uVar8 = 0xffffffff;
    if (puStack_38 != puVar4) {
      uVar8 = puStack_38[1];
    }
  }
  else {
    uVar13 = uVar13 << 6;
    auVar6._8_4_ = 0;
    auVar6._0_8_ = uVar12;
    for (puVar4 = *(uint **)(lVar3 + SUB128((ZEXT112(param_3) << 6) % auVar6,0) * 8);
        (puVar10 = puVar15, puVar4 != (uint *)0x0 && (puVar10 = puVar4, uVar13 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    uVar5 = *(ulonglong *)(param_1 + 0xd0);
    if (puVar10 == (uint *)0x0) {
      puVar10 = *(uint **)(lVar3 + uVar5 * 8);
    }
    puVar1 = (undefined8 *)(lVar3 + uVar5 * 8);
    if (puVar10 != (uint *)*puVar1) {
      uVar14 = puVar10[1];
    }
    uVar11 = param_2 + 1;
    if (param_2 < -1) {
      uVar11 = 0;
    }
    for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)(uVar11 | uVar13) % uVar12) * 8);
        (puVar10 = puVar15, puVar4 != (uint *)0x0 &&
        (puVar10 = puVar4, (uVar11 | uVar13) != *puVar4)); puVar4 = *(uint **)(puVar4 + 2)) {
    }
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)*puVar1;
    }
    puVar4 = *(uint **)(lVar3 + uVar5 * 8);
    if ((puVar10 == puVar4) &&
       (iVar2 = *(int *)((longlong)param_2 * 0x170 + 0x20 + _DAT_180c95ff0), iVar2 != param_2)) {
      uVar11 = iVar2 + 1;
      if (iVar2 < -1) {
        uVar11 = 0;
      }
      for (puVar9 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)(uVar11 | uVar13) %
                                       (uVar5 & 0xffffffff)) * 8);
          (puVar10 = puVar15, puVar9 != (uint *)0x0 &&
          (puVar10 = puVar9, (uVar11 | uVar13) != *puVar9)); puVar9 = *(uint **)(puVar9 + 2)) {
      }
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)*puVar1;
      }
    }
    if (puVar10 != puVar4) {
      uVar8 = puVar10[1];
    }
  }
  if (((int)uVar14 < 0) || ((-1 < (int)uVar8 && ((int)uVar8 < (int)uVar14)))) {
    uVar14 = uVar8;
  }
  if (-1 < (int)uVar14) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 8 + (longlong)(int)uVar14 * 0xc);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18054f018(longlong param_1,int param_2,byte param_3)

{
  longlong *plVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong unaff_RBP;
  uint uVar14;
  longlong in_R10;
  int in_R11D;
  int iVar15;
  uint *puVar16;
  
  uVar12 = CONCAT44(0,*(uint *)(param_1 + 0xd0));
  puVar16 = (uint *)0x0;
  uVar14 = (uint)param_3;
  iVar15 = in_R11D;
  if (param_2 < 0) {
    uVar8 = (uVar14 | 2) << 6;
    uVar10 = (ulonglong)uVar8 % uVar12;
    for (puVar3 = *(uint **)(in_R10 + uVar10 * 8);
        (puVar9 = puVar16, puVar3 != (uint *)0x0 && (puVar9 = puVar3, uVar8 != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    lVar4 = *(longlong *)(param_1 + 0xd0);
    if (puVar9 == (uint *)0x0) {
      puVar9 = *(uint **)(in_R10 + lVar4 * 8);
      *(longlong *)(unaff_RBP + -0x20) = in_R10 + lVar4 * 8;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x20) = in_R10 + uVar10 * 8;
    }
    lVar13 = *(longlong *)(in_R10 + lVar4 * 8);
    *(uint **)(unaff_RBP + -0x28) = puVar9;
    if (*(longlong *)(unaff_RBP + -0x28) != lVar13) {
      iVar15 = *(int *)(*(longlong *)(unaff_RBP + -0x28) + 4);
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar12;
    lVar11 = SUB168((ZEXT116(param_3) << 6) % auVar7,0);
    for (puVar3 = *(uint **)(in_R10 + lVar11 * 8);
        (puVar9 = puVar16, puVar3 != (uint *)0x0 && (puVar9 = puVar3, uVar14 << 6 != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    if (puVar9 == (uint *)0x0) {
      *(longlong *)(unaff_RBP + -0x28) = lVar13;
      *(longlong *)(unaff_RBP + -0x20) = in_R10 + lVar4 * 8;
    }
    else {
      *(uint **)(unaff_RBP + -0x28) = puVar9;
      *(longlong *)(unaff_RBP + -0x20) = in_R10 + lVar11 * 8;
    }
    if (*(longlong *)(unaff_RBP + -0x28) != lVar13) {
      in_R11D = *(int *)(*(longlong *)(unaff_RBP + -0x28) + 4);
    }
  }
  else {
    uVar14 = uVar14 << 6;
    auVar6._8_4_ = 0;
    auVar6._0_8_ = uVar12;
    uVar10 = SUB128((ZEXT112(param_3) << 6) % auVar6,0);
    for (puVar3 = *(uint **)(in_R10 + uVar10 * 8);
        (puVar9 = puVar16, puVar3 != (uint *)0x0 && (puVar9 = puVar3, uVar14 != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    uVar5 = *(ulonglong *)(param_1 + 0xd0);
    if (puVar9 == (uint *)0x0) {
      puVar9 = *(uint **)(in_R10 + uVar5 * 8);
      uVar10 = uVar5;
    }
    *(uint **)(unaff_RBP + -0x28) = puVar9;
    plVar1 = (longlong *)(in_R10 + uVar5 * 8);
    *(ulonglong *)(unaff_RBP + -0x20) = in_R10 + uVar10 * 8;
    if (*(longlong *)(unaff_RBP + -0x28) != *plVar1) {
      iVar15 = *(int *)(*(longlong *)(unaff_RBP + -0x28) + 4);
    }
    uVar8 = param_2 + 1;
    if (param_2 < in_R11D) {
      uVar8 = 0;
    }
    uVar12 = (ulonglong)(longlong)(int)(uVar8 | uVar14) % uVar12;
    for (puVar3 = *(uint **)(in_R10 + uVar12 * 8);
        (puVar9 = puVar16, puVar3 != (uint *)0x0 && (puVar9 = puVar3, (uVar8 | uVar14) != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)*plVar1;
      *(longlong **)(unaff_RBP + -0x20) = plVar1;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x20) = in_R10 + uVar12 * 8;
    }
    lVar4 = *(longlong *)(in_R10 + uVar5 * 8);
    *(uint **)(unaff_RBP + -0x28) = puVar9;
    lVar13 = *(longlong *)(unaff_RBP + -0x28);
    if ((lVar13 == lVar4) &&
       (iVar2 = *(int *)((longlong)param_2 * 0x170 + 0x20 + _DAT_180c95ff0), iVar2 != param_2)) {
      uVar8 = iVar2 + 1;
      if (iVar2 < in_R11D) {
        uVar8 = 0;
      }
      uVar12 = (ulonglong)(longlong)(int)(uVar8 | uVar14) % (uVar5 & 0xffffffff);
      for (puVar3 = *(uint **)(in_R10 + uVar12 * 8);
          (puVar9 = puVar16, puVar3 != (uint *)0x0 && (puVar9 = puVar3, (uVar8 | uVar14) != *puVar3)
          ); puVar3 = *(uint **)(puVar3 + 2)) {
      }
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)*plVar1;
        *(longlong **)(unaff_RBP + -0x20) = plVar1;
      }
      else {
        *(ulonglong *)(unaff_RBP + -0x20) = in_R10 + uVar12 * 8;
      }
      *(uint **)(unaff_RBP + -0x28) = puVar9;
      *(undefined8 *)(unaff_RBP + -0x28) = *(undefined8 *)(unaff_RBP + -0x28);
      *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RBP + -0x20);
      lVar13 = *(longlong *)(unaff_RBP + -0x28);
    }
    if (lVar13 != lVar4) {
      in_R11D = *(int *)(lVar13 + 4);
    }
  }
  if ((iVar15 < 0) || ((-1 < in_R11D && (in_R11D < iVar15)))) {
    iVar15 = in_R11D;
  }
  if (-1 < iVar15) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 8 + (longlong)iVar15 * 0xc);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18054f121(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_RAX;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  longlong in_R10;
  int in_R11D;
  int unaff_R12D;
  longlong unaff_R13;
  uint *unaff_R14;
  int iVar12;
  longlong unaff_R15;
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = unaff_RSI;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = in_RAX;
  uVar10 = SUB168(auVar7 % auVar6,0) & 0xffffffff;
  for (puVar3 = *(uint **)(in_R10 + uVar10 * 8);
      (puVar8 = unaff_R14, puVar3 != (uint *)0x0 && (puVar8 = puVar3, param_4 != *puVar3));
      puVar3 = *(uint **)(puVar3 + 2)) {
  }
  uVar4 = *(ulonglong *)(unaff_R13 + 0xd0);
  if (puVar8 == (uint *)0x0) {
    puVar8 = *(uint **)(in_R10 + uVar4 * 8);
    uVar10 = uVar4;
  }
  *(uint **)(unaff_RBP + -0x28) = puVar8;
  plVar1 = (longlong *)(in_R10 + uVar4 * 8);
  *(ulonglong *)(unaff_RBP + -0x20) = in_R10 + uVar10 * 8;
  if (*(longlong *)(unaff_RBP + -0x28) != *plVar1) {
    in_R11D = *(int *)(*(longlong *)(unaff_RBP + -0x28) + 4);
  }
  iVar12 = (int)unaff_R15;
  uVar9 = iVar12 + 1;
  if (iVar12 < unaff_R12D) {
    uVar9 = (uint)unaff_R14;
  }
  uVar10 = (ulonglong)(longlong)(int)(uVar9 | param_4) % unaff_RSI & 0xffffffff;
  for (puVar3 = *(uint **)(in_R10 + uVar10 * 8);
      (puVar8 = unaff_R14, puVar3 != (uint *)0x0 && (puVar8 = puVar3, (uVar9 | param_4) != *puVar3))
      ; puVar3 = *(uint **)(puVar3 + 2)) {
  }
  if (puVar8 == (uint *)0x0) {
    puVar8 = (uint *)*plVar1;
    *(longlong **)(unaff_RBP + -0x20) = plVar1;
  }
  else {
    *(ulonglong *)(unaff_RBP + -0x20) = in_R10 + uVar10 * 8;
  }
  lVar5 = *(longlong *)(in_R10 + uVar4 * 8);
  *(uint **)(unaff_RBP + -0x28) = puVar8;
  lVar11 = *(longlong *)(unaff_RBP + -0x28);
  if ((lVar11 == lVar5) &&
     (iVar2 = *(int *)(unaff_R15 * 0x170 + 0x20 + _DAT_180c95ff0), iVar2 != iVar12)) {
    uVar9 = iVar2 + 1;
    if (iVar2 < unaff_R12D) {
      uVar9 = (uint)unaff_R14;
    }
    uVar10 = (ulonglong)(longlong)(int)(uVar9 | param_4) % (uVar4 & 0xffffffff);
    for (puVar3 = *(uint **)(in_R10 + uVar10 * 8);
        (puVar8 = unaff_R14, puVar3 != (uint *)0x0 &&
        (puVar8 = puVar3, (uVar9 | param_4) != *puVar3)); puVar3 = *(uint **)(puVar3 + 2)) {
    }
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)*plVar1;
      *(longlong **)(unaff_RBP + -0x20) = plVar1;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x20) = in_R10 + uVar10 * 8;
    }
    *(uint **)(unaff_RBP + -0x28) = puVar8;
    *(undefined8 *)(unaff_RBP + -0x28) = *(undefined8 *)(unaff_RBP + -0x28);
    *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RBP + -0x20);
    lVar11 = *(longlong *)(unaff_RBP + -0x28);
  }
  if (lVar11 != lVar5) {
    unaff_R12D = *(int *)(lVar11 + 4);
  }
  if ((in_R11D < 0) || ((-1 < unaff_R12D && (unaff_R12D < in_R11D)))) {
    in_R11D = unaff_R12D;
  }
  if (-1 < in_R11D) {
    return *(undefined4 *)(*(longlong *)(unaff_R13 + 0xb8) + 8 + (longlong)in_R11D * 0xc);
  }
  return 0xffffffff;
}



undefined4 FUN_18054f254(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int in_R11D;
  longlong unaff_R13;
  
  iVar1 = *(int *)(param_2 + 4);
  if ((in_R11D < 0) || ((-1 < iVar1 && (iVar1 < in_R11D)))) {
    in_R11D = iVar1;
  }
  if (-1 < in_R11D) {
    return *(undefined4 *)(*(longlong *)(unaff_R13 + 0xb8) + 8 + (longlong)in_R11D * 0xc);
  }
  return 0xffffffff;
}



undefined4 FUN_18054f271(void)

{
  int in_R11D;
  int unaff_R12D;
  longlong unaff_R13;
  
  if ((-1 < unaff_R12D) && (unaff_R12D < in_R11D)) {
    in_R11D = unaff_R12D;
  }
  if (-1 < in_R11D) {
    return *(undefined4 *)(*(longlong *)(unaff_R13 + 0xb8) + 8 + (longlong)in_R11D * 0xc);
  }
  return 0xffffffff;
}



undefined4 FUN_18054f288(void)

{
  int in_R11D;
  longlong unaff_R13;
  
  return *(undefined4 *)(*(longlong *)(unaff_R13 + 0xb8) + 8 + (longlong)in_R11D * 0xc);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18054f2b0(longlong param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uStack_58;
  uint *puStack_50;
  uint *puVar15;
  
  lVar3 = *(longlong *)(param_1 + 0x108);
  uVar13 = 0xffffffff;
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x110);
  uVar12 = (param_2 + 1) * 0x10;
  puVar15 = (uint *)0x0;
  uVar14 = 0;
  uStack_58 = 0xffffffff;
  uVar11 = param_5 << 0x11 | uVar12 | param_3;
  if (param_4 < 0) {
    for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)(uVar11 | 0x10000) % uVar10) * 8);
        (puVar7 = puVar15, puVar4 != (uint *)0x0 && (puVar7 = puVar4, (uVar11 | 0x10000) != *puVar4)
        ); puVar4 = *(uint **)(puVar4 + 2)) {
    }
    uVar5 = *(ulonglong *)(param_1 + 0x110);
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar3 + uVar5 * 8);
    }
    puVar4 = *(uint **)(lVar3 + uVar5 * 8);
    if (puVar7 != puVar4) {
      uVar13 = puVar7[1];
    }
    for (puVar7 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar11 % uVar10) * 8);
        (puVar8 = puVar15, puVar7 != (uint *)0x0 && (puVar8 = puVar7, uVar11 != *puVar7));
        puVar7 = *(uint **)(puVar7 + 2)) {
    }
    puStack_50 = puVar4;
    if (puVar8 != (uint *)0x0) {
      puStack_50 = puVar8;
    }
    if (puStack_50 != puVar4) {
      uStack_58 = puStack_50[1];
    }
    if (uVar13 != 0xffffffff) goto LAB_18054f79f;
    if ((uStack_58 == 0xffffffff) && (param_5 != -1)) {
      uVar11 = uVar12 | param_3 | 0xffff0000;
      for (puVar7 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar11 % (uVar5 & 0xffffffff)) * 8
                              );
          (puVar8 = puVar15, puVar7 != (uint *)0x0 && (puVar8 = puVar7, uVar11 != *puVar7));
          puVar7 = *(uint **)(puVar7 + 2)) {
      }
      puStack_50 = puVar4;
      if (puVar8 != (uint *)0x0) {
        puStack_50 = puVar8;
      }
      puVar7 = *(uint **)(lVar3 + uVar5 * 8);
      if (puStack_50 != puVar7) {
        uVar13 = puStack_50[1];
      }
      uVar11 = uVar12 | param_3 | 0xfffe0000;
      for (puVar8 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar11 % (uVar5 & 0xffffffff)) * 8
                              );
          (puVar6 = puVar15, puVar8 != (uint *)0x0 && (puVar6 = puVar8, uVar11 != *puVar8));
          puVar8 = *(uint **)(puVar8 + 2)) {
      }
      puStack_50 = puVar4;
      if (puVar6 != (uint *)0x0) {
        puStack_50 = puVar6;
      }
      if (puStack_50 != puVar7) {
        uStack_58 = puStack_50[1];
      }
      goto LAB_18054f79f;
    }
  }
  else {
    for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar11 % uVar10) * 8);
        (puVar7 = puVar15, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar11 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    uVar5 = *(ulonglong *)(param_1 + 0x110);
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar3 + uVar5 * 8);
    }
    puVar1 = (undefined8 *)(lVar3 + uVar5 * 8);
    if (puVar7 != (uint *)*puVar1) {
      uVar13 = puVar7[1];
    }
    uVar11 = param_4 + 1;
    if (param_4 < -1) {
      uVar11 = uVar14;
    }
    uVar9 = (uVar11 | param_5 << 7) << 10 | uVar12 | param_3;
    for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar9 % uVar10) * 8);
        (puVar7 = puVar15, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar9 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)*puVar1;
    }
    puVar4 = *(uint **)(lVar3 + uVar5 * 8);
    if ((puVar7 == puVar4) &&
       (iVar2 = *(int *)((longlong)param_4 * 0x170 + 0x20 + _DAT_180c95ff0), iVar2 != param_4)) {
      uVar9 = iVar2 + 1;
      if (iVar2 < -1) {
        uVar9 = uVar14;
      }
      uVar9 = (uVar9 | param_5 << 7) << 10 | uVar12 | param_3;
      for (puVar8 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar9 % (uVar5 & 0xffffffff)) * 8)
          ; (puVar7 = puVar15, puVar8 != (uint *)0x0 && (puVar7 = puVar8, uVar9 != *puVar8));
          puVar8 = *(uint **)(puVar8 + 2)) {
      }
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)*puVar1;
      }
    }
    if (puVar7 != puVar4) {
      uStack_58 = puVar7[1];
    }
    if (uVar13 == 0xffffffff) {
      if ((uStack_58 != 0xffffffff) || (param_5 == -1)) goto LAB_18054f7b1;
      uVar9 = uVar12 | param_3 | 0xfffe0000;
      for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar9 % (uVar5 & 0xffffffff)) * 8)
          ; (puVar7 = puVar15, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar9 != *puVar4));
          puVar4 = *(uint **)(puVar4 + 2)) {
      }
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)*puVar1;
      }
      puVar4 = *(uint **)(lVar3 + uVar5 * 8);
      if (puVar7 != puVar4) {
        uVar13 = puVar7[1];
      }
      uVar11 = (uVar11 | 0xffffff80) << 10 | uVar12 | param_3;
      for (puVar7 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar11 % (uVar5 & 0xffffffff)) * 8
                              );
          (puVar8 = puVar15, puVar7 != (uint *)0x0 && (puVar8 = puVar7, uVar11 != *puVar7));
          puVar7 = *(uint **)(puVar7 + 2)) {
      }
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)*puVar1;
      }
      if ((puVar8 == puVar4) &&
         (iVar2 = *(int *)((longlong)param_4 * 0x170 + 0x20 + _DAT_180c95ff0), iVar2 != param_4)) {
        uVar11 = iVar2 + 1;
        if (iVar2 < -1) {
          uVar11 = uVar14;
        }
        param_3 = (uVar11 | 0xffffff80) << 10 | uVar12 | param_3;
        for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)param_3 % (uVar5 & 0xffffffff))
                                         * 8);
            (puVar8 = puVar15, puVar4 != (uint *)0x0 && (puVar8 = puVar4, param_3 != *puVar4));
            puVar4 = *(uint **)(puVar4 + 2)) {
        }
        if (puVar8 == (uint *)0x0) {
          puVar8 = (uint *)*puVar1;
        }
      }
      if (puVar8 != *(uint **)(lVar3 + uVar5 * 8)) {
        uStack_58 = puVar8[1];
      }
    }
LAB_18054f79f:
    if ((-1 < (int)uVar13) && (((int)uStack_58 < 0 || ((int)uVar13 <= (int)uStack_58))))
    goto LAB_18054f7b4;
  }
LAB_18054f7b1:
  uVar13 = uStack_58;
LAB_18054f7b4:
  if ((int)uVar13 < 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 0x14 + (longlong)(int)uVar13 * 0x18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18054f2c9(longlong param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong in_RAX;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined8 unaff_R13;
  uint uVar20;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  uint *puVar21;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBX;
  lVar5 = *(longlong *)(param_1 + 0x108);
  iVar18 = -1;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RSI;
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x110);
  *(undefined8 *)(in_RAX + -0x20) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R14;
  uVar17 = (param_2 + 1) * 0x10;
  puVar21 = (uint *)0x0;
  uVar20 = 0;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R15;
  iVar15 = -1;
  iVar3 = *(int *)(unaff_RBP + 0x38);
  *(undefined4 *)(unaff_RBP + -0x48) = 0xffffffff;
  uVar16 = iVar3 << 0x11 | uVar17 | param_3;
  if (param_4 < 0) {
    uVar11 = (ulonglong)(longlong)(int)(uVar16 | 0x10000) % uVar12;
    for (puVar6 = *(uint **)(lVar5 + uVar11 * 8);
        (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, (uVar16 | 0x10000) != *puVar6)
        ); puVar6 = *(uint **)(puVar6 + 2)) {
    }
    uVar7 = *(ulonglong *)(param_1 + 0x110);
    if (puVar9 == (uint *)0x0) {
      puVar9 = *(uint **)(lVar5 + uVar7 * 8);
      *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar7 * 8;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar11 * 8;
    }
    lVar13 = *(longlong *)(lVar5 + uVar7 * 8);
    lVar1 = lVar5 + uVar7 * 8;
    *(uint **)(unaff_RBP + -0x40) = puVar9;
    if (*(longlong *)(unaff_RBP + -0x40) != lVar13) {
      iVar18 = *(int *)(*(longlong *)(unaff_RBP + -0x40) + 4);
    }
    for (puVar6 = *(uint **)(lVar5 + ((ulonglong)(longlong)(int)uVar16 % uVar12) * 8);
        (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, uVar16 != *puVar6));
        puVar6 = *(uint **)(puVar6 + 2)) {
    }
    if (puVar9 == (uint *)0x0) {
      *(longlong *)(unaff_RBP + -0x40) = lVar13;
      *(longlong *)(unaff_RBP + -0x38) = lVar1;
    }
    else {
      *(uint **)(unaff_RBP + -0x40) = puVar9;
      *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + ((ulonglong)(longlong)(int)uVar16 % uVar12) * 8;
    }
    if (*(longlong *)(unaff_RBP + -0x40) == lVar13) {
      iVar19 = *(int *)(unaff_RBP + -0x48);
    }
    else {
      iVar19 = *(int *)(*(longlong *)(unaff_RBP + -0x40) + 4);
      *(int *)(unaff_RBP + -0x48) = iVar19;
    }
    if (iVar18 == -1) {
      if ((iVar19 != -1) || (iVar3 == -1)) goto LAB_18054f7b4;
      uVar16 = uVar17 | param_3 | 0xffff0000;
      uVar12 = (ulonglong)(longlong)(int)uVar16 % (uVar7 & 0xffffffff);
      for (puVar6 = *(uint **)(lVar5 + uVar12 * 8);
          (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, uVar16 != *puVar6));
          puVar6 = *(uint **)(puVar6 + 2)) {
      }
      if (puVar9 == (uint *)0x0) {
        *(longlong *)(unaff_RBP + -0x40) = lVar13;
        *(longlong *)(unaff_RBP + -0x38) = lVar1;
      }
      else {
        *(uint **)(unaff_RBP + -0x40) = puVar9;
        *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar12 * 8;
      }
      lVar8 = *(longlong *)(lVar5 + uVar7 * 8);
      if (*(longlong *)(unaff_RBP + -0x40) != lVar8) {
        iVar18 = *(int *)(*(longlong *)(unaff_RBP + -0x40) + 4);
      }
      uVar16 = uVar17 | param_3 | 0xfffe0000;
      uVar12 = (ulonglong)(longlong)(int)uVar16 % (uVar7 & 0xffffffff);
      for (puVar6 = *(uint **)(lVar5 + uVar12 * 8);
          (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, uVar16 != *puVar6));
          puVar6 = *(uint **)(puVar6 + 2)) {
      }
      if (puVar9 == (uint *)0x0) {
        *(longlong *)(unaff_RBP + -0x40) = lVar13;
        *(longlong *)(unaff_RBP + -0x38) = lVar1;
      }
      else {
        *(uint **)(unaff_RBP + -0x40) = puVar9;
        *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar12 * 8;
      }
      if (*(longlong *)(unaff_RBP + -0x40) == lVar8) goto LAB_18054f79b;
      iVar15 = *(int *)(*(longlong *)(unaff_RBP + -0x40) + 4);
      *(int *)(unaff_RBP + -0x48) = iVar15;
    }
    else {
LAB_18054f79b:
      iVar15 = *(int *)(unaff_RBP + -0x48);
    }
LAB_18054f79f:
    if ((-1 < iVar18) && ((iVar19 = iVar18, iVar15 < 0 || (iVar18 <= iVar15)))) goto LAB_18054f7b4;
  }
  else {
    for (puVar6 = *(uint **)(lVar5 + ((ulonglong)(longlong)(int)uVar16 % uVar12) * 8);
        (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, uVar16 != *puVar6));
        puVar6 = *(uint **)(puVar6 + 2)) {
    }
    uVar11 = *(ulonglong *)(param_1 + 0x110);
    uVar7 = (ulonglong)(longlong)(int)uVar16 % uVar12;
    if (puVar9 == (uint *)0x0) {
      puVar9 = *(uint **)(lVar5 + uVar11 * 8);
      uVar7 = uVar11;
    }
    *(uint **)(unaff_RBP + -0x40) = puVar9;
    plVar2 = (longlong *)(lVar5 + uVar11 * 8);
    *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar7 * 8;
    if (*(longlong *)(unaff_RBP + -0x40) != *plVar2) {
      iVar18 = *(int *)(*(longlong *)(unaff_RBP + -0x40) + 4);
    }
    uVar16 = param_4 + 1;
    if (param_4 < -1) {
      uVar16 = uVar20;
    }
    uVar10 = (uVar16 | iVar3 << 7) << 10 | uVar17 | *(uint *)(unaff_RBP + 0x28);
    uVar12 = (ulonglong)(longlong)(int)uVar10 % uVar12;
    for (puVar6 = *(uint **)(lVar5 + uVar12 * 8);
        (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, uVar10 != *puVar6));
        puVar6 = *(uint **)(puVar6 + 2)) {
    }
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)*plVar2;
      *(longlong **)(unaff_RBP + -0x38) = plVar2;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar12 * 8;
    }
    lVar1 = *(longlong *)(lVar5 + uVar11 * 8);
    *(uint **)(unaff_RBP + -0x40) = puVar9;
    lVar13 = *(longlong *)(unaff_RBP + -0x40);
    if (lVar13 == lVar1) {
      iVar19 = *(int *)(unaff_RBP + 0x30);
      iVar4 = *(int *)((longlong)iVar19 * 0x170 + 0x20 + _DAT_180c95ff0);
      if (iVar4 == iVar19) goto LAB_18054f61f;
      uVar14 = iVar4 + 1;
      if (iVar4 < -1) {
        uVar14 = uVar20;
      }
      uVar10 = *(uint *)(unaff_RBP + 0x28);
      uVar14 = (uVar14 | iVar3 << 7) << 10 | uVar17 | uVar10;
      uVar12 = (ulonglong)(longlong)(int)uVar14 % (uVar11 & 0xffffffff);
      for (puVar6 = *(uint **)(lVar5 + uVar12 * 8);
          (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, uVar14 != *puVar6));
          puVar6 = *(uint **)(puVar6 + 2)) {
      }
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)*plVar2;
        *(longlong **)(unaff_RBP + -0x38) = plVar2;
      }
      else {
        *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar12 * 8;
      }
      iVar15 = *(int *)(unaff_RBP + -0x48);
      *(uint **)(unaff_RBP + -0x40) = puVar9;
      *(undefined8 *)(unaff_RBP + -0x40) = *(undefined8 *)(unaff_RBP + -0x40);
      *(undefined8 *)(unaff_RBP + -0x38) = *(undefined8 *)(unaff_RBP + -0x38);
      lVar13 = *(longlong *)(unaff_RBP + -0x40);
    }
    else {
      iVar19 = *(int *)(unaff_RBP + 0x30);
LAB_18054f61f:
      uVar10 = *(uint *)(unaff_RBP + 0x28);
    }
    if (lVar13 != lVar1) {
      iVar15 = *(int *)(lVar13 + 4);
      *(int *)(unaff_RBP + -0x48) = iVar15;
    }
    if (iVar18 != -1) goto LAB_18054f79f;
    if ((iVar15 == -1) && (*(int *)(unaff_RBP + 0x38) != -1)) {
      uVar14 = uVar17 | uVar10 | 0xfffe0000;
      uVar12 = (ulonglong)(longlong)(int)uVar14 % (uVar11 & 0xffffffff);
      for (puVar6 = *(uint **)(lVar5 + uVar12 * 8);
          (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, uVar14 != *puVar6));
          puVar6 = *(uint **)(puVar6 + 2)) {
      }
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)*plVar2;
        *(longlong **)(unaff_RBP + -0x38) = plVar2;
      }
      else {
        *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar12 * 8;
      }
      lVar1 = *(longlong *)(lVar5 + uVar11 * 8);
      *(uint **)(unaff_RBP + -0x40) = puVar9;
      if (*(longlong *)(unaff_RBP + -0x40) != lVar1) {
        iVar18 = *(int *)(*(longlong *)(unaff_RBP + -0x40) + 4);
      }
      uVar16 = (uVar16 | 0xffffff80) << 10 | uVar17 | uVar10;
      uVar12 = (ulonglong)(longlong)(int)uVar16 % (uVar11 & 0xffffffff);
      for (puVar6 = *(uint **)(lVar5 + uVar12 * 8);
          (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, uVar16 != *puVar6));
          puVar6 = *(uint **)(puVar6 + 2)) {
      }
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)*plVar2;
        *(longlong **)(unaff_RBP + -0x38) = plVar2;
      }
      else {
        *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar12 * 8;
      }
      *(uint **)(unaff_RBP + -0x40) = puVar9;
      lVar13 = *(longlong *)(unaff_RBP + -0x40);
      if ((lVar13 == lVar1) &&
         (iVar3 = *(int *)((longlong)iVar19 * 0x170 + 0x20 + _DAT_180c95ff0), iVar3 != iVar19)) {
        uVar16 = iVar3 + 1;
        if (iVar3 < -1) {
          uVar16 = uVar20;
        }
        uVar10 = (uVar16 | 0xffffff80) << 10 | uVar17 | uVar10;
        uVar12 = (ulonglong)(longlong)(int)uVar10 % (uVar11 & 0xffffffff);
        for (puVar6 = *(uint **)(lVar5 + uVar12 * 8);
            (puVar9 = puVar21, puVar6 != (uint *)0x0 && (puVar9 = puVar6, uVar10 != *puVar6));
            puVar6 = *(uint **)(puVar6 + 2)) {
        }
        if (puVar9 == (uint *)0x0) {
          puVar9 = (uint *)*plVar2;
          *(longlong **)(unaff_RBP + -0x38) = plVar2;
        }
        else {
          *(ulonglong *)(unaff_RBP + -0x38) = lVar5 + uVar12 * 8;
        }
        *(uint **)(unaff_RBP + -0x40) = puVar9;
        *(undefined8 *)(unaff_RBP + -0x40) = *(undefined8 *)(unaff_RBP + -0x40);
        *(undefined8 *)(unaff_RBP + -0x38) = *(undefined8 *)(unaff_RBP + -0x38);
        lVar13 = *(longlong *)(unaff_RBP + -0x40);
      }
      if (lVar13 == *(longlong *)(lVar5 + uVar11 * 8)) goto LAB_18054f79b;
      iVar15 = *(int *)(lVar13 + 4);
      *(int *)(unaff_RBP + -0x48) = iVar15;
      goto LAB_18054f79f;
    }
  }
  iVar19 = *(int *)(unaff_RBP + -0x48);
LAB_18054f7b4:
  if (iVar19 < 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(unaff_RBP + 0x18) + 0xf8) + 0x14 + (longlong)iVar19 * 0x18);
}



undefined4 FUN_18054f7d7(void)

{
  longlong unaff_RBP;
  int unaff_R12D;
  
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(unaff_RBP + 0x18) + 0xf8) + 0x14 +
          (longlong)unaff_R12D * 0x18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_18054f810(longlong param_1,int param_2,byte param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x158);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(param_1 + 0x150);
    do {
      if ((*piVar3 < 0) || (*piVar3 == param_2)) goto LAB_18054f8b3;
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar5 < iVar1);
  }
  iVar2 = *(int *)((longlong)param_2 * 0x170 + 0x20 + _DAT_180c95ff0);
  if ((iVar2 != param_2) && (0 < iVar1)) {
    piVar3 = *(int **)(param_1 + 0x150);
    do {
      iVar5 = iVar4;
      if ((*piVar3 < 0) || (*piVar3 == iVar2)) {
LAB_18054f8b3:
        return *(undefined4 *)
                (_DAT_180c96030 + 0x20 +
                ((longlong)
                 *(int *)(_DAT_180c96050 +
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar5 * 4) *
                          0x80 + 0x28 + (longlong)(int)(param_4 + (uint)param_3 * 4) * 0xc) * 0x1a +
                (longlong)param_5) * 4);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18054f900(longlong param_1,int param_2,byte param_3,int param_4,byte param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puStack_40;
  
  uVar13 = 0xffffffff;
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar10 = (uint *)0x0;
  uVar12 = param_2 * 2 + 2;
  uVar14 = (ulonglong)*(uint *)(param_1 + 0x40);
  uVar11 = (uint)param_3;
  uVar9 = 0xffffffff;
  if (param_4 < 0) {
    uVar8 = (param_5 | 2) << 0xb | (uint)param_3 | uVar12;
    for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar8 % uVar14) * 8);
        (puVar7 = puVar10, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar8 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar3 + *(longlong *)(param_1 + 0x40) * 8);
    }
    puVar4 = *(uint **)(lVar3 + *(longlong *)(param_1 + 0x40) * 8);
    if ((puVar7 == puVar4) || (uVar13 = puVar7[1], uVar13 != 0)) {
      uVar12 = (uint)param_5 << 0xb | uVar11 | uVar12;
      for (puVar7 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar12 % uVar14) * 8);
          (puVar6 = puVar10, puVar7 != (uint *)0x0 && (puVar6 = puVar7, uVar12 != *puVar7));
          puVar7 = *(uint **)(puVar7 + 2)) {
      }
      puStack_40 = puVar4;
      if (puVar6 != (uint *)0x0) {
        puStack_40 = puVar6;
      }
      uVar9 = 0xffffffff;
      if (puStack_40 != puVar4) {
        uVar9 = puStack_40[1];
      }
    }
  }
  else {
    uVar8 = (uint)param_5 << 0xb | uVar11 | uVar12;
    for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar8 % uVar14) * 8);
        (puVar7 = puVar10, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar8 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    uVar5 = *(ulonglong *)(param_1 + 0x40);
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar3 + uVar5 * 8);
    }
    puVar1 = (undefined8 *)(lVar3 + uVar5 * 8);
    if ((puVar7 == (uint *)*puVar1) || (uVar13 = puVar7[1], uVar13 != 0)) {
      uVar9 = param_4 + 1;
      if (param_4 < -1) {
        uVar9 = 0;
      }
      uVar9 = (uVar9 | (uint)param_5 << 6) << 5 | (uint)param_3 | uVar12;
      for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar9 % uVar14) * 8);
          (puVar7 = puVar10, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar9 != *puVar4));
          puVar4 = *(uint **)(puVar4 + 2)) {
      }
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)*puVar1;
      }
      puVar4 = *(uint **)(lVar3 + uVar5 * 8);
      if (puVar7 == puVar4) {
        iVar2 = *(int *)((longlong)param_4 * 0x170 + 0x20 + _DAT_180c95ff0);
        if (iVar2 != param_4) {
          uVar9 = iVar2 + 1;
          if (iVar2 < -1) {
            uVar9 = 0;
          }
          uVar12 = (uVar9 | (uint)param_5 << 6) << 5 | uVar11 | uVar12;
          for (puVar6 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar12 % (uVar5 & 0xffffffff))
                                           * 8);
              (puVar7 = puVar10, puVar6 != (uint *)0x0 && (puVar7 = puVar6, uVar12 != *puVar6));
              puVar6 = *(uint **)(puVar6 + 2)) {
          }
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)*puVar1;
          }
        }
        uVar9 = 0xffffffff;
        if (puVar7 == puVar4) goto FUN_18054fba8;
      }
      uVar9 = puVar7[1];
    }
  }
FUN_18054fba8:
  if (((int)uVar13 < 0) || ((-1 < (int)uVar9 && ((int)uVar9 < (int)uVar13)))) {
    uVar13 = uVar9;
  }
  if (-1 < (int)uVar13) {
    return (longlong)(int)uVar13 * 0x108 + *(longlong *)(param_1 + 0x28);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18054f916(longlong param_1,int param_2,byte param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong unaff_RBP;
  uint *puVar12;
  uint uVar13;
  uint in_R10D;
  int in_R11D;
  int iVar14;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar12 = (uint *)0x0;
  uVar13 = param_2 * 2 + 2;
  uVar10 = (ulonglong)*(uint *)(param_1 + 0x40);
  *(uint *)(unaff_RBP + -0x38) = uVar13;
  *(uint *)(unaff_RBP + 0x30) = (uint)param_3;
  iVar14 = in_R11D;
  if (param_4 < 0) {
    uVar8 = (in_R10D | 2) << 0xb | (uint)param_3 | uVar13;
    uVar9 = (ulonglong)(longlong)(int)uVar8 % uVar10;
    for (puVar4 = *(uint **)(lVar3 + uVar9 * 8);
        (puVar7 = puVar12, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar8 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar3 + lVar5 * 8);
      *(longlong *)(unaff_RBP + -0x28) = lVar3 + lVar5 * 8;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x28) = lVar3 + uVar9 * 8;
    }
    lVar11 = *(longlong *)(lVar3 + lVar5 * 8);
    *(uint **)(unaff_RBP + -0x30) = puVar7;
    if ((*(longlong *)(unaff_RBP + -0x30) == lVar11) ||
       (iVar14 = *(int *)(*(longlong *)(unaff_RBP + -0x30) + 4), iVar14 != 0)) {
      uVar13 = in_R10D << 0xb | *(uint *)(unaff_RBP + 0x30) | uVar13;
      uVar10 = (ulonglong)(longlong)(int)uVar13 % uVar10;
      for (puVar4 = *(uint **)(lVar3 + uVar10 * 8);
          (puVar7 = puVar12, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar13 != *puVar4));
          puVar4 = *(uint **)(puVar4 + 2)) {
      }
      if (puVar7 == (uint *)0x0) {
        *(longlong *)(unaff_RBP + -0x30) = lVar11;
        *(longlong *)(unaff_RBP + -0x28) = lVar3 + lVar5 * 8;
      }
      else {
        *(uint **)(unaff_RBP + -0x30) = puVar7;
        *(ulonglong *)(unaff_RBP + -0x28) = lVar3 + uVar10 * 8;
      }
      if (*(longlong *)(unaff_RBP + -0x30) != lVar11) {
        in_R11D = *(int *)(*(longlong *)(unaff_RBP + -0x30) + 4);
      }
    }
  }
  else {
    uVar13 = in_R10D << 0xb | (uint)param_3 | uVar13;
    uVar9 = (ulonglong)(longlong)(int)uVar13 % uVar10;
    for (puVar4 = *(uint **)(lVar3 + uVar9 * 8);
        (puVar7 = puVar12, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar13 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    uVar6 = *(ulonglong *)(param_1 + 0x40);
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar3 + uVar6 * 8);
      *(ulonglong *)(unaff_RBP + -0x28) = lVar3 + uVar6 * 8;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x28) = lVar3 + uVar9 * 8;
    }
    *(uint **)(unaff_RBP + -0x30) = puVar7;
    plVar1 = (longlong *)(lVar3 + uVar6 * 8);
    if ((*(longlong *)(unaff_RBP + -0x30) == *plVar1) ||
       (iVar14 = *(int *)(*(longlong *)(unaff_RBP + -0x30) + 4), iVar14 != 0)) {
      uVar13 = param_4 + 1;
      if (param_4 < in_R11D) {
        uVar13 = 0;
      }
      uVar13 = (uVar13 | in_R10D << 6) << 5 | (uint)param_3 | *(uint *)(unaff_RBP + -0x38);
      uVar10 = (ulonglong)(longlong)(int)uVar13 % uVar10;
      for (puVar4 = *(uint **)(lVar3 + uVar10 * 8);
          (puVar7 = puVar12, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar13 != *puVar4));
          puVar4 = *(uint **)(puVar4 + 2)) {
      }
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)*plVar1;
        *(longlong **)(unaff_RBP + -0x28) = plVar1;
      }
      else {
        *(ulonglong *)(unaff_RBP + -0x28) = lVar3 + uVar10 * 8;
      }
      lVar5 = *(longlong *)(lVar3 + uVar6 * 8);
      *(uint **)(unaff_RBP + -0x30) = puVar7;
      lVar11 = *(longlong *)(unaff_RBP + -0x30);
      if (lVar11 == lVar5) {
        iVar2 = *(int *)((longlong)param_4 * 0x170 + 0x20 + _DAT_180c95ff0);
        if (iVar2 != param_4) {
          uVar13 = iVar2 + 1;
          if (iVar2 < in_R11D) {
            uVar13 = 0;
          }
          uVar13 = (uVar13 | in_R10D << 6) << 5 | *(uint *)(unaff_RBP + 0x30) |
                   *(uint *)(unaff_RBP + -0x38);
          uVar10 = (ulonglong)(longlong)(int)uVar13 % (uVar6 & 0xffffffff);
          for (puVar4 = *(uint **)(lVar3 + uVar10 * 8);
              (puVar7 = puVar12, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar13 != *puVar4));
              puVar4 = *(uint **)(puVar4 + 2)) {
          }
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)*plVar1;
            *(longlong **)(unaff_RBP + -0x28) = plVar1;
          }
          else {
            *(ulonglong *)(unaff_RBP + -0x28) = lVar3 + uVar10 * 8;
          }
          *(uint **)(unaff_RBP + -0x30) = puVar7;
          *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(unaff_RBP + -0x30);
          *(undefined8 *)(unaff_RBP + -0x28) = *(undefined8 *)(unaff_RBP + -0x28);
          lVar11 = *(longlong *)(unaff_RBP + -0x30);
        }
        if (lVar11 == lVar5) goto FUN_18054fba8;
      }
      in_R11D = *(int *)(lVar11 + 4);
    }
  }
FUN_18054fba8:
  if ((iVar14 < 0) || ((-1 < in_R11D && (in_R11D < iVar14)))) {
    iVar14 = in_R11D;
  }
  if (-1 < iVar14) {
    return (longlong)iVar14 * 0x108 + *(longlong *)(param_1 + 0x28);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18054fa3f(uint param_1,undefined8 param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint *unaff_RSI;
  int in_R10D;
  int in_R11D;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R14;
  int unaff_R15D;
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = unaff_R14;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = (longlong)(int)(param_1 | param_4);
  uVar11 = SUB168(auVar7 % auVar6,0) & 0xffffffff;
  for (puVar3 = *(uint **)(unaff_RBX + uVar11 * 8);
      (puVar9 = unaff_RSI, puVar3 != (uint *)0x0 &&
      (puVar9 = puVar3, (param_1 | param_4) != *puVar3)); puVar3 = *(uint **)(puVar3 + 2)) {
  }
  uVar4 = *(ulonglong *)(unaff_R12 + 0x40);
  if (puVar9 == (uint *)0x0) {
    puVar9 = *(uint **)(unaff_RBX + uVar4 * 8);
    *(ulonglong *)(unaff_RBP + -0x28) = unaff_RBX + uVar4 * 8;
  }
  else {
    *(ulonglong *)(unaff_RBP + -0x28) = unaff_RBX + uVar11 * 8;
  }
  *(uint **)(unaff_RBP + -0x30) = puVar9;
  plVar1 = (longlong *)(unaff_RBX + uVar4 * 8);
  if ((*(longlong *)(unaff_RBP + -0x30) == *plVar1) ||
     (in_R11D = *(int *)(*(longlong *)(unaff_RBP + -0x30) + 4), in_R11D != 0)) {
    iVar8 = (int)unaff_R13;
    uVar10 = iVar8 + 1;
    if (iVar8 < unaff_R15D) {
      uVar10 = (uint)unaff_RSI;
    }
    uVar10 = (uVar10 | in_R10D << 6) << 5 | param_3 | *(uint *)(unaff_RBP + -0x38);
    uVar11 = (ulonglong)(longlong)(int)uVar10 % unaff_R14 & 0xffffffff;
    for (puVar3 = *(uint **)(unaff_RBX + uVar11 * 8);
        (puVar9 = unaff_RSI, puVar3 != (uint *)0x0 && (puVar9 = puVar3, uVar10 != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)*plVar1;
      *(longlong **)(unaff_RBP + -0x28) = plVar1;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x28) = unaff_RBX + uVar11 * 8;
    }
    lVar5 = *(longlong *)(unaff_RBX + uVar4 * 8);
    *(uint **)(unaff_RBP + -0x30) = puVar9;
    lVar12 = *(longlong *)(unaff_RBP + -0x30);
    if (lVar12 == lVar5) {
      iVar2 = *(int *)(unaff_R13 * 0x170 + 0x20 + _DAT_180c95ff0);
      if (iVar2 != iVar8) {
        uVar10 = iVar2 + 1;
        if (iVar2 < unaff_R15D) {
          uVar10 = (uint)unaff_RSI;
        }
        uVar10 = (uVar10 | in_R10D << 6) << 5 | *(uint *)(unaff_RBP + 0x30) |
                 *(uint *)(unaff_RBP + -0x38);
        uVar11 = (ulonglong)(longlong)(int)uVar10 % (uVar4 & 0xffffffff);
        for (puVar3 = *(uint **)(unaff_RBX + uVar11 * 8);
            (puVar9 = unaff_RSI, puVar3 != (uint *)0x0 && (puVar9 = puVar3, uVar10 != *puVar3));
            puVar3 = *(uint **)(puVar3 + 2)) {
        }
        if (puVar9 == (uint *)0x0) {
          puVar9 = (uint *)*plVar1;
          *(longlong **)(unaff_RBP + -0x28) = plVar1;
        }
        else {
          *(ulonglong *)(unaff_RBP + -0x28) = unaff_RBX + uVar11 * 8;
        }
        *(uint **)(unaff_RBP + -0x30) = puVar9;
        *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)(unaff_RBP + -0x30);
        *(undefined8 *)(unaff_RBP + -0x28) = *(undefined8 *)(unaff_RBP + -0x28);
        lVar12 = *(longlong *)(unaff_RBP + -0x30);
      }
      if (lVar12 == lVar5) goto LAB_18054fba3;
    }
    unaff_R15D = *(int *)(lVar12 + 4);
  }
LAB_18054fba3:
  if ((in_R11D < 0) || ((-1 < unaff_R15D && (unaff_R15D < in_R11D)))) {
    in_R11D = unaff_R15D;
  }
  if (-1 < in_R11D) {
    return (longlong)in_R11D * 0x108 + *(longlong *)(unaff_R12 + 0x28);
  }
  return 0;
}



longlong FUN_18054fba8(void)

{
  int in_R11D;
  longlong unaff_R12;
  int unaff_R15D;
  
  if ((in_R11D < 0) || ((-1 < unaff_R15D && (unaff_R15D < in_R11D)))) {
    in_R11D = unaff_R15D;
  }
  if (-1 < in_R11D) {
    return (longlong)in_R11D * 0x108 + *(longlong *)(unaff_R12 + 0x28);
  }
  return 0;
}



longlong FUN_18054fbc1(void)

{
  int in_R11D;
  longlong unaff_R12;
  int unaff_R15D;
  
  if ((-1 < unaff_R15D) && (unaff_R15D < in_R11D)) {
    in_R11D = unaff_R15D;
  }
  if (-1 < in_R11D) {
    return (longlong)in_R11D * 0x108 + *(longlong *)(unaff_R12 + 0x28);
  }
  return 0;
}



longlong FUN_18054fbd8(void)

{
  int in_R11D;
  longlong unaff_R12;
  
  return (longlong)in_R11D * 0x108 + *(longlong *)(unaff_R12 + 0x28);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18054fc50(longlong param_1,int param_2,int param_3,byte param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puStack_38;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  uVar12 = 0xffffffff;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x90);
  puVar9 = (uint *)0x0;
  uVar13 = 0xffffffff;
  uVar14 = param_2 * 2 + 2;
  uVar11 = param_4 | uVar14;
  if (param_3 < 0) {
    for (puVar3 = *(uint **)(lVar2 + ((ulonglong)(longlong)(int)(uVar11 | 0x10) % uVar8) * 8);
        (puVar6 = puVar9, puVar3 != (uint *)0x0 && (puVar6 = puVar3, (uVar11 | 0x10) != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    if (puVar6 == (uint *)0x0) {
      puVar6 = *(uint **)(lVar2 + *(longlong *)(param_1 + 0x90) * 8);
    }
    puVar3 = *(uint **)(lVar2 + *(longlong *)(param_1 + 0x90) * 8);
    if (puVar6 != puVar3) {
      uVar12 = puVar6[1];
    }
    for (puVar6 = *(uint **)(lVar2 + ((ulonglong)(longlong)(int)uVar11 % uVar8) * 8);
        (puVar5 = puVar9, puVar6 != (uint *)0x0 && (puVar5 = puVar6, uVar11 != *puVar6));
        puVar6 = *(uint **)(puVar6 + 2)) {
    }
    puStack_38 = puVar3;
    if (puVar5 != (uint *)0x0) {
      puStack_38 = puVar5;
    }
    uVar13 = 0xffffffff;
    if (puStack_38 != puVar3) {
      uVar13 = puStack_38[1];
    }
  }
  else {
    for (puVar3 = *(uint **)(lVar2 + ((ulonglong)(longlong)(int)uVar11 % uVar8) * 8);
        (puVar6 = puVar9, puVar3 != (uint *)0x0 && (puVar6 = puVar3, uVar11 != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    uVar4 = *(ulonglong *)(param_1 + 0x90);
    if (puVar6 == (uint *)0x0) {
      puVar6 = *(uint **)(lVar2 + uVar4 * 8);
    }
    puVar1 = (undefined8 *)(lVar2 + uVar4 * 8);
    if (puVar6 != (uint *)*puVar1) {
      uVar12 = puVar6[1];
    }
    iVar7 = param_3 + 1;
    if (param_3 < -1) {
      iVar7 = 0;
    }
    uVar11 = iVar7 << 5 | (uint)param_4 | uVar14;
    for (puVar3 = *(uint **)(lVar2 + ((ulonglong)(longlong)(int)uVar11 % uVar8) * 8);
        (puVar6 = puVar9, puVar3 != (uint *)0x0 && (puVar6 = puVar3, uVar11 != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)*puVar1;
    }
    puVar3 = *(uint **)(lVar2 + uVar4 * 8);
    if ((puVar6 == puVar3) &&
       (iVar7 = *(int *)((longlong)param_3 * 0x170 + 0x20 + _DAT_180c95ff0), iVar7 != param_3)) {
      iVar10 = iVar7 + 1;
      if (iVar7 < -1) {
        iVar10 = 0;
      }
      uVar14 = iVar10 << 5 | (uint)param_4 | uVar14;
      for (puVar5 = *(uint **)(lVar2 + ((ulonglong)(longlong)(int)uVar14 % (uVar4 & 0xffffffff)) * 8
                              );
          (puVar6 = puVar9, puVar5 != (uint *)0x0 && (puVar6 = puVar5, uVar14 != *puVar5));
          puVar5 = *(uint **)(puVar5 + 2)) {
      }
      if (puVar6 == (uint *)0x0) {
        puVar6 = (uint *)*puVar1;
      }
    }
    if (puVar6 != puVar3) {
      uVar13 = puVar6[1];
    }
  }
  if (((int)uVar12 < 0) || ((-1 < (int)uVar13 && ((int)uVar13 < (int)uVar12)))) {
    uVar12 = uVar13;
  }
  if (-1 < (int)uVar12) {
    return (longlong)(int)uVar12 * 0x68 + *(longlong *)(param_1 + 0x78);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18054fc68(longlong param_1,int param_2,int param_3,byte param_4)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong unaff_RBP;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int in_R10D;
  int iVar13;
  longlong in_R11;
  uint uVar14;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x90);
  puVar10 = (uint *)0x0;
  uVar14 = param_2 * 2 + 2;
  uVar12 = param_4 | uVar14;
  iVar13 = in_R10D;
  if (param_3 < 0) {
    uVar7 = (ulonglong)(longlong)(int)(uVar12 | 0x10) % uVar8;
    for (puVar2 = *(uint **)(in_R11 + uVar7 * 8);
        (puVar5 = puVar10, puVar2 != (uint *)0x0 && (puVar5 = puVar2, (uVar12 | 0x10) != *puVar2));
        puVar2 = *(uint **)(puVar2 + 2)) {
    }
    lVar3 = *(longlong *)(param_1 + 0x90);
    if (puVar5 == (uint *)0x0) {
      puVar5 = *(uint **)(in_R11 + lVar3 * 8);
      *(longlong *)(unaff_RBP + -0x20) = in_R11 + lVar3 * 8;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x20) = in_R11 + uVar7 * 8;
    }
    lVar9 = *(longlong *)(in_R11 + lVar3 * 8);
    *(uint **)(unaff_RBP + -0x28) = puVar5;
    if (*(longlong *)(unaff_RBP + -0x28) != lVar9) {
      iVar13 = *(int *)(*(longlong *)(unaff_RBP + -0x28) + 4);
    }
    for (puVar2 = *(uint **)(in_R11 + ((ulonglong)(longlong)(int)uVar12 % uVar8) * 8);
        (puVar5 = puVar10, puVar2 != (uint *)0x0 && (puVar5 = puVar2, uVar12 != *puVar2));
        puVar2 = *(uint **)(puVar2 + 2)) {
    }
    if (puVar5 == (uint *)0x0) {
      *(longlong *)(unaff_RBP + -0x28) = lVar9;
      *(longlong *)(unaff_RBP + -0x20) = in_R11 + lVar3 * 8;
    }
    else {
      *(uint **)(unaff_RBP + -0x28) = puVar5;
      *(ulonglong *)(unaff_RBP + -0x20) = in_R11 + ((ulonglong)(longlong)(int)uVar12 % uVar8) * 8;
    }
    if (*(longlong *)(unaff_RBP + -0x28) != lVar9) {
      in_R10D = *(int *)(*(longlong *)(unaff_RBP + -0x28) + 4);
    }
  }
  else {
    for (puVar2 = *(uint **)(in_R11 + ((ulonglong)(longlong)(int)uVar12 % uVar8) * 8);
        (puVar5 = puVar10, puVar2 != (uint *)0x0 && (puVar5 = puVar2, uVar12 != *puVar2));
        puVar2 = *(uint **)(puVar2 + 2)) {
    }
    uVar7 = *(ulonglong *)(param_1 + 0x90);
    uVar4 = (ulonglong)(longlong)(int)uVar12 % uVar8;
    if (puVar5 == (uint *)0x0) {
      puVar5 = *(uint **)(in_R11 + uVar7 * 8);
      uVar4 = uVar7;
    }
    *(uint **)(unaff_RBP + -0x28) = puVar5;
    plVar1 = (longlong *)(in_R11 + uVar7 * 8);
    *(ulonglong *)(unaff_RBP + -0x20) = in_R11 + uVar4 * 8;
    if (*(longlong *)(unaff_RBP + -0x28) != *plVar1) {
      iVar13 = *(int *)(*(longlong *)(unaff_RBP + -0x28) + 4);
    }
    iVar6 = param_3 + 1;
    if (param_3 < in_R10D) {
      iVar6 = 0;
    }
    uVar12 = iVar6 << 5 | (uint)param_4 | uVar14;
    uVar8 = (ulonglong)(longlong)(int)uVar12 % uVar8;
    for (puVar2 = *(uint **)(in_R11 + uVar8 * 8);
        (puVar5 = puVar10, puVar2 != (uint *)0x0 && (puVar5 = puVar2, uVar12 != *puVar2));
        puVar2 = *(uint **)(puVar2 + 2)) {
    }
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)*plVar1;
      *(longlong **)(unaff_RBP + -0x20) = plVar1;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x20) = in_R11 + uVar8 * 8;
    }
    lVar3 = *(longlong *)(in_R11 + uVar7 * 8);
    *(uint **)(unaff_RBP + -0x28) = puVar5;
    lVar9 = *(longlong *)(unaff_RBP + -0x28);
    if ((lVar9 == lVar3) &&
       (iVar6 = *(int *)((longlong)param_3 * 0x170 + 0x20 + _DAT_180c95ff0), iVar6 != param_3)) {
      iVar11 = iVar6 + 1;
      if (iVar6 < in_R10D) {
        iVar11 = 0;
      }
      uVar14 = iVar11 << 5 | (uint)param_4 | uVar14;
      uVar8 = (ulonglong)(longlong)(int)uVar14 % (uVar7 & 0xffffffff);
      for (puVar2 = *(uint **)(in_R11 + uVar8 * 8);
          (puVar5 = puVar10, puVar2 != (uint *)0x0 && (puVar5 = puVar2, uVar14 != *puVar2));
          puVar2 = *(uint **)(puVar2 + 2)) {
      }
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)*plVar1;
        *(longlong **)(unaff_RBP + -0x20) = plVar1;
      }
      else {
        *(ulonglong *)(unaff_RBP + -0x20) = in_R11 + uVar8 * 8;
      }
      *(uint **)(unaff_RBP + -0x28) = puVar5;
      *(undefined8 *)(unaff_RBP + -0x28) = *(undefined8 *)(unaff_RBP + -0x28);
      *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RBP + -0x20);
      lVar9 = *(longlong *)(unaff_RBP + -0x28);
    }
    if (lVar9 != lVar3) {
      in_R10D = *(int *)(lVar9 + 4);
    }
  }
  if ((iVar13 < 0) || ((-1 < in_R10D && (in_R10D < iVar13)))) {
    iVar13 = in_R10D;
  }
  if (-1 < iVar13) {
    return (longlong)iVar13 * 0x68 + *(longlong *)(param_1 + 0x78);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18054fd6f(undefined8 param_1,ulonglong param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  uint *unaff_RDI;
  int iVar10;
  int in_R10D;
  longlong in_R11;
  uint unaff_R12D;
  longlong unaff_R13;
  int unaff_R14D;
  uint unaff_R15D;
  
  for (puVar2 = *(uint **)(in_R11 + (param_2 & 0xffffffff) * 8);
      (puVar5 = unaff_RDI, puVar2 != (uint *)0x0 && (puVar5 = puVar2, param_4 != *puVar2));
      puVar2 = *(uint **)(puVar2 + 2)) {
  }
  uVar8 = *(ulonglong *)(unaff_R13 + 0x90);
  uVar4 = param_2 & 0xffffffff;
  if (puVar5 == (uint *)0x0) {
    puVar5 = *(uint **)(in_R11 + uVar8 * 8);
    uVar4 = uVar8;
  }
  *(uint **)(unaff_RBP + -0x28) = puVar5;
  plVar1 = (longlong *)(in_R11 + uVar8 * 8);
  *(ulonglong *)(unaff_RBP + -0x20) = in_R11 + uVar4 * 8;
  if (*(longlong *)(unaff_RBP + -0x28) != *plVar1) {
    in_R10D = *(int *)(*(longlong *)(unaff_RBP + -0x28) + 4);
  }
  iVar6 = param_3 + 1;
  if (param_3 < unaff_R14D) {
    iVar6 = (int)unaff_RDI;
  }
  uVar7 = iVar6 << 5 | unaff_R12D | unaff_R15D;
  uVar4 = (ulonglong)(longlong)(int)uVar7 % unaff_RSI & 0xffffffff;
  for (puVar2 = *(uint **)(in_R11 + uVar4 * 8);
      (puVar5 = unaff_RDI, puVar2 != (uint *)0x0 && (puVar5 = puVar2, uVar7 != *puVar2));
      puVar2 = *(uint **)(puVar2 + 2)) {
  }
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)*plVar1;
    *(longlong **)(unaff_RBP + -0x20) = plVar1;
  }
  else {
    *(ulonglong *)(unaff_RBP + -0x20) = in_R11 + uVar4 * 8;
  }
  lVar3 = *(longlong *)(in_R11 + uVar8 * 8);
  *(uint **)(unaff_RBP + -0x28) = puVar5;
  lVar9 = *(longlong *)(unaff_RBP + -0x28);
  if ((lVar9 == lVar3) &&
     (iVar6 = *(int *)((longlong)param_3 * 0x170 + 0x20 + _DAT_180c95ff0), iVar6 != param_3)) {
    iVar10 = iVar6 + 1;
    if (iVar6 < unaff_R14D) {
      iVar10 = (int)unaff_RDI;
    }
    uVar7 = iVar10 << 5 | unaff_R12D | unaff_R15D;
    uVar8 = (ulonglong)(longlong)(int)uVar7 % (uVar8 & 0xffffffff);
    for (puVar2 = *(uint **)(in_R11 + uVar8 * 8);
        (puVar5 = unaff_RDI, puVar2 != (uint *)0x0 && (puVar5 = puVar2, uVar7 != *puVar2));
        puVar2 = *(uint **)(puVar2 + 2)) {
    }
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)*plVar1;
      *(longlong **)(unaff_RBP + -0x20) = plVar1;
    }
    else {
      *(ulonglong *)(unaff_RBP + -0x20) = in_R11 + uVar8 * 8;
    }
    *(uint **)(unaff_RBP + -0x28) = puVar5;
    *(undefined8 *)(unaff_RBP + -0x28) = *(undefined8 *)(unaff_RBP + -0x28);
    *(undefined8 *)(unaff_RBP + -0x20) = *(undefined8 *)(unaff_RBP + -0x20);
    lVar9 = *(longlong *)(unaff_RBP + -0x28);
  }
  if (lVar9 != lVar3) {
    unaff_R14D = *(int *)(lVar9 + 4);
  }
  if ((in_R10D < 0) || ((-1 < unaff_R14D && (unaff_R14D < in_R10D)))) {
    in_R10D = unaff_R14D;
  }
  if (-1 < in_R10D) {
    return (longlong)in_R10D * 0x68 + *(longlong *)(unaff_R13 + 0x78);
  }
  return 0;
}



longlong FUN_18054feb2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int in_R10D;
  longlong unaff_R13;
  
  iVar1 = *(int *)(param_2 + 4);
  if ((in_R10D < 0) || ((-1 < iVar1 && (iVar1 < in_R10D)))) {
    in_R10D = iVar1;
  }
  if (-1 < in_R10D) {
    return (longlong)in_R10D * 0x68 + *(longlong *)(unaff_R13 + 0x78);
  }
  return 0;
}



longlong FUN_18054fecf(void)

{
  int in_R10D;
  longlong unaff_R13;
  int unaff_R14D;
  
  if ((-1 < unaff_R14D) && (unaff_R14D < in_R10D)) {
    in_R10D = unaff_R14D;
  }
  if (-1 < in_R10D) {
    return (longlong)in_R10D * 0x68 + *(longlong *)(unaff_R13 + 0x78);
  }
  return 0;
}



longlong FUN_18054fee6(void)

{
  int in_R10D;
  longlong unaff_R13;
  
  return (longlong)in_R10D * 0x68 + *(longlong *)(unaff_R13 + 0x78);
}







