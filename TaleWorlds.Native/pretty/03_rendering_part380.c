#include "TaleWorlds.Native.Split.h"

// 03_rendering_part380.c - 7 个函数

// 函数: void FUN_180476030(uint64_t param_1,longlong param_2,uint64_t param_3)
void FUN_180476030(uint64_t param_1,longlong param_2,uint64_t param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int8_t auStack_468 [32];
  uint uStack_448;
  uint64_t *puStack_440;
  uint64_t uStack_438;
  uint64_t uStack_428;
  int8_t uStack_418;
  uint8_t uStack_417;
  uint64_t uStack_408;
  ulonglong uStack_400;
  char acStack_3f8 [8];
  uint64_t uStack_3f0;
  uint64_t uStack_3e8;
  uint64_t uStack_3e0;
  uint64_t uStack_3d8;
  uint64_t uStack_3d0;
  uint64_t uStack_3c8;
  uint64_t uStack_3c0;
  uint64_t uStack_3b8;
  uint64_t uStack_3b0;
  uint64_t uStack_3a8;
  char acStack_398 [8];
  uint64_t uStack_390;
  uint64_t uStack_388;
  uint64_t uStack_380;
  uint64_t uStack_378;
  uint64_t uStack_370;
  uint64_t uStack_368;
  uint64_t uStack_360;
  uint64_t uStack_358;
  uint64_t uStack_350;
  uint64_t uStack_348;
  char acStack_338 [8];
  uint64_t uStack_330;
  uint64_t uStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  uint64_t uStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  uint64_t uStack_2f8;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  char acStack_2d8 [8];
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  uint64_t uStack_290;
  uint64_t uStack_288;
  char acStack_278 [8];
  uint64_t auStack_270 [4];
  int8_t auStack_250 [56];
  char acStack_218 [8];
  uint64_t auStack_210 [4];
  int8_t auStack_1f0 [56];
  char acStack_1b8 [8];
  uint64_t auStack_1b0 [4];
  int8_t auStack_190 [56];
  char acStack_158 [8];
  uint64_t auStack_150 [4];
  int8_t auStack_130 [56];
  char acStack_f8 [8];
  uint64_t auStack_f0 [4];
  int8_t auStack_d0 [56];
  char acStack_98 [8];
  uint64_t auStack_90 [4];
  int8_t auStack_70 [56];
  ulonglong uStack_38;
  
  uStack_438 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_468;
  uStack_448 = 0;
  cVar1 = **(char **)(param_2 + 8);
  uStack_428 = param_1;
  if (cVar1 == '\0') {
    uStack_408 = 0;
    uStack_400 = 0xf;
    uStack_418 = 0;
    FUN_1800671b0(&uStack_418,&unknown_var_3880_ptr,0x13);
    FUN_180472d60(param_2,param_1,&uStack_418,0);
    uStack_448 = 1;
    if (0xf < uStack_400) {
      uVar5 = uStack_400 + 1;
      lVar2 = CONCAT71(uStack_417,uStack_418);
      lVar4 = lVar2;
      if (0xfff < uVar5) {
        uVar5 = uStack_400 + 0x28;
        lVar4 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar4) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar4,uVar5);
    }
    uStack_408 = 0;
    uStack_400 = 0xf;
    uStack_418 = 0;
  }
  else {
    if (cVar1 == '{') {
      pcVar3 = (char *)FUN_180474d30(acStack_98);
      uVar6 = 2;
    }
    else {
      if (cVar1 == '[') {
        pcVar3 = (char *)FUN_180474260(acStack_f8);
        uVar6 = 4;
      }
      else {
        if (cVar1 == '\"') {
          pcVar3 = (char *)FUN_180473be0(acStack_158);
          uVar6 = 8;
        }
        else {
          if ((cVar1 == 't') || (cVar1 == 'f')) {
            pcVar3 = (char *)FUN_180473fd0(acStack_278);
            uVar6 = 0x80;
          }
          else {
            lVar4 = strchr(&unknown_var_3904_ptr,(int)cVar1);
            if (lVar4 == 0) {
              pcVar3 = (char *)FUN_180473e00(acStack_218,param_2,param_3);
              uVar6 = 0x20;
            }
            else {
              pcVar3 = (char *)FUN_180475c80(acStack_1b8);
              uVar6 = 0x10;
            }
            acStack_2d8[0] = *pcVar3;
            if (*pcVar3 != '\0') {
              puStack_440 = &uStack_2d0;
              uStack_2d0 = *(uint64_t *)(pcVar3 + 8);
              uStack_2c8 = *(uint64_t *)(pcVar3 + 0x10);
              uStack_2c0 = *(uint64_t *)(pcVar3 + 0x18);
              uStack_2b8 = *(uint64_t *)(pcVar3 + 0x20);
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
              uStack_2b0 = *(uint64_t *)(pcVar3 + 0x28);
              uStack_2a8 = *(uint64_t *)(pcVar3 + 0x30);
              uStack_2a0 = *(uint64_t *)(pcVar3 + 0x38);
              uStack_298 = *(uint64_t *)(pcVar3 + 0x40);
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
              uStack_290 = *(uint64_t *)(pcVar3 + 0x48);
              uStack_288 = *(uint64_t *)(pcVar3 + 0x50);
            }
            pcVar3 = acStack_2d8;
            uVar6 = uVar6 | 0x40;
          }
          acStack_338[0] = *pcVar3;
          if (*pcVar3 != '\0') {
            puStack_440 = &uStack_330;
            uStack_320 = 0;
            uStack_318 = 0;
            uStack_330 = *(uint64_t *)(pcVar3 + 8);
            uStack_328 = *(uint64_t *)(pcVar3 + 0x10);
            uStack_320 = *(uint64_t *)(pcVar3 + 0x18);
            uStack_318 = *(uint64_t *)(pcVar3 + 0x20);
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
            uStack_300 = 0;
            uStack_2f8 = 0;
            uStack_310 = *(uint64_t *)(pcVar3 + 0x28);
            uStack_308 = *(uint64_t *)(pcVar3 + 0x30);
            uStack_300 = *(uint64_t *)(pcVar3 + 0x38);
            uStack_2f8 = *(uint64_t *)(pcVar3 + 0x40);
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
            uStack_2f0 = *(uint64_t *)(pcVar3 + 0x48);
            uStack_2e8 = *(uint64_t *)(pcVar3 + 0x50);
          }
          pcVar3 = acStack_338;
          uVar6 = uVar6 | 0x100;
        }
        acStack_398[0] = *pcVar3;
        if (*pcVar3 != '\0') {
          puStack_440 = &uStack_390;
          uStack_380 = 0;
          uStack_378 = 0;
          uStack_390 = *(uint64_t *)(pcVar3 + 8);
          uStack_388 = *(uint64_t *)(pcVar3 + 0x10);
          uStack_380 = *(uint64_t *)(pcVar3 + 0x18);
          uStack_378 = *(uint64_t *)(pcVar3 + 0x20);
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
          uStack_360 = 0;
          uStack_358 = 0;
          uStack_370 = *(uint64_t *)(pcVar3 + 0x28);
          uStack_368 = *(uint64_t *)(pcVar3 + 0x30);
          uStack_360 = *(uint64_t *)(pcVar3 + 0x38);
          uStack_358 = *(uint64_t *)(pcVar3 + 0x40);
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
          uStack_350 = *(uint64_t *)(pcVar3 + 0x48);
          uStack_348 = *(uint64_t *)(pcVar3 + 0x50);
        }
        pcVar3 = acStack_398;
        uVar6 = uVar6 | 0x200;
      }
      acStack_3f8[0] = *pcVar3;
      if (acStack_3f8[0] != '\0') {
        puStack_440 = &uStack_3f0;
        uStack_3f0 = *(uint64_t *)(pcVar3 + 8);
        uStack_3e8 = *(uint64_t *)(pcVar3 + 0x10);
        uStack_3e0 = *(uint64_t *)(pcVar3 + 0x18);
        uStack_3d8 = *(uint64_t *)(pcVar3 + 0x20);
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
        uStack_3d0 = *(uint64_t *)(pcVar3 + 0x28);
        uStack_3c8 = *(uint64_t *)(pcVar3 + 0x30);
        uStack_3c0 = *(uint64_t *)(pcVar3 + 0x38);
        uStack_3b8 = *(uint64_t *)(pcVar3 + 0x40);
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
        uStack_3b0 = *(uint64_t *)(pcVar3 + 0x48);
        uStack_3a8 = *(uint64_t *)(pcVar3 + 0x50);
      }
      pcVar3 = acStack_3f8;
      uVar6 = uVar6 | 0x400;
    }
    uStack_448 = uVar6;
    FUN_1804776c0(param_1,pcVar3);
    uVar7 = uVar6 | 1;
    uStack_448 = uVar7;
    if (uVar6 != 0) {
      uVar7 = uVar6 & 0xfffffbff | 1;
      uStack_448 = uVar7;
      if (acStack_3f8[0] != '\0') {
        puStack_440 = &uStack_3f0;
        FUN_180067070(&uStack_3d0);
        FUN_180067070(&uStack_3f0);
      }
    }
    if ((uVar7 >> 9 & 1) != 0) {
      uVar7 = uVar7 & 0xfffffdff;
      uStack_448 = uVar7;
      if (acStack_398[0] != '\0') {
        puStack_440 = &uStack_390;
        FUN_180067070(&uStack_370);
        FUN_180067070(&uStack_390);
      }
    }
    if ((uVar7 >> 8 & 1) != 0) {
      uVar7 = uVar7 & 0xfffffeff;
      uStack_448 = uVar7;
      if (acStack_338[0] != '\0') {
        puStack_440 = &uStack_330;
        FUN_180067070(&uStack_310);
        FUN_180067070(&uStack_330);
      }
    }
    if ((char)uVar7 < '\0') {
      uVar7 = uVar7 & 0xffffff7f;
      uStack_448 = uVar7;
      if (acStack_278[0] != '\0') {
        puStack_440 = auStack_270;
        FUN_180067070(auStack_250);
        FUN_180067070(auStack_270);
      }
    }
    if ((uVar7 & 0x40) != 0) {
      uVar7 = uVar7 & 0xffffffbf;
      uStack_448 = uVar7;
      if (acStack_2d8[0] != '\0') {
        puStack_440 = &uStack_2d0;
        FUN_180067070(&uStack_2b0);
        FUN_180067070(&uStack_2d0);
      }
    }
    if ((uVar7 & 0x20) != 0) {
      uVar7 = uVar7 & 0xffffffdf;
      uStack_448 = uVar7;
      if (acStack_218[0] != '\0') {
        puStack_440 = auStack_210;
        FUN_180067070(auStack_1f0);
        FUN_180067070(auStack_210);
      }
    }
    if ((uVar7 & 0x10) != 0) {
      uVar7 = uVar7 & 0xffffffef;
      uStack_448 = uVar7;
      if (acStack_1b8[0] != '\0') {
        puStack_440 = auStack_1b0;
        FUN_180067070(auStack_190);
        FUN_180067070(auStack_1b0);
      }
    }
    if ((uVar7 & 8) != 0) {
      uVar7 = uVar7 & 0xfffffff7;
      uStack_448 = uVar7;
      if (acStack_158[0] != '\0') {
        puStack_440 = auStack_150;
        FUN_180067070(auStack_130);
        FUN_180067070(auStack_150);
      }
    }
    if ((uVar7 & 4) != 0) {
      uVar7 = uVar7 & 0xfffffffb;
      uStack_448 = uVar7;
      if (acStack_f8[0] != '\0') {
        puStack_440 = auStack_f0;
        FUN_180067070(auStack_d0);
        FUN_180067070(auStack_f0);
      }
    }
    if (((uVar7 & 2) != 0) && (uStack_448 = uVar7 & 0xfffffffd, acStack_98[0] != '\0')) {
      puStack_440 = auStack_90;
      FUN_180067070(auStack_70);
      FUN_180067070(auStack_90);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_468);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180476690(char *param_1,char *param_2,uint64_t param_3)
void FUN_180476690(char *param_1,char *param_2,uint64_t param_3)

{
  longlong lVar1;
  int iVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int8_t auStack_1c8 [32];
  uint uStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  uint64_t uStack_188;
  char *pcStack_178;
  int8_t uStack_168;
  uint8_t uStack_167;
  uint64_t uStack_158;
  ulonglong uStack_150;
  char acStack_148 [8];
  char cStack_140;
  uint8_t uStack_13f;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  int8_t uStack_120;
  uint8_t uStack_11f;
  uint64_t uStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  char acStack_e8 [8];
  char acStack_e0 [32];
  int8_t auStack_c0 [56];
  char acStack_88 [8];
  char acStack_80 [32];
  int8_t auStack_60 [56];
  ulonglong uStack_28;
  
  uStack_188 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  uStack_1a8 = 0;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
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
  FUN_180476030(acStack_148,&pcStack_198,param_3,0x14);
  if (acStack_148[0] == '\0') {
    iVar2 = isspace((int)*pcStack_190);
    uVar3 = extraout_XMM0_Qa;
    while (iVar2 != 0) {
      pcStack_190 = pcStack_190 + 1;
      iVar2 = isspace((int)*pcStack_190);
      uVar3 = extraout_XMM0_Qa_00;
    }
    if (*pcStack_190 == '\0') {
      uVar3 = FUN_1804779f0(uVar3,acStack_88);
      uVar6 = 2;
    }
    else {
      uStack_158 = 0;
      uStack_150 = 0xf;
      uStack_168 = 0;
      uVar6 = 0xc;
      FUN_1800671b0(&uStack_168,&unknown_var_3920_ptr,0xc);
      uStack_1a8 = 4;
      uVar3 = FUN_180472d60(&pcStack_198,acStack_e8,&uStack_168,0);
    }
    uStack_1a8 = uVar6;
    FUN_1804776c0(param_1,uVar3);
    uVar7 = uVar6 | 1;
    uStack_1a8 = uVar7;
    if (((uVar6 & 8) != 0) &&
       (uVar7 = uVar6 & 0xfffffff7 | 1, uStack_1a8 = uVar7, acStack_e8[0] != '\0')) {
      pcStack_1a0 = acStack_e0;
      FUN_180067070(auStack_c0);
      FUN_180067070(acStack_e0);
    }
    if ((uVar7 & 4) != 0) {
      uVar7 = uVar7 & 0xfffffffb;
      uStack_1a8 = uVar7;
      if (0xf < uStack_150) {
        uVar5 = uStack_150 + 1;
        lVar1 = CONCAT71(uStack_167,uStack_168);
        lVar4 = lVar1;
        if (0xfff < uVar5) {
          uVar5 = uStack_150 + 0x28;
          lVar4 = *(longlong *)(lVar1 + -8);
          if (0x1f < (lVar1 - lVar4) - 8U) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar4,uVar5);
      }
      uStack_158 = 0;
      uStack_150 = 0xf;
      uStack_168 = 0;
    }
    if (((uVar7 & 2) != 0) && (uStack_1a8 = uVar7 & 0xfffffffd, acStack_88[0] != '\0')) {
      pcStack_1a0 = acStack_80;
      FUN_180067070(auStack_60);
      FUN_180067070(acStack_80);
    }
    if (acStack_148[0] == '\0') goto LAB_18047695f;
    pcStack_1a0 = &cStack_140;
    FUN_180067070(&uStack_120);
  }
  else {
    *param_1 = acStack_148[0];
    pcStack_1a0 = param_1 + 8;
    *(ulonglong *)pcStack_1a0 = CONCAT71(uStack_13f,cStack_140);
    *(uint64_t *)(param_1 + 0x10) = uStack_138;
    *(uint64_t *)(param_1 + 0x18) = uStack_130;
    *(uint64_t *)(param_1 + 0x20) = uStack_128;
    uStack_130 = 0;
    uStack_128 = 0xf;
    cStack_140 = '\0';
    *(ulonglong *)(param_1 + 0x28) = CONCAT71(uStack_11f,uStack_120);
    *(uint64_t *)(param_1 + 0x30) = uStack_118;
    *(uint64_t *)(param_1 + 0x38) = uStack_110;
    *(uint64_t *)(param_1 + 0x40) = uStack_108;
    uStack_110 = 0;
    uStack_108 = 0xf;
    uStack_120 = 0;
    *(uint64_t *)(param_1 + 0x48) = uStack_100;
    *(uint64_t *)(param_1 + 0x50) = uStack_f8;
    uStack_1a8 = 1;
    if (acStack_148[0] == '\0') goto LAB_18047695f;
    pcStack_1a0 = &cStack_140;
    FUN_180067070(&uStack_120);
  }
  FUN_180067070(&cStack_140);
LAB_18047695f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180476990(uint64_t param_1,byte *param_2)
void FUN_180476990(uint64_t param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int32_t *puVar5;
  byte *pbVar6;
  int8_t auStack_48 [32];
  int32_t uStack_28;
  int16_t uStack_24;
  int8_t uStack_22;
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_48;
  uStack_28 = 0x3030755c;
  uStack_24 = 0x4848;
  uStack_22 = 0;
  FUN_1800a0e50(param_1,0x22);
  pbVar4 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar4 = *(byte **)param_2;
  }
  pbVar2 = pbVar4 + *(longlong *)(param_2 + 0x10);
  while (pbVar4 != pbVar2) {
    bVar3 = *pbVar4;
    pbVar6 = pbVar4;
    while (((bVar3 != 0x22 && (bVar3 != 0x5c)) && (0x1f < bVar3))) {
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar1;
    }
    _write___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_PEBD_J_Z
              (param_1,pbVar4,(longlong)pbVar6 - (longlong)pbVar4);
    if (pbVar6 == pbVar2) break;
    uStack_24 = CONCAT11((&unknown_var_2048_ptr)[*pbVar6 & 0xf],(&unknown_var_2048_ptr)[*pbVar6 >> 4]);
    bVar3 = *pbVar6;
    if (bVar3 == 0x22) {
      puVar5 = (int32_t *)&unknown_var_3864_ptr;
    }
    else if (bVar3 == 0x5c) {
      puVar5 = (int32_t *)&unknown_var_3868_ptr;
    }
    else if (bVar3 == 0xd) {
      puVar5 = (int32_t *)&unknown_var_3872_ptr;
    }
    else if (bVar3 == 10) {
      puVar5 = (int32_t *)&unknown_var_3876_ptr;
    }
    else if (bVar3 == 8) {
      puVar5 = (int32_t *)&unknown_var_3944_ptr;
    }
    else if (bVar3 == 0xc) {
      puVar5 = (int32_t *)&unknown_var_3948_ptr;
    }
    else {
      puVar5 = &uStack_28;
      if (bVar3 == 9) {
        puVar5 = (int32_t *)&unknown_var_3952_ptr;
      }
    }
    FUN_1800a1160(param_1,puVar5);
    pbVar4 = pbVar6 + 1;
  }
  FUN_1800a0e50(param_1,0x22);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_48);
}





// 函数: void FUN_1804769f3(byte *param_1)
void FUN_1804769f3(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *unaff_RSI;
  ulonglong in_stack_00000028;
  
  do {
    bVar2 = *param_1;
    while (((bVar2 != 0x22 && (bVar2 != 0x5c)) && (0x1f < bVar2))) {
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    }
    _write___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_PEBD_J_Z();
    if (param_1 == unaff_RSI) break;
    FUN_1800a1160();
    param_1 = param_1 + 1;
  } while (param_1 != unaff_RSI);
  FUN_1800a0e50();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000028 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180476ae6(void)
void FUN_180476ae6(void)

{
  ulonglong in_stack_00000028;
  
  FUN_1800a0e50();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000028 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180476b10(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_180476b10(uint64_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint64_t *puVar4;
  char *pcVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  longlong lVar8;
  uint64_t uVar9;
  void *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int8_t auStack_38 [8];
  longlong *plStack_30;
  
  lVar12 = 0;
  plVar7 = (longlong *)*param_2;
  if (((plVar7 == (longlong *)0x0) ||
      (pcVar5 = (char *)(**(code **)(*plVar7 + 8))
                                  (plVar7,0x180d48f00,param_3,param_4,0,0xfffffffffffffffe),
      pcVar5 == (char *)0x0)) || (pcVar5 == "")) {
    plVar7 = (longlong *)*param_2;
    if (((plVar7 != (longlong *)0x0) &&
        (puVar6 = (uint64_t *)(**(code **)(*plVar7 + 8))(plVar7,0x180d48efc),
        puVar6 != (uint64_t *)0x0)) && (puVar6 != (uint64_t *)&unknown_var_3960_ptr)) {
      __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01_N_Z(param_1,*puVar6);
      return;
    }
    plVar7 = (longlong *)*param_2;
    if (((plVar7 != (longlong *)0x0) &&
        (plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,0x180d48ef8),
        plVar7 != (longlong *)0x0)) && (plVar7 != (longlong *)0x180d49d90)) {
      FUN_1800a0e50(param_1,0x5b);
      lVar13 = plVar7[1] - *plVar7 >> 4;
      if (lVar13 != 0) {
        do {
          plVar7 = (longlong *)*param_2;
          lVar11 = 0x180d49d90;
          if ((plVar7 != (longlong *)0x0) &&
             (lVar8 = (**(code **)(*plVar7 + 8))(plVar7,0x180d48ef8), lVar8 != 0)) {
            lVar11 = lVar8;
          }
          uVar9 = FUN_180472bd0(lVar11,auStack_38,lVar12);
          FUN_180476b10(param_1,uVar9);
          plVar7 = plStack_30;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_30 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7);
              }
            }
          }
          if (lVar12 != lVar13 + -1) {
            FUN_1800a0e50(param_1,0x2c);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != lVar13);
      }
      FUN_1800a0e50(param_1,0x5d);
      return;
    }
    plVar7 = (longlong *)*param_2;
    if (((plVar7 != (longlong *)0x0) &&
        (lVar13 = (**(code **)(*plVar7 + 8))(plVar7,0x180d48ef0), lVar13 != 0)) &&
       (lVar13 != 0x180d49d50)) {
      FUN_1800a0e50(param_1,0x7b);
      lVar11 = *(longlong *)(lVar13 + 0x10);
      puVar6 = *(uint64_t **)(lVar13 + 8);
      for (puVar4 = (uint64_t *)*puVar6; puVar4 != puVar6; puVar4 = (uint64_t *)*puVar4) {
        FUN_180476990(param_1,puVar4 + 2);
        FUN_1800a0e50(param_1,0x3a);
        FUN_180476b10(param_1,puVar4 + 6);
        lVar12 = lVar12 + 1;
        if (lVar12 != lVar11) {
          FUN_1800a0e50(param_1,0x2c);
        }
      }
      FUN_1800a0e50(param_1,0x7d);
      return;
    }
    param_2 = (longlong *)*param_2;
    if (((param_2 != (longlong *)0x0) &&
        (puVar10 = (void *)(**(code **)(*param_2 + 8))(param_2,0x180d48ef4),
        puVar10 != (void *)0x0)) && (puVar10 != &system_data_c170)) {
      FUN_180476990(param_1,puVar10);
      return;
    }
    puVar10 = &unknown_var_7160_ptr;
  }
  else {
    puVar10 = &unknown_var_2336_ptr;
    if (*pcVar5 != '\0') {
      puVar10 = &unknown_var_2328_ptr;
    }
  }
  FUN_1800a1160(param_1,puVar10);
  return;
}



uint64_t
FUN_180476dc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  longlong lStack_f8;
  int8_t auStack_f0 [8];
  int8_t auStack_e8 [120];
  int8_t auStack_70 [104];
  
  uVar2 = 0xfffffffffffffffe;
  uVar1 = 0;
  FUN_180476ff0(&lStack_f8);
  FUN_180476b10(&lStack_f8,param_2,param_3,param_4,uVar1,uVar2);
  FUN_180476f30(&lStack_f8,param_1);
  *(void **)(auStack_f0 + (longlong)*(int *)(lStack_f8 + 4) + -8) = &unknown_var_4024_ptr;
  *(int *)(auStack_e8 + (longlong)*(int *)(lStack_f8 + 4) + -0x14) = *(int *)(lStack_f8 + 4) + -0x88
  ;
  FUN_180477570(auStack_f0);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_e8);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_70);
  return param_1;
}





// 函数: void FUN_180476e90(longlong *param_1)
void FUN_180476e90(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x11;
  *(void **)((longlong)*(int *)(*param_1 + 4) + -0x88 + (longlong)plVar1) = &unknown_var_4024_ptr;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -0x8c + (longlong)plVar1) =
       *(int *)(*param_1 + 4) + -0x88;
  FUN_180477570(param_1 + 1);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(param_1 + 2);
                    // WARNING: Could not recover jumptable at 0x000180476efc. Too many branches
                    // WARNING: Treating indirect jump as call
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(plVar1);
  return;
}





