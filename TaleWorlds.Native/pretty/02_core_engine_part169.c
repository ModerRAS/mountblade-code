#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part169.c - 2 个函数

// 函数: void FUN_1801538d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801538d0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18005b960(param_1 + 0x1ea);
  SystemInputHandler(param_1 + 0x1dc);
  SystemInputHandler(param_1 + 0x1ce);
  SystemInputHandler(param_1 + 0x1c0);
  SystemInputHandler(param_1 + 0x1b2);
  SystemInputHandler(param_1 + 0x1a4);
  SystemInputHandler(param_1 + 0x196);
  SystemInputHandler(param_1 + 0x188);
  SystemInputHandler(param_1 + 0x17a);
  SystemInputHandler(param_1 + 0x16c);
  SystemInputHandler(param_1 + 0x15e);
  SystemInputHandler(param_1 + 0x150);
  SystemInputHandler(param_1 + 0x142);
  SystemInputHandler(param_1 + 0x134);
  SystemInputHandler(param_1 + 0x126);
  SystemInputHandler(param_1 + 0x118);
  SystemInputHandler(param_1 + 0x10a);
  SystemInputHandler(param_1 + 0xfc);
  SystemInputHandler(param_1 + 0xee);
  SystemInputHandler(param_1 + 0xe0);
  SystemInputHandler(param_1 + 0xd2);
  SystemInputHandler(param_1 + 0xc4);
  SystemInputHandler(param_1 + 0xb6);
  SystemInputHandler(param_1 + 0xa8);
  SystemInputHandler(param_1 + 0x9a);
  SystemInputHandler(param_1 + 0x8c);
  SystemInputHandler(param_1 + 0x7e);
  SystemInputHandler(param_1 + 0x70);
  SystemInputHandler(param_1 + 0x62);
  SystemInputHandler(param_1 + 0x54);
  SystemInputHandler(param_1 + 0x46);
  SystemInputHandler(param_1 + 0x38);
  SystemInputHandler(param_1 + 0x2a);
  SystemInputHandler(param_1 + 0x1c);
  *param_1 = &processed_var_7304_ptr;
  param_1[0x18] = &system_data_buffer_ptr;
  if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &system_state_ptr;
  FUN_18005d260(param_1 + 0x12,param_1[0x14],param_3,param_4,0xfffffffffffffffe);
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180153ab0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void *puVar4;
  uint auStackX_10 [2];
  
  if ((*(int *)(param_2 + 0x10) == 0x15) &&
     (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_752_ptr), iVar3 == 0)) {
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar4 = *(void **)(param_3 + 8);
    }
    auStackX_10[0] = atoi(puVar4);
    lVar1 = system_module_state;
    if ((*(int64_t *)(system_module_state + 0x530) != 0) &&
       (cVar2 = (**(code **)(system_module_state + 0x538))(auStackX_10), cVar2 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x4e0) != (void *)0x0) {
          puVar4 = *(void **)(lVar1 + 0x4e0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar4);
      }
      *(int32_t *)(lVar1 + 0x4d0) = *(int32_t *)(lVar1 + 0x518);
      return 1;
    }
    *(uint *)(lVar1 + 0x4d0) = auStackX_10[0];
    return 1;
  }
  if ((*(int *)(param_2 + 0x10) == 0x12) &&
     (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_6360_ptr), iVar3 == 0)) {
    puVar4 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar4 = *(void **)(param_3 + 8);
    }
    iVar3 = atoi(puVar4);
    auStackX_10[0] = (uint)(iVar3 != 0);
    if ((*(int64_t *)(param_1 + 0xa00) != 0) &&
       (cVar2 = (**(code **)(param_1 + 0xa08))(auStackX_10), cVar2 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x9b0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x9b0);
        }
        SystemDataInitializer(&processed_var_544_ptr,puVar4);
      }
      *(int32_t *)(param_1 + 0x9a0) = *(int32_t *)(param_1 + 0x9e8);
      return 0;
    }
    *(uint *)(param_1 + 0x9a0) = auStackX_10[0];
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180153c60(int64_t param_1)
void FUN_180153c60(int64_t param_1)

{
  int iVar1;
  char cVar2;
  int8_t auStack_78 [32];
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [32];
  uint64_t uStack_18;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  iVar1 = *(int *)(param_1 + 0xbd0);
  if (*(int *)(param_1 + 0xbd0) < 1) {
    iVar1 = 1;
  }
  FUN_18010d670(param_1,iVar1);
  puStack_50 = &processed_var_672_ptr;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0x1b;
  strcpy_s(auStack_38,0x20,&processed_var_6328_ptr);
  cVar2 = FUN_180051f00(system_main_module_state,&puStack_50);
  puStack_50 = &system_state_ptr;
  if (cVar2 != '\0') {
    FUN_18010d670(param_1,10);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_78);
}





