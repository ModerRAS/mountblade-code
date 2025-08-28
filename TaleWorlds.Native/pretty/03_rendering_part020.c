#include "TaleWorlds.Native.Split.h"

// 03_rendering_part020.c - 2 个函数

// 函数: void FUN_18027a810(longlong *param_1,longlong *param_2)
void FUN_18027a810(longlong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  char *pcVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_2d8 [32];
  uint auStack_2b8 [4];
  longlong *plStack_2a8;
  undefined *puStack_2a0;
  longlong lStack_298;
  uint uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  float fStack_270;
  float fStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  longlong lStack_248;
  int iStack_240;
  ulonglong uStack_238;
  undefined *puStack_230;
  longlong lStack_228;
  undefined4 uStack_220;
  ulonglong uStack_218;
  longlong *aplStack_210 [3];
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong *plStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined *puStack_158;
  char *pcStack_150;
  int iStack_148;
  char acStack_140 [72];
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [136];
  ulonglong uStack_58;
  
  uStack_170 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_2d8;
  auStack_2b8[1] = 0;
  puStack_2a0 = &UNK_180a3c3e0;
  uStack_288 = 0;
  lStack_298 = 0;
  uStack_290 = 0;
  pcVar15 = "name";
  do {
    pcVar14 = pcVar15;
    pcVar15 = pcVar14 + 1;
  } while (*pcVar15 != '\0');
  for (puVar11 = (undefined8 *)param_2[8]; plStack_2a8 = param_2, puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)puVar11[6]) {
    pcVar15 = (char *)*puVar11;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)puVar11[2];
    }
    if (pcVar6 == pcVar14 + -0x180a03a83) {
      pcVar6 = pcVar6 + (longlong)pcVar15;
      if (pcVar6 <= pcVar15) {
LAB_18027a8f4:
        lVar9 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar9 = puVar11[1];
        }
        FUN_180627c50(&puStack_2a0,lVar9);
        break;
      }
      lVar9 = (longlong)&DAT_180a03a84 - (longlong)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar6 <= pcVar15) goto LAB_18027a8f4;
      }
    }
  }
  if (0 < (int)uStack_290) {
    lVar9 = FUN_1800b6de0(_DAT_180c86930,&puStack_2a0,1);
    uVar17 = uStack_290;
    if (lVar9 == 0) {
      uVar7 = (ulonglong)uStack_290;
      if (lStack_298 != 0) {
        FUN_1806277c0(param_1 + 0x3e,uVar7);
      }
      if (uVar17 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(param_1[0x3f],lStack_298,uVar7);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (param_1[0x3f] != 0) {
        *(undefined1 *)(uVar7 + param_1[0x3f]) = 0;
      }
      *(undefined4 *)((longlong)param_1 + 0x20c) = uStack_288._4_4_;
    }
    else {
      FUN_180275a60(lVar9,param_1,1);
    }
  }
  puStack_250 = &UNK_180a3c3e0;
  uStack_238 = 0;
  lStack_248 = 0;
  iStack_240 = 0;
  pcVar15 = "material";
  do {
    pcVar14 = pcVar15;
    pcVar15 = pcVar14 + 1;
  } while (*pcVar15 != '\0');
  for (puVar11 = (undefined8 *)param_2[8]; puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)puVar11[6]) {
    pcVar15 = (char *)*puVar11;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)puVar11[2];
    }
    if (pcVar6 == pcVar14 + -0x180a04ebf) {
      pcVar6 = pcVar15 + (longlong)pcVar6;
      if (pcVar6 <= pcVar15) {
LAB_18027aa35:
        lVar9 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar9 = puVar11[1];
        }
        FUN_180627c50(&puStack_250,lVar9);
        break;
      }
      lVar9 = (longlong)&UNK_180a04ec0 - (longlong)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar6 <= pcVar15) goto LAB_18027aa35;
      }
    }
  }
  if (0 < iStack_240) {
    pcVar3 = *(code **)(*param_1 + 0x118);
    uVar4 = FUN_1800b30d0(_DAT_180c86930,&plStack_198,&puStack_250,1);
    (*pcVar3)(param_1,uVar4);
    if (plStack_198 != (longlong *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
  }
  puStack_250 = &UNK_180a3c3e0;
  if (lStack_248 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_248 = 0;
  uStack_238 = uStack_238 & 0xffffffff00000000;
  puStack_250 = &UNK_18098bcb0;
  puVar11 = (undefined8 *)param_2[6];
  if (puVar11 != (undefined8 *)0x0) {
LAB_18027aad4:
    do {
      uStack_280 = &UNK_180a3c3e0;
      uStack_268 = 0;
      uStack_278 = 0;
      fStack_270 = 0.0;
      pcVar15 = "name";
      do {
        pcVar14 = pcVar15;
        pcVar15 = pcVar14 + 1;
      } while (*pcVar15 != '\0');
      for (puVar13 = (undefined8 *)puVar11[8]; puVar13 != (undefined8 *)0x0;
          puVar13 = (undefined8 *)puVar13[6]) {
        pcVar15 = (char *)*puVar13;
        if (pcVar15 == (char *)0x0) {
          pcVar15 = (char *)0x180d48d24;
          pcVar6 = (char *)0x0;
        }
        else {
          pcVar6 = (char *)puVar13[2];
        }
        if (pcVar6 == pcVar14 + -0x180a03a83) {
          pcVar6 = pcVar15 + (longlong)pcVar6;
          if (pcVar6 <= pcVar15) {
LAB_18027ab65:
            lVar9 = 0x180d48d24;
            if (puVar13[1] != 0) {
              lVar9 = puVar13[1];
            }
            FUN_180627c50(&uStack_280,lVar9);
            break;
          }
          lVar9 = (longlong)&DAT_180a03a84 - (longlong)pcVar15;
          while (*pcVar15 == pcVar15[lVar9]) {
            pcVar15 = pcVar15 + 1;
            if (pcVar6 <= pcVar15) goto LAB_18027ab65;
          }
        }
      }
      uVar16 = 0;
      lVar9 = param_1[7];
      uVar7 = uVar16;
      if (param_1[8] - lVar9 >> 4 != 0) {
        do {
          puVar10 = &UNK_1809fcc58;
          lVar9 = *(longlong *)(lVar9 + uVar16 * 0x10);
          if (*(longlong *)(lVar9 + 0x1b0) == 0) {
            lVar5 = lVar9 + 0x10;
          }
          else {
            lVar5 = func_0x000180079240();
          }
          pcStack_150 = acStack_140;
          acStack_140[0] = '\0';
          iStack_148 = *(int *)(lVar5 + 0x10);
          puVar12 = &DAT_18098bc73;
          if (*(undefined **)(lVar5 + 8) != (undefined *)0x0) {
            puVar12 = *(undefined **)(lVar5 + 8);
          }
          puStack_158 = puVar10;
          strcpy_s(acStack_140,0x40,puVar12);
          if ((float)iStack_148 == fStack_270) {
            if (iStack_148 == 0) {
LAB_18027ac8e:
              if (fStack_270 != 0.0) goto LAB_18027ac96;
              bVar18 = true;
            }
            else {
              pcVar15 = pcStack_150;
              do {
                cVar1 = *pcVar15;
                cVar2 = pcVar15[uStack_278 - (longlong)pcStack_150];
                if (cVar1 != cVar2) break;
                pcVar15 = pcVar15 + 1;
              } while (cVar2 != '\0');
              bVar18 = cVar1 == cVar2;
            }
          }
          else {
            if (iStack_148 == 0) goto LAB_18027ac8e;
LAB_18027ac96:
            bVar18 = false;
          }
          if (bVar18) {
            auStack_2b8[0] = 0;
            puStack_f8 = &UNK_1809fcc28;
            puStack_f0 = auStack_e0;
            uStack_e8 = 0;
            auStack_e0[0] = 0;
            pcVar15 = "material";
            do {
              pcVar14 = pcVar15;
              pcVar15 = pcVar14 + 1;
            } while (*pcVar15 != '\0');
            for (puVar13 = (undefined8 *)puVar11[8]; puVar13 != (undefined8 *)0x0;
                puVar13 = (undefined8 *)puVar13[6]) {
              pcVar15 = (char *)*puVar13;
              if (pcVar15 == (char *)0x0) {
                pcVar15 = (char *)0x180d48d24;
                pcVar6 = (char *)0x0;
              }
              else {
                pcVar6 = (char *)puVar13[2];
              }
              if (pcVar6 == pcVar14 + -0x180a04ebf) {
                pcVar6 = pcVar6 + (longlong)pcVar15;
                if (pcVar6 <= pcVar15) {
LAB_18027ad47:
                  lVar5 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar5 = puVar13[1];
                  }
                  FUN_18004a180(&puStack_f8,lVar5);
                  uVar4 = FUN_1800b30d0(_DAT_180c86930,aplStack_210,&puStack_f8,1);
                  FUN_180076910(lVar9,uVar4);
                  if (aplStack_210[0] != (longlong *)0x0) {
                    (**(code **)(*aplStack_210[0] + 0x38))();
                  }
                  break;
                }
                lVar5 = (longlong)&UNK_180a04ec0 - (longlong)pcVar15;
                while (*pcVar15 == pcVar15[lVar5]) {
                  pcVar15 = pcVar15 + 1;
                  if (pcVar6 <= pcVar15) goto LAB_18027ad47;
                }
              }
            }
            pcVar15 = "factor";
            do {
              pcVar14 = pcVar15;
              pcVar15 = pcVar14 + 1;
            } while (*pcVar15 != '\0');
            for (puVar13 = (undefined8 *)puVar11[8]; puVar13 != (undefined8 *)0x0;
                puVar13 = (undefined8 *)puVar13[6]) {
              pcVar15 = (char *)*puVar13;
              if (pcVar15 == (char *)0x0) {
                pcVar15 = (char *)0x180d48d24;
                pcVar6 = (char *)0x0;
              }
              else {
                pcVar6 = (char *)puVar13[2];
              }
              if (pcVar6 == pcVar14 + -0x180a1674b) {
                pcVar6 = pcVar15 + (longlong)pcVar6;
                if (pcVar6 <= pcVar15) {
LAB_18027ae16:
                  lVar5 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar5 = puVar13[1];
                  }
                  FUN_18010cbc0(lVar5,&UNK_180a063a0,auStack_2b8);
                  *(float *)(lVar9 + 0x238) = (float)(auStack_2b8[0] >> 0x10 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x23c) = (float)(auStack_2b8[0] >> 8 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x240) = (float)(auStack_2b8[0] & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x244) = (float)(auStack_2b8[0] >> 0x18) * 0.003921569;
                  break;
                }
                lVar5 = (longlong)&UNK_180a1674c - (longlong)pcVar15;
                while (*pcVar15 == pcVar15[lVar5]) {
                  pcVar15 = pcVar15 + 1;
                  if (pcVar6 <= pcVar15) goto LAB_18027ae16;
                }
              }
            }
            pcVar15 = "factor2";
            do {
              pcVar14 = pcVar15;
              pcVar15 = pcVar14 + 1;
            } while (*pcVar15 != '\0');
            for (puVar13 = (undefined8 *)puVar11[8]; puVar13 != (undefined8 *)0x0;
                puVar13 = (undefined8 *)puVar13[6]) {
              pcVar15 = (char *)*puVar13;
              if (pcVar15 == (char *)0x0) {
                pcVar6 = (char *)0x0;
                pcVar15 = (char *)0x180d48d24;
              }
              else {
                pcVar6 = (char *)puVar13[2];
              }
              if (pcVar6 == pcVar14 + -0x180a167ff) {
                pcVar6 = pcVar6 + (longlong)pcVar15;
                if (pcVar6 <= pcVar15) {
LAB_18027af15:
                  lVar5 = 0x180d48d24;
                  if (puVar13[1] != 0) {
                    lVar5 = puVar13[1];
                  }
                  FUN_18010cbc0(lVar5,&UNK_180a063a0,auStack_2b8);
                  *(float *)(lVar9 + 0x248) = (float)(auStack_2b8[0] >> 0x10 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x24c) = (float)(auStack_2b8[0] >> 8 & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x250) = (float)(auStack_2b8[0] & 0xff) * 0.003921569;
                  *(float *)(lVar9 + 0x254) = (float)(auStack_2b8[0] >> 0x18) * 0.003921569;
                  break;
                }
                lVar5 = (longlong)&UNK_180a16800 - (longlong)pcVar15;
                while (*pcVar15 == pcVar15[lVar5]) {
                  pcVar15 = pcVar15 + 1;
                  if (pcVar6 <= pcVar15) goto LAB_18027af15;
                }
              }
            }
            lVar5 = FUN_180631b90(puVar11,&UNK_180a167e0,&uStack_190);
            if (lVar5 != 0) {
              *(undefined4 *)(lVar9 + 0x2a8) = uStack_190;
              *(undefined4 *)(lVar9 + 0x2ac) = uStack_18c;
              *(undefined4 *)(lVar9 + 0x2b0) = uStack_188;
              *(undefined4 *)(lVar9 + 0x2b4) = uStack_184;
            }
            lVar5 = FUN_180631b90(puVar11,&UNK_180a167f0,&uStack_190);
            if (lVar5 != 0) {
              *(undefined4 *)(lVar9 + 0x2b8) = uStack_190;
              *(undefined4 *)(lVar9 + 700) = uStack_18c;
              *(undefined4 *)(lVar9 + 0x2c0) = uStack_188;
              *(undefined4 *)(lVar9 + 0x2c4) = uStack_184;
            }
            puStack_f8 = &UNK_18098bcb0;
          }
          puStack_158 = &UNK_18098bcb0;
          uVar17 = (int)uVar7 + 1;
          uVar16 = uVar16 + 1;
          lVar9 = param_1[7];
          uVar7 = (ulonglong)uVar17;
        } while ((ulonglong)(longlong)(int)uVar17 < (ulonglong)(param_1[8] - lVar9 >> 4));
      }
      uStack_280 = &UNK_180a3c3e0;
      if (uStack_278 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_278 = 0;
      uStack_268 = uStack_268 & 0xffffffff00000000;
      uStack_280 = &UNK_18098bcb0;
      pcVar15 = "mesh";
      do {
        pcVar14 = pcVar15;
        pcVar15 = pcVar14 + 1;
      } while (*pcVar15 != '\0');
      while( true ) {
        do {
          puVar11 = (undefined8 *)puVar11[0xb];
          param_2 = plStack_2a8;
          if (puVar11 == (undefined8 *)0x0) goto LAB_18027b0de;
          pcVar15 = (char *)*puVar11;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)0x180d48d24;
            pcVar6 = (char *)0x0;
          }
          else {
            pcVar6 = (char *)puVar11[2];
          }
        } while (pcVar6 != pcVar14 + -0x180a0f3e7);
        pcVar6 = pcVar15 + (longlong)pcVar6;
        if (pcVar6 <= pcVar15) break;
        lVar9 = (longlong)&UNK_180a0f3e8 - (longlong)pcVar15;
        while (*pcVar15 == pcVar15[lVar9]) {
          pcVar15 = pcVar15 + 1;
          if (pcVar6 <= pcVar15) goto LAB_18027aad4;
        }
      }
    } while( true );
  }
LAB_18027b0de:
  auStack_2b8[2] = 0;
  pcVar15 = "modified_id";
  do {
    pcVar14 = pcVar15;
    pcVar15 = pcVar14 + 1;
  } while (*pcVar15 != '\0');
  puVar11 = (undefined8 *)param_2[8];
  do {
    if (puVar11 == (undefined8 *)0x0) goto LAB_18027b1b5;
    pcVar15 = (char *)*puVar11;
    if (pcVar15 == (char *)0x0) {
      pcVar15 = (char *)0x180d48d24;
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)puVar11[2];
    }
    if (pcVar6 == pcVar14 + -0x180a16827) {
      pcVar6 = pcVar6 + (longlong)pcVar15;
      if (pcVar6 <= pcVar15) {
LAB_18027b154:
        pcVar15 = (char *)0x180d48d24;
        if ((char *)puVar11[1] != (char *)0x0) {
          pcVar15 = (char *)puVar11[1];
        }
        uVar7 = 0xffffffffffffffff;
        do {
          uVar7 = uVar7 + 1;
        } while (pcVar15[uVar7] != '\0');
        if (((uVar7 < 3) || (*pcVar15 != '0')) ||
           (puVar10 = &UNK_180a3cb84, (pcVar15[1] + 0xa8U & 0xdf) != 0)) {
          puVar10 = &UNK_180a063a0;
        }
        FUN_18010cbc0(pcVar15,puVar10,auStack_2b8 + 2);
        *(uint *)((longlong)param_1 + 0x324) = auStack_2b8[2];
LAB_18027b1b5:
        *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
        puStack_230 = &UNK_180a3c3e0;
        uStack_218 = 0;
        lStack_228 = 0;
        uStack_220 = 0;
        pcVar15 = "second_material";
        do {
          pcVar14 = pcVar15;
          pcVar15 = pcVar14 + 1;
        } while (*pcVar15 != '\0');
        puVar11 = (undefined8 *)param_2[8];
        do {
          if (puVar11 == (undefined8 *)0x0) {
LAB_18027b312:
            uStack_180 = (undefined4)param_1[0x6c];
            uStack_17c = *(undefined4 *)((longlong)param_1 + 0x364);
            uStack_178 = (undefined4)param_1[0x6d];
            uStack_174 = *(undefined4 *)((longlong)param_1 + 0x36c);
            FUN_1801c1720(param_1 + 0x66,&uStack_1f8);
            FUN_180085020(param_1 + 0x66,&fStack_1e8);
            FUN_180631960(param_2,&UNK_180a16808,&uStack_180);
            FUN_180631960(param_2,&UNK_180a16818,&uStack_1f8);
            FUN_180631960(param_2,&UNK_180a0f108,&fStack_1e8);
            uStack_1a8 = CONCAT44(uStack_17c,uStack_180);
            uStack_1a0 = CONCAT44(uStack_174,uStack_178);
            uStack_280 = (undefined *)0x3f800000;
            uStack_278 = 0;
            fStack_270 = 0.0;
            fStack_26c = 1.0;
            uStack_268 = 0;
            uStack_260 = 0;
            uStack_258 = 0x3f800000;
            FUN_180085c10(&uStack_280,uStack_1f0);
            FUN_180085970(&uStack_280,uStack_1f8);
            FUN_180085ac0(&uStack_280,uStack_1f4);
            uStack_1cc = uStack_278._4_4_;
            uStack_1bc = uStack_268._4_4_;
            uStack_1ac = uStack_258._4_4_;
            fStack_1d8 = (float)uStack_280 * fStack_1e8;
            fStack_1d4 = uStack_280._4_4_ * fStack_1e8;
            fStack_1d0 = (float)uStack_278 * fStack_1e8;
            fStack_1c8 = fStack_270 * fStack_1e4;
            fStack_1c4 = fStack_26c * fStack_1e4;
            fStack_1c0 = (float)uStack_268 * fStack_1e4;
            fStack_1b8 = (float)uStack_260 * fStack_1e0;
            fStack_1b4 = uStack_260._4_4_ * fStack_1e0;
            fStack_1b0 = (float)uStack_258 * fStack_1e0;
            (**(code **)(*param_1 + 0x148))(param_1,&fStack_1d8);
            FUN_180276f30(param_1,(longlong)param_1 + 0x214,1);
            lVar9 = FUN_180631b90(param_2,&UNK_180a167f0,&uStack_168);
            if ((lVar9 != 0) && (plVar8 = (longlong *)param_1[7], plVar8 < (longlong *)param_1[8]))
            {
              do {
                lVar9 = *plVar8;
                *(undefined4 *)(lVar9 + 0x2b8) = uStack_168;
                *(undefined4 *)(lVar9 + 700) = uStack_164;
                *(undefined4 *)(lVar9 + 0x2c0) = uStack_160;
                *(undefined4 *)(lVar9 + 0x2c4) = uStack_15c;
                plVar8 = plVar8 + 2;
              } while (plVar8 < (longlong *)param_1[8]);
            }
            puStack_230 = &UNK_180a3c3e0;
            if (lStack_228 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_228 = 0;
            uStack_218 = uStack_218 & 0xffffffff00000000;
            puStack_230 = &UNK_18098bcb0;
            puStack_2a0 = &UNK_180a3c3e0;
            if (lStack_298 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            lStack_298 = 0;
            uStack_288 = uStack_288 & 0xffffffff00000000;
            puStack_2a0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
            FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_2d8);
          }
          pcVar15 = (char *)*puVar11;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)0x180d48d24;
            pcVar6 = (char *)0x0;
          }
          else {
            pcVar6 = (char *)puVar11[2];
          }
          if (pcVar6 == pcVar14 + -0x180a1683f) {
            pcVar6 = pcVar15 + (longlong)pcVar6;
            if (pcVar6 <= pcVar15) {
LAB_18027b254:
              lVar9 = 0x180d48d24;
              if (puVar11[1] != 0) {
                lVar9 = puVar11[1];
              }
              FUN_180627c50(&puStack_230,lVar9);
              plVar8 = (longlong *)FUN_1800b30d0(_DAT_180c86930,aplStack_210,&puStack_230,1);
              auStack_2b8[1] = 4;
              plVar8 = (longlong *)*plVar8;
              if (plVar8 != (longlong *)0x0) {
                plStack_2a8 = plVar8;
                (**(code **)(*plVar8 + 0x28))(plVar8);
              }
              plStack_2a8 = (longlong *)param_1[0x77];
              param_1[0x77] = (longlong)plVar8;
              if (plStack_2a8 != (longlong *)0x0) {
                (**(code **)(*plStack_2a8 + 0x38))();
              }
              auStack_2b8[1] = 0;
              if (aplStack_210[0] != (longlong *)0x0) {
                (**(code **)(*aplStack_210[0] + 0x38))();
              }
              FUN_1800b30d0(_DAT_180c86930,&plStack_2a8,&puStack_230,1);
              auStack_2b8[1] = 0;
              if (plStack_2a8 != (longlong *)0x0) {
                (**(code **)(*plStack_2a8 + 0x38))();
              }
              goto LAB_18027b312;
            }
            lVar9 = (longlong)&UNK_180a16840 - (longlong)pcVar15;
            while (*pcVar15 == pcVar15[lVar9]) {
              pcVar15 = pcVar15 + 1;
              if (pcVar6 <= pcVar15) goto LAB_18027b254;
            }
          }
          puVar11 = (undefined8 *)puVar11[6];
        } while( true );
      }
      lVar9 = (longlong)&UNK_180a16828 - (longlong)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar6 <= pcVar15) goto LAB_18027b154;
      }
    }
    puVar11 = (undefined8 *)puVar11[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18027b5d0(longlong param_1,longlong param_2)
void FUN_18027b5d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int aiStackX_10 [2];
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  int iStack_98;
  int iStack_94;
  uint auStack_90 [2];
  undefined *puStack_88;
  longlong lStack_80;
  uint uStack_78;
  undefined4 uStack_70;
  undefined *puStack_68;
  longlong lStack_60;
  uint uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  puVar5 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 8);
  }
  iVar1 = 0;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  FUN_18062dee0(puVar2,puVar5,&UNK_180a01ff0);
  if (puVar2[1] != 0) {
    fread(auStack_90,4,1);
    if (auStack_90[0] == 0x31444d4d) {
      fread(&iStack_94,4,1,puVar2[1]);
      if (0 < iStack_94) {
        do {
          fread(aiStackX_18,4,1,puVar2[1]);
          lVar3 = FUN_18062b1e0(_DAT_180c8ed18,(longlong)(aiStackX_18[0] + 1),0x10,3);
          fread(lVar3,1,(longlong)aiStackX_18[0],puVar2[1]);
          *(undefined1 *)(aiStackX_18[0] + lVar3) = 0;
          FUN_180627910(&puStack_68,lVar3);
          while ((0 < (int)uStack_58 && (lVar4 = strstr(lStack_60,&DAT_180a0ff10), lVar4 != 0))) {
            iVar9 = 6;
            iVar8 = (int)lVar4 - (int)lStack_60;
            if (uStack_58 < iVar8 + 6U) {
              iVar9 = uStack_58 - iVar8;
            }
            uVar7 = iVar8 + iVar9;
            if (uVar7 < uStack_58) {
              lVar4 = (longlong)(int)uVar7;
              do {
                *(undefined1 *)((lVar4 - iVar9) + lStack_60) = *(undefined1 *)(lVar4 + lStack_60);
                uVar7 = uVar7 + 1;
                lVar4 = lVar4 + 1;
              } while (uVar7 < uStack_58);
            }
            uStack_58 = uStack_58 - iVar9;
            *(undefined1 *)((ulonglong)uStack_58 + lStack_60) = 0;
          }
          if (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x10)) {
            *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) + 0x20;
            FUN_180627ae0();
          }
          else {
            FUN_180059820(param_1,&puStack_68);
          }
          fread(auStack_44,4,1,puVar2[1]);
          fread(&iStack_98,4,1,puVar2[1]);
          lVar4 = FUN_18062b1e0(_DAT_180c8ed18,(longlong)iStack_98 << 2,0x10,3);
          fread(lVar4,4,(longlong)iStack_98,puVar2[1]);
          if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar4);
          }
          if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar3);
          }
          puStack_68 = &UNK_180a3c3e0;
          if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_60 = 0;
          uStack_50 = 0;
          puStack_68 = &UNK_18098bcb0;
          iVar1 = iVar1 + 1;
        } while (iVar1 < iStack_94);
      }
    }
    else if (0 < (int)auStack_90[0]) {
      uVar6 = (ulonglong)auStack_90[0];
      do {
        fread(aiStackX_10,4,1,puVar2[1]);
        lVar3 = FUN_18062b1e0(_DAT_180c8ed18,(longlong)(aiStackX_10[0] + 1),0x10,3);
        fread(lVar3,1,(longlong)aiStackX_10[0],puVar2[1]);
        *(undefined1 *)(aiStackX_10[0] + lVar3) = 0;
        fread(auStack_48,4,1,puVar2[1]);
        FUN_180627910(&puStack_88,lVar3);
        while ((0 < (int)uStack_78 && (lVar4 = strstr(lStack_80,&DAT_180a0ff10), lVar4 != 0))) {
          iVar8 = 6;
          iVar1 = (int)lVar4 - (int)lStack_80;
          if (uStack_78 < iVar1 + 6U) {
            iVar8 = uStack_78 - iVar1;
          }
          uVar7 = iVar1 + iVar8;
          if (uVar7 < uStack_78) {
            lVar4 = (longlong)(int)uVar7;
            do {
              *(undefined1 *)((lVar4 - iVar8) + lStack_80) = *(undefined1 *)(lVar4 + lStack_80);
              uVar7 = uVar7 + 1;
              lVar4 = lVar4 + 1;
            } while (uVar7 < uStack_78);
          }
          uStack_78 = uStack_78 - iVar8;
          *(undefined1 *)((ulonglong)uStack_78 + lStack_80) = 0;
        }
        if (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x10)) {
          *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) + 0x20;
          FUN_180627ae0();
        }
        else {
          FUN_180059820(param_1,&puStack_88);
        }
        fread(aiStackX_20,4,1,puVar2[1]);
        lVar4 = FUN_18062b1e0(_DAT_180c8ed18,(longlong)aiStackX_20[0] << 2,0x10,3);
        fread(lVar4,4,(longlong)aiStackX_20[0],puVar2[1]);
        if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar4);
        }
        if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
        puStack_88 = &UNK_180a3c3e0;
        if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_80 = 0;
        uStack_70 = 0;
        puStack_88 = &UNK_18098bcb0;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (puVar2[1] != 0) {
      fclose();
      puVar2[1] = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



