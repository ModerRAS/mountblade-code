#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part061.c - 2 个函数

// 函数: void FUN_1804d4b50(int64_t param_1,int32_t param_2,int64_t *param_3,int32_t param_4,
void FUN_1804d4b50(int64_t param_1,int32_t param_2,int64_t *param_3,int32_t param_4,
                  char param_5)

{
  int *piVar1;
  int32_t *puVar2;
  byte bVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  void *puVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint64_t uVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t lVar35;
  int64_t lVar36;
  int64_t lVar37;
  uint *puVar38;
  int64_t lVar39;
  int64_t lVar40;
  void *puVar41;
  uint64_t *puVar42;
  uint64_t uVar43;
  int64_t *plVar44;
  int64_t lVar45;
  int64_t lVar46;
  int64_t lVar47;
  int64_t *plVar48;
  int iVar49;
  int iVar50;
  int8_t uVar51;
  int8_t auStack_398 [32];
  code *pcStack_378;
  int64_t *plStack_368;
  uint auStack_360 [2];
  int32_t uStack_358;
  int32_t uStack_354;
  int32_t uStack_350;
  uint uStack_34c;
  int64_t *plStack_348;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  int32_t uStack_334;
  int64_t *plStack_330;
  int64_t *plStack_328;
  int64_t *plStack_320;
  int64_t *plStack_318;
  int64_t *plStack_310;
  int64_t *plStack_308;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  int32_t uStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  int32_t uStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  int32_t uStack_2a4;
  uint64_t uStack_288;
  int64_t *plStack_280;
  int64_t *plStack_278;
  uint64_t uStack_268;
  uint64_t uStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  uint uStack_24c;
  int64_t alStack_248 [3];
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  void *puStack_1e8;
  int8_t *puStack_1e0;
  int32_t uStack_1d8;
  int8_t auStack_1d0 [136];
  void *puStack_148;
  uint64_t *puStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_88;
  uint64_t uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint64_t uStack_68;
  
  uStack_288 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_398;
  uStack_358 = param_2;
  uStack_350 = param_4;
  plStack_330 = param_3;
  if (param_3 == (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_398);
  }
  lVar46 = *(int64_t *)(param_1 + 0x2b28);
  plVar48 = (int64_t *)(lVar46 + ((uint64_t)param_3 % (uint64_t)*(uint *)(param_1 + 0x2b30)) * 8)
  ;
  for (plVar44 = (int64_t *)*plVar48; plVar44 != (int64_t *)0x0; plVar44 = (int64_t *)plVar44[2])
  {
    if (param_3 == (int64_t *)*plVar44) {
      lVar45 = *(int64_t *)(param_1 + 0x2b30);
      goto LAB_1804d4bf3;
    }
  }
  lVar45 = *(int64_t *)(param_1 + 0x2b30);
  plVar48 = (int64_t *)(lVar46 + lVar45 * 8);
  plVar44 = (int64_t *)*plVar48;
LAB_1804d4bf3:
  if (plVar44 != *(int64_t **)(lVar46 + lVar45 * 8)) {
    uVar4 = *(uint *)(plVar44 + 1);
    FUN_1804dfff0((int64_t)(int)(*(uint *)(param_1 + 0x2b18) & uVar4) * 0xd8 +
                  *(int64_t *)(*(int64_t *)(param_1 + 11000) + (int64_t)((int)uVar4 >> 10) * 8) +
                  8,param_1);
    lVar46 = *(int64_t *)(*(int64_t *)(param_1 + 11000) + (int64_t)((int)uVar4 >> 10) * 8);
    lVar45 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & uVar4) * 0xd8;
    auStack_360[0] = uVar4;
    if ((uVar4 != 0xffffffff) && (*(int *)(lVar46 + lVar45) != -1)) {
      FUN_1800571e0(param_1 + 0x2ad8,auStack_360);
      FUN_1804a7a40(lVar45 + 8 + lVar46);
      *(int32_t *)(lVar46 + lVar45) = 0xffffffff;
    }
    lVar46 = plVar44[2];
    plVar5 = plVar48;
    while (lVar46 == 0) {
      plVar5 = plVar5 + 1;
      lVar46 = *plVar5;
    }
    plVar5 = (int64_t *)*plVar48;
    plVar6 = (int64_t *)plVar5[2];
    if (plVar5 == plVar44) {
      *plVar48 = (int64_t)plVar6;
    }
    else {
      for (; plVar6 != plVar44; plVar6 = (int64_t *)plVar6[2]) {
        plVar5 = plVar6;
      }
      plVar5[2] = plVar6[2];
    }
    plStack_280 = plVar44;
    plStack_278 = plVar48;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar44);
  }
  iVar50 = 0;
  if (param_3[0x1f] - param_3[0x1e] >> 3 != 0) {
    lVar46 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar46 + param_3[0x1e]) + 200))
                (*(int64_t **)(lVar46 + param_3[0x1e]),0);
      iVar50 = iVar50 + 1;
      lVar46 = lVar46 + 8;
    } while ((uint64_t)(int64_t)iVar50 < (uint64_t)(param_3[0x1f] - param_3[0x1e] >> 3));
  }
  plStack_328 = param_3 + 0x4c;
  lVar46 = *plStack_328;
  if (lVar46 != 0) {
    iVar50 = 0;
    if (*(int64_t *)(lVar46 + 0x1b0) - *(int64_t *)(lVar46 + 0x1a8) >> 3 != 0) {
      lVar45 = 0;
      do {
        plVar48 = *(int64_t **)(lVar45 + *(int64_t *)(lVar46 + 0x1a8));
        (**(code **)(*plVar48 + 200))(plVar48,0);
        iVar50 = iVar50 + 1;
        lVar45 = lVar45 + 8;
      } while ((uint64_t)(int64_t)iVar50 <
               (uint64_t)(*(int64_t *)(lVar46 + 0x1b0) - *(int64_t *)(lVar46 + 0x1a8) >> 3));
    }
    iVar50 = 0;
    if ('\0' < *(char *)(lVar46 + 0x20)) {
      lVar45 = *(int64_t *)(lVar46 + 0x18);
      lVar47 = 0;
      do {
        iVar49 = 0;
        if (*(int64_t *)(lVar47 + 0xb8 + lVar45) - *(int64_t *)(lVar47 + 0xb0 + lVar45) >> 3 != 0)
        {
          lVar39 = 0;
          do {
            plVar48 = *(int64_t **)(lVar39 + *(int64_t *)(lVar47 + 0xb0 + lVar45));
            (**(code **)(*plVar48 + 200))(plVar48,0);
            iVar49 = iVar49 + 1;
            lVar39 = lVar39 + 8;
            lVar45 = *(int64_t *)(lVar46 + 0x18);
          } while ((uint64_t)(int64_t)iVar49 <
                   (uint64_t)
                   (*(int64_t *)(lVar47 + 0xb8 + lVar45) - *(int64_t *)(lVar47 + 0xb0 + lVar45) >>
                   3));
        }
        iVar50 = iVar50 + 1;
        lVar47 = lVar47 + 0x100;
      } while (iVar50 < *(char *)(lVar46 + 0x20));
    }
  }
  piVar1 = (int *)(param_1 + 0x2ac8);
  if ((*(int64_t *)(param_1 + 0x2ae0) - *(int64_t *)(param_1 + 0x2ad8) & 0xfffffffffffffffcU) == 0
     ) {
    FUN_1804dc320(piVar1);
  }
  puVar38 = (uint *)(*(int64_t *)(param_1 + 0x2ae0) + -4);
  uVar4 = *puVar38;
  *(uint **)(param_1 + 0x2ae0) = puVar38;
  iVar50 = *(int *)(param_1 + 0x2acc);
  if (*(int *)(param_1 + 0x2acc) <= (int)uVar4) {
    iVar50 = uVar4 + 1;
  }
  *(int *)(param_1 + 0x2acc) = iVar50;
  lVar47 = (int64_t)((int)uVar4 >> 10);
  lVar46 = *(int64_t *)(*(int64_t *)(param_1 + 11000) + lVar47 * 8);
  lVar45 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & uVar4) * 0xd8;
  iVar50 = *piVar1;
  *piVar1 = iVar50 + 1;
  *(int *)(lVar46 + lVar45) = iVar50;
  *(uint *)(lVar46 + 4 + lVar45) = uVar4;
  plVar48 = (int64_t *)(lVar45 + 8 + lVar46);
  *plVar48 = 0;
  plVar48[9] = 0;
  plVar48[10] = 0;
  plVar48[0xb] = 0;
  *(int32_t *)(plVar48 + 0xc) = 3;
  plStack_368 = plVar48 + 0xd;
  *plStack_368 = 0;
  plVar48[0xe] = 0;
  plVar48[0xf] = 0;
  *(int32_t *)(plVar48 + 0x10) = 3;
  pcStack_378 = DataCacheManager;
  uStack_34c = uVar4;
  plStack_348 = plVar48;
  DataStructureManager(plVar48 + 0x12,8,8,&SUB_18005d5f0);
  FUN_1804dff20(plVar48);
  pcStack_378 = (code *)param_3;
  FUN_1804dd2e0(param_1 + 0x2b20,alStack_248);
  *(uint *)(alStack_248[0] + 8) = uVar4;
  FUN_1802e7dc0(param_3);
  lVar46 = *(int64_t *)(*(int64_t *)(param_1 + 11000) + lVar47 * 8);
  lVar45 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & uVar4) * 0xd8;
  plStack_318 = param_3;
  (**(code **)(*param_3 + 0x28))(param_3);
  plStack_318 = *(int64_t **)(lVar46 + 8 + lVar45);
  *(int64_t **)(lVar46 + 8 + lVar45) = param_3;
  if (plStack_318 != (int64_t *)0x0) {
    (**(code **)(*plStack_318 + 0x38))();
  }
  bVar3 = *(byte *)(param_3 + 0x5d);
  if ((((bVar3 & 1) == 0) || ((bVar3 & 2) == 0)) || ((bVar3 & 8) == 0)) {
    uVar51 = 0;
  }
  else {
    uVar51 = 1;
  }
  *(int8_t *)
   (*(int64_t *)(*(int64_t *)(param_1 + 11000) + lVar47 * 8) + 0x10 +
   (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & uVar4) * 0xd8) = uVar51;
  lVar46 = *(int64_t *)(*(int64_t *)(param_1 + 11000) + lVar47 * 8);
  lVar45 = (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & uVar4) * 0xd8;
  *(int32_t *)(lVar46 + 0x14 + lVar45) = uStack_358;
  piVar1 = (int *)(param_1 + 0x458);
  if ((*(int64_t *)(param_1 + 0x470) - *(int64_t *)(param_1 + 0x468) & 0xfffffffffffffffcU) == 0)
  {
    FUN_1804dd0a0(piVar1);
  }
  plVar48 = plStack_328;
  puVar38 = (uint *)(*(int64_t *)(param_1 + 0x470) + -4);
  uVar4 = *puVar38;
  *(uint **)(param_1 + 0x470) = puVar38;
  iVar50 = *(int *)(param_1 + 0x45c);
  if (*(int *)(param_1 + 0x45c) <= (int)uVar4) {
    iVar50 = uVar4 + 1;
  }
  *(int *)(param_1 + 0x45c) = iVar50;
  lVar47 = *(int64_t *)(*(int64_t *)(param_1 + 0x488) + (int64_t)((int)uVar4 >> 10) * 8);
  lVar39 = (int64_t)(int)(*(uint *)(param_1 + 0x4a8) & uVar4);
  iVar50 = *piVar1;
  *piVar1 = iVar50 + 1;
  *(int *)(lVar47 + lVar39 * 0x48) = iVar50;
  *(uint *)(lVar47 + 4 + lVar39 * 0x48) = uVar4;
  *(uint64_t *)(lVar47 + 8 + lVar39 * 0x48) = 0;
  *(uint64_t *)(lVar47 + 0x10 + lVar39 * 0x48) = 0;
  *(uint64_t *)(lVar47 + 0x18 + lVar39 * 0x48) = 0;
  *(uint64_t *)(lVar47 + 0x20 + lVar39 * 0x48) = 0;
  *(uint64_t *)(lVar47 + 0x28 + lVar39 * 0x48) = 0;
  *(uint64_t *)(lVar47 + 0x30 + lVar39 * 0x48) = 0;
  *(uint64_t *)(lVar47 + 0x38 + lVar39 * 0x48) = 0;
  *(uint64_t *)(lVar47 + 0x40 + lVar39 * 0x48) = 0;
  *(uint *)(lVar46 + 0x18 + lVar45) = uVar4;
  uVar8 = *(int32_t *)((int64_t)param_3 + 0x74);
  lVar39 = param_3[0xf];
  uVar9 = *(int32_t *)((int64_t)param_3 + 0x7c);
  lVar32 = param_3[0x10];
  uVar10 = *(int32_t *)((int64_t)param_3 + 0x84);
  lVar33 = param_3[0x11];
  uVar11 = *(int32_t *)((int64_t)param_3 + 0x8c);
  lVar34 = param_3[0x12];
  uVar12 = *(int32_t *)((int64_t)param_3 + 0x94);
  lVar35 = param_3[0x13];
  uVar13 = *(int32_t *)((int64_t)param_3 + 0x9c);
  lVar36 = param_3[0x14];
  uVar14 = *(int32_t *)((int64_t)param_3 + 0xa4);
  lVar37 = param_3[0x15];
  uVar15 = *(int32_t *)((int64_t)param_3 + 0xac);
  lVar47 = *(int64_t *)(*(int64_t *)(param_1 + 0x488) + (int64_t)((int)uVar4 >> 10) * 8);
  lVar40 = (int64_t)(int)(*(uint *)(param_1 + 0x4a8) & uVar4);
  puVar2 = (int32_t *)(lVar47 + 8 + lVar40 * 0x48);
  *puVar2 = (int)param_3[0xe];
  puVar2[1] = uVar8;
  puVar2[2] = (int)lVar39;
  puVar2[3] = uVar9;
  puVar2 = (int32_t *)(lVar47 + 0x18 + lVar40 * 0x48);
  *puVar2 = (int)lVar32;
  puVar2[1] = uVar10;
  puVar2[2] = (int)lVar33;
  puVar2[3] = uVar11;
  puVar2 = (int32_t *)(lVar47 + 0x28 + lVar40 * 0x48);
  *puVar2 = (int)lVar34;
  puVar2[1] = uVar12;
  puVar2[2] = (int)lVar35;
  puVar2[3] = uVar13;
  puVar2 = (int32_t *)(lVar47 + 0x38 + lVar40 * 0x48);
  *puVar2 = (int)lVar36;
  puVar2[1] = uVar14;
  puVar2[2] = (int)lVar37;
  puVar2[3] = uVar15;
  if (*plStack_328 == 0) {
    *(int32_t *)(lVar46 + 0x1c + lVar45) = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 0x668);
    if ((*(int64_t *)(param_1 + 0x680) - *(int64_t *)(param_1 + 0x678) & 0xfffffffffffffffcU) == 0
       ) {
      FUN_1804dc560(piVar1);
    }
    puVar38 = (uint *)(*(int64_t *)(param_1 + 0x680) + -4);
    uVar4 = *puVar38;
    *(uint **)(param_1 + 0x680) = puVar38;
    iVar50 = *(int *)(param_1 + 0x66c);
    if (*(int *)(param_1 + 0x66c) <= (int)uVar4) {
      iVar50 = uVar4 + 1;
    }
    *(int *)(param_1 + 0x66c) = iVar50;
    lVar47 = *(int64_t *)(*(int64_t *)(param_1 + 0x698) + (int64_t)((int)uVar4 >> 10) * 8);
    lVar39 = (int64_t)(int)(*(uint *)(param_1 + 0x6b8) & uVar4);
    iVar50 = *piVar1;
    *piVar1 = iVar50 + 1;
    *(int *)(lVar47 + lVar39 * 0x30) = iVar50;
    *(uint *)(lVar47 + 4 + lVar39 * 0x30) = uVar4;
    *(uint64_t *)(lVar47 + 8 + lVar39 * 0x30) = 0;
    *(int8_t *)(lVar47 + 0x10 + lVar39 * 0x30) = 0xff;
    *(uint64_t *)(lVar47 + 0x14 + lVar39 * 0x30) = 0xffffffffffffffff;
    *(uint64_t *)(lVar47 + 0x1c + lVar39 * 0x30) = 0xffffffffffffffff;
    *(int32_t *)(lVar47 + 0x24 + lVar39 * 0x30) = 0xffffffff;
    *(int32_t *)(lVar47 + 0x28 + lVar39 * 0x30) = 0xbf800000;
    *(int8_t *)(lVar47 + 0x2c + lVar39 * 0x30) = 0;
    *(uint *)(lVar46 + 0x1c + lVar45) = uVar4;
    *(int64_t *)
     (*(int64_t *)(*(int64_t *)(param_1 + 0x698) + (int64_t)((int)uVar4 >> 10) * 8) + 8 +
     (int64_t)(int)(*(uint *)(param_1 + 0x6b8) & uVar4) * 0x30) = *plVar48;
  }
  if (*plVar48 == 0) {
    plVar44 = *(int64_t **)(lVar46 + 0x98 + lVar45);
    *(uint64_t *)(lVar46 + 0x98 + lVar45) = 0;
    plStack_348 = plVar44;
  }
  else {
    puVar7 = *(void **)(*(int64_t *)(*plVar48 + 0x208) + 0x18);
    puVar41 = &system_buffer_ptr;
    if (puVar7 != (void *)0x0) {
      puVar41 = puVar7;
    }
    lVar47 = strstr(puVar41,&system_data_388c);
    if (lVar47 != 0) {
      puStack_1e8 = &unknown_var_3432_ptr;
      puStack_1e0 = auStack_1d0;
      auStack_1d0[0] = 0;
      uStack_1d8 = 0x16;
      strcpy_s(auStack_1d0,0x80,&unknown_var_2288_ptr);
      pcStack_378 = (code *)0x0;
      puVar42 = (uint64_t *)FUN_1800b32c0(system_resource_state,&plStack_310,&puStack_1e8,1);
      uVar43 = FUN_1800763c0(*puVar42,&uStack_358);
      FUN_180060b80(lVar45 + 0x98 + lVar46,uVar43);
      if ((int64_t *)CONCAT44(uStack_354,uStack_358) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)CONCAT44(uStack_354,uStack_358) + 0x38))();
      }
      if (plStack_310 != (int64_t *)0x0) {
        (**(code **)(*plStack_310 + 0x38))();
      }
      puStack_1e8 = &system_state_ptr;
      goto LAB_1804d5429;
    }
    puVar7 = *(void **)(*(int64_t *)(*plVar48 + 0x208) + 0x18);
    puVar41 = &system_buffer_ptr;
    if (puVar7 != (void *)0x0) {
      puVar41 = puVar7;
    }
    lVar47 = strstr(puVar41,&unknown_var_6724_ptr);
    if (lVar47 != 0) {
      puStack_148 = &unknown_var_3432_ptr;
      puStack_140 = &uStack_130;
      uStack_130 = uStack_130 & 0xffffffffffffff00;
      uStack_138 = CONCAT44((int)((uint64_t)uStack_138 >> 0x20),0x11);
      strcpy_s(&uStack_130,0x80,&unknown_var_2264_ptr);
      pcStack_378 = (code *)0x0;
      puVar42 = (uint64_t *)FUN_1800b32c0(system_resource_state,&plStack_320,&puStack_148,1);
      uVar43 = FUN_1800763c0(*puVar42,&plStack_308);
      FUN_180060b80(lVar45 + 0x98 + lVar46,uVar43);
      if (plStack_308 != (int64_t *)0x0) {
        (**(code **)(*plStack_308 + 0x38))();
      }
      if (plStack_320 != (int64_t *)0x0) {
        (**(code **)(*plStack_320 + 0x38))();
      }
      puStack_148 = &system_state_ptr;
      goto LAB_1804d5429;
    }
    plVar44 = *(int64_t **)(lVar46 + 0x98 + lVar45);
    *(uint64_t *)(lVar46 + 0x98 + lVar45) = 0;
    plStack_368 = plVar44;
  }
  if (plVar44 != (int64_t *)0x0) {
    (**(code **)(*plVar44 + 0x38))();
  }
LAB_1804d5429:
  if (param_5 != '\0') {
    FUN_1802e7dc0(param_3);
    piVar1 = (int *)(param_1 + 0x4b0);
    if ((*(int64_t *)(param_1 + 0x4c8) - *(int64_t *)(param_1 + 0x4c0) & 0xfffffffffffffffcU) == 0
       ) {
      FUN_1804dce60(piVar1);
    }
    puVar38 = (uint *)(*(int64_t *)(param_1 + 0x4c8) + -4);
    uVar4 = *puVar38;
    *(uint **)(param_1 + 0x4c8) = puVar38;
    iVar50 = *(int *)(param_1 + 0x4b4);
    if (*(int *)(param_1 + 0x4b4) <= (int)uVar4) {
      iVar50 = uVar4 + 1;
    }
    *(int *)(param_1 + 0x4b4) = iVar50;
    lVar47 = *(int64_t *)(*(int64_t *)(param_1 + 0x4e0) + (int64_t)((int)uVar4 >> 10) * 8);
    lVar39 = (int64_t)(int)(*(uint *)(param_1 + 0x500) & uVar4) * 0xc0;
    iVar50 = *piVar1;
    *piVar1 = iVar50 + 1;
    *(int *)(lVar47 + lVar39) = iVar50;
    *(uint *)(lVar47 + 4 + lVar39) = uVar4;
    puVar42 = (uint64_t *)(lVar47 + 8 + lVar39);
    *puVar42 = 0;
    puVar42[1] = 0x7f7fffff00000000;
    puVar42 = (uint64_t *)(lVar47 + 0x18 + lVar39);
    *puVar42 = 0;
    puVar42[1] = 0x7f7fffff00000000;
    puVar42 = (uint64_t *)(lVar47 + 0x28 + lVar39);
    *puVar42 = 0;
    puVar42[1] = 0x7f7fffff00000000;
    *(uint64_t *)(lVar47 + 0xb8 + lVar39) = 0;
    puVar42 = (uint64_t *)(lVar47 + 0x38 + lVar39);
    *puVar42 = 0;
    puVar42[1] = 0;
    puVar42 = (uint64_t *)(lVar47 + 0x48 + lVar39);
    *puVar42 = 0;
    puVar42[1] = 0;
    puVar42 = (uint64_t *)(lVar47 + 0x58 + lVar39);
    *puVar42 = 0;
    puVar42[1] = 0;
    puVar42 = (uint64_t *)(lVar47 + 0x68 + lVar39);
    *puVar42 = 0;
    puVar42[1] = 0;
    puVar42 = (uint64_t *)(lVar47 + 0x78 + lVar39);
    *puVar42 = 0;
    puVar42[1] = 0;
    puVar42 = (uint64_t *)(lVar47 + 0x88 + lVar39);
    *puVar42 = 0;
    puVar42[1] = 0;
    puVar2 = (int32_t *)(lVar47 + 0x98 + lVar39);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = (int32_t *)(lVar47 + 0xa8 + lVar39);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(uint *)(lVar46 + 0x20 + lVar45) = uVar4;
    *(short *)((int64_t)param_3 + 0x2b2) = *(short *)((int64_t)param_3 + 0x2b2) + 1;
    lVar47 = *plVar48;
    if (lVar47 == 0) {
      FUN_1801c0d90(param_3);
      puVar42 = (uint64_t *)param_3[5];
      puStack_148 = (void *)*puVar42;
      puStack_140 = (uint64_t *)puVar42[1];
      uStack_138 = puVar42[2];
      uStack_130 = puVar42[3];
      uStack_128 = puVar42[4];
      uStack_120 = puVar42[5];
      uStack_118 = puVar42[6];
      uStack_110 = puVar42[7];
      uStack_108 = puVar42[8];
      uStack_100 = puVar42[9];
      uStack_f8 = puVar42[10];
      uStack_f0 = puVar42[0xb];
      uStack_e8 = puVar42[0xc];
      uStack_e0 = puVar42[0xd];
      uStack_d8 = puVar42[0xe];
      uStack_d0 = puVar42[0xf];
      uStack_c8 = puVar42[0x10];
      uStack_c0 = puVar42[0x11];
      uStack_b8 = puVar42[0x12];
      uStack_b0 = puVar42[0x13];
      uVar43 = puVar42[0x14];
      uVar31 = puVar42[0x15];
      uStack_98 = puVar42[0x16];
      uVar4 = *(uint *)(lVar46 + 0x20 + lVar45);
      lVar47 = (int64_t)(int)(*(uint *)(param_1 + 0x500) & uVar4) * 0xc0 +
               *(int64_t *)(*(int64_t *)(param_1 + 0x4e0) + (int64_t)((int)uVar4 >> 10) * 8);
      *(void **)(lVar47 + 8) = puStack_148;
      *(uint64_t **)(lVar47 + 0x10) = puStack_140;
      *(uint64_t *)(lVar47 + 0x18) = uStack_138;
      *(uint64_t *)(lVar47 + 0x20) = uStack_130;
      *(uint64_t *)(lVar47 + 0x28) = uStack_128;
      *(uint64_t *)(lVar47 + 0x30) = uStack_120;
      *(uint64_t *)(lVar47 + 0x38) = uStack_118;
      *(uint64_t *)(lVar47 + 0x40) = uStack_110;
      *(uint64_t *)(lVar47 + 0x48) = uStack_108;
      *(uint64_t *)(lVar47 + 0x50) = uStack_100;
      *(uint64_t *)(lVar47 + 0x58) = uStack_f8;
      *(uint64_t *)(lVar47 + 0x60) = uStack_f0;
      *(uint64_t *)(lVar47 + 0x68) = uStack_e8;
      *(uint64_t *)(lVar47 + 0x70) = uStack_e0;
      *(uint64_t *)(lVar47 + 0x78) = uStack_d8;
      *(uint64_t *)(lVar47 + 0x80) = uStack_d0;
      *(uint64_t *)(lVar47 + 0x88) = uStack_c8;
      *(uint64_t *)(lVar47 + 0x90) = uStack_c0;
      *(uint64_t *)(lVar47 + 0x98) = uStack_b8;
      *(uint64_t *)(lVar47 + 0xa0) = uStack_b0;
      uStack_a8._0_4_ = (int32_t)uVar43;
      uStack_a8._4_4_ = (int32_t)((uint64_t)uVar43 >> 0x20);
      uStack_a0._0_4_ = (int32_t)uVar31;
      uStack_a0._4_4_ = (int32_t)((uint64_t)uVar31 >> 0x20);
      *(int32_t *)(lVar47 + 0xa8) = (int32_t)uStack_a8;
      *(int32_t *)(lVar47 + 0xac) = uStack_a8._4_4_;
      *(int32_t *)(lVar47 + 0xb0) = (int32_t)uStack_a0;
      *(int32_t *)(lVar47 + 0xb4) = uStack_a0._4_4_;
      *(uint64_t *)(lVar47 + 0xb8) = uStack_98;
      uStack_a8 = uVar43;
      uStack_a0 = uVar31;
    }
    else {
      if ((*(byte *)(lVar47 + 0xa8) & 1) == 0) {
        FUN_1802fac00(lVar47,*(int64_t *)(lVar47 + 0x10) + 0x70,0xbf800000);
        lVar47 = *plVar48;
      }
      fStack_300 = *(float *)(lVar47 + 0x218);
      fStack_2fc = *(float *)(lVar47 + 0x21c);
      fStack_2f8 = *(float *)(lVar47 + 0x220);
      uStack_2f4 = *(int32_t *)(lVar47 + 0x224);
      uStack_334 = *(int32_t *)(lVar47 + 0x234);
      fStack_338 = *(float *)(*(int64_t *)(lVar47 + 0x208) + 0x1ac);
      fStack_2c0 = fStack_300 - fStack_338;
      fStack_2bc = fStack_2fc - fStack_338;
      fStack_2b8 = fStack_2f8 - fStack_338;
      fStack_340 = *(float *)(lVar47 + 0x228) + fStack_338;
      fStack_33c = *(float *)(lVar47 + 0x22c) + fStack_338;
      fStack_338 = *(float *)(lVar47 + 0x230) + fStack_338;
      puVar38 = *(uint **)(lVar47 + 0x18);
      do {
        LOCK();
        uVar4 = *puVar38;
        *puVar38 = *puVar38 | 1;
        UNLOCK();
      } while ((uVar4 & 1) != 0);
      uStack_268 = *(uint64_t *)(puVar38 + 1);
      uStack_260 = *(uint64_t *)(puVar38 + 3);
      fVar16 = (float)puVar38[5];
      fVar17 = (float)puVar38[6];
      fVar18 = (float)puVar38[7];
      uStack_24c = puVar38[8];
      *puVar38 = 0;
      uStack_2b4 = uStack_2f4;
      fStack_2b0 = fStack_340;
      fStack_2ac = fStack_33c;
      fStack_2a8 = fStack_338;
      uStack_2a4 = uStack_334;
      fStack_258 = fVar16;
      fStack_254 = fVar17;
      fStack_250 = fVar18;
      uStack_88 = uStack_268;
      uStack_80 = uStack_260;
      fStack_78 = fVar16;
      fStack_74 = fVar17;
      fStack_70 = fVar18;
      uStack_6c = uStack_24c;
      FUN_1800b9f60(&fStack_2c0);
      uVar4 = *(uint *)(lVar46 + 0x20 + lVar45);
      lVar47 = *(int64_t *)(*(int64_t *)(param_1 + 0x4e0) + (int64_t)((int)uVar4 >> 10) * 8) +
               (int64_t)(int)(*(uint *)(param_1 + 0x500) & uVar4) * 0xc0;
      FUN_18063b5f0(&fStack_2f0,&uStack_268);
      fVar19 = *(float *)(param_3 + 0xe);
      fVar20 = *(float *)((int64_t)param_3 + 0x74);
      fVar21 = *(float *)(param_3 + 0xf);
      fVar22 = *(float *)((int64_t)param_3 + 0x7c);
      fVar23 = *(float *)(param_3 + 0x10);
      fVar24 = *(float *)((int64_t)param_3 + 0x84);
      fVar25 = *(float *)(param_3 + 0x11);
      fVar26 = *(float *)((int64_t)param_3 + 0x8c);
      fVar27 = *(float *)(param_3 + 0x12);
      fVar28 = *(float *)((int64_t)param_3 + 0x94);
      fVar29 = *(float *)(param_3 + 0x13);
      fVar30 = *(float *)((int64_t)param_3 + 0x9c);
      fStack_230 = fStack_2f0 * fVar19 + fStack_2ec * fVar23 + fStack_2e8 * fVar27;
      fStack_22c = fStack_2f0 * fVar20 + fStack_2ec * fVar24 + fStack_2e8 * fVar28;
      fStack_228 = fStack_2f0 * fVar21 + fStack_2ec * fVar25 + fStack_2e8 * fVar29;
      fStack_224 = fStack_2f0 * fVar22 + fStack_2ec * fVar26 + fStack_2e8 * fVar30;
      fStack_220 = fStack_2e0 * fVar19 + fStack_2dc * fVar23 + fStack_2d8 * fVar27;
      fStack_21c = fStack_2e0 * fVar20 + fStack_2dc * fVar24 + fStack_2d8 * fVar28;
      fStack_218 = fStack_2e0 * fVar21 + fStack_2dc * fVar25 + fStack_2d8 * fVar29;
      fStack_214 = fStack_2e0 * fVar22 + fStack_2dc * fVar26 + fStack_2d8 * fVar30;
      fStack_210 = fStack_2d0 * fVar19 + fStack_2cc * fVar23 + fStack_2c8 * fVar27;
      fStack_20c = fStack_2d0 * fVar20 + fStack_2cc * fVar24 + fStack_2c8 * fVar28;
      fStack_208 = fStack_2d0 * fVar21 + fStack_2cc * fVar25 + fStack_2c8 * fVar29;
      fStack_204 = fStack_2d0 * fVar22 + fStack_2cc * fVar26 + fStack_2c8 * fVar30;
      fStack_200 = fVar16 * fVar19 + fVar17 * fVar23 + fVar18 * fVar27 + *(float *)(param_3 + 0x14);
      fStack_1fc = fVar16 * fVar20 + fVar17 * fVar24 + fVar18 * fVar28 +
                   *(float *)((int64_t)param_3 + 0xa4);
      fStack_1f8 = fVar16 * fVar21 + fVar17 * fVar25 + fVar18 * fVar29 + *(float *)(param_3 + 0x15);
      fStack_1f4 = fVar16 * fVar22 + fVar17 * fVar26 + fVar18 * fVar30 +
                   *(float *)((int64_t)param_3 + 0xac);
      FUN_18063ad30(lVar47 + 8,&fStack_2c0,&fStack_230);
    }
  }
  piVar1 = (int *)(param_1 + 0x370);
  if ((*(int64_t *)(param_1 + 0x388) - *(int64_t *)(param_1 + 0x380) & 0xfffffffffffffffcU) == 0)
  {
    FUN_1804dc7a0(piVar1);
  }
  puVar38 = (uint *)(*(int64_t *)(param_1 + 0x388) + -4);
  uVar4 = *puVar38;
  *(uint **)(param_1 + 0x388) = puVar38;
  iVar50 = *(int *)(param_1 + 0x374);
  if (*(int *)(param_1 + 0x374) <= (int)uVar4) {
    iVar50 = uVar4 + 1;
  }
  *(int *)(param_1 + 0x374) = iVar50;
  lVar47 = *(int64_t *)(*(int64_t *)(param_1 + 0x3a0) + (int64_t)((int)uVar4 >> 10) * 8);
  lVar39 = (int64_t)(int)(*(uint *)(param_1 + 0x3c0) & uVar4);
  iVar50 = *piVar1;
  *piVar1 = iVar50 + 1;
  *(int *)(lVar47 + lVar39 * 0xc) = iVar50;
  *(uint *)(lVar47 + 4 + lVar39 * 0xc) = uVar4;
  *(int16_t *)(lVar47 + 8 + lVar39 * 0xc) = 0;
  *(uint *)(lVar46 + 0x24 + lVar45) = uVar4;
  plVar48 = (int64_t *)(param_1 + 200);
  if ((*plVar48 - *(int64_t *)(param_1 + 0xc0) & 0xfffffffffffffffcU) == 0) {
    FUN_1804dc0f0(param_1 + 0xb0);
  }
  uVar4 = *(uint *)(*plVar48 + -4);
  *plVar48 = *plVar48 + -4;
  iVar50 = *(int *)(param_1 + 0xb4);
  if (*(int *)(param_1 + 0xb4) <= (int)uVar4) {
    iVar50 = uVar4 + 1;
  }
  *(int *)(param_1 + 0xb4) = iVar50;
  lVar46 = *(int64_t *)(*(int64_t *)(param_1 + 0xe0) + (int64_t)((int)uVar4 >> 10) * 8);
  lVar45 = (int64_t)(int)(*(uint *)(param_1 + 0x100) & uVar4) * 0x68;
  iVar50 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar50 + 1;
  *(int *)(lVar46 + lVar45) = iVar50;
  *(uint *)(lVar46 + 4 + lVar45) = uVar4;
  plStack_348 = (int64_t *)(lVar45 + 8 + lVar46);
                    // WARNING: Subroutine does not return
  memset(lVar46 + 0x10 + lVar45,0,0x58);
}






// 函数: void FUN_1804d5aa0(int64_t param_1,uint64_t param_2)
void FUN_1804d5aa0(int64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t lVar13;
  
  if (param_2 != 0) {
    lVar3 = *(int64_t *)(param_1 + 0x2b28);
    for (puVar11 = *(uint64_t **)(lVar3 + (param_2 % (uint64_t)*(uint *)(param_1 + 0x2b30)) * 8);
        puVar11 != (uint64_t *)0x0; puVar11 = (uint64_t *)puVar11[2]) {
      if (param_2 == *puVar11) {
        lVar12 = *(int64_t *)(param_1 + 0x2b30);
        goto LAB_1804d5af2;
      }
    }
    lVar12 = *(int64_t *)(param_1 + 0x2b30);
    puVar11 = *(uint64_t **)(lVar3 + lVar12 * 8);
LAB_1804d5af2:
    if (puVar11 != *(uint64_t **)(lVar3 + lVar12 * 8)) {
      uVar4 = *(uint64_t *)(param_2 + 0x78);
      uVar5 = *(uint64_t *)(param_2 + 0x80);
      uVar6 = *(uint64_t *)(param_2 + 0x88);
      uVar7 = *(uint64_t *)(param_2 + 0x90);
      uVar8 = *(uint64_t *)(param_2 + 0x98);
      uVar9 = *(uint64_t *)(param_2 + 0xa0);
      uVar10 = *(uint64_t *)(param_2 + 0xa8);
      lVar13 = *(int64_t *)
                (*(int64_t *)(param_1 + 11000) + (int64_t)((int)(uint)puVar11[1] >> 10) * 8) +
               (int64_t)(int)(*(uint *)(param_1 + 0x2b18) & (uint)puVar11[1]) * 0xd8;
      uVar2 = *(uint *)(lVar13 + 0x18);
      lVar12 = (int64_t)(int)(*(uint *)(param_1 + 0x4a8) & uVar2);
      lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x488) + (int64_t)((int)uVar2 >> 10) * 8);
      puVar1 = (uint64_t *)(lVar3 + 8 + lVar12 * 0x48);
      *puVar1 = *(uint64_t *)(param_2 + 0x70);
      puVar1[1] = uVar4;
      puVar1 = (uint64_t *)(lVar3 + 0x18 + lVar12 * 0x48);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1 = (uint64_t *)(lVar3 + 0x28 + lVar12 * 0x48);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1 = (uint64_t *)(lVar3 + 0x38 + lVar12 * 0x48);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      *(bool *)(lVar13 + 0x10) = (*(byte *)(param_2 + 0x2e8) & 0xb) == 0xb;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




