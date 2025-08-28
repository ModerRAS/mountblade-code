#include "TaleWorlds.Native.Split.h"

// 99_part_03_part041_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801f37b0(longlong *param_1,longlong param_2)
void FUN_1801f37b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  void **ppuVar2;
  int iVar3;
  int32_t uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  void **ppuVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong *plVar15;
  char *pcVar16;
  char *pcVar17;
  longlong lVar18;
  void *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  void **ppuVar22;
  char *pcVar23;
  char *pcVar24;
  longlong *plVar25;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  longlong *plStackX_8;
  longlong lStackX_10;
  int aiStackX_18 [2];
  longlong *plStackX_20;
  void *puStack_1c8;
  char *pcStack_1c0;
  int iStack_1b8;
  ulonglong uStack_1b0;
  void *puStack_1a8;
  char *pcStack_1a0;
  int iStack_198;
  ulonglong uStack_190;
  void **ppuStack_188;
  void **ppuStack_180;
  void **ppuStack_178;
  int32_t uStack_170;
  void *puStack_168;
  longlong lStack_160;
  int32_t uStack_158;
  ulonglong uStack_150;
  void *puStack_148;
  longlong lStack_140;
  int32_t uStack_138;
  ulonglong uStack_130;
  int32_t uStack_128;
  int32_t uStack_124;
  uint uStack_120;
  void *puStack_118;
  longlong lStack_110;
  int iStack_108;
  ulonglong uStack_100;
  void **ppuStack_f8;
  void *puStack_f0;
  longlong lStack_e8;
  int32_t uStack_e0;
  ulonglong uStack_d8;
  void *puStack_d0;
  longlong lStack_c8;
  int32_t uStack_c0;
  ulonglong uStack_b8;
  void *puStack_b0;
  longlong lStack_a8;
  int32_t uStack_a0;
  ulonglong uStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  int32_t uStack_78;
  longlong alStack_70 [4];
  uint64_t uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pcVar23 = "id";
  do {
    pcVar24 = pcVar23;
    pcVar23 = pcVar24 + 1;
  } while (*pcVar23 != '\0');
  pcVar23 = (char *)0x0;
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); plStackX_8 = param_1, lStackX_10 = param_2,
      puVar10 != (uint64_t *)0x0; puVar10 = (uint64_t *)puVar10[6]) {
    pcVar13 = (char *)*puVar10;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar24 + -0x180a0ae27) {
      pcVar17 = pcVar17 + (longlong)pcVar13;
      if (pcVar17 <= pcVar13) {
LAB_1801f3847:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        (**(code **)(*param_1 + 0x10))(param_1,lVar18);
        break;
      }
      lVar18 = (longlong)&UNK_180a0ae28 - (longlong)pcVar13;
      while (*pcVar13 == pcVar13[lVar18]) {
        pcVar13 = pcVar13 + 1;
        if (pcVar17 <= pcVar13) goto LAB_1801f3847;
      }
    }
  }
  pcVar24 = "shader";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a089c3) {
      pcVar17 = pcVar24 + (longlong)pcVar17;
      if (pcVar17 <= pcVar24) {
LAB_1801f38c5:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        (**(code **)(param_1[4] + 0x10))(param_1 + 4,lVar18);
        break;
      }
      lVar18 = (longlong)&system_config_89c4 - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f38c5;
      }
    }
  }
  pcVar24 = "class";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e7df) {
      pcVar17 = pcVar17 + (longlong)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3940:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        (**(code **)(param_1[8] + 0x10))(param_1 + 8,lVar18);
        break;
      }
      lVar18 = (longlong)&UNK_180a0e7e0 - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3940;
      }
    }
  }
  pcVar24 = "skip_frames";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); pcVar24 = pcVar23, puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e7e7) {
      pcVar17 = pcVar17 + (longlong)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f39c0:
        pcVar24 = (char *)0x180d48d24;
        if ((char *)puVar10[1] != (char *)0x0) {
          pcVar24 = (char *)puVar10[1];
        }
        break;
      }
      lVar18 = (longlong)&UNK_180a0e7e8 - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f39c0;
      }
    }
  }
  if (((longlong)param_1 + 100 != 0) && (pcVar24 != (char *)0x0)) {
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (pcVar24[uVar7] != '\0');
    if (((uVar7 < 3) || (*pcVar24 != '0')) ||
       (puVar19 = &UNK_180a3cb84, (pcVar24[1] + 0xa8U & 0xdf) != 0)) {
      puVar19 = &UNK_180a063a0;
    }
    FUN_18010cbc0(pcVar24,puVar19,(longlong)param_1 + 100);
  }
  FUN_180631000(param_2,&UNK_180a0e7c8,(longlong)param_1 + 0x69);
  puStack_1c8 = &UNK_180a3c3e0;
  uStack_1b0 = 0;
  pcStack_1c0 = (char *)0x0;
  iStack_1b8 = 0;
  pcVar24 = "size";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e7d7) {
      pcVar17 = pcVar17 + (longlong)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3ac0:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        FUN_180627c50(&puStack_1c8,lVar18);
        break;
      }
      lVar18 = (longlong)&UNK_180a0e7d8 - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3ac0;
      }
    }
  }
  pcVar24 = pcStack_1c0;
  if (iStack_1b8 == 8) {
    iVar3 = strcmp(pcStack_1c0,&UNK_180a0e808);
    if (iVar3 == 0) {
      *(int8_t *)(param_1 + 0xd) = 1;
    }
    else {
      iVar3 = strcmp(pcVar24,&UNK_180a0e818);
      if (iVar3 == 0) {
        *(int8_t *)(param_1 + 0xd) = 0;
      }
    }
  }
  puStack_1c8 = &UNK_180a3c3e0;
  if (pcStack_1c0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pcStack_1c0 = (char *)0x0;
  uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
  puStack_1c8 = &UNK_18098bcb0;
  puStack_1a8 = &UNK_180a3c3e0;
  uStack_190 = 0;
  pcStack_1a0 = (char *)0x0;
  iStack_198 = 0;
  pcVar24 = "format";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e7f3) {
      pcVar17 = pcVar17 + (longlong)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3bd5:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        FUN_180627c50(&puStack_1a8,lVar18);
        break;
      }
      lVar18 = (longlong)&UNK_180a0e7f4 - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3bd5;
      }
    }
  }
  uVar4 = FUN_180225200(&puStack_1a8);
  *(int32_t *)((longlong)param_1 + 0x84) = uVar4;
  puStack_1a8 = &UNK_180a3c3e0;
  if (pcStack_1a0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pcStack_1a0 = (char *)0x0;
  uStack_190 = uStack_190 & 0xffffffff00000000;
  puStack_1a8 = &UNK_18098bcb0;
  pcVar24 = "width";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); pcVar24 = pcVar23, puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0a23b) {
      pcVar17 = pcVar17 + (longlong)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3c88:
        pcVar24 = (char *)0x180d48d24;
        if ((char *)puVar10[1] != (char *)0x0) {
          pcVar24 = (char *)puVar10[1];
        }
        break;
      }
      lVar18 = (longlong)&UNK_180a0a23c - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3c88;
      }
    }
  }
  if (((longlong)param_1 + 0x6c != 0) && (pcVar24 != (char *)0x0)) {
    FUN_18010cbc0(pcVar24,&system_config_6430,(longlong)param_1 + 0x6c);
  }
  pcVar24 = "height";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); pcVar24 = pcVar23, puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0a20b) {
      pcVar17 = pcVar24 + (longlong)pcVar17;
      if (pcVar17 <= pcVar24) {
LAB_1801f3d20:
        pcVar24 = (char *)0x180d48d24;
        if ((char *)puVar10[1] != (char *)0x0) {
          pcVar24 = (char *)puVar10[1];
        }
        break;
      }
      lVar18 = (longlong)&UNK_180a0a20c - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3d20;
      }
    }
  }
  if ((param_1 + 0xe != (longlong *)0x0) && (pcVar24 != (char *)0x0)) {
    FUN_18010cbc0(pcVar24,&system_config_6430,param_1 + 0xe);
  }
  FUN_180631000(param_2,&UNK_180a0e800,(longlong)param_1 + 0x6a);
  FUN_180631330(param_2,&UNK_180a0e838,(longlong)param_1 + 0x7c);
  FUN_180631330(param_2,&UNK_180a0e850,param_1 + 0x10);
  pcVar24 = "input";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (plVar25 = *(longlong **)(param_2 + 0x30); plStackX_20 = plVar25, plVar25 != (longlong *)0x0;
      plVar25 = (longlong *)plVar25[0xb]) {
    pcVar24 = (char *)*plVar25;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)plVar25[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e823) {
      pcVar17 = pcVar17 + (longlong)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3e20:
        do {
          pcVar23 = (char *)0x0;
          pcVar24 = "index";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          puVar10 = (uint64_t *)plVar25[8];
LAB_1801f3e41:
          if (puVar10 != (uint64_t *)0x0) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 != pcVar13 + -0x180a0ee37) goto LAB_1801f3fae;
            pcVar17 = pcVar24 + (longlong)pcVar17;
            if (pcVar24 < pcVar17) {
              lVar18 = (longlong)&UNK_180a0ee38 - (longlong)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f3e94;
              }
              goto LAB_1801f3fae;
            }
LAB_1801f3e94:
            pcVar24 = (char *)0x180d48d24;
            if ((char *)puVar10[1] != (char *)0x0) {
              pcVar24 = (char *)puVar10[1];
            }
            uVar7 = 0xffffffffffffffff;
            do {
              uVar7 = uVar7 + 1;
            } while (pcVar24[uVar7] != '\0');
            if (((uVar7 < 3) || (*pcVar24 != '0')) ||
               (puVar19 = &UNK_180a3cb84, (pcVar24[1] + 0xa8U & 0xdf) != 0)) {
              puVar19 = &UNK_180a063a0;
            }
            FUN_18010cbc0(pcVar24,puVar19,aiStackX_18);
          }
          puStack_168 = &UNK_180a3c3e0;
          uStack_150 = 0;
          lStack_160 = 0;
          uStack_158 = 0;
          ppuStack_f8 = &puStack_148;
          puStack_148 = &UNK_180a3c3e0;
          uStack_130 = 0;
          lStack_140 = 0;
          uStack_138 = 0;
          uStack_124 = 0xffffffff;
          uStack_120 = 0;
          FUN_180627c50(&puStack_168,&system_buffer_ptr);
          (**(code **)(puStack_148 + 0x10))(&puStack_148,&system_buffer_ptr);
          uStack_128 = 0;
          pcVar24 = "type";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          for (puVar10 = (uint64_t *)plVar25[8]; puVar10 != (uint64_t *)0x0;
              puVar10 = (uint64_t *)puVar10[6]) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 == pcVar13 + -0x180a0ee2f) {
              pcVar17 = pcVar17 + (longlong)pcVar24;
              if (pcVar17 <= pcVar24) {
LAB_1801f3fe0:
                lVar18 = 0x180d48d24;
                if (puVar10[1] != 0) {
                  lVar18 = puVar10[1];
                }
                (**(code **)(puStack_168 + 0x10))(&puStack_168,lVar18);
                break;
              }
              lVar18 = (longlong)&UNK_180a0ee30 - (longlong)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f3fe0;
              }
            }
          }
          pcVar24 = "source";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          for (puVar10 = (uint64_t *)plVar25[8]; puVar10 != (uint64_t *)0x0;
              puVar10 = (uint64_t *)puVar10[6]) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 == pcVar13 + -0x180a0e82b) {
              pcVar17 = pcVar24 + (longlong)pcVar17;
              if (pcVar17 <= pcVar24) {
LAB_1801f4060:
                lVar18 = 0x180d48d24;
                if (puVar10[1] != 0) {
                  lVar18 = puVar10[1];
                }
                (**(code **)(puStack_148 + 0x10))(&puStack_148,lVar18);
                break;
              }
              lVar18 = (longlong)&UNK_180a0e82c - (longlong)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f4060;
              }
            }
          }
          pcVar24 = "mrt_index";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          for (puVar10 = (uint64_t *)plVar25[8]; puVar10 != (uint64_t *)0x0;
              puVar10 = (uint64_t *)puVar10[6]) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 == pcVar13 + -0x180a0e877) {
              pcVar17 = pcVar17 + (longlong)pcVar24;
              if (pcVar17 <= pcVar24) {
LAB_1801f40e4:
                pcVar24 = (char *)0x180d48d24;
                if ((char *)puVar10[1] != (char *)0x0) {
                  pcVar24 = (char *)puVar10[1];
                }
                uVar7 = 0xffffffffffffffff;
                do {
                  uVar7 = uVar7 + 1;
                } while (pcVar24[uVar7] != '\0');
                if (((uVar7 < 3) || (*pcVar24 != '0')) ||
                   (puVar19 = &UNK_180a3cb84, (pcVar24[1] + 0xa8U & 0xdf) != 0)) {
                  puVar19 = &UNK_180a063a0;
                }
                FUN_18010cbc0(pcVar24,puVar19,&uStack_128);
                break;
              }
              lVar18 = (longlong)&UNK_180a0e878 - (longlong)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f40e4;
              }
            }
          }
          puStack_1c8 = &UNK_180a3c3e0;
          uStack_1b0 = 0;
          pcStack_1c0 = (char *)0x0;
          iStack_1b8 = 0;
          pcVar24 = "include";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          for (puVar10 = (uint64_t *)plVar25[8]; puVar10 != (uint64_t *)0x0;
              puVar10 = (uint64_t *)puVar10[6]) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 == pcVar13 + -0x180a0e887) {
              pcVar17 = pcVar17 + (longlong)pcVar24;
              if (pcVar17 <= pcVar24) {
LAB_1801f41d4:
                lVar18 = 0x180d48d24;
                if (puVar10[1] != 0) {
                  lVar18 = puVar10[1];
                }
                FUN_180627c50(&puStack_1c8,lVar18);
                break;
              }
              lVar18 = (longlong)&UNK_180a0e888 - (longlong)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f41d4;
              }
            }
          }
          if (pcStack_1c0 != (char *)0x0) {
            cVar1 = *pcStack_1c0;
            iStack_1b8 = 0;
            pcVar24 = pcVar23;
            pcVar13 = pcVar23;
            while (cVar1 != '\0') {
              if (' ' < pcVar23[(longlong)pcStack_1c0]) {
                if (pcVar24 != pcVar23) {
                  pcVar24[(longlong)pcStack_1c0] = pcVar23[(longlong)pcStack_1c0];
                }
                pcVar13 = (char *)(ulonglong)((int)pcVar13 + 1);
                pcVar24 = pcVar24 + 1;
              }
              iStack_1b8 = (int)pcVar13;
              pcVar23 = pcVar23 + 1;
              cVar1 = pcVar23[(longlong)pcStack_1c0];
            }
            pcVar24[(longlong)pcStack_1c0] = '\0';
          }
          ppuStack_188 = (void **)0x0;
          ppuStack_180 = (void **)0x0;
          ppuStack_178 = (void **)0x0;
          uStack_170 = 3;
          if (pcStack_1c0 != (char *)0x0) {
            cVar1 = *pcStack_1c0;
            param_1 = plStackX_8;
            pcVar24 = pcStack_1c0;
            pcVar23 = pcStack_1c0;
            while( true ) {
              plStackX_8 = param_1;
              if (cVar1 == '\0') break;
              ppuVar8 = (void **)0x0;
              lVar18 = strchr(&system_config_d518,(int)*pcVar24);
              if ((lVar18 != 0) && (pcVar23 != pcVar24)) {
                puStack_118 = &UNK_180a3c3e0;
                uStack_100 = 0;
                lStack_110 = 0;
                iStack_108 = 0;
                FUN_180628210(&puStack_118,pcVar23,(int)pcVar24 - (int)pcVar23);
                ppuVar22 = ppuStack_180;
                pcVar23 = pcVar24 + 1;
                if (ppuStack_180 < ppuStack_178) {
                  ppuStack_f8 = ppuStack_180;
                  *ppuStack_180 = &UNK_18098bcb0;
                  ppuStack_180[1] = (void *)0x0;
                  *(int32_t *)(ppuStack_180 + 2) = 0;
                  *ppuStack_180 = &UNK_180a3c3e0;
                  ppuStack_180[3] = (void *)0x0;
                  ppuStack_180[1] = (void *)0x0;
                  *(int32_t *)(ppuStack_180 + 2) = 0;
                  ppuStack_180 = ppuStack_180 + 4;
                  FUN_1806277c0(ppuVar22,iStack_108);
                  if (iStack_108 != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(ppuVar22[1],lStack_110,iStack_108 + 1);
                  }
                  if (lStack_110 != 0) {
                    *(int32_t *)(ppuVar22 + 2) = 0;
                    if (ppuVar22[1] != (int8_t *)0x0) {
                      *ppuVar22[1] = 0;
                    }
                    *(int32_t *)((longlong)ppuVar22 + 0x1c) = 0;
                  }
                }
                else {
                  lVar18 = (longlong)ppuStack_180 - (longlong)ppuStack_188 >> 5;
                  if (lVar18 == 0) {
                    lVar18 = 1;
LAB_1801f439b:
                    ppuVar8 = (void **)
                              FUN_18062b420(_DAT_180c8ed18,lVar18 << 5,(int8_t)uStack_170);
                  }
                  else {
                    lVar18 = lVar18 * 2;
                    if (lVar18 != 0) goto LAB_1801f439b;
                  }
                  lVar11 = FUN_180059780(ppuStack_188,ppuStack_180,ppuVar8);
                  FUN_180627ae0(lVar11,&puStack_118);
                  ppuVar2 = ppuStack_180;
                  for (ppuVar22 = ppuStack_188; ppuVar22 != ppuVar2; ppuVar22 = ppuVar22 + 4) {
                    (**(code **)*ppuVar22)(ppuVar22,0);
                  }
                  if (ppuStack_188 != (void **)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900(ppuStack_188);
                  }
                  ppuStack_178 = ppuVar8 + lVar18 * 4;
                  ppuStack_188 = ppuVar8;
                  ppuStack_180 = (void **)(lVar11 + 0x20);
                }
                puStack_118 = &UNK_180a3c3e0;
                if (lStack_110 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                lStack_110 = 0;
                uStack_100 = uStack_100 & 0xffffffff00000000;
                puStack_118 = &UNK_18098bcb0;
              }
              pcVar24 = pcVar24 + 1;
              cVar1 = *pcVar24;
              plVar25 = plStackX_20;
              param_1 = plStackX_8;
            }
            ppuVar8 = (void **)0x0;
            if (pcVar23 == pcVar24) goto LAB_1801f45d5;
            puStack_f0 = &UNK_180a3c3e0;
            uStack_d8 = 0;
            lStack_e8 = 0;
            uStack_e0 = 0;
            FUN_180628210(&puStack_f0,pcVar23,(int)pcVar24 - (int)pcVar23);
            ppuVar22 = ppuStack_180;
            if (ppuStack_180 < ppuStack_178) {
              ppuStack_180 = ppuStack_180 + 4;
              FUN_180627ae0(ppuVar22,&puStack_f0);
            }
            else {
              lVar18 = (longlong)ppuStack_180 - (longlong)ppuStack_188 >> 5;
              if (lVar18 == 0) {
                lVar18 = 1;
LAB_1801f44fa:
                ppuVar8 = (void **)
                          FUN_18062b420(_DAT_180c8ed18,lVar18 << 5,(int8_t)uStack_170);
              }
              else {
                lVar18 = lVar18 * 2;
                if (lVar18 != 0) goto LAB_1801f44fa;
              }
              lVar11 = FUN_180059780(ppuStack_188,ppuStack_180,ppuVar8);
              FUN_180627ae0(lVar11,&puStack_f0);
              ppuVar2 = ppuStack_180;
              for (ppuVar22 = ppuStack_188; ppuVar22 != ppuVar2; ppuVar22 = ppuVar22 + 4) {
                (**(code **)*ppuVar22)(ppuVar22,0);
              }
              if (ppuStack_188 != (void **)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(ppuStack_188);
              }
              ppuStack_178 = ppuVar8 + lVar18 * 4;
              ppuStack_188 = ppuVar8;
              ppuStack_180 = (void **)(lVar11 + 0x20);
            }
            puStack_f0 = &UNK_180a3c3e0;
            if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_e8 = 0;
            uStack_d8 = uStack_d8 & 0xffffffff00000000;
            puStack_f0 = &UNK_18098bcb0;
            param_1 = plStackX_8;
          }
LAB_1801f45d5:
          uVar14 = 0;
          iVar3 = 0;
          uVar7 = uVar14;
          uVar20 = uVar14;
          if ((longlong)ppuStack_180 - (longlong)ppuStack_188 >> 5 != 0) {
            do {
              plStackX_20 = alStack_70;
              uVar9 = FUN_180627ae0(alStack_70,ppuStack_188 + uVar7 * 4);
              uVar5 = FUN_1801f2390(extraout_XMM0_Da,uVar9);
              uVar20 = (ulonglong)((uint)uVar20 | uVar5);
              iVar3 = iVar3 + 1;
              uVar7 = (longlong)iVar3;
            } while ((ulonglong)(longlong)iVar3 <
                     (ulonglong)((longlong)ppuStack_180 - (longlong)ppuStack_188 >> 5));
          }
          if (((longlong)ppuStack_180 - (longlong)ppuStack_188 & 0xffffffffffffffe0U) != 0) {
            uStack_124 = (int32_t)uVar20;
          }
          puStack_1a8 = &UNK_180a3c3e0;
          uStack_190 = 0;
          pcStack_1a0 = (char *)0x0;
          iStack_198 = 0;
          lVar18 = FUN_1800a02a0(plVar25,&UNK_180a0e868);
          if (lVar18 != 0) {
            lVar11 = 0x180d48d24;
            if (*(longlong *)(lVar18 + 8) != 0) {
              lVar11 = *(longlong *)(lVar18 + 8);
            }
            (**(code **)(puStack_1a8 + 0x10))(&puStack_1a8,lVar11);
          }
          if (pcStack_1a0 != (char *)0x0) {
            iStack_198 = 0;
            cVar1 = *pcStack_1a0;
            uVar7 = uVar14;
            uVar20 = uVar14;
            while (cVar1 != '\0') {
              if (' ' < pcStack_1a0[uVar7]) {
                if (uVar20 != uVar7) {
                  pcStack_1a0[uVar20] = pcStack_1a0[uVar7];
                }
                iStack_198 = iStack_198 + 1;
                uVar20 = uVar20 + 1;
              }
              uVar7 = uVar7 + 1;
              cVar1 = pcStack_1a0[uVar7];
            }
            pcStack_1a0[uVar20] = '\0';
          }
          lStack_90 = 0;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 3;
          if (pcStack_1a0 != (char *)0x0) {
            cVar1 = *pcStack_1a0;
            pcVar24 = pcStack_1a0;
            pcVar23 = pcStack_1a0;
            while( true ) {
              if (cVar1 == '\0') break;
              lVar18 = strchr(&system_config_d518,(int)*pcVar24);
              if ((lVar18 != 0) && (pcVar23 != pcVar24)) {
                puStack_d0 = &UNK_180a3c3e0;
                uStack_b8 = 0;
                lStack_c8 = 0;
                uStack_c0 = 0;
                FUN_180628210(&puStack_d0,pcVar23,(int)pcVar24 - (int)pcVar23);
                pcVar23 = pcVar24 + 1;
                if (uStack_88 < uStack_80) {
                  uStack_88 = uStack_88 + 0x20;
                  FUN_180627ae0();
                }
                else {
                  FUN_180059820(&lStack_90,&puStack_d0);
                }
                puStack_d0 = &UNK_180a3c3e0;
                if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                lStack_c8 = 0;
                uStack_b8 = uStack_b8 & 0xffffffff00000000;
                puStack_d0 = &UNK_18098bcb0;
              }
              pcVar24 = pcVar24 + 1;
              cVar1 = *pcVar24;
            }
            if (pcVar23 != pcVar24) {
              puStack_b0 = &UNK_180a3c3e0;
              uStack_98 = 0;
              lStack_a8 = 0;
              uStack_a0 = 0;
              FUN_180628210(&puStack_b0,pcVar23,(int)pcVar24 - (int)pcVar23);
              if (uStack_88 < uStack_80) {
                uStack_88 = uStack_88 + 0x20;
                FUN_180627ae0();
              }
              else {
                FUN_180059820(&lStack_90,&puStack_b0);
              }
              puStack_b0 = &UNK_180a3c3e0;
              if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              lStack_a8 = 0;
              uStack_98 = uStack_98 & 0xffffffff00000000;
              puStack_b0 = &UNK_18098bcb0;
            }
          }
          uVar5 = 0;
          iVar3 = 0;
          if ((longlong)(uStack_88 - lStack_90) >> 5 != 0) {
            do {
              plStackX_20 = alStack_70;
              uVar9 = FUN_180627ae0(alStack_70,lStack_90 + uVar14 * 0x20);
              uVar6 = FUN_1801f2390(extraout_XMM0_Da_00,uVar9);
              uVar5 = uVar5 | uVar6;
              iVar3 = iVar3 + 1;
              uVar14 = (ulonglong)iVar3;
            } while (uVar14 < (ulonglong)((longlong)(uStack_88 - lStack_90) >> 5));
          }
          if ((uStack_88 - lStack_90 & 0xffffffffffffffe0) != 0) {
            uStack_120 = uVar5;
          }
          plVar15 = param_1 + (longlong)aiStackX_18[0] * 4 + 0x11;
          uVar7 = plVar15[1];
          if (uVar7 < (ulonglong)plVar15[2]) {
            plVar15[1] = uVar7 + 0x50;
            plStackX_20 = (longlong *)uVar7;
            FUN_180627ae0(uVar7);
            FUN_180627ae0(uVar7 + 0x20,&puStack_148);
            *(int32_t *)(uVar7 + 0x40) = uStack_128;
            *(int32_t *)(uVar7 + 0x44) = uStack_124;
            *(uint *)(uVar7 + 0x48) = uStack_120;
          }
          else {
            FUN_1801f9e20(plVar15,&puStack_168);
          }
          pcVar23 = "input";
          do {
            pcVar24 = pcVar23;
            pcVar23 = pcVar24 + 1;
          } while (*pcVar23 != '\0');
          for (plStackX_20 = (longlong *)plVar25[0xb]; plStackX_20 != (longlong *)0x0;
              plStackX_20 = (longlong *)plStackX_20[0xb]) {
            pcVar23 = (char *)*plStackX_20;
            if (pcVar23 == (char *)0x0) {
              pcVar13 = (char *)0x0;
              pcVar23 = (char *)0x180d48d24;
            }
            else {
              pcVar13 = (char *)plStackX_20[2];
            }
            if (pcVar13 == pcVar24 + -0x180a0e823) {
              pcVar13 = pcVar13 + (longlong)pcVar23;
              if (pcVar13 <= pcVar23) goto LAB_1801f49dd;
              lVar18 = (longlong)&UNK_180a0e824 - (longlong)pcVar23;
              while (*pcVar23 == pcVar23[lVar18]) {
                pcVar23 = pcVar23 + 1;
                if (pcVar13 <= pcVar23) goto LAB_1801f49dd;
              }
            }
          }
          plStackX_20 = (longlong *)0x0;
LAB_1801f49dd:
          plVar25 = plStackX_20;
          FUN_18005d580(&lStack_90);
          puStack_1a8 = &UNK_180a3c3e0;
          if (pcStack_1a0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          pcStack_1a0 = (char *)0x0;
          uStack_190 = uStack_190 & 0xffffffff00000000;
          puStack_1a8 = &UNK_18098bcb0;
          FUN_18005d580(&ppuStack_188);
          puStack_1c8 = &UNK_180a3c3e0;
          if (pcStack_1c0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          pcStack_1c0 = (char *)0x0;
          uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
          puStack_1c8 = &UNK_18098bcb0;
          ppuStack_f8 = &puStack_148;
          puStack_148 = &UNK_180a3c3e0;
          if (lStack_140 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_140 = 0;
          uStack_130 = uStack_130 & 0xffffffff00000000;
          puStack_148 = &UNK_18098bcb0;
          ppuStack_f8 = &puStack_168;
          puStack_168 = &UNK_180a3c3e0;
          if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_160 = 0;
          uStack_150 = uStack_150 & 0xffffffff00000000;
          puStack_168 = &UNK_18098bcb0;
          param_2 = lStackX_10;
          if (plVar25 == (longlong *)0x0) goto LAB_1801f4ab7;
        } while( true );
      }
      lVar18 = (longlong)&UNK_180a0e824 - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3e20;
      }
    }
  }
LAB_1801f4ab7:
  pcVar23 = (char *)0x0;
  puVar10 = (uint64_t *)FUN_18005d4b0(param_2,&UNK_180a0e870,0);
  if (puVar10 != (uint64_t *)0x0) {
LAB_1801f4ae0:
    lVar18 = FUN_1800a02a0(puVar10,&UNK_180a0ee38);
    if (lVar18 != 0) {
      pcVar24 = (char *)0x180d48d24;
      if (*(char **)(lVar18 + 8) != (char *)0x0) {
        pcVar24 = *(char **)(lVar18 + 8);
      }
      uVar7 = 0xffffffffffffffff;
      do {
        uVar7 = uVar7 + 1;
      } while (pcVar24[uVar7] != '\0');
      if (((uVar7 < 3) || (*pcVar24 != '0')) ||
         (puVar19 = &UNK_180a3cb84, (pcVar24[1] + 0xa8U & 0xdf) != 0)) {
        puVar19 = &UNK_180a063a0;
      }
      FUN_18010cbc0(pcVar24,puVar19,&plStackX_8);
    }
    lVar18 = (longlong)(int)plStackX_8;
    lVar11 = FUN_1800a02a0(puVar10,&UNK_180a0ee30);
    if (lVar11 != 0) {
      lVar21 = 0x180d48d24;
      if (*(longlong *)(lVar11 + 8) != 0) {
        lVar21 = *(longlong *)(lVar11 + 8);
      }
      (**(code **)(param_1[lVar18 * 0xb + 0x51] + 0x10))(param_1 + lVar18 * 0xb + 0x51,lVar21);
    }
    lVar18 = (longlong)(int)plStackX_8;
    lVar11 = FUN_1800a02a0(puVar10,&system_config_3a84);
    if (lVar11 != 0) {
      lVar21 = 0x180d48d24;
      if (*(longlong *)(lVar11 + 8) != 0) {
        lVar21 = *(longlong *)(lVar11 + 8);
      }
      (**(code **)(param_1[lVar18 * 0xb + 0x7d] + 0x10))(param_1 + lVar18 * 0xb + 0x7d,lVar21);
    }
    pcVar24 = "output";
    do {
      pcVar13 = pcVar24;
      pcVar24 = pcVar13 + 1;
    } while (*pcVar24 != '\0');
    puVar10 = (uint64_t *)puVar10[0xb];
    param_2 = lStackX_10;
    if (puVar10 != (uint64_t *)0x0) {
      do {
        pcVar24 = (char *)*puVar10;
        if (pcVar24 == (char *)0x0) {
          pcVar24 = (char *)0x180d48d24;
          pcVar17 = pcVar23;
        }
        else {
          pcVar17 = (char *)puVar10[2];
        }
        if (pcVar17 == pcVar13 + -0x180a0e86f) {
          pcVar17 = pcVar17 + (longlong)pcVar24;
          if (pcVar17 <= pcVar24) goto LAB_1801f4ae0;
          lVar18 = (longlong)&UNK_180a0e870 - (longlong)pcVar24;
          while (*pcVar24 == pcVar24[lVar18]) {
            pcVar24 = pcVar24 + 1;
            if (pcVar17 <= pcVar24) goto LAB_1801f4ae0;
          }
        }
        puVar10 = (uint64_t *)puVar10[0xb];
        if (puVar10 == (uint64_t *)0x0) break;
      } while( true );
    }
  }
  pcVar24 = "preconditions";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (pcVar24 = *(char **)(param_2 + 0x30); pcVar17 = pcVar23, pcVar24 != (char *)0x0;
      pcVar24 = *(char **)(pcVar24 + 0x58)) {
    pcVar16 = *(char **)pcVar24;
    if (pcVar16 == (char *)0x0) {
      pcVar16 = (char *)0x180d48d24;
      pcVar12 = pcVar23;
    }
    else {
      pcVar12 = *(char **)(pcVar24 + 0x10);
    }
    if (pcVar12 == pcVar13 + -0x180a0e8a7) {
      pcVar12 = pcVar16 + (longlong)pcVar12;
      pcVar17 = pcVar24;
      if (pcVar12 <= pcVar16) break;
      lVar18 = (longlong)&UNK_180a0e8a8 - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar18]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar12 <= pcVar16) goto LAB_1801f4cae;
      }
    }
  }
LAB_1801f4cae:
  *(int32_t *)((longlong)param_1 + 0x74) = 0xffffffff;
  *(int32_t *)(param_1 + 0xf) = 0;
  if (pcVar17 != (char *)0x0) {
    *(int32_t *)((longlong)param_1 + 0x74) = 0;
    pcVar24 = "config";
    do {
      pcVar13 = pcVar24;
      pcVar24 = pcVar13 + 1;
    } while (*pcVar24 != '\0');
    for (pcVar24 = *(char **)(pcVar17 + 0x30); pcVar24 != (char *)0x0;
        pcVar24 = *(char **)(pcVar24 + 0x58)) {
      pcVar17 = *(char **)pcVar24;
      if (pcVar17 == (char *)0x0) {
        pcVar17 = (char *)0x180d48d24;
        pcVar16 = pcVar23;
      }
      else {
        pcVar16 = *(char **)(pcVar24 + 0x10);
      }
      if (pcVar16 == pcVar13 + -0x180a083b3) {
        pcVar16 = pcVar17 + (longlong)pcVar16;
        if (pcVar16 <= pcVar17) {
LAB_1801f4d50:
          do {
            puStack_1c8 = &UNK_180a3c3e0;
            uStack_1b0 = 0;
            pcStack_1c0 = (char *)0x0;
            iStack_1b8 = 0;
            lVar18 = FUN_1800a02a0(pcVar24,&system_config_3a84);
            if (lVar18 != 0) {
              lVar11 = 0x180d48d24;
              if (*(longlong *)(lVar18 + 8) != 0) {
                lVar11 = *(longlong *)(lVar18 + 8);
              }
              (**(code **)(puStack_1c8 + 0x10))(&puStack_1c8,lVar11);
            }
            plStackX_8 = (longlong *)CONCAT71(plStackX_8._1_7_,1);
            FUN_180631000(pcVar24,&UNK_180a0696c,&plStackX_8);
            plStackX_8 = alStack_70;
            if ((char)plStackX_8 == '\0') {
              uVar9 = FUN_180627ae0(alStack_70,&puStack_1c8);
              uVar5 = FUN_1801f2390(extraout_XMM0_Da_02,uVar9);
              *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | uVar5;
            }
            else {
              uVar9 = FUN_180627ae0(alStack_70,&puStack_1c8);
              uVar5 = FUN_1801f2390(extraout_XMM0_Da_01,uVar9);
              *(uint *)((longlong)param_1 + 0x74) = *(uint *)((longlong)param_1 + 0x74) | uVar5;
            }
            pcVar13 = "config";
            do {
              pcVar17 = pcVar13;
              pcVar13 = pcVar17 + 1;
            } while (*pcVar13 != '\0');
            for (pcVar13 = *(char **)(pcVar24 + 0x58); pcVar24 = pcVar23, pcVar13 != (char *)0x0;
                pcVar13 = *(char **)(pcVar13 + 0x58)) {
              pcVar16 = *(char **)pcVar13;
              if (pcVar16 == (char *)0x0) {
                pcVar16 = (char *)0x180d48d24;
                pcVar12 = pcVar23;
              }
              else {
                pcVar12 = *(char **)(pcVar13 + 0x10);
              }
              if (pcVar12 == pcVar17 + -0x180a083b3) {
                pcVar12 = pcVar12 + (longlong)pcVar16;
                pcVar24 = pcVar13;
                if (pcVar12 <= pcVar16) break;
                lVar18 = (longlong)&system_config_83b4 - (longlong)pcVar16;
                while (*pcVar16 == pcVar16[lVar18]) {
                  pcVar16 = pcVar16 + 1;
                  if (pcVar12 <= pcVar16) goto LAB_1801f4e6e;
                }
              }
            }
LAB_1801f4e6e:
            puStack_1c8 = &UNK_180a3c3e0;
            if (pcStack_1c0 != (char *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            if (pcVar24 == (char *)0x0) {
              return;
            }
          } while( true );
        }
        lVar18 = (longlong)&system_config_83b4 - (longlong)pcVar17;
        while (*pcVar17 == pcVar17[lVar18]) {
          pcVar17 = pcVar17 + 1;
          if (pcVar16 <= pcVar17) goto LAB_1801f4d50;
        }
      }
    }
  }
  return;
LAB_1801f3fae:
  puVar10 = (uint64_t *)puVar10[6];
  goto LAB_1801f3e41;
}



longlong * FUN_1801f4eb0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = (longlong)&UNK_18098bcb0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (longlong)&UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  plVar4 = param_1 + 4;
  *plVar4 = (longlong)&UNK_18098bcb0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *plVar4 = (longlong)&UNK_180a3c3e0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  plVar1 = param_1 + 8;
  *plVar1 = (longlong)&UNK_18098bcb0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  FUN_1808fc838(param_1 + 0x11,0x20,0x10,FUN_1801f9cf0,FUN_180059620);
  lVar3 = 4;
  FUN_1808fc838(param_1 + 0x51,0x58,4,FUN_180049cd0,FUN_180044a30);
  plVar2 = param_1 + 0x7d;
  FUN_1808fc838(plVar2,0x58,4,FUN_180049cd0,FUN_180044a30);
  *(int8_t *)(param_1 + 0xc) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&system_buffer_ptr);
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  (**(code **)(*plVar4 + 0x10))(plVar4,&system_buffer_ptr);
  *(int16_t *)(param_1 + 0xd) = 1;
  *(int32_t *)((longlong)param_1 + 100) = 0;
  *(int32_t *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(int32_t *)(param_1 + 0xe) = 0x40000000;
  *(int32_t *)((longlong)param_1 + 0x7c) = 1;
  *(int8_t *)((longlong)param_1 + 0x6a) = 0;
  plVar4 = plVar2;
  do {
    (**(code **)(plVar2[-0x2c] + 0x10))(plVar4 + -0x2c,&system_buffer_ptr);
    (**(code **)(*plVar2 + 0x10))(plVar4,&system_buffer_ptr);
    plVar4 = plVar4 + 0xb;
    plVar2 = plVar2 + 0xb;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






