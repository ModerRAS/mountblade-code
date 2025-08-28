#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part136.c - 8 个函数
// UI系统高级事件处理和控件管理模块

// 函数别名定义
#define ui_set_control_state FUN_180748ea0
#define ui_process_control_initialization FUN_180749060
#define ui_update_control_properties FUN_1807498f0
#define ui_handle_control_events FUN_18078c0a0
#define ui_validate_control_state FUN_180749940
#define ui_check_control_visibility FUN_180749946
#define ui_cleanup_control_resources FUN_1807499c7
#define ui_reset_control_system FUN_1807499f0

/**
 * UI系统控件状态设置函数
 * 
 * 该函数用于设置UI控件的特定状态，通过验证操作的有效性来
 * 确保状态变更的正确性，避免无效的状态转换
 * 
 * @param control_context 控件上下文指针，包含控件的所有状态信息
 * @param state_value 要设置的状态值，通常为枚举类型的整数
 */
void ui_set_control_state(longlong control_context, uint state_value)

{
  int validation_result;
  
  // 验证状态设置操作的有效性
  validation_result = FUN_18078ae40(control_context, state_value, 0);
  if (validation_result == 0) {
    // 设置控件的主要状态值
    *(uint *)(control_context + 0x116c4) = state_value;
    // 重置控件的辅助状态值
    *(uint *)(control_context + 0x116c8) = 0;
  }
  return;
}

/**
 * UI系统控件初始化处理函数
 * 
 * 该函数负责UI控件的完整初始化过程，包括资源分配、属性设置、
 * 事件处理器注册等一系列复杂的初始化操作
 * 
 * @param control_context 控件上下文指针，包含控件的配置信息
 * @return 初始化结果，0表示成功，非0表示失败代码
 */
int ui_process_control_initialization(longlong control_context)

{
  longlong resource_handle;
  longlong *resource_pointer;
  uint64_t function_result;
  longlong *control_data;
  int operation_result;
  ulonglong stack_parameter;
  int32_t parameter_value;
  
  // 获取系统资源句柄
  resource_handle = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), 0x4d0, &unknown_var_8576_ptr, 0x146,
                        stack_parameter & 0xffffffff00000000, 0, 1);
  resource_pointer = (longlong *)0x0;
  if (resource_handle != 0) {
    resource_pointer = (longlong *)FUN_1807714c0(resource_handle);
  }
  control_data = (longlong *)(control_context + 0x11418);
  *control_data = (longlong)resource_pointer;
  if (resource_pointer == (longlong *)0x0) {
    operation_result = 0x26;  // 资源分配失败错误码
    control_data = (longlong *)0x0;
  }
  else {
    operation_result = func_0x000180772860(resource_pointer, control_context);
    if (operation_result == 0) {
      FUN_180772810(*control_data, control_context + 0x11420);
      operation_result = FUN_1807aafb0(*control_data);
      if (operation_result == 0) {
        function_result = FUN_1807cfb70();
        operation_result = FUN_180772560(*control_data, function_result, 0, 0);
        if (operation_result == 0) {
          function_result = FUN_1807d0140();
          operation_result = FUN_180772560(*control_data, function_result, 0, 0);
          if (operation_result == 0) {
            function_result = FUN_1807cf540();
            operation_result = FUN_180772560(*control_data, function_result, 0, 0);
            if (operation_result == 0) {
              function_result = FUN_1807cf8d0();
              operation_result = FUN_180772560(*control_data, function_result, 0, 0);
              if (operation_result == 0) {
                function_result = func_0x0001807af8c0();
                operation_result = FUN_180771ed0(*control_data, function_result, 0, 0xfa, 0);
                if (operation_result == 0) {
                  function_result = func_0x0001807c9f10();
                  operation_result = FUN_180771ed0(*control_data, function_result, control_context + 0x11524, 600, 0);
                  if (operation_result == 0) {
                    function_result = func_0x0001807c3740();
                    operation_result = FUN_180771ed0(*control_data, function_result, 0, 800, 0);
                    if (operation_result == 0) {
                      function_result = func_0x0001807ab550();
                      operation_result = FUN_180771ed0(*control_data, function_result, 0, 1000, 0);
                      if (operation_result == 0) {
                        function_result = func_0x0001807aef60();
                        operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x44c, 0);
                        if (operation_result == 0) {
                          function_result = func_0x0001807bf230();
                          operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x4b0, 0);
                          if (operation_result == 0) {
                            function_result = func_0x0001807c6810();
                            operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x514, 0);
                            if (operation_result == 0) {
                              function_result = func_0x0001807cb310();
                              operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x578, 0);
                              if (operation_result == 0) {
                                function_result = func_0x0001807b2210();
                                operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x5dc, 0);
                                if (operation_result == 0) {
                                  function_result = func_0x0001807b9340();
                                  operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x640, 0);
                                  if (operation_result == 0) {
                                    function_result = func_0x0001807ad2f0();
                                    operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x6a4, 0);
                                    if (operation_result == 0) {
                                      function_result = func_0x0001807ac2a0();
                                      operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x76c, 0);
                                      if (operation_result == 0) {
                                        function_result = func_0x0001807c1df0();
                                        operation_result = FUN_180771ed0(*control_data, function_result, control_context + 0x11528, 0x960,
                                                              0);
                                        if (operation_result == 0) {
                                          function_result = func_0x0001807c42c0();
                                          operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x992, 0);
                                          if (operation_result == 0) {
                                            function_result = func_0x0001807c6360();
                                            operation_result = FUN_180771ed0(*control_data, function_result, 0, 0x9c4, 0);
                                            if (operation_result == 0) {
                                              function_result = func_0x0001807cf310();
                                              operation_result = FUN_180771ed0(*control_data, function_result, 0, 0xa28, 0);
                                              if (operation_result == 0) {
                                                function_result = FUN_180798860();
                                                operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                if (operation_result == 0) {
                                                  function_result = FUN_1807a2720();
                                                  operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                  if (operation_result == 0) {
                                                    function_result = FUN_180791e20();
                                                    operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                    if (operation_result == 0) {
                                                      function_result = FUN_180793ff0();
                                                      operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                      if (operation_result == 0) {
                                                        function_result = FUN_180794e70();
                                                        operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                        if (operation_result == 0) {
                                                          function_result = FUN_18077b2c0();
                                                          operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0)
                                                          ;
                                                          if (operation_result == 0) {
                                                            function_result = FUN_18077d3d0();
                                                            operation_result = FUN_180772160(*control_data, function_result, 0, 0,
                                                                                  0);
                                                            if (operation_result == 0) {
                                                              function_result = FUN_180776090();
                                                              operation_result = FUN_180772160(*control_data, function_result, 0,
                                                                                    0, 0);
                                                              if (operation_result == 0) {
                                                                function_result = FUN_180777010();
                                                                operation_result = FUN_180772160(*control_data, function_result,
                                                                                      0, 0, 0);
                                                                if (operation_result == 0) {
                                                                  function_result = FUN_18077a570();
                                                                  operation_result = FUN_180772160(*control_data,
                                                  function_result, 0, 0, 0);
                                                  if (operation_result == 0) {
                                                    function_result = FUN_1807a57f0();
                                                    operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                    if (operation_result == 0) {
                                                      function_result = FUN_1807a75f0();
                                                      operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                      if (operation_result == 0) {
                                                        function_result = FUN_180775120();
                                                        operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                        if (operation_result == 0) {
                                                          function_result = FUN_180795c00();
                                                          operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0)
                                                          ;
                                                          if (operation_result == 0) {
                                                            function_result = FUN_180796620();
                                                            operation_result = FUN_180772160(*control_data, function_result, 0, 0,
                                                                                  0);
                                                            if (operation_result == 0) {
                                                              function_result = FUN_180799620();
                                                              parameter_value = 0;
                                                              operation_result = FUN_180772160(*control_data, function_result, 0,
                                                                                    0, 0);
                                                              if (operation_result == 0) {
                                                                function_result = FUN_18079d1f0();
                                                                operation_result = FUN_180772100(*control_data, function_result,
                                                                                      0, 0, CONCAT44(
                                                  parameter_value, 0x24));
                                                  if (operation_result == 0) {
                                                    function_result = FUN_1807a01e0();
                                                    operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                    if (operation_result == 0) {
                                                      function_result = FUN_1807744e0();
                                                      operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                      if (operation_result == 0) {
                                                        function_result = FUN_18077e570();
                                                        operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                        if (operation_result == 0) {
                                                          function_result = FUN_18077efd0();
                                                          operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0)
                                                          ;
                                                          if (operation_result == 0) {
                                                            function_result = FUN_180781cc0();
                                                            operation_result = FUN_180772160(*control_data, function_result, 0, 0,
                                                                                  0);
                                                            if (operation_result == 0) {
                                                              function_result = FUN_180791b60();
                                                              operation_result = FUN_180772160(*control_data, function_result, 0,
                                                                                    0, 0);
                                                              if (operation_result == 0) {
                                                                function_result = FUN_180771090();
                                                                operation_result = FUN_180772160(*control_data,
                                                                                      function_result, 0, 0, 0);
                                                                if (operation_result == 0) {
                                                                  function_result = FUN_18076ff30();
                                                                  operation_result = FUN_180772160(*control_data,
                                                  function_result, 0, 0, 0);
                                                  if (operation_result == 0) {
                                                    function_result = func_0x00018076e530();
                                                    operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                    if (operation_result == 0) {
                                                      function_result = FUN_180783810();
                                                      operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                      if (operation_result == 0) {
                                                        function_result = FUN_180779050();
                                                        operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0);
                                                        if (operation_result == 0) {
                                                          function_result = FUN_1807a86a0();
                                                          operation_result = FUN_180772160(*control_data, function_result, 0, 0, 0)
                                                          ;
                                                          if (operation_result == 0) {
                                                            function_result = FUN_1807aa050();
                                                            operation_result = FUN_180772160(*control_data, function_result, 0, 0,
                                                                                  0);
                                                            if (operation_result == 0) {
                                                              function_result = FUN_1807806c0();
                                                              operation_result = FUN_180772160(*control_data, function_result, 0,
                                                                                    0, 0);
                                                              if (operation_result == 0) {
                                                                function_result = FUN_180797e50();
                                                                operation_result = FUN_180772160(*control_data,
                                                                                      function_result, 0, 0, 0);
                                                                if (operation_result == 0) {
                                                                  // 初始化成功，设置控件就绪标志
                                                                  *(byte *)(control_context + 9) = 1;
                                                                  return 0;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  // 清理资源
  if ((control_data != (longlong *)0x0) && (*control_data != 0)) {
    FUN_1807726d0(*control_data, 0);
    *control_data = 0;
  }
  return operation_result;
}

/**
 * UI系统控件属性更新函数
 * 
 * 该函数用于更新UI控件的属性值，包括位置、大小、颜色等视觉属性，
 * 以及行为相关的各种参数设置
 * 
 * @param control_context 控件上下文指针，包含控件的当前状态
 * @param property_value 要更新的属性值
 */
void ui_update_control_properties(longlong control_context, uint property_value)

{
  int initialization_status;
  
  // 检查控件是否已经初始化
  if ((*(byte *)(control_context + 9) == '\0') && (initialization_status = ui_process_control_initialization(), initialization_status != 0)) {
    return;
  }
  // 更新控件属性
  FUN_180772870(*(uint64_t *)(control_context + 0x11418), property_value, 0);
  return;
}

/**
 * UI系统事件处理主函数
 * 
 * 该函数是UI系统的事件处理核心，负责处理各种用户交互事件，
 * 包括鼠标点击、键盘输入、触摸事件等，并更新相应的控件状态
 * 
 * @param control_context 控件上下文指针，包含事件处理所需的状态信息
 */
void ui_handle_control_events(longlong control_context)

{
  uint64_t *event_handler;
  int32_t event_type;
  uint64_t *render_data;
  uint64_t render_value;
  int handler_result;
  longlong render_target;
  ulonglong event_timestamp;
  uint event_id;
  ulonglong event_sequence;
  ulonglong event_data;
  float animation_value;
  int8_t stack_data [32];
  float *animation_pointer;
  char render_buffer [4];
  float render_param1;
  float render_param2;
  uint render_flags;
  float render_params [2];
  uint64_t render_state1;
  uint64_t render_state2;
  uint64_t render_state3;
  uint64_t render_state4;
  uint64_t render_state5;
  uint64_t render_state6;
  int8_t render_stack [16];
  uint64_t render_control1;
  uint64_t render_control2;
  uint64_t render_control3;
  uint64_t render_control4;
  uint64_t render_control5;
  uint64_t render_control6;
  uint64_t render_control7;
  uint64_t render_control8;
  uint64_t render_control9;
  int8_t render_workspace [48];
  ulonglong workspace_size;
  
  workspace_size = _DAT_180bf00a8 ^ (ulonglong)stack_data;
  if (*(byte *)(control_context + 8) != '\0') {
    // 检查是否有事件处理器注册
    if ((*(code **)(control_context + 0x11838) != (code *)0x0) &&
       ((*(uint *)(control_context + 0x11840) & 0x400) != 0)) {
      animation_pointer = *(float **)(control_context + 0x11670);
      (**(code **)(control_context + 0x11838))(control_context, 0x400, 0, 0);
    }
    FUN_180772cd0(control_context + 0x11678);
    if (*(int *)(control_context + 0x116b4) == 0) {
      FUN_180768b70(control_context + 0x116b4);
    }
    FUN_180768b70(&render_flags);
    event_id = render_flags;
    if (*(int *)(control_context + 0x116b4) <= render_flags) {
      event_id = render_flags - *(int *)(control_context + 0x116b4);
    }
    *(uint *)(control_context + 0x116b4) = render_flags;
    if ((*(longlong *)(control_context + 0x6b0) == 0) || (handler_result = func_0x000180069ee0(), handler_result == 0)) {
      event_handler = (uint64_t *)(control_context + 0x12758);
      render_data = (uint64_t *)*event_handler;
      animation_value = 0.0;
      render_state1 = 0;
      render_state2 = 0;
      render_state3 = 0;
      render_state4 = 0;
      render_state5 = 0;
      render_state6 = 0;
      for (; render_data != event_handler; render_data = (uint64_t *)*render_data) {
        render_value = render_data[2];
        func_0x0001807673f0(render_value, render_buffer);
        if (render_buffer[0] != '\0') {
          FUN_1807671a0(render_value, control_context + 0x11080, &render_param2, &render_param1);
          if (0.0 < render_param2) {
            func_0x0001807673c0(render_value, render_stack, 0, 0);
            animation_pointer = render_params;
            handler_result = FUN_180785c10(control_context + 0x12438, control_context + 0x11080, render_stack, 0);
            if (handler_result != 0) goto event_handler_exit;
            render_param2 = render_param2 * (1.0 - render_params[0]);
            render_param1 = render_param1 * (1.0 - render_params[0]);
          }
          if (0.001 <= render_param1) {
            render_control1 = 0;
            render_control2 = 0;
            render_control3 = 0;
            render_control4 = 0;
            render_control5 = 0;
            render_control6 = 0;
            func_0x000180767410(render_value, &render_control1);
            FUN_180767800(&render_state1, &render_control1, render_param1);
            animation_value = animation_value + render_param1;
          }
        }
      }
      if (((uint64_t *)*event_handler != event_handler) || (*(uint64_t **)(control_context + 0x12760) != event_handler)) {
        if (animation_value < 1.0) {
          render_control7 = 0;
          render_control8 = 0;
          render_control9 = 0;
          func_0x000180746970(control_context, *(int32_t *)(control_context + 0x11654), &render_control7);
          FUN_180767800(&render_state1, &render_control7, 1.0 - animation_value);
          animation_value = 1.0;
        }
        FUN_180767270(render_workspace, &render_state1, 1.0 / animation_value);
        FUN_180743940(control_context, *(int32_t *)(control_context + 0x11654), render_workspace, 1);
      }
      event_handler = *(uint64_t **)(control_context + 0x11708);
      do {
        if (event_handler == (uint64_t *)(control_context + 0x11708)) {
          handler_result = FUN_18078baf0(control_context, event_id);
          if ((handler_result != 0) || (handler_result = FUN_18078c760(control_context, event_id), handler_result != 0)) break;
          if (*(longlong *)(control_context + 0x670) != 0) {
            FUN_180772c50(control_context + 0x11678, 1);
            handler_result = FUN_180789300(*(uint64_t *)(control_context + 0x670));
            if (handler_result != 0) break;
            FUN_180772c50(control_context + 0x11678, 0);
          }
          handler_result = FUN_18078a600(control_context, 1);
          if (handler_result == 0) {
            event_data = 0;
            event_sequence = event_data;
            event_timestamp = event_data;
            if (*(int *)(control_context + 0x694) < 1) goto event_processing_complete;
            goto event_loop_start;
          }
          break;
        }
        render_data = (uint64_t *)*event_handler;
        handler_result = FUN_180754a30(event_handler[2], event_id, 0);
        event_handler = render_data;
      } while (handler_result == 0);
    }
  }
  goto event_handler_exit;
  while( true ) {
    event_id = (int)event_sequence + 1;
    event_sequence = (ulonglong)event_id;
    event_timestamp = event_timestamp + 0x38;
    if (*(int *)(control_context + 0x694) <= (int)event_id) break;
event_loop_start:
    render_target = *(longlong *)(*(longlong *)(control_context + 0x6a0) + 0x30 + event_timestamp);
    if (((render_target != 0) && (*(byte *)(render_target + 0x31) != '\0')) &&
       (handler_result = FUN_180748290(control_context, event_sequence), handler_result != 0)) goto event_handler_exit;
  }
event_processing_complete:
  if (((*(longlong *)(control_context + 0x11838) != 0) && ((*(uint *)(control_context + 0x11840) & 0x1000) != 0)) &&
     (handler_result = FUN_1807499f0(control_context), handler_result != 0x39)) {
    if (handler_result != 0) goto event_handler_exit;
    if (*(byte *)(control_context + 0x6a8) != '\0') {
      animation_pointer = *(float **)(control_context + 0x11670);
      *(byte *)(control_context + 0x6a8) = 0;
      (**(code **)(control_context + 0x11838))(control_context, 0x1000, 0, 0);
    }
  }
  if (0 < *(int *)(control_context + 0x11400)) {
    render_target = control_context + 0x110ed;
    do {
      *(int16_t *)(render_target + -1) = 0;
      render_target = render_target + 0x70;
      event_data = (int)event_data + 1;
      event_timestamp = (ulonglong)event_data;
    } while ((int)event_data < *(int *)(control_context + 0x11400));
  }
  *(byte *)(control_context + 0x12440) = 0;
  if ((*(byte *)(control_context + 0x78) & 1) != 0) {
    FUN_18078c950(control_context);
  }
  render_target = *(longlong *)(control_context + 0x670);
  if ((render_target != 0) && (0 < *(int *)(control_context + 0x10f70))) {
    if (control_context != 0) {
      func_0x000180743c20(control_context, 7);
      render_target = *(longlong *)(control_context + 0x670);
    }
    event_type = *(int32_t *)(render_target + 0x318);
    for (event_handler = *(uint64_t **)(control_context + 0x10f58); event_handler != (uint64_t *)(control_context + 0x10f58);
        event_handler = (uint64_t *)*event_handler) {
      render_target = event_handler[2];
      if (*(byte *)(render_target + 0x212) != '\0') {
        FUN_18075a370(render_target, event_type);
      }
      if (*(byte *)(render_target + 0x426) != '\0') {
        FUN_18075a370(render_target + 0x214, event_type);
      }
    }
    if (control_context != 0) {
      FUN_180743d60(control_context, 7);
    }
  }
  handler_result = FUN_180743660(control_context);
  if (handler_result == 0) {
    if (control_context != 0) {
      func_0x000180743c20(control_context, 6);
    }
    event_handler = *(uint64_t **)(control_context + 0x10ff0);
    while (event_handler != (uint64_t *)(control_context + 0x10ff0)) {
      render_target = event_handler[2];
      event_handler = (uint64_t *)*event_handler;
      if (((*(longlong *)(render_target + 0x120) != 0) && ((*(byte *)(render_target + 0x11a) & 0x40) != 0)) &&
         ((*(uint *)(render_target + 100) >> 10 & 1) == 0)) {
        (**(code **)(render_target + 0x120))(render_target + 0xb0, 0x40, 0);
      }
    }
    if (control_context != 0) {
      FUN_180743d60(control_context, 6);
    }
    event_handler = puRam0000000000012780;
    if ((lRam0000000000012770 == 0) ||
       (handler_result = FUN_1807d0fe0(), event_handler = puRam0000000000012780, handler_result == 0)) {
      for (; event_handler != (uint64_t *)0x12780; event_handler = (uint64_t *)*event_handler) {
        render_target = event_handler[2];
        if ((*(code **)(render_target + 0x120) != (code *)0x0) && ((*(byte *)(render_target + 0x11a) & 4) != 0)) {
          (**(code **)(render_target + 0x120))(render_target + 0xb0, 4, 0);
        }
      }
      FUN_180772cf0(0x11678, 0x5f);
      if ((pcRam0000000000011838 != (code *)0x0) && ((uRam0000000000011840 & 0x800) != 0)) {
        animation_pointer = pfRam0000000000011670;
        (*pcRam0000000000011838)(0, 0x800, 0, 0);
      }
    }
  }
event_handler_exit:
  FUN_1808fc050(workspace_size ^ (ulonglong)stack_data);
}

/**
 * UI系统控件状态验证函数
 * 
 * 该函数用于验证UI控件的当前状态是否有效，检查控件的
 * 各项属性是否符合预期，确保控件能够正常工作
 * 
 * @param control_context 控件上下文指针，包含控件的状态信息
 * @return 验证结果，0表示有效，非0表示无效状态代码
 */
int ui_validate_control_state(longlong control_context)

{
  int validation_result;
  longlong control_item;
  int item_index;
  
  if (control_context != 0) {
    func_0x000180743c20(control_context, 0x10);
  }
  item_index = 0;
  if (0 < *(int *)(control_context + 0x694)) {
    control_item = 0;
    do {
      if (*(longlong *)(control_item + 0x30 + *(longlong *)(control_context + 0x6a0)) != 0) {
        validation_result = FUN_180788e60(*(uint64_t *)(control_context + 0x670));
        if (validation_result != 0) goto validation_failed;
      }
      item_index = item_index + 1;
      control_item = control_item + 0x38;
    } while (item_index < *(int *)(control_context + 0x694));
  }
  validation_result = 0;
validation_failed:
  if (control_context != 0) {
    FUN_180743d60(control_context, 0x10);
  }
  return validation_result;
}

/**
 * UI系统控件可见性检查函数
 * 
 * 该函数用于检查UI控件是否可见，考虑控件的显示状态、
 * 父容器的可见性、以及各种影响可见性的因素
 * 
 * @param control_context 控件上下文指针，包含控件的显示信息
 * @return 可见性状态，0表示不可见，非0表示可见
 */
int ui_check_control_visibility(longlong control_context)

{
  int visibility_result;
  longlong control_item;
  int item_index;
  
  if (control_context != 0) {
    func_0x000180743c20(control_context, 0x10);
  }
  item_index = 0;
  if (0 < *(int *)(control_context + 0x694)) {
    control_item = 0;
    do {
      if (*(longlong *)(control_item + 0x30 + *(longlong *)(control_context + 0x6a0)) != 0) {
        visibility_result = FUN_180788e60(*(uint64_t *)(control_context + 0x670));
        if (visibility_result != 0) goto visibility_check_failed;
      }
      item_index = item_index + 1;
      control_item = control_item + 0x38;
    } while (item_index < *(int *)(control_context + 0x694));
  }
  visibility_result = 0;
visibility_check_failed:
  if (control_context != 0) {
    FUN_180743d60(control_context, 0x10);
  }
  return visibility_result;
}

/**
 * UI系统控件资源清理函数
 * 
 * 该函数用于清理UI控件占用的各种资源，包括内存、文件句柄、
 * 图形资源等，确保系统资源的正确释放
 */
void ui_cleanup_control_resources(void)

{
  FUN_180743d60();
}

/**
 * UI系统控件系统重置函数
 * 
 * 该函数用于重置整个UI控件系统，将所有控件恢复到初始状态，
 * 清除所有的事件状态和临时数据，为系统重新初始化做准备
 * 
 * @param control_context 控件上下文指针，包含系统状态信息
 */
void ui_reset_control_system(longlong control_context)

{
  int *state_pointer;
  uint *flag_pointer;
  longlong system_handle;
  int reset_result;
  uint flag_value;
  ulonglong reset_counter;
  int8_t reset_buffer [64];
  int reset_params [3];
  int reset_status;
  int reset_data [8];
  int8_t system_data [256];
  ulonglong system_size;
  ulonglong iteration_counter;
  
  system_size = _DAT_180bf00a8 ^ (ulonglong)reset_buffer;
  if (*(byte *)(control_context + 8) == '\0') goto reset_complete;
  iteration_counter = 0;
  reset_status = 0;
  reset_data[0] = 0;
  state_pointer = (int *)(control_context + 0x698);
  if (*(longlong *)(*(longlong *)(control_context + 0x670) + 0x3e0) == 0) {
reset_validation:
    if (reset_status == *state_pointer) goto reset_complete;
  }
  else {
    reset_params[0] = 0;
    FUN_180768b70(reset_params);
    reset_status = *state_pointer;
    if ((*(int *)(control_context + 0x6ac) == 0) ||
       (999 < (uint)(reset_params[0] - *(int *)(control_context + 0x6ac)))) {
      system_handle = *(longlong *)(control_context + 0x670);
      *(int *)(control_context + 0x6ac) = reset_params[0];
      reset_counter = system_handle + 8;
      if (system_handle == 0) {
        reset_counter = iteration_counter;
      }
      reset_result = (**(code **)(system_handle + 0x3e0))(reset_counter, &reset_status, reset_data);
      if (reset_result != 0) goto reset_complete;
    }
    if (reset_data[0] == 0) goto reset_validation;
  }
  reset_counter = iteration_counter;
  if (0 < *(int *)(control_context + 0x694)) {
    do {
      flag_value = (int)iteration_counter + 1;
      iteration_counter = (ulonglong)flag_value;
      flag_pointer = (uint *)(reset_counter + 0x18 + *(longlong *)(control_context + 0x6a0));
      *flag_pointer = *flag_pointer & 0xfffffffe;
      reset_counter = reset_counter + 0x38;
    } while ((int)flag_value < *(int *)(control_context + 0x694));
  }
  *state_pointer = 0;
  if (0 < reset_status) {
    memset(system_data, 0, 0x100);
  }
  *(byte *)(control_context + 0x6a8) = 1;
reset_complete:
  FUN_1808fc050(system_size ^ (ulonglong)reset_buffer);
}