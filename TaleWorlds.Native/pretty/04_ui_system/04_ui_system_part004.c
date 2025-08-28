#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part004.c - UI系统组件处理函数集合

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
  
  if (*(int *)(param_2 + 0x10) != 0) {
    puStack_98 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    uStack_80 = 3;
    auStackX_10[0] = 10;
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_180057980(param_2,&puStack_98,auStackX_10);
    }
    uVar9 = (longlong)puStack_90 - (longlong)puStack_98 >> 5;
    puVar15 = puStack_98;
    puVar13 = puStack_98;
    puVar5 = puStack_90;
    if ((int)uVar9 != 0) {
      uVar9 = uVar9 & 0xffffffff;
      do {
        puStack_58 = (undefined8 *)0x0;
        puStack_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        uStack_40 = 3;
        auStackX_10[0] = 0x40;
        uStackX_18 = uVar9;
        if (puVar15[1] != 0) {
          FUN_180057980(puVar15,&puStack_58,auStackX_10);
        }
        puVar6 = puStack_50;
        puVar5 = puStack_58;
        puVar13 = puStack_58;
        if (((longlong)puStack_50 - (longlong)puStack_58 & 0xffffffffffffffe0U) == 0x60) {
          FUN_180627ae0(&puStack_78,puStack_58);
          iVar7 = atoi(puVar5[5]);
          iVar8 = atoi(puVar5[9]);
          uStackX_20 = FUN_180650c20(&puStack_78);
          puVar13 = (undefined8 *)param_1[1];
          if (puVar13 < (undefined8 *)param_1[2]) {
            *puVar13 = uStackX_20;
            puVar13[1] = (longlong)iVar7;
            puVar13[2] = (longlong)iVar8;
            param_1[1] = param_1[1] + 0x18;
          }
          else {
            lVar14 = *param_1;
            lVar12 = ((longlong)puVar13 - lVar14) / 0x18;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_18065258b:
              puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x18,(char)param_1[3]);
              puVar13 = (undefined8 *)param_1[1];
              lVar14 = *param_1;
            }
            else {
              lVar12 = lVar12 * 2;
              if (lVar12 != 0) goto LAB_18065258b;
              puVar10 = (undefined8 *)0x0;
            }
            lVar11 = ((longlong)puVar13 - lVar14) / 0x18;
            puVar13 = puVar10;
            if (0 < lVar11) {
              do {
                puVar1 = (undefined4 *)((longlong)puVar13 + (lVar14 - (longlong)puVar10));
                uVar2 = puVar1[1];
                uVar3 = puVar1[2];
                uVar4 = puVar1[3];
                *(undefined4 *)puVar13 = *puVar1;
                *(undefined4 *)((longlong)puVar13 + 4) = uVar2;
                *(undefined4 *)(puVar13 + 1) = uVar3;
                *(undefined4 *)((longlong)puVar13 + 0xc) = uVar4;
                puVar13[2] = *(undefined8 *)
                              ((longlong)puVar13 + (lVar14 - (longlong)puVar10) + 0x10);
                lVar11 = lVar11 + -1;
                puVar13 = puVar13 + 3;
              } while (0 < lVar11);
            }
            *puVar13 = uStackX_20;
            puVar13[1] = (longlong)iVar7;
            puVar13[2] = (longlong)iVar8;
            if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *param_1 = (longlong)puVar10;
            param_1[1] = (longlong)(puVar13 + 3);
            param_1[2] = (longlong)(puVar10 + lVar12 * 3);
            uVar9 = uStackX_18;
          }
          puStack_78 = &UNK_180a3c3e0;
          if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_70 = 0;
          uStack_60 = 0;
          puStack_78 = &UNK_18098bcb0;
          for (puVar13 = puVar5; puVar13 != puVar6; puVar13 = puVar13 + 4) {
            (**(code **)*puVar13)(puVar13,0);
          }
        }
        else {
          for (; puVar13 != puVar6; puVar13 = puVar13 + 4) {
            (**(code **)*puVar13)(puVar13,0);
          }
        }
        if (puVar5 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar5);
        }
        puVar15 = puVar15 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      uStackX_18 = 0;
      puVar15 = puStack_98;
      puVar13 = puStack_98;
      puVar5 = puStack_90;
    }
    for (; puVar10 = puStack_90, puVar6 = puStack_98, puVar15 != puStack_90; puVar15 = puVar15 + 4)
    {
      puStack_98 = puVar13;
      puStack_90 = puVar5;
      (**(code **)*puVar15)(puVar15,0);
      puVar13 = puStack_98;
      puVar5 = puStack_90;
      puStack_90 = puVar10;
      puStack_98 = puVar6;
    }
    if (puStack_98 != (undefined8 *)0x0) {
      puStack_98 = puVar13;
      puStack_90 = puVar5;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806526f0(void)
void FUN_1806526f0(void)

{
  undefined1 auStack_2a8 [144];
  undefined8 uStack_218;
  undefined1 auStack_178 [288];
  ulonglong uStack_58;
  
  uStack_218 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
                    // WARNING: Subroutine does not return
  memset(auStack_178,0,0x118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180652b60(undefined8 param_1,longlong *param_2)
void FUN_180652b60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_de8 [184];
  undefined1 auStack_d30 [32];
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined1 auStack_848 [2048];
  ulonglong uStack_48;
  
  uStack_d10 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_de8;
  FUN_180057110();
  uStack_d08 = 0x180c96740;
  iVar1 = _Mtx_lock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  lVar2 = (param_2[1] - *param_2) / 6 + (param_2[1] - *param_2 >> 0x3f);
  if ((int)(lVar2 >> 2) != (int)(lVar2 >> 0x3f)) {
    FUN_180629090(auStack_d30);
                    // WARNING: Subroutine does not return
    memset(auStack_848,0,0x800);
  }
  iVar1 = _Mtx_unlock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_de8);
}



undefined8 *
FUN_180653220(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  longlong lVar3;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lVar4;
  
  lVar6 = 0;
  FUN_180627910(&puStack_38,&DAT_18098bc73,param_3,param_4,0,0xfffffffffffffffe);
  lVar4 = -1;
  do {
    lVar3 = lVar4 + 1;
    pcVar1 = (char *)(lVar4 + 0x180c8f021);
    lVar4 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 == 0) {
    uVar5 = param_1[1] - *param_1 >> 5;
    if ((int)uVar5 == 0) {
      FUN_180627910(param_2,&UNK_180a3dd38);
      puStack_38 = &UNK_180a3c3e0;
      if (lStack_30 == 0) {
        return param_2;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uVar5 = uVar5 & 0xffffffff;
    do {
      puVar2 = *(undefined **)(lVar6 + 8 + *param_1);
      puVar7 = &DAT_18098bc73;
      if (puVar2 != (undefined *)0x0) {
        puVar7 = puVar2;
      }
      FUN_180628040(&puStack_38,&UNK_1809fe62c,puVar7);
      lVar6 = lVar6 + 0x20;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  else {
    (**(code **)(puStack_38 + 0x10))(&puStack_38);
  }
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  *(undefined4 *)(param_2 + 2) = uStack_28;
  param_2[1] = lStack_30;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_1c;
  *(undefined4 *)(param_2 + 3) = uStack_20;
  return param_2;
}





// 函数: void FUN_1806533a0(longlong param_1)
void FUN_1806533a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {


// 函数: void FUN_1806533b4(longlong param_1)
void FUN_1806533b4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  uVar1 = (uint)lVar2;
  if (0x1fff < uVar1) {
    uVar1 = 0x1fff;
  }
                    // WARNING: Subroutine does not return
  memcpy(&DAT_180c8f020,param_1,(longlong)(int)uVar1);
}





// 函数: void FUN_18065340f(void)
void FUN_18065340f(void)

{
  code *pcVar1;
  
  FUN_1808fcdc8();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined8 *
FUN_180653420(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar3 = 0xfffffffffffffffe;
  uVar2 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    uVar1 = mono_string_to_utf8(param_2);
    FUN_180627910(auStack_28,uVar1,param_3,param_4,uVar2,uVar3);
    mono_free(uVar1);
    *param_1 = &UNK_18098bcb0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = &UNK_180a3c3e0;
    *(undefined4 *)(param_1 + 2) = uStack_18;
    param_1[1] = uStack_20;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_c;
    *(undefined4 *)(param_1 + 3) = uStack_10;
    return param_1;
  }
  uVar3 = FUN_180628ca0();
  FUN_180627ae0(param_1,uVar3);
  return param_1;
}





// 函数: void FUN_180653530(undefined8 param_1)
void FUN_180653530(undefined8 param_1)

{
  FUN_1806533a0();
  OutputDebugStringA(param_1);
  FUN_180626ee0(&UNK_180a3dd80);


// 函数: void FUN_180653670(longlong param_1,longlong param_2)
void FUN_180653670(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18062b420(_DAT_180c8ed18,param_1 * param_2,0x19);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_1 * param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806536d0(void)
void FUN_1806536d0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3,0xfffffffffffffffe);
  *puVar1 = 1;
  puVar1[1] = FUN_180653580;
  puVar1[2] = FUN_1806535c0;
  puVar1[3] = FUN_180653630;
  puVar1[4] = FUN_180653670;
  mono_set_allocator_vtable(puVar1);
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
  *(undefined1 *)puVar2 = 0;
  FUN_18064e990(puVar2);
  *puVar2 = 0x7372756e;
  puVar2[1] = 0x2d797265;
  puVar2[2] = 0x657a6973;
  puVar2[3] = 0x3931383d;
  *(undefined2 *)(puVar2 + 4) = 0x6b32;
  *(undefined1 *)((longlong)puVar2 + 0x12) = 0;
  puVar1 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar1 = 0;
  FUN_18064e990(puVar1);
  *puVar1 = 0x5f43475f4f4e4f4d;
  *(undefined4 *)(puVar1 + 1) = 0x41524150;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0x534d;
  *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
  SetEnvironmentVariableA(puVar1,puVar2);
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653940(void)
void FUN_180653940(void)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined *puStack_b8;
  undefined4 *puStack_b0;
  uint uStack_a8;
  ulonglong uStack_a0;
  undefined4 uStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_50;
  ulonglong uStack_30;
  
  plVar1 = _DAT_180c91020;
  uStack_50 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_98 = 0;
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  puStack_b0 = (undefined4 *)0x0;
  uStack_a8 = 0;
  FUN_1806277c0(&puStack_b8,0x15);
  puVar2 = puStack_b0;
  uVar7 = (ulonglong)uStack_a8;
  puVar6 = (undefined4 *)((longlong)puStack_b0 + uVar7);
  *puVar6 = 0x656c6154;
  puVar6[1] = 0x6c726f57;
  puVar6[2] = 0x442e7364;
  puVar6[3] = 0x654e746f;
  *(undefined4 *)((longlong)puStack_b0 + uVar7 + 0x10) = 0x6c642e74;
  *(undefined2 *)((longlong)puStack_b0 + uVar7 + 0x14) = 0x6c;
  uStack_a8 = 0x15;
  puVar6 = (undefined4 *)&DAT_18098bc73;
  if (puStack_b0 != (undefined4 *)0x0) {
    puVar6 = puStack_b0;
  }
  lVar4 = mono_domain_assembly_open(_DAT_180c91028,puVar6);
  puStack_b8 = &UNK_180a3c3e0;
  if (puVar2 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  puStack_b0 = (undefined4 *)0x0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  puStack_b8 = &UNK_18098bcb0;
  *plVar1 = lVar4;
  if (lVar4 == 0) {
    FUN_180626ee0(&UNK_180a3ddc0,&DAT_180a3dda8);
    lVar4 = *plVar1;
  }
  lVar4 = mono_assembly_get_image(lVar4);
  plVar1[1] = lVar4;
  if (lVar4 == 0) {
    FUN_180626ee0(&UNK_180a3deb8);
  }
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_88 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
  *puVar5 = 0x6c6c6f72746e6f43;
  *(undefined2 *)(puVar5 + 1) = 0x7265;
  *(undefined1 *)((longlong)puVar5 + 10) = 0;
  uStack_80 = 10;
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  puStack_b0 = (undefined4 *)0x0;
  uStack_a8 = 0;
  puVar6 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13);
  *(undefined1 *)puVar6 = 0;
  puStack_b0 = puVar6;
  uVar3 = FUN_18064e990(puVar6);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
  *puVar6 = 0x656c6154;
  puVar6[1] = 0x6c726f57;
  puVar6[2] = 0x442e7364;
  puVar6[3] = 0x654e746f;
  *(undefined2 *)(puVar6 + 4) = 0x74;
  uStack_a8 = 0x11;
  mono_class_from_name(plVar1[1],puVar6,puVar5);
  puStack_b8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar6);
}



undefined8 *
FUN_180653ce0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0x10;
  strcpy_s(param_2[1],0x80,&UNK_180a3def0,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653d60(longlong param_1,undefined8 param_2,int param_3)
void FUN_180653d60(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar3 = lVar1 - lVar2;
  uVar6 = (ulonglong)(iVar7 + param_3);
  if (uVar3 < uVar6) {
    uVar6 = (lVar2 - lVar1) + uVar6;
    if ((ulonglong)(*(longlong *)(param_1 + 0x20) - lVar1) < uVar6) {
      uVar5 = uVar3 * 2;
      if (uVar3 == 0) {
        uVar5 = 1;
      }
      if (uVar5 < uVar3 + uVar6) {
        uVar5 = uVar3 + uVar6;
      }
      if (uVar5 == 0) {
        lVar4 = lVar1;
        lVar1 = 0;
      }
      else {
        lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar5,*(undefined1 *)(param_1 + 0x28));
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x18);
      }
      if (lVar2 != lVar4) {
                    // WARNING: Subroutine does not return
        memmove(lVar1,lVar2,lVar4 - lVar2);
      }
      if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar1,0,uVar6);
      }
      if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(longlong *)(param_1 + 0x10) = lVar1;
      *(ulonglong *)(param_1 + 0x20) = lVar1 + uVar5;
    }
    else if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar1,0,uVar6);
    }
  }
  else {
    lVar1 = lVar2 + uVar6;
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)iVar7 + *(longlong *)(param_1 + 0x10),param_2,(longlong)param_3);
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





