#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part170_sub002_sub002.c - 1 个函数

// 函数: void FUN_180153d40(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180153d40(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void **ppuVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char cVar4;
  int32_t uVar5;
  void *puVar6;
  uint64_t uStackX_8;
  void *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  uint64_t *puStack_48;
  code *pcStack_40;
  void *puStack_38;
  
  pcStack_40 = (code *)&unknown_var_2512_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x128) = 0;
  ppuVar1 = (void **)(param_1 + 0x130);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x140) != (code *)0x0) {
      (**(code **)(param_1 + 0x140))(ppuVar1,0,0,param_4,0xfffffffffffffffe);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x140) = pcStack_40;
    *(void **)(param_1 + 0x148) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0xe8) + 0x10))(param_1 + 0xe8,&unknown_var_6400_ptr);
  uStackX_8._0_4_ = 0;
  uVar5 = 0;
  if ((*(int64_t *)(param_1 + 0x140) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8), uVar5 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0xf0);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    uVar5 = *(int32_t *)(param_1 + 0x128);
  }
  *(int32_t *)(param_1 + 0xe0) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8._4_4_ << 0x20);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x140) != 0) {
    cVar4 = (**(code **)(param_1 + 0x148))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0xf0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x128);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0xe4) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0xe0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2480_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x198) = 0;
  ppuVar1 = (void **)(param_1 + 0x1a0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x1b0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1b0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x1b0) = pcStack_40;
    *(void **)(param_1 + 0x1b8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x158) + 0x10))(param_1 + 0x158,&unknown_var_6384_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x160) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x160);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x198);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x150) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x1b0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x1b8))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x160) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x160);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x198);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x154) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x150);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2448_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x208) = 1;
  ppuVar1 = (void **)(param_1 + 0x210);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x220) != (code *)0x0) {
      (**(code **)(param_1 + 0x220))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x220) = pcStack_40;
    *(void **)(param_1 + 0x228) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1c8) + 0x10))(param_1 + 0x1c8,&unknown_var_6456_ptr);
  uStackX_8._0_4_ = 1;
  uVar5 = 1;
  if ((*(int64_t *)(param_1 + 0x220) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8), uVar5 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1d0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x1d0);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    uVar5 = *(int32_t *)(param_1 + 0x208);
  }
  *(int32_t *)(param_1 + 0x1c0) = uVar5;
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,1);
  uVar5 = 1;
  if (*(int64_t *)(param_1 + 0x220) != 0) {
    cVar4 = (**(code **)(param_1 + 0x228))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1d0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x1d0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x208);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x1c4) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x1c0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x238) + 0x10))(param_1 + 0x238,&unknown_var_6432_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
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
      uVar5 = *(int32_t *)(param_1 + 0x278);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x230) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
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
      uVar5 = *(int32_t *)(param_1 + 0x278);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x234) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x230);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x2a8) + 0x10))(param_1 + 0x2a8,&unknown_var_6512_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
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
      uVar5 = *(int32_t *)(param_1 + 0x2e8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x2a0) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
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
      uVar5 = *(int32_t *)(param_1 + 0x2e8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x2a4) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x2a0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x858) + 0x10))(param_1 + 0x858,&unknown_var_6480_ptr);
  uStackX_8._0_4_ = 0x1e00;
  uVar5 = 0x1e00;
  if ((*(int64_t *)(param_1 + 0x8b0) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x8b8))(&uStackX_8), uVar5 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x860) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x860);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    uVar5 = *(int32_t *)(param_1 + 0x898);
  }
  *(int32_t *)(param_1 + 0x850) = uVar5;
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,0x1e00);
  uVar5 = 0x1e00;
  if (*(int64_t *)(param_1 + 0x8b0) == 0) {
LAB_180154406:
    *(int32_t *)(param_1 + 0x854) = uVar5;
  }
  else {
    cVar4 = (**(code **)(param_1 + 0x8b8))(&uStackX_8);
    if (cVar4 != '\0') {
      uVar5 = (int32_t)uStackX_8;
      goto LAB_180154406;
    }
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x860) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x860);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    *(int32_t *)(param_1 + 0x854) = *(int32_t *)(param_1 + 0x898);
  }
  uStackX_8 = (int32_t *)(param_1 + 0x850);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x8c8) + 0x10))(param_1 + 0x8c8,&unknown_var_6584_ptr);
  uStackX_8._0_4_ = 0x10e0;
  uVar5 = 0x10e0;
  if ((*(int64_t *)(param_1 + 0x920) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x928))(&uStackX_8), uVar5 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x8d0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x8d0);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    uVar5 = *(int32_t *)(param_1 + 0x908);
  }
  *(int32_t *)(param_1 + 0x8c0) = uVar5;
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,0x10e0);
  uVar5 = 0x10e0;
  if (*(int64_t *)(param_1 + 0x920) == 0) {
LAB_1801544e8:
    *(int32_t *)(param_1 + 0x8c4) = uVar5;
  }
  else {
    cVar4 = (**(code **)(param_1 + 0x928))(&uStackX_8);
    if (cVar4 != '\0') {
      uVar5 = (int32_t)uStackX_8;
      goto LAB_1801544e8;
    }
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x8d0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x8d0);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    *(int32_t *)(param_1 + 0x8c4) = *(int32_t *)(param_1 + 0x908);
  }
  uStackX_8 = (int32_t *)(param_1 + 0x8c0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  (**(code **)(*(int64_t *)(param_1 + 0x938) + 0x10))(param_1 + 0x938,&unknown_var_6544_ptr);
  uStackX_8._0_4_ = 10;
  uVar5 = 10;
  if ((*(int64_t *)(param_1 + 0x990) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x998))(&uStackX_8), uVar5 = (int32_t)uStackX_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x940) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x940);
      }
      SystemDataInitializer(&unknown_var_544_ptr,puVar6);
    }
    uVar5 = *(int32_t *)(param_1 + 0x978);
  }
  *(int32_t *)(param_1 + 0x930) = uVar5;
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,10);
  uVar5 = 10;
  if (*(int64_t *)(param_1 + 0x990) != 0) {
    cVar4 = (**(code **)(param_1 + 0x998))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x940) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x940);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      *(int32_t *)(param_1 + 0x934) = *(int32_t *)(param_1 + 0x978);
      goto LAB_1801545d1;
    }
    uVar5 = (int32_t)uStackX_8;
  }
  *(int32_t *)(param_1 + 0x934) = uVar5;
LAB_1801545d1:
  uStackX_8 = (int32_t *)(param_1 + 0x930);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2416_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x358) = 0;
  ppuVar1 = (void **)(param_1 + 0x360);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x370) != (code *)0x0) {
      (**(code **)(param_1 + 0x370))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x370) = pcStack_40;
    *(void **)(param_1 + 0x378) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x318) + 0x10))(param_1 + 0x318,&unknown_var_6648_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x370) != 0) {
    cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 800) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 800);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x358);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x310) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x370) != 0) {
    cVar4 = (**(code **)(param_1 + 0x378))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 800) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 800);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x358);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x314) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x310);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2384_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x3c8) = 0;
  ppuVar1 = (void **)(param_1 + 0x3d0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x3e0) != (code *)0x0) {
      (**(code **)(param_1 + 0x3e0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x3e0) = pcStack_40;
    *(void **)(param_1 + 1000) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x388) + 0x10))(param_1 + 0x388,&unknown_var_6616_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
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
      uVar5 = *(int32_t *)(param_1 + 0x3c8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x380) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x3e0) != 0) {
    cVar4 = (**(code **)(param_1 + 1000))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x390) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x390);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x3c8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 900) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x380);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2352_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x438) = 0;
  ppuVar1 = (void **)(param_1 + 0x440);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x450) != (code *)0x0) {
      (**(code **)(param_1 + 0x450))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x450) = pcStack_40;
    *(void **)(param_1 + 0x458) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x3f8) + 0x10))(param_1 + 0x3f8,&unknown_var_6704_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
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
      uVar5 = *(int32_t *)(param_1 + 0x438);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x3f0) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x400) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x400);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x438);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x3f4) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x3f0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2320_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xf28) = 0;
  ppuVar1 = (void **)(param_1 + 0xf30);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xf40) != (code *)0x0) {
      (**(code **)(param_1 + 0xf40))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xf40) = pcStack_40;
    *(void **)(param_1 + 0xf48) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0xee8) + 0x10))(param_1 + 0xee8,&unknown_var_6680_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0xf40) != 0) {
    cVar4 = (**(code **)(param_1 + 0xf48))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0xef0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0xef0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0xf28);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0xee0) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0xf40) != 0) {
    cVar4 = (**(code **)(param_1 + 0xf48))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0xef0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0xef0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0xf28);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0xee4) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0xee0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2288_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x4a8) = 0;
  ppuVar1 = (void **)(param_1 + 0x4b0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x4c0) != (code *)0x0) {
      (**(code **)(param_1 + 0x4c0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x4c0) = pcStack_40;
    *(void **)(param_1 + 0x4c8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x468) + 0x10))(param_1 + 0x468,&unknown_var_6760_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x4c0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x4c8))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x470) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x470);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x4a8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x460) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x4c0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x4c8))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x470) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x470);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x4a8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x464) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x460);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2256_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x518) = 0;
  ppuVar1 = (void **)(param_1 + 0x520);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x530) != (code *)0x0) {
      (**(code **)(param_1 + 0x530))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x530) = pcStack_40;
    *(void **)(param_1 + 0x538) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x4d8) + 0x10))(param_1 + 0x4d8,&unknown_var_6728_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x530) != 0) {
    cVar4 = (**(code **)(param_1 + 0x538))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x4e0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x4e0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x518);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x4d0) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x530) != 0) {
    cVar4 = (**(code **)(param_1 + 0x538))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x4e0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x4e0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x518);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x4d4) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x4d0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&system_callback2_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x588) = 0;
  ppuVar1 = (void **)(param_1 + 0x590);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x5a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x5a0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x5a0) = pcStack_40;
    *(void **)(param_1 + 0x5a8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x548) + 0x10))(param_1 + 0x548,&unknown_var_6816_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x5a0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x5a8))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x550) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x550);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x588);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x540) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x5a0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x5a8))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x550) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x550);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x588);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x544) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x540);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2192_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x5f8) = 0;
  ppuVar1 = (void **)(param_1 + 0x600);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x610) != (code *)0x0) {
      (**(code **)(param_1 + 0x610))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x610) = pcStack_40;
    *(void **)(param_1 + 0x618) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x5b8) + 0x10))(param_1 + 0x5b8,&unknown_var_6784_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x610) != 0) {
    cVar4 = (**(code **)(param_1 + 0x618))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x5c0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x5c0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x5f8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x5b0) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x610) != 0) {
    cVar4 = (**(code **)(param_1 + 0x618))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x5c0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x5c0);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x5f8);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x5b4) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x5b0);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2160_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x668) = 0;
  ppuVar1 = (void **)(param_1 + 0x670);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x680) != (code *)0x0) {
      (**(code **)(param_1 + 0x680))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x680) = pcStack_40;
    *(void **)(param_1 + 0x688) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x628) + 0x10))(param_1 + 0x628,&unknown_var_6864_ptr);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x680) != 0) {
    cVar4 = (**(code **)(param_1 + 0x688))(&uStackX_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x630) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x630);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x668);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x620) = uVar5;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  uVar5 = 0;
  if (*(int64_t *)(param_1 + 0x680) != 0) {
    cVar4 = (**(code **)(param_1 + 0x688))(&uStackX_8,ppuVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x630) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x630);
        }
        SystemDataInitializer(&unknown_var_544_ptr,puVar6);
      }
      uVar5 = *(int32_t *)(param_1 + 0x668);
    }
    else {
      uVar5 = (int32_t)uStackX_8;
    }
  }
  *(int32_t *)(param_1 + 0x624) = uVar5;
  uStackX_8 = (int32_t *)(param_1 + 0x620);
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2128_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x6d8) = 0;
  ppuVar1 = (void **)(param_1 + 0x6e0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x6f0) != (code *)0x0) {
      (**(code **)(param_1 + 0x6f0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x6f0) = pcStack_40;
    *(void **)(param_1 + 0x6f8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0x690;
  (**(code **)(*(int64_t *)(param_1 + 0x698) + 0x10))((int64_t *)(param_1 + 0x698),&unknown_var_6832_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2096_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x748) = 0;
  ppuVar1 = (void **)(param_1 + 0x750);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0x760) != (code *)0x0) {
      (**(code **)(param_1 + 0x760))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0x760) = pcStack_40;
    *(void **)(param_1 + 0x768) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0x700;
  (**(code **)(*(int64_t *)(param_1 + 0x708) + 0x10))((int64_t *)(param_1 + 0x708),&unknown_var_6928_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2064_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x7b8) = 0;
  ppuVar1 = (void **)(param_1 + 0x7c0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 2000) != (code *)0x0) {
      (**(code **)(param_1 + 2000))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 2000) = pcStack_40;
    *(void **)(param_1 + 0x7d8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0x770;
  (**(code **)(*(int64_t *)(param_1 + 0x778) + 0x10))((int64_t *)(param_1 + 0x778),&unknown_var_6896_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0x7e0;
  (**(code **)(*(int64_t *)(param_1 + 0x7e8) + 0x10))((int64_t *)(param_1 + 0x7e8),&unknown_var_6976_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2032_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0x9e8) = 0;
  ppuVar1 = (void **)(param_1 + 0x9f0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xa00) != (code *)0x0) {
      (**(code **)(param_1 + 0xa00))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xa00) = pcStack_40;
    *(void **)(param_1 + 0xa08) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0x9a0;
  (**(code **)(*(int64_t *)(param_1 + 0x9a8) + 0x10))((int64_t *)(param_1 + 0x9a8),&unknown_var_6360_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_2000_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xa58) = 0;
  ppuVar1 = (void **)(param_1 + 0xa60);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xa70) != (code *)0x0) {
      (**(code **)(param_1 + 0xa70))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xa70) = pcStack_40;
    *(void **)(param_1 + 0xa78) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0xa10;
  (**(code **)(*(int64_t *)(param_1 + 0xa18) + 0x10))((int64_t *)(param_1 + 0xa18),&unknown_var_6952_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_1968_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xac8) = 0;
  ppuVar1 = (void **)(param_1 + 0xad0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xae0) != (code *)0x0) {
      (**(code **)(param_1 + 0xae0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xae0) = pcStack_40;
    *(void **)(param_1 + 0xae8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  lVar3 = param_1 + 0xa80;
  (**(code **)(*(int64_t *)(param_1 + 0xa88) + 0x10))((int64_t *)(param_1 + 0xa88),&unknown_var_7016_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(lVar3,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(lVar3,&uStackX_8);
  uStackX_8 = (int32_t *)lVar3;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_1936_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xb38) = 1;
  ppuVar1 = (void **)(param_1 + 0xb40);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xb50) != (code *)0x0) {
      (**(code **)(param_1 + 0xb50))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xb50) = pcStack_40;
    *(void **)(param_1 + 0xb58) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  lVar3 = param_1 + 0xaf0;
  (**(code **)(*(int64_t *)(param_1 + 0xaf8) + 0x10))((int64_t *)(param_1 + 0xaf8),&unknown_var_6992_ptr)
  ;
  uStackX_8._0_4_ = 1;
  FUN_180046240(lVar3,&uStackX_8);
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,1);
  FUN_1800b0710(lVar3,&uStackX_8);
  uStackX_8 = (int32_t *)lVar3;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_1904_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xba8) = 1;
  ppuVar1 = (void **)(param_1 + 0xbb0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xbc0) != (code *)0x0) {
      (**(code **)(param_1 + 0xbc0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xbc0) = pcStack_40;
    *(void **)(param_1 + 0xbc8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  lVar3 = param_1 + 0xb60;
  (**(code **)(*(int64_t *)(param_1 + 0xb68) + 0x10))((int64_t *)(param_1 + 0xb68),&unknown_var_7072_ptr)
  ;
  uStackX_8._0_4_ = 1;
  FUN_180046240(lVar3,&uStackX_8);
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,1);
  FUN_1800b0710(lVar3,&uStackX_8);
  uStackX_8 = (int32_t *)lVar3;
  SystemInitializer(param_1 + 8,&uStackX_8);
  uVar2 = param_1 + 0xbd0;
  (**(code **)(*(int64_t *)(param_1 + 0xbd8) + 0x10))((int64_t *)(param_1 + 0xbd8),&unknown_var_7048_ptr)
  ;
  uStackX_8._0_4_ = 0xf;
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)CONCAT44(uStackX_8._4_4_,0xf);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_1872_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xc88) = 0;
  ppuVar1 = (void **)(param_1 + 0xc90);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xca0) != (code *)0x0) {
      (**(code **)(param_1 + 0xca0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xca0) = pcStack_40;
    *(void **)(param_1 + 0xca8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0xc40;
  (**(code **)(*(int64_t *)(param_1 + 0xc48) + 0x10))((int64_t *)(param_1 + 0xc48),&unknown_var_1744_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_1840_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xcf8) = 0;
  ppuVar1 = (void **)(param_1 + 0xd00);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xd10) != (code *)0x0) {
      (**(code **)(param_1 + 0xd10))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xd10) = pcStack_40;
    *(void **)(param_1 + 0xd18) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0xcb0;
  (**(code **)(*(int64_t *)(param_1 + 0xcb8) + 0x10))((int64_t *)(param_1 + 0xcb8),&unknown_var_7128_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_1808_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xd68) = 0;
  ppuVar1 = (void **)(param_1 + 0xd70);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xd80) != (code *)0x0) {
      (**(code **)(param_1 + 0xd80))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xd80) = pcStack_40;
    *(void **)(param_1 + 0xd88) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0xd20;
  (**(code **)(*(int64_t *)(param_1 + 0xd28) + 0x10))((int64_t *)(param_1 + 0xd28),&unknown_var_7104_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_1776_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xdd8) = 0;
  ppuVar1 = (void **)(param_1 + 0xde0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xdf0) != (code *)0x0) {
      (**(code **)(param_1 + 0xdf0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xdf0) = pcStack_40;
    *(void **)(param_1 + 0xdf8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0xd90;
  (**(code **)(*(int64_t *)(param_1 + 0xd98) + 0x10))((int64_t *)(param_1 + 0xd98),&unknown_var_7200_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_1744_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xe48) = 0;
  ppuVar1 = (void **)(param_1 + 0xe50);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xe60) != (code *)0x0) {
      (**(code **)(param_1 + 0xe60))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xe60) = pcStack_40;
    *(void **)(param_1 + 0xe68) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  uVar2 = param_1 + 0xe00;
  (**(code **)(*(int64_t *)(param_1 + 0xe08) + 0x10))((int64_t *)(param_1 + 0xe08),&unknown_var_7160_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(uVar2,&uStackX_8);
  uStackX_8 = (int32_t *)uVar2;
  SystemInitializer(param_1 + 8,&uStackX_8);
  pcStack_40 = (code *)&unknown_var_1712_ptr;
  puStack_38 = &unknown_var_9440_ptr;
  *(int32_t *)(param_1 + 0xeb8) = 0;
  ppuVar1 = (void **)(param_1 + 0xec0);
  if (ppuVar1 != &puStack_50) {
    if (*(code **)(param_1 + 0xed0) != (code *)0x0) {
      (**(code **)(param_1 + 0xed0))(ppuVar1,0,0);
    }
    if (pcStack_40 != (code *)0x0) {
      (*pcStack_40)(ppuVar1,&puStack_50,1);
    }
    *(code **)(param_1 + 0xed0) = pcStack_40;
    *(void **)(param_1 + 0xed8) = puStack_38;
  }
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&puStack_50,0,0);
  }
  lVar3 = param_1 + 0xe70;
  (**(code **)(*(int64_t *)(param_1 + 0xe78) + 0x10))((int64_t *)(param_1 + 0xe78),&unknown_var_7264_ptr)
  ;
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_180046240(lVar3,&uStackX_8);
  uStackX_8 = (int32_t *)((uint64_t)uStackX_8 & 0xffffffff00000000);
  FUN_1800b0710(lVar3,&uStackX_8);
  uStackX_8 = (int32_t *)lVar3;
  SystemInitializer(param_1 + 8,&uStackX_8);
  lVar3 = param_1 + 0xf50;
  (**(code **)(*(int64_t *)(param_1 + 0xf90) + 0x10))((int64_t *)(param_1 + 0xf90),&unknown_var_7240_ptr)
  ;
  puStack_70 = &system_data_buffer_ptr;
  uStack_58 = 0;
  puStack_68 = (uint64_t *)0x0;
  uStack_60 = 0;
  CoreEngineDataBufferProcessor(&puStack_70,0x2b);
  *puStack_68 = 0x6c69666c67725c5c;
  puStack_68[1] = 0x2e72657672657365;
  *(int32_t *)(puStack_68 + 2) = 0x656c6174;
  *(int32_t *)((int64_t)puStack_68 + 0x14) = 0x6c726f77;
  *(int32_t *)(puStack_68 + 3) = 0x632e7364;
  *(int32_t *)((int64_t)puStack_68 + 0x1c) = 0x505c6d6f;
  puStack_68[4] = 0x6144746964455452;
  *(int32_t *)(puStack_68 + 5) = 0x5c6174;
  uStack_60 = 0x2b;
  FUN_18005c8a0(lVar3,&puStack_70);
  puStack_70 = &system_data_buffer_ptr;
  if (puStack_68 == (uint64_t *)0x0) {
    puStack_68 = (uint64_t *)0x0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &system_state_ptr;
    puStack_50 = &system_data_buffer_ptr;
    puStack_38 = (void *)0x0;
    puStack_48 = (uint64_t *)0x0;
    pcStack_40 = (code *)((uint64_t)pcStack_40 & 0xffffffff00000000);
    CoreEngineDataBufferProcessor(&puStack_50,0x2b);
    *puStack_48 = 0x6c69666c67725c5c;
    puStack_48[1] = 0x2e72657672657365;
    *(int32_t *)(puStack_48 + 2) = 0x656c6174;
    *(int32_t *)((int64_t)puStack_48 + 0x14) = 0x6c726f77;
    *(int32_t *)(puStack_48 + 3) = 0x632e7364;
    *(int32_t *)((int64_t)puStack_48 + 0x1c) = 0x505c6d6f;
    puStack_48[4] = 0x6144746964455452;
    *(int32_t *)(puStack_48 + 5) = 0x5c6174;
    pcStack_40 = (code *)CONCAT44(pcStack_40._4_4_,0x2b);
    FUN_1800b0680(lVar3,&puStack_50);
    puStack_50 = &system_data_buffer_ptr;
    if (puStack_48 == (uint64_t *)0x0) {
      puStack_48 = (uint64_t *)0x0;
      puStack_38 = (void *)((uint64_t)puStack_38 & 0xffffffff00000000);
      puStack_50 = &system_state_ptr;
      uStackX_8 = (int32_t *)lVar3;
      SystemInitializer(param_1 + 0x48,&uStackX_8);
      *(int32_t *)(param_1 + 0x88) = 1;
      return;
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





