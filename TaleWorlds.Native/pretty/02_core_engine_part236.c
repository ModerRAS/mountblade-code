#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part236.c - 2 个函数

// 函数: void FUN_1802055a0(longlong param_1)
void FUN_1802055a0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int iVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int32_t uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int32_t *puVar12;
  longlong lVar13;
  uint64_t *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  uint64_t *puVar20;
  longlong *plVar21;
  bool bVar22;
  int iStackX_18;
  uint in_stack_fffffffffffffdb0;
  uint64_t uStack_238;
  int iStack_230;
  int32_t uStack_22c;
  longlong *plStack_228;
  longlong *plStack_220;
  uint64_t uStack_218;
  int iStack_210;
  int32_t uStack_20c;
  longlong *plStack_208;
  longlong lStack_200;
  longlong *plStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  int32_t *puStack_1d0;
  longlong lStack_1c8;
  uint64_t uStack_1c0;
  uint64_t *puStack_1b8;
  uint64_t *puStack_1b0;
  uint64_t *puStack_1a8;
  int32_t uStack_1a0;
  uint64_t *puStack_198;
  uint64_t *puStack_190;
  uint64_t *puStack_188;
  int32_t uStack_180;
  longlong lStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  longlong lStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  longlong *plStack_148;
  longlong *plStack_140;
  longlong lStack_130;
  longlong *plStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  int32_t uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  int8_t auStack_b0 [16];
  longlong *plStack_a0;
  int8_t auStack_98 [16];
  longlong *plStack_88;
  int8_t auStack_80 [16];
  longlong *plStack_70;
  int8_t auStack_68 [16];
  longlong *plStack_58;
  
  uStack_c8 = 0xfffffffffffffffe;
  iVar19 = 0;
  if (*(int *)(param_1 + 0x60) != -1) {
    *(int32_t *)(param_1 + 0x60) = 0xffffffff;
    FUN_180206740(param_1,1);
    lStack_1f0 = 0;
    do {
      iVar16 = 0;
      if (iVar19 < 0xe) {
        puStack_1b8 = (uint64_t *)0x0;
        puStack_1b0 = (uint64_t *)0x0;
        puStack_1a8 = (uint64_t *)0x0;
        uStack_1a0 = 3;
        plVar18 = (longlong *)((lStack_1f0 + 0x25) * 0x20 + param_1);
        lVar13 = *plVar18;
        *plVar18 = 0;
        lVar10 = plVar18[1];
        plVar18[1] = 0;
        lStack_f8 = plVar18[2];
        plVar18[2] = 0;
        uStack_f0 = (int32_t)plVar18[3];
        *(int32_t *)(plVar18 + 3) = 3;
        lVar9 = lVar10 - lVar13;
        lVar11 = lVar9 / 6 + (lVar9 >> 0x3f);
        lVar11 = (lVar11 >> 2) - (lVar11 >> 0x3f);
        lStack_1e8 = lVar13;
        lStack_1e0 = lVar11;
        lStack_1d8 = lVar10;
        lStack_108 = lVar13;
        lStack_100 = lVar10;
        uVar7 = func_0x000180206690(lVar9,0,iVar19);
        FUN_1802064e0(param_1,&lStack_178,uVar7,iVar19);
        if ((ulonglong)plVar18[1] < (ulonglong)plVar18[2]) {
          FUN_180204a00();
          plVar18[1] = plVar18[1] + 0x18;
        }
        else {
          FUN_180207840(plVar18,&lStack_178);
        }
        iVar16 = 0;
        lVar9 = lVar13;
        if (0 < (int)lVar11) {
          do {
            plVar2 = *(longlong **)(param_1 + 8);
            plStack_220 = (longlong *)*plVar2;
            plStack_1f8 = plVar2;
            if (plStack_220 == (longlong *)0x0) {
              plStack_1f8 = plVar2 + 1;
              plStack_220 = (longlong *)*plStack_1f8;
              while (plStack_220 == (longlong *)0x0) {
                plStack_1f8 = plStack_1f8 + 1;
                plStack_220 = (longlong *)*plStack_1f8;
              }
            }
            plVar21 = plStack_1f8;
            lStack_1c8 = lVar13;
            if (plStack_220 != (longlong *)plVar2[*(longlong *)(param_1 + 0x10)]) {
              do {
                puVar14 = puStack_1b8;
                lVar13 = *plStack_220;
                lVar10 = (ulonglong)*(byte *)(lVar13 + 0x181) * 0x1c0;
                lStack_200 = (longlong)*(int *)(lVar10 + 0x70 + _DAT_180c86938);
                lStack_130 = lVar13;
                if (0 < lStack_200) {
                  puVar12 = (int32_t *)(_DAT_180c86938 + 0x1e8 + lVar10);
                  piVar15 = (int *)(lVar13 + 0xc);
                  iStackX_18 = 0;
                  do {
                    if (((*piVar15 == iVar19) && (piVar15[-3] != -1)) && (piVar15[-1] == iVar16)) {
                      iVar1 = puVar12[-0x40];
                      in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffff00;
                      puStack_1d0 = puVar12;
                      FUN_180204b50(param_1,&uStack_218,iVar19,0,*(int32_t *)(lVar13 + 0x184),
                                    in_stack_fffffffffffffdb0,1);
                      if (iStack_210 == -1) {
                        iVar4 = (int)(((longlong)puStack_1b0 - (longlong)puVar14) / 0x18);
                        iVar17 = 0;
                        lVar10 = 0;
                        if (0 < iVar4) {
                          puVar8 = puVar14;
                          do {
                            if (((int *)*puVar8 != (int *)0x0) &&
                               (piVar15[-2] * iVar1 <= *(int *)*puVar8)) {
                              if ((ulonglong)plVar18[1] < (ulonglong)plVar18[2]) {
                                FUN_180204a00();
                                plVar18[1] = plVar18[1] + 0x18;
                              }
                              else {
                                FUN_180207840(plVar18,puVar14 + (longlong)iVar17 * 3);
                              }
                              puVar3 = *(int32_t **)
                                        (*(longlong *)(lStack_1f0 * 0x20 + 0x4a8 + param_1) + -0x18)
                              ;
                              if (*(longlong *)(puVar3 + 2) != 0) {
                    // WARNING: Subroutine does not return
                                FUN_18064e900();
                              }
                              puVar8 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
                              lVar13 = lStack_130;
                              puVar8[2] = 0;
                              *puVar8 = 0;
                              puVar8[1] = 0;
                              *(int32_t *)(puVar8 + 2) = *puVar3;
                              *(uint64_t **)(puVar3 + 2) = puVar8;
                              *(uint64_t **)(puVar3 + 4) = puVar8;
                              puVar8 = (uint64_t *)
                                       FUN_180204b50(param_1,auStack_b0,iVar19,0,
                                                     *(int32_t *)(lStack_130 + 0x184),
                                                     in_stack_fffffffffffffdb0 & 0xffffff00,1);
                              uStack_218 = *puVar8;
                              iStack_210 = *(int *)(puVar8 + 1);
                              uStack_20c = *(int32_t *)((longlong)puVar8 + 0xc);
                              plVar2 = (longlong *)puVar8[2];
                              puVar8[2] = 0;
                              plStack_128 = plStack_208;
                              if (plStack_208 != (longlong *)0x0) {
                                lVar10 = *plStack_208;
                                plStack_208 = plVar2;
                                (**(code **)(lVar10 + 0x38))();
                                plVar2 = plStack_208;
                              }
                              plStack_208 = plVar2;
                              if (plStack_a0 != (longlong *)0x0) {
                                (**(code **)(*plStack_a0 + 0x38))();
                              }
                              break;
                            }
                            iVar17 = iVar17 + 1;
                            lVar10 = lVar10 + 1;
                            puVar8 = puVar8 + 3;
                          } while (lVar10 < iVar4);
                        }
                        if (iStack_210 == -1) {
                          puVar8 = (uint64_t *)
                                   FUN_180204b50(param_1,auStack_98,iVar19,0,
                                                 *(int32_t *)(lVar13 + 0x184),1,1);
                          uStack_218 = *puVar8;
                          iStack_210 = *(int *)(puVar8 + 1);
                          uStack_20c = *(int32_t *)((longlong)puVar8 + 0xc);
                          plVar2 = (longlong *)puVar8[2];
                          puVar8[2] = 0;
                          plStack_120 = plStack_208;
                          if (plStack_208 != (longlong *)0x0) {
                            lVar10 = *plStack_208;
                            plStack_208 = plVar2;
                            (**(code **)(lVar10 + 0x38))();
                            plVar2 = plStack_208;
                          }
                          plStack_208 = plVar2;
                          if (plStack_88 != (longlong *)0x0) {
                            (**(code **)(*plStack_88 + 0x38))();
                          }
                        }
                      }
                      in_stack_fffffffffffffdb0 = uStack_218._4_4_ * iVar1;
                      (**(code **)(**(longlong **)(_DAT_180c86938 + 0x1cd8) + 0x1a8))
                                (*(longlong **)(_DAT_180c86938 + 0x1cd8),plStack_208,
                                 *(uint64_t *)(piVar15 + 1),piVar15[-3] * iVar1,
                                 (int)uStack_218 * iVar1,in_stack_fffffffffffffdb0);
                      FUN_180207e40(lVar13 + (longlong)iStackX_18 * 0x18);
                      FUN_1802075c0(lVar13,&uStack_218,iStackX_18,*puVar12,iVar1);
                      if (plStack_208 != (longlong *)0x0) {
                        (**(code **)(*plStack_208 + 0x38))();
                      }
                    }
                    iStackX_18 = iStackX_18 + 1;
                    puVar12 = puVar12 + 1;
                    piVar15 = piVar15 + 6;
                    lStack_200 = lStack_200 + -1;
                  } while (lStack_200 != 0);
                  lStack_200 = 0;
                  plVar21 = plStack_1f8;
                  puStack_1d0 = puVar12;
                }
                plStack_220 = (longlong *)plStack_220[1];
                while (plStack_220 == (longlong *)0x0) {
                  plVar21 = plVar21 + 1;
                  plStack_1f8 = plVar21;
                  plStack_220 = (longlong *)*plVar21;
                }
              } while (plStack_220 !=
                       *(longlong **)
                        (*(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8));
            }
            puVar14 = puStack_1b0;
            lVar13 = lStack_1c8;
            if (puStack_1b0 < puStack_1a8) {
              FUN_180204a00(puStack_1b0);
              puStack_1b0 = puVar14 + 3;
            }
            else {
              FUN_180207840(&puStack_1b8,lStack_1c8);
            }
            iVar16 = iVar16 + 1;
            lVar13 = lVar13 + 0x18;
            lVar9 = lStack_1e8;
            lVar10 = lStack_1d8;
            lStack_1c8 = lVar13;
          } while (iVar16 < (int)lStack_1e0);
        }
        lVar13 = lStack_178;
        if (lStack_178 != 0) {
          if (*(longlong *)(lStack_178 + 8) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_c0 = lStack_178 + 0x18;
          _Mtx_destroy_in_situ();
          if (lVar13 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar13);
          }
        }
        lStack_178 = 0;
        if (plStack_168 != (longlong *)0x0) {
          (**(code **)(*plStack_168 + 0x38))();
        }
        puVar14 = puStack_1b8;
        puVar8 = puStack_1b8;
        puVar20 = puStack_1b0;
        if (plStack_170 != (longlong *)0x0) {
          (**(code **)(*plStack_170 + 0x38))();
          puVar14 = puStack_1b8;
          puVar8 = puStack_1b8;
          puVar20 = puStack_1b0;
        }
        for (; puVar6 = puStack_1b0, puVar5 = puStack_1b8, puVar14 != puStack_1b0;
            puVar14 = puVar14 + 3) {
          puStack_1b8 = puVar8;
          puStack_1b0 = puVar20;
          FUN_18004bf50(puVar14);
          puVar8 = puStack_1b8;
          puVar20 = puStack_1b0;
          puStack_1b0 = puVar6;
          puStack_1b8 = puVar5;
        }
        bVar22 = puStack_1b8 != (uint64_t *)0x0;
        lVar13 = lVar9;
        puStack_1b8 = puVar8;
        puStack_1b0 = puVar20;
        if (bVar22) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar5);
        }
        for (; lVar13 != lVar10; lVar13 = lVar13 + 0x18) {
          FUN_18004bf50(lVar13);
        }
        if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar9);
        }
      }
      else {
        puStack_198 = (uint64_t *)0x0;
        puStack_190 = (uint64_t *)0x0;
        puStack_188 = (uint64_t *)0x0;
        uStack_180 = 3;
        plVar18 = (longlong *)((lStack_1f0 + 0x25) * 0x20 + param_1);
        lVar13 = *plVar18;
        *plVar18 = 0;
        lVar10 = plVar18[1];
        plVar18[1] = 0;
        lStack_d8 = plVar18[2];
        plVar18[2] = 0;
        uStack_d0 = (int32_t)plVar18[3];
        *(int32_t *)(plVar18 + 3) = 3;
        lVar11 = lVar10 - lVar13;
        lVar9 = lVar11 / 6 + (lVar11 >> 0x3f);
        lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
        lStack_1e8 = lVar9;
        lStack_1e0 = lVar13;
        lStack_1d8 = lVar10;
        lStack_e8 = lVar13;
        lStack_e0 = lVar10;
        uVar7 = func_0x000180206690(lVar11,0,iVar19);
        FUN_1802064e0(param_1,&lStack_160,uVar7,iVar19);
        if ((ulonglong)plVar18[1] < (ulonglong)plVar18[2]) {
          FUN_180204a00();
          plVar18[1] = plVar18[1] + 0x18;
        }
        else {
          FUN_180207840(plVar18,&lStack_160);
        }
        if (0 < (int)lVar9) {
          do {
            puVar8 = *(uint64_t **)(param_1 + 0x38);
            puVar20 = (uint64_t *)*puVar8;
            puVar14 = puVar8;
            if (puVar20 == (uint64_t *)0x0) {
              puVar14 = puVar8 + 1;
              puVar20 = (uint64_t *)*puVar14;
              while (puVar20 == (uint64_t *)0x0) {
                puVar14 = puVar14 + 1;
                puVar20 = (uint64_t *)*puVar14;
              }
            }
            if (puVar20 != (uint64_t *)puVar8[*(longlong *)(param_1 + 0x40)]) {
              do {
                puVar12 = (int32_t *)*puVar20;
                if (((puVar12[5] == iVar19) && (puVar12[2] != -1)) && (puVar12[4] == iVar16)) {
                  iVar1 = (*(byte *)(puVar12 + 1) & 1) * 2 + 2;
                  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffff00;
                  FUN_180204b50(param_1,&uStack_238,iVar19,0,*puVar12,in_stack_fffffffffffffdb0,1);
                  if (iStack_230 == -1) {
                    iVar4 = (int)(((longlong)puStack_190 - (longlong)puStack_198) / 0x18);
                    iVar17 = 0;
                    lVar10 = 0;
                    if (0 < iVar4) {
                      puVar8 = puStack_198;
                      do {
                        if (((int *)*puVar8 != (int *)0x0) &&
                           (puVar12[3] * iVar1 <= *(int *)*puVar8)) {
                          if ((ulonglong)plVar18[1] < (ulonglong)plVar18[2]) {
                            FUN_180204a00();
                            plVar18[1] = plVar18[1] + 0x18;
                          }
                          else {
                            FUN_180207840(plVar18,puStack_198 + (longlong)iVar17 * 3);
                          }
                          puVar3 = *(int32_t **)
                                    (*(longlong *)(lStack_1f0 * 0x20 + 0x4a8 + param_1) + -0x18);
                          if (*(longlong *)(puVar3 + 2) != 0) {
                    // WARNING: Subroutine does not return
                            FUN_18064e900();
                          }
                          puVar8 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
                          puVar8[2] = 0;
                          *puVar8 = 0;
                          puVar8[1] = 0;
                          *(int32_t *)(puVar8 + 2) = *puVar3;
                          *(uint64_t **)(puVar3 + 2) = puVar8;
                          *(uint64_t **)(puVar3 + 4) = puVar8;
                          puVar8 = (uint64_t *)
                                   FUN_180204b50(param_1,auStack_80,iVar19,0,*puVar12,
                                                 in_stack_fffffffffffffdb0 & 0xffffff00,1);
                          uStack_238 = *puVar8;
                          iStack_230 = *(int *)(puVar8 + 1);
                          uStack_22c = *(int32_t *)((longlong)puVar8 + 0xc);
                          plVar2 = (longlong *)puVar8[2];
                          puVar8[2] = 0;
                          plStack_118 = plStack_228;
                          if (plStack_228 != (longlong *)0x0) {
                            lVar10 = *plStack_228;
                            plStack_228 = plVar2;
                            (**(code **)(lVar10 + 0x38))();
                            plVar2 = plStack_228;
                          }
                          plStack_228 = plVar2;
                          if (plStack_70 != (longlong *)0x0) {
                            (**(code **)(*plStack_70 + 0x38))();
                          }
                          break;
                        }
                        iVar17 = iVar17 + 1;
                        lVar10 = lVar10 + 1;
                        puVar8 = puVar8 + 3;
                      } while (lVar10 < iVar4);
                    }
                    if (iStack_230 == -1) {
                      puVar8 = (uint64_t *)FUN_180204b50(param_1,auStack_68,iVar19,0,*puVar12,1,1)
                      ;
                      uStack_238 = *puVar8;
                      iStack_230 = *(int *)(puVar8 + 1);
                      uStack_22c = *(int32_t *)((longlong)puVar8 + 0xc);
                      plVar2 = (longlong *)puVar8[2];
                      puVar8[2] = 0;
                      plStack_110 = plStack_228;
                      if (plStack_228 != (longlong *)0x0) {
                        lVar10 = *plStack_228;
                        plStack_228 = plVar2;
                        (**(code **)(lVar10 + 0x38))();
                        plVar2 = plStack_228;
                      }
                      plStack_228 = plVar2;
                      if (plStack_58 != (longlong *)0x0) {
                        (**(code **)(*plStack_58 + 0x38))();
                      }
                    }
                  }
                  in_stack_fffffffffffffdb0 = uStack_238._4_4_ * iVar1;
                  (**(code **)(**(longlong **)(_DAT_180c86938 + 0x1cd8) + 0x1a8))
                            (*(longlong **)(_DAT_180c86938 + 0x1cd8),plStack_228,
                             *(uint64_t *)(puVar12 + 6),puVar12[2] * iVar1,(int)uStack_238 * iVar1
                             ,in_stack_fffffffffffffdb0);
                  uStack_1c0 = 0xffffffffffffffff;
                  *(uint64_t *)(puVar12 + 2) = 0xffffffffffffffff;
                  plStack_148 = *(longlong **)(puVar12 + 6);
                  *(uint64_t *)(puVar12 + 6) = 0;
                  if (plStack_148 != (longlong *)0x0) {
                    (**(code **)(*plStack_148 + 0x38))();
                  }
                  plVar2 = plStack_228;
                  *(uint64_t *)(puVar12 + 2) = uStack_238;
                  puVar12[4] = iStack_230;
                  puVar12[5] = uStack_22c;
                  plStack_140 = plStack_228;
                  if (plStack_228 != (longlong *)0x0) {
                    (**(code **)(*plStack_228 + 0x28))(plStack_228);
                  }
                  plStack_140 = *(longlong **)(puVar12 + 6);
                  *(longlong **)(puVar12 + 6) = plVar2;
                  if (plStack_140 != (longlong *)0x0) {
                    (**(code **)(*plStack_140 + 0x38))();
                  }
                  if (plStack_228 != (longlong *)0x0) {
                    (**(code **)(*plStack_228 + 0x38))();
                  }
                }
                puVar20 = (uint64_t *)puVar20[1];
                while (puVar20 == (uint64_t *)0x0) {
                  puVar14 = puVar14 + 1;
                  puVar20 = (uint64_t *)*puVar14;
                }
                lVar9 = lStack_1e8;
              } while (puVar20 !=
                       *(uint64_t **)
                        (*(longlong *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x40) * 8));
            }
            puVar14 = puStack_190;
            if (puStack_190 < puStack_188) {
              FUN_180204a00(puStack_190);
              puStack_190 = puVar14 + 3;
            }
            else {
              FUN_180207840(&puStack_198,lVar13);
            }
            iVar16 = iVar16 + 1;
            lVar13 = lVar13 + 0x18;
            lVar10 = lStack_1d8;
          } while (iVar16 < (int)lVar9);
        }
        lVar13 = lStack_160;
        if (lStack_160 != 0) {
          if (*(longlong *)(lStack_160 + 8) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_b8 = lStack_160 + 0x18;
          _Mtx_destroy_in_situ();
          if (lVar13 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar13);
          }
        }
        lStack_160 = 0;
        if (plStack_150 != (longlong *)0x0) {
          (**(code **)(*plStack_150 + 0x38))();
        }
        lVar13 = lStack_1e0;
        puVar14 = puStack_198;
        puVar8 = puStack_198;
        puVar20 = puStack_190;
        if (plStack_158 != (longlong *)0x0) {
          (**(code **)(*plStack_158 + 0x38))();
          lVar13 = lStack_1e0;
          puVar14 = puStack_198;
          puVar8 = puStack_198;
          puVar20 = puStack_190;
        }
        for (; puVar6 = puStack_190, puVar5 = puStack_198, lStack_1e0 = lVar13,
            puVar14 != puStack_190; puVar14 = puVar14 + 3) {
          puStack_198 = puVar8;
          puStack_190 = puVar20;
          FUN_18004bf50(puVar14);
          lVar13 = lStack_1e0;
          puVar8 = puStack_198;
          puVar20 = puStack_190;
          puStack_190 = puVar6;
          puStack_198 = puVar5;
        }
        bVar22 = puStack_198 != (uint64_t *)0x0;
        puStack_198 = puVar8;
        puStack_190 = puVar20;
        lVar9 = lVar13;
        if (bVar22) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar5);
        }
        for (; lVar9 != lVar10; lVar9 = lVar9 + 0x18) {
          FUN_18004bf50(lVar9);
        }
        if (lVar13 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar13);
        }
      }
      iVar19 = iVar19 + 1;
      lStack_1f0 = lStack_1f0 + 1;
    } while (iVar19 < 0x10);
  }
  return;
}



uint64_t * FUN_180206260(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  *(int32_t *)((longlong)param_1 + 0xc) = *(int32_t *)((longlong)param_2 + 0xc);
  uVar1 = param_2[2];
  param_2[2] = 0;
  plVar2 = (longlong *)param_1[2];
  param_1[2] = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



uint64_t * FUN_1802062c0(uint64_t *param_1,uint64_t *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  *(int32_t *)((longlong)param_1 + 0xc) = *(int32_t *)((longlong)param_2 + 0xc);
  plVar1 = (longlong *)param_2[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[2];
  param_1[2] = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1802064e0(longlong param_1,uint64_t *param_2,int32_t param_3,int param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong *plVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  uint uVar7;
  int32_t uVar8;
  longlong *plStack_50;
  uint64_t uStack_48;
  longlong *plStack_40;
  
  uStack_48 = 0xfffffffffffffffe;
  if (param_4 - 0xeU < 2) {
    uVar7 = 0x800;
    uVar2 = 5;
    if (param_4 == 0xe) {
      uVar2 = 0x2c;
    }
  }
  else {
    uVar7 = 0x401;
    uVar2 = func_0x000180206330(param_4);
    uVar2 = func_0x000180225e50(uVar2);
  }
  param_2[1] = 0;
  param_2[2] = 0;
  plVar4 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x68,8,3);
  *(int8_t *)((longlong)plVar4 + 4) = 0;
  plStack_40 = plVar4 + 3;
  plStack_50 = plVar4;
  _Mtx_init_in_situ(plStack_40,2);
  puVar5 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  *(int32_t *)((longlong)puVar5 + 0x14) = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(int32_t *)(puVar5 + 2) = param_3;
  plVar4[1] = (longlong)puVar5;
  plVar4[2] = (longlong)puVar5;
  *(int32_t *)plVar4 = param_3;
  *param_2 = plVar4;
  uVar8 = 1;
  uVar6 = *(int32_t *)*param_2;
  uVar3 = func_0x0001802063e0(param_4);
  puVar5 = (uint64_t *)
           FUN_1800b0a10(&system_data_7370,&plStack_50,*(int32_t *)(param_1 + 0x298),
                         &system_data_7370 + (longlong)param_4 * 0x98,uVar7 | 4,0,uVar2,uVar3,uVar6,0,0
                         ,1,uVar8);
  uVar1 = *puVar5;
  *puVar5 = 0;
  plVar4 = (longlong *)param_2[1];
  param_2[1] = uVar1;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))();
  }
  if (plStack_50 != (longlong *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180206740(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_180206740(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint64_t uVar13;
  
  uVar13 = 0xfffffffffffffffe;
  if (param_2 == '\0') {
    uVar4 = *(int *)(param_1 + 0x90) + 1U & 0xf;
    uVar12 = (ulonglong)uVar4;
    uVar4 = uVar4 + 1;
  }
  else {
    uVar4 = 0x10;
    uVar12 = 0;
  }
  if (uVar12 < uVar4) {
    plVar10 = (longlong *)(param_1 + 0x98 + uVar12 * 0x20);
    lVar11 = uVar4 - uVar12;
    do {
      iVar5 = (int)(plVar10[1] - *plVar10 >> 4);
      lVar9 = (longlong)iVar5;
      uVar7 = 0;
      if (0 < iVar5) {
        do {
          lVar6 = *plVar10;
          iVar5 = *(int *)(lVar6 + 8 + uVar7);
          if (iVar5 != -1) {
            FUN_18030a460(*(uint64_t *)
                           (*(longlong *)
                             (((longlong)*(int *)(lVar6 + 0xc + uVar7) + 0x25) * 0x20 + param_1) +
                           (longlong)iVar5 * 0x18),*(uint64_t *)(lVar6 + uVar7),lVar6,param_4,
                          uVar13);
          }
          lVar9 = lVar9 + -1;
          uVar7 = uVar7 + 0x10;
        } while (lVar9 != 0);
      }
      lVar9 = *plVar10;
      *plVar10 = 0;
      lVar6 = plVar10[1];
      plVar10[1] = 0;
      lVar1 = plVar10[2];
      plVar10[2] = 0;
      lVar3 = plVar10[3];
      *(int32_t *)(plVar10 + 3) = 3;
      if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if ((ulonglong)(plVar10[2] - *plVar10 >> 4) < 0x200) {
        lVar6 = FUN_18062b420(_DAT_180c8ed18,0x2000,(char)plVar10[3],param_4,uVar13,0,lVar6,lVar1,
                              (int)lVar3);
        lVar9 = *plVar10;
        if (lVar9 != plVar10[1]) {
                    // WARNING: Subroutine does not return
          memmove(lVar6,lVar9,plVar10[1] - lVar9);
        }
        if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar10 = lVar6;
        plVar10[1] = lVar6;
        plVar10[2] = lVar6 + 0x2000;
      }
      *(int *)(param_1 + 0x90) = (int)uVar12;
      plVar2 = (longlong *)plVar10[0x42];
      plVar8 = (longlong *)plVar10[0x41];
      if (plVar8 != plVar2) {
        do {
          if ((longlong *)*plVar8 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar8 + 0x38))();
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar2);
        plVar8 = (longlong *)plVar10[0x41];
      }
      plVar10[0x42] = (longlong)plVar8;
      uVar12 = (ulonglong)((int)uVar12 + 1);
      plVar10 = plVar10 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



