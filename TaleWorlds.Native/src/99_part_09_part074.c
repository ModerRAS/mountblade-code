/**
 * 99_part_09_part074.c - 系统核心数据处理和状态管理模块
 * 
 * 本模块包含11个核心函数，涵盖系统核心数据处理、状态管理、资源管理、
 * 内存管理、线程同步、哈希表操作、数据验证等高级系统功能。
 * 
 * 主要功能包括：
 * - 系统状态管理和控制
 * - 数据处理和验证
 * - 资源管理和内存分配
 * - 线程同步和互斥锁操作
 * - 哈希表数据处理
 * - 系统参数配置
 * 
 * 核心函数：
 * - system_state_processor (系统状态处理器)
 * - system_data_validator (系统数据验证器)
 * - system_resource_manager (系统资源管理器)
 * - system_memory_controller (系统内存控制器)
 * - system_thread_synchronizer (系统线程同步器)
 * - system_hash_processor (系统哈希处理器)
 * - system_cleanup_manager (系统清理管理器)
 * - system_parameter_handler (系统参数处理器)
 * - system_allocator (系统分配器)
 * - system_initializer (系统初始化器)
 * - system_finalizer (系统终结器)
 */

#include "TaleWorlds.Native.Split.h"

/*
 * 常量定义
 */
#define SYSTEM_MUTEX_ADDRESS 0x180c95528
#define SYSTEM_DATA_BUFFER_SIZE 0xa60
#define SYSTEM_HASH_TABLE_SIZE 0x3ff
#define SYSTEM_RANDOM_SEED1 0x41c64e6d
#define SYSTEM_RANDOM_SEED2 0x897ee768
#define SYSTEM_FLOAT_CONSTANT 0x3dcccccd
#define SYSTEM_BIT_SHIFT_13 0xd
#define SYSTEM_BIT_SHIFT_17 0x11
#define SYSTEM_BIT_SHIFT_5 5
#define SYSTEM_FLAG_MASK_0x3ff 0x3ff
#define SYSTEM_FLAG_MASK_0xfffff7ff 0xfffff7ff

/*
 * 函数别名定义
 */
#define system_state_processor FUN_1805ed670
#define system_data_validator FUN_1805ed8d0
#define system_resource_manager FUN_1805ed8d7
#define system_cleanup_manager FUN_1805ed9f3
#define system_parameter_handler FUN_1805eda50
#define system_thread_synchronizer FUN_1805edb16
#define system_mutex_unlocker FUN_1805edbad
#define system_empty_function FUN_1805edbd3
#define system_allocator FUN_1805edbf0
#define system_resource_initializer FUN_1805edc40
#define system_memory_controller FUN_1805edc80
#define system_finalizer FUN_1805ede90
#define system_deinitializer FUN_1805eded0
#define system_state_updater FUN_1805ee0b0

/**
 * 系统状态处理器 - 核心状态管理和数据处理函数
 * 
 * 功能：
 * - 处理系统状态变化和更新
 * - 管理系统数据流和缓冲区
 * - 执行线程同步操作
 * - 处理系统参数验证
 * - 管理资源分配和释放
 * 
 * @param param_1 系统上下文指针
 * @param param_2 状态参数1
 * @param param_3 状态参数2
 * @param param_4 状态参数3
 * @param param_5 状态参数4
 * @param param_6 状态参数5
 */
void system_state_processor(undefined8 param_1, undefined1 param_2, undefined4 param_3, undefined4 param_4,
                          undefined4 param_5, undefined4 param_6)
{
  ulonglong *system_data_pointer;
  longlong system_data_index;
  char system_status_flag;
  int system_result_code;
  uint system_hash_value;
  uint system_bit_offset;
  longlong system_iterator;
  longlong system_base_address;
  
  /* 系统互斥锁操作 */
  system_result_code = _Mtx_lock(SYSTEM_MUTEX_ADDRESS);
  if (system_result_code != 0) {
    __Throw_C_error_std__YAXH_Z(system_result_code);
  }
  
  /* 系统数据处理流程 */
  FUN_1800623b0(_DAT_180c86928, 0, 4, 10, &UNK_180a373b8, param_2);
  FUN_1800623b0(_DAT_180c86928, 0, 4, 10, &UNK_180a37388, param_3);
  FUN_1800623b0(_DAT_180c86928, 0, 4, 10, &UNK_180a373f0, param_4);
  
  /* 系统状态验证 */
  system_status_flag = FUN_180645c10(0x180c95578, 0, &UNK_1809fa560);
  if (((((system_status_flag != '\0') && 
         (system_status_flag = FUN_180645c10(0x180c95578, 0x12, &UNK_1809fa540), system_status_flag != '\0')) &&
        (system_status_flag = FUN_180645c10(0x180c95578, param_2, &UNK_1809fa560), system_status_flag != '\0')) &&
       ((system_status_flag = FUN_180645c10(0x180c95578, param_3, &UNK_1809fa510), system_status_flag != '\0' &&
        (system_status_flag = FUN_180645c10(0x180c95578, param_4, &UNK_1809fa510), system_status_flag != '\0')))) &&
      (system_status_flag = FUN_180645c10(0x180c95578, param_5, &DAT_180bfbc90), system_status_flag != '\0')) {
    
    /* 系统哈希值计算 */
    system_hash_value = FUN_18055f6f0(&UNK_1809fa450, param_6);
    system_bit_offset = _DAT_180c95b3c >> 0x1f & 0x1f;
    system_result_code = _DAT_180c95b3c + system_bit_offset;
    system_data_pointer = (ulonglong *)(_DAT_180c95b10 + (longlong)(system_result_code >> 5) * 4);
    *system_data_pointer = *system_data_pointer | (ulonglong)system_hash_value << (((byte)system_result_code & 0x1f) - (char)system_bit_offset & 0x3f);
    
    /* 系统数据更新 */
    _DAT_180c95b40 = _DAT_180c95b40 + 8;
    _DAT_180c95b3c = (ulonglong)_DAT_180c95b40 << 0x20;
  }
  
  /* 系统数据清理和重置 */
  system_iterator = 0;
  _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
  system_result_code = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
  system_base_address = _DAT_180c92cd8;
  
  /* 系统资源处理循环 */
  if (0 < system_result_code) {
    do {
      longlong resource_handle = *(longlong *)(system_base_address + system_iterator * 8);
      if ((resource_handle != 0) && (*(char *)(*(longlong *)(resource_handle + 0x58f8) + 0x1c) != '\0')) {
        FUN_1805b59d0(resource_handle, 0x180c95578);
        system_base_address = _DAT_180c92cd8;
      }
      system_iterator = system_iterator + 1;
    } while (system_iterator < system_result_code);
  }
  
  /* 系统最终清理 */
  if (_DAT_180c96070 != 0) {
    FUN_180567f30(_DAT_180c92580, 0x180c95578);
  }
  
  _DAT_180c95b3c = 0;
  /* 系统内存清理 */
  memset(_DAT_180c95b10, 0, (longlong)(_DAT_180c95b08 >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * 系统数据验证器 - 验证和处理系统数据
 * 
 * 功能：
 * - 验证系统数据的完整性和有效性
 * - 处理数据状态变化
 * - 执行数据同步操作
 * - 管理数据资源
 * 
 * @param param_1 系统数据指针
 */
void system_data_validator(longlong *param_1)
{
  undefined4 system_parameter;
  longlong system_data_handle;
  char system_validation_flag;
  int system_result_code;
  longlong system_iterator;
  longlong system_base_address;
  longlong system_target_address;
  
  /* 系统数据地址解析 */
  system_target_address = *param_1;
  if (*(int *)(system_target_address + 0x560) < 0) {
    system_target_address = *(longlong *)(system_target_address + 0x8e8);
  }
  else {
    system_target_address = *(longlong *)
             ((longlong)*(int *)(system_target_address + 0x560) * SYSTEM_DATA_BUFFER_SIZE + 0x3988 + 
              *(longlong *)(system_target_address + 0x8d8));
  }
  
  /* 系统互斥锁操作 */
  system_result_code = _Mtx_lock(SYSTEM_MUTEX_ADDRESS);
  if (system_result_code != 0) {
    __Throw_C_error_std__YAXH_Z(system_result_code);
  }
  
  /* 系统参数获取 */
  system_parameter = *(undefined4 *)(*param_1 + 0x10);
  system_validation_flag = FUN_180645c10(0x180c95578, 0, &UNK_1809fa560);
  
  /* 系统数据验证流程 */
  if (system_validation_flag != '\0') {
    system_validation_flag = FUN_180645c10(0x180c95578, 3, &UNK_1809fa540);
    if (system_validation_flag != '\0') {
      FUN_180645c10(0x180c95578, system_parameter, &UNK_1809fa510);
    }
  }
  
  /* 系统数据处理 */
  _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
  system_result_code = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
  
  /* 系统资源处理循环 */
  if (0 < system_result_code) {
    system_iterator = 0;
    system_base_address = _DAT_180c92cd8;
    do {
      system_data_handle = *(longlong *)(system_base_address + system_iterator * 8);
      if (((system_data_handle != 0) && 
           (*(char *)(*(longlong *)(system_data_handle + 0x58f8) + 0x1c) != '\0')) &&
          (*(longlong *)(system_data_handle + 0x58f8) != system_target_address)) {
        FUN_1805b59d0(system_data_handle, 0x180c95578);
        system_base_address = _DAT_180c92cd8;
      }
      system_iterator = system_iterator + 1;
    } while (system_iterator < system_result_code);
  }
  
  /* 系统最终清理 */
  if (_DAT_180c96070 != 0) {
    FUN_180567f30(_DAT_180c92580, 0x180c95578);
  }
  
  _DAT_180c95b3c = 0;
  /* 系统内存清理 */
  memset(_DAT_180c95b10, 0, (longlong)(_DAT_180c95b08 >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * 系统资源管理器 - 管理系统资源和数据
 * 
 * 功能：
 * - 管理系统资源分配和释放
 * - 处理资源状态变化
 * - 执行资源同步操作
 * - 验证资源完整性
 * 
 * @param param_1 系统资源指针
 * @param param_2 资源参数
 * @param param_3 目标资源
 */
void system_resource_manager(longlong *param_1, undefined8 param_2, longlong param_3)
{
  undefined4 system_parameter;
  longlong system_data_handle;
  char system_validation_flag;
  int system_result_code;
  longlong system_iterator;
  longlong system_base_address;
  longlong system_target_address;
  
  /* 目标资源地址解析 */
  if (*(int *)(param_3 + 0x560) < 0) {
    system_target_address = *(longlong *)(param_3 + 0x8e8);
  }
  else {
    system_target_address = *(longlong *)
             ((longlong)*(int *)(param_3 + 0x560) * SYSTEM_DATA_BUFFER_SIZE + 0x3988 + 
              *(longlong *)(param_3 + 0x8d8));
  }
  
  /* 系统互斥锁操作 */
  system_result_code = _Mtx_lock(SYSTEM_MUTEX_ADDRESS);
  if (system_result_code != 0) {
    __Throw_C_error_std__YAXH_Z(system_result_code);
  }
  
  /* 系统参数获取 */
  system_parameter = *(undefined4 *)(*param_1 + 0x10);
  system_validation_flag = FUN_180645c10(0x180c95578, 0, &UNK_1809fa560);
  
  /* 系统资源验证流程 */
  if (system_validation_flag != '\0') {
    system_validation_flag = FUN_180645c10(0x180c95578, 3, &UNK_1809fa540);
    if (system_validation_flag != '\0') {
      FUN_180645c10(0x180c95578, system_parameter, &UNK_1809fa510);
    }
  }
  
  /* 系统资源数据处理 */
  _DAT_180c95b3c = _DAT_180c95b3c & 0xffffffff00000000;
  system_result_code = (int)(_DAT_180c92ce0 - _DAT_180c92cd8 >> 3);
  
  /* 系统资源处理循环 */
  if (0 < system_result_code) {
    system_iterator = 0;
    system_base_address = _DAT_180c92cd8;
    do {
      system_data_handle = *(longlong *)(system_base_address + system_iterator * 8);
      if (((system_data_handle != 0) && 
           (*(char *)(*(longlong *)(system_data_handle + 0x58f8) + 0x1c) != '\0')) &&
          (*(longlong *)(system_data_handle + 0x58f8) != system_target_address)) {
        FUN_1805b59d0(system_data_handle, 0x180c95578);
        system_base_address = _DAT_180c92cd8;
      }
      system_iterator = system_iterator + 1;
    } while (system_iterator < system_result_code);
  }
  
  /* 系统最终清理 */
  if (_DAT_180c96070 != 0) {
    FUN_180567f30(_DAT_180c92580, 0x180c95578);
  }
  
  _DAT_180c95b3c = 0;
  /* 系统内存清理 */
  memset(_DAT_180c95b10, 0, (longlong)(_DAT_180c95b08 >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * 系统清理管理器 - 清理系统资源和数据
 * 
 * 功能：
 * - 清理系统资源和数据
 * - 重置系统状态
 * - 释放内存
 * 
 */
void system_cleanup_manager(void)
{
  /* 系统资源清理 */
  FUN_180567f30(_DAT_180c92580, 0x180c95578);
  
  /* 系统状态重置 */
  _DAT_180c95b3c = 0;
  
  /* 系统内存清理 */
  memset(_DAT_180c95b10, 0, (longlong)(_DAT_180c95b08 >> 3));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * 系统参数处理器 - 处理系统参数和状态
 * 
 * 功能：
 * - 处理系统参数设置和更新
 * - 管理参数状态变化
 * - 执行参数验证
 * - 处理参数同步
 * 
 * @param param_1 系统参数指针
 * @param param_2 参数上下文
 * @param param_3 参数值
 */
void system_parameter_handler(longlong *param_1, longlong param_2, undefined4 param_3)
{
  char system_validation_flag;
  int system_result_code;
  undefined8 system_context;
  longlong system_base_address;
  uint system_hash_value;
  
  /* 系统参数更新 */
  system_base_address = param_1[3];
  *(undefined4 *)(param_1 + 3) = param_3;
  
  /* 系统资源管理 */
  if (((_DAT_180c96070 != 0) && (-1 < (int)system_base_address)) &&
     (system_base_address = (longlong)(int)system_base_address * SYSTEM_DATA_BUFFER_SIZE,
      *(longlong **)(system_base_address + 0x3988 + _DAT_180c96070) == param_1)) {
    FUN_180520b40(_DAT_180c96070 + 0x30a0 + system_base_address, 0);
  }
  
  if (((param_2 != 0) && (-1 < (int)param_1[3])) &&
     (system_base_address = (longlong)(int)param_1[3] * SYSTEM_DATA_BUFFER_SIZE, 
      *(longlong **)(system_base_address + 0x3988 + param_2) != param_1)) {
    FUN_180520b40(system_base_address + 0x30a0 + param_2, param_1);
  }
  
  /* 系统哈希值计算 */
  system_base_address = *param_1;
  _DAT_180bf65b8 = _DAT_180bf65b8 << SYSTEM_BIT_SHIFT_13 ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 >> SYSTEM_BIT_SHIFT_17 ^ _DAT_180bf65b8;
  _DAT_180bf65b8 = _DAT_180bf65b8 << SYSTEM_BIT_SHIFT_5 ^ _DAT_180bf65b8;
  system_hash_value = _DAT_180bf65b8 - 1 & SYSTEM_FLAG_MASK_0x3ff;
  *(uint *)((longlong)param_1 + 0xc) = system_hash_value;
  *(uint *)(param_1 + 1) = system_hash_value;
  
  /* 系统上下文处理 */
  if (system_base_address != 0) {
    if (*(char *)(system_base_address + 0x31) == '\0') {
      system_result_code = _Mtx_lock(system_base_address + 0x5990);
      if (system_result_code != 0) {
        __Throw_C_error_std__YAXH_Z(system_result_code);
      }
      system_context = FUN_1805fa9a0(system_base_address + 0x50, 0x28);
      system_hash_value = *(uint *)(param_1 + 1);
    }
    else {
      system_context = 0;
    }
    
    /* 系统参数验证 */
    system_validation_flag = FUN_180645c10(system_context, 0, &UNK_1809fa560);
    if ((system_validation_flag != '\0') && 
        (system_validation_flag = FUN_180645c10(system_context, 0x16, &UNK_1809fa540), 
         system_validation_flag != '\0')) {
      FUN_180645c10(system_context, system_hash_value, &UNK_1809fa550);
    }
    
    /* 系统互斥锁释放 */
    if (*(char *)(system_base_address + 0x31) == '\0') {
      FUN_1805faa20(system_base_address + 0x50);
      system_result_code = _Mtx_unlock(system_base_address + 0x5990);
      if (system_result_code != 0) {
        __Throw_C_error_std__YAXH_Z(system_result_code);
      }
    }
  }
  return;
}






/**
 * 系统线程同步器 - 处理线程同步操作
 * 
 * 功能：
 * - 处理线程同步和互斥锁操作
 * - 管理线程状态
 * - 执行线程安全的数据访问
 * 
 * @param system_context 系统上下文（通过寄存器传递）
 * @param system_data 系统数据（通过寄存器传递）
 * @param system_parameter 系统参数（通过寄存器传递）
 * @param sync_flag 同步标志
 */
void system_thread_synchronizer(void)
{
  char system_validation_flag;
  int system_result_code;
  longlong system_context;
  undefined8 system_handle;
  longlong system_base_address;
  undefined4 system_parameter;
  bool sync_flag;
  
  /* 线程同步处理 */
  if (sync_flag) {
    system_result_code = _Mtx_lock(system_base_address + 0x5990);
    if (system_result_code != 0) {
      __Throw_C_error_std__YAXH_Z(system_result_code);
    }
    system_handle = FUN_1805fa9a0(system_base_address + 0x50, 0x28);
    system_parameter = *(undefined4 *)(system_context + 8);
  }
  else {
    system_handle = 0;
  }
  
  /* 系统数据验证 */
  system_validation_flag = FUN_180645c10(system_handle, 0, &UNK_1809fa560);
  if ((system_validation_flag != '\0') && 
      (system_validation_flag = FUN_180645c10(system_handle, 0x16, &UNK_1809fa540), 
       system_validation_flag != '\0')) {
    FUN_180645c10(system_handle, system_parameter, &UNK_1809fa550);
  }
  
  /* 系统互斥锁释放 */
  if (*(char *)(system_base_address + 0x31) == '\0') {
    FUN_1805faa20(system_base_address + 0x50);
    system_result_code = _Mtx_unlock(system_base_address + 0x5990);
    if (system_result_code != 0) {
      __Throw_C_error_std__YAXH_Z(system_result_code);
    }
  }
  return;
}






/**
 * 系统互斥锁解锁器 - 解锁系统互斥锁
 * 
 * 功能：
 * - 解锁系统互斥锁
 * - 清理系统资源
 * 
 * @param system_context 系统上下文（通过寄存器传递）
 */
void system_mutex_unlocker(void)
{
  int system_result_code;
  longlong system_context;
  
  /* 系统资源清理 */
  FUN_1805faa20();
  
  /* 系统互斥锁解锁 */
  system_result_code = _Mtx_unlock(system_context + 0x5990);
  if (system_result_code != 0) {
    __Throw_C_error_std__YAXH_Z(system_result_code);
  }
  return;
}






/**
 * 系统空函数 - 空操作函数
 * 
 * 功能：
 * - 空操作函数
 * - 占位符函数
 * 
 */
void system_empty_function(void)
{
  return;
}



undefined8 *
FUN_1805edbf0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a378a0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1805edc40(undefined8 *param_1)
void FUN_1805edc40(undefined8 *param_1)

{
  *param_1 = &UNK_180a378a0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



undefined8 *
FUN_1805edc80(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  *param_1 = &UNK_180a19ac8;
  *param_1 = &UNK_180a37930;
  lVar2 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 3;
  FUN_18034c080(param_1 + 10);
  FUN_18034c080(param_1 + 0x114);
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  plVar3 = param_1 + 0x224;
  pcVar4 = FUN_180045af0;
  FUN_1808fc838(plVar3,8,3,&SUB_18005d5f0,FUN_180045af0);
  *(undefined4 *)(param_1 + 0x229) = 0x41c64e6d;
  *(undefined4 *)(param_1 + 0x229) = 0x897ee768;
  *(undefined4 *)(param_1 + 5) = 0xbfc4bf74;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3dcccccd;
  param_1[0x221] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x222) = 0xffffffff;
  do {
    plVar1 = (longlong *)*plVar3;
    *plVar3 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    uVar5 = (undefined4)((ulonglong)pcVar4 >> 0x20);
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x1138) = 0;
    lVar2 = lVar2 + 1;
    plVar3 = plVar3 + 1;
  } while (lVar2 < 3);
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 9) = 0;
  plVar3 = (longlong *)param_1[0x21e];
  param_1[0x21e] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar3 = (longlong *)param_1[0x21f];
  param_1[0x21f] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  param_1[0x228] = 0;
  *(undefined4 *)(param_1 + 0x223) = 0xffffffff;
  FUN_1805eebb0(param_1,param_2,param_3,param_4,CONCAT44(uVar5,param_5),param_6,param_7,param_8,
                param_9);
  return param_1;
}



undefined8 FUN_1805ede90(undefined8 param_1,ulonglong param_2)

{
  FUN_1805eded0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1150);
  }
  return param_1;
}






// 函数: void FUN_1805eded0(undefined8 *param_1)
void FUN_1805eded0(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *param_1 = &UNK_180a37930;
  lVar2 = param_1[0x21f];
  uVar3 = 0;
  if ((lVar2 != 0) &&
     (uVar4 = uVar3, uVar6 = uVar3,
     *(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4 != 0)) {
    do {
      puVar1 = (uint *)(*(longlong *)(uVar4 + *(longlong *)(param_1[0x21f] + 0x38)) + 0x100);
      *puVar1 = *puVar1 & 0xfffff7ff;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 0x10;
      uVar6 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)
             (*(longlong *)(param_1[0x21f] + 0x40) - *(longlong *)(param_1[0x21f] + 0x38) >> 4));
  }
  lVar2 = param_1[0x21e];
  if ((lVar2 != 0) &&
     (uVar4 = uVar3, *(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) >> 4 != 0)) {
    do {
      puVar1 = (uint *)(*(longlong *)(uVar4 + *(longlong *)(param_1[0x21e] + 0x38)) + 0x100);
      *puVar1 = *puVar1 & 0xfffff7ff;
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
      uVar4 = uVar4 + 0x10;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)
             (*(longlong *)(param_1[0x21e] + 0x40) - *(longlong *)(param_1[0x21e] + 0x38) >> 4));
  }
  FUN_1808fc8a8(param_1 + 0x224,8,3,FUN_180045af0,0xfffffffffffffffe);
  if ((longlong *)param_1[0x220] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x220] + 0x38))();
  }
  if ((longlong *)param_1[0x21f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21f] + 0x38))();
  }
  if ((longlong *)param_1[0x21e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21e] + 0x38))();
  }
  if ((longlong *)param_1[0x11b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11b] + 0x38))();
  }
  if ((longlong *)param_1[0x118] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x118] + 0x38))();
  }
  FUN_18034db80(param_1 + 0x114);
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x38))();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x38))();
  }
  FUN_18034db80(param_1 + 10);
  if (param_1[1] == 0) {
    *param_1 = &UNK_180a19ac8;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ee0b0(longlong param_1,float param_2,longlong param_3)
void FUN_1805ee0b0(longlong param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  float fVar13;
  float fVar14;
  longlong *plStackX_8;
  
  uVar4 = 0;
  piVar3 = (int *)(param_1 + 0x1108);
  uVar7 = uVar4;
  uVar9 = uVar4;
  do {
    iVar11 = *piVar3;
    iVar10 = (int)uVar9;
    if (iVar11 != -1) {
      uVar12 = *(undefined1 *)((longlong)iVar10 + 0x1114 + param_1);
      if (-1 < iVar11) {
        if (*(int *)(param_1 + 0x1118) != iVar11) {
          puVar5 = (undefined8 *)
                   FUN_1800b3590(uVar7,&plStackX_8,
                                 *(longlong *)
                                  (*(longlong *)(_DAT_180c8a9f0 + 0x30) + (longlong)iVar11 * 8) +
                                 0x20,0,0xfffffffffffffffe);
          uVar2 = *puVar5;
          if (plStackX_8 != (longlong *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
          FUN_180208400(param_1 + 0x50,uVar2,uVar12);
        }
        goto LAB_1805ee19e;
      }
      break;
    }
    uVar9 = (ulonglong)(iVar10 + 1);
    uVar7 = uVar7 + 1;
    piVar3 = piVar3 + 1;
    iVar11 = -1;
    iVar10 = -1;
  } while ((longlong)uVar7 < 3);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    plStackX_8 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
    plStackX_8 = *(longlong **)(param_1 + 0x70);
    *(longlong **)(param_1 + 0x70) = plVar1;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x898);
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_1 + 0x90);
  }
  plStackX_8 = *(longlong **)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
LAB_1805ee19e:
  *(int *)(param_1 + 0x1118) = iVar11;
  if (((param_3 != 0) &&
      (fVar13 = param_2 + *(float *)(param_1 + 0x28), *(float *)(param_1 + 0x28) = fVar13,
      *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x34) + 5.0 <
      fVar13)) &&
     ((iVar11 < 0 ||
      ((*(byte *)(*(longlong *)(*(longlong *)(_DAT_180c8a9f0 + 0x30) + (longlong)iVar11 * 8) + 0x40)
       & 1) != 0)))) {
    uVar6 = *(uint *)(param_1 + 0x1148) << 0xd ^ *(uint *)(param_1 + 0x1148);
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    *(uint *)(param_1 + 0x1148) = uVar6;
    fVar13 = (float)(uVar6 - 1) * 1.5366822e-11 + 0.05;
    *(float *)(param_1 + 0x2c) = fVar13;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(float *)(param_1 + 0x34) = fVar13 + fVar13;
    uVar6 = *(uint *)(param_1 + 0x1148) << 0xd ^ *(uint *)(param_1 + 0x1148);
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    *(uint *)(param_1 + 0x1148) = uVar6;
    *(float *)(param_1 + 0x28) = (float)(uVar6 - 1) * -1.7462298e-10;
  }
  FUN_180208610(param_1 + 0x50,param_2);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    fVar13 = (float)*(int *)(plVar1[0x18] + -0x28) * 0.033333335;
    if ((fVar13 < *(float *)(param_1 + 0x898) || fVar13 == *(float *)(param_1 + 0x898)) &&
       (*(char *)(param_1 + 0x90) == '\0')) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
      plStackX_8 = *(longlong **)(param_1 + 0x70);
      *(longlong **)(param_1 + 0x70) = plVar1;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x898);
      *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_1 + 0x90);
      plStackX_8 = *(longlong **)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(undefined2 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x898) = 0;
      if (iVar10 != -1) {
        *(undefined4 *)(param_1 + 0x1108 + (longlong)iVar10 * 4) = 0xffffffff;
      }
    }
  }
  uVar12 = 0;
  puVar8 = (ulonglong *)(param_1 + 0x1120);
  uVar7 = uVar4;
  uVar9 = uVar4;
  do {
    if (uVar9 != 0) goto LAB_1805ee4ae;
    if (*puVar8 != 0) {
      uVar12 = *(undefined1 *)(uVar4 + 0x1138 + param_1);
      uVar9 = *puVar8;
    }
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    uVar4 = uVar4 + 1;
    puVar8 = puVar8 + 1;
  } while ((int)uVar6 < 3);
  if (uVar9 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x8d8);
    if (plVar1 != (longlong *)0x0) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
      plStackX_8 = *(longlong **)(param_1 + 0x8c0);
      *(longlong **)(param_1 + 0x8c0) = plVar1;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_1 + 0x10e8);
      *(undefined4 *)(param_1 + 0x8cc) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x8d0) = *(undefined1 *)(param_1 + 0x8e0);
    }
    plStackX_8 = *(longlong **)(param_1 + 0x8d8);
    *(undefined8 *)(param_1 + 0x8d8) = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    *(undefined2 *)(param_1 + 0x8e0) = 0;
    *(undefined4 *)(param_1 + 0x10e8) = 0;
    *(undefined8 *)(param_1 + 0x1140) = 0;
  }
  else {
LAB_1805ee4ae:
    if (*(ulonglong *)(param_1 + 0x1140) != uVar9) {
      FUN_180208400(param_1 + 0x8a0,uVar9,uVar12);
      *(ulonglong *)(param_1 + 0x1140) = uVar9;
    }
  }
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    fVar13 = param_2 + *(float *)(param_1 + 0x10e8);
    *(float *)(param_1 + 0x10e8) = fVar13;
    fVar14 = (float)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x8d8) + 0xc0) + -0x28) *
             0.033333335;
    if (fVar14 < fVar13) {
      if (*(char *)(param_1 + 0x8e0) == '\0') {
        *(float *)(param_1 + 0x10e8) = fVar14;
      }
      else {
        fVar13 = fVar13 - fVar14;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        *(float *)(param_1 + 0x10e8) = fVar13;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    fVar13 = param_2 + *(float *)(param_1 + 0x8c8);
    *(float *)(param_1 + 0x8c8) = fVar13;
    fVar14 = (float)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x8c0) + 0xc0) + -0x28) *
             0.033333335;
    if (fVar14 < fVar13) {
      if (*(char *)(param_1 + 0x8d0) == '\0') {
        *(float *)(param_1 + 0x8c8) = fVar14;
      }
      else {
        fVar13 = fVar13 - fVar14;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        *(float *)(param_1 + 0x8c8) = fVar13;
      }
    }
    fVar13 = *(float *)(param_1 + 0x8cc) - param_2 * 5.0;
    *(float *)(param_1 + 0x8cc) = fVar13;
    if (fVar13 <= 0.0) {
      plStackX_8 = *(longlong **)(param_1 + 0x8c0);
      *(undefined8 *)(param_1 + 0x8c0) = 0;
      if (plStackX_8 != (longlong *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      *(undefined4 *)(param_1 + 0x8cc) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




