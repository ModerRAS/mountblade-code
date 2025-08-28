#include "TaleWorlds.Native.Split.h"

// 03_rendering_part557.c - 7 个函数

// 函数: void FUN_180575323(void)
void FUN_180575323(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x560) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180575360(longlong param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4,
void FUN_180575360(longlong param_1,uint64_t *param_2,uint64_t *param_3,int32_t param_4,
                  int32_t param_5,char param_6,int8_t param_7,uint64_t param_8)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int8_t auStack_268 [32];
  int32_t uStack_248;
  int32_t uStack_240;
  int32_t uStack_214;
  int32_t uStack_210;
  int32_t uStack_20c;
  int8_t auStack_208 [48];
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  int32_t uStack_198;
  int32_t uStack_194;
  int32_t uStack_190;
  int32_t uStack_18c;
  int32_t uStack_188;
  int32_t uStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int8_t uStack_174;
  int8_t uStack_173;
  int8_t uStack_172;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int8_t uStack_54;
  int32_t uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uStack_240 = 0;
  uStack_248 = 0;
  FUN_180662190(auStack_208,*(int8_t *)(param_1 + 0x25f9),*(int8_t *)(param_1 + 0x25fb),
                param_7);
  *(uint64_t *)(param_1 + 0xa440) = uVar1;
  *(uint64_t *)(param_1 + 0xa448) = uVar2;
  *(uint64_t *)(param_1 + 0xa450) = uVar3;
  *(uint64_t *)(param_1 + 0xa458) = uVar4;
  *(int32_t *)(param_1 + 0xa460) = param_4;
  *(int32_t *)(param_1 + 0xa464) = uStack_214;
  *(int32_t *)(param_1 + 0xa468) = uStack_210;
  *(int32_t *)(param_1 + 0xa46c) = uStack_20c;
  *(int8_t *)(param_1 + 0xa4d4) = uStack_174;
  *(int8_t *)(param_1 + 0xa4d5) = uStack_173;
  *(uint64_t *)(param_1 + 0xa5e0) = uStack_68;
  *(uint64_t *)(param_1 + 0xa5e8) = uStack_60;
  *(int8_t *)(param_1 + 0xa4d6) = uStack_172;
  *(uint64_t *)(param_1 + 0xa470) = uStack_1d8;
  *(uint64_t *)(param_1 + 0xa478) = uStack_1d0;
  *(uint64_t *)(param_1 + 0xa480) = uStack_1c8;
  *(uint64_t *)(param_1 + 0xa488) = uStack_1c0;
  *(uint64_t *)(param_1 + 0xa490) = uStack_1b8;
  *(uint64_t *)(param_1 + 0xa498) = uStack_1b0;
  *(uint64_t *)(param_1 + 0xa4a0) = uStack_1a8;
  *(uint64_t *)(param_1 + 0xa4a8) = uStack_1a0;
  *(int8_t *)(param_1 + 0xa5f4) = uStack_54;
  *(int32_t *)(param_1 + 0xa5f0) = uStack_58;
  *(int32_t *)(param_1 + 0xa4b0) = uStack_198;
  *(int32_t *)(param_1 + 0xa4b4) = uStack_194;
  *(int32_t *)(param_1 + 0xa4b8) = uStack_190;
  *(int32_t *)(param_1 + 0xa4bc) = uStack_18c;
  *(int32_t *)(param_1 + 0xa5f8) = uStack_50;
  *(int32_t *)(param_1 + 0xa4d0) = 3;
  *(int32_t *)(param_1 + 0xa4c0) = uStack_188;
  *(int32_t *)(param_1 + 0xa4c4) = uStack_184;
  *(int32_t *)(param_1 + 0xa4c8) = uStack_180;
  *(int32_t *)(param_1 + 0xa4cc) = uStack_17c;
  *(int8_t *)(param_1 + 0xa610) = 1;
  if (param_6 != '\0') {
    *(int32_t *)(param_1 + 0xa604) = 0x3f800000;
    *(int32_t *)(param_1 + 0xa608) = 0x40400000;
    if (*(float *)(param_1 + 0xa600) == 0.0) {
      FUN_1806631b0(param_1 + 0xa430,param_8);
    }
    *(int32_t *)(param_1 + 0xa600) = 0x3f800000;
    *(int32_t *)(param_1 + 0xa60c) = param_5;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_268);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180575540(longlong param_1,int param_2,int8_t param_3,uint64_t param_4,
void FUN_180575540(longlong param_1,int param_2,int8_t param_3,uint64_t param_4,
                  uint64_t *param_5,uint64_t *param_6,int32_t param_7,char param_8,
                  char param_9,byte param_10,int32_t param_11,uint64_t param_12)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  int8_t auStack_228 [32];
  int iStack_208;
  int32_t uStack_200;
  int8_t auStack_1f8 [32];
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
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
  int8_t uStack_164;
  int8_t uStack_163;
  int8_t uStack_162;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int8_t uStack_44;
  int32_t uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  iStack_208 = (uint)param_10 * 2;
  lVar7 = (longlong)param_2 * 0x1f0;
  uVar3 = *param_5;
  uVar4 = param_5[1];
  uVar5 = *param_6;
  uVar6 = param_6[1];
  uStack_200 = param_11;
  FUN_180662190(auStack_1f8,param_3);
  puVar1 = (uint64_t *)(lVar7 + 0xa250 + param_1);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (uint64_t *)(lVar7 + 0xa260 + param_1);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  *(int8_t *)(lVar7 + 0xa2e4 + param_1) = uStack_164;
  puVar1 = (uint64_t *)(lVar7 + 0xa3f0 + param_1);
  *puVar1 = uStack_58;
  puVar1[1] = uStack_50;
  *(int8_t *)(lVar7 + 0xa2e5 + param_1) = uStack_163;
  puVar1 = (uint64_t *)(lVar7 + 0xa270 + param_1);
  *puVar1 = uStack_1d8;
  puVar1[1] = uStack_1d0;
  puVar1 = (uint64_t *)(lVar7 + 0xa280 + param_1);
  *puVar1 = uStack_1c8;
  puVar1[1] = uStack_1c0;
  puVar1 = (uint64_t *)(lVar7 + 0xa290 + param_1);
  *puVar1 = uStack_1b8;
  puVar1[1] = uStack_1b0;
  puVar1 = (uint64_t *)(lVar7 + 0xa2a0 + param_1);
  *puVar1 = uStack_1a8;
  puVar1[1] = uStack_1a0;
  *(int8_t *)(lVar7 + 0xa2e6 + param_1) = uStack_162;
  puVar1 = (uint64_t *)(lVar7 + 0xa2b0 + param_1);
  *puVar1 = uStack_198;
  puVar1[1] = uStack_190;
  *(int8_t *)(lVar7 + 0xa404 + param_1) = uStack_44;
  *(int32_t *)(lVar7 + 0xa400 + param_1) = uStack_48;
  puVar2 = (int32_t *)(lVar7 + 0xa2c0 + param_1);
  *puVar2 = uStack_188;
  puVar2[1] = uStack_184;
  puVar2[2] = uStack_180;
  puVar2[3] = uStack_17c;
  *(int32_t *)(lVar7 + 0xa408 + param_1) = uStack_40;
  *(int32_t *)(lVar7 + 0xa2e0 + param_1) = 4;
  puVar2 = (int32_t *)(lVar7 + 0xa2d0 + param_1);
  *puVar2 = uStack_178;
  puVar2[1] = uStack_174;
  puVar2[2] = uStack_170;
  puVar2[3] = uStack_16c;
  *(int8_t *)(lVar7 + 0xa420 + param_1) = 1;
  if (param_9 == '\0') {
    if ((param_8 != '\0') || (*(float *)(lVar7 + 0xa414 + param_1) != 1.0)) {
      lVar8 = lVar7 + param_1;
      *(int32_t *)(lVar8 + 0xa418) = param_7;
      *(int32_t *)(lVar8 + 0xa414) = 0x3f800000;
      if (param_8 != '\0') {
        if (*(float *)(lVar8 + 42000) == 0.0) {
          FUN_1806631b0(lVar8 + 0xa240,param_12);
        }
        *(int32_t *)(lVar8 + 42000) = 0x3f800000;
      }
    }
    *(int32_t *)(lVar7 + 0xa41c + param_1) = 0x42200000;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_228);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180575760(longlong param_1,int8_t param_2,uint64_t *param_3,uint64_t *param_4,
void FUN_180575760(longlong param_1,int8_t param_2,uint64_t *param_3,uint64_t *param_4,
                  float param_5)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int8_t auStack_228 [32];
  int32_t uStack_208;
  int32_t uStack_200;
  int8_t auStack_1f8 [32];
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  int8_t uStack_164;
  int8_t uStack_163;
  int8_t uStack_162;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int8_t uStack_44;
  int32_t uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uStack_200 = 0;
  uStack_208 = 0;
  FUN_180662190(auStack_1f8,param_2,param_2,8);
  *(uint64_t *)(param_1 + 0xa250) = uVar1;
  *(uint64_t *)(param_1 + 0xa258) = uVar2;
  *(uint64_t *)(param_1 + 0xa260) = uVar3;
  *(uint64_t *)(param_1 + 0xa268) = uVar4;
  *(uint64_t *)(param_1 + 0xa3f0) = uStack_58;
  *(uint64_t *)(param_1 + 0xa3f8) = uStack_50;
  *(int8_t *)(param_1 + 0xa2e4) = uStack_164;
  *(uint64_t *)(param_1 + 0xa270) = uStack_1d8;
  *(uint64_t *)(param_1 + 0xa278) = uStack_1d0;
  *(uint64_t *)(param_1 + 0xa280) = uStack_1c8;
  *(uint64_t *)(param_1 + 0xa288) = uStack_1c0;
  *(uint64_t *)(param_1 + 0xa290) = uStack_1b8;
  *(uint64_t *)(param_1 + 0xa298) = uStack_1b0;
  *(uint64_t *)(param_1 + 0xa2a0) = uStack_1a8;
  *(uint64_t *)(param_1 + 0xa2a8) = uStack_1a0;
  *(int8_t *)(param_1 + 0xa2e5) = uStack_163;
  *(uint64_t *)(param_1 + 0xa2b0) = uStack_198;
  *(uint64_t *)(param_1 + 0xa2b8) = uStack_190;
  *(int8_t *)(param_1 + 0xa2e6) = uStack_162;
  *(uint64_t *)(param_1 + 0xa2c0) = uStack_188;
  *(uint64_t *)(param_1 + 0xa2c8) = uStack_180;
  *(int8_t *)(param_1 + 0xa404) = uStack_44;
  *(uint64_t *)(param_1 + 0xa2d0) = uStack_178;
  *(uint64_t *)(param_1 + 0xa2d8) = uStack_170;
  *(int32_t *)(param_1 + 0xa400) = uStack_48;
  *(int32_t *)(param_1 + 0xa2e0) = 4;
  *(int32_t *)(param_1 + 0xa408) = uStack_40;
  *(int8_t *)(param_1 + 0xa420) = 1;
  if (param_5 <= 0.0) {
    param_5 = *(float *)(param_1 + 0xa418);
  }
  *(float *)(param_1 + 0xa418) = param_5;
  *(int32_t *)(param_1 + 0xa414) = 0x3f800000;
  *(int32_t *)(param_1 + 0xa41c) = 0x42200000;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_228);
}





// 函数: void FUN_1805758f0(void)
void FUN_1805758f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



uint64_t FUN_180577070(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2500);
  if (lVar1 != 0) {
    uVar2 = FUN_18054f2b0(*(uint64_t *)(param_1 + 0x2518),
                          *(int32_t *)(*(longlong *)(lVar1 + 0xb0) + 0x20),
                          *(int32_t *)(*(longlong *)(lVar1 + 0x2590) + 0x10),param_2,
                          *(int32_t *)(lVar1 + 0x2450));
    return uVar2;
  }
  return 0xffffffff;
}





// 函数: void FUN_1805770c0(longlong param_1,uint64_t param_2)
void FUN_1805770c0(longlong param_1,uint64_t param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x3424);
  uVar2 = (bVar1 & 0x10 | 8) >> 3;
  if ((bVar1 & 0x28) == 0) {
    uVar2 = bVar1 >> 3 & 2;
  }
  FUN_18054f810(*(uint64_t *)(param_1 + 0x2518),param_2,*(int8_t *)(param_1 + 0x34bc),uVar2,0)
  ;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180577110(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180577110(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  int32_t param_5,float param_6)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  bool bVar5;
  longlong lVar6;
  int32_t uVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  longlong lVar11;
  int iVar12;
  int32_t uVar13;
  int8_t auStack_408 [32];
  int iStack_3e8;
  int8_t uStack_3e0;
  int iStack_3d8;
  uint64_t uStack_3d0;
  float fStack_3c8;
  int32_t uStack_3c4;
  longlong lStack_3c0;
  ulonglong uStack_3b8;
  longlong lStack_3b0;
  uint64_t uStack_3a8;
  int8_t auStack_398 [16];
  float fStack_388;
  float fStack_384;
  float fStack_380;
  int8_t auStack_378 [16];
  float fStack_368;
  float fStack_364;
  float fStack_360;
  int8_t auStack_358 [16];
  float fStack_348;
  int32_t uStack_340;
  int8_t auStack_338 [16];
  float fStack_328;
  int32_t uStack_320;
  uint64_t auStack_318 [42];
  uint64_t auStack_1c8 [42];
  ulonglong uStack_78;
  
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_408;
  uStack_3d0 = param_3;
  lStack_3b0 = param_4;
  if ((*(longlong *)(param_1 + 0x2500) != param_2) ||
     (*(longlong *)(param_1 + 0x2500) != *(longlong *)(param_1 + 0x2508))) {
    uVar13 = 0;
    if (param_6 == 0.0) {
      *(longlong *)(param_1 + 0x2500) = param_2;
    }
    else {
      *(float *)(param_1 + 0x25c8) = param_6;
    }
    *(longlong *)(param_1 + 0x2508) = param_2;
    if (param_2 != 0) {
      lStack_3c0 = (longlong)*(int *)(param_1 + 0xac) * 0xe0 + _DAT_180c95fb0;
      lVar11 = *(longlong *)(lStack_3c0 + 0x98);
      lVar1 = *(longlong *)(param_2 + 0xb0);
      iStack_3d8 = *(int *)(lVar1 + 0x20);
      uStack_3b8 = (ulonglong)iStack_3d8;
      if (((ulonglong)(*(longlong *)(lStack_3c0 + 0xa0) - lVar11 >> 3) <= uStack_3b8) ||
         (*(longlong *)(lVar11 + uStack_3b8 * 8) == 0)) {
        iVar12 = 0;
        lVar11 = 0;
        do {
          bVar5 = 5 < iVar12;
          iVar9 = 5;
          if (iVar12 < 5) {
            iVar9 = iVar12;
          }
          iStack_3e8._0_1_ = bVar5;
          uVar7 = FUN_180557990(lVar1,2,iVar9);
          iVar8 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
          if (iVar8 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
          }
          *(uint64_t *)((longlong)auStack_1c8 + lVar11) = uVar10;
          iStack_3e8._0_1_ = bVar5;
          uVar7 = FUN_180557a10(lVar1,2,iVar9);
          iVar8 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
          if (iVar8 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
          }
          *(uint64_t *)((longlong)auStack_318 + lVar11) = uVar10;
          iStack_3e8._0_1_ = bVar5;
          uVar7 = FUN_180557990(lVar1,1,iVar9);
          iVar8 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
          if (iVar8 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
          }
          *(uint64_t *)((longlong)auStack_1c8 + lVar11 + 0x10) = uVar10;
          iStack_3e8._0_1_ = bVar5;
          uVar7 = FUN_180557a10(lVar1,1,iVar9);
          iVar8 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
          if (iVar8 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
          }
          *(uint64_t *)((longlong)auStack_318 + lVar11 + 0x10) = uVar10;
          iStack_3e8._0_1_ = bVar5;
          uVar7 = FUN_180557990(lVar1,0,iVar9,0xffffffff);
          iVar8 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
          if (iVar8 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
          }
          *(uint64_t *)((longlong)auStack_1c8 + lVar11 + 0x18) = uVar10;
          iStack_3e8._0_1_ = bVar5;
          uVar7 = FUN_180557a10(lVar1,0,iVar9,0xffffffff);
          iVar8 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
          if (iVar8 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
          }
          *(uint64_t *)((longlong)auStack_318 + lVar11 + 0x18) = uVar10;
          iStack_3e8._0_1_ = bVar5;
          uVar7 = FUN_180557990(lVar1,5,iVar9);
          iVar8 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar8 = *(int *)(_DAT_180c95f68 + (longlong)iVar8 * 4);
          if (iVar8 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar8 * 8);
          }
          *(uint64_t *)((longlong)auStack_1c8 + lVar11 + 8) = uVar10;
          iStack_3e8._0_1_ = bVar5;
          uVar7 = FUN_180557a10(lVar1,5,iVar9);
          iVar9 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar9 = *(int *)(_DAT_180c95f68 + (longlong)iVar9 * 4);
          if (iVar9 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar9 * 8);
          }
          *(uint64_t *)((longlong)auStack_318 + lVar11 + 8) = uVar10;
          iStack_3e8._0_1_ = 0;
          uVar7 = FUN_180557990(lVar1,0xffffffff,1);
          iVar9 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar9 = *(int *)(_DAT_180c95f68 + (longlong)iVar9 * 4);
          if (iVar9 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar9 * 8);
          }
          *(uint64_t *)((longlong)auStack_1c8 + lVar11 + 0x20) = uVar10;
          iStack_3e8._0_1_ = 0;
          uVar7 = FUN_180557a10(lVar1,0xffffffff,1);
          iVar9 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar9 = *(int *)(_DAT_180c95f68 + (longlong)iVar9 * 4);
          if (iVar9 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar9 * 8);
          }
          *(uint64_t *)((longlong)auStack_318 + lVar11 + 0x20) = uVar10;
          iStack_3e8._0_1_ = 0;
          uVar7 = FUN_180557990(lVar1,0xffffffff,1);
          iVar9 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar9 = *(int *)(_DAT_180c95f68 + (longlong)iVar9 * 4);
          if (iVar9 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar9 * 8);
          }
          *(uint64_t *)((longlong)auStack_1c8 + lVar11 + 0x28) = uVar10;
          iStack_3e8 = (uint)iStack_3e8._1_3_ << 8;
          uVar7 = FUN_180557a10(lVar1,0xffffffff,1);
          iVar9 = FUN_18053a410(&DAT_180c95f30,*(int32_t *)(param_1 + 0xac),uVar7);
          iVar9 = *(int *)(_DAT_180c95f68 + (longlong)iVar9 * 4);
          if (iVar9 == -1) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(uint64_t *)(_DAT_180c95f88 + (longlong)iVar9 * 8);
          }
          *(uint64_t *)((longlong)auStack_318 + lVar11 + 0x28) = uVar10;
          iVar12 = iVar12 + 1;
          lVar11 = lVar11 + 0x30;
        } while (iVar12 < 7);
        FUN_18053b400((longlong)*(int *)(param_1 + 0xac) * 0xe0 + _DAT_180c95fb0,iStack_3d8,
                      auStack_1c8,auStack_318);
        lVar11 = *(longlong *)(lStack_3c0 + 0x98);
      }
      lVar6 = lStack_3b0;
      lVar1 = uStack_3d0;
      plVar2 = *(longlong **)(lVar11 + uStack_3b8 * 8);
      *(longlong **)(param_1 + 0xa210) = plVar2;
      *(int32_t *)(param_1 + 0x2564) = param_5;
      if ((uStack_3d0 != 0) && (lStack_3b0 != 0)) {
        uStack_3e0 = 1;
        iStack_3e8 = 0;
        uVar10 = *(uint64_t *)(*plVar2 + 0x68);
        uVar3 = *(uint64_t *)(*(longlong *)(*(longlong *)(param_2 + 0x2590) + 0xc78) + 0x38);
        FUN_18040c880(uStack_3d0,auStack_398,uVar10,0);
        uStack_3e0 = 1;
        iStack_3e8 = 0;
        FUN_18040c880(*(uint64_t *)(lVar6 + 0x208),auStack_378,uVar3,
                      *(int8_t *)(param_2 + 0x2581));
        uStack_3e0 = 1;
        iStack_3e8 = 0;
        FUN_18040c880(lVar1,auStack_358,uVar10,*(int8_t *)(param_1 + 0x2602));
        uStack_3e0 = 1;
        iStack_3e8 = 0;
        FUN_18040c880(lVar1,auStack_338,uVar10,*(int8_t *)(param_1 + 0x2601));
        puVar4 = *(uint64_t **)(lVar6 + 0xd8);
        if (puVar4 == (uint64_t *)0x0) {
          *(uint64_t *)(param_1 + 0x2538) = 0x3f8000003f800000;
          *(uint64_t *)(param_1 + 0x2540) = 0x3f800000;
        }
        else {
          uVar10 = puVar4[1];
          *(uint64_t *)(param_1 + 0x2538) = *puVar4;
          *(uint64_t *)(param_1 + 0x2540) = uVar10;
          uVar13 = *(int32_t *)(*(longlong *)(lVar6 + 0xd8) + 0x10);
        }
        *(int32_t *)(param_1 + 0x2548) = uVar13;
        uStack_3d0 = CONCAT44(fStack_384 - fStack_364,fStack_388 - fStack_368);
        uStack_3c4 = 0x7f7fffff;
        fStack_3c8 = (fStack_380 - *(float *)(*(longlong *)(lVar1 + 0x140) + 0x158) * 1.5) -
                     fStack_360;
        FUN_180285b40(auStack_378,&lStack_3b0,&uStack_3d0);
        *(longlong *)(param_1 + 0x2528) = lStack_3b0;
        *(uint64_t *)(param_1 + 0x2530) = uStack_3a8;
        *(int32_t *)(param_1 + 0x2554) = uStack_340;
        *(float *)(param_1 + 0x254c) = fStack_380;
        *(float *)(param_1 + 0x2550) = fStack_360;
        *(int32_t *)(param_1 + 0x2558) = uStack_320;
        *(float *)(param_1 + 0x255c) = ABS(fStack_388 - fStack_348);
        *(float *)(param_1 + 0x2560) = ABS(fStack_328 - fStack_388);
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_408);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



