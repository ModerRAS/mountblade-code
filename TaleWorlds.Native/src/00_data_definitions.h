#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

// 全局数据定义 - 从原始文件中提取
undefined g_global_system_data;
undefined g_system_configuration_data;

// 初始化系统配置
int initialize_system_configuration(void)
{
  system_configuration_enabled = 1;
  operation_counter = 0;
  maximum_allowed_system_value = 0x7fffffffffffffff;
  system_status_code = 0;
  int initialization_result = initialize_system(system_init_func_1809414f0);
  return (initialization_result != 0) - 1;
}
// 初始化核心数据结构
int initialize_core_data_structure(void)
{
  long long initialization_result;
  void* primary_data_pointer = &g_unknown_data_buffer;
  void* core_data_value_pointer = &g_core_data_value;
  int data_structure_offset = 0;
  g_core_data_value = 0;
  initialization_result = initialize_system(core_system_init_func_180941590);
  return (initialization_result != 0) - 1;
}
// 初始化网络缓冲区系统
int initialize_network_buffer_system(void)
{
  long long initialization_result;
  void* network_data_buffer_pointer = &g_network_data_buffer;
  void* network_buffer_value_pointer = &network_buffer_current_value;
  int network_buffer_offset = 0;
  network_buffer_current_value = 0;
  initialization_result = initialize_system(network_init_func_1809415b0);
  return (initialization_result != 0) - 1;
}
// 初始化渲染上下文系统
int initialize_rendering_context_system(void)
{
  long long initialization_result;
  void* render_data_buffer_pointer = &g_render_data_buffer;
  void* render_buffer_value_pointer = &g_render_buffer_value;
  int render_context_offset = 0;
  g_render_buffer_value = 0;
  initialization_result = initialize_system(rendering_init_func_1809415d0);
  return (initialization_result != 0) - 1;
}
// 初始化模块系统
int initialize_module_system(void)
{
  long long initialization_result;
  void* module_data_pointer = &g_module_unknown_data;
  void* module_value_pointer = &g_module_data_value;
  void* module_null_pointer = 0;
  g_module_data_value = 0;
  initialization_result = execute_function(module_init_callback_function);
  return (initialization_result != 0) - 1;
}
// 初始化输入系统
int initialize_input_system(void)
{
  long long initialization_result;
  void* input_shared_data_pointer = &g_shared_data_buffer;
  void* input_buffer_value_pointer = &input_buffer_current_value;
  int input_buffer_offset = 0;
  input_buffer_current_value = 0;
  initialization_result = execute_function(input_system_callback_function);
  return (initialization_result != 0) - 1;
}
// 初始化物理系统
int initialize_physics_system(void)
{
  long long initialization_result;
  void* physics_shared_data_pointer = &g_shared_data_buffer;
  void* physics_buffer_value_pointer = &physics_buffer_current_value;
  int physics_offset = 0;
  physics_buffer_current_value = 0;
  initialization_result = execute_function(callback_function_007);
  return (initialization_result != 0) - 1;
}
// 初始化线程池1
int initialize_thread_pool_1(undefined8 handle, undefined8 flags, undefined8 mutex_attr, undefined8 mutex_type)
{
  long long initialization_result;
  undefined8 thread_pool_flags = 0xfffffffffffffffe;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c910a8, 2, mutex_attr, mutex_type, thread_pool_flags);
  thread_pool_1_status_code = 0;
  initialization_result = execute_function(callback_function_008);
  return (initialization_result != 0) - 1;
}
// 初始化线程池2
int initialize_thread_pool_2(undefined8 handle, undefined8 flags, undefined8 mutex_attr, undefined8 mutex_type)
{
  long long initialization_result;
  undefined8 thread_pool_flags = 0xfffffffffffffffe;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c91148, 2, mutex_attr, mutex_type, thread_pool_flags);
  thread_pool_2_status_code = 0;
  initialization_result = execute_function(callback_function_009);
  return (initialization_result != 0) - 1;
}
// 初始化线程池3
int initialize_thread_pool_3(undefined8 handle, undefined8 flags, undefined8 mutex_attr, undefined8 mutex_type)
{
  long long initialization_result;
  undefined8 thread_pool_flags = 0xfffffffffffffffe;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c911e8, 2, mutex_attr, mutex_type, thread_pool_flags);
  thread_pool_3_status_code = 0;
  initialization_result = execute_function(callback_function_010);
  return (initialization_result != 0) - 1;
}
// 初始化线程池4
int initialize_thread_pool_4(undefined8 handle, undefined8 flags, undefined8 mutex_attr, undefined8 mutex_type)
{
  long long initialization_result;
  undefined8 thread_pool_flags = 0xfffffffffffffffe;
  
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c91288, 2, mutex_attr, mutex_type, thread_pool_flags);
  thread_pool_4_status_code = 0;
  initialization_result = execute_function(callback_function_011);
  return (initialization_result != 0) - 1;
}
// 初始化资源管理器0
int initialize_resource_manager_0(void)
{
  longlong initialization_result;
  undefined8 string_length_parameter;
  g_resource_string_1 = 0;
  g_resource_id_1 = 6;
  strcpy_s(&g_resource_string_1,0x10,&string_source_001,string_length_parameter,0xfffffffffffffffe);
  initialization_result = execute_function(callback_function_012);
  return (init_result != 0) - 1;
}
// 初始化资源管理器1
int initialize_resource_manager_1(void)
{
  longlong init_result;
  undefined8 str_len_param;
  resource_pointer_1 = &g_resource_data_buffer;
  resource_buffer_pointer_1 = &resource_buffer_1;
  resource_buffer_1 = 0;
  resource_type_1 = 0xd;
  strcpy_s(&resource_buffer_1,0x10,&string_source_002,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_013);
  return (init_result != 0) - 1;
}
int initialize_resource_manager_2(void)
{
  long long init_result;
  undefined8 str_len_param;
  void* resource_pointer = &g_resource_data_buffer;
  void* resource_buffer_pointer = &resource_buffer_2;
  resource_buffer_2 = 0;
  resource_type_2 = 0xf;
  strcpy_s(&resource_buffer_2,0x10,&string_source_003,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_014);
  return (init_result != 0) - 1;
}
int initialize_resource_manager_3(void)
{
  long long init_result;
  undefined8 str_len_param;
  void* resource_pointer = &g_resource_data_buffer;
  void* resource_buffer_pointer = &resource_buffer_3;
  resource_buffer_3 = 0;
  resource_type_3 = 0xf;
  strcpy_s(&resource_buffer_3,0x10,&string_source_004,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_015);
  return (init_result != 0) - 1;
}
int initialize_resource_manager_4(void)
{
  long long init_result;
  undefined8 str_len_param;
  void* resource_pointer = &g_resource_data_buffer;
  void* resource_buffer_pointer = &resource_buffer_4;
  resource_buffer_4 = 0;
  resource_type_4 = 0xd;
  strcpy_s(&resource_buffer_4,0x10,&string_source_005,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_016);
  return (init_result != 0) - 1;
}
int initialize_resource_manager_5(void)
{
  long long init_result;
  undefined8 str_len_param;
  void* resource_pointer = &g_resource_data_buffer;
  void* resource_buffer_pointer = &resource_buffer_5;
  resource_buffer_5 = 0;
  resource_type_5 = 0xc;
  strcpy_s(&resource_buffer_5,0x10,&string_source_006,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_017);
  return (init_result != 0) - 1;
}
int initialize_resource_manager_6(void)
{
  long long init_result;
  undefined8 str_len_param;
  void* resource_pointer = &g_resource_data_buffer;
  void* resource_buffer_pointer = &resource_buffer_6;
  resource_buffer_6 = 0;
  resource_type_6 = 4;
  strcpy_s(&resource_buffer_6,0x10,&string_source_007,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_018);
  return (init_result != 0) - 1;
}
int initialize_resource_manager_7(void)
{
  long long init_result;
  undefined8 str_len_param;
  void* resource_pointer = &g_resource_data_buffer;
  void* data_pointer = &data_180bf6698;
  data_180bf6698 = 0;
  int resource_type = 5;
  strcpy_s(&g_system_name_buffer,0x10,&g_system_name_string,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_018);
  return (init_result != 0) - 1;
}
// 初始化资源管理器8
int initialize_resource_manager_8(void)
{
  long long init_result;
  undefined8 str_len_param;
  void* resource_data_pointer = &g_resource_data_buffer;
  void* buffer_pointer = &data_180bf66c8;
  data_180bf66c8 = 0;
  int resource_type = 5;
  strcpy_s(&g_system_version_buffer,0x10,&g_system_version_string,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_019);
  return (init_result != 0) - 1;
}
// 初始化字符串缓冲区1
int initialize_string_buffer_1(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf52e8 = &g_empty_data_buffer;
  _data_180bf52f0 = &data_180bf5300;
  data_180bf5300 = 0;
  _data_180bf52f8 = 0xd;
  strcpy_s(&g_config_file_path,0x20,&g_config_path_string,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_020);
  return (init_result != 0) - 1;
}
// 初始化字符串缓冲区2
int initialize_string_buffer_2(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf5738 = &g_empty_data_buffer;
  _data_180bf5740 = &data_180bf5750;
  data_180bf5750 = 0;
  _data_180bf5748 = 9;
  strcpy_s(&g_save_file_path,0x20,&g_save_path_string,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_021);
  return (init_result != 0) - 1;
}
// 初始化互斥锁1
int initialize_mutex_1(undefined8 handle,undefined8 flags,undefined8 mutex_attr,undefined8 mutex_type)
{
  longlong init_result;
  _Mtx_init_in_situ(0x180c91970,0x102,mutex_attr,mutex_type,0xfffffffffffffffe);
  init_result = execute_function(callback_function_022);
  return (init_result != 0) - 1;
}
// 初始化数据缓冲区系统
int initialize_data_buffer_system(void)
{
  longlong init_result;
  undefined8 str_len_param;
  data_180bf6768 = 0;
  _data_180bf6760 = 0x13;
  strcpy_s(&data_180bf6768,0x40,&unknown_180a0cb48,str_len_param,0xfffffffffffffffe);
  _data_180bf67a8 = &unknown_data_003;
  _data_180bf67b0 = &resource_data_1;
  resource_data_1 = 0;
  _data_180bf67b8 = 0xd;
  strcpy_s(&resource_data_1,0x40,&unknown_180a0cb80);
  _data_180bf6800 = &unknown_data_003;
  _data_180bf6808 = &resource_data_2;
  resource_data_2 = 0;
  _data_180bf6810 = 0x17;
  strcpy_s(&resource_data_2,0x40,&unknown_180a0cb90);
  _data_180bf6858 = &unknown_data_003;
  _data_180bf6860 = &resource_data_3;
  resource_data_3 = 0;
  _data_180bf6868 = 0xd;
  strcpy_s(&resource_data_3,0x40,&unknown_180a0cb60);
  _data_180bf68b0 = &unknown_data_003;
  _data_180bf68b8 = &resource_data_4;
  resource_data_4 = 0;
  _data_180bf68c0 = 0xc;
  strcpy_s(&resource_data_4,0x40,&unknown_180a0cb70);
  _data_180bf6908 = &unknown_data_003;
  _data_180bf6910 = &resource_data_5;
  resource_data_5 = 0;
  _data_180bf6918 = 0xc;
  strcpy_s(&resource_data_5,0x40,&unknown_180a0cbe0);
  _data_180bf6960 = &unknown_data_003;
  _data_180bf6968 = &data_180bf6978;
  data_180bf6978 = 0;
  _data_180bf6970 = 0x10;
  strcpy_s(&data_180bf6978,0x40,&unknown_180a0cbf0);
  _data_180bf69b8 = &unknown_data_003;
  _data_180bf69c0 = &data_180bf69d0;
  data_180bf69d0 = 0;
  _data_180bf69c8 = 0x1f;
  strcpy_s(&data_180bf69d0,0x40,&unknown_180a0cba8);
  _data_180bf6a10 = &unknown_data_003;
  _data_180bf6a18 = &data_180bf6a28;
  data_180bf6a28 = 0;
  _data_180bf6a20 = 0x17;
  strcpy_s(&data_180bf6a28,0x40,&unknown_180a05740);
  _data_180bf6a68 = &unknown_data_003;
  _data_180bf6a70 = &data_180bf6a80;
  data_180bf6a80 = 0;
  _data_180bf6a78 = 0x13;
  strcpy_s(&data_180bf6a80,0x40,&unknown_180a0cbc8);
  _data_180bf6ac0 = &unknown_data_003;
  _data_180bf6ac8 = &data_180bf6ad8;
  data_180bf6ad8 = 0;
  _data_180bf6ad0 = 0x14;
  strcpy_s(&data_180bf6ad8,0x40,&unknown_180a0cc30);
  _data_180bf6b18 = &unknown_data_003;
  _data_180bf6b20 = &data_180bf6b30;
  data_180bf6b30 = 0;
  _data_180bf6b28 = 0;
  strcpy_s(&data_180bf6b30,0x40,&data_18098bc73);
  _data_180bf6b70 = &unknown_data_003;
  _data_180bf6b78 = &data_180bf6b88;
  data_180bf6b88 = 0;
  _data_180bf6b80 = 0x1b;
  strcpy_s(&data_180bf6b88,0x40,&unknown_180a0cc48);
  _data_180bf6bc8 = &unknown_data_003;
  _data_180bf6bd0 = &data_180bf6be0;
  data_180bf6be0 = 0;
  _data_180bf6bd8 = 7;
  strcpy_s(&data_180bf6be0,0x40,&unknown_180a0cc08);
  _data_180bf6c20 = &unknown_data_003;
  _data_180bf6c28 = &data_180bf6c38;
  data_180bf6c38 = 0;
  _data_180bf6c30 = 0x19;
  strcpy_s(&data_180bf6c38,0x40,&unknown_180a0cc10);
  _data_180bf6c78 = &unknown_data_003;
  _data_180bf6c80 = &data_180bf6c90;
  data_180bf6c90 = 0;
  _data_180bf6c88 = 0x12;
  strcpy_s(&data_180bf6c90,0x40,&unknown_180a0cca0);
  _data_180bf6cd0 = &unknown_data_003;
  _data_180bf6cd8 = &data_180bf6ce8;
  data_180bf6ce8 = 0;
  _data_180bf6ce0 = 0x12;
  strcpy_s(&data_180bf6ce8,0x40,&unknown_180a0ccb8);
  _data_180bf6d28 = &unknown_data_003;
  _data_180bf6d30 = &data_180bf6d40;
  data_180bf6d40 = 0;
  _data_180bf6d38 = 0x19;
  strcpy_s(&data_180bf6d40,0x40,&unknown_180a0cc68);
  _data_180bf6d80 = &unknown_data_003;
  _data_180bf6d88 = &data_180bf6d98;
  data_180bf6d98 = 0;
  _data_180bf6d90 = 0x11;
  strcpy_s(&data_180bf6d98,0x40,&unknown_180a0cc88);
  _data_180bf6dd8 = &unknown_data_003;
  _data_180bf6de0 = &data_180bf6df0;
  data_180bf6df0 = 0;
  _data_180bf6de8 = 0x18;
  strcpy_s(&data_180bf6df0,0x40,&unknown_180a0cd08);
  _data_180bf6e30 = &unknown_data_003;
  _data_180bf6e38 = &data_180bf6e48;
  data_180bf6e48 = 0;
  _data_180bf6e40 = 0x13;
  strcpy_s(&data_180bf6e48,0x40,&unknown_180a0cd28);
  _data_180bf6e88 = &unknown_data_003;
  _data_180bf6e90 = &data_180bf6ea0;
  data_180bf6ea0 = 0;
  _data_180bf6e98 = 0x19;
  strcpy_s(&data_180bf6ea0,0x40,&unknown_180a0ccd0);
  _data_180bf6ee0 = &unknown_data_003;
  _data_180bf6ee8 = &data_180bf6ef8;
  data_180bf6ef8 = 0;
  _data_180bf6ef0 = 0x10;
  strcpy_s(&data_180bf6ef8,0x40,&unknown_180a0ccf0);
  _data_180bf6f38 = &unknown_data_003;
  _data_180bf6f40 = &data_180bf6f50;
  data_180bf6f50 = 0;
  _data_180bf6f48 = 0x14;
  strcpy_s(&data_180bf6f50,0x40,&unknown_180a0cd70);
  _data_180bf6f90 = &unknown_data_003;
  _data_180bf6f98 = &data_180bf6fa8;
  data_180bf6fa8 = 0;
  _data_180bf6fa0 = 0xf;
  strcpy_s(&data_180bf6fa8,0x40,&unknown_180a0cd88);
  _data_180bf6fe8 = &unknown_data_003;
  _data_180bf6ff0 = &data_180bf7000;
  data_180bf7000 = 0;
  _data_180bf6ff8 = 0x16;
  strcpy_s(&data_180bf7000,0x40,&unknown_180a0cd40);
  _data_180bf7040 = &unknown_data_003;
  _data_180bf7048 = &data_180bf7058;
  data_180bf7058 = 0;
  _data_180bf7050 = 0x12;
  strcpy_s(&data_180bf7058,0x40,&unknown_180a0cd58);
  _data_180bf7098 = &unknown_data_003;
  _data_180bf70a0 = &data_180bf70b0;
  data_180bf70b0 = 0;
  _data_180bf70a8 = 0x14;
  strcpy_s(&data_180bf70b0,0x40,&unknown_180a0cdc8);
  _data_180bf70f0 = &unknown_data_003;
  _data_180bf70f8 = &data_180bf7108;
  data_180bf7108 = 0;
  _data_180bf7100 = 0x20;
  strcpy_s(&data_180bf7108,0x40,&unknown_180a0cde0);
  _data_180bf7148 = &unknown_data_003;
  _data_180bf7150 = &data_180bf7160;
  data_180bf7160 = 0;
  _data_180bf7158 = 0x13;
  strcpy_s(&data_180bf7160,0x40,&unknown_180a0cd98);
  _data_180bf71a0 = &unknown_data_003;
  _data_180bf71a8 = &data_180bf71b8;
  data_180bf71b8 = 0;
  _data_180bf71b0 = 0x16;
  strcpy_s(&data_180bf71b8,0x40,&unknown_180a0cdb0);
  _data_180bf71f8 = &unknown_data_003;
  _data_180bf7200 = &data_180bf7210;
  data_180bf7210 = 0;
  _data_180bf7208 = 0xf;
  strcpy_s(&data_180bf7210,0x40,&unknown_180a0ce40);
  init_result = execute_function(&unknown_180941b70);
  return (init_result != 0) - 1;
}
int initialize_module_005(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf7250 = &unknown_data_003;
  _data_180bf7258 = &data_180bf7268;
  data_180bf7268 = 0;
  _data_180bf7260 = 0xb;
  strcpy_s(&data_180bf7268,0x40,&unknown_180a03098,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_023);
  return (init_result != 0) - 1;
}
int initialize_module_006(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf72b0 = &unknown_data_003;
  _data_180bf72b8 = &data_180bf72c8;
  data_180bf72c8 = 0;
  _data_180bf72c0 = 9;
  strcpy_s(&data_180bf72c8,0x40,&unknown_180a03060,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_024);
  return (init_result != 0) - 1;
}
int initialize_module_007(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf7310 = &unknown_data_003;
  _data_180bf7318 = &data_180bf7328;
  data_180bf7328 = 0;
  _data_180bf7320 = 9;
  strcpy_s(&data_180bf7328,0x40,&unknown_180a030a8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_025);
  return (init_result != 0) - 1;
}
int initialize_module_008(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf7370 = &unknown_1809fcc28;
  _data_180bf7378 = &data_180bf7388;
  data_180bf7388 = 0;
  _data_180bf7380 = 0xb;
  strcpy_s(&data_180bf7388,0x80,&unknown_180a0fd60,str_len_param,0xfffffffffffffffe);
  _data_180bf7408 = &unknown_1809fcc28;
  _data_180bf7410 = &data_180bf7420;
  data_180bf7420 = 0;
  _data_180bf7418 = 0x10;
  strcpy_s(&data_180bf7420,0x80,&unknown_180a0fd70);
  _data_180bf74a0 = &unknown_1809fcc28;
  _data_180bf74a8 = &data_180bf74b8;
  data_180bf74b8 = 0;
  _data_180bf74b0 = 0xd;
  strcpy_s(&data_180bf74b8,0x80,&unknown_180a0fd40);
  _data_180bf7538 = &unknown_1809fcc28;
  _data_180bf7540 = &data_180bf7550;
  data_180bf7550 = 0;
  _data_180bf7548 = 0xd;
  strcpy_s(&data_180bf7550,0x80,&unknown_180a0fd50);
  _data_180bf75d0 = &unknown_1809fcc28;
  _data_180bf75d8 = &data_180bf75e8;
  data_180bf75e8 = 0;
  _data_180bf75e0 = 0xc;
  strcpy_s(&data_180bf75e8,0x80,&unknown_180a0fda8);
  _data_180bf7668 = &unknown_1809fcc28;
  _data_180bf7670 = &data_180bf7680;
  data_180bf7680 = 0;
  _data_180bf7678 = 0x13;
  strcpy_s(&data_180bf7680,0x80,&unknown_180a0fdb8);
  _data_180bf7700 = &unknown_1809fcc28;
  _data_180bf7708 = &data_180bf7718;
  data_180bf7718 = 0;
  _data_180bf7710 = 10;
  strcpy_s(&data_180bf7718,0x80,&unknown_180a0fd88);
  _data_180bf7798 = &unknown_1809fcc28;
  _data_180bf77a0 = &data_180bf77b0;
  data_180bf77b0 = 0;
  _data_180bf77a8 = 0xc;
  strcpy_s(&data_180bf77b0,0x80,&unknown_180a0fd98);
  _data_180bf7830 = &unknown_1809fcc28;
  _data_180bf7838 = &data_180bf7848;
  data_180bf7848 = 0;
  _data_180bf7840 = 0x11;
  strcpy_s(&data_180bf7848,0x80,&unknown_180a0fe10);
  _data_180bf78c8 = &unknown_1809fcc28;
  _data_180bf78d0 = &data_180bf78e0;
  data_180bf78e0 = 0;
  _data_180bf78d8 = 0x11;
  strcpy_s(&data_180bf78e0,0x80,&unknown_180a0fe28);
  _data_180bf7960 = &unknown_1809fcc28;
  _data_180bf7968 = &data_180bf7978;
  data_180bf7978 = 0;
  _data_180bf7970 = 0x19;
  strcpy_s(&data_180bf7978,0x80,&unknown_180a0fdd0);
  _data_180bf79f8 = &unknown_1809fcc28;
  _data_180bf7a00 = &data_180bf7a10;
  data_180bf7a10 = 0;
  _data_180bf7a08 = 0x1a;
  strcpy_s(&data_180bf7a10,0x80,&unknown_180a0fdf0);
  _data_180bf7a90 = &unknown_1809fcc28;
  _data_180bf7a98 = &data_180bf7aa8;
  data_180bf7aa8 = 0;
  _data_180bf7aa0 = 0x1b;
  strcpy_s(&data_180bf7aa8,0x80,&unknown_180a0fe70);
  _data_180bf7b28 = &unknown_1809fcc28;
  _data_180bf7b30 = &data_180bf7b40;
  data_180bf7b40 = 0;
  _data_180bf7b38 = 0xc;
  strcpy_s(&data_180bf7b40,0x80,&unknown_180a0fe90);
  _data_180bf7bc0 = &unknown_1809fcc28;
  _data_180bf7bc8 = &data_180bf7bd8;
  data_180bf7bd8 = 0;
  _data_180bf7bd0 = 0x11;
  strcpy_s(&data_180bf7bd8,0x80,&unknown_180a0fe40);
  _data_180bf7c58 = &unknown_1809fcc28;
  _data_180bf7c60 = &data_180bf7c70;
  data_180bf7c70 = 0;
  _data_180bf7c68 = 0x11;
  strcpy_s(&data_180bf7c70,0x80,&unknown_180a0fe58);
  init_result = execute_function(&unknown_180941cc0);
  return (init_result != 0) - 1;
}
  data_180bf7ea8 = 0;
  _data_180bf7ea0 = 0x13;
  strcpy_s(&data_180bf7ea8,0x40,&unknown_180a0cb48,str_len_param,0xfffffffffffffffe);
  _data_180bf7ee8 = &unknown_data_003;
  _data_180bf7ef0 = &data_180bf7f00;
  data_180bf7f00 = 0;
  _data_180bf7ef8 = 0xd;
  strcpy_s(&data_180bf7f00,0x40,&unknown_180a0cb80);
  _data_180bf7f40 = &unknown_data_003;
  _data_180bf7f48 = &data_180bf7f58;
  data_180bf7f58 = 0;
  _data_180bf7f50 = 0x17;
  strcpy_s(&data_180bf7f58,0x40,&unknown_180a0cb90);
  _data_180bf7f98 = &unknown_data_003;
  _data_180bf7fa0 = &data_180bf7fb0;
  data_180bf7fb0 = 0;
  _data_180bf7fa8 = 0xd;
  strcpy_s(&data_180bf7fb0,0x40,&unknown_180a0cb60);
  _data_180bf7ff0 = &unknown_data_003;
  _data_180bf7ff8 = &data_180bf8008;
  data_180bf8008 = 0;
  _data_180bf8000 = 0xc;
  strcpy_s(&data_180bf8008,0x40,&unknown_180a0cb70);
  _data_180bf8048 = &unknown_data_003;
  _data_180bf8050 = &data_180bf8060;
  data_180bf8060 = 0;
  _data_180bf8058 = 0xc;
  strcpy_s(&data_180bf8060,0x40,&unknown_180a0cbe0);
  _data_180bf80a0 = &unknown_data_003;
  _data_180bf80a8 = &data_180bf80b8;
  data_180bf80b8 = 0;
  _data_180bf80b0 = 0x10;
  strcpy_s(&data_180bf80b8,0x40,&unknown_180a0cbf0);
  _data_180bf80f8 = &unknown_data_003;
  _data_180bf8100 = &data_180bf8110;
  data_180bf8110 = 0;
  _data_180bf8108 = 0x1f;
  strcpy_s(&data_180bf8110,0x40,&unknown_180a0cba8);
  _data_180bf8150 = &unknown_data_003;
  _data_180bf8158 = &data_180bf8168;
  data_180bf8168 = 0;
  _data_180bf8160 = 0x17;
  strcpy_s(&data_180bf8168,0x40,&unknown_180a05740);
  _data_180bf81a8 = &unknown_data_003;
  _data_180bf81b0 = &data_180bf81c0;
  data_180bf81c0 = 0;
  _data_180bf81b8 = 0x13;
  strcpy_s(&data_180bf81c0,0x40,&unknown_180a0cbc8);
  _data_180bf8200 = &unknown_data_003;
  _data_180bf8208 = &data_180bf8218;
  data_180bf8218 = 0;
  _data_180bf8210 = 0x14;
  strcpy_s(&data_180bf8218,0x40,&unknown_180a0cc30);
  _data_180bf8258 = &unknown_data_003;
  _data_180bf8260 = &data_180bf8270;
  data_180bf8270 = 0;
  _data_180bf8268 = 0;
  strcpy_s(&data_180bf8270,0x40,&data_18098bc73);
  _data_180bf82b0 = &unknown_data_003;
  _data_180bf82b8 = &data_180bf82c8;
  data_180bf82c8 = 0;
  _data_180bf82c0 = 0x1b;
  strcpy_s(&data_180bf82c8,0x40,&unknown_180a0cc48);
  _data_180bf8308 = &unknown_data_003;
  _data_180bf8310 = &data_180bf8320;
  data_180bf8320 = 0;
  _data_180bf8318 = 7;
  strcpy_s(&data_180bf8320,0x40,&unknown_180a0cc08);
  _data_180bf8360 = &unknown_data_003;
  _data_180bf8368 = &data_180bf8378;
  data_180bf8378 = 0;
  _data_180bf8370 = 0x19;
  strcpy_s(&data_180bf8378,0x40,&unknown_180a0cc10);
  _data_180bf83b8 = &unknown_data_003;
  _data_180bf83c0 = &data_180bf83d0;
  data_180bf83d0 = 0;
  _data_180bf83c8 = 0x12;
  strcpy_s(&data_180bf83d0,0x40,&unknown_180a0cca0);
  _data_180bf8410 = &unknown_data_003;
  _data_180bf8418 = &data_180bf8428;
  data_180bf8428 = 0;
  _data_180bf8420 = 0x12;
  strcpy_s(&data_180bf8428,0x40,&unknown_180a0ccb8);
  _data_180bf8468 = &unknown_data_003;
  _data_180bf8470 = &data_180bf8480;
  data_180bf8480 = 0;
  _data_180bf8478 = 0x19;
  strcpy_s(&data_180bf8480,0x40,&unknown_180a0cc68);
  _data_180bf84c0 = &unknown_data_003;
  _data_180bf84c8 = &data_180bf84d8;
  data_180bf84d8 = 0;
  _data_180bf84d0 = 0x11;
  strcpy_s(&data_180bf84d8,0x40,&unknown_180a0cc88);
  _data_180bf8518 = &unknown_data_003;
  _data_180bf8520 = &data_180bf8530;
  data_180bf8530 = 0;
  _data_180bf8528 = 0x18;
  strcpy_s(&data_180bf8530,0x40,&unknown_180a0cd08);
  _data_180bf8570 = &unknown_data_003;
  _data_180bf8578 = &data_180bf8588;
  data_180bf8588 = 0;
  _data_180bf8580 = 0x13;
  strcpy_s(&data_180bf8588,0x40,&unknown_180a0cd28);
  _data_180bf85c8 = &unknown_data_003;
  _data_180bf85d0 = &data_180bf85e0;
  data_180bf85e0 = 0;
  _data_180bf85d8 = 0x19;
  strcpy_s(&data_180bf85e0,0x40,&unknown_180a0ccd0);
  _data_180bf8620 = &unknown_data_003;
  _data_180bf8628 = &data_180bf8638;
  data_180bf8638 = 0;
  _data_180bf8630 = 0x10;
  strcpy_s(&data_180bf8638,0x40,&unknown_180a0ccf0);
  _data_180bf8678 = &unknown_data_003;
  _data_180bf8680 = &data_180bf8690;
  data_180bf8690 = 0;
  _data_180bf8688 = 0x14;
  strcpy_s(&data_180bf8690,0x40,&unknown_180a0cd70);
  _data_180bf86d0 = &unknown_data_003;
  _data_180bf86d8 = &data_180bf86e8;
  data_180bf86e8 = 0;
  _data_180bf86e0 = 0xf;
  strcpy_s(&data_180bf86e8,0x40,&unknown_180a0cd88);
  _data_180bf8728 = &unknown_data_003;
  _data_180bf8730 = &data_180bf8740;
  data_180bf8740 = 0;
  _data_180bf8738 = 0x16;
  strcpy_s(&data_180bf8740,0x40,&unknown_180a0cd40);
  _data_180bf8780 = &unknown_data_003;
  _data_180bf8788 = &data_180bf8798;
  data_180bf8798 = 0;
  _data_180bf8790 = 0x12;
  strcpy_s(&data_180bf8798,0x40,&unknown_180a0cd58);
  _data_180bf87d8 = &unknown_data_003;
  _data_180bf87e0 = &data_180bf87f0;
  data_180bf87f0 = 0;
  _data_180bf87e8 = 0x14;
  strcpy_s(&data_180bf87f0,0x40,&unknown_180a0cdc8);
  _data_180bf8830 = &unknown_data_003;
  _data_180bf8838 = &data_180bf8848;
  data_180bf8848 = 0;
  _data_180bf8840 = 0x20;
  strcpy_s(&data_180bf8848,0x40,&unknown_180a0cde0);
  _data_180bf8888 = &unknown_data_003;
  _data_180bf8890 = &data_180bf88a0;
  data_180bf88a0 = 0;
  _data_180bf8898 = 0x13;
  strcpy_s(&data_180bf88a0,0x40,&unknown_180a0cd98);
  _data_180bf88e0 = &unknown_data_003;
  _data_180bf88e8 = &data_180bf88f8;
  data_180bf88f8 = 0;
  _data_180bf88f0 = 0x16;
  strcpy_s(&data_180bf88f8,0x40,&unknown_180a0cdb0);
  _data_180bf8938 = &unknown_data_003;
  _data_180bf8940 = &data_180bf8950;
  data_180bf8950 = 0;
  _data_180bf8948 = 0xf;
  strcpy_s(&data_180bf8950,0x40,&unknown_180a0ce40);
  init_result = execute_function(&unknown_180941ce0);
  return (init_result != 0) - 1;
}
  data_180bf90c8 = 0;
  _data_180bf90c0 = 0xd;
  strcpy_s(&data_180bf90c8,0x20,&unknown_180a01300,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_026);
  return (init_result != 0) - 1;
}
int initialize_module_009(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf5b88 = &unknown_data_002;
  _data_180bf5b90 = &data_180bf5ba0;
  data_180bf5ba0 = 0;
  _data_180bf5b98 = 9;
  strcpy_s(&data_180bf5ba0,0x20,&unknown_180a01330,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_027);
  return (init_result != 0) - 1;
}
  data_180bf91c8 = 0;
  _data_180bf91c0 = 0x10;
  strcpy_s(&data_180bf91c8,0x40,&unknown_180a22b38,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_028);
  return (init_result != 0) - 1;
}
int initialize_module_010(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9210 = &unknown_data_003;
  _data_180bf9218 = &data_180bf9228;
  data_180bf9228 = 0;
  _data_180bf9220 = 0x13;
  strcpy_s(&data_180bf9228,0x40,&unknown_180a22b90,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_029);
  return (init_result != 0) - 1;
}
int initialize_module_011(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9270 = &unknown_data_003;
  _data_180bf9278 = &data_180bf9288;
  data_180bf9288 = 0;
  _data_180bf9280 = 0x12;
  strcpy_s(&data_180bf9288,0x40,&unknown_180a22b78,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_030);
  return (init_result != 0) - 1;
}
int initialize_module_012(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf92d0 = &unknown_data_003;
  _data_180bf92d8 = &data_180bf92e8;
  data_180bf92e8 = 0;
  _data_180bf92e0 = 0x12;
  strcpy_s(&data_180bf92e8,0x40,&unknown_180a22b60,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_031);
  return (init_result != 0) - 1;
}
int initialize_module_013(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9330 = &unknown_data_003;
  _data_180bf9338 = &data_180bf9348;
  data_180bf9348 = 0;
  _data_180bf9340 = 0xd;
  strcpy_s(&data_180bf9348,0x40,&unknown_180a22b50,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_032);
  return (init_result != 0) - 1;
}
int initialize_module_014(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9390 = &unknown_data_003;
  _data_180bf9398 = &data_180bf93a8;
  data_180bf93a8 = 0;
  _data_180bf93a0 = 0x10;
  strcpy_s(&data_180bf93a8,0x40,&unknown_180a22be8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_033);
  return (init_result != 0) - 1;
}
int initialize_module_015(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf93f0 = &unknown_data_003;
  _data_180bf93f8 = &data_180bf9408;
  data_180bf9408 = 0;
  _data_180bf9400 = 0x17;
  strcpy_s(&data_180bf9408,0x40,&unknown_180a22bd0,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_034);
  return (init_result != 0) - 1;
}
int initialize_module_016(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9450 = &unknown_data_003;
  _data_180bf9458 = &data_180bf9468;
  data_180bf9468 = 0;
  _data_180bf9460 = 0x10;
  strcpy_s(&data_180bf9468,0x40,&unknown_180a22bb8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_035);
  return (init_result != 0) - 1;
}
int initialize_module_017(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf94b0 = &unknown_data_003;
  _data_180bf94b8 = &data_180bf94c8;
  data_180bf94c8 = 0;
  _data_180bf94c0 = 0xd;
  strcpy_s(&data_180bf94c8,0x40,&unknown_180a22ba8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_036);
  return (init_result != 0) - 1;
}
int initialize_module_018(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9510 = &unknown_data_003;
  _data_180bf9518 = &data_180bf9528;
  data_180bf9528 = 0;
  _data_180bf9520 = 0xc;
  strcpy_s(&data_180bf9528,0x40,&unknown_180a22c48,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_037);
  return (init_result != 0) - 1;
}
int initialize_module_019(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9570 = &unknown_data_003;
  _data_180bf9578 = &data_180bf9588;
  data_180bf9588 = 0;
  _data_180bf9580 = 0x16;
  strcpy_s(&data_180bf9588,0x40,&unknown_180a22c30,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_038);
  return (init_result != 0) - 1;
}
int initialize_module_020(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf95d0 = &unknown_data_003;
  _data_180bf95d8 = &data_180bf95e8;
  data_180bf95e8 = 0;
  _data_180bf95e0 = 0x13;
  strcpy_s(&data_180bf95e8,0x40,&unknown_180a22c18,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_039);
  return (init_result != 0) - 1;
}
int initialize_module_021(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9630 = &unknown_data_003;
  _data_180bf9638 = &data_180bf9648;
  data_180bf9648 = 0;
  _data_180bf9640 = 0x14;
  strcpy_s(&data_180bf9648,0x40,&unknown_180a22c00,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_040);
  return (init_result != 0) - 1;
}
int initialize_module_022(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9690 = &unknown_data_003;
  _data_180bf9698 = &data_180bf96a8;
  data_180bf96a8 = 0;
  _data_180bf96a0 = 0x17;
  strcpy_s(&data_180bf96a8,0x40,&data_180a22cb0,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_041);
  return (init_result != 0) - 1;
}
int initialize_module_023(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf96f0 = &unknown_data_003;
  _data_180bf96f8 = &data_180bf9708;
  data_180bf9708 = 0;
  _data_180bf9700 = 0x17;
  strcpy_s(&data_180bf9708,0x40,&unknown_180a22c98,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_042);
  return (init_result != 0) - 1;
}
int initialize_module_024(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9750 = &unknown_data_003;
  _data_180bf9758 = &data_180bf9768;
  data_180bf9768 = 0;
  _data_180bf9760 = 0x20;
  strcpy_s(&data_180bf9768,0x40,&unknown_180a22c70,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_043);
  return (init_result != 0) - 1;
}
int initialize_module_025(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf97b0 = &unknown_data_003;
  _data_180bf97b8 = &data_180bf97c8;
  data_180bf97c8 = 0;
  _data_180bf97c0 = 0x13;
  strcpy_s(&data_180bf97c8,0x40,&unknown_180a22c58,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_044);
  return (init_result != 0) - 1;
}
int initialize_module_026(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9810 = &unknown_data_003;
  _data_180bf9818 = &data_180bf9828;
  data_180bf9828 = 0;
  _data_180bf9820 = 0x1e;
  strcpy_s(&data_180bf9828,0x40,&unknown_180a22d28,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_045);
  return (init_result != 0) - 1;
}
int initialize_module_027(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9870 = &unknown_data_003;
  _data_180bf9878 = &data_180bf9888;
  data_180bf9888 = 0;
  _data_180bf9880 = 0x1b;
  strcpy_s(&data_180bf9888,0x40,&unknown_180a22d08,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_046);
  return (init_result != 0) - 1;
}
int initialize_module_028(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf98d0 = &unknown_data_003;
  _data_180bf98d8 = &data_180bf98e8;
  data_180bf98e8 = 0;
  _data_180bf98e0 = 0x1b;
  strcpy_s(&data_180bf98e8,0x40,&unknown_180a22ce8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_047);
  return (init_result != 0) - 1;
}
int initialize_module_029(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9930 = &unknown_data_003;
  _data_180bf9938 = &data_180bf9948;
  data_180bf9948 = 0;
  _data_180bf9940 = 0x1c;
  strcpy_s(&data_180bf9948,0x40,&unknown_180a22cc8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_048);
  return (init_result != 0) - 1;
}
int initialize_module_030(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9990 = &unknown_data_003;
  _data_180bf9998 = &data_180bf99a8;
  data_180bf99a8 = 0;
  _data_180bf99a0 = 0x1d;
  strcpy_s(&data_180bf99a8,0x40,&unknown_180a22db0,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_049);
  return (init_result != 0) - 1;
}
int initialize_module_031(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf99f0 = &unknown_data_003;
  _data_180bf99f8 = &data_180bf9a08;
  data_180bf9a08 = 0;
  _data_180bf9a00 = 0x20;
  strcpy_s(&data_180bf9a08,0x40,&unknown_180a22d88,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_050);
  return (init_result != 0) - 1;
}
int initialize_module_032(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9a50 = &unknown_data_003;
  _data_180bf9a58 = &data_180bf9a68;
  data_180bf9a68 = 0;
  _data_180bf9a60 = 0x1d;
  strcpy_s(&data_180bf9a68,0x40,&unknown_180a22d68,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_051);
  return (init_result != 0) - 1;
}
int initialize_module_033(void)
{
  longlong init_result;
  undefined8 str_len_param;
  g_string_manager_ptr_180bf9ab0 = &unknown_data_003;
  g_string_manager_ptr_180bf9ab8 = &g_string_buffer_180bf9ac8;
  g_string_buffer_180bf9ac8 = 0;
  g_string_manager_type_180bf9ac0 = 0x1c;
  strcpy_s(&g_string_buffer_180bf9ac8,0x40,&data_180a22d48,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_052);
  return (init_result != 0) - 1;
}
int initialize_module_034(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9b10 = &unknown_data_003;
  _data_180bf9b18 = &data_180bf9b28;
  data_180bf9b28 = 0;
  _data_180bf9b20 = 0x17;
  strcpy_s(&data_180bf9b28,0x40,&unknown_180a22e40,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_053);
  return (init_result != 0) - 1;
}
int initialize_module_035(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9b70 = &unknown_data_003;
  _data_180bf9b78 = &data_180bf9b88;
  data_180bf9b88 = 0;
  _data_180bf9b80 = 0x1f;
  strcpy_s(&data_180bf9b88,0x40,&unknown_180a22e20,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_054);
  return (init_result != 0) - 1;
}
int initialize_module_036(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9bd0 = &unknown_data_003;
  _data_180bf9bd8 = &data_180bf9be8;
  data_180bf9be8 = 0;
  _data_180bf9be0 = 0x21;
  strcpy_s(&data_180bf9be8,0x40,&unknown_180a22df8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_055);
  return (init_result != 0) - 1;
}
int initialize_module_037(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9c30 = &unknown_data_003;
  _data_180bf9c38 = &data_180bf9c48;
  data_180bf9c48 = 0;
  _data_180bf9c40 = 0x25;
  strcpy_s(&data_180bf9c48,0x40,&unknown_180a22dd0,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_056);
  return (init_result != 0) - 1;
}
int initialize_module_038(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9c90 = &unknown_data_003;
  _data_180bf9c98 = &data_180bf9ca8;
  data_180bf9ca8 = 0;
  _data_180bf9ca0 = 0x23;
  strcpy_s(&data_180bf9ca8,0x40,&unknown_180a22eb0,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_057);
  return (init_result != 0) - 1;
}
int initialize_module_039(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9cf0 = &unknown_data_003;
  _data_180bf9cf8 = &data_180bf9d08;
  data_180bf9d08 = 0;
  _data_180bf9d00 = 0x1e;
  strcpy_s(&data_180bf9d08,0x40,&unknown_180a22e90,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_058);
  return (init_result != 0) - 1;
}
int initialize_module_040(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9d50 = &unknown_data_003;
  _data_180bf9d58 = &data_180bf9d68;
  data_180bf9d68 = 0;
  _data_180bf9d60 = 0x1e;
  strcpy_s(&data_180bf9d68,0x40,&unknown_180a22e70,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_059);
  return (init_result != 0) - 1;
}
int initialize_module_041(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9db0 = &unknown_data_003;
  _data_180bf9db8 = &data_180bf9dc8;
  data_180bf9dc8 = 0;
  _data_180bf9dc0 = 0x12;
  strcpy_s(&data_180bf9dc8,0x40,&unknown_180a22e58,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_060);
  return (init_result != 0) - 1;
}
int initialize_module_042(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9e10 = &unknown_data_003;
  _data_180bf9e18 = &data_180bf9e28;
  data_180bf9e28 = 0;
  _data_180bf9e20 = 0x13;
  strcpy_s(&data_180bf9e28,0x40,&unknown_180a22f28,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_061);
  return (init_result != 0) - 1;
}
int initialize_module_043(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9e70 = &unknown_data_003;
  _data_180bf9e78 = &data_180bf9e88;
  data_180bf9e88 = 0;
  _data_180bf9e80 = 0x13;
  strcpy_s(&data_180bf9e88,0x40,&unknown_180a22f10,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_062);
  return (init_result != 0) - 1;
}
int initialize_module_044(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9ed0 = &unknown_data_003;
  _data_180bf9ed8 = &data_180bf9ee8;
  data_180bf9ee8 = 0;
  _data_180bf9ee0 = 0x16;
  strcpy_s(&data_180bf9ee8,0x40,&unknown_180a22ef8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_063);
  return (init_result != 0) - 1;
}
int initialize_module_045(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9f30 = &unknown_data_003;
  _data_180bf9f38 = &data_180bf9f48;
  data_180bf9f48 = 0;
  _data_180bf9f40 = 0x1a;
  strcpy_s(&data_180bf9f48,0x40,&unknown_180a22ed8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_064);
  return (init_result != 0) - 1;
}
int initialize_module_046(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9f90 = &unknown_data_003;
  _data_180bf9f98 = &data_180bf9fa8;
  data_180bf9fa8 = 0;
  _data_180bf9fa0 = 0x15;
  strcpy_s(&data_180bf9fa8,0x40,&unknown_180a22f90,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_065);
  return (init_result != 0) - 1;
}
int initialize_module_047(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf9ff0 = &unknown_data_003;
  _data_180bf9ff8 = &data_180bfa008;
  data_180bfa008 = 0;
  _data_180bfa000 = 0x13;
  strcpy_s(&data_180bfa008,0x40,&unknown_180a22f78,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_066);
  return (init_result != 0) - 1;
}
int initialize_module_048(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfa050 = &unknown_data_003;
  _data_180bfa058 = &data_180bfa068;
  data_180bfa068 = 0;
  _data_180bfa060 = 0x13;
  strcpy_s(&data_180bfa068,0x40,&unknown_180a22f60,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_067);
  return (init_result != 0) - 1;
}
int initialize_module_049(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfa0b0 = &unknown_data_003;
  _data_180bfa0b8 = &data_180bfa0c8;
  data_180bfa0c8 = 0;
  _data_180bfa0c0 = 0x1b;
  strcpy_s(&data_180bfa0c8,0x40,&unknown_180a22f40,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_068);
  return (init_result != 0) - 1;
}
int initialize_module_050(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfa110 = &unknown_data_003;
  _data_180bfa118 = &data_180bfa128;
  data_180bfa128 = 0;
  _data_180bfa120 = 0x19;
  strcpy_s(&data_180bfa128,0x40,&unknown_180a23018,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_069);
  return (init_result != 0) - 1;
}
int initialize_module_051(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfa170 = &unknown_data_003;
  _data_180bfa178 = &data_180bfa188;
  data_180bfa188 = 0;
  _data_180bfa180 = 0x15;
  strcpy_s(&data_180bfa188,0x40,&unknown_180a23000,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_070);
  return (init_result != 0) - 1;
}
int initialize_module_052(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfa1d0 = &unknown_data_003;
  _data_180bfa1d8 = &data_180bfa1e8;
  data_180bfa1e8 = 0;
  _data_180bfa1e0 = 0x28;
  strcpy_s(&data_180bfa1e8,0x40,&data_180a22fd0,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_071);
  return (init_result != 0) - 1;
}
int initialize_module_053(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfa230 = &unknown_data_003;
  _data_180bfa238 = &data_180bfa248;
  data_180bfa248 = 0;
  _data_180bfa240 = 0x23;
  strcpy_s(&data_180bfa248,0x40,&data_180a22fa8,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_072);
  return (init_result != 0) - 1;
}
int initialize_module_054(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfa290 = &unknown_data_003;
  _data_180bfa298 = &data_180bfa2a8;
  data_180bfa2a8 = 0;
  _data_180bfa2a0 = 0x17;
  strcpy_s(&data_180bfa2a8,0x40,&unknown_180a23068,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_073);
  return (init_result != 0) - 1;
}
int initialize_module_055(void)
{
  longlong init_result;
  init_result = execute_function(callback_function_074);
  return (init_result != 0) - 1;
}
int initialize_module_056(void)
{
  longlong init_result;
  init_result = execute_function(callback_function_075);
  return (init_result != 0) - 1;
}
int initialize_module_057(void)
{
  longlong init_result;
  init_result = execute_function(callback_function_076);
  return (init_result != 0) - 1;
}
int initialize_thread_pool_6(undefined8 handle,undefined8 flags,undefined8 mutex_attr,undefined8 mutex_type)
{
  longlong init_result;
  _Mtx_init_in_situ(0x180c91f70,2,mutex_attr,mutex_type,0xfffffffffffffffe);
  init_result = execute_function(callback_function_077);
  return (init_result != 0) - 1;
}
  data_180bfa368 = 0;
  _data_180bfa360 = 7;
  strcpy_s(&data_180bfa368,0x80,&unknown_180a0f5b8,str_len_param,0xfffffffffffffffe);
  _data_180bfa3e8 = &unknown_1809fcc28;
  _data_180bfa3f0 = &data_180bfa400;
  data_180bfa400 = 0;
  _data_180bfa3f8 = 9;
  strcpy_s(&data_180bfa400,0x80,&unknown_180a0f190);
  _data_180bfa480 = &unknown_1809fcc28;
  _data_180bfa488 = &data_180bfa498;
  data_180bfa498 = 0;
  _data_180bfa490 = 0xb;
  strcpy_s(&data_180bfa498,0x80,&unknown_180a0f168);
  _data_180bfa518 = &unknown_1809fcc28;
  _data_180bfa520 = &data_180bfa530;
  data_180bfa530 = 0;
  _data_180bfa528 = 7;
  strcpy_s(&data_180bfa530,0x80,&unknown_180a0f188);
  _data_180bfa5b0 = &unknown_1809fcc28;
  _data_180bfa5b8 = &data_180bfa5c8;
  data_180bfa5c8 = 0;
  _data_180bfa5c0 = 0xc;
  strcpy_s(&data_180bfa5c8,0x80,&unknown_180a0f178);
  _data_180bfa648 = &unknown_1809fcc28;
  _data_180bfa650 = &data_180bfa660;
  data_180bfa660 = 0;
  _data_180bfa658 = 9;
  strcpy_s(&data_180bfa660,0x80,&unknown_180a24c50);
  _data_180bfa6e0 = &unknown_1809fcc28;
  _data_180bfa6e8 = &data_180bfa6f8;
  data_180bfa6f8 = 0;
  _data_180bfa6f0 = 0xc;
  strcpy_s(&data_180bfa6f8,0x80,&unknown_180a24c60);
  init_result = execute_function(&unknown_180942600);
  return (init_result != 0) - 1;
}
int initialize_thread_pool_7(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfa780 = &unknown_1809fcc28;
  _data_180bfa788 = &data_180bfa798;
  data_180bfa798 = 0;
  _data_180bfa790 = 0x1b;
  strcpy_s(&data_180bfa798,0x80,&unknown_180a24bd0,str_len_param,0xfffffffffffffffe);
  _data_180bfa818 = &unknown_1809fcc28;
  _data_180bfa820 = &data_180bfa830;
  data_180bfa830 = 0;
  _data_180bfa828 = 0x19;
  strcpy_s(&data_180bfa830,0x80,&unknown_180a24bf0);
  _data_180bfa8b0 = &unknown_1809fcc28;
  _data_180bfa8b8 = &data_180bfa8c8;
  data_180bfa8c8 = 0;
  _data_180bfa8c0 = 0x1f;
  strcpy_s(&data_180bfa8c8,0x80,&unknown_180a24c10);
  _data_180bfa948 = &unknown_1809fcc28;
  _data_180bfa950 = &data_180bfa960;
  data_180bfa960 = 0;
  _data_180bfa958 = 0x1b;
  strcpy_s(&data_180bfa960,0x80,&unknown_180a24c30);
  _data_180bfa9e0 = &unknown_1809fcc28;
  _data_180bfa9e8 = &data_180bfa9f8;
  data_180bfa9f8 = 0;
  _data_180bfa9f0 = 0x20;
  strcpy_s(&data_180bfa9f8,0x80,&unknown_180a24d58);
  _data_180bfaa78 = &unknown_1809fcc28;
  _data_180bfaa80 = &data_180bfaa90;
  data_180bfaa90 = 0;
  _data_180bfaa88 = 0x20;
  strcpy_s(&data_180bfaa90,0x80,&unknown_180a24d80);
  init_result = execute_function(&unknown_180942620);
  return (init_result != 0) - 1;
}
int initialize_thread_pool_8(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfab10 = &unknown_1809fcc28;
  _data_180bfab18 = &data_180bfab28;
  data_180bfab28 = 0;
  _data_180bfab20 = 0x13;
  strcpy_s(&data_180bfab28,0x80,&unknown_180a24da8,str_len_param,0xfffffffffffffffe);
  _data_180bfaba8 = &unknown_1809fcc28;
  _data_180bfabb0 = &data_180bfabc0;
  data_180bfabc0 = 0;
  _data_180bfabb8 = 0x13;
  strcpy_s(&data_180bfabc0,0x80,&unknown_180a24da8);
  _data_180bfac40 = &unknown_1809fcc28;
  _data_180bfac48 = &data_180bfac58;
  data_180bfac58 = 0;
  _data_180bfac50 = 0x13;
  strcpy_s(&data_180bfac58,0x80,&unknown_180a24da8);
  _data_180bfacd8 = &unknown_1809fcc28;
  _data_180bface0 = &data_180bfacf0;
  data_180bfacf0 = 0;
  _data_180bface8 = 0x13;
  strcpy_s(&data_180bfacf0,0x80,&unknown_180a24da8);
  _data_180bfad70 = &unknown_1809fcc28;
  _data_180bfad78 = &data_180bfad88;
  data_180bfad88 = 0;
  _data_180bfad80 = 0xe;
  strcpy_s(&data_180bfad88,0x80,&unknown_180a24dc0);
  _data_180bfae08 = &unknown_1809fcc28;
  _data_180bfae10 = &data_180bfae20;
  data_180bfae20 = 0;
  _data_180bfae18 = 0xe;
  strcpy_s(&data_180bfae20,0x80,&unknown_180a24dc0);
  init_result = execute_function(&unknown_180942640);
  return (init_result != 0) - 1;
}
int initialize_module_058(void)
{
  longlong init_result;
  _data_180bfc150 = 0;
  uRam0000000180bfc158 = 0xf;
  data_180bfc140 = 0;
  _data_180bfc160 = 0;
  _data_180bfc168 = 0;
  init_result = execute_function(callback_function_078);
  return (init_result != 0) - 1;
}
int initialize_module_059(void)
{
  longlong init_result;
  _data_180bfaee8 = 3;
  _data_180bfaec0 = &data_180bfaec0;
  _data_180bfaec8 = &data_180bfaec0;
  _data_180bfaed0 = 0;
  _data_180bfaed8 = 0;
  _data_180bfaee0 = 0;
  init_result = execute_function(callback_function_079);
  return (init_result != 0) - 1;
}
int initialize_thread_pool_9(undefined8 handle,undefined8 flags,undefined8 mutex_attr,undefined8 mutex_type)
{
  longlong init_result;
  _Mtx_init_in_situ(0x180c91ff0,2,mutex_attr,mutex_type,0xfffffffffffffffe);
  _data_180c92050 = &g_shared_data_buffer;
  _data_180c92058 = &data_180c92068;
  _data_180c92060 = 0;
  data_180c92068 = 0;
  init_result = execute_function(callback_function_080);
  return (init_result != 0) - 1;
}
int initialize_module_060(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfaef0 = &g_shared_data_buffer;
  _data_180bfaef8 = &data_180bfaf08;
  data_180bfaf08 = 0;
  _data_180bfaf00 = 0x10;
  strcpy_s(&data_180bfaf08,0x400,&unknown_180a27a58,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_081);
  return (init_result != 0) - 1;
}
int initialize_module_061(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfb310 = &g_shared_data_buffer;
  _data_180bfb318 = &data_180bfb328;
  data_180bfb328 = 0;
  _data_180bfb320 = 3;
  strcpy_s(&data_180bfb328,0x400,&unknown_180a27a6c,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_082);
  return (init_result != 0) - 1;
}
int initialize_module_062(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bfb730 = &g_shared_data_buffer;
  _data_180bfb738 = &data_180bfb748;
  data_180bfb748 = 0;
  _data_180bfb740 = 5;
  strcpy_s(&data_180bfb748,0x400,&unknown_180a27a70,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_083);
  return (init_result != 0) - 1;
}
  data_180bf6060 = 0;
  _data_180bf6058 = 0xd;
  strcpy_s(&data_180bf6060,0x20,&unknown_180a01300,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_084);
  return (init_result != 0) - 1;
}
int initialize_module_063(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf6498 = &unknown_data_002;
  _data_180bf64a0 = &data_180bf64b0;
  data_180bf64b0 = 0;
  _data_180bf64a8 = 9;
  strcpy_s(&data_180bf64b0,0x20,&unknown_180a01330,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_085);
  return (init_result != 0) - 1;
}
  data_180bf6510 = 0;
  _data_180bf6508 = 0xd;
  strcpy_s(&data_180bf6510,0x20,&unknown_180a01300,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_086);
  return (init_result != 0) - 1;
}
int initialize_module_064(void)
{
  longlong init_result;
  undefined8 str_len_param;
  _data_180bf6558 = &unknown_data_002;
  _data_180bf6560 = &data_180bf6570;
  data_180bf6570 = 0;
  _data_180bf6568 = 9;
  strcpy_s(&data_180bf6570,0x20,&unknown_180a01330,str_len_param,0xfffffffffffffffe);
  init_result = execute_function(callback_function_087);
  return (init_result != 0) - 1;
}
  data_180c82841 = 1;
  data_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  system_initialize_001(handle,auStackX_18);
  system_initialize_002();
  system_initialize_003();
  return;
}
void WotsMainNativeSDLL(undefined8 handle)
{
  undefined8 auStackX_18 [2];
  data_180c82841 = 0;
  data_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  system_initialize_001(handle,auStackX_18);
  system_initialize_002();
  system_initialize_003();
  return;
}
  data_180bf0102 = 0;
  uVar5 = FUN_18062b1e0(_data_180c8ed18,0x7b8,8,3);
  _data_180c82868 = system_event_handler_011(uVar5);
  system_thread_manager_002(&puStack_98,handle);
  uVar3 = system_thread_manager_009(&puStack_98,&unknown_18098bae0);
  uVar14 = (ulonglong)(int)uVar3;
  if (uVar3 < uStack_88) {
    pcVar12 = (char *)(lStack_90 + uVar14);
    do {
      iVar2 = (int)uVar14;
      if (*pcVar12 == ' ') goto LAB_1800451a4;
      uVar14 = (ulonglong)(iVar2 + 1U);
      pcVar12 = pcVar12 + 1;
    } while (iVar2 + 1U < uStack_88);
  }
  iVar2 = -1;
LAB_1800451a4:
  uVar3 = iVar2 + 1;
  uVar14 = (ulonglong)(int)uVar3;
  if (uVar3 < uStack_88) {
    pcVar12 = (char *)(lStack_90 + uVar14);
    do {
      if (*pcVar12 == ' ') goto LAB_1800451ca;
      uVar15 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar15;
      pcVar12 = pcVar12 + 1;
    } while (uVar15 < uStack_88);
  }
  uVar14 = 0xffffffff;
LAB_1800451ca:
  if (iVar2 != -1) {
    system_thread_manager_010(&puStack_98,&puStack_78,uVar3,uVar14);
    puVar13 = &data_18098bc73;
    if (puStack_70 != (undefined *)0x0) {
      puVar13 = puStack_70;
    }
    uVar4 = atoi(puVar13);
    *(undefined4 *)(_data_180c82868 + 0x7b4) = uVar4;
    puStack_78 = &unknown_180a3c3e0;
    if (puStack_70 != (undefined *)0x0) {
      system_helper_001();
    }
    puStack_70 = (undefined *)0x0;
    uStack_60 = 0;
    puStack_78 = &unknown_18098bcb0;
  }
  system_event_handler_012();
  uVar5 = FUN_18062b1e0(_data_180c8ed18,0x213458,8,10);
  _data_180c86940 = FUN_180067bc0(uVar5);
  plVar6 = (longlong *)FUN_18062b1e0(_data_180c8ed18,0xe8,8,3);
  plStackX_10 = plVar6;
  system_cleanup_006(plVar6);
  *plVar6 = (longlong)&unknown_1809ff040;
  pplStackX_18 = (longlong **)(plVar6 + 0x18);
  *pplStackX_18 = (longlong *)&unknown_18098bcb0;
  plVar6[0x19] = 0;
  *(undefined4 *)(plVar6 + 0x1a) = 0;
  *pplStackX_18 = (longlong *)&unknown_180a3c3e0;
  plVar6[0x1b] = 0;
  plVar6[0x19] = 0;
  *(undefined4 *)(plVar6 + 0x1a) = 0;
  (*(code *)(*pplStackX_18)[2])(pplStackX_18,handle);
  plVar6[0x1c] = flags;
  plStack_48 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar7 = _data_180c82868;
  pplStackX_18 = &plStackX_10;
  plStackX_10 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  system_event_handler_014(lVar7,&plStackX_10);
  while( true ) {
    if ((undefined *)*plVar6 == &unknown_1809ff040) {
      cVar16 = (char)plVar6[2] != '\0';
    }
    else {
      cVar16 = (**(code **)((undefined *)*plVar6 + 0x68))(plVar6);
    }
    if (cVar16 != '\0') break;
    Sleep(1);
  }
  (**(code **)(*plVar6 + 0x38))(plVar6);
  puStack_98 = &unknown_180a3c3e0;
  if (lStack_90 == 0) {
    return;
  }
  system_helper_001();
}
  data_180c82841 = 1;
  data_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  system_initialize_001(handle,auStackX_18);
  system_initialize_002();
  system_initialize_003();
  return;
}
void WotsMainNative(undefined8 handle)
{
  undefined8 auStackX_18 [2];
  data_180c82841 = 0;
  data_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  system_initialize_001(handle,auStackX_18);
  system_initialize_002();
  system_initialize_003();
  return;
}
void WotsMainNativeCoreCLR(undefined8 handle)
{
  undefined8 auStackX_18 [2];
  data_180c82841 = 0;
  data_180c82840 = 1;
  auStackX_18[0] = GetModuleHandleA(0);
  system_initialize_001(handle,auStackX_18);
  system_initialize_002();
  system_initialize_003();
  return;
}
    data_180c82852 = iVar8 != 0xb7;
  }
  system_data_manager_001(_data_180c86928,0,0xd,&unknown_1809fd038,data_180c82852);
  if (puStack_28 == (undefined *)0x0) {
    return;
  }
  system_helper_001();
}
    data_180c82870 = 0;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  system_thread_manager_002(&puStack_48,handle);
  FUN_180652400(&uStack_68,&puStack_48);
  puStack_48 = &unknown_180a3c3e0;
  if (lStack_40 != 0) {
    system_helper_001();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &unknown_18098bcb0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  FUN_180652b60(&uStack_88,&uStack_68);
  FUN_180653220(&uStack_88,auStack_a8);
  if (0x1fff < uStack_98) {
    uStack_98 = 0x1fff;
  }
  puVar1 = &data_18098bc73;
  if (puStack_a0 != (undefined *)0x0) {
    puVar1 = puStack_a0;
  }
  memcpy(&data_180c82870,puVar1,(longlong)(int)uStack_98);
}
    data_180c84870 = 0;
    return;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(handle + lVar2) != '\0');
  uVar1 = (uint)lVar2;
  if (0x1fff < uVar1) {
    uVar1 = 0x1fff;
  }
  memcpy(&data_180c84870,handle,(longlong)(int)uVar1);
}
          data_180c82860 = 1;
          data_180c82853 = 0;
          *(undefined1 *)(_data_180c86870 + 0x1f0) = 0;
          puStack_2c8 = &unknown_180a3c3e0;
          uStack_2b0 = 0;
          puStack_2c0 = (undefined1 *)0x0;
          uStack_2b8 = 0;
          if (puVar17 != (undefined *)0x0) {
            lVar20 = -1;
            do {
              lVar9 = lVar20;
              lVar20 = lVar9 + 1;
            } while (puVar17[lVar20] != '\0');
            if ((int)lVar20 != 0) {
              iVar19 = (int)lVar9 + 2;
              iVar6 = iVar19;
              if (iVar19 < 0x10) {
                iVar6 = 0x10;
              }
              puVar11 = (undefined1 *)FUN_18062b420(_data_180c8ed18,(longlong)iVar6,0x13);
              *puVar11 = 0;
              puStack_2c0 = puVar11;
              uVar7 = system_helper_002(puVar11);
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar7);
              memcpy(puVar11,puVar17,iVar19);
            }
          }
          uStack_2b8 = 0;
          strstr(&data_18098bc73,&unknown_1809fd160);
          strstr(&data_18098bc73,&unknown_1809fd170);
          strstr(&data_18098bc73,&unknown_1809fd180);
          strstr(&data_18098bc73,&unknown_1809fd190);
          strstr(&data_18098bc73,&unknown_1809fd1a0);
          strstr(&data_18098bc73,&unknown_1809fd1b0);
          data_180c82842 = 1;
          data_180c8ecec = 1;
          lVar20 = strstr(puVar17,&unknown_1809fd1c0);
          if (lVar20 == 0) {
            lVar20 = strstr(puVar17,&unknown_1809fd1d8);
            if ((((((lVar20 == 0) && (lVar20 = strstr(puVar17,&unknown_1809fd1f0), lVar20 == 0)) &&
                  (lVar20 = strstr(puVar17,&unknown_1809fd208), lVar20 == 0)) &&
                 ((lVar20 = strstr(puVar17,&unknown_1809fd220), lVar20 == 0 &&
                  (lVar20 = strstr(puVar17,&unknown_1809fd238), lVar20 == 0)))) &&
                ((lVar20 = strstr(puVar17,&unknown_1809fd250), lVar20 == 0 &&
                 ((lVar20 = strstr(puVar17,&unknown_1809fd260), lVar20 == 0 &&
                  (lVar20 = strstr(puVar17,&unknown_1809fd270), lVar20 == 0)))))) &&
               (lVar20 = strstr(puVar17,&unknown_1809fd288), lVar20 == 0)) {
              *(undefined2 *)(lVar24 + 0x24) = 0x101;
              *(undefined1 *)(lVar24 + 0x28) = 1;
            }
            else {
              data_180c82851 = 1;
            }
          }
          else {
            *(undefined2 *)(lVar24 + 0x24) = 0;
          }
          puStack_2c0 = (undefined1 *)0x0;
          uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
          puStack_2c8 = &unknown_18098bcb0;
        }
        else if (uVar8 == 0xb) {
          iVar6 = strcmp(puVar11,&unknown_1809fd298);
          if (iVar6 != 0) goto LAB_18004d668;
          data_180c82860 = 1;
          data_180c82853 = 0;
          data_180c82842 = 1;
          lVar24 = strstr(puVar17,&unknown_1809fd2a8);
          if (lVar24 != 0) {
            puVar17 = &unknown_1809fd2c0;
            goto LAB_18004d511;
          }
        }
        else {
          if (uVar8 == 0xc) {
            iVar6 = strcmp(puVar11,&unknown_1809fd318);
            bVar31 = iVar6 == 0;
          }
          else {
LAB_18004d668:
            bVar31 = false;
          }
          if (bVar31) {
            system_thread_manager_002(&puStack_238,puVar17);
            uVar8 = system_thread_manager_009(&puStack_238,&unknown_1809fd318);
            flags1 = (ulonglong)(int)uVar8;
            if (uVar8 < uStack_228) {
              pcVar12 = (char *)(lStack_230 + flags1);
              do {
                iVar6 = (int)flags1;
                if (*pcVar12 == ' ') goto LAB_18004d6b7;
                flags1 = (ulonglong)(iVar6 + 1U);
                pcVar12 = pcVar12 + 1;
              } while (iVar6 + 1U < uStack_228);
            }
            iVar6 = -1;
LAB_18004d6b7:
            uVar8 = iVar6 + 1;
            flags1 = (ulonglong)(int)uVar8;
            if (uVar8 < uStack_228) {
              pcVar12 = (char *)(lStack_230 + flags1);
              do {
                if (*pcVar12 == ' ') goto LAB_18004d6dd;
                flags6 = (int)flags1 + 1;
                flags1 = (ulonglong)flags6;
                pcVar12 = pcVar12 + 1;
              } while (flags6 < uStack_228);
            }
            flags1 = 0xffffffff;
LAB_18004d6dd:
            if (iVar6 != -1) {
              system_thread_manager_010(&puStack_238,&puStack_1b8,uVar8,flags1);
              iVar6 = iStack_1a8;
              iVar19 = 0;
              lVar20 = strchr(puStack_1b0,0x2e);
              if (lVar20 != 0) {
                do {
                  iVar19 = iVar19 + 1;
                  lVar20 = strchr(lVar20 + 1,0x2e);
                } while (lVar20 != 0);
                if ((iVar19 == 3) && (iVar6 - 7U < 9)) {
                  puVar18 = &data_18098bc73;
                  if (puStack_1b0 != (undefined *)0x0) {
                    puVar18 = puStack_1b0;
                  }
                  (**(code **)(*(longlong *)(lVar24 + 400) + 0x10))
                            ((longlong *)(lVar24 + 400),puVar18);
                }
              }
              puStack_1b8 = &unknown_180a3c3e0;
              if (puStack_1b0 != (undefined *)0x0) {
                system_helper_001();
              }
              puStack_1b0 = (undefined *)0x0;
              uStack_1a0 = 0;
              puStack_1b8 = &unknown_18098bcb0;
            }
            puStack_238 = &unknown_180a3c3e0;
            if (lStack_230 != 0) {
              system_helper_001();
            }
            lStack_230 = 0;
            uStack_220 = 0;
            puStack_238 = &unknown_18098bcb0;
          }
          else {
            if (uVar8 == 0x11) {
              iVar6 = strcmp(puVar11,&unknown_1809fd328);
              bVar31 = iVar6 == 0;
            }
            else {
              bVar31 = false;
            }
            if (bVar31) {
              system_thread_manager_002(&puStack_218,puVar17);
              uVar8 = system_thread_manager_009(&puStack_218,&unknown_1809fd328);
              flags1 = (ulonglong)(int)uVar8;
              if (uVar8 < uStack_208) {
                pcVar12 = (char *)(lStack_210 + flags1);
                do {
                  iVar6 = (int)flags1;
                  if (*pcVar12 == ' ') goto LAB_18004d849;
                  flags1 = (ulonglong)(iVar6 + 1U);
                  pcVar12 = pcVar12 + 1;
                } while (iVar6 + 1U < uStack_208);
              }
              iVar6 = -1;
LAB_18004d849:
              uVar8 = iVar6 + 1;
              flags1 = (ulonglong)(int)uVar8;
              if (uVar8 < uStack_208) {
                pcVar12 = (char *)(lStack_210 + flags1);
                do {
                  if (*pcVar12 == ' ') goto LAB_18004d876;
                  flags6 = (int)flags1 + 1;
                  flags1 = (ulonglong)flags6;
                  pcVar12 = pcVar12 + 1;
                } while (flags6 < uStack_208);
              }
              flags1 = 0xffffffff;
LAB_18004d876:
              if (iVar6 != -1) {
                system_thread_manager_010(&puStack_218,&puStack_198,uVar8,flags1);
                iVar6 = iStack_188;
                iVar19 = 0;
                lVar24 = strchr(puStack_190,0x2e);
                if (lVar24 != 0) {
                  do {
                    iVar19 = iVar19 + 1;
                    lVar24 = strchr(lVar24 + 1,0x2e);
                  } while (lVar24 != 0);
                  if ((iVar19 == 3) && (iVar6 - 7U < 9)) {
                    puVar18 = &data_18098bc73;
                    if (puStack_190 != (undefined *)0x0) {
                      puVar18 = puStack_190;
                    }
                    (**(code **)(module_pointer_010 + 0x10))(&data_180bf5bc0,puVar18);
                  }
                }
                puStack_198 = &unknown_180a3c3e0;
                if (puStack_190 != (undefined *)0x0) {
                  system_helper_001();
                }
                puStack_190 = (undefined *)0x0;
                uStack_180 = 0;
                puStack_198 = &unknown_18098bcb0;
              }
              puStack_218 = &unknown_180a3c3e0;
              if (lStack_210 != 0) {
                system_helper_001();
              }
              lStack_210 = 0;
              uStack_200 = 0;
              puStack_218 = &unknown_18098bcb0;
            }
            else {
              if (uVar8 == 0xe) {
                iVar6 = strcmp(puVar11,&unknown_1809fd340);
                bVar31 = iVar6 == 0;
              }
              else {
                bVar31 = false;
              }
              if (bVar31) {
                system_thread_manager_002(&puStack_1f8,puVar17);
                uVar8 = system_thread_manager_009(&puStack_1f8,&unknown_1809fd340);
                flags1 = (ulonglong)(int)uVar8;
                if (uVar8 < uStack_1e8) {
                  pcVar12 = (char *)(lStack_1f0 + flags1);
                  do {
                    if (*pcVar12 == ' ') goto LAB_18004d9e4;
                    uVar8 = (int)flags1 + 1;
                    flags1 = (ulonglong)uVar8;
                    pcVar12 = pcVar12 + 1;
                  } while (uVar8 < uStack_1e8);
                }
                flags1 = 0xffffffff;
LAB_18004d9e4:
                uVar8 = (int)flags1 + 1;
                flags8 = (ulonglong)(int)uVar8;
                if (uVar8 < uStack_1e8) {
                  pcVar12 = (char *)(lStack_1f0 + flags8);
                  do {
                    if (*pcVar12 == ' ') goto LAB_18004da0a;
                    flags6 = (int)flags8 + 1;
                    flags8 = (ulonglong)flags6;
                    pcVar12 = pcVar12 + 1;
                  } while (flags6 < uStack_1e8);
                }
                flags8 = 0xffffffff;
LAB_18004da0a:
                if ((int)flags1 != -1) {
                  system_thread_manager_010(&puStack_1f8,&puStack_2a8,uVar8,flags8);
                  system_thread_manager_011(&puStack_2a8);
                  if (uStack_298 != 0) {
                    iVar6 = 0;
                    lVar20 = (longlong)(int)(uStack_298 - 1);
                    if (0 < (int)(uStack_298 - 1)) {
                      do {
                        if (puStack_2a0[lVar20] != '\"') break;
                        iVar6 = iVar6 + 1;
                        lVar20 = lVar20 + -1;
                      } while (0 < lVar20);
                    }
                    uStack_298 = uStack_298 - iVar6;
                    puStack_2a0[uStack_298] = 0;
                  }
                  system_thread_manager_012(&puStack_2a8,1);
                  puVar18 = &data_18098bc73;
                  if (puStack_2a0 != (undefined *)0x0) {
                    puVar18 = puStack_2a0;
                  }
                  lVar20 = -1;
                  do {
                    lVar20 = lVar20 + 1;
                  } while (puVar18[lVar20] != '\0');
                  if ((int)lVar20 < 0x400) {
                    input_offset_value = (int)lVar20;
                    strcpy_s(input_buffer_pointer,0x400);
                  }
                  else {
                    system_thread_003(&unknown_18098bc48,0x400);
                    input_offset_value = 0;
                    *input_buffer_pointer = 0;
                  }
                  uVar8 = uStack_298;
                  flags1 = (ulonglong)uStack_298;
                  if (puStack_2a0 != (undefined *)0x0) {
                    system_thread_manager_001(lVar24 + 0x170,flags1);
                  }
                  if (uVar8 != 0) {
                    memcpy(*(undefined8 *)(lVar24 + 0x178),puStack_2a0,flags1);
                  }
                  *(undefined4 *)(lVar24 + 0x180) = 0;
                  if (*(longlong *)(lVar24 + 0x178) != 0) {
                    *(undefined1 *)(flags1 + *(longlong *)(lVar24 + 0x178)) = 0;
                  }
                  *(undefined4 *)(lVar24 + 0x18c) = uStack_28c;
                  puStack_2a8 = &unknown_180a3c3e0;
                  if (puStack_2a0 != (undefined *)0x0) {
                    system_helper_001(puStack_2a0,puStack_2a0);
                  }
                  puStack_2a0 = (undefined *)0x0;
                  uStack_290 = 0;
                  puStack_2a8 = &unknown_18098bcb0;
                  flags1 = 0;
                }
                puStack_1f8 = &unknown_180a3c3e0;
                if (lStack_1f0 != 0) {
                  system_helper_001(lStack_1f0,flags1);
                }
                lStack_1f0 = 0;
                uStack_1e0 = 0;
                puStack_1f8 = &unknown_18098bcb0;
              }
              else {
                if (uVar8 == 0x16) {
                  iVar6 = strcmp(puVar11,&unknown_1809fd350);
                  if (iVar6 == 0) {
                    data_180c82844 = 1;
                    data_180c82843 = 1;
                    goto LAB_18004d527;
                  }
LAB_18004dbe3:
                  bVar31 = false;
                }
                else {
                  if (uVar8 != 0x12) goto LAB_18004dbe3;
                  iVar6 = strcmp(puVar11,&unknown_1809fd368);
                  bVar31 = iVar6 == 0;
                }
                if (bVar31) {
                  system_thread_manager_002(&puStack_1d8,puVar17);
                  uVar8 = system_thread_manager_009(&puStack_1d8,&unknown_1809fd368);
                  flags1 = (ulonglong)(int)uVar8;
                  if (uVar8 < uStack_1c8) {
                    pcVar12 = (char *)(lStack_1d0 + flags1);
                    do {
                      if (*pcVar12 == ' ') goto LAB_18004dc44;
                      uVar8 = (int)flags1 + 1;
                      flags1 = (ulonglong)uVar8;
                      pcVar12 = pcVar12 + 1;
                    } while (uVar8 < uStack_1c8);
                  }
                  flags1 = 0xffffffff;
LAB_18004dc44:
                  uVar8 = (int)flags1 + 1;
                  flags8 = (ulonglong)(int)uVar8;
                  if (uVar8 < uStack_1c8) {
                    pcVar12 = (char *)(lStack_1d0 + flags8);
                    do {
                      if (*pcVar12 == ' ') goto LAB_18004dc6a;
                      flags6 = (int)flags8 + 1;
                      flags8 = (ulonglong)flags6;
                      pcVar12 = pcVar12 + 1;
                    } while (flags6 < uStack_1c8);
                  }
                  flags8 = 0xffffffff;
LAB_18004dc6a:
                  if ((int)flags1 != -1) {
                    system_thread_manager_010(&puStack_1d8,&puStack_258,uVar8,flags8);
                    system_thread_manager_012(&puStack_258,1);
                    uVar8 = uStack_248;
                    flags1 = (ulonglong)uStack_248;
                    if (lStack_250 != 0) {
                      system_thread_manager_001(lVar24 + 0x170,flags1);
                    }
                    if (uVar8 != 0) {
                      memcpy(*(undefined8 *)(lVar24 + 0x178),lStack_250,flags1);
                    }
                    *(undefined4 *)(lVar24 + 0x180) = 0;
                    if (*(longlong *)(lVar24 + 0x178) != 0) {
                      *(undefined1 *)(flags1 + *(longlong *)(lVar24 + 0x178)) = 0;
                    }
                    *(undefined4 *)(lVar24 + 0x18c) = uStack_23c;
                    *(undefined1 *)(lVar24 + 0x168) = 1;
                    puStack_258 = &unknown_180a3c3e0;
                    if (lStack_250 != 0) {
                      system_helper_001(lStack_250,lStack_250);
                    }
                    lStack_250 = 0;
                    uStack_240 = 0;
                    puStack_258 = &unknown_18098bcb0;
                    flags1 = 0;
                  }
                  puStack_1d8 = &unknown_180a3c3e0;
                  if (lStack_1d0 != 0) {
                    system_helper_001(lStack_1d0,flags1);
                  }
                  lStack_1d0 = 0;
                  uStack_1c0 = 0;
                  puStack_1d8 = &unknown_18098bcb0;
                }
                else {
                  if (uVar8 == 0x17) {
                    iVar6 = strcmp(puVar11,&unknown_1809fd380);
                    if (iVar6 == 0) {
                      data_180c82842 = 1;
                      goto LAB_18004d527;
                    }
LAB_18004dda1:
                    bVar31 = false;
                  }
                  else {
                    if (uVar8 != 0xb) goto LAB_18004dda1;
                    iVar6 = strcmp(puVar11,&unknown_1809fd398);
                    bVar31 = iVar6 == 0;
                  }
                  if (bVar31) {
                    system_thread_manager_002(&puStack_178,puVar17);
                    system_thread_manager_005(&puStack_178);
                    system_thread_manager_006(&puStack_178);
                    system_event_handler_002(&data_180bf5770,&puStack_178);
                    data_180c82842 = 1;
                    puStack_178 = &unknown_180a3c3e0;
                    if (lStack_170 != 0) {
                      system_helper_001();
                    }
                    lStack_170 = 0;
                    uStack_160 = 0;
                    puStack_178 = &unknown_18098bcb0;
                  }
                  else {
                    puVar16 = &data_18098bc73;
                    if (puVar11 != (undefined1 *)0x0) {
                      puVar16 = puVar11;
                    }
                    lVar24 = strstr(puVar16);
                    if (lVar24 != 0) {
                      flags9 = 0;
                      puStack_288 = &unknown_180a3c3e0;
                      uStack_270 = 0;
                      puStack_280 = (undefined4 *)0x0;
                      uStack_278 = 0;
                      puVar13 = (undefined4 *)FUN_18062b420(_data_180c8ed18,0x10,0x13);
                      *(undefined1 *)puVar13 = 0;
                      puStack_280 = puVar13;
                      uVar7 = system_helper_002(puVar13);
                      uStack_270 = CONCAT44(uStack_270._4_4_,uVar7);
                      *puVar13 = 0x726f662f;
                      puVar13[1] = 0x5f646563;
                      puVar13[2] = 0x666e6f63;
                      puVar13[3] = 0x3a6769;
                      uStack_278 = 0xf;
                      flags1 = flags9;
                      flags8 = flags9;
                      if (0 < (int)(uVar8 - 0xe)) goto LAB_18004ded0;
                      goto LAB_18004df0e;
                    }
                    if (uVar8 == 0xf) {
                      iVar6 = strcmp(puVar11);
                      if (iVar6 == 0) {
                        cStack_338 = '\x01';
                        *(undefined1 *)(_data_180c8a9a0 + 0x22) = 1;
                        goto LAB_18004d527;
                      }
LAB_18004e25f:
                      bVar31 = false;
                    }
                    else {
                      if (uVar8 == 0xc) {
                        iVar6 = strcmp(puVar11);
                        if (iVar6 == 0) {
                          puVar17 = &unknown_1809fd3f0;
LAB_18004d511:
                          system_data_manager_002(_data_180c86928,puVar17);
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 == 0x1a) {
                        iVar6 = strcmp(puVar11);
                        if (iVar6 == 0) {
                          *(undefined1 *)(_data_180c8a9a0 + 0x21) = 1;
                          goto LAB_18004d527;
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 == 0x10) {
                        iVar6 = strcmp(puVar11);
                        if (iVar6 == 0) {
                          data_180bf0101 = 0;
                          goto LAB_18004d527;
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 == 0x18) {
                        iVar6 = strcmp(puVar11);
                        if (iVar6 == 0) {
                          data_180c8ecec = 1;
                          goto LAB_18004d527;
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 != 0x14) goto LAB_18004e25f;
                      iVar6 = strcmp(puVar11);
                      bVar31 = iVar6 == 0;
                    }
                    lVar24 = _data_180c8a9a0;
                    if (bVar31) {
                      system_thread_manager_002(&puStack_330,puVar17);
                      system_thread_manager_005(&puStack_330);
                      uVar8 = 0;
                      pcVar12 = pcStack_328;
                      if (uStack_320 != 0) {
                        do {
                          if (*pcVar12 == '/') goto LAB_18004e2b6;
                          uVar8 = uVar8 + 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar8 < uStack_320);
                      }
                      uVar8 = 0xffffffff;
LAB_18004e2b6:
                      if (uVar8 != 0xffffffff) {
                        lVar24 = system_thread_manager_010(&puStack_330,&puStack_c8,0);
                        if (pcStack_328 != (char *)0x0) {
                          system_helper_001();
                        }
                        uStack_320 = *(uint *)(lVar24 + 0x10);
                        pcStack_328 = *(char **)(lVar24 + 8);
                        uStack_318 = *(longlong *)(lVar24 + 0x18);
                        *(undefined4 *)(lVar24 + 0x10) = 0;
                        *(undefined8 *)(lVar24 + 8) = 0;
                        *(undefined8 *)(lVar24 + 0x18) = 0;
                        puStack_c8 = &unknown_180a3c3e0;
                        if (lStack_c0 != 0) {
                          system_helper_001();
                        }
                        lStack_c0 = 0;
                        uStack_b0 = 0;
                        puStack_c8 = &unknown_18098bcb0;
                      }
                      system_thread_manager_006(&puStack_330);
                      uVar8 = uStack_320;
                      lVar24 = _data_180c8a9a0;
                      *(undefined1 *)(_data_180c8a9a0 + 0x48) = 1;
                      flags1 = (ulonglong)uStack_320;
                      if (pcStack_328 != (char *)0x0) {
                        system_thread_manager_001(lVar24 + 0x50,flags1);
                      }
                      if (uVar8 != 0) {
                        memcpy(*(undefined8 *)(lVar24 + 0x58),pcStack_328,flags1);
                      }
                      *(undefined4 *)(lVar24 + 0x60) = 0;
                      if (*(longlong *)(lVar24 + 0x58) != 0) {
                        *(undefined1 *)(flags1 + *(longlong *)(lVar24 + 0x58)) = 0;
                      }
                      *(uint *)(lVar24 + 0x6c) = uStack_318._4_4_;
                      puStack_330 = &unknown_180a3c3e0;
                      if (pcStack_328 != (char *)0x0) {
                        system_helper_001(pcStack_328,pcStack_328);
                      }
                      pcStack_328 = (char *)0x0;
                      uStack_318 = (ulonglong)uStack_318._4_4_ << 0x20;
                      puStack_330 = &unknown_18098bcb0;
                    }
                    else if (cStack_338 == '\0') {
                      flags7 = system_thread_manager_007();
                      puVar16 = (undefined1 *)0x0;
                      puStack_2e8 = &unknown_180a3c3e0;
                      uStack_2d0 = 0;
                      puStack_2e0 = (undefined1 *)0x0;
                      uStack_2d8 = 0;
                      flags6 = uStack_334 | 1;
                      puVar11 = puVar16;
                      puVar14 = puVar16;
                      uStack_334 = flags6;
                      uStack_158 = flags7;
                      if (uVar8 != 0) {
                        iVar6 = uVar8 + 1;
                        if (iVar6 < 0x10) {
                          iVar6 = 0x10;
                        }
                        puVar14 = (undefined1 *)FUN_18062b420(_data_180c8ed18,(longlong)iVar6,0x13);
                        *puVar14 = 0;
                        puStack_2e0 = puVar14;
                        puVar11 = (undefined1 *)system_helper_002(puVar14);
                        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)puVar11);
                      }
                      lVar24 = 1;
                      uVar30 = 1;
                      if (1 < (int)uVar8) {
                        flags1 = 0;
                        do {
                          flags7 = uStack_158;
                          flags6 = uStack_334;
                          if (uVar8 <= uVar30) break;
                          flags = puStack_308[lVar24];
                          iVar6 = (int)flags1;
                          flags3 = iVar6 + 1;
                          flags1 = (ulonglong)flags3;
                          if (flags3 != 0) {
                            flags6 = iVar6 + 2;
                            if (puVar14 == (undefined1 *)0x0) {
                              if ((int)flags6 < 0x10) {
                                flags6 = 0x10;
                              }
                              puVar14 = (undefined1 *)
                                        FUN_18062b420(_data_180c8ed18,(longlong)(int)flags6,0x13);
                              *puVar14 = 0;
                            }
                            else {
                              if (flags6 <= (uint)puVar11) goto LAB_18004e56d;
                              uStack_348 = 0x13;
                              puVar14 = (undefined1 *)
                                        FUN_18062b8b0(_data_180c8ed18,puVar14,flags6,0x10);
                            }
                            puStack_2e0 = puVar14;
                            flags6 = system_helper_002(puVar14);
                            uStack_2d0 = CONCAT44(uStack_2d0._4_4_,flags6);
                            puVar11 = (undefined1 *)(ulonglong)flags6;
                          }
LAB_18004e56d:
                          puVar16[(longlong)puVar14] = flags;
                          puVar14[flags1] = 0;
                          puVar16 = (undefined1 *)(ulonglong)flags3;
                          uVar30 = uVar30 + 1;
                          lVar24 = lVar24 + 1;
                          flags7 = uStack_158;
                          flags6 = uStack_334;
                          uStack_2d8 = flags3;
                        } while (lVar24 < (int)uVar8);
                      }
                      system_event_handler_007(puVar11,&puStack_2e8,flags7);
                      uStack_334 = flags6 & 0xfffffffe;
                      puStack_2e8 = &unknown_180a3c3e0;
                      if (puVar14 != (undefined1 *)0x0) {
                        system_helper_001(puVar14);
                      }
                      puStack_2e0 = (undefined1 *)0x0;
                      uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                      puStack_2e8 = &unknown_18098bcb0;
                      puVar11 = puStack_308;
                      puVar17 = puStack_268;
                    }
                    else {
                      cStack_338 = '\0';
                      if (puVar11 != (undefined1 *)0x0) {
                        system_thread_manager_001(_data_180c8a9a0 + 0x28,puVar14);
                      }
                      if (uVar8 != 0) {
                        memcpy(*(undefined8 *)(lVar24 + 0x30),puVar11,puVar14);
                      }
                      *(undefined4 *)(lVar24 + 0x38) = 0;
                      if (*(longlong *)(lVar24 + 0x30) != 0) {
                        puVar14[*(longlong *)(lVar24 + 0x30)] = 0;
                      }
                      *(undefined4 *)(lVar24 + 0x44) = uStack_2f8._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
LAB_18004d527:
        puVar14 = (undefined1 *)0x0;
        uStack_300 = 0;
        lVar24 = lStack_260;
        if (puVar11 != (undefined1 *)0x0) {
          *puVar11 = 0;
        }
      }
      else {
        system_thread_manager_001(&puStack_310,uVar8 + 1);
        puStack_308[uStack_300] = bVar1;
        uStack_300 = uStack_300 + 1;
        puVar14 = (undefined1 *)(ulonglong)uStack_300;
        puVar14[(longlong)puStack_308] = 0;
        puVar11 = puStack_308;
      }
      uStack_2f0 = uStack_2f0 + 1;
    } while (uStack_2f0 < uStack_150);
  }
  puStack_98 = &unknown_data_003;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0x10;
  strcpy_s(auStack_80,0x40,&unknown_1809fd4b8);
  cVar5 = system_handle_manager_003(lVar24,&puStack_98);
  puStack_98 = &unknown_18098bcb0;
  if (cVar5 != '\0') {
    *(undefined4 *)(lVar24 + 0x20) = 1;
  }
  (**(code **)(**(longlong **)(_data_180c8ed08 + 0x18) + 0x30))
            (*(longlong **)(_data_180c8ed08 + 0x18),data_180c8ecec);
  puStack_310 = &unknown_180a3c3e0;
  if (puVar11 != (undefined1 *)0x0) {
    system_helper_001(puVar11);
  }
  puStack_308 = (undefined1 *)0x0;
  uStack_2f8 = uStack_2f8 & 0xffffffff00000000;
  puStack_310 = &unknown_18098bcb0;
  system_crypto_001(uStack_38 ^ (ulonglong)auStack_368);
  while (pbVar15 = pbVar15 + 1, uVar8 != 0) {
LAB_18004d1a2:
    bVar1 = *pbVar15;
    uVar8 = (uint)pbVar15[lVar24];
    if (bVar1 != uVar8) break;
  }
  if ((int)(bVar1 - uVar8) < 1) {
LAB_18004d1b9:
    flags7 = 1;
  }
  else {
LAB_18004d1c1:
    flags7 = 0;
  }
  system_helper_003(lVar9,init_result0,lVar20,flags7);
  while( true ) {
    flags8 = (ulonglong)(iVar6 + 1);
    flags1 = flags1 + 1;
    if ((longlong)(int)(uVar8 - 0xe) <= (longlong)flags1) break;
LAB_18004ded0:
    iVar6 = (int)flags8;
    flags8 = flags9;
    flags5 = flags9;
    do {
      flags6 = (uint)flags5;
      if (puVar11[flags8 + flags1] != *(char *)(flags5 + (longlong)puVar13)) break;
      flags6 = flags6 + 1;
      flags5 = (ulonglong)flags6;
      flags8 = flags8 + 1;
    } while ((longlong)flags8 < 0xf);
    if (flags6 == 0xf) goto LAB_18004df14;
  }
LAB_18004df0e:
  iVar6 = -1;
LAB_18004df14:
  system_thread_manager_010(&puStack_310,&puStack_128,iVar6 + 0xf,puVar14);
  puStack_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  uStack_d0 = 3;
  if (lStack_120 != 0) {
    system_event_handler_003(&puStack_128,&puStack_e8,&unknown_1809fd3c8);
  }
  puVar3 = puStack_e8;
  system_thread_manager_004(&puStack_148,puStack_e8);
  system_thread_manager_004(&puStack_108,puVar3 + 4);
  puVar4 = puStack_e0;
  if (((longlong)puStack_e0 - (longlong)puVar3 & 0xffffffffffffffe0U) != 0x40) {
LAB_18004e088:
    puStack_108 = &unknown_180a3c3e0;
    if (lStack_100 != 0) {
      system_helper_001();
    }
    lStack_100 = 0;
    uStack_f0 = 0;
    puStack_108 = &unknown_18098bcb0;
    puStack_148 = &unknown_180a3c3e0;
    if (lStack_140 != 0) {
      system_helper_001();
    }
    lStack_140 = 0;
    uStack_130 = 0;
    puStack_148 = &unknown_18098bcb0;
    for (pflags2 = puVar3; pflags2 != puVar4; pflags2 = pflags2 + 4) {
      (**(code **)*pflags2)(pflags2,0);
    }
    if (puVar3 != (undefined8 *)0x0) {
      system_helper_001(puVar3);
    }
    puStack_128 = &unknown_180a3c3e0;
    if (lStack_120 != 0) {
      system_helper_001();
    }
    lStack_120 = 0;
    uStack_110 = 0;
    puStack_128 = &unknown_18098bcb0;
    puStack_288 = &unknown_180a3c3e0;
    system_helper_001(puVar13);
  }
  system_ui_002(_data_180c86920,&puStack_148,&puStack_108);
  lVar9 = _data_180c86920 + 0x90;
  lVar24 = FUN_18062b420(_data_180c8ed18,0x40,*(undefined1 *)(_data_180c86920 + 0xb8));
  system_thread_manager_003(lVar24 + 0x20,&puStack_148);
  lVar20 = system_event_handler_005(lVar9,acStack_336,lVar24 + 0x20);
  if (acStack_336[0] == '\0') {
    system_event_handler_009(extraout_XMM0_Da_00,lVar24);
    goto LAB_18004e088;
  }
  if (lVar20 != lVar9) {
    if (*(int *)(lVar20 + 0x30) == 0) {
LAB_18004e057:
      flags7 = 1;
      goto LAB_18004e062;
    }
    if (*(int *)(lVar24 + 0x30) != 0) {
      pbVar15 = *(byte **)(lVar20 + 0x28);
      init_result0 = *(longlong *)(lVar24 + 0x28) - (longlong)pbVar15;
      do {
        bVar1 = *pbVar15;
        uVar8 = (uint)pbVar15[init_result0];
        if (bVar1 != uVar8) break;
        pbVar15 = pbVar15 + 1;
      } while (uVar8 != 0);
      if ((int)(bVar1 - uVar8) < 1) goto LAB_18004e057;
    }
  }
  flags7 = 0;
LAB_18004e062:
  system_helper_003(lVar24,lVar20,lVar9,flags7);
}
    thread_pool_4_status_code = 1;
    iVar7 = _Cnd_broadcast(0x180c91240);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }
    iVar7 = _Mtx_unlock(0x180c91288);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }
    system_cleanup_001(0x180c911a0);
  }
  *(undefined4 *)(_data_180c86910 + 4) = 0;
  if (*(char *)(lVar6 + 0x1ee) == '\0') {
    (**(code **)(**(longlong **)(lVar6 + 0x2b0) + 0xe0))();
    *(int *)(lVar6 + 0x224) = *(int *)(lVar6 + 0x224) + 1;
    if (*(int *)(_data_180c8a9c8 + 0xe0) == 0) {
      if (*(char *)(lVar6 + 0x264) == '\0') {
        iVar7 = 10;
        if (10 < *(int *)(_data_180c8a9c8 + 0xbd0)) {
          iVar7 = *(int *)(_data_180c8a9c8 + 0xbd0);
        }
        fVar14 = (float)*(double *)(lVar6 + 0x208);
        if (1.0 / (float)iVar7 <= (float)*(double *)(lVar6 + 0x208)) {
          fVar14 = 1.0 / (float)iVar7;
        }
      }
      else {
        fVar14 = *(float *)(lVar6 + 0x268);
      }
      *(float *)(lVar6 + 0x220) = fVar14;
    }
    else {
      *(undefined4 *)(lVar6 + 0x220) = 0x3d088889;
      fVar14 = 0.033333335;
    }
    system_handle_manager_004(lVar6,fVar14);
    uVar5 = _data_180c82868;
    if ((_data_180c8a9c0 != 0) &&
       (pinit_result = *(longlong **)(_data_180c8a9c0 + 0x228), pinit_result != (longlong *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = pinit_result;
      (**(code **)(*pinit_result + 0x28))();
      system_event_handler_013(uVar5,&plStackX_10);
    }
    uVar5 = _data_180c82868;
    if (*(char *)(_data_180c8a9a0 + 0xa0) == '\0') {
      if ((_data_180c8a9c0 != 0) &&
         (pinit_result = *(longlong **)(_data_180c8a9c0 + 0x228), pinit_result != (longlong *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = pinit_result;
        (**(code **)(*pinit_result + 0x28))();
        system_event_handler_016(uVar5,&plStackX_18,0);
        pinit_result = *(longlong **)(_data_180c8a9c0 + 0x228);
        *(undefined8 *)(_data_180c8a9c0 + 0x228) = 0;
        if (pinit_result != (longlong *)0x0) {
          (**(code **)(*pinit_result + 0x38))();
        }
      }
      func_0x00018005c480(_data_180c8ed68);
      pinit_result = _data_180c8ed00;
      if (*(code **)(*_data_180c8ed00 + 8) == (code *)&unknown_180639070) {
        *(undefined4 *)(_data_180c8ed00 + 9) = 0;
        puVar4 = (undefined1 *)pinit_result[8];
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 0;
        }
        *(undefined4 *)((longlong)pinit_result + 0x54) = 0;
      }
      else {
        (**(code **)(*_data_180c8ed00 + 8))();
      }
    }
    else {
      if (*(char *)(lVar6 + 0x22c) != '\0') {
        system_event_handler_001();
      }
      *(undefined4 *)(lVar6 + 0x228) = *(undefined4 *)(lVar6 + 0x224);
      system_graphics_001();
      system_graphics_002();
    }
    QueryPerformanceCounter(&lStack_90);
    dVar15 = (double)lStack_90 * _data_180c8ed50;
    _data_180d48d20 = _data_180d48d20 + 1;
    dVar16 = dVar15 - _data_180d48d18;
    if (1.0 < dVar16) {
      *(float *)(lVar6 + 500) = (float)((double)_data_180d48d20 / dVar16);
      _data_180d48d20 = 0;
      _data_180d48d18 = dVar15;
      *(float *)(lVar6 + 0x1f8) = (float)(1000.0 / *(double *)(lVar6 + 0x70));
    }
    if (0.0 < *(double *)(_data_180c86890 + 0x1510)) {
      system_handle_manager_005(lVar6,(float)*(double *)(_data_180c86890 + 0x1510));
    }
    if (*(char *)(lVar6 + 0x1ee) == '\0') {
      fVar14 = *(float *)(lVar6 + 0x200);
      dVar15 = *(double *)(lVar6 + 0x218);
      do {
        QueryPerformanceCounter(&lStack_88);
      } while ((double)lStack_88 * _data_180c8ed50 < (double)fVar14 + dVar15);
      QueryPerformanceCounter(&lStack_80);
      lVar8 = lStack_80 - _data_180c8ed40;
      _data_180c8ed40 = lStack_80;
      *(double *)(lVar6 + 0x208) = (double)lVar8 * _data_180c8ed50;
      QueryPerformanceCounter(&lStack_78);
      *(double *)(lVar6 + 0x218) = (double)lStack_78 * _data_180c8ed50;
    }
  }
  return;
}
    thread_pool_4_status_code = 1;
    iVar6 = _Cnd_broadcast(0x180c91240);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    iVar6 = _Mtx_unlock(0x180c91288);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    system_cleanup_001(0x180c911a0);
  }
  *(undefined4 *)(_data_180c86910 + 4) = 0;
  if (*(char *)(handle + 0x1ee) == '\0') {
    (**(code **)(**(longlong **)(handle + 0x2b0) + 0xe0))();
    *(int *)(handle + 0x224) = *(int *)(handle + 0x224) + 1;
    if (*(int *)(_data_180c8a9c8 + 0xe0) == 0) {
      if (*(char *)(handle + 0x264) == '\0') {
        iVar6 = 10;
        if (10 < *(int *)(_data_180c8a9c8 + 0xbd0)) {
          iVar6 = *(int *)(_data_180c8a9c8 + 0xbd0);
        }
        fVar13 = (float)*(double *)(handle + 0x208);
        if (1.0 / (float)iVar6 <= (float)*(double *)(handle + 0x208)) {
          fVar13 = 1.0 / (float)iVar6;
        }
      }
      else {
        fVar13 = *(float *)(handle + 0x268);
      }
      *(float *)(handle + 0x220) = fVar13;
    }
    else {
      *(undefined4 *)(handle + 0x220) = 0x3d088889;
      fVar13 = 0.033333335;
    }
    system_handle_manager_004(handle,fVar13);
    uVar5 = _data_180c82868;
    if ((_data_180c8a9c0 != 0) &&
       (pinit_result = *(longlong **)(_data_180c8a9c0 + 0x228), pinit_result != (longlong *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = pinit_result;
      (**(code **)(*pinit_result + 0x28))();
      system_event_handler_013(uVar5,&plStackX_10);
    }
    uVar5 = _data_180c82868;
    if (*(char *)(_data_180c8a9a0 + 0xa0) == '\0') {
      if ((_data_180c8a9c0 != 0) &&
         (pinit_result = *(longlong **)(_data_180c8a9c0 + 0x228), pinit_result != (longlong *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = pinit_result;
        (**(code **)(*pinit_result + 0x28))();
        system_event_handler_016(uVar5,&plStackX_18,0);
        pinit_result = *(longlong **)(_data_180c8a9c0 + 0x228);
        *(undefined8 *)(_data_180c8a9c0 + 0x228) = 0;
        if (pinit_result != (longlong *)0x0) {
          (**(code **)(*pinit_result + 0x38))();
        }
      }
      func_0x00018005c480(_data_180c8ed68);
      pinit_result = _data_180c8ed00;
      if (*(code **)(*_data_180c8ed00 + 8) == (code *)&unknown_180639070) {
        *(undefined4 *)(_data_180c8ed00 + 9) = 0;
        puVar4 = (undefined1 *)pinit_result[8];
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 0;
        }
        *(undefined4 *)((longlong)pinit_result + 0x54) = 0;
      }
      else {
        (**(code **)(*_data_180c8ed00 + 8))();
      }
    }
    else {
      if (*(char *)(handle + 0x22c) != '\0') {
        system_event_handler_001();
      }
      *(undefined4 *)(handle + 0x228) = *(undefined4 *)(handle + 0x224);
      system_graphics_001();
      system_graphics_002();
    }
    QueryPerformanceCounter(&lStack_90);
    dVar14 = (double)lStack_90 * _data_180c8ed50;
    _data_180d48d20 = _data_180d48d20 + 1;
    dVar15 = dVar14 - _data_180d48d18;
    if (1.0 < dVar15) {
      *(float *)(handle + 500) = (float)((double)_data_180d48d20 / dVar15);
      _data_180d48d20 = 0;
      _data_180d48d18 = dVar14;
      *(float *)(handle + 0x1f8) = (float)(1000.0 / *(double *)(handle + 0x70));
    }
    if (0.0 < *(double *)(_data_180c86890 + 0x1510)) {
      system_handle_manager_005(handle,(float)*(double *)(_data_180c86890 + 0x1510));
    }
    if (*(char *)(handle + 0x1ee) == '\0') {
      fVar13 = *(float *)(handle + 0x200);
      dVar14 = *(double *)(handle + 0x218);
      do {
        QueryPerformanceCounter(&lStack_88);
      } while ((double)lStack_88 * _data_180c8ed50 < (double)fVar13 + dVar14);
      QueryPerformanceCounter(&lStack_80);
      lVar7 = lStack_80 - _data_180c8ed40;
      _data_180c8ed40 = lStack_80;
      *(double *)(handle + 0x208) = (double)lVar7 * _data_180c8ed50;
      QueryPerformanceCounter(&lStack_78);
      *(double *)(handle + 0x218) = (double)lStack_78 * _data_180c8ed50;
    }
  }
  return;
}
    data_180c82862 = data_180c82862 == '\0';
  }
  lVar9 = 0xe0;
  puVar6 = _data_180c868d0;
  do {
    puVar6 = puVar6 + 0x18;
    *puVar6 = 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
LAB_18005122d:
  puVar7 = (undefined8 *)_data_180c86960[1];
  iVar4 = _Mtx_lock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  pinit_result4 = _data_180c8a9b0;
  uStack_308 = _data_180c8a9b0;
  _data_180c8a9b0 = (longlong *)*puVar7;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  uVar11 = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  uStack_78 = 3;
  FUN_18009af00(auStack_2a8);
  system_handle_manager_002((longlong)_data_180c86958 * 0x238 + _data_180c86890 + 0x1598,auStack_2a8);
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    system_helper_001();
  }
  _data_180c8a9b0 = pinit_result4;
  iVar4 = _Mtx_unlock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  pinit_result4 = (longlong *)*_data_180c86960;
  iVar4 = _Mtx_lock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  pinit_result = _data_180c8a9b0;
  uStack_308 = _data_180c8a9b0;
  _data_180c8a9b0 = (longlong *)*pinit_result4;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  uStack_78 = 3;
  FUN_18009af00(auStack_2a8);
  FUN_18009b220(auStack_2a8);
  *(float *)((longlong)_data_180c8a9b0 + 0x18) = _data_180bf3ff8;
  system_initializer_001();
  lVar9 = (longlong)_data_180c8a9b0;
  puVar7 = _data_180c86960;
  puVar6 = _data_180c868d0;
  if (*(char *)(_data_180c86960 + 7) != '\0') {
    if ((((*(char *)(_data_180c86960 + 0xe) != '\0') ||
         (*(char *)((longlong)_data_180c8a9b0 + 0x38c) != '\0')) ||
        (*(char *)((longlong)_data_180c8a9b0 + 0x38d) != '\0')) ||
       (*(char *)((longlong)_data_180c8a9b0 + 0x38e) != '\0')) {
      _data_180c868d0[0x1518] = 1;
      puVar6[0x1530] = 1;
      puVar6[0x1590] = 1;
      puVar6[0x15a8] = 1;
      puVar6[0x1710] = 1;
    }
    if (((*(char *)((longlong)puVar7 + 0x71) != '\0') || (*(char *)(lVar9 + 0x38d) != '\0')) ||
       (*(char *)(lVar9 + 0x38e) != '\0')) {
      do {
        puVar6 = puVar6 + 0x18;
        *puVar6 = 1;
        init_result2 = init_result2 + -1;
      } while (init_result2 != 0);
    }
  }
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    system_helper_001();
  }
  _data_180c8a9b0 = pinit_result;
  iVar4 = _Mtx_unlock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (*(int *)(_data_180c86950 + 0x161c) == 0x11) {
    puVar7 = (undefined8 *)*_data_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pinit_result4 = _data_180c8a9b0;
    plStack_2c0 = _data_180c8a9b0;
    _data_180c8a9b0 = (longlong *)*puVar7;
    system_initializer_003(&unknown_1809fd8c0,0,0);
    system_config_001(&unknown_1809fd8d8);
    uStack_2f0 = 0x40000000;
    auStack_2c8[0] = 0x3f800000;
    uStack_318 = 0x20000;
    puStack_320 = &unknown_1809fdfc0;
    pplStack_328 = (longlong **)&uStack_2f0;
    system_config_002(&unknown_1809fd910,4,_data_180c86950 + 0x167c,auStack_2c8);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x40000000);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &unknown_1809fdfc0;
    pplStack_328 = &plStack_2f8;
    system_config_002(&unknown_1809fd930,4,_data_180c86950 + 0x1680,&uStack_308);
    system_initializer_004();
    _data_180c8a9b0 = pinit_result4;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  if (*(int *)(_data_180c86950 + 0x161c) == 0xc) {
    puVar7 = (undefined8 *)*_data_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pinit_result4 = _data_180c8a9b0;
    plStack_2c0 = _data_180c8a9b0;
    _data_180c8a9b0 = (longlong *)*puVar7;
    system_initializer_003(&unknown_1809fd950,0,0);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x40000000);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &unknown_1809fdfc0;
    pplStack_328 = (longlong **)&uStack_308;
    system_config_002(&unknown_1809fd970,4,_data_180c86950 + 0x1688,&plStack_2f8);
    system_initializer_004();
    _data_180c8a9b0 = pinit_result4;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  if (*(int *)(_data_180c86950 + 0x161c) == 0xd) {
    puVar7 = (undefined8 *)*_data_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pinit_result4 = _data_180c8a9b0;
    plStack_2c0 = _data_180c8a9b0;
    _data_180c8a9b0 = (longlong *)*puVar7;
    system_initializer_003(&unknown_1809fd980,0,0);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x40000000);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &unknown_1809fdfc0;
    pplStack_328 = (longlong **)&uStack_308;
    system_config_002(&unknown_1809fd970,4,_data_180c86950 + 0x168c,&plStack_2f8);
    if (*(float *)(_data_180c86950 + 0x168c) == 0.0) {
      *(undefined4 *)(_data_180c86950 + 0x168c) = 0x3f800000;
    }
    system_initializer_004();
    _data_180c8a9b0 = pinit_result4;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  puVar7 = (undefined8 *)*_data_180c8a9e0;
  if (puVar7 != (undefined8 *)0x0) {
    if ((undefined *)*puVar7 == &unknown_180a0ad28) {
      NVGSDK_Poll(puVar7[1]);
    }
    else {
      (**(code **)((undefined *)*puVar7 + 8))();
    }
  }
  *_data_180c86910 = fVar15;
  lVar9 = (longlong)*(int *)(_data_180c86938 + 0x1d40) * 0xd0;
  init_result2 = *(longlong *)(lVar9 + 0xb0 + *(longlong *)(_data_180c86938 + 0x1d20));
  fVar17 = (float)init_result2;
  if (init_result2 < 0) {
    fVar17 = fVar17 + 1.8446744e+19;
  }
  if (fVar17 * 8.5830686e-07 < (float)*(int *)(_data_180c8aa18 + 4)) {
    *(float *)(_data_180c8aa18 + 0x10) = fVar15 + *(float *)(_data_180c8aa18 + 0x10);
    fVar15 = (float)fmodf(lVar9,0x3f800000);
    if (0.5 < fVar15) {
      puStack_2e8 = &unknown_180a3c3e0;
      uStack_2d0 = 0;
      puStack_2e0 = (undefined8 *)0x0;
      uStack_2d8 = 0;
      puVar7 = (undefined8 *)FUN_18062b420(_data_180c8ed18,0x1c,0x13);
      *(undefined1 *)puVar7 = 0;
      puStack_2e0 = puVar7;
      uVar5 = system_helper_002(puVar7);
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar5);
      *puVar7 = 0x6f6d654d20555047;
      puVar7[1] = 0x6567617375207972;
      puVar7[2] = 0x6163697469726320;
      *(undefined4 *)(puVar7 + 3) = 0x2e2e6c;
      uStack_2d8 = 0x1b;
      puStack_2e8 = &unknown_180a3c3e0;
      system_helper_001(puVar7);
    }
  }
  pinit_result4 = _data_180c86878;
  if ((char)_data_180c86878[0x42] == '\0') {
    (**(code **)(*_data_180c86878 + 0xb0))(_data_180c86878,*(undefined4 *)(_data_180c86920 + 0x1340));
    (**(code **)(*pinit_result4 + 0xb8))(pinit_result4,*(undefined4 *)(_data_180c86920 + 0x1500));
    (**(code **)(*pinit_result4 + 0xc0))(pinit_result4,*(undefined4 *)(_data_180c86920 + 0x13b0));
    (**(code **)(*pinit_result4 + 200))(pinit_result4,*(undefined4 *)(_data_180c86920 + 0x1490));
    (**(code **)(*pinit_result4 + 0x50))(pinit_result4);
  }
  puVar7 = _data_180c86880;
  pinit_result4 = *(longlong **)(_data_180c86950 + 0x17ec);
  *_data_180c86880 = 0;
  uStack_308._0_4_ = SUB84(pinit_result4,0);
  *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_308;
  uStack_308._4_4_ = (undefined4)((ulonglong)pinit_result4 >> 0x20);
  *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_308._4_4_;
  *(undefined4 *)(puVar7 + 8) = 0;
  uStack_308 = pinit_result4;
  system_finalizer_001();
  system_finalizer_002();
  if (((*(int *)(handle + 0x340) != 0) && (_data_180c8f008 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*_data_180c8f008 + 0x28))(), cVar2 != '\0')) {
    (**(code **)(_data_180c8a9c0 + 0x98))();
  }
  (**(code **)(**(longlong **)(handle + 0x2b0) + 0x30))(*(longlong **)(handle + 0x2b0),flags);
  if (((*(int *)(handle + 0x340) != 0) && (_data_180c8f008 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*_data_180c8f008 + 0x28))(), cVar2 != '\0')) {
    (*(code *)_data_180c8f008[7])();
  }
  if (((*(int *)(handle + 0x340) != 0) && (_data_180c8f008 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*_data_180c8f008 + 0x28))(), cVar2 != '\0')) {
    *(undefined8 *)(*(longlong *)(handle + 0x3c0) + 0x18) =
         *(undefined8 *)(*(longlong *)(handle + 0x3c0) + 0x10);
    pinit_result4 = (longlong *)(_data_180c868d0 + 0x2030);
    uVar13 = uVar11;
    if (*(longlong *)(_data_180c868d0 + 0x2038) - *pinit_result4 >> 2 != 0) {
      do {
        uStack_2f0 = *(undefined4 *)(uVar13 + *pinit_result4);
        init_result2 = *(longlong *)(handle + 0x3c0) + 0x10;
        FUN_180194a50(init_result2,&uStack_2f0);
        FUN_180194a50(init_result2,(longlong)&uStack_2f0 + 1);
        FUN_180194a50(init_result2,(longlong)&uStack_2f0 + 2);
        FUN_180194a50(init_result2,(longlong)&uStack_2f0 + 3);
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        pinit_result4 = (longlong *)(_data_180c868d0 + 0x2030);
        uVar13 = uVar13 + 4;
      } while ((ulonglong)(longlong)(int)uVar10 <
               (ulonglong)(*(longlong *)(_data_180c868d0 + 0x2038) - *pinit_result4 >> 2));
    }
    (**(code **)(_data_180c8a9c0 + 0xa8))();
  }
  (**(code **)(**(longlong **)(handle + 0x2b0) + 0x38))(*(longlong **)(handle + 0x2b0),flags);
  (**(code **)(**(longlong **)(handle + 0x2b0) + 0x40))(*(longlong **)(handle + 0x2b0),flags);
  FUN_1800eee70();
  if (data_180c82862 != '\0') {
    puStack_2e8 = &unknown_180a3c3e0;
    uStack_2d0 = 0;
    puStack_2e0 = (undefined8 *)0x0;
    uStack_2d8 = 0;
    puVar8 = (undefined8 *)FUN_18062b420(_data_180c8ed18,0x19,0x13);
    *(undefined1 *)puVar8 = 0;
    puStack_2e0 = puVar8;
    uVar5 = system_helper_002(puVar8);
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar5);
    *puVar8 = 0x6d6d6f43204c4752;
    puVar8[1] = 0x656e696c20646e61;
    puVar8[2] = 0x656c6f736e6f6320;
    *(undefined1 *)(puVar8 + 3) = 0;
    init_result2 = _data_180c868c8;
    uStack_2d8 = 0x18;
    puVar7 = (undefined8 *)*_data_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pinit_result4 = _data_180c8a9b0;
    plStack_2c0 = _data_180c8a9b0;
    _data_180c8a9b0 = (longlong *)*puVar7;
    plStack_2f8 = (longlong *)0x0;
    uStack_308 = (longlong *)0x0;
    pplStack_328 = (longlong **)&cStack_300;
    system_processor_002(init_result2,&puStack_2e8,&plStack_2f8,&uStack_308);
    if (*(char *)(init_result2 + 0x60) != '\0') {
      system_processor_003(init_result2,&plStack_2f8,&uStack_308,acStack_2ff);
    }
    if ((cStack_300 == '\0') && (acStack_2ff[0] == '\0')) {
      *(undefined1 *)(init_result2 + 0x60) = 0;
    }
    _data_180c8a9b0 = pinit_result4;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    puStack_2e8 = &unknown_180a3c3e0;
    system_helper_001(puVar8);
  }
  system_crypto_001(uStack_68 ^ (ulonglong)auStack_348);
}
undefined8 * system_handle_manager_001(undefined8 *handle)
{
  *handle = 0;
  handle[0x43] = 0;
  handle[0x44] = 0;
  handle[0x45] = 0;
  *(undefined4 *)(handle + 0x46) = 3;
  return handle;
}
    data_180c84870 = 0;
  }
  do {
    lVar3 = lVar5 + 1;
    pcVar1 = (char *)(lVar5 + 0x180c82871);
    lVar5 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 != 0) {
    fwrite(&data_1809fcc18,1,1,lVar6);
    fwrite(&data_180c82870,lVar3,1,lVar6);
    system_cleanup_010(0);
  }
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_40 = 0;
    LOCK();
    _data_180c8ed60 = _data_180c8ed60 + -1;
    UNLOCK();
    lVar6 = 0;
  }
  puStack_30 = &unknown_180a3c3e0;
  if (puStack_28 == (undefined *)0x0) {
    puStack_28 = (undefined *)0x0;
    uStack_18 = 0;
    puStack_30 = &unknown_18098bcb0;
    if (lVar6 != 0) {
      fclose(lVar6);
      LOCK();
      _data_180c8ed60 = _data_180c8ed60 + -1;
      UNLOCK();
    }
    return;
  }
  system_helper_001();
}
  data_180c8ecee = 1;
  system_event_handler_015(_data_180c82868);
  system_cleanup_002();
  system_cleanup_008(0);
  if (data_180c82853 != '\0') {
    LOCK();
    *(undefined4 *)(*(longlong *)(_data_180c86870 + 0x48) + 0xcc) = 0;
    UNLOCK();
  }
  FUN_18004f920();
  if ((data_180c82860 == '\0') &&
     (pinit_result = *(longlong **)(_data_180c8ed08 + 0x18), pinit_result != (longlong *)0x0)) {
    cVar3 = (**(code **)*pinit_result)(pinit_result);
    if (cVar3 != '\0') {
      (**(code **)(*pinit_result + 0x28))(pinit_result);
    }
  }
  system_cleanup_009();
  lVar2 = _data_180c86870;
  if (_data_180c86870 != 0) {
    system_cleanup_011(_data_180c86870);
    system_helper_001(lVar2);
  }
  _data_180c86870 = 0;
  system_thread_manager_008(_data_180c8ed10);
  lVar2 = _data_180c8ed10;
  if (_data_180c8ed10 != 0) {
    system_thread_manager_008(_data_180c8ed10);
    _Mtx_destroy_in_situ();
    system_helper_001(lVar2);
  }
  _data_180c8ed10 = 0;
  return;
}
undefined8 *
FUN_18006b8a0(undefined8 *handle,ulonglong flags,undefined8 mutex_attr,undefined8 mutex_type)
{
  undefined8 uVar1;
  uVar1 = 0xfffffffffffffffe;
  *handle = &unknown_1809ff2f8;
  system_cleanup_004();
  if ((flags & 1) != 0) {
    free(handle,0xc0,mutex_attr,mutex_type,uVar1);
  }
  return handle;
}
      data_180c82850 = '\x01';
      do {
        iVar3 = ReleaseSemaphore(_data_180c91900,1);
      } while (iVar3 == 0);
      puStack_138 = &unknown_180a3c3e0;
      if (puStack_130 != (undefined1 *)0x0) {
        system_helper_001();
      }
      puStack_130 = (undefined1 *)0x0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_138 = &unknown_18098bcb0;
      puStack_110 = &unknown_180a3c3e0;
      if (puVar10 != (undefined *)0x0) {
        system_helper_001(puVar10);
      }
      puStack_108 = (undefined1 *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &unknown_18098bcb0;
    }
  }
  puStack_a8 = &unknown_180a3c3e0;
  if (puStack_a0 != (undefined *)0x0) {
    system_helper_001();
  }
  puStack_a0 = (undefined *)0x0;
  uStack_90 = 0;
  puStack_a8 = &unknown_18098bcb0;
LAB_180072d7b:
  system_crypto_001(uStack_48 ^ (ulonglong)auStack_168);
}
uint system_checker_001(void)
{
  uint in_EAX;
  int iVar1;
  longlong lVar2;
  if (_data_180c86948 != 0) {
    lVar2 = _data_180c86948 + 0x110;
    iVar1 = _Mtx_lock(lVar2);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    in_EAX = _Mtx_unlock(lVar2);
    if (in_EAX != 0) {
      in_EAX = __Throw_C_error_std__YAXH_Z(in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}
      data_180d49178 = 0;
      _data_180d49170 = 0;
      strcpy_s(&data_180d49178,0x80,&data_18098bc73,mutex_type,uVar1);
      system_crypto_002(FUN_1809417e0);
      system_crypto_003(&data_180d49158);
      return &data_180d49160;
    }
  }
  return &data_180d49160;
}
    data_180d48d40 = '\x01';
    system_thread_manager_012(handle,CONCAT71((int7)((ulonglong)puVar3 >> 8),1));
  }
  system_crypto_001(uStack_18 ^ (ulonglong)auStack_298);
}
    thread_pool_2_status_code = '\0';
    if ((cStack_208 != '\0') && (iVar13 = _Mtx_unlock(uStack_210), iVar13 != 0)) {
      __Throw_C_error_std__YAXH_Z(iVar13);
    }
    if (cVar23 != '\0') goto LAB_1800d37d8;
    *(undefined1 *)(*(longlong *)(*(longlong *)(_data_180c86870 + 8) + 0x140) + 0x208) = 1;
  }
  thread_pool_2_status_code = '\0';
  iVar13 = _Mtx_unlock(0x180c91148);
  if (iVar13 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar13);
  }
LAB_1800d37d8:
  if (*(char *)(_data_180c86870 + 0xa0) != '\0') {
    uVar14 = system_ui_007(init_result6);
    *(undefined8 *)(_data_180c86870 + 0xa8) = uVar14;
    uVar14 = system_ui_008(init_result6);
    *(undefined8 *)(_data_180c86870 + 0xb0) = uVar14;
  }
  pcVar12 = _data_180c82868;
  if (*_data_180c82868 != '\0') {
    puVar15 = (undefined8 *)*_data_180c86960;
    iVar13 = _Mtx_lock(0x180c91970);
    if (iVar13 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar13);
    }
    uVar14 = _data_180c8a9b0;
    pplStack_1b8 = (longlong **)_data_180c8a9b0;
    _data_180c8a9b0 = *puVar15;
    system_initializer_003(&unknown_1809fe1b0,0,0);
    dVar2 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    uVar19 = flags0;
    flags2 = flags0;
    if (*(longlong *)(pcVar12 + 0x10) - *(longlong *)(pcVar12 + 8) >> 3 != 0) {
      do {
        dVar1 = *(double *)(*(longlong *)(uVar19 + *(longlong *)(pcVar12 + 8)) + 0x200);
        dVar7 = dVar2 + dVar1;
        dVar2 = *(double *)(*(longlong *)(uVar19 + *(longlong *)(pcVar12 + 8)) + 0x1f8);
        dVar8 = dVar9 + dVar2;
        system_config_001(&unknown_1809fe1c8,flags2,dVar1 / dVar2);
        flags1 = (int)flags2 + 1;
        uVar19 = uVar19 + 8;
        flags2 = (ulonglong)flags1;
        dVar2 = dVar7;
        dVar9 = dVar8;
      } while ((ulonglong)(longlong)(int)flags1 <
               (ulonglong)(*(longlong *)(pcVar12 + 0x10) - *(longlong *)(pcVar12 + 8) >> 3));
    }
    system_config_001(&unknown_1809fe1d8,dVar7 / dVar8);
    system_initializer_004();
    _data_180c8a9b0 = uVar14;
    iVar13 = _Mtx_unlock(0x180c91970);
    if (iVar13 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar13);
    }
  }
  if (*(char *)(_data_180c86950 + 0x1626) != '\0') {
    uVar14 = *(undefined8 *)(_data_180c86870 + 0x138);
    *(undefined8 *)(_data_180c86870 + 0x138) = 0;
    puStack_b8 = &unknown_data_003;
    puStack_b0 = auStack_a0;
    auStack_a0[0] = 0;
    uStack_a8 = 0x18;
    flags4 = strcpy_s(auStack_a0,0x40,&unknown_1809fc7b8);
    system_ui_001(flags4,&puStack_b8,uVar14,1);
    puStack_b8 = &unknown_18098bcb0;
  }
  if (*(int *)(_data_180c8aa40 + 0x60) == 1) {
    system_finalizer_003();
  }
  else if (*(int *)(_data_180c8aa40 + 0x60) == 2) {
    system_finalizer_004();
  }
  init_result8 = *(longlong *)(_data_180c86950 + 0x1870) - *(longlong *)(_data_180c86950 + 0x1868) >> 3;
  uVar19 = flags0;
  if (0 < (int)init_result8) {
    do {
      puVar15 = (undefined8 *)system_validator_002(init_result8,&plStack_1d0,(longlong)(int)uVar19);
      (**(code **)(*(longlong *)*puVar15 + 0x98))();
      if (plStack_1d0 != (longlong *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      flags1 = (int)uVar19 + 1;
      init_result8 = *(longlong *)(_data_180c86950 + 0x1870) - *(longlong *)(_data_180c86950 + 0x1868) >> 3;
      uVar19 = (ulonglong)flags1;
    } while ((int)flags1 < (int)init_result8);
  }
  system_processor_001();
  func_0x00018024f7f0();
  flags4 = func_0x0001800e2850(init_result6);
  system_ui_004(flags4,1,0);
  if (*(char *)(init_result6 + 0xf18) != '\0') {
    system_ui_009(init_result6);
    *(undefined1 *)(init_result6 + 0xf18) = 0;
  }
  lVar3 = _data_180c86950;
  init_result8 = _data_180c86890;
  uVar14 = *(undefined8 *)(_data_180c86950 + 0x161c);
  *(undefined8 *)(_data_180c86890 + 0x12d0) = *(undefined8 *)(_data_180c86950 + 0x1614);
  *(undefined8 *)(init_result8 + 0x12d8) = uVar14;
  uVar14 = *(undefined8 *)(lVar3 + 0x162c);
  *(undefined8 *)(init_result8 + 0x12e0) = *(undefined8 *)(lVar3 + 0x1624);
  *(undefined8 *)(init_result8 + 0x12e8) = uVar14;
  uVar14 = *(undefined8 *)(lVar3 + 0x163c);
  *(undefined8 *)(init_result8 + 0x12f0) = *(undefined8 *)(lVar3 + 0x1634);
  *(undefined8 *)(init_result8 + 0x12f8) = uVar14;
  uVar14 = *(undefined8 *)(lVar3 + 0x164c);
  *(undefined8 *)(init_result8 + 0x1300) = *(undefined8 *)(lVar3 + 0x1644);
  *(undefined8 *)(init_result8 + 0x1308) = uVar14;
  uVar14 = *(undefined8 *)(lVar3 + 0x165c);
  *(undefined8 *)(init_result8 + 0x1310) = *(undefined8 *)(lVar3 + 0x1654);
  *(undefined8 *)(init_result8 + 0x1318) = uVar14;
  uVar14 = *(undefined8 *)(lVar3 + 0x166c);
  *(undefined8 *)(init_result8 + 0x1320) = *(undefined8 *)(lVar3 + 0x1664);
  *(undefined8 *)(init_result8 + 0x1328) = uVar14;
  flags4 = *(undefined4 *)(lVar3 + 0x1678);
  uVar10 = *(undefined4 *)(lVar3 + 0x167c);
  uVar11 = *(undefined4 *)(lVar3 + 0x1680);
  *(undefined4 *)(init_result8 + 0x1330) = *(undefined4 *)(lVar3 + 0x1674);
  *(undefined4 *)(init_result8 + 0x1334) = flags4;
  *(undefined4 *)(init_result8 + 0x1338) = uVar10;
  *(undefined4 *)(init_result8 + 0x133c) = uVar11;
  flags4 = *(undefined4 *)(lVar3 + 0x1688);
  uVar10 = *(undefined4 *)(lVar3 + 0x168c);
  uVar11 = *(undefined4 *)(lVar3 + 0x1690);
  *(undefined4 *)(init_result8 + 0x1340) = *(undefined4 *)(lVar3 + 0x1684);
  *(undefined4 *)(init_result8 + 0x1344) = flags4;
  *(undefined4 *)(init_result8 + 0x1348) = uVar10;
  *(undefined4 *)(init_result8 + 0x134c) = uVar11;
  *(undefined2 *)(lVar3 + 0x1637) = 0;
  *(undefined1 *)(lVar3 + 0x162c) = 0;
  system_finalizer_001();
  system_finalizer_002();
  *(uint *)(_data_180c86890 + 0x1590) = _data_180c86958;
  _data_180c86958 = _data_180c86958 + 1 & 0x80000001;
  if ((int)_data_180c86958 < 0) {
    _data_180c86958 = (_data_180c86958 - 1 | 0xfffffffe) + 1;
  }
  puVar15 = (undefined8 *)*_data_180c86960;
  iVar13 = _Mtx_lock(0x180c91970);
  if (iVar13 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar13);
  }
  uVar14 = _data_180c8a9b0;
  pplStack_220 = (longlong **)_data_180c8a9b0;
  _data_180c8a9b0 = *puVar15;
  init_result8 = *(longlong *)(_data_180c86890 + 0x1a08 + (longlong)(int)_data_180c86958 * 8);
  if (init_result8 != 0) {
    uVar19 = flags0;
    flags2 = flags0;
    if (0 < *(int *)(init_result8 + 0x10)) {
      do {
        system_network_003(*(undefined8 *)(flags2 + *(longlong *)(init_result8 + 8)));
        lVar3 = *(longlong *)(*(longlong *)(init_result8 + 8) + flags2);
        if (lVar3 != 0) {
          FUN_18011fab0(lVar3);
          system_helper_001(lVar3);
        }
        *(undefined8 *)(*(longlong *)(init_result8 + 8) + flags2) = 0;
        flags1 = (int)uVar19 + 1;
        uVar19 = (ulonglong)flags1;
        flags2 = flags2 + 8;
      } while ((int)flags1 < *(int *)(init_result8 + 0x10));
    }
    if (*(longlong *)(init_result8 + 8) != 0) {
      system_helper_001();
    }
    *(undefined8 *)(init_result8 + 8) = 0;
    puVar4 = *(undefined1 **)(_data_180c86890 + 0x1a08 + (longlong)(int)_data_180c86958 * 8);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      *(undefined8 *)(puVar4 + 0x14) = 0;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *(undefined8 *)(puVar4 + 0x24) = 0;
      *(undefined8 *)(puVar4 + 0x1c) = 0;
      system_helper_001();
    }
    *(undefined8 *)(_data_180c86890 + 0x1a08 + (longlong)(int)_data_180c86958 * 8) = 0;
    flags = uStack_1c8;
  }
  system_initializer_002();
  _data_180c8a9b0 = uVar14;
  iVar13 = _Mtx_unlock(0x180c91970);
  if (iVar13 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar13);
  }
  if (*(int *)(init_result6 + 8) == 2) {
    *(undefined1 *)(*(longlong *)(init_result6 + 0x10) + 0xc0) = 0;
    while( true ) {
      puVar5 = (undefined *)**(undefined8 **)(init_result6 + 0x10);
      if (puVar5 == &unknown_180a04910) {
        cVar23 = *(char *)(*(undefined8 **)(init_result6 + 0x10) + 2) != '\0';
      }
      else {
        cVar23 = (**(code **)(puVar5 + 0x68))();
      }
      if (cVar23 != '\0') break;
      puVar5 = (undefined *)**(undefined8 **)(init_result6 + 0x10);
      if (puVar5 == &unknown_180a04910) {
        system_cleanup_005(*(undefined8 **)(init_result6 + 0x10) + 4);
      }
      else {
        (**(code **)(puVar5 + 0x80))();
      }
    }
    plStack_1c0 = *(longlong **)(init_result6 + 0x10);
    *(undefined8 *)(init_result6 + 0x10) = 0;
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(undefined4 *)(init_result6 + 8) = 0;
    if (_data_00000010 != (longlong *)0x0) {
      (**(code **)(*_data_00000010 + 0x10))();
    }
    (**(code **)(_data_00000000 + 0x20))(0);
    _data_00000008 = 0xffffffffffffffff;
  }
  else if (*(int *)(init_result6 + 8) != 0) goto LAB_1800d3d65;
  *(uint *)(_data_180c86950 + 0x1614) =
       (*(int *)(_data_180c86950 + 0x1614) + 1U) % *(uint *)(_data_180c86938 + 0x1d4c);
LAB_1800d3d65:
  pplStack_220 = (longlong **)&puStack_198;
  puStack_198 = &unknown_1809fcc28;
  puStack_190 = auStack_180;
  uStack_188 = 0;
  auStack_180[0] = 0;
  uStack_100 = 0x19;
  uStack_f8 = flags;
  pplStack_220 = (longlong **)FUN_18062b1e0(_data_180c8ed18,0x20,8,3);
  *pplStack_220 = (longlong *)&unknown_18098bcb0;
  pplStack_220[1] = (longlong *)0x0;
  *(undefined4 *)(pplStack_220 + 2) = 0;
  *pplStack_220 = (longlong *)&unknown_180a3c3e0;
  pplStack_220[3] = (longlong *)0x0;
  pplStack_220[1] = (longlong *)0x0;
  *(undefined4 *)(pplStack_220 + 2) = 0;
  pinit_result7 = _data_180c8ed00;
  uStack_e0 = 0;
  flags4 = *(undefined4 *)(pplStack_220 + 3);
  *(int *)(pplStack_220 + 3) = (int)_data_180c8ed00[10];
  *(undefined4 *)(pinit_result7 + 10) = flags4;
  init_result6 = (longlong)pplStack_220[1];
  pplStack_220[1] = (longlong *)pinit_result7[8];
  pinit_result7[8] = init_result6;
  flags4 = *(undefined4 *)(pplStack_220 + 2);
  *(int *)(pplStack_220 + 2) = (int)pinit_result7[9];
  *(undefined4 *)(pinit_result7 + 9) = flags4;
  flags4 = *(undefined4 *)((longlong)pplStack_220 + 0x1c);
  *(undefined4 *)((longlong)pplStack_220 + 0x1c) = *(undefined4 *)((longlong)pinit_result7 + 0x54);
  *(undefined4 *)((longlong)pinit_result7 + 0x54) = flags4;
  puStack_f0 = pplStack_220;
  if (*(code **)(*pinit_result7 + 8) == (code *)&unknown_180639070) {
    *(undefined4 *)(pinit_result7 + 9) = 0;
    if ((undefined1 *)pinit_result7[8] != (undefined1 *)0x0) {
      *(undefined1 *)pinit_result7[8] = 0;
    }
    *(undefined4 *)((longlong)pinit_result7 + 0x54) = 0;
  }
  else {
    (**(code **)(*pinit_result7 + 8))(pinit_result7);
  }
  if (0x960 < *(int *)(puStack_f0 + 2)) {
    *(undefined4 *)(puStack_f0 + 2) = 0x960;
    *(undefined1 *)(puStack_f0[1] + 0x960) = 0;
  }
  uStack_e8 = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 3;
  FUN_1800da760(_data_180c86890,flags,&lStack_200);
  init_result6 = lStack_200;
  init_result8 = lStack_1f8;
  uVar19 = flags0;
  if (lStack_1f8 - lStack_200 >> 3 != 0) {
    do {
      lVar3 = _data_180c8aa08;
      if ((0 < *(int *)(*(longlong *)(uVar19 + init_result6) + 0x124ec)) &&
         ((*(uint *)(*(longlong *)(uVar19 + init_result6) + 4) & 0x10000) != 0)) {
        while (pcVar12 = _data_180c82868, init_result6 = lStack_200, init_result8 = lStack_1f8,
              *(int *)(lVar3 + 0x30c) != 0) {
          init_result6 = system_event_handler_017(_data_180c82868);
          if (init_result6 != 0) {
            pinit_result7 = (longlong *)system_event_handler_017(pcVar12);
            (**(code **)(*pinit_result7 + 0x20))(pinit_result7,0);
          }
        }
      }
      flags1 = (int)flags0 + 1;
      flags0 = (ulonglong)flags1;
      uVar19 = uVar19 + 8;
    } while ((ulonglong)(longlong)(int)flags1 < (ulonglong)(init_result8 - init_result6 >> 3));
  }
  uVar14 = FUN_18062b1e0(_data_180c8ed18,0x100,8,3);
  pinit_result7 = (longlong *)system_event_handler_008(uVar14,&puStack_198);
  ppuStack_1b0 = (undefined **)pinit_result7;
  if (pinit_result7 != (longlong *)0x0) {
    (**(code **)(*pinit_result7 + 0x28))(pinit_result7);
  }
  pcVar12 = _data_180c82868;
  pplStack_220 = &plStack_228;
  plStack_228 = pinit_result7;
  if (pinit_result7 != (longlong *)0x0) {
    (**(code **)(*pinit_result7 + 0x28))(pinit_result7);
  }
  pplStack_1b8 = &plStack_228;
  puVar15 = *(undefined8 **)(*(longlong *)(pcVar12 + 8) + 8);
  pcVar6 = *(code **)*puVar15;
  pplStack_220 = &plStack_218;
  plStack_218 = plStack_228;
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x28))();
  }
  (*pcVar6)(puVar15,&plStack_218);
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  if (pinit_result7 != (longlong *)0x0) {
    (**(code **)(*pinit_result7 + 0x38))(pinit_result7);
  }
  if (lStack_200 == 0) {
    ppuStack_1b0 = &puStack_198;
    puStack_198 = &unknown_18098bcb0;
    system_crypto_001(uStack_58 ^ (ulonglong)auStack_248);
  }
  system_helper_001();
}
    data_180bfc049 = '\0';
  }
  _data_00000010 = plVar4;
  (**(code **)(_data_00000000 + 0x18))(0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pflags = *(undefined8 **)(*handle + 0x18);
  pcVar3 = *(code **)*pflags;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = *(longlong **)(*handle + 0x10);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  (*pcVar3)(pflags,&plStackX_8);
  return;
}
      data_180d492a8 = 0;
      _data_180d492a0 = 6;
      strcpy_s(&data_180d492a8,0x40,&data_180a06998,mutex_type,uVar1);
      _data_180d492e8 = &unknown_data_003;
      _data_180d492f0 = &data_180d49300;
      data_180d49300 = 0;
      _data_180d492f8 = 4;
      strcpy_s(&data_180d49300,0x40,&data_180a06990);
      _data_180d49340 = &unknown_data_003;
      _data_180d49348 = &data_180d49358;
      data_180d49358 = 0;
      _data_180d49350 = 6;
      strcpy_s(&data_180d49358,0x40,&data_180a069a8);
      _data_180d49398 = &unknown_data_003;
      _data_180d493a0 = &data_180d493b0;
      data_180d493b0 = 0;
      _data_180d493a8 = 6;
      strcpy_s(&data_180d493b0,0x40,&data_180a069a0);
      system_crypto_002(&unknown_180941ab0);
      system_crypto_003(&data_180d49288);
    }
  }
  return &data_180d49290 + (longlong)handle * 0x58;
}
  data_180c82862 = data_180c82862 == '\0';
  *handle = &unknown_18098bcb0;
  handle[1] = 0;
  *(undefined4 *)(handle + 2) = 0;
  *handle = &unknown_180a3c3e0;
  handle[3] = 0;
  handle[1] = 0;
  *(undefined4 *)(handle + 2) = 0;
  system_thread_manager_001(handle,3,mutex_attr,mutex_type,0,0xfffffffffffffffe);
  *(undefined4 *)handle[1] = 0x2e6b4f;
  *(undefined4 *)(handle + 2) = 3;
  return handle;
}
longlong system_processor_004(longlong handle,longlong flags,longlong mutex_attr)
{
  undefined8 *puVar1;
  undefined8 *pflags;
  longlong lVar3;
  longlong lVar4;
  lVar4 = flags - handle >> 5;
  if (0 < lVar4) {
    lVar3 = mutex_attr - flags;
    mutex_attr = mutex_attr + lVar4 * -0x20;
    pflags = (undefined8 *)(flags + 8);
    do {
      puVar1 = pflags + -4;
      if (*(longlong *)(lVar3 + -0x20 + (longlong)pflags) != 0) {
        system_helper_001();
      }
      *(undefined8 *)(lVar3 + 0x10 + (longlong)puVar1) = 0;
      lVar4 = lVar4 + -1;
      *(undefined8 *)(lVar3 + (longlong)puVar1) = 0;
      *(undefined4 *)(lVar3 + 8 + (longlong)puVar1) = 0;
      *(undefined4 *)(lVar3 + 8 + (longlong)puVar1) = *(undefined4 *)(pflags + -3);
      *(undefined8 *)(lVar3 + (longlong)puVar1) = *puVar1;
      *(undefined4 *)(lVar3 + 0x14 + (longlong)puVar1) = *(undefined4 *)((longlong)pflags + -0xc);
      *(undefined4 *)(lVar3 + 0x10 + (longlong)puVar1) = *(undefined4 *)(pflags + -2);
      *(undefined4 *)(pflags + -3) = 0;
      *puVar1 = 0;
      pflags[-2] = 0;
      pflags = puVar1;
    } while (0 < lVar4);
  }
  return mutex_attr;
}
longlong system_processor_005(undefined8 handle,longlong flags,longlong mutex_attr)
{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  mutex_attr = mutex_attr - flags;
  lVar2 = unaff_RDI * -0x20;
  puVar3 = (undefined8 *)(flags + 8);
  do {
    puVar1 = puVar3 + -4;
    if (*(longlong *)(mutex_attr + -0x20 + (longlong)puVar3) != 0) {
      system_helper_001();
    }
    *(undefined8 *)(mutex_attr + 0x10 + (longlong)puVar1) = 0;
    unaff_RDI = unaff_RDI + -1;
    *(undefined8 *)(mutex_attr + (longlong)puVar1) = 0;
    *(undefined4 *)(mutex_attr + 8 + (longlong)puVar1) = 0;
    *(undefined4 *)(mutex_attr + 8 + (longlong)puVar1) = *(undefined4 *)(puVar3 + -3);
    *(undefined8 *)(mutex_attr + (longlong)puVar1) = *puVar1;
    *(undefined4 *)(mutex_attr + 0x14 + (longlong)puVar1) = *(undefined4 *)((longlong)puVar3 + -0xc);
    *(undefined4 *)(mutex_attr + 0x10 + (longlong)puVar1) = *(undefined4 *)(puVar3 + -2);
    *(undefined4 *)(puVar3 + -3) = 0;
    *puVar1 = 0;
    puVar3[-2] = 0;
    puVar3 = puVar1;
  } while (0 < unaff_RDI);
  return unaff_RBP + lVar2;
}
      data_180d48d64 = data_180d48d64 == '\0';
    }
    if (data_180d48d64 != '\0') {
      (*(code *)(*in_RCX[0xc170])[9])(in_RCX[0xc170],alStackX_10[0] + 0x120);
    }
  }
  init_result0 = alStackX_10[0];
  if ((*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0) &&
     (uVar12 = uVar16, uVar15 = uVar16, (longlong)in_RCX[0x1d] - (longlong)in_RCX[0x1c] >> 3 != 0))
  {
    do {
      (**(code **)(**(longlong **)(uVar12 + (longlong)in_RCX[0x1c]) + 0x60))
                (*(longlong **)(uVar12 + (longlong)in_RCX[0x1c]),in_RCX,init_result0);
      uVar14 = (int)uVar15 + 1;
      uVar12 = uVar12 + 8;
      uVar15 = (ulonglong)uVar14;
    } while ((ulonglong)(longlong)(int)uVar14 <
             (ulonglong)((longlong)in_RCX[0x1d] - (longlong)in_RCX[0x1c] >> 3));
  }
  ppplStack_b8 = (longlong ***)0x0;
  uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
  if (*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0) {
    uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(undefined4)uStack_58);
    if ((((*(byte *)(alStackX_10[0] + 0x1bd8) & 0x20) != 0) &&
        (uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(undefined4)uStack_58),
        *(char *)(_data_180c86870 + 0xf8) != '\0')) &&
       (uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(undefined4)uStack_58),
       6 < *(int *)(in_RCX + 0x4f8))) {
      uVar9 = FUN_18062b1e0(_data_180c8ed18,0xe0,8,3);
      ppplStackX_8 = (longlong ***)&uStack_60;
      plStack_68 = alStackX_10;
      puStack_50 = &unknown_1801bc840;
      puStack_48 = &unknown_1801bc820;
      uStack_70._0_4_ = SUB84(in_RCX,0);
      uStack_70._4_4_ = (undefined4)((ulonglong)in_RCX >> 0x20);
      uStack_60._0_4_ = (undefined4)uStack_70;
      uStack_60._4_4_ = uStack_70._4_4_;
      uStack_70 = in_RCX;
      uStack_58 = plStack_68;
      ppplStack_b8 = (longlong ***)FUN_18006b640(uVar9,&uStack_60);
      if (ppplStack_b8 != (longlong ***)0x0) {
        ppplStack_80 = ppplStack_b8;
        (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
      }
      uVar9 = _data_180c82868;
      ppplStack_80 = (longlong ***)0x0;
      if (*(int *)(_data_180c8a9c8 + 0x380) == 0) {
        pppplStackX_20 = &ppplStackX_8;
        ppplStackX_8 = ppplStack_b8;
        if (ppplStack_b8 != (longlong ***)0x0) {
          (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
        }
        system_event_handler_013(uVar9,&ppplStackX_8);
      }
      else {
        (*(code *)(*ppplStack_b8)[0xc])(ppplStack_b8);
        if ((*ppplStack_b8)[0xe] == (longlong *)&unknown_180049530) {
          LOCK();
          *(undefined1 *)(ppplStack_b8 + 2) = 1;
          UNLOCK();
          system_cleanup_003(ppplStack_b8 + 4);
        }
        else {
          (*(code *)(*ppplStack_b8)[0xe])(ppplStack_b8);
        }
      }
    }
    system_processor_007(in_RCX,alStackX_10[0]);
    uVar9 = _data_180c82868;
    if (((in_RCX[0x89] != (longlong ****)0x0) && (*(char *)(_data_180c86870 + 0xfa) != '\0')) &&
       ((*(longlong *)(alStackX_10[0] + 0x3580) != 0 &&
        (*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0)))) {
      uStack_70 = &pppplStackX_20;
      pppplStackX_20 = (longlong ****)in_RCX[0x89][0x461];
      if (pppplStackX_20 != (longlong ****)0x0) {
        (*(code *)(*pppplStackX_20)[5])();
      }
      system_event_handler_016(uVar9,&pppplStackX_20,0);
    }
    if ((*(char *)((longlong)in_RCX + 0x563) != '\0') &&
       (0 < (int)(((longlong)in_RCX[0xb6] - (longlong)in_RCX[0xb5]) / 0xc))) {
      system_cleanup_001(in_RCX + 0x4cf);
      while( true ) {
        ppplVar3 = *in_RCX[0x4ce];
        if (ppplVar3 == (longlong ***)&unknown_180a0c2b8) {
          cVar6 = *(char *)(in_RCX[0x4ce] + 2) != '\0';
        }
        else {
          cVar6 = (*(code *)ppplVar3[0xd])();
        }
        uVar9 = _data_180c82868;
        if (cVar6 != '\0') break;
        init_result0 = system_event_handler_017(_data_180c82868);
        if (init_result0 != 0) {
          pinit_result1 = (longlong *)system_event_handler_017(uVar9);
          (**(code **)(*pinit_result1 + 0x20))(pinit_result1,0);
        }
      }
    }
    init_result0 = alStackX_10[0];
    pinit_result1 = *(longlong **)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x630);
    if (pinit_result1 != (longlong *)0x0) {
      plStack_78 = pinit_result1;
      (**(code **)(*pinit_result1 + 0x28))(pinit_result1);
    }
    plStack_78 = *(longlong **)(init_result0 + 0x12498);
    *(longlong **)(init_result0 + 0x12498) = pinit_result1;
    if (plStack_78 != (longlong *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    ppppinit_result3 = in_RCX[99];
    if (ppppinit_result3 != (longlong ****)0x0) {
      (*(code *)(*ppppinit_result3)[0x1f])(ppppinit_result3,alStackX_10[0]);
    }
    if (in_RCX[0x22] != (longlong ****)0x0) {
      (*(code *)in_RCX[0x23])(alStackX_10[0]);
    }
    if ((*(char *)(in_RCX + 0xb74) != '\0') &&
       (init_result0 = *(longlong *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x530), init_result0 != 0)) {
      *(undefined4 *)(init_result0 + 0x40) = 0x41200000;
    }
    if (*(int *)(in_RCX + 0xa3a) != 0) {
      uVar1 = *(undefined4 *)(in_RCX + 0xa3a);
      pppppinit_result7 = in_RCX + (longlong)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      LOCK();
      *(undefined4 *)pppppinit_result7 = 0;
      UNLOCK();
      system_processor_008(pppppinit_result7,uVar1);
      if (*(int *)(in_RCX + 0xa3a) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (*(int *)(in_RCX + 0xa3a) - 1U >> 0xc) + 1;
      }
      if (iVar7 != 0) {
        memcpy(pppppinit_result7[1],in_RCX[0xa3b],0x20000);
      }
      init_result0 = *(longlong *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x118);
      if (init_result0 != 0) {
        *(longlong ******)(init_result0 + 0x98c8) =
             in_RCX + (longlong)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      }
    }
    uVar14 = *(int *)(in_RCX + 0xa39) + 1U & 0x80000001;
    if ((int)uVar14 < 0) {
      uVar14 = (uVar14 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(in_RCX + 0xa39) = uVar14;
  }
  while (iVar7 = (int)uVar16, (ulonglong)(longlong)iVar7 < (ulonglong)*(uint *)(in_RCX + 0xb5b)) {
    ppppinit_result3 = in_RCX[(uVar16 >> 10) + 0xb5c] +
                 (ulonglong)(uint)(iVar7 + (int)(uVar16 >> 10) * -0x400) * 0x18;
    system_resource_001(*ppppinit_result3);
    FUN_180077750(*ppppinit_result3,ppppinit_result3[1],ppppinit_result3 + 2,0,ppppinit_result3 + 10);
    uVar16 = (ulonglong)(iVar7 + 1);
  }
  uVar12 = (ulonglong)*(uint *)(in_RCX + 0xb5b);
  LOCK();
  *(undefined4 *)(in_RCX + 0xb5b) = 0;
  uVar9 = _data_180c82868;
  UNLOCK();
  if (ppplStack_b8 != (longlong ***)0x0) {
    ppplStackX_8 = (longlong ***)&ppplStack_b0;
    ppplStack_b0 = ppplStack_b8;
    (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
    system_event_handler_016(uVar9,&ppplStack_b0,0);
    uVar12 = (*(code *)(*ppplStack_b8)[7])(ppplStack_b8);
  }
  return uVar12;
}
undefined8 *
system_processor_006(undefined8 *handle,longlong flags,undefined8 mutex_attr,undefined8 mutex_type)
{
  int iVar1;
  undefined8 *pflags;
  undefined4 *puVar3;
  undefined4 uVar4;
  *handle = &unknown_18098bcb0;
  handle[1] = 0;
  *(undefined4 *)(handle + 2) = 0;
  *handle = &unknown_180a3c3e0;
  handle[3] = 0;
  handle[1] = 0;
  *(undefined4 *)(handle + 2) = 0;
  system_thread_manager_001(handle,9,mutex_attr,mutex_type,0,0xfffffffffffffffe);
  pflags = (undefined8 *)handle[1];
  *pflags = 0x6a624f656e656353;
  *(undefined2 *)(pflags + 1) = 0x2f;
  *(undefined4 *)(handle + 2) = 9;
  uVar4 = 1;
  iVar1 = *(int *)(handle + 2);
  if (0 < *(int *)(flags + 0x10)) {
    system_thread_manager_001(handle,iVar1 + *(int *)(flags + 0x10));
    memcpy((ulonglong)*(uint *)(handle + 2) + handle[1],*(undefined8 *)(flags + 8),
           (longlong)(*(int *)(flags + 0x10) + 1),mutex_type,uVar4);
  }
  system_thread_manager_001(handle,iVar1 + 6);
  puVar3 = (undefined4 *)((ulonglong)*(uint *)(handle + 2) + handle[1]);
  *puVar3 = 0x6563732f;
  *(undefined2 *)(puVar3 + 1) = 0x656e;
  *(undefined1 *)((longlong)puVar3 + 6) = 0;
  *(int *)(handle + 2) = iVar1 + 6;
  system_thread_manager_001(handle,iVar1 + 0xd);
  *(undefined8 *)((ulonglong)*(uint *)(handle + 2) + handle[1]) = 0x656e656373782e;
  *(int *)(handle + 2) = iVar1 + 0xd;
  return handle;
}
  data_180c82842 = 1;
  uStack_160 = 3;
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (undefined8 *******)0x0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  lVar24 = *(longlong *)(*pinit_result3 + 0x890) - *(longlong *)(*pinit_result3 + 0x888) >> 5;
  lStack_b0 = lVar24;
  ppppppplStackX_8 = (longlong *******)((ulonglong)ppppppplStackX_8 & 0xffffffff00000000);
  if (0 < (int)lVar24) {
    do {
      if (iVar21 < 0) {
LAB_1801d58d5:
        init_result9 = system_thread_manager_007();
      }
      else {
        init_result9 = *(longlong *)(*pinit_result3 + 0x888);
        if ((ulonglong)(*(longlong *)(*pinit_result3 + 0x890) - init_result9 >> 5) <=
            (ulonglong)(longlong)iVar21) goto LAB_1801d58d5;
        init_result9 = (longlong)iVar21 * 0x20 + init_result9;
      }
      puStack_1a8 = &unknown_180a3c3e0;
      uStack_190 = 0;
      puStack_1a0 = (undefined1 *)0x0;
      uStack_198 = 0;
      system_thread_manager_001(&puStack_1a8,*(undefined4 *)(init_result9 + 0x10));
      if (*(int *)(init_result9 + 0x10) != 0) {
        memcpy(puStack_1a0,*(undefined8 *)(init_result9 + 8),*(int *)(init_result9 + 0x10) + 1);
      }
      if (*(longlong *)(init_result9 + 8) != 0) {
        uStack_198 = 0;
        if (puStack_1a0 != (undefined1 *)0x0) {
          *puStack_1a0 = 0;
        }
        uStack_190 = uStack_190 & 0xffffffff;
      }
      iVar17 = uStack_198 + 8;
      system_thread_manager_001(&puStack_1a8,iVar17);
      *(undefined8 *)(puStack_1a0 + uStack_198) = 0x6a624f656e656353;
      *(undefined1 *)((longlong)(puStack_1a0 + uStack_198) + 8) = 0;
      uStack_198 = iVar17;
      cVar5 = system_thread_001(&puStack_1a8);
      if (cVar5 == '\0') {
        puStack_1a8 = &unknown_180a3c3e0;
        if (puStack_1a0 != (undefined1 *)0x0) {
          system_helper_001();
        }
      }
      else {
        pppppuStack_d0 = (undefined8 *****)0x0;
        pppppuStack_c8 = (undefined8 *****)0x0;
        uStack_c0 = 0;
        uStack_b8 = 3;
        FUN_18062c5f0(&puStack_1a8,&pppppuStack_d0);
        pppppflags6 = pppppuStack_c8;
        pppppflags3 = pppppuStack_d0;
        init_result9 = (longlong)pppppuStack_c8 - (longlong)pppppuStack_d0;
        ppppppuVar12 = (undefined8 ******)FUN_18062b1e0(_data_180c8ed18,0x20,8,3);
        ppppppuStack_d8 = ppppppuVar12;
        *ppppppuVar12 = (undefined8 *****)0x0;
        ppppppuVar12[1] = (undefined8 *****)0x0;
        ppppppuVar12[2] = (undefined8 *****)0x0;
        *(undefined4 *)(ppppppuVar12 + 3) = 3;
        pppppppuVar6 = &pppppppuStack_188;
        pppppppuVar9 = pppppppuStack_178;
        while (pppppppuVar9 != (undefined8 *******)0x0) {
          if (*(int *)(pppppppuVar9 + 4) < iVar21) {
            pppppppuVar9 = (undefined8 *******)*pppppppuVar9;
          }
          else {
            pppppppuVar6 = pppppppuVar9;
            pppppppuVar9 = (undefined8 *******)pppppppuVar9[1];
          }
        }
        if (((undefined8 ********)pppppppuVar6 == &pppppppuStack_188) ||
           (iVar21 < *(int *)(pppppppuVar6 + 4))) {
          puVar7 = (undefined8 *)FUN_180179aa0(&pppppppuStack_188,auStack_90);
          pppppppuVar6 = (undefined8 *******)*puVar7;
        }
        pppppppuVar6[5] = ppppppuVar12;
        iVar17 = (int)(init_result9 >> 5);
        init_result9 = (longlong)iVar17;
        pppppflags5 = pppppflags3;
        if (0 < iVar17) {
          pppppflags2 = pppppflags3 + 1;
          do {
            puStack_1c8 = &unknown_180a3c3e0;
            uStack_1b0._0_4_ = 0;
            uStack_1b0._4_4_ = 0;
            puStack_1c0 = (undefined1 *)0x0;
            uStack_1b8 = 0;
            system_thread_manager_001(&puStack_1c8,*(undefined4 *)(pppppflags2 + 1));
            if (*(int *)(pppppflags2 + 1) != 0) {
              memcpy(puStack_1c0,*pppppflags2,*(int *)(pppppflags2 + 1) + 1);
            }
            if (*pppppflags2 != (undefined8 ****)0x0) {
              uStack_1b8 = 0;
              if (puStack_1c0 != (undefined1 *)0x0) {
                *puStack_1c0 = 0;
              }
              uStack_1b0._4_4_ = 0;
            }
            iVar17 = uStack_1b8 + 0xd;
            system_thread_manager_001(&puStack_1c8,iVar17);
            puVar7 = (undefined8 *)(puStack_1c0 + uStack_1b8);
            *puVar7 = 0x782e656e6563732f;
            *(undefined4 *)(puVar7 + 1) = 0x6e656373;
            *(undefined2 *)((longlong)puVar7 + 0xc) = 0x65;
            uStack_1b8 = iVar17;
            cVar5 = system_thread_002(&puStack_1c8);
            if (cVar5 == '\0') {
              uStack_1b8 = 0;
              if (puStack_1c0 != (undefined1 *)0x0) {
                *puStack_1c0 = 0;
              }
              uVar1 = *(uint *)(pppppflags2 + 1);
              flags0 = (ulonglong)uVar1;
              if (*pppppflags2 != (undefined8 ****)0x0) {
                system_thread_manager_001(&puStack_1c8,flags0);
              }
              if (uVar1 != 0) {
                memcpy(puStack_1c0,*pppppflags2,flags0);
              }
              if (puStack_1c0 != (undefined1 *)0x0) {
                puStack_1c0[flags0] = 0;
              }
              uStack_1b0._4_4_ = *(uint *)((longlong)pppppflags2 + 0x14);
              uStack_1b8 = uVar1;
              system_thread_manager_001(&puStack_1c8,0x12);
              puVar14 = (undefined4 *)(puStack_1c0 + uStack_1b8);
              *puVar14 = 0x6563732f;
              puVar14[1] = 0x782e656e;
              puVar14[2] = 0x2e6f6373;
              puVar14[3] = 0x65637378;
              *(undefined2 *)(puVar14 + 4) = 0x656e;
              *(undefined1 *)((longlong)puVar14 + 0x12) = 0;
              uStack_1b8 = 0x12;
              cVar5 = system_thread_002(&puStack_1c8);
              if (cVar5 != '\0') goto LAB_1801d5c43;
              puStack_1c8 = &unknown_180a3c3e0;
              if (puStack_1c0 != (undefined1 *)0x0) {
                system_helper_001();
              }
            }
            else {
LAB_1801d5c43:
              pppppppuVar6 = &pppppppuStack_188;
              pppppppuVar9 = pppppppuStack_178;
              while (pppppppuVar9 != (undefined8 *******)0x0) {
                if (*(int *)(pppppppuVar9 + 4) < iVar21) {
                  pppppppuVar9 = (undefined8 *******)*pppppppuVar9;
                }
                else {
                  pppppppuVar6 = pppppppuVar9;
                  pppppppuVar9 = (undefined8 *******)pppppppuVar9[1];
                }
              }
              if (((undefined8 ********)pppppppuVar6 == &pppppppuStack_188) ||
                 (iVar21 < *(int *)(pppppppuVar6 + 4))) {
                puVar7 = (undefined8 *)FUN_180179aa0(&pppppppuStack_188,&ppppppuStack_a0);
                pppppppuVar6 = (undefined8 *******)*puVar7;
              }
              ppppppuVar12 = pppppppuVar6[5];
              ppppppflags = (undefined8 ******)ppppppuVar12[1];
              if (ppppppflags < ppppppuVar12[2]) {
                ppppppuVar12[1] = ppppppflags + 4;
                *ppppppflags = (undefined8 *****)&unknown_18098bcb0;
                ppppppflags[1] = (undefined8 *****)0x0;
                *(undefined4 *)(ppppppflags + 2) = 0;
                *ppppppflags = (undefined8 *****)&unknown_180a3c3e0;
                ppppppflags[3] = (undefined8 *****)0x0;
                ppppppflags[1] = (undefined8 *****)0x0;
                *(undefined4 *)(ppppppflags + 2) = 0;
                ppppppuStack_d8 = ppppppflags;
                system_thread_manager_001(ppppppflags,uStack_1b8);
                if (uStack_1b8 != 0) {
                  memcpy(ppppppflags[1],puStack_1c0,uStack_1b8 + 1);
                }
                if (puStack_1c0 != (undefined1 *)0x0) {
                  *(undefined4 *)(ppppppflags + 2) = 0;
                  if (ppppppflags[1] != (undefined8 *****)0x0) {
                    *(undefined1 *)ppppppflags[1] = 0;
                  }
                  *(undefined4 *)((longlong)ppppppflags + 0x1c) = 0;
                }
              }
              else {
                system_event_handler_006(ppppppuVar12,&puStack_1c8);
              }
              puStack_1c8 = &unknown_180a3c3e0;
              if (puStack_1c0 != (undefined1 *)0x0) {
                system_helper_001();
              }
            }
            uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
            puStack_1c0 = (undefined1 *)0x0;
            puStack_1c8 = &unknown_18098bcb0;
            pppppflags2 = pppppflags2 + 4;
            init_result9 = init_result9 + -1;
            pppppflags3 = pppppuStack_d0;
            pppppflags6 = pppppuStack_c8;
            pppppflags5 = pppppuStack_d0;
            lVar24 = lStack_b0;
          } while (init_result9 != 0);
        }
        for (; pppppflags3 != pppppflags6; pppppflags3 = pppppflags3 + 4) {
          (*(code *)**pppppflags3)(pppppflags3,0);
        }
        if (pppppflags5 != (undefined8 *****)0x0) {
          system_helper_001(pppppflags5);
        }
        puStack_1a8 = &unknown_180a3c3e0;
        if (puStack_1a0 != (undefined1 *)0x0) {
          system_helper_001();
        }
      }
      uStack_190 = uStack_190 & 0xffffffff00000000;
      puStack_1a0 = (undefined1 *)0x0;
      puStack_1a8 = &unknown_18098bcb0;
      iVar21 = iVar21 + 1;
      ppppppplStackX_8 = (longlong *******)CONCAT44(ppppppplStackX_8._4_4_,iVar21);
      pinit_result3 = _data_180c86870;
      mutex_attr = pppppppuStackX_18;
      init_result9 = lStack_a8;
      mutex_type = uStackX_20;
    } while (iVar21 < (int)lVar24);
  }
  uStack_110 = 3;
  pppppppuStack_138 = &pppppppuStack_138;
  pppppppuStack_130 = &pppppppuStack_138;
  pppppppuStack_128 = (undefined8 *******)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  pppppppuVar9 = pppppppuStack_180;
  if ((undefined8 ********)pppppppuStack_180 != &pppppppuStack_188) {
    do {
      pppppppuVar16 = (undefined8 *******)pppppppuVar9[5];
      pppppppuVar6 = pppppppuVar9 + 4;
      pppppppuVar8 = &pppppppuStack_138;
      if (pppppppuStack_128 != (undefined8 *******)0x0) {
        pppppppuVar15 = pppppppuStack_128;
        do {
          if (*(int *)(pppppppuVar15 + 4) < *(int *)pppppppuVar6) {
            pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
          }
          else {
            pppppppuVar8 = pppppppuVar15;
            pppppppuVar15 = (undefined8 *******)pppppppuVar15[1];
          }
        } while (pppppppuVar15 != (undefined8 *******)0x0);
      }
      if (((undefined8 ********)pppppppuVar8 == &pppppppuStack_138) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        puVar7 = (undefined8 *)FUN_1801e8470(&pppppppuStack_138,&pppppppuStackX_18);
        pppppppuVar8 = (undefined8 *******)*puVar7;
      }
      if (pppppppuVar8 + 5 != pppppppuVar16) {
        system_event_handler_004(pppppppuVar8 + 5,*pppppppuVar16,pppppppuVar16[1]);
      }
      pppppppuVar8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (undefined8 *******)0x0) {
        pppppppuVar16 = pppppppuStack_178;
        do {
          if (*(int *)(pppppppuVar16 + 4) < *(int *)pppppppuVar6) {
            pppppppuVar16 = (undefined8 *******)*pppppppuVar16;
          }
          else {
            pppppppuVar8 = pppppppuVar16;
            pppppppuVar16 = (undefined8 *******)pppppppuVar16[1];
          }
        } while (pppppppuVar16 != (undefined8 *******)0x0);
      }
      if (((undefined8 ********)pppppppuVar8 == &pppppppuStack_188) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        puVar7 = (undefined8 *)FUN_180179aa0(&pppppppuStack_188,&ppppppplStackX_8);
        pppppppuVar8 = (undefined8 *******)*puVar7;
      }
      ppppppuVar12 = pppppppuVar8[5];
      ppppppuStack_a0 = ppppppuVar12;
      if (ppppppuVar12 != (undefined8 ******)0x0) {
        system_event_handler_010(ppppppuVar12);
        system_helper_001(ppppppuVar12);
      }
      pppppppuVar8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (undefined8 *******)0x0) {
        pppppppuVar16 = pppppppuStack_178;
        do {
          if (*(int *)(pppppppuVar16 + 4) < *(int *)pppppppuVar6) {
            pppppppuVar16 = (undefined8 *******)*pppppppuVar16;
          }
          else {
            pppppppuVar8 = pppppppuVar16;
            pppppppuVar16 = (undefined8 *******)pppppppuVar16[1];
          }
        } while (pppppppuVar16 != (undefined8 *******)0x0);
      }
      if (((undefined8 ********)pppppppuVar8 == &pppppppuStack_188) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        puVar7 = (undefined8 *)FUN_180179aa0(&pppppppuStack_188,&ppppppuStack_d8);
        pppppppuVar8 = (undefined8 *******)*puVar7;
      }
      pppppppuVar8[5] = (undefined8 ******)0x0;
      pppppppuVar9 = (undefined8 *******)func_0x00018066bd70(pppppppuVar9);
    } while ((undefined8 ********)pppppppuVar9 != &pppppppuStack_188);
  }
  pppppppuVar9 = pppppppuStack_178;
  if (pppppppuStack_178 != (undefined8 *******)0x0) {
    FUN_18004b790(&pppppppuStack_188,*pppppppuStack_178);
    system_helper_001(pppppppuVar9);
  }
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (undefined8 *******)0x0;
  uStack_170 = uStack_170 & 0xffffffffffffff00;
  uStack_168 = 0;
  uVar10 = FUN_18062b1e0(_data_180c8ed18,0x150,8,3);
  pppppppuStackX_18 = (undefined8 *******)&pppppuStack_d0;
  uVar11 = system_thread_manager_003(&pppppuStack_d0,mutex_type);
  ppppppplStackX_8 = (longlong *******)&ppppppplStack_108;
  uStack_ef = 0;
  uStack_eb = 0;
  uStack_e9 = 0;
  uStack_e0 = uStack_110;
  ppppppplStack_108 = (longlong *******)&ppppppplStack_108;
  ppppppplStack_100 = (longlong *******)&ppppppplStack_108;
  ppppppplStack_f8 = (longlong *******)0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  if (pppppppuStack_128 != (undefined8 *******)0x0) {
    ppppppplStack_f8 =
         (longlong *******)system_processor_009(&ppppppplStack_108,pppppppuStack_128,&ppppppplStack_108);
    ppppppplVar4 = (longlong *******)*ppppppplStack_f8;
    ppppppplStack_108 = ppppppplStack_f8;
    while (ppppppplVar3 = ppppppplVar4, ppppppplVar3 != (longlong *******)0x0) {
      ppppppplStack_108 = ppppppplVar3;
      ppppppplVar4 = (longlong *******)*ppppppplVar3;
    }
    ppppppplVar4 = (longlong *******)ppppppplStack_f8[1];
    ppppppplStack_100 = ppppppplStack_f8;
    while (ppppppplVar3 = ppppppplVar4, ppppppplVar3 != (longlong *******)0x0) {
      ppppppplStack_100 = ppppppplVar3;
      ppppppplVar4 = (longlong *******)ppppppplVar3[1];
    }
    uStack_e8 = uStack_118;
  }
  ppppppuVar12 = (undefined8 ******)
                 system_processor_010(uVar10,&ppppppplStack_108,uVar11,pppppppuStackX_10,mutex_attr);
  if (ppppppuVar12 != (undefined8 ******)0x0) {
    pppppppuStackX_18 = (undefined8 *******)ppppppuVar12;
    (*(code *)(*ppppppuVar12)[5])(ppppppuVar12);
  }
  pppppppuStackX_18 = *(undefined8 ********)(init_result9 + 0x40);
  *(undefined8 *******)(init_result9 + 0x40) = ppppppuVar12;
  if (pppppppuStackX_18 != (undefined8 *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[7])();
  }
  uVar10 = _data_180c82868;
  pppppppuStackX_10 = &pppppppuStackX_18;
  pppppppuStackX_18 = *(undefined8 ********)(init_result9 + 0x40);
  if (pppppppuStackX_18 != (undefined8 *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[5])();
  }
  system_event_handler_013(uVar10,&pppppppuStackX_18);
  pppppppuVar6 = pppppppuStack_128;
  pppppppuVar9 = pppppppuStack_178;
  pppppppuStackX_18 = pppppppuStack_128;
  if (pppppppuStack_128 == (undefined8 *******)0x0) {
    if (pppppppuStack_178 != (undefined8 *******)0x0) {
      FUN_18004b790(&pppppppuStack_188,*pppppppuStack_178);
      system_helper_001(pppppppuVar9);
    }
    puStack_158 = &unknown_180a3c3e0;
    if (puStack_150 == (undefined *)0x0) {
      return;
    }
    system_helper_001();
  }
  system_processor_011(&pppppppuStack_138,*pppppppuStack_128);
  pppppppuStackX_10 = pppppppuVar6 + 4;
  ppppppplStackX_8 = pppppppuVar6 + 5;
  system_event_handler_010();
  system_helper_001(pppppppuVar6);
}
        data_180c91d14 = 0;
        return plVar7;
      }
      init_result0 = (longlong)iVar11 << 4;
      do {
        if ((int)(fVar12 - 12582912.0) <= (int)plVar9) {
          data_180c91d14 = 0;
          return plVar7;
        }
        lVar8 = *(longlong *)(init_result0 + (longlong)_data_180c91cf0);
        plVar7 = (longlong *)(ulonglong)*(uint *)(lVar8 + 0xe0);
        if ((*(uint *)(lVar8 + 0xe0) == 2) &&
           (plVar7 = (longlong *)(ulonglong)*(uint *)(lVar8 + 0xd8), *(uint *)(lVar8 + 0xd8) == 0))
        {
          LOCK();
          uVar1 = *(uint *)(lVar8 + 0xd8);
          if (uVar1 == 0) {
            *(uint *)(lVar8 + 0xd8) = 0xffffffff;
          }
          else {
            plVar7 = (longlong *)(ulonglong)uVar1;
          }
          UNLOCK();
          if (uVar1 == 0) {
            *(undefined1 *)(lVar8 + 0xdc) = 0;
            system_hardware_001(lVar8 + 0xe8);
            uVar5 = *(undefined8 *)(lVar8 + 0x88);
            iVar4 = *(int *)(lVar8 + 0x80);
            *(undefined8 *)(lVar8 + 0x88) = 0;
            *(undefined4 *)(lVar8 + 0x80) = 0;
            *(undefined4 *)(lVar8 + 0xe0) = 0;
            *(undefined4 *)(lVar8 + 0xd8) = 0;
            system_hardware_002(uVar5);
            LOCK();
            uVar1 = _data_180c91d10 - iVar4;
            plVar7 = (longlong *)(ulonglong)_data_180c91d10;
            UNLOCK();
            _data_180c91d10 = uVar1;
            if (0 < iVar4) {
              plVar9 = (longlong *)(ulonglong)(uint)((int)plVar9 + iVar4);
              plVar7 = _data_180c91cf0 + (longlong)iVar11 * 2 + 2;
              if (plVar7 < _data_180c91cf8) {
                memmove(_data_180c91cf0 + (longlong)iVar11 * 2,plVar7,
                        (longlong)_data_180c91cf8 - (longlong)plVar7);
              }
              plVar7 = _data_180c91cf8 + -2;
              _data_180c91cf8 = plVar7;
            }
          }
        }
        init_result0 = init_result0 + -0x10;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
      data_180c91d14 = 0;
      return plVar7;
    }
    flags = *(undefined4 *)(init_result0 + 0x84);
    uVar3 = *(undefined4 *)(init_result0 + 0x80);
    if (plVar7 < _data_180c91d00) {
      _data_180c91cf8 = plVar7 + 2;
      *plVar7 = init_result0;
      plVar7[1] = CONCAT44(uVar3,flags);
    }
    else {
      lVar8 = (longlong)plVar7 - (longlong)_data_180c91cf0 >> 4;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_180203fb6:
        plVar7 = (longlong *)FUN_18062b420(_data_180c8ed18,lVar8 << 4,data_180c91d08);
      }
      else {
        lVar8 = lVar8 * 2;
        plVar7 = plVar9;
        if (lVar8 != 0) goto LAB_180203fb6;
      }
      if (_data_180c91cf0 != _data_180c91cf8) {
        memmove(plVar7,_data_180c91cf0,(longlong)_data_180c91cf8 - (longlong)_data_180c91cf0);
      }
      *plVar7 = init_result0;
      plVar7[1] = CONCAT44(uVar3,flags);
      if (_data_180c91cf0 != (longlong *)0x0) {
        system_helper_001();
      }
      _data_180c91d00 = plVar7 + lVar8 * 2;
      _data_180c91cf0 = plVar7;
      _data_180c91cf8 = plVar7 + 2;
    }
    cVar6 = system_validator_001(0x180c919f0,&lStackX_20);
    plVar7 = _data_180c91cf8;
    init_result0 = lStackX_20;
  } while( true );
}
      data_180c91d14 = uVar6;
      return;
    }
    lVar4 = *(longlong *)(lVar5 + _data_180c91cf0);
    if ((*(int *)(lVar4 + 0xe0) == 2) && (*(int *)(lVar4 + 0xd8) == 0)) {
      LOCK();
      bVar8 = *(int *)(lVar4 + 0xd8) == 0;
      if (bVar8) {
        *(int *)(lVar4 + 0xd8) = -1;
      }
      UNLOCK();
      if (bVar8) {
        *(undefined1 *)(lVar4 + 0xdc) = uVar6;
        system_hardware_001(lVar4 + 0xe8);
        uVar3 = *(undefined8 *)(lVar4 + 0x88);
        iVar2 = *(int *)(lVar4 + 0x80);
        *(undefined8 *)(lVar4 + 0x88) = unaff_R12;
        uVar7 = (undefined4)unaff_R12;
        *(undefined4 *)(lVar4 + 0x80) = uVar7;
        *(undefined4 *)(lVar4 + 0xe0) = uVar7;
        *(undefined4 *)(lVar4 + 0xd8) = uVar7;
        system_hardware_002(uVar3);
        LOCK();
        _data_180c91d10 = _data_180c91d10 - iVar2;
        UNLOCK();
        if (0 < iVar2) {
          unaff_EBP = unaff_EBP + iVar2;
          lVar4 = (longlong)unaff_EDI * 0x10 + _data_180c91cf0;
          uVar1 = lVar4 + 0x10;
          if (uVar1 < _data_180c91cf8) {
            memmove(lVar4,uVar1,_data_180c91cf8 - uVar1);
          }
          _data_180c91cf8 = _data_180c91cf8 - 0x10;
        }
      }
    }
    lVar5 = lVar5 + -0x10;
    unaff_EDI = unaff_EDI + -1;
  } while (-1 < unaff_EDI);
  data_180c91d14 = uVar6;
  return;
}
  data_180c91d14 = unaff_BPL;
  return;
}
        data_180d48da8 = '\x01';
        iStack_2c8 = 0x786;
        FUN_180060680(auStack_258,&unknown_180a177f0,&unknown_180a17770,&unknown_180a17798);
        OutputDebugStringA(auStack_258);
      }
      fVar14 = (float)modff((float)(int)(*(ushort *)((longlong)handle + 0x5e) - 1) *
                            uStackX_18._4_4_,&uStack_2b0);
      fVar15 = (float)modff();
      fStack_298 = (fStack_28c - fStack_298) * fVar15 + fStack_298;
      fStack_294 = (fStack_288 - fStack_294) * fVar15 + fStack_294;
      fStack_290 = (fStack_284 - fStack_290) * fVar15 + fStack_290;
      fVar16 = (((fStack_270 - fStack_27c) * fVar15 + fStack_27c) - fStack_294) * fVar14 +
               fStack_294;
      fVar17 = (((fStack_26c - fStack_278) * fVar15 + fStack_278) - fStack_290) * fVar14 +
               fStack_290;
      fVar14 = (((fStack_274 - fStack_280) * fVar15 + fStack_280) - fStack_298) * fVar14 +
               fStack_298;
    }
    else {
      fVar16 = (float)uStack_2b0;
      fVar17 = (float)uStack_2b0;
      fVar14 = (float)uStack_2b0;
    }
    *flags = fVar17;
    flags[1] = fVar16;
    flags[2] = fVar14;
    flags[3] = 1.0;
    break;
  case 0x16:
    iStack_2c8 = mutex_type;
    system_handler_007(init_result0,&uStack_2b0,handle,&uStackX_18);
code_r0x0001802a14f5:
    *flags = (float)uStack_2b0._2_1_ * 0.003921569;
    bVar1 = (byte)uStack_2b0;
code_r0x0001802a151f:
    fVar16 = 0.003921569;
    uVar5 = (ushort)uStack_2b0._1_1_;
    uVar3 = (ushort)bVar1;
    uVar4 = (ushort)uStack_2b0._3_1_;
code_r0x0001802a1528:
    flags[1] = (float)uVar5 * fVar16;
    flags[2] = (float)uVar3 * fVar16;
    flags[3] = (float)uVar4 * fVar16;
    break;
  case 0x1e:
    iStack_2c8 = mutex_type;
    puVar8 = (undefined2 *)system_handler_008(init_result0,&uStack_2b0,handle,&uStackX_18);
    fVar16 = (float)func_0x0001800adf40(puVar8[2]);
    fVar17 = (float)func_0x0001800adf40(puVar8[1]);
    fVar14 = (float)func_0x0001800adf40(*puVar8);
    fVar15 = (float)func_0x0001800adf40(puVar8[3]);
    flags[3] = fVar15;
    *flags = fVar14;
    flags[1] = fVar17;
    flags[2] = fVar16;
    break;
  case 0x20:
    iStack_2c8 = mutex_type;
    system_handler_002(init_result0,&uStack_2b0,handle,&uStackX_18);
    *flags = (float)uStack_2b0;
    flags[2] = (float)uStack_2a8;
code_r0x0001802a1ad1:
    flags[3] = 1.0;
    fVar16 = uStack_2b0._4_4_;
code_r0x0001802a1ade:
    flags[1] = fVar16;
    break;
  case 0x21:
    if (mutex_type == 0) {
      iVar11 = *(ushort *)((longlong)handle + 0x5e) - 1;
      iVar13 = *(ushort *)((longlong)handle + 0x5c) - 1;
      uStackX_18._0_4_ = (float)mutex_attr;
      if ((int)((float)iVar13 * (float)uStackX_18) <= iVar13) {
        iVar13 = (int)((float)iVar13 * (float)uStackX_18);
      }
      uStackX_18._4_4_ = (float)((ulonglong)mutex_attr >> 0x20);
      if ((int)((float)iVar11 * uStackX_18._4_4_) <= iVar11) {
        iVar11 = (int)((float)iVar11 * uStackX_18._4_4_);
      }
      iVar7 = 0;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      iVar11 = 0;
      if (-1 < iVar13) {
        iVar11 = iVar13;
      }
      puVar9 = (undefined8 *)
               ((longlong)(int)(iVar7 * (uint)*(ushort *)((longlong)handle + 0x5c) + iVar11) * 0x10
               + *handle);
      flags = puVar9[1];
      *(undefined8 *)flags = *puVar9;
      *(undefined8 *)(flags + 2) = flags;
    }
    else if (mutex_type == 1) {
      system_handler_009(handle,&uStackX_18,mutex_attr,&fStack_298);
      fVar16 = (float)modff((float)(int)(*(ushort *)((longlong)handle + 0x5e) - 1) *
                            uStackX_18._4_4_,&uStack_2b0);
      fVar17 = (float)modff();
      fStack_298 = (fStack_288 - fStack_298) * fVar17 + fStack_298;
      fStack_294 = (fStack_284 - fStack_294) * fVar17 + fStack_294;
      fStack_290 = (fStack_280 - fStack_290) * fVar17 + fStack_290;
      *flags = (((fStack_268 - fStack_278) * fVar17 + fStack_278) - fStack_298) * fVar16 +
                 fStack_298;
      flags[1] = (((fStack_264 - fStack_274) * fVar17 + fStack_274) - fStack_294) * fVar16 +
                   fStack_294;
      flags[2] = (((fStack_260 - fStack_270) * fVar17 + fStack_270) - fStack_290) * fVar16 +
                   fStack_290;
      flags[3] = 3.4028235e+38;
    }
    else {
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      flags[0] = 0.0;
      flags[1] = 0.0;
      flags[2] = 0.0;
      flags[3] = 0.0;
    }
    break;
  case 0x27:
    iStack_2c8 = mutex_type;
    system_handler_005(init_result0,&uStack_2b0,handle,&uStackX_18);
    fVar16 = 1.5259022e-05;
    *flags = (float)(ushort)uStack_2b0 * 1.5259022e-05;
    uVar6 = (uint)uStack_2b0._2_2_;
    uVar5 = uStack_2b0._4_2_;
    goto code_r0x0001802a16a1;
  case 0x28:
    iStack_2c8 = mutex_type;
    system_handler_006(init_result0,&uStack_2b0,handle,&uStackX_18);
    fVar16 = 0.003921569;
    *flags = (float)(byte)uStack_2b0 * 0.003921569;
    uVar6 = (uint)uStack_2b0._1_1_;
    uVar5 = (ushort)uStack_2b0._2_1_;
    goto code_r0x0001802a16a1;
  case 0x29:
    iStack_2c8 = mutex_type;
    system_handler_006(init_result0,&uStack_2b0,handle,&uStackX_18);
code_r0x0001802a1677:
    fVar16 = 0.003921569;
    *flags = (float)uStack_2b0._2_1_ * 0.003921569;
    uVar6 = (uint)((ulonglong)uStack_2b0 >> 8) & 0xff;
    uVar5 = (ushort)(byte)uStack_2b0;
code_r0x0001802a16a1:
    flags[3] = 1.0;
    flags[2] = (float)uVar5 * fVar16;
    flags[1] = (float)uVar6 * fVar16;
    break;
  case 0x2b:
    iStack_2c8 = mutex_type;
    system_handler_004(init_result0,abStack_2b8,handle,&uStackX_18);
    flags[1] = 0.0;
    flags[2] = 0.0;
    flags[3] = 0.0;
    *flags = (float)abStack_2b8[0];
    break;
  case 0x2c:
    uVar5 = system_handler_003(init_result0,handle,&uStackX_18);
    fVar16 = (float)uVar5;
code_r0x0001802a1829:
    *flags = fVar16;
    flags[1] = 1.0;
    flags[2] = 1.0;
    flags[3] = 1.0;
  }
system_handler_001:
  system_crypto_001(uStack_58 ^ (ulonglong)auStack_2e8);
}
    data_180d48da8 = '\x01';
    FUN_180060680(unaff_RBP + -0x70,&unknown_180a177f0,&unknown_180a17770,&unknown_180a17798,0x786);
    OutputDebugStringA(unaff_RBP + -0x70);
  }
  uVar1 = *(ushort *)(unaff_RDI + 0x5c);
  fVar5 = *(float *)(unaff_RBP + 0x200);
  fVar4 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + 0x204),&stack0x00000038);
  fVar5 = (float)modff((float)(int)(uVar1 - 1) * fVar5,&stack0x00000038);
  fVar6 = (fStack000000000000005c - fStack0000000000000050) * fVar5 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * fVar5 + fStack0000000000000054;
  fVar7 = (fStack0000000000000064 - fStack0000000000000058) * fVar5 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * fVar5 + fStack0000000000000070)
               - fVar7) * fVar4 + fVar7;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * fVar5 +
                  fStack000000000000006c) - fStack0000000000000054) * fVar4 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * fVar5 +
                  fStack0000000000000068) - fVar6) * fVar4 + fVar6;
  unaff_RBX[3] = 1.0;
  system_crypto_001(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}
  data_180d48da8 = 1;
  FUN_180060680(unaff_RBP + -0x70,&unknown_180a177f0,&unknown_180a17770,&unknown_180a17798,0x786);
  OutputDebugStringA(unaff_RBP + -0x70);
  uVar1 = *(ushort *)(unaff_RDI + 0x5c);
  fVar3 = *(float *)(unaff_RBP + 0x200);
  fVar2 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + 0x204),&stack0x00000038);
  fVar3 = (float)modff((float)(int)(uVar1 - 1) * fVar3,&stack0x00000038);
  fVar4 = (fStack000000000000005c - fStack0000000000000050) * fVar3 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * fVar3 + fStack0000000000000054;
  fVar5 = (fStack0000000000000064 - fStack0000000000000058) * fVar3 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * fVar3 + fStack0000000000000070)
               - fVar5) * fVar2 + fVar5;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * fVar3 +
                  fStack000000000000006c) - fStack0000000000000054) * fVar2 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * fVar3 +
                  fStack0000000000000068) - fVar4) * fVar2 + fVar4;
  unaff_RBX[3] = 1.0;
  system_crypto_001(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}
        data_180d48dac = '\x01';
        lStack_278 = CONCAT44(lStack_278._4_4_,0x4ea);
        FUN_180060680(auStack_238,&unknown_180a177f0,&unknown_180a17830,&unknown_180a17880);
        OutputDebugStringA(auStack_238);
      }
      goto LAB_1802a83bc;
    }
    uVar5 = FUN_18062c100(&puStack_268,handle);
    system_thread_manager_012(uVar5,1);
    puStack_268 = &unknown_180a3c3e0;
    if (puStack_260 != (undefined *)0x0) {
      system_helper_001();
    }
    puStack_260 = (undefined *)0x0;
    uStack_250 = 0;
    puStack_268 = &unknown_18098bcb0;
    lVar6 = *flags;
    uVar1 = *(undefined2 *)((longlong)flags + 0x5e);
    flags = *(undefined2 *)((longlong)flags + 0x5c);
    puVar7 = &data_18098bc73;
    if (*(undefined **)(handle + 8) != (undefined *)0x0) {
      puVar7 = *(undefined **)(handle + 8);
    }
    iVar4 = fopen_s(&puStack_268,puVar7,&unknown_180a0cf4c);
    puStack_260 = puStack_268;
    if (iVar4 != 0) {
      puStack_260 = (undefined *)0x0;
    }
    puStack_268 = &unknown_18042d5d0;
    if (puStack_260 == (undefined *)0x0) goto LAB_1802a83bc;
    puVar7 = puStack_260;
    if (lVar6 != 0) {
      lStack_278 = lVar6;
      system_hardware_003(&puStack_268,flags,uVar1,iVar3);
      puVar7 = puStack_260;
    }
  }
  fclose(puVar7);
LAB_1802a83bc:
  system_crypto_001(uStack_38 ^ (ulonglong)auStack_298);
}
        data_180d48daa = '\x01';
        puStack_2d8 = (undefined *)CONCAT44(puStack_2d8._4_4_,0xc88);
        FUN_180060680(auStack_228,&unknown_180a177f0,&unknown_180a17a68,&unknown_180a17880);
        OutputDebugStringA(auStack_228);
      }
      puVar7 = &data_18098bc73;
      if (*(undefined **)(handle + 8) != (undefined *)0x0) {
        puVar7 = *(undefined **)(handle + 8);
      }
      system_data_manager_002(_data_180c86928,&unknown_180a17960,puVar7);
    }
  }
  cVar3 = system_handler_010(mutex_attr);
  if (cVar3 == '\0') {
    puVar7 = &data_18098bc73;
    if (*(undefined **)(handle + 8) != (undefined *)0x0) {
      puVar7 = *(undefined **)(handle + 8);
    }
    system_thread_003(&unknown_180a17a18,puVar7);
  }
  else {
    *(undefined8 *)(mutex_attr + 0x14) = 0;
    *(undefined8 *)(mutex_attr + 0x1c) = 0;
    *(undefined8 *)(mutex_attr + 0x24) = 0;
    *(undefined8 *)(mutex_attr + 0x2c) = 0;
    *(undefined8 *)(mutex_attr + 0x34) = 0;
    *(undefined8 *)(mutex_attr + 0x3c) = 0;
    *(undefined8 *)(mutex_attr + 0x44) = 0;
    *(undefined8 *)(mutex_attr + 0x4c) = 0;
    uVar4 = func_0x000180220c90(*(undefined4 *)(mutex_attr + 0x54));
    strcpy_s(mutex_attr + 0x14,0x40,uVar4);
  }
LAB_1802a912b:
  system_processor_012(auStack_260);
  system_crypto_001(uStack_28 ^ (ulonglong)auStack_2f8);
}
      data_180d48dab = '\x01';
      uStack_228 = 0xac7;
      FUN_180060680(auStack_218,&unknown_180a177f0,&unknown_180a179d0,&unknown_180a17880);
      OutputDebugStringA(auStack_218);
    }
  }
  else {
    system_thread_003(&unknown_180a17a38);
  }
  system_crypto_001(uStack_18 ^ (ulonglong)auStack_248);
}
bool system_handler_010(undefined8 *handle)
{
  int iVar1;
  undefined8 flags;
  undefined8 uVar3;
  iVar1 = *(int *)((longlong)handle + 0x54);
  if (iVar1 == 0x27) {
    if (handle[1] == 0) {
      flags = 0;
      uVar3 = 0;
    }
    else {
      flags = FUN_18062b420(_data_180c8ed18,handle[1],3);
      uVar3 = handle[1];
    }
    memcpy(flags,*handle,uVar3);
  }
  if (iVar1 != 0x28) {
    if (iVar1 == 0x29) {
      if (handle[1] == 0) {
        flags = 0;
        uVar3 = 0;
      }
      else {
        flags = FUN_18062b420(_data_180c8ed18,handle[1],3);
        uVar3 = handle[1];
      }
      memcpy(flags,*handle,uVar3);
    }
    iVar1 = func_0x0001800ab000(*(undefined4 *)((longlong)handle + 0x54));
    return iVar1 != 0;
  }
  if (handle[1] == 0) {
    flags = 0;
    uVar3 = 0;
  }
  else {
    flags = FUN_18062b420(_data_180c8ed18,handle[1],3);
    uVar3 = handle[1];
  }
  memcpy(flags,*handle,uVar3);
}
undefined8 system_handler_011(undefined8 *handle)
{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  float *pfVar4;
  ulonglong uVar5;
  ushort *puVar6;
  float *pfVar7;
  ulonglong uVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  switch(*(int *)((longlong)handle + 0x54) + -1) {
  case 0:
  case 1:
    pbVar9 = (byte *)*handle;
    pfVar4 = (float *)((ulonglong)handle[1] >> 2);
    if (0 < (int)pfVar4) {
      uVar8 = (ulonglong)pfVar4 & 0xffffffff;
      do {
        fVar14 = (float)pbVar9[1] * 0.007843138 - 1.0;
        fVar13 = (float)*pbVar9 * 0.007843138 - 1.0;
        fVar15 = (float)pbVar9[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pbVar9 = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        pbVar9[1] = (byte)(int)((fVar10 * fVar14 + 1.0) * 127.5);
        iVar2 = (int)((fVar10 * fVar15 + 1.0) * 127.5);
        pbVar9[2] = (byte)iVar2;
        pbVar9 = pbVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
    break;
  default:
    return 0;
  case 8:
    puVar6 = (ushort *)*handle;
    pfVar4 = (float *)((ulonglong)handle[1] >> 3);
    if (0 < (int)pfVar4) {
      uVar8 = (ulonglong)pfVar4 & 0xffffffff;
      do {
        fVar14 = (float)puVar6[1] * 3.0518044e-05 - 1.0;
        fVar13 = (float)*puVar6 * 3.0518044e-05 - 1.0;
        fVar15 = (float)puVar6[2] * 3.0518044e-05 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *puVar6 = (ushort)(int)((fVar10 * fVar13 + 1.0) * 32767.5);
        puVar6[1] = (ushort)(int)((fVar10 * fVar14 + 1.0) * 32767.5);
        iVar2 = (int)((fVar10 * fVar15 + 1.0) * 32767.5);
        puVar6[2] = (ushort)iVar2;
        puVar6 = puVar6 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
    break;
  case 0x1f:
    pfVar4 = (float *)*handle;
    if (0 < (int)((ulonglong)handle[1] / 0xc)) {
      uVar8 = (ulonglong)handle[1] / 0xc & 0xffffffff;
      do {
        fVar13 = (*pfVar4 + *pfVar4) - 1.0;
        fVar14 = (pfVar4[1] + pfVar4[1]) - 1.0;
        fVar15 = (pfVar4[2] + pfVar4[2]) - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pfVar4 = (fVar10 * fVar13 + 1.0) * 0.5;
        pfVar4[1] = (fVar10 * fVar14 + 1.0) * 0.5;
        pfVar4[2] = (fVar10 * fVar15 + 1.0) * 0.5;
        pfVar4 = pfVar4 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
    }
    break;
  case 0x20:
    uVar8 = handle[1];
    pfVar7 = (float *)*handle;
    pfVar4 = (float *)(uVar8 >> 4);
    if (0 < (int)pfVar4) {
      uVar5 = (ulonglong)pfVar4 & 0xffffffff;
      do {
        fVar13 = (*pfVar7 + *pfVar7) - 1.0;
        fVar14 = (pfVar7[1] + pfVar7[1]) - 1.0;
        fVar15 = (pfVar7[2] + pfVar7[2]) - 1.0;
        fVar10 = fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pfVar7 = (fVar10 * fVar13 + 1.0) * 0.5;
        pfVar7[2] = (fVar15 * fVar10 + 1.0) * 0.5;
        pfVar7[1] = (fVar10 * fVar14 + 1.0) * 0.5;
        pfVar7 = pfVar7 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return CONCAT71((uint7)(uVar8 >> 0xc),1);
    }
    break;
  case 0x26:
    puVar6 = (ushort *)*handle;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = handle[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
    uVar8 = (ulonglong)handle[1] / 6;
    if (0 < (int)uVar8) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        fVar14 = (float)puVar6[1] * 0.007843138 - 1.0;
        fVar13 = (float)*puVar6 * 0.007843138 - 1.0;
        fVar15 = (float)puVar6[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *puVar6 = (ushort)(int)((fVar13 * fVar10 + 1.0) * 127.5);
        puVar6[1] = (ushort)(int)((fVar14 * fVar10 + 1.0) * 127.5);
        iVar2 = (int)((fVar15 * fVar10 + 1.0) * 127.5);
        puVar6[2] = (ushort)iVar2;
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
    break;
  case 0x27:
  case 0x28:
    pbVar9 = (byte *)*handle;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = handle[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar12,0);
    uVar8 = (ulonglong)handle[1] / 3;
    if (0 < (int)uVar8) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        fVar14 = (float)pbVar9[1] * 0.007843138 - 1.0;
        fVar13 = (float)*pbVar9 * 0.007843138 - 1.0;
        fVar15 = (float)pbVar9[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pbVar9 = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        pbVar9[1] = (byte)(int)((fVar10 * fVar14 + 1.0) * 127.5);
        uVar3 = (uint)((fVar10 * fVar15 + 1.0) * 127.5);
        pfVar4 = (float *)(ulonglong)uVar3;
        pbVar9[2] = (byte)uVar3;
        pbVar9 = pbVar9 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
}
undefined8 system_handler_012(undefined8 *handle)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  if (*(int *)((longlong)handle + 0x54) == 0x20) {
    pfVar14 = (float *)*handle;
    iVar18 = 0;
    dVar21 = 0.0;
    lVar20 = 0;
    iVar17 = 0;
    iVar16 = (int)((ulonglong)handle[1] / 0xc);
    pfVar15 = pfVar14;
    if (3 < iVar16) {
      uVar13 = (iVar16 - 4U >> 2) + 1;
      uVar19 = (ulonglong)uVar13;
      lVar20 = (ulonglong)uVar13 * 4;
      iVar17 = uVar13 * 4;
      do {
        pfVar1 = pfVar15 + 3;
        fVar12 = *pfVar15;
        pfVar2 = pfVar15 + 6;
        pfVar3 = pfVar15 + 7;
        pfVar4 = pfVar15 + 5;
        pfVar5 = pfVar15 + 9;
        pfVar6 = pfVar15 + 10;
        pfVar7 = pfVar15 + 4;
        pfVar8 = pfVar15 + 1;
        pfVar9 = pfVar15 + 2;
        pfVar10 = pfVar15 + 8;
        pfVar11 = pfVar15 + 0xb;
        pfVar15 = pfVar15 + 0xc;
        dVar21 = dVar21 + (double)*pfVar1 * 0.2126 + (double)fVar12 * 0.2126 +
                          (double)*pfVar2 * 0.2126 + (double)*pfVar5 * 0.2126 +
                          (double)*pfVar6 * 0.7152 +
                          (double)*pfVar3 * 0.7152 + (double)*pfVar7 * 0.7152 +
                          (double)*pfVar8 * 0.7152 +
                          (double)*pfVar4 * 0.0722 + (double)*pfVar9 * 0.0722 +
                          (double)*pfVar10 * 0.0722 + (double)*pfVar11 * 0.0722;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (iVar17 < iVar16) {
      pfVar15 = pfVar15 + 2;
      uVar19 = (ulonglong)(uint)(iVar16 - iVar17);
      lVar20 = lVar20 + uVar19;
      do {
        pfVar1 = pfVar15 + -1;
        pfVar2 = pfVar15 + -2;
        fVar12 = *pfVar15;
        pfVar15 = pfVar15 + 3;
        dVar21 = dVar21 + (double)*pfVar1 * 0.7152 + (double)*pfVar2 * 0.2126 +
                          (double)fVar12 * 0.0722;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    dVar21 = 1.0 / (dVar21 / (double)lVar20);
    if (3 < iVar16) {
      uVar13 = (iVar16 - 4U >> 2) + 1;
      uVar19 = (ulonglong)uVar13;
      iVar18 = uVar13 * 4;
      do {
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14[1] = (float)((double)pfVar14[1] * dVar21);
        pfVar14[2] = (float)((double)pfVar14[2] * dVar21);
        pfVar14[3] = (float)((double)pfVar14[3] * dVar21);
        pfVar14[4] = (float)((double)pfVar14[4] * dVar21);
        pfVar14[5] = (float)((double)pfVar14[5] * dVar21);
        pfVar14[6] = (float)((double)pfVar14[6] * dVar21);
        pfVar14[7] = (float)((double)pfVar14[7] * dVar21);
        pfVar14[8] = (float)((double)pfVar14[8] * dVar21);
        pfVar14[9] = (float)((double)pfVar14[9] * dVar21);
        pfVar14[10] = (float)((double)pfVar14[10] * dVar21);
        pfVar14[0xb] = (float)((double)pfVar14[0xb] * dVar21);
        pfVar14 = pfVar14 + 0xc;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (iVar18 < iVar16) {
      pfVar14 = pfVar14 + 2;
      uVar19 = (ulonglong)(uint)(iVar16 - iVar18);
      do {
        pfVar14[-2] = (float)((double)pfVar14[-2] * dVar21);
        pfVar14[-1] = (float)((double)pfVar14[-1] * dVar21);
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14 = pfVar14 + 3;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  else {
    if (*(int *)((longlong)handle + 0x54) != 0x21) {
      return 0;
    }
    iVar18 = 0;
    pfVar14 = (float *)*handle;
    dVar21 = 0.0;
    lVar20 = 0;
    iVar16 = 0;
    iVar17 = (int)((ulonglong)handle[1] >> 4);
    pfVar15 = pfVar14;
    if (3 < iVar17) {
      uVar13 = (iVar17 - 4U >> 2) + 1;
      uVar19 = (ulonglong)uVar13;
      lVar20 = (ulonglong)uVar13 * 4;
      iVar16 = uVar13 * 4;
      do {
        pfVar1 = pfVar15 + 4;
        fVar12 = *pfVar15;
        pfVar2 = pfVar15 + 8;
        pfVar3 = pfVar15 + 9;
        pfVar4 = pfVar15 + 6;
        pfVar5 = pfVar15 + 0xc;
        pfVar6 = pfVar15 + 0xd;
        pfVar7 = pfVar15 + 5;
        pfVar8 = pfVar15 + 1;
        pfVar9 = pfVar15 + 2;
        pfVar10 = pfVar15 + 10;
        pfVar11 = pfVar15 + 0xe;
        pfVar15 = pfVar15 + 0x10;
        dVar21 = dVar21 + (double)*pfVar1 * 0.2126 + (double)fVar12 * 0.2126 +
                          (double)*pfVar2 * 0.2126 + (double)*pfVar5 * 0.2126 +
                          (double)*pfVar6 * 0.7152 +
                          (double)*pfVar3 * 0.7152 + (double)*pfVar7 * 0.7152 +
                          (double)*pfVar8 * 0.7152 +
                          (double)*pfVar4 * 0.0722 + (double)*pfVar9 * 0.0722 +
                          (double)*pfVar10 * 0.0722 + (double)*pfVar11 * 0.0722;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (iVar16 < iVar17) {
      pfVar15 = pfVar15 + 2;
      uVar19 = (ulonglong)(uint)(iVar17 - iVar16);
      lVar20 = lVar20 + uVar19;
      do {
        pfVar1 = pfVar15 + -1;
        pfVar2 = pfVar15 + -2;
        fVar12 = *pfVar15;
        pfVar15 = pfVar15 + 4;
        dVar21 = dVar21 + (double)*pfVar1 * 0.7152 + (double)*pfVar2 * 0.2126 +
                          (double)fVar12 * 0.0722;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    dVar21 = 1.0 / (dVar21 / (double)lVar20);
    if (3 < iVar17) {
      uVar13 = (iVar17 - 4U >> 2) + 1;
      uVar19 = (ulonglong)uVar13;
      iVar18 = uVar13 * 4;
      do {
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14[1] = (float)((double)pfVar14[1] * dVar21);
        pfVar14[2] = (float)((double)pfVar14[2] * dVar21);
        pfVar14[4] = (float)((double)pfVar14[4] * dVar21);
        pfVar14[5] = (float)((double)pfVar14[5] * dVar21);
        pfVar14[6] = (float)((double)pfVar14[6] * dVar21);
        pfVar14[8] = (float)((double)pfVar14[8] * dVar21);
        pfVar14[9] = (float)((double)pfVar14[9] * dVar21);
        pfVar14[10] = (float)((double)pfVar14[10] * dVar21);
        pfVar14[0xc] = (float)((double)pfVar14[0xc] * dVar21);
        pfVar14[0xd] = (float)((double)pfVar14[0xd] * dVar21);
        pfVar14[0xe] = (float)((double)pfVar14[0xe] * dVar21);
        pfVar14 = pfVar14 + 0x10;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (iVar18 < iVar17) {
      pfVar14 = pfVar14 + 2;
      uVar19 = (ulonglong)(uint)(iVar17 - iVar18);
      do {
        pfVar14[-2] = (float)((double)pfVar14[-2] * dVar21);
        pfVar14[-1] = (float)((double)pfVar14[-1] * dVar21);
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14 = pfVar14 + 4;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  return 1;
}
  data_180c8aa6a = 0;
  *(undefined4 *)(init_result + 0x4c) = 0;
  system_network_001(*(undefined8 *)(init_result + 0x108));
  puStack_50 = &unknown_data_002;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0x12;
  strcpy_s(auStack_38,0x20,&unknown_180a1a918);
  system_network_002();
  puStack_50 = &unknown_18098bcb0;
  system_crypto_001(uStack_18 ^ (ulonglong)auStack_78);
}
        data_180d48e78 = 0;
        _data_180d48eb8 = 0;
        _data_180d48ec0 = 0;
        uRam0000000180d48ec8 = 0;
        _data_180d48ed0 = 3;
        _data_180d48e30 = 0;
        system_crypto_002(&unknown_180941dc0);
        system_crypto_003(&data_180d48e24);
      }
      puVar7 = (uint *)&data_180d48e30;
      if (uVar8 < (ulonglong)
                  ((*(longlong *)(mutex_attr + 0x1c) - *(longlong *)(mutex_attr + 0x1a)) / 0xb0)) {
        puVar7 = (uint *)(uVar12 + *(longlong *)(mutex_attr + 0x1a));
      }
      if ((*(int *)(init_result0 + 0x48) < _data_180d48e24) &&
         (system_crypto_004(&data_180d48e24), _data_180d48e24 == -1)) {
        _data_180d48e60 = &unknown_data_003;
        _data_180d48e68 = &data_180d48e78;
        _data_180d48e70 = 0;
        data_180d48e78 = 0;
        _data_180d48eb8 = 0;
        _data_180d48ec0 = 0;
        uRam0000000180d48ec8 = 0;
        _data_180d48ed0 = 3;
        _data_180d48e30 = 0;
        system_crypto_002(&unknown_180941dc0);
        system_crypto_003(&data_180d48e24);
      }
      puVar6 = &data_180d48e30;
      if (uVar8 < (ulonglong)
                  ((*(longlong *)(flags + 0x1c) - *(longlong *)(flags + 0x1a)) / 0xb0)) {
        puVar6 = (undefined *)(uVar12 + *(longlong *)(flags + 0x1a));
      }
      if ((((0.0001 <= ABS(*(float *)(puVar6 + 0x14) - (float)puVar7[5])) ||
           (0.0001 <= ABS(*(float *)(puVar6 + 0x18) - (float)puVar7[6]))) ||
          (0.0001 <= ABS(*(float *)(puVar6 + 0x1c) - (float)puVar7[7]))) ||
         (((0.0001 <= ABS(*(float *)(puVar6 + 0x10) - (float)puVar7[4]) ||
           (0.0001 <= ABS(*(float *)(puVar6 + 0x20) - (float)puVar7[8]))) ||
          ((0.0001 <= ABS(*(float *)(puVar6 + 0x24) - (float)puVar7[9]) ||
           (0.0001 <= ABS(*(float *)(puVar6 + 0x28) - (float)puVar7[10]))))))) {
        *puVar7 = *puVar7 | 8;
      }
      uVar3 = system_allocator_001(handle,puVar6 + 0x88,puVar7 + 0x22);
      uVar8 = uVar8 + 1;
      uVar12 = uVar12 + 0xb0;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
LAB_180328385:
  return uVar3 & 0xffffffffffffff00;
}
data_180329eb7:
    iVar2 = _Mtx_unlock(handle + 0x3d8);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    break;
  default:
LAB_180329ed5:
    uVar4 = 1;
    goto LAB_180329ed7;
  }
  *flags = (longlong)plVar5;
code_r0x000180329ed1:
  bVar8 = (byte)auStackX_20[0];
  goto LAB_180329ed5;
}
undefined8 system_allocator_004(longlong handle,longlong *flags,undefined4 *mutex_attr,uint mutex_type)
{
  longlong *pinit_result;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plStackX_18;
  undefined4 auStackX_20 [2];
  longlong *plStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  longlong **pplStack_68;
  longlong *plStack_60;
  undefined1 auStack_58 [32];
  uStack_70 = 0xfffffffffffffffe;
  uVar5 = 0;
  bVar2 = *(byte *)(mutex_attr + 2);
  if ((mutex_type >> 1 & 1) != 0) {
    system_ui_003(_data_180c86930,&plStack_78,mutex_attr + 0x14,1);
    puVar4 = (undefined8 *)system_ui_006();
    system_resource_002(*puVar4,&plStackX_18);
    if (plStack_80 != (longlong *)0x0) {
      (**(code **)(*plStack_80 + 0x38))();
    }
    system_resource_003(plStackX_18,&plStack_78);
    *(uint *)(plStackX_18 + 0x20) = *(uint *)(plStackX_18 + 0x20) | 0x40000000;
    auStackX_20[0] = *mutex_attr;
    pinit_result = (longlong *)(handle + 0x3d8);
    plStack_80 = pinit_result;
    iVar3 = _Mtx_lock(pinit_result);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    uVar5 = FUN_18062b1e0(_data_180c8ed18,0x298,8,3);
    plVar6 = (longlong *)system_memory_001(uVar5);
    pplStack_68 = (longlong **)CONCAT44(pplStack_68._4_4_,auStackX_20[0]);
    plStack_60 = plVar6;
    system_memory_manager_006(handle + 0x3a8,auStack_58,&pplStack_68);
    iVar3 = _Mtx_unlock(pinit_result);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    *flags = (longlong)plVar6;
    uVar5 = *(undefined8 *)(handle + 0x2d8);
    pplStack_68 = &plStack_80;
    plStack_80 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    FUN_1801a35b0(uVar5,&plStack_80);
    *(int *)(handle + 0xb0) = *(int *)(handle + 0xb0) + 1;
    uVar5 = 1;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (plStack_78 != (longlong *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
  }
  if ((mutex_type >> 2 & 1) == 0) {
    if (((mutex_type >> 1 & 1) == 0) && ((bVar2 & 1) != 0)) {
      lVar7 = system_memory_manager_007(handle,*mutex_attr);
      *flags = lVar7;
      uVar5 = 1;
    }
  }
  else {
    auStackX_20[0] = *mutex_attr;
    lVar7 = system_memory_manager_007(handle);
    if (lVar7 == 0) {
      *flags = 0;
      uVar5 = 1;
    }
    else {
      pinit_result = (longlong *)(handle + 0x3d8);
      plStackX_18 = pinit_result;
      iVar3 = _Mtx_lock(pinit_result);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      system_memory_manager_008(handle + 0x3a8,auStackX_20);
      iVar3 = _Mtx_unlock(pinit_result);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      *flags = lVar7;
      *(undefined1 *)(lVar7 + 0x39) = 1;
      uVar5 = 1;
    }
  }
  return uVar5;
}
    data_180d49748 = 0;
    system_memory_002(0x180d496e0);
    system_crypto_002(FUN_180941dd0);
    system_crypto_003(&data_180d496d0);
  }
  iVar2 = _Mtx_lock(handle + 0x6e8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if ((ulonglong)mutex_attr <= *(ulonglong *)(handle + 0x160)) {
    for (puVar3 = *(uint **)(*(longlong *)(handle + 0x6c0) +
                            ((ulonglong)flags % (ulonglong)*(uint *)(handle + 0x6c8)) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if (flags == *puVar3) goto LAB_18032b938;
    }
    puVar3 = *(uint **)(*(longlong *)(handle + 0x6c0) + *(longlong *)(handle + 0x6c8) * 8);
LAB_18032b938:
    lVar4 = *(longlong *)(puVar3 + 2);
    init_result = *(longlong *)(lVar4 + 8);
    for (puVar3 = *(uint **)(init_result + ((ulonglong)mutex_attr % (ulonglong)*(uint *)(lVar4 + 0x10)) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if (mutex_attr == *puVar3) {
        lVar4 = *(longlong *)(lVar4 + 0x10);
        goto LAB_18032b96c;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    puVar3 = *(uint **)(init_result + lVar4 * 8);
LAB_18032b96c:
    if ((puVar3 != *(uint **)(init_result + lVar4 * 8)) && (lVar4 = *(longlong *)(puVar3 + 2), lVar4 != 0)
       ) goto LAB_18032b98e;
  }
  system_memory_002(0x180d496e0);
  lVar4 = 0x180d496e0;
LAB_18032b98e:
  iVar2 = _Mtx_unlock(handle + 0x6e8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return lVar4;
}
longlong system_allocator_005(longlong handle,uint flags,uint mutex_attr)
{
  longlong init_result;
  longlong lVar2;
  uint *puVar3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _data_180d497d0) && (system_crypto_004(&data_180d497d0), _data_180d497d0 == -1)) {
    system_memory_004(0x180d497e0);
    system_crypto_002(FUN_180941e00);
    system_crypto_003(&data_180d497d0);
  }
  if ((ulonglong)mutex_attr <= *(ulonglong *)(handle + 0x160)) {
    for (puVar3 = *(uint **)(*(longlong *)(handle + 0x9f8) +
                            ((ulonglong)flags % (ulonglong)*(uint *)(handle + 0xa00)) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if (flags == *puVar3) goto LAB_18032baef;
    }
    puVar3 = *(uint **)(*(longlong *)(handle + 0x9f8) + *(longlong *)(handle + 0xa00) * 8);
LAB_18032baef:
    lVar2 = *(longlong *)(puVar3 + 2);
    init_result = *(longlong *)(lVar2 + 8);
    for (puVar3 = *(uint **)(init_result + ((ulonglong)mutex_attr % (ulonglong)*(uint *)(lVar2 + 0x10)) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if (mutex_attr == *puVar3) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
        goto LAB_18032bb25;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    puVar3 = *(uint **)(init_result + lVar2 * 8);
LAB_18032bb25:
    if ((puVar3 != *(uint **)(init_result + lVar2 * 8)) && (*(longlong *)(puVar3 + 2) != 0)) {
      return *(longlong *)(puVar3 + 2);
    }
  }
  system_memory_005(0x180d497e0);
  return 0x180d497e0;
}
longlong system_allocator_007(undefined8 handle,longlong *flags,longlong mutex_attr)
{
  longlong init_result;
  uint flags;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _data_180d49990) {
    system_crypto_004(&data_180d49990);
    if (_data_180d49990 == -1) {
      uVar4 = FUN_18062b1e0(_data_180c8ed18,0x1c8,8,3);
      _data_180d48de0 = system_memory_manager_001(uVar4);
      uVar4 = FUN_18062b1e0(_data_180c8ed18,0x200,8,3);
      _data_180d48de8 = system_memory_manager_002(uVar4);
      puVar5 = (undefined8 *)FUN_18062b1e0(_data_180c8ed18,0xf8,8,3);
      system_memory_003(puVar5);
      *puVar5 = &unknown_180a1b368;
      system_memory_manager_004(puVar5);
      _data_180d48df0 = puVar5;
      _data_180d48df8 = FUN_18033a090();
      puVar5 = (undefined8 *)FUN_18062b1e0(_data_180c8ed18,0xb0,8,3);
      system_memory_003(puVar5);
      *puVar5 = &unknown_180a1b3f0;
      _data_180d48e00 = puVar5;
      _data_180d48e08 = system_memory_manager_005();
      _data_180d48e10 = (*_data_180c918d8)(&data_180c918c0);
      _data_180d48e18 = 0;
      system_crypto_003(&data_180d49990);
    }
  }
  uVar3 = 0;
  uVar6 = (uint)(flags[1] - *flags >> 3);
  if (uVar6 != 0) {
    do {
      init_result = *(longlong *)(*flags + uVar3 * 8);
      if (*(int *)(init_result + 8) == *(int *)(mutex_attr + 8)) {
        return init_result;
      }
      flags = (int)uVar3 + 1;
      uVar3 = (ulonglong)flags;
    } while (flags < uVar6);
  }
  (**(code **)(**(longlong **)(&data_180d48de0 + (ulonglong)*(uint *)(mutex_attr + 0x8c) * 8) + 8))();
  return *(longlong *)(&data_180d48de0 + (ulonglong)*(uint *)(mutex_attr + 0x8c) * 8);
}
undefined8
system_allocator_008(undefined8 handle,longlong *flags,undefined8 *mutex_attr,undefined4 mutex_type,
             undefined4 param_5,undefined1 param_6)
{
  longlong init_result;
  ulonglong flags;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uVar4 = 0;
  flags = flags[1] - *flags >> 2;
  if ((int)flags != 0) {
    lVar6 = 0;
    flags = flags & 0xffffffff;
    do {
      puVar7 = (uint *)*mutex_attr;
      init_result = *flags;
      lVar3 = (longlong)mutex_attr[1] - (longlong)puVar7 >> 2;
      if (0 < lVar3) {
        do {
          lVar5 = lVar3 >> 1;
          if (puVar7[lVar5] < *(uint *)(init_result + lVar6)) {
            puVar7 = puVar7 + lVar5 + 1;
            lVar5 = lVar3 + (-1 - lVar5);
          }
          lVar3 = lVar5;
        } while (0 < lVar5);
      }
      if ((puVar7 == (uint *)mutex_attr[1]) || (*(uint *)(init_result + lVar6) < *puVar7)) {
        uVar4 = system_allocator_005(handle,*(undefined4 *)(init_result + lVar6),mutex_type);
        system_allocator_002(handle,uVar4,param_5,mutex_type,param_6);
        uVar4 = 1;
      }
      lVar6 = lVar6 + 4;
      flags = flags - 1;
    } while (flags != 0);
  }
  return uVar4;
}
undefined1 system_allocator_009(void)
{
  uint in_EAX;
  longlong init_result;
  longlong lVar2;
  longlong lVar3;
  undefined1 unaff_SIL;
  ulonglong uVar4;
  uint *puVar5;
  undefined8 *unaff_R14;
  longlong *unaff_R15;
  lVar3 = 0;
  uVar4 = (ulonglong)in_EAX;
  do {
    puVar5 = (uint *)*unaff_R14;
    init_result = (longlong)unaff_R14[1] - (longlong)puVar5 >> 2;
    if (0 < init_result) {
      do {
        lVar2 = init_result >> 1;
        if (puVar5[lVar2] < *(uint *)(*unaff_R15 + lVar3)) {
          puVar5 = puVar5 + lVar2 + 1;
          lVar2 = init_result + (-1 - lVar2);
        }
        init_result = lVar2;
      } while (0 < lVar2);
    }
    if ((puVar5 == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + lVar3) < *puVar5)) {
      system_allocator_005();
      system_allocator_002();
      unaff_SIL = 1;
    }
    lVar3 = lVar3 + 4;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return unaff_SIL;
}
undefined1 system_allocator_010(void)
{
  undefined1 unaff_SIL;
  return unaff_SIL;
}
undefined8
system_allocator_011(undefined8 handle,longlong *flags,longlong *mutex_attr,uint mutex_type,char param_5)
{
  longlong init_result;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong init_result0;
  uVar8 = 0;
  init_result = mutex_attr[1];
  lVar2 = *mutex_attr;
  uVar4 = flags[1] - *flags >> 3;
  if ((int)uVar4 != 0) {
    lVar6 = 0;
    uVar4 = uVar4 & 0xffffffff;
    do {
      uVar5 = 0;
      uVar7 = (uint)(init_result - lVar2 >> 3);
      if (uVar7 != 0) {
        do {
          if (*(int *)(*(longlong *)(*flags + lVar6) + 8) ==
              *(int *)(*(longlong *)(*mutex_attr + uVar5 * 8) + 8)) goto LAB_18032bf87;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar7);
      }
      lVar9 = *(longlong *)(lVar6 + *flags);
      *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | mutex_type;
      if (((param_5 != '\0') && (*(int *)(lVar9 + 0x8c) == 2)) &&
         (uVar5 = *(longlong *)(lVar9 + 0xc0) - *(longlong *)(lVar9 + 0xb8) >> 3, (int)uVar5 != 0))
      {
        init_result0 = 0;
        uVar5 = uVar5 & 0xffffffff;
        do {
          system_allocator_003(handle,*(undefined8 *)(*(longlong *)(lVar9 + 0xb8) + init_result0),mutex_type,
                        param_5);
          init_result0 = init_result0 + 8;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      uVar8 = 1;
LAB_18032bf87:
      lVar6 = lVar6 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar8;
}
undefined1 system_allocator_012(undefined8 handle,undefined8 flags,longlong *mutex_attr)
{
  longlong init_result;
  uint flags;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  uint unaff_EDI;
  undefined1 in_R10B;
  longlong *unaff_R13;
  uint unaff_R14D;
  ulonglong uVar5;
  longlong *in_stack_00000060;
  char in_stack_00000070;
  lVar4 = 0;
  uVar5 = in_RAX & 0xffffffff;
  do {
    uVar3 = 0;
    if (unaff_EDI != 0) {
      do {
        if (*(int *)(*(longlong *)(*unaff_R13 + lVar4) + 8) ==
            *(int *)(*(longlong *)(*mutex_attr + uVar3 * 8) + 8)) goto LAB_18032bf87;
        flags = (int)uVar3 + 1;
        uVar3 = (ulonglong)flags;
      } while (flags < unaff_EDI);
    }
    init_result = *(longlong *)(lVar4 + *unaff_R13);
    *(uint *)(init_result + 0x10) = *(uint *)(init_result + 0x10) | unaff_R14D;
    if (((in_stack_00000070 != '\0') && (*(int *)(init_result + 0x8c) == 2)) &&
       (uVar3 = *(longlong *)(init_result + 0xc0) - *(longlong *)(init_result + 0xb8) >> 3, (int)uVar3 != 0)) {
      uVar3 = uVar3 & 0xffffffff;
      do {
        system_allocator_003();
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    in_R10B = 1;
LAB_18032bf87:
    lVar4 = lVar4 + 8;
    uVar5 = uVar5 - 1;
    mutex_attr = in_stack_00000060;
    if (uVar5 == 0) {
      return in_R10B;
    }
  } while( true );
}
undefined1 system_allocator_013(void)
{
  undefined1 in_R10B;
  return in_R10B;
}
undefined8
system_allocator_014(undefined8 handle,longlong *flags,undefined8 *mutex_attr,undefined4 mutex_type,
             uint param_5)
{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint *puVar7;
  uVar6 = 0;
  uVar1 = flags[1] - *flags >> 2;
  if ((int)uVar1 != 0) {
    lVar5 = 0;
    uVar1 = uVar1 & 0xffffffff;
    do {
      puVar7 = (uint *)*mutex_attr;
      lVar3 = *flags;
      lVar2 = (longlong)mutex_attr[1] - (longlong)puVar7 >> 2;
      if (0 < lVar2) {
        do {
          lVar4 = lVar2 >> 1;
          if (puVar7[lVar4] < *(uint *)(lVar3 + lVar5)) {
            puVar7 = puVar7 + lVar4 + 1;
            lVar4 = lVar2 + (-1 - lVar4);
          }
          lVar2 = lVar4;
        } while (0 < lVar4);
      }
      if ((puVar7 == (uint *)mutex_attr[1]) || (*(uint *)(lVar3 + lVar5) < *puVar7)) {
        lVar3 = system_allocator_006(handle,*(undefined4 *)(lVar3 + lVar5),mutex_type);
        uVar6 = 1;
        *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | param_5;
      }
      lVar5 = lVar5 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return uVar6;
}
undefined1 system_allocator_015(void)
{
  uint in_EAX;
  longlong init_result;
  longlong lVar2;
  longlong lVar3;
  undefined1 unaff_SIL;
  ulonglong uVar4;
  uint *puVar5;
  undefined8 *unaff_R14;
  longlong *unaff_R15;
  uint in_stack_00000070;
  lVar3 = 0;
  uVar4 = (ulonglong)in_EAX;
  do {
    puVar5 = (uint *)*unaff_R14;
    init_result = (longlong)unaff_R14[1] - (longlong)puVar5 >> 2;
    if (0 < init_result) {
      do {
        lVar2 = init_result >> 1;
        if (puVar5[lVar2] < *(uint *)(*unaff_R15 + lVar3)) {
          puVar5 = puVar5 + lVar2 + 1;
          lVar2 = init_result + (-1 - lVar2);
        }
        init_result = lVar2;
      } while (0 < lVar2);
    }
    if ((puVar5 == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + lVar3) < *puVar5)) {
      init_result = system_allocator_006();
      unaff_SIL = 1;
      *(uint *)(init_result + 8) = *(uint *)(init_result + 8) | in_stack_00000070;
    }
    lVar3 = lVar3 + 4;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return unaff_SIL;
}
undefined1 system_allocator_016(void)
{
  undefined1 unaff_SIL;
  return unaff_SIL;
}
  data_1dc4331ba = data_1dc4331ba + unaff_BL;
  uVar5 = in(uVar3);
  pcVar1 = (char *)((ulonglong)uVar5 + 0x1c0042ed);
  *pcVar1 = *pcVar1 + (char)unaff_RDI + '\x04';
  out(uVar3,(char)uVar5);
  pcVar1 = (char *)((ulonglong)uVar5 - 0x12);
  *pcVar1 = *pcVar1 + (char)flags;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}
      data_180d499e8 = 0;
      _data_180d499e0 = 6;
      strcpy_s(&data_180d499e8,0x200,&data_180a3c074,str_len_param,uVar1);
      system_crypto_002(FUN_180942830);
      system_crypto_003(&data_180d499c8);
    }
  }
  (**(code **)(*_data_180c8f008 + 0x70))(_data_180c8f008,&data_180d499d0);
  return;
}
undefined4
system_finalizer_005(undefined8 handle,undefined8 flags,undefined8 mutex_attr,undefined8 mutex_type)
{
  code *pcVar1;
  undefined4 flags;
  undefined8 uVar3;
  undefined *puStack_28;
  longlong lStack_20;
  pcVar1 = *(code **)(*_data_180c8f008 + 0x70);
  uVar3 = system_ui_005(&puStack_28,&unknown_180a02fc8,mutex_attr,mutex_type,0,0xfffffffffffffffe);
  flags = (*pcVar1)(_data_180c8f008,uVar3,mutex_attr,mutex_type,1);
  puStack_28 = &unknown_180a3c3e0;
  if (lStack_20 != 0) {
    system_helper_001();
  }
  return flags;
}
undefined4
system_finalizer_006(undefined8 handle,undefined8 flags,undefined8 mutex_attr,undefined8 mutex_type)
{
  code *pcVar1;
  undefined4 flags;
  undefined8 uVar3;
  undefined *puStack_28;
  longlong lStack_20;
  pcVar1 = *(code **)(*_data_180c8f008 + 0x70);
  uVar3 = system_ui_005(&puStack_28,&unknown_180a02fa0,mutex_attr,mutex_type,0,0xfffffffffffffffe);
  flags = (*pcVar1)(_data_180c8f008,uVar3,mutex_attr,mutex_type,1);
  puStack_28 = &unknown_180a3c3e0;
  if (lStack_20 != 0) {
    system_helper_001();
  }
  return flags;
}
undefined4
system_finalizer_007(undefined8 handle,undefined8 flags,undefined8 mutex_attr,undefined8 mutex_type)
{
  code *pcVar1;
  undefined4 flags;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_30;
  longlong lStack_28;
  uVar4 = 0xfffffffffffffffe;
  pcVar1 = *(code **)(*_data_180c8f008 + 0x70);
  uVar3 = system_cleanup_007(&puStack_30);
  flags = (*pcVar1)(_data_180c8f008,uVar3,mutex_attr,mutex_type,uVar4);
  puStack_30 = &unknown_180a3c3e0;
  if (lStack_28 != 0) {
    system_helper_001();
  }
  return flags;
}
    data_180d49c08 = 0;
    if (handle != 0) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(handle + lVar2) != '\0');
      _data_180d49c00 = (undefined4)lVar2;
      strcpy_s(&data_180d49c08,0x100,handle);
    }
    system_crypto_002(FUN_180942850);
    system_crypto_003(&data_180d49d08);
  }
  uVar3 = FUN_18062b1e0(_data_180c8ed18,0xe0,8,3,uVar3);
  plStackX_10 = alStack_30;
  puStack_20 = &unknown_18045f210;
  puStack_18 = &unknown_18045f200;
  pinit_result = (longlong *)FUN_18006b640(uVar3,alStack_30);
  plStackX_18 = pinit_result;
  if (pinit_result != (longlong *)0x0) {
    (**(code **)(*pinit_result + 0x28))(pinit_result);
  }
  uVar3 = _data_180c82868;
  pplStackX_20 = &plStackX_10;
  plStackX_10 = pinit_result;
  if (pinit_result != (longlong *)0x0) {
    (**(code **)(*pinit_result + 0x28))(pinit_result);
  }
  system_event_handler_014(uVar3,&plStackX_10);
  if (pinit_result != (longlong *)0x0) {
    (**(code **)(*pinit_result + 0x38))(pinit_result);
  }
  return;
}
  data_180c95f28 = 1;
  _data_180c924c8 = 0x100;
  _data_180c924d0 = &unknown_180a3c3e0;
  _data_180c924e8 = 0;
  _data_180c924d8 = 0;
  _data_180c924e0 = 0;
  _data_180c924f0 = &unknown_180a3c3e0;
  _data_180c92508 = 0;
  _data_180c924f8 = 0;
  _data_180c92500 = 0;
  _data_180c92514 = 0;
  data_180c92588 = 1;
  _data_180c92590 = 0;
  _data_180c92598 = 0;
  system_finalizer_009();
  init_result = 0x180c95bf8;
  lVar2 = 0x17;
  do {
    func_0x00018013d940(init_result);
    init_result = init_result + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  data_180c95bf0 = 0;
  _Mtx_init_in_situ(0x180c95d70,2,mutex_attr,mutex_type,uVar3);
  _data_180c95dc0 = 0xffffffff;
  _data_180c95dd0 = 0;
  _data_180c95dc8 = 0;
  _data_180c95d68 = 0xffdc;
  data_180c95dd8 = 1;
  system_finalizer_008(&data_180c924d0);
  _data_180c95fe0 = 3;
  _data_180c95fc8 = 0;
  _data_180c95fd0 = 0;
  _data_180c95fd8 = 0;
  data_180c95fe8 = 1;
  _data_180c96120 = 0;
  _data_180c96118 = 0;
  data_180c96140 = 1;
  _data_180c960dc = 0;
  _data_180c960fc = 0;
  _data_180c960c0 = 0;
  _data_180c960c8 = 0;
  _data_180c960d0 = 0;
  _data_180c960d8 = 3;
  _data_180c960e0 = 0;
  _data_180c960e4 = 0;
  _data_180c960e8 = 0;
  _data_180c960ec = 0;
  _data_180c960f0 = 0;
  _data_180c960f4 = 0;
  _data_180c960f8 = 3;
  data_180c96100 = 1;
  FUN_1804b9ce0(0x180c95de0);
  data_180c96210 = 1;
  _data_180c9620c = 3;
  _data_180c96204 = 0x40000000;
  _data_180c96200 = 0x3f800000;
  _data_180c961f8 = 0;
  _data_180c961f0 = 1;
  _data_180c961e8 = &data_180be0000;
  _data_180c961e0 = 0;
  data_180c961d8 = 1;
  _data_180c961d0 = 0;
  _data_180c961c8 = 3;
  _data_180c961c0 = 0;
  uRam0000000180c961b8 = 0;
  _data_180c961b0 = 0;
  data_180c961a0 = 1;
  _data_180c9619c = 3;
  _data_180c96194 = 0x40000000;
  _data_180c96190 = 0x3f800000;
  _data_180c96188 = 0;
  _data_180c96180 = 1;
  _data_180c96178 = &data_180be0000;
  _data_180c96168 = 4;
  _data_180c96160 = 0;
  _data_180c96158 = 0;
  _data_180c96150 = 0;
  _data_180c96090 = 3;
  _data_180c96088 = 0;
  _data_180c96080 = 0;
  _data_180c96078 = 0;
  _data_180c96070 = 0;
  data_180c96068 = 1;
  _data_180c96050 = 0;
  data_180c96048 = 1;
  _data_180c96030 = 0;
  data_180c96028 = 1;
  _data_180c96010 = 0;
  data_180c96008 = 1;
  _data_180c95ff0 = 0;
  data_180c95fc0 = 1;
  _data_180c95fb8 = 0;
  _data_180c95fb0 = 0;
  _data_180c95fa8 = 0;
  _data_180c95fa0 = 3;
  uRam0000000180c95f98 = 0;
  _data_180c95f90 = 0;
  _data_180c95f88 = 0;
  _data_180c95f80 = 3;
  uRam0000000180c95f78 = 0;
  _data_180c95f70 = 0;
  _data_180c95f68 = 0;
  _data_180c95f64 = 4;
  _data_180c95f5c = 0x40000000;
  _data_180c95f58 = 0x3f800000;
  _data_180c95f50 = 0;
  _data_180c95f48 = 1;
  _data_180c95f40 = &data_180be0000;
  data_180c95ef0 = 1;
  _data_180c95ee8 = 3;
  _data_180c95ee0 = 0;
  _data_180c95ed8 = 0;
  _data_180c95ed0 = 0;
  data_180c95ec8 = 1;
  data_180c96098 = 1;
  _data_180c960a0 = 0;
  data_180c960b8 = 1;
  return;
}
    data_180c82845 = '\x01';
    lVar4 = system_thread_manager_004(&puStack_48,_data_180c86870 + 0x2c0);
    puVar5 = &data_18098bc73;
    if (*(undefined **)(lVar4 + 8) != (undefined *)0x0) {
      puVar5 = *(undefined **)(lVar4 + 8);
    }
    (**(code **)(init_result + 0x330))(*(undefined4 *)(_data_180c8ece0 + 0x10),puVar5);
    puStack_48 = &unknown_180a3c3e0;
    if (lStack_40 != 0) {
      system_helper_001();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &unknown_18098bcb0;
  }
  plVar2 = (longlong *)*handle;
  if (plVar2 != (longlong *)0x0) {
    *(undefined1 *)((longlong)plVar2 + 0xdd) = 0;
    (**(code **)(*plVar2 + 0xc0))();
    plStackX_8 = (longlong *)*handle;
    *handle = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  *(float *)(_data_180c86870 + 0x200) = 1.0 / (float)(int)handle[1];
  puStack_68 = &unknown_180a3c3e0;
  if (puStack_60 != (undefined *)0x0) {
    system_helper_001();
  }
  return;
}
undefined8 * FUN_1804ca350(undefined8 *handle,int flags)
{
  longlong *pinit_result;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  *handle = &unknown_180a1a2f0;
  lVar4 = 0;
  handle[1] = 0;
  handle[2] = 0;
  handle[3] = 0;
  *(undefined4 *)(handle + 4) = 3;
  *handle = &unknown_180a2fc20;
  handle[0xd] = 0;
  handle[0xe] = 0;
  handle[0xf] = 0;
  handle[0x10] = 0;
  handle[0x11] = 0;
  handle[0x12] = 0;
  handle[0x13] = 0;
  handle[0x14] = 0;
  handle[0x15] = 0;
  handle[0x16] = 0;
  handle[0x17] = 0;
  handle[0x18] = 0;
  handle[0x19] = 0;
  handle[0x1a] = 0;
  handle[0x1b] = 0;
  handle[0x1c] = 0;
  handle[0x1d] = 0;
  handle[0x1e] = 0;
  handle[0x1f] = 0;
  handle[0x20] = 0;
  handle[0x21] = 0;
  handle[0x22] = 0;
  handle[0x23] = 0;
  handle[0x24] = 0;
  handle[0x25] = 0;
  handle[0x26] = 0;
  handle[0x27] = 0;
  handle[0x28] = 0;
  handle[0x29] = 0;
  handle[0x2a] = 0;
  handle[0x2b] = 0;
  handle[0x2c] = 0;
  handle[0x2d] = 0;
  handle[0x2e] = 0;
  handle[0x2f] = 0;
  pinit_result = handle + 0x31;
  *pinit_result = 0;
  handle[0x32] = 0;
  handle[0x33] = 0;
  *(undefined4 *)(handle + 0x34) = 3;
  puVar6 = handle + 0x35;
  lVar8 = 8;
  FUN_1808fc838(puVar6,0x28,8,&unknown_1804ce1a0,FUN_1804ce100);
  _Mtx_init_in_situ(handle + 0x5d,0x102);
  iVar2 = func_0x0001804ca2d0(&data_180c95fc8);
  if (flags < iVar2) {
    iVar2 = flags;
  }
  *(int *)(handle + 0x67) = iVar2;
  handle[0x11] = (longlong)iVar2;
  FUN_1804ce510(handle + 0xd);
  handle[0x16] = (longlong)*(int *)(handle + 0x67);
  if (handle[0x12] != 0) {
    system_helper_001();
  }
  handle[0x12] = 0;
  handle[0x14] = 1;
  handle[0x13] = 0;
  handle[0x15] = 0xffffffff;
  uVar3 = FUN_18062b420(_data_180c8ed18,(longlong)*(int *)(handle + 0x67) * 0x48,0x18);
  handle[0x12] = uVar3;
  handle[0x1b] = (longlong)*(int *)(handle + 0x67);
  if (handle[0x17] != 0) {
    system_helper_001();
  }
  handle[0x17] = 0;
  handle[0x19] = 1;
  handle[0x18] = 0;
  handle[0x1a] = 0xffffffff;
  uVar3 = FUN_18062b420(_data_180c8ed18,(longlong)*(int *)(handle + 0x67) * 0xc0,0x18);
  handle[0x17] = uVar3;
  handle[0x2a] = (longlong)*(int *)(handle + 0x67);
  if (handle[0x26] == 0) {
    handle[0x26] = 0;
    handle[0x28] = 1;
    handle[0x27] = 0;
    handle[0x29] = 0xffffffff;
    uVar3 = FUN_18062b420(_data_180c8ed18,(longlong)*(int *)(handle + 0x67) << 4,0x18);
    handle[0x26] = uVar3;
    handle[0x20] = (longlong)*(int *)(handle + 0x67);
    FUN_1804ce1c0(handle + 0x1c);
    handle[0x2f] = (longlong)*(int *)(handle + 0x67);
    if (handle[0x2b] != 0) {
      system_helper_001();
    }
    handle[0x2b] = 0;
    handle[0x2d] = 1;
    handle[0x2c] = 0;
    handle[0x2e] = 0xffffffff;
    uVar3 = FUN_18062b420(_data_180c8ed18,(longlong)*(int *)(handle + 0x67) << 4,0x18);
    handle[0x2b] = uVar3;
    do {
      puVar6[4] = (longlong)*(int *)(handle + 0x67);
      FUN_1804ce040(puVar6);
      puVar6 = puVar6 + 5;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    handle[0x25] = (longlong)*(int *)(handle + 0x67);
    if (handle[0x21] == 0) {
      handle[0x21] = 0;
      handle[0x23] = 1;
      handle[0x22] = 0;
      handle[0x24] = 0xffffffff;
      uVar3 = FUN_18062b420(_data_180c8ed18,(longlong)*(int *)(handle + 0x67) * 0x88,0x18);
      handle[0x21] = uVar3;
      uVar7 = (ulonglong)*(int *)(handle + 0x67);
      lVar8 = *pinit_result;
      if ((ulonglong)(handle[0x33] - lVar8 >> 3) < uVar7) {
        if (uVar7 != 0) {
          lVar4 = FUN_18062b420(_data_180c8ed18,uVar7 * 8,*(undefined1 *)(handle + 0x34));
          lVar8 = *pinit_result;
        }
        if (lVar8 != handle[0x32]) {
          memmove(lVar4,lVar8,handle[0x32] - lVar8);
        }
        if (lVar8 != 0) {
          system_helper_001();
        }
        *pinit_result = lVar4;
        handle[0x32] = lVar4;
        handle[0x33] = lVar4 + uVar7 * 8;
      }
      iVar5 = *(int *)(_data_180c86920 + 0xe00) + -1;
      iVar2 = 0;
      if ((-1 < iVar5) && (iVar2 = iVar5, 3 < iVar5)) {
        iVar2 = 3;
      }
      fVar15 = (float)iVar2 * 0.33333334;
      fVar14 = fVar15 * 10.05 + 4.9500003;
      fVar9 = fVar15 * 2.9999998 + 4.5;
      fVar12 = fVar14 + fVar9;
      fVar9 = fVar12 + fVar9;
      fVar13 = fVar15 * 13.5 + 4.5;
      fVar11 = fVar9 + fVar13;
      fVar13 = fVar13 + fVar11;
      fVar10 = fVar15 * 37.5 + 12.5 + fVar13;
      fVar15 = fVar15 * 45.0 + 15.0 + fVar10;
      *(float *)(handle + 0x68) = fVar14 * fVar14;
      *(float *)((longlong)handle + 0x344) = fVar12 * fVar12;
      *(float *)(handle + 0x69) = fVar9 * fVar9;
      *(float *)((longlong)handle + 0x34c) = fVar11 * fVar11;
      *(float *)(handle + 0x6a) = fVar13 * fVar13;
      *(float *)((longlong)handle + 0x354) = fVar10 * fVar10;
      *(float *)(handle + 0x6b) = fVar15 * fVar15;
      *(undefined4 *)((longlong)handle + 0x35c) = 0x7f7fffff;
      *(undefined4 *)((longlong)handle + 0x33c) = 0;
      *(undefined4 *)(handle + 0x30) = 0;
      return handle;
    }
    system_helper_001();
  }
  system_helper_001();
}
undefined8 FUN_1804ca920(undefined8 handle,ulonglong flags)
{
  FUN_1804ca960();
  if ((flags & 1) != 0) {
    free(handle,0x360);
  }
  return handle;
}
      data_180c91d14 = 1;
    }
    else {
      uVar7 = (ulonglong)data_180c91d14;
    }
    UNLOCK();
    if (bVar9) {
      applStackX_8[0] = aplStackX_18;
      aplStackX_18[0] = _data_180c91d18;
      if (_data_180c91d18 != (longlong *)0x0) {
        (**(code **)(*_data_180c91d18 + 0x28))();
      }
      uVar7 = FUN_18005e1d0(uVar3,aplStackX_18);
    }
  }
  return uVar7;
}
    data_180d49f6c = '\0';
    system_crypto_003(&data_180d49f68);
  }
  flags = *(undefined8 *)(*(longlong *)(*(longlong *)(handle + 0x8a8) + 0x260) + 0x208);
  puVar8 = (undefined4 *)FUN_18022a890(flags,0,flags);
  uStack_118 = *puVar8;
  uStack_114 = puVar8[1];
  uStack_110 = puVar8[2];
  uStack_10c = puVar8[3];
  fVar4 = *(float *)(flags + 0x400);
  fVar5 = *(float *)(flags + 0x404);
  fVar6 = *(float *)(flags + 0x408);
  uStack_fc = *(undefined4 *)(flags + 0x40c);
  fVar18 = 1e+08;
  fVar13 = 1e+08;
  fStack_180 = 1e+08;
  fStack_158 = 1e+08;
  fStack_154 = 1e+08;
  fStack_150 = 1e+08;
  uStack_14c = 0;
  fStack_148 = -1e+08;
  fStack_144 = -1e+08;
  fStack_140 = -1e+08;
  uStack_13c = 0;
  iVar7 = *(char *)(handle + 0x858) + -1;
  init_result1 = (longlong)iVar7;
  fVar14 = -1e+08;
  fVar15 = -1e+08;
  fVar16 = -1e+08;
  uVar17 = 0;
  uVar19 = 0;
  if (-1 < iVar7) {
    uStack_16c = 0x7f7fffff;
    uStack_15c = 0x7f7fffff;
    init_result2 = init_result1 * 0x30;
    fStack_108 = fVar4;
    fStack_104 = fVar5;
    fStack_100 = fVar6;
    do {
      init_result0 = *(longlong *)(handle + 0x850) + init_result2;
      cVar1 = *(char *)(init_result0 + 0x2c);
      puVar8 = (undefined4 *)FUN_18022a890(flags,cVar1,flags);
      uStack_e8 = *puVar8;
      uStack_e4 = puVar8[1];
      uStack_e0 = puVar8[2];
      uStack_dc = puVar8[3];
      pfVar9 = (float *)(flags + ((longlong)cVar1 + 0x40) * 0x10);
      fVar18 = *pfVar9;
      fVar13 = pfVar9[1];
      fVar14 = pfVar9[2];
      fStack_cc = pfVar9[3];
      fStack_d8 = fVar18;
      fStack_d4 = fVar13;
      fStack_d0 = fVar14;
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_e8,auStack_c8,init_result0);
      fStack_170 = (fVar14 + pfVar9[2]) - fVar6;
      fStack_174 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_178 = (fVar18 + *pfVar9) - fVar4;
      FUN_180285b40(&uStack_118,&fStack_138,&fStack_178);
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_e8,auStack_b8,init_result0 + 0x10);
      fStack_160 = (fVar14 + pfVar9[2]) - fVar6;
      fStack_164 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_168 = (fVar18 + *pfVar9) - fVar4;
      FUN_180285b40(&uStack_118,&fStack_128,&fStack_168);
      fVar14 = *(float *)(init_result0 + 0x24);
      fVar18 = fStack_128;
      fStack_198 = fStack_138;
      if (fStack_138 < fStack_128) {
        fVar18 = fStack_138;
        fStack_198 = fStack_128;
      }
      fVar13 = fStack_134;
      fStack_194 = fStack_124;
      if (fStack_134 < fStack_124) {
        fVar13 = fStack_124;
        fStack_194 = fStack_134;
      }
      fStack_190 = fStack_130;
      fStack_180 = fStack_120;
      if (fStack_130 < fStack_120) {
        fStack_190 = fStack_120;
        fStack_180 = fStack_130;
      }
      fStack_190 = fStack_190 + fVar14;
      fStack_194 = fStack_194 + fVar14;
      fStack_198 = fStack_198 + fVar14;
      fStack_180 = fStack_180 - fVar14;
      fVar13 = fVar13 - fVar14;
      fVar18 = fVar18 - fVar14;
      if (fStack_158 < fVar18) {
        fVar18 = fStack_158;
      }
      if (fStack_154 < fVar13) {
        fVar13 = fStack_154;
      }
      if (fStack_150 < fStack_180) {
        fStack_180 = fStack_150;
      }
      fStack_150 = fStack_180;
      uStack_14c = uStack_17c;
      if (fStack_198 < fStack_148) {
        fStack_198 = fStack_148;
      }
      if (fStack_194 < fStack_144) {
        fStack_194 = fStack_144;
      }
      if (fStack_190 < fStack_140) {
        fStack_190 = fStack_140;
      }
      fStack_148 = fStack_198;
      fStack_144 = fStack_194;
      fStack_140 = fStack_190;
      uStack_13c = uStack_18c;
      init_result2 = init_result2 + -0x30;
      init_result1 = init_result1 + -1;
      fVar14 = fStack_198;
      fVar15 = fStack_194;
      fVar16 = fStack_190;
      uVar17 = uStack_18c;
      uVar19 = uStack_17c;
      fStack_158 = fVar18;
      fStack_154 = fVar13;
    } while (-1 < init_result1);
  }
  *(undefined8 *)(handle + 0x870) = 0x4cbebc204cbebc20;
  *(undefined8 *)(handle + 0x878) = 0x7f7fffff4cbebc20;
  *(undefined8 *)(handle + 0x880) = 0xccbebc20ccbebc20;
  *(undefined8 *)(handle + 0x888) = 0x7f7fffffccbebc20;
  init_result1 = 0;
  *(undefined4 *)(handle + 0x8a0) = 0;
  *(undefined8 *)(handle + 0x890) = 0;
  *(undefined8 *)(handle + 0x898) = 0x7f7fffff00000000;
  fStack_198 = fVar18;
  if (*(float *)(handle + 0x870) < fVar18) {
    fStack_198 = *(float *)(handle + 0x870);
  }
  fStack_194 = fVar13;
  if (*(float *)(handle + 0x874) < fVar13) {
    fStack_194 = *(float *)(handle + 0x874);
  }
  fStack_190 = fStack_180;
  if (*(float *)(handle + 0x878) < fStack_180) {
    fStack_190 = *(float *)(handle + 0x878);
  }
  *(ulonglong *)(handle + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(handle + 0x878) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = fVar18;
  if (fVar18 < *(float *)(handle + 0x880)) {
    fStack_198 = *(float *)(handle + 0x880);
  }
  fStack_194 = fVar13;
  if (fVar13 < *(float *)(handle + 0x884)) {
    fStack_194 = *(float *)(handle + 0x884);
  }
  fStack_190 = fStack_180;
  if (fStack_180 < *(float *)(handle + 0x888)) {
    fStack_190 = *(float *)(handle + 0x888);
  }
  *(ulonglong *)(handle + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(handle + 0x888) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = fVar14;
  if (*(float *)(handle + 0x870) < fVar14) {
    fStack_198 = *(float *)(handle + 0x870);
  }
  fStack_194 = fVar15;
  if (*(float *)(handle + 0x874) < fVar15) {
    fStack_194 = *(float *)(handle + 0x874);
  }
  fStack_190 = fVar16;
  if (*(float *)(handle + 0x878) < fVar16) {
    fStack_190 = *(float *)(handle + 0x878);
  }
  *(ulonglong *)(handle + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(handle + 0x878) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = fVar14;
  if (fVar14 < *(float *)(handle + 0x880)) {
    fStack_198 = *(float *)(handle + 0x880);
  }
  fStack_194 = fVar15;
  if (fVar15 < *(float *)(handle + 0x884)) {
    fStack_194 = *(float *)(handle + 0x884);
  }
  fStack_190 = fVar16;
  if (fVar16 < *(float *)(handle + 0x888)) {
    fStack_190 = *(float *)(handle + 0x888);
  }
  *(ulonglong *)(handle + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(handle + 0x888) = CONCAT44(uStack_18c,fStack_190);
  if (*(longlong *)(handle + 0x8a8) != 0) {
    init_result1 = *(longlong *)(*(longlong *)(handle + 0x8a8) + 0x260);
  }
  *(float *)(init_result1 + 0x218) = fVar18;
  *(float *)(init_result1 + 0x21c) = fVar13;
  *(float *)(init_result1 + 0x220) = fStack_180;
  *(undefined4 *)(init_result1 + 0x224) = uVar19;
  *(float *)(init_result1 + 0x228) = fVar14;
  *(float *)(init_result1 + 0x22c) = fVar15;
  *(float *)(init_result1 + 0x230) = fVar16;
  *(undefined4 *)(init_result1 + 0x234) = uVar17;
  pfVar9 = *(float **)(handle + 0x860);
  if ((pfVar9 != (float *)0x0) && (*(longlong *)(handle + 0x868) != 0)) {
    if ((pfVar9[4] <= fVar14 && fVar14 != pfVar9[4]) ||
       ((pfVar9[5] <= fVar15 && fVar15 != pfVar9[5] || (pfVar9[6] <= fVar16 && fVar16 != pfVar9[6]))
       )) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar3 = *(float **)(handle + 0x860);
      fStack_198 = fVar14;
      if (*pfVar3 < fVar14) {
        fStack_198 = *pfVar3;
      }
      fStack_194 = fVar15;
      if (pfVar3[1] < fVar15) {
        fStack_194 = pfVar3[1];
      }
      fStack_190 = fVar16;
      if (pfVar3[2] < fVar16) {
        fStack_190 = pfVar3[2];
      }
      *(ulonglong *)pfVar3 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar14;
      if (fVar14 < pfVar3[4]) {
        fStack_198 = pfVar3[4];
      }
      fStack_194 = fVar15;
      if (fVar15 < pfVar3[5]) {
        fStack_194 = pfVar3[5];
      }
      fStack_190 = fVar16;
      if (fVar16 < pfVar3[6]) {
        fStack_190 = pfVar3[6];
      }
      *(ulonglong *)(pfVar3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 6) = CONCAT44(uStack_18c,fStack_190);
      data_180d49f6c = '\0';
    }
    if (((fVar18 < *pfVar9) || (fVar13 < pfVar9[1])) || (fStack_180 < pfVar9[2])) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar9 = *(float **)(handle + 0x860);
      fStack_198 = fVar18;
      if (*pfVar9 < fVar18) {
        fStack_198 = *pfVar9;
      }
      fStack_194 = fVar13;
      if (pfVar9[1] < fVar13) {
        fStack_194 = pfVar9[1];
      }
      fStack_190 = fStack_180;
      if (pfVar9[2] < fStack_180) {
        fStack_190 = pfVar9[2];
      }
      *(ulonglong *)pfVar9 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar18;
      if (fVar18 < pfVar9[4]) {
        fStack_198 = pfVar9[4];
      }
      fStack_194 = fVar13;
      if (fVar13 < pfVar9[5]) {
        fStack_194 = pfVar9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfVar9[6]) {
        fStack_190 = pfVar9[6];
      }
      *(ulonglong *)(pfVar9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 6) = CONCAT44(uStack_18c,fStack_190);
      data_180d49f6c = '\0';
    }
    pfVar9 = *(float **)(handle + 0x868);
    if (((pfVar9[4] <= fVar14 && fVar14 != pfVar9[4]) ||
        (pfVar9[5] <= fVar15 && fVar15 != pfVar9[5])) ||
       (pfVar9[6] <= fVar16 && fVar16 != pfVar9[6])) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar3 = *(float **)(handle + 0x868);
      fStack_198 = fVar14;
      if (*pfVar3 < fVar14) {
        fStack_198 = *pfVar3;
      }
      fStack_194 = fVar15;
      if (pfVar3[1] < fVar15) {
        fStack_194 = pfVar3[1];
      }
      fStack_190 = fVar16;
      if (pfVar3[2] < fVar16) {
        fStack_190 = pfVar3[2];
      }
      *(ulonglong *)pfVar3 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar14;
      if (fVar14 < pfVar3[4]) {
        fStack_198 = pfVar3[4];
      }
      fStack_194 = fVar15;
      if (fVar15 < pfVar3[5]) {
        fStack_194 = pfVar3[5];
      }
      fStack_190 = fVar16;
      if (fVar16 < pfVar3[6]) {
        fStack_190 = pfVar3[6];
      }
      *(ulonglong *)(pfVar3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 6) = CONCAT44(uStack_18c,fStack_190);
      data_180d49f6c = '\0';
    }
    if (((fVar18 < *pfVar9) || (fVar13 < pfVar9[1])) || (fStack_180 < pfVar9[2])) {
      do {
      } while (data_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar9 = *(float **)(handle + 0x868);
      fStack_198 = fVar18;
      if (*pfVar9 < fVar18) {
        fStack_198 = *pfVar9;
      }
      fStack_194 = fVar13;
      if (pfVar9[1] < fVar13) {
        fStack_194 = pfVar9[1];
      }
      fStack_190 = fStack_180;
      if (pfVar9[2] < fStack_180) {
        fStack_190 = pfVar9[2];
      }
      *(ulonglong *)pfVar9 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar18;
      if (fVar18 < pfVar9[4]) {
        fStack_198 = pfVar9[4];
      }
      fStack_194 = fVar13;
      if (fVar13 < pfVar9[5]) {
        fStack_194 = pfVar9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfVar9[6]) {
        fStack_190 = pfVar9[6];
      }
      *(ulonglong *)(pfVar9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 6) = CONCAT44(uStack_18c,fStack_190);
      data_180d49f6c = '\0';
    }
  }
  return;
}
        data_180d49f98 = 0;
        _data_180d49f90 = 8;
        strcpy_s(&data_180d49f98,0x40,&unknown_180a353b8);
        system_crypto_002(FUN_180943090);
        system_crypto_003(&data_180d49f70);
      }
    }
    (*UNRECOVERED_JUMPTABLE)(_data_180c8f008,&data_180d49f80);
    return;
  }
  if (-1 < handle) {
    if (handle < (int)((_data_180c96158 - _data_180c96150) / 0x68)) {
      (*UNRECOVERED_JUMPTABLE)(_data_180c8f008,(longlong)handle * 0x68 + _data_180c96150);
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _data_180d49fd8) {
    system_crypto_004(&data_180d49fd8);
    if (_data_180d49fd8 == -1) {
      _data_180d49fe0 = &unknown_data_003;
      _data_180d49fe8 = &data_180d49ff8;
      data_180d49ff8 = 0;
      _data_180d49ff0 = 0;
      strcpy_s(&data_180d49ff8,0x40,&data_18098bc73);
      system_crypto_002(FUN_1809430b0);
      system_crypto_003(&data_180d49fd8);
    }
  }
  (*UNRECOVERED_JUMPTABLE)(_data_180c8f008,&data_180d49fe0);
  return;
}
// 处理配置参数验证函数
int validate_config_parameters(undefined8 handle,undefined8 flags,undefined8 mutex_attr,undefined8 mutex_type)
{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puStack_30;
  longlong lStack_28;
  int iStack_20;
  system_thread_manager_002(&puStack_30,handle,mutex_attr,mutex_type,0xfffffffffffffffe);
  lVar3 = lStack_28;
  if (iStack_20 == 0x10) {
    iVar1 = strcmp(lStack_28,&unknown_180a389f0);
    if (iVar1 == 0) goto LAB_180609067;
    iVar1 = strcmp(lVar3,&unknown_180a38a08);
    if (iVar1 == 0) {
      iVar1 = 100;
      goto LAB_180609070;
    }
    puVar4 = &unknown_180a38c28;
LAB_18060905e:
    iVar1 = strcmp(lVar3,puVar4);
    if (iVar1 != 0) {
LAB_18060906e:
      iVar1 = 0;
      goto LAB_180609070;
    }
  }
  else {
    if (iStack_20 == 0x15) {
      iVar1 = strcmp(lStack_28,&unknown_180a389d8);
      if (iVar1 == 0) {
        iVar1 = 0x30;
        goto LAB_180609070;
      }
LAB_180608a24:
      iVar1 = strcmp(lVar3,&unknown_180a38aa8);
      if (iVar1 == 0) {
        iVar1 = 0xb0;
        goto LAB_180609070;
      }
LAB_180608a96:
      iVar1 = strcmp(lVar3,&unknown_180a38ac0);
      if (iVar1 == 0) {
        iVar1 = 0xd4;
        goto LAB_180609070;
      }
LAB_180608bee:
      puVar4 = &unknown_180a38ba0;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0x1b) {
      puVar4 = &unknown_180a38a20;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0xd) {
      iVar1 = strcmp(lStack_28,&unknown_180a38978);
      if (iVar1 == 0) {
        iVar1 = 4;
        goto LAB_180609070;
      }
LAB_180608e70:
      puVar4 = &unknown_180a38c98;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0x1a) {
      iVar1 = strcmp(lStack_28,&unknown_180a38958);
      if (iVar1 == 0) {
        iVar1 = 0x1c;
        goto LAB_180609070;
      }
LAB_180608dad:
      iVar1 = strcmp(lVar3,&unknown_180a38c08);
      if (iVar1 == 0) {
        iVar1 = 0x18;
        goto LAB_180609070;
      }
LAB_180608fee:
      iVar1 = strcmp(lVar3,&unknown_180a38ea0);
      if (iVar1 == 0) {
        iVar1 = 0x554;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 0x20) {
      iVar1 = strcmp(lStack_28,&unknown_180a389b0);
      if (iVar1 == 0) {
        iVar1 = 0x30;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 0x24) {
      iVar1 = strcmp(lStack_28,&unknown_180a38988);
      if (iVar1 == 0) {
        iVar1 = 0x12;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 0x15) goto LAB_180608a24;
    if (iStack_20 == 0x1f) {
      iVar1 = strcmp(lStack_28,&unknown_180a38a88);
      if (iVar1 == 0) {
        iVar1 = 0x48;
        goto LAB_180609070;
      }
LAB_180608e4c:
      iVar1 = strcmp(lVar3,&unknown_180a38d38);
      if (iVar1 == 0) {
        iVar1 = 1;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 10) {
      iVar1 = strcmp(lStack_28,&unknown_180a38ad8);
      if (iVar1 == 0) {
        iVar1 = 8;
        goto LAB_180609070;
      }
LAB_180608b18:
      iVar1 = strcmp(lVar3,&unknown_180a38a78);
      if (iVar1 == 0) {
        iVar1 = 4;
        goto LAB_180609070;
      }
LAB_180608fdd:
      puVar4 = &unknown_180a38ec0;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0x15) goto LAB_180608a96;
    if (iStack_20 == 0x16) {
      iVar1 = strcmp(lStack_28,&unknown_180a38a48);
      if (iVar1 == 0) {
        iVar1 = 0x14;
        goto LAB_180609070;
      }
LAB_180608c78:
      iVar1 = strcmp(lVar3,&unknown_180a38b48);
      if (iVar1 == 0) {
        iVar1 = 0x568;
        goto LAB_180609070;
      }
      iVar1 = strcmp(lVar3,&unknown_180a38c40);
      if (iVar1 == 0) {
        iVar1 = 0x10;
        goto LAB_180609070;
      }
      iVar1 = strcmp(lVar3,&unknown_180a38ca8);
      if (iVar1 == 0) {
        iVar1 = 0x28;
        goto LAB_180609070;
      }
      iVar1 = strcmp(lVar3,&unknown_180a38e38);
      if (iVar1 == 0) {
        iVar1 = 0x40;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 4) {
      lVar3 = 0;
      do {
        lVar2 = lVar3 + 1;
        if (*(char *)(lStack_28 + lVar3) != (&unknown_180a38a3c)[lVar3]) goto LAB_18060906e;
        lVar3 = lVar2;
      } while (lVar2 != 5);
      iVar1 = 200;
      goto LAB_180609070;
    }
    if (iStack_20 == 10) goto LAB_180608b18;
    if (iStack_20 == 0x12) {
      iVar1 = strcmp(lStack_28,&unknown_180a38a60);
      if (iVar1 == 0) {
        iVar1 = 0x58;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 != 0x13) {
      if (iStack_20 == 0x17) {
        iVar1 = strcmp(lStack_28,&unknown_180a38bb8);
        if (iVar1 == 0) {
          iVar1 = 1;
          goto LAB_180609070;
        }
LAB_180608fb7:
        puVar4 = &unknown_180a38e78;
LAB_180608fc1:
        iVar1 = strcmp(lVar3,puVar4);
        if (iVar1 == 0) {
LAB_180608fce:
          iVar1 = 0xc;
          goto LAB_180609070;
        }
      }
      else {
        if (iStack_20 == 0x15) goto LAB_180608bee;
        if (iStack_20 == 0x26) {
          iVar1 = strcmp(lStack_28,&unknown_180a38b20);
          if (iVar1 == 0) {
            iVar1 = 0xa8;
            goto LAB_180609070;
          }
        }
        else if (iStack_20 == 0x34) {
          iVar1 = strcmp(lStack_28,&unknown_180a38ae8);
          if (iVar1 == 0) {
            iVar1 = 0x14;
            goto LAB_180609070;
          }
        }
        else {
          if (iStack_20 != 0xf) {
            if (iStack_20 == 0x16) goto LAB_180608c78;
            if (iStack_20 == 0x18) {
              iVar1 = strcmp(lStack_28,&unknown_180a38c78);
              if ((iVar1 == 0) || (iVar1 = strcmp(lVar3,&unknown_180a38c58), iVar1 == 0))
              goto LAB_180608fce;
              iVar1 = strcmp(lVar3,&unknown_180a38be8);
              if (iVar1 != 0) {
                puVar4 = &unknown_180a38d98;
                goto LAB_18060905e;
              }
              goto LAB_180609067;
            }
            if (iStack_20 == 7) {
              lVar3 = 0;
              do {
                lVar2 = lVar3;
                if (*(char *)(lStack_28 + lVar2) != (&unknown_180a38be0)[lVar2]) goto LAB_18060906e;
                lVar3 = lVar2 + 1;
              } while (lVar2 + 1 != 8);
              iVar1 = (int)lVar2 + -6;
              goto LAB_180609070;
            }
            if (iStack_20 == 0xc) {
              iVar1 = strcmp(lStack_28,&unknown_180a38bd0);
              if (iVar1 == 0) {
                iVar1 = 0x68;
                goto LAB_180609070;
              }
LAB_18060901e:
              iVar1 = strcmp(lVar3,&unknown_180a38e50);
              if (iVar1 == 0) {
                iVar1 = 4;
                goto LAB_180609070;
              }
              iVar1 = strcmp(lVar3,&unknown_180a38f30);
              if (iVar1 == 0) {
                iVar1 = 8;
                goto LAB_180609070;
              }
              goto LAB_18060906e;
            }
            if (iStack_20 == 0x1a) goto LAB_180608dad;
            if (iStack_20 == 3) {
              iVar1 = 4;
              lVar3 = 0;
              do {
                lVar2 = lVar3 + 1;
                if (*(char *)(lStack_28 + lVar3) != (&unknown_180a29944)[lVar3]) goto LAB_18060906e;
                lVar3 = lVar2;
              } while (lVar2 != 4);
              goto LAB_180609070;
            }
            if (iStack_20 == 0xf) goto LAB_180608e02;
            if (iStack_20 == 0x23) {
              iVar1 = strcmp(lStack_28,&unknown_180a38d58);
              if (iVar1 == 0) {
                iVar1 = 0x28;
                goto LAB_180609070;
              }
LAB_180608e99:
              iVar1 = strcmp(lVar3,&unknown_180a38cc0);
              if (iVar1 == 0) {
                iVar1 = 0x18;
                goto LAB_180609070;
              }
              goto LAB_18060906e;
            }
            if (iStack_20 == 0x1f) goto LAB_180608e4c;
            if (iStack_20 == 0xd) goto LAB_180608e70;
            if (iStack_20 == 0x21) {
              puVar4 = &unknown_180a38ce8;
              goto LAB_180608fc1;
            }
            if (iStack_20 == 0x23) goto LAB_180608e99;
            if (iStack_20 == 0xf) goto LAB_180608ebd;
            if (iStack_20 == 0xb) {
              iVar1 = strcmp(lStack_28,&unknown_180a38dd8);
              if (iVar1 == 0) {
                iVar1 = 0x248;
                goto LAB_180609070;
              }
LAB_180608f53:
              iVar1 = strcmp(lVar3,&unknown_180a38dc8);
              if (iVar1 == 0) {
                iVar1 = 4;
                goto LAB_180609070;
              }
LAB_180608f97:
              iVar1 = strcmp(lVar3,&unknown_180a38e90);
              if (iVar1 == 0) {
                iVar1 = 4;
                goto LAB_180609070;
              }
            }
            else {
              if (iStack_20 == 0x11) {
                iVar1 = strcmp(lStack_28,&unknown_180a38e10);
                if (iVar1 == 0) goto LAB_180609067;
                iVar1 = strcmp(lVar3,&unknown_180a38df8);
                if (iVar1 == 0) {
                  iVar1 = 0xa0;
                  goto LAB_180609070;
                }
                puVar4 = &unknown_180a38d80;
                goto LAB_18060905e;
              }
              if (iStack_20 == 0xb) goto LAB_180608f53;
              if (iStack_20 == 0xf) goto LAB_180608f73;
              if (iStack_20 == 0xb) goto LAB_180608f97;
              if (iStack_20 == 0x17) goto LAB_180608fb7;
              if (iStack_20 == 10) goto LAB_180608fdd;
              if (iStack_20 == 0x1a) goto LAB_180608fee;
              if (iStack_20 != 0xb) {
                if (iStack_20 == 0xc) goto LAB_18060901e;
                if (iStack_20 != 0x19) goto LAB_18060906e;
                puVar4 = &unknown_180a38f10;
                goto LAB_18060905e;
              }
            }
            puVar4 = &unknown_180a38e28;
            goto LAB_18060905e;
          }
          iVar1 = strcmp(lStack_28,&unknown_180a38b60);
          if (iVar1 == 0) {
            iVar1 = 0x214;
            goto LAB_180609070;
          }
LAB_180608e02:
          iVar1 = strcmp(lVar3,&unknown_180a38d10);
          if (iVar1 == 0) {
            iVar1 = 0x2028;
            goto LAB_180609070;
          }
LAB_180608ebd:
          iVar1 = strcmp(lVar3,&unknown_180a38de8);
          if (iVar1 == 0) {
            iVar1 = 4;
            goto LAB_180609070;
          }
LAB_180608f73:
          iVar1 = strcmp(lVar3,&unknown_180a38db8);
          if (iVar1 == 0) {
            iVar1 = 0x50;
            goto LAB_180609070;
          }
        }
      }
      goto LAB_18060906e;
    }
    iVar1 = strcmp(lStack_28,&unknown_180a38b88);
    if (iVar1 == 0) {
      iVar1 = 1;
      goto LAB_180609070;
    }
    iVar1 = strcmp(lVar3,&unknown_180a38b70);
    if (iVar1 == 0) {
      iVar1 = 3;
      goto LAB_180609070;
    }
    iVar1 = strcmp(lVar3,&unknown_180a38d20);
    if (iVar1 != 0) {
      puVar4 = &unknown_180a38e60;
      goto LAB_18060905e;
    }
  }
LAB_180609067:
  iVar1 = 4;
LAB_180609070:
  puStack_30 = &unknown_180a3c3e0;
  if (lStack_28 == 0) {
    return iVar1;
  }
  system_helper_001();
}
undefined8
FUN_1806090b0(undefined8 handle,undefined8 flags,undefined1 mutex_attr,undefined8 mutex_type)
{
  char cVar1;
  undefined *pflags;
  undefined8 uVar3;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [40];
  system_thread_manager_002(auStack_30,handle,mutex_attr,mutex_type,0xfffffffffffffffe);
  system_thread_manager_002(auStack_50,flags);
  cVar1 = FUN_180629850(auStack_30,&unknown_180a389d8,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_180629850(auStack_30,&unknown_180a38a08,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_180629850(auStack_30,&unknown_180a38958,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_180629850(auStack_30,&unknown_180a389b0,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_180629850(auStack_30,&unknown_180a38988,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_180629850(auStack_30,&unknown_180a38aa8,1);
            if (cVar1 == '\0') {
              cVar1 = FUN_180629850(auStack_30,&unknown_180a38a88,1);
              if (cVar1 == '\0') {
                cVar1 = FUN_180629850(auStack_30,&unknown_180a38ac0,1);
                if (cVar1 == '\0') {
                  cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38a48);
                  if (cVar1 == '\0') {
                    cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38a3c);
                    if (cVar1 == '\0') {
                      cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38a60);
                      if (cVar1 == '\0') {
                        cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38b70);
                        if (cVar1 == '\0') {
                          cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38b20);
                          if (cVar1 == '\0') {
                            cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38ae8);
                            if (cVar1 == '\0') {
                              cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38b60);
                              if (cVar1 == '\0') {
                                cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38b48);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38c40);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38c78);
                                    if (cVar1 == '\0') {
                                      cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38c58);
                                      if (cVar1 == '\0') {
                                        cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38bd0);
                                        if (cVar1 == '\0') {
                                          cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38c08);
                                          if (cVar1 == '\0') {
                                            cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a29944);
                                            if (cVar1 == '\0') {
                                              cVar1 = func_0x0001800a1eb0(auStack_30,&unknown_180a38d10)
                                              ;
                                              if (cVar1 == '\0') {
                                                cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                            &unknown_180a38d58);
                                                if (cVar1 == '\0') {
                                                  cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                              &unknown_180a38ca8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                &unknown_180a38ce8);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &unknown_180a38cc0);
                                                      if (cVar1 != '\0') goto LAB_18060af51;
                                                      cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &unknown_180a38dd8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                    &unknown_180a38df8);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                      &unknown_180a38db8
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                        &
                                                  unknown_180a38e78);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                &unknown_180a38ea0);
                                                    if (cVar1 != '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ac00);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3acf8);
                                                        if (cVar1 != '\0') goto LAB_18060b9cb;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3acd8);
                                                        if (cVar1 != '\0') goto LAB_18060ad3e;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ad30);
                                                        if (cVar1 != '\0') goto LAB_18060acd8;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &data_180a06a48);
                                                        if (cVar1 != '\0') goto LAB_18060a114;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ad18);
                                                        if (cVar1 != '\0') goto LAB_18060a91e;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ac90);
                                                        if (cVar1 != '\0') goto LAB_18060ba49;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ac80);
                                                        if (cVar1 != '\0') goto LAB_18060ba67;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3acc8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x21c;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3aca8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x41c;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ade8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x41d;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3add0);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x420;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ae18);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x424;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ae00);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x428;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ad88);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x430;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a29da8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x438;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ad60);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x439;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3adb8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x43c;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3ada0);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x440;
                                                          goto LAB_18060bbae;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3abe0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a1029c);
                                                      if (cVar1 == '\0') {
                                                        pflags = &unknown_180a3ac10;
                                                        goto LAB_18060ad2d;
                                                      }
                                                      goto LAB_18060b9cb;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3ac48);
                                                    if (cVar1 == '\0') {
                                                      pflags = &unknown_180a3abe8;
                                                      goto LAB_18060a103;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a960);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab28);
                                                      if (cVar1 != '\0') goto LAB_18060b6a9;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a39f78);
                                                      if (cVar1 != '\0') goto LAB_18060b6c7;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab18);
                                                      if (cVar1 != '\0') goto LAB_18060b6e5;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a39fb0);
                                                      if (cVar1 != '\0') goto LAB_18060b703;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab50);
                                                      if (cVar1 != '\0') goto LAB_1806093cc;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab38);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 100;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aae8);
                                                      if (cVar1 != '\0') goto LAB_180609b20;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aad8);
                                                      if (cVar1 != '\0') {
LAB_18060b76f:
                                                        uVar3 = 0x6c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab08);
                                                      if (cVar1 != '\0') goto LAB_18060b78d;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aaf8);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x74;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3abb0);
                                                      if (cVar1 != '\0') goto LAB_18060b7c9;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aba0);
                                                      if (cVar1 != '\0') goto LAB_18060b7e7;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3abd0);
                                                      if (cVar1 != '\0') goto LAB_18060b805;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3abc0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x84;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab70);
                                                      if (cVar1 != '\0') goto LAB_18060b841;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab60);
                                                      if (cVar1 != '\0') goto LAB_18060b85f;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab90);
                                                      if (cVar1 != '\0') goto LAB_18060b87d;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ab80);
                                                      if (cVar1 != '\0') goto LAB_18060b89b;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ac30);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x96;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ac18);
                                                      if (cVar1 != '\0') goto LAB_18060b8d7;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3ac68);
                                                      if (cVar1 != '\0') goto LAB_18060b8f9;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a8b0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a850);
                                                      if (cVar1 != '\0') goto LAB_18060ad3e;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a830);
                                                      if (cVar1 != '\0') goto LAB_18060a114;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a870);
                                                      if (cVar1 != '\0') goto LAB_18060ba49;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a860);
                                                      if (cVar1 != '\0') goto LAB_18060b32d;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a04be8);
                                                      if (cVar1 != '\0') goto LAB_18060b34b;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a938);
                                                      if (cVar1 != '\0') goto LAB_18060b369;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a920);
                                                      if (cVar1 != '\0') goto LAB_18060b387;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a960);
                                                      if (cVar1 != '\0') goto LAB_18060b3a5;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a948);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0xf8;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a8f0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0xfc;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a8d8);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x100;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a910);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x110;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a900);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x114;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9d8);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x118;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9c8);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x11c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9f0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x11e;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9e0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x120;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a988);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x130;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a2a000);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x170;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a21a30);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x174;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a970);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x178;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a9b0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x188;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a998);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x198;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa98);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x19c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa70);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x1a0;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aac0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x220;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aab0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x230;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa20);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x234;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa08);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x238;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa50);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x23c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3aa38);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x240;
                                                        goto LAB_18060bbae;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a650);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a640);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 4;
                                                        goto LAB_18060bbae;
                                                      }
                                                      goto LAB_18060ad8c;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a800);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &unknown_180a3a7a8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3a798);
                                                        if (cVar1 != '\0') goto LAB_18060ad3e;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &unknown_180a3a7d0);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &unknown_180a3a7b8
                                                                                     );
                                                          if (cVar1 != '\0') goto LAB_18060a114;
                                                          cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &unknown_180a3a898
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                        &
                                                  unknown_180a3a880);
                                                  if (cVar1 != '\0') goto LAB_18060ba49;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a8c0);
                                                  if (cVar1 != '\0') goto LAB_18060b1d7;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &data_180a0ba58);
                                                  if (cVar1 != '\0') goto LAB_18060b1f5;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a5a8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a2e2bc);
                                                    if (cVar1 != '\0') goto LAB_18060b32d;
                                                    pflags = &unknown_180a2e9e0;
                                                    goto LAB_18060b0e8;
                                                  }
                                                  goto LAB_18060ba67;
                                                  }
                                                  goto LAB_18060a91e;
                                                  }
                                                  goto LAB_18060acd8;
                                                  }
                                                  goto LAB_18060b9cb;
                                                  }
                                                  }
                                                }
                                                else {
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a720);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a754);
                                                    if (cVar1 != '\0') goto LAB_18060b9cb;
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a748);
                                                    if (cVar1 != '\0') {
LAB_18060acd8:
                                                      uVar3 = 0xc;
                                                      goto LAB_18060bbae;
                                                    }
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a7f0);
                                                    if (cVar1 != '\0') {
LAB_18060a91e:
                                                      uVar3 = 0x14;
                                                      goto LAB_18060bbae;
                                                    }
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &unknown_180a3a7e0);
                                                    if (cVar1 != '\0') {
LAB_18060ba67:
                                                      uVar3 = 0x1c;
                                                      goto LAB_18060bbae;
                                                    }
                                                    pflags = &unknown_180a3a820;
LAB_18060b0e8:
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,pflags);
                                                    if (cVar1 != '\0') goto LAB_18060b0f9;
                                                  }
                                                }
                                              }
                                              else {
                                                cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                            &unknown_180a1a470);
                                                if (cVar1 == '\0') {
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a758);
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x2000;
                                                    goto LAB_18060bbae;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a788);
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x2010;
                                                    goto LAB_18060bbae;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a778);
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x2020;
                                                    goto LAB_18060bbae;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &unknown_180a3a738);
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x2024;
                                                    goto LAB_18060bbae;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
LAB_18060af51:
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a650);
                                            if (cVar1 == '\0') {
                                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a640)
                                              ;
                                              if (cVar1 == '\0') {
                                                pflags = &unknown_180a3a5c0;
                                                goto LAB_18060a103;
                                              }
                                              goto LAB_18060ad3e;
                                            }
                                          }
                                        }
                                        else {
                                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a6c0);
                                          if (cVar1 == '\0') {
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a708);
                                            if (cVar1 != '\0') goto LAB_18060a114;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a6f8);
                                            if (cVar1 != '\0') goto LAB_18060b32d;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ee0);
                                            if (cVar1 != '\0') {
LAB_18060b0f9:
                                              uVar3 = 0x24;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e48);
                                            if (cVar1 != '\0') goto LAB_1806091a3;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39dd0);
                                            if (cVar1 != '\0') {
LAB_18060ae39:
                                              uVar3 = 0x2c;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39df0);
                                            if (cVar1 != '\0') goto LAB_18060ae57;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39fb0);
                                            if (cVar1 != '\0') {
LAB_18060ae75:
                                              uVar3 = 0x34;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a670);
                                            if (cVar1 != '\0') goto LAB_18060ae93;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a660);
                                            if (cVar1 != '\0') {
LAB_18060aeb1:
                                              uVar3 = 0x3c;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a6a0);
                                            if (cVar1 != '\0') {
LAB_18060b6c7:
                                              uVar3 = 0x50;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a688);
                                            if (cVar1 != '\0') goto LAB_18060b6e5;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d58);
                                            if (cVar1 != '\0') {
LAB_18060b703:
                                              uVar3 = 0x5c;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f18);
                                            if (cVar1 != '\0') {
LAB_1806093cc:
                                              uVar3 = 0x60;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a768);
                                            if (cVar1 != '\0') {
                                              uVar3 = 0x61;
                                              goto LAB_18060bbae;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a650);
                                        if (cVar1 == '\0') {
                                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a640);
                                          if (cVar1 == '\0') {
LAB_18060ad8c:
                                            pflags = &unknown_180a3a5c0;
                                            goto LAB_18060ad2d;
                                          }
                                          goto LAB_18060b9cb;
                                        }
                                      }
                                    }
                                    else {
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a600);
                                      if (cVar1 == '\0') {
                                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a5e0);
                                        if (cVar1 != '\0') goto LAB_18060b9cb;
                                        pflags = &unknown_180a3a6e0;
LAB_18060ad2d:
                                        cVar1 = func_0x0001800a1eb0(auStack_50,pflags);
                                        if (cVar1 != '\0') goto LAB_18060ad3e;
                                      }
                                    }
                                  }
                                  else {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a650);
                                    if (cVar1 == '\0') {
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a640);
                                      if (cVar1 != '\0') goto LAB_18060b9cb;
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a5d0);
                                      if (cVar1 != '\0') goto LAB_18060ad3e;
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a5c0);
                                      if (cVar1 != '\0') goto LAB_18060acd8;
                                    }
                                  }
                                }
                                else {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2f8);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2e8);
                                    if (cVar1 != '\0') goto LAB_18060b9cb;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a310);
                                    if (cVar1 != '\0') goto LAB_18060ad3e;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a300);
                                    if (cVar1 != '\0') goto LAB_18060acd8;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a418);
                                    if (cVar1 != '\0') goto LAB_18060a114;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a408);
                                    if (cVar1 != '\0') goto LAB_18060a91e;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a440);
                                    if (cVar1 != '\0') goto LAB_18060ba49;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a428);
                                    if (cVar1 != '\0') goto LAB_18060ba67;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a3d0);
                                    if (cVar1 != '\0') goto LAB_18060b32d;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a3c0);
                                    if (cVar1 != '\0') goto LAB_18060b0f9;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a3f8);
                                    if (cVar1 != '\0') goto LAB_1806091a3;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a3e8);
                                    if (cVar1 != '\0') goto LAB_18060ae39;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4c0);
                                    if (cVar1 != '\0') goto LAB_18060ae57;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4a8);
                                    if (cVar1 != '\0') goto LAB_18060ae75;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4e0);
                                    if (cVar1 != '\0') goto LAB_18060ae93;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4d0);
                                    if (cVar1 != '\0') goto LAB_18060aeb1;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a468);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x53c;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a458);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x540;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a498);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x544;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a478);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x548;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a560);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x54c;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a540);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x550;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a5a8);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x554;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a580);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x558;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a508);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x55c;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a4f8);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x560;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a530);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x564;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a520);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x565;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a630);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x566;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a620);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x567;
                                      goto LAB_18060bbae;
                                    }
                                  }
                                }
                              }
                              else {
                                cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a2e1d8);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a2e1e8);
                                  if (cVar1 != '\0') goto LAB_18060b9cb;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a2e158);
                                  if (cVar1 != '\0') goto LAB_18060ad3e;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a2e150);
                                  if (cVar1 != '\0') goto LAB_18060acd8;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a0696c);
                                  if (cVar1 != '\0') goto LAB_18060a114;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a0ae28);
                                  if (cVar1 != '\0') goto LAB_18060a91e;
                                }
                              }
                            }
                            else {
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a260);
                              if (cVar1 == '\0') {
                                cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a348);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a320);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a398);
                                    if (cVar1 == '\0') {
                                      pflags = &unknown_180a3a370;
                                      goto LAB_18060a103;
                                    }
                                    goto LAB_18060acd8;
                                  }
                                  goto LAB_18060ad3e;
                                }
                                goto LAB_18060b9cb;
                              }
                            }
                          }
                          else {
                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a068);
                            if (cVar1 == '\0') {
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a058);
                              if (cVar1 != '\0') {
LAB_18060b9cb:
                                uVar3 = 4;
                                goto LAB_18060bbae;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39fe0);
                              if (cVar1 != '\0') goto LAB_18060ad3e;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39fc0);
                              if (cVar1 != '\0') goto LAB_18060acd8;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a018);
                              if (cVar1 != '\0') goto LAB_18060a114;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ff8);
                              if (cVar1 != '\0') goto LAB_18060a91e;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a118);
                              if (cVar1 != '\0') goto LAB_18060ba49;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a0f0);
                              if (cVar1 != '\0') goto LAB_18060ba67;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a158);
                              if (cVar1 != '\0') goto LAB_18060b32d;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a140);
                              if (cVar1 != '\0') goto LAB_1806091a3;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a098);
                              if (cVar1 != '\0') goto LAB_18060ae57;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a078);
                              if (cVar1 != '\0') goto LAB_18060ae93;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a0d0);
                              if (cVar1 != '\0') goto LAB_18060b6a9;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a0b8);
                              if (cVar1 != '\0') goto LAB_18060a66e;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a1e8);
                              if (cVar1 != '\0') goto LAB_18060a68c;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a1c8);
                              if (cVar1 != '\0') goto LAB_18060a6aa;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a220);
                              if (cVar1 != '\0') goto LAB_18060b6c7;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a208);
                              if (cVar1 != '\0') goto LAB_18060b6e5;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a188);
                              if (cVar1 != '\0') goto LAB_1806093cc;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a178);
                              if (cVar1 != '\0') goto LAB_180609b20;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a1b8);
                              if (cVar1 != '\0') {
LAB_18060b78d:
                                uVar3 = 0x70;
                                goto LAB_18060bbae;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a1a8);
                              if (cVar1 != '\0') goto LAB_18060b7c9;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2b0);
                              if (cVar1 != '\0') {
LAB_18060b805:
                                uVar3 = 0x80;
                                goto LAB_18060bbae;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a298);
                              if (cVar1 != '\0') goto LAB_18060b841;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2d8);
                              if (cVar1 != '\0') goto LAB_18060b85f;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a2c0);
                              if (cVar1 != '\0') goto LAB_18060b87d;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a250);
                              if (cVar1 != '\0') goto LAB_18060b8d7;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a240);
                              if (cVar1 != '\0') goto LAB_18060b34b;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a278);
                              if (cVar1 != '\0') goto LAB_18060a7ec;
                            }
                          }
                        }
                        else {
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f50);
                          if (cVar1 == '\0') {
                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a048);
                            if (cVar1 != '\0') goto LAB_18060a4de;
                            cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a3a038);
                            if (cVar1 != '\0') goto LAB_18060a500;
                          }
                        }
                      }
                      else {
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e78);
                        if (cVar1 == '\0') {
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39eb8);
                          if (cVar1 != '\0') goto LAB_18060a114;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ea8);
                          if (cVar1 != '\0') goto LAB_18060b32d;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f88);
                          if (cVar1 != '\0') goto LAB_18060ae57;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f78);
                          if (cVar1 != '\0') {
LAB_18060ae93:
                            uVar3 = 0x38;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39fb0);
                          if (cVar1 != '\0') {
LAB_18060b6a9:
                            uVar3 = 0x40;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f98);
                          if (cVar1 != '\0') {
LAB_18060a66e:
                            uVar3 = 0x44;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f28);
                          if (cVar1 != '\0') {
LAB_18060a68c:
                            uVar3 = 0x48;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a1029c);
                          if (cVar1 != '\0') {
LAB_18060a6aa:
                            uVar3 = 0x4c;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f18);
                          if (cVar1 != '\0') goto LAB_18060b6c7;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f60);
                          if (cVar1 != '\0') {
                            uVar3 = 0x51;
                            goto LAB_18060bbae;
                          }
                        }
                      }
                    }
                    else {
                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d98);
                      if (cVar1 == '\0') {
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39dc0);
                        if (cVar1 != '\0') {
LAB_18060b6e5:
                          uVar3 = 0x58;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a35198);
                        if (cVar1 != '\0') {
LAB_180609b20:
                          uVar3 = 0x68;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39db0);
                        if (cVar1 != '\0') {
LAB_18060b7c9:
                          uVar3 = 0x78;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d58);
                        if (cVar1 != '\0') {
LAB_18060b841:
                          uVar3 = 0x88;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d40);
                        if (cVar1 != '\0') {
LAB_18060b85f:
                          uVar3 = 0x8c;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d88);
                        if (cVar1 != '\0') {
LAB_18060b87d:
                          uVar3 = 0x90;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d70);
                        if (cVar1 != '\0') {
LAB_18060b89b:
                          uVar3 = 0x94;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e30);
                        if (cVar1 != '\0') {
LAB_18060b8d7:
                          uVar3 = 0x98;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e18);
                        if (cVar1 != '\0') {
LAB_18060b8f9:
                          uVar3 = 0x9c;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e58);
                        if (cVar1 != '\0') {
LAB_18060b34b:
                          uVar3 = 0xa0;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a34948);
                        if (cVar1 != '\0') {
LAB_18060a7ec:
                          uVar3 = 0xa4;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e48);
                        if (cVar1 != '\0') {
LAB_18060b369:
                          uVar3 = 0xa8;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39de0);
                        if (cVar1 != '\0') {
LAB_18060a282:
                          uVar3 = 0xac;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39dd0);
                        if (cVar1 != '\0') {
LAB_18060b387:
                          uVar3 = 0xb0;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e08);
                        if (cVar1 != '\0') {
                          uVar3 = 0xb4;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39df0);
                        if (cVar1 != '\0') {
                          uVar3 = 0xb5;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ee0);
                        if (cVar1 != '\0') {
LAB_18060b3a5:
                          uVar3 = 0xb8;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ed0);
                        if (cVar1 != '\0') {
LAB_18060a30c:
                          uVar3 = 0xbc;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39f00);
                        if (cVar1 != '\0') {
                          uVar3 = 0xbd;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ef0);
                        if (cVar1 != '\0') {
                          uVar3 = 0xbe;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39e90);
                        if (cVar1 != '\0') {
LAB_18060a36a:
                          uVar3 = 0xc0;
                          goto LAB_18060bbae;
                        }
                      }
                    }
                  }
                  else {
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cd0);
                    if (cVar1 == '\0') {
                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ccc);
                      if (cVar1 != '\0') goto LAB_18060b9cb;
                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cd8);
                      if (cVar1 != '\0') goto LAB_18060ad3e;
                      cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cd4);
                      if (cVar1 != '\0') goto LAB_18060acd8;
                      pflags = &unknown_180a39da8;
LAB_18060a103:
                      cVar1 = func_0x0001800a1eb0(auStack_50,pflags);
                      if (cVar1 != '\0') goto LAB_18060a114;
                    }
                  }
                }
                else {
                  cVar1 = FUN_180629850(auStack_50,&unknown_180a39920,1);
                  if (cVar1 == '\0') {
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39988);
                    if (cVar1 != '\0') {
LAB_18060a4de:
                      uVar3 = 1;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39970);
                    if (cVar1 != '\0') {
LAB_18060a500:
                      uVar3 = 2;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a398d8);
                    if (cVar1 != '\0') {
                      uVar3 = 3;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a398b8);
                    if (cVar1 != '\0') goto LAB_18060b9cb;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39910);
                    if (cVar1 != '\0') {
                      uVar3 = 5;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a398f0);
                    if (cVar1 != '\0') {
                      uVar3 = 6;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a28);
                    if (cVar1 != '\0') goto LAB_180609cf8;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a18);
                    if (cVar1 != '\0') goto LAB_18060ad3e;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a60);
                    if (cVar1 != '\0') goto LAB_180609d2e;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a40);
                    if (cVar1 != '\0') goto LAB_180609d4c;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a399c0);
                    if (cVar1 != '\0') goto LAB_180609d6a;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a399a8);
                    if (cVar1 != '\0') goto LAB_18060acd8;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a399f0);
                    if (cVar1 != '\0') goto LAB_18060a114;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a399e0);
                    if (cVar1 != '\0') goto LAB_18060a91e;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39af0);
                    if (cVar1 != '\0') goto LAB_18060ba49;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ad8);
                    if (cVar1 != '\0') goto LAB_18060ba67;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b18);
                    if (cVar1 != '\0') {
                      uVar3 = 0x1d;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b00);
                    if (cVar1 != '\0') {
                      uVar3 = 0x1e;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a88);
                    if (cVar1 != '\0') goto LAB_18060b32d;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39a70);
                    if (cVar1 != '\0') goto LAB_18060b0f9;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ab8);
                    if (cVar1 != '\0') goto LAB_1806091a3;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39aa0);
                    if (cVar1 != '\0') goto LAB_18060ae39;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ba0);
                    if (cVar1 != '\0') goto LAB_18060ae57;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b88);
                    if (cVar1 != '\0') goto LAB_18060ae75;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39bd8);
                    if (cVar1 != '\0') goto LAB_18060ae93;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39bc0);
                    if (cVar1 != '\0') goto LAB_18060aeb1;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b48);
                    if (cVar1 != '\0') goto LAB_18060b6a9;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b30);
                    if (cVar1 != '\0') goto LAB_18060a66e;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b78);
                    if (cVar1 != '\0') goto LAB_18060a68c;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39b68);
                    if (cVar1 != '\0') goto LAB_18060a6aa;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c80);
                    if (cVar1 != '\0') goto LAB_18060b703;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c60);
                    if (cVar1 != '\0') goto LAB_18060b76f;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cb8);
                    if (cVar1 != '\0') {
LAB_18060b7e7:
                      uVar3 = 0x7c;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c98);
                    if (cVar1 != '\0') goto LAB_18060b85f;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c10);
                    if (cVar1 != '\0') goto LAB_18060b8f9;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39bf0);
                    if (cVar1 != '\0') goto LAB_18060a282;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c50);
                    if (cVar1 != '\0') goto LAB_18060a30c;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39c30);
                    if (cVar1 != '\0') goto LAB_18060a36a;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39cf8);
                    if (cVar1 != '\0') {
                      uVar3 = 0xc4;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39ce0);
                    if (cVar1 != '\0') {
                      uVar3 = 200;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d28);
                    if (cVar1 != '\0') {
                      uVar3 = 0xcc;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&unknown_180a39d10);
                    if (cVar1 != '\0') {
                      uVar3 = 0xd0;
                      goto LAB_18060bbae;
                    }
                  }
                }
              }
              else {
                cVar1 = FUN_180629850(auStack_50,&unknown_180a39888,1);
                if (cVar1 == '\0') {
                  cVar1 = FUN_180629850(auStack_50,&unknown_180a397f8,1);
                  if (cVar1 != '\0') {
LAB_18060a114:
                    uVar3 = 0x10;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&unknown_180a397e8,1);
                  if (cVar1 != '\0') {
LAB_18060b32d:
                    uVar3 = 0x20;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&unknown_180a39850,1);
                  if (cVar1 != '\0') goto LAB_1806091a3;
                  cVar1 = FUN_180629850(auStack_50,&unknown_180a39820,1);
                  if (cVar1 != '\0') {
LAB_18060ae57:
                    uVar3 = 0x30;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&unknown_180a39940,1);
                  if (cVar1 != '\0') {
                    uVar3 = 0x31;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&unknown_180a19c8c,1);
                  if (cVar1 != '\0') {
                    uVar3 = 0x32;
                    goto LAB_18060bbae;
                  }
                }
              }
            }
            else {
              cVar1 = FUN_180629850(auStack_50,&unknown_180a397d8,1);
              if (cVar1 == '\0') {
                cVar1 = FUN_180629850(auStack_50,&unknown_180a397c8,1);
                if (cVar1 != '\0') goto LAB_18060b9cb;
                cVar1 = FUN_180629850(auStack_50,&unknown_180a39740,1);
                if (cVar1 != '\0') goto LAB_18060ad3e;
                cVar1 = FUN_180629850(auStack_50,&unknown_180a39728,1);
                if (cVar1 != '\0') goto LAB_18060acd8;
                cVar1 = FUN_180629850(auStack_50,&unknown_180a39768,1);
                if (cVar1 != '\0') goto LAB_18060a114;
                cVar1 = FUN_180629850(auStack_50,&unknown_180a39758,1);
                if (cVar1 != '\0') goto LAB_18060a91e;
                cVar1 = FUN_180629850(auStack_50,&unknown_180a39870,1);
                if (cVar1 != '\0') goto LAB_18060ba49;
                cVar1 = FUN_180629850(auStack_50,&unknown_180a19c8c,1);
                if (cVar1 != '\0') {
LAB_18060b1d7:
                  uVar3 = 0x19;
                  goto LAB_18060bbae;
                }
                cVar1 = FUN_180629850(auStack_50,&unknown_180a39864,1);
                if (cVar1 != '\0') {
                  uVar3 = 0x35;
                  goto LAB_18060bbae;
                }
                cVar1 = FUN_180629850(auStack_50,&unknown_180a398a8,1);
                if (cVar1 != '\0') goto LAB_180609b20;
              }
            }
          }
          else {
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39568,1);
            if (cVar1 == '\0') {
              cVar1 = FUN_180629850(auStack_50,&unknown_180a39538,1);
              if (cVar1 != '\0') {
LAB_180609cf8:
                uVar3 = 7;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&unknown_180a396c8,1);
              if (cVar1 != '\0') goto LAB_18060ad3e;
              cVar1 = FUN_180629850(auStack_50,&unknown_180a396b0,1);
              if (cVar1 != '\0') goto LAB_180609d2e;
              cVar1 = FUN_180629850(auStack_50,&unknown_180a39710,1);
              if (cVar1 != '\0') {
LAB_180609d4c:
                uVar3 = 10;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&unknown_180a396f0,1);
              if (cVar1 != '\0') goto LAB_180609d6a;
              cVar1 = FUN_180629850(auStack_50,&unknown_180a39640,1);
              if (cVar1 != '\0') goto LAB_18060acd8;
              cVar1 = FUN_180629850(auStack_50,&unknown_180a39628,1);
              if (cVar1 != '\0') {
                uVar3 = 0xd;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&unknown_180a39688,1);
              if (cVar1 != '\0') {
                uVar3 = 0xe;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&unknown_180a39660,1);
              if (cVar1 != '\0') {
                uVar3 = 0xf;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&unknown_180a397a8,1);
              if (cVar1 != '\0') goto LAB_18060a114;
              cVar1 = FUN_180629850(auStack_50,&unknown_180a39788,1);
              if (cVar1 != '\0') goto LAB_1806099ea;
            }
          }
        }
        else {
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39270,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_180629850(auStack_50,&unknown_180a393a8,1);
            if (cVar1 != '\0') goto LAB_18060ad3e;
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39390,1);
            if (cVar1 != '\0') {
LAB_180609d2e:
              uVar3 = 9;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a393f0,1);
            if (cVar1 != '\0') goto LAB_18060a114;
            cVar1 = FUN_180629850(auStack_50,&unknown_180a393d0,1);
            if (cVar1 != '\0') goto LAB_1806099ea;
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39348,1);
            if (cVar1 != '\0') {
LAB_18060965b:
              uVar3 = 0x17;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39328,1);
            if (cVar1 != '\0') goto LAB_18060ba49;
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39378,1);
            if (cVar1 != '\0') goto LAB_18060b32d;
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39360,1);
            if (cVar1 != '\0') {
              uVar3 = 0x21;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a394a0,1);
            if (cVar1 != '\0') {
              uVar3 = 0x22;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39480,1);
            if (cVar1 != '\0') {
              uVar3 = 0x23;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a394e0,1);
            if (cVar1 != '\0') goto LAB_18060b0f9;
            cVar1 = FUN_180629850(auStack_50,&unknown_180a394b8,1);
            if (cVar1 != '\0') {
              uVar3 = 0x25;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39428,1);
            if (cVar1 != '\0') {
              uVar3 = 0x26;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39408,1);
            if (cVar1 != '\0') {
              uVar3 = 0x27;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39468,1);
            if (cVar1 != '\0') goto LAB_1806091a3;
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39450,1);
            if (cVar1 != '\0') {
              uVar3 = 0x29;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a395c0,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2a;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39598,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2b;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39600,1);
            if (cVar1 != '\0') goto LAB_18060ae39;
            cVar1 = FUN_180629850(auStack_50,&unknown_180a395e0,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2d;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39518,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2e;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&unknown_180a39500,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2f;
              goto LAB_18060bbae;
            }
          }
        }
      }
      else {
        cVar1 = FUN_180629850(auStack_50,&unknown_180a391b8,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39188,1);
          if (cVar1 != '\0') {
LAB_180609d6a:
            uVar3 = 0xb;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39210,1);
          if (cVar1 != '\0') goto LAB_18060acd8;
          cVar1 = FUN_180629850(auStack_50,&unknown_180a391e8,1);
          if (cVar1 != '\0') goto LAB_18060a114;
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39128,1);
          if (cVar1 != '\0') {
LAB_1806099ea:
            uVar3 = 0x11;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39110,1);
          if (cVar1 != '\0') {
            uVar3 = 0x12;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39170,1);
          if (cVar1 != '\0') {
            uVar3 = 0x13;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39148,1);
          if (cVar1 != '\0') goto LAB_18060a91e;
          cVar1 = FUN_180629850(auStack_50,&unknown_180a392d0,1);
          if (cVar1 != '\0') {
            uVar3 = 0x15;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&unknown_180a392b8,1);
          if (cVar1 != '\0') {
            uVar3 = 0x16;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39308,1);
          if (cVar1 != '\0') goto LAB_18060965b;
          cVar1 = FUN_180629850(auStack_50,&unknown_180a392e8,1);
          if (cVar1 != '\0') goto LAB_18060ba49;
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39250,1);
          if (cVar1 != '\0') goto LAB_18060b1d7;
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39230,1);
          if (cVar1 != '\0') {
LAB_18060b1f5:
            uVar3 = 0x1a;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&unknown_180a39298,1);
          if (cVar1 != '\0') {
            uVar3 = 0x1b;
            goto LAB_18060bbae;
          }
        }
      }
    }
    else {
      cVar1 = FUN_180629850(auStack_50,&unknown_180a38ef0,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_180629850(auStack_50,&unknown_180a38fd8,1);
        if (cVar1 != '\0') goto LAB_18060b9cb;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a1029c,1);
        if (cVar1 != '\0') goto LAB_18060ad3e;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a38fc0,1);
        if (cVar1 != '\0') goto LAB_18060acd8;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a39008,1);
        if (cVar1 != '\0') goto LAB_18060a114;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a38ff0,1);
        if (cVar1 != '\0') goto LAB_18060a91e;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a38f78,1);
        if (cVar1 != '\0') goto LAB_18060ba49;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a38f60,1);
        if (cVar1 != '\0') goto LAB_18060ba67;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a38fa8,1);
        if (cVar1 != '\0') goto LAB_18060b32d;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a38f90,1);
        if (cVar1 != '\0') goto LAB_18060b0f9;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a390b8,1);
        if (cVar1 != '\0') goto LAB_1806091a3;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a39090,1);
        if (cVar1 != '\0') goto LAB_18060ae93;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a390f0,1);
        if (cVar1 != '\0') goto LAB_18060a68c;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a390d0,1);
        if (cVar1 != '\0') goto LAB_18060a6aa;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a39030,1);
        if (cVar1 != '\0') goto LAB_18060b6c7;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a34c20,1);
        if (cVar1 != '\0') {
          uVar3 = 0x54;
          goto LAB_18060bbae;
        }
        cVar1 = FUN_180629850(auStack_50,&unknown_180a39020,1);
        if (cVar1 != '\0') goto LAB_18060b6e5;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a39078,1);
        if (cVar1 != '\0') goto LAB_18060b703;
        cVar1 = FUN_180629850(auStack_50,&unknown_180a39058,1);
        if (cVar1 != '\0') goto LAB_1806093cc;
      }
    }
  }
  else {
    cVar1 = FUN_180629850(auStack_50,&unknown_180a0ee38,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_180629850(auStack_50,&unknown_180a38f50,1);
      if (cVar1 != '\0') {
LAB_18060ad3e:
        uVar3 = 8;
        goto LAB_18060bbae;
      }
      cVar1 = FUN_180629850(auStack_50,&unknown_180a38f40,1);
      if (cVar1 != '\0') goto LAB_18060a114;
      cVar1 = FUN_180629850(auStack_50,&unknown_180a38ee0,1);
      if (cVar1 != '\0') {
LAB_18060ba49:
        uVar3 = 0x18;
        goto LAB_18060bbae;
      }
      cVar1 = FUN_180629850(auStack_50,&unknown_180a38ed0,1);
      if (cVar1 != '\0') goto LAB_18060b32d;
      cVar1 = FUN_180629850(auStack_50,&unknown_180a38f00,1);
      if (cVar1 != '\0') {
LAB_1806091a3:
        uVar3 = 0x28;
        goto LAB_18060bbae;
      }
    }
  }
  uVar3 = 0;
LAB_18060bbae:
  FUN_180627b90(auStack_50);
  FUN_180627b90(auStack_30);
  return uVar3;
}
  data_180bf66d8 = 0;
  system_crypto_002(FUN_18064fe90);
  FUN_180650050(&unknown_18064ffc0);
  lVar4 = 0;
  _data_180c96858 = FUN_1806500b0;
  pflags = (undefined4 *)&data_180bfbd80;
  lVar3 = 0x16;
  do {
    if (pflags[1] == 0) {
      FUN_180650490(pflags);
    }
    if (lVar4 != 2) {
      FUN_1806502e0(&unknown_180a3db60,*(undefined8 *)(pflags + 4),*pflags);
    }
    lVar4 = lVar4 + 1;
    pflags = pflags + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (_data_180bfbf64 == 0) {
    FUN_180650490(&data_180bfbf60);
  }
  _data_180bf7308 = (longlong)_data_180bfbf60;
  if (_data_180bfbf7c == 0) {
    FUN_180650490(&data_180bfbf78);
  }
  _data_180bf72a8 = (longlong)_data_180bfbf78;
  FUN_18064fcc0();
  if (data_180c8efc8 != '\0') {
    FUN_1806502e0(&unknown_180a3d970);
  }
  return;
}
double FUN_180629810(void)
{
  longlong init_result;
  longlong alStackX_8 [4];
  init_result = _data_180c8ed58;
  if (_data_180c8ed58 == 0) {
    QueryPerformanceCounter(alStackX_8);
    init_result = alStackX_8[0];
  }
  return (double)(init_result - _data_180c8ed48) * _data_180c8ed50;
}
bool FUN_180629850(longlong handle,longlong flags,char mutex_attr)
{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(flags + lVar4) != '\0');
  iVar3 = *(int *)(handle + 0x10);
  if (iVar3 == (int)lVar4) {
    if (iVar3 != 0) {
      pcVar5 = *(char **)(handle + 8);
      if (mutex_attr == '\0') {
        iVar3 = _stricmp(pcVar5,flags);
        return iVar3 == 0;
      }
      flags = flags - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[flags];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      return cVar1 == cVar2;
    }
  }
  else if (iVar3 != 0) {
    return false;
  }
  if ((int)lVar4 != 0) {
    return false;
  }
  return true;
}
// 查找字符串在句柄中的位置
int find_string_position(longlong handle)
{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined *puStack_30;
  longlong lStack_28;
  int iStack_20;
  system_thread_manager_002(&puStack_30);
  iVar1 = (*(int *)(handle + 0x10) - iStack_20) + 1;
  iVar3 = 0;
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      lVar2 = 0;
      if (0 < iStack_20) {
        do {
          if (*(char *)(*(longlong *)(handle + 8) + lVar5 + lVar2) != *(char *)(uVar4 + lStack_28))
          break;
          uVar4 = (ulonglong)((int)uVar4 + 1);
          lVar2 = lVar2 + 1;
        } while (lVar2 < iStack_20);
      }
      if ((int)uVar4 == iStack_20) goto LAB_18062995a;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  iVar3 = -1;
LAB_18062995a:
  puStack_30 = &unknown_180a3c3e0;
  if (lStack_28 != 0) {
    system_helper_001();
  }
  return iVar3;
}
// 处理句柄和标志位
int process_handle_with_flags(longlong handle,longlong flags)
{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  iVar1 = *(int *)(flags + 0x10);
  iVar3 = *(int *)(handle + 0x10) - iVar1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3;
    do {
      uVar5 = 0;
      lVar2 = 0;
      if (0 < iVar1) {
        do {
          if (*(char *)(*(longlong *)(handle + 8) + lVar4 + lVar2) !=
              *(char *)(uVar5 + *(longlong *)(flags + 8))) break;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          lVar2 = lVar2 + 1;
        } while (lVar2 < iVar1);
      }
      if ((int)uVar5 == iVar1) {
        return iVar3;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return -1;
}
undefined8 * system_thread_manager_010(longlong handle,undefined8 *flags,int mutex_attr,int mutex_type)
{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uVar4 = (ulonglong)mutex_attr;
  iVar3 = mutex_type;
  if (mutex_type < 0) {
    iVar3 = *(int *)(handle + 0x10);
  }
  *flags = &unknown_18098bcb0;
  flags[1] = 0;
  *(undefined4 *)(flags + 2) = 0;
  *flags = &unknown_180a3c3e0;
  flags[3] = 0;
  flags[1] = 0;
  *(undefined4 *)(flags + 2) = 0;
  iVar2 = *(int *)(handle + 0x10) - mutex_attr;
  if (iVar3 - mutex_attr < iVar2) {
    iVar2 = iVar3 - mutex_attr;
  }
  system_thread_manager_001(flags,iVar2 + 1,mutex_attr,mutex_type,1,0xfffffffffffffffe);
  for (uVar5 = uVar4;
      ((longlong)uVar4 < (longlong)iVar3 && ((uint)uVar5 < *(uint *)(handle + 0x10)));
      uVar5 = (ulonglong)((uint)uVar5 + 1)) {
    uVar1 = *(undefined1 *)(uVar4 + *(longlong *)(handle + 8));
    system_thread_manager_001(flags,*(int *)(flags + 2) + 1);
    *(undefined1 *)((ulonglong)*(uint *)(flags + 2) + flags[1]) = uVar1;
    *(undefined1 *)((ulonglong)(*(int *)(flags + 2) + 1) + flags[1]) = 0;
    *(int *)(flags + 2) = *(int *)(flags + 2) + 1;
    uVar4 = uVar4 + 1;
  }
  return flags;
}
  data_180c95fea = 1;
  puStack_68 = &unknown_180a3c3e0;
  uStack_50 = 0;
  puStack_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  puVar5 = (undefined8 *)
           FUN_18062b420(_data_180c8ed18,0x10,CONCAT71((int7)((ulonglong)pcVar1 >> 8),0x13));
  *(undefined1 *)puVar5 = 0;
  puStack_60 = puVar5;
  uVar3 = system_helper_002(puVar5);
  *puVar5 = 0x7265206573726150;
  *(undefined4 *)(puVar5 + 1) = 0x3a726f72;
  *(undefined2 *)((longlong)puVar5 + 0xc) = 0x2720;
  *(undefined1 *)((longlong)puVar5 + 0xe) = 0;
  uStack_58 = 0xe;
  init_result0 = -1;
  uStack_50._0_4_ = uVar3;
  if (handle != 0) {
    do {
      lVar9 = init_result0;
      init_result0 = lVar9 + 1;
    } while (*(char *)(init_result0 + handle) != '\0');
    if (0 < (int)init_result0) {
      iVar8 = (int)lVar9;
      if ((iVar8 != -0xf) && (uVar3 < iVar8 + 0x10U)) {
        uStack_78 = 0x13;
        puVar5 = (undefined8 *)FUN_18062b8b0(_data_180c8ed18,puVar5,iVar8 + 0x10U,0x10);
        puStack_60 = puVar5;
        uStack_50._0_4_ = system_helper_002(puVar5);
      }
      memcpy((undefined1 *)((longlong)puVar5 + 0xe),handle,(longlong)(iVar8 + 2));
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_18062b420(_data_180c8ed18,0x19,0x13);
    *(undefined1 *)puVar5 = 0;
LAB_18062e327:
    puStack_60 = puVar5;
    uVar3 = system_helper_002(puVar5);
  }
  else if (uVar3 < 0x19) {
    uStack_78 = 0x13;
    puVar5 = (undefined8 *)FUN_18062b8b0(_data_180c8ed18,puVar5,0x19,0x10);
    goto LAB_18062e327;
  }
  *(undefined8 *)((longlong)puVar5 + 0xe) = 0x6e696c2074612027;
  *(undefined2 *)((longlong)puVar5 + 0x16) = 0x2065;
  *(undefined1 *)(puVar5 + 3) = 0;
  uStack_58 = 0x18;
  uStack_50._0_4_ = uVar3;
  FUN_180060680(acStack_40,&unknown_1809fd0a0,iVar8);
  init_result0 = -1;
  do {
    lVar9 = init_result0;
    init_result0 = lVar9 + 1;
  } while (acStack_40[lVar9 + 1] != '\0');
  iVar8 = (int)(lVar9 + 1);
  if (iVar8 < 1) {
    if (data_180c8eced != '\0') {
      _Exit(5);
    }
    puStack_68 = &unknown_180a3c3e0;
    if (puVar5 != (undefined8 *)0x0) {
      system_helper_001(puVar5);
    }
    puStack_60 = (undefined8 *)0x0;
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    puStack_68 = &unknown_18098bcb0;
    system_crypto_001(uStack_30 ^ (ulonglong)auStack_98);
  }
  if (iVar8 != -0x18) {
    uVar4 = iVar8 + 0x19;
    if (puVar5 == (undefined8 *)0x0) {
      if ((int)uVar4 < 0x10) {
        uVar4 = 0x10;
      }
      puVar5 = (undefined8 *)FUN_18062b420(_data_180c8ed18,(longlong)(int)uVar4,0x13);
      *(undefined1 *)puVar5 = 0;
    }
    else {
      if (uVar4 <= uVar3) goto LAB_18062e3f0;
      uStack_78 = 0x13;
      puVar5 = (undefined8 *)FUN_18062b8b0(_data_180c8ed18,puVar5,uVar4,0x10);
    }
    puStack_60 = puVar5;
    uStack_50._0_4_ = system_helper_002(puVar5);
  }
LAB_18062e3f0:
  memcpy(puVar5 + 3,acStack_40,(longlong)((int)lVar9 + 2));
}
char * FUN_18062e480(undefined4 handle,undefined8 flags,char *mutex_attr,undefined8 mutex_type,
                    longlong *param_5,longlong param_6,ulonglong param_7,undefined8 *param_8,
                    int *param_9,undefined8 *handle0)
{
  char cVar1;
  undefined4 flags;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  char *pcVar14;
  char *pcVar15;
  ulonglong uVar16;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  longlong lVar21;
  char *pcVar22;
  undefined *puStack_140;
  undefined *puStack_138;
  uint uStack_130;
  undefined8 uStack_128;
  longlong *plStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined4 uStack_108;
  ulonglong uStack_100;
  undefined *puStack_f8;
  undefined4 *puStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined4 *puStack_b8;
  undefined4 uStack_b0;
  ulonglong uStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined4 *puStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  int *piStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  ulonglong uVar17;
  uStack_58 = 0xfffffffffffffffe;
  plStack_120 = param_5;
  lStack_d0 = param_6;
  uStack_d8 = param_7;
  puStack_a0 = param_8;
  piStack_78 = param_9;
  puStack_c8 = handle0;
  puStack_50 = handle0;
  puStack_118 = &unknown_180a3c3e0;
  uStack_100 = 0;
  puStack_110 = (undefined *)0x0;
  uStack_108 = 0;
  pcStack_70 = mutex_attr;
  uStack_68 = flags;
  lVar8 = FUN_18062f1f0(&puStack_f8,mutex_type,handle,param_5);
  uStack_108 = *(undefined4 *)(lVar8 + 0x10);
  puStack_110 = *(undefined **)(lVar8 + 8);
  uStack_100 = *(ulonglong *)(lVar8 + 0x18);
  *(undefined4 *)(lVar8 + 0x10) = 0;
  *(undefined8 *)(lVar8 + 8) = 0;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  puStack_f8 = &unknown_180a3c3e0;
  puStack_60 = puStack_110;
  if (puStack_f0 != (undefined4 *)0x0) {
    system_helper_001();
  }
  puStack_f0 = (undefined4 *)0x0;
  uStack_e0 = (char *)((ulonglong)uStack_e0._4_4_ << 0x20);
  puStack_f8 = &unknown_18098bcb0;
  puVar13 = &data_18098bc73;
  if (puStack_110 != (undefined *)0x0) {
    puVar13 = puStack_110;
  }
  FUN_180627340(&unknown_180a3cac0,puVar13);
  *param_9 = 0;
  lVar8 = *param_5;
  iVar5 = 0;
  if (lVar8 != param_5[1]) {
    do {
      if (0xf < iVar5) {
        FUN_180626ee0(&unknown_180a3ca70,0x10);
      }
      puVar13 = &data_18098bc73;
      if (*(undefined **)(lVar8 + 8) != (undefined *)0x0) {
        puVar13 = *(undefined **)(lVar8 + 8);
      }
      FUN_180627340(&unknown_180a3ca20,puVar13);
      iVar5 = *param_9;
      lVar21 = (longlong)iVar5 * 0x3088 + lStack_d0;
      puVar13 = &data_18098bc73;
      if (*(undefined **)(lVar8 + 8) != (undefined *)0x0) {
        puVar13 = *(undefined **)(lVar8 + 8);
      }
      puStack_140 = &unknown_180a3c3e0;
      uStack_128 = 0;
      puStack_138 = (undefined *)0x0;
      uStack_130 = 0;
      uVar7 = *(uint *)(puStack_c8 + 2);
      uVar16 = (ulonglong)uVar7;
      if (puStack_c8[1] != 0) {
        system_thread_manager_001(&puStack_140,uVar16);
      }
      puVar4 = puStack_138;
      if (uVar7 != 0) {
        memcpy(puStack_138,puStack_c8[1],uVar16);
      }
      if (puStack_138 != (undefined *)0x0) {
        puStack_138[uVar16] = 0;
      }
      uStack_130 = uVar7;
      uStack_128._4_4_ = *(uint *)((longlong)puStack_c8 + 0x1c);
      if (puVar13 != (undefined *)0x0) {
        uVar16 = 0xffffffffffffffff;
        do {
          uVar17 = uVar16;
          uVar16 = uVar17 + 1;
        } while (puVar13[uVar16] != '\0');
        param_5 = plStack_120;
        if (0 < (int)uVar16) {
          system_thread_manager_001(&puStack_140,uVar16 & 0xffffffff);
          memcpy(puStack_138 + uStack_130,puVar13,(longlong)((int)uVar17 + 2));
        }
      }
      puVar13 = &data_18098bc73;
      if (puStack_138 != (undefined *)0x0) {
        puVar13 = puStack_138;
      }
      FUN_180631420(puVar13,lVar21,(longlong)iVar5 * 0x20 + param_7);
      puStack_140 = &unknown_180a3c3e0;
      if (puVar4 != (undefined *)0x0) {
        system_helper_001(puVar4);
      }
      puStack_138 = (undefined *)0x0;
      uStack_128 = (ulonglong)uStack_128._4_4_ << 0x20;
      puStack_140 = &unknown_18098bcb0;
      lVar8 = lVar8 + 0x20;
      iVar5 = *piStack_78 + 1;
      *piStack_78 = iVar5;
      param_7 = uStack_d8;
      mutex_attr = pcStack_70;
      param_6 = lStack_d0;
      param_9 = piStack_78;
    } while (lVar8 != param_5[1]);
  }
  pcVar22 = (char *)0x0;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  plStack_120 = (longlong *)((ulonglong)plStack_120 & 0xffffffff00000000);
  pcVar15 = pcVar22;
  if (0 < iVar5) {
    do {
      pcVar19 = "base";
      do {
        pcVar20 = pcVar19;
        pcVar19 = pcVar20 + 1;
      } while (*pcVar19 != '\0');
      for (pcVar19 = *(char **)(param_6 + 0x30); pcVar18 = pcVar22, pcVar19 != (char *)0x0;
          pcVar19 = *(char **)(pcVar19 + 0x58)) {
        pcVar14 = *(char **)pcVar19;
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)0x180d48d24;
          pcVar9 = pcVar22;
        }
        else {
          pcVar9 = *(char **)(pcVar19 + 0x10);
        }
        if (pcVar9 == pcVar20 + -0x180a04ee3) {
          pcVar9 = pcVar14 + (longlong)pcVar9;
          pcVar18 = pcVar19;
          if (pcVar9 <= pcVar14) break;
          lVar8 = (longlong)&data_180a04ee4 - (longlong)pcVar14;
          while (*pcVar14 == pcVar14[lVar8]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar9 <= pcVar14) goto LAB_18062e835;
          }
        }
      }
LAB_18062e835:
      *puStack_a0 = pcVar18;
      if (pcVar18 != (char *)0x0) {
        if (mutex_attr == (char *)0x0) {
          pcVar19 = *(char **)(pcVar18 + 0x30);
        }
        else {
          cVar1 = *mutex_attr;
          pcVar20 = mutex_attr;
          while (cVar1 != '\0') {
            pcVar20 = pcVar20 + 1;
            cVar1 = *pcVar20;
          }
          for (pcVar18 = *(char **)(pcVar18 + 0x30); pcVar19 = pcVar22, pcVar18 != (char *)0x0;
              pcVar18 = *(char **)(pcVar18 + 0x58)) {
            pcVar14 = *(char **)pcVar18;
            if (pcVar14 == (char *)0x0) {
              pcVar14 = (char *)0x180d48d24;
              pcVar9 = pcVar22;
            }
            else {
              pcVar9 = *(char **)(pcVar18 + 0x10);
            }
            if (pcVar9 == pcVar20 + -(longlong)mutex_attr) {
              pcVar9 = pcVar9 + (longlong)pcVar14;
              pcVar19 = pcVar18;
              if (pcVar9 <= pcVar14) break;
              lVar8 = (longlong)mutex_attr - (longlong)pcVar14;
              while (*pcVar14 == pcVar14[lVar8]) {
                pcVar14 = pcVar14 + 1;
                if (pcVar9 <= pcVar14) goto LAB_18062e8bc;
              }
            }
          }
        }
LAB_18062e8bc:
        *puStack_a0 = pcVar19;
        if (pcVar19 == (char *)0x0) {
          puStack_f8 = &unknown_180a3c3e0;
          puStack_f0 = (undefined4 *)0x0;
          uStack_e8 = 0;
          uStack_e0 = pcVar19;
          puVar10 = (undefined4 *)FUN_18062b420(_data_180c8ed18,0x15,0x13);
          *(undefined1 *)puVar10 = 0;
          puStack_f0 = puVar10;
          uVar6 = system_helper_002(puVar10);
          uStack_e0 = (char *)CONCAT44(uStack_e0._4_4_,uVar6);
          *puVar10 = 0x204c4d58;
          puVar10[1] = 0x65646f6e;
          puVar10[2] = 0x74697720;
          puVar10[3] = 0x616e2068;
          puVar10[4] = 0x2220656d;
          *(undefined1 *)(puVar10 + 5) = 0;
          uStack_e8 = 0x14;
          puStack_c0 = &unknown_180a3c3e0;
          uStack_a8 = 0;
          puStack_b8 = (undefined4 *)0x0;
          uStack_b0 = 0;
          puVar11 = (undefined4 *)FUN_18062b420(_data_180c8ed18,0x15,0x13);
          *(undefined1 *)puVar11 = 0;
          puStack_b8 = puVar11;
          uVar7 = system_helper_002(puVar11);
          uVar6 = puVar10[1];
          flags = puVar10[2];
          uVar3 = puVar10[3];
          *puVar11 = *puVar10;
          puVar11[1] = uVar6;
          puVar11[2] = flags;
          puVar11[3] = uVar3;
          puVar11[4] = puVar10[4];
          uStack_b0 = 0x14;
          *(undefined1 *)(puVar11 + 5) = 0;
          uStack_a8 = (ulonglong)uVar7;
          if (mutex_attr != (char *)0x0) {
            lVar8 = -1;
            do {
              lVar21 = lVar8;
              lVar8 = lVar21 + 1;
            } while (mutex_attr[lVar8] != '\0');
            if (0 < (int)lVar8) {
              iVar5 = (int)lVar21;
              if ((iVar5 != -0x15) && (uVar7 < iVar5 + 0x16U)) {
                puVar11 = (undefined4 *)
                          FUN_18062b8b0(_data_180c8ed18,puVar11,iVar5 + 0x16U,0x10,0x13);
                puStack_b8 = puVar11;
                uVar6 = system_helper_002(puVar11);
                uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar6);
              }
              memcpy(puVar11 + 5,mutex_attr,(longlong)(iVar5 + 2));
            }
          }
          puVar12 = (undefined1 *)0x0;
          puStack_98 = &unknown_180a3c3e0;
          uStack_80 = 0;
          puStack_90 = (undefined4 *)0x0;
          uStack_88 = 0;
          puVar10 = (undefined4 *)FUN_18062b420(_data_180c8ed18,0x16,0x13);
          *(undefined1 *)puVar10 = 0;
          puStack_90 = puVar10;
          uVar6 = system_helper_002(puVar10);
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
          *puVar10 = 0x6f632022;
          puVar10[1] = 0x20646c75;
          puVar10[2] = 0x20746f6e;
          puVar10[3] = 0x66206562;
          puVar10[4] = 0x646e756f;
          *(undefined2 *)(puVar10 + 5) = 0x21;
          uStack_88 = 0x15;
          puStack_140 = &unknown_180a3c3e0;
          uStack_128 = 0;
          puStack_138 = (undefined1 *)0x0;
          uStack_130 = 0;
          if (puVar11 != (undefined4 *)0x0) {
            puVar12 = (undefined1 *)FUN_18062b420(_data_180c8ed18,0x15,0x13);
            *puVar12 = 0;
            puStack_138 = puVar12;
            uVar6 = system_helper_002(puVar12);
            uStack_128 = CONCAT44(uStack_128._4_4_,uVar6);
          }
          memcpy(puVar12,puVar11,0x14);
        }
        iVar5 = FUN_180631780(pcVar19,uStack_68);
        uVar7 = (int)pcVar15 + iVar5;
        pcVar15 = (char *)(ulonglong)uVar7;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar7);
      }
      iVar5 = (int)plStack_120 + 1;
      plStack_120 = (longlong *)CONCAT44(plStack_120._4_4_,iVar5);
      param_6 = param_6 + 0x3088;
      mutex_attr = pcStack_70;
      lStack_d0 = param_6;
    } while (iVar5 < *param_9);
  }
  puStack_118 = &unknown_180a3c3e0;
  if (puStack_60 != (undefined *)0x0) {
    system_helper_001();
  }
  puStack_110 = (undefined *)0x0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  puStack_118 = &unknown_18098bcb0;
  *puStack_c8 = &unknown_180a3c3e0;
  if (puStack_c8[1] != 0) {
    system_helper_001();
  }
  puStack_c8[1] = 0;
  *(undefined4 *)(puStack_c8 + 3) = 0;
  *puStack_c8 = &unknown_18098bcb0;
  return pcVar15;
}
char * FUN_18062ed40(undefined8 handle,undefined8 flags,undefined8 *mutex_attr,longlong mutex_type,
                    undefined8 param_5,undefined8 *param_6,undefined8 *param_7)
{
  undefined4 uVar1;
  undefined4 flags;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined *puStack_d0;
  undefined4 *puStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined4 *puStack_a8;
  undefined4 uStack_a0;
  ulonglong uStack_98;
  undefined *puStack_90;
  undefined4 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  uStack_50 = 0xfffffffffffffffe;
  puStack_40 = param_7;
  pcVar14 = (char *)0x0;
  puStack_48 = mutex_attr;
  lVar5 = FUN_180627ce0(param_7,&puStack_d0);
  puVar10 = &data_18098bc73;
  if (*(undefined **)(lVar5 + 8) != (undefined *)0x0) {
    puVar10 = *(undefined **)(lVar5 + 8);
  }
  FUN_180631420(puVar10,mutex_type,param_5);
  puStack_d0 = &unknown_180a3c3e0;
  if (puStack_c8 != (undefined4 *)0x0) {
    system_helper_001();
  }
  puStack_c8 = (undefined4 *)0x0;
  uStack_b8 = (ulonglong)uStack_b8._4_4_ << 0x20;
  puStack_d0 = &unknown_18098bcb0;
  pcVar12 = "base";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  for (pcVar12 = *(char **)(mutex_type + 0x30); pcVar11 = pcVar14, pcVar12 != (char *)0x0;
      pcVar12 = *(char **)(pcVar12 + 0x58)) {
    pcVar9 = *(char **)pcVar12;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar6 = pcVar14;
    }
    else {
      pcVar6 = *(char **)(pcVar12 + 0x10);
    }
    if (pcVar6 == pcVar13 + -0x180a04ee3) {
      pcVar6 = pcVar6 + (longlong)pcVar9;
      pcVar11 = pcVar12;
      if (pcVar6 <= pcVar9) break;
      lVar5 = (longlong)&data_180a04ee4 - (longlong)pcVar9;
      while (*pcVar9 == pcVar9[lVar5]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar6 <= pcVar9) goto LAB_18062ee56;
      }
    }
  }
LAB_18062ee56:
  *param_6 = pcVar11;
  if (pcVar11 != (char *)0x0) {
    pcVar12 = "decal_textures";
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    for (pcVar12 = *(char **)(pcVar11 + 0x30); pcVar11 = pcVar14, pcVar12 != (char *)0x0;
        pcVar12 = *(char **)(pcVar12 + 0x58)) {
      pcVar9 = *(char **)pcVar12;
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x180d48d24;
        pcVar6 = pcVar14;
      }
      else {
        pcVar6 = *(char **)(pcVar12 + 0x10);
      }
      if (pcVar6 == pcVar13 + -0x180a12dff) {
        pcVar6 = pcVar6 + (longlong)pcVar9;
        pcVar11 = pcVar12;
        if (pcVar6 <= pcVar9) break;
        lVar5 = (longlong)&data_180a12e00 - (longlong)pcVar9;
        while (*pcVar9 == pcVar9[lVar5]) {
          pcVar9 = pcVar9 + 1;
          if (pcVar6 <= pcVar9) goto LAB_18062eece;
        }
      }
    }
LAB_18062eece:
    *param_6 = pcVar11;
    if (pcVar11 == (char *)0x0) {
      puStack_90 = &unknown_180a3c3e0;
      uStack_78 = 0;
      puStack_88 = (undefined4 *)0x0;
      uStack_80 = 0;
      puVar7 = (undefined4 *)FUN_18062b420(_data_180c8ed18,0x15,0x13);
      *(undefined1 *)puVar7 = 0;
      puStack_88 = puVar7;
      uVar3 = system_helper_002(puVar7);
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
      *puVar7 = 0x204c4d58;
      puVar7[1] = 0x65646f6e;
      puVar7[2] = 0x74697720;
      puVar7[3] = 0x616e2068;
      puVar7[4] = 0x2220656d;
      *(undefined1 *)(puVar7 + 5) = 0;
      uStack_80 = 0x14;
      puStack_b0 = &unknown_180a3c3e0;
      uStack_98 = 0;
      puStack_a8 = (undefined4 *)0x0;
      uStack_a0 = 0;
      puVar8 = (undefined4 *)FUN_18062b420(_data_180c8ed18,0x15,0x13);
      *(undefined1 *)puVar8 = 0;
      puStack_a8 = puVar8;
      uVar4 = system_helper_002(puVar8);
      uVar3 = puVar7[1];
      uVar1 = puVar7[2];
      flags = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar3;
      puVar8[2] = uVar1;
      puVar8[3] = flags;
      puVar8[4] = puVar7[4];
      uStack_a0 = 0x14;
      *(undefined1 *)(puVar8 + 5) = 0;
      uStack_98 = (ulonglong)uVar4;
      if (uVar4 < 0x23) {
        puVar8 = (undefined4 *)FUN_18062b8b0(_data_180c8ed18,puVar8,0x23,0x10,0x13);
        puStack_a8 = puVar8;
        uVar3 = system_helper_002(puVar8);
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar3);
      }
      *(undefined8 *)(puVar8 + 5) = 0x65745f6c61636564;
      puVar8[7] = 0x72757478;
      *(undefined2 *)(puVar8 + 8) = 0x7365;
      *(undefined1 *)((longlong)puVar8 + 0x22) = 0;
      uStack_a0 = 0x22;
      puStack_d0 = &unknown_180a3c3e0;
      uStack_b8 = 0;
      puStack_c8 = (undefined4 *)0x0;
      uStack_c0 = 0;
      puVar7 = (undefined4 *)FUN_18062b420(_data_180c8ed18,0x16,0x13);
      *(undefined1 *)puVar7 = 0;
      puStack_c8 = puVar7;
      uVar3 = system_helper_002(puVar7);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar3);
      *puVar7 = 0x6f632022;
      puVar7[1] = 0x20646c75;
      puVar7[2] = 0x20746f6e;
      puVar7[3] = 0x66206562;
      puVar7[4] = 0x646e756f;
      *(undefined2 *)(puVar7 + 5) = 0x21;
      uStack_c0 = 0x15;
      lVar5 = FUN_180627ce0(&puStack_b0,&puStack_70,&puStack_d0);
      puVar10 = &data_18098bc73;
      if (*(undefined **)(lVar5 + 8) != (undefined *)0x0) {
        puVar10 = *(undefined **)(lVar5 + 8);
      }
      system_thread_003(puVar10);
      puStack_70 = &unknown_180a3c3e0;
      if (lStack_68 != 0) {
        system_helper_001();
      }
      lStack_68 = 0;
      uStack_58 = 0;
      puStack_70 = &unknown_18098bcb0;
      puStack_d0 = &unknown_180a3c3e0;
      system_helper_001(puVar7);
    }
    uVar4 = FUN_180631780(pcVar11,&unknown_180a12e10);
    pcVar14 = (char *)(ulonglong)uVar4;
  }
  *mutex_attr = &unknown_180a3c3e0;
  if (mutex_attr[1] != 0) {
    system_helper_001();
  }
  mutex_attr[1] = 0;
  *(undefined4 *)(mutex_attr + 3) = 0;
  *mutex_attr = &unknown_18098bcb0;
  *param_7 = &unknown_180a3c3e0;
  if (param_7[1] != 0) {
    system_helper_001();
  }
  param_7[1] = 0;
  *(undefined4 *)(param_7 + 3) = 0;
  *param_7 = &unknown_18098bcb0;
  return pcVar14;
}
longlong FUN_18062f1f0(longlong handle,longlong flags,undefined4 mutex_attr,longlong mutex_type)
{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined *puStack_70;
  longlong lStack_68;
  int iStack_60;
  ulonglong uStack_58;
  undefined *puStack_50;
  char *pcStack_48;
  int iStack_40;
  undefined8 uStack_38;
  uVar14 = 0xfffffffffffffffe;
  pcVar11 = (char *)0x0;
  FUN_180057110(mutex_type);
  FUN_180632160(handle,mutex_attr);
  uVar13 = 1;
  pcVar10 = "base";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar10 != '\0');
  for (pcVar10 = *(char **)(flags + 0x30); pcVar4 = pcVar11, pcVar10 != (char *)0x0;
      pcVar10 = *(char **)(pcVar10 + 0x58)) {
    pcVar5 = *(char **)pcVar10;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar3 = pcVar11;
    }
    else {
      pcVar3 = *(char **)(pcVar10 + 0x10);
    }
    if (pcVar3 == pcVar8 + -0x180a04ee3) {
      pcVar3 = pcVar3 + (longlong)pcVar5;
      pcVar4 = pcVar10;
      if (pcVar3 <= pcVar5) break;
      lVar6 = (longlong)&data_180a04ee4 - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar6]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_18062f2b6;
      }
    }
  }
LAB_18062f2b6:
  pcVar10 = "file";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar10 != '\0');
  puVar7 = *(undefined8 **)(pcVar4 + 0x30);
  do {
    if (puVar7 == (undefined8 *)0x0) {
      return handle;
    }
    pcVar10 = (char *)*puVar7;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar4 = pcVar11;
    }
    else {
      pcVar4 = (char *)puVar7[2];
    }
    if (pcVar4 == pcVar8 + -0x180a0794b) {
      pcVar4 = pcVar10 + (longlong)pcVar4;
      if (pcVar4 <= pcVar10) break;
      lVar6 = (longlong)&unknown_180a0794c - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_18062f340;
      }
    }
    puVar7 = (undefined8 *)puVar7[0xb];
  } while( true );
LAB_18062f340:
  puStack_50 = &unknown_180a3c3e0;
  uStack_38 = 0;
  pcStack_48 = (char *)0x0;
  iStack_40 = 0;
  pcVar10 = "type";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
      puVar9 = (undefined8 *)puVar9[6]) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar4 = pcVar11;
    }
    else {
      pcVar4 = (char *)puVar9[2];
    }
    if (pcVar4 == pcVar8 + -0x180a0ee2f) {
      pcVar4 = pcVar4 + (longlong)pcVar10;
      if (pcVar4 <= pcVar10) {
LAB_18062f3b3:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        FUN_180627c50(&puStack_50,lVar6,pcVar4,puVar9,uVar13,uVar14);
        break;
      }
      lVar6 = (longlong)&unknown_180a0ee30 - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_18062f3b3;
      }
    }
  }
  if (iStack_40 == *(int *)(handle + 0x10)) {
    if (iStack_40 == 0) {
LAB_18062f41e:
      if (*(int *)(handle + 0x10) != 0) goto LAB_18062f426;
      bVar12 = true;
    }
    else {
      pcVar10 = pcStack_48;
      do {
        cVar1 = *pcVar10;
        cVar2 = pcVar10[*(longlong *)(handle + 8) - (longlong)pcStack_48];
        if (cVar1 != cVar2) break;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      bVar12 = cVar1 == cVar2;
    }
  }
  else {
    if (iStack_40 == 0) goto LAB_18062f41e;
LAB_18062f426:
    bVar12 = false;
  }
  if (bVar12) {
    puStack_70 = &unknown_180a3c3e0;
    uStack_58 = 0;
    lStack_68 = 0;
    iStack_60 = 0;
    pcVar10 = "name";
    do {
      pcVar8 = pcVar10;
      pcVar10 = pcVar8 + 1;
    } while (*pcVar10 != '\0');
    for (puVar9 = (undefined8 *)puVar7[8]; puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)puVar9[6]) {
      pcVar10 = (char *)*puVar9;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x180d48d24;
        pcVar4 = pcVar11;
      }
      else {
        pcVar4 = (char *)puVar9[2];
      }
      if (pcVar4 == pcVar8 + -0x180a03a83) {
        pcVar4 = pcVar4 + (longlong)pcVar10;
        if (pcVar4 <= pcVar10) {
LAB_18062f4a5:
          lVar6 = 0x180d48d24;
          if (puVar9[1] != 0) {
            lVar6 = puVar9[1];
          }
          FUN_180627c50(&puStack_70,lVar6);
          break;
        }
        lVar6 = (longlong)&data_180a03a84 - (longlong)pcVar10;
        while (*pcVar10 == pcVar10[lVar6]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar4 <= pcVar10) goto LAB_18062f4a5;
        }
      }
    }
    puVar9 = *(undefined8 **)(mutex_type + 8);
    if (puVar9 < *(undefined8 **)(mutex_type + 0x10)) {
      *(undefined8 **)(mutex_type + 8) = puVar9 + 4;
      *puVar9 = &unknown_18098bcb0;
      puVar9[1] = 0;
      *(undefined4 *)(puVar9 + 2) = 0;
      *puVar9 = &unknown_180a3c3e0;
      puVar9[3] = 0;
      puVar9[1] = 0;
      *(undefined4 *)(puVar9 + 2) = 0;
      system_thread_manager_001(puVar9,iStack_60);
      if (iStack_60 != 0) {
        memcpy(puVar9[1],lStack_68,iStack_60 + 1);
      }
      if (lStack_68 != 0) {
        *(undefined4 *)(puVar9 + 2) = 0;
        if ((undefined1 *)puVar9[1] != (undefined1 *)0x0) {
          *(undefined1 *)puVar9[1] = 0;
        }
        *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
      }
    }
    else {
      system_event_handler_006(mutex_type,&puStack_70);
    }
    puStack_70 = &unknown_180a3c3e0;
    if (lStack_68 != 0) {
      system_helper_001();
    }
    lStack_68 = 0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &unknown_18098bcb0;
  }
  puVar7 = (undefined8 *)puVar7[0xb];
  puStack_50 = &unknown_180a3c3e0;
  if (pcStack_48 != (char *)0x0) {
    system_helper_001();
  }
  if (puVar7 == (undefined8 *)0x0) {
    return handle;
  }
  goto LAB_18062f340;
}
  data_180c95fea = 0;
  if (cVar1 != '\0') {
    system_thread_003(&unknown_180a3cc28,handle);
  }
  if (lVar3 != -1) {
    LOCK();
    _data_180c8ed64 = _data_180c8ed64 + -1;
    UNLOCK();
    CloseHandle(alStack_3d0[0]);
    alStack_3d0[0] = -1;
  }
  puStack_3b0 = &unknown_180a3c3e0;
  if (puStack_3a8 == (undefined *)0x0) {
    puStack_3a8 = (undefined *)0x0;
    uStack_398 = 0;
    puStack_3b0 = &unknown_18098bcb0;
    system_crypto_001(uStack_48 ^ (ulonglong)auStack_408);
  }
  system_helper_001();
}
int FUN_180631780(undefined8 handle,char *flags)
{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  puVar3 = (undefined8 *)FUN_18005d4b0(handle,flags,0);
  iVar7 = 0;
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  while (iVar7 = iVar7 + 1, flags == (char *)0x0) {
    puVar3 = (undefined8 *)puVar3[0xb];
LAB_18063182e:
    if (puVar3 == (undefined8 *)0x0) {
      return iVar7;
    }
  }
  cVar2 = *flags;
  pcVar6 = flags;
  while (cVar2 != '\0') {
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar6;
  }
  puVar3 = (undefined8 *)puVar3[0xb];
  if (puVar3 == (undefined8 *)0x0) {
    return iVar7;
  }
  do {
    pcVar4 = (char *)*puVar3;
    if (pcVar4 == (char *)0x0) {
      lVar5 = 0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      lVar5 = puVar3[2];
    }
    if (lVar5 == (longlong)pcVar6 - (longlong)flags) {
      pcVar1 = pcVar4 + lVar5;
      if (pcVar1 <= pcVar4) goto LAB_18063182e;
      lVar5 = (longlong)flags - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar1 <= pcVar4) goto LAB_18063182e;
      }
    }
    puVar3 = (undefined8 *)puVar3[0xb];
    if (puVar3 == (undefined8 *)0x0) {
      return iVar7;
    }
  } while( true );
}
int FUN_1806317a0(undefined8 handle,undefined8 flags,undefined8 *mutex_attr)
{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *unaff_RBX;
  longlong lVar4;
  char *pcVar5;
  int in_R11D;
  while (in_R11D = in_R11D + 1, unaff_RBX == (char *)0x0) {
    mutex_attr = (undefined8 *)mutex_attr[0xb];
LAB_18063182e:
    if (mutex_attr == (undefined8 *)0x0) {
      return in_R11D;
    }
  }
  cVar2 = *unaff_RBX;
  pcVar5 = unaff_RBX;
  while (cVar2 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  mutex_attr = (undefined8 *)mutex_attr[0xb];
  if (mutex_attr == (undefined8 *)0x0) {
    return in_R11D;
  }
  do {
    pcVar3 = (char *)*mutex_attr;
    if (pcVar3 == (char *)0x0) {
      lVar4 = 0;
      pcVar3 = (char *)0x180d48d24;
    }
    else {
      lVar4 = mutex_attr[2];
    }
    if (lVar4 == (longlong)pcVar5 - (longlong)unaff_RBX) {
      pcVar1 = pcVar3 + lVar4;
      if (pcVar1 <= pcVar3) goto LAB_18063182e;
      lVar4 = (longlong)unaff_RBX - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar1 <= pcVar3) goto LAB_18063182e;
      }
    }
    mutex_attr = (undefined8 *)mutex_attr[0xb];
    if (mutex_attr == (undefined8 *)0x0) {
      return in_R11D;
    }
  } while( true );
}
int FUN_18063182a(undefined8 handle,undefined8 flags,undefined8 *mutex_attr)
{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *unaff_RBX;
  char *unaff_RDI;
  longlong lVar4;
  char *pcVar5;
  int in_R11D;
  do {
    mutex_attr = (undefined8 *)mutex_attr[0xb];
LAB_18063182e:
    if (mutex_attr == (undefined8 *)0x0) {
      return in_R11D;
    }
    in_R11D = in_R11D + 1;
  } while (unaff_RBX == (char *)0x0);
  cVar2 = *unaff_RBX;
  pcVar5 = unaff_RBX;
  while (cVar2 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  mutex_attr = (undefined8 *)mutex_attr[0xb];
  if (mutex_attr == (undefined8 *)0x0) {
    return in_R11D;
  }
  do {
    if ((char *)*mutex_attr == (char *)0x0) {
      lVar4 = 0;
      pcVar3 = unaff_RDI;
    }
    else {
      lVar4 = mutex_attr[2];
      pcVar3 = (char *)*mutex_attr;
    }
    if (lVar4 == (longlong)pcVar5 - (longlong)unaff_RBX) {
      pcVar1 = pcVar3 + lVar4;
      if (pcVar1 <= pcVar3) goto LAB_18063182e;
      lVar4 = (longlong)unaff_RBX - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar1 <= pcVar3) goto LAB_18063182e;
      }
    }
    mutex_attr = (undefined8 *)mutex_attr[0xb];
    if (mutex_attr == (undefined8 *)0x0) {
      return in_R11D;
    }
  } while( true );
}
undefined4 FUN_180631845(void)
{
  undefined4 in_R11D;
  return in_R11D;
}
longlong FUN_180631850(undefined8 handle,undefined8 flags,longlong mutex_attr)
{
  longlong init_result;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puStack_30;
  char *pcStack_28;
  uVar5 = 0xfffffffffffffffe;
  init_result = FUN_1800a02a0();
  if (init_result == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(init_result + 8) != 0) {
    lVar4 = *(longlong *)(init_result + 8);
  }
  system_thread_manager_002(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    init_result = 0;
    do {
      lVar2 = strchr(&unknown_180a3cc48,(int)pcStack_28[init_result]);
      if (lVar2 != 0) {
        pcStack_28[init_result] = ' ';
      }
      init_result = init_result + 1;
    } while (pcStack_28[init_result] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&unknown_180a3cbe0,mutex_attr,mutex_attr + 4,uVar5);
  puStack_30 = &unknown_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    system_helper_001();
  }
  return lVar4;
}
longlong FUN_180631960(undefined8 handle,undefined8 flags,longlong mutex_attr)
{
  longlong init_result;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined *puStack_30;
  char *pcStack_28;
  init_result = FUN_1800a02a0();
  if (init_result == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(init_result + 8) != 0) {
    lVar4 = *(longlong *)(init_result + 8);
  }
  system_thread_manager_002(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    init_result = 0;
    do {
      lVar2 = strchr(&unknown_180a3c9ec,(int)pcStack_28[init_result]);
      if (lVar2 != 0) {
        pcStack_28[init_result] = ' ';
      }
      init_result = init_result + 1;
    } while (pcStack_28[init_result] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&unknown_180a3cc0c,mutex_attr,mutex_attr + 4,mutex_attr + 8);
  puStack_30 = &unknown_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    system_helper_001();
  }
  return lVar4;
}
longlong FUN_180631a80(undefined8 handle,undefined8 flags,longlong mutex_attr,undefined8 mutex_type)
{
  longlong init_result;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined *puStack_30;
  char *pcStack_28;
  init_result = FUN_1800a02a0(handle,&unknown_180a0696c,mutex_attr,mutex_type,0xfffffffffffffffe);
  if (init_result == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(init_result + 8) != 0) {
    lVar4 = *(longlong *)(init_result + 8);
  }
  system_thread_manager_002(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    init_result = 0;
    do {
      lVar2 = strchr(&unknown_180a3cc04,(int)pcStack_28[init_result]);
      if (lVar2 != 0) {
        pcStack_28[init_result] = ' ';
      }
      init_result = init_result + 1;
    } while (pcStack_28[init_result] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&unknown_180a3cc1c,mutex_attr,mutex_attr + 4);
  puStack_30 = &unknown_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    system_helper_001();
  }
  return lVar4;
}
longlong FUN_180631b90(undefined8 handle,undefined8 flags,longlong mutex_attr)
{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puStack_30;
  char *pcStack_28;
  uVar6 = 0xfffffffffffffffe;
  lVar2 = FUN_1800a02a0();
  if (lVar2 == 0) {
    return 0;
  }
  lVar5 = 0x180d48d24;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  system_thread_manager_002(&puStack_30,lVar5);
  if (*pcStack_28 != '\0') {
    lVar2 = 0;
    do {
      lVar3 = strchr(&unknown_180a3c9ec,(int)pcStack_28[lVar2]);
      if (lVar3 != 0) {
        pcStack_28[lVar2] = ' ';
      }
      lVar2 = lVar2 + 1;
    } while (pcStack_28[lVar2] != '\0');
  }
  pcVar4 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar4 = pcStack_28;
  }
  iVar1 = FUN_18010cbc0(pcVar4,&unknown_180a3c9f8,mutex_attr,mutex_attr + 4,mutex_attr + 8,
                        (undefined4 *)(mutex_attr + 0xc),uVar6);
  if (iVar1 == 3) {
    *(undefined4 *)(mutex_attr + 0xc) = 0x3f800000;
  }
  puStack_30 = &unknown_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    system_helper_001();
  }
  return lVar5;
}
longlong FUN_180631cc0(undefined8 handle,undefined8 flags,longlong mutex_attr)
{
  longlong init_result;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puStack_30;
  char *pcStack_28;
  uVar5 = 0xfffffffffffffffe;
  init_result = FUN_1800a02a0(handle,&unknown_180a16818);
  if (init_result == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(init_result + 8) != 0) {
    lVar4 = *(longlong *)(init_result + 8);
  }
  system_thread_manager_002(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    init_result = 0;
    do {
      lVar2 = strchr(&unknown_180a3cc04,(int)pcStack_28[init_result]);
      if (lVar2 != 0) {
        pcStack_28[init_result] = ' ';
      }
      init_result = init_result + 1;
    } while (pcStack_28[init_result] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&unknown_180a3c9f8,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr,uVar5);
  puStack_30 = &unknown_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    system_helper_001();
  }
  return lVar4;
}
longlong FUN_180631de0(undefined8 handle,undefined8 flags,longlong mutex_attr)
{
  longlong *pinit_result;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined *puStack_30;
  char *pcStack_28;
  lVar2 = FUN_1800a02a0();
  if (lVar2 != 0) {
    pinit_result = (longlong *)(lVar2 + 8);
    lVar2 = 0x180d48d24;
    if (*pinit_result != 0) {
      lVar2 = *pinit_result;
    }
    system_thread_manager_002(&puStack_30,lVar2);
    if (*pcStack_28 != '\0') {
      lVar5 = 0;
      do {
        lVar3 = strchr(&unknown_180a3cc04,(int)pcStack_28[lVar5]);
        if (lVar3 != 0) {
          pcStack_28[lVar5] = ' ';
        }
        lVar5 = lVar5 + 1;
      } while (pcStack_28[lVar5] != '\0');
    }
    pcVar4 = "";
    if (pcStack_28 != (char *)0x0) {
      pcVar4 = pcStack_28;
    }
    FUN_18010cbc0(pcVar4,&unknown_180a3ccc8,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0x10,
                  mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + 0x20,mutex_attr + 0x24,mutex_attr + 0x28);
    puStack_30 = &unknown_180a3c3e0;
    if (pcStack_28 != (char *)0x0) {
      system_helper_001();
    }
  }
  return lVar2;
}
longlong FUN_180631f30(undefined8 handle,undefined8 flags,longlong mutex_attr)
{
  longlong *pinit_result;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puStack_58;
  char *pcStack_50;
  uVar6 = 0xfffffffffffffffe;
  lVar2 = FUN_1800a02a0();
  if (lVar2 != 0) {
    pinit_result = (longlong *)(lVar2 + 8);
    lVar2 = 0x180d48d24;
    if (*pinit_result != 0) {
      lVar2 = *pinit_result;
    }
    system_thread_manager_002(&puStack_58,lVar2);
    if (*pcStack_50 != '\0') {
      lVar5 = 0;
      do {
        lVar3 = strchr(&unknown_180a3cc04,(int)pcStack_50[lVar5]);
        if (lVar3 != 0) {
          pcStack_50[lVar5] = ' ';
        }
        lVar5 = lVar5 + 1;
      } while (pcStack_50[lVar5] != '\0');
    }
    pcVar4 = "";
    if (pcStack_50 != (char *)0x0) {
      pcVar4 = pcStack_50;
    }
    FUN_18010cbc0(pcVar4,&unknown_180a3cca0,mutex_attr,mutex_attr + 4,mutex_attr + 8,mutex_attr + 0xc,mutex_attr + 0x10
                  ,mutex_attr + 0x14,mutex_attr + 0x18,mutex_attr + 0x1c,mutex_attr + 0x20,mutex_attr + 0x24,
                  mutex_attr + 0x28,mutex_attr + 0x2c,mutex_attr + 0x30,mutex_attr + 0x34,mutex_attr + 0x38,
                  mutex_attr + 0x3c,lVar2,uVar6);
    puStack_58 = &unknown_180a3c3e0;
    if (pcStack_50 != (char *)0x0) {
      system_helper_001();
    }
  }
  return lVar2;
}
longlong FUN_180632100(undefined8 handle,undefined8 flags,undefined8 *mutex_attr)
{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_18 [16];
  lVar2 = FUN_1800a02a0();
  if (lVar2 != 0) {
    lVar4 = 0x180d48d24;
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar4 = *(longlong *)(lVar2 + 8);
    }
    puVar3 = (undefined8 *)FUN_1802c0460(auStack_18,lVar4);
    uVar1 = puVar3[1];
    *mutex_attr = *puVar3;
    mutex_attr[1] = uVar1;
    return lVar4;
  }
  return 0;
}
undefined8 FUN_18063211a(undefined8 handle)
{
  undefined8 uVar1;
  undefined8 *pflags;
  undefined8 uVar3;
  undefined8 *unaff_RDI;
  bool in_ZF;
  undefined1 auStackX_20 [8];
  uVar3 = 0x180d48d24;
  if (!in_ZF) {
    uVar3 = handle;
  }
  pflags = (undefined8 *)FUN_1802c0460(auStackX_20,uVar3);
  uVar1 = pflags[1];
  *unaff_RDI = *pflags;
  unaff_RDI[1] = uVar1;
  return uVar3;
}
  data_180bf66d8 = 0;
  system_crypto_002(FUN_18064fe90);
  FUN_180650050(&unknown_18064ffc0);
  lVar3 = 0;
  _data_180c96858 = FUN_1806500b0;
  puVar1 = (undefined4 *)&data_180bfbd80;
  lVar2 = 0x16;
  do {
    if (puVar1[1] == 0) {
      FUN_180650490(puVar1);
    }
    if (lVar3 != 2) {
      FUN_1806502e0(&unknown_180a3db60,*(undefined8 *)(puVar1 + 4),*puVar1);
    }
    lVar3 = lVar3 + 1;
    puVar1 = puVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (_data_180bfbf64 == 0) {
    FUN_180650490(&data_180bfbf60);
  }
  _data_180bf7308 = (longlong)_data_180bfbf60;
  if (_data_180bfbf7c == 0) {
    FUN_180650490(&data_180bfbf78);
  }
  _data_180bf72a8 = (longlong)_data_180bfbf78;
  FUN_18064fcc0();
  if (data_180c8efc8 != '\0') {
    FUN_1806502e0(&unknown_180a3d970);
  }
  return;
}
  data_180c8ecef = 1;
  if (data_180d49130 == '\0') {
    data_180d49130 = '\x01';
    flags = FlsAlloc(&unknown_18064f970);
    _data_180bf664c = flags;
    *(undefined8 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10) =
         0x180bf4000;
    FlsSetValue(flags);
  }
  FUN_1806502e0(&unknown_180a3d988,&ExceptionList);
  init_result = cpuid_Extended_Feature_Enumeration_info(7);
  data_180c8f000 = (byte)(*(uint *)(init_result + 8) >> 4) & 1;
  GetSystemInfo(auStack_40);
  if (uStack_3c != 0) {
    _data_180bf66a8 = (ulonglong)uStack_3c;
  }
  FUN_18064f4b0();
  FUN_1806502e0(&unknown_180a3d940,0);
  FUN_18064f980();
  plVar3 = (longlong *)FUN_18064e2a0();
  if ((undefined *)(*plVar3 + 0x3d8) == &data_180c8ed80) {
    memset(&data_180c8ed80,0,0x240);
  }
  memset((undefined *)(*plVar3 + 0x3d8),0,0x240);
}
  data_180d49131 = 1;
  FlsSetValue(_data_180bf664c,0);
  FlsFree(_data_180bf664c);
  FUN_18064e0d0(*(undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                 0x10),1);
  if (_data_180bfbd9c == 0) {
    FUN_180650490(&data_180bfbd98);
  }
  if (_data_180bfbd98 == 0) {
    if (_data_180bfbdb4 == 0) {
      FUN_180650490(&data_180bfbdb0);
    }
    if (_data_180bfbdb0 == 0) goto LAB_18064ff6c;
  }
  pinit_result = (longlong *)FUN_18064e2a0();
  pflags = (undefined *)(*pinit_result + 0x3d8);
  if (pflags != &data_180c8ed80) {
    FUN_1806470a0();
    memset(pflags,0,0x240);
  }
  FUN_1806478d0();
LAB_18064ff6c:
  FUN_1806502e0(&unknown_180a3d958,_data_180bf4b20);
  data_180bf66d8 = 1;
  return;
}
undefined4 FUN_18064ff90(int handle)
{
  if (*(int *)(&data_180bfbd84 + (longlong)handle * 0x18) == 0) {
    FUN_180650490(&data_180bfbd80 + (longlong)handle * 0x18);
  }
  return *(undefined4 *)(&data_180bfbd80 + (longlong)handle * 0x18);
}
    data_180c8f020 = 0;
    return;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(handle + lVar2) != '\0');
  uVar1 = (uint)lVar2;
  if (0x1fff < uVar1) {
    uVar1 = 0x1fff;
  }
  memcpy(&data_180c8f020,handle,(longlong)(int)uVar1);
}
  data_180c8f020 = 0;
  return;
}
undefined8 FUN_180653580(undefined8 handle)
{
  undefined8 uVar1;
  longlong lVar2;
  uVar1 = FUN_18062b420(_data_180c8ed18,handle,0x19);
  lVar2 = system_helper_002(uVar1);
  LOCK();
  _data_180c967c8 = _data_180c967c8 + lVar2;
  UNLOCK();
  return uVar1;
}
undefined8 FUN_1806535c0(undefined8 handle,undefined8 flags)
{
  longlong init_result;
  undefined8 flags;
  init_result = system_helper_002();
  flags = FUN_18062b680(_data_180c8ed18,handle,flags,0x19);
  LOCK();
  _data_180c967c8 = _data_180c967c8 - init_result;
  UNLOCK();
  init_result = system_helper_002(flags);
  LOCK();
  _data_180c967c8 = _data_180c967c8 + init_result;
  UNLOCK();
  return flags;
}
longlong FUN_180653630(longlong *handle)
{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  lVar2 = system_helper_002();
  lVar3 = _data_180c967c8;
  LOCK();
  lVar2 = _data_180c967c8 - lVar2;
  _data_180c967c8 = lVar2;
  UNLOCK();
  if (handle == (longlong *)0x0) {
    return lVar3;
  }
  uVar4 = (ulonglong)handle & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar2 = uVar4 + 0x80 + ((longlong)handle - uVar4 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      lVar3 = *(longlong *)(lVar2 + 0x20);
      *handle = lVar3;
      *(longlong **)(lVar2 + 0x20) = handle;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        lVar3 = FUN_18064d630();
        return lVar3;
      }
    }
    else {
      lVar3 = func_0x00018064e870(uVar4,CONCAT71(0xff000000,
                                                 *(void ***)(uVar4 + 0x70) == &ExceptionList),
                                  handle,uVar4,0xfffffffffffffffe);
    }
  }
  return lVar3;
}
      data_180d4913c = '\x01';
      handle = uStack_378;
    }
    pfVar3 = afStack_2e8;
    lVar6 = 0;
    lVar9 = 0x20;
    lVar7 = 0x20;
    do {
      fVar28 = param_5 * *(float *)(lVar6 + 0x180d4a0a8);
      fVar24 = param_5 * *(float *)(lVar6 + 0x180d4a0a4);
      fVar30 = param_5 * *(float *)(lVar6 + 0x180d4a0a0);
      fVar20 = fVar30 * *mutex_attr + fVar24 * mutex_attr[4] + fVar28 * mutex_attr[8] + mutex_attr[0xc];
      fVar21 = fVar30 * mutex_attr[1] + fVar24 * mutex_attr[5] + fVar28 * mutex_attr[9] + mutex_attr[0xd];
      fVar22 = fVar30 * mutex_attr[2] + fVar24 * mutex_attr[6] + fVar28 * mutex_attr[10] + mutex_attr[0xe];
      fVar24 = fVar30 * mutex_attr[3] + fVar24 * mutex_attr[7] + fVar28 * mutex_attr[0xb] + mutex_attr[0xf];
      *(float *)((longlong)afStack_2e8 + lVar6) = fVar20;
      *(float *)((longlong)afStack_2e8 + lVar6 + 4) = fVar21;
      *(float *)((longlong)&uStack_2e0 + lVar6) = fVar22;
      *(float *)((longlong)&uStack_2e0 + lVar6 + 4) = fVar24;
      if (flags != 0) {
        uStack_378 = uStack_378 & 0xffffffff00000000;
        if (*(longlong *)(flags + 0x2908) == 0) {
          FUN_1801a9fd0(flags,pfVar3,0x31b189,&uStack_378);
          fVar20 = (float)uStack_378;
        }
        else {
          cStack_324 = '\0';
          uStack_348 = 0;
          uStack_340 = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          uStack_338 = 0;
          uStack_330 = 0;
          uStack_368 = CONCAT44(fVar21,fVar20);
          uStack_360 = CONCAT44(fVar24,fVar22);
          uStack_380 = CONCAT31(uStack_380._1_3_,1);
          uStack_388 = 0;
          FUN_1801aa0f0(flags,&uStack_368,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *(float *)((longlong)&uStack_2e0 + lVar6) = fVar20 + 0.01;
      }
      pfVar3 = pfVar3 + 4;
      lVar6 = lVar6 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    fVar20 = mutex_attr[0xe];
    fVar21 = mutex_attr[0xd];
    fVar22 = mutex_attr[0xc];
    fVar24 = mutex_attr[9];
    fVar28 = mutex_attr[8];
    fVar30 = mutex_attr[10];
    uStack_36c = 0x7f7fffff;
    pfVar3 = afStack_2e8;
    lVar6 = 0x20;
    do {
      fVar26 = pfVar3[2] - fVar20;
      fVar27 = pfVar3[1] - fVar21;
      fVar29 = *pfVar3 - fVar22;
      fVar23 = fVar29 * fVar28 + fVar27 * fVar24 + fVar26 * fVar30;
      fVar26 = fVar26 - fVar23 * fVar30;
      fVar27 = fVar27 - fVar23 * fVar24;
      fVar29 = fVar29 - fVar23 * fVar28;
      fVar23 = fVar26 * fVar26 + fVar27 * fVar27 + fVar29 * fVar29;
      auVar13 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      fVar25 = auVar13._0_4_;
      fVar25 = fVar25 * 0.5 * (3.0 - fVar23 * fVar25 * fVar25);
      fStack_370 = fVar25 * fVar26 * param_5 + fVar20;
      fVar23 = fVar25 * fVar27 * param_5 + fVar21;
      fVar25 = fVar25 * fVar29 * param_5 + fVar22;
      uStack_378 = CONCAT44(fVar23,fVar25);
      *pfVar3 = fVar25;
      pfVar3[1] = fVar23;
      pfVar3[2] = fStack_370;
      pfVar3[3] = 3.4028235e+38;
      pfVar3 = pfVar3 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (flags != 0) {
      pfVar3 = (float *)&uStack_2e0;
      pfVar5 = afStack_2e8;
      do {
        uStack_378 = uStack_378 & 0xffffffff00000000;
        if (*(longlong *)(flags + 0x2908) == 0) {
          FUN_1801a9fd0(flags,pfVar5,0x31b189,&uStack_378);
          fVar20 = (float)uStack_378;
        }
        else {
          cStack_324 = '\0';
          uStack_348 = 0;
          uStack_340 = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          uStack_338 = 0;
          uStack_330 = 0;
          uStack_368 = *(undefined8 *)(pfVar3 + -2);
          uStack_360 = *(undefined8 *)pfVar3;
          uStack_380 = CONCAT31(uStack_380._1_3_,1);
          uStack_388 = 0;
          FUN_1801aa0f0(flags,&uStack_368,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *pfVar3 = fVar20 + 0.01;
        pfVar5 = pfVar5 + 4;
        pfVar3 = pfVar3 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar4 = 0;
    lVar6 = 0;
    do {
      lVar7 = 0;
      if (uVar4 != 0x1f) {
        lVar7 = lVar6 + 1;
      }
      if (((handle2 == '\0') || ((uVar4 & 1) != 0)) &&
         (cVar1 = FUN_180635b80((double)((float)(int)uVar4 * 0.19634955),SUB84((double)param_6,0),
                                (double)param_7), cVar1 != '\0')) {
        fStack_370 = *(float *)(&uStack_2e0 + lVar7 * 2) - *(float *)(&uStack_2e0 + lVar6 * 2);
        uStack_378 = CONCAT44(afStack_2e8[lVar7 * 4 + 1] - afStack_2e8[lVar6 * 4 + 1],
                              afStack_2e8[lVar7 * 4] - afStack_2e8[lVar6 * 4]);
        uStack_36c = 0x7f7fffff;
        uStack_380 = 0;
        uStack_388 = CONCAT31(uStack_388._1_3_,handle1);
        FUN_180633110(handle,afStack_2e8 + lVar6 * 4,&uStack_378,param_8);
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar4 < 0x20);
  }
  iVar2 = _Mtx_unlock(handle);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  system_crypto_001(uStack_e8 ^ (ulonglong)auStack_3a8);
}
                    data_1ac76f654 = data_1ac76f654 + cVar12;
                    if (data_1ac76f654 != '\0' && bVar27 == data_1ac76f654 < '\0') {
                      out((short)flags,iVar11);
                      halt_baddata();
                    }
                    in_OF = SCARRY1((char)*unaff_RDI,cVar14);
                    *unaff_RDI = (code)((char)*unaff_RDI + cVar14);
                    in_SF = (char)*unaff_RDI < '\0';
                    in_ZF = *unaff_RDI == (code)0x0;
                    goto LAB_180767fd9;
                  }
                }
                pflags6 = puVar9;
                *(undefined **)((longlong)pflags6 + -8) = &unknown_18076804b;
                (*unaff_RDI)();
                *(undefined8 *)((longlong)pflags6 + -8) = 0x180768051;
                CoUninitialize();
LAB_180768051:
                *(undefined8 *)((longlong)pflags6 + -8) = 0x180768059;
                _endthreadex(0);
                return;
              }
              cVar14 = (char)*in_RAX;
            }
            in_RAX = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar10 + cVar14);
LAB_180768028_1:
            piVar2 = (int *)(((ulonglong)in_RAX & 0xffffffffffffff20) - 0x75);
            *piVar2 = *piVar2 + (int)handle;
            *(int *)(((ulonglong)in_RAX & 0xffffffffffffff20) - 0x17ffffff) = (int)pflags3;
            halt_baddata();
          }
        }
      }
    }
  }
  mutex_type = 0x266;
  *(undefined1 *)((longlong)register0x00000020 + 0x20) = 1;
LAB_18076802d:
  uVar7 = *(undefined8 *)(pcVar13 + 0x1a0);
  *(undefined1 **)((longlong)register0x00000020 + -8) = &LAB_180768039;
  FUN_180742250(uVar7,pcVar15,mutex_attr,mutex_type);
}
    data_180c2e030 = '\x01';
  }
  if (mutex_attr != (int *)0x0) {
    *mutex_attr = ((flags + 1) / 2) * 0x48d0;
  }
  if (mutex_type != (undefined4 *)0x0) {
    *mutex_type = 0x480;
  }
  return 0;
}
undefined8 FUN_1807c1ec0(int handle)
{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  uint uVar13;
  longlong *pinit_result4;
  longlong init_result5;
  uint uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined8 flags0;
  undefined8 extraout_XMM0_Qb;
  float fVar22;
  undefined1 in_XMM2 [16];
  undefined1 aflags1 [16];
  float fVar23;
  float fVar24;
  undefined1 unaff_XMM6 [16];
  undefined1 aflags5 [16];
  ulonglong uVar9;
  pinit_result4 = (longlong *)&data_180be5740;
  iVar18 = 0;
  do {
    uVar9 = 0;
    init_result5 = *pinit_result4;
    uVar16 = 0x10 >> ((byte)iVar18 & 0x1f);
    uVar13 = 0x40 >> ((byte)iVar18 & 0x1f);
    uVar10 = uVar9;
    uVar11 = uVar9;
    if ((uVar16 != 0) && (uVar10 = 0, 3 < uVar16)) {
      aflags1._0_4_ = (float)(int)uVar13;
      aflags1._4_4_ = aflags1._0_4_;
      aflags1._8_4_ = aflags1._0_4_;
      aflags1._12_4_ = aflags1._0_4_;
      uVar3 = uVar16 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      aflags5 = rcpps(unaff_XMM6,aflags1);
      fVar24 = aflags5._0_4_;
      fVar19 = aflags5._4_4_;
      fVar22 = aflags5._8_4_;
      fVar23 = aflags5._12_4_;
      unaff_XMM6._0_4_ = (fVar24 + fVar24) - fVar24 * fVar24 * aflags1._0_4_;
      unaff_XMM6._4_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * aflags1._0_4_;
      unaff_XMM6._8_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * aflags1._0_4_;
      unaff_XMM6._12_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * aflags1._0_4_;
      do {
        flags0 = thunk_FUN_1808fe1a0();
        aflags5._0_4_ = (float)flags0 * 2.0;
        aflags5._4_4_ = (float)((ulonglong)flags0 >> 0x20) * 2.0;
        aflags5._8_4_ = (float)extraout_XMM0_Qb * 2.0;
        aflags5._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * 2.0;
        uVar8 = (int)uVar9 + 4;
        uVar9 = (ulonglong)uVar8;
        aflags1 = rcpps(in_XMM2,aflags5);
        fVar24 = aflags1._0_4_;
        fVar19 = aflags1._4_4_;
        fVar22 = aflags1._8_4_;
        fVar23 = aflags1._12_4_;
        in_XMM2._0_4_ = (fVar24 + fVar24) - fVar24 * fVar24 * aflags5._0_4_;
        in_XMM2._4_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * aflags5._4_4_;
        in_XMM2._8_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * aflags5._8_4_;
        in_XMM2._12_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * aflags5._12_4_;
        *(undefined1 (*) [16])(init_result5 + uVar11 * 4) = in_XMM2;
        uVar11 = uVar11 + 4;
        uVar10 = uVar9;
      } while ((int)uVar8 < (int)(uVar16 - uVar3));
    }
    if ((int)uVar10 < (int)uVar16) {
      pfVar7 = (float *)(init_result5 + uVar11 * 4);
      fVar24 = 1.0 / (float)(int)uVar13;
      unaff_XMM6 = ZEXT416((uint)fVar24);
      do {
        fVar19 = (float)cosf(((float)(int)uVar10 * 6.2831855 + 3.1415927) * fVar24);
        uVar13 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar13;
        *pfVar7 = 0.5 / fVar19;
        pfVar7 = pfVar7 + 1;
      } while ((int)uVar13 < (int)uVar16);
    }
    iVar18 = iVar18 + 1;
    pinit_result4 = pinit_result4 + 1;
  } while (iVar18 < 5);
  piVar12 = (int *)0x180be5774;
  pfVar7 = (float *)0x180c2e040;
  _data_180c2e978 = 0x180c2e040;
  handle = -handle;
  iVar18 = 2;
  iVar17 = 0x100;
  init_result5 = 0x140;
  uVar13 = 0;
  do {
    uVar16 = uVar13;
    if (pfVar7 < (float *)0x180c2e880) {
      fVar24 = (float)piVar12[-1] * 1.5258789e-05 * (float)handle;
      *pfVar7 = fVar24;
      pfVar7[0x10] = fVar24;
    }
    pfVar5 = pfVar7 + -0x3ff;
    if (((byte)uVar16 & 0x1f) != 0x1f) {
      pfVar5 = pfVar7;
    }
    iVar6 = -handle;
    if (((byte)uVar16 & 0x3f) != 0x3f) {
      iVar6 = handle;
    }
    if (pfVar5 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)*piVar12 * 1.5258789e-05 * (float)iVar6;
      pfVar5[0x20] = fVar24;
      pfVar5[0x30] = fVar24;
    }
    bVar1 = (byte)iVar18;
    uVar13 = iVar18 - 1U & 0x1f;
    iVar2 = -iVar6;
    if ((bVar1 - 1 & 0x3f) != 0x3f) {
      iVar2 = iVar6;
    }
    lVar4 = -0xefc;
    if (uVar13 != 0x1f) {
      lVar4 = 0x100;
    }
    pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      lVar4 = -0xebc;
      if (uVar13 != 0x1f) {
        lVar4 = init_result5;
      }
      fVar24 = (float)piVar12[1] * 1.5258789e-05 * (float)iVar2;
      *pfVar7 = fVar24;
      *(float *)(lVar4 + (longlong)pfVar5) = fVar24;
    }
    if ((bVar1 & 0x1f) == 0x1f) {
      lVar4 = -0x1ef8;
      if (uVar13 != 0x1f) {
        lVar4 = -0xefc;
      }
      pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    }
    iVar6 = -iVar2;
    if ((bVar1 & 0x3f) != 0x3f) {
      iVar6 = iVar2;
    }
    if (pfVar7 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)piVar12[2] * 1.5258789e-05 * (float)iVar6;
      pfVar7[0x20] = fVar24;
      pfVar7[0x30] = fVar24;
    }
    uVar13 = iVar18 + 1U & 0x1f;
    lVar4 = -0xefc;
    iVar2 = -iVar6;
    if (((byte)(iVar18 + 1U) & 0x3f) != 0x3f) {
      iVar2 = iVar6;
    }
    if (uVar13 != 0x1f) {
      lVar4 = 0x100;
    }
    pfVar5 = (float *)(lVar4 + (longlong)pfVar7);
    if (pfVar5 < (float *)0x180c2e880) {
      lVar4 = -0xebc;
      if (uVar13 != 0x1f) {
        lVar4 = init_result5;
      }
      fVar24 = (float)piVar12[3] * 1.5258789e-05 * (float)iVar2;
      *pfVar5 = fVar24;
      *(float *)(lVar4 + (longlong)pfVar7) = fVar24;
    }
    if ((bVar1 + 2 & 0x1f) == 0x1f) {
      lVar4 = -0x1ef8;
      if (uVar13 != 0x1f) {
        lVar4 = -0xefc;
      }
      pfVar5 = (float *)(lVar4 + (longlong)pfVar7);
    }
    iVar6 = -iVar2;
    if ((bVar1 + 2 & 0x3f) != 0x3f) {
      iVar6 = iVar2;
    }
    if (pfVar5 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)piVar12[4] * 1.5258789e-05 * (float)iVar6;
      pfVar5[0x20] = fVar24;
      pfVar5[0x30] = fVar24;
    }
    uVar13 = iVar18 + 3U & 0x1f;
    lVar4 = -0xefc;
    iVar2 = -iVar6;
    if (((byte)(iVar18 + 3U) & 0x3f) != 0x3f) {
      iVar2 = iVar6;
    }
    if (uVar13 != 0x1f) {
      lVar4 = 0x100;
    }
    pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      lVar4 = -0xebc;
      if (uVar13 != 0x1f) {
        lVar4 = init_result5;
      }
      fVar24 = (float)piVar12[5] * 1.5258789e-05 * (float)iVar2;
      *pfVar7 = fVar24;
      *(float *)(lVar4 + (longlong)pfVar5) = fVar24;
    }
    if ((bVar1 + 4 & 0x1f) == 0x1f) {
      lVar4 = -0x1ef8;
      if (uVar13 != 0x1f) {
        lVar4 = -0xefc;
      }
      pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    }
    iVar6 = -iVar2;
    if ((bVar1 + 4 & 0x3f) != 0x3f) {
      iVar6 = iVar2;
    }
    if (pfVar7 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)piVar12[6] * 1.5258789e-05 * (float)iVar6;
      pfVar7[0x20] = fVar24;
      pfVar7[0x30] = fVar24;
    }
    handle = -iVar6;
    if ((bVar1 + 5 & 0x3f) != 0x3f) {
      handle = iVar6;
    }
    lVar4 = -0xefc;
    if ((bVar1 + 5 & 0x1f) != 0x1f) {
      lVar4 = 0x100;
    }
    uVar13 = uVar16 + 8;
    pfVar7 = (float *)(lVar4 + (longlong)pfVar7);
    iVar18 = iVar18 + 8;
    piVar12 = piVar12 + 8;
  } while (iVar18 < 0x102);
  if ((int)uVar13 < 0x200) {
    if (3 < (int)(0x200 - uVar13)) {
      uVar16 = uVar16 + 10;
      piVar12 = (int *)0x180be5b68;
      iVar17 = (0x3f - (0x1fc - uVar13 >> 2)) * 4;
      do {
        if (pfVar7 < (float *)0x180c2e880) {
          fVar24 = (float)piVar12[2] * 1.5258789e-05 * (float)handle;
          *pfVar7 = fVar24;
          pfVar7[0x10] = fVar24;
        }
        uVar3 = uVar13 & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        pfVar5 = pfVar7 + -0x3ff;
        if (uVar3 != 0x1f) {
          pfVar5 = pfVar7;
        }
        uVar3 = uVar13 & 0x8000003f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
        }
        iVar18 = -handle;
        if (uVar3 != 0x3f) {
          iVar18 = handle;
        }
        if (pfVar5 + 0x20 < (float *)0x180c2e880) {
          fVar24 = (float)piVar12[1] * 1.5258789e-05 * (float)iVar18;
          pfVar5[0x20] = fVar24;
          pfVar5[0x30] = fVar24;
        }
        uVar3 = uVar16 - 1 & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        uVar8 = uVar16 - 1 & 0x8000003f;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
        }
        iVar6 = -iVar18;
        if (uVar8 != 0x3f) {
          iVar6 = iVar18;
        }
        lVar4 = -0xefc;
        if (uVar3 != 0x1f) {
          lVar4 = 0x100;
        }
        pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
        if (pfVar7 < (float *)0x180c2e880) {
          lVar4 = -0xebc;
          if (uVar3 != 0x1f) {
            lVar4 = init_result5;
          }
          fVar24 = (float)*piVar12 * 1.5258789e-05 * (float)iVar6;
          *pfVar7 = fVar24;
          *(float *)(lVar4 + (longlong)pfVar5) = fVar24;
        }
        uVar8 = uVar16 & 0x8000001f;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
        }
        if (uVar8 == 0x1f) {
          lVar4 = -0x1ef8;
          if (uVar3 != 0x1f) {
            lVar4 = -0xefc;
          }
          pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
        }
        uVar3 = uVar16 & 0x8000003f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
        }
        iVar18 = -iVar6;
        if (uVar3 != 0x3f) {
          iVar18 = iVar6;
        }
        if (pfVar7 + 0x20 < (float *)0x180c2e880) {
          fVar24 = (float)piVar12[-1] * 1.5258789e-05 * (float)iVar18;
          pfVar7[0x20] = fVar24;
          pfVar7[0x30] = fVar24;
        }
        uVar3 = uVar16 + 1 & 0x8000003f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
        }
        handle = -iVar18;
        if (uVar3 != 0x3f) {
          handle = iVar18;
        }
        uVar3 = uVar16 + 1 & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        lVar4 = -0xefc;
        if (uVar3 != 0x1f) {
          lVar4 = 0x100;
        }
        piVar12 = piVar12 + -4;
        pfVar7 = (float *)(lVar4 + (longlong)pfVar7);
        uVar13 = uVar13 + 4;
        uVar16 = uVar16 + 4;
      } while ((int)uVar16 < 0x1ff);
    }
    if ((int)uVar13 < 0x200) {
      piVar12 = (int *)((longlong)iVar17 * 4 + 0x180be5770);
      do {
        if (pfVar7 < (float *)0x180c2e880) {
          fVar24 = (float)*piVar12 * 1.5258789e-05 * (float)handle;
          *pfVar7 = fVar24;
          pfVar7[0x10] = fVar24;
        }
        uVar16 = uVar13 & 0x8000003f;
        if ((int)uVar16 < 0) {
          uVar16 = (uVar16 - 1 | 0xffffffc0) + 1;
        }
        uVar3 = uVar13 & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        pfVar5 = pfVar7 + -0x3ff;
        if (uVar3 != 0x1f) {
          pfVar5 = pfVar7;
        }
        piVar12 = piVar12 + -1;
        uVar13 = uVar13 + 1;
        pfVar7 = pfVar5 + 0x20;
        iVar18 = -handle;
        if (uVar16 != 0x3f) {
          iVar18 = handle;
        }
        handle = iVar18;
      } while ((int)uVar13 < 0x200);
    }
  }
  return 0;
}
      data_180c2e030 = '\x01';
    }
    iVar4 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),*(undefined4 *)(unaff_RBX + 0x110),0);
    if ((iVar4 != 0) ||
       (iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),0x180c2ea70,1,
                              iStack0000000000000030 + 4), iVar4 != 0)) goto LAB_1807c2a3c;
    pflags = (uint *)(unaff_RBX + 0x1cc);
    iVar4 = FUN_1808156f0();
    if (iVar4 == 0) {
      *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + iStack0000000000000030 + 4;
      iVar4 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),0x180c2ea70,1);
      if (iVar4 != 0) goto LAB_1807c2a3c;
    }
    uVar3 = *(undefined4 *)(*(longlong *)(unaff_RBX + 8) + 8);
    *(undefined4 *)(*(longlong *)(unaff_RBX + 8) + 8) = 2;
    FUN_180815080();
    *(undefined4 *)(*(longlong *)(unaff_RBX + 8) + 8) = uVar3;
    iVar4 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),*(undefined4 *)(unaff_RBX + 0x110),0);
    if (iVar4 == 0) {
      if (*(int *)(unaff_RBX + 0x1c4) == iVar5) {
        *(undefined4 *)(unaff_RBX + 0x1c4) = 0x480;
      }
      uVar7 = iStack0000000000000030 + 5U & 0xfffffffe;
      if (((unaff_R12D & 0x4000) == 0) ||
         ((*(uint *)(*(longlong *)(unaff_RBX + 0x170) + 0x194) & 1) == 0)) {
        lVar6 = *(longlong *)(unaff_RBX + 8);
        if (*(int *)(lVar6 + 0x14) == -1) {
          *(undefined4 *)(lVar6 + 0x18) = 0xffffffff;
        }
        else if (*(char *)(unaff_RBX + 0x23c) == (char)unaff_R15) {
          *(uint *)(lVar6 + 0x18) =
               ((*(int *)(lVar6 + 0x14) + -1 + uVar7) / uVar7 + 1) * *(int *)(unaff_RBX + 0x1c4);
          *(uint *)(unaff_RBX + 0x2c) = *(uint *)(unaff_RBX + 0x2c) & 0xfffffffe;
        }
        else {
          *(uint *)(lVar6 + 0x18) = *pflags * 0x480;
        }
        goto LAB_1807c2ec7;
      }
      FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),*(undefined4 *)(unaff_RBX + 0x110),0);
      iVar4 = *(int *)(unaff_RBX + 0x1c4);
      uVar7 = 0;
      iVar5 = func_0x00018076a7d0(*(undefined8 *)(unaff_RBX + 0x170),&stack0x00000050);
      if (iVar5 == 0) {
        *pflags = 0;
        *(undefined4 *)(*(longlong *)(unaff_RBX + 8) + 0x18) = 0;
        if (*(int *)(*(longlong *)(unaff_RBX + 8) + 0x14) != 0) goto LAB_1807c2d40;
        goto LAB_1807c2e2d;
      }
    }
  }
  goto LAB_1807c2a43;
LAB_1807c2a3c:
  *(ulonglong *)(unaff_RBX + 0x178) = unaff_R15;
  goto LAB_1807c2a43;
  while( true ) {
    iVar5 = FUN_180815200();
    if ((iVar5 == 0) &&
       (in_stack_00000040._4_4_ + uVar7 < *(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14))) {
      if (*pflags <= (uint)unaff_R15) {
        uVar9 = *pflags + 1000;
        *pflags = uVar9;
        lVar6 = FUN_180742650(*(undefined8 *)(_data_180be12f0 + 0x1a0),
                              *(undefined8 *)(unaff_RBX + 0x1d0),uVar9 * 4,&unknown_18097c490,0x113);
        *(longlong *)(unaff_RBX + 0x1d0) = lVar6;
        if (lVar6 == 0) goto LAB_1807c2a43;
      }
      uVar8 = unaff_R15 & 0xffffffff;
      unaff_R15 = (ulonglong)((uint)unaff_R15 + 1);
      *(uint *)(*(longlong *)(unaff_RBX + 0x1d0) + uVar8 * 4) = uVar7;
      piVar1 = (int *)(*(longlong *)(unaff_RBX + 8) + 0x18);
      *piVar1 = *piVar1 + iVar4;
      uVar7 = uVar7 + 4 + in_stack_00000040._4_4_;
      iVar5 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),in_stack_00000040._4_4_,1);
      if (iVar5 != 0) break;
    }
    else {
      FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),0xfffffffd,1);
    }
    if (*(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14) <= uVar7) break;
LAB_1807c2d40:
    iVar5 = FUN_180769ed0(*(undefined8 *)(unaff_RBX + 0x170),&stack0x0000004c,1,4,0);
    if (iVar5 != 0) break;
  }
LAB_1807c2e2d:
  iVar4 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),in_stack_00000050,0);
  if (iVar4 == 0) {
    *pflags = (uint)unaff_R15;
    unaff_R15 = 0;
LAB_1807c2ec7:
    if (unaff_R13B != '\0') {
      iVar4 = *(int *)(*(longlong *)(unaff_RBX + 8) + 0x14);
      if (iVar4 != -1) {
        *(int *)(*(longlong *)(unaff_RBX + 8) + 0x14) = iVar4 - *(int *)(unaff_RBX + 0x110);
      }
    }
    if ((*(longlong *)(unaff_RBX + 0x1d0) != 0) && ((unaff_R12D & 0x4000) == 0)) {
      FUN_180742250(*(undefined8 *)(_data_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x1d0),
                    &unknown_18097c490,0x282,1);
    }
    *(ulonglong *)(unaff_RBX + 0x178) = unaff_R15;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 8) + 8) = 2;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 8) + 0x1c) = 0x480;
    FUN_180815ba0();
  }
LAB_1807c2a43:
  system_crypto_001(*(ulonglong *)(unaff_RBP + 0x4ab0) ^ (ulonglong)&stack0x00000000);
}
      data_180c30370 = '\x01';
    }
    if (((in_stack_00000040._4_4_ != unaff_R15D) ||
        (iVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x10))
                           (*(longlong **)(unaff_RDI + 0x170),(longlong)&stack0x00000040 + 4),
        iVar4 == 0)) &&
       (iVar4 = FUN_18076a440(*(undefined8 *)(unaff_RDI + 0x170),*(undefined4 *)(unaff_RDI + 0x110),
                              0), iVar4 == 0)) {
      memset(unaff_RDI + 0x178,0,0x330);
    }
  }
FUN_1807c3d8b:
  system_crypto_001(*(ulonglong *)(unaff_RBP + 0x218) ^ (ulonglong)&stack0x00000000);
}
      data_180c4f4e8 = 0;
      _data_180c4f4ac = uVar1;
      system_crypto_003(&data_180c4f4f0);
    }
  }
  return &data_180c4f4a0;
}
undefined8 FUN_1808c7260(undefined8 *handle,longlong flags,char mutex_attr,char mutex_type)
{
  int iVar1;
  uint flags;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulonglong uStackX_10;
  uint auStack_28 [2];
  ulonglong uStack_20;
  if (*(int *)(flags + 0x18) < *(int *)(*(longlong *)(flags + 0x10) + 0xb4)) {
LAB_1808c72a7:
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(flags + 0x10) + 0xbc);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 != 2) goto LAB_1808c72a7;
    uVar5 = 1;
  }
  puVar3 = (uint *)FUN_18084da10();
  uStack_20 = 0;
  uStackX_10 = uStackX_10 & 0xffffffffffffff00;
  auStack_28[0] = *puVar3;
  uVar4 = FUN_1808c6dd0(handle,*(undefined8 *)(flags + 0x10),auStack_28,&uStack_20,&uStackX_10);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((char)uStackX_10 == (char)uVar4) {
    return 0;
  }
  uStackX_10 = 0;
  puVar3 = (uint *)FUN_18084da10();
  flags = *(uint *)((longlong)handle + 0xc);
  if (((flags != *puVar3) && (*(uint *)(handle + 4) <= flags)) &&
     (flags < *(uint *)((longlong)handle + 0x24))) {
    if (flags == auStack_28[0]) {
      return 0x1c;
    }
    flags = func_0x000180856540(*handle,flags - *(int *)(handle + 1));
    uStackX_10 = flags + uStack_20;
    if (uStackX_10 == uStack_20) {
      uStackX_10 = uStack_20 + 1;
    }
  }
  FUN_18084da10();
  if (mutex_attr != '\0') {
    uVar4 = FUN_1808c7400(handle,flags,flags + 0x20,&uStack_20,&uStackX_10,uVar5,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(int *)(flags + 0x18) = *(int *)(flags + 0x18) + 1;
  }
  if (mutex_type == '\0') {
    return 0;
  }
  if (mutex_attr != '\0') {
    if (*(int *)(*(longlong *)(flags + 0x10) + 0xb4) <= *(int *)(flags + 0x18)) {
      iVar1 = *(int *)(*(longlong *)(flags + 0x10) + 0xbc);
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 == 2) {
        uVar5 = 1;
        goto LAB_1808c73b4;
      }
    }
    uVar5 = 0;
  }
LAB_1808c73b4:
  uVar4 = FUN_1808c7400(handle,flags,flags + 0x28,&uStack_20,&uStackX_10,uVar5,1);
  if ((int)uVar4 == 0) {
    *(int *)(flags + 0x18) = *(int *)(flags + 0x18) + 1;
    return 0;
  }
  return uVar4;
}
undefined8
FUN_1808c7400(longlong handle,longlong flags,longlong *mutex_attr,longlong *mutex_type,
             undefined8 *param_5,char param_6,char param_7)
{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lStackX_8;
  undefined1 auStack_28 [16];
  uVar6 = *(undefined8 *)(handle + 0x28);
  puVar4 = (undefined4 *)FUN_18084da10();
  lVar2 = *mutex_type;
  uVar9 = *puVar4;
  lVar8 = lVar2;
  if ((*(uint *)(flags + 0x1c) >> 1 & 1) != 0) {
    lVar8 = *mutex_attr;
    lVar7 = lVar2 - lVar8;
    uVar6 = *(undefined8 *)(handle + 0x30);
    if (-1 < lVar7) {
      if (lVar7 < 1) {
        uVar9 = 0;
        lVar8 = lVar2;
      }
      else {
        uVar1 = *(uint *)(*(longlong *)(*(longlong *)(handle + 0x38) + 8) + 0x774);
        if (uVar1 != 48000) {
          lVar7 = (lVar7 * 48000) / (longlong)(ulonglong)uVar1;
        }
        if (0xffffffff < lVar7) {
          lVar7 = 0xffffffff;
        }
        uVar9 = (undefined4)lVar7;
        lVar8 = lVar2;
      }
    }
  }
  if (param_6 != '\0') {
    (**(code **)(**(longlong **)(flags + 0x10) + 0x30))(*(longlong **)(flags + 0x10),auStack_28)
    ;
    uVar5 = FUN_1808d0850(uVar6,auStack_28,lVar8,
                          *(undefined4 *)(*(longlong *)(flags + 0x10) + 0xb4));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  uVar6 = FUN_1808ce360(uVar6,*(undefined8 *)(flags + 0x10),lVar8,*param_5,uVar9,0,0,&lStackX_8);
  if ((int)uVar6 == 0) {
    if (param_7 != (char)uVar6) {
      func_0x0001808cf230(lStackX_8,lVar8);
    }
    bVar3 = (byte)(*(uint *)(flags + 0x1c) >> 4) & 1;
    *(uint *)(lStackX_8 + 0x4c) =
         ~((bVar3 ^ 1) * 2) & ((uint)bVar3 + (uint)bVar3 | *(uint *)(lStackX_8 + 0x4c));
    uVar6 = 0;
  }
  return uVar6;
}
    data_180c4f818 = '\x01';
  }
  return 0;
}
undefined8 FUN_1808ee6c8(void)
{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 in_stack_00000030;
  func_0x0001808f62c0();
  func_0x0001808f62a0(free_exref);
  iVar2 = timeGetDevCaps(&stack0x00000030,8);
  uVar3 = 1;
  if (iVar2 == 0) {
    uVar3 = 1;
    if (1 < (uint)in_stack_00000030) {
      uVar3 = (uint)in_stack_00000030;
    }
  }
  func_0x0001808f6640(uVar3);
  cVar1 = FUN_1808f1d70();
  if (cVar1 == '\0') {
    return 0x809200ff;
  }
  data_180c4f818 = 1;
  return 0;
}
undefined8 FUN_1808ee714(void)
{
  return 0x809200ff;
}
undefined4 FUN_1808ee740(int handle,int flags,int mutex_attr)
{
  int iVar1;
  undefined4 flags;
  undefined4 auStack_18 [4];
  if (data_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (((flags != 0) || (mutex_attr != 0)) || (3 < handle - 1U)) {
    return 0x80920001;
  }
  iVar1 = FUN_1808f6cb0();
  if (iVar1 != 0) {
    return 0x809200ff;
  }
  iVar1 = FUN_1808f0650(handle,auStack_18);
  if (iVar1 < 0) {
    flags = 0x809200ff;
    if (iVar1 == -0x7ffeffff) {
      flags = 0x80920004;
    }
    func_0x0001808f6ce0();
    return flags;
  }
  func_0x0001808f6ce0();
  return auStack_18[0];
}
undefined8 FUN_1808ee7d0(undefined4 handle,uint *flags)
{
  longlong init_result;
  uint flags;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  byte abStackX_18 [8];
  longlong lStackX_20;
  if (data_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (flags == (uint *)0x0) {
    return 0x80920001;
  }
  iVar6 = FUN_1808f6cb0();
  if (iVar6 != 0) {
    return 0x809200ff;
  }
  iVar6 = func_0x0001808f0200(handle);
  if (iVar6 < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  FUN_1808ee390(flags);
  iVar6 = func_0x0001808f0760(handle,&lStackX_20);
  if (iVar6 == 0) {
    FUN_1808f6f40(handle,abStackX_18);
    if (*(longlong *)(lStackX_20 + 0x160) != 0) {
      cVar4 = func_0x0001808f2030();
      uVar7 = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0xc);
      if (cVar4 == '\0') {
        uVar7 = uVar7 & 0xffdefffe;
      }
      *flags = uVar7;
      *(undefined1 *)(flags + 1) = *(undefined1 *)(*(longlong *)(lStackX_20 + 0x160) + 0x10);
      *(undefined1 *)((longlong)flags + 5) =
           *(undefined1 *)(*(longlong *)(lStackX_20 + 0x160) + 0x11);
      *(undefined1 *)((longlong)flags + 6) =
           *(undefined1 *)(*(longlong *)(lStackX_20 + 0x160) + 0x12);
      *(undefined1 *)((longlong)flags + 7) =
           *(undefined1 *)(*(longlong *)(lStackX_20 + 0x160) + 0x13);
      *(undefined1 *)((longlong)flags + 9) =
           *(undefined1 *)(*(longlong *)(lStackX_20 + 0x160) + 0x15);
      *(undefined1 *)(flags + 2) = *(undefined1 *)(*(longlong *)(lStackX_20 + 0x160) + 0x14);
      if ((*(char *)(lStackX_20 + 0x68) == '\x01') && ((abStackX_18[0] & 8) != 0)) {
        init_result = *(longlong *)(lStackX_20 + 0x160);
        uVar7 = *(uint *)(init_result + 0x74);
        flags = *(uint *)(init_result + 0x78);
        uVar3 = *(uint *)(init_result + 0x7c);
        flags[3] = *(uint *)(init_result + 0x70);
        flags[4] = uVar7;
        flags[5] = flags;
        flags[6] = uVar3;
        flags[7] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x60);
        flags[8] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 100);
        flags[9] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x68);
        flags[10] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x54);
        flags[0xb] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x58);
        flags[0xc] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x5c);
      }
      else {
        func_0x0001808f6f90(flags + 3);
        func_0x0001808f6f70(flags + 7);
        func_0x0001808f6f80(flags + 10);
      }
      *(undefined1 *)(flags + 0x13) = 1;
      *(undefined1 *)(flags + 0x1a) = *(undefined1 *)(lStackX_20 + 1);
      *(undefined8 *)(flags + 0x14) = **(undefined8 **)(lStackX_20 + 0x160);
      init_result = *(longlong *)(lStackX_20 + 0x160);
      bVar5 = *(byte *)(init_result + 0x19);
      if (2 < *(byte *)(init_result + 0x19)) {
        bVar5 = 2;
      }
      iVar6 = 0;
      *(byte *)(flags + 0xd) = bVar5;
      if (*(char *)(init_result + 0x19) != '\0') {
        puVar8 = (undefined2 *)((longlong)flags + 0x3e);
        puVar9 = (undefined2 *)(init_result + 0x1e);
        do {
          iVar6 = iVar6 + 1;
          puVar8[-1] = puVar9[-1];
          *puVar8 = *puVar9;
          *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + -2);
          puVar8 = puVar8 + 4;
          puVar9 = puVar9 + 3;
        } while (iVar6 < (int)(uint)*(byte *)(init_result + 0x19));
      }
    }
  }
  func_0x0001808f6ce0();
  return 0;
}
int FUN_1808eea10(undefined4 handle,byte *flags)
{
  char cVar1;
  int iVar2;
  longlong lVar3;
  if (data_180c4f818 == '\0') {
    return -0x7f6dfffb;
  }
  if (flags == (byte *)0x0) {
    return -0x7f6dffff;
  }
  iVar2 = FUN_1808f6cb0();
  if (iVar2 != 0) {
    return -0x7f6dff01;
  }
  iVar2 = func_0x0001808f0200(handle);
  if (iVar2 < 0) {
    func_0x0001808f6ce0();
    return -0x7f6dfffd;
  }
  lVar3 = func_0x0001808f0dd0(handle,0);
  if (lVar3 != 0) {
    cVar1 = func_0x0001808f0e30(*(undefined2 *)(lVar3 + 2),*(undefined2 *)(lVar3 + 4));
    if ((((cVar1 == '\0') && (*flags < 0xd)) && (flags[1] < 0xd)) && (flags[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    iVar2 = FUN_1808ef250(handle,flags);
    if (-1 < iVar2) {
      *(byte *)(lVar3 + 0x23e8) = *flags;
      *(byte *)(lVar3 + 0x23e9) = flags[1];
      *(byte *)(lVar3 + 0x23ea) = flags[2];
      *(byte *)(lVar3 + 0x23ec) = *flags;
      *(byte *)(lVar3 + 0x23ed) = flags[1];
      *(byte *)(lVar3 + 0x23ee) = flags[2];
      func_0x0001808f6ce0();
      return iVar2;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int FUN_1808eea88(void)
{
  char cVar1;
  int iVar2;
  longlong lVar3;
  byte *unaff_RBX;
  undefined4 unaff_ESI;
  lVar3 = func_0x0001808f0dd0(unaff_ESI);
  if (lVar3 != 0) {
    cVar1 = func_0x0001808f0e30(*(undefined2 *)(lVar3 + 2),*(undefined2 *)(lVar3 + 4));
    if ((((cVar1 == '\0') && (*unaff_RBX < 0xd)) && (unaff_RBX[1] < 0xd)) && (unaff_RBX[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    iVar2 = FUN_1808ef250(unaff_ESI);
    if (-1 < iVar2) {
      *(byte *)(lVar3 + 0x23e8) = *unaff_RBX;
      *(byte *)(lVar3 + 0x23e9) = unaff_RBX[1];
      *(byte *)(lVar3 + 0x23ea) = unaff_RBX[2];
      *(byte *)(lVar3 + 0x23ec) = *unaff_RBX;
      *(byte *)(lVar3 + 0x23ed) = unaff_RBX[1];
      *(byte *)(lVar3 + 0x23ee) = unaff_RBX[2];
      func_0x0001808f6ce0();
      return iVar2;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int FUN_1808eeadc(void)
{
  int iVar1;
  undefined1 *unaff_RBX;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  iVar1 = FUN_1808ef250(unaff_ESI);
  if (-1 < iVar1) {
    *(undefined1 *)(unaff_RDI + 0x23e8) = *unaff_RBX;
    *(undefined1 *)(unaff_RDI + 0x23e9) = unaff_RBX[1];
    *(undefined1 *)(unaff_RDI + 0x23ea) = unaff_RBX[2];
    *(undefined1 *)(unaff_RDI + 0x23ec) = *unaff_RBX;
    *(undefined1 *)(unaff_RDI + 0x23ed) = unaff_RBX[1];
    *(undefined1 *)(unaff_RDI + 0x23ee) = unaff_RBX[2];
    func_0x0001808f6ce0();
    return iVar1;
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
undefined8 FUN_1808eeb3d(void)
{
  func_0x0001808f6ce0();
  return 0x809200ff;
}
          data_180c58840 = bVar1;
          *flags = iVar3;
          *(int *)(lVar4 + 0x10) = iVar3;
          *(int *)(lVar4 + 0x18) = iVar5;
          func_0x0001808f0b40(lVar4);
          return 0;
        }
        lVar4 = lVar4 + 0x2408;
      } while (lVar4 < 0x180c58840);
      return 0x8001002d;
    }
  }
  bVar1 = data_180c58840 + 1;
  if (bVar1 == 0) {
    bVar1 = data_180c58840 + 2;
  }
  iVar3 = (uint)bVar1 * 0x100 + iVar5;
  data_180c58840 = bVar1;
  *flags = iVar3;
  *piVar2 = iVar3;
  piVar2[2] = iVar5;
  func_0x0001808f0b40(piVar2 + -4);
  return 0;
}
longlong FUN_1808f07b0(void)
{
  uint uVar1;
  uVar1 = timeGetTime();
  return (ulonglong)uVar1 * 1000;
}
uint FUN_1808f07d0(longlong handle,int flags,int mutex_attr,char mutex_type)
{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uVar5 = 0;
  uVar6 = 0;
  iVar3 = 0;
  iVar4 = iVar3;
  if (0 < mutex_attr) {
    do {
      bVar2 = (byte)flags & 7;
      iVar4 = flags;
      if (flags < 0) {
        iVar4 = flags + 7;
        bVar2 = bVar2 - 8;
      }
      flags = flags + 1;
      uVar6 = *(byte *)((iVar4 >> 3) + handle) >> (bVar2 & 0x1f) & 1;
      iVar4 = iVar3 + 1;
      uVar5 = uVar5 | uVar6 << ((byte)iVar3 & 0x1f);
      iVar3 = iVar4;
    } while (iVar4 < mutex_attr);
  }
  if (((mutex_type != '\0') && (uVar6 != 0)) && (iVar4 < 0x20)) {
    bVar2 = (byte)iVar4 & 0x1f;
    uVar6 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    uVar1 = (ulonglong)(0x20 - iVar4);
    do {
      uVar5 = uVar5 | uVar6;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return uVar5;
}
  data_180c58854 = 1;
  data_180c58853 = 1;
  data_180c58855 = 1;
  data_180c58850 = 1;
  _data_180c698c0 = _beginthread(FUN_1808f4a70,0,0);
  if ((_data_180c698c0 != -1) &&
     (_data_180c698c8 = _beginthread(FUN_1808f34b0,0,0), _data_180c698c8 != -1)) {
    return 1;
  }
  return 0;
}
  data_180c69e20 = 1;
  return;
}
undefined4 FUN_1808f6da0(byte handle,byte *flags,int mutex_attr)
{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  mutex_attr = mutex_attr + -4;
  puVar1 = (uint *)(flags + mutex_attr);
  uVar3 = *(uint *)(&unknown_18098a100 + (ulonglong)(byte)~handle * 4) ^ 0xffffff;
  for (; 0 < mutex_attr; mutex_attr = mutex_attr + -1) {
    bVar2 = *flags;
    flags = flags + 1;
    uVar3 = *(uint *)(&unknown_18098a100 + (ulonglong)(byte)(bVar2 ^ (byte)uVar3) * 4) ^ uVar3 >> 8;
  }
  return CONCAT31((int3)(~uVar3 >> 8),*puVar1 != ~uVar3);
}
float * FUN_1808f6e00(float *handle,float *flags,float *mutex_attr)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  fVar1 = *mutex_attr;
  fVar2 = handle[3];
  fVar3 = handle[1];
  fVar4 = *handle;
  fVar5 = mutex_attr[1];
  fVar6 = handle[2];
  fVar7 = mutex_attr[2];
  fVar8 = mutex_attr[3];
  *flags = (fVar4 * fVar8 + fVar1 * fVar2 + fVar3 * fVar7) - fVar6 * fVar5;
  flags[1] = (fVar3 * fVar8 + fVar5 * fVar2 + fVar6 * fVar1) - fVar7 * fVar4;
  flags[3] = ((fVar8 * fVar2 - fVar4 * fVar1) - fVar5 * fVar3) - fVar6 * fVar7;
  flags[2] = (fVar6 * fVar8 + fVar7 * fVar2 + fVar5 * fVar4) - fVar3 * fVar1;
  return flags;
}
undefined8 FUN_1808f6f40(undefined8 handle,undefined4 *flags)
{
  longlong init_result;
  init_result = func_0x0001808f0dd0(handle,0);
  if (init_result != 0) {
    *flags = *(undefined4 *)(init_result + 100);
    return 0;
  }
  return 0x8001002d;
}
      data_180bf0080 = '\0';
      if (_data_180c69f88 == 0) {
        lVar6 = FUN_1808f9200(&unknown_18098ab30);
        if (lVar6 != 0) {
          lVar7 = LoadLibraryExW(lVar6,0,0);
        }
        LocalFree(lVar6);
        _data_180c69f88 = lVar7;
        if (lVar7 == 0) goto LAB_1808fa963;
      }
      if ((((_data_180c69f90 == (code *)0x0) &&
           (_data_180c69f90 = (code *)GetProcAddress(_data_180c69f88,&unknown_18098aef8),
           _data_180c69f90 == (code *)0x0)) ||
          ((_data_180c69f98 == 0 &&
           (_data_180c69f98 = GetProcAddress(_data_180c69f88,&unknown_18098af08), _data_180c69f98 == 0))))
         || ((_data_180c69fa8 == 0 &&
             (_data_180c69fa8 = GetProcAddress(_data_180c69f88,&unknown_18098af18), _data_180c69fa8 == 0)))
         ) goto LAB_1808fa963;
      if ((_data_180c69fd0 == 0) &&
         (_data_180c69fd0 = FUN_1808f9de0(&unknown_18098af28,0), _data_180c69fd0 != 0)) {
        _data_180c69fd8 = (code *)GetProcAddress(_data_180c69fd0,&unknown_18098af40);
      }
      pcVar2 = _data_180c69fd8;
      if (_data_180c69fd8 == (code *)0x0) goto LAB_1808fa963;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      _guard_check_icall(_data_180c69fd8);
      iVar5 = (*pcVar2)(&uStack_1d0,&uStack_198,0x27);
      if (iVar5 != 0x27) goto LAB_1808fa963;
      for (puVar11 = auStack_1c0; pcVar2 = _data_180c69f90, uVar10 = *puVar11, uVar10 != 0;
          puVar11 = puVar11 + 1) {
        uStack_1d8 = 0;
        _guard_check_icall(_data_180c69f90);
        puStack_208 = &uStack_1d8;
        iVar5 = (*pcVar2)(0xffffffff80000002,&unknown_18098af50,0,uVar10 | 0x20019);
        if (iVar5 == 0) {
          uStack_1e8 = 0x80;
          uStack_1e4 = 4;
          memset(auStack_148,0,0x100);
        }
      }
    }
    if (data_180c69ef8 == '\0') {
      SetLastError(flags & 0xffffffff);
      goto LAB_1808fa963;
    }
  }
  OutputDebugStringW(&unknown_18098afa0);
  SetLastError(0);
LAB_1808fa963:
  system_crypto_001(uStack_48 ^ (ulonglong)auStack_228);
}
          data_180c6a14c = iVar3 == 1;
          SetConsoleTitleA(&unknown_18098b4e0);
        }
      }
      data_180c6a14d = data_180c6a14c == '\0';
      if (_data_180c6a140 == 0) {
        lVar4 = _wfsopen(handle,&unknown_18098b51c,0x40);
        if (lVar4 == 0) {
          FUN_1808fb790(&unknown_18098b490,0xc1,&unknown_18098b470,&unknown_18098b520,handle);
          bVar10 = false;
        }
        else {
          fclose(lVar4);
          FUN_1808fb9a0(&unknown_18098b490,200,&unknown_18098b470,&unknown_18098b580,handle);
          lVar6 = _wcsdup(handle);
          lVar4 = -1;
          if (lVar6 != 0) {
            do {
              lVar7 = lVar4;
              lVar4 = lVar7 + 1;
            } while (*(short *)(handle + 2 + lVar7 * 2) != 0);
            lVar4 = lVar7;
            while( true ) {
              lVar9 = 0;
              if (((lVar4 == 0) || (sVar1 = *(short *)(lVar6 + lVar4 * 2), lVar9 = 0, sVar1 == 0x2f)
                  ) || (lVar9 = 0, sVar1 == 0x5c)) goto LAB_1808fbdeb;
              if (sVar1 == 0x2e) break;
              lVar4 = lVar4 + -1;
            }
            *(undefined2 *)(lVar6 + lVar4 * 2) = 0;
            lVar9 = lVar6 + 2 + lVar4 * 2;
LAB_1808fbdeb:
            lVar7 = lVar7 + 9;
            lVar4 = malloc(lVar7 * 2);
            if (lVar4 == 0) {
              free(lVar6);
              return false;
            }
            iVar3 = 1;
            lVar2 = _data_180c6a140;
            do {
              _data_180c6a140 = lVar2;
              if (lVar9 == 0) {
                FUN_1808fba20(lVar4,lVar7,&unknown_18098b5f8,lVar6,iVar3);
              }
              else {
                FUN_1808fba20(lVar4,lVar7,&unknown_18098b5d8,lVar6,iVar3,lVar9);
              }
              _data_180c6a140 = _wfsopen(lVar4,puVar8,0x20);
              if (_data_180c6a140 != 0) {
                puVar8 = &unknown_18098b610;
                uVar5 = 0xeb;
                handle = lVar4;
                goto LAB_1808fbebe;
              }
              iVar3 = iVar3 + 1;
              lVar2 = 0;
            } while (iVar3 < 9);
            puVar8 = &unknown_18098b640;
            uVar5 = 0xef;
LAB_1808fbebe:
            FUN_1808fb790(&unknown_18098b490,uVar5,&unknown_18098b470,puVar8,handle);
            free(lVar6);
            free(lVar4);
          }
          bVar10 = _data_180c6a140 != 0;
        }
      }
      else {
        FUN_1808fb790(&unknown_18098b490,0xb4,&unknown_18098b470,&unknown_18098b4e8,handle);
        bVar10 = true;
      }
      return bVar10;
    }
  }
  data_180c6a14d = data_180c6a14c == '\0';
  return true;
}
bool FUN_1808fbc0e(void)
{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char unaff_SIL;
  longlong unaff_RDI;
  short sVar10;
  longlong unaff_R12;
  undefined *puVar11;
  bool bVar12;
  uint in_stack_00000090;
  uint in_stack_00000098;
  if (unaff_RDI != 0) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
      sVar10 = (short)unaff_R12;
    } while (*(short *)(unaff_RDI + lVar5 * 2) != sVar10);
    if (lVar5 != 0) {
      puVar11 = &unknown_18098b464;
      if (unaff_SIL != '\0') {
        puVar11 = &unknown_18098b45c;
      }
      _data_180c6a140 = _wfsopen();
      if ((1 < _data_180c6a148) && ((uint)unaff_R12 < in_stack_00000090)) {
        uVar6 = GetConsoleWindow();
        in_stack_00000098 = (uint)unaff_R12;
        GetWindowThreadProcessId(uVar6,&stack0x00000098);
        uVar3 = GetCurrentProcessId();
        if (uVar3 != in_stack_00000098) {
          iVar4 = AllocConsole();
          data_180c6a14c = iVar4 == 1;
          SetConsoleTitleA(&unknown_18098b4e0);
        }
      }
      data_180c6a14d = data_180c6a14c == (char)unaff_R12;
      if (_data_180c6a140 == unaff_R12) {
        lVar5 = _wfsopen();
        if (lVar5 == 0) {
          FUN_1808fb790(&unknown_18098b490,0xc1,&unknown_18098b470,&unknown_18098b520);
          bVar12 = false;
        }
        else {
          fclose(lVar5);
          FUN_1808fb9a0(&unknown_18098b490,200,&unknown_18098b470,&unknown_18098b580);
          lVar7 = _wcsdup();
          lVar5 = -1;
          if (lVar7 != 0) {
            do {
              lVar9 = lVar5;
              lVar5 = lVar9 + 1;
              lVar8 = lVar9;
            } while (*(short *)(unaff_RDI + 2 + lVar9 * 2) != sVar10);
            while( true ) {
              lVar5 = unaff_R12;
              if (((lVar8 == 0) || (sVar1 = *(short *)(lVar7 + lVar8 * 2), sVar1 == 0x2f)) ||
                 (sVar1 == 0x5c)) goto LAB_1808fbdeb;
              if (sVar1 == 0x2e) break;
              lVar8 = lVar8 + -1;
            }
            *(short *)(lVar7 + lVar8 * 2) = sVar10;
            lVar5 = lVar7 + 2 + lVar8 * 2;
LAB_1808fbdeb:
            lVar9 = lVar9 + 9;
            lVar8 = malloc(lVar9 * 2);
            if (lVar8 == 0) {
              free(lVar7);
              return false;
            }
            iVar4 = 1;
            lVar2 = _data_180c6a140;
            do {
              _data_180c6a140 = lVar2;
              if (lVar5 == 0) {
                FUN_1808fba20(lVar8,lVar9,&unknown_18098b5f8,lVar7,iVar4);
              }
              else {
                FUN_1808fba20(lVar8,lVar9,&unknown_18098b5d8,lVar7,iVar4);
              }
              _data_180c6a140 = _wfsopen(lVar8,puVar11,0x20);
              if (_data_180c6a140 != 0) {
                puVar11 = &unknown_18098b610;
                uVar6 = 0xeb;
                goto LAB_1808fbebe;
              }
              iVar4 = iVar4 + 1;
              lVar2 = 0;
            } while (iVar4 < 9);
            puVar11 = &unknown_18098b640;
            uVar6 = 0xef;
LAB_1808fbebe:
            FUN_1808fb790(&unknown_18098b490,uVar6,&unknown_18098b470,puVar11);
            free(lVar7);
            free(lVar8);
          }
          bVar12 = _data_180c6a140 != unaff_R12;
        }
      }
      else {
        FUN_1808fb790(&unknown_18098b490,0xb4,&unknown_18098b470,&unknown_18098b4e8);
        bVar12 = true;
      }
      return bVar12;
    }
  }
  data_180c6a14d = data_180c6a14c == (char)unaff_R12;
  return true;
}
bool FUN_1808fbd52(void)
{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong unaff_RBX;
  longlong lVar7;
  longlong unaff_RDI;
  undefined *puVar8;
  longlong unaff_R12;
  longlong lVar9;
  fclose();
  FUN_1808fb9a0(&unknown_18098b490,200,&unknown_18098b470,&unknown_18098b580);
  lVar3 = _wcsdup();
  if (lVar3 != 0) {
    do {
      lVar7 = unaff_RBX;
      unaff_RBX = lVar7 + 1;
      lVar4 = lVar7;
    } while (*(short *)(unaff_RDI + 2 + lVar7 * 2) != (short)unaff_R12);
    while( true ) {
      lVar9 = unaff_R12;
      if (((lVar4 == 0) || (sVar1 = *(short *)(lVar3 + lVar4 * 2), sVar1 == 0x2f)) ||
         (sVar1 == 0x5c)) goto LAB_1808fbdeb;
      if (sVar1 == 0x2e) break;
      lVar4 = lVar4 + -1;
    }
    *(short *)(lVar3 + lVar4 * 2) = (short)unaff_R12;
    lVar9 = lVar3 + 2 + lVar4 * 2;
LAB_1808fbdeb:
    lVar7 = lVar7 + 9;
    lVar4 = malloc(lVar7 * 2);
    if (lVar4 == 0) {
      free(lVar3);
      return false;
    }
    iVar6 = 1;
    lVar2 = _data_180c6a140;
    do {
      _data_180c6a140 = lVar2;
      if (lVar9 == 0) {
        FUN_1808fba20(lVar4,lVar7,&unknown_18098b5f8,lVar3,iVar6);
      }
      else {
        FUN_1808fba20(lVar4,lVar7,&unknown_18098b5d8,lVar3,iVar6);
      }
      _data_180c6a140 = _wfsopen(lVar4);
      if (_data_180c6a140 != 0) {
        puVar8 = &unknown_18098b610;
        uVar5 = 0xeb;
        goto LAB_1808fbebe;
      }
      iVar6 = iVar6 + 1;
      lVar2 = 0;
    } while (iVar6 < 9);
    puVar8 = &unknown_18098b640;
    uVar5 = 0xef;
LAB_1808fbebe:
    FUN_1808fb790(&unknown_18098b490,uVar5,&unknown_18098b470,puVar8);
    free(lVar3);
    free(lVar4);
  }
  return _data_180c6a140 != unaff_R12;
}
  data_180c6a14d = data_180c6a14c == unaff_R12B;
  return 1;
}
    data_180bf0082 = '\x01';
    wcscpy_s(auStack_228,0x104,handle);
    if ((data_180bf0082 != '\0') && (wcscat_s(auStack_228,0x104,flags), data_180bf0082 != '\0')) {
      FUN_1808fbae0(auStack_228,0);
    }
    _set_invalid_parameter_handler(uVar1);
  }
  system_crypto_001(uStack_18 ^ (ulonglong)auStack_248);
}
  data_180bf0082 = '\x01';
  wcscpy_s(auStackX_20,0x104);
  if (data_180bf0082 != '\0') {
    wcscat_s(auStackX_20,0x104);
    if (data_180bf0082 != '\0') {
      FUN_1808fbae0(auStackX_20,0);
    }
  }
  _set_invalid_parameter_handler(uVar1);
  system_crypto_001(in_stack_00000230 ^ (ulonglong)&stack0x00000000);
}
    data_180c821d8 = 1;
  }
  FUN_1808fd254();
  cVar1 = func_0x0001800467e0();
  if (cVar1 != '\0') {
    cVar1 = func_0x0001800467e0();
    if (cVar1 != '\0') {
      return 1;
    }
    func_0x0001800467e0(0);
  }
  return 0;
}
undefined8 FUN_1808fc60c(uint handle)
{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  if (data_180c821d9 == '\0') {
    if (1 < handle) {
      FUN_1808fd610(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    iVar3 = func_0x0001808fd8d4();
    if ((iVar3 == 0) || (handle != 0)) {
      bVar2 = 0x40 - ((byte)_data_180bf00a8 & 0x3f) & 0x3f;
      _data_180c821e0 = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ _data_180bf00a8;
      uRam0000000180c821e8 = _data_180c821e0;
      _data_180c821f0 = _data_180c821e0;
      _data_180c821f8 = _data_180c821e0;
      uRam0000000180c82200 = _data_180c821e0;
      _data_180c82208 = _data_180c821e0;
    }
    else {
      iVar3 = _initialize_onexit_table(&data_180c821e0);
      if ((iVar3 != 0) || (iVar3 = _initialize_onexit_table(&data_180c821f8), iVar3 != 0)) {
        return 0;
      }
    }
    data_180c821d9 = '\x01';
  }
  return 1;
}
ulonglong FUN_1808fc6e4(longlong handle)
{
  ulonglong uVar1;
  uint7 flags;
  IMAGE_SECTION_HEADER *pIVar3;
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_1800002a0; pIVar3 != (IMAGE_SECTION_HEADER *)&unknown_1800003e0;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= handle - 0x180000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       handle - 0x180000000U < uVar1)) goto LAB_1808fc75b;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1808fc75b:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    flags = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)flags << 8;
    }
    else {
      uVar1 = CONCAT71(flags,1);
    }
  }
  return uVar1;
}
    data_180c91d50 = '\0';
  }
  return;
}
  data_180bfc100 = 0;
  return;
}
  data_180bfc170 = 0;
  return;
}
    data_180c95ef0 = '\0';
  }
  return;
}
    data_180c96008 = '\0';
  }
  return;
}
    data_180c96028 = '\0';
  }
  return;
}
    data_180c96048 = '\0';
  }
  return;
}
    data_180c96068 = '\0';
  }
  return;
}
    data_180c96098 = '\0';
  }
  return;
}
    data_180c960b8 = '\0';
  }
  return;
}
    data_180c96100 = '\0';
  }
  return;
}
    data_180c96140 = '\0';
  }
  return;
}
    data_180c961d8 = '\0';
  }
  return;
}
    data_180c95f28 = '\0';
  }
  return;
}
    data_180c95fe8 = '\0';
  }
  return;
}
    data_180c96210 = '\0';
  }
  return;
}

#endif // DATA_DEFINITIONS_H
