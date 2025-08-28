#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part027.c - 初始化组件管理器 - 14 个函数

/**
 * 初始化组件管理器
 * 设置管理器的基本结构并初始化各个组件
 * 
 * @param manager 管理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void initialize_component_manager(uint64_t *manager, uint64_t param2, uint64_t param3, uint64_t param4)
{
  *manager = &COMPONENT_MANAGER_VTABLE;
  initialize_subsystem();
  initialize_subsystem();
  setup_component_slot(manager + 0x262);
  setup_component_slot(manager + 0x254);
  setup_component_slot(manager + 0x246);
  setup_component_slot(manager + 0x238);
  setup_component_slot(manager + 0x22a);
  setup_component_slot(manager + 0x21c);
  setup_component_slot(manager + 0x20e);
  register_component_handler(manager + 0x1f6);
  register_component_handler(manager + 0x1de);
  register_component_handler(manager + 0x1c6);
  setup_component_slot(manager + 0x1b8);
  setup_component_slot(manager + 0x1aa);
  setup_component_slot(manager + 0x19c);
  register_component_handler(manager + 0x184);
  register_component_handler(manager + 0x16c);
  register_component_handler(manager + 0x154);
  register_component_handler(manager + 0x13c);
  register_component_handler(manager + 0x124);
  register_component_handler(manager + 0x10c);
  register_component_handler(manager + 0xf4);
  register_component_handler(manager + 0xdc);
  register_component_handler(manager + 0xc4);
  register_component_handler(manager + 0xac);
  register_component_handler(manager + 0x94);
  register_component_handler(manager + 0x7c);
  register_component_handler(manager + 100);
  register_component_handler(manager + 0x4c);
  register_component_handler(manager + 0x34);
  register_component_handler(manager + 0x1c);
  *manager = &COMPONENT_MANAGER_VTABLE_SECONDARY;
  manager[0x18] = &COMPONENT_DESTROYER_VTABLE;
  if (manager[0x19] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  manager[0x19] = 0;
  *(int32_t *)(manager + 0x1b) = 0;
  manager[0x18] = &COMPONENT_DESTROYER_VTABLE;
  process_manager_callbacks(manager + 0x12, manager[0x14], param3, param4, 0xfffffffffffffffe);
  if (manager[0xd] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  if (manager[9] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  if (manager[5] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  if (manager[1] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  return;
}



/**
 * 初始化组件池
 * 为组件池设置初始状态和虚函数表
 * 
 * @param pool 组件池指针
 * @return 初始化后的组件池指针
 */
longlong initialize_component_pool(longlong pool)
{
  *(uint64_t *)(pool + 8) = &COMPONENT_DESTROYER_VTABLE;
  *(uint64_t *)(pool + 0x10) = 0;
  *(int32_t *)(pool + 0x18) = 0;
  *(uint64_t *)(pool + 8) = &COMPONENT_FACTORY_VTABLE;
  *(uint64_t *)(pool + 0x20) = 0;
  *(uint64_t *)(pool + 0x10) = 0;
  *(int32_t *)(pool + 0x18) = 0;
  *(uint64_t *)(pool + 0x28) = &COMPONENT_DESTROYER_VTABLE;
  *(uint64_t *)(pool + 0x30) = 0;
  *(int32_t *)(pool + 0x38) = 0;
  *(uint64_t *)(pool + 0x28) = &COMPONENT_FACTORY_VTABLE;
  *(uint64_t *)(pool + 0x40) = 0;
  *(uint64_t *)(pool + 0x30) = 0;
  *(int32_t *)(pool + 0x38) = 0;
  *(uint64_t *)(pool + 0x60) = 0;
  *(code **)(pool + 0x68) = _guard_check_icall;
  return pool;
}





/**
 * 设置组件槽位
 * 为指定的组件槽位进行初始化设置
 * 
 * @param slot 槽位指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void setup_component_slot(longlong slot, uint64_t param2, uint64_t param3, uint64_t param4)
{
  if (*(code **)(slot + 0x60) != (code *)0x0) {
    (**(code **)(slot + 0x60))(slot + 0x50, 0, 0, param4, 0xfffffffffffffffe);
  }
  *(uint64_t *)(slot + 0x28) = &COMPONENT_FACTORY_VTABLE;
  if (*(longlong *)(slot + 0x30) != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  *(uint64_t *)(slot + 0x30) = 0;
  *(int32_t *)(slot + 0x40) = 0;
  *(uint64_t *)(slot + 0x28) = &COMPONENT_DESTROYER_VTABLE;
  *(uint64_t *)(slot + 8) = &COMPONENT_FACTORY_VTABLE;
  if (*(longlong *)(slot + 0x10) != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  *(uint64_t *)(slot + 0x10) = 0;
  *(int32_t *)(slot + 0x20) = 0;
  *(uint64_t *)(slot + 8) = &COMPONENT_DESTROYER_VTABLE;
  return;
}



/**
 * 初始化组件数组
 * 为组件数组设置初始状态和虚函数表
 * 
 * @param array 组件数组指针
 * @return 初始化后的组件数组指针
 */
uint64_t * initialize_component_array(uint64_t *array)
{
  *array = &COMPONENT_DESTROYER_VTABLE;
  array[1] = 0;
  *(int32_t *)(array + 2) = 0;
  *array = &COMPONENT_FACTORY_VTABLE;
  array[3] = 0;
  array[1] = 0;
  *(int32_t *)(array + 2) = 0;
  array[4] = &COMPONENT_DESTROYER_VTABLE;
  array[5] = 0;
  *(int32_t *)(array + 6) = 0;
  array[4] = &COMPONENT_FACTORY_VTABLE;
  array[7] = 0;
  array[5] = 0;
  *(int32_t *)(array + 6) = 0;
  array[8] = &COMPONENT_DESTROYER_VTABLE;
  array[9] = 0;
  *(int32_t *)(array + 10) = 0;
  array[8] = &COMPONENT_FACTORY_VTABLE;
  array[0xb] = 0;
  array[9] = 0;
  *(int32_t *)(array + 10) = 0;
  array[0xc] = &COMPONENT_DESTROYER_VTABLE;
  array[0xd] = 0;
  *(int32_t *)(array + 0xe) = 0;
  array[0xc] = &COMPONENT_FACTORY_VTABLE;
  array[0xf] = 0;
  array[0xd] = 0;
  *(int32_t *)(array + 0xe) = 0;
  array[0x10] = &COMPONENT_DESTROYER_VTABLE;
  array[0x11] = 0;
  *(int32_t *)(array + 0x12) = 0;
  array[0x10] = &COMPONENT_FACTORY_VTABLE;
  array[0x13] = 0;
  array[0x11] = 0;
  *(int32_t *)(array + 0x12) = 0;
  array[0x16] = 0;
  array[0x17] = _guard_check_icall;
  return array;
}





/**
 * 注册组件处理器
 * 为组件注册事件处理器并设置虚函数表
 * 
 * @param handler 处理器指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void register_component_handler(uint64_t *handler, uint64_t param2, uint64_t param3, uint64_t param4)
{
  if ((code *)handler[0x16] != (code *)0x0) {
    (*(code *)handler[0x16])(handler + 0x14, 0, 0, param4, 0xfffffffffffffffe);
  }
  handler[0x10] = &COMPONENT_FACTORY_VTABLE;
  if (handler[0x11] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  handler[0x11] = 0;
  *(int32_t *)(handler + 0x13) = 0;
  handler[0x10] = &COMPONENT_DESTROYER_VTABLE;
  handler[0xc] = &COMPONENT_FACTORY_VTABLE;
  if (handler[0xd] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  handler[0xd] = 0;
  *(int32_t *)(handler + 0xf) = 0;
  handler[0xc] = &COMPONENT_DESTROYER_VTABLE;
  handler[8] = &COMPONENT_FACTORY_VTABLE;
  if (handler[9] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  handler[9] = 0;
  *(int32_t *)(handler + 0xb) = 0;
  handler[8] = &COMPONENT_DESTROYER_VTABLE;
  handler[4] = &COMPONENT_FACTORY_VTABLE;
  if (handler[5] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  handler[5] = 0;
  *(int32_t *)(handler + 7) = 0;
  handler[4] = &COMPONENT_DESTROYER_VTABLE;
  *handler = &COMPONENT_FACTORY_VTABLE;
  if (handler[1] != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  handler[1] = 0;
  *(int32_t *)(handler + 3) = 0;
  *handler = &COMPONENT_DESTROYER_VTABLE;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 创建用户会话
 * 创建并初始化用户会话对象
 * 
 * @param param1 会话ID
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void create_user_session(uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)
{
  int32_t user_id;
  uint64_t *session;
  void *session_type;
  uint64_t *session_data;
  int32_t session_flags;
  uint64_t session_timeout;
  
  session_type = &COMPONENT_FACTORY_VTABLE;
  session_timeout = 0;
  session_data = (uint64_t *)0x0;
  session_flags = 0;
  session = (uint64_t *)allocate_session_object(GLOBAL_SESSION_POOL, 0x10, 0x13, param4, 0xfffffffffffffffe);
  *(int8_t *)session = 0;
  session_data = session;
  user_id = generate_session_id(session);
  session_timeout = CONCAT44(session_timeout._4_4_, user_id);
  *session = 0x6e6f632072657355; // "User con"
  *(int32_t *)(session + 1) = 0x676966; // "fig"
  session_flags = 0xb;
  register_session_handler(param1, &session_type);
  session_type = &COMPONENT_FACTORY_VTABLE;
  // 警告：子程序不返回
  cleanup_session_object(session);
}



/**
 * 初始化数据缓冲区
 * 初始化数据缓冲区并设置基本属性
 * 
 * @param buffer 缓冲区指针
 * @return 初始化后的缓冲区指针
 */
uint64_t * initialize_data_buffer(uint64_t *buffer)
{
  *buffer = 0;
  buffer[1] = 0;
  buffer[2] = 0;
  *(int32_t *)(buffer + 3) = 0x24;
  return buffer;
}



/**
 * 初始化内存池
 * 初始化内存池并设置缓冲区结构
 * 
 * @param pool 内存池指针
 * @return 初始化后的内存池指针
 */
longlong initialize_memory_pool(longlong pool)
{
  longlong buffer_ptr;
  longlong counter;
  
  create_memory_region(pool, 0x20, 0x400, initialize_data_buffer, cleanup_buffer_function);
  create_memory_region(pool + 0x8000, 0x20, 0x400, initialize_data_buffer, cleanup_buffer_function);
  *(uint64_t *)(pool + 0x10400) = 0;
  *(uint64_t *)(pool + 0x10408) = 0;
  *(uint64_t *)(pool + 0x10410) = 0;
  *(int32_t *)(pool + 0x10418) = 0x24;
  buffer_ptr = pool + 0x10002;
  counter = 8;
  do {
    *(uint64_t *)(buffer_ptr + -2) = 0;
    *(uint64_t *)(buffer_ptr + 6) = 0;
    *(uint64_t *)(buffer_ptr + 0xe) = 0;
    *(uint64_t *)(buffer_ptr + 0x16) = 0;
    *(uint64_t *)(buffer_ptr + 0x1e) = 0;
    *(uint64_t *)(buffer_ptr + 0x26) = 0;
    *(uint64_t *)(buffer_ptr + 0x2e) = 0;
    *(uint64_t *)(buffer_ptr + 0x36) = 0;
    *(uint64_t *)(buffer_ptr + 0x3e) = 0;
    *(uint64_t *)(buffer_ptr + 0x46) = 0;
    *(uint64_t *)(buffer_ptr + 0x4e) = 0;
    *(uint64_t *)(buffer_ptr + 0x56) = 0;
    *(uint64_t *)(buffer_ptr + 0x5e) = 0;
    *(uint64_t *)(buffer_ptr + 0x66) = 0;
    *(uint64_t *)(buffer_ptr + 0x6e) = 0;
    *(uint64_t *)(buffer_ptr + 0x76) = 0;
    buffer_ptr = buffer_ptr + 0x80;
    counter = counter + -1;
  } while (counter != 0);
  return pool;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 处理引擎命令
 * 执行引擎相关的命令处理逻辑
 * 
 * @param param_1 命令参数1
 * @param param_2 命令参数2
 * @param param_3 命令参数3
 * @param param_4 命令参数4
 * @return 返回参数2
 */
uint64_t process_engine_command(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  FUN_180627ae0(param_2, system_message_context + 0xe0, param_3, param_4, 0, 0xfffffffffffffffe);
  return param_2;
}



/**
 * 清理组件并设置标志
 * 根据标志清理组件并设置相应的状态
 * 
 * @param param_1 组件指针
 * @param param_2 清理标志
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 返回组件指针
 */
uint64_t * cleanup_component_with_flags(uint64_t *param_1, uint param_2, uint64_t param_3, uint64_t param_4)
{
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])(param_1 + 4, 0, 0, param_4, 0xfffffffffffffffe);
  }
  *param_1 = &COMPONENT_DESTROYER_VTABLE;
  *param_1 = &COMPONENT_FACTORY_VTABLE;
  *param_1 = &COMPONENT_ALLOCATOR_VTABLE;
  if ((param_2 & 1) != 0) {
    free(param_1, 0x40);
  }
  return param_1;
}



/**
 * 传输组件数据
 * 在两个组件之间传输数据并更新相关状态
 * 
 * @param param_1 目标组件指针
 * @param param_2 源组件指针
 * @param param_3 传输参数
 * @param param_4 传输标志
 * @return 返回目标组件指针
 */
uint64_t * transfer_component_data(uint64_t *param_1, uint64_t *param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t *puVar1;
  code *pcVar2;
  
  *param_1 = &COMPONENT_ALLOCATOR_VTABLE;
  *param_1 = &COMPONENT_FACTORY_VTABLE;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &COMPONENT_DESTROYER_VTABLE;
  LOCK();
  *(int8_t *)(param_1 + 2) = 0;
  UNLOCK();
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &COMPONENT_TRANSFER_VTABLE;
  puVar1 = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = _guard_check_icall;
  if (puVar1 != param_2) {
    if ((code *)param_1[6] != (code *)0x0) {
      (*(code *)param_1[6])(puVar1, 0, 0, param_4, 0xfffffffffffffffe);
    }
    pcVar2 = (code *)param_2[2];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(puVar1, param_2, 1);
      pcVar2 = (code *)param_2[2];
    }
    param_1[6] = pcVar2;
    param_1[7] = param_2[3];
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2, 0, 0);
  }
  return param_1;
}





/**
 * 清理组件实例
 * 清理单个组件实例的资源并重置状态
 * 
 * @param param_1 组件实例指针
 */
void cleanup_component_instance(longlong param_1)
{
  *(uint64_t *)(param_1 + 0x18) = &COMPONENT_ALLOCATOR_VTABLE;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    // 警告：子程序不返回
    handle_critical_error();
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x18) = &COMPONENT_DESTROYER_VTABLE;
  return;
}





/**
 * 清理组件链
 * 清理组件链中的所有组件实例
 * 
 * @param param_1 组件链指针
 */
void cleanup_component_chain(longlong *param_1)
{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if (lVar2 == lVar1) {
    param_1[1] = lVar2;
  }
  else {
    do {
      *(uint64_t *)(lVar2 + 0x18) = &COMPONENT_ALLOCATOR_VTABLE;
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        // 警告：子程序不返回
        handle_critical_error();
      }
      *(uint64_t *)(lVar2 + 0x20) = 0;
      *(int32_t *)(lVar2 + 0x30) = 0;
      *(uint64_t *)(lVar2 + 0x18) = &COMPONENT_DESTROYER_VTABLE;
      lVar2 = lVar2 + 0x50;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  return;
}



/**
 * 释放组件并设置标志
 * 释放组件资源并根据标志决定是否释放内存
 * 
 * @param param_1 组件指针
 * @param param_2 释放标志
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 返回组件指针
 */
longlong release_component_with_flags(longlong param_1, uint param_2, uint64_t param_3, uint64_t param_4)
{
  if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
    (**(code **)(param_1 + 0xd0))(param_1 + 0xc0, 0, 0, param_4, 0xfffffffffffffffe);
  }
  cleanup_component_resources(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1, 0xe8);
  }
  return param_1;
}





/**
 * 通知组件销毁
 * 通知相关组件该组件即将被销毁，处理同步逻辑
 * 
 * @param param_1 组件指针
 */
void notify_component_destruction(longlong param_1)
{
  longlong lVar1;
  int iVar2;
  
  (**(code **)(param_1 + 0xd8))(param_1 + 0xc0);
  lVar1 = *(longlong *)(param_1 + 0xe0);
  iVar2 = _Mtx_lock(lVar1 + 0x48);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  *(int8_t *)(lVar1 + 0x98) = 1;
  iVar2 = _Cnd_broadcast(lVar1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = _Mtx_unlock(lVar1 + 0x48);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



/**
 * 设置组件回调
 * 为组件设置回调函数和相关参数
 * 
 * @param param_1 目标组件指针
 * @param param_2 回调源组件指针
 * @param param_3 回调参数
 * @param param_4 回调标志
 * @return 返回目标组件指针
 */
uint64_t * setup_component_callback(uint64_t *param_1, uint64_t *param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t *puVar1;
  code *pcVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  initialize_callback_system();
  *param_1 = &COMPONENT_CALLBACK_VTABLE;
  puVar1 = param_1 + 0x18;
  param_1[0x1a] = 0;
  param_1[0x1b] = _guard_check_icall;
  if (puVar1 != param_2) {
    if ((code *)param_1[0x1a] != (code *)0x0) {
      (*(code *)param_1[0x1a])(puVar1, 0, 0, param_4, uVar3);
    }
    pcVar2 = (code *)param_2[2];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(puVar1, param_2, 1);
      pcVar2 = (code *)param_2[2];
    }
    param_1[0x1a] = pcVar2;
    param_1[0x1b] = param_2[3];
  }
  param_1[0x1c] = param_3;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2, 0, 0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 执行组件回调
 * 执行组件的回调函数，处理线程同步和资源清理
 * 
 * @param param_1 组件指针
 */
void execute_component_callback(longlong *param_1)
{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint64_t uVar4;
  longlong *plVar5;
  code *pcVar6;
  int8_t auStack_128 [32];
  longlong *plStack_108;
  longlong **pplStack_100;
  longlong alStack_f8 [2];
  code *pcStack_e8;
  code *pcStack_e0;
  uint64_t uStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  longlong alStack_b8 [9];
  longlong alStack_70 [10];
  int8_t uStack_20;
  ulonglong uStack_18;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(system_context_ptr + 8) + 8) + 0x48);
  plStack_d0 = param_1;
  iVar3 = _Thrd_id();
  if (iVar3 == iVar1) {
    (*(code *)param_1[3])(param_1);
  }
  else {
    plStack_108 = alStack_b8;
    _Cnd_init_in_situ(alStack_b8);
    plStack_108 = alStack_70;
    _Mtx_init_in_situ(alStack_70, 2);
    uStack_20 = 0;
    uVar4 = allocate_callback_memory(system_memory_pool_ptr, 0xe8, 8, 3);
    plStack_108 = alStack_f8;
    pcStack_e8 = (code *)0x0;
    pcStack_e0 = _guard_check_icall;
    if (alStack_f8 != param_1) {
      pcVar6 = (code *)param_1[2];
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(alStack_f8, param_1, 1);
        pcVar6 = (code *)param_1[2];
      }
      pcStack_e0 = (code *)param_1[3];
      pcStack_e8 = pcVar6;
    }
    plVar5 = (longlong *)setup_component_callback(uVar4, alStack_f8, alStack_b8);
    plStack_c8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    lVar2 = system_context_ptr;
    pplStack_100 = &plStack_108;
    plStack_108 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    process_callback_queue(lVar2, &plStack_108);
    cleanup_callback_resources(alStack_b8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    pplStack_100 = (longlong **)alStack_70;
    _Mtx_destroy_in_situ(alStack_70);
    pplStack_100 = (longlong **)alStack_b8;
    _Cnd_destroy_in_situ(alStack_b8);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1, 0, 0);
  }
  // 警告：子程序不返回
  cleanup_stack_protection(uStack_18 ^ (ulonglong)auStack_128);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void generate_timestamp_hash(uint *hash_value)
// 功能: 生成基于时间戳的哈希值
// 参数: hash_value - 输出参数，用于存储生成的哈希值
void generate_timestamp_hash(uint *hash_value)

{
  uint uVar1;
  char cVar2;
  
  if (*(void **)*init_system_data_config == &unknown_var_424_ptr) {
    cVar2 = *(int *)(init_system_data_config + 0xe0) != 0;
  }
  else {
    cVar2 = (**(code **)(*(void **)*init_system_data_config + 0x48))();
  }
  if (cVar2 != '\0') {
    *hash_value = 0x41c6fe0c;
    return;
  }
  uVar1 = timeGetTime();
  *hash_value = uVar1 ^ 0x41c64e6d;
  return;
}



// 函数: bool validate_and_process_condition(longlong context, uint64_t param_2)
// 功能: 验证条件并处理相应的操作
// 参数: context - 上下文指针，param_2 - 处理参数
// 返回: 成功返回1，失败返回0
bool validate_and_process_condition(longlong context, uint64_t param_2)

{
  char cVar1;
  void *puVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    cVar1 = (**(code **)(param_1 + 0xb8))(param_2);
    if (cVar1 == '\0') {
      if (system_debug_flag == '\0') {
        puVar2 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x48) != (void *)0x0) {
          puVar2 = *(void **)(param_1 + 0x48);
        }
        FUN_180626f80(&unknown_var_544_ptr,puVar2);
      }
      FUN_180627be0(param_1,param_1 + 0x80);
      return false;
    }
  }
  FUN_180627be0(param_1,param_2);
  return true;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void insert_node_into_structure(uint64_t *root_node, uint64_t param_2, int *value)
// 功能: 在有序数据结构中插入新节点
// 参数: root_node - 根节点指针，param_2 - 插入参数，value - 要插入的值
void insert_node_into_structure(uint64_t *root_node, uint64_t param_2, int *value)

{
  int iVar1;
  bool bVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  lVar4 = FUN_18062b420(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 5));
  iVar1 = *value;
  bVar2 = true;
  *(int *)(lVar4 + 0x20) = iVar1; // 存储要插入的值
  puVar5 = (uint64_t *)param_1[2];
  puVar3 = param_1;
  while (puVar5 != (uint64_t *)0x0) {
    bVar2 = iVar1 < *(int *)(puVar5 + 4);
    puVar3 = puVar5;
    if (iVar1 < *(int *)(puVar5 + 4)) {
      puVar5 = (uint64_t *)puVar5[1];
    }
    else {
      puVar5 = (uint64_t *)*puVar5;
    }
  }
  puVar5 = puVar3;
  if (bVar2) {
    if (puVar3 == (uint64_t *)param_1[1]) goto LAB_18005c9be;
    puVar5 = (uint64_t *)func_0x00018066b9a0(puVar3);
  }
  if (*(int *)(lVar4 + 0x20) <= *(int *)(puVar5 + 4)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
LAB_18005c9be:
  if ((puVar3 == param_1) || (*(int *)(lVar4 + 0x20) < *(int *)(puVar3 + 4))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,puVar3,param_1,uVar6);
}





// 函数: void set_status_flag(longlong context, int32_t flag)
// 功能: 设置状态标志，处理条件检查和错误处理
// 参数: context - 上下文指针，flag - 要设置的标志
void set_status_flag(longlong context, int32_t flag)

{
  char cVar1;
  void *puVar2;
  int32_t auStackX_10 [6];
  
  if ((*(longlong *)(param_1 + 0x1f00) != 0) &&
     (auStackX_10[0] = param_2, cVar1 = (**(code **)(param_1 + 0x1f08))(auStackX_10),
     param_2 = auStackX_10[0], cVar1 == '\0')) {
    if (system_debug_flag == '\0') {
      puVar2 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x1eb0) != (void *)0x0) {
        puVar2 = *(void **)(param_1 + 0x1eb0);
      }
      FUN_180626f80(&unknown_var_544_ptr,puVar2);
    }
    *(int32_t *)(context + 0x1ea0) = *(int32_t *)(context + 0x1ee8); // 设置状态标志
    return;
  }
  *(int32_t *)(context + 0x1ea0) = flag; // 设置标志
  return;
}



// 函数: uint64_t * copy_and_initialize_data_structure(uint64_t *dest, longlong src)
// 功能: 复制和初始化数据结构
// 参数: dest - 目标指针，src - 源数据
// 返回: 目标指针
uint64_t * copy_and_initialize_data_structure(uint64_t *dest, longlong src)

{
  *dest = &unknown_var_720_ptr; // 初始化指针
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &unknown_var_3456_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 0x10);
  param_1[1] = *(uint64_t *)(param_2 + 8);
  *(int32_t *)((longlong)param_1 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(src + 0x10) = 0; // 清空源数据
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  memory_ptr[4] = &unknown_var_720_ptr; // 设置内存标记
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  param_1[4] = &unknown_var_3456_ptr;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 0x30);
  param_1[5] = *(uint64_t *)(param_2 + 0x28);
  *(int32_t *)((longlong)param_1 + 0x3c) = *(int32_t *)(param_2 + 0x3c);
  *(int32_t *)(param_1 + 7) = *(int32_t *)(param_2 + 0x38);
  *(int32_t *)(param_2 + 0x30) = 0;
  *(uint64_t *)(structure + 0x28) = 0; // 清理指针
  *(uint64_t *)(param_2 + 0x38) = 0;
  return param_1;
}



// 函数: longlong cleanup_and_reset_structure(longlong structure)
// 功能: 清理和重置数据结构
// 参数: structure - 要清理的数据结构
// 返回: 清理后的数据结构指针
longlong cleanup_and_reset_structure(longlong structure)

{
  *(uint64_t *)(structure + 0x40) = &unknown_var_3456_ptr; // 设置安全标记
  if (*(longlong *)(param_1 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x40) = &unknown_var_720_ptr;
  *(uint64_t *)(param_1 + 0x20) = &unknown_var_3456_ptr;
  if (*(longlong *)(param_1 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x20) = &unknown_var_720_ptr;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void register_or_add_component(void **registry, uint64_t param_2, uint64_t param_3, uint64_t param_4)
// 功能: 注册或添加组件到注册表
// 参数: registry - 注册表指针，param_2 - 组件类型，param_3 - 组件数据，param_4 - 标志
void register_or_add_component(void **registry, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  void **ppuVar4;
  byte *pbVar5;
  void **ppuVar6;
  longlong lVar7;
  uint64_t uVar8;
  void **ppuStackX_8;
  char acStackX_20 [8];
  int32_t uVar9;
  void *puStack_68;
  longlong lStack_60;
  void *puStack_48;
  longlong lStack_40;
  int32_t uStack_30;
  
  lVar3 = init_system_data_config;
  acStackX_20[0] = (char)param_4;
  uVar8 = 0;
  ppuVar6 = (void **)(init_system_data_config + 0x70);
  ppuStackX_8 = param_1;
  FUN_180058080(ppuVar6,&ppuStackX_8,param_2,param_4,0,0xfffffffffffffffe);
  if (ppuStackX_8 != ppuVar6) {
    FUN_180627be0(ppuStackX_8 + 8,param_3);
    return;
  }
  FUN_180627ae0(&puStack_68,param_2);
  FUN_180627ae0(&puStack_48,param_3);
  uVar9 = 1;
  lVar3 = FUN_18062b420(system_memory_pool_ptr,0x60,*(int8_t *)(lVar3 + 0x98));
  FUN_18005caa0(lVar3 + 0x20,&puStack_68);
  ppuVar4 = (void **)FUN_1800590b0(ppuVar6,acStackX_20,lVar3 + 0x20);
  if (acStackX_20[0] == '\0') {
    FUN_18005cb60(lVar3);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    ppuStackX_8 = &puStack_48;
    puStack_48 = &unknown_var_3456_ptr;
    if (lStack_40 == 0) {
      lStack_40 = 0;
      uStack_30 = 0;
      puStack_48 = &unknown_var_720_ptr;
      ppuStackX_8 = &puStack_68;
      puStack_68 = &unknown_var_3456_ptr;
      if (lStack_60 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (ppuVar4 == ppuVar6) goto LAB_18005ccff;
  if (*(int *)(ppuVar4 + 6) != 0) {
    if (*(int *)(lVar3 + 0x30) == 0) goto LAB_18005ccff;
    pbVar5 = ppuVar4[5];
    lVar7 = *(longlong *)(lVar3 + 0x28) - (longlong)pbVar5;
    do {
      bVar1 = *pbVar5;
      uVar2 = (uint)pbVar5[lVar7];
      if (bVar1 != uVar2) break;
      pbVar5 = pbVar5 + 1;
    } while (uVar2 != 0);
    if (0 < (int)(bVar1 - uVar2)) goto LAB_18005ccff;
  }
  uVar8 = 1;
LAB_18005ccff:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,ppuVar4,ppuVar6,uVar8,uVar9);
}



// 函数: uint64_t * allocate_and_initialize_memory(uint64_t *memory_ptr, ulonglong flags, uint64_t param_3, uint64_t param_4)
// 功能: 分配和初始化内存
// 参数: memory_ptr - 内存指针，flags - 分配标志，param_3, param_4 - 分配参数
// 返回: 初始化后的内存指针
uint64_t *
allocate_and_initialize_memory(uint64_t *memory_ptr, ulonglong flags, uint64_t param_3, uint64_t param_4)

{
  memory_ptr[4] = &unknown_var_720_ptr; // 设置内存标记
  *memory_ptr = &unknown_var_1000_ptr; // 设置虚函数表
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x100,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_18005ce30(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *memory_ptr = &unknown_var_1000_ptr; // 设置虚函数表
  LOCK();
  *(int8_t *)(param_1 + 2) = 0;
  UNLOCK();
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &unknown_var_8464_ptr;
  puVar1 = param_1 + 4;
  *puVar1 = &unknown_var_720_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *puVar1 = &unknown_var_3432_ptr;
  param_1[5] = param_1 + 7;
  *(int32_t *)(param_1 + 6) = 0;
  *(int8_t *)(param_1 + 7) = 0;
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  param_1[5] = uVar2;
  uVar2 = param_2[3];
  param_1[6] = param_2[2];
  param_1[7] = uVar2;
  uVar2 = param_2[5];
  param_1[8] = param_2[4];
  param_1[9] = uVar2;
  uVar2 = param_2[7];
  param_1[10] = param_2[6];
  param_1[0xb] = uVar2;
  uVar2 = param_2[9];
  param_1[0xc] = param_2[8];
  param_1[0xd] = uVar2;
  uVar2 = param_2[0xb];
  param_1[0xe] = param_2[10];
  param_1[0xf] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0x10] = param_2[0xc];
  param_1[0x11] = uVar2;
  uVar2 = param_2[0xf];
  param_1[0x12] = param_2[0xe];
  param_1[0x13] = uVar2;
  uVar2 = param_2[0x11];
  param_1[0x14] = param_2[0x10];
  param_1[0x15] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x16] = param_2[0x12];
  param_1[0x17] = uVar2;
  uVar2 = param_2[0x15];
  param_1[0x18] = param_2[0x14];
  param_1[0x19] = uVar2;
  uVar2 = param_2[0x17];
  param_1[0x1a] = param_2[0x16];
  param_1[0x1b] = uVar2;
  uVar2 = param_2[0x19];
  param_1[0x1c] = param_2[0x18];
  param_1[0x1d] = uVar2;
  uVar2 = param_2[0x1b];
  param_1[0x1e] = param_2[0x1a];
  param_1[0x1f] = uVar2;
  *(int32_t *)(param_1 + 0x17) = *(int32_t *)(param_2 + 0x13);
  return param_1;
}



// 函数: int32_t get_value_with_mutex_lock(longlong mutex_context)
// 功能: 在互斥锁保护下获取值
// 参数: mutex_context - 包含互斥锁的上下文
// 返回: 获取的值
int32_t get_value_with_mutex_lock(longlong mutex_context)

{
  int iVar1;
  int32_t uVar2;
  
  iVar1 = _Mtx_lock(mutex_context + 0x9f0); // 获取互斥锁
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uVar2 = FUN_1800b2bd0();
  iVar1 = _Mtx_unlock(mutex_context + 0x9f0); // 释放互斥锁
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: int get_multi_thread_values(void)
// 功能: 在多线程环境下获取多个值
// 返回: 获取的值的总和
int get_multi_thread_values(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = system_resource_state; // 获取全局上下文
  lVar1 = system_resource_state + 0x770;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  iVar3 = FUN_1800b2bd0();
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = _Mtx_lock(lVar2 + 0x7c0);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  iVar4 = FUN_1800b2bd0();
  iVar5 = _Mtx_unlock(lVar2 + 0x7c0);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = FUN_18005cf50(lVar2);
  iVar6 = _Mtx_lock(lVar2 + 0x950);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  iVar6 = FUN_1800b2bd0();
  iVar7 = _Mtx_unlock(lVar2 + 0x950);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  return iVar6 + iVar4 + iVar3 + iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void format_value_to_buffer(ulonglong value, longlong buffer)
// 功能: 将数值格式化并输出到缓冲区
// 参数: value - 要格式化的数值，buffer - 输出缓冲区
void format_value_to_buffer(ulonglong value, longlong buffer)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dStackX_18;
  ulonglong uStackX_20;
  int8_t auStack_478 [32];
  uint64_t uStack_458;
  double *pdStack_450;
  char acStack_438 [1024];
  ulonglong uStack_38;
  uint64_t uStack_30;
  
  iVar7 = -1;
  iVar8 = -1;
  uVar2 = (uint)value; // 获取数值的低32位
  uVar3 = value & 0xffffffff; // 获取数值的低32位
  while (uVar2 != 0) {
    iVar8 = iVar8 + 1;
    uVar2 = (uint)uVar3 >> 1;
    uVar3 = (ulonglong)uVar2;
  }
  uVar2 = 0x400;
  do {
    iVar7 = iVar7 + 1;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  cVar1 = (&unknown_var_8592_ptr)[iVar8 / iVar7];
  uStack_30 = 0x18005d147;
  fVar9 = (float)powf(0x44800000);
  fVar10 = (float)(longlong)param_1;
  if ((longlong)param_1 < 0) {
    fVar10 = fVar10 + 1.8446744e+19;
  }
  uStackX_20 = (ulonglong)(uint)(int)cVar1;
  dStackX_18 = (double)(fVar9 * fVar10);
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_478;
  puVar4 = (ulonglong *)func_0x00018004b9a0();
  lVar5 = 0;
  uStack_458 = 0;
  pdStack_450 = &dStackX_18;
  iVar8 = __stdio_common_vsprintf(*puVar4 | 1,0,0,&unknown_var_8600_ptr);
  if (iVar8 < 0) {
    iVar8 = -1;
  }
  if (iVar8 < 0x400) {
    uStack_458 = 0;
    pdStack_450 = &dStackX_18;
    __stdio_common_vsprintf(*puVar4 | 1,acStack_438,0x400,&unknown_var_8600_ptr);
    lVar5 = -1;
    do {
      lVar6 = lVar5;
      lVar5 = lVar6 + 1;
    } while (acStack_438[lVar6 + 1] != '\0');
    iVar8 = (int)(lVar6 + 1);
    if (0 < iVar8) {
      FUN_1806277c0(param_2,*(int *)(param_2 + 0x10) + iVar8);
                    // WARNING: Subroutine does not return
      memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),acStack_438,
             (longlong)((int)lVar6 + 2));
    }
  }
  else {
    iVar8 = iVar8 + 1;
    if (iVar8 != 0) {
      lVar5 = FUN_18062b420(system_memory_pool_ptr,(longlong)iVar8,3);
    }
    FUN_18004b9b0(lVar5,(longlong)iVar8,&unknown_var_8600_ptr,&dStackX_18);
    FUN_1806281a0(param_2,lVar5);
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_478);
}



// 函数: longlong copy_and_initialize_simple_structure(longlong dest, longlong src)
// 功能: 复制和初始化简单数据结构
// 参数: dest - 目标指针，src - 源数据
// 返回: 目标指针
longlong copy_and_initialize_simple_structure(longlong dest, longlong src)

{
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  *(uint64_t *)(dest + 8) = *(uint64_t *)(src + 8); // 复制数据
  *(int32_t *)(param_1 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(src + 0x10) = 0; // 清空源数据
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  return param_1;
}





// 函数: void cleanup_structure_safety(uint64_t param_1, longlong structure)
// 功能: 安全清理数据结构
// 参数: param_1 - 未使用参数，structure - 要清理的结构
void cleanup_structure_safety(uint64_t param_1, longlong structure)

{
  *(uint64_t *)(structure + 0x20) = &unknown_var_3456_ptr; // 设置安全标记
  if (*(longlong *)(param_2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(structure + 0x28) = 0; // 清理指针
  *(int32_t *)(param_2 + 0x38) = 0;
  *(uint64_t *)(param_2 + 0x20) = &unknown_var_720_ptr;
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}





