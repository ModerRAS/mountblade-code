#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part044_sub002_sub002.c - 1 个函数

// 函数: void FUN_1804c4840(int64_t param_1,int64_t param_2)
void FUN_1804c4840(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  int8_t *puVar15;
  int32_t *puVar16;
  int64_t lVar17;
  uint64_t uVar18;
  float *pfVar19;
  float *pfVar20;
  int32_t *puVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  void *puVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t lVar28;
  uint *puVar29;
  float *pfVar30;
  uint64_t uVar31;
  float *pfVar32;
  int iVar33;
  uint64_t uVar34;
  int64_t lVar35;
  uint uVar36;
  int64_t lVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int32_t uVar48;
  int8_t auStack_5a8 [32];
  double dStack_588;
  void *puStack_580;
  int8_t uStack_578;
  int iStack_568;
  int64_t lStack_560;
  int64_t lStack_558;
  int64_t *plStack_550;
  int64_t lStack_548;
  void *puStack_540;
  int32_t *puStack_538;
  int32_t uStack_530;
  uint64_t uStack_528;
  void *puStack_520;
  int8_t *puStack_518;
  int32_t uStack_510;
  uint64_t uStack_508;
  int64_t *plStack_500;
  int64_t lStack_4f8;
  int64_t lStack_4f0;
  void *puStack_4e8;
  void *puStack_4e0;
  int32_t uStack_4d8;
  uint64_t uStack_4d0;
  float afStack_4c8 [4];
  float *pfStack_4b8;
  float *pfStack_4b0;
  float *pfStack_4a8;
  int32_t uStack_4a0;
  int64_t *plStack_498;
  int64_t *plStack_490;
  int64_t *plStack_488;
  int64_t lStack_480;
  int64_t *plStack_478;
  int64_t *plStack_470;
  int64_t lStack_468;
  int64_t **pplStack_460;
  int64_t **pplStack_458;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  int32_t uStack_43c;
  uint64_t uStack_438;
  int64_t lStack_430;
  float fStack_428;
  float fStack_424;
  int32_t uStack_420;
  int32_t uStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  int32_t uStack_40c;
  int32_t uStack_408;
  float fStack_404;
  int32_t uStack_400;
  int32_t uStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  int32_t uStack_3ec;
  float fStack_3e8;
  float afStack_3e0 [4];
  int64_t lStack_3d0;
  int64_t lStack_3c8;
  float fStack_3c0;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  int32_t uStack_3ac;
  void *puStack_3a8;
  int64_t lStack_3a0;
  int32_t uStack_390;
  void *puStack_388;
  int64_t lStack_380;
  int32_t uStack_370;
  int64_t lStack_368;
  int32_t uStack_360;
  int64_t lStack_358;
  int8_t auStack_348 [8];
  void *puStack_340;
  int8_t auStack_328 [32];
  int32_t uStack_308;
  int iStack_304;
  int32_t uStack_300;
  int32_t uStack_2fc;
  int8_t uStack_2f8;
  int8_t uStack_2f7;
  char cStack_2f6;
  uint64_t uStack_2f4;
  uint64_t uStack_2ec;
  int32_t uStack_2e4;
  int32_t uStack_2e0;
  int32_t uStack_2dc;
  int32_t uStack_2d8;
  int32_t uStack_2d4;
  int32_t uStack_2d0;
  uint64_t uStack_2cc;
  uint64_t uStack_2c4;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  int64_t **pplStack_298;
  int64_t *plStack_290;
  int64_t *plStack_288;
  int64_t *plStack_280;
  uint64_t uStack_278;
  uint64_t uStack_268;
  uint64_t uStack_260;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  uint64_t uStack_240;
  uint64_t uStack_238;
  int64_t lStack_230;
  float fStack_228;
  float fStack_224;
  uint64_t uStack_220;
  uint64_t uStack_218;
  uint64_t uStack_210;
  uint64_t uStack_208;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  int32_t uStack_1d8;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  int64_t lStack_1a8;
  int64_t lStack_1a0;
  int32_t uStack_198;
  int32_t uStack_194;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int32_t uStack_15c;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  void *puStack_130;
  void *puStack_128;
  int iStack_120;
  uint8_t auStack_118 [32];
  char acStack_f8 [16];
  uint64_t uStack_e8;
  
  uStack_278 = 0xfffffffffffffffe;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_5a8;
  if (*(int *)(param_2 + 0x10) == 6) {
    lVar26 = 0;
    do {
      lVar28 = lVar26 + 1;
      if (*(char *)(*(int64_t *)(param_2 + 8) + lVar26) != (&system_data_64d8)[lVar26])
      goto LAB_1804c5ed4;
      lVar26 = lVar28;
    } while (lVar28 != 7);
    uStack_438 = 0x4120000041200000;
    lStack_430 = 0x7f7fffff00000000;
    uVar13 = *(uint64_t *)(*(int64_t *)(param_1 + 0x18) + 0x20);
    uVar11 = FUN_18062b1e0(system_memory_pool_ptr,0x2f0,0x10,&unknown_var_2307_ptr);
    plVar12 = (int64_t *)FUN_1802e6b00(uVar11,4);
    plStack_470 = plVar12;
    plStack_280 = plVar12;
    if (plVar12 != (int64_t *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12);
    }
    pplStack_458 = &plStack_498;
    plStack_498 = plVar12;
    if (plVar12 != (int64_t *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12);
    }
    uStack_578 = 0;
    puStack_580 = (void *)((uint64_t)puStack_580 & 0xffffffffffffff00);
    dStack_588 = 0.0;
    FUN_180198b90(uVar13,&plStack_498,0,0);
    lStack_468 = system_system_memory;
    if (system_system_memory != 0x180c95e98) {
      lVar26 = system_system_memory;
      fVar43 = uStack_438._4_4_;
      do {
        uVar34 = 0;
        fVar43 = fVar43 + 10.0;
        uStack_438 = CONCAT44(fVar43,(int32_t)uStack_438);
        lVar28 = *(int64_t *)(lVar26 + 0x28);
        lStack_468 = lVar26;
        lStack_3c8 = lVar28;
        if (*(int *)(lVar28 + 0x38) == 3) {
          uVar31 = uVar34;
          do {
            uVar18 = uVar31 + 1;
            if (*(char *)(*(int64_t *)(lVar28 + 0x30) + uVar31) != (&unknown_var_1168_ptr)[uVar31])
            goto LAB_1804c5ea0;
            uVar31 = uVar18;
          } while (uVar18 != 4);
          iVar9 = *(int *)(lVar28 + 0x298);
          iStack_568 = iVar9;
          uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x2f0,0x10,3);
          plVar14 = (int64_t *)FUN_1802e6b00(uVar13,4);
          plStack_478 = plVar14;
          plStack_290 = plVar14;
          if (plVar14 != (int64_t *)0x0) {
            (**(code **)(*plVar14 + 0x28))(plVar14);
          }
          puVar25 = &system_buffer_ptr;
          if (*(void **)(lVar28 + 0x30) != (void *)0x0) {
            puVar25 = *(void **)(lVar28 + 0x30);
          }
          (**(code **)(plVar14[0x51] + 0x10))(plVar14 + 0x51,puVar25);
          FUN_1802e8a50(plVar12,plVar14,0,0);
          uStack_1d8 = 0x3f800000;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 0;
          uStack_1c8 = 0;
          uStack_1c4 = 0x3f800000;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          uStack_1b8 = 0;
          uStack_1b4 = 0;
          uStack_1b0 = 0x3f800000;
          uStack_1ac = 0;
          lStack_1a8 = uStack_438;
          lStack_1a0 = lStack_430;
          if ((((((*(float *)(plVar14 + 0xc) != 10.0) ||
                 (fVar43 != *(float *)((int64_t)plVar14 + 100))) ||
                (*(float *)(plVar14 + 0xd) != 0.0)) ||
               ((*(float *)(plVar14 + 6) != 1.0 || (*(float *)((int64_t)plVar14 + 0x34) != 0.0))))
              || (*(float *)(plVar14 + 7) != 0.0)) ||
             (((*(float *)(plVar14 + 8) != 0.0 || (*(float *)((int64_t)plVar14 + 0x44) != 1.0)) ||
              ((*(float *)(plVar14 + 9) != 0.0 ||
               (((*(float *)(plVar14 + 10) != 0.0 || (*(float *)((int64_t)plVar14 + 0x54) != 0.0))
                || (*(float *)(plVar14 + 0xb) != 1.0)))))))) {
            *(int32_t *)(plVar14 + 6) = 0x3f800000;
            *(int32_t *)((int64_t)plVar14 + 0x34) = 0;
            *(int32_t *)(plVar14 + 7) = 0;
            *(int32_t *)((int64_t)plVar14 + 0x3c) = 0;
            *(int32_t *)(plVar14 + 8) = 0;
            *(int32_t *)((int64_t)plVar14 + 0x44) = 0x3f800000;
            *(int32_t *)(plVar14 + 9) = 0;
            *(int32_t *)((int64_t)plVar14 + 0x4c) = 0;
            *(int32_t *)(plVar14 + 10) = 0;
            *(int32_t *)((int64_t)plVar14 + 0x54) = 0;
            *(int32_t *)(plVar14 + 0xb) = 0x3f800000;
            *(int32_t *)((int64_t)plVar14 + 0x5c) = 0;
            plVar14[0xc] = uStack_438;
            plVar14[0xd] = lStack_430;
            FUN_180254610(plVar14);
            FUN_1802eace0();
          }
          uVar13 = system_system_data_memory;
          uVar48 = system_system_control_memory;
          puVar25 = &system_buffer_ptr;
          if (*(void **)(lVar28 + 0x30) != (void *)0x0) {
            puVar25 = *(void **)(lVar28 + 0x30);
          }
          uStack_408 = 0x41200000;
          uStack_400 = 0x40a00000;
          uStack_3fc = 0x7f7fffff;
          fStack_404 = fVar43;
          uVar11 = FUN_180627910(&puStack_3a8,puVar25);
          puStack_580 = (void *)CONCAT44(puStack_580._4_4_,0x461c4000);
          dStack_588 = 0.0;
          FUN_180632d00(uVar13,&uStack_408,uVar11,uVar48);
          puStack_3a8 = &system_data_buffer_ptr;
          if (lStack_3a0 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_3a0 = 0;
          uStack_390 = 0;
          puStack_3a8 = &system_state_ptr;
          plStack_500 = *(int64_t **)(lVar28 + 0x370);
          plVar12 = (int64_t *)plStack_500[7];
          lVar28 = *plVar12;
          if (plStack_500[8] - (int64_t)plVar12 >> 4 != 0) {
            lVar35 = 0;
            uVar31 = uVar34;
            do {
              lVar37 = *(int64_t *)(lVar35 + (int64_t)plVar12);
              puStack_130 = &unknown_var_672_ptr;
              puStack_128 = auStack_118;
              auStack_118[0] = 0;
              iStack_120 = 0xe;
              strcpy_s(auStack_118,0x20,&unknown_var_6120_ptr);
              puVar15 = (int8_t *)0x0;
              puStack_520 = &system_data_buffer_ptr;
              uStack_508._0_4_ = 0;
              uStack_508._4_4_ = 0;
              puStack_518 = (int8_t *)0x0;
              uStack_510 = 0;
              if (iStack_120 != 0) {
                iVar9 = iStack_120 + 1;
                if (iVar9 < 0x10) {
                  iVar9 = 0x10;
                }
                puVar15 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(int64_t)iVar9,0x13);
                *puVar15 = 0;
                puStack_518 = puVar15;
                uStack_508._0_4_ = FUN_18064e990();
                if (0 < iStack_120) {
                  puVar25 = &system_buffer_ptr;
                  if (puStack_128 != (void *)0x0) {
                    puVar25 = puStack_128;
                  }
                    // WARNING: Subroutine does not return
                  memcpy(puVar15,puVar25,(int64_t)(iStack_120 + 1));
                }
              }
              if ((puStack_128 != (void *)0x0) &&
                 (uStack_510 = 0, puVar15 != (int8_t *)0x0)) {
                *puVar15 = 0;
              }
              cVar8 = FUN_180063510(lVar37 + 0x218,&puStack_520);
              puStack_520 = &system_data_buffer_ptr;
              if (puVar15 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(puVar15);
              }
              puStack_518 = (int8_t *)0x0;
              uStack_508 = (uint64_t)uStack_508._4_4_ << 0x20;
              puStack_520 = &system_state_ptr;
              puStack_130 = &system_state_ptr;
              iVar9 = iStack_568;
              if (cVar8 != '\0') {
                lVar28 = *(int64_t *)(plStack_500[7] + uVar34 * 0x10);
                break;
              }
              uVar36 = (int)uVar31 + 1;
              uVar31 = (uint64_t)uVar36;
              uVar34 = uVar34 + 1;
              lVar35 = lVar35 + 0x10;
              plVar12 = (int64_t *)plStack_500[7];
            } while ((uint64_t)(int64_t)(int)uVar36 <
                     (uint64_t)(plStack_500[8] - (int64_t)plVar12 >> 4));
          }
          uStack_360 = 0;
          lStack_368 = lVar28;
          iVar10 = _Thrd_id();
          while( true ) {
            LOCK();
            cVar8 = *(char *)(lVar28 + 0xec);
            bVar38 = cVar8 == '\0';
            if (bVar38) {
              *(char *)(lVar28 + 0xec) = '\x01';
              cVar8 = '\0';
            }
            UNLOCK();
            if (bVar38) break;
            if (*(int *)(lVar28 + 0xf0) == iVar10) goto LAB_1804c4e56;
            Sleep(0);
          }
          cVar8 = '\0';
LAB_1804c4e56:
          LOCK();
          *(int *)(lVar28 + 0xe8) = *(int *)(lVar28 + 0xe8) + 1;
          UNLOCK();
          FUN_18007eb80(lVar28,0);
          if (cVar8 == '\0') {
            LOCK();
            *(int8_t *)(lVar28 + 0xec) = 0;
            UNLOCK();
          }
          lVar28 = *(int64_t *)(lVar28 + 0x210);
          lStack_4f8 = (int64_t)*(int *)(lVar28 + 0x10);
          uStack_200 = 0;
          uStack_1f8 = 0;
          uStack_1f0 = 0;
          uStack_1e8 = 3;
          fVar45 = 5.0;
          fVar46 = 0.0;
          fVar47 = 0.0;
          uVar48 = 0x7f7fffff;
          fStack_448 = 5.0;
          fStack_444 = 0.0;
          fStack_440 = 0.0;
          uStack_43c = 0x7f7fffff;
          lStack_480 = 0;
          pplStack_458 = (int64_t **)(int64_t)iVar9;
          lStack_558 = lVar28;
          lStack_358 = lVar28;
          if (0 < iVar9) {
            do {
              lVar26 = lStack_480 * 0xa8 + *(int64_t *)(lStack_3c8 + 0x290);
              FUN_180627ae0(auStack_348,lVar26);
              FUN_180627ae0(auStack_328,lVar26 + 0x20);
              uStack_308 = *(int32_t *)(lVar26 + 0x40);
              iStack_304 = *(int *)(lVar26 + 0x44);
              uStack_300 = *(int32_t *)(lVar26 + 0x48);
              uStack_2fc = *(int32_t *)(lVar26 + 0x4c);
              uStack_2f8 = *(int8_t *)(lVar26 + 0x50);
              uStack_2f7 = *(int8_t *)(lVar26 + 0x51);
              cStack_2f6 = *(char *)(lVar26 + 0x52);
              uStack_2f4 = *(uint64_t *)(lVar26 + 0x54);
              uStack_2ec = *(uint64_t *)(lVar26 + 0x5c);
              uStack_2e4 = *(int32_t *)(lVar26 + 100);
              uStack_2e0 = *(int32_t *)(lVar26 + 0x68);
              uStack_2dc = *(int32_t *)(lVar26 + 0x6c);
              uStack_2d8 = *(int32_t *)(lVar26 + 0x70);
              uStack_2d4 = *(int32_t *)(lVar26 + 0x74);
              uStack_2d0 = *(int32_t *)(lVar26 + 0x78);
              uStack_2cc = *(uint64_t *)(lVar26 + 0x7c);
              uStack_2c4 = *(uint64_t *)(lVar26 + 0x84);
              uStack_2b8 = *(uint64_t *)(lVar26 + 0x90);
              uStack_2b0 = *(uint64_t *)(lVar26 + 0x98);
              uStack_2a8 = *(uint64_t *)(lVar26 + 0xa0);
              if (cStack_2f6 != '\0') {
                uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x2f0,0x10,3);
                plVar12 = (int64_t *)FUN_1802e6b00(uVar13,4);
                plStack_488 = plVar12;
                if (plVar12 != (int64_t *)0x0) {
                  (**(code **)(*plVar12 + 0x28))(plVar12);
                }
                puVar25 = &system_buffer_ptr;
                if (puStack_340 != (void *)0x0) {
                  puVar25 = puStack_340;
                }
                (**(code **)(plVar12[0x51] + 0x10))(plVar12 + 0x51,puVar25);
                FUN_1802e8a50(plStack_478,plVar12,0,0);
                fVar44 = fStack_448;
                uStack_198 = 0x3f800000;
                uStack_194 = 0;
                uStack_190 = 0;
                uStack_18c = 0;
                uStack_188 = 0;
                uStack_184 = 0x3f800000;
                uStack_180 = 0;
                uStack_17c = 0;
                uStack_178 = 0;
                uStack_174 = 0;
                uStack_170 = 0x3f800000;
                uStack_16c = 0;
                fStack_168 = fVar45;
                fStack_164 = fVar46;
                fStack_160 = fVar47;
                uStack_15c = uVar48;
                if (((((fStack_448 != *(float *)(plVar12 + 0xc)) ||
                      (*(float *)((int64_t)plVar12 + 100) != 0.0)) ||
                     ((*(float *)(plVar12 + 0xd) != 0.0 ||
                      (((*(float *)(plVar12 + 6) != 1.0 ||
                        (*(float *)((int64_t)plVar12 + 0x34) != 0.0)) ||
                       (*(float *)(plVar12 + 7) != 0.0)))))) ||
                    ((*(float *)(plVar12 + 8) != 0.0 ||
                     (*(float *)((int64_t)plVar12 + 0x44) != 1.0)))) ||
                   ((*(float *)(plVar12 + 9) != 0.0 ||
                    (((*(float *)(plVar12 + 10) != 0.0 ||
                      (*(float *)((int64_t)plVar12 + 0x54) != 0.0)) ||
                     (*(float *)(plVar12 + 0xb) != 1.0)))))) {
                  *(int32_t *)(plVar12 + 6) = 0x3f800000;
                  *(int32_t *)((int64_t)plVar12 + 0x34) = 0;
                  *(int32_t *)(plVar12 + 7) = 0;
                  *(int32_t *)((int64_t)plVar12 + 0x3c) = 0;
                  *(int32_t *)(plVar12 + 8) = 0;
                  *(int32_t *)((int64_t)plVar12 + 0x44) = 0x3f800000;
                  *(int32_t *)(plVar12 + 9) = 0;
                  *(int32_t *)((int64_t)plVar12 + 0x4c) = 0;
                  *(int32_t *)(plVar12 + 10) = 0;
                  *(int32_t *)((int64_t)plVar12 + 0x54) = 0;
                  *(int32_t *)(plVar12 + 0xb) = 0x3f800000;
                  *(int32_t *)((int64_t)plVar12 + 0x5c) = 0;
                  *(float *)(plVar12 + 0xc) = fVar45;
                  *(float *)((int64_t)plVar12 + 100) = fVar46;
                  *(float *)(plVar12 + 0xd) = fVar47;
                  *(int32_t *)((int64_t)plVar12 + 0x6c) = uVar48;
                  FUN_180254610(plVar12);
                  FUN_1802eace0();
                }
                lStack_548 = (int64_t)iStack_304 * 0x50 + *(int64_t *)(lVar28 + 0xb0);
                afStack_3e0[0] = 0.0;
                afStack_3e0[1] = 0.0;
                afStack_3e0[2] = 0.0;
                afStack_3e0[3] = 3.4028235e+38;
                afStack_4c8[0] = 0.0;
                afStack_4c8[1] = 0.0;
                afStack_4c8[2] = 0.0;
                iStack_568 = 0;
                lStack_560 = 0;
                pplStack_298 = &plStack_550;
                do {
                  lVar26 = lStack_560;
                  iVar9 = iStack_568;
                  uVar36 = 0;
                  uVar13 = FUN_18062b1e0(system_memory_pool_ptr,0x2f0,0x10,3);
                  plVar14 = (int64_t *)FUN_1802e6b00(uVar13,4);
                  plStack_288 = plVar14;
                  if (plVar14 != (int64_t *)0x0) {
                    (**(code **)(*plVar14 + 0x28))(plVar14);
                  }
                  puStack_540 = &system_data_buffer_ptr;
                  uStack_528 = 0;
                  puStack_538 = (int32_t *)0x0;
                  uStack_530 = 0;
                  puVar16 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
                  *(int8_t *)puVar16 = 0;
                  uVar34 = (uint64_t)puVar16 & 0xffffffffffc00000;
                  if (uVar34 != 0) {
                    lVar28 = ((int64_t)puVar16 - uVar34 >> 0x10) * 0x50 + 0x80 + uVar34;
                    puVar29 = (uint *)(lVar28 - (uint64_t)*(uint *)(lVar28 + 4));
                    uVar36 = puVar29[7];
                    uVar31 = (uint64_t)uVar36;
                    if ((*(byte *)((int64_t)puVar29 + 0xe) & 2) == 0) {
                      if (0x3ffffff < uVar31) {
                        uVar36 = *puVar29 << 0x10;
                      }
                    }
                    else {
                      uVar18 = uVar31;
                      if (0x3ffffff < uVar31) {
                        uVar18 = (uint64_t)*puVar29 << 0x10;
                      }
                      if (0x3ffffff < uVar31) {
                        uVar36 = *puVar29 << 0x10;
                      }
                      uVar36 = uVar36 - (int)(((int64_t)puVar16 -
                                              (((int64_t)((int64_t)puVar29 + (-0x80 - uVar34)) /
                                               0x50) * 0x10000 + uVar34)) % uVar18);
                    }
                  }
                  *puVar16 = 0x6d6964;
                  uStack_530 = 3;
                  puStack_538 = puVar16;
                  uStack_528._0_4_ = uVar36;
                  FUN_180060680(acStack_f8,&unknown_var_4576_ptr,iVar9);
                  lVar28 = -1;
                  do {
                    lVar35 = lVar28;
                    lVar28 = lVar35 + 1;
                  } while (acStack_f8[lVar35 + 1] != '\0');
                  if (0 < (int)(lVar35 + 1)) {
                    iVar9 = (int)lVar35;
                    if ((iVar9 != -4) && (uVar36 < iVar9 + 5U)) {
                      dStack_588 = (double)CONCAT71(dStack_588._1_7_,0x13);
                      puVar16 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar16,iVar9 + 5U,0x10);
                      uVar34 = (uint64_t)puVar16 & 0xffffffffffc00000;
                      puStack_538 = puVar16;
                      if (uVar34 == 0) {
                        uStack_528._0_4_ = 0;
                      }
                      else {
                        lVar26 = ((int64_t)puVar16 - uVar34 >> 0x10) * 0x50 + 0x80 + uVar34;
                        puVar29 = (uint *)(lVar26 - (uint64_t)*(uint *)(lVar26 + 4));
                        if ((*(byte *)((int64_t)puVar29 + 0xe) & 2) == 0) {
                          uStack_528._0_4_ = puVar29[7];
                          if (0x3ffffff < (uint)uStack_528) {
                            uStack_528._0_4_ = *puVar29 << 0x10;
                          }
                        }
                        else {
                          uStack_528._0_4_ = puVar29[7];
                          if ((uint)uStack_528 < 0x4000000) {
                            uVar31 = (uint64_t)(uint)uStack_528;
                          }
                          else {
                            uVar31 = (uint64_t)*puVar29 << 0x10;
                          }
                          if (0x3ffffff < (uint)uStack_528) {
                            uStack_528._0_4_ = *puVar29 << 0x10;
                          }
                          uStack_528._0_4_ =
                               (uint)uStack_528 -
                               (int)(((int64_t)puVar16 -
                                     (((int64_t)((int64_t)puVar29 + (-0x80 - uVar34)) / 0x50) *
                                      0x10000 + uVar34)) % uVar31);
                        }
                      }
                    }
                    // WARNING: Subroutine does not return
                    memcpy((int8_t *)((int64_t)puVar16 + 3),acStack_f8,(int64_t)(iVar9 + 2));
                  }
                  puVar21 = (int32_t *)&system_buffer_ptr;
                  if (puVar16 != (int32_t *)0x0) {
                    puVar21 = puVar16;
                  }
                  (**(code **)(plVar14[0x51] + 0x10))(plVar14 + 0x51,puVar21);
                  FUN_1802e8a50(plVar12,plVar14,0,0);
                  uStack_268 = 0x3f800000;
                  uStack_260 = 0;
                  uStack_258 = 0x3f80000000000000;
                  uStack_250 = 0;
                  uStack_248 = 0;
                  uStack_240 = 0x3f800000;
                  lStack_230 = 0x3f80000000000000;
                  iVar9 = iStack_568 + -1;
                  uStack_238 = (uint64_t)(uint)(float)iVar9;
                  plVar12 = plVar14 + 6;
                  cVar8 = func_0x000180285980(plVar12,&uStack_268);
                  if (cVar8 != '\0') {
                    *plVar12 = 0x3f800000;
                    plVar12[1] = 0;
                    plVar12[2] = 0x3f80000000000000;
                    plVar12[3] = 0;
                    plVar12[4] = 0;
                    plVar12[5] = 0x3f800000;
                    plVar12[6] = uStack_238;
                    plVar12[7] = lStack_230;
                    FUN_180254610(plVar14);
                    FUN_1802eace0();
                  }
                  (**(code **)(*plStack_500 + 0xa8))(plStack_500,&plStack_490);
                  pplStack_460 = &plStack_550;
                  plStack_550 = plStack_490;
                  if (plStack_490 != (int64_t *)0x0) {
                    (**(code **)(*plStack_490 + 0x28))();
                  }
                  FUN_1802edcd0(plVar14,plStack_550,1);
                  if (plStack_550 != (int64_t *)0x0) {
                    (**(code **)(*plStack_550 + 0x38))();
                  }
                  if (plStack_490 != (int64_t *)0x0) {
                    (**(code **)(*plStack_490 + 0x38))();
                  }
                  puStack_540 = &system_data_buffer_ptr;
                  if (puVar16 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900(puVar16);
                  }
                  puStack_538 = (int32_t *)0x0;
                  uStack_528 = (uint64_t)uStack_528._4_4_ << 0x20;
                  puStack_540 = &system_state_ptr;
                  if (plVar14 != (int64_t *)0x0) {
                    (**(code **)(*plVar14 + 0x38))(plVar14);
                  }
                  lVar28 = lStack_4f8;
                  fStack_3b8 = fVar45;
                  fStack_3b4 = fVar46;
                  fStack_3b0 = fVar47;
                  uStack_3ac = uVar48;
                  fVar43 = (float)iVar9 + fVar44;
                  pfStack_4b8 = (float *)0x0;
                  pfStack_4b0 = (float *)0x0;
                  pfStack_4a8 = (float *)0x0;
                  uStack_4a0 = 3;
                  if (lStack_4f8 != 0) {
                    pfStack_4b0 = (float *)FUN_18062b420(system_memory_pool_ptr,lStack_4f8 * 0x28,3);
                    pfStack_4a8 = pfStack_4b0 + lVar28 * 10;
                  }
                  fVar42 = 0.0;
                  iVar9 = 0;
                  lStack_4f0 = 0;
                  lVar35 = lVar26;
                  if (3 < lVar28) {
                    lVar2 = *(int64_t *)(lStack_558 + 0x18);
                    lVar37 = lVar26 * 4;
                    pfVar32 = afStack_3e0 + lVar26;
                    pfVar23 = (float *)(lVar2 + 8);
                    pfVar30 = (float *)(lVar2 + 0x14);
                    lVar3 = *(int64_t *)(lStack_548 + 8);
                    pfVar20 = (float *)(lVar3 + 0x14);
                    lStack_3d0 = lVar37 + 0x1c;
                    lVar27 = lVar3 - lVar2;
                    pplStack_460 = (int64_t **)(lVar37 + -8);
                    lVar17 = (lStack_4f8 - 4U >> 2) + 1;
                    lStack_4f0 = lVar17 * 4;
                    do {
                      fVar41 = *(float *)(lVar27 + (int64_t)pfVar23) - *pfVar23;
                      fVar39 = *(float *)(lVar27 + -4 + (int64_t)pfVar23) - pfVar23[-1];
                      fVar40 = *(float *)(lVar27 + -8 + (int64_t)pfVar23) - pfVar23[-2];
                      if (1e-06 < fVar40 * fVar40 + fVar39 * fVar39 + fVar41 * fVar41) {
                        fVar42 = (ABS(*(float *)((lVar37 - lVar2) + lVar3 + -8 + (int64_t)pfVar23)
                                      - *pfVar32) /
                                  ABS(*(float *)((int64_t)pplStack_460 + (int64_t)pfVar23) -
                                      *pfVar32) + fVar42) - 1.0;
                        iVar9 = iVar9 + 1;
                      }
                      fVar39 = *(float *)(lVar27 + 8 + (int64_t)pfVar23) - pfVar23[2];
                      if (1e-06 < (*pfVar20 - *pfVar30) * (*pfVar20 - *pfVar30) + fVar39 * fVar39 +
                                  (pfVar20[1] - pfVar30[1]) * (pfVar20[1] - pfVar30[1])) {
                        fVar42 = (ABS(pfVar20[lVar26 + -1] - *pfVar32) /
                                  ABS(pfVar30[lVar26 + -1] - *pfVar32) + fVar42) - 1.0;
                        iVar9 = iVar9 + 1;
                      }
                      fVar39 = *(float *)(lVar27 + 0x18 + (int64_t)pfVar23) - pfVar23[6];
                      if (1e-06 < fVar39 * fVar39 +
                                  (pfVar20[4] - pfVar30[4]) * (pfVar20[4] - pfVar30[4]) +
                                  (pfVar20[5] - pfVar30[5]) * (pfVar20[5] - pfVar30[5])) {
                        fVar42 = (ABS(pfVar20[lVar26 + 3] - *pfVar32) /
                                  ABS(pfVar30[lVar26 + 3] - *pfVar32) + fVar42) - 1.0;
                        iVar9 = iVar9 + 1;
                      }
                      fVar39 = *(float *)(lVar27 + 0x28 + (int64_t)pfVar23) - pfVar23[10];
                      if (1e-06 < fVar39 * fVar39 +
                                  (pfVar20[8] - pfVar30[8]) * (pfVar20[8] - pfVar30[8]) +
                                  (pfVar20[9] - pfVar30[9]) * (pfVar20[9] - pfVar30[9])) {
                        fVar42 = (ABS(pfVar20[lVar26 + 7] - *pfVar32) /
                                  ABS(pfVar30[lVar26 + 7] - *pfVar32) + fVar42) - 1.0;
                        iVar9 = iVar9 + 1;
                      }
                      pfVar23 = pfVar23 + 0x10;
                      pfVar30 = pfVar30 + 0x10;
                      pfVar20 = pfVar20 + 0x10;
                      lVar17 = lVar17 + -1;
                      lVar28 = lStack_4f8;
                      lVar35 = lStack_560;
                    } while (lVar17 != 0);
                  }
                  if (lStack_4f0 < lVar28) {
                    pfVar23 = (float *)(lStack_4f0 * 0x10 + *(int64_t *)(lStack_548 + 8));
                    pfVar30 = (float *)(*(int64_t *)(lStack_558 + 0x18) + 4 + lStack_4f0 * 0x10);
                    lVar26 = lVar28 - lStack_4f0;
                    do {
                      fVar39 = *pfVar23 -
                               *(float *)((int64_t)pfVar23 +
                                         (*(int64_t *)(lStack_558 + 0x18) -
                                         *(int64_t *)(lStack_548 + 8)));
                      if (1e-06 < (pfVar23[1] - *pfVar30) * (pfVar23[1] - *pfVar30) +
                                  fVar39 * fVar39 +
                                  (pfVar23[2] - pfVar30[1]) * (pfVar23[2] - pfVar30[1])) {
                        fVar42 = (ABS(pfVar23[lVar35] - afStack_3e0[lVar35]) /
                                  ABS(pfVar30[lVar35 + -1] - afStack_3e0[lVar35]) + fVar42) - 1.0;
                        iVar9 = iVar9 + 1;
                      }
                      pfVar30 = pfVar30 + 4;
                      pfVar23 = pfVar23 + 4;
                      lVar26 = lVar26 + -1;
                    } while (lVar26 != 0);
                  }
                  pfVar30 = pfStack_4b0;
                  pfVar23 = pfStack_4b0;
                  pfStack_4b8 = pfStack_4b0;
                  if (0 < lVar28) {
                    lVar37 = 0;
                    lVar26 = lStack_558;
                    lVar35 = lStack_548;
                    pfVar20 = pfStack_4a8;
                    pfVar32 = pfStack_4b0;
                    pfVar24 = pfStack_4b0;
                    do {
                      pfVar19 = (float *)(*(int64_t *)(lVar26 + 0x18) + lVar37);
                      pfVar22 = (float *)(*(int64_t *)(lVar35 + 8) + lVar37);
                      pfVar30 = pfVar32;
                      pfVar23 = pfVar24;
                      if (1e-06 < (*pfVar22 - *pfVar19) * (*pfVar22 - *pfVar19) +
                                  (pfVar22[1] - pfVar19[1]) * (pfVar22[1] - pfVar19[1]) +
                                  (pfVar22[2] - pfVar19[2]) * (pfVar22[2] - pfVar19[2])) {
                        fVar39 = ABS(pfVar19[lStack_560] - afStack_3e0[lStack_560]);
                        fVar44 = ABS(pfVar22[lStack_560] - afStack_3e0[lStack_560]) / fVar39 - 1.0;
                        fStack_3c0 = fVar44;
                        fStack_3e8 = fVar39;
                        if ((0.25 / (float)iVar9) * fVar42 < fVar44) {
                          uVar13 = *(uint64_t *)pfVar22;
                          uVar11 = *(uint64_t *)(pfVar22 + 2);
                          uStack_150 = uVar13;
                          uStack_148 = uVar11;
                          uVar5 = *(uint64_t *)pfVar19;
                          uVar6 = *(uint64_t *)(pfVar19 + 2);
                          uStack_140 = uVar5;
                          uStack_138 = uVar6;
                          if (pfVar24 < pfVar20) {
                            pfVar23 = pfVar24 + 10;
                            *pfVar24 = fVar39;
                            pfVar24[1] = fVar44;
                            *(uint64_t *)(pfVar24 + 2) = uVar13;
                            *(uint64_t *)(pfVar24 + 4) = uVar11;
                            *(uint64_t *)(pfVar24 + 6) = uVar5;
                            *(uint64_t *)(pfVar24 + 8) = uVar6;
                            pfStack_4b0 = pfVar23;
                          }
                          else {
                            lVar26 = ((int64_t)pfVar24 - (int64_t)pfVar32) / 0x28;
                            if (lVar26 == 0) {
                              lVar26 = 1;
LAB_1804c5a6c:
                              pfVar30 = (float *)FUN_18062b420(system_memory_pool_ptr,lVar26 * 0x28,3);
                            }
                            else {
                              lVar26 = lVar26 * 2;
                              if (lVar26 != 0) goto LAB_1804c5a6c;
                              pfVar30 = (float *)0x0;
                            }
                            pfVar23 = pfVar30;
                            if (pfVar32 != pfVar24) {
                              lVar35 = (int64_t)pfVar30 - (int64_t)pfVar32;
                              pfVar20 = pfVar32 + 2;
                              do {
                                *pfVar23 = pfVar20[-2];
                                *(float *)(lVar35 + -4 + (int64_t)pfVar20) = pfVar20[-1];
                                uVar7 = *(uint64_t *)(pfVar20 + 2);
                                *(uint64_t *)((int64_t)pfVar20 + lVar35) = *(uint64_t *)pfVar20
                                ;
                                ((uint64_t *)((int64_t)pfVar20 + lVar35))[1] = uVar7;
                                uVar7 = *(uint64_t *)(pfVar20 + 6);
                                puVar1 = (uint64_t *)(lVar35 + 0x10 + (int64_t)pfVar20);
                                *puVar1 = *(uint64_t *)(pfVar20 + 4);
                                puVar1[1] = uVar7;
                                pfVar23 = pfVar23 + 10;
                                pfVar19 = pfVar20 + 8;
                                pfVar20 = pfVar20 + 10;
                              } while (pfVar19 != pfVar24);
                            }
                            *pfVar23 = fVar39;
                            pfVar23[1] = fVar44;
                            *(uint64_t *)(pfVar23 + 2) = uVar13;
                            *(uint64_t *)(pfVar23 + 4) = uVar11;
                            *(uint64_t *)(pfVar23 + 6) = uVar5;
                            *(uint64_t *)(pfVar23 + 8) = uVar6;
                            pfVar23 = pfVar23 + 10;
                            if (pfVar32 != (float *)0x0) {
                    // WARNING: Subroutine does not return
                              FUN_18064e900(pfVar32);
                            }
                            pfVar20 = pfVar30 + lVar26 * 10;
                            lVar26 = lStack_558;
                            lVar35 = lStack_548;
                            pfStack_4b8 = pfVar30;
                            pfStack_4b0 = pfVar23;
                            pfStack_4a8 = pfVar20;
                          }
                        }
                      }
                      lVar37 = lVar37 + 0x10;
                      lVar28 = lVar28 + -1;
                      pfVar32 = pfVar30;
                      pfVar24 = pfVar23;
                      fVar44 = fStack_448;
                    } while (lVar28 != 0);
                  }
                  if (pfVar30 != pfVar23) {
                    iVar9 = 0;
                    lVar26 = ((int64_t)pfVar23 - (int64_t)pfVar30) / 0x28;
                    for (lVar28 = lVar26; lVar28 != 0; lVar28 = lVar28 >> 1) {
                      iVar9 = iVar9 + 1;
                    }
                    FUN_1804c6370(pfVar30,pfVar23,(int64_t)(iVar9 + -1) * 2,0);
                    if (lVar26 < 0x1d) {
                      FUN_1804c62a0(pfVar30,pfVar23);
                    }
                    else {
                      pfVar20 = pfVar30 + 0x118;
                      FUN_1804c62a0(pfVar30,pfVar20);
                      if (pfVar20 != pfVar23) {
                        pfVar32 = pfVar30 + 0x11e;
                        do {
                          fStack_228 = *pfVar20;
                          fStack_224 = pfVar32[-5];
                          pfVar24 = pfVar32 + -4;
                          uStack_220 = *(uint64_t *)pfVar24;
                          uStack_218 = *(uint64_t *)(pfVar32 + -2);
                          uStack_210 = *(uint64_t *)pfVar32;
                          uStack_208 = *(uint64_t *)(pfVar32 + 2);
                          fVar42 = pfVar32[-0x10];
                          pfVar19 = pfVar20;
                          if (fVar42 < fStack_228) {
                            pfVar22 = pfVar32 + -0xe;
                            do {
                              *pfVar19 = fVar42;
                              uVar13 = *(uint64_t *)(pfVar22 + 6);
                              *(uint64_t *)(pfVar24 + 4) = *(uint64_t *)(pfVar22 + 4);
                              *(uint64_t *)(pfVar24 + 6) = uVar13;
                              uVar13 = *(uint64_t *)(pfVar22 + 2);
                              *(uint64_t *)pfVar24 = *(uint64_t *)pfVar22;
                              *(uint64_t *)(pfVar24 + 2) = uVar13;
                              pfVar24[-1] = pfVar22[-1];
                              pfVar19 = pfVar19 + -10;
                              pfVar24 = pfVar24 + -10;
                              fVar42 = pfVar22[-0xc];
                              pfVar22 = pfVar22 + -10;
                            } while (fVar42 < fStack_228);
                          }
                          *pfVar19 = fStack_228;
                          *(uint64_t *)(pfVar19 + 6) = uStack_210;
                          *(uint64_t *)(pfVar19 + 8) = uStack_208;
                          *(uint64_t *)(pfVar19 + 2) = uStack_220;
                          *(uint64_t *)(pfVar19 + 4) = uStack_218;
                          pfVar19[1] = fStack_224;
                          pfVar20 = pfVar20 + 10;
                          pfVar32 = pfVar32 + 10;
                        } while (pfVar20 != pfVar23);
                      }
                    }
                  }
                  fVar39 = fStack_3b0;
                  fVar42 = fStack_3b4;
                  iVar10 = (int)(((int64_t)pfVar23 - (int64_t)pfVar30) / 0x28);
                  iVar9 = 5;
                  if (iVar10 < 5) {
                    iVar9 = iVar10;
                  }
                  if (iVar9 == 0) {
                    if (pfVar30 != (float *)0x0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900(pfVar30);
                    }
                  }
                  else {
                    fVar40 = 0.0;
                    iVar10 = 0;
                    iVar33 = 0;
                    if (pfVar30 != pfVar23) {
                      uStack_40c = 0x7f7fffff;
                      uStack_3ec = 0x7f7fffff;
                      fVar41 = uStack_438._4_4_;
                      pfVar20 = pfVar30 + 7;
                      do {
                        if (iVar33 < iVar9) {
                          fVar40 = fVar40 + pfVar20[-6];
                          iVar10 = iVar10 + 1;
                        }
                        fStack_410 = pfVar20[1] + fVar39;
                        fStack_414 = fVar41 + *pfVar20 + fVar42;
                        fStack_418 = pfVar20[-1] + 10.0 + fVar43;
                        uVar4 = system_system_control_memory;
                        if (iVar33 < iVar9) {
                          uVar4 = system_system_control_memory;
                        }
                        fStack_3f0 = (fVar39 + pfVar20[-3]) - fStack_410;
                        fStack_3f4 = (fVar42 + fVar41 + pfVar20[-4]) - fStack_414;
                        fStack_3f8 = (pfVar20[-5] + 10.0 + fVar43) - fStack_418;
                        puStack_580 = (void *)CONCAT44(puStack_580._4_4_,0x461c4000);
                        dStack_588 = (double)((uint64_t)dStack_588 & 0xffffffffffffff00);
                        FUN_180633110(system_system_data_memory,&fStack_418,&fStack_3f8,uVar4);
                        iVar33 = iVar33 + 1;
                        pfVar32 = pfVar20 + 3;
                        pfVar20 = pfVar20 + 10;
                      } while (pfVar32 != pfVar23);
                    }
                    afStack_4c8[lStack_560] = fVar40 / (float)iVar10;
                    if (pfVar30 != (float *)0x0) {
                    // WARNING: Subroutine does not return
                      FUN_18064e900(pfVar30);
                    }
                  }
                  iStack_568 = iStack_568 + 1;
                  lStack_560 = lStack_560 + 1;
                  plVar12 = plStack_488;
                } while (iStack_568 < 3);
                puStack_4e8 = &system_data_buffer_ptr;
                uStack_4d0 = 0;
                puStack_4e0 = (void *)0x0;
                uStack_4d8 = 0;
                puStack_580 = &system_buffer_ptr;
                if (puStack_340 != (void *)0x0) {
                  puStack_580 = puStack_340;
                }
                dStack_588 = (double)afStack_4c8[2];
                System_DataHandler(&puStack_4e8,&unknown_var_1176_ptr,(double)afStack_4c8[0],
                              (double)afStack_4c8[1]);
                uVar13 = system_system_data_memory;
                uVar48 = system_system_control_memory;
                puVar25 = &system_buffer_ptr;
                if (puStack_4e0 != (void *)0x0) {
                  puVar25 = puStack_4e0;
                }
                fStack_428 = fVar44 + 10.0;
                fVar43 = uStack_438._4_4_;
                fStack_424 = uStack_438._4_4_;
                uStack_420 = 0x40400000;
                uStack_41c = 0x7f7fffff;
                uVar11 = FUN_180627910(&puStack_388,puVar25);
                puStack_580 = (void *)CONCAT44(puStack_580._4_4_,0x461c4000);
                dStack_588 = 0.0;
                FUN_180632d00(uVar13,&fStack_428,uVar11,uVar48);
                puStack_388 = &system_data_buffer_ptr;
                if (lStack_380 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                lStack_380 = 0;
                uStack_370 = 0;
                puStack_388 = &system_state_ptr;
                fStack_448 = fVar44 + 5.0;
                puStack_4e8 = &system_data_buffer_ptr;
                if (puStack_4e0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                puStack_4e0 = (void *)0x0;
                uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
                puStack_4e8 = &system_state_ptr;
                lVar28 = lStack_558;
                fVar45 = fStack_448;
                fVar46 = fStack_444;
                fVar47 = fStack_440;
                uVar48 = uStack_43c;
                if (plStack_488 != (int64_t *)0x0) {
                  (**(code **)(*plStack_488 + 0x38))();
                  lVar28 = lStack_558;
                  fVar45 = fStack_448;
                  fVar46 = fStack_444;
                  fVar47 = fStack_440;
                  uVar48 = uStack_43c;
                }
              }
              FUN_1804b4950(auStack_348);
              lStack_480 = lStack_480 + 1;
              lVar26 = lStack_468;
            } while (lStack_480 < (int64_t)pplStack_458);
          }
          FUN_18007f840(&lStack_368);
          plVar12 = plStack_470;
          if (plStack_478 != (int64_t *)0x0) {
            (**(code **)(*plStack_478 + 0x38))();
            plVar12 = plStack_470;
          }
        }
LAB_1804c5ea0:
        lVar26 = func_0x00018066bd70(lVar26);
        lStack_468 = lVar26;
      } while (lVar26 != 0x180c95e98);
    }
    if (plVar12 != (int64_t *)0x0) {
      (**(code **)(*plVar12 + 0x38))(plVar12);
    }
  }
LAB_1804c5ed4:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_e8 ^ (uint64_t)auStack_5a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






