#include "TaleWorlds.Native.Split.h"

/**
 * 04_ui_system_part349.c - UI系统高级渲染控制和状态管理模块
 * 
 * 本模块包含2个核心函数，涵盖UI系统高级渲染控制、状态管理、
 * 参数处理、数据验证和资源管理等功能。主要功能包括：
 * - UI系统渲染控制
 * - 状态管理和验证
 * - 参数处理和计算
 * - 资源管理和清理
 * - 条件判断和分支处理
 * 
 * 主要函数：
 * - UISystem_AdvancedRenderController: UI系统高级渲染控制器
 * - UISystem_StateManager: UI系统状态管理器
 */

// 常量定义
#define UI_RENDER_THRESHOLD 0x3f800000      // UI渲染阈值 (1.0f)
#define UI_RENDER_OFFSET_1 0x27             // UI渲染偏移量1
#define UI_RENDER_OFFSET_2 0x26              // UI渲染偏移量2
#define UI_RENDER_OFFSET_3 0x24              // UI_RENDER_OFFSET_3
#define UI_RENDER_OFFSET_4 0x2f              // UI渲染偏移量4
#define UI_RENDER_OFFSET_5 0x2e              // UI渲染偏移量5
#define UI_RENDER_OFFSET_6 0x2d              // UI_RENDER_OFFSET_6
#define UI_RENDER_OFFSET_7 0x2c              // UI_RENDER_OFFSET_7
#define UI_RENDER_OFFSET_8 0x2b              // UI_RENDER_OFFSET_8
#define UI_RENDER_OFFSET_9 0x2a              // UI_RENDER_OFFSET_9
#define UI_RENDER_OFFSET_10 0x29            // UI渲染偏移量10
#define UI_RENDER_OFFSET_11 0x18            // UI渲染偏移量11
#define UI_RENDER_STACK_SIZE 0x27            // UI渲染栈大小
#define UI_RENDER_FLOAT_THRESHOLD 1.1920929e-07 // UI渲染浮点阈值
#define UI_RENDER_STATE_NORMAL 1             // UI渲染正常状态
#define UI_RENDER_STATE_ALTERNATIVE 2        // UI渲染替代状态
#define UI_RENDER_STATE_DEFAULT 3            // UI渲染默认状态
#define UI_RENDER_STATE_EXTENDED 4            // UI渲染扩展状态

// 函数别名定义
#define UISystem_AdvancedRenderController FUN_1808596d0    // UI系统高级渲染控制器
#define UISystem_StateManager FUN_180859a50                // UI系统状态管理器

// UI系统函数别名
#define UISystem_CallRenderFunction FUN_18076b390           // UI系统调用渲染函数
#define UISystem_ProcessRenderState FUN_1808c6c40          // UI系统处理渲染状态
#define UISystem_UpdateRenderParameters FUN_1808c6c50       // UI系统更新渲染参数
#define UISystem_CalculateRenderValue FUN_1808c6120         // UI系统计算渲染值
#define UISystem_CallUIFunction FUN_1808fc050               // UI系统调用UI函数
#define UISystem_CallAlternativeFunction FUN_1808c6cd0      // UI系统调用替代函数

// UI系统结构体别名
typedef struct {
    uint render_state;                    // 渲染状态
    uint render_parameter;                // 渲染参数
    uint render_value;                    // 渲染值
    uint render_flag;                     // 渲染标志
    uint render_mode;                     // 渲染模式
    uint render_type;                     // 渲染类型
    uint render_style;                    // 渲染样式
    uint render_option;                   // 渲染选项
    uint render_attribute;                 // 渲染属性
    uint render_property;                 // 渲染属性
    float render_factor;                   // 渲染因子
    float render_threshold;               // 渲染阈值
} UI_RenderState;

/**
 * UI系统高级渲染控制器
 * 
 * 本函数负责控制UI系统的高级渲染功能，包括：
 * - 渲染状态管理
 * - 参数处理和计算
 * - 条件判断和分支处理
 * - 资源管理和清理
 * - 渲染流程控制
 * 
 * @param ui_context UI系统上下文指针
 * @param render_context 渲染上下文指针
 * @return 无
 */
void UISystem_AdvancedRenderController(int64_t ui_context, int64_t render_context)
{
    uint render_state;                    // 渲染状态
    uint render_parameter;                // 渲染参数
    uint render_value;                    // 渲染值
    uint* render_data_ptr;                 // 渲染数据指针
    int result_code;                       // 结果代码
    int64_t context_data;                  // 上下文数据
    int64_t* state_ptr;                    // 状态指针
    int64_t* current_ptr;                  // 当前指针
    int64_t* end_ptr;                      // 结束指针
    uint8_t temp_data;                     // 临时数据
    float render_factor;                   // 渲染因子
    float render_threshold;               // 渲染阈值
    uint8_t stack_buffer[32];             // 栈缓冲区
    uint render_state_1;                  // 渲染状态1
    uint render_state_2;                  // 渲染状态2
    uint render_state_3;                  // 渲染状态3
    uint render_state_4;                  // 渲染状态4
    uint render_state_5;                  // 渲染状态5
    uint render_state_6;                  // 渲染状态6
    uint render_state_7;                  // 渲染状态7
    uint render_state_8;                  // 渲染状态8
    uint render_state_9;                  // 渲染状态9
    uint render_state_10;                 // 渲染状态10
    uint render_state_11;                 // 渲染状态11
    int64_t stack_data;                    // 栈数据
    uint8_t temp_stack[40];                // 临时栈
    uint64_t stack_guard;                  // 栈保护
    
    // 初始化栈保护
    stack_guard = _DAT_180bf00a8 ^ (uint64_t)stack_buffer;
    
    // 获取上下文数据
    context_data = **(int64_t**)(ui_context + 0x38);
    end_ptr = (int64_t*)(context_data + 0x60);
    current_ptr = (int64_t*)*end_ptr;
    render_state = *(uint*)(context_data + 0xa0);
    render_state_11 = render_state;
    stack_data = ui_context;
    
    // 处理渲染状态
    if (current_ptr != end_ptr) {
        do {
            // 检查渲染条件
            if ((*(int64_t*)(*(int64_t*)(render_context + 0x28) + 0x10) == current_ptr[2]) &&
                (*(int64_t*)(*(int64_t*)(render_context + 0x28) + 0x18) == current_ptr[3])) {
                // 调用渲染函数
                context_data = (**(void (**)(void))(**(int64_t**)(ui_context + 0x170) + 0x268))
                                (*(int64_t**)(ui_context + 0x170), current_ptr + 4,
                                 (int)((uint64_t)end_ptr >> 8) | 1);
                
                if (context_data == 0) {
                    // 设置渲染状态
                    render_state_10 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_4);
                    render_state_9 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_5);
                    render_state_8 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_6);
                    render_state_7 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_7);
                    render_state_6 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_8);
                    render_state_5 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_9);
                    render_state_4 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_10);
                    render_state_3 = (uint)*(uint8_t*)(current_ptr + 5);
                    render_state_2 = (uint)*(uint16_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_2);
                    render_state_1 = (uint)*(uint16_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_3);
                    
                    // 调用渲染函数
                    UISystem_CallRenderFunction(temp_stack, UI_RENDER_STACK_SIZE, &UNK_180958180, (int)current_ptr[4]);
                }
                
                render_data_ptr = *(uint**)(context_data + 0x30);
                render_parameter = *(uint*)(ui_context + 0x24);
                
                if (render_parameter < *render_data_ptr) {
                    // 计算渲染因子
                    render_factor = (float)render_parameter / (float)*render_data_ptr;
                    
                    if (*(int*)(*(int64_t*)(render_context + 0x28) + 0x40) == 4) {
                        if (UI_RENDER_FLOAT_THRESHOLD <= ABS((float)render_data_ptr[1])) {
                            render_factor = 0.0f;
                        }
                        else {
                            render_factor = 1.0f;
                        }
                    }
                    
                    temp_data = UI_RENDER_STATE_NORMAL;
                }
                else {
                    render_value = render_data_ptr[(int64_t)*(int*)(context_data + 0x38) * 6 - 6];
                    
                    if (render_parameter <= render_value) {
                        temp_data = UI_RENDER_STATE_NORMAL;
                        goto LAB_RENDER_STATE_EXTENDED;
                    }
                    
                    render_factor = 0.0f;
                    
                    if (((render_value < render_state) &&
                        (render_threshold = (float)(int)(render_state - render_parameter) / (float)(int)(render_state - render_value), 0.0f <= render_threshold)) &&
                        (render_factor = render_threshold, 1.0f <= render_threshold)) {
                        render_factor = 1.0f;
                    }
                    
                    temp_data = UI_RENDER_STATE_ALTERNATIVE;
                }
                
                result_code = UISystem_ProcessRenderState(render_context, render_factor, temp_data);
                
                if (result_code != 0) goto LAB_RENDER_STATE_COMPLETE;
                goto LAB_RENDER_STATE_UPDATE;
            }
        } while ((current_ptr != end_ptr) && (current_ptr = (int64_t*)*current_ptr, current_ptr != end_ptr));
    }
    
    // 处理扩展渲染状态
    end_ptr = (int64_t*)(context_data + 0x70);
    
    if (*(int64_t**)(context_data + 0x70) != end_ptr) {
        current_ptr = *(int64_t**)(context_data + 0x70);
        
        do {
            // 检查渲染条件
            if ((*(int64_t*)(*(int64_t*)(render_context + 0x28) + 0x10) == current_ptr[2]) &&
                (*(int64_t*)(*(int64_t*)(render_context + 0x28) + 0x18) == current_ptr[3])) {
                // 调用渲染函数
                context_data = (**(void (**)(void))(**(int64_t**)(ui_context + 0x170) + 0x268))
                                (*(int64_t**)(ui_context + 0x170), current_ptr + 4,
                                 (int)((uint64_t)end_ptr >> 8) | 1);
                
                if (context_data == 0) {
                    // 设置渲染状态
                    render_state_10 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_4);
                    render_state_9 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_5);
                    render_state_8 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_6);
                    render_state_7 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_7);
                    render_state_6 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_8);
                    render_state_5 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_9);
                    render_state_4 = (uint)*(uint8_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_10);
                    render_state_3 = (uint)*(uint8_t*)(current_ptr + 5);
                    render_state_2 = (uint)*(uint16_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_2);
                    render_state_1 = (uint)*(uint16_t*)((int64_t)current_ptr + UI_RENDER_OFFSET_3);
                    
                    // 调用渲染函数
                    UISystem_CallRenderFunction(temp_stack, UI_RENDER_STACK_SIZE, &UNK_180958180, (int)current_ptr[4]);
                }
                
                temp_data = UI_RENDER_STATE_EXTENDED;
LAB_RENDER_STATE_EXTENDED:
                result_code = UISystem_ProcessRenderState(render_context, UI_RENDER_THRESHOLD, temp_data);
                
                if (result_code == 0) {
LAB_RENDER_STATE_UPDATE:
                    render_value = UISystem_CalculateRenderValue(context_data, *(uint*)(ui_context + 0x24));
                    UISystem_UpdateRenderParameters(render_context, render_value);
                }
                
                goto LAB_RENDER_STATE_COMPLETE;
            }
        } while ((current_ptr != end_ptr) && (current_ptr = (int64_t*)*current_ptr, current_ptr != end_ptr));
    }
    
    // 处理默认渲染状态
    if (*(int*)(render_context + 0x6c) != 4) {
        UISystem_ProcessRenderState(render_context, current_ptr, UI_RENDER_STATE_DEFAULT);
    }
    
LAB_RENDER_STATE_COMPLETE:
    // 调用UI函数
    UISystem_CallUIFunction(stack_guard ^ (uint64_t)stack_buffer);
}

/**
 * UI系统状态管理器
 * 
 * 本函数负责管理UI系统的状态，包括：
 * - 状态验证和检查
 * - 资源管理
 * - 条件判断
 * - 渲染控制
 * - 错误处理
 * 
 * @param ui_context UI系统上下文指针
 * @return 状态管理结果
 */
uint64_t UISystem_StateManager(int64_t ui_context)
{
    uint render_state;                    // 渲染状态
    int64_t* state_ptr;                    // 状态指针
    uint64_t result_value;                 // 结果值
    int64_t* current_ptr;                  // 当前指针
    int64_t* next_ptr;                     // 下一个指针
    int64_t* end_ptr;                      // 结束指针
    
    // 检查UI上下文状态
    if (*(int*)(ui_context + 0x34) - 4U < 2) {
        if (*(int64_t**)(ui_context + 0x38) == (int64_t*)0x0) {
            return 0x1c;
        }
        
        if (**(int64_t**)(ui_context + 0x38) != 0) {
            end_ptr = (int64_t*)0x0;
            current_ptr = (int64_t*)(ui_context + 0x118);
            next_ptr = (int64_t*)(*current_ptr + UI_RENDER_OFFSET_11);
            
            if (*current_ptr == 0) {
                next_ptr = end_ptr;
            }
            
            state_ptr = end_ptr;
            
            if (next_ptr != (int64_t*)0x0) {
                state_ptr = next_ptr + 3;
            }
            
            while (state_ptr != current_ptr) {
                next_ptr = state_ptr + -3;
                
                if (state_ptr == (int64_t*)0x0) {
                    next_ptr = end_ptr;
                }
                
                result_value = UISystem_AdvancedRenderController(ui_context, next_ptr);
                
                if ((int)result_value != 0) {
                    return result_value;
                }
                
                if (state_ptr == current_ptr) {
                    return 0;
                }
                
                next_ptr = (int64_t*)(*state_ptr + UI_RENDER_OFFSET_11);
                
                if (*state_ptr == 0) {
                    next_ptr = end_ptr;
                }
                
                state_ptr = end_ptr;
                
                if (next_ptr != (int64_t*)0x0) {
                    state_ptr = next_ptr + 3;
                }
            }
        }
    }
    else {
        render_state = *(uint*)(ui_context + 0x20);
        end_ptr = (int64_t*)(ui_context + 0x118);
        next_ptr = (int64_t*)0x0;
        current_ptr = (int64_t*)(*end_ptr + UI_RENDER_OFFSET_11);
        
        if (*end_ptr == 0) {
            current_ptr = next_ptr;
        }
        
        state_ptr = next_ptr;
        
        if (current_ptr != (int64_t*)0x0) {
            state_ptr = current_ptr + 3;
        }
        
        while (state_ptr != end_ptr) {
            current_ptr = state_ptr + -3;
            
            if (state_ptr == (int64_t*)0x0) {
                current_ptr = next_ptr;
            }
            
            result_value = UISystem_CallAlternativeFunction(current_ptr, render_state);
            
            if ((int)result_value != 0) {
                return result_value;
            }
            
            if (state_ptr == end_ptr) {
                return 0;
            }
            
            current_ptr = (int64_t*)(*state_ptr + UI_RENDER_OFFSET_11);
            
            if (*state_ptr == 0) {
                current_ptr = next_ptr;
            }
            
            state_ptr = next_ptr;
            
            if (current_ptr != (int64_t*)0x0) {
                state_ptr = current_ptr + 3;
            }
        }
    }
    
    return 0;
}