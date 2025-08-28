#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part071.c - 4 个函数

// 函数: void FUN_180103970(longlong *param_1,int8_t param_2)
void FUN_180103970(longlong *param_1,int8_t param_2)

{
  uint64_t uVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plVar4;
  longlong *plStackX_8;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  void *puStack_20;
  void *puStack_18;
  
  uVar1 = SYSTEM_STATE_MANAGER;
  plStackX_8 = param_1;
  uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0xe0,8,3,0xfffffffffffffffe);
  plStackX_8 = &uStack_30;
  uStack_38 = CONCAT31(uStack_38._1_3_,param_2);
  puStack_20 = &unknown_var_1600_ptr;
  puStack_18 = &unknown_var_1584_ptr;
  uStack_40 = (int32_t)uVar1;
  uStack_3c = (int32_t)((ulonglong)uVar1 >> 0x20);
  uStack_30._0_4_ = uStack_40;
  uStack_30._4_4_ = uStack_3c;
  uStack_28 = uStack_38;
  plVar4 = (longlong *)FUN_18006b640(uVar3,&uStack_30);
  plVar2 = plVar4;
  uVar1 = system_context_ptr;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
    uVar1 = system_context_ptr;
    plStackX_8 = plVar4;
    (**(code **)(*plVar4 + 0x28))(plVar4);
    plVar2 = plStackX_8;
  }
  plStackX_8 = plVar2;
  FUN_18005e300(uVar1,&plStackX_8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180103a60(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint64_t *puVar3;
  longlong lVar4;
  void *puVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  bool bVar9;
  float fVar10;
  int8_t auStackX_8 [4];
  int iStackX_c;
  uint64_t uStack_48;
  longlong lStack_40;
  void *puStack_30;
  void *puStack_28;
  uint uStack_20;
  
  puStack_30 = (void *)0x180103a77;
  FUN_18010d9f0(*param_1,*(int32_t *)(*param_1 + 0x8c0));
  puStack_30 = (void *)0x180103a85;
  FUN_18010daf0(*param_1,*(int32_t *)(*param_1 + 0x7e0));
  puStack_30 = (void *)0x180103a93;
  FUN_18010da70(*param_1,*(int32_t *)(*param_1 + 0x850));
  puStack_30 = (void *)0x180103aa1;
  FUN_18010d870(*param_1,*(int32_t *)(*param_1 + 0xa10));
  puStack_30 = (void *)0x180103aaf;
  FUN_18010d870(*param_1,*(int32_t *)(*param_1 + 0xa10));
  if ((char)param_1[1] != '\0') {
    lVar4 = *param_1;
    iVar6 = *(int *)(lVar4 + 0x1d50);
    iVar7 = *(int *)(lVar4 + 0x1dc0);
    if (*(int *)(lVar4 + 0x1ea0) != 2) {
      puStack_30 = (void *)0x180103af0;
      FUN_180171f10(*(uint64_t *)(system_main_module_state + 8),auStackX_8);
      if ((int)_auStackX_8 < iVar6) {
        iVar6 = (int)_auStackX_8;
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
    puStack_30 = &unknown_var_4713_ptr;
    FUN_180062300(system_message_context,&unknown_var_6584_ptr,iVar6,iVar7);
  }
  lVar4 = *param_1;
  if ((*(int *)(lVar4 + 900) != *(int *)(lVar4 + 0x380)) ||
     (*(int *)(lVar4 + 0x3f4) != *(int *)(lVar4 + 0x3f0))) {
    puStack_30 = (void *)0x180103b8a;
    FUN_1800b3a40();
    lVar4 = *param_1;
  }
  if ((*(longlong *)(system_parameter_buffer + 0x7ab8) == 0) || (*(int *)(lVar4 + 0x540) < 1)) {
    bVar9 = *(int *)(lVar4 + 0x2140) != 0;
  }
  else {
    bVar9 = false;
  }
  if ((!bVar9) || (*(int *)(lVar4 + 0x2144) == *(int *)(lVar4 + 0x2140))) {
    if (((*(longlong *)(system_parameter_buffer + 0x7ab8) == 0) || (*(int *)(lVar4 + 0x540) < 1)) &&
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
    puStack_30 = (void *)0x180103c36;
    FUN_18010e430(lVar4,2);
    lVar4 = *param_1;
  }
LAB_180103c39:
  if ((((*(int *)(lVar4 + 0x4d4) != *(int *)(lVar4 + 0x4d0)) ||
       (*(int *)(lVar4 + 0x314) != *(int *)(lVar4 + 0x310))) ||
      (*(float *)(lVar4 + 0x20d0) != *(float *)(lVar4 + 0x20d4))) ||
     ((*(int *)(lVar4 + 0x2144) != *(int *)(lVar4 + 0x2140) ||
      (*(int *)(lVar4 + 0x544) != *(int *)(lVar4 + 0x540))))) {
    puStack_30 = (void *)0x180103c8e;
    FUN_1800a3660(system_message_buffer);
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
  if (-1 < *(int *)(*(longlong *)(core_system_data_memory + 0x2018) + 0x330)) {
    puStack_30 = (void *)0x180103d14;
    FUN_18030f2c0();
  }
  puStack_30 = (void *)0x180103d19;
  FUN_180052ef0();
  puStack_30 = (void *)0x180103d21;
  FUN_1800b0380();
  uVar8 = 0;
  if ((void *)*SYSTEM_STATE_MANAGER == &unknown_var_2016_ptr) {
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
    FUN_1800ba940(&puStack_30);
    iVar6 = uStack_20 + 0x11;
    FUN_1806277c0(&puStack_30,iVar6);
    puVar3 = (uint64_t *)(puStack_28 + uStack_20);
    *puVar3 = 0x635f656e69676e65;
    puVar3[1] = 0x78742e6769666e6f;
    *(int16_t *)(puVar3 + 2) = 0x74;
    uStack_48 = 0;
    lStack_40 = 0;
    puVar5 = &system_buffer_ptr;
    if (puStack_28 != (void *)0x0) {
      puVar5 = puStack_28;
    }
    uStack_20 = iVar6;
    FUN_18062dee0(&uStack_48,puVar5,&system_data_c7ec);
    plVar1 = SYSTEM_STATE_MANAGER;
    if (lStack_40 == 0) {
      uVar8 = 3;
    }
    else {
      cVar2 = (**(code **)(*SYSTEM_STATE_MANAGER + 0x28))(SYSTEM_STATE_MANAGER);
      if (cVar2 != '\0') {
        FUN_1800ae730(plVar1,&uStack_48);
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
    puStack_30 = &unknown_var_3456_ptr;
    if (puStack_28 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180103abc(void)
void FUN_180103abc(void)

{
  longlong lVar1;
  longlong in_RAX;
  longlong *unaff_RBX;
  int iVar2;
  int iVar3;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
  iVar3 = *(int *)(in_RAX + 0x1d50);
  iVar2 = *(int *)(in_RAX + 0x1dc0);
  if (*(int *)(in_RAX + 0x1ea0) != 2) {
    FUN_180171f10(*(uint64_t *)(system_main_module_state + 8),&stack0x00000030);
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
  FUN_180062300(system_message_context,&unknown_var_6584_ptr,iVar3,iVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180103b63(void)

{
  longlong *plVar1;
  char cVar2;
  uint64_t *puVar3;
  longlong lVar4;
  void *puVar5;
  longlong *unaff_RBX;
  uint64_t uVar6;
  bool bVar7;
  float fVar8;
  void *unaff_retaddr;
  uint uStackX_8;
  uint64_t uStack_20;
  longlong lStack_18;
  void *puStack_8;
  
  lVar4 = *unaff_RBX;
  if ((*(int *)(lVar4 + 900) != *(int *)(lVar4 + 0x380)) ||
     (*(int *)(lVar4 + 0x3f4) != *(int *)(lVar4 + 0x3f0))) {
    puStack_8 = (void *)0x180103b8a;
    FUN_1800b3a40();
    lVar4 = *unaff_RBX;
  }
  if ((*(longlong *)(system_parameter_buffer + 0x7ab8) == 0) || (*(int *)(lVar4 + 0x540) < 1)) {
    bVar7 = *(int *)(lVar4 + 0x2140) != 0;
  }
  else {
    bVar7 = false;
  }
  if ((!bVar7) || (*(int *)(lVar4 + 0x2144) == *(int *)(lVar4 + 0x2140))) {
    if (((*(longlong *)(system_parameter_buffer + 0x7ab8) == 0) || (*(int *)(lVar4 + 0x540) < 1)) &&
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
    puStack_8 = (void *)0x180103c36;
    FUN_18010e430(lVar4,2);
    lVar4 = *unaff_RBX;
  }
LAB_180103c39:
  if ((((*(int *)(lVar4 + 0x4d4) != *(int *)(lVar4 + 0x4d0)) ||
       (*(int *)(lVar4 + 0x314) != *(int *)(lVar4 + 0x310))) ||
      (*(float *)(lVar4 + 0x20d0) != *(float *)(lVar4 + 0x20d4))) ||
     ((*(int *)(lVar4 + 0x2144) != *(int *)(lVar4 + 0x2140) ||
      (*(int *)(lVar4 + 0x544) != *(int *)(lVar4 + 0x540))))) {
    puStack_8 = (void *)0x180103c8e;
    FUN_1800a3660(system_message_buffer);
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
  if (-1 < *(int *)(*(longlong *)(core_system_data_memory + 0x2018) + 0x330)) {
    puStack_8 = (void *)0x180103d14;
    FUN_18030f2c0();
  }
  puStack_8 = (void *)0x180103d19;
  FUN_180052ef0();
  puStack_8 = (void *)0x180103d21;
  FUN_1800b0380();
  uVar6 = 0;
  if ((void *)*SYSTEM_STATE_MANAGER == &unknown_var_2016_ptr) {
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
    FUN_1800ba940(&puStack_8);
    FUN_1806277c0(&puStack_8,uStackX_8 + 0x11);
    puVar3 = (uint64_t *)(unaff_retaddr + uStackX_8);
    *puVar3 = 0x635f656e69676e65;
    puVar3[1] = 0x78742e6769666e6f;
    *(int16_t *)(puVar3 + 2) = 0x74;
    uStack_20 = 0;
    lStack_18 = 0;
    puVar5 = &system_buffer_ptr;
    if (unaff_retaddr != (void *)0x0) {
      puVar5 = unaff_retaddr;
    }
    FUN_18062dee0(&uStack_20,puVar5,&system_data_c7ec);
    plVar1 = SYSTEM_STATE_MANAGER;
    if (lStack_18 == 0) {
      uVar6 = 3;
    }
    else {
      cVar2 = (**(code **)(*SYSTEM_STATE_MANAGER + 0x28))(SYSTEM_STATE_MANAGER);
      if (cVar2 != '\0') {
        FUN_1800ae730(plVar1,&uStack_20);
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
    puStack_8 = &unknown_var_3456_ptr;
    if (unaff_retaddr != (void *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180103d30(uint64_t param_1,int param_2)
void FUN_180103d30(uint64_t param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  void *puVar8;
  int iVar9;
  int iVar10;
  int32_t uVar11;
  int32_t auStackX_10 [2];
  
  lVar2 = SYSTEM_STATE_MANAGER;
  FUN_18010cff0(SYSTEM_STATE_MANAGER,0);
  FUN_18010e230(lVar2,2);
  FUN_18010e170(lVar2,2);
  FUN_18010dfb0(lVar2,3);
  FUN_18010def0(lVar2,3);
  FUN_18010e330(lVar2,1);
  FUN_18010e2b0(lVar2,2);
  FUN_18010de30(lVar2,0);
  FUN_18010e430(lVar2,5);
  FUN_18010dd70(lVar2,1);
  FUN_18010dcf0(lVar2,1);
  FUN_18010dc70(lVar2,1);
  FUN_18010dbf0(lVar2,2);
  FUN_18010db70(lVar2,1);
  FUN_18010daf0(lVar2,0);
  FUN_18010da70(lVar2,1);
  FUN_18010d9f0(lVar2,1);
  FUN_18010d970(lVar2,1);
  FUN_18010d8f0(lVar2,1);
  FUN_18010d870(lVar2,1);
  FUN_18010d7f0(lVar2,0);
  FUN_18010d770(lVar2,1);
  FUN_18010d6f0(lVar2,0);
  FUN_18010d670(lVar2,2);
  FUN_18010d5f0(lVar2,2);
  FUN_18010d570(lVar2,1);
  FUN_18010d4f0(lVar2,1);
  FUN_18010d470(lVar2,3);
  FUN_18010d3b0(lVar2,2);
  FUN_18010d2f0(lVar2,1);
  FUN_18010d270(lVar2,0);
  FUN_18010d1f0(lVar2,0);
  FUN_18010d170(lVar2,0);
  FUN_18010d0f0(lVar2,0);
  FUN_18010d070(lVar2,0);
  FUN_18010e0b0(lVar2,0);
  FUN_18010e030(lVar2,0);
  if (param_2 == 1) {
    FUN_18010cf70(lVar2,0x42c80000);
    FUN_18010cef0(lVar2,1);
    uVar11 = 0x42855554;
  }
  else {
    if (param_2 == 3) {
      FUN_18010cf70(lVar2,0x42855554);
      FUN_18010cd70(lVar2,0x42820000);
      FUN_18010cff0(lVar2,2);
      FUN_18010e330(lVar2,3);
      FUN_18010d2f0(lVar2,2);
      FUN_18010e230(lVar2,4);
      FUN_18010e170(lVar2,4);
      FUN_18010dfb0(lVar2,4);
      FUN_18010def0(lVar2,4);
      FUN_18010de30(lVar2,2);
      FUN_18010daf0(lVar2,1);
      FUN_18010d770(lVar2,2);
      FUN_18010d6f0(lVar2,2);
      FUN_18010d570(lVar2,3);
      FUN_18010d470(lVar2,4);
      FUN_18010d3b0(lVar2,4);
      FUN_18010e0b0(lVar2,1);
      FUN_18010e030(lVar2,2);
      goto LAB_180104169;
    }
    if (param_2 != 4) {
      if (param_2 == 7) {
        FUN_18010cff0(lVar2,2);
        FUN_18010e230(lVar2,4);
        FUN_18010e170(lVar2,4);
        FUN_18010dfb0(lVar2,4);
        FUN_18010def0(lVar2,4);
        FUN_18010de30(lVar2,2);
        FUN_18010daf0(lVar2,1);
        FUN_18010d770(lVar2,2);
        FUN_18010d6f0(lVar2,2);
        FUN_18010d470(lVar2,4);
        FUN_18010d3b0(lVar2,4);
        FUN_18010d2f0(lVar2,2);
        FUN_18010e0b0(lVar2,1);
        FUN_18010e030(lVar2,2);
        FUN_18010cf70(lVar2,0x42855554);
        FUN_18010cd70(lVar2,0x42820000);
        FUN_18010e330(lVar2,3);
        FUN_18010d570(lVar2,3);
      }
      goto LAB_180104169;
    }
    FUN_18010cf70(lVar2,0x42840000);
    FUN_18010cef0(lVar2,1);
    uVar11 = 0x42a6aaaa;
  }
  FUN_18010ce70(lVar2,uVar11);
  FUN_18010cdf0(lVar2,0x20);
  FUN_18010cd70(lVar2,0x42820000);
  FUN_18010e430(lVar2,4);
  FUN_18010ccf0(lVar2,2);
  FUN_18010e2b0(lVar2,1);
LAB_180104169:
  lVar1 = *(longlong *)(*(longlong *)(system_main_module_state + 8) + 0x18);
  iVar10 = (int)((*(longlong *)(*(longlong *)(system_main_module_state + 8) + 0x20) - lVar1) / 0x70);
  if ((iVar10 < 2) || (iVar10 <= *(int *)(SYSTEM_STATE_MANAGER + 0x1f10))) {
    iVar10 = GetSystemMetrics(0);
    iVar9 = GetSystemMetrics(1);
  }
  else {
    lVar6 = (longlong)*(int *)(SYSTEM_STATE_MANAGER + 0x1f10) * 0x70;
    uVar4 = *(int *)(lVar6 + 0x60 + lVar1) - *(int *)(lVar6 + 0x58 + lVar1);
    uVar7 = (int)uVar4 >> 0x1f;
    uVar5 = *(int *)(lVar6 + 100 + lVar1) - *(int *)(lVar6 + 0x5c + lVar1);
    iVar10 = (uVar4 ^ uVar7) - uVar7;
    uVar4 = (int)uVar5 >> 0x1f;
    iVar9 = (uVar5 ^ uVar4) - uVar4;
  }
  FUN_18005ca20(lVar2,2);
  FUN_18006b4c0(lVar2,iVar10);
  FUN_18006b440(lVar2,iVar9);
  auStackX_10[0] = 0;
  uVar11 = 0;
  if ((*(longlong *)(lVar2 + 0x1b80) != 0) &&
     (cVar3 = (**(code **)(lVar2 + 0x1b88))(auStackX_10), uVar11 = auStackX_10[0], cVar3 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar8 = &system_buffer_ptr;
      if (*(void **)(lVar2 + 0x1b30) != (void *)0x0) {
        puVar8 = *(void **)(lVar2 + 0x1b30);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar8);
    }
    uVar11 = *(int32_t *)(lVar2 + 0x1b68);
  }
  *(int32_t *)(lVar2 + 0x1b20) = uVar11;
  return;
}



uint64_t FUN_180104290(uint64_t param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int32_t uVar2;
  int iVar3;
  void *puVar4;
  
  iVar3 = *(int *)(param_2 + 0x10);
  if (iVar3 != 0) {
    if ((iVar3 != 0x16) || (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7832_ptr), iVar1 != 0)
       ) {
      if ((iVar3 == 0xe) &&
         (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7880_ptr), iVar1 == 0)) {
        uVar2 = 1;
        if (*(int *)(param_3 + 0x10) != 0) {
          puVar4 = &system_buffer_ptr;
          if (*(void **)(param_3 + 8) != (void *)0x0) {
            puVar4 = *(void **)(param_3 + 8);
          }
          uVar2 = atoi(puVar4);
        }
        FUN_18010e3b0(param_1,uVar2);
        return 1;
      }
      if ((iVar3 == 0x13) &&
         (iVar3 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_7856_ptr), iVar3 == 0)) {
        uVar2 = 1;
        if (*(int *)(param_3 + 0x10) != 0) {
          puVar4 = &system_buffer_ptr;
          if (*(void **)(param_3 + 8) != (void *)0x0) {
            puVar4 = *(void **)(param_3 + 8);
          }
          uVar2 = atoi(puVar4);
        }
        FUN_18010dd70(param_1,uVar2);
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
    FUN_18010e430(param_1,uVar2);
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801043b0(longlong param_1)
void FUN_1801043b0(longlong param_1)

{
  char cVar1;
  int32_t uVar2;
  int32_t uVar3;
  void *puVar4;
  uint uVar5;
  int8_t auStack_1c8 [32];
  int32_t uStack_1a8;
  int32_t uStack_1a4;
  int32_t uStack_1a0;
  uint uStack_19c;
  int32_t auStack_198 [2];
  uint64_t uStack_190;
  void *puStack_188;
  int8_t *puStack_180;
  int32_t uStack_178;
  int8_t auStack_170 [32];
  void *puStack_150;
  int8_t *puStack_148;
  int32_t uStack_140;
  int8_t auStack_138 [32];
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [32];
  void *puStack_e0;
  int8_t *puStack_d8;
  int32_t uStack_d0;
  int8_t auStack_c8 [32];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [32];
  void *puStack_70;
  int8_t *puStack_68;
  int32_t uStack_60;
  int8_t auStack_58 [32];
  ulonglong uStack_38;
  
  uStack_190 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1c8;
  uStack_19c = 0;
  if (*(int *)(param_1 + 0x1b90) < 10) {
    FUN_18010cc70(param_1,10);
  }
  FUN_18010e170(param_1,*(int32_t *)(param_1 + 0x150));
  puStack_188 = &unknown_var_672_ptr;
  puStack_180 = auStack_170;
  auStack_170[0] = 0;
  uStack_178 = 0xb;
  strcpy_s(auStack_170,0x20,&unknown_var_8504_ptr);
  cVar1 = FUN_180051f00(system_main_module_state,&puStack_188);
  puStack_188 = &unknown_var_720_ptr;
  if (cVar1 != '\0') {
    auStack_198[0] = 0;
    uVar2 = 0;
    if ((*(longlong *)(param_1 + 0x1f00) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1f08))(auStack_198), uVar2 = auStack_198[0], cVar1 == '\0')
       ) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1eb0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1eb0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1ee8);
    }
    *(int32_t *)(param_1 + 0x1ea0) = uVar2;
    uStack_1a8 = 0x200;
    uVar2 = 0x200;
    if ((*(longlong *)(param_1 + 0x1db0) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1db8))(&uStack_1a8), uVar2 = uStack_1a8, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1d60) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1d60);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1d98);
    }
    *(int32_t *)(param_1 + 0x1d50) = uVar2;
    uStack_1a4 = 0x200;
    if ((*(longlong *)(param_1 + 0x1e20) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0x1e28))(&uStack_1a4), cVar1 != '\0')) {
      *(int32_t *)(param_1 + 0x1dc0) = uStack_1a4;
    }
    else {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1dd0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1dd0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      *(int32_t *)(param_1 + 0x1dc0) = *(int32_t *)(param_1 + 0x1e08);
    }
    uStack_1a0 = 100;
    uVar2 = 100;
    if ((*(longlong *)(param_1 + 0x1b10) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1b18))(&uStack_1a0), uVar2 = uStack_1a0, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1ac0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1ac0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1af8);
    }
    *(int32_t *)(param_1 + 0x1ab0) = uVar2;
  }
  puStack_150 = &unknown_var_672_ptr;
  puStack_148 = auStack_138;
  auStack_138[0] = 0;
  uStack_140 = 0x14;
  strcpy_s(auStack_138,0x20,&unknown_var_4960_ptr);
  cVar1 = FUN_180051f00(system_main_module_state,&puStack_150);
  puStack_150 = &unknown_var_720_ptr;
  uVar2 = 100;
  if (cVar1 == '\0') {
    puStack_188 = &unknown_var_672_ptr;
    puStack_180 = auStack_170;
    auStack_170[0] = 0;
    uStack_178 = 8;
    strcpy_s(auStack_170,0x20,&unknown_var_4752_ptr);
    cVar1 = FUN_180051f00(system_main_module_state,&puStack_188);
    puStack_188 = &unknown_var_720_ptr;
    if (cVar1 != '\0') {
      uStack_1a8 = 100;
      if ((*(longlong *)(param_1 + 0x1b10) != 0) &&
         (cVar1 = (**(code **)(param_1 + 0x1b18))(&uStack_1a8), uVar2 = uStack_1a8, cVar1 == '\0'))
      {
        if (system_debug_flag == '\0') {
          puVar4 = &system_buffer_ptr;
          if (*(void **)(param_1 + 0x1ac0) != (void *)0x0) {
            puVar4 = *(void **)(param_1 + 0x1ac0);
          }
          FUN_180626f80(&unknown_var_544_ptr,puVar4);
        }
        goto LAB_1801047f5;
      }
      goto LAB_180104808;
    }
  }
  else {
    uStack_1a0 = 1;
    uVar3 = 1;
    if ((*(longlong *)(param_1 + 0x1f00) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1f08))(&uStack_1a0), uVar3 = uStack_1a0, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1eb0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1eb0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      uVar3 = *(int32_t *)(param_1 + 0x1ee8);
    }
    *(int32_t *)(param_1 + 0x1ea0) = uVar3;
    uStack_1a4 = 100;
    if ((*(longlong *)(param_1 + 0x1b10) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0x1b18))(&uStack_1a4), uVar2 = uStack_1a4, cVar1 != '\0')) {
LAB_180104808:
      *(int32_t *)(param_1 + 0x1ab0) = uVar2;
    }
    else if (system_debug_flag == '\0') {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1ac0) != (void *)0x0) {
        puVar4 = *(void **)(param_1 + 0x1ac0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar4);
      *(int32_t *)(param_1 + 0x1ab0) = *(int32_t *)(param_1 + 0x1af8);
    }
    else {
LAB_1801047f5:
      *(int32_t *)(param_1 + 0x1ab0) = *(int32_t *)(param_1 + 0x1af8);
    }
  }
  puStack_70 = &unknown_var_672_ptr;
  puStack_68 = auStack_58;
  auStack_58[0] = 0;
  uStack_60 = 0xc;
  strcpy_s(auStack_58,0x20,&unknown_var_8488_ptr);
  uVar5 = 1;
  uStack_19c = 1;
  cVar1 = FUN_180051f00(system_main_module_state,&puStack_70);
  if (cVar1 == '\0') {
    puStack_a8 = &unknown_var_672_ptr;
    puStack_a0 = auStack_90;
    auStack_90[0] = 0;
    uStack_98 = 8;
    strcpy_s(auStack_90,0x20,&unknown_var_8536_ptr);
    uVar5 = 3;
    uStack_19c = 3;
    cVar1 = FUN_180051f00(system_main_module_state,&puStack_a8);
    if (cVar1 == '\0') {
      puStack_e0 = &unknown_var_672_ptr;
      auStack_c8[0] = 0;
      uStack_d0 = 10;
      puStack_d8 = auStack_c8;
      strcpy_s(auStack_c8,0x20,&unknown_var_8520_ptr);
      uVar5 = 7;
      uStack_19c = 7;
      cVar1 = FUN_180051f00(system_main_module_state,&puStack_e0);
      if (cVar1 == '\0') {
        puStack_118 = &unknown_var_672_ptr;
        puStack_110 = auStack_100;
        auStack_100[0] = 0;
        uStack_108 = 7;
        strcpy_s(auStack_100,0x20,&unknown_var_8576_ptr);
        uVar5 = 0xf;
        uStack_19c = 0xf;
        cVar1 = FUN_180051f00(system_main_module_state,&puStack_118);
        if (cVar1 == '\0') goto LAB_18010497b;
      }
    }
  }
  cVar1 = '\x01';
LAB_18010497b:
  if ((uVar5 & 8) != 0) {
    uStack_19c = uVar5 & 0xfffffff7;
    puStack_118 = &unknown_var_720_ptr;
    uVar5 = uStack_19c;
  }
  if ((uVar5 & 4) != 0) {
    uStack_19c = uVar5 & 0xfffffffb;
    puStack_e0 = &unknown_var_720_ptr;
    uVar5 = uStack_19c;
  }
  if ((uVar5 & 2) != 0) {
    uStack_19c = uVar5 & 0xfffffffd;
    puStack_a8 = &unknown_var_720_ptr;
    uVar5 = uStack_19c;
  }
  if ((uVar5 & 1) != 0) {
    uStack_19c = uVar5 & 0xfffffffe;
    puStack_70 = &unknown_var_720_ptr;
  }
  if (cVar1 != '\0') {
    uStack_1a0 = 1;
    uVar2 = 1;
    if ((*(longlong *)(param_1 + 0x1f00) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1f08))(&uStack_1a0), uVar2 = uStack_1a0, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1eb0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1eb0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1ee8);
    }
    *(int32_t *)(param_1 + 0x1ea0) = uVar2;
    uStack_1a4 = 0x780;
    uVar2 = 0x780;
    if ((*(longlong *)(param_1 + 0x1db0) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1db8))(&uStack_1a4), uVar2 = uStack_1a4, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1d60) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1d60);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1d98);
    }
    *(int32_t *)(param_1 + 0x1d50) = uVar2;
    uStack_1a8 = 0x438;
    uVar2 = 0x438;
    if ((*(longlong *)(param_1 + 0x1e20) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1e28))(&uStack_1a8), uVar2 = uStack_1a8, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1dd0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1dd0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1e08);
    }
    *(int32_t *)(param_1 + 0x1dc0) = uVar2;
  }
  puStack_150 = &unknown_var_672_ptr;
  puStack_148 = auStack_138;
  auStack_138[0] = 0;
  uStack_140 = 8;
  strcpy_s(auStack_138,0x20,&unknown_var_4752_ptr);
  cVar1 = FUN_180051f00(system_main_module_state,&puStack_150);
  puStack_150 = &unknown_var_720_ptr;
  if (cVar1 != '\0') {
    uStack_1a0 = 1;
    if ((*(longlong *)(param_1 + 0x1c60) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0x1c68))(&uStack_1a0), cVar1 != '\0')) {
      *(int32_t *)(param_1 + 0x1c00) = uStack_1a0;
    }
    else {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1c10) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x1c10);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      *(int32_t *)(param_1 + 0x1c00) = *(int32_t *)(param_1 + 0x1c48);
    }
    uStack_1a4 = 0;
    uVar2 = 0;
    if ((*(longlong *)(param_1 + 0x1330) != 0) &&
       (cVar1 = (**(code **)(param_1 + 0x1338))(&uStack_1a4), uVar2 = uStack_1a4, cVar1 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x12e0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0x12e0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      uVar2 = *(int32_t *)(param_1 + 0x1318);
    }
    *(int32_t *)(param_1 + 0x12d0) = uVar2;
    uStack_1a8 = 0;
    if ((*(longlong *)(param_1 + 0xc30) == 0) ||
       (cVar1 = (**(code **)(param_1 + 0xc38))(&uStack_1a8), cVar1 != '\0')) {
      *(int32_t *)(param_1 + 0xbd0) = uStack_1a8;
    }
    else {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0xbe0) != (void *)0x0) {
          puVar4 = *(void **)(param_1 + 0xbe0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      *(int32_t *)(param_1 + 0xbd0) = *(int32_t *)(param_1 + 0xc18);
    }
  }
  FUN_18004caf0(system_main_module_state);
  FUN_1800b0380(param_1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1c8);
}





