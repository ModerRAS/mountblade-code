#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

// 数据定义 - 转译版本
// 原始FUN_、DAT_、UNK_标识符已转译为语义化名称
// 转译规则：
// - FUN_* -> 函数名 (initialize_module_*, setup_thread_*, register_string_*, etc.)
// - DAT_* -> 变量名 (control_flag_*, data_pointer_*, thread_mutex_*, etc.)
// - UNK_* -> 常量名 (system_constant_*, base_address_*, string_data_*, etc.)

// 全局变量定义
undefined memory_block_fc740;
undefined system_constant_c790;

// 初始化控制变量
control_flag_5240 = 1;
control_flag_52a8 = 0;
control_flag_52b0 = 0x7fffffffffffffff;
control_flag_52e0 = 0;
lVar1 = function_8fc7d0(function_9414f0);
return (lVar1 != 0) - 1;
}

// 初始化模块函数 - 初始化模块2ce30
int initialize_module_2ce30(void)
{
  longlong lVar1;
  data_pointer_5320 = &base_address_bb30;
  data_pointer_5328 = &control_flag_5338;
  control_flag_5330 = 0;
  control_flag_5338 = 0;
  lVar1 = function_8fc7d0(function_941590);
  return (lVar1 != 0) - 1;
}

// 初始化模块函数 - 初始化模块2ce80
int initialize_module_2ce80(void)
{
  longlong lVar1;
  data_pointer_5770 = &base_address_bb30;
  data_pointer_5778 = &control_flag_5788;
  control_flag_5780 = 0;
  control_flag_5788 = 0;
  lVar1 = function_8fc7d0(function_9415b0);
  return (lVar1 != 0) - 1;
}

// 初始化模块函数 - 初始化模块2ced0
int initialize_module_2ced0(void)
{
  longlong lVar1;
  data_pointer_5208 = &system_buffer_bc80;
  data_pointer_5210 = &control_flag_5220;
  control_flag_5218 = 0;
  control_flag_5220 = 0;
  lVar1 = function_8fc7d0(function_9415d0);
  return (lVar1 != 0) - 1;
}

// 初始化模块函数 - 初始化模块2cf20
int initialize_module_2cf20(void)
{
  longlong lVar1;
  data_pointer_5bc0 = &fixed_pointer_cc58;
  data_pointer_5bc8 = &control_flag_5bd8;
  control_flag_5bd0 = 0;
  control_flag_5bd8 = 0;
  lVar1 = function_8fc7d0(function_9415f0);
  return (lVar1 != 0) - 1;
}

// 初始化模块函数 - 初始化模块2cf70
int initialize_module_2cf70(void)
{
  longlong lVar1;
  data_pointer_5c30 = &base_address_bb30;
  data_pointer_5c38 = &control_flag_5c48;
  control_flag_5c40 = 0;
  control_flag_5c48 = 0;
  lVar1 = function_8fc7d0(function_941610);
  return (lVar1 != 0) - 1;
}

// 初始化模块函数 - 初始化模块2cfc0
int initialize_module_2cfc0(void)
{
  longlong lVar1;
  data_pointer_6080 = &base_address_bb30;
  data_pointer_6088 = &control_flag_6098;
  control_flag_6090 = 0;
  control_flag_6098 = 0;
  lVar1 = function_8fc7d0(function_941630);
  return (lVar1 != 0) - 1;
}

// 设置线程函数 - 设置线程2d010
int setup_thread_2d010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
{
  longlong lVar1;
  undefined8 uVar2;
  uVar2 = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c910a8,2,param_3,param_4,uVar2);
  thread_mutex_10f8 = 0;
  lVar1 = function_8fc7d0(function_941650);
  return (lVar1 != 0) - 1;
}

// 设置线程函数 - 设置线程2d060
int setup_thread_2d060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
{
  longlong lVar1;
  undefined8 uVar2;
  uVar2 = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c91148,2,param_3,param_4,uVar2);
  thread_mutex_1198 = 0;
  lVar1 = function_8fc7d0(function_941690);
  return (lVar1 != 0) - 1;
}

// 设置线程函数 - 设置线程2d0b0
int setup_thread_2d0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
{
  longlong lVar1;
  undefined8 uVar2;
  uVar2 = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c911e8,2,param_3,param_4,uVar2);
  thread_mutex_1238 = 0;
  lVar1 = function_8fc7d0(function_9416d0);
  return (lVar1 != 0) - 1;
}

// 设置线程函数 - 设置线程2d100
int setup_thread_2d100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
{
  longlong lVar1;
  undefined8 uVar2;
  uVar2 = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c91288,2,param_3,param_4,uVar2);
  thread_mutex_12d8 = 0;
  lVar1 = function_8fc7d0(function_941710);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串64e8
int register_string_64e8(void)
{
  longlong lVar1;
  undefined8 in_R9;
  control_flag_64e8 = 0;
  control_flag_64e0 = 6;
  strcpy_s(&control_flag_64e8,0x10,&string_data_04dc,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_941800);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串6548
int register_string_6548(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_6530 = &table_reference_dc18;
  data_pointer_6538 = &control_flag_6548;
  control_flag_6548 = 0;
  control_flag_6540 = 0xd;
  strcpy_s(&control_flag_6548,0x10,&string_data_04e8,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_941820);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串65a8
int register_string_65a8(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_6590 = &table_reference_dc18;
  data_pointer_6598 = &control_flag_65a8;
  control_flag_65a8 = 0;
  control_flag_65a0 = 0xf;
  strcpy_s(&control_flag_65a8,0x10,&string_data_04f8,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_941840);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串65d8
int register_string_65d8(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_65c0 = &table_reference_dc18;
  data_pointer_65c8 = &control_flag_65d8;
  control_flag_65d8 = 0;
  control_flag_65d0 = 0xf;
  strcpy_s(&control_flag_65d8,0x10,&string_data_0508,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_941860);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串6608
int register_string_6608(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_65f0 = &table_reference_dc18;
  data_pointer_65f8 = &control_flag_6608;
  control_flag_6608 = 0;
  control_flag_6600 = 0xd;
  strcpy_s(&control_flag_6608,0x10,&string_data_0518,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_941880);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串6638
int register_string_6638(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_6620 = &table_reference_dc18;
  data_pointer_6628 = &control_flag_6638;
  control_flag_6638 = 0;
  control_flag_6630 = 0xc;
  strcpy_s(&control_flag_6638,0x10,&string_data_0528,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_9418a0);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串6668
int register_string_6668(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_6650 = &table_reference_dc18;
  data_pointer_6658 = &control_flag_6668;
  control_flag_6668 = 0;
  control_flag_6660 = 4;
  strcpy_s(&control_flag_6668,0x10,&string_data_0538,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_9418c0);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串6698
int register_string_6698(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_6680 = &table_reference_dc18;
  data_pointer_6688 = &control_flag_6698;
  control_flag_6698 = 0;
  control_flag_6690 = 5;
  strcpy_s(&control_flag_6698,0x10,&string_data_0540,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_9418e0);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串66c8
int register_string_66c8(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_66b0 = &table_reference_dc18;
  data_pointer_66b8 = &control_flag_66c8;
  control_flag_66c8 = 0;
  control_flag_66c0 = 5;
  strcpy_s(&control_flag_66c8,0x10,&string_data_0548,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_941900);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串52e8
int register_string_52e8(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_52e8 = &system_buffer_bc80;
  data_pointer_52f0 = &control_flag_5300;
  control_flag_5300 = 0;
  control_flag_52f8 = 0xd;
  strcpy_s(&control_flag_5300,0x20,&string_data_1300,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_941980);
  return (lVar1 != 0) - 1;
}

// 注册字符串函数 - 注册字符串5750
int register_string_5750(void)
{
  longlong lVar1;
  undefined8 in_R9;
  data_pointer_5738 = &system_buffer_bc80;
  data_pointer_5740 = &control_flag_5750;
  control_flag_5750 = 0;
  control_flag_5748 = 9;
  strcpy_s(&control_flag_5750,0x20,&string_data_1330,in_R9,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_9419a0);
  return (lVar1 != 0) - 1;
}

// 初始化互斥锁函数 - 初始化互斥锁2e8b0
int initialize_mutex_2e8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
{
  longlong lVar1;
  _Mtx_init_in_situ(0x180c91970,0x102,param_3,param_4,0xfffffffffffffffe);
  lVar1 = function_8fc7d0(function_9419c0);
  return (lVar1 != 0) - 1;
}

#endif // DATA_DEFINITIONS_H