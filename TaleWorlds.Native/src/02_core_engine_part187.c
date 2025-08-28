#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part187.c - 4 个函数

/**
 * 初始化引擎核心模块并设置默认配置
 * @param module_config 模块配置指针
 */
void initialize_engine_core_module(undefined8 *module_config)

{
  undefined4 *config_data;
  undefined1 temp_buffer_1 [32];
  undefined4 init_status;
  undefined8 stack_guard_1;
  undefined8 *module_ptr;
  undefined1 *buffer_ptr;
  undefined1 temp_buffer_2 [32];
  undefined *resource_ptr;
  undefined1 *string_ptr;
  undefined4 buffer_size;
  undefined1 name_buffer [16];
  ulonglong stack_guard_2;
  
  stack_guard_1 = 0xfffffffffffffffe;
  stack_guard_2 = _DAT_180bf00a8 ^ (ulonglong)temp_buffer_1;
  init_status = 0;
  buffer_ptr = temp_buffer_2;
  resource_ptr = &UNK_1809fdc18;
  string_ptr = name_buffer;
  name_buffer[0] = 0;
  buffer_size = 0;
  module_ptr = module_config;
  strcpy_s(name_buffer,0x10,&DAT_18098bc73);
  initialize_resource_buffer(temp_buffer_2,&resource_ptr);
  initialize_engine_system();
  resource_ptr = &UNK_18098bcb0;
  *module_config = &UNK_18098bcb0;
  module_config[1] = 0;
  *(undefined4 *)(module_config + 2) = 0;
  *module_config = &UNK_180a3c3e0;
  module_config[3] = 0;
  module_config[1] = 0;
  *(undefined4 *)(module_config + 2) = 0;
  create_engine_instance(module_config,4);
  config_data = (undefined4 *)module_config[1];
  *config_data = 0x656e6f44;
  *(undefined1 *)(config_data + 1) = 0;
  *(undefined4 *)(module_config + 2) = 4;
  init_status = 1;
                    // WARNING: Subroutine does not return
  execute_engine_initialization(stack_guard_2 ^ (ulonglong)temp_buffer_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016dbb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(_DAT_180c8a980 + 0x2f8) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 FUN_18016dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180168840(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 FUN_18016dd20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180168670(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 FUN_18016dda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180168590(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 *
FUN_18016de20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  plVar2 = (longlong *)FUN_18064e2a0();
  puVar3 = (undefined *)(*plVar2 + 0x3d8);
  if (puVar3 != &DAT_180c8ed80) {
    FUN_1806470a0();
                    // WARNING: Subroutine does not return
    memset(puVar3,0,0x240,param_4,uVar4,uVar5);
  }
  FUN_1806478d0();
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18016df40(undefined8 *param_1)
void FUN_18016df40(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  ulonglong uStack_48;
  ulonglong uVar6;
  
  lVar3 = _DAT_180c86950;
  uStack_b0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uVar6 = 0;
  uStack_b8 = 0;
  lVar4 = *(longlong *)(_DAT_180c86950 + 0x1868);
  uVar7 = uVar6;
  uVar8 = uVar6;
  puStack_a8 = param_1;
  if (*(longlong *)(_DAT_180c86950 + 0x1870) - lVar4 >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(uVar8 + lVar4);
      if ((((*(char *)((longlong)plVar1 + 0xde) == '\0') &&
           (*(char *)((longlong)plVar1 + 0xdd) != '\0')) &&
          (*(float *)((longlong)plVar1 + 0x24) == 1920.0)) &&
         (lVar4 = (**(code **)(*plVar1 + 0xb8))(plVar1), lVar4 != 0)) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      lVar4 = *(longlong *)(lVar3 + 0x1868);
      uVar8 = uVar8 + 8;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(lVar3 + 0x1870) - lVar4 >> 3));
    if (1 < (int)uVar7) {
                    // WARNING: Subroutine does not return
      FUN_180062300(_DAT_180c86928,&UNK_180a013c0);
    }
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar2 = (undefined4 *)param_1[1];
  *puVar2 = 0x656e6f44;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  uStack_b8 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_d8);
}



undefined8 FUN_18016e120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180168430(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18016e1a0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_180176060(_DAT_180c8a9d0);
  lVar3 = _DAT_180c8a9d0;
  lVar1 = _DAT_180c8a9d0 + 0x100;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  (**(code **)(**(longlong **)(lVar3 + 0xe8) + 0xe0))();
  if (*(char *)(lVar3 + 0x1f0) != '\0') {
    (**(code **)(**(longlong **)(lVar3 + 0xe8) + 0xc0))();
  }
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0xe);
  puVar2 = (undefined8 *)param_1[1];
  *puVar2 = 0x6c63206568636143;
  *(undefined4 *)(puVar2 + 1) = 0x65726165;
  *(undefined2 *)((longlong)puVar2 + 0xc) = 0x2e64;
  *(undefined1 *)((longlong)puVar2 + 0xe) = 0;
  *(undefined4 *)(param_1 + 2) = 0xe;
  return param_1;
}



undefined8 *
FUN_18016e320(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  
  puStack_38 = &UNK_180a3c3e0;
  uStack_20 = 0;
  puStack_30 = (undefined1 *)0x0;
  uStack_28 = 0;
  FUN_1806277c0(&puStack_38,0,param_3,param_4,0,0xfffffffffffffffe);
  uStack_28 = 0;
  if (puStack_30 != (undefined1 *)0x0) {
    *puStack_30 = 0;
  }
  FUN_1801cb3e0();
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 *
FUN_18016e450(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  FUN_1801c9a40();
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,uVar2,uVar3);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 FUN_18016e530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1801681e0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 FUN_18016e5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180167f80(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8
FUN_18016e630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = FUN_180167a50();
  FUN_180627910(param_1,uVar1,param_3,param_4,uVar2,uVar3);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016e6a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plStackX_20;
  undefined *puStack_c8;
  longlong lStack_c0;
  undefined4 uStack_b0;
  undefined *puStack_a8;
  longlong lStack_a0;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  
  uVar4 = _DAT_180c8aa08;
  uStack_88 = 0xfffffffffffffffe;
  plStackX_20 = param_4;
  FUN_1806279c0(&puStack_a8,*param_3,param_3,(char)param_4,0);
  FUN_180627ae0(&puStack_c8,&puStack_a8);
  uVar2 = _DAT_180c82868;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
  puStack_80 = auStack_48;
  puStack_78 = &uStack_70;
  uStack_70 = uVar4;
  FUN_180627ae0(auStack_68,&puStack_c8);
  uVar4 = FUN_1801e77d0(auStack_48,&uStack_70);
  plStackX_20 = (longlong *)FUN_18006b640(uVar3,uVar4);
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))(plStackX_20);
  }
  FUN_18005e300(uVar2,&plStackX_20);
  puStack_c8 = &UNK_180a3c3e0;
  if (lStack_c0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_c0 = 0;
  uStack_b0 = 0;
  puStack_c8 = &UNK_18098bcb0;
  puStack_a8 = &UNK_180a3c3e0;
  if (lStack_a0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_a0 = 0;
  uStack_90 = 0;
  puStack_a8 = &UNK_18098bcb0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8
FUN_18016e850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = FUN_1801676b0();
  FUN_180627910(param_1,uVar1,param_3,param_4,uVar2,uVar3);
  return param_1;
}



undefined8 FUN_18016e8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1801672e0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016e940(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  lVar2 = _DAT_180c868e8;
  uVar6 = 0xfffffffffffffffe;
  uVar5 = 0;
  for (lVar3 = *(longlong *)(_DAT_180c868e8 + 8); lVar3 != lVar2; lVar3 = func_0x00018066bd70(lVar3)
      ) {
    iVar4 = 0;
    if (*(longlong *)(lVar3 + 0x30) - *(longlong *)(lVar3 + 0x28) >> 3 != 0) {
      do {
        FUN_18020b790(lVar2,*(undefined4 *)(lVar3 + 0x20),iVar4,param_4,uVar5,uVar6);
        iVar4 = iVar4 + 1;
      } while ((ulonglong)(longlong)iVar4 <
               (ulonglong)(*(longlong *)(lVar3 + 0x30) - *(longlong *)(lVar3 + 0x28) >> 3));
    }
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 FUN_18016eaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180166dd0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8
FUN_18016eb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180166b10(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



undefined8
FUN_18016eba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180166950(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18016ec20(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined *puVar1;
  
  if (param_3[1] - *param_3 >> 5 == 0) {
    puVar1 = &UNK_180a081b4;
  }
  else {
    FUN_18032c450(*(undefined8 *)(_DAT_180c86870 + 0x3d8));
    puVar1 = &UNK_180a081bc;
  }
  FUN_180627910(param_1,puVar1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18016ecb0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined4 uStack_28;
  ulonglong uStack_20;
  
  if (param_3[1] - *param_3 >> 5 == 0) {
    puStack_38 = &UNK_180a3c3e0;
    uStack_20 = 0;
    puStack_30 = (undefined *)0x0;
    uStack_28 = 0;
    FUN_180628420(&puStack_38,*(undefined4 *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x160),param_3
                  ,param_4,0,0xfffffffffffffffe);
    puVar4 = &DAT_18098bc73;
    if (puStack_30 != (undefined *)0x0) {
      puVar4 = puStack_30;
    }
    puStack_38 = &UNK_180a3c3e0;
    if (puStack_30 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_30 = (undefined *)0x0;
    uStack_20 = uStack_20 & 0xffffffff00000000;
    puStack_38 = &UNK_18098bcb0;
  }
  else {
    lVar1 = *(longlong *)(_DAT_180c86870 + 0x3d8);
    uVar2 = atoi(*(undefined8 *)(*param_3 + 8));
    if (*(int *)(lVar1 + 0x110) == 3) {
      FUN_1803214c0(lVar1);
    }
    if ((ulonglong)uVar2 < *(longlong *)(lVar1 + 0x160) - 2U) {
      FUN_180323d00(lVar1,4,2);
      *(undefined8 *)(lVar1 + 0x158) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
      *(undefined4 *)(lVar1 + 0xb8) = 0;
      iVar3 = _Mtx_lock(lVar1 + 0x3d8);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      FUN_18033ad00(lVar1 + 0x3a8);
      iVar3 = _Mtx_unlock(lVar1 + 0x3d8);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      *(longlong *)(lVar1 + 0x150) = (longlong)(int)uVar2;
      FUN_1803336f0(lVar1);
      *(undefined4 *)(lVar1 + 0x144) = 0;
      FUN_180323d00(lVar1,10);
    }
    puVar4 = &UNK_180a081bc;
  }
  FUN_180627910(param_1,puVar4);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016eeb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  FUN_180321e80(*(longlong *)(_DAT_180c86870 + 0x3d8),
                1.0 / *(float *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0x13c),param_3,param_4,0,
                0xfffffffffffffffe);
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,6);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x65766153;
  *(undefined2 *)(puVar1 + 1) = 0x2164;
  *(undefined1 *)((longlong)puVar1 + 6) = 0;
  *(undefined4 *)(param_1 + 2) = 6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016ef90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined *puStack_28;
  longlong lStack_20;
  undefined4 uStack_10;
  
  FUN_18032c0b0(*(undefined8 *)(_DAT_180c86870 + 0x3d8),&puStack_28,param_3,param_4,0,
                0xfffffffffffffffe);
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_20 = 0;
  uStack_10 = 0;
  puStack_28 = &UNK_18098bcb0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,6);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x65766153;
  *(undefined2 *)(puVar1 + 1) = 0x2164;
  *(undefined1 *)((longlong)puVar1 + 6) = 0;
  *(undefined4 *)(param_1 + 2) = 6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f090(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uStackX_20;
  
  iVar7 = 0;
  uStackX_20 = param_4;
  if ((param_3[1] - *param_3 & 0xffffffffffffffe0U) == 0) {
    *(bool *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0xae0) =
         *(char *)(*(longlong *)(_DAT_180c86870 + 0x3d8) + 0xae0) == '\0';
  }
  else {
    iVar5 = atoi(*(undefined8 *)(*param_3 + 8));
    uStackX_20 = CONCAT44(uStackX_20._4_4_,iVar5);
    lVar2 = *(longlong *)(_DAT_180c86870 + 0x3d8);
    piVar3 = *(int **)(lVar2 + 0xac8);
    piVar6 = *(int **)(lVar2 + 0xac0);
    uVar8 = (longlong)piVar3 - (longlong)piVar6 >> 2;
    if (uVar8 != 0) {
      do {
        if (*piVar6 == iVar5) {
          for (piVar6 = *(int **)(lVar2 + 0xac0); (piVar6 != piVar3 && (*piVar6 != iVar5));
              piVar6 = piVar6 + 1) {
          }
          piVar1 = piVar6 + 1;
          if ((piVar1 < piVar3) && (piVar1 != piVar3)) {
                    // WARNING: Subroutine does not return
            memmove(piVar6,piVar1,(longlong)piVar3 - (longlong)piVar1);
          }
          *(int **)(lVar2 + 0xac8) = piVar3 + -1;
          goto LAB_18016f158;
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while ((ulonglong)(longlong)iVar7 < uVar8);
    }
    FUN_1800571e0(lVar2 + 0xac0,&uStackX_20);
  }
LAB_18016f158:
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar4 = (undefined4 *)param_1[1];
  *puVar4 = 0x656e6f44;
  *(undefined1 *)(puVar4 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 FUN_18016f240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180166580(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 FUN_18016f2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1801661b0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 FUN_18016f340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180165f80(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



undefined8 FUN_18016f3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180165bb0(param_1,param_1,param_3,param_3,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f440(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  *(undefined1 *)(_DAT_180c86950 + 0x1610) = 1;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f4f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = _DAT_180c8a988;
  FUN_180058370(_DAT_180c8a988,*(undefined8 *)(_DAT_180c8a988 + 0x10),param_3,param_4,0,
                0xfffffffffffffffe);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f5d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  *(undefined1 *)(_DAT_180c86870 + 0x2a) = 0;
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f44;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8
FUN_18016f680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_180a089e8;
  if (*(int *)*param_4 != 0) {
    puVar1 = &DAT_180a08120;
  }
  FUN_180627910(param_1,puVar1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016f720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  uVar1 = 0;
  if (*(longlong **)(_DAT_180c8ed08 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(_DAT_180c8ed08 + 0x18) + 0x50))();
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,0,param_3,param_4,uVar1,uVar2);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((undefined1 *)param_1[1] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[1] = 0;
  }
  return param_1;
}



undefined8
FUN_18016f7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  uVar1 = FUN_1801659e0();
  FUN_180627910(param_1,uVar1,param_3,param_4,uVar2,uVar3);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18016f840(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plStackX_18;
  longlong *plStackX_20;
  longlong alStack_40 [2];
  undefined *puStack_30;
  code *pcStack_28;
  
  plStackX_18 = param_3;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3,0,0xfffffffffffffffe);
  plStackX_18 = alStack_40;
  alStack_40[0] = *param_4;
  puStack_30 = &UNK_18016f9b0;
  pcStack_28 = FUN_18016f990;
  plVar2 = (longlong *)FUN_18006b640(uVar1,alStack_40);
  plStackX_20 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  *(undefined4 *)*param_4 = 1;
  uVar1 = _DAT_180c82868;
  plStackX_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_18005e110(uVar1,&plStackX_18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  FUN_180627910(param_1,&DAT_18098bc73);
  return param_1;
}





// 函数: void FUN_18016f990(undefined8 *param_1)
void FUN_18016f990(undefined8 *param_1)

{
  FUN_1800547b0();
  *(undefined4 *)*param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_18016f9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if (*(int *)(_DAT_180c86908 + 0x3f0) == 0) {
    puVar1 = &UNK_180a080d8;
  }
  else {
    FUN_180170ac0(0,&UNK_180a08100,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = &DAT_180a080cc;
  }
  FUN_180627910(param_1,puVar1);
  return param_1;
}



undefined8
FUN_18016fa80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180165950(param_1,param_1,param_3,param_4,0,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18016fb00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  if (*(int *)(_DAT_180c86890 + 8) == 1) {
    *(undefined4 *)(_DAT_180c86890 + 8) = 2;
  }
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f64;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 *
FUN_18016fbe0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  FUN_1800da9b0();
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,4,param_3,param_4,uVar2,uVar3);
  puVar1 = (undefined4 *)param_1[1];
  *puVar1 = 0x656e6f64;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 4;
  return param_1;
}



undefined8 *
FUN_18016fcc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined *puStack_28;
  longlong lStack_20;
  
  lVar1 = (*(code *)*param_4)(&puStack_28);
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar1 + 0x10);
  param_1[1] = *(undefined8 *)(lVar1 + 8);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_1;
}



undefined8 *
FUN_18016fdf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{


// 函数: void FUN_18016ff6f(void)
void FUN_18016ff6f(void)

{
  return;
}





