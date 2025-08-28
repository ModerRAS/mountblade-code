// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
// 99_part_06_part071.c - 3 个函数
// 函数: void function_3eb3a0(uint64_t param_1,uint64_t param_2)
void function_3eb3a0(uint64_t param_1,uint64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  int *piVar7;
  void *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int8_t *puVar11;
  uint64_t uVar12;
  void *puVar13;
  uint64_t *puVar14;
  int *piVar15;
  int8_t stack_array_178 [32];
  uint64_t local_var_158;
  int8_t stack_array_150 [8];
  int64_t *plStack_148;
  int8_t stack_array_140 [8];
  int64_t *plStack_138;
  int8_t stack_array_130 [8];
  int64_t *plStack_128;
  int8_t stack_array_120 [8];
  int64_t *plStack_118;
  int8_t local_var_110;
  uint8_t local_var_10f;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  int8_t local_var_d0;
  uint8_t local_var_cf;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  int8_t local_var_b0;
  uint8_t local_var_af;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  int8_t local_var_90;
  uint8_t local_var_8f;
  uint64_t local_var_80;
  uint64_t local_var_78;
  int8_t local_var_70;
  uint8_t local_var_6f;
  uint64_t local_var_60;
  uint64_t local_var_58;
  int8_t local_var_50;
  uint8_t local_var_4f;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  local_var_158 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  local_var_c0 = 0;
  local_var_b8 = 0xf;
  local_var_d0 = 0;
  MathCoreCalculator0(&local_var_d0,&processed_var_944_ptr,8);
  plVar5 = (int64_t *)function_472900(param_2,stack_array_150,&local_var_d0);
  plVar5 = (int64_t *)*plVar5;
  puVar14 = (uint64_t *)&system_data_c170;
  if (plVar5 != (int64_t *)0x0) {
    puVar6 = (uint64_t *)(**(code **)(*plVar5 + 8))(plVar5,0x180d48ef4);
    if (puVar6 != (uint64_t *)0x0) {
      puVar14 = puVar6;
    }
  }
  local_var_e0 = 0;
  local_var_d8 = 0;
  uVar10 = puVar14[2];
  if (0xf < puVar14[3]) {
    puVar14 = (uint64_t *)*puVar14;
  }
  if (0xf < uVar10) {
    uVar12 = uVar10 | 0xf;
    if (0x7fffffffffffffff < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    local_var_f0 = SystemCore_SyscallHandler(uVar12 + 1);
// WARNING: Subroutine does not return
    memcpy(local_var_f0,puVar14,uVar10 + 1);
  }
  local_var_f0 = *puVar14;
  local_var_e8 = puVar14[1];
  local_var_d8 = 0xf;
  local_var_e0 = uVar10;
  if (plStack_148 != (int64_t *)0x0) {
    LOCK();
    plVar5 = plStack_148 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_148)(plStack_148);
      LOCK();
      piVar15 = (int *)((int64_t)plStack_148 + 0xc);
      iVar1 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plStack_148 + 8))(plStack_148);
      }
    }
  }
  if (0xf < local_var_b8) {
    uVar10 = local_var_b8 + 1;
    lVar2 = CONCAT71(local_var_cf,local_var_d0);
    lVar9 = lVar2;
    if (0xfff < uVar10) {
      uVar10 = local_var_b8 + 0x28;
      lVar9 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar9) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar10);
  }
  local_var_c0 = 0;
  local_var_b8 = 0xf;
  local_var_d0 = 0;
  local_var_a0 = 0;
  local_var_98 = 0xf;
  local_var_b0 = 0;
  MathCoreCalculator0(&local_var_b0,&processed_var_944_ptr,8);
  plVar5 = (int64_t *)function_472900(param_2,stack_array_140,&local_var_b0);
  plVar5 = (int64_t *)*plVar5;
  piVar15 = (int *)&system_data_c170;
  if (plVar5 != (int64_t *)0x0) {
    piVar7 = (int *)(**(code **)(*plVar5 + 8))(plVar5,0x180d48ef4);
    if (piVar7 != (int *)0x0) {
      piVar15 = piVar7;
    }
  }
  plVar5 = (int64_t *)(piVar15 + 4);
  if (0xf < *(uint64_t *)(piVar15 + 6)) {
    piVar15 = *(int **)piVar15;
  }
  if (((*plVar5 == 6) && (*piVar15 == 0x65736162)) && ((short)piVar15[1] == 0x3436)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (plStack_138 != (int64_t *)0x0) {
    LOCK();
    plVar5 = plStack_138 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar15 = (int *)((int64_t)plStack_138 + 0xc);
      iVar1 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138);
      }
    }
  }
  if (0xf < local_var_98) {
    uVar10 = local_var_98 + 1;
    lVar2 = CONCAT71(local_var_af,local_var_b0);
    lVar9 = lVar2;
    if (0xfff < uVar10) {
      uVar10 = local_var_98 + 0x28;
      lVar9 = *(int64_t *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar9) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar10);
  }
  local_var_a0 = 0;
  local_var_98 = 0xf;
  local_var_b0 = 0;
  if (bVar3) {
    local_var_100 = 0;
    local_var_f8 = 0xf;
    local_var_110 = 0;
    local_var_80 = 0;
    local_var_78 = 0xf;
    local_var_90 = 0;
    MathCoreCalculator0(&local_var_90,&processed_var_968_ptr,7);
    plVar5 = (int64_t *)function_472900(param_2,stack_array_130,&local_var_90);
    plVar5 = (int64_t *)*plVar5;
    puVar13 = &system_data_c170;
    if (plVar5 != (int64_t *)0x0) {
      puVar8 = (void *)(**(code **)(*plVar5 + 8))(plVar5,0x180d48ef4);
      if (puVar8 != (void *)0x0) {
        puVar13 = puVar8;
      }
    }
    cVar4 = function_482e70(puVar13,&local_var_110);
    if (plStack_128 != (int64_t *)0x0) {
      LOCK();
      plVar5 = plStack_128 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_128)(plStack_128);
        LOCK();
        piVar15 = (int *)((int64_t)plStack_128 + 0xc);
        iVar1 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plStack_128 + 8))(plStack_128);
        }
      }
    }
    if (0xf < local_var_78) {
      uVar10 = local_var_78 + 1;
      lVar2 = CONCAT71(local_var_8f,local_var_90);
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = local_var_78 + 0x28;
        lVar9 = *(int64_t *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    local_var_80 = 0;
    local_var_78 = 0xf;
    local_var_90 = 0;
    if (cVar4 == '\0') {
// WARNING: Subroutine does not return
      SystemParameterHandler(system_message_context,&processed_var_856_ptr);
    }
    puVar11 = &local_var_110;
    if (0xf < local_var_f8) {
      puVar11 = (int8_t *)CONCAT71(local_var_10f,local_var_110);
    }
    function_6281a0(param_1,puVar11);
    if (0xf < local_var_f8) {
      uVar10 = local_var_f8 + 1;
      lVar2 = CONCAT71(local_var_10f,local_var_110);
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = local_var_f8 + 0x28;
        lVar9 = *(int64_t *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    local_var_100 = 0;
    local_var_f8 = 0xf;
    local_var_110 = 0;
  }
  else {
    local_var_60 = 0;
    local_var_58 = 0xf;
    local_var_70 = 0;
    MathCoreCalculator0(&local_var_70,&processed_var_968_ptr,7);
    plVar5 = (int64_t *)function_472900(param_2,stack_array_120,&local_var_70);
    plVar5 = (int64_t *)*plVar5;
    puVar13 = &system_data_c170;
    if (plVar5 != (int64_t *)0x0) {
      puVar8 = (void *)(**(code **)(*plVar5 + 8))(plVar5,0x180d48ef4);
      if (puVar8 != (void *)0x0) {
        puVar13 = puVar8;
      }
    }
    function_18b350(&local_var_50,puVar13);
    if (plStack_118 != (int64_t *)0x0) {
      LOCK();
      plVar5 = plStack_118 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_118)(plStack_118);
        LOCK();
        piVar15 = (int *)((int64_t)plStack_118 + 0xc);
        iVar1 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plStack_118 + 8))(plStack_118);
        }
      }
    }
    if (0xf < local_var_58) {
      uVar10 = local_var_58 + 1;
      lVar2 = CONCAT71(local_var_6f,local_var_70);
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = local_var_58 + 0x28;
        lVar9 = *(int64_t *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    local_var_60 = 0;
    local_var_58 = 0xf;
    local_var_70 = 0;
    puVar11 = &local_var_50;
    if (0xf < local_var_38) {
      puVar11 = (int8_t *)CONCAT71(local_var_4f,local_var_50);
    }
    function_6281a0(param_1,puVar11);
    if (0xf < local_var_38) {
      uVar10 = local_var_38 + 1;
      lVar2 = CONCAT71(local_var_4f,local_var_50);
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = local_var_38 + 0x28;
        lVar9 = *(int64_t *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    local_var_40 = 0;
    local_var_38 = 0xf;
    local_var_50 = 0;
  }
  if (0xf < local_var_d8) {
    uVar12 = local_var_d8 + 1;
    uVar10 = local_var_f0;
    if (0xfff < uVar12) {
      uVar12 = local_var_d8 + 0x28;
      uVar10 = *(uint64_t *)(local_var_f0 - 8);
      if (0x1f < (local_var_f0 - uVar10) - 8) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(uVar10,uVar12);
  }
  local_var_e0 = 0;
  local_var_d8 = 0xf;
  local_var_f0 = local_var_f0 & 0xffffffffffffff00;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3eb9e0(int64_t param_1,int64_t param_2)
void function_3eb9e0(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  int64_t lVar5;
  int iVar6;
  char *pcVar7;
  int64_t lVar8;
  void *puVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int iVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int iVar16;
  bool bVar17;
  int8_t stack_array_e8 [32];
  uint64_t local_var_c8;
  int64_t lStack_b8;
  int8_t stack_array_b0 [8];
  int64_t *plStack_a8;
  uint64_t local_var_a0;
  int8_t *plocal_var_98;
  int8_t stack_array_90 [64];
  int8_t local_var_50;
  uint8_t local_var_4f;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  lVar11 = param_1 + 0x520;
  lStack_b8 = lVar11;
  iVar6 = _Mtx_lock(lVar11);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plocal_var_98 = stack_array_90;
  function_3f2eb0(stack_array_90);
  function_4724f0(stack_array_b0,stack_array_90);
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar9 = *(void **)(param_2 + 8);
  }
  local_var_40 = 0;
  local_var_38 = 0xf;
  local_var_50 = 0;
  iVar6 = -1;
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (puVar9[lVar13] != '\0');
  MathCoreCalculator0(&local_var_50);
  local_var_c8 = 0;
  function_3e8510(*(uint64_t *)(param_1 + 0x188),1,&local_var_50);
  if (0xf < local_var_38) {
    uVar10 = local_var_38 + 1;
    lVar5 = CONCAT71(local_var_4f,local_var_50);
    lVar13 = lVar5;
    if (0xfff < uVar10) {
      uVar10 = local_var_38 + 0x28;
      lVar13 = *(int64_t *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar13) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar13,uVar10);
  }
  local_var_40 = 0;
  local_var_38 = 0xf;
  local_var_50 = 0;
  if (plStack_a8 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plStack_a8 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    lVar11 = lStack_b8;
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_a8)(plStack_a8);
      LOCK();
      piVar2 = (int *)((int64_t)plStack_a8 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar11 = lStack_b8;
      if (iVar16 == 1) {
        (**(code **)(*plStack_a8 + 8))(plStack_a8);
        lVar11 = lStack_b8;
      }
    }
  }
  iVar16 = 0;
  lVar13 = *(int64_t *)(param_1 + 0x1a0);
  lVar8 = *(int64_t *)(param_1 + 0x1a8) - lVar13;
  lVar5 = lVar8 >> 0x3f;
  lVar8 = lVar8 / 0x118 + lVar5;
  if (lVar8 != lVar5) {
    lVar15 = 0;
    iVar12 = iVar6;
    do {
      iVar6 = *(int *)(lVar15 + 0x10 + lVar13);
      if (iVar6 == *(int *)(param_2 + 0x10)) {
        if (iVar6 == 0) {
LAB_1803ebbee:
          if (*(int *)(param_2 + 0x10) != 0) goto LAB_1803ebbf7;
          bVar17 = true;
        }
        else {
          pcVar7 = *(char **)(lVar15 + 8 + lVar13);
          lVar14 = *(int64_t *)(param_2 + 8) - (int64_t)pcVar7;
          do {
            cVar3 = *pcVar7;
            cVar4 = pcVar7[lVar14];
            if (cVar3 != cVar4) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar4 != '\0');
          bVar17 = cVar3 == cVar4;
        }
      }
      else {
        if (iVar6 == 0) goto LAB_1803ebbee;
LAB_1803ebbf7:
        bVar17 = false;
      }
      iVar6 = iVar16;
      if (!bVar17) {
        iVar6 = iVar12;
      }
      iVar16 = iVar16 + 1;
      lVar15 = lVar15 + 0x118;
      iVar12 = iVar6;
    } while ((uint64_t)(int64_t)iVar16 < (uint64_t)(lVar8 - lVar5));
  }
  function_3f30e0(param_1 + 0x1a0,iVar6);
  function_3f30e0(param_1 + 0x1c0,iVar6);
  *(int32_t *)(param_1 + 0x438) = 0;
  iVar6 = _Mtx_unlock(lVar11);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3ebc80(int64_t param_1,int64_t param_2,int64_t *param_3,uint64_t param_4)
void function_3ebc80(int64_t param_1,int64_t param_2,int64_t *param_3,uint64_t param_4)
{
  int *piVar1;
  int64_t *plVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  void *puVar10;
  uint64_t uVar11;
  int8_t *puVar12;
  uint64_t *puVar13;
  int8_t stack_array_478 [32];
  int64_t **pplStack_458;
  int32_t local_var_448;
  int32_t *plocal_var_440;
  uint64_t *plocal_var_438;
  int8_t *plocal_var_430;
  uint64_t *plocal_var_428;
  int64_t *plStack_420;
  int64_t *plStack_418;
  int8_t *plocal_var_410;
  uint64_t local_var_408;
  int64_t lStack_400;
  int8_t stack_array_3f8 [8];
  int64_t *plStack_3f0;
  int8_t stack_array_3e8 [16];
  uint64_t local_var_3d8;
  uint64_t local_var_3d0;
  int8_t stack_array_3c8 [16];
  uint64_t local_var_3b8;
  uint64_t local_var_3b0;
  int8_t stack_array_3a8 [16];
  uint64_t local_var_398;
  uint64_t local_var_390;
  int8_t stack_array_388 [16];
  uint64_t local_var_378;
  uint64_t local_var_370;
  int32_t stack_array_368 [2];
  uint64_t local_var_360;
  uint64_t local_var_358;
  uint64_t local_var_350;
  uint64_t local_var_348;
  uint64_t local_var_340;
  uint64_t local_var_328;
  int8_t stack_array_320 [16];
  int8_t stack_array_310 [16];
  int8_t stack_array_300 [16];
  int8_t stack_array_2f0 [8];
  int64_t *plStack_2e8;
  int32_t stack_array_2d8 [16];
  int8_t stack_array_298 [64];
  int8_t stack_array_258 [64];
  int8_t stack_array_218 [64];
  int8_t local_var_1d8;
  uint8_t local_var_1d7;
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  int8_t local_var_1b8;
  uint8_t local_var_1b7;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  int8_t local_var_198;
  uint8_t local_var_197;
  uint64_t local_var_188;
  uint64_t local_var_180;
  void *plocal_var_178;
  void *plocal_var_170;
  uint64_t local_var_58;
  local_var_328 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_478;
  local_var_448 = 0;
  function_6240a0(&plocal_var_178);
  function_069280(&plocal_var_178,&system_data_e2c8,&system_data_cfb8);
  plocal_var_410 = stack_array_320;
  plocal_var_428 = (uint64_t *)stack_array_258;
  plocal_var_438 = &local_var_408;
  if (system_system_memory != 0) {
    LOCK();
    *(int *)(system_system_memory + 8) = *(int *)(system_system_memory + 8) + 1;
    UNLOCK();
  }
  local_var_408 = system_system_memory;
  lStack_400 = system_system_memory;
  plocal_var_430 = stack_array_3e8;
  local_var_3d8 = 0;
  local_var_3d0 = 0xf;
  stack_array_3e8[0] = 0;
  MathCoreCalculator0(stack_array_3e8,&processed_var_896_ptr,0xd);
  uVar4 = function_3f3ac0(stack_array_258,stack_array_3e8,&local_var_408);
  uVar4 = function_4724f0(stack_array_320,uVar4);
  plocal_var_438 = (uint64_t *)stack_array_3c8;
  local_var_3b8 = 0;
  local_var_3b0 = 0xf;
  stack_array_3c8[0] = 0;
  MathCoreCalculator0(stack_array_3c8,&processed_var_912_ptr,9);
  uVar4 = function_3f3ac0(stack_array_298,stack_array_3c8,uVar4);
  plocal_var_438 = (uint64_t *)stack_array_300;
  plocal_var_428 = (uint64_t *)stack_array_218;
  plocal_var_430 = &system_buffer_ptr;
  if (plocal_var_170 != (void *)0x0) {
    plocal_var_430 = plocal_var_170;
  }
  plocal_var_410 = stack_array_310;
  puVar10 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar10 = *(void **)(param_2 + 8);
  }
  uVar5 = function_472360(stack_array_310,puVar10);
  plocal_var_440 = (int32_t *)stack_array_3a8;
  local_var_398 = 0;
  local_var_390 = 0xf;
  stack_array_3a8[0] = 0;
  MathCoreCalculator0(stack_array_3a8,&system_data_3a84,4);
  pplStack_458 = (int64_t **)&plocal_var_430;
  uVar5 = function_3f3dd0(stack_array_218,stack_array_3a8,uVar5);
  uVar5 = function_4724f0(stack_array_300,uVar5);
  plocal_var_440 = (int32_t *)stack_array_388;
  local_var_378 = 0;
  local_var_370 = 0xf;
  stack_array_388[0] = 0;
  MathCoreCalculator0(stack_array_388,&ui_system_data_1048_ptr,7);
  pplStack_458 = (int64_t **)uVar4;
  function_3f3fe0(stack_array_2d8,stack_array_388,uVar5);
  plocal_var_440 = (int32_t *)stack_array_298;
  function_3e8470(stack_array_298);
  plStack_420 = (int64_t *)0x0;
  plStack_418 = (int64_t *)0x0;
  plocal_var_440 = stack_array_368;
  plocal_var_438 = (uint64_t *)stack_array_368;
  stack_array_368[0] = stack_array_2d8[0];
  plocal_var_428 = &local_var_360;
  local_var_360 = 0;
  local_var_358 = 0;
  local_var_360 = function_3f4cb0();
  local_var_350 = 0;
  local_var_348 = 0;
  local_var_340 = 0;
  function_3f44d0(stack_array_368,stack_array_2d8);
  function_4724f0(stack_array_3f8,stack_array_368);
  local_var_1a8 = 0;
  local_var_1a0 = 0xf;
  local_var_1b8 = 0;
  MathCoreCalculator0(&local_var_1b8,&ui_system_data_1056_ptr,9);
  pplStack_458 = &plStack_420;
  function_3e8510(*(uint64_t *)(param_1 + 0x188),2,&local_var_1b8,stack_array_3f8);
  if (0xf < local_var_1a0) {
    uVar11 = local_var_1a0 + 1;
    lVar6 = CONCAT71(local_var_1b7,local_var_1b8);
    lVar9 = lVar6;
    if (0xfff < uVar11) {
      uVar11 = local_var_1a0 + 0x28;
      lVar9 = *(int64_t *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar11);
  }
  local_var_1a8 = 0;
  local_var_1a0 = 0xf;
  local_var_1b8 = 0;
  if (plStack_3f0 != (int64_t *)0x0) {
    LOCK();
    plVar7 = plStack_3f0 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_3f0)(plStack_3f0);
      LOCK();
      piVar1 = (int *)((int64_t)plStack_3f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_3f0 + 8))(plStack_3f0);
      }
    }
  }
  local_var_188 = 0;
  local_var_180 = 0xf;
  local_var_198 = 0;
  MathCoreCalculator0(&local_var_198,&ui_system_data_1072_ptr,8);
  lVar9 = 0x180d49d50;
  if (plStack_420 != (int64_t *)0x0) {
    lVar6 = (**(code **)(*plStack_420 + 8))(plStack_420,0x180d48ef0);
    if (lVar6 != 0) {
      lVar9 = lVar6;
    }
  }
  plVar7 = (int64_t *)function_472900(lVar9,stack_array_2f0,&local_var_198);
  local_var_448 = 1;
  plVar7 = (int64_t *)*plVar7;
  puVar13 = (uint64_t *)&system_data_c170;
  if (plVar7 != (int64_t *)0x0) {
    puVar8 = (uint64_t *)(**(code **)(*plVar7 + 8))(plVar7,0x180d48ef4);
    if (puVar8 != (uint64_t *)0x0) {
      puVar13 = puVar8;
    }
  }
  local_var_1c8 = 0;
  local_var_1c0 = 0xf;
  local_var_1d8 = 0;
  local_var_448 = 3;
  function_3f45e0(&local_var_1d8,puVar13[2] + 10);
  function_3f5400(&local_var_1d8,&processed_var_976_ptr,10);
  puVar8 = puVar13 + 2;
  if (0xf < (uint64_t)puVar13[3]) {
    puVar13 = (uint64_t *)*puVar13;
  }
  function_3f5400(&local_var_1d8,puVar13,*puVar8);
  puVar12 = &local_var_1d8;
  if (0xf < local_var_1c0) {
    puVar12 = (int8_t *)CONCAT71(local_var_1d7,local_var_1d8);
  }
  (**(code **)(*param_3 + 0x10))(param_3,puVar12);
  local_var_448 = 1;
  if (0xf < local_var_1c0) {
    uVar11 = local_var_1c0 + 1;
    lVar6 = CONCAT71(local_var_1d7,local_var_1d8);
    lVar9 = lVar6;
    if (0xfff < uVar11) {
      uVar11 = local_var_1c0 + 0x28;
      lVar9 = *(int64_t *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar11);
  }
  local_var_1c8 = 0;
  local_var_1c0 = 0xf;
  local_var_1d8 = 0;
  local_var_448 = 0;
  if (plStack_2e8 != (int64_t *)0x0) {
    LOCK();
    plVar7 = plStack_2e8 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_2e8)(plStack_2e8);
      LOCK();
      piVar1 = (int *)((int64_t)plStack_2e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_2e8 + 8))(plStack_2e8);
      }
    }
  }
  if (0xf < local_var_180) {
    uVar11 = local_var_180 + 1;
    lVar6 = CONCAT71(local_var_197,local_var_198);
    lVar9 = lVar6;
    if (0xfff < uVar11) {
      uVar11 = local_var_180 + 0x28;
      lVar9 = *(int64_t *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar11);
  }
  local_var_188 = 0;
  local_var_180 = 0xf;
  local_var_198 = 0;
  puVar10 = &system_buffer_ptr;
  if ((void *)param_3[1] != (void *)0x0) {
    puVar10 = (void *)param_3[1];
  }
  System_DataHandler(param_4,&processed_var_992_ptr,puVar10);
  plVar7 = plStack_418;
  if (plStack_418 != (int64_t *)0x0) {
    LOCK();
    plVar2 = plStack_418 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_418)(plStack_418);
      LOCK();
      piVar1 = (int *)((int64_t)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_418 + 8))();
      }
    }
  }
  plocal_var_440 = stack_array_2d8;
  function_3e8470(stack_array_2d8);
  plocal_var_178 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_478);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address