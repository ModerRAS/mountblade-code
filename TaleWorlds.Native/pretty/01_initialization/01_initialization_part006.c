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





// 函数: void FUN_180036850(void)
void FUN_180036850(void)

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





// 函数: void FUN_180036950(void)
void FUN_180036950(void)

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





// 函数: void FUN_180036a50(void)
void FUN_180036a50(void)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180036b50(void)
void FUN_180036b50(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xc;
  strcpy_s(auStack_88,0x80,&UNK_180a167d0,in_R9,0xfffffffffffffffe);
  _DAT_180c91da4 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_180036be0(void)

{
  longlong lVar1;
  undefined8 in_R9;
  
  _DAT_180bf90b0 = &UNK_18098bc80;
  _DAT_180bf90b8 = &DAT_180bf90c8;


// 函数: void FUN_180036cc0(void)
void FUN_180036cc0(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x16;
  strcpy_s(auStack_88,0x80,&DAT_180a16c50,in_R9,0xfffffffffffffffe);
  _DAT_180c91da8 = FUN_180623800(&puStack_a0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180036d50(void)
void FUN_180036d50(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0x16;
  strcpy_s(auStack_88,0x80,&DAT_180a16c38,in_R9,0xfffffffffffffffe);
  _DAT_180c91dac = FUN_180623800(&puStack_a0);
  return;
}





// 函数: void FUN_180036df0(void)
void FUN_180036df0(void)

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
  pcStackX_18 = FUN_18025cc00;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a010a0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a010a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x43330a43fcdb3653;
  puVar7[7] = 0xdcfdc333a769ec93;
  puVar7[8] = &UNK_180a00370;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_180036ef0(void)
void FUN_180036ef0(void)

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





// 函数: void FUN_180036ff0(void)
void FUN_180036ff0(void)

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





// 函数: void FUN_1800370f0(void)
void FUN_1800370f0(void)

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





// 函数: void FUN_1800371f0(void)
void FUN_1800371f0(void)

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





// 函数: void FUN_1800372f0(void)
void FUN_1800372f0(void)

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





