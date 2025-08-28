#include "TaleWorlds.Native.Split.h"

// 01_initialization_part006.c - 28 个函数
// 简化实现：此文件包含游戏引擎初始化相关的函数注册代码

// 函数: 注册基础渲染系统组件
void register_basic_rendering_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *null_pointer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  null_pointer = 0;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &RENDER_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&RENDER_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置组件属性
  next_node[6] = RENDER_COMPONENT_HASH_1;
  next_node[7] = RENDER_COMPONENT_HASH_2;
  next_node[8] = &RENDER_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = null_pointer;
  return;
}





// 函数: 注册渲染管线组件
void register_render_pipeline_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *render_pipeline_vtable;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  render_pipeline_vtable = &RENDER_PIPELINE_VTABLE;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的渲染管线组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &RENDER_PIPELINE_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果渲染管线组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&RENDER_PIPELINE_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置渲染管线组件属性
  next_node[6] = RENDER_PIPELINE_HASH_1;
  next_node[7] = RENDER_PIPELINE_HASH_2;
  next_node[8] = &RENDER_PIPELINE_VTABLE;
  next_node[9] = 0;
  next_node[10] = render_pipeline_vtable;
  return;
}





// 函数: 注册动画系统组件
void register_animation_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *null_pointer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  null_pointer = 0;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的动画组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &ANIMATION_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果动画组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&ANIMATION_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置动画组件属性
  next_node[6] = ANIMATION_COMPONENT_HASH_1;
  next_node[7] = ANIMATION_COMPONENT_HASH_2;
  next_node[8] = &ANIMATION_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = null_pointer;
  return;
}





// 函数: 注册游戏脚本系统组件
void register_game_script_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *script_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  script_initializer = initialize_game_script_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的脚本系统组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_SCRIPT_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果脚本系统组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_SCRIPT_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置脚本系统组件属性
  next_node[6] = GAME_SCRIPT_COMPONENT_HASH_1;
  next_node[7] = GAME_SCRIPT_COMPONENT_HASH_2;
  next_node[8] = &GAME_SCRIPT_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = script_initializer;
  return;
}





// 函数: 注册音频系统组件
void register_audio_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *audio_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  audio_initializer = initialize_audio_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的音频组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &AUDIO_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果音频组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&AUDIO_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置音频组件属性
  next_node[6] = AUDIO_COMPONENT_HASH_1;
  next_node[7] = AUDIO_COMPONENT_HASH_2;
  next_node[8] = &AUDIO_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = audio_initializer;
  return;
}





// 函数: 注册物理系统组件
void register_physics_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *physics_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  physics_initializer = initialize_physics_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的物理组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &PHYSICS_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果物理组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&PHYSICS_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置物理组件属性
  next_node[6] = PHYSICS_COMPONENT_HASH_1;
  next_node[7] = PHYSICS_COMPONENT_HASH_2;
  next_node[8] = &PHYSICS_COMPONENT_VTABLE;
  next_node[9] = 4;
  next_node[10] = physics_initializer;
  return;
}





// 函数: 注册输入系统组件
void register_input_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *input_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  input_initializer = initialize_input_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的输入组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &INPUT_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果输入组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&INPUT_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置输入组件属性
  next_node[6] = INPUT_COMPONENT_HASH_1;
  next_node[7] = INPUT_COMPONENT_HASH_2;
  next_node[8] = &INPUT_COMPONENT_VTABLE;
  next_node[9] = 3;
  next_node[10] = input_initializer;
  return;
}





// 函数: 注册网络系统组件
void register_network_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *null_pointer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  null_pointer = 0;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的网络组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &NETWORK_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果网络组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&NETWORK_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置网络组件属性
  next_node[6] = NETWORK_COMPONENT_HASH_1;
  next_node[7] = NETWORK_COMPONENT_HASH_2;
  next_node[8] = &NETWORK_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = null_pointer;
  return;
}





// 函数: 注册游戏世界管理组件
void register_game_world_management_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *world_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  world_initializer = initialize_game_world_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的世界管理组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_WORLD_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果世界管理组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_WORLD_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置世界管理组件属性
  next_node[6] = GAME_WORLD_COMPONENT_HASH_1;
  next_node[7] = GAME_WORLD_COMPONENT_HASH_2;
  next_node[8] = &GAME_WORLD_COMPONENT_VTABLE;
  next_node[9] = 1;
  next_node[10] = world_initializer;
  return;
}





// 函数: 注册游戏实体管理组件
void register_game_entity_management_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *entity_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  entity_initializer = initialize_game_entity_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的实体管理组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_ENTITY_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果实体管理组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_ENTITY_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置实体管理组件属性
  next_node[6] = GAME_ENTITY_COMPONENT_HASH_1;
  next_node[7] = GAME_ENTITY_COMPONENT_HASH_2;
  next_node[8] = &GAME_ENTITY_COMPONENT_VTABLE;
  next_node[9] = 4;
  next_node[10] = entity_initializer;
  return;
}





// 函数: 注册游戏场景管理组件
void register_game_scene_management_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *null_pointer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  null_pointer = 0;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的场景管理组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_SCENE_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果场景管理组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_SCENE_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置场景管理组件属性
  next_node[6] = GAME_SCENE_COMPONENT_HASH_1;
  next_node[7] = GAME_SCENE_COMPONENT_HASH_2;
  next_node[8] = &GAME_SCENE_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = null_pointer;
  return;
}





// 函数: 注册游戏资源管理组件
void register_game_resource_management_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *resource_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  resource_initializer = initialize_game_resource_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的资源管理组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_RESOURCE_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果资源管理组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_RESOURCE_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置资源管理组件属性
  next_node[6] = GAME_RESOURCE_COMPONENT_HASH_1;
  next_node[7] = GAME_RESOURCE_COMPONENT_HASH_2;
  next_node[8] = &GAME_RESOURCE_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = resource_initializer;
  return;
}





// 函数: 注册游戏UI管理组件
void register_game_ui_management_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *null_pointer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  null_pointer = 0;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的UI管理组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_UI_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果UI管理组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_UI_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置UI管理组件属性
  next_node[6] = GAME_UI_COMPONENT_HASH_1;
  next_node[7] = GAME_UI_COMPONENT_HASH_2;
  next_node[8] = &GAME_UI_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = null_pointer;
  return;
}





// 函数: 注册游戏存档管理组件
void register_game_save_management_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *save_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  save_initializer = initialize_game_save_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的存档管理组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_SAVE_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果存档管理组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_SAVE_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置存档管理组件属性
  next_node[6] = GAME_SAVE_COMPONENT_HASH_1;
  next_node[7] = GAME_SAVE_COMPONENT_HASH_2;
  next_node[8] = &GAME_SAVE_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = save_initializer;
  return;
}





// 函数: 注册游戏日志管理组件
void register_game_log_management_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *null_pointer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  null_pointer = 0;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的日志管理组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_LOG_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果日志管理组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_LOG_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置日志管理组件属性
  next_node[6] = GAME_LOG_COMPONENT_HASH_1;
  next_node[7] = GAME_LOG_COMPONENT_HASH_2;
  next_node[8] = &GAME_LOG_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = null_pointer;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册游戏模块加载器组件
void register_game_module_loader_components(void)

{
  undefined8 module_param;
  undefined *module_info_ptr;
  undefined1 *module_buffer;
  undefined4 module_type;
  undefined1 module_name_buffer [136];
  
  // 初始化模块加载参数
  module_info_ptr = &MODULE_INFO_TABLE;
  module_buffer = module_name_buffer;
  module_name_buffer[0] = 0;
  module_type = 0xc;  // 模块类型标识
  strcpy_s(module_name_buffer, 0x80, &MODULE_CORE_NAME, module_param, 0xfffffffffffffffe);
  
  // 注册模块到系统
  MODULE_REGISTRY_TABLE = register_module_to_system(&module_info_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 初始化游戏调试系统
int initialize_game_debug_system(void)

{
  longlong debug_handle;
  undefined8 debug_param;
  
  // 设置调试系统数据表
  DEBUG_SYSTEM_TABLE = &DEBUG_CORE_TABLE;
  DEBUG_FUNCTION_TABLE = &DEBUG_CONFIG_TABLE;
  
  return 0;
}


// 函数: 注册游戏调试组件
void register_game_debug_components(void)

{
  undefined8 debug_param;
  undefined *debug_info_ptr;
  undefined1 *debug_buffer;
  undefined4 debug_type;
  undefined1 debug_name_buffer [136];
  
  // 初始化调试组件参数
  debug_info_ptr = &DEBUG_INFO_TABLE;
  debug_buffer = debug_name_buffer;
  debug_name_buffer[0] = 0;
  debug_type = 0x16;  // 调试类型标识
  strcpy_s(debug_name_buffer, 0x80, &DEBUG_CONFIG_NAME, debug_param, 0xfffffffffffffffe);
  
  // 注册调试组件到系统
  DEBUG_REGISTRY_TABLE = register_debug_component_to_system(&debug_info_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 注册游戏性能监控组件
void register_game_performance_monitoring_components(void)

{
  undefined8 perf_param;
  undefined *perf_info_ptr;
  undefined1 *perf_buffer;
  undefined4 perf_type;
  undefined1 perf_name_buffer [136];
  
  // 初始化性能监控组件参数
  perf_info_ptr = &PERFORMANCE_INFO_TABLE;
  perf_buffer = perf_name_buffer;
  perf_name_buffer[0] = 0;
  perf_type = 0x16;  // 性能监控类型标识
  strcpy_s(perf_name_buffer, 0x80, &PERFORMANCE_CONFIG_NAME, perf_param, 0xfffffffffffffffe);
  
  // 注册性能监控组件到系统
  PERFORMANCE_REGISTRY_TABLE = register_performance_component_to_system(&perf_info_ptr);
  return;
}





// 函数: 注册游戏AI管理组件
void register_game_ai_management_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *ai_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  ai_initializer = initialize_game_ai_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的AI管理组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_AI_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果AI管理组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_AI_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置AI管理组件属性
  next_node[6] = GAME_AI_COMPONENT_HASH_1;
  next_node[7] = GAME_AI_COMPONENT_HASH_2;
  next_node[8] = &GAME_AI_COMPONENT_VTABLE;
  next_node[9] = 1;
  next_node[10] = ai_initializer;
  return;
}





// 函数: 注册游戏战斗系统组件
void register_game_combat_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *combat_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  combat_initializer = initialize_game_combat_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的战斗系统组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_COMBAT_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果战斗系统组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_COMBAT_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置战斗系统组件属性
  next_node[6] = GAME_COMBAT_COMPONENT_HASH_1;
  next_node[7] = GAME_COMBAT_COMPONENT_HASH_2;
  next_node[8] = &GAME_COMBAT_COMPONENT_VTABLE;
  next_node[9] = 4;
  next_node[10] = combat_initializer;
  return;
}





// 函数: 注册游戏任务系统组件
void register_game_mission_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *null_pointer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  null_pointer = 0;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的任务系统组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_MISSION_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果任务系统组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_MISSION_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置任务系统组件属性
  next_node[6] = GAME_MISSION_COMPONENT_HASH_1;
  next_node[7] = GAME_MISSION_COMPONENT_HASH_2;
  next_node[8] = &GAME_MISSION_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = null_pointer;
  return;
}





// 函数: 注册游戏对话系统组件
void register_game_dialog_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *dialog_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  dialog_initializer = initialize_game_dialog_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的对话系统组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_DIALOG_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果对话系统组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_DIALOG_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置对话系统组件属性
  next_node[6] = GAME_DIALOG_COMPONENT_HASH_1;
  next_node[7] = GAME_DIALOG_COMPONENT_HASH_2;
  next_node[8] = &GAME_DIALOG_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = dialog_initializer;
  return;
}





// 函数: 注册游戏角色创建系统组件
void register_game_character_creation_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *null_pointer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  null_pointer = 0;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的角色创建系统组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_CHARACTER_CREATION_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果角色创建系统组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_CHARACTER_CREATION_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置角色创建系统组件属性
  next_node[6] = GAME_CHARACTER_CREATION_COMPONENT_HASH_1;
  next_node[7] = GAME_CHARACTER_CREATION_COMPONENT_HASH_2;
  next_node[8] = &GAME_CHARACTER_CREATION_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = null_pointer;
  return;
}





// 函数: 注册游戏存档加载系统组件
void register_game_save_load_system_components(void)

{
  char is_initialized;
  void **global_table;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  void **current_node;
  void **next_node;
  void **temp_node;
  void **new_node;
  void *save_load_initializer;
  
  // 获取系统管理器实例
  system_manager = (longlong *)get_system_manager();
  global_table = (void **)*system_manager;
  is_initialized = *(char *)((longlong)global_table[1] + 0x19);
  save_load_initializer = initialize_game_save_load_system;
  next_node = global_table;
  current_node = (void **)global_table[1];
  
  // 遍历链表查找已存在的存档加载系统组件
  while (is_initialized == '\0') {
    compare_result = memcmp(current_node + 4, &GAME_SAVE_LOAD_COMPONENT_ID, 0x10);
    if (compare_result < 0) {
      temp_node = (void **)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (void **)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    is_initialized = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果存档加载系统组件不存在或需要插入，则创建新节点
  if ((next_node == global_table) || 
      (compare_result = memcmp(&GAME_SAVE_LOAD_COMPONENT_ID, next_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    insert_component_node(system_manager, &new_node, next_node, allocation_size + 0x20, allocation_size);
    next_node = new_node;
  }
  
  // 设置存档加载系统组件属性
  next_node[6] = GAME_SAVE_LOAD_COMPONENT_HASH_1;
  next_node[7] = GAME_SAVE_LOAD_COMPONENT_HASH_2;
  next_node[8] = &GAME_SAVE_LOAD_COMPONENT_VTABLE;
  next_node[9] = 0;
  next_node[10] = save_load_initializer;
  return;
}





// 函数: void FUN_1800373f0(void)
void FUN_1800373f0(void)

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





// 函数: void FUN_1800374f0(void)
void FUN_1800374f0(void)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800375f0(void)
void FUN_1800375f0(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x1c;
  strcpy_s(auStack_88,0x80,&UNK_180a17e48,in_R9,0xfffffffffffffffe);
  _DAT_180c91ee8 = FUN_180623800(&puStack_a0);
  return;
}





// 函数: void FUN_180037680(void)
void FUN_180037680(void)

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
  pcStackX_18 = FUN_18007fcd0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_1809fc740,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_1809fc740,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4fc124d23d41985f;
  puVar7[7] = 0xe2f4a30d6e6ae482;
  puVar7[8] = &UNK_18098c790;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





