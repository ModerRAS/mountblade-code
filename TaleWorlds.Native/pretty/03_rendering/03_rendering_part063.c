#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part063.c - 17个函数
// 渲染系统高级处理和控制模块，包含位标志处理、树结构搜索、资源管理、线程同步等核心渲染功能

// 函数: void rendering_system_bit_flag_processor(int64_t param_1, int32_t param_2, int64_t param_3, uint param_4, uint64_t param_5, int32_t param_6)
// 渲染系统位标志处理器 - 根据不同的位标志调用相应的渲染处理函数
void rendering_system_bit_flag_processor(int64_t rendering_context_ptr, int32_t render_param, int64_t result_buffer_ptr, uint bit_flags, uint64_t process_data, int32_t config_param)

{
  int64_t *render_device_ptr;        // 渲染设备指针
  code *render_function_ptr;          // 渲染函数指针
  
  // 调用参数初始化函数
  rendering_system_parameter_initializer(rendering_context_ptr, result_buffer_ptr, process_data, config_param);
  
  // 根据位标志执行相应的渲染操作
  if ((bit_flags & 1) != 0) {
    render_device_ptr = *(int64_t **)(rendering_context_ptr + 0x8400);
    render_function_ptr = *(code **)(*render_device_ptr + 0x38);
    *(int32_t *)(result_buffer_ptr + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function_ptr)(render_device_ptr, render_param, 1, result_buffer_ptr + 0x10);
  }
  if ((bit_flags & 4) != 0) {
    render_device_ptr = *(int64_t **)(rendering_context_ptr + 0x8400);
    render_function_ptr = *(code **)(*render_device_ptr + 0x1f0);
    *(int32_t *)(result_buffer_ptr + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function_ptr)(render_device_ptr, render_param, 1, result_buffer_ptr + 0x10);
  }
  if ((bit_flags & 2) != 0) {
    render_device_ptr = *(int64_t **)(rendering_context_ptr + 0x8400);
    render_function_ptr = *(code **)(*render_device_ptr + 0x210);
    *(int32_t *)(result_buffer_ptr + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function_ptr)(render_device_ptr, render_param, 1, result_buffer_ptr + 0x10);
  }
  if ((bit_flags & 0x10) != 0) {
    render_device_ptr = *(int64_t **)(rendering_context_ptr + 0x8400);
    render_function_ptr = *(code **)(*render_device_ptr + 0x80);
    *(int32_t *)(result_buffer_ptr + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function_ptr)(render_device_ptr, render_param, 1, result_buffer_ptr + 0x10);
  }
  if ((bit_flags & 0x20) != 0) {
    render_device_ptr = *(int64_t **)(rendering_context_ptr + 0x8400);
    render_function_ptr = *(code **)(*render_device_ptr + 0x238);
    *(int32_t *)(result_buffer_ptr + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function_ptr)(render_device_ptr, render_param, 1, result_buffer_ptr + 0x10);
  }
  return;
}

// 函数: void rendering_system_flag_based_executor(int64_t param_1, uint64_t param_2, uint64_t param_3, uint param_4)
// 渲染系统基于标志的执行器 - 根据标志位执行不同的渲染操作
void rendering_system_flag_based_executor(int64_t rendering_context_ptr, uint64_t execution_flags, uint64_t process_data, uint operation_mask)

{
  uint64_t processed_flag;            // 处理后的标志
  uint64_t data_buffer[2];          // 数据缓冲区
  
  processed_flag = execution_flags & 0xffffffff;
  data_buffer[0] = process_data;
  
  // 根据操作掩码执行相应的渲染操作
  if ((operation_mask & 1) != 0) {
    (**(code **)(**(int64_t **)(rendering_context_ptr + 0x8400) + 200))
              (*(int64_t **)(rendering_context_ptr + 0x8400), execution_flags, 1, data_buffer);
  }
  if ((operation_mask & 2) != 0) {
    (**(code **)(**(int64_t **)(rendering_context_ptr + 0x8400) + 0x1f8))
              (*(int64_t **)(rendering_context_ptr + 0x8400), processed_flag, 1, data_buffer);
  }
  if ((operation_mask & 4) != 0) {
    (**(code **)(**(int64_t **)(rendering_context_ptr + 0x8400) + 0x1d8))
              (*(int64_t **)(rendering_context_ptr + 0x8400), processed_flag, 1, data_buffer);
  }
  if ((operation_mask & 8) != 0) {
    (**(code **)(**(int64_t **)(rendering_context_ptr + 0x8400) + 0xf8))
              (*(int64_t **)(rendering_context_ptr + 0x8400), processed_flag, 1, data_buffer);
  }
  if ((operation_mask & 0x10) != 0) {
    (**(code **)(**(int64_t **)(rendering_context_ptr + 0x8400) + 0x40))
              (*(int64_t **)(rendering_context_ptr + 0x8400), processed_flag, 1, data_buffer);
  }
  if ((operation_mask & 0x20) != 0) {
    (**(code **)(**(int64_t **)(rendering_context_ptr + 0x8400) + 0x218))
              (*(int64_t **)(rendering_context_ptr + 0x8400), processed_flag, 1, data_buffer);
  }
  return;
}

// 函数: void rendering_system_parameter_initializer(int64_t param_1, int64_t param_2, uint64_t param_3, int32_t param_4)
// 渲染系统参数初始化器 - 初始化渲染参数并处理异常
void rendering_system_parameter_initializer(int64_t rendering_context_ptr, int64_t result_buffer_ptr, uint64_t source_data, int32_t data_size)

{
  int init_result;                     // 初始化结果
  uint64_t temp_buffer[2];           // 临时缓冲区
  
  // 设置结果缓冲区的状态
  *(int32_t *)(result_buffer_ptr + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  
  // 调用渲染设备的初始化函数
  init_result = (**(code **)(**(int64_t **)(rendering_context_ptr + 0x8400) + 0x70))
                    (*(int64_t **)(rendering_context_ptr + 0x8400), *(uint64_t *)(result_buffer_ptr + 0x10), 0, 4, 0, temp_buffer);
  
  // 处理初始化错误
  if (init_result < 0) {
    FUN_180220810(init_result, &unknown_var_1768_ptr);
  }
  
  // 复制源数据到临时缓冲区
  memcpy(temp_buffer[0], source_data, data_size);
}

// 函数: uint64_t * rendering_system_tree_searcher(uint64_t *param_1, int64_t param_2)
// 渲染系统树结构搜索器 - 在树结构中搜索特定节点
uint64_t * rendering_system_tree_searcher(uint64_t *tree_root_ptr, int64_t search_criteria_ptr)

{
  byte comparison_result;               // 比较结果
  bool traversal_direction;            // 遍历方向
  byte *key_data_ptr;                   // 键数据指针
  int64_t *current_node_ptr;           // 当前节点指针
  uint char_comparison_result;         // 字符比较结果
  int string_comparison_result;        // 字符串比较结果
  uint64_t *left_child_ptr;           // 左子节点指针
  uint64_t *right_child_ptr;          // 右子节点指针
  uint64_t *parent_node_ptr;          // 父节点指针
  int64_t key_offset;                  // 键偏移量
  int8_t temp_buffer[8];            // 临时缓冲区
  
  right_child_ptr = (uint64_t *)tree_root_ptr[2];
  parent_node_ptr = tree_root_ptr;
  
  // 遍历树结构
  if (right_child_ptr != (uint64_t *)0x0) {
    do {
      // 检查搜索条件是否有键值
      if (*(int *)(search_criteria_ptr + 0x10) == 0) {
        left_child_ptr = (uint64_t *)right_child_ptr[1];
        traversal_direction = false;
      }
      else {
        // 检查当前节点是否有键值
        if (*(int *)(right_child_ptr + 6) == 0) {
          traversal_direction = true;
        }
        else {
          key_data_ptr = *(byte **)(search_criteria_ptr + 8);
          key_offset = right_child_ptr[5] - (int64_t)key_data_ptr;
          
          // 比较键值
          do {
            char_comparison_result = (uint)key_data_ptr[key_offset];
            string_comparison_result = *key_data_ptr - char_comparison_result;
            if (*key_data_ptr != char_comparison_result) break;
            key_data_ptr = key_data_ptr + 1;
          } while (char_comparison_result != 0);
          
          traversal_direction = 0 < string_comparison_result;
          if (string_comparison_result < 1) {
            left_child_ptr = (uint64_t *)right_child_ptr[1];
            goto LAB_18029fd67;
          }
        }
        left_child_ptr = (uint64_t *)*right_child_ptr;
      }
LAB_18029fd67:
      if (traversal_direction) {
        right_child_ptr = parent_node_ptr;
      }
      parent_node_ptr = right_child_ptr;
      right_child_ptr = left_child_ptr;
    } while (left_child_ptr != (uint64_t *)0x0);
    right_child_ptr = (uint64_t *)0x0;
  }
  
  // 检查找到的节点
  if (parent_node_ptr != tree_root_ptr) {
    if (*(int *)(parent_node_ptr + 6) == 0) {
LAB_18029fdb7:
      return parent_node_ptr + 0x27;
    }
    
    // 验证键值匹配
    if (*(int *)(search_criteria_ptr + 0x10) != 0) {
      key_data_ptr = (byte *)parent_node_ptr[5];
      right_child_ptr = (uint64_t *)(*(int64_t *)(search_criteria_ptr + 8) - (int64_t)key_data_ptr);
      
      do {
        comparison_result = *key_data_ptr;
        char_comparison_result = (uint)key_data_ptr[(int64_t)right_child_ptr];
        if (comparison_result != char_comparison_result) break;
        key_data_ptr = key_data_ptr + 1;
      } while (char_comparison_result != 0);
      
      if ((int)(comparison_result - char_comparison_result) < 1) goto LAB_18029fdb7;
    }
  }
  
  // 调用资源管理器处理结果
  current_node_ptr = (int64_t *)rendering_system_resource_manager(tree_root_ptr, temp_buffer, right_child_ptr, parent_node_ptr, search_criteria_ptr);
  return (uint64_t *)(*current_node_ptr + 0x138);
}

// 函数: uint64_t * rendering_system_node_traverser(uint64_t param_1, int64_t param_2, uint64_t *param_3, uint64_t *param_4)
// 渲染系统节点遍历器 - 遍历树节点并处理数据
uint64_t *
rendering_system_node_traverser(uint64_t traversal_context, int64_t traversal_data, uint64_t *current_node, uint64_t *parent_node)

{
  byte comparison_result;               // 比较结果
  bool traversal_direction;            // 遍历方向
  byte *key_data_ptr;                   // 键数据指针
  int64_t *result_node_ptr;           // 结果节点指针
  uint char_comparison_result;         // 字符比较结果
  int string_comparison_result;        // 字符串比较结果
  int64_t traversal_offset;            // 遍历偏移量
  uint64_t *next_node_ptr;           // 下一个节点指针
  
  // 遍历节点
  do {
    if (*(int *)(traversal_data + 0x10) == 0) {
      next_node_ptr = (uint64_t *)current_node[1];
      traversal_direction = false;
    }
    else {
      if (*(int *)(current_node + 6) == 0) {
        traversal_direction = true;
      }
      else {
        key_data_ptr = *(byte **)(traversal_offset + 8);
        traversal_offset = current_node[5] - (int64_t)key_data_ptr;
        
        do {
          char_comparison_result = (uint)key_data_ptr[traversal_offset];
          string_comparison_result = *key_data_ptr - char_comparison_result;
          if (*key_data_ptr != char_comparison_result) break;
          key_data_ptr = key_data_ptr + 1;
        } while (char_comparison_result != 0);
        
        traversal_direction = 0 < string_comparison_result;
        if (string_comparison_result < 1) {
          next_node_ptr = (uint64_t *)current_node[1];
          goto LAB_18029fd67;
        }
      }
      next_node_ptr = (uint64_t *)*current_node;
    }
LAB_18029fd67:
    if (traversal_direction) {
      current_node = parent_node;
    }
    parent_node = current_node;
    current_node = next_node_ptr;
  } while (next_node_ptr != (uint64_t *)0x0);
  
  // 检查最终节点
  if (parent_node != traversal_context) {
    if (*(int *)(parent_node + 6) == 0) {
LAB_18029fdb7:
      return parent_node_ptr + 0x27;
    }
    
    // 验证键值匹配
    if (*(int *)(traversal_offset + 0x10) != 0) {
      key_data_ptr = (byte *)parent_node[5];
      traversal_offset = *(int64_t *)(traversal_offset + 8) - (int64_t)key_data_ptr;
      
      do {
        comparison_result = *key_data_ptr;
        char_comparison_result = (uint)key_data_ptr[traversal_offset];
        if (comparison_result != char_comparison_result) break;
        key_data_ptr = key_data_ptr + 1;
      } while (char_comparison_result != 0);
      
      if ((int)(comparison_result - char_comparison_result) < 1) goto LAB_18029fdb7;
    }
  }
  
  // 调用资源管理器处理结果
  result_node_ptr = (int64_t *)rendering_system_resource_manager();
  return (uint64_t *)(*result_node_ptr + 0x138);
}

// 函数: int64_t rendering_system_address_calculator(void)
// 渲染系统地址计算器 - 计算并返回处理后的地址
int64_t rendering_system_address_calculator(void)

{
  byte comparison_result;               // 比较结果
  byte *key_data_ptr;                   // 键数据指针
  int64_t *result_ptr;                // 结果指针
  uint char_comparison_result;         // 字符比较结果
  int64_t traversal_offset;            // 遍历偏移量
  int64_t address_offset;              // 地址偏移量
  
  // 检查目标地址
  if (address_offset != traversal_offset) {
    if (*(int *)(address_offset + 0x30) == 0) {
LAB_18029fdb7:
      return address_offset + 0x138;
    }
    
    // 验证键值匹配
    if (*(int *)(traversal_offset + 0x10) != 0) {
      key_data_ptr = *(byte **)(address_offset + 0x28);
      address_offset = *(int64_t *)(traversal_offset + 8) - (int64_t)key_data_ptr;
      
      do {
        comparison_result = *key_data_ptr;
        char_comparison_result = (uint)key_data_ptr[address_offset];
        if (comparison_result != char_comparison_result) break;
        key_data_ptr = key_data_ptr + 1;
      } while (char_comparison_result != 0);
      
      if ((int)(comparison_result - char_comparison_result) < 1) goto LAB_18029fdb7;
    }
  }
  
  // 调用资源管理器处理结果
  result_ptr = (int64_t *)rendering_system_resource_manager();
  return *result_ptr + 0x138;
}

// 函数: uint64_t * rendering_system_resource_manager(int64_t *param_1, uint64_t *param_2, uint64_t param_3, int64_t *param_4, int64_t param_5)
// 渲染系统资源管理器 - 管理渲染资源的分配和释放
uint64_t *
rendering_system_resource_manager(int64_t *resource_manager_ptr, uint64_t *result_buffer_ptr, uint64_t resource_handle, int64_t *target_node_ptr, int64_t resource_data_ptr)

{
  byte comparison_result;               // 比较结果
  bool allocation_flag;                 // 分配标志
  int64_t *current_node_ptr;           // 当前节点指针
  byte *key_data_ptr;                   // 键数据指针
  int64_t *source_node_ptr;            // 源节点指针
  uint char_comparison_result;         // 字符比较结果
  int64_t key_offset;                  // 键偏移量
  int64_t *comparison_node_ptr;        // 比较节点指针
  uint64_t resource_flags;             // 资源标志
  uint64_t allocation_result;         // 分配结果
  
  source_node_ptr = (int64_t *)*resource_manager_ptr;
  
  // 检查目标节点
  if ((target_node_ptr == source_node_ptr) || (target_node_ptr == resource_manager_ptr)) {
    if ((resource_manager_ptr[4] != 0) && (*(int *)(resource_data_ptr + 0x10) != 0)) {
      comparison_node_ptr = target_node_ptr;
      
      // 比较键值
      if (*(int *)(source_node_ptr + 6) != 0) {
        key_data_ptr = *(byte **)(resource_data_ptr + 8);
        comparison_node_ptr = (int64_t *)(source_node_ptr[5] - (int64_t)key_data_ptr);
        
        do {
          comparison_result = *key_data_ptr;
          char_comparison_result = (uint)key_data_ptr[(int64_t)comparison_node_ptr];
          if (comparison_result != char_comparison_result) break;
          key_data_ptr = key_data_ptr + 1;
        } while (char_comparison_result != 0);
        
        if ((int)(comparison_result - char_comparison_result) < 1) goto LAB_18029ff14;
      }
LAB_18029fef7:
      resource_flags = (uint64_t)comparison_node_ptr & 0xffffffffffffff00;
LAB_18029fefa:
      if (source_node_ptr != (int64_t *)0x0) {
        FUN_1802a00a0(resource_manager_ptr, result_buffer_ptr, source_node_ptr, resource_flags, resource_data_ptr);
        return result_buffer_ptr;
      }
    }
  }
  else {
    // 处理不同节点的情况
    current_node_ptr = (int64_t *)func_0x00018066bd70(target_node_ptr);
    if (*(int *)(resource_data_ptr + 0x10) != 0) {
      if ((int)target_node_ptr[6] != 0) {
        key_data_ptr = *(byte **)(resource_data_ptr + 8);
        key_offset = target_node_ptr[5] - (int64_t)key_data_ptr;
        
        do {
          comparison_result = *key_data_ptr;
          char_comparison_result = (uint)key_data_ptr[key_offset];
          if (comparison_result != char_comparison_result) break;
          key_data_ptr = key_data_ptr + 1;
        } while (char_comparison_result != 0);
        
        if ((int)(comparison_result - char_comparison_result) < 1) goto LAB_18029ff14;
      }
      
      if ((int)current_node_ptr[6] != 0) {
        key_data_ptr = (byte *)current_node_ptr[5];
        comparison_node_ptr = (int64_t *)(*(int64_t *)(resource_data_ptr + 8) - (int64_t)key_data_ptr);
        
        do {
          comparison_result = *key_data_ptr;
          char_comparison_result = (uint)key_data_ptr[(int64_t)comparison_node_ptr];
          if (comparison_result != char_comparison_result) break;
          key_data_ptr = key_data_ptr + 1;
        } while (char_comparison_result != 0);
        
        if (0 < (int)(comparison_result - char_comparison_result)) {
          source_node_ptr = target_node_ptr;
          if (*target_node_ptr == 0) goto LAB_18029fef7;
          resource_flags = CONCAT71((int7)((uint64_t)comparison_node_ptr >> 8), 1);
          source_node_ptr = current_node_ptr;
          goto LAB_18029fefa;
        }
      }
    }
  }
  
LAB_18029ff14:
  allocation_flag = true;
  source_node_ptr = (int64_t *)resource_manager_ptr[2];
  comparison_node_ptr = resource_manager_ptr;
  
  // 查找合适的节点
  while (source_node_ptr != (int64_t *)0x0) {
    comparison_node_ptr = source_node_ptr;
    if ((int)source_node_ptr[6] == 0) {
      allocation_flag = false;
LAB_18029ff32:
      source_node_ptr = (int64_t *)*source_node_ptr;
    }
    else {
      if (*(int *)(resource_data_ptr + 0x10) == 0) {
        allocation_flag = true;
      }
      else {
        key_data_ptr = (byte *)source_node_ptr[5];
        key_offset = *(int64_t *)(resource_data_ptr + 8) - (int64_t)key_data_ptr;
        
        do {
          comparison_result = *key_data_ptr;
          char_comparison_result = (uint)key_data_ptr[key_offset];
          if (comparison_result != char_comparison_result) break;
          key_data_ptr = key_data_ptr + 1;
        } while (char_comparison_result != 0);
        
        allocation_flag = 0 < (int)(comparison_result - char_comparison_result);
      }
      if (!allocation_flag) goto LAB_18029ff32;
      source_node_ptr = (int64_t *)source_node_ptr[1];
    }
  }
  
  source_node_ptr = comparison_node_ptr;
  if (allocation_flag) {
    if (comparison_node_ptr != (int64_t *)resource_manager_ptr[1]) {
      source_node_ptr = (int64_t *)func_0x00018066b9a0(comparison_node_ptr);
      goto LAB_18029ff52;
    }
  }
  else {
LAB_18029ff52:
    if (*(int *)(resource_data_ptr + 0x10) == 0) {
LAB_1802a0071:
      *result_buffer_ptr = source_node_ptr;
      return result_buffer_ptr;
    }
    
    if ((int)source_node_ptr[6] != 0) {
      key_data_ptr = *(byte **)(resource_data_ptr + 8);
      key_offset = source_node_ptr[5] - (int64_t)key_data_ptr;
      
      do {
        comparison_result = *key_data_ptr;
        char_comparison_result = (uint)key_data_ptr[key_offset];
        if (comparison_result != char_comparison_result) break;
        key_data_ptr = key_data_ptr + 1;
      } while (char_comparison_result != 0);
      
      if ((int)(comparison_result - char_comparison_result) < 1) goto LAB_1802a0071;
    }
  }
  
  // 处理资源分配
  if (comparison_node_ptr != resource_manager_ptr) {
    if ((int)comparison_node_ptr[6] == 0) {
LAB_18029ffc7:
      allocation_result = 1;
      goto LAB_1802a0010;
    }
    
    if (*(int *)(resource_data_ptr + 0x10) != 0) {
      key_data_ptr = (byte *)comparison_node_ptr[5];
      key_offset = *(int64_t *)(resource_data_ptr + 8) - (int64_t)key_data_ptr;
      
      do {
        comparison_result = *key_data_ptr;
        char_comparison_result = (uint)key_data_ptr[key_offset];
        if (comparison_result != char_comparison_result) break;
        key_data_ptr = key_data_ptr + 1;
      } while (char_comparison_result != 0);
      
      if ((int)(comparison_result - char_comparison_result) < 1) goto LAB_18029ffc7;
    }
  }
  
  allocation_result = 0;
LAB_1802a0010:
  key_offset = CoreEngine_MemoryAllocator(system_memory_pool_ptr, 0x158, (char)resource_manager_ptr[5]);
  FUN_180068ff0(key_offset + 0x20, resource_data_ptr);
  *(uint64_t *)(key_offset + 0x138) = 0;
  *(uint64_t *)(key_offset + 0x140) = 0;
  *(uint64_t *)(key_offset + 0x148) = 0;
  *(uint64_t *)(key_offset + 0x150) = 0;
  
  // 调用资源分配函数
  FUN_18066bdc0(key_offset, comparison_node_ptr, resource_manager_ptr, allocation_result);
}

// 函数: void rendering_system_memory_cleaner(int64_t param_1)
// 渲染系统内存清理器 - 清理渲染系统内存资源
void rendering_system_memory_cleaner(int64_t memory_manager_ptr)

{
  int64_t memory_block_ptr;           // 内存块指针
  uint block_index;                     // 块索引
  uint64_t current_offset;             // 当前偏移量
  uint64_t total_blocks;               // 总块数
  
  memory_block_ptr = *(int64_t *)(memory_manager_ptr + 0x18);
  
  // 清理内存块
  if (memory_block_ptr != 0) {
    total_blocks = 0;
    current_offset = total_blocks;
    
    if ('\0' < *(char *)(memory_manager_ptr + 0x20)) {
      do {
        memory_block_ptr = *(int64_t *)(memory_manager_ptr + 0x18) + current_offset;
        
        // 检查块状态
        if (*(char *)(memory_block_ptr + 0xa1) != '\0') {
          if (*(int64_t *)(memory_block_ptr + 0xa8) != 0) {
            CoreEngine_MemoryPoolManager();
          }
          *(uint64_t *)(memory_block_ptr + 0xa8) = 0;
        }
        
        *(uint64_t *)(memory_block_ptr + 0xf0) = 0;
        FUN_180057830();
        FUN_180057830();
        
        block_index = (int)total_blocks + 1;
        total_blocks = (uint64_t)block_index;
        current_offset = current_offset + 0x100;
      } while ((int)block_index < (int)*(char *)(memory_manager_ptr + 0x20));
      
      memory_block_ptr = *(int64_t *)(memory_manager_ptr + 0x18);
    }
    
    // 释放主内存块
    if (memory_block_ptr != 0) {
      CoreEngine_MemoryPoolManager();
    }
    
    *(uint64_t *)(memory_manager_ptr + 0x18) = 0;
    *(int8_t *)(memory_manager_ptr + 0x20) = 0;
  }
  
  // 处理浮点参数
  if (*(float *)(memory_manager_ptr + 0x3c) < 0.0) {
    *(int32_t *)(memory_manager_ptr + 0x34) = 0x3dcccccd;
    return;
  }
  
  *(float *)(memory_manager_ptr + 0x34) = *(float *)(memory_manager_ptr + 0x3c) + 1.1920929e-07;
  return;
}

// 函数: void rendering_system_batch_processor(int64_t param_1, uint64_t param_2, uint64_t param_3, int32_t param_4)
// 渲染系统批处理器 - 批量处理渲染操作
void rendering_system_batch_processor(int64_t batch_context_ptr, uint64_t process_data, uint64_t render_target, int32_t batch_config)

{
  uint *thread_lock_ptr;                // 线程锁指针
  int32_t *data_source_ptr;          // 数据源指针
  uint64_t *extended_data_ptr;        // 扩展数据指针
  uint lock_status;                     // 锁状态
  int64_t *batch_item_ptr;             // 批处理项指针
  uint64_t data_value1;               // 数据值1
  uint64_t data_value2;               // 数据值2
  uint64_t data_value3;               // 数据值3
  int64_t item_offset;                  // 项偏移量
  int64_t base_address;                 // 基地址
  int processed_count;                  // 已处理计数
  int64_t list_start_ptr;               // 列表起始指针
  int64_t list_end_ptr;                 // 列表结束指针
  int item_index;                       // 项索引
  int8_t stack_canary[32];           // 栈保护变量
  int stack_guard;                      // 栈保护
  uint64_t stack_data1;               // 栈数据1
  int32_t stack_data2;               // 栈数据2
  int32_t stack_data3;               // 栈数据3
  int32_t stack_data4;               // 栈数据4
  int32_t stack_data5;               // 栈数据5
  int32_t stack_data6;               // 栈数据6
  int32_t stack_data7;               // 栈数据7
  int32_t stack_data8;               // 栈数据8
  int32_t stack_data9;               // 栈数据9
  int32_t stack_data10;              // 栈数据10
  int32_t stack_data11;              // 栈数据11
  int32_t stack_data12;              // 栈数据12
  int32_t stack_data13;              // 栈数据13
  uint64_t stack_data14;               // 栈数据14
  uint64_t stack_data15;               // 栈数据15
  int32_t stack_data16;              // 栈数据16
  int8_t stack_data17;               // 栈数据17
  int32_t stack_data18;               // 栈数据18
  int32_t stack_data19;               // 栈数据19
  int32_t stack_data20;              // 栈数据20
  int32_t stack_data21;              // 栈数据21
  int32_t stack_data22;              // 栈数据22
  int32_t stack_data23;              // 栈数据23
  int32_t stack_data24;              // 栈数据24
  int32_t stack_data25;              // 栈数据25
  int32_t stack_data26;              // 栈数据26
  int32_t stack_data27;              // 栈数据27
  int32_t stack_data28;              // 栈数据28
  int32_t stack_data29;              // 栈数据29
  int32_t stack_data30;              // 栈数据30
  int32_t stack_data31;              // 栈数据31
  int32_t stack_data32;              // 栈数据32
  int32_t stack_data33;              // 栈数据33
  uint64_t stack_data34;              // 栈数据34
  uint64_t stack_data35;              // 栈数据35
  int32_t stack_data36;              // 栈数据36
  int32_t stack_data37;              // 栈数据37
  int32_t stack_data38;              // 栈数据38
  int32_t stack_data39;              // 栈数据39
  int32_t stack_data40;              // 栈数据40
  int32_t stack_data41;              // 栈数据41
  int32_t stack_data42;              // 栈数据42
  int32_t stack_data43;              // 栈数据43
  int32_t stack_data44;              // 栈数据44
  int32_t stack_data45;              // 栈数据45
  int32_t stack_data46;              // 栈数据46
  int32_t stack_data47;              // 栈数据47
  int32_t stack_data48;              // 栈数据48
  int32_t stack_data49;              // 栈数据49
  int32_t stack_data50;              // 栈数据50
  int32_t stack_data51;              // 栈数据51
  int32_t stack_data52;              // 栈数据52
  int32_t stack_data53;              // 栈数据53
  int32_t stack_data54;              // 栈数据54
  int32_t stack_data55;              // 栈数据55
  int32_t stack_data56;              // 栈数据56
  int32_t stack_data57;              // 栈数据57
  int32_t stack_data58;              // 栈数据58
  int32_t stack_data59;              // 栈数据59
  int32_t stack_data60;              // 栈数据60
  int32_t stack_data61;              // 栈数据61
  int32_t stack_data62;              // 栈数据62
  int32_t stack_data63;              // 栈数据63
  int32_t stack_data64;              // 栈数据64
  int32_t stack_data65;              // 栈数据65
  int32_t stack_data66;              // 栈数据66
  int32_t stack_data67;              // 栈数据67
  int32_t stack_data68;              // 栈数据68
  int32_t stack_data69;              // 栈数据69
  int32_t stack_data70;              // 栈数据70
  int32_t stack_data71;              // 栈数据71
  uint64_t stack_data72;              // 栈数据72
  uint64_t stack_data73;              // 栈数据73
  uint64_t stack_canary_value;         // 栈保护值
  
  // 初始化栈保护
  stack_canary_value = GET_SECURITY_COOKIE() ^ (uint64_t)stack_canary;
  processed_count = 0;
  
  // 初始化渲染参数
  stack_data18 = 0x3f800000;
  stack_data19 = 0;
  stack_data20 = 0;
  stack_data21 = 0;
  stack_data22 = 0;
  stack_data23 = 0x3f800000;
  stack_data24 = 0;
  stack_data25 = 0;
  stack_data26 = 0;
  stack_data27 = 0;
  stack_data28 = 0x3f800000;
  stack_data29 = 0;
  stack_data30 = 0;
  stack_data31 = 0;
  stack_data32 = 0;
  stack_data33 = 0x3f800000;
  stack_data34 = 0;
  stack_data35 = 0;
  stack_data36 = 0;
  stack_data37 = 0x3f80000000000000;
  stack_data17 = 0;
  stack_guard = 0;
  stack_data16 = batch_config;
  stack_data15 = render_target;
  
  // 处理批处理项
  if (*(int64_t *)(batch_context_ptr + 0x1b0) - *(int64_t *)(batch_context_ptr + 0x1a8) >> 3 != 0) {
    item_offset = 0;
    do {
      batch_item_ptr = *(int64_t **)(item_offset + *(int64_t *)(batch_context_ptr + 0x1a8));
      (**(code **)(*batch_item_ptr + 0x168))(batch_item_ptr, process_data, render_target, &stack_data18);
      item_offset = item_offset + 8;
      processed_count = processed_count + 1;
    } while ((uint64_t)(int64_t)processed_count <
             (uint64_t)(*(int64_t *)(batch_context_ptr + 0x1b0) - *(int64_t *)(batch_context_ptr + 0x1a8) >> 3));
  }
  
  // 初始化第二组渲染参数
  stack_data2 = 0x3f800000;
  stack_data3 = 0;
  stack_data4 = 0;
  stack_data5 = 0;
  stack_data6 = 0;
  stack_data7 = 0x3f800000;
  stack_data8 = 0;
  stack_data9 = 0;
  stack_data10 = 0;
  stack_data11 = 0;
  stack_data12 = 0x3f800000;
  stack_data13 = 0;
  stack_data14 = 0;
  stack_data73 = 0x3f80000000000000;
  stack_data17 = 0;
  stack_guard = 0;
  stack_data36 = batch_config;
  
  // 处理内存块
  if ('\0' < *(char *)(batch_context_ptr + 0x20)) {
    item_offset = 0;
    do {
      data_value3 = stack_data15;
      base_address = *(int64_t *)(batch_context_ptr + 0x18);
      processed_count = 0;
      
      if (*(int64_t *)(item_offset + 0xb8 + base_address) - *(int64_t *)(item_offset + 0xb0 + base_address) >> 3 != 0) {
        list_start_ptr = (int64_t)stack_guard * 0x100;
        list_end_ptr = 0;
        
        do {
          // 线程安全的数据处理
          do {
            LOCK();
            thread_lock_ptr = (uint *)(list_start_ptr + base_address);
            lock_status = *thread_lock_ptr;
            *thread_lock_ptr = *thread_lock_ptr | 1;
            UNLOCK();
          } while ((lock_status & 1) != 0);
          
          // 读取数据
          data_source_ptr = (int32_t *)(list_start_ptr + 4 + base_address);
          stack_data38 = *data_source_ptr;
          stack_data39 = data_source_ptr[1];
          stack_data40 = data_source_ptr[2];
          stack_data41 = data_source_ptr[3];
          extended_data_ptr = (uint64_t *)(list_start_ptr + 0x14 + base_address);
          data_value1 = *extended_data_ptr;
          data_value2 = extended_data_ptr[1];
          
          // 清除锁标志
          *(int32_t *)(list_start_ptr + base_address) = 0;
          stack_data72 = data_value1;
          stack_data73 = data_value2;
          
          // 复制数据到栈
          stack_data44 = stack_data38;
          stack_data45 = stack_data39;
          stack_data46 = stack_data40;
          stack_data47 = stack_data41;
          stack_data48 = data_value1;
          stack_data49 = data_value2;
          
          // 处理数据
          FUN_18063b5f0(&stack_data50, &stack_data38);
          stack_data2 = stack_data50;
          stack_data3 = stack_data51;
          stack_data4 = stack_data52;
          stack_data5 = stack_data53;
          stack_data6 = stack_data54;
          stack_data7 = stack_data55;
          stack_data8 = stack_data56;
          stack_data9 = stack_data57;
          stack_data10 = stack_data58;
          stack_data11 = stack_data59;
          stack_data12 = stack_data60;
          stack_data13 = stack_data61;
          stack_data14 = stack_data62;
          
          // 获取批处理项并处理
          batch_item_ptr = *(int64_t **)
                    (list_end_ptr + *(int64_t *)(item_offset + 0xb0 + *(int64_t *)(batch_context_ptr + 0x18)));
          stack_data14 = data_value1;
          stack_data73 = data_value2;
          
          (**(code **)(*batch_item_ptr + 0x168))(batch_item_ptr, process_data, data_value3, &stack_data2);
          base_address = *(int64_t *)(batch_context_ptr + 0x18);
          processed_count = processed_count + 1;
          list_end_ptr = list_end_ptr + 8;
        } while ((uint64_t)(int64_t)processed_count <
                 (uint64_t)
                 (*(int64_t *)(item_offset + 0xb8 + base_address) - *(int64_t *)(item_offset + 0xb0 + base_address) >> 3));
      }
      
      stack_guard = stack_guard + 1;
      item_offset = item_offset + 0x100;
    } while (stack_guard < *(char *)(batch_context_ptr + 0x20));
  }
  
  // 清理栈并返回
  FUN_1808fc050(stack_canary_value ^ (uint64_t)stack_canary);
}

// 函数: void rendering_system_thread_synchronizer(void)
// 渲染系统线程同步器 - 同步多线程渲染操作
void rendering_system_thread_synchronizer(void)

{
  uint *thread_lock_ptr;                // 线程锁指针
  int32_t *data_source_ptr;          // 数据源指针
  uint64_t *extended_data_ptr;        // 扩展数据指针
  uint lock_status;                     // 锁状态
  int64_t *batch_item_ptr;             // 批处理项指针
  int32_t data_value1;               // 数据值1
  int32_t data_value2;               // 数据值2
  int32_t data_value3;               // 数据值3
  int32_t data_value4;               // 数据值4
  uint64_t data_value5;               // 数据值5
  uint64_t data_value6;               // 数据值6
  int64_t item_offset;                  // 项偏移量
  int64_t base_address;                 // 基地址
  int64_t list_start_ptr;               // 列表起始指针
  int64_t list_end_ptr;                 // 列表结束指针
  int processed_count;                  // 已处理计数
  int32_t *stack_buffer_ptr;         // 栈缓冲区指针
  int64_t memory_offset;               // 内存偏移量
  int item_index;                       // 项索引
  int32_t stack_param1;              // 栈参数1
  int32_t stack_param2;              // 栈参数2
  int32_t stack_param3;              // 栈参数3
  int32_t stack_param4;              // 栈参数4
  int32_t stack_param5;              // 栈参数5
  int32_t stack_param6;              // 栈参数6
  int32_t stack_param7;              // 栈参数7
  int32_t stack_param8;              // 栈参数8
  int32_t stack_param9;              // 栈参数9
  int32_t stack_param10;             // 栈参数10
  int32_t stack_param11;             // 栈参数11
  int32_t stack_param12;             // 栈参数12
  uint64_t stack_param13;             // 栈参数13
  uint64_t stack_param14;             // 栈参数14
  
  list_end_ptr = 0;
  
  // 遍历并同步线程
  do {
    base_address = *(int64_t *)(memory_offset + 0x18);
    processed_count = 0;
    
    if (*(int64_t *)(list_end_ptr + 0xb8 + base_address) - *(int64_t *)(list_end_ptr + 0xb0 + base_address) >> 3 != 0) {
      list_start_ptr = (int64_t)item_index * 0x100;
      memory_offset = 0;
      
      do {
        // 线程安全的数据处理
        do {
          LOCK();
          thread_lock_ptr = (uint *)(list_start_ptr + base_address);
          lock_status = *thread_lock_ptr;
          *thread_lock_ptr = *thread_lock_ptr | 1;
          UNLOCK();
        } while ((lock_status & 1) != 0);
        
        // 读取数据
        data_source_ptr = (int32_t *)(list_start_ptr + 4 + base_address);
        data_value1 = *data_source_ptr;
        data_value2 = data_source_ptr[1];
        data_value3 = data_source_ptr[2];
        data_value4 = data_source_ptr[3];
        extended_data_ptr = (uint64_t *)(list_start_ptr + 0x14 + base_address);
        data_value5 = *extended_data_ptr;
        data_value6 = extended_data_ptr[1];
        
        // 存储数据到栈缓冲区
        stack_buffer_ptr[8] = data_value1;
        stack_buffer_ptr[9] = data_value2;
        stack_buffer_ptr[10] = data_value3;
        stack_buffer_ptr[11] = data_value4;
        *(uint64_t *)(stack_buffer_ptr + 0xc) = data_value5;
        *(uint64_t *)(stack_buffer_ptr + 0xe) = data_value6;
        
        // 清除锁标志
        *(int32_t *)(list_start_ptr + base_address) = 0;
        stack_buffer_ptr[-0xc] = data_value1;
        stack_buffer_ptr[-0xb] = data_value2;
        stack_buffer_ptr[-10] = data_value3;
        stack_buffer_ptr[-9] = data_value4;
        *(uint64_t *)(stack_buffer_ptr + -8) = data_value5;
        *(uint64_t *)(stack_buffer_ptr + -6) = data_value6;
        
        // 处理数据
        FUN_18063b5f0(stack_buffer_ptr + -4, stack_buffer_ptr + -0xc);
        stack_param1 = stack_buffer_ptr[-4];
        stack_param2 = stack_buffer_ptr[-3];
        stack_param3 = stack_buffer_ptr[-2];
        stack_param4 = stack_buffer_ptr[-1];
        stack_param5 = *stack_buffer_ptr;
        stack_param6 = stack_buffer_ptr[1];
        stack_param7 = stack_buffer_ptr[2];
        stack_param8 = stack_buffer_ptr[3];
        stack_param9 = stack_buffer_ptr[4];
        stack_param10 = stack_buffer_ptr[5];
        stack_param11 = stack_buffer_ptr[6];
        stack_param12 = stack_buffer_ptr[7];
        
        // 获取批处理项并处理
        batch_item_ptr = *(int64_t **)
                  (memory_offset + *(int64_t *)(list_end_ptr + 0xb0 + *(int64_t *)(memory_offset + 0x18)));
        stack_param13 = data_value5;
        stack_param14 = data_value6;
        
        (**(code **)(*batch_item_ptr + 0x168))
                  (batch_item_ptr, stack_param5, stack_param1, &stack_param1);
        base_address = *(int64_t *)(memory_offset + 0x18);
        processed_count = processed_count + 1;
        memory_offset = memory_offset + 8;
        item_index = item_index;
      } while ((uint64_t)(int64_t)processed_count <
               (uint64_t)
               (*(int64_t *)(list_end_ptr + 0xb8 + base_address) - *(int64_t *)(list_end_ptr + 0xb0 + base_address) >> 3));
    }
    
    item_index = item_index + 1;
    list_end_ptr = list_end_ptr + 0x100;
  } while (item_index < *(char *)(memory_offset + 0x20));
  
  // 清理栈并返回
  FUN_1808fc050(*(uint64_t *)(stack_buffer_ptr + 0x10) ^ (uint64_t)&stack_param1);
}

// 函数: void rendering_system_stack_cleaner(void)
// 渲染系统栈清理器 - 清理渲染栈数据
void rendering_system_stack_cleaner(void)

{
  int64_t stack_context_ptr;           // 栈上下文指针
  
  // 清理栈数据
  FUN_1808fc050(*(uint64_t *)(stack_context_ptr + 0x40) ^ (uint64_t)&stack_param1);
}

// 函数: void rendering_system_resource_remover(int64_t param_1, char param_2, int64_t *param_3)
// 渲染系统资源移除器 - 从渲染系统中移除指定资源
void rendering_system_resource_remover(int64_t resource_manager_ptr, char resource_index, int64_t *target_resource_ptr)

{
  int64_t *resource_list_ptr;          // 资源列表指针
  char removal_status;                  // 移除状态
  uint64_t *resource_array_ptr;       // 资源数组指针
  int64_t *current_resource_ptr;      // 当前资源指针
  int64_t resource_offset;             // 资源偏移量
  
  // 计算资源偏移量
  resource_offset = (int64_t)resource_index * 0x100 + *(int64_t *)(resource_manager_ptr + 0x18);
  resource_list_ptr = *(int64_t **)(resource_offset + 0xb8);
  current_resource_ptr = *(int64_t **)(resource_offset + 0xb0);
  
  // 查找目标资源
  if (current_resource_ptr != resource_list_ptr) {
    do {
      if ((int64_t *)*current_resource_ptr == target_resource_ptr) break;
      current_resource_ptr = current_resource_ptr + 1;
    } while (current_resource_ptr != resource_list_ptr);
    
    // 找到后移除资源
    if (current_resource_ptr != resource_list_ptr) {
      (**(code **)(*target_resource_ptr + 0x1e0))(target_resource_ptr, 0);
      removal_status = (**(code **)(*target_resource_ptr + 0xa0))(target_resource_ptr);
      
      if (removal_status != '\0') {
        // 从资源数组中移除
        for (resource_array_ptr = *(uint64_t **)(resource_offset + 0xd0);
            (resource_array_ptr != *(uint64_t **)(resource_offset + 0xd8) && 
             ((int64_t *)*resource_array_ptr != target_resource_ptr));
            resource_array_ptr = resource_array_ptr + 1) {
        }
        FUN_1800ba050();
      }
      
      // 清理资源列表
      FUN_1800ba050(resource_offset + 0xb0, current_resource_ptr);
    }
  }
  return;
}

// 函数: void rendering_system_priority_handler(int64_t param_1)
// 渲染系统优先级处理器 - 处理渲染资源的优先级
void rendering_system_priority_handler(int64_t priority_context_ptr)

{
  int64_t next_resource_ptr;           // 下一个资源指针
  
  // 检查优先级条件
  if ((*(float *)(priority_context_ptr + 0x3c) < 0.0) ||
     (*(float *)(priority_context_ptr + 0x34) <= *(float *)(priority_context_ptr + 0x3c))) {
    priority_context_ptr = *(int64_t *)(priority_context_ptr + 0x28);
    if (priority_context_ptr == 0) {
      return;
    }
    if (*(float *)(priority_context_ptr + 0x3c) < 0.0) {
      return;
    }
    if (*(float *)(priority_context_ptr + 0x34) <= *(float *)(priority_context_ptr + 0x3c)) {
      return;
    }
    if ((*(byte *)(priority_context_ptr + 0xa8) & 1) != 0) {
      return;
    }
    next_resource_ptr = *(int64_t *)(priority_context_ptr + 0x10);
  }
  else {
    next_resource_ptr = *(int64_t *)(priority_context_ptr + 0x28);
    if ((next_resource_ptr != 0) && ((*(byte *)(next_resource_ptr + 0xa8) & 1) == 0)) {
      FUN_1802fac00(next_resource_ptr, *(int64_t *)(next_resource_ptr + 0x10) + 0x70, 0xbf800000);
    }
    if ((*(byte *)(priority_context_ptr + 0xa8) & 1) != 0) {
      return;
    }
    next_resource_ptr = *(int64_t *)(priority_context_ptr + 0x10);
  }
  
  // 处理优先级更新
  FUN_1808fd200(priority_context_ptr, next_resource_ptr + 0x70, 0xbf800000);
}

// 函数: void rendering_system_mutex_manager(int64_t param_1, int64_t param_2)
// 渲染系统互斥量管理器 - 管理渲染系统的互斥量
void rendering_system_mutex_manager(int64_t mutex_context_ptr, int64_t target_mutex_ptr)

{
  int64_t tls_data_ptr;                 // 线程本地存储数据指针
  int mutex_status;                     // 互斥量状态
  uint64_t tls_index;                   // 线程本地存储索引
  int64_t mutex_list_ptr;               // 互斥量列表指针
  int64_t *mutex_array_ptr;             // 互斥量数组指针
  uint64_t array_size;                  // 数组大小
  int64_t *new_array_ptr;               // 新数组指针
  int64_t *old_array_ptr;               // 旧数组指针
  uint64_t current_index;               // 当前索引
  
  // 检查目标互斥量
  if (*(int64_t *)(mutex_context_ptr + 0x28) == target_mutex_ptr) {
    return;
  }
  
  // 获取线程本地存储数据
  tls_data_ptr = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  
  // 初始化互斥量
  if ((*(int *)(tls_data_ptr + 0x48) < render_system_config_pointer) &&
     (SystemInitializer(&system_memory_9678, target_mutex_ptr, (uint64_t)__tls_index, tls_data_ptr, 0xfffffffffffffffe),
     render_system_config_pointer == -1)) {
    _Mtx_init_in_situ(0x180d49680, 2);
    FUN_1808fc820(FUN_180941da0);
    FUN_1808fcb30(&system_memory_9678);
  }
  
  // 处理互斥量添加
  if (*(int64_t *)(mutex_context_ptr + 0x28) == 0) {
    if (target_mutex_ptr == 0) goto LAB_18030083c;
    
    tls_data_ptr = *(int64_t *)(*(int64_t *)(target_mutex_ptr + 0x10) + 0x20);
    mutex_status = _Mtx_lock(0x180d49680);
    
    if (mutex_status != 0) {
      __Throw_C_error_std__YAXH_Z(mutex_status);
    }
    
    mutex_array_ptr = *(int64_t **)(tls_data_ptr + 0x29f8);
    if (mutex_array_ptr < *(int64_t **)(tls_data_ptr + 0x2a00)) {
      *(int64_t **)(tls_data_ptr + 0x29f8) = mutex_array_ptr + 1;
      *mutex_array_ptr = mutex_context_ptr;
      goto LAB_180300827;
    }
    
    // 扩展数组
    old_array_ptr = *(int64_t **)(tls_data_ptr + 0x29f0);
    array_size = (int64_t)mutex_array_ptr - (int64_t)old_array_ptr >> 3;
    
    if (array_size == 0) {
      array_size = 1;
LAB_1803007a9:
      new_array_ptr = (int64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr, array_size * 8, *(int8_t *)(tls_data_ptr + 0x2a08));
      mutex_array_ptr = *(int64_t **)(tls_data_ptr + 0x29f8);
      old_array_ptr = *(int64_t **)(tls_data_ptr + 0x29f0);
    }
    else {
      array_size = array_size * 2;
      if (array_size != 0) goto LAB_1803007a9;
      new_array_ptr = (int64_t *)0x0;
    }
    
    // 移动数据到新数组
    if (old_array_ptr != mutex_array_ptr) {
      memmove(new_array_ptr, old_array_ptr, (int64_t)mutex_array_ptr - (int64_t)old_array_ptr);
    }
    
    *new_array_ptr = mutex_context_ptr;
    if (*(int64_t *)(tls_data_ptr + 0x29f0) != 0) {
      CoreEngine_MemoryPoolManager();
    }
    
    *(int64_t **)(tls_data_ptr + 0x29f0) = new_array_ptr;
    *(int64_t **)(tls_data_ptr + 0x29f8) = new_array_ptr + 1;
    *(int64_t **)(tls_data_ptr + 0x2a00) = new_array_ptr + array_size;
  }
  else {
    // 处理互斥量移除
    if (target_mutex_ptr != 0) goto LAB_18030083c;
    
    tls_data_ptr = *(int64_t *)(*(int64_t *)(mutex_context_ptr + 0x10) + 0x20);
    mutex_status = _Mtx_lock(0x180d49680);
    
    if (mutex_status != 0) {
      __Throw_C_error_std__YAXH_Z(mutex_status);
    }
    
    array_size = *(int64_t *)(tls_data_ptr + 0x29f0);
    current_index = 0;
    mutex_status = (int)(*(int64_t *)(tls_data_ptr + 0x29f8) - array_size >> 3);
    
    if (0 < mutex_status) {
      tls_index = current_index;
      do {
        if (*(int64_t *)(array_size + current_index * 8) == mutex_context_ptr) {
          *(uint64_t *)(array_size + (int64_t)(int)tls_index * 8) =
               *(uint64_t *)(array_size + -8 + (int64_t)mutex_status * 8);
          *(int64_t *)(tls_data_ptr + 0x29f8) = *(int64_t *)(tls_data_ptr + 0x29f8) + -8;
          break;
        }
        tls_index = (uint64_t)((int)tls_index + 1);
        current_index = current_index + 1;
      } while ((int64_t)current_index < (int64_t)mutex_status);
    }
  }
  
LAB_180300827:
  mutex_status = _Mtx_unlock(0x180d49680);
  if (mutex_status != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_status);
  }
  
LAB_18030083c:
  // 更新互斥量上下文
  *(int64_t *)(mutex_context_ptr + 0x28) = target_mutex_ptr;
  
  if (target_mutex_ptr != 0) {
    if (*(float *)(target_mutex_ptr + 0x3c) < 0.0) {
      *(int32_t *)(target_mutex_ptr + 0x34) = 0x3dcccccd;
    }
    else {
      *(float *)(target_mutex_ptr + 0x34) = *(float *)(target_mutex_ptr + 0x3c) + 1.1920929e-07;
    }
    *(int8_t *)(*(int64_t *)(mutex_context_ptr + 0x28) + 0xaa) = 1;
  }
  
  // 更新上下文浮点参数
  if (*(float *)(mutex_context_ptr + 0x3c) < 0.0) {
    *(int32_t *)(mutex_context_ptr + 0x34) = 0x3dcccccd;
  }
  else {
    *(float *)(mutex_context_ptr + 0x34) = *(float *)(mutex_context_ptr + 0x3c) + 1.1920929e-07;
  }
  return;
}

// 函数: uint64_t rendering_system_counter(int64_t param_1, int param_2)
// 渲染系统计数器 - 统计符合条件的渲染项数量
uint64_t rendering_system_counter(int64_t counter_context_ptr, int target_value)

{
  int current_value;                    // 当前值
  int item_count;                       // 项计数
  uint64_t match_count;                // 匹配计数
  uint64_t current_index;              // 当前索引
  
  match_count = 0;
  item_count = (int)(*(int64_t *)(counter_context_ptr + 0x1b0) - *(int64_t *)(counter_context_ptr + 0x1a8) >> 3);
  current_index = match_count;
  
  if (0 < item_count) {
    do {
      current_value = (**(code **)(**(int64_t **)(*(int64_t *)(counter_context_ptr + 0x1a8) + current_index * 8) + 0x98))();
      if (current_value == target_value) {
        match_count = (uint64_t)((int)match_count + 1);
      }
      current_index = current_index + 1;
    } while ((int64_t)current_index < (int64_t)item_count);
  }
  
  return match_count;
}

// 函数: uint rendering_system_matcher(void)
// 渲染系统匹配器 - 匹配符合条件的渲染项
uint rendering_system_matcher(void)

{
  int current_value;                    // 当前值
  uint64_t current_index;              // 当前索引
  int64_t context_ptr;                 // 上下文指针
  int64_t total_items;                 // 总项数
  uint match_count;                     // 匹配计数
  int target_value;                     // 目标值
  
  current_index = (uint64_t)match_count;
  
  // 遍历并匹配项
  do {
    current_value = (**(code **)(**(int64_t **)(*(int64_t *)(context_ptr + 0x1a8) + current_index * 8) + 0x98))();
    if (current_value == target_value) {
      match_count = match_count + 1;
    }
    current_index = current_index + 1;
  } while ((int64_t)current_index < total_items);
  
  return match_count;
}

// 函数: int32_t rendering_system_value_returner(void)
// 渲染系统值返回器 - 返回渲染系统值
int32_t rendering_system_value_returner(void)

{
  int32_t return_value;               // 返回值
  
  return return_value;
}

// 渲染系统常量定义
#define RENDER_FLAG_PRIMARY      0x01    // 主要渲染标志
#define RENDER_FLAG_SECONDARY    0x02    // 次要渲染标志
#define RENDER_FLAG_TERTIARY     0x04    // 第三渲染标志
#define RENDER_FLAG_QUATERNARY   0x08    // 第四渲染标志
#define RENDER_FLAG_QUINARY      0x10    // 第五渲染标志
#define RENDER_FLAG_SENARY       0x20    // 第六渲染标志

#define THREAD_LOCK_MASK         0x01    // 线程锁掩码
#define MUTEX_TIMEOUT           0xFFFFFFFE // 互斥量超时值

#define FLOAT_EPSILON            1.1920929e-07 // 浮点数精度
#define DEFAULT_FLOAT_VALUE      0x3dcccccd    // 默认浮点值

// 渲染系统状态枚举
typedef enum {
  RENDER_STATUS_IDLE = 0,           // 空闲状态
  RENDER_STATUS_PROCESSING,        // 处理中状态
  RENDER_STATUS_COMPLETED,         // 完成状态
  RENDER_STATUS_ERROR             // 错误状态
} RenderStatus;

// 渲染系统错误代码
typedef enum {
  RENDER_SUCCESS = 0,               // 成功
  RENDER_ERROR_INVALID_PARAM,      // 无效参数
  RENDER_ERROR_OUT_OF_MEMORY,      // 内存不足
  RENDER_ERROR_TIMEOUT,            // 超时
  RENDER_ERROR_LOCK_FAILED         // 锁定失败
} RenderError;