#include "TaleWorlds.Native.Split.h"

// 01_initialization_part011.c - 系统组件注册函数 (25个函数)

// 函数: 注册游戏系统组件类型1
void register_game_system_type1(void)

{
  char is_initialized;
  void **system_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  longlong component_flags;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  longlong component_flags;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  longlong component_flags;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  longlong component_flags;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  longlong component_flags;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  longlong component_flags;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  longlong component_flags;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  longlong component_flags;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  void *component_callback;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **parent_node;
  void **next_node;
  void **new_component;
  longlong component_flags;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  system_root = (void **)*system_manager;
  is_initialized = *(char *)((longlong)system_root[1] + 0x19);
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
    is_initialized = *(char *)((longlong)next_node + 0x19);
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





// 函数: void FUN_1800411e0(void)
void FUN_1800411e0(void)

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
  pcStackX_18 = FUN_18025d270;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01028,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x49086ba08ab981a7;
  puVar7[7] = 0xa9191d34ad910696;
  puVar7[8] = &UNK_180a003b8;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_1800412e0(void)
void FUN_1800412e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_180a01000,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a01000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x402feffe4481676e;
  puVar7[7] = 0xd4c2151109de93a0;
  puVar7[8] = &UNK_180a003d0;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800413e0(void)
void FUN_1800413e0(void)

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
  undefined *puStackX_18;
  
  plVar4 = (longlong *)FUN_18008d070();
  puVar2 = (undefined8 *)*plVar4;
  cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
  puStackX_18 = &UNK_1800868c0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00fd8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fd8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4384dcc4b6d3f417;
  puVar7[7] = 0x92a15d52fe2679bd;
  puVar7[8] = &UNK_180a003e8;
  puVar7[9] = 0;
  puVar7[10] = puStackX_18;
  return;
}





// 函数: void FUN_1800414e0(void)
void FUN_1800414e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00fb0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00fb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4140994454d56503;
  puVar7[7] = 0x399eced9bb5517ad;
  puVar7[8] = &UNK_180a00400;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800415e0(void)
void FUN_1800415e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_1809fe0d0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809fe0d0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x42bea5b911d9c4bf;
  puVar7[7] = 0x1aa83fc0020dc1b6;
  puVar7[8] = &UNK_1809fd0d8;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800416e0(void)
void FUN_1800416e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d660,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &UNK_180a2ca90;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_1800417e0(void)
void FUN_1800417e0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d590,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &UNK_180a2cab0;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1800418e0(void)

{
  longlong lVar1;
  
  FUN_1808fc838(&DAT_180c96220,8,5,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(0x180c96248,8,5,&SUB_18005d5f0,FUN_180045af0);
  FUN_1808fc838(0x180c96298,8,5,&SUB_18005d5f0,FUN_180045af0);
  _Mtx_init_in_situ(0x180c962c0,2);
  _DAT_180c96310 = 0;
  _DAT_180c96318 = 0;
  _DAT_180c96320 = 0;
  _DAT_180c96328 = 3;
  _DAT_180c96330 = 0;
  _DAT_180c96338 = 0;
  _DAT_180c96340 = 0;
  _DAT_180c96348 = 3;
  _DAT_180c96350 = 0;
  uRam0000000180c96358 = 0;
  _DAT_180c96360 = 0;
  _DAT_180c96368 = 3;
  FUN_1804ac640();
  lVar1 = FUN_1808fc7d0(&UNK_180942f90);
  return (lVar1 != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180041a10(void)

{
  longlong lVar1;
  undefined8 in_R9;
  
  _DAT_180bf64f8 = &UNK_18098bc80;
  _DAT_180bf6500 = &DAT_180bf6510;


// 函数: void FUN_180041af0(void)
void FUN_180041af0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d660,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d660,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x46c54bc98fc3fc2a;
  puVar7[7] = 0x727b256e3af32585;
  puVar7[8] = &UNK_180a2ca90;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





// 函数: void FUN_180041bf0(void)
void FUN_180041bf0(void)

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
    iVar3 = memcmp(puVar6 + 4,&DAT_180a2d590,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a2d590,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x41ffd0b76c1e136f;
  puVar7[7] = 0x25db30365f277abb;
  puVar7[8] = &UNK_180a2cab0;
  puVar7[9] = 2;
  puVar7[10] = uStackX_18;
  return;
}





