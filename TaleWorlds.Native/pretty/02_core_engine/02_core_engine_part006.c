#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part006.c - 28 个核心引擎初始化函数

/**
 * 初始化系统组件1
 * 使用字符串"ModuleData"创建系统组件并设置全局变量
 * 简化实现：原本实现涉及复杂的字符串处理和内存分配
 */
void InitializeSystemComponent1(void)
{
  // 寄存器变量（平台相关）
  undefined8 register_r9;
  
  // 指向组件基础结构的指针
  undefined *component_base_ptr;
  
  // 字符串缓冲区
  undefined1 *string_buffer;
  
  // 字符串长度参数
  undefined4 string_length;
  
  // 工作缓冲区
  undefined1 work_buffer[136];
  
  // 初始化基础结构指针
  component_base_ptr = &SystemBaseStructure;
  
  // 设置字符串缓冲区
  string_buffer = work_buffer;
  
  // 清空缓冲区
  work_buffer[0] = 0;
  
  // 设置字符串长度
  string_length = 0x15;  // 21字节
  
  // 复制组件名称到缓冲区
  strcpy_s(work_buffer, 0x80, &ComponentName_ModuleData, register_r9, 0xfffffffffffffffe);
  
  // 创建组件并保存到全局变量
  GlobalSystemComponent1 = CreateSystemComponent(&component_base_ptr);
  
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化系统组件2
 * 使用字符串"TaleWorlds.MountAndBlade"创建系统组件并设置全局变量
 * 简化实现：原本实现涉及复杂的字符串处理和内存分配
 */
void InitializeSystemComponent2(void)
{
  // 寄存器变量（平台相关）
  undefined8 register_r9;
  
  // 指向组件基础结构的指针
  undefined *component_base_ptr;
  
  // 字符串缓冲区
  undefined1 *string_buffer;
  
  // 字符串长度参数
  undefined4 string_length;
  
  // 工作缓冲区
  undefined1 work_buffer[136];
  
  // 初始化基础结构指针
  component_base_ptr = &SystemBaseStructure;
  
  // 设置字符串缓冲区
  string_buffer = work_buffer;
  
  // 清空缓冲区
  work_buffer[0] = 0;
  
  // 设置字符串长度
  string_length = 0xe;  // 14字节
  
  // 复制组件名称到缓冲区
  strcpy_s(work_buffer, 0x80, &ComponentName_MountAndBlade, register_r9, 0xfffffffffffffffe);
  
  // 创建组件并保存到全局变量
  GlobalSystemComponent2 = CreateSystemComponent(&component_base_ptr);
  
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化系统组件3
 * 使用字符串"TaleWorlds.Core"创建系统组件并设置全局变量
 * 简化实现：原本实现涉及复杂的字符串处理和内存分配
 */
void InitializeSystemComponent3(void)
{
  // 寄存器变量（平台相关）
  undefined8 register_r9;
  
  // 指向组件基础结构的指针
  undefined *component_base_ptr;
  
  // 字符串缓冲区
  undefined1 *string_buffer;
  
  // 字符串长度参数
  undefined4 string_length;
  
  // 工作缓冲区
  undefined1 work_buffer[136];
  
  // 初始化基础结构指针
  component_base_ptr = &SystemBaseStructure;
  
  // 设置字符串缓冲区
  string_buffer = work_buffer;
  
  // 清空缓冲区
  work_buffer[0] = 0;
  
  // 设置字符串长度
  string_length = 0x1a;  // 26字节
  
  // 复制组件名称到缓冲区
  strcpy_s(work_buffer, 0x80, &ComponentName_Core, register_r9, 0xfffffffffffffffe);
  
  // 创建组件并保存到全局变量
  GlobalSystemComponent3 = CreateSystemComponent(&component_base_ptr);
  
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化系统组件4
 * 使用字符串"TaleWorlds.Engine"创建系统组件并设置全局变量
 * 简化实现：原本实现涉及复杂的字符串处理和内存分配
 */
void InitializeSystemComponent4(void)
{
  // 寄存器变量（平台相关）
  undefined8 register_r9;
  
  // 指向组件基础结构的指针
  undefined *component_base_ptr;
  
  // 字符串缓冲区
  undefined1 *string_buffer;
  
  // 字符串长度参数
  undefined4 string_length;
  
  // 工作缓冲区
  undefined1 work_buffer[136];
  
  // 初始化基础结构指针
  component_base_ptr = &SystemBaseStructure;
  
  // 设置字符串缓冲区
  string_buffer = work_buffer;
  
  // 清空缓冲区
  work_buffer[0] = 0;
  
  // 设置字符串长度
  string_length = 0x13;  // 19字节
  
  // 复制组件名称到缓冲区
  strcpy_s(work_buffer, 0x80, &ComponentName_Engine, register_r9, 0xfffffffffffffffe);
  
  // 创建组件并保存到全局变量
  GlobalSystemComponent4 = CreateSystemComponent(&component_base_ptr);
  
  return;
}





/**
 * 注册类型服务1
 * 在全局二叉树中注册一个类型服务，使用标识符"BasicObject"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService1(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = BasicObjectServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_BasicObject, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_BasicObject, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x43330a43fcdb3653;  // 类型哈希值1
  parent_node[7] = 0xdcfdc333a769ec93;  // 类型哈希值2
  parent_node[8] = &BasicObject_TypeInfo;  // 类型信息
  parent_node[9] = 1;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务2
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix3"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService2(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = Matrix3ServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix3, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix3, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x431d7c8d7c475be2;  // 类型哈希值1
  parent_node[7] = 0xb97f048d2153e1b0;  // 类型哈希值2
  parent_node[8] = &Matrix3_TypeInfo;  // 类型信息
  parent_node[9] = 4;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务3
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix3x3"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService3(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数（空指针）
  undefined8 service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数（无）
  service_handler = 0;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix3x3, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix3x3, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x4b2d79e470ee4e2c;  // 类型哈希值1
  parent_node[7] = 0x9c552acd3ed5548d;  // 类型哈希值2
  parent_node[8] = &Matrix3x3_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数（无）
  
  return;
}





/**
 * 注册类型服务4
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix4"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService4(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = Matrix4ServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix4, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix4, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x49086ba08ab981a7;  // 类型哈希值1
  parent_node[7] = 0xa9191d34ad910696;  // 类型哈希值2
  parent_node[8] = &Matrix4_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务5
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix4x4"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService5(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数（空指针）
  undefined8 service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数（无）
  service_handler = 0;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix4x4, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix4x4, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x402feffe4481676e;  // 类型哈希值1
  parent_node[7] = 0xd4c2151109de93a0;  // 类型哈希值2
  parent_node[8] = &Matrix4x4_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数（无）
  
  return;
}





/**
 * 注册类型服务6
 * 在全局二叉树中注册一个类型服务，使用标识符"MatrixStack"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService6(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数指针
  undefined *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = &MatrixStackServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_MatrixStack, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_MatrixStack, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x4384dcc4b6d3f417;  // 类型哈希值1
  parent_node[7] = 0x92a15d52fe2679bd;  // 类型哈希值2
  parent_node[8] = &MatrixStack_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务7
 * 在全局二叉树中注册一个类型服务，使用标识符"Quaternion"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService7(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数（空指针）
  undefined8 service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数（无）
  service_handler = 0;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Quaternion, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Quaternion, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x4140994454d56503;  // 类型哈希值1
  parent_node[7] = 0x399eced9bb5517ad;  // 类型哈希值2
  parent_node[8] = &Quaternion_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数（无）
  
  return;
}





/**
 * 注册类型服务8
 * 在全局二叉树中注册一个类型服务，使用标识符"BasicObject"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService8(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = BasicObjectServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_BasicObject, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_BasicObject, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x43330a43fcdb3653;  // 类型哈希值1
  parent_node[7] = 0xdcfdc333a769ec93;  // 类型哈希值2
  parent_node[8] = &BasicObject_TypeInfo;  // 类型信息
  parent_node[9] = 1;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务9
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix3"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService9(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = Matrix3ServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix3, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix3, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x431d7c8d7c475be2;  // 类型哈希值1
  parent_node[7] = 0xb97f048d2153e1b0;  // 类型哈希值2
  parent_node[8] = &Matrix3_TypeInfo;  // 类型信息
  parent_node[9] = 4;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务10
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix3x3"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService10(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数（空指针）
  undefined8 service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数（无）
  service_handler = 0;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix3x3, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix3x3, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x4b2d79e470ee4e2c;  // 类型哈希值1
  parent_node[7] = 0x9c552acd3ed5548d;  // 类型哈希值2
  parent_node[8] = &Matrix3x3_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数（无）
  
  return;
}





/**
 * 注册类型服务11
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix4"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService11(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = Matrix4ServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix4, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix4, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x49086ba08ab981a7;  // 类型哈希值1
  parent_node[7] = 0xa9191d34ad910696;  // 类型哈希值2
  parent_node[8] = &Matrix4_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务12
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix4x4"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService12(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数（空指针）
  undefined8 service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数（无）
  service_handler = 0;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix4x4, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix4x4, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x402feffe4481676e;  // 类型哈希值1
  parent_node[7] = 0xd4c2151109de93a0;  // 类型哈希值2
  parent_node[8] = &Matrix4x4_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数（无）
  
  return;
}





/**
 * 注册类型服务13
 * 在全局二叉树中注册一个类型服务，使用标识符"MatrixStack"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService13(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数指针
  undefined *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = &MatrixStackServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_MatrixStack, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_MatrixStack, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x4384dcc4b6d3f417;  // 类型哈希值1
  parent_node[7] = 0x92a15d52fe2679bd;  // 类型哈希值2
  parent_node[8] = &MatrixStack_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务14
 * 在全局二叉树中注册一个类型服务，使用标识符"Quaternion"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService14(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数（空指针）
  undefined8 service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数（无）
  service_handler = 0;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Quaternion, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Quaternion, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x4140994454d56503;  // 类型哈希值1
  parent_node[7] = 0x399eced9bb5517ad;  // 类型哈希值2
  parent_node[8] = &Quaternion_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数（无）
  
  return;
}





/**
 * 注册类型服务15
 * 在全局二叉树中注册一个类型服务，使用标识符"BasicObject"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService15(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = BasicObjectServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_BasicObject, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_BasicObject, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x43330a43fcdb3653;  // 类型哈希值1
  parent_node[7] = 0xdcfdc333a769ec93;  // 类型哈希值2
  parent_node[8] = &BasicObject_TypeInfo;  // 类型信息
  parent_node[9] = 1;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务16
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix3"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService16(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = Matrix3ServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix3, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix3, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x431d7c8d7c475be2;  // 类型哈希值1
  parent_node[7] = 0xb97f048d2153e1b0;  // 类型哈希值2
  parent_node[8] = &Matrix3_TypeInfo;  // 类型信息
  parent_node[9] = 4;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务17
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix3x3"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService17(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数（空指针）
  undefined8 service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数（无）
  service_handler = 0;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix3x3, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix3x3, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x4b2d79e470ee4e2c;  // 类型哈希值1
  parent_node[7] = 0x9c552acd3ed5548d;  // 类型哈希值2
  parent_node[8] = &Matrix3x3_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数（无）
  
  return;
}





/**
 * 注册类型服务18
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix4"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService18(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = Matrix4ServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix4, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix4, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x49086ba08ab981a7;  // 类型哈希值1
  parent_node[7] = 0xa9191d34ad910696;  // 类型哈希值2
  parent_node[8] = &Matrix4_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务19
 * 在全局二叉树中注册一个类型服务，使用标识符"Matrix4x4"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService19(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数（空指针）
  undefined8 service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数（无）
  service_handler = 0;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Matrix4x4, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Matrix4x4, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x402feffe4481676e;  // 类型哈希值1
  parent_node[7] = 0xd4c2151109de93a0;  // 类型哈希值2
  parent_node[8] = &Matrix4x4_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数（无）
  
  return;
}





/**
 * 注册类型服务20
 * 在全局二叉树中注册一个类型服务，使用标识符"MatrixStack"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService20(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数指针
  undefined *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = &MatrixStackServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_MatrixStack, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_MatrixStack, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x4384dcc4b6d3f417;  // 类型哈希值1
  parent_node[7] = 0x92a15d52fe2679bd;  // 类型哈希值2
  parent_node[8] = &MatrixStack_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





/**
 * 注册类型服务21
 * 在全局二叉树中注册一个类型服务，使用标识符"Quaternion"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService21(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数（空指针）
  undefined8 service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数（无）
  service_handler = 0;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_Quaternion, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_Quaternion, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x4140994454d56503;  // 类型哈希值1
  parent_node[7] = 0x399eced9bb5517ad;  // 类型哈希值2
  parent_node[8] = &Quaternion_TypeInfo;  // 类型信息
  parent_node[9] = 0;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数（无）
  
  return;
}





/**
 * 注册类型服务22
 * 在全局二叉树中注册一个类型服务，使用标识符"BasicObject"
 * 简化实现：原本实现涉及复杂的二叉树搜索和节点插入算法
 */
void RegisterTypeService22(void)
{
  // 节点标志字符
  char node_flag;
  
  // 树根节点指针
  undefined8 *root_node;
  
  // 内存比较结果
  int compare_result;
  
  // 全局树结构指针
  longlong *tree_structure;
  
  // 内存分配大小
  longlong allocation_size;
  
  // 当前搜索节点
  undefined8 *current_node;
  
  // 父节点
  undefined8 *parent_node;
  
  // 下一个节点
  undefined8 *next_node;
  
  // 新创建的节点
  undefined8 *new_node;
  
  // 服务处理函数
  code *service_handler;
  
  // 获取全局树结构
  tree_structure = (longlong *)GetGlobalTreeStructure();
  
  // 获取根节点
  root_node = (undefined8 *)*tree_structure;
  
  // 获取根节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  
  // 设置服务处理函数
  service_handler = BasicObjectServiceHandler;
  
  // 初始化搜索
  parent_node = root_node;
  current_node = (undefined8 *)root_node[1];
  
  // 在二叉树中搜索合适位置
  while (node_flag == '\0') {
    // 比较标识符
    compare_result = memcmp(current_node + 4, &TypeIdentifier_BasicObject, 0x10);
    
    if (compare_result < 0) {
      // 转到右子树
      next_node = (undefined8 *)current_node[2];
      current_node = parent_node;
    }
    else {
      // 转到左子树
      next_node = (undefined8 *)*current_node;
    }
    
    parent_node = current_node;
    current_node = next_node;
    node_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || 
      (compare_result = memcmp(&TypeIdentifier_BasicObject, parent_node + 4, 0x10), compare_result < 0)) {
    // 分配内存
    allocation_size = AllocateTreeMemory(tree_structure);
    
    // 插入新节点
    InsertTreeNode(tree_structure, &new_node, parent_node, allocation_size + 0x20, allocation_size);
    
    parent_node = new_node;
  }
  
  // 设置节点数据
  parent_node[6] = 0x43330a43fcdb3653;  // 类型哈希值1
  parent_node[7] = 0xdcfdc333a769ec93;  // 类型哈希值2
  parent_node[8] = &BasicObject_TypeInfo;  // 类型信息
  parent_node[9] = 1;  // 类型标志
  parent_node[10] = service_handler;  // 服务处理函数
  
  return;
}





// 函数: void FUN_180039cb0(void)
void FUN_180039cb0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025c000;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01078,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x431d7c8d7c475be2;
  puVar7[7] = 0xb97f048d2153e1b0;
  puVar7[8] = &UNK_180a00388;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180039db0(void)
void FUN_180039db0(void)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puStackX_10;
  undefined8 uStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01050,0x10);
    if (iVar3 < 0) {
      puVar8 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4b2d79e470ee4e2c;
  puVar7[7] = 0x9c552acd3ed5548d;
  puVar7[8] = &UNK_180a003a0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





