#include "TaleWorlds.Native.Split.h"

// 03_rendering_part217.c - 渲染系统高级碰撞检测和几何处理模块
// 该模块包含复杂的碰撞检测算法，用于处理渲染对象之间的几何关系计算

// 函数: 渲染系统高级碰撞检测和几何处理
// 功能: 
// 1. 在渲染对象数组中查找符合条件的三个对象
// 2. 计算对象之间的几何关系和碰撞检测
// 3. 处理对象连接关系和内存分配
// 4. 更新渲染状态和标志位
// 参数:
//   param_1 - 渲染系统上下文指针
//   param_2 - 第一个对象类型标识符
//   param_3 - 第二个对象类型标识符  
//   param_4 - 第三个对象类型标识符
void rendering_system_advanced_collision_detection(longlong render_context, int object_type_a, int object_type_b, int object_type_c)

{
  byte temp_flag_1;
  undefined8 *object_ptr_1;
  float *float_ptr_1;
  undefined8 *object_ptr_2;
  longlong temp_long_1;
  longlong temp_long_2;
  longlong temp_long_3;
  longlong temp_long_4;
  longlong temp_long_5;
  bool collision_flag_1;
  longlong *long_ptr_1;
  ulonglong temp_ulong_1;
  int temp_int_1;
  int temp_int_2;
  uint temp_uint_1;
  uint temp_uint_2;
  ulonglong temp_ulong_2;
  undefined8 *object_ptr_3;
  int temp_int_3;
  ulonglong temp_ulong_3;
  uint temp_uint_3;
  ulonglong temp_ulong_4;
  ulonglong temp_ulong_5;
  undefined8 *object_ptr_4;
  bool collision_flag_2;
  ulonglong temp_ulong_6;
  longlong *long_ptr_2;
  undefined8 *object_ptr_5;
  longlong *long_ptr_3;
  int temp_int_4;
  uint temp_uint_4;
  longlong temp_long_6;
  ulonglong *ulong_ptr_1;
  ulonglong temp_ulong_7;
  uint temp_uint_5;
  int temp_int_5;
  longlong *long_ptr_4;
  ulonglong temp_ulong_8;
  char temp_char_1;
  undefined4 temp_uint_6;
  float distance_1;
  undefined1 temp_array_1 [16];
  float coord_x_1;
  float coord_y_1;
  float coord_x_2;
  float coord_y_2;
  float coord_x_3;
  float coord_y_3;
  float coord_x_4;
  float coord_y_4;
  char stack_char_1;
  uint stack_uint_1;
  int stack_int_1;
  ulonglong stack_ulong_1;
  float min_distance;
  uint stack_uint_2;
  ulonglong temp_ulong_9;
  
  // 获取渲染对象数组指针和数量
  ulong_ptr_1 = *(ulonglong **)(render_context + 0x478);
  temp_ulong_2 = 0;
  temp_ulong_9 = 0;
  temp_uint_1 = 0;
  temp_ulong_3 = *(longlong *)(render_context + 0x480) - (longlong)ulong_ptr_1 >> 3;
  temp_ulong_1 = temp_ulong_2;
  temp_ulong_6 = temp_ulong_2;
  temp_ulong_5 = temp_ulong_2;
  temp_ulong_7 = temp_ulong_2;
  
  // 第一阶段：在对象数组中查找符合条件的三个对象
  if (temp_ulong_3 != 0) {
    do {
      temp_ulong_9 = *ulong_ptr_1;
      temp_int_2 = *(int *)(temp_ulong_9 + 0x130);
      temp_ulong_5 = temp_ulong_9;
      temp_ulong_8 = temp_ulong_7;
      if (((object_type_a != temp_int_2) && (temp_ulong_5 = temp_ulong_1, temp_ulong_8 = temp_ulong_9, object_type_b != temp_int_2)) &&
         (temp_ulong_8 = temp_ulong_7, object_type_c == temp_int_2)) {
        temp_ulong_6 = temp_ulong_9;
      }
      if (((temp_ulong_5 != 0) && (temp_ulong_8 != 0)) && (temp_ulong_6 != 0)) break;
      temp_uint_5 = (int)temp_ulong_5 + 1;
      temp_ulong_5 = (ulonglong)temp_uint_5;
      ulong_ptr_1 = ulong_ptr_1 + 1;
      temp_ulong_1 = temp_ulong_5;
      temp_ulong_7 = temp_ulong_8;
    } while ((ulonglong)(longlong)(int)temp_uint_5 < temp_ulong_3);
    
    // 第二阶段：如果找到三个符合条件的对象，进行碰撞检测计算
    if (((temp_ulong_5 != 0) && (temp_ulong_8 != 0)) && (temp_ulong_6 != 0)) {
      temp_uint_5 = 0xffffffff;
      temp_char_1 = false;
      temp_int_1 = -1;
      min_distance = 10000.0;
      temp_flag_1 = *(byte *)(temp_ulong_5 + 0xa8);
      temp_int_4 = -1;
      stack_uint_2 = 0xffffffff;
      temp_int_2 = -1;
      stack_int_1 = -1;
      stack_ulong_1 = 0;
      stack_char_1 = false;
      stack_uint_1 = 0;
      
      // 第三阶段：计算对象间的几何关系
      if (temp_flag_1 != 0) {
        object_ptr_3 = (undefined8 *)(temp_ulong_5 + 0x60);
        temp_ulong_1 = temp_ulong_2;
        temp_ulong_5 = temp_ulong_2;
        do {
          temp_uint_2 = (uint)temp_ulong_1;
          object_ptr_1 = (undefined8 *)*object_ptr_3;
          if (*(char *)(object_ptr_1 + 4) == '\x02') {
            temp_ulong_1 = object_ptr_1[2];
            if (temp_ulong_1 == temp_ulong_5) {
              temp_ulong_1 = object_ptr_1[3];
            }
            float_ptr_1 = (float *)object_ptr_1[1];
            collision_flag_2 = false;
            temp_ulong_3 = 0xffffffff;
            temp_int_5 = -1;
            temp_ulong_7 = 0xffffffff;
            temp_int_3 = -1;
            coord_y_2 = 10001.0;
            distance_1 = *(float *)*object_ptr_1;
            coord_y_1 = ((float *)*object_ptr_1)[1];
            coord_y_4 = *float_ptr_1 - distance_1;
            coord_x_4 = coord_y_1 - float_ptr_1[1];
            coord_x_3 = (distance_1 + *float_ptr_1) * 0.5;
            coord_y_3 = (coord_y_1 + float_ptr_1[1]) * 0.5;
            distance_1 = coord_y_4 * coord_y_4 + coord_x_4 * coord_x_4;
            temp_array_1 = rsqrtss(ZEXT416((uint)distance_1),ZEXT416((uint)distance_1));
            coord_y_1 = temp_array_1._0_4_;
            distance_1 = coord_y_1 * 0.5 * (3.0 - distance_1 * coord_y_1 * coord_y_1);
            coord_x_4 = coord_x_4 * distance_1;
            coord_y_4 = coord_y_4 * distance_1;
            
            // 计算方向向量
            if (0.0 < (*(float *)(temp_ulong_5 + 0xec) - coord_y_3) * coord_y_4 +
                      (*(float *)(temp_ulong_5 + 0xe8) - coord_x_3) * coord_x_4) {
              coord_x_4 = -coord_x_4;
              coord_y_4 = -coord_y_4;
            }
            
            // 第四阶段：递归碰撞检测
            if (*(byte *)(temp_ulong_1 + 0xa8) != 0) {
              object_ptr_4 = (undefined8 *)(temp_ulong_1 + 0x60);
              temp_ulong_9 = temp_ulong_2;
              do {
                object_ptr_5 = (undefined8 *)*object_ptr_4;
                if (((*(char *)(object_ptr_5 + 4) == '\x02') && (object_ptr_5 != object_ptr_1)) &&
                   (((object_ptr_5[2] == temp_ulong_8 || (object_ptr_5[3] == temp_ulong_8)) &&
                    (*(byte *)(temp_ulong_6 + 0xa8) != 0)))) {
                  object_ptr_5 = (undefined8 *)(temp_ulong_6 + 0x60);
                  temp_ulong_5 = temp_ulong_2;
                  do {
                    object_ptr_2 = (undefined8 *)*object_ptr_5;
                    if (*(char *)(object_ptr_2 + 4) != '\x02') {
                      float_ptr_1 = (float *)object_ptr_2[1];
                      distance_1 = *(float *)*object_ptr_2;
                      coord_y_1 = ((float *)*object_ptr_2)[1];
                      coord_x_2 = coord_y_1 - float_ptr_1[1];
                      coord_x_1 = *float_ptr_1 - distance_1;
                      coord_x_3 = (distance_1 + *float_ptr_1) * 0.5;
                      coord_y_3 = (coord_y_1 + float_ptr_1[1]) * 0.5;
                      distance_1 = coord_x_1 * coord_x_1 + coord_x_2 * coord_x_2;
                      temp_array_1 = rsqrtss(ZEXT416((uint)distance_1),ZEXT416((uint)distance_1));
                      coord_y_1 = temp_array_1._0_4_;
                      distance_1 = coord_y_1 * 0.5 * (3.0 - distance_1 * coord_y_1 * coord_y_1);
                      coord_x_1 = distance_1 * coord_x_1;
                      distance_1 = distance_1 * coord_x_2;
                      collision_flag_1 = 0.0 < (*(float *)(temp_ulong_6 + 0xec) - coord_y_3) * coord_x_1 +
                                     (*(float *)(temp_ulong_6 + 0xe8) - coord_x_3) * distance_1;
                      if (collision_flag_1) {
                        distance_1 = -distance_1;
                        coord_x_1 = -coord_x_1;
                      }
                      
                      // 碰撞阈值检测
                      if (coord_x_1 * coord_y_4 + distance_1 * coord_x_4 <= -0.3) {
                        coord_x_3 = coord_x_3 - coord_x_3;
                        coord_y_3 = coord_y_3 - coord_y_3;
                        coord_y_1 = coord_y_3 * coord_y_3 + coord_x_3 * coord_x_3;
                        temp_array_1 = rsqrtss(ZEXT416((uint)coord_y_1),ZEXT416((uint)coord_y_1));
                        distance_1 = temp_array_1._0_4_;
                        distance_1 = distance_1 * 0.5 * (3.0 - coord_y_1 * distance_1 * distance_1);
                        distance_1 = distance_1 * coord_y_3 * coord_y_4 + distance_1 * coord_x_3 * coord_x_4;
                        if ((0.1 <= distance_1) && (coord_y_1 = coord_y_1 / distance_1, coord_y_1 < coord_y_2)) {
                          temp_ulong_7 = temp_ulong_5;
                          temp_ulong_3 = temp_ulong_9;
                          coord_y_2 = coord_y_1;
                          collision_flag_2 = collision_flag_1;
                        }
                      }
                    }
                    temp_uint_5 = (int)temp_ulong_5 + 1;
                    temp_ulong_5 = (ulonglong)temp_uint_5;
                    object_ptr_5 = object_ptr_5 + 1;
                  } while ((int)temp_uint_5 < (int)(uint)*(byte *)(temp_ulong_6 + 0xa8));
                }
                temp_int_5 = (int)temp_ulong_3;
                temp_int_3 = (int)temp_ulong_7;
                temp_uint_4 = (int)temp_ulong_9 + 1;
                temp_ulong_9 = (ulonglong)temp_uint_4;
                object_ptr_4 = object_ptr_4 + 1;
                temp_ulong_5 = stack_ulong_1;
                temp_uint_5 = stack_uint_2;
                temp_uint_2 = stack_uint_1;
              } while ((int)temp_uint_4 < (int)(uint)*(byte *)(temp_ulong_1 + 0xa8));
            }
            temp_int_1 = temp_int_2;
            temp_int_4 = stack_int_1;
            temp_char_1 = stack_char_1;
            if (coord_y_2 < min_distance) {
              temp_ulong_5 = temp_ulong_1;
              temp_int_1 = temp_int_5;
              temp_int_4 = temp_int_3;
              temp_char_1 = collision_flag_2;
              temp_uint_5 = temp_uint_2;
              stack_char_1 = collision_flag_2;
              stack_ulong_1 = temp_ulong_1;
              min_distance = coord_y_2;
              stack_uint_2 = temp_uint_2;
              stack_int_1 = temp_int_3;
              temp_int_2 = temp_int_5;
            }
          }
          stack_uint_1 = temp_uint_2 + 1;
          temp_ulong_1 = (ulonglong)stack_uint_1;
          object_ptr_3 = object_ptr_3 + 1;
        } while ((int)stack_uint_1 < (int)(uint)temp_flag_1);
        
        // 第五阶段：处理碰撞响应和对象连接
        if (((((-1 < (int)temp_uint_5) && ((int)temp_uint_5 < (int)(uint)temp_flag_1)) && (-1 < temp_int_1)) &&
            ((temp_int_1 < (int)(uint)*(byte *)(temp_ulong_8 + 0xa8) && (-1 < temp_int_4)))) &&
           ((temp_int_4 < (int)(uint)*(byte *)(temp_ulong_6 + 0xa8) && (temp_ulong_5 != 0)))) {
          stack_uint_1 = 0;
          temp_long_1 = *(longlong *)(temp_ulong_5 + 0x60 + (longlong)(int)temp_uint_5 * 8);
          temp_long_2 = *(longlong *)(temp_ulong_6 + 0x60 + (longlong)temp_int_4 * 8);
          temp_flag_1 = *(byte *)(temp_ulong_5 + 0xa8);
          temp_long_3 = *(longlong *)(temp_ulong_5 + 0x60 + (longlong)temp_int_1 * 8);
          if (temp_flag_1 != 0) {
            long_ptr_3 = (longlong *)(temp_ulong_5 + 0x60);
            temp_ulong_1 = temp_ulong_2;
            temp_long_6 = temp_long_3;
            do {
              temp_uint_5 = (uint)temp_ulong_1;
              long_ptr_1 = (longlong *)*long_ptr_3;
              if ((long_ptr_1[2] != temp_ulong_5) && (((char)long_ptr_1[4] != '\x02' || (long_ptr_1[3] != temp_ulong_5)))
                 ) {
                if (long_ptr_1[2] != temp_ulong_8) {
                  if (((char)long_ptr_1[4] != '\x02') || (long_ptr_1[3] != temp_ulong_8)) {
                    temp_ulong_1 = temp_ulong_2;
                    temp_ulong_7 = temp_ulong_2;
                    do {
                      temp_uint_5 = (uint)temp_ulong_7;
                      if (*long_ptr_1 == *(longlong *)(temp_long_1 + temp_ulong_1 * 8)) break;
                      temp_ulong_7 = (ulonglong)((uint)temp_ulong_7 + 1);
                      temp_ulong_1 = temp_ulong_1 + 1;
                      temp_uint_5 = 0xffffffff;
                    } while ((longlong)temp_ulong_1 < 2);
                    temp_ulong_1 = temp_ulong_2;
                    temp_ulong_7 = temp_ulong_2;
                    do {
                      temp_ulong_3 = temp_ulong_2;
                      temp_uint_2 = (uint)temp_ulong_7;
                      if (long_ptr_1[1] == *(longlong *)(temp_long_1 + temp_ulong_1 * 8)) break;
                      temp_ulong_7 = (ulonglong)((uint)temp_ulong_7 + 1);
                      temp_ulong_1 = temp_ulong_1 + 1;
                      temp_uint_2 = temp_uint_5;
                    } while ((longlong)temp_ulong_1 < 2);
                    do {
                      temp_long_4 = long_ptr_1[temp_ulong_3];
                      long_ptr_2 = long_ptr_1;
                      temp_ulong_1 = temp_ulong_2;
                      do {
                        long_ptr_1 = long_ptr_2;
                        if (temp_long_4 == *(longlong *)(temp_long_6 + temp_ulong_1 * 8)) {
                          collision_flag_2 = temp_char_1 == '\0';
                          if ((char)long_ptr_2[4] == '\x02') {
                            if (long_ptr_2[2] == temp_ulong_5) {
                              long_ptr_2[2] = long_ptr_2[3];
                            }
                            long_ptr_2[3] = 0;
                            *(undefined1 *)(long_ptr_2 + 4) = 0;
                            if (long_ptr_2[2] != 0) {
                              *(undefined1 *)(long_ptr_2 + 4) = 1;
                            }
                            FUN_18038b160(long_ptr_2[2]);
                          }
                          else {
                            FUN_18038d8f0(render_context,long_ptr_2);
                          }
                          long_ptr_4 = long_ptr_2;
                          if (temp_ulong_3 == 0) {
                            if (collision_flag_2) {
                              long_ptr_4 = (longlong *)((longlong)(int)(uint)(temp_uint_2 == 0) * 8 + temp_long_2)
                              ;
                            }
                            else {
                              long_ptr_4 = (longlong *)((longlong)(int)temp_uint_2 * 8 + temp_long_2);
                            }
                          }
                          if (temp_ulong_3 == 1) {
                            if (collision_flag_2) {
                              temp_long_6 = *(longlong *)(temp_long_2 + (longlong)(int)(uint)(temp_uint_2 == 0) * 8)
                              ;
                            }
                            else {
                              temp_long_6 = *(longlong *)(temp_long_2 + (longlong)(int)temp_uint_2 * 8);
                            }
                          }
                          else {
                            temp_long_6 = long_ptr_2[1];
                          }
                          object_ptr_3 = *(undefined8 **)(render_context + 0x458);
                          temp_ulong_7 = *(longlong *)(render_context + 0x460) - (longlong)object_ptr_3 >> 3;
                          temp_ulong_5 = temp_ulong_2;
                          if (temp_ulong_7 != 0) {
                            do {
                              long_ptr_1 = (longlong *)*object_ptr_3;
                              if (((*long_ptr_1 == *long_ptr_4) && (long_ptr_1[1] == temp_long_6)) ||
                                 ((*long_ptr_1 == temp_long_6 && (long_ptr_1[1] == *long_ptr_4)))) {
                                *(undefined1 *)(long_ptr_1 + 4) = 2;
                                long_ptr_1[3] = stack_ulong_1;
                                *long_ptr_3 = (longlong)long_ptr_1;
                                FUN_18038b160(long_ptr_1[2]);
                                temp_long_6 = temp_long_3;
                                temp_ulong_5 = stack_ulong_1;
                                goto LAB_1803922c3;
                              }
                              temp_uint_5 = (int)temp_ulong_5 + 1;
                              temp_ulong_5 = (ulonglong)temp_uint_5;
                              object_ptr_3 = object_ptr_3 + 1;
                            } while ((ulonglong)(longlong)(int)temp_uint_5 < temp_ulong_7);
                          }
                          if (temp_ulong_3 == 1) {
                            if (collision_flag_2) {
                              temp_long_6 = *(longlong *)(temp_long_2 + (longlong)(int)(uint)(temp_uint_2 == 0) * 8)
                              ;
                            }
                            else {
                              temp_long_6 = *(longlong *)(temp_long_2 + (longlong)(int)temp_uint_2 * 8);
                            }
                          }
                          else {
                            temp_long_6 = long_ptr_2[1];
                            if (temp_ulong_3 == 0) {
                              temp_uint_5 = temp_uint_2;
                              if (collision_flag_2) {
                                temp_uint_5 = (uint)(temp_uint_2 == 0);
                              }
                              long_ptr_2 = (longlong *)((longlong)(int)temp_uint_5 * 8 + temp_long_2);
                            }
                          }
                          temp_long_5 = *long_ptr_2;
                          long_ptr_1 = (longlong *)FUN_18038c180(render_context);
                          long_ptr_1[1] = temp_long_6;
                          *long_ptr_1 = temp_long_5;
                          *(undefined1 *)(long_ptr_1 + 4) = 1;
                          long_ptr_1[2] = stack_ulong_1;
                          *long_ptr_3 = (longlong)long_ptr_1;
                          temp_long_6 = temp_long_3;
                          temp_ulong_5 = stack_ulong_1;
                        }
LAB_1803922c3:
                        temp_ulong_1 = temp_ulong_1 + 1;
                        long_ptr_2 = long_ptr_1;
                        temp_char_1 = stack_char_1;
                      } while ((longlong)temp_ulong_1 < 2);
                      temp_ulong_3 = temp_ulong_3 + 1;
                      temp_uint_5 = stack_uint_1;
                    } while ((longlong)temp_ulong_3 < 2);
                    goto LAB_180392028;
                  }
                  long_ptr_1[2] = temp_ulong_8;
                }
                *(undefined1 *)(long_ptr_1 + 4) = 1;
                long_ptr_1[3] = 0;
                func_0x00018038ac80(long_ptr_1);
                *long_ptr_3 = temp_long_2;
                *(undefined1 *)(temp_long_2 + 0x20) = 2;
                *(ulonglong *)(temp_long_2 + 0x18) = temp_ulong_5;
              }
LAB_180392028:
              temp_flag_1 = *(byte *)(temp_ulong_5 + 0xa8);
              stack_uint_1 = temp_uint_5 + 1;
              temp_ulong_1 = (ulonglong)stack_uint_1;
              long_ptr_3 = long_ptr_3 + 1;
              temp_char_1 = stack_char_1;
            } while ((int)stack_uint_1 < (int)(uint)temp_flag_1);
          }
          
          // 第六阶段：更新对象状态和标志位
          if (temp_flag_1 != 0) {
            long_ptr_3 = (longlong *)(temp_ulong_5 + 0x60);
            temp_ulong_1 = temp_ulong_2;
            do {
              temp_long_1 = *long_ptr_3;
              *(undefined1 *)(temp_long_1 + 0x20) = 0;
              temp_char_1 = *(longlong *)(temp_long_1 + 0x10) != 0;
              if ((bool)temp_char_1) {
                *(undefined1 *)(temp_long_1 + 0x20) = 1;
              }
              if (*(longlong *)(temp_long_1 + 0x18) != 0) {
                temp_char_1 = temp_char_1 + '\x01';
                *(char *)(temp_long_1 + 0x20) = temp_char_1;
              }
              if ((temp_char_1 == '\x01') && (*(longlong *)(temp_long_1 + 0x18) != 0)) {
                *(longlong *)(temp_long_1 + 0x10) = *(longlong *)(temp_long_1 + 0x18);
                *(undefined8 *)(temp_long_1 + 0x18) = 0;
              }
              temp_flag_1 = *(byte *)(temp_ulong_5 + 0xa8);
              temp_uint_5 = (int)temp_ulong_1 + 1;
              temp_ulong_1 = (ulonglong)temp_uint_5;
              long_ptr_3 = long_ptr_3 + 1;
            } while ((int)temp_uint_5 < (int)(uint)temp_flag_1);
          }
          
          // 第七阶段：处理对象连接关系
          temp_ulong_1 = temp_ulong_2;
          temp_ulong_7 = temp_ulong_2;
          if (temp_flag_1 != 0) {
            do {
              long_ptr_3 = *(longlong **)(temp_ulong_5 + 0x60 + temp_ulong_7 * 8);
              temp_uint_5 = (int)temp_ulong_1 + 1;
              temp_ulong_1 = temp_ulong_2;
              if (temp_uint_5 != temp_flag_1) {
                temp_ulong_1 = temp_ulong_7 + 1;
              }
              long_ptr_1 = *(longlong **)(temp_ulong_5 + 0x60 + temp_ulong_1 * 8);
              if ((*long_ptr_3 == *long_ptr_1) || (temp_int_2 = -1, *long_ptr_3 == long_ptr_1[1])) {
                temp_int_2 = 0;
              }
              if ((long_ptr_3[1] == *long_ptr_1) || (long_ptr_3[1] == long_ptr_1[1])) {
                temp_int_2 = 1;
              }
              temp_ulong_1 = temp_ulong_2;
              if (temp_int_2 == 0) {
                temp_ulong_1 = 8;
              }
              *(undefined8 *)(stack_ulong_1 + 0x80 + temp_ulong_7 * 8) =
                   *(undefined8 *)(temp_ulong_1 + (longlong)long_ptr_3);
              temp_flag_1 = *(byte *)(stack_ulong_1 + 0xa8);
              temp_ulong_1 = (ulonglong)temp_uint_5;
              temp_ulong_7 = temp_ulong_7 + 1;
              temp_ulong_5 = stack_ulong_1;
            } while ((int)temp_uint_5 < (int)(uint)temp_flag_1);
          }
          
          // 第八阶段：清理资源和更新渲染状态
          FUN_18038b160(temp_ulong_5);
          FUN_18038af00(temp_ulong_5);
          temp_uint_5 = temp_uint_1;
          if (*(longlong *)(temp_ulong_5 + 0xb0) != 0) {
            temp_uint_5 = *(uint *)(*(longlong *)(temp_ulong_5 + 0xb0) + 0x134);
          }
          if (*(longlong *)(temp_ulong_5 + 0xb8) != 0) {
            temp_uint_5 = temp_uint_5 | *(uint *)(*(longlong *)(temp_ulong_5 + 0xb8) + 0x134);
          }
          if (*(longlong *)(temp_ulong_5 + 0xc0) != 0) {
            temp_uint_5 = temp_uint_5 | *(uint *)(*(longlong *)(temp_ulong_5 + 0xc0) + 0x134);
          }
          if (*(longlong *)(temp_ulong_5 + 200) != 0) {
            temp_uint_5 = temp_uint_5 | *(uint *)(*(longlong *)(temp_ulong_5 + 200) + 0x134);
          }
          temp_uint_2 = 0xffffffff;
          if (temp_uint_5 != 0) {
            temp_uint_2 = temp_uint_5;
          }
          *(uint *)(temp_ulong_5 + 0x134) = temp_uint_2;
          FUN_18038b160(temp_ulong_8);
          FUN_18038af00(temp_ulong_8);
          if (*(longlong *)(temp_ulong_8 + 0xb0) != 0) {
            temp_uint_1 = *(uint *)(*(longlong *)(temp_ulong_8 + 0xb0) + 0x134);
          }
          if (*(longlong *)(temp_ulong_8 + 0xb8) != 0) {
            temp_uint_1 = temp_uint_1 | *(uint *)(*(longlong *)(temp_ulong_8 + 0xb8) + 0x134);
          }
          if (*(longlong *)(temp_ulong_8 + 0xc0) != 0) {
            temp_uint_1 = temp_uint_1 | *(uint *)(*(longlong *)(temp_ulong_8 + 0xc0) + 0x134);
          }
          if (*(longlong *)(temp_ulong_8 + 200) != 0) {
            temp_uint_1 = temp_uint_1 | *(uint *)(*(longlong *)(temp_ulong_8 + 200) + 0x134);
          }
          temp_uint_5 = 0xffffffff;
          if (temp_uint_1 != 0) {
            temp_uint_5 = temp_uint_1;
          }
          *(uint *)(temp_ulong_8 + 0x134) = temp_uint_5;
          FUN_18038b160(temp_ulong_6);
          FUN_18038af00(temp_ulong_6);
          temp_uint_1 = temp_ulong_9;
          if (*(longlong *)(temp_ulong_6 + 0xb0) != 0) {
            temp_uint_1 = *(uint *)(*(longlong *)(temp_ulong_6 + 0xb0) + 0x134);
          }
          if (*(longlong *)(temp_ulong_6 + 0xb8) != 0) {
            temp_uint_1 = temp_uint_1 | *(uint *)(*(longlong *)(temp_ulong_6 + 0xb8) + 0x134);
          }
          if (*(longlong *)(temp_ulong_6 + 0xc0) != 0) {
            temp_uint_1 = temp_uint_1 | *(uint *)(*(longlong *)(temp_ulong_6 + 0xc0) + 0x134);
          }
          if (*(longlong *)(temp_ulong_6 + 200) != 0) {
            temp_uint_1 = temp_uint_1 | *(uint *)(*(longlong *)(temp_ulong_6 + 200) + 0x134);
          }
          temp_uint_5 = 0xffffffff;
          if (temp_uint_1 != 0) {
            temp_uint_5 = temp_uint_1;
          }
          *(uint *)(temp_ulong_6 + 0x134) = temp_uint_5;
          FUN_18038b160(stack_ulong_1);
          temp_uint_6 = FUN_18038af00(stack_ulong_1);
          if (*(longlong *)(stack_ulong_1 + 0xb0) != 0) {
            temp_ulong_9 = *(uint *)(*(longlong *)(stack_ulong_1 + 0xb0) + 0x134);
          }
          if (*(longlong *)(stack_ulong_1 + 0xb8) != 0) {
            temp_ulong_9 = temp_ulong_9 | *(uint *)(*(longlong *)(stack_ulong_1 + 0xb8) + 0x134);
          }
          if (*(longlong *)(stack_ulong_1 + 0xc0) != 0) {
            temp_ulong_9 = temp_ulong_9 | *(uint *)(*(longlong *)(stack_ulong_1 + 0xc0) + 0x134);
          }
          if (*(longlong *)(stack_ulong_1 + 200) != 0) {
            temp_ulong_9 = temp_ulong_9 | *(uint *)(*(longlong *)(stack_ulong_1 + 200) + 0x134);
          }
          temp_uint_1 = 0xffffffff;
          if (temp_ulong_9 != 0) {
            temp_uint_1 = temp_ulong_9;
          }
          *(uint *)(stack_ulong_1 + 0x134) = temp_uint_1;
          temp_uint_6 = FUN_18038ee20(temp_uint_6,temp_ulong_5,0xffffffff);
          temp_uint_6 = FUN_18038ee20(temp_uint_6,temp_ulong_8,0xffffffff);
          temp_uint_6 = FUN_18038ee20(temp_uint_6,temp_ulong_6,0xffffffff);
          temp_uint_6 = FUN_18038ee20(temp_uint_6,stack_ulong_1,0xffffffff);
          *(int *)(render_context + 0x530) = *(int *)(render_context + 0x530) + 1;
          temp_uint_6 = FUN_18038ee20(temp_uint_6,temp_ulong_5,*(undefined4 *)(render_context + 0x530));
          *(int *)(render_context + 0x530) = *(int *)(render_context + 0x530) + 1;
          FUN_18038ee20(temp_uint_6,temp_ulong_8,*(undefined4 *)(render_context + 0x530));
        }
      }
    }
  }
  return;
}