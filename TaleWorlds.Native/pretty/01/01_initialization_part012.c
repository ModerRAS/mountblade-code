#include "TaleWorlds.Native.Split.h"

// 01_initialization_part012.c - 26 个函数

// 函数: 注册游戏模块类型A
// 用于在引擎中注册特定类型的游戏模块
void register_game_module_type_a(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&MODULE_TYPE_A_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&MODULE_TYPE_A_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x46c54bc98fc3fc2a;
  previous_node[7] = 0x727b256e3af32585;
  previous_node[8] = &MODULE_TYPE_A_VTABLE;
  previous_node[9] = 2;
  previous_node[10] = module_priority;
  return;
}



// 函数: 注册游戏模块类型B
// 用于在引擎中注册另一种类型的游戏模块
void register_game_module_type_b(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&MODULE_TYPE_B_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&MODULE_TYPE_B_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x41ffd0b76c1e136f;
  previous_node[7] = 0x25db30365f277abb;
  previous_node[8] = &MODULE_TYPE_B_VTABLE;
  previous_node[9] = 2;
  previous_node[10] = module_priority;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 初始化渲染系统组件
// 设置渲染系统的初始状态和配置
void initialize_rendering_system_component(void)

{
  uint64_t render_config;
  void *render_interface;
  int8_t *render_context;
  int32_t render_flags;
  int8_t render_buffer [136];
  
  render_interface = &RENDER_INTERFACE_TABLE;
  render_context = render_buffer;
  render_buffer[0] = 0;
  render_flags = 0xd;
  strcpy_s(render_buffer,0x80,&RENDER_CONFIG_STRING,render_config,0xfffffffffffffffe);
  global_render_context = initialize_render_pipeline(&render_interface);
  return;
}



// 函数: 初始化线程同步机制
// 设置游戏引擎的线程同步和互斥机制
int initialize_thread_synchronization(uint64_t sync_param1,uint64_t sync_param2,uint64_t sync_param3,uint64_t sync_param4)

{
  longlong init_result;
  
  _Mtx_init_in_situ(THREAD_MUTEX_ADDR,2,sync_param3,sync_param4,0xfffffffffffffffe);
  init_result = register_thread_callback(THREAD_CALLBACK_HANDLER);
  return (init_result != 0) - 1;
}





// 函数: 注册游戏模块类型C
// 用于在引擎中注册第三种类型的游戏模块
void register_game_module_type_c(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&MODULE_TYPE_C_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&MODULE_TYPE_C_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x46c54bc98fc3fc2a;
  previous_node[7] = 0x727b256e3af32585;
  previous_node[8] = &MODULE_TYPE_C_VTABLE;
  previous_node[9] = 2;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册游戏模块类型D
// 用于在引擎中注册第四种类型的游戏模块
void register_game_module_type_d(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&MODULE_TYPE_D_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&MODULE_TYPE_D_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x41ffd0b76c1e136f;
  previous_node[7] = 0x25db30365f277abb;
  previous_node[8] = &MODULE_TYPE_D_VTABLE;
  previous_node[9] = 2;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册物理系统模块
// 注册游戏物理引擎的相关模块
void register_physics_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  code *physics_handler;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  physics_handler = physics_collision_handler;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&PHYSICS_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&PHYSICS_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x406be72011d07d37;
  previous_node[7] = 0x71876af946c867ab;
  previous_node[8] = &PHYSICS_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = physics_handler;
  return;
}





// 函数: 注册音频系统模块
// 注册游戏音频引擎的相关模块
void register_audio_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  code *audio_handler;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  audio_handler = audio_stream_handler;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&AUDIO_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&AUDIO_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x40afa5469b6ac06d;
  previous_node[7] = 0x2f4bab01d34055a5;
  previous_node[8] = &AUDIO_MODULE_VTABLE;
  previous_node[9] = 3;
  previous_node[10] = audio_handler;
  return;
}





// 函数: 注册输入系统模块
// 注册游戏输入处理的相关模块
void register_input_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  code *input_handler;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  input_handler = input_event_handler;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&INPUT_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&INPUT_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x43330a43fcdb3653;
  previous_node[7] = 0xdcfdc333a769ec93;
  previous_node[8] = &INPUT_MODULE_VTABLE;
  previous_node[9] = 1;
  previous_node[10] = input_handler;
  return;
}





// 函数: 注册网络系统模块
// 注册游戏网络通信的相关模块
void register_network_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  code *network_handler;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  network_handler = network_packet_handler;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&NETWORK_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&NETWORK_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x431d7c8d7c475be2;
  previous_node[7] = 0xb97f048d2153e1b0;
  previous_node[8] = &NETWORK_MODULE_VTABLE;
  previous_node[9] = 4;
  previous_node[10] = network_handler;
  return;
}





// 函数: 注册资源管理模块
// 注册游戏资源管理系统的相关模块
void register_resource_management_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&RESOURCE_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&RESOURCE_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x4b2d79e470ee4e2c;
  previous_node[7] = 0x9c552acd3ed5548d;
  previous_node[8] = &RESOURCE_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册UI系统模块
// 注册游戏用户界面的相关模块
void register_ui_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  code *ui_handler;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  ui_handler = ui_event_handler;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&UI_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&UI_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x49086ba08ab981a7;
  previous_node[7] = 0xa9191d34ad910696;
  previous_node[8] = &UI_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = ui_handler;
  return;
}





// 函数: 注册场景管理模块
// 注册游戏场景管理系统的相关模块
void register_scene_management_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SCENE_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&SCENE_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x402feffe4481676e;
  previous_node[7] = 0xd4c2151109de93a0;
  previous_node[8] = &SCENE_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册脚本系统模块
// 注册游戏脚本引擎的相关模块
void register_script_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  void *script_engine;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  script_engine = &SCRIPT_ENGINE_INTERFACE;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SCRIPT_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&SCRIPT_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x4384dcc4b6d3f417;
  previous_node[7] = 0x92a15d52fe2679bd;
  previous_node[8] = &SCRIPT_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = script_engine;
  return;
}





// 函数: 注册动画系统模块
// 注册游戏动画系统的相关模块
void register_animation_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&ANIMATION_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&ANIMATION_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x4140994454d56503;
  previous_node[7] = 0x399eced9bb5517ad;
  previous_node[8] = &ANIMATION_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册AI系统模块
// 注册游戏人工智能系统的相关模块
void register_ai_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  code *ai_handler;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  ai_handler = ai_behavior_handler;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&AI_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&AI_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x4fc124d23d41985f;
  previous_node[7] = 0xe2f4a30d6e6ae482;
  previous_node[8] = &AI_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = ai_handler;
  return;
}





// 函数: 注册粒子系统模块
// 注册游戏粒子效果系统的相关模块
void register_particle_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&PARTICLE_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&PARTICLE_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x4770584fbb1df897;
  previous_node[7] = 0x47f249e43f66f2ab;
  previous_node[8] = &PARTICLE_MODULE_VTABLE;
  previous_node[9] = 1;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册光照系统模块
// 注册游戏光照系统的相关模块
void register_lighting_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&LIGHTING_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&LIGHTING_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x4666df49b97e0f10;
  previous_node[7] = 0x4e4b0d63a6ad1d8f;
  previous_node[8] = &LIGHTING_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册阴影系统模块
// 注册游戏阴影系统的相关模块
void register_shadow_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SHADOW_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&SHADOW_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x46ecbd4daf41613e;
  previous_node[7] = 0xdc42c056bbde8482;
  previous_node[8] = &SHADOW_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册后处理系统模块
// 注册游戏后处理效果的相关模块
void register_post_processing_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&POST_PROCESSING_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&POST_PROCESSING_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x4c868a42644030f6;
  previous_node[7] = 0xc29193aa9d9b35b9;
  previous_node[8] = &POST_PROCESSING_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册材质系统模块
// 注册游戏材质系统的相关模块
void register_material_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&MATERIAL_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&MATERIAL_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x40ea3a798283cbbb;
  previous_node[7] = 0x7f74eb2c5a7fadae;
  previous_node[8] = &MATERIAL_MODULE_VTABLE;
  previous_node[9] = 3;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册纹理系统模块
// 注册游戏纹理系统的相关模块
void register_texture_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&TEXTURE_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&TEXTURE_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x45b8d074df27d12f;
  previous_node[7] = 0x8d98f4c06880eda4;
  previous_node[8] = &TEXTURE_MODULE_VTABLE;
  previous_node[9] = 3;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册几何系统模块
// 注册游戏几何体系统的相关模块
void register_geometry_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&GEOMETRY_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&GEOMETRY_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x42d293584c8cf3e5;
  previous_node[7] = 0x355ffeb2d29e668a;
  previous_node[8] = &GEOMETRY_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = module_priority;
  return;
}





// 函数: 注册着色器系统模块
// 注册游戏着色器系统的相关模块
void register_shader_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  code *shader_handler;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  shader_handler = shader_compiler_handler;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&SHADER_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&SHADER_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x421c3cedd07d816d;
  previous_node[7] = 0xbec25de793b7afa6;
  previous_node[8] = &SHADER_MODULE_VTABLE;
  previous_node[9] = 0;
  previous_node[10] = shader_handler;
  return;
}





// 函数: 注册缓冲区系统模块
// 注册游戏缓冲区系统的相关模块
void register_buffer_system_module(void)

{
  char module_flag;
  uint64_t *module_root;
  int compare_result;
  longlong *engine_context;
  longlong allocation_size;
  uint64_t *current_node;
  uint64_t *previous_node;
  uint64_t *next_node;
  uint64_t *new_module_entry;
  uint64_t module_priority;
  
  engine_context = (longlong *)get_engine_context();
  module_root = (uint64_t *)*engine_context;
  module_flag = *(char *)((longlong)module_root[1] + 0x19);
  module_priority = 0;
  previous_node = module_root;
  current_node = (uint64_t *)module_root[1];
  while (module_flag == '\0') {
    compare_result = memcmp(current_node + 4,&BUFFER_MODULE_ID,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)current_node[2];
      current_node = previous_node;
    }
    else {
      next_node = (uint64_t *)*current_node;
    }
    previous_node = current_node;
    current_node = next_node;
    module_flag = *(char *)((longlong)next_node + 0x19);
  }
  if ((previous_node == module_root) || (compare_result = memcmp(&BUFFER_MODULE_ID,previous_node + 4,0x10), compare_result < 0)) {
    allocation_size = allocate_module_memory(engine_context);
    create_module_entry(engine_context,&new_module_entry,previous_node,allocation_size + 0x20,allocation_size);
    previous_node = new_module_entry;
  }
  previous_node[6] = 0x4c22bb0c326587ce;
  previous_node[7] = 0x5e3cf00ce2978287;
  previous_node[8] = &BUFFER_MODULE_VTABLE;
  previous_node[9] = 1;
  previous_node[10] = module_priority;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 初始化游戏配置系统
// 设置游戏配置和参数系统
void initialize_game_configuration_system(void)

{
  uint64_t config_param;
  void *config_interface;
  int8_t *config_context;
  int32_t config_flags;
  int8_t config_buffer [136];
  
  config_interface = &CONFIG_INTERFACE_TABLE;
  config_context = config_buffer;
  config_buffer[0] = 0;
  config_flags = 0x1b;
  strcpy_s(config_buffer,0x80,&CONFIG_DATABASE_STRING,config_param,0xfffffffffffffffe);
  global_config_context = initialize_config_system(&config_interface);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 初始化进程句柄
// 获取并存储当前进程的句柄
void initialize_process_handle(void)

{
  game_process_handle = GetCurrentProcess();
  return;
}



// 函数: 初始化游戏计时器
// 设置游戏主循环计时器
int initialize_game_timer(void)

{
  longlong timer_result;
  
  setup_game_timer();
  timer_result = register_timer_callback(&TIMER_CALLBACK_ADDRESS);
  return (timer_result != 0) - 1;
}



// 函数: 初始化渲染线程
// 设置渲染线程的同步机制
int initialize_rendering_thread(uint64_t thread_param1,uint64_t thread_param2,uint64_t thread_param3,uint64_t thread_param4)

{
  longlong thread_result;
  
  _Mtx_init_in_situ(RENDER_THREAD_MUTEX,2,thread_param3,thread_param4,0xfffffffffffffffe);
  thread_result = register_render_thread_callback(RENDER_THREAD_HANDLER);
  return (thread_result != 0) - 1;
}



// 函数: 初始化音频线程
// 设置音频线程的同步机制
int initialize_audio_thread(uint64_t thread_param1,uint64_t thread_param2,uint64_t thread_param3,uint64_t thread_param4)

{
  longlong thread_result;
  
  _Mtx_init_in_situ(AUDIO_THREAD_MUTEX,2,thread_param3,thread_param4,0xfffffffffffffffe);
  thread_result = register_audio_thread_callback(AUDIO_THREAD_HANDLER);
  return (thread_result != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 初始化游戏状态机
// 设置游戏状态机和状态转换系统
int initialize_game_state_machine(void)

{
  longlong state_result;
  
  game_state_count = 3;
  game_state_table = &GAME_STATE_TABLE_ADDR;
  previous_state_ptr = &GAME_STATE_TABLE_ADDR;
  current_state_index = 0;
  state_transition_flag = 0;
  state_event_queue = 0;
  state_result = register_state_machine_callback(STATE_MACHINE_HANDLER);
  return (state_result != 0) - 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address