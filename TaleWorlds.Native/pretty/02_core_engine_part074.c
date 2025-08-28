#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part074.c - 1 个函数

// 函数: void FUN_180107770(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180107770(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t uVar5;
  void *puVar6;
  int32_t uVar7;
  uint64_t uStackX_8;
  int8_t auStack_60 [16];
  code *pcStack_50;
  void *puStack_48;
  
  pcStack_50 = (code *)&unknown_var_224_ptr;
  puStack_48 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x128) = 0;
  puVar1 = (int8_t *)(param_1 + 0x130);
  if (puVar1 != auStack_60) {
    if (*(code **)(param_1 + 0x140) != (code *)0x0) {
      (**(code **)(param_1 + 0x140))(puVar1,0,0,param_4,0xfffffffffffffffe);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(puVar1,auStack_60,1);
    }
    *(code **)(param_1 + 0x140) = pcStack_50;
    *(void **)(param_1 + 0x148) = puStack_48;
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(auStack_60,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0xe8) + 0x10))(param_1 + 0xe8,&unknown_var_288_ptr);
  uStackX_8._0_4_ = 0;
  uVar7 = 0;
  if ((*(int64_t *)(param_1 + 0x140) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8), uVar7 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0xf0);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    uVar7 = *(int32_t *)(param_1 + 0x128);
  }
  *(int32_t *)(param_1 + 0xe0) = uVar7;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8._4_4_ << 0x20);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x140) != 0) {
    cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0xf0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x128);
    }
    else {
      uVar7 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0xe4) = uVar7;
  uStackX_8 = (int32_t *)(param_1 + 0xe0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_50 = (code *)&unknown_var_192_ptr;
  puStack_48 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x198) = 1;
  puVar1 = (int8_t *)(param_1 + 0x1a0);
  if (puVar1 != auStack_60) {
    if (*(code **)(param_1 + 0x1b0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1b0))(puVar1,0,0);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(puVar1,auStack_60,1);
    }
    *(code **)(param_1 + 0x1b0) = pcStack_50;
    *(void **)(param_1 + 0x1b8) = puStack_48;
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(auStack_60,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x158) + 0x10))(param_1 + 0x158,&unknown_var_256_ptr);
  uStackX_8._0_4_ = 1;
  uVar7 = 1;
  if ((*(int64_t *)(param_1 + 0x1b0) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8), uVar7 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x160) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x160);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    uVar7 = *(int32_t *)(param_1 + 0x198);
  }
  *(int32_t *)(param_1 + 0x150) = uVar7;
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,1);
  uVar7 = 1;
  if (*(int64_t *)(param_1 + 0x1b0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x160) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x160);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x198);
    }
    else {
      uVar7 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x154) = uVar7;
  uStackX_8 = (int32_t *)(param_1 + 0x150);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x3f8) + 0x10))(param_1 + 0x3f8,&unknown_var_352_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x400) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x400);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x438);
    }
    else {
      uVar7 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x3f0) = uVar7;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x400) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x400);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x438);
    }
    else {
      uVar7 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x3f4) = uVar7;
  uStackX_8 = (int32_t *)(param_1 + 0x3f0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_50 = (code *)&unknown_var_160_ptr;
  puStack_48 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x208) = 1;
  puVar1 = (int8_t *)(param_1 + 0x210);
  if (puVar1 != auStack_60) {
    if (*(code **)(param_1 + 0x220) != (code *)0x0) {
      (**(code **)(param_1 + 0x220))(puVar1,0,0);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(puVar1,auStack_60,1);
    }
    *(code **)(param_1 + 0x220) = pcStack_50;
    *(void **)(param_1 + 0x228) = puStack_48;
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(auStack_60,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1c8) + 0x10))(param_1 + 0x1c8,&unknown_var_320_ptr);
  uStackX_8._0_4_ = 1;
  uVar7 = 1;
  if ((*(int64_t *)(param_1 + 0x220) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8), uVar7 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1d0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x1d0);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    uVar7 = *(int32_t *)(param_1 + 0x208);
  }
  *(int32_t *)(param_1 + 0x1c0) = uVar7;
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,1);
  uVar7 = 1;
  if (*(int64_t *)(param_1 + 0x220) != 0) {
    cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1d0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x1d0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x208);
    }
    else {
      uVar7 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x1c4) = uVar7;
  uStackX_8 = (int32_t *)(param_1 + 0x1c0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x318) + 0x10))(param_1 + 0x318,&unknown_var_424_ptr);
  puVar2 = (int32_t *)(param_1 + 0x310);
  uStackX_8._0_4_ = 0x3f800000;
  uVar7 = 0x3f800000;
  if ((*(int64_t *)(param_1 + 0x370) == 0) ||
     (cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8), uVar7 = (int32_t)uStackX_8,
     cVar4 != '\0')) {
    *puVar2 = uVar7;
  }
  else {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 800) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 800);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    *puVar2 = *(int32_t *)(param_1 + 0x358);
  }
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,0x3f800000);
  uVar7 = 0x3f800000;
  if (*(int64_t *)(param_1 + 0x370) == 0) {
LAB_180107d75:
    *(int32_t *)(param_1 + 0x314) = uVar7;
  }
  else {
    cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8);
    if (cVar4 != '\0') {
      uVar7 = (int32_t)uStackX_8;
      goto LAB_180107d75;
    }
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 800) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 800);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    *(int32_t *)(param_1 + 0x314) = *(int32_t *)(param_1 + 0x358);
  }
  uStackX_8 = puVar2;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x238) + 0x10))(param_1 + 0x238,&unknown_var_392_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x240) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x240);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x278);
    }
    else {
      uVar7 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x230) = uVar7;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x240) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x240);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x278);
    }
    else {
      uVar7 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x234) = uVar7;
  uStackX_8 = (int32_t *)(param_1 + 0x230);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x2a8) + 0x10))(param_1 + 0x2a8,&unknown_var_480_ptr);
  uStackX_8._0_4_ = 1;
  uVar7 = 1;
  if ((*(int64_t *)(param_1 + 0x300) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x308))(&uStackX_8), uVar7 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x2b0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x2b0);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    uVar7 = *(int32_t *)(param_1 + 0x2e8);
  }
  *(int32_t *)(param_1 + 0x2a0) = uVar7;
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,1);
  uVar7 = 1;
  if (*(int64_t *)(param_1 + 0x300) != 0) {
    cVar4 = (**(code **)(param_1 + 0x308))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x2b0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x2b0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x2e8);
    }
    else {
      uVar7 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x2a4) = uVar7;
  uStackX_8 = (int32_t *)(param_1 + 0x2a0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x528) + 0x10))(param_1 + 0x528,&unknown_var_448_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x580) != 0) {
    cVar4 = (**(code **)(param_1 + 0x588))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x530) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x530);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x568);
    }
    else {
      uVar7 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x520) = uVar7;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x580) == 0) {
LAB_180107fff:
    *(int32_t *)(param_1 + 0x524) = uVar7;
  }
  else {
    cVar4 = (**(code **)(param_1 + 0x588))(&uStackX_8);
    if (cVar4 != '\0') {
      uVar7 = (int32_t)uStackX_8;
      goto LAB_180107fff;
    }
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x530) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x530);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    *(int32_t *)(param_1 + 0x524) = *(int32_t *)(param_1 + 0x568);
  }
  uStackX_8 = (int32_t *)(param_1 + 0x520);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x388) + 0x10))(param_1 + 0x388,&unknown_var_536_ptr);
  puVar2 = (int32_t *)(param_1 + 0x380);
  uStackX_8._0_4_ = 0x40000000;
  uVar7 = 0x40000000;
  if ((*(int64_t *)(param_1 + 0x3e0) == 0) ||
     (cVar4 = (**(code **)(param_1 + 1000))(&uStackX_8), uVar7 = (int32_t)uStackX_8,
     cVar4 != '\0')) {
    *puVar2 = uVar7;
  }
  else {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x390) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x390);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    *puVar2 = *(int32_t *)(param_1 + 0x3c8);
  }
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,0x40000000);
  uVar7 = 0x40000000;
  if (*(int64_t *)(param_1 + 0x3e0) != 0) {
    cVar4 = (**(code **)(param_1 + 1000))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x390) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x390);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      *(int32_t *)(param_1 + 900) = *(int32_t *)(param_1 + 0x3c8);
      goto LAB_1801080f5;
    }
    uVar7 = (int32_t)uStackX_8;
  }
  *(int32_t *)(param_1 + 900) = uVar7;
LAB_1801080f5:
  uStackX_8 = puVar2;
  SystemInitializer(param_1 + 0x28,&uStackX_8);
  lVar3 = param_1 + 0x460;
  (**(code **)(*(int64_t *)(param_1 + 0x4a0) + 0x10))((int64_t *)(param_1 + 0x4a0),&unknown_var_520_ptr)
  ;
  uVar5 = FUN_180628ca0();
  FUN_18005c8a0(lVar3,uVar5);
  uVar5 = FUN_180628ca0();
  FUN_1800b0680(lVar3,uVar5);
  uStackX_8 = (int32_t *)lVar3;
  SystemInitializer(param_1 + 0x48,&uStackX_8);
  *(int32_t *)(param_1 + 0x88) = 1;
  return;
}





