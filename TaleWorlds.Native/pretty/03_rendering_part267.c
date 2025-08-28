#include "TaleWorlds.Native.Split.h"

// 03_rendering_part267.c - 5 个函数

// 函数: void FUN_1804160b0(float *param_1,longlong param_2)
void FUN_1804160b0(float *param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  char *pcVar10;
  int32_t *puVar11;
  uint64_t *puVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  int32_t *puVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  char *pcVar24;
  int32_t *puVar25;
  char *pcVar26;
  int iVar27;
  float *pfVar28;
  float fVar29;
  float fVar30;
  float fStack_88;
  float fStack_84;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  
  *(uint64_t *)(param_1 + 0xd2) = *(uint64_t *)(param_1 + 0xd0);
  *(uint64_t *)(param_1 + 0xca) = *(uint64_t *)(param_1 + 200);
  pcVar24 = "color";
  do {
    pcVar26 = pcVar24;
    pcVar24 = pcVar26 + 1;
  } while (*pcVar24 != '\0');
  puVar18 = *(uint64_t **)(param_2 + 0x30);
  if (puVar18 != (uint64_t *)0x0) {
LAB_180416140:
    pcVar24 = (char *)*puVar18;
    if (pcVar24 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar24 = (char *)0x180d48d24;
    }
    else {
      pcVar10 = (char *)puVar18[2];
    }
    if (pcVar10 != pcVar26 + -0x180a2481b) goto LAB_1804161ae;
    pcVar10 = pcVar24 + (longlong)pcVar10;
    if (pcVar24 < pcVar10) {
      lVar16 = (longlong)&UNK_180a2481c - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar16]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar10 <= pcVar24) goto LAB_180416177;
      }
      goto LAB_1804161ae;
    }
LAB_180416177:
    pcVar24 = "keys";
    do {
      pcVar26 = pcVar24;
      pcVar24 = pcVar26 + 1;
    } while (*pcVar24 != '\0');
    for (puVar18 = (uint64_t *)puVar18[6]; puVar18 != (uint64_t *)0x0;
        puVar18 = (uint64_t *)puVar18[0xb]) {
      pcVar24 = (char *)*puVar18;
      if (pcVar24 == (char *)0x0) {
        pcVar10 = (char *)0x0;
        pcVar24 = (char *)0x180d48d24;
      }
      else {
        pcVar10 = (char *)puVar18[2];
      }
      if (pcVar10 == pcVar26 + -0x180a180c3) {
        pcVar10 = pcVar10 + (longlong)pcVar24;
        if (pcVar10 <= pcVar24) {
LAB_1804161e5:
          pcVar24 = "key";
          do {
            pcVar26 = pcVar24;
            pcVar24 = pcVar26 + 1;
          } while (*pcVar24 != '\0');
          puVar18 = (uint64_t *)puVar18[6];
          if (puVar18 == (uint64_t *)0x0) break;
          do {
            pcVar24 = (char *)*puVar18;
            if (pcVar24 == (char *)0x0) {
              pcVar10 = (char *)0x0;
              pcVar24 = (char *)0x180d48d24;
            }
            else {
              pcVar10 = (char *)puVar18[2];
            }
            if (pcVar10 == pcVar26 + -0x180a18107) {
              pcVar10 = pcVar24 + (longlong)pcVar10;
              if (pcVar10 <= pcVar24) {
LAB_180416270:
                do {
                  pcVar24 = "time";
                  do {
                    pcVar26 = pcVar24;
                    pcVar24 = pcVar26 + 1;
                  } while (*pcVar24 != '\0');
                  for (puVar19 = (uint64_t *)puVar18[8]; puVar19 != (uint64_t *)0x0;
                      puVar19 = (uint64_t *)puVar19[6]) {
                    pcVar24 = (char *)*puVar19;
                    if (pcVar24 == (char *)0x0) {
                      pcVar10 = (char *)0x0;
                      pcVar24 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar10 = (char *)puVar19[2];
                    }
                    if (pcVar10 == pcVar26 + -0x180a1810b) {
                      pcVar10 = pcVar10 + (longlong)pcVar24;
                      if (pcVar10 <= pcVar24) {
LAB_1804162d5:
                        lVar16 = 0x180d48d24;
                        if (puVar19[1] != 0) {
                          lVar16 = puVar19[1];
                        }
                        FUN_18010cbc0(lVar16,&DAT_180a06430,&uStack_48);
                        break;
                      }
                      lVar16 = (longlong)&UNK_180a1810c - (longlong)pcVar24;
                      while (*pcVar24 == pcVar24[lVar16]) {
                        pcVar24 = pcVar24 + 1;
                        if (pcVar10 <= pcVar24) goto LAB_1804162d5;
                      }
                    }
                  }
                  FUN_180631960(puVar18);
                  puVar20 = *(int32_t **)(param_1 + 0xca);
                  if (puVar20 < *(int32_t **)(param_1 + 0xcc)) {
                    *(int32_t **)(param_1 + 0xca) = puVar20 + 5;
                    *puVar20 = uStack_48;
                    puVar20[1] = uStack_44;
                    puVar20[2] = uStack_40;
                    puVar20[3] = uStack_3c;
                    puVar20[4] = uStack_38;
                  }
                  else {
                    puVar25 = *(int32_t **)(param_1 + 200);
                    lVar16 = ((longlong)puVar20 - (longlong)puVar25) / 0x14;
                    if (lVar16 == 0) {
                      lVar16 = 1;
LAB_18041637c:
                      puVar11 = (int32_t *)FUN_18062b420(_DAT_180c8ed18);
                      puVar25 = *(int32_t **)(param_1 + 200);
                      puVar20 = *(int32_t **)(param_1 + 0xca);
                    }
                    else {
                      lVar16 = lVar16 * 2;
                      if (lVar16 != 0) goto LAB_18041637c;
                      puVar11 = (int32_t *)0x0;
                    }
                    if (puVar25 != puVar20) {
                    // WARNING: Subroutine does not return
                      memmove(puVar11,puVar25,(longlong)puVar20 - (longlong)puVar25);
                    }
                    *puVar11 = uStack_48;
                    puVar11[1] = uStack_44;
                    puVar11[2] = uStack_40;
                    puVar11[3] = uStack_3c;
                    puVar11[4] = uStack_38;
                    if (*(longlong *)(param_1 + 200) != 0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900();
                    }
                    *(int32_t **)(param_1 + 200) = puVar11;
                    *(int32_t **)(param_1 + 0xca) = puVar11 + 5;
                    *(int32_t **)(param_1 + 0xcc) = puVar11 + lVar16 * 5;
                  }
                  pcVar24 = "key";
                  do {
                    pcVar26 = pcVar24;
                    pcVar24 = pcVar26 + 1;
                  } while (*pcVar24 != '\0');
                  for (puVar18 = (uint64_t *)puVar18[0xb]; puVar18 != (uint64_t *)0x0;
                      puVar18 = (uint64_t *)puVar18[0xb]) {
                    pcVar24 = (char *)*puVar18;
                    if (pcVar24 == (char *)0x0) {
                      pcVar10 = (char *)0x0;
                      pcVar24 = (char *)0x180d48d24;
                    }
                    else {
                      pcVar10 = (char *)puVar18[2];
                    }
                    if (pcVar10 == pcVar26 + -0x180a18107) {
                      pcVar10 = pcVar10 + (longlong)pcVar24;
                      if (pcVar10 <= pcVar24) goto LAB_180416494;
                      lVar16 = (longlong)&UNK_180a18108 - (longlong)pcVar24;
                      while (*pcVar24 == pcVar24[lVar16]) {
                        pcVar24 = pcVar24 + 1;
                        if (pcVar10 <= pcVar24) goto LAB_180416494;
                      }
                    }
                  }
                  puVar18 = (uint64_t *)0x0;
LAB_180416494:
                } while (puVar18 != (uint64_t *)0x0);
                break;
              }
              lVar16 = (longlong)&UNK_180a18108 - (longlong)pcVar24;
              while (*pcVar24 == pcVar24[lVar16]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar10 <= pcVar24) goto LAB_180416270;
              }
            }
            puVar18 = (uint64_t *)puVar18[0xb];
          } while (puVar18 != (uint64_t *)0x0);
          break;
        }
        lVar16 = (longlong)&UNK_180a180c4 - (longlong)pcVar24;
        while (*pcVar24 == pcVar24[lVar16]) {
          pcVar24 = pcVar24 + 1;
          if (pcVar10 <= pcVar24) goto LAB_1804161e5;
        }
      }
    }
  }
LAB_1804164a4:
  pcVar24 = "alpha";
  do {
    pcVar26 = pcVar24;
    pcVar24 = pcVar26 + 1;
  } while (*pcVar24 != '\0');
  puVar18 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar18 == (uint64_t *)0x0) goto FUN_18026f850;
    pcVar24 = (char *)*puVar18;
    if (pcVar24 == (char *)0x0) {
      pcVar10 = (char *)0x0;
      pcVar24 = (char *)0x180d48d24;
    }
    else {
      pcVar10 = (char *)puVar18[2];
    }
    if (pcVar10 == pcVar26 + -0x180a063c3) {
      pcVar10 = pcVar24 + (longlong)pcVar10;
      if (pcVar10 <= pcVar24) {
LAB_180416507:
        pcVar24 = "keys";
        do {
          pcVar26 = pcVar24;
          pcVar24 = pcVar26 + 1;
        } while (*pcVar24 != '\0');
        puVar18 = (uint64_t *)puVar18[6];
        if (puVar18 == (uint64_t *)0x0) goto FUN_18026f850;
        do {
          pcVar24 = (char *)*puVar18;
          if (pcVar24 == (char *)0x0) {
            pcVar10 = (char *)0x0;
            pcVar24 = (char *)0x180d48d24;
          }
          else {
            pcVar10 = (char *)puVar18[2];
          }
          if (pcVar10 == pcVar26 + -0x180a180c3) {
            pcVar10 = pcVar10 + (longlong)pcVar24;
            if (pcVar10 <= pcVar24) {
LAB_180416575:
              pcVar24 = "key";
              do {
                pcVar26 = pcVar24;
                pcVar24 = pcVar26 + 1;
              } while (*pcVar24 != '\0');
              puVar18 = (uint64_t *)puVar18[6];
              if (puVar18 == (uint64_t *)0x0) break;
              do {
                pcVar24 = (char *)*puVar18;
                if (pcVar24 == (char *)0x0) {
                  pcVar10 = (char *)0x0;
                  pcVar24 = (char *)0x180d48d24;
                }
                else {
                  pcVar10 = (char *)puVar18[2];
                }
                if (pcVar10 == pcVar26 + -0x180a18107) {
                  pcVar10 = pcVar24 + (longlong)pcVar10;
                  if (pcVar10 <= pcVar24) {
LAB_1804165f0:
                    pcVar24 = "time";
                    do {
                      pcVar26 = pcVar24;
                      pcVar24 = pcVar26 + 1;
                    } while (*pcVar24 != '\0');
                    for (puVar19 = (uint64_t *)puVar18[8]; puVar19 != (uint64_t *)0x0;
                        puVar19 = (uint64_t *)puVar19[6]) {
                      pcVar24 = (char *)*puVar19;
                      if (pcVar24 == (char *)0x0) {
                        pcVar10 = (char *)0x0;
                        pcVar24 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar10 = (char *)puVar19[2];
                      }
                      if (pcVar10 == pcVar26 + -0x180a1810b) {
                        pcVar10 = pcVar10 + (longlong)pcVar24;
                        if (pcVar10 <= pcVar24) {
code_r0x00018041666a:
                          FUN_18010cbc0();
                          break;
                        }
                        lVar16 = (longlong)&UNK_180a1810c - (longlong)pcVar24;
                        while (*pcVar24 == pcVar24[lVar16]) {
                          pcVar24 = pcVar24 + 1;
                          if (pcVar10 <= pcVar24) goto code_r0x00018041666a;
                        }
                      }
                    }
                    pcVar24 = "value";
                    do {
                      pcVar26 = pcVar24;
                      pcVar24 = pcVar26 + 1;
                    } while (*pcVar24 != '\0');
                    for (puVar19 = (uint64_t *)puVar18[8]; puVar19 != (uint64_t *)0x0;
                        puVar19 = (uint64_t *)puVar19[6]) {
                      pcVar24 = (char *)*puVar19;
                      if (pcVar24 == (char *)0x0) {
                        pcVar10 = (char *)0x0;
                        pcVar24 = (char *)0x180d48d24;
                      }
                      else {
                        pcVar10 = (char *)puVar19[2];
                      }
                      if (pcVar10 == pcVar26 + -0x180a0696b) {
                        pcVar10 = pcVar10 + (longlong)pcVar24;
                        if (pcVar10 <= pcVar24) {
code_r0x0001804166ea:
                          FUN_18010cbc0();
                          break;
                        }
                        lVar16 = (longlong)&UNK_180a0696c - (longlong)pcVar24;
                        while (*pcVar24 == pcVar24[lVar16]) {
                          pcVar24 = pcVar24 + 1;
                          if (pcVar10 <= pcVar24) goto code_r0x0001804166ea;
                        }
                      }
                    }
                    puVar19 = *(uint64_t **)(param_1 + 0xd2);
                    if (puVar19 < *(uint64_t **)(param_1 + 0xd4)) {
                      *(uint64_t **)(param_1 + 0xd2) = puVar19 + 1;
                      *puVar19 = CONCAT44(uStack_54,uStack_58);
                    }
                    else {
                      puVar17 = *(uint64_t **)(param_1 + 0xd0);
                      lVar16 = (longlong)puVar19 - (longlong)puVar17 >> 3;
                      if (lVar16 == 0) {
                        lVar16 = 1;
LAB_180416750:
                        puVar12 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,lVar16 * 8);
                        puVar17 = *(uint64_t **)(param_1 + 0xd0);
                        puVar19 = *(uint64_t **)(param_1 + 0xd2);
                      }
                      else {
                        lVar16 = lVar16 * 2;
                        if (lVar16 != 0) goto LAB_180416750;
                        puVar12 = (uint64_t *)0x0;
                      }
                      if (puVar17 != puVar19) {
                    // WARNING: Subroutine does not return
                        memmove(puVar12,puVar17,(longlong)puVar19 - (longlong)puVar17);
                      }
                      *puVar12 = CONCAT44(uStack_54,uStack_58);
                      if (*(longlong *)(param_1 + 0xd0) != 0) {
                    // WARNING: Subroutine does not return
                        FUN_18064e900();
                      }
                      *(uint64_t **)(param_1 + 0xd0) = puVar12;
                      *(uint64_t **)(param_1 + 0xd4) = puVar12 + lVar16;
                      *(uint64_t **)(param_1 + 0xd2) = puVar12 + 1;
                    }
                    pcVar24 = "key";
                    do {
                      pcVar26 = pcVar24;
                      pcVar24 = pcVar26 + 1;
                    } while (*pcVar24 != '\0');
                    puVar18 = (uint64_t *)puVar18[0xb];
                    if (puVar18 != (uint64_t *)0x0) {
                      do {
                        pcVar24 = (char *)*puVar18;
                        if (pcVar24 == (char *)0x0) {
                          pcVar10 = (char *)0x0;
                          pcVar24 = (char *)0x180d48d24;
                        }
                        else {
                          pcVar10 = (char *)puVar18[2];
                        }
                        if (pcVar10 == pcVar26 + -0x180a18107) {
                          pcVar10 = pcVar10 + (longlong)pcVar24;
                          if (pcVar10 <= pcVar24) goto LAB_1804165f0;
                          lVar16 = (longlong)&UNK_180a18108 - (longlong)pcVar24;
                          while (*pcVar24 == pcVar24[lVar16]) {
                            pcVar24 = pcVar24 + 1;
                            if (pcVar10 <= pcVar24) goto LAB_1804165f0;
                          }
                        }
                        puVar18 = (uint64_t *)puVar18[0xb];
                        if (puVar18 == (uint64_t *)0x0) break;
                      } while( true );
                    }
                    break;
                  }
                  lVar16 = (longlong)&UNK_180a18108 - (longlong)pcVar24;
                  while (*pcVar24 == pcVar24[lVar16]) {
                    pcVar24 = pcVar24 + 1;
                    if (pcVar10 <= pcVar24) goto LAB_1804165f0;
                  }
                }
                puVar18 = (uint64_t *)puVar18[0xb];
              } while (puVar18 != (uint64_t *)0x0);
              break;
            }
            lVar16 = (longlong)&UNK_180a180c4 - (longlong)pcVar24;
            while (*pcVar24 == pcVar24[lVar16]) {
              pcVar24 = pcVar24 + 1;
              if (pcVar10 <= pcVar24) goto LAB_180416575;
            }
          }
          puVar18 = (uint64_t *)puVar18[0xb];
        } while (puVar18 != (uint64_t *)0x0);
FUN_18026f850:
        pfVar13 = *(float **)(param_1 + 0xca);
        pfVar1 = param_1 + 200;
        pfVar28 = *(float **)pfVar1;
        if (pfVar28 != pfVar13) {
          lVar16 = ((longlong)pfVar13 - (longlong)pfVar28) / 0x14;
          for (lVar9 = lVar16; lVar9 != 0; lVar9 = lVar9 >> 1) {
          }
          FUN_18026f230(pfVar28,pfVar13);
          if (lVar16 < 0x1d) {
            FUN_18026f390(pfVar28);
          }
          else {
            FUN_18026f390(pfVar28);
            for (pfVar28 = pfVar28 + 0x8c; pfVar28 != pfVar13; pfVar28 = pfVar28 + 5) {
              fVar2 = *pfVar28;
              fVar4 = pfVar28[1];
              fVar5 = pfVar28[2];
              fVar6 = pfVar28[3];
              fVar29 = pfVar28[4];
              fVar30 = pfVar28[-5];
              pfVar15 = pfVar28 + -5;
              pfVar14 = pfVar28;
              while (fVar2 < fVar30) {
                fVar30 = pfVar15[1];
                fVar7 = pfVar15[2];
                fVar8 = pfVar15[3];
                *pfVar14 = *pfVar15;
                pfVar14[1] = fVar30;
                pfVar14[2] = fVar7;
                pfVar14[3] = fVar8;
                pfVar14[4] = pfVar15[4];
                pfVar14 = pfVar14 + -5;
                fVar30 = pfVar15[-5];
                pfVar15 = pfVar15 + -5;
              }
              *pfVar14 = fVar2;
              pfVar14[1] = fVar4;
              pfVar14[2] = fVar5;
              pfVar14[3] = fVar6;
              pfVar14[4] = fVar29;
            }
          }
        }
        pfVar28 = *(float **)(param_1 + 0xd2);
        pfVar13 = *(float **)(param_1 + 0xd0);
        if (pfVar13 != pfVar28) {
          lVar9 = (longlong)pfVar28 - (longlong)pfVar13 >> 3;
          for (lVar16 = lVar9; lVar16 != 0; lVar16 = lVar16 >> 1) {
          }
          FUN_18026f6b0(pfVar13,pfVar28);
          if (lVar9 < 0x1d) {
            func_0x00018026f7f0(pfVar13,pfVar28);
          }
          else {
            pfVar15 = pfVar13 + 0x38;
            func_0x00018026f7f0(pfVar13);
            for (; pfVar15 != pfVar28; pfVar15 = pfVar15 + 2) {
              fVar30 = *pfVar15;
              pfVar13 = pfVar15 + -2;
              fVar29 = pfVar15[1];
              fVar2 = *pfVar13;
              pfVar14 = pfVar15;
              while (fVar30 < fVar2) {
                uVar3 = *(uint64_t *)pfVar13;
                pfVar13 = pfVar13 + -2;
                *(uint64_t *)pfVar14 = uVar3;
                pfVar14 = pfVar14 + -2;
                fVar2 = *pfVar13;
              }
              *pfVar14 = fVar30;
              pfVar14[1] = fVar29;
            }
          }
        }
        iVar27 = 0;
        pfVar28 = param_1;
        do {
          pfVar13 = *(float **)pfVar1;
          fVar30 = (float)iVar27 * 0.020408163;
          if (pfVar13 == *(float **)(param_1 + 0xca)) {
            fStack_88 = 1.0;
            fStack_84 = 1.0;
            fVar29 = 1.0;
          }
          else {
            lVar9 = (longlong)*(float **)(param_1 + 0xca) - (longlong)pfVar13;
            iVar21 = 0;
            lVar22 = 0;
            lVar16 = lVar9 >> 0x3f;
            lVar9 = lVar9 / 0x14 + lVar16;
            pfVar15 = pfVar13;
            if (lVar9 != lVar16) {
              do {
                if (fVar30 < *pfVar13) {
                  if (lVar22 != -1) {
                    if (lVar22 == 0) {
                      fStack_88 = pfVar15[1];
                      fStack_84 = pfVar15[2];
                      fVar29 = pfVar15[3];
                    }
                    else {
                      pfVar13 = pfVar15 + lVar22 * 5 + -5;
                      pfVar15 = pfVar15 + lVar22 * 5;
                      fVar29 = (fVar30 - *pfVar13) / (*pfVar15 - *pfVar13);
                      fStack_88 = (pfVar15[1] - pfVar13[1]) * fVar29 + pfVar13[1];
                      fStack_84 = (pfVar15[2] - pfVar13[2]) * fVar29 + pfVar13[2];
                      fVar29 = (pfVar15[3] - pfVar13[3]) * fVar29 + pfVar13[3];
                    }
                    goto LAB_18026fabc;
                  }
                  break;
                }
                iVar21 = iVar21 + 1;
                lVar22 = lVar22 + 1;
                pfVar13 = pfVar13 + 5;
                pfVar15 = *(float **)pfVar1;
              } while ((ulonglong)(longlong)iVar21 < (ulonglong)(lVar9 - lVar16));
            }
            lVar16 = *(longlong *)(param_1 + 0xca);
            fStack_88 = *(float *)(lVar16 + -0x10);
            fStack_84 = *(float *)(lVar16 + -0xc);
            fVar29 = *(float *)(lVar16 + -8);
          }
LAB_18026fabc:
          pfVar13 = *(float **)(param_1 + 0xd0);
          if (pfVar13 == *(float **)(param_1 + 0xd2)) {
            fVar30 = 1.0;
          }
          else {
            iVar21 = 0;
            uVar23 = (longlong)*(float **)(param_1 + 0xd2) - (longlong)pfVar13 >> 3;
            lVar16 = 0;
            pfVar15 = pfVar13;
            if (uVar23 != 0) {
              do {
                if (fVar30 < *pfVar15) {
                  if (lVar16 != -1) {
                    if (lVar16 == 0) {
                      fVar30 = pfVar13[1];
                    }
                    else {
                      fVar30 = ((fVar30 - pfVar13[lVar16 * 2 + -2]) /
                               (pfVar13[lVar16 * 2] - pfVar13[lVar16 * 2 + -2])) *
                               (pfVar13[lVar16 * 2 + 1] - pfVar13[lVar16 * 2 + -1]) +
                               pfVar13[lVar16 * 2 + -1];
                    }
                    goto LAB_18026fba0;
                  }
                  break;
                }
                iVar21 = iVar21 + 1;
                lVar16 = lVar16 + 1;
                pfVar15 = pfVar15 + 2;
              } while ((ulonglong)(longlong)iVar21 < uVar23);
            }
            fVar30 = *(float *)(*(longlong *)(param_1 + 0xd2) + -4);
          }
LAB_18026fba0:
          iVar27 = iVar27 + 1;
          *pfVar28 = fStack_88;
          pfVar28[1] = fStack_84;
          pfVar28[2] = fVar29;
          pfVar28[3] = fVar30;
          pfVar28 = pfVar28 + 4;
          if (0x31 < iVar27) {
            return;
          }
        } while( true );
      }
      lVar16 = (longlong)&UNK_180a063c4 - (longlong)pcVar24;
      while (*pcVar24 == pcVar24[lVar16]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar10 <= pcVar24) goto LAB_180416507;
      }
    }
    puVar18 = (uint64_t *)puVar18[0xb];
  } while( true );
LAB_1804161ae:
  puVar18 = (uint64_t *)puVar18[0xb];
  if (puVar18 == (uint64_t *)0x0) goto LAB_1804164a4;
  goto LAB_180416140;
}





// 函数: void FUN_180416880(longlong *param_1,longlong *param_2)
void FUN_180416880(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_1[2] = param_1[1];
  iVar2 = (int)(param_2[1] - *param_2 >> 4);
  lVar4 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *param_2;
      (**(code **)(*param_1 + 8))
                (param_1,*(int32_t *)(lVar3 + lVar1),*(int32_t *)(lVar3 + 4 + lVar1),
                 *(uint64_t *)(lVar3 + 8 + lVar1),0);
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}





// 函数: void FUN_1804168b0(void)
void FUN_1804168b0(void)

{
  longlong unaff_RSI;
  longlong *unaff_RDI;
  
  do {
    (**(code **)(*unaff_RDI + 8))();
    unaff_RSI = unaff_RSI + -1;
  } while (unaff_RSI != 0);
  return;
}





// 函数: void FUN_1804168ee(void)
void FUN_1804168ee(void)

{
  return;
}





// 函数: void FUN_180416900(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_180416900(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  uint64_t *puVar7;
  char *pcVar8;
  uint64_t *puVar9;
  char *pcVar10;
  int *piVar11;
  float fStackX_8;
  int iStackX_c;
  
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    puVar7 = (uint64_t *)FUN_1804c1300(param_3 + 0x60,0x60);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[4] = 0;
    *(int32_t *)(puVar7 + 5) = 1;
    puVar7[6] = 0;
    puVar7[8] = 0;
    pcVar8 = "curve";
    do {
      pcVar10 = pcVar8;
      pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
    *puVar7 = &UNK_180a180f4;
    puVar7[2] = pcVar10 + -0x180a180f3;
    FUN_180630b20(param_3,puVar7,&DAT_180a03a84,param_2);
    FUN_180630c80(param_3,puVar7,&UNK_180a015b0,1);
    FUN_18062f990(param_3,puVar7,&DAT_180a0b1c0);
    FUN_18062f990(param_3,puVar7,&UNK_180a180b0);
    if (*(longlong *)(param_4 + 0x30) == 0) {
      puVar7[10] = 0;
      *(uint64_t **)(param_4 + 0x30) = puVar7;
    }
    else {
      puVar7[10] = *(uint64_t *)(param_4 + 0x38);
      *(uint64_t **)(*(longlong *)(param_4 + 0x38) + 0x58) = puVar7;
    }
    *(uint64_t **)(param_4 + 0x38) = puVar7;
    puVar7[4] = param_4;
    puVar7[0xb] = 0;
    puVar9 = (uint64_t *)FUN_1804c1300(param_3 + 0x60,0x60);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[4] = 0;
    *(int32_t *)(puVar9 + 5) = 1;
    puVar9[6] = 0;
    puVar9[8] = 0;
    pcVar8 = "keys";
    do {
      pcVar10 = pcVar8;
      pcVar8 = pcVar10 + 1;
    } while (*pcVar8 != '\0');
    *puVar9 = &UNK_180a180c4;
    puVar9[2] = pcVar10 + -0x180a180c3;
    if (puVar7[6] == 0) {
      puVar9[10] = 0;
      puVar7[6] = puVar9;
    }
    else {
      puVar9[10] = puVar7[7];
      *(uint64_t **)(puVar7[7] + 0x58) = puVar9;
    }
    puVar7[7] = puVar9;
    puVar9[4] = puVar7;
    puVar9[0xb] = 0;
    piVar11 = *(int **)(param_1 + 8);
    if (piVar11 != *(int **)(param_1 + 0x10)) {
      do {
        iVar1 = *piVar11;
        fVar2 = (float)piVar11[2];
        iVar3 = piVar11[3];
        iVar4 = piVar11[4];
        fVar5 = (float)piVar11[6];
        iVar6 = piVar11[7];
        puVar7 = (uint64_t *)FUN_1804c1300(param_3 + 0x60,0x60);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[4] = 0;
        *(int32_t *)(puVar7 + 5) = 1;
        puVar7[6] = 0;
        puVar7[8] = 0;
        pcVar8 = "key";
        do {
          pcVar10 = pcVar8;
          pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        *puVar7 = &UNK_180a18108;
        puVar7[2] = pcVar10 + -0x180a18107;
        FUN_18062f990(param_3,puVar7,&UNK_180a1810c,(float)iVar1 * 0.03448276);
        FUN_18062f990(param_3,puVar7,&UNK_180a0696c);
        _fStackX_8 = CONCAT44(iVar3,fVar2 * 0.03448276);
        FUN_1806307a0(param_3,puVar7,&UNK_180a18100,&fStackX_8);
        if (puVar9[6] == 0) {
          puVar7[10] = 0;
          puVar9[6] = puVar7;
        }
        else {
          puVar7[10] = puVar9[7];
          *(uint64_t **)(puVar9[7] + 0x58) = puVar7;
        }
        puVar9[7] = puVar7;
        puVar7[4] = puVar9;
        puVar7[0xb] = 0;
        puVar7 = (uint64_t *)FUN_1804c1300(param_3 + 0x60,0x60);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[4] = 0;
        *(int32_t *)(puVar7 + 5) = 1;
        puVar7[6] = 0;
        puVar7[8] = 0;
        pcVar8 = "key";
        do {
          pcVar10 = pcVar8;
          pcVar8 = pcVar10 + 1;
        } while (*pcVar8 != '\0');
        *puVar7 = &UNK_180a18108;
        puVar7[2] = pcVar10 + -0x180a18107;
        FUN_18062f990(param_3,puVar7,&UNK_180a1810c,(float)iVar4 * 0.03448276);
        FUN_18062f990(param_3,puVar7,&UNK_180a0696c);
        _fStackX_8 = CONCAT44(iVar6,fVar5 * 0.03448276);
        FUN_1806307a0(param_3,puVar7,&UNK_180a18100,&fStackX_8);
        if (puVar9[6] == 0) {
          puVar7[10] = 0;
          puVar9[6] = puVar7;
        }
        else {
          puVar7[10] = puVar9[7];
          *(uint64_t **)(puVar9[7] + 0x58) = puVar7;
        }
        puVar9[7] = puVar7;
        piVar11 = piVar11 + 8;
        puVar7[4] = puVar9;
        puVar7[0xb] = 0;
      } while (piVar11 != *(int **)(param_1 + 0x10));
    }
  }
  return;
}





