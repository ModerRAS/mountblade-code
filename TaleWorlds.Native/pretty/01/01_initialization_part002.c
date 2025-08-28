#include "TaleWorlds.Native.Split.h"

// 01_initialization_part002.c - 初始化模块第二部分 - 26个函数
// 本文件包含系统初始化相关的函数，主要用于注册各种系统组件

// 函数：注册渲染系统组件
void register_render_system_components(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  code *component_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  component_handler = render_component_handler;
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&RENDER_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&RENDER_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置组件属性
  next_node[6] = 0x40afa5469b6ac06d;  // 组件类型标识
  next_node[7] = 0x2f4bab01d34055a5;  // 组件版本
  next_node[8] = &RENDER_COMPONENT_DATA;  // 组件数据指针
  next_node[9] = 3;  // 优先级
  next_node[10] = component_handler;  // 处理函数
  return;
}



// 函数：初始化互斥锁
int initialize_mutex(undefined8 mutex_id, undefined8 mutex_attr, undefined8 lock_func, undefined8 unlock_func)

{
  longlong init_result;
  
  // 初始化互斥锁
  _Mtx_init_in_situ(0x180c91910,2,lock_func,unlock_func,0xfffffffffffffffe);
  init_result = register_mutex_handler(FUN_1809417c0);
  return (init_result != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：初始化字符串配置
void initialize_string_config(void)

{
  undefined8 config_param;
  undefined *config_source;
  undefined1 *buffer_ptr;
  undefined4 buffer_size;
  undefined1 config_buffer [136];
  
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
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  code *audio_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  audio_handler = audio_component_handler;
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&AUDIO_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&AUDIO_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置音频组件属性
  next_node[6] = 0x43330a43fcdb3653;  // 音频组件类型标识
  next_node[7] = 0xdcfdc333a769ec93;  // 音频组件版本
  next_node[8] = &AUDIO_COMPONENT_DATA;  // 音频组件数据指针
  next_node[9] = 1;  // 优先级
  next_node[10] = audio_handler;  // 音频处理函数
  return;
}





// 函数：注册输入系统组件
void register_input_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  code *input_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  input_handler = input_component_handler;
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&INPUT_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&INPUT_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置输入组件属性
  next_node[6] = 0x431d7c8d7c475be2;  // 输入组件类型标识
  next_node[7] = 0xb97f048d2153e1b0;  // 输入组件版本
  next_node[8] = &INPUT_COMPONENT_DATA;  // 输入组件数据指针
  next_node[9] = 4;  // 优先级
  next_node[10] = input_handler;  // 输入处理函数
  return;
}





// 函数：注册物理系统组件
void register_physics_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  undefined8 physics_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  physics_handler = 0;  // 物理系统处理函数为空
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&PHYSICS_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&PHYSICS_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置物理组件属性
  next_node[6] = 0x4b2d79e470ee4e2c;  // 物理组件类型标识
  next_node[7] = 0x9c552acd3ed5548d;  // 物理组件版本
  next_node[8] = &PHYSICS_COMPONENT_DATA;  // 物理组件数据指针
  next_node[9] = 0;  // 优先级
  next_node[10] = physics_handler;  // 物理处理函数
  return;
}





// 函数：注册网络系统组件
void register_network_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  code *network_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  network_handler = network_component_handler;
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&NETWORK_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&NETWORK_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置网络组件属性
  next_node[6] = 0x49086ba08ab981a7;  // 网络组件类型标识
  next_node[7] = 0xa9191d34ad910696;  // 网络组件版本
  next_node[8] = &NETWORK_COMPONENT_DATA;  // 网络组件数据指针
  next_node[9] = 0;  // 优先级
  next_node[10] = network_handler;  // 网络处理函数
  return;
}





// 函数：注册AI系统组件
void register_ai_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  undefined8 ai_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  ai_handler = 0;  // AI系统处理函数为空
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&AI_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&AI_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置AI组件属性
  next_node[6] = 0x402feffe4481676e;  // AI组件类型标识
  next_node[7] = 0xd4c2151109de93a0;  // AI组件版本
  next_node[8] = &AI_COMPONENT_DATA;  // AI组件数据指针
  next_node[9] = 0;  // 优先级
  next_node[10] = ai_handler;  // AI处理函数
  return;
}





// 函数：注册UI系统组件
void register_ui_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  undefined *ui_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  ui_handler = &ui_system_handler;
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&UI_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&UI_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置UI组件属性
  next_node[6] = 0x4384dcc4b6d3f417;  // UI组件类型标识
  next_node[7] = 0x92a15d52fe2679bd;  // UI组件版本
  next_node[8] = &UI_COMPONENT_DATA;  // UI组件数据指针
  next_node[9] = 0;  // 优先级
  next_node[10] = ui_handler;  // UI处理函数
  return;
}





// 函数：注册动画系统组件
void register_animation_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  undefined8 animation_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  animation_handler = 0;  // 动画系统处理函数为空
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&ANIMATION_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&ANIMATION_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置动画组件属性
  next_node[6] = 0x4140994454d56503;  // 动画组件类型标识
  next_node[7] = 0x399eced9bb5517ad;  // 动画组件版本
  next_node[8] = &ANIMATION_COMPONENT_DATA;  // 动画组件数据指针
  next_node[9] = 0;  // 优先级
  next_node[10] = animation_handler;  // 动画处理函数
  return;
}





// 函数：注册场景系统组件
void register_scene_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  code *scene_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  scene_handler = scene_component_handler;
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SCENE_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&SCENE_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置场景组件属性
  next_node[6] = 0x449bafe9b77ddd3c;  // 场景组件类型标识
  next_node[7] = 0xc160408bde99e59f;  // 场景组件版本
  next_node[8] = &SCENE_COMPONENT_DATA;  // 场景组件数据指针
  next_node[9] = 0;  // 优先级
  next_node[10] = scene_handler;  // 场景处理函数
  return;
}





// 函数：注册脚本系统组件
void register_script_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  code *script_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  script_handler = script_component_handler;
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SCRIPT_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&SCRIPT_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置脚本组件属性
  next_node[6] = 0x45425dc186a5d575;  // 脚本组件类型标识
  next_node[7] = 0xfab48faa65382fa5;  // 脚本组件版本
  next_node[8] = &SCRIPT_COMPONENT_DATA;  // 脚本组件数据指针
  next_node[9] = 0;  // 优先级
  next_node[10] = script_handler;  // 脚本处理函数
  return;
}





// 函数：注册资源系统组件
void register_resource_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  code *resource_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  resource_handler = resource_component_handler;
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&RESOURCE_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&RESOURCE_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置资源组件属性
  next_node[6] = 0x406be72011d07d37;  // 资源组件类型标识
  next_node[7] = 0x71876af946c867ab;  // 资源组件版本
  next_node[8] = &RESOURCE_COMPONENT_DATA;  // 资源组件数据指针
  next_node[9] = 0;  // 优先级
  next_node[10] = resource_handler;  // 资源处理函数
  return;
}





// 函数：注册调试系统组件
void register_debug_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  code *debug_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  debug_handler = debug_component_handler;
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&DEBUG_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&DEBUG_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置调试组件属性
  next_node[6] = 0x40afa5469b6ac06d;  // 调试组件类型标识
  next_node[7] = 0x2f4bab01d34055a5;  // 调试组件版本
  next_node[8] = &DEBUG_COMPONENT_DATA;  // 调试组件数据指针
  next_node[9] = 3;  // 优先级
  next_node[10] = debug_handler;  // 调试处理函数
  return;
}





// 函数：注册存档系统组件
void register_save_system_component(void)

{
  char component_flag;
  undefined8 *component_root;
  int compare_result;
  longlong *system_manager;
  longlong allocation_size;
  undefined8 *current_node;
  undefined8 *next_node;
  undefined8 *temp_node;
  undefined8 *new_component;
  undefined8 save_handler;
  
  // 获取系统管理器指针
  system_manager = (longlong *)get_system_manager();
  component_root = (undefined8 *)*system_manager;
  component_flag = *(char *)((longlong)component_root[1] + 0x19);
  save_handler = 0;  // 存档系统处理函数为空
  next_node = component_root;
  current_node = (undefined8 *)component_root[1];
  
  // 遍历组件树查找合适位置
  while (component_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SAVE_COMPONENT_ID,0x10);
    if (compare_result < 0) {
      temp_node = (undefined8 *)current_node[2];
      current_node = next_node;
    }
    else {
      temp_node = (undefined8 *)*current_node;
    }
    next_node = current_node;
    current_node = temp_node;
    component_flag = *(char *)((longlong)temp_node + 0x19);
  }
  
  // 如果需要创建新组件节点
  if ((next_node == component_root) || (compare_result = memcmp(&SAVE_COMPONENT_ID,next_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_component_memory(system_manager);
    create_component_node(system_manager,&new_component,next_node,allocation_size + 0x20,allocation_size);
    next_node = new_component;
  }
  
  // 设置存档组件属性
  next_node[6] = 0x42bea5b911d9c4bf;  // 存档组件类型标识
  next_node[7] = 0x1aa83fc0020dc1b6;  // 存档组件版本
  next_node[8] = &SAVE_COMPONENT_DATA;  // 存档组件数据指针
  next_node[9] = 0;  // 优先级
  next_node[10] = save_handler;  // 存档处理函数
  return;
}





// 函数: void FUN_18002e1e0(void)
void FUN_18002e1e0(void)

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
  pcStackX_18 = FUN_1802633c0;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00bb0,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00bb0,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x40db4257e97d3df8;
  puVar7[7] = 0x81d539e33614429f;
  puVar7[8] = &UNK_180a004a8;
  puVar7[9] = 4;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_18002e2e0(void)
void FUN_18002e2e0(void)

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
  pcStackX_18 = FUN_180262b00;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00b88,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00b88,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x4e33c4803e67a08f;
  puVar7[7] = 0x703a29a844ce399;
  puVar7[8] = &UNK_180a004c0;
  puVar7[9] = 3;
  puVar7[10] = pcStackX_18;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18002e3e0(void)

{
  longlong lVar1;
  undefined8 in_R9;
  
  _DAT_180bf64d0 = &UNK_1809fdc18;
  _DAT_180bf64d8 = &DAT_180bf64e8;


// 函数: void FUN_18002e8e0(void)
void FUN_18002e8e0(void)

{
  undefined8 in_R9;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_90;
  undefined1 auStack_88 [136];
  
  puStack_a0 = &UNK_1809fcc28;
  puStack_98 = auStack_88;
  auStack_88[0] = 0;
  uStack_90 = 0xb;
  strcpy_s(auStack_88,0x80,&UNK_180a02998,in_R9,0xfffffffffffffffe);
  _DAT_180c9196c = FUN_180623800(&puStack_a0);
  return;
}





// 函数: void FUN_18002e970(void)
void FUN_18002e970(void)

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





// 函数: void FUN_18002ea70(void)
void FUN_18002ea70(void)

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





// 函数: void FUN_18002eb70(void)
void FUN_18002eb70(void)

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





// 函数: void FUN_18002ec70(void)
void FUN_18002ec70(void)

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





// 函数: void FUN_18002ed70(void)
void FUN_18002ed70(void)

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





// 函数: void FUN_18002ee70(void)
void FUN_18002ee70(void)

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





// 函数: void FUN_18002ef70(void)
void FUN_18002ef70(void)

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





// 函数: void FUN_18002f070(void)
void FUN_18002f070(void)

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
  pcStackX_18 = FUN_18025e330;
  puVar7 = puVar2;
  puVar6 = (undefined8 *)puVar2[1];
  while (cVar1 == '\0') {
    iVar3 = memcmp(puVar6 + 4,&DAT_180a00d48,0x10);
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
  if ((puVar7 == puVar2) || (iVar3 = memcmp(&DAT_180a00d48,puVar7 + 4,0x10), iVar3 < 0)) {
    lVar5 = FUN_18008f0d0(plVar4);
    FUN_18008f140(plVar4,&puStackX_10,puVar7,lVar5 + 0x20,lVar5);
    puVar7 = puStackX_10;
  }
  puVar7[6] = 0x45425dc186a5d575;
  puVar7[7] = 0xfab48faa65382fa5;
  puVar7[8] = &UNK_180a00460;
  puVar7[9] = 0;
  puVar7[10] = pcStackX_18;
  return;
}





// 函数: void FUN_18002f170(void)
void FUN_18002f170(void)

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





