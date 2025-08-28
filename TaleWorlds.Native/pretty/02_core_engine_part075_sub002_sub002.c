#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part075_sub002_sub002.c - 1 个函数

// 函数: void FUN_180108190(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180108190(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char cVar4;
  int32_t uVar5;
  uint64_t uVar6;
  void *puVar7;
  uint64_t uStackX_8;
  int8_t auStack_50 [16];
  code *pcStack_40;
  void *puStack_38;
  
  pcStack_40 = (code *)&unknown_var_128_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x198) = 0;
  puVar1 = (int8_t *)(param_1 + 0x1a0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x1b0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1b0))(puVar1,0,0,param_4,0xfffffffffffffffe);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x1b0) = pcStack_40;
    *(void **)(param_1 + 0x1b8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x158) + 0x10))(param_1 + 0x158,&unknown_var_592_ptr);
  uStackX_8._0_4_ = 0;
  uVar5 = 0;
  if ((*(int64_t *)(param_1 + 0x1b0) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8), uVar5 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x160) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 0x160);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
    }
    uVar5 = *(int32_t *)(param_1 + 0x198);
  }
  *(int32_t *)(param_1 + 0x150) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8._4_4_ << 0x20);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x160) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x160);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x198);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x154) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x150);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_96_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x2e8) = 0;
  puVar1 = (int8_t *)(param_1 + 0x2f0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x300) != (code *)0x0) {
      (**(code **)(param_1 + 0x300))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x300) = pcStack_40;
    *(void **)(param_1 + 0x308) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x2a8) + 0x10))(param_1 + 0x2a8,&unknown_var_568_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x300) != 0) {
    cVar4 = (**(code **)(param_1 + 0x308))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x2b0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x2b0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x2e8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x2a0) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x300) != 0) {
    cVar4 = (**(code **)(param_1 + 0x308))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x2b0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x2b0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x2e8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x2a4) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x2a0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_64_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x208) = 0;
  puVar1 = (int8_t *)(param_1 + 0x210);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x220) != (code *)0x0) {
      (**(code **)(param_1 + 0x220))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x220) = pcStack_40;
    *(void **)(param_1 + 0x228) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1c8) + 0x10))(param_1 + 0x1c8,&unknown_var_632_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x220) != 0) {
    cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1d0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x1d0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x208);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x1c0) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x220) != 0) {
    cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1d0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x1d0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x208);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x1c4) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x1c0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_32_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x278) = 0;
  puVar1 = (int8_t *)(param_1 + 0x280);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x290) != (code *)0x0) {
      (**(code **)(param_1 + 0x290))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x290) = pcStack_40;
    *(void **)(param_1 + 0x298) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x238) + 0x10))(param_1 + 0x238,&unknown_var_608_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x240) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x240);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x278);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x230) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x240) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x240);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x278);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x234) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x230);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_0_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x358) = 0;
  puVar1 = (int8_t *)(param_1 + 0x360);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x370) != (code *)0x0) {
      (**(code **)(param_1 + 0x370))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x370) = pcStack_40;
    *(void **)(param_1 + 0x378) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x318) + 0x10))(param_1 + 0x318,&unknown_var_672_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x370) != 0) {
    cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 800) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 800);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x358);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x310) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x370) != 0) {
    cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 800) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 800);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x358);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x314) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x310);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_9968_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x3c8) = 0;
  puVar1 = (int8_t *)(param_1 + 0x3d0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x3e0) != (code *)0x0) {
      (**(code **)(param_1 + 0x3e0))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x3e0) = pcStack_40;
    *(void **)(param_1 + 1000) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x388) + 0x10))(param_1 + 0x388,&unknown_var_656_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x3e0) != 0) {
    cVar4 = (**(code **)(param_1 + 1000))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x390) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x390);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x3c8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x380) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x3e0) != 0) {
    cVar4 = (**(code **)(param_1 + 1000))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x390) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x390);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x3c8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 900) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x380);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_9936_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x438) = 0;
  puVar1 = (int8_t *)(param_1 + 0x440);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x450) != (code *)0x0) {
      (**(code **)(param_1 + 0x450))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x450) = pcStack_40;
    *(void **)(param_1 + 0x458) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x3f8) + 0x10))(param_1 + 0x3f8,&unknown_var_728_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x400) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x400);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x438);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x3f0) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x400) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x400);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x438);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x3f4) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x3f0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_9904_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x4a8) = 0;
  puVar1 = (int8_t *)(param_1 + 0x4b0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x4c0) != (code *)0x0) {
      (**(code **)(param_1 + 0x4c0))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x4c0) = pcStack_40;
    *(void **)(param_1 + 0x4c8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x468) + 0x10))(param_1 + 0x468,&unknown_var_696_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x4c0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x4c8))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x470) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x470);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x4a8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x460) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x4c0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x4c8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x470) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x470);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x4a8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x464) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x460);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_9872_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x128) = 1;
  puVar1 = (int8_t *)(param_1 + 0x130);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x140) != (code *)0x0) {
      (**(code **)(param_1 + 0x140))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x140) = pcStack_40;
    *(void **)(param_1 + 0x148) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0xe8) + 0x10))(param_1 + 0xe8,&unknown_var_776_ptr);
  uStackX_8._0_4_ = 1;
  uVar5 = 1;
  if ((*(int64_t *)(param_1 + 0x140) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8), uVar5 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 0xf0);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
    }
    uVar5 = *(int32_t *)(param_1 + 0x128);
  }
  *(int32_t *)(param_1 + 0xe0) = uVar5;
  uStackX_8 = (uint64_t *)CONCAT44(uStackX_8._4_4_,1);
  uVar5 = 1;
  if (*(int64_t *)(param_1 + 0x140) != 0) {
    cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0xf0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x128);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0xe4) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0xe0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_9840_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x518) = 0;
  puVar1 = (int8_t *)(param_1 + 0x520);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x530) != (code *)0x0) {
      (**(code **)(param_1 + 0x530))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x530) = pcStack_40;
    *(void **)(param_1 + 0x538) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x4d8) + 0x10))(param_1 + 0x4d8,&unknown_var_752_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x530) != 0) {
    cVar4 = (**(code **)(param_1 + 0x538))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x4e0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x4e0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x518);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x4d0) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x530) != 0) {
    cVar4 = (**(code **)(param_1 + 0x538))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x4e0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x4e0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x518);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x4d4) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x4d0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_9808_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x588) = 0;
  puVar1 = (int8_t *)(param_1 + 0x590);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x5a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x5a0))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x5a0) = pcStack_40;
    *(void **)(param_1 + 0x5a8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x548) + 0x10))(param_1 + 0x548,&unknown_var_840_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x5a0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x5a8))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x550) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x550);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x588);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x540) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x5a0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x5a8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x550) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x550);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x588);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x544) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x540);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&system_string2_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x5f8) = 0;
  puVar1 = (int8_t *)(param_1 + 0x600);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x610) != (code *)0x0) {
      (**(code **)(param_1 + 0x610))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x610) = pcStack_40;
    *(void **)(param_1 + 0x618) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x5b8) + 0x10))(param_1 + 0x5b8,&unknown_var_808_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x610) != 0) {
    cVar4 = (**(code **)(param_1 + 0x618))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x5c0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x5c0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x5f8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x5b0) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x610) != 0) {
    cVar4 = (**(code **)(param_1 + 0x618))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x5c0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x5c0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x5f8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x5b4) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x5b0);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x9b0) + 0x10))(param_1 + 0x9b0,&unknown_var_7264_ptr);
  uStackX_8 = (uint64_t *)0xffffffff00000000;
  uVar6 = 0xffffffff00000000;
  if ((*(int64_t *)(param_1 + 0xa08) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0xa10))(&uStackX_8), uVar6 = uStackX_8, cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x9b8) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 0x9b8);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
    }
    uVar6 = *(uint64_t *)(param_1 + 0x9f0);
  }
  *(uint64_t *)(param_1 + 0x9a0) = uVar6;
  uStackX_8 = (uint64_t *)0xffffffff00000000;
  uVar6 = 0xffffffff00000000;
  if ((*(int64_t *)(param_1 + 0xa08) == 0) ||
     (cVar4 = (**(code **)(param_1 + 0xa10))(&uStackX_8), uVar6 = uStackX_8, cVar4 != '\0')) {
    *(uint64_t *)(param_1 + 0x9a8) = uVar6;
  }
  else {
    if (system_debug_flag == '\0') {
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x9b8) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 0x9b8);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
    }
    *(uint64_t *)(param_1 + 0x9a8) = *(uint64_t *)(param_1 + 0x9f0);
  }
  uStackX_8 = (uint64_t *)(param_1 + 0x9a0);
  FUN_18005ea90(param_1 + 0x68,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0xa28) + 0x10))(param_1 + 0xa28,&unknown_var_7240_ptr);
  uStackX_8 = (uint64_t *)0x0;
  uVar6 = 0;
  if ((*(int64_t *)(param_1 + 0xa80) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0xa88))(&uStackX_8), uVar6 = uStackX_8, cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0xa30) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 0xa30);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
    }
    uVar6 = *(uint64_t *)(param_1 + 0xa68);
  }
  *(uint64_t *)(param_1 + 0xa18) = uVar6;
  uStackX_8 = (uint64_t *)0x0;
  uVar6 = 0;
  if ((*(int64_t *)(param_1 + 0xa80) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0xa88))(&uStackX_8), uVar6 = uStackX_8, cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar7 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0xa30) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 0xa30);
      }
      SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
    }
    uVar6 = *(uint64_t *)(param_1 + 0xa68);
  }
  *(uint64_t *)(param_1 + 0xa20) = uVar6;
  uStackX_8 = (uint64_t *)(param_1 + 0xa18);
  FUN_18005ea90(param_1 + 0x68,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_9744_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x668) = 0;
  puVar1 = (int8_t *)(param_1 + 0x670);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x680) != (code *)0x0) {
      (**(code **)(param_1 + 0x680))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x680) = pcStack_40;
    *(void **)(param_1 + 0x688) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x628) + 0x10))(param_1 + 0x628,&unknown_var_896_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x680) != 0) {
    cVar4 = (**(code **)(param_1 + 0x688))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x630) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x630);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x668);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x620) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x680) != 0) {
    cVar4 = (**(code **)(param_1 + 0x688))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x630) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x630);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x668);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x624) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x620);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_9712_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x6d8) = 0;
  puVar1 = (int8_t *)(param_1 + 0x6e0);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x6f0) != (code *)0x0) {
      (**(code **)(param_1 + 0x6f0))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x6f0) = pcStack_40;
    *(void **)(param_1 + 0x6f8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x698) + 0x10))(param_1 + 0x698,&unknown_var_872_ptr);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x6f0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x6f8))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x6a0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x6a0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x6d8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x690) = uVar5;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x6f0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x6f8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x6a0) != (void *)0x0) {
          puVar7 = *(void **)(param_1 + 0x6a0);
        }
        SystemOptimizationProcessor(&unknown_var_544_ptr,puVar7);
      }
      uVar5 = *(int32_t *)(param_1 + 0x6d8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x694) = uVar5;
  uStackX_8 = (uint64_t *)(param_1 + 0x690);
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_9680_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x748) = 0;
  puVar1 = (int8_t *)(param_1 + 0x750);
  if (puVar1 != auStack_50) {
    if (*(code **)(param_1 + 0x760) != (code *)0x0) {
      (**(code **)(param_1 + 0x760))(puVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(puVar1,auStack_50,1);
    }
    *(code **)(param_1 + 0x760) = pcStack_40;
    *(void **)(param_1 + 0x768) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  uVar2 = param_1 + 0x700;
  (**(code **)(*(int64_t *)(param_1 + 0x708) + 0x10))((int64_t *)(param_1 + 0x708),&unknown_var_944_ptr)
  ;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  DataValidationEngine(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0x770;
  (**(code **)(*(int64_t *)(param_1 + 0x778) + 0x10))((int64_t *)(param_1 + 0x778),&unknown_var_920_ptr)
  ;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  DataValidationEngine(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0x7e0;
  (**(code **)(*(int64_t *)(param_1 + 0x7e8) + 0x10))((int64_t *)(param_1 + 0x7e8),&unknown_var_1000_ptr)
  ;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  DataValidationEngine(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0x850;
  (**(code **)(*(int64_t *)(param_1 + 0x858) + 0x10))((int64_t *)(param_1 + 0x858),&unknown_var_968_ptr)
  ;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  DataValidationEngine(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0x8c0;
  (**(code **)(*(int64_t *)(param_1 + 0x8c8) + 0x10))((int64_t *)(param_1 + 0x8c8),&unknown_var_1040_ptr)
  ;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  DataValidationEngine(uVar2,&uStackX_8);
  uStackX_8 = (uint64_t *)uVar2;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  lVar3 = param_1 + 0x930;
  (**(code **)(*(int64_t *)(param_1 + 0x938) + 0x10))((int64_t *)(param_1 + 0x938),&unknown_var_1024_ptr)
  ;
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(lVar3,&uStackX_8);
  uStackX_8 = (uint64_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  DataValidationEngine(lVar3,&uStackX_8);
  uStackX_8 = (uint64_t *)lVar3;
  FUN_18005ea90(param_1 + 8,&uStackX_8);
  *(int32_t *)(param_1 + 0x88) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





