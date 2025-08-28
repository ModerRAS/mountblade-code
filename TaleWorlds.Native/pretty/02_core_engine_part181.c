#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part181.c - 2 个函数

// 函数: void FUN_180166dd0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)
void FUN_180166dd0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint uVar3;
  void *puVar4;
  int8_t auStack_3d8 [32];
  void **ppuStack_3b8;
  int32_t uStack_3b0;
  void *puStack_3a8;
  byte *pbStack_3a0;
  int iStack_398;
  int32_t uStack_390;
  void *puStack_388;
  void *puStack_380;
  int32_t uStack_370;
  void *puStack_368;
  void *puStack_360;
  int32_t uStack_358;
  int32_t uStack_350;
  void *puStack_348;
  void *puStack_340;
  int32_t uStack_330;
  uint64_t uStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  uint64_t uStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  uint64_t uStack_2f8;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  uint64_t uStack_2e0;
  uint64_t uStack_2d8;
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  uint64_t *puStack_290;
  void *puStack_288;
  int8_t *puStack_280;
  int32_t uStack_278;
  int8_t auStack_270 [64];
  void *puStack_230;
  int8_t *puStack_228;
  int32_t uStack_220;
  int8_t auStack_218 [64];
  void *puStack_1d8;
  int8_t *puStack_1d0;
  int32_t uStack_1c8;
  int8_t auStack_1c0 [64];
  int8_t uStack_180;
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [72];
  int8_t auStack_118 [176];
  int8_t auStack_68 [48];
  ulonglong uStack_38;
  
  uStack_298 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_3d8;
  uStack_3b0 = 0;
  puStack_290 = param_2;
  if ((param_4[1] - *param_4 & 0xffffffffffffffe0U) == 0x80) {
    FUN_180627ae0(&puStack_368);
    FUN_180627ae0(&puStack_388,*param_4 + 0x20);
    FUN_180627ae0(&puStack_348,*param_4 + 0x40);
    FUN_180627ae0(&puStack_3a8,*param_4 + 0x60);
    puStack_288 = &unknown_var_3480_ptr;
    puStack_280 = auStack_270;
    uStack_278 = 0;
    auStack_270[0] = 0;
    puStack_230 = &unknown_var_3480_ptr;
    puStack_228 = auStack_218;
    uStack_220 = 0;
    auStack_218[0] = 0;
    ppuStack_3b8 = &puStack_1d8;
    puStack_1d8 = &unknown_var_3480_ptr;
    puStack_1d0 = auStack_1c0;
    uStack_1c8 = 0;
    auStack_1c0[0] = 0;
    puVar4 = &system_buffer_ptr;
    if (puStack_380 != (void *)0x0) {
      puVar4 = puStack_380;
    }
    FUN_180049bf0(&puStack_288,puVar4);
    puVar4 = &system_buffer_ptr;
    if (puStack_340 != (void *)0x0) {
      puVar4 = puStack_340;
    }
    (**(code **)(puStack_230 + 0x10))(&puStack_230,puVar4);
    puVar4 = &system_buffer_ptr;
    if (puStack_380 != (void *)0x0) {
      puVar4 = puStack_380;
    }
    (**(code **)(puStack_1d8 + 0x10))(&puStack_1d8,puVar4);
    if (iStack_398 == 1) {
      uVar3 = *pbStack_3a0 - 0x31;
      if (uVar3 == 0) {
        uVar3 = (uint)pbStack_3a0[1];
      }
      uStack_180 = uVar3 == 0;
    }
    else {
      uStack_180 = false;
    }
    FUN_1802c2c40(auStack_118);
    FUN_1802c4c30(auStack_118);
    puStack_178 = &unknown_var_3480_ptr;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = uStack_358;
    puVar4 = &system_buffer_ptr;
    if (puStack_360 != (void *)0x0) {
      puVar4 = puStack_360;
    }
    strcpy_s(auStack_160,0x40,puVar4);
    FUN_1802c5470(auStack_118,&puStack_178,&puStack_288);
    puStack_178 = &unknown_var_720_ptr;
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,5);
    puVar2 = (int32_t *)param_2[1];
    *puVar2 = 0x656e6f44;
    *(int16_t *)(puVar2 + 1) = 0x2e;
    *(int32_t *)(param_2 + 2) = 5;
    uStack_3b0 = 1;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    FUN_1802479e0(auStack_118,&uStack_328);
    FUN_180246690(&uStack_328);
    ppuStack_3b8 = (void **)auStack_68;
    FUN_1802c6e70(auStack_68);
    FUN_180246690(auStack_118);
    puStack_1d8 = &unknown_var_720_ptr;
    puStack_230 = &unknown_var_720_ptr;
    ppuStack_3b8 = &puStack_288;
    puStack_288 = &unknown_var_720_ptr;
    puStack_3a8 = &unknown_var_3456_ptr;
    if (pbStack_3a0 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pbStack_3a0 = (byte *)0x0;
    uStack_390 = 0;
    puStack_3a8 = &unknown_var_720_ptr;
    puStack_348 = &unknown_var_3456_ptr;
    if (puStack_340 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_340 = (void *)0x0;
    uStack_330 = 0;
    puStack_348 = &unknown_var_720_ptr;
    puStack_388 = &unknown_var_3456_ptr;
    if (puStack_380 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_380 = (void *)0x0;
    uStack_370 = 0;
    puStack_388 = &unknown_var_720_ptr;
    puStack_368 = &unknown_var_3456_ptr;
    if (puStack_360 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_360 = (void *)0x0;
    uStack_350 = 0;
    puStack_368 = &unknown_var_720_ptr;
  }
  else {
    *param_2 = &unknown_var_720_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &unknown_var_3456_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2,0x62);
    puVar1 = (uint64_t *)param_2[1];
    *puVar1 = 0x636572726f636e49;
    puVar1[1] = 0x7265626d756e2074;
    puVar1[2] = 0x7567726120666f20;
    puVar1[3] = 0x550a2173746e656d;
    puVar1[4] = 0x4d3c203a65676173;
    puVar1[5] = 0x6d614e656c75646f;
    puVar1[6] = 0x666572503c203e65;
    puVar1[7] = 0x3e656d614e206261;
    *(int32_t *)(puVar1 + 8) = 0x614d3c20;
    *(int32_t *)((longlong)puVar1 + 0x44) = 0x72696574;
    *(int32_t *)(puVar1 + 9) = 0x4e206c61;
    *(int32_t *)((longlong)puVar1 + 0x4c) = 0x3e656d61;
    puVar1[10] = 0x6f6c472073493c20;
    puVar1[0xb] = 0x302f3128206c6162;
    *(int16_t *)(puVar1 + 0xc) = 0x3e29;
    *(int8_t *)((longlong)puVar1 + 0x62) = 0;
    *(int32_t *)(param_2 + 2) = 0x62;
    uStack_3b0 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_3d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1801672e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,longlong *param_4)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  void *puStack_88;
  uint64_t *puStack_80;
  int32_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  uint64_t *puStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  uint64_t *puStack_48;
  uint64_t *puStack_40;
  uint64_t uStack_38;
  int32_t uStack_30;
  
  if (param_4[1] - *param_4 >> 5 != 0) {
    puStack_48 = (uint64_t *)0x0;
    puStack_40 = (uint64_t *)0x0;
    uStack_38 = 0;
    uStack_30 = 3;
    puStack_88 = &unknown_var_3456_ptr;
    uStack_70 = 0;
    puStack_80 = (uint64_t *)0x0;
    uStack_78 = 0;
    puVar3 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,0,0xfffffffffffffffe);
    *(int8_t *)puVar3 = 0;
    puStack_80 = (uint64_t *)puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x65736162;
    *(int8_t *)(puVar3 + 1) = 0;
    uStack_78 = 4;
    uStack_70._0_4_ = uVar2;
    FUN_180066df0(&puStack_48,&puStack_88);
    puStack_88 = &unknown_var_3456_ptr;
    if (puStack_80 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_80 = (uint64_t *)0x0;
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    puStack_88 = &unknown_var_720_ptr;
    puStack_68 = &unknown_var_3456_ptr;
    uStack_50 = 0;
    puStack_60 = (uint64_t *)0x0;
    uStack_58 = 0;
    puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_60 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    *puVar4 = 0x315f6c6576656c;
    uStack_58 = 7;
    uStack_50._0_4_ = uVar2;
    FUN_180066df0(&puStack_48,&puStack_68);
    puStack_68 = &unknown_var_3456_ptr;
    if (puStack_60 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_60 = (uint64_t *)0x0;
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    puStack_68 = &unknown_var_720_ptr;
    puStack_88 = &unknown_var_3456_ptr;
    uStack_70 = 0;
    puStack_80 = (uint64_t *)0x0;
    uStack_78 = 0;
    puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_80 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    *puVar4 = 0x325f6c6576656c;
    uStack_78 = 7;
    uStack_70._0_4_ = uVar2;
    FUN_180066df0(&puStack_48,&puStack_88);
    puStack_88 = &unknown_var_3456_ptr;
    if (puStack_80 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_80 = (uint64_t *)0x0;
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    puStack_88 = &unknown_var_720_ptr;
    puStack_68 = &unknown_var_3456_ptr;
    uStack_50 = 0;
    puStack_60 = (uint64_t *)0x0;
    uStack_58 = 0;
    puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_60 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    *puVar4 = 0x335f6c6576656c;
    uStack_58 = 7;
    uStack_50._0_4_ = uVar2;
    FUN_180066df0(&puStack_48,&puStack_68);
    puStack_68 = &unknown_var_3456_ptr;
    if (puStack_60 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_60 = (uint64_t *)0x0;
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    puStack_68 = &unknown_var_720_ptr;
    puStack_88 = &unknown_var_3456_ptr;
    uStack_70 = 0;
    puStack_80 = (uint64_t *)0x0;
    uStack_78 = 0;
    puVar4 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_80 = puVar4;
    uVar2 = FUN_18064e990(puVar4);
    *puVar4 = 0x6e61696c69766963;
    *(int8_t *)(puVar4 + 1) = 0;
    uStack_78 = 8;
    uStack_70._0_4_ = uVar2;
    FUN_180066df0(&puStack_48,&puStack_88);
    puStack_88 = &unknown_var_3456_ptr;
    if (puStack_80 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_80 = (uint64_t *)0x0;
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    puStack_88 = &unknown_var_720_ptr;
    FUN_18020ccb0(0,*param_4,*param_4 + 0x20,&puStack_48);
    puVar1 = puStack_40;
    for (puVar4 = puStack_48; puVar4 != puVar1; puVar4 = puVar4 + 4) {
      (**(code **)*puVar4)(puVar4,0);
    }
    if (puStack_48 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puStack_48);
    }
  }
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3456_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x27);
  puVar4 = (uint64_t *)param_2[1];
  *puVar4 = 0x6f66207475706e49;
  puVar4[1] = 0x6d3c203a74616d72;
  puVar4[2] = 0x616e5f656c75646f;
  puVar4[3] = 0x6c69663c203e656d;
  puVar4[4] = 0x3e656d616e5f65;
  *(int32_t *)(param_2 + 2) = 0x27;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801676b0(uint64_t param_1,uint64_t param_2,longlong *param_3)
void FUN_1801676b0(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int32_t *puVar6;
  uint64_t uVar7;
  int32_t uVar8;
  ulonglong uVar9;
  void *puVar10;
  int8_t auStack_568 [32];
  int16_t *puStack_548;
  int32_t uStack_540;
  int32_t uStack_538;
  void *puStack_530;
  void *puStack_528;
  uint uStack_520;
  uint64_t uStack_518;
  void *puStack_510;
  longlong lStack_508;
  uint uStack_500;
  uint64_t uStack_4f8;
  void *puStack_4f0;
  longlong lStack_4e8;
  int16_t *puStack_4e0;
  uint64_t uStack_4d8;
  int16_t uStack_4d0;
  int32_t uStack_4cc;
  uint64_t uStack_4c8;
  uint64_t uStack_4c0;
  void *puStack_4b8;
  longlong lStack_4b0;
  int32_t uStack_4a0;
  uint64_t uStack_498;
  void *apuStack_488 [68];
  int16_t auStack_268 [280];
  ulonglong uStack_38;
  
  uStack_498 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_568;
  uStack_538 = 0;
  if (param_3[1] - *param_3 >> 5 != 0) {
    lVar5 = FUN_1800baa80(&puStack_4f0);
    puStack_530 = &unknown_var_3456_ptr;
    uStack_518 = 0;
    puStack_528 = (void *)0x0;
    uStack_520 = 0;
    uStack_538 = 1;
    uVar1 = *(uint *)(lVar5 + 0x10);
    uVar9 = (ulonglong)uVar1;
    if (*(longlong *)(lVar5 + 8) != 0) {
      FUN_1806277c0(&puStack_530,uVar9);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_528,*(uint64_t *)(lVar5 + 8),uVar9);
    }
    if (puStack_528 != (void *)0x0) {
      *(int8_t *)(uVar9 + (longlong)puStack_528) = 0;
    }
    uStack_518 = CONCAT44(*(int32_t *)(lVar5 + 0x1c),(int32_t)uStack_518);
    uStack_520 = uVar1;
    FUN_1806277c0(&puStack_530,0xf);
    puVar6 = (int32_t *)((ulonglong)uStack_520 + (longlong)puStack_528);
    *puVar6 = 0x72726554;
    puVar6[1] = 0x536e6961;
    puVar6[2] = 0x65646168;
    puVar6[3] = 0x2f7372;
    uStack_520 = 0xf;
    lVar5 = FUN_180627ce0(&puStack_530,&puStack_4b8,*param_3);
    puStack_510 = &unknown_var_3456_ptr;
    uStack_4f8 = 0;
    lStack_508 = 0;
    uStack_500 = 0;
    uStack_538 = 3;
    uVar1 = *(uint *)(lVar5 + 0x10);
    uVar9 = (ulonglong)uVar1;
    if (*(longlong *)(lVar5 + 8) != 0) {
      FUN_1806277c0(&puStack_510,uVar9);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lStack_508,*(uint64_t *)(lVar5 + 8),uVar9);
    }
    if (lStack_508 != 0) {
      *(int8_t *)(uVar9 + lStack_508) = 0;
    }
    uStack_4f8 = CONCAT44(*(int32_t *)(lVar5 + 0x1c),(int32_t)uStack_4f8);
    uVar8 = 1;
    uStack_500 = uVar1;
    FUN_1806277c0(&puStack_510,1);
    *(int16_t *)((ulonglong)uStack_500 + lStack_508) = 0x2f;
    puStack_4b8 = &unknown_var_3456_ptr;
    uStack_500 = uVar8;
    if (lStack_4b0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_4b0 = 0;
    uStack_4a0 = 0;
    puStack_4b8 = &unknown_var_720_ptr;
    uStack_538 = 2;
    puStack_530 = &unknown_var_3456_ptr;
    if (puStack_528 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_528 = (void *)0x0;
    uStack_518 = uStack_518 & 0xffffffff00000000;
    puStack_530 = &unknown_var_720_ptr;
    puStack_4f0 = &unknown_var_3456_ptr;
    if (lStack_4e8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_4e8 = 0;
    uStack_4d8 = (ulonglong)uStack_4d8._4_4_ << 0x20;
    puStack_4f0 = &unknown_var_720_ptr;
    cVar3 = FUN_180624a00(&puStack_510);
    if (cVar3 != '\0') {
      uVar7 = FUN_180624440(apuStack_488,&puStack_510);
      FUN_1806279c0(&puStack_530,uVar7);
      apuStack_488[0] = &unknown_var_720_ptr;
      puVar10 = &system_buffer_ptr;
      if (puStack_528 != (void *)0x0) {
        puVar10 = puStack_528;
      }
      uStack_540 = 0x118;
      puStack_548 = auStack_268;
      iVar4 = MultiByteToWideChar(0xfde9,0,puVar10,0xffffffff);
      if (0x22f < (ulonglong)((longlong)iVar4 * 2)) {
LAB_180167a3b:
        FUN_1808fcdc8();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      auStack_268[iVar4] = 0;
      if (0x22f < (ulonglong)((longlong)(iVar4 + 1) * 2)) {
        FUN_1808fcdc8();
        goto LAB_180167a3b;
      }
      auStack_268[iVar4 + 1] = 0;
      puStack_4f0 = (void *)0x0;
      lStack_4e8 = CONCAT44(lStack_4e8._4_4_,3);
      puStack_4e0 = auStack_268;
      uStack_4d8 = 0;
      uStack_4d0 = 0x14;
      uStack_4cc = 0;
      uStack_4c0 = 0;
      uStack_4c8 = 0;
      SHFileOperationW(&puStack_4f0);
      puStack_530 = &unknown_var_3456_ptr;
      if (puStack_528 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_528 = (void *)0x0;
      uStack_518 = uStack_518 & 0xffffffff00000000;
      puStack_530 = &unknown_var_720_ptr;
    }
    uStack_538 = 0;
    puStack_510 = &unknown_var_3456_ptr;
    if (lStack_508 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_508 = 0;
    uStack_4f8 = uStack_4f8 & 0xffffffff00000000;
    puStack_510 = &unknown_var_720_ptr;
  }
  uStack_538 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_568);
}





