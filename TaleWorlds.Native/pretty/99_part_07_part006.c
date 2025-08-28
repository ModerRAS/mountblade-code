#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part006.c - 79 个函数

// 函数: void FUN_1803ffb40(uint64_t *param_1,uint64_t param_2,int64_t param_3,uint param_4,byte param_5
void FUN_1803ffb40(uint64_t *param_1,uint64_t param_2,int64_t param_3,uint param_4,byte param_5
                  )

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint uVar8;
  void *puVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t *plVar12;
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
  int64_t lStack_4b8;
  int64_t *plStack_4b0;
  uint64_t uStack_4a8;
  int32_t uStack_4a0;
  int64_t *plStack_498;
  void *puStack_490;
  int64_t lStack_488;
  int32_t uStack_480;
  uint64_t uStack_478;
  int32_t uStack_470;
  int32_t uStack_46c;
  int32_t uStack_468;
  int32_t uStack_464;
  int64_t *plStack_460;
  int64_t *plStack_458;
  uint uStack_450;
  int16_t uStack_44c;
  int16_t uStack_44a;
  uint64_t uStack_448;
  int64_t lStack_440;
  int64_t *plStack_438;
  uint64_t uStack_430;
  int32_t uStack_428;
  uint64_t uStack_420;
  int8_t auStack_418 [32];
  uint64_t uStack_3f8;
  uint64_t uStack_3f0;
  int64_t *plStack_3e8;
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
  uint64_t uStack_78;
  
  uStack_448 = 0xfffffffffffffffe;
  uStack_78 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_508;
  puVar9 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar9 = (void *)param_1[3];
  }
  ppuStack_4d0 = &puStack_3d8;
  plVar4 = (int64_t *)0x0;
  puStack_3d8 = &memory_allocator_3480_ptr;
  puStack_3d0 = auStack_3c0;
  uStack_3c8 = 0;
  auStack_3c0[0] = 0;
  if (puVar9 != (void *)0x0) {
    FUN_180049bf0(&puStack_3d8);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_3d8);
  }
  puVar9 = &system_buffer_ptr;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar9 = (void *)param_1[3];
  }
  FUN_1802c22a0(auStack_4d7,puVar9);
  if ((void *)*param_1 != &processed_var_6168_ptr) {
    (**(code **)((void *)*param_1 + 0x30))(param_1);
  }
  if (*(int *)(param_1 + 9) < 1) {
    uVar6 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar3 = param_1[0x85];
    iVar15 = *(int *)(param_3 + 0x3578);
    plVar12 = plVar4;
    if (*(int64_t *)(lVar3 + 0x1d8) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar12 = (int64_t *)
                ((int64_t)(int)((uint)*(byte *)(lVar3 + 0x335) * iVar15) * 0x10 +
                *(int64_t *)(lVar3 + 0x1d8));
    }
    FUN_18029ad30(uVar6,0,plVar12);
    plVar12 = *(int64_t **)(system_message_buffer + 0x1cd8);
    lVar3 = FUN_180245280(param_3);
    iVar15 = *(int *)(param_3 + 0x357c);
    plVar11 = plVar4;
    if (*(int64_t *)(lVar3 + 0x1e0) != 0) {
      if (system_main_module_state != 0) {
        *(int64_t *)(lVar3 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
      }
      plVar11 = (int64_t *)((int64_t)(iVar15 * 2) * 0x10 + *(int64_t *)(lVar3 + 0x1e0));
      if ((plVar11 != (int64_t *)0x0) && (*plVar11 != 0)) {
        (**(code **)(*plVar12 + 0x70))(plVar12,*plVar11,2);
      }
    }
    plVar12[0x107e] = (int64_t)plVar11;
    FUN_18029de40(*(uint64_t *)(system_message_buffer + 0x1cd8),1);
    if (*(char *)((int64_t)param_1 + 0x4c) == '\0') {
      dVar16 = (double)param_1[0xb];
      dVar17 = (double)param_1[0xc];
    }
    else {
      dVar16 = (double)(int)*(float *)(param_3 + 0x11c20) * (double)param_1[0xb];
      dVar17 = (double)(int)*(float *)(param_3 + 0x11c24) * (double)param_1[0xc];
    }
    uStack_4e0 = 0;
    uStack_4e8 = 0;
    FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    lVar7 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1df0) =
         *(uint64_t *)(param_3 + 0x35a8);
    *(uint64_t *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1df8) = *(uint64_t *)(param_3 + 0x35b0);
    *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1be0) = 0.5 / (float)dVar16;
    *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1be4) = 0.5 / (float)dVar17;
    plVar12 = param_1 + 0x27;
    lVar3 = *plVar12;
    if (lVar3 == 0) {
      *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1be8) = (float)(1.0 / (double)param_1[0xb]);
      *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1bec) = (float)(1.0 / (double)param_1[0xc]);
    }
    else {
      *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar3 + 0x32c);
      *(float *)(*(int64_t *)(lVar7 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar3 + 0x32e);
    }
    FUN_18029fc10(*(int64_t *)(lVar7 + 0x1cd8),*(uint64_t *)(lVar7 + 0x1c88),
                  *(int64_t *)(lVar7 + 0x1cd8) + 0x1be0,0x230);
    uVar14 = param_4 | 0x400;
    if (*(int *)(param_3 + 0x9a34) != 2) {
      uVar14 = param_4;
    }
    uVar8 = uVar14 | 0x200;
    if (*(int *)(param_3 + 0x9a34) != 0) {
      uVar8 = uVar14;
    }
    if (((((*(byte *)(param_3 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_3 + 0x1bd9) & 2) == 0))
        || (*(int *)(system_system_data_ui + 0xa10) == 0)) || (*(char *)(param_3 + 0x130) == '\0')) {
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
      puStack_378 = &memory_allocator_3480_ptr;
      puStack_370 = auStack_360;
      auStack_360[0] = 0;
      uStack_368 = 7;
      strcpy_s(auStack_360,0x40,&ui_system_data_1872_ptr);
      plVar4 = (int64_t *)SystemCore_LoggingSystem0(lVar3,&puStack_378,0);
      puStack_378 = &system_state_ptr;
      lVar3 = param_1[6];
    }
    if ((param_5 & 8) != 0) {
      puStack_318 = &memory_allocator_3480_ptr;
      puStack_310 = auStack_300;
      auStack_300[0] = 0;
      uStack_308 = 7;
      strcpy_s(auStack_300,0x40,&ui_system_data_1808_ptr);
      uVar5 = SystemCore_LoggingSystem0(lVar3,&puStack_318,0);
      plVar4 = (int64_t *)((uint64_t)plVar4 | uVar5);
      puStack_318 = &system_state_ptr;
      lVar3 = param_1[6];
    }
    if ((param_5 & 4) != 0) {
      puStack_2b8 = &memory_allocator_3480_ptr;
      puStack_2b0 = auStack_2a0;
      auStack_2a0[0] = 0;
      uStack_2a8 = 0xe;
      strcpy_s(auStack_2a0,0x40,&ui_system_data_1792_ptr);
      uVar5 = SystemCore_LoggingSystem0(lVar3,&puStack_2b8,0);
      plVar4 = (int64_t *)((uint64_t)plVar4 | uVar5);
      puStack_2b8 = &system_state_ptr;
      lVar3 = param_1[6];
    }
    if ((param_5 & 2) != 0) {
      puStack_258 = &memory_allocator_3480_ptr;
      puStack_250 = auStack_240;
      auStack_240[0] = 0;
      uStack_248 = 0xd;
      strcpy_s(auStack_240,0x40,&ui_system_data_1760_ptr);
      uVar5 = SystemCore_LoggingSystem0(lVar3,&puStack_258,0);
      plVar4 = (int64_t *)((uint64_t)plVar4 | uVar5);
      puStack_258 = &system_state_ptr;
    }
    if ((*(int64_t *)(param_3 + 0x12498) != 0) && (*(int *)(param_3 + 0x2480) != 0)) {
      uVar6 = param_1[6];
      puStack_1f8 = &memory_allocator_3480_ptr;
      puStack_1f0 = auStack_1e0;
      auStack_1e0[0] = 0;
      uStack_1e8 = 0xb;
      strcpy_s(auStack_1e0,0x40,&ui_system_data_1704_ptr);
      uVar5 = SystemCore_LoggingSystem0(uVar6,&puStack_1f8,0);
      plVar4 = (int64_t *)((uint64_t)plVar4 | uVar5);
      puStack_1f8 = &system_state_ptr;
    }
    if (((*(char *)(param_3 + 0x11cf4) != '\0') && (*(int64_t *)(param_3 + 0x11d00) != 0)) &&
       ((*(int64_t *)(param_3 + 0x11ec8) != 0 ||
        (*(int64_t *)(*(int64_t *)(param_3 + 0x11d00) + 0x150) != 0)))) {
      uVar6 = param_1[6];
      puStack_198 = &memory_allocator_3480_ptr;
      puStack_190 = auStack_180;
      auStack_180[0] = 0;
      uStack_188 = 0x10;
      strcpy_s(auStack_180,0x40,&ui_system_data_1736_ptr);
      uVar5 = SystemCore_LoggingSystem0(uVar6,&puStack_198,0);
      plVar4 = (int64_t *)((uint64_t)plVar4 | uVar5);
      puStack_198 = &system_state_ptr;
    }
    if (*(char *)(param_3 + 0x12c09) != '\0') {
      uVar6 = param_1[6];
      puStack_138 = &memory_allocator_3480_ptr;
      puStack_130 = auStack_120;
      auStack_120[0] = 0;
      uStack_128 = 0xd;
      strcpy_s(auStack_120,0x40,&ui_system_data_1688_ptr);
      uVar5 = SystemCore_LoggingSystem0(uVar6,&puStack_138,0);
      plVar4 = (int64_t *)((uint64_t)plVar4 | uVar5);
      puStack_138 = &system_state_ptr;
    }
    if ((char)param_5 < '\0') {
      uVar6 = param_1[6];
      puStack_d8 = &memory_allocator_3480_ptr;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0x11;
      strcpy_s(auStack_c0,0x40,&ui_system_data_1880_ptr);
      uVar5 = SystemCore_LoggingSystem0(uVar6,&puStack_d8,0);
      plVar4 = (int64_t *)((uint64_t)plVar4 | uVar5);
      puStack_d8 = &system_state_ptr;
    }
    iVar15 = 0;
    uStack_44c = 4;
    lStack_4b8 = param_1[6];
    plStack_498 = (int64_t *)0x0;
    uVar13 = 0;
    puStack_490 = &system_data_buffer_ptr;
    uStack_478 = 0;
    lStack_488 = 0;
    uStack_480 = 0;
    plStack_460 = (int64_t *)0x0;
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
    CoreEngineDataTransformer(auStack_418,&puStack_490);
    uStack_3f8 = CONCAT44(uStack_46c,uStack_470);
    uStack_3f0 = CONCAT44(uStack_464,uStack_468);
    plStack_3e8 = plStack_460;
    if (plStack_460 != (int64_t *)0x0) {
      (**(code **)(*plStack_460 + 0x28))();
    }
    uVar6 = FUN_180299eb0(uVar6,param_3,&lStack_440,&cStack_4d8);
    if (cStack_4d8 == '\0') {
      param_1[0x1f] = uVar6;
      *(int32_t *)((int64_t)param_1 + 0x134) = 1;
      *(int32_t *)((int64_t)param_1 + 0x114) = *(int32_t *)(param_1[0x85] + 0x324);
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
          FUN_18029d150(*(uint64_t *)(system_message_buffer + 0x1cd8),iVar10,*plVar12,0x10);
        }
        iVar10 = iVar10 + 1;
        plVar12 = plVar12 + 1;
      } while (iVar10 < 0x10);
      *(int16_t *)(param_1 + 0x20) = 0x101;
      *(int8_t *)((int64_t)param_1 + 0x103) = 0;
      *(int16_t *)((int64_t)param_1 + 0x105) = 0;
      *(int8_t *)((int64_t)param_1 + 0x104) = *(int8_t *)(param_1 + 0x8a);
      *(int8_t *)((int64_t)param_1 + 0x107) = *(int8_t *)((int64_t)param_1 + 0x454);
      FUN_18029d000(*(uint64_t *)(system_message_buffer + 0x1cd8),4);
      FUN_18029cdd0(*(uint64_t *)(system_message_buffer + 0x1cd8),param_1 + 0x1f);
      lVar3 = system_message_buffer;
      puVar9 = &system_buffer_ptr;
      if ((void *)param_1[3] != (void *)0x0) {
        puVar9 = (void *)param_1[3];
      }
      if (puVar9 != (void *)0x0) {
        lVar7 = strnlen(puVar9,0x3f);
        strncpy(lVar3 + 0x1ce0,puVar9,lVar7);
        *(int8_t *)(lVar7 + 0x1ce0 + lVar3) = 0;
      }
      FUN_18029e110(*(uint64_t *)(system_message_buffer + 0x1cd8));
      if ((void *)*param_1 != &processed_var_6168_ptr) {
        (**(code **)((void *)*param_1 + 0x28))(param_1);
      }
      lVar3 = 0x8a38;
      lVar7 = 0x8438;
      do {
        if ((*(int64_t *)((int64_t)param_1 + lVar7 + -0x8300) != 0) &&
           (((lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8), *(int64_t *)(lVar7 + lVar1) != 0 ||
             (*(int *)(lVar1 + -0x200 + lVar3) != -1)) || (*(int *)(lVar3 + lVar1) != 0x10)))) {
          ppuStack_4d0 = (void **)0x0;
          (**(code **)(**(int64_t **)(lVar1 + 0x8400) + 0x40))
                    (*(int64_t **)(lVar1 + 0x8400),iVar15,1,&ppuStack_4d0);
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
    if (plStack_460 != (int64_t *)0x0) {
      (**(code **)(*plStack_460 + 0x38))();
    }
    ppuStack_4c8 = &puStack_490;
    puStack_490 = &system_data_buffer_ptr;
    if (lStack_488 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_488 = 0;
    uStack_478 = uStack_478 & 0xffffffff00000000;
    puStack_490 = &system_state_ptr;
    if (plStack_498 != (int64_t *)0x0) {
      (**(code **)(*plStack_498 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
  }
  system_system_data_ui = system_system_data_ui + -1;
  (**(code **)(*system_system_data_ui + 0x20))();
  FUN_1802c2ac0(&puStack_3d8);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_78 ^ (uint64_t)auStack_508);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: uint8_t FUN_1804c60b0;
uint8_t FUN_1804c60b0;



// 函数: uint8_t FUN_1804a8e90;
uint8_t FUN_1804a8e90;



// 函数: uint8_t FUN_1804a9a20;
uint8_t FUN_1804a9a20;
uint8_t processed_var_9760;
uint8_t system_data_f500;
uint8_t processed_var_9976;
uint8_t system_data_cc08;
uint8_t ui_system_data_1920;
uint8_t system_data_6110;
uint8_t system_data_6380;
int32_t processed_var_9140;
int32_t processed_var_9144;
uint8_t system_data_1044;
int32_t processed_var_9148;
uint8_t system_data_6384;
uint8_t system_data_1040;
uint8_t system_data_64c0;
uint8_t system_data_64b8;
uint8_t system_data_64bc;
uint8_t system_data_6370;
uint8_t system_data_6108;
uint8_t system_data_6148;
uint8_t processed_var_5040;
uint8_t processed_var_5056;
uint8_t processed_var_5088;
uint8_t processed_var_5104;
uint8_t system_data_1d30;
uint8_t system_data_1d28;
uint64_t ui_system_data_1160;
uint8_t ui_system_data_128;
uint8_t ui_system_data_152;
uint8_t ui_system_data_176;
uint8_t processed_var_632;
uint8_t processed_var_672;
uint8_t processed_var_704;
uint8_t ui_system_data_1152;
uint8_t ui_system_data_1184;
uint8_t ui_system_data_1640;
uint8_t system_data_92b8;
uint8_t system_data_90b0;
uint8_t system_data_8f1a;
uint8_t ui_system_data_1664;
uint8_t ui_system_data_1688;
uint8_t ui_system_data_1840;
uint8_t ui_system_data_1864;
uint8_t system_data_17d0;
uint8_t system_data_18d0;
uint8_t processed_var_4752;
uint8_t processed_var_4976;



// 函数: uint8_t FUN_1804a5e90;
uint8_t FUN_1804a5e90;
uint8_t ui_system_data_1880;
uint8_t system_data_5eb8;
uint8_t system_data_5ea8;
uint8_t system_data_d36c;
uint8_t system_data_5ea0;
uint8_t ui_system_data_1816;
uint8_t system_data_25c8;
uint8_t system_data_2cd8;
uint8_t system_data_2ce0;
uint8_t system_data_25a0;
uint64_t *processed_var_4872;
uint64_t *processed_var_4936;
int64_t processed_var_7096;
uint64_t processed_var_7104;
uint8_t processed_var_8320;
uint8_t processed_var_8352;
uint8_t rendering_buffer_2104;
uint8_t system_data_5be0;



// 函数: uint8_t FUN_1804a7600;
uint8_t FUN_1804a7600;
uint8_t ui_system_data_1952;
uint8_t processed_var_6080;
uint8_t processed_var_6160;
uint8_t processed_var_6240;
uint8_t processed_var_6320;
uint8_t processed_var_6400;
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
uint8_t processed_var_4656;
uint8_t processed_var_4688;



// 函数: uint8_t FUN_1804ad200;
uint8_t FUN_1804ad200;
uint8_t processed_var_5356;
uint8_t system_data_e0f8;
uint8_t processed_var_5472;
uint8_t processed_var_5480;
uint8_t processed_var_8396;
uint8_t processed_var_5456;
uint8_t processed_var_5464;
uint8_t processed_var_5496;
uint8_t processed_var_5560;
uint8_t processed_var_5576;
uint8_t processed_var_5592;
uint8_t processed_var_5608;
uint8_t processed_var_5624;
uint8_t processed_var_5664;
uint8_t processed_var_5776;
uint8_t processed_var_5800;
uint8_t rendering_buffer_2216;
uint8_t processed_var_5704;
uint8_t processed_var_5728;
uint8_t processed_var_5744;
uint8_t processed_var_5760;
uint8_t processed_var_5820;
uint8_t processed_var_5832;
uint8_t processed_var_5848;
uint8_t processed_var_5864;
uint8_t processed_var_5880;
uint8_t processed_var_5904;
uint8_t processed_var_5928;
uint8_t processed_var_5960;
uint8_t processed_var_6024;
uint8_t processed_var_6136;
uint8_t processed_var_6168;
uint8_t processed_var_6200;
uint8_t processed_var_5616;
uint8_t processed_var_6072;
uint8_t processed_var_6096;
uint8_t processed_var_6112;
uint8_t processed_var_6120;
uint8_t processed_var_6184;
uint8_t processed_var_6336;
uint8_t processed_var_6352;
uint8_t processed_var_6512;
uint8_t processed_var_6240;
uint8_t processed_var_6224;
uint8_t processed_var_6304;
uint8_t processed_var_6320;
uint8_t processed_var_6696;
uint8_t processed_var_6760;
uint8_t processed_var_6776;
uint8_t processed_var_6792;
uint8_t processed_var_6808;



// 函数: uint8_t FUN_1804bfc50;
uint8_t FUN_1804bfc50;



// 函数: uint8_t FUN_1800ae3f0;
uint8_t FUN_1800ae3f0;
uint8_t processed_var_704;
uint8_t processed_var_6608;
uint8_t processed_var_6712;
uint8_t processed_var_6736;
uint8_t processed_var_6904;



// 函数: uint8_t FUN_1804c97c0;
uint8_t FUN_1804c97c0;



// 函数: uint8_t FUN_1804c98d0;
uint8_t FUN_1804c98d0;
uint8_t ui_system_data_1808;
uint8_t ui_system_data_1944;
uint8_t ui_system_data_1968;
uint8_t rendering_buffer_2088;
uint8_t rendering_buffer_2176;
uint8_t system_interrupt_handler;
char system_data_2845;
uint8_t rendering_buffer_2128;
uint8_t rendering_buffer_2152;
uint8_t rendering_buffer_2200;
uint8_t rendering_buffer_2232;
uint8_t rendering_buffer_2320;



// 函数: uint8_t FUN_1804ce100;
uint8_t FUN_1804ce100;
uint8_t processed_var_9440;



// 函数: uint8_t FUN_1804ce920;
uint8_t FUN_1804ce920;
uint8_t ui_system_data_1536;
uint8_t ui_system_data_176;
uint8_t rendering_buffer_240;



// 函数: uint8_t FUN_1804df470;
uint8_t FUN_1804df470;



// 函数: uint8_t FUN_1804df640;
uint8_t FUN_1804df640;
uint8_t processed_var_6724;
uint8_t rendering_buffer_2264;
uint8_t rendering_buffer_2288;
uint8_t processed_var_8704;
uint8_t processed_var_8720;



// 函数: uint8_t FUN_1804df080;
uint8_t FUN_1804df080;
uint8_t processed_var_9008;
uint8_t processed_var_9408;



// 函数: uint8_t FUN_1804df1a0;
uint8_t FUN_1804df1a0;
uint8_t processed_var_9472;
uint8_t processed_var_9488;



// 函数: uint8_t FUN_1804dee90;
uint8_t FUN_1804dee90;
uint8_t processed_var_8640;
uint8_t ui_system_data_1184;
uint8_t ui_system_data_1200;
uint8_t ui_system_data_1264;
uint8_t ui_system_data_1280;
uint8_t ui_system_data_1344;
uint8_t ui_system_data_1360;
uint8_t ui_system_data_1168;



// 函数: uint8_t FUN_1804dc080;
uint8_t FUN_1804dc080;
uint8_t rendering_buffer_2432;
uint8_t processed_var_9552;
uint8_t processed_var_480;
uint8_t processed_var_496;



// 函数: uint8_t FUN_1804df390;
uint8_t FUN_1804df390;
uint8_t processed_var_7472;
uint8_t processed_var_7664;
uint8_t processed_var_7824;
uint8_t processed_var_7984;



// 函数: uint8_t FUN_1804dea90;
uint8_t FUN_1804dea90;



// 函数: uint8_t FUN_1804deba0;
uint8_t FUN_1804deba0;



// 函数: uint8_t FUN_1804dec60;
uint8_t FUN_1804dec60;



// 函数: uint8_t FUN_1804ded00;
uint8_t FUN_1804ded00;
uint8_t system_data_6018;
uint8_t processed_var_8048;
uint8_t processed_var_8064;
uint8_t processed_var_560;
uint8_t processed_var_576;
uint8_t processed_var_8128;
uint8_t processed_var_8144;
uint8_t processed_var_8208;
uint8_t processed_var_8224;
uint8_t rendering_buffer_2560;
uint8_t rendering_buffer_2608;
uint8_t memory_allocator_3408;
uint8_t memory_allocator_3728;
uint8_t processed_var_5376;
uint8_t processed_var_5552;
uint8_t processed_var_5584;
uint8_t processed_var_5760;
uint8_t ui_system_data_1728;



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
uint8_t ui_system_data_1480;
uint8_t ui_system_data_1592;
uint8_t ui_system_data_1560;
uint8_t ui_system_data_1904;
uint8_t ui_system_data_1712;



// 函数: uint8_t FUN_1805f3060;
uint8_t FUN_1805f3060;
uint8_t processed_var_4864;
uint8_t processed_var_5072;
uint8_t processed_var_5272;



// 函数: uint8_t FUN_1805f32b0;
uint8_t FUN_1805f32b0;



// 函数: uint8_t FUN_1804aa030;
uint8_t FUN_1804aa030;
uint8_t processed_var_5568;
uint8_t processed_var_5464;
uint8_t processed_var_5880;
uint8_t processed_var_6040;
uint8_t processed_var_5512;
uint8_t processed_var_5528;
uint8_t processed_var_6176;
uint8_t processed_var_6256;
uint8_t processed_var_6336;
uint8_t processed_var_6416;
uint8_t processed_var_6496;
uint8_t processed_var_6864;
uint8_t processed_var_6568;
uint8_t processed_var_6688;
uint8_t processed_var_6744;
uint8_t processed_var_7056;
uint8_t processed_var_7112;
uint8_t processed_var_7168;



// 函数: uint8_t FUN_1805f8910;
uint8_t FUN_1805f8910;
uint8_t ui_system_data_1696;



// 函数: uint8_t FUN_1805f8820;
uint8_t FUN_1805f8820;
uint8_t processed_var_5672;
uint8_t processed_var_5688;
uint8_t processed_var_5704;
uint8_t processed_var_5720;
uint8_t processed_var_5832;
uint8_t processed_var_5848;
uint8_t processed_var_5864;
uint8_t processed_var_5608;
uint8_t processed_var_5624;
uint8_t processed_var_5640;
uint8_t processed_var_5656;
uint8_t processed_var_5736;
uint8_t processed_var_5752;
uint8_t processed_var_5768;
uint8_t processed_var_5784;
uint8_t processed_var_5912;
uint8_t processed_var_5960;
uint8_t processed_var_5976;
uint8_t processed_var_5928;
uint8_t processed_var_5944;



// 函数: uint8_t FUN_1805faf50;
uint8_t FUN_1805faf50;



// 函数: uint8_t FUN_1805fd350;
uint8_t FUN_1805fd350;
uint8_t processed_var_7224;
uint8_t processed_var_7240;
uint8_t processed_var_7256;
uint8_t processed_var_7272;
uint8_t processed_var_7104;
uint8_t processed_var_7496;
uint8_t processed_var_6736;
uint8_t processed_var_7536;
uint8_t processed_var_7624;
uint8_t processed_var_7672;
uint8_t ui_system_data_1952;
uint8_t processed_var_7760;
uint8_t processed_var_7792;
uint8_t processed_var_7848;
uint8_t processed_var_7872;
uint8_t processed_var_4208;



// 函数: uint8_t FUN_1805f6f30;
uint8_t FUN_1805f6f30;



// 函数: uint8_t FUN_1805f6f50;
uint8_t FUN_1805f6f50;



// 函数: uint8_t FUN_1805f7180;
uint8_t FUN_1805f7180;



// 函数: uint8_t FUN_1805f7330;
uint8_t FUN_1805f7330;
uint8_t system_data_5bd0;
uint8_t processed_var_400;
uint8_t processed_var_840;
uint8_t processed_var_872;
uint8_t processed_var_896;
uint8_t processed_var_904;
uint8_t processed_var_6264;
uint8_t ui_system_data_1408;
uint8_t ui_system_data_1488;
uint8_t ui_system_data_1584;
uint8_t ui_system_data_1528;
uint8_t ui_system_data_1640;
uint8_t ui_system_data_1696;
uint8_t processed_var_6560;
uint8_t processed_var_7484;
uint8_t ui_system_data_1872;
uint8_t rendering_buffer_2000;
uint8_t rendering_buffer_2432;
uint8_t rendering_buffer_2488;



// 函数: uint8_t FUN_1806f1000;
uint8_t FUN_1806f1000;
uint8_t processed_var_8664;
uint8_t processed_var_8672;
uint8_t processed_var_8680;
uint8_t processed_var_8704;
uint8_t processed_var_8720;
uint8_t processed_var_8736;
uint8_t processed_var_8752;
uint8_t processed_var_9296;
uint8_t system_data_c324;
uint8_t system_data_c320;
uint8_t system_data_c330;
uint8_t system_data_c328;
uint8_t system_data_c32c;
uint8_t system_data_0f00;
uint8_t processed_var_8448;
uint8_t processed_var_8544;
uint8_t processed_var_9320;
uint8_t processed_var_8792;
uint8_t processed_var_8800;
uint8_t processed_var_9336;
uint8_t processed_var_9352;
uint8_t processed_var_9368;
uint8_t processed_var_9392;
uint8_t processed_var_9408;
uint8_t processed_var_4016;
uint8_t processed_var_4032;
uint8_t processed_var_4048;
uint8_t processed_var_4064;
uint8_t processed_var_4080;
uint8_t processed_var_4096;
uint8_t processed_var_4112;
uint8_t processed_var_4176;
uint8_t processed_var_4240;
uint8_t processed_var_4304;
uint8_t processed_var_4368;
uint8_t processed_var_4432;
uint8_t processed_var_4496;
uint8_t processed_var_4576;
uint8_t processed_var_4592;
uint8_t processed_var_4608;
uint8_t processed_var_4624;
uint8_t processed_var_4640;
uint8_t processed_var_9060;
uint8_t processed_var_9072;
uint8_t processed_var_9084;
uint8_t processed_var_9096;
uint8_t processed_var_9112;
uint8_t processed_var_9128;
uint8_t processed_var_9144;
uint8_t processed_var_9160;



// 函数: uint8_t FUN_1806f4900;
uint8_t FUN_1806f4900;
uint8_t processed_var_9176;



// 函数: uint8_t FUN_1806f4940;
uint8_t FUN_1806f4940;
uint8_t processed_var_9192;



// 函数: uint8_t FUN_1806f4980;
uint8_t FUN_1806f4980;
uint8_t processed_var_9212;



// 函数: uint8_t FUN_1806f49c0;
uint8_t FUN_1806f49c0;
uint8_t processed_var_9224;



// 函数: uint8_t FUN_1806f4a00;
uint8_t FUN_1806f4a00;
uint8_t processed_var_9240;



// 函数: uint8_t FUN_1806f4a40;
uint8_t FUN_1806f4a40;
uint8_t processed_var_9272;



// 函数: uint8_t FUN_1806f4a90;
uint8_t FUN_1806f4a90;
uint8_t processed_var_9304;
uint8_t processed_var_4656;
uint8_t processed_var_4672;



// 函数: uint8_t FUN_1806f4bc0;
uint8_t FUN_1806f4bc0;
uint8_t processed_var_4688;



// 函数: uint8_t FUN_1806f4bf0;
uint8_t FUN_1806f4bf0;
uint8_t processed_var_4704;
uint8_t processed_var_4720;
uint8_t processed_var_4736;
uint8_t processed_var_4752;
uint8_t processed_var_4768;
uint8_t processed_var_4784;
uint8_t processed_var_4800;
uint8_t processed_var_4816;
uint8_t processed_var_4928;
uint8_t processed_var_9328;
uint8_t processed_var_9344;
uint8_t processed_var_9360;
uint8_t processed_var_9376;
uint8_t processed_var_9392;
uint8_t processed_var_9408;
uint8_t processed_var_9416;
uint8_t processed_var_4944;
uint8_t processed_var_5008;
uint8_t processed_var_5072;



// 函数: uint8_t FUN_1806f4c40;
uint8_t FUN_1806f4c40;
uint8_t processed_var_5088;



// 函数: uint8_t FUN_1806f4c80;
uint8_t FUN_1806f4c80;
uint8_t processed_var_5104;
uint8_t processed_var_5120;
uint8_t processed_var_5136;
uint8_t processed_var_5152;
uint8_t processed_var_5168;
uint8_t processed_var_9440;
uint8_t processed_var_9448;
uint8_t processed_var_9464;
uint8_t processed_var_9480;
uint8_t processed_var_9496;
uint8_t processed_var_5184;
uint8_t processed_var_5200;
uint8_t processed_var_5216;
uint8_t processed_var_5232;
uint8_t processed_var_5248;
uint8_t processed_var_5264;
uint8_t processed_var_5280;
uint8_t processed_var_5296;
uint8_t processed_var_5456;
uint8_t processed_var_5472;



// 函数: uint8_t FUN_1806f4da0;
uint8_t FUN_1806f4da0;
uint8_t processed_var_5488;



// 函数: uint8_t FUN_1806f4dd0;
uint8_t FUN_1806f4dd0;
uint8_t processed_var_5504;



// 函数: uint8_t FUN_1806f4e00;
uint8_t FUN_1806f4e00;
uint8_t processed_var_5520;
uint8_t processed_var_9512;
uint8_t processed_var_9528;
uint8_t processed_var_9540;
uint8_t processed_var_9552;
uint8_t processed_var_5536;
uint8_t processed_var_5552;
uint8_t processed_var_5568;
uint8_t processed_var_5632;
uint8_t processed_var_5664;
uint8_t processed_var_5680;
uint8_t processed_var_5696;
uint8_t processed_var_5712;
uint8_t processed_var_5728;
uint8_t processed_var_5840;
uint8_t processed_var_5856;
uint8_t processed_var_5872;
uint8_t processed_var_5888;
uint8_t processed_var_5904;
uint8_t processed_var_9572;
uint8_t processed_var_9584;
uint8_t processed_var_9600;
uint8_t processed_var_9616;
uint8_t processed_var_9632;



// 函数: uint8_t FUN_1806f4eb0;
uint8_t FUN_1806f4eb0;



// 函数: uint8_t FUN_1806f4f50;
uint8_t FUN_1806f4f50;



// 函数: uint8_t FUN_1806f4f80;
uint8_t FUN_1806f4f80;
uint8_t processed_var_5920;
uint8_t processed_var_5984;
uint8_t processed_var_6000;
uint8_t processed_var_6112;
uint8_t processed_var_6128;
uint8_t processed_var_6144;
uint8_t processed_var_9656;



// 函数: uint8_t FUN_1806f5010;
uint8_t FUN_1806f5010;
uint8_t processed_var_9672;



// 函数: uint8_t FUN_1806f5060;
uint8_t FUN_1806f5060;



