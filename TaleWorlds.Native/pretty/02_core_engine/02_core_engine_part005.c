#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part005.c - 核心引擎注册表初始化模块
// 本模块包含31个注册表初始化函数，用于初始化各种系统组件

/**
 * 初始化基础渲染系统注册表项
 * 注册ID: 180036850
 * 功能：设置基础渲染相关的系统参数和回调函数
 */
void initialize_base_rendering_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &BASE_RENDERING_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&BASE_RENDERING_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x402feffe4481676e;  // 渲染系统标识符
  previous_node[7] = 0xd4c2151109de93a0;  // 渲染系统版本信息
  previous_node[8] = &base_rendering_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化材质渲染系统注册表项
 * 注册ID: 180036950
 * 功能：设置材质渲染相关的系统参数和回调函数
 */
void initialize_material_rendering_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MATERIAL_RENDERING_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&MATERIAL_RENDERING_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4384dcc4b6d3f417;  // 材质渲染系统标识符
  previous_node[7] = 0x92a15d52fe2679bd;  // 材质渲染系统版本信息
  previous_node[8] = &material_rendering_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化纹理渲染系统注册表项
 * 注册ID: 180036a50
 * 功能：设置纹理渲染相关的系统参数和回调函数
 */
void initialize_texture_rendering_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &TEXTURE_RENDERING_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&TEXTURE_RENDERING_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4140994454d56503;  // 纹理渲染系统标识符
  previous_node[7] = 0x399eced9bb5517ad;  // 纹理渲染系统版本信息
  previous_node[8] = &texture_rendering_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化游戏系统配置注册表项
 * 注册ID: 180036b50
 * 功能：设置游戏系统配置相关的参数和回调函数
 */
void initialize_game_system_config_registry(void)
{
  undefined8 system_config;
  undefined8 *config_manager;
  undefined1 *config_buffer;
  undefined4 config_size;
  undefined1 temp_buffer[136];
  
  // 设置配置管理器和缓冲区
  config_manager = &GAME_CONFIG_MANAGER;
  config_buffer = temp_buffer;
  temp_buffer[0] = 0;
  config_size = 0xc;  // 配置大小
  
  // 复制游戏系统配置到缓冲区
  strcpy_s(temp_buffer, 0x80, &GAME_CONFIG_SIGNATURE, system_config, 0xfffffffffffffffe);
  
  // 注册游戏系统配置
  GAME_SYSTEM_CONFIG = register_game_config(&config_manager);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 初始化系统数据指针注册表项
 * 注册ID: 180036be0
 * 功能：设置系统数据指针相关的配置
 */
int initialize_system_data_pointers(void)
{
  longlong system_data;
  undefined8 config_param;
  
  // 设置系统数据指针
  SYSTEM_DATA_POINTER_1 = &SYSTEM_DATA_START;
  SYSTEM_DATA_POINTER_2 = &SYSTEM_DATA_CONFIG;
  
  return 0;
}


/**
 * 初始化网络通信配置注册表项
 * 注册ID: 180036cc0
 * 功能：设置网络通信相关的配置参数
 */
void initialize_network_config_registry(void)
{
  undefined8 network_config;
  undefined8 *config_manager;
  undefined1 *config_buffer;
  undefined4 config_size;
  undefined1 temp_buffer[136];
  
  // 设置网络配置管理器和缓冲区
  config_manager = &NETWORK_CONFIG_MANAGER;
  config_buffer = temp_buffer;
  temp_buffer[0] = 0;
  config_size = 0x16;  // 网络配置大小
  
  // 复制网络配置到缓冲区
  strcpy_s(temp_buffer, 0x80, &NETWORK_CONFIG_SIGNATURE, network_config, 0xfffffffffffffffe);
  
  // 注册网络配置
  NETWORK_CONFIG_DATA = register_network_config(&config_manager);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化音频系统配置注册表项
 * 注册ID: 180036d50
 * 功能：设置音频系统相关的配置参数
 */
void initialize_audio_system_config_registry(void)
{
  undefined8 audio_config;
  undefined8 *config_manager;
  undefined1 *config_buffer;
  undefined4 config_size;
  undefined1 temp_buffer[136];
  
  // 设置音频配置管理器和缓冲区
  config_manager = &AUDIO_CONFIG_MANAGER;
  config_buffer = temp_buffer;
  temp_buffer[0] = 0;
  config_size = 0x16;  // 音频配置大小
  
  // 复制音频配置到缓冲区
  strcpy_s(temp_buffer, 0x80, &AUDIO_CONFIG_SIGNATURE, audio_config, 0xfffffffffffffffe);
  
  // 注册音频配置
  AUDIO_SYSTEM_CONFIG = register_audio_config(&config_manager);
  return;
}





/**
 * 初始化输入系统注册表项
 * 注册ID: 180036df0
 * 功能：设置输入系统相关的参数和回调函数
 */
void initialize_input_system_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  void *input_callback;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  input_callback = input_system_callback;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &INPUT_SYSTEM_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&INPUT_SYSTEM_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x43330a43fcdb3653;  // 输入系统标识符
  previous_node[7] = 0xdcfdc333a769ec93;  // 输入系统版本信息
  previous_node[8] = &input_system_vtable;  // 虚函数表指针
  previous_node[9] = 1;  // 输入系统配置参数
  previous_node[10] = input_callback;  // 输入系统回调函数
  return;
}





/**
 * 初始化物理系统注册表项
 * 注册ID: 180036ef0
 * 功能：设置物理系统相关的参数和回调函数
 */
void initialize_physics_system_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  void *physics_callback;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  physics_callback = physics_system_callback;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &PHYSICS_SYSTEM_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&PHYSICS_SYSTEM_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x431d7c8d7c475be2;  // 物理系统标识符
  previous_node[7] = 0xb97f048d2153e1b0;  // 物理系统版本信息
  previous_node[8] = &physics_system_vtable;  // 虚函数表指针
  previous_node[9] = 4;  // 物理系统配置参数
  previous_node[10] = physics_callback;  // 物理系统回调函数
  return;
}





/**
 * 初始化动画系统注册表项
 * 注册ID: 180036ff0
 * 功能：设置动画系统相关的参数和回调函数
 */
void initialize_animation_system_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &ANIMATION_SYSTEM_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&ANIMATION_SYSTEM_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4b2d79e470ee4e2c;  // 动画系统标识符
  previous_node[7] = 0x9c552acd3ed5548d;  // 动画系统版本信息
  previous_node[8] = &animation_system_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化AI系统注册表项
 * 注册ID: 1800370f0
 * 功能：设置AI系统相关的参数和回调函数
 */
void initialize_ai_system_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  void *ai_callback;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  ai_callback = ai_system_callback;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &AI_SYSTEM_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&AI_SYSTEM_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x49086ba08ab981a7;  // AI系统标识符
  previous_node[7] = 0xa9191d34ad910696;  // AI系统版本信息
  previous_node[8] = &ai_system_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = ai_callback;  // AI系统回调函数
  return;
}





/**
 * 初始化场景管理系统注册表项
 * 注册ID: 1800371f0
 * 功能：设置场景管理相关的参数和回调函数
 */
void initialize_scene_management_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &SCENE_MANAGEMENT_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&SCENE_MANAGEMENT_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x402feffe4481676e;  // 场景管理标识符
  previous_node[7] = 0xd4c2151109de93a0;  // 场景管理版本信息
  previous_node[8] = &scene_management_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化粒子系统注册表项
 * 注册ID: 1800372f0
 * 功能：设置粒子系统相关的参数和回调函数
 */
void initialize_particle_system_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &PARTICLE_SYSTEM_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&PARTICLE_SYSTEM_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4384dcc4b6d3f417;  // 粒子系统标识符
  previous_node[7] = 0x92a15d52fe2679bd;  // 粒子系统版本信息
  previous_node[8] = &particle_system_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化光影系统注册表项
 * 注册ID: 1800373f0
 * 功能：设置光影系统相关的参数和回调函数
 */
void initialize_lighting_system_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &LIGHTING_SYSTEM_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&LIGHTING_SYSTEM_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4140994454d56503;  // 光影系统标识符
  previous_node[7] = 0x399eced9bb5517ad;  // 光影系统版本信息
  previous_node[8] = &lighting_system_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化后处理系统注册表项
 * 注册ID: 1800374f0
 * 功能：设置后处理相关的参数和回调函数
 */
void initialize_post_processing_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &POST_PROCESSING_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&POST_PROCESSING_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x42bea5b911d9c4bf;  // 后处理系统标识符
  previous_node[7] = 0x1aa83fc0020dc1b6;  // 后处理系统版本信息
  previous_node[8] = &post_processing_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化用户界面系统配置注册表项
 * 注册ID: 1800375f0
 * 功能：设置用户界面系统相关的配置参数
 */
void initialize_ui_system_config_registry(void)
{
  undefined8 ui_config;
  undefined8 *config_manager;
  undefined1 *config_buffer;
  undefined4 config_size;
  undefined1 temp_buffer[136];
  
  // 设置UI配置管理器和缓冲区
  config_manager = &UI_CONFIG_MANAGER;
  config_buffer = temp_buffer;
  temp_buffer[0] = 0;
  config_size = 0x1c;  // UI配置大小
  
  // 复制UI配置到缓冲区
  strcpy_s(temp_buffer, 0x80, &UI_CONFIG_SIGNATURE, ui_config, 0xfffffffffffffffe);
  
  // 注册UI配置
  UI_SYSTEM_CONFIG = register_ui_config(&config_manager);
  return;
}





/**
 * 初始化音频管理系统注册表项
 * 注册ID: 180037680
 * 功能：设置音频管理相关的参数和回调函数
 */
void initialize_audio_management_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  void *audio_callback;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  audio_callback = audio_management_callback;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &AUDIO_MANAGEMENT_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&AUDIO_MANAGEMENT_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4fc124d23d41985f;  // 音频管理标识符
  previous_node[7] = 0xe2f4a30d6e6ae482;  // 音频管理版本信息
  previous_node[8] = &audio_management_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = audio_callback;  // 音频管理回调函数
  return;
}





/**
 * 初始化音效系统注册表项
 * 注册ID: 180037780
 * 功能：设置音效系统相关的参数和回调函数
 */
void initialize_sound_effect_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &SOUND_EFFECT_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&SOUND_EFFECT_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4770584fbb1df897;  // 音效系统标识符
  previous_node[7] = 0x47f249e43f66f2ab;  // 音效系统版本信息
  previous_node[8] = &sound_effect_vtable;  // 虚函数表指针
  previous_node[9] = 1;  // 音效系统配置参数
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化音乐系统注册表项
 * 注册ID: 180037880
 * 功能：设置音乐系统相关的参数和回调函数
 */
void initialize_music_system_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MUSIC_SYSTEM_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&MUSIC_SYSTEM_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4666df49b97e0f10;  // 音乐系统标识符
  previous_node[7] = 0x4e4b0d63a6ad1d8f;  // 音乐系统版本信息
  previous_node[8] = &music_system_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化语音系统注册表项
 * 注册ID: 180037980
 * 功能：设置语音系统相关的参数和回调函数
 */
void initialize_voice_system_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &VOICE_SYSTEM_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&VOICE_SYSTEM_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x46ecbd4daf41613e;  // 语音系统标识符
  previous_node[7] = 0xdc42c056bbde8482;  // 语音系统版本信息
  previous_node[8] = &voice_system_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化视频播放系统注册表项
 * 注册ID: 180037a80
 * 功能：设置视频播放相关的参数和回调函数
 */
void initialize_video_playback_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &VIDEO_PLAYBACK_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&VIDEO_PLAYBACK_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4c868a42644030f6;  // 视频播放系统标识符
  previous_node[7] = 0xc29193aa9d9b35b9;  // 视频播放系统版本信息
  previous_node[8] = &video_playback_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化音频流处理系统注册表项
 * 注册ID: 180037b80
 * 功能：设置音频流处理相关的参数和回调函数
 */
void initialize_audio_stream_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &AUDIO_STREAM_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&AUDIO_STREAM_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x40ea3a798283cbbb;  // 音频流处理标识符
  previous_node[7] = 0x7f74eb2c5a7fadae;  // 音频流处理版本信息
  previous_node[8] = &audio_stream_vtable;  // 虚函数表指针
  previous_node[9] = 3;  // 音频流处理配置参数
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化资源管理系统注册表项
 * 注册ID: 180037c80
 * 功能：设置资源管理相关的参数和回调函数
 */
void initialize_resource_management_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &RESOURCE_MANAGEMENT_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&RESOURCE_MANAGEMENT_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x45b8d074df27d12f;  // 资源管理标识符
  previous_node[7] = 0x8d98f4c06880eda4;  // 资源管理版本信息
  previous_node[8] = &resource_management_vtable;  // 虚函数表指针
  previous_node[9] = 3;  // 资源管理配置参数
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化内存管理系统注册表项
 * 注册ID: 180037d80
 * 功能：设置内存管理相关的参数和回调函数
 */
void initialize_memory_management_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &MEMORY_MANAGEMENT_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&MEMORY_MANAGEMENT_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x42d293584c8cf3e5;  // 内存管理标识符
  previous_node[7] = 0x355ffeb2d29e668a;  // 内存管理版本信息
  previous_node[8] = &memory_management_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化线程管理系统注册表项
 * 注册ID: 180037e80
 * 功能：设置线程管理相关的参数和回调函数
 */
void initialize_thread_management_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  void *thread_callback;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  thread_callback = thread_management_callback;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &THREAD_MANAGEMENT_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&THREAD_MANAGEMENT_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x421c3cedd07d816d;  // 线程管理标识符
  previous_node[7] = 0xbec25de793b7afa6;  // 线程管理版本信息
  previous_node[8] = &thread_management_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = thread_callback;  // 线程管理回调函数
  return;
}





/**
 * 初始化同步管理系统注册表项
 * 注册ID: 180037f80
 * 功能：设置同步管理相关的参数和回调函数
 */
void initialize_sync_management_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  undefined8 callback_parameter;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  callback_parameter = 0;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &SYNC_MANAGEMENT_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&SYNC_MANAGEMENT_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x4c22bb0c326587ce;  // 同步管理标识符
  previous_node[7] = 0x5e3cf00ce2978287;  // 同步管理版本信息
  previous_node[8] = &sync_management_vtable;  // 虚函数表指针
  previous_node[9] = 1;  // 同步管理配置参数
  previous_node[10] = callback_parameter;  // 回调参数
  return;
}





/**
 * 初始化网络同步系统注册表项
 * 注册ID: 180038080
 * 功能：设置网络同步相关的参数和回调函数
 */
void initialize_network_sync_registry(void)
{
  char registry_flag;
  undefined8 *registry_root;
  int compare_result;
  longlong *registry_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *previous_node;
  undefined8 *next_node;
  undefined8 *new_entry;
  void *network_callback;
  
  // 获取注册表管理器实例
  registry_manager = (longlong *)get_registry_manager();
  registry_root = (undefined8 *)*registry_manager;
  registry_flag = *(char *)((longlong)registry_root[1] + 0x19);
  network_callback = network_sync_callback;
  previous_node = registry_root;
  current_node = (undefined8 *)registry_root[1];
  
  // 在注册表中查找匹配的条目
  while (registry_flag == '\0') {
    compare_result = memcmp(current_node + 4, &NETWORK_SYNC_SIGNATURE, 0x10);
    if (compare_result < 0) {
      next_node = (undefined8 *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (undefined8 *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    registry_flag = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新的注册表条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&NETWORK_SYNC_SIGNATURE, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = allocate_registry_entry(registry_manager);
    insert_registry_entry(registry_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置注册表条目的参数
  previous_node[6] = 0x45425dc186a5d575;  // 网络同步标识符
  previous_node[7] = 0xfab48faa65382fa5;  // 网络同步版本信息
  previous_node[8] = &network_sync_vtable;  // 虚函数表指针
  previous_node[9] = 0;  // 保留字段
  previous_node[10] = network_callback;  // 网络同步回调函数
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化游戏存档系统配置
 * 注册ID: 180038180
 * 功能：设置游戏存档相关的配置参数
 */
void initialize_game_save_config(void)
{
  undefined8 config_param;
  undefined8 *config_manager;
  undefined1 *config_buffer;
  undefined4 config_size;
  undefined1 temp_buffer[136];
  
  // 设置存档配置管理器和缓冲区
  config_manager = &GAME_SAVE_CONFIG_MANAGER;
  config_buffer = temp_buffer;
  temp_buffer[0] = 0;
  config_size = 9;  // 存档配置大小
  
  // 复制存档配置到缓冲区
  strcpy_s(temp_buffer, 0x80, &GAME_SAVE_CONFIG_SIGNATURE, config_param, 0xfffffffffffffffe);
  
  // 注册存档配置
  GAME_SAVE_CONFIG_DATA = register_game_save_config(&config_manager);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化游戏设置系统配置
 * 注册ID: 180038210
 * 功能：设置游戏设置相关的配置参数
 */
void initialize_game_settings_config(void)
{
  undefined8 config_param;
  undefined8 *config_manager;
  undefined1 *config_buffer;
  undefined4 config_size;
  undefined1 temp_buffer[136];
  
  // 设置游戏配置管理器和缓冲区
  config_manager = &GAME_SETTINGS_CONFIG_MANAGER;
  config_buffer = temp_buffer;
  temp_buffer[0] = 0;
  config_size = 8;  // 游戏设置配置大小
  
  // 复制游戏设置配置到缓冲区
  strcpy_s(temp_buffer, 0x80, &GAME_SETTINGS_CONFIG_SIGNATURE, config_param, 0xfffffffffffffffe);
  
  // 注册游戏设置配置
  GAME_SETTINGS_CONFIG_DATA = register_game_settings_config(&config_manager);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化控制器配置系统
 * 注册ID: 1800382a0
 * 功能：设置控制器相关的配置参数
 */
void initialize_controller_config(void)
{
  undefined8 config_param;
  undefined8 *config_manager;
  undefined1 *config_buffer;
  undefined4 config_size;
  undefined1 temp_buffer[136];
  
  // 设置控制器配置管理器和缓冲区
  config_manager = &CONTROLLER_CONFIG_MANAGER;
  config_buffer = temp_buffer;
  temp_buffer[0] = 0;
  config_size = 0xb;  // 控制器配置大小
  
  // 复制控制器配置到缓冲区
  strcpy_s(temp_buffer, 0x80, &CONTROLLER_CONFIG_SIGNATURE, config_param, 0xfffffffffffffffe);
  
  // 注册控制器配置
  CONTROLLER_CONFIG_DATA = register_controller_config(&config_manager);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化键盘配置系统
 * 注册ID: 180038330
 * 功能：设置键盘相关的配置参数
 */
void initialize_keyboard_config(void)
{
  undefined8 config_param;
  undefined8 *config_manager;
  undefined1 *config_buffer;
  undefined4 config_size;
  undefined1 temp_buffer[136];
  
  // 设置键盘配置管理器和缓冲区
  config_manager = &KEYBOARD_CONFIG_MANAGER;
  config_buffer = temp_buffer;
  temp_buffer[0] = 0;
  config_size = 0xd;  // 键盘配置大小
  
  // 复制键盘配置到缓冲区
  strcpy_s(temp_buffer, 0x80, &KEYBOARD_CONFIG_SIGNATURE, config_param, 0xfffffffffffffffe);
  
  // 注册键盘配置
  KEYBOARD_CONFIG_DATA = register_keyboard_config(&config_manager);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化鼠标配置系统
 * 注册ID: 1800383c0
 * 功能：设置鼠标相关的配置参数
 */
void initialize_mouse_config(void)
{
  undefined8 config_param;
  undefined8 *config_manager;
  undefined1 *config_buffer;
  undefined4 config_size;
  undefined1 temp_buffer[136];
  
  // 设置鼠标配置管理器和缓冲区
  config_manager = &MOUSE_CONFIG_MANAGER;
  config_buffer = temp_buffer;
  temp_buffer[0] = 0;
  config_size = 0x1c;  // 鼠标配置大小
  
  // 复制鼠标配置到缓冲区
  strcpy_s(temp_buffer, 0x80, &MOUSE_CONFIG_SIGNATURE, config_param, 0xfffffffffffffffe);
  
  // 注册鼠标配置
  MOUSE_CONFIG_DATA = register_mouse_config(&config_manager);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



