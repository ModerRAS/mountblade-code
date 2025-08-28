#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part071.c - 4 个函数
// 函数: void function_103970(int64_t *param_1,int8_t param_2)
void function_103970(int64_t *param_1,int8_t param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  int64_t *plStackX_8;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  void *plocal_var_20;
  void *plocal_var_18;
  uVar1 = SYSTEM_STATE_MANAGER;
  plStackX_8 = param_1;
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,0xfffffffffffffffe);
  plStackX_8 = &local_var_30;
  local_var_38 = CONCAT31(local_var_38._1_3_,param_2);
  plocal_var_20 = &ui_system_data_1600_ptr;
  plocal_var_18 = &ui_system_data_1584_ptr;
  local_var_40 = (int32_t)uVar1;
  local_var_3c = (int32_t)((uint64_t)uVar1 >> 0x20);
  local_var_30._0_4_ = local_var_40;
  local_var_30._4_4_ = local_var_3c;
  local_var_28 = local_var_38;
  plVar4 = (int64_t *)SystemCore_ErrorHandler(uVar3,&local_var_30);
  plVar2 = plVar4;
  uVar1 = system_context_ptr;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
    uVar1 = system_context_ptr;
    plStackX_8 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
    plVar2 = plStackX_8;
  }
  plStackX_8 = plVar2;
  function_05e300(uVar1,&plStackX_8);
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_103a60(int64_t *param_1)
{
  int64_t *plVar1;
  char cVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  void *puVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  bool bVar9;
  float fVar10;
  int8_t astack_special_x_8 [4];
  int iStackX_c;
  uint64_t local_var_48;
  int64_t lStack_40;
  void *plocal_var_30;
  void *plocal_var_28;
  uint local_var_20;
  plocal_var_30 = (void *)0x180103a77;
  function_10d9f0(*param_1,*(int32_t *)(*param_1 + 0x8c0));
  plocal_var_30 = (void *)0x180103a85;
  function_10daf0(*param_1,*(int32_t *)(*param_1 + 0x7e0));
  plocal_var_30 = (void *)0x180103a93;
  function_10da70(*param_1,*(int32_t *)(*param_1 + 0x850));
  plocal_var_30 = (void *)0x180103aa1;
  function_10d870(*param_1,*(int32_t *)(*param_1 + 0xa10));
  plocal_var_30 = (void *)0x180103aaf;
  function_10d870(*param_1,*(int32_t *)(*param_1 + 0xa10));
  if ((char)param_1[1] != '\0') {
    lVar4 = *param_1;
    iVar6 = *(int *)(lVar4 + 0x1d50);
    iVar7 = *(int *)(lVar4 + 0x1dc0);
    if (*(int *)(lVar4 + 0x1ea0) != 2) {
      plocal_var_30 = (void *)0x180103af0;
      function_171f10(*(uint64_t *)(system_main_module_state + 8),astack_special_x_8);
      if ((int)_astack_special_x_8 < iVar6) {
        iVar6 = (int)_astack_special_x_8;
      }
      if (iStackX_c < iVar7) {
        iVar7 = iStackX_c;
      }
    }
    lVar4 = system_main_module_state;
    *(bool *)(system_main_module_state + 0x3d5) = *(int *)(*param_1 + 0x1f14) != *(int *)(*param_1 + 0x1f10);
    *(int *)(lVar4 + 0x3cc) = iVar6;
    *(int *)(lVar4 + 0x3d0) = iVar7;
    *(int8_t *)(lVar4 + 0x3d4) = 1;
    LOCK();
    *(int8_t *)(lVar4 + 0x3c8) = 1;
    UNLOCK();
// WARNING: Subroutine does not return
    plocal_var_30 = &processed_var_4713_ptr;
    SystemParameterHandler(system_message_context,&processed_var_6584_ptr,iVar6,iVar7);
  }
  lVar4 = *param_1;
  if ((*(int *)(lVar4 + 900) != *(int *)(lVar4 + 0x380)) ||
     (*(int *)(lVar4 + 0x3f4) != *(int *)(lVar4 + 0x3f0))) {
    plocal_var_30 = (void *)0x180103b8a;
    function_0b3a40();
    lVar4 = *param_1;
  }
  if ((*(int64_t *)(system_parameter_buffer + 0x7ab8) == 0) || (*(int *)(lVar4 + 0x540) < 1)) {
    bVar9 = *(int *)(lVar4 + 0x2140) != 0;
  }
  else {
    bVar9 = false;
  }
  if ((!bVar9) || (*(int *)(lVar4 + 0x2144) == *(int *)(lVar4 + 0x2140))) {
    if (((*(int64_t *)(system_parameter_buffer + 0x7ab8) == 0) || (*(int *)(lVar4 + 0x540) < 1)) &&
       (*(int *)(lVar4 + 0x2140) == 0)) {
      fVar10 = *(float *)(lVar4 + 0x20d0);
    }
    else {
      fVar10 = 100.0;
    }
    if ((fVar10 == 100.0) || (*(float *)(lVar4 + 0x20d0) == *(float *)(lVar4 + 0x20d4)))
    goto LAB_180103c39;
  }
  if (*(int *)(lVar4 + 0x4d0) == 0) {
    plocal_var_30 = (void *)0x180103c36;
    function_10e430(lVar4,2);
    lVar4 = *param_1;
  }
LAB_180103c39:
  if ((((*(int *)(lVar4 + 0x4d4) != *(int *)(lVar4 + 0x4d0)) ||
       (*(int *)(lVar4 + 0x314) != *(int *)(lVar4 + 0x310))) ||
      (*(float *)(lVar4 + 0x20d0) != *(float *)(lVar4 + 0x20d4))) ||
     ((*(int *)(lVar4 + 0x2144) != *(int *)(lVar4 + 0x2140) ||
      (*(int *)(lVar4 + 0x544) != *(int *)(lVar4 + 0x540))))) {
    plocal_var_30 = (void *)0x180103c8e;
    function_0a3660(system_message_buffer);
    lVar4 = *param_1;
  }
  if (*(int *)(lVar4 + 0x1b94) != *(int *)(lVar4 + 0x1b90)) {
    fVar10 = (float)*(int *)(lVar4 + 0x1b90);
    if (fVar10 <= 0.0) {
      *(float *)(system_main_module_state + 0x200) = 1.0 / (float)(int)SYSTEM_STATE_MANAGER[0x372];
    }
    else {
      *(float *)(system_main_module_state + 0x200) = 1.0 / fVar10;
    }
  }
  if (-1 < *(int *)(*(int64_t *)(core_system_data_memory + 0x2018) + 0x330)) {
    plocal_var_30 = (void *)0x180103d14;
    function_30f2c0();
  }
  plocal_var_30 = (void *)0x180103d19;
  function_052ef0();
  plocal_var_30 = (void *)0x180103d21;
  function_0b0380();
  uVar8 = 0;
  if ((void *)*SYSTEM_STATE_MANAGER == &rendering_buffer_2016_ptr) {
    if ((SYSTEM_STATE_MANAGER[0x16] == 0) && (*(char *)(system_main_module_state + 0x1f0) != '\0')) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
  }
  else {
    cVar2 = (**(code **)((void *)*SYSTEM_STATE_MANAGER + 0x28))();
  }
  if (cVar2 != '\0') {
    function_0ba940(&plocal_var_30);
    iVar6 = local_var_20 + 0x11;
    CoreMemoryPoolProcessor(&plocal_var_30,iVar6);
    puVar3 = (uint64_t *)(plocal_var_28 + local_var_20);
    *puVar3 = 0x635f656e69676e65;
    puVar3[1] = 0x78742e6769666e6f;
    *(int16_t *)(puVar3 + 2) = 0x74;
    local_var_48 = 0;
    lStack_40 = 0;
    puVar5 = &system_buffer_ptr;
    if (plocal_var_28 != (void *)0x0) {
      puVar5 = plocal_var_28;
    }
    local_var_20 = iVar6;
    SystemCore_Validator(&local_var_48,puVar5,&system_data_c7ec);
    plVar1 = SYSTEM_STATE_MANAGER;
    if (lStack_40 == 0) {
      uVar8 = 3;
    }
    else {
      cVar2 = (**(code **)(*SYSTEM_STATE_MANAGER + 0x28))(SYSTEM_STATE_MANAGER);
      if (cVar2 != '\0') {
        function_0ae730(plVar1,&local_var_48);
      }
      if (lStack_40 != 0) {
        fclose();
        lStack_40 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
        uVar8 = 0;
      }
    }
    if (lStack_40 != 0) {
      fclose();
      lStack_40 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
    plocal_var_30 = &system_data_buffer_ptr;
    if (plocal_var_28 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  return uVar8;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_103abc(void)
void function_103abc(void)
{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t *unaff_RBX;
  int iVar2;
  int iVar3;
  int iStack0000000000000030;
  int iStack0000000000000034;
  iVar3 = *(int *)(in_RAX + 0x1d50);
  iVar2 = *(int *)(in_RAX + 0x1dc0);
  if (*(int *)(in_RAX + 0x1ea0) != 2) {
    function_171f10(*(uint64_t *)(system_main_module_state + 8),&local_buffer_00000030);
    if (iStack0000000000000030 < iVar3) {
      iVar3 = iStack0000000000000030;
    }
    if (iStack0000000000000034 < iVar2) {
      iVar2 = iStack0000000000000034;
    }
  }
  lVar1 = system_main_module_state;
  *(bool *)(system_main_module_state + 0x3d5) = *(int *)(*unaff_RBX + 0x1f14) != *(int *)(*unaff_RBX + 0x1f10)
  ;
  *(int *)(lVar1 + 0x3cc) = iVar3;
  *(int *)(lVar1 + 0x3d0) = iVar2;
  *(int8_t *)(lVar1 + 0x3d4) = 1;
  LOCK();
  *(int8_t *)(lVar1 + 0x3c8) = 1;
  UNLOCK();
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&processed_var_6584_ptr,iVar3,iVar2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_103b63(void)
{
  int64_t *plVar1;
  char cVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  void *puVar5;
  int64_t *unaff_RBX;
  uint64_t uVar6;
  bool bVar7;
  float fVar8;
  void *unaff_retaddr;
  uint stack_special_x_8;
  uint64_t local_var_20;
  int64_t lStack_18;
  void *plocal_var_8;
  lVar4 = *unaff_RBX;
  if ((*(int *)(lVar4 + 900) != *(int *)(lVar4 + 0x380)) ||
     (*(int *)(lVar4 + 0x3f4) != *(int *)(lVar4 + 0x3f0))) {
    plocal_var_8 = (void *)0x180103b8a;
    function_0b3a40();
    lVar4 = *unaff_RBX;
  }
  if ((*(int64_t *)(system_parameter_buffer + 0x7ab8) == 0) || (*(int *)(lVar4 + 0x540) < 1)) {
    bVar7 = *(int *)(lVar4 + 0x2140) != 0;
  }
  else {
    bVar7 = false;
  }
  if ((!bVar7) || (*(int *)(lVar4 + 0x2144) == *(int *)(lVar4 + 0x2140))) {
    if (((*(int64_t *)(system_parameter_buffer + 0x7ab8) == 0) || (*(int *)(lVar4 + 0x540) < 1)) &&
       (*(int *)(lVar4 + 0x2140) == 0)) {
      fVar8 = *(float *)(lVar4 + 0x20d0);
    }
    else {
      fVar8 = 100.0;
    }
    if ((fVar8 == 100.0) || (*(float *)(lVar4 + 0x20d0) == *(float *)(lVar4 + 0x20d4)))
    goto LAB_180103c39;
  }
  if (*(int *)(lVar4 + 0x4d0) == 0) {
    plocal_var_8 = (void *)0x180103c36;
    function_10e430(lVar4,2);
    lVar4 = *unaff_RBX;
  }
LAB_180103c39:
  if ((((*(int *)(lVar4 + 0x4d4) != *(int *)(lVar4 + 0x4d0)) ||
       (*(int *)(lVar4 + 0x314) != *(int *)(lVar4 + 0x310))) ||
      (*(float *)(lVar4 + 0x20d0) != *(float *)(lVar4 + 0x20d4))) ||
     ((*(int *)(lVar4 + 0x2144) != *(int *)(lVar4 + 0x2140) ||
      (*(int *)(lVar4 + 0x544) != *(int *)(lVar4 + 0x540))))) {
    plocal_var_8 = (void *)0x180103c8e;
    function_0a3660(system_message_buffer);
    lVar4 = *unaff_RBX;
  }
  if (*(int *)(lVar4 + 0x1b94) != *(int *)(lVar4 + 0x1b90)) {
    fVar8 = (float)*(int *)(lVar4 + 0x1b90);
    if (fVar8 <= 0.0) {
      *(float *)(system_main_module_state + 0x200) = 1.0 / (float)(int)SYSTEM_STATE_MANAGER[0x372];
    }
    else {
      *(float *)(system_main_module_state + 0x200) = 1.0 / fVar8;
    }
  }
  if (-1 < *(int *)(*(int64_t *)(core_system_data_memory + 0x2018) + 0x330)) {
    plocal_var_8 = (void *)0x180103d14;
    function_30f2c0();
  }
  plocal_var_8 = (void *)0x180103d19;
  function_052ef0();
  plocal_var_8 = (void *)0x180103d21;
  function_0b0380();
  uVar6 = 0;
  if ((void *)*SYSTEM_STATE_MANAGER == &rendering_buffer_2016_ptr) {
    if ((SYSTEM_STATE_MANAGER[0x16] == 0) && (*(char *)(system_main_module_state + 0x1f0) != '\0')) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
  }
  else {
    cVar2 = (**(code **)((void *)*SYSTEM_STATE_MANAGER + 0x28))();
  }
  if (cVar2 != '\0') {
    function_0ba940(&plocal_var_8);
    CoreMemoryPoolProcessor(&plocal_var_8,stack_special_x_8 + 0x11);
    puVar3 = (uint64_t *)(unaff_retaddr + stack_special_x_8);
    *puVar3 = 0x635f656e69676e65;
    puVar3[1] = 0x78742e6769666e6f;
    *(int16_t *)(puVar3 + 2) = 0x74;
    local_var_20 = 0;
    lStack_18 = 0;
    puVar5 = &system_buffer_ptr;
    if (unaff_retaddr != (void *)0x0) {
      puVar5 = unaff_retaddr;
    }
    SystemCore_Validator(&local_var_20,puVar5,&system_data_c7ec);
    plVar1 = SYSTEM_STATE_MANAGER;
    if (lStack_18 == 0) {
      uVar6 = 3;
    }
    else {
      cVar2 = (**(code **)(*SYSTEM_STATE_MANAGER + 0x28))(SYSTEM_STATE_MANAGER);
      if (cVar2 != '\0') {
        function_0ae730(plVar1,&local_var_20);
      }
      if (lStack_18 != 0) {
        fclose();
        lStack_18 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
        uVar6 = 0;
      }
    }
    if (lStack_18 != 0) {
      fclose();
      lStack_18 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
    }
    plocal_var_8 = &system_data_buffer_ptr;
    if (unaff_retaddr != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  return uVar6;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_103d30(uint64_t param_1,int param_2)
void function_103d30(uint64_t param_1,int param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int64_t lVar6;
  uint uVar7;
  void *puVar8;
  int iVar9;
  int iVar10;
  int32_t uVar11;
  int32_t astack_special_x_10 [2];
  lVar2 = SYSTEM_STATE_MANAGER;
  function_10cff0(SYSTEM_STATE_MANAGER,0);
  function_10e230(lVar2,2);
  function_10e170(lVar2,2);
  function_10dfb0(lVar2,3);
  function_10def0(lVar2,3);
  function_10e330(lVar2,1);
  function_10e2b0(lVar2,2);
  function_10de30(lVar2,0);
  function_10e430(lVar2,5);
  function_10dd70(lVar2,1);
  function_10dcf0(lVar2,1);
  function_10dc70(lVar2,1);
  function_10dbf0(lVar2,2);
  function_10db70(lVar2,1);
  function_10daf0(lVar2,0);
  function_10da70(lVar2,1);
  function_10d9f0(lVar2,1);
  function_10d970(lVar2,1);
  function_10d8f0(lVar2,1);
  function_10d870(lVar2,1);
  function_10d7f0(lVar2,0);
  function_10d770(lVar2,1);
  function_10d6f0(lVar2,0);
  function_10d670(lVar2,2);
  function_10d5f0(lVar2,2);
  function_10d570(lVar2,1);
  function_10d4f0(lVar2,1);
  function_10d470(lVar2,3);
  function_10d3b0(lVar2,2);
  function_10d2f0(lVar2,1);
  function_10d270(lVar2,0);
  function_10d1f0(lVar2,0);
  function_10d170(lVar2,0);
  function_10d0f0(lVar2,0);
  function_10d070(lVar2,0);
  function_10e0b0(lVar2,0);
  function_10e030(lVar2,0);
  if (param_2 == 1) {
    function_10cf70(lVar2,0x42c80000);
    function_10cef0(lVar2,1);
    uVar11 = 0x42855554;
  }
  else {
    if (param_2 == 3) {
      function_10cf70(lVar2,0x42855554);
      function_10cd70(lVar2,0x42820000);
      function_10cff0(lVar2,2);
      function_10e330(lVar2,3);
      function_10d2f0(lVar2,2);
      function_10e230(lVar2,4);
      function_10e170(lVar2,4);
      function_10dfb0(lVar2,4);
      function_10def0(lVar2,4);
      function_10de30(lVar2,2);
      function_10daf0(lVar2,1);
      function_10d770(lVar2,2);
      function_10d6f0(lVar2,2);
      function_10d570(lVar2,3);
      function_10d470(lVar2,4);
      function_10d3b0(lVar2,4);
      function_10e0b0(lVar2,1);
      function_10e030(lVar2,2);
      goto LAB_180104169;
    }
    if (param_2 != 4) {
      if (param_2 == 7) {
        function_10cff0(lVar2,2);
        function_10e230(lVar2,4);
        function_10e170(lVar2,4);
        function_10dfb0(lVar2,4);
        function_10def0(lVar2,4);
        function_10de30(lVar2,2);
        function_10daf0(lVar2,1);
        function_10d770(lVar2,2);
        function_10d6f0(lVar2,2);
        function_10d470(lVar2,4);
        function_10d3b0(lVar2,4);
        function_10d2f0(lVar2,2);
        function_10e0b0(lVar2,1);
        function_10e030(lVar2,2);
        function_10cf70(lVar2,0x42855554);
        function_10cd70(lVar2,0x42820000);
        function_10e330(lVar2,3);
        function_10d570(lVar2,3);
      }
      goto LAB_180104169;
    }
    function_10cf70(lVar2,0x42840000);
    function_10cef0(lVar2,1);
    uVar11 = 0x42a6aaaa;
  }
  function_10ce70(lVar2,uVar11);
  function_10cdf0(lVar2,0x20);
  function_10cd70(lVar2,0x42820000);
  function_10e430(lVar2,4);
  function_10ccf0(lVar2,2);
  function_10e2b0(lVar2,1);
LAB_180104169:
  lVar1 = *(int64_t *)(*(int64_t *)(system_main_module_state + 8) + 0x18);
  iVar10 = (int)((*(int64_t *)(*(int64_t *)(system_main_module_state + 8) + 0x20) - lVar1) / 0x70);
  if ((iVar10 < 2) || (iVar10 <= *(int *)(SYSTEM_STATE_MANAGER + 0x1f10))) {
    iVar10 = GetSystemMetrics(0);
    iVar9 = GetSystemMetrics(1);
  }
  else {
    lVar6 = (int64_t)*(int *)(SYSTEM_STATE_MANAGER + 0x1f10) * 0x70;
    uVar4 = *(int *)(lVar6 + 0x60 + lVar1) - *(int *)(lVar6 + 0x58 + lVar1);
    uVar7 = (int)uVar4 >> 0x1f;
    uVar5 = *(int *)(lVar6 + 100 + lVar1) - *(int *)(lVar6 + 0x5c + lVar1);
    iVar10 = (uVar4 ^ uVar7) - uVar7;
    uVar4 = (int)uVar5 >> 0x1f;
    iVar9 = (uVar5 ^ uVar4) - uVar4;
  }
  function_05ca20(lVar2,2);
  function_06b4c0(lVar2,iVar10);
  function_06b440(lVar2,iVar9);
  astack_special_x_10[0] = 0;
  uVar11 = 0;
  if ((*(int64_t *)(lVar2 + 0x1b80) != 0) &&
     (cVar3 = (**(code **)(lVar2 + 0x1b88))(astack_special_x_10), uVar11 = astack_special_x_10[0], cVar3 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar8 = &system_buffer_ptr;
      if (*(void **)(lVar2 + 0x1b30) != (void *)0x0) {
        puVar8 = *(void **)(lVar2 + 0x1b30);
      }
      SystemOptimizationProcessor(&processed_var_544_ptr,puVar8);
    }
    uVar11 = *(int32_t *)(lVar2 + 0x1b68);
  }
  *(int32_t *)(lVar2 + 0x1b20) = uVar11;
  return;
}
uint64_t function_104290(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  int iVar1;
  int32_t uVar2;
  int iVar3;
  void *puVar4;
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 != 0) {
    if ((iVar3 != 0x16) || (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_7832_ptr), iVar1 != 0)
       ) {
      if ((iVar3 == 0xe) &&
         (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_7880_ptr), iVar1 == 0)) {
        uVar2 = 1;
        if (*(int *)(param_3 + 0x10) != 0) {
          puVar4 = &system_buffer_ptr;
          if (*(void **)(param_3 + 8) != (void *)0x0) {
            puVar4 = *(void **)(param_3 + 8);
          }
          uVar2 = atoi(puVar4);
        }
        function_10e3b0(param_1,uVar2);
        return 1;
      }
      if ((iVar3 == 0x13) &&
         (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&processed_var_7856_ptr), iVar3 == 0)) {
        uVar2 = 1;
        if (*(int *)(param_3 + 0x10) != 0) {
          puVar4 = &system_buffer_ptr;
          if (*(void **)(param_3 + 8) != (void *)0x0) {
            puVar4 = *(void **)(param_3 + 8);
          }
          uVar2 = atoi(puVar4);
        }
        function_10dd70(param_1,uVar2);
        return 1;
      }
      return 0;
    }
    uVar2 = 1;
    if (*(int *)(param_3 + 0x10) != 0) {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(param_3 + 8) != (void *)0x0) {
        puVar4 = *(void **)(param_3 + 8);
      }
      uVar2 = atoi(puVar4);
    }
    function_10e430(param_1,uVar2);
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1043b0(int64_t param_1)
void function_1043b0(int64_t param_1)
{
  char cVar1;
  int32_t uVar2;
  int32_t uVar3;
  void *puVar4;
  uint uVar5;
  int8_t stack_array_1c8 [32];
  int32_t local_var_1a8;
  int32_t local_var_1a4;
  int32_t local_var_1a0;
  uint local_var_19c;
  int32_t stack_array_198 [2];
  uint64_t local_var_190;
  void *plocal_var_188;
  int8_t *plocal_var_180;
  int32_t local_var_178;
  int8_t stack_array_170 [32];
  void *plocal_var_150;
  int8_t *plocal_var_148;
  int32_t local_var_140;
  int8_t stack_array_138 [32];
  void *plocal_var_118;
  int8_t *plocal_var_110;
  int32_t local_var_108;
  int8_t stack_array_100 [32];
  void *plocal_var_e0;
  int8_t *plocal_var_d8;
  int32_t local_var_d0;
  int8_t stack_array_c8 [32];
  void *plocal_var_a8;
  int8_t *plocal_var_a0;
  int32_t local_var_98;
  int8_t stack_array_90 [32];
  void *plocal_var_70;
  int8_t *plocal_var_68;
  int32_t local_var_60;
  int8_t stack_array_58 [32];
  uint64_t local_var_38;
  local_var_190 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  local_var_19c = 0;
  if (*(int *)(param_1 + 0x1b90) < 10) {
    function_10cc70(param_1,10);
  }
  function_10e170(param_1,*(int32_t *)(param_1 + 0x150));
  plocal_var_188 = &processed_var_672_ptr;
  plocal_var_180 = stack_array_170;
  stack_array_170[0] = 0;
  local_var_178 = 0xb;
  strcpy_s(stack_array_170,0x20,&processed_var_8504_ptr);
  cVar1 = function_051f00(system_main_module_state,&plocal_var_188);
  plocal_var_188 = &system_state_ptr;
  if (cVar1 != '\0') {
    stack_array_198[0] = 0;
    uVar2 = 0;
    if ((*(int64_t *)(param_1 + 0x1f00) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1f08))(stack_array_198), uVar2 = stack_array_198[0], cVar1 == '\0')
       ) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1eb0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1eb0);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1ee8);
    }
    *(int32_t *)(param_1 + 0x1ea0) = uVar2;
    local_var_1a8 = 0x200;
    uVar2 = 0x200;
    if ((*(int64_t *)(param_1 + 0x1db0) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1db8))(&local_var_1a8), uVar2 = local_var_1a8, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1d60) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1d60);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1d98);
    }
    *(int32_t *)(param_1 + 0x1d50) = uVar2;
    local_var_1a4 = 0x200;
    if ((*(int64_t *)(param_1 + 0x1e20) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0x1e28))(&local_var_1a4), cVar1 != '\0')) {
      *(int32_t *)(param_1 + 0x1dc0) = local_var_1a4;
    }
    else {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1dd0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1dd0);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      *(int32_t *)(param_1 + 0x1dc0) = *(int32_t *)(param_1 + 0x1e08);
    }
    local_var_1a0 = 100;
    uVar2 = 100;
    if ((*(int64_t *)(param_1 + 0x1b10) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1b18))(&local_var_1a0), uVar2 = local_var_1a0, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1ac0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1ac0);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1af8);
    }
    *(int32_t *)(param_1 + 0x1ab0) = uVar2;
  }
  plocal_var_150 = &processed_var_672_ptr;
  plocal_var_148 = stack_array_138;
  stack_array_138[0] = 0;
  local_var_140 = 0x14;
  strcpy_s(stack_array_138,0x20,&processed_var_4960_ptr);
  cVar1 = function_051f00(system_main_module_state,&plocal_var_150);
  plocal_var_150 = &system_state_ptr;
  uVar2 = 100;
  if (cVar1 == '\0') {
    plocal_var_188 = &processed_var_672_ptr;
    plocal_var_180 = stack_array_170;
    stack_array_170[0] = 0;
    local_var_178 = 8;
    strcpy_s(stack_array_170,0x20,&processed_var_4752_ptr);
    cVar1 = function_051f00(system_main_module_state,&plocal_var_188);
    plocal_var_188 = &system_state_ptr;
    if (cVar1 != '\0') {
      local_var_1a8 = 100;
      if ((*(int64_t *)(param_1 + 0x1b10) != 0) &&
         (cVar1 = (**(code **)(param_1 + 0x1b18))(&local_var_1a8), uVar2 = local_var_1a8, cVar1 == '\0'))
      {
        if (system_debug_flag == '\0') {
          puVar4 = &system_buffer_ptr;
          if (*(void **)(param_1 + 0x1ac0) != (void *)0x0) {
            puVar4 = *(void **)(param_1 + 0x1ac0);
          }
          SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
        }
        goto LAB_1801047f5;
      }
      goto LAB_180104808;
    }
  }
  else {
    local_var_1a0 = 1;
    uVar3 = 1;
    if ((*(int64_t *)(param_1 + 0x1f00) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1f08))(&local_var_1a0), uVar3 = local_var_1a0, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1eb0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1eb0);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      uVar3 = *(int32_t *)(param_1 + 0x1ee8);
    }
    *(int32_t *)(param_1 + 0x1ea0) = uVar3;
    local_var_1a4 = 100;
    if ((*(int64_t *)(param_1 + 0x1b10) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0x1b18))(&local_var_1a4), uVar2 = local_var_1a4, cVar1 != '\0')) {
LAB_180104808:
      *(int32_t *)(param_1 + 0x1ab0) = uVar2;
    }
    else if (system_debug_flag == '\0') {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1ac0) != (void *)0x0) {
        puVar4 = *(void **)(param_1 + 0x1ac0);
      }
      SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      *(int32_t *)(param_1 + 0x1ab0) = *(int32_t *)(param_1 + 0x1af8);
    }
    else {
LAB_1801047f5:
      *(int32_t *)(param_1 + 0x1ab0) = *(int32_t *)(param_1 + 0x1af8);
    }
  }
  plocal_var_70 = &processed_var_672_ptr;
  plocal_var_68 = stack_array_58;
  stack_array_58[0] = 0;
  local_var_60 = 0xc;
  strcpy_s(stack_array_58,0x20,&processed_var_8488_ptr);
  uVar5 = 1;
  local_var_19c = 1;
  cVar1 = function_051f00(system_main_module_state,&plocal_var_70);
  if (cVar1 == '\0') {
    plocal_var_a8 = &processed_var_672_ptr;
    plocal_var_a0 = stack_array_90;
    stack_array_90[0] = 0;
    local_var_98 = 8;
    strcpy_s(stack_array_90,0x20,&processed_var_8536_ptr);
    uVar5 = 3;
    local_var_19c = 3;
    cVar1 = function_051f00(system_main_module_state,&plocal_var_a8);
    if (cVar1 == '\0') {
      plocal_var_e0 = &processed_var_672_ptr;
      stack_array_c8[0] = 0;
      local_var_d0 = 10;
      plocal_var_d8 = stack_array_c8;
      strcpy_s(stack_array_c8,0x20,&processed_var_8520_ptr);
      uVar5 = 7;
      local_var_19c = 7;
      cVar1 = function_051f00(system_main_module_state,&plocal_var_e0);
      if (cVar1 == '\0') {
        plocal_var_118 = &processed_var_672_ptr;
        plocal_var_110 = stack_array_100;
        stack_array_100[0] = 0;
        local_var_108 = 7;
        strcpy_s(stack_array_100,0x20,&processed_var_8576_ptr);
        uVar5 = 0xf;
        local_var_19c = 0xf;
        cVar1 = function_051f00(system_main_module_state,&plocal_var_118);
        if (cVar1 == '\0') goto LAB_18010497b;
      }
    }
  }
  cVar1 = '\x01';
LAB_18010497b:
  if ((uVar5 & 8) != 0) {
    local_var_19c = uVar5 & 0xfffffff7;
    plocal_var_118 = &system_state_ptr;
    uVar5 = local_var_19c;
  }
  if ((uVar5 & 4) != 0) {
    local_var_19c = uVar5 & 0xfffffffb;
    plocal_var_e0 = &system_state_ptr;
    uVar5 = local_var_19c;
  }
  if ((uVar5 & 2) != 0) {
    local_var_19c = uVar5 & 0xfffffffd;
    plocal_var_a8 = &system_state_ptr;
    uVar5 = local_var_19c;
  }
  if ((uVar5 & 1) != 0) {
    local_var_19c = uVar5 & 0xfffffffe;
    plocal_var_70 = &system_state_ptr;
  }
  if (cVar1 != '\0') {
    local_var_1a0 = 1;
    uVar2 = 1;
    if ((*(int64_t *)(param_1 + 0x1f00) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1f08))(&local_var_1a0), uVar2 = local_var_1a0, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1eb0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1eb0);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1ee8);
    }
    *(int32_t *)(param_1 + 0x1ea0) = uVar2;
    local_var_1a4 = 0x780;
    uVar2 = 0x780;
    if ((*(int64_t *)(param_1 + 0x1db0) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1db8))(&local_var_1a4), uVar2 = local_var_1a4, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1d60) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1d60);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1d98);
    }
    *(int32_t *)(param_1 + 0x1d50) = uVar2;
    local_var_1a8 = 0x438;
    uVar2 = 0x438;
    if ((*(int64_t *)(param_1 + 0x1e20) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1e28))(&local_var_1a8), uVar2 = local_var_1a8, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1dd0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1dd0);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1e08);
    }
    *(int32_t *)(param_1 + 0x1dc0) = uVar2;
  }
  plocal_var_150 = &processed_var_672_ptr;
  plocal_var_148 = stack_array_138;
  stack_array_138[0] = 0;
  local_var_140 = 8;
  strcpy_s(stack_array_138,0x20,&processed_var_4752_ptr);
  cVar1 = function_051f00(system_main_module_state,&plocal_var_150);
  plocal_var_150 = &system_state_ptr;
  if (cVar1 != '\0') {
    local_var_1a0 = 1;
    if ((*(int64_t *)(param_1 + 0x1c60) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0x1c68))(&local_var_1a0), cVar1 != '\0')) {
      *(int32_t *)(param_1 + 0x1c00) = local_var_1a0;
    }
    else {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1c10) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1c10);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      *(int32_t *)(param_1 + 0x1c00) = *(int32_t *)(param_1 + 0x1c48);
    }
    local_var_1a4 = 0;
    uVar2 = 0;
    if ((*(int64_t *)(param_1 + 0x1330) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1338))(&local_var_1a4), uVar2 = local_var_1a4, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x12e0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x12e0);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1318);
    }
    *(int32_t *)(param_1 + 0x12d0) = uVar2;
    local_var_1a8 = 0;
    if ((*(int64_t *)(param_1 + 0xc30) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0xc38))(&local_var_1a8), cVar1 != '\0')) {
      *(int32_t *)(param_1 + 0xbd0) = local_var_1a8;
    }
    else {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0xbe0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0xbe0);
        }
        SystemOptimizationProcessor(&processed_var_544_ptr,puVar4);
      }
      *(int32_t *)(param_1 + 0xbd0) = *(int32_t *)(param_1 + 0xc18);
    }
  }
  function_04caf0(system_main_module_state);
  function_0b0380(param_1);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_1c8);
}