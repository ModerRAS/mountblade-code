#include "TaleWorlds.Native.Split.h"

// 03_rendering_part022.c - 渲染系统网格组件处理文件

/**
 * 渲染系统网格组件处理函数
 * 处理网格组件的创建、配置和材质应用
 * 
 * @param mesh_component_ptr 网格组件指针
 * @param render_context_ptr 渲染上下文指针
 * @param scene_object_ptr 场景对象指针
 * @param parent_mesh_ptr 父网格指针
 * @param render_flags 渲染标志
 */
void process_mesh_component(uint64_t *mesh_component_ptr, longlong render_context_ptr, longlong scene_object_ptr, uint64_t *parent_mesh_ptr, int render_flags)
{
  byte *byte_ptr;
  char char_val;
  bool bool_flag;
  char char_val2;
  int int_val;
  int32_t uint_val;
  uint uint_val2;
  uint64_t *component_data_ptr;
  char *string_ptr;
  char *string_ptr2;
  longlong long_val;
  longlong long_val2;
  uint64_t *mesh_data_ptr;
  int8_t *data_ptr;
  byte *byte_ptr2;
  longlong long_val3;
  uint64_t *texture_ptr;
  uint uint_val3;
  uint uint_val4;
  void *render_obj_ptr;
  longlong mesh_index;
  uint uint_val5;
  uint *uint_ptr;
  uint uint_val6;
  void *material_ptr;
  int int_val2;
  ulonglong ulong_val;
  ulonglong ulong_val2;
  int8_t *buffer_ptr;
  bool is_equal;
  int stack_index;
  uint64_t *stack_mesh_ptr;
  void *stack_render_ptr;
  byte *stack_buffer_ptr;
  uint buffer_size;
  ulonglong buffer_capacity;
  void *stack_data_ptr;
  int8_t *stack_char_ptr;
  uint stack_uint;
  ulonglong stack_ulong;
  void *stack_ptr;
  int8_t *stack_char_ptr2;
  uint stack_uint2;
  ulonglong stack_ulong2;
  int stack_int;
  float float_val;
  float float_val2;
  float float_val3;
  int32_t float_pack;
  float float_val4;
  float float_val5;
  float float_val6;
  int32_t float_pack2;
  longlong stack_long;
  longlong stack_array [2];
  uint64_t stack_guard;
  
  // 初始化组件数据结构
  stack_guard = 0xfffffffffffffffe;
  component_data_ptr = (uint64_t *)FUN_1804c1300(render_context_ptr + 0x60, 0x60);
  *component_data_ptr = 0;
  component_data_ptr[1] = 0;
  component_data_ptr[4] = 0;
  *(int32_t *)(component_data_ptr + 5) = 1;
  component_data_ptr[6] = 0;
  component_data_ptr[8] = 0;
  
  // 设置组件类型为元网格组件
  string_ptr = "meta_mesh_component";
  do {
    string_ptr2 = string_ptr;
    string_ptr = string_ptr2 + 1;
  } while (*string_ptr != '\0');
  *component_data_ptr = &system_buffer_9d80;
  component_data_ptr[2] = string_ptr2 + -0x180a09d7f;
  
  // 处理父网格为空的情况
  if (parent_mesh_ptr == (uint64_t *)0x0) {
    long_val = FUN_180628ca0();
    int_val = *(int *)(mesh_component_ptr + 0x40);
    if (int_val == *(int *)(long_val + 0x10)) {
      if (int_val == 0) {
LAB_18027c7b0:
        if (*(int *)(long_val + 0x10) != 0) goto LAB_18027c7b4;
      }
      else {
        string_ptr = (char *)mesh_component_ptr[0x3f];
        string_ptr2 = string_ptr;
        do {
          char_val2 = *string_ptr2;
          char_val = string_ptr2[*(longlong *)(long_val + 8) - (longlong)string_ptr];
          if (char_val2 != char_val) break;
          string_ptr2 = string_ptr2 + 1;
        } while (char_val != '\0');
        if (char_val2 != char_val) goto LAB_18027c7bb;
      }
    }
    else {
      if (int_val == 0) goto LAB_18027c7b0;
LAB_18027c7b4:
      string_ptr = (char *)mesh_component_ptr[0x3f];
LAB_18027c7bb:
      string_ptr2 = "";
      if (string_ptr != (char *)0x0) {
        string_ptr2 = string_ptr;
      }
      FUN_180630b20(render_context_ptr, component_data_ptr, &system_buffer_3a84, string_ptr2);
    }
    stack_mesh_ptr = (uint64_t *)FUN_1800b6de0(_DAT_180c86930, mesh_component_ptr + 0x3e, 1);
    if (stack_mesh_ptr == (uint64_t *)0x0) {
      return;
    }
    goto LAB_18027c801;
  }
  
  // 处理有父网格的情况
  int_val = *(int *)(mesh_component_ptr + 0x40);
  stack_mesh_ptr = parent_mesh_ptr;
  if (int_val == *(int *)(parent_mesh_ptr + 0x40)) {
    if (int_val == 0) {
LAB_18027c733:
      if (*(int *)(parent_mesh_ptr + 0x40) == 0) goto LAB_18027c801;
      goto LAB_18027c73b;
    }
    string_ptr = (char *)mesh_component_ptr[0x3f];
    string_ptr2 = string_ptr;
    do {
      char_val2 = *string_ptr2;
      char_val = string_ptr2[parent_mesh_ptr[0x3f] - (longlong)string_ptr];
      if (char_val2 != char_val) break;
      string_ptr2 = string_ptr2 + 1;
    } while (char_val != '\0');
    if (char_val2 == char_val) goto LAB_18027c801;
  }
  else {
    if (int_val == 0) goto LAB_18027c733;
LAB_18027c73b:
    string_ptr = (char *)mesh_component_ptr[0x3f];
  }
  string_ptr2 = "";
  if (string_ptr != (char *)0x0) {
    string_ptr2 = string_ptr;
  }
  FUN_180630b20(render_context_ptr, component_data_ptr, &system_buffer_3a84, string_ptr2);
LAB_18027c801:
  
  // 检查渲染标志差异
  if (*(int *)((longlong)mesh_component_ptr + 0x324) != *(int *)((longlong)stack_mesh_ptr + 0x324)) {
    FUN_180630c80(render_context_ptr, component_data_ptr, &unknown_var_8904_ptr);
  }
  
  // 获取网格数据和纹理数据
  if ((void *)*stack_mesh_ptr == &unknown_var_9304_ptr) {
    mesh_data_ptr = stack_mesh_ptr + 0x66;
  }
  else {
    mesh_data_ptr = (uint64_t *)(**(code **)((void *)*stack_mesh_ptr + 0x158))(stack_mesh_ptr);
  }
  if ((void *)*mesh_component_ptr == &unknown_var_9304_ptr) {
    texture_ptr = mesh_component_ptr + 0x66;
  }
  else {
    texture_ptr = (uint64_t *)(**(code **)((void *)*mesh_component_ptr + 0x158))(mesh_component_ptr);
  }
  
  // 比较网格数据
  char_val2 = func_0x000180285f10(mesh_data_ptr, texture_ptr, 0x3c23d70a);
  if (char_val2 == '\0') {
    // 处理网格位置、旋转和变换
    float_val4 = *(float *)(mesh_component_ptr + 0x6c);
    float_val5 = *(float *)((longlong)mesh_component_ptr + 0x364);
    float_val6 = *(float *)(mesh_component_ptr + 0x6d);
    float_pack2 = *(int32_t *)((longlong)mesh_component_ptr + 0x36c);
    FUN_1801c1720(mesh_component_ptr + 0x66, &float_val);
    FUN_180085020(mesh_component_ptr + 0x66, stack_array);
    FUN_18062fb40(render_context_ptr, component_data_ptr, &unknown_var_8872_ptr, &float_val4);
    FUN_18062fb40(render_context_ptr, component_data_ptr, &unknown_var_8888_ptr, &float_val);
    FUN_18062fb40(render_context_ptr, component_data_ptr, &unknown_var_8408_ptr, stack_array);
  }
  
  // 处理材质
  if (mesh_component_ptr[0x77] != 0) {
    render_obj_ptr = *(void **)(mesh_component_ptr[0x77] + 0x18);
    material_ptr = &system_buffer_ptr;
    if (render_obj_ptr != (void *)0x0) {
      material_ptr = render_obj_ptr;
    }
    FUN_180630b20(render_context_ptr, component_data_ptr, &unknown_var_8928_ptr, material_ptr);
  }
  
  // 处理子网格
  iStack_a8 = 0;
  long_val = mesh_component_ptr[7];
  if (mesh_component_ptr[8] - long_val >> 4 != 0) {
    stack_array[0] = 0;
    do {
      mesh_index = stack_array[0];
      render_obj_ptr = &unknown_var_3456_ptr;
      long_val = *(longlong *)(long_val + mesh_index * 0x10);
      
      // 获取网格数据
      if (*(longlong *)(long_val + 0x1b0) == 0) {
        long_val2 = long_val + 0x10;
      }
      else {
        long_val2 = func_0x000180079240();
      }
      
      // 处理网格名称
      buffer_capacity = 0;
      stack_buffer_ptr = (byte *)0x0;
      buffer_size = 0;
      stack_render_ptr = render_obj_ptr;
      FUN_1806277c0(&stack_render_ptr, *(int32_t *)(long_val2 + 0x10));
      if (0 < *(int *)(long_val2 + 0x10)) {
        render_obj_ptr = &system_buffer_ptr;
        if (*(void **)(long_val2 + 8) != (void *)0x0) {
          render_obj_ptr = *(void **)(long_val2 + 8);
        }
        memcpy(stack_buffer_ptr, render_obj_ptr, (longlong)(*(int *)(long_val2 + 0x10) + 1));
      }
      
      // 清理网格名称中的特殊字符
      if ((*(longlong *)(long_val2 + 8) != 0) && (buffer_size = 0, stack_buffer_ptr != (byte *)0x0)) {
        *stack_buffer_ptr = 0;
      }
      while ((0 < (int)buffer_size && (long_val2 = strstr(stack_buffer_ptr, &system_buffer_ff10), long_val2 != 0))) {
        int_val2 = 6;
        int_val = (int)long_val2 - (int)stack_buffer_ptr;
        if (buffer_size < int_val + 6U) {
          int_val2 = buffer_size - int_val;
        }
        uint_val6 = int_val + int_val2;
        if (uint_val6 < buffer_size) {
          long_val2 = (longlong)(int)uint_val6;
          do {
            stack_buffer_ptr[long_val2 - int_val2] = stack_buffer_ptr[long_val2];
            uint_val6 = uint_val6 + 1;
            long_val2 = long_val2 + 1;
          } while (uint_val6 < buffer_size);
        }
        buffer_size = buffer_size - int_val2;
        stack_buffer_ptr[buffer_size] = 0;
      }
      
      // 创建子网格组件
      mesh_data_ptr = (uint64_t *)FUN_1804c1300(render_context_ptr + 0x60, 0x60);
      *mesh_data_ptr = 0;
      mesh_data_ptr[1] = 0;
      mesh_data_ptr[4] = 0;
      *(int32_t *)(mesh_data_ptr + 5) = 1;
      mesh_data_ptr[6] = 0;
      mesh_data_ptr[8] = 0;
      string_ptr = "mesh";
      do {
        string_ptr2 = string_ptr;
        string_ptr = string_ptr2 + 1;
      } while (*string_ptr != '\0');
      *mesh_data_ptr = &unknown_var_9144_ptr;
      mesh_data_ptr[2] = string_ptr2 + -0x180a0f3e7;
      
      // 处理子网格数据
      stack_index = 0;
      stack_long = 0;
      if ((longlong)(mesh_component_ptr[8] - mesh_component_ptr[7]) >> 4 != 0) {
        do {
          data_ptr = (int8_t *)0x0;
          mesh_index = *(longlong *)(stack_mesh_ptr[7] + stack_long * 0x10);
          if (*(longlong *)(mesh_index + 0x1b0) == 0) {
            long_val2 = mesh_index + 0x10;
          }
          else {
            long_val2 = func_0x000180079240();
          }
          
          // 处理子网格名称
          stack_uint2 = (uint)data_ptr;
          stack_data_ptr = &unknown_var_3456_ptr;
          stack_ulong2 = 0;
          data_ptr = data_ptr;
          if (*(int *)(long_val2 + 0x10) != 0) {
            int_val = *(int *)(long_val2 + 0x10) + 1;
            if (int_val < 0x10) {
              int_val = 0x10;
            }
            stack_char_ptr2 = data_ptr;
            data_ptr = (int8_t *)FUN_18062b420(_DAT_180c8ed18, (longlong)int_val, 0x13);
            *data_ptr = 0;
            ulong_val = (ulonglong)data_ptr & 0xffffffffffc00000;
            if (ulong_val == 0) {
              uint_val6 = 0;
            }
            else {
              long_val3 = ulong_val + 0x80 + ((longlong)data_ptr - ulong_val >> 0x10) * 0x50;
              uint_ptr = (uint *)(long_val3 - (ulonglong)*(uint *)(long_val3 + 4));
              if ((*(byte *)((longlong)uint_ptr + 0xe) & 2) == 0) {
                uint_val6 = uint_ptr[7];
                if (0x3ffffff < uint_val6) {
                  uint_val6 = *uint_ptr << 0x10;
                }
              }
              else {
                uint_val6 = uint_ptr[7];
                if (uint_val6 < 0x4000000) {
                  ulong_val2 = (ulonglong)uint_val6;
                }
                else {
                  ulong_val2 = (ulonglong)*uint_ptr << 0x10;
                }
                if (0x3ffffff < uint_val6) {
                  uint_val6 = *uint_ptr << 0x10;
                }
                uint_val6 = uint_val6 - (int)(((longlong)data_ptr -
                                        (((longlong)((longlong)uint_ptr + (-0x80 - ulong_val)) / 0x50) *
                                         0x10000 + ulong_val)) % ulong_val2);
              }
            }
            data_ptr = (int8_t *)0x0;
            stack_ulong2 = CONCAT44(stack_ulong2._4_4_, uint_val6);
            if (0 < *(int *)(long_val2 + 0x10)) {
              render_obj_ptr = &system_buffer_ptr;
              if (*(void **)(long_val2 + 8) != (void *)0x0) {
                render_obj_ptr = *(void **)(long_val2 + 8);
              }
              stack_char_ptr2 = data_ptr;
              memcpy(data_ptr, render_obj_ptr, (longlong)(*(int *)(long_val2 + 0x10) + 1));
            }
          }
          stack_char_ptr2 = data_ptr;
          if ((*(longlong *)(long_val2 + 8) != 0) &&
             (stack_uint2 = (uint)data_ptr, data_ptr != (int8_t *)0x0)) {
            *data_ptr = 0;
          }
          
          // 清理子网格名称
          while ((0 < (int)stack_uint2 && (long_val2 = strstr(stack_char_ptr2, &system_buffer_ff10), long_val2 != 0))) {
            int_val2 = 6;
            int_val = (int)long_val2 - (int)stack_char_ptr2;
            if (stack_uint2 < int_val + 6U) {
              int_val2 = stack_uint2 - int_val;
            }
            uint_val6 = int_val + int_val2;
            if (uint_val6 < stack_uint2) {
              long_val2 = (longlong)(int)uint_val6;
              do {
                stack_char_ptr2[long_val2 - int_val2] = stack_char_ptr2[long_val2];
                uint_val6 = uint_val6 + 1;
                long_val2 = long_val2 + 1;
              } while (uint_val6 < stack_uint2);
            }
            stack_uint2 = stack_uint2 - int_val2;
            stack_char_ptr2[stack_uint2] = 0;
          }
          
          bool_flag = true;
          uint_val6 = stack_uint2;
          if (buffer_size == stack_uint2) {
            if (buffer_size != 0) {
              byte_ptr2 = stack_buffer_ptr;
              do {
                byte_ptr = byte_ptr2 + ((longlong)stack_char_ptr2 - (longlong)stack_buffer_ptr);
                uint_val6 = (uint)*byte_ptr2 - (uint)*byte_ptr;
                if (uint_val6 != 0) break;
                byte_ptr2 = byte_ptr2 + 1;
              } while (*byte_ptr != 0);
            }
LAB_18027cd22:
            if (uint_val6 == 0) {
              // 处理材质差异
              if ((*(longlong *)(long_val + 0x1b8) != 0) &&
                 (*(longlong *)(*(longlong *)(long_val + 0x1b8) + 0xa8) != 0)) {
                long_val2 = FUN_180079430(long_val);
                long_val3 = FUN_180079430(mesh_index);
                int_val = *(int *)(long_val2 + 0x10);
                if (int_val == *(int *)(long_val3 + 0x10)) {
                  if (int_val == 0) {
LAB_18027cd90:
                    if (*(int *)(long_val3 + 0x10) != 0) goto LAB_18027cd98;
                    is_equal = true;
                  }
                  else {
                    string_ptr = *(char **)(long_val2 + 8);
                    long_val2 = *(longlong *)(long_val3 + 8) - (longlong)string_ptr;
                    do {
                      char_val2 = *string_ptr;
                      char_val = string_ptr[long_val2];
                      if (char_val2 != char_val) break;
                      string_ptr = string_ptr + 1;
                    } while (char_val != '\0');
                    is_equal = char_val2 == char_val;
                  }
                }
                else {
                  if (int_val == 0) goto LAB_18027cd90;
LAB_18027cd98:
                  is_equal = false;
                }
                if (!is_equal) {
                  byte_ptr2 = &system_buffer_ptr;
                  if (stack_buffer_ptr != (byte *)0x0) {
                    byte_ptr2 = stack_buffer_ptr;
                  }
                  FUN_180630b20(render_context_ptr, mesh_data_ptr, &system_buffer_3a84, byte_ptr2);
                  bool_flag = false;
                  long_val2 = FUN_180079430(long_val);
                  stack_data_ptr = &unknown_var_3456_ptr;
                  stack_ulong2 = 0;
                  stack_char_ptr2 = (int8_t *)0x0;
                  stack_uint2 = 0;
                  int_val = *(int *)(long_val2 + 0x10);
                  if (int_val != 0) {
                    int_val2 = int_val + 1;
                    if (int_val2 < 0x10) {
                      int_val2 = 0x10;
                    }
                    stack_char_ptr2 = (int8_t *)
                                 FUN_18062b420(_DAT_180c8ed18, (longlong)int_val2, 0x13);
                    *stack_char_ptr2 = 0;
                    uint_val = FUN_18064e990(stack_char_ptr2);
                    stack_ulong2 = CONCAT44(stack_ulong2._4_4_, uint_val);
                    if (0 < *(int *)(long_val2 + 0x10)) {
                      render_obj_ptr = &system_buffer_ptr;
                      if (*(void **)(long_val2 + 8) != (void *)0x0) {
                        render_obj_ptr = *(void **)(long_val2 + 8);
                      }
                      memcpy(stack_char_ptr2, render_obj_ptr, (longlong)(*(int *)(long_val2 + 0x10) + 1));
                    }
                  }
                  if ((*(longlong *)(long_val2 + 8) != 0) &&
                     (stack_uint2 = 0, stack_char_ptr2 != (int8_t *)0x0)) {
                    *stack_char_ptr2 = 0;
                  }
                  while ((0 < (int)stack_uint2 &&
                         (long_val2 = strstr(stack_char_ptr2, &system_buffer_ff10), long_val2 != 0))) {
                    int_val2 = 6;
                    int_val = (int)long_val2 - (int)stack_char_ptr2;
                    if (stack_uint2 < int_val + 6U) {
                      int_val2 = stack_uint2 - int_val;
                    }
                    uint_val6 = int_val + int_val2;
                    if (uint_val6 < stack_uint2) {
                      long_val2 = (longlong)(int)uint_val6;
                      do {
                        stack_char_ptr2[long_val2 - int_val2] = stack_char_ptr2[long_val2];
                        uint_val6 = uint_val6 + 1;
                        long_val2 = long_val2 + 1;
                      } while (uint_val6 < stack_uint2);
                    }
                    stack_uint2 = stack_uint2 - int_val2;
                    stack_char_ptr2[stack_uint2] = 0;
                  }
                  data_ptr = &system_buffer_ptr;
                  if (stack_char_ptr2 != (int8_t *)0x0) {
                    data_ptr = stack_char_ptr2;
                  }
                  FUN_180630b20(render_context_ptr, mesh_data_ptr, &unknown_var_6864_ptr, data_ptr);
                  stack_data_ptr = &unknown_var_3456_ptr;
                  if (stack_char_ptr2 != (int8_t *)0x0) {
                    FUN_18064e900();
                  }
                  stack_char_ptr2 = (int8_t *)0x0;
                  stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
                  stack_data_ptr = &unknown_var_720_ptr;
                }
              }
              
              // 处理颜色属性差异
              float_val = *(float *)(long_val + 0x238);
              float_val2 = *(float *)(long_val + 0x23c);
              float_val3 = *(float *)(long_val + 0x240);
              float_pack = *(int32_t *)(long_val + 0x244);
              float_val4 = *(float *)(mesh_index + 0x238);
              float_val5 = *(float *)(mesh_index + 0x23c);
              float_val6 = *(float *)(mesh_index + 0x240);
              float_pack2 = *(int32_t *)(mesh_index + 0x244);
              if (((float_val != float_val4) || (float_val2 != float_val5)) || (float_val3 != float_val6)) {
                if (bool_flag) {
                  byte_ptr2 = &system_buffer_ptr;
                  if (stack_buffer_ptr != (byte *)0x0) {
                    byte_ptr2 = stack_buffer_ptr;
                  }
                  FUN_180630b20(render_context_ptr, mesh_data_ptr, &system_buffer_3a84, byte_ptr2);
                  bool_flag = false;
                }
                uint_val2 = (uint)(longlong)(*(float *)(long_val + 0x244) * 256.0);
                uint_val6 = 0xff;
                if (uint_val2 < 0xff) {
                  uint_val6 = uint_val2;
                }
                uint_val3 = (uint)(longlong)(*(float *)(long_val + 0x238) * 256.0);
                uint_val2 = 0xff;
                if (uint_val3 < 0xff) {
                  uint_val2 = uint_val3;
                }
                uint_val4 = (uint)(longlong)(*(float *)(long_val + 0x23c) * 256.0);
                uint_val3 = 0xff;
                if (uint_val4 < 0xff) {
                  uint_val3 = uint_val4;
                }
                uint_val5 = (uint)(longlong)(*(float *)(long_val + 0x240) * 256.0);
                uint_val4 = 0xff;
                if (uint_val5 < 0xff) {
                  uint_val4 = uint_val5;
                }
                FUN_18062f640(render_context_ptr, mesh_data_ptr, &unknown_var_8684_ptr,
                              ((uint_val6 << 8 | uint_val2) << 8 | uint_val3) << 8 | uint_val4);
              }
              
              // 处理第二组颜色属性
              float_val4 = *(float *)(long_val + 0x248);
              float_val5 = *(float *)(long_val + 0x24c);
              float_val6 = *(float *)(long_val + 0x250);
              float_pack2 = *(int32_t *)(long_val + 0x254);
              float_val = *(float *)(mesh_index + 0x248);
              float_val2 = *(float *)(mesh_index + 0x24c);
              float_val3 = *(float *)(mesh_index + 0x250);
              float_pack = *(int32_t *)(mesh_index + 0x254);
              if (((float_val4 != float_val) || (float_val5 != float_val2)) || (float_val6 != float_val3)) {
                if (bool_flag) {
                  byte_ptr2 = &system_buffer_ptr;
                  if (stack_buffer_ptr != (byte *)0x0) {
                    byte_ptr2 = stack_buffer_ptr;
                  }
                  FUN_180630b20(render_context_ptr, mesh_data_ptr, &system_buffer_3a84, byte_ptr2);
                  bool_flag = false;
                }
                uint_val2 = (uint)(longlong)(*(float *)(long_val + 0x254) * 256.0);
                uint_val6 = 0xff;
                if (uint_val2 < 0xff) {
                  uint_val6 = uint_val2;
                }
                uint_val3 = (uint)(longlong)(*(float *)(long_val + 0x248) * 256.0);
                uint_val2 = 0xff;
                if (uint_val3 < 0xff) {
                  uint_val2 = uint_val3;
                }
                uint_val4 = (uint)(longlong)(*(float *)(long_val + 0x24c) * 256.0);
                uint_val3 = 0xff;
                if (uint_val4 < 0xff) {
                  uint_val3 = uint_val4;
                }
                uint_val5 = (uint)(longlong)(*(float *)(long_val + 0x250) * 256.0);
                uint_val4 = 0xff;
                if (uint_val5 < 0xff) {
                  uint_val4 = uint_val5;
                }
                FUN_18062f640(render_context_ptr, mesh_data_ptr, &unknown_var_8864_ptr,
                              ((uint_val6 << 8 | uint_val2) << 8 | uint_val3) << 8 | uint_val4);
              }
              
              // 处理其他属性差异
              if (((*(float *)(mesh_index + 0x2a8) != *(float *)(long_val + 0x2a8)) ||
                  (*(float *)(mesh_index + 0x2ac) != *(float *)(long_val + 0x2ac))) ||
                 (*(float *)(mesh_index + 0x2b0) != *(float *)(long_val + 0x2b0))) {
                if (bool_flag) {
                  byte_ptr2 = &system_buffer_ptr;
                  if (stack_buffer_ptr != (byte *)0x0) {
                    byte_ptr2 = stack_buffer_ptr;
                  }
                  FUN_180630b20(render_context_ptr, mesh_data_ptr, &system_buffer_3a84, byte_ptr2);
                  bool_flag = false;
                }
                FUN_180630010(render_context_ptr, mesh_data_ptr, &unknown_var_8832_ptr, long_val + 0x2a8);
              }
              if (((*(float *)(mesh_index + 0x2b8) != *(float *)(long_val + 0x2b8)) ||
                  (*(float *)(mesh_index + 700) != *(float *)(long_val + 700))) ||
                 (*(float *)(mesh_index + 0x2c0) != *(float *)(long_val + 0x2c0))) {
                if (bool_flag) {
                  byte_ptr2 = &system_buffer_ptr;
                  if (stack_buffer_ptr != (byte *)0x0) {
                    byte_ptr2 = stack_buffer_ptr;
                  }
                  FUN_180630b20(render_context_ptr, mesh_data_ptr, &system_buffer_3a84, byte_ptr2);
                  bool_flag = false;
                }
                FUN_180630010(render_context_ptr, mesh_data_ptr, &unknown_var_8848_ptr, long_val + 0x2b8);
              }
              
              // 添加子网格到组件
              if (!bool_flag) {
                if (component_data_ptr[6] == 0) {
                  mesh_data_ptr[10] = 0;
                  component_data_ptr[6] = mesh_data_ptr;
                }
                else {
                  mesh_data_ptr[10] = component_data_ptr[7];
                  *(uint64_t **)(component_data_ptr[7] + 0x58) = mesh_data_ptr;
                }
                component_data_ptr[7] = mesh_data_ptr;
                mesh_data_ptr[4] = component_data_ptr;
                mesh_data_ptr[0xb] = 0;
              }
            }
          }
          else if (buffer_size == 0) goto LAB_18027cd22;
          stack_data_ptr = &unknown_var_3456_ptr;
          if (stack_char_ptr2 != (int8_t *)0x0) {
            FUN_18064e900();
          }
          stack_char_ptr2 = (int8_t *)0x0;
          stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
          stack_data_ptr = &unknown_var_720_ptr;
          stack_index = stack_index + 1;
          stack_long = stack_long + 1;
          mesh_index = stack_array[0];
        } while ((ulonglong)(longlong)stack_index <
                 (ulonglong)((longlong)(mesh_component_ptr[8] - mesh_component_ptr[7]) >> 4));
      }
      stack_render_ptr = &unknown_var_3456_ptr;
      if (stack_buffer_ptr != (byte *)0x0) {
        FUN_18064e900();
      }
      stack_buffer_ptr = (byte *)0x0;
      buffer_capacity = buffer_capacity & 0xffffffff00000000;
      stack_render_ptr = &unknown_var_720_ptr;
      iStack_a8 = iStack_a8 + 1;
      stack_array[0] = mesh_index + 1;
      long_val = mesh_component_ptr[7];
    } while ((ulonglong)(longlong)iStack_a8 < (ulonglong)(mesh_component_ptr[8] - long_val >> 4));
  }
  
  // 将组件添加到场景对象
  if ((component_data_ptr[6] != 0) || (component_data_ptr[8] != 0)) {
    if (render_flags != 0) {
      FUN_180630c80(render_context_ptr, component_data_ptr, &unknown_var_9168_ptr);
    }
    if (*(longlong *)(scene_object_ptr + 0x30) == 0) {
      component_data_ptr[10] = 0;
      *(uint64_t **)(scene_object_ptr + 0x30) = component_data_ptr;
    }
    else {
      component_data_ptr[10] = *(uint64_t *)(scene_object_ptr + 0x38);
      *(uint64_t **)(*(longlong)(scene_object_ptr + 0x38) + 0x58) = component_data_ptr;
    }
    *(uint64_t **)(scene_object_ptr + 0x38) = component_data_ptr;
    component_data_ptr[4] = scene_object_ptr;
    component_data_ptr[0xb] = 0;
  }
  return;
}

// 全局变量警告：以下全局变量可能与较小符号在相同地址重叠

/**
 * 材质数据导出函数
 * 将网格材质数据导出为MMD格式文件
 * 
 * @param mesh_data_ptr 网格数据指针
 */
void export_material_data(longlong mesh_data_ptr)
{
  int *int_ptr;
  char char_val;
  longlong file_offset;
  uint64_t *file_handle;
  int32_t *buffer_ptr;
  void *data_ptr;
  int32_t *data_ptr2;
  uint file_size;
  ulonglong write_count;
  int index;
  longlong mesh_offset;
  ulonglong mesh_count;
  bool is_locked;
  int header_array [2];
  int count_array [2];
  int size_array [2];
  int8_t path_buffer [8];
  void *path_ptr;
  uint path_length;
  uint64_t file_info;
  int32_t magic_number;
  int mesh_index;
  longlong file_pos;
  int32_t version;
  longlong *ref_count_ptr;
  void *temp_ptr;
  longlong temp_size;
  int32_t temp_data;
  uint64_t stack_guard;
  
  stack_guard = 0xfffffffffffffffe;
  if (*(int *)(mesh_data_ptr + 0x324) < 1) {
    return;
  }
  
  // 初始化文件路径缓冲区
  FUN_1806279c0(path_buffer);
  index = path_length + -1;
  file_offset = (longlong)index;
  if (-1 < index) {
    do {
      if (*(char *)(file_offset + (longlong)path_ptr) == '/') goto LAB_18027d492;
      index = index + -1;
      file_offset = file_offset + -1;
    } while (-1 < file_offset);
  }
  index = -1;
LAB_18027d492:
  file_offset = FUN_180629a40(path_buffer, &temp_ptr, 0, index);
  if (path_ptr != (void *)0x0) {
    FUN_18064e900();
  }
  
  // 创建MMD文件路径
  write_count = 0;
  path_length = *(uint *)(file_offset + 0x10);
  path_ptr = *(void **)(file_offset + 8);
  file_info = *(uint64_t *)(file_offset + 0x18);
  *(int32_t *)(file_offset + 0x10) = 0;
  *(uint64_t *)(file_offset + 8) = 0;
  *(uint64_t *)(file_offset + 0x18) = 0;
  temp_ptr = &unknown_var_3456_ptr;
  if (temp_size != 0) {
    FUN_18064e900();
  }
  temp_size = 0;
  temp_data = 0;
  temp_ptr = &unknown_var_720_ptr;
  file_size = path_length + 4;
  FUN_1806277c0(path_buffer, file_size);
  *(int32_t *)(path_ptr + path_length) = 0x646d6d2f;  // "/mmd"
  *(int8_t *)((longlong)(path_ptr + path_length) + 4) = 0;
  path_length = file_size;
  FUN_180628380(path_buffer, *(int32_t *)(mesh_data_ptr + 0x324));
  index = path_length + 4;
  FUN_1806277c0(path_buffer, index);
  *(int32_t *)(path_ptr + path_length) = 0x646d6d2e;  // ".mmd"
  *(int8_t *)((longlong)(path_ptr + path_length) + 4) = 0;
  path_length = index;
  
  // 创建文件句柄
  file_handle = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18, 0x18, 8, 3);
  data_ptr = &system_buffer_ptr;
  if (path_ptr != (void *)0x0) {
    data_ptr = path_ptr;
  }
  *file_handle = 0;
  *(int8_t *)(file_handle + 2) = 0;
  FUN_18062dee0(file_handle, data_ptr, &unknown_var_9772_ptr);
  magic_number = 0x31444d4d;  // "MMD1"
  fwrite(&magic_number, 4, 1, file_handle[1]);
  
  // 写入网格数量
  count_array[0] = (int)(*(longlong *)(mesh_data_ptr + 0x40) - *(longlong *)(mesh_data_ptr + 0x38) >> 4);
  fwrite(count_array, 4, 1, file_handle[1]);
  mesh_count = write_count;
  if (0 < count_array[0]) {
    do {
      // 处理每个网格
      file_offset = *(longlong *)(mesh_count + *(longlong *)(mesh_data_ptr + 0x38));
      size_array[0] = *(int *)(file_offset + 0x20);
      fwrite(size_array, 4, 1, file_handle[1]);
      data_ptr = &system_buffer_ptr;
      if (*(void **)(file_offset + 0x18) != (void *)0x0) {
        data_ptr = *(void **)(file_offset + 0x18);
      }
      fwrite(data_ptr, 1, (longlong)size_array[0], file_handle[1]);
      mesh_index = (int)write_count;
      fwrite(&mesh_index, 4, 1, file_handle[1]);
      temp_data = 0;
      file_pos = file_offset;
      FUN_18007f770(&file_pos);
      file_offset = temp_size;
      header_array[0] = *(int *)(temp_size + 0x60);
      fwrite(header_array, 4, 1, file_handle[1]);
      buffer_ptr = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18, (longlong)header_array[0] << 2, 0x10);
      index = 0;
      if (0 < header_array[0]) {
        mesh_offset = 0;
        data_ptr2 = buffer_ptr;
        do {
          *data_ptr2 = *(int32_t *)(mesh_offset + 0x54 + *(longlong *)(file_offset + 0x68));
          index = index + 1;
          mesh_offset = mesh_offset + 0x5c;
          data_ptr2 = data_ptr2 + 1;
        } while (index < header_array[0]);
      }
      fwrite(buffer_ptr, 4, (longlong)header_array[0], file_handle[1]);
      file_offset = file_pos;
      if (buffer_ptr != (int32_t *)0x0) {
        FUN_18064e900(buffer_ptr);
      }
      
      // 清理网格引用
      if (file_pos != 0) {
        while( true ) {
          LOCK();
          char_val = *(char *)(file_offset + 0xec);
          is_locked = char_val == '\0';
          if (is_locked) {
            *(char *)(file_offset + 0xec) = '\x01';
            char_val = '\0';
          }
          UNLOCK();
          if (is_locked) break;
          index = _Thrd_id();
          if ((*(int *)(file_offset + 0xf0) == index) || (*(int *)(file_offset + 0xf0) != 0))
          goto LAB_18027d773;
          Sleep();
        }
        char_val = '\0';
LAB_18027d773:
        LOCK();
        int_ptr = (int *)(file_offset + 0xe8);
        index = *int_ptr;
        *int_ptr = *int_ptr + -1;
        UNLOCK();
        if (char_val == '\0') {
          if ((((index == 1) && (*(longlong *)(file_pos + 0x210) != 0)) &&
              (mesh_offset = file_pos, FUN_1800791a0(file_pos), *(char *)(mesh_offset + 0xfc) == '\0')) &&
             ((*(char *)(mesh_offset + 0xf4) == '\0' &&
              (((*(byte *)(mesh_offset + 0xfd) & 0x20) == 0 || ((*(byte *)(mesh_offset + 0xfe) & 1) == 0))))))
          {
            ref_count_ptr = *(longlong **)(mesh_offset + 0x210);
            *(uint64_t *)(mesh_offset + 0x210) = 0;
            if (ref_count_ptr != (longlong *)0x0) {
              (**(code **)(*ref_count_ptr + 0x38))();
            }
          }
          LOCK();
          *(int8_t *)(file_offset + 0xec) = 0;
          UNLOCK();
        }
        file_pos = 0;
      }
      file_size = (int)write_count + 1;
      write_count = (ulonglong)file_size;
      mesh_count = mesh_count + 0x10;
    } while ((int)file_size < count_array[0]);
  }
  
  // 关闭文件
  if (file_handle[1] != 0) {
    fclose();
    file_handle[1] = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  FUN_18064e900(file_handle);
}