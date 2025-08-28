#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part076.c - 1 个函数

// 函数: void FUN_180109920(int64_t param_1)
void FUN_180109920(int64_t param_1)

{
  char cVar1;
  int32_t uVar2;
  void *puVar3;
  uint uVar4;
  int8_t auStack_118 [32];
  int32_t auStack_f8 [2];
  int32_t auStack_f0 [2];
  uint uStack_e8;
  uint64_t uStack_e0;
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [32];
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [32];
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  uStack_e8 = 0;
  auStack_f0[0] = 0;
  uVar2 = 0;
  if ((*(int64_t *)(param_1 + 0x370) != 0) &&
     (cVar1 = (**(code **)(param_1 + 0x378))(auStack_f0), uVar2 = auStack_f0[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(param_1 + 800) != (void *)0x0) {
        puVar3 = *(void **)(param_1 + 800);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar3);
    }
    uVar2 = *(int32_t *)(param_1 + 0x358);
  }
  *(int32_t *)(param_1 + 0x310) = uVar2;
  puStack_d8 = &processed_var_672_ptr;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0xb;
  strcpy_s(auStack_c0,0x20,&processed_var_8504_ptr);
  cVar1 = FUN_180051f00(system_main_module_state,&puStack_d8);
  puStack_d8 = &system_state_ptr;
  if (cVar1 != '\0') {
    auStack_f0[0] = 1;
    uVar2 = 1;
    if ((*(int64_t *)(param_1 + 0x680) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x688))(auStack_f0), uVar2 = auStack_f0[0], cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x630) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 0x630);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      uVar2 = *(int32_t *)(param_1 + 0x668);
    }
    *(int32_t *)(param_1 + 0x620) = uVar2;
    auStack_f8[0] = 1;
    uVar2 = 1;
    if ((*(int64_t *)(param_1 + 0x450) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x458))(auStack_f8), uVar2 = auStack_f8[0], cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x400) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 0x400);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      uVar2 = *(int32_t *)(param_1 + 0x438);
    }
    *(int32_t *)(param_1 + 0x3f0) = uVar2;
  }
  puStack_68 = &processed_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 8;
  strcpy_s(auStack_50,0x20,&processed_var_4752_ptr);
  uVar4 = 1;
  uStack_e8 = 1;
  cVar1 = FUN_180051f00(system_main_module_state,&puStack_68);
  if (cVar1 == '\0') {
    puStack_a0 = &processed_var_672_ptr;
    puStack_98 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0x14;
    strcpy_s(auStack_88,0x20,&processed_var_4960_ptr);
    uVar4 = 3;
    uStack_e8 = 3;
    cVar1 = FUN_180051f00(system_main_module_state,&puStack_a0);
    if (cVar1 == '\0') goto LAB_180109ba3;
  }
  cVar1 = '\x01';
LAB_180109ba3:
  if ((uVar4 & 2) != 0) {
    uStack_e8 = uVar4 & 0xfffffffd;
    puStack_a0 = &system_state_ptr;
    uVar4 = uStack_e8;
  }
  if ((uVar4 & 1) != 0) {
    uStack_e8 = uVar4 & 0xfffffffe;
    puStack_68 = &system_state_ptr;
  }
  if (cVar1 != '\0') {
    auStack_f8[0] = 0;
    uVar2 = 0;
    if ((*(int64_t *)(param_1 + 0x680) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x688))(auStack_f8), uVar2 = auStack_f8[0], cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x630) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 0x630);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      uVar2 = *(int32_t *)(param_1 + 0x668);
    }
    *(int32_t *)(param_1 + 0x620) = uVar2;
    auStack_f8[0] = 1;
    uVar2 = 1;
    if ((*(int64_t *)(param_1 + 0x450) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0x458))(auStack_f8), uVar2 = auStack_f8[0], cVar1 != '\0')) {
      *(int32_t *)(param_1 + 0x3f0) = uVar2;
    }
    else {
      if (system_debug_flag == '\0') {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x400) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 0x400);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar3);
      }
      *(int32_t *)(param_1 + 0x3f0) = *(int32_t *)(param_1 + 0x438);
    }
  }
  auStack_f8[0] = 0;
  if ((*(int64_t *)(param_1 + 0x680) == 0) ||
     (cVar1 = (**(code **)(param_1 + 0x688))(auStack_f8), cVar1 != '\0')) {
    *(int32_t *)(param_1 + 0x620) = auStack_f8[0];
  }
  else {
    if (system_debug_flag == '\0') {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x630) != (void *)0x0) {
        puVar3 = *(void **)(param_1 + 0x630);
      }
      SystemDataInitializer(&processed_var_544_ptr,puVar3);
    }
    *(int32_t *)(param_1 + 0x620) = *(int32_t *)(param_1 + 0x668);
  }
  FUN_1800b0380(param_1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_118);
}





