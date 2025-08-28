// 02_core_engine_part015.c - 核心引擎模块第15部分 - 资源管理系统
// 
// 本文件包含23个函数，主要负责：
// - 资源管理器的初始化、清理和重置
// - 资源的分配、释放和合并
// - 资源事件的监控和处理
// - 资源缓存的维护和管理
// - 资源回调函数的执行
//
// 简化说明：为提高代码可读性，函数已重命名为语义化名称，
//          并添加了中文注释说明功能。部分复杂算法进行了简化处理。

// 02_core_engine_part015.c - 核心引擎模块第15部分 - 资源管理系统
// 
// 本文件包含23个函数，主要负责：
// - 资源管理器的初始化、清理和重置
// - 资源的分配、释放和合并
// - 资源事件的监控和处理
// - 资源缓存的维护和管理
// - 资源回调函数的执行
//
// 简化说明：为提高代码可读性，函数已重命名为语义化名称，
//          并添加了中文注释说明功能。部分复杂算法进行了简化处理。

#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part015.c - 核心引擎模块第15部分 - 23个函数

// 函数: void cleanup_resource_manager(int64_t resource_manager)
// 功能: 清理资源管理器中的所有资源
void cleanup_resource_manager(int64_t resource_manager)

{
  int64_t resource_array;
  int64_t resource_ptr;
  uint64_t resource_count;
  uint64_t index;
  
  resource_count = *(uint64_t *)(resource_manager + 0x10);
  resource_array = *(int64_t *)(resource_manager + 8);
  index = 0;
  if (resource_count != 0) {
    do {
      resource_ptr = *(int64_t *)(resource_array + index * 8);
      if (resource_ptr != 0) {
        if (*(int64_t **)(resource_ptr + 0x10) != (int64_t *)0x0) {
          // 调用资源的清理函数
          (**(code **)(**(int64_t **)(resource_ptr + 0x10) + 0x38))();
        }
        // 释放资源
        free_resource(resource_ptr);
      }
      *(uint64_t *)(resource_array + index * 8) = 0;
      index = index + 1;
    } while (index < resource_count);
    resource_count = *(uint64_t *)(resource_manager + 0x10);
  }
  *(uint64_t *)(resource_manager + 0x18) = 0;
  if ((1 < resource_count) && (*(int64_t *)(resource_manager + 8) != 0)) {
    free_resource();
  }
  return;
}



// 函数: int64_t initialize_resource_manager(int64_t resource_manager)
// 功能: 初始化资源管理器结构
int64_t initialize_resource_manager(int64_t resource_manager)

{
  // 初始化资源数组指针
  *(uint64_t *)(resource_manager + 8) = &system_state_ptr;
  // 设置资源数量为0
  *(uint64_t *)(resource_manager + 0x10) = 0;
  // 设置状态标志为0
  *(int32_t *)(resource_manager + 0x18) = 0;
  
  // 设置备用资源数组指针
  *(uint64_t *)(resource_manager + 8) = &system_data_buffer_ptr;
  // 设置备用资源数量为0
  *(uint64_t *)(resource_manager + 0x20) = 0;
  // 重置资源数量为0
  *(uint64_t *)(resource_manager + 0x10) = 0;
  // 重置状态标志为0
  *(int32_t *)(resource_manager + 0x18) = 0;
  
  return resource_manager;
}





// 函数: void reset_resource_manager(int64_t resource_manager)
// 功能: 重置资源管理器，清空所有资源
void reset_resource_manager(int64_t resource_manager)

{
  // 设置资源数组指针为空
  *(uint64_t *)(resource_manager + 8) = &system_data_buffer_ptr;
  
  // 检查是否有资源存在
  if (*(int64_t *)(resource_manager + 0x10) != 0) {
    // 如果有资源存在，触发错误（不返回的子程序）
    CoreEngineMemoryPoolCleaner();
  }
  
  // 重置资源数量为0
  *(uint64_t *)(resource_manager + 0x10) = 0;
  // 重置备用资源数量为0
  *(int32_t *)(resource_manager + 0x20) = 0;
  // 设置资源数组指针为空
  *(uint64_t *)(resource_manager + 8) = &system_state_ptr;
  
  return;
}





// 函数: void process_resource_request(int64_t resource_manager, uint64_t unused_param, uint64_t param_3, uint64_t param_4)
// 功能: 处理资源请求，调用资源处理函数
void process_resource_request(int64_t resource_manager, uint64_t unused_param, uint64_t param_3, uint64_t param_4)

{
  // 调用资源处理函数，传入资源管理器、资源数量、参数3和参数4
  FUN_180058210(resource_manager, *(uint64_t *)(resource_manager + 0x10), param_3, param_4, 0xfffffffffffffffe);
  return;
}





// 函数: void force_cleanup_resource_manager(int64_t resource_manager)
// 功能: 强制清理资源管理器中的所有资源（不安全的清理方式）
void force_cleanup_resource_manager(int64_t resource_manager)

{
  int64_t resource_array;
  int64_t resource_ptr;
  uint64_t resource_count;
  uint64_t index;
  
  // 获取资源数量和资源数组
  resource_count = *(uint64_t *)(resource_manager + 0x10);
  resource_array = *(int64_t *)(resource_manager + 8);
  index = 0;
  
  if (resource_count != 0) {
    do {
      // 获取当前资源指针
      resource_ptr = *(int64_t *)(resource_array + index * 8);
      if (resource_ptr != 0) {
        // 如果资源有清理函数，调用它
        if (*(int64_t **)(resource_ptr + 0x10) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(resource_ptr + 0x10) + 0x38))();
        }
        // 强制释放资源（不返回的子程序）
        CoreEngineMemoryPoolCleaner(resource_ptr);
      }
      // 清空资源指针
      *(uint64_t *)(resource_array + index * 8) = 0;
      index = index + 1;
    } while (index < resource_count);
    resource_count = *(uint64_t *)(resource_manager + 0x10);
  }
  
  // 重置状态标志
  *(uint64_t *)(resource_manager + 0x18) = 0;
  
  // 如果资源数量大于1且资源数组存在，触发错误
  if ((1 < resource_count) && (*(int64_t *)(resource_manager + 8) != 0)) {
    CoreEngineMemoryPoolCleaner();
  }
  
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void emergency_exit_process(uint64_t unused_param, int32_t exit_code)
// 功能: 紧急退出进程，进行清理后以指定错误码退出
void emergency_exit_process(uint64_t unused_param, int32_t exit_code)

{
  code *system_call_ptr;
  
  // 如果全局数据结构存在，调用清理函数
  if (system_cache_buffer != 0) {
    func_0x00018005a410(system_cache_buffer + 8);
  }
  
  // 等待2秒，确保清理完成
  Sleep(2000);
  
  // 以指定错误码退出进程
  _Exit(exit_code);
  
  // 下面的代码不会执行，因为_Exit不会返回
  system_call_ptr = (code *)swi(3);
  (*system_call_ptr)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_system_configuration(void)
// 功能: 初始化系统配置，设置各种全局参数和数据结构
void initialize_system_configuration(void)

{
  uint64_t *global_ptr;
  uint64_t backup_value;
  char *config_data;
  int lock_result;
  char *iterator_ptr;
  uint64_t unused_r9;
  uint64_t flag_value;
  
  // 获取配置数据指针和设置标志值
  config_data = core_system_data_config;
  flag_value = 0xfffffffffffffffe;
  
  // 检查配置数据是否有效
  if (*core_system_data_config != '\0') {
    // 获取全局数据指针
    global_ptr = (uint64_t *)*core_system_data_config;
    
    // 加锁保护共享数据
    lock_result = _Mtx_lock(0x180c91970);
    if (lock_result != 0) {
      // 如果加锁失败，抛出C标准错误
      __Throw_C_error_std__YAXH_Z(lock_result);
    }
    
    // 备份当前值并更新全局数据
    backup_value = SYSTEM_DATA_MANAGER_A;
    SYSTEM_DATA_MANAGER_A = *global_ptr;
    
    // 初始化基础配置数据结构
    FUN_1801299b0(&processed_var_6880_ptr, 0, 0, unused_r9, flag_value);
    
    // 设置基础配置参数
    SystemCore_CacheManager0(&processed_var_6896_ptr, *(int32_t *)(config_data + 4));     // 参数1
    SystemCore_CacheManager0(&processed_var_6928_ptr, *(int32_t *)(config_data + 8));     // 参数2
    SystemCore_CacheManager0(&processed_var_6960_ptr, *(int32_t *)(config_data + 0xc));   // 参数3
    SystemCore_CacheManager0(&processed_var_6992_ptr, *(int32_t *)(config_data + 0x10));  // 参数4
    SystemCore_CacheManager0(&processed_var_7024_ptr, *(int32_t *)(config_data + 0x14));  // 参数5
    SystemCore_CacheManager0(&processed_var_7064_ptr, *(int32_t *)(config_data + 0x18));  // 参数6
    
    // 处理第一组配置数据（偏移0x28处的链表）
    for (iterator_ptr = *(char **)(config_data + 0x28); iterator_ptr != config_data + 0x20;
        iterator_ptr = (char *)func_0x00018066bd70(iterator_ptr)) {
      SystemCore_CacheManager0(&processed_var_7104_ptr, *(int32_t *)(iterator_ptr + 0x20), *(int32_t *)(iterator_ptr + 0x24));
    }
    
    // 处理第二组配置数据（偏移0x58处的链表）
    for (iterator_ptr = *(char **)(config_data + 0x58); iterator_ptr != config_data + 0x50;
        iterator_ptr = (char *)func_0x00018066bd70(iterator_ptr)) {
      SystemCore_CacheManager0(&processed_var_7144_ptr, *(int32_t *)(iterator_ptr + 0x20), *(int32_t *)(iterator_ptr + 0x24));
    }
    
    // 设置高级配置参数
    SystemCore_CacheManager0(&processed_var_7184_ptr, *(int32_t *)(config_data + 0x80));  // 高级参数1
    SystemCore_CacheManager0(&processed_var_7224_ptr, *(int32_t *)(config_data + 0x84));  // 高级参数2
    SystemCore_CacheManager0(&processed_var_7264_ptr, *(int32_t *)(config_data + 0x88));  // 高级参数3
    
    // 完成配置初始化
    FUN_18012cfe0();
    
    // 恢复备份值
    SYSTEM_DATA_MANAGER_A = backup_value;
    
    // 解锁共享数据
    lock_result = _Mtx_unlock(0x180c91970);
    if (lock_result != 0) {
      // 如果解锁失败，抛出C标准错误
      __Throw_C_error_std__YAXH_Z(lock_result);
    }
  }
  
  return;
}





// 函数: void merge_and_deduplicate_resources(int64_t resource_container)
// 功能: 合并和去重资源容器中的资源项
// 原本实现: 这是一个复杂的资源合并算法，比较资源标识符和名称，合并重复项
// 简化实现: 保留核心功能，但简化了复杂的比较逻辑
void merge_and_deduplicate_resources(int64_t resource_container)

{
  char char1, char2;
  int resource_type1, resource_type2;
  uint64_t *resource_ptr;
  uint64_t array_size;
  int match_index;
  char *resource_name1, *resource_name2;
  int64_t *sub_resource_array;
  int64_t array_end, array_start;
  int outer_index, inner_index;
  int64_t current_offset, compare_offset;
  int found_index;
  int64_t resource_data;
  uint64_t current_index;
  int64_t name_length;
  int64_t array_base;
  int loop_counter1, loop_counter2;
  int64_t offset1, offset2;
  int resource_count;
  int current_pos;
  bool is_match;
  
  current_index = 0;
  array_end = *(int64_t *)(resource_container + 0x50);
  array_start = *(int64_t *)(resource_container + 0x48);
  
  // 检查数组是否为空
  if ((array_end - array_start) >> 3 != 0) {
    resource_count = 1;
    offset1 = 8;
    offset2 = current_index;
    
    do {
      current_pos = (int)current_index;
      match_index = -1;
      
      // 内层循环：查找匹配的资源
      if ((uint64_t)(int64_t)resource_count < (uint64_t)((array_end - array_start) >> 3)) {
        array_end = *(int64_t *)(resource_container + 0x50);
        current_offset = offset1;
        inner_index = resource_count;
        found_index = -1;
        
        do {
          // 获取资源类型进行比较
          resource_type1 = *(int *)(*(int64_t *)(current_offset + array_start) + 0x10);
          resource_type2 = *(int *)(*(int64_t *)(offset2 + array_start) + 0x10);
          
          if (resource_type1 == resource_type2) {
            if (resource_type1 == 0) {
              // 空类型资源的特殊处理
              if (resource_type2 != 0) {
                is_match = false;
              } else {
                is_match = true;
              }
            }
            else {
              // 比较资源名称字符串
              resource_name1 = *(char **)(*(int64_t *)(current_offset + array_start) + 8);
              name_length = *(int64_t *)(*(int64_t *)(offset2 + array_start) + 8) - (int64_t)resource_name1;
              
              do {
                char1 = *resource_name1;
                char2 = resource_name1[name_length];
                if (char1 != char2) break;
                resource_name1 = resource_name1 + 1;
              } while (char2 != '\0');
              
              is_match = char1 == char2;
            }
          }
          else {
            if (resource_type1 == 0) {
              is_match = false;
            } else {
              is_match = false;
            }
          }
          
          match_index = inner_index;
          if (!is_match) {
            match_index = found_index;
          }
          
          inner_index = inner_index + 1;
          current_offset = current_offset + 8;
          found_index = match_index;
        } while ((uint64_t)(int64_t)inner_index < (uint64_t)((array_end - array_start) >> 3));
      }
      
      // 如果找到匹配项，合并资源
      if (match_index != -1) {
        current_offset = (int64_t)match_index;
        array_end = *(int64_t *)(array_start + current_offset * 8);
        
        // 合并资源数据（例如：累加数值）
        *(double *)(*(int64_t *)(offset2 + array_start) + 0x40) = 
             *(double *)(array_end + 0x40) + *(double *)(*(int64_t *)(offset2 + array_start) + 0x40);
        
        // 处理子资源数组
        sub_resource_array = *(int64_t **)(array_end + 0x48);
        if (sub_resource_array != *(int64_t **)(array_end + 0x50)) {
          array_base = *(int64_t *)(resource_container + 0x48);
          do {
            *(uint64_t *)(*sub_resource_array + 0x68) = *(uint64_t *)(offset2 + array_base);
            sub_resource_array = sub_resource_array + 1;
            array_base = *(int64_t *)(resource_container + 0x48);
          } while (sub_resource_array != *(int64_t **)(*(int64_t *)(array_base + current_offset * 8) + 0x50));
        }
        
        // 合并资源数据结构
        array_end = *(int64_t *)(array_base + current_offset * 8);
        FUN_180058a20(*(int64_t *)(offset2 + array_base) + 0x48,
                      *(uint64_t *)(*(int64_t *)(offset2 + array_base) + 0x50),
                      *(uint64_t *)(array_end + 0x48), *(uint64_t *)(array_end + 0x50));
        
        // 递归处理子资源
        array_end = *(int64_t *)(*(int64_t *)(resource_container + 0x48) + current_offset * 8);
        *(uint64_t *)(array_end + 0x50) = *(uint64_t *)(array_end + 0x48);
        FUN_180056150(*(uint64_t *)(offset2 + *(int64_t *)(resource_container + 0x48)));
        cleanup_resource_array(*(uint64_t *)(*(int64_t *)(resource_container + 0x48) + current_offset * 8));
        
        // 清理重复资源
        resource_ptr = *(uint64_t **)(*(int64_t *)(resource_container + 0x48) + current_offset * 8);
        if (resource_ptr != (uint64_t *)0x0) {
          // 资源清理逻辑
          if (resource_ptr[9] != 0) {
            CoreEngineMemoryPoolCleaner();
          }
          
          // 重置资源指针
          resource_ptr[4] = &system_data_buffer_ptr;
          if (resource_ptr[5] == 0) {
            resource_ptr[5] = 0;
            *(int32_t *)(resource_ptr + 7) = 0;
            resource_ptr[4] = &system_state_ptr;
            *resource_ptr = &system_data_buffer_ptr;
            
            if (resource_ptr[1] == 0) {
              resource_ptr[1] = 0;
              *(int32_t *)(resource_ptr + 3) = 0;
              *resource_ptr = &system_state_ptr;
              CoreEngineMemoryPoolCleaner(resource_ptr);
            }
            CoreEngineMemoryPoolCleaner();
          }
          CoreEngineMemoryPoolCleaner();
        }
        
        // 从数组中移除重复项
        *(uint64_t *)(*(int64_t *)(resource_container + 0x48) + current_offset * 8) = 0;
        array_end = *(int64_t *)(resource_container + 0x48) + current_offset * 8;
        current_index = array_end + 8;
        array_size = *(uint64_t *)(resource_container + 0x50);
        
        if (current_index < array_size) {
          memmove(array_end, current_index, array_size - current_index);
        }
        
        array_end = array_size - 8;
        *(int64_t *)(resource_container + 0x50) = array_end;
        current_pos = current_pos + -1;
        resource_count = resource_count + -1;
        offset2 = offset2 - 8;
        offset1 = offset1 + -8;
      }
      
      current_index = (uint64_t)(current_pos + 1U);
      resource_count = resource_count + 1;
      offset2 = offset2 + 8;
      offset1 = offset1 + 8;
      array_start = *(int64_t *)(resource_container + 0x48);
    } while ((uint64_t)(int64_t)(int)(current_pos + 1U) < (uint64_t)((array_end - array_start) >> 3));
  }
  
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void cleanup_resource_array(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void cleanup_resource_array(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  uVar3 = 0;
  puVar1 = (uint64_t *)(param_1 + 0x48);
  uVar4 = *puVar1;
  uVar5 = uVar3;
  uVar8 = uVar3;
  if ((int64_t)(*(int64_t *)(param_1 + 0x50) - uVar4) >> 3 != 0) {
    do {
      cleanup_resource_array(*(uint64_t *)(uVar4 + uVar5));
      puVar2 = *(uint64_t **)(*puVar1 + uVar5);
      if (puVar2 != (uint64_t *)0x0) {
        if (puVar2[9] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puVar2[4] = &system_data_buffer_ptr;
        if (puVar2[5] == 0) {
          puVar2[5] = 0;
          *(int32_t *)(puVar2 + 7) = 0;
          puVar2[4] = &system_state_ptr;
          *puVar2 = &system_data_buffer_ptr;
          if (puVar2[1] == 0) {
            puVar2[1] = 0;
            *(int32_t *)(puVar2 + 3) = 0;
            *puVar2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar2);
          }
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *(uint64_t *)(*puVar1 + uVar5) = 0;
      uVar7 = (int)uVar8 + 1;
      uVar4 = *puVar1;
      uVar5 = uVar5 + 8;
      uVar8 = (uint64_t)uVar7;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)((int64_t)(*(int64_t *)(param_1 + 0x50) - uVar4) >> 3));
  }
  FUN_180057340(puVar1,0);
  uVar4 = *(uint64_t *)(param_1 + 0x50);
  uVar5 = *puVar1;
  uVar7 = *(uint *)(param_1 + 0x60);
  lVar9 = uVar4 - uVar5;
  lVar6 = lVar9 >> 3;
  if (lVar6 != 0) {
    uVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,uVar7 & 0xff,param_4,uVar10,0,0,0,uVar7);
  }
  lVar6 = uVar3 + lVar6 * 8;
  if (uVar5 == uVar4) {
    uVar4 = *puVar1;
    *puVar1 = uVar3;
    *(int64_t *)(param_1 + 0x50) = lVar6;
    *(int64_t *)(param_1 + 0x58) = lVar6;
    *(uint *)(param_1 + 0x60) = uVar7;
    if (uVar4 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
                    // WARNING: Subroutine does not return
  memmove(uVar3,uVar5,lVar9,param_4,uVar10,uVar3,lVar6,lVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_resource_handler(int64_t *param_1)
void initialize_resource_handler(int64_t *param_1)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int8_t auStack_98 [32];
  int64_t lStack_78;
  int64_t *plStack_68;
  int64_t **pplStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [16];
  uint64_t uStack_28;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  plVar4 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3);
  pplStack_60 = (int64_t **)plVar4;
  FUN_180049830(plVar4);
  *plVar4 = (int64_t)&processed_var_7704_ptr;
  plVar4[0x18] = 0;
  *(int32_t *)(plVar4 + 0x19) = 0;
  plStack_68 = plVar4;
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plStack_68 = (int64_t *)*param_1;
  *param_1 = (int64_t)plVar4;
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x38))();
  }
  lVar3 = system_context_ptr;
  puStack_50 = &system_config_ptr;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0xc;
  strcpy_s(auStack_38,0x10,&processed_var_7296_ptr);
  plVar4 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x208,8,3);
  lStack_78 = lVar3 + 0x70;
  pplStack_60 = (int64_t **)plVar4;
  FUN_18020e0e0(plVar4,&puStack_50,3,lVar3 + 0x2e0);
  *plVar4 = (int64_t)&processed_var_9056_ptr;
  plStack_68 = plVar4;
  FUN_18020e840(plVar4);
  SystemInitializer(lVar3 + 0x48,&plStack_68);
  param_1[1] = (int64_t)plVar4;
  puStack_50 = &system_state_ptr;
  puVar1 = (uint64_t *)param_1[1];
  pcVar2 = *(code **)*puVar1;
  pplStack_60 = &plStack_68;
  plStack_68 = (int64_t *)*param_1;
  if (plStack_68 != (int64_t *)0x0) {
    (**(code **)(*plStack_68 + 0x28))();
  }
  (*pcVar2)(puVar1,&plStack_68);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_98);
}



uint64_t free_resource_memory(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0xd0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void monitor_resource_performance(int64_t param_1)
void monitor_resource_performance(int64_t param_1)

{
  uint uVar1;
  double dVar2;
  uint uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  int64_t lVar8;
  void *puVar9;
  int8_t auStack_c8 [32];
  int8_t uStack_a8;
  int8_t uStack_a0;
  void *puStack_98;
  void *puStack_90;
  uint uStack_88;
  uint64_t uStack_80;
  int64_t lStack_78;
  int64_t alStack_70 [2];
  char acStack_60 [16];
  uint64_t uStack_50;
  
  alStack_70[1] = 0xfffffffffffffffe;
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  lVar4 = core_system_data_config;
  if (core_system_data_config == 0) {
    QueryPerformanceCounter(&lStack_78);
    lVar4 = lStack_78;
  }
  *(double *)(param_1 + 0xc0) = (double)(lVar4 - core_system_data_config) * core_system_data_config;
  LOCK();
  *(int32_t *)(param_1 + 200) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(param_1 + 0xcc) = 1;
  UNLOCK();
  while( true ) {
    do {
      if (*(int *)(param_1 + 0xcc) == 0) {
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(uStack_50 ^ (uint64_t)auStack_c8);
      }
      Sleep(10);
      lVar4 = core_system_data_config;
      if (core_system_data_config == 0) {
        QueryPerformanceCounter(alStack_70);
        lVar4 = alStack_70[0];
      }
      dVar2 = (double)(lVar4 - core_system_data_config) * core_system_data_config;
    } while ((system_memory_2853 == '\0') || (dVar2 - *(double *)(param_1 + 0xc0) <= 900.0));
    LOCK();
    *(int32_t *)(param_1 + 200) = 1;
    UNLOCK();
    puStack_98 = &system_data_buffer_ptr;
    uStack_80 = 0;
    puStack_90 = (void *)0x0;
    uStack_88 = 0;
    CoreEngineDataBufferProcessor(&puStack_98,0x1c);
    puVar5 = (int32_t *)(puStack_90 + uStack_88);
    *puVar5 = 0x73736f50;
    puVar5[1] = 0x656c6269;
    puVar5[2] = 0x61656420;
    puVar5[3] = 0x636f6c64;
    *(uint64_t *)(puVar5 + 4) = 0x746365746564206b;
    puVar5[6] = 0x202c6465;
    *(int8_t *)(puVar5 + 7) = 0;
    uStack_88 = 0x1c;
    CoreEngineDataBufferProcessor(&puStack_98,0x3e);
    puVar5 = (int32_t *)(puStack_90 + uStack_88);
    *puVar5 = 0x69676e65;
    puVar5[1] = 0x6420656e;
    puVar5[2] = 0x6e206469;
    puVar5[3] = 0x7220746f;
    puVar5[4] = 0x65646e65;
    puVar5[5] = 0x20612072;
    puVar5[6] = 0x6d617266;
    puVar5[7] = 0x6f662065;
    *(int16_t *)(puVar5 + 8) = 0x2072;
    *(int8_t *)((int64_t)puVar5 + 0x22) = 0;
    uStack_88 = 0x3e;
    FUN_180060680(acStack_60,&processed_var_4576_ptr,900);
    uVar3 = uStack_88;
    lVar4 = -1;
    do {
      lVar8 = lVar4;
      lVar4 = lVar8 + 1;
    } while (acStack_60[lVar8 + 1] != '\0');
    iVar7 = (int)(lVar8 + 1);
    if (0 < iVar7) break;
    uVar1 = uStack_88 + 10;
    CoreEngineDataBufferProcessor(&puStack_98,uVar1);
    puVar6 = (uint64_t *)(puStack_90 + uStack_88);
    *puVar6 = 0x73646e6f63657320;
    *(int16_t *)(puVar6 + 1) = 0x2021;
    *(int8_t *)((int64_t)puVar6 + 10) = 0;
    uStack_88 = uVar1;
    CoreEngineDataBufferProcessor(&puStack_98,uVar3 + 0x2b);
    puVar5 = (int32_t *)(puStack_90 + uStack_88);
    *puVar5 = 0x65766544;
    puVar5[1] = 0x65706f6c;
    puVar5[2] = 0x6e692072;
    puVar5[3] = 0x76726574;
    puVar5[4] = 0x69746e65;
    puVar5[5] = 0x73206e6f;
    puVar5[6] = 0x65676775;
    puVar5[7] = 0x64657473;
    *(int16_t *)(puVar5 + 8) = 0x2e;
    puVar9 = &system_buffer_ptr;
    if (puStack_90 != (void *)0x0) {
      puVar9 = puStack_90;
    }
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_88 = uVar3 + 0x2b;
    (**(code **)(*(int64_t *)*core_system_data_config + 0x20))
              ((int64_t *)*core_system_data_config,&processed_var_7440_ptr,0x175c,puVar9);
    *(double *)(param_1 + 0xc0) = dVar2;
    puStack_98 = &system_data_buffer_ptr;
    if (puStack_90 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_90 = (void *)0x0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    puStack_98 = &system_state_ptr;
  }
  CoreEngineDataBufferProcessor(&puStack_98,uStack_88 + iVar7);
                    // WARNING: Subroutine does not return
  memcpy(puStack_90 + uStack_88,acStack_60,(int64_t)((int)lVar8 + 2));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void shutdown_resource_system(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void shutdown_resource_system(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char cVar2;
  int8_t auStack_30 [16];
  void *puStack_20;
  void *puStack_18;
  
  FUN_1800b4ec0(param_1,1,1,param_4,0xfffffffffffffffe);
  if (system_cache_buffer != (int64_t *)0x0) {
    cVar2 = (**(code **)(*system_cache_buffer + 0x48))();
    if ((cVar2 != '\0') && (system_cache_buffer[2] != 0)) {
      (*(code *)system_cache_buffer[0x11])(0);
    }
  }
  puStack_20 = &processed_var_5200_ptr;
  puStack_18 = &processed_var_5168_ptr;
  FUN_18005c650(auStack_30);
  *(int8_t *)(core_system_data_config + 0x3a0) = 1;
  FUN_18005e630(system_context_ptr);
  FUN_18005e630(system_context_ptr);
  if (core_system_data_config != 0) {
    FUN_18006eb30();
  }
  FUN_18005e630(system_context_ptr);
  FUN_18005e630(system_context_ptr);
  FUN_18005e630(system_context_ptr);
  if (core_system_data_config != 0) {
    FUN_18006eb30();
  }
  FUN_18005e630(system_context_ptr);
  FUN_1800b4ec0();
  lVar1 = system_parameter_buffer;
  *(int8_t *)(system_parameter_buffer + 0x1504) = 0;
  *(int8_t *)(lVar1 + 0x1506) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_resource_event(uint64_t param_1,uint64_t *param_2,int32_t param_3)
void process_resource_event(uint64_t param_1,uint64_t *param_2,int32_t param_3)

{
  uint64_t uVar1;
  void **ppuVar2;
  int8_t auStack_158 [32];
  void **ppuStack_138;
  void ***pppuStack_130;
  uint64_t uStack_128;
  uint64_t *puStack_120;
  void **ppuStack_118;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [128];
  int32_t uStack_70;
  uint64_t uStack_58;
  int32_t uStack_50;
  uint64_t uStack_28;
  
  uStack_128 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_158;
  ppuStack_138 = &puStack_108;
  puStack_108 = &memory_allocator_3432_ptr;
  puStack_100 = auStack_f0;
  uStack_f8 = 0;
  auStack_f0[0] = 0;
  uStack_70 = 0x17;
  puStack_120 = param_2;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  uStack_58 = CoreEngineDataTransformer(uVar1,param_2);
  uStack_50 = param_3;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x100,8,3);
  ppuVar2 = (void **)FUN_18005ce30(uVar1,&puStack_108);
  ppuStack_118 = ppuVar2;
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  uVar1 = system_context_ptr;
  pppuStack_130 = &ppuStack_138;
  ppuStack_138 = ppuVar2;
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x28))(ppuVar2);
  }
  FUN_18005e370(uVar1,&ppuStack_138);
  if (ppuVar2 != (void **)0x0) {
    (**(code **)(*ppuVar2 + 0x38))(ppuVar2);
  }
  pppuStack_130 = (void ***)&puStack_108;
  puStack_108 = &system_state_ptr;
  *param_2 = &system_data_buffer_ptr;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[1] = 0;
  *(int32_t *)(param_2 + 3) = 0;
  *param_2 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_158);
}



uint64_t * initialize_resource_buffer(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}



uint64_t * reset_resource_buffer(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  return param_1;
}





// 函数: void trigger_resource_initialization(void)
void trigger_resource_initialization(void)

{
  clear_resource_cache();
  return;
}



uint64_t * setup_resource_allocator(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 10;
  return param_1;
}



uint64_t * configure_resource_manager(uint64_t *param_1)

{
  uint64_t *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0x60f] = 0;
  param_1[0x610] = 0;
  puVar1 = param_1 + 0xf;
  param_1[0xc] = puVar1;
  param_1[0xd] = (uint64_t)(-(int)puVar1 & 7) + (int64_t)puVar1;
  param_1[0xe] = param_1 + 0x60f;
  param_1[0x60f] = &processed_var_8432_ptr;
  param_1[0x610] = SystemResourceCleaner;
  return param_1;
}



int64_t * update_resource_pointer(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = (int64_t *)*param_1;
  *param_1 = (int64_t)param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}





// 函数: void copy_resource_name(int64_t param_1,int64_t param_2)
void copy_resource_name(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  void *puVar2;
  
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar2 = *(void **)(param_2 + 8);
  }
  if (puVar2 == (void *)0x0) {
    *(int32_t *)(param_1 + 0x10) = 0;
    **(int8_t **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (puVar2[lVar1] != '\0');
  if ((int)lVar1 < 0x400) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180056fc2. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(uint64_t *)(param_1 + 8),0x400);
    return;
  }
  SystemDataInitializer(&processed_var_616_ptr,0x400);
  *(int32_t *)(param_1 + 0x10) = 0;
  **(int8_t **)(param_1 + 8) = 0;
  return;
}





// 函数: void clear_resource_cache(int64_t *param_1)
void clear_resource_cache(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  
  plVar1 = param_1 + 3;
  lVar2 = *param_1;
  while ((int64_t *)lVar2 != plVar1) {
    lVar2 = *(int64_t *)((uint64_t)(-(int)lVar2 & 7) + lVar2);
    if ((code *)param_1[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)param_1[0x604])();
    }
    *param_1 = lVar2;
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = (uint64_t)(-(int)plVar1 & 7) + (int64_t)plVar1;
  param_1[2] = (int64_t)(param_1 + 0x603);
  return;
}





// 函数: void cleanup_resource_cache_entry(int64_t param_1)
void cleanup_resource_cache_entry(int64_t param_1)

{
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  do {
    param_1 = *(int64_t *)((uint64_t)(-(int)param_1 & 7) + param_1);
    if ((code *)unaff_RDI[0x604] == (code *)0x0) {
      free();
    }
    else {
      (*(code *)unaff_RDI[0x604])();
    }
    *unaff_RDI = param_1;
  } while (param_1 != unaff_RSI);
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (uint64_t)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (int64_t)(unaff_RDI + 0x603);
  return;
}





// 函数: void reset_resource_cache_pointer(void)
void reset_resource_cache_pointer(void)

{
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  
  *unaff_RDI = unaff_RSI;
  unaff_RDI[1] = (uint64_t)(-(int)unaff_RSI & 7) + unaff_RSI;
  unaff_RDI[2] = (int64_t)(unaff_RDI + 0x603);
  return;
}



uint64_t *
initialize_resource_info(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_config_ptr;
  param_1[1] = param_1 + 3;
  *(int32_t *)(param_1 + 2) = 0;
  *(int8_t *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    *(int *)(param_1 + 2) = (int)lVar1;
    strcpy_s(param_1[1],0x10,param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void cleanup_resource_callbacks(int64_t *param_1)
void cleanup_resource_callbacks(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (int64_t)puVar2;
  return;
}





// 函数: void execute_resource_callbacks(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void execute_resource_callbacks(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0xb) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void add_resource_to_queue(int64_t *param_1,int32_t *param_2)
void add_resource_to_queue(int64_t *param_1,int32_t *param_2)

{
  int64_t lVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  
  puVar4 = (int32_t *)param_1[1];
  if (puVar4 < (int32_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar4 + 1);
    *puVar4 = *param_2;
    return;
  }
  puVar3 = (int32_t *)*param_1;
  lVar1 = (int64_t)puVar4 - (int64_t)puVar3 >> 2;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      puVar2 = (int32_t *)0x0;
      goto LAB_18005726e;
    }
  }
  puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 4,(char)param_1[3]);
  puVar3 = (int32_t *)*param_1;
  puVar4 = (int32_t *)param_1[1];
LAB_18005726e:
  if (puVar3 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(int64_t)puVar4 - (int64_t)puVar3);
  }
  *puVar2 = *param_2;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = (int64_t)puVar2;
  param_1[1] = (int64_t)(puVar2 + 1);
  param_1[2] = (int64_t)(puVar2 + lVar1);
  return;
}





// 函数: void reset_resource_handler(int64_t param_1)
void reset_resource_handler(int64_t param_1)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    FUN_18004b790(param_1,*puVar1);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar1);
  }
  *(int64_t *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int64_t *)(param_1 + 8) = param_1;
  return;
}





// 函数: void cleanup_resource_handler(void)
void cleanup_resource_handler(void)

{
  FUN_18004b790();
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void initialize_resource_node(void)
void initialize_resource_node(void)

{
  int64_t unaff_RBX;
  
  *(int64_t *)unaff_RBX = unaff_RBX;
  *(uint64_t *)(unaff_RBX + 0x10) = 0;
  *(int8_t *)(unaff_RBX + 0x18) = 0;
  *(uint64_t *)(unaff_RBX + 0x20) = 0;
  *(int64_t *)(unaff_RBX + 8) = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



