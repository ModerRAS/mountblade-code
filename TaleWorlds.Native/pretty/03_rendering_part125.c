#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part125.c - 4 个函数
// 函数: void function_340b00(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void function_340b00(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  int16_t *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint64_t uVar12;
  uint uVar13;
  uint64_t uVar14;
  uVar12 = 0;
  puVar5 = (int32_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13,param_4,0,0xfffffffffffffffe,&system_data_buffer_ptr,0,0,0)
  ;
  *(int8_t *)puVar5 = 0;
  CoreMemoryPoolCleaner(puVar5);
  *puVar5 = 0x65786950;
  puVar5[1] = 0x68735f6c;
  puVar5[2] = 0x72656461;
  puVar5[3] = 0x706e695f;
  *(uint64_t *)(puVar5 + 4) = 0x657079745f7475;
  iVar9 = *(int *)(param_2 + 0x10);
  CoreMemoryPoolProcessor(param_2,iVar9 + 0x11);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x20666923;
  puVar6[1] = 0x45584950;
  puVar6[2] = 0x48535f4c;
  puVar6[3] = 0x52454441;
  *(int16_t *)(puVar6 + 4) = 10;
  *(int *)(param_2 + 0x10) = iVar9 + 0x11;
  CoreMemoryPoolProcessor(param_2,iVar9 + 0x1e);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x69616d2064696f76;
  *(int32_t *)(puVar7 + 1) = 0x73705f6e;
  *(int16_t *)((int64_t)puVar7 + 0xc) = 0x28;
  *(int *)(param_2 + 0x10) = iVar9 + 0x1e;
  CoreMemoryPoolProcessor(param_2,iVar9 + 0x35);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(uint64_t *)(puVar6 + 4) = *(uint64_t *)(puVar5 + 4);
  *(int *)(param_2 + 0x10) = iVar9 + 0x35;
  CoreMemoryPoolProcessor(param_2,iVar9 + 0x3a);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x296e4920;
  *(int16_t *)(puVar6 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar9 + 0x3a;
  CoreMemoryPoolProcessor(param_2,iVar9 + 0x3c);
  puVar8 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0xa7b;
  *(int8_t *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0x3c;
  CoreMemoryPoolProcessor(param_2,iVar9 + 0x83);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x69746174735f6c65;
  puVar7[2] = 0x6261697261765f63;
  puVar7[3] = 0x735f70702073656c;
  puVar7[4] = 0x203d206369746174;
  puVar7[5] = 0x7869705f72655028;
  *(int32_t *)(puVar7 + 6) = 0x735f6c65;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x69746174;
  *(int32_t *)(puVar7 + 7) = 0x61765f63;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x62616972;
  puVar7[8] = 0xa3b302973656c;
  *(int *)(param_2 + 0x10) = iVar9 + 0x83;
  CoreMemoryPoolProcessor(param_2,iVar9 + 0xd7);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x6669646f6d5f6c65;
  puVar7[2] = 0x61765f656c626169;
  puVar7[3] = 0x2073656c62616972;
  puVar7[4] = 0x6669646f6d5f7070;
  puVar7[5] = 0x203d20656c626169;
  *(int32_t *)(puVar7 + 6) = 0x72655028;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x7869705f;
  *(int32_t *)(puVar7 + 7) = 0x6d5f6c65;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x6669646f;
  *(int32_t *)(puVar7 + 8) = 0x6c626169;
  *(int32_t *)((int64_t)puVar7 + 0x44) = 0x61765f65;
  *(int32_t *)(puVar7 + 9) = 0x62616972;
  *(int32_t *)((int64_t)puVar7 + 0x4c) = 0x2973656c;
  *(int32_t *)(puVar7 + 10) = 0xa0a3b30;
  *(int8_t *)((int64_t)puVar7 + 0x54) = 0;
  *(int *)(param_2 + 0x10) = iVar9 + 0xd7;
  CoreMemoryPoolProcessor(param_2,iVar9 + 0x122);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x6c697875615f6c65;
  puVar7[2] = 0x7261765f79726169;
  puVar7[3] = 0x702073656c626169;
  puVar7[4] = 0x203d207875615f70;
  puVar7[5] = 0x7869705f72655028;
  *(int32_t *)(puVar7 + 6) = 0x615f6c65;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x6c697875;
  *(int32_t *)(puVar7 + 7) = 0x79726169;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x7261765f;
  puVar7[8] = 0x302973656c626169;
  *(int32_t *)(puVar7 + 9) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = iVar9 + 0x122;
  iVar9 = iVar9 + 0x159;
  CoreMemoryPoolProcessor(param_2,iVar9);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x616c75636c616309;
  puVar7[1] = 0x705f7265705f6574;
  puVar7[2] = 0x6174735f6c657869;
  puVar7[3] = 0x697261765f636974;
  *(int32_t *)(puVar7 + 4) = 0x656c6261;
  *(int32_t *)((int64_t)puVar7 + 0x24) = 0x6e492873;
  *(int32_t *)(puVar7 + 5) = 0x7070202c;
  *(int32_t *)((int64_t)puVar7 + 0x2c) = 0x6174735f;
  puVar7[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = iVar9;
  puVar7 = (uint64_t *)(*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490));
  uVar14 = uVar12;
  if ((int64_t)puVar7 / 0x98 + ((int64_t)puVar7 >> 0x3f) != (int64_t)puVar7 >> 0x3f) {
    do {
      iVar10 = iVar9 + 1;
      CoreMemoryPoolProcessor(param_2,iVar10);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar10;
      lVar1 = *(int64_t *)(param_3 + 0x490);
      iVar11 = *(int *)(lVar1 + 0x10 + uVar12);
      if (0 < iVar11) {
        CoreMemoryPoolProcessor(param_2,iVar10 + iVar11);
// WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(lVar1 + 8 + uVar12),(int64_t)(*(int *)(lVar1 + 0x10 + uVar12) + 1));
      }
      iVar9 = iVar9 + 7;
      CoreMemoryPoolProcessor(param_2,iVar9);
      puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *puVar6 = 0x296e4928;
      *(int16_t *)(puVar6 + 1) = 0xa3b;
      *(int8_t *)((int64_t)puVar6 + 6) = 0;
      *(int *)(param_2 + 0x10) = iVar9;
      uVar13 = (int)uVar14 + 1;
      uVar12 = uVar12 + 0x98;
      puVar7 = (uint64_t *)(*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490));
      uVar14 = (uint64_t)uVar13;
    } while ((uint64_t)(int64_t)(int)uVar13 < (uint64_t)((int64_t)puVar7 / 0x98));
  }
  if (*(int *)(param_3 + 0xa40) != 0) {
    iVar11 = iVar9 + 1;
    CoreMemoryPoolProcessor(param_2,iVar11);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar11;
    if (0 < *(int *)(param_3 + 0xa40)) {
      CoreMemoryPoolProcessor(param_2,iVar11 + *(int *)(param_3 + 0xa40));
// WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0xa38),(int64_t)(*(int *)(param_3 + 0xa40) + 1));
    }
    iVar9 = iVar9 + 0x2b;
    CoreMemoryPoolProcessor(param_2,iVar9);
    puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar7 = 0x7070202c206e4928;
    puVar7[1] = 0x206369746174735f;
    puVar7[2] = 0x646f6d5f7070202c;
    puVar7[3] = 0x2c656c6261696669;
    puVar7[4] = 0x297875615f707020;
    *(int16_t *)(puVar7 + 5) = 0xa3b;
    *(int8_t *)((int64_t)puVar7 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar9;
  }
  if (*(int *)(param_3 + 0xad8) != 0) {
    iVar11 = iVar9 + 1;
    CoreMemoryPoolProcessor(param_2,iVar11);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar11;
    if (0 < *(int *)(param_3 + 0xad8)) {
      CoreMemoryPoolProcessor(param_2,iVar11 + *(int *)(param_3 + 0xad8));
// WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0xad0),(int64_t)(*(int *)(param_3 + 0xad8) + 1));
    }
    CoreMemoryPoolProcessor(param_2,iVar9 + 0x2b);
    puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar7 = 0x7070202c206e4928;
    puVar7[1] = 0x206369746174735f;
    puVar7[2] = 0x646f6d5f7070202c;
    puVar7[3] = 0x2c656c6261696669;
    puVar7[4] = 0x297875615f707020;
    *(int16_t *)(puVar7 + 5) = 0xa3b;
    *(int8_t *)((int64_t)puVar7 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar9 + 0x2b;
  }
  function_344f00(puVar7,param_2,param_3);
  iVar9 = *(int *)(param_2 + 0x10);
  iVar11 = iVar9 + 2;
  CoreMemoryPoolProcessor(param_2,iVar11);
  puVar8 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0xa7d;
  *(int8_t *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar11;
  iVar9 = iVar9 + 9;
  CoreMemoryPoolProcessor(param_2,iVar9);
  *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
       0xa6669646e6523;
  *(int *)(param_2 + 0x10) = iVar9;
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(puVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_341100(uint64_t param_1,int64_t param_2,uint64_t param_3)
void function_341100(uint64_t param_1,int64_t param_2,uint64_t param_3)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  void *puVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  int8_t stack_array_e8 [32];
  int32_t local_var_c8;
  void *plocal_var_c0;
  void *plocal_var_b8;
  uint local_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  int64_t lStack_98;
  void *plocal_var_88;
  void *plocal_var_80;
  int iStack_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  void *plocal_var_60;
  int8_t *plocal_var_58;
  int32_t local_var_50;
  int8_t stack_array_48 [16];
  uint64_t local_var_38;
  local_var_68 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  local_var_c8 = 0;
  function_33ffe0(param_1,&plocal_var_88);
  plocal_var_60 = &system_config_ptr;
  plocal_var_58 = stack_array_48;
  stack_array_48[0] = 0;
  local_var_50 = 6;
  strcpy_s(stack_array_48,0x10,&rendering_buffer_2588_ptr);
  local_var_c8 = 2;
  SystemCore_EncryptionEngine0(&plocal_var_c0,&plocal_var_60);
  local_var_c8 = 0;
  plocal_var_60 = &system_state_ptr;
  uVar4 = local_var_b0 + 0x10;
  CoreMemoryPoolProcessor(&plocal_var_c0,uVar4);
  puVar1 = (int32_t *)(plocal_var_b8 + local_var_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(int8_t *)(puVar1 + 4) = 0;
  local_var_b0 = uVar4;
  SystemCore_ConfigurationHandler0(param_2,param_3);
  iVar5 = *(int *)(param_2 + 0x10) + 10;
  CoreMemoryPoolProcessor(param_2,iVar5);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x6d776f646168735f;
  *(int16_t *)(puVar2 + 1) = 0x7061;
  *(int8_t *)((int64_t)puVar2 + 10) = 0;
  *(int *)(param_2 + 0x10) = iVar5;
  if (0 < iVar5) {
    CoreMemoryPoolProcessor(&plocal_var_c0,iVar5 + local_var_b0);
// WARNING: Subroutine does not return
    memcpy(plocal_var_b8 + local_var_b0,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar5 = local_var_b0 + 3;
  CoreMemoryPoolProcessor(&plocal_var_c0,iVar5);
  *(int32_t *)(plocal_var_b8 + local_var_b0) = 0x73722e;
  local_var_a0 = 0;
  lStack_98 = 0;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_b8 != (void *)0x0) {
    puVar3 = plocal_var_b8;
  }
  local_var_b0 = iVar5;
  SystemCore_Validator(&local_var_a0,puVar3,&system_data_c7ec);
  lVar6 = lStack_98;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_80 != (void *)0x0) {
    puVar3 = plocal_var_80;
  }
  fwrite(puVar3,(int64_t)iStack_78,1,lStack_98);
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  plocal_var_c0 = &system_data_buffer_ptr;
  if (plocal_var_b8 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_b8 = (void *)0x0;
  local_var_a8 = 0;
  plocal_var_c0 = &system_state_ptr;
  plocal_var_88 = &system_data_buffer_ptr;
  if (plocal_var_80 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_80 = (void *)0x0;
  local_var_70 = 0;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_341380(uint64_t param_1,int64_t param_2,uint64_t param_3)
void function_341380(uint64_t param_1,int64_t param_2,uint64_t param_3)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  void *puVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  int8_t stack_array_e8 [32];
  int32_t local_var_c8;
  void *plocal_var_c0;
  void *plocal_var_b8;
  uint local_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  int64_t lStack_98;
  void *plocal_var_88;
  void *plocal_var_80;
  int iStack_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  void *plocal_var_60;
  int8_t *plocal_var_58;
  int32_t local_var_50;
  int8_t stack_array_48 [16];
  uint64_t local_var_38;
  local_var_68 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  local_var_c8 = 0;
  function_3400b0(param_1,&plocal_var_88);
  plocal_var_60 = &system_config_ptr;
  plocal_var_58 = stack_array_48;
  stack_array_48[0] = 0;
  local_var_50 = 6;
  strcpy_s(stack_array_48,0x10,&rendering_buffer_2588_ptr);
  local_var_c8 = 2;
  SystemCore_EncryptionEngine0(&plocal_var_c0,&plocal_var_60);
  local_var_c8 = 0;
  plocal_var_60 = &system_state_ptr;
  uVar4 = local_var_b0 + 0x10;
  CoreMemoryPoolProcessor(&plocal_var_c0,uVar4);
  puVar1 = (int32_t *)(plocal_var_b8 + local_var_b0);
  *puVar1 = 0x64616853;
  puVar1[1] = 0x2f737265;
  puVar1[2] = 0x72756f53;
  puVar1[3] = 0x2f736563;
  *(int8_t *)(puVar1 + 4) = 0;
  local_var_b0 = uVar4;
  SystemCore_ConfigurationHandler0(param_2,param_3);
  iVar5 = *(int *)(param_2 + 0x10) + 0xb;
  CoreMemoryPoolProcessor(param_2,iVar5);
  puVar2 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar2 = 0x696c746e696f705f;
  *(int32_t *)(puVar2 + 1) = 0x746867;
  *(int *)(param_2 + 0x10) = iVar5;
  if (0 < iVar5) {
    CoreMemoryPoolProcessor(&plocal_var_c0,iVar5 + local_var_b0);
// WARNING: Subroutine does not return
    memcpy(plocal_var_b8 + local_var_b0,*(uint64_t *)(param_2 + 8),
           (int64_t)(*(int *)(param_2 + 0x10) + 1));
  }
  iVar5 = local_var_b0 + 3;
  CoreMemoryPoolProcessor(&plocal_var_c0,iVar5);
  *(int32_t *)(plocal_var_b8 + local_var_b0) = 0x73722e;
  local_var_a0 = 0;
  lStack_98 = 0;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_b8 != (void *)0x0) {
    puVar3 = plocal_var_b8;
  }
  local_var_b0 = iVar5;
  SystemCore_Validator(&local_var_a0,puVar3,&system_data_c7ec);
  lVar6 = lStack_98;
  puVar3 = &system_buffer_ptr;
  if (plocal_var_80 != (void *)0x0) {
    puVar3 = plocal_var_80;
  }
  fwrite(puVar3,(int64_t)iStack_78,1,lStack_98);
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_98 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  plocal_var_c0 = &system_data_buffer_ptr;
  if (plocal_var_b8 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_b8 = (void *)0x0;
  local_var_a8 = 0;
  plocal_var_c0 = &system_state_ptr;
  plocal_var_88 = &system_data_buffer_ptr;
  if (plocal_var_80 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  plocal_var_80 = (void *)0x0;
  local_var_70 = 0;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3415f0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void function_3415f0(uint64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  uint64_t *puVar7;
  int16_t *puVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  uVar13 = 0;
  puVar5 = (int32_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13,param_4,0,0xfffffffffffffffe,&system_data_buffer_ptr,0,0,0)
  ;
  *(int8_t *)puVar5 = 0;
  CoreMemoryPoolCleaner(puVar5);
  *puVar5 = 0x65786950;
  puVar5[1] = 0x68735f6c;
  puVar5[2] = 0x72656461;
  puVar5[3] = 0x706e695f;
  *(uint64_t *)(puVar5 + 4) = 0x657079745f7475;
  iVar10 = *(int *)(param_2 + 0x10);
  CoreMemoryPoolProcessor(param_2,iVar10 + 0x11);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x20666923;
  puVar6[1] = 0x45584950;
  puVar6[2] = 0x48535f4c;
  puVar6[3] = 0x52454441;
  *(int16_t *)(puVar6 + 4) = 10;
  *(int *)(param_2 + 0x10) = iVar10 + 0x11;
  CoreMemoryPoolProcessor(param_2,iVar10 + 0x1e);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x69616d2064696f76;
  *(int32_t *)(puVar7 + 1) = 0x73705f6e;
  *(int16_t *)((int64_t)puVar7 + 0xc) = 0x28;
  *(int *)(param_2 + 0x10) = iVar10 + 0x1e;
  CoreMemoryPoolProcessor(param_2,iVar10 + 0x35);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *puVar6 = *puVar5;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  *(uint64_t *)(puVar6 + 4) = *(uint64_t *)(puVar5 + 4);
  *(int *)(param_2 + 0x10) = iVar10 + 0x35;
  CoreMemoryPoolProcessor(param_2,iVar10 + 0x3a);
  puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar6 = 0x296e4920;
  *(int16_t *)(puVar6 + 1) = 10;
  *(int *)(param_2 + 0x10) = iVar10 + 0x3a;
  CoreMemoryPoolProcessor(param_2,iVar10 + 0x3c);
  puVar8 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar8 = 0xa7b;
  *(int8_t *)(puVar8 + 1) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0x3c;
  CoreMemoryPoolProcessor(param_2,iVar10 + 0x83);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x69746174735f6c65;
  puVar7[2] = 0x6261697261765f63;
  puVar7[3] = 0x735f70702073656c;
  puVar7[4] = 0x203d206369746174;
  puVar7[5] = 0x7869705f72655028;
  *(int32_t *)(puVar7 + 6) = 0x735f6c65;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x69746174;
  *(int32_t *)(puVar7 + 7) = 0x61765f63;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x62616972;
  puVar7[8] = 0xa3b302973656c;
  *(int *)(param_2 + 0x10) = iVar10 + 0x83;
  CoreMemoryPoolProcessor(param_2,iVar10 + 0xd7);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x6669646f6d5f6c65;
  puVar7[2] = 0x61765f656c626169;
  puVar7[3] = 0x2073656c62616972;
  puVar7[4] = 0x6669646f6d5f7070;
  puVar7[5] = 0x203d20656c626169;
  *(int32_t *)(puVar7 + 6) = 0x72655028;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x7869705f;
  *(int32_t *)(puVar7 + 7) = 0x6d5f6c65;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x6669646f;
  *(int32_t *)(puVar7 + 8) = 0x6c626169;
  *(int32_t *)((int64_t)puVar7 + 0x44) = 0x61765f65;
  *(int32_t *)(puVar7 + 9) = 0x62616972;
  *(int32_t *)((int64_t)puVar7 + 0x4c) = 0x2973656c;
  *(int32_t *)(puVar7 + 10) = 0xa0a3b30;
  *(int8_t *)((int64_t)puVar7 + 0x54) = 0;
  *(int *)(param_2 + 0x10) = iVar10 + 0xd7;
  CoreMemoryPoolProcessor(param_2,iVar10 + 0x122);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x7869705f72655009;
  puVar7[1] = 0x6c697875615f6c65;
  puVar7[2] = 0x7261765f79726169;
  puVar7[3] = 0x702073656c626169;
  puVar7[4] = 0x203d207875615f70;
  puVar7[5] = 0x7869705f72655028;
  *(int32_t *)(puVar7 + 6) = 0x615f6c65;
  *(int32_t *)((int64_t)puVar7 + 0x34) = 0x6c697875;
  *(int32_t *)(puVar7 + 7) = 0x79726169;
  *(int32_t *)((int64_t)puVar7 + 0x3c) = 0x7261765f;
  puVar7[8] = 0x302973656c626169;
  *(int32_t *)(puVar7 + 9) = 0xa0a3b;
  *(int *)(param_2 + 0x10) = iVar10 + 0x122;
  iVar10 = iVar10 + 0x159;
  CoreMemoryPoolProcessor(param_2,iVar10);
  puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar7 = 0x616c75636c616309;
  puVar7[1] = 0x705f7265705f6574;
  puVar7[2] = 0x6174735f6c657869;
  puVar7[3] = 0x697261765f636974;
  *(int32_t *)(puVar7 + 4) = 0x656c6261;
  *(int32_t *)((int64_t)puVar7 + 0x24) = 0x6e492873;
  *(int32_t *)(puVar7 + 5) = 0x7070202c;
  *(int32_t *)((int64_t)puVar7 + 0x2c) = 0x6174735f;
  puVar7[6] = 0xa0a3b29636974;
  *(int *)(param_2 + 0x10) = iVar10;
  lVar9 = *(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490);
  lVar1 = lVar9 >> 0x3f;
  uVar15 = uVar13;
  if (lVar9 / 0x98 + lVar1 != lVar1) {
    do {
      iVar11 = iVar10 + 1;
      CoreMemoryPoolProcessor(param_2,iVar11);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
      *(int *)(param_2 + 0x10) = iVar11;
      lVar1 = *(int64_t *)(param_3 + 0x490);
      iVar12 = *(int *)(lVar1 + 0x10 + uVar13);
      if (0 < iVar12) {
        CoreMemoryPoolProcessor(param_2,iVar11 + iVar12);
// WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
               *(uint64_t *)(lVar1 + 8 + uVar13),(int64_t)(*(int *)(lVar1 + 0x10 + uVar13) + 1));
      }
      iVar10 = iVar10 + 7;
      CoreMemoryPoolProcessor(param_2,iVar10);
      puVar6 = (int32_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
      *puVar6 = 0x296e4928;
      *(int16_t *)(puVar6 + 1) = 0xa3b;
      *(int8_t *)((int64_t)puVar6 + 6) = 0;
      *(int *)(param_2 + 0x10) = iVar10;
      uVar14 = (int)uVar15 + 1;
      uVar13 = uVar13 + 0x98;
      uVar15 = (uint64_t)uVar14;
    } while ((uint64_t)(int64_t)(int)uVar14 <
             (uint64_t)((*(int64_t *)(param_3 + 0x498) - *(int64_t *)(param_3 + 0x490)) / 0x98));
  }
  if (*(int *)(param_3 + 0xa40) != 0) {
    iVar12 = iVar10 + 1;
    CoreMemoryPoolProcessor(param_2,iVar12);
    *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
    *(int *)(param_2 + 0x10) = iVar12;
    if (0 < *(int *)(param_3 + 0xa40)) {
      CoreMemoryPoolProcessor(param_2,iVar12 + *(int *)(param_3 + 0xa40));
// WARNING: Subroutine does not return
      memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
             *(uint64_t *)(param_3 + 0xa38),(int64_t)(*(int *)(param_3 + 0xa40) + 1));
    }
    iVar10 = iVar10 + 0x2b;
    CoreMemoryPoolProcessor(param_2,iVar10);
    puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar7 = 0x7070202c206e4928;
    puVar7[1] = 0x206369746174735f;
    puVar7[2] = 0x646f6d5f7070202c;
    puVar7[3] = 0x2c656c6261696669;
    puVar7[4] = 0x297875615f707020;
    *(int16_t *)(puVar7 + 5) = 0xa3b;
    *(int8_t *)((int64_t)puVar7 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar10;
  }
  iVar12 = iVar10 + 1;
  CoreMemoryPoolProcessor(param_2,iVar12);
  *(int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) = 9;
  *(int *)(param_2 + 0x10) = iVar12;
  if (*(int *)(param_3 + 0xad8) < 1) {
    CoreMemoryPoolProcessor(param_2,iVar10 + 0x2b);
    puVar7 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar7 = 0x7070202c206e4928;
    puVar7[1] = 0x206369746174735f;
    *(int32_t *)(puVar7 + 2) = 0x7070202c;
    *(int32_t *)((int64_t)puVar7 + 0x14) = 0x646f6d5f;
    *(int32_t *)(puVar7 + 3) = 0x61696669;
    *(int32_t *)((int64_t)puVar7 + 0x1c) = 0x2c656c62;
    puVar7[4] = 0x297875615f707020;
    *(int16_t *)(puVar7 + 5) = 0xa3b;
    *(int8_t *)((int64_t)puVar7 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar10 + 0x2b;
    function_344f00(puVar7,param_2,param_3);
    iVar10 = *(int *)(param_2 + 0x10);
    iVar12 = iVar10 + 2;
    CoreMemoryPoolProcessor(param_2,iVar12);
    puVar8 = (int16_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar8 = 0xa7d;
    *(int8_t *)(puVar8 + 1) = 0;
    *(int *)(param_2 + 0x10) = iVar12;
    iVar10 = iVar10 + 9;
    CoreMemoryPoolProcessor(param_2,iVar10);
    *(uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8)) =
         0xa6669646e6523;
    *(int *)(param_2 + 0x10) = iVar10;
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar5);
  }
  CoreMemoryPoolProcessor(param_2,iVar12 + *(int *)(param_3 + 0xad8));
// WARNING: Subroutine does not return
  memcpy((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8),
         *(uint64_t *)(param_3 + 0xad0),(int64_t)(*(int *)(param_3 + 0xad8) + 1));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address