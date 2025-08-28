#include "TaleWorlds.Native.Split.h"

// 03_rendering_part364.c - 1 个函数

// 函数: void FUN_180466800(longlong param_1,longlong param_2)
void FUN_180466800(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 *puStackX_8;
  undefined8 auStackX_18 [2];
  undefined *puStack_278;
  longlong lStack_270;
  int iStack_268;
  ulonglong uStack_260;
  float fStack_258;
  float fStack_254;
  ulonglong uStack_250;
  float fStack_248;
  float fStack_244;
  longlong lStack_240;
  float fStack_238;
  float fStack_234;
  longlong lStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined *puStack_218;
  longlong lStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_198;
  ulonglong uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  uint uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  
  uStack_e8 = 0xfffffffffffffffe;
  pcVar15 = "name";
  do {
    pcVar16 = pcVar15;
    pcVar15 = pcVar16 + 1;
  } while (*pcVar15 != '\0');
  pcVar15 = (char *)0x0;
  for (puVar13 = *(undefined8 **)(param_2 + 0x40); puVar13 != (undefined8 *)0x0;
      puVar13 = (undefined8 *)puVar13[6]) {
    pcVar9 = (char *)*puVar13;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar10 = pcVar15;
    }
    else {
      pcVar10 = (char *)puVar13[2];
    }
    if (pcVar10 == pcVar16 + -0x180a03a83) {
      pcVar10 = pcVar10 + (longlong)pcVar9;
      if (pcVar10 <= pcVar9) {
LAB_1804668d7:
        lVar12 = 0x180d48d24;
        if (puVar13[1] != 0) {
          lVar12 = puVar13[1];
        }
        (**(code **)(*(longlong *)(param_1 + 0x78) + 0x10))(param_1 + 0x78,lVar12);
        break;
      }
      lVar12 = (longlong)&DAT_180a03a84 - (longlong)pcVar9;
      while (*pcVar9 == pcVar9[lVar12]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar10 <= pcVar9) goto LAB_1804668d7;
      }
    }
  }
  pcVar16 = "season_mask_";
  do {
    pcVar9 = pcVar16;
    pcVar16 = pcVar9 + 1;
  } while (*pcVar16 != '\0');
  puVar13 = *(undefined8 **)(param_2 + 0x40);
  do {
    pcVar16 = pcVar15;
    if (puVar13 == (undefined8 *)0x0) goto LAB_1804669cf;
    pcVar16 = (char *)*puVar13;
    if (pcVar16 == (char *)0x0) {
      pcVar16 = (char *)0x180d48d24;
      pcVar10 = pcVar15;
    }
    else {
      pcVar10 = (char *)puVar13[2];
    }
    if (pcVar10 == pcVar9 + -0x180a2aadf) {
      pcVar10 = pcVar10 + (longlong)pcVar16;
      if (pcVar10 <= pcVar16) {
LAB_180466960:
        pcVar16 = (char *)0x180d48d24;
        if ((char *)puVar13[1] != (char *)0x0) {
          pcVar16 = (char *)puVar13[1];
        }
        uVar4 = 0xffffffffffffffff;
        do {
          uVar4 = uVar4 + 1;
        } while (pcVar16[uVar4] != '\0');
        if (((uVar4 < 3) || (*pcVar16 != '0')) || ((pcVar16[1] + 0xa8U & 0xdf) != 0)) {
          FUN_18010cbc0(pcVar16,&UNK_180a063a0,&puStackX_8);
        }
        else {
          FUN_18010cbc0(pcVar16,&UNK_180a3cb84,&puStackX_8);
        }
LAB_1804669cf:
        uVar8 = SUB81(puStackX_8,0);
        if (pcVar16 == (char *)0x0) {
          uVar8 = 0xff;
        }
        *(undefined1 *)(param_1 + 0x178) = uVar8;
        puVar1 = (undefined4 *)(param_1 + 0x174);
        pcVar16 = "scene_upgrade_level_mask_";
        do {
          pcVar9 = pcVar16;
          pcVar16 = pcVar9 + 1;
        } while (*pcVar16 != '\0');
        for (puVar13 = *(undefined8 **)(param_2 + 0x40); pcVar16 = pcVar15,
            puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)puVar13[6]) {
          pcVar16 = (char *)*puVar13;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = (char *)0x180d48d24;
            pcVar10 = pcVar15;
          }
          else {
            pcVar10 = (char *)puVar13[2];
          }
          if (pcVar10 == pcVar9 + -0x180a2aaef) {
            pcVar10 = pcVar10 + (longlong)pcVar16;
            if (pcVar10 <= pcVar16) {
LAB_180466a50:
              pcVar16 = (char *)0x180d48d24;
              if ((char *)puVar13[1] != (char *)0x0) {
                pcVar16 = (char *)puVar13[1];
              }
              break;
            }
            lVar12 = (longlong)&UNK_180a2aaf0 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar10 <= pcVar16) goto LAB_180466a50;
            }
          }
        }
        if (puVar1 == (undefined4 *)0x0) {
LAB_180466a85:
          if (pcVar16 == (char *)0x0) goto LAB_180466a8a;
        }
        else {
          if (pcVar16 != (char *)0x0) {
            FUN_18010cbc0(pcVar16,&UNK_180a063a0,puVar1);
            goto LAB_180466a85;
          }
LAB_180466a8a:
          *puVar1 = 0xffffffff;
        }
        puStack_218 = &UNK_180a3c3e0;
        uStack_200 = 0;
        lStack_210 = 0;
        uStack_208 = 0;
        pcVar16 = "interpolation_type";
        do {
          pcVar9 = pcVar16;
          pcVar16 = pcVar9 + 1;
        } while (*pcVar16 != '\0');
        for (puVar13 = *(undefined8 **)(param_2 + 0x40); puVar13 != (undefined8 *)0x0;
            puVar13 = (undefined8 *)puVar13[6]) {
          pcVar16 = (char *)*puVar13;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = (char *)0x180d48d24;
            pcVar10 = pcVar15;
          }
          else {
            pcVar10 = (char *)puVar13[2];
          }
          if (pcVar10 == pcVar9 + -0x180a2aa77) {
            pcVar10 = pcVar16 + (longlong)pcVar10;
            if (pcVar10 <= pcVar16) {
LAB_180466b24:
              lVar12 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar12 = puVar13[1];
              }
              FUN_180627c50(&puStack_218,lVar12);
              puStackX_8 = &uStack_1b8;
              uVar5 = FUN_180627ae0(&uStack_1b8,&puStack_218);
              uVar3 = FUN_1804660e0(extraout_XMM0_Da,uVar5);
              *(undefined4 *)(param_1 + 0x1b0) = uVar3;
              break;
            }
            lVar12 = (longlong)&UNK_180a2aa78 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar10 <= pcVar16) goto LAB_180466b24;
            }
          }
        }
        puStack_278 = &UNK_180a3c3e0;
        uStack_260 = 0;
        lStack_270 = 0;
        iStack_268 = 0;
        pcVar16 = "road_parent_entity_name";
        do {
          pcVar9 = pcVar16;
          pcVar16 = pcVar9 + 1;
        } while (*pcVar16 != '\0');
        for (puVar13 = *(undefined8 **)(param_2 + 0x40); puVar13 != (undefined8 *)0x0;
            puVar13 = (undefined8 *)puVar13[6]) {
          pcVar16 = (char *)*puVar13;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = (char *)0x180d48d24;
            pcVar10 = pcVar15;
          }
          else {
            pcVar10 = (char *)puVar13[2];
          }
          if (pcVar10 == pcVar9 + -0x180a2aa8f) {
            pcVar10 = pcVar10 + (longlong)pcVar16;
            if (pcVar10 <= pcVar16) {
LAB_180466bf0:
              lVar12 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar12 = puVar13[1];
              }
              FUN_180627c50(&puStack_278,lVar12);
              break;
            }
            lVar12 = (longlong)&UNK_180a2aa90 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar10 <= pcVar16) goto LAB_180466bf0;
            }
          }
        }
        if (iStack_268 != 0) {
          lVar6 = FUN_1801b3ad0(*(undefined8 *)(param_1 + 0x1b8),&puStack_278);
          lVar12 = _DAT_180c8ed70;
          if (lVar6 == 0) {
            *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(_DAT_180c8ed70 + 0x10);
            puVar14 = &DAT_18098bc73;
            if (*(undefined **)(lVar12 + 8) != (undefined *)0x0) {
              puVar14 = *(undefined **)(lVar12 + 8);
            }
          }
          else {
            lVar12 = FUN_1802267d0(lVar6 + 0x170);
            *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(lVar12 + 0x10);
            puVar14 = &DAT_18098bc73;
            if (*(undefined **)(lVar12 + 8) != (undefined *)0x0) {
              puVar14 = *(undefined **)(lVar12 + 8);
            }
          }
          strcpy_s(*(undefined8 *)(param_1 + 0x1c8),0x80,puVar14);
        }
        FUN_180469000(param_1,param_2);
        pcVar16 = "points";
        do {
          pcVar9 = pcVar16;
          pcVar16 = pcVar9 + 1;
        } while (*pcVar16 != '\0');
        puVar13 = *(undefined8 **)(param_2 + 0x30);
        do {
          if (puVar13 == (undefined8 *)0x0) goto LAB_18046745b;
          pcVar16 = (char *)*puVar13;
          if (pcVar16 == (char *)0x0) {
            pcVar16 = (char *)0x180d48d24;
            pcVar10 = pcVar15;
          }
          else {
            pcVar10 = (char *)puVar13[2];
          }
          if (pcVar10 == pcVar9 + -0x180a1a46f) {
            pcVar10 = pcVar16 + (longlong)pcVar10;
            if (pcVar10 <= pcVar16) {
LAB_180466cf6:
              pcVar16 = "point";
              do {
                pcVar9 = pcVar16;
                pcVar16 = pcVar9 + 1;
              } while (*pcVar16 != '\0');
              pcVar16 = (char *)puVar13[6];
              do {
                if (pcVar16 == (char *)0x0) {
LAB_18046745b:
                  puStack_278 = &UNK_180a3c3e0;
                  if (lStack_270 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  lStack_270 = 0;
                  uStack_260 = uStack_260 & 0xffffffff00000000;
                  puStack_278 = &UNK_18098bcb0;
                  puStack_218 = &UNK_180a3c3e0;
                  if (lStack_210 == 0) {
                    return;
                  }
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                pcVar10 = *(char **)pcVar16;
                if (pcVar10 == (char *)0x0) {
                  pcVar10 = (char *)0x180d48d24;
                  pcVar11 = pcVar15;
                }
                else {
                  pcVar11 = *(char **)(pcVar16 + 0x10);
                }
                if (pcVar11 == pcVar9 + -0x18098be47) {
                  pcVar11 = pcVar11 + (longlong)pcVar10;
                  if (pcVar11 <= pcVar10) {
LAB_180466d74:
                    plVar2 = (longlong *)(param_1 + 0xd0);
                    do {
                      puStackX_8 = (undefined4 *)0x0;
                      fStack_258 = 1.0;
                      fStack_254 = 0.0;
                      uStack_250 = 0;
                      fStack_248 = 0.0;
                      fStack_244 = 1.0;
                      lStack_240 = 0;
                      fStack_238 = 0.0;
                      fStack_234 = 0.0;
                      lStack_230 = 0x3f800000;
                      uStack_228 = 0;
                      uStack_224 = 0;
                      uStack_220 = 0;
                      uStack_21c = 0x3f800000;
                      fStack_1e8 = 1.0;
                      fStack_1e4 = 1.0;
                      fStack_1e0 = 1.0;
                      uStack_1dc = 0x7f7fffff;
                      FUN_180631960(pcVar16,&UNK_180a16808,&uStack_228);
                      FUN_180631960(pcVar16,&UNK_180a0f108,&fStack_1e8);
                      uStack_1b8 = 0x3f800000;
                      uStack_1b4 = 0;
                      uStack_1b0 = 0;
                      uStack_1ac = 0x3f800000;
                      FUN_180631b90(pcVar16,&UNK_180a2481c,&uStack_1b8);
                      uStack_1f8 = 0x3f800000;
                      uStack_1f0 = 0;
                      uStack_198 = 0x3f800000;
                      uStack_190 = 0;
                      fStack_188 = 0.0;
                      fStack_184 = 1.0;
                      fStack_180 = 0.0;
                      uStack_17c = 0;
                      fStack_178 = 0.0;
                      fStack_174 = 0.0;
                      fStack_170 = 1.0;
                      uStack_16c = 0;
                      lVar12 = FUN_180631cc0(pcVar16,0,&uStack_1f8);
                      if (lVar12 == 0) {
                        lVar12 = FUN_180631de0(pcVar16,&UNK_180a23540,&uStack_198);
                        if (lVar12 == 0) {
                          fVar18 = (float)lStack_230;
                          fVar20 = (float)uStack_250;
                          fVar17 = (float)lStack_240;
                        }
                        else {
                          lStack_230 = (ulonglong)uStack_16c << 0x20;
                          lStack_240 = (ulonglong)uStack_17c << 0x20;
                          fStack_258 = (float)uStack_198;
                          uStack_250 = uStack_190 & 0xffffffff00000000;
                          fStack_254 = uStack_198._4_4_;
                          fStack_244 = fStack_184;
                          fVar18 = fStack_170;
                          fStack_238 = fStack_178;
                          fStack_248 = fStack_188;
                          fStack_234 = fStack_174;
                          fVar20 = (float)uStack_190;
                          fVar17 = fStack_180;
                        }
                      }
                      else {
                        fVar20 = (float)uStack_1f0 * 2.0;
                        fVar17 = uStack_1f0._4_4_ * 2.0;
                        fVar18 = uStack_1f8._4_4_ * 2.0 * uStack_1f8._4_4_;
                        fVar19 = uStack_1f8._4_4_ * 2.0 * (float)uStack_1f8;
                        fStack_258 = 1.0 - (fVar17 * uStack_1f0._4_4_ + fVar20 * (float)uStack_1f0);
                        fStack_254 = fVar17 * (float)uStack_1f8 + fVar20 * uStack_1f8._4_4_;
                        fStack_244 = 1.0 - (fVar17 * uStack_1f0._4_4_ + fVar18);
                        fVar18 = 1.0 - (fVar20 * (float)uStack_1f0 + fVar18);
                        fStack_238 = fVar20 * (float)uStack_1f8 + fVar17 * uStack_1f8._4_4_;
                        fStack_248 = fVar20 * uStack_1f8._4_4_ - fVar17 * (float)uStack_1f8;
                        fStack_234 = fVar17 * (float)uStack_1f0 - fVar19;
                        fVar20 = fVar17 * uStack_1f8._4_4_ - fVar20 * (float)uStack_1f8;
                        fVar17 = fVar19 + fVar17 * (float)uStack_1f0;
                      }
                      _fStack_258 = CONCAT44(fStack_254 * fStack_1e8,fStack_258 * fStack_1e8);
                      uStack_250 = CONCAT44(uStack_250._4_4_,fVar20 * fStack_1e8);
                      _fStack_248 = CONCAT44(fStack_244 * fStack_1e4,fStack_248 * fStack_1e4);
                      lStack_240 = CONCAT44(lStack_240._4_4_,fVar17 * fStack_1e4);
                      _fStack_238 = CONCAT44(fStack_234 * fStack_1e0,fStack_238 * fStack_1e0);
                      lStack_230 = CONCAT44(lStack_230._4_4_,fVar18 * fStack_1e0);
                      pcVar9 = "custom_data";
                      do {
                        pcVar10 = pcVar9;
                        pcVar9 = pcVar10 + 1;
                      } while (*pcVar9 != '\0');
                      for (puVar13 = *(undefined8 **)(pcVar16 + 0x30); puVar13 != (undefined8 *)0x0;
                          puVar13 = (undefined8 *)puVar13[0xb]) {
                        pcVar9 = (char *)*puVar13;
                        if (pcVar9 == (char *)0x0) {
                          pcVar9 = (char *)0x180d48d24;
                          pcVar11 = pcVar15;
                        }
                        else {
                          pcVar11 = (char *)puVar13[2];
                        }
                        if (pcVar11 == pcVar10 + -0x180a2aaa7) {
                          pcVar11 = pcVar11 + (longlong)pcVar9;
                          if (pcVar11 <= pcVar9) {
LAB_180467095:
                            if (*(longlong *)(param_1 + 0x20) != 0) {
                              (**(code **)(param_1 + 0x28))(&puStackX_8,puVar13);
                            }
                            break;
                          }
                          lVar12 = (longlong)&UNK_180a2aaa8 - (longlong)pcVar9;
                          while (*pcVar9 == pcVar9[lVar12]) {
                            pcVar9 = pcVar9 + 1;
                            if (pcVar11 <= pcVar9) goto LAB_180467095;
                          }
                        }
                      }
                      puVar1 = puStackX_8;
                      uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3);
                      auStackX_18[0] = func_0x000180464d70(uVar5,&fStack_258,puVar1);
                      FUN_18005ea90(plVar2,auStackX_18);
                      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
                      pcVar9 = "first_tangent";
                      do {
                        pcVar10 = pcVar9;
                        pcVar9 = pcVar10 + 1;
                      } while (*pcVar9 != '\0');
                      for (puVar13 = *(undefined8 **)(pcVar16 + 0x30); puVar13 != (undefined8 *)0x0;
                          puVar13 = (undefined8 *)puVar13[0xb]) {
                        pcVar9 = (char *)*puVar13;
                        if (pcVar9 == (char *)0x0) {
                          pcVar9 = (char *)0x180d48d24;
                          pcVar11 = pcVar15;
                        }
                        else {
                          pcVar11 = (char *)puVar13[2];
                        }
                        if (pcVar11 == pcVar10 + -0x180a2aab7) {
                          pcVar11 = pcVar11 + (longlong)pcVar9;
                          if (pcVar11 <= pcVar9) {
LAB_180467164:
                            uStack_168 = 0x3f800000;
                            uStack_160 = 0;
                            uStack_158 = 0x3f80000000000000;
                            uStack_150 = 0;
                            uStack_148 = 0;
                            uStack_144 = 0;
                            uStack_140 = 0x3f800000;
                            uStack_13c = 0;
                            uStack_138 = 0;
                            uStack_134 = 0;
                            uStack_130 = 0;
                            uStack_12c = 0x3f800000;
                            FUN_180631960(puVar13,&UNK_180a16808,&uStack_138);
                            lVar12 = *(longlong *)
                                      (*plVar2 + -8 +
                                      (*(longlong *)(param_1 + 0xd8) - *plVar2 >> 3) * 8);
                            *(undefined8 *)(lVar12 + 0x40) = uStack_168;
                            *(undefined8 *)(lVar12 + 0x48) = uStack_160;
                            *(undefined8 *)(lVar12 + 0x50) = uStack_158;
                            *(undefined8 *)(lVar12 + 0x58) = uStack_150;
                            *(ulonglong *)(lVar12 + 0x60) = CONCAT44(uStack_144,uStack_148);
                            *(ulonglong *)(lVar12 + 0x68) = CONCAT44(uStack_13c,uStack_140);
                            *(ulonglong *)(lVar12 + 0x70) = CONCAT44(uStack_134,uStack_138);
                            *(ulonglong *)(lVar12 + 0x78) = CONCAT44(uStack_12c,uStack_130);
                            fStack_1d0 = (*(float *)(lVar12 + 0x38) - *(float *)(lVar12 + 0x78)) +
                                         *(float *)(lVar12 + 0x38);
                            fStack_1d4 = (*(float *)(lVar12 + 0x34) - *(float *)(lVar12 + 0x74)) +
                                         *(float *)(lVar12 + 0x34);
                            fStack_1d8 = (*(float *)(lVar12 + 0x30) - *(float *)(lVar12 + 0x70)) +
                                         *(float *)(lVar12 + 0x30);
                            uStack_1cc = 0x7f7fffff;
                            *(float *)(lVar12 + 0xb0) = fStack_1d8;
                            *(float *)(lVar12 + 0xb4) = fStack_1d4;
                            *(float *)(lVar12 + 0xb8) = fStack_1d0;
                            *(undefined4 *)(lVar12 + 0xbc) = 0x7f7fffff;
                            break;
                          }
                          lVar12 = (longlong)&UNK_180a2aab8 - (longlong)pcVar9;
                          while (*pcVar9 == pcVar9[lVar12]) {
                            pcVar9 = pcVar9 + 1;
                            if (pcVar11 <= pcVar9) goto LAB_180467164;
                          }
                        }
                      }
                      pcVar9 = "second_tangent";
                      do {
                        pcVar10 = pcVar9;
                        pcVar9 = pcVar10 + 1;
                      } while (*pcVar9 != '\0');
                      for (puVar13 = *(undefined8 **)(pcVar16 + 0x30); puVar13 != (undefined8 *)0x0;
                          puVar13 = (undefined8 *)puVar13[0xb]) {
                        pcVar9 = (char *)*puVar13;
                        if (pcVar9 == (char *)0x0) {
                          pcVar9 = (char *)0x180d48d24;
                          pcVar11 = pcVar15;
                        }
                        else {
                          pcVar11 = (char *)puVar13[2];
                        }
                        if (pcVar11 == pcVar10 + -0x180a2ab47) {
                          pcVar11 = pcVar11 + (longlong)pcVar9;
                          if (pcVar11 <= pcVar9) {
LAB_1804672b4:
                            uStack_128 = 0x3f800000;
                            uStack_120 = 0;
                            uStack_118 = 0x3f80000000000000;
                            uStack_110 = 0;
                            uStack_108 = 0;
                            uStack_104 = 0;
                            uStack_100 = 0x3f800000;
                            uStack_fc = 0;
                            uStack_f8 = 0;
                            uStack_f4 = 0;
                            uStack_f0 = 0;
                            uStack_ec = 0x3f800000;
                            FUN_180631960(puVar13,&UNK_180a16808,&uStack_f8);
                            lVar12 = *(longlong *)
                                      (*plVar2 + -8 +
                                      (*(longlong *)(param_1 + 0xd8) - *plVar2 >> 3) * 8);
                            *(undefined8 *)(lVar12 + 0x80) = uStack_128;
                            *(undefined8 *)(lVar12 + 0x88) = uStack_120;
                            *(undefined8 *)(lVar12 + 0x90) = uStack_118;
                            *(undefined8 *)(lVar12 + 0x98) = uStack_110;
                            *(ulonglong *)(lVar12 + 0xa0) = CONCAT44(uStack_104,uStack_108);
                            *(ulonglong *)(lVar12 + 0xa8) = CONCAT44(uStack_fc,uStack_100);
                            *(ulonglong *)(lVar12 + 0xb0) = CONCAT44(uStack_f4,uStack_f8);
                            *(ulonglong *)(lVar12 + 0xb8) = CONCAT44(uStack_ec,uStack_f0);
                            fStack_1c0 = *(float *)(lVar12 + 0x38) +
                                         (*(float *)(lVar12 + 0x38) - *(float *)(lVar12 + 0xb8));
                            fStack_1c4 = *(float *)(lVar12 + 0x34) +
                                         (*(float *)(lVar12 + 0x34) - *(float *)(lVar12 + 0xb4));
                            fStack_1c8 = (*(float *)(lVar12 + 0x30) - *(float *)(lVar12 + 0xb0)) +
                                         *(float *)(lVar12 + 0x30);
                            uStack_1bc = 0x7f7fffff;
                            *(float *)(lVar12 + 0x70) = fStack_1c8;
                            *(float *)(lVar12 + 0x74) = fStack_1c4;
                            *(float *)(lVar12 + 0x78) = fStack_1c0;
                            *(undefined4 *)(lVar12 + 0x7c) = 0x7f7fffff;
                            break;
                          }
                          lVar12 = (longlong)&UNK_180a2ab48 - (longlong)pcVar9;
                          while (*pcVar9 == pcVar9[lVar12]) {
                            pcVar9 = pcVar9 + 1;
                            if (pcVar11 <= pcVar9) goto LAB_1804672b4;
                          }
                        }
                      }
                      lVar12 = *(longlong *)
                                (*plVar2 + -8 + (*(longlong *)(param_1 + 0xd8) - *plVar2 >> 3) * 8);
                      *(undefined4 *)(lVar12 + 0xc0) = uStack_1b8;
                      *(undefined4 *)(lVar12 + 0xc4) = uStack_1b4;
                      *(undefined4 *)(lVar12 + 200) = uStack_1b0;
                      *(undefined4 *)(lVar12 + 0xcc) = uStack_1ac;
                      pcVar9 = "point";
                      do {
                        pcVar10 = pcVar9;
                        pcVar9 = pcVar10 + 1;
                      } while (*pcVar9 != '\0');
                      for (pcVar9 = *(char **)(pcVar16 + 0x58); pcVar16 = pcVar15,
                          pcVar9 != (char *)0x0; pcVar9 = *(char **)(pcVar9 + 0x58)) {
                        pcVar11 = *(char **)pcVar9;
                        if (pcVar11 == (char *)0x0) {
                          pcVar11 = (char *)0x180d48d24;
                          pcVar7 = pcVar15;
                        }
                        else {
                          pcVar7 = *(char **)(pcVar9 + 0x10);
                        }
                        if (pcVar7 == pcVar10 + -0x18098be47) {
                          pcVar7 = pcVar7 + (longlong)pcVar11;
                          pcVar16 = pcVar9;
                          if (pcVar7 <= pcVar11) break;
                          lVar12 = (longlong)&DAT_18098be48 - (longlong)pcVar11;
                          while (*pcVar11 == pcVar11[lVar12]) {
                            pcVar11 = pcVar11 + 1;
                            if (pcVar7 <= pcVar11) goto LAB_180467444;
                          }
                        }
                      }
LAB_180467444:
                    } while (pcVar16 != (char *)0x0);
                    goto LAB_18046745b;
                  }
                  lVar12 = (longlong)&DAT_18098be48 - (longlong)pcVar10;
                  while (*pcVar10 == pcVar10[lVar12]) {
                    pcVar10 = pcVar10 + 1;
                    if (pcVar11 <= pcVar10) goto LAB_180466d74;
                  }
                }
                pcVar16 = *(char **)(pcVar16 + 0x58);
              } while( true );
            }
            lVar12 = (longlong)&UNK_180a1a470 - (longlong)pcVar16;
            while (*pcVar16 == pcVar16[lVar12]) {
              pcVar16 = pcVar16 + 1;
              if (pcVar10 <= pcVar16) goto LAB_180466cf6;
            }
          }
          puVar13 = (undefined8 *)puVar13[0xb];
        } while( true );
      }
      lVar12 = (longlong)&UNK_180a2aae0 - (longlong)pcVar16;
      while (*pcVar16 == pcVar16[lVar12]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar10 <= pcVar16) goto LAB_180466960;
      }
    }
    puVar13 = (undefined8 *)puVar13[6];
  } while( true );
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



