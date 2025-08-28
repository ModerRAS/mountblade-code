#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part151.c - 8 个函数

// 函数: void FUN_18013a860(int64_t param_1,int param_2,int param_3,uint64_t param_4)
// 功能: 递归遍历节点树，根据条件处理节点
// 参数: 
//   param_1 - 当前节点指针
//   param_2 - 比较参数1
//   param_3 - 比较参数2 (0或1)
//   param_4 - 回调函数参数
void traverse_node_tree_recursive(int64_t current_node, int compare_param1, int compare_param2, uint64_t callback_param)

{
  int64_t next_node;
  int64_t sibling_node;
  int64_t local_stack_var;
  
  next_node = *(int64_t *)(current_node + 0x10);
  while( true ) {
    local_stack_var = current_node;
    if (next_node == 0) {
      execute_callback_function(callback_param, &local_stack_var);
      return;
    }
    
    // 检查节点是否满足处理条件
    if (((*(byte *)(next_node + 0xa0) & 4) != 0) &&
       (((*(int *)(current_node + 0x50) != compare_param1 || (compare_param2 == 0)) ||
        ((*(byte *)(*(int64_t *)(current_node + 0x18) + 0xa0) & 4) == 0)))) {
      traverse_node_tree_recursive(next_node, compare_param1, compare_param2, callback_param);
    }
    
    sibling_node = *(int64_t *)(current_node + 0x18);
    if ((*(byte *)(sibling_node + 0xa0) & 4) == 0) break;
    
    // 检查是否应该停止递归
    if (((*(int *)(current_node + 0x50) == compare_param1) && (compare_param2 != 1)) &&
       ((*(byte *)(*(int64_t *)(current_node + 0x10) + 0xa0) & 4) != 0)) {
      return;
    }
    
    next_node = *(int64_t *)(sibling_node + 0x10);
    current_node = sibling_node;
  }
  return;
}



// 全局变量警告: 以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void FUN_18013a920(int32_t *param_1)
// 功能: 处理节点对，执行碰撞检测和响应处理
// 参数: 
//   param_1 - 节点对结构体指针
void process_node_pair_collision(int32_t *node_pair)

{
  byte *node_flags;
  int *comparison_result;
  float distance_threshold;
  int iteration_count;
  int64_t global_context;
  int32_t *first_node;
  int32_t *second_node;
  int32_t *temp_node;
  char collision_detected;
  int32_t temp_value;
  int callback_id;
  uint64_t iteration_index;
  int64_t *node_pointer;
  int64_t node_data;
  uint64_t coordinate_index;
  int64_t list_node;
  uint64_t temp_ulong;
  int64_t array_element;
  int32_t out_xmm0;
  float calculated_value;
  float adjustment_factor;
  int32_t *stack_pointer;
  float coordinate_pair[2];
  float *float_array_ptr;
  int32_t packed_float;
  float extended_coords[2];
  uint64_t packed_coords;
  float bounding_coords[4];
  float coord1;
  float coord2;
  float extended_bounds[4];
  int32_t stack_value;
  float scale_factor;
  uint counters[2];
  int64_t *pointer_array;
  uint temp_counters[2];
  int64_t *node_pointer_array[10];
  
  global_context = *(int64_t *)(node_pair + 4);
  node_data = GLOBAL_ENGINE_CONTEXT;
  while( true ) {
    if (global_context == 0) {
      GLOBAL_ENGINE_CONTEXT = node_data;
      return;
    }
    
    packed_float = (int32_t)((uint64_t)float_array_ptr >> 0x20);
    first_node = *(int32_t **)(node_pair + 4);
    second_node = *(int32_t **)(node_pair + 6);
    GLOBAL_ENGINE_CONTEXT = node_data;
    
    // 检查两个节点是否都激活了碰撞处理
    if ((*(byte *)(first_node + 0x28) & 4) != 0) {
      if ((*(byte *)(second_node + 0x28) & 4) != 0) {
        iteration_count = node_pair[0x14];
        coordinate_index = (uint64_t)iteration_count;
        
        // 提取节点坐标
        extended_coords[0] = (float)first_node[0xe];
        extended_coords[1] = (float)first_node[0xf];
        packed_coords = *(uint64_t *)(second_node + 0xe);
        
        // 扩展坐标计算
        global_context = coordinate_index * 4;
        extended_coords[coordinate_index] = (float)first_node[coordinate_index + 0x10] + extended_coords[coordinate_index];
        temp_ulong = coordinate_index ^ 1;
        *(float *)((int64_t)&packed_coords + temp_ulong * 4) =
             (float)second_node[temp_ulong + 0x10] + *(float *)((int64_t)&packed_coords + temp_ulong * 4);
        
        // 检查是否需要详细碰撞检测
        if ((*(byte *)(node_pair + 1) & 0x20) == 0) {
          initialize_collision_system(*node_pair);
          setup_collision_detection(counters, 0x10, 2, &COLLISION_CALLBACK_FUNCTION, COLLISION_CLEANUP_FUNCTION);
          
          // 计算碰撞阈值
          distance_threshold = *(float *)(global_context + 0x163c + node_data);
          adjustment_factor = distance_threshold + *(float *)(global_context + 0x38 + *(int64_t *)(node_pair + 4));
          calculated_value = (*(float *)(global_context + 0x40 + *(int64_t *)(node_pair + 6)) +
                   *(float *)(global_context + 0x38 + *(int64_t *)(node_pair + 6))) - distance_threshold;
          
          callback_id = get_collision_detection_id(&COLLISION_ID_BASE);
          if (*(int *)(node_data + 0x1b2c) == callback_id) {
            global_context = *(int64_t *)(first_node + 4);
            stack_pointer = first_node;
            if (global_context == 0) {
              execute_callback_function(counters, &stack_pointer);
            }
            else {
              // 递归处理第一个节点的子节点
              if (((*(byte *)(global_context + 0xa0) & 4) != 0) &&
                 ((first_node[0x14] != iteration_count || ((*(byte *)(*(int64_t *)(first_node + 6) + 0xa0) & 4) == 0)
                  ))) {
                traverse_node_tree_recursive(global_context, iteration_count, 1, counters);
              }
              if ((*(byte *)(*(int64_t *)(first_node + 6) + 0xa0) & 4) != 0) {
                traverse_node_tree_recursive(*(int64_t *)(first_node + 6), iteration_count, 1, counters);
              }
            }
            
            // 处理第二个节点
            global_context = *(int64_t *)(second_node + 4);
            stack_pointer = second_node;
            if (global_context == 0) {
              execute_callback_function(temp_counters, &stack_pointer);
            }
            else {
              if ((*(byte *)(global_context + 0xa0) & 4) != 0) {
                traverse_node_tree_recursive(global_context, iteration_count, 0, temp_counters);
              }
              if (((*(byte *)(*(int64_t *)(second_node + 6) + 0xa0) & 4) != 0) &&
                 ((second_node[0x14] != iteration_count || ((*(byte *)(*(int64_t *)(second_node + 4) + 0xa0) & 4) == 0)
                  ))) {
                traverse_node_tree_recursive(*(int64_t *)(second_node + 6), iteration_count, 0, temp_counters);
              }
            }
            
            // 处理碰撞边界
            if (0 < (int)counters[0]) {
              temp_ulong = (uint64_t)counters[0];
              node_pointer = pointer_array;
              do {
                global_context = *node_pointer;
                bounding_coords[0] = *(float *)(global_context + 0x38);
                bounding_coords[1] = *(float *)(global_context + 0x3c);
                bounding_coords[2] = *(float *)(global_context + 0x38) + *(float *)(global_context + 0x40);
                bounding_coords[3] = *(float *)(global_context + 0x3c) + *(float *)(global_context + 0x44);
                if (adjustment_factor <= distance_threshold + bounding_coords[coordinate_index]) {
                  adjustment_factor = distance_threshold + bounding_coords[coordinate_index];
                }
                node_pointer = node_pointer + 1;
                temp_ulong = temp_ulong - 1;
              } while (temp_ulong != 0);
            }
            
            if (0 < (int)temp_counters[0]) {
              temp_ulong = (uint64_t)temp_counters[0];
              node_pointer = node_pointer_array[0];
              do {
                global_context = *node_pointer;
                coord1 = *(float *)(global_context + 0x38);
                coord2 = *(float *)(global_context + 0x3c);
                extended_bounds[0] = *(float *)(global_context + 0x38) + *(float *)(global_context + 0x40);
                extended_bounds[1] = *(float *)(global_context + 0x3c) + *(float *)(global_context + 0x44);
                if (extended_bounds[coordinate_index] - distance_threshold <= calculated_value) {
                  calculated_value = extended_bounds[coordinate_index] - distance_threshold;
                }
                node_pointer = node_pointer + 1;
                temp_ulong = temp_ulong - 1;
              } while (temp_ulong != 0);
            }
          }
          
          // 执行碰撞响应计算
          global_context = GLOBAL_ENGINE_CONTEXT;
          stack_pointer = (int32_t *)CONCAT44(stack_pointer._4_4_, first_node[coordinate_index + 0x10]);
          coordinate_pair[0] = (float)second_node[coordinate_index + 0x10];
          distance_threshold = (float)first_node[coordinate_index + 0xe];
          callback_id = calculate_collision_response((coordinate_pair[0] + (float)second_node[coordinate_index + 0xe]) - calculated_value, 0,
                                 *(int32_t *)
                                  (*(int64_t *)(*(int64_t *)(GLOBAL_ENGINE_CONTEXT + 0x1af8) + 0x220) +
                                   -4 + (int64_t)
                                        *(int *)(*(int64_t *)(GLOBAL_ENGINE_CONTEXT + 0x1af8) + 0x218) * 4
                                  ));
          
          if (*(int *)(global_context + 0x1b2c) == callback_id) {
            *(int *)(global_context + 0x1b34) = callback_id;
          }
          if (*(int *)(global_context + 0x1b30) == callback_id) {
            *(int8_t *)(global_context + 0x1b3f) = 1;
          }
          
          float_array_ptr = coordinate_pair;
          collision_detected = execute_collision_detection(extended_coords, callback_id, iteration_count, &stack_pointer, float_array_ptr,
                                adjustment_factor - distance_threshold, out_xmm0);
          
          global_context = GLOBAL_ENGINE_CONTEXT;
          if (((collision_detected != '\0') && (0 < (int)counters[0])) && (0 < (int)temp_counters[0])) {
            // 更新节点坐标
            first_node[coordinate_index + 0x12] = stack_pointer._0_4_;
            first_node[coordinate_index + 0x10] = stack_pointer._0_4_;
            second_node[coordinate_index + 0xe] =
                 (float)second_node[coordinate_index + 0xe] - (coordinate_pair[0] - (float)second_node[coordinate_index + 0x10]);
            second_node[coordinate_index + 0x12] = coordinate_pair[0];
            second_node[coordinate_index + 0x10] = coordinate_pair[0];
            
            // 更新节点标志
            node_data = 0;
            do {
              callback_id = 0;
              if (0 < (int)counters[node_data * 4]) {
                array_element = 0;
                do {
                  list_node = *(int64_t *)(array_element + *(int64_t *)(temp_counters + node_data * 4 + -2));
                  temp_node = *(int32_t **)(list_node + 8);
                  while (temp_node != node_pair) {
                    node_pointer = (int64_t *)(list_node + 8);
                    list_node = *node_pointer;
                    if (*(int *)(list_node + 0x50) == iteration_count) {
                      node_flags = (byte *)(*(int64_t *)(list_node + 0x10 + node_data * 8) + 0xa1);
                      *node_flags = *node_flags | 4;
                      list_node = *node_pointer;
                    }
                    temp_node = *(int32_t **)(list_node + 8);
                  }
                  callback_id = callback_id + 1;
                  array_element = array_element + 8;
                } while (callback_id < (int)counters[node_data * 4]);
              }
              
              callback_id = 0;
              if (0 < (int)temp_counters[node_data * 4]) {
                array_element = 0;
                do {
                  list_node = *(int64_t *)(array_element + (int64_t)node_pointer_array[node_data * 2]);
                  temp_node = *(int32_t **)(list_node + 8);
                  while (temp_node != node_pair) {
                    node_pointer = (int64_t *)(list_node + 8);
                    list_node = *node_pointer;
                    if (*(int *)(list_node + 0x50) == iteration_count) {
                      node_flags = (byte *)(*(int64_t *)(list_node + 0x18 + node_data * 8) + 0xa1);
                      *node_flags = *node_flags | 4;
                      list_node = *node_pointer;
                    }
                    temp_node = *(int32_t **)(list_node + 8);
                  }
                  callback_id = callback_id + 1;
                  array_element = array_element + 8;
                } while (callback_id < (int)temp_counters[node_data * 4]);
              }
              node_data = node_data + 2;
            } while (node_data < 2);
            
            // 执行碰撞后处理
            update_node_after_collision(first_node, *(uint64_t *)(first_node + 0xe), *(uint64_t *)(first_node + 0x10));
            update_node_after_collision(second_node, *(uint64_t *)(second_node + 0xe), *(uint64_t *)(second_node + 0x10));
            
            if (*(float *)(global_context + 0x2e04) <= 0.0) {
              *(int32_t *)(global_context + 0x2e04) = *(int32_t *)(global_context + 0x1c);
            }
          }
          
          // 清理碰撞检测系统
          comparison_result = (int *)(*(int64_t *)(global_context + 0x1af8) + 0x218);
          *comparison_result = *comparison_result + -1;
          cleanup_collision_detection(counters, 0x10, 2, COLLISION_CLEANUP_FUNCTION);
        }
        else {
          // 简化的碰撞处理路径
          extended_bounds[2] = *(float *)(node_data + 0x1878);
          extended_bounds[3] = *(float *)(node_data + 0x187c);
          stack_value = *(int32_t *)(node_data + 0x1880);
          scale_factor = *(float *)(node_data + 0x1884) * *(float *)(node_data + 0x1628);
          temp_value = calculate_collision_parameters(extended_bounds + 2);
          float_array_ptr = (float *)CONCAT44(packed_float, *(int32_t *)(node_data + 0x1664));
          process_simple_collision(*(uint64_t *)(*(int64_t *)(node_data + 0x1af8) + 0x2e8), extended_coords,
                        &packed_coords, temp_value, float_array_ptr, 0xf);
        }
      }
      
      // 递归处理第一个节点
      if ((*(byte *)(first_node + 0x28) & 4) != 0) {
        process_node_pair_collision(first_node);
      }
    }
    
    // 检查是否需要处理第二个节点
    if ((*(byte *)(second_node + 0x28) & 4) == 0) break;
    
    global_context = *(int64_t *)(second_node + 4);
    node_pair = second_node;
    node_data = GLOBAL_ENGINE_CONTEXT;
  }
  return;
}



// 函数: int64_t FUN_18013aed0(int64_t param_1)
// 功能: 在节点树中查找符合条件的节点
// 参数: 
//   param_1 - 起始节点指针
// 返回: 找到的节点指针，未找到返回0
int64_t find_matching_node_in_tree(int64_t start_node)

{
  int64_t next_node;
  
  while( true ) {
    if (*(int64_t *)(start_node + 0x10) == 0) {
      return start_node;
    }
    next_node = find_matching_node_in_tree();
    if (next_node != 0) break;
    start_node = *(int64_t *)(start_node + 0x18);
  }
  return next_node;
}



// 全局变量警告: 以'_'开头的全局变量与同一地址的较小符号重叠

// 函数: int64_t FUN_18013af10(int64_t param_1,uint64_t param_2)
// 功能: 在指定区域内查找包含给定坐标的节点
// 参数: 
//   param_1 - 当前节点指针
//   param_2 - 坐标参数 (包含x和y坐标)
// 返回: 找到的节点指针，未找到返回0
int64_t find_node_containing_coordinate(int64_t current_node, uint64_t coordinate_param)

{
  int64_t child_result;
  float search_x;
  float threshold_distance;
  float x_coord;
  float y_coord;
  
  if ((*(byte *)(current_node + 0xa0) & 4) != 0) {
    search_x = (float)coordinate_param;
    threshold_distance = *(float *)(GLOBAL_ENGINE_CONTEXT + 0x1674) * 0.5;
    
    // 检查坐标是否在当前节点的边界框内
    if ((((*(float *)(current_node + 0x38) - threshold_distance <= search_x) &&
         (y_coord = (float)((uint64_t)coordinate_param >> 0x20),
         *(float *)(current_node + 0x3c) - threshold_distance <= y_coord)) &&
        (search_x < *(float *)(current_node + 0x38) + *(float *)(current_node + 0x40) + threshold_distance)) &&
       (y_coord < *(float *)(current_node + 0x3c) + *(float *)(current_node + 0x44) + threshold_distance)) {
      
      // 如果没有子节点，返回当前节点
      if (*(int64_t *)(current_node + 0x10) == 0) {
        return current_node;
      }
      
      // 递归搜索子节点
      child_result = find_node_containing_coordinate(*(int64_t *)(current_node + 0x10), coordinate_param);
      if (child_result != 0) {
        return child_result;
      }
      
      // 搜索兄弟节点
      child_result = find_node_containing_coordinate(*(uint64_t *)(current_node + 0x18), coordinate_param);
      if (child_result != 0) {
        return child_result;
      }
      
      // 特殊情况处理：叶子节点且有备用节点
      if (((*(byte *)(current_node + 0xa0) & 0x10) != 0) && (*(int64_t *)(current_node + 8) == 0)) {
        if ((*(int64_t *)(current_node + 0x78) != 0) && (*(int64_t *)(current_node + 0x10) == 0)) {
          return *(int64_t *)(current_node + 0x78);
        }
        if (*(int64_t *)(current_node + 0x10) == 0) {
          return current_node;
        }
        child_result = find_matching_node_in_tree();
        if (child_result != 0) {
          return child_result;
        }
        child_result = find_matching_node_in_tree(*(uint64_t *)(current_node + 0x18));
        return child_result;
      }
    }
  }
  return 0;
}



// 全局变量警告: 以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void FUN_18013b040(int64_t param_1,int param_2,uint param_3)
// 功能: 更新节点的材质或属性ID
// 参数: 
//   param_1 - 节点指针
//   param_2 - 新的材质ID
//   param_3 - 属性掩码
void update_node_material_id(int64_t node_ptr, int new_material_id, uint property_mask)

{
  int64_t material_manager;
  int64_t material_instance;
  int64_t material_chain;
  
  // 检查是否需要更新材质
  if (((property_mask == 0) || ((*(uint *)(node_ptr + 0xec) & property_mask) != 0)) &&
     (*(uint *)(node_ptr + 0xec) = *(uint *)(node_ptr + 0xec) & 0xfffffff1,
     *(int *)(node_ptr + 0x418) != new_material_id)) {
    
    // 获取材质管理器
    material_chain = get_material_manager_instance(*(uint64_t *)(GLOBAL_ENGINE_CONTEXT + 0x2df8));
    if ((material_chain != 0) && (*(int64_t *)(material_chain + 0x10) != 0)) {
      material_instance = *(int64_t *)(material_chain + 8);
      
      // 遍历材质链找到合适的材质
      while (material_manager = material_instance, material_manager != 0) {
        material_chain = material_manager;
        material_instance = *(int64_t *)(material_manager + 8);
      }
      
      // 获取材质ID
      if (*(int **)(material_chain + 0x78) == (int *)0x0) {
        new_material_id = *(int *)(material_chain + 0x94);
      }
      else {
        new_material_id = **(int **)(material_chain + 0x78);
      }
    }
    
    // 如果材质ID有变化，更新节点
    if (*(int *)(node_ptr + 0x418) != new_material_id) {
      if (*(int64_t *)(node_ptr + 0x408) != 0) {
        detach_material_from_node(*(int64_t *)(node_ptr + 0x408), node_ptr, 0);
      }
      *(int *)(node_ptr + 0x418) = new_material_id;
    }
  }
  return;
}



// 全局变量警告: 以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void FUN_18013b0f0(int param_1)
// 功能: 清理和重置节点系统
// 参数: 
//   param_1 - 清理模式 (0=完全清理, 非0=部分清理)
void cleanup_node_system(int cleanup_mode)

{
  int *node_counter;
  int *current_node;
  int *node_reference;
  int64_t global_context;
  bool needs_deep_cleanup;
  bool needs_flag_update;
  uint flag_mask;
  int *temp_node_ptr;
  uint64_t *node_array;
  uint64_t array_index;
  uint64_t *temp_array;
  uint temp_count;
  int node_index;
  uint64_t loop_counter;
  uint new_capacity;
  uint64_t *expanded_array;
  int temp_int;
  uint64_t *array_pointer;
  int64_t chain_node;
  uint64_t temp_value1;
  uint64_t temp_value2;
  uint64_t *temp_pointer;
  int64_t stack_var;
  uint64_t temp_var1;
  uint64_t temp_var2;
  uint64_t *allocation_ptr;
  
  global_context = GLOBAL_ENGINE_CONTEXT;
  temp_var1 = 0xfffffffffffffffe;
  node_counter = *(int **)(GLOBAL_ENGINE_CONTEXT + 0x2df8);
  
  if (cleanup_mode == 0) {
    stack_var = 0;
  }
  else {
    stack_var = get_material_manager_instance(node_counter);
    if (stack_var == 0) {
      return;
    }
  }
  
  // 初始化清理变量
  array_pointer = (uint64_t *)0x0;
  needs_flag_update = false;
  needs_deep_cleanup = false;
  temp_var2 = 0;
  temp_count = 0;
  allocation_ptr = (uint64_t *)0x0;
  temp_array = array_pointer;
  expanded_array = array_pointer;
  temp_pointer = array_pointer;
  array_pointer = array_pointer;
  
  // 遍历所有节点
  if (0 < *node_counter) {
    do {
      chain_node = 1;
      array_index = 0;
      current_node = *(int **)((int64_t)temp_pointer + *(int64_t *)(node_counter + 2) + 8);
      array_pointer = expanded_array;
      
      if (current_node != (int *)0x0) {
        if (cleanup_mode == 0) {
LAB_DEEP_CLEANUP:
          needs_deep_cleanup = needs_flag_update;
          if ((*(byte *)(current_node + 0x28) & 0x20) != 0) {
            needs_deep_cleanup = true;
          }
          
          // 处理节点引用链
          if ((cleanup_mode != 0) &&
             (chain_node = *(int64_t *)(global_context + 0x2df8), loop_counter = array_index, 0 < *(int *)(chain_node + 0x10))) {
            do {
              if (*(int **)(array_index + 0x10 + *(int64_t *)(chain_node + 0x18)) == current_node) {
                *(int32_t *)(array_index + *(int64_t *)(chain_node + 0x18)) = 0;
              }
              temp_count = (int)loop_counter + 1;
              array_index = array_index + 0x40;
              loop_counter = (uint64_t)temp_count;
            } while ((int)temp_count < *(int *)(chain_node + 0x10));
          }
          
          // 执行节点清理
          if (stack_var != 0) {
            perform_node_cleanup(stack_var, current_node, chain_node, stack_var, temp_var1, temp_var2, allocation_ptr);
          }
          
          temp_count = (uint)((uint64_t)temp_var2 >> 0x20);
          temp_int = (int)expanded_array;
          node_index = (int)temp_array;
          
          // 动态扩展数组容量
          if (node_index == temp_int) {
            if (temp_int == 0) {
              new_capacity = 8;
            }
            else {
              new_capacity = temp_int / 2 + temp_int;
            }
            flag_mask = temp_int + 1U;
            if ((int)(temp_int + 1U) < (int)new_capacity) {
              flag_mask = new_capacity;
            }
            
            if (temp_int < (int)flag_mask) {
              if (GLOBAL_ENGINE_CONTEXT != 0) {
                *(int *)(GLOBAL_ENGINE_CONTEXT + 0x3a8) = *(int *)(GLOBAL_ENGINE_CONTEXT + 0x3a8) + 1;
              }
              array_pointer = (uint64_t *)allocate_array_memory((int64_t)(int)flag_mask << 3, GLOBAL_MEMORY_POOL);
              if (expanded_array != (uint64_t *)0x0) {
                    // 警告: 子程序不返回
                memcpy(array_pointer, expanded_array, (int64_t)temp_int << 3);
              }
              expanded_array = (uint64_t *)(uint64_t)flag_mask;
              allocation_ptr = array_pointer;
              temp_count = flag_mask;
            }
          }
          
          // 添加节点到清理数组
          array_pointer[temp_int] = current_node;
          temp_array = (uint64_t *)(uint64_t)(temp_int + 1U);
          temp_var2 = CONCAT44(temp_count, temp_int + 1U);
          needs_flag_update = needs_deep_cleanup;
        }
        else {
          // 部分清理模式下的处理
          temp_int = *current_node;
          if (temp_int != cleanup_mode) {
            node_reference = *(int **)(current_node + 2);
            if (*(int **)(current_node + 2) != (int *)0x0) {
              do {
                temp_node_ptr = node_reference;
                node_reference = *(int **)(temp_node_ptr + 2);
              } while (node_reference != (int *)0x0);
              temp_int = *temp_node_ptr;
            }
            if (temp_int == cleanup_mode) goto LAB_DEEP_CLEANUP;
          }
        }
      }
      
      temp_count = (uint)temp_array;
      flag_mask = (int)array_pointer + 1;
      array_pointer = (uint64_t *)(uint64_t)flag_mask;
      temp_pointer = temp_pointer + 2;
      expanded_array = array_pointer;
    } while ((int)flag_mask < *node_counter);
  }
  
  // 清理全局引用
  array_index = 0;
  if (stack_var != 0) {
    *(byte *)(stack_var + 0xa0) = *(byte *)(stack_var + 0xa0) & 0xfe;
  }
  
  loop_counter = array_index;
  if (0 < *(int *)(global_context + 0x2e28)) {
    do {
      temp_int = *(int *)(*(int64_t *)(global_context + 0x2e30) + 0x28 + loop_counter);
      if ((temp_int != 0) && (node_index = 0, temp_array = array_pointer, 0 < (int)temp_count)) {
        do {
          if (*(int *)*temp_array == temp_int) {
            *(int *)(*(int64_t *)(global_context + 0x2e30) + 0x28 + loop_counter) = cleanup_mode;
            break;
          }
          node_index = node_index + 1;
          temp_array = temp_array + 1;
        } while (node_index < (int)temp_count);
      }
      flag_mask = (int)array_index + 1;
      array_index = (uint64_t)flag_mask;
      loop_counter = loop_counter + 0x38;
    } while ((int)flag_mask < *(int *)(global_context + 0x2e28));
  }
  
  // 对清理数组进行排序
  if (1 < (int)temp_count) {
    qsort(array_pointer, (int64_t)(int)temp_count, 8, &NODE_COMPARATOR_FUNCTION);
  }
  
  // 执行最终清理
  if (0 < (int)temp_count) {
    array_index = (uint64_t)temp_count;
    temp_array = array_pointer;
    do {
      finalize_node_cleanup(global_context, *temp_array, 0);
      temp_array = temp_array + 1;
      array_index = array_index - 1;
    } while (array_index != 0);
  }
  
  // 完全清理模式下的额外处理
  if (cleanup_mode == 0) {
    global_context = *(int64_t *)(node_counter + 2);
    if (global_context != 0) {
      node_counter[0] = 0;
      node_counter[1] = 0;
      if (GLOBAL_ENGINE_CONTEXT != 0) {
        *(int *)(GLOBAL_ENGINE_CONTEXT + 0x3a8) = *(int *)(GLOBAL_ENGINE_CONTEXT + 0x3a8) + -1;
      }
                    // 警告: 子程序不返回
      free_memory_pool(global_context, GLOBAL_MEMORY_POOL);
    }
    
    global_context = *(int64_t *)(node_counter + 6);
    if (global_context != 0) {
      node_counter[4] = 0;
      node_counter[5] = 0;
      if (GLOBAL_ENGINE_CONTEXT != 0) {
        *(int *)(GLOBAL_ENGINE_CONTEXT + 0x3a8) = *(int *)(GLOBAL_ENGINE_CONTEXT + 0x3a8) + -1;
      }
                    // 警告: 子程序不返回
      free_memory_pool(global_context, GLOBAL_MEMORY_POOL);
    }
  }
  else if (needs_deep_cleanup) {
    *(byte *)(stack_var + 0xa0) = *(byte *)(stack_var + 0xa0) | 0x20;
  }
  
  // 释放分配的数组内存
  if (array_pointer == (uint64_t *)0x0) {
    return;
  }
  if (GLOBAL_ENGINE_CONTEXT != 0) {
    *(int *)(GLOBAL_ENGINE_CONTEXT + 0x3a8) = *(int *)(GLOBAL_ENGINE_CONTEXT + 0x3a8) + -1;
  }
                    // 警告: 子程序不返回
  free_memory_pool(array_pointer, GLOBAL_MEMORY_POOL);
}



// 全局变量警告: 以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void FUN_18013b490(uint64_t param_1,char param_2)
// 功能: 重置节点系统状态
// 参数: 
//   param_1 - 重置标志
//   param_2 - 重置模式 (0=软重置, 非0=硬重置)
void reset_node_system(uint64_t reset_flags, char reset_mode)

{
  int *system_manager;
  int64_t *node_array;
  int64_t current_node;
  uint64_t cleanup_index;
  uint64_t temp_index;
  uint node_count;
  uint64_t loop_counter;
  uint64_t cleanup_counter;
  uint64_t iteration_index;
  
  current_node = GLOBAL_ENGINE_CONTEXT;
  cleanup_counter = 0;
  
  // 根据重置模式清理系统
  if ((reset_mode != '\0') && (cleanup_index = cleanup_counter, temp_index = cleanup_counter, 0 < *(int *)(GLOBAL_ENGINE_CONTEXT + 0x2e28))) {
    do {
      node_count = (int)temp_index + 1;
      *(int32_t *)(cleanup_index + 0x28 + *(int64_t *)(current_node + 0x2e30)) = 0;
      cleanup_index = cleanup_index + 0x38;
      temp_index = (uint64_t)node_count;
    } while ((int)node_count < *(int *)(current_node + 0x2e28));
  }
  
  system_manager = (int *)(current_node + 0x1aa0);
  if (0 < *system_manager) {
    node_array = (int64_t *)(current_node + 0x1aa8);
    cleanup_index = cleanup_counter;
    temp_index = cleanup_counter;
    
    do {
      current_node = *(int64_t *)(cleanup_index + *node_array);
      if (*(int64_t *)(current_node + 0x408) == 0) {
        *(int32_t *)(current_node + 0x418) = 0;
      }
      else {
        iteration_index = cleanup_counter;
        if (reset_mode == '\0') {
          iteration_index = (uint64_t)*(uint *)(current_node + 0x418);
        }
        detach_material_from_node(*(int64_t *)(current_node + 0x408), current_node, iteration_index);
        current_node = GLOBAL_ENGINE_CONTEXT;
      }
      
      // 重置节点状态
      *(byte *)(current_node + 0x432) = *(byte *)(current_node + 0x432) & 0xfc;
      *(int8_t *)(current_node + 0xb2) = 0;
      
      // 更新系统计时器
      if (*(float *)(current_node + 0x2e04) <= 0.0) {
        *(int32_t *)(current_node + 0x2e04) = *(int32_t *)(current_node + 0x1c);
      }
      
      node_count = (int)temp_index + 1;
      temp_index = (uint64_t)node_count;
      cleanup_index = cleanup_index + 8;
    } while ((int)node_count < *system_manager);
  }
  return;
}



// 全局变量警告: 以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void FUN_18013b4f0(int64_t param_1)
// 功能: 批量更新节点材质ID
// 参数: 
//   param_1 - 系统上下文指针
void batch_update_node_materials(int64_t system_context)

{
  int64_t *node_pointer_array;
  int64_t current_node;
  int *array_size;
  uint64_t material_id;
  int node_count;
  uint64_t temp_material_id;
  uint64_t iteration_index;
  uint64_t array_index;
  char update_mode;
  
  node_pointer_array = (int64_t *)(system_context + 0x1aa8);
  material_id = iteration_index;
  
  do {
    current_node = *(int64_t *)(material_id + *node_pointer_array);
    if (*(int64_t *)(current_node + 0x408) == 0) {
      *(int *)(current_node + 0x418) = (int)iteration_index;
    }
    else {
      temp_material_id = iteration_index & 0xffffffff;
      if (update_mode == '\0') {
        temp_material_id = (uint64_t)*(uint *)(current_node + 0x418);
      }
      detach_material_from_node(*(int64_t *)(current_node + 0x408), current_node, temp_material_id);
      system_context = GLOBAL_ENGINE_CONTEXT;
    }
    
    // 更新节点状态标志
    *(byte *)(current_node + 0x432) = *(byte *)(current_node + 0x432) & 0xfc;
    *(char *)(current_node + 0xb2) = (char)iteration_index;
    
    // 更新系统计时器
    if (*(float *)(system_context + 0x2e04) <= 0.0) {
      *(int32_t *)(system_context + 0x2e04) = *(int32_t *)(system_context + 0x1c);
    }
    
    node_count = node_count + 1;
    material_id = material_id + 8;
  } while (node_count < *array_size);
  return;
}





// 函数: void FUN_18013b58d(void)
// 功能: 空函数，可能的占位符或调试断点
void empty_function_placeholder(void)

{
  return;
}



// 全局变量警告: 以'_'开头的全局变量与同一地址的较小符号重叠



// 函数: void FUN_18013b5a0(uint64_t *param_1,int8_t *param_2)
// 功能: 处理节点的材质分配和属性设置
// 参数: 
//   param_1 - 节点指针
//   param_2 - 输出标志 (可选)
void process_node_material_assignment(uint64_t *node_ptr, int8_t *output_flag)

{
  uint node_flags;
  int64_t material_instance;
  int *material_id_ptr;
  int64_t global_context;
  bool use_alternate_path;
  byte special_flag;
  int16_t temp_short;
  int32_t material_id;
  int64_t material_chain;
  int *property_array;
  uint property_index;
  uint64_t loop_counter;
  int64_t temp_node;
  int array_index;
  uint64_t iteration_index;
  int64_t node_data;
  int node_type;
  uint64_t temp_ulong;
  int64_t related_node;
  byte final_flag;
  
  global_context = GLOBAL_ENGINE_CONTEXT;
  
  // 检查是否需要使用替代处理路径
  if ((*(char *)(GLOBAL_ENGINE_CONTEXT + 0xc2) == '\0') ||
     ((*(uint *)((int64_t)node_ptr + 0xc) & 0x1200001) != 0)) {
    
    special_flag = (byte)(*(uint *)((int64_t)node_ptr + 0xc) >> 0x15) & 1;
    use_alternate_path = false;
    
    // 检查特殊材质条件
    if ((*(uint *)(GLOBAL_ENGINE_CONTEXT + 0x1bd0) != 0) &&
       (((*(uint *)(node_ptr + 0x1c) & *(uint *)(GLOBAL_ENGINE_CONTEXT + 0x1bd0)) != 0 &&
        (*(char *)(GLOBAL_ENGINE_CONTEXT + 0x1c14) != '\0')))) {
      special_flag = 1;
    }
    
    *(int8_t *)(GLOBAL_ENGINE_CONTEXT + 0x1c14) = 0;
    
    if (special_flag != 0) {
      // 快速材质分离路径
      if (node_ptr[0x81] == 0) {
        *(int32_t *)(node_ptr + 0x83) = 0;
      }
      else {
        detach_material_from_node(node_ptr[0x81], node_ptr, 0);
        global_context = GLOBAL_ENGINE_CONTEXT;
      }
      
      // 重置节点状态
      *(byte *)((int64_t)node_ptr + 0x432) = *(byte *)((int64_t)node_ptr + 0x432) & 0xfc;
      *(int8_t *)((int64_t)node_ptr + 0xb2) = 0;
      
      // 检查系统计时器
      if (0.0 < *(float *)(global_context + 0x2e04)) {
        return;
      }
      *(int32_t *)(global_context + 0x2e04) = *(int32_t *)(global_context + 0x1c);
      return;
    }
  }
  else {
    use_alternate_path = true;
    if (*(int *)(node_ptr + 0x83) == 0) {
      material_id = generate_unique_material_id(GLOBAL_ENGINE_CONTEXT);
      *(int32_t *)(node_ptr + 0x83) = material_id;
    }
  }
  
  iteration_index = 0;
  material_chain = node_ptr[0x81];
  node_data = global_context;
  
  // 材质实例获取和处理
  if ((*(int *)(node_ptr + 0x83) != 0) && (material_chain == 0)) {
    material_chain = get_material_manager_instance(*(uint64_t *)(global_context + 0x2df8), *(int32_t *)(node_ptr + 0x83));
    if (material_chain == 0) {
      material_chain = create_new_material_instance(global_context, *(int32_t *)(node_ptr + 0x83));
      if (use_alternate_path) {
        *(int32_t *)(material_chain + 0x88) = *(int32_t *)(global_context + 0x1a90);
      }
    }
    else if (*(int64_t *)(material_chain + 0x10) != 0) {
      // 处理现有材质链的冲突
      if (node_ptr[0x81] == 0) {
        *(int32_t *)(node_ptr + 0x83) = 0;
        *(int8_t *)((int64_t)node_ptr + 0xb2) = 0;
      }
      else {
        detach_material_from_node(node_ptr[0x81], node_ptr, 0);
        global_context = GLOBAL_ENGINE_CONTEXT;
        *(int8_t *)((int64_t)node_ptr + 0xb2) = 0;
      }
      goto LAB_FINALIZE_PROCESSING;
    }
    
    // 初始化新材质链
    initialize_material_chain(material_chain, node_ptr, 1);
    node_data = GLOBAL_ENGINE_CONTEXT;
    *(uint64_t *)(GLOBAL_ENGINE_CONTEXT + 0x1bf4) = node_ptr[8];
    *(uint64_t *)(node_data + 0x1bfc) = 0;
    *(int32_t *)(node_data + 0x1bd0) = 1;
    *(int8_t *)(node_data + 0x1c14) = 1;
    *(uint64_t *)(node_data + 0x1c04) = node_ptr[10];
    *(int32_t *)(node_data + 0x1bd4) = 1;
    *(int8_t *)(global_context + 0x1c14) = 0;
  }
  
  // 检查材质链状态
  if (((*(byte *)(material_chain + 0xa0) & 0x20) == 0) || ((*(byte *)(material_chain + 4) & 8) == 0)) {
    if (*(int *)(material_chain + 0x88) < *(int *)(global_context + 0x1a90)) {
      material_instance = *(int64_t *)(material_chain + 8);
      while (temp_node = material_instance, temp_node != 0) {
        material_chain = temp_node;
        material_instance = *(int64_t *)(temp_node + 8);
      }
      if (*(int *)(global_context + 0x1a90) <= *(int *)(material_chain + 0x88)) {
        *(byte *)((int64_t)node_ptr + 0x432) = *(byte *)((int64_t)node_ptr + 0x432) & 0xfd | 1;
        return;
      }
    }
    else {
      material_instance = *(int64_t *)(material_chain + 0x68);
      if (material_instance == 0) {
LAB_SET_INACTIVE_FLAG:
        *(byte *)((int64_t)node_ptr + 0x432) = *(byte *)((int64_t)node_ptr + 0x432) & 0xfd;
        return;
      }
      
      // 检查材质优先级
      if (*(short *)(material_instance + 0xbc) <= *(short *)((int64_t)node_ptr + 0xbc)) {
        if (material_instance != 0) {
          *(uint64_t *)(node_data + 0x1bf4) = *(uint64_t *)(material_chain + 0x38);
          *(uint64_t *)(node_data + 0x1bfc) = 0;
          *(int32_t *)(node_data + 0x1bd0) = 1;
          *(int8_t *)(node_data + 0x1c14) = 1;
          *(uint64_t *)(node_data + 0x1c04) = *(uint64_t *)(material_chain + 0x40);
          *(int32_t *)(node_data + 0x1bd4) = 1;
          *(int8_t *)(global_context + 0x1c14) = 0;
          
          final_flag = *(byte *)((int64_t)node_ptr + 0x432) & 0xfd;
          final_flag = final_flag | 1;
          *(byte *)((int64_t)node_ptr + 0x432) = final_flag;
          
          if ((*(byte *)(material_chain + 4) & 1) != 0) {
            return;
          }
          
          material_instance = *(int64_t *)(material_chain + 0x30);
          if ((material_instance != 0) && (*(int *)(material_instance + 0x1c) == *(int *)(node_ptr + 1))) {
            final_flag = final_flag | 3;
            *(byte *)((int64_t)node_ptr + 0x432) = final_flag;
            material_instance = *(int64_t *)(material_chain + 0x30);
          }
          
          if ((((final_flag & 2) == 0) && (material_instance != 0)) &&
             (*(int *)(material_instance + 0x18) == *(int *)(node_ptr + 1))) {
            *(int32_t *)((int64_t)node_ptr + 0xdc) = 2;
          }
          
          node_flags = *(uint *)((int64_t)node_ptr + 0xc);
          *(uint *)((int64_t)node_ptr + 0xc) = node_flags | 0x1010002;
          property_index = node_flags & 0xfffffffe | 0x1010002;
          
          if ((*(byte *)(material_chain + 0xa0) & 0x40) != 0) {
            property_index = node_flags | 0x1010003;
          }
          *(uint *)((int64_t)node_ptr + 0xc) = property_index;
          
          // 处理材质属性数组
          if (*(int64_t *)(material_chain + 0x30) != 0) {
            property_array = *(int **)(node_ptr[0x81] + 0x30);
            if (((property_array != (int *)0x0) && (*(int *)(node_ptr + 1) != 0)) && (0 < *property_array)) {
              material_id_ptr = *(int **)(property_array + 2);
              temp_ulong = iteration_index;
              do {
                array_index = (int)temp_ulong;
                if (*material_id_ptr == *(int *)(node_ptr + 1)) {
                  if (*(int **)(property_array + 2) + (int64_t)array_index * 10 != (int *)0x0) {
                    temp_short = (int16_t)(((int64_t)array_index * 0x28) / 0x28);
                    goto LAB_SET_PROPERTY_INDEX;
                  }
                  break;
                }
                temp_ulong = (uint64_t)(array_index + 1);
                iteration_index = iteration_index + 1;
                material_id_ptr = material_id_ptr + 10;
              } while ((int64_t)iteration_index < (int64_t)*property_array);
            }
            temp_short = 0xffff;
LAB_SET_PROPERTY_INDEX:
            *(int16_t *)(node_ptr + 0x86) = temp_short;
          }
          
          // 检查材质特殊属性
          if ((((*(byte *)(material_chain + 0xa1) & 2) != 0) ||
              (*(int *)(material_chain + 0x9c) == *(int *)(node_ptr + 1))) && (output_flag != (int8_t *)0x0)) {
            *output_flag = 0;
          }
          
          material_id = calculate_material_properties(*(uint64_t *)(node_ptr[0x81] + 0x68), *node_ptr);
          *(int32_t *)(node_ptr + 0x11) = material_id;
          return;
        }
        goto LAB_SET_INACTIVE_FLAG;
      }
    }
  }
  
  // 清理无效材质引用
  if (node_ptr[0x81] == 0) {
    *(int32_t *)(node_ptr + 0x83) = 0;
    global_context = node_data;
  }
  else {
    detach_material_from_node(node_ptr[0x81], node_ptr, 0);
    global_context = GLOBAL_ENGINE_CONTEXT;
  }
  
  *(int8_t *)((int64_t)node_ptr + 0xb2) = 0;
LAB_FINALIZE_PROCESSING:
  *(byte *)((int64_t)node_ptr + 0x432) = *(byte *)((int64_t)node_ptr + 0x432) & 0xfc;
  
  // 最终系统状态检查
  if (0.0 < *(float *)(global_context + 0x2e04)) {
    return;
  }
  *(int32_t *)(global_context + 0x2e04) = *(int32_t *)(global_context + 0x1c);
  return;
}



// 全局变量警告: 以'_'开头的全局变量与同一地址的较小符号重叠