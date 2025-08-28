#include "TaleWorlds.Native.Split.h"

// 01_initialization_part007.c - 31 个初始化函数
// 转译版本 - 所有FUN_*、DAT_*、UNK_*标识符已转译为语义化名称

// 函数: 注册组件节点 - 类型1 (FUN_180037780)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type1(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_768,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_768,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4770584fbb1df897;  // 组件类型标识符
  previous_node[7] = 0x47f249e43f66f2ab;  // 组件版本信息
  previous_node[8] = &component_interface_7a0;  // 接口指针
  previous_node[9] = 1;  // 启用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型2 (FUN_180037880)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type2(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_9b8,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_9b8,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4666df49b97e0f10;  // 组件类型标识符
  previous_node[7] = 0x4e4b0d63a6ad1d8f;  // 组件版本信息
  previous_node[8] = &component_interface_7b8;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型3 (FUN_180037980)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type3(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_940,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_940,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x46ecbd4daf41613e;  // 组件类型标识符
  previous_node[7] = 0xdc42c056bbde8482;  // 组件版本信息
  previous_node[8] = &component_interface_7c8;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型4 (FUN_180037a80)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type4(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_918,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_918,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4c868a42644030f6;  // 组件类型标识符
  previous_node[7] = 0xc29193aa9d9b35b9;  // 组件版本信息
  previous_node[8] = &component_interface_7d8;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型5 (FUN_180037b80)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type5(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_968,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_968,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x40ea3a798283cbbb;  // 组件类型标识符
  previous_node[7] = 0x7f74eb2c5a7fadae;  // 组件版本信息
  previous_node[8] = &component_interface_7f0;  // 接口指针
  previous_node[9] = 3;  // 优先级标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型6 (FUN_180037c80)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type6(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_990,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_990,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x45b8d074df27d12f;  // 组件类型标识符
  previous_node[7] = 0x8d98f4c06880eda4;  // 组件版本信息
  previous_node[8] = &component_interface_810;  // 接口指针
  previous_node[9] = 3;  // 优先级标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型7 (FUN_180037d80)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type7(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_9e0,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_9e0,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x42d293584c8cf3e5;  // 组件类型标识符
  previous_node[7] = 0x355ffeb2d29e668a;  // 组件版本信息
  previous_node[8] = &component_interface_870;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 带回调类型1 (FUN_180037e80)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性和回调函数
void register_component_node_with_callback1(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  code *callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = component_callback_73930;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_8f0,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_8f0,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x421c3cedd07d816d;  // 组件类型标识符
  previous_node[7] = 0xbec25de793b7afa6;  // 组件版本信息
  previous_node[8] = &component_interface_880;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型8 (FUN_180037f80)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type8(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_8c8,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_8c8,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4c22bb0c326587ce;  // 组件类型标识符
  previous_node[7] = 0x5e3cf00ce2978287;  // 组件版本信息
  previous_node[8] = &component_interface_898;  // 接口指针
  previous_node[9] = 1;  // 启用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 带回调类型2 (FUN_180038080)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性和回调函数
void register_component_node_with_callback2(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  code *callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = component_callback_25e330;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_d48,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_d48,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x45425dc186a5d575;  // 组件类型标识符
  previous_node[7] = 0xfab48faa65382fa5;  // 组件版本信息
  previous_node[8] = &component_interface_460;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册系统字符串 - 类型1 (FUN_180038180)
// 功能: 注册系统字符串到全局字符串表，长度为9字节
void register_system_string_type1(void)

{
  undefined8 in_R9;
  undefined *string_table_ptr;
  undefined1 *string_buffer;
  undefined4 string_length;
  undefined1 local_buffer [136];
  
  string_table_ptr = &system_string_table_cc28;
  string_buffer = local_buffer;
  local_buffer[0] = 0;
  string_length = 9;
  strcpy_s(local_buffer,0x80,&system_string_data_194f0,in_R9,0xfffffffffffffffe);
  global_string_ptr_ef8 = register_string_to_table(&string_table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册系统字符串 - 类型2 (FUN_180038210)
// 功能: 注册系统字符串到全局字符串表，长度为8字节
void register_system_string_type2(void)

{
  undefined8 in_R9;
  undefined *string_table_ptr;
  undefined1 *string_buffer;
  undefined4 string_length;
  undefined1 local_buffer [136];
  
  string_table_ptr = &system_string_table_cc28;
  string_buffer = local_buffer;
  local_buffer[0] = 0;
  string_length = 8;
  strcpy_s(local_buffer,0x80,&system_string_data_19588,in_R9,0xfffffffffffffffe);
  global_string_ptr_efc = register_string_to_table(&string_table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册系统字符串 - 类型3 (FUN_1800382a0)
// 功能: 注册系统字符串到全局字符串表，长度为11字节
void register_system_string_type3(void)

{
  undefined8 in_R9;
  undefined *string_table_ptr;
  undefined1 *string_buffer;
  undefined4 string_length;
  undefined1 local_buffer [136];
  
  string_table_ptr = &system_string_table_cc28;
  string_buffer = local_buffer;
  local_buffer[0] = 0;
  string_length = 0xb;
  strcpy_s(local_buffer,0x80,&system_string_data_19bf0,in_R9,0xfffffffffffffffe);
  global_string_ptr_f00 = register_string_to_table(&string_table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册系统字符串 - 类型4 (FUN_180038330)
// 功能: 注册系统字符串到全局字符串表，长度为13字节
void register_system_string_type4(void)

{
  undefined8 in_R9;
  undefined *string_table_ptr;
  undefined1 *string_buffer;
  undefined4 string_length;
  undefined1 local_buffer [136];
  
  string_table_ptr = &system_string_table_cc28;
  string_buffer = local_buffer;
  local_buffer[0] = 0;
  string_length = 0xd;
  strcpy_s(local_buffer,0x80,&system_string_data_19df0,in_R9,0xfffffffffffffffe);
  global_string_ptr_f04 = register_string_to_table(&string_table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册系统字符串 - 类型5 (FUN_1800383c0)
// 功能: 注册系统字符串到全局字符串表，长度为28字节
void register_system_string_type5(void)

{
  undefined8 in_R9;
  undefined *string_table_ptr;
  undefined1 *string_buffer;
  undefined4 string_length;
  undefined1 local_buffer [136];
  
  string_table_ptr = &system_string_table_cc28;
  string_buffer = local_buffer;
  local_buffer[0] = 0;
  string_length = 0x1c;
  strcpy_s(local_buffer,0x80,&system_string_data_1a450,in_R9,0xfffffffffffffffe);
  global_string_ptr_f08 = register_string_to_table(&string_table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册系统字符串 - 类型6 (FUN_180038450)
// 功能: 注册系统字符串到全局字符串表，长度为21字节
void register_system_string_type6(void)

{
  undefined8 in_R9;
  undefined *string_table_ptr;
  undefined1 *string_buffer;
  undefined4 string_length;
  undefined1 local_buffer [136];
  
  string_table_ptr = &system_string_table_cc28;
  string_buffer = local_buffer;
  local_buffer[0] = 0;
  string_length = 0x15;
  strcpy_s(local_buffer,0x80,&system_string_data_1a6c8,in_R9,0xfffffffffffffffe);
  global_string_ptr_f0c = register_string_to_table(&string_table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册系统字符串 - 类型7 (FUN_1800384e0)
// 功能: 注册系统字符串到全局字符串表，长度为14字节
void register_system_string_type7(void)

{
  undefined8 in_R9;
  undefined *string_table_ptr;
  undefined1 *string_buffer;
  undefined4 string_length;
  undefined1 local_buffer [136];
  
  string_table_ptr = &system_string_table_cc28;
  string_buffer = local_buffer;
  local_buffer[0] = 0;
  string_length = 0xe;
  strcpy_s(local_buffer,0x80,&system_string_data_1afd8,in_R9,0xfffffffffffffffe);
  global_string_ptr_f10 = register_string_to_table(&string_table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册系统字符串 - 类型8 (FUN_180038570)
// 功能: 注册系统字符串到全局字符串表，长度为26字节
void register_system_string_type8(void)

{
  undefined8 in_R9;
  undefined *string_table_ptr;
  undefined1 *string_buffer;
  undefined4 string_length;
  undefined1 local_buffer [136];
  
  string_table_ptr = &system_string_table_cc28;
  string_buffer = local_buffer;
  local_buffer[0] = 0;
  string_length = 0x1a;
  strcpy_s(local_buffer,0x80,&system_string_data_1cc28,in_R9,0xfffffffffffffffe);
  global_string_ptr_f14 = register_string_to_table(&string_table_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册系统字符串 - 类型9 (FUN_180038610)
// 功能: 注册系统字符串到全局字符串表，长度为19字节
void register_system_string_type9(void)

{
  undefined8 in_R9;
  undefined *string_table_ptr;
  undefined1 *string_buffer;
  undefined4 string_length;
  undefined1 local_buffer [136];
  
  string_table_ptr = &system_string_table_cc28;
  string_buffer = local_buffer;
  local_buffer[0] = 0;
  string_length = 0x13;
  strcpy_s(local_buffer,0x80,&system_string_data_1eb30,in_R9,0xfffffffffffffffe);
  global_string_ptr_f30 = register_string_to_table(&string_table_ptr);
  return;
}





// 函数: 注册组件节点 - 带回调类型3 (FUN_1800386a0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性和回调函数
void register_component_node_with_callback3(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  code *callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = component_callback_25cc00;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_10a0,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_10a0,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x43330a43fcdb3653;  // 组件类型标识符
  previous_node[7] = 0xdcfdc333a769ec93;  // 组件版本信息
  previous_node[8] = &component_interface_370;  // 接口指针
  previous_node[9] = 1;  // 启用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 带回调类型4 (FUN_1800387a0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性和回调函数
void register_component_node_with_callback4(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  code *callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = component_callback_25c000;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_1078,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_1078,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x431d7c8d7c475be2;  // 组件类型标识符
  previous_node[7] = 0xb97f048d2153e1b0;  // 组件版本信息
  previous_node[8] = &component_interface_388;  // 接口指针
  previous_node[9] = 4;  // 高优先级标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型9 (FUN_1800388a0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type9(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_1050,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_1050,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4b2d79e470ee4e2c;  // 组件类型标识符
  previous_node[7] = 0x9c552acd3ed5548d;  // 组件版本信息
  previous_node[8] = &component_interface_3a0;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 带回调类型5 (FUN_1800389a0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性和回调函数
void register_component_node_with_callback5(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  code *callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = component_callback_25d270;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_1028,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_1028,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x49086ba08ab981a7;  // 组件类型标识符
  previous_node[7] = 0xa9191d34ad910696;  // 组件版本信息
  previous_node[8] = &component_interface_3b8;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型10 (FUN_180038aa0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type10(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_1000,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_1000,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x402feffe4481676e;  // 组件类型标识符
  previous_node[7] = 0xd4c2151109de93a0;  // 组件版本信息
  previous_node[8] = &component_interface_3d0;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 带特殊回调 (FUN_180038ba0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性和特殊回调
void register_component_node_with_special_callback(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined *special_callback;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  special_callback = &special_callback_868c0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_fd8,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_fd8,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4384dcc4b6d3f417;  // 组件类型标识符
  previous_node[7] = 0x92a15d52fe2679bd;  // 组件版本信息
  previous_node[8] = &component_interface_3e8;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = special_callback;  // 特殊回调
  return;
}





// 函数: 注册组件节点 - 类型11 (FUN_180038ca0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性
void register_component_node_type11(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_fb0,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_fb0,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4140994454d56503;  // 组件类型标识符
  previous_node[7] = 0x399eced9bb5517ad;  // 组件版本信息
  previous_node[8] = &component_interface_400;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 带回调类型3_副本 (FUN_180038da0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性和回调函数（副本函数）
void register_component_node_with_callback3_duplicate(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  code *callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = component_callback_25cc00;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_10a0,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_10a0,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x43330a43fcdb3653;  // 组件类型标识符
  previous_node[7] = 0xdcfdc333a769ec93;  // 组件版本信息
  previous_node[8] = &component_interface_370;  // 接口指针
  previous_node[9] = 1;  // 启用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 带回调类型4_副本 (FUN_180038ea0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性和回调函数（副本函数）
void register_component_node_with_callback4_duplicate(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  code *callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = component_callback_25c000;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_1078,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_1078,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x431d7c8d7c475be2;  // 组件类型标识符
  previous_node[7] = 0xb97f048d2153e1b0;  // 组件版本信息
  previous_node[8] = &component_interface_388;  // 接口指针
  previous_node[9] = 4;  // 高优先级标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型9_副本 (FUN_180038fa0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性（副本函数）
void register_component_node_type9_duplicate(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_1050,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_1050,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x4b2d79e470ee4e2c;  // 组件类型标识符
  previous_node[7] = 0x9c552acd3ed5548d;  // 组件版本信息
  previous_node[8] = &component_interface_3a0;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 带回调类型5_副本 (FUN_1800390a0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性和回调函数（副本函数）
void register_component_node_with_callback5_duplicate(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  code *callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = component_callback_25d270;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_1028,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_1028,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x49086ba08ab981a7;  // 组件类型标识符
  previous_node[7] = 0xa9191d34ad910696;  // 组件版本信息
  previous_node[8] = &component_interface_3b8;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





// 函数: 注册组件节点 - 类型10_副本 (FUN_1800391a0)
// 功能: 在组件树中搜索特定位置并插入新节点，设置相关属性（副本函数）
void register_component_node_type10_duplicate(void)

{
  char node_flag;
  undefined8 *root_node;
  int compare_result;
  longlong *tree_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_node;
  undefined8 callback_function;
  
  tree_manager = (longlong *)get_tree_manager();
  root_node = (undefined8 *)*tree_manager;
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  callback_function = 0;
  previous_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在树中搜索合适的插入位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&component_guid_1000,0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要，创建新节点
  if ((previous_node == root_node) || (compare_result = memcmp(&component_guid_1000,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_node_memory(tree_manager);
    insert_tree_node(tree_manager,&new_node,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_node;
  }
  
  // 设置节点属性
  previous_node[6] = 0x402feffe4481676e;  // 组件类型标识符
  previous_node[7] = 0xd4c2151109de93a0;  // 组件版本信息
  previous_node[8] = &component_interface_3d0;  // 接口指针
  previous_node[9] = 0;  // 禁用标志
  previous_node[10] = callback_function;  // 回调函数
  return;
}





