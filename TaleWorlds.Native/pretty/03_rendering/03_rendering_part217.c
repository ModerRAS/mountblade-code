#include "TaleWorlds.Native.Split.h"

// 03_rendering_part217.c - 渲染系统高级碰撞检测和几何处理模块
// 包含1个核心函数：rendering_system_advanced_collision_detection

/**
 * 渲染系统高级碰撞检测和几何处理函数
 * 
 * 该函数实现了一个复杂的碰撞检测系统，用于处理三个不同类型的渲染对象之间的碰撞关系。
 * 主要功能包括：
 * 1. 遍历渲染对象数组，寻找符合特定条件的对象组合
 * 2. 计算对象间的几何关系和碰撞参数
 * 3. 处理对象的连接关系和状态更新
 * 4. 管理对象的内存分配和释放
 * 
 * @param render_context 渲染上下文指针，包含全局渲染状态和对象数组
 * @param object_type_id 第一个对象类型标识符
 * @param object_type_id2 第二个对象类型标识符  
 * @param object_type_id3 第三个对象类型标识符
 */
void rendering_system_advanced_collision_detection(longlong render_context, int object_type_id, int object_type_id2, int object_type_id3)
{
  byte object_has_connections;
  undefined8 *connection_array_ptr;
  float *float_ptr;
  undefined8 *connection_array_ptr2;
  longlong target_object_ptr;
  longlong source_object_ptr;
  longlong collision_object_ptr;
  longlong temp_object_ptr;
  longlong best_object_ptr;
  bool collision_detected;
  longlong *object_link_ptr;
  ulonglong iteration_count;
  int object_type;
  int best_object_index;
  uint best_connection_index;
  uint current_connection_index;
  ulonglong min_distance_squared;
  undefined8 *edge_array_ptr;
  int edge_index;
  ulonglong edge_count;
  uint temp_uint;
  ulonglong temp_ulong;
  ulonglong distance_squared;
  undefined8 *edge_array_ptr2;
  bool edge_valid;
  ulonglong edge_index2;
  longlong *object_link_ptr2;
  undefined8 *object_array_ptr;
  longlong *object_link_ptr3;
  int temp_int;
  uint connection_index;
  longlong object_data_ptr;
  ulonglong *object_data_array_ptr;
  ulonglong object_data_ulong;
  uint object_data_uint;
  int collision_index;
  longlong *collision_ptr;
  ulonglong collision_ulong;
  char temp_char;
  undefined4 temp_undefined4;
  float distance_float;
  undefined1 temp_array [16];
  float vector_x;
  float vector_y;
  float center_x;
  float center_y;
  float min_distance;
  float current_min_distance;
  float best_distance;
  float temp_float1;
  float temp_float2;
  float temp_float3;
  float temp_float4;
  float temp_float5;
  float temp_float6;
  float temp_float7;
  float temp_float8;
  float temp_float9;
  float temp_float10;
  char stack_char;
  uint stack_uint;
  int stack_int;
  ulonglong stack_ulong;
  float stack_float;
  uint stack_uint2;
  ulonglong temp_ulong2;
  
  // 获取渲染对象数组指针和数量
  object_data_array_ptr = *(ulonglong **)(render_context + 0x478);
  min_distance_squared = 0;
  current_connection_index = 0;
  best_connection_index = 0;
  object_count = *(longlong *)(render_context + 0x480) - (longlong)object_data_array_ptr >> 3;
  source_object_ptr = min_distance_squared;
  collision_object_ptr = min_distance_squared;
  target_object_ptr = min_distance_squared;
  object_data_ulong = min_distance_squared;
  
  // 遍历所有渲染对象，寻找符合条件的对象组合
  if (object_count != 0) {
    do {
      temp_ulong2 = *object_data_array_ptr;
      object_type = *(int *)(temp_ulong2 + 0x130);
      temp_ulong = temp_ulong2;
      collision_ulong = object_data_ulong;
      if (((object_type_id != object_type) && (temp_ulong = source_object_ptr, collision_ulong = temp_ulong2, object_type_id2 != object_type)) &&
         (collision_ulong = object_data_ulong, object_type_id3 == object_type)) {
        collision_object_ptr = temp_ulong2;
      }
      if (((temp_ulong != 0) && (collision_ulong != 0)) && (collision_object_ptr != 0)) break;
      connection_index = (int)target_object_ptr + 1;
      target_object_ptr = (ulonglong)connection_index;
      object_data_array_ptr = object_data_array_ptr + 1;
      source_object_ptr = temp_ulong;
      object_data_ulong = collision_ulong;
    } while ((ulonglong)(longlong)(int)connection_index < object_count);
    
    // 如果找到三个符合条件的对象，则进行碰撞检测处理
    if (((temp_ulong != 0) && (collision_ulong != 0)) && (collision_object_ptr != 0)) {
      connection_index = 0xffffffff;
      stack_char = false;
      best_object_index = -1;
      current_min_distance = 10000.0;
      object_has_connections = *(byte *)(temp_ulong + 0xa8);
      best_object_index = -1;
      stack_uint2 = 0xffffffff;
      object_type = -1;
      stack_int = -1;
      stack_ulong = 0;
      stack_char = false;
      stack_uint = 0;
      
      // 处理源对象的连接关系
      if (object_has_connections != 0) {
        edge_array_ptr = (undefined8 *)(temp_ulong + 0x60);
        source_object_ptr = min_distance_squared;
        target_object_ptr = min_distance_squared;
        do {
          temp_uint = (uint)source_object_ptr;
          connection_array_ptr = (undefined8 *)*edge_array_ptr;
          if (*(char *)(connection_array_ptr + 4) == '\x02') {
            source_object_ptr = connection_array_ptr[2];
            if (source_object_ptr == temp_ulong) {
              source_object_ptr = connection_array_ptr[3];
            }
            float_ptr = (float *)connection_array_ptr[1];
            edge_valid = false;
            min_distance_squared = 0xffffffff;
            collision_index = -1;
            object_data_ulong = 0xffffffff;
            edge_index = -1;
            best_distance = 10001.0;
            vector_x = *(float *)*connection_array_ptr;
            vector_y = ((float *)*connection_array_ptr)[1];
            temp_float9 = *float_ptr - vector_x;
            temp_float8 = vector_y - float_ptr[1];
            temp_float10 = (vector_x + *float_ptr) * 0.5;
            current_min_distance = (vector_y + float_ptr[1]) * 0.5;
            distance_squared = temp_float9 * temp_float9 + temp_float8 * temp_float8;
            temp_array = rsqrtss(ZEXT416((uint)distance_squared),ZEXT416((uint)distance_squared));
            vector_y = temp_array._0_4_;
            distance_squared = vector_y * 0.5 * (3.0 - distance_squared * vector_y * vector_y);
            temp_float8 = temp_float8 * distance_squared;
            temp_float9 = temp_float9 * distance_squared;
            
            // 计算向量方向
            if (0.0 < (*(float *)(temp_ulong + 0xec) - current_min_distance) * temp_float9 +
                      (*(float *)(temp_ulong + 0xe8) - temp_float10) * temp_float8) {
              temp_float8 = -temp_float8;
              temp_float9 = -temp_float9;
            }
            
            // 检查碰撞对象的连接关系
            if (*(byte *)(source_object_ptr + 0xa8) != 0) {
              edge_array_ptr2 = (undefined8 *)(source_object_ptr + 0x60);
              temp_ulong2 = min_distance_squared;
              do {
                object_array_ptr = (undefined8 *)*edge_array_ptr2;
                if (((*(char *)(object_array_ptr + 4) == '\x02') && (object_array_ptr != connection_array_ptr)) &&
                   (((object_array_ptr[2] == collision_ulong || (object_array_ptr[3] == collision_ulong)) &&
                    (*(byte *)(collision_object_ptr + 0xa8) != 0)))) {
                  object_array_ptr = (undefined8 *)(collision_object_ptr + 0x60);
                  target_object_ptr = min_distance_squared;
                  do {
                    connection_array_ptr2 = (undefined8 *)*object_array_ptr;
                    if (*(char *)(connection_array_ptr2 + 4) != '\x02') {
                      float_ptr = (float *)connection_array_ptr2[1];
                      vector_x = *(float *)*connection_array_ptr2;
                      vector_y = ((float *)*connection_array_ptr2)[1];
                      temp_float6 = vector_y - float_ptr[1];
                      temp_float7 = *float_ptr - vector_x;
                      center_x = (vector_x + *float_ptr) * 0.5;
                      center_y = (vector_y + float_ptr[1]) * 0.5;
                      distance_squared = temp_float7 * temp_float7 + temp_float6 * temp_float6;
                      temp_array = rsqrtss(ZEXT416((uint)distance_squared),ZEXT416((uint)distance_squared));
                      vector_y = temp_array._0_4_;
                      distance_squared = vector_y * 0.5 * (3.0 - distance_squared * vector_y * vector_y);
                      temp_float7 = distance_squared * temp_float7;
                      distance_squared = distance_squared * temp_float6;
                      edge_valid = 0.0 < (*(float *)(collision_object_ptr + 0xec) - center_y) * temp_float7 +
                                     (*(float *)(collision_object_ptr + 0xe8) - center_x) * distance_squared;
                      if (edge_valid) {
                        distance_squared = -distance_squared;
                        temp_float7 = -temp_float7;
                      }
                      
                      // 检查碰撞条件
                      if (temp_float7 * temp_float9 + distance_squared * temp_float8 <= -0.3) {
                        center_x = center_x - temp_float10;
                        center_y = center_y - current_min_distance;
                        vector_y = center_y * center_y + center_x * center_x;
                        temp_array = rsqrtss(ZEXT416((uint)vector_y),ZEXT416((uint)vector_y));
                        distance_squared = temp_array._0_4_;
                        distance_squared = distance_squared * 0.5 * (3.0 - vector_y * distance_squared * distance_squared);
                        distance_squared = distance_squared * center_y * temp_float9 + distance_squared * center_x * temp_float8;
                        if ((0.1 <= distance_squared) && (vector_y = vector_y / distance_squared, vector_y < best_distance)) {
                          object_data_ulong = target_object_ptr;
                          min_distance_squared = temp_ulong2;
                          best_distance = vector_y;
                          edge_valid = edge_valid;
                        }
                      }
                    }
                    connection_index = (int)target_object_ptr + 1;
                    target_object_ptr = (ulonglong)connection_index;
                    object_array_ptr = object_array_ptr + 1;
                  } while ((int)connection_index < (int)(uint)*(byte *)(collision_object_ptr + 0xa8));
                }
                collision_index = (int)min_distance_squared;
                edge_index = (int)object_data_ulong;
                temp_uint = (int)temp_ulong2 + 1;
                temp_ulong2 = (ulonglong)temp_uint;
                edge_array_ptr2 = edge_array_ptr2 + 1;
                target_object_ptr = stack_ulong;
                connection_index = stack_uint2;
                temp_uint = stack_uint;
              } while ((int)temp_uint < (int)(uint)*(byte *)(source_object_ptr + 0xa8));
            }
            best_object_index = object_type;
            best_object_index = stack_int;
            object_has_connections = stack_char;
            if (best_distance < current_min_distance) {
              target_object_ptr = source_object_ptr;
              best_object_index = collision_index;
              best_object_index = edge_index;
              object_has_connections = edge_valid;
              connection_index = temp_uint;
              stack_char = edge_valid;
              stack_ulong = source_object_ptr;
              current_min_distance = best_distance;
              stack_uint2 = temp_uint;
              stack_int = edge_index;
              object_type = collision_index;
            }
          }
          stack_uint = temp_uint + 1;
          source_object_ptr = (ulonglong)stack_uint;
          edge_array_ptr = edge_array_ptr + 1;
        } while ((int)stack_uint < (int)(uint)object_has_connections);
        
        // 如果找到有效的碰撞关系，则进行处理
        if (((((-1 < (int)connection_index) && ((int)connection_index < (int)(uint)object_has_connections)) && (-1 < best_object_index)) &&
            ((best_object_index < (int)(uint)*(byte *)(collision_ulong + 0xa8) && (-1 < best_object_index)))) &&
           ((best_object_index < (int)(uint)*(byte *)(collision_object_ptr + 0xa8) && (target_object_ptr != 0)))) {
          stack_uint = 0;
          temp_object_ptr = *(longlong *)(temp_ulong + 0x60 + (longlong)(int)connection_index * 8);
          best_object_ptr = *(longlong *)(collision_object_ptr + 0x60 + (longlong)best_object_index * 8);
          object_has_connections = *(byte *)(target_object_ptr + 0xa8);
          collision_object_ptr = *(longlong *)(target_object_ptr + 0x60 + (longlong)best_object_index * 8);
          
          // 处理目标对象的连接关系
          if (object_has_connections != 0) {
            object_link_ptr3 = (longlong *)(target_object_ptr + 0x60);
            source_object_ptr = min_distance_squared;
            temp_object_ptr2 = collision_object_ptr;
            do {
              connection_index = (uint)source_object_ptr;
              object_link_ptr = (longlong *)*object_link_ptr3;
              if ((object_link_ptr[2] != temp_ulong) && (((char)object_link_ptr[4] != '\x02' || (object_link_ptr[3] != temp_ulong)))
                 ) {
                if (object_link_ptr[2] != collision_ulong) {
                  if (((char)object_link_ptr[4] != '\x02') || (object_link_ptr[3] != collision_ulong)) {
                    source_object_ptr = min_distance_squared;
                    object_data_ulong = min_distance_squared;
                    do {
                      connection_index = (uint)object_data_ulong;
                      if (*object_link_ptr == *(longlong *)(temp_object_ptr + source_object_ptr * 8)) break;
                      object_data_ulong = (ulonglong)((uint)object_data_ulong + 1);
                      source_object_ptr = source_object_ptr + 1;
                      connection_index = 0xffffffff;
                    } while ((longlong)source_object_ptr < 2);
                    source_object_ptr = min_distance_squared;
                    object_data_ulong = min_distance_squared;
                    do {
                      min_distance_squared = min_distance_squared;
                      temp_uint = (uint)object_data_ulong;
                      if (object_link_ptr[1] == *(longlong *)(temp_object_ptr + source_object_ptr * 8)) break;
                      object_data_ulong = (ulonglong)((uint)object_data_ulong + 1);
                      source_object_ptr = source_object_ptr + 1;
                      temp_uint = connection_index;
                    } while ((longlong)source_object_ptr < 2);
                    do {
                      temp_object_ptr = object_link_ptr[min_distance_squared];
                      object_link_ptr2 = object_link_ptr;
                      source_object_ptr = min_distance_squared;
                      do {
                        object_link_ptr = object_link_ptr2;
                        if (temp_object_ptr == *(longlong *)(temp_object_ptr2 + source_object_ptr * 8)) {
                          edge_valid = object_has_connections == '\0';
                          if ((char)object_link_ptr2[4] == '\x02') {
                            if (object_link_ptr2[2] == target_object_ptr) {
                              object_link_ptr2[2] = object_link_ptr2[3];
                            }
                            object_link_ptr2[3] = 0;
                            *(undefined1 *)(object_link_ptr2 + 4) = 0;
                            if (object_link_ptr2[2] != 0) {
                              *(undefined1 *)(object_link_ptr2 + 4) = 1;
                            }
                            FUN_18038b160(object_link_ptr2[2]);
                          }
                          else {
                            FUN_18038d8f0(render_context,object_link_ptr2);
                          }
                          collision_ptr = object_link_ptr2;
                          if (min_distance_squared == 0) {
                            if (edge_valid) {
                              collision_ptr = (longlong *)((longlong)(int)(uint)(temp_uint == 0) * 8 + best_object_ptr)
                              ;
                            }
                            else {
                              collision_ptr = (longlong *)((longlong)(int)temp_uint * 8 + best_object_ptr);
                            }
                          }
                          if (min_distance_squared == 1) {
                            if (edge_valid) {
                              temp_object_ptr2 = *(longlong *)(best_object_ptr + (longlong)(int)(uint)(temp_uint == 0) * 8)
                              ;
                            }
                            else {
                              temp_object_ptr2 = *(longlong *)(best_object_ptr + (longlong)(int)temp_uint * 8);
                            }
                          }
                          else {
                            temp_object_ptr2 = object_link_ptr2[1];
                          }
                          edge_array_ptr = *(undefined8 **)(render_context + 0x458);
                          object_data_ulong = *(longlong *)(render_context + 0x460) - (longlong)edge_array_ptr >> 3;
                          target_object_ptr = min_distance_squared;
                          if (object_data_ulong != 0) {
                            do {
                              object_link_ptr = (longlong *)*edge_array_ptr;
                              if (((*object_link_ptr == *collision_ptr) && (object_link_ptr[1] == temp_object_ptr2)) ||
                                 ((*object_link_ptr == temp_object_ptr2 && (object_link_ptr[1] == *collision_ptr)))) {
                                *(undefined1 *)(object_link_ptr + 4) = 2;
                                object_link_ptr[3] = stack_ulong;
                                *object_link_ptr3 = (longlong)object_link_ptr;
                                FUN_18038b160(object_link_ptr[2]);
                                temp_object_ptr2 = collision_object_ptr;
                                target_object_ptr = stack_ulong;
                                goto LAB_1803922c3;
                              }
                              connection_index = (int)target_object_ptr + 1;
                              target_object_ptr = (ulonglong)connection_index;
                              edge_array_ptr = edge_array_ptr + 1;
                            } while ((ulonglong)(longlong)(int)connection_index < object_data_ulong);
                          }
                          if (min_distance_squared == 1) {
                            if (edge_valid) {
                              temp_object_ptr2 = *(longlong *)(best_object_ptr + (longlong)(int)(uint)(temp_uint == 0) * 8)
                              ;
                            }
                            else {
                              temp_object_ptr2 = *(longlong *)(best_object_ptr + (longlong)(int)temp_uint * 8);
                            }
                          }
                          else {
                            temp_object_ptr2 = object_link_ptr2[1];
                            if (min_distance_squared == 0) {
                              connection_index = temp_uint;
                              if (edge_valid) {
                                connection_index = (uint)(temp_uint == 0);
                              }
                              object_link_ptr2 = (longlong *)((longlong)(int)connection_index * 8 + best_object_ptr);
                            }
                          }
                          best_object_ptr = *object_link_ptr2;
                          object_link_ptr = (longlong *)FUN_18038c180(render_context);
                          object_link_ptr[1] = temp_object_ptr2;
                          *object_link_ptr = best_object_ptr;
                          *(undefined1 *)(object_link_ptr + 4) = 1;
                          object_link_ptr[2] = stack_ulong;
                          *object_link_ptr3 = (longlong)object_link_ptr;
                          temp_object_ptr2 = collision_object_ptr;
                          target_object_ptr = stack_ulong;
                        }
LAB_1803922c3:
                        source_object_ptr = source_object_ptr + 1;
                        object_link_ptr2 = object_link_ptr;
                        object_has_connections = stack_char;
                      } while ((longlong)source_object_ptr < 2);
                      min_distance_squared = min_distance_squared + 1;
                      connection_index = stack_uint;
                    } while ((longlong)min_distance_squared < 2);
                    goto LAB_180392028;
                  }
                  object_link_ptr[2] = collision_ulong;
                }
                *(undefined1 *)(object_link_ptr + 4) = 1;
                object_link_ptr[3] = 0;
                func_0x00018038ac80(object_link_ptr);
                *object_link_ptr3 = best_object_ptr;
                *(undefined1 *)(best_object_ptr + 0x20) = 2;
                *(ulonglong *)(best_object_ptr + 0x18) = target_object_ptr;
              }
LAB_180392028:
              object_has_connections = *(byte *)(target_object_ptr + 0xa8);
              stack_uint = connection_index + 1;
              source_object_ptr = (ulonglong)stack_uint;
              object_link_ptr3 = object_link_ptr3 + 1;
              object_has_connections = stack_char;
            } while ((int)stack_uint < (int)(uint)object_has_connections);
          }
          
          // 更新目标对象的状态
          if (object_has_connections != 0) {
            object_link_ptr3 = (longlong *)(target_object_ptr + 0x60);
            source_object_ptr = min_distance_squared;
            do {
              temp_object_ptr = *object_link_ptr3;
              *(undefined1 *)(temp_object_ptr + 0x20) = 0;
              object_has_connections = *(longlong *)(temp_object_ptr + 0x10) != 0;
              if ((bool)object_has_connections) {
                *(undefined1 *)(temp_object_ptr + 0x20) = 1;
              }
              if (*(longlong *)(temp_object_ptr + 0x18) != 0) {
                object_has_connections = object_has_connections + '\x01';
                *(char *)(temp_object_ptr + 0x20) = object_has_connections;
              }
              if ((object_has_connections == '\x01') && (*(longlong *)(temp_object_ptr + 0x18) != 0)) {
                *(longlong *)(temp_object_ptr + 0x10) = *(longlong *)(temp_object_ptr + 0x18);
                *(undefined8 *)(temp_object_ptr + 0x18) = 0;
              }
              object_has_connections = *(byte *)(target_object_ptr + 0xa8);
              connection_index = (int)source_object_ptr + 1;
              source_object_ptr = (ulonglong)connection_index;
              object_link_ptr3 = object_link_ptr3 + 1;
            } while ((int)connection_index < (int)(uint)object_has_connections);
          }
          
          // 处理对象间的连接关系
          source_object_ptr = min_distance_squared;
          object_data_ulong = min_distance_squared;
          if (object_has_connections != 0) {
            do {
              object_link_ptr3 = *(longlong **)(target_object_ptr + 0x60 + object_data_ulong * 8);
              connection_index = (int)source_object_ptr + 1;
              source_object_ptr = min_distance_squared;
              if (connection_index != object_has_connections) {
                source_object_ptr = object_data_ulong + 1;
              }
              object_link_ptr = *(longlong **)(target_object_ptr + 0x60 + source_object_ptr * 8);
              if ((*object_link_ptr3 == *object_link_ptr) || (object_type = -1, *object_link_ptr3 == object_link_ptr[1])) {
                object_type = 0;
              }
              if ((object_link_ptr3[1] == *object_link_ptr) || (object_link_ptr3[1] == object_link_ptr[1])) {
                object_type = 1;
              }
              source_object_ptr = min_distance_squared;
              if (object_type == 0) {
                source_object_ptr = 8;
              }
              *(undefined8 *)(stack_ulong + 0x80 + object_data_ulong * 8) =
                   *(undefined8 *)(source_object_ptr + (longlong)object_link_ptr3);
              object_has_connections = *(byte *)(stack_ulong + 0xa8);
              source_object_ptr = (ulonglong)connection_index;
              object_data_ulong = object_data_ulong + 1;
              target_object_ptr = stack_ulong;
            } while ((int)connection_index < (int)(uint)object_has_connections);
          }
          
          // 清理和处理对象资源
          FUN_18038b160(temp_ulong);
          FUN_18038af00(temp_ulong);
          connection_index = best_connection_index;
          if (*(longlong *)(temp_ulong + 0xb0) != 0) {
            connection_index = *(uint *)(*(longlong *)(temp_ulong + 0xb0) + 0x134);
          }
          if (*(longlong *)(temp_ulong + 0xb8) != 0) {
            connection_index = connection_index | *(uint *)(*(longlong *)(temp_ulong + 0xb8) + 0x134);
          }
          if (*(longlong *)(temp_ulong + 0xc0) != 0) {
            connection_index = connection_index | *(uint *)(*(longlong *)(temp_ulong + 0xc0) + 0x134);
          }
          if (*(longlong *)(temp_ulong + 200) != 0) {
            connection_index = connection_index | *(uint *)(*(longlong *)(temp_ulong + 200) + 0x134);
          }
          temp_uint = 0xffffffff;
          if (connection_index != 0) {
            temp_uint = connection_index;
          }
          *(uint *)(temp_ulong + 0x134) = temp_uint;
          
          FUN_18038b160(collision_ulong);
          FUN_18038af00(collision_ulong);
          if (*(longlong *)(collision_ulong + 0xb0) != 0) {
            best_connection_index = *(uint *)(*(longlong *)(collision_ulong + 0xb0) + 0x134);
          }
          if (*(longlong *)(collision_ulong + 0xb8) != 0) {
            best_connection_index = best_connection_index | *(uint *)(*(longlong *)(collision_ulong + 0xb8) + 0x134);
          }
          if (*(longlong *)(collision_ulong + 0xc0) != 0) {
            best_connection_index = best_connection_index | *(uint *)(*(longlong *)(collision_ulong + 0xc0) + 0x134);
          }
          if (*(longlong *)(collision_ulong + 200) != 0) {
            best_connection_index = best_connection_index | *(uint *)(*(longlong *)(collision_ulong + 200) + 0x134);
          }
          connection_index = 0xffffffff;
          if (best_connection_index != 0) {
            connection_index = best_connection_index;
          }
          *(uint *)(collision_ulong + 0x134) = connection_index;
          
          FUN_18038b160(collision_object_ptr);
          FUN_18038af00(collision_object_ptr);
          best_connection_index = current_connection_index;
          if (*(longlong *)(collision_object_ptr + 0xb0) != 0) {
            best_connection_index = *(uint *)(*(longlong *)(collision_object_ptr + 0xb0) + 0x134);
          }
          if (*(longlong *)(collision_object_ptr + 0xb8) != 0) {
            best_connection_index = best_connection_index | *(uint *)(*(longlong *)(collision_object_ptr + 0xb8) + 0x134);
          }
          if (*(longlong *)(collision_object_ptr + 0xc0) != 0) {
            best_connection_index = best_connection_index | *(uint *)(*(longlong *)(collision_object_ptr + 0xc0) + 0x134);
          }
          if (*(longlong *)(collision_object_ptr + 200) != 0) {
            best_connection_index = best_connection_index | *(uint *)(*(longlong *)(collision_object_ptr + 200) + 0x134);
          }
          connection_index = 0xffffffff;
          if (best_connection_index != 0) {
            connection_index = best_connection_index;
          }
          *(uint *)(collision_object_ptr + 0x134) = connection_index;
          
          FUN_18038b160(stack_ulong);
          temp_undefined4 = FUN_18038af00(stack_ulong);
          if (*(longlong *)(stack_ulong + 0xb0) != 0) {
            current_connection_index = *(uint *)(*(longlong *)(stack_ulong + 0xb0) + 0x134);
          }
          if (*(longlong *)(stack_ulong + 0xb8) != 0) {
            current_connection_index = current_connection_index | *(uint *)(*(longlong *)(stack_ulong + 0xb8) + 0x134);
          }
          if (*(longlong *)(stack_ulong + 0xc0) != 0) {
            current_connection_index = current_connection_index | *(uint *)(*(longlong *)(stack_ulong + 0xc0) + 0x134);
          }
          if (*(longlong *)(stack_ulong + 200) != 0) {
            current_connection_index = current_connection_index | *(uint *)(*(longlong *)(stack_ulong + 200) + 0x134);
          }
          best_connection_index = 0xffffffff;
          if (current_connection_index != 0) {
            best_connection_index = current_connection_index;
          }
          *(uint *)(stack_ulong + 0x134) = best_connection_index;
          
          // 执行最终的渲染操作
          temp_undefined4 = FUN_18038ee20(temp_undefined4,temp_ulong,0xffffffff);
          temp_undefined4 = FUN_18038ee20(temp_undefined4,collision_ulong,0xffffffff);
          temp_undefined4 = FUN_18038ee20(temp_undefined4,collision_object_ptr,0xffffffff);
          temp_undefined4 = FUN_18038ee20(temp_undefined4,stack_ulong,0xffffffff);
          *(int *)(render_context + 0x530) = *(int *)(render_context + 0x530) + 1;
          temp_undefined4 = FUN_18038ee20(temp_undefined4,temp_ulong,*(undefined4 *)(render_context + 0x530));
          *(int *)(render_context + 0x530) = *(int *)(render_context + 0x530) + 1;
          FUN_18038ee20(temp_undefined4,collision_ulong,*(undefined4 *)(render_context + 0x530));
        }
      }
    }
  }
  return;
}