#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part038.c - 核心引擎矩阵变换和线程管理模块
// 本文件包含矩阵变换计算、线程同步和资源管理相关功能

/**
 * 更新变换矩阵并处理线程同步
 * 从全局数据结构中读取矩阵数据，进行矩阵乘法运算，并处理线程间的同步
 */
void update_transform_matrix_and_sync(void)

{
  longlong *matrix_buffer_ptr1;
  longlong *matrix_buffer_ptr2;
  byte *byte_data_ptr;
  undefined8 *data_block_ptr;
  float transform_x;
  float transform_y;
  float transform_z;
  float scale_x;
  float scale_y;
  float scale_z;
  float rotation_x;
  float rotation_y;
  float rotation_z;
  char thread_count;
  float *matrix_data;
  longlong matrix_base_addr;
  float matrix_val_17;
  float matrix_val_18;
  float matrix_val_19;
  float matrix_val_20;
  float matrix_val_21;
  float matrix_val_22;
  float matrix_val_23;
  float matrix_val_24;
  float matrix_val_25;
  float matrix_val_26;
  float matrix_val_27;
  float matrix_val_28;
  undefined8 temp_data_64;
  undefined4 temp_data_32;
  longlong offset_val;
  longlong *thread_array_ptr;
  uint index_val;
  int loop_counter;
  uint hash_val;
  int array_index;
  longlong context_ptr;
  ulonglong thread_count_ulong;
  char *thread_name_ptr;
  uint *global_counter_ptr;
  int sync_flag;
  longlong render_context;
  int matrix_index;
  int data_index;
  longlong global_data_base;
  uint matrix_data_index;
  int sync_flag_value;
  longlong render_context_ptr;
  int matrix_data_index;
  int thread_data_index;
  longlong global_engine_data;
  undefined4 *matrix_block_data;
  uint *index_array_data;
  uint *index_array_ptr;
  ulonglong memory_page_start;
  ulonglong memory_page_end;
  bool is_memory_allocated;
  undefined4 matrix_register_a;
  undefined4 matrix_register_b;
  undefined8 thread_sync_param_64;
  undefined8 thread_sync_param_58;
  
  // 计算矩阵数据的哈希值
  matrix_data_index = (int)*(char *)(render_context_ptr + 0xd) + *(int *)(render_context_ptr + 0x18);
  matrix_data = (float *)**(longlong **)(context_ptr + 600);
  global_engine_data = (longlong)*(int *)(GLOBAL_ENGINE_DATA + 0xe78) * 0x128 + GLOBAL_ENGINE_DATA + 0xc28;
  index_array_data = matrix_data_index >> 0xd;
  matrix_base_addr = *(longlong *)(global_engine_data + 8 + (ulonglong)index_array_data * 8);
  offset_val = (ulonglong)(matrix_data_index + index_array_data * -0x2000) * 0x40;
  temp_data_64 = ((undefined8 *)(matrix_base_addr + offset_val))[1];
  *(undefined8 *)matrix_data = *(undefined8 *)(matrix_base_addr + offset_val);
  *(undefined8 *)(matrix_data + 2) = temp_data_64;
  data_block_ptr = (undefined8 *)(matrix_base_addr + 0x10 + offset_val);
  temp_data_64 = data_block_ptr[1];
  *(undefined8 *)(matrix_data + 4) = *data_block_ptr;
  *(undefined8 *)(matrix_data + 6) = temp_data_64;
  data_block_ptr = (undefined8 *)(matrix_base_addr + 0x20 + offset_val);
  temp_data_64 = data_block_ptr[1];
  *(undefined8 *)(matrix_data + 8) = *data_block_ptr;
  *(undefined8 *)(matrix_data + 10) = temp_data_64;
  data_block_ptr = (undefined8 *)(matrix_base_addr + 0x30 + offset_val);
  temp_data_64 = data_block_ptr[1];
  *(undefined8 *)(matrix_data + 0xc) = *data_block_ptr;
  *(undefined8 *)(matrix_data + 0xe) = temp_data_64;
  matrix_base_addr = *(longlong *)(render_context_ptr + 0x10);
  matrix_val_17 = matrix_data[8];
  matrix_val_18 = matrix_data[9];
  matrix_val_19 = matrix_data[10];
  matrix_val_20 = matrix_data[0xb];
  matrix_val_21 = *matrix_data;
  matrix_val_22 = matrix_data[1];
  matrix_val_23 = matrix_data[2];
  matrix_val_24 = matrix_data[3];
  matrix_val_25 = matrix_data[4];
  matrix_val_26 = matrix_data[5];
  matrix_val_27 = matrix_data[6];
  matrix_val_28 = matrix_data[7];
  transform_x = *(float *)(matrix_base_addr + 0x374);
  transform_y = *(float *)(matrix_base_addr + 0x370);
  transform_z = *(float *)(matrix_base_addr + 0x378);
  scale_x = *(float *)(matrix_base_addr + 900);
  scale_y = *(float *)(matrix_base_addr + 0x394);
  rotation_x = *(float *)(matrix_base_addr + 0x380);
  rotation_y = *(float *)(matrix_base_addr + 0x388);
  rotation_z = *(float *)(matrix_base_addr + 0x390);
  // 矩阵变换计算
  *matrix_data = transform_x * matrix_val_25 + transform_y * matrix_val_21 + transform_z * matrix_val_17;
  matrix_data[1] = transform_x * matrix_val_26 + transform_y * matrix_val_22 + transform_z * matrix_val_18;
  matrix_data[2] = transform_x * matrix_val_27 + transform_y * matrix_val_23 + transform_z * matrix_val_19;
  matrix_data[3] = transform_x * matrix_val_28 + transform_y * matrix_val_24 + transform_z * matrix_val_20;
  matrix_data[4] = scale_x * matrix_val_25 + rotation_x * matrix_val_21 + rotation_y * matrix_val_17;
  matrix_data[5] = scale_x * matrix_val_26 + rotation_x * matrix_val_22 + rotation_y * matrix_val_18;
  matrix_data[6] = scale_x * matrix_val_27 + rotation_x * matrix_val_23 + rotation_y * matrix_val_19;
  matrix_data[7] = scale_x * matrix_val_28 + rotation_x * matrix_val_24 + rotation_y * matrix_val_20;
  matrix_data[8] = scale_y * matrix_val_25 + rotation_z * matrix_val_21 + rotation_z * matrix_val_17;
  matrix_data[9] = scale_y * matrix_val_26 + rotation_z * matrix_val_22 + rotation_z * matrix_val_18;
  matrix_data[10] = scale_y * matrix_val_27 + rotation_z * matrix_val_23 + rotation_z * matrix_val_19;
  matrix_data[0xb] = scale_y * matrix_val_28 + rotation_z * matrix_val_24 + rotation_z * matrix_val_20;
  matrix_base_addr = *(longlong *)(context_ptr + 600);
  // 检查是否需要更新同步状态
  if (*(int *)(matrix_base_addr + 0x28) != *(int )(GLOBAL_SYNC_DATA + 0x224)) {
    sync_flag_value = *(int )(matrix_base_addr + 0x1c) + *(int )(matrix_base_addr + 0x18);
    *(int )(matrix_base_addr + 0x28) = *(int )(GLOBAL_SYNC_DATA + 0x224);
    if (0 < sync_flag_value) {
      thread_sync_param_64 = thread_sync_param_58;
      global_data_base = (longlong)*(int )(GLOBAL_ENGINE_CONTEXT + 0xe78) * 0x128 + GLOBAL_ENGINE_CONTEXT + 0xc28;
      temp_data_32 = process_matrix_sync(global_data_base, sync_flag_value, offset_val, matrix_data, CONCAT44(matrix_register_b, matrix_register_a));
      *(undefined4 *)(matrix_base_addr + 0x30) = temp_data_32;
      update_thread_sync(global_data_base, temp_data_32);
      if (*(longlong *)(matrix_base_addr + 0x10) == 0) {
        if (*(int *)(matrix_base_addr + 0x18) != 0) {
          *(undefined4 *)(matrix_base_addr + 0x2c) = *(undefined4 *)(matrix_base_addr + 0x30);
          return;
        }
      }
      else {
        // 处理线程数据同步
        thread_count = *(char *)(matrix_base_addr + 0x44);
        thread_count_ulong = (ulonglong)thread_count;
        thread_array_ptr = (longlong *)(matrix_base_addr + 0x38);
        sync_flag_value = (int)thread_count;
        if (*(int *)(matrix_base_addr + 0x40) == (int)thread_count) {
          thread_array_ptr = (longlong *)*thread_array_ptr;
        }
        else {
          *(int *)(matrix_base_addr + 0x40) = sync_flag_value;
          if (*thread_array_ptr != 0) {
                    // WARNING: Subroutine does not return
            handle_memory_error();
          }
          *thread_array_ptr = 0;
          if (thread_count == '\0') {
            thread_array_ptr = (longlong *)0x0;
            *thread_array_ptr = 0;
          }
          else {
            thread_array_ptr = (longlong *)allocate_thread_buffer(GLOBAL_MEMORY_POOL, (longlong)thread_count * 4);
            *thread_array_ptr = (longlong)thread_array_ptr;
          }
        }
        if (thread_array_ptr != (longlong *)0x0) {
          // 初始化线程数组数据
          array_index = 0;
          index_array_data = (uint)thread_count;
          data_index = array_index;
          if ((0 < sync_flag_value) && (0xf < index_array_data)) {
            sync_flag_value = *(int *)(matrix_base_addr + 0x2c);
            thread_array_ptr = (longlong *)((longlong)thread_array_ptr + (longlong)(thread_count + -1) * 4);
            if ((((longlong *)(matrix_base_addr + 0x2c) < thread_array_ptr) || (thread_array_ptr < (longlong *)(matrix_base_addr + 0x2c)))
               && ((thread_array_ptr < thread_array_ptr || (data_index = 0, thread_array_ptr < thread_array_ptr)))) {
              index_array_data = index_array_data & 0x8000000f;
              if ((int)index_array_data < 0) {
                index_array_data = (index_array_data - 1 | 0xfffffff0) + 1;
              }
              thread_array_ptr = thread_array_ptr + 4;
              sync_flag_value = 8;
              do {
                *(int *)(thread_array_ptr + -4) = array_index + sync_flag_value;
                *(int *)((longlong)thread_array_ptr + -0x1c) = array_index + 1 + sync_flag_value;
                *(int *)(thread_array_ptr + -3) = array_index + 2 + sync_flag_value;
                *(int *)((longlong)thread_array_ptr + -0x14) = array_index + 3 + sync_flag_value;
                array_index = array_index + 0x10;
                *(int *)(thread_array_ptr + -2) = sync_flag_value + -4 + sync_flag_value;
                *(int *)((longlong)thread_array_ptr + -0xc) = sync_flag_value + -3 + sync_flag_value;
                *(int *)(thread_array_ptr + -1) = sync_flag_value + -2 + sync_flag_value;
                *(int *)((longlong)thread_array_ptr + -4) = sync_flag_value + -1 + sync_flag_value;
                *(int *)thread_array_ptr = sync_flag_value + sync_flag_value;
                *(int *)((longlong)thread_array_ptr + 4) = sync_flag_value + 1 + sync_flag_value;
                *(int *)(thread_array_ptr + 1) = sync_flag_value + 2 + sync_flag_value;
                *(int *)((longlong)thread_array_ptr + 0xc) = sync_flag_value + 3 + sync_flag_value;
                *(int *)(thread_array_ptr + 2) = sync_flag_value + 4 + sync_flag_value;
                *(int *)((longlong)thread_array_ptr + 0x14) = sync_flag_value + 5 + sync_flag_value;
                *(int *)(thread_array_ptr + 3) = sync_flag_value + 6 + sync_flag_value;
                *(int *)((longlong)thread_array_ptr + 0x1c) = sync_flag_value + 7 + sync_flag_value;
                thread_array_ptr = thread_array_ptr + 8;
                sync_flag_value = sync_flag_value + 0x10;
                data_index = array_index;
              } while (array_index < (int)(index_array_data - index_array_data));
            }
          }
          for (global_data_base = (longlong)data_index; global_data_base < (longlong)thread_count_ulong; global_data_base = global_data_base + 1) {
            array_index = *(int *)(matrix_base_addr + 0x2c) + data_index;
            data_index = data_index + 1;
            *(int *)(*thread_array_ptr + global_data_base * 4) = array_index;
          }
          data_index = *(int *)(matrix_base_addr + 0x18);
          array_index = 0;
          if (0 < (longlong)data_index) {
            global_data_base = 0;
            do {
              sync_flag_value = *(int *)(matrix_base_addr + 0x30) + array_index;
              array_index = array_index + 1;
              byte_data_ptr = (byte *)(*(longlong *)(matrix_base_addr + 0x10) + global_data_base);
              global_data_base = global_data_base + 1;
              *(int *)(*thread_array_ptr + (ulonglong)*byte_data_ptr * 4) = sync_flag_value;
            } while (global_data_base < data_index);
          }
        }
        // 处理全局数据索引
        global_counter_ptr = (uint *)((longlong)*(int )(GLOBAL_ENGINE_CONTEXT + 0xc20) * 0x128 +
                          GLOBAL_ENGINE_CONTEXT + 0x9d0);
        if (sync_flag_value == 0) {
          index_array_data = (int)thread_count - 1;
        }
        else {
          LOCK();
          index_array_data = *global_counter_ptr;
          *global_counter_ptr = *global_counter_ptr + (int)thread_count;
          UNLOCK();
          memory_page_start = (ulonglong)(index_array_data >> 0xb);
          memory_page_end = (ulonglong)(thread_count + -1 + index_array_data >> 0xb);
          if (memory_page_start <= memory_page_end) {
            thread_name_ptr = (char *)((longlong)global_counter_ptr + memory_page_start + 0x108);
            global_data_base = (memory_page_end - memory_page_start) + 1;
            index_array_ptr = global_counter_ptr + memory_page_start * 2 + 2;
            do {
              data_index = (int)memory_page_start;
              if (*(longlong *)index_array_ptr == 0) {
                offset_val = allocate_memory_page(GLOBAL_MEMORY_POOL, 0x2000, 0x25);
                LOCK();
                is_memory_allocated = *(longlong *)(global_counter_ptr + (longlong)data_index * 2 + 2) == 0;
                if (is_memory_allocated) {
                  *(longlong *)(global_counter_ptr + (longlong)data_index * 2 + 2) = offset_val;
                }
                UNLOCK();
                if (is_memory_allocated) {
                  LOCK();
                  *(undefined1 *)((longlong)data_index + 0x108 + (longlong)global_counter_ptr) = 0;
                  UNLOCK();
                }
                else {
                  if (offset_val != 0) {
                    // WARNING: Subroutine does not return
                    handle_memory_error();
                  }
                  do {
                  } while (*thread_name_ptr != '\0');
                }
              }
              else {
                do {
                } while (*thread_name_ptr != '\0');
              }
              memory_page_start = (ulonglong)(data_index + 1);
              index_array_ptr = index_array_ptr + 2;
              thread_name_ptr = thread_name_ptr + 1;
              global_data_base = global_data_base + -1;
            } while (global_data_base != 0);
          }
        }
        // 复制数据到内存页面
        matrix_block_data = *(undefined4 **)(matrix_base_addr + 0x38);
        index_array_data = index_array_data >> 0xb;
        *(uint *)(matrix_base_addr + 0x2c) = index_array_data;
        if (index_array_data == (int)thread_count + index_array_data >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(global_counter_ptr + (ulonglong)index_array_data * 2 + 2) +
                 (ulonglong)(index_array_data + index_array_data * -0x800) * 4, matrix_block_data, (thread_count_ulong & 0xffffffff) << 2);
        }
        if (sync_flag_value != 0) {
          thread_count_ulong = thread_count_ulong & 0xffffffff;
          do {
            temp_data_32 = *matrix_block_data;
            matrix_block_data = matrix_block_data + 1;
            *(undefined4 *)
             (*(longlong *)(global_counter_ptr + (ulonglong)(index_array_data >> 0xb) * 2 + 2) +
             (ulonglong)(index_array_data + (index_array_data >> 0xb) * -0x800) * 4) = temp_data_32;
            thread_count_ulong = thread_count_ulong - 1;
            index_array_data = index_array_data + 1;
          } while (thread_count_ulong != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理矩阵变换和同步更新
 * 根据传入的参数处理矩阵数据，包括变换计算和线程同步
 */
void process_matrix_transform_and_sync(longlong render_context, uint matrix_index, undefined8 sync_param, float *matrix_data)

{
  longlong *matrix_ptr1;
  longlong *matrix_ptr2;
  byte *byte_data_ptr;
  undefined8 *data_block_ptr;
  float transform_x;
  float transform_y;
  float transform_z;
  float scale_x;
  float scale_y;
  float scale_z;
  float rotation_x;
  float rotation_y;
  float rotation_z;
  float extra_param;
  longlong matrix_base_addr;
  float matrix_val_1;
  float matrix_val_2;
  float matrix_val_3;
  float matrix_val_4;
  float matrix_val_5;
  float matrix_val_6;
  float matrix_val_7;
  float matrix_val_8;
  float matrix_val_9;
  float matrix_val_10;
  float matrix_val_11;
  float matrix_val_12;
  undefined8 temp_data_64;
  undefined4 temp_data_32;
  uint index_val;
  longlong offset_val;
  longlong *thread_array_ptr;
  longlong memory_addr;
  int loop_counter;
  int array_index;
  longlong context_ptr;
  ulonglong thread_count_ulong;
  char *thread_name_ptr;
  uint *global_counter_ptr;
  int sync_flag;
  uint thread_data_index;
  longlong render_context_ptr;
  int data_index;
  undefined4 *matrix_block_data;
  uint *index_array_data;
  ulonglong memory_page_start;
  ulonglong memory_page_end;
  bool is_memory_allocated;
  undefined4 matrix_register_a;
  undefined4 matrix_register_b;
  undefined8 thread_sync_param_64;
  undefined8 thread_sync_param_58;
  
  param_1 = (longlong)*(int *)(param_1 + 0x250) * 0x128 + param_1;
  matrix_base_addr = *(longlong *)(param_1 + 8 + (ulonglong)(param_2 >> 0xd) * 8);
  memory_addr = (ulonglong)(param_2 + (param_2 >> 0xd) * -0x2000) * 0x40;
  temp_data_64 = ((undefined8 *)(matrix_base_addr + memory_addr))[1];
  *(undefined8 *)param_4 = *(undefined8 *)(matrix_base_addr + memory_addr);
  *(undefined8 *)(param_4 + 2) = temp_data_64;
  data_block_ptr = (undefined8 *)(matrix_base_addr + 0x10 + memory_addr);
  temp_data_64 = data_block_ptr[1];
  *(undefined8 *)(param_4 + 4) = *data_block_ptr;
  *(undefined8 *)(param_4 + 6) = temp_data_64;
  data_block_ptr = (undefined8 *)(matrix_base_addr + 0x20 + memory_addr);
  temp_data_64 = data_block_ptr[1];
  *(undefined8 *)(param_4 + 8) = *data_block_ptr;
  *(undefined8 *)(param_4 + 10) = temp_data_64;
  data_block_ptr = (undefined8 *)(matrix_base_addr + 0x30 + memory_addr);
  temp_data_64 = data_block_ptr[1];
  *(undefined8 *)(param_4 + 0xc) = *data_block_ptr;
  *(undefined8 *)(param_4 + 0xe) = temp_data_64;
  matrix_base_addr = *(longlong *)(unaff_RDI + 0x10);
  matrix_val_1 = param_4[8];
  matrix_val_2 = param_4[9];
  matrix_val_3 = param_4[10];
  matrix_val_4 = param_4[0xb];
  matrix_val_5 = *param_4;
  matrix_val_6 = param_4[1];
  matrix_val_7 = param_4[2];
  matrix_val_8 = param_4[3];
  matrix_val_9 = param_4[4];
  matrix_val_10 = param_4[5];
  matrix_val_11 = param_4[6];
  matrix_val_12 = param_4[7];
  transform_x = *(float *)(matrix_base_addr + 0x374);
  transform_y = *(float *)(matrix_base_addr + 0x370);
  transform_z = *(float *)(matrix_base_addr + 0x378);
  scale_x = *(float *)(matrix_base_addr + 900);
  scale_y = *(float *)(matrix_base_addr + 0x394);
  rotation_x = *(float *)(matrix_base_addr + 0x380);
  rotation_y = *(float *)(matrix_base_addr + 0x388);
  rotation_z = *(float *)(matrix_base_addr + 0x390);
  extra_param = *(float *)(matrix_base_addr + 0x398);
  *param_4 = transform_x * matrix_val_9 + transform_y * matrix_val_5 + transform_z * matrix_val_1;
  param_4[1] = transform_x * matrix_val_10 + transform_y * matrix_val_6 + transform_z * matrix_val_2;
  param_4[2] = transform_x * matrix_val_11 + transform_y * matrix_val_7 + transform_z * matrix_val_3;
  param_4[3] = transform_x * matrix_val_12 + transform_y * matrix_val_8 + transform_z * matrix_val_4;
  param_4[4] = scale_x * matrix_val_9 + rotation_x * matrix_val_5 + rotation_y * matrix_val_1;
  param_4[5] = scale_x * matrix_val_10 + rotation_x * matrix_val_6 + rotation_y * matrix_val_2;
  param_4[6] = scale_x * matrix_val_11 + rotation_x * matrix_val_7 + rotation_y * matrix_val_3;
  param_4[7] = scale_x * matrix_val_12 + rotation_x * matrix_val_8 + rotation_y * matrix_val_4;
  param_4[8] = scale_y * matrix_val_9 + rotation_z * matrix_val_5 + extra_param * matrix_val_1;
  param_4[9] = scale_y * matrix_val_10 + rotation_z * matrix_val_6 + extra_param * matrix_val_2;
  param_4[10] = scale_y * matrix_val_11 + rotation_z * matrix_val_7 + extra_param * matrix_val_3;
  param_4[0xb] = scale_y * matrix_val_12 + rotation_z * matrix_val_8 + extra_param * matrix_val_4;
  matrix_base_addr = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(matrix_base_addr + 0x28) != *(int *)(_DAT_180c86870 + 0x224)) {
    sync_flag = *(int *)(matrix_base_addr + 0x1c) + *(int *)(matrix_base_addr + 0x18);
    *(int *)(matrix_base_addr + 0x28) = *(int *)(_DAT_180c86870 + 0x224);
    if (0 < sync_flag) {
      uStack0000000000000050 = in_stack_00000058;
      memory_addr = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
      temp_data_32 = process_matrix_sync(memory_addr,sync_flag,param_1,param_4,CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da));
      *(undefined4 *)(matrix_base_addr + 0x30) = temp_data_32;
      update_thread_sync(memory_addr,temp_data_32);
      if (*(longlong *)(matrix_base_addr + 0x10) == 0) {
        if (*(int *)(matrix_base_addr + 0x18) != 0) {
          *(undefined4 *)(matrix_base_addr + 0x2c) = *(undefined4 *)(matrix_base_addr + 0x30);
          return;
        }
      }
      else {
        thread_count = *(char *)(matrix_base_addr + 0x44);
        thread_count_ulong = (ulonglong)thread_count;
        matrix_ptr1 = (longlong *)(matrix_base_addr + 0x38);
        sync_flag = (int)thread_count;
        if (*(int *)(matrix_base_addr + 0x40) == (int)thread_count) {
          thread_array_ptr = (longlong *)*matrix_ptr1;
        }
        else {
          *(int *)(matrix_base_addr + 0x40) = sync_flag;
          if (*matrix_ptr1 != 0) {
                    // WARNING: Subroutine does not return
            handle_memory_error();
          }
          *matrix_ptr1 = 0;
          if (thread_count == '\0') {
            thread_array_ptr = (longlong *)0x0;
            *matrix_ptr1 = 0;
          }
          else {
            thread_array_ptr = (longlong *)allocate_thread_buffer(_DAT_180c8ed18,(longlong)thread_count * 4);
            *matrix_ptr1 = (longlong)thread_array_ptr;
          }
        }
        if (thread_array_ptr != (longlong *)0x0) {
          iVar41 = 0;
          thread_data_index = (uint)thread_count;
          iVar42 = iVar41;
          if ((0 < sync_flag) && (0xf < thread_data_index)) {
            array_index = *(int *)(matrix_base_addr + 0x2c);
            matrix_ptr2 = (longlong *)((longlong)thread_array_ptr + (longlong)(thread_count + -1) * 4);
            if ((((longlong *)(matrix_base_addr + 0x2c) < thread_array_ptr) || (matrix_ptr2 < (longlong *)(matrix_base_addr + 0x2c)))
               && ((matrix_ptr1 < thread_array_ptr || (iVar42 = 0, matrix_ptr2 < matrix_ptr1)))) {
              index_val = thread_data_index & 0x8000000f;
              if ((int)index_val < 0) {
                index_val = (index_val - 1 | 0xfffffff0) + 1;
              }
              thread_array_ptr = thread_array_ptr + 4;
              loop_counter = 8;
              do {
                *(int *)(thread_array_ptr + -4) = iVar41 + array_index;
                *(int *)((longlong)thread_array_ptr + -0x1c) = iVar41 + 1 + array_index;
                *(int *)(thread_array_ptr + -3) = iVar41 + 2 + array_index;
                *(int *)((longlong)thread_array_ptr + -0x14) = iVar41 + 3 + array_index;
                iVar41 = iVar41 + 0x10;
                *(int *)(thread_array_ptr + -2) = loop_counter + -4 + array_index;
                *(int *)((longlong)thread_array_ptr + -0xc) = loop_counter + -3 + array_index;
                *(int *)(thread_array_ptr + -1) = loop_counter + -2 + array_index;
                *(int *)((longlong)thread_array_ptr + -4) = loop_counter + -1 + array_index;
                *(int *)thread_array_ptr = loop_counter + array_index;
                *(int *)((longlong)thread_array_ptr + 4) = loop_counter + 1 + array_index;
                *(int *)(thread_array_ptr + 1) = loop_counter + 2 + array_index;
                *(int *)((longlong)thread_array_ptr + 0xc) = loop_counter + 3 + array_index;
                *(int *)(thread_array_ptr + 2) = loop_counter + 4 + array_index;
                *(int *)((longlong)thread_array_ptr + 0x14) = loop_counter + 5 + array_index;
                *(int *)(thread_array_ptr + 3) = loop_counter + 6 + array_index;
                *(int *)((longlong)thread_array_ptr + 0x1c) = loop_counter + 7 + array_index;
                thread_array_ptr = thread_array_ptr + 8;
                loop_counter = loop_counter + 0x10;
                iVar42 = iVar41;
              } while (iVar41 < (int)(thread_data_index - index_val));
            }
          }
          for (memory_addr = (longlong)iVar42; memory_addr < (longlong)thread_count_ulong; memory_addr = memory_addr + 1) {
            iVar41 = *(int *)(matrix_base_addr + 0x2c) + iVar42;
            iVar42 = iVar42 + 1;
            *(int *)(*matrix_ptr1 + memory_addr * 4) = iVar41;
          }
          iVar42 = *(int *)(matrix_base_addr + 0x18);
          iVar41 = 0;
          if (0 < (longlong)iVar42) {
            memory_addr = 0;
            do {
              array_index = *(int *)(matrix_base_addr + 0x30) + iVar41;
              iVar41 = iVar41 + 1;
              byte_data_ptr = (byte *)(*(longlong *)(matrix_base_addr + 0x10) + memory_addr);
              memory_addr = memory_addr + 1;
              *(int *)(*matrix_ptr1 + (ulonglong)*byte_data_ptr * 4) = array_index;
            } while (memory_addr < iVar42);
          }
        }
        global_counter_ptr = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 +
                          _DAT_180c86890 + 0x9d0);
        if (sync_flag == 0) {
          thread_data_index = (int)thread_count - 1;
        }
        else {
          LOCK();
          thread_data_index = *global_counter_ptr;
          *global_counter_ptr = *global_counter_ptr + (int)thread_count;
          UNLOCK();
          uVar45 = (ulonglong)(thread_data_index >> 0xb);
          uVar46 = (ulonglong)(thread_count + -1 + thread_data_index >> 0xb);
          if (uVar45 <= uVar46) {
            thread_name_ptr = (char *)((longlong)global_counter_ptr + uVar45 + 0x108);
            memory_addr = (uVar46 - uVar45) + 1;
            data_block_ptr4 = global_counter_ptr + uVar45 * 2 + 2;
            do {
              iVar42 = (int)uVar45;
              if (*(longlong *)data_block_ptr4 == 0) {
                offset_val = allocate_memory_page(_DAT_180c8ed18,0x2000,0x25);
                LOCK();
                bVar47 = *(longlong *)(global_counter_ptr + (longlong)iVar42 * 2 + 2) == 0;
                if (bVar47) {
                  *(longlong *)(global_counter_ptr + (longlong)iVar42 * 2 + 2) = offset_val;
                }
                UNLOCK();
                if (bVar47) {
                  LOCK();
                  *(undefined1 *)((longlong)iVar42 + 0x108 + (longlong)global_counter_ptr) = 0;
                  UNLOCK();
                }
                else {
                  if (offset_val != 0) {
                    // WARNING: Subroutine does not return
                    handle_memory_error();
                  }
                  do {
                  } while (*thread_name_ptr != '\0');
                }
              }
              else {
                do {
                } while (*thread_name_ptr != '\0');
              }
              uVar45 = (ulonglong)(iVar42 + 1);
              data_block_ptr4 = data_block_ptr4 + 2;
              thread_name_ptr = thread_name_ptr + 1;
              memory_addr = memory_addr + -1;
            } while (memory_addr != 0);
          }
        }
        data_block_ptr3 = *(undefined4 **)(matrix_base_addr + 0x38);
        index_val = thread_data_index >> 0xb;
        *(uint *)(matrix_base_addr + 0x2c) = thread_data_index;
        if (index_val == (int)thread_count + thread_data_index >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(global_counter_ptr + (ulonglong)index_val * 2 + 2) +
                 (ulonglong)(thread_data_index + index_val * -0x800) * 4,data_block_ptr3,(thread_count_ulong & 0xffffffff) << 2);
        }
        if (sync_flag != 0) {
          thread_count_ulong = thread_count_ulong & 0xffffffff;
          do {
            temp_data_32 = *data_block_ptr3;
            data_block_ptr3 = data_block_ptr3 + 1;
            *(undefined4 *)
             (*(longlong *)(global_counter_ptr + (ulonglong)(thread_data_index >> 0xb) * 2 + 2) +
             (ulonglong)(thread_data_index + (thread_data_index >> 0xb) * -0x800) * 4) = temp_data_32;
            thread_count_ulong = thread_count_ulong - 1;
            thread_data_index = thread_data_index + 1;
          } while (thread_count_ulong != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 执行线程同步操作
 * 处理线程间的数据同步和内存管理
 */
void execute_thread_synchronization(void)

{
  longlong *matrix_ptr1;
  longlong *matrix_ptr2;
  byte *byte_data_ptr;
  char cVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong unaff_RBX;
  longlong lVar12;
  ulonglong uVar13;
  char *pthread_count;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000058;
  
  lVar5 = *(longlong *)(unaff_RBX + 600);
  if (*(int *)(lVar5 + 0x28) != *(int *)(_DAT_180c86870 + 0x224)) {
    iVar16 = *(int *)(lVar5 + 0x1c) + *(int *)(lVar5 + 0x18);
    *(int *)(lVar5 + 0x28) = *(int *)(_DAT_180c86870 + 0x224);
    if (0 < iVar16) {
      uStack0000000000000050 = in_stack_00000058;
      lVar12 = (longlong)*(int *)(_DAT_180c86890 + 0xe78) * 0x128 + _DAT_180c86890 + 0xc28;
      uVar6 = process_matrix_sync(lVar12,iVar16);
      *(undefined4 *)(lVar5 + 0x30) = uVar6;
      update_thread_sync(lVar12,uVar6);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)(lVar5 + 0x30);
          return;
        }
      }
      else {
        cVar4 = *(char *)(lVar5 + 0x44);
        uVar13 = (ulonglong)cVar4;
        matrix_ptr1 = (longlong *)(lVar5 + 0x38);
        iVar16 = (int)cVar4;
        if (*(int *)(lVar5 + 0x40) == (int)cVar4) {
          plVar8 = (longlong *)*matrix_ptr1;
        }
        else {
          *(int *)(lVar5 + 0x40) = iVar16;
          if (*matrix_ptr1 != 0) {
                    // WARNING: Subroutine does not return
            handle_memory_error();
          }
          *matrix_ptr1 = 0;
          if (cVar4 == '\0') {
            plVar8 = (longlong *)0x0;
            *matrix_ptr1 = 0;
          }
          else {
            plVar8 = (longlong *)allocate_thread_buffer(_DAT_180c8ed18,(longlong)cVar4 * 4);
            *matrix_ptr1 = (longlong)plVar8;
          }
        }
        if (plVar8 != (longlong *)0x0) {
          iVar18 = 0;
          uVar17 = (uint)cVar4;
          iVar19 = iVar18;
          if ((0 < iVar16) && (0xf < uVar17)) {
            iVar11 = *(int *)(lVar5 + 0x2c);
            matrix_ptr2 = (longlong *)((longlong)plVar8 + (longlong)(cVar4 + -1) * 4);
            if ((((longlong *)(lVar5 + 0x2c) < plVar8) || (matrix_ptr2 < (longlong *)(lVar5 + 0x2c))) &&
               ((matrix_ptr1 < plVar8 || (iVar19 = 0, matrix_ptr2 < matrix_ptr1)))) {
              uVar7 = uVar17 & 0x8000000f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
              }
              plVar8 = plVar8 + 4;
              iVar10 = 8;
              do {
                *(int *)(plVar8 + -4) = iVar18 + iVar11;
                *(int *)((longlong)plVar8 + -0x1c) = iVar18 + 1 + iVar11;
                *(int *)(plVar8 + -3) = iVar18 + 2 + iVar11;
                *(int *)((longlong)plVar8 + -0x14) = iVar18 + 3 + iVar11;
                iVar18 = iVar18 + 0x10;
                *(int *)(plVar8 + -2) = iVar10 + -4 + iVar11;
                *(int *)((longlong)plVar8 + -0xc) = iVar10 + -3 + iVar11;
                *(int *)(plVar8 + -1) = iVar10 + -2 + iVar11;
                *(int *)((longlong)plVar8 + -4) = iVar10 + -1 + iVar11;
                *(int *)plVar8 = iVar10 + iVar11;
                *(int *)((longlong)plVar8 + 4) = iVar10 + 1 + iVar11;
                *(int *)(plVar8 + 1) = iVar10 + 2 + iVar11;
                *(int *)((longlong)plVar8 + 0xc) = iVar10 + 3 + iVar11;
                *(int *)(plVar8 + 2) = iVar10 + 4 + iVar11;
                *(int *)((longlong)plVar8 + 0x14) = iVar10 + 5 + iVar11;
                *(int *)(plVar8 + 3) = iVar10 + 6 + iVar11;
                *(int *)((longlong)plVar8 + 0x1c) = iVar10 + 7 + iVar11;
                plVar8 = plVar8 + 8;
                iVar10 = iVar10 + 0x10;
                iVar19 = iVar18;
              } while (iVar18 < (int)(uVar17 - uVar7));
            }
          }
          for (lVar12 = (longlong)iVar19; lVar12 < (longlong)uVar13; lVar12 = lVar12 + 1) {
            iVar18 = *(int *)(lVar5 + 0x2c) + iVar19;
            iVar19 = iVar19 + 1;
            *(int *)(*matrix_ptr1 + lVar12 * 4) = iVar18;
          }
          iVar19 = *(int *)(lVar5 + 0x18);
          iVar18 = 0;
          if (0 < (longlong)iVar19) {
            lVar12 = 0;
            do {
              iVar11 = *(int *)(lVar5 + 0x30) + iVar18;
              iVar18 = iVar18 + 1;
              byte_data_ptr = (byte *)(*(longlong *)(lVar5 + 0x10) + lVar12);
              lVar12 = lVar12 + 1;
              *(int *)(*matrix_ptr1 + (ulonglong)*byte_data_ptr * 4) = iVar11;
            } while (lVar12 < iVar19);
          }
        }
        puVar15 = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 +
                          _DAT_180c86890 + 0x9d0);
        if (iVar16 == 0) {
          uVar17 = (int)cVar4 - 1;
        }
        else {
          LOCK();
          uVar17 = *puVar15;
          *puVar15 = *puVar15 + (int)cVar4;
          UNLOCK();
          uVar22 = (ulonglong)(uVar17 >> 0xb);
          uVar23 = (ulonglong)(cVar4 + -1 + uVar17 >> 0xb);
          if (uVar22 <= uVar23) {
            pthread_count = (char *)((longlong)puVar15 + uVar22 + 0x108);
            lVar12 = (uVar23 - uVar22) + 1;
            puVar21 = puVar15 + uVar22 * 2 + 2;
            do {
              iVar19 = (int)uVar22;
              if (*(longlong *)puVar21 == 0) {
                lVar9 = allocate_memory_page(_DAT_180c8ed18,0x2000,0x25);
                LOCK();
                bVar24 = *(longlong *)(puVar15 + (longlong)iVar19 * 2 + 2) == 0;
                if (bVar24) {
                  *(longlong *)(puVar15 + (longlong)iVar19 * 2 + 2) = lVar9;
                }
                UNLOCK();
                if (bVar24) {
                  LOCK();
                  *(undefined1 *)((longlong)iVar19 + 0x108 + (longlong)puVar15) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar9 != 0) {
                    // WARNING: Subroutine does not return
                    handle_memory_error();
                  }
                  do {
                  } while (*pthread_count != '\0');
                }
              }
              else {
                do {
                } while (*pthread_count != '\0');
              }
              uVar22 = (ulonglong)(iVar19 + 1);
              puVar21 = puVar21 + 2;
              pthread_count = pthread_count + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        puVar20 = *(undefined4 **)(lVar5 + 0x38);
        uVar7 = uVar17 >> 0xb;
        *(uint *)(lVar5 + 0x2c) = uVar17;
        if (uVar7 == (int)cVar4 + uVar17 >> 0xb) {
                    // WARNING: Subroutine does not return
          memcpy(*(longlong *)(puVar15 + (ulonglong)uVar7 * 2 + 2) +
                 (ulonglong)(uVar17 + uVar7 * -0x800) * 4,puVar20,(uVar13 & 0xffffffff) << 2);
        }
        if (iVar16 != 0) {
          uVar13 = uVar13 & 0xffffffff;
          do {
            uVar6 = *puVar20;
            puVar20 = puVar20 + 1;
            *(undefined4 *)
             (*(longlong *)(puVar15 + (ulonglong)(uVar17 >> 0xb) * 2 + 2) +
             (ulonglong)(uVar17 + (uVar17 >> 0xb) * -0x800) * 4) = uVar6;
            uVar13 = uVar13 - 1;
            uVar17 = uVar17 + 1;
          } while (uVar13 != 0);
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 获取变换矩阵指针
 * 根据参数计算并返回变换矩阵的指针地址
 */
undefined * get_transform_matrix_pointer(longlong context_base, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    return (undefined *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49158) {
    FUN_1808fcb90(&DAT_180d49158);
    if (_DAT_180d49158 == -1) {
      _DAT_180d49160 = &UNK_1809fcc28;
      _DAT_180d49168 = &DAT_180d49178;


/**
 * 重置线程状态标志
 * 重置线程的状态标志，确保线程处于正确的初始状态
 */
void reset_thread_status_flags(longlong thread_context)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_1 + 0xfd) & 0x20) != 0) && (*(longlong *)(param_1 + 0x1e0) != 0)) {
    iVar2 = 0;
    lVar3 = 0;
    do {
      while ((*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + lVar3) == '\x02' ||
             (*(char *)(*(longlong *)(param_1 + 0x1e0) + 0x15 + lVar3) == '\x01'))) {
        Sleep(0);
      }
      lVar1 = (longlong)iVar2;
      lVar3 = lVar3 + 0x18;
      iVar2 = iVar2 + 1;
      LOCK();
      *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + lVar1 * 0x18 + 0x15) = 0;
      UNLOCK();
    } while (iVar2 < 0x10);
  }
  return;
}



/**
 * 获取并清除线程状态
 * 获取当前线程状态并清除相关标志
 */
undefined1 get_and_clear_thread_status(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  lVar5 = 0;
  do {
    while ((*(char *)(*(longlong *)(unaff_RBX + 0x1e0) + 0x15 + lVar5) == '\x02' ||
           (*(char *)(*(longlong *)(unaff_RBX + 0x1e0) + 0x15 + lVar5) == '\x01'))) {
      Sleep(0);
    }
    lVar3 = (longlong)iVar4;
    lVar5 = lVar5 + 0x18;
    iVar4 = iVar4 + 1;
    LOCK();
    puVar1 = (undefined1 *)(*(longlong *)(unaff_RBX + 0x1e0) + lVar3 * 0x18 + 0x15);
    uVar2 = *puVar1;
    *puVar1 = 0;
    UNLOCK();
  } while (iVar4 < 0x10);
  return uVar2;
}





