#include "TaleWorlds.Native.Split.h"

// 03_rendering_part070.c - 渲染系统高级资源管理和数据处理模块
// 包含9个核心函数，涵盖渲染资源管理、数据处理、内存分配、状态同步等高级渲染功能

// 常量定义
#define RENDERING_SYSTEM_BUFFER_SIZE_0x28000 0x28000
#define RENDERING_SYSTEM_BUFFER_SIZE_0xD8000 0xd8000
#define RENDERING_SYSTEM_BUFFER_SIZE_0x2000 0x2000
#define RENDERING_SYSTEM_BUFFER_SIZE_0x100 0x100
#define RENDERING_SYSTEM_BUFFER_SIZE_0x38 0x38
#define RENDERING_SYSTEM_SHIFT_0XB 0xb
#define RENDERING_SYSTEM_SHIFT_0X800 0x800
#define RENDERING_SYSTEM_SIZE_0X50 0x50
#define RENDERING_SYSTEM_SIZE_0X1B0 0x1b0
#define RENDERING_SYSTEM_SIZE_0X40 0x40
#define RENDERING_SYSTEM_THRESHOLD_0X1D 0x1d
#define RENDERING_SYSTEM_THRESHOLD_0X1C 0x1c
#define RENDERING_SYSTEM_SCALE_FACTOR_0_006666667 0.006666667f
#define RENDERING_SYSTEM_SCALE_FACTOR_0_875 0.875f
#define RENDERING_SYSTEM_STRING_LENGTH_0X40 0x40
#define RENDERING_SYSTEM_STACK_GUARD_VALUE 0xfffffffffffffffe

// 函数别名定义
#define rendering_system_resource_manager FUN_180307ca0
#define rendering_system_data_processor FUN_180308500
#define rendering_system_memory_clearer FUN_1803085c0
#define rendering_system_memory_cleaner FUN_1803085e2
#define rendering_system_empty_function FUN_180308660
#define rendering_system_resource_handler FUN_180308670
#define rendering_system_advanced_processor FUN_180308820
#define rendering_system_memory_manager FUN_1803089a0
#define rendering_system_data_synchronizer FUN_180308a90
#define rendering_system_extended_processor FUN_180308aa7

// 渲染系统资源管理器
// 管理渲染系统的资源分配、数据处理和状态同步
// 
// @param render_context 渲染上下文指针
// @param data_context 数据上下文指针
void rendering_system_resource_manager(longlong render_context, longlong data_context)

{
  int *resource_count;
  longlong *resource_array;
  int array_size;
  int bit_count;
  longlong **resource_pointer;
  uint lock_value;
  uint resource_index;
  uint64_t *memory_block;
  longlong base_address;
  longlong temp_address;
  longlong *buffer_pointer;
  int buffer_size;
  char *string_pointer;
  ulonglong checksum_value;
  uint *uint_pointer;
  int item_count;
  longlong resource_item;
  bool allocation_success;
  float scale_factor;
  uint64_t temp_var;
  float quality_factor;
  float normalized_factor;
  int8_t security_buffer[32];
  int8_t *temp_pointer;
  float temp_float_1;
  float temp_float_2;
  int32_t temp_param_1;
  int temp_int_1;
  uint64_t temp_var_2;
  int8_t temp_flag;
  int32_t temp_param_2;
  uint temp_uint_1;
  uint temp_uint_2;
  int temp_int_2;
  longlong **temp_pointer_array;
  longlong temp_long_1;
  longlong *temp_long_pointer_1;
  longlong *temp_long_pointer_2;
  int *temp_int_pointer;
  int32_t temp_param_3;
  uint temp_uint_3;
  longlong *temp_long_pointer_3;
  longlong *temp_long_pointer_4;
  longlong *temp_long_pointer_5;
  void **temp_undefined_pointer;
  uint64_t temp_var_3;
  int *temp_int_pointer_2;
  uint64_t temp_var_4;
  int *temp_int_pointer_3;
  longlong temp_long_2;
  int *temp_int_pointer_4;
  uint64_t temp_var_5;
  int *temp_int_pointer_5;
  uint64_t temp_var_6;
  int *temp_int_pointer_6;
  uint64_t temp_var_7;
  int *temp_int_pointer_7;
  longlong temp_long_3;
  int8_t temp_buffer[12];
  int32_t temp_param_4;
  int32_t temp_param_5;
  int32_t temp_param_6;
  int32_t temp_param_7;
  void *temp_undefined_1;
  int8_t *temp_undefined_2;
  int32_t temp_param_8;
  int8_t temp_buffer_2[128];
  int32_t temp_param_9;
  uint64_t temp_var_8;
  longlong temp_long_4;
  uint64_t temp_var_9;
  longlong temp_long_5;
  void *temp_undefined_3;
  int8_t *temp_undefined_4;
  int32_t temp_param_10;
  int8_t temp_buffer_3[128];
  int32_t temp_param_11;
  uint64_t temp_var_10;
  longlong temp_long_6;
  uint64_t temp_var_11;
  longlong temp_long_7;
  void *temp_undefined_5;
  int8_t *temp_undefined_6;
  int32_t temp_param_12;
  int8_t temp_buffer_4[72];
  void *temp_undefined_7;
  int8_t *temp_undefined_8;
  int32_t temp_param_13;
  int8_t temp_buffer_5[72];
  ulonglong stack_checksum;
  
  temp_var_3 = RENDERING_SYSTEM_STACK_GUARD_VALUE;
  stack_checksum = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  item_count = 0;
  bit_count = 0;
  resource_array = *(longlong **)(render_context + 0x1b90);
  temp_long_4 = render_context;
  if (resource_array != *(longlong **)(render_context + 0x1b98)) {
    do {
      item_count = item_count + (int)(*(longlong *)(*resource_array + 0x90) - *(longlong *)(*resource_array + 0x88) >> 3);
      resource_array = resource_array + 1;
    } while (resource_array != *(longlong **)(render_context + 0x1b98));
    if (0 < item_count) {
      resource_count = (int *)(render_context + 0x78);
      item_count = *resource_count;
      *(int *)(data_context + 0x124b8) = item_count;
      temp_int_2 = item_count;
      if (0 < item_count) {
        array_size = *resource_count;
        temp_param_3 = 0;
        temp_pointer_array = (longlong **)resource_count;
        temp_int_1 = array_size;
        temp_int_pointer = resource_count;
        bit_count = array_size;
        if (array_size != 0) {
          for (; bit_count != 0; bit_count = bit_count >> 1) {
            bit_count = bit_count + 1;
          }
          temp_var = CONCAT44(temp_param_2,array_size);
          temp_long_3 = (ulonglong)temp_uint_3 << 0x20;
          temp_int_pointer_3 = resource_count;
          temp_var_4 = temp_var;
          temp_int_pointer_2 = resource_count;
          temp_long_2 = temp_long_3;
          FUN_180308a90(&temp_int_pointer_2,&temp_int_pointer_3,(longlong)(bit_count + -1) * 2);
          if (array_size < RENDERING_SYSTEM_THRESHOLD_0X1D) {
            temp_int_pointer_7 = resource_count;
            temp_var_7 = temp_var;
            temp_int_pointer_6 = resource_count;
            temp_long_3 = temp_long_3;
            FUN_180308670(&temp_int_pointer_6,&temp_int_pointer_7);
          }
          else {
            temp_int_1 = RENDERING_SYSTEM_THRESHOLD_0X1C;
            temp_var_6 = CONCAT44(temp_param_2,RENDERING_SYSTEM_THRESHOLD_0X1C);
            temp_pointer_array = (longlong **)resource_count;
            temp_int_pointer_5 = resource_count;
            temp_int_pointer_4 = resource_count;
            temp_long_5 = temp_long_3;
            FUN_180308670(&temp_int_pointer_4,&temp_int_pointer_5);
            temp_int_1 = RENDERING_SYSTEM_THRESHOLD_0X1C;
            temp_var_5 = CONCAT44(temp_param_2,RENDERING_SYSTEM_THRESHOLD_0X1C);
            temp_pointer_array = (longlong **)resource_count;
            temp_int_pointer_6 = resource_count;
            temp_var_6 = temp_var;
            temp_int_pointer_5 = resource_count;
            FUN_180308820(&temp_int_pointer_5,&temp_int_pointer_6);
          }
        }
        scale_factor = (float)item_count * RENDERING_SYSTEM_SCALE_FACTOR_0_006666667;
        normalized_factor = 0.0;
        if ((0.0 <= scale_factor) && (normalized_factor = scale_factor, 1.0 <= scale_factor)) {
          normalized_factor = 1.0;
        }
        quality_factor = *(float *)(_DAT_180c86870 + 0x388);
        FUN_180287b30(data_context + 0xf0,temp_buffer);
        temp_param_4 = 0;
        temp_param_5 = 0;
        temp_param_6 = 0;
        temp_param_7 = 0x3f800000;
        temp_undefined_5 = &UNK_1809fcc58;
        temp_undefined_6 = temp_buffer_4;
        temp_buffer_4[0] = 0;
        temp_param_12 = 0x1e;
        temp_var = strcpy_s(temp_buffer_4,RENDERING_SYSTEM_STRING_LENGTH_0X40,&UNK_180a1a228);
        temp_param_1 = 0x100;
        temp_flag = 1;
        temp_var_2 = 0;
        temp_param_10 = 0x50;
        temp_float_2 = 0.0;
        temp_float_1 = 4.2039e-45;
        temp_undefined_2 = (int8_t *)CONCAT44(temp_undefined_2._4_4_,0x61);
        temp_int_1 = item_count;
        memory_block = (uint64_t *)
                 FUN_1800b0a10(temp_var,&temp_long_pointer_4,*(int32_t *)(data_context + 0x1bd4),&temp_undefined_5);
        temp_var = *memory_block;
        *memory_block = 0;
        temp_long_pointer_5 = *(longlong **)(render_context + 0x68);
        *(uint64_t *)(render_context + 0x68) = temp_var;
        if (temp_long_pointer_5 != (longlong *)0x0) {
          (**(code **)(*temp_long_pointer_5 + 0x38))();
        }
        if (temp_long_pointer_4 != (longlong *)0x0) {
          (**(code **)(*temp_long_pointer_4 + 0x38))();
        }
        temp_undefined_5 = &UNK_18098bcb0;
        temp_undefined_7 = &UNK_1809fcc58;
        temp_undefined_8 = temp_buffer_5;
        temp_buffer_5[0] = 0;
        temp_param_13 = 0x21;
        temp_var = strcpy_s(temp_buffer_5,RENDERING_SYSTEM_STRING_LENGTH_0X40,&UNK_180a1a200);
        temp_param_1 = 0x100;
        temp_flag = 1;
        temp_var_2 = 0;
        temp_param_10 = 0x1b0;
        temp_float_2 = 0.0;
        temp_float_1 = 4.2039e-45;
        temp_undefined_2 = (int8_t *)CONCAT44(temp_undefined_2._4_4_,0x61);
        temp_int_1 = item_count;
        memory_block = (uint64_t *)
                 FUN_1800b0a10(temp_var,&temp_long_pointer_3,*(int32_t *)(data_context + 0x1bd4),&temp_undefined_7);
        temp_var = *memory_block;
        *memory_block = 0;
        temp_long_pointer_5 = *(longlong **)(render_context + 0x70);
        *(uint64_t *)(render_context + 0x70) = temp_var;
        if (temp_long_pointer_5 != (longlong *)0x0) {
          (**(code **)(*temp_long_pointer_5 + 0x38))();
        }
        if (temp_long_pointer_3 != (longlong *)0x0) {
          (**(code **)(*temp_long_pointer_3 + 0x38))();
        }
        temp_undefined_7 = &UNK_18098bcb0;
        temp_uint_2 = 0;
        if (0 < item_count) {
          temp_pointer_array = (longlong **)(render_context + 0x980);
          do {
            resource_pointer = temp_pointer_array;
            LOCK();
            lock_value = *(uint *)temp_pointer_array;
            *(uint *)temp_pointer_array = *(uint *)temp_pointer_array + 1;
            UNLOCK();
            resource_index = lock_value >> RENDERING_SYSTEM_SHIFT_0XB;
            checksum_value = (ulonglong)resource_index;
            string_pointer = (char *)((longlong)temp_pointer_array + checksum_value + 0x808);
            uint_pointer = (uint *)((longlong)temp_pointer_array + ((ulonglong)resource_index * 2 + 2) * 4);
            temp_long_3 = -0x808 - (longlong)temp_pointer_array;
            do {
              bit_count = (int)checksum_value;
              if (*(longlong *)uint_pointer == 0) {
                base_address = FUN_18062b420(_DAT_180c8ed18,RENDERING_SYSTEM_BUFFER_SIZE_0X28000,0x25);
                LOCK();
                allocation_success = *(longlong *)((longlong)resource_pointer + ((longlong)bit_count * 2 + 2) * 4) == 0;
                if (allocation_success) {
                  *(longlong *)((longlong)resource_pointer + ((longlong)bit_count * 2 + 2) * 4) = base_address;
                }
                UNLOCK();
                if (allocation_success) {
                  LOCK();
                  *(int8_t *)((longlong)bit_count + 0x808 + (longlong)resource_pointer) = 0;
                  UNLOCK();
                }
                else {
                  if (base_address != 0) {
                    // 警告：子函数不返回
                    FUN_18064e900(base_address);
                  }
                  do {
                  } while (*string_pointer != '\0');
                }
              }
              else {
                do {
                } while (*string_pointer != '\0');
              }
              base_address = temp_long_4;
              checksum_value = (ulonglong)(bit_count + 1);
              uint_pointer = uint_pointer + 2;
              string_pointer = string_pointer + 1;
            } while ((longlong)(string_pointer + temp_long_3) <= (longlong)(ulonglong)resource_index);
            temp_int_pointer = (int *)(*(longlong *)((longlong)resource_pointer + ((ulonglong)resource_index * 2 + 2) * 4)
                                 + (ulonglong)(lock_value - (lock_value & 0xfffff800)) * RENDERING_SYSTEM_SIZE_0X50);
            LOCK();
            uint_pointer = (uint *)(temp_long_4 + 0x1288);
            temp_uint_1 = *uint_pointer;
            *uint_pointer = *uint_pointer + 1;
            UNLOCK();
            lock_value = temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB;
            checksum_value = (ulonglong)lock_value;
            temp_long_3 = temp_long_4 + 0x1288;
            string_pointer = (char *)(temp_long_4 + 0x1a90 + checksum_value);
            resource_array = (longlong *)(temp_long_4 + 0x1290 + (ulonglong)lock_value * 8);
            do {
              bit_count = (int)checksum_value;
              if (*resource_array == 0) {
                temp_address = FUN_18062b420(_DAT_180c8ed18,RENDERING_SYSTEM_BUFFER_SIZE_0XD8000,0x25);
                buffer_pointer = (longlong *)(base_address + 0x1290 + (longlong)bit_count * 8);
                LOCK();
                allocation_success = *buffer_pointer == 0;
                if (allocation_success) {
                  *buffer_pointer = temp_address;
                }
                UNLOCK();
                if (allocation_success) {
                  FUN_1803085c0(temp_long_3,bit_count << RENDERING_SYSTEM_SHIFT_0XB);
                  LOCK();
                  *(int8_t *)((longlong)bit_count + 0x808 + temp_long_3) = 0;
                  UNLOCK();
                }
                else {
                  if (temp_address != 0) {
                    // 警告：子函数不返回
                    FUN_18064e900();
                  }
                  do {
                  } while (*string_pointer != '\0');
                }
              }
              else {
                do {
                } while (*string_pointer != '\0');
              }
              render_context = temp_long_4;
              resource_index = temp_uint_2;
              checksum_value = (ulonglong)(bit_count + 1);
              resource_array = resource_array + 1;
              string_pointer = string_pointer + 1;
            } while ((longlong)(string_pointer + (-0x808 - temp_long_3)) <= (longlong)(ulonglong)lock_value);
            temp_undefined_2 = temp_buffer;
            temp_float_1 = normalized_factor * RENDERING_SYSTEM_SCALE_FACTOR_0_875;
            temp_float_2 = 1.0 / quality_factor;
            FUN_1803076d0(temp_long_4,
                          *(uint64_t *)
                           (*(longlong *)(temp_long_4 + 0x80 + (ulonglong)(temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                           (ulonglong)(temp_uint_2 + (temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8),
                          *(longlong *)(temp_long_4 + 0x1290 + (ulonglong)lock_value * 8) +
                          (ulonglong)(temp_uint_1 - (temp_uint_1 & 0xfffff800)) * RENDERING_SYSTEM_SIZE_0X1B0,temp_int_pointer);
            temp_uint_2 = resource_index + 1;
            item_count = temp_int_2;
          } while ((int)temp_uint_2 < temp_int_2);
        }
        temp_pointer_array = (longlong **)&temp_undefined_1;
        temp_undefined_1 = &UNK_1809fcc28;
        temp_undefined_2 = temp_buffer_2;
        temp_param_8 = 0;
        temp_buffer_2[0] = 0;
        temp_param_9 = 0xb;
        temp_var_8 = *(uint64_t *)(render_context + 0x68);
        temp_var_9 = RENDERING_SYSTEM_BUFFER_SIZE_0X28000;
        temp_long_6 = render_context + 0x988;
        temp_long_5 = (longlong)item_count * RENDERING_SYSTEM_SIZE_0X50;
        temp_var = FUN_18062b1e0(_DAT_180c8ed18,RENDERING_SYSTEM_BUFFER_SIZE_0X100,8,3);
        resource_array = (longlong *)FUN_18005ce30(temp_var,&temp_undefined_1);
        temp_pointer_3 = (longlong **)resource_array;
        if (resource_array != (longlong *)0x0) {
          (**(code **)(*resource_array + 0x28))(resource_array);
        }
        temp_var = _DAT_180c82868;
        temp_pointer_array = &temp_long_pointer_2;
        temp_long_pointer_2 = resource_array;
        if (resource_array != (longlong *)0x0) {
          (**(code **)(*resource_array + 0x28))(resource_array);
        }
        FUN_18005e370(temp_var,&temp_long_pointer_2);
        if (resource_array != (longlong *)0x0) {
          (**(code **)(*resource_array + 0x38))(resource_array);
        }
        temp_undefined_1 = &UNK_18098bcb0;
        temp_pointer_3 = (longlong **)&temp_undefined_3;
        temp_undefined_3 = &UNK_1809fcc28;
        temp_undefined_4 = temp_buffer_3;
        temp_param_10 = 0;
        temp_buffer_3[0] = 0;
        temp_param_11 = 0xb;
        temp_var_10 = *(uint64_t *)(render_context + 0x70);
        temp_var_11 = RENDERING_SYSTEM_BUFFER_SIZE_0XD8000;
        temp_long_7 = render_context + 0x1290;
        temp_long_6 = (longlong)item_count * RENDERING_SYSTEM_SIZE_0X1B0;
        temp_var = FUN_18062b1e0(_DAT_180c8ed18,RENDERING_SYSTEM_BUFFER_SIZE_0X100,8,3);
        resource_array = (longlong *)FUN_18005ce30(temp_var,&temp_undefined_3);
        temp_undefined_pointer = (void **)resource_array;
        if (resource_array != (longlong *)0x0) {
          (**(code **)(*resource_array + 0x28))(resource_array);
        }
        temp_var = _DAT_180c82868;
        temp_pointer_3 = &temp_long_pointer_1;
        temp_long_pointer_1 = resource_array;
        if (resource_array != (longlong *)0x0) {
          (**(code **)(*resource_array + 0x28))(resource_array);
        }
        FUN_18005e370(temp_var,&temp_long_pointer_1);
        if (resource_array != (longlong *)0x0) {
          (**(code **)(*resource_array + 0x38))(resource_array);
        }
        temp_undefined_pointer = &temp_undefined_3;
        temp_undefined_3 = &UNK_18098bcb0;
      }
      goto LAB_1803084bf;
    }
  }
  *(int32_t *)(data_context + 0x124b8) = 0;
LAB_1803084bf:
                    // 警告：子函数不返回
  FUN_1808fc050(stack_checksum ^ (ulonglong)security_buffer);
}

// 渲染系统数据处理器
// 处理渲染系统的数据写入和锁定操作
// 
// @param data_pointer 数据指针
// @param data_value 数据值指针
void rendering_system_data_processor(uint *data_pointer, int32_t *data_value)

{
  uint lock_value;
  uint resource_index;
  longlong memory_block;
  ulonglong checksum_value;
  bool allocation_success;
  
  LOCK();
  lock_value = *data_pointer;
  *data_pointer = *data_pointer + 1;
  UNLOCK();
  resource_index = lock_value >> RENDERING_SYSTEM_SHIFT_0XB;
  checksum_value = (ulonglong)resource_index;
  if (*(longlong *)(data_pointer + (ulonglong)resource_index * 2 + 2) == 0) {
    memory_block = FUN_18062b420(_DAT_180c8ed18,RENDERING_SYSTEM_BUFFER_SIZE_0X2000,0x18);
    LOCK();
    allocation_success = *(longlong *)(data_pointer + checksum_value * 2 + 2) == 0;
    if (allocation_success) {
      *(longlong *)(data_pointer + checksum_value * 2 + 2) = memory_block;
    }
    UNLOCK();
    if (allocation_success) {
      LOCK();
      *(int8_t *)(checksum_value + RENDERING_SYSTEM_SIZE_0X40 + (longlong)data_pointer) = 0;
      UNLOCK();
    }
    else {
      if (memory_block != 0) {
                    // 警告：子函数不返回
        FUN_18064e900();
      }
      do {
      } while (*(char *)(checksum_value + RENDERING_SYSTEM_SIZE_0X40 + (longlong)data_pointer) != '\0');
    }
  }
  else {
    do {
    } while (*(char *)(checksum_value + RENDERING_SYSTEM_SIZE_0X40 + (longlong)data_pointer) != '\0');
  }
  *(int32_t *)(*(longlong *)(data_pointer + checksum_value * 2 + 2) + (ulonglong)(lock_value + resource_index * -RENDERING_SYSTEM_SHIFT_0X800) * 4)
       = *data_value;
  return;
}

// 渲染系统内存清理器
// 清理渲染系统的内存缓冲区
// 
// @param memory_base 内存基地址
// @param memory_offset 内存偏移量
void rendering_system_memory_clearer(longlong memory_base, uint memory_offset)

{
  if ((int)memory_offset < (int)(memory_offset + RENDERING_SYSTEM_SHIFT_0X800)) {
                    // 警告：子函数不返回
    memset(*(longlong *)(memory_base + 8 + (ulonglong)(memory_offset >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
           (longlong)(int)(memory_offset + (memory_offset >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * RENDERING_SYSTEM_SIZE_0X1B0,0,0x100);
  }
  return;
}

// 渲染系统内存清理器（简化版本）
// 清理渲染系统的内存缓冲区（无参数版本）
void rendering_system_memory_cleaner(void)

{
  longlong unaff_RBP;
  uint unaff_EDI;
  
                    // 警告：子函数不返回
  memset(*(longlong *)(unaff_RBP + 8 + (ulonglong)(unaff_EDI >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
         (longlong)(int)(unaff_EDI + (unaff_EDI >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * RENDERING_SYSTEM_SIZE_0X1B0,0,0x100);
}

// 渲染系统空函数
// 空函数占位符，用于系统初始化
void rendering_system_empty_function(void)

{
  return;
}

// 渲染系统资源处理器
// 处理渲染系统的资源分配和释放
// 
// @param resource_pointer 资源指针
// @param target_pointer 目标指针
// @param param_3 参数3
void rendering_system_resource_handler(longlong *resource_pointer, longlong target_pointer, uint64_t param_3)

{
  uint source_size;
  longlong *temp_pointer;
  longlong base_address;
  longlong target_address;
  uint source_index;
  char operation_result;
  uint temp_uint_1;
  uint temp_uint_2;
  uint temp_uint_3;
  longlong *temp_stack_pointer;
  uint64_t temp_var;
  longlong *temp_stack_pointer_2;
  
  temp_uint_3 = *(uint *)(resource_pointer + 1);
  temp_var = CONCAT44((int)((ulonglong)param_3 >> 0x20),temp_uint_3);
  source_size = *(uint *)(target_pointer + 8);
  if (temp_uint_3 != source_size) {
    target_address = *resource_pointer;
    base_address = *resource_pointer;
    temp_uint_1 = *(uint *)(resource_pointer + 1);
    while (temp_uint_1 = temp_uint_1 + 1, temp_uint_1 != source_size) {
      temp_pointer = *(longlong **)
                (*(longlong *)(base_address + 8 + (ulonglong)(temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                (ulonglong)(temp_uint_1 + (temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8);
      temp_uint_2 = temp_uint_1;
      source_index = temp_uint_1;
      if (temp_uint_1 != temp_uint_3) {
        do {
          source_index = source_index - 1;
          temp_stack_pointer = *(longlong **)
                         (*(longlong *)(target_address + 8 + (ulonglong)(source_index >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                         (ulonglong)(source_index & 0x7ff) * 8);
          if (temp_stack_pointer != (longlong *)0x0) {
            (**(code **)(*temp_stack_pointer + 0x28))();
          }
          temp_stack_pointer_2 = temp_pointer;
          if (temp_pointer != (longlong *)0x0) {
            (**(code **)(*temp_pointer + 0x28))(temp_pointer);
          }
          operation_result = FUN_180306d20(&temp_stack_pointer_2,&temp_stack_pointer);
          temp_uint_3 = (uint)temp_var;
          if (operation_result == '\0') break;
          *(uint64_t *)
           (*(longlong *)(target_address + 8 + (ulonglong)(temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
           (ulonglong)(temp_uint_2 + (temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8) =
               *(uint64_t *)
                (*(longlong *)(target_address + 8 + (ulonglong)(source_index >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                (ulonglong)(source_index & 0x7ff) * 8);
          temp_uint_2 = temp_uint_2 - 1;
        } while (source_index != (uint)temp_var);
      }
      *(longlong **)
       (*(longlong *)(target_address + 8 + (ulonglong)(temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
       (ulonglong)(temp_uint_2 + (temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8) = temp_pointer;
    }
  }
  return;
}

// 渲染系统高级处理器
// 处理渲染系统的高级数据操作和资源管理
// 
// @param data_array 数据数组
// @param target_address 目标地址
// @param param_3 参数3
void rendering_system_advanced_processor(int8_t (*data_array) [16], longlong target_address, uint64_t param_3)

{
  longlong *resource_pointer;
  uint source_index;
  uint64_t temp_var;
  int8_t temp_buffer[16];
  int8_t temp_buffer_2[16];
  char operation_result;
  uint temp_uint_1;
  int32_t temp_param_1;
  int32_t temp_param_2;
  uint temp_uint_2;
  longlong *temp_stack_pointer;
  longlong *temp_stack_pointer_2;
  uint temp_uint_3;
  int32_t temp_param_3;
  longlong **temp_pointer_array;
  uint64_t temp_var_2;
  int8_t temp_buffer_3[16];
  
  temp_buffer_3 = *data_array;
  temp_uint_2 = temp_buffer_3._8_4_;
  _temp_uint_3 = CONCAT44((int)((ulonglong)param_3 >> 0x20),*(uint *)(target_address + 8));
  if (temp_uint_2 != *(uint *)(target_address + 8)) {
    temp_var = temp_buffer_3._0_8_;
    temp_param_1 = temp_buffer_3._0_4_;
    temp_param_2 = temp_buffer_3._4_4_;
    while( true ) {
      temp_buffer = temp_buffer_3;
      temp_var_2 = CONCAT44(temp_param_2,temp_param_1);
      resource_pointer = *(longlong **)
                (*(longlong *)(temp_var + 8 + (ulonglong)(temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                (ulonglong)(temp_uint_2 + (temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8);
      temp_uint_1 = temp_uint_2;
      source_index = temp_uint_2;
      while( true ) {
        source_index = source_index - 1;
        temp_pointer_array = &temp_stack_pointer;
        temp_stack_pointer = *(longlong **)
                      (*(longlong *)(temp_var + 8 + (ulonglong)(source_index >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                      (ulonglong)(source_index & 0x7ff) * 8);
        if (temp_stack_pointer != (longlong *)0x0) {
          (**(code **)(*temp_stack_pointer + 0x28))();
        }
        temp_stack_pointer_2 = resource_pointer;
        if (resource_pointer != (longlong *)0x0) {
          (**(code **)(*resource_pointer + 0x28))(resource_pointer);
        }
        operation_result = FUN_180306d20(&temp_stack_pointer_2,&temp_stack_pointer);
        if (operation_result == '\0') break;
        *(uint64_t *)
         (*(longlong *)(temp_var_2 + 8 + (ulonglong)(temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
         (ulonglong)(temp_uint_1 + (temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8) =
             *(uint64_t *)
              (*(longlong *)(temp_var + 8 + (ulonglong)(source_index >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
              (ulonglong)(source_index & 0x7ff) * 8);
        temp_uint_1 = temp_uint_1 - 1;
      }
      *(longlong **)
       (*(longlong *)(temp_var_2 + 8 + (ulonglong)(temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
       (ulonglong)(temp_uint_1 + (temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8) = resource_pointer;
      temp_uint_2 = temp_uint_2 + 1;
      temp_buffer_3._8_4_ = temp_uint_2;
      temp_buffer_2 = temp_buffer_3;
      if (temp_uint_2 == temp_uint_3) break;
      temp_buffer_3._0_4_ = temp_buffer._0_4_;
      temp_buffer_3._4_4_ = temp_buffer._4_4_;
      temp_param_1 = temp_buffer_3._0_4_;
      temp_param_2 = temp_buffer_3._4_4_;
      temp_buffer_3 = temp_buffer_2;
    }
  }
  return;
}

// 渲染系统内存管理器
// 管理渲染系统的内存分配和释放
// 
// @param memory_pointer 内存指针
// @param target_pointer 目标指针
// @param operation_type 操作类型
// @return 操作结果
longlong rendering_system_memory_manager(longlong *memory_pointer, longlong *target_pointer, int operation_type)

{
  uint64_t *source_pointer;
  uint64_t temp_var;
  uint64_t *target_data;
  
  if (operation_type == 3) {
    return 0x180c05030;
  }
  if (operation_type == 4) {
    return *memory_pointer;
  }
  if (operation_type == 0) {
    if (*memory_pointer != 0) {
                    // 警告：子函数不返回
      FUN_18064e900();
    }
  }
  else {
    if (operation_type == 1) {
      target_data = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,RENDERING_SYSTEM_BUFFER_SIZE_0X38,8,DAT_180bf65bc,0xfffffffffffffffe);
      source_pointer = (uint64_t *)*target_pointer;
      temp_var = source_pointer[1];
      *target_data = *source_pointer;
      target_data[1] = temp_var;
      temp_var = source_pointer[3];
      target_data[2] = source_pointer[2];
      target_data[3] = temp_var;
      temp_var = source_pointer[5];
      target_data[4] = source_pointer[4];
      target_data[5] = temp_var;
      target_data[6] = source_pointer[6];
      *memory_pointer = (longlong)target_data;
      return 0;
    }
    if (operation_type == 2) {
      *memory_pointer = *target_pointer;
      *target_pointer = 0;
      return 0;
    }
  }
  return 0;
}

// 渲染系统数据同步器
// 同步渲染系统的数据状态和资源管理
// 
// @param source_pointer 源指针
// @param target_pointer 目标指针
// @param sync_count 同步计数
// @param param_4 参数4
void rendering_system_data_synchronizer(longlong *source_pointer, longlong *target_pointer, longlong sync_count, uint64_t param_4)

{
  uint source_size;
  longlong temp_address;
  uint temp_uint_1;
  longlong temp_address_2;
  uint64_t *memory_block;
  uint temp_uint_2;
  uint temp_uint_3;
  longlong temp_address_3;
  uint temp_uint_4;
  uint64_t temp_var;
  int32_t temp_param_1;
  int32_t temp_param_2;
  int32_t temp_param_3;
  int32_t temp_param_4;
  int32_t temp_param_5;
  int32_t temp_param_6;
  int32_t temp_param_7;
  int32_t temp_param_8;
  int32_t temp_param_9;
  longlong temp_long_1;
  longlong temp_long_2;
  int32_t temp_param_10;
  int32_t temp_param_11;
  int32_t temp_param_12;
  int32_t temp_param_13;
  longlong temp_long_3;
  longlong temp_long_4;
  longlong temp_long_5;
  longlong temp_long_6;
  longlong temp_long_7;
  longlong temp_long_8;
  longlong temp_long_9;
  int32_t temp_param_14;
  int32_t temp_param_15;
  int32_t temp_param_16;
  int32_t temp_param_17;
  
  source_size = *(uint *)(source_pointer + 1);
  temp_long_1 = (longlong)(int)source_size;
  temp_address_2 = (int)target_pointer[1] - temp_long_1;
  temp_var = param_4;
  while ((RENDERING_SYSTEM_THRESHOLD_0X1C < temp_address_2 && (0 < sync_count))) {
    temp_uint_4 = (int)target_pointer[1] - 1;
    temp_uint_2 = temp_uint_4 >> RENDERING_SYSTEM_SHIFT_0XB;
    temp_uint_1 = (int)(((int)target_pointer[1] - temp_long_1) / 2) + source_size;
    temp_uint_3 = temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB;
    memory_block = (uint64_t *)
             FUN_180308f10(*(longlong *)(*source_pointer + 8 + (ulonglong)(source_size >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                           (ulonglong)(source_size + (source_size >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8,
                           *(longlong *)(*source_pointer + 8 + (ulonglong)temp_uint_3 * 8) +
                           (ulonglong)(temp_uint_1 + temp_uint_3 * -RENDERING_SYSTEM_SHIFT_0X800) * 8,
                           *(longlong *)(*target_pointer + 8 + (ulonglong)temp_uint_2 * 8) +
                           (ulonglong)(temp_uint_4 + temp_uint_2 * -RENDERING_SYSTEM_SHIFT_0X800) * 8);
    temp_param_1 = (int32_t)*target_pointer;
    temp_param_2 = *(int32_t *)((longlong)target_pointer + 4);
    temp_param_3 = (int32_t)target_pointer[1];
    temp_param_4 = *(int32_t *)((longlong)target_pointer + 0xc);
    temp_param_5 = (int32_t)*source_pointer;
    temp_param_6 = *(int32_t *)((longlong)source_pointer + 4);
    temp_param_7 = (int32_t)source_pointer[1];
    temp_param_8 = *(int32_t *)((longlong)source_pointer + 0xc);
    temp_var = *memory_block;
    FUN_1803090c0(&temp_long_9,&temp_param_5,&temp_param_1,&temp_var);
    temp_address = temp_long_8;
    temp_address_2 = temp_long_9;
    temp_param_10 = (int32_t)*target_pointer;
    temp_param_11 = *(int32_t *)((longlong)target_pointer + 4);
    temp_param_12 = (int32_t)target_pointer[1];
    temp_param_13 = *(int32_t *)((longlong)target_pointer + 0xc);
    sync_count = sync_count + -1;
    temp_long_7 = temp_long_9;
    temp_long_6 = temp_long_8;
    FUN_180308a90(&temp_long_7,&temp_param_10,sync_count,FUN_180306d20);
    *target_pointer = temp_address_2;
    target_pointer[1] = temp_address;
    temp_address_2 = (int)target_pointer[1] - temp_long_1;
  }
  if (sync_count == 0) {
    temp_long_5 = *target_pointer;
    temp_long_4 = target_pointer[1];
    temp_param_14 = (int32_t)*source_pointer;
    temp_param_15 = *(int32_t *)((longlong)source_pointer + 4);
    temp_param_16 = (int32_t)source_pointer[1];
    temp_param_17 = *(int32_t *)((longlong)source_pointer + 0xc);
    temp_long_3 = temp_long_5;
    temp_long_2 = temp_long_4;
    FUN_180308c30(&temp_param_14,&temp_long_3,&temp_long_5);
  }
  return;
}

// 渲染系统扩展处理器
// 扩展的渲染系统处理功能，支持更复杂的数据操作
// 
// @param source_pointer 源指针
// @param param_2 参数2
// @param param_3 参数3
// @param param_4 参数4
// @param param_5 参数5
// @param param_6 参数6
// @param param_7 参数7
// @param param_8 参数8
// @param param_9 参数9
// @param param_10 参数10
// @param param_11 参数11
// @param param_12 参数12
// @param param_13 参数13
// @param param_14 参数14
// @param param_15 参数15
// @param param_16 参数16
// @param param_17 参数17
// @param param_18 参数18
// @param param_19 参数19
// @param param_20 参数20
// @param param_21 参数21
void rendering_system_extended_processor(longlong *source_pointer, uint64_t param_2, longlong param_3, uint64_t param_4,
                                       uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8,
                                       uint64_t param_9, longlong param_10, longlong param_11, uint64_t param_12,
                                       uint64_t param_13, longlong param_14, longlong param_15, longlong param_16,
                                       longlong param_17, longlong param_18, longlong param_19, int32_t param_20,
                                       int32_t param_21)

{
  uint source_size;
  longlong temp_address;
  longlong temp_address_2;
  uint temp_uint_1;
  uint64_t *memory_block;
  uint temp_uint_2;
  uint temp_uint_3;
  uint64_t temp_var;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  longlong temp_address_3;
  longlong *unaff_RDI;
  uint temp_uint_4;
  longlong in_R11;
  uint64_t unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t temp_param_1;
  int32_t temp_param_2;
  uint64_t in_stack_000000f8;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  source_size = *(uint *)(source_pointer + 1);
  temp_address_3 = (longlong)(int)source_size;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R14;
  if (RENDERING_SYSTEM_THRESHOLD_0X1C < in_R11 - temp_address_3) {
    *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
    *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
    *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
    *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
    do {
      if (param_3 < 1) break;
      temp_uint_4 = (int)unaff_RDI[1] - 1;
      temp_uint_2 = temp_uint_4 >> RENDERING_SYSTEM_SHIFT_0XB;
      temp_uint_1 = (int)(((int)unaff_RDI[1] - temp_address_3) / 2) + source_size;
      temp_uint_3 = temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB;
      memory_block = (uint64_t *)
               FUN_180308f10(*(longlong *)(*source_pointer + 8 + (ulonglong)(source_size >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                             (ulonglong)(source_size + (source_size >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8,
                             *(longlong *)(*source_pointer + 8 + (ulonglong)temp_uint_3 * 8) +
                             (ulonglong)(temp_uint_1 + temp_uint_3 * -RENDERING_SYSTEM_SHIFT_0X800) * 8,
                             *(longlong *)(*unaff_RDI + 8 + (ulonglong)temp_uint_2 * 8) +
                             (ulonglong)(temp_uint_4 + temp_uint_2 * -RENDERING_SYSTEM_SHIFT_0X800) * 8);
      param_6._0_4_ = (int32_t)*unaff_RDI;
      param_6._4_4_ = *(int32_t *)((longlong)unaff_RDI + 4);
      param_7._0_4_ = (int32_t)unaff_RDI[1];
      param_7._4_4_ = *(int32_t *)((longlong)unaff_RDI + 0xc);
      param_8._0_4_ = (int32_t)*source_pointer;
      param_8._4_4_ = *(int32_t *)((longlong)source_pointer + 4);
      param_9._0_4_ = (int32_t)source_pointer[1];
      param_9._4_4_ = *(int32_t *)((longlong)source_pointer + 0xc);
      in_stack_000000f8 = *memory_block;
      FUN_1803090c0(&param_10,&param_8,&param_6,&stack0x000000f8);
      temp_address_2 = param_11;
      temp_address = param_10;
      param_12._0_4_ = (int32_t)*unaff_RDI;
      param_12._4_4_ = *(int32_t *)((longlong)unaff_RDI + 4);
      param_13._0_4_ = (int32_t)unaff_RDI[1];
      param_13._4_4_ = *(int32_t *)((longlong)unaff_RDI + 0xc);
      param_3 = param_3 + -1;
      param_14 = param_10;
      param_15 = param_11;
      FUN_180308a90(&param_14,&param_12,param_3,FUN_180306d20);
      *unaff_RDI = temp_address;
      unaff_RDI[1] = temp_address_2;
    } while (RENDERING_SYSTEM_THRESHOLD_0X1C < (int)unaff_RDI[1] - temp_address_3);
  }
  if (param_3 == 0) {
    param_16 = *unaff_RDI;
    param_17 = unaff_RDI[1];
    param_20 = (int32_t)*source_pointer;
    temp_param_1 = *(int32_t *)((longlong)source_pointer + 4);
    param_21 = (int32_t)source_pointer[1];
    temp_param_2 = *(int32_t *)((longlong)source_pointer + 0xc);
    param_18 = param_16;
    param_19 = param_17;
    FUN_180308c30(&param_20,&param_18,&param_16);
  }
  return;
}

// 模块信息：渲染系统高级资源管理和数据处理模块
// 
// 功能概述：
// 本模块提供渲染系统的高级资源管理和数据处理功能，包括资源分配、数据处理、
// 内存管理、状态同步等核心渲染功能。模块支持多种缓冲区大小、线程安全操作
// 和复杂的数据处理流程。
//
// 主要特点：
// - 支持多种缓冲区大小（0x28000、0xD8000、0x2000等）
// - 线程安全的资源分配和释放
// - 高效的数据处理和状态同步
// - 复杂的内存管理和清理操作
// - 支持递归和迭代的处理算法
//
// 使用场景：
// - 渲染系统初始化和配置
// - 渲染资源的管理和分配
// - 渲染数据的处理和同步
// - 渲染状态的更新和维护
// - 渲染性能的优化和监控
//
// 依赖关系：
// - 依赖FUN_180308a90进行数据同步
// - 依赖FUN_1803090c0进行数据处理
// - 依赖FUN_180306d20进行资源操作
// - 依赖_FUN_18062b420进行内存分配
// - 依赖_FUN_18064e900进行资源清理
//
// 注意事项：
// - 部分函数不返回，直接调用清理函数
// - 需要正确处理内存分配失败的情况
// - 注意线程安全的锁定和解锁操作
// - 处理大量的位操作和地址计算