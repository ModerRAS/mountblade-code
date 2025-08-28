#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part028.c - 11个函数

// 函数：处理数据包类型1
// 功能：处理特定类型的数据包，包含缓冲区管理和错误处理
void process_packet_type_1(uint64_t param_1, uint64_t param_2)

{
  void *system_object;     // 系统对象指针
  char system_status;          // 系统状态标志
  int32_t packet_header[4]; // 数据包头
  void *buffer_ptr;       // 缓冲区指针
  longlong buffer_size;        // 缓冲区大小
  
  // 记录调试信息并初始化数据包处理
  log_debug_info(_DAT_180c86928, 0, 0x100000000, 1, &DEBUG_PACKET_TYPE_1, param_2, 0xfffffffffffffffe);
  
  // 检查系统状态是否允许处理
  if (SYSTEM_READY_FLAG == '\0') {
    packet_header[0] = 0xff00ff00;  // 设置数据包头标识
    initialize_buffer_manager(&buffer_ptr, param_2);  // 初始化缓冲区管理器
    
    // 获取系统对象并检查状态
    system_object = *(void **)*GLOBAL_SYSTEM_TABLE;
    if (system_object == &DEFAULT_SYSTEM_OBJECT) {
      system_status = *(int *)(GLOBAL_ENGINE_CONTEXT + 0xc40) != 0;
    }
    else {
      system_status = (**(code **)(system_object + 0x50))((uint64_t *)*GLOBAL_SYSTEM_TABLE);
    }
    
    // 根据系统状态决定是否处理数据包
    if (system_status == '\0') {
      (**(code **)(*(longlong *)GLOBAL_SYSTEM_TABLE[1] + 0x18))
                ((longlong *)GLOBAL_SYSTEM_TABLE[1], &buffer_ptr, packet_header);
    }
    
    // 清理缓冲区并检查错误状态
    buffer_ptr = &DEFAULT_BUFFER_LOCATION;
    if (buffer_size != 0) {
      // 发生严重错误，系统需要终止
      system_error_handler();
    }
  }
  return;
}



// 警告：全局变量名称冲突

// 函数：处理数据包类型2
// 功能：处理另一种类型的数据包，带有额外的参数
void process_packet_type_2(uint64_t param_1, int32_t param_2, uint64_t param_3)

{
  void *system_object;     // 系统对象指针
  char system_status;          // 系统状态标志
  int32_t packet_header[2]; // 数据包头
  void *buffer_ptr;       // 缓冲区指针
  longlong buffer_size;        // 缓冲区大小
  
  // 记录调试信息并初始化数据包处理
  log_debug_info(_DAT_180c86928, 0, 0x100000000, 0xc, &DEBUG_PACKET_TYPE_2, param_3, 0xfffffffffffffffe);
  
  // 检查系统状态是否允许处理
  if (SYSTEM_READY_FLAG == '\0') {
    packet_header[0] = param_2;  // 使用传入的参数作为包头
    initialize_buffer_manager(&buffer_ptr, param_3);  // 初始化缓冲区管理器
    
    // 获取系统对象并检查状态
    system_object = *(void **)*GLOBAL_SYSTEM_TABLE;
    if (system_object == &DEFAULT_SYSTEM_OBJECT) {
      system_status = *(int *)(GLOBAL_ENGINE_CONTEXT + 0xc40) != 0;
    }
    else {
      system_status = (**(code **)(system_object + 0x50))((uint64_t *)*GLOBAL_SYSTEM_TABLE);
    }
    
    // 根据系统状态决定是否处理数据包
    if (system_status == '\0') {
      (**(code **)(*(longlong *)GLOBAL_SYSTEM_TABLE[1] + 0x18))
                ((longlong *)GLOBAL_SYSTEM_TABLE[1], &buffer_ptr, packet_header);
    }
    
    // 清理缓冲区并检查错误状态
    buffer_ptr = &DEFAULT_BUFFER_LOCATION;
    if (buffer_size != 0) {
      // 发生严重错误，系统需要终止
      system_error_handler();
    }
  }
  return;
}





// 函数：处理复杂数据结构
// 功能：处理包含多个参数的复杂数据结构
void process_complex_data_structure(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  void *structure_ptr;    // 结构体指针
  uint64_t data_field_1;     // 数据字段1
  int32_t data_field_2;     // 数据字段2
  uint64_t data_field_3;     // 数据字段3
  uint64_t data_field_4;     // 数据字段4
  uint64_t data_field_5;     // 数据字段5
  uint64_t data_field_6;     // 数据字段6
  int32_t data_field_7;     // 数据字段7
  uint64_t data_field_8;     // 数据字段8
  uint64_t data_field_9;     // 数据字段9
  int16_t data_field_10;    // 数据字段10
  uint64_t data_field_11;    // 数据字段11
  uint64_t data_field_12;    // 数据字段12
  int16_t data_field_13;    // 数据字段13
  uint64_t data_field_14;    // 数据字段14
  
  // 初始化结构体指针和数据字段
  data_field_14 = 0xfffffffffffffffe;
  structure_ptr = &DEFAULT_BUFFER_LOCATION;
  data_field_3 = 0;
  data_field_1 = 0;
  data_field_2 = 0;
  data_field_4 = 0;
  data_field_5 = 0;
  data_field_6 = 0;
  data_field_7 = 3;
  data_field_10 = 0;
  data_field_8 = 0;
  data_field_9 = 0;
  data_field_13 = 0;
  data_field_11 = 0;
  data_field_12 = 0;
  
  // 调用处理函数链
  process_structure_data(&structure_ptr, param_1, param_3, param_4, &data_field_4);
  validate_structure(&structure_ptr, param_3);
  cleanup_structure(&structure_ptr);
  return;
}





// 函数：清理结构体
// 功能：清理和重置结构体的各个字段
void cleanup_structure(uint64_t *param_1)

{
  // 检查并清理指针字段
  if (*(longlong *)((longlong)param_1 + 0x52) != 0) {
                    // 严重错误：不应该有活动的指针
    system_error_handler();
  }
  *(uint64_t *)((longlong)param_1 + 0x52) = 0;
  
  if (*(longlong *)((longlong)param_1 + 0x5a) != 0) {
                    // 严重错误：不应该有活动的指针
    system_error_handler();
  }
  *(uint64_t *)((longlong)param_1 + 0x5a) = 0;
  
  if (param_1[8] != 0) {
                    // 严重错误：不应该有活动的指针
    system_error_handler();
  }
  param_1[8] = 0;
  
  if (param_1[9] != 0) {
                    // 严重错误：不应该有活动的指针
    system_error_handler();
  }
  param_1[9] = 0;
  
  // 调用系统清理函数
  system_cleanup_function();
  *param_1 = &DEFAULT_BUFFER_LOCATION;
  
  if (param_1[1] != 0) {
                    // 严重错误：不应该有活动的指针
    system_error_handler();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &DEFAULT_CLEANUP_OBJECT;
  return;
}





// 函数：验证结构体链表
// 功能：验证结构体链表中的每个节点是否正确清理
void validate_structure_chain(longlong *param_1)

{
  longlong *current_node;      // 当前节点指针
  longlong *end_node;          // 结束节点指针
  
  current_node = (longlong *)param_1[1];
  end_node = (longlong *)*param_1;
  while( true ) {
    // 检查是否到达链表末尾
    if (current_node == end_node) {
      if (*param_1 != 0) {
                    // 严重错误：链表头不应该有数据
        system_error_handler();
      }
      return;
    }
    
    // 验证当前节点的字段
    if (*(longlong *)((longlong)current_node + 0x12) != 0) {
                    // 严重错误：节点字段应该为空
      system_error_handler();
    }
    *(uint64_t *)((longlong)current_node + 0x12) = 0;
    
    if (*(longlong *)((longlong)current_node + 0x1a) != 0) break;
    *(uint64_t *)((longlong)current_node + 0x1a) = 0;
    
    if (*current_node != 0) {
                    // 严重错误：节点数据应该为空
      system_error_handler();
    }
    *current_node = 0;
    
    if (current_node[1] != 0) {
                    // 严重错误：节点链接应该为空
      system_error_handler();
    }
    current_node[1] = 0;
    current_node = (longlong *)((longlong)current_node + 0x24);
  }
                    // 严重错误：链表验证失败
  system_error_handler();
}





// 函数：序列化数据到缓冲区
// 功能：将复杂的数据结构序列化到缓冲区中
void serialize_data_to_buffer(longlong source_ptr, longlong *buffer_ptr)

{
  ushort data_size;            // 数据大小
  uint64_t data_address;    // 数据地址
  int *buffer_writer;         // 缓冲区写入器
  int32_t *write_position;  // 写入位置
  uint *size_writer;          // 大小写入器
  longlong data_length;       // 数据长度
  longlong element_count;     // 元素数量
  int item_count;             // 项目计数
  ulonglong copy_size;        // 复制大小
  longlong element_offset;    // 元素偏移
  
  // 初始化缓冲区写入
  initialize_buffer_writer(buffer_ptr, source_ptr);
  
  // 计算数据长度和元素数量
  data_length = *(longlong *)(source_ptr + 0x28) - *(longlong *)(source_ptr + 0x20);
  buffer_writer = (int *)buffer_ptr[1];
  data_length = data_length / 0x12 + (data_length >> 0x3f);
  item_count = (int)(data_length >> 1) - (int)(data_length >> 0x3f);
  
  // 检查缓冲区空间
  if ((ulonglong)((*buffer_ptr - (longlong)buffer_writer) + buffer_ptr[2]) < 5) {
    expand_buffer_capacity(buffer_ptr, (longlong)buffer_writer + (4 - *buffer_ptr));
    buffer_writer = (int *)buffer_ptr[1];
  }
  
  // 写入项目计数
  *buffer_writer = item_count;
  write_position = (int32_t *)(buffer_ptr[1] + 4);
  buffer_ptr[1] = (longlong)write_position;
  data_length = (longlong)item_count;
  
  // 处理每个元素
  if (0 < item_count) {
    element_offset = 0;
    do {
      element_count = *(longlong *)(source_ptr + 0x20) + element_offset;
      
      // 写入元素数据
      write_element_data(buffer_ptr, write_position, element_count, 0x10);
      write_element_data(buffer_ptr, write_position, element_count, 0x22);
      
      element_offset = element_offset + 0x24;
      data_length = data_length + -1;
    } while (data_length != 0);
  }
  
  // 写入尾部数据
  write_trailer_data(buffer_ptr, write_position, source_ptr, 0x50);
  write_trailer_data(buffer_ptr, write_position, source_ptr, 0x62);
}





// 函数：序列化数据到全局缓冲区
// 功能：将数据序列化到全局缓冲区（简化版本）
void serialize_to_global_buffer(longlong source_ptr)

{
  ushort data_size;            // 数据大小
  uint64_t data_address;    // 数据地址
  int *buffer_writer;         // 缓冲区写入器
  int32_t *write_position;  // 写入位置
  uint *size_writer;          // 大小写入器
  longlong data_length;       // 数据长度
  longlong *global_buffer;    // 全局缓冲区
  longlong element_count;     // 元素数量
  int item_count;             // 项目计数
  ulonglong copy_size;        // 复制大小
  longlong element_offset;    // 元素偏移
  
  // 初始化全局缓冲区写入
  initialize_global_buffer_writer();
  
  // 计算数据长度和元素数量
  data_length = *(longlong *)(source_ptr + 0x28) - *(longlong *)(source_ptr + 0x20);
  buffer_writer = (int *)global_buffer[1];
  data_length = data_length / 0x12 + (data_length >> 0x3f);
  item_count = (int)(data_length >> 1) - (int)(data_length >> 0x3f);
  
  // 检查缓冲区空间
  if ((ulonglong)((*global_buffer - (longlong)buffer_writer) + global_buffer[2]) < 5) {
    expand_global_buffer_capacity();
    buffer_writer = (int *)global_buffer[1];
  }
  
  // 写入项目计数
  *buffer_writer = item_count;
  write_position = (int32_t *)(global_buffer[1] + 4);
  global_buffer[1] = (longlong)write_position;
  data_length = (longlong)item_count;
  
  // 处理每个元素
  if (0 < item_count) {
    element_offset = 0;
    do {
      element_count = *(longlong *)(source_ptr + 0x20) + element_offset;
      
      // 写入元素数据
      write_global_element_data(write_position, element_count, 0x10);
      write_global_element_data(write_position, element_count, 0x22);
      
      element_offset = element_offset + 0x24;
      data_length = data_length + -1;
    } while (data_length != 0);
  }
  
  // 写入尾部数据
  write_global_trailer_data(write_position, source_ptr, 0x50);
  write_global_trailer_data(write_position, source_ptr, 0x62);
}





// 函数：处理数据数组
// 功能：处理数据数组并将结果写入缓冲区
void process_data_array(uint *buffer_ptr)

{
  ushort data_size;            // 数据大小
  uint64_t data_address;    // 数据地址
  int32_t *temp_buffer;    // 临时缓冲区
  uint *size_writer;          // 大小写入器
  longlong *global_buffer;    // 全局缓冲区
  longlong element_offset;    // 元素偏移
  ulonglong copy_size;        // 复制大小
  longlong array_length;      // 数组长度
  uint element_index;         // 元素索引
  longlong source_address;    // 源地址
  
  copy_size = (ulonglong)element_index;
  do {
    element_offset = *(longlong *)(source_address + 0x20) + copy_size;
    
    // 处理数组元素
    process_array_element(buffer_ptr, element_offset, 0x10);
    process_array_element(buffer_ptr, element_offset, 0x22);
    
    copy_size = copy_size + 0x24;
    array_length = array_length + -1;
  } while (array_length != 0);
  
  // 处理数组尾部数据
  process_array_trailer(buffer_ptr, source_address, 0x50);
  process_array_trailer(buffer_ptr, source_address, 0x62);
}





// 函数：写入数据块到缓冲区
// 功能：将数据块写入缓冲区，包含头部和尾部信息
void write_data_block_to_buffer(int32_t *buffer_ptr)

{
  ushort data_size;            // 数据大小
  uint64_t data_address;    // 数据地址
  int32_t *temp_buffer;    // 临时缓冲区
  uint *size_writer;          // 大小写入器
  longlong *global_buffer;    // 全局缓冲区
  longlong data_offset;       // 数据偏移
  ulonglong copy_size;        // 复制大小
  int32_t block_header;    // 数据块头部
  longlong source_address;    // 源地址
  
  // 检查缓冲区空间并写入头部
  if ((ulonglong)((*global_buffer - (longlong)buffer_ptr) + global_buffer[2]) < 5) {
    expand_buffer_capacity();
    buffer_ptr = (int32_t *)global_buffer[1];
  }
  
  *buffer_ptr = block_header;
  global_buffer[1] = global_buffer[1] + 4;
  temp_buffer = (int32_t *)global_buffer[1];
  
  // 写入数据块大小
  if ((ulonglong)((*global_buffer - (longlong)temp_buffer) + global_buffer[2]) < 5) {
    expand_buffer_capacity();
    temp_buffer = (int32_t *)global_buffer[1];
  }
  *temp_buffer = 0x10;
  global_buffer[1] = global_buffer[1] + 4;
  size_writer = (uint *)global_buffer[1];
  data_size = *(ushort *)(source_address + 0x50);
  
  // 写入数据大小
  if ((ulonglong)((*global_buffer - (longlong)size_writer) + global_buffer[2]) < 5) {
    expand_buffer_capacity();
    size_writer = (uint *)global_buffer[1];
  }
  *size_writer = (uint)data_size;
  temp_buffer = (int32_t *)(global_buffer[1] + 4);
  global_buffer[1] = (longlong)temp_buffer;
  
  // 写入数据内容
  if (*(ushort *)(source_address + 0x50) != 0) {
    data_address = *(uint64_t *)(source_address + 0x48);
    copy_size = (ulonglong)*(ushort *)(source_address + 0x50) * 4;
    if ((ulonglong)((*global_buffer - (longlong)temp_buffer) + global_buffer[2]) <= copy_size) {
      expand_buffer_capacity();
      temp_buffer = (int32_t *)global_buffer[1];
    }
                    // 复制数据内容
    memcpy(temp_buffer, data_address, copy_size);
  }
  
  // 写入尾部数据
  write_trailer_data(temp_buffer, source_address, 0x62);
}





// 函数：写入简单的数据块
// 功能：写入简单的数据块，只包含尾部信息
void write_simple_data_block(void)

{
  ushort data_size;            // 数据大小
  uint64_t data_address;    // 数据地址
  int32_t *temp_buffer;    // 临时缓冲区
  uint *size_writer;          // 大小写入器
  longlong *global_buffer;    // 全局缓冲区
  longlong data_offset;       // 数据偏移
  ulonglong copy_size;        // 复制大小
  longlong source_address;    // 源地址
  
  // 扩展缓冲区容量
  expand_buffer_capacity();
  
  // 写入数据块标识
  *(int32_t *)global_buffer[1] = 0x10;
  global_buffer[1] = global_buffer[1] + 4;
  size_writer = (uint *)global_buffer[1];
  data_size = *(ushort *)(source_address + 0x62);
  
  // 写入数据大小
  if ((ulonglong)((*global_buffer - (longlong)size_writer) + global_buffer[2]) < 5) {
    expand_buffer_capacity();
    size_writer = (uint *)global_buffer[1];
  }
  *size_writer = (uint)data_size;
  data_offset = global_buffer[1] + 4;
  global_buffer[1] = data_offset;
  
  // 写入数据内容
  if (*(ushort *)(source_address + 0x62) != 0) {
    data_address = *(uint64_t *)(source_address + 0x5a);
    copy_size = (ulonglong)*(ushort *)(source_address + 0x62) * 4;
    if ((ulonglong)((*global_buffer - data_offset) + global_buffer[2]) <= copy_size) {
      expand_buffer_capacity();
      data_offset = global_buffer[1];
    }
                    // 复制数据内容
    memcpy(data_offset, data_address, copy_size);
  }
  return;
}



// 警告：全局变量名称冲突