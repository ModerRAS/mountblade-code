#include "ultra_high_freq_fun_definitions.h"
// $fun 的语义化别名
#define $alias_name $fun
#define StatusChecker System_StatusChecker  // 状态检查器
// 99_part_09_part033.c - 1 个函数
// 函数: void function_5ccf90(int64_t *param_1)
void function_5ccf90(int64_t *param_1)
{
  int64_t *plVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  float *pfVar7;
  int *piVar8;
  char *pcVar9;
  byte *pbVar10;
  int64_t lVar11;
  float *pfVar12;
  uint64_t uVar13;
  uint uVar14;
  byte bVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  uVar14 = *(uint *)(param_1 + 2);
  bVar15 = (byte)((uint)*(int32_t *)(*param_1 + 0x564) >> 0x1f) ^ 1;
  if ((uVar14 & 0x20) == 0) {
    uVar14 = uVar14 | 0x20;
    lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = lVar6;
    *(uint *)(param_1 + 2) = uVar14;
  }
  else {
    lVar6 = param_1[0x15];
  }
  if (lVar6 == 0) {
LAB_1805cd0a2:
    bVar2 = false;
  }
  else {
    if ((uVar14 & 0x20) == 0) {
      uVar14 = uVar14 | 0x20;
      param_1[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
      *(uint *)(param_1 + 2) = uVar14;
      lVar6 = param_1[0x15];
    }
    if ((*(byte *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)) &
        0x40) == 0) goto LAB_1805cd0a2;
    if ((uVar14 >> 9 & 1) == 0) {
      Function_9c5e4d1b(param_1 + 1);
    }
    if ((char)param_1[0x20] == '\0') goto LAB_1805cd0a2;
    if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
      bVar3 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((int64_t)param_1 + 0x11c) = bVar3;
    }
    else {
      bVar3 = *(byte *)((int64_t)param_1 + 0x11c);
    }
    if (bVar3 != 0) goto LAB_1805cd0a2;
    bVar2 = true;
  }
  *(int32_t *)(param_1 + 0x405) = 0;
  if (((bVar2) || ((*(uint *)((int64_t)param_1 + 0x209c) >> 2 & 1) == 0)) ||
     (lVar6 = Function_ab0c15dc(param_1 + 1), lVar6 == 0)) {
    if ((*(uint *)(param_1 + 2) & 0x4000) == 0) {
      function_5d53a0(param_1 + 1);
    }
    if ((*(char *)((int64_t)param_1 + 0xc3) != '\0') && ((*(byte *)(param_1 + 0x269) & 2) != 0)) {
      if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
        lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
        param_1[0x15] = lVar6;
        *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
      }
      else {
        lVar6 = param_1[0x15];
      }
      if ((((lVar6 == 0) || (lVar6 = Function_74f39efc(param_1 + 1), *(int *)(lVar6 + 0x30) < 1))
          || (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                         *(int64_t *)(lVar6 + 0xd0)) >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) < 1))
             )) || (lVar6 = Function_74f39efc(param_1 + 1),
                   (*(byte *)((int64_t)
                              *(int *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                                      *(int64_t *)(lVar6 + 0xd0)) * 0x170 + 0x140 + system_system_config)
                   & 0x10) == 0)) {
        cVar4 = Function_75a4df18(param_1);
        if (cVar4 == '\0') {
          Function_7ed28597(param_1,0x4000);
        }
        else {
          RenderingSystem_DrawCallManager(param_1);
        }
        goto DataValidator_Checker;
      }
    }
    if (bVar2) {
LAB_1805cd41e:
      lVar6 = Function_ab0c15dc(param_1 + 1);
      if (lVar6 != 0) {
        if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
          Function_9c5e4d1b(param_1 + 1);
        }
        if (param_1[0x1e] != 0) {
          if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
            lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
            param_1[0x15] = lVar6;
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
          }
          else {
            lVar6 = param_1[0x15];
          }
          if ((((lVar6 == 0) ||
               (lVar6 = Function_74f39efc(param_1 + 1), *(int *)(lVar6 + 0x30) < 1)) ||
              (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                          *(int64_t *)(lVar6 + 0xd0)) >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) < 1)
               ))) || (lVar6 = Function_74f39efc(param_1 + 1),
                      (*(byte *)((int64_t)
                                 *(int *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                                         *(int64_t *)(lVar6 + 0xd0)) * 0x170 + 0x140 +
                                system_system_config) & 0x10) == 0)) {
            if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
              Function_9c5e4d1b(param_1 + 1);
            }
            if (((((*(byte *)((int64_t)*(int *)(param_1[0x1e] + 0xf0) * 0xa0 + 0x50 +
                             *(int64_t *)(param_1[0x1e] + 0xd0)) & 1) != 0) &&
                 (pfVar12 = (float *)SystemCore_ConfigLoader(param_1 + 1), *pfVar12 != 0.0)) && (bVar15 == 0))
               && (pcVar9 = (char *)SystemCore_NetworkHandler(param_1 + 1), *pcVar9 == '\0')) {
              lVar6 = *param_1;
              cVar4 = Function_0b1478c2(lVar6);
              if (cVar4 == '\0') {
                fVar17 = *(float *)(lVar6 + 0x2e0);
              }
              else {
                fVar17 = *(float *)(lVar6 + 0x2dc);
              }
              function_5b73f0(param_1 + 1);
              uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
              uVar14 = uVar14 >> 0x11 ^ uVar14;
              uVar14 = uVar14 << 5 ^ uVar14;
              *(uint *)(param_1 + 0x272) = uVar14;
              piVar8 = (int *)SystemCore_ResourceHandler0(param_1 + 1);
              fVar18 = (float)*piVar8;
              if (fVar18 <= 1.0) {
                fVar18 = 1.0;
              }
              if (((float)(uVar14 - 1) * 2.3283064e-10) / fVar18 < fVar17) {
                piVar8 = (int *)SystemCore_Executor(param_1 + 1);
                if (*piVar8 == 1) {
                  uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
                  uVar14 = uVar14 >> 0x11 ^ uVar14;
                  uVar14 = uVar14 << 5 ^ uVar14;
                  *(uint *)(param_1 + 0x272) = uVar14;
                  fVar17 = *(float *)(*param_1 + 0x32c) * 0.5;
                  if (0.95 <= fVar17) {
                    fVar17 = 0.95;
                  }
                  if (fVar17 <= (float)(uVar14 - 1) * 2.3283064e-10) goto LAB_1805cd645;
LAB_1805cd6a0:
                  cVar4 = Function_02036713(param_1);
                  if ((cVar4 != '\0') || (cVar4 = function_5d06b0(), cVar4 == '\0')) {
                    lVar6 = SystemCore_MemoryAllocator(param_1 + 1);
                    if ((lVar6 != 0) &&
                       ((fVar17 = *(float *)(*param_1 + 0x2e4),
                        uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
                        uVar14 = uVar14 >> 0x11 ^ uVar14, uVar14 = uVar14 << 5 ^ uVar14,
                        *(uint *)(param_1 + 0x272) = uVar14,
                        (float)(uVar14 - 1) * 2.3283064e-10 < fVar17 * 0.5 &&
                        (lVar6 = SystemCore_MemoryAllocator(param_1 + 1), *(int *)(lVar6 + 0x1fc) == 2)))) {
                      plVar1 = *(int64_t **)(lVar6 + 0x590);
                      if (((int)plVar1[0x493] != -1) &&
                         (((*(int *)((int64_t)(int)plVar1[0x493] * 0x68 + 0x58 + system_system_config) ==
                            0x14 && (fVar17 = (float)(**(code **)(*plVar1 + 0x90))(plVar1,1),
                                    0.1 <= fVar17)) &&
                          (fVar17 = (float)(**(code **)(**(int64_t **)(lVar6 + 0x590) + 0x90))
                                                     (*(int64_t **)(lVar6 + 0x590),1), fVar17 < 0.4
                          )))) {
                        if (*(int **)(lVar6 + 0x280) == (int *)0x0) {
                          iVar5 = -1;
                        }
                        else {
                          iVar5 = **(int **)(lVar6 + 0x280);
                        }
                        if (iVar5 == 0) {
                          lVar6 = *param_1;
LAB_1805cd82e:
                          iVar5 = CoreSystem_OperationHandler(lVar6 + 0x28,0);
                          if (iVar5 == -1) goto LAB_1805cd7f2;
                          uVar14 = 0x100;
                        }
                        else if (iVar5 == 1) {
                          lVar6 = *param_1;
                          iVar5 = CoreSystem_OperationHandler(lVar6 + 0x28,1);
                          if (iVar5 == -1) goto LAB_1805cd82e;
                          uVar14 = 0x200;
                        }
                        else {
                          if (iVar5 == 2) {
                            iVar5 = CoreSystem_OperationHandler(*param_1 + 0x28,3);
                            uVar14 = 0x80;
                          }
                          else {
                            if (iVar5 != 3) goto LAB_1805cd7f2;
                            iVar5 = CoreSystem_OperationHandler(*param_1 + 0x28,2);
                            uVar14 = 0x40;
                          }
                          if (iVar5 == -1) {
                            uVar14 = 0;
                          }
                          if (uVar14 == 0) goto LAB_1805cd7f2;
                        }
                        param_1[0x2e9] =
                             *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8);
                        *(uint *)((int64_t)param_1 + 0x158c) =
                             *(uint *)((int64_t)param_1 + 0x158c) | uVar14;
                        *(int32_t *)((int64_t)param_1 + 0x178c) = 7;
                        *(int8_t *)(param_1 + 0x2e4) = 0;
                        goto DataValidator_Checker;
                      }
                    }
LAB_1805cd7f2:
                    Function_7ed28597(param_1,0x2000);
                    goto DataValidator_Checker;
                  }
                }
                else {
LAB_1805cd645:
                  piVar8 = (int *)SystemCore_Executor(param_1 + 1);
                  if (*piVar8 == 2) {
                    uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
                    uVar14 = uVar14 >> 0x11 ^ uVar14;
                    uVar14 = uVar14 << 5 ^ uVar14;
                    *(uint *)(param_1 + 0x272) = uVar14;
                    fVar17 = *(float *)(*param_1 + 0x32c);
                    if (0.95 <= fVar17) {
                      fVar17 = 0.95;
                    }
                    if ((float)(uVar14 - 1) * 2.3283064e-10 < fVar17) goto LAB_1805cd6a0;
                  }
                }
              }
            }
          }
        }
      }
      if ((!bVar2) && ((*(byte *)(*param_1 + 0x56c) & 0x10) != 0)) {
        if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
          Function_9c5e4d1b(param_1 + 1);
        }
        if (param_1[0x1e] == 0) {
          if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
            lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
            param_1[0x15] = lVar6;
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
          }
          else {
            lVar6 = param_1[0x15];
          }
          if ((((lVar6 == 0) ||
               (lVar6 = Function_74f39efc(param_1 + 1), *(int *)(lVar6 + 0x30) < 1)) ||
              (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                          *(int64_t *)(lVar6 + 0xd0)) >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) < 1)
               ))) && ((pfVar12 = (float *)SystemCore_ConfigLoader(param_1 + 1), *pfVar12 != 0.0 &&
                       ((piVar8 = (int *)SystemCore_Executor(param_1 + 1), *piVar8 == 1 ||
                        (piVar8 = (int *)SystemCore_Executor(param_1 + 1), *piVar8 == 2)))))) {
            uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
            uVar14 = uVar14 >> 0x11 ^ uVar14;
            uVar14 = uVar14 << 5 ^ uVar14;
            *(uint *)(param_1 + 0x272) = uVar14;
            SystemCore_ResourceHandler0(param_1 + 1);
            powf((float)(uVar14 - 1) * 2.3283064e-10);
            piVar8 = (int *)SystemCore_Executor(param_1 + 1);
            if (*piVar8 == 1) {
              fVar17 = 0.5;
            }
            else {
              fVar17 = 1.0;
            }
            fVar17 = fVar17 * *(float *)(*param_1 + 0x32c);
            if (0.95 <= fVar17) {
              fVar17 = 0.95;
            }
            if ((extraout_XMM0_Da < fVar17) &&
               ((piVar8 = (int *)SystemCore_ResourceHandler0(param_1 + 1), 1 < *piVar8 ||
                (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8) -
                              param_1[0x2de]) * 1e-05)))) {
              uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
              uVar14 = uVar14 >> 0x11 ^ uVar14;
              uVar14 = uVar14 << 5 ^ uVar14;
              *(uint *)(param_1 + 0x272) = uVar14;
              param_1[0x2eb] =
                   *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ec] * 8) -
                   (int64_t)(-129999.99 - (float)(uVar14 - 1) * 4.656613e-05);
              *(int32_t *)((int64_t)param_1 + 0x178c) = 6;
              goto DataValidator_Checker;
            }
          }
        }
      }
      uVar14 = *(uint *)(param_1 + 2);
      if ((uVar14 & 0x20) == 0) {
        uVar14 = uVar14 | 0x20;
        lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
        param_1[0x15] = lVar6;
        *(uint *)(param_1 + 2) = uVar14;
      }
      else {
        lVar6 = param_1[0x15];
      }
      if (lVar6 == 0) {
LAB_1805cdb67:
        if ((bVar15 == 0) && (pfVar12 = (float *)function_5b6a70(param_1 + 1), *pfVar12 <= 0.70710677)
           ) goto LAB_1805cdf8d;
        if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
          SystemCore_Validator(param_1 + 1);
        }
        if ((*(char *)((int64_t)param_1 + 0xd4) == '\0') ||
           (((param_1[0x41e] == 0 ||
             ((1 < (int)param_1[0x295] - 5U &&
              (((*(byte *)((int64_t)param_1 + 0x209c) & 1) == 0 ||
               ((*(byte *)(param_1 + 0x413) & 1) == 0)))))) &&
            (cVar4 = function_5d06b0(param_1), cVar4 != '\0')))) goto LAB_1805cdf8d;
        if (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2dd] * 8) -
                         param_1[0x2dc]) * 1e-05) {
          cVar4 = Function_02036713(param_1);
          if (((cVar4 == '\0') &&
              (pfVar12 = (float *)function_5b6b40(param_1 + 1), 0.0 < *pfVar12 || *pfVar12 == 0.0)) &&
             ((int)param_1[0x295] != 3)) {
            pbVar10 = (byte *)SystemCore_NetworkHandler(param_1 + 1);
            if (bVar15 == *pbVar10) {
              piVar8 = (int *)SystemCore_ResourceHandler0(param_1 + 1);
              fVar17 = (float)*piVar8;
              if (fVar17 <= 1.0) {
                fVar17 = 1.0;
              }
            }
            else {
              fVar17 = 0.3;
            }
            fVar18 = *(float *)(*param_1 + 0x350);
            uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
            uVar14 = uVar14 >> 0x11 ^ uVar14;
            uVar14 = uVar14 << 5 ^ uVar14;
            *(uint *)(param_1 + 0x272) = uVar14;
            if (fVar18 <= (float)(uVar14 - 1) * 2.3283064e-10 * fVar17) goto LAB_1805cde99;
          }
          cVar4 = StatusChecker(param_1);
          if (cVar4 != '\0') {
            uVar14 = *(uint *)(param_1 + 2);
            if ((uVar14 & 0x40) == 0) {
              function_5d4040(param_1 + 1);
              uVar14 = *(uint *)(param_1 + 2);
            }
            if ((uVar14 >> 0x19 & 1) == 0) {
              fVar17 = *(float *)(*(int64_t *)param_1[1] + 0x7dc);
              *(float *)((int64_t)param_1 + 0xb4) = fVar17;
              *(uint *)(param_1 + 2) = uVar14 | 0x2000000;
            }
            else {
              fVar17 = *(float *)((int64_t)param_1 + 0xb4);
            }
            if (((*(float *)((int64_t)param_1 + 0xbc) <= fVar17 &&
                  fVar17 != *(float *)((int64_t)param_1 + 0xbc)) &&
                (lVar6 = Function_74f39efc(param_1 + 1), lVar6 != 0)) &&
               ((lVar6 = Function_74f39efc(param_1 + 1), 0 < *(int *)(lVar6 + 0x30) &&
                (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                            *(int64_t *)(lVar6 + 0xd0)) >> 9 & 1) == 0 ||
                 (0 < *(short *)(lVar6 + 8))))))) {
              lVar6 = Function_74f39efc(param_1 + 1);
              lVar11 = Function_74f39efc(param_1 + 1);
              if (((float)*(int *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x7c +
                                  *(int64_t *)(lVar11 + 0xd0)) * 5.0 <
                   (float)*(int *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x78 +
                                  *(int64_t *)(lVar6 + 0xd0))) ||
                 (fVar17 = *(float *)(*param_1 + 0x2f8),
                 uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
                 uVar14 = uVar14 >> 0x11 ^ uVar14, uVar14 = uVar14 << 5 ^ uVar14,
                 *(uint *)(param_1 + 0x272) = uVar14, (float)(uVar14 - 1) * 2.3283064e-10 < fVar17))
              {
                *(uint *)(param_1 + 0x27a) = *(uint *)(param_1 + 0x27a) | 0x8000;
                *(int32_t *)((int64_t)param_1 + 0x178c) = 10;
                goto DataValidator_Checker;
              }
            }
          }
          pfVar12 = (float *)UltraHighFreq_RenderingProcessor1(param_1 + 1);
          if (1000.0 < *pfVar12 || *pfVar12 == 1000.0) {
            lVar6 = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8);
          }
          else {
            pfVar12 = (float *)UltraHighFreq_RenderingProcessor1(param_1 + 1);
            lVar6 = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8) -
                    (int64_t)(*pfVar12 * -100000.0);
          }
          param_1[0x2e9] = lVar6;
          *(int32_t *)((int64_t)param_1 + 0x178c) = 7;
          *(int8_t *)(param_1 + 0x2e4) = 0;
          *(int32_t *)(param_1 + 0x2f1) = 0;
          param_1[0x2ed] =
               *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) +
               -0x8000000000000000;
          goto DataValidator_Checker;
        }
LAB_1805cde99:
        if ((int)param_1[0x295] != 3) {
          pbVar10 = (byte *)SystemCore_NetworkHandler(param_1 + 1);
          if ((bVar15 == *pbVar10) &&
             (pfVar12 = (float *)function_5b6b40(param_1 + 1), 0.0 < *pfVar12 || *pfVar12 == 0.0)) {
            if ((((int)param_1[0x284] == 1) ||
                (((bVar15 == 0 || ((int)param_1[0x295] == 1)) ||
                 (pcVar9 = (char *)SystemCore_NetworkHandler(param_1 + 1), *pcVar9 != '\0')))) &&
               ((piVar8 = (int *)SystemCore_ResourceHandler0(param_1 + 1), 1 < *piVar8 ||
                (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8) -
                              param_1[0x2de]) * 1e-05)))) goto LAB_1805cdf27;
            goto LAB_1805cdf8d;
          }
          goto DataValidator_Checker;
        }
      }
      else {
        if ((uVar14 & 0x20) == 0) {
          uVar14 = uVar14 | 0x20;
          param_1[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
          *(uint *)(param_1 + 2) = uVar14;
          lVar6 = param_1[0x15];
        }
        if ((*(int *)(lVar6 + 0x30) < 1) ||
           (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)
                       ) >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) < 1)))) goto LAB_1805cdb67;
        if ((uVar14 & 0x20) == 0) {
          param_1[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
          *(uint *)(param_1 + 2) = uVar14 | 0x20;
          lVar6 = param_1[0x15];
        }
        if ((*(byte *)((int64_t)
                       *(int *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                               *(int64_t *)(lVar6 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10
            ) == 0) goto LAB_1805cdb67;
LAB_1805cdf8d:
        if (*(int *)((int64_t)param_1 + 0x178c) == 9) goto DataValidator_Checker;
      }
      *(int32_t *)((int64_t)param_1 + 0x178c) = 1;
    }
    else {
      if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
        SystemCore_Validator(param_1 + 1);
      }
      if (*(float *)(param_1 + 0x1b) == 0.0) goto LAB_1805cd41e;
      if ((((int)param_1[0x284] != 1) && (bVar15 != 0)) && ((int)param_1[0x295] != 1)) {
        if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
          Function_9c5e4d1b(param_1 + 1);
        }
        if ((char)param_1[0x20] == '\0') goto LAB_1805cd41e;
      }
      lVar6 = *param_1;
      cVar4 = Function_0b1478c2(lVar6);
      if (cVar4 == '\0') {
        fVar17 = *(float *)(lVar6 + 0x2e0);
      }
      else {
        fVar17 = *(float *)(lVar6 + 0x2dc);
      }
      uVar14 = *(uint *)(param_1 + 2);
      if (-1 < (char)uVar14) {
        SystemCore_Validator(param_1 + 1);
        uVar14 = *(uint *)(param_1 + 2);
      }
      if ((*(char *)((int64_t)param_1 + 0xd5) == '\0') || (bVar15 == 0)) {
LAB_1805cd360:
        fVar18 = 1.0;
      }
      else {
        if ((uVar14 & 0x20) == 0) {
          lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)param_1[1] + 0x8f8) + 0x9e8);
          param_1[0x15] = lVar6;
          *(uint *)(param_1 + 2) = uVar14 | 0x20;
        }
        else {
          lVar6 = param_1[0x15];
        }
        if (lVar6 == 0) goto LAB_1805cd360;
        lVar6 = Function_74f39efc(param_1 + 1);
        if ((*(byte *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0))
            & 0x40) == 0) {
          pfVar12 = (float *)Function_fe1b7a40(param_1 + 1);
          pfVar7 = (float *)function_5b7580(param_1 + 1);
          if (*pfVar12 <= *pfVar7 * 0.77) goto LAB_1805cd360;
        }
        fVar18 = 0.1;
      }
      uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar14 = uVar14 >> 0x11 ^ uVar14;
      uVar14 = uVar14 << 5 ^ uVar14;
      *(uint *)(param_1 + 0x272) = uVar14;
      if ((*(uint *)(param_1 + 2) & 0x10000000) == 0) {
        function_5d5680(param_1 + 1);
      }
      fVar16 = (float)powf((float)(uVar14 - 1) * 2.3283064e-10);
      if (((fVar18 * fVar17 <= fVar16) ||
          ((piVar8 = (int *)SystemCore_Executor(param_1 + 1), *piVar8 != 1 &&
           (piVar8 = (int *)SystemCore_Executor(param_1 + 1), *piVar8 != 2)))) ||
         ((piVar8 = (int *)SystemCore_ResourceHandler0(param_1 + 1), *piVar8 < 2 &&
          ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8) -
                  param_1[0x2de]) * 1e-05 <= 0.0)))) goto LAB_1805cd41e;
LAB_1805cdf27:
      *(int32_t *)((int64_t)param_1 + 0x178c) = 6;
      uVar14 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar14 = uVar14 >> 0x11 ^ uVar14;
      uVar14 = uVar14 << 5 ^ uVar14;
      *(uint *)(param_1 + 0x272) = uVar14;
      param_1[0x2eb] =
           *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ec] * 8) -
           (int64_t)(-60000.004 - (float)(uVar14 - 1) * 1.1641532e-05);
    }
  }
  else {
    *(int32_t *)((int64_t)param_1 + 0x178c) = 9;
  }
DataValidator_Checker:
  cVar4 = Function_75a4df18(param_1);
  if ((cVar4 == '\0') && (lVar6 = Function_ab0c15dc(param_1 + 1), lVar6 != 0)) {
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      Function_9c5e4d1b(param_1 + 1);
    }
    lVar6 = param_1[0x1e];
    if (lVar6 != 0) {
      if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
        Function_9c5e4d1b(param_1 + 1);
        lVar6 = param_1[0x1e];
      }
      if ((*(byte *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0))
           >> 1 & 1) != 0) {
        lVar6 = SystemCore_MemoryAllocator(param_1 + 1);
        iVar5 = *(int *)(*(int64_t *)(lVar6 + 0x590) + 0x2498);
        if ((iVar5 != -1) && (0xe < *(int *)((int64_t)iVar5 * 0x68 + 0x58 + system_system_config))) {
          lVar6 = SystemCore_MemoryAllocator(param_1 + 1);
          iVar5 = *(int *)(*(int64_t *)(lVar6 + 0x590) + 0x2498);
          if ((iVar5 == -1) || (*(int *)((int64_t)iVar5 * 0x68 + 0x58 + system_system_config) < 0x12)) {
            if ((*(uint *)(param_1 + 2) & 0x8000000) == 0) {
              bVar15 = (byte)((uint)*(int32_t *)(*(int64_t *)param_1[1] + 0x564) >> 0x1f) ^ 1;
              *(byte *)((int64_t)param_1 + 0x11c) = bVar15;
            }
            else {
              bVar15 = *(byte *)((int64_t)param_1 + 0x11c);
            }
            if ((bVar15 == 0) || (pfVar12 = (float *)function_5b6a70(param_1 + 1), 0.5 < *pfVar12)) {
              lVar6 = *param_1;
              uVar13 = function_5a0900(lVar6 + 0x28,4);
              fVar17 = (float)function_5b2b20(lVar6 + 0x138,uVar13);
              *(int32_t *)(param_1 + 0x2f1) = 0x1000;
              lVar6 = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8);
              fVar18 = (float)(lVar6 - param_1[0x2ed]) * 1e-05;
              if ((fVar18 < -100.0) || (fVar18 < -fVar17)) {
                lVar6 = lVar6 - (int64_t)(-fVar17 * 100000.0);
LAB_1805ce16e:
                param_1[0x2ed] = lVar6;
              }
              else if (0.0 < fVar18) goto LAB_1805ce16e;
              param_1[0x42d] =
                   *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x42e] * 8) + 400000;
              goto LAB_1805ce1a9;
            }
          }
        }
      }
    }
  }
  cVar4 = Function_75a4df18(param_1);
  if (cVar4 == '\0') {
    RenderingSystem_DrawCallManager(param_1);
  }
LAB_1805ce1a9:
  if ((*(int *)((int64_t)param_1 + 0x178c) == 0) &&
     (*(int32_t *)((int64_t)param_1 + 0x178c) = 0, *(int *)(*param_1 + 0x1fc) - 1U < 2)) {
    *(uint *)((int64_t)param_1 + 0x158c) =
         *(uint *)((int64_t)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address