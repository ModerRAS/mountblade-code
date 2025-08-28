#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part182.c - 1 个函数
// 函数: void function_167a50(void)
void function_167a50(void)
{
// WARNING: Subroutine does not return
  SystemEventProcessor();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_167f80(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)
{
  int iVar1;
  void *puVar2;
  int32_t uVar3;
  void **ppuVar4;
  int32_t *puVar5;
  void *puVar6;
  int iVar7;
  bool bVar8;
  void *plocal_var_88;
  int32_t *plocal_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  void *plocal_var_60;
  int iStack_58;
  void *plocal_var_50;
  void *plocal_var_48;
  int64_t lStack_40;
  int32_t local_var_30;
  bVar8 = (param_4[1] - *param_4 & 0xffffffffffffffe0U) != 0x20;
  if (bVar8) {
    plocal_var_88 = &system_data_buffer_ptr;
    local_var_70 = 0;
    plocal_var_80 = (int32_t *)0x0;
    local_var_78 = 0;
    puVar5 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13,param_4,0,0xfffffffffffffffe);
    *(int8_t *)puVar5 = 0;
    plocal_var_80 = puVar5;
    uVar3 = CoreMemoryPoolCleaner(puVar5);
    local_var_70 = CONCAT44(local_var_70._4_4_,uVar3);
    *puVar5 = 0x64616873;
    puVar5[1] = 0x695f7265;
    puVar5[2] = 0x746e6564;
    puVar5[3] = 0x65696669;
    puVar5[4] = 0x742e7372;
    *(int16_t *)(puVar5 + 5) = 0x7478;
    *(int8_t *)((int64_t)puVar5 + 0x16) = 0;
    local_var_78 = 0x16;
    ppuVar4 = &plocal_var_88;
  }
  else {
    ppuVar4 = (void **)SystemCore_NetworkHandler0(&plocal_var_48);
  }
  plocal_var_68 = &system_data_buffer_ptr;
  plocal_var_50 = (void *)0x0;
  plocal_var_60 = (void *)0x0;
  iStack_58 = 0;
  iVar1 = *(int *)(ppuVar4 + 2);
  iStack_58 = iVar1;
  puVar2 = ppuVar4[1];
  plocal_var_60 = puVar2;
  plocal_var_50 = (void *)((uint64_t)*(uint *)((int64_t)ppuVar4 + 0x1c) << 0x20);
  plocal_var_50 = ppuVar4[3];
  *(int32_t *)(ppuVar4 + 2) = 0;
  ppuVar4[1] = (void *)0x0;
  ppuVar4[3] = (void *)0x0;
  if (bVar8) {
    plocal_var_88 = &system_data_buffer_ptr;
    if (plocal_var_80 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_80 = (int32_t *)0x0;
    local_var_70 = local_var_70 & 0xffffffff00000000;
    plocal_var_88 = &system_state_ptr;
    ppuVar4 = (void **)0x0;
  }
  if (!bVar8) {
    plocal_var_48 = &system_data_buffer_ptr;
    if (lStack_40 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_40 = 0;
    local_var_30 = 0;
    plocal_var_48 = &system_state_ptr;
    ppuVar4 = (void **)0x0;
  }
  puVar6 = &system_buffer_ptr;
  if (puVar2 != (void *)0x0) {
    puVar6 = puVar2;
  }
  function_1c9bd0(ppuVar4,puVar6);
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  iVar7 = *(int *)(param_2 + 2) + 0x21;
  CoreMemoryPoolProcessor(param_2,iVar7);
  puVar5 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar5 = 0x656e6f44;
  puVar5[1] = 0x6f43202e;
  puVar5[2] = 0x6e69626d;
  puVar5[3] = 0x6f697461;
  puVar5[4] = 0x7320736e;
  puVar5[5] = 0x64657661;
  puVar5[6] = 0x206f7420;
  puVar5[7] = 0x656c6966;
  *(int16_t *)(puVar5 + 8) = 0x20;
  *(int *)(param_2 + 2) = iVar7;
  if (0 < iVar1) {
    CoreMemoryPoolProcessor(param_2,iVar7 + iVar1);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],puVar2,(int64_t)(iVar1 + 1));
  }
  plocal_var_68 = &system_data_buffer_ptr;
  if (puVar2 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar2);
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_1681e0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)
{
  int iVar1;
  void *puVar2;
  int32_t uVar3;
  void **ppuVar4;
  int32_t *puVar5;
  void *puVar6;
  int iVar7;
  bool bVar8;
  void *plocal_var_88;
  int32_t *plocal_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  void *plocal_var_60;
  int iStack_58;
  void *plocal_var_50;
  void *plocal_var_48;
  int64_t lStack_40;
  int32_t local_var_30;
  bVar8 = (param_4[1] - *param_4 & 0xffffffffffffffe0U) != 0x20;
  if (bVar8) {
    plocal_var_88 = &system_data_buffer_ptr;
    local_var_70 = 0;
    plocal_var_80 = (int32_t *)0x0;
    local_var_78 = 0;
    puVar5 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13,param_4,0,0xfffffffffffffffe);
    *(int8_t *)puVar5 = 0;
    plocal_var_80 = puVar5;
    uVar3 = CoreMemoryPoolCleaner(puVar5);
    local_var_70 = CONCAT44(local_var_70._4_4_,uVar3);
    *puVar5 = 0x64616873;
    puVar5[1] = 0x635f7265;
    puVar5[2] = 0x69626d6f;
    puVar5[3] = 0x6974616e;
    *(uint64_t *)(puVar5 + 4) = 0x7478742e736e6f;
    local_var_78 = 0x17;
    ppuVar4 = &plocal_var_88;
  }
  else {
    ppuVar4 = (void **)SystemCore_NetworkHandler0(&plocal_var_48);
  }
  plocal_var_68 = &system_data_buffer_ptr;
  plocal_var_50 = (void *)0x0;
  plocal_var_60 = (void *)0x0;
  iStack_58 = 0;
  iVar1 = *(int *)(ppuVar4 + 2);
  iStack_58 = iVar1;
  puVar2 = ppuVar4[1];
  plocal_var_60 = puVar2;
  plocal_var_50 = (void *)((uint64_t)*(uint *)((int64_t)ppuVar4 + 0x1c) << 0x20);
  plocal_var_50 = ppuVar4[3];
  *(int32_t *)(ppuVar4 + 2) = 0;
  ppuVar4[1] = (void *)0x0;
  ppuVar4[3] = (void *)0x0;
  if (bVar8) {
    plocal_var_88 = &system_data_buffer_ptr;
    if (plocal_var_80 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    plocal_var_80 = (int32_t *)0x0;
    local_var_70 = local_var_70 & 0xffffffff00000000;
    plocal_var_88 = &system_state_ptr;
    ppuVar4 = (void **)0x0;
  }
  if (!bVar8) {
    plocal_var_48 = &system_data_buffer_ptr;
    if (lStack_40 != 0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    lStack_40 = 0;
    local_var_30 = 0;
    plocal_var_48 = &system_state_ptr;
    ppuVar4 = (void **)0x0;
  }
  puVar6 = &system_buffer_ptr;
  if (puVar2 != (void *)0x0) {
    puVar6 = puVar2;
  }
  function_1ca670(ppuVar4,puVar6);
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  iVar7 = *(int *)(param_2 + 2) + 0x21;
  CoreMemoryPoolProcessor(param_2,iVar7);
  puVar5 = (int32_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]);
  *puVar5 = 0x656e6f44;
  puVar5[1] = 0x6f43202e;
  puVar5[2] = 0x6e69626d;
  puVar5[3] = 0x6f697461;
  puVar5[4] = 0x7320736e;
  puVar5[5] = 0x64657661;
  puVar5[6] = 0x206f7420;
  puVar5[7] = 0x656c6966;
  *(int16_t *)(puVar5 + 8) = 0x20;
  *(int *)(param_2 + 2) = iVar7;
  if (0 < iVar1) {
    CoreMemoryPoolProcessor(param_2,iVar7 + iVar1);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],puVar2,(int64_t)(iVar1 + 1));
  }
  plocal_var_68 = &system_data_buffer_ptr;
  if (puVar2 != (void *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar2);
  }
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_168430(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)
{
  int64_t lVar1;
  uint64_t *puVar2;
  lVar1 = *param_4;
  if ((((param_4[1] - lVar1 >> 5 == 0) || (*(int *)(lVar1 + 0x10) != 1)) ||
      (**(char **)(lVar1 + 8) != '0')) || ((*(char **)(lVar1 + 8))[1] != '\0')) {
    *(int8_t *)(core_system_data_config + 0x1f0) = 1;
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x19,0,param_4,0,0xfffffffffffffffe);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x206574696e617247;
    puVar2[1] = 0x6e696d6165727473;
    puVar2[2] = 0x6465737561702067;
    *(int16_t *)(puVar2 + 3) = 0x2e;
    *(int32_t *)(param_2 + 2) = 0x19;
  }
  else {
    *(int8_t *)(core_system_data_config + 0x1f0) = 0;
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x1c,0,param_4,0,0xfffffffffffffffe);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x206574696e617247;
    puVar2[1] = 0x6e696d6165727473;
    puVar2[2] = 0x7561702d6e752067;
    *(int32_t *)(puVar2 + 3) = 0x2e646573;
    *(int8_t *)((int64_t)puVar2 + 0x1c) = 0;
    *(int32_t *)(param_2 + 2) = 0x1c;
  }
  return param_2;
}
uint64_t *
function_168590(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  lVar1 = param_4[1];
  lVar2 = *param_4;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_state_ptr;
  if ((uint64_t)(lVar1 - lVar2 >> 5) < 2) {
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x14,param_3,param_4,0,0xfffffffffffffffe);
    puVar4 = (uint64_t *)param_2[1];
    *puVar4 = 0x777420736465654e;
    puVar4[1] = 0x656d75677261206f;
    *(int32_t *)(puVar4 + 2) = 0x2e73746e;
    *(int8_t *)((int64_t)puVar4 + 0x14) = 0;
    *(int32_t *)(param_2 + 2) = 0x14;
  }
  else {
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,4,param_3,param_4,0,0xfffffffffffffffe);
    puVar3 = (int32_t *)param_2[1];
    *puVar3 = 0x656e6f44;
    *(int8_t *)(puVar3 + 1) = 0;
    *(int32_t *)(param_2 + 2) = 4;
  }
  return param_2;
}
uint64_t *
function_168670(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)
{
  int64_t lVar1;
  int32_t *puVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  void *plocal_var_48;
  uint64_t local_var_40;
  uint local_var_38;
  uint64_t local_var_30;
  uint64_t uVar5;
  uVar5 = 0;
  plocal_var_48 = &system_data_buffer_ptr;
  local_var_30 = 0;
  local_var_40 = 0;
  local_var_38 = 0;
  lVar8 = param_4[1];
  lVar3 = *param_4;
  uVar6 = uVar5;
  uVar7 = uVar5;
  uVar9 = uVar5;
  uVar10 = uVar5;
  if (lVar8 - lVar3 >> 5 != 0) {
    do {
      lVar1 = uVar10 + lVar3;
      if (0 < *(int *)(lVar1 + 0x10)) {
        CoreMemoryPoolProcessor(&plocal_var_48,(int)uVar5 + *(int *)(lVar1 + 0x10));
// WARNING: Subroutine does not return
        memcpy(local_var_38 + local_var_40,*(uint64_t *)(lVar1 + 8),
               (int64_t)(*(int *)(lVar1 + 0x10) + 1));
      }
      if (uVar6 != (lVar8 - lVar3 >> 5) - 1U) {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        CoreMemoryPoolProcessor(&plocal_var_48,uVar5);
        *(int16_t *)(local_var_38 + local_var_40) = 0x20;
        lVar8 = param_4[1];
        lVar3 = *param_4;
        uVar7 = local_var_40;
        local_var_38 = uVar4;
      }
      uVar4 = (int)uVar9 + 1;
      uVar6 = (int64_t)(int)uVar4;
      uVar9 = (uint64_t)uVar4;
      uVar10 = uVar10 + 0x20;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(lVar8 - lVar3 >> 5));
  }
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreMemoryPoolProcessor(param_2,4);
  puVar2 = (int32_t *)param_2[1];
  *puVar2 = 0x656e6f44;
  *(int8_t *)(puVar2 + 1) = 0;
  *(int32_t *)(param_2 + 2) = 4;
  plocal_var_48 = &system_data_buffer_ptr;
  if (uVar7 == 0) {
    return param_2;
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(uVar7);
}
uint64_t *
function_168840(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  int32_t extraout_XMM0_Da;
  uVar3 = atoi(*(uint64_t *)(*param_4 + 8));
  if (uVar3 < 5) {
    function_100ff0(extraout_XMM0_Da,uVar3);
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,4);
    puVar1 = (int32_t *)param_2[1];
    *puVar1 = 0x656e6f44;
    *(int8_t *)(puVar1 + 1) = 0;
    *(int32_t *)(param_2 + 2) = 4;
  }
  else {
    *param_2 = &system_state_ptr;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &system_data_buffer_ptr;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    CoreMemoryPoolProcessor(param_2,0x43);
    puVar2 = (uint64_t *)param_2[1];
    *puVar2 = 0x3a736e6f6974704f;
    puVar2[1] = 0x726556202d203020;
    puVar2[2] = 0x31202c776f4c2079;
    puVar2[3] = 0x202c776f4c202d20;
    puVar2[4] = 0x6964654d202d2032;
    puVar2[5] = 0x202d2033202c6d75;
    puVar2[6] = 0x2034202c68676948;
    puVar2[7] = 0x482079726556202d;
    *(int32_t *)(puVar2 + 8) = 0x686769;
    *(int32_t *)(param_2 + 2) = 0x43;
  }
  return param_2;
}
uint64_t *
function_168960(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *plocal_var_38;
  uint64_t *plocal_var_30;
  uVar4 = 0;
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  function_16a6c0(*param_1,&plocal_var_38,param_3,param_4,1,0xfffffffffffffffe);
  function_16d200(plocal_var_38,plocal_var_30,0);
  uVar5 = uVar4;
  puVar1 = plocal_var_38;
  if ((int64_t)plocal_var_30 - (int64_t)plocal_var_38 >> 5 != 0) {
    do {
      iVar2 = *(int *)(uVar5 + 0x10 + (int64_t)plocal_var_38);
      if (0 < iVar2) {
        CoreMemoryPoolProcessor(param_2,*(int *)(param_2 + 2) + iVar2);
// WARNING: Subroutine does not return
        memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],
               *(uint64_t *)(uVar5 + 8 + (int64_t)plocal_var_38),
               (int64_t)(*(int *)(uVar5 + 0x10 + (int64_t)plocal_var_38) + 1));
      }
      iVar2 = *(int *)(param_2 + 2) + 1;
      CoreMemoryPoolProcessor(param_2,iVar2);
      *(int16_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]) = 10;
      *(int *)(param_2 + 2) = iVar2;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      uVar5 = uVar5 + 0x20;
      puVar1 = plocal_var_38;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)((int64_t)plocal_var_30 - (int64_t)plocal_var_38 >> 5));
  }
  for (; puVar1 != plocal_var_30; puVar1 = puVar1 + 4) {
    (**(code **)*puVar1)(puVar1,0);
  }
  if (plocal_var_38 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  return param_2;
}