#include "TaleWorlds.Native.Split.h"

// 99_part_06_part071.c - 3 个函数

// 函数: void FUN_1803eb3a0(uint64_t param_1,uint64_t param_2)
void FUN_1803eb3a0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  void *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int8_t *puVar11;
  ulonglong uVar12;
  void *puVar13;
  ulonglong *puVar14;
  int *piVar15;
  int8_t auStack_178 [32];
  uint64_t uStack_158;
  int8_t auStack_150 [8];
  longlong *plStack_148;
  int8_t auStack_140 [8];
  longlong *plStack_138;
  int8_t auStack_130 [8];
  longlong *plStack_128;
  int8_t auStack_120 [8];
  longlong *plStack_118;
  int8_t uStack_110;
  undefined7 uStack_10f;
  uint64_t uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  int8_t uStack_d0;
  undefined7 uStack_cf;
  uint64_t uStack_c0;
  ulonglong uStack_b8;
  int8_t uStack_b0;
  undefined7 uStack_af;
  uint64_t uStack_a0;
  ulonglong uStack_98;
  int8_t uStack_90;
  undefined7 uStack_8f;
  uint64_t uStack_80;
  ulonglong uStack_78;
  int8_t uStack_70;
  undefined7 uStack_6f;
  uint64_t uStack_60;
  ulonglong uStack_58;
  int8_t uStack_50;
  undefined7 uStack_4f;
  uint64_t uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  uStack_158 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  uStack_c0 = 0;
  uStack_b8 = 0xf;
  uStack_d0 = 0;
  FUN_1800671b0(&uStack_d0,&UNK_180a25a80,8);
  plVar5 = (longlong *)FUN_180472900(param_2,auStack_150,&uStack_d0);
  plVar5 = (longlong *)*plVar5;
  puVar14 = (ulonglong *)&DAT_180bfc170;
  if (plVar5 != (longlong *)0x0) {
    puVar6 = (ulonglong *)(**(code **)(*plVar5 + 8))(plVar5,0x180d48ef4);
    if (puVar6 != (ulonglong *)0x0) {
      puVar14 = puVar6;
    }
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  uVar10 = puVar14[2];
  if (0xf < puVar14[3]) {
    puVar14 = (ulonglong *)*puVar14;
  }
  if (0xf < uVar10) {
    uVar12 = uVar10 | 0xf;
    if (0x7fffffffffffffff < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    uStack_f0 = FUN_180067110(uVar12 + 1);
                    // WARNING: Subroutine does not return
    memcpy(uStack_f0,puVar14,uVar10 + 1);
  }
  uStack_f0 = *puVar14;
  uStack_e8 = puVar14[1];
  uStack_d8 = 0xf;
  uStack_e0 = uVar10;
  if (plStack_148 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_148 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_148)(plStack_148);
      LOCK();
      piVar15 = (int *)((longlong)plStack_148 + 0xc);
      iVar1 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plStack_148 + 8))(plStack_148);
      }
    }
  }
  if (0xf < uStack_b8) {
    uVar10 = uStack_b8 + 1;
    lVar2 = CONCAT71(uStack_cf,uStack_d0);
    lVar9 = lVar2;
    if (0xfff < uVar10) {
      uVar10 = uStack_b8 + 0x28;
      lVar9 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar10);
  }
  uStack_c0 = 0;
  uStack_b8 = 0xf;
  uStack_d0 = 0;
  uStack_a0 = 0;
  uStack_98 = 0xf;
  uStack_b0 = 0;
  FUN_1800671b0(&uStack_b0,&UNK_180a25a80,8);
  plVar5 = (longlong *)FUN_180472900(param_2,auStack_140,&uStack_b0);
  plVar5 = (longlong *)*plVar5;
  piVar15 = (int *)&DAT_180bfc170;
  if (plVar5 != (longlong *)0x0) {
    piVar7 = (int *)(**(code **)(*plVar5 + 8))(plVar5,0x180d48ef4);
    if (piVar7 != (int *)0x0) {
      piVar15 = piVar7;
    }
  }
  plVar5 = (longlong *)(piVar15 + 4);
  if (0xf < *(ulonglong *)(piVar15 + 6)) {
    piVar15 = *(int **)piVar15;
  }
  if (((*plVar5 == 6) && (*piVar15 == 0x65736162)) && ((short)piVar15[1] == 0x3436)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (plStack_138 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_138 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar15 = (int *)((longlong)plStack_138 + 0xc);
      iVar1 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138);
      }
    }
  }
  if (0xf < uStack_98) {
    uVar10 = uStack_98 + 1;
    lVar2 = CONCAT71(uStack_af,uStack_b0);
    lVar9 = lVar2;
    if (0xfff < uVar10) {
      uVar10 = uStack_98 + 0x28;
      lVar9 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar10);
  }
  uStack_a0 = 0;
  uStack_98 = 0xf;
  uStack_b0 = 0;
  if (bVar3) {
    uStack_100 = 0;
    uStack_f8 = 0xf;
    uStack_110 = 0;
    uStack_80 = 0;
    uStack_78 = 0xf;
    uStack_90 = 0;
    FUN_1800671b0(&uStack_90,&UNK_180a25a98,7);
    plVar5 = (longlong *)FUN_180472900(param_2,auStack_130,&uStack_90);
    plVar5 = (longlong *)*plVar5;
    puVar13 = &DAT_180bfc170;
    if (plVar5 != (longlong *)0x0) {
      puVar8 = (void *)(**(code **)(*plVar5 + 8))(plVar5,0x180d48ef4);
      if (puVar8 != (void *)0x0) {
        puVar13 = puVar8;
      }
    }
    cVar4 = FUN_180482e70(puVar13,&uStack_110);
    if (plStack_128 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_128 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_128)(plStack_128);
        LOCK();
        piVar15 = (int *)((longlong)plStack_128 + 0xc);
        iVar1 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plStack_128 + 8))(plStack_128);
        }
      }
    }
    if (0xf < uStack_78) {
      uVar10 = uStack_78 + 1;
      lVar2 = CONCAT71(uStack_8f,uStack_90);
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = uStack_78 + 0x28;
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    uStack_80 = 0;
    uStack_78 = 0xf;
    uStack_90 = 0;
    if (cVar4 == '\0') {
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a25a28);
    }
    puVar11 = &uStack_110;
    if (0xf < uStack_f8) {
      puVar11 = (int8_t *)CONCAT71(uStack_10f,uStack_110);
    }
    FUN_1806281a0(param_1,puVar11);
    if (0xf < uStack_f8) {
      uVar10 = uStack_f8 + 1;
      lVar2 = CONCAT71(uStack_10f,uStack_110);
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = uStack_f8 + 0x28;
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    uStack_100 = 0;
    uStack_f8 = 0xf;
    uStack_110 = 0;
  }
  else {
    uStack_60 = 0;
    uStack_58 = 0xf;
    uStack_70 = 0;
    FUN_1800671b0(&uStack_70,&UNK_180a25a98,7);
    plVar5 = (longlong *)FUN_180472900(param_2,auStack_120,&uStack_70);
    plVar5 = (longlong *)*plVar5;
    puVar13 = &DAT_180bfc170;
    if (plVar5 != (longlong *)0x0) {
      puVar8 = (void *)(**(code **)(*plVar5 + 8))(plVar5,0x180d48ef4);
      if (puVar8 != (void *)0x0) {
        puVar13 = puVar8;
      }
    }
    FUN_18018b350(&uStack_50,puVar13);
    if (plStack_118 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_118 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_118)(plStack_118);
        LOCK();
        piVar15 = (int *)((longlong)plStack_118 + 0xc);
        iVar1 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)(*plStack_118 + 8))(plStack_118);
        }
      }
    }
    if (0xf < uStack_58) {
      uVar10 = uStack_58 + 1;
      lVar2 = CONCAT71(uStack_6f,uStack_70);
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = uStack_58 + 0x28;
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    uStack_60 = 0;
    uStack_58 = 0xf;
    uStack_70 = 0;
    puVar11 = &uStack_50;
    if (0xf < uStack_38) {
      puVar11 = (int8_t *)CONCAT71(uStack_4f,uStack_50);
    }
    FUN_1806281a0(param_1,puVar11);
    if (0xf < uStack_38) {
      uVar10 = uStack_38 + 1;
      lVar2 = CONCAT71(uStack_4f,uStack_50);
      lVar9 = lVar2;
      if (0xfff < uVar10) {
        uVar10 = uStack_38 + 0x28;
        lVar9 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    uStack_40 = 0;
    uStack_38 = 0xf;
    uStack_50 = 0;
  }
  if (0xf < uStack_d8) {
    uVar12 = uStack_d8 + 1;
    uVar10 = uStack_f0;
    if (0xfff < uVar12) {
      uVar12 = uStack_d8 + 0x28;
      uVar10 = *(ulonglong *)(uStack_f0 - 8);
      if (0x1f < (uStack_f0 - uVar10) - 8) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(uVar10,uVar12);
  }
  uStack_e0 = 0;
  uStack_d8 = 0xf;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803eb9e0(longlong param_1,longlong param_2)
void FUN_1803eb9e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  void *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  int8_t auStack_e8 [32];
  uint64_t uStack_c8;
  longlong lStack_b8;
  int8_t auStack_b0 [8];
  longlong *plStack_a8;
  uint64_t uStack_a0;
  int8_t *puStack_98;
  int8_t auStack_90 [64];
  int8_t uStack_50;
  undefined7 uStack_4f;
  uint64_t uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  lVar11 = param_1 + 0x520;
  lStack_b8 = lVar11;
  iVar6 = _Mtx_lock(lVar11);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  puStack_98 = auStack_90;
  FUN_1803f2eb0(auStack_90);
  FUN_1804724f0(auStack_b0,auStack_90);
  puVar9 = &DAT_18098bc73;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar9 = *(void **)(param_2 + 8);
  }
  uStack_40 = 0;
  uStack_38 = 0xf;
  uStack_50 = 0;
  iVar6 = -1;
  lVar13 = -1;
  do {
    lVar13 = lVar13 + 1;
  } while (puVar9[lVar13] != '\0');
  FUN_1800671b0(&uStack_50);
  uStack_c8 = 0;
  FUN_1803e8510(*(uint64_t *)(param_1 + 0x188),1,&uStack_50);
  if (0xf < uStack_38) {
    uVar10 = uStack_38 + 1;
    lVar5 = CONCAT71(uStack_4f,uStack_50);
    lVar13 = lVar5;
    if (0xfff < uVar10) {
      uVar10 = uStack_38 + 0x28;
      lVar13 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar13) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar13,uVar10);
  }
  uStack_40 = 0;
  uStack_38 = 0xf;
  uStack_50 = 0;
  if (plStack_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a8 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    lVar11 = lStack_b8;
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_a8)(plStack_a8);
      LOCK();
      piVar2 = (int *)((longlong)plStack_a8 + 0xc);
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
  lVar13 = *(longlong *)(param_1 + 0x1a0);
  lVar8 = *(longlong *)(param_1 + 0x1a8) - lVar13;
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
          lVar14 = *(longlong *)(param_2 + 8) - (longlong)pcVar7;
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
    } while ((ulonglong)(longlong)iVar16 < (ulonglong)(lVar8 - lVar5));
  }
  FUN_1803f30e0(param_1 + 0x1a0,iVar6);
  FUN_1803f30e0(param_1 + 0x1c0,iVar6);
  *(int32_t *)(param_1 + 0x438) = 0;
  iVar6 = _Mtx_unlock(lVar11);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803ebc80(longlong param_1,longlong param_2,longlong *param_3,uint64_t param_4)
void FUN_1803ebc80(longlong param_1,longlong param_2,longlong *param_3,uint64_t param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  longlong lVar9;
  void *puVar10;
  ulonglong uVar11;
  int8_t *puVar12;
  uint64_t *puVar13;
  int8_t auStack_478 [32];
  longlong **pplStack_458;
  int32_t uStack_448;
  int32_t *puStack_440;
  uint64_t *puStack_438;
  int8_t *puStack_430;
  uint64_t *puStack_428;
  longlong *plStack_420;
  longlong *plStack_418;
  int8_t *puStack_410;
  uint64_t uStack_408;
  longlong lStack_400;
  int8_t auStack_3f8 [8];
  longlong *plStack_3f0;
  int8_t auStack_3e8 [16];
  uint64_t uStack_3d8;
  uint64_t uStack_3d0;
  int8_t auStack_3c8 [16];
  uint64_t uStack_3b8;
  uint64_t uStack_3b0;
  int8_t auStack_3a8 [16];
  uint64_t uStack_398;
  uint64_t uStack_390;
  int8_t auStack_388 [16];
  uint64_t uStack_378;
  uint64_t uStack_370;
  int32_t auStack_368 [2];
  uint64_t uStack_360;
  uint64_t uStack_358;
  uint64_t uStack_350;
  uint64_t uStack_348;
  uint64_t uStack_340;
  uint64_t uStack_328;
  int8_t auStack_320 [16];
  int8_t auStack_310 [16];
  int8_t auStack_300 [16];
  int8_t auStack_2f0 [8];
  longlong *plStack_2e8;
  int32_t auStack_2d8 [16];
  int8_t auStack_298 [64];
  int8_t auStack_258 [64];
  int8_t auStack_218 [64];
  int8_t uStack_1d8;
  undefined7 uStack_1d7;
  uint64_t uStack_1c8;
  ulonglong uStack_1c0;
  int8_t uStack_1b8;
  undefined7 uStack_1b7;
  uint64_t uStack_1a8;
  ulonglong uStack_1a0;
  int8_t uStack_198;
  undefined7 uStack_197;
  uint64_t uStack_188;
  ulonglong uStack_180;
  void *puStack_178;
  void *puStack_170;
  ulonglong uStack_58;
  
  uStack_328 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_478;
  uStack_448 = 0;
  FUN_1806240a0(&puStack_178);
  FUN_180069280(&puStack_178,&DAT_1809fe2c8,&DAT_1809fcfb8);
  puStack_410 = auStack_320;
  puStack_428 = (uint64_t *)auStack_258;
  puStack_438 = &uStack_408;
  if (_DAT_180c92498 != 0) {
    LOCK();
    *(int *)(_DAT_180c92498 + 8) = *(int *)(_DAT_180c92498 + 8) + 1;
    UNLOCK();
  }
  uStack_408 = _DAT_180c92490;
  lStack_400 = _DAT_180c92498;
  puStack_430 = auStack_3e8;
  uStack_3d8 = 0;
  uStack_3d0 = 0xf;
  auStack_3e8[0] = 0;
  FUN_1800671b0(auStack_3e8,&UNK_180a25a50,0xd);
  uVar4 = FUN_1803f3ac0(auStack_258,auStack_3e8,&uStack_408);
  uVar4 = FUN_1804724f0(auStack_320,uVar4);
  puStack_438 = (uint64_t *)auStack_3c8;
  uStack_3b8 = 0;
  uStack_3b0 = 0xf;
  auStack_3c8[0] = 0;
  FUN_1800671b0(auStack_3c8,&UNK_180a25a60,9);
  uVar4 = FUN_1803f3ac0(auStack_298,auStack_3c8,uVar4);
  puStack_438 = (uint64_t *)auStack_300;
  puStack_428 = (uint64_t *)auStack_218;
  puStack_430 = &DAT_18098bc73;
  if (puStack_170 != (void *)0x0) {
    puStack_430 = puStack_170;
  }
  puStack_410 = auStack_310;
  puVar10 = &DAT_18098bc73;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar10 = *(void **)(param_2 + 8);
  }
  uVar5 = FUN_180472360(auStack_310,puVar10);
  puStack_440 = (int32_t *)auStack_3a8;
  uStack_398 = 0;
  uStack_390 = 0xf;
  auStack_3a8[0] = 0;
  FUN_1800671b0(auStack_3a8,&DAT_180a03a84,4);
  pplStack_458 = (longlong **)&puStack_430;
  uVar5 = FUN_1803f3dd0(auStack_218,auStack_3a8,uVar5);
  uVar5 = FUN_1804724f0(auStack_300,uVar5);
  puStack_440 = (int32_t *)auStack_388;
  uStack_378 = 0;
  uStack_370 = 0xf;
  auStack_388[0] = 0;
  FUN_1800671b0(auStack_388,&UNK_180a25ae8,7);
  pplStack_458 = (longlong **)uVar4;
  FUN_1803f3fe0(auStack_2d8,auStack_388,uVar5);
  puStack_440 = (int32_t *)auStack_298;
  FUN_1803e8470(auStack_298);
  plStack_420 = (longlong *)0x0;
  plStack_418 = (longlong *)0x0;
  puStack_440 = auStack_368;
  puStack_438 = (uint64_t *)auStack_368;
  auStack_368[0] = auStack_2d8[0];
  puStack_428 = &uStack_360;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_360 = FUN_1803f4cb0();
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 0;
  FUN_1803f44d0(auStack_368,auStack_2d8);
  FUN_1804724f0(auStack_3f8,auStack_368);
  uStack_1a8 = 0;
  uStack_1a0 = 0xf;
  uStack_1b8 = 0;
  FUN_1800671b0(&uStack_1b8,&UNK_180a25af0,9);
  pplStack_458 = &plStack_420;
  FUN_1803e8510(*(uint64_t *)(param_1 + 0x188),2,&uStack_1b8,auStack_3f8);
  if (0xf < uStack_1a0) {
    uVar11 = uStack_1a0 + 1;
    lVar6 = CONCAT71(uStack_1b7,uStack_1b8);
    lVar9 = lVar6;
    if (0xfff < uVar11) {
      uVar11 = uStack_1a0 + 0x28;
      lVar9 = *(longlong *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar11);
  }
  uStack_1a8 = 0;
  uStack_1a0 = 0xf;
  uStack_1b8 = 0;
  if (plStack_3f0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_3f0 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_3f0)(plStack_3f0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_3f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_3f0 + 8))(plStack_3f0);
      }
    }
  }
  uStack_188 = 0;
  uStack_180 = 0xf;
  uStack_198 = 0;
  FUN_1800671b0(&uStack_198,&UNK_180a25b00,8);
  lVar9 = 0x180d49d50;
  if (plStack_420 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plStack_420 + 8))(plStack_420,0x180d48ef0);
    if (lVar6 != 0) {
      lVar9 = lVar6;
    }
  }
  plVar7 = (longlong *)FUN_180472900(lVar9,auStack_2f0,&uStack_198);
  uStack_448 = 1;
  plVar7 = (longlong *)*plVar7;
  puVar13 = (uint64_t *)&DAT_180bfc170;
  if (plVar7 != (longlong *)0x0) {
    puVar8 = (uint64_t *)(**(code **)(*plVar7 + 8))(plVar7,0x180d48ef4);
    if (puVar8 != (uint64_t *)0x0) {
      puVar13 = puVar8;
    }
  }
  uStack_1c8 = 0;
  uStack_1c0 = 0xf;
  uStack_1d8 = 0;
  uStack_448 = 3;
  FUN_1803f45e0(&uStack_1d8,puVar13[2] + 10);
  FUN_1803f5400(&uStack_1d8,&UNK_180a25aa0,10);
  puVar8 = puVar13 + 2;
  if (0xf < (ulonglong)puVar13[3]) {
    puVar13 = (uint64_t *)*puVar13;
  }
  FUN_1803f5400(&uStack_1d8,puVar13,*puVar8);
  puVar12 = &uStack_1d8;
  if (0xf < uStack_1c0) {
    puVar12 = (int8_t *)CONCAT71(uStack_1d7,uStack_1d8);
  }
  (**(code **)(*param_3 + 0x10))(param_3,puVar12);
  uStack_448 = 1;
  if (0xf < uStack_1c0) {
    uVar11 = uStack_1c0 + 1;
    lVar6 = CONCAT71(uStack_1d7,uStack_1d8);
    lVar9 = lVar6;
    if (0xfff < uVar11) {
      uVar11 = uStack_1c0 + 0x28;
      lVar9 = *(longlong *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar11);
  }
  uStack_1c8 = 0;
  uStack_1c0 = 0xf;
  uStack_1d8 = 0;
  uStack_448 = 0;
  if (plStack_2e8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_2e8 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_2e8)(plStack_2e8);
      LOCK();
      piVar1 = (int *)((longlong)plStack_2e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_2e8 + 8))(plStack_2e8);
      }
    }
  }
  if (0xf < uStack_180) {
    uVar11 = uStack_180 + 1;
    lVar6 = CONCAT71(uStack_197,uStack_198);
    lVar9 = lVar6;
    if (0xfff < uVar11) {
      uVar11 = uStack_180 + 0x28;
      lVar9 = *(longlong *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar9,uVar11);
  }
  uStack_188 = 0;
  uStack_180 = 0xf;
  uStack_198 = 0;
  puVar10 = &DAT_18098bc73;
  if ((void *)param_3[1] != (void *)0x0) {
    puVar10 = (void *)param_3[1];
  }
  FUN_180628040(param_4,&UNK_180a25ab0,puVar10);
  plVar7 = plStack_418;
  if (plStack_418 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_418 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_418)(plStack_418);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_418 + 8))();
      }
    }
  }
  puStack_440 = auStack_2d8;
  FUN_1803e8470(auStack_2d8);
  puStack_178 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_478);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




