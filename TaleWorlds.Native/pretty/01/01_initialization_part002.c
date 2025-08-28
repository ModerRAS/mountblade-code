#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part002.c - 初始化模块第二部分 - 26个函数
// 本文件包含系统初始化相关的函数，主要用于注册各种系统组件
// 主要功能：系统组件注册、初始化配置、资源管理、系统状态设置等

// 常量定义
#define SYSTEM_COMPONENT_FLAG_ACTIVE 0x00
#define SYSTEM_COMPONENT_FLAG_INACTIVE 0x01
#define SYSTEM_COMPONENT_PRIORITY_LOW 0
#define SYSTEM_COMPONENT_PRIORITY_MEDIUM 3
#define SYSTEM_COMPONENT_PRIORITY_HIGH 4
#define SYSTEM_COMPONENT_ID_SIZE 0x10
#define SYSTEM_COMPONENT_NODE_BASE_SIZE 0x20

// 组件类型标识符常量
#define RENDER_COMPONENT_TYPE_ID 0x40afa5469b6ac06d
#define RENDER_COMPONENT_VERSION 0x2f4bab01d34055a5
#define AUDIO_COMPONENT_TYPE_ID 0x43330a43fcdb3653
#define AUDIO_COMPONENT_VERSION 0xdcfdc333a769ec93
#define INPUT_COMPONENT_TYPE_ID 0x431d7c8d7c475be2
#define INPUT_COMPONENT_VERSION 0xb97f048d2153e1b0
#define PHYSICS_COMPONENT_TYPE_ID 0x4b2d79e470ee4e2c
#define PHYSICS_COMPONENT_VERSION 0x9c552acd3ed5548d
#define NETWORK_COMPONENT_TYPE_ID 0x49086ba08ab981a7
#define NETWORK_COMPONENT_VERSION 0xa9191d34ad910696
#define AI_COMPONENT_TYPE_ID 0x402feffe4481676e
#define AI_COMPONENT_VERSION 0xd4c2151109de93a0
#define UI_COMPONENT_TYPE_ID 0x4384dcc4b6d3f417
#define UI_COMPONENT_VERSION 0x92a15d52fe2679bd
#define ANIMATION_COMPONENT_TYPE_ID 0x4140994454d56503
#define ANIMATION_COMPONENT_VERSION 0x399eced9bb5517ad
#define SCENE_COMPONENT_TYPE_ID 0x449bafe9b77ddd3c
#define SCENE_COMPONENT_VERSION 0xc160408bde99e59f
#define SCRIPT_COMPONENT_TYPE_ID 0x45425dc186a5d575
#define SCRIPT_COMPONENT_VERSION 0xfab48faa65382fa5
#define RESOURCE_COMPONENT_TYPE_ID 0x406be72011d07d37
#define RESOURCE_COMPONENT_VERSION 0x71876af946c867ab
#define DEBUG_COMPONENT_TYPE_ID 0x40afa5469b6ac06d
#define DEBUG_COMPONENT_VERSION 0x2f4bab01d34055a5
#define SAVE_COMPONENT_TYPE_ID 0x42bea5b911d9c4bf
#define SAVE_COMPONENT_VERSION 0x1aa83fc0020dc1b6
#define MODULE_COMPONENT_TYPE_ID 0x40db4257e97d3df8
#define MODULE_COMPONENT_VERSION 0x81d539e33614429f
#define GAME_LOGIC_COMPONENT_TYPE_ID 0x4e33c4803e67a08f
#define GAME_LOGIC_COMPONENT_VERSION 0x703a29a844ce399

// 函数别名
#define SystemComponentRegister register_render_system_components
#define SystemMutexInitializer initialize_mutex
#define SystemStringConfigurator initialize_string_config
#define SystemAudioComponentRegister register_audio_system_component
#define SystemInputComponentRegister register_input_system_component
#define SystemPhysicsComponentRegister register_physics_system_component
#define SystemNetworkComponentRegister register_network_system_component
#define SystemAIComponentRegister register_ai_system_component
#define SystemUIComponentRegister register_ui_system_component
#define SystemAnimationComponentRegister register_animation_system_component
#define SystemSceneComponentRegister register_scene_system_component
#define SystemScriptComponentRegister register_script_system_component
#define SystemResourceComponentRegister register_resource_system_component
#define SystemDebugComponentRegister register_debug_system_component
#define SystemSaveComponentRegister register_save_system_component
#define SystemModuleComponentRegister register_module_system_component
#define SystemGameLogicComponentRegister register_game_logic_system_component

// 函数：注册渲染系统组件
void register_render_system_components(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *component_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  component_handler = render_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&RENDER_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&RENDER_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置组件属性
  next_node[6] = RENDER_COMPONENT_TYPE_ID;  // 组件类型标识
  next_node[7] = RENDER_COMPONENT_VERSION;  // 组件版本
  next_node[8] = &RENDER_COMPONENT_DATA;  // 组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_MEDIUM;  // 优先级
  next_node[10] = component_handler;  // 处理函数
  return;
}

// 函数：初始化互斥锁
int initialize_mutex(uint64_t mutex_id, uint64_t mutex_attr, uint64_t lock_func, uint64_t unlock_func)

{
  int64_t init_result;
  
  // 初始化互斥锁
  _Mtx_init_in_situ(0x180c91910,2,lock_func,unlock_func,0xfffffffffffffffe);
  init_result = register_mutex_handler(FUN_1809417c0);
  return (init_result != 0) - 1;
}

// 函数：初始化字符串配置
void initialize_string_config(void)

{
  uint64_t config_param;
  void *config_source;
  int8_t *buffer_ptr;
  int32_t buffer_size;
  int8_t config_buffer [136];
  
  // 设置配置参数和缓冲区
  config_source = &GLOBAL_CONFIG_SOURCE;
  buffer_ptr = config_buffer;
  config_buffer[0] = 0;
  buffer_size = 7;
  // 安全复制字符串配置到缓冲区
  strcpy_s(config_buffer,0x80,&GLOBAL_STRING_CONFIG,config_param,0xfffffffffffffffe);
  // 初始化全局配置变量
  GLOBAL_CONFIG_VAR_0c = initialize_config_manager(&config_source);
  return;
}

// 函数：注册音频系统组件
void register_audio_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *audio_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  audio_handler = audio_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&AUDIO_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&AUDIO_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置音频组件属性
  next_node[6] = AUDIO_COMPONENT_TYPE_ID;  // 音频组件类型标识
  next_node[7] = AUDIO_COMPONENT_VERSION;  // 音频组件版本
  next_node[8] = &AUDIO_COMPONENT_DATA;  // 音频组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = audio_handler;  // 音频处理函数
  return;
}

// 函数：注册输入系统组件
void register_input_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *input_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  input_handler = input_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&INPUT_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&INPUT_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置输入组件属性
  next_node[6] = INPUT_COMPONENT_TYPE_ID;  // 输入组件类型标识
  next_node[7] = INPUT_COMPONENT_VERSION;  // 输入组件版本
  next_node[8] = &INPUT_COMPONENT_DATA;  // 输入组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_HIGH;  // 优先级
  next_node[10] = input_handler;  // 输入处理函数
  return;
}

// 函数：注册物理系统组件
void register_physics_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  uint64_t physics_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  physics_handler = 0;  // 物理系统处理函数为空
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&PHYSICS_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&PHYSICS_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置物理组件属性
  next_node[6] = PHYSICS_COMPONENT_TYPE_ID;  // 物理组件类型标识
  next_node[7] = PHYSICS_COMPONENT_VERSION;  // 物理组件版本
  next_node[8] = &PHYSICS_COMPONENT_DATA;  // 物理组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = physics_handler;  // 物理处理函数
  return;
}

// 函数：注册网络系统组件
void register_network_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *network_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  network_handler = network_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&NETWORK_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&NETWORK_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置网络组件属性
  next_node[6] = NETWORK_COMPONENT_TYPE_ID;  // 网络组件类型标识
  next_node[7] = NETWORK_COMPONENT_VERSION;  // 网络组件版本
  next_node[8] = &NETWORK_COMPONENT_DATA;  // 网络组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = network_handler;  // 网络处理函数
  return;
}

// 函数：注册AI系统组件
void register_ai_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  uint64_t ai_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  ai_handler = 0;  // AI系统处理函数为空
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&AI_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&AI_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置AI组件属性
  next_node[6] = AI_COMPONENT_TYPE_ID;  // AI组件类型标识
  next_node[7] = AI_COMPONENT_VERSION;  // AI组件版本
  next_node[8] = &AI_COMPONENT_DATA;  // AI组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = ai_handler;  // AI处理函数
  return;
}

// 函数：注册UI系统组件
void register_ui_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  void *ui_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  ui_handler = &ui_system_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&UI_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&UI_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置UI组件属性
  next_node[6] = UI_COMPONENT_TYPE_ID;  // UI组件类型标识
  next_node[7] = UI_COMPONENT_VERSION;  // UI组件版本
  next_node[8] = &UI_COMPONENT_DATA;  // UI组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = ui_handler;  // UI处理函数
  return;
}

// 函数：注册动画系统组件
void register_animation_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  uint64_t animation_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  animation_handler = 0;  // 动画系统处理函数为空
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&ANIMATION_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&ANIMATION_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置动画组件属性
  next_node[6] = ANIMATION_COMPONENT_TYPE_ID;  // 动画组件类型标识
  next_node[7] = ANIMATION_COMPONENT_VERSION;  // 动画组件版本
  next_node[8] = &ANIMATION_COMPONENT_DATA;  // 动画组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = animation_handler;  // 动画处理函数
  return;
}

// 函数：注册场景系统组件
void register_scene_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *scene_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  scene_handler = scene_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SCENE_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&SCENE_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置场景组件属性
  next_node[6] = SCENE_COMPONENT_TYPE_ID;  // 场景组件类型标识
  next_node[7] = SCENE_COMPONENT_VERSION;  // 场景组件版本
  next_node[8] = &SCENE_COMPONENT_DATA;  // 场景组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = scene_handler;  // 场景处理函数
  return;
}

// 函数：注册脚本系统组件
void register_script_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *script_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  script_handler = script_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SCRIPT_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&SCRIPT_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置脚本组件属性
  next_node[6] = SCRIPT_COMPONENT_TYPE_ID;  // 脚本组件类型标识
  next_node[7] = SCRIPT_COMPONENT_VERSION;  // 脚本组件版本
  next_node[8] = &SCRIPT_COMPONENT_DATA;  // 脚本组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = script_handler;  // 脚本处理函数
  return;
}

// 函数：注册资源系统组件
void register_resource_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *resource_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  resource_handler = resource_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&RESOURCE_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&RESOURCE_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置资源组件属性
  next_node[6] = RESOURCE_COMPONENT_TYPE_ID;  // 资源组件类型标识
  next_node[7] = RESOURCE_COMPONENT_VERSION;  // 资源组件版本
  next_node[8] = &RESOURCE_COMPONENT_DATA;  // 资源组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = resource_handler;  // 资源处理函数
  return;
}

// 函数：注册调试系统组件
void register_debug_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *debug_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  debug_handler = debug_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&DEBUG_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&DEBUG_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置调试组件属性
  next_node[6] = DEBUG_COMPONENT_TYPE_ID;  // 调试组件类型标识
  next_node[7] = DEBUG_COMPONENT_VERSION;  // 调试组件版本
  next_node[8] = &DEBUG_COMPONENT_DATA;  // 调试组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_MEDIUM;  // 优先级
  next_node[10] = debug_handler;  // 调试处理函数
  return;
}

// 函数：注册存档系统组件
void register_save_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  uint64_t save_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  save_handler = 0;  // 存档系统处理函数为空
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SAVE_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&SAVE_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置存档组件属性
  next_node[6] = SAVE_COMPONENT_TYPE_ID;  // 存档组件类型标识
  next_node[7] = SAVE_COMPONENT_VERSION;  // 存档组件版本
  next_node[8] = &SAVE_COMPONENT_DATA;  // 存档组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_LOW;  // 优先级
  next_node[10] = save_handler;  // 存档处理函数
  return;
}

// 函数：注册模块系统组件
void register_module_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *module_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  module_handler = module_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&MODULE_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&MODULE_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置模块组件属性
  next_node[6] = MODULE_COMPONENT_TYPE_ID;  // 模块组件类型标识
  next_node[7] = MODULE_COMPONENT_VERSION;  // 模块组件版本
  next_node[8] = &MODULE_COMPONENT_DATA;  // 模块组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_HIGH;  // 优先级
  next_node[10] = module_handler;  // 模块处理函数
  return;
}

// 函数：注册游戏逻辑系统组件
void register_game_logic_system_component(void)

{
  char component_flag;
  uint64_t *component_root;
  int compare_result;
  int64_t *system_manager;
  int64_t allocation_size;
  uint64_t *current_node;
  uint64_t *next_node;
  uint64_t *temp_node;
  uint64_t *new_component;
  code *game_logic_handler;
  
  // 获取系统管理器指针
  system_manager = (int64_t *)get_system_manager();
  component_root = (uint64_t *)*system_manager;
  component_flag = *(char *)((int64_t)component_root[1] + 0x19);
  game_logic_handler = game_logic_component_handler;
  next_node = component_root;
  current_node = (uint64_t *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&GAME_LOGIC_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (uint64_t *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (uint64_t *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((int64_t)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&GAME_LOGIC_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置游戏逻辑组件属性
  next_node[6] = GAME_LOGIC_COMPONENT_TYPE_ID;  // 游戏逻辑组件类型标识
  next_node[7] = GAME_LOGIC_COMPONENT_VERSION;  // 游戏逻辑组件版本
  next_node[8] = &GAME_LOGIC_COMPONENT_DATA;  // 游戏逻辑组件数据指针
  next_node[9] = SYSTEM_COMPONENT_PRIORITY_MEDIUM;  // 优先级
  next_node[10] = game_logic_handler;  // 游戏逻辑处理函数
  return;
}

// 函数：系统全局数据初始化器
int FUN_18002e3e0(void)

{
  int64_t lVar1;
  uint64_t in_R9;
  
  init_system_control_ui = &system_config_ptr;
  init_system_control_ui = &system_memory_64e8;
  return 0;
}

// 函数：系统配置管理器
void FUN_18002e8e0(void)

{
  uint64_t in_R9;
  void *puStack_a0;
  int8_t *puStack_98;
  int32_t uStack_90;
  int8_t auStack_88 [136];
  
  puStack_a0 = &memory_allocator_3432_ptr;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xb;
  strcpy_s(auStack_88,0x80,&processed_var_7352_ptr,in_R9,0xfffffffffffffffe);
  init_system_ui = SystemCore_ConfigManager(&puStack_a0);
  return;
}

// 函数：系统音频组件处理器
void FUN_18002e970(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025cc00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_10a0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = AUDIO_COMPONENT_TYPE_ID;
  puVar7[7] = AUDIO_COMPONENT_VERSION;
  puVar7[8] = &processed_var_7584_ptr;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}

// 函数：系统输入组件处理器
void FUN_18002ea70(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025c000;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_1078,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1078,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = INPUT_COMPONENT_TYPE_ID;
  puVar7[7] = INPUT_COMPONENT_VERSION;
  puVar7[8] = &processed_var_7608_ptr;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}

// 函数：系统物理组件处理器
void FUN_18002eb70(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_1050,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1050,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = PHYSICS_COMPONENT_TYPE_ID;
  puVar7[7] = PHYSICS_COMPONENT_VERSION;
  puVar7[8] = &processed_var_7632_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}

// 函数：系统网络组件处理器
void FUN_18002ec70(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025d270;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_1028,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1028,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = NETWORK_COMPONENT_TYPE_ID;
  puVar7[7] = NETWORK_COMPONENT_VERSION;
  puVar7[8] = &processed_var_7656_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}

// 函数：系统AI组件处理器
void FUN_18002ed70(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_1000,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_1000,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = AI_COMPONENT_TYPE_ID;
  puVar7[7] = AI_COMPONENT_VERSION;
  puVar7[8] = &processed_var_7680_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}

// 函数：系统UI组件处理器
void FUN_18002ee70(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  void *puStackX_18;
  
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  puStackX_18 = &rendering_buffer_2048_ptr;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_0fd8,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_0fd8,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = UI_COMPONENT_TYPE_ID;
  puVar7[7] = UI_COMPONENT_VERSION;
  puVar7[8] = &processed_var_7704_ptr;
  puVar7[9] = 0;
  puVar7[10] = puStackX_18;
  return;
}

// 函数：系统动画组件处理器
void FUN_18002ef70(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  uint64_t uStackX_18;
  
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  uStackX_18 = 0;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_0fb0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_0fb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = ANIMATION_COMPONENT_TYPE_ID;
  puVar7[7] = ANIMATION_COMPONENT_VERSION;
  puVar7[8] = &processed_var_7728_ptr;
  puVar7[9] = 0;
  puVar7[10] = uStackX_18;
  return;
}

// 函数：系统脚本组件处理器
void FUN_18002f070(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025e330;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_0d48,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_0d48,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = SCRIPT_COMPONENT_TYPE_ID;
  puVar7[7] = SCRIPT_COMPONENT_VERSION;
  puVar7[8] = &processed_var_7824_ptr;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}

// 函数：系统音频组件处理器（副本）
void FUN_18002f170(void)

{
  char cVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puStackX_10;
  code *pcStackX_18;
  
  plVar4 = (int64_t *)NetworkDataProcessor();
  puVar2 = (uint64_t *)*plVar4;
  cVar1 = *(char *)((int64_t)puVar2[1] + 0x19);
  pcStackX_18 = FUN_18025cc00;
  puVar7 = puVar2;
  puVar6 = (uint64_t *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&system_memory_10a0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&system_memory_10a0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = NetworkConnectionManager(plVar4);
    NetworkProtocolHandler(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = AUDIO_COMPONENT_TYPE_ID;
  puVar7[7] = AUDIO_COMPONENT_VERSION;
  puVar7[8] = &processed_var_7584_ptr;
  puVar7[9] = 1;
  puVar7[10] = pcStackX_18;
  return;
}