#include "TaleWorlds.Native.Split.h"

// 99_part_06_part026.c - 2 个函数

// 函数: void FUN_1803bd8e0(longlong param_1,longlong param_2)
void FUN_1803bd8e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  longlong lStack_68;
  int iStack_60;
  ulonglong uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  ulonglong uStack_38;
  
  pcVar10 = "levels";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  puVar9 = *(undefined8 **)(param_2 + 0x30);
  if (puVar9 != (undefined8 *)0x0) {
    pcVar10 = (char *)0x0;
    do {
      pcVar4 = (char *)*puVar9;
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x180d48d24;
        pcVar5 = pcVar10;
      }
      else {
        pcVar5 = (char *)puVar9[2];
      }
      if (pcVar5 == pcVar11 + -0x180a0bafb) {
        pcVar5 = pcVar5 + (longlong)pcVar4;
        if (pcVar5 <= pcVar4) {
LAB_1803bd978:
          puStack_50 = &UNK_180a3c3e0;
          uStack_38 = 0;
          uStack_48 = 0;
          uStack_40 = 0;
          pcVar11 = "level";
          do {
            pcVar4 = pcVar11;
            pcVar11 = pcVar4 + 1;
          } while (*pcVar11 != '\0');
          for (pcVar11 = (char *)puVar9[6]; pcVar11 != (char *)0x0;
              pcVar11 = *(char **)(pcVar11 + 0x58)) {
            pcVar5 = *(char **)pcVar11;
            if (pcVar5 == (char *)0x0) {
              pcVar5 = (char *)0x180d48d24;
              pcVar2 = pcVar10;
            }
            else {
              pcVar2 = *(char **)(pcVar11 + 0x10);
            }
            if (pcVar2 == pcVar4 + -0x180a0bb0f) {
              pcVar2 = pcVar2 + (longlong)pcVar5;
              if (pcVar2 <= pcVar5) {
LAB_1803bda24:
                lVar7 = *(longlong *)(param_1 + 0x28);
                lVar8 = lVar7 + 400;
                FUN_1802f4b20(lVar8,*(undefined8 *)(lVar7 + 0x1a0),pcVar2,puVar9,0xfffffffffffffffe)
                ;
                *(longlong *)lVar8 = lVar8;
                *(longlong *)(lVar7 + 0x198) = lVar8;
                *(undefined8 *)(lVar7 + 0x1a0) = 0;
                *(undefined1 *)(lVar7 + 0x1a8) = 0;
                *(undefined8 *)(lVar7 + 0x1b0) = 0;
                do {
                  puStack_70 = &UNK_180a3c3e0;
                  uStack_58 = 0;
                  lStack_68 = 0;
                  iStack_60 = 0;
                  pcVar4 = "name";
                  do {
                    pcVar5 = pcVar4;
                    pcVar4 = pcVar5 + 1;
                  } while (*pcVar4 != '\0');
                  for (puVar9 = *(undefined8 **)(pcVar11 + 0x40); puVar9 != (undefined8 *)0x0;
                      puVar9 = (undefined8 *)puVar9[6]) {
                    pcVar4 = (char *)*puVar9;
                    if (pcVar4 == (char *)0x0) {
                      pcVar4 = (char *)0x180d48d24;
                      pcVar2 = pcVar10;
                    }
                    else {
                      pcVar2 = (char *)puVar9[2];
                    }
                    if (pcVar2 == pcVar5 + -0x180a03a83) {
                      pcVar2 = pcVar2 + (longlong)pcVar4;
                      if (pcVar2 <= pcVar4) {
LAB_1803bdad6:
                        lVar7 = 0x180d48d24;
                        if (puVar9[1] != 0) {
                          lVar7 = puVar9[1];
                        }
                        FUN_180627c50(&puStack_70,lVar7);
                        break;
                      }
                      lVar7 = (longlong)&DAT_180a03a84 - (longlong)pcVar4;
                      while (*pcVar4 == pcVar4[lVar7]) {
                        pcVar4 = pcVar4 + 1;
                        if (pcVar2 <= pcVar4) goto LAB_1803bdad6;
                      }
                    }
                  }
                  if (iStack_60 != 0) {
                    FUN_1803c2430(*(longlong *)(param_1 + 0x28) + 400,auStack_80,&puStack_70);
                  }
                  pcVar4 = "level";
                  do {
                    pcVar5 = pcVar4;
                    pcVar4 = pcVar5 + 1;
                  } while (*pcVar4 != '\0');
                  for (pcVar4 = *(char **)(pcVar11 + 0x58); pcVar11 = pcVar10, pcVar4 != (char *)0x0
                      ; pcVar4 = *(char **)(pcVar4 + 0x58)) {
                    pcVar2 = *(char **)pcVar4;
                    if (pcVar2 == (char *)0x0) {
                      pcVar2 = (char *)0x180d48d24;
                      pcVar6 = pcVar10;
                    }
                    else {
                      pcVar6 = *(char **)(pcVar4 + 0x10);
                    }
                    if (pcVar6 == pcVar5 + -0x180a0bb0f) {
                      pcVar6 = pcVar6 + (longlong)pcVar2;
                      pcVar11 = pcVar4;
                      if (pcVar6 <= pcVar2) break;
                      lVar7 = (longlong)&UNK_180a0bb10 - (longlong)pcVar2;
                      while (*pcVar2 == pcVar2[lVar7]) {
                        pcVar2 = pcVar2 + 1;
                        if (pcVar6 <= pcVar2) goto LAB_1803bdb74;
                      }
                    }
                  }
LAB_1803bdb74:
                  puStack_70 = &UNK_180a3c3e0;
                  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  lStack_68 = 0;
                  uStack_58 = uStack_58 & 0xffffffff00000000;
                  puStack_70 = &UNK_18098bcb0;
                } while (pcVar11 != (char *)0x0);
                break;
              }
              lVar7 = (longlong)&UNK_180a0bb10 - (longlong)pcVar5;
              while (*pcVar5 == pcVar5[lVar7]) {
                pcVar5 = pcVar5 + 1;
                if (pcVar2 <= pcVar5) goto LAB_1803bda24;
              }
            }
          }
          uStack_48 = 0;
          uStack_38 = uStack_38 & 0xffffffff00000000;
          puStack_50 = &UNK_18098bcb0;
          break;
        }
        lVar7 = (longlong)&UNK_180a0bafc - (longlong)pcVar4;
        while (*pcVar4 == pcVar4[lVar7]) {
          pcVar4 = pcVar4 + 1;
          if (pcVar5 <= pcVar4) goto LAB_1803bd978;
        }
      }
      puVar9 = (undefined8 *)puVar9[0xb];
    } while (puVar9 != (undefined8 *)0x0);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1802eda60(*(undefined8 *)(param_1 + 0x28));
  }
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x2c8),
      uVar3 = *(uint *)(param_1 + 4) & 0xfffffffe, (uVar3 & uVar1) != uVar3)) && ((uVar1 & 1) == 0))
  {
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803bdc20(byte *param_1,longlong param_2,undefined8 param_3)
void FUN_1803bdc20(byte *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined *puVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined *puVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_1c8 [32];
  byte *pbStack_1a8;
  undefined1 auStack_198 [4];
  uint uStack_194;
  uint uStack_190;
  float fStack_18c;
  undefined4 auStack_188 [2];
  undefined *puStack_180;
  undefined *puStack_178;
  int iStack_170;
  ulonglong uStack_168;
  longlong lStack_160;
  undefined *puStack_158;
  undefined4 *puStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  int iStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined1 *puStack_100;
  int iStack_f8;
  undefined1 auStack_f0 [136];
  undefined *puStack_68;
  undefined *puStack_60;
  undefined4 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_118 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  pcVar11 = (char *)0x0;
  lStack_160 = param_2;
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x268) == 0) {
    puStack_68 = &UNK_180a3c3e0;
    uStack_50 = 0;
    puStack_60 = (undefined *)0x0;
    uStack_58 = 0;
    pcVar15 = "prefab";
    do {
      pcVar16 = pcVar15;
      pcVar15 = pcVar16 + 1;
    } while (*pcVar15 != '\0');
    for (puVar14 = *(undefined8 **)(param_2 + 0x40); puVar14 != (undefined8 *)0x0;
        puVar14 = (undefined8 *)puVar14[6]) {
      pcVar15 = (char *)*puVar14;
      if (pcVar15 == (char *)0x0) {
        pcVar15 = (char *)0x180d48d24;
        pcVar7 = pcVar11;
      }
      else {
        pcVar7 = (char *)puVar14[2];
      }
      if (pcVar7 == pcVar16 + -0x180a239d3) {
        pcVar7 = pcVar7 + (longlong)pcVar15;
        if (pcVar7 <= pcVar15) {
LAB_1803bdd14:
          lVar8 = 0x180d48d24;
          if (puVar14[1] != 0) {
            lVar8 = puVar14[1];
          }
          FUN_180627c50(&puStack_68,lVar8);
          lVar8 = FUN_18020bef0(param_3,&puStack_68);
          if (lVar8 == 0) {
            puVar9 = &DAT_18098bc73;
            if (*(undefined **)(*(longlong *)(param_1 + 0x30) + 0x4e0) != (undefined *)0x0) {
              puVar9 = *(undefined **)(*(longlong *)(param_1 + 0x30) + 0x4e0);
            }
            puVar5 = &DAT_18098bc73;
            if (puStack_60 != (undefined *)0x0) {
              puVar5 = puStack_60;
            }
            FUN_180627020(&UNK_180a239a0,puVar5,puVar9);
            param_1[0x39] = 1;
            puStack_68 = &UNK_180a3c3e0;
            if (puStack_60 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puStack_60 = (undefined *)0x0;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            puStack_68 = &UNK_18098bcb0;
            goto LAB_1803be64e;
          }
          pbStack_1a8 = param_1;
          FUN_1802ec6e0(*(undefined8 *)(param_1 + 0x28),lVar8,1,0);
          FUN_1802ef920(*(undefined8 *)(param_1 + 0x28),lVar8);
          break;
        }
        lVar8 = (longlong)&UNK_180a239d4 - (longlong)pcVar15;
        while (*pcVar15 == pcVar15[lVar8]) {
          pcVar15 = pcVar15 + 1;
          if (pcVar7 <= pcVar15) goto LAB_1803bdd14;
        }
      }
    }
    puStack_68 = &UNK_180a3c3e0;
    if (puStack_60 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_60 = (undefined *)0x0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    puStack_68 = &UNK_18098bcb0;
  }
  puStack_138 = &UNK_180a3c3e0;
  uStack_120 = 0;
  puStack_130 = (undefined *)0x0;
  iStack_128 = 0;
  pcVar15 = "name";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  for (puVar14 = *(undefined8 **)(param_2 + 0x40); puVar14 != (undefined8 *)0x0;
      puVar14 = (undefined8 *)puVar14[6]) {
    pcVar15 = (char *)*puVar14;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar7 = pcVar11;
    }
    else {
      pcVar7 = (char *)puVar14[2];
    }
    if (pcVar7 == pcVar16 + -0x180a03a83) {
      pcVar7 = pcVar15 + (longlong)pcVar7;
      if (pcVar7 <= pcVar15) {
LAB_1803bde72:
        lVar8 = 0x180d48d24;
        if (puVar14[1] != 0) {
          lVar8 = puVar14[1];
        }
        FUN_180627c50(&puStack_138,lVar8);
        break;
      }
      lVar8 = (longlong)&DAT_180a03a84 - (longlong)pcVar15;
      while (*pcVar15 == pcVar15[lVar8]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar7 <= pcVar15) goto LAB_1803bde72;
      }
    }
  }
  if (0 < iStack_128) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x268) != 0) {
      pcVar15 = pcVar11;
      if (iStack_128 == 7) {
        do {
          pcVar16 = pcVar15;
          bVar19 = pcVar16[(longlong)puStack_130] == pcVar16[0x180a0b198];
          if (!bVar19) goto LAB_1803bdeea;
          pcVar15 = pcVar16 + 1;
        } while (pcVar16 + 1 != &DAT_00000008);
        bVar19 = pcVar16[(longlong)puStack_130] == pcVar16[0x180a0b198];
      }
      else {
        bVar19 = false;
      }
LAB_1803bdeea:
      if (bVar19) goto LAB_1803bdf05;
    }
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x288);
    puVar9 = &DAT_18098bc73;
    if (puStack_130 != (undefined *)0x0) {
      puVar9 = puStack_130;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar9);
  }
LAB_1803bdf05:
  pcVar15 = "old_prefab_name";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  for (puVar14 = *(undefined8 **)(param_2 + 0x40); puVar14 != (undefined8 *)0x0;
      puVar14 = (undefined8 *)puVar14[6]) {
    pcVar15 = (char *)*puVar14;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar7 = pcVar11;
    }
    else {
      pcVar7 = (char *)puVar14[2];
    }
    if (pcVar7 == pcVar16 + -0x180a23a6f) {
      pcVar7 = pcVar7 + (longlong)pcVar15;
      if (pcVar7 <= pcVar15) {
LAB_1803bdf68:
        lVar8 = 0x180d48d24;
        if (puVar14[1] != 0) {
          lVar8 = puVar14[1];
        }
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x240) + 0x10))
                  (*(longlong *)(param_1 + 0x28) + 0x240,lVar8);
        break;
      }
      lVar8 = (longlong)&UNK_180a23a70 - (longlong)pcVar15;
      while (*pcVar15 == pcVar15[lVar8]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar7 <= pcVar15) goto LAB_1803bdf68;
      }
    }
  }
  puStack_180 = &UNK_180a3c3e0;
  uStack_168 = 0;
  puStack_178 = (undefined *)0x0;
  iStack_170 = 0;
  pcVar15 = "guid";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  iVar18 = 1;
  for (puVar14 = *(undefined8 **)(param_2 + 0x40); puVar14 != (undefined8 *)0x0;
      puVar14 = (undefined8 *)puVar14[6]) {
    pcVar15 = (char *)*puVar14;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar7 = pcVar11;
    }
    else {
      pcVar7 = (char *)puVar14[2];
    }
    if (pcVar7 == pcVar16 + -0x180a04c43) {
      pcVar7 = pcVar15 + (longlong)pcVar7;
      if (pcVar7 <= pcVar15) {
LAB_1803be024:
        lVar8 = 0x180d48d24;
        if (puVar14[1] != 0) {
          lVar8 = puVar14[1];
        }
        FUN_180627c50(&puStack_180,lVar8);
        puStack_68 = (undefined *)0xf0000000a;
        puStack_60 = (undefined *)0x1900000014;
        puVar9 = puStack_178;
        if (iStack_170 != 0x26) goto LAB_1803be12a;
        iVar12 = 1;
        lVar8 = 1;
        goto LAB_1803be065;
      }
      lVar8 = (longlong)&UNK_180a04c44 - (longlong)pcVar15;
      while (*pcVar15 == pcVar15[lVar8]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar7 <= pcVar15) goto LAB_1803be024;
      }
    }
  }
  goto LAB_1803be163;
  while( true ) {
    puVar5 = &DAT_18098bc73;
    if (puVar9 != (undefined *)0x0) {
      puVar5 = puVar9;
    }
    if (iVar12 == *(int *)((longlong)&puStack_68 + (longlong)pcVar11 * 4) + -1) {
      if (puVar5[lVar8] != '-') goto LAB_1803be12a;
      pcVar11 = pcVar11 + 1;
    }
    else {
      iVar2 = isxdigit();
      puVar9 = puStack_178;
      if (iVar2 == 0) goto LAB_1803be12a;
    }
    iVar12 = iVar12 + 1;
    lVar8 = lVar8 + 1;
    if (3 < (longlong)pcVar11) break;
LAB_1803be065:
    if (0x24 < lVar8) break;
  }
  lVar8 = *(longlong *)(param_1 + 0x28);
  puStack_108 = &UNK_1809fcc28;
  puStack_100 = auStack_f0;
  auStack_f0[0] = 0;
  iStack_f8 = iStack_170;
  puVar9 = &DAT_18098bc73;
  if (puStack_178 != (undefined *)0x0) {
    puVar9 = puStack_178;
  }
  strcpy_s(auStack_f0,0x80,puVar9);
  FUN_1802268c0(lVar8 + 0x170,&puStack_108);
  puStack_108 = &UNK_18098bcb0;
  param_2 = lStack_160;
LAB_1803be163:
  auStack_198[0] = 1;
  lVar8 = FUN_180631000(param_2,&UNK_180a23a40,auStack_198);
  if (lVar8 != 0) {
    FUN_1802ee720(*(undefined8 *)(param_1 + 0x28),auStack_198[0]);
  }
  pcVar15 = (char *)0x0;
  uStack_190 = 0;
  pcVar11 = "mobility";
  do {
    pcVar16 = pcVar11;
    pcVar11 = pcVar16 + 1;
  } while (*pcVar11 != '\0');
  puVar14 = *(undefined8 **)(param_2 + 0x40);
  uVar13 = 0xffffffffffffffff;
  do {
    if (puVar14 == (undefined8 *)0x0) goto LAB_1803be2b7;
    pcVar11 = (char *)*puVar14;
    if (pcVar11 == (char *)0x0) {
      pcVar11 = (char *)0x180d48d24;
      pcVar7 = pcVar15;
    }
    else {
      pcVar7 = (char *)puVar14[2];
    }
    if (pcVar7 == pcVar16 + -0x180a23a2f) {
      pcVar7 = pcVar11 + (longlong)pcVar7;
      if (pcVar7 <= pcVar11) {
LAB_1803be204:
        pcVar11 = (char *)0x180d48d24;
        if ((char *)puVar14[1] != (char *)0x0) {
          pcVar11 = (char *)puVar14[1];
        }
        uVar6 = 0xffffffffffffffff;
        do {
          uVar6 = uVar6 + 1;
        } while (pcVar11[uVar6] != '\0');
        if (((uVar6 < 3) || (*pcVar11 != '0')) ||
           (puVar9 = &UNK_180a3cb84, (pcVar11[1] + 0xa8U & 0xdf) != 0)) {
          puVar9 = &UNK_180a063a0;
        }
        FUN_18010cbc0(pcVar11,puVar9,&uStack_190);
        uVar3 = uStack_190;
        lVar8 = *(longlong *)(param_1 + 0x28);
        *(char *)(lVar8 + 0x2e4) = (char)uStack_190;
        pcVar11 = pcVar15;
        pcVar16 = pcVar15;
        if (*(longlong *)(lVar8 + 0x1c8) - *(longlong *)(lVar8 + 0x1c0) >> 3 != 0) {
          do {
            iVar12 = (int)pcVar16;
            FUN_1802e8580(*(undefined8 *)(pcVar11 + *(longlong *)(lVar8 + 0x1c0)),uVar3 & 0xff,1);
            pcVar11 = pcVar11 + 8;
            pcVar16 = (char *)(ulonglong)(iVar12 + 1U);
          } while ((ulonglong)(longlong)(int)(iVar12 + 1U) <
                   (ulonglong)(*(longlong *)(lVar8 + 0x1c8) - *(longlong *)(lVar8 + 0x1c0) >> 3));
        }
LAB_1803be2b7:
        fStack_18c = 0.0;
        pcVar11 = "lod_bias_factor";
        do {
          pcVar16 = pcVar11;
          pcVar11 = pcVar16 + 1;
        } while (*pcVar11 != '\0');
        for (puVar14 = *(undefined8 **)(param_2 + 0x40); puVar14 != (undefined8 *)0x0;
            puVar14 = (undefined8 *)puVar14[6]) {
          pcVar11 = (char *)*puVar14;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
            pcVar7 = pcVar15;
          }
          else {
            pcVar7 = (char *)puVar14[2];
          }
          if (pcVar7 == pcVar16 + -0x180a23abf) {
            pcVar7 = pcVar7 + (longlong)pcVar11;
            if (pcVar7 <= pcVar11) {
LAB_1803be334:
              lVar8 = 0x180d48d24;
              if (puVar14[1] != 0) {
                lVar8 = puVar14[1];
              }
              FUN_18010cbc0(lVar8,&DAT_180a06430,&fStack_18c);
              fVar20 = -8.0;
              if ((-8.0 <= fStack_18c) && (fVar20 = fStack_18c, 8.0 <= fStack_18c)) {
                fVar20 = 8.0;
              }
              FUN_1802f0940(*(undefined8 *)(param_1 + 0x28),fVar20);
              break;
            }
            lVar8 = (longlong)&UNK_180a23ac0 - (longlong)pcVar11;
            while (*pcVar11 == pcVar11[lVar8]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar7 <= pcVar11) goto LAB_1803be334;
            }
          }
        }
        uStack_194 = 0;
        pcVar11 = "scene_upgrade_level_mask";
        do {
          pcVar16 = pcVar11;
          pcVar11 = pcVar16 + 1;
        } while (*pcVar11 != '\0');
        for (puVar14 = *(undefined8 **)(param_2 + 0x40); puVar14 != (undefined8 *)0x0;
            puVar14 = (undefined8 *)puVar14[6]) {
          pcVar11 = (char *)*puVar14;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
            pcVar7 = pcVar15;
          }
          else {
            pcVar7 = (char *)puVar14[2];
          }
          if (pcVar7 == pcVar16 + -0x180a23a97) {
            pcVar7 = pcVar7 + (longlong)pcVar11;
            if (pcVar7 <= pcVar11) {
LAB_1803be3f4:
              pcVar11 = (char *)0x180d48d24;
              if ((char *)puVar14[1] != (char *)0x0) {
                pcVar11 = (char *)puVar14[1];
              }
              do {
                uVar13 = uVar13 + 1;
              } while (pcVar11[uVar13] != '\0');
              if (((uVar13 < 3) || (*pcVar11 != '0')) ||
                 (puVar9 = &UNK_180a3cb84, (pcVar11[1] + 0xa8U & 0xdf) != 0)) {
                puVar9 = &UNK_180a063a0;
              }
              FUN_18010cbc0(pcVar11,puVar9,&uStack_194);
              if (uStack_194 != 0) {
                uVar10 = 2;
                uVar3 = uStack_194;
                do {
                  if ((uVar3 & uVar10) != 0) {
                    puStack_158 = &UNK_180a3c3e0;
                    uStack_140 = 0;
                    puStack_150 = (undefined4 *)0x0;
                    uStack_148 = 0;
                    puStack_150 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
                    *(undefined1 *)puStack_150 = 0;
                    uVar4 = FUN_18064e990(puStack_150);
                    *puStack_150 = 0x6576656c;
                    *(undefined2 *)(puStack_150 + 1) = 0x5f6c;
                    *(undefined1 *)((longlong)puStack_150 + 6) = 0;
                    uStack_148 = 6;
                    uStack_140._0_4_ = uVar4;
                    FUN_180628040(&puStack_158,&UNK_1809fd0a0,iVar18);
                    FUN_1803c2430(*(longlong *)(param_1 + 0x28) + 400,&puStack_68,&puStack_158);
                    puStack_158 = &UNK_180a3c3e0;
                    if (puStack_150 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900();
                    }
                    puStack_150 = (undefined4 *)0x0;
                    uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
                    puStack_158 = &UNK_18098bcb0;
                    uVar3 = uStack_194;
                  }
                  iVar18 = iVar18 + 1;
                  uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
                  param_2 = lStack_160;
                } while (iVar18 < 4);
              }
              break;
            }
            lVar8 = (longlong)&UNK_180a23a98 - (longlong)pcVar11;
            while (*pcVar11 == pcVar11[lVar8]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar7 <= pcVar11) goto LAB_1803be3f4;
            }
          }
        }
        auStack_188[0] = 0xffffffff;
        pcVar11 = "season_mask";
        do {
          pcVar16 = pcVar11;
          pcVar11 = pcVar16 + 1;
        } while (*pcVar11 != '\0');
        puVar14 = *(undefined8 **)(param_2 + 0x40);
        do {
          if (puVar14 == (undefined8 *)0x0) {
LAB_1803be5e2:
            if ((param_1[0x10] != 0) &&
               ((*param_1 & *(byte *)(*(longlong *)(param_1 + 0x28) + 0x2e7)) == 0)) {
              param_1[0x39] = 1;
            }
            puStack_180 = &UNK_180a3c3e0;
            if (puStack_178 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puStack_178 = (undefined *)0x0;
            uStack_168 = uStack_168 & 0xffffffff00000000;
            puStack_180 = &UNK_18098bcb0;
            puStack_138 = &UNK_180a3c3e0;
            if (puStack_130 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puStack_130 = (undefined *)0x0;
            uStack_120 = uStack_120 & 0xffffffff00000000;
            puStack_138 = &UNK_18098bcb0;
LAB_1803be64e:
                    // WARNING: Subroutine does not return
            FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1c8);
          }
          pcVar11 = (char *)*puVar14;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
            pcVar7 = pcVar15;
          }
          else {
            pcVar7 = (char *)puVar14[2];
          }
          if (pcVar7 == pcVar16 + -0x180a23a7f) {
            pcVar7 = pcVar7 + (longlong)pcVar11;
            if (pcVar7 <= pcVar11) {
LAB_1803be5b4:
              lVar8 = 0x180d48d24;
              if (puVar14[1] != 0) {
                lVar8 = puVar14[1];
              }
              FUN_18010cbc0(lVar8,&UNK_180a063a0,auStack_188);
              *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x2e7) = (undefined1)auStack_188[0];
              goto LAB_1803be5e2;
            }
            lVar8 = (longlong)&UNK_180a23a80 - (longlong)pcVar11;
            while (*pcVar11 == pcVar11[lVar8]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar7 <= pcVar11) goto LAB_1803be5b4;
            }
          }
          puVar14 = (undefined8 *)puVar14[6];
        } while( true );
      }
      lVar8 = (longlong)&UNK_180a23a30 - (longlong)pcVar11;
      while (*pcVar11 == pcVar11[lVar8]) {
        pcVar11 = pcVar11 + 1;
        if (pcVar7 <= pcVar11) goto LAB_1803be204;
      }
    }
    puVar14 = (undefined8 *)puVar14[6];
  } while( true );
LAB_1803be12a:
  param_2 = lStack_160;
  if (DAT_180c82860 == '\0') {
    puVar5 = &DAT_18098bc73;
    if (*(undefined **)(*(longlong *)(param_1 + 0x28) + 0x290) != (undefined *)0x0) {
      puVar5 = *(undefined **)(*(longlong *)(param_1 + 0x28) + 0x290);
    }
    puVar17 = &DAT_18098bc73;
    if (puVar9 != (undefined *)0x0) {
      puVar17 = puVar9;
    }
    FUN_180627020(&UNK_180a23a48,puVar17,puVar5);
    param_2 = lStack_160;
  }
  goto LAB_1803be163;
}






