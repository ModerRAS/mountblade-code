#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part047.c - 6个函数

// 函数：系统资源处理函数
// 功能：处理系统资源，包括数据验证、内存分配和清理操作
void process_system_resources(uint64_t param_1, int8_t param_2)

{
  uint64_t *resource_manager_ptr;  // 资源管理器指针
  int64_t *data_array_ptr;         // 数据数组指针
  char validation_flag;            // 验证标志
  int item_count;                  // 项目计数
  int64_t *current_item_ptr;       // 当前项目指针
  int64_t item_offset;             // 项目偏移
  int64_t *next_item_ptr;          // 下一个项目指针
  int64_t resource_base;           // 资源基地址
  int64_t resource_limit;          // 资源限制
  int64_t processed_count;         // 已处理计数
  int8_t *string_buffer_ptr;   // 字符串缓冲区指针
  void *resource_data_ptr;    // 资源数据指针
  void *alternate_data_ptr;    // 替代数据指针
  int64_t total_items;              // 总项目数
  int8_t temp_buffer[32];       // 临时缓冲区
  int8_t param_storage;         // 参数存储
  int processing_index;            // 处理索引
  int64_t *array_base_ptr;         // 数组基地址指针
  int64_t array_size;              // 数组大小
  void *output_buffer_ptr;     // 输出缓冲区指针
  int8_t *string_ptr;          // 字符串指针
  int32_t buffer_size_1;         // 缓冲区大小1
  uint64_t buffer_capacity_1;      // 缓冲区容量1
  void *buffer_ptr_1;          // 缓冲区指针1
  int8_t *string_data_ptr;      // 字符串数据指针
  int32_t buffer_size_2;         // 缓冲区大小2
  uint64_t buffer_capacity_2;      // 缓冲区容量2
  void *buffer_ptr_2;          // 缓冲区指针2
  void *buffer_ptr_3;          // 缓冲区指针3
  int32_t buffer_size_3;         // 缓冲区大小3
  uint64_t buffer_capacity_3;      // 缓冲区容量3
  int32_t buffer_size_4;         // 缓冲区大小4
  int64_t stack_data_1;            // 栈数据1
  int64_t stack_data_2;            // 栈数据2
  void *stack_ptr_1;           // 栈指针1
  int64_t stack_data_3;            // 栈数据3
  int32_t buffer_size_5;         // 缓冲区大小5
  uint64_t buffer_capacity_5;      // 缓冲区容量5
  uint64_t stack_data_4;          // 栈数据4
  uint64_t stack_data_5;          // 栈数据5
  uint64_t stack_data_6;          // 栈数据6
  int32_t buffer_size_6;         // 缓冲区大小6
  uint64_t security_cookie;        // 安全cookie
  
  data_array_ptr = core_system_data_pointer;
  stack_data_4 = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)temp_buffer;
  total_items = 0;
  array_base_ptr = core_system_data_pointer;
  processing_index = 0;
  item_count = (int)((core_system_data_pointer[2] - core_system_data_pointer[1]) / 0x60);
  processed_count = (int64_t)item_count;
  param_storage = param_2;
  stack_data_1 = processed_count;
  if (0 < item_count) {
    do {
      item_offset = data_array_ptr[1];
      item_count = *(int *)(item_offset + 0x5c + total_items);
      if ((item_count < 0) ||
         (resource_base = *(int64_t *)(*system_main_module_state + 0x888),
         (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - resource_base >> 5) <=
         (uint64_t)(int64_t)item_count)) {
        resource_base = FUN_180628ca0();
      }
      else {
        resource_base = (int64_t)item_count * 0x20 + resource_base;
      }
      buffer_ptr_1 = &system_data_buffer_ptr;
      buffer_capacity_1 = 0;
      string_data_ptr = (int8_t *)0x0;
      buffer_size_1 = 0;
      CoreMemoryPoolProcessor(&buffer_ptr_1, *(int32_t *)(resource_base + 0x10));
      if (*(int *)(resource_base + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(string_data_ptr, *(uint64_t *)(resource_base + 8), *(int *)(resource_base + 0x10) + 1);
      }
      if (*(int64_t *)(resource_base + 8) != 0) {
        buffer_size_1 = 0;
        if (string_data_ptr != (int8_t *)0x0) {
          *string_data_ptr = 0;
        }
        buffer_capacity_1 = buffer_capacity_1 & 0xffffffff;
      }
      stack_ptr_1 = &system_data_buffer_ptr;
      buffer_capacity_5 = 0;
      stack_data_3 = 0;
      buffer_size_5 = 0;
      resource_data_ptr = *(void **)(item_offset + 0x28 + total_items);
      alternate_data_ptr = &system_buffer_ptr;
      if (resource_data_ptr != (void *)0x0) {
        alternate_data_ptr = resource_data_ptr;
      }
      string_buffer_ptr = &system_buffer_ptr;
      if (string_data_ptr != (int8_t *)0x0) {
        string_buffer_ptr = string_data_ptr;
      }
      System_DataHandler(&stack_ptr_1, &unknown_var_8076_ptr, string_buffer_ptr, alternate_data_ptr);
      validation_flag = FUN_180624a00(&stack_ptr_1);
      if (validation_flag != '\0') {
        FUN_18008b250(&stack_ptr_1);
      }
      stack_ptr_1 = &system_data_buffer_ptr;
      if (stack_data_3 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      stack_data_3 = 0;
      buffer_capacity_5 = buffer_capacity_5 & 0xffffffff00000000;
      stack_ptr_1 = &system_state_ptr;
      buffer_ptr_1 = &system_data_buffer_ptr;
      if (string_data_ptr != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      string_data_ptr = (int8_t *)0x0;
      buffer_capacity_1 = buffer_capacity_1 & 0xffffffff00000000;
      buffer_ptr_1 = &system_state_ptr;
      total_items = total_items + 0x60;
      processed_count = processed_count + -1;
    } while (processed_count != 0);
  }
  total_items = stack_data_1;
  buffer_size_4 = 0;
  if (0 < stack_data_1) {
    stack_data_2 = 0;
    do {
      item_offset = stack_data_2;
      resource_base = stack_data_2 * 0x60;
      processed_count = data_array_ptr[1];
      item_count = *(int *)(processed_count + 0x5c + resource_base);
      array_size = resource_base;
      if ((item_count < 0) ||
         (resource_limit = *(int64_t *)(*system_main_module_state + 0x888),
         (uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - resource_limit >> 5) <=
         (uint64_t)(int64_t)item_count)) {
        resource_limit = FUN_180628ca0();
      }
      else {
        resource_limit = (int64_t)item_count * 0x20 + resource_limit;
      }
      output_buffer_ptr = &system_data_buffer_ptr;
      buffer_capacity_2 = 0;
      string_ptr = (int8_t *)0x0;
      buffer_size_2 = 0;
      CoreMemoryPoolProcessor(&output_buffer_ptr, *(int32_t *)(resource_limit + 0x10));
      if (*(int *)(resource_limit + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(string_ptr, *(uint64_t *)(resource_limit + 8), *(int *)(resource_limit + 0x10) + 1);
      }
      if (*(int64_t *)(resource_limit + 8) != 0) {
        buffer_size_2 = 0;
        if (string_ptr != (int8_t *)0x0) {
          *string_ptr = 0;
        }
        buffer_capacity_2 = buffer_capacity_2 & 0xffffffff;
      }
      buffer_ptr_2 = &system_data_buffer_ptr;
      buffer_capacity_3 = 0;
      buffer_ptr_3 = (void *)0x0;
      buffer_size_3 = 0;
      resource_data_ptr = *(void **)(processed_count + 0x28 + resource_base);
      alternate_data_ptr = &system_buffer_ptr;
      if (resource_data_ptr != (void *)0x0) {
        alternate_data_ptr = resource_data_ptr;
      }
      string_buffer_ptr = &system_buffer_ptr;
      if (string_ptr != (int8_t *)0x0) {
        string_buffer_ptr = string_ptr;
      }
      System_DataHandler(&buffer_ptr_2, &unknown_var_8076_ptr, string_buffer_ptr, alternate_data_ptr);
      validation_flag = FUN_180624a00(&buffer_ptr_2);
      if (validation_flag != '\0') {
        resource_manager_ptr = (uint64_t *)*data_array_ptr;
        if (resource_manager_ptr != (uint64_t *)0x0) {
          (**(code **)*resource_manager_ptr)(resource_manager_ptr, &output_buffer_ptr);
        }
        processing_index = processing_index + 1;
        stack_data_4 = 0;
        stack_data_5 = 0;
        stack_data_6 = 0;
        buffer_size_6 = 3;
        resource_data_ptr = &system_buffer_ptr;
        if (buffer_ptr_3 != (void *)0x0) {
          resource_data_ptr = buffer_ptr_3;
        }
                    // WARNING: Subroutine does not return
        FUN_180062300(system_message_context, &unknown_var_8208_ptr, resource_data_ptr);
      }
      buffer_ptr_2 = &system_data_buffer_ptr;
      if (buffer_ptr_3 != (void *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      buffer_ptr_3 = (void *)0x0;
      buffer_capacity_3 = buffer_capacity_3 & 0xffffffff00000000;
      buffer_ptr_2 = &system_state_ptr;
      output_buffer_ptr = &system_data_buffer_ptr;
      if (string_ptr != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      string_ptr = (int8_t *)0x0;
      buffer_capacity_2 = buffer_capacity_2 & 0xffffffff00000000;
      output_buffer_ptr = &system_state_ptr;
      stack_data_2 = item_offset + 1;
    } while (stack_data_2 < total_items);
    if (processing_index != 0) goto LAB_180088ac9;
  }
  SystemCore_ResourceManager0(&unknown_var_8232_ptr);
LAB_180088ac9:
  next_item_ptr = (int64_t *)data_array_ptr[0x17];
  if (next_item_ptr != data_array_ptr + 0x16) {
    do {
      processed_count = 0;
      total_items = next_item_ptr[4];
      item_count = (int)(*(int64_t *)(total_items + 0x188) - *(int64_t *)(total_items + 0x180) >> 3);
      if (0 < item_count) {
        do {
          data_array_ptr = *(int64_t **)(*(int64_t *)(total_items + 0x180) + processed_count * 8);
          (**(code **)(*data_array_ptr + 0x60))(data_array_ptr);
          current_item_ptr = (int64_t *)(**(code **)(*data_array_ptr + 8))(data_array_ptr);
          if ((((((((*current_item_ptr == 0x4c7adebd3eba3679) && (current_item_ptr[1] == 0x335e32f621f13486)) ||
                  ((current_item_ptr = (int64_t *)(**(code **)(*data_array_ptr + 8))(data_array_ptr),
                   *current_item_ptr == 0x4f1969021db01393 && (current_item_ptr[1] == 0x170783397ab3ba83)))) ||
                 ((current_item_ptr = (int64_t *)(**(code **)(*data_array_ptr + 8))(data_array_ptr),
                  *current_item_ptr == 0x4bea197ca08f8b97 && (current_item_ptr[1] == 0x4e83ae6c84535bb9)))) ||
                ((current_item_ptr = (int64_t *)(**(code **)(*data_array_ptr + 8))(data_array_ptr),
                 *current_item_ptr == 0x4432818ecab5ba7b && (current_item_ptr[1] == -0x3f47266e1dfcc872)))) ||
               ((((current_item_ptr = (int64_t *)(**(code **)(*data_array_ptr + 8))(data_array_ptr),
                  *current_item_ptr == 0x45bedd9a6de14d67 && (current_item_ptr[1] == 0x51ddd8c381026394)) ||
                 ((current_item_ptr = (int64_t *)(**(code **)(*data_array_ptr + 8))(data_array_ptr),
                  *current_item_ptr == 0x4ef0785fcc373411 && (current_item_ptr[1] == 0x3645b254cfd5a295)))) ||
                ((current_item_ptr = (int64_t *)(**(code **)(*data_array_ptr + 8))(data_array_ptr),
                 *current_item_ptr == 0x4ff90344b46528df && (current_item_ptr[1] == -0x3c033b29f31c0d80)))))) ||
              ((current_item_ptr = (int64_t *)(**(code **)(*data_array_ptr + 8))(data_array_ptr),
               *current_item_ptr == 0x45ddeabbc635a3d5 && (current_item_ptr[1] == 0x136119e457aa3e88)))) &&
             ((resource_manager_ptr = (uint64_t *)data_array_ptr[4], resource_manager_ptr != (uint64_t *)0x0 && (data_array_ptr[6] != -1))))
          {
            item_offset = __RTCastToVoid(resource_manager_ptr);
            (**(code **)*resource_manager_ptr)(resource_manager_ptr, 0);
            if (item_offset != 0) {
                    // WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(item_offset);
            }
            data_array_ptr[4] = 0;
          }
          processed_count = processed_count + 1;
        } while (processed_count < item_count);
      }
      next_item_ptr = (int64_t *)func_0x00018066bd70(next_item_ptr);
    } while (next_item_ptr != array_base_ptr + 0x16);
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context, &unknown_var_8288_ptr);
}



// 函数：数据结构完整性验证函数
// 功能：验证数据结构的完整性，检查节点链接和数据一致性
bool validate_data_structure_integrity(int64_t *param_1)

{
  byte comparison_result;
  bool validation_result;
  uint64_t *current_node_ptr;    // 当前节点指针
  uint64_t *next_node_ptr;       // 下一个节点指针
  byte *string_data_ptr;           // 字符串数据指针
  uint string_length;              // 字符串长度
  int64_t base_address;           // 基地址
  uint64_t *start_node_ptr;      // 起始节点指针
  int compare_result;              // 比较结果
  uint64_t *temp_node_ptr;       // 临时节点指针
  byte *comparison_buffer;         // 比较缓冲区
  int stack_int;                   // 栈整数
  
  base_address = *param_1;
  start_node_ptr = (uint64_t *)(base_address + 0x48);
  SystemCore_EncryptionEngine0();
  current_node_ptr = *(uint64_t **)(base_address + 0x58);
  next_node_ptr = start_node_ptr;
  if (current_node_ptr != (uint64_t *)0x0) {
    do {
      if (stack_int == 0) {
        validation_result = false;
        temp_node_ptr = (uint64_t *)current_node_ptr[1];
      }
      else {
        if (*(int *)(current_node_ptr + 6) == 0) {
          validation_result = true;
        }
        else {
          string_data_ptr = comparison_buffer;
          do {
            string_length = (uint)string_data_ptr[current_node_ptr[5] - (int64_t)comparison_buffer];
            compare_result = *string_data_ptr - string_length;
            if (*string_data_ptr != string_length) break;
            string_data_ptr = string_data_ptr + 1;
          } while (string_length != 0);
          validation_result = 0 < compare_result;
          if (compare_result < 1) {
            temp_node_ptr = (uint64_t *)current_node_ptr[1];
            goto LAB_18008913b;
          }
        }
        temp_node_ptr = (uint64_t *)*current_node_ptr;
      }
LAB_18008913b:
      next_node_ptr = current_node_ptr;
      if (validation_result) {
        next_node_ptr = next_node_ptr;
      }
      next_node_ptr = next_node_ptr;
      current_node_ptr = temp_node_ptr;
    } while (temp_node_ptr != (uint64_t *)0x0);
    if (next_node_ptr != start_node_ptr) {
      if (*(int *)(next_node_ptr + 6) == 0) goto LAB_18008917c;
      if (stack_int != 0) {
        string_data_ptr = (byte *)next_node_ptr[5];
        base_address = (int64_t)comparison_buffer - (int64_t)string_data_ptr;
        do {
          comparison_result = *string_data_ptr;
          string_length = (uint)string_data_ptr[base_address];
          if (comparison_result != string_length) break;
          string_data_ptr = string_data_ptr + 1;
        } while (string_length != 0);
        if ((int)(comparison_result - string_length) < 1) goto LAB_18008917c;
      }
    }
  }
  next_node_ptr = start_node_ptr;
LAB_18008917c:
  if (comparison_buffer == (byte *)0x0) {
    return next_node_ptr == start_node_ptr;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// 函数：数据节点查找与处理函数
// 功能：在数据结构中查找并处理特定节点，返回处理结果
uint64_t find_and_process_data_node(int64_t *param_1, uint64_t param_2)

{
  byte char_comparison;
  bool search_result;
  bool processing_flag;
  int64_t *current_node_ptr;      // 当前节点指针
  int64_t *target_node_ptr;       // 目标节点指针
  uint64_t result_value;           // 结果值
  byte *string_data_ptr;           // 字符串数据指针
  uint string_length;              // 字符串长度
  int64_t base_address;            // 基地址
  int64_t *start_node_ptr;         // 起始节点指针
  int compare_result;              // 比较结果
  int64_t *temp_node_ptr;         // 临时节点指针
  int64_t *next_node_ptr;          // 下一个节点指针
  int8_t temp_stack[8];        // 临时栈
  byte *search_buffer;             // 搜索缓冲区
  int stack_int;                   // 栈整数
  void *stack_ptr;            // 栈指针
  int64_t stack_long;              // 栈长整型
  int32_t buffer_size;          // 缓冲区大小
  
  base_address = *param_1;
  start_node_ptr = (int64_t *)(base_address + 0x48);
  SystemCore_EncryptionEngine0();
  processing_flag = false;
  next_node_ptr = *(int64_t **)(base_address + 0x58);
  current_node_ptr = start_node_ptr;
  if (next_node_ptr == (int64_t *)0x0) {
LAB_1800892ba:
    target_node_ptr = start_node_ptr;
  }
  else {
    do {
      if (stack_int == 0) {
        search_result = false;
        temp_node_ptr = (int64_t *)next_node_ptr[1];
      }
      else {
        if ((int)next_node_ptr[6] == 0) {
          search_result = true;
        }
        else {
          string_data_ptr = search_buffer;
          do {
            string_length = (uint)string_data_ptr[next_node_ptr[5] - (int64_t)search_buffer];
            compare_result = *string_data_ptr - string_length;
            if (*string_data_ptr != string_length) break;
            string_data_ptr = string_data_ptr + 1;
          } while (string_length != 0);
          search_result = 0 < compare_result;
          if (compare_result < 1) {
            temp_node_ptr = (int64_t *)next_node_ptr[1];
            goto LAB_18008927d;
          }
        }
        temp_node_ptr = (int64_t *)*next_node_ptr;
      }
LAB_18008927d:
      target_node_ptr = next_node_ptr;
      if (search_result) {
        target_node_ptr = current_node_ptr;
      }
      current_node_ptr = target_node_ptr;
      next_node_ptr = temp_node_ptr;
    } while (temp_node_ptr != (int64_t *)0x0);
    if (target_node_ptr == start_node_ptr) goto LAB_1800892ba;
    if ((int)target_node_ptr[6] != 0) {
      if (stack_int != 0) {
        string_data_ptr = (byte *)target_node_ptr[5];
        base_address = (int64_t)search_buffer - (int64_t)string_data_ptr;
        do {
          char_comparison = *string_data_ptr;
          string_length = (uint)string_data_ptr[base_address];
          if (char_comparison != string_length) break;
          string_data_ptr = string_data_ptr + 1;
        } while (string_length != 0);
        if ((int)(char_comparison - string_length) < 1) goto LAB_1800892bd;
      }
      goto LAB_1800892ba;
    }
  }
LAB_1800892bd:
  if (target_node_ptr == start_node_ptr) {
    base_address = param_1[1];
    SystemCore_EncryptionEngine0(&stack_ptr, param_2);
    processing_flag = true;
    target_node_ptr = (int64_t *)FUN_180058080(base_address, temp_stack, &stack_ptr);
    if (*target_node_ptr == base_address) {
      search_result = true;
      goto LAB_1800892fd;
    }
  }
  search_result = false;
LAB_1800892fd:
  if (processing_flag) {
    stack_ptr = &system_data_buffer_ptr;
    if (stack_long != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    stack_long = 0;
    buffer_size = 0;
    stack_ptr = &system_state_ptr;
  }
  if (search_buffer != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (search_result) {
    next_node_ptr = *(int64_t **)*param_1;
    if (next_node_ptr == (int64_t *)0x0) {
      result_value = CONCAT71((int7)((uint64_t)*param_1 >> 8), 1);
    }
    else {
      result_value = (**(code **)(*next_node_ptr + 8))(next_node_ptr, param_2);
    }
  }
  else {
    result_value = (uint64_t)target_node_ptr & 0xffffffffffffff00;
  }
  return result_value;
}



// 函数：系统清理执行函数
// 功能：执行系统清理操作，调用各种清理函数来释放资源
void execute_system_cleanup(int64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
    (**(code **)(param_1 + 0x70))(param_1 + 0x60, 0, 0, param_4, 0xfffffffffffffffe);
  }
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))(param_1 + 0x40, 0, 0);
  }
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    (**(code **)(param_1 + 0x30))(param_1 + 0x20, 0, 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：批量系统数据处理函数
// 功能：批量处理系统数据，包括数据验证、分配和管理操作
void batch_process_system_data(void)

{
  uint data_size;                  // 数据大小
  int64_t data_base;               // 数据基地址
  int64_t data_limit;              // 数据限制
  char processing_flag;            // 处理标志
  int item_count;                  // 项目计数
  uint64_t data_offset;           // 数据偏移
  uint64_t processed_offset;      // 已处理偏移
  int64_t current_offset;          // 当前偏移
  uint64_t total_size;             // 总大小
  int8_t temp_buffer[32];       // 临时缓冲区
  void **buffer_ptr_ptr;       // 缓冲区指针指针
  uint64_t stack_data_1;          // 栈数据1
  void *stack_ptr_1;           // 栈指针1
  int64_t stack_long_1;            // 栈长整型1
  uint stack_uint;                  // 栈无符号整数
  uint64_t stack_data_2;          // 栈数据2
  void *stack_ptr_2;           // 栈指针2
  int8_t *string_ptr;           // 字符串指针
  int32_t buffer_size;           // 缓冲区大小
  int8_t temp_buffer_2[32];     // 临时缓冲区2
  int8_t temp_buffer_3[4];      // 临时缓冲区3
  int item_index;                   // 项目索引
  uint64_t security_cookie;        // 安全cookie
  
  data_limit = core_system_data_pointer;
  stack_data_1 = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)temp_buffer;
  data_base = *system_main_module_state;
  data_offset = 0;
  item_count = (int)(*(int64_t *)(data_base + 0x8b0) - *(int64_t *)(data_base + 0x8a8) >> 5);
  total_size = (int64_t)item_count;
  processed_offset = data_offset;
  if (0 < item_count) {
    do {
      stack_ptr_1 = &system_data_buffer_ptr;
      stack_data_2 = 0;
      stack_long_1 = 0;
      stack_uint = 0;
      buffer_ptr_ptr = &stack_ptr_2;
      stack_ptr_2 = &unknown_var_672_ptr;
      string_ptr = temp_buffer_2;
      buffer_size = 0;
      temp_buffer_2[0] = 0;
      temp_buffer_3[0] = 0;
      item_index = 0xffffffff;
      current_offset = *(int64_t *)(data_base + 0x8a8) + processed_offset;
      data_size = *(uint *)(current_offset + 0x10);
      total_size = (uint64_t)data_size;
      if (*(int64_t *)(current_offset + 8) != 0) {
        CoreMemoryPoolProcessor(&stack_ptr_1, total_size);
      }
      if (data_size != 0) {
                    // WARNING: Subroutine does not return
        memcpy(stack_long_1, *(uint64_t *)(current_offset + 8), total_size);
      }
      if (stack_long_1 != 0) {
        *(int8_t *)(total_size + stack_long_1) = 0;
      }
      stack_data_2 = CONCAT44(*(int32_t *)(current_offset + 0x1c), (int32_t)stack_data_2);
      stack_uint = data_size;
      item_index = (int)data_offset;
      processing_flag = FUN_1800873b0(data_offset, &buffer_ptr_ptr, temp_buffer_3);
      if (processing_flag != '\0') {
        total_size = *(uint64_t *)(data_limit + 0x10);
        if (total_size < *(uint64_t *)(data_limit + 0x18)) {
          *(uint64_t *)(data_limit + 0x10) = total_size + 0x60;
          buffer_ptr_ptr = (void **)total_size;
          SystemCore_NetworkHandler0(total_size);
          FUN_18004b640(total_size + 0x20, &buffer_ptr_ptr);
          *(int8_t *)(total_size + 0x58) = temp_buffer_3[0];
          *(int *)(total_size + 0x5c) = item_index;
        }
        else {
          FUN_18008dd40(data_limit + 8, &stack_ptr_1);
        }
      }
      stack_ptr_2 = &system_state_ptr;
      buffer_ptr_ptr = &stack_ptr_1;
      stack_ptr_1 = &system_data_buffer_ptr;
      if (stack_long_1 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      stack_long_1 = 0;
      stack_data_2 = stack_data_2 & 0xffffffff00000000;
      stack_ptr_1 = &system_state_ptr;
      data_offset = (uint64_t)((int)data_offset + 1);
      total_size = total_size + -1;
      processed_offset = processed_offset + 0x20;
    } while (total_size != 0);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(security_cookie ^ (uint64_t)temp_buffer);
}



// 函数：数据结构指针初始化函数
// 功能：初始化数据结构指针，设置默认值和清理状态
void initialize_data_structure_pointers(uint64_t *param_1)

{
  param_1[4] = &system_state_ptr;
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}



// WARNING: Removing unreachable block (ram,0x00018008a218)
// WARNING: Removing unreachable block (ram,0x00018008a240)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address