#include "ultra_high_freq_fun_definitions.h"
n//  的语义化别名
#define SystemCore_MessageQueueManager
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
// 03_rendering_part172.c - 4 个函数
// 函数: void function_373d90(int64_t param_1)
void function_373d90(int64_t param_1)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t lVar8;
  function_374050();
  plVar7 = (int64_t *)(param_1 + 0x2160);
  lVar8 = 4;
  do {
    lVar3 = *plVar7;
    uVar5 = 0;
    uVar6 = 0;
    if (plVar7[1] - lVar3 >> 3 != 0) {
      do {
        plVar1 = *(int64_t **)(lVar3 + uVar6);
        if (plVar1 != (int64_t *)0x0) {
          lVar8 = *plVar1;
          if (lVar8 != 0) {
            function_372730(lVar8);
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(lVar8);
          }
          *plVar1 = 0;
          plVar1[2] = (int64_t)&system_data_buffer_ptr;
          if (plVar1[3] == 0) {
            plVar1[3] = 0;
            *(int32_t *)(plVar1 + 5) = 0;
            plVar1[2] = (int64_t)&system_state_ptr;
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(plVar1);
          }
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)(uVar6 + *plVar7) = 0;
        uVar4 = (int)uVar5 + 1;
        lVar3 = *plVar7;
        uVar5 = (uint64_t)uVar4;
        uVar6 = uVar6 + 8;
      } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(plVar7[1] - lVar3 >> 3));
    }
    plVar7[1] = lVar3;
    plVar7 = plVar7 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = param_1 + 0x2280;
  puVar2 = *(uint64_t **)(param_1 + 0x2290);
  if (puVar2 != (uint64_t *)0x0) {
    function_0b9210(lVar8,*puVar2);
    function_0b94f0(puVar2);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  *(int64_t *)lVar8 = lVar8;
  *(int64_t *)(param_1 + 0x2288) = lVar8;
  *(uint64_t *)(param_1 + 0x2290) = 0;
  *(int8_t *)(param_1 + 0x2298) = 0;
  *(uint64_t *)(param_1 + 0x22a0) = 0;
  lVar3 = param_1 + 0x2200;
  function_0b9270(lVar3,*(uint64_t *)(param_1 + 0x2210));
  *(int64_t *)lVar3 = lVar3;
  *(int64_t *)(param_1 + 0x2208) = lVar3;
  *(uint64_t *)(param_1 + 0x2210) = 0;
  *(int8_t *)(param_1 + 0x2218) = 0;
  *(uint64_t *)(param_1 + 0x2220) = 0;
  _Mtx_destroy_in_situ();
  if (*(int64_t **)(param_1 + 0x2308) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x2308) + 0x38))();
  }
  _Mtx_destroy_in_situ();
  function_0b8a30(lVar8);
  _Mtx_destroy_in_situ();
  function_0b9270(lVar3,*(uint64_t *)(param_1 + 0x2210));
  DataTransformer0();
  SystemDataValidator(param_1 + 0x2160,0x20,4,function_046860);
  _Mtx_destroy_in_situ();
  DataTransformer0();
  if (*(int64_t *)(param_1 + 0x20b0) == 0) {
    SystemDataValidator(param_1 + 0xb0,0x20,0x100,function_046860);
    if (*(int64_t *)(param_1 + 0x88) == 0) {
      return;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_374050(int64_t param_1)
void function_374050(int64_t param_1)
{
  int64_t lVar1;
  int *piVar2;
  uint uVar3;
  int64_t lVar4;
  int **ppiVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int iVar10;
  int iVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint64_t uVar18;
  int64_t lVar19;
  int iStackX_10;
  int64_t lStack_80;
  int64_t lStack_78;
  int *piStack_68;
  int64_t lStack_60;
  int *piStack_58;
  int64_t lStack_50;
  plVar14 = (int64_t *)(param_1 + 0x2160);
  lStack_78 = 4;
  do {
    lVar4 = (int64_t)(int)(plVar14[1] - *plVar14 >> 3);
    lStack_80 = 0;
    if (0 < lVar4) {
      do {
        plVar9 = *(int64_t **)(*plVar14 + lStack_80 * 8);
        iVar16 = (int)plVar9[6];
        if ((((iVar16 == -1) ||
             (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x2148) + 0x60b80), lVar1 == 0)) ||
            (*(char *)(*(int64_t *)(lVar1 + 0x80 + (int64_t)iVar16 * 8) + 0x152) != '\0')) &&
           (lVar1 = *plVar9, -1 < *(int *)(lVar1 + 0x50))) {
          if (*(char *)(lVar1 + 0x141) == '\0') {
            iVar16 = (int)((*(int64_t *)(lVar1 + 0x88) - *(int64_t *)(lVar1 + 0x80)) / 0x28);
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
                  uVar18 = (uint64_t)uVar3;
                  do {
                    iVar10 = iStackX_10 * 4;
                    lVar19 = 4;
                    do {
                      iVar11 = 0;
                      do {
                        uVar13 = (uint64_t)(uint)(iVar17 + iVar11);
                        lVar6 = *(int64_t *)(lVar1 + 0x110);
                        iVar15 = iVar10 * *(int *)(lVar1 + 0x58) + iVar17 + iVar11;
                        uVar8 = (uint64_t)(int64_t)iVar15 % (uint64_t)*(uint *)(lVar1 + 0x118);
                        for (piVar2 = *(int **)(lVar6 + uVar8 * 8); piVar2 != (int *)0x0;
                            piVar2 = *(int **)(piVar2 + 4)) {
                          if (iVar15 == *piVar2) {
                            if (piVar2 != (int *)0x0) {
                              lVar7 = *(int64_t *)(lVar1 + 0x118);
                              piStack_68 = piVar2;
                              ppiVar5 = &piStack_68;
                              lStack_60 = lVar6 + uVar8 * 8;
                              goto LAB_180374230;
                            }
                            break;
                          }
                        }
                        lVar7 = *(int64_t *)(lVar1 + 0x118);
                        piStack_58 = *(int **)(lVar6 + lVar7 * 8);
                        ppiVar5 = &piStack_58;
                        lStack_50 = lVar6 + lVar7 * 8;
LAB_180374230:
                        if ((*ppiVar5 != *(int **)(lVar6 + lVar7 * 8)) &&
                           (lVar6 = SystemCore_SecurityManager(lVar1,iVar10,uVar13),
                           *(int64_t *)(lVar6 + 0x108) != 0)) {
                          lVar7 = SystemCore_SecurityManager(lVar1,iVar10,uVar13 & 0xffffffff);
                          for (lVar6 = *(int64_t *)(lVar7 + 0x120); lVar6 != lVar7 + 0x118;
                              lVar6 = SystemFunction_00018066bd70(lVar6)) {
                            (**(code **)(**(int64_t **)(lVar6 + 0x20) + 0x1b0))();
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
      lVar1 = *(int64_t *)(param_1 + 0x2308);
      iStackX_10 = 0;
      lVar19 = *(int64_t *)(lVar1 + 200);
      if (*(int64_t *)(lVar1 + 0xd0) - lVar19 >> 3 != 0) {
        do {
          uVar8 = 0;
          lVar19 = *(int64_t *)(lVar4 + lVar19);
          lVar6 = *(int64_t *)(lVar19 + 0x10);
          uVar18 = uVar8;
          if (*(int64_t *)(lVar19 + 0x18) - lVar6 >> 4 != 0) {
            do {
              uVar12 = 0;
              lVar6 = **(int64_t **)(uVar18 + 8 + lVar6);
              uVar13 = uVar12;
              if (*(int64_t *)(lVar6 + 0x40) - *(int64_t *)(lVar6 + 0x38) >> 4 != 0) {
                do {
                  function_077040(*(uint64_t *)(uVar13 + *(int64_t *)(lVar6 + 0x38)));
                  uVar3 = (int)uVar12 + 1;
                  uVar12 = (uint64_t)uVar3;
                  uVar13 = uVar13 + 0x10;
                } while ((uint64_t)(int64_t)(int)uVar3 <
                         (uint64_t)(*(int64_t *)(lVar6 + 0x40) - *(int64_t *)(lVar6 + 0x38) >> 4)
                        );
              }
              lVar6 = *(int64_t *)(lVar19 + 0x10);
              uVar3 = (int)uVar8 + 1;
              uVar8 = (uint64_t)uVar3;
              uVar18 = uVar18 + 0x10;
            } while ((uint64_t)(int64_t)(int)uVar3 <
                     (uint64_t)(*(int64_t *)(lVar19 + 0x18) - lVar6 >> 4));
          }
          function_46c430(*(uint64_t *)(*(int64_t *)(lVar1 + 200) + lVar4));
          lVar4 = lVar4 + 8;
          lVar19 = *(int64_t *)(lVar1 + 200);
          iStackX_10 = iStackX_10 + 1;
        } while ((uint64_t)(int64_t)iStackX_10 <
                 (uint64_t)(*(int64_t *)(lVar1 + 0xd0) - lVar19 >> 3));
      }
      lVar4 = 0;
      plVar14 = *(int64_t **)(param_1 + 0x20d8);
      plVar9 = *(int64_t **)(param_1 + 0x20d0);
      if ((int64_t)plVar14 - (int64_t)plVar9 >> 3 != 0) {
        iVar16 = 0;
        do {
          plVar14 = *(int64_t **)(*(int64_t *)(param_1 + 0x2148) + 0x318);
          (**(code **)(*plVar14 + 0x90))
                    (plVar14,*(uint64_t *)(lVar4 + *(int64_t *)(param_1 + 0x20d0)));
          plVar14 = *(int64_t **)(param_1 + 0x20d8);
          lVar4 = lVar4 + 8;
          plVar9 = *(int64_t **)(param_1 + 0x20d0);
          iVar16 = iVar16 + 1;
        } while ((uint64_t)(int64_t)iVar16 <
                 (uint64_t)((int64_t)plVar14 - (int64_t)plVar9 >> 3));
      }
      if (plVar9 == plVar14) {
        *(int64_t **)(param_1 + 0x20d8) = plVar9;
      }
      else {
        do {
          if ((int64_t *)*plVar9 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar9 + 0x38))();
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
// 函数: void function_374530(int64_t param_1)
void function_374530(int64_t param_1)
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
// 函数: void function_3748a0(int64_t param_1,int64_t param_2)
void function_3748a0(int64_t param_1,int64_t param_2)
{
  float *pfVar1;
  int32_t *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int **ppiVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int *piVar10;
  int64_t lVar11;
  int iVar12;
  int iVar13;
  int64_t lVar14;
  int64_t lVar15;
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
  int8_t stack_array_268 [32];
  int iStack_248;
  int iStack_244;
  int iStack_240;
  uint64_t local_var_238;
  uint64_t local_var_230;
  uint64_t local_var_228;
  uint64_t local_var_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  int32_t local_var_1f4;
  int *piStack_1f0;
  int64_t lStack_1e8;
  int *piStack_1e0;
  int64_t lStack_1d8;
  int aiStack_1d0 [2];
  uint64_t local_var_1c8;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  int32_t local_var_1b4;
  int8_t stack_array_1b0 [24];
  uint64_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int32_t local_var_168;
  int32_t local_var_164;
  int32_t local_var_160;
  int32_t local_var_15c;
  int32_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  int32_t local_var_fc;
  int32_t local_var_f8;
  int32_t local_var_f4;
  int32_t local_var_f0;
  int32_t local_var_ec;
  uint64_t local_var_e8;
  uint64_t local_var_d8;
  local_var_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_268;
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
          local_var_238 = 0x4cbebc204cbebc20;
          local_var_230 = 0x7f7fffff4cbebc20;
          lVar15 = 4;
          local_var_230._0_4_ = 1e+08;
          local_var_238._4_4_ = 1e+08;
          local_var_238._0_4_ = 1e+08;
          local_var_228 = 0xccbebc20ccbebc20;
          local_var_220 = 0x7f7fffffccbebc20;
          local_var_220._0_4_ = -1e+08;
          local_var_228._4_4_ = -1e+08;
          local_var_228._0_4_ = -1e+08;
          fVar26 = (float)local_var_238;
          fVar29 = local_var_228._4_4_;
          fVar25 = (float)local_var_228;
          fVar30 = (float)local_var_220;
          fVar28 = (float)local_var_230;
          fVar27 = local_var_238._4_4_;
          do {
            iVar13 = 0;
            do {
              lVar11 = *(int64_t *)(param_2 + 0x110);
              iVar12 = *(int *)(param_2 + 0x58) * iVar5 + iVar16 * 4 + iVar13;
              uVar9 = (uint64_t)(int64_t)iVar12 % (uint64_t)*(uint *)(param_2 + 0x118);
              piVar3 = *(int **)(lVar11 + uVar9 * 8);
              for (piVar4 = piVar3; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 4)) {
                if (iVar12 == *piVar4) {
                  if (piVar4 != (int *)0x0) {
                    lVar14 = *(int64_t *)(param_2 + 0x118);
                    piStack_1f0 = piVar4;
                    ppiVar6 = &piStack_1f0;
                    lStack_1e8 = lVar11 + uVar9 * 8;
                    goto LAB_180374a51;
                  }
                  break;
                }
              }
              lVar14 = *(int64_t *)(param_2 + 0x118);
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
                  uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x178,8,
                                        CONCAT71((int7)((uint64_t)lVar11 >> 8),3));
                  aiStack_1d0[0] = iVar12;
                  local_var_1c8 = SystemCore_SignalHandler(uVar7,*(uint64_t *)(param_2 + 0x68));
                  puVar8 = (uint64_t *)SystemCore_MessageQueueManager(param_2 + 0x108,stack_array_1b0,aiStack_1d0);
                  local_var_1c0 = *(int32_t *)puVar8;
                  local_var_1bc = *(int32_t *)((int64_t)puVar8 + 4);
                  piVar10 = (int *)*puVar8;
                  local_var_1b8 = *(int32_t *)(puVar8 + 1);
                  local_var_1b4 = *(int32_t *)((int64_t)puVar8 + 0xc);
                }
                lVar11 = *(int64_t *)(piVar10 + 2);
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
                      local_var_228 = CONCAT44(local_var_228._4_4_,fVar17);
                      fVar25 = fVar17;
                    }
                    fVar20 = *(float *)(lVar11 + 0x2c);
                    if (fVar29 < fVar20) {
                      local_var_228 = CONCAT44(fVar20,(float)local_var_228);
                      fVar29 = fVar20;
                    }
                    fVar20 = *(float *)(lVar11 + 0x30);
                    if (fVar30 < fVar20) {
                      local_var_220 = CONCAT44(local_var_220._4_4_,fVar20);
                      fVar30 = fVar20;
                    }
                  }
                }
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < 4);
            iVar5 = iVar5 + 1;
            local_var_230 = CONCAT44(local_var_230._4_4_,fVar28);
            local_var_238 = CONCAT44(fVar27,fVar26);
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
            local_var_238 = 0;
            local_var_230 = 0;
            local_var_228 = 0;
            local_var_220 = 0;
          }
          else {
            fVar20 = 3.4028235e+38;
            fVar18 = (fVar29 + fVar27) * 0.5;
            fVar19 = (fVar25 + fVar26) * 0.5;
            fVar17 = (fVar30 + fVar28) * 0.5;
            local_var_1f4 = 0x7f7fffff;
            fStack_208 = SQRT((fVar29 - fVar18) * (fVar29 - fVar18) +
                              (fVar25 - fVar19) * (fVar25 - fVar19) +
                              (fVar30 - fVar17) * (fVar30 - fVar17));
            uVar21 = (float)local_var_228;
            uVar22 = local_var_228._4_4_;
            uVar23 = (float)local_var_220;
            uVar24 = local_var_220._4_4_;
            fVar29 = local_var_230._4_4_;
            fStack_200 = fVar19;
            fStack_1fc = fVar18;
            fStack_1f8 = fVar17;
          }
          local_var_198 = 0;
          local_var_190 = 0x7f7fffff00000000;
          local_var_178 = 0;
          local_var_170 = 0x7f7fffff00000000;
          local_var_168 = 0;
          local_var_164 = 0;
          local_var_160 = 0;
          local_var_15c = 0;
          local_var_158 = 0;
          local_var_154 = 0;
          local_var_150 = 0;
          local_var_14c = 0;
          local_var_148 = 0;
          local_var_144 = 0;
          local_var_140 = 0;
          local_var_13c = 0;
          local_var_138 = 0;
          local_var_134 = 0;
          local_var_130 = 0;
          local_var_12c = 0;
          local_var_128 = 0;
          local_var_124 = 0;
          local_var_120 = 0;
          local_var_11c = 0;
          local_var_118 = 0;
          local_var_114 = 0;
          local_var_110 = 0;
          local_var_10c = 0;
          local_var_108 = 0;
          local_var_104 = 0;
          local_var_100 = 0;
          local_var_fc = 0;
          local_var_f8 = 0;
          local_var_f4 = 0;
          local_var_f0 = 0;
          local_var_ec = 0;
          local_var_e8 = 0;
          local_var_188 = 0;
          local_var_180 = 0x7f7fffff00000000;
          fStack_218 = fVar19;
          fStack_214 = fVar18;
          fStack_210 = fVar17;
          fStack_20c = fVar20;
          UltraHighFreq_DataProcessor1(&local_var_198,&local_var_238,&system_data_0300);
          lVar15 = (int64_t)(*(int *)(param_2 + 0x60) * iStack_244 + iVar16) * 0x130 +
                   *(int64_t *)(param_2 + 0x138);
          *(uint64_t *)(lVar15 + 8) = local_var_198;
          *(uint64_t *)(lVar15 + 0x10) = local_var_190;
          *(uint64_t *)(lVar15 + 0x18) = local_var_188;
          *(uint64_t *)(lVar15 + 0x20) = local_var_180;
          *(uint64_t *)(lVar15 + 0x28) = local_var_178;
          *(uint64_t *)(lVar15 + 0x30) = local_var_170;
          *(uint64_t *)(lVar15 + 0x38) = CONCAT44(local_var_164,local_var_168);
          *(uint64_t *)(lVar15 + 0x40) = CONCAT44(local_var_15c,local_var_160);
          *(uint64_t *)(lVar15 + 0x48) = CONCAT44(local_var_154,local_var_158);
          *(uint64_t *)(lVar15 + 0x50) = CONCAT44(local_var_14c,local_var_150);
          *(uint64_t *)(lVar15 + 0x58) = CONCAT44(local_var_144,local_var_148);
          *(uint64_t *)(lVar15 + 0x60) = CONCAT44(local_var_13c,local_var_140);
          *(uint64_t *)(lVar15 + 0x68) = CONCAT44(local_var_134,local_var_138);
          *(uint64_t *)(lVar15 + 0x70) = CONCAT44(local_var_12c,local_var_130);
          *(uint64_t *)(lVar15 + 0x78) = CONCAT44(local_var_124,local_var_128);
          *(uint64_t *)(lVar15 + 0x80) = CONCAT44(local_var_11c,local_var_120);
          *(uint64_t *)(lVar15 + 0x88) = CONCAT44(local_var_114,local_var_118);
          *(uint64_t *)(lVar15 + 0x90) = CONCAT44(local_var_10c,local_var_110);
          *(int32_t *)(lVar15 + 0x98) = local_var_108;
          *(int32_t *)(lVar15 + 0x9c) = local_var_104;
          *(int32_t *)(lVar15 + 0xa0) = local_var_100;
          *(int32_t *)(lVar15 + 0xa4) = local_var_fc;
          *(int32_t *)(lVar15 + 0xa8) = local_var_f8;
          *(int32_t *)(lVar15 + 0xac) = local_var_f4;
          *(int32_t *)(lVar15 + 0xb0) = local_var_f0;
          *(int32_t *)(lVar15 + 0xb4) = local_var_ec;
          *(uint64_t *)(lVar15 + 0xb8) = local_var_e8;
          lVar15 = *(int64_t *)(param_2 + 0x138);
          iVar5 = *(int *)(param_2 + 0x60) * iStack_244 + iVar16;
          iVar16 = iVar16 + 1;
          lVar11 = (int64_t)iVar5 * 0x130;
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
  SystemSecurityChecker(local_var_d8 ^ (uint64_t)stack_array_268);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address