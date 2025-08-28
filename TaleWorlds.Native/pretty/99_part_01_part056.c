#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part056.c - 2 个函数

// 函数: void FUN_1800dd8a0(uint64_t param_1,int64_t param_2)
void FUN_1800dd8a0(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar10;
  int32_t uVar11;
  int8_t auStack_378 [32];
  uint uStack_358;
  uint uStack_350;
  int8_t uStack_348;
  int8_t uStack_347;
  int8_t uStack_346;
  int8_t uStack_345;
  int8_t uStack_344;
  int8_t uStack_343;
  int8_t uStack_342;
  int8_t uStack_341;
  void **ppuStack_340;
  void **ppuStack_338;
  uint64_t uStack_330;
  uint64_t uStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  uint64_t uStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  void *puStack_2f8;
  int8_t *puStack_2f0;
  int32_t uStack_2e8;
  int8_t auStack_2e0 [72];
  void *puStack_298;
  int8_t *puStack_290;
  int32_t uStack_288;
  int8_t auStack_280 [72];
  void *puStack_238;
  int8_t *puStack_230;
  int32_t uStack_228;
  int8_t auStack_220 [72];
  void *puStack_1d8;
  int8_t *puStack_1d0;
  int32_t uStack_1c8;
  int8_t auStack_1c0 [72];
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [72];
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [72];
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [72];
  uint64_t uStack_58;
  int64_t *plVar9;
  
  uStack_300 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_378;
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  plVar1 = *(int64_t **)(lVar4 + 0x83b8);
  plVar10 = (int64_t *)0x0;
  if (((*(int64_t *)(lVar4 + 0x84b8) != 0) || (*(int *)(lVar4 + 0x8878) != -1)) ||
     (*(int *)(lVar4 + 0x8a78) != 0x10)) {
    uStack_330 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x10,1,&uStack_330);
    *(uint64_t *)(lVar4 + 0x84b8) = 0;
    *(int32_t *)(lVar4 + 0x8878) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a78) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8540) != 0) || (*(int *)(lVar4 + 0x88bc) != -1)) ||
     (*(int *)(lVar4 + 0x8abc) != 0x10)) {
    uStack_328 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0x21,1,&uStack_328);
    *(uint64_t *)(lVar4 + 0x8540) = 0;
    *(int32_t *)(lVar4 + 0x88bc) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8abc) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8438) != 0) || (*(int *)(lVar4 + 0x8838) != -1)) ||
     (*(int *)(lVar4 + 0x8a38) != 0x10)) {
    uStack_320 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),0,1,&uStack_320);
    *(uint64_t *)(lVar4 + 0x8438) = 0;
    *(int32_t *)(lVar4 + 0x8838) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a38) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8440) != 0) || (*(int *)(lVar4 + 0x883c) != -1)) ||
     (*(int *)(lVar4 + 0x8a3c) != 0x10)) {
    uStack_318 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),1,1,&uStack_318);
    *(uint64_t *)(lVar4 + 0x8440) = 0;
    *(int32_t *)(lVar4 + 0x883c) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a3c) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8448) != 0) || (*(int *)(lVar4 + 0x8840) != -1)) ||
     (*(int *)(lVar4 + 0x8a40) != 0x10)) {
    uStack_310 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),2,1,&uStack_310);
    *(uint64_t *)(lVar4 + 0x8448) = 0;
    *(int32_t *)(lVar4 + 0x8840) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a40) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8450) != 0) || (*(int *)(lVar4 + 0x8844) != -1)) ||
     (*(int *)(lVar4 + 0x8a44) != 0x10)) {
    uStack_308 = 0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),3,1,&uStack_308);
    *(uint64_t *)(lVar4 + 0x8450) = 0;
    *(int32_t *)(lVar4 + 0x8844) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a44) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  lVar4 = *(int64_t *)(system_message_buffer + 0x1cd8);
  if (((*(int64_t *)(lVar4 + 0x8458) != 0) || (*(int *)(lVar4 + 0x8848) != -1)) ||
     (*(int *)(lVar4 + 0x8a48) != 0x10)) {
    ppuStack_338 = (void **)0x0;
    (**(code **)(**(int64_t **)(lVar4 + 0x8400) + 0x40))
              (*(int64_t **)(lVar4 + 0x8400),4,1,&ppuStack_338);
    *(uint64_t *)(lVar4 + 0x8458) = 0;
    *(int32_t *)(lVar4 + 0x8848) = 0xffffffff;
    *(int32_t *)(lVar4 + 0x8a48) = 0x10;
    *(int *)(lVar4 + 0x82b4) = *(int *)(lVar4 + 0x82b4) + 1;
  }
  plVar9 = *(int64_t **)(system_message_buffer + 0x1cd8);
  lVar4 = FUN_180245280(param_2);
  iVar7 = *(int *)(param_2 + 0x357c);
  plVar8 = plVar10;
  if (*(int64_t *)(lVar4 + 0x1e0) != 0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar4 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar8 = (int64_t *)((int64_t)(iVar7 * 2 + 1) * 0x10 + *(int64_t *)(lVar4 + 0x1e0));
    if ((plVar8 != (int64_t *)0x0) && (*plVar8 != 0)) {
      (**(code **)(*plVar9 + 0x70))(plVar9,*plVar8,4);
    }
  }
  plVar9[0x107e] = (int64_t)plVar8;
  FUN_1800de960();
  ppuStack_338 = &puStack_2f8;
  puStack_2f8 = &unknown_var_3480_ptr;
  puStack_2f0 = auStack_2e0;
  uStack_2e8 = 0;
  auStack_2e0[0] = 0;
  FUN_180049bf0(&puStack_2f8,&unknown_var_3672_ptr);
  FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_2f8);
  FUN_1802c22a0(&uStack_348,&unknown_var_3672_ptr);
  uStack_350 = 2;
  uStack_358 = 0;
  FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
  if ((((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0) && ((*(byte *)(param_2 + 0x1bd9) & 2) == 0)) ||
     ((*(int *)(system_system_data_memory + 0xa10) == 0 || (*(char *)(param_2 + 0x130) == '\0')))) {
    uVar11 = 0x3f800000;
  }
  else {
    uVar11 = 0;
  }
  uStack_350 = 0;
  uStack_358 = 0x8a;
  FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),2,0,uVar11);
  uStack_350 = 5;
  uStack_358 = 0;
  FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
  if ((*(uint *)(param_2 + 4) & 0x2000000) != 0) {
    uStack_350 = 0;
    uStack_358 = 0;
    FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    uStack_350 = 1;
    uStack_358 = 0;
    FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    uStack_350 = 2;
    uStack_358 = 0;
    FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    uStack_350 = 3;
    uStack_358 = 0;
    FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    uStack_350 = 4;
    uStack_358 = 0;
    FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
    uStack_350 = 5;
    uStack_358 = 0;
    FUN_18029c8a0(*(uint64_t *)(system_message_buffer + 0x1cd8),1,0,0x3f800000);
  }
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  FUN_1802c2ac0(&puStack_2f8);
  if (((*(int *)(system_system_data_memory + 0x4d0) != 0) && ((*(byte *)(param_2 + 0x35c0) & 1) != 0)) &&
     (iVar7 = *(int *)(param_2 + 0x3138), plVar9 = plVar10, 0 < iVar7)) {
    do {
      FUN_1800e8640(param_1,*(uint64_t *)
                             (*(int64_t *)(param_2 + 0x3140 + ((uint64_t)plVar9 >> 0xb) * 8) +
                              0x10 + (uint64_t)
                                     (uint)((int)plVar9 + (int)((uint64_t)plVar9 >> 0xb) * -0x800)
                                     * 0x18));
      uVar6 = (int)plVar9 + 1;
      plVar9 = (int64_t *)(uint64_t)uVar6;
    } while ((int)uVar6 < iVar7);
  }
  if ((*(byte *)(param_2 + 0x35c0) & 0x10) != 0) {
    FUN_1802c22a0(&uStack_347,&unknown_var_3632_ptr);
    uVar2 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd0);
    FUN_18029fc10(uVar2,uVar3,param_2 + 0x1d0,0x1a00);
    FUN_18029dca0(uVar2,8,0x11,uVar3);
    if (*(int *)(param_2 + 0x2c98) != 0) {
      ppuStack_338 = &puStack_298;
      puStack_298 = &unknown_var_3480_ptr;
      puStack_290 = auStack_280;
      uStack_288 = 0;
      auStack_280[0] = 0;
      FUN_180049bf0(&puStack_298,&unknown_var_3728_ptr);
      FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_298);
      FUN_1802c22a0(&uStack_346,&unknown_var_3688_ptr);
      lVar4 = system_message_buffer;
      *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83b8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83d0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83d8) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83e0) = 0;
      *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83e8) = 0;
      FUN_18029de40(*(uint64_t *)(lVar4 + 0x1cd8),7);
      plVar9 = plVar10;
      while( true ) {
        iVar7 = (int)plVar9;
        if ((uint64_t)*(uint *)(param_2 + 0x2c98) <= (uint64_t)(int64_t)iVar7) break;
        lVar4 = *(int64_t *)(param_2 + 0x2ca0 + ((uint64_t)plVar9 >> 0xb) * 8);
        uStack_350 = uStack_350 & 0xffffff00;
        uStack_358 = CONCAT31(uStack_358._1_3_,1);
        FUN_1800d6790(lVar4,param_2,
                      *(uint64_t *)
                       (lVar4 + (uint64_t)(uint)(iVar7 + (int)((uint64_t)plVar9 >> 0xb) * -0x800)
                                * 8),0);
        plVar9 = (int64_t *)(uint64_t)(iVar7 + 1);
      }
      FUN_1800de960((uint64_t)*(uint *)(param_2 + 0x2c98),param_2);
      system_system_data_memory = system_system_data_memory + -1;
      (**(code **)(*system_system_data_memory + 0x20))();
      FUN_1802c2ac0(&puStack_298);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  ppuStack_340 = &puStack_238;
  puStack_238 = &unknown_var_3480_ptr;
  puStack_230 = auStack_220;
  uStack_228 = 0;
  auStack_220[0] = 0;
  FUN_180049bf0(&puStack_238,&unknown_var_3784_ptr);
  FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_238);
  FUN_1802c22a0(&uStack_345,&unknown_var_3760_ptr);
  iVar7 = *(int *)(param_2 + 0x1c68);
  plVar9 = plVar10;
  if (0 < iVar7) {
    do {
      lVar4 = *(int64_t *)
               (*(int64_t *)(param_2 + 0x1c70 + ((uint64_t)plVar9 >> 0xb) * 8) + 0x10 +
               (uint64_t)(uint)((int)plVar9 + (int)((uint64_t)plVar9 >> 0xb) * -0x800) * 0x18);
      *(uint *)(lVar4 + 0xc4) = (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a;
      *(int32_t *)(lVar4 + 0xa4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d8) + 0x324);
      *(int32_t *)(lVar4 + 0xa8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e0) + 0x324);
      *(int32_t *)(lVar4 + 0xac) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e8) + 0x324);
      *(int32_t *)(lVar4 + 0xb0) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f0) + 0x324);
      *(int32_t *)(lVar4 + 0xb4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d0) + 0x324);
      *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f8) + 0x324);
      lVar5 = FUN_180245280(param_2);
      *(int32_t *)(lVar4 + 0xa0) = *(int32_t *)(lVar5 + 0x324);
      FUN_1800e8640(param_1,lVar4);
      uVar6 = (int)plVar9 + 1;
      plVar9 = (int64_t *)(uint64_t)uVar6;
    } while ((int)uVar6 < iVar7);
  }
  system_system_data_memory = system_system_data_memory + -1;
  (**(code **)(*system_system_data_memory + 0x20))();
  FUN_1802c2ac0(&puStack_238);
  if ((((*(uint *)(param_2 + 4) & 0x10000000) == 0) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0))
     && (lVar4 = FUN_180178540(), lVar4 != 0)) {
    FUN_180178540();
    FUN_180178650();
  }
  ppuStack_340 = &puStack_1d8;
  puStack_1d8 = &unknown_var_3480_ptr;
  puStack_1d0 = auStack_1c0;
  uStack_1c8 = 0;
  auStack_1c0[0] = 0;
  FUN_180049bf0(&puStack_1d8,&unknown_var_3840_ptr);
  FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_1d8);
  if ((*(byte *)(param_2 + 0x35c0) & 1) != 0) {
    FUN_1802c22a0(&uStack_344,&unknown_var_3824_ptr);
    iVar7 = *(int *)(param_2 + 0x1d90);
    plVar9 = plVar10;
    if (0 < iVar7) {
      do {
        lVar4 = *(int64_t *)
                 (*(int64_t *)(param_2 + 0x1d98 + ((uint64_t)plVar9 >> 0xb) * 8) + 0x10 +
                 (uint64_t)(uint)((int)plVar9 + (int)((uint64_t)plVar9 >> 0xb) * -0x800) * 0x18);
        *(uint *)(lVar4 + 0xc4) = (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a;
        *(int32_t *)(lVar4 + 0xa4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d8) + 0x324);
        *(int32_t *)(lVar4 + 0xa8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e0) + 0x324);
        *(int32_t *)(lVar4 + 0xac) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e8) + 0x324);
        *(int32_t *)(lVar4 + 0xb0) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f0) + 0x324);
        *(int32_t *)(lVar4 + 0xb4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d0) + 0x324);
        *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f8) + 0x324);
        lVar5 = FUN_180245280(param_2);
        *(int32_t *)(lVar4 + 0xa0) = *(int32_t *)(lVar5 + 0x324);
        FUN_1800e8640(param_1,lVar4);
        uVar6 = (int)plVar9 + 1;
        plVar9 = (int64_t *)(uint64_t)uVar6;
      } while ((int)uVar6 < iVar7);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  FUN_1802c2ac0(&puStack_1d8);
  FUN_1800cd350();
  if (((*(byte *)(param_2 + 0x35c0) & 0x10) != 0) && (*(int *)(param_2 + 0x2dc0) != 0)) {
    ppuStack_340 = &puStack_178;
    puStack_178 = &unknown_var_3480_ptr;
    puStack_170 = auStack_160;
    uStack_168 = 0;
    auStack_160[0] = 0;
    FUN_180049bf0(&puStack_178,&unknown_var_3896_ptr);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_178);
    FUN_1802c22a0(&uStack_343,&unknown_var_3872_ptr);
    plVar9 = plVar10;
    while (iVar7 = (int)plVar9, (uint64_t)(int64_t)iVar7 < (uint64_t)*(uint *)(param_2 + 0x2dc0))
    {
      lVar4 = *(int64_t *)(param_2 + 0x2dc8 + ((uint64_t)plVar9 >> 0xb) * 8);
      uStack_350 = CONCAT31(uStack_350._1_3_,1);
      uStack_358 = uStack_358 & 0xffffff00;
      FUN_1800d6790(lVar4,param_2,
                    *(uint64_t *)
                     (lVar4 + (uint64_t)(uint)(iVar7 + (int)((uint64_t)plVar9 >> 0xb) * -0x800) *
                              8),1);
      plVar9 = (int64_t *)(uint64_t)(iVar7 + 1);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    FUN_1802c2ac0(&puStack_178);
  }
  ppuStack_340 = &puStack_118;
  puStack_118 = &unknown_var_3480_ptr;
  puStack_110 = auStack_100;
  uStack_108 = 0;
  auStack_100[0] = 0;
  FUN_180049bf0(&puStack_118,&unknown_var_3952_ptr);
  FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_118);
  if ((*(byte *)(param_2 + 0x35c0) & 1) != 0) {
    FUN_1802c22a0(&uStack_342,&system_data_4340);
    iVar7 = *(int *)(param_2 + 0x2358);
    plVar9 = plVar10;
    if (0 < iVar7) {
      do {
        lVar4 = *(int64_t *)
                 (*(int64_t *)(param_2 + 0x2360 + ((uint64_t)plVar9 >> 0xb) * 8) + 0x10 +
                 (uint64_t)(uint)((int)plVar9 + (int)((uint64_t)plVar9 >> 0xb) * -0x800) * 0x18);
        *(uint *)(lVar4 + 0xc4) = (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a;
        *(int32_t *)(lVar4 + 0xa4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d8) + 0x324);
        *(int32_t *)(lVar4 + 0xa8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e0) + 0x324);
        *(int32_t *)(lVar4 + 0xac) = *(int32_t *)(*(int64_t *)(param_2 + 0x96e8) + 0x324);
        *(int32_t *)(lVar4 + 0xb0) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f0) + 0x324);
        *(int32_t *)(lVar4 + 0xb4) = *(int32_t *)(*(int64_t *)(param_2 + 0x96d0) + 0x324);
        *(int32_t *)(lVar4 + 0xb8) = *(int32_t *)(*(int64_t *)(param_2 + 0x96f8) + 0x324);
        lVar5 = FUN_180245280(param_2);
        *(int32_t *)(lVar4 + 0xa0) = *(int32_t *)(lVar5 + 0x324);
        FUN_1800e8640(param_1,lVar4);
        uVar6 = (int)plVar9 + 1;
        plVar9 = (int64_t *)(uint64_t)uVar6;
      } while ((int)uVar6 < iVar7);
    }
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
  }
  FUN_1802c2ac0(&puStack_118);
  if ((((*(uint *)(param_2 + 4) & 0x10000000) == 0) && ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0))
     && (lVar4 = FUN_180178540(), lVar4 != 0)) {
    FUN_180178540();
    FUN_180178650();
  }
  if ((*(byte *)(param_2 + 0x35c0) & 0x80) != 0) {
    ppuStack_340 = &puStack_b8;
    puStack_b8 = &unknown_var_3480_ptr;
    puStack_b0 = auStack_a0;
    uStack_a8 = 0;
    auStack_a0[0] = 0;
    FUN_180049bf0(&puStack_b8,&unknown_var_4024_ptr);
    FUN_1802c2560(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_b8);
    FUN_1802c22a0(&uStack_341,&unknown_var_4024_ptr);
    FUN_1800e8a00(param_1,param_2);
    system_system_data_memory = system_system_data_memory + -1;
    (**(code **)(*system_system_data_memory + 0x20))();
    FUN_1802c2ac0(&puStack_b8);
  }
  lVar5 = FUN_180245280(param_2);
  lVar4 = system_message_buffer;
  plVar9 = *(int64_t **)(system_message_buffer + 0x1cd8);
  iVar7 = *(int *)(param_2 + 0x357c);
  if (*(int64_t *)(lVar5 + 0x1e0) != 0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(lVar5 + 0x340) = (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    plVar10 = (int64_t *)((int64_t)(iVar7 * 2 + 1) * 0x10 + *(int64_t *)(lVar5 + 0x1e0));
    if ((plVar10 != (int64_t *)0x0) && (*plVar10 != 0)) {
      (**(code **)(*plVar9 + 0x70))(plVar9,*plVar10,4);
      lVar4 = system_message_buffer;
    }
  }
  plVar9[0x107e] = (int64_t)plVar10;
  *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83d0) = 0;
  *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c8) = 0;
  *(uint64_t *)(*(int64_t *)(lVar4 + 0x1cd8) + 0x83c0) = 0;
  plVar10 = *(int64_t **)(lVar4 + 0x1cd8);
  if ((plVar1 != (int64_t *)0x0) && (*plVar1 != 0)) {
    (**(code **)(*plVar10 + 0x70))(plVar10,*plVar1,1);
    lVar4 = system_message_buffer;
  }
  plVar10[0x1077] = (int64_t)plVar1;
  FUN_18029de40(*(uint64_t *)(lVar4 + 0x1cd8),1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_378);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800de960(uint64_t param_1,int64_t param_2)
void FUN_1800de960(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int8_t auStack_88 [32];
  uint uStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  lVar5 = system_message_buffer;
  lVar3 = system_main_module_state;
  plVar1 = *(int64_t **)(*(int64_t *)(param_2 + 0x96d8) + 0x1d8);
  plVar2 = *(int64_t **)(system_message_buffer + 0x1cd8);
  if (plVar1 != (int64_t *)0x0) {
    if (system_main_module_state != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96d8) + 0x340) =
           (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    if (*plVar1 != 0) {
      uStack_30 = 0x1800de9c4;
      (**(code **)(*plVar2 + 0x70))(plVar2,*plVar1,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar2[0x1077] = (int64_t)plVar1;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96e0) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96e0) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      uStack_30 = 0x1800dea1d;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x1078] = (int64_t)plVar2;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96e8) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96e8) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      uStack_30 = 0x1800dea76;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x1079] = (int64_t)plVar2;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96f0) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96f0) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      uStack_30 = 0x1800deacf;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x107a] = (int64_t)plVar2;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96d0) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96d0) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      uStack_30 = 0x1800deb28;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar3 = system_main_module_state;
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x107b] = (int64_t)plVar2;
  plVar1 = *(int64_t **)(lVar5 + 0x1cd8);
  plVar2 = *(int64_t **)(*(int64_t *)(param_2 + 0x96f8) + 0x1d8);
  if (plVar2 != (int64_t *)0x0) {
    if (lVar3 != 0) {
      *(int64_t *)(*(int64_t *)(param_2 + 0x96f8) + 0x340) = (int64_t)*(int *)(lVar3 + 0x224);
    }
    if (*plVar2 != 0) {
      uStack_30 = 0x1800deb81;
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar2,1);
      lVar5 = system_message_buffer;
    }
  }
  plVar1[0x107c] = (int64_t)plVar2;
  lVar3 = *(int64_t *)(lVar5 + 0x1cd8);
  uVar4 = (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a;
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  lVar5 = *(int64_t *)(lVar3 + 0x83b8);
  bVar7 = lVar5 != *(int64_t *)(lVar3 + 0x8378);
  if (bVar7) {
    *(int64_t *)(lVar3 + 0x8378) = lVar5;
  }
  if (lVar5 == 0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83c0);
  bVar8 = lVar5 != *(int64_t *)(lVar3 + 0x8380);
  if (bVar8) {
    *(int64_t *)(lVar3 + 0x8380) = lVar5;
  }
  if (lVar5 == 0) {
    uStack_40 = 0;
  }
  else {
    uStack_40 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83c8);
  bVar9 = lVar5 != *(int64_t *)(lVar3 + 0x8388);
  if (bVar9) {
    *(int64_t *)(lVar3 + 0x8388) = lVar5;
  }
  if (lVar5 == 0) {
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83d0);
  bVar10 = lVar5 != *(int64_t *)(lVar3 + 0x8390);
  if (bVar10) {
    *(int64_t *)(lVar3 + 0x8390) = lVar5;
  }
  if (lVar5 == 0) {
    uStack_30 = 0;
  }
  else {
    uStack_30 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83d8);
  bVar11 = lVar5 != *(int64_t *)(lVar3 + 0x8398);
  if (bVar11) {
    *(int64_t *)(lVar3 + 0x8398) = lVar5;
  }
  if (lVar5 == 0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83e0);
  bVar12 = lVar5 != *(int64_t *)(lVar3 + 0x83a0);
  if (bVar12) {
    *(int64_t *)(lVar3 + 0x83a0) = lVar5;
  }
  if (lVar5 == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83e8);
  bVar13 = lVar5 != *(int64_t *)(lVar3 + 0x83a8);
  if (bVar13) {
    *(int64_t *)(lVar3 + 0x83a8) = lVar5;
  }
  if (lVar5 == 0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = *(uint64_t *)(lVar5 + 8);
  }
  lVar5 = *(int64_t *)(lVar3 + 0x83f0);
  bVar14 = *(int64_t *)(lVar3 + 0x83b0) != lVar5;
  if (bVar14) {
    *(int64_t *)(lVar3 + 0x83b0) = lVar5;
  }
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint64_t *)(lVar5 + 8);
  }
  if ((bVar13 || (bVar12 || (bVar11 || (bVar10 || (bVar9 || (bVar8 || bVar7)))))) || (bVar14)) {
    uStack_50 = 0xffffffffffffffff;
    uStack_58 = 0;
    uStack_60 = 0xffffffff;
    uStack_68 = uVar4;
    (**(code **)(**(int64_t **)(lVar3 + 0x8400) + 0x110))
              (*(int64_t **)(lVar3 + 0x8400),uVar4,&uStack_48,uVar6);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (uint64_t)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




