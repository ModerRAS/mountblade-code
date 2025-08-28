#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part176.c - 6 个函数
// 函数: void GenericFunction_180160180(int64_t param_1)
void GenericFunction_180160180(int64_t param_1)
{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        Function_2152bae1(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void GenericFunction_1801601a0(int64_t param_1)
void GenericFunction_1801601a0(int64_t param_1)
{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        Function_2152bae1(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void CoreSystem_DataTransformer0(int64_t param_1,int param_2,int *param_3)
void CoreSystem_DataTransformer0(int64_t param_1,int param_2,int *param_3)
{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int64_t lVar16;
  uint uVar17;
  int64_t *plVar18;
  int64_t lVar19;
  int iVar20;
  int64_t lVar21;
  uint uVar22;
  int *piVar23;
  uint64_t uVar24;
  int iStackX_18;
  int32_t stack_special_x_1c;
  int64_t lStackX_20;
  int64_t alStack_60 [4];
  uVar22 = param_3[0xc];
  piVar23 = (int *)(int64_t)(int)uVar22;
  uVar11 = uVar22;
  if (1 < (int)uVar22) {
    iVar15 = 0;
    iVar20 = 0;
    piVar13 = param_3;
    if (0 < (int)uVar22) {
      do {
        piVar12 = (int *)&processed_var_7568_ptr;
        iVar14 = 0;
        do {
          if (*piVar13 == *piVar12) goto LAB_180160234;
          iVar14 = iVar14 + 1;
          piVar12 = piVar12 + 1;
        } while ((int64_t)piVar12 < 0x18098d77c);
        iVar14 = -1;
LAB_180160234:
        iVar10 = iVar15 + 1;
        if (iVar14 < 0) {
          iVar10 = iVar15;
        }
        iVar15 = iVar10;
        iVar20 = iVar20 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar20 < (int)uVar22);
    }
    uVar11 = uVar22 - iVar15;
  }
  iVar15 = 0;
  piVar13 = param_3;
  if (0 < (int)uVar22) {
    do {
      if (*piVar13 == 0x38) goto LAB_18016028e;
      iVar15 = iVar15 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar15 < (int)uVar22);
  }
  param_3[(int64_t)piVar23] = 0x38;
  param_3[(int64_t)piVar23 + 6] = 3;
  uVar22 = uVar22 + 1;
  piVar23 = (int *)((int64_t)piVar23 + 1);
LAB_18016028e:
  iVar15 = param_3[0xc];
  bVar9 = false;
  iVar20 = 0;
  piVar13 = param_3;
  if (0 < iVar15) {
    do {
      if (*piVar13 == 0x1d) {
        bVar9 = true;
        break;
      }
      iVar20 = iVar20 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar20 < iVar15);
  }
  if (!bVar9) {
    param_3[(int64_t)piVar23] = 0x1d;
    uVar22 = uVar22 + 1;
    param_3[(int64_t)piVar23 + 6] = 3;
    piVar23 = (int *)((int64_t)piVar23 + 1);
    iVar15 = param_3[0xc];
  }
  iVar20 = 0;
  piVar13 = param_3;
  if (0 < iVar15) {
    do {
      if (*piVar13 == 0x2a) goto LAB_180160304;
      iVar20 = iVar20 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar20 < iVar15);
  }
  param_3[(int64_t)piVar23] = 0x2a;
  uVar22 = uVar22 + 1;
  param_3[(int64_t)piVar23 + 6] = 3;
LAB_180160304:
  param_3[0xc] = uVar22;
  plVar2 = *(int64_t **)(param_1 + 0x58);
  lVar16 = *plVar2;
  plVar18 = plVar2;
  if (lVar16 == 0) {
    lVar16 = plVar2[1];
    while (plVar18 = plVar18 + 1, lVar16 == 0) {
      lVar16 = plVar18[1];
    }
  }
  lStackX_20 = plVar2[*(int64_t *)(param_1 + 0x60)];
  do {
    if (lVar16 == lStackX_20) {
      uVar3 = *(uint64_t *)param_3;
      uVar4 = *(uint64_t *)(param_3 + 2);
      _iStackX_18 = CONCAT44((int)((uint64_t)param_3 >> 0x20),param_2);
      uVar5 = *(uint64_t *)(param_3 + 4);
      uVar6 = *(uint64_t *)(param_3 + 6);
      uVar7 = *(uint64_t *)(param_3 + 8);
      uVar8 = *(uint64_t *)(param_3 + 10);
      uVar1 = *(uint64_t *)(param_3 + 0xc);
      GenericFunction_180160af0(param_1 + 0x50,alStack_60,piVar23,&iStackX_18,(int64_t)param_2);
      *(uint64_t *)(alStack_60[0] + 4) = uVar3;
      *(uint64_t *)(alStack_60[0] + 0xc) = uVar4;
      *(uint64_t *)(alStack_60[0] + 0x14) = uVar5;
      *(uint64_t *)(alStack_60[0] + 0x1c) = uVar6;
      *(uint64_t *)(alStack_60[0] + 0x24) = uVar7;
      *(uint64_t *)(alStack_60[0] + 0x2c) = uVar8;
      *(uint64_t *)(alStack_60[0] + 0x34) = uVar1;
      return;
    }
    piVar13 = param_3 + 6;
    uVar17 = 0;
    if (0 < (int)uVar22) {
      lVar21 = (int64_t)param_3 - (int64_t)piVar13;
      uVar24 = (uint64_t)uVar22;
      do {
        lVar19 = 0;
        if (0 < *(int *)(lVar16 + 0x34)) {
          iVar15 = *(int *)(lVar21 + (int64_t)piVar13);
          piVar23 = (int *)(lVar16 + 0x1c);
          do {
            if (iVar15 == piVar23[-6]) {
              if (uVar11 == 1) {
LAB_1801604d9:
                if (*piVar13 != *piVar23) goto LAB_1801604e5;
              }
              else {
                iVar20 = 0;
                piVar12 = (int *)&processed_var_7568_ptr;
                while (iVar15 != *piVar12) {
                  iVar20 = iVar20 + 1;
                  piVar12 = piVar12 + 1;
                  if (0x18098d77b < (int64_t)piVar12) goto LAB_1801603d8;
                }
                if (-1 < iVar20) goto LAB_1801604d9;
              }
LAB_1801603d8:
              uVar17 = uVar17 + 1;
              break;
            }
LAB_1801604e5:
            lVar19 = lVar19 + 1;
            piVar23 = piVar23 + 1;
          } while (lVar19 < *(int *)(lVar16 + 0x34));
        }
        piVar13 = piVar13 + 1;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if ((*(uint *)(lVar16 + 0x34) == uVar22) && (uVar17 == *(uint *)(lVar16 + 0x34))) {
      return;
    }
    lVar16 = *(int64_t *)(lVar16 + 0x40);
    while (lVar16 == 0) {
      plVar2 = plVar18 + 1;
      plVar18 = plVar18 + 1;
      lVar16 = *plVar2;
    }
  } while( true );
}
// 函数: void GenericFunction_180160341(int64_t param_1,uint64_t param_2,int *param_3)
void GenericFunction_180160341(int64_t param_1,uint64_t param_2,int *param_3)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t in_RAX;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int64_t unaff_RBX;
  char unaff_BPL;
  int unaff_ESI;
  uint uVar7;
  int64_t unaff_RDI;
  int64_t lVar8;
  int64_t in_R11;
  int64_t lVar9;
  uint unaff_R13D;
  uint64_t *unaff_R14;
  uint64_t uVar10;
  uint64_t local_buffer_38;
  uint64_t local_buffer_40;
  uint64_t local_buffer_48;
  uint64_t local_buffer_50;
  uint64_t local_buffer_58;
  uint64_t local_buffer_60;
  int64_t local_buffer_68;
  int64_t local_buffer_d0;
  int local_buffer_d8;
  int iStack00000000000000e0;
  int64_t lStack00000000000000e8;
  lStack00000000000000e8 = *(int64_t *)(param_1 + *(int64_t *)(in_R11 + 0x60) * 8);
  if (unaff_RBX != lStack00000000000000e8) {
    piVar4 = (int *)(unaff_R14 + 3);
    do {
      uVar7 = 0;
      if (0 < (int)unaff_R13D) {
        lVar9 = (int64_t)unaff_R14 - (int64_t)piVar4;
        uVar10 = (uint64_t)unaff_R13D;
        do {
          lVar8 = 0;
          if (0 < *(int *)(unaff_RBX + 0x34)) {
            iVar3 = *(int *)(lVar9 + (int64_t)piVar4);
            param_3 = (int *)(unaff_RBX + 0x1c);
            do {
              if (iVar3 == param_3[-6]) {
                if (unaff_BPL == '\0') {
                  iVar6 = 0;
                  piVar5 = (int *)&processed_var_7568_ptr;
                  while (iVar3 != *piVar5) {
                    iVar6 = iVar6 + 1;
                    piVar5 = piVar5 + 1;
                    if (local_buffer_d0 <= (int64_t)piVar5) goto LAB_1801603d8;
                  }
                  if (-1 < iVar6) goto LAB_1801604d9;
                }
                else {
LAB_1801604d9:
                  if (*piVar4 != *param_3) goto LAB_1801604e5;
                }
LAB_1801603d8:
                uVar7 = uVar7 + 1;
                break;
              }
LAB_1801604e5:
              lVar8 = lVar8 + 1;
              param_3 = param_3 + 1;
            } while (lVar8 < *(int *)(unaff_RBX + 0x34));
          }
          piVar4 = piVar4 + 1;
          uVar10 = uVar10 - 1;
          unaff_R14 = _iStack00000000000000e0;
        } while (uVar10 != 0);
      }
      if ((*(uint *)(unaff_RBX + 0x34) == unaff_R13D) && (uVar7 == *(uint *)(unaff_RBX + 0x34))) {
        return;
      }
      unaff_RBX = *(int64_t *)(unaff_RBX + 0x40);
      while (unaff_RBX == 0) {
        plVar1 = (int64_t *)(unaff_RDI + 8);
        unaff_RDI = unaff_RDI + 8;
        unaff_RBX = *plVar1;
      }
      piVar4 = (int *)(unaff_R14 + 3);
      unaff_ESI = local_buffer_d8;
    } while (unaff_RBX != lStack00000000000000e8);
  }
  local_buffer_38 = *unaff_R14;
  local_buffer_40 = unaff_R14[1];
  local_buffer_48 = unaff_R14[2];
  local_buffer_50 = unaff_R14[3];
  local_buffer_58 = unaff_R14[4];
  local_buffer_60 = unaff_R14[5];
  uVar2 = unaff_R14[6];
  iStack00000000000000e0 = unaff_ESI;
  GenericFunction_180160af0(in_RAX,&local_buffer_00000068,param_3,&local_buffer_000000e0,(int64_t)unaff_ESI);
  *(uint64_t *)(local_buffer_68 + 4) = local_buffer_38;
  *(uint64_t *)(local_buffer_68 + 0xc) = local_buffer_40;
  *(uint64_t *)(local_buffer_68 + 0x14) = local_buffer_48;
  *(uint64_t *)(local_buffer_68 + 0x1c) = local_buffer_50;
  *(uint64_t *)(local_buffer_68 + 0x24) = local_buffer_58;
  *(uint64_t *)(local_buffer_68 + 0x2c) = local_buffer_60;
  *(uint64_t *)(local_buffer_68 + 0x34) = uVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
char GenericFunction_180160500(int32_t param_1,int param_2)
{
  float *pfVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t lVar9;
  bool bVar10;
  int32_t extraout_XMM0_Da;
  lVar9 = core_system_data_config[0xb];
  for (piVar4 = *(int **)(lVar9 + ((uint64_t)(int64_t)param_2 %
                                  (uint64_t)*(uint *)(core_system_data_config + 0xc)) * 8);
      piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 0x10)) {
    if (param_2 == *piVar4) {
      lVar5 = core_system_data_config[0xc];
      goto LAB_180160546;
    }
  }
  lVar5 = core_system_data_config[0xc];
  piVar4 = *(int **)(lVar9 + lVar5 * 8);
LAB_180160546:
  if (piVar4 == *(int **)(lVar9 + lVar5 * 8)) {
    return '\0';
  }
  if ((char)piVar4[0xe] != '\0') {
    puVar6 = (uint64_t *)*core_system_data_config;
    uVar7 = core_system_data_config[1] - (int64_t)puVar6 >> 3;
    iVar8 = 0;
    if (uVar7 != 0) {
      do {
        cVar3 = GenericFunction_1801605f0(param_1,*puVar6,piVar4 + 1);
        if (cVar3 != '\0') {
          return '\x01';
        }
        iVar8 = iVar8 + 1;
        puVar6 = puVar6 + 1;
        param_1 = extraout_XMM0_Da;
      } while ((uint64_t)(int64_t)iVar8 < uVar7);
    }
    return '\0';
  }
  cVar3 = '\x01';
  if (0 < (int64_t)piVar4[0xd]) {
    lVar9 = 0;
    do {
      uVar2 = (piVar4 + 1)[lVar9];
      uVar7 = (uint64_t)uVar2;
      lVar5 = 0;
      iVar8 = piVar4[lVar9 + 7];
      do {
        if (uVar2 == *(uint *)(&processed_var_7568_ptr + lVar5 * 4)) goto LAB_18016064a;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 3);
      lVar5 = -1;
LAB_18016064a:
      if (iVar8 == 0) {
        if (lVar5 < 0) {
          if (cVar3 != '\0') {
LAB_180160689:
            if ((*(char *)(core_system_data_config + 0x18 + uVar7 * 0x18) == '\0') &&
               ((pfVar1 = (float *)(core_system_data_config + 4 + uVar7 * 0x18),
                0.7 < *pfVar1 || *pfVar1 == 0.7 ||
                ((*(byte *)(core_system_data_config + 0x14 + uVar7 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (cVar3 == '\0') goto LAB_1801606a6;
        if ((*(char *)(core_system_data_config + 0x18 + uVar7 * 0x18) != '\0') ||
           ((pfVar1 = (float *)(core_system_data_config + 4 + uVar7 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7
            && ((*(byte *)(core_system_data_config + 0x14 + uVar7 * 0x18) & 1) == 0)))) {
          uVar7 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar5 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        cVar3 = '\x01';
      }
      else {
        if (iVar8 == 1) {
          if ((cVar3 != '\0') && (*(char *)(core_system_data_config + 0x18 + uVar7 * 0x18) == '\0')) {
            pfVar1 = (float *)(core_system_data_config + 4 + uVar7 * 0x18);
            if ((0.7 < *pfVar1 || *pfVar1 == 0.7) &&
               (pfVar1 = (float *)(core_system_data_config + 0xc + uVar7 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7)) goto LAB_180160797;
LAB_1801606f2:
            bVar10 = (*(byte *)(core_system_data_config + 0x14 + uVar7 * 0x18) & 3) == 3;
LAB_180160791:
            if (bVar10) goto LAB_180160797;
          }
        }
        else if (iVar8 == 2) {
          if ((cVar3 != '\0') && (*(char *)(core_system_data_config + 0x18 + uVar7 * 0x18) == '\0')) {
            pfVar1 = (float *)(core_system_data_config + 4 + uVar7 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_1801606f2;
            pfVar1 = (float *)(core_system_data_config + 0xc + uVar7 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_180160797;
            bVar10 = (*(byte *)(core_system_data_config + 0x14 + uVar7 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (iVar8 != 3) goto LAB_1801606a8;
          if ((cVar3 != '\0') &&
             ((*(char *)(core_system_data_config + 0x18 + uVar7 * 0x18) != '\0' ||
              ((pfVar1 = (float *)(core_system_data_config + 4 + uVar7 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
               ((*(byte *)(core_system_data_config + 0x14 + uVar7 * 0x18) & 1) == 0)))))) {
            if ((lVar5 < 0) ||
               (uVar7 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar5 * 4),
               *(char *)(core_system_data_config + 0x18 + uVar7 * 0x18) != '\0')) goto LAB_180160797;
            pfVar1 = (float *)(core_system_data_config + 4 + uVar7 * 0x18);
            if (*pfVar1 <= 0.7 && *pfVar1 != 0.7) {
              bVar10 = (*(byte *)(core_system_data_config + 0x14 + uVar7 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        cVar3 = '\0';
      }
LAB_1801606a8:
      lVar9 = lVar9 + 1;
    } while (lVar9 < piVar4[0xd]);
  }
  return cVar3;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
char GenericFunction_18016055e(int32_t param_1)
{
  float *pfVar1;
  uint uVar2;
  char cVar3;
  int64_t in_RAX;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t *unaff_RSI;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  bool in_ZF;
  bool bVar9;
  int32_t extraout_XMM0_Da;
  if (!in_ZF) {
    puVar5 = (uint64_t *)*unaff_RSI;
    uVar6 = unaff_RSI[1] - (int64_t)puVar5 >> 3;
    iVar7 = 0;
    if (uVar6 != 0) {
      do {
        cVar3 = GenericFunction_1801605f0(param_1,*puVar5,in_RAX + 4);
        if (cVar3 != '\0') {
          return '\x01';
        }
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
        param_1 = extraout_XMM0_Da;
      } while ((uint64_t)(int64_t)iVar7 < uVar6);
    }
    return '\0';
  }
  cVar3 = '\x01';
  if (0 < (int64_t)*(int *)(in_RAX + 0x34)) {
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(in_RAX + 4 + lVar8 * 4);
      uVar6 = (uint64_t)uVar2;
      lVar4 = 0;
      iVar7 = *(int *)(in_RAX + 0x1c + lVar8 * 4);
      do {
        if (uVar2 == *(uint *)(&processed_var_7568_ptr + lVar4 * 4)) goto LAB_18016064a;
        lVar4 = lVar4 + 1;
      } while (lVar4 < 3);
      lVar4 = -1;
LAB_18016064a:
      if (iVar7 == 0) {
        if (lVar4 < 0) {
          if (cVar3 != '\0') {
LAB_180160689:
            if ((*(char *)(core_system_data_config + 0x18 + uVar6 * 0x18) == '\0') &&
               ((pfVar1 = (float *)(core_system_data_config + 4 + uVar6 * 0x18),
                0.7 < *pfVar1 || *pfVar1 == 0.7 ||
                ((*(byte *)(core_system_data_config + 0x14 + uVar6 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (cVar3 == '\0') goto LAB_1801606a6;
        if ((*(char *)(core_system_data_config + 0x18 + uVar6 * 0x18) != '\0') ||
           ((pfVar1 = (float *)(core_system_data_config + 4 + uVar6 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7
            && ((*(byte *)(core_system_data_config + 0x14 + uVar6 * 0x18) & 1) == 0)))) {
          uVar6 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar4 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        cVar3 = '\x01';
      }
      else {
        if (iVar7 == 1) {
          if ((cVar3 != '\0') && (*(char *)(core_system_data_config + 0x18 + uVar6 * 0x18) == '\0')) {
            pfVar1 = (float *)(core_system_data_config + 4 + uVar6 * 0x18);
            if ((0.7 < *pfVar1 || *pfVar1 == 0.7) &&
               (pfVar1 = (float *)(core_system_data_config + 0xc + uVar6 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7)) goto LAB_180160797;
LAB_1801606f2:
            bVar9 = (*(byte *)(core_system_data_config + 0x14 + uVar6 * 0x18) & 3) == 3;
LAB_180160791:
            if (bVar9) goto LAB_180160797;
          }
        }
        else if (iVar7 == 2) {
          if ((cVar3 != '\0') && (*(char *)(core_system_data_config + 0x18 + uVar6 * 0x18) == '\0')) {
            pfVar1 = (float *)(core_system_data_config + 4 + uVar6 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_1801606f2;
            pfVar1 = (float *)(core_system_data_config + 0xc + uVar6 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_180160797;
            bVar9 = (*(byte *)(core_system_data_config + 0x14 + uVar6 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (iVar7 != 3) goto LAB_1801606a8;
          if ((cVar3 != '\0') &&
             ((*(char *)(core_system_data_config + 0x18 + uVar6 * 0x18) != '\0' ||
              ((pfVar1 = (float *)(core_system_data_config + 4 + uVar6 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
               ((*(byte *)(core_system_data_config + 0x14 + uVar6 * 0x18) & 1) == 0)))))) {
            if ((lVar4 < 0) ||
               (uVar6 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar4 * 4),
               *(char *)(core_system_data_config + 0x18 + uVar6 * 0x18) != '\0')) goto LAB_180160797;
            pfVar1 = (float *)(core_system_data_config + 4 + uVar6 * 0x18);
            if (*pfVar1 <= 0.7 && *pfVar1 != 0.7) {
              bVar9 = (*(byte *)(core_system_data_config + 0x14 + uVar6 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        cVar3 = '\0';
      }
LAB_1801606a8:
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(in_RAX + 0x34));
  }
  return cVar3;
}
int8_t GenericFunction_1801605c4(void)
{
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1801605c8(void)
void GenericFunction_1801605c8(void)
{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t unaff_RBP;
  int64_t lVar6;
  bool bVar7;
  bVar7 = true;
  if (0 < (int64_t)*(int *)(unaff_RBP + 0x30)) {
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(unaff_RBP + lVar6 * 4);
      uVar4 = (uint64_t)uVar2;
      lVar5 = 0;
      iVar3 = *(int *)(unaff_RBP + 0x18 + lVar6 * 4);
      do {
        if (uVar2 == *(uint *)(&processed_var_7568_ptr + lVar5 * 4)) goto LAB_18016064a;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 3);
      lVar5 = -1;
LAB_18016064a:
      if (iVar3 == 0) {
        if (lVar5 < 0) {
          if (bVar7) {
LAB_180160689:
            if ((*(char *)(core_system_data_config + 0x18 + uVar4 * 0x18) == '\0') &&
               ((pfVar1 = (float *)(core_system_data_config + 4 + uVar4 * 0x18),
                0.7 < *pfVar1 || *pfVar1 == 0.7 ||
                ((*(byte *)(core_system_data_config + 0x14 + uVar4 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (!bVar7) goto LAB_1801606a6;
        if ((*(char *)(core_system_data_config + 0x18 + uVar4 * 0x18) != '\0') ||
           ((pfVar1 = (float *)(core_system_data_config + 4 + uVar4 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7
            && ((*(byte *)(core_system_data_config + 0x14 + uVar4 * 0x18) & 1) == 0)))) {
          uVar4 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar5 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        bVar7 = true;
      }
      else {
        if (iVar3 == 1) {
          if ((bVar7) && (*(char *)(core_system_data_config + 0x18 + uVar4 * 0x18) == '\0')) {
            pfVar1 = (float *)(core_system_data_config + 4 + uVar4 * 0x18);
            if ((0.7 < *pfVar1 || *pfVar1 == 0.7) &&
               (pfVar1 = (float *)(core_system_data_config + 0xc + uVar4 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7)) goto LAB_180160797;
LAB_1801606f2:
            bVar7 = (*(byte *)(core_system_data_config + 0x14 + uVar4 * 0x18) & 3) == 3;
LAB_180160791:
            if (bVar7) goto LAB_180160797;
          }
        }
        else if (iVar3 == 2) {
          if ((bVar7) && (*(char *)(core_system_data_config + 0x18 + uVar4 * 0x18) == '\0')) {
            pfVar1 = (float *)(core_system_data_config + 4 + uVar4 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_1801606f2;
            pfVar1 = (float *)(core_system_data_config + 0xc + uVar4 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_180160797;
            bVar7 = (*(byte *)(core_system_data_config + 0x14 + uVar4 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (iVar3 != 3) goto LAB_1801606a8;
          if ((bVar7) &&
             ((*(char *)(core_system_data_config + 0x18 + uVar4 * 0x18) != '\0' ||
              ((pfVar1 = (float *)(core_system_data_config + 4 + uVar4 * 0x18),
               *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
               ((*(byte *)(core_system_data_config + 0x14 + uVar4 * 0x18) & 1) == 0)))))) {
            if ((lVar5 < 0) ||
               (uVar4 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar5 * 4),
               *(char *)(core_system_data_config + 0x18 + uVar4 * 0x18) != '\0')) goto LAB_180160797;
            pfVar1 = (float *)(core_system_data_config + 4 + uVar4 * 0x18);
            if (*pfVar1 <= 0.7 && *pfVar1 != 0.7) {
              bVar7 = (*(byte *)(core_system_data_config + 0x14 + uVar4 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        bVar7 = false;
      }
LAB_1801606a8:
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(unaff_RBP + 0x30));
  }
  return;
}
// 函数: void GenericFunction_1801605f0(uint64_t param_1,int64_t param_2,int64_t param_3)
void GenericFunction_1801605f0(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  bVar7 = true;
  if (0 < (int64_t)*(int *)(param_3 + 0x30)) {
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(param_3 + lVar6 * 4);
      uVar4 = (uint64_t)uVar2;
      lVar5 = 0;
      iVar3 = *(int *)(param_3 + 0x18 + lVar6 * 4);
      do {
        if (uVar2 == *(uint *)(&processed_var_7568_ptr + lVar5 * 4)) goto LAB_18016064a;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 3);
      lVar5 = -1;
LAB_18016064a:
      if (iVar3 == 0) {
        if (lVar5 < 0) {
          if (bVar7) {
LAB_180160689:
            if ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0') &&
               ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18), 0.7 < *pfVar1 || *pfVar1 == 0.7 ||
                ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) != 0)))) goto LAB_180160797;
          }
          goto LAB_1801606a6;
        }
        if (!bVar7) goto LAB_1801606a6;
        if ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0') ||
           ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
            ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0)))) {
          uVar4 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar5 * 4);
          goto LAB_180160689;
        }
LAB_180160797:
        bVar7 = true;
      }
      else {
        if (iVar3 == 1) {
          if ((bVar7) && (*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
            pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
            if ((0.7 < *pfVar1 || *pfVar1 == 0.7) &&
               (pfVar1 = (float *)(param_2 + 0xc + uVar4 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7))
            goto LAB_180160797;
LAB_1801606f2:
            bVar7 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 3) == 3;
LAB_180160791:
            if (bVar7) goto LAB_180160797;
          }
        }
        else if (iVar3 == 2) {
          if ((bVar7) && (*(char *)(param_2 + 0x18 + uVar4 * 0x18) == '\0')) {
            pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_1801606f2;
            pfVar1 = (float *)(param_2 + 0xc + uVar4 * 0x18);
            if (0.7 < *pfVar1 || *pfVar1 == 0.7) goto LAB_180160797;
            bVar7 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 3) == 3;
            goto LAB_180160791;
          }
        }
        else {
          if (iVar3 != 3) goto LAB_1801606a8;
          if ((bVar7) &&
             ((*(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0' ||
              ((pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18), *pfVar1 <= 0.7 && *pfVar1 != 0.7 &&
               ((*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0)))))) {
            if ((lVar5 < 0) ||
               (uVar4 = (uint64_t)*(uint *)(&processed_var_7584_ptr + lVar5 * 4),
               *(char *)(param_2 + 0x18 + uVar4 * 0x18) != '\0')) goto LAB_180160797;
            pfVar1 = (float *)(param_2 + 4 + uVar4 * 0x18);
            if (*pfVar1 <= 0.7 && *pfVar1 != 0.7) {
              bVar7 = (*(byte *)(param_2 + 0x14 + uVar4 * 0x18) & 1) == 0;
              goto LAB_180160791;
            }
          }
        }
LAB_1801606a6:
        bVar7 = false;
      }
LAB_1801606a8:
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_3 + 0x30));
  }
  return;
}