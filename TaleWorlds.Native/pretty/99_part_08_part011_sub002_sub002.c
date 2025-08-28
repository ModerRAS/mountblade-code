#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 99_part_08_part011_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804e93e0(int *param_1,float param_2)
void FUN_1804e93e0(int *param_1,float param_2)

{
  double dVar1;
  short sVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t (*pauVar5) [16];
  float *pfVar6;
  int64_t *plVar7;
  code *pcVar8;
  float fVar9;
  int8_t auVar10 [16];
  int32_t uVar11;
  int32_t uVar12;
  int8_t uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int *piVar19;
  int64_t lVar20;
  int64_t *plVar21;
  int *piVar22;
  int iVar23;
  int *piVar24;
  int *piVar25;
  int64_t lVar26;
  uint uVar27;
  uint64_t uVar28;
  int iVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t *puVar32;
  float fVar33;
  int32_t uVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  double dVar41;
  int8_t auStack_568 [32];
  int *piStack_548;
  int **ppiStack_540;
  uint64_t *puStack_538;
  uint64_t *puStack_530;
  float afStack_528 [2];
  char cStack_520;
  int8_t auStack_51f [7];
  int **ppiStack_518;
  uint64_t uStack_508;
  uint64_t uStack_500;
  float *pfStack_4f8;
  int8_t *puStack_4f0;
  uint uStack_4e8;
  int8_t auStack_4e0 [16];
  uint64_t uStack_4c8;
  float fStack_4c0;
  uint uStack_4bc;
  int64_t *plStack_4b8;
  int64_t lStack_4b0;
  int iStack_4a8;
  float afStack_4a0 [2];
  float afStack_498 [2];
  float afStack_490 [2];
  int64_t **pplStack_488;
  uint64_t uStack_480;
  int64_t *plStack_478;
  int64_t *plStack_470;
  int64_t **pplStack_468;
  int **ppiStack_460;
  uint64_t uStack_458;
  uint64_t uStack_450;
  char *pcStack_448;
  int32_t uStack_438;
  int32_t uStack_430;
  int32_t uStack_42c;
  uint64_t uStack_428;
  void *puStack_420;
  void *puStack_418;
  int32_t *apuStack_410 [2];
  code *pcStack_400;
  void *puStack_3f8;
  int *apiStack_3f0 [2];
  code *pcStack_3e0;
  code *pcStack_3d8;
  int32_t *apuStack_3d0 [2];
  code *pcStack_3c0;
  code *pcStack_3b8;
  int32_t uStack_3b0;
  int32_t uStack_3ac;
  uint64_t uStack_3a8;
  void *puStack_3a0;
  code *pcStack_398;
  int32_t uStack_390;
  int32_t uStack_38c;
  uint64_t uStack_388;
  void *puStack_380;
  code *pcStack_378;
  int32_t *apuStack_370 [2];
  code *pcStack_360;
  code *pcStack_358;
  int *apiStack_350 [2];
  code *pcStack_340;
  code *pcStack_338;
  int32_t uStack_330;
  int32_t uStack_32c;
  uint64_t uStack_328;
  void *puStack_320;
  code *pcStack_318;
  int32_t uStack_310;
  int32_t uStack_30c;
  uint64_t uStack_308;
  void *puStack_300;
  code *pcStack_2f8;
  int32_t uStack_2f0;
  int32_t uStack_2ec;
  uint64_t uStack_2e8;
  void *puStack_2e0;
  code *pcStack_2d8;
  int *apiStack_2d0 [2];
  void *puStack_2c0;
  void *puStack_2b8;
  int *apiStack_2b0 [2];
  void *puStack_2a0;
  code *pcStack_298;
  uint64_t uStack_290;
  int *piStack_288;
  uint64_t uStack_280;
  int64_t *plStack_278;
  int *piStack_268;
  float *pfStack_260;
  uint64_t uStack_258;
  int32_t uStack_250;
  int32_t uStack_24c;
  int *piStack_248;
  uint64_t uStack_240;
  int *piStack_238;
  float *pfStack_230;
  int *piStack_228;
  uint64_t uStack_220;
  uint64_t uStack_218;
  int32_t uStack_210;
  int32_t uStack_20c;
  void *puStack_208;
  int8_t *puStack_200;
  int32_t uStack_1f8;
  int8_t auStack_1f0 [24];
  int aiStack_1d8 [14];
  int64_t alStack_1a0 [25];
  uint64_t uStack_d8;
  
  uStack_290 = 0xfffffffffffffffe;
  uStack_d8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_568;
  if (*(int *)(system_system_data_memory + 0xe0) != 0) {
    system_memory_flags = param_1[0x21ef40] ^ 0x41c64e6d;
  }
  uVar28 = 0;
  uStack_438 = 0;
  afStack_528[0] = param_2;
  if (param_1[0x26364a] != 0) {
    (**(code **)(system_system_data_memory + 0x250))(param_1[0x26364a]);
  }
  *(int64_t *)(param_1 + 0x21f484) = system_system_data_memory;
  *(uint64_t *)(param_1 + 0x21f486) = system_error_code;
  system_system_data_memory = (int64_t)(afStack_528[0] * 100000.0);
  system_system_data_memory = system_system_data_memory + system_system_data_memory;
  system_system_control_memory = afStack_528[0];
  (**(code **)(system_system_data_memory + 0x280))(param_1[0x26364a]);
  lVar18 = SYSTEM_STATE_MANAGER;
  fVar37 = afStack_528[0] * *(float *)(SYSTEM_STATE_MANAGER + 0x19d0);
  fVar38 = (float)param_1[0x2634a3];
  if ((((fVar37 < fVar38) || (fVar40 = (float)param_1[0x2634a4], fVar37 < fVar40)) ||
      (fVar37 < (float)param_1[0x2634a5])) || (fVar37 < (float)param_1[0x2634a6])) {
    fVar38 = fVar38 - fVar37;
    if (fVar38 <= 0.0) {
      fVar38 = 0.0;
    }
    param_1[0x2634a3] = (int)fVar38;
    fVar40 = (float)param_1[0x2634a4] - fVar37;
    if (fVar40 <= 0.0) {
      fVar40 = 0.0;
    }
    param_1[0x2634a4] = (int)fVar40;
    fVar33 = (float)param_1[0x2634a5] - fVar37;
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
    param_1[0x2634a5] = (int)fVar33;
    fVar37 = (float)param_1[0x2634a6] - fVar37;
    if (fVar37 <= 0.0) {
      fVar37 = 0.0;
    }
    param_1[0x2634a6] = (int)fVar37;
  }
  fVar33 = 0.0;
  fVar37 = 0.0;
  if (*(char *)(system_system_data_memory + 0x2028) == '\0') {
    lVar26 = *(int64_t *)(system_system_data_memory + 0x2018);
    if (((*(int *)(lVar26 + 100) != 4) && (*(int *)(lVar26 + 100) != 2)) ||
       ((int)*(float *)(system_system_memory + 4) == 0)) {
      uVar17 = *(uint64_t *)(system_system_data_memory + 0x14ec);
      uStack_480._4_4_ = (float)((uint64_t)uVar17 >> 0x20);
      uStack_480._0_4_ = (float)uVar17;
      fVar33 = (float)uStack_480 * 10.0;
      fVar37 = -(uStack_480._4_4_ * 10.0);
      uStack_480 = uVar17;
      goto LAB_1804e9729;
    }
    fVar35 = *(float *)(lVar26 + 0x338);
    uStack_508 = *(int **)(lVar26 + 0x338);
    fVar9 = *(float *)(lVar26 + 0x340);
    uStack_500 = *(float **)(lVar26 + 0x340);
    if ((ABS(fVar35) < 0.22) || (0.22 < ABS(fVar9))) {
      fVar33 = fVar9 * -10.0;
      fVar37 = fVar35 * -10.0;
      goto LAB_1804e9729;
    }
LAB_1804e9748:
    if (fVar33 < 0.0) {
      fVar40 = fVar40 - fVar33;
      param_1[0x2634a4] = (int)fVar40;
    }
  }
  else {
    if (((*(char *)(system_operation_state + 0x160a) == '\0') &&
        (*(char *)(system_operation_state + 0x1609) == '\x01')) ||
       ((fVar33 = (float)*(int *)(*(int64_t *)(system_system_data_memory + 0x2010) + 0x6c),
        *(char *)(system_operation_state + 0x160a) == '\0' && (*(char *)(system_operation_state + 0x1609) == '\x01')
        ))) {
      fVar37 = 0.0;
    }
    else {
      fVar37 = (float)*(int *)(*(int64_t *)(system_system_data_memory + 0x2010) + 0x70);
    }
LAB_1804e9729:
    if (fVar33 <= 0.0) goto LAB_1804e9748;
    fVar38 = fVar33 + fVar38;
    param_1[0x2634a3] = (int)fVar38;
  }
  if (fVar37 <= 0.0) {
    if (fVar37 < 0.0) {
      param_1[0x2634a6] = (int)((float)param_1[0x2634a6] - fVar37 * *(float *)(lVar18 + 0x18f0));
    }
  }
  else {
    param_1[0x2634a5] = (int)(fVar37 * *(float *)(lVar18 + 0x18f0) + (float)param_1[0x2634a5]);
  }
  fVar37 = *(float *)(lVar18 + 0x1960);
  if (fVar38 <= fVar37) {
    if (fVar37 < fVar40) {
      fVar33 = fVar37 / fVar40;
      fVar38 = fVar38 * fVar33;
      param_1[0x2634a3] = (int)fVar38;
      param_1[0x2634a4] = (int)fVar37;
      fVar40 = fVar37;
      goto LAB_1804e97f0;
    }
  }
  else {
    fVar33 = fVar37 / fVar38;
    param_1[0x2634a4] = (int)(fVar40 * fVar33);
    param_1[0x2634a3] = (int)fVar37;
    fVar40 = fVar40 * fVar33;
    fVar38 = fVar37;
LAB_1804e97f0:
    param_1[0x2634a6] = (int)(fVar33 * (float)param_1[0x2634a6]);
    param_1[0x2634a5] = (int)(fVar33 * (float)param_1[0x2634a5]);
  }
  fVar33 = (float)param_1[0x2634a5];
  if (fVar33 <= fVar37) {
    if (fVar37 < (float)param_1[0x2634a6]) {
      fVar35 = fVar37 / (float)param_1[0x2634a6];
      param_1[0x2634a5] = (int)(fVar33 * fVar35);
      param_1[0x2634a6] = (int)fVar37;
      goto LAB_1804e9887;
    }
  }
  else {
    fVar35 = fVar37 / fVar33;
    param_1[0x2634a6] = (int)(fVar35 * (float)param_1[0x2634a6]);
    param_1[0x2634a5] = (int)fVar37;
LAB_1804e9887:
    param_1[0x2634a4] = (int)(fVar40 * fVar35);
    param_1[0x2634a3] = (int)(fVar38 * fVar35);
  }
  *(bool *)(param_1 + 0x33) = afStack_528[0] == 0.0;
  lVar18 = system_main_module_state;
  fVar38 = (float)(*(double *)(system_main_module_state + 0x70) * 2.000000050291417e-05 +
                  (double)((float)param_1[0x263677] * 0.98));
  param_1[0x263677] = (int)fVar38;
  if (0.028571429 <= fVar38) {
    if (fVar38 <= 0.03125) {
      fVar38 = 0.0;
    }
    else {
      fVar38 = afStack_528[0] * -0.2;
    }
  }
  else {
    fVar38 = afStack_528[0] * 0.2;
  }
  fVar38 = *(float *)(lVar18 + 300) + fVar38;
  if (0.01 <= fVar38) {
    if (1.0 <= fVar38) {
      fVar38 = 1.0;
    }
  }
  else {
    fVar38 = 0.01;
  }
  *(float *)(lVar18 + 300) = fVar38;
  FUN_1804f20b0(param_1);
  param_1[0x26349f] = 0;
  param_1[0x2634a1] = 0;
  if ((float)(*(int64_t *)(&system_error_code + (int64_t)param_1[0x21ede8] * 8) -
             *(int64_t *)(param_1 + 0x21ede6)) * 1e-05 < 0.0) {
    *(int8_t *)(param_1 + 0x263674) = 1;
  }
  lVar18 = system_system_memory;
  dVar41 = (double)afStack_528[0] * 0.33333;
  dVar1 = *(double *)(system_system_memory + 0x10);
  dVar36 = (dVar1 - *(double *)(system_system_memory + 0x28)) * dVar41 +
           *(double *)(system_system_memory + 0x28);
  *(double *)(system_system_memory + 0x28) = dVar36;
  dVar39 = (dVar1 - *(double *)(lVar18 + 0x30)) * dVar41 + *(double *)(lVar18 + 0x30);
  *(double *)(lVar18 + 0x30) = dVar39;
  *(double *)(lVar18 + 0x18) =
       ((dVar36 + dVar1) * 0.5 - *(double *)(lVar18 + 0x18)) * dVar41 + *(double *)(lVar18 + 0x18);
  *(double *)(lVar18 + 0x20) =
       ((dVar1 + dVar39) * 0.5 - *(double *)(lVar18 + 0x20)) * dVar41 + *(double *)(lVar18 + 0x20);
  FUN_1805f35b0(system_system_memory);
  if ((system_status_flag == 1) || (cStack_520 = '\0', system_status_flag == 4)) {
    cStack_520 = '\x01';
  }
  piVar24 = param_1 + 0x21ba62;
  FUN_1804f9570(param_1,piVar24,param_1 + 0x21ca5c,param_1 + 0x21da56);
  if ((char)param_1[0x21ca5b] == '\0') {
    uVar31 = *(int64_t *)(param_1 + 0x21ca54) - *(int64_t *)(param_1 + 0x21ca52) >> 3;
  }
  else {
    uVar31 = (uint64_t)(uint)param_1[0x21ca5a];
  }
  ppiStack_460 = apiStack_3f0;
  uStack_450 = afStack_528;
  pcStack_448 = &cStack_520;
  pcStack_3e0 = FUN_1805036d0;
  pcStack_3d8 = FUN_1805035c0;
  uStack_458 = param_1;
  apiStack_3f0[0] = (int *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags);
  *apiStack_3f0[0] = (int)uStack_458;
  apiStack_3f0[0][1] = uStack_458._4_4_;
  apiStack_3f0[0][2] = (int)uStack_450;
  apiStack_3f0[0][3] = uStack_450._4_4_;
  *(char **)(apiStack_3f0[0] + 4) = pcStack_448;
  ppiStack_540 = apiStack_3f0;
  piStack_548 = (int *)0xffffffffffffffff;
  SystemCore_DataTransformer((int)uStack_458,0,uVar31 & 0xffffffff,0x10);
  if (0.0 < afStack_528[0]) {
    FUN_1804f1e70(param_1);
    uStack_4e8 = param_1[0x26364c];
    if ((int)uStack_4e8 < 0) {
      uStack_4e8 = 0xffffffff;
    }
    else if (-1 < param_1[(int64_t)(int)uStack_4e8 * 0x298 + 0xd81]) {
      uStack_4e8 = param_1[(int64_t)(int)uStack_4e8 * 0x298 + 0xd81];
    }
    if ((char)param_1[0x21da55] == '\0') {
      uVar27 = (uint)(*(int64_t *)(param_1 + 0x21da4e) - *(int64_t *)(param_1 + 0x21da4c) >> 3);
    }
    else {
      uVar27 = param_1[0x21da54];
    }
    if (0 < (int)uVar27) {
      uVar30 = (uint64_t)uVar27;
      uVar31 = uVar28;
      do {
        piVar19 = param_1 + 0x21ca5c;
        if ((char)param_1[0x21da55] == '\0') {
          piVar19 = *(int **)(param_1 + 0x21da4c);
        }
        FUN_1805113f0(*(uint64_t *)((int64_t)piVar19 + uVar31));
        uVar31 = uVar31 + 8;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    if ((char)param_1[0x21ea4f] == '\0') {
      uVar27 = (uint)(*(int64_t *)(param_1 + 0x21ea48) - *(int64_t *)(param_1 + 0x21ea46) >> 3);
    }
    else {
      uVar27 = param_1[0x21ea4e];
    }
    if (0 < (int)uVar27) {
      uVar30 = (uint64_t)uVar27;
      uVar31 = uVar28;
      do {
        piVar19 = param_1 + 0x21da56;
        if ((char)param_1[0x21ea4f] == '\0') {
          piVar19 = *(int **)(param_1 + 0x21ea46);
        }
        FUN_1805113f0(*(uint64_t *)(uVar31 + (int64_t)piVar19));
        uVar31 = uVar31 + 8;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    FUN_1804f9570(param_1,piVar24,param_1 + 0x21ca5c,param_1 + 0x21da56);
    afStack_4a0[0] = afStack_528[0];
    LOCK();
    auStack_4e0._8_4_ = 0;
    UNLOCK();
    uVar17 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3fc0,0x10,0x27);
    auStack_4e0._0_8_ = uVar17;
    if ((char)param_1[0x21ca5b] == '\0') {
      iVar29 = (int)(*(int64_t *)(param_1 + 0x21ca54) - *(int64_t *)(param_1 + 0x21ca52) >> 3);
    }
    else {
      iVar29 = param_1[0x21ca5a];
    }
    ppiStack_518 = apuStack_3d0;
    pfStack_4f8 = afStack_4a0;
    puStack_4f0 = auStack_4e0;
    pcStack_3c0 = FUN_180502470;
    pcStack_3b8 = FUN_1805023c0;
    uStack_508 = piVar24;
    uStack_500 = (float *)param_1;
    apuStack_3d0[0] = (int32_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags);
    *apuStack_3d0[0] = (int)uStack_508;
    apuStack_3d0[0][1] = uStack_508._4_4_;
    apuStack_3d0[0][2] = (int)uStack_500;
    apuStack_3d0[0][3] = uStack_500._4_4_;
    *(float **)(apuStack_3d0[0] + 4) = pfStack_4f8;
    *(int8_t **)(apuStack_3d0[0] + 6) = puStack_4f0;
    ppiStack_540 = apuStack_3d0;
    piStack_548 = (int *)0xffffffffffffffff;
    SystemCore_DataTransformer((int)uStack_508,0,iVar29,0x40);
    lVar18 = (int64_t)(int)auStack_4e0._8_4_;
    uVar31 = uVar28;
    if (0 < (int)auStack_4e0._8_4_) {
      do {
        lVar26 = *(int64_t *)(auStack_4e0._0_8_ + uVar31 * 8);
        if (((*(int *)(lVar26 + 0x568) == 1) &&
            ((*(uint *)(*(int64_t *)(lVar26 + 0x20) + 8) >> 0xe & 1) != 0)) &&
           (*(int *)(lVar26 + 0x564) < 0)) {
          FUN_180524310();
        }
        uVar31 = uVar31 + 1;
      } while ((int64_t)uVar31 < lVar18);
    }
    if (auStack_4e0._0_8_ != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = auStack_4e0._8_8_;
    auStack_4e0 = auVar10 << 0x40;
    afStack_498[0] = afStack_528[0];
    if ((char)param_1[0x21ca5b] == '\0') {
      iVar29 = (int)(*(int64_t *)(param_1 + 0x21ca54) - *(int64_t *)(param_1 + 0x21ca52) >> 3);
    }
    else {
      iVar29 = param_1[0x21ca5a];
    }
    ppiStack_518 = (int **)&uStack_3b0;
    uStack_500 = afStack_498;
    puStack_3a0 = &processed_var_5168_ptr;
    pcStack_398 = FUN_180502bb0;
    uStack_508._0_4_ = (int)param_1;
    uVar11 = (int)uStack_508;
    uStack_508._4_4_ = (int)((uint64_t)param_1 >> 0x20);
    uVar12 = uStack_508._4_4_;
    uStack_3b0 = (int)uStack_508;
    uStack_3ac = uStack_508._4_4_;
    ppiStack_540 = (int **)&uStack_3b0;
    piStack_548 = (int *)0xffffffffffffffff;
    uStack_508 = param_1;
    uStack_3a8 = uStack_500;
    SystemCore_DataTransformer(ppiStack_540,0,iVar29,0x10);
    if ((char)param_1[0x21ca5b] == '\0') {
      uVar27 = (uint)(*(int64_t *)(param_1 + 0x21ca54) - *(int64_t *)(param_1 + 0x21ca52) >> 3);
    }
    else {
      uVar27 = param_1[0x21ca5a];
    }
    if (0 < (int)uVar27) {
      uVar30 = (uint64_t)uVar27;
      uVar31 = uVar28;
      do {
        piVar19 = piVar24;
        if ((char)param_1[0x21ca5b] == '\0') {
          piVar19 = *(int **)(param_1 + 0x21ca52);
        }
        lVar18 = (int64_t)*(int *)(*(int64_t *)((int64_t)piVar19 + uVar31) + 0x10);
        if ((*(char *)(lVar18 * 0x200 + 0x52ef39 + (int64_t)param_1) != '\0') &&
           (-1 < *(int *)(*(int64_t *)(param_1 + lVar18 * 0x80 + 0x14bbda) + 0x10))) {
          if ((float)param_1[lVar18 * 0x90 + 0x18bbda] <= 0.0) {
            if (param_1[lVar18 * 0x80 + 0x14bbd0] != 2) {
              (**(code **)(**(int64_t **)(param_1 + 0x263494) + 0x18))
                        (*(int64_t **)(param_1 + 0x263494),
                         param_1 + (int64_t)param_1[lVar18 * 0x80 + 0x14bb6f] * 0x298 + 0xc28);
            }
          }
          else {
            (**(code **)(**(int64_t **)(param_1 + 0x263494) + 0x10))
                      (*(int64_t **)(param_1 + 0x263494),
                       param_1 + (int64_t)param_1[lVar18 * 0x80 + 0x14bb6f] * 0x298 + 0xc28,
                       param_1 + lVar18 * 0x90 + 0x18bbc4);
          }
        }
        uVar31 = uVar31 + 8;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    (**(code **)(**(int64_t **)(param_1 + 0x263494) + 0x20))();
    if ((char)param_1[0x21edca] != '\0') {
      param_1[0x21edc7] = 0;
      param_1[0x21edc8] = 0;
      param_1[0x21edc9] = 0;
      *(int8_t *)(param_1 + 0x21edca) = 1;
      uVar27 = param_1[0x14bb65];
      if (0 < (int)uVar27) {
        piVar24 = param_1 + 0xc2c;
        uVar31 = uVar28;
        uVar30 = uVar28;
        do {
          if (-1 < *piVar24) goto LAB_1804e9faf;
          uVar31 = (uint64_t)((int)uVar31 + 1);
          uVar30 = uVar30 + 1;
          piVar24 = piVar24 + 0x298;
        } while ((int64_t)uVar30 < (int64_t)(int)uVar27);
      }
      uVar31 = (uint64_t)uVar27;
LAB_1804e9faf:
      if ((int)uVar31 < (int)uVar27) {
        fVar38 = (float)param_1[0x21edc7];
        do {
          lVar26 = (int64_t)(int)uVar31;
          lVar18 = *(int64_t *)(param_1 + lVar26 * 0x298 + 0xc30);
          if ((param_1[lVar26 * 0x298 + 0xd83] & 0x800U) == 0) {
            if (0.0 < *(float *)(lVar18 + 0x1d0)) {
              fVar40 = *(float *)(lVar18 + 0x1d4) * *(float *)(lVar18 + 0x1d4) +
                       *(float *)(lVar18 + 0x1d8) * *(float *)(lVar18 + 0x1d8);
              fVar37 = *(float *)(lVar18 + 0x1e4) * *(float *)(lVar18 + 0x1e4) +
                       *(float *)(lVar18 + 0x1e8) * *(float *)(lVar18 + 0x1e8);
              if (fVar37 <= fVar40) {
                fVar37 = fVar40;
              }
              fVar37 = SQRT(fVar37) + *(float *)(lVar18 + 0x1d0);
              if (fVar37 <= (float)param_1[0x21edc9]) {
                fVar37 = (float)param_1[0x21edc9];
              }
              param_1[0x21edc9] = (int)fVar37;
            }
          }
          else {
            fVar37 = *(float *)(lVar18 + 0x1d0);
            if (*(float *)(lVar18 + 0x1d0) <= (float)param_1[0x21edc8]) {
              fVar37 = (float)param_1[0x21edc8];
            }
            param_1[0x21edc8] = (int)fVar37;
          }
          if (fVar38 <= *(float *)(*(int64_t *)(param_1 + lVar26 * 0x298 + 0xdde) + 0x8c0)) {
            fVar38 = *(float *)(*(int64_t *)(param_1 + lVar26 * 0x298 + 0xdde) + 0x8c0);
          }
          param_1[0x21edc7] = (int)fVar38;
          uVar15 = (uint)*(short *)((int64_t)param_1 + lVar26 * 2 + 0x52dda0);
          uVar31 = (uint64_t)uVar15;
        } while ((int)uVar15 < (int)uVar27);
      }
      *(int8_t *)(param_1 + 0x21edca) = 0;
    }
    afStack_490[0] = afStack_528[0];
    if ((char)param_1[0x21ca5b] == '\0') {
      iVar29 = (int)(*(int64_t *)(param_1 + 0x21ca54) - *(int64_t *)(param_1 + 0x21ca52) >> 3);
    }
    else {
      iVar29 = param_1[0x21ca5a];
    }
    ppiStack_518 = (int **)&uStack_390;
    uStack_500 = afStack_490;
    puStack_380 = &processed_var_4944_ptr;
    pcStack_378 = FUN_180502aa0;
    uStack_390 = uVar11;
    uStack_38c = uVar12;
    ppiStack_540 = (int **)&uStack_390;
    piStack_548 = (int *)0xffffffffffffffff;
    uStack_508 = param_1;
    uStack_388 = uStack_500;
    SystemCore_DataTransformer(ppiStack_540,0,iVar29,0x10);
    if ((system_status_flag == 0) || (system_status_flag == 5)) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    *(int8_t *)(param_1 + 0x21f482) = uVar13;
    if ((system_status_flag == 1) || (system_status_flag == 4)) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    *(int8_t *)((int64_t)param_1 + 0x87d209) = uVar13;
    puStack_538 = (uint64_t *)CONCAT44(puStack_538._4_4_,param_1[0x14bb65]);
    ppiStack_540 = (int **)0x0;
    piStack_548 = param_1 + 0x18bb66;
    FUN_1805a7cb0(param_1 + 0x21ef60);
    if (cStack_520 == '\0') {
      ppiStack_518 = (int **)CONCAT44(ppiStack_518._4_4_,param_1[0x21f002]);
      uStack_4e8 = 0;
      if (0 < param_1[0x21f002]) {
        uStack_4bc = 0x7f7fffff;
        do {
          puVar32 = (uint64_t *)
                    (*(int64_t *)(param_1 + (uVar28 >> 6) * 2 + 0x21f004) +
                    (uint64_t)(uint)((int)uVar28 + (int)(uVar28 >> 6) * -0x40) * 0x24);
          lVar18 = (int64_t)(short)puVar32[4];
          sVar2 = *(short *)((int64_t)puVar32 + 0x22);
          piStack_548 = param_1 + lVar18 * 0x90 + 0x18bb66;
          ppiStack_540 = (int **)(param_1 + (int64_t)sVar2 * 0x90 + 0x18bb66);
          puStack_538 = puVar32;
          puStack_530 = puVar32 + 2;
          FUN_1805a93d0(lVar18,param_1,param_1 + lVar18 * 0x80 + 0x14bb68,
                        param_1 + (int64_t)sVar2 * 0x80 + 0x14bb68);
          fStack_4c0 = -*(float *)(puVar32 + 1);
          uStack_4c8 = (int *)(*puVar32 ^ 0x8000000080000000);
          puStack_538 = &uStack_4c8;
          piStack_548 = param_1 + (int64_t)sVar2 * 0x90 + 0x18bb66;
          ppiStack_540 = (int **)(param_1 + lVar18 * 0x90 + 0x18bb66);
          puStack_530 = puVar32 + 2;
          FUN_1805a93d0((uint)*puVar32 ^ 0x80000000,param_1,
                        param_1 + (int64_t)sVar2 * 0x80 + 0x14bb68,
                        param_1 + lVar18 * 0x80 + 0x14bb68);
          uStack_4e8 = uStack_4e8 + 1;
          uVar28 = (uint64_t)uStack_4e8;
        } while ((int)uStack_4e8 < (int)ppiStack_518);
      }
      LOCK();
      param_1[0x21f002] = 0;
      UNLOCK();
    }
    else {
      ppiStack_540 = (int **)CONCAT44(ppiStack_540._4_4_,uStack_4e8);
      piStack_548 = (int *)0x0;
      FUN_1805a9bc0(param_1 + 0x21ef60,param_1,param_1 + 0x14bb68,param_1 + 0x18bb66);
    }
    lVar18 = 0;
    LOCK();
    iStack_4a8 = 0;
    UNLOCK();
    lStack_4b0 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3fc0,0x10,0x27);
    if ((char)param_1[0x21da55] == '\0') {
      iVar29 = (int)(*(int64_t *)(param_1 + 0x21da4e) - *(int64_t *)(param_1 + 0x21da4c) >> 3);
    }
    else {
      iVar29 = param_1[0x21da54];
    }
    ppiStack_518 = apuStack_370;
    uStack_500 = afStack_528;
    pfStack_4f8 = (float *)&lStack_4b0;
    pcStack_360 = FUN_1805034e0;
    pcStack_358 = FUN_180503400;
    uStack_508 = param_1;
    apuStack_370[0] = (int32_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags);
    *apuStack_370[0] = (int)uStack_508;
    apuStack_370[0][1] = uStack_508._4_4_;
    apuStack_370[0][2] = (int)uStack_500;
    apuStack_370[0][3] = uStack_500._4_4_;
    *(float **)(apuStack_370[0] + 4) = pfStack_4f8;
    ppiStack_540 = apuStack_370;
    piStack_548 = (int *)0xffffffffffffffff;
    SystemCore_DataTransformer((int)uStack_508,0,iVar29,0x10);
    if ((char)param_1[0x21ea4f] == '\0') {
      iVar29 = (int)(*(int64_t *)(param_1 + 0x21ea48) - *(int64_t *)(param_1 + 0x21ea46) >> 3);
    }
    else {
      iVar29 = param_1[0x21ea4e];
    }
    ppiStack_518 = apiStack_350;
    uStack_500 = afStack_528;
    pfStack_4f8 = (float *)&lStack_4b0;
    pcStack_340 = FUN_180503320;
    pcStack_338 = FUN_180503240;
    uStack_508 = param_1;
    apiStack_350[0] = (int *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags);
    *apiStack_350[0] = (int)uStack_508;
    apiStack_350[0][1] = uStack_508._4_4_;
    apiStack_350[0][2] = (int)uStack_500;
    apiStack_350[0][3] = uStack_500._4_4_;
    *(float **)(apiStack_350[0] + 4) = pfStack_4f8;
    ppiStack_540 = apiStack_350;
    piStack_548 = (int *)0xffffffffffffffff;
    SystemCore_DataTransformer((int)uStack_508,0,iVar29,0x10);
    lVar20 = (int64_t)iStack_4a8;
    lVar26 = lVar18;
    if (0 < iStack_4a8) {
      do {
        lVar3 = *(int64_t *)(lStack_4b0 + lVar26 * 8);
        lVar4 = *(int64_t *)(lVar3 + 0x20);
        if (0.0 < *(float *)(lVar4 + 0xd8)) {
          FUN_180520e60(lVar3,lVar4 + 0xb0,*(uint64_t *)(lVar4 + 200));
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < lVar20);
    }
    if (lStack_4b0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_4b0 = 0;
    if (0.0 < afStack_528[0]) {
      if (((system_status_flag - 2U & 0xfffffffc) != 0) || (auStack_51f[0] = 1, system_status_flag == 4)) {
        auStack_51f[0] = 0;
      }
      if ((char)param_1[0x21ca5b] == '\0') {
        iVar29 = (int)(*(int64_t *)(param_1 + 0x21ca54) - *(int64_t *)(param_1 + 0x21ca52) >> 3);
      }
      else {
        iVar29 = param_1[0x21ca5a];
      }
      ppiStack_518 = (int **)&uStack_330;
      uStack_500 = afStack_528;
      puStack_320 = &processed_var_6624_ptr;
      pcStack_318 = FUN_180503190;
      uStack_330 = uVar11;
      uStack_32c = uVar12;
      ppiStack_540 = (int **)&uStack_330;
      piStack_548 = (int *)0xffffffffffffffff;
      uStack_508 = param_1;
      uStack_328 = uStack_500;
      SystemCore_DataTransformer(system_status_flag,0,iVar29,1);
      LOCK();
      param_1[0x21ea7c] = 0;
      UNLOCK();
      ppiStack_518 = (int **)&uStack_310;
      uStack_500 = afStack_528;
      puStack_300 = &processed_var_6448_ptr;
      pcStack_2f8 = FUN_1805030a0;
      uStack_310 = uVar11;
      uStack_30c = uVar12;
      if ((char)param_1[0x21da55] == '\0') {
        iVar16 = (int)(*(int64_t *)(param_1 + 0x21da4e) - *(int64_t *)(param_1 + 0x21da4c) >> 3);
      }
      else {
        iVar16 = param_1[0x21da54];
      }
      ppiStack_540 = (int **)&uStack_310;
      piStack_548 = (int *)0xffffffffffffffff;
      uStack_508 = param_1;
      uStack_308 = uStack_500;
      SystemCore_DataTransformer(ppiStack_540,0,iVar16,1);
      ppiStack_518 = (int **)&uStack_2f0;
      uStack_500 = afStack_528;
      puStack_2e0 = &processed_var_6208_ptr;
      pcStack_2d8 = FUN_180502fb0;
      uStack_2f0 = uVar11;
      uStack_2ec = uVar12;
      if ((char)param_1[0x21ea4f] == '\0') {
        iVar16 = (int)(*(int64_t *)(param_1 + 0x21ea48) - *(int64_t *)(param_1 + 0x21ea46) >> 3);
      }
      else {
        iVar16 = param_1[0x21ea4e];
      }
      ppiStack_540 = (int **)&uStack_2f0;
      piStack_548 = (int *)0xffffffffffffffff;
      uStack_508 = param_1;
      uStack_2e8 = uStack_500;
      SystemCore_DataTransformer(ppiStack_540,0,iVar16,1);
      ppiStack_518 = apuStack_410;
      uStack_500 = afStack_528;
      pfStack_4f8 = (float *)auStack_51f;
      pcStack_400 = FUN_180502ed0;
      puStack_3f8 = &processed_var_5792_ptr;
      uStack_508 = param_1;
      apuStack_410[0] = (int32_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags);
      *apuStack_410[0] = (int)uStack_508;
      apuStack_410[0][1] = uStack_508._4_4_;
      apuStack_410[0][2] = (int)uStack_500;
      apuStack_410[0][3] = uStack_500._4_4_;
      *(float **)(apuStack_410[0] + 4) = pfStack_4f8;
      ppiStack_540 = apuStack_410;
      piStack_548 = (int *)0xffffffffffffffff;
      uVar34 = SystemCore_DataTransformer((int)uStack_508,0,iVar29,1);
      piVar24 = param_1 + 0x21eb9c;
      uVar28 = 0;
      if (0 < *piVar24) {
        do {
          ppiStack_518 = (int **)(*(int64_t *)(param_1 + (uVar28 >> 4) * 2 + 0x21eb9e) +
                                 (int64_t)((int)uVar28 + (int)(uVar28 >> 4) * -0x10) * 0x50);
          if (*ppiStack_518 != (int *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          uVar27 = (int)uVar28 + 1;
          uVar28 = (uint64_t)uVar27;
        } while ((int)uVar27 < *piVar24);
      }
      LOCK();
      *piVar24 = 0;
      UNLOCK();
      ppiStack_518 = apiStack_2d0;
      puStack_2c0 = &processed_var_5728_ptr;
      puStack_2b8 = &processed_var_5712_ptr;
      ppiStack_540 = apiStack_2d0;
      piStack_548 = (int *)0xffffffffffffffff;
      apiStack_2d0[0] = param_1;
      uVar34 = SystemCore_DataTransformer(uVar34,0,param_1[0x21ea7c],1);
      ppiStack_518 = apiStack_2b0;
      puStack_2a0 = &processed_var_5648_ptr;
      pcStack_298 = FUN_180502cf0;
      ppiStack_540 = apiStack_2b0;
      piStack_548 = (int *)0xffffffffffffffff;
      apiStack_2b0[0] = param_1;
      SystemCore_DataTransformer(uVar34,0,iVar29,2);
      iVar29 = *piVar24;
      uStack_500 = (float *)CONCAT44(uStack_500._4_4_,iVar29);
      uVar17 = uStack_500;
      fStack_4c0 = 0.0;
      uStack_508 = piVar24;
      uStack_4c8 = piVar24;
      if (iVar29 != 0) {
        iVar23 = 0;
        for (iVar16 = iVar29; iVar16 != 0; iVar16 = iVar16 >> 1) {
          iVar23 = iVar23 + 1;
        }
        uStack_240 = uStack_500;
        pfVar6 = (float *)((uint64_t)uStack_4bc << 0x20);
        piStack_268 = piVar24;
        pfStack_260 = pfVar6;
        piStack_248 = piVar24;
        FUN_180503d70(&piStack_268,&piStack_248,(int64_t)(iVar23 + -1) * 2);
        if (iVar29 < 0x1d) {
          uStack_280 = uVar17;
          uStack_458 = piVar24;
          uStack_450 = pfVar6;
          piStack_288 = piVar24;
          FUN_180504020(&uStack_458,&piStack_288);
        }
        else {
          uStack_500._0_4_ = 0x1c;
          uStack_250 = 0x1c;
          uStack_24c = uStack_500._4_4_;
          uStack_508 = piVar24;
          piStack_238 = piVar24;
          pfStack_230 = pfVar6;
          uStack_258 = piVar24;
          FUN_180504020(&piStack_238,&uStack_258);
          uStack_500 = (float *)CONCAT44(uStack_500._4_4_,0x1c);
          uStack_220 = uVar17;
          uStack_210 = 0x1c;
          uStack_20c = uStack_500._4_4_;
          uStack_508 = piVar24;
          piStack_228 = piVar24;
          uStack_218 = piVar24;
          FUN_180501cb0(&uStack_218,&piStack_228);
        }
      }
      iVar29 = *piVar24;
      uVar28 = 0;
      if (0 < iVar29) {
        do {
          if (*(char *)(*(int64_t *)(param_1 + (uVar28 >> 4) * 2 + 0x21eb9e) +
                        (uint64_t)(uint)((int)uVar28 + (int)(uVar28 >> 4) * -0x10) * 0x50 + 0x48)
              == '\0') {
            FUN_1805a1630();
          }
          else {
            FUN_1805a0c50();
          }
          uVar27 = (int)uVar28 + 1;
          uVar28 = (uint64_t)uVar27;
        } while ((int)uVar27 < iVar29);
      }
      iVar29 = 0;
      if ((*(int64_t *)(param_1 + 0x24) - *(int64_t *)(param_1 + 0x22)) / 0x28 != 0) {
        fVar38 = afStack_528[0] * 0.06666667;
        lVar26 = lVar18;
        do {
          pauVar5 = *(int8_t (**) [16])(lVar26 + 0x10 + *(int64_t *)(param_1 + 0x22));
          pfVar6 = *(float **)(lVar26 + 0x18 + *(int64_t *)(param_1 + 0x22));
          fVar40 = (pfVar6[4] - *(float *)pauVar5[1]) * fVar38 + *(float *)pauVar5[1];
          fVar37 = (pfVar6[5] - *(float *)(pauVar5[1] + 4)) * fVar38 + *(float *)(pauVar5[1] + 4);
          fStack_4c0 = (pfVar6[6] - *(float *)(pauVar5[1] + 8)) * fVar38 +
                       *(float *)(pauVar5[1] + 8);
          uStack_4c8 = (int *)CONCAT44(fVar37,fVar40);
          *(float *)pauVar5[1] = fVar40;
          *(float *)(pauVar5[1] + 4) = fVar37;
          *(float *)(pauVar5[1] + 8) = fStack_4c0;
          *(uint *)(pauVar5[1] + 0xc) = uStack_4bc;
          auStack_4e0._4_4_ =
               (pfVar6[1] - *(float *)(*pauVar5 + 4)) * fVar38 + *(float *)(*pauVar5 + 4);
          auStack_4e0._0_4_ = (*pfVar6 - *(float *)*pauVar5) * fVar38 + *(float *)*pauVar5;
          auStack_4e0._8_4_ =
               (pfVar6[2] - *(float *)(*pauVar5 + 8)) * fVar38 + *(float *)(*pauVar5 + 8);
          *pauVar5 = auStack_4e0;
          pfVar6[0xc] = 0.0;
          pfVar6[0] = 0.0;
          pfVar6[1] = 0.0;
          pfVar6[2] = 0.0;
          pfVar6[3] = 0.0;
          pfVar6[4] = 0.0;
          pfVar6[5] = 0.0;
          pfVar6[6] = 0.0;
          pfVar6[7] = 0.0;
          pfVar6[8] = 0.0;
          pfVar6[9] = 0.0;
          pfVar6[10] = 0.0;
          pfVar6[0xb] = 0.0;
          iVar29 = iVar29 + 1;
          lVar26 = lVar26 + 0x28;
        } while ((uint64_t)(int64_t)iVar29 <
                 (uint64_t)((*(int64_t *)(param_1 + 0x24) - *(int64_t *)(param_1 + 0x22)) / 0x28)
                );
      }
      aiStack_1d8[0] = -1;
      aiStack_1d8[1] = 0;
      aiStack_1d8[2] = 0;
      aiStack_1d8[3] = 0;
      aiStack_1d8[4] = 0;
      aiStack_1d8[5] = 1;
      aiStack_1d8[6] = 0;
      aiStack_1d8[7] = 0;
      aiStack_1d8[8] = 0;
      aiStack_1d8[9] = 0;
      aiStack_1d8[10] = 0;
      aiStack_1d8[0xb] = 0x3f800000;
      aiStack_1d8[0xc] = 0;
      FUN_1801c28f0(alStack_1a0);
      while( true ) {
        cVar14 = FUN_180501090(param_1 + 0x2634b6,aiStack_1d8);
        if (cVar14 == '\0') break;
        if (-1 < aiStack_1d8[0]) {
          FUN_180545140(&system_data_6110,aiStack_1d8,alStack_1a0,0);
        }
      }
      plStack_4b8 = alStack_1a0;
      SystemDataValidator(alStack_1a0,0x30,4,SystemCore_MemoryManager);
      pplStack_488 = (int64_t **)0x0;
      while( true ) {
        cVar14 = FUN_1805012c0(param_1 + 0x263576,&pplStack_488);
        if (cVar14 == '\0') break;
        if ((pplStack_488[0xdb] != (int64_t *)0x0) &&
           (*(char *)((int64_t)pplStack_488[0xdb] + 0x8be) != '\0')) {
          FUN_18052edc0();
        }
      }
      uVar17 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3);
      plStack_4b8 = (int64_t *)&uStack_430;
      uStack_500 = afStack_528;
      puStack_420 = &processed_var_5264_ptr;
      puStack_418 = &processed_var_5232_ptr;
      uStack_430 = uVar11;
      uStack_42c = uVar12;
      uStack_508 = param_1;
      uStack_428 = uStack_500;
      plVar21 = (int64_t *)SystemCore_ErrorHandler(uVar17,&uStack_430);
      plStack_278 = plVar21;
      if (plVar21 != (int64_t *)0x0) {
        (**(code **)(*plVar21 + 0x28))(plVar21);
      }
      uVar17 = system_context_ptr;
      pplStack_488 = &plStack_4b8;
      plStack_4b8 = plVar21;
      if (plVar21 != (int64_t *)0x0) {
        (**(code **)(*plVar21 + 0x28))(plVar21);
      }
      SystemCore_TimerManager(uVar17,&plStack_4b8);
      lVar26 = *(int64_t *)(*(int64_t *)(param_1 + 6) + 0x260);
      plStack_478 = plVar21;
      if (plVar21 != (int64_t *)0x0) {
        (**(code **)(*plVar21 + 0x28))(plVar21);
      }
      FUN_1800b87c0(lVar26 + 0x380,&plStack_478);
      if (plStack_478 != (int64_t *)0x0) {
        (**(code **)(*plStack_478 + 0x38))();
      }
      plVar7 = *(int64_t **)(param_1 + 0x263648);
      uVar28 = (plVar7[1] - *plVar7) / 0xb0;
      iVar29 = (int)uVar28;
      if (0 < iVar29) {
        uVar28 = uVar28 & 0xffffffff;
        do {
          FUN_1805ad200(*plVar7 + lVar18);
          lVar18 = lVar18 + 0xb0;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
      iVar29 = iVar29 + -1;
      if (-1 < iVar29) {
        lVar26 = (int64_t)iVar29 * 0xb0;
        lVar18 = lVar26;
        do {
          if ((*(byte *)(lVar26 + 0x41 + *plVar7) & 0x20) == 0) {
            FUN_1805ab310(lVar18 + *plVar7,plVar7[1] + -0xb0);
            plVar7[1] = plVar7[1] + -0xb0;
            FUN_1805021b0(plVar7[1]);
          }
          lVar18 = lVar18 + -0xb0;
          lVar26 = lVar26 + -0xb0;
          iVar29 = iVar29 + -1;
        } while (-1 < iVar29);
      }
      FUN_180199500(*(uint64_t *)(param_1 + 6));
      while( true ) {
        cVar14 = FUN_180068a90(param_1 + 0x21ecee,&pplStack_468);
        if (cVar14 == '\0') break;
        FUN_1805274a0(pplStack_468);
      }
      FUN_1801998a0(*(uint64_t *)(param_1 + 6));
      fVar38 = (float)param_1[0x26349f];
      fVar37 = (float)param_1[0x26349e];
      if (fVar38 < fVar37) {
        if (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)param_1[0x263498] * 8) -
                         *(int64_t *)(param_1 + 0x263496)) * 1e-05) {
          fVar37 = fVar37 - afStack_528[0] * 0.25;
          if (fVar38 <= fVar37) {
            fVar38 = fVar37;
          }
          param_1[0x26349e] = (int)fVar38;
        }
      }
      else {
        fVar40 = fVar37 + afStack_528[0];
        if (fVar38 <= fVar37 + afStack_528[0]) {
          fVar40 = fVar38;
        }
        param_1[0x26349e] = (int)fVar40;
        *(int64_t *)(param_1 + 0x263496) =
             *(int64_t *)(&system_error_code + (int64_t)param_1[0x263498] * 8) + 100000;
      }
      iVar29 = param_1[0x2634a1];
      if (iVar29 < param_1[0x2634a0]) {
        if (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)param_1[0x26349c] * 8) -
                         *(int64_t *)(param_1 + 0x26349a)) * 1e-05) {
          param_1[0x2634a0] = iVar29;
        }
      }
      else {
        param_1[0x2634a0] = iVar29;
        *(int64_t *)(param_1 + 0x26349a) =
             *(int64_t *)(&system_error_code + (int64_t)param_1[0x26349c] * 8) + 100000;
      }
      uVar28 = 0;
      if (0 < param_1[0x21ef4a]) {
        do {
          if (*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x21ef54) + (uVar28 >> 4) * 8) + 8 +
                      (uint64_t)((uint)uVar28 & 0xf) * 0x40) != 0) break;
          uVar27 = (uint)uVar28 + 1;
          uVar28 = (uint64_t)uVar27;
        } while ((int)uVar27 < param_1[0x21ef4a]);
      }
      if ((int)uVar28 < param_1[0x21ef4a]) {
        do {
          lVar18 = (uint64_t)((uint)uVar28 & 0xf) * 0x40 +
                   *(int64_t *)(*(int64_t *)(param_1 + 0x21ef54) + (uVar28 >> 4) * 8);
          plVar7 = *(int64_t **)(lVar18 + 0x18);
          if (plVar7 != (int64_t *)0x0) {
            fVar38 = (float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(lVar18 + 0x30) * 8) -
                            *(int64_t *)(lVar18 + 0x28)) * 1e-05;
            if (fVar38 <= *(float *)(lVar18 + 0x38)) {
              fVar38 = 1.0 - fVar38 / *(float *)(lVar18 + 0x38);
              if (fVar38 <= 0.01) {
                fVar38 = 0.01;
              }
              FUN_1802ea560(plVar7,fVar38);
            }
            else {
              if ((*(char *)(lVar18 + 0x20) == '\0') || (plVar7[4] == 0)) {
                RenderingSystem_UpdateCamera(plVar7,0);
              }
              else {
                uVar17 = *(uint64_t *)(*(int64_t *)(lVar18 + 0x10) + 0x18);
                pplStack_468 = &plStack_470;
                plStack_470 = plVar7;
                (**(code **)(*plVar7 + 0x28))();
                FUN_1801c2460(uVar17,&plStack_470,0x45);
              }
              FUN_1805ae0f0(*(int64_t *)(lVar18 + 0x10) + 0x87bd28,*(int32_t *)(lVar18 + 0xc));
              ppiStack_460 = *(int ***)(lVar18 + 0x18);
              *(uint64_t *)(lVar18 + 0x18) = 0;
              if (ppiStack_460 != (int **)0x0) {
                (**(code **)(*ppiStack_460 + 0xe))();
              }
              *(uint64_t *)(lVar18 + 0x10) = 0;
            }
          }
          uVar27 = (uint)uVar28 + 1;
          uVar28 = (uint64_t)uVar27;
          if ((int)uVar27 < param_1[0x21ef4a]) {
            do {
              if (*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x21ef54) + (uVar28 >> 4) * 8) + 8
                          + (uint64_t)((uint)uVar28 & 0xf) * 0x40) != 0) break;
              uVar27 = (uint)uVar28 + 1;
              uVar28 = (uint64_t)uVar27;
            } while ((int)uVar27 < param_1[0x21ef4a]);
          }
        } while ((int)uVar28 < param_1[0x21ef4a]);
      }
      if (plVar21 != (int64_t *)0x0) {
        (**(code **)(*plVar21 + 0x38))(plVar21);
      }
      goto LAB_1804eb07a;
    }
  }
  FUN_1804d5bb0(param_1 + 8);
  LOCK();
  *(int32_t *)
   ((int64_t)*(int *)(*(int64_t *)(param_1 + 6) + 0x80c0) * 0x2408 + 0x5cb8 +
   *(int64_t *)(param_1 + 6)) = 0;
  UNLOCK();
LAB_1804eb07a:
  uVar28 = 0;
  if (system_status_flag == 1) {
    iVar29 = param_1[0x23f489];
    while (0x100 < iVar29) {
      uVar27 = param_1[0x23f488] + 1U & 0x800003ff;
      if ((int)uVar27 < 0) {
        uVar27 = (uVar27 - 1 | 0xfffffc00) + 1;
      }
      param_1[0x23f488] = uVar27;
      param_1[0x23f489] = param_1[0x23f489] + -1;
      uVar27 = param_1[0x26348a] + 1U & 0x800003ff;
      if ((int)uVar27 < 0) {
        uVar27 = (uVar27 - 1 | 0xfffffc00) + 1;
      }
      param_1[0x26348a] = uVar27;
      param_1[0x26348b] = param_1[0x26348b] + -1;
      iVar29 = param_1[0x23f489];
    }
    iVar29 = param_1[0x26364c];
    if (-1 < iVar29) {
      iVar16 = param_1[(int64_t)iVar29 * 0x298 + 0xd81];
      if (param_1[(int64_t)iVar29 * 0x298 + 0xd81] < 0) {
        iVar16 = iVar29;
      }
      lVar18 = (int64_t)iVar16;
      *(uint64_t *)(param_1 + lVar18 * 0x80 + 0x14bb6c) = *(uint64_t *)(param_1 + 0x21f484);
      param_1[lVar18 * 0x80 + 0x14bb6e] = (int)afStack_528[0];
      piVar24 = param_1 + 0x21f488;
      uVar27 = param_1[0x23f488] + param_1[0x23f489] & 0x800003ff;
      if ((int)uVar27 < 0) {
        uVar27 = (uVar27 - 1 | 0xfffffc00) + 1;
      }
      func_0x0001804fc4e0(piVar24 + (int64_t)(int)uVar27 * 0x80);
      piVar24[0x20001] = piVar24[0x20001] + 1;
      uVar27 = param_1[0x26348a] + param_1[0x26348b] & 0x800003ff;
      if ((int)uVar27 < 0) {
        uVar27 = (uVar27 - 1 | 0xfffffc00) + 1;
      }
      lVar26 = 4;
      piVar24 = param_1 + (int64_t)(int)uVar27 * 0x90 + 0x23f48a;
      piVar19 = param_1 + lVar18 * 0x90 + 0x18bb66;
      do {
        piVar25 = piVar19;
        piVar22 = piVar24;
        uVar17 = *(uint64_t *)(piVar25 + 2);
        *(uint64_t *)piVar22 = *(uint64_t *)piVar25;
        *(uint64_t *)(piVar22 + 2) = uVar17;
        uVar17 = *(uint64_t *)(piVar25 + 6);
        *(uint64_t *)(piVar22 + 4) = *(uint64_t *)(piVar25 + 4);
        *(uint64_t *)(piVar22 + 6) = uVar17;
        uVar17 = *(uint64_t *)(piVar25 + 10);
        *(uint64_t *)(piVar22 + 8) = *(uint64_t *)(piVar25 + 8);
        *(uint64_t *)(piVar22 + 10) = uVar17;
        uVar17 = *(uint64_t *)(piVar25 + 0xe);
        *(uint64_t *)(piVar22 + 0xc) = *(uint64_t *)(piVar25 + 0xc);
        *(uint64_t *)(piVar22 + 0xe) = uVar17;
        uVar17 = *(uint64_t *)(piVar25 + 0x12);
        *(uint64_t *)(piVar22 + 0x10) = *(uint64_t *)(piVar25 + 0x10);
        *(uint64_t *)(piVar22 + 0x12) = uVar17;
        uVar17 = *(uint64_t *)(piVar25 + 0x16);
        *(uint64_t *)(piVar22 + 0x14) = *(uint64_t *)(piVar25 + 0x14);
        *(uint64_t *)(piVar22 + 0x16) = uVar17;
        uVar17 = *(uint64_t *)(piVar25 + 0x1a);
        *(uint64_t *)(piVar22 + 0x18) = *(uint64_t *)(piVar25 + 0x18);
        *(uint64_t *)(piVar22 + 0x1a) = uVar17;
        uVar17 = *(uint64_t *)(piVar25 + 0x1e);
        *(uint64_t *)(piVar22 + 0x1c) = *(uint64_t *)(piVar25 + 0x1c);
        *(uint64_t *)(piVar22 + 0x1e) = uVar17;
        lVar26 = lVar26 + -1;
        piVar24 = piVar22 + 0x20;
        piVar19 = piVar25 + 0x20;
      } while (lVar26 != 0);
      uVar17 = *(uint64_t *)(piVar25 + 0x22);
      *(uint64_t *)(piVar22 + 0x20) = *(uint64_t *)(piVar25 + 0x20);
      *(uint64_t *)(piVar22 + 0x22) = uVar17;
      uVar17 = *(uint64_t *)(piVar25 + 0x26);
      *(uint64_t *)(piVar22 + 0x24) = *(uint64_t *)(piVar25 + 0x24);
      *(uint64_t *)(piVar22 + 0x26) = uVar17;
      iVar29 = piVar25[0x29];
      iVar16 = piVar25[0x2a];
      iVar23 = piVar25[0x2b];
      piVar22[0x28] = piVar25[0x28];
      piVar22[0x29] = iVar29;
      piVar22[0x2a] = iVar16;
      piVar22[0x2b] = iVar23;
      uVar17 = *(uint64_t *)(piVar25 + 0x2e);
      *(uint64_t *)(piVar22 + 0x2c) = *(uint64_t *)(piVar25 + 0x2c);
      *(uint64_t *)(piVar22 + 0x2e) = uVar17;
      param_1[0x26348b] = param_1[0x26348b] + 1;
    }
  }
  iVar29 = param_1[0x26364c];
  if (((-1 < iVar29) && (param_1[(int64_t)iVar29 * 0x298 + 0xd82] != 1)) &&
     ((*(int64_t *)(param_1 + (int64_t)iVar29 * 0x298 + 0xdde) == 0 ||
      (*(char *)(*(int64_t *)(param_1 + (int64_t)iVar29 * 0x298 + 0xdde) + 0x8be) == '\0')))) {
    FUN_1804f1c90(param_1,0xffffffff,system_data_ec8a);
    param_1[0x23f488] = 0;
    param_1[0x23f489] = 0;
    param_1[0x26348a] = 0;
    param_1[0x26348b] = 0;
  }
  param_1[0x21ef40] = param_1[0x21ef40] + 1;
  if ((system_status_flag != 1) && (system_status_flag != 4)) {
    lVar18 = *(int64_t *)(&system_error_code + (int64_t)param_1[0x21ede4] * 8);
    lVar26 = *(int64_t *)(param_1 + 0x21ede2);
    lVar20 = *(int64_t *)(param_1 + 0x21ef42);
    lVar3 = *(int64_t *)(param_1 + 0x21ef44) - lVar20 >> 0x3f;
    uVar31 = uVar28;
    if ((*(int64_t *)(param_1 + 0x21ef44) - lVar20) / 0x18 + lVar3 != lVar3) {
      do {
        iVar29 = (int)uVar31;
        if ((*(float *)(uVar28 + 0x14 + lVar20) + (float)param_1[0x21ef5e] <=
             (float)(lVar18 - lVar26) * 1e-05) ||
           ((lVar3 = *(int64_t *)(uVar28 + 8 + lVar20), lVar3 != 0 &&
            ((*(int64_t *)(lVar3 + 0x20) == 0 || ((*(byte *)(lVar3 + 0x2e8) & 0xb) != 0xb)))))) {
          cVar14 = FUN_1804f7af0(param_1,uVar31,CONCAT71((int7)((uint64_t)lVar20 >> 8),1));
          if (cVar14 != '\0') {
            iVar29 = iVar29 + -1;
            uVar28 = uVar28 - 0x18;
          }
        }
        uVar28 = uVar28 + 0x18;
        lVar20 = *(int64_t *)(param_1 + 0x21ef42);
        uVar31 = (uint64_t)(iVar29 + 1U);
      } while ((uint64_t)(int64_t)(int)(iVar29 + 1U) <
               (uint64_t)((*(int64_t *)(param_1 + 0x21ef44) - lVar20) / 0x18));
    }
  }
  FUN_1801a5620(*(uint64_t *)(param_1 + 6),system_system_data_memory + 0x37,(char)param_1[0x21ecec]);
  pcVar8 = *(code **)(*system_system_data_memory + 0x18);
  puStack_208 = &system_config_ptr;
  puStack_200 = auStack_1f0;
  auStack_1f0[0] = 0;
  uStack_1f8 = 0xc;
  strcpy_s(auStack_1f0,0x10,&memory_allocator_3752_ptr);
  (*pcVar8)(system_system_data_memory,&puStack_208);
  puStack_208 = &system_state_ptr;
  if (0 < *(int *)(SYSTEM_STATE_MANAGER + 0x23e0)) {
    FUN_1804f6fd0(param_1);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_d8 ^ (uint64_t)auStack_568);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






