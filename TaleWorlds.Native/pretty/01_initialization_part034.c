#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 01_initialization_part034.c - 4 个函数

// 函数: void FUN_180064c00(int64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_180064c00(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  uint uVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int8_t *puVar5;
  void *puVar6;
  uint *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int8_t auStack_138 [32];
  int64_t lStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  int32_t uStack_e8;
  uint64_t *puStack_e0;
  uint64_t uStack_d8;
  uint64_t *puStack_d0;
  int8_t uStack_c8;
  uint8_t uStack_c7;
  uint64_t *puStack_b8;
  uint64_t uStack_b0;
  uint uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int8_t uStack_88;
  uint8_t uStack_87;
  int64_t lStack_78;
  uint64_t uStack_70;
  uint uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  uStack_e8 = 0;
  FUN_180057110();
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_2 + 8);
  }
  puStack_b8 = (uint64_t *)0x0;
  uStack_b0 = 0xf;
  uStack_c8 = 0;
  lVar10 = -1;
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (puVar6[lVar12] != '\0');
  FUN_1800671b0(&uStack_c8);
  puVar6 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar6 = *(void **)(param_3 + 8);
  }
  lStack_78 = 0;
  uStack_70 = 0xf;
  uStack_88 = 0;
  do {
    lVar10 = lVar10 + 1;
  } while (puVar6[lVar10] != '\0');
  FUN_1800671b0(&uStack_88,puVar6,lVar10);
  lVar12 = lStack_78;
  uVar1 = uStack_a8;
  uStack_98 = 0;
  uStack_90 = 0xf;
  uStack_a8 = uStack_a8 & 0xffffff00;
  lVar10 = CONCAT71(uStack_87,uStack_88);
  uVar9 = CONCAT44(uStack_a4,uVar1) & 0xffffffffffffff00;
  puVar5 = &uStack_c8;
  if (0xf < uStack_b0) {
    puVar5 = (int8_t *)CONCAT71(uStack_c7,uStack_c8);
  }
  lStack_118 = lStack_78;
  puVar3 = (uint64_t *)FUN_180066f90(puVar5,puStack_b8);
  puStack_e0 = puVar3;
  if (puVar3 == (uint64_t *)0xffffffffffffffff) {
    if (0xf < uStack_90) {
      uVar8 = uStack_90 + 1;
      uVar13 = uVar9;
      if (0xfff < uVar8) {
        uVar8 = uStack_90 + 0x28;
        uVar13 = *(uint64_t *)(uVar9 - 8);
        if (0x1f < (uVar9 - uVar13) - 8) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(uVar13,uVar8);
    }
    uStack_98 = 0;
    uStack_90 = 0xf;
    uStack_a8 = uStack_a8 & 0xffffff00;
    if (0xf < uStack_70) {
      uVar9 = uStack_70 + 1;
      lVar12 = lVar10;
      if (0xfff < uVar9) {
        uVar9 = uStack_70 + 0x28;
        lVar12 = *(int64_t *)(lVar10 + -8);
        if (0x1f < (lVar10 - lVar12) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar12,uVar9);
    }
    lStack_78 = 0;
    uStack_70 = 0xf;
    uStack_88 = 0;
    if (0xf < uStack_b0) {
      uVar9 = uStack_b0 + 1;
      lVar12 = CONCAT71(uStack_c7,uStack_c8);
      lVar10 = lVar12;
      if (0xfff < uVar9) {
        uVar9 = uStack_b0 + 0x28;
        lVar10 = *(int64_t *)(lVar12 + -8);
        if (0x1f < (lVar12 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar10,uVar9);
    }
    puStack_b8 = (uint64_t *)0x0;
    uStack_b0 = 0xf;
    uStack_c8 = 0;
                    // WARNING: Subroutine does not return
    SystemDataManager(uStack_48 ^ (uint64_t)auStack_138);
  }
  uStack_58 = 0;
  uStack_50 = 0xf;
  uStack_68 = uStack_68 & 0xffffff00;
  puVar4 = puVar3;
  if (puStack_b8 < puVar3) {
    puVar4 = puStack_b8;
  }
  puVar5 = &uStack_c8;
  if (0xf < uStack_b0) {
    puVar5 = (int8_t *)CONCAT71(uStack_c7,uStack_c8);
  }
  FUN_1800671b0(&uStack_68,puVar5,puVar4);
  uStack_e8 = 1;
  FUN_180067070(&uStack_a8);
  uVar9 = uStack_58;
  uVar1 = uStack_68;
  uStack_a8 = uStack_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  uStack_90 = uStack_50;
  uStack_e8 = 0;
  uStack_58 = 0;
  uStack_50 = 0xf;
  uStack_68 = uStack_68 & 0xffffff00;
  uStack_98 = uVar9;
  if (uVar9 == 0) goto LAB_180065009;
  lVar10 = 0;
  puStack_108 = &system_data_buffer_ptr;
  uStack_f0 = 0;
  puStack_100 = (int8_t *)0x0;
  uStack_f8 = 0;
  uStack_98._0_4_ = (int)uVar9;
  iVar2 = (int)uStack_98;
  uStack_98 = uVar9;
  SystemConfigController(&puStack_108,uVar9 & 0xffffffff);
  if (iVar2 != 0) {
    puVar7 = &uStack_a8;
    if (0xf < uStack_90) {
      puVar7 = (uint *)CONCAT44(uStack_64,uVar1);
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_100,puVar7,uVar9 & 0xffffffff);
  }
  uStack_f8 = 0;
  if (puStack_100 != (int8_t *)0x0) {
    *puStack_100 = 0;
  }
  puVar4 = (uint64_t *)param_1[1];
  if (puVar4 < (uint64_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar4 + 4);
    *puVar4 = &system_state_ptr;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *puVar4 = &system_data_buffer_ptr;
    puVar4[3] = 0;
    puVar4[1] = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    *(int32_t *)(puVar4 + 2) = 0;
    puVar4[1] = puStack_100;
    *(int32_t *)((int64_t)puVar4 + 0x1c) = uStack_f0._4_4_;
    *(int32_t *)(puVar4 + 3) = (int32_t)uStack_f0;
    uStack_f8 = 0;
    puStack_100 = (int8_t *)0x0;
    uStack_f0 = 0;
    puStack_e0 = puVar4;
  }
  else {
    lVar12 = *param_1;
    lVar11 = (int64_t)puVar4 - lVar12 >> 5;
    if (lVar11 == 0) {
      lVar11 = 1;
LAB_180064eed:
      lVar10 = SystemMemoryManager(system_memory_pool_ptr,lVar11 << 5,(char)param_1[3]);
      puVar4 = (uint64_t *)param_1[1];
      lVar12 = *param_1;
    }
    else {
      lVar11 = lVar11 * 2;
      if (lVar11 != 0) goto LAB_180064eed;
    }
    puStack_d0 = (uint64_t *)FUN_180059780(lVar12,puVar4,lVar10);
    *puStack_d0 = &system_state_ptr;
    puStack_d0[1] = 0;
    *(int32_t *)(puStack_d0 + 2) = 0;
    *puStack_d0 = &system_data_buffer_ptr;
    puStack_d0[3] = 0;
    puStack_d0[1] = 0;
    *(int32_t *)(puStack_d0 + 2) = 0;
    *(int32_t *)(puStack_d0 + 2) = uStack_f8;
    puStack_d0[1] = puStack_100;
    *(int32_t *)((int64_t)puStack_d0 + 0x1c) = uStack_f0._4_4_;
    *(int32_t *)(puStack_d0 + 3) = (int32_t)uStack_f0;
    uStack_f8 = 0;
    puStack_100 = (int8_t *)0x0;
    uStack_f0 = 0;
    puVar14 = puStack_d0 + 4;
    puVar3 = (uint64_t *)param_1[1];
    puVar4 = (uint64_t *)*param_1;
    if (puVar4 != puVar3) {
      do {
        (**(code **)*puVar4)(puVar4,0);
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar3);
      puVar4 = (uint64_t *)*param_1;
    }
    if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      SystemCoreProcessor(puVar4);
    }
    *param_1 = lVar10;
    param_1[1] = (int64_t)puVar14;
    param_1[2] = lVar11 * 0x20 + lVar10;
    lVar12 = lStack_78;
    puVar3 = puStack_e0;
  }
  puStack_108 = &system_data_buffer_ptr;
  if (puStack_100 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  puStack_100 = (int8_t *)0x0;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  puStack_108 = &system_state_ptr;
LAB_180065009:
  puVar4 = (uint64_t *)(lVar12 + (int64_t)puVar3);
  if (puStack_b8 < (uint64_t *)(lVar12 + (int64_t)puVar3)) {
    puVar4 = puStack_b8;
  }
  puVar5 = &uStack_c8;
  if (0xf < uStack_b0) {
    puVar5 = (int8_t *)CONCAT71(uStack_c7,uStack_c8);
  }
  puStack_b8 = (uint64_t *)((int64_t)puStack_b8 - (int64_t)puVar4);
                    // WARNING: Subroutine does not return
  memmove(puVar5,puVar5 + (int64_t)puVar4,(int64_t)puStack_b8 + 1);
}



// WARNING: Removing unreachable block (ram,0x0001800654e7)
// WARNING: Removing unreachable block (ram,0x0001800654f0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180065160(uint64_t param_1)
void FUN_180065160(uint64_t param_1)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  char cVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  byte *pbVar13;
  int64_t lVar14;
  int iVar15;
  void *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  uint64_t *puVar19;
  int32_t uVar20;
  int8_t auStack_368 [32];
  void *puStack_348;
  int16_t auStack_338 [2];
  int16_t auStack_334 [2];
  void *puStack_330;
  int64_t lStack_328;
  int iStack_320;
  uint64_t uStack_318;
  int32_t uStack_310;
  void *puStack_308;
  void *puStack_300;
  int32_t uStack_2f8;
  uint64_t uStack_2f0;
  void *puStack_2e8;
  void *puStack_2e0;
  int32_t uStack_2d8;
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  void *puStack_2c0;
  uint64_t uStack_2b8;
  int32_t uStack_2b0;
  uint64_t uStack_2a8;
  void *puStack_2a0;
  char *pcStack_298;
  int iStack_290;
  int32_t uStack_288;
  uint64_t uStack_280;
  int64_t lStack_278;
  int64_t lStack_268;
  uint64_t *puStack_260;
  uint64_t *puStack_258;
  uint64_t uStack_250;
  int32_t uStack_248;
  void *puStack_240;
  int64_t lStack_238;
  int32_t uStack_228;
  uint64_t *puStack_220;
  uint64_t *puStack_218;
  uint64_t uStack_210;
  int32_t uStack_208;
  void *puStack_200;
  void *puStack_1f8;
  int32_t uStack_1e8;
  void *puStack_1e0;
  void *puStack_1d8;
  int32_t uStack_1c8;
  void *puStack_1c0;
  void *puStack_1b8;
  int32_t uStack_1a8;
  void *puStack_1a0;
  void *puStack_198;
  int32_t uStack_188;
  void *puStack_180;
  void *puStack_178;
  int32_t uStack_168;
  uint64_t *puStack_160;
  uint64_t *puStack_158;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint64_t *puStack_140;
  uint64_t *puStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [16];
  void *puStack_f0;
  int8_t *puStack_e8;
  int32_t uStack_e0;
  int8_t auStack_d8 [16];
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  uint8_t auStack_b0 [40];
  int32_t auStack_88 [14];
  uint64_t uStack_50;
  uint64_t uStack_38;
  
  uStack_120 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_368;
  uStack_310 = 0;
  FUN_180627e10(param_1,&puStack_180,&unknown_var_816_ptr);
  uStack_280 = 0;
  lStack_278 = 0;
  puVar16 = &system_buffer_ptr;
  if (puStack_178 != (void *)0x0) {
    puVar16 = puStack_178;
  }
  uVar20 = FUN_18062dee0(&uStack_280,puVar16,&unknown_var_572_ptr);
  puStack_330 = &system_data_buffer_ptr;
  uStack_318 = 0;
  lStack_328 = 0;
  iStack_320 = 0;
  FUN_180052020(uVar20,&puStack_200);
  if ((system_cache_buffer == (int64_t *)0x0) ||
     (cVar7 = (**(code **)(*system_cache_buffer + 0x28))(), cVar7 == '\0')) {
    puVar16 = &unknown_var_832_ptr;
  }
  else {
    lVar9 = (**(code **)(init_system_data_memory + 0x30))();
    puVar16 = &system_buffer_ptr;
    if (*(void **)(lVar9 + 8) != (void *)0x0) {
      puVar16 = *(void **)(lVar9 + 8);
    }
  }
  DataValidator(&puStack_1c0,puVar16);
  if ((system_cache_buffer == (int64_t *)0x0) ||
     (cVar7 = (**(code **)(*system_cache_buffer + 0x28))(), cVar7 == '\0')) {
    puVar16 = &unknown_var_856_ptr;
  }
  else {
    lVar9 = (**(code **)(init_system_data_memory + 0x20))();
    puVar16 = &system_buffer_ptr;
    if (*(void **)(lVar9 + 8) != (void *)0x0) {
      puVar16 = *(void **)(lVar9 + 8);
    }
  }
  DataValidator(&puStack_1e0,puVar16);
  puStack_c8 = &unknown_var_672_ptr;
  puStack_c0 = auStack_b0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  uStack_310 = 4;
  FUN_18004b860(&puStack_c8,&unknown_var_4576_ptr,0x130a7);
  puStack_348 = &system_buffer_ptr;
  if (puStack_c0 != (void *)0x0) {
    puStack_348 = puStack_c0;
  }
  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_48_ptr,&unknown_var_160_ptr);
  uStack_310 = 0;
  puStack_c8 = &system_state_ptr;
  puStack_348 = &unknown_var_184_ptr;
  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_48_ptr,&unknown_var_192_ptr);
  puStack_348 = &system_memory_ba28;
  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_48_ptr,&unknown_var_96_ptr);
  puStack_348 = &system_buffer_ptr;
  if (puStack_1b8 != (void *)0x0) {
    puStack_348 = puStack_1b8;
  }
  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_48_ptr,&unknown_var_144_ptr);
  puStack_348 = &system_buffer_ptr;
  if (puStack_1d8 != (void *)0x0) {
    puStack_348 = puStack_1d8;
  }
  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_48_ptr,&unknown_var_128_ptr);
  puStack_1e0 = &system_data_buffer_ptr;
  if (puStack_1d8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  puStack_1d8 = (void *)0x0;
  uStack_1c8 = 0;
  puStack_1e0 = &system_state_ptr;
  puStack_1c0 = &system_data_buffer_ptr;
  if (puStack_1b8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  puStack_1b8 = (void *)0x0;
  uStack_1a8 = 0;
  puStack_1c0 = &system_state_ptr;
  puStack_2c0 = &system_data_buffer_ptr;
  uStack_2a8 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  puStack_2e8 = &system_data_buffer_ptr;
  uStack_2d0 = 0;
  puStack_2e0 = (void *)0x0;
  uStack_2d8 = 0;
  puStack_308 = &system_data_buffer_ptr;
  uStack_2f0 = 0;
  puStack_300 = (void *)0x0;
  uStack_2f8 = 0;
  uVar10 = FUN_180623ce0();
  System_DataHandler(&puStack_2e8,&unknown_var_808_ptr,uVar10 / 0x100000 & 0xffffffff);
  auStack_88[0] = 0x48;
  uVar11 = GetCurrentProcess();
  iVar8 = K32GetProcessMemoryInfo(uVar11,auStack_88,0x48);
  uVar10 = 0;
  if (iVar8 != 0) {
    uVar10 = uStack_50;
  }
  System_DataHandler(&puStack_308,&unknown_var_808_ptr,uVar10 / 0x100000 & 0xffffffff);
  puStack_348 = &system_buffer_ptr;
  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_48_ptr,&unknown_var_896_ptr);
  puStack_348 = &system_buffer_ptr;
  if (puStack_2e0 != (void *)0x0) {
    puStack_348 = puStack_2e0;
  }
  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_48_ptr,&unknown_var_920_ptr);
  puStack_348 = &system_buffer_ptr;
  if (puStack_300 != (void *)0x0) {
    puStack_348 = puStack_300;
  }
  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_48_ptr,&unknown_var_936_ptr);
  lVar9 = system_main_module_state;
  puStack_308 = &system_data_buffer_ptr;
  if (puStack_300 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  puStack_300 = (void *)0x0;
  uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
  puStack_308 = &system_state_ptr;
  puStack_2e8 = &system_data_buffer_ptr;
  if (puStack_2e0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  puStack_2e0 = (void *)0x0;
  uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
  puStack_2e8 = &system_state_ptr;
  uStack_2b8 = 0;
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  puStack_2c0 = &system_state_ptr;
  lVar14 = init_system_data_memory;
  if (init_system_data_memory == 0) {
    QueryPerformanceCounter(&lStack_268);
    lVar14 = lStack_268;
  }
  puStack_348 = (void *)
                ((double)(lVar14 - init_system_data_memory) * init_system_data_memory - *(double *)(lVar9 + 0x210));
  System_DataHandler(&puStack_330,&unknown_var_968_ptr,&unknown_var_48_ptr,&unknown_var_952_ptr);
  puStack_348 = &system_buffer_ptr;
  if (puStack_1f8 != (void *)0x0) {
    puStack_348 = puStack_1f8;
  }
  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_48_ptr,&unknown_var_112_ptr);
  puStack_220 = (uint64_t *)0x0;
  puStack_218 = (uint64_t *)0x0;
  uStack_210 = 0;
  uStack_208 = 3;
  puStack_160 = (uint64_t *)0x0;
  puStack_158 = (uint64_t *)0x0;
  uStack_150 = 0;
  uStack_148 = 3;
  puStack_f0 = &system_config_ptr;
  puStack_e8 = auStack_d8;
  auStack_d8[0] = 0;
  uStack_e0 = 9;
  strcpy_s(auStack_d8,0x10,&unknown_var_984_ptr);
  FUN_180064c00(&puStack_160,&puStack_200,&puStack_f0);
  puVar18 = puStack_158;
  puVar19 = puStack_160;
  if (1 < (uint64_t)((int64_t)puStack_158 - (int64_t)puStack_160 >> 5)) {
    puStack_118 = &system_config_ptr;
    puStack_110 = auStack_100;
    auStack_100[0] = 0;
    uStack_108 = 1;
    strcpy_s(auStack_100,0x10,&system_memory_df28);
    FUN_180064c00(&puStack_220,puVar19 + 4,&puStack_118);
    puStack_118 = &system_state_ptr;
  }
  puStack_f0 = &system_state_ptr;
  puVar4 = puStack_220;
  for (puVar17 = puVar19; puStack_220 = puVar4, puVar17 != puVar18; puVar17 = puVar17 + 4) {
    (**(code **)*puVar17)(puVar17,0);
    puVar4 = puStack_220;
  }
  if (puVar19 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    SystemCoreProcessor(puVar19);
  }
  uVar10 = (int64_t)puStack_218 - (int64_t)puVar4 >> 5;
  if (uVar10 != 0) {
    if ((system_cache_buffer == (int64_t *)0x0) ||
       (cVar7 = (**(code **)(*system_cache_buffer + 0x28))(), cVar7 == '\0')) {
      puVar16 = &unknown_var_1000_ptr;
    }
    else {
      lVar9 = (**(code **)(init_system_data_memory + 0x28))();
      puVar16 = &system_buffer_ptr;
      if (*(void **)(lVar9 + 8) != (void *)0x0) {
        puVar16 = *(void **)(lVar9 + 8);
      }
    }
    DataValidator(&puStack_240,puVar16);
    puStack_260 = (uint64_t *)0x0;
    puStack_258 = (uint64_t *)0x0;
    uStack_250 = 0;
    uStack_248 = 3;
    auStack_338[0] = 10;
    if (lStack_238 != 0) {
      FUN_180057980(&puStack_240,&puStack_260,auStack_338);
    }
    uVar12 = (int64_t)puStack_258 - (int64_t)puStack_260 >> 5;
    puVar19 = puStack_260;
    puVar18 = puStack_260;
    puVar17 = puStack_258;
    if ((int)uVar12 != 0) {
      uStack_2c8 = uVar12 & 0xffffffff;
      do {
        puStack_140 = (uint64_t *)0x0;
        puStack_138 = (uint64_t *)0x0;
        uStack_130 = 0;
        uStack_128 = 3;
        auStack_334[0] = 0x23;
        if (puVar19[1] != 0) {
          FUN_180057980(puVar19,&puStack_140,auStack_334);
        }
        puVar5 = puStack_138;
        puVar17 = puStack_140;
        puVar18 = puStack_140;
        if (((int64_t)puStack_138 - (int64_t)puStack_140 & 0xffffffffffffffe0U) == 0x40) {
          FUN_180627ae0(&puStack_2a0,puStack_140);
          if (pcStack_298 != (char *)0x0) {
            iStack_290 = 0;
            lVar14 = 0;
            lVar9 = 0;
            cVar7 = *pcStack_298;
            while (cVar7 != '\0') {
              if (' ' < pcStack_298[lVar9]) {
                if (lVar14 != lVar9) {
                  pcStack_298[lVar14] = pcStack_298[lVar9];
                }
                iStack_290 = iStack_290 + 1;
                lVar14 = lVar14 + 1;
              }
              lVar9 = lVar9 + 1;
              cVar7 = pcStack_298[lVar9];
            }
            pcStack_298[lVar14] = '\0';
          }
          iVar8 = 0;
          if (uVar10 != 0) {
            puVar18 = puVar4 + 1;
            do {
              iVar2 = *(int *)(puVar18 + 1);
              iVar15 = iStack_290;
              if (iVar2 == iStack_290) {
                if (iVar2 != 0) {
                  pbVar13 = (byte *)*puVar18;
                  lVar9 = (int64_t)pcStack_298 - (int64_t)pbVar13;
                  do {
                    pbVar1 = pbVar13 + lVar9;
                    iVar15 = (uint)*pbVar13 - (uint)*pbVar1;
                    if (iVar15 != 0) break;
                    pbVar13 = pbVar13 + 1;
                  } while (*pbVar1 != 0);
                }
LAB_180065a3e:
                if (iVar15 == 0) {
                  puStack_348 = &system_buffer_ptr;
                  if ((void *)puVar17[5] != (void *)0x0) {
                    puStack_348 = (void *)puVar17[5];
                  }
                  puVar16 = &system_buffer_ptr;
                  if ((void *)puVar17[1] != (void *)0x0) {
                    puVar16 = (void *)puVar17[1];
                  }
                  System_DataHandler(&puStack_330,&unknown_var_880_ptr,&unknown_var_1016_ptr,puVar16);
                  break;
                }
              }
              else if (iVar2 == 0) goto LAB_180065a3e;
              iVar8 = iVar8 + 1;
              puVar18 = puVar18 + 4;
            } while ((uint64_t)(int64_t)iVar8 < uVar10);
          }
          puStack_2a0 = &system_data_buffer_ptr;
          if (pcStack_298 != (char *)0x0) {
                    // WARNING: Subroutine does not return
            SystemCoreProcessor();
          }
          pcStack_298 = (char *)0x0;
          uStack_288 = 0;
          puStack_2a0 = &system_state_ptr;
          for (puVar18 = puVar17; puVar18 != puVar5; puVar18 = puVar18 + 4) {
            (**(code **)*puVar18)(puVar18,0);
          }
        }
        else {
          for (; puVar18 != puVar5; puVar18 = puVar18 + 4) {
            (**(code **)*puVar18)(puVar18,0);
          }
        }
        if (puVar17 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          SystemCoreProcessor(puVar17);
        }
        puVar19 = puVar19 + 4;
        uStack_2c8 = uStack_2c8 - 1;
      } while (uStack_2c8 != 0);
      uStack_2c8 = 0;
      puVar19 = puStack_260;
      puVar18 = puStack_260;
      puVar17 = puStack_258;
    }
    for (; puVar6 = puStack_258, puVar5 = puStack_260, puVar19 != puStack_258; puVar19 = puVar19 + 4
        ) {
      puStack_260 = puVar18;
      puStack_258 = puVar17;
      (**(code **)*puVar19)(puVar19,0);
      puVar18 = puStack_260;
      puVar17 = puStack_258;
      puStack_258 = puVar6;
      puStack_260 = puVar5;
    }
    if (puStack_260 != (uint64_t *)0x0) {
      puStack_260 = puVar18;
      puStack_258 = puVar17;
                    // WARNING: Subroutine does not return
      SystemCoreProcessor(puVar5);
    }
    puStack_240 = &system_data_buffer_ptr;
    if (lStack_238 != 0) {
      puStack_260 = puVar18;
      puStack_258 = puVar17;
                    // WARNING: Subroutine does not return
      SystemCoreProcessor();
    }
    lStack_238 = 0;
    uStack_228 = 0;
    puStack_240 = &system_state_ptr;
    puStack_260 = puVar18;
    puStack_258 = puVar17;
  }
  if ((init_system_data_memory == 0) || (*(int *)(system_main_module_state + 0x340) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((system_main_module_state != 0) && (*(int *)(system_main_module_state + 0x340) == 1)) && (bVar3)) {
    lVar9 = (**(code **)(init_system_data_memory + 0x18))();
    puVar16 = &system_buffer_ptr;
    if (*(void **)(lVar9 + 8) != (void *)0x0) {
      puVar16 = *(void **)(lVar9 + 8);
    }
    DataValidator(&puStack_1a0,puVar16);
    puVar16 = &system_buffer_ptr;
    if (puStack_198 != (void *)0x0) {
      puVar16 = puStack_198;
    }
    System_DataHandler(&puStack_330,&unknown_var_552_ptr,puVar16);
    puStack_1a0 = &system_data_buffer_ptr;
    if (puStack_198 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      SystemCoreProcessor();
    }
    puStack_198 = (void *)0x0;
    uStack_188 = 0;
    puStack_1a0 = &system_state_ptr;
  }
  lVar9 = lStack_278;
  fwrite(lStack_328,1,(int64_t)iStack_320,lStack_278);
  puVar19 = puStack_218;
  puVar18 = puVar4;
  if (lVar9 != 0) {
    fclose(lVar9);
    lStack_278 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar9 = 0;
    puVar4 = puStack_220;
    puVar19 = puStack_218;
    puVar18 = puStack_220;
  }
  for (; puVar17 = puStack_218, puVar4 != puStack_218; puVar4 = puVar4 + 4) {
    puStack_218 = puVar19;
    (**(code **)*puVar4)(puVar4,0);
    puVar19 = puStack_218;
    puStack_218 = puVar17;
  }
  if (puVar18 != (uint64_t *)0x0) {
    puStack_218 = puVar19;
                    // WARNING: Subroutine does not return
    SystemCoreProcessor(puVar18);
  }
  puStack_200 = &system_data_buffer_ptr;
  if (puStack_1f8 != (void *)0x0) {
    puStack_218 = puVar19;
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  puStack_1f8 = (void *)0x0;
  uStack_1e8 = 0;
  puStack_200 = &system_state_ptr;
  puStack_330 = &system_data_buffer_ptr;
  if (lStack_328 == 0) {
    lStack_328 = 0;
    uStack_318 = uStack_318 & 0xffffffff00000000;
    puStack_330 = &system_state_ptr;
    puStack_218 = puVar19;
    if (lVar9 != 0) {
      fclose(lVar9);
      lStack_278 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
    puStack_180 = &system_data_buffer_ptr;
    if (puStack_178 == (void *)0x0) {
      puStack_178 = (void *)0x0;
      uStack_168 = 0;
      puStack_180 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      SystemDataManager(uStack_38 ^ (uint64_t)auStack_368);
    }
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  puStack_218 = puVar19;
                    // WARNING: Subroutine does not return
  SystemCoreProcessor();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180065d50(void)
void FUN_180065d50(void)

{
  int8_t auStack_2c8 [104];
  uint64_t uStack_260;
  uint64_t uStack_258;
  int32_t uStack_250;
  int32_t uStack_24c;
  int32_t uStack_248;
  int32_t uStack_244;
  int32_t uStack_240;
  int32_t uStack_23c;
  int32_t uStack_238;
  int32_t uStack_234;
  int32_t uStack_230;
  int8_t uStack_22c;
  int8_t auStack_228 [512];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2c8;
  uStack_230 = 0x22657865;
  uStack_260 = 0x736172435c2e2e22;
  uStack_258 = 0x6564616f6c705568;
  uStack_22c = 0;
  uStack_240 = 0x616f6c70;
  uStack_23c = 0x2e726564;
  uStack_238 = 0x6c627550;
  uStack_234 = 0x2e687369;
  uStack_250 = 0x75502e72;
  uStack_24c = 0x73696c62;
  uStack_248 = 0x72435c68;
  uStack_244 = 0x55687361;
                    // WARNING: Subroutine does not return
  memset(auStack_228,0,0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180065f00(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180065f00(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plStack_b0;
  void *puStack_a8;
  int64_t lStack_a0;
  uint uStack_98;
  void *puStack_88;
  int64_t lStack_80;
  int32_t uStack_70;
  void **ppuStack_68;
  int64_t **pplStack_60;
  int32_t uStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plStack_b0 = *(int64_t **)(init_system_data_memory + 0x18);
  FUN_180627ae0(&puStack_a8,system_main_module_state + 0x170,param_3,param_4,0);
  iVar5 = uStack_98 + 3;
  SystemConfigController(&puStack_a8,iVar5);
  *(int32_t *)((uint64_t)uStack_98 + lStack_a0) = 0x706d74;
  uStack_98 = iVar5;
  cVar2 = FUN_180624a00(&puStack_a8);
  if (cVar2 == '\0') {
    FUN_180624910(&puStack_a8);
  }
  ppuStack_68 = &puStack_a8;
  pplStack_60 = &plStack_b0;
  FUN_180066140(&ppuStack_68,SYSTEM_STATE_MANAGER,&system_memory_c7d8);
  FUN_180066140(&ppuStack_68,init_system_data_memory,&system_memory_cfc0);
  pcVar1 = *(code **)(*plStack_b0 + 0x40);
  uVar3 = FUN_180627ae0(&ppuStack_68,system_message_context + 0x28);
  (*pcVar1)(plStack_b0,uVar3);
  ppuStack_68 = (void **)&system_data_buffer_ptr;
  if (pplStack_60 != (int64_t **)0x0) {
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  pplStack_60 = (int64_t **)0x0;
  uStack_50 = 0;
  ppuStack_68 = (void **)&system_state_ptr;
  pcVar1 = *(code **)(*plStack_b0 + 0x40);
  uVar3 = FUN_180627ae0(&puStack_88,system_message_context + 0xe0);
  (*pcVar1)(plStack_b0,uVar3);
  puStack_88 = &system_data_buffer_ptr;
  if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  lStack_80 = 0;
  uStack_70 = 0;
  puStack_88 = &system_state_ptr;
  if (param_2 == 0) {
    lVar4 = FUN_18005e890(system_context_ptr);
    (**(code **)(*plStack_b0 + 8))(plStack_b0,param_1,*(int32_t *)(lVar4 + 0x38));
  }
  else {
    pcVar1 = *(code **)(*plStack_b0 + 0x10);
    uVar3 = DataValidator(&puStack_88,param_2);
    (*pcVar1)(plStack_b0,param_1,uVar3);
    puStack_88 = &system_data_buffer_ptr;
    if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
      SystemCoreProcessor();
    }
    lStack_80 = 0;
    uStack_70 = 0;
    puStack_88 = &system_state_ptr;
  }
  FUN_18062c470(&puStack_a8);
  puStack_a8 = &system_data_buffer_ptr;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    SystemCoreProcessor();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



