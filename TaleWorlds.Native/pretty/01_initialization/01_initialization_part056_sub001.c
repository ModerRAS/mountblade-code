#include "TaleWorlds.Native.Split.h"

// 01_initialization_part056_sub001.c - 初始化模块第56部分子文件1
// 本文件是初始化模块的组成部分，包含系统初始化相关的函数

/**
 * 初始化系统组件注册器 - 类型BA
 * 注册具有特定哈希值的系统组件到全局注册表
 * 功能：在组件树中查找或创建指定类型的组件节点
 */
void initialize_system_component_type_ba(void)

{
  char node_flag;
  uint64_t *root_node;
  int compare_result;
  longlong *registry_ptr;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *parent_node;
  uint64_t *target_node;
  uint64_t *new_node;
  code *component_handler;
  
  // 获取全局组件注册表指针
  registry_ptr = (longlong *)get_global_registry();
  root_node = (uint64_t *)*registry_ptr;
  
  // 检查根节点的子节点标志
  node_flag = *(char *)((longlong)root_node[1] + 0x19);
  component_handler = handle_component_type_ba;
  parent_node = root_node;
  current_node = (uint64_t *)root_node[1];
  
  // 在组件树中遍历查找目标节点
  while (node_flag == '\0') {
    compare_result = memcmp(current_node + 4,&COMPONENT_TYPE_BA_HASH,0x10);
    if (compare_result < 0) {
      target_node = (uint64_t *)current_node[2];
      current_node = parent_node;
    }
    else {
      target_node = (uint64_t *)*current_node;
    }
    parent_node = current_node;
    current_node = target_node;
    node_flag = *(char *)((longlong)target_node + 0x19);
  }
  
  // 如果需要创建新节点
  if ((parent_node == root_node) || (compare_result = memcmp(&COMPONENT_TYPE_BA_HASH,parent_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(registry_ptr);
    create_component_node(registry_ptr,&new_node,parent_node,allocation_size + 0x20,allocation_size);
    parent_node = new_node;
  }
  
  // 设置组件节点的属性
  parent_node[6] = COMPONENT_TYPE_BA_HASH_1;
  parent_node[7] = COMPONENT_TYPE_BA_HASH_2;
  parent_node[8] = &COMPONENT_TYPE_BA_DATA;
  parent_node[9] = COMPONENT_TYPE_BA_PRIORITY;
  parent_node[10] = component_handler;
  return;
}