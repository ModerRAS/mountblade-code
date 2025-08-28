#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part045.c - 9 个函数

// 函数: void FUN_1801b6b70(int64_t *param_1,int64_t param_2)
void FUN_1801b6b70(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  float fVar6;
  uint uVar7;
  int32_t *puVar8;
  int *piVar9;
  int **ppiVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int iVar14;
  uint64_t *puVar15;
  int iVar16;
  uint64_t *puVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t uVar20;
  float fVar21;
  int8_t auStack_388 [32];
  int8_t uStack_368;
  int iStack_358;
  int32_t uStack_354;
  int64_t *plStack_350;
  int iStack_348;
  int iStack_344;
  int32_t uStack_340;
  int32_t uStack_33c;
  int32_t uStack_338;
  int32_t uStack_334;
  int32_t uStack_330;
  void *puStack_328;
  uint64_t *puStack_320;
  int32_t uStack_318;
  uint64_t uStack_310;
  float fStack_2f8;
  float fStack_2f4;
  uint64_t uStack_2f0;
  int64_t *plStack_2e8;
  int64_t *plStack_2e0;
  int *piStack_2d8;
  uint64_t *puStack_2d0;
  int *piStack_2c8;
  int64_t *plStack_2c0;
  uint64_t uStack_2b8;
  void *puStack_2a8;
  int8_t *puStack_2a0;
  int32_t uStack_298;
  int8_t auStack_290 [136];
  uint64_t auStack_208 [24];
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int8_t uStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int32_t uStack_f4;
  int32_t uStack_f0;
  uint64_t uStack_c8;
  
  uStack_2b8 = 0xfffffffffffffffe;
  uStack_c8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_388;
  iVar16 = 0x200;
  if (*(int *)(param_2 + 0x9a34) == 2) {
    iVar16 = 0x400;
  }
  iStack_358 = iVar16;
  plStack_350 = param_1;
  puVar8 = (int32_t *)FUN_1800daa50();
  FUN_180094b30(puVar8,&unknown_var_5712_ptr);
  *puVar8 = 0x20;
  *(uint64_t *)(puVar8 + 0x4706) = 0;
  puVar8[0x4708] = (float)iVar16;
  puVar8[0x4709] = (float)iVar16;
  puVar8[0x470a] = 0;
  puVar8[0x470b] = 0x3f800000;
  lVar19 = 2;
  puVar8[1] = 2;
  puVar8[0x473c] = 0;
  FUN_1801be080(puVar8 + 2);
  puVar8[0x6e] = 0x40008182;
  *(int8_t *)(puVar8 + 9) = 1;
  lVar2 = param_1[0xc170];
  fStack_fc = *(float *)(lVar2 + 0x24) * 0.5;
  fStack_100 = *(float *)(lVar2 + 0x20) * 0.5;
  fStack_104 = -fStack_100;
  fStack_f8 = -fStack_fc;
  uStack_2f0 = system_data_0330._8_8_;
  fStack_2f4 = fStack_fc;
  fStack_2f8 = fStack_100;
  fVar21 = -1e+30;
  iVar16 = 0;
  if (0 < *(int *)(lVar2 + 0x14)) {
    do {
      iVar14 = 0;
      if (0 < *(int *)(lVar2 + 0x18)) {
        plVar1 = (int64_t *)(*(int64_t *)(lVar2 + 0x40) + *(int64_t *)(lVar2 + 0x48) * 8);
        uVar18 = (uint64_t)(iVar16 * 1000);
        do {
          puVar13 = (uint64_t *)
                    (*(int64_t *)(lVar2 + 0x40) + (uVar18 % (uint64_t)*(uint *)(lVar2 + 0x48)) * 8
                    );
          for (piVar9 = (int *)*puVar13; piVar9 != (int *)0x0; piVar9 = *(int **)(piVar9 + 4)) {
            if ((iVar16 == *piVar9) && (iVar14 == piVar9[1])) {
              piStack_2d8 = piVar9;
              puStack_2d0 = puVar13;
              ppiVar10 = &piStack_2d8;
              goto LAB_1801b6d83;
            }
          }
          piStack_2c8 = (int *)*plVar1;
          plStack_2c0 = plVar1;
          ppiVar10 = &piStack_2c8;
LAB_1801b6d83:
          if (*ppiVar10 == (int *)*plVar1) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(int64_t *)(*ppiVar10 + 2);
          }
          fVar6 = *(float *)(lVar11 + 0x7c);
          if (*(float *)(lVar11 + 0x7c) <= fVar21) {
            fVar6 = fVar21;
          }
          fVar21 = fVar6;
          iVar14 = iVar14 + 1;
          uVar18 = uVar18 + 1;
        } while (iVar14 < *(int *)(lVar2 + 0x18));
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(lVar2 + 0x14));
  }
  FUN_180094c20(auStack_208);
  uStack_148 = 0x3f800000;
  uStack_140 = 0;
  uStack_138 = 0x3f80000000000000;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x3f800000;
  uStack_118 = fStack_2f8;
  uStack_114 = fStack_2f4;
  uStack_2f0._0_4_ = 0x43c80000;
  uStack_110 = 0x43c80000;
  uStack_10c = uStack_2f0._4_4_;
  FUN_1802864f0(auStack_208);
  uStack_108 = 0;
  uStack_f4 = 0x3a83126f;
  uStack_f0 = 0x44480000;
  FUN_1802864f0(auStack_208);
  puVar13 = (uint64_t *)(puVar8 + 0xc);
  puVar17 = auStack_208;
  do {
    puVar15 = puVar17;
    puVar12 = puVar13;
    uVar20 = puVar15[1];
    *puVar12 = *puVar15;
    puVar12[1] = uVar20;
    uVar20 = puVar15[3];
    puVar12[2] = puVar15[2];
    puVar12[3] = uVar20;
    uVar20 = puVar15[5];
    puVar12[4] = puVar15[4];
    puVar12[5] = uVar20;
    uVar20 = puVar15[7];
    puVar12[6] = puVar15[6];
    puVar12[7] = uVar20;
    uVar20 = puVar15[9];
    puVar12[8] = puVar15[8];
    puVar12[9] = uVar20;
    uVar20 = puVar15[0xb];
    puVar12[10] = puVar15[10];
    puVar12[0xb] = uVar20;
    uVar20 = puVar15[0xd];
    puVar12[0xc] = puVar15[0xc];
    puVar12[0xd] = uVar20;
    uVar20 = puVar15[0xf];
    puVar12[0xe] = puVar15[0xe];
    puVar12[0xf] = uVar20;
    lVar19 = lVar19 + -1;
    puVar13 = puVar12 + 0x10;
    puVar17 = puVar15 + 0x10;
  } while (lVar19 != 0);
  uVar20 = puVar15[0x11];
  puVar12[0x10] = puVar15[0x10];
  puVar12[0x11] = uVar20;
  uVar20 = puVar15[0x13];
  puVar12[0x12] = puVar15[0x12];
  puVar12[0x13] = uVar20;
  uVar20 = puVar15[0x15];
  puVar12[0x14] = puVar15[0x14];
  puVar12[0x15] = uVar20;
  uVar3 = *(int32_t *)((int64_t)puVar15 + 0xb4);
  uVar4 = *(int32_t *)(puVar15 + 0x17);
  uVar5 = *(int32_t *)((int64_t)puVar15 + 0xbc);
  *(int32_t *)(puVar12 + 0x16) = *(int32_t *)(puVar15 + 0x16);
  *(int32_t *)((int64_t)puVar12 + 0xb4) = uVar3;
  *(int32_t *)(puVar12 + 0x17) = uVar4;
  *(int32_t *)((int64_t)puVar12 + 0xbc) = uVar5;
  FUN_18024b8d0(puVar8);
  puStack_328 = &system_data_buffer_ptr;
  puStack_320 = (uint64_t *)0x0;
  uStack_318 = 0;
  uStack_310 = lVar19;
  puVar13 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13);
  *(int8_t *)puVar13 = 0;
  puStack_320 = puVar13;
  uVar7 = CoreEngineSystemCleanup(puVar13);
  plVar1 = plStack_350;
  iVar14 = iStack_358;
  *puVar13 = 0x5f6e776f64706f74;
  puVar13[1] = 0x73645f6874706564;
  *(int16_t *)(puVar13 + 2) = 0x5f;
  uStack_318 = 0x11;
  iVar16 = (int)plStack_350[0x9d];
  uStack_310._0_4_ = uVar7;
  if (0 < iVar16) {
    if ((iVar16 != -0x11) && (uVar7 < iVar16 + 0x12U)) {
      uStack_368 = 0x13;
      puVar13 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar13,iVar16 + 0x12U,0x10);
      puStack_320 = puVar13;
      uStack_310._0_4_ = CoreEngineSystemCleanup(puVar13);
      iVar16 = (int)plVar1[0x9d];
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar13 + 0x11),plVar1[0x9c],(int64_t)(iVar16 + 1));
  }
  uStack_340 = 1;
  uStack_334 = 0x101018a;
  iStack_348 = iStack_358;
  iStack_344 = iStack_358;
  uStack_33c = 0x19;
  uStack_338 = 0x3f800000;
  uStack_330 = *(int32_t *)(param_2 + 0x1bd4);
  lVar2 = *(int64_t *)(param_2 + 0x3580);
  puStack_2a8 = &unknown_var_3432_ptr;
  puStack_2a0 = auStack_290;
  auStack_290[0] = 0;
  uStack_298 = 0x11;
  puVar17 = (uint64_t *)&system_buffer_ptr;
  if (puVar13 != (uint64_t *)0x0) {
    puVar17 = puVar13;
  }
  uVar20 = strcpy_s(auStack_290,0x80,puVar17);
  lVar19 = *(int64_t *)(lVar2 + 0x648);
  if ((((((lVar19 == 0) || (*(int *)(lVar19 + 0x140) != iVar14)) ||
        (*(int *)(lVar19 + 0x144) != iVar14)) ||
       ((*(int *)(lVar19 + 0x148) != 1 || (*(int *)(lVar19 + 0x14c) != 0x19)))) ||
      ((*(float *)(lVar19 + 0x150) != 1.0 ||
       ((*(char *)(lVar19 + 0x154) != -0x76 || (*(char *)(lVar19 + 0x157) != '\x01')))))) ||
     ((*(char *)(lVar19 + 0x156) != '\x01' || (*(int *)(lVar19 + 0x380) == 0)))) {
    puVar13 = (uint64_t *)FUN_1800b1d80(uVar20,&iStack_358,&puStack_2a8,&iStack_348);
    uVar20 = *puVar13;
    *puVar13 = 0;
    plStack_350 = *(int64_t **)(lVar2 + 0x648);
    *(uint64_t *)(lVar2 + 0x648) = uVar20;
    if (plStack_350 != (int64_t *)0x0) {
      (**(code **)(*plStack_350 + 0x38))();
    }
    if ((int64_t *)CONCAT44(uStack_354,iStack_358) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)CONCAT44(uStack_354,iStack_358) + 0x38))();
    }
  }
  _Thrd_id();
  puStack_2a8 = &system_state_ptr;
  plStack_2e8 = *(int64_t **)(puVar8 + 0x25a4);
  *(uint64_t *)(puVar8 + 0x25a4) = 0;
  if (plStack_2e8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2e8 + 0x38))();
  }
  plVar1 = *(int64_t **)(*(int64_t *)(param_2 + 0x3580) + 0x648);
  if (plVar1 != (int64_t *)0x0) {
    plStack_2e0 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plStack_2e0 = *(int64_t **)(puVar8 + 0x25aa);
  *(int64_t **)(puVar8 + 0x25aa) = plVar1;
  if (plStack_2e0 != (int64_t *)0x0) {
    (**(code **)(*plStack_2e0 + 0x38))();
  }
  if (param_2 == -0x11d00) {
    *(int8_t *)(puVar8 + 0x473d) = 0;
  }
  else {
    FUN_1801c1c40(puVar8 + 0x4740);
    *(int8_t *)(puVar8 + 0x473d) = 1;
  }
  FUN_180304010(*(uint64_t *)(param_2 + 0x3580),puVar8);
  LOCK();
  piVar9 = (int *)(param_2 + 0x11a48);
  iVar16 = *piVar9;
  *piVar9 = *piVar9 + 1;
  UNLOCK();
  *(int32_t **)(param_2 + 0x9a48 + (int64_t)iVar16 * 8) = puVar8;
  uVar20 = *(uint64_t *)(param_2 + 0x9a3c);
  *(uint64_t *)(puVar8 + 0x268d) = *(uint64_t *)(param_2 + 0x9a34);
  *(uint64_t *)(puVar8 + 0x268f) = uVar20;
  puStack_328 = &system_data_buffer_ptr;
  if (puStack_320 == (uint64_t *)0x0) {
    puStack_320 = (uint64_t *)0x0;
    uStack_310 = (uint64_t)uStack_310._4_4_ << 0x20;
    puStack_328 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_c8 ^ (uint64_t)auStack_388);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



uint64_t *
FUN_1801b7270(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((int64_t *)param_1[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[4] + 0x38))();
  }
  if ((int64_t *)param_1[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[3] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  *param_1 = &unknown_var_6232_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b72f0(int64_t param_1)
void FUN_1801b72f0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  int8_t auStack_d8 [32];
  int8_t uStack_b8;
  int64_t *aplStack_a8 [2];
  int64_t *plStack_98;
  void *puStack_90;
  int32_t *puStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  lVar1 = *(int64_t *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x3000) == '\0') {
    puStack_90 = &system_data_buffer_ptr;
    uStack_78 = 0;
    puStack_88 = (int32_t *)0x0;
    uStack_80 = 0;
    puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x22,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_88 = puVar4;
    uVar3 = CoreEngineSystemCleanup(puVar4);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
    *puVar4 = 0x6e657665;
    puVar4[1] = 0x6d2f3a74;
    puVar4[2] = 0x69737369;
    puVar4[3] = 0x612f6e6f;
    puVar4[4] = 0x6569626d;
    puVar4[5] = 0x612f746e;
    puVar4[6] = 0x2f616572;
    puVar4[7] = 0x6961725f;
    *(int16_t *)(puVar4 + 8) = 0x6e;
    uStack_80 = 0x21;
    uStack_b8 = 1;
    puVar5 = (uint64_t *)FUN_180157390(0x6e,aplStack_a8,&puStack_90,lVar1);
    uVar2 = *puVar5;
    *puVar5 = 0;
    plStack_98 = *(int64_t **)(param_1 + 0x18);
    *(uint64_t *)(param_1 + 0x18) = uVar2;
    if (plStack_98 != (int64_t *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    if (aplStack_a8[0] != (int64_t *)0x0) {
      (**(code **)(*aplStack_a8[0] + 0x38))();
    }
    puStack_90 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar4);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b77f0(int64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1801b77f0(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int8_t auStack_1c8 [32];
  code *pcStack_1a8;
  uint64_t uStack_198;
  uint64_t uStack_190;
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  uint64_t uStack_168;
  uint64_t uStack_160;
  uint64_t uStack_148;
  int8_t auStack_138 [192];
  int32_t uStack_78;
  uint64_t uStack_68;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1c8;
  uVar2 = *(uint64_t *)(param_3 + 0xf0);
  uVar3 = *(uint64_t *)(param_3 + 0xf8);
  fVar7 = (float)system_error_code;
  lVar1 = *(int64_t *)(param_1 + 8);
  if (((*(char *)(lVar1 + 0x60b90) != '\0') && (0.9 < *(float *)(lVar1 + 0x3140))) &&
     (*(float *)(param_1 + 0x38 + (int64_t)*(int *)(param_1 + 0x28) * 0x10) <= fVar7 * 1e-05)) {
    uVar5 = *(int *)(param_1 + 0x28) + 1U & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(param_1 + 0x28) = uVar5;
    if (*(char *)(param_1 + 0x2c + (int64_t)(int)uVar5 * 0x10) == '\0') {
      *(int32_t *)(lVar1 + 0x3414) = *(int32_t *)(lVar1 + 0x367c);
      *(int32_t *)(lVar1 + 0x3418) = *(int32_t *)(lVar1 + 0x3678);
      *(int8_t *)(lVar1 + 0x3680) = 0;
      *(uint *)(lVar1 + 0x3674) = *(uint *)(lVar1 + 0x3674) & 0xfffffffd;
      iVar6 = *(int *)(param_1 + 0x28);
    }
    else {
      system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
      system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
      system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
      fVar8 = (float)(system_memory_flags - 1) * 8.381903e-08;
      if (*(int *)(param_1 + 0x28) == 1) {
        pcStack_1a8 = FUN_18004a130;
        FUN_1808fc838(auStack_138,0x30,4,FUN_1801c2890);
        uStack_78 = 0;
                    // WARNING: Subroutine does not return
        AdvancedSystemController(fVar8);
      }
      lVar1 = *(int64_t *)(param_1 + 8);
      *(int32_t *)(lVar1 + 0x3414) = *(int32_t *)(lVar1 + 0x367c);
      *(int32_t *)(lVar1 + 0x3418) = *(int32_t *)(lVar1 + 0x3678);
      *(int8_t *)(lVar1 + 0x3680) = 0;
      *(uint *)(lVar1 + 0x3674) = *(uint *)(lVar1 + 0x3674) & 0xfffffffd;
      lVar1 = *(int64_t *)(param_1 + 8);
      *(int32_t *)(lVar1 + 0x367c) = *(int32_t *)(lVar1 + 0x3414);
      *(float *)(lVar1 + 0x3678) = *(float *)(lVar1 + 0x3418);
      *(float *)(lVar1 + 0x3414) = fVar8;
      *(float *)(lVar1 + 0x3418) = *(float *)(lVar1 + 0x3418) * 45.0;
      *(int8_t *)(lVar1 + 0x3680) = 1;
      *(uint *)(lVar1 + 0x3674) = *(uint *)(lVar1 + 0x3674) & 0xfffffffd;
      system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
      system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
      system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
      iVar6 = *(int *)(param_1 + 0x28);
      if ((iVar6 == 1) && (((char)system_memory_flags - 1U & 1) != 0)) {
        iVar6 = 3;
        *(int32_t *)(param_1 + 0x28) = 3;
      }
    }
    system_memory_flags = system_memory_flags << 0xd ^ system_memory_flags;
    system_memory_flags = system_memory_flags >> 0x11 ^ system_memory_flags;
    system_memory_flags = system_memory_flags << 5 ^ system_memory_flags;
    *(float *)(param_1 + 0x38 + (int64_t)*(int *)(param_1 + 0x28) * 0x10) =
         fVar7 * 1e-05 + *(float *)(param_1 + ((int64_t)*(int *)(param_1 + 0x28) + 3) * 0x10) +
         (float)(system_memory_flags - 1) * 2.3283064e-10 *
         *(float *)(param_1 + 0x34 + (int64_t)iVar6 * 0x10);
  }
  if (((*(int64_t **)(param_1 + 0x18) != (int64_t *)0x0) &&
      (cVar4 = (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x80))(), cVar4 == '\0')) &&
     (0.7 < *(float *)(*(int64_t *)(param_1 + 8) + 0x3140))) {
    (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x60))();
  }
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    uStack_198 = 0x3f800000;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_184 = 0x3f800000;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0x3f800000;
    uStack_16c = 0;
    uStack_168 = uVar2;
    uStack_160 = uVar3;
    FUN_1802ea790(*(int64_t *)(param_1 + 0x10),&uStack_198);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_1c8);
}






// 函数: void FUN_1801b7c30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801b7c30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int32_t *)(lVar1 + 0x30c4) = *(int32_t *)(lVar1 + 0x332c);
  *(int32_t *)(lVar1 + 0x30c8) = *(int32_t *)(lVar1 + 0x3328);
  *(int8_t *)(lVar1 + 0x3330) = 0;
  *(uint *)(lVar1 + 0x3324) = *(uint *)(lVar1 + 0x3324) & 0xfffffffd;
  plVar2 = *(int64_t **)(param_1 + 0x10);
  if (plVar2 != (int64_t *)0x0) {
    lVar1 = *(int64_t *)(param_1 + 8);
    if (plVar2[4] == lVar1) {
      pplStackX_10 = &plStackX_8;
      plStackX_8 = plVar2;
      (**(code **)(*plVar2 + 0x28))();
      pplStackX_18 = &plStackX_8;
      FUN_180198980(lVar1,plStackX_8,param_3,param_4,0x3c);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = *(int64_t **)(param_1 + 0x10);
      *(uint64_t *)(param_1 + 0x10) = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x68))();
    (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x68))();
    plStackX_8 = *(int64_t **)(param_1 + 0x18);
    *(uint64_t *)(param_1 + 0x18) = 0;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(int64_t **)(param_1 + 0x20);
    *(uint64_t *)(param_1 + 0x20) = 0;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}






// 函数: void FUN_1801b7d40(int64_t param_1,int64_t param_2)
void FUN_1801b7d40(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  
  if (*(int64_t *)(param_1 + 0x10) == param_2) {
    plVar1 = *(int64_t **)(param_1 + 0x10);
    *(uint64_t *)(param_1 + 0x10) = 0;
    if (plVar1 != (int64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001801b7d76. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar1 + 0x38))();
      return;
    }
  }
  return;
}



uint64_t *
FUN_1801b7d80(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((int64_t *)param_1[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[3] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  *param_1 = &unknown_var_6232_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801b7df0(int64_t param_1)
void FUN_1801b7df0(int64_t param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int8_t auStack_d8 [32];
  uint64_t uStack_b8;
  int64_t *plStack_a8;
  int64_t *plStack_a0;
  void *puStack_98;
  int32_t *puStack_90;
  int32_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [32];
  uint64_t uStack_38;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  if ((*(int64_t *)(param_1 + 0x10) == 0) &&
     (*(char *)(*(int64_t *)(param_1 + 8) + 0x3000) == '\0')) {
    puVar2 = (uint64_t *)FUN_180198890(*(int64_t *)(param_1 + 8),&plStack_a0,0);
    uVar3 = *puVar2;
    *puVar2 = 0;
    plStack_a8 = *(int64_t **)(param_1 + 0x10);
    *(uint64_t *)(param_1 + 0x10) = uVar3;
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    if (plStack_a0 != (int64_t *)0x0) {
      (**(code **)(*plStack_a0 + 0x38))();
    }
    puStack_70 = &unknown_var_672_ptr;
    puStack_68 = auStack_58;
    auStack_58[0] = 0;
    uStack_60 = 0x12;
    strcpy_s(auStack_58,0x20,&unknown_var_5912_ptr);
    uVar3 = FUN_18020bef0(system_system_data_memory,&puStack_70);
    puStack_70 = &system_state_ptr;
    uStack_b8 = 0;
    FUN_1802ec6e0(*(uint64_t *)(param_1 + 0x10),uVar3,0,1);
    uVar3 = *(uint64_t *)(param_1 + 8);
    puStack_98 = &system_data_buffer_ptr;
    uStack_80 = 0;
    puStack_90 = (int32_t *)0x0;
    uStack_88 = 0;
    puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x27,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_90 = puVar4;
    uVar1 = CoreEngineSystemCleanup(puVar4);
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar1);
    *puVar4 = 0x6e657665;
    puVar4[1] = 0x6d2f3a74;
    puVar4[2] = 0x69737369;
    puVar4[3] = 0x612f6e6f;
    puVar4[4] = 0x6569626d;
    puVar4[5] = 0x612f746e;
    puVar4[6] = 0x2f616572;
    puVar4[7] = 0x6f6e735f;
    puVar4[8] = 0x6f747377;
    *(int16_t *)(puVar4 + 9) = 0x6d72;
    *(int8_t *)((int64_t)puVar4 + 0x26) = 0;
    uStack_88 = 0x26;
    uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    puVar2 = (uint64_t *)FUN_180157390(0x6d72,&plStack_a0,&puStack_98,uVar3);
    uVar3 = *puVar2;
    *puVar2 = 0;
    plStack_a8 = *(int64_t **)(param_1 + 0x18);
    *(uint64_t *)(param_1 + 0x18) = uVar3;
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    if (plStack_a0 != (int64_t *)0x0) {
      (**(code **)(*plStack_a0 + 0x38))();
    }
    puStack_98 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar4);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_d8);
}






// 函数: void FUN_1801b8010(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_1801b8010(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uVar5 = *(int32_t *)(param_3 + 0xf0);
  uVar2 = *(int32_t *)(param_3 + 0xf4);
  uVar6 = *(int32_t *)(param_3 + 0xf8);
  uVar3 = *(int32_t *)(param_3 + 0xfc);
  plVar1 = *(int64_t **)(param_1 + 0x18);
  if ((plVar1 != (int64_t *)0x0) &&
     (cVar4 = (**(code **)(*plVar1 + 0x80))(plVar1,param_2,uVar5,param_4,uVar5,uVar6), cVar4 == '\0'
     )) {
    (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x60))();
  }
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    uStack_48 = 0x3f800000;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0x3f800000;
    uStack_1c = 0;
    uStack_38 = 0;
    uStack_34 = 0x3f800000;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_18 = uVar5;
    uStack_14 = uVar2;
    uStack_10 = uVar6;
    uStack_c = uVar3;
    FUN_1802ea790(*(int64_t *)(param_1 + 0x10),&uStack_48);
  }
  return;
}






// 函数: void FUN_1801b8090(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801b8090(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  
  plVar1 = *(int64_t **)(param_1 + 0x10);
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = *(int64_t *)(param_1 + 8);
    if (plVar1[4] == lVar2) {
      pplStackX_10 = &plStackX_8;
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))();
      pplStackX_18 = &plStackX_8;
      FUN_180198980(lVar2,plStackX_8,param_3,param_4,0x3d);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = *(int64_t **)(param_1 + 0x10);
      *(uint64_t *)(param_1 + 0x10) = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
    }
    (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x68))();
    plStackX_8 = *(int64_t **)(param_1 + 0x18);
    *(uint64_t *)(param_1 + 0x18) = 0;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_1801b8150(int32_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint uVar3;
  int32_t uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  void *puStack_50;
  int32_t *puStack_48;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  *param_1 = 1;
  plVar1 = (int64_t *)(param_1 + 2);
  FUN_1808fc838(plVar1,0x20,0x20,FUN_1801b82f0,FUN_18004a130);
  param_1[0x102] = 0;
  if (plVar1 != (int64_t *)(param_1 + 0x102)) {
    plVar6 = (int64_t *)(param_1 + 4);
    do {
      lVar5 = FUN_180628ca0();
      uVar3 = *(uint *)(lVar5 + 0x10);
      uVar7 = (uint64_t)uVar3;
      if (*(int64_t *)(lVar5 + 8) != 0) {
        CoreEngineDataBufferProcessor(plVar6 + -1,uVar7);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*plVar6,*(uint64_t *)(lVar5 + 8),uVar7);
      }
      *(int32_t *)(plVar6 + 1) = 0;
      if (*plVar6 != 0) {
        *(int8_t *)(uVar7 + *plVar6) = 0;
      }
      *(int32_t *)((int64_t)plVar6 + 0x14) = *(int32_t *)(lVar5 + 0x1c);
      plVar2 = plVar6 + 3;
      plVar6 = plVar6 + 4;
    } while (plVar2 != (int64_t *)(param_1 + 0x102));
  }
  puStack_50 = &system_data_buffer_ptr;
  uStack_38 = 0;
  puStack_48 = (int32_t *)0x0;
  uStack_40 = 0;
  puStack_48 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puStack_48 = 0;
  uVar4 = CoreEngineSystemCleanup(puStack_48);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar4);
  *puStack_48 = 0x65736162;
  *(int8_t *)(puStack_48 + 1) = 0;
  uStack_40 = 4;
  FUN_18005d190(plVar1,&puStack_50);
  puStack_50 = &system_data_buffer_ptr;
  if (puStack_48 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return param_1;
}



uint64_t * FUN_1801b82f0(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  return param_1;
}



uint64_t *
FUN_1801b8340(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar1 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(int32_t *)(param_2 + 3) = 3;
  uVar2 = 1;
  param_1 = param_1 + 8;
  do {
    if (*(int *)(param_1 + 0x10) != 0) {
      if ((uint64_t)param_2[1] < (uint64_t)param_2[2]) {
        param_2[1] = param_2[1] + 0x20;
        CoreEngineDataTransformer();
      }
      else {
        FUN_180059820(param_2,param_1,param_3,param_4,uVar2,uVar3);
      }
    }
    uVar1 = uVar1 + 1;
    param_1 = param_1 + 0x20;
  } while (uVar1 < 0x20);
  return param_2;
}



int FUN_1801b83d0(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_2 + 0x10);
  puVar7 = (uint64_t *)(param_1 + 0x10);
  uVar8 = 0;
  do {
    iVar3 = *(int *)(puVar7 + 1);
    iVar5 = iVar2;
    if (iVar3 == iVar2) {
      if (iVar3 != 0) {
        pbVar4 = (byte *)*puVar7;
        lVar6 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar6;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
LAB_1801b841e:
      if (iVar5 == 0) {
        return 1 << ((byte)uVar8 & 0x1f);
      }
    }
    else if (iVar3 == 0) goto LAB_1801b841e;
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 4;
    if (0x1f < uVar8) {
      return 0;
    }
  } while( true );
}






// 函数: void FUN_1801b8450(uint *param_1,int64_t param_2)
void FUN_1801b8450(uint *param_1,int64_t param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int64_t lVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar7 = param_1 + 4;
  uVar8 = 0;
  do {
    uVar3 = puVar7[2];
    uVar5 = uVar2;
    if (uVar3 == uVar2) {
      if (uVar3 != 0) {
        pbVar4 = *(byte **)puVar7;
        lVar6 = *(int64_t *)(param_2 + 8) - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar6;
          uVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (uVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
LAB_1801b84ae:
      if (uVar5 == 0) {
        *param_1 = *param_1 | 1 << ((byte)uVar8 & 0x1f);
        return;
      }
    }
    else if (uVar3 == 0) goto LAB_1801b84ae;
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 8;
    if (0x1f < uVar8) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




