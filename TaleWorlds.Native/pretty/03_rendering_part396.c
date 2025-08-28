#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part396.c - 2 个函数
// 函数: void UISystem_89b50(int64_t param_1,int64_t param_2)
void UISystem_89b50(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t *plVar10;
  code *pcVar11;
  int iVar12;
  int64_t lVar13;
  bool bVar14;
  int64_t *plStackX_8;
  int64_t lStackX_10;
  int64_t lStackX_18;
  int64_t **pplStackX_20;
  int64_t *plStack_108;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  int64_t *plStack_e0;
  int64_t *plStack_d8;
  char *pcStack_d0;
  int iStack_c8;
  int32_t local_var_c0;
  void *plocal_var_b8;
  int64_t lStack_b0;
  int32_t local_var_a0;
  int32_t local_var_98;
  int32_t local_var_94;
  int32_t local_var_90;
  int8_t local_var_8c;
  int32_t local_var_88;
  int64_t alStack_80 [2];
  code *pcStack_70;
  code *pcStack_68;
  uint64_t local_var_58;
  int64_t **pplStack_50;
  local_var_58 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x178;
  lStackX_10 = param_2;
  lStackX_18 = lVar1;
  iVar5 = _Mtx_lock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lVar7 = *(int64_t *)(param_1 + 0x140) - *(int64_t *)(param_1 + 0x138);
  lVar7 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar7),8) + lVar7;
  iVar5 = (int)(lVar7 >> 7) - (int)(lVar7 >> 0x3f);
  if (0 < iVar5) {
    iVar9 = -1;
    iVar12 = 0;
    plStackX_8 = (int64_t *)(int64_t)iVar5;
    if (0 < iVar5) {
      lVar7 = 0;
      lVar13 = 0;
      do {
        if (iVar9 != -1) goto LAB_180489e6f;
        plVar10 = (int64_t *)(*(int64_t *)(param_1 + 0x138) + lVar13);
        plStack_108 = (int64_t *)*plVar10;
        if (plStack_108 != (int64_t *)0x0) {
          (**(code **)(*plStack_108 + 0x28))();
        }
        plStack_100 = (int64_t *)plVar10[1];
        if (plStack_100 != (int64_t *)0x0) {
          (**(code **)(*plStack_100 + 0x28))();
        }
        plStack_f8 = (int64_t *)plVar10[2];
        if (plStack_f8 != (int64_t *)0x0) {
          (**(code **)(*plStack_f8 + 0x28))();
        }
        plStack_f0 = (int64_t *)plVar10[3];
        if (plStack_f0 != (int64_t *)0x0) {
          (**(code **)(*plStack_f0 + 0x28))();
        }
        plStack_e8 = (int64_t *)plVar10[4];
        if (plStack_e8 != (int64_t *)0x0) {
          (**(code **)(*plStack_e8 + 0x28))();
        }
        plStack_e0 = (int64_t *)plVar10[5];
        if (plStack_e0 != (int64_t *)0x0) {
          (**(code **)(*plStack_e0 + 0x28))();
        }
        CoreEngineDataTransformer(&plStack_d8,plVar10 + 6);
        CoreEngineDataTransformer(&plocal_var_b8,plVar10 + 10);
        local_var_98 = (int32_t)plVar10[0xe];
        local_var_94 = *(int32_t *)((int64_t)plVar10 + 0x74);
        local_var_90 = (int32_t)plVar10[0xf];
        local_var_8c = *(int8_t *)((int64_t)plVar10 + 0x7c);
        local_var_88 = (int32_t)plVar10[0x10];
        pplStackX_20 = (int64_t **)alStack_80;
        pcStack_70 = (code *)0x0;
        pcStack_68 = _guard_check_icall;
        if (alStack_80 != plVar10 + 0x11) {
          pcVar11 = (code *)plVar10[0x13];
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(alStack_80,plVar10 + 0x11,1);
            pcVar11 = (code *)plVar10[0x13];
          }
          pcStack_68 = (code *)plVar10[0x14];
          pcStack_70 = pcVar11;
        }
        if (iStack_c8 == *(int *)(lStackX_10 + 0x10)) {
          if (iStack_c8 == 0) {
LAB_180489d4e:
            if (*(int *)(lStackX_10 + 0x10) != 0) goto LAB_180489d56;
            bVar14 = true;
          }
          else {
            pcVar6 = pcStack_d0;
            do {
              cVar3 = *pcVar6;
              cVar4 = pcVar6[*(int64_t *)(lStackX_10 + 8) - (int64_t)pcStack_d0];
              if (cVar3 != cVar4) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar4 != '\0');
            bVar14 = cVar3 == cVar4;
          }
        }
        else {
          if (iStack_c8 == 0) goto LAB_180489d4e;
LAB_180489d56:
          bVar14 = false;
        }
        iVar9 = iVar12;
        if (!bVar14) {
          iVar9 = -1;
        }
        pplStackX_20 = (int64_t **)alStack_80;
        if (pcStack_70 != (code *)0x0) {
          (*pcStack_70)(alStack_80,0,0);
        }
        pplStackX_20 = (int64_t **)&plocal_var_b8;
        plocal_var_b8 = &system_data_buffer_ptr;
        if (lStack_b0 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_b0 = 0;
        local_var_a0 = 0;
        plocal_var_b8 = &system_state_ptr;
        pplStackX_20 = &plStack_d8;
        plStack_d8 = (int64_t *)&system_data_buffer_ptr;
        if (pcStack_d0 != (char *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        pcStack_d0 = (char *)0x0;
        local_var_c0 = 0;
        plStack_d8 = (int64_t *)&system_state_ptr;
        if (plStack_e0 != (int64_t *)0x0) {
          (**(code **)(*plStack_e0 + 0x38))();
        }
        if (plStack_e8 != (int64_t *)0x0) {
          (**(code **)(*plStack_e8 + 0x38))();
        }
        if (plStack_f0 != (int64_t *)0x0) {
          (**(code **)(*plStack_f0 + 0x38))();
        }
        if (plStack_f8 != (int64_t *)0x0) {
          (**(code **)(*plStack_f8 + 0x38))();
        }
        if (plStack_100 != (int64_t *)0x0) {
          (**(code **)(*plStack_100 + 0x38))();
        }
        if (plStack_108 != (int64_t *)0x0) {
          (**(code **)(*plStack_108 + 0x38))();
        }
        iVar12 = iVar12 + 1;
        lVar7 = lVar7 + 1;
        lVar13 = lVar13 + 0xa8;
      } while (lVar7 < (int64_t)plStackX_8);
      if (iVar9 != -1) {
LAB_180489e6f:
        UISystem_89f80(&plStack_108,*(int64_t *)(param_1 + 0x138) + (int64_t)iVar9 * 0xa8);
        DataStructure_e9fa0(plStack_e0,1,1);
        DataStructure_f0600(plStack_e0,1);
        plVar10 = plStack_108;
        pplStackX_20 = &plStackX_8;
        plStackX_8 = plStack_e0;
        if (plStack_e0 != (int64_t *)0x0) {
          (**(code **)(*plStack_e0 + 0x28))();
        }
        pplStack_50 = &plStackX_8;
        CoreEngine_198980(plVar10,plStackX_8);
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        uVar2 = *(int64_t *)(param_1 + 0x138) + (int64_t)iVar9 * 0xa8 + 0xa8;
        uVar8 = *(uint64_t *)(param_1 + 0x140);
        if (uVar2 < uVar8) {
          UISystem_8d1c0(uVar2,uVar8);
          uVar8 = *(uint64_t *)(param_1 + 0x140);
        }
        *(uint64_t *)(param_1 + 0x140) = uVar8 - 0xa8;
        UISystem_8a0c0();
        UISystem_8a0c0(&plStack_108);
      }
    }
  }
  iVar5 = _Mtx_unlock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return;
}
int64_t * UISystem_89f80(int64_t *param_1,int64_t *param_2)
{
  int64_t *plVar1;
  code *pcVar2;
  plVar1 = (int64_t *)*param_2;
  *param_1 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (int64_t *)param_2[1];
  param_1[1] = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (int64_t *)param_2[2];
  param_1[2] = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (int64_t *)param_2[3];
  param_1[3] = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (int64_t *)param_2[4];
  param_1[4] = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  plVar1 = (int64_t *)param_2[5];
  param_1[5] = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  CoreEngineDataTransformer(param_1 + 6,param_2 + 6);
  CoreEngineDataTransformer(param_1 + 10,param_2 + 10);
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  *(int32_t *)((int64_t)param_1 + 0x74) = *(int32_t *)((int64_t)param_2 + 0x74);
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  *(int8_t *)((int64_t)param_1 + 0x7c) = *(int8_t *)((int64_t)param_2 + 0x7c);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  param_1[0x13] = 0;
  param_1[0x14] = (int64_t)_guard_check_icall;
  if (param_1 + 0x11 != param_2 + 0x11) {
    pcVar2 = (code *)param_2[0x13];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1 + 0x11,param_2 + 0x11,1);
      pcVar2 = (code *)param_2[0x13];
    }
    param_1[0x13] = (int64_t)pcVar2;
    param_1[0x14] = param_2[0x14];
  }
  return param_1;
}
// 函数: void UISystem_8a0c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_8a0c0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  if ((code *)param_1[0x13] != (code *)0x0) {
    (*(code *)param_1[0x13])(param_1 + 0x11,0,0,param_4,0xfffffffffffffffe);
  }
  param_1[10] = (int64_t)&system_data_buffer_ptr;
  if (param_1[0xb] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xd) = 0;
  param_1[10] = (int64_t)&system_state_ptr;
  param_1[6] = (int64_t)&system_data_buffer_ptr;
  if (param_1[7] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[7] = 0;
  *(int32_t *)(param_1 + 9) = 0;
  param_1[6] = (int64_t)&system_state_ptr;
  if ((int64_t *)param_1[5] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[5] + 0x38))();
  }
  if ((int64_t *)param_1[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[4] + 0x38))();
  }
  if ((int64_t *)param_1[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[3] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  if ((int64_t *)param_1[1] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[1] + 0x38))();
  }
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t UISystem_8a1d0(int64_t param_1,uint64_t param_2)
{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  char cVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  code *pcVar13;
  int64_t *plVar14;
  int64_t lVar15;
  int iVar16;
  uint uVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  int64_t *plVar20;
  uint64_t uVar21;
  int64_t *plStackX_8;
  uint64_t stack_special_x_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  int64_t *plStack_1b0;
  int64_t **pplStack_1a8;
  void **pplocal_var_1a0;
  int64_t *plStack_198;
  int64_t *plStack_190;
  int64_t *plStack_188;
  int64_t *plStack_180;
  int64_t *plStack_178;
  int32_t local_var_170;
  uint64_t local_var_168;
  int32_t local_var_160;
  int32_t local_var_15c;
  int16_t local_var_158;
  int8_t local_var_156;
  int32_t local_var_154;
  int8_t local_var_150;
  uint64_t local_var_148;
  int64_t lStack_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  int64_t *plStack_118;
  int64_t *plStack_110;
  int64_t *plStack_108;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  int64_t *plStack_f0;
  void *plocal_var_e8;
  int64_t lStack_e0;
  int32_t local_var_d0;
  void *plocal_var_c8;
  int64_t lStack_c0;
  int32_t local_var_b0;
  int32_t local_var_a8;
  int32_t local_var_a4;
  int32_t local_var_a0;
  int8_t local_var_9c;
  int32_t local_var_98;
  int8_t stack_array_90 [16];
  code *pcStack_80;
  code *pcStack_78;
  uint64_t local_var_68;
  int8_t stack_array_60 [8];
  int8_t stack_array_58 [24];
  local_var_68 = 0xfffffffffffffffe;
  uVar21 = 0;
  plStackX_8 = (int64_t *)((uint64_t)plStackX_8 & 0xffffffff00000000);
  plStackX_18 = (int64_t *)((uint64_t)plStackX_18 & 0xffffffff00000000);
  plStack_188 = (int64_t *)0x0;
  plStack_180 = (int64_t *)0x0;
  plVar20 = (int64_t *)0x0;
  plStack_178 = (int64_t *)0x0;
  local_var_170 = 3;
  iVar16 = 0;
  plVar7 = (int64_t *)(param_1 + 0x158);
  plVar18 = *(int64_t **)(param_1 + 0x160);
  plVar11 = (int64_t *)*plVar7;
  stack_special_x_10 = param_2;
  if ((int64_t)plVar18 - (int64_t)plVar11 >> 4 != 0) {
    do {
      DataStructure_e9fa0(*(uint64_t *)(uVar21 + 8 + (int64_t)plVar11),1,1);
      DataStructure_f0600(*(uint64_t *)(uVar21 + 8 + (int64_t)plVar11),1);
      uVar3 = *(uint64_t *)(uVar21 + (int64_t)plVar11);
      pplStack_1a8 = &plStackX_20;
      plStackX_20 = *(int64_t **)(uVar21 + 8 + (int64_t)plVar11);
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      CoreEngine_198980(uVar3,plStackX_20);
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      iVar16 = iVar16 + 1;
      uVar21 = uVar21 + 0x10;
      plVar18 = *(int64_t **)(param_1 + 0x160);
      plVar11 = (int64_t *)*plVar7;
    } while ((uint64_t)(int64_t)iVar16 < (uint64_t)((int64_t)plVar18 - (int64_t)plVar11 >> 4));
    uVar21 = (uint64_t)plStackX_8 & 0xffffffff;
  }
  plVar14 = plVar11;
  plStack_1b0 = plVar11;
  if (plVar11 != plVar18) {
    do {
      plStack_1b0 = plVar14;
      if ((int64_t *)plVar14[1] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)plVar14[1] + 0x38))();
      }
      if ((int64_t *)*plVar14 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar14 + 0x38))();
      }
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar18);
    plVar11 = (int64_t *)*plVar7;
    plStack_1b0 = plVar14;
  }
  *(int64_t **)(param_1 + 0x160) = plVar11;
  lVar8 = *(int64_t *)(param_1 + 0x140) - *(int64_t *)(param_1 + 0x138);
  lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8),8) + lVar8;
  *(int *)(param_1 + 0xf4) = (int)(lVar8 >> 7) - (int)(lVar8 >> 0x3f);
  lVar8 = *(int64_t *)(param_1 + 0x140) - *(int64_t *)(param_1 + 0x138);
  lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8),8) + lVar8;
  if (lVar8 >> 7 == lVar8 >> 0x3f) {
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  }
  else {
    *(int32_t *)(param_1 + 0xfc) = 0;
  }
  uVar12 = 0;
  lVar8 = *(int64_t *)(param_1 + 0x140);
  lVar10 = *(int64_t *)(param_1 + 0x138);
  lVar9 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8 - lVar10),8) + (lVar8 - lVar10);
  uVar19 = uVar12;
  if (lVar9 >> 7 != lVar9 >> 0x3f) {
    do {
      if (*(char *)(uVar12 + 0x7c + lVar10) == '\0') {
        *(int8_t *)(uVar12 + 0x7c + lVar10) = 1;
        local_var_168 = 0;
        local_var_154 = 0xffffffff;
        local_var_150 = 1;
        local_var_148 = 0;
        lStack_140 = 0;
        local_var_138 = 0;
        local_var_130 = 0;
        local_var_128 = 3;
        local_var_120 = 0;
        local_var_158 = 1;
        local_var_160 = 3;
        local_var_15c = 1;
        local_var_156 = 1;
        DataStructure_e7bc0(*(uint64_t *)(uVar12 + 0x28 + *(int64_t *)(param_1 + 0x138)),&local_var_168);
        if (lStack_140 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
      }
      uVar17 = (int)uVar19 + 1;
      uVar12 = uVar12 + 0xa8;
      lVar8 = *(int64_t *)(param_1 + 0x140);
      lVar10 = *(int64_t *)(param_1 + 0x138);
      lVar9 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8 - lVar10),8) + (lVar8 - lVar10);
      uVar19 = (uint64_t)uVar17;
    } while ((uint64_t)(int64_t)(int)uVar17 < (uint64_t)((lVar9 >> 7) - (lVar9 >> 0x3f)));
  }
  lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8 - lVar10),8) + (lVar8 - lVar10);
  if (lVar8 >> 7 != lVar8 >> 0x3f) {
    do {
      plVar7 = (int64_t *)0x0;
      if ((3 < (int)uVar21) || (3 < (int)plStackX_18)) break;
      piVar1 = (int *)(param_1 + 0xf0);
      *piVar1 = *piVar1 + -1;
      if (-1 < *piVar1) break;
      lVar8 = *(int64_t *)(param_1 + 0x140);
      plStack_118 = *(int64_t **)(lVar8 + -0xa8);
      if (plStack_118 != (int64_t *)0x0) {
        (**(code **)(*plStack_118 + 0x28))();
      }
      plStack_110 = *(int64_t **)(lVar8 + -0xa0);
      if (plStack_110 != (int64_t *)0x0) {
        (**(code **)(*plStack_110 + 0x28))();
      }
      plStack_108 = *(int64_t **)(lVar8 + -0x98);
      if (plStack_108 != (int64_t *)0x0) {
        (**(code **)(*plStack_108 + 0x28))();
      }
      plStack_100 = *(int64_t **)(lVar8 + -0x90);
      if (plStack_100 != (int64_t *)0x0) {
        (**(code **)(*plStack_100 + 0x28))();
      }
      plStack_f8 = *(int64_t **)(lVar8 + -0x88);
      if (plStack_f8 != (int64_t *)0x0) {
        (**(code **)(*plStack_f8 + 0x28))();
      }
      plStack_f0 = *(int64_t **)(lVar8 + -0x80);
      if (plStack_f0 != (int64_t *)0x0) {
        (**(code **)(*plStack_f0 + 0x28))();
      }
      CoreEngineDataTransformer(&plocal_var_e8,lVar8 + -0x78);
      CoreEngineDataTransformer(&plocal_var_c8,lVar8 + -0x58);
      local_var_a8 = *(int32_t *)(lVar8 + -0x38);
      local_var_a4 = *(int32_t *)(lVar8 + -0x34);
      local_var_a0 = *(int32_t *)(lVar8 + -0x30);
      local_var_9c = *(int8_t *)(lVar8 + -0x2c);
      local_var_98 = *(int32_t *)(lVar8 + -0x28);
      pplocal_var_1a0 = (void **)stack_array_90;
      pcStack_80 = (code *)0x0;
      pcStack_78 = _guard_check_icall;
      if (stack_array_90 != (int8_t *)(lVar8 + -0x20)) {
        pcVar13 = *(code **)(lVar8 + -0x10);
        if (pcVar13 != (code *)0x0) {
          (*pcVar13)(stack_array_90,(int8_t *)(lVar8 + -0x20),1);
          pcVar13 = *(code **)(lVar8 + -0x10);
        }
        pcStack_78 = *(code **)(lVar8 + -8);
        pcStack_80 = pcVar13;
      }
      if (plStack_118 != (int64_t *)0x0) {
        puVar2 = (uint64_t *)(param_1 + 0x108);
        puVar6 = puVar2;
        puVar4 = *(uint64_t **)(param_1 + 0x118);
        while (puVar4 != (uint64_t *)0x0) {
          if ((int64_t *)puVar4[4] < plStack_118) {
            puVar4 = (uint64_t *)*puVar4;
          }
          else {
            puVar6 = puVar4;
            puVar4 = (uint64_t *)puVar4[1];
          }
        }
        if ((puVar6 == puVar2) || (plStack_118 < (int64_t *)puVar6[4])) {
          puVar6 = (uint64_t *)RenderingSystem_GraphicsProcessor(puVar2,stack_array_60);
          puVar6 = (uint64_t *)*puVar6;
        }
        if (*(char *)(puVar6[5] + 0x823) != '\0') {
          puVar6 = puVar2;
          puVar4 = *(uint64_t **)(param_1 + 0x118);
          while (puVar4 != (uint64_t *)0x0) {
            if ((int64_t *)puVar4[4] < plStack_118) {
              puVar4 = (uint64_t *)*puVar4;
            }
            else {
              puVar6 = puVar4;
              puVar4 = (uint64_t *)puVar4[1];
            }
          }
          if ((puVar6 == puVar2) || (plStack_118 < (int64_t *)puVar6[4])) {
            puVar6 = (uint64_t *)RenderingSystem_GraphicsProcessor(puVar2,stack_array_58);
            puVar6 = (uint64_t *)*puVar6;
          }
          RenderingSystem_03b70(puVar6[5],0x7ffbe9eb,0);
        }
        cVar5 = UISystem_8adf0(param_1,&plStack_118);
        plVar14 = plStack_f0;
        plVar11 = plStack_180;
        plVar18 = plStack_188;
        if (cVar5 == '\0') {
          if (plStack_180 < plVar20) {
            plStack_180 = plStack_180 + 0x15;
            UISystem_89f80(plVar11,&plStack_118);
          }
          else {
            lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) *
                           SEXT816((int64_t)plStack_180 - (int64_t)plStack_188),8) +
                    ((int64_t)plStack_180 - (int64_t)plStack_188);
            lVar8 = (lVar8 >> 7) - (lVar8 >> 0x3f);
            if (lVar8 == 0) {
              lVar8 = 1;
LAB_18048a7a8:
              plVar7 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 0xa8,3);
            }
            else {
              lVar8 = lVar8 * 2;
              if (lVar8 != 0) goto LAB_18048a7a8;
            }
            UISystem_8cfd0(&plStack_1b0,plVar18,plVar11,plVar7);
            plVar14 = plStack_1b0;
            UISystem_89f80(plStack_1b0,&plStack_118);
            for (plVar20 = plVar18; plVar20 != plVar11; plVar20 = plVar20 + 0x15) {
              UISystem_8a0c0(plVar20);
            }
            if (plVar18 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(plVar18);
            }
            plVar20 = plVar7 + lVar8 * 0x15;
            uVar21 = (uint64_t)plStackX_8 & 0xffffffff;
            plStack_188 = plVar7;
            plStack_180 = plVar14 + 0x15;
            plStack_178 = plVar20;
          }
        }
        else {
          plStack_198 = (int64_t *)0x0;
          plStack_190 = (int64_t *)0x0;
          pplStack_1a8 = (int64_t **)plStack_f0;
          if (plStack_f0 != (int64_t *)0x0) {
            (**(code **)(*plStack_f0 + 0x28))(plStack_f0);
          }
          plVar7 = plStack_118;
          pplStack_1a8 = (int64_t **)0x0;
          plStack_190 = plVar14;
          if (plStack_118 != (int64_t *)0x0) {
            (**(code **)(*plStack_118 + 0x28))(plStack_118);
          }
          plStack_198 = plVar7;
          plVar18 = *(int64_t **)(param_1 + 0x160);
          if (plVar18 < *(int64_t **)(param_1 + 0x168)) {
            *(int64_t **)(param_1 + 0x160) = plVar18 + 2;
            *plVar18 = (int64_t)plVar7;
            plStackX_8 = plVar18;
            if (plVar7 != (int64_t *)0x0) {
              (**(code **)(*plVar7 + 0x28))(plVar7);
            }
            plVar18[1] = (int64_t)plVar14;
            if (plVar14 != (int64_t *)0x0) {
              (**(code **)(*plVar14 + 0x28))(plVar14);
            }
          }
          else {
            UISystem_8cc30(param_1 + 0x158,&plStack_198);
            plVar14 = plStack_190;
            plVar7 = plStack_198;
          }
          uVar17 = (int)uVar21 + 1;
          uVar21 = (uint64_t)uVar17;
          plStackX_8 = (int64_t *)CONCAT44(plStackX_8._4_4_,uVar17);
          *(int32_t *)(param_1 + 0xf0) = 1;
          if (plVar14 != (int64_t *)0x0) {
            (**(code **)(*plVar14 + 0x38))(plVar14);
          }
          if (plVar7 != (int64_t *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7);
          }
        }
      }
      *(int64_t *)(param_1 + 0x140) = *(int64_t *)(param_1 + 0x140) + -0xa8;
      UISystem_8a0c0(*(uint64_t *)(param_1 + 0x140));
      plStackX_18 = (int64_t *)CONCAT44(plStackX_18._4_4_,(int)plStackX_18 + 1);
      *(int8_t *)(param_1 + 0xf8) = 1;
      pplocal_var_1a0 = (void **)stack_array_90;
      if (pcStack_80 != (code *)0x0) {
        (*pcStack_80)(stack_array_90,0);
      }
      pplocal_var_1a0 = &plocal_var_c8;
      plocal_var_c8 = &system_data_buffer_ptr;
      if (lStack_c0 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_c0 = 0;
      local_var_b0 = 0;
      plocal_var_c8 = &system_state_ptr;
      plocal_var_e8 = &system_data_buffer_ptr;
      pplocal_var_1a0 = &plocal_var_e8;
      if (lStack_e0 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_e0 = 0;
      local_var_d0 = 0;
      plocal_var_e8 = &system_state_ptr;
      if (plStack_f0 != (int64_t *)0x0) {
        (**(code **)(*plStack_f0 + 0x38))();
      }
      if (plStack_f8 != (int64_t *)0x0) {
        (**(code **)(*plStack_f8 + 0x38))();
      }
      if (plStack_100 != (int64_t *)0x0) {
        (**(code **)(*plStack_100 + 0x38))();
      }
      if (plStack_108 != (int64_t *)0x0) {
        (**(code **)(*plStack_108 + 0x38))();
      }
      if (plStack_110 != (int64_t *)0x0) {
        (**(code **)(*plStack_110 + 0x38))();
      }
      if (plStack_118 != (int64_t *)0x0) {
        (**(code **)(*plStack_118 + 0x38))();
      }
      lVar8 = *(int64_t *)(param_1 + 0x140) - *(int64_t *)(param_1 + 0x138);
      lVar8 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar8),8) + lVar8;
    } while (lVar8 >> 7 != lVar8 >> 0x3f);
  }
  lVar8 = ((int64_t)plStack_180 - (int64_t)plStack_188) +
          SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) *
                 SEXT816((int64_t)plStack_180 - (int64_t)plStack_188),8);
  iVar16 = ((int)(lVar8 >> 7) - (int)(lVar8 >> 0x3f)) + -1;
  if (-1 < iVar16) {
    plVar7 = plStack_188 + (int64_t)iVar16 * 0x15;
    do {
      uVar21 = *(uint64_t *)(param_1 + 0x140);
      if (uVar21 < *(uint64_t *)(param_1 + 0x148)) {
        *(uint64_t *)(param_1 + 0x140) = uVar21 + 0xa8;
        UISystem_89f80(uVar21,plVar7);
      }
      else {
        lVar8 = *(int64_t *)(param_1 + 0x138);
        lVar10 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816((int64_t)(uVar21 - lVar8)),8) +
                 (uVar21 - lVar8);
        lVar10 = (lVar10 >> 7) - (lVar10 >> 0x3f);
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_18048aaf5:
          lVar9 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0xa8,*(int8_t *)(param_1 + 0x150));
          uVar21 = *(uint64_t *)(param_1 + 0x140);
          lVar8 = *(int64_t *)(param_1 + 0x138);
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_18048aaf5;
          lVar9 = 0;
        }
        UISystem_8cfd0(&plStackX_8,lVar8,uVar21,lVar9);
        plVar18 = plStackX_8;
        UISystem_89f80(plStackX_8,plVar7);
        plStackX_18 = plVar18 + 0x15;
        lVar8 = *(int64_t *)(param_1 + 0x140);
        lVar15 = *(int64_t *)(param_1 + 0x138);
        if (lVar15 != lVar8) {
          do {
            UISystem_8a0c0(lVar15);
            lVar15 = lVar15 + 0xa8;
          } while (lVar15 != lVar8);
          lVar15 = *(int64_t *)(param_1 + 0x138);
        }
        if (lVar15 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar15);
        }
        *(int64_t *)(param_1 + 0x138) = lVar9;
        *(int64_t **)(param_1 + 0x140) = plStackX_18;
        *(int64_t *)(param_1 + 0x148) = lVar10 * 0xa8 + lVar9;
      }
      plVar7 = plVar7 + -0x15;
      iVar16 = iVar16 + -1;
    } while (-1 < iVar16);
  }
  plVar18 = plStack_180;
  plVar7 = plStack_188;
  iVar16 = *(int *)(system_main_module_state + 0x224);
  lVar8 = *(int64_t *)(render_system_data_memory + 0x200);
  if (lVar8 != render_system_data_memory + 0x1f8) {
    do {
      plVar11 = *(int64_t **)(lVar8 + 0x30);
      plStackX_8 = plVar11;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11);
      }
      if ((plVar11[0x68] != 0) && (plVar11[0x68] + 3U < (uint64_t)(int64_t)iVar16)) {
        SystemCore_NetworkHandler(plVar11,0);
        plVar11[0x68] = 0;
      }
      (**(code **)(*plVar11 + 0x38))(plVar11);
      lVar8 = SystemFunction_00018066bd70(lVar8);
    } while (lVar8 != render_system_data_memory + 0x1f8);
  }
  plVar11 = plVar7;
  if (*(int *)(param_1 + 0xfc) == *(int *)(param_1 + 0x100)) {
    for (lVar8 = *(int64_t *)(param_1 + 0x110); lVar8 != param_1 + 0x108;
        lVar8 = SystemFunction_00018066bd70(lVar8)) {
      lVar10 = *(int64_t *)(lVar8 + 0x28);
      RenderingSystem_97960(*(int64_t *)(lVar8 + 0x20) + 14000);
      plStackX_8 = *(int64_t **)(lVar10 + 0x570);
      *(uint64_t *)(lVar10 + 0x570) = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_18 = *(int64_t **)(lVar10 + 0x578);
      *(uint64_t *)(lVar10 + 0x578) = 0;
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      plStackX_20 = *(int64_t **)(lVar10 + 0x548);
      *(uint64_t *)(lVar10 + 0x548) = 0;
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      plVar20 = *(int64_t **)(lVar10 + 0x530);
      *(uint64_t *)(lVar10 + 0x530) = 0;
      if (plVar20 != (int64_t *)0x0) {
        (**(code **)(*plVar20 + 0x38))();
      }
      pplStack_1a8 = *(int64_t ***)(lVar10 + 0x660);
      *(uint64_t *)(lVar10 + 0x660) = 0;
      if (pplStack_1a8 != (int64_t **)0x0) {
        (*(code *)(*pplStack_1a8)[7])();
      }
      plStack_1b0 = *(int64_t **)(lVar10 + 0x38);
      *(uint64_t *)(lVar10 + 0x38) = 0;
      if (plStack_1b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1b0 + 0x38))();
      }
      *(int8_t *)(lVar10 + 0x821) = 1;
    }
  }
  for (; plVar11 != plVar18; plVar11 = plVar11 + 0x15) {
    UISystem_8a0c0(plVar11);
  }
  if (plVar7 == (int64_t *)0x0) {
    return 0;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plVar7);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address