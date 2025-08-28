#include "TaleWorlds.Native.Split.h"

// 99_part_03_part006.c - 1 个函数

// 函数: void FUN_1801ca670(longlong *param_1,uint64_t param_2)
void FUN_1801ca670(longlong *param_1,uint64_t param_2)

{
  int8_t auVar1 [16];
  byte bVar2;
  ulonglong *puVar3;
  bool bVar4;
  longlong *****ppppplVar5;
  ulonglong uVar6;
  longlong ****pppplVar7;
  longlong *****ppppplVar8;
  byte *pbVar9;
  uint64_t *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *****ppppplVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  int8_t auVar17 [8];
  uint uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *****ppppplVar21;
  longlong lVar22;
  void *puVar23;
  uint *puVar24;
  void *puVar25;
  ulonglong uVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  int8_t (*pauVar29) [16];
  longlong *plStackX_8;
  uint64_t uStackX_10;
  longlong *plStackX_18;
  longlong ****pppplStackX_20;
  void *puStack_228;
  int16_t *puStack_220;
  uint uStack_218;
  uint64_t uStack_210;
  ulonglong uStack_208;
  void *puStack_200;
  void *puStack_1f8;
  int32_t uStack_1f0;
  ulonglong uStack_1e8;
  longlong ****pppplStack_1e0;
  ulonglong *puStack_1d8;
  longlong *plStack_1d0;
  longlong ****pppplStack_1c8;
  longlong ****pppplStack_1c0;
  longlong ****pppplStack_1b8;
  uint64_t uStack_1b0;
  longlong lStack_1a8;
  int32_t uStack_1a0;
  int8_t auStack_198 [8];
  longlong *plStack_190;
  longlong *plStack_188;
  int32_t uStack_180;
  uint64_t uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  int8_t auStack_150 [272];
  
  uStack_170 = 0xfffffffffffffffe;
  uStack_1a0 = 3;
  pppplStack_1c8 = (longlong ****)&pppplStack_1c8;
  pppplStack_1c0 = (longlong ****)&pppplStack_1c8;
  pppplStack_1b8 = (longlong ****)0x0;
  uStack_1b0 = 0;
  lStack_1a8 = 0;
  pppplStack_1e0 = (longlong ****)_DAT_180c86930;
  uVar6 = (longlong)_DAT_180c86930[0x159] - (longlong)_DAT_180c86930[0x158] >> 3;
  plStackX_8 = param_1;
  uStackX_10 = param_2;
  if ((int)uVar6 != 0) {
    plStackX_18 = (longlong *)0x0;
    uVar6 = uVar6 & 0xffffffff;
    do {
      plVar11 = plStackX_18;
      puVar3 = *(ulonglong **)((longlong)plStackX_18 + (longlong)pppplStack_1e0[0x158]);
      pppplStackX_20 = (longlong ****)uVar6;
      puStack_1d8 = puVar3;
      FUN_1800b31f0(_DAT_180c86930,&plStackX_8,puVar3 + 6,0);
      if (plStackX_8 != (longlong *)0x0) {
        puVar10 = (uint64_t *)puVar3[1];
        pauVar29 = (int8_t (*) [16])*puVar10;
        if (pauVar29 == (int8_t (*) [16])0x0) {
          puVar28 = puVar10 + 1;
          pauVar29 = (int8_t (*) [16])*puVar28;
          while (pauVar29 == (int8_t (*) [16])0x0) {
            puVar28 = puVar28 + 1;
            pauVar29 = (int8_t (*) [16])*puVar28;
          }
        }
        if (pauVar29 != (int8_t (*) [16])puVar10[puVar3[2]]) {
          auVar1 = *pauVar29;
          _auStack_198 = auVar1;
          uStack_208 = auVar1._8_8_;
          plStack_1d0 = (longlong *)(uStack_208 >> 0x20);
          ppppplVar13 = &pppplStack_1c8;
          if ((longlong *****)pppplStack_1b8 == (longlong *****)0x0) goto LAB_1801ca835;
          ppppplVar8 = (longlong *****)pppplStack_1b8;
          goto LAB_1801ca7d3;
        }
      }
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_18 = plVar11 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  puStack_200 = &UNK_180a3c3e0;
  uStack_1e8 = 0;
  puStack_1f8 = (void *)0x0;
  uStack_1f0 = 0;
  pppplStackX_20 = pppplStack_1c0;
  ppppplVar13 = (longlong *****)pppplStack_1c0;
  if ((longlong *****)pppplStack_1c0 != &pppplStack_1c8) {
    do {
      pppplStackX_20 = (longlong ****)ppppplVar13;
      pppplStack_1e0 = (longlong ****)(ppppplVar13 + 8);
      FUN_1800b31f0(_DAT_180c86930,&plStackX_18,ppppplVar13 + 4,0);
      if (plStackX_18 != (longlong *)0x0) {
        plVar11 = (longlong *)FUN_180240a60();
        pppplVar7 = (longlong ****)&system_buffer_ptr;
        if (ppppplVar13[5] != (longlong ****)0x0) {
          pppplVar7 = ppppplVar13[5];
        }
        plStack_1d0 = plVar11;
        FUN_180628040(&puStack_200,&UNK_180a0d370,pppplVar7);
        FUN_180628040(&puStack_200);
        _auStack_198 = ZEXT816(0);
        auVar1 = _auStack_198;
        plVar16 = (longlong *)0x0;
        plStack_188 = (longlong *)0x0;
        uStack_180 = 3;
        ppppplVar8 = (longlong *****)ppppplVar13[9];
        plStack_190 = (longlong *)0x0;
        plVar19 = plStack_190;
        if (ppppplVar8 != ppppplVar13 + 8) {
          auStack_198 = (int8_t  [8])0x0;
          auVar17 = auStack_198;
          _auStack_198 = auVar1;
          do {
            plVar12 = (longlong *)0x0;
            pppplVar7 = ppppplVar8[4];
            for (plVar11 = (longlong *)auVar17; plVar11 != plVar19; plVar11 = plVar11 + 1) {
              if ((longlong ****)*plVar11 == pppplVar7) {
                if (plVar11 != plVar19) goto LAB_1801cad0b;
                break;
              }
            }
            if (plVar19 < plVar16) {
              plStack_190 = plVar19 + 1;
              *plVar19 = (longlong)pppplVar7;
              plVar19 = plVar19 + 1;
            }
            else {
              uStack_208 = (longlong)plVar19 - (longlong)auVar17;
              if ((longlong)uStack_208 >> 3 == 0) {
                lVar22 = 1;
LAB_1801caca9:
                plVar12 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar22 * 8,3);
              }
              else {
                lVar22 = ((longlong)uStack_208 >> 3) * 2;
                if (lVar22 != 0) goto LAB_1801caca9;
              }
              if (auVar17 != (int8_t  [8])plVar19) {
                    // WARNING: Subroutine does not return
                memmove(plVar12,auVar17,uStack_208);
              }
              *plVar12 = (longlong)pppplVar7;
              plVar19 = plVar12 + 1;
              if (auVar17 != (int8_t  [8])0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(auVar17);
              }
              plStack_190 = plVar19;
              auStack_198 = (int8_t  [8])plVar12;
              plVar16 = plVar12 + lVar22;
              auVar17 = (int8_t  [8])plVar12;
              plStack_188 = plVar16;
            }
LAB_1801cad0b:
            ppppplVar8 = (longlong *****)func_0x00018066bd70(ppppplVar8);
            ppppplVar13 = (longlong *****)pppplStackX_20;
            plVar11 = plStack_1d0;
            auVar1 = _auStack_198;
          } while (ppppplVar8 != (longlong *****)pppplStack_1e0);
        }
        _auStack_198 = auVar1;
        uVar6 = (longlong)plVar19 - (longlong)auStack_198 >> 3;
        auVar17 = auStack_198;
        if ((int)uVar6 != 0) {
          uStack_208 = uVar6 & 0xffffffff;
          puStack_1d8 = (ulonglong *)auStack_198;
          do {
            pppplVar7 = (longlong ****)*puStack_1d8;
            puStack_228 = &UNK_180a3c3e0;
            uStack_210 = 0;
            puStack_220 = (int16_t *)0x0;
            uStack_218 = 0;
            puStack_220 = (int16_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
            *(int8_t *)puStack_220 = 0;
            uVar6 = (ulonglong)puStack_220 & 0xffffffffffc00000;
            if (uVar6 == 0) {
              uVar14 = 0;
            }
            else {
              lVar22 = uVar6 + 0x80 + ((longlong)puStack_220 - uVar6 >> 0x10) * 0x50;
              puVar24 = (uint *)(lVar22 - (ulonglong)*(uint *)(lVar22 + 4));
              if ((*(byte *)((longlong)puVar24 + 0xe) & 2) == 0) {
                uVar14 = puVar24[7];
                if (0x3ffffff < uVar14) {
                  uVar14 = *puVar24 << 0x10;
                }
              }
              else {
                uVar14 = puVar24[7];
                if (uVar14 < 0x4000000) {
                  uVar26 = (ulonglong)uVar14;
                }
                else {
                  uVar26 = (ulonglong)*puVar24 << 0x10;
                }
                if (0x3ffffff < uVar14) {
                  uVar14 = *puVar24 << 0x10;
                }
                uVar14 = uVar14 - (int)(((longlong)puStack_220 -
                                        (((longlong)((longlong)puVar24 + (-0x80 - uVar6)) / 0x50) *
                                         0x10000 + uVar6)) % uVar26);
              }
            }
            *puStack_220 = 0x28;
            uStack_218 = 1;
            iVar15 = 0;
            lVar22 = *plVar11;
            lVar20 = plVar11[1] - lVar22 >> 0x3f;
            uStack_210._0_4_ = uVar14;
            if ((plVar11[1] - lVar22) / 0x60 + lVar20 != lVar20) {
              uVar6 = 1;
              lVar20 = 0;
              do {
                if (((ulonglong)pppplVar7 & uVar6) != 0) {
                  puVar25 = *(void **)(lVar22 + lVar20 + 8);
                  puVar23 = &system_buffer_ptr;
                  if (puVar25 != (void *)0x0) {
                    puVar23 = puVar25;
                  }
                  FUN_180628040(&puStack_228,&UNK_180a0d348,puVar23);
                  lVar22 = *plVar11;
                }
                iVar15 = iVar15 + 1;
                uVar6 = uVar6 << 1 | (ulonglong)((longlong)uVar6 < 0);
                lVar20 = lVar20 + 0x60;
              } while ((ulonglong)(longlong)iVar15 < (ulonglong)((plVar11[1] - lVar22) / 0x60));
            }
            iVar15 = uStack_218 + 1;
            if (iVar15 != 0) {
              uVar14 = uStack_218 + 2;
              if (puStack_220 == (int16_t *)0x0) {
                if ((int)uVar14 < 0x10) {
                  uVar14 = 0x10;
                }
                puStack_220 = (int16_t *)
                              FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar14,
                                            CONCAT71((int7)((ulonglong)lVar22 >> 8),0x13));
                *(int8_t *)puStack_220 = 0;
                uStack_210._0_4_ = FUN_18064e990(puStack_220);
              }
              else if ((uint)uStack_210 < uVar14) {
                puStack_220 = (int16_t *)
                              FUN_18062b8b0(_DAT_180c8ed18,puStack_220,uVar14,0x10,0x13);
                uVar6 = (ulonglong)puStack_220 & 0xffffffffffc00000;
                if (uVar6 == 0) {
                  uStack_210._0_4_ = 0;
                }
                else {
                  lVar22 = ((longlong)puStack_220 - uVar6 >> 0x10) * 0x50 + 0x80 + uVar6;
                  puVar24 = (uint *)(lVar22 - (ulonglong)*(uint *)(lVar22 + 4));
                  if ((*(byte *)((longlong)puVar24 + 0xe) & 2) == 0) {
                    uStack_210._0_4_ = puVar24[7];
                    if (0x3ffffff < (uint)uStack_210) {
                      uStack_210._0_4_ = *puVar24 << 0x10;
                    }
                  }
                  else {
                    uStack_210._0_4_ = puVar24[7];
                    if ((uint)uStack_210 < 0x4000000) {
                      uVar26 = (ulonglong)(uint)uStack_210;
                    }
                    else {
                      uVar26 = (ulonglong)*puVar24 << 0x10;
                    }
                    if (0x3ffffff < (uint)uStack_210) {
                      uStack_210._0_4_ = *puVar24 << 0x10;
                    }
                    uStack_210._0_4_ =
                         (uint)uStack_210 -
                         (int)(((longlong)puStack_220 -
                               (((longlong)((longlong)puVar24 + (-0x80 - uVar6)) / 0x50) * 0x10000 +
                               uVar6)) % uVar26);
                  }
                }
              }
            }
            *(int16_t *)((ulonglong)uStack_218 + (longlong)puStack_220) = 0x29;
            ppppplVar8 = (longlong *****)pppplStack_1e0[2];
            ppppplVar13 = (longlong *****)pppplStack_1e0;
            while (ppppplVar21 = ppppplVar8, ppppplVar5 = (longlong *****)pppplStack_1e0[2],
                  ppppplVar8 = (longlong *****)pppplStack_1e0, ppppplVar21 != (longlong *****)0x0) {
              if (pppplVar7 < ppppplVar21[4]) {
                ppppplVar8 = (longlong *****)ppppplVar21[1];
                ppppplVar13 = ppppplVar21;
              }
              else {
                ppppplVar8 = (longlong *****)*ppppplVar21;
              }
            }
            while (ppppplVar21 = ppppplVar5, ppppplVar21 != (longlong *****)0x0) {
              if (ppppplVar21[4] < pppplVar7) {
                ppppplVar5 = (longlong *****)*ppppplVar21;
              }
              else {
                ppppplVar5 = (longlong *****)ppppplVar21[1];
                ppppplVar8 = ppppplVar21;
              }
            }
            uStack_218 = iVar15;
            if (ppppplVar8 == ppppplVar13) {
              puStack_228 = &UNK_180a3c3e0;
              if (puStack_220 != (int16_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
            }
            else {
              FUN_180628040(&puStack_200,&UNK_180a0d350,pppplVar7);
              FUN_180628040(&puStack_200,&UNK_180a0d3a8);
              do {
                uVar14 = *(uint *)(ppppplVar8 + 5);
                FUN_180628040(&puStack_200,&UNK_180a0d3b0,
                              *(int32_t *)((longlong)ppppplVar8 + 0x2c));
                FUN_180628040(&puStack_200,&UNK_180a0d388,uVar14);
                FUN_180628040(&puStack_200,&UNK_180a0d3a0);
                uVar18 = 1;
                puVar10 = (uint64_t *)&system_state_6758;
                lVar22 = 0x20;
                do {
                  if ((uVar14 & uVar18) != 0) {
                    puVar25 = &system_buffer_ptr;
                    if ((void *)*puVar10 != (void *)0x0) {
                      puVar25 = (void *)*puVar10;
                    }
                    FUN_180628040(&puStack_200,&UNK_180a0d2f0,puVar25);
                  }
                  uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
                  puVar10 = puVar10 + 0xb;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                FUN_180628040(&puStack_200,&UNK_180a0d3dc);
                ppppplVar8 = (longlong *****)func_0x00018066bd70(ppppplVar8);
              } while (ppppplVar8 != ppppplVar13);
              FUN_180628040(&puStack_200);
              puStack_228 = &UNK_180a3c3e0;
              if (puStack_220 != (int16_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
            }
            uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
            puStack_220 = (int16_t *)0x0;
            puStack_228 = &UNK_18098bcb0;
            puStack_1d8 = puStack_1d8 + 1;
            uStack_208 = uStack_208 - 1;
            plVar11 = plStack_1d0;
          } while (uStack_208 != 0);
          uStack_208 = 0;
          auVar17 = auStack_198;
          ppppplVar13 = (longlong *****)pppplStackX_20;
        }
        FUN_180628040(&puStack_200,&UNK_180a0d3c4);
        FUN_180628040(&puStack_200,&system_state_cc18);
        if (auVar17 != (int8_t  [8])0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(auVar17);
        }
        if (plStackX_18 != (longlong *)0x0) {
          (**(code **)(*plStackX_18 + 0x38))();
        }
      }
      ppppplVar13 = (longlong *****)func_0x00018066bd70(ppppplVar13);
      pppplStackX_20 = (longlong ****)ppppplVar13;
    } while (ppppplVar13 != &pppplStack_1c8);
  }
  FUN_18016cdb0(&lStack_158);
  lVar22 = FUN_1800c4800(auStack_150,uStackX_10,2);
  if (lVar22 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)*(int *)(lStack_158 + 4) + (longlong)&lStack_158,2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)*(int *)(lStack_158 + 4) + (longlong)&lStack_158,0);
  }
  puVar25 = &system_buffer_ptr;
  if (puStack_1f8 != (void *)0x0) {
    puVar25 = puStack_1f8;
  }
  uVar27 = FUN_1800a1160(&lStack_158,puVar25);
  __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_P6AAEAV01_AEAV01__Z_Z
            (uVar27,FUN_1801e7680);
  lVar22 = FUN_1800a19c0(auStack_150);
  if (lVar22 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)*(int *)(lStack_158 + 4) + (longlong)&lStack_158,2);
  }
  FUN_18009fbe0(&lStack_158);
  puStack_200 = &UNK_180a3c3e0;
  if (puStack_1f8 == (void *)0x0) {
    puStack_1f8 = (void *)0x0;
    uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
    puStack_200 = &UNK_18098bcb0;
    FUN_1800593f0(&pppplStack_1c8,pppplStack_1b8);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
LAB_1801ca7d3:
  do {
    if ((int)puVar3[8] == 0) {
      bVar4 = false;
      ppppplVar21 = (longlong *****)ppppplVar8[1];
    }
    else {
      if (*(int *)(ppppplVar8 + 6) == 0) {
        bVar4 = true;
      }
      else {
        pbVar9 = (byte *)puVar3[7];
        lVar22 = (longlong)ppppplVar8[5] - (longlong)pbVar9;
        do {
          uVar14 = (uint)pbVar9[lVar22];
          iVar15 = *pbVar9 - uVar14;
          if (*pbVar9 != uVar14) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
        bVar4 = 0 < iVar15;
        if (iVar15 < 1) {
          ppppplVar21 = (longlong *****)ppppplVar8[1];
          goto LAB_1801ca827;
        }
      }
      ppppplVar21 = (longlong *****)*ppppplVar8;
    }
LAB_1801ca827:
    if (bVar4) {
      ppppplVar8 = ppppplVar13;
    }
    ppppplVar13 = ppppplVar8;
    ppppplVar8 = ppppplVar21;
  } while (ppppplVar21 != (longlong *****)0x0);
LAB_1801ca835:
  if (ppppplVar13 != &pppplStack_1c8) {
    if (*(int *)(ppppplVar13 + 6) == 0) goto LAB_1801caa3a;
    if ((int)puVar3[8] != 0) {
      pppplVar7 = ppppplVar13[5];
      lVar22 = puVar3[7] - (longlong)pppplVar7;
      do {
        bVar2 = *(byte *)pppplVar7;
        uVar14 = (uint)*(byte *)((longlong)pppplVar7 + lVar22);
        if (bVar2 != uVar14) break;
        pppplVar7 = (longlong ****)((longlong)pppplVar7 + 1);
      } while (uVar14 != 0);
      if ((int)(bVar2 - uVar14) < 1) goto LAB_1801caa3a;
    }
  }
  if ((ppppplVar13 == (longlong *****)pppplStack_1c8) || (ppppplVar13 == &pppplStack_1c8)) {
    if ((lStack_1a8 != 0) && ((int)puVar3[8] != 0)) {
      ppppplVar13 = (longlong *****)pppplStack_1c8;
      if (*(int *)(pppplStack_1c8 + 6) != 0) {
        pbVar9 = (byte *)puVar3[7];
        lVar22 = (longlong)pppplStack_1c8[5] - (longlong)pbVar9;
        do {
          bVar2 = *pbVar9;
          uVar14 = (uint)pbVar9[lVar22];
          if (bVar2 != uVar14) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
        if ((int)(bVar2 - uVar14) < 1) goto LAB_1801caa26;
      }
LAB_1801ca95c:
      bVar4 = false;
LAB_1801ca95e:
      if (ppppplVar13 != (longlong *****)0x0) {
        if ((bVar4) || (ppppplVar13 == &pppplStack_1c8)) {
LAB_1801ca9af:
          uVar27 = 0;
        }
        else {
          if (*(int *)(ppppplVar13 + 6) != 0) {
            pppplVar7 = ppppplVar13[5];
            lVar22 = puVar3[7] - (longlong)pppplVar7;
            do {
              bVar2 = *(byte *)pppplVar7;
              uVar14 = (uint)*(byte *)((longlong)pppplVar7 + lVar22);
              if (bVar2 != uVar14) break;
              pppplVar7 = (longlong ****)((longlong)pppplVar7 + 1);
            } while (uVar14 != 0);
            if (0 < (int)(bVar2 - uVar14)) goto LAB_1801ca9af;
          }
          uVar27 = 1;
        }
        lVar22 = FUN_18062b420(_DAT_180c8ed18,0x70,(int8_t)uStack_1a0);
        lStack_168 = lVar22 + 0x20;
        FUN_180627ae0(lStack_168,puVar3 + 6);
        lStack_160 = lVar22 + 0x40;
        *(uint64_t *)(lVar22 + 0x68) = 0;
        *(uint64_t *)(lVar22 + 0x58) = 0;
        *(int32_t *)(lVar22 + 0x68) = 3;
        *(longlong *)lStack_160 = lStack_160;
        *(longlong *)(lVar22 + 0x48) = lStack_160;
        *(uint64_t *)(lVar22 + 0x50) = 0;
        *(int8_t *)(lVar22 + 0x58) = 0;
        *(uint64_t *)(lVar22 + 0x60) = 0;
                    // WARNING: Subroutine does not return
        FUN_18066bdc0(lVar22,ppppplVar13,&pppplStack_1c8,uVar27);
      }
    }
  }
  else {
    ppppplVar8 = (longlong *****)func_0x00018066bd70(ppppplVar13);
    if ((int)puVar3[8] != 0) {
      if (*(int *)(ppppplVar13 + 6) != 0) {
        pbVar9 = (byte *)puVar3[7];
        lVar22 = (longlong)ppppplVar13[5] - (longlong)pbVar9;
        do {
          bVar2 = *pbVar9;
          uVar14 = (uint)pbVar9[lVar22];
          if (bVar2 != uVar14) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar14 != 0);
        if ((int)(bVar2 - uVar14) < 1) goto LAB_1801caa26;
      }
      if (*(int *)(ppppplVar8 + 6) != 0) {
        pppplVar7 = ppppplVar8[5];
        lVar22 = puVar3[7] - (longlong)pppplVar7;
        do {
          bVar2 = *(byte *)pppplVar7;
          uVar14 = (uint)*(byte *)((longlong)pppplVar7 + lVar22);
          if (bVar2 != uVar14) break;
          pppplVar7 = (longlong ****)((longlong)pppplVar7 + 1);
        } while (uVar14 != 0);
        if (0 < (int)(bVar2 - uVar14)) {
          if (*ppppplVar13 == (longlong ****)0x0) goto LAB_1801ca95c;
          bVar4 = true;
          ppppplVar13 = ppppplVar8;
          goto LAB_1801ca95e;
        }
      }
    }
  }
LAB_1801caa26:
  puVar10 = (uint64_t *)FUN_1801ea410(&pppplStack_1c8,&puStack_228);
  ppppplVar13 = (longlong *****)*puVar10;
LAB_1801caa3a:
  ppppplVar8 = ppppplVar13 + 8;
  auVar17 = auStack_198;
  ppppplVar21 = ppppplVar8;
  ppppplVar5 = (longlong *****)ppppplVar13[10];
  while (ppppplVar5 != (longlong *****)0x0) {
    ppppplVar21 = ppppplVar5;
    if ((ulonglong)auStack_198 < ppppplVar5[4]) {
      ppppplVar5 = (longlong *****)ppppplVar5[1];
    }
    else {
      ppppplVar5 = (longlong *****)*ppppplVar5;
    }
  }
  lVar22 = FUN_18062b420(_DAT_180c8ed18,0x30,*(int8_t *)(ppppplVar13 + 0xd));
  *(int8_t (*) [8])(lVar22 + 0x20) = auVar17;
  *(int *)(lVar22 + 0x28) = (int)uStack_208;
  *(uint *)(lVar22 + 0x2c) = auVar1._12_4_ & 0xffff;
  if ((ppppplVar21 == ppppplVar8) || ((ulonglong)auVar17 < ppppplVar21[4])) {
    uVar27 = 0;
  }
  else {
    uVar27 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar22,ppppplVar21,ppppplVar8,uVar27);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




