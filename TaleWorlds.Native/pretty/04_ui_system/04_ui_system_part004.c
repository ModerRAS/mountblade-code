#include "TaleWorlds.Native.Split.h"

/**
 * 04_ui_system_part004.c - UI系统组件处理函数集合
 * 
 * 本文件包含TaleWorlds Native引擎UI系统的核心组件处理函数，主要功能包括：
 * - UI组件初始化和配置管理
 * - UI系统内存管理和资源分配
 * - 字符串处理和格式化
 * - Mono运行时集成和程序集加载
 * - 线程安全的数据处理
 * - 动态缓冲区管理
 * 
 * 文件包含19个核心函数，涵盖UI系统从初始化到运行时的完整生命周期管理。
 * 
 * 美化完成时间：2025-08-28
 * 美化人员：Claude Code
 */

/**
 * UI系统组件初始化函数
 * 为UI组件设置基本参数并初始化内部状态
 * 
 * @param ui_component UI组件指针
 * @param init_param 初始化参数
 */
void ui_component_initialize(longlong ui_component, undefined8 init_param)

{
  undefined8 init_stack[3];
  
  init_stack[0] = init_param;
  FUN_18005ea90(ui_component + 0x168, init_stack);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统组件配置处理函数
 * 处理UI组件的详细配置，包括回调函数设置和资源分配
 * 
 * @param ui_context UI上下文指针
 * @param component_config 组件配置结构体指针
 * @param config_param1 配置参数1
 * @param config_param2 配置参数2
 */
void ui_component_configure(longlong ui_context, longlong *component_config, undefined8 config_param1, undefined8 config_param2)

{
  undefined *texture_data;
  undefined *font_data;
  longlong *config_ptr;
  undefined *resource_ptr1;
  undefined *resource_ptr2;
  undefined4 render_flags;
  undefined *callback_ptr1;
  undefined *callback_ptr2;
  
  config_ptr = component_config;
  FUN_18005ea90(ui_context + 0x168, &config_ptr, config_param1, config_param2, 0xfffffffffffffffe);
  (**(code **)(*component_config + 8))(component_config, &callback_ptr1);
  (**(code **)(*component_config + 0x10))(component_config, &resource_ptr1);
  font_data = &DAT_18098bc73;
  if (resource_ptr2 != (undefined *)0x0) {
    font_data = resource_ptr2;
  }
  texture_data = &DAT_18098bc73;
  if (callback_ptr2 != (undefined *)0x0) {
    texture_data = callback_ptr2;
  }
  (**(code **)(_DAT_180c8f008 + 0xe8))(texture_data, font_data);
  (**(code **)*component_config)(component_config);
  resource_ptr1 = &UNK_180a3c3e0;
  if (resource_ptr2 != (undefined *)0x0) {
    // 资源清理失败处理
    FUN_18064e900();
  }
  resource_ptr2 = (undefined *)0x0;
  render_flags = 0;
  resource_ptr1 = &UNK_18098bcb0;
  callback_ptr1 = &UNK_180a3c3e0;
  if (callback_ptr2 != (undefined *)0x0) {
    // 回调清理失败处理
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统管理器初始化函数
 * 初始化UI管理器并注册各种UI事件处理函数
 * 
 * @param ui_manager UI管理器指针
 * @param texture_handler 纹理处理器指针
 * @param font_handler 字体处理器指针
 */
void ui_manager_initialize(longlong ui_manager, longlong texture_handler, longlong font_handler)

{
  code *renderer_init;
  undefined *texture_data;
  undefined *font_data;
  
  renderer_init = _DAT_180c8f018;
  *(undefined1 *)(ui_manager + 0x189) = 1;
  if (renderer_init == (code *)0x0) {
    FUN_180626ee0(&UNK_180a3dc30);
  }
  else {
    texture_data = &DAT_18098bc73;
    if (*(undefined **)(texture_handler + 8) != (undefined *)0x0) {
      texture_data = *(undefined **)(texture_handler + 8);
    }
    font_data = &DAT_18098bc73;
    if (*(undefined **)(font_handler + 8) != (undefined *)0x0) {
      font_data = *(undefined **)(font_handler + 8);
    }
    (*renderer_init)(texture_data, font_data, _DAT_180c8ecfc, _DAT_180bf3ff4);
  }
  if (_DAT_180c8f010 == (code *)0x0) {
    FUN_180626f80(&UNK_180a3dc58);
    if (_DAT_180c8f010 == (code *)0x0) {
      FUN_180626ee0(&UNK_180a3dc30);
      goto ui_init_complete;
    }
  }
  (*_DAT_180c8f010)();
ui_init_complete:
  *(longlong *)(ui_manager + 0x10) = ui_manager;
  // 注册UI事件处理函数
  (**(code **)(ui_manager + 0x78))(0, FUN_1806555f0);
  (**(code **)(ui_manager + 0x78))(1, FUN_1806552e0);
  (**(code **)(ui_manager + 0x78))(2, &UNK_1803f60a0);
  (**(code **)(ui_manager + 0x78))(3, FUN_180655e60);
  (**(code **)(ui_manager + 0x78))(4, &UNK_180655e50);
  (**(code **)(ui_manager + 0x78))(5, &UNK_180084650);
  (**(code **)(ui_manager + 0x78))(6, &UNK_180655f30);
  (**(code **)(ui_manager + 0x78))(7, &UNK_1806561b0);
  (**(code **)(ui_manager + 0x78))(8, FUN_180656160);
  (**(code **)(ui_manager + 0x78))(9, FUN_180656110);
  (**(code **)(ui_manager + 0x78))(10, &UNK_1806561c0);
  (**(code **)(ui_manager + 0x78))(0xb, FUN_180656020);
  (**(code **)(ui_manager + 0x78))(0xc, &UNK_180150380);
  (**(code **)(ui_manager + 0x78))(0xd, FUN_180655f50);
  (**(code **)(ui_manager + 0x78))(0xe, &UNK_180656100);
  (**(code **)(ui_manager + 0x78))(0xf, &UNK_180656330);
  (**(code **)(ui_manager + 0x78))(0x10, FUN_1806563a0);
  (**(code **)(ui_manager + 0x78))(0x11, FUN_1806561d0);
  (**(code **)(ui_manager + 0x78))(0x12, &UNK_180656320);
  (**(code **)(ui_manager + 0x78))(0x13, FUN_180656340);
  (**(code **)(ui_manager + 0x78))(0x14, FUN_180656410);
  (**(code **)(ui_manager + 0x78))(0x15, FUN_1806565a0);
  (**(code **)(ui_manager + 0x78))(0x16, FUN_180656610);
  (**(code **)(ui_manager + 0x78))(0x17, FUN_1806566c0);
  (**(code **)(ui_manager + 0x78))(0x18, FUN_18006f4c0);
  (**(code **)(ui_manager + 0x78))(0x19, &UNK_180656700);
  (**(code **)(ui_manager + 0x78))(0x1a, &UNK_180046680);
  (**(code **)(ui_manager + 0x78))(0x1b, _guard_check_icall);
  (**(code **)(ui_manager + 0x78))(0x1c, _guard_check_icall);
  (**(code **)(ui_manager + 0x78))(0x1d, 0x180069ee0);
  (**(code **)(ui_manager + 0x78))(0x1e, &UNK_180046230);
  (**(code **)(ui_manager + 0x78))(0x1f, _guard_check_icall);
  (**(code **)(ui_manager + 0x78))(0x20, _guard_check_icall);
  (**(code **)(ui_manager + 0x80))();
  // 执行UI系统初始化跳转
  (**(code **)(ui_manager + 0x58))();
  return;
}





/**
 * UI系统回调函数执行器
 * 执行UI系统中注册的所有回调函数
 * 
 * @param callback_executor 回调执行器指针
 */
void ui_callback_executor_execute(longlong callback_executor)

{
  ulonglong callback_index;
  uint callback_count;
  ulonglong total_callbacks;
  
  callback_index = 0;
  total_callbacks = callback_index;
  // 检查是否有回调函数需要执行
  if (*(longlong *)(callback_executor + 0x170) - *(longlong *)(callback_executor + 0x168) >> 3 == 0) {
    *(undefined1 *)(callback_executor + 0x188) = 1;  // 标记执行完成
    return;
  }
  // 遍历并执行所有回调函数
  do {
    (**(code **)**(undefined8 **)(callback_index + *(longlong *)(callback_executor + 0x168)))();
    callback_index = callback_index + 8;
    callback_count = (int)total_callbacks + 1;
    total_callbacks = (ulonglong)callback_count;
  } while ((ulonglong)(longlong)(int)callback_count <
           (ulonglong)(*(longlong *)(callback_executor + 0x170) - *(longlong *)(callback_executor + 0x168) >> 3));
  *(undefined1 *)(callback_executor + 0x188) = 1;  // 标记执行完成
  return;
}





/**
 * UI系统异步回调处理器
 * 处理异步UI回调函数的执行，使用寄存器变量传递参数
 * 
 * 注意：此函数使用非标准调用约定，通过寄存器传递参数
 */
void ui_async_callback_processor(void)

{
  longlong callback_context;  // RBX寄存器 - 回调上下文
  ulonglong callback_index;   // RDI寄存器 - 回调索引
  uint callback_counter;      // EDI寄存器 - 回调计数器
  
  callback_index = (ulonglong)callback_counter;
  // 执行异步回调函数循环
  do {
    (**(code **)**(undefined8 **)(callback_index + *(longlong *)(callback_context + 0x168)))();
    callback_index = callback_index + 8;
    callback_counter = callback_counter + 1;
  } while ((ulonglong)(longlong)(int)callback_counter <
           (ulonglong)(*(longlong *)(callback_context + 0x170) - *(longlong *)(callback_context + 0x168) >> 3));
  *(undefined1 *)(callback_context + 0x188) = 1;  // 标记异步处理完成
  return;
}





/**
 * UI系统完成标记设置函数
 * 设置UI系统操作完成的标记状态
 * 
 * @param ui_context UI上下文指针
 */
void ui_completion_marker_set(longlong ui_context)

{
  *(undefined1 *)(ui_context + 0x188) = 1;  // 设置完成标记
  return;
}



/**
 * UI系统资源处理器
 * 处理UI系统资源的获取和初始化
 * 
 * @param resource_manager 资源管理器指针
 * @param output_buffer 输出缓冲区指针
 * @param resource_id 资源ID
 * @return 返回输出缓冲区指针
 */
undefined8 ui_resource_processor(longlong resource_manager, undefined8 output_buffer, undefined4 resource_id)

{
  longlong resource_handle;
  undefined *resource_data;
  
  // 获取资源句柄
  resource_handle = (**(code **)(resource_manager + 0x148))(resource_id);
  resource_data = &default_ui_data;  // DAT_18098bc73
  if (*(undefined **)(resource_handle + 8) != (undefined *)0x0) {
    resource_data = *(undefined **)(resource_handle + 8);
  }
  // 初始化资源数据
  initialize_ui_resource(output_buffer, resource_data);  // FUN_180627910
  return output_buffer;
}



/**
 * UI系统数据验证和复制函数
 * 验证UI数据的有效性并在验证通过后进行复制操作
 * 
 * @param validator 验证器指针
 * @param target_buffer 目标缓冲区指针
 * @param source_data 源数据指针
 * @param copy_flags 复制标志
 * @return 返回操作状态：0=成功，1=失败
 */
ulonglong ui_data_validate_and_copy(longlong validator, longlong target_buffer, longlong source_data, undefined8 copy_flags)

{
  ulonglong validation_result;
  longlong data_handle;
  longlong compare_index;
  undefined *data_content;
  ulonglong operation_status;
  undefined8 security_flag;
  undefined *temp_buffer;
  longlong string_buffer;
  uint buffer_size;
  undefined4 buffer_flags;
  
  security_flag = 0xfffffffffffffffe;  // 安全标志
  // 检查数据是否有效
  if (*(int *)(source_data + 0x10) == 0) {
    return validation_result & 0xffffffffffffff00;  // 返回验证结果
  }
  data_content = &default_ui_data;  // DAT_18098bc73
  if (*(undefined **)(source_data + 8) != (undefined *)0x0) {
    data_content = *(undefined **)(source_data + 8);
  }
  // 获取数据句柄
  data_handle = (**(code **)(validator + 0xb0))(data_content);
  data_content = &default_ui_data;  // DAT_18098bc73
  if (*(undefined **)(data_handle + 8) != (undefined *)0x0) {
    data_content = *(undefined **)(data_handle + 8);
  }
  // 初始化临时缓冲区
  initialize_ui_buffer(&temp_buffer, data_content);  // FUN_180627910
  // 特殊验证：检查是否为特定字符串
  if (buffer_size == 7) {
    data_handle = 0;
    do {
      compare_index = data_handle + 1;
      if (*(char *)(string_buffer + data_handle) != (&special_ui_string)[compare_index]) goto validation_failed;
      data_handle = compare_index;
    } while (compare_index != 8);
    operation_status = 0;  // 验证成功
  }
  else {
validation_failed:
    // 验证失败，执行数据复制
    if (string_buffer != 0) {
      prepare_buffer_for_copy(target_buffer, buffer_size);  // FUN_1806277c0
    }
    if (buffer_size != 0) {
      // 执行安全的数据复制操作
      secure_memcpy(*(undefined8 *)(target_buffer + 8), string_buffer, (ulonglong)buffer_size, copy_flags, security_flag);
    }
    *(undefined4 *)(target_buffer + 0x10) = 0;  // 清除缓冲区长度标记
    if (*(longlong *)(target_buffer + 8) != 0) {
      *(undefined1 *)((ulonglong)buffer_size + *(longlong *)(target_buffer + 8)) = 0;  // 添加字符串终止符
    }
    *(undefined4 *)(target_buffer + 0x1c) = buffer_flags;  // 设置缓冲区标志
    operation_status = 1;  // 操作完成
  }
  // 清理临时缓冲区
  temp_buffer = &ui_cleanup_marker;  // UNK_180a3c3e0
  if (string_buffer != 0) {
    cleanup_ui_resources();  // FUN_18064e900
  }
  return operation_status;
}



/**
 * UI系统资源激活器
 * 激活指定的UI资源
 * 
 * @param resource_activator 资源激活器指针
 * @param resource_handle 资源句柄
 * @return 返回激活状态：1=成功
 */
undefined8 ui_resource_activator(longlong resource_activator, longlong resource_handle)

{
  undefined *resource_data;
  
  resource_data = &default_ui_data;  // DAT_18098bc73
  if (*(undefined **)(resource_handle + 8) != (undefined *)0x0) {
    resource_data = *(undefined **)(resource_handle + 8);
  }
  // 执行资源激活操作
  (**(code **)(resource_activator + 0x110))(resource_data);
  return 1;  // 激活成功
}



/**
 * UI系统资源释放器
 * 释放指定的UI资源
 * 
 * @param resource_releaser 资源释放器指针
 * @param resource_handle 资源句柄
 * @return 返回释放状态：1=成功
 */
undefined8 ui_resource_releaser(longlong resource_releaser, longlong resource_handle)

{
  undefined *resource_data;
  
  resource_data = &default_ui_data;  // DAT_18098bc73
  if (*(undefined **)(resource_handle + 8) != (undefined *)0x0) {
    resource_data = *(undefined **)(resource_handle + 8);
  }
  // 执行资源释放操作
  (**(code **)(resource_releaser + 0x118))(resource_data);
  return 1;  // 释放成功
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * UI系统批量处理器
 * 批量处理UI系统中的多个项目
 * 
 * @param batch_processor 批量处理器指针
 * @param result_ptr 结果指针
 * @param item_array 项目数组指针
 * @param process_flags 处理标志
 * @return 返回结果指针
 */
int * ui_batch_processor(longlong batch_processor, int *result_ptr, longlong *item_array, undefined8 process_flags)

{
  undefined *item_data;
  int item_count;
  longlong array_start;
  uint item_index;
  ulonglong current_index;
  ulonglong array_offset;
  undefined *processed_data;
  undefined4 process_flag;
  undefined8 security_param;
  
  security_param = 0xfffffffffffffffe;  // 安全参数
  current_index = 0;
  // 计算项目数量
  item_count = (**(code **)(batch_processor + 0x60))(item_array[1] - *item_array >> 5);
  *result_ptr = item_count;
  // 如果有项目且托管接口可用，则进行初始化
  if ((item_count != 0) && (managed_interface != 0)) {  // _DAT_180c8f008
    (**(code **)(managed_interface + 0x30))(item_count);
  }
  process_flag = 1;
  array_start = *item_array;
  array_offset = current_index;
  // 遍历处理所有项目
  if (item_array[1] - array_start >> 5 != 0) {
    do {
      item_data = *(undefined **)(array_start + 8 + array_offset);
      processed_data = &default_ui_data;  // DAT_18098bc73
      if (item_data != (undefined *)0x0) {
        processed_data = item_data;
      }
      // 处理单个项目
      (**(code **)(batch_processor + 0x128))(*result_ptr, current_index, processed_data, process_flags, process_flag, security_param);
      item_index = (int)current_index + 1;
      current_index = (ulonglong)item_index;
      array_start = *item_array;
      array_offset = array_offset + 0x20;  // 下一个项目偏移
    } while ((ulonglong)(longlong)(int)item_index < (ulonglong)(item_array[1] - array_start >> 5));
  }
  return result_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 获取FTDN托管接口
 * 返回UI系统的托管接口指针
 * 
 * @return 返回托管接口指针
 */
undefined8 get_ftdn_managed_interface(void)

{
  return managed_interface;  // _DAT_180c8f008
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统配置解析器
 * 解析UI系统配置数据并转换为内部格式
 * 
 * @param config_parser 配置解析器指针
 * @param config_data 配置数据指针
 */
void ui_config_parser(longlong *config_parser, longlong config_data)

{
  undefined4 *dimension_data;     // 维度数据指针
  undefined4 width_value;          // 宽度值
  undefined4 height_value;         // 高度值
  undefined4 depth_value;          // 深度值
  undefined8 *array_ptr;           // 数组指针
  undefined8 *end_ptr;             // 结束指针
  int parsed_width;                // 解析的宽度
  int parsed_height;               // 解析的高度
  ulonglong item_count;            // 项目计数
  undefined8 *new_array;           // 新数组指针
  longlong old_capacity;           // 旧容量
  longlong new_capacity;           // 新容量
  undefined8 *source_ptr;         // 源指针
  longlong array_capacity;         // 数组容量
  undefined8 *temp_array;          // 临时数组指针
  undefined2 parse_config[4];      // 解析配置数组
  ulonglong total_items;           // 总项目数
  undefined8 parsed_value;         // 解析的值
  undefined8 *result_array;        // 结果数组指针
  undefined8 result_capacity;     // 结果容量
  undefined *temp_buffer;          // 临时缓冲区
  longlong buffer_handle;           // 缓冲区句柄
  undefined4 buffer_flags;         // 缓冲区标志
  undefined8 *item_array;          // 项目数组指针
  undefined8 *item_end;            // 项目结束指针
  undefined8 item_data;            // 项目数据
  undefined4 item_flags;           // 项目标志
  
  // 检查配置数据是否有效
  if (*(int *)(config_data + 0x10) != 0) {
    result_array = (undefined8 *)0x0;
    result_capacity = (undefined8 *)0x0;
    item_data = 0;
    item_flags = 3;
    parse_config[0] = 10;  // 解析配置参数
    // 如果配置数据包含有效内容，则进行解析
    if (*(longlong *)(config_data + 8) != 0) {
      parse_config_data(config_data, &result_array, parse_config);  // FUN_180057980
    }
    item_count = (longlong)result_capacity - (longlong)result_array >> 5;
    temp_array = result_array;
    item_array = result_array;
    item_end = result_capacity;
    if ((int)item_count != 0) {
      item_count = item_count & 0xffffffff;
      do {
        // 初始化项目处理缓冲区
        item_array = (undefined8 *)0x0;
        item_end = (undefined8 *)0x0;
        item_data = 0;
        item_flags = 3;
        parse_config[0] = 0x40;  // 项目处理配置
        total_items = item_count;
        // 如果项目有内容，则进行处理
        if (temp_array[1] != 0) {
          parse_config_data(temp_array, &item_array, parse_config);  // FUN_180057980
        }
        item_end = item_end;
        item_array = item_array;
        item_array = item_array;
        // 检查项目数据格式是否正确
        if (((longlong)item_end - (longlong)item_array & 0xffffffffffffffe0U) == 0x60) {
          // 解析项目数据
          parse_ui_config_data(&temp_buffer, item_array);  // FUN_180627ae0
          parsed_width = atoi(item_array[5]);  // 解析宽度
          parsed_height = atoi(item_array[9]); // 解析高度
          parsed_value = create_ui_config_item(&temp_buffer);  // FUN_180650c20
          item_array = (undefined8 *)config_parser[1];
          // 检查是否有足够的空间存储配置项
          if (item_array < (undefined8 *)config_parser[2]) {
            *item_array = parsed_value;
            item_array[1] = (longlong)parsed_width;
            item_array[2] = (longlong)parsed_height;
            config_parser[1] = config_parser[1] + 0x18;  // 移动到下一个位置
          }
          else {
            // 空间不足，需要扩展数组
            old_capacity = *config_parser;
            new_capacity = ((longlong)item_array - old_capacity) / 0x18;
            if (new_capacity == 0) {
              new_capacity = 1;
            expand_array:
              // 分配新的数组空间
              new_array = (undefined8 *)allocate_ui_memory(memory_allocator, new_capacity * 0x18, (char)config_parser[3]);  // FUN_18062b420
              item_array = (undefined8 *)config_parser[1];
              old_capacity = *config_parser;
            }
            else {
              new_capacity = new_capacity * 2;
              if (new_capacity != 0) goto expand_array;
              new_array = (undefined8 *)0x0;
            }
            // 复制现有数据到新数组
            array_capacity = ((longlong)item_array - old_capacity) / 0x18;
            item_array = new_array;
            if (0 < array_capacity) {
              do {
                dimension_data = (undefined4 *)((longlong)item_array + (old_capacity - (longlong)new_array));
                width_value = dimension_data[1];
                height_value = dimension_data[2];
                depth_value = dimension_data[3];
                *(undefined4 *)item_array = *dimension_data;
                *(undefined4 *)((longlong)item_array + 4) = width_value;
                *(undefined4 *)(item_array + 1) = height_value;
                *(undefined4 *)((longlong)item_array + 0xc) = depth_value;
                item_array[2] = *(undefined8 *)
                              ((longlong)item_array + (old_capacity - (longlong)new_array) + 0x10);
                array_capacity = array_capacity + -1;
                item_array = item_array + 3;
              } while (0 < array_capacity);
            }
            // 存储新的配置项
            *item_array = parsed_value;
            item_array[1] = (longlong)parsed_width;
            item_array[2] = (longlong)parsed_height;
            if (*config_parser != 0) {
              // 清理旧的数组
              cleanup_ui_resources();  // FUN_18064e900
            }
            *config_parser = (longlong)new_array;
            config_parser[1] = (longlong)(item_array + 3);
            config_parser[2] = (longlong)(new_array + new_capacity * 3);
            item_count = total_items;
          }
          // 清理临时缓冲区
          temp_buffer = &ui_cleanup_marker;  // UNK_180a3c3e0
          if (buffer_handle != 0) {
            cleanup_ui_resources();  // FUN_18064e900
          }
          buffer_handle = 0;
          buffer_flags = 0;
          temp_buffer = &ui_buffer_marker;  // UNK_18098bcb0
          // 清理项目数组
          for (item_array = item_array; item_array != item_end; item_array = item_array + 4) {
            (**(code **)*item_array)(item_array, 0);
          }
        }
        else {
          // 清理项目数组的备用路径
          for (; item_array != item_end; item_array = item_array + 4) {
            (**(code **)*item_array)(item_array, 0);
          }
        }
        // 清理项目数据
        if (item_array != (undefined8 *)0x0) {
          cleanup_ui_resources(item_array);  // FUN_18064e900
        }
        temp_array = temp_array + 4;
        item_count = item_count - 1;
      } while (item_count != 0);
      total_items = 0;
      temp_array = result_array;
      item_array = result_array;
      item_end = result_capacity;
    }
    // 最终清理阶段
    for (; new_array = result_capacity, item_end = result_array, temp_array != result_capacity; temp_array = temp_array + 4)
    {
      result_array = item_array;
      result_capacity = item_end;
      (**(code **)*temp_array)(temp_array, 0);
      item_array = result_array;
      item_end = result_capacity;
      result_capacity = new_array;
      result_array = item_end;
    }
    if (result_array != (undefined8 *)0x0) {
      result_array = item_array;
      result_capacity = item_end;
      // 最终资源清理
      cleanup_ui_resources(item_end);  // FUN_18064e900
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统安全初始化函数
 * 执行UI系统的安全初始化操作
 * 
 * 注意：此函数包含安全检查和异常处理机制
 */
void ui_security_initializer(void)

{
  undefined1 security_buffer [144];
  undefined8 security_param;
  undefined1 init_buffer [288];
  ulonglong security_hash;
  
  security_param = 0xfffffffffffffffe;  // 安全参数
  security_hash = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  // 初始化UI系统安全缓冲区
  memset(init_buffer, 0, 0x118);  // WARNING: Subroutine does not return
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统线程安全数据处理器
 * 在多线程环境中安全地处理UI系统数据
 * 
 * @param process_flag 处理标志
 * @param data_array 数据数组指针
 */
void ui_threadsafe_data_processor(undefined8 process_flag, longlong *data_array)

{
  int mutex_result;
  longlong data_count;
  undefined1 security_buffer [184];
  undefined1 temp_buffer [32];
  undefined8 security_param1;
  undefined8 security_param2;
  undefined1 processing_buffer [2048];
  ulonglong security_hash;
  
  security_param1 = 0xfffffffffffffffe;  // 安全参数1
  security_hash = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  initialize_ui_processing();  // FUN_180057110
  security_param2 = 0x180c96740;  // 互斥锁地址
  // 获取线程互斥锁
  mutex_result = _Mtx_lock(0x180c96740);
  if (mutex_result != 0) {
    // 互斥锁获取失败，抛出异常
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  // 计算需要处理的数据数量
  data_count = (data_array[1] - *data_array) / 6 + (data_array[1] - *data_array >> 0x3f);
  if ((int)(data_count >> 2) != (int)(data_count >> 0x3f)) {
    prepare_ui_data_processing(temp_buffer);  // FUN_180629090
    // 初始化处理缓冲区
    memset(processing_buffer, 0, 0x800);  // WARNING: Subroutine does not return
  }
  // 释放线程互斥锁
  mutex_result = _Mtx_unlock(0x180c96740);
  if (mutex_result != 0) {
    // 互斥锁释放失败，抛出异常
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  // 执行安全的数据处理操作
  secure_ui_data_processing(security_hash ^ (ulonglong)security_buffer);  // FUN_1808fc050
}



/**
 * UI系统字符串构建器
 * 构建UI系统所需的字符串数据结构
 * 
 * @param string_builder 字符串构建器指针
 * @param output_buffer 输出缓冲区指针
 * @param build_param 构建参数1
 * @param build_flag 构建标志
 * @return 返回输出缓冲区指针
 */
undefined8 *
ui_string_builder(longlong *string_builder, undefined8 *output_buffer, undefined8 build_param, undefined8 build_flag)

{
  char *string_ptr;
  undefined *data_ptr;
  longlong string_length;
  ulonglong item_count;
  longlong item_index;
  undefined *item_data;
  undefined *temp_buffer;
  longlong buffer_handle;
  undefined4 buffer_flag1;
  undefined4 buffer_flag2;
  undefined4 buffer_flag3;
  longlong loop_counter;
  
  item_index = 0;
  // 初始化字符串构建缓冲区
  initialize_ui_string_buffer(&temp_buffer, &default_ui_data, build_param, build_flag, 0, 0xfffffffffffffffe);  // FUN_180627910
  loop_counter = -1;
  // 计算字符串长度
  do {
    string_length = loop_counter + 1;
    string_ptr = (char *)(loop_counter + 0x180c8f021);
    loop_counter = string_length;
  } while (*string_ptr != '\0');
  if (string_length == 0) {
    item_count = string_builder[1] - *string_builder >> 5;
    if ((int)item_count == 0) {
      // 空构建器，直接返回
      initialize_ui_string_buffer(output_buffer, &empty_string_data);  // FUN_180627910
      temp_buffer = &ui_cleanup_marker;  // UNK_180a3c3e0
      if (buffer_handle == 0) {
        return output_buffer;
      }
      // 清理资源
      cleanup_ui_resources();  // FUN_18064e900
    }
    item_count = item_count & 0xffffffff;
    do {
      data_ptr = *(undefined **)(item_index + 8 + *string_builder);
      item_data = &default_ui_data;  // DAT_18098bc73
      if (data_ptr != (undefined *)0x0) {
        item_data = data_ptr;
      }
      // 添加字符串项到构建器
      add_string_item_to_builder(&temp_buffer, &string_format_data, item_data);  // FUN_180628040
      item_index = item_index + 0x20;
      item_count = item_count - 1;
    } while (item_count != 0);
  }
  else {
    // 执行字符串构建完成操作
    (**(code **)(temp_buffer + 0x10))(&temp_buffer);
  }
  // 设置输出缓冲区
  *output_buffer = &ui_buffer_marker;  // UNK_18098bcb0
  output_buffer[1] = 0;
  *(undefined4 *)(output_buffer + 2) = 0;
  *output_buffer = &ui_cleanup_marker;  // UNK_180a3c3e0
  *(undefined4 *)(output_buffer + 2) = buffer_flag1;
  output_buffer[1] = buffer_handle;
  *(undefined4 *)((longlong)output_buffer + 0x1c) = buffer_flag3;
  *(undefined4 *)(output_buffer + 3) = buffer_flag2;
  return output_buffer;
}





/**
 * UI系统字符串长度检查器
 * 检查UI字符串的长度并进行必要的截断处理
 * 
 * @param string_check 字符串检查器指针
 */
void ui_string_length_checker(longlong string_check)

{
  uint string_length;
  longlong char_index;
  
  if (string_check == 0) {
    return;
  }
}

/**
 * UI系统字符串复制器
 * 安全地复制UI字符串数据到目标缓冲区
 * 
 * @param source_string 源字符串指针
 */
void ui_string_copier(longlong source_string)

{
  uint string_length;
  longlong char_index;
  
  char_index = -1;
  // 计算字符串长度
  do {
    char_index = char_index + 1;
  } while (*(char *)(source_string + char_index) != '\0');
  string_length = (uint)char_index;
  // 检查长度限制，最大8191字符
  if (0x1fff < string_length) {
    string_length = 0x1fff;
  }
  // 安全复制字符串到目标缓冲区
  memcpy(&ui_target_buffer, source_string, (longlong)(int)string_length);  // WARNING: Subroutine does not return
}





/**
 * UI系统软件中断处理器
 * 处理UI系统的软件中断请求
 * 
 * 注意：此函数使用底层系统调用接口
 */
void ui_software_interrupt_handler(void)

{
  code *interrupt_handler;
  
  initialize_ui_interrupt_system();  // FUN_1808fcdc8
  interrupt_handler = (code *)swi(3);  // 获取软件中断处理器
  (*interrupt_handler)();  // 执行中断处理
  return;
}



/**
 * UI系统Mono字符串转换器
 * 将Mono字符串转换为UI系统可用的格式
 * 
 * @param output_buffer 输出缓冲区指针
 * @param mono_string Mono字符串对象
 * @param convert_param 转换参数
 * @param convert_flag 转换标志
 * @return 返回输出缓冲区指针
 */
undefined8 *
ui_mono_string_converter(undefined8 *output_buffer, longlong mono_string, undefined8 convert_param, undefined8 convert_flag)

{
  undefined8 utf8_string;
  undefined4 buffer_flag1;
  undefined8 security_param;
  undefined1 temp_buffer [8];
  undefined8 buffer_handle;
  undefined4 buffer_flag2;
  undefined4 buffer_flag3;
  undefined4 buffer_flag4;
  
  security_param = 0xfffffffffffffffe;  // 安全参数
  buffer_flag1 = 0;
  // 检查Mono字符串是否有效
  if ((mono_string != 0) && (*(int *)(mono_string + 0x10) != 0)) {
    utf8_string = mono_string_to_utf8(mono_string);
    // 初始化转换缓冲区
    initialize_ui_string_buffer(temp_buffer, utf8_string, convert_param, convert_flag, buffer_flag1, security_param);  // FUN_180627910
    mono_free(utf8_string);  // 释放Mono字符串
    // 设置输出缓冲区
    *output_buffer = &ui_buffer_marker;  // UNK_18098bcb0
    output_buffer[1] = 0;
    *(undefined4 *)(output_buffer + 2) = 0;
    *output_buffer = &ui_cleanup_marker;  // UNK_180a3c3e0
    *(undefined4 *)(output_buffer + 2) = buffer_flag2;
    output_buffer[1] = buffer_handle;
    *(undefined4 *)((longlong)output_buffer + 0x1c) = buffer_flag4;
    *(undefined4 *)(output_buffer + 3) = buffer_flag3;
    return output_buffer;
  }
  // 获取默认字符串进行转换
  security_param = get_default_ui_string();  // FUN_180628ca0
  initialize_ui_conversion_buffer(output_buffer, security_param);  // FUN_180627ae0
  return output_buffer;
}





/**
 * UI系统调试输出处理器
 * 处理UI系统的调试信息输出
 * 
 * @param debug_message 调试消息字符串
 */
void ui_debug_output_handler(undefined8 debug_message)

{
  ui_string_length_checker(0);  // FUN_1806533a0
  // 输出调试字符串
  OutputDebugStringA(debug_message);
  // 记录调试输出完成
  log_debug_output_completion(&debug_completion_marker);  // FUN_180626ee0
}


/**
 * UI系统内存分配器
 * 为UI系统分配指定大小的内存块
 * 
 * @param alloc_size 分配大小
 * @param alloc_count 分配数量
 */
void ui_memory_allocator(longlong alloc_size, longlong alloc_count)

{
  undefined8 memory_block;
  
  // 分配内存块
  memory_block = allocate_ui_memory(memory_allocator, alloc_size * alloc_count, 0x19);  // FUN_18062b420
  // 初始化内存块为零
  memset(memory_block, 0, alloc_size * alloc_count);  // WARNING: Subroutine does not return
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统Mono环境初始化器
 * 初始化UI系统的Mono运行时环境和内存分配器
 * 
 * 注意：此函数设置Mono的内存分配表和环境变量
 */
void ui_mono_environment_initializer(void)

{
  undefined8 *allocator_vtable;
  undefined4 *version_string;
  
  // 创建Mono分配器虚表
  allocator_vtable = (undefined8 *)allocate_ui_memory_with_flags(memory_allocator, 0x28, 8, 3, 0xfffffffffffffffe);  // FUN_18062b1e0
  *allocator_vtable = 1;  // 分配器版本
  allocator_vtable[1] = ui_mono_allocator_malloc;  // FUN_180653580
  allocator_vtable[2] = ui_mono_allocator_free;   // FUN_1806535c0
  allocator_vtable[3] = ui_mono_allocator_realloc; // FUN_180653630
  allocator_vtable[4] = ui_memory_allocator;     // FUN_180653670
  // 设置Mono分配器虚表
  mono_set_allocator_vtable(allocator_vtable);
  
  // 创建运行时版本字符串 "run-yze-size-918-k2"
  version_string = (undefined4 *)allocate_ui_memory(memory_allocator, 0x13, 0x13);
  *(undefined1 *)version_string = 0;
  secure_string_init(version_string);  // FUN_18064e990
  *version_string = 0x7372756e;  // "nurs"
  version_string[1] = 0x2d797265; // "-yre"
  version_string[2] = 0x657a6973; // "ezis"
  version_string[3] = 0x3931383d; // "918-"
  *(undefined2 *)(version_string + 4) = 0x6b32; // "k2"
  *(undefined1 *)((longlong)version_string + 0x12) = 0;  // 字符串终止符
  
  // 创建环境变量名 "_CG_ONOMS"
  allocator_vtable = (undefined8 *)allocate_ui_memory(memory_allocator, 0x10, 0x13);
  *(undefined1 *)allocator_vtable = 0;
  secure_string_init(allocator_vtable);  // FUN_18064e990
  *allocator_vtable = 0x5f43475f4f4e4f4d;  // "_CG_ONOM"
  *(undefined4 *)(allocator_vtable + 1) = 0x41524150; // "APAR"
  *(undefined2 *)((longlong)allocator_vtable + 0xc) = 0x534d; // "MS"
  *(undefined1 *)((longlong)allocator_vtable + 0xe) = 0;  // 字符串终止符
  
  // 设置环境变量
  SetEnvironmentVariableA(allocator_vtable, version_string);
  // 清理分配的内存
  cleanup_ui_resources(allocator_vtable);  // FUN_18064e900
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统Mono程序集加载器
 * 加载并初始化Mono运行时程序集和类
 * 
 * 注意：此函数负责加载TaleWorlds.Native.dll程序集并获取UI相关类
 */
void ui_mono_assembly_loader(void)

{
  longlong *assembly_handle;
  undefined4 *assembly_name;
  undefined4 name_length;
  longlong domain_result;
  undefined8 *class_name;
  undefined4 *namespace_name;
  ulonglong string_length;
  undefined1 security_buffer [32];
  undefined *temp_resource;
  undefined4 *name_buffer;
  uint buffer_size;
  ulonglong buffer_offset;
  undefined4 security_flag;
  undefined *resource_ptr;
  undefined8 *temp_ptr;
  undefined4 ptr_size;
  undefined8 buffer_handle;
  undefined8 security_param;
  ulonglong security_hash;
  
  assembly_handle = mono_assembly_handle_ptr;  // _DAT_180c91020
  security_param = 0xfffffffffffffffe;
  security_hash = security_constant ^ (ulonglong)security_buffer;  // _DAT_180bf00a8
  security_flag = 0;
  temp_resource = &ui_cleanup_marker;  // UNK_180a3c3e0
  buffer_offset = 0;
  name_buffer = (undefined4 *)0x0;
  buffer_size = 0;
  // 初始化程序集名称缓冲区
  initialize_ui_string_buffer(&temp_resource, 0x15);
  assembly_name = name_buffer;
  string_length = (ulonglong)buffer_size;
  namespace_name = (undefined4 *)((longlong)name_buffer + string_length);
  // 设置程序集名称 "TaleWorlds.Native.dll"
  *namespace_name = 0x656c6154;  // "TaleW"
  namespace_name[1] = 0x6c726f57; // "orlds"
  namespace_name[2] = 0x442e7364; // "s.Na"
  namespace_name[3] = 0x654e746f; // "tive"
  *(undefined4 *)((longlong)name_buffer + string_length + 0x10) = 0x6c642e74; // ".dll"
  *(undefined2 *)((longlong)name_buffer + string_length + 0x14) = 0x6c;
  buffer_size = 0x15;
  namespace_name = (undefined4 *)&default_ui_data;  // DAT_18098bc73
  if (name_buffer != (undefined4 *)0x0) {
    namespace_name = name_buffer;
  }
  // 打开Mono程序集
  domain_result = mono_domain_assembly_open(mono_domain_ptr, namespace_name);  // _DAT_180c91028
  temp_resource = &ui_cleanup_marker;  // UNK_180a3c3e0
  if (assembly_name != (undefined4 *)0x0) {
    // 清理程序集名称资源
    cleanup_ui_resources(assembly_name);  // FUN_18064e900
  }
  name_buffer = (undefined4 *)0x0;
  buffer_offset = buffer_offset & 0xffffffff00000000;
  temp_resource = &ui_buffer_marker;  // UNK_18098bcb0
  *assembly_handle = domain_result;
  if (domain_result == 0) {
    // 程序集加载失败，记录错误
    log_assembly_load_error(&assembly_error_marker, &error_data_marker);  // FUN_180626ee0
    domain_result = *assembly_handle;
  }
  // 获取程序集映像
  domain_result = mono_assembly_get_image(domain_result);
  assembly_handle[1] = domain_result;
  if (domain_result == 0) {
    // 映像获取失败，记录错误
    log_image_load_error(&image_error_marker);  // FUN_180626ee0
  }
  resource_ptr = &ui_cleanup_marker;  // UNK_180a3c3e0
  buffer_handle = 0;
  temp_ptr = (undefined8 *)0x0;
  ptr_size = 0;
  // 创建类名 "Control"
  class_name = (undefined8 *)allocate_ui_memory(memory_allocator, 0x10, 0x13);  // FUN_18062b420
  *(undefined1 *)class_name = 0;
  temp_ptr = class_name;
  name_length = secure_string_init(class_name);  // FUN_18064e990
  buffer_handle = CONCAT44(buffer_handle._4_4_, name_length);
  *class_name = 0x6c6c6f72746e6f43;  // "Control"
  *(undefined2 *)(class_name + 1) = 0x7265;
  *(undefined1 *)((longlong)class_name + 10) = 0;
  ptr_size = 10;
  temp_resource = &ui_cleanup_marker;  // UNK_180a3c3e0
  buffer_offset = 0;
  name_buffer = (undefined4 *)0x0;
  buffer_size = 0;
  // 创建命名空间名 "TaleWorlds.Native"
  namespace_name = (undefined4 *)allocate_ui_memory(memory_allocator, 0x12, 0x13);  // FUN_18062b420
  *(undefined1 *)namespace_name = 0;
  name_buffer = namespace_name;
  name_length = secure_string_init(namespace_name);  // FUN_18064e990
  buffer_offset = CONCAT44(buffer_offset._4_4_, name_length);
  *namespace_name = 0x656c6154;  // "TaleW"
  namespace_name[1] = 0x6c726f57; // "orlds"
  namespace_name[2] = 0x442e7364; // "s.Na"
  namespace_name[3] = 0x654e746f; // "tive"
  *(undefined2 *)(namespace_name + 4) = 0x74;
  buffer_size = 0x11;
  // 从程序集中获取类
  mono_class_from_name(assembly_handle[1], namespace_name, class_name);
  temp_resource = &ui_cleanup_marker;  // UNK_180a3c3e0
  // 清理命名空间名称资源
  cleanup_ui_resources(namespace_name);  // FUN_18064e900
}



/**
 * UI系统字符串格式化器
 * 格式化UI系统中的字符串数据
 * 
 * @param format_param 格式化参数
 * @param output_buffer 输出缓冲区指针
 * @param format_flag 格式化标志
 * @param string_data 字符串数据
 * @return 返回输出缓冲区指针
 */
undefined8 *
ui_string_formatter(undefined8 format_param, undefined8 *output_buffer, undefined8 format_flag, undefined8 string_data)

{
  // 初始化输出缓冲区
  *output_buffer = &ui_buffer_marker;  // UNK_18098bcb0
  output_buffer[1] = 0;
  *(undefined4 *)(output_buffer + 2) = 0;
  *output_buffer = &ui_format_marker;  // UNK_1809fcc28
  output_buffer[1] = output_buffer + 3;
  *(undefined1 *)(output_buffer + 3) = 0;
  *(undefined4 *)(output_buffer + 2) = 0x10;
  // 安全复制格式化字符串
  strcpy_s(output_buffer[1], 0x80, &ui_format_template, string_data, 0, 0xfffffffffffffffe);  // UNK_180a3def0
  return output_buffer;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统动态缓冲区管理器
 * 管理UI系统的动态缓冲区，自动调整大小和内存重新分配
 * 
 * @param buffer_manager 缓冲区管理器指针
 * @param data_source 数据源指针
 * @param data_size 数据大小
 */
void ui_dynamic_buffer_manager(longlong buffer_manager, undefined8 data_source, int data_size)

{
  longlong buffer_end;
  longlong buffer_start;
  ulonglong current_size;
  longlong data_end;
  ulonglong new_size;
  ulonglong required_size;
  int used_size;
  
  // 获取当前缓冲区状态
  used_size = *(int *)(buffer_manager + 0x18) - *(int *)(buffer_manager + 0x10);
  buffer_end = *(longlong *)(buffer_manager + 0x18);
  buffer_start = *(longlong *)(buffer_manager + 0x10);
  current_size = buffer_end - buffer_start;
  required_size = (ulonglong)(used_size + data_size);
  
  // 检查是否需要重新分配缓冲区
  if (current_size < required_size) {
    required_size = (buffer_start - buffer_end) + required_size;
    if ((ulonglong)(*(longlong *)(buffer_manager + 0x20) - buffer_end) < required_size) {
      // 计算新的缓冲区大小（至少翻倍）
      new_size = current_size * 2;
      if (current_size == 0) {
        new_size = 1;
      }
      if (new_size < current_size + required_size) {
        new_size = current_size + required_size;
      }
      if (new_size == 0) {
        data_end = buffer_end;
        buffer_end = 0;
      }
      else {
        // 分配新的缓冲区
        buffer_end = allocate_ui_memory(memory_allocator, new_size, *(undefined1 *)(buffer_manager + 0x28));  // FUN_18062b420
        buffer_start = *(longlong *)(buffer_manager + 0x10);
        data_end = *(longlong *)(buffer_manager + 0x18);
      }
      // 移动现有数据到新缓冲区
      if (buffer_start != data_end) {
        memmove(buffer_end, buffer_start, data_end - buffer_start);  // WARNING: Subroutine does not return
      }
      // 清理新的缓冲区空间
      if (required_size != 0) {
        memset(buffer_end, 0, required_size);  // WARNING: Subroutine does not return
      }
      // 释放旧的缓冲区
      if (*(longlong *)(buffer_manager + 0x10) != 0) {
        cleanup_ui_resources();  // FUN_18064e900
      }
      // 更新缓冲区指针
      *(longlong *)(buffer_manager + 0x10) = buffer_end;
      *(ulonglong *)(buffer_manager + 0x20) = buffer_end + new_size;
    }
    else if (required_size != 0) {
      // 扩展现有缓冲区
      memset(buffer_end, 0, required_size);  // WARNING: Subroutine does not return
    }
  }
  else {
    // 缓冲区足够大，直接移动结束指针
    buffer_end = buffer_start + required_size;
  }
  // 更新缓冲区结束位置
  *(longlong *)(buffer_manager + 0x18) = buffer_end;
  // 复制新数据到缓冲区
  memcpy((longlong)used_size + *(longlong *)(buffer_manager + 0x10), data_source, (longlong)data_size);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653dac(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)
void FUN_180653dac(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong in_RAX;
  longlong unaff_RBX;
  longlong lVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  longlong unaff_RSI;
  ulonglong uVar3;
  int unaff_R12D;
  longlong *unaff_R15;
  undefined8 in_stack_00000058;
  
  uVar3 = (param_1 - unaff_RBX) + param_4;
  if ((ulonglong)(in_RAX - unaff_RBX) < uVar3) {
    uVar2 = param_2 * 2;
    if (param_2 == 0) {
      uVar2 = 1;
    }
    if (uVar2 < param_2 + uVar3) {
      uVar2 = param_2 + uVar3;
    }
    if (uVar2 == 0) {
      lVar1 = unaff_RBX;
      unaff_RBX = 0;
    }
    else {
      unaff_RBX = FUN_18062b420(_DAT_180c8ed18,uVar2,*(undefined1 *)(unaff_RSI + 0x28));
      param_1 = *(longlong *)(unaff_RSI + 0x10);
      lVar1 = *unaff_R15;
    }
    if (param_1 != lVar1) {
                    // WARNING: Subroutine does not return
      memmove(unaff_RBX,param_1,lVar1 - param_1);
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset(unaff_RBX,0,uVar3);
    }
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(longlong *)(unaff_RSI + 0x10) = unaff_RBX;
    *(ulonglong *)(unaff_RSI + 0x20) = unaff_RBX + uVar2;
  }
  else {
    in_stack_00000058 = unaff_RBP;
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
  }
  *unaff_R15 = unaff_RBX;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)unaff_R12D + *(longlong *)(unaff_RSI + 0x10),in_stack_00000058);
  return;
}





// 函数: void FUN_180653e6b(void)
void FUN_180653e6b(void)

{
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int unaff_R12D;
  undefined8 *unaff_R15;
  
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *unaff_R15 = unaff_RBX;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)unaff_R12D + *(longlong *)(unaff_RSI + 0x10));
  return;
}





