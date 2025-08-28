#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part018_sub002_sub002.c - 1 个函数

// 函数: void FUN_1802e1bb0(int *param_1,int64_t param_2,float param_3)
void FUN_1802e1bb0(int *param_1,int64_t param_2,float param_3)

{
  uint64_t uVar1;
  void *puVar2;
  int32_t uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  float *pfVar13;
  void **ppuVar14;
  int iVar15;
  uint64_t uVar16;
  int64_t lVar17;
  void **ppuVar18;
  bool bVar19;
  float fVar20;
  double dVar21;
  int8_t auVar22 [16];
  float fVar23;
  double dVar24;
  int8_t auVar25 [16];
  double dVar26;
  int8_t auVar27 [16];
  float fVar28;
  int8_t auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  int8_t auStack_578 [32];
  void **ppuStack_558;
  float fStack_550;
  int32_t uStack_548;
  float fStack_540;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  int32_t uStack_52c;
  uint64_t uStack_528;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  int32_t uStack_50c;
  uint64_t uStack_508;
  uint64_t uStack_500;
  uint64_t uStack_4f8;
  uint64_t uStack_4f0;
  uint64_t uStack_4e8;
  float fStack_4e0;
  int32_t uStack_4dc;
  float fStack_4d8;
  uint64_t uStack_4c8;
  uint64_t uStack_4c0;
  float fStack_4b8;
  void *puStack_4a8;
  uint64_t uStack_4a0;
  uint uStack_498;
  int16_t uStack_494;
  int16_t uStack_492;
  int32_t uStack_490;
  int32_t uStack_48c;
  uint64_t uStack_488;
  uint64_t uStack_480;
  uint64_t uStack_478;
  uint64_t uStack_470;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  int32_t uStack_45c;
  float fStack_458;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  uint64_t uStack_418;
  uint64_t uStack_410;
  uint64_t uStack_408;
  uint64_t uStack_400;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  int32_t uStack_3ec;
  uint64_t uStack_3e8;
  uint64_t uStack_3e0;
  uint64_t uStack_3d8;
  uint64_t uStack_3d0;
  uint64_t uStack_3c8;
  uint64_t uStack_3b8;
  uint64_t uStack_3b0;
  uint64_t uStack_3a8;
  uint64_t uStack_3a0;
  uint64_t uStack_398;
  uint64_t uStack_390;
  uint64_t uStack_388;
  uint64_t uStack_380;
  int iStack_378;
  void *apuStack_368 [20];
  uint64_t auStack_2c8 [35];
  int32_t uStack_1b0;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  float afStack_168 [6];
  float fStack_150;
  int32_t uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t uStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t uStack_ec;
  uint64_t uStack_e8;
  
  uStack_3d8 = 0xfffffffffffffffe;
  uStack_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_578;
  uVar16 = (uint64_t)(int)param_3;
  iVar15 = 0;
  fStack_4b8 = param_3;
  if (*(char *)(system_main_module_state + 0xfc) != '\0') {
    puVar9 = (uint64_t *)(param_2 + 0x30);
    uStack_3d0 = *(uint64_t *)(param_2 + 0x120);
    uStack_3c8 = *(uint64_t *)(param_2 + 0x128);
    func_0x000180094ae0(puVar9,&fStack_438);
    fVar20 = fStack_430 * fStack_430 + fStack_434 * fStack_434 + fStack_438 * fStack_438;
    auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
    fVar20 = auVar22._0_4_ * 0.5 * ((float)system_data_01f0 - fVar20 * auVar22._0_4_ * auVar22._0_4_);
    fStack_438 = fStack_438 * fVar20;
    fStack_434 = fStack_434 * fVar20;
    fStack_430 = fStack_430 * fVar20;
    cVar4 = CoreSystem_OperationHandler0(*(int64_t *)(param_1 + 10) + 0x4d8,&memory_allocator_3680_ptr,1);
    iVar5 = param_1[8];
    if ((char)param_1[0x2c] != '\0') {
      iVar5 = iVar5 * 2;
    }
    fVar20 = (float)iVar5;
    fStack_458 = fVar20;
    if ((*(int64_t *)(param_1 + 6) == 0) ||
       (*(char *)((int64_t)param_1 + 0xb1) != (char)param_1[0x2c])) {
      func_0x0001800ed8d0(&puStack_4a8);
      puStack_4a8 = (void *)CONCAT44((int)(int64_t)fVar20,(int)(int64_t)fVar20);
      uStack_492 = 0x101;
      uStack_4a0 = CONCAT44(0x1a,(int32_t)uStack_4a0);
      uStack_498 = 0x3f800000;
      uStack_490 = *(int32_t *)(param_2 + 0x1bd4);
      *(char *)((int64_t)param_1 + 0xb1) = (char)param_1[0x2c];
      if ((char)param_1[0x2c] == '\0') {
        CoreMemoryPoolValidator(&uStack_188,&processed_var_9960_ptr);
        FUN_180628320(&uStack_188,param_2 + 0x3520);
        uStack_4a0 = CONCAT44(uStack_4a0._4_4_,4);
        FUN_180049b30(apuStack_368,&uStack_188);
        puVar7 = (uint64_t *)FUN_1800b1d80(system_resource_state,&uStack_528,apuStack_368,&puStack_4a8);
        uStack_4e8 = *puVar7;
        *puVar7 = 0;
        func_0x0001800865f0(&uStack_4e8,param_1 + 6);
        SystemTimer(&uStack_4e8);
        SystemTimer(&uStack_528);
      }
      else {
        CoreMemoryPoolValidator(&uStack_188,&processed_var_9976_ptr);
        FUN_180628320(&uStack_188,param_2 + 0x3520);
        FUN_180049b30(apuStack_368,&uStack_188);
        puVar7 = (uint64_t *)FUN_1800b1d80(system_resource_state,&uStack_528,apuStack_368,&puStack_4a8);
        uStack_4e8 = *puVar7;
        *puVar7 = 0;
        func_0x0001800865f0(&uStack_4e8,param_1 + 6);
        SystemTimer(&uStack_4e8);
        SystemTimer(&uStack_528);
      }
      apuStack_368[0] = &system_state_ptr;
      FUN_180627b90(&uStack_188);
    }
    if (1 < *param_1) {
      pfVar13 = (float *)&uStack_188;
      if (cVar4 == '\0') {
        fVar20 = *(float *)(param_2 + 0x144);
        auVar22._0_4_ = (float)param_1[0x14];
        auVar29._0_4_ = *(float *)(system_main_module_state + 0x388);
        dVar26 = (double)fVar20;
        auVar27._0_4_ = auVar29._0_4_ * (auVar22._0_4_ * 150.0 + fVar20);
        do {
          dVar24 = (double)iVar15 * 0.25 * ((double)auVar27._0_4_ - dVar26) + dVar26;
          dVar21 = (double)pow((double)(auVar27._0_4_ / fVar20));
          *pfVar13 = (float)((dVar21 * dVar26 - dVar24) * 0.89 + dVar24);
          iVar15 = iVar15 + 1;
          pfVar13 = pfVar13 + 1;
        } while (iVar15 < 5);
        auVar22._0_4_ = auVar22._0_4_ - 1.0;
        if ((auVar22._0_4_ <= -0.01) || (0.01 <= auVar22._0_4_)) {
          fVar20 = uStack_188._4_4_;
          auVar22._0_4_ = (float)uStack_180;
          auVar29._0_4_ = uStack_180._4_4_;
        }
        else {
          uStack_188 = (void *)CONCAT44(auVar29._0_4_ * 4.0,(float)uStack_188);
          uStack_180 = CONCAT44(auVar29._0_4_ * 30.0,auVar29._0_4_ * 10.0);
          fVar20 = auVar29._0_4_ * 4.0;
          auVar22._0_4_ = auVar29._0_4_ * 10.0;
          auVar29._0_4_ = auVar29._0_4_ * 30.0;
        }
        *(float *)(param_2 + 0x9a10) = fVar20;
        *(float *)(param_2 + 0x9a14) = auVar22._0_4_;
        *(float *)(param_2 + 0x9a18) = auVar29._0_4_;
        *(int32_t *)(param_2 + 0x9a1c) = (int32_t)uStack_178;
      }
      else {
        dVar26 = (double)*(float *)(param_2 + 0x144);
        fVar20 = *(float *)(system_main_module_state + 0x388);
        do {
          dVar24 = (double)iVar15 * 0.25 * ((double)fVar20 * 850.0 - dVar26) + dVar26;
          dVar21 = (double)pow();
          *pfVar13 = (float)((dVar21 * dVar26 - dVar24) * 0.9 + dVar24);
          iVar15 = iVar15 + 1;
          pfVar13 = pfVar13 + 1;
        } while (iVar15 < 5);
        uStack_188 = (void *)CONCAT44(0x42480000,(float)uStack_188);
        uStack_180 = 0x437a000042c80000;
      }
      lVar11 = *(int64_t *)(param_1 + 10);
      puVar7 = (uint64_t *)(lVar11 + 0x38a0 + uVar16 * 0x140);
      fStack_4d8 = 0.0;
      if ((float)((char)param_1[0x2c] == '\0') == 0.0) {
        FUN_1801983b0(lVar11,&uStack_418);
        uStack_3e8 = 0;
        uStack_3e0 = 0x7f7fffff00000000;
        *(int32_t *)(param_2 + 0x9a10) = 0x453b8000;
        *(int32_t *)(param_2 + 0x9a14) = 0x4b189680;
        *(int32_t *)(param_2 + 0x9a18) = 0x4b189680;
        *(int32_t *)(param_2 + 0x9a1c) = 0x4b189680;
        uStack_478 = 0x461c4000461c4000;
        uStack_470 = 0x7f7fffff461c4000;
        uStack_488 = 0xc61c4000c61c4000;
        uStack_480 = 0x7f7fffffc61c4000;
        fVar20 = (float)param_1[0x31];
        if (0.0 <= fVar20) {
          fStack_538 = -fVar20;
          afStack_168[2] = (float)param_1[0x2f] + fStack_538;
          afStack_168[1] = (float)param_1[0x2e] + fStack_538;
          fStack_538 = (float)param_1[0x2d] + fStack_538;
          afStack_168[3] = 3.4028235e+38;
          afStack_168[4] = fVar20 + (float)param_1[0x2d];
          uStack_14c = 0x7f7fffff;
          fStack_530 = fVar20 + (float)param_1[0x2f];
          uStack_13c = 0x7f7fffff;
          uStack_12c = 0x7f7fffff;
          fStack_534 = fVar20 + (float)param_1[0x2e];
          uStack_11c = 0x7f7fffff;
          uStack_10c = 0x7f7fffff;
          uStack_fc = 0x7f7fffff;
          uStack_52c = 0x7f7fffff;
          uStack_ec = 0x7f7fffff;
          afStack_168[0] = fStack_538;
          afStack_168[5] = afStack_168[1];
          fStack_150 = afStack_168[2];
          fStack_148 = afStack_168[4];
          fStack_144 = afStack_168[1];
          fStack_140 = fStack_530;
          fStack_138 = fStack_538;
          fStack_134 = afStack_168[1];
          fStack_130 = fStack_530;
          fStack_128 = fStack_538;
          fStack_124 = fStack_534;
          fStack_120 = afStack_168[2];
          fStack_118 = afStack_168[4];
          fStack_114 = fStack_534;
          fStack_110 = afStack_168[2];
          fStack_108 = afStack_168[4];
          fStack_104 = fStack_534;
          fStack_100 = fStack_530;
          fStack_f8 = fStack_538;
          fStack_f4 = fStack_534;
          fStack_f0 = fStack_530;
        }
        else {
          uStack_4f8 = 0x461c4000461c4000;
          uStack_4f0 = 0x7f7fffff461c4000;
          uStack_4c8 = 0xc61c4000c61c4000;
          uStack_4c0 = 0x7f7fffffc61c4000;
          uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0xbf800000);
          uStack_528 = 0;
          ppuStack_558 = (void **)&uStack_4e8;
          FUN_1802874c0(puVar9,&uStack_508,&fStack_518,&uStack_528);
          puStack_4a8 = &processed_var_6432_ptr;
          iVar15 = 0;
          uStack_4a0 = 2;
          uStack_498 = uStack_498 & 0xffffff00;
          iStack_378 = 0;
          fStack_4e0 = fStack_510 - (float)uStack_500;
          uStack_4e8 = CONCAT44(fStack_514 - uStack_508._4_4_,fStack_518 - (float)uStack_508);
          uStack_4dc = 0x7f7fffff;
          fStack_550 = 0.001;
          ppuStack_558 = &puStack_4a8;
          FUN_1801ab040(*(uint64_t *)(param_1 + 10),&uStack_508,&uStack_4e8,&uStack_3b8);
          bVar19 = iStack_378 == 0;
          if (bVar19) {
            do {
              if (4 < iVar15) break;
              uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0xbf800000);
              uStack_528 = CONCAT44((float)iVar15 * 0.1,(float)iVar15 * 0.1);
              ppuStack_558 = (void **)&uStack_4e8;
              FUN_1802874c0(puVar9,&uStack_508,&fStack_518,&uStack_528);
              fStack_530 = fStack_510 - (float)uStack_500;
              fStack_534 = fStack_514 - uStack_508._4_4_;
              fStack_538 = fStack_518 - (float)uStack_508;
              uStack_52c = 0x7f7fffff;
              fStack_550 = 0.001;
              ppuStack_558 = &puStack_4a8;
              FUN_1801ab040(*(uint64_t *)(param_1 + 10),&uStack_508,&fStack_538,&uStack_3b8);
              iVar15 = iVar15 + 1;
            } while (iStack_378 == 0);
            bVar19 = iStack_378 == 0;
          }
          if (!bVar19 && -1 < iStack_378) {
            puVar10 = (uint64_t *)
                      func_0x000180085d60(&fStack_468,(int64_t)&uStack_3a0 + 4,&uStack_4f8);
            uStack_4f8 = *puVar10;
            uStack_4f0 = puVar10[1];
            puVar10 = (uint64_t *)
                      func_0x000180085da0(&fStack_468,(int64_t)&uStack_3a0 + 4,&uStack_4c8);
            uStack_4c8 = *puVar10;
            uStack_4c0 = puVar10[1];
          }
          iVar15 = 0;
          iStack_378 = 0;
          uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0xbf800000);
          uStack_528 = 0x3f80000000000000;
          ppuStack_558 = (void **)&uStack_4e8;
          FUN_1802874c0(puVar9,&uStack_508,&fStack_518,&uStack_528);
          puStack_4a8 = &processed_var_6432_ptr;
          uStack_4a0 = 2;
          uStack_498 = uStack_498 & 0xffffff00;
          iStack_378 = 0;
          fStack_530 = fStack_510 - (float)uStack_500;
          fStack_534 = fStack_514 - uStack_508._4_4_;
          fStack_538 = fStack_518 - (float)uStack_508;
          uStack_52c = 0x7f7fffff;
          fStack_550 = 0.001;
          ppuStack_558 = &puStack_4a8;
          FUN_1801ab040(*(uint64_t *)(param_1 + 10),&uStack_508,&fStack_538,&uStack_3b8);
          bVar19 = iStack_378 == 0;
          if (bVar19) {
            do {
              if (4 < iVar15) break;
              uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0xbf800000);
              uStack_528 = CONCAT44(1.0 - (float)iVar15 * 0.1,(float)iVar15 * 0.1);
              ppuStack_558 = (void **)&uStack_4e8;
              FUN_1802874c0(puVar9,&uStack_508,&fStack_518,&uStack_528);
              fStack_530 = fStack_510 - (float)uStack_500;
              fStack_534 = fStack_514 - uStack_508._4_4_;
              fStack_538 = fStack_518 - (float)uStack_508;
              uStack_52c = 0x7f7fffff;
              fStack_550 = 0.001;
              ppuStack_558 = &puStack_4a8;
              FUN_1801ab040(*(uint64_t *)(param_1 + 10),&uStack_508,&fStack_538,&uStack_3b8);
              iVar15 = iVar15 + 1;
            } while (iStack_378 == 0);
            bVar19 = iStack_378 == 0;
          }
          if (!bVar19 && -1 < iStack_378) {
            puVar10 = (uint64_t *)
                      func_0x000180085d60(&fStack_468,(int64_t)&uStack_3a0 + 4,&uStack_4f8);
            uStack_4f8 = *puVar10;
            uStack_4f0 = puVar10[1];
            puVar10 = (uint64_t *)
                      func_0x000180085da0(&fStack_468,(int64_t)&uStack_3a0 + 4,&uStack_4c8);
            uStack_4c8 = *puVar10;
            uStack_4c0 = puVar10[1];
          }
          iVar15 = 0;
          iStack_378 = 0;
          uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0xbf800000);
          uStack_528 = 0x3f8000003f800000;
          ppuStack_558 = (void **)&uStack_4e8;
          FUN_1802874c0(puVar9,&uStack_508,&fStack_518,&uStack_528);
          puStack_4a8 = &processed_var_6432_ptr;
          uStack_4a0 = 2;
          uStack_498 = uStack_498 & 0xffffff00;
          iStack_378 = 0;
          fStack_530 = fStack_510 - (float)uStack_500;
          fStack_534 = fStack_514 - uStack_508._4_4_;
          fStack_538 = fStack_518 - (float)uStack_508;
          uStack_52c = 0x7f7fffff;
          fStack_550 = 0.001;
          ppuStack_558 = &puStack_4a8;
          FUN_1801ab040(*(uint64_t *)(param_1 + 10),&uStack_508,&fStack_538,&uStack_3b8);
          bVar19 = iStack_378 == 0;
          if (bVar19) {
            do {
              if (4 < iVar15) break;
              uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0xbf800000);
              fVar20 = 1.0 - (float)iVar15 * 0.1;
              uStack_528 = CONCAT44(fVar20,fVar20);
              ppuStack_558 = (void **)&uStack_4e8;
              FUN_1802874c0(puVar9,&uStack_508,&fStack_518,&uStack_528);
              fStack_530 = fStack_510 - (float)uStack_500;
              fStack_534 = fStack_514 - uStack_508._4_4_;
              fStack_538 = fStack_518 - (float)uStack_508;
              uStack_52c = 0x7f7fffff;
              fStack_550 = 0.001;
              ppuStack_558 = &puStack_4a8;
              FUN_1801ab040(*(uint64_t *)(param_1 + 10),&uStack_508,&fStack_538,&uStack_3b8);
              iVar15 = iVar15 + 1;
            } while (iStack_378 == 0);
            bVar19 = iStack_378 == 0;
          }
          if (!bVar19 && -1 < iStack_378) {
            puVar10 = (uint64_t *)
                      func_0x000180085d60(&fStack_468,(int64_t)&uStack_3a0 + 4,&uStack_4f8);
            uStack_4f8 = *puVar10;
            uStack_4f0 = puVar10[1];
            puVar10 = (uint64_t *)
                      func_0x000180085da0(&fStack_468,(int64_t)&uStack_3a0 + 4,&uStack_4c8);
            uStack_4c8 = *puVar10;
            uStack_4c0 = puVar10[1];
          }
          iVar15 = 0;
          iStack_378 = 0;
          uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0xbf800000);
          uStack_528 = 0x3f800000;
          ppuStack_558 = (void **)&uStack_4e8;
          FUN_1802874c0(puVar9,&uStack_508,&fStack_518,&uStack_528);
          puStack_4a8 = &processed_var_6432_ptr;
          uStack_4a0 = 2;
          uStack_498 = uStack_498 & 0xffffff00;
          iStack_378 = 0;
          fStack_530 = fStack_510 - (float)uStack_500;
          fStack_534 = fStack_514 - uStack_508._4_4_;
          fStack_538 = fStack_518 - (float)uStack_508;
          uStack_52c = 0x7f7fffff;
          fStack_550 = 0.001;
          ppuStack_558 = &puStack_4a8;
          FUN_1801ab040(*(uint64_t *)(param_1 + 10),&uStack_508,&fStack_538,&uStack_3b8);
          bVar19 = iStack_378 == 0;
          if (bVar19) {
            do {
              if (4 < iVar15) break;
              uStack_4e8 = CONCAT44(uStack_4e8._4_4_,0xbf800000);
              uStack_528 = CONCAT44((float)iVar15 * 0.1,1.0 - (float)iVar15 * 0.1);
              ppuStack_558 = (void **)&uStack_4e8;
              FUN_1802874c0(puVar9,&uStack_508,&fStack_518,&uStack_528);
              fStack_530 = fStack_510 - (float)uStack_500;
              fStack_534 = fStack_514 - uStack_508._4_4_;
              fStack_538 = fStack_518 - (float)uStack_508;
              uStack_52c = 0x7f7fffff;
              fStack_550 = 0.001;
              ppuStack_558 = &puStack_4a8;
              FUN_1801ab040(*(uint64_t *)(param_1 + 10),&uStack_508,&fStack_538,&uStack_3b8);
              iVar15 = iVar15 + 1;
            } while (iStack_378 == 0);
            bVar19 = iStack_378 == 0;
          }
          if (!bVar19 && -1 < iStack_378) {
            puVar9 = (uint64_t *)
                     func_0x000180085d60(&fStack_468,(int64_t)&uStack_3a0 + 4,&uStack_4f8);
            uStack_4f8 = *puVar9;
            uStack_4f0 = puVar9[1];
            puVar9 = (uint64_t *)
                     func_0x000180085da0(&fStack_468,(int64_t)&uStack_3a0 + 4,&uStack_4c8);
            uStack_4c8 = *puVar9;
            uStack_4c0 = puVar9[1];
          }
          iStack_378 = 0;
          fVar20 = ((float)uStack_4c0 - (float)uStack_4f0) * 0.15;
          fStack_514 = (uStack_4c8._4_4_ - uStack_4f8._4_4_) * 0.15;
          fStack_518 = ((float)uStack_4c8 - (float)uStack_4f8) * 0.15;
          fStack_530 = fVar20 + (float)uStack_4c0 + 50.0;
          fStack_538 = fStack_518 + (float)uStack_4c8;
          fStack_534 = fStack_514 + uStack_4c8._4_4_;
          uStack_52c = 0x7f7fffff;
          fStack_510 = ((float)uStack_4f0 - fVar20) - 50.0;
          fStack_518 = (float)uStack_4f8 - fStack_518;
          fStack_514 = uStack_4f8._4_4_ - fStack_514;
          uStack_50c = 0x7f7fffff;
          func_0x000180287a90(afStack_168,&fStack_518,&fStack_538);
        }
        pfVar13 = afStack_168;
        lVar11 = 8;
        do {
          FUN_1801c1690(&uStack_418,&fStack_538,pfVar13);
          puVar9 = (uint64_t *)func_0x000180085d60(&fStack_468,&uStack_478,&fStack_538);
          uStack_478 = *puVar9;
          uStack_470 = puVar9[1];
          puVar9 = (uint64_t *)func_0x000180085da0(&fStack_518,&uStack_488,&fStack_538);
          uVar1 = *puVar9;
          uStack_480 = puVar9[1];
          pfVar13 = pfVar13 + 4;
          lVar11 = lVar11 + -1;
          uStack_488 = uVar1;
        } while (lVar11 != 0);
        fStack_530 = (float)uStack_470 + (float)uStack_480;
        uStack_488._4_4_ = (float)((uint64_t)uVar1 >> 0x20);
        fStack_534 = uStack_478._4_4_ + uStack_488._4_4_;
        uStack_488._0_4_ = (float)uVar1;
        fStack_538 = (float)uStack_478 + (float)uStack_488;
        uStack_52c = 0x7f7fffff;
        func_0x000180085940(&fStack_450);
        func_0x0001800f8f10(&uStack_418,&uStack_188,&fStack_450);
        fStack_530 = (float)uStack_470 - fStack_448;
        fStack_534 = uStack_478._4_4_ - fStack_44c;
        fStack_538 = (float)uStack_478 - fStack_450;
        uStack_4c8 = CONCAT44(fStack_534,fStack_538);
        uStack_4c0 = CONCAT44(0x7f7fffff,fStack_530);
        fStack_460 = (float)uStack_480 - fStack_448;
        fStack_550 = uStack_488._4_4_ - fStack_44c;
        fStack_468 = (float)uStack_488 - fStack_450;
        uStack_52c = 0x7f7fffff;
        uStack_45c = 0x7f7fffff;
        fStack_540 = (fStack_460 - fStack_530) + *(float *)(system_main_module_state + 0x388) * 200.0;
        uVar3 = uStack_180._4_4_;
        fVar20 = fStack_540 * 0.5 + 20.0;
        auVar29._0_4_ = fStack_3f8 * fVar20 + (float)uStack_188;
        auVar22._0_4_ = uStack_188._4_4_ + fStack_3f4 * fVar20;
        fVar20 = (float)uStack_180 + fStack_3f0 * fVar20;
        fStack_540 = fStack_540 + 20.0;
        uStack_548 = 0x41a00000;
        ppuStack_558 = (void **)CONCAT44(ppuStack_558._4_4_,fStack_534);
        fStack_464 = fStack_550;
        func_0x000180286ef0(puVar7,0,fStack_538,fStack_468);
        puVar7[0x18] = uStack_418;
        puVar7[0x19] = uStack_410;
        puVar7[0x1a] = uStack_408;
        puVar7[0x1b] = uStack_400;
        *(float *)(puVar7 + 0x1c) = fStack_3f8;
        *(float *)((int64_t)puVar7 + 0xe4) = fStack_3f4;
        *(float *)(puVar7 + 0x1d) = fStack_3f0;
        *(int32_t *)((int64_t)puVar7 + 0xec) = uStack_3ec;
        *(float *)(puVar7 + 0x1e) = auVar29._0_4_;
        *(float *)((int64_t)puVar7 + 0xf4) = auVar22._0_4_;
        *(float *)(puVar7 + 0x1f) = fVar20;
        *(int32_t *)((int64_t)puVar7 + 0xfc) = uVar3;
      }
      else {
        FUN_1801983b0(lVar11,&uStack_418);
        uStack_3e8 = 0;
        uStack_3e0 = 0x7f7fffff00000000;
        uStack_478 = 0x7f7fffff7f7fffff;
        uStack_470 = 0x7f7fffff7f7fffff;
        uStack_508 = 0xff7fffffff7fffff;
        uStack_500 = 0x7f7fffffff7fffff;
        fVar20 = *(float *)(system_main_module_state + 0x388) * 20000.0;
        uStack_3b8 = uStack_418;
        uStack_3b0 = uStack_410;
        uStack_3a8 = uStack_408;
        uStack_3a0 = uStack_400;
        uStack_398 = CONCAT44(fStack_3f4,fStack_3f8);
        uStack_390 = CONCAT44(uStack_3ec,fStack_3f0);
        uStack_388 = 0;
        uStack_380 = 0x7f7fffff00000000;
        lVar11 = 2;
        puVar10 = auStack_2c8;
        do {
          puVar12 = puVar9;
          puVar8 = puVar10;
          uVar1 = puVar12[1];
          *puVar8 = *puVar12;
          puVar8[1] = uVar1;
          uVar1 = puVar12[3];
          puVar8[2] = puVar12[2];
          puVar8[3] = uVar1;
          uVar1 = puVar12[5];
          puVar8[4] = puVar12[4];
          puVar8[5] = uVar1;
          uVar1 = puVar12[7];
          puVar8[6] = puVar12[6];
          puVar8[7] = uVar1;
          uVar1 = puVar12[9];
          puVar8[8] = puVar12[8];
          puVar8[9] = uVar1;
          uVar1 = puVar12[0xb];
          puVar8[10] = puVar12[10];
          puVar8[0xb] = uVar1;
          uVar1 = puVar12[0xd];
          puVar8[0xc] = puVar12[0xc];
          puVar8[0xd] = uVar1;
          uVar1 = puVar12[0xf];
          puVar8[0xe] = puVar12[0xe];
          puVar8[0xf] = uVar1;
          lVar11 = lVar11 + -1;
          puVar10 = puVar8 + 0x10;
          puVar9 = puVar12 + 0x10;
        } while (lVar11 != 0);
        uVar1 = puVar12[0x11];
        puVar8[0x10] = puVar12[0x10];
        puVar8[0x11] = uVar1;
        uVar1 = puVar12[0x13];
        puVar8[0x12] = puVar12[0x12];
        puVar8[0x13] = uVar1;
        uVar1 = puVar12[0x15];
        puVar8[0x14] = puVar12[0x14];
        puVar8[0x15] = uVar1;
        uVar1 = puVar12[0x17];
        puVar8[0x16] = puVar12[0x16];
        puVar8[0x17] = uVar1;
        FUN_1802879b0(auStack_2c8,&puStack_4a8,*(int32_t *)((int64_t)&uStack_188 + uVar16 * 4));
        uStack_1b0 = *(int32_t *)((int64_t)&uStack_188 + uVar16 * 4 + 4);
        FUN_1802864f0(auStack_2c8);
        uStack_188 = puStack_4a8;
        uStack_180 = uStack_4a0;
        uStack_178 = CONCAT26(uStack_492,CONCAT24(uStack_494,uStack_498));
        uStack_170 = CONCAT44(uStack_48c,uStack_490);
        FUN_18063c810(auStack_2c8,afStack_168,&uStack_188);
        pfVar13 = afStack_168;
        lVar11 = 8;
        lVar17 = 8;
        do {
          puVar9 = (uint64_t *)func_0x000180085d60(&uStack_188,&uStack_478,pfVar13);
          uStack_478 = *puVar9;
          uStack_470 = puVar9[1];
          puVar9 = (uint64_t *)func_0x000180085da0(&fStack_468,&uStack_508,pfVar13);
          uVar1 = *puVar9;
          uStack_500 = puVar9[1];
          pfVar13 = pfVar13 + 4;
          lVar17 = lVar17 + -1;
          uStack_508 = uVar1;
        } while (lVar17 != 0);
        uStack_508._4_4_ = (float)((uint64_t)uVar1 >> 0x20);
        uStack_508._0_4_ = (float)uVar1;
        uStack_4c8 = CONCAT44(uStack_478._4_4_ + uStack_508._4_4_,
                              (float)uStack_478 + (float)uStack_508);
        uStack_4c0 = CONCAT44(0x7f7fffff,(float)uStack_470 + (float)uStack_500);
        func_0x000180085940(&uStack_4f8);
        auVar22._0_4_ = fVar20 * 0.5 + 20.0;
        uStack_388 = CONCAT44((float)((uint64_t)uStack_4f8 >> 0x20) +
                              auVar22._0_4_ * uStack_398._4_4_,
                              auVar22._0_4_ * (float)uStack_398 + (float)uStack_4f8);
        uStack_380 = CONCAT44(uStack_4f0._4_4_,(float)uStack_4f0 + auVar22._0_4_ * (float)uStack_390
                             );
        auVar22._0_4_ = 1.1754944e-38;
        pfVar13 = afStack_168 + 1;
        lVar17 = 8;
        while( true ) {
          uStack_4c8 = CONCAT44(*pfVar13 - uStack_4f8._4_4_,pfVar13[-1] - (float)uStack_4f8);
          uStack_4c0 = CONCAT44(0x7f7fffff,pfVar13[1] - (float)uStack_4f0);
          auVar29._0_4_ = (float)func_0x000180084f70(&uStack_4c8);
          if (auVar22._0_4_ <= auVar29._0_4_) {
            auVar22._0_4_ = auVar29._0_4_;
          }
          pfVar13 = pfVar13 + 4;
          lVar17 = lVar17 + -1;
          if (lVar17 == 0) break;
        }
        FUN_1801c1690(&uStack_3b8,&fStack_450,&uStack_4f8);
        uStack_488 = CONCAT44(auVar22._0_4_ + fStack_44c,auVar22._0_4_ + fStack_450);
        uStack_480 = CONCAT44(0x7f7fffff,auVar22._0_4_ + fStack_448);
        fStack_510 = fStack_448 - auVar22._0_4_;
        fStack_514 = fStack_44c - auVar22._0_4_;
        fStack_518 = fStack_450 - auVar22._0_4_;
        uStack_50c = 0x7f7fffff;
        func_0x000180287a90(apuStack_368,&fStack_518,&uStack_488);
        ppuVar18 = apuStack_368;
        ppuVar14 = apuStack_368;
        do {
          puVar9 = (uint64_t *)func_0x0001800f8f10(&uStack_3b8,&uStack_188,ppuVar14);
          puVar2 = (void *)puVar9[1];
          *ppuVar18 = (void *)*puVar9;
          ppuVar18[1] = puVar2;
          ppuVar14 = ppuVar14 + 2;
          ppuVar18 = ppuVar18 + 2;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        uVar6 = FUN_1801c1690(&uStack_3b8,&fStack_538,&uStack_388);
        auVar22._0_4_ = fStack_518 * 0.25;
        iVar15 = (int)auVar22._0_4_;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != auVar22._0_4_)) {
          auVar22._4_4_ = auVar22._0_4_;
          auVar22._8_8_ = 0;
          uVar6 = movmskps(uVar6,auVar22);
          uVar6 = uVar6 & 1;
          auVar22._0_4_ = (float)(int)(iVar15 - uVar6);
        }
        fStack_518 = auVar22._0_4_ * 4.0;
        auVar29._0_4_ = fStack_514 * 0.25;
        iVar15 = (int)auVar29._0_4_;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != auVar29._0_4_)) {
          auVar29._4_4_ = auVar29._0_4_;
          auVar29._8_8_ = 0;
          uVar6 = movmskps(uVar6,auVar29);
          uVar6 = uVar6 & 1;
          auVar29._0_4_ = (float)(int)(iVar15 - uVar6);
        }
        fStack_514 = auVar29._0_4_ * 4.0;
        auVar27._0_4_ = (float)uStack_488 * 0.25;
        iVar15 = (int)auVar27._0_4_;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != auVar27._0_4_)) {
          auVar27._4_4_ = auVar27._0_4_;
          auVar27._8_8_ = 0;
          uVar6 = movmskps(uVar6,auVar27);
          uVar6 = uVar6 & 1 ^ 1;
          auVar27._0_4_ = (float)(int)(iVar15 + uVar6);
        }
        auVar25._0_4_ = uStack_488._4_4_ * 0.25;
        iVar15 = (int)auVar25._0_4_;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != auVar25._0_4_)) {
          auVar25._4_4_ = auVar25._0_4_;
          auVar25._8_8_ = 0;
          uVar6 = movmskps(uVar6,auVar25);
          auVar25._0_4_ = (float)(int)(iVar15 + (uVar6 & 1 ^ 1));
        }
        uStack_488 = CONCAT44(auVar25._0_4_ * 4.0,auVar27._0_4_ * 4.0);
        fVar28 = fStack_514 - fStack_534;
        fVar30 = fStack_518 - fStack_538;
        uStack_4c8 = CONCAT44(fVar28,fVar30);
        uStack_4c0 = CONCAT44(0x7f7fffff,fStack_510 - fStack_530);
        fStack_460 = (float)uStack_480 - fStack_530;
        auVar22._0_4_ = auVar25._0_4_ * 4.0 - fStack_534;
        auVar29._0_4_ = auVar27._0_4_ * 4.0 - fStack_538;
        uStack_45c = 0x7f7fffff;
        uStack_4f8 = CONCAT44(auVar22._0_4_,auVar29._0_4_);
        uStack_4f0 = CONCAT44(0x7f7fffff,fStack_460);
        *(int8_t *)(puVar7 + 0x20) = 0;
        *(int32_t *)((int64_t)puVar7 + 0x114) = 0x41a00000;
        *(float *)(puVar7 + 0x23) = fVar20 + 20.0;
        *(float *)((int64_t)puVar7 + 0x104) = fVar30;
        *(float *)(puVar7 + 0x21) = auVar29._0_4_;
        *(float *)(puVar7 + 0x22) = fVar28;
        *(float *)((int64_t)puVar7 + 0x10c) = auVar22._0_4_;
        fStack_468 = auVar29._0_4_;
        fStack_464 = auVar22._0_4_;
        FUN_1802864f0(puVar7);
        auVar22._0_4_ = auVar22._0_4_ - fVar28;
        fStack_4d8 = SQRT((auVar29._0_4_ - fVar30) * (auVar29._0_4_ - fVar30) +
                          auVar22._0_4_ * auVar22._0_4_) * (0.7092199 / fStack_458);
        uVar16 = (uint64_t)(uint)fStack_4b8;
        if (fStack_4b8 == 0.0) {
          fStack_4d8 = 0.0;
        }
        else if (fStack_4b8 == 1.4013e-45) {
          fStack_4d8 = fStack_4d8 * 2.5;
        }
        else if (fStack_4b8 == 2.8026e-45) {
          fStack_4d8 = fStack_4d8 * 6.0;
        }
        else if (fStack_4b8 == 4.2039e-45) {
          fStack_4d8 = fStack_4d8 * 24.720001;
        }
        uStack_528 = CONCAT44(uStack_528._4_4_,
                              auVar22._0_4_ *
                              (1.0 / (float)*(ushort *)(*(int64_t *)(param_1 + 6) + 0x32e)));
        fVar20 = uStack_3b8._4_4_;
        auVar22._0_4_ = (float)uStack_3b0;
        fStack_4b8 = uStack_3b8._4_4_ * uStack_388._4_4_ + (float)uStack_3b8 * (float)uStack_388 +
                     (float)uStack_3b0 * (float)uStack_380;
        auVar27._0_4_ = uStack_3a8._4_4_;
        fVar32 = uStack_3a8._4_4_ * uStack_388._4_4_;
        auVar29._0_4_ = (float)uStack_3a8;
        fVar28 = (float)uStack_3a8 * (float)uStack_388;
        auVar25._0_4_ = (float)uStack_3a0;
        fVar23 = (float)uStack_3a0 * (float)uStack_380;
        fVar31 = (float)uStack_388 * (float)uStack_398 + uStack_388._4_4_ * uStack_398._4_4_ +
                 (float)uStack_380 * (float)uStack_390;
        uStack_4e8 = CONCAT44(uStack_4e8._4_4_,fVar31);
        fVar30 = (float)fmodf();
        fStack_4b8 = fStack_4b8 - fVar30;
        fVar30 = (float)fmodf();
        fVar30 = (fVar32 + fVar28 + fVar23) - fVar30;
        uStack_4f0 = CONCAT44(0x7f7fffff,(float)uStack_4f0);
        auVar29._0_4_ =
             fStack_4b8 * (float)uStack_3b8 + (float)uStack_4e8 * (float)uStack_398 +
             fVar30 * auVar29._0_4_;
        fVar20 = (float)uStack_4e8 * uStack_398._4_4_ + fStack_4b8 * fVar20 + fVar30 * auVar27._0_4_
        ;
        auVar22._0_4_ =
             fVar31 * (float)uStack_390 + fStack_4b8 * auVar22._0_4_ + fVar30 * auVar25._0_4_;
        puVar7[0x18] = uStack_3b8;
        puVar7[0x19] = uStack_3b0;
        puVar7[0x1a] = uStack_3a8;
        puVar7[0x1b] = uStack_3a0;
        puVar7[0x1c] = uStack_398;
        puVar7[0x1d] = uStack_390;
        uStack_388 = CONCAT44(fVar20,auVar29._0_4_);
        uStack_380 = CONCAT44(0x7f7fffff,auVar22._0_4_);
        *(float *)(puVar7 + 0x1e) = auVar29._0_4_;
        *(float *)((int64_t)puVar7 + 0xf4) = fVar20;
        *(float *)(puVar7 + 0x1f) = auVar22._0_4_;
        *(int32_t *)((int64_t)puVar7 + 0xfc) = 0x7f7fffff;
      }
      lVar17 = 2;
      FUN_1802864f0(puVar7);
      lVar11 = FUN_1802e3860(param_1,param_2,fStack_458);
      FUN_180627850(&puStack_4a8);
      System_DataHandler(&puStack_4a8,&processed_var_9936_ptr,uVar16 & 0xffffffff);
      func_0x000180094d10(lVar11,&puStack_4a8);
      puVar9 = (uint64_t *)(lVar11 + 0x30);
      do {
        puVar8 = puVar7;
        puVar10 = puVar9;
        uVar1 = puVar8[1];
        *puVar10 = *puVar8;
        puVar10[1] = uVar1;
        uVar1 = puVar8[3];
        puVar10[2] = puVar8[2];
        puVar10[3] = uVar1;
        uVar1 = puVar8[5];
        puVar10[4] = puVar8[4];
        puVar10[5] = uVar1;
        uVar1 = puVar8[7];
        puVar10[6] = puVar8[6];
        puVar10[7] = uVar1;
        uVar1 = puVar8[9];
        puVar10[8] = puVar8[8];
        puVar10[9] = uVar1;
        uVar1 = puVar8[0xb];
        puVar10[10] = puVar8[10];
        puVar10[0xb] = uVar1;
        uVar1 = puVar8[0xd];
        puVar10[0xc] = puVar8[0xc];
        puVar10[0xd] = uVar1;
        uVar1 = puVar8[0xf];
        puVar10[0xe] = puVar8[0xe];
        puVar10[0xf] = uVar1;
        lVar17 = lVar17 + -1;
        puVar9 = puVar10 + 0x10;
        puVar7 = puVar8 + 0x10;
      } while (lVar17 != 0);
      uVar1 = puVar8[0x11];
      puVar10[0x10] = puVar8[0x10];
      puVar10[0x11] = uVar1;
      uVar1 = puVar8[0x13];
      puVar10[0x12] = puVar8[0x12];
      puVar10[0x13] = uVar1;
      uVar1 = puVar8[0x15];
      puVar10[0x14] = puVar8[0x14];
      puVar10[0x15] = uVar1;
      uVar1 = puVar8[0x17];
      puVar10[0x16] = puVar8[0x16];
      puVar10[0x17] = uVar1;
      FUN_18024b8d0(lVar11);
      *(uint64_t *)(lVar11 + 0x11cbc) = uStack_3d0;
      *(uint64_t *)(lVar11 + 0x11cc4) = uStack_3c8;
      if (((char)param_1[0x2c] != '\0') || (fVar20 = fStack_4d8, 1.0 < (float)param_1[0x14])) {
        fVar20 = -1.0;
      }
      *(float *)(lVar11 + 0x174) = fVar20;
      *(int *)(lVar11 + 0x178) = (int)uVar16;
      *(int32_t *)(lVar11 + 0x124e4) = *(int32_t *)(*(int64_t *)(param_1 + 10) + 0x5b9c);
      *(int *)(lVar11 + 0x357c) = (int)uVar16;
      FUN_180056f10(lVar11 + 0x96a8,*(uint64_t *)(param_1 + 6));
      *(uint64_t *)(lVar11 + 0x993c) = uStack_4c8;
      *(uint64_t *)(lVar11 + 0x9944) = uStack_4c0;
      *(uint64_t *)(lVar11 + 0x994c) = CONCAT44(fStack_464,fStack_468);
      *(uint64_t *)(lVar11 + 0x9954) = CONCAT44(uStack_45c,fStack_460);
      *(bool *)(lVar11 + 0x9710) = (char)param_1[0x2c] != '\0';
      FUN_180627b90(&puStack_4a8);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_e8 ^ (uint64_t)auStack_578);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_1802e3860(uint64_t param_1,int64_t param_2,int32_t param_3)

{
  int64_t *plVar1;
  int32_t *puVar2;
  
  puVar2 = (int32_t *)FUN_1800daa50();
  FUN_180094b30(puVar2,&processed_var_64_ptr);
  puVar2[1] = 0x120000;
  puVar2[0x473c] = 0xffffff;
  *puVar2 = 0x20;
  *(uint64_t *)(puVar2 + 0x4706) = 0;
  puVar2[0x4708] = param_3;
  puVar2[0x4709] = param_3;
  puVar2[0x470a] = 0;
  puVar2[0x470b] = 0x3f800000;
  *(uint64_t *)(puVar2 + 0x4733) = *(uint64_t *)(param_2 + 0x11ccc);
  puVar2[1] = puVar2[1] | 0x102;
  FUN_1801be080(puVar2 + 2,system_parameter_buffer + 0x13b0);
  puVar2[0x268b] = 0xfffffff6;
  puVar2[0x473c] = 0xffffffff;
  puVar2[0x6e] = 0x40008182;
  plVar1 = *(int64_t **)(puVar2 + 0x25a4);
  *(uint64_t *)(puVar2 + 0x25a4) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  puVar2[0x4939] = *(int32_t *)(param_2 + 0x124e4);
  return puVar2;
}



// WARNING: Heritage AFTER dead removal. Example location: r0x000180be0000 : 0x0001802e3ac4
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram






