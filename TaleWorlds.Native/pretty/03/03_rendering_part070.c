#include "TaleWorlds.Native.Split.h"
// $fun 的语义化别名
#define $alias_name $fun
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
#define rendering_system_resource_manager RenderingSystem_07ca0
#define rendering_system_data_processor RenderingSystem_08500
#define rendering_system_memory_clearer RenderingSystem_085c0
#define rendering_system_memory_cleaner RenderingSystem_085e2
#define rendering_system_empty_function RenderingSystem_08660
#define rendering_system_resource_handler RenderingSystem_08670
#define rendering_system_advanced_processor RenderingSystem_08820
#define rendering_system_memory_manager RenderingSystem_089a0
#define rendering_system_data_synchronizer RenderingSystem_08a90
#define rendering_system_extended_processor RenderingSystem_08aa7
// 渲染系统资源管理器
// 管理渲染系统的资源分配、数据处理和状态同步
// @param render_context 渲染上下文指针
// @param data_context 数据上下文指针
void rendering_system_resource_manager(int64_t render_context, int64_t data_context)
{
  int *resource_count;
  int64_t *resource_array;
  int array_size;
  int bit_count;
  int64_t **resource_pointer;
  uint lock_value;
  uint resource_index;
  uint64_t *memory_block;
  int64_t base_address;
  int64_t temp_address;
  int64_t *buffer_pointer;
  int buffer_size;
  char *string_pointer;
  uint64_t checksum_value;
  uint *uint_pointer;
  int item_count;
  int64_t resource_item;
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
  int64_t **temp_pointer_array;
  int64_t temp_long_1;
  int64_t *temp_long_pointer_1;
  int64_t *temp_long_pointer_2;
  int *temp_int_pointer;
  int32_t temp_param_3;
  uint temp_uint_3;
  int64_t *temp_long_pointer_3;
  int64_t *temp_long_pointer_4;
  int64_t *temp_long_pointer_5;
  void **temp_var_pointer;
  uint64_t temp_var_3;
  int *temp_int_pointer_2;
  uint64_t temp_var_4;
  int *temp_int_pointer_3;
  int64_t temp_long_2;
  int *temp_int_pointer_4;
  uint64_t temp_var_5;
  int *temp_int_pointer_5;
  uint64_t temp_var_6;
  int *temp_int_pointer_6;
  uint64_t temp_var_7;
  int *temp_int_pointer_7;
  int64_t temp_long_3;
  int8_t temp_buffer[12];
  int32_t temp_param_4;
  int32_t temp_param_5;
  int32_t temp_param_6;
  int32_t temp_param_7;
  void *temp_var_1;
  int8_t *temp_var_2;
  int32_t temp_param_8;
  int8_t temp_buffer_2[128];
  int32_t temp_param_9;
  uint64_t temp_var_8;
  int64_t temp_long_4;
  uint64_t temp_var_9;
  int64_t temp_long_5;
  void *temp_var_3;
  int8_t *temp_var_4;
  int32_t temp_param_10;
  int8_t temp_buffer_3[128];
  int32_t temp_param_11;
  uint64_t temp_var_10;
  int64_t temp_long_6;
  uint64_t temp_var_11;
  int64_t temp_long_7;
  void *temp_var_5;
  int8_t *temp_var_6;
  int32_t temp_param_12;
  int8_t temp_buffer_4[72];
  void *temp_var_7;
  int8_t *temp_var_8;
  int32_t temp_param_13;
  int8_t temp_buffer_5[72];
  uint64_t stack_checksum;
  temp_var_3 = RENDERING_SYSTEM_STACK_GUARD_VALUE;
  stack_checksum = _DAT ^ (uint64_t)security_buffer;
  item_count = 0;
  bit_count = 0;
  resource_array = *(int64_t **)(render_context + 0x1b90);
  temp_long_4 = render_context;
  if (resource_array != *(int64_t **)(render_context + 0x1b98)) {
    do {
      item_count = item_count + (int)(*(int64_t *)(*resource_array + 0x90) - *(int64_t *)(*resource_array + 0x88) >> 3);
      resource_array = resource_array + 1;
    } while (resource_array != *(int64_t **)(render_context + 0x1b98));
    if (0 < item_count) {
      resource_count = (int *)(render_context + 0x78);
      item_count = *resource_count;
      *(int *)(data_context + 0x124b8) = item_count;
      temp_int_2 = item_count;
      if (0 < item_count) {
        array_size = *resource_count;
        temp_param_3 = 0;
        temp_pointer_array = (int64_t **)resource_count;
        temp_int_1 = array_size;
        temp_int_pointer = resource_count;
        bit_count = array_size;
        if (array_size != 0) {
          for (; bit_count != 0; bit_count = bit_count >> 1) {
            bit_count = bit_count + 1;
          }
          temp_var = CONCAT44(temp_param_2,array_size);
          temp_long_3 = (uint64_t)temp_uint_3 << 0x20;
          temp_int_pointer_3 = resource_count;
          temp_var_4 = temp_var;
          temp_int_pointer_2 = resource_count;
          temp_long_2 = temp_long_3;
          RenderingSystem_08a90(&temp_int_pointer_2,&temp_int_pointer_3,(int64_t)(bit_count + -1) * 2);
          if (array_size < RENDERING_SYSTEM_THRESHOLD_0X1D) {
            temp_int_pointer_7 = resource_count;
            temp_var_7 = temp_var;
            temp_int_pointer_6 = resource_count;
            temp_long_3 = temp_long_3;
            RenderingSystem_08670(&temp_int_pointer_6,&temp_int_pointer_7);
          }
          else {
            temp_int_1 = RENDERING_SYSTEM_THRESHOLD_0X1C;
            temp_var_6 = CONCAT44(temp_param_2,RENDERING_SYSTEM_THRESHOLD_0X1C);
            temp_pointer_array = (int64_t **)resource_count;
            temp_int_pointer_5 = resource_count;
            temp_int_pointer_4 = resource_count;
            temp_long_5 = temp_long_3;
            RenderingSystem_08670(&temp_int_pointer_4,&temp_int_pointer_5);
            temp_int_1 = RENDERING_SYSTEM_THRESHOLD_0X1C;
            temp_var_5 = CONCAT44(temp_param_2,RENDERING_SYSTEM_THRESHOLD_0X1C);
            temp_pointer_array = (int64_t **)resource_count;
            temp_int_pointer_6 = resource_count;
            temp_var_6 = temp_var;
            temp_int_pointer_5 = resource_count;
            RenderingSystem_08820(&temp_int_pointer_5,&temp_int_pointer_6);
          }
        }
        scale_factor = (float)item_count * RENDERING_SYSTEM_SCALE_FACTOR_0_006666667;
        normalized_factor = 0.0;
        if ((0.0 <= scale_factor) && (normalized_factor = scale_factor, 1.0 <= scale_factor)) {
          normalized_factor = 1.0;
        }
        quality_factor = *(float *)(_DAT + 0x388);
        DataStructure_87b30(data_context + 0xf0,temp_buffer);
        temp_param_4 = 0;
        temp_param_5 = 0;
        temp_param_6 = 0;
        temp_param_7 = 0x3f800000;
        temp_var_5 = &memory_allocator_3480_ptr;
        temp_var_6 = temp_buffer_4;
        temp_buffer_4[0] = 0;
        temp_param_12 = 0x1e;
        temp_var = strcpy_s(temp_buffer_4,RENDERING_SYSTEM_STRING_LENGTH_0X40,&memory_allocator_3752_ptr);
        temp_param_1 = 0x100;
        temp_flag = 1;
        temp_var_2 = 0;
        temp_param_10 = 0x50;
        temp_float_2 = 0.0;
        temp_float_1 = 4.2039e-45;
        temp_var_2 = (int8_t *)CONCAT44(temp_var_2._4_4_,0x61);
        temp_int_1 = item_count;
        memory_block = (uint64_t *)
                 SystemCore_ConfigManager(temp_var,&temp_long_pointer_4,*(int32_t *)(data_context + 0x1bd4),&temp_var_5);
        temp_var = *memory_block;
        *memory_block = 0;
        temp_long_pointer_5 = *(int64_t **)(render_context + 0x68);
        *(uint64_t *)(render_context + 0x68) = temp_var;
        if (temp_long_pointer_5 != (int64_t *)0x0) {
          (**(code **)(*temp_long_pointer_5 + 0x38))();
        }
        if (temp_long_pointer_4 != (int64_t *)0x0) {
          (**(code **)(*temp_long_pointer_4 + 0x38))();
        }
        temp_var_5 = &system_state_ptr;
        temp_var_7 = &memory_allocator_3480_ptr;
        temp_var_8 = temp_buffer_5;
        temp_buffer_5[0] = 0;
        temp_param_13 = 0x21;
        temp_var = strcpy_s(temp_buffer_5,RENDERING_SYSTEM_STRING_LENGTH_0X40,&memory_allocator_3712_ptr);
        temp_param_1 = 0x100;
        temp_flag = 1;
        temp_var_2 = 0;
        temp_param_10 = 0x1b0;
        temp_float_2 = 0.0;
        temp_float_1 = 4.2039e-45;
        temp_var_2 = (int8_t *)CONCAT44(temp_var_2._4_4_,0x61);
        temp_int_1 = item_count;
        memory_block = (uint64_t *)
                 SystemCore_ConfigManager(temp_var,&temp_long_pointer_3,*(int32_t *)(data_context + 0x1bd4),&temp_var_7);
        temp_var = *memory_block;
        *memory_block = 0;
        temp_long_pointer_5 = *(int64_t **)(render_context + 0x70);
        *(uint64_t *)(render_context + 0x70) = temp_var;
        if (temp_long_pointer_5 != (int64_t *)0x0) {
          (**(code **)(*temp_long_pointer_5 + 0x38))();
        }
        if (temp_long_pointer_3 != (int64_t *)0x0) {
          (**(code **)(*temp_long_pointer_3 + 0x38))();
        }
        temp_var_7 = &system_state_ptr;
        temp_uint_2 = 0;
        if (0 < item_count) {
          temp_pointer_array = (int64_t **)(render_context + 0x980);
          do {
            resource_pointer = temp_pointer_array;
            LOCK();
            lock_value = *(uint *)temp_pointer_array;
            *(uint *)temp_pointer_array = *(uint *)temp_pointer_array + 1;
            UNLOCK();
            resource_index = lock_value >> RENDERING_SYSTEM_SHIFT_0XB;
            checksum_value = (uint64_t)resource_index;
            string_pointer = (char *)((int64_t)temp_pointer_array + checksum_value + 0x808);
            uint_pointer = (uint *)((int64_t)temp_pointer_array + ((uint64_t)resource_index * 2 + 2) * 4);
            temp_long_3 = -0x808 - (int64_t)temp_pointer_array;
            do {
              bit_count = (int)checksum_value;
              if (*(int64_t *)uint_pointer == 0) {
                base_address = CoreMemoryPoolAllocator(_DAT,RENDERING_SYSTEM_BUFFER_SIZE_0X28000,0x25);
                LOCK();
                allocation_success = *(int64_t *)((int64_t)resource_pointer + ((int64_t)bit_count * 2 + 2) * 4) == 0;
                if (allocation_success) {
                  *(int64_t *)((int64_t)resource_pointer + ((int64_t)bit_count * 2 + 2) * 4) = base_address;
                }
                UNLOCK();
                if (allocation_success) {
                  LOCK();
                  *(int8_t *)((int64_t)bit_count + 0x808 + (int64_t)resource_pointer) = 0;
                  UNLOCK();
                }
                else {
                  if (base_address != 0) {
// 警告：子函数不返回
                    CoreMemoryPoolInitializer(base_address);
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
              checksum_value = (uint64_t)(bit_count + 1);
              uint_pointer = uint_pointer + 2;
              string_pointer = string_pointer + 1;
            } while ((int64_t)(string_pointer + temp_long_3) <= (int64_t)(uint64_t)resource_index);
            temp_int_pointer = (int *)(*(int64_t *)((int64_t)resource_pointer + ((uint64_t)resource_index * 2 + 2) * 4)
                                 + (uint64_t)(lock_value - (lock_value & 0xfffff800)) * RENDERING_SYSTEM_SIZE_0X50);
            LOCK();
            uint_pointer = (uint *)(temp_long_4 + 0x1288);
            temp_uint_1 = *uint_pointer;
            *uint_pointer = *uint_pointer + 1;
            UNLOCK();
            lock_value = temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB;
            checksum_value = (uint64_t)lock_value;
            temp_long_3 = temp_long_4 + 0x1288;
            string_pointer = (char *)(temp_long_4 + 0x1a90 + checksum_value);
            resource_array = (int64_t *)(temp_long_4 + 0x1290 + (uint64_t)lock_value * 8);
            do {
              bit_count = (int)checksum_value;
              if (*resource_array == 0) {
                temp_address = CoreMemoryPoolAllocator(_DAT,RENDERING_SYSTEM_BUFFER_SIZE_0XD8000,0x25);
                buffer_pointer = (int64_t *)(base_address + 0x1290 + (int64_t)bit_count * 8);
                LOCK();
                allocation_success = *buffer_pointer == 0;
                if (allocation_success) {
                  *buffer_pointer = temp_address;
                }
                UNLOCK();
                if (allocation_success) {
                  RenderingSystem_085c0(temp_long_3,bit_count << RENDERING_SYSTEM_SHIFT_0XB);
                  LOCK();
                  *(int8_t *)((int64_t)bit_count + 0x808 + temp_long_3) = 0;
                  UNLOCK();
                }
                else {
                  if (temp_address != 0) {
// 警告：子函数不返回
                    CoreMemoryPoolInitializer();
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
              checksum_value = (uint64_t)(bit_count + 1);
              resource_array = resource_array + 1;
              string_pointer = string_pointer + 1;
            } while ((int64_t)(string_pointer + (-0x808 - temp_long_3)) <= (int64_t)(uint64_t)lock_value);
            temp_var_2 = temp_buffer;
            temp_float_1 = normalized_factor * RENDERING_SYSTEM_SCALE_FACTOR_0_875;
            temp_float_2 = 1.0 / quality_factor;
            RenderingSystem_076d0(temp_long_4,
                          *(uint64_t *)
                           (*(int64_t *)(temp_long_4 + 0x80 + (uint64_t)(temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                           (uint64_t)(temp_uint_2 + (temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8),
                          *(int64_t *)(temp_long_4 + 0x1290 + (uint64_t)lock_value * 8) +
                          (uint64_t)(temp_uint_1 - (temp_uint_1 & 0xfffff800)) * RENDERING_SYSTEM_SIZE_0X1B0,temp_int_pointer);
            temp_uint_2 = resource_index + 1;
            item_count = temp_int_2;
          } while ((int)temp_uint_2 < temp_int_2);
        }
        temp_pointer_array = (int64_t **)&temp_var_1;
        temp_var_1 = &memory_allocator_3432_ptr;
        temp_var_2 = temp_buffer_2;
        temp_param_8 = 0;
        temp_buffer_2[0] = 0;
        temp_param_9 = 0xb;
        temp_var_8 = *(uint64_t *)(render_context + 0x68);
        temp_var_9 = RENDERING_SYSTEM_BUFFER_SIZE_0X28000;
        temp_long_6 = render_context + 0x988;
        temp_long_5 = (int64_t)item_count * RENDERING_SYSTEM_SIZE_0X50;
        temp_var = CoreMemoryPoolReallocator(_DAT,RENDERING_SYSTEM_BUFFER_SIZE_0X100,8,3);
        resource_array = (int64_t *)SystemCore_StreamController(temp_var,&temp_var_1);
        temp_pointer_3 = (int64_t **)resource_array;
        if (resource_array != (int64_t *)0x0) {
          (**(code **)(*resource_array + 0x28))(resource_array);
        }
        temp_var = _DAT;
        temp_pointer_array = &temp_long_pointer_2;
        temp_long_pointer_2 = resource_array;
        if (resource_array != (int64_t *)0x0) {
          (**(code **)(*resource_array + 0x28))(resource_array);
        }
        SystemPerformance_Monitor(temp_var,&temp_long_pointer_2);
        if (resource_array != (int64_t *)0x0) {
          (**(code **)(*resource_array + 0x38))(resource_array);
        }
        temp_var_1 = &system_state_ptr;
        temp_pointer_3 = (int64_t **)&temp_var_3;
        temp_var_3 = &memory_allocator_3432_ptr;
        temp_var_4 = temp_buffer_3;
        temp_param_10 = 0;
        temp_buffer_3[0] = 0;
        temp_param_11 = 0xb;
        temp_var_10 = *(uint64_t *)(render_context + 0x70);
        temp_var_11 = RENDERING_SYSTEM_BUFFER_SIZE_0XD8000;
        temp_long_7 = render_context + 0x1290;
        temp_long_6 = (int64_t)item_count * RENDERING_SYSTEM_SIZE_0X1B0;
        temp_var = CoreMemoryPoolReallocator(_DAT,RENDERING_SYSTEM_BUFFER_SIZE_0X100,8,3);
        resource_array = (int64_t *)SystemCore_StreamController(temp_var,&temp_var_3);
        temp_var_pointer = (void **)resource_array;
        if (resource_array != (int64_t *)0x0) {
          (**(code **)(*resource_array + 0x28))(resource_array);
        }
        temp_var = _DAT;
        temp_pointer_3 = &temp_long_pointer_1;
        temp_long_pointer_1 = resource_array;
        if (resource_array != (int64_t *)0x0) {
          (**(code **)(*resource_array + 0x28))(resource_array);
        }
        SystemPerformance_Monitor(temp_var,&temp_long_pointer_1);
        if (resource_array != (int64_t *)0x0) {
          (**(code **)(*resource_array + 0x38))(resource_array);
        }
        temp_var_pointer = &temp_var_3;
        temp_var_3 = &system_state_ptr;
      }
      goto LAB_1803084bf;
    }
  }
  *(int32_t *)(data_context + 0x124b8) = 0;
LAB_1803084bf:
// 警告：子函数不返回
  SystemSecurityChecker(stack_checksum ^ (uint64_t)security_buffer);
}
// 渲染系统数据处理器
// 处理渲染系统的数据写入和锁定操作
// @param data_pointer 数据指针
// @param data_value 数据值指针
void rendering_system_data_processor(uint *data_pointer, int32_t *data_value)
{
  uint lock_value;
  uint resource_index;
  int64_t memory_block;
  uint64_t checksum_value;
  bool allocation_success;
  LOCK();
  lock_value = *data_pointer;
  *data_pointer = *data_pointer + 1;
  UNLOCK();
  resource_index = lock_value >> RENDERING_SYSTEM_SHIFT_0XB;
  checksum_value = (uint64_t)resource_index;
  if (*(int64_t *)(data_pointer + (uint64_t)resource_index * 2 + 2) == 0) {
    memory_block = CoreMemoryPoolAllocator(_DAT,RENDERING_SYSTEM_BUFFER_SIZE_0X2000,0x18);
    LOCK();
    allocation_success = *(int64_t *)(data_pointer + checksum_value * 2 + 2) == 0;
    if (allocation_success) {
      *(int64_t *)(data_pointer + checksum_value * 2 + 2) = memory_block;
    }
    UNLOCK();
    if (allocation_success) {
      LOCK();
      *(int8_t *)(checksum_value + RENDERING_SYSTEM_SIZE_0X40 + (int64_t)data_pointer) = 0;
      UNLOCK();
    }
    else {
      if (memory_block != 0) {
// 警告：子函数不返回
        CoreMemoryPoolInitializer();
      }
      do {
      } while (*(char *)(checksum_value + RENDERING_SYSTEM_SIZE_0X40 + (int64_t)data_pointer) != '\0');
    }
  }
  else {
    do {
    } while (*(char *)(checksum_value + RENDERING_SYSTEM_SIZE_0X40 + (int64_t)data_pointer) != '\0');
  }
  *(int32_t *)(*(int64_t *)(data_pointer + checksum_value * 2 + 2) + (uint64_t)(lock_value + resource_index * -RENDERING_SYSTEM_SHIFT_0X800) * 4)
       = *data_value;
  return;
}
// 渲染系统内存清理器
// 清理渲染系统的内存缓冲区
// @param memory_base 内存基地址
// @param memory_offset 内存偏移量
void rendering_system_memory_clearer(int64_t memory_base, uint memory_offset)
{
  if ((int)memory_offset < (int)(memory_offset + RENDERING_SYSTEM_SHIFT_0X800)) {
// 警告：子函数不返回
    memset(*(int64_t *)(memory_base + 8 + (uint64_t)(memory_offset >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
           (int64_t)(int)(memory_offset + (memory_offset >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * RENDERING_SYSTEM_SIZE_0X1B0,0,0x100);
  }
  return;
}
// 渲染系统内存清理器（简化版本）
// 清理渲染系统的内存缓冲区（无参数版本）
void rendering_system_memory_cleaner(void)
{
  int64_t unaff_RBP;
  uint unaff_EDI;
// 警告：子函数不返回
  memset(*(int64_t *)(unaff_RBP + 8 + (uint64_t)(unaff_EDI >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
         (int64_t)(int)(unaff_EDI + (unaff_EDI >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * RENDERING_SYSTEM_SIZE_0X1B0,0,0x100);
}
// 渲染系统空函数
// 空函数占位符，用于系统初始化
void rendering_system_empty_function(void)
{
  return;
}
// 渲染系统资源处理器
// 处理渲染系统的资源分配和释放
// @param resource_pointer 资源指针
// @param target_pointer 目标指针
// @param param_3 参数3
void rendering_system_resource_handler(int64_t *resource_pointer, int64_t target_pointer, uint64_t param_3)
{
  uint source_size;
  int64_t *temp_pointer;
  int64_t base_address;
  int64_t target_address;
  uint source_index;
  char operation_result;
  uint temp_uint_1;
  uint temp_uint_2;
  uint temp_uint_3;
  int64_t *temp_stack_pointer;
  uint64_t temp_var;
  int64_t *temp_stack_pointer_2;
  temp_uint_3 = *(uint *)(resource_pointer + 1);
  temp_var = CONCAT44((int)((uint64_t)param_3 >> 0x20),temp_uint_3);
  source_size = *(uint *)(target_pointer + 8);
  if (temp_uint_3 != source_size) {
    target_address = *resource_pointer;
    base_address = *resource_pointer;
    temp_uint_1 = *(uint *)(resource_pointer + 1);
    while (temp_uint_1 = temp_uint_1 + 1, temp_uint_1 != source_size) {
      temp_pointer = *(int64_t **)
                (*(int64_t *)(base_address + 8 + (uint64_t)(temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                (uint64_t)(temp_uint_1 + (temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8);
      temp_uint_2 = temp_uint_1;
      source_index = temp_uint_1;
      if (temp_uint_1 != temp_uint_3) {
        do {
          source_index = source_index - 1;
          temp_stack_pointer = *(int64_t **)
                         (*(int64_t *)(target_address + 8 + (uint64_t)(source_index >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                         (uint64_t)(source_index & 0x7ff) * 8);
          if (temp_stack_pointer != (int64_t *)0x0) {
            (**(code **)(*temp_stack_pointer + 0x28))();
          }
          temp_stack_pointer_2 = temp_pointer;
          if (temp_pointer != (int64_t *)0x0) {
            (**(code **)(*temp_pointer + 0x28))(temp_pointer);
          }
          operation_result = RenderingSystem_06d20(&temp_stack_pointer_2,&temp_stack_pointer);
          temp_uint_3 = (uint)temp_var;
          if (operation_result == '\0') break;
          *(uint64_t *)
           (*(int64_t *)(target_address + 8 + (uint64_t)(temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
           (uint64_t)(temp_uint_2 + (temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8) =
               *(uint64_t *)
                (*(int64_t *)(target_address + 8 + (uint64_t)(source_index >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                (uint64_t)(source_index & 0x7ff) * 8);
          temp_uint_2 = temp_uint_2 - 1;
        } while (source_index != (uint)temp_var);
      }
      *(int64_t **)
       (*(int64_t *)(target_address + 8 + (uint64_t)(temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
       (uint64_t)(temp_uint_2 + (temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8) = temp_pointer;
    }
  }
  return;
}
// 渲染系统高级处理器
// 处理渲染系统的高级数据操作和资源管理
// @param data_array 数据数组
// @param target_address 目标地址
// @param param_3 参数3
void rendering_system_advanced_processor(int8_t (*data_array) [16], int64_t target_address, uint64_t param_3)
{
  int64_t *resource_pointer;
  uint source_index;
  uint64_t temp_var;
  int8_t temp_buffer[16];
  int8_t temp_buffer_2[16];
  char operation_result;
  uint temp_uint_1;
  int32_t temp_param_1;
  int32_t temp_param_2;
  uint temp_uint_2;
  int64_t *temp_stack_pointer;
  int64_t *temp_stack_pointer_2;
  uint temp_uint_3;
  int32_t temp_param_3;
  int64_t **temp_pointer_array;
  uint64_t temp_var_2;
  int8_t temp_buffer_3[16];
  temp_buffer_3 = *data_array;
  temp_uint_2 = temp_buffer_3._8_4_;
  _temp_uint_3 = CONCAT44((int)((uint64_t)param_3 >> 0x20),*(uint *)(target_address + 8));
  if (temp_uint_2 != *(uint *)(target_address + 8)) {
    temp_var = temp_buffer_3._0_8_;
    temp_param_1 = temp_buffer_3._0_4_;
    temp_param_2 = temp_buffer_3._4_4_;
    while( true ) {
      temp_buffer = temp_buffer_3;
      temp_var_2 = CONCAT44(temp_param_2,temp_param_1);
      resource_pointer = *(int64_t **)
                (*(int64_t *)(temp_var + 8 + (uint64_t)(temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                (uint64_t)(temp_uint_2 + (temp_uint_2 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8);
      temp_uint_1 = temp_uint_2;
      source_index = temp_uint_2;
      while( true ) {
        source_index = source_index - 1;
        temp_pointer_array = &temp_stack_pointer;
        temp_stack_pointer = *(int64_t **)
                      (*(int64_t *)(temp_var + 8 + (uint64_t)(source_index >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                      (uint64_t)(source_index & 0x7ff) * 8);
        if (temp_stack_pointer != (int64_t *)0x0) {
          (**(code **)(*temp_stack_pointer + 0x28))();
        }
        temp_stack_pointer_2 = resource_pointer;
        if (resource_pointer != (int64_t *)0x0) {
          (**(code **)(*resource_pointer + 0x28))(resource_pointer);
        }
        operation_result = RenderingSystem_06d20(&temp_stack_pointer_2,&temp_stack_pointer);
        if (operation_result == '\0') break;
        *(uint64_t *)
         (*(int64_t *)(temp_var_2 + 8 + (uint64_t)(temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
         (uint64_t)(temp_uint_1 + (temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8) =
             *(uint64_t *)
              (*(int64_t *)(temp_var + 8 + (uint64_t)(source_index >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
              (uint64_t)(source_index & 0x7ff) * 8);
        temp_uint_1 = temp_uint_1 - 1;
      }
      *(int64_t **)
       (*(int64_t *)(temp_var_2 + 8 + (uint64_t)(temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
       (uint64_t)(temp_uint_1 + (temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8) = resource_pointer;
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
// @param memory_pointer 内存指针
// @param target_pointer 目标指针
// @param operation_type 操作类型
// @return 操作结果
int64_t rendering_system_memory_manager(int64_t *memory_pointer, int64_t *target_pointer, int operation_type)
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
      CoreMemoryPoolInitializer();
    }
  }
  else {
    if (operation_type == 1) {
      target_data = (uint64_t *)CoreMemoryPoolReallocator(_DAT,RENDERING_SYSTEM_BUFFER_SIZE_0X38,8,DAT,0xfffffffffffffffe);
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
      *memory_pointer = (int64_t)target_data;
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
// @param source_pointer 源指针
// @param target_pointer 目标指针
// @param sync_count 同步计数
// @param param_4 参数4
void rendering_system_data_synchronizer(int64_t *source_pointer, int64_t *target_pointer, int64_t sync_count, uint64_t param_4)
{
  uint source_size;
  int64_t temp_address;
  uint temp_uint_1;
  int64_t temp_address_2;
  uint64_t *memory_block;
  uint temp_uint_2;
  uint temp_uint_3;
  int64_t temp_address_3;
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
  int64_t temp_long_1;
  int64_t temp_long_2;
  int32_t temp_param_10;
  int32_t temp_param_11;
  int32_t temp_param_12;
  int32_t temp_param_13;
  int64_t temp_long_3;
  int64_t temp_long_4;
  int64_t temp_long_5;
  int64_t temp_long_6;
  int64_t temp_long_7;
  int64_t temp_long_8;
  int64_t temp_long_9;
  int32_t temp_param_14;
  int32_t temp_param_15;
  int32_t temp_param_16;
  int32_t temp_param_17;
  source_size = *(uint *)(source_pointer + 1);
  temp_long_1 = (int64_t)(int)source_size;
  temp_address_2 = (int)target_pointer[1] - temp_long_1;
  temp_var = param_4;
  while ((RENDERING_SYSTEM_THRESHOLD_0X1C < temp_address_2 && (0 < sync_count))) {
    temp_uint_4 = (int)target_pointer[1] - 1;
    temp_uint_2 = temp_uint_4 >> RENDERING_SYSTEM_SHIFT_0XB;
    temp_uint_1 = (int)(((int)target_pointer[1] - temp_long_1) / 2) + source_size;
    temp_uint_3 = temp_uint_1 >> RENDERING_SYSTEM_SHIFT_0XB;
    memory_block = (uint64_t *)
             RenderingSystem_08f10(*(int64_t *)(*source_pointer + 8 + (uint64_t)(source_size >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                           (uint64_t)(source_size + (source_size >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8,
                           *(int64_t *)(*source_pointer + 8 + (uint64_t)temp_uint_3 * 8) +
                           (uint64_t)(temp_uint_1 + temp_uint_3 * -RENDERING_SYSTEM_SHIFT_0X800) * 8,
                           *(int64_t *)(*target_pointer + 8 + (uint64_t)temp_uint_2 * 8) +
                           (uint64_t)(temp_uint_4 + temp_uint_2 * -RENDERING_SYSTEM_SHIFT_0X800) * 8);
    temp_param_1 = (int32_t)*target_pointer;
    temp_param_2 = *(int32_t *)((int64_t)target_pointer + 4);
    temp_param_3 = (int32_t)target_pointer[1];
    temp_param_4 = *(int32_t *)((int64_t)target_pointer + 0xc);
    temp_param_5 = (int32_t)*source_pointer;
    temp_param_6 = *(int32_t *)((int64_t)source_pointer + 4);
    temp_param_7 = (int32_t)source_pointer[1];
    temp_param_8 = *(int32_t *)((int64_t)source_pointer + 0xc);
    temp_var = *memory_block;
    RenderingSystem_090c0(&temp_long_9,&temp_param_5,&temp_param_1,&temp_var);
    temp_address = temp_long_8;
    temp_address_2 = temp_long_9;
    temp_param_10 = (int32_t)*target_pointer;
    temp_param_11 = *(int32_t *)((int64_t)target_pointer + 4);
    temp_param_12 = (int32_t)target_pointer[1];
    temp_param_13 = *(int32_t *)((int64_t)target_pointer + 0xc);
    sync_count = sync_count + -1;
    temp_long_7 = temp_long_9;
    temp_long_6 = temp_long_8;
    RenderingSystem_08a90(&temp_long_7,&temp_param_10,sync_count,RenderingSystem_06d20);
    *target_pointer = temp_address_2;
    target_pointer[1] = temp_address;
    temp_address_2 = (int)target_pointer[1] - temp_long_1;
  }
  if (sync_count == 0) {
    temp_long_5 = *target_pointer;
    temp_long_4 = target_pointer[1];
    temp_param_14 = (int32_t)*source_pointer;
    temp_param_15 = *(int32_t *)((int64_t)source_pointer + 4);
    temp_param_16 = (int32_t)source_pointer[1];
    temp_param_17 = *(int32_t *)((int64_t)source_pointer + 0xc);
    temp_long_3 = temp_long_5;
    temp_long_2 = temp_long_4;
    RenderingSystem_08c30(&temp_param_14,&temp_long_3,&temp_long_5);
  }
  return;
}
// 渲染系统扩展处理器
// 扩展的渲染系统处理功能，支持更复杂的数据操作
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
void rendering_system_extended_processor(int64_t *source_pointer, uint64_t param_2, int64_t param_3, uint64_t param_4,
                                       uint64_t param_5, uint64_t param_6, uint64_t param_7, uint64_t param_8,
                                       uint64_t param_9, int64_t param_10, int64_t param_11, uint64_t param_12,
                                       uint64_t param_13, int64_t param_14, int64_t param_15, int64_t param_16,
                                       int64_t param_17, int64_t param_18, int64_t param_19, int32_t param_20,
                                       int32_t param_21)
{
  uint source_size;
  int64_t temp_address;
  int64_t temp_address_2;
  uint temp_uint_1;
  uint64_t *memory_block;
  uint temp_uint_2;
  uint temp_uint_3;
  uint64_t temp_var;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t temp_address_3;
  int64_t *unaff_RDI;
  uint temp_uint_4;
  int64_t in_R11;
  uint64_t unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t temp_param_1;
  int32_t temp_param_2;
  uint64_t local_var_f8;
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  source_size = *(uint *)(source_pointer + 1);
  temp_address_3 = (int64_t)(int)source_size;
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
               RenderingSystem_08f10(*(int64_t *)(*source_pointer + 8 + (uint64_t)(source_size >> RENDERING_SYSTEM_SHIFT_0XB) * 8) +
                             (uint64_t)(source_size + (source_size >> RENDERING_SYSTEM_SHIFT_0XB) * -RENDERING_SYSTEM_SHIFT_0X800) * 8,
                             *(int64_t *)(*source_pointer + 8 + (uint64_t)temp_uint_3 * 8) +
                             (uint64_t)(temp_uint_1 + temp_uint_3 * -RENDERING_SYSTEM_SHIFT_0X800) * 8,
                             *(int64_t *)(*unaff_RDI + 8 + (uint64_t)temp_uint_2 * 8) +
                             (uint64_t)(temp_uint_4 + temp_uint_2 * -RENDERING_SYSTEM_SHIFT_0X800) * 8);
      param_6._0_4_ = (int32_t)*unaff_RDI;
      param_6._4_4_ = *(int32_t *)((int64_t)unaff_RDI + 4);
      param_7._0_4_ = (int32_t)unaff_RDI[1];
      param_7._4_4_ = *(int32_t *)((int64_t)unaff_RDI + 0xc);
      param_8._0_4_ = (int32_t)*source_pointer;
      param_8._4_4_ = *(int32_t *)((int64_t)source_pointer + 4);
      param_9._0_4_ = (int32_t)source_pointer[1];
      param_9._4_4_ = *(int32_t *)((int64_t)source_pointer + 0xc);
      local_var_f8 = *memory_block;
      RenderingSystem_090c0(&param_10,&param_8,&param_6,&local_buffer_000000f8);
      temp_address_2 = param_11;
      temp_address = param_10;
      param_12._0_4_ = (int32_t)*unaff_RDI;
      param_12._4_4_ = *(int32_t *)((int64_t)unaff_RDI + 4);
      param_13._0_4_ = (int32_t)unaff_RDI[1];
      param_13._4_4_ = *(int32_t *)((int64_t)unaff_RDI + 0xc);
      param_3 = param_3 + -1;
      param_14 = param_10;
      param_15 = param_11;
      RenderingSystem_08a90(&param_14,&param_12,param_3,RenderingSystem_06d20);
      *unaff_RDI = temp_address;
      unaff_RDI[1] = temp_address_2;
    } while (RENDERING_SYSTEM_THRESHOLD_0X1C < (int)unaff_RDI[1] - temp_address_3);
  }
  if (param_3 == 0) {
    param_16 = *unaff_RDI;
    param_17 = unaff_RDI[1];
    param_20 = (int32_t)*source_pointer;
    temp_param_1 = *(int32_t *)((int64_t)source_pointer + 4);
    param_21 = (int32_t)source_pointer[1];
    temp_param_2 = *(int32_t *)((int64_t)source_pointer + 0xc);
    param_18 = param_16;
    param_19 = param_17;
    RenderingSystem_08c30(&param_20,&param_18,&param_16);
  }
  return;
}
// 模块信息：渲染系统高级资源管理和数据处理模块
// 功能概述：
// 本模块提供渲染系统的高级资源管理和数据处理功能，包括资源分配、数据处理、
// 内存管理、状态同步等核心渲染功能。模块支持多种缓冲区大小、线程安全操作
// 和复杂的数据处理流程。
// 主要特点：
// - 支持多种缓冲区大小（0x28000、0xD8000、0x2000等）
// - 线程安全的资源分配和释放
// - 高效的数据处理和状态同步
// - 复杂的内存管理和清理操作
// - 支持递归和迭代的处理算法
// 使用场景：
// - 渲染系统初始化和配置
// - 渲染资源的管理和分配
// - 渲染数据的处理和同步
// - 渲染状态的更新和维护
// - 渲染性能的优化和监控
// 依赖关系：
// - 依赖RenderingSystem_08a90进行数据同步
// - 依赖RenderingSystem_090c0进行数据处理
// - 依赖RenderingSystem_06d20进行资源操作
// - 依赖_CoreMemoryPoolAllocator进行内存分配
// - 依赖_CoreMemoryPoolInitializer进行资源清理
// 注意事项：
// - 部分函数不返回，直接调用清理函数
// - 需要正确处理内存分配失败的情况
// - 注意线程安全的锁定和解锁操作
// - 处理大量的位操作和地址计算