#include "TaleWorlds.Native.Split.h"

// 01_initialization_part011.c - 系统组件注册函数 (25个函数)

// 函数: 注册游戏系统组件类型1
void register_game_system_type1(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE1, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE1, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x46ecbd4daf41613e;  // 组件唯一标识符高64位
  parent_node[7] = 0xdc42c056bbde8482;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE1;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型2
void register_game_system_type2(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE2, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE2, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x4c868a42644030f6;  // 组件唯一标识符高64位
  parent_node[7] = 0xc29193aa9d9b35b9;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE2;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型3
void register_game_system_type3(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE3, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE3, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x40ea3a798283cbbb;  // 组件唯一标识符高64位
  parent_node[7] = 0x7f74eb2c5a7fadae;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE3;  // 组件虚函数表
  parent_node[9] = 3;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型4
void register_game_system_type4(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE4, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE4, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x45b8d074df27d12f;  // 组件唯一标识符高64位
  parent_node[7] = 0x8d98f4c06880eda4;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE4;  // 组件虚函数表
  parent_node[9] = 3;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型5
void register_game_system_type5(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE5, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE5, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x42d293584c8cf3e5;  // 组件唯一标识符高64位
  parent_node[7] = 0x355ffeb2d29e668a;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE5;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型6
void register_game_system_type6(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_callback = get_component_callback_type6();
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE6, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE6, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x421c3cedd07d816d;  // 组件唯一标识符高64位
  parent_node[7] = 0xbec25de793b7afa6;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE6;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_callback;    // 组件回调函数
  return;
}





// 函数: 注册游戏系统组件类型7
void register_game_system_type7(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE7, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE7, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x4c22bb0c326587ce;  // 组件唯一标识符高64位
  parent_node[7] = 0x5e3cf00ce2978287;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE7;  // 组件虚函数表
  parent_node[9] = 1;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型8
void register_game_system_type8(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE8, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE8, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x46c54bc98fc3fc2a;  // 组件唯一标识符高64位
  parent_node[7] = 0x727b256e3af32585;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE8;  // 组件虚函数表
  parent_node[9] = 2;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型9
void register_game_system_type9(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE9, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE9, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x41ffd0b76c1e136f;  // 组件唯一标识符高64位
  parent_node[7] = 0x25db30365f277abb;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE9;  // 组件虚函数表
  parent_node[9] = 2;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型10
void register_game_system_type10(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_callback = get_component_callback_type10();
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE10, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE10, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x45425dc186a5d575;  // 组件唯一标识符高64位
  parent_node[7] = 0xfab48faa65382fa5;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE10;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_callback;    // 组件回调函数
  return;
}





// 函数: 注册游戏系统组件类型11
void register_game_system_type11(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_callback = get_component_callback_type11();
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE11, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE11, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x449bafe9b77ddd3c;  // 组件唯一标识符高64位
  parent_node[7] = 0xc160408bde99e59f;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE11;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_callback;    // 组件回调函数
  return;
}





// 函数: 注册游戏系统组件类型12
void register_game_system_type12(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_callback = get_component_callback_type12();
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE12, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE12, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x406be72011d07d37;  // 组件唯一标识符高64位
  parent_node[7] = 0x71876af946c867ab;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE12;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_callback;    // 组件回调函数
  return;
}





// 函数: 注册游戏系统组件类型13
void register_game_system_type13(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_callback = get_component_callback_type13();
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE13, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE13, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x40afa5469b6ac06d;  // 组件唯一标识符高64位
  parent_node[7] = 0x2f4bab01d34055a5;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE13;  // 组件虚函数表
  parent_node[9] = 3;                     // 组件优先级
  parent_node[10] = component_callback;    // 组件回调函数
  return;
}





// 函数: 注册游戏系统组件类型14
void register_game_system_type14(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_callback = get_component_callback_type14();
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE14, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE14, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x43330a43fcdb3653;  // 组件唯一标识符高64位
  parent_node[7] = 0xdcfdc333a769ec93;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE14;  // 组件虚函数表
  parent_node[9] = 1;                     // 组件优先级
  parent_node[10] = component_callback;    // 组件回调函数
  return;
}





// 函数: 注册游戏系统组件类型15
void register_game_system_type15(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_callback = get_component_callback_type15();
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE15, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE15, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x431d7c8d7c475be2;  // 组件唯一标识符高64位
  parent_node[7] = 0xb97f048d2153e1b0;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE15;  // 组件虚函数表
  parent_node[9] = 4;                     // 组件优先级
  parent_node[10] = component_callback;    // 组件回调函数
  return;
}





// 函数: 注册游戏系统组件类型16
void register_game_system_type16(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE16, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE16, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x4b2d79e470ee4e2c;  // 组件唯一标识符高64位
  parent_node[7] = 0x9c552acd3ed5548d;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE16;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型17
void register_game_system_type17(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_callback = get_component_callback_type17();
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE17, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE17, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x49086ba08ab981a7;  // 组件唯一标识符高64位
  parent_node[7] = 0xa9191d34ad910696;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE17;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_callback;    // 组件回调函数
  return;
}





// 函数: 注册游戏系统组件类型18
void register_game_system_type18(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE18, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE18, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x402feffe4481676e;  // 组件唯一标识符高64位
  parent_node[7] = 0xd4c2151109de93a0;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE18;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型19
void register_game_system_type19(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_data;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_data = get_component_data_type19();
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE19, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE19, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x4384dcc4b6d3f417;  // 组件唯一标识符高64位
  parent_node[7] = 0x92a15d52fe2679bd;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE19;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_data;      // 组件数据
  return;
}





// 函数: 注册游戏系统组件类型20
void register_game_system_type20(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE20, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE20, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x4140994454d56503;  // 组件唯一标识符高64位
  parent_node[7] = 0x399eced9bb5517ad;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE20;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型21
void register_game_system_type21(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE21, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE21, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x42bea5b911d9c4bf;  // 组件唯一标识符高64位
  parent_node[7] = 0x1aa83fc0020dc1b6;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE21;  // 组件虚函数表
  parent_node[9] = 0;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型22
void register_game_system_type22(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE22, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE22, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x46c54bc98fc3fc2a;  // 组件唯一标识符高64位
  parent_node[7] = 0x727b256e3af32585;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE22;  // 组件虚函数表
  parent_node[9] = 2;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





// 函数: 注册游戏系统组件类型23
void register_game_system_type23(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE23, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE23, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x41ffd0b76c1e136f;  // 组件唯一标识符高64位
  parent_node[7] = 0x25db30365f277abb;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE23;  // 组件虚函数表
  parent_node[9] = 2;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 初始化游戏系统数据结构
int initialize_game_system_data_structures(void)

{
  int64_t init_result;
  
  // 初始化系统数据结构
  register_system_data_structure(&SYSTEM_DATA_TABLE_1, 8, 5, &SYSTEM_INITIALIZER_1, SYSTEM_SETUP_FUNCTION);
  register_system_data_structure(0x180c96248, 8, 5, &SYSTEM_INITIALIZER_1, SYSTEM_SETUP_FUNCTION);
  register_system_data_structure(0x180c96298, 8, 5, &SYSTEM_INITIALIZER_1, SYSTEM_SETUP_FUNCTION);
  initialize_mutex(MUTEX_ADDRESS_1, 2);
  SYSTEM_COUNTER_1 = 0;
  SYSTEM_COUNTER_2 = 0;
  SYSTEM_COUNTER_3 = 0;
  SYSTEM_PRIORITY_LEVEL = 3;
  SYSTEM_STATE_FLAG_1 = 0;
  SYSTEM_STATE_FLAG_2 = 0;
  SYSTEM_STATE_FLAG_3 = 0;
  SYSTEM_PRIORITY_LEVEL_2 = 3;
  SYSTEM_RESOURCE_COUNTER = 0;
  SYSTEM_GLOBAL_FLAG = 0;
  SYSTEM_PRIORITY_LEVEL_3 = 0;
  SYSTEM_PRIORITY_LEVEL_4 = 3;
  initialize_core_system();
  init_result = verify_system_initialization(&SYSTEM_VERIFICATION_TABLE);
  return (init_result != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 初始化游戏系统指针
int initialize_game_system_pointers(void)

{
  int64_t init_result;
  uint64_t param;
  
  // 设置系统指针
  SYSTEM_POINTER_1 = &SYSTEM_TABLE_ADDRESS_1;
  SYSTEM_POINTER_2 = &SYSTEM_DATA_ADDRESS_1;


// 函数: 注册游戏系统组件类型24
void register_game_system_type24(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE24, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE24, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x46c54bc98fc3fc2a;  // 组件唯一标识符高64位
  parent_node[7] = 0x727b256e3af32585;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE24;  // 组件虚函数表
  parent_node[9] = 2;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}



// 函数: 注册游戏系统组件类型25
void register_game_system_type25(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE25, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE25, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x41ffd0b76c1e136f;  // 组件唯一标识符高64位
  parent_node[7] = 0x25db30365f277abb;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE25;  // 组件虚函数表
  parent_node[9] = 2;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)FUN_18008d070();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_state_d660,0x10);
    if (iVar3 < 0) {
      puVar8 = (uint64_t *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar8 = (uint64_t *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar8;
    cVar1 = *(char *)((int64_t)puVar8 + 0x19);
  }
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_state_d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &unknown_var_9632_ptr;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: 注册游戏系统组件类型26
void register_game_system_type26(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  int64_t component_flags;
  
  // 获取系统管理器实例
  system_manager = (int64_t *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((int64_t)system_root[1] + 0x19);
  component_flags = 0;
  parent_node = system_root;
  current_node = (void **)system_root[1];
  
  // 遍历系统树查找目标组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &SYSTEM_ID_GAME_TYPE26, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = parent_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    parent_node = current_node;
    current_node = next_node;
    is_initialized = *(char *)((int64_t)next_node + 0x19);
  }
  
  // 如果需要则创建新组件
  if ((parent_node == system_root) || 
      (compare_result = memcmp(&SYSTEM_ID_GAME_TYPE26, parent_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_system_component(system_manager);
    insert_system_component(system_manager, &new_component, parent_node, allocation_size + 0x20, allocation_size);
    parent_node = new_component;
  }
  
  // 设置组件属性
  parent_node[6] = 0x41ffd0b76c1e136f;  // 组件唯一标识符高64位
  parent_node[7] = 0x25db30365f277abb;  // 组件唯一标识符低64位
  parent_node[8] = &COMPONENT_VTABLE_TYPE26;  // 组件虚函数表
  parent_node[9] = 2;                     // 组件优先级
  parent_node[10] = component_flags;      // 组件标志
  return;
}





