// $fun 的语义化别名
#define $alias_name $fun
/* SystemCore_EventHandler - RenderingSystem_DataBlockCopier */
#define RenderingSystem_DataBlockCopier SystemCore_EventHandler
// 99_part_05_part018_sub002_sub002.c - 1 个函数
// 函数: void function_2e1bb0(int *param_1,int64_t param_2,float param_3)
void function_2e1bb0(int *param_1,int64_t param_2,float param_3)
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
  int8_t stack_array_578 [32];
  void **pplocal_var_558;
  float fStack_550;
  int32_t local_var_548;
  float fStack_540;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  int32_t local_var_52c;
  uint64_t local_var_528;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  int32_t local_var_50c;
  uint64_t local_var_508;
  uint64_t local_var_500;
  uint64_t local_var_4f8;
  uint64_t local_var_4f0;
  uint64_t local_var_4e8;
  float fStack_4e0;
  int32_t local_var_4dc;
  float fStack_4d8;
  uint64_t local_var_4c8;
  uint64_t local_var_4c0;
  float fStack_4b8;
  void *plocal_var_4a8;
  uint64_t local_var_4a0;
  uint local_var_498;
  int16_t local_var_494;
  int16_t local_var_492;
  int32_t local_var_490;
  int32_t local_var_48c;
  uint64_t local_var_488;
  uint64_t local_var_480;
  uint64_t local_var_478;
  uint64_t local_var_470;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  int32_t local_var_45c;
  float fStack_458;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  uint64_t local_var_418;
  uint64_t local_var_410;
  uint64_t local_var_408;
  uint64_t local_var_400;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  int32_t local_var_3ec;
  uint64_t local_var_3e8;
  uint64_t local_var_3e0;
  uint64_t local_var_3d8;
  uint64_t local_var_3d0;
  uint64_t local_var_3c8;
  uint64_t local_var_3b8;
  uint64_t local_var_3b0;
  uint64_t local_var_3a8;
  uint64_t local_var_3a0;
  uint64_t local_var_398;
  uint64_t local_var_390;
  uint64_t local_var_388;
  uint64_t local_var_380;
  int iStack_378;
  void *aplocal_var_368 [20];
  uint64_t stack_array_2c8 [35];
  int32_t local_var_1b0;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  float afStack_168 [6];
  float fStack_150;
  int32_t local_var_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int32_t local_var_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int32_t local_var_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int32_t local_var_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  int32_t local_var_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int32_t local_var_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int32_t local_var_ec;
  uint64_t local_var_e8;
  local_var_3d8 = 0xfffffffffffffffe;
  local_var_e8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_578;
  uVar16 = (uint64_t)(int)param_3;
  iVar15 = 0;
  fStack_4b8 = param_3;
  if (*(char *)(system_main_module_state + 0xfc) != '\0') {
    puVar9 = (uint64_t *)(param_2 + 0x30);
    local_var_3d0 = *(uint64_t *)(param_2 + 0x120);
    local_var_3c8 = *(uint64_t *)(param_2 + 0x128);
    SystemFunction_000180094ae0(puVar9,&fStack_438);
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
      SystemFunction_0001800ed8d0(&plocal_var_4a8);
      plocal_var_4a8 = (void *)CONCAT44((int)(int64_t)fVar20,(int)(int64_t)fVar20);
      local_var_492 = 0x101;
      local_var_4a0 = CONCAT44(0x1a,(int32_t)local_var_4a0);
      local_var_498 = 0x3f800000;
      local_var_490 = *(int32_t *)(param_2 + 0x1bd4);
      *(char *)((int64_t)param_1 + 0xb1) = (char)param_1[0x2c];
      if ((char)param_1[0x2c] == '\0') {
        CoreMemoryPoolValidator(&local_var_188,&processed_var_9960_ptr);
        function_628320(&local_var_188,param_2 + 0x3520);
        local_var_4a0 = CONCAT44(local_var_4a0._4_4_,4);
        RenderingSystem_DataBlockCopier(aplocal_var_368,&local_var_188);
        puVar7 = (uint64_t *)function_0b1d80(system_resource_state,&local_var_528,aplocal_var_368,&plocal_var_4a8);
        local_var_4e8 = *puVar7;
        *puVar7 = 0;
        SystemFunction_0001800865f0(&local_var_4e8,param_1 + 6);
        SystemTimer(&local_var_4e8);
        SystemTimer(&local_var_528);
      }
      else {
        CoreMemoryPoolValidator(&local_var_188,&processed_var_9976_ptr);
        function_628320(&local_var_188,param_2 + 0x3520);
        RenderingSystem_DataBlockCopier(aplocal_var_368,&local_var_188);
        puVar7 = (uint64_t *)function_0b1d80(system_resource_state,&local_var_528,aplocal_var_368,&plocal_var_4a8);
        local_var_4e8 = *puVar7;
        *puVar7 = 0;
        SystemFunction_0001800865f0(&local_var_4e8,param_1 + 6);
        SystemTimer(&local_var_4e8);
        SystemTimer(&local_var_528);
      }
      aplocal_var_368[0] = &system_state_ptr;
      SystemValidator(&local_var_188);
    }
    if (1 < *param_1) {
      pfVar13 = (float *)&local_var_188;
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
          fVar20 = local_var_188._4_4_;
          auVar22._0_4_ = (float)local_var_180;
          auVar29._0_4_ = local_var_180._4_4_;
        }
        else {
          local_var_188 = (void *)CONCAT44(auVar29._0_4_ * 4.0,(float)local_var_188);
          local_var_180 = CONCAT44(auVar29._0_4_ * 30.0,auVar29._0_4_ * 10.0);
          fVar20 = auVar29._0_4_ * 4.0;
          auVar22._0_4_ = auVar29._0_4_ * 10.0;
          auVar29._0_4_ = auVar29._0_4_ * 30.0;
        }
        *(float *)(param_2 + 0x9a10) = fVar20;
        *(float *)(param_2 + 0x9a14) = auVar22._0_4_;
        *(float *)(param_2 + 0x9a18) = auVar29._0_4_;
        *(int32_t *)(param_2 + 0x9a1c) = (int32_t)local_var_178;
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
        local_var_188 = (void *)CONCAT44(0x42480000,(float)local_var_188);
        local_var_180 = 0x437a000042c80000;
      }
      lVar11 = *(int64_t *)(param_1 + 10);
      puVar7 = (uint64_t *)(lVar11 + 0x38a0 + uVar16 * 0x140);
      fStack_4d8 = 0.0;
      if ((float)((char)param_1[0x2c] == '\0') == 0.0) {
        function_1983b0(lVar11,&local_var_418);
        local_var_3e8 = 0;
        local_var_3e0 = 0x7f7fffff00000000;
        *(int32_t *)(param_2 + 0x9a10) = 0x453b8000;
        *(int32_t *)(param_2 + 0x9a14) = 0x4b189680;
        *(int32_t *)(param_2 + 0x9a18) = 0x4b189680;
        *(int32_t *)(param_2 + 0x9a1c) = 0x4b189680;
        local_var_478 = 0x461c4000461c4000;
        local_var_470 = 0x7f7fffff461c4000;
        local_var_488 = 0xc61c4000c61c4000;
        local_var_480 = 0x7f7fffffc61c4000;
        fVar20 = (float)param_1[0x31];
        if (0.0 <= fVar20) {
          fStack_538 = -fVar20;
          afStack_168[2] = (float)param_1[0x2f] + fStack_538;
          afStack_168[1] = (float)param_1[0x2e] + fStack_538;
          fStack_538 = (float)param_1[0x2d] + fStack_538;
          afStack_168[3] = 3.4028235e+38;
          afStack_168[4] = fVar20 + (float)param_1[0x2d];
          local_var_14c = 0x7f7fffff;
          fStack_530 = fVar20 + (float)param_1[0x2f];
          local_var_13c = 0x7f7fffff;
          local_var_12c = 0x7f7fffff;
          fStack_534 = fVar20 + (float)param_1[0x2e];
          local_var_11c = 0x7f7fffff;
          local_var_10c = 0x7f7fffff;
          local_var_fc = 0x7f7fffff;
          local_var_52c = 0x7f7fffff;
          local_var_ec = 0x7f7fffff;
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
          local_var_4f8 = 0x461c4000461c4000;
          local_var_4f0 = 0x7f7fffff461c4000;
          local_var_4c8 = 0xc61c4000c61c4000;
          local_var_4c0 = 0x7f7fffffc61c4000;
          local_var_4e8 = CONCAT44(local_var_4e8._4_4_,0xbf800000);
          local_var_528 = 0;
          pplocal_var_558 = (void **)&local_var_4e8;
          function_2874c0(puVar9,&local_var_508,&fStack_518,&local_var_528);
          plocal_var_4a8 = &processed_var_6432_ptr;
          iVar15 = 0;
          local_var_4a0 = 2;
          local_var_498 = local_var_498 & 0xffffff00;
          iStack_378 = 0;
          fStack_4e0 = fStack_510 - (float)local_var_500;
          local_var_4e8 = CONCAT44(fStack_514 - local_var_508._4_4_,fStack_518 - (float)local_var_508);
          local_var_4dc = 0x7f7fffff;
          fStack_550 = 0.001;
          pplocal_var_558 = &plocal_var_4a8;
          function_1ab040(*(uint64_t *)(param_1 + 10),&local_var_508,&local_var_4e8,&local_var_3b8);
          bVar19 = iStack_378 == 0;
          if (bVar19) {
            do {
              if (4 < iVar15) break;
              local_var_4e8 = CONCAT44(local_var_4e8._4_4_,0xbf800000);
              local_var_528 = CONCAT44((float)iVar15 * 0.1,(float)iVar15 * 0.1);
              pplocal_var_558 = (void **)&local_var_4e8;
              function_2874c0(puVar9,&local_var_508,&fStack_518,&local_var_528);
              fStack_530 = fStack_510 - (float)local_var_500;
              fStack_534 = fStack_514 - local_var_508._4_4_;
              fStack_538 = fStack_518 - (float)local_var_508;
              local_var_52c = 0x7f7fffff;
              fStack_550 = 0.001;
              pplocal_var_558 = &plocal_var_4a8;
              function_1ab040(*(uint64_t *)(param_1 + 10),&local_var_508,&fStack_538,&local_var_3b8);
              iVar15 = iVar15 + 1;
            } while (iStack_378 == 0);
            bVar19 = iStack_378 == 0;
          }
          if (!bVar19 && -1 < iStack_378) {
            puVar10 = (uint64_t *)
                      SystemFunction_000180085d60(&fStack_468,(int64_t)&local_var_3a0 + 4,&local_var_4f8);
            local_var_4f8 = *puVar10;
            local_var_4f0 = puVar10[1];
            puVar10 = (uint64_t *)
                      SystemFunction_000180085da0(&fStack_468,(int64_t)&local_var_3a0 + 4,&local_var_4c8);
            local_var_4c8 = *puVar10;
            local_var_4c0 = puVar10[1];
          }
          iVar15 = 0;
          iStack_378 = 0;
          local_var_4e8 = CONCAT44(local_var_4e8._4_4_,0xbf800000);
          local_var_528 = 0x3f80000000000000;
          pplocal_var_558 = (void **)&local_var_4e8;
          function_2874c0(puVar9,&local_var_508,&fStack_518,&local_var_528);
          plocal_var_4a8 = &processed_var_6432_ptr;
          local_var_4a0 = 2;
          local_var_498 = local_var_498 & 0xffffff00;
          iStack_378 = 0;
          fStack_530 = fStack_510 - (float)local_var_500;
          fStack_534 = fStack_514 - local_var_508._4_4_;
          fStack_538 = fStack_518 - (float)local_var_508;
          local_var_52c = 0x7f7fffff;
          fStack_550 = 0.001;
          pplocal_var_558 = &plocal_var_4a8;
          function_1ab040(*(uint64_t *)(param_1 + 10),&local_var_508,&fStack_538,&local_var_3b8);
          bVar19 = iStack_378 == 0;
          if (bVar19) {
            do {
              if (4 < iVar15) break;
              local_var_4e8 = CONCAT44(local_var_4e8._4_4_,0xbf800000);
              local_var_528 = CONCAT44(1.0 - (float)iVar15 * 0.1,(float)iVar15 * 0.1);
              pplocal_var_558 = (void **)&local_var_4e8;
              function_2874c0(puVar9,&local_var_508,&fStack_518,&local_var_528);
              fStack_530 = fStack_510 - (float)local_var_500;
              fStack_534 = fStack_514 - local_var_508._4_4_;
              fStack_538 = fStack_518 - (float)local_var_508;
              local_var_52c = 0x7f7fffff;
              fStack_550 = 0.001;
              pplocal_var_558 = &plocal_var_4a8;
              function_1ab040(*(uint64_t *)(param_1 + 10),&local_var_508,&fStack_538,&local_var_3b8);
              iVar15 = iVar15 + 1;
            } while (iStack_378 == 0);
            bVar19 = iStack_378 == 0;
          }
          if (!bVar19 && -1 < iStack_378) {
            puVar10 = (uint64_t *)
                      SystemFunction_000180085d60(&fStack_468,(int64_t)&local_var_3a0 + 4,&local_var_4f8);
            local_var_4f8 = *puVar10;
            local_var_4f0 = puVar10[1];
            puVar10 = (uint64_t *)
                      SystemFunction_000180085da0(&fStack_468,(int64_t)&local_var_3a0 + 4,&local_var_4c8);
            local_var_4c8 = *puVar10;
            local_var_4c0 = puVar10[1];
          }
          iVar15 = 0;
          iStack_378 = 0;
          local_var_4e8 = CONCAT44(local_var_4e8._4_4_,0xbf800000);
          local_var_528 = 0x3f8000003f800000;
          pplocal_var_558 = (void **)&local_var_4e8;
          function_2874c0(puVar9,&local_var_508,&fStack_518,&local_var_528);
          plocal_var_4a8 = &processed_var_6432_ptr;
          local_var_4a0 = 2;
          local_var_498 = local_var_498 & 0xffffff00;
          iStack_378 = 0;
          fStack_530 = fStack_510 - (float)local_var_500;
          fStack_534 = fStack_514 - local_var_508._4_4_;
          fStack_538 = fStack_518 - (float)local_var_508;
          local_var_52c = 0x7f7fffff;
          fStack_550 = 0.001;
          pplocal_var_558 = &plocal_var_4a8;
          function_1ab040(*(uint64_t *)(param_1 + 10),&local_var_508,&fStack_538,&local_var_3b8);
          bVar19 = iStack_378 == 0;
          if (bVar19) {
            do {
              if (4 < iVar15) break;
              local_var_4e8 = CONCAT44(local_var_4e8._4_4_,0xbf800000);
              fVar20 = 1.0 - (float)iVar15 * 0.1;
              local_var_528 = CONCAT44(fVar20,fVar20);
              pplocal_var_558 = (void **)&local_var_4e8;
              function_2874c0(puVar9,&local_var_508,&fStack_518,&local_var_528);
              fStack_530 = fStack_510 - (float)local_var_500;
              fStack_534 = fStack_514 - local_var_508._4_4_;
              fStack_538 = fStack_518 - (float)local_var_508;
              local_var_52c = 0x7f7fffff;
              fStack_550 = 0.001;
              pplocal_var_558 = &plocal_var_4a8;
              function_1ab040(*(uint64_t *)(param_1 + 10),&local_var_508,&fStack_538,&local_var_3b8);
              iVar15 = iVar15 + 1;
            } while (iStack_378 == 0);
            bVar19 = iStack_378 == 0;
          }
          if (!bVar19 && -1 < iStack_378) {
            puVar10 = (uint64_t *)
                      SystemFunction_000180085d60(&fStack_468,(int64_t)&local_var_3a0 + 4,&local_var_4f8);
            local_var_4f8 = *puVar10;
            local_var_4f0 = puVar10[1];
            puVar10 = (uint64_t *)
                      SystemFunction_000180085da0(&fStack_468,(int64_t)&local_var_3a0 + 4,&local_var_4c8);
            local_var_4c8 = *puVar10;
            local_var_4c0 = puVar10[1];
          }
          iVar15 = 0;
          iStack_378 = 0;
          local_var_4e8 = CONCAT44(local_var_4e8._4_4_,0xbf800000);
          local_var_528 = 0x3f800000;
          pplocal_var_558 = (void **)&local_var_4e8;
          function_2874c0(puVar9,&local_var_508,&fStack_518,&local_var_528);
          plocal_var_4a8 = &processed_var_6432_ptr;
          local_var_4a0 = 2;
          local_var_498 = local_var_498 & 0xffffff00;
          iStack_378 = 0;
          fStack_530 = fStack_510 - (float)local_var_500;
          fStack_534 = fStack_514 - local_var_508._4_4_;
          fStack_538 = fStack_518 - (float)local_var_508;
          local_var_52c = 0x7f7fffff;
          fStack_550 = 0.001;
          pplocal_var_558 = &plocal_var_4a8;
          function_1ab040(*(uint64_t *)(param_1 + 10),&local_var_508,&fStack_538,&local_var_3b8);
          bVar19 = iStack_378 == 0;
          if (bVar19) {
            do {
              if (4 < iVar15) break;
              local_var_4e8 = CONCAT44(local_var_4e8._4_4_,0xbf800000);
              local_var_528 = CONCAT44((float)iVar15 * 0.1,1.0 - (float)iVar15 * 0.1);
              pplocal_var_558 = (void **)&local_var_4e8;
              function_2874c0(puVar9,&local_var_508,&fStack_518,&local_var_528);
              fStack_530 = fStack_510 - (float)local_var_500;
              fStack_534 = fStack_514 - local_var_508._4_4_;
              fStack_538 = fStack_518 - (float)local_var_508;
              local_var_52c = 0x7f7fffff;
              fStack_550 = 0.001;
              pplocal_var_558 = &plocal_var_4a8;
              function_1ab040(*(uint64_t *)(param_1 + 10),&local_var_508,&fStack_538,&local_var_3b8);
              iVar15 = iVar15 + 1;
            } while (iStack_378 == 0);
            bVar19 = iStack_378 == 0;
          }
          if (!bVar19 && -1 < iStack_378) {
            puVar9 = (uint64_t *)
                     SystemFunction_000180085d60(&fStack_468,(int64_t)&local_var_3a0 + 4,&local_var_4f8);
            local_var_4f8 = *puVar9;
            local_var_4f0 = puVar9[1];
            puVar9 = (uint64_t *)
                     SystemFunction_000180085da0(&fStack_468,(int64_t)&local_var_3a0 + 4,&local_var_4c8);
            local_var_4c8 = *puVar9;
            local_var_4c0 = puVar9[1];
          }
          iStack_378 = 0;
          fVar20 = ((float)local_var_4c0 - (float)local_var_4f0) * 0.15;
          fStack_514 = (local_var_4c8._4_4_ - local_var_4f8._4_4_) * 0.15;
          fStack_518 = ((float)local_var_4c8 - (float)local_var_4f8) * 0.15;
          fStack_530 = fVar20 + (float)local_var_4c0 + 50.0;
          fStack_538 = fStack_518 + (float)local_var_4c8;
          fStack_534 = fStack_514 + local_var_4c8._4_4_;
          local_var_52c = 0x7f7fffff;
          fStack_510 = ((float)local_var_4f0 - fVar20) - 50.0;
          fStack_518 = (float)local_var_4f8 - fStack_518;
          fStack_514 = local_var_4f8._4_4_ - fStack_514;
          local_var_50c = 0x7f7fffff;
          SystemFunction_000180287a90(afStack_168,&fStack_518,&fStack_538);
        }
        pfVar13 = afStack_168;
        lVar11 = 8;
        do {
          function_1c1690(&local_var_418,&fStack_538,pfVar13);
          puVar9 = (uint64_t *)SystemFunction_000180085d60(&fStack_468,&local_var_478,&fStack_538);
          local_var_478 = *puVar9;
          local_var_470 = puVar9[1];
          puVar9 = (uint64_t *)SystemFunction_000180085da0(&fStack_518,&local_var_488,&fStack_538);
          uVar1 = *puVar9;
          local_var_480 = puVar9[1];
          pfVar13 = pfVar13 + 4;
          lVar11 = lVar11 + -1;
          local_var_488 = uVar1;
        } while (lVar11 != 0);
        fStack_530 = (float)local_var_470 + (float)local_var_480;
        local_var_488._4_4_ = (float)((uint64_t)uVar1 >> 0x20);
        fStack_534 = local_var_478._4_4_ + local_var_488._4_4_;
        local_var_488._0_4_ = (float)uVar1;
        fStack_538 = (float)local_var_478 + (float)local_var_488;
        local_var_52c = 0x7f7fffff;
        SystemFunction_000180085940(&fStack_450);
        SystemFunction_0001800f8f10(&local_var_418,&local_var_188,&fStack_450);
        fStack_530 = (float)local_var_470 - fStack_448;
        fStack_534 = local_var_478._4_4_ - fStack_44c;
        fStack_538 = (float)local_var_478 - fStack_450;
        local_var_4c8 = CONCAT44(fStack_534,fStack_538);
        local_var_4c0 = CONCAT44(0x7f7fffff,fStack_530);
        fStack_460 = (float)local_var_480 - fStack_448;
        fStack_550 = local_var_488._4_4_ - fStack_44c;
        fStack_468 = (float)local_var_488 - fStack_450;
        local_var_52c = 0x7f7fffff;
        local_var_45c = 0x7f7fffff;
        fStack_540 = (fStack_460 - fStack_530) + *(float *)(system_main_module_state + 0x388) * 200.0;
        uVar3 = local_var_180._4_4_;
        fVar20 = fStack_540 * 0.5 + 20.0;
        auVar29._0_4_ = fStack_3f8 * fVar20 + (float)local_var_188;
        auVar22._0_4_ = local_var_188._4_4_ + fStack_3f4 * fVar20;
        fVar20 = (float)local_var_180 + fStack_3f0 * fVar20;
        fStack_540 = fStack_540 + 20.0;
        local_var_548 = 0x41a00000;
        pplocal_var_558 = (void **)CONCAT44(pplocal_var_558._4_4_,fStack_534);
        fStack_464 = fStack_550;
        SystemFunction_000180286ef0(puVar7,0,fStack_538,fStack_468);
        puVar7[0x18] = local_var_418;
        puVar7[0x19] = local_var_410;
        puVar7[0x1a] = local_var_408;
        puVar7[0x1b] = local_var_400;
        *(float *)(puVar7 + 0x1c) = fStack_3f8;
        *(float *)((int64_t)puVar7 + 0xe4) = fStack_3f4;
        *(float *)(puVar7 + 0x1d) = fStack_3f0;
        *(int32_t *)((int64_t)puVar7 + 0xec) = local_var_3ec;
        *(float *)(puVar7 + 0x1e) = auVar29._0_4_;
        *(float *)((int64_t)puVar7 + 0xf4) = auVar22._0_4_;
        *(float *)(puVar7 + 0x1f) = fVar20;
        *(int32_t *)((int64_t)puVar7 + 0xfc) = uVar3;
      }
      else {
        function_1983b0(lVar11,&local_var_418);
        local_var_3e8 = 0;
        local_var_3e0 = 0x7f7fffff00000000;
        local_var_478 = 0x7f7fffff7f7fffff;
        local_var_470 = 0x7f7fffff7f7fffff;
        local_var_508 = 0xff7fffffff7fffff;
        local_var_500 = 0x7f7fffffff7fffff;
        fVar20 = *(float *)(system_main_module_state + 0x388) * 20000.0;
        local_var_3b8 = local_var_418;
        local_var_3b0 = local_var_410;
        local_var_3a8 = local_var_408;
        local_var_3a0 = local_var_400;
        local_var_398 = CONCAT44(fStack_3f4,fStack_3f8);
        local_var_390 = CONCAT44(local_var_3ec,fStack_3f0);
        local_var_388 = 0;
        local_var_380 = 0x7f7fffff00000000;
        lVar11 = 2;
        puVar10 = stack_array_2c8;
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
        function_2879b0(stack_array_2c8,&plocal_var_4a8,*(int32_t *)((int64_t)&local_var_188 + uVar16 * 4));
        local_var_1b0 = *(int32_t *)((int64_t)&local_var_188 + uVar16 * 4 + 4);
        function_2864f0(stack_array_2c8);
        local_var_188 = plocal_var_4a8;
        local_var_180 = local_var_4a0;
        local_var_178 = CONCAT26(local_var_492,CONCAT24(local_var_494,local_var_498));
        local_var_170 = CONCAT44(local_var_48c,local_var_490);
        function_63c810(stack_array_2c8,afStack_168,&local_var_188);
        pfVar13 = afStack_168;
        lVar11 = 8;
        lVar17 = 8;
        do {
          puVar9 = (uint64_t *)SystemFunction_000180085d60(&local_var_188,&local_var_478,pfVar13);
          local_var_478 = *puVar9;
          local_var_470 = puVar9[1];
          puVar9 = (uint64_t *)SystemFunction_000180085da0(&fStack_468,&local_var_508,pfVar13);
          uVar1 = *puVar9;
          local_var_500 = puVar9[1];
          pfVar13 = pfVar13 + 4;
          lVar17 = lVar17 + -1;
          local_var_508 = uVar1;
        } while (lVar17 != 0);
        local_var_508._4_4_ = (float)((uint64_t)uVar1 >> 0x20);
        local_var_508._0_4_ = (float)uVar1;
        local_var_4c8 = CONCAT44(local_var_478._4_4_ + local_var_508._4_4_,
                              (float)local_var_478 + (float)local_var_508);
        local_var_4c0 = CONCAT44(0x7f7fffff,(float)local_var_470 + (float)local_var_500);
        SystemFunction_000180085940(&local_var_4f8);
        auVar22._0_4_ = fVar20 * 0.5 + 20.0;
        local_var_388 = CONCAT44((float)((uint64_t)local_var_4f8 >> 0x20) +
                              auVar22._0_4_ * local_var_398._4_4_,
                              auVar22._0_4_ * (float)local_var_398 + (float)local_var_4f8);
        local_var_380 = CONCAT44(local_var_4f0._4_4_,(float)local_var_4f0 + auVar22._0_4_ * (float)local_var_390
                             );
        auVar22._0_4_ = 1.1754944e-38;
        pfVar13 = afStack_168 + 1;
        lVar17 = 8;
        while( true ) {
          local_var_4c8 = CONCAT44(*pfVar13 - local_var_4f8._4_4_,pfVar13[-1] - (float)local_var_4f8);
          local_var_4c0 = CONCAT44(0x7f7fffff,pfVar13[1] - (float)local_var_4f0);
          auVar29._0_4_ = (float)SystemFunction_000180084f70(&local_var_4c8);
          if (auVar22._0_4_ <= auVar29._0_4_) {
            auVar22._0_4_ = auVar29._0_4_;
          }
          pfVar13 = pfVar13 + 4;
          lVar17 = lVar17 + -1;
          if (lVar17 == 0) break;
        }
        function_1c1690(&local_var_3b8,&fStack_450,&local_var_4f8);
        local_var_488 = CONCAT44(auVar22._0_4_ + fStack_44c,auVar22._0_4_ + fStack_450);
        local_var_480 = CONCAT44(0x7f7fffff,auVar22._0_4_ + fStack_448);
        fStack_510 = fStack_448 - auVar22._0_4_;
        fStack_514 = fStack_44c - auVar22._0_4_;
        fStack_518 = fStack_450 - auVar22._0_4_;
        local_var_50c = 0x7f7fffff;
        SystemFunction_000180287a90(aplocal_var_368,&fStack_518,&local_var_488);
        ppuVar18 = aplocal_var_368;
        ppuVar14 = aplocal_var_368;
        do {
          puVar9 = (uint64_t *)SystemFunction_0001800f8f10(&local_var_3b8,&local_var_188,ppuVar14);
          puVar2 = (void *)puVar9[1];
          *ppuVar18 = (void *)*puVar9;
          ppuVar18[1] = puVar2;
          ppuVar14 = ppuVar14 + 2;
          ppuVar18 = ppuVar18 + 2;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        uVar6 = function_1c1690(&local_var_3b8,&fStack_538,&local_var_388);
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
        auVar27._0_4_ = (float)local_var_488 * 0.25;
        iVar15 = (int)auVar27._0_4_;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != auVar27._0_4_)) {
          auVar27._4_4_ = auVar27._0_4_;
          auVar27._8_8_ = 0;
          uVar6 = movmskps(uVar6,auVar27);
          uVar6 = uVar6 & 1 ^ 1;
          auVar27._0_4_ = (float)(int)(iVar15 + uVar6);
        }
        auVar25._0_4_ = local_var_488._4_4_ * 0.25;
        iVar15 = (int)auVar25._0_4_;
        if ((iVar15 != -0x80000000) && ((float)iVar15 != auVar25._0_4_)) {
          auVar25._4_4_ = auVar25._0_4_;
          auVar25._8_8_ = 0;
          uVar6 = movmskps(uVar6,auVar25);
          auVar25._0_4_ = (float)(int)(iVar15 + (uVar6 & 1 ^ 1));
        }
        local_var_488 = CONCAT44(auVar25._0_4_ * 4.0,auVar27._0_4_ * 4.0);
        fVar28 = fStack_514 - fStack_534;
        fVar30 = fStack_518 - fStack_538;
        local_var_4c8 = CONCAT44(fVar28,fVar30);
        local_var_4c0 = CONCAT44(0x7f7fffff,fStack_510 - fStack_530);
        fStack_460 = (float)local_var_480 - fStack_530;
        auVar22._0_4_ = auVar25._0_4_ * 4.0 - fStack_534;
        auVar29._0_4_ = auVar27._0_4_ * 4.0 - fStack_538;
        local_var_45c = 0x7f7fffff;
        local_var_4f8 = CONCAT44(auVar22._0_4_,auVar29._0_4_);
        local_var_4f0 = CONCAT44(0x7f7fffff,fStack_460);
        *(int8_t *)(puVar7 + 0x20) = 0;
        *(int32_t *)((int64_t)puVar7 + 0x114) = 0x41a00000;
        *(float *)(puVar7 + 0x23) = fVar20 + 20.0;
        *(float *)((int64_t)puVar7 + 0x104) = fVar30;
        *(float *)(puVar7 + 0x21) = auVar29._0_4_;
        *(float *)(puVar7 + 0x22) = fVar28;
        *(float *)((int64_t)puVar7 + 0x10c) = auVar22._0_4_;
        fStack_468 = auVar29._0_4_;
        fStack_464 = auVar22._0_4_;
        function_2864f0(puVar7);
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
        local_var_528 = CONCAT44(local_var_528._4_4_,
                              auVar22._0_4_ *
                              (1.0 / (float)*(ushort *)(*(int64_t *)(param_1 + 6) + 0x32e)));
        fVar20 = local_var_3b8._4_4_;
        auVar22._0_4_ = (float)local_var_3b0;
        fStack_4b8 = local_var_3b8._4_4_ * local_var_388._4_4_ + (float)local_var_3b8 * (float)local_var_388 +
                     (float)local_var_3b0 * (float)local_var_380;
        auVar27._0_4_ = local_var_3a8._4_4_;
        fVar32 = local_var_3a8._4_4_ * local_var_388._4_4_;
        auVar29._0_4_ = (float)local_var_3a8;
        fVar28 = (float)local_var_3a8 * (float)local_var_388;
        auVar25._0_4_ = (float)local_var_3a0;
        fVar23 = (float)local_var_3a0 * (float)local_var_380;
        fVar31 = (float)local_var_388 * (float)local_var_398 + local_var_388._4_4_ * local_var_398._4_4_ +
                 (float)local_var_380 * (float)local_var_390;
        local_var_4e8 = CONCAT44(local_var_4e8._4_4_,fVar31);
        fVar30 = (float)fmodf();
        fStack_4b8 = fStack_4b8 - fVar30;
        fVar30 = (float)fmodf();
        fVar30 = (fVar32 + fVar28 + fVar23) - fVar30;
        local_var_4f0 = CONCAT44(0x7f7fffff,(float)local_var_4f0);
        auVar29._0_4_ =
             fStack_4b8 * (float)local_var_3b8 + (float)local_var_4e8 * (float)local_var_398 +
             fVar30 * auVar29._0_4_;
        fVar20 = (float)local_var_4e8 * local_var_398._4_4_ + fStack_4b8 * fVar20 + fVar30 * auVar27._0_4_
        ;
        auVar22._0_4_ =
             fVar31 * (float)local_var_390 + fStack_4b8 * auVar22._0_4_ + fVar30 * auVar25._0_4_;
        puVar7[0x18] = local_var_3b8;
        puVar7[0x19] = local_var_3b0;
        puVar7[0x1a] = local_var_3a8;
        puVar7[0x1b] = local_var_3a0;
        puVar7[0x1c] = local_var_398;
        puVar7[0x1d] = local_var_390;
        local_var_388 = CONCAT44(fVar20,auVar29._0_4_);
        local_var_380 = CONCAT44(0x7f7fffff,auVar22._0_4_);
        *(float *)(puVar7 + 0x1e) = auVar29._0_4_;
        *(float *)((int64_t)puVar7 + 0xf4) = fVar20;
        *(float *)(puVar7 + 0x1f) = auVar22._0_4_;
        *(int32_t *)((int64_t)puVar7 + 0xfc) = 0x7f7fffff;
      }
      lVar17 = 2;
      function_2864f0(puVar7);
      lVar11 = function_2e3860(param_1,param_2,fStack_458);
      function_627850(&plocal_var_4a8);
      System_DataHandler(&plocal_var_4a8,&processed_var_9936_ptr,uVar16 & 0xffffffff);
      SystemFunction_000180094d10(lVar11,&plocal_var_4a8);
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
      function_24b8d0(lVar11);
      *(uint64_t *)(lVar11 + 0x11cbc) = local_var_3d0;
      *(uint64_t *)(lVar11 + 0x11cc4) = local_var_3c8;
      if (((char)param_1[0x2c] != '\0') || (fVar20 = fStack_4d8, 1.0 < (float)param_1[0x14])) {
        fVar20 = -1.0;
      }
      *(float *)(lVar11 + 0x174) = fVar20;
      *(int *)(lVar11 + 0x178) = (int)uVar16;
      *(int32_t *)(lVar11 + 0x124e4) = *(int32_t *)(*(int64_t *)(param_1 + 10) + 0x5b9c);
      *(int *)(lVar11 + 0x357c) = (int)uVar16;
      SystemCore_PointerManager(lVar11 + 0x96a8,*(uint64_t *)(param_1 + 6));
      *(uint64_t *)(lVar11 + 0x993c) = local_var_4c8;
      *(uint64_t *)(lVar11 + 0x9944) = local_var_4c0;
      *(uint64_t *)(lVar11 + 0x994c) = CONCAT44(fStack_464,fStack_468);
      *(uint64_t *)(lVar11 + 0x9954) = CONCAT44(local_var_45c,fStack_460);
      *(bool *)(lVar11 + 0x9710) = (char)param_1[0x2c] != '\0';
      SystemValidator(&plocal_var_4a8);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_e8 ^ (uint64_t)stack_array_578);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_2e3860(uint64_t param_1,int64_t param_2,int32_t param_3)
{
  int64_t *plVar1;
  int32_t *puVar2;
  puVar2 = (int32_t *)function_0daa50();
  SystemCore_NetworkHandler(puVar2,&processed_var_64_ptr);
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
  function_1be080(puVar2 + 2,system_parameter_buffer + 0x13b0);
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