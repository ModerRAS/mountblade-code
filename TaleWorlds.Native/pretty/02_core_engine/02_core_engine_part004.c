#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part004.c - 核心引擎组件注册函数 (26个函数)

/**
 * 注册网络消息处理器
 * 在全局注册表中注册网络消息处理接口
 */
void register_network_message_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  // 获取全局池管理器
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  
  // 检查根节点状态
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_1802285e0;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  // 遍历注册表查找合适位置
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_1809ff9c0, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  // 如果需要创建新条目
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_1809ff9c0, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  // 设置条目数据
  previous_node[6] = 0x40afa5469b6ac06d;  // 网络消息类型标识符
  previous_node[7] = 0x2f4bab01d34055a5;  // 版本信息
  previous_node[8] = &UNK_1809ff990;      // 消息格式描述符
  previous_node[9] = 3;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册输入设备处理器
 * 在全局注册表中注册输入设备处理接口
 */
void register_input_device_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025cc00;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a010a0, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a010a0, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x43330a43fcdb3653;  // 输入设备类型标识符
  previous_node[7] = 0xdcfdc333a769ec93;  // 版本信息
  previous_node[8] = &UNK_180a00370;      // 设备描述符
  previous_node[9] = 1;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册音频系统处理器
 * 在全局注册表中注册音频系统处理接口
 */
void register_audio_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025c000;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01078, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01078, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x431d7c8d7c475be2;  // 音频系统类型标识符
  previous_node[7] = 0xb97f048d2153e1b0;  // 版本信息
  previous_node[8] = &UNK_180a00388;      // 音频格式描述符
  previous_node[9] = 4;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册渲染管线处理器
 * 在全局注册表中注册渲染管线处理接口
 */
void register_render_pipeline_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = 0;  // 无特定处理函数
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01050, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01050, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x4b2d79e470ee4e2c;  // 渲染管线类型标识符
  previous_node[7] = 0x9c552acd3ed5548d;  // 版本信息
  previous_node[8] = &UNK_180a003a0;      // 渲染格式描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册物理系统处理器
 * 在全局注册表中注册物理系统处理接口
 */
void register_physics_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025d270;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01028, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01028, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x49086ba08ab981a7;  // 物理系统类型标识符
  previous_node[7] = 0xa9191d34ad910696;  // 版本信息
  previous_node[8] = &UNK_180a003b8;      // 物理引擎描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册动画系统处理器
 * 在全局注册表中注册动画系统处理接口
 */
void register_animation_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = 0;  // 无特定处理函数
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01000, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01000, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x402feffe4481676e;  // 动画系统类型标识符
  previous_node[7] = 0xd4c2151109de93a0;  // 版本信息
  previous_node[8] = &UNK_180a003d0;      // 动画格式描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册用户界面处理器
 * 在全局注册表中注册用户界面处理接口
 */
void register_user_interface_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *ui_module;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  ui_module = &UNK_1800868c0;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00fd8, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00fd8, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x4384dcc4b6d3f417;  // 用户界面类型标识符
  previous_node[7] = 0x92a15d52fe2679bd;  // 版本信息
  previous_node[8] = &UNK_180a003e8;      // 界面描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = ui_module;           // UI模块指针
  return;
}

/**
 * 注册资源管理器
 * 在全局注册表中注册资源管理接口
 */
void register_resource_manager(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = 0;  // 无特定处理函数
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00fb0, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00fb0, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x4140994454d56503;  // 资源管理类型标识符
  previous_node[7] = 0x399eced9bb5517ad;  // 版本信息
  previous_node[8] = &UNK_180a00400;      // 资源描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册场景管理器
 * 在全局注册表中注册场景管理接口
 */
void register_scene_manager(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_1802633c0;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00bb0, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00bb0, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x40db4257e97d3df8;  // 场景管理类型标识符
  previous_node[7] = 0x81d539e33614429f;  // 版本信息
  previous_node[8] = &UNK_180a004a8;      // 场景描述符
  previous_node[9] = 4;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册脚本引擎处理器
 * 在全局注册表中注册脚本引擎处理接口
 */
void register_script_engine_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_180262b00;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00b88, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00b88, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x4e33c4803e67a08f;  // 脚本引擎类型标识符
  previous_node[7] = 0x703a29a844ce399;  // 版本信息
  previous_node[8] = &UNK_180a004c0;      // 脚本描述符
  previous_node[9] = 3;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册网络同步处理器
 * 在全局注册表中注册网络同步处理接口
 */
void register_network_sync_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025cc00;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a010a0, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a010a0, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x43330a43fcdb3653;  // 网络同步类型标识符
  previous_node[7] = 0xdcfdc333a769ec93;  // 版本信息
  previous_node[8] = &UNK_180a00370;      // 同步描述符
  previous_node[9] = 1;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册粒子系统处理器
 * 在全局注册表中注册粒子系统处理接口
 */
void register_particle_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025c000;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01078, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01078, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x431d7c8d7c475be2;  // 粒子系统类型标识符
  previous_node[7] = 0xb97f048d2153e1b0;  // 版本信息
  previous_node[8] = &UNK_180a00388;      // 粒子描述符
  previous_node[9] = 4;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册光照系统处理器
 * 在全局注册表中注册光照系统处理接口
 */
void register_lighting_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = 0;  // 无特定处理函数
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01050, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01050, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x4b2d79e470ee4e2c;  // 光照系统类型标识符
  previous_node[7] = 0x9c552acd3ed5548d;  // 版本信息
  previous_node[8] = &UNK_180a003a0;      // 光照描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册材质系统处理器
 * 在全局注册表中注册材质系统处理接口
 */
void register_material_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025d270;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01028, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01028, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x49086ba08ab981a7;  // 材质系统类型标识符
  previous_node[7] = 0xa9191d34ad910696;  // 版本信息
  previous_node[8] = &UNK_180a003b8;      // 材质描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册阴影系统处理器
 * 在全局注册表中注册阴影系统处理接口
 */
void register_shadow_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = 0;  // 无特定处理函数
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01000, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01000, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x402feffe4481676e;  // 阴影系统类型标识符
  previous_node[7] = 0xd4c2151109de93a0;  // 版本信息
  previous_node[8] = &UNK_180a003d0;      // 阴影描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册后处理效果处理器
 * 在全局注册表中注册后处理效果处理接口
 */
void register_postprocess_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *postprocess_module;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  postprocess_module = &UNK_1800868c0;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00fd8, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00fd8, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x4384dcc4b6d3f417;  // 后处理效果类型标识符
  previous_node[7] = 0x92a15d52fe2679bd;  // 版本信息
  previous_node[8] = &UNK_180a003e8;      // 后处理描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = postprocess_module;  // 后处理模块指针
  return;
}

/**
 * 注册AI系统处理器
 * 在全局注册表中注册AI系统处理接口
 */
void register_ai_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = 0;  // 无特定处理函数
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00fb0, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00fb0, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x4140994454d56503;  // AI系统类型标识符
  previous_node[7] = 0x399eced9bb5517ad;  // 版本信息
  previous_node[8] = &UNK_180a00400;      // AI描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册导航系统处理器
 * 在全局注册表中注册导航系统处理接口
 */
void register_navigation_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025d510;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00e28, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00e28, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x449bafe9b77ddd3c;  // 导航系统类型标识符
  previous_node[7] = 0xc160408bde99e59f;  // 版本信息
  previous_node[8] = &UNK_180a00430;      // 导航描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册碰撞检测处理器
 * 在全局注册表中注册碰撞检测处理接口
 */
void register_collision_detection_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025e330;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00d48, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00d48, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x45425dc186a5d575;  // 碰撞检测类型标识符
  previous_node[7] = 0xfab48faa65382fa5;  // 版本信息
  previous_node[8] = &UNK_180a00460;      // 碰撞描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册游戏逻辑处理器
 * 在全局注册表中注册游戏逻辑处理接口
 */
void register_game_logic_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_1802633c0;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00bb0, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00bb0, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x40db4257e97d3df8;  // 游戏逻辑类型标识符
  previous_node[7] = 0x81d539e33614429f;  // 版本信息
  previous_node[8] = &UNK_180a004a8;      // 游戏逻辑描述符
  previous_node[9] = 4;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册存档系统处理器
 * 在全局注册表中注册存档系统处理接口
 */
void register_save_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_180262b00;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a00b88, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a00b88, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x4e33c4803e67a08f;  // 存档系统类型标识符
  previous_node[7] = 0x703a29a844ce399;  // 版本信息
  previous_node[8] = &UNK_180a004c0;      // 存档描述符
  previous_node[9] = 3;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册调试系统处理器
 * 在全局注册表中注册调试系统处理接口
 */
void register_debug_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = 0;  // 无特定处理函数
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_1809fe0d0, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_1809fe0d0, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x42bea5b911d9c4bf;  // 调试系统类型标识符
  previous_node[7] = 0x1aa83fc0020dc1b6;  // 版本信息
  previous_node[8] = &UNK_1809fd0d8;      // 调试描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册性能监控处理器
 * 在全局注册表中注册性能监控处理接口
 */
void register_performance_monitor_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025cc00;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a010a0, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a010a0, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x43330a43fcdb3653;  // 性能监控类型标识符
  previous_node[7] = 0xdcfdc333a769ec93;  // 版本信息
  previous_node[8] = &UNK_180a00370;      // 性能描述符
  previous_node[9] = 1;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册内存管理器
 * 在全局注册表中注册内存管理接口
 */
void register_memory_manager(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025c000;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01078, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01078, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x431d7c8d7c475be2;  // 内存管理类型标识符
  previous_node[7] = 0xb97f048d2153e1b0;  // 版本信息
  previous_node[8] = &UNK_180a00388;      // 内存描述符
  previous_node[9] = 4;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册时间系统处理器
 * 在全局注册表中注册时间系统处理接口
 */
void register_time_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = 0;  // 无特定处理函数
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01050, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01050, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x4b2d79e470ee4e2c;  // 时间系统类型标识符
  previous_node[7] = 0x9c552acd3ed5548d;  // 版本信息
  previous_node[8] = &UNK_180a003a0;      // 时间描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}

/**
 * 注册事件系统处理器
 * 在全局注册表中注册事件系统处理接口
 */
void register_event_system_handler(void)

{
  char is_active;
  void **registry_root;
  int compare_result;
  longlong *pool_manager;
  longlong allocation_size;
  void **current_node;
  void **previous_node;
  void **next_node;
  void *new_entry;
  void *handler_function;
  
  pool_manager = (longlong *)FUN_18008d070();
  registry_root = (void **)*pool_manager;
  is_active = *(char *)((longlong)registry_root[1] + 0x19);
  handler_function = FUN_18025d270;
  previous_node = registry_root;
  current_node = (void **)registry_root[1];
  
  while (is_active == '\0') {
    compare_result = memcmp(current_node + 4, &DAT_180a01028, 0x10);
    if (compare_result < 0) {
      next_node = (void **)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (void **)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    is_active = *(char *)((longlong)next_node + 0x19);
  }
  
  if ((previous_node == registry_root) || 
      (compare_result = memcmp(&DAT_180a01028, previous_node + 4, 0x10), compare_result < 0)) {
    allocation_size = FUN_18008f0d0(pool_manager);
    FUN_18008f140(pool_manager, &new_entry, previous_node, allocation_size + 0x20, allocation_size);
    previous_node = new_entry;
  }
  
  previous_node[6] = 0x49086ba08ab981a7;  // 事件系统类型标识符
  previous_node[7] = 0xa9191d34ad910696;  // 版本信息
  previous_node[8] = &UNK_180a003b8;      // 事件描述符
  previous_node[9] = 0;                   // 优先级
  previous_node[10] = handler_function;    // 处理函数指针
  return;
}