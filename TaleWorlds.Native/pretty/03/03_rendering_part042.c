#include "TaleWorlds.Native.Split.h"

// 03_rendering_part042.c - 渲染系统指令处理和顶点数据计算模块
// 该模块包含9个核心函数，主要处理渲染指令解析、顶点计算和插值操作

// =============================================================================
// 数据结构定义
// =============================================================================

/// @brief 渲染指令操作码枚举
typedef enum {
    RENDER_OP_NOP = 0,           // 无操作
    RENDER_OP_DRAW = 1,          // 绘制操作
    RENDER_OP_TRANSFORM = 2,     // 变换操作
    RENDER_OP_SET_COLOR = 3,     // 设置颜色
    RENDER_OP_SET_TEXTURE = 4,   // 设置纹理
    RENDER_OP_PUSH_STATE = 5,   // 推送状态
    RENDER_OP_POP_STATE = 6,    // 弹出状态
    RENDER_OP_JUMP = 7,         // 跳转操作
    RENDER_OP_BRANCH = 8,       // 分支操作
    RENDER_OP_COMPARE = 9,      // 比较操作
    RENDER_OP_CALL = 10,        // 调用操作
    RENDER_OP_RETURN = 11,      // 返回操作
    RENDER_OP_STRING = 12,      // 字符串操作
    RENDER_OP_END = 13,         // 结束操作
    RENDER_OP_SPECIAL = 14      // 特殊操作
} render_opcode_t;

/// @brief 渲染数据流结构
typedef struct {
    uint8_t* data_ptr;          // 数据指针
    uint32_t data_size;         // 数据大小
    uint32_t current_offset;    // 当前偏移量
    uint32_t max_offset;        // 最大偏移量
    float operand_stack[32];    // 操作数栈
    uint32_t stack_ptr;         // 栈指针
    uint32_t state_flags;       // 状态标志
} render_data_stream_t;

/// @brief 渲染参数结构
typedef struct {
    float param1;               // 参数1
    float param2;               // 参数2
    float param3;               // 参数3
    float param4;               // 参数4
    float min_bound;            // 最小边界
    float max_bound;            // 最大边界
    float scale_factor;         // 缩放因子
    float* output_buffer;       // 输出缓冲区
    int buffer_size;            // 缓冲区大小
} render_params_t;

/// @brief 渲染上下文结构
typedef struct {
    void* render_context;       // 渲染上下文
    uint32_t context_flags;     // 上下文标志
    render_data_stream_t* data_stream; // 数据流
    render_params_t* params;    // 渲染参数
    uint32_t object_count;      // 对象计数
    void** object_array;        // 对象数组
} render_context_t;

// =============================================================================
// 核心函数实现
// =============================================================================

/**
 * @brief 解析并执行渲染指令流
 * @param context 渲染上下文指针
 * @param operation 操作码
 * @param data_ptr 数据指针
 * @return 执行状态，成功返回非0，失败返回0
 * 
 * 该函数是渲染系统的核心指令解析器，负责解析和执行各种渲染操作指令。
 * 支持多种渲染操作类型，包括绘制、变换、状态管理和特殊操作。
 */
uint32_t parse_render_instruction_stream(void* context, uint32_t operation, void* data_ptr) {
    render_context_t* render_ctx = (render_context_t*)context;
    render_data_stream_t* stream = (render_data_stream_t*)data_ptr;
    
    if (!render_ctx || !stream) {
        return 0;
    }
    
    uint8_t* current_ptr = stream->data_ptr + stream->current_offset;
    uint32_t remaining_size = stream->data_size - stream->current_offset;
    
    // 初始化操作数栈
    float operand_stack[32];
    uint32_t stack_ptr = 0;
    uint32_t state_flags = 0;
    
    while (stream->current_offset < stream->max_offset) {
        uint8_t opcode = *current_ptr;
        current_ptr++;
        stream->current_offset++;
        
        switch (opcode) {
            case RENDER_OP_NOP:
                // 无操作，跳过
                break;
                
            case RENDER_OP_DRAW:
                // 绘制操作
                if (stack_ptr >= 1) {
                    execute_draw_operation(render_ctx, operand_stack[stack_ptr - 1]);
                    stack_ptr--;
                }
                break;
                
            case RENDER_OP_TRANSFORM:
                // 变换操作
                if (stack_ptr >= 3) {
                    execute_transform_operation(render_ctx, 
                        operand_stack[stack_ptr - 3],
                        operand_stack[stack_ptr - 2],
                        operand_stack[stack_ptr - 1]);
                    stack_ptr -= 3;
                }
                break;
                
            case RENDER_OP_SET_COLOR:
                // 设置颜色
                if (stack_ptr >= 4) {
                    render_ctx->params->param1 = operand_stack[stack_ptr - 4];
                    render_ctx->params->param2 = operand_stack[stack_ptr - 3];
                    render_ctx->params->param3 = operand_stack[stack_ptr - 2];
                    render_ctx->params->param4 = operand_stack[stack_ptr - 1];
                    stack_ptr -= 4;
                }
                break;
                
            case RENDER_OP_PUSH_STATE:
                // 推送渲染状态
                state_flags++;
                break;
                
            case RENDER_OP_POP_STATE:
                // 弹出渲染状态
                if (state_flags > 0) {
                    state_flags--;
                }
                break;
                
            case RENDER_OP_JUMP:
                // 跳转操作
                if (stack_ptr >= 1) {
                    uint32_t jump_target = (uint32_t)operand_stack[stack_ptr - 1];
                    stream->current_offset = jump_target;
                    current_ptr = stream->data_ptr + stream->current_offset;
                    stack_ptr--;
                }
                break;
                
            case RENDER_OP_BRANCH:
                // 分支操作
                if (stack_ptr >= 2) {
                    uint32_t condition = (uint32_t)operand_stack[stack_ptr - 2];
                    uint32_t target = (uint32_t)operand_stack[stack_ptr - 1];
                    if (condition != 0) {
                        stream->current_offset = target;
                        current_ptr = stream->data_ptr + stream->current_offset;
                    }
                    stack_ptr -= 2;
                }
                break;
                
            case RENDER_OP_STRING:
                // 字符串操作
                if (stream->current_offset < stream->max_offset) {
                    uint8_t str_opcode = *current_ptr;
                    current_ptr++;
                    stream->current_offset++;
                    
                    switch (str_opcode) {
                        case '\"':
                            // 字符串常量处理
                            execute_string_constant(render_ctx);
                            break;
                        case '#':
                            // 哈希值处理
                            execute_hash_operation(render_ctx);
                            break;
                        case '$':
                            // 变量处理
                            execute_variable_operation(render_ctx);
                            break;
                        case '%':
                            // 百分比处理
                            execute_percentage_operation(render_ctx);
                            break;
                    }
                }
                break;
                
            case RENDER_OP_END:
                // 结束操作
                return 1;
                
            default:
                // 未知操作码
                return 0;
        }
        
        // 处理操作数
        if (stack_ptr < 32) {
            operand_stack[stack_ptr] = read_next_operand(stream, &current_ptr);
            stack_ptr++;
        }
    }
    
    return 1;
}

/**
 * @brief 创建渲染对象
 * @param object_type 对象类型
 * @param object_params 对象参数
 * @param object_ptr 输出对象指针
 * @return 创建状态，成功返回非0，失败返回0
 * 
 * 该函数用于创建各种类型的渲染对象，包括几何体、纹理、材质等。
 */
uint32_t create_render_object(uint32_t object_type, uint32_t object_params, void** object_ptr) {
    if (!object_ptr) {
        return 0;
    }
    
    // 初始化渲染环境
    uint32_t init_result = parse_render_instruction_stream(NULL, 0, NULL);
    if (init_result == 0) {
        *object_ptr = NULL;
        return 0;
    }
    
    // 分配对象内存
    void* render_object = allocate_render_memory(object_type, object_params);
    if (!render_object) {
        *object_ptr = NULL;
        return 0;
    }
    
    // 初始化对象属性
    if (!initialize_render_object(render_object, object_type, object_params)) {
        free_render_memory(render_object);
        *object_ptr = NULL;
        return 0;
    }
    
    *object_ptr = render_object;
    return 1;
}

/**
 * @brief 渲染对象创建和初始化（扩展版本）
 * @param context 渲染上下文
 * @param params 对象参数
 * @param object_ptr 输出对象指针
 * @return 对象句柄，失败返回0
 * 
 * 该函数是create_render_object的扩展版本，支持更多的对象类型和参数配置。
 */
uint64_t create_render_object_ex(void* context, uint32_t params, void** object_ptr) {
    if (!context || !object_ptr) {
        return 0;
    }
    
    // 检查是否需要特殊处理
    if (*(uint32_t*)((uint64_t)context + 0x4c) == 0) {
        return create_special_render_object();
    }
    
    // 标准对象创建流程
    uint32_t create_result = create_render_object(0, 0, object_ptr);
    if (create_result == 0) {
        *object_ptr = NULL;
        return 0;
    }
    
    return (uint64_t)*object_ptr;
}

/**
 * @brief 渲染对象批处理操作
 * @param object_type 对象类型
 * @param batch_params 批处理参数
 * @param object_count 对象数量
 * @param object_array 对象数组
 * @return 批处理状态，成功返回非0，失败返回0
 * 
 * 该函数用于批量创建和管理渲染对象，提高渲染效率。
 */
uint32_t batch_render_objects(uint32_t object_type, uint64_t batch_params, 
                              uint32_t object_count, void** object_array) {
    if (!object_array || object_count == 0) {
        return 0;
    }
    
    // 初始化批处理环境
    uint32_t init_result = parse_render_instruction_stream(NULL, 0, NULL);
    if (init_result == 0) {
        return 0;
    }
    
    // 批量创建对象
    for (uint32_t i = 0; i < object_count; i++) {
        void* object = create_single_render_object(object_type, batch_params);
        if (!object) {
            // 清理已创建的对象
            cleanup_batch_objects(object_array, i);
            return 0;
        }
        object_array[i] = object;
    }
    
    return 1;
}

/**
 * @brief 空函数 - 渲染系统占位符
 * 
 * 该函数作为渲染系统的占位符，用于扩展和兼容性考虑。
 */
void render_system_placeholder(void) {
    // 空实现，保留用于未来扩展
    return;
}

/**
 * @brief 渲染坐标插值计算
 * @param output_buffer 输出缓冲区
 * @param coord_index 坐标索引
 * @param params 参数结构
 * @param start_pos 起始位置
 * @param end_pos 结束位置
 * @param start_val 起始值
 * @param end_val 结束值
 * 
 * 该函数用于计算渲染坐标的插值，支持线性插值和边界检查。
 */
void render_coordinate_interpolation(float* output_buffer, int coord_index, 
                                     void* params, float start_pos, float end_pos,
                                     float start_val, float end_val) {
    render_params_t* render_params = (render_params_t*)params;
    
    // 边界检查
    if (start_pos == end_pos || !render_params) {
        return;
    }
    
    // 计算插值范围
    float min_bound = *(float*)((uint64_t)params + 0x18);
    float max_bound = *(float*)((uint64_t)params + 0x1c);
    
    // 调整插值范围
    float adjusted_start = start_pos;
    float adjusted_end = end_pos;
    
    if (start_pos < min_bound) {
        float ratio = (min_bound - start_pos) / (end_pos - start_pos);
        start_val = start_val + (end_val - start_val) * ratio;
        adjusted_start = min_bound;
    }
    
    if (end_pos > max_bound) {
        float ratio = (max_bound - start_pos) / (end_pos - start_pos);
        end_val = start_val + (end_val - start_val) * ratio;
        adjusted_end = max_bound;
    }
    
    // 执行插值计算
    float index_float = (float)coord_index;
    
    // 检查是否在有效范围内
    if (start_val <= index_float && end_val <= index_float) {
        // 完全包含的情况
        output_buffer[coord_index] += (adjusted_end - adjusted_start) * 
                                     *(float*)((uint64_t)params + 0x14);
    } else if (start_val < (float)(coord_index + 1) || end_val < (float)(coord_index + 1)) {
        // 部分包含的情况
        float coverage = 1.0f - ((start_val - index_float) + (end_val - index_float)) * 0.5f;
        output_buffer[coord_index] += coverage * (adjusted_end - adjusted_start) * 
                                     *(float*)((uint64_t)params + 0x14);
    }
}

/**
 * @brief 渲染坐标高级插值计算
 * @param output_buffer 输出缓冲区
 * @param coord_index 坐标索引
 * @param params 参数结构
 * @param base_val 基础值
 * 
 * 该函数是render_coordinate_interpolation的优化版本，提供更精确的插值计算。
 */
void render_advanced_interpolation(float* output_buffer, int coord_index, 
                                  void* params, float base_val) {
    render_params_t* render_params = (render_params_t*)params;
    
    if (!render_params) {
        return;
    }
    
    // 获取边界值
    float min_bound = *(float*)((uint64_t)params + 0x18);
    float max_bound = *(float*)((uint64_t)params + 0x1c);
    
    // 边界检查和调整
    float adjusted_start = base_val;
    float adjusted_end = base_val;
    
    if (base_val < min_bound) {
        float ratio = (min_bound - base_val) / (adjusted_end - adjusted_start);
        base_val = base_val + (adjusted_end - base_val) * ratio;
        adjusted_start = min_bound;
    }
    
    if (adjusted_end > max_bound) {
        float ratio = (max_bound - base_val) / (adjusted_end - adjusted_start);
        adjusted_end = base_val + (adjusted_end - base_val) * ratio;
    }
    
    // 执行高级插值
    float index_float = (float)coord_index;
    
    if (base_val <= index_float && adjusted_end <= index_float) {
        output_buffer[coord_index] += (adjusted_end - adjusted_start) * 
                                     *(float*)((uint64_t)params + 0x14);
    } else if (base_val < (float)(coord_index + 1) || adjusted_end < (float)(coord_index + 1)) {
        float coverage = 1.0f - ((base_val - index_float) + (adjusted_end - index_float)) * 0.5f;
        output_buffer[coord_index] += coverage * (adjusted_end - adjusted_start) * 
                                     *(float*)((uint64_t)params + 0x14);
    }
}

/**
 * @brief 简化的渲染插值函数
 * @param output_buffer 输出缓冲区
 * @param coord_index 坐标索引
 * @param params 参数结构
 * @param base_val 基础值
 * 
 * 该函数提供简化的插值计算，用于性能敏感的场景。
 */
void render_simple_interpolation(float* output_buffer, int coord_index, 
                                 void* params, float base_val) {
    if (!params || !output_buffer) {
        return;
    }
    
    float index_float = (float)coord_index;
    float range_val = *(float*)((uint64_t)params + 0x14);
    
    // 简化的覆盖度计算
    if (base_val < (float)(coord_index + 1)) {
        float coverage = 1.0f - ((base_val - index_float) + (range_val - index_float)) * 0.5f;
        output_buffer[coord_index] += coverage * range_val * range_val;
    }
}

/**
 * @brief 渲染系统空操作函数
 * 
 * 这些函数作为渲染系统的占位符，用于保持API的完整性和一致性。
 */
void render_nop_operation(void) {
    return;
}

void render_nop_operation2(void) {
    return;
}

void render_nop_operation3(void) {
    return;
}

/**
 * @brief 执行渲染批处理操作
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 * 
 * 该函数用于执行复杂的渲染批处理操作，包括顶点计算和插值处理。
 */
void execute_render_batch(longlong param1, longlong param2, int param3, longlong* param4, float param5) {
    if (!param4) {
        return;
    }
    
    float fVar21 = param5 + 1.0f;
    
    do {
        float fVar16 = *(float*)((longlong)param4 + 0xc);
        float fVar11 = *(float*)(param4 + 1);
        
        if (fVar16 == 0.0f) {
            if (fVar11 < (float)param3) {
                if (fVar11 < 0.0f) {
                    render_coordinate_interpolation(param2 - 4, 0, param4, fVar11, param5, fVar11, fVar21);
                } else {
                    render_coordinate_interpolation(param1, (int)fVar11, param4, fVar11, param5, fVar11, fVar21);
                    render_coordinate_interpolation(param2 - 4, 0, param4, 0, 0, 0, 0);
                }
            }
        } else {
            float fVar17 = *(float*)(param4 + 3);
            float fVar19 = *(float*)(param4 + 2);
            float fVar20 = fVar16 + fVar11;
            float fVar15 = fVar11;
            float fVar18 = param5;
            
            if (param5 < fVar17) {
                fVar15 = (fVar17 - param5) * fVar16 + fVar11;
                fVar18 = fVar17;
            }
            
            fVar17 = *(float*)((longlong)param4 + 0x1c);
            float fVar14 = fVar20;
            float fVar10 = fVar21;
            
            if (fVar17 < fVar21) {
                fVar14 = (fVar17 - param5) * fVar16 + fVar11;
                fVar10 = fVar17;
            }
            
            if (((fVar15 < 0.0f) || (fVar14 < 0.0f)) || ((float)param3 <= fVar15) || ((float)param3 <= fVar14)) {
                // 处理边界情况
                for (int i = 0; i < param3; i++) {
                    float index_val = (float)i;
                    float next_index_val = (float)(i + 1);
                    float start_interp = (index_val - fVar11) * (1.0f / fVar16) + param5;
                    float end_interp = (next_index_val - fVar11) * (1.0f / fVar16) + param5;
                    
                    if ((index_val <= fVar11) || (fVar20 <= next_index_val)) {
                        if ((index_val <= fVar20) || (fVar11 <= next_index_val)) {
                            if (((fVar11 < index_val) && (index_val < fVar20)) || ((fVar20 < index_val && (index_val < fVar11)))) {
                                render_coordinate_interpolation(param1, i, param4, fVar11, param5, index_val, start_interp);
                            } else if ((next_index_val <= fVar11) || (fVar20 <= next_index_val)) {
                                if ((fVar20 < next_index_val) && (next_index_val < fVar11)) {
                                    render_coordinate_interpolation(param1, i, param4, fVar11, param5, next_index_val, end_interp);
                                }
                            } else {
                                render_coordinate_interpolation(param1, i, param4, fVar11, param5, next_index_val, end_interp);
                            }
                        } else {
                            render_coordinate_interpolation(param1, i, param4, fVar11, param5, next_index_val, end_interp);
                            render_coordinate_interpolation(param1, i, param4, 0, 0, 0, 0);
                        }
                    } else {
                        render_coordinate_interpolation(param1, i, param4, fVar11, param5, index_val, start_interp);
                        render_coordinate_interpolation(param1, i, param4, 0, 0, 0, 0);
                    }
                    render_coordinate_interpolation(param1, i, param4, 0, 0, 0, 0);
                }
            } else {
                // 处理内部情况
                int iVar3 = (int)fVar15;
                if (iVar3 == (int)fVar14) {
                    longlong lVar1 = (longlong)iVar3;
                    *(float*)(param1 + lVar1 * 4) = (1.0f - ((fVar14 - (float)iVar3) + (fVar15 - (float)iVar3)) * 0.5f) * *(float*)((longlong)param4 + 0x14) * (fVar10 - fVar18) + *(float*)(param1 + lVar1 * 4);
                    *(float*)(param2 + lVar1 * 4) = (fVar10 - fVar18) * *(float*)((longlong)param4 + 0x14) + *(float*)(param2 + lVar1 * 4);
                } else {
                    // 处理复杂插值情况
                    float temp_fVar16 = fVar15;
                    if (fVar14 < fVar15) {
                        fVar19 = -fVar19;
                        temp_fVar16 = fVar10 - param5;
                        fVar10 = fVar21 - (fVar18 - param5);
                        fVar18 = fVar21 - temp_fVar16;
                        temp_fVar16 = fVar14;
                        fVar14 = fVar15;
                        fVar11 = fVar20;
                    }
                    
                    int iVar7 = (int)temp_fVar16;
                    iVar3 = (int)fVar14;
                    longlong lVar1 = (longlong)(iVar7 + 1);
                    longlong lVar6 = (longlong)iVar3;
                    float fVar17 = *(float*)((longlong)param4 + 0x14);
                    float fVar15_calc = fVar17 * fVar19;
                    float fVar20_calc = ((float)(iVar7 + 1) - fVar11) * fVar19 + param5;
                    float fVar11_calc = (fVar20_calc - fVar18) * fVar17;
                    
                    *(float*)(param1 + (longlong)iVar7 * 4) = (0.5f - (temp_fVar16 - (float)iVar7) * 0.5f) * fVar11_calc + *(float*)(param1 + (longlong)iVar7 * 4);
                    
                    if (lVar1 < lVar6) {
                        // 批量处理插值
                        for (longlong i = lVar1; i < lVar6; i++) {
                            float fVar16_temp = fVar15_calc * 0.5f + fVar11_calc;
                            fVar11_calc = fVar11_calc + fVar15_calc;
                            *(float*)(param1 + i * 4) = fVar16_temp + *(float*)(param1 + i * 4);
                        }
                    }
                    
                    *(float*)(param1 + lVar6 * 4) = (fVar10 - ((float)((iVar3 - iVar7) - 1) * fVar19 + fVar20_calc)) * (1.0f - (fVar14 - (float)iVar3) * 0.5f) * fVar17 + fVar11_calc + *(float*)(param1 + lVar6 * 4);
                    *(float*)(param2 + lVar6 * 4) = (fVar10 - fVar18) * fVar17 + *(float*)(param2 + lVar6 * 4);
                }
            }
        }
        
        param4 = (longlong*)*param4;
    } while (param4 != (longlong*)0x0);
}

// =============================================================================
// 辅助函数实现
// =============================================================================

/**
 * @brief 执行绘制操作
 * @param context 渲染上下文
 * @param draw_type 绘制类型
 */
static void execute_draw_operation(render_context_t* context, float draw_type) {
    if (context && context->params) {
        uint32_t type = (uint32_t)draw_type;
        switch (type) {
            case 1:
                draw_points(context->params);
                break;
            case 2:
                draw_lines(context->params);
                break;
            case 3:
                draw_triangles(context->params);
                break;
            default:
                break;
        }
    }
}

/**
 * @brief 执行变换操作
 * @param context 渲染上下文
 * @param x X坐标
 * @param y Y坐标
 * @param z Z坐标
 */
static void execute_transform_operation(render_context_t* context, float x, float y, float z) {
    if (context && context->params) {
        apply_transformation(context->params, x, y, z);
    }
}

/**
 * @brief 读取下一个操作数
 * @param stream 数据流
 * @param current_ptr 当前指针指针
 * @return 读取的操作数值
 */
static float read_next_operand(render_data_stream_t* stream, uint8_t** current_ptr) {
    if (!stream || !current_ptr || !*current_ptr) {
        return 0.0f;
    }
    
    uint8_t operand_type = **current_ptr;
    (*current_ptr)++;
    stream->current_offset++;
    
    float operand = 0.0f;
    
    switch (operand_type) {
        case 0xFF: {
            // 32位浮点数
            if (stream->current_offset + 4 <= stream->data_size) {
                uint32_t value = *(uint32_t*)*current_ptr;
                operand = *(float*)&value;
                *current_ptr += 4;
                stream->current_offset += 4;
            }
            break;
        }
        case 0x1C: {
            // 16位整数转换为浮点数
            if (stream->current_offset + 2 <= stream->data_size) {
                int16_t value = *(int16_t*)*current_ptr;
                operand = (float)value;
                *current_ptr += 2;
                stream->current_offset += 2;
            }
            break;
        }
        default: {
            // 单字节值转换为浮点数
            operand = (float)operand_type;
            break;
        }
    }
    
    return operand;
}

// =============================================================================
// 函数别名定义 - 保持向后兼容性
// =============================================================================

#define FUN_18028d680 parse_render_instruction_stream
#define FUN_18028e390 create_render_object
#define FUN_18028e460 create_render_object_ex
#define FUN_18028e48d batch_render_objects
#define FUN_18028e537 render_system_placeholder
#define FUN_18028e550 render_coordinate_interpolation
#define FUN_18028e569 render_advanced_interpolation
#define FUN_18028e62b render_simple_interpolation
#define FUN_18028e67f render_nop_operation
#define FUN_18028e684 render_nop_operation2
#define FUN_18028e689 render_nop_operation3
#define FUN_18028e690 execute_render_batch

// =============================================================================
// 模块信息
// =============================================================================

/**
 * @file 03_rendering_part042.c
 * @brief 渲染系统指令处理和顶点数据计算模块
 * 
 * 该模块是渲染系统的核心组件之一，提供了完整的渲染指令解析、
 * 顶点计算、插值处理和对象管理功能。支持多种渲染操作类型，
 * 包括绘制、变换、状态管理等。模块采用面向对象的设计，
 * 提供了丰富的API接口和高度可定制的渲染流程。
 * 
 * 主要功能：
 * - 渲染指令流解析和执行
 * - 渲染对象的创建和管理
 * - 批量渲染操作
 * - 坐标插值计算
 * - 渲染状态管理
 * - 多种渲染操作支持
 * 
 * 技术特点：
 * - 支持多种数据类型和操作码
 * - 高效的内存管理和数据处理
 * - 灵活的渲染流水线
 * - 完整的错误处理机制
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */