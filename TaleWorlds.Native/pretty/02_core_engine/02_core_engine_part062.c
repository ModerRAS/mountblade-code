#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part062.c - 8个函数

// 函数：路径处理与搜索函数
// 功能：处理路径字符串，搜索特定模式，并进行路径解析和验证
void process_path_with_search(uint64_t context_ptr, uint64_t *path_array_ptr, int64_t path_offset, int64_t *result_ptr,
                             int search_param)

{
  byte temp_byte1;
  bool match_result;
  int64_t *temp_ptr1;
  int64_t temp_long1;
  uint64_t *temp_ptr2;
  uint64_t *temp_ptr3;
  uint64_t *temp_ptr4;
  uint64_t *temp_ptr5;
  void *temp_ptr6;
  byte *temp_byte_ptr1;
  uint temp_uint1;
  byte *temp_byte_ptr2;
  int temp_int1;
  uint64_t temp_ulong1;
  uint64_t temp_ulong2;
  uint64_t *temp_ptr7;
  uint64_t *temp_ptr8;
  float temp_float1;
  uint64_t *stack_temp_10;
  uint64_t *stack_temp_18;
  int64_t *stack_temp_20;
  void *stack_temp_c0;
  byte *stack_temp_b8;
  uint stack_temp_b0;
  uint64_t stack_temp_a8;
  void *stack_temp_a0;
  void *stack_temp_98;
  uint stack_temp_90;
  uint64_t stack_temp_88;
  void *stack_temp_80;
  void *stack_temp_78;
  uint stack_temp_70;
  uint64_t stack_temp_60;
  uint64_t *stack_temp_58;
  
  stack_temp_60 = 0xfffffffffffffffe;
  stack_temp_20 = result_ptr;
  allocate_string_buffer(&stack_temp_80, result_ptr + 4);
  temp_int1 = stack_temp_70 + 2;
  allocate_string_buffer(&stack_temp_80, temp_int1);
  *(int16_t *)(stack_temp_78 + stack_temp_70) = 0x2f2f;
  *(int8_t *)((int64_t)(stack_temp_78 + stack_temp_70) + 2) = 0;
  temp_ptr6 = &DEFAULT_STRING_PTR;
  if (*(void **)(path_offset + 8) != (void *)0x0) {
    temp_ptr6 = *(void **)(path_offset + 8);
  }
  stack_temp_70 = temp_int1;
  (**(code **)(*result_ptr + 0x10))(result_ptr, temp_ptr6);
  temp_ptr1 = (int64_t *)get_buffer_pointer(path_array_ptr, &stack_temp_10, result_ptr + 4);
  temp_ptr7 = (uint64_t *)(*temp_ptr1 + 0x40);
  if (search_param < 0) {
    temp_ptr1 = (int64_t *)get_buffer_pointer(path_array_ptr + 0x18, &stack_temp_10, result_ptr + 4);
    temp_float1 = *(float *)(*temp_ptr1 + 0x40);
    goto LAB_18009a8d1;
  }
  temp_ptr2 = *(uint64_t **)(*temp_ptr1 + 0x50);
  temp_ptr5 = temp_ptr7;
  if (temp_ptr2 == (uint64_t *)0x0) {
LAB_18009a8ab:
    temp_ptr5 = temp_ptr7;
  }
  else {
    do {
      if (*(int *)(temp_ptr2 + 4) < search_param) {
        temp_ptr2 = (uint64_t *)*temp_ptr2;
      }
      else {
        temp_ptr5 = temp_ptr2;
        temp_ptr2 = (uint64_t *)temp_ptr2[1];
      }
    } while (temp_ptr2 != (uint64_t *)0x0);
    if ((temp_ptr5 == temp_ptr7) || (search_param < *(int *)(temp_ptr5 + 4))) goto LAB_18009a8ab;
  }
  temp_float1 = *(float *)((int64_t)temp_ptr5 + 0x24);
LAB_18009a8d1:
  result_ptr[8] = (int64_t)(double)temp_float1;
  temp_ptr7 = (uint64_t *)path_array_ptr[1];
  do {
    if (temp_ptr7 == path_array_ptr) {
      stack_temp_80 = &EMPTY_STRING_PTR;
      if (stack_temp_78 == (void *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      handle_empty_string();
    }
    stack_temp_c0 = &EMPTY_STRING_PTR;
    stack_temp_a8 = 0;
    stack_temp_b8 = (byte *)0x0;
    stack_temp_b0 = 0;
    allocate_string_buffer(&stack_temp_c0, *(int32_t *)(temp_ptr7 + 6));
    if (*(int *)(temp_ptr7 + 6) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(stack_temp_b8, temp_ptr7[5], *(int *)(temp_ptr7 + 6) + 1);
    }
    if (temp_ptr7[5] != 0) {
      stack_temp_b0 = 0;
      if (stack_temp_b8 != (byte *)0x0) {
        *stack_temp_b8 = 0;
      }
      stack_temp_a8 = stack_temp_a8 & 0xffffffff;
    }
    temp_ptr6 = &DEFAULT_STRING_PTR;
    if (stack_temp_78 != (void *)0x0) {
      temp_ptr6 = stack_temp_78;
    }
    temp_int1 = compare_strings(&stack_temp_c0, temp_ptr6);
    temp_uint1 = stack_temp_b0;
    if (temp_int1 == 0) {
      temp_ulong1 = (uint64_t)(int)stack_temp_70;
      stack_temp_a0 = &EMPTY_STRING_PTR;
      stack_temp_88 = 0;
      stack_temp_98 = (void *)0x0;
      stack_temp_90 = 0;
      temp_int1 = stack_temp_b0 - stack_temp_70;
      if ((int)(stack_temp_b0 - stack_temp_70) < (int)(stack_temp_b0 - stack_temp_70)) {
        temp_int1 = stack_temp_b0 - stack_temp_70;
      }
      allocate_string_buffer(&stack_temp_a0, temp_int1 + 1);
      for (temp_ulong2 = temp_ulong1; ((int64_t)temp_ulong1 < (int64_t)(int)temp_uint1 && ((uint)temp_ulong2 < stack_temp_b0))
          ; temp_ulong2 = (uint64_t)((uint)temp_ulong2 + 1)) {
        temp_byte1 = stack_temp_b8[temp_ulong1];
        allocate_string_buffer(&stack_temp_a0, stack_temp_90 + 1);
        stack_temp_98[stack_temp_90] = temp_byte1;
        stack_temp_98[stack_temp_90 + 1] = 0;
        stack_temp_90 = stack_temp_90 + 1;
        temp_ulong1 = temp_ulong1 + 1;
      }
      temp_ptr6 = &DEFAULT_STRING_PTR;
      if (stack_temp_98 != (void *)0x0) {
        temp_ptr6 = stack_temp_98;
      }
      temp_long1 = find_substring(temp_ptr6, &SEARCH_PATTERN_PTR);
      if (temp_long1 == 0) {
        temp_ptr2 = (uint64_t *)allocate_memory(GLOBAL_MEMORY_POOL, 0x70, 8, 3);
        temp_uint1 = stack_temp_b0;
        *temp_ptr2 = &GLOBAL_STRING_PTR;
        temp_ptr2[1] = 0;
        *(int32_t *)(temp_ptr2 + 2) = 0;
        *temp_ptr2 = &EMPTY_STRING_PTR;
        temp_ptr2[3] = 0;
        temp_ptr2[1] = 0;
        *(int32_t *)(temp_ptr2 + 2) = 0;
        stack_temp_18 = temp_ptr2 + 4;
        *stack_temp_18 = &GLOBAL_STRING_PTR;
        temp_ptr2[5] = 0;
        *(int32_t *)(temp_ptr2 + 6) = 0;
        *stack_temp_18 = &EMPTY_STRING_PTR;
        temp_ptr2[7] = 0;
        temp_ptr2[5] = 0;
        *(int32_t *)(temp_ptr2 + 6) = 0;
        stack_temp_58 = temp_ptr2 + 9;
        *stack_temp_58 = 0;
        temp_ptr2[10] = 0;
        temp_ptr2[0xb] = 0;
        *(int32_t *)(temp_ptr2 + 0xc) = 3;
        temp_ptr2[0xd] = 0;
        temp_ptr2[8] = 0;
        temp_ulong1 = (uint64_t)stack_temp_b0;
        stack_temp_10 = temp_ptr2;
        if (stack_temp_b8 != (byte *)0x0) {
          allocate_string_buffer(stack_temp_18, temp_ulong1);
        }
        temp_ptr1 = stack_temp_20;
        if (temp_uint1 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(temp_ptr2[5], stack_temp_b8, temp_ulong1);
        }
        *(int32_t *)(temp_ptr2 + 6) = 0;
        if (temp_ptr2[5] != 0) {
          *(int8_t *)(temp_ulong1 + temp_ptr2[5]) = 0;
        }
        *(int32_t *)((int64_t)temp_ptr2 + 0x3c) = stack_temp_a8._4_4_;
        temp_ptr5 = (uint64_t *)path_array_ptr[2];
        temp_ptr3 = path_array_ptr;
        temp_byte_ptr2 = stack_temp_b8;
        if (temp_ptr5 == (uint64_t *)0x0) {
LAB_18009abe9:
          temp_ptr4 = path_array_ptr;
        }
        else {
          do {
            if (stack_temp_b0 == 0) {
              match_result = false;
              temp_ptr8 = (uint64_t *)temp_ptr5[1];
            }
            else {
              if (*(int *)(temp_ptr5 + 6) == 0) {
                match_result = true;
              }
              else {
                temp_byte_ptr1 = stack_temp_b8;
                do {
                  temp_byte_ptr2 = (byte *)(uint64_t)temp_byte_ptr1[temp_ptr5[5] - (int64_t)stack_temp_b8];
                  temp_uint1 = (uint)temp_byte_ptr1[temp_ptr5[5] - (int64_t)stack_temp_b8];
                  temp_int1 = *temp_byte_ptr1 - temp_uint1;
                  if (*temp_byte_ptr1 != temp_uint1) break;
                  temp_byte_ptr1 = temp_byte_ptr1 + 1;
                } while (temp_uint1 != 0);
                match_result = 0 < temp_int1;
                if (temp_int1 < 1) {
                  temp_ptr8 = (uint64_t *)temp_ptr5[1];
                  goto LAB_18009abab;
                }
              }
              temp_ptr8 = (uint64_t *)*temp_ptr5;
            }
LAB_18009abab:
            temp_ptr4 = temp_ptr5;
            if (match_result) {
              temp_ptr4 = temp_ptr3;
            }
            temp_ptr3 = temp_ptr4;
            temp_ptr5 = temp_ptr8;
          } while (temp_ptr8 != (uint64_t *)0x0);
          if (temp_ptr4 == path_array_ptr) goto LAB_18009abe9;
          if (*(int *)(temp_ptr4 + 6) != 0) {
            if (stack_temp_b0 != 0) {
              temp_byte_ptr1 = (byte *)temp_ptr4[5];
              temp_long1 = (int64_t)stack_temp_b8 - (int64_t)temp_byte_ptr1;
              do {
                temp_byte1 = *temp_byte_ptr1;
                temp_byte_ptr2 = (byte *)(uint64_t)temp_byte_ptr1[temp_long1];
                temp_uint1 = (uint)temp_byte_ptr1[temp_long1];
                if (temp_byte1 != temp_uint1) break;
                temp_byte_ptr1 = temp_byte_ptr1 + 1;
              } while (temp_uint1 != 0);
              if ((int)(temp_byte1 - temp_uint1) < 1) goto LAB_18009abec;
            }
            goto LAB_18009abe9;
          }
        }
LAB_18009abec:
        if (search_param == -1) {
LAB_18009ac35:
          temp_ptr2[0xd] = stack_temp_20;
          process_path_with_search(context_ptr, path_array_ptr, &stack_temp_a0, temp_ptr2, search_param);
          release_buffer_memory(temp_ptr1 + 9, &stack_temp_10);
        }
        else {
          temp_ptr5 = (uint64_t *)temp_ptr4[10];
          temp_ptr3 = temp_ptr4 + 8;
          if (temp_ptr5 != (uint64_t *)0x0) {
            do {
              if (*(int *)(temp_ptr5 + 4) < search_param) {
                temp_ptr5 = (uint64_t *)*temp_ptr5;
              }
              else {
                temp_ptr3 = temp_ptr5;
                temp_ptr5 = (uint64_t *)temp_ptr5[1];
              }
            } while (temp_ptr5 != (uint64_t *)0x0);
            if ((temp_ptr3 != temp_ptr4 + 8) && (*(int *)(temp_ptr3 + 4) <= search_param)) goto LAB_18009ac35;
          }
          free_memory(temp_ptr2, temp_byte_ptr2);
        }
      }
      stack_temp_a0 = &EMPTY_STRING_PTR;
      if (stack_temp_98 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        handle_empty_string();
      }
      stack_temp_98 = (void *)0x0;
      stack_temp_88 = stack_temp_88 & 0xffffffff00000000;
      stack_temp_a0 = &GLOBAL_STRING_PTR;
    }
    stack_temp_c0 = &EMPTY_STRING_PTR;
    if (stack_temp_b8 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      handle_empty_string();
    }
    stack_temp_b8 = (byte *)0x0;
    stack_temp_a8 = stack_temp_a8 & 0xffffffff00000000;
    stack_temp_c0 = &GLOBAL_STRING_PTR;
    temp_ptr7 = (uint64_t *)get_next_node(temp_ptr7);
  } while( true );
}



// 函数：初始化数据结构
// 功能：初始化一个复杂的数据结构，包含多个链表头和互斥锁
int64_t initialize_data_structure(int64_t structure_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  int64_t temp_long1;
  
  *(uint64_t *)(structure_ptr + 0x18) = 0;
  *(int32_t *)(structure_ptr + 0x28) = 3;
  *(int64_t *)structure_ptr = structure_ptr;
  *(int64_t *)(structure_ptr + 8) = structure_ptr;
  *(uint64_t *)(structure_ptr + 0x10) = 0;
  *(int8_t *)(structure_ptr + 0x18) = 0;
  *(uint64_t *)(structure_ptr + 0x20) = 0;
  temp_long1 = structure_ptr + 0x30;
  *(uint64_t *)(structure_ptr + 0x48) = 0;
  *(int32_t *)(structure_ptr + 0x58) = 3;
  *(int64_t *)temp_long1 = temp_long1;
  *(int64_t *)(structure_ptr + 0x38) = temp_long1;
  *(uint64_t *)(structure_ptr + 0x40) = 0;
  *(int8_t *)(structure_ptr + 0x48) = 0;
  *(uint64_t *)(structure_ptr + 0x50) = 0;
  temp_long1 = structure_ptr + 0x60;
  *(uint64_t *)(structure_ptr + 0x78) = 0;
  *(int32_t *)(structure_ptr + 0x88) = 3;
  *(int64_t *)temp_long1 = temp_long1;
  *(int64_t *)(structure_ptr + 0x68) = temp_long1;
  *(uint64_t *)(structure_ptr + 0x70) = 0;
  *(int8_t *)(structure_ptr + 0x78) = 0;
  *(uint64_t *)(structure_ptr + 0x80) = 0;
  temp_long1 = structure_ptr + 0x90;
  *(uint64_t *)(structure_ptr + 0xa8) = 0;
  *(int32_t *)(structure_ptr + 0xb8) = 3;
  *(int64_t *)temp_long1 = temp_long1;
  *(int64_t *)(structure_ptr + 0x98) = temp_long1;
  *(uint64_t *)(structure_ptr + 0xa0) = 0;
  *(int8_t *)(structure_ptr + 0xa8) = 0;
  *(uint64_t *)(structure_ptr + 0xb0) = 0;
  temp_long1 = structure_ptr + 0xc0;
  *(uint64_t *)(structure_ptr + 0xd8) = 0;
  *(int32_t *)(structure_ptr + 0xe8) = 3;
  *(int64_t *)temp_long1 = temp_long1;
  *(int64_t *)(structure_ptr + 200) = temp_long1;
  *(uint64_t *)(structure_ptr + 0xd0) = 0;
  *(int8_t *)(structure_ptr + 0xd8) = 0;
  *(uint64_t *)(structure_ptr + 0xe0) = 0;
  temp_long1 = structure_ptr + 0xf0;
  *(uint64_t *)(structure_ptr + 0x108) = 0;
  *(int32_t *)(structure_ptr + 0x118) = 3;
  *(int64_t *)temp_long1 = temp_long1;
  *(int64_t *)(structure_ptr + 0xf8) = temp_long1;
  *(uint64_t *)(structure_ptr + 0x100) = 0;
  *(int8_t *)(structure_ptr + 0x108) = 0;
  *(uint64_t *)(structure_ptr + 0x110) = 0;
  initialize_mutex(structure_ptr + 0x128, 0x102, param_3, param_4, 0xfffffffffffffffe);
  *(int16_t *)(structure_ptr + 0x124) = 1;
  *(int8_t *)(structure_ptr + 0x126) = 0;
  *(int32_t *)(structure_ptr + 0x178) = 0;
  return structure_ptr;
}



// 函数：计算加权平均值
// 功能：从数据结构中计算加权平均值
float calculate_weighted_average(int64_t data_ptr, int64_t offset_ptr)

{
  int64_t temp_long1;
  int64_t *temp_ptr1;
  int64_t temp_long2;
  int64_t temp_long3;
  float temp_float1;
  float temp_float2;
  int8_t temp_stack[8];
  
  temp_ptr1 = (int64_t *)get_buffer_pointer(data_ptr, temp_stack, offset_ptr + 0x20);
  temp_long1 = *temp_ptr1;
  if (temp_long1 != data_ptr) {
    temp_long3 = *(int64_t *)(temp_long1 + 0x60);
    if (temp_long3 != 0) {
      temp_long2 = *(int64_t *)(temp_long1 + 0x48);
      temp_float2 = 0.0;
      if (temp_long2 != temp_long1 + 0x40) {
        do {
          temp_float2 = temp_float2 + *(float *)(temp_long2 + 0x24);
          temp_long2 = get_next_node(temp_long2);
        } while (temp_long2 != temp_long1 + 0x40);
        temp_long3 = *(int64_t *)(temp_long1 + 0x60);
      }
      temp_float1 = (float)temp_long3;
      if (temp_long3 < 0) {
        temp_float1 = temp_float1 + 1.8446744e+19;
      }
      return temp_float2 / temp_float1;
    }
  }
  return (float)*(double *)(offset_ptr + 0x40);
}



// 函数：计算简单平均值
// 功能：计算链表中节点的简单平均值
float calculate_simple_average(int64_t list_ptr)

{
  int64_t current_ptr;
  int64_t base_ptr;
  float temp_float1;
  float temp_float2;
  
  temp_float2 = 0.0;
  if (current_ptr != base_ptr) {
    do {
      temp_float2 = temp_float2 + *(float *)(current_ptr + 0x24);
      current_ptr = get_next_node(current_ptr);
    } while (current_ptr != base_ptr);
    list_ptr = *(int64_t *)(base_ptr + 0x20);
  }
  temp_float1 = (float)list_ptr;
  if (list_ptr < 0) {
    temp_float1 = temp_float1 + 1.8446744e+19;
  }
  return temp_float2 / temp_float1;
}



// 函数：获取默认值
// 功能：返回默认的浮点数值
float get_default_value(void)

{
  int64_t context_ptr;
  
  return (float)*(double *)(context_ptr + 0x40);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：初始化渲染参数
// 功能：初始化渲染相关的参数和状态标志
void initialize_render_parameters(uint64_t *param_ptr)

{
  int64_t *temp_ptr1;
  int64_t temp_long1;
  int64_t temp_long2;
  int64_t temp_long3;
  int8_t temp_byte1;
  float *temp_float_ptr;
  uint64_t temp_ulong1;
  uint64_t *temp_ptr2;
  uint64_t temp_ulong2;
  int64_t temp_long4;
  int64_t temp_long5;
  float stack_temp_10;
  float stack_temp_14;
  
  temp_long3 = GLOBAL_ENGINE_CONTEXT;
  stack_temp_10 = (float)*(uint64_t *)(GLOBAL_SETTINGS + 0x17ec);
  stack_temp_14 = (float)((uint64_t)*(uint64_t *)(GLOBAL_SETTINGS + 0x17ec) >> 0x20);
  *param_ptr = CONCAT44(stack_temp_14 * *(float *)(GLOBAL_SETTINGS + 0x17e4),
                      stack_temp_10 * *(float *)(GLOBAL_SETTINGS + 0x17e0));
  *(float *)(param_ptr + 1) =
       (float)*(int *)(*(int64_t *)(temp_long3 + 0x2010) + 0x74) /
       *(float *)(*(int64_t *)(temp_long3 + 0x2010) + 0xc);
  if (((*(char *)(temp_long3 + 0x1518) == '\0') &&
      ((0.7 < *(float *)(temp_long3 + 0x1504) || *(float *)(temp_long3 + 0x1504) == 0.7 ||
       ((*(byte *)(temp_long3 + 0x1514) & 1) != 0)))) ||
     ((*(char *)(temp_long3 + 0x1710) == '\0' &&
      ((0.7 < *(float *)(temp_long3 + 0x16fc) || *(float *)(temp_long3 + 0x16fc) == 0.7 ||
       ((*(byte *)(temp_long3 + 0x170c) & 1) != 0)))))) {
    temp_byte1 = 1;
  }
  else {
    temp_byte1 = 0;
  }
  *(int8_t *)((int64_t)param_ptr + 0xc) = temp_byte1;
  if ((*(char *)(temp_long3 + 0x1530) != '\0') ||
     ((*(float *)(temp_long3 + 0x151c) <= 0.7 && *(float *)(temp_long3 + 0x151c) != 0.7 &&
      ((*(byte *)(temp_long3 + 0x152c) & 1) == 0)))) {
    temp_byte1 = 0;
  }
  else {
    temp_byte1 = 1;
  }
  *(int8_t *)((int64_t)param_ptr + 0xd) = temp_byte1;
  if ((*(char *)(temp_long3 + 0x1548) != '\0') ||
     ((*(float *)(temp_long3 + 0x1534) <= 0.7 && *(float *)(temp_long3 + 0x1534) != 0.7 &&
      ((*(byte *)(temp_long3 + 0x1544) & 1) == 0)))) {
    temp_byte1 = 0;
  }
  else {
    temp_byte1 = 1;
  }
  *(int8_t *)((int64_t)param_ptr + 0xe) = temp_byte1;
  temp_long4 = 0x38;
  temp_ptr2 = param_ptr + 2;
  temp_float_ptr = (float *)(temp_long3 + 4);
  do {
    if ((*(char *)(temp_float_ptr + 5) != '\0') ||
       ((*temp_float_ptr <= 0.7 && *temp_float_ptr != 0.7 && (((uint)temp_float_ptr[4] & 1) == 0)))) {
      temp_byte1 = 0;
    }
    else {
      temp_byte1 = 1;
    }
    *(int8_t *)((int64_t)temp_ptr2 + -1) = temp_byte1;
    if ((*(char *)(temp_float_ptr + 0xb) != '\0') ||
       ((temp_float_ptr[6] <= 0.7 && temp_float_ptr[6] != 0.7 && (((uint)temp_float_ptr[10] & 1) == 0)))) {
      temp_byte1 = 0;
    }
    else {
      temp_byte1 = 1;
    }
    *(int8_t *)temp_ptr2 = temp_byte1;
    if ((*(char *)(temp_float_ptr + 0x11) != '\0') ||
       ((temp_float_ptr[0xc] <= 0.7 && temp_float_ptr[0xc] != 0.7 && (((uint)temp_float_ptr[0x10] & 1) == 0)))) {
      temp_byte1 = 0;
    }
    else {
      temp_byte1 = 1;
    }
    *(int8_t *)((int64_t)temp_ptr2 + 1) = temp_byte1;
    if ((*(char *)(temp_float_ptr + 0x17) != '\0') ||
       ((temp_float_ptr[0x12] <= 0.7 && temp_float_ptr[0x12] != 0.7 && (((uint)temp_float_ptr[0x16] & 1) == 0)))) {
      temp_byte1 = 0;
    }
    else {
      temp_byte1 = 1;
    }
    *(int8_t *)((int64_t)temp_ptr2 + 2) = temp_byte1;
    temp_float_ptr = temp_float_ptr + 0x18;
    temp_ptr2 = (uint64_t *)((int64_t)temp_ptr2 + 4);
    temp_long4 = temp_long4 + -1;
  } while (temp_long4 != 0);
  if ((*(char *)((int64_t)param_ptr + 0x2c) == '\0') && (*(char *)((int64_t)param_ptr + 0xac) == '\0')
     ) {
    temp_byte1 = 0;
  }
  else {
    temp_byte1 = 1;
  }
  *(int8_t *)((int64_t)param_ptr + 0x20f) = temp_byte1;
  if ((*(char *)((int64_t)param_ptr + 0x47) == '\0') && (*(char *)((int64_t)param_ptr + 199) == '\0'))
  {
    temp_byte1 = 0;
  }
  else {
    temp_byte1 = 1;
  }
  *(int8_t *)(param_ptr + 0x42) = temp_byte1;
  if ((*(char *)((int64_t)param_ptr + 0x39) == '\0') && (*(char *)((int64_t)param_ptr + 0x45) == '\0')
     ) {
    temp_byte1 = 0;
  }
  else {
    temp_byte1 = 1;
  }
  *(int8_t *)((int64_t)param_ptr + 0x211) = temp_byte1;
  temp_ptr1 = param_ptr + 0x43;
  if (temp_ptr1 != (int64_t *)(temp_long3 + 0x2030)) {
    temp_long4 = *temp_ptr1;
    temp_long1 = *(int64_t *)(temp_long3 + 0x2038);
    temp_long3 = *(int64_t *)(temp_long3 + 0x2030);
    temp_long5 = temp_long1 - temp_long3;
    temp_ulong2 = temp_long5 >> 2;
    if ((uint64_t)(param_ptr[0x45] - temp_long4 >> 2) < temp_ulong2) {
      if (temp_ulong2 == 0) {
        temp_long4 = 0;
      }
      else {
        temp_long4 = allocate_memory(GLOBAL_MEMORY_POOL, temp_ulong2 * 4, *(int8_t *)(param_ptr + 0x46));
      }
      if (temp_long3 != temp_long1) {
                    // WARNING: Subroutine does not return
        memmove(temp_long4, temp_long3, temp_long5);
      }
      if (*temp_ptr1 != 0) {
                    // WARNING: Subroutine does not return
        release_memory();
      }
      temp_long3 = temp_long4 + temp_ulong2 * 4;
      *temp_ptr1 = temp_long4;
      param_ptr[0x44] = temp_long3;
      param_ptr[0x45] = temp_long3;
    }
    else {
      temp_long2 = param_ptr[0x44];
      temp_ulong1 = temp_long2 - temp_long4 >> 2;
      if (temp_ulong1 < temp_ulong2) {
        temp_long5 = temp_ulong1 * 4 + temp_long3;
        if (temp_long3 != temp_long5) {
                    // WARNING: Subroutine does not return
          memmove(temp_long4, temp_long3);
        }
        if (temp_long5 != temp_long1) {
                    // WARNING: Subroutine does not return
          memmove(temp_long2, temp_long5, temp_long1 - temp_long5);
        }
        param_ptr[0x44] = temp_long2;
      }
      else {
        if (temp_long3 != temp_long1) {
                    // WARNING: Subroutine does not return
          memmove(temp_long4, temp_long3, temp_long5);
        }
        param_ptr[0x44] = temp_long4;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：数组内存管理
// 功能：管理数组的内存分配和数据移动
void manage_array_memory(int64_t array_ptr)

{
  int64_t temp_long1;
  int64_t temp_long2;
  int64_t temp_ptr;
  int64_t temp_long3;
  uint64_t temp_ulong1;
  int64_t *array_info;
  uint64_t temp_ulong2;
  int64_t *array_bounds;
  int64_t temp_long4;
  
  temp_long1 = array_bounds[1];
  temp_long2 = *array_bounds;
  temp_long4 = temp_long1 - temp_long2;
  temp_ulong2 = temp_long4 >> 2;
  if ((uint64_t)(temp_ptr - array_ptr >> 2) < temp_ulong2) {
    if (temp_ulong2 == 0) {
      temp_long3 = 0;
    }
    else {
      temp_long3 = allocate_memory(GLOBAL_MEMORY_POOL, temp_ulong2 * 4, (char)array_info[3]);
    }
    if (temp_long2 != temp_long1) {
                    // WARNING: Subroutine does not return
      memmove(temp_long3, temp_long2, temp_long4);
    }
    if (*array_info != 0) {
                    // WARNING: Subroutine does not return
      release_memory();
    }
    temp_long1 = temp_long3 + temp_ulong2 * 4;
    *array_info = temp_long3;
    array_info[1] = temp_long1;
    array_info[2] = temp_long1;
  }
  else {
    temp_long3 = array_info[1];
    temp_ulong1 = temp_long3 - array_ptr >> 2;
    if (temp_ulong1 < temp_ulong2) {
      temp_long4 = temp_ulong1 * 4 + temp_long2;
      if (temp_long2 != temp_long4) {
                    // WARNING: Subroutine does not return
        memmove(array_ptr, temp_long2);
      }
      if (temp_long4 != temp_long1) {
                    // WARNING: Subroutine does not return
        memmove(temp_long3, temp_long4, temp_long1 - temp_long4);
      }
      array_info[1] = temp_long3;
    }
    else {
      if (temp_long2 != temp_long1) {
                    // WARNING: Subroutine does not return
        memmove(array_ptr, temp_long2, temp_long4);
      }
      array_info[1] = array_ptr;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：动态数组管理
// 功能：管理动态数组的内存分配和初始化
void manage_dynamic_array(void)

{
  int64_t temp_long1;
  int64_t temp_long2;
  int64_t *array_info;
  int64_t array_size;
  int64_t start_ptr;
  int64_t end_ptr;
  
  if (array_size == 0) {
    temp_long2 = 0;
  }
  else {
    temp_long2 = allocate_memory(GLOBAL_MEMORY_POOL, array_size * 4, (char)array_info[3]);
  }
  if (start_ptr != end_ptr) {
                    // WARNING: Subroutine does not return
    memmove(temp_long2);
  }
  if (*array_info != 0) {
                    // WARNING: Subroutine does not return
    release_memory();
  }
  temp_long1 = temp_long2 + array_size * 4;
  *array_info = temp_long2;
  array_info[1] = temp_long1;
  array_info[2] = temp_long1;
  return;
}



// 函数：数组数据操作
// 功能：在数组中插入或移动数据
void manipulate_array_data(int64_t target_ptr)

{
  int64_t temp_long1;
  int64_t temp_long2;
  uint64_t temp_ulong1;
  int64_t array_info;
  uint64_t array_size;
  int64_t source_ptr;
  int64_t end_ptr;
  
  temp_long2 = *(int64_t *)(array_info + 8);
  temp_ulong1 = temp_long2 - target_ptr >> 2;
  if (temp_ulong1 < array_size) {
    temp_long1 = temp_ulong1 * 4 + source_ptr;
    if (source_ptr != temp_long1) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    if (temp_long1 != end_ptr) {
                    // WARNING: Subroutine does not return
      memmove(temp_long2, temp_long1, end_ptr - temp_long1);
    }
    *(int64_t *)(array_info + 8) = temp_long2;
  }
  else {
    if (source_ptr != end_ptr) {
                    // WARNING: Subroutine does not return
      memmove();
    }
    *(int64_t *)(array_info + 8) = target_ptr;
  }
  return;
}



// 函数：空操作函数
// 功能：空函数，无实际操作
void empty_function(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：更新配置参数
// 功能：更新系统配置参数和状态标志
void update_configuration_parameters(int32_t *config_ptr)

{
  int32_t temp_uint1;
  int16_t temp_uint2;
  int temp_int1;
  int64_t temp_long1;
  int temp_int2;
  int temp_int3;
  uint64_t temp_ulong1;
  uint64_t temp_ulong2;
  int *temp_int_ptr1;
  uint64_t temp_ulong3;
  int16_t *temp_uint_ptr1;
  
  temp_long1 = GLOBAL_CONFIG_BASE;
  temp_ulong3 = 0;
  temp_uint1 = config_ptr[1];
  *(int32_t *)(GLOBAL_CONFIG_BASE + 0x118) = *config_ptr;
  *(int32_t *)(temp_long1 + 0x11c) = temp_uint1;
  *(int32_t *)(temp_long1 + 0x128) = config_ptr[2];
  *(int8_t *)(temp_long1 + 0x120) = *(int8_t *)(config_ptr + 3);
  *(int8_t *)(temp_long1 + 0x121) = *(int8_t *)((int64_t)config_ptr + 0xd);
  *(int8_t *)(temp_long1 + 0x122) = *(int8_t *)((int64_t)config_ptr + 0xe);
  temp_ulong1 = temp_ulong3;
  temp_ulong2 = temp_ulong3;
  do {
    if ((int)temp_ulong2 == 0x9c) {
      if ((*(char *)(temp_long1 + 0x154) == '\0') && (*(char *)((int64_t)config_ptr + 0xab) == '\0')) {
        *(int8_t *)(temp_long1 + 0x154) = 0;
      }
      else {
        *(int8_t *)(temp_long1 + 0x154) = 1;
      }
    }
    else {
      *(int8_t *)(temp_ulong1 + 0x138 + temp_long1) = *(int8_t *)(temp_ulong1 + 0xf + (int64_t)config_ptr);
    }
    temp_ulong2 = (uint64_t)((int)temp_ulong2 + 1);
    temp_ulong1 = temp_ulong1 + 1;
  } while ((int64_t)temp_ulong1 < 0x200);
  *(int8_t *)(temp_long1 + 0x134) = *(int8_t *)((int64_t)config_ptr + 0x20f);
  *(int8_t *)(temp_long1 + 0x136) = *(int8_t *)(config_ptr + 0x84);
  *(int8_t *)(temp_long1 + 0x135) = *(int8_t *)((int64_t)config_ptr + 0x211);
  temp_uint_ptr1 = *(int16_t **)(config_ptr + 0x86);
  temp_ulong1 = (uint64_t)((int64_t)*(int16_t **)(config_ptr + 0x88) + (3 - (int64_t)temp_uint_ptr1)) >> 2;
  if (*(int16_t **)(config_ptr + 0x88) < temp_uint_ptr1) {
    temp_ulong1 = temp_ulong3;
  }
  if (temp_ulong1 != 0) {
    temp_int_ptr1 = (int *)(temp_long1 + 0x1530);
    temp_int2 = *temp_int_ptr1;
    do {
      temp_int3 = *(int *)(temp_long1 + 0x1534);
      temp_uint2 = *temp_uint_ptr1;
      if (temp_int2 == temp_int3) {
        if (temp_int3 == 0) {
          temp_int3 = 8;
        }
        else {
          temp_int3 = temp_int3 / 2 + temp_int3;
        }
        temp_int1 = temp_int2 + 1;
        if (temp_int2 + 1 < temp_int3) {
          temp_int1 = temp_int3;
        }
        resize_array(temp_int_ptr1, temp_int1);
        temp_int2 = *temp_int_ptr1;
      }
      temp_uint_ptr1 = temp_uint_ptr1 + 2;
      temp_ulong3 = temp_ulong3 + 1;
      *(int16_t *)(*(int64_t *)(temp_long1 + 0x1538) + (int64_t)temp_int2 * 2) = temp_uint2;
      *temp_int_ptr1 = *temp_int_ptr1 + 1;
      temp_int2 = *temp_int_ptr1;
    } while (temp_ulong3 != temp_ulong1);
  }
  return;
}



// 函数：数组数据复制
// 功能：将数据从一个数组复制到另一个数组
void copy_array_data(void)

{
  int16_t temp_uint1;
  int temp_int1;
  int *dest_array;
  int64_t copy_count;
  int16_t *src_array;
  int64_t total_count;
  
  temp_int1 = *dest_array;
  do {
    temp_uint1 = *src_array;
    if (temp_int1 == dest_array[1]) {
      resize_array();
      temp_int1 = *dest_array;
    }
    src_array = src_array + 2;
    copy_count = copy_count + 1;
    *(int16_t *)(*(int64_t *)(dest_array + 2) + (int64_t)temp_int1 * 2) = temp_uint1;
    *dest_array = *dest_array + 1;
    temp_int1 = *dest_array;
  } while (copy_count != total_count);
  return;
}