#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part074.c - 1 个函数

// 函数: void FUN_1803ef940(int64_t *param_1,int64_t param_2,int64_t *param_3,int64_t param_4,
void FUN_1803ef940(int64_t *param_1,int64_t param_2,int64_t *param_3,int64_t param_4,
                  int64_t *param_5)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  void *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int8_t *puVar7;
  void *puVar8;
  void *puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  uint uVar13;
  int8_t auStack_348 [32];
  char cStack_328;
  int32_t uStack_324;
  void *puStack_320;
  void *puStack_318;
  int iStack_310;
  uint64_t uStack_308;
  int64_t *plStack_300;
  int64_t lStack_2f8;
  int64_t lStack_2f0;
  void **ppuStack_2e8;
  uint64_t uStack_2e0;
  int8_t uStack_2d8;
  uint8_t uStack_2d7;
  uint64_t uStack_2c8;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  int8_t uStack_298;
  uint8_t uStack_297;
  uint64_t uStack_288;
  uint64_t uStack_280;
  void *apuStack_278 [68];
  uint64_t uStack_58;
  
  uStack_2e0 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_348;
  uVar11 = 0;
  uStack_324 = 0;
  ppuStack_2e8 = &puStack_320;
  puStack_320 = &system_data_buffer_ptr;
  uStack_308 = 0;
  puStack_318 = (void *)0x0;
  iStack_310 = 0;
  plStack_300 = param_1;
  lStack_2f8 = param_4;
  lStack_2f0 = param_2;
  cStack_328 = (**(code **)(*param_1 + 0x38))(param_1,param_2 + 0x48,&puStack_320);
  puVar4 = &system_buffer_ptr;
  if ((void *)param_1[0x41] != (void *)0x0) {
    puVar4 = (void *)param_1[0x41];
  }
  (**(code **)(*param_5 + 0x10))(param_5,puVar4);
  FUN_180627f00(param_5,&ui_system_data_1496_ptr);
  uVar2 = FUN_1803ef110(param_1,*(int32_t *)(param_2 + 0xa4));
  FUN_180627f00(param_5,uVar2);
  FUN_180627f00(param_5,&system_data_5cb4);
  FUN_180627f00(param_5,&system_data_22f0);
  FUN_180627e90(param_5,param_2 + 0x80);
  lVar10 = *param_3;
  lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar10),8) +
          (param_3[1] - lVar10);
  uVar6 = uVar11;
  if (lVar5 >> 6 != lVar5 >> 0x3f) {
    do {
      if ((*(int *)(uVar11 + 0x10 + lVar10) == 0xd) &&
         (iVar1 = strcmp(*(uint64_t *)(uVar11 + 8 + lVar10),&processed_var_5240_ptr), iVar1 == 0)) {
        puVar4 = *(void **)(uVar11 + 0x60 + lVar10);
        puVar8 = &system_buffer_ptr;
        if (puVar4 != (void *)0x0) {
          puVar8 = puVar4;
        }
        System_DataHandler(param_5,&ui_system_data_1520_ptr,puVar8);
      }
      else {
        puVar4 = *(void **)(uVar11 + 0x60 + lVar10);
        puVar8 = &system_buffer_ptr;
        if (puVar4 != (void *)0x0) {
          puVar8 = puVar4;
        }
        puVar4 = *(void **)(uVar11 + 8 + lVar10);
        puVar9 = &system_buffer_ptr;
        if (puVar4 != (void *)0x0) {
          puVar9 = puVar4;
        }
        System_DataHandler(param_5,&ui_system_data_1536_ptr,puVar9,puVar8);
      }
      uVar13 = (int)uVar6 + 1;
      uVar11 = uVar11 + 0x78;
      lVar10 = *param_3;
      lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_3[1] - lVar10),8) +
              (param_3[1] - lVar10);
      param_1 = plStack_300;
      uVar6 = (uint64_t)uVar13;
    } while ((uint64_t)(int64_t)(int)uVar13 < (uint64_t)((lVar5 >> 6) - (lVar5 >> 0x3f)));
  }
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lStack_2f8 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lStack_2f8 + 8);
  }
  plVar12 = param_1 + 0x88;
  uStack_2c8 = 0;
  uStack_2c0 = 0xf;
  uStack_2d8 = 0;
  uStack_324 = 1;
  FUN_1803f45e0(&uStack_2d8,param_1[0x8a] + 1);
  if (0xf < (uint64_t)param_1[0x8b]) {
    plVar12 = (int64_t *)*plVar12;
  }
  FUN_1803f5400(&uStack_2d8,plVar12,param_1[0x8a]);
  FUN_1803f5400(&uStack_2d8,&system_data_cfb8,1);
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (puVar4[lVar10] != '\0');
  puVar3 = (uint64_t *)FUN_1803f5400(&uStack_2d8,puVar4);
  uStack_2b8 = *puVar3;
  uStack_2b0 = puVar3[1];
  uStack_2a8 = puVar3[2];
  uStack_2a0 = puVar3[3];
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  *(int8_t *)puVar3 = 0;
  uStack_324 = 3;
  FUN_1803f3a40(&uStack_298,&uStack_2b8,&system_data_209c);
  uStack_324 = 1;
  if (0xf < uStack_2a0) {
    uVar6 = uStack_2a0 + 1;
    uVar11 = uStack_2b8;
    if (0xfff < uVar6) {
      uVar6 = uStack_2a0 + 0x28;
      uVar11 = *(uint64_t *)(uStack_2b8 - 8);
      if (0x1f < (uStack_2b8 - uVar11) - 8) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(uVar11,uVar6);
  }
  uStack_2a8 = 0;
  uStack_2a0 = 0xf;
  uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
  uStack_324 = 0;
  if (0xf < uStack_2c0) {
    uVar11 = uStack_2c0 + 1;
    if ((0xfff < uVar11) &&
       (uVar11 = uStack_2c0 + 0x28,
       0x1f < (CONCAT71(uStack_2d7,uStack_2d8) - *(int64_t *)(CONCAT71(uStack_2d7,uStack_2d8) + -8)
              ) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(0,uVar11);
  }
  uStack_2c8 = 0;
  uStack_2c0 = 0xf;
  uStack_2d8 = 0;
  if ((char)param_1[0xaf] != '\0') {
    puVar4 = &system_buffer_ptr;
    if ((void *)param_1[0xa1] != (void *)0x0) {
      puVar4 = (void *)param_1[0xa1];
    }
    System_DataHandler(param_5,&ui_system_data_1752_ptr,puVar4);
  }
  if ((cStack_328 != '\0') && (iStack_310 != 0)) {
    puVar4 = &system_buffer_ptr;
    if (puStack_318 != (void *)0x0) {
      puVar4 = puStack_318;
    }
    System_DataHandler(param_5,&ui_system_data_1728_ptr,puVar4);
  }
  FUN_180627f00(param_5,&ui_system_data_1736_ptr);
  FUN_180627f00(param_5,&system_data_2320);
  puVar7 = &uStack_298;
  if (0xf < uStack_280) {
    puVar7 = (int8_t *)CONCAT71(uStack_297,uStack_298);
  }
  FUN_180627f00(param_5,puVar7);
  FUN_180627f00(param_5,&system_data_c8e4);
  lVar10 = FUN_180624440(apuStack_278,lStack_2f0 + 0x60);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(lVar10 + 8) != (void *)0x0) {
    puVar4 = *(void **)(lVar10 + 8);
  }
  FUN_180627f00(param_5,puVar4);
  apuStack_278[0] = &system_state_ptr;
  if (0xf < uStack_280) {
    uVar11 = uStack_280 + 1;
    lVar5 = CONCAT71(uStack_297,uStack_298);
    lVar10 = lVar5;
    if (0xfff < uVar11) {
      uVar11 = uStack_280 + 0x28;
      lVar10 = *(int64_t *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar10) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(lVar10,uVar11);
  }
  uStack_288 = 0;
  uStack_280 = 0xf;
  uStack_298 = 0;
  ppuStack_2e8 = &puStack_320;
  puStack_320 = &system_data_buffer_ptr;
  if (puStack_318 == (void *)0x0) {
    puStack_318 = (void *)0x0;
    uStack_308 = uStack_308 & 0xffffffff00000000;
    puStack_320 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_348);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Removing unreachable block (ram,0x0001803f0270)
// WARNING: Removing unreachable block (ram,0x0001803f027c)
// WARNING: Removing unreachable block (ram,0x0001803f0283)
// WARNING: Removing unreachable block (ram,0x0001803f0295)
// WARNING: Removing unreachable block (ram,0x0001803f02c4)
// WARNING: Removing unreachable block (ram,0x0001803f02ce)
// WARNING: Removing unreachable block (ram,0x0001803f02d6)
// WARNING: Removing unreachable block (ram,0x0001803f0359)
// WARNING: Removing unreachable block (ram,0x0001803f0369)
// WARNING: Removing unreachable block (ram,0x0001803f0379)
// WARNING: Removing unreachable block (ram,0x0001803f0385)
// WARNING: Removing unreachable block (ram,0x0001803f038c)
// WARNING: Removing unreachable block (ram,0x0001803f03bf)
// WARNING: Removing unreachable block (ram,0x0001803f03c7)
// WARNING: Removing unreachable block (ram,0x0001803f044a)
// WARNING: Removing unreachable block (ram,0x0001803f045a)
// WARNING: Removing unreachable block (ram,0x0001803f045e)
// WARNING: Removing unreachable block (ram,0x0001803f046a)
// WARNING: Removing unreachable block (ram,0x0001803f0476)
// WARNING: Removing unreachable block (ram,0x0001803f047d)
// WARNING: Removing unreachable block (ram,0x0001803f04ba)
// WARNING: Removing unreachable block (ram,0x0001803f04c2)
// WARNING: Removing unreachable block (ram,0x0001803f054c)
// WARNING: Removing unreachable block (ram,0x0001803f055d)
// WARNING: Removing unreachable block (ram,0x0001803f0561)
// WARNING: Removing unreachable block (ram,0x0001803f0f0f)
// WARNING: Removing unreachable block (ram,0x0001803f056e)
// WARNING: Removing unreachable block (ram,0x0001803f057c)
// WARNING: Removing unreachable block (ram,0x0001803f0584)
// WARNING: Removing unreachable block (ram,0x0001803f05c4)
// WARNING: Removing unreachable block (ram,0x0001803f05cd)
// WARNING: Removing unreachable block (ram,0x0001803f0673)
// WARNING: Removing unreachable block (ram,0x0001803f065a)
// WARNING: Removing unreachable block (ram,0x0001803f0676)
// WARNING: Removing unreachable block (ram,0x0001803f06b0)
// WARNING: Removing unreachable block (ram,0x0001803f06d0)
// WARNING: Removing unreachable block (ram,0x0001803f0711)
// WARNING: Removing unreachable block (ram,0x0001803f0715)
// WARNING: Removing unreachable block (ram,0x0001803f074e)
// WARNING: Removing unreachable block (ram,0x0001803f0756)
// WARNING: Removing unreachable block (ram,0x0001803f078e)
// WARNING: Removing unreachable block (ram,0x0001803f0792)
// WARNING: Removing unreachable block (ram,0x0001803f079c)
// WARNING: Removing unreachable block (ram,0x0001803f07d0)
// WARNING: Removing unreachable block (ram,0x0001803f07d6)
// WARNING: Removing unreachable block (ram,0x0001803f080a)
// WARNING: Removing unreachable block (ram,0x0001803f0813)
// WARNING: Removing unreachable block (ram,0x0001803f0817)
// WARNING: Removing unreachable block (ram,0x0001803f0821)
// WARNING: Removing unreachable block (ram,0x0001803f0825)
// WARNING: Removing unreachable block (ram,0x0001803f07ea)
// WARNING: Removing unreachable block (ram,0x0001803f07f3)
// WARNING: Removing unreachable block (ram,0x0001803f07f7)
// WARNING: Removing unreachable block (ram,0x0001803f07b0)
// WARNING: Removing unreachable block (ram,0x0001803f07b9)
// WARNING: Removing unreachable block (ram,0x0001803f07bd)
// WARNING: Removing unreachable block (ram,0x0001803f0836)
// WARNING: Removing unreachable block (ram,0x0001803f0849)
// WARNING: Removing unreachable block (ram,0x0001803f0893)
// WARNING: Removing unreachable block (ram,0x0001803f08a4)
// WARNING: Removing unreachable block (ram,0x0001803f08b5)
// WARNING: Removing unreachable block (ram,0x0001803f08c3)
// WARNING: Removing unreachable block (ram,0x0001803f08cb)
// WARNING: Removing unreachable block (ram,0x0001803f093b)
// WARNING: Removing unreachable block (ram,0x0001803f0944)
// WARNING: Removing unreachable block (ram,0x0001803f09a8)
// WARNING: Removing unreachable block (ram,0x0001803f09ae)
// WARNING: Removing unreachable block (ram,0x0001803f09b8)
// WARNING: Removing unreachable block (ram,0x0001803f09bc)
// WARNING: Removing unreachable block (ram,0x0001803f09cd)
// WARNING: Removing unreachable block (ram,0x0001803f09f7)
// WARNING: Removing unreachable block (ram,0x0001803f09fb)
// WARNING: Removing unreachable block (ram,0x0001803f0a10)
// WARNING: Removing unreachable block (ram,0x0001803f0a13)
// WARNING: Removing unreachable block (ram,0x0001803f0a2d)
// WARNING: Removing unreachable block (ram,0x0001803f0a37)
// WARNING: Removing unreachable block (ram,0x0001803f0a3b)
// WARNING: Removing unreachable block (ram,0x0001803f0a45)
// WARNING: Removing unreachable block (ram,0x0001803f0a48)
// WARNING: Removing unreachable block (ram,0x0001803f0a5a)
// WARNING: Removing unreachable block (ram,0x0001803f0aa1)
// WARNING: Removing unreachable block (ram,0x0001803f0ab2)
// WARNING: Removing unreachable block (ram,0x0001803f0ab6)
// WARNING: Removing unreachable block (ram,0x0001803f0ac3)
// WARNING: Removing unreachable block (ram,0x0001803f0ad1)
// WARNING: Removing unreachable block (ram,0x0001803f0ad9)
// WARNING: Removing unreachable block (ram,0x0001803f0b1a)
// WARNING: Removing unreachable block (ram,0x0001803f0b23)
// WARNING: Removing unreachable block (ram,0x0001803f0b98)
// WARNING: Removing unreachable block (ram,0x0001803f0b9c)
// WARNING: Removing unreachable block (ram,0x0001803f0be7)
// WARNING: Removing unreachable block (ram,0x0001803f0bf8)
// WARNING: Removing unreachable block (ram,0x0001803f0bfc)
// WARNING: Removing unreachable block (ram,0x0001803f0c09)
// WARNING: Removing unreachable block (ram,0x0001803f0c17)
// WARNING: Removing unreachable block (ram,0x0001803f0c1f)
// WARNING: Removing unreachable block (ram,0x0001803f0c56)
// WARNING: Removing unreachable block (ram,0x0001803f0c5f)
// WARNING: Removing unreachable block (ram,0x0001803f0d1f)
// WARNING: Removing unreachable block (ram,0x0001803f0d29)
// WARNING: Removing unreachable block (ram,0x0001803f0d2d)
// WARNING: Removing unreachable block (ram,0x0001803f0d44)
// WARNING: Removing unreachable block (ram,0x0001803f0d4b)
// WARNING: Removing unreachable block (ram,0x0001803f0d5b)
// WARNING: Removing unreachable block (ram,0x0001803f0d5e)
// WARNING: Removing unreachable block (ram,0x0001803f0da2)
// WARNING: Removing unreachable block (ram,0x0001803f0dae)
// WARNING: Removing unreachable block (ram,0x0001803f0db2)
// WARNING: Removing unreachable block (ram,0x0001803f0dc4)
// WARNING: Removing unreachable block (ram,0x0001803f0dd2)
// WARNING: Removing unreachable block (ram,0x0001803f0dda)
// WARNING: Removing unreachable block (ram,0x0001803f0de9)
// WARNING: Removing unreachable block (ram,0x0001803f0e15)
// WARNING: Removing unreachable block (ram,0x0001803f0e1f)
// WARNING: Removing unreachable block (ram,0x0001803f0e28)
// WARNING: Removing unreachable block (ram,0x0001803f0ead)
// WARNING: Removing unreachable block (ram,0x0001803f0efa)
// WARNING: Removing unreachable block (ram,0x0001803f0f0b)
// WARNING: Removing unreachable block (ram,0x0001803f0f1c)
// WARNING: Removing unreachable block (ram,0x0001803f0f2a)
// WARNING: Removing unreachable block (ram,0x0001803f0f32)
// WARNING: Removing unreachable block (ram,0x0001803f0f73)
// WARNING: Removing unreachable block (ram,0x0001803f0f7c)
// WARNING: Removing unreachable block (ram,0x0001803f1001)
// WARNING: Removing unreachable block (ram,0x0001803f1005)
// WARNING: Removing unreachable block (ram,0x0001803f1015)
// WARNING: Removing unreachable block (ram,0x0001803f1023)
// WARNING: Removing unreachable block (ram,0x0001803f1027)
// WARNING: Removing unreachable block (ram,0x0001803f102e)
// WARNING: Removing unreachable block (ram,0x0001803f1031)
// WARNING: Removing unreachable block (ram,0x0001803f1043)
// WARNING: Removing unreachable block (ram,0x0001803f105f)
// WARNING: Removing unreachable block (ram,0x0001803f1063)
// WARNING: Removing unreachable block (ram,0x0001803f106d)
// WARNING: Removing unreachable block (ram,0x0001803f1071)
// WARNING: Removing unreachable block (ram,0x0001803f1079)
// WARNING: Removing unreachable block (ram,0x0001803f107d)
// WARNING: Removing unreachable block (ram,0x0001803f10b7)
// WARNING: Removing unreachable block (ram,0x0001803f10bc)
// WARNING: Removing unreachable block (ram,0x0001803f10d5)
// WARNING: Removing unreachable block (ram,0x0001803f10d7)
// WARNING: Removing unreachable block (ram,0x0001803f10e8)
// WARNING: Removing unreachable block (ram,0x0001803f10ed)
// WARNING: Removing unreachable block (ram,0x0001803f10f6)
// WARNING: Removing unreachable block (ram,0x0001803f1105)
// WARNING: Removing unreachable block (ram,0x0001803f110a)
// WARNING: Removing unreachable block (ram,0x0001803f1136)
// WARNING: Removing unreachable block (ram,0x0001803f1131)
// WARNING: Removing unreachable block (ram,0x0001803f0e9f)
// WARNING: Removing unreachable block (ram,0x0001803f08a8)
// WARNING: Removing unreachable block (ram,0x0001803f0179)
// WARNING: Removing unreachable block (ram,0x0001803f0185)
// WARNING: Removing unreachable block (ram,0x0001803f018c)
// WARNING: Removing unreachable block (ram,0x0001803f01c7)
// WARNING: Removing unreachable block (ram,0x0001803f01cf)
// WARNING: Removing unreachable block (ram,0x0001803f0250)
// WARNING: Removing unreachable block (ram,0x0001803f025b)
// WARNING: Removing unreachable block (ram,0x0001803f025f)
// WARNING: Removing unreachable block (ram,0x0001803f036d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




