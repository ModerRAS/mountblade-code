#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part014.c - 4 个函数
// 函数: void function_1d83e0(uint64_t param_1,int64_t param_2)
void function_1d83e0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int8_t stack_array_108 [32];
  uint64_t local_var_e8;
  int8_t stack_array_d8 [96];
  int8_t stack_array_78 [32];
  int8_t stack_array_58 [32];
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  uint64_t local_var_28;
  uVar1 = system_global_data_ptr;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  bVar5 = true;
  if ((*(byte *)(param_2 + 0xa8) & 1) != 0) {
    function_09e8e0(stack_array_d8);
    CoreEngineDataTransformer(stack_array_78,param_2 + 0x60);
    CoreEngineDataTransformer(stack_array_58,param_2 + 0x80);
    local_var_38 = *(int32_t *)(param_2 + 0xa0);
    local_var_30 = *(int32_t *)(param_2 + 0xa8);
    local_var_34 = 0;
    cVar2 = function_1d8740(uVar1,stack_array_d8);
    bVar5 = cVar2 != '\0';
    function_1c92a0(stack_array_d8);
    if (!bVar5) goto LAB_1801d84a2;
  }
  lVar3 = param_2 + 0x60;
  if ((*(byte *)(param_2 + 0xa8) & 4) != 0) {
    function_09e8e0(stack_array_d8,param_2);
    CoreEngineDataTransformer(stack_array_78,lVar3);
    CoreEngineDataTransformer(stack_array_58,param_2 + 0x80);
    local_var_38 = *(int32_t *)(param_2 + 0xa0);
    local_var_30 = *(int32_t *)(param_2 + 0xa8);
    local_var_34 = 3;
    cVar2 = function_1d8740(uVar1,stack_array_d8);
    bVar5 = cVar2 != '\0';
    function_1c92a0(stack_array_d8);
  }
  lVar4 = param_2 + 0x80;
  if (bVar5) {
    if ((*(byte *)(param_2 + 0xa8) & 2) != 0) {
      function_09e8e0(stack_array_d8,param_2);
      CoreEngineDataTransformer(stack_array_78,lVar3);
      CoreEngineDataTransformer(stack_array_58,lVar4);
      local_var_38 = *(int32_t *)(param_2 + 0xa0);
      local_var_30 = *(int32_t *)(param_2 + 0xa8);
      local_var_34 = 2;
      cVar2 = function_1d8740(uVar1,stack_array_d8);
      bVar5 = cVar2 != '\0';
      function_1c92a0(stack_array_d8);
    }
    if (bVar5) {
      if ((*(byte *)(param_2 + 0xa8) & 8) != 0) {
        function_09e8e0(stack_array_d8,param_2);
        CoreEngineDataTransformer(stack_array_78,lVar3);
        CoreEngineDataTransformer(stack_array_58,lVar4);
        local_var_38 = *(int32_t *)(param_2 + 0xa0);
        local_var_30 = *(int32_t *)(param_2 + 0xa8);
        local_var_34 = 5;
        cVar2 = function_1d8740(uVar1,stack_array_d8);
        bVar5 = cVar2 != '\0';
        function_1c92a0(stack_array_d8);
      }
      if (bVar5) {
        if ((*(byte *)(param_2 + 0xa8) & 0x10) != 0) {
          function_09e8e0(stack_array_d8,param_2);
          CoreEngineDataTransformer(stack_array_78,lVar3);
          CoreEngineDataTransformer(stack_array_58,lVar4);
          local_var_38 = *(int32_t *)(param_2 + 0xa0);
          local_var_30 = *(int32_t *)(param_2 + 0xa8);
          local_var_34 = 1;
          cVar2 = function_1d8740(uVar1,stack_array_d8);
          bVar5 = cVar2 != '\0';
          function_1c92a0(stack_array_d8);
        }
        if ((bVar5) && ((*(byte *)(param_2 + 0xa8) & 0x20) != 0)) {
          function_09e8e0(stack_array_d8,param_2);
          CoreEngineDataTransformer(stack_array_78,param_2 + 0x60);
          CoreEngineDataTransformer(stack_array_58,lVar4);
          local_var_38 = *(int32_t *)(param_2 + 0xa0);
          local_var_30 = *(int32_t *)(param_2 + 0xa8);
          local_var_34 = 4;
          function_1d8740(uVar1,stack_array_d8);
          function_1c92a0(stack_array_d8);
        }
      }
    }
  }
LAB_1801d84a2:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_108);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1d8740(int64_t param_1,int64_t *param_2)
void function_1d8740(int64_t param_1,int64_t *param_2)
{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t stack_array_78 [32];
  int8_t stack_array_58 [8];
  int64_t lStack_50;
  int8_t local_var_48;
  uint64_t local_var_40;
  int iStack_38;
  int32_t local_var_34;
  int64_t lStack_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int8_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  local_var_40 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  if (param_2[4] == 0) {
    pcVar2 = "";
    if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
      pcVar2 = *(char **)(*param_2 + 0x18);
    }
    iStack_38 = 0x1505;
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      iStack_38 = iStack_38 * 0x21 + (int)cVar1;
      cVar1 = *pcVar2;
    }
    local_var_34 = (int32_t)((uint64_t)param_2[1] >> 0x20);
    lStack_30 = CONCAT44((int)param_2[2],(int)param_2[1]);
    local_var_28._0_3_ =
         CONCAT12(*(int8_t *)((int64_t)param_2 + 0xa4),
                  *(int16_t *)((int64_t)param_2 + 0x14));
    lVar3 = *(int64_t *)(param_1 + 0x50) + 0x360;
    local_var_48 = 1;
    lStack_50 = lVar3;
    AcquireSRWLockShared(lVar3);
    function_1e6940(*(uint64_t *)(*(int64_t *)(param_1 + 0x50) + 0x318),stack_array_58,&iStack_38);
  }
  else {
    pcVar2 = "";
    if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
      pcVar2 = *(char **)(*param_2 + 0x18);
    }
    iStack_38 = 0x1505;
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      iStack_38 = iStack_38 * 0x21 + (int)cVar1;
      cVar1 = *pcVar2;
    }
    lStack_30 = param_2[1];
    local_var_28 = (int32_t)param_2[2];
    local_var_24 = *(int32_t *)((int64_t)param_2 + 0x14);
    local_var_20 = *(int8_t *)((int64_t)param_2 + 0xa4);
    local_var_1c = (int32_t)param_2[0x14];
    lVar3 = param_2[4] + 0x360;
    local_var_48 = 1;
    lStack_50 = lVar3;
    AcquireSRWLockShared(lVar3);
    function_1e1020(param_2[4] + 0x328,stack_array_58,&iStack_38);
  }
  ReleaseSRWLockShared(lVar3);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_78);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1d8920(uint64_t param_1,int64_t param_2)
void function_1d8920(uint64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int8_t stack_array_108 [32];
  uint64_t local_var_e8;
  int8_t stack_array_d8 [96];
  int8_t stack_array_78 [32];
  int8_t stack_array_58 [32];
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t local_var_30;
  uint64_t local_var_28;
  uVar1 = system_global_data_ptr;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  bVar5 = true;
  if ((*(byte *)(param_2 + 0xa8) & 1) != 0) {
    function_09e8e0(stack_array_d8);
    CoreEngineDataTransformer(stack_array_78,param_2 + 0x60);
    CoreEngineDataTransformer(stack_array_58,param_2 + 0x80);
    local_var_38 = *(int32_t *)(param_2 + 0xa0);
    local_var_30 = *(int32_t *)(param_2 + 0xa8);
    local_var_34 = 0;
    cVar2 = function_1d8c80(uVar1,stack_array_d8);
    bVar5 = cVar2 != '\0';
    function_1c92a0(stack_array_d8);
    if (!bVar5) goto LAB_1801d89e2;
  }
  lVar3 = param_2 + 0x60;
  if ((*(byte *)(param_2 + 0xa8) & 4) != 0) {
    function_09e8e0(stack_array_d8,param_2);
    CoreEngineDataTransformer(stack_array_78,lVar3);
    CoreEngineDataTransformer(stack_array_58,param_2 + 0x80);
    local_var_38 = *(int32_t *)(param_2 + 0xa0);
    local_var_30 = *(int32_t *)(param_2 + 0xa8);
    local_var_34 = 3;
    cVar2 = function_1d8c80(uVar1,stack_array_d8);
    bVar5 = cVar2 != '\0';
    function_1c92a0(stack_array_d8);
  }
  lVar4 = param_2 + 0x80;
  if (bVar5) {
    if ((*(byte *)(param_2 + 0xa8) & 2) != 0) {
      function_09e8e0(stack_array_d8,param_2);
      CoreEngineDataTransformer(stack_array_78,lVar3);
      CoreEngineDataTransformer(stack_array_58,lVar4);
      local_var_38 = *(int32_t *)(param_2 + 0xa0);
      local_var_30 = *(int32_t *)(param_2 + 0xa8);
      local_var_34 = 2;
      cVar2 = function_1d8c80(uVar1,stack_array_d8);
      bVar5 = cVar2 != '\0';
      function_1c92a0(stack_array_d8);
    }
    if (bVar5) {
      if ((*(byte *)(param_2 + 0xa8) & 8) != 0) {
        function_09e8e0(stack_array_d8,param_2);
        CoreEngineDataTransformer(stack_array_78,lVar3);
        CoreEngineDataTransformer(stack_array_58,lVar4);
        local_var_38 = *(int32_t *)(param_2 + 0xa0);
        local_var_30 = *(int32_t *)(param_2 + 0xa8);
        local_var_34 = 5;
        cVar2 = function_1d8c80(uVar1,stack_array_d8);
        bVar5 = cVar2 != '\0';
        function_1c92a0(stack_array_d8);
      }
      if (bVar5) {
        if ((*(byte *)(param_2 + 0xa8) & 0x10) != 0) {
          function_09e8e0(stack_array_d8,param_2);
          CoreEngineDataTransformer(stack_array_78,lVar3);
          CoreEngineDataTransformer(stack_array_58,lVar4);
          local_var_38 = *(int32_t *)(param_2 + 0xa0);
          local_var_30 = *(int32_t *)(param_2 + 0xa8);
          local_var_34 = 1;
          cVar2 = function_1d8c80(uVar1,stack_array_d8);
          bVar5 = cVar2 != '\0';
          function_1c92a0(stack_array_d8);
        }
        if ((bVar5) && ((*(byte *)(param_2 + 0xa8) & 0x20) != 0)) {
          function_09e8e0(stack_array_d8,param_2);
          CoreEngineDataTransformer(stack_array_78,param_2 + 0x60);
          CoreEngineDataTransformer(stack_array_58,lVar4);
          local_var_38 = *(int32_t *)(param_2 + 0xa0);
          local_var_30 = *(int32_t *)(param_2 + 0xa8);
          local_var_34 = 4;
          function_1d8c80(uVar1,stack_array_d8);
          function_1c92a0(stack_array_d8);
        }
      }
    }
  }
LAB_1801d89e2:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_108);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1d8c80(int64_t param_1,int64_t *param_2)
void function_1d8c80(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  char cVar2;
  char *pcVar3;
  int64_t lVar4;
  int8_t stack_array_78 [32];
  int8_t stack_array_58 [8];
  int64_t lStack_50;
  int8_t local_var_48;
  uint64_t local_var_40;
  int iStack_38;
  int32_t local_var_34;
  int64_t lStack_30;
  int32_t local_var_28;
  int32_t local_var_24;
  int8_t local_var_20;
  int32_t local_var_1c;
  uint64_t local_var_18;
  local_var_40 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  lVar4 = param_2[4];
  if (lVar4 == 0) {
    if (*(char *)(*(int64_t *)(param_1 + 0x50) + 0x358) != '\0') {
      pcVar3 = "";
      if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
        pcVar3 = *(char **)(*param_2 + 0x18);
      }
      iStack_38 = 0x1505;
      cVar2 = *pcVar3;
      while (cVar2 != '\0') {
        pcVar3 = pcVar3 + 1;
        iStack_38 = iStack_38 * 0x21 + (int)cVar2;
        cVar2 = *pcVar3;
      }
      local_var_34 = (int32_t)((uint64_t)param_2[1] >> 0x20);
      lStack_30 = CONCAT44((int)param_2[2],(int)param_2[1]);
      local_var_28._0_3_ =
           CONCAT12(*(int8_t *)((int64_t)param_2 + 0xa4),
                    *(int16_t *)((int64_t)param_2 + 0x14));
      lVar4 = *(int64_t *)(param_1 + 0x50) + 0x360;
      local_var_48 = 1;
      lStack_50 = lVar4;
      AcquireSRWLockShared(lVar4);
      function_1e6940(*(uint64_t *)(*(int64_t *)(param_1 + 0x50) + 0x318),stack_array_58,&iStack_38);
      ReleaseSRWLockShared(lVar4);
    }
  }
  else if (*(char *)(lVar4 + 0x358) != '\0') {
    pcVar3 = "";
    if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
      pcVar3 = *(char **)(*param_2 + 0x18);
    }
    iStack_38 = 0x1505;
    cVar2 = *pcVar3;
    while (cVar2 != '\0') {
      pcVar3 = pcVar3 + 1;
      iStack_38 = iStack_38 * 0x21 + (int)cVar2;
      cVar2 = *pcVar3;
    }
    lStack_30 = param_2[1];
    local_var_28 = (int32_t)param_2[2];
    local_var_24 = *(int32_t *)((int64_t)param_2 + 0x14);
    local_var_20 = *(int8_t *)((int64_t)param_2 + 0xa4);
    local_var_1c = (int32_t)param_2[0x14];
    lVar1 = lVar4 + 0x360;
    local_var_48 = 1;
    lStack_50 = lVar1;
    AcquireSRWLockShared(lVar1);
    function_1e1020(lVar4 + 0x328,stack_array_58,&iStack_38);
    ReleaseSRWLockShared(lVar1);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_78);
}
// WARNING: Removing unreachable block (ram,0x0001801d8f73)
// WARNING: Removing unreachable block (ram,0x0001801d8f79)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address