#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统高级碰撞检测和对象处理模块
 * 
 * 本模块包含1个核心函数，用于处理渲染对象之间的碰撞检测、
 * 边界计算、向量运算和对象关系管理。主要功能包括：
 * - 渲染对象碰撞检测和距离计算
 * - 边界框和向量运算处理
 * - 对象关系建立和管理
 * - 渲染状态更新和参数控制
 * 
 * 函数列表：
 * - RenderingSystem_AdvancedCollisionDetection: 高级碰撞检测和对象处理
 */

/**
 * 渲染系统高级碰撞检测和对象处理函数
 * 
 * 该函数负责处理渲染对象之间的复杂碰撞检测，包括：
 * - 对象边界计算和距离测量
 * - 碰撞关系建立和管理
 * - 向量运算和几何计算
 * - 渲染状态更新和同步
 * 
 * @param render_context 渲染上下文指针，包含渲染系统状态
 * @param object_id_1 第一个对象的ID标识
 * @param object_id_2 第二个对象的ID标识
 * @param object_id_3 第三个对象的ID标识
 */
void RenderingSystem_AdvancedCollisionDetection(longlong render_context, int object_id_1, int object_id_2, int object_id_3)
{
    // 渲染对象指针和组件遍历
    undefined8 *render_object_array_ptr;
    undefined8 *current_object_ptr;
    undefined8 *target_object_ptr;
    undefined8 *collision_object_ptr;
    
    // 循环计数器和索引变量
    ulonglong loop_counter;
    ulonglong object_index;
    ulonglong component_index;
    ulonglong collision_index;
    
    // 碰撞检测相关变量
    bool collision_found;
    float min_distance;
    float current_distance;
    bool collision_flag;
    
    // 向量和几何计算变量
    float vector_x;
    float vector_y;
    float normal_x;
    float normal_y;
    float dot_product;
    float inv_sqrt;
    float distance_x;
    float distance_y;
    float center_x;
    float center_y;
    
    // 对象属性和状态变量
    int object_id;
    int component_id;
    int collision_id;
    bool has_components;
    
    // 临时变量和指针
    longlong temp_long_1;
    longlong temp_long_2;
    longlong temp_long_3;
    longlong temp_long_4;
    longlong temp_long_5;
    longlong temp_long_6;
    longlong temp_long_7;
    longlong temp_long_8;
    longlong temp_long_9;
    longlong temp_long_10;
    
    // 数组和数据结构指针
    undefined8 *component_array_ptr;
    undefined8 *data_array_ptr;
    longlong *long_ptr;
    longlong *long_ptr_2;
    longlong *long_ptr_3;
    longlong *long_ptr_4;
    ulonglong *ulong_ptr_1;
    
    // 栈变量用于保存状态
    uint stack_uint_1;
    uint stack_uint_2;
    int stack_int_1;
    ulonglong stack_ulong_1;
    float stack_float_1;
    char stack_char_1;
    
    // 杂项变量
    byte byte_temp_1;
    char char_temp_1;
    undefined4 undefined_temp_1;
    float float_temp_1;
    undefined1 byte_array_1[16];
    bool bool_temp_1;
    
    // 用于存储中间结果的变量
    ulonglong ulong_temp_1;
    ulonglong ulong_temp_2;
    ulonglong ulong_temp_3;
    ulonglong ulong_temp_4;
    ulonglong ulong_temp_5;
    ulonglong ulong_temp_6;
    ulonglong ulong_temp_7;
    ulonglong ulong_temp_8;
    ulonglong ulong_temp_9;
    
    int int_temp_1;
    int int_temp_2;
    int int_temp_3;
    int int_temp_4;
    int int_temp_5;
    uint uint_temp_1;
    uint uint_temp_2;
    uint uint_temp_3;
    uint uint_temp_4;
    uint uint_temp_5;
  
  // 获取渲染对象数组指针和对象数量
  render_object_array_ptr = *(ulonglong **)(render_context + 0x478);
  object_index = 0;
  collision_index = 0;
  component_index = 0;
  loop_counter = 0;
  ulonglong object_count = *(longlong *)(render_context + 0x480) - (longlong)render_object_array_ptr >> 3;
  
  current_object_ptr = 0;
  target_object_ptr = 0;
  collision_object_ptr = 0;
  // 遍历渲染对象数组，查找指定的对象
  if (object_count != 0) {
    do {
      undefined8 current_object_data = *render_object_array_ptr;
      int current_object_id = *(int *)(current_object_data + 0x130);
      undefined8 temp_object_ptr = current_object_data;
      undefined8 prev_object_ptr = loop_counter;
      
      // 检查对象ID是否匹配目标对象
      if (((object_id_1 != current_object_id) && (temp_object_ptr = current_object_ptr, prev_object_ptr = current_object_data, object_id_2 != current_object_id)) &&
         (prev_object_ptr = loop_counter, object_id_3 == current_object_id)) {
        target_object_ptr = current_object_data;
      }
      
      // 如果找到所有必需的对象，退出循环
      if (((temp_object_ptr != 0) && (prev_object_ptr != 0)) && (target_object_ptr != 0)) break;
      
      // 更新循环计数器和指针
      ulonglong next_index = (int)component_index + 1;
      component_index = (ulonglong)next_index;
      render_object_array_ptr = render_object_array_ptr + 1;
      current_object_ptr = temp_object_ptr;
      loop_counter = prev_object_ptr;
    } while ((ulonglong)(longlong)(int)next_index < object_count);
    // 如果找到所有必需的对象，开始碰撞检测
    if (((current_object_ptr != 0) && (loop_counter != 0)) && (target_object_ptr != 0)) {
      ulonglong best_collision_index = 0xffffffff;
      bool collision_found = false;
      int best_component_id = -1;
      float min_collision_distance = 10000.0;
      
      // 获取当前对象的组件标志
      byte has_components = *(byte *)(current_object_ptr + 0xa8);
      int temp_component_id = -1;
      uint stack_temp_uint = 0xffffffff;
      int current_collision_id = -1;
      int stack_temp_int = -1;
      uint stack_temp_uint_2 = 0;
      bool stack_temp_bool = false;
      uint stack_temp_uint_3 = 0;
      // 如果当前对象有组件，遍历组件进行碰撞检测
      if (has_components != 0) {
        undefined8 *component_array = (undefined8 *)(current_object_ptr + 0x60);
        current_object_ptr = 0;
        component_index = 0;
        
        do {
          uint component_index_temp = (uint)current_object_ptr;
          undefined8 *component_data = (undefined8 *)*component_array;
          
          // 检查组件类型是否为碰撞检测组件
          if (*(char *)(component_data + 4) == '\x02') {
            undefined8 connected_object = component_data[2];
            if (connected_object == current_object_ptr) {
              connected_object = component_data[3];
            }
            
            float *position_data = (float *)component_data[1];
            bool temp_collision_flag = false;
            uint collision_temp_index = 0xffffffff;
            int temp_collision_id = -1;
            uint object_temp_index = 0xffffffff;
            int component_temp_id = -1;
            float temp_distance = 10001.0;
            
            // 计算位置和向量
            float start_x = *(float *)*component_data;
            float start_y = ((float *)*component_data)[1];
            float vector_dx = *position_data - start_x;
            float vector_dy = start_y - position_data[1];
            float center_x = (start_x + *position_data) * 0.5;
            float center_y = (start_y + position_data[1]) * 0.5;
            
            // 计算向量的长度和归一化
            float length_squared = vector_dx * vector_dx + vector_dy * vector_dy;
            union { float f; uint u; } sqrt_result = {rsqrtss(ZEXT416((uint)length_squared), ZEXT416((uint)length_squared))};
            float inv_length = sqrt_result.f;
            inv_length = inv_length * 0.5 * (3.0 - length_squared * inv_length * inv_length);
            
            float normalized_dx = vector_dy * inv_length;
            float normalized_dy = vector_dx * inv_length;
            
            // 检查向量方向是否需要反转
            if (0.0 < (*(float *)(current_object_ptr + 0xec) - center_y) * normalized_dy +
                      (*(float *)(current_object_ptr + 0xe8) - center_x) * normalized_dx) {
              normalized_dx = -normalized_dx;
              normalized_dy = -normalized_dy;
            }
            // 如果连接对象有组件，继续进行碰撞检测
            if (*(byte *)(connected_object + 0xa8) != 0) {
              undefined8 *connected_component_array = (undefined8 *)(connected_object + 0x60);
              uint collision_temp_index_2 = 0;
              
              do {
                undefined8 *connected_component_data = (undefined8 *)*connected_component_array;
                
                // 检查连接组件的类型和关联性
                if (((*(char *)(connected_component_data + 4) == '\x02') && (connected_component_data != component_data)) &&
                   (((connected_component_data[2] == loop_counter || (connected_component_data[3] == loop_counter)) &&
                    (*(byte *)(target_object_ptr + 0xa8) != 0)))) {
                  
                  // 获取目标对象的组件数组
                  undefined8 *target_component_array = (undefined8 *)(target_object_ptr + 0x60);
                  component_index = 0;
                  
                  do {
                    undefined8 *target_component_data = (undefined8 *)*target_component_array;
                    
                    // 如果不是碰撞检测组件，进行几何计算
                    if (*(char *)(target_component_data + 4) != '\x02') {
                      float *target_position = (float *)target_component_data[1];
                      float target_start_x = *(float *)*target_component_data;
                      float target_start_y = ((float *)*target_component_data)[1];
                      float target_vector_dy = target_start_y - target_position[1];
                      float target_vector_dx = *target_position - target_start_x;
                      float target_center_x = (target_start_x + *target_position) * 0.5;
                      float target_center_y = (target_start_y + target_position[1]) * 0.5;
                      
                      // 计算目标向量的长度
                      float target_length_squared = target_vector_dx * target_vector_dx + target_vector_dy * target_vector_dy;
                      union { float f; uint u; } target_sqrt_result = {rsqrtss(ZEXT416((uint)target_length_squared), ZEXT416((uint)target_length_squared))};
                      float target_inv_length = target_sqrt_result.f;
                      target_inv_length = target_inv_length * 0.5 * (3.0 - target_length_squared * target_inv_length * target_inv_length);
                      
                      float target_normalized_dx = target_inv_length * target_vector_dx;
                      float target_normalized_dy = target_inv_length * target_vector_dy;
                      
                      // 检查目标向量方向
                      bool target_direction_check = 0.0 < (*(float *)(target_object_ptr + 0xec) - target_center_y) * target_normalized_dx +
                                     (*(float *)(target_object_ptr + 0xe8) - target_center_x) * target_normalized_dy;
                      
                      if (target_direction_check) {
                        target_normalized_dy = -target_normalized_dy;
                        target_normalized_dx = -target_normalized_dx;
                      }
                      
                      // 检查两个向量的点积是否满足碰撞条件
                      if (target_normalized_dx * normalized_dy + target_normalized_dy * normalized_dx <= -0.3) {
                        float distance_x = target_center_x - center_x;
                        float distance_y = target_center_y - center_y;
                        float distance_squared = distance_y * distance_y + distance_x * distance_x;
                        
                        // 计算距离的平方根
                        union { float f; uint u; } distance_sqrt_result = {rsqrtss(ZEXT416((uint)distance_squared), ZEXT416((uint)distance_squared))};
                        float distance_inv_sqrt = distance_sqrt_result.f;
                        distance_inv_sqrt = distance_inv_sqrt * 0.5 * (3.0 - distance_squared * distance_inv_sqrt * distance_inv_sqrt);
                        
                        // 计算碰撞距离
                        float collision_distance = distance_inv_sqrt * distance_y * normalized_dy + distance_inv_sqrt * distance_x * normalized_dx;
                        
                        // 如果碰撞距离在有效范围内，更新最佳碰撞
                        if ((0.1 <= collision_distance) && (distance_squared = distance_squared / collision_distance, distance_squared < temp_distance)) {
                          object_temp_index = component_index;
                          collision_temp_index = collision_temp_index_2;
                          temp_distance = distance_squared;
                          temp_collision_flag = target_direction_check;
                        }
                      }
                    }
                    
                    // 更新循环计数器
                    ulonglong next_target_index = (int)component_index + 1;
                    component_index = (ulonglong)next_target_index;
                    target_component_array = target_component_array + 1;
                  } while ((int)next_target_index < (int)(uint)*(byte *)(target_object_ptr + 0xa8));
                }
                
                // 更新碰撞检测结果
                temp_collision_id = (int)collision_temp_index;
                component_temp_id = (int)object_temp_index;
                uint next_collision_index = (int)collision_temp_index_2 + 1;
                collision_temp_index_2 = (ulonglong)next_collision_index;
                connected_component_array = connected_component_array + 1;
                component_index = stack_temp_uint_2;
                loop_counter = stack_temp_uint;
                component_index_temp = stack_temp_uint_3;
              } while ((int)next_collision_index < (int)(uint)*(byte *)(connected_object + 0xa8));
            }
            // 更新最佳碰撞结果
            best_component_id = current_collision_id;
            temp_component_id = stack_temp_int;
            collision_found = stack_temp_bool;
            
            // 如果发现更近的碰撞，更新最佳结果
            if (temp_distance < min_collision_distance) {
              component_index = connected_object;
              best_component_id = temp_collision_id;
              temp_component_id = component_temp_id;
              collision_found = temp_collision_flag;
              loop_counter = component_index_temp;
              stack_temp_bool = temp_collision_flag;
              stack_temp_uint_2 = connected_object;
              min_collision_distance = temp_distance;
              stack_temp_uint = component_index_temp;
              stack_temp_int = component_temp_id;
              current_collision_id = temp_collision_id;
            }
          }
          // 更新组件索引和数组指针
          stack_temp_uint_3 = component_index_temp + 1;
          current_object_ptr = (ulonglong)stack_temp_uint_3;
          component_array = component_array + 1;
        } while ((int)stack_temp_uint_3 < (int)(uint)has_components);
        
        // 检查碰撞检测的有效性
        if (((((-1 < (int)loop_counter) && ((int)loop_counter < (int)(uint)has_components)) && (-1 < best_component_id)) &&
            ((best_component_id < (int)(uint)*(byte *)(loop_counter + 0xa8) && (-1 < temp_component_id)))) &&
           ((temp_component_id < (int)(uint)*(byte *)(target_object_ptr + 0xa8) && (component_index != 0)))) {
          
          // 获取碰撞相关的组件数据
          stack_temp_uint_3 = 0;
          longlong current_component_data = *(longlong *)(current_object_ptr + 0x60 + (longlong)(int)loop_counter * 8);
          longlong target_component_data = *(longlong *)(target_object_ptr + 0x60 + (longlong)temp_component_id * 8);
          has_components = *(byte *)(component_index + 0xa8);
          longlong connected_component_data = *(longlong *)(component_index + 0x60 + (longlong)best_component_id * 8);
          // 如果对象有组件，建立对象之间的关系
          if (has_components != 0) {
            longlong **component_ptr_array = (longlong **)(component_index + 0x60);
            current_object_ptr = 0;
            longlong connected_component_temp = connected_component_data;
            
            do {
              uint temp_component_index = (uint)current_object_ptr;
              longlong *component_entry = (longlong *)*component_ptr_array;
              
              // 检查组件是否与当前对象或循环对象相关联
              if ((component_entry[2] != current_object_ptr) && (((char)component_entry[4] != '\x02' || (component_entry[3] != current_object_ptr)))) {
                if (component_entry[2] != loop_counter) {
                  if (((char)component_entry[4] != '\x02') || (component_entry[3] != loop_counter)) {
                    // 搜索匹配的组件
                    current_object_ptr = 0;
                    uint search_index = 0;
                    
                    // 搜索第一个匹配项
                    do {
                      uint temp_search_index = (uint)search_index;
                      if (*component_entry == *(longlong *)(current_component_data + current_object_ptr * 8)) break;
                      search_index = (ulonglong)((uint)search_index + 1);
                      current_object_ptr = current_object_ptr + 1;
                      temp_search_index = 0xffffffff;
                    } while ((longlong)current_object_ptr < 2);
                    
                    // 搜索第二个匹配项
                    current_object_ptr = 0;
                    search_index = 0;
                    
                    do {
                      uint match_index = 0;
                      uint temp_search_index = (uint)search_index;
                      if (component_entry[1] == *(longlong *)(current_component_data + current_object_ptr * 8)) break;
                      search_index = (ulonglong)((uint)search_index + 1);
                      current_object_ptr = current_object_ptr + 1;
                      temp_search_index = temp_search_index;
                    } while ((longlong)current_object_ptr < 2);
                    
                    // 处理匹配的组件
                    do {
                      longlong component_data_value = component_entry[match_index];
                      longlong *component_ptr = component_entry;
                      current_object_ptr = 0;
                      
                      do {
                        component_entry = component_ptr;
                        if (component_data_value == *(longlong *)(connected_component_temp + current_object_ptr * 8)) {
                          bool is_reverse_collision = collision_found == '\0';
                          
                          // 处理碰撞检测组件
                          if ((char)component_ptr[4] == '\x02') {
                            if (component_ptr[2] == component_index) {
                              component_ptr[2] = component_ptr[3];
                            }
                            component_ptr[3] = 0;
                            *(undefined1 *)(component_ptr + 4) = 0;
                            if (component_ptr[2] != 0) {
                              *(undefined1 *)(component_ptr + 4) = 1;
                            }
                            FUN_18038b160(component_ptr[2]);
                          }
                          else {
                            FUN_18038d8f0(render_context, component_ptr);
                          }
                          
                          // 根据碰撞类型设置组件关系
                          longlong *relation_component = component_ptr;
                          if (match_index == 0) {
                            if (is_reverse_collision) {
                              relation_component = (longlong *)((longlong)(int)(uint)(temp_search_index == 0) * 8 + target_component_data);
                            }
                            else {
                              relation_component = (longlong *)((longlong)(int)temp_search_index * 8 + target_component_data);
                            }
                          }
                          
                          if (match_index == 1) {
                            if (is_reverse_collision) {
                              connected_component_temp = *(longlong *)(target_component_data + (longlong)(int)(uint)(temp_search_index == 0) * 8);
                            }
                            else {
                              connected_component_temp = *(longlong *)(target_component_data + (longlong)(int)temp_search_index * 8);
                            }
                          }
                          else {
                            connected_component_temp = component_ptr[1];
                          }
                          
                          // 检查是否已存在相同的关系
                          undefined8 **relation_array = *(undefined8 **)(render_context + 0x458);
                          ulonglong relation_count = *(longlong *)(render_context + 0x460) - (longlong)relation_array >> 3;
                          component_index = 0;
                          
                          if (relation_count != 0) {
                            do {
                              component_entry = (longlong *)*relation_array;
                              if (((*component_entry == *relation_component) && (component_entry[1] == connected_component_temp)) ||
                                 ((*component_entry == connected_component_temp && (component_entry[1] == *relation_component)))) {
                                *(undefined1 *)(component_entry + 4) = 2;
                                component_entry[3] = stack_temp_uint_2;
                                *component_ptr_array = (longlong)component_entry;
                                FUN_18038b160(component_entry[2]);
                                connected_component_temp = connected_component_data;
                                component_index = stack_temp_uint_2;
                                goto RELATION_FOUND;
                              }
                              ulonglong next_relation_index = (int)component_index + 1;
                              component_index = (ulonglong)next_relation_index;
                              relation_array = relation_array + 1;
                            } while ((ulonglong)(longlong)(int)next_relation_index < relation_count);
                          }
                          
                          // 创建新的关系
                          if (match_index == 1) {
                            if (is_reverse_collision) {
                              connected_component_temp = *(longlong *)(target_component_data + (longlong)(int)(uint)(temp_search_index == 0) * 8);
                            }
                            else {
                              connected_component_temp = *(longlong *)(target_component_data + (longlong)(int)temp_search_index * 8);
                            }
                          }
                          else {
                            connected_component_temp = component_ptr[1];
                            if (match_index == 0) {
                              loop_counter = temp_search_index;
                              if (is_reverse_collision) {
                                loop_counter = (uint)(temp_search_index == 0);
                              }
                              component_ptr = (longlong *)((longlong)(int)loop_counter * 8 + target_component_data);
                            }
                          }
                          
                          longlong relation_data = *component_ptr;
                          component_entry = (longlong *)FUN_18038c180(render_context);
                          component_entry[1] = connected_component_temp;
                          *component_entry = relation_data;
                          *(undefined1 *)(component_entry + 4) = 1;
                          component_entry[2] = stack_temp_uint_2;
                          *component_ptr_array = (longlong)component_entry;
                          connected_component_temp = connected_component_data;
                          component_index = stack_temp_uint_2;
                        }
RELATION_FOUND:
                        current_object_ptr = current_object_ptr + 1;
                        component_ptr = component_entry;
                        collision_found = stack_temp_bool;
                      } while ((longlong)current_object_ptr < 2);
                      
                      match_index = match_index + 1;
                      loop_counter = stack_temp_uint_3;
                    } while ((longlong)match_index < 2);
                    goto COMPONENT_PROCESSING_DONE;
                  }
                  component_entry[2] = loop_counter;
                }
                *(undefined1 *)(component_entry + 4) = 1;
                component_entry[3] = 0;
                func_0x00018038ac80(component_entry);
                *component_ptr_array = target_component_data;
                *(undefined1 *)(target_component_data + 0x20) = 2;
                *(ulonglong *)(target_component_data + 0x18) = component_index;
              }
COMPONENT_PROCESSING_DONE:
              has_components = *(byte *)(component_index + 0xa8);
              stack_temp_uint_3 = loop_counter + 1;
              current_object_ptr = (ulonglong)stack_temp_uint_3;
              component_ptr_array = component_ptr_array + 1;
              collision_found = stack_temp_bool;
            } while ((int)stack_temp_uint_3 < (int)(uint)has_components);
          }
          // 重置组件状态
          if (has_components != 0) {
            longlong **component_ptr_array = (longlong **)(component_index + 0x60);
            current_object_ptr = 0;
            
            do {
              longlong component_data = *component_ptr_array;
              *(undefined1 *)(component_data + 0x20) = 0;
              bool has_active_connection = *(longlong *)(component_data + 0x10) != 0;
              
              if (has_active_connection) {
                *(undefined1 *)(component_data + 0x20) = 1;
              }
              
              if (*(longlong *)(component_data + 0x18) != 0) {
                has_active_connection = has_active_connection + '\x01';
                *(char *)(component_data + 0x20) = has_active_connection;
              }
              
              // 如果只有一个连接，简化连接结构
              if ((has_active_connection == '\x01') && (*(longlong *)(component_data + 0x18) != 0)) {
                *(longlong *)(component_data + 0x10) = *(longlong *)(component_data + 0x18);
                *(undefined8 *)(component_data + 0x18) = 0;
              }
              
              has_components = *(byte *)(component_index + 0xa8);
              ulonglong next_component_index = (int)current_object_ptr + 1;
              current_object_ptr = (ulonglong)next_component_index;
              component_ptr_array = component_ptr_array + 1;
            } while ((int)next_component_index < (int)(uint)has_components);
          }
          // 优化组件数组结构
          current_object_ptr = 0;
          object_index = 0;
          
          if (has_components != 0) {
            do {
              longlong *current_component = *(longlong **)(component_index + 0x60 + object_index * 8);
              ulonglong next_component_index = (int)current_object_ptr + 1;
              current_object_ptr = 0;
              
              if (next_component_index != has_components) {
                current_object_ptr = object_index + 1;
              }
              
              longlong *next_component = *(longlong **)(component_index + 0x60 + current_object_ptr * 8);
              int relation_type = -1;
              
              // 确定组件之间的关系类型
              if ((*current_component == *next_component) || (relation_type = -1, *current_component == next_component[1])) {
                relation_type = 0;
              }
              
              if ((current_component[1] == *next_component) || (current_component[1] == next_component[1])) {
                relation_type = 1;
              }
              
              current_object_ptr = 0;
              if (relation_type == 0) {
                current_object_ptr = 8;
              }
              
              // 重新排列组件数据
              *(undefined8 *)(stack_temp_uint_2 + 0x80 + object_index * 8) = *(undefined8 *)(current_object_ptr + (longlong)current_component);
              has_components = *(byte *)(stack_temp_uint_2 + 0xa8);
              current_object_ptr = (ulonglong)next_component_index;
              object_index = object_index + 1;
              component_index = stack_temp_uint_2;
            } while ((int)next_component_index < (int)(uint)has_components);
          }
          // 清理和更新当前对象状态
          FUN_18038b160(current_object_ptr);
          FUN_18038af00(current_object_ptr);
          
          // 计算当前对象的碰撞标志
          uint collision_flags = collision_index;
          if (*(longlong *)(current_object_ptr + 0xb0) != 0) {
            collision_flags = *(uint *)(*(longlong *)(current_object_ptr + 0xb0) + 0x134);
          }
          if (*(longlong *)(current_object_ptr + 0xb8) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(current_object_ptr + 0xb8) + 0x134);
          }
          if (*(longlong *)(current_object_ptr + 0xc0) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(current_object_ptr + 0xc0) + 0x134);
          }
          if (*(longlong *)(current_object_ptr + 200) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(current_object_ptr + 200) + 0x134);
          }
          
          uint final_collision_flags = 0xffffffff;
          if (collision_flags != 0) {
            final_collision_flags = collision_flags;
          }
          *(uint *)(current_object_ptr + 0x134) = final_collision_flags;
          
          // 清理和更新循环对象状态
          FUN_18038b160(loop_counter);
          FUN_18038af00(loop_counter);
          
          // 计算循环对象的碰撞标志
          collision_flags = collision_index;
          if (*(longlong *)(loop_counter + 0xb0) != 0) {
            collision_flags = *(uint *)(*(longlong *)(loop_counter + 0xb0) + 0x134);
          }
          if (*(longlong *)(loop_counter + 0xb8) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(loop_counter + 0xb8) + 0x134);
          }
          if (*(longlong *)(loop_counter + 0xc0) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(loop_counter + 0xc0) + 0x134);
          }
          if (*(longlong *)(loop_counter + 200) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(loop_counter + 200) + 0x134);
          }
          
          final_collision_flags = 0xffffffff;
          if (collision_flags != 0) {
            final_collision_flags = collision_flags;
          }
          *(uint *)(loop_counter + 0x134) = final_collision_flags;
          
          // 清理和更新目标对象状态
          FUN_18038b160(target_object_ptr);
          FUN_18038af00(target_object_ptr);
          
          // 计算目标对象的碰撞标志
          collision_flags = best_collision_index;
          if (*(longlong *)(target_object_ptr + 0xb0) != 0) {
            collision_flags = *(uint *)(*(longlong *)(target_object_ptr + 0xb0) + 0x134);
          }
          if (*(longlong *)(target_object_ptr + 0xb8) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(target_object_ptr + 0xb8) + 0x134);
          }
          if (*(longlong *)(target_object_ptr + 0xc0) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(target_object_ptr + 0xc0) + 0x134);
          }
          if (*(longlong *)(target_object_ptr + 200) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(target_object_ptr + 200) + 0x134);
          }
          
          final_collision_flags = 0xffffffff;
          if (collision_flags != 0) {
            final_collision_flags = collision_flags;
          }
          *(uint *)(target_object_ptr + 0x134) = final_collision_flags;
          
          // 清理和更新连接对象状态
          FUN_18038b160(stack_temp_uint_2);
          undefined8 collision_context = FUN_18038af00(stack_temp_uint_2);
          
          // 计算连接对象的碰撞标志
          collision_flags = best_collision_index;
          if (*(longlong *)(stack_temp_uint_2 + 0xb0) != 0) {
            collision_flags = *(uint *)(*(longlong *)(stack_temp_uint_2 + 0xb0) + 0x134);
          }
          if (*(longlong *)(stack_temp_uint_2 + 0xb8) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(stack_temp_uint_2 + 0xb8) + 0x134);
          }
          if (*(longlong *)(stack_temp_uint_2 + 0xc0) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(stack_temp_uint_2 + 0xc0) + 0x134);
          }
          if (*(longlong *)(stack_temp_uint_2 + 200) != 0) {
            collision_flags = collision_flags | *(uint *)(*(longlong *)(stack_temp_uint_2 + 200) + 0x134);
          }
          
          final_collision_flags = 0xffffffff;
          if (collision_flags != 0) {
            final_collision_flags = collision_flags;
          }
          *(uint *)(stack_temp_uint_2 + 0x134) = final_collision_flags;
          
          // 更新碰撞上下文和对象关系
          collision_context = FUN_18038ee20(collision_context, current_object_ptr, 0xffffffff);
          collision_context = FUN_18038ee20(collision_context, loop_counter, 0xffffffff);
          collision_context = FUN_18038ee20(collision_context, target_object_ptr, 0xffffffff);
          collision_context = FUN_18038ee20(collision_context, stack_temp_uint_2, 0xffffffff);
          
          // 更新渲染上下文中的碰撞计数
          *(int *)(render_context + 0x530) = *(int *)(render_context + 0x530) + 1;
          collision_context = FUN_18038ee20(collision_context, current_object_ptr, *(undefined4 *)(render_context + 0x530));
          *(int *)(render_context + 0x530) = *(int *)(render_context + 0x530) + 1;
          FUN_18038ee20(collision_context, loop_counter, *(undefined4 *)(render_context + 0x530));
        }
      }
    }
  }
  return;
}





