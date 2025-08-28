#include "TaleWorlds.Native.Split.h"

// 03_rendering_part232.c - 1 个函数

// 函数: void FUN_18039a420(longlong param_1,longlong param_2)
void FUN_18039a420(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  void *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint64_t *puVar13;
  uint64_t *puVar14;
  char *pcVar15;
  char *pcVar16;
  int aiStack_68 [2];
  uint64_t uStack_60;
  void *puStack_58;
  longlong lStack_50;
  int iStack_48;
  uint64_t uStack_40;
  
  uStack_60 = 0xfffffffffffffffe;
  pcVar16 = "nodes";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  for (puVar14 = *(uint64_t **)(param_2 + 0x30); puVar14 != (uint64_t *)0x0;
      puVar14 = (uint64_t *)puVar14[0xb]) {
    pcVar16 = (char *)*puVar14;
    if (pcVar16 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar16 = (char *)0x180d48d24;
    }
    else {
      pcVar5 = (char *)puVar14[2];
    }
    if (pcVar5 == pcVar15 + -0x180a2239b) {
      pcVar5 = pcVar5 + (longlong)pcVar16;
      if (pcVar5 <= pcVar16) goto LAB_18039a4b5;
      lVar9 = (longlong)&UNK_180a2239c - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar9]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar5 <= pcVar16) goto LAB_18039a4b5;
      }
    }
  }
  puVar14 = (uint64_t *)0x0;
LAB_18039a4b5:
  puStack_58 = &UNK_180a3c3e0;
  uStack_40 = 0;
  lStack_50 = 0;
  iStack_48 = 0;
  pcVar16 = "node";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  puVar14 = (uint64_t *)puVar14[6];
  do {
    if (puVar14 == (uint64_t *)0x0) {
LAB_18039b34d:
      puStack_58 = &UNK_180a3c3e0;
      if (lStack_50 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pcVar16 = (char *)*puVar14;
    if (pcVar16 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar16 = (char *)0x180d48d24;
    }
    else {
      pcVar5 = (char *)puVar14[2];
    }
    if (pcVar5 == pcVar15 + -0x180a0e8b7) {
      pcVar5 = pcVar5 + (longlong)pcVar16;
      if (pcVar5 <= pcVar16) break;
      lVar9 = (longlong)&UNK_180a0e8b8 - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar9]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar5 <= pcVar16) goto LAB_18039a550;
      }
    }
    puVar14 = (uint64_t *)puVar14[0xb];
  } while( true );
LAB_18039a550:
  pcVar16 = "idx";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  puVar13 = (uint64_t *)puVar14[8];
LAB_18039a591:
  if (puVar13 == (uint64_t *)0x0) goto LAB_18039a635;
  pcVar16 = (char *)*puVar13;
  if (pcVar16 == (char *)0x0) {
    pcVar5 = (char *)0x0;
    pcVar16 = (char *)0x180d48d24;
  }
  else {
    pcVar5 = (char *)puVar13[2];
  }
  if (pcVar5 != pcVar15 + -0x180a22397) {
LAB_18039a66f:
    puVar13 = (uint64_t *)puVar13[6];
    goto LAB_18039a591;
  }
  pcVar5 = pcVar16 + (longlong)pcVar5;
  if (pcVar16 < pcVar5) {
    lVar9 = (longlong)&UNK_180a22398 - (longlong)pcVar16;
    while (*pcVar16 == pcVar16[lVar9]) {
      pcVar16 = pcVar16 + 1;
      if (pcVar5 <= pcVar16) goto LAB_18039a5e7;
    }
    goto LAB_18039a66f;
  }
LAB_18039a5e7:
  pcVar16 = (char *)0x180d48d24;
  if ((char *)puVar13[1] != (char *)0x0) {
    pcVar16 = (char *)puVar13[1];
  }
  uVar6 = 0xffffffffffffffff;
  do {
    uVar6 = uVar6 + 1;
  } while (pcVar16[uVar6] != '\0');
  if (((uVar6 < 3) || (*pcVar16 != '0')) ||
     (puVar10 = &UNK_180a3cb84, (pcVar16[1] + 0xa8U & 0xdf) != 0)) {
    puVar10 = &UNK_180a063a0;
  }
  FUN_18010cbc0(pcVar16,puVar10);
LAB_18039a635:
  pcVar16 = "idy";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  for (puVar13 = (uint64_t *)puVar14[8]; puVar13 != (uint64_t *)0x0;
      puVar13 = (uint64_t *)puVar13[6]) {
    pcVar16 = (char *)*puVar13;
    if (pcVar16 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar16 = (char *)0x180d48d24;
    }
    else {
      pcVar5 = (char *)puVar13[2];
    }
    if (pcVar5 == pcVar15 + -0x180a22393) {
      pcVar5 = pcVar5 + (longlong)pcVar16;
      if (pcVar5 <= pcVar16) {
LAB_18039a6a1:
        pcVar16 = (char *)0x180d48d24;
        if ((char *)puVar13[1] != (char *)0x0) {
          pcVar16 = (char *)puVar13[1];
        }
        uVar6 = 0xffffffffffffffff;
        do {
          uVar6 = uVar6 + 1;
        } while (pcVar16[uVar6] != '\0');
        if (((uVar6 < 3) || (*pcVar16 != '0')) ||
           (puVar10 = &UNK_180a3cb84, (pcVar16[1] + 0xa8U & 0xdf) != 0)) {
          puVar10 = &UNK_180a063a0;
        }
        FUN_18010cbc0(pcVar16,puVar10);
        break;
      }
      lVar9 = (longlong)&UNK_180a22394 - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar9]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar5 <= pcVar16) goto LAB_18039a6a1;
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x250);
  if (lVar9 == 0) {
    uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x6c00,4,3);
                    // WARNING: Subroutine does not return
    memset(uVar7,0,0x6c00);
  }
  FUN_180631000(puVar14,&UNK_180a22380,lVar9 + 0x68);
  if (*(int *)(param_1 + 0x224) == 0) {
    puVar1 = (uint *)(lVar9 + 0x4c);
    pcVar16 = "layer_is_used_mask";
    do {
      pcVar15 = pcVar16;
      pcVar16 = pcVar15 + 1;
    } while (*pcVar16 != '\0');
    for (puVar13 = (uint64_t *)puVar14[8]; puVar13 != (uint64_t *)0x0;
        puVar13 = (uint64_t *)puVar13[6]) {
      pcVar16 = (char *)*puVar13;
      if (pcVar16 == (char *)0x0) {
        pcVar5 = (char *)0x0;
        pcVar16 = (char *)0x180d48d24;
      }
      else {
        pcVar5 = (char *)puVar13[2];
      }
      if (pcVar5 == pcVar15 + -0x180a223ff) {
        pcVar5 = pcVar16 + (longlong)pcVar5;
        if (pcVar5 <= pcVar16) {
LAB_18039a820:
          lVar11 = 0x180d48d24;
          if (puVar13[1] != 0) {
            lVar11 = puVar13[1];
          }
          goto LAB_18039a83f;
        }
        lVar11 = (longlong)&UNK_180a22400 - (longlong)pcVar16;
        while (*pcVar16 == pcVar16[lVar11]) {
          pcVar16 = pcVar16 + 1;
          if (pcVar5 <= pcVar16) goto LAB_18039a820;
        }
      }
    }
    lVar11 = 0;
LAB_18039a83f:
    if ((puVar1 != (uint *)0x0) && (lVar11 != 0)) {
      FUN_18010cbc0(lVar11,&UNK_180a063a0,puVar1);
    }
    *puVar1 = *puVar1 >> 1;
    uVar2 = *puVar1;
    *(uint *)(lVar9 + 0x50) = uVar2;
    *(uint *)(lVar9 + 0x54) = uVar2;
    *(uint *)(lVar9 + 0x58) = uVar2;
  }
  else {
    pcVar16 = "layer_is_used_mask_summer";
    do {
      pcVar15 = pcVar16;
      pcVar16 = pcVar15 + 1;
    } while (*pcVar16 != '\0');
    for (puVar13 = (uint64_t *)puVar14[8]; puVar13 != (uint64_t *)0x0;
        puVar13 = (uint64_t *)puVar13[6]) {
      pcVar16 = (char *)*puVar13;
      if (pcVar16 == (char *)0x0) {
        pcVar5 = (char *)0x0;
        pcVar16 = (char *)0x180d48d24;
      }
      else {
        pcVar5 = (char *)puVar13[2];
      }
      if (pcVar5 == pcVar15 + -0x180a223df) {
        pcVar5 = pcVar5 + (longlong)pcVar16;
        if (pcVar5 <= pcVar16) {
LAB_18039a8d0:
          lVar11 = 0x180d48d24;
          if (puVar13[1] != 0) {
            lVar11 = puVar13[1];
          }
          goto LAB_18039a8ef;
        }
        lVar11 = (longlong)&UNK_180a223e0 - (longlong)pcVar16;
        while (*pcVar16 == pcVar16[lVar11]) {
          pcVar16 = pcVar16 + 1;
          if (pcVar5 <= pcVar16) goto LAB_18039a8d0;
        }
      }
    }
    lVar11 = 0;
LAB_18039a8ef:
    if ((lVar9 + 0x4c != 0) && (lVar11 != 0)) {
      FUN_18010cbc0(lVar11,&UNK_180a063a0,lVar9 + 0x4c);
    }
    pcVar16 = "layer_is_used_mask_fall";
    do {
      pcVar15 = pcVar16;
      pcVar16 = pcVar15 + 1;
    } while (*pcVar16 != '\0');
    for (puVar13 = (uint64_t *)puVar14[8]; puVar13 != (uint64_t *)0x0;
        puVar13 = (uint64_t *)puVar13[6]) {
      pcVar16 = (char *)*puVar13;
      if (pcVar16 == (char *)0x0) {
        pcVar5 = (char *)0x0;
        pcVar16 = (char *)0x180d48d24;
      }
      else {
        pcVar5 = (char *)puVar13[2];
      }
      if (pcVar5 == pcVar15 + -0x180a223c7) {
        pcVar5 = pcVar5 + (longlong)pcVar16;
        if (pcVar5 <= pcVar16) {
LAB_18039a960:
          lVar11 = 0x180d48d24;
          if (puVar13[1] != 0) {
            lVar11 = puVar13[1];
          }
          goto LAB_18039a97f;
        }
        lVar11 = (longlong)&UNK_180a223c8 - (longlong)pcVar16;
        while (*pcVar16 == pcVar16[lVar11]) {
          pcVar16 = pcVar16 + 1;
          if (pcVar5 <= pcVar16) goto LAB_18039a960;
        }
      }
    }
    lVar11 = 0;
LAB_18039a97f:
    if ((lVar9 + 0x50 != 0) && (lVar11 != 0)) {
      FUN_18010cbc0(lVar11,&UNK_180a063a0,lVar9 + 0x50);
    }
    pcVar16 = "layer_is_used_mask_winter";
    do {
      pcVar15 = pcVar16;
      pcVar16 = pcVar15 + 1;
    } while (*pcVar16 != '\0');
    for (puVar13 = (uint64_t *)puVar14[8]; puVar13 != (uint64_t *)0x0;
        puVar13 = (uint64_t *)puVar13[6]) {
      pcVar16 = (char *)*puVar13;
      if (pcVar16 == (char *)0x0) {
        pcVar5 = (char *)0x0;
        pcVar16 = (char *)0x180d48d24;
      }
      else {
        pcVar5 = (char *)puVar13[2];
      }
      if (pcVar5 == pcVar15 + -0x180a223a7) {
        pcVar5 = pcVar5 + (longlong)pcVar16;
        if (pcVar5 <= pcVar16) {
LAB_18039a9f0:
          lVar11 = 0x180d48d24;
          if (puVar13[1] != 0) {
            lVar11 = puVar13[1];
          }
          goto LAB_18039aa0f;
        }
        lVar11 = (longlong)&UNK_180a223a8 - (longlong)pcVar16;
        while (*pcVar16 == pcVar16[lVar11]) {
          pcVar16 = pcVar16 + 1;
          if (pcVar5 <= pcVar16) goto LAB_18039a9f0;
        }
      }
    }
    lVar11 = 0;
LAB_18039aa0f:
    if ((lVar9 + 0x54 != 0) && (lVar11 != 0)) {
      FUN_18010cbc0(lVar11,&UNK_180a063a0,lVar9 + 0x54);
    }
    pcVar16 = "layer_is_used_mask_spring";
    do {
      pcVar15 = pcVar16;
      pcVar16 = pcVar15 + 1;
    } while (*pcVar16 != '\0');
    for (puVar13 = (uint64_t *)puVar14[8]; puVar13 != (uint64_t *)0x0;
        puVar13 = (uint64_t *)puVar13[6]) {
      pcVar16 = (char *)*puVar13;
      if (pcVar16 == (char *)0x0) {
        pcVar5 = (char *)0x0;
        pcVar16 = (char *)0x180d48d24;
      }
      else {
        pcVar5 = (char *)puVar13[2];
      }
      if (pcVar5 == pcVar15 + -0x180a2244f) {
        pcVar5 = pcVar5 + (longlong)pcVar16;
        if (pcVar5 <= pcVar16) {
LAB_18039aa80:
          lVar11 = 0x180d48d24;
          if (puVar13[1] != 0) {
            lVar11 = puVar13[1];
          }
          goto LAB_18039aa9f;
        }
        lVar11 = (longlong)&UNK_180a22450 - (longlong)pcVar16;
        while (*pcVar16 == pcVar16[lVar11]) {
          pcVar16 = pcVar16 + 1;
          if (pcVar5 <= pcVar16) goto LAB_18039aa80;
        }
      }
    }
    lVar11 = 0;
LAB_18039aa9f:
    if ((lVar9 + 0x58 != 0) && (lVar11 != 0)) {
      FUN_18010cbc0(lVar11,&UNK_180a063a0,lVar9 + 0x58);
    }
  }
  pcVar16 = "height_complexity";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  for (puVar13 = (uint64_t *)puVar14[8]; puVar13 != (uint64_t *)0x0;
      puVar13 = (uint64_t *)puVar13[6]) {
    pcVar16 = (char *)*puVar13;
    if (pcVar16 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar16 = (char *)0x180d48d24;
    }
    else {
      pcVar5 = (char *)puVar13[2];
    }
    if (pcVar5 == pcVar15 + -0x180a22437) {
      pcVar5 = pcVar16 + (longlong)pcVar5;
      if (pcVar5 <= pcVar16) {
LAB_18039ab10:
        lVar11 = 0x180d48d24;
        if (puVar13[1] != 0) {
          lVar11 = puVar13[1];
        }
        goto LAB_18039ab2f;
      }
      lVar11 = (longlong)&UNK_180a22438 - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar11]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar5 <= pcVar16) goto LAB_18039ab10;
      }
    }
  }
  lVar11 = 0;
LAB_18039ab2f:
  if ((lVar9 + 0x5c != 0) && (lVar11 != 0)) {
    FUN_18010cbc0(lVar11,&system_data_6430,lVar9 + 0x5c);
  }
  pcVar16 = "min_height";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  for (puVar13 = (uint64_t *)puVar14[8]; puVar13 != (uint64_t *)0x0;
      puVar13 = (uint64_t *)puVar13[6]) {
    pcVar16 = (char *)*puVar13;
    if (pcVar16 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar16 = (char *)0x180d48d24;
    }
    else {
      pcVar5 = (char *)puVar13[2];
    }
    if (pcVar5 == pcVar15 + -0x180a22097) {
      pcVar5 = pcVar5 + (longlong)pcVar16;
      if (pcVar5 <= pcVar16) {
LAB_18039abb0:
        lVar11 = 0x180d48d24;
        if (puVar13[1] != 0) {
          lVar11 = puVar13[1];
        }
        goto LAB_18039abcf;
      }
      lVar11 = (longlong)&UNK_180a22098 - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar11]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar5 <= pcVar16) goto LAB_18039abb0;
      }
    }
  }
  lVar11 = 0;
LAB_18039abcf:
  if ((lVar9 + 0x60 != 0) && (lVar11 != 0)) {
    FUN_18010cbc0(lVar11,&system_data_6430,lVar9 + 0x60);
  }
  pcVar16 = "max_height";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  for (puVar13 = (uint64_t *)puVar14[8]; puVar13 != (uint64_t *)0x0;
      puVar13 = (uint64_t *)puVar13[6]) {
    pcVar16 = (char *)*puVar13;
    if (pcVar16 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar16 = (char *)0x180d48d24;
    }
    else {
      pcVar5 = (char *)puVar13[2];
    }
    if (pcVar5 == pcVar15 + -0x180a22007) {
      pcVar5 = pcVar5 + (longlong)pcVar16;
      if (pcVar5 <= pcVar16) {
LAB_18039ac50:
        lVar11 = 0x180d48d24;
        if (puVar13[1] != 0) {
          lVar11 = puVar13[1];
        }
        goto LAB_18039ac68;
      }
      lVar11 = (longlong)&UNK_180a22008 - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar11]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar5 <= pcVar16) goto LAB_18039ac50;
      }
    }
  }
  lVar11 = 0;
LAB_18039ac68:
  if ((lVar9 + 100 != 0) && (lVar11 != 0)) {
    FUN_18010cbc0(lVar11,&system_data_6430,lVar9 + 100);
  }
  pcVar16 = "texture_levels";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  for (puVar13 = (uint64_t *)puVar14[6]; puVar13 != (uint64_t *)0x0;
      puVar13 = (uint64_t *)puVar13[0xb]) {
    pcVar16 = (char *)*puVar13;
    if (pcVar16 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      pcVar16 = (char *)0x180d48d24;
    }
    else {
      pcVar5 = (char *)puVar13[2];
    }
    if (pcVar5 == pcVar15 + -0x180a22427) {
      pcVar5 = pcVar5 + (longlong)pcVar16;
      if (pcVar5 <= pcVar16) {
LAB_18039acd5:
        pcVar16 = "variable";
        do {
          pcVar15 = pcVar16;
          pcVar16 = pcVar15 + 1;
        } while (*pcVar16 != '\0');
        for (puVar13 = (uint64_t *)puVar13[6]; puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[0xb]) {
          pcVar16 = (char *)*puVar13;
          if (pcVar16 == (char *)0x0) {
            pcVar5 = (char *)0x0;
            pcVar16 = (char *)0x180d48d24;
          }
          else {
            pcVar5 = (char *)puVar13[2];
          }
          if (pcVar5 == pcVar15 + -0x180a194ff) {
            pcVar5 = pcVar5 + (longlong)pcVar16;
            if (pcVar5 <= pcVar16) {
LAB_18039ad36:
              bVar3 = false;
LAB_18039ad40:
              pcVar16 = "name";
              do {
                pcVar15 = pcVar16;
                pcVar16 = pcVar15 + 1;
              } while (*pcVar16 != '\0');
              for (puVar8 = (uint64_t *)puVar13[8]; puVar8 != (uint64_t *)0x0;
                  puVar8 = (uint64_t *)puVar8[6]) {
                pcVar16 = (char *)*puVar8;
                if (pcVar16 == (char *)0x0) {
                  pcVar5 = (char *)0x0;
                  pcVar16 = (char *)0x180d48d24;
                }
                else {
                  pcVar5 = (char *)puVar8[2];
                }
                if (pcVar5 == pcVar15 + -0x180a03a83) {
                  pcVar5 = pcVar16 + (longlong)pcVar5;
                  if (pcVar5 <= pcVar16) {
LAB_18039ada6:
                    lVar11 = 0x180d48d24;
                    if (puVar8[1] != 0) {
                      lVar11 = puVar8[1];
                    }
                    (**(code **)(puStack_58 + 0x10))(&puStack_58,lVar11);
                    break;
                  }
                  lVar11 = (longlong)&system_data_3a84 - (longlong)pcVar16;
                  while (*pcVar16 == pcVar16[lVar11]) {
                    pcVar16 = pcVar16 + 1;
                    if (pcVar5 <= pcVar16) goto LAB_18039ada6;
                  }
                }
              }
              if (iStack_48 == 0xf) {
                iVar4 = strcmp(lStack_50,&UNK_180a22418);
                if (iVar4 == 0) {
                  lVar11 = lVar9 + 4;
                  pcVar16 = "value";
                  do {
                    pcVar15 = pcVar16;
                    pcVar16 = pcVar15 + 1;
                  } while (*pcVar16 != '\0');
                  for (puVar8 = (uint64_t *)puVar13[8]; puVar8 != (uint64_t *)0x0;
                      puVar8 = (uint64_t *)puVar8[6]) {
                    pcVar16 = (char *)*puVar8;
                    if (pcVar16 == (char *)0x0) {
                      pcVar5 = (char *)0x0;
                      pcVar16 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar5 = (char *)puVar8[2];
                    }
                    if (pcVar5 == pcVar15 + -0x180a0696b) {
                      pcVar5 = pcVar5 + (longlong)pcVar16;
                      if (pcVar5 <= pcVar16) {
LAB_18039ae50:
                        pcVar16 = (char *)0x180d48d24;
                        if ((char *)puVar8[1] != (char *)0x0) {
                          pcVar16 = (char *)puVar8[1];
                        }
                        goto LAB_18039ae6f;
                      }
                      lVar12 = (longlong)&UNK_180a0696c - (longlong)pcVar16;
                      while (*pcVar16 == pcVar16[lVar12]) {
                        pcVar16 = pcVar16 + 1;
                        if (pcVar5 <= pcVar16) goto LAB_18039ae50;
                      }
                    }
                  }
                  pcVar16 = (char *)0x0;
LAB_18039ae6f:
                  if ((lVar11 != 0) && (pcVar16 != (char *)0x0)) {
                    uVar6 = 0xffffffffffffffff;
                    do {
                      uVar6 = uVar6 + 1;
                    } while (pcVar16[uVar6] != '\0');
LAB_18039ae89:
                    if (((uVar6 < 3) || (*pcVar16 != '0')) || ((pcVar16[1] + 0xa8U & 0xdf) != 0)) {
LAB_18039aead:
                      puVar10 = &UNK_180a063a0;
                    }
                    else {
                      puVar10 = &UNK_180a3cb84;
                    }
LAB_18039aeb4:
                    FUN_18010cbc0(pcVar16,puVar10,lVar11);
                  }
                }
                else {
                  iVar4 = strcmp(lStack_50,&UNK_180a22490);
                  if (iVar4 == 0) {
                    lVar11 = lVar9 + 8;
                    pcVar16 = "value";
                    do {
                      pcVar15 = pcVar16;
                      pcVar16 = pcVar15 + 1;
                    } while (*pcVar16 != '\0');
                    for (puVar8 = (uint64_t *)puVar13[8]; puVar8 != (uint64_t *)0x0;
                        puVar8 = (uint64_t *)puVar8[6]) {
                      pcVar16 = (char *)*puVar8;
                      if (pcVar16 == (char *)0x0) {
                        pcVar5 = (char *)0x0;
                        pcVar16 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar5 = (char *)puVar8[2];
                      }
                      if (pcVar5 == pcVar15 + -0x180a0696b) {
                        pcVar5 = pcVar5 + (longlong)pcVar16;
                        if (pcVar5 <= pcVar16) {
LAB_18039af70:
                          pcVar16 = (char *)0x180d48d24;
                          if ((char *)puVar8[1] != (char *)0x0) {
                            pcVar16 = (char *)puVar8[1];
                          }
                          goto LAB_18039af8f;
                        }
                        lVar12 = (longlong)&UNK_180a0696c - (longlong)pcVar16;
                        while (*pcVar16 == pcVar16[lVar12]) {
                          pcVar16 = pcVar16 + 1;
                          if (pcVar5 <= pcVar16) goto LAB_18039af70;
                        }
                      }
                    }
                    pcVar16 = (char *)0x0;
LAB_18039af8f:
                    if ((lVar11 != 0) && (pcVar16 != (char *)0x0)) {
                      uVar6 = 0xffffffffffffffff;
                      do {
                        uVar6 = uVar6 + 1;
                      } while (pcVar16[uVar6] != '\0');
                      goto LAB_18039ae89;
                    }
                  }
                }
              }
              else if (iStack_48 == 0x13) {
                iVar4 = strcmp(lStack_50,&UNK_180a224a0);
                if (iVar4 == 0) {
                  pcVar16 = "value";
                  do {
                    pcVar15 = pcVar16;
                    pcVar16 = pcVar15 + 1;
                  } while (*pcVar16 != '\0');
                  for (puVar8 = (uint64_t *)puVar13[8]; puVar8 != (uint64_t *)0x0;
                      puVar8 = (uint64_t *)puVar8[6]) {
                    pcVar16 = (char *)*puVar8;
                    if (pcVar16 == (char *)0x0) {
                      pcVar5 = (char *)0x0;
                      pcVar16 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar5 = (char *)puVar8[2];
                    }
                    if (pcVar5 == pcVar15 + -0x180a0696b) {
                      pcVar5 = pcVar5 + (longlong)pcVar16;
                      if (pcVar5 <= pcVar16) {
LAB_18039b040:
                        pcVar16 = (char *)0x180d48d24;
                        if ((char *)puVar8[1] != (char *)0x0) {
                          pcVar16 = (char *)puVar8[1];
                        }
                        goto LAB_18039b05f;
                      }
                      lVar11 = (longlong)&UNK_180a0696c - (longlong)pcVar16;
                      while (*pcVar16 == pcVar16[lVar11]) {
                        pcVar16 = pcVar16 + 1;
                        if (pcVar5 <= pcVar16) goto LAB_18039b040;
                      }
                    }
                  }
                  pcVar16 = (char *)0x0;
LAB_18039b05f:
                  if ((lVar9 != 0) && (pcVar16 != (char *)0x0)) {
                    uVar6 = 0xffffffffffffffff;
                    do {
                      uVar6 = uVar6 + 1;
                    } while (pcVar16[uVar6] != '\0');
                    lVar11 = lVar9;
                    if (((uVar6 < 3) || (*pcVar16 != '0')) || ((pcVar16[1] + 0xa8U & 0xdf) != 0))
                    goto LAB_18039aead;
                    puVar10 = &UNK_180a3cb84;
                    goto LAB_18039aeb4;
                  }
                }
              }
              else if ((iStack_48 == 0x10) && (iVar4 = strcmp(lStack_50,&UNK_180a22478), iVar4 == 0)
                      ) {
                bVar3 = true;
                puVar8 = (uint64_t *)FUN_18005d4b0(puVar13,&UNK_180a19500,0);
                lVar11 = 0x10;
                do {
                  aiStack_68[0] = -1;
                  lVar12 = FUN_1800a02a0(puVar8,&UNK_180a2246c);
                  if (lVar12 != 0) {
                    pcVar16 = (char *)0x180d48d24;
                    if (*(char **)(lVar12 + 8) != (char *)0x0) {
                      pcVar16 = *(char **)(lVar12 + 8);
                    }
                    uVar6 = 0xffffffffffffffff;
                    do {
                      uVar6 = uVar6 + 1;
                    } while (pcVar16[uVar6] != '\0');
                    if (((uVar6 < 3) || (*pcVar16 != '0')) ||
                       (puVar10 = &UNK_180a3cb84, (pcVar16[1] + 0xa8U & 0xdf) != 0)) {
                      puVar10 = &UNK_180a063a0;
                    }
                    FUN_18010cbc0(pcVar16,puVar10,aiStack_68);
                  }
                  FUN_180631330(puVar8,&UNK_180a0696c,lVar9 + ((longlong)aiStack_68[0] + 3) * 4);
                  pcVar16 = "variable";
                  do {
                    pcVar15 = pcVar16;
                    pcVar16 = pcVar15 + 1;
                  } while (*pcVar16 != '\0');
                  for (puVar8 = (uint64_t *)puVar8[0xb]; puVar8 != (uint64_t *)0x0;
                      puVar8 = (uint64_t *)puVar8[0xb]) {
                    pcVar16 = (char *)*puVar8;
                    if (pcVar16 == (char *)0x0) {
                      pcVar5 = (char *)0x0;
                      pcVar16 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar5 = (char *)puVar8[2];
                    }
                    if (pcVar5 == pcVar15 + -0x180a194ff) {
                      pcVar5 = pcVar5 + (longlong)pcVar16;
                      if (pcVar5 <= pcVar16) goto LAB_18039b1e4;
                      lVar12 = (longlong)&UNK_180a19500 - (longlong)pcVar16;
                      while (*pcVar16 == pcVar16[lVar12]) {
                        pcVar16 = pcVar16 + 1;
                        if (pcVar5 <= pcVar16) goto LAB_18039b1e4;
                      }
                    }
                  }
                  puVar8 = (uint64_t *)0x0;
LAB_18039b1e4:
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
              pcVar16 = "variable";
              do {
                pcVar15 = pcVar16;
                pcVar16 = pcVar15 + 1;
              } while (*pcVar16 != '\0');
              puVar13 = (uint64_t *)puVar13[0xb];
              if (puVar13 != (uint64_t *)0x0) {
                do {
                  pcVar16 = (char *)*puVar13;
                  if (pcVar16 == (char *)0x0) {
                    pcVar5 = (char *)0x0;
                    pcVar16 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar5 = (char *)puVar13[2];
                  }
                  if (pcVar5 == pcVar15 + -0x180a194ff) {
                    pcVar5 = pcVar16 + (longlong)pcVar5;
                    if (pcVar5 <= pcVar16) goto LAB_18039ad40;
                    lVar11 = (longlong)&UNK_180a19500 - (longlong)pcVar16;
                    while (*pcVar16 == pcVar16[lVar11]) {
                      pcVar16 = pcVar16 + 1;
                      if (pcVar5 <= pcVar16) goto LAB_18039ad40;
                    }
                  }
                  puVar13 = (uint64_t *)puVar13[0xb];
                  if (puVar13 == (uint64_t *)0x0) break;
                } while( true );
              }
              if ((bVar3) && (*(char *)(param_1 + 0x44) == '\0')) goto LAB_18039b2ce;
              break;
            }
            lVar11 = (longlong)&UNK_180a19500 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar11]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar5 <= pcVar16) goto LAB_18039ad36;
            }
          }
        }
        *(int32_t *)(lVar9 + 0xc) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x10) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x14) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x18) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x1c) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x20) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x24) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x28) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x2c) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x30) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x34) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x38) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x3c) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x40) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x44) = *(int32_t *)(lVar9 + 4);
        *(int32_t *)(lVar9 + 0x48) = *(int32_t *)(lVar9 + 4);
        break;
      }
      lVar11 = (longlong)&UNK_180a22428 - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar11]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar5 <= pcVar16) goto LAB_18039acd5;
      }
    }
  }
LAB_18039b2ce:
  pcVar16 = "node";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  while( true ) {
    do {
      puVar14 = (uint64_t *)puVar14[0xb];
      if (puVar14 == (uint64_t *)0x0) goto LAB_18039b34d;
      pcVar16 = (char *)*puVar14;
      if (pcVar16 == (char *)0x0) {
        pcVar5 = (char *)0x0;
        pcVar16 = (char *)0x180d48d24;
      }
      else {
        pcVar5 = (char *)puVar14[2];
      }
    } while (pcVar5 != pcVar15 + -0x180a0e8b7);
    pcVar5 = pcVar5 + (longlong)pcVar16;
    if (pcVar5 <= pcVar16) break;
    lVar9 = (longlong)&UNK_180a0e8b8 - (longlong)pcVar16;
    while (*pcVar16 == pcVar16[lVar9]) {
      pcVar16 = pcVar16 + 1;
      if (pcVar5 <= pcVar16) goto LAB_18039a550;
    }
  }
  goto LAB_18039a550;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



