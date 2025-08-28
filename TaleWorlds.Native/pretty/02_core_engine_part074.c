/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "TaleWorlds.Native.Split.h"
// 02_core_engine_part074.c - 1 个函数
// 函数: void function_107770(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_107770(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t uVar5;
  void *puVar6;
  int32_t uVar7;
  uint64_t stack_special_x_8;
  int8_t stack_array_60 [16];
  code *pcStack_50;
  void *plocal_var_48;
  pcStack_50 = (code *)&rendering_buffer_224_ptr;
  plocal_var_48 = &processed_var_9440_ptr;
  *(int32_t *)(param_1 + 0x128) = 0;
  puVar1 = (int8_t *)(param_1 + 0x130);
  if (puVar1 != stack_array_60) {
    if (*(code **)(param_1 + 0x140) != (code *)0x0) {
      (**(code **)(param_1 + 0x140))(puVar1,0,0,param_4,0xfffffffffffffffe);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(puVar1,stack_array_60,1);
    }
    *(code **)(param_1 + 0x140) = pcStack_50;
    *(void **)(param_1 + 0x148) = plocal_var_48;
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(stack_array_60,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0xe8) + 0x10))(param_1 + 0xe8,&rendering_buffer_288_ptr);
  stack_special_x_8._0_4_ = 0;
  uVar7 = 0;
  if ((*(int64_t *)(param_1 + 0x140) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x148))(&stack_special_x_8), uVar7 = (int32_t)stack_special_x_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0xf0);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar6);
    }
    uVar7 = *(int32_t *)(param_1 + 0x128);
  }
  *(int32_t *)(param_1 + 0xe0) = uVar7;
  stack_special_x_8 = (int32_t *)((uint64_t)stack_special_x_8._4_4_ << 0x20);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x140) != 0) {
    cVar4 = (**(code **)(param_1 + 0x148))(&stack_special_x_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0xf0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x128);
    }
    else {
      uVar7 = (int32_t)stack_special_x_8;
    }
  }
  *(int32_t *)(param_1 + 0xe4) = uVar7;
  stack_special_x_8 = (int32_t *)(param_1 + 0xe0);
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  pcStack_50 = (code *)&ui_system_data_192_ptr;
  plocal_var_48 = &processed_var_9440_ptr;
  *(int32_t *)(param_1 + 0x198) = 1;
  puVar1 = (int8_t *)(param_1 + 0x1a0);
  if (puVar1 != stack_array_60) {
    if (*(code **)(param_1 + 0x1b0) != (code *)0x0) {
      (**(code **)(param_1 + 0x1b0))(puVar1,0,0);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(puVar1,stack_array_60,1);
    }
    *(code **)(param_1 + 0x1b0) = pcStack_50;
    *(void **)(param_1 + 0x1b8) = plocal_var_48;
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(stack_array_60,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x158) + 0x10))(param_1 + 0x158,&rendering_buffer_256_ptr);
  stack_special_x_8._0_4_ = 1;
  uVar7 = 1;
  if ((*(int64_t *)(param_1 + 0x1b0) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x1b8))(&stack_special_x_8), uVar7 = (int32_t)stack_special_x_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x160) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x160);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar6);
    }
    uVar7 = *(int32_t *)(param_1 + 0x198);
  }
  *(int32_t *)(param_1 + 0x150) = uVar7;
  stack_special_x_8 = (int32_t *)CONCAT44(stack_special_x_8._4_4_,1);
  uVar7 = 1;
  if (*(int64_t *)(param_1 + 0x1b0) != 0) {
    cVar4 = (**(code **)(param_1 + 0x1b8))(&stack_special_x_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x160) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x160);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x198);
    }
    else {
      uVar7 = (int32_t)stack_special_x_8;
    }
  }
  *(int32_t *)(param_1 + 0x154) = uVar7;
  stack_special_x_8 = (int32_t *)(param_1 + 0x150);
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  (**(code **)(*(int64_t *)(param_1 + 0x3f8) + 0x10))(param_1 + 0x3f8,&memory_allocator_352_ptr);
  stack_special_x_8 = (int32_t *)((uint64_t)stack_special_x_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&stack_special_x_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x400) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x400);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x438);
    }
    else {
      uVar7 = (int32_t)stack_special_x_8;
    }
  }
  *(int32_t *)(param_1 + 0x3f0) = uVar7;
  stack_special_x_8 = (int32_t *)((uint64_t)stack_special_x_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x450) != 0) {
    cVar4 = (**(code **)(param_1 + 0x458))(&stack_special_x_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x400) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x400);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x438);
    }
    else {
      uVar7 = (int32_t)stack_special_x_8;
    }
  }
  *(int32_t *)(param_1 + 0x3f4) = uVar7;
  stack_special_x_8 = (int32_t *)(param_1 + 0x3f0);
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  pcStack_50 = (code *)&ui_system_data_160_ptr;
  plocal_var_48 = &processed_var_9440_ptr;
  *(int32_t *)(param_1 + 0x208) = 1;
  puVar1 = (int8_t *)(param_1 + 0x210);
  if (puVar1 != stack_array_60) {
    if (*(code **)(param_1 + 0x220) != (code *)0x0) {
      (**(code **)(param_1 + 0x220))(puVar1,0,0);
    }
    if (pcStack_50 != (code *)0x0) {
      (*pcStack_50)(puVar1,stack_array_60,1);
    }
    *(code **)(param_1 + 0x220) = pcStack_50;
    *(void **)(param_1 + 0x228) = plocal_var_48;
  }
  if (pcStack_50 != (code *)0x0) {
    (*pcStack_50)(stack_array_60,0,0);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1c8) + 0x10))(param_1 + 0x1c8,&memory_allocator_320_ptr);
  stack_special_x_8._0_4_ = 1;
  uVar7 = 1;
  if ((*(int64_t *)(param_1 + 0x220) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x228))(&stack_special_x_8), uVar7 = (int32_t)stack_special_x_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1d0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x1d0);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar6);
    }
    uVar7 = *(int32_t *)(param_1 + 0x208);
  }
  *(int32_t *)(param_1 + 0x1c0) = uVar7;
  stack_special_x_8 = (int32_t *)CONCAT44(stack_special_x_8._4_4_,1);
  uVar7 = 1;
  if (*(int64_t *)(param_1 + 0x220) != 0) {
    cVar4 = (**(code **)(param_1 + 0x228))(&stack_special_x_8,puVar1);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1d0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x1d0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x208);
    }
    else {
      uVar7 = (int32_t)stack_special_x_8;
    }
  }
  *(int32_t *)(param_1 + 0x1c4) = uVar7;
  stack_special_x_8 = (int32_t *)(param_1 + 0x1c0);
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  (**(code **)(*(int64_t *)(param_1 + 0x318) + 0x10))(param_1 + 0x318,&processed_var_424_ptr);
  puVar2 = (int32_t *)(param_1 + 0x310);
  stack_special_x_8._0_4_ = 0x3f800000;
  uVar7 = 0x3f800000;
  if ((*(int64_t *)(param_1 + 0x370) == 0) ||
     (cVar4 = (**(code **)(param_1 + 0x378))(&stack_special_x_8), uVar7 = (int32_t)stack_special_x_8,
     cVar4 != '\0')) {
    *puVar2 = uVar7;
  }
  else {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 800) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 800);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar6);
    }
    *puVar2 = *(int32_t *)(param_1 + 0x358);
  }
  stack_special_x_8 = (int32_t *)CONCAT44(stack_special_x_8._4_4_,0x3f800000);
  uVar7 = 0x3f800000;
  if (*(int64_t *)(param_1 + 0x370) == 0) {
LAB_180107d75:
    *(int32_t *)(param_1 + 0x314) = uVar7;
  }
  else {
    cVar4 = (**(code **)(param_1 + 0x378))(&stack_special_x_8);
    if (cVar4 != '\0') {
      uVar7 = (int32_t)stack_special_x_8;
      goto LAB_180107d75;
    }
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 800) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 800);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar6);
    }
    *(int32_t *)(param_1 + 0x314) = *(int32_t *)(param_1 + 0x358);
  }
  stack_special_x_8 = puVar2;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  (**(code **)(*(int64_t *)(param_1 + 0x238) + 0x10))(param_1 + 0x238,&memory_allocator_392_ptr);
  stack_special_x_8 = (int32_t *)((uint64_t)stack_special_x_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&stack_special_x_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x240) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x240);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x278);
    }
    else {
      uVar7 = (int32_t)stack_special_x_8;
    }
  }
  *(int32_t *)(param_1 + 0x230) = uVar7;
  stack_special_x_8 = (int32_t *)((uint64_t)stack_special_x_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x290) != 0) {
    cVar4 = (**(code **)(param_1 + 0x298))(&stack_special_x_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x240) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x240);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x278);
    }
    else {
      uVar7 = (int32_t)stack_special_x_8;
    }
  }
  *(int32_t *)(param_1 + 0x234) = uVar7;
  stack_special_x_8 = (int32_t *)(param_1 + 0x230);
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  (**(code **)(*(int64_t *)(param_1 + 0x2a8) + 0x10))(param_1 + 0x2a8,&processed_var_480_ptr);
  stack_special_x_8._0_4_ = 1;
  uVar7 = 1;
  if ((*(int64_t *)(param_1 + 0x300) != 0) &&
     (cVar4 = (**(code **)(param_1 + 0x308))(&stack_special_x_8), uVar7 = (int32_t)stack_special_x_8,
     cVar4 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x2b0) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x2b0);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar6);
    }
    uVar7 = *(int32_t *)(param_1 + 0x2e8);
  }
  *(int32_t *)(param_1 + 0x2a0) = uVar7;
  stack_special_x_8 = (int32_t *)CONCAT44(stack_special_x_8._4_4_,1);
  uVar7 = 1;
  if (*(int64_t *)(param_1 + 0x300) != 0) {
    cVar4 = (**(code **)(param_1 + 0x308))(&stack_special_x_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x2b0) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x2b0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x2e8);
    }
    else {
      uVar7 = (int32_t)stack_special_x_8;
    }
  }
  *(int32_t *)(param_1 + 0x2a4) = uVar7;
  stack_special_x_8 = (int32_t *)(param_1 + 0x2a0);
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  (**(code **)(*(int64_t *)(param_1 + 0x528) + 0x10))(param_1 + 0x528,&processed_var_448_ptr);
  stack_special_x_8 = (int32_t *)((uint64_t)stack_special_x_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x580) != 0) {
    cVar4 = (**(code **)(param_1 + 0x588))(&stack_special_x_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x530) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x530);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      uVar7 = *(int32_t *)(param_1 + 0x568);
    }
    else {
      uVar7 = (int32_t)stack_special_x_8;
    }
  }
  *(int32_t *)(param_1 + 0x520) = uVar7;
  stack_special_x_8 = (int32_t *)((uint64_t)stack_special_x_8 & 0xffffffff00000000);
  uVar7 = 0;
  if (*(int64_t *)(param_1 + 0x580) == 0) {
LAB_180107fff:
    *(int32_t *)(param_1 + 0x524) = uVar7;
  }
  else {
    cVar4 = (**(code **)(param_1 + 0x588))(&stack_special_x_8);
    if (cVar4 != '\0') {
      uVar7 = (int32_t)stack_special_x_8;
      goto LAB_180107fff;
    }
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x530) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x530);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar6);
    }
    *(int32_t *)(param_1 + 0x524) = *(int32_t *)(param_1 + 0x568);
  }
  stack_special_x_8 = (int32_t *)(param_1 + 0x520);
  SystemInitializer(param_1 + 8,&stack_special_x_8);
  (**(code **)(*(int64_t *)(param_1 + 0x388) + 0x10))(param_1 + 0x388,&processed_var_536_ptr);
  puVar2 = (int32_t *)(param_1 + 0x380);
  stack_special_x_8._0_4_ = 0x40000000;
  uVar7 = 0x40000000;
  if ((*(int64_t *)(param_1 + 0x3e0) == 0) ||
     (cVar4 = (**(code **)(param_1 + 1000))(&stack_special_x_8), uVar7 = (int32_t)stack_special_x_8,
     cVar4 != '\0')) {
    *puVar2 = uVar7;
  }
  else {
    if (system_debug_flag == '\0') {
      puVar6 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x390) != (void *)0x0) {
        puVar6 = *(void **)(param_1 + 0x390);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar6);
    }
    *puVar2 = *(int32_t *)(param_1 + 0x3c8);
  }
  stack_special_x_8 = (int32_t *)CONCAT44(stack_special_x_8._4_4_,0x40000000);
  uVar7 = 0x40000000;
  if (*(int64_t *)(param_1 + 0x3e0) != 0) {
    cVar4 = (**(code **)(param_1 + 1000))(&stack_special_x_8);
    if (cVar4 == '\0') {
      if (system_debug_flag == '\0') {
        puVar6 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x390) != (void *)0x0) {
          puVar6 = *(void **)(param_1 + 0x390);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar6);
      }
      *(int32_t *)(param_1 + 900) = *(int32_t *)(param_1 + 0x3c8);
      goto LAB_1801080f5;
    }
    uVar7 = (int32_t)stack_special_x_8;
  }
  *(int32_t *)(param_1 + 900) = uVar7;
LAB_1801080f5:
  stack_special_x_8 = puVar2;
  SystemInitializer(param_1 + 0x28,&stack_special_x_8);
  lVar3 = param_1 + 0x460;
  (**(code **)(*(int64_t *)(param_1 + 0x4a0) + 0x10))((int64_t *)(param_1 + 0x4a0),&processed_var_520_ptr)
  ;
  uVar5 = MemoryDebugger0();
  SystemCore_MemoryManager(lVar3,uVar5);
  uVar5 = MemoryDebugger0();
  SystemCore_DataHandler(lVar3,uVar5);
  stack_special_x_8 = (int32_t *)lVar3;
  SystemInitializer(param_1 + 0x48,&stack_special_x_8);
  *(int32_t *)(param_1 + 0x88) = 1;
  return;
}