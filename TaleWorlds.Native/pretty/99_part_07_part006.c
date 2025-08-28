#include "TaleWorlds.Native.Split.h"

// 99_part_07_part006.c - 79 个函数

// 函数: void FUN_1803ffb40(uint64_t *param_1,uint64_t param_2,longlong param_3,uint param_4,byte param_5
void FUN_1803ffb40(uint64_t *param_1,uint64_t param_2,longlong param_3,uint param_4,byte param_5
                  )

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint64_t uVar6;
  longlong lVar7;
  uint uVar8;
  void *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  int32_t uVar13;
  uint uVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  int8_t auStack_508 [32];
  int32_t uStack_4e8;
  int32_t uStack_4e0;
  char cStack_4d8;
  int8_t auStack_4d7 [7];
  void **ppuStack_4d0;
  void **ppuStack_4c8;
  longlong lStack_4b8;
  longlong *plStack_4b0;
  uint64_t uStack_4a8;
  int32_t uStack_4a0;
  longlong *plStack_498;
  void *puStack_490;
  longlong lStack_488;
  int32_t uStack_480;
  ulonglong uStack_478;
  int32_t uStack_470;
  int32_t uStack_46c;
  int32_t uStack_468;
  int32_t uStack_464;
  longlong *plStack_460;
  longlong *plStack_458;
  uint uStack_450;
  int16_t uStack_44c;
  int16_t uStack_44a;
  uint64_t uStack_448;
  longlong lStack_440;
  longlong *plStack_438;
  uint64_t uStack_430;
  int32_t uStack_428;
  uint64_t uStack_420;
  int8_t auStack_418 [32];
  uint64_t uStack_3f8;
  uint64_t uStack_3f0;
  longlong *plStack_3e8;
  void *puStack_3d8;
  int8_t *puStack_3d0;
  int32_t uStack_3c8;
  int8_t auStack_3c0 [72];
  void *puStack_378;
  int8_t *puStack_370;
  int32_t uStack_368;
  int8_t auStack_360 [72];
  void *puStack_318;
  int8_t *puStack_310;
  int32_t uStack_308;
  int8_t auStack_300 [72];
  void *puStack_2b8;
  int8_t *puStack_2b0;
  int32_t uStack_2a8;
  int8_t auStack_2a0 [72];
  void *puStack_258;
  int8_t *puStack_250;
  int32_t uStack_248;
  int8_t auStack_240 [72];
  void *puStack_1f8;
  int8_t *puStack_1f0;
  int32_t uStack_1e8;
  int8_t auStack_1e0 [72];
  void *puStack_198;
  int8_t *puStack_190;
  int32_t uStack_188;
  int8_t auStack_180 [72];
  void *puStack_138;
  int8_t *puStack_130;
  int32_t uStack_128;
  int8_t auStack_120 [72];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  ulonglong uStack_78;
  
  uStack_448 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_508;
  puVar9 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar9 = (void *)param_1[3];
  }
  ppuStack_4d0 = &puStack_3d8;
  plVar4 = (longlong *)0x0;
  puStack_3d8 = &UNK_1809fcc58;
  puStack_3d0 = auStack_3c0;
  uStack_3c8 = 0;
  auStack_3c0[0] = 0;
  if (puVar9 != (void *)0x0) {
    FUN_180049bf0(&puStack_3d8);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_3d8);
  }
  puVar9 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar9 = (void *)param_1[3];
  }
  FUN_1802c22a0(auStack_4d7,puVar9);
  if ((void *)*param_1 != &UNK_180a26ee8) {
    (**(code **)((void *)*param_1 + 0x30))(param_1);
  }
  if (*(int *)(param_1 + 9) < 1) {
    uVar6 = *(uint64_t *)(_DAT_180c86938 + 0x1cd8);
    lVar3 = param_1[0x85];
    iVar15 = *(int *)(param_3 + 0x3578);
    plVar12 = plVar4;
    if (*(longlong *)(lVar3 + 0x1d8) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar12 = (longlong *)
                ((longlong)(int)((uint)*(byte *)(lVar3 + 0x335) * iVar15) * 0x10 +
                *(longlong *)(lVar3 + 0x1d8));
    }
    FUN_18029ad30(uVar6,0,plVar12);
    plVar12 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    lVar3 = FUN_180245280(param_3);
    iVar15 = *(int *)(param_3 + 0x357c);
    plVar11 = plVar4;
    if (*(longlong *)(lVar3 + 0x1e0) != 0) {
      if (_DAT_180c86870 != 0) {
        *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      }
      plVar11 = (longlong *)((longlong)(iVar15 * 2) * 0x10 + *(longlong *)(lVar3 + 0x1e0));
      if ((plVar11 != (longlong *)0x0) && (*plVar11 != 0)) {
        (**(code **)(*plVar12 + 0x70))(plVar12,*plVar11,2);
      }
    }
    plVar12[0x107e] = (longlong)plVar11;
    FUN_18029de40(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),1);
    if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
      dVar16 = (double)param_1[0xb];
      dVar17 = (double)param_1[0xc];
    }
    else {
      dVar16 = (double)(int)*(float *)(param_3 + 0x11c20) * (double)param_1[0xb];
      dVar17 = (double)(int)*(float *)(param_3 + 0x11c24) * (double)param_1[0xc];
    }
    uStack_4e0 = 0;
    uStack_4e8 = 0;
    FUN_18029c8a0(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),1,0,0x3f800000);
    lVar7 = _DAT_180c86938;
    *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1df0) =
         *(uint64_t *)(param_3 + 0x35a8);
    *(uint64_t *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_3 + 0x35b0);
    *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1be0) = 0.5 / (float)dVar16;
    *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1be4) = 0.5 / (float)dVar17;
    plVar12 = param_1 + 0x27;
    lVar3 = *plVar12;
    if (lVar3 == 0) {
      *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1be8) = (float)(1.0 / (double)param_1[0xb]);
      *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1bec) = (float)(1.0 / (double)param_1[0xc]);
    }
    else {
      *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar3 + 0x32c);
      *(float *)(*(longlong *)(lVar7 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar3 + 0x32e);
    }
    FUN_18029fc10(*(longlong *)(lVar7 + 0x1cd8),*(uint64_t *)(lVar7 + 0x1c88),
                  *(longlong *)(lVar7 + 0x1cd8) + 0x1be0,0x230);
    uVar14 = param_4 | 0x400;
    if (*(int *)(param_3 + 0x9a34) != 2) {
      uVar14 = param_4;
    }
    uVar8 = uVar14 | 0x200;
    if (*(int *)(param_3 + 0x9a34) != 0) {
      uVar8 = uVar14;
    }
    if (((((*(byte *)(param_3 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_3 + 0x1bd9) & 2) == 0))
        || (*(int *)(_DAT_180c8a9c8 + 0xa10) == 0)) || (*(char *)(param_3 + 0x130) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = param_1[6];
    uVar14 = uVar8 | 0x200000;
    if (!bVar2) {
      uVar14 = uVar8;
    }
    uVar14 = uVar14 & *(uint *)(lVar3 + 0x1610);
    if ((param_5 & 1) != 0) {
      puStack_378 = &UNK_1809fcc58;
      puStack_370 = auStack_360;
      auStack_360[0] = 0;
      uStack_368 = 7;
      strcpy_s(auStack_360,0x40,&UNK_180a0d780);
      plVar4 = (longlong *)FUN_180240430(lVar3,&puStack_378,0);
      puStack_378 = &UNK_18098bcb0;
      lVar3 = param_1[6];
    }
    if ((param_5 & 8) != 0) {
      puStack_318 = &UNK_1809fcc58;
      puStack_310 = auStack_300;
      auStack_300[0] = 0;
      uStack_308 = 7;
      strcpy_s(auStack_300,0x40,&UNK_180a0d740);
      uVar5 = FUN_180240430(lVar3,&puStack_318,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_318 = &UNK_18098bcb0;
      lVar3 = param_1[6];
    }
    if ((param_5 & 4) != 0) {
      puStack_2b8 = &UNK_1809fcc58;
      puStack_2b0 = auStack_2a0;
      auStack_2a0[0] = 0;
      uStack_2a8 = 0xe;
      strcpy_s(auStack_2a0,0x40,&UNK_180a0d730);
      uVar5 = FUN_180240430(lVar3,&puStack_2b8,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_2b8 = &UNK_18098bcb0;
      lVar3 = param_1[6];
    }
    if ((param_5 & 2) != 0) {
      puStack_258 = &UNK_1809fcc58;
      puStack_250 = auStack_240;
      auStack_240[0] = 0;
      uStack_248 = 0xd;
      strcpy_s(auStack_240,0x40,&UNK_180a0d710);
      uVar5 = FUN_180240430(lVar3,&puStack_258,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_258 = &UNK_18098bcb0;
    }
    if ((*(longlong *)(param_3 + 0x12498) != 0) && (*(int *)(param_3 + 0x2480) != 0)) {
      uVar6 = param_1[6];
      puStack_1f8 = &UNK_1809fcc58;
      puStack_1f0 = auStack_1e0;
      auStack_1e0[0] = 0;
      uStack_1e8 = 0xb;
      strcpy_s(auStack_1e0,0x40,&UNK_180a0d6d8);
      uVar5 = FUN_180240430(uVar6,&puStack_1f8,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_1f8 = &UNK_18098bcb0;
    }
    if (((*(char *)(param_3 + 0x11cf4) != '\0') && (*(longlong *)(param_3 + 0x11d00) != 0)) &&
       ((*(longlong *)(param_3 + 0x11ec8) != 0 ||
        (*(longlong *)(*(longlong *)(param_3 + 0x11d00) + 0x150) != 0)))) {
      uVar6 = param_1[6];
      puStack_198 = &UNK_1809fcc58;
      puStack_190 = auStack_180;
      auStack_180[0] = 0;
      uStack_188 = 0x10;
      strcpy_s(auStack_180,0x40,&UNK_180a0d6f8);
      uVar5 = FUN_180240430(uVar6,&puStack_198,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_198 = &UNK_18098bcb0;
    }
    if (*(char *)(param_3 + 0x12c09) != '\0') {
      uVar6 = param_1[6];
      puStack_138 = &UNK_1809fcc58;
      puStack_130 = auStack_120;
      auStack_120[0] = 0;
      uStack_128 = 0xd;
      strcpy_s(auStack_120,0x40,&UNK_180a0d6c8);
      uVar5 = FUN_180240430(uVar6,&puStack_138,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_138 = &UNK_18098bcb0;
    }
    if ((char)param_5 < '\0') {
      uVar6 = param_1[6];
      puStack_d8 = &UNK_1809fcc58;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0x11;
      strcpy_s(auStack_c0,0x40,&UNK_180a0d788);
      uVar5 = FUN_180240430(uVar6,&puStack_d8,0);
      plVar4 = (longlong *)((ulonglong)plVar4 | uVar5);
      puStack_d8 = &UNK_18098bcb0;
    }
    iVar15 = 0;
    uStack_44c = 4;
    lStack_4b8 = param_1[6];
    plStack_498 = (longlong *)0x0;
    uVar13 = 0;
    puStack_490 = &UNK_180a3c3e0;
    uStack_478 = 0;
    lStack_488 = 0;
    uStack_480 = 0;
    plStack_460 = (longlong *)0x0;
    uStack_4a8 = CONCAT26(uStack_44a,CONCAT24(4,uVar14));
    uStack_4a0 = 2;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_468 = 0;
    uStack_464 = 0;
    uVar6 = *(uint64_t *)(param_1[6] + 0x15b8);
    ppuStack_4c8 = (void **)&lStack_440;
    uStack_428 = 2;
    uStack_420 = 0;
    plStack_4b0 = plVar4;
    plStack_458 = plVar4;
    uStack_450 = uVar14;
    lStack_440 = lStack_4b8;
    plStack_438 = plVar4;
    uStack_430 = uStack_4a8;
    FUN_180627ae0(auStack_418,&puStack_490);
    uStack_3f8 = CONCAT44(uStack_46c,uStack_470);
    uStack_3f0 = CONCAT44(uStack_464,uStack_468);
    plStack_3e8 = plStack_460;
    if (plStack_460 != (longlong *)0x0) {
      (**(code **)(*plStack_460 + 0x28))();
    }
    uVar6 = FUN_180299eb0(uVar6,param_3,&lStack_440,&cStack_4d8);
    if (cStack_4d8 == '\0') {
      param_1[0x1f] = uVar6;
      *(int32_t *)((longlong)param_1 + 0x134) = 1;
      *(int32_t *)((longlong)param_1 + 0x114) = *(int32_t *)(param_1[0x85] + 0x324);
      lVar3 = FUN_180245280(param_3);
      if (lVar3 != 0) {
        lVar3 = FUN_180245280(param_3);
        uVar13 = *(int32_t *)(lVar3 + 0x324);
      }
      *(int32_t *)(param_1 + 0x22) = uVar13;
      iVar10 = iVar15;
      do {
        if (*plVar12 != 0) {
          uStack_4e8 = 0xffffffff;
          FUN_18029d150(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),iVar10,*plVar12,0x10);
        }
        iVar10 = iVar10 + 1;
        plVar12 = plVar12 + 1;
      } while (iVar10 < 0x10);
      *(int16_t *)(param_1 + 0x20) = 0x101;
      *(int8_t *)((longlong)param_1 + 0x103) = 0;
      *(int16_t *)((longlong)param_1 + 0x105) = 0;
      *(int8_t *)((longlong)param_1 + 0x104) = *(int8_t *)(param_1 + 0x8a);
      *(int8_t *)((longlong)param_1 + 0x107) = *(int8_t *)((longlong)param_1 + 0x454);
      FUN_18029d000(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),4);
      FUN_18029cdd0(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),param_1 + 0x1f);
      lVar3 = _DAT_180c86938;
      puVar9 = &system_buffer_ptr;
      if ((void *)param_1[3] != (void *)0x0) {
        puVar9 = (void *)param_1[3];
      }
      if (puVar9 != (void *)0x0) {
        lVar7 = strnlen(puVar9,0x3f);
        strncpy(lVar3 + 0x1ce0,puVar9,lVar7);
        *(int8_t *)(lVar7 + 0x1ce0 + lVar3) = 0;
      }
      FUN_18029e110(*(uint64_t *)(_DAT_180c86938 + 0x1cd8));
      if ((void *)*param_1 != &UNK_180a26ee8) {
        (**(code **)((void *)*param_1 + 0x28))(param_1);
      }
      lVar3 = 0x8a38;
      lVar7 = 0x8438;
      do {
        if ((*(longlong *)((longlong)param_1 + lVar7 + -0x8300) != 0) &&
           (((lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8), *(longlong *)(lVar7 + lVar1) != 0 ||
             (*(int *)(lVar1 + -0x200 + lVar3) != -1)) || (*(int *)(lVar3 + lVar1) != 0x10)))) {
          ppuStack_4d0 = (void **)0x0;
          (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                    (*(longlong **)(lVar1 + 0x8400),iVar15,1,&ppuStack_4d0);
          *(uint64_t *)(lVar7 + lVar1) = 0;
          *(int32_t *)(lVar1 + -0x200 + lVar3) = 0xffffffff;
          *(int32_t *)(lVar3 + lVar1) = 0x10;
          *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
        }
        iVar15 = iVar15 + 1;
        lVar7 = lVar7 + 8;
        lVar3 = lVar3 + 4;
      } while (iVar15 < 0x10);
    }
    if (plStack_460 != (longlong *)0x0) {
      (**(code **)(*plStack_460 + 0x38))();
    }
    ppuStack_4c8 = &puStack_490;
    puStack_490 = &UNK_180a3c3e0;
    if (lStack_488 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_488 = 0;
    uStack_478 = uStack_478 & 0xffffffff00000000;
    puStack_490 = &UNK_18098bcb0;
    if (plStack_498 != (longlong *)0x0) {
      (**(code **)(*plStack_498 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  FUN_1802c2ac0(&puStack_3d8);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_508);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: uint8_t FUN_1804c60b0;
uint8_t FUN_1804c60b0;



// 函数: uint8_t FUN_1804a8e90;
uint8_t FUN_1804a8e90;



// 函数: uint8_t FUN_1804a9a20;
uint8_t FUN_1804a9a20;
uint8_t UNK_180a2cb10;
uint8_t system_data_f500;
uint8_t UNK_180a2cbe8;
uint8_t system_data_cc08;
uint8_t UNK_180a2d380;
uint8_t system_data_6110;
uint8_t system_data_6380;
int32_t UNK_180c96374;
int32_t UNK_180c96378;
uint8_t system_data_1044;
int32_t UNK_180c9637c;
uint8_t system_data_6384;
uint8_t system_data_1040;
uint8_t system_data_64c0;
uint8_t system_data_64b8;
uint8_t system_data_64bc;
uint8_t system_data_6370;
uint8_t system_data_6108;
uint8_t system_data_6148;
uint8_t UNK_1804e3000;
uint8_t UNK_1804e3010;
uint8_t UNK_1804e3030;
uint8_t UNK_1804e3040;
uint8_t system_data_1d30;
uint8_t system_data_1d28;
uint64_t UNK_180c91d38;
uint8_t UNK_180a2cc80;
uint8_t UNK_180a2cc98;
uint8_t UNK_180a2ccb0;
uint8_t UNK_180a2ce78;
uint8_t UNK_180a2cea0;
uint8_t UNK_180a2cec0;
uint8_t UNK_180a2d080;
uint8_t UNK_180a2d0a0;
uint8_t UNK_180a2d268;
uint8_t system_data_92b8;
uint8_t system_data_90b0;
uint8_t system_data_8f1a;
uint8_t UNK_180a2d280;
uint8_t UNK_180a2d298;
uint8_t UNK_180a2d330;
uint8_t UNK_180a2d348;
uint8_t system_data_17d0;
uint8_t system_data_18d0;
uint8_t UNK_1804a5e50;
uint8_t UNK_1804a5f30;



// 函数: uint8_t FUN_1804a5e90;
uint8_t FUN_1804a5e90;
uint8_t UNK_180a2d358;
uint8_t system_data_5eb8;
uint8_t system_data_5ea8;
uint8_t system_data_d36c;
uint8_t system_data_5ea0;
uint8_t UNK_180a2d318;
uint8_t system_data_25c8;
uint8_t system_data_2cd8;
uint8_t system_data_2ce0;
uint8_t system_data_25a0;
ulonglong *UNK_180c92bb8;
ulonglong *UNK_180c92bf8;
longlong UNK_180c95b78;
ulonglong UNK_180c95b80;
uint8_t UNK_1804a6c40;
uint8_t UNK_1804a6c60;
uint8_t UNK_180a2fb48;
uint8_t system_data_5be0;



// 函数: uint8_t FUN_1804a7600;
uint8_t FUN_1804a7600;
uint8_t UNK_180a2d3a0;
uint8_t UNK_1809f8860;
uint8_t UNK_1809f88b0;
uint8_t UNK_1809f8900;
uint8_t UNK_1809f8950;
uint8_t UNK_1809f89a0;
uint8_t system_data_5f30;
uint8_t system_data_dc90;
uint8_t system_data_dca0;
uint8_t system_data_dcb0;
uint8_t system_data_9e00;
uint8_t system_data_9e08;
uint8_t system_data_9e10;
uint8_t system_data_9e18;
uint8_t system_data_9e20;
uint8_t system_data_9e28;
uint8_t system_data_9e30;
uint8_t system_data_8f20;
uint8_t UNK_180a2de30;
uint8_t UNK_180a2de50;



// 函数: uint8_t FUN_1804ad200;
uint8_t FUN_1804ad200;
uint8_t UNK_180a2e0ec;
uint8_t system_data_e0f8;
uint8_t UNK_180a2e160;
uint8_t UNK_180a2e168;
uint8_t UNK_180a2779c;
uint8_t UNK_180a2e150;
uint8_t UNK_180a2e158;
uint8_t UNK_180a2e178;
uint8_t UNK_180a2e1b8;
uint8_t UNK_180a2e1c8;
uint8_t UNK_180a2e1d8;
uint8_t UNK_180a2e1e8;
uint8_t UNK_180a2e1f8;
uint8_t UNK_180a2e220;
uint8_t UNK_180a2e290;
uint8_t UNK_180a2e2a8;
uint8_t UNK_180a063a8;
uint8_t UNK_180a2e248;
uint8_t UNK_180a2e260;
uint8_t UNK_180a2e270;
uint8_t UNK_180a2e280;
uint8_t UNK_180a2e2bc;
uint8_t UNK_180a2e2c8;
uint8_t UNK_180a2e2d8;
uint8_t UNK_180a2e2e8;
uint8_t UNK_180a2e2f8;
uint8_t UNK_180a2e310;
uint8_t UNK_180a2e328;
uint8_t UNK_180a2e348;
uint8_t UNK_180a2e388;
uint8_t UNK_180a2e3f8;
uint8_t UNK_180a2e418;
uint8_t UNK_180a2e438;
uint8_t UNK_180a3cc50;
uint8_t UNK_180a2e3b8;
uint8_t UNK_180a2e3d0;
uint8_t UNK_180a2e3e0;
uint8_t UNK_180a2e3e8;
uint8_t UNK_180a2e428;
uint8_t UNK_180a2e4c0;
uint8_t UNK_180a2e4d0;
uint8_t UNK_180a2e570;
uint8_t UNK_180a2e460;
uint8_t UNK_180a2e450;
uint8_t UNK_180a2e4a0;
uint8_t UNK_180a2e4b0;
uint8_t UNK_180a2e628;
uint8_t UNK_180a2e668;
uint8_t UNK_180a2e678;
uint8_t UNK_180a2e688;
uint8_t UNK_180a2e698;



// 函数: uint8_t FUN_1804bfc50;
uint8_t FUN_1804bfc50;



// 函数: uint8_t FUN_1800ae3f0;
uint8_t FUN_1800ae3f0;
uint8_t UNK_1804bfc30;
uint8_t UNK_180a2e5d0;
uint8_t UNK_180a2e638;
uint8_t UNK_180a2e650;
uint8_t UNK_180a2e6f8;



// 函数: uint8_t FUN_1804c97c0;
uint8_t FUN_1804c97c0;



// 函数: uint8_t FUN_1804c98d0;
uint8_t FUN_1804c98d0;
uint8_t UNK_180a2fa20;
uint8_t UNK_180a2faa8;
uint8_t UNK_180a2fac0;
uint8_t UNK_180a2fb38;
uint8_t UNK_180a2fb90;
uint8_t system_interrupt_handler;
char system_data_2845;
uint8_t UNK_180a2fb60;
uint8_t UNK_180a2fb78;
uint8_t UNK_180a2fba8;
uint8_t UNK_180a2fbc8;
uint8_t UNK_180a2fc20;



// 函数: uint8_t FUN_1804ce100;
uint8_t FUN_1804ce100;
uint8_t UNK_1804ce1a0;



// 函数: uint8_t FUN_1804ce920;
uint8_t FUN_1804ce920;
uint8_t UNK_1804ce9d0;
uint8_t UNK_1804df5f0;
uint8_t UNK_1804df630;



// 函数: uint8_t FUN_1804df470;
uint8_t FUN_1804df470;



// 函数: uint8_t FUN_1804df640;
uint8_t FUN_1804df640;
uint8_t UNK_180a13894;
uint8_t UNK_180a2fbe8;
uint8_t UNK_180a2fc00;
uint8_t UNK_1804df030;
uint8_t UNK_1804df040;



// 函数: uint8_t FUN_1804df080;
uint8_t FUN_1804df080;
uint8_t UNK_1804df160;
uint8_t UNK_1804df2f0;



// 函数: uint8_t FUN_1804df1a0;
uint8_t FUN_1804df1a0;
uint8_t UNK_1804df330;
uint8_t UNK_1804df340;



// 函数: uint8_t FUN_1804dee90;
uint8_t FUN_1804dee90;
uint8_t UNK_1804deff0;
uint8_t UNK_1804df9e0;
uint8_t UNK_1804df9f0;
uint8_t UNK_1804dfa30;
uint8_t UNK_1804dfa40;
uint8_t UNK_1804dfa80;
uint8_t UNK_1804dfa90;
uint8_t UNK_18054b090;



// 函数: uint8_t FUN_1804dc080;
uint8_t FUN_1804dc080;
uint8_t UNK_180a2fc90;
uint8_t UNK_1804df380;
uint8_t UNK_1804df720;
uint8_t UNK_1804df730;



// 函数: uint8_t FUN_1804df390;
uint8_t FUN_1804df390;
uint8_t UNK_1804deb60;
uint8_t UNK_1804dec20;
uint8_t UNK_1804decc0;
uint8_t UNK_1804ded60;



// 函数: uint8_t FUN_1804dea90;
uint8_t FUN_1804dea90;



// 函数: uint8_t FUN_1804deba0;
uint8_t FUN_1804deba0;



// 函数: uint8_t FUN_1804dec60;
uint8_t FUN_1804dec60;



// 函数: uint8_t FUN_1804ded00;
uint8_t FUN_1804ded00;
uint8_t system_data_6018;
uint8_t UNK_1804deda0;
uint8_t UNK_1804dedb0;
uint8_t UNK_1804df770;
uint8_t UNK_1804df780;
uint8_t UNK_1804dedf0;
uint8_t UNK_1804dee00;
uint8_t UNK_1804dee40;
uint8_t UNK_1804dee50;
uint8_t UNK_180a2fd10;
uint8_t UNK_180a2fd40;
uint8_t UNK_180a30060;
uint8_t UNK_180a301a0;
uint8_t UNK_180a21db0;
uint8_t UNK_180a308c0;
uint8_t UNK_180a308e0;
uint8_t UNK_180a30990;
uint8_t UNK_180a36f00;



// 函数: uint8_t FUN_1804aa300;
uint8_t FUN_1804aa300;



// 函数: uint8_t FUN_1805febd0;
uint8_t FUN_1805febd0;



// 函数: uint8_t FUN_1805fed10;
uint8_t FUN_1805fed10;



// 函数: uint8_t FUN_1805fede0;
uint8_t FUN_1805fede0;



// 函数: uint8_t FUN_1805feec0;
uint8_t FUN_1805feec0;



// 函数: uint8_t FUN_1805fef00;
uint8_t FUN_1805fef00;



// 函数: uint8_t FUN_1805fef40;
uint8_t FUN_1805fef40;



// 函数: uint8_t FUN_1805ff120;
uint8_t FUN_1805ff120;



// 函数: uint8_t FUN_1805ff2e0;
uint8_t FUN_1805ff2e0;



// 函数: uint8_t FUN_1805ff380;
uint8_t FUN_1805ff380;



// 函数: uint8_t FUN_1805ff540;
uint8_t FUN_1805ff540;



// 函数: uint8_t FUN_1805ff5b0;
uint8_t FUN_1805ff5b0;



// 函数: uint8_t FUN_1805ff670;
uint8_t FUN_1805ff670;



// 函数: uint8_t FUN_1805ff820;
uint8_t FUN_1805ff820;



// 函数: uint8_t FUN_1805ff8c0;
uint8_t FUN_1805ff8c0;



// 函数: uint8_t FUN_1805ff9e0;
uint8_t FUN_1805ff9e0;



// 函数: uint8_t FUN_1805ffac0;
uint8_t FUN_1805ffac0;



// 函数: uint8_t FUN_1805ffc20;
uint8_t FUN_1805ffc20;



// 函数: uint8_t FUN_1805ffd60;
uint8_t FUN_1805ffd60;



// 函数: uint8_t FUN_1805ffe20;
uint8_t FUN_1805ffe20;



// 函数: uint8_t FUN_1805ffe60;
uint8_t FUN_1805ffe60;



// 函数: uint8_t FUN_1805ffed0;
uint8_t FUN_1805ffed0;



// 函数: uint8_t FUN_1805fffa0;
uint8_t FUN_1805fffa0;



// 函数: uint8_t FUN_1806e71c0;
uint8_t FUN_1806e71c0;
uint8_t UNK_180a36e08;
uint8_t UNK_180a36e78;
uint8_t UNK_180a36e58;
uint8_t UNK_180a36fb0;
uint8_t UNK_180588340;



// 函数: uint8_t FUN_1805f3060;
uint8_t FUN_1805f3060;
uint8_t UNK_180a37b40;
uint8_t UNK_180a37c10;
uint8_t UNK_180a37cd8;



// 函数: uint8_t FUN_1805f32b0;
uint8_t FUN_1805f32b0;



// 函数: uint8_t FUN_1804aa030;
uint8_t FUN_1804aa030;
uint8_t UNK_180a37e00;
uint8_t UNK_180a37d98;
uint8_t UNK_180a37f38;
uint8_t UNK_180a37fd8;
uint8_t UNK_1809fad38;
uint8_t UNK_1809fad48;
uint8_t UNK_180a38060;
uint8_t UNK_180a380b0;
uint8_t UNK_180a38100;
uint8_t UNK_180a38150;
uint8_t UNK_180a381a0;
uint8_t UNK_180a38310;
uint8_t UNK_180a381e8;
uint8_t UNK_180a38260;
uint8_t UNK_180a38298;
uint8_t UNK_180a383d0;
uint8_t UNK_180a38408;
uint8_t UNK_180a38440;



// 函数: uint8_t FUN_1805f8910;
uint8_t FUN_1805f8910;
uint8_t UNK_1805f8810;



// 函数: uint8_t FUN_1805f8820;
uint8_t FUN_1805f8820;
uint8_t UNK_1809fadd8;
uint8_t UNK_1809fade8;
uint8_t UNK_1809fadf8;
uint8_t UNK_1809fae08;
uint8_t UNK_1809fae78;
uint8_t UNK_1809fae88;
uint8_t UNK_1809fae98;
uint8_t UNK_1809fad98;
uint8_t UNK_1809fada8;
uint8_t UNK_1809fadb8;
uint8_t UNK_1809fadc8;
uint8_t UNK_1809fae18;
uint8_t UNK_1809fae28;
uint8_t UNK_1809fae38;
uint8_t UNK_1809fae48;
uint8_t UNK_1809faec8;
uint8_t UNK_1809faef8;
uint8_t UNK_1809faf08;
uint8_t UNK_1809faed8;
uint8_t UNK_1809faee8;



// 函数: uint8_t FUN_1805faf50;
uint8_t FUN_1805faf50;



// 函数: uint8_t FUN_1805fd350;
uint8_t FUN_1805fd350;
uint8_t UNK_180a38478;
uint8_t UNK_180a38488;
uint8_t UNK_180a38498;
uint8_t UNK_180a384a8;
uint8_t UNK_1805feb50;
uint8_t UNK_180a38588;
uint8_t UNK_180a30d60;
uint8_t UNK_180a385b0;
uint8_t UNK_180a38608;
uint8_t UNK_180a38638;
uint8_t UNK_180a3be00;
uint8_t UNK_180a38690;
uint8_t UNK_180a386b0;
uint8_t UNK_180a386e8;
uint8_t UNK_180a38700;
uint8_t UNK_180607c40;



// 函数: uint8_t FUN_1805f6f30;
uint8_t FUN_1805f6f30;



// 函数: uint8_t FUN_1805f6f50;
uint8_t FUN_1805f6f50;



// 函数: uint8_t FUN_1805f7180;
uint8_t FUN_1805f7180;



// 函数: uint8_t FUN_1805f7330;
uint8_t FUN_1805f7330;
uint8_t system_data_5bd0;
uint8_t UNK_180a3b7f0;
uint8_t UNK_180a3b9a8;
uint8_t UNK_180a3b9c8;
uint8_t UNK_180a3b9e0;
uint8_t UNK_180a3b9e8;
uint8_t UNK_1809fb028;
uint8_t UNK_180a3bbe0;
uint8_t UNK_180a3bc30;
uint8_t UNK_180a3bc90;
uint8_t UNK_180a3bc58;
uint8_t UNK_180a3bcc8;
uint8_t UNK_180a3bd00;
uint8_t UNK_1809fb150;
uint8_t UNK_1809f8ddc;
uint8_t UNK_180a3bdb0;
uint8_t UNK_180a3be30;
uint8_t UNK_180a3bfe0;
uint8_t UNK_180a3c018;



// 函数: uint8_t FUN_1806f1000;
uint8_t FUN_1806f1000;
uint8_t UNK_18094e418;
uint8_t UNK_18094e420;
uint8_t UNK_18094e428;
uint8_t UNK_18094e440;
uint8_t UNK_18094e450;
uint8_t UNK_18094e460;
uint8_t UNK_18094e470;
uint8_t UNK_18094bf80;
uint8_t system_data_c324;
uint8_t system_data_c320;
uint8_t system_data_c330;
uint8_t system_data_c328;
uint8_t system_data_c32c;
uint8_t system_data_0f00;
uint8_t UNK_18094e340;
uint8_t UNK_18094e3a0;
uint8_t UNK_18094bf98;
uint8_t UNK_18094e498;
uint8_t UNK_18094e4a0;
uint8_t UNK_18094bfa8;
uint8_t UNK_18094bfb8;
uint8_t UNK_18094bfc8;
uint8_t UNK_18094bfe0;
uint8_t UNK_18094bff0;
uint8_t UNK_1806f4890;
uint8_t UNK_1806f48a0;
uint8_t UNK_1806f48b0;
uint8_t UNK_1806f48c0;
uint8_t UNK_1806f48d0;
uint8_t UNK_1806f48e0;
uint8_t UNK_1806f48f0;
uint8_t UNK_1806f4930;
uint8_t UNK_1806f4970;
uint8_t UNK_1806f49b0;
uint8_t UNK_1806f49f0;
uint8_t UNK_1806f4a30;
uint8_t UNK_1806f4a70;
uint8_t UNK_1806f4ac0;
uint8_t UNK_1806f4ad0;
uint8_t UNK_1806f4ae0;
uint8_t UNK_1806f4af0;
uint8_t UNK_1806f4b00;
uint8_t UNK_18094e5a4;
uint8_t UNK_18094e5b0;
uint8_t UNK_18094e5bc;
uint8_t UNK_18094e5c8;
uint8_t UNK_18094e5d8;
uint8_t UNK_18094e5e8;
uint8_t UNK_18094e5f8;
uint8_t UNK_18094e608;



// 函数: uint8_t FUN_1806f4900;
uint8_t FUN_1806f4900;
uint8_t UNK_18094e618;



// 函数: uint8_t FUN_1806f4940;
uint8_t FUN_1806f4940;
uint8_t UNK_18094e628;



// 函数: uint8_t FUN_1806f4980;
uint8_t FUN_1806f4980;
uint8_t UNK_18094e63c;



// 函数: uint8_t FUN_1806f49c0;
uint8_t FUN_1806f49c0;
uint8_t UNK_18094e648;



// 函数: uint8_t FUN_1806f4a00;
uint8_t FUN_1806f4a00;
uint8_t UNK_18094e658;



// 函数: uint8_t FUN_1806f4a40;
uint8_t FUN_1806f4a40;
uint8_t UNK_18094e678;



// 函数: uint8_t FUN_1806f4a90;
uint8_t FUN_1806f4a90;
uint8_t UNK_18094e698;
uint8_t UNK_1806f4b10;
uint8_t UNK_1806f4b20;



// 函数: uint8_t FUN_1806f4bc0;
uint8_t FUN_1806f4bc0;
uint8_t UNK_1806f4b30;



// 函数: uint8_t FUN_1806f4bf0;
uint8_t FUN_1806f4bf0;
uint8_t UNK_1806f4b40;
uint8_t UNK_1806f4b50;
uint8_t UNK_1806f4b60;
uint8_t UNK_1806f4b70;
uint8_t UNK_1806f4b80;
uint8_t UNK_1806f4b90;
uint8_t UNK_1806f4ba0;
uint8_t UNK_1806f4bb0;
uint8_t UNK_1806f4c20;
uint8_t UNK_18094e6b0;
uint8_t UNK_18094e6c0;
uint8_t UNK_18094e6d0;
uint8_t UNK_18094e6e0;
uint8_t UNK_18094e6f0;
uint8_t UNK_18094e700;
uint8_t UNK_18094e708;
uint8_t UNK_1806f4c30;
uint8_t UNK_1806f4c70;
uint8_t UNK_1806f4cb0;



// 函数: uint8_t FUN_1806f4c40;
uint8_t FUN_1806f4c40;
uint8_t UNK_1806f4cc0;



// 函数: uint8_t FUN_1806f4c80;
uint8_t FUN_1806f4c80;
uint8_t UNK_1806f4cd0;
uint8_t UNK_1806f4ce0;
uint8_t UNK_1806f4cf0;
uint8_t UNK_1806f4d00;
uint8_t UNK_1806f4d10;
uint8_t UNK_18094e720;
uint8_t UNK_18094e728;
uint8_t UNK_18094e738;
uint8_t UNK_18094e748;
uint8_t UNK_18094e758;
uint8_t UNK_1806f4d20;
uint8_t UNK_1806f4d30;
uint8_t UNK_1806f4d40;
uint8_t UNK_1806f4d50;
uint8_t UNK_1806f4d60;
uint8_t UNK_1806f4d70;
uint8_t UNK_1806f4d80;
uint8_t UNK_1806f4d90;
uint8_t UNK_1806f4e30;
uint8_t UNK_1806f4e40;



// 函数: uint8_t FUN_1806f4da0;
uint8_t FUN_1806f4da0;
uint8_t UNK_1806f4e50;



// 函数: uint8_t FUN_1806f4dd0;
uint8_t FUN_1806f4dd0;
uint8_t UNK_1806f4e60;



// 函数: uint8_t FUN_1806f4e00;
uint8_t FUN_1806f4e00;
uint8_t UNK_1806f4e70;
uint8_t UNK_18094e768;
uint8_t UNK_18094e778;
uint8_t UNK_18094e784;
uint8_t UNK_18094e790;
uint8_t UNK_1806f4e80;
uint8_t UNK_1806f4e90;
uint8_t UNK_1806f4ea0;
uint8_t UNK_1806f4ee0;
uint8_t UNK_1806f4f00;
uint8_t UNK_1806f4f10;
uint8_t UNK_1806f4f20;
uint8_t UNK_1806f4f30;
uint8_t UNK_1806f4f40;
uint8_t UNK_1806f4fb0;
uint8_t UNK_1806f4fc0;
uint8_t UNK_1806f4fd0;
uint8_t UNK_1806f4fe0;
uint8_t UNK_1806f4ff0;
uint8_t UNK_18094e7a4;
uint8_t UNK_18094e7b0;
uint8_t UNK_18094e7c0;
uint8_t UNK_18094e7d0;
uint8_t UNK_18094e7e0;



// 函数: uint8_t FUN_1806f4eb0;
uint8_t FUN_1806f4eb0;



// 函数: uint8_t FUN_1806f4f50;
uint8_t FUN_1806f4f50;



// 函数: uint8_t FUN_1806f4f80;
uint8_t FUN_1806f4f80;
uint8_t UNK_1806f5000;
uint8_t UNK_1806f5040;
uint8_t UNK_1806f5050;
uint8_t UNK_1806f50c0;
uint8_t UNK_1806f50d0;
uint8_t UNK_1806f50e0;
uint8_t UNK_18094e7f8;



// 函数: uint8_t FUN_1806f5010;
uint8_t FUN_1806f5010;
uint8_t UNK_18094e808;



// 函数: uint8_t FUN_1806f5060;
uint8_t FUN_1806f5060;



