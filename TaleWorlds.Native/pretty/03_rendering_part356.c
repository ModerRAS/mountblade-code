#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part356.c - 24 个函数

// 函数: void FUN_18045e4f0(int64_t *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void FUN_18045e4f0(int64_t *param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)

{
  int64_t lVar1;
  uint64_t *puVar2;
  code *pcVar3;
  uint uVar4;
  int64_t *plVar5;
  void *puVar6;
  uint64_t uVar7;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  void *puStack_60;
  int8_t *puStack_58;
  uint uStack_50;
  uint64_t uStack_48;
  
  lVar1 = *(int64_t *)(system_main_module_state + 8);
  puStack_60 = &system_data_buffer_ptr;
  uStack_48 = 0;
  puStack_58 = (int8_t *)0x0;
  uStack_50 = 0;
  plStackX_8 = param_1;
  FUN_1806277c0(&puStack_60,render_system_config_memory,param_3,param_4,0xfffffffffffffffe);
  if (0 < render_system_config_memory) {
    puVar6 = &system_buffer_ptr;
    if (render_system_config_memory != (void *)0x0) {
      puVar6 = render_system_config_memory;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_58,puVar6,(int64_t)(render_system_config_memory + 1));
  }
  if (render_system_config_memory != (void *)0x0) {
    uStack_50 = 0;
    if (puStack_58 != (int8_t *)0x0) {
      *puStack_58 = 0;
    }
  }
  plVar5 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x48,8,3);
  *plVar5 = (int64_t)&system_handler1_ptr;
  *plVar5 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar5 + 1) = 0;
  *plVar5 = (int64_t)&unknown_var_1000_ptr;
  LOCK();
  *(int8_t *)(plVar5 + 2) = 0;
  UNLOCK();
  plVar5[3] = -1;
  *plVar5 = (int64_t)&unknown_var_2640_ptr;
  *(int32_t *)(plVar5 + 5) = 0xd;
  plVar5[4] = lVar1;
  pplStackX_10 = (int64_t **)plVar5;
  plStackX_18 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  uVar4 = uStack_50;
  uVar7 = (uint64_t)uStack_50;
  if (puStack_58 != (int8_t *)0x0) {
    FUN_1806277c0(lVar1 + 0x148,uVar7);
  }
  if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(lVar1 + 0x150),puStack_58,uVar7);
  }
  *(int32_t *)(lVar1 + 0x158) = 0;
  if (*(int64_t *)(lVar1 + 0x150) != 0) {
    *(int8_t *)(uVar7 + *(int64_t *)(lVar1 + 0x150)) = 0;
  }
  *(int32_t *)(lVar1 + 0x164) = uStack_48._4_4_;
  puVar2 = *(uint64_t **)(lVar1 + 0x140);
  pcVar3 = *(code **)*puVar2;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5,puStack_58);
  (*pcVar3)(puVar2,&plStackX_8);
  (**(code **)(*plVar5 + 0x38))(plVar5);
  puStack_60 = &system_data_buffer_ptr;
  if (puStack_58 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18045e710(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  void *puStack_50;
  int64_t lStack_48;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_18;
  
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_1800533d0();
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_28 = 0;
  uStack_18 = 0;
  puStack_30 = &system_state_ptr;
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_50);
  puStack_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18045e7d0(void)

{
  int32_t uVar1;
  uint64_t in_R9;
  void *puStack_30;
  int32_t *puStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &system_data_buffer_ptr;
  uStack_18 = 0;
  puStack_28 = (int32_t *)0x0;
  uStack_20 = 0;
  puStack_28 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x1e,0x13,in_R9,0xfffffffffffffffe);
  *(int8_t *)puStack_28 = 0;
  uVar1 = FUN_18064e990(puStack_28);
  uStack_18 = CONCAT44(uStack_18._4_4_,uVar1);
  *puStack_28 = 0x6e756f4d;
  puStack_28[1] = 0x6e612074;
  puStack_28[2] = 0x6c422064;
  puStack_28[3] = 0x20656461;
  *(uint64_t *)(puStack_28 + 4) = 0x656e6e6142204949;
  puStack_28[6] = 0x726f6c72;
  *(int16_t *)(puStack_28 + 7) = 100;
  uStack_20 = 0x1d;
  uVar1 = (**(code **)(*system_cache_buffer + 0x70))(system_cache_buffer,&puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (puStack_28 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045e8d0(void)
void FUN_18045e8d0(void)

{
  if ((render_system_memory != (uint64_t *)0x0) && ((void *)*render_system_memory != &unknown_var_1744_ptr)) {
    (**(code **)((void *)*render_system_memory + 0x20))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045e970(uint64_t param_1)
void FUN_18045e970(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int32_t uVar3;
  void *puVar4;
  int32_t auStackX_8 [8];
  
  if ((char)param_1 != '\0') {
    FUN_1801ec6a0(param_1,0);
    lVar1 = system_module_state;
    auStackX_8[0] = 1;
    uVar3 = 1;
    if ((*(int64_t *)(system_module_state + 0x6f0) != 0) &&
       (cVar2 = (**(code **)(system_module_state + 0x6f8))(auStackX_8), uVar3 = auStackX_8[0],
       cVar2 == '\0')) {
      if (system_debug_flag == '\0') {
        puVar4 = &system_buffer_ptr;
        if (*(void **)(lVar1 + 0x6a0) != (void *)0x0) {
          puVar4 = *(void **)(lVar1 + 0x6a0);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar4);
      }
      *(int32_t *)(lVar1 + 0x690) = *(int32_t *)(lVar1 + 0x6d8);
      return;
    }
    *(int32_t *)(lVar1 + 0x690) = uVar3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045e97e(void)
void FUN_18045e97e(void)

{
  int64_t lVar1;
  char cVar2;
  int32_t uVar3;
  void *puVar4;
  int32_t in_stack_00000030;
  
  FUN_1801ec6a0();
  lVar1 = system_module_state;
  in_stack_00000030 = 1;
  uVar3 = 1;
  if ((*(int64_t *)(system_module_state + 0x6f0) != 0) &&
     (cVar2 = (**(code **)(system_module_state + 0x6f8))(&stack0x00000030), uVar3 = in_stack_00000030,
     cVar2 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x6a0) != (void *)0x0) {
        puVar4 = *(void **)(lVar1 + 0x6a0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar4);
    }
    *(int32_t *)(lVar1 + 0x690) = *(int32_t *)(lVar1 + 0x6d8);
    return;
  }
  *(int32_t *)(lVar1 + 0x690) = uVar3;
  return;
}





// 函数: void FUN_18045e9f7(void)
void FUN_18045e9f7(void)

{
  int64_t unaff_RBX;
  int32_t in_stack_00000030;
  
  *(int32_t *)(unaff_RBX + 0x690) = in_stack_00000030;
  return;
}





// 函数: void FUN_18045ea06(void)
void FUN_18045ea06(void)

{
  return;
}





// 函数: void FUN_18045ea10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045ea10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_30;
  int64_t lStack_28;
  
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045ea80(byte param_1)
void FUN_18045ea80(byte param_1)

{
  uint64_t *puVar1;
  
  puVar1 = system_message_buffer;
  if (*(uint *)((int64_t)system_message_buffer + 0x1d5c) != (uint)param_1) {
    *(uint *)((int64_t)system_message_buffer + 0x1d5c) = (uint)param_1;
    if ((void *)*puVar1 != &unknown_var_6752_ptr) {
      (**(code **)((void *)*puVar1 + 0x58))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045eac0(void)
void FUN_18045eac0(void)

{
  int32_t *puVar1;
  int32_t *puVar2;
  uint64_t in_R9;
  
  puVar1 = (int32_t *)
           FUN_18062b420(system_memory_pool_ptr,0x10,0x13,in_R9,0xfffffffffffffffe,&system_data_buffer_ptr,0,0,0);
  *(int8_t *)puVar1 = 0;
  FUN_18064e990(puVar1);
  *puVar1 = 0x752d6e65;
  *(int16_t *)(puVar1 + 1) = 0x73;
  puVar2 = (int32_t *)&system_buffer_ptr;
  if (puVar1 != (int32_t *)0x0) {
    puVar2 = puVar1;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&unknown_var_944_ptr,puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_18045ebe0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puStack_28;
  int64_t lStack_20;
  
  if (*(int64_t *)(system_message_buffer + 8) != 0) {
    FUN_180627910(&puStack_28,param_1,param_3,param_4,0,0xfffffffffffffffe);
    puStack_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return 0xffffffff;
}



int32_t FUN_18045ec90(void)

{
  int32_t uVar1;
  
  uVar1 = _Thrd_id();
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045ecc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045ecc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  code *pcVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *puStack_b8;
  int64_t lStack_b0;
  int32_t uStack_a0;
  void *puStack_98;
  int64_t lStack_90;
  int32_t uStack_80;
  void *puStack_78;
  int64_t lStack_70;
  int32_t uStack_60;
  void *puStack_58;
  int64_t lStack_50;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  plVar1 = *(int64_t **)(render_system_data_memory + 0x18);
  if (plVar1 != (int64_t *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
    uVar3 = FUN_180627910(&puStack_58,param_4);
    uVar4 = FUN_180627910(&puStack_78,param_3);
    uVar5 = FUN_180627910(&puStack_98,param_2);
    uVar6 = FUN_180627910(&puStack_b8,param_1);
    (*pcVar2)(plVar1,uVar6,uVar5,uVar4,uVar3);
    puStack_b8 = &system_data_buffer_ptr;
    if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_b0 = 0;
    uStack_a0 = 0;
    puStack_b8 = &system_state_ptr;
    puStack_98 = &system_data_buffer_ptr;
    if (lStack_90 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_90 = 0;
    uStack_80 = 0;
    puStack_98 = &system_state_ptr;
    puStack_78 = &system_data_buffer_ptr;
    if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_70 = 0;
    uStack_60 = 0;
    puStack_78 = &system_state_ptr;
    puStack_58 = &system_data_buffer_ptr;
    if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045ee30(int32_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045ee30(int32_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t auStackX_18 [2];
  int32_t uStack_38;
  int64_t lStack_28;
  uint64_t *puStack_20;
  void *puStack_18;
  void *puStack_10;
  
  lStack_28 = render_system_data_memory + 8;
  puStack_20 = auStackX_18;
  puStack_18 = &unknown_var_4816_ptr;
  puStack_10 = &unknown_var_4784_ptr;
  uStack_38 = (int32_t)lStack_28;
  auStackX_18[0] = param_3;
  FUN_18015b810(uStack_38,param_1,param_2,param_4,0xffffffffffffffff,&lStack_28,0xfffffffffffffffe,
                &lStack_28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045eeb0(int32_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045eeb0(int32_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t auStackX_18 [2];
  int32_t uStack_38;
  int64_t lStack_28;
  uint64_t *puStack_20;
  void *puStack_18;
  void *puStack_10;
  
  lStack_28 = render_system_data_memory + 8;
  puStack_20 = auStackX_18;
  puStack_18 = &unknown_var_4720_ptr;
  puStack_10 = &unknown_var_4688_ptr;
  uStack_38 = (int32_t)lStack_28;
  auStackX_18[0] = param_3;
  FUN_18015b810(uStack_38,param_1,param_2,param_4,0xffffffffffffffff,&lStack_28,0xfffffffffffffffe,
                &lStack_28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045ef30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045ef30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_18;
  
  uVar1 = FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  lVar2 = FUN_1800b6de0(system_resource_state,uVar1,0);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uVar6 = 0;
  lStack_28 = 0;
  uStack_18 = 0;
  puStack_30 = &system_state_ptr;
  if ((lVar2 != 0) &&
     (lVar4 = *(int64_t *)(lVar2 + 0x38), *(int64_t *)(lVar2 + 0x40) - lVar4 >> 4 != 0)) {
    uVar3 = 0;
    uVar7 = uVar6;
    do {
      if ((*(byte *)(uVar7 + 8 + lVar4) & 1) != 0) {
        FUN_1801eeb30(uVar3,*(uint64_t *)(uVar7 + lVar4));
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      uVar7 = uVar7 + 0x10;
      lVar4 = *(int64_t *)(lVar2 + 0x38);
      uVar3 = *(int64_t *)(lVar2 + 0x40) - lVar4 >> 4;
    } while ((uint64_t)(int64_t)(int)uVar5 < uVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18045f000(void)

{
  uint64_t uVar1;
  int32_t auStackX_8 [2];
  int8_t auStackX_10 [8];
  int8_t auStackX_18 [8];
  int64_t **pplStackX_20;
  int32_t uStack_38;
  int32_t uStack_34;
  int64_t *aplStack_30 [2];
  code *pcStack_20;
  code *pcStack_18;
  
  uVar1 = render_system_data_memory;
  pplStackX_20 = aplStack_30;
  pcStack_20 = FUN_180207bb0;
  pcStack_18 = FUN_180207a20;
  aplStack_30[0] = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe)
  ;
  *aplStack_30[0] = (int64_t)auStackX_8;
  aplStack_30[0][1] = (int64_t)auStackX_10;
  uStack_38 = (int32_t)uVar1;
  uStack_34 = (int32_t)((uint64_t)uVar1 >> 0x20);
  aplStack_30[0][2] = (int64_t)auStackX_18;
  *(int32_t *)(aplStack_30[0] + 3) = uStack_38;
  *(int32_t *)((int64_t)aplStack_30[0] + 0x1c) = uStack_34;
  FUN_18005c650(aplStack_30);
  return auStackX_8[0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_18045f0a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  void *puStack_30;
  int64_t lStack_28;
  int32_t uStack_20;
  uint64_t uStack_18;
  
  puStack_30 = &system_data_buffer_ptr;
  uStack_18 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  uVar1 = (**(code **)(*system_cache_buffer + 0x78))
                    (system_cache_buffer,&puStack_30,param_3,param_4,0xfffffffffffffffe);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_18045f260(int32_t *param_1)

{
  int32_t uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar4 = 0xfffffffffffffffe;
  plVar2 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x108,8,3,0xfffffffffffffffe);
  FUN_180244190(plVar2);
  *plVar2 = (int64_t)&unknown_var_8280_ptr;
  lVar3 = 0;
  plVar2[0x1f] = 0;
  plVar2[0x20] = 0;
  *(int32_t *)(plVar2 + 0x1a) = 0xff000000;
  if ((system_data_2846 == '\0') && (system_data_2847 == '\0')) {
    uVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x378,8,3,uVar4);
    lVar3 = FUN_1800fd120(uVar4);
  }
  plVar2[0x1e] = lVar3;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_20 = SUB84(plVar2,0);
  uStack_1c = (int32_t)((uint64_t)plVar2 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045f350(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)
void FUN_18045f350(int64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *puVar3;
  int8_t auStack_418 [32];
  void *puStack_3f8;
  void *puStack_3f0;
  int32_t uStack_3e8;
  int32_t uStack_3e0;
  void *puStack_3d8;
  void *puStack_3d0;
  int32_t uStack_3c8;
  int32_t uStack_3c0;
  uint64_t uStack_3b8;
  void **ppuStack_3b0;
  void **ppuStack_3a8;
  void **ppuStack_3a0;
  void **ppuStack_398;
  void *puStack_390;
  int8_t *puStack_388;
  int32_t uStack_380;
  int8_t auStack_378 [256];
  void *puStack_278;
  int8_t *puStack_270;
  int32_t uStack_268;
  int8_t auStack_260 [520];
  uint64_t uStack_58;
  
  uStack_3b8 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_418;
  FUN_180627910(&puStack_3d8);
  lVar2 = FUN_180624440(&puStack_278,&puStack_3d8);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(lVar2 + 8);
  }
  (**(code **)(puStack_3d8 + 0x10))(&puStack_3d8,puVar3);
  puStack_278 = &system_state_ptr;
  FUN_180627910(&puStack_3f8,param_3);
  lVar2 = FUN_180624440(&puStack_278,&puStack_3f8);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(lVar2 + 8);
  }
  (**(code **)(puStack_3f8 + 0x10))(&puStack_3f8,puVar3);
  puStack_278 = &system_state_ptr;
  if (param_1 != 0) {
    ppuStack_3b0 = &puStack_278;
    puStack_278 = &unknown_var_2008_ptr;
    puStack_270 = auStack_260;
    auStack_260[0] = 0;
    uStack_268 = uStack_3e8;
    puVar3 = &system_buffer_ptr;
    if (puStack_3f0 != (void *)0x0) {
      puVar3 = puStack_3f0;
    }
    strcpy_s(auStack_260,0x100,puVar3);
    ppuStack_3a8 = &puStack_278;
    ppuStack_3a0 = &puStack_390;
    puStack_390 = &unknown_var_2008_ptr;
    puStack_388 = auStack_378;
    auStack_378[0] = 0;
    uStack_380 = uStack_3c8;
    puVar3 = &system_buffer_ptr;
    if (puStack_3d0 != (void *)0x0) {
      puVar3 = puStack_3d0;
    }
    strcpy_s(auStack_378,0x100,puVar3);
    ppuStack_398 = &puStack_390;
    plVar1 = *(int64_t **)(param_1 + 0xf0);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,&puStack_390,&puStack_278,param_4);
    }
    puStack_390 = &system_state_ptr;
  }
  puStack_3f8 = &system_data_buffer_ptr;
  if (puStack_3f0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_3f0 = (void *)0x0;
  uStack_3e0 = 0;
  puStack_3f8 = &system_state_ptr;
  puStack_3d8 = &system_data_buffer_ptr;
  if (puStack_3d0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_3d0 = (void *)0x0;
  uStack_3c0 = 0;
  puStack_3d8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_418);
}





// 函数: void FUN_18045f5a0(int64_t param_1)
void FUN_18045f5a0(int64_t param_1)

{
  uint64_t *puVar1;
  char cVar2;
  
  if ((param_1 != 0) && (puVar1 = *(uint64_t **)(param_1 + 0xf0), puVar1 != (uint64_t *)0x0)) {
    if ((void *)*puVar1 == &unknown_var_7560_ptr) {
      *(uint *)(puVar1 + 0x24) = *(uint *)(puVar1 + 0x24) & 0xfffffffd;
      if (((int64_t *)puVar1[0x4c] != (int64_t *)0x0) &&
         (cVar2 = (**(code **)(*(int64_t *)puVar1[0x4c] + 0x80))(), cVar2 != '\0')) {
                    // WARNING: Could not recover jumptable at 0x00018045f600. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*(int64_t *)puVar1[0x4c] + 0x68))();
        return;
      }
    }
    else {
      (**(code **)((void *)*puVar1 + 0x20))(puVar1);
    }
  }
  return;
}





// 函数: void FUN_18045f5a9(int64_t param_1)
void FUN_18045f5a9(int64_t param_1)

{
  uint64_t *puVar1;
  char cVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0xf0);
  if (puVar1 != (uint64_t *)0x0) {
    if ((void *)*puVar1 == &unknown_var_7560_ptr) {
      *(uint *)(puVar1 + 0x24) = *(uint *)(puVar1 + 0x24) & 0xfffffffd;
      if ((int64_t *)puVar1[0x4c] != (int64_t *)0x0) {
        cVar2 = (**(code **)(*(int64_t *)puVar1[0x4c] + 0x80))();
        if (cVar2 != '\0') {
                    // WARNING: Could not recover jumptable at 0x00018045f600. Too many branches
                    // WARNING: Treating indirect jump as call
          (**(code **)(*(int64_t *)puVar1[0x4c] + 0x68))();
          return;
        }
      }
    }
    else {
      (**(code **)((void *)*puVar1 + 0x20))(puVar1);
    }
  }
  return;
}





// 函数: void FUN_18045f604(void)
void FUN_18045f604(void)

{
  return;
}





// 函数: void FUN_18045f609(void)
void FUN_18045f609(void)

{
  return;
}





// 函数: void FUN_18045f60e(uint64_t param_1,code *param_2)
void FUN_18045f60e(uint64_t param_1,code *param_2)

{
  (*param_2)();
  return;
}



bool FUN_18045f620(int64_t param_1)

{
  uint64_t *puVar1;
  char cVar2;
  
  if (param_1 == 0) {
    return true;
  }
  puVar1 = *(uint64_t **)(param_1 + 0xf0);
  if (puVar1 != (uint64_t *)0x0) {
    if ((void *)*puVar1 == &unknown_var_7560_ptr) {
      return (*(uint *)(puVar1 + 0x24) >> 1 & 1) == 0;
    }
    cVar2 = (**(code **)((void *)*puVar1 + 0x18))();
    return cVar2 == '\0';
  }
  return true;
}





// 函数: void FUN_18045f750(int64_t param_1,int64_t *param_2)
void FUN_18045f750(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(int64_t **)(param_1 + 0x38);
  *(int64_t **)(param_1 + 0x38) = param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}





// 函数: void FUN_18045f820(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045f820(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int64_t lVar2;
  void *puVar3;
  uint64_t uVar4;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = FUN_180627910(&puStack_30);
  pcVar1 = *(code **)(*(int64_t *)(param_1 + 0x88) + 0x10);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(lVar2 + 8);
  }
  (*pcVar1)((int64_t *)(param_1 + 0x88),puVar3,pcVar1,param_4,uVar4);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18045f8a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18045f8a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  int64_t lVar2;
  void *puVar3;
  uint64_t uVar4;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = FUN_180627910(&puStack_30);
  pcVar1 = *(code **)(*(int64_t *)(param_1 + 0xa8) + 0x10);
  puVar3 = &system_buffer_ptr;
  if (*(void **)(lVar2 + 8) != (void *)0x0) {
    puVar3 = *(void **)(lVar2 + 8);
  }
  (*pcVar1)((int64_t *)(param_1 + 0xa8),puVar3,pcVar1,param_4,uVar4);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18045f920(uint64_t *param_1,int64_t param_2)
void FUN_18045f920(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int8_t auStack_118 [32];
  int64_t *plStack_f8;
  int64_t *plStack_f0;
  int32_t uStack_e8;
  int iStack_e4;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int32_t uStack_d8;
  int8_t uStack_d4;
  int16_t uStack_d3;
  int8_t uStack_d1;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t *puStack_c0;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [136];
  uint64_t uStack_18;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0x21;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 0x21;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(int32_t *)(param_1 + 0x14) = 0x21;
  param_1[1] = param_2;
  plStack_f8 = (int64_t *)0x80000000c0;
  *(uint64_t *)((int64_t)param_1 + 0x7c) = 0x80000000c0;
  *(int32_t *)((int64_t)param_1 + 0x84) = 0x10;
  uStack_e8 = 0xc00;
  *(int32_t *)((int64_t)param_1 + 0x74) = 0xc00;
  iStack_e4 = *(int *)(param_1 + 0x10) << 4;
  *(int *)(param_1 + 0xf) = iStack_e4;
  *(int32_t *)(param_1 + 0xe) = 0;
  uStack_e0 = 1;
  uStack_d3 = 1;
  uStack_d1 = 0;
  uStack_d8 = 0x3f800000;
  uStack_d4 = 0x8a;
  uStack_dc = 0x19;
  uStack_d0 = *(int32_t *)(*(int64_t *)(param_2 + 0x88) + 0xa0);
  puStack_b8 = &unknown_var_3432_ptr;
  puStack_b0 = auStack_a0;
  auStack_a0[0] = 0;
  uStack_a8 = 0x1a;
  puStack_c0 = param_1;
  uVar3 = strcpy_s(auStack_a0,0x80,&unknown_var_976_ptr);
  puVar2 = (uint64_t *)FUN_1800b1d80(uVar3,&plStack_f8,&puStack_b8,&uStack_e8);
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_f0 = (int64_t *)param_1[2];
  param_1[2] = uVar1;
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  puStack_b8 = &system_state_ptr;
  *(int8_t *)(param_1 + 0x15) = 1;
  plStack_f0 = (int64_t *)param_1[8];
  param_1[8] = 0;
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  plStack_f0 = (int64_t *)param_1[7];
  param_1[7] = 0;
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  plStack_f0 = (int64_t *)param_1[9];
  param_1[9] = 0;
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  *param_1 = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (uint64_t)auStack_118);
}





// 函数: void FUN_18045fb80(int64_t param_1)
void FUN_18045fb80(int64_t param_1)

{
  FUN_180462930(*(uint64_t *)(param_1 + 0xb0));
  *(uint64_t *)(param_1 + 0xb0) = 0;
  FUN_180462930(*(uint64_t *)(param_1 + 0xb8));
  *(uint64_t *)(param_1 + 0xb8) = 0;
  FUN_18045ff20(param_1);
  if (*(int64_t *)(param_1 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(int64_t *)(param_1 + 0x50) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(int64_t **)(param_1 + 0x48) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x48) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x40) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x40) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x38) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x38) + 0x38))();
  }
  if (*(int64_t *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(int64_t **)(param_1 + 0x10) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



