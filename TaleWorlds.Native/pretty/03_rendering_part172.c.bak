#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part172.c - 4 个函数

// 函数: void FUN_180373d90(longlong param_1)
void FUN_180373d90(longlong param_1)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  FUN_180374050();
  plVar7 = (longlong *)(param_1 + 0x2160);
  lVar8 = 4;
  do {
    lVar3 = *plVar7;
    uVar5 = 0;
    uVar6 = 0;
    if (plVar7[1] - lVar3 >> 3 != 0) {
      do {
        plVar1 = *(longlong **)(lVar3 + uVar6);
        if (plVar1 != (longlong *)0x0) {
          lVar8 = *plVar1;
          if (lVar8 != 0) {
            FUN_180372730(lVar8);
                    // WARNING: Subroutine does not return
            FUN_18064e900(lVar8);
          }
          *plVar1 = 0;
          plVar1[2] = (longlong)&system_data_buffer_ptr;
          if (plVar1[3] == 0) {
            plVar1[3] = 0;
            *(int32_t *)(plVar1 + 5) = 0;
            plVar1[2] = (longlong)&system_state_ptr;
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar1);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)(uVar6 + *plVar7) = 0;
        uVar4 = (int)uVar5 + 1;
        lVar3 = *plVar7;
        uVar5 = (ulonglong)uVar4;
        uVar6 = uVar6 + 8;
      } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(plVar7[1] - lVar3 >> 3));
    }
    plVar7[1] = lVar3;
    plVar7 = plVar7 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = param_1 + 0x2280;
  puVar2 = *(uint64_t **)(param_1 + 0x2290);
  if (puVar2 != (uint64_t *)0x0) {
    FUN_1800b9210(lVar8,*puVar2);
    FUN_1800b94f0(puVar2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  *(longlong *)lVar8 = lVar8;
  *(longlong *)(param_1 + 0x2288) = lVar8;
  *(uint64_t *)(param_1 + 0x2290) = 0;
  *(int8_t *)(param_1 + 0x2298) = 0;
  *(uint64_t *)(param_1 + 0x22a0) = 0;
  lVar3 = param_1 + 0x2200;
  FUN_1800b9270(lVar3,*(uint64_t *)(param_1 + 0x2210));
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(param_1 + 0x2208) = lVar3;
  *(uint64_t *)(param_1 + 0x2210) = 0;
  *(int8_t *)(param_1 + 0x2218) = 0;
  *(uint64_t *)(param_1 + 0x2220) = 0;
  _Mtx_destroy_in_situ();
  if (*(longlong **)(param_1 + 0x2308) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2308) + 0x38))();
  }
  _Mtx_destroy_in_situ();
  FUN_1800b8a30(lVar8);
  _Mtx_destroy_in_situ();
  FUN_1800b9270(lVar3,*(uint64_t *)(param_1 + 0x2210));
  FUN_180057830();
  FUN_1808fc8a8(param_1 + 0x2160,0x20,4,FUN_180046860);
  _Mtx_destroy_in_situ();
  FUN_180057830();
  if (*(longlong *)(param_1 + 0x20b0) == 0) {
    FUN_1808fc8a8(param_1 + 0xb0,0x20,0x100,FUN_180046860);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180374050(longlong param_1)
void FUN_180374050(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int **ppiVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iStackX_10;
  longlong lStack_80;
  longlong lStack_78;
  int *piStack_68;
  longlong lStack_60;
  int *piStack_58;
  longlong lStack_50;
  
  plVar14 = (longlong *)(param_1 + 0x2160);
  lStack_78 = 4;
  do {
    lVar4 = (longlong)(int)(plVar14[1] - *plVar14 >> 3);
    lStack_80 = 0;
    if (0 < lVar4) {
      do {
        plVar9 = *(longlong **)(*plVar14 + lStack_80 * 8);
        iVar16 = (int)plVar9[6];
        if ((((iVar16 == -1) ||
             (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2148) + 0x60b80), lVar1 == 0)) ||
            (*(char *)(*(longlong *)(lVar1 + 0x80 + (longlong)iVar16 * 8) + 0x152) != '\0')) &&
           (lVar1 = *plVar9, -1 < *(int *)(lVar1 + 0x50))) {
          if (*(char *)(lVar1 + 0x141) == '\0') {
            iVar16 = (int)((*(longlong *)(lVar1 + 0x88) - *(longlong *)(lVar1 + 0x80)) / 0x28);
          }
          else {
            iVar16 = (int)*(uint64_t *)(lVar1 + 0x148);
          }
          if ((iVar16 != 0) && (*(int *)(lVar1 + 0x54) != 0)) {
            iVar16 = (int)((*(int *)(param_1 + 0x2154) >> 0x1f & 3U) + *(int *)(param_1 + 0x2154))
                     >> 2;
            uVar3 = (int)(*(int *)(param_1 + 0x2158) + (*(int *)(param_1 + 0x2158) >> 0x1f & 3U)) >>
                    2;
            iStackX_10 = 0;
            if (0 < iVar16) {
              do {
                iVar17 = 0;
                if (0 < (int)uVar3) {
                  uVar18 = (ulonglong)uVar3;
                  do {
                    iVar10 = iStackX_10 * 4;
                    lVar19 = 4;
                    do {
                      iVar11 = 0;
                      do {
                        uVar13 = (ulonglong)(uint)(iVar17 + iVar11);
                        lVar6 = *(longlong *)(lVar1 + 0x110);
                        iVar15 = iVar10 * *(int *)(lVar1 + 0x58) + iVar17 + iVar11;
                        uVar8 = (ulonglong)(longlong)iVar15 % (ulonglong)*(uint *)(lVar1 + 0x118);
                        for (piVar2 = *(int **)(lVar6 + uVar8 * 8); piVar2 != (int *)0x0;
                            piVar2 = *(int **)(piVar2 + 4)) {
                          if (iVar15 == *piVar2) {
                            if (piVar2 != (int *)0x0) {
                              lVar7 = *(longlong *)(lVar1 + 0x118);
                              piStack_68 = piVar2;
                              ppiVar5 = &piStack_68;
                              lStack_60 = lVar6 + uVar8 * 8;
                              goto LAB_180374230;
                            }
                            break;
                          }
                        }
                        lVar7 = *(longlong *)(lVar1 + 0x118);
                        piStack_58 = *(int **)(lVar6 + lVar7 * 8);
                        ppiVar5 = &piStack_58;
                        lStack_50 = lVar6 + lVar7 * 8;
LAB_180374230:
                        if ((*ppiVar5 != *(int **)(lVar6 + lVar7 * 8)) &&
                           (lVar6 = FUN_180372570(lVar1,iVar10,uVar13),
                           *(longlong *)(lVar6 + 0x108) != 0)) {
                          lVar7 = FUN_180372570(lVar1,iVar10,uVar13 & 0xffffffff);
                          for (lVar6 = *(longlong *)(lVar7 + 0x120); lVar6 != lVar7 + 0x118;
                              lVar6 = func_0x00018066bd70(lVar6)) {
                            (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x1b0))();
                          }
                        }
                        iVar11 = iVar11 + 1;
                      } while (iVar11 < 4);
                      iVar10 = iVar10 + 1;
                      lVar19 = lVar19 + -1;
                    } while (lVar19 != 0);
                    iVar17 = iVar17 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                iStackX_10 = iStackX_10 + 1;
              } while (iStackX_10 < iVar16);
            }
          }
        }
        lStack_80 = lStack_80 + 1;
      } while (lStack_80 < lVar4);
    }
    lVar4 = 0;
    plVar14 = plVar14 + 4;
    lStack_78 = lStack_78 + -1;
    if (lStack_78 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x2308);
      iStackX_10 = 0;
      lVar19 = *(longlong *)(lVar1 + 200);
      if (*(longlong *)(lVar1 + 0xd0) - lVar19 >> 3 != 0) {
        do {
          uVar8 = 0;
          lVar19 = *(longlong *)(lVar4 + lVar19);
          lVar6 = *(longlong *)(lVar19 + 0x10);
          uVar18 = uVar8;
          if (*(longlong *)(lVar19 + 0x18) - lVar6 >> 4 != 0) {
            do {
              uVar12 = 0;
              lVar6 = **(longlong **)(uVar18 + 8 + lVar6);
              uVar13 = uVar12;
              if (*(longlong *)(lVar6 + 0x40) - *(longlong *)(lVar6 + 0x38) >> 4 != 0) {
                do {
                  FUN_180077040(*(uint64_t *)(uVar13 + *(longlong *)(lVar6 + 0x38)));
                  uVar3 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar3;
                  uVar13 = uVar13 + 0x10;
                } while ((ulonglong)(longlong)(int)uVar3 <
                         (ulonglong)(*(longlong *)(lVar6 + 0x40) - *(longlong *)(lVar6 + 0x38) >> 4)
                        );
              }
              lVar6 = *(longlong *)(lVar19 + 0x10);
              uVar3 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar3;
              uVar18 = uVar18 + 0x10;
            } while ((ulonglong)(longlong)(int)uVar3 <
                     (ulonglong)(*(longlong *)(lVar19 + 0x18) - lVar6 >> 4));
          }
          FUN_18046c430(*(uint64_t *)(*(longlong *)(lVar1 + 200) + lVar4));
          lVar4 = lVar4 + 8;
          lVar19 = *(longlong *)(lVar1 + 200);
          iStackX_10 = iStackX_10 + 1;
        } while ((ulonglong)(longlong)iStackX_10 <
                 (ulonglong)(*(longlong *)(lVar1 + 0xd0) - lVar19 >> 3));
      }
      lVar4 = 0;
      plVar14 = *(longlong **)(param_1 + 0x20d8);
      plVar9 = *(longlong **)(param_1 + 0x20d0);
      if ((longlong)plVar14 - (longlong)plVar9 >> 3 != 0) {
        iVar16 = 0;
        do {
          plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x2148) + 0x318);
          (**(code **)(*plVar14 + 0x90))
                    (plVar14,*(uint64_t *)(lVar4 + *(longlong *)(param_1 + 0x20d0)));
          plVar14 = *(longlong **)(param_1 + 0x20d8);
          lVar4 = lVar4 + 8;
          plVar9 = *(longlong **)(param_1 + 0x20d0);
          iVar16 = iVar16 + 1;
        } while ((ulonglong)(longlong)iVar16 <
                 (ulonglong)((longlong)plVar14 - (longlong)plVar9 >> 3));
      }
      if (plVar9 == plVar14) {
        *(longlong **)(param_1 + 0x20d8) = plVar9;
      }
      else {
        do {
          if ((longlong *)*plVar9 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar9 + 0x38))();
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar14);
        *(uint64_t *)(param_1 + 0x20d8) = *(uint64_t *)(param_1 + 0x20d0);
      }
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180374530(longlong param_1)
void FUN_180374530(longlong param_1)

{
  int8_t *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = 10;
  puVar1 = (int8_t *)(param_1 + 9);
  fVar3 = (float)((int)(*(int *)(SYSTEM_STATE_MANAGER + 0xe0) +
                       (*(int *)(SYSTEM_STATE_MANAGER + 0xe0) >> 0x1f & 3U)) >> 2);
  fVar6 = fVar3 * 112.0 + 208.0;
  fVar5 = fVar3 * 56.0 + 104.0;
  do {
    fVar4 = (float)(iVar2 + -10);
    if (fVar4 <= fVar6) {
      if (fVar4 <= fVar5) {
        if (fVar4 <= fVar3 * 35.0 + 65.0) {
          if (fVar4 <= fVar3 * 12.25 + 22.75) {
            if (fVar4 <= fVar3 * 7.0 + 13.0) {
              if (fVar4 <= fVar3 * 5.25 + 9.75) {
                puVar1[-1] = fVar3 * 1.75 + 3.25 < fVar4;
              }
              else {
                puVar1[-1] = 2;
              }
            }
            else {
              puVar1[-1] = 3;
            }
          }
          else {
            puVar1[-1] = 4;
          }
        }
        else {
          puVar1[-1] = 5;
        }
      }
      else {
        puVar1[-1] = 6;
      }
    }
    else {
      puVar1[-1] = 7;
    }
    fVar4 = (float)(iVar2 + -5);
    if (fVar4 <= fVar6) {
      if (fVar4 <= fVar5) {
        if (fVar4 <= fVar3 * 35.0 + 65.0) {
          if (fVar4 <= fVar3 * 12.25 + 22.75) {
            if (fVar4 <= fVar3 * 7.0 + 13.0) {
              if (fVar4 <= fVar3 * 5.25 + 9.75) {
                *puVar1 = fVar3 * 1.75 + 3.25 < fVar4;
              }
              else {
                *puVar1 = 2;
              }
            }
            else {
              *puVar1 = 3;
            }
          }
          else {
            *puVar1 = 4;
          }
        }
        else {
          *puVar1 = 5;
        }
      }
      else {
        *puVar1 = 6;
      }
    }
    else {
      *puVar1 = 7;
    }
    fVar4 = (float)iVar2;
    if (fVar4 <= fVar6) {
      if (fVar4 <= fVar5) {
        if (fVar4 <= fVar3 * 35.0 + 65.0) {
          if (fVar4 <= fVar3 * 12.25 + 22.75) {
            if (fVar4 <= fVar3 * 7.0 + 13.0) {
              if (fVar4 <= fVar3 * 5.25 + 9.75) {
                puVar1[1] = fVar3 * 1.75 + 3.25 < fVar4;
              }
              else {
                puVar1[1] = 2;
              }
            }
            else {
              puVar1[1] = 3;
            }
          }
          else {
            puVar1[1] = 4;
          }
        }
        else {
          puVar1[1] = 5;
        }
      }
      else {
        puVar1[1] = 6;
      }
    }
    else {
      puVar1[1] = 7;
    }
    fVar4 = (float)(iVar2 + 5);
    if (fVar4 <= fVar6) {
      if (fVar4 <= fVar5) {
        if (fVar4 <= fVar3 * 35.0 + 65.0) {
          if (fVar4 <= fVar3 * 12.25 + 22.75) {
            if (fVar4 <= fVar3 * 7.0 + 13.0) {
              if (fVar4 <= fVar3 * 5.25 + 9.75) {
                puVar1[2] = fVar3 * 1.75 + 3.25 < fVar4;
              }
              else {
                puVar1[2] = 2;
              }
            }
            else {
              puVar1[2] = 3;
            }
          }
          else {
            puVar1[2] = 4;
          }
        }
        else {
          puVar1[2] = 5;
        }
      }
      else {
        puVar1[2] = 6;
      }
    }
    else {
      puVar1[2] = 7;
    }
    iVar2 = iVar2 + 0x14;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 0x28a);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803748a0(longlong param_1,longlong param_2)
void FUN_1803748a0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  int32_t *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int8_t auStack_268 [32];
  int iStack_248;
  int iStack_244;
  int iStack_240;
  uint64_t uStack_238;
  uint64_t uStack_230;
  uint64_t uStack_228;
  uint64_t uStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  int32_t uStack_1f4;
  int *piStack_1f0;
  longlong lStack_1e8;
  int *piStack_1e0;
  longlong lStack_1d8;
  int aiStack_1d0 [2];
  uint64_t uStack_1c8;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int8_t auStack_1b0 [24];
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  int32_t uStack_158;
  int32_t uStack_154;
  int32_t uStack_150;
  int32_t uStack_14c;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  int32_t uStack_fc;
  int32_t uStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  uint64_t uStack_e8;
  ulonglong uStack_d8;
  
  uStack_d8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_268;
  iStack_244 = 0;
  iStack_240 = (int)((*(int *)(param_1 + 0x2154) >> 0x1f & 3U) + *(int *)(param_1 + 0x2154)) >> 2;
  iVar5 = (int)(*(int *)(param_1 + 0x2158) + (*(int *)(param_1 + 0x2158) >> 0x1f & 3U)) >> 2;
  iStack_248 = iVar5;
  iVar13 = iStack_240;
  if (0 < iStack_240) {
    do {
      iVar16 = 0;
      if (0 < iVar5) {
        do {
          iVar5 = iStack_244 * 4;
          uStack_238 = 0x4cbebc204cbebc20;
          uStack_230 = 0x7f7fffff4cbebc20;
          lVar15 = 4;
          uStack_230._0_4_ = 1e+08;
          uStack_238._4_4_ = 1e+08;
          uStack_238._0_4_ = 1e+08;
          uStack_228 = 0xccbebc20ccbebc20;
          uStack_220 = 0x7f7fffffccbebc20;
          uStack_220._0_4_ = -1e+08;
          uStack_228._4_4_ = -1e+08;
          uStack_228._0_4_ = -1e+08;
          fVar26 = (float)uStack_238;
          fVar29 = uStack_228._4_4_;
          fVar25 = (float)uStack_228;
          fVar30 = (float)uStack_220;
          fVar28 = (float)uStack_230;
          fVar27 = uStack_238._4_4_;
          do {
            iVar13 = 0;
            do {
              lVar11 = *(longlong *)(param_2 + 0x110);
              iVar12 = *(int *)(param_2 + 0x58) * iVar5 + iVar16 * 4 + iVar13;
              uVar9 = (ulonglong)(longlong)iVar12 % (ulonglong)*(uint *)(param_2 + 0x118);
              piVar3 = *(int **)(lVar11 + uVar9 * 8);
              for (piVar4 = piVar3; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 4)) {
                if (iVar12 == *piVar4) {
                  if (piVar4 != (int *)0x0) {
                    lVar14 = *(longlong *)(param_2 + 0x118);
                    piStack_1f0 = piVar4;
                    ppiVar6 = &piStack_1f0;
                    lStack_1e8 = lVar11 + uVar9 * 8;
                    goto LAB_180374a51;
                  }
                  break;
                }
              }
              lVar14 = *(longlong *)(param_2 + 0x118);
              piStack_1e0 = *(int **)(lVar11 + lVar14 * 8);
              ppiVar6 = &piStack_1e0;
              lStack_1d8 = lVar11 + lVar14 * 8;
LAB_180374a51:
              piVar4 = *(int **)(lVar11 + lVar14 * 8);
              if (*ppiVar6 != piVar4) {
                for (; (piVar10 = piVar4, piVar3 != (int *)0x0 &&
                       (piVar10 = piVar3, iVar12 != *piVar3)); piVar3 = *(int **)(piVar3 + 4)) {
                }
                if (piVar10 == piVar4) {
                  uVar7 = FUN_18062b1e0(system_memory_pool_ptr,0x178,8,
                                        CONCAT71((int7)((ulonglong)lVar11 >> 8),3));
                  aiStack_1d0[0] = iVar12;
                  uStack_1c8 = FUN_180372430(uVar7,*(uint64_t *)(param_2 + 0x68));
                  puVar8 = (uint64_t *)FUN_18037f020(param_2 + 0x108,auStack_1b0,aiStack_1d0);
                  uStack_1c0 = *(int32_t *)puVar8;
                  uStack_1bc = *(int32_t *)((longlong)puVar8 + 4);
                  piVar10 = (int *)*puVar8;
                  uStack_1b8 = *(int32_t *)(puVar8 + 1);
                  uStack_1b4 = *(int32_t *)((longlong)puVar8 + 0xc);
                }
                lVar11 = *(longlong *)(piVar10 + 2);
                if (*(float *)(lVar11 + 0x48) != 0.0) {
                  fVar20 = *(float *)(lVar11 + 0x18);
                  fVar17 = *(float *)(lVar11 + 0x28);
                  if (fVar20 <= fVar17) {
                    if (fVar20 < fVar26) {
                      fVar26 = fVar20;
                    }
                    if (*(float *)(lVar11 + 0x1c) < fVar27) {
                      fVar27 = *(float *)(lVar11 + 0x1c);
                    }
                    if (*(float *)(lVar11 + 0x20) < fVar28) {
                      fVar28 = *(float *)(lVar11 + 0x20);
                    }
                    if (fVar25 < fVar17) {
                      uStack_228 = CONCAT44(uStack_228._4_4_,fVar17);
                      fVar25 = fVar17;
                    }
                    fVar20 = *(float *)(lVar11 + 0x2c);
                    if (fVar29 < fVar20) {
                      uStack_228 = CONCAT44(fVar20,(float)uStack_228);
                      fVar29 = fVar20;
                    }
                    fVar20 = *(float *)(lVar11 + 0x30);
                    if (fVar30 < fVar20) {
                      uStack_220 = CONCAT44(uStack_220._4_4_,fVar20);
                      fVar30 = fVar20;
                    }
                  }
                }
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < 4);
            iVar5 = iVar5 + 1;
            uStack_230 = CONCAT44(uStack_230._4_4_,fVar28);
            uStack_238 = CONCAT44(fVar27,fVar26);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          if (fVar25 < fVar26) {
            fVar26 = 0.0;
            fVar27 = 0.0;
            fVar28 = 0.0;
            fVar29 = 0.0;
            fStack_208 = 0.0;
            uVar21 = 0;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0;
            fVar19 = 0.0;
            fVar18 = 0.0;
            fVar17 = 0.0;
            fVar20 = 0.0;
            uStack_238 = 0;
            uStack_230 = 0;
            uStack_228 = 0;
            uStack_220 = 0;
          }
          else {
            fVar20 = 3.4028235e+38;
            fVar18 = (fVar29 + fVar27) * 0.5;
            fVar19 = (fVar25 + fVar26) * 0.5;
            fVar17 = (fVar30 + fVar28) * 0.5;
            uStack_1f4 = 0x7f7fffff;
            fStack_208 = SQRT((fVar29 - fVar18) * (fVar29 - fVar18) +
                              (fVar25 - fVar19) * (fVar25 - fVar19) +
                              (fVar30 - fVar17) * (fVar30 - fVar17));
            uVar21 = (float)uStack_228;
            uVar22 = uStack_228._4_4_;
            uVar23 = (float)uStack_220;
            uVar24 = uStack_220._4_4_;
            fVar29 = uStack_230._4_4_;
            fStack_200 = fVar19;
            fStack_1fc = fVar18;
            fStack_1f8 = fVar17;
          }
          uStack_198 = 0;
          uStack_190 = 0x7f7fffff00000000;
          uStack_178 = 0;
          uStack_170 = 0x7f7fffff00000000;
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_160 = 0;
          uStack_15c = 0;
          uStack_158 = 0;
          uStack_154 = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          uStack_138 = 0;
          uStack_134 = 0;
          uStack_130 = 0;
          uStack_12c = 0;
          uStack_128 = 0;
          uStack_124 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          uStack_ec = 0;
          uStack_e8 = 0;
          uStack_188 = 0;
          uStack_180 = 0x7f7fffff00000000;
          fStack_218 = fVar19;
          fStack_214 = fVar18;
          fStack_210 = fVar17;
          fStack_20c = fVar20;
          FUN_18063ad30(&uStack_198,&uStack_238,&system_data_0300);
          lVar15 = (longlong)(*(int *)(param_2 + 0x60) * iStack_244 + iVar16) * 0x130 +
                   *(longlong *)(param_2 + 0x138);
          *(uint64_t *)(lVar15 + 8) = uStack_198;
          *(uint64_t *)(lVar15 + 0x10) = uStack_190;
          *(uint64_t *)(lVar15 + 0x18) = uStack_188;
          *(uint64_t *)(lVar15 + 0x20) = uStack_180;
          *(uint64_t *)(lVar15 + 0x28) = uStack_178;
          *(uint64_t *)(lVar15 + 0x30) = uStack_170;
          *(ulonglong *)(lVar15 + 0x38) = CONCAT44(uStack_164,uStack_168);
          *(ulonglong *)(lVar15 + 0x40) = CONCAT44(uStack_15c,uStack_160);
          *(ulonglong *)(lVar15 + 0x48) = CONCAT44(uStack_154,uStack_158);
          *(ulonglong *)(lVar15 + 0x50) = CONCAT44(uStack_14c,uStack_150);
          *(ulonglong *)(lVar15 + 0x58) = CONCAT44(uStack_144,uStack_148);
          *(ulonglong *)(lVar15 + 0x60) = CONCAT44(uStack_13c,uStack_140);
          *(ulonglong *)(lVar15 + 0x68) = CONCAT44(uStack_134,uStack_138);
          *(ulonglong *)(lVar15 + 0x70) = CONCAT44(uStack_12c,uStack_130);
          *(ulonglong *)(lVar15 + 0x78) = CONCAT44(uStack_124,uStack_128);
          *(ulonglong *)(lVar15 + 0x80) = CONCAT44(uStack_11c,uStack_120);
          *(ulonglong *)(lVar15 + 0x88) = CONCAT44(uStack_114,uStack_118);
          *(ulonglong *)(lVar15 + 0x90) = CONCAT44(uStack_10c,uStack_110);
          *(int32_t *)(lVar15 + 0x98) = uStack_108;
          *(int32_t *)(lVar15 + 0x9c) = uStack_104;
          *(int32_t *)(lVar15 + 0xa0) = uStack_100;
          *(int32_t *)(lVar15 + 0xa4) = uStack_fc;
          *(int32_t *)(lVar15 + 0xa8) = uStack_f8;
          *(int32_t *)(lVar15 + 0xac) = uStack_f4;
          *(int32_t *)(lVar15 + 0xb0) = uStack_f0;
          *(int32_t *)(lVar15 + 0xb4) = uStack_ec;
          *(uint64_t *)(lVar15 + 0xb8) = uStack_e8;
          lVar15 = *(longlong *)(param_2 + 0x138);
          iVar5 = *(int *)(param_2 + 0x60) * iStack_244 + iVar16;
          iVar16 = iVar16 + 1;
          lVar11 = (longlong)iVar5 * 0x130;
          pfVar1 = (float *)(lVar11 + 0xc0 + lVar15);
          *pfVar1 = fVar26;
          pfVar1[1] = fVar27;
          pfVar1[2] = fVar28;
          pfVar1[3] = fVar29;
          puVar2 = (int32_t *)(lVar11 + 0xd0 + lVar15);
          *puVar2 = uVar21;
          puVar2[1] = uVar22;
          puVar2[2] = uVar23;
          puVar2[3] = uVar24;
          pfVar1 = (float *)(lVar11 + 0xe0 + lVar15);
          *pfVar1 = fVar19;
          pfVar1[1] = fVar18;
          pfVar1[2] = fVar17;
          pfVar1[3] = fVar20;
          *(float *)(lVar11 + 0xf0 + lVar15) = fStack_208;
          iVar5 = iStack_248;
          iVar13 = iStack_240;
        } while (iVar16 < iStack_248);
      }
      iStack_244 = iStack_244 + 1;
    } while (iStack_244 < iVar13);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



