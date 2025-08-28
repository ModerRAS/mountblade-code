#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part017.c - UI系统高级事件处理和控件管理模块
// 包含9个核心函数：UI系统高级事件处理器、UI系统动画控制器、UI系统状态管理器、UI系统渲染优化器、UI系统参数计算器、UI系统内存管理器、UI系统错误处理器、UI系统调试器、UI系统性能监控器
// 主要功能：事件处理、动画控制、状态管理、渲染优化、参数计算、内存管理、错误处理、调试支持、性能监控
//
// 技术说明：
// - 该函数模块实现了UI系统的高级事件处理和控件管理功能
// - 支持复杂的动画控制和状态管理
// - 包含高级的渲染优化和参数计算功能
// - 提供完整的内存管理和错误处理机制
// - 支持调试和性能监控功能
//
// 函数特点：
// - 支持多种事件处理模式
// - 实现了复杂的动画控制系统
// - 提供高级的状态管理和渲染优化
// - 包含完整的内存管理和错误处理
// - 支持调试和性能监控功能

// 常量定义
#define UI_ZERO_FLOAT 0.0f
#define UI_ONE_FLOAT 1.0f
#define UI_TWO_FLOAT 2.0f
#define UI_THREE_FLOAT 3.0f
#define UI_FOUR_FLOAT 4.0f
#define UI_FIVE_FLOAT 5.0f
#define UI_SIX_FLOAT 6.0f
#define UI_TEN_FLOAT 10.0f
#define UI_FIFTEEN_FLOAT 15.0f
#define UI_HALF_FLOAT 0.5f
#define UI_POINT_ZERO_ONE_FLOAT 0.001f
#define UI_POINT_ONE_FLOAT 0.1f
#define UI_POINT_FIVE_FLOAT 0.5f
#define UI_ONE_MILLION_FLOAT 1e-06f
#define UI_MIN_THRESHOLD_FLOAT 1.1754944e-38f
#define UI_MAX_THRESHOLD_FLOAT 3.4028235e+38f
#define UI_WIDGET_BLOCK_SIZE 0x1358
#define UI_CONTROL_BLOCK_SIZE 0x4d6
#define UI_ANIMATION_BLOCK_SIZE 0x30
#define UI_WIDGET_COUNT_MAX 18
#define UI_WIDGET_COUNT_MIN 10
#define UI_MATRIX_SIZE_4X4 16
#define UI_FLOAT_SIZE 4
#define UI_INT_SIZE 4

// 函数别名定义
#define ui_system_advanced_event_processor FUN_18065d7f0
#define ui_system_animation_controller FUN_18065d804
#define ui_system_state_manager FUN_18065d902
#define ui_system_render_optimizer FUN_18065dec1
#define ui_system_parameter_calculator FUN_18065df80
#define ui_system_memory_manager FUN_18065e200
#define ui_system_error_handler FUN_18065e276
#define ui_system_debug_support FUN_18065e9a5
#define ui_system_performance_monitor FUN_18065ed75

// 函数: void FUN_18065d7f0(longlong param_1,longlong param_2)
// UI系统高级事件处理器 - 处理复杂的UI事件分发和动画状态管理
// 该函数实现了高级的UI事件处理机制，包括动画状态计算、事件分发、参数处理等
// 主要功能：计算动画插值、处理UI事件、管理控件状态、执行渲染优化
void ui_system_advanced_event_processor(longlong ui_context_ptr,longlong event_data_ptr)
{
  // 动画插值计算变量
  float animation_factor;        // 动画因子
  float smooth_factor;           // 平滑因子
  float blend_factor;            // 混合因子
  int event_type;               // 事件类型
  int control_state;            // 控件状态
  uint64_t *widget_array;     // 控件数组指针
  float threshold_value;        // 阈值
  float position_x;             // X坐标
  float position_y;             // Y坐标
  float size_width;             // 宽度
  float size_height;            // 高度
  float interaction_strength;   // 交互强度
  float visibility_factor;      // 可见性因子
  
  // 计算动画插值因子 - 使用三次贝塞尔曲线公式
  animation_factor = *(float *)(ui_context_ptr + 0x2c);
  smooth_factor = (UI_THREE_FLOAT - (animation_factor + animation_factor)) * animation_factor * animation_factor;
  animation_factor = UI_ONE_FLOAT - smooth_factor;
  
  // 处理主控件事件类型
  if (*(int *)(ui_context_ptr + 0x10) == 1) {
    FUN_180660070(*(longlong *)(ui_context_ptr + 0xc78) + 0x30,*(uint *)(ui_context_ptr + 0x18) & 0x7fffffff);
  }
  else {
    FUN_18065ffa0((longlong)*(int *)(ui_context_ptr + 0x10) * UI_ANIMATION_BLOCK_SIZE + *(longlong *)(ui_context_ptr + 0xc78),
                  *(int32_t *)(ui_context_ptr + 0x1c));
  }
  
  // 处理副控件事件类型
  if (*(int *)(ui_context_ptr + 0x14) == 1) {
    FUN_180660070(*(longlong *)(ui_context_ptr + 0xc78) + 0x30,*(uint *)(ui_context_ptr + 0x18) & 0x7fffffff);
  }
  else {
    FUN_18065ffa0((longlong)*(int *)(ui_context_ptr + 0x14) * UI_ANIMATION_BLOCK_SIZE + *(longlong *)(ui_context_ptr + 0xc78),
                  *(int32_t *)(ui_context_ptr + 0x1c));
  }
  // 初始化控件状态索引
  control_state = 0;
  
  // 如果动画因子有效，则处理控件交互
  if (UI_ZERO_FLOAT < animation_factor) {
    // 处理特殊控件类型（类型5）
    if (*(int *)(ui_context_ptr + 0x14) == 5) {
      threshold_value = *(float *)(ui_context_ptr + 0x3c);
      
      // 处理淡入效果
      if (threshold_value < UI_ONE_FLOAT) {
        position_x = *(float *)(ui_context_ptr + 0x34);
        position_y = *(float *)(ui_context_ptr + 0x38);
        size_width = *(float *)(ui_context_ptr + 0x30);
        widget_array = (uint64_t *)(*(longlong *)(ui_context_ptr + 0xc78) + 0xf0);
        blend_factor = (UI_ONE_FLOAT - position_x) - position_y;
        event_type = control_state;
        
        // 处理6个控件区域
        do {
          switch(event_type) {
          case 0:
            interaction_strength = blend_factor * size_width;
            break;
          case 1:
            interaction_strength = (UI_ONE_FLOAT - size_width) * blend_factor;
            break;
          case 2:
            interaction_strength = position_x;
            break;
          case 3:
            interaction_strength = position_y;
            break;
          default:
            goto LAB_18065da24;
          }
          
          // 检查交互强度是否超过阈值
          if (UI_POINT_ONE_FLOAT < (UI_ONE_FLOAT - threshold_value) * animation_factor * interaction_strength) {
            FUN_180403910(*widget_array,event_data_ptr);
          }
LAB_18065da24:
          event_type = event_type + 1;
          widget_array = widget_array + 1;
        } while (event_type < 6);
        
        threshold_value = *(float *)(ui_context_ptr + 0x3c);
      }
      
      // 处理淡出效果
      if (UI_ZERO_FLOAT < threshold_value) {
        position_x = *(float *)(ui_context_ptr + 0x34);
        position_y = *(float *)(ui_context_ptr + 0x38);
        widget_array = (uint64_t *)(*(longlong *)(ui_context_ptr + 0xc78) + 0x120);
        size_width = *(float *)(ui_context_ptr + 0x30);
        blend_factor = (UI_ONE_FLOAT - position_x) - position_y;
        event_type = control_state;
        
        // 处理6个控件区域
        do {
          switch(event_type) {
          case 0:
            interaction_strength = blend_factor * size_width;
            break;
          case 1:
            interaction_strength = (UI_ONE_FLOAT - size_width) * blend_factor;
            break;
          case 2:
            interaction_strength = position_x;
            break;
          case 3:
            interaction_strength = position_y;
            break;
          default:
            goto LAB_18065dae7;
          }
          
          // 检查交互强度是否超过阈值
          if (UI_POINT_ONE_FLOAT < threshold_value * animation_factor * interaction_strength) {
            FUN_180403910(*widget_array,event_data_ptr);
          }
LAB_18065dae7:
          event_type = event_type + 1;
          widget_array = widget_array + 1;
        } while (event_type < 6);
      }
    }
    else {
      // 处理其他类型的控件
      FUN_18065fdb0((longlong)*(int *)(ui_context_ptr + 0x14) * UI_ANIMATION_BLOCK_SIZE + *(longlong *)(ui_context_ptr + 0xc78),
                    event_data_ptr);
    }
  }
  // 处理主控件的特殊交互逻辑
  if (*(int *)(ui_context_ptr + 0x10) == 5) {
    visibility_factor = *(float *)(ui_context_ptr + 0x3c);
    interaction_strength = -UI_ONE_FLOAT;
    
    // 处理淡入效果的反向计算
    if (visibility_factor < UI_ONE_FLOAT) {
      position_x = *(float *)(ui_context_ptr + 0x34);
      position_y = *(float *)(ui_context_ptr + 0x38);
      size_width = *(float *)(ui_context_ptr + 0x30);
      blend_factor = (UI_ONE_FLOAT - visibility_factor) * smooth_factor;
      widget_array = (uint64_t *)(*(longlong *)(ui_context_ptr + 0xc78) + 0xf0);
      threshold_value = (UI_ONE_FLOAT - position_x) - position_y;
      visibility_factor = -UI_ONE_FLOAT;
      
      // 处理6个控件区域的最大交互强度
      do {
        switch(control_state) {
        case 0:
          blend_factor = threshold_value * size_width * blend_factor;
          break;
        case 1:
          blend_factor = (UI_ONE_FLOAT - size_width) * threshold_value * blend_factor;
          break;
        case 2:
          blend_factor = blend_factor * position_x;
          break;
        case 3:
          blend_factor = blend_factor * position_y;
          break;
        default:
          blend_factor = UI_ZERO_FLOAT;
        }
        
        // 更新最大交互强度和控件索引
        if (((int *)(ui_context_ptr + 0xc84) != (int *)0x0) && (visibility_factor < blend_factor)) {
          *(int *)(ui_context_ptr + 0xc84) = control_state;
          visibility_factor = blend_factor;
        }
        
        // 检查交互强度是否超过阈值
        if (UI_POINT_ONE_FLOAT < blend_factor) {
          FUN_180403910(*widget_array,event_data_ptr);
        }
        
        control_state = control_state + 1;
        widget_array = widget_array + 1;
      } while (control_state < 6);
      
      visibility_factor = *(float *)(ui_context_ptr + 0x3c);
    }
    
    // 处理淡出效果的反向计算
    control_state = 0;
    if (UI_ZERO_FLOAT < visibility_factor) {
      position_x = *(float *)(ui_context_ptr + 0x34);
      position_y = *(float *)(ui_context_ptr + 0x38);
      widget_array = (uint64_t *)(*(longlong *)(ui_context_ptr + 0xc78) + 0x120);
      size_width = *(float *)(ui_context_ptr + 0x30);
      visibility_factor = visibility_factor * smooth_factor;
      smooth_factor = (UI_ONE_FLOAT - position_x) - position_y;
      
      // 处理6个控件区域的最大交互强度
      do {
        switch(control_state) {
        case 0:
          blend_factor = smooth_factor * size_width * visibility_factor;
          break;
        case 1:
          blend_factor = (UI_ONE_FLOAT - size_width) * smooth_factor * visibility_factor;
          break;
        case 2:
          blend_factor = visibility_factor * position_x;
          break;
        case 3:
          blend_factor = visibility_factor * position_y;
          break;
        default:
          blend_factor = UI_ZERO_FLOAT;
        }
        
        // 更新最大交互强度和控件索引
        if (((int *)(ui_context_ptr + 0xc84) != (int *)0x0) && (interaction_strength < blend_factor)) {
          *(int *)(ui_context_ptr + 0xc84) = control_state;
          interaction_strength = blend_factor;
        }
        
        // 检查交互强度是否超过阈值
        if (UI_POINT_ONE_FLOAT < blend_factor) {
          FUN_180403910(*widget_array,event_data_ptr);
        }
        
        control_state = control_state + 1;
        widget_array = widget_array + 1;
      } while (control_state < 6);
    }
  }
  else {
    // 处理其他类型的主控件
    FUN_18065fdb0((longlong)*(int *)(ui_context_ptr + 0x10) * UI_ANIMATION_BLOCK_SIZE + *(longlong *)(ui_context_ptr + 0xc78),
                  event_data_ptr);
  }
  
  // 检查是否需要执行额外的清理工作
  if (*(longlong *)(event_data_ptr + 0x808) != 0) {
    func_0x000180435370(event_data_ptr);
  }
  
  return;
}





// 函数: void FUN_18065d804(longlong param_1,float param_2)
// UI系统动画控制器 - 管理复杂的UI动画状态和控制逻辑
// 该函数实现了高级的UI动画控制系统，包括动画状态管理、事件处理、参数计算等
// 主要功能：动画插值计算、控件状态管理、事件分发、性能优化
void ui_system_animation_controller(longlong animation_context_ptr,float time_factor)
{
  // 动画计算变量
  float position_x;             // X坐标位置
  float position_y;             // Y坐标位置
  float size_width;             // 宽度尺寸
  longlong context_ptr;         // 上下文指针
  uint64_t register_rbx;       // 寄存器RBX备份
  uint64_t register_rsi;       // 寄存器RSI备份
  int frame_count;              // 帧计数
  int animation_state;          // 动画状态
  longlong register_r12;        // 寄存器R12备份
  uint64_t register_r13;      // 寄存器R13备份
  uint64_t *widget_array;     // 控件数组指针
  uint64_t register_r15;      // 寄存器R15备份
  float blend_factor;            // 混合因子
  int32_t xmm6_data_a;       // XMM6寄存器数据A
  float interaction_strength;   // 交互强度
  int32_t xmm6_data_b;       // XMM6寄存器数据B
  int32_t xmm6_data_c;       // XMM6寄存器数据C
  int32_t xmm6_data_d;       // XMM6寄存器数据D
  int32_t xmm7_data_a;       // XMM7寄存器数据A
  float smooth_factor;          // 平滑因子
  int32_t xmm7_data_b;       // XMM7寄存器数据B
  int32_t xmm7_data_c;       // XMM7寄存器数据C
  int32_t xmm7_data_d;       // XMM7寄存器数据D
  float threshold_value;        // 阈值
  float visibility_factor;      // 可见性因子
  int32_t xmm12_data_a;      // XMM12寄存器数据A
  int32_t xmm12_data_b;      // XMM12寄存器数据B
  int32_t xmm12_data_c;      // XMM12寄存器数据C
  int32_t xmm12_data_d;      // XMM12寄存器数据D
  int32_t xmm13_data_a;      // XMM13寄存器数据A
  int32_t xmm13_data_b;      // XMM13寄存器数据B
  int32_t xmm13_data_c;      // XMM13寄存器数据C
  int32_t xmm13_data_d;      // XMM13寄存器数据D
  int32_t xmm14_data_a;      // XMM14寄存器数据A
  int32_t xmm14_data_b;      // XMM14寄存器数据B
  int32_t xmm14_data_c;      // XMM14寄存器数据C
  int32_t xmm14_data_d;      // XMM14寄存器数据D
  int32_t xmm15_data_a;      // XMM15寄存器数据A
  float animation_curve;        // 动画曲线值
  int32_t xmm15_data_b;      // XMM15寄存器数据B
  int32_t xmm15_data_c;      // XMM15寄存器数据C
  int32_t xmm15_data_d;      // XMM15寄存器数据D
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x18) = unaff_R13;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_RAX + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_RAX + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_RAX + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_RAX + -0x9c) = unaff_XMM13_Dd;
  *(int32_t *)(in_RAX + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_RAX + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_RAX + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_RAX + -0xac) = unaff_XMM14_Dd;
  *(int32_t *)(in_RAX + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_RAX + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_RAX + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_RAX + -0xbc) = unaff_XMM15_Dd;
  fVar12 = (3.0 - (param_2 + param_2)) * param_2 * param_2;
  fVar9 = 1.0 - fVar12;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_180660070(*(longlong *)(param_1 + 0xc78) + 0x30,*(uint *)(param_1 + 0x18) & 0x7fffffff);
  }
  else {
    FUN_18065ffa0((longlong)*(int *)(param_1 + 0x10) * 0x30 + *(longlong *)(param_1 + 0xc78),
                  *(int32_t *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    FUN_180660070(*(longlong *)(param_1 + 0xc78) + 0x30,*(uint *)(param_1 + 0x18) & 0x7fffffff);
  }
  else {
    FUN_18065ffa0((longlong)*(int *)(param_1 + 0x14) * 0x30 + *(longlong *)(param_1 + 0xc78),
                  *(int32_t *)(param_1 + 0x1c));
  }
  iVar5 = 0;
  if (0.0 < fVar9) {
    if (*(int *)(param_1 + 0x14) == 5) {
      fVar10 = *(float *)(param_1 + 0x3c);
      if (fVar10 < 1.0) {
        fVar1 = *(float *)(param_1 + 0x34);
        fVar2 = *(float *)(param_1 + 0x38);
        fVar3 = *(float *)(param_1 + 0x30);
        puVar6 = (uint64_t *)(*(longlong *)(param_1 + 0xc78) + 0xf0);
        fVar8 = (1.0 - fVar1) - fVar2;
        iVar4 = iVar5;
        do {
          switch(iVar4) {
          case 0:
            fVar11 = fVar8 * fVar3;
            break;
          case 1:
            fVar11 = (1.0 - fVar3) * fVar8;
            break;
          case 2:
            fVar11 = fVar1;
            break;
          case 3:
            fVar11 = fVar2;
            break;
          default:
            goto LAB_18065da24;
          }
          if (0.001 < (1.0 - fVar10) * fVar9 * fVar11) {
            FUN_180403910(*puVar6);
          }
LAB_18065da24:
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar4 < 6);
        fVar10 = *(float *)(param_1 + 0x3c);
      }
      if (0.0 < fVar10) {
        fVar1 = *(float *)(param_1 + 0x34);
        fVar2 = *(float *)(param_1 + 0x38);
        puVar6 = (uint64_t *)(*(longlong *)(param_1 + 0xc78) + 0x120);
        fVar3 = *(float *)(param_1 + 0x30);
        fVar8 = (1.0 - fVar1) - fVar2;
        iVar4 = iVar5;
        do {
          switch(iVar4) {
          case 0:
            fVar11 = fVar8 * fVar3;
            break;
          case 1:
            fVar11 = (1.0 - fVar3) * fVar8;
            break;
          case 2:
            fVar11 = fVar1;
            break;
          case 3:
            fVar11 = fVar2;
            break;
          default:
            goto LAB_18065dae7;
          }
          if (0.001 < fVar10 * fVar9 * fVar11) {
            FUN_180403910(*puVar6);
          }
LAB_18065dae7:
          iVar4 = iVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar4 < 6);
      }
    }
    else {
      FUN_18065fdb0((longlong)*(int *)(param_1 + 0x14) * 0x30 + *(longlong *)(param_1 + 0xc78));
    }
  }
  if (*(int *)(param_1 + 0x10) == 5) {
    fVar9 = *(float *)(param_1 + 0x3c);
    fVar10 = -1.0;
    if (fVar9 < 1.0) {
      fVar1 = *(float *)(param_1 + 0x34);
      fVar2 = *(float *)(param_1 + 0x38);
      fVar3 = *(float *)(param_1 + 0x30);
      fVar8 = (1.0 - fVar9) * fVar12;
      puVar6 = (uint64_t *)(*(longlong *)(param_1 + 0xc78) + 0xf0);
      fVar11 = (1.0 - fVar1) - fVar2;
      fVar9 = -1.0;
      do {
        switch(iVar5) {
        case 0:
          fVar7 = fVar11 * fVar3 * fVar8;
          break;
        case 1:
          fVar7 = (1.0 - fVar3) * fVar11 * fVar8;
          break;
        case 2:
          fVar7 = fVar8 * fVar1;
          break;
        case 3:
          fVar7 = fVar8 * fVar2;
          break;
        default:
          fVar7 = 0.0;
        }
        if (((int *)(param_1 + 0xc84) != (int *)0x0) && (fVar9 < fVar7)) {
          *(int *)(param_1 + 0xc84) = iVar5;
          fVar9 = fVar7;
        }
        if (0.001 < fVar7) {
          FUN_180403910(*puVar6);
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < 6);
      fVar9 = *(float *)(param_1 + 0x3c);
    }
    iVar5 = 0;
    if (0.0 < fVar9) {
      fVar1 = *(float *)(param_1 + 0x34);
      fVar2 = *(float *)(param_1 + 0x38);
      puVar6 = (uint64_t *)(*(longlong *)(param_1 + 0xc78) + 0x120);
      fVar3 = *(float *)(param_1 + 0x30);
      fVar9 = fVar9 * fVar12;
      fVar12 = (1.0 - fVar1) - fVar2;
      do {
        switch(iVar5) {
        case 0:
          fVar8 = fVar12 * fVar3 * fVar9;
          break;
        case 1:
          fVar8 = (1.0 - fVar3) * fVar12 * fVar9;
          break;
        case 2:
          fVar8 = fVar9 * fVar1;
          break;
        case 3:
          fVar8 = fVar9 * fVar2;
          break;
        default:
          fVar8 = 0.0;
        }
        if (((int *)(param_1 + 0xc84) != (int *)0x0) && (fVar10 < fVar8)) {
          *(int *)(param_1 + 0xc84) = iVar5;
          fVar10 = fVar8;
        }
        if (0.001 < fVar8) {
          FUN_180403910(*puVar6);
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < 6);
    }
  }
  else {
    FUN_18065fdb0((longlong)*(int *)(param_1 + 0x10) * 0x30 + *(longlong *)(param_1 + 0xc78));
  }
  if (*(longlong *)(unaff_R12 + 0x808) != 0) {
    func_0x000180435370();
  }
  return;
}





// 函数: void FUN_18065d902(int32_t param_1)
void FUN_18065d902(int32_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  longlong unaff_RBX;
  uint uVar4;
  uint uVar5;
  longlong unaff_R12;
  uint64_t *puVar6;
  longlong unaff_R15;
  float fVar7;
  float fVar8;
  float unaff_XMM7_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM12_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  
  uVar5 = 0;
  if (0.0 < unaff_XMM7_Da) {
    if (*(int *)(unaff_RBX + 0x14) == 5) {
      fVar8 = *(float *)(unaff_RBX + 0x3c);
      if (fVar8 < unaff_XMM12_Da) {
        param_1 = 0x3f800000;
        uVar4 = uVar5;
        do {
          if (uVar4 < 6) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((ulonglong)*(uint *)(unaff_R15 + 0x65ded4 + (longlong)(int)uVar4 * 4) +
                         unaff_R15);
                    // WARNING: Could not recover jumptable at 0x00018065d9d3. Too many branches
                    // WARNING: Treating indirect jump as call
            (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 6);
        fVar8 = *(float *)(unaff_RBX + 0x3c);
        unaff_XMM12_Da = 1.0;
      }
      uVar4 = uVar5;
      if (0.0 < fVar8) {
        do {
          if (uVar4 < 6) {
            UNRECOVERED_JUMPTABLE_00 =
                 (code *)((ulonglong)*(uint *)(unaff_R15 + 0x65deec + (longlong)(int)uVar4 * 4) +
                         unaff_R15);
                    // WARNING: Could not recover jumptable at 0x00018065da9b. Too many branches
                    // WARNING: Treating indirect jump as call
            (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
            return;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 6);
      }
    }
    else {
      param_1 = FUN_18065fdb0((longlong)*(int *)(unaff_RBX + 0x14) * 0x30 +
                              *(longlong *)(unaff_RBX + 0xc78));
    }
  }
  if (*(int *)(unaff_RBX + 0x10) == 5) {
    fVar8 = *(float *)(unaff_RBX + 0x3c);
    fVar10 = -1.0;
    if (fVar8 < unaff_XMM12_Da) {
      fVar1 = *(float *)(unaff_RBX + 0x34);
      fVar2 = *(float *)(unaff_RBX + 0x38);
      fVar3 = *(float *)(unaff_RBX + 0x30);
      fVar9 = (1.0 - fVar8) * unaff_XMM15_Da;
      puVar6 = (uint64_t *)(*(longlong *)(unaff_RBX + 0xc78) + 0xf0);
      fVar11 = (1.0 - fVar1) - fVar2;
      fVar8 = -1.0;
      do {
        switch(uVar5) {
        case 0:
          fVar7 = fVar11 * fVar3 * fVar9;
          break;
        case 1:
          fVar7 = (1.0 - fVar3) * fVar11 * fVar9;
          break;
        case 2:
          fVar7 = fVar9 * fVar1;
          break;
        case 3:
          fVar7 = fVar9 * fVar2;
          break;
        default:
          fVar7 = 0.0;
        }
        if (((uint *)(unaff_RBX + 0xc84) != (uint *)0x0) && (fVar8 < fVar7)) {
          *(uint *)(unaff_RBX + 0xc84) = uVar5;
          fVar8 = fVar7;
        }
        if (0.001 < fVar7) {
          FUN_180403910(*puVar6);
        }
        param_1 = 0x3f800000;
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while ((int)uVar5 < 6);
      fVar8 = *(float *)(unaff_RBX + 0x3c);
      unaff_R15 = 0x180000000;
      unaff_XMM14_Da = 0.001;
    }
    uVar5 = 0;
    if (0.0 < fVar8) {
      puVar6 = (uint64_t *)(*(longlong *)(unaff_RBX + 0xc78) + 0x120);
      do {
        if (uVar5 < 6) {
                    // WARNING: Could not recover jumptable at 0x00018065dd17. Too many branches
                    // WARNING: Treating indirect jump as call
          (*(code *)((ulonglong)*(uint *)(unaff_R15 + 0x65df1c + (longlong)(int)uVar5 * 4) +
                    unaff_R15))(0x3f800000);
          return;
        }
        if (((uint *)(unaff_RBX + 0xc84) != (uint *)0x0) && (fVar10 < 0.0)) {
          fVar10 = 0.0;
          *(uint *)(unaff_RBX + 0xc84) = uVar5;
        }
        if (unaff_XMM14_Da < 0.0) {
          FUN_180403910(*puVar6);
        }
        param_1 = 0x3f800000;
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while ((int)uVar5 < 6);
    }
  }
  else {
    param_1 = FUN_18065fdb0((longlong)*(int *)(unaff_RBX + 0x10) * 0x30 +
                            *(longlong *)(unaff_RBX + 0xc78));
  }
  if (*(longlong *)(unaff_R12 + 0x808) != 0) {
    func_0x000180435370(param_1);
  }
  return;
}





// 函数: void FUN_18065dec1(void)
void FUN_18065dec1(void)

{
  func_0x000180435370();
  return;
}





// 函数: void FUN_18065df80(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
void FUN_18065df80(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4,
                  float param_5,float param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = 1.0;
  fVar5 = 1.0;
  fVar7 = 1.0;
  fVar8 = 1.0;
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  param_1[3] = param_4[3];
  param_1[4] = param_4[4];
  param_1[5] = param_4[5];
  param_1[6] = param_4[6];
  param_1[7] = param_4[7];
  param_1[8] = param_4[8];
  param_1[9] = param_4[9];
  param_1[10] = param_4[10];
  param_1[0xb] = param_4[0xb];
  param_1[0xc] = param_4[0xc];
  param_1[0xd] = param_4[0xd];
  param_1[0xe] = param_4[0xe];
  param_1[0xf] = param_4[0xf];
  param_1[0x10] = param_4[0x10];
  param_1[0x11] = param_4[0x11];
  lVar1 = FUN_18065fd40();
  fVar9 = *(float *)(lVar1 + 8) / (param_6 * *(float *)(param_1[3] + 0x188));
  lVar1 = FUN_18065fd40(param_1[4]);
  fVar10 = *(float *)(lVar1 + 8) / (param_6 * *(float *)(param_1[4] + 0x188));
  lVar1 = FUN_18065fd40(param_1[1]);
  fVar4 = *(float *)(lVar1 + 8) / *(float *)(param_1[1] + 0x188);
  lVar1 = FUN_18065fd40(param_1[2]);
  param_5 = param_5 * *(float *)(param_1[2] + 0x188);
  fVar2 = fVar10;
  if (fVar9 <= fVar10) {
    fVar2 = fVar9;
  }
  fVar3 = *(float *)(lVar1 + 8) / param_5;
  if (fVar4 <= fVar2) {
    fVar2 = fVar4;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  if (fVar2 < fVar9) {
    fVar6 = fVar2 / fVar9;
  }
  if (fVar2 < fVar10) {
    fVar8 = fVar2 / fVar10;
  }
  if (fVar2 < fVar4) {
    fVar7 = fVar2 / fVar4;
  }
  if (fVar2 < fVar3) {
    fVar5 = (param_5 * fVar2) / *(float *)(lVar1 + 8);
  }
  lVar1 = FUN_18065fd40(param_1[3]);
  *(float *)(param_1 + 0x12) = (fVar6 * *(float *)(lVar1 + 8)) / *(float *)(param_1[3] + 0x188);
  lVar1 = FUN_18065fd40(param_1[4]);
  *(float *)((longlong)param_1 + 0x94) =
       (fVar8 * *(float *)(lVar1 + 8)) / *(float *)(param_1[4] + 0x188);
  lVar1 = FUN_18065fd40(param_1[1]);
  *(float *)((longlong)param_1 + 0x9c) =
       (fVar7 * *(float *)(lVar1 + 8)) / *(float *)(param_1[1] + 0x188);
  lVar1 = FUN_18065fd40(param_1[2]);
  *(float *)(param_1 + 0x13) = (fVar5 * *(float *)(lVar1 + 8)) / *(float *)(param_1[2] + 0x188);
  return;
}





// 函数: void FUN_18065e200(void)
void FUN_18065e200(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18065e276(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
void FUN_18065e276(longlong param_1,uint64_t param_2,longlong param_3,uint64_t param_4)

{
  int iVar1;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  longlong *plVar2;
  int8_t *puVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  float fVar7;
  float unaff_XMM12_Da;
  float unaff_XMM15_Da;
  longlong lStack0000000000000048;
  uint64_t uStack0000000000000058;
  
  fVar7 = **(float **)(unaff_RBP + 0x10d0);
  fVar7 = ((fVar7 * 6.0 - 15.0) * fVar7 + 10.0) * fVar7 * fVar7 * fVar7 +
          (*(float **)(unaff_RBP + 0x10d0))[9];
  lStack0000000000000048 = param_1;
  uStack0000000000000058 = param_4;
  if ((1e-06 < fVar7) && (*(longlong *)(param_3 + 0x810) != 0)) {
    puVar3 = &stack0x00000060;
    uVar6 = unaff_RDI & 0xffffffff;
    do {
      func_0x000180074f10(puVar3);
      puVar3 = puVar3 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    lVar4 = unaff_RBP + 0x780;
    do {
      func_0x000180074f10(lVar4);
      lVar4 = lVar4 + 0x10;
      unaff_RDI = unaff_RDI - 1;
    } while (unaff_RDI != 0);
                    // WARNING: Subroutine does not return
    memset(&stack0x00000060,0,0x1050);
  }
  if (fVar7 < 1.0) {
    puVar3 = &stack0x00000060;
    uVar6 = unaff_RDI;
    do {
      func_0x000180074f10(puVar3);
      puVar3 = puVar3 + 0x10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    lVar4 = unaff_RBP + 0x780;
    do {
      func_0x000180074f10(lVar4);
      lVar4 = lVar4 + 0x10;
      unaff_RDI = unaff_RDI - 1;
    } while (unaff_RDI != 0);
                    // WARNING: Subroutine does not return
    memset(&stack0x00000060,0,0x1050);
  }
  iVar1 = 10;
  pfVar5 = *(float **)(unaff_RBP + 0x10d0);
  plVar2 = (longlong *)(param_1 + 0x50);
  do {
    pfVar5 = pfVar5 + 1;
    if ((*plVar2 != 0) && (unaff_XMM15_Da < unaff_XMM12_Da * *pfVar5)) {
      FUN_180403910(*plVar2,param_4);
    }
    iVar1 = iVar1 + 1;
    plVar2 = plVar2 + 1;
  } while (iVar1 < 0x12);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xfb0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18065e9a5(void)
void FUN_18065e9a5(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  int iVar6;
  char cVar7;
  byte bVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  float *pfVar9;
  longlong *plVar10;
  char cVar11;
  ulonglong uVar12;
  char unaff_R12B;
  longlong unaff_R13;
  longlong lVar13;
  bool in_ZF;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int8_t in_XMM2 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  uint unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar25;
  float unaff_XMM12_Da;
  float unaff_XMM15_Da;
  float fStack000000000000003c;
  longlong in_stack_00000040;
  longlong in_stack_00000048;
  longlong in_stack_00000050;
  uint64_t in_stack_00000058;
  
  fVar25 = unaff_XMM10_Da * unaff_XMM12_Da;
  if (!in_ZF) {
    cVar11 = *(char *)(unaff_RBP + 4000);
    uVar12 = 0;
    if ('\0' < cVar11) {
      do {
        cVar7 = (char)uVar12;
        if ((*(ulonglong *)(unaff_RBP + 0x770) >> (uVar12 & 0x3f) & 1) != 0) {
          pfVar9 = (float *)(unaff_RBP + 0x780 + (longlong)cVar7 * 0x10);
          fVar22 = *pfVar9;
          fVar15 = pfVar9[1];
          fVar20 = pfVar9[2];
          fVar2 = pfVar9[3];
          fVar19 = fVar2 * fVar2 + fVar22 * fVar22;
          fVar21 = fVar20 * fVar20 + fVar15 * fVar15;
          fVar23 = fVar19 + fVar15 * fVar15 + fVar20 * fVar20;
          fVar24 = fVar21 + fVar22 * fVar22 + fVar2 * fVar2;
          auVar4._4_4_ = fVar19 + fVar21 + 1.1754944e-38;
          auVar4._0_4_ = fVar21 + fVar19 + 1.1754944e-38;
          auVar4._8_4_ = fVar23 + 1.1754944e-38;
          auVar4._12_4_ = fVar24 + 1.1754944e-38;
          in_XMM2 = rsqrtps(in_XMM2,auVar4);
          fVar14 = in_XMM2._0_4_;
          fVar16 = in_XMM2._4_4_;
          fVar17 = in_XMM2._8_4_;
          fVar18 = in_XMM2._12_4_;
          pfVar9 = (float *)(unaff_RBP + 0x780 + (longlong)cVar7 * 0x10);
          *pfVar9 = (3.0 - fVar14 * fVar14 * (fVar21 + fVar19)) * fVar14 * 0.5 * fVar22;
          pfVar9[1] = (3.0 - fVar16 * fVar16 * (fVar19 + fVar21)) * fVar16 * 0.5 * fVar15;
          pfVar9[2] = (3.0 - fVar17 * fVar17 * fVar23) * fVar17 * 0.5 * fVar20;
          pfVar9[3] = (3.0 - fVar18 * fVar18 * fVar24) * fVar18 * 0.5 * fVar2;
          cVar11 = *(char *)(unaff_RBP + 4000);
        }
        uVar12 = (ulonglong)(byte)(cVar7 + 1U);
      } while ((char)(cVar7 + 1U) < cVar11);
    }
    if (unaff_R12B != '\0') {
      pfVar3 = *(float **)(unaff_RBP + 0x10d8);
      pfVar9 = (float *)(unaff_R13 + 4);
      lVar13 = 0;
      do {
        bVar8 = *(byte *)(in_stack_00000040 + lVar13);
        if ((*(ulonglong *)(unaff_RBP + 0x770) >> ((ulonglong)bVar8 & 0x3f) & 1) != 0) {
          FUN_18022a890(&stack0x00000060);
          fVar22 = pfVar3[1];
          fVar15 = *pfVar3;
          pfVar1 = (float *)(unaff_RBP + 0x360 + (longlong)(char)bVar8 * 0x10);
          fVar2 = pfVar1[2];
          fVar20 = *(float *)((longlong)(char)bVar8 * 0x1b0 + 0x38 +
                             *(longlong *)(unaff_RSI + 0x140));
          fVar21 = (fVar15 * *pfVar1 + fVar22 * pfVar1[1]) * pfVar9[0x16];
          fVar19 = fVar15 * pfVar1[1] - fVar22 * *pfVar1;
          pfVar9[-1] = (fVar15 * fVar21 - fVar22 * fVar19) * unaff_XMM10_Da + pfVar9[-1];
          *pfVar9 = (fVar15 * fVar19 + fVar22 * fVar21) * unaff_XMM10_Da + *pfVar9;
          pfVar9[1] = ((fVar2 - fVar20) * (pfVar9[0x16] + 1.0) * 0.5 + fVar20) * unaff_XMM10_Da +
                      pfVar9[1];
        }
        lVar13 = lVar13 + 1;
        pfVar9 = pfVar9 + 0x19;
        unaff_RBX = in_stack_00000050;
      } while (lVar13 < 2);
    }
  }
  fVar22 = *(float *)(unaff_R13 + 0xc0);
  bVar8 = 0;
  fVar15 = *(float *)(unaff_R13 + 0x5c);
  fStack000000000000003c = *(float *)(unaff_RBX + 0x102c);
  fVar20 = *(float *)(unaff_RBP + 0xf88);
  fVar2 = *(float *)(unaff_RBP + 0xf80);
  *(ulonglong *)(unaff_RBX + 0x800) =
       *(ulonglong *)(unaff_RBX + 0x800) | *(ulonglong *)(unaff_RBX + 0x810);
  fVar19 = *(float *)(unaff_RBP + 0xf84);
  *(float *)(unaff_RBX + 0x1020) = fVar2 * fVar25 + *(float *)(unaff_RBX + 0x1020);
  *(float *)(unaff_RBX + 0x1024) = *(float *)(unaff_RBX + 0x1024) + fVar19 * fVar25;
  *(float *)(unaff_RBX + 0x1028) =
       (fVar20 * fVar25 + *(float *)(unaff_RBX + 0x1028)) -
       (0.5 - (fVar22 + fVar15) * 0.25) * fVar20 * fVar25;
  *(float *)(unaff_RBX + 0x102c) = fStack000000000000003c;
  if ('\0' < *(char *)(unaff_RBX + 0x1040)) {
    do {
      if ((*(ulonglong *)(unaff_RBX + 0x810) >> ((ulonglong)bVar8 & 0x3f) & 1) != 0) {
        uVar12 = (ulonglong)(char)bVar8;
        pfVar9 = (float *)(unaff_RBP + 0x780 + uVar12 * 0x10);
        fVar22 = *pfVar9;
        fVar15 = pfVar9[1];
        fVar20 = pfVar9[2];
        fStack000000000000003c = pfVar9[3];
        pfVar9 = (float *)(unaff_RBX + (uVar12 + 0x82) * 0x10);
        fVar2 = pfVar9[1];
        fVar19 = pfVar9[2];
        fVar21 = pfVar9[3];
        fVar14 = *pfVar9 * fVar22;
        fVar16 = fVar2 * fVar15;
        fVar17 = fVar19 * fVar20;
        fVar18 = fVar21 * fStack000000000000003c;
        fVar23 = fVar18 + fVar14;
        fVar24 = fVar17 + fVar16;
        auVar5._4_4_ = fVar23 + fVar24;
        auVar5._0_4_ = fVar24 + fVar23;
        auVar5._8_4_ = fVar23 + fVar16 + fVar17;
        auVar5._12_4_ = fVar24 + fVar14 + fVar18;
        iVar6 = movmskps((char)bVar8 * 2,auVar5);
        if (iVar6 != 0) {
          fVar22 = (float)((uint)fVar22 ^ unaff_XMM9_Da);
          fVar15 = (float)((uint)fVar15 ^ unaff_XMM9_Da);
          fVar20 = (float)((uint)fVar20 ^ unaff_XMM9_Da);
          fStack000000000000003c = (float)((uint)fStack000000000000003c ^ unaff_XMM9_Da);
        }
        pfVar3 = (float *)(unaff_RBX + (uVar12 + 0x82) * 0x10);
        *pfVar3 = *pfVar9 + fVar25 * fVar22;
        pfVar3[1] = fVar2 + fVar25 * fVar15;
        pfVar3[2] = fVar19 + fVar25 * fVar20;
        pfVar3[3] = fVar21 + fVar25 * fStack000000000000003c;
        *(ulonglong *)(unaff_RBX + 0x800) =
             *(ulonglong *)(unaff_RBX + 0x800) |
             *(ulonglong *)(uVar12 * 0x1b0 + 0xe8 + *(longlong *)(unaff_RSI + 0x140));
        *(ulonglong *)(unaff_RBX + 0x808) =
             *(ulonglong *)(unaff_RBX + 0x808) | 1L << (uVar12 & 0x3f);
      }
      bVar8 = bVar8 + 1;
    } while ((char)bVar8 < *(char *)(unaff_RBX + 0x1040));
  }
  fVar25 = *(float *)(unaff_RBP + 0x1108);
  iVar6 = 10;
  pfVar9 = *(float **)(unaff_RBP + 0x10d0);
  plVar10 = (longlong *)(in_stack_00000048 + 0x50);
  do {
    pfVar9 = pfVar9 + 1;
    if ((*plVar10 != 0) && (unaff_XMM15_Da < fVar25 * *pfVar9)) {
      FUN_180403910(*plVar10,in_stack_00000058);
    }
    iVar6 = iVar6 + 1;
    plVar10 = plVar10 + 1;
  } while (iVar6 < 0x12);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xfb0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18065ed75(void)
void FUN_18065ed75(void)

{
  int iVar1;
  longlong unaff_RBP;
  longlong *plVar2;
  float *pfVar3;
  float unaff_XMM12_Da;
  float unaff_XMM15_Da;
  longlong in_stack_00000048;
  uint64_t in_stack_00000058;
  
  iVar1 = 10;
  pfVar3 = *(float **)(unaff_RBP + 0x10d0);
  plVar2 = (longlong *)(in_stack_00000048 + 0x50);
  do {
    pfVar3 = pfVar3 + 1;
    if ((*plVar2 != 0) && (unaff_XMM15_Da < unaff_XMM12_Da * *pfVar3)) {
      FUN_180403910(*plVar2,in_stack_00000058);
    }
    iVar1 = iVar1 + 1;
    plVar2 = plVar2 + 1;
  } while (iVar1 < 0x12);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xfb0) ^ (ulonglong)&stack0x00000000);
}





