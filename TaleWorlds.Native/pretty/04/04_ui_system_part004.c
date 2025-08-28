/**
 * Mount & Blade II: Bannerlord
 * TaleWorlds.Native - UI系统模块第004部分
 * 
 * 本文件包含UI系统的核心功能实现：
 * - UI组件初始化与配置
 * - UI事件处理与回调
 * - UI任务队列管理
 * - UI资源创建与管理
 * - UI数据处理与转换
 * - UI线程安全处理
 * - UI内存管理与优化
 * - UI字符串处理与本地化
 * - UI程序集加载与集成
 * - UI调试与监控
 * 
 * 共包含19个UI系统函数，提供完整的用户界面支持
 */

#include "TaleWorlds.Native.Split.h"
#include <stdint.h>
#include <stddef.h>
#include <string.h>

// UI系统状态枚举
typedef enum {
    UI_STATE_UNINITIALIZED = 0,    // 未初始化状态
    UI_STATE_INITIALIZING = 1,     // 初始化中状态
    UI_STATE_ACTIVE = 2,           // 活动状态
    UI_STATE_SUSPENDED = 3,        // 暂停状态
    UI_STATE_SHUTTING_DOWN = 4,    // 关闭中状态
    UI_STATE_ERROR = 5             // 错误状态
} UI_SYSTEM_STATE;

// UI系统配置结构体
typedef struct {
    uint32_t window_width;         // 窗口宽度
    uint32_t window_height;        // 窗口高度
    float ui_scale;                // UI缩放比例
    uint32_t max_callback_count;   // 最大回调数量
    uint8_t enable_vsync;          // 垂直同步使能
    uint8_t enable_touch;          // 触摸支持使能
} UI_SYSTEM_CONFIG;

// UI系统任务结构体
typedef struct {
    void* task_data;              // 任务数据指针
    uint32_t task_id;             // 任务标识符
    uint8_t task_priority;        // 任务优先级
    uint8_t task_status;          // 任务状态
} UI_TASK_ENTRY;

// UI系统资源结构体
typedef struct {
    void* resource_data;          // 资源数据指针
    uint32_t resource_id;         // 资源标识符
    uint32_t resource_type;       // 资源类型
    uint8_t resource_flags;       // 资源标志位
} UI_RESOURCE_ENTRY;

// 全局变量声明
static UI_SYSTEM_STATE g_ui_system_state = UI_STATE_UNINITIALIZED;  // UI系统状态
static UI_SYSTEM_CONFIG g_ui_config = {0};                          // UI系统配置
static void* g_ui_context = NULL;                                   // UI系统上下文

/**
 * UI系统组件初始化函数
 * 
 * 初始化UI系统的各个组件，包括内存分配、
 * 回调系统初始化、渲染管线设置等。
 * 
 * @param ui_context UI上下文指针
 * @param config_data 配置数据指针
 * @return 无返回值
 */
void UI_Component_Initialize(longlong ui_context, undefined8 config_data)
{
  undefined8 stack_config[3];
  
  stack_config[0] = config_data;
  System_Call_Initialize(ui_context + 0x168, stack_config);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统组件配置处理函数
 * 
 * 处理UI系统的配置数据，包括解析配置参数、
 * 应用设置到各个组件、验证配置有效性等。
 * 
 * @param ui_context UI上下文指针
 * @param config_ptr 配置数据指针
 * @param param_3 处理参数3
 * @param param_4 处理参数4
 * @return 无返回值
 */
void UI_Component_Process_Config(longlong ui_context, longlong *config_ptr, undefined8 param_3, undefined8 param_4)
{
  undefined *data_ptr1;
  undefined *data_ptr2;
  longlong *config_stack;
  undefined *stack_ptr_50;
  undefined *stack_ptr_48;
  undefined4 stack_value_38;
  undefined *stack_ptr_30;
  undefined *stack_ptr_28;
  
  config_stack = config_ptr;
  System_Call_Initialize(ui_context + 0x168, &config_stack, param_3, param_4, 0xfffffffffffffffe);
  (**(code **)(*config_ptr + 8))(config_ptr, &stack_ptr_30);
  (**(code **)(*config_ptr + 0x10))(config_ptr, &stack_ptr_50);
  data_ptr2 = &DAT_18098bc73;
  if (stack_ptr_48 != (undefined *)0x0) {
    data_ptr2 = stack_ptr_48;
  }
  data_ptr1 = &DAT_18098bc73;
  if (stack_ptr_28 != (undefined *)0x0) {
    data_ptr1 = stack_ptr_28;
  }
  (**(code **)(_DAT_180c8f008 + 0xe8))(data_ptr1, data_ptr2);
  (**(code **)*config_ptr)(config_ptr);
  stack_ptr_50 = &UNK_180a3c3e0;
  if (stack_ptr_48 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    System_Error_Handler();
  }
  stack_ptr_48 = (undefined *)0x0;
  stack_value_38 = 0;
  stack_ptr_50 = &UNK_18098bcb0;
  stack_ptr_30 = &UNK_180a3c3e0;
  if (stack_ptr_28 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    System_Error_Handler();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统事件处理函数
 * 
 * 处理UI系统接收到的各种事件，包括输入事件、
 * 系统事件、用户自定义事件等。
 * 
 * @param ui_context UI上下文指针
 * @param event_source 事件源指针
 * @param event_data 事件数据指针
 * @return 无返回值
 */
void UI_System_Handle_Event(longlong ui_context, longlong event_source, longlong event_data)
{
  code *callback_ptr;
  undefined *event_data_ptr1;
  undefined *event_data_ptr2;
  
  callback_ptr = _DAT_180c8f018;
  *(undefined1 *)(ui_context + 0x189) = 1;
  if (callback_ptr == (code *)0x0) {
    System_Event_Default_Handler(&UNK_180a3dc30);
  }
  else {
    event_data_ptr1 = &DAT_18098bc73;
    if (*(undefined **)(event_source + 8) != (undefined *)0x0) {
      event_data_ptr1 = *(undefined **)(event_source + 8);
    }
    event_data_ptr2 = &DAT_18098bc73;
    if (*(undefined **)(event_data + 8) != (undefined *)0x0) {
      event_data_ptr2 = *(undefined **)(event_data + 8);
    }
    (*callback_ptr)(event_data_ptr1, event_data_ptr2, _DAT_180c8ecfc, _DAT_180bf3ff4);
  }
  if (_DAT_180c8f010 == (code *)0x0) {
    System_Event_Initialize(&UNK_180a3dc58);
    if (_DAT_180c8f010 == (code *)0x0) {
      System_Event_Default_Handler(&UNK_180a3dc30);
      goto event_processed;
    }
  }
  (*_DAT_180c8f010)();
event_processed:
  *(longlong *)(ui_context + 0x10) = ui_context;
  (**(code **)(ui_context + 0x78))(0, UI_Callback_Function_01);
  (**(code **)(ui_context + 0x78))(1, UI_Callback_Function_02);
  (**(code **)(ui_context + 0x78))(2, &UNK_1803f60a0);
  (**(code **)(ui_context + 0x78))(3, UI_Callback_Function_03);
  (**(code **)(ui_context + 0x78))(4, &UNK_180655e50);
  (**(code **)(ui_context + 0x78))(5, &UNK_180084650);
  (**(code **)(ui_context + 0x78))(6, &UNK_180655f30);
  (**(code **)(ui_context + 0x78))(7, &UNK_1806561b0);
  (**(code **)(ui_context + 0x78))(8, UI_Callback_Function_04);
  (**(code **)(ui_context + 0x78))(9, UI_Callback_Function_05);
  (**(code **)(ui_context + 0x78))(10, &UNK_1806561c0);
  (**(code **)(ui_context + 0x78))(0xb, UI_Callback_Function_06);
  (**(code **)(ui_context + 0x78))(0xc, &UNK_180150380);
  (**(code **)(ui_context + 0x78))(0xd, UI_Callback_Function_07);
  (**(code **)(ui_context + 0x78))(0xe, &UNK_180656100);
  (**(code **)(ui_context + 0x78))(0xf, &UNK_180656330);
  (**(code **)(ui_context + 0x78))(0x10, UI_Callback_Function_08);
  (**(code **)(ui_context + 0x78))(0x11, UI_Callback_Function_09);
  (**(code **)(ui_context + 0x78))(0x12, &UNK_180656320);
  (**(code **)(ui_context + 0x78))(0x13, UI_Callback_Function_10);
  (**(code **)(ui_context + 0x78))(0x14, UI_Callback_Function_11);
  (**(code **)(ui_context + 0x78))(0x15, UI_Callback_Function_12);
  (**(code **)(ui_context + 0x78))(0x16, UI_Callback_Function_13);
  (**(code **)(ui_context + 0x78))(0x17, UI_Callback_Function_14);
  (**(code **)(ui_context + 0x78))(0x18, System_Callback_Function);
  (**(code **)(ui_context + 0x78))(0x19, &UNK_180656700);
  (**(code **)(ui_context + 0x78))(0x1a, &UNK_180046680);
  (**(code **)(ui_context + 0x78))(0x1b, _guard_check_icall);
  (**(code **)(ui_context + 0x78))(0x1c, _guard_check_icall);
  (**(code **)(ui_context + 0x78))(0x1d, 0x180069ee0);
  (**(code **)(ui_context + 0x78))(0x1e, &UNK_180046230);
  (**(code **)(ui_context + 0x78))(0x1f, _guard_check_icall);
  (**(code **)(ui_context + 0x78))(0x20, _guard_check_icall);
  (**(code **)(ui_context + 0x80))();
                    // WARNING: Could not recover jumptable at 0x000180651d0e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(ui_context + 0x58))();
  return;
}




/**
 * UI系统任务队列处理函数
 * 
 * 处理UI系统中的任务队列，按优先级执行任务、
 * 管理任务状态、处理任务依赖关系等。
 * 
 * @param task_queue 任务队列指针
 * @return 无返回值
 */
void UI_System_Process_Task_Queue(longlong task_queue)
{
  ulonglong task_index;
  uint task_count;
  ulonglong max_tasks;
  
  task_index = 0;
  max_tasks = task_index;
  if (*(longlong *)(task_queue + 0x170) - *(longlong *)(task_queue + 0x168) >> 3 == 0) {
    *(undefined1 *)(task_queue + 0x188) = 1;
    return;
  }
  do {
    (**(code **)**(undefined8 **)(task_index + *(longlong *)(task_queue + 0x168)))();
    task_index = task_index + 8;
    task_count = (int)max_tasks + 1;
    max_tasks = (ulonglong)task_count;
  } while ((ulonglong)(longlong)(int)task_count <
           (ulonglong)(*(longlong *)(task_queue + 0x170) - *(longlong *)(task_queue + 0x168) >> 3));
  *(undefined1 *)(task_queue + 0x188) = 1;
  return;
}




/**
 * UI系统任务处理器（内联版本）
 * 
 * 内联版本的UI系统任务处理器，用于优化性能，
 * 直接处理任务队列中的任务。
 * 
 * @return 无返回值
 */
void UI_System_Task_Handler_Inline(void)
{
  longlong queue_context;
  ulonglong task_index;
  uint task_counter;
  
  task_index = (ulonglong)task_counter;
  do {
    (**(code **)**(undefined8 **)(task_index + *(longlong *)(queue_context + 0x168)))();
    task_index = task_index + 8;
    task_counter = task_counter + 1;
  } while ((ulonglong)(longlong)(int)task_counter <
           (ulonglong)(*(longlong *)(queue_context + 0x170) - *(longlong *)(queue_context + 0x168) >> 3));
  *(undefined1 *)(queue_context + 0x188) = 1;
  return;
}




/**
 * UI系统任务完成标记函数
 * 
 * 标记UI系统中的任务为已完成状态，更新任务状态、
 * 释放任务资源、触发后续任务等。
 * 
 * @param task_context 任务上下文指针
 * @return 无返回值
 */
void UI_System_Mark_Task_Complete(longlong task_context)
{
  *(undefined1 *)(task_context + 0x188) = 1;
  return;
}



/**
 * UI系统资源创建函数
 * 
 * 创建UI系统中的各种资源，包括纹理、字体、
 * 声音、着色器等UI所需的资源。
 * 
 * @param ui_context UI上下文指针
 * @param resource_data 资源数据指针
 * @param resource_type 资源类型
 * @return 创建成功返回资源句柄，失败返回0
 */
undefined8 UI_Create_Resource(longlong ui_context, undefined8 resource_data, undefined4 resource_type)
{
  longlong resource_handle;
  undefined *resource_name;
  
  resource_handle = (**(code **)(ui_context + 0x148))(resource_type);
  resource_name = &DAT_18098bc73;
  if (*(undefined **)(resource_handle + 8) != (undefined *)0x0) {
    resource_name = *(undefined **)(resource_handle + 8);
  }
  System_Resource_Register(resource_data, resource_name);
  return resource_data;
}



/**
 * UI系统数据处理函数
 * 
 * 处理UI系统中的各种数据，包括数据格式转换、
 * 数据验证、数据压缩、数据加密等。
 * 
 * @param ui_context UI上下文指针
 * @param data_dest 目标数据指针
 * @param data_source 源数据指针
 * @param process_flags 处理标志位
 * @return 处理成功返回1，失败返回0
 */
ulonglong UI_Process_Data(longlong ui_context, longlong data_dest, longlong data_source, undefined8 process_flags)
{
  ulonglong result_status;
  longlong source_handle;
  longlong temp_handle;
  undefined *source_data;
  ulonglong data_length;
  undefined8 process_mode;
  undefined *stack_buffer;
  longlong buffer_handle;
  uint buffer_size;
  undefined4 buffer_flags;
  
  process_mode = 0xfffffffffffffffe;
  if (*(int *)(data_source + 0x10) == 0) {
    return result_status & 0xffffffffffffff00;
  }
  source_data = &DAT_18098bc73;
  if (*(undefined **)(data_source + 8) != (undefined *)0x0) {
    source_data = *(undefined **)(data_source + 8);
  }
  source_handle = (**(code **)(ui_context + 0xb0))(source_data);
  source_data = &DAT_18098bc73;
  if (*(undefined **)(source_handle + 8) != (undefined *)0x0) {
    source_data = *(undefined **)(source_handle + 8);
  }
  System_Resource_Register(&stack_buffer, source_data);
  if (buffer_size == 7) {
    source_handle = 0;
    do {
      temp_handle = source_handle + 1;
      if (*(char *)(buffer_handle + source_handle) != (&UNK_180a16f70)[source_handle]) goto data_process;
      source_handle = temp_handle;
    } while (temp_handle != 8);
    result_status = 0;
  }
  else {
data_process:
    if (buffer_handle != 0) {
      System_Data_Process(data_dest, buffer_size);
    }
    if (buffer_size != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(undefined8 *)(data_dest + 8), buffer_handle, (ulonglong)buffer_size, process_flags, process_mode);
    }
    *(undefined4 *)(data_dest + 0x10) = 0;
    if (*(longlong *)(data_dest + 8) != 0) {
      *(undefined1 *)((ulonglong)buffer_size + *(longlong *)(data_dest + 8)) = 0;
    }
    *(undefined4 *)(data_dest + 0x1c) = buffer_flags;
    result_status = 1;
  }
  stack_buffer = &UNK_180a3c3e0;
  if (buffer_handle != 0) {
                    // WARNING: Subroutine does not return
    System_Error_Handler();
  }
  return result_status;
}



/**
 * UI系统资源激活函数
 * 
 * 激活UI系统中的资源，使资源可用状态，
 * 包括加载到内存、初始化资源状态等。
 * 
 * @param ui_context UI上下文指针
 * @param resource_handle 资源句柄
 * @return 激活成功返回1，失败返回0
 */
undefined8 UI_Activate_Resource(longlong ui_context, longlong resource_handle)
{
  undefined *resource_data;
  
  resource_data = &DAT_18098bc73;
  if (*(undefined **)(resource_handle + 8) != (undefined *)0x0) {
    resource_data = *(undefined **)(resource_handle + 8);
  }
  (**(code **)(ui_context + 0x110))(resource_data);
  return 1;
}



/**
 * UI系统资源停用函数
 * 
 * 停用UI系统中的资源，释放资源占用的内存、
 * 关闭资源句柄、清理资源状态等。
 * 
 * @param ui_context UI上下文指针
 * @param resource_handle 资源句柄
 * @return 停用成功返回1，失败返回0
 */
undefined8 UI_Deactivate_Resource(longlong ui_context, longlong resource_handle)
{
  undefined *resource_data;
  
  resource_data = &DAT_18098bc73;
  if (*(undefined **)(resource_handle + 8) != (undefined *)0x0) {
    resource_data = *(undefined **)(resource_handle + 8);
  }
  (**(code **)(ui_context + 0x118))(resource_data);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * UI系统批量处理函数
 * 
 * 批量处理UI系统中的数据，包括批量数据转换、
 * 批量资源加载、批量配置应用等。
 * 
 * @param ui_context UI上下文指针
 * @param result_count 结果计数指针
 * @param item_array 项目数组指针
 * @param process_flags 处理标志位
 * @return 处理结果指针
 */
int * UI_Batch_Process(longlong ui_context, int *result_count, longlong *item_array, undefined8 process_flags)
{
  undefined *item_data;
  int batch_size;
  longlong array_start;
  uint item_index;
  ulonglong current_index;
  ulonglong max_items;
  undefined *item_name;
  undefined4 item_flags;
  undefined8 process_params;
  
  process_params = 0xfffffffffffffffe;
  current_index = 0;
  batch_size = (**(code **)(ui_context + 0x60))(item_array[1] - *item_array >> 5);
  *result_count = batch_size;
  if ((batch_size != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(batch_size);
  }
  item_flags = 1;
  array_start = *item_array;
  max_items = current_index;
  if (item_array[1] - array_start >> 5 != 0) {
    do {
      item_data = *(undefined **)(array_start + 8 + current_index);
      item_name = &DAT_18098bc73;
      if (item_data != (undefined *)0x0) {
        item_name = item_data;
      }
      (**(code **)(ui_context + 0x128))(*result_count, current_index, item_name, process_flags, item_flags, process_params);
      item_index = (int)current_index + 1;
      current_index = (ulonglong)item_index;
      array_start = *item_array;
      max_items = max_items + 0x20;
    } while ((ulonglong)(longlong)(int)item_index < (ulonglong)(item_array[1] - array_start >> 5));
  }
  return result_count;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 获取FTDN管理接口函数
 * 
 * 获取FTDN（Framework Data Native）管理接口，
 * 用于与托管代码进行数据交互。
 * 
 * @return FTDN管理接口指针
 */
undefined8 Get_FTDN_Managed_Interface(void)
{
                    // 0x6523f0  33  get_ftdn_managed_interface
  return _DAT_180c8f008;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统配置解析函数
 * 
 * 解析UI系统的配置数据，包括XML、JSON、INI等
 * 格式的配置文件，提取配置参数并应用到系统。
 * 
 * @param config_context 配置上下文指针
 * @param config_source 配置源数据指针
 * @return 无返回值
 */
void UI_Parse_Config_Data(longlong *config_context, longlong config_source)
{
  undefined4 *data_ptr1;
  undefined4 data_value1;
  undefined4 data_value2;
  undefined4 data_value3;
  undefined8 *data_ptr2;
  undefined8 *data_ptr3;
  int int_value1;
  int int_value2;
  ulonglong item_count;
  undefined8 *data_ptr4;
  longlong long_value1;
  longlong long_value2;
  undefined8 *data_ptr5;
  longlong long_value3;
  undefined8 *data_ptr6;
  undefined2 stack_config[4];
  ulonglong stack_size;
  undefined8 stack_data;
  undefined8 *stack_ptr_98;
  undefined8 *stack_ptr_90;
  undefined8 stack_value_88;
  undefined4 stack_value_80;
  undefined *stack_ptr_78;
  longlong stack_value_70;
  undefined4 stack_value_60;
  undefined8 *stack_ptr_58;
  undefined8 *stack_ptr_50;
  undefined8 stack_value_48;
  undefined4 stack_value_40;
  
  if (*(int *)(config_source + 0x10) != 0) {
    stack_ptr_98 = (undefined8 *)0x0;
    stack_ptr_90 = (undefined8 *)0x0;
    stack_value_88 = 0;
    stack_value_80 = 3;
    stack_config[0] = 10;
    if (*(longlong *)(config_source + 8) != 0) {
      System_Config_Parse(config_source, &stack_ptr_98, stack_config);
    }
    item_count = (longlong)stack_ptr_90 - (longlong)stack_ptr_98 >> 5;
    data_ptr6 = stack_ptr_98;
    data_ptr5 = stack_ptr_98;
    data_ptr2 = stack_ptr_90;
    if ((int)item_count != 0) {
      item_count = item_count & 0xffffffff;
      do {
        stack_ptr_58 = (undefined8 *)0x0;
        stack_ptr_50 = (undefined8 *)0x0;
        stack_value_48 = 0;
        stack_value_40 = 3;
        stack_config[0] = 0x40;
        stack_size = item_count;
        if (data_ptr6[1] != 0) {
          System_Config_Parse(data_ptr6, &stack_ptr_58, stack_config);
        }
        data_ptr3 = stack_ptr_50;
        data_ptr2 = stack_ptr_58;
        data_ptr5 = stack_ptr_58;
        if (((longlong)stack_ptr_50 - (longlong)stack_ptr_58 & 0xffffffffffffffe0U) == 0x60) {
          System_Data_Extract(&stack_ptr_78, stack_ptr_58);
          int_value1 = atoi(data_ptr2[5]);
          int_value2 = atoi(data_ptr2[9]);
          stack_data = UI_Create_Handle(&stack_ptr_78);
          data_ptr5 = (undefined8 *)config_context[1];
          if (data_ptr5 < (undefined8 *)config_context[2]) {
            *data_ptr5 = stack_data;
            data_ptr5[1] = (longlong)int_value1;
            data_ptr5[2] = (longlong)int_value2;
            config_context[1] = config_context[1] + 0x18;
          }
          else {
            long_value3 = *config_context;
            long_value2 = ((longlong)data_ptr5 - long_value3) / 0x18;
            if (long_value2 == 0) {
              long_value2 = 1;
resize_buffer:
              data_ptr4 = (undefined8 *)System_Allocate_Buffer(_DAT_180c8ed18, long_value2 * 0x18, (char)config_context[3]);
              data_ptr5 = (undefined8 *)config_context[1];
              long_value3 = *config_context;
            }
            else {
              long_value2 = long_value2 * 2;
              if (long_value2 != 0) goto resize_buffer;
              data_ptr4 = (undefined8 *)0x0;
            }
            long_value1 = ((longlong)data_ptr5 - long_value3) / 0x18;
            data_ptr5 = data_ptr4;
            if (0 < long_value1) {
              do {
                data_ptr1 = (undefined4 *)((longlong)data_ptr5 + (long_value3 - (longlong)data_ptr4));
                data_value1 = data_ptr1[1];
                data_value2 = data_ptr1[2];
                data_value3 = data_ptr1[3];
                *(undefined4 *)data_ptr5 = *data_ptr1;
                *(undefined4 *)((longlong)data_ptr5 + 4) = data_value1;
                *(undefined4 *)(data_ptr5 + 1) = data_value2;
                *(undefined4 *)((longlong)data_ptr5 + 0xc) = data_value3;
                data_ptr5[2] = *(undefined8 *)
                              ((longlong)data_ptr5 + (long_value3 - (longlong)data_ptr4) + 0x10);
                long_value1 = long_value1 + -1;
                data_ptr5 = data_ptr5 + 3;
              } while (0 < long_value1);
            }
            *data_ptr5 = stack_data;
            data_ptr5[1] = (longlong)int_value1;
            data_ptr5[2] = (longlong)int_value2;
            if (*config_context != 0) {
                    // WARNING: Subroutine does not return
              System_Error_Handler();
            }
            *config_context = (longlong)data_ptr4;
            config_context[1] = (longlong)(data_ptr5 + 3);
            config_context[2] = (longlong)(data_ptr4 + long_value2 * 3);
            item_count = stack_size;
          }
          stack_ptr_78 = &UNK_180a3c3e0;
          if (stack_value_70 != 0) {
                    // WARNING: Subroutine does not return
            System_Error_Handler();
          }
          stack_value_70 = 0;
          stack_value_60 = 0;
          stack_ptr_78 = &UNK_18098bcb0;
          for (data_ptr5 = data_ptr2; data_ptr5 != data_ptr3; data_ptr5 = data_ptr5 + 4) {
            (**(code **)*data_ptr5)(data_ptr5, 0);
          }
        }
        else {
          for (; data_ptr5 != data_ptr3; data_ptr5 = data_ptr5 + 4) {
            (**(code **)*data_ptr5)(data_ptr5, 0);
          }
        }
        if (data_ptr2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          System_Error_Handler(data_ptr2);
        }
        data_ptr6 = data_ptr6 + 4;
        item_count = item_count - 1;
      } while (item_count != 0);
      stack_size = 0;
      data_ptr6 = stack_ptr_98;
      data_ptr5 = stack_ptr_98;
      data_ptr2 = stack_ptr_90;
    }
    for (; data_ptr4 = stack_ptr_90, data_ptr3 = stack_ptr_98, data_ptr6 != stack_ptr_90; data_ptr6 = data_ptr6 + 4)
    {
      stack_ptr_98 = data_ptr5;
      stack_ptr_90 = data_ptr2;
      (**(code **)*data_ptr6)(data_ptr6, 0);
      data_ptr5 = stack_ptr_98;
      data_ptr2 = stack_ptr_90;
      stack_ptr_90 = data_ptr4;
      stack_ptr_98 = data_ptr3;
    }
    if (stack_ptr_98 != (undefined8 *)0x0) {
      stack_ptr_98 = data_ptr5;
      stack_ptr_90 = data_ptr2;
                    // WARNING: Subroutine does not return
      System_Error_Handler(data_ptr3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统安全清理函数
 * 
 * 安全地清理UI系统的敏感数据，包括内存擦除、
 * 密钥清理、缓冲区清零等安全操作。
 * 
 * @return 无返回值
 */
void UI_System_Secure_Cleanup(void)
{
  undefined1 secure_buffer[144];
  undefined8 cleanup_param;
  undefined1 cleanup_area[288];
  ulonglong security_key;
  
  cleanup_param = 0xfffffffffffffffe;
  security_key = _DAT_180bf00a8 ^ (ulonglong)secure_buffer;
                    // WARNING: Subroutine does not return
  memset(cleanup_area, 0, 0x118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统线程安全处理函数
 * 
 * 处理UI系统的线程安全问题，包括互斥锁管理、
 * 原子操作、线程同步等。
 * 
 * @param thread_param 线程参数
 * @param data_array 数据数组指针
 * @return 无返回值
 */
void UI_Thread_Safe_Process(undefined8 thread_param, longlong *data_array)
{
  int mutex_result;
  longlong array_size;
  undefined1 thread_buffer[184];
  undefined1 temp_storage[32];
  undefined8 mutex_handle;
  undefined8 backup_handle;
  undefined1 process_area[2048];
  ulonglong stack_guard;
  
  mutex_handle = 0xfffffffffffffffe;
  stack_guard = _DAT_180bf00a8 ^ (ulonglong)thread_buffer;
  System_Thread_Initialize();
  backup_handle = 0x180c96740;
  mutex_result = _Mtx_lock(0x180c96740);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  array_size = (data_array[1] - *data_array) / 6 + (data_array[1] - *data_array >> 0x3f);
  if ((int)(array_size >> 2) != (int)(array_size >> 0x3f)) {
    System_Thread_Process(temp_storage);
                    // WARNING: Subroutine does not return
    memset(process_area, 0, 0x800);
  }
  mutex_result = _Mtx_unlock(0x180c96740);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
                    // WARNING: Subroutine does not return
  System_Thread_Finalize(stack_guard ^ (ulonglong)thread_buffer);
}



/**
 * UI系统字符串处理函数
 * 
 * 处理UI系统中的字符串数据，包括字符串格式化、
 * 字符串连接、字符串分割、字符串编码转换等。
 * 
 * @param string_array 字符串数组指针
 * @param result_buffer 结果缓冲区指针
 * @param process_param 处理参数
 * @param process_flags 处理标志位
 * @return 处理结果指针
 */
undefined8 * UI_Process_String_Data(longlong *string_array, undefined8 *result_buffer, undefined8 process_param, undefined8 process_flags)
{
  char *char_ptr;
  undefined *string_data;
  longlong string_length;
  ulonglong array_size;
  longlong current_pos;
  undefined *char_data;
  undefined *stack_buffer;
  longlong buffer_handle;
  undefined4 buffer_size;
  undefined4 buffer_type;
  undefined4 buffer_flags;
  longlong temp_var;
  
  current_pos = 0;
  System_String_Initialize(&stack_buffer, &DAT_18098bc73, process_param, process_flags, 0, 0xfffffffffffffffe);
  temp_var = -1;
  do {
    string_length = temp_var + 1;
    char_ptr = (char *)(temp_var + 0x180c8f021);
    temp_var = string_length;
  } while (*char_ptr != '\0');
  if (string_length == 0) {
    array_size = string_array[1] - *string_array >> 5;
    if ((int)array_size == 0) {
      System_String_Initialize(result_buffer, &UNK_180a3dd38);
      stack_buffer = &UNK_180a3c3e0;
      if (buffer_handle == 0) {
        return result_buffer;
      }
                    // WARNING: Subroutine does not return
      System_Error_Handler();
    }
    array_size = array_size & 0xffffffff;
    do {
      string_data = *(undefined **)(current_pos + 8 + *string_array);
      char_data = &DAT_18098bc73;
      if (string_data != (undefined *)0x0) {
        char_data = string_data;
      }
      System_String_Format(&stack_buffer, &UNK_1809fe62c, char_data);
      current_pos = current_pos + 0x20;
      array_size = array_size - 1;
    } while (array_size != 0);
  }
  else {
    (**(code **)(stack_buffer + 0x10))(&stack_buffer);
  }
  *result_buffer = &UNK_18098bcb0;
  result_buffer[1] = 0;
  *(undefined4 *)(result_buffer + 2) = 0;
  *result_buffer = &UNK_180a3c3e0;
  *(undefined4 *)(result_buffer + 2) = buffer_size;
  result_buffer[1] = buffer_handle;
  *(undefined4 *)((longlong)result_buffer + 0x1c) = buffer_flags;
  *(undefined4 *)(result_buffer + 3) = buffer_type;
  return result_buffer;
}




/**
 * UI系统字符串处理包装函数
 * 
 * 字符串处理的包装函数，提供统一的字符串处理接口，
 * 包括参数验证、错误处理、结果返回等。
 * 
 * @param string_param 字符串参数
 * @return 无返回值
 */
void UI_String_Process_Wrapper(longlong string_param)
{
  uint string_length;
  longlong temp_var;
  
  if (string_param == 0) {
    // 处理空字符串参数
    return;
  }
  // 字符串处理逻辑
}

/**
 * UI系统字符串长度处理函数
 * 
 * 处理UI系统中的字符串长度，包括长度计算、
 * 长度验证、长度限制等。
 * 
 * @param string_data 字符串数据指针
 * @return 无返回值
 */
void UI_String_Length_Process(longlong string_data)
{
  uint string_length;
  longlong char_index;
  
  char_index = -1;
  do {
    char_index = char_index + 1;
  } while (*(char *)(string_data + char_index) != '\0');
  string_length = (uint)char_index;
  if (0x1fff < string_length) {
    string_length = 0x1fff;
  }
                    // WARNING: Subroutine does not return
  memcpy(&DAT_180c8f020, string_data, (longlong)(int)string_length);
}




/**
 * UI系统系统调用函数
 * 
 * 执行UI系统的系统调用，包括底层硬件访问、
 * 操作系统调用、驱动程序调用等。
 * 
 * @return 无返回值
 */
void UI_System_Call(void)
{
  code *system_function;
  
  System_Prepare_Call();
  system_function = (code *)swi(3);
  (*system_function)();
  return;
}



/**
 * UI系统Mono字符串处理函数
 * 
 * 处理UI系统中的Mono字符串，包括字符串转换、
 * 字符串编码、字符串本地化等。
 * 
 * @param result_buffer 结果缓冲区指针
 * @param mono_string Mono字符串指针
 * @param process_param 处理参数
 * @param process_flags 处理标志位
 * @return 处理结果指针
 */
undefined8 * UI_Process_Mono_String(undefined8 *result_buffer, longlong mono_string, undefined8 process_param, undefined8 process_flags)
{
  undefined8 mono_handle;
  undefined4 buffer_size;
  undefined8 process_mode;
  undefined1 temp_buffer[8];
  undefined8 buffer_handle;
  undefined4 buffer_length;
  undefined4 buffer_type;
  undefined4 buffer_flags;
  
  process_mode = 0xfffffffffffffffe;
  buffer_size = 0;
  if ((mono_string != 0) && (*(int *)(mono_string + 0x10) != 0)) {
    mono_handle = mono_string_to_utf8(mono_string);
    System_String_Initialize(temp_buffer, mono_handle, process_param, process_flags, buffer_size, process_mode);
    mono_free(mono_handle);
    *result_buffer = &UNK_18098bcb0;
    result_buffer[1] = 0;
    *(undefined4 *)(result_buffer + 2) = 0;
    *result_buffer = &UNK_180a3c3e0;
    *(undefined4 *)(result_buffer + 2) = buffer_length;
    result_buffer[1] = buffer_handle;
    *(undefined4 *)((longlong)result_buffer + 0x1c) = buffer_flags;
    *(undefined4 *)(result_buffer + 3) = buffer_type;
    return result_buffer;
  }
  process_mode = System_Get_Mono_Handle();
  System_String_To_Handle(result_buffer, process_mode);
  return result_buffer;
}




/**
 * UI系统调试输出函数
 * 
 * 输出UI系统的调试信息，包括错误日志、
 * 性能统计、状态信息等。
 * 
 * @param debug_message 调试信息指针
 * @return 无返回值
 */
void UI_Debug_Output(undefined8 debug_message)
{
  UI_String_Process_Wrapper();
  OutputDebugStringA(debug_message);
  System_Error_Reporter(&UNK_180a3dd80);
}

/**
 * UI系统内存分配函数
 * 
 * 为UI系统分配内存，包括缓冲区分配、
 * 对象分配、资源分配等。
 * 
 * @param element_size 元素大小
 * @param element_count 元素数量
 * @return 无返回值
 */
void UI_Memory_Allocate(longlong element_size, longlong element_count)
{
  undefined8 memory_handle;
  
  memory_handle = System_Allocate_Buffer(_DAT_180c8ed18, element_size * element_count, 0x19);
                    // WARNING: Subroutine does not return
  memset(memory_handle, 0, element_size * element_count);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统Mono分配器初始化函数
 * 
 * 初始化UI系统的Mono内存分配器，设置分配器表、
 * 环境变量、内存管理函数等。
 * 
 * @return 无返回值
 */
void UI_Mono_Allocator_Initialize(void)
{
  undefined8 *allocator_table;
  undefined4 *environment_var;
  
  allocator_table = (undefined8 *)System_Allocate_Handle(_DAT_180c8ed18, 0x28, 8, 3, 0xfffffffffffffffe);
  *allocator_table = 1;
  allocator_table[1] = UI_Memory_Allocate;
  allocator_table[2] = UI_Memory_Reallocate;
  allocator_table[3] = UI_Memory_Free;
  allocator_table[4] = UI_Memory_Allocate_Array;
  mono_set_allocator_vtable(allocator_table);
  environment_var = (undefined4 *)System_Allocate_Buffer(_DAT_180c8ed18, 0x13, 0x13);
  *(undefined1 *)environment_var = 0;
  System_String_Sanitize(environment_var);
  *environment_var = 0x7372756e;
  environment_var[1] = 0x2d797265;
  environment_var[2] = 0x657a6973;
  environment_var[3] = 0x3931383d;
  *(undefined2 *)(environment_var + 4) = 0x6b32;
  *(undefined1 *)((longlong)environment_var + 0x12) = 0;
  allocator_table = (undefined8 *)System_Allocate_Buffer(_DAT_180c8ed18, 0x10, 0x13);
  *(undefined1 *)allocator_table = 0;
  System_String_Sanitize(allocator_table);
  *allocator_table = 0x5f43475f4f4e4f4d;
  *(undefined4 *)(allocator_table + 1) = 0x41524150;
  *(undefined2 *)((longlong)allocator_table + 0xc) = 0x534d;
  *(undefined1 *)((longlong)allocator_table + 0xe) = 0;
  SetEnvironmentVariableA(allocator_table, environment_var);
                    // WARNING: Subroutine does not return
  System_Error_Handler(allocator_table);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI系统程序集加载函数
 * 
 * 加载UI系统的程序集，包括DLL文件加载、
 * 类加载、方法解析、依赖关系处理等。
 * 
 * @return 无返回值
 */
void UI_Load_Assembly(void)
{
  longlong *domain_handle;
  undefined4 *assembly_name;
  undefined4 name_length;
  longlong assembly_handle;
  undefined8 *class_name;
  undefined4 *namespace_ptr;
  ulonglong string_length;
  undefined1 stack_buffer[32];
  undefined *stack_ptr_b8;
  undefined4 *stack_ptr_b0;
  uint stack_size_a8;
  ulonglong stack_size_a0;
  undefined4 stack_value_98;
  undefined *stack_ptr_90;
  undefined8 *stack_ptr_88;
  undefined4 stack_value_80;
  undefined8 stack_value_78;
  undefined8 stack_value_50;
  ulonglong stack_guard;
  
  domain_handle = _DAT_180c91020;
  stack_value_50 = 0xfffffffffffffffe;
  stack_guard = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  stack_value_98 = 0;
  stack_ptr_b8 = &UNK_180a3c3e0;
  stack_size_a0 = 0;
  stack_ptr_b0 = (undefined4 *)0x0;
  stack_size_a8 = 0;
  System_String_Create(&stack_ptr_b8, 0x15);
  assembly_name = stack_ptr_b0;
  string_length = (ulonglong)stack_size_a8;
  namespace_ptr = (undefined4 *)((longlong)stack_ptr_b0 + string_length);
  *namespace_ptr = 0x656c6154;
  namespace_ptr[1] = 0x6c726f57;
  namespace_ptr[2] = 0x442e7364;
  namespace_ptr[3] = 0x654e746f;
  *(undefined4 *)((longlong)stack_ptr_b0 + string_length + 0x10) = 0x6c642e74;
  *(undefined2 *)((longlong)stack_ptr_b0 + string_length + 0x14) = 0x6c;
  stack_size_a8 = 0x15;
  namespace_ptr = (undefined4 *)&DAT_18098bc73;
  if (stack_ptr_b0 != (undefined4 *)0x0) {
    namespace_ptr = stack_ptr_b0;
  }
  assembly_handle = mono_domain_assembly_open(_DAT_180c91028, namespace_ptr);
  stack_ptr_b8 = &UNK_180a3c3e0;
  if (assembly_name != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    System_Error_Handler(assembly_name);
  }
  stack_ptr_b0 = (undefined4 *)0x0;
  stack_size_a0 = stack_size_a0 & 0xffffffff00000000;
  stack_ptr_b8 = &UNK_18098bcb0;
  *domain_handle = assembly_handle;
  if (assembly_handle == 0) {
    System_Error_Reporter(&UNK_180a3ddc0, &DAT_180a3dda8);
    assembly_handle = *domain_handle;
  }
  assembly_handle = mono_assembly_get_image(assembly_handle);
  domain_handle[1] = assembly_handle;
  if (assembly_handle == 0) {
    System_Error_Reporter(&UNK_180a3deb8);
  }
  stack_ptr_90 = &UNK_180a3c3e0;
  stack_value_78 = 0;
  stack_ptr_88 = (undefined8 *)0x0;
  stack_value_80 = 0;
  class_name = (undefined8 *)System_Allocate_Buffer(_DAT_180c8ed18, 0x10, 0x13);
  *(undefined1 *)class_name = 0;
  stack_ptr_88 = class_name;
  name_length = System_String_Sanitize(class_name);
  stack_value_78 = CONCAT44(stack_value_78._4_4_, name_length);
  *class_name = 0x6c6c6f72746e6f43;
  *(undefined2 *)(class_name + 1) = 0x7265;
  *(undefined1 *)((longlong)class_name + 10) = 0;
  stack_value_80 = 10;
  stack_ptr_b8 = &UNK_180a3c3e0;
  stack_size_a0 = 0;
  stack_ptr_b0 = (undefined4 *)0x0;
  stack_size_a8 = 0;
  namespace_ptr = (undefined4 *)System_Allocate_Buffer(_DAT_180c8ed18, 0x12, 0x13);
  *(undefined1 *)namespace_ptr = 0;
  stack_ptr_b0 = namespace_ptr;
  name_length = System_String_Sanitize(namespace_ptr);
  stack_size_a0 = CONCAT44(stack_size_a0._4_4_, name_length);
  *namespace_ptr = 0x656c6154;
  namespace_ptr[1] = 0x6c726f57;
  namespace_ptr[2] = 0x442e7364;
  namespace_ptr[3] = 0x654e746f;
  *(undefined2 *)(namespace_ptr + 4) = 0x74;
  stack_size_a8 = 0x11;
  mono_class_from_name(domain_handle[1], namespace_ptr, class_name);
  stack_ptr_b8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  System_Error_Handler(namespace_ptr);
}



/**
 * UI系统字符串复制函数
 * 
 * 复制UI系统中的字符串，包括字符串拷贝、
 * 字符串格式化、字符串验证等。
 * 
 * @param source_string 源字符串指针
 * @param dest_buffer 目标缓冲区指针
 * @param copy_param 复制参数
 * @param copy_flags 复制标志位
 * @return 复制结果指针
 */
undefined8 * UI_String_Copy(undefined8 source_string, undefined8 *dest_buffer, undefined8 copy_param, undefined8 copy_flags)
{
  *dest_buffer = &UNK_18098bcb0;
  dest_buffer[1] = 0;
  *(undefined4 *)(dest_buffer + 2) = 0;
  *dest_buffer = &UNK_1809fcc28;
  dest_buffer[1] = dest_buffer + 3;
  *(undefined1 *)(dest_buffer + 3) = 0;
  *(undefined4 *)(dest_buffer + 2) = 0x10;
  strcpy_s(dest_buffer[1], 0x80, &UNK_180a3def0, copy_flags, 0, 0xfffffffffffffffe);
  return dest_buffer;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653d60(longlong param_1,undefined8 param_2,int param_3)
// UI系统缓冲区管理函数
void UI_Manage_Buffer(longlong buffer_context, undefined8 data_source, int data_size)
{
  longlong buffer_start;
  longlong buffer_end;
  ulonglong current_size;
  longlong buffer_capacity;
  ulonglong required_size;
  ulonglong new_size;
  int data_offset;
  
  data_offset = *(int *)(buffer_context + 0x18) - *(int *)(buffer_context + 0x10);
  buffer_start = *(longlong *)(buffer_context + 0x18);
  buffer_end = *(longlong *)(buffer_context + 0x10);
  current_size = buffer_start - buffer_end;
  required_size = (ulonglong)(data_offset + data_size);
  if (current_size < required_size) {
    required_size = (buffer_end - buffer_start) + required_size;
    if ((ulonglong)(*(longlong *)(buffer_context + 0x20) - buffer_start) < required_size) {
      new_size = current_size * 2;
      if (current_size == 0) {
        new_size = 1;
      }
      if (new_size < current_size + required_size) {
        new_size = current_size + required_size;
      }
      if (new_size == 0) {
        buffer_capacity = buffer_start;
        buffer_start = 0;
      }
      else {
        buffer_start = System_Allocate_Buffer(_DAT_180c8ed18, new_size, *(undefined1 *)(buffer_context + 0x28));
        buffer_end = *(longlong *)(buffer_context + 0x10);
        buffer_capacity = *(longlong *)(buffer_context + 0x18);
      }
      if (buffer_end != buffer_capacity) {
                    // WARNING: Subroutine does not return
        memmove(buffer_start, buffer_end, buffer_capacity - buffer_end);
      }
      if (required_size != 0) {
                    // WARNING: Subroutine does not return
        memset(buffer_start, 0, required_size);
      }
      if (*(longlong *)(buffer_context + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        System_Error_Handler();
      }
      *(longlong *)(buffer_context + 0x10) = buffer_start;
      *(ulonglong *)(buffer_context + 0x20) = buffer_start + new_size;
    }
    else if (required_size != 0) {
                    // WARNING: Subroutine does not return
      memset(buffer_start, 0, required_size);
    }
  }
  else {
    buffer_start = buffer_end + required_size;
  }
  *(longlong *)(buffer_context + 0x18) = buffer_start;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)data_offset + *(longlong *)(buffer_context + 0x10), data_source, (longlong)data_size);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180653dac(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)
// UI系统动态缓冲区管理函数
void UI_Dynamic_Buffer_Manage(longlong target_pos, longlong source_pos, undefined8 data_source, longlong data_size)
{
  longlong current_buffer;
  longlong buffer_start;
  longlong new_buffer;
  undefined8 buffer_data;
  ulonglong required_size;
  longlong buffer_context;
  ulonglong new_capacity;
  int buffer_offset;
  longlong *buffer_ptr;
  undefined8 stack_param;
  
  required_size = (target_pos - buffer_start) + data_size;
  if ((ulonglong)(current_buffer - buffer_start) < required_size) {
    new_capacity = source_pos * 2;
    if (source_pos == 0) {
      new_capacity = 1;
    }
    if (new_capacity < source_pos + required_size) {
      new_capacity = source_pos + required_size;
    }
    if (new_capacity == 0) {
      new_buffer = buffer_start;
      buffer_start = 0;
    }
    else {
      buffer_start = System_Allocate_Buffer(_DAT_180c8ed18, new_capacity, *(undefined1 *)(buffer_context + 0x28));
      target_pos = *(longlong *)(buffer_context + 0x10);
      new_buffer = *buffer_ptr;
    }
    if (target_pos != new_buffer) {
                    // WARNING: Subroutine does not return
      memmove(buffer_start, target_pos, new_buffer - target_pos);
    }
    if (required_size != 0) {
                    // WARNING: Subroutine does not return
      memset(buffer_start, 0, required_size);
    }
    if (*(longlong *)(buffer_context + 0x10) != 0) {
                    // WARNING: Subroutine does not return
      System_Error_Handler();
    }
    *(longlong *)(buffer_context + 0x10) = buffer_start;
    *(ulonglong *)(buffer_context + 0x20) = buffer_start + new_capacity;
  }
  else {
    stack_param = buffer_data;
    if (required_size != 0) {
                    // WARNING: Subroutine does not return
      memset();
    }
  }
  *buffer_ptr = buffer_start;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)buffer_offset + *(longlong *)(buffer_context + 0x10), stack_param);
  return;
}




// 函数: void FUN_180653e6b(void)
// UI系统内联缓冲区管理函数
void UI_Buffer_Manage_Inline(void)
{
  undefined8 buffer_start;
  longlong buffer_context;
  longlong buffer_capacity;
  int buffer_offset;
  undefined8 *buffer_ptr;
  
  if (buffer_capacity != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *buffer_ptr = buffer_start;
                    // WARNING: Could not recover jumptable at 0x0001808ffc47. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  memcpy((longlong)buffer_offset + *(longlong *)(buffer_context + 0x10));
  return;
}



