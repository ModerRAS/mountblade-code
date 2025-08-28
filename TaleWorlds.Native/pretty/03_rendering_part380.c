/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part380.c - 7 个函数
// 函数: void UISystem_76030(uint64_t param_1,int64_t param_2,uint64_t param_3)
void UISystem_76030(uint64_t param_1,int64_t param_2,uint64_t param_3)
{
  char cVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  int8_t stack_array_468 [32];
  uint local_var_448;
  uint64_t *plocal_var_440;
  uint64_t local_var_438;
  uint64_t local_var_428;
  int8_t local_var_418;
  uint8_t local_var_417;
  uint64_t local_var_408;
  uint64_t local_var_400;
  char acStack_3f8 [8];
  uint64_t local_var_3f0;
  uint64_t local_var_3e8;
  uint64_t local_var_3e0;
  uint64_t local_var_3d8;
  uint64_t local_var_3d0;
  uint64_t local_var_3c8;
  uint64_t local_var_3c0;
  uint64_t local_var_3b8;
  uint64_t local_var_3b0;
  uint64_t local_var_3a8;
  char acStack_398 [8];
  uint64_t local_var_390;
  uint64_t local_var_388;
  uint64_t local_var_380;
  uint64_t local_var_378;
  uint64_t local_var_370;
  uint64_t local_var_368;
  uint64_t local_var_360;
  uint64_t local_var_358;
  uint64_t local_var_350;
  uint64_t local_var_348;
  char acStack_338 [8];
  uint64_t local_var_330;
  uint64_t local_var_328;
  uint64_t local_var_320;
  uint64_t local_var_318;
  uint64_t local_var_310;
  uint64_t local_var_308;
  uint64_t local_var_300;
  uint64_t local_var_2f8;
  uint64_t local_var_2f0;
  uint64_t local_var_2e8;
  char acStack_2d8 [8];
  uint64_t local_var_2d0;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  uint64_t local_var_2b8;
  uint64_t local_var_2b0;
  uint64_t local_var_2a8;
  uint64_t local_var_2a0;
  uint64_t local_var_298;
  uint64_t local_var_290;
  uint64_t local_var_288;
  char acStack_278 [8];
  uint64_t stack_array_270 [4];
  int8_t stack_array_250 [56];
  char acStack_218 [8];
  uint64_t stack_array_210 [4];
  int8_t stack_array_1f0 [56];
  char acStack_1b8 [8];
  uint64_t stack_array_1b0 [4];
  int8_t stack_array_190 [56];
  char acStack_158 [8];
  uint64_t stack_array_150 [4];
  int8_t stack_array_130 [56];
  char acStack_f8 [8];
  uint64_t stack_array_f0 [4];
  int8_t stack_array_d0 [56];
  char acStack_98 [8];
  uint64_t stack_array_90 [4];
  int8_t stack_array_70 [56];
  uint64_t local_var_38;
  local_var_438 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_468;
  local_var_448 = 0;
  cVar1 = **(char **)(param_2 + 8);
  local_var_428 = param_1;
  if (cVar1 == '\0') {
    local_var_408 = 0;
    local_var_400 = 0xf;
    local_var_418 = 0;
    MathCoreCalculator0(&local_var_418,&memory_allocator_3880_ptr,0x13);
    CoreEngine_472D60(param_2,param_1,&local_var_418,0);
    local_var_448 = 1;
    if (0xf < local_var_400) {
      uVar5 = local_var_400 + 1;
      lVar2 = CONCAT71(local_var_417,local_var_418);
      lVar4 = lVar2;
      if (0xfff < uVar5) {
        uVar5 = local_var_400 + 0x28;
        lVar4 = *(int64_t *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar4) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar4,uVar5);
    }
    local_var_408 = 0;
    local_var_400 = 0xf;
    local_var_418 = 0;
  }
  else {
    if (cVar1 == '{') {
      pcVar3 = (char *)UISystem_74d30(acStack_98);
      uVar6 = 2;
    }
    else {
      if (cVar1 == '[') {
        pcVar3 = (char *)UISystem_74260(acStack_f8);
        uVar6 = 4;
      }
      else {
        if (cVar1 == '\"') {
          pcVar3 = (char *)UISystem_73be0(acStack_158);
          uVar6 = 8;
        }
        else {
          if ((cVar1 == 't') || (cVar1 == 'f')) {
            pcVar3 = (char *)UISystem_73fd0(acStack_278);
            uVar6 = 0x80;
          }
          else {
            lVar4 = strchr(&memory_allocator_3904_ptr,(int)cVar1);
            if (lVar4 == 0) {
              pcVar3 = (char *)UISystem_73e00(acStack_218,param_2,param_3);
              uVar6 = 0x20;
            }
            else {
              pcVar3 = (char *)UISystem_75c80(acStack_1b8);
              uVar6 = 0x10;
            }
            acStack_2d8[0] = *pcVar3;
            if (*pcVar3 != '\0') {
              plocal_var_440 = &local_var_2d0;
              local_var_2d0 = *(uint64_t *)(pcVar3 + 8);
              local_var_2c8 = *(uint64_t *)(pcVar3 + 0x10);
              local_var_2c0 = *(uint64_t *)(pcVar3 + 0x18);
              local_var_2b8 = *(uint64_t *)(pcVar3 + 0x20);
              pcVar3[0x18] = '\0';
              pcVar3[0x19] = '\0';
              pcVar3[0x1a] = '\0';
              pcVar3[0x1b] = '\0';
              pcVar3[0x1c] = '\0';
              pcVar3[0x1d] = '\0';
              pcVar3[0x1e] = '\0';
              pcVar3[0x1f] = '\0';
              pcVar3[0x20] = '\x0f';
              pcVar3[0x21] = '\0';
              pcVar3[0x22] = '\0';
              pcVar3[0x23] = '\0';
              pcVar3[0x24] = '\0';
              pcVar3[0x25] = '\0';
              pcVar3[0x26] = '\0';
              pcVar3[0x27] = '\0';
              pcVar3[8] = '\0';
              local_var_2b0 = *(uint64_t *)(pcVar3 + 0x28);
              local_var_2a8 = *(uint64_t *)(pcVar3 + 0x30);
              local_var_2a0 = *(uint64_t *)(pcVar3 + 0x38);
              local_var_298 = *(uint64_t *)(pcVar3 + 0x40);
              pcVar3[0x38] = '\0';
              pcVar3[0x39] = '\0';
              pcVar3[0x3a] = '\0';
              pcVar3[0x3b] = '\0';
              pcVar3[0x3c] = '\0';
              pcVar3[0x3d] = '\0';
              pcVar3[0x3e] = '\0';
              pcVar3[0x3f] = '\0';
              pcVar3[0x40] = '\x0f';
              pcVar3[0x41] = '\0';
              pcVar3[0x42] = '\0';
              pcVar3[0x43] = '\0';
              pcVar3[0x44] = '\0';
              pcVar3[0x45] = '\0';
              pcVar3[0x46] = '\0';
              pcVar3[0x47] = '\0';
              pcVar3[0x28] = '\0';
              local_var_290 = *(uint64_t *)(pcVar3 + 0x48);
              local_var_288 = *(uint64_t *)(pcVar3 + 0x50);
            }
            pcVar3 = acStack_2d8;
            uVar6 = uVar6 | 0x40;
          }
          acStack_338[0] = *pcVar3;
          if (*pcVar3 != '\0') {
            plocal_var_440 = &local_var_330;
            local_var_320 = 0;
            local_var_318 = 0;
            local_var_330 = *(uint64_t *)(pcVar3 + 8);
            local_var_328 = *(uint64_t *)(pcVar3 + 0x10);
            local_var_320 = *(uint64_t *)(pcVar3 + 0x18);
            local_var_318 = *(uint64_t *)(pcVar3 + 0x20);
            pcVar3[0x18] = '\0';
            pcVar3[0x19] = '\0';
            pcVar3[0x1a] = '\0';
            pcVar3[0x1b] = '\0';
            pcVar3[0x1c] = '\0';
            pcVar3[0x1d] = '\0';
            pcVar3[0x1e] = '\0';
            pcVar3[0x1f] = '\0';
            pcVar3[0x20] = '\x0f';
            pcVar3[0x21] = '\0';
            pcVar3[0x22] = '\0';
            pcVar3[0x23] = '\0';
            pcVar3[0x24] = '\0';
            pcVar3[0x25] = '\0';
            pcVar3[0x26] = '\0';
            pcVar3[0x27] = '\0';
            pcVar3[8] = '\0';
            local_var_300 = 0;
            local_var_2f8 = 0;
            local_var_310 = *(uint64_t *)(pcVar3 + 0x28);
            local_var_308 = *(uint64_t *)(pcVar3 + 0x30);
            local_var_300 = *(uint64_t *)(pcVar3 + 0x38);
            local_var_2f8 = *(uint64_t *)(pcVar3 + 0x40);
            pcVar3[0x38] = '\0';
            pcVar3[0x39] = '\0';
            pcVar3[0x3a] = '\0';
            pcVar3[0x3b] = '\0';
            pcVar3[0x3c] = '\0';
            pcVar3[0x3d] = '\0';
            pcVar3[0x3e] = '\0';
            pcVar3[0x3f] = '\0';
            pcVar3[0x40] = '\x0f';
            pcVar3[0x41] = '\0';
            pcVar3[0x42] = '\0';
            pcVar3[0x43] = '\0';
            pcVar3[0x44] = '\0';
            pcVar3[0x45] = '\0';
            pcVar3[0x46] = '\0';
            pcVar3[0x47] = '\0';
            pcVar3[0x28] = '\0';
            local_var_2f0 = *(uint64_t *)(pcVar3 + 0x48);
            local_var_2e8 = *(uint64_t *)(pcVar3 + 0x50);
          }
          pcVar3 = acStack_338;
          uVar6 = uVar6 | 0x100;
        }
        acStack_398[0] = *pcVar3;
        if (*pcVar3 != '\0') {
          plocal_var_440 = &local_var_390;
          local_var_380 = 0;
          local_var_378 = 0;
          local_var_390 = *(uint64_t *)(pcVar3 + 8);
          local_var_388 = *(uint64_t *)(pcVar3 + 0x10);
          local_var_380 = *(uint64_t *)(pcVar3 + 0x18);
          local_var_378 = *(uint64_t *)(pcVar3 + 0x20);
          pcVar3[0x18] = '\0';
          pcVar3[0x19] = '\0';
          pcVar3[0x1a] = '\0';
          pcVar3[0x1b] = '\0';
          pcVar3[0x1c] = '\0';
          pcVar3[0x1d] = '\0';
          pcVar3[0x1e] = '\0';
          pcVar3[0x1f] = '\0';
          pcVar3[0x20] = '\x0f';
          pcVar3[0x21] = '\0';
          pcVar3[0x22] = '\0';
          pcVar3[0x23] = '\0';
          pcVar3[0x24] = '\0';
          pcVar3[0x25] = '\0';
          pcVar3[0x26] = '\0';
          pcVar3[0x27] = '\0';
          pcVar3[8] = '\0';
          local_var_360 = 0;
          local_var_358 = 0;
          local_var_370 = *(uint64_t *)(pcVar3 + 0x28);
          local_var_368 = *(uint64_t *)(pcVar3 + 0x30);
          local_var_360 = *(uint64_t *)(pcVar3 + 0x38);
          local_var_358 = *(uint64_t *)(pcVar3 + 0x40);
          pcVar3[0x38] = '\0';
          pcVar3[0x39] = '\0';
          pcVar3[0x3a] = '\0';
          pcVar3[0x3b] = '\0';
          pcVar3[0x3c] = '\0';
          pcVar3[0x3d] = '\0';
          pcVar3[0x3e] = '\0';
          pcVar3[0x3f] = '\0';
          pcVar3[0x40] = '\x0f';
          pcVar3[0x41] = '\0';
          pcVar3[0x42] = '\0';
          pcVar3[0x43] = '\0';
          pcVar3[0x44] = '\0';
          pcVar3[0x45] = '\0';
          pcVar3[0x46] = '\0';
          pcVar3[0x47] = '\0';
          pcVar3[0x28] = '\0';
          local_var_350 = *(uint64_t *)(pcVar3 + 0x48);
          local_var_348 = *(uint64_t *)(pcVar3 + 0x50);
        }
        pcVar3 = acStack_398;
        uVar6 = uVar6 | 0x200;
      }
      acStack_3f8[0] = *pcVar3;
      if (acStack_3f8[0] != '\0') {
        plocal_var_440 = &local_var_3f0;
        local_var_3f0 = *(uint64_t *)(pcVar3 + 8);
        local_var_3e8 = *(uint64_t *)(pcVar3 + 0x10);
        local_var_3e0 = *(uint64_t *)(pcVar3 + 0x18);
        local_var_3d8 = *(uint64_t *)(pcVar3 + 0x20);
        pcVar3[0x18] = '\0';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = '\0';
        pcVar3[0x1b] = '\0';
        pcVar3[0x1c] = '\0';
        pcVar3[0x1d] = '\0';
        pcVar3[0x1e] = '\0';
        pcVar3[0x1f] = '\0';
        pcVar3[0x20] = '\x0f';
        pcVar3[0x21] = '\0';
        pcVar3[0x22] = '\0';
        pcVar3[0x23] = '\0';
        pcVar3[0x24] = '\0';
        pcVar3[0x25] = '\0';
        pcVar3[0x26] = '\0';
        pcVar3[0x27] = '\0';
        pcVar3[8] = '\0';
        local_var_3d0 = *(uint64_t *)(pcVar3 + 0x28);
        local_var_3c8 = *(uint64_t *)(pcVar3 + 0x30);
        local_var_3c0 = *(uint64_t *)(pcVar3 + 0x38);
        local_var_3b8 = *(uint64_t *)(pcVar3 + 0x40);
        pcVar3[0x38] = '\0';
        pcVar3[0x39] = '\0';
        pcVar3[0x3a] = '\0';
        pcVar3[0x3b] = '\0';
        pcVar3[0x3c] = '\0';
        pcVar3[0x3d] = '\0';
        pcVar3[0x3e] = '\0';
        pcVar3[0x3f] = '\0';
        pcVar3[0x40] = '\x0f';
        pcVar3[0x41] = '\0';
        pcVar3[0x42] = '\0';
        pcVar3[0x43] = '\0';
        pcVar3[0x44] = '\0';
        pcVar3[0x45] = '\0';
        pcVar3[0x46] = '\0';
        pcVar3[0x47] = '\0';
        pcVar3[0x28] = '\0';
        local_var_3b0 = *(uint64_t *)(pcVar3 + 0x48);
        local_var_3a8 = *(uint64_t *)(pcVar3 + 0x50);
      }
      pcVar3 = acStack_3f8;
      uVar6 = uVar6 | 0x400;
    }
    local_var_448 = uVar6;
    UISystem_776c0(param_1,pcVar3);
    uVar7 = uVar6 | 1;
    local_var_448 = uVar7;
    if (uVar6 != 0) {
      uVar7 = uVar6 & 0xfffffbff | 1;
      local_var_448 = uVar7;
      if (acStack_3f8[0] != '\0') {
        plocal_var_440 = &local_var_3f0;
        SystemPerformanceOptimizer(&local_var_3d0);
        SystemPerformanceOptimizer(&local_var_3f0);
      }
    }
    if ((uVar7 >> 9 & 1) != 0) {
      uVar7 = uVar7 & 0xfffffdff;
      local_var_448 = uVar7;
      if (acStack_398[0] != '\0') {
        plocal_var_440 = &local_var_390;
        SystemPerformanceOptimizer(&local_var_370);
        SystemPerformanceOptimizer(&local_var_390);
      }
    }
    if ((uVar7 >> 8 & 1) != 0) {
      uVar7 = uVar7 & 0xfffffeff;
      local_var_448 = uVar7;
      if (acStack_338[0] != '\0') {
        plocal_var_440 = &local_var_330;
        SystemPerformanceOptimizer(&local_var_310);
        SystemPerformanceOptimizer(&local_var_330);
      }
    }
    if ((char)uVar7 < '\0') {
      uVar7 = uVar7 & 0xffffff7f;
      local_var_448 = uVar7;
      if (acStack_278[0] != '\0') {
        plocal_var_440 = stack_array_270;
        SystemPerformanceOptimizer(stack_array_250);
        SystemPerformanceOptimizer(stack_array_270);
      }
    }
    if ((uVar7 & 0x40) != 0) {
      uVar7 = uVar7 & 0xffffffbf;
      local_var_448 = uVar7;
      if (acStack_2d8[0] != '\0') {
        plocal_var_440 = &local_var_2d0;
        SystemPerformanceOptimizer(&local_var_2b0);
        SystemPerformanceOptimizer(&local_var_2d0);
      }
    }
    if ((uVar7 & 0x20) != 0) {
      uVar7 = uVar7 & 0xffffffdf;
      local_var_448 = uVar7;
      if (acStack_218[0] != '\0') {
        plocal_var_440 = stack_array_210;
        SystemPerformanceOptimizer(stack_array_1f0);
        SystemPerformanceOptimizer(stack_array_210);
      }
    }
    if ((uVar7 & 0x10) != 0) {
      uVar7 = uVar7 & 0xffffffef;
      local_var_448 = uVar7;
      if (acStack_1b8[0] != '\0') {
        plocal_var_440 = stack_array_1b0;
        SystemPerformanceOptimizer(stack_array_190);
        SystemPerformanceOptimizer(stack_array_1b0);
      }
    }
    if ((uVar7 & 8) != 0) {
      uVar7 = uVar7 & 0xfffffff7;
      local_var_448 = uVar7;
      if (acStack_158[0] != '\0') {
        plocal_var_440 = stack_array_150;
        SystemPerformanceOptimizer(stack_array_130);
        SystemPerformanceOptimizer(stack_array_150);
      }
    }
    if ((uVar7 & 4) != 0) {
      uVar7 = uVar7 & 0xfffffffb;
      local_var_448 = uVar7;
      if (acStack_f8[0] != '\0') {
        plocal_var_440 = stack_array_f0;
        SystemPerformanceOptimizer(stack_array_d0);
        SystemPerformanceOptimizer(stack_array_f0);
      }
    }
    if (((uVar7 & 2) != 0) && (local_var_448 = uVar7 & 0xfffffffd, acStack_98[0] != '\0')) {
      plocal_var_440 = stack_array_90;
      SystemPerformanceOptimizer(stack_array_70);
      SystemPerformanceOptimizer(stack_array_90);
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_468);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_76690(char *param_1,char *param_2,uint64_t param_3)
void UISystem_76690(char *param_1,char *param_2,uint64_t param_3)
{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  uint uVar7;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int8_t stack_array_1c8 [32];
  uint local_var_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  uint64_t local_var_188;
  char *pcStack_178;
  int8_t local_var_168;
  uint8_t local_var_167;
  uint64_t local_var_158;
  uint64_t local_var_150;
  char acStack_148 [8];
  char cStack_140;
  uint8_t local_var_13f;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int8_t local_var_120;
  uint8_t local_var_11f;
  uint64_t local_var_118;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  char acStack_e8 [8];
  char acStack_e0 [32];
  int8_t stack_array_c0 [56];
  char acStack_88 [8];
  char acStack_80 [32];
  int8_t stack_array_60 [56];
  uint64_t local_var_28;
  local_var_188 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  local_var_1a8 = 0;
  if (0xf < *(uint64_t *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  pcStack_198 = param_2;
  pcStack_190 = param_2;
  pcStack_178 = param_1;
  iVar2 = isspace((int)*param_2);
  while (iVar2 != 0) {
    pcStack_190 = pcStack_190 + 1;
    iVar2 = isspace((int)*pcStack_190);
  }
  UISystem_76030(acStack_148,&pcStack_198,param_3,0x14);
  if (acStack_148[0] == '\0') {
    iVar2 = isspace((int)*pcStack_190);
    uVar3 = extraout_XMM0_Qa;
    while (iVar2 != 0) {
      pcStack_190 = pcStack_190 + 1;
      iVar2 = isspace((int)*pcStack_190);
      uVar3 = extraout_XMM0_Qa_00;
    }
    if (*pcStack_190 == '\0') {
      uVar3 = UISystem_779f0(uVar3,acStack_88);
      uVar6 = 2;
    }
    else {
      local_var_158 = 0;
      local_var_150 = 0xf;
      local_var_168 = 0;
      uVar6 = 0xc;
      MathCoreCalculator0(&local_var_168,&memory_allocator_3920_ptr,0xc);
      local_var_1a8 = 4;
      uVar3 = CoreEngine_472D60(&pcStack_198,acStack_e8,&local_var_168,0);
    }
    local_var_1a8 = uVar6;
    UISystem_776c0(param_1,uVar3);
    uVar7 = uVar6 | 1;
    local_var_1a8 = uVar7;
    if (((uVar6 & 8) != 0) &&
       (uVar7 = uVar6 & 0xfffffff7 | 1, local_var_1a8 = uVar7, acStack_e8[0] != '\0')) {
      pcStack_1a0 = acStack_e0;
      SystemPerformanceOptimizer(stack_array_c0);
      SystemPerformanceOptimizer(acStack_e0);
    }
    if ((uVar7 & 4) != 0) {
      uVar7 = uVar7 & 0xfffffffb;
      local_var_1a8 = uVar7;
      if (0xf < local_var_150) {
        uVar5 = local_var_150 + 1;
        lVar1 = CONCAT71(local_var_167,local_var_168);
        lVar4 = lVar1;
        if (0xfff < uVar5) {
          uVar5 = local_var_150 + 0x28;
          lVar4 = *(int64_t *)(lVar1 + -8);
          if (0x1f < (lVar1 - lVar4) - 8U) {
// WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar4,uVar5);
      }
      local_var_158 = 0;
      local_var_150 = 0xf;
      local_var_168 = 0;
    }
    if (((uVar7 & 2) != 0) && (local_var_1a8 = uVar7 & 0xfffffffd, acStack_88[0] != '\0')) {
      pcStack_1a0 = acStack_80;
      SystemPerformanceOptimizer(stack_array_60);
      SystemPerformanceOptimizer(acStack_80);
    }
    if (acStack_148[0] == '\0') goto LAB_18047695f;
    pcStack_1a0 = &cStack_140;
    SystemPerformanceOptimizer(&local_var_120);
  }
  else {
    *param_1 = acStack_148[0];
    pcStack_1a0 = param_1 + 8;
    *(uint64_t *)pcStack_1a0 = CONCAT71(local_var_13f,cStack_140);
    *(uint64_t *)(param_1 + 0x10) = local_var_138;
    *(uint64_t *)(param_1 + 0x18) = local_var_130;
    *(uint64_t *)(param_1 + 0x20) = local_var_128;
    local_var_130 = 0;
    local_var_128 = 0xf;
    cStack_140 = '\0';
    *(uint64_t *)(param_1 + 0x28) = CONCAT71(local_var_11f,local_var_120);
    *(uint64_t *)(param_1 + 0x30) = local_var_118;
    *(uint64_t *)(param_1 + 0x38) = local_var_110;
    *(uint64_t *)(param_1 + 0x40) = local_var_108;
    local_var_110 = 0;
    local_var_108 = 0xf;
    local_var_120 = 0;
    *(uint64_t *)(param_1 + 0x48) = local_var_100;
    *(uint64_t *)(param_1 + 0x50) = local_var_f8;
    local_var_1a8 = 1;
    if (acStack_148[0] == '\0') goto LAB_18047695f;
    pcStack_1a0 = &cStack_140;
    SystemPerformanceOptimizer(&local_var_120);
  }
  SystemPerformanceOptimizer(&cStack_140);
LAB_18047695f:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_1c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_76990(uint64_t param_1,byte *param_2)
void UISystem_76990(uint64_t param_1,byte *param_2)
{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int32_t *puVar5;
  byte *pbVar6;
  int8_t stack_array_48 [32];
  int32_t local_var_28;
  int16_t local_var_24;
  int8_t local_var_22;
  uint64_t local_var_20;
  local_var_20 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_48;
  local_var_28 = 0x3030755c;
  local_var_24 = 0x4848;
  local_var_22 = 0;
  SystemCore_ResourceManager(param_1,0x22);
  pbVar4 = param_2;
  if (0xf < *(uint64_t *)(param_2 + 0x18)) {
    pbVar4 = *(byte **)param_2;
  }
  pbVar2 = pbVar4 + *(int64_t *)(param_2 + 0x10);
  while (pbVar4 != pbVar2) {
    bVar3 = *pbVar4;
    pbVar6 = pbVar4;
    while (((bVar3 != 0x22 && (bVar3 != 0x5c)) && (0x1f < bVar3))) {
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar1;
    }
    _write___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_PEBD_J_Z
              (param_1,pbVar4,(int64_t)pbVar6 - (int64_t)pbVar4);
    if (pbVar6 == pbVar2) break;
    local_var_24 = CONCAT11((&rendering_buffer_2048_ptr)[*pbVar6 & 0xf],(&rendering_buffer_2048_ptr)[*pbVar6 >> 4]);
    bVar3 = *pbVar6;
    if (bVar3 == 0x22) {
      puVar5 = (int32_t *)&memory_allocator_3864_ptr;
    }
    else if (bVar3 == 0x5c) {
      puVar5 = (int32_t *)&memory_allocator_3868_ptr;
    }
    else if (bVar3 == 0xd) {
      puVar5 = (int32_t *)&memory_allocator_3872_ptr;
    }
    else if (bVar3 == 10) {
      puVar5 = (int32_t *)&memory_allocator_3876_ptr;
    }
    else if (bVar3 == 8) {
      puVar5 = (int32_t *)&memory_allocator_3944_ptr;
    }
    else if (bVar3 == 0xc) {
      puVar5 = (int32_t *)&memory_allocator_3948_ptr;
    }
    else {
      puVar5 = &local_var_28;
      if (bVar3 == 9) {
        puVar5 = (int32_t *)&memory_allocator_3952_ptr;
      }
    }
    SystemCore_Synchronizer(param_1,puVar5);
    pbVar4 = pbVar6 + 1;
  }
  SystemCore_ResourceManager(param_1,0x22);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_20 ^ (uint64_t)stack_array_48);
}
// 函数: void UISystem_769f3(byte *param_1)
void UISystem_769f3(byte *param_1)
{
  byte *pbVar1;
  byte bVar2;
  byte *unaff_RSI;
  uint64_t local_var_28;
  do {
    bVar2 = *param_1;
    while (((bVar2 != 0x22 && (bVar2 != 0x5c)) && (0x1f < bVar2))) {
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    }
    _write___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_PEBD_J_Z();
    if (param_1 == unaff_RSI) break;
    SystemCore_Synchronizer();
    param_1 = param_1 + 1;
  } while (param_1 != unaff_RSI);
  SystemCore_ResourceManager();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_76ae6(void)
void UISystem_76ae6(void)
{
  uint64_t local_var_28;
  SystemCore_ResourceManager();
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_76b10(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void UISystem_76b10(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  uint64_t *puVar4;
  char *pcVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int8_t stack_array_38 [8];
  int64_t *plStack_30;
  lVar12 = 0;
  plVar7 = (int64_t *)*param_2;
  if (((plVar7 == (int64_t *)0x0) ||
      (pcVar5 = (char *)(**(code **)(*plVar7 + 8))
                                  (plVar7,0x180d48f00,param_3,param_4,0,0xfffffffffffffffe),
      pcVar5 == (char *)0x0)) || (pcVar5 == "")) {
    plVar7 = (int64_t *)*param_2;
    if (((plVar7 != (int64_t *)0x0) &&
        (puVar6 = (uint64_t *)(**(code **)(*plVar7 + 8))(plVar7,0x180d48efc),
        puVar6 != (uint64_t *)0x0)) && (puVar6 != (uint64_t *)&memory_allocator_3960_ptr)) {
      __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_N_Z(param_1,*puVar6);
      return;
    }
    plVar7 = (int64_t *)*param_2;
    if (((plVar7 != (int64_t *)0x0) &&
        (plVar7 = (int64_t *)(**(code **)(*plVar7 + 8))(plVar7,0x180d48ef8),
        plVar7 != (int64_t *)0x0)) && (plVar7 != (int64_t *)0x180d49d90)) {
      SystemCore_ResourceManager(param_1,0x5b);
      lVar13 = plVar7[1] - *plVar7 >> 4;
      if (lVar13 != 0) {
        do {
          plVar7 = (int64_t *)*param_2;
          lVar11 = 0x180d49d90;
          if ((plVar7 != (int64_t *)0x0) &&
             (lVar8 = (**(code **)(*plVar7 + 8))(plVar7,0x180d48ef8), lVar8 != 0)) {
            lVar11 = lVar8;
          }
          uVar9 = UISystem_72bd0(lVar11,stack_array_38,lVar12);
          UISystem_76b10(param_1,uVar9);
          plVar7 = plStack_30;
          if (plStack_30 != (int64_t *)0x0) {
            LOCK();
            plVar1 = plStack_30 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar2 = (int *)((int64_t)plVar7 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7);
              }
            }
          }
          if (lVar12 != lVar13 + -1) {
            SystemCore_ResourceManager(param_1,0x2c);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != lVar13);
      }
      SystemCore_ResourceManager(param_1,0x5d);
      return;
    }
    plVar7 = (int64_t *)*param_2;
    if (((plVar7 != (int64_t *)0x0) &&
        (lVar13 = (**(code **)(*plVar7 + 8))(plVar7,0x180d48ef0), lVar13 != 0)) &&
       (lVar13 != 0x180d49d50)) {
      SystemCore_ResourceManager(param_1,0x7b);
      lVar11 = *(int64_t *)(lVar13 + 0x10);
      puVar6 = *(uint64_t **)(lVar13 + 8);
      for (puVar4 = (uint64_t *)*puVar6; puVar4 != puVar6; puVar4 = (uint64_t *)*puVar4) {
        UISystem_76990(param_1,puVar4 + 2);
        SystemCore_ResourceManager(param_1,0x3a);
        UISystem_76b10(param_1,puVar4 + 6);
        lVar12 = lVar12 + 1;
        if (lVar12 != lVar11) {
          SystemCore_ResourceManager(param_1,0x2c);
        }
      }
      SystemCore_ResourceManager(param_1,0x7d);
      return;
    }
    param_2 = (int64_t *)*param_2;
    if (((param_2 != (int64_t *)0x0) &&
        (puVar10 = (void *)(**(code **)(*param_2 + 8))(param_2,0x180d48ef4),
        puVar10 != (void *)0x0)) && (puVar10 != &system_data_c170)) {
      UISystem_76990(param_1,puVar10);
      return;
    }
    puVar10 = &processed_var_7160_ptr;
  }
  else {
    puVar10 = &rendering_buffer_2336_ptr;
    if (*pcVar5 != '\0') {
      puVar10 = &rendering_buffer_2328_ptr;
    }
  }
  SystemCore_Synchronizer(param_1,puVar10);
  return;
}
uint64_t
UISystem_76dc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t lStack_f8;
  int8_t stack_array_f0 [8];
  int8_t stack_array_e8 [120];
  int8_t stack_array_70 [104];
  uVar2 = 0xfffffffffffffffe;
  uVar1 = 0;
  UISystem_76ff0(&lStack_f8);
  UISystem_76b10(&lStack_f8,param_2,param_3,param_4,uVar1,uVar2);
  UISystem_76f30(&lStack_f8,param_1);
  *(void **)(stack_array_f0 + (int64_t)*(int *)(lStack_f8 + 4) + -8) = &processed_var_4024_ptr;
  *(int *)(stack_array_e8 + (int64_t)*(int *)(lStack_f8 + 4) + -0x14) = *(int *)(lStack_f8 + 4) + -0x88
  ;
  UISystem_77570(stack_array_f0);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(stack_array_e8);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(stack_array_70);
  return param_1;
}
// 函数: void UISystem_76e90(int64_t *param_1)
void UISystem_76e90(int64_t *param_1)
{
  int64_t *plVar1;
  plVar1 = param_1 + 0x11;
  *(void **)((int64_t)*(int *)(*param_1 + 4) + -0x88 + (int64_t)plVar1) = &processed_var_4024_ptr;
  *(int *)((int64_t)*(int *)(*param_1 + 4) + -0x8c + (int64_t)plVar1) =
       *(int *)(*param_1 + 4) + -0x88;
  UISystem_77570(param_1 + 1);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(param_1 + 2);
// WARNING: Could not recover jumptable at 0x000180476efc. Too many branches
// WARNING: Treating indirect jump as call
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(plVar1);
  return;
}