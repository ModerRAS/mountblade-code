#include "TaleWorlds.Native.Split.h"

// 01_initialization_part003.c - 系统初始化函数
// 包含26个系统初始化相关的函数

// 函数: 注册系统模块类型1
// 原始函数名: FUN_18002f270
void register_system_module_type1(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type1;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE1_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE1_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x431d7c8d7c475be2;  // 模块类型标识符
  parent_node[7] = 0xb97f048d2153e1b0;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE1_DATA; // 模块数据指针
  parent_node[9] = 4;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型2
// 原始函数名: FUN_18002f370
void register_system_module_type2(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE2_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE2_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x4b2d79e470ee4e2c;  // 模块类型标识符
  parent_node[7] = 0x9c552acd3ed5548d;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE2_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型3
// 原始函数名: FUN_18002f470
void register_system_module_type3(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type3;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE3_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE3_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x49086ba08ab981a7;  // 模块类型标识符
  parent_node[7] = 0xa9191d34ad910696;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE3_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型4
// 原始函数名: FUN_18002f570
void register_system_module_type4(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE4_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE4_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x402feffe4481676e;  // 模块类型标识符
  parent_node[7] = 0xd4c2151109de93a0;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE4_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型5
// 原始函数名: FUN_18002f670
void register_system_module_type5(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = &MODULE_TYPE5_HANDLER;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE5_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE5_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x4384dcc4b6d3f417;  // 模块类型标识符
  parent_node[7] = 0x92a15d52fe2679bd;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE5_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型6
// 原始函数名: FUN_18002f770
void register_system_module_type6(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE6_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE6_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x4140994454d56503;  // 模块类型标识符
  parent_node[7] = 0x399eced9bb5517ad;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE6_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型7
// 原始函数名: FUN_18002f870
void register_system_module_type7(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type7;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE7_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE7_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x43330a43fcdb3653;  // 模块类型标识符
  parent_node[7] = 0xdcfdc333a769ec93;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE7_DATA; // 模块数据指针
  parent_node[9] = 1;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型1（副本）
// 原始函数名: FUN_18002f970
void register_system_module_type1_duplicate(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type1;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE1_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE1_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x431d7c8d7c475be2;  // 模块类型标识符
  parent_node[7] = 0xb97f048d2153e1b0;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE1_DATA; // 模块数据指针
  parent_node[9] = 4;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型2（副本）
// 原始函数名: FUN_18002fa70
void register_system_module_type2_duplicate(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE2_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE2_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x4b2d79e470ee4e2c;  // 模块类型标识符
  parent_node[7] = 0x9c552acd3ed5548d;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE2_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型3（副本）
// 原始函数名: FUN_18002fb70
void register_system_module_type3_duplicate(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type3;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE3_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE3_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x49086ba08ab981a7;  // 模块类型标识符
  parent_node[7] = 0xa9191d34ad910696;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE3_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型4（副本）
// 原始函数名: FUN_18002fc70
void register_system_module_type4_duplicate(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE4_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE4_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x402feffe4481676e;  // 模块类型标识符
  parent_node[7] = 0xd4c2151109de93a0;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE4_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型5（副本）
// 原始函数名: FUN_18002fd70
void register_system_module_type5_duplicate(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = &MODULE_TYPE5_HANDLER;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE5_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE5_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x4384dcc4b6d3f417;  // 模块类型标识符
  parent_node[7] = 0x92a15d52fe2679bd;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE5_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型6（副本）
// 原始函数名: FUN_18002fe70
void register_system_module_type6_duplicate(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE6_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE6_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x4140994454d56503;  // 模块类型标识符
  parent_node[7] = 0x399eced9bb5517ad;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE6_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型8
// 原始函数名: FUN_18002ff70
void register_system_module_type8(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE8_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE8_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x42bea5b911d9c4bf;  // 模块类型标识符
  parent_node[7] = 0x1aa83fc0020dc1b6;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE8_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型9
// 原始函数名: FUN_180030070
void register_system_module_type9(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type9;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE9_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE9_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x45425dc186a5d575;  // 模块类型标识符
  parent_node[7] = 0xfab48faa65382fa5;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE9_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型7（副本）
// 原始函数名: FUN_180030170
void register_system_module_type7_duplicate(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type7;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE7_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE7_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x43330a43fcdb3653;  // 模块类型标识符
  parent_node[7] = 0xdcfdc333a769ec93;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE7_DATA; // 模块数据指针
  parent_node[9] = 1;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型1（第二副本）
// 原始函数名: FUN_180030270
void register_system_module_type1_duplicate2(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type1;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE1_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE1_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x431d7c8d7c475be2;  // 模块类型标识符
  parent_node[7] = 0xb97f048d2153e1b0;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE1_DATA; // 模块数据指针
  parent_node[9] = 4;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型2（第二副本）
// 原始函数名: FUN_180030370
void register_system_module_type2_duplicate2(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE2_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE2_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x4b2d79e470ee4e2c;  // 模块类型标识符
  parent_node[7] = 0x9c552acd3ed5548d;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE2_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型3（第二副本）
// 原始函数名: FUN_180030470
void register_system_module_type3_duplicate2(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type3;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE3_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE3_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x49086ba08ab981a7;  // 模块类型标识符
  parent_node[7] = 0xa9191d34ad910696;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE3_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型4（第二副本）
// 原始函数名: FUN_180030570
void register_system_module_type4_duplicate2(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE4_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE4_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x402feffe4481676e;  // 模块类型标识符
  parent_node[7] = 0xd4c2151109de93a0;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE4_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型5（第二副本）
// 原始函数名: FUN_180030670
void register_system_module_type5_duplicate2(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = &MODULE_TYPE5_HANDLER;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE5_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE5_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x4384dcc4b6d3f417;  // 模块类型标识符
  parent_node[7] = 0x92a15d52fe2679bd;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE5_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型6（第二副本）
// 原始函数名: FUN_180030770
void register_system_module_type6_duplicate2(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = NULL;  // 无处理函数
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE6_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE6_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x4140994454d56503;  // 模块类型标识符
  parent_node[7] = 0x399eced9bb5517ad;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE6_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 初始化系统配置
// 原始函数名: FUN_180030870
void initialize_system_config(void)
{
  uint64_t config_param;
  void *config_handler;
  int8_t *config_buffer;
  int32_t buffer_size;
  int8_t buffer_data[136];
  
  config_handler = &SYSTEM_CONFIG_HANDLER;
  config_buffer = buffer_data;
  buffer_data[0] = 0;
  buffer_size = 8;
  strcpy_s(buffer_data, 0x80, &SYSTEM_CONFIG_STRING, config_param, 0xfffffffffffffffe);
  system_config_table = create_system_config(&config_handler);
  return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 初始化系统全局变量
// 原始函数名: FUN_180030900
int initialize_system_globals(void)
{
  longlong init_result;
  uint64_t init_param;
  
  system_global_ptr = &SYSTEM_GLOBAL_DATA;
  system_global_data_ptr = &SYSTEM_GLOBAL_DATA_ARRAY;

// 函数: 注册系统模块类型10
// 原始函数名: FUN_180031a10
void register_system_module_type10(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type10;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE10_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE10_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x406be72011d07d37;  // 模块类型标识符
  parent_node[7] = 0x71876af946c867ab;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE10_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型11
// 原始函数名: FUN_180031b10
void register_system_module_type11(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type11;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE11_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE11_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x40afa5469b6ac06d;  // 模块类型标识符
  parent_node[7] = 0x2f4bab01d34055a5;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE11_DATA; // 模块数据指针
  parent_node[9] = 3;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}

// 函数: 注册系统模块类型10（副本）
// 原始函数名: FUN_180031c10
void register_system_module_type10_duplicate(void)
{
  char node_flag;
  void **module_root;
  int compare_result;
  longlong **system_table;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **child_node;
  void **new_node;
  void *module_handler;
  
  // 获取系统表指针
  system_table = (longlong **)get_system_table();
  module_root = (void **)*system_table;
  node_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_handler = handle_module_type10;
  parent_node = module_root;
  current_node = (void **)module_root[1];
  
  // 在树结构中查找合适的位置
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MODULE_TYPE10_ID, 0x10);
    if (compare_result < 0) {
      child_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      child_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = child_node;
    node_flag = *(char *)((longlong)child_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == module_root) || (compare_result = memcmp(&MODULE_TYPE10_ID, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_memory(system_table);
    insert_system_node(system_table, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_node;
  }
  
  // 设置模块参数
  parent_node[6] = 0x406be72011d07d37;  // 模块类型标识符
  parent_node[7] = 0x71876af946c867ab;  // 模块版本信息
  parent_node[8] = &MODULE_TYPE10_DATA; // 模块数据指针
  parent_node[9] = 0;                   // 模块优先级
  parent_node[10] = module_handler;     // 模块处理函数
  return;
}