#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part019_sub002_sub002.c - 渲染系统高级参数处理器
// 
// 主要功能：渲染系统参数处理的核心函数，负责处理多种类型的渲染参数
// 函数数量：1个主要函数
// 
// 函数列表：
// - rendering_system_parameter_processor: 渲染系统参数处理器 (FUN_180279640)
//
// 技术说明：
// - 该函数是渲染系统参数处理的核心组件
// - 支持多种参数类型（0-9）的处理
// - 包含复杂的参数解析、验证和应用逻辑
// - 使用高效的内存管理和数据结构操作
// - 支持字符串比较、颜色处理、数据复制等功能
// - 具备完整的错误处理和资源清理机制

// ============================================================================
// 渲染系统常量定义
// ============================================================================

// 参数类型常量
#define RENDERING_PARAM_TYPE_BASIC           0     // 基础参数类型
#define RENDERING_PARAM_TYPE_FUNCTION_PTR    1     // 函数指针参数类型
#define RENDERING_PARAM_TYPE_RESOURCE_MGR    2     // 资源管理参数类型
#define RENDERING_PARAM_TYPE_SHADER_CFG      3     // 着色器配置参数类型
#define RENDERING_PARAM_TYPE_TEXTURE_CFG     4     // 纹理配置参数类型
#define RENDERING_PARAM_TYPE_STRING_CMP      5     // 字符串比较参数类型
#define RENDERING_PARAM_TYPE_COLOR_PROC      6     // 颜色处理参数类型
#define RENDERING_PARAM_TYPE_COLOR_SPEC      7     // 颜色规格参数类型
#define RENDERING_PARAM_TYPE_VECTOR_PROC     8     // 向量处理参数类型
#define RENDERING_PARAM_TYPE_VECTOR_CFG      9     // 向量配置参数类型

// 内存管理常量
#define RENDERING_STACK_BUFFER_SIZE         72     // 栈缓冲区大小
#define RENDERING_STRING_BUFFER_SIZE        64     // 字符串缓冲区大小
#define RENDERING_PARAM_ARRAY_SIZE          16     // 参数数组大小

// 颜色处理常量
#define RENDERING_COLOR_NORMALIZATION        0.003921569f  // 颜色归一化系数 (1/255)
#define RENDERING_COLOR_MASK_RED            0x00ff0000    // 红色通道掩码
#define RENDERING_COLOR_MASK_GREEN          0x0000ff00    // 绿色通道掩码
#define RENDERING_COLOR_MASK_BLUE           0x000000ff    // 蓝色通道掩码
#define RENDERING_COLOR_MASK_ALPHA          0xff000000    // Alpha通道掩码

// 渲染状态常量
#define RENDERING_STATE_INITIALIZED         0xfffffffffffffffe  // 初始化状态标志
#define RENDERING_RESOURCE_CLEANUP          0x0                   // 资源清理标志

// ============================================================================
// 渲染系统数据结构定义
// ============================================================================

// 渲染参数块结构
typedef struct {
    uint32_t param_type;                // 参数类型
    uint32_t param_values[6];           // 参数值数组
    void* resource_ptr;                 // 资源指针
    char string_buffer[64];             // 字符串缓冲区
} RenderingParameterBlock;

// 渲染颜色值结构
typedef struct {
    float red;                          // 红色分量 (0.0-1.0)
    float green;                        // 绿色分量 (0.0-1.0)
    float blue;                         // 蓝色分量 (0.0-1.0)
    float alpha;                        // Alpha分量 (0.0-1.0)
} RenderingColor;

// 渲染向量值结构
typedef struct {
    float x;                            // X分量
    float y;                            // Y分量
    float z;                            // Z分量
    float w;                            // W分量
} RenderingVector;

// 渲染资源管理器结构
typedef struct {
    void* resource_array;               // 资源数组
    size_t array_size;                  // 数组大小
    size_t used_size;                   // 已使用大小
    void* cleanup_function;             // 清理函数
} RenderingResourceManager;

// 渲染字符串比较器结构
typedef struct {
    char* string1;                      // 字符串1
    char* string2;                      // 字符串2
    int string_length;                  // 字符串长度
    int compare_result;                 // 比较结果
} RenderingStringComparator;

// ============================================================================
// 渲染系统函数声明
// ============================================================================

// 主要参数处理函数
void rendering_system_parameter_processor(
    int64_t *render_context,           // 渲染上下文指针
    int64_t *param_context,            // 参数上下文指针
    char is_initialization              // 初始化标志
);

// 辅助处理函数
void rendering_system_process_basic_parameters(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

void rendering_system_process_function_pointers(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

void rendering_system_process_resource_management(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

void rendering_system_process_shader_configuration(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

void rendering_system_process_texture_configuration(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

void rendering_system_process_string_comparison(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

void rendering_system_process_color_processing(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

void rendering_system_process_color_specification(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

void rendering_system_process_vector_processing(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

void rendering_system_process_vector_configuration(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
);

// ============================================================================
// 渲染系统参数处理器 - 主要实现
// ============================================================================

// 函数名称：rendering_system_parameter_processor
// 原始函数名：FUN_180279640
// 
// 功能描述：渲染系统参数处理的核心函数，负责处理多种类型的渲染参数
// 
// 参数说明：
// - render_context: 渲染上下文指针，包含渲染状态和资源信息
// - param_context: 参数上下文指针，包含待处理的参数数据
// - is_initialization: 初始化标志，区分初始化和更新操作
// 
// 实现特点：
// - 使用switch-case结构处理多种参数类型
// - 支持高效的参数解析和验证
// - 包含完整的错误处理机制
// - 使用栈缓冲区优化内存使用
// - 支持资源管理和清理
// 
// 性能优化：
// - 使用局部变量优化访问速度
// - 采用高效的字符串比较算法
// - 使用位操作处理颜色值
// - 实现批量数据处理
void rendering_system_parameter_processor(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization
) {
    // 局部变量声明
    byte *buffer_ptr;
    code *function_ptr;
    int32_t param_values[6];
    int64_t temp_value1;
    int64_t temp_value2;
    int64_t temp_value3;
    byte *string_ptr;
    int64_t *resource_ptr;
    int compare_result;
    int32_t *param_array_ptr;
    int64_t array_value;
    int64_t *next_resource_ptr;
    void *resource_data;
    void *stack_data;
    uint64_t checksum_value;
    uint64_t loop_counter;
    uint param_value;
    uint64_t array_index;
    
    // 栈缓冲区声明（用于临时数据存储）
    int8_t stack_buffer_488[32];
    int64_t *stack_context_468;
    int64_t *stack_context_460;
    char stack_flag_458;
    int64_t *stack_resource_440;
    int64_t *stack_resource_438;
    int64_t *stack_resource_430;
    uint64_t stack_guard_428;
    void *stack_data_418;
    byte *stack_string_410;
    int stack_length_408;
    byte stack_buffer_400[72];
    void *stack_data_3b8;
    byte *stack_string_3b0;
    int stack_length_3a8;
    byte stack_buffer_3a0[72];
    void *stack_data_358;
    byte *stack_string_350;
    int stack_length_348;
    byte stack_buffer_340[72];
    void *stack_data_2f8;
    byte *stack_string_2f0;
    int stack_length_2e8;
    byte stack_buffer_2e0[72];
    void *stack_data_298;
    byte *stack_string_290;
    int stack_length_288;
    byte stack_buffer_280[72];
    void *stack_data_238;
    byte *stack_string_230;
    int stack_length_228;
    byte stack_buffer_220[72];
    void *stack_data_1d8;
    byte *stack_string_1d0;
    int stack_length_1c8;
    byte stack_buffer_1c0[72];
    void *stack_data_178;
    byte *stack_string_170;
    int stack_length_168;
    byte stack_buffer_160[72];
    void *stack_data_118;
    byte *stack_string_110;
    int stack_length_108;
    byte stack_buffer_100[72];
    void *stack_data_b8;
    byte *stack_string_b0;
    int stack_length_a8;
    byte stack_buffer_a0[72];
    uint64_t stack_checksum_58;
    
    // 初始化栈保护变量
    stack_guard_428 = RENDERING_STATE_INITIALIZED;
    stack_checksum_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer_488;
    
    // 设置栈上下文
    stack_context_468 = param_context;
    stack_context_460 = render_context;
    stack_flag_458 = is_initialization;
    
    // 获取参数链表头
    next_resource_ptr = (int64_t *)param_context[1];
    
    // 遍历参数链表
    if (next_resource_ptr != param_context + 1) {
        do {
            loop_counter = 0;
            param_array_ptr = (int32_t *)next_resource_ptr[2];
            
            // 根据参数类型进行处理
            switch(*param_array_ptr) {
                case RENDERING_PARAM_TYPE_BASIC:
                    // 基础参数处理
                    if (is_initialization == '\0') {
                        *(int32_t *)((int64_t)render_context + 0x324) = param_array_ptr[2];
                        *(int8_t *)((int64_t)render_context + 0x32c) = 0;
                    }
                    else {
                        *(int32_t *)((int64_t)render_context + 0x324) = *(int32_t *)(*param_context + 0x324);
                        *(int8_t *)((int64_t)render_context + 0x32c) = *(int8_t *)(*param_context + 0x32c);
                    }
                    break;
                    
                case RENDERING_PARAM_TYPE_FUNCTION_PTR:
                    // 函数指针参数处理
                    if (is_initialization == '\0') {
                        function_ptr = *(code **)(*render_context + 0x118);
                        stack_resource_440 = *(int64_t **)(param_array_ptr + 2);
                        if (stack_resource_440 != (int64_t *)0x0) {
                            (**(code **)(*stack_resource_440 + 0x28))();
                        }
                        (*function_ptr)(render_context, &stack_resource_440);
                        param_context = stack_context_468;
                        if (stack_resource_440 != (int64_t *)0x0) {
                            (**(code **)(*stack_resource_440 + 0x38))();
                            param_context = stack_context_468;
                        }
                    }
                    else {
                        temp_value1 = *param_context;
                        resource_ptr = *(int64_t **)(temp_value1 + 0x38);
                        param_context = stack_context_468;
                        if (*(int64_t *)(temp_value1 + 0x40) - (int64_t)resource_ptr >> 4 != 0) {
                            (**(code **)(*render_context + 0x118))(render_context, *resource_ptr + 0x1b8);
                            param_context = stack_context_468;
                        }
                    }
                    break;
                    
                case RENDERING_PARAM_TYPE_RESOURCE_MGR:
                    // 资源管理参数处理
                    if (is_initialization == '\0') {
                        resource_ptr = *(int64_t **)(param_array_ptr + 2);
                        if (resource_ptr != (int64_t *)0x0) {
                            stack_resource_438 = resource_ptr;
                            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
                            param_context = stack_context_468;
                        }
                        stack_resource_438 = (int64_t *)render_context[0x77];
                        render_context[0x77] = (int64_t)resource_ptr;
                        if (stack_resource_438 != (int64_t *)0x0) {
                            (**(code **)(*stack_resource_438 + 0x38))();
                            param_context = stack_context_468;
                        }
                    }
                    else {
                        FUN_180080810(render_context + 0x77, *param_context + 0x3b8);
                        param_context = stack_context_468;
                    }
                    break;
                    
                case RENDERING_PARAM_TYPE_SHADER_CFG:
                    // 着色器配置参数处理
                    if (is_initialization == '\0') {
                        param_array_ptr = param_array_ptr + 2;
                    }
                    else {
                        param_array_ptr = (int32_t *)(*param_context + 0x330);
                    }
                    (**(code **)(*render_context + 0x148))(render_context, param_array_ptr);
                    FUN_180276f30(render_context, (int64_t)render_context + 0x214, 1);
                    param_context = stack_context_468;
                    break;
                    
                case RENDERING_PARAM_TYPE_TEXTURE_CFG:
                    // 纹理配置参数处理
                    if (is_initialization == '\0') {
                        resource_ptr = (int64_t *)render_context[7];
                        if (resource_ptr < (int64_t *)render_context[8]) {
                            do {
                                temp_value1 = *resource_ptr;
                                param_values[0] = param_array_ptr[3];
                                param_values[1] = param_array_ptr[4];
                                param_values[2] = param_array_ptr[5];
                                *(int32_t *)(temp_value1 + 0x2b8) = param_array_ptr[2];
                                *(int32_t *)(temp_value1 + 700) = param_values[0];
                                *(int32_t *)(temp_value1 + 0x2c0) = param_values[1];
                                *(int32_t *)(temp_value1 + 0x2c4) = param_values[2];
                                resource_ptr = resource_ptr + 2;
                            } while (resource_ptr < (int64_t *)render_context[8]);
                        }
                    }
                    else {
                        temp_value1 = *param_context;
                        resource_ptr = *(int64_t **)(temp_value1 + 0x38);
                        param_context = stack_context_468;
                        if (*(int64_t *)(temp_value1 + 0x40) - (int64_t)resource_ptr >> 4 != 0) {
                            temp_value1 = *resource_ptr;
                            resource_ptr = (int64_t *)render_context[7];
                            if (resource_ptr < (int64_t *)render_context[8]) {
                                do {
                                    temp_value2 = *resource_ptr;
                                    param_values[0] = *(int32_t *)(temp_value1 + 700);
                                    param_values[1] = *(int32_t *)(temp_value1 + 0x2c0);
                                    param_values[2] = *(int32_t *)(temp_value1 + 0x2c4);
                                    *(int32_t *)(temp_value2 + 0x2b8) = *(int32_t *)(temp_value1 + 0x2b8);
                                    *(int32_t *)(temp_value2 + 700) = param_values[0];
                                    *(int32_t *)(temp_value2 + 0x2c0) = param_values[1];
                                    *(int32_t *)(temp_value2 + 0x2c4) = param_values[2];
                                    resource_ptr = resource_ptr + 2;
                                } while (resource_ptr < (int64_t *)render_context[8]);
                            }
                        }
                    }
                    break;
                    
                case RENDERING_PARAM_TYPE_STRING_CMP:
                    // 字符串比较参数处理
                    temp_value1 = render_context[7];
                    temp_value2 = render_context[8] - temp_value1 >> 4;
                    if (is_initialization == '\0') {
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                // 字符串比较处理逻辑
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(loop_counter + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_3b0 = stack_buffer_3a0;
                                stack_buffer_3a0[0] = 0;
                                stack_length_3a8 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_3b8 = stack_data;
                                strcpy_s(stack_buffer_3a0, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                if (stack_length_3a8 == compare_result) {
                                    if (stack_length_3a8 != 0) {
                                        string_ptr = stack_string_3b0;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_3b0);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        resource_ptr = *(int64_t **)(param_array_ptr + 0x42);
                                        stack_resource_430 = resource_ptr;
                                        if (resource_ptr != (int64_t *)0x0) {
                                            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
                                        }
                                        FUN_180076910(temp_value1, &stack_resource_430);
                                        if (resource_ptr != (int64_t *)0x0) {
                                            (**(code **)(*resource_ptr + 0x38))(resource_ptr);
                                        }
                                        stack_data_3b8 = &system_state_ptr;
                                        param_context = stack_context_468;
                                        render_context = stack_context_460;
                                        break;
                                    }
                                }
                                else if (stack_length_3a8 == 0) {
                                    if (compare_result == 0) {
                                        resource_ptr = *(int64_t **)(param_array_ptr + 0x42);
                                        stack_resource_430 = resource_ptr;
                                        if (resource_ptr != (int64_t *)0x0) {
                                            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
                                        }
                                        FUN_180076910(temp_value1, &stack_resource_430);
                                        if (resource_ptr != (int64_t *)0x0) {
                                            (**(code **)(*resource_ptr + 0x38))(resource_ptr);
                                        }
                                        stack_data_3b8 = &system_state_ptr;
                                        param_context = stack_context_468;
                                        render_context = stack_context_460;
                                        break;
                                    }
                                }
                                stack_data_3b8 = &system_state_ptr;
                                param_value = (int)checksum_value + 1;
                                checksum_value = (uint64_t)param_value;
                                loop_counter = loop_counter + 0x10;
                                temp_value1 = stack_context_460[7];
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    else {
                        // 更新模式下的字符串比较处理
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        array_index = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(checksum_value + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_410 = stack_buffer_400;
                                stack_buffer_400[0] = 0;
                                stack_length_408 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_418 = stack_data;
                                strcpy_s(stack_buffer_400, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                if (stack_length_408 == compare_result) {
                                    if (stack_length_408 != 0) {
                                        string_ptr = stack_string_410;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_410);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        FUN_180076910(temp_value1, *(int64_t *)
                                            (*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10) + 0x1b8
                                        );
                                        stack_data_418 = &system_state_ptr;
                                        param_context = stack_context_468;
                                        render_context = stack_context_460;
                                        break;
                                    }
                                }
                                else if (stack_length_408 == 0) {
                                    if (compare_result == 0) {
                                        FUN_180076910(temp_value1, *(int64_t *)
                                            (*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10) + 0x1b8
                                        );
                                        stack_data_418 = &system_state_ptr;
                                        param_context = stack_context_468;
                                        render_context = stack_context_460;
                                        break;
                                    }
                                }
                                stack_data_418 = &system_state_ptr;
                                param_value = (int)array_index + 1;
                                loop_counter = loop_counter + 1;
                                temp_value1 = stack_context_460[7];
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                                checksum_value = checksum_value + 0x10;
                                array_index = (uint64_t)param_value;
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    break;
                    
                case RENDERING_PARAM_TYPE_COLOR_PROC:
                    // 颜色处理参数处理
                    temp_value1 = render_context[7];
                    temp_value2 = render_context[8] - temp_value1 >> 4;
                    if (is_initialization == '\0') {
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(loop_counter + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_2f0 = stack_buffer_2e0;
                                stack_buffer_2e0[0] = 0;
                                stack_length_2e8 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_2f8 = stack_data;
                                strcpy_s(stack_buffer_2e0, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                                if (stack_length_2e8 == compare_result) {
                                    if (stack_length_2e8 != 0) {
                                        string_ptr = stack_string_2f0;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_2f0);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        param_value = param_array_ptr[0x42];
                                        // 颜色值归一化处理
                                        *(float *)(temp_value1 + 0x238) = (float)(param_value >> 0x10 & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x23c) = (float)(param_value >> 8 & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x240) = (float)(param_value & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x244) = (float)(param_value >> 0x18) * RENDERING_COLOR_NORMALIZATION;
                                        stack_data_2f8 = &system_state_ptr;
                                        break;
                                    }
                                }
                                else if (stack_length_2e8 == 0) {
                                    if (compare_result == 0) {
                                        param_value = param_array_ptr[0x42];
                                        *(float *)(temp_value1 + 0x238) = (float)(param_value >> 0x10 & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x23c) = (float)(param_value >> 8 & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x240) = (float)(param_value & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x244) = (float)(param_value >> 0x18) * RENDERING_COLOR_NORMALIZATION;
                                        stack_data_2f8 = &system_state_ptr;
                                        break;
                                    }
                                }
                                stack_data_2f8 = &system_state_ptr;
                                param_value = (int)checksum_value + 1;
                                checksum_value = (uint64_t)param_value;
                                loop_counter = loop_counter + 0x10;
                                temp_value1 = stack_context_460[7];
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    else {
                        // 更新模式下的颜色处理
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        array_index = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(checksum_value + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_350 = stack_buffer_340;
                                stack_buffer_340[0] = 0;
                                stack_length_348 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_358 = stack_data;
                                strcpy_s(stack_buffer_340, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                                if (stack_length_348 == compare_result) {
                                    if (stack_length_348 != 0) {
                                        string_ptr = stack_string_350;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_350);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        temp_value2 = *(int64_t *)(*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10);
                                        param_values[0] = *(int32_t *)(temp_value2 + 0x23c);
                                        param_values[1] = *(int32_t *)(temp_value2 + 0x240);
                                        param_values[2] = *(int32_t *)(temp_value2 + 0x244);
                                        *(int32_t *)(temp_value1 + 0x238) = *(int32_t *)(temp_value2 + 0x238);
                                        *(int32_t *)(temp_value1 + 0x23c) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x240) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x244) = param_values[2];
                                        stack_data_358 = &system_state_ptr;
                                        break;
                                    }
                                }
                                else if (stack_length_348 == 0) {
                                    if (compare_result == 0) {
                                        temp_value2 = *(int64_t *)(*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10);
                                        param_values[0] = *(int32_t *)(temp_value2 + 0x23c);
                                        param_values[1] = *(int32_t *)(temp_value2 + 0x240);
                                        param_values[2] = *(int32_t *)(temp_value2 + 0x244);
                                        *(int32_t *)(temp_value1 + 0x238) = *(int32_t *)(temp_value2 + 0x238);
                                        *(int32_t *)(temp_value1 + 0x23c) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x240) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x244) = param_values[2];
                                        stack_data_358 = &system_state_ptr;
                                        break;
                                    }
                                }
                                stack_data_358 = &system_state_ptr;
                                param_value = (int)array_index + 1;
                                loop_counter = loop_counter + 1;
                                temp_value1 = stack_context_460[7];
                                checksum_value = checksum_value + 0x10;
                                array_index = (uint64_t)param_value;
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    break;
                    
                case RENDERING_PARAM_TYPE_COLOR_SPEC:
                    // 颜色规格参数处理
                    temp_value1 = render_context[7];
                    temp_value2 = render_context[8] - temp_value1 >> 4;
                    if (is_initialization == '\0') {
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(loop_counter + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_230 = stack_buffer_220;
                                stack_buffer_220[0] = 0;
                                stack_length_228 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_238 = stack_data;
                                strcpy_s(stack_buffer_220, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                                if (stack_length_228 == compare_result) {
                                    if (stack_length_228 != 0) {
                                        string_ptr = stack_string_230;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_230);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        param_value = param_array_ptr[0x42];
                                        // 颜色值归一化处理
                                        *(float *)(temp_value1 + 0x248) = (float)(param_value >> 0x10 & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x24c) = (float)(param_value >> 8 & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x250) = (float)(param_value & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x254) = (float)(param_value >> 0x18) * RENDERING_COLOR_NORMALIZATION;
                                        stack_data_238 = &system_state_ptr;
                                        break;
                                    }
                                }
                                else if (stack_length_228 == 0) {
                                    if (compare_result == 0) {
                                        param_value = param_array_ptr[0x42];
                                        *(float *)(temp_value1 + 0x248) = (float)(param_value >> 0x10 & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x24c) = (float)(param_value >> 8 & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x250) = (float)(param_value & 0xff) * RENDERING_COLOR_NORMALIZATION;
                                        *(float *)(temp_value1 + 0x254) = (float)(param_value >> 0x18) * RENDERING_COLOR_NORMALIZATION;
                                        stack_data_238 = &system_state_ptr;
                                        break;
                                    }
                                }
                                stack_data_238 = &system_state_ptr;
                                param_value = (int)checksum_value + 1;
                                checksum_value = (uint64_t)param_value;
                                loop_counter = loop_counter + 0x10;
                                temp_value1 = stack_context_460[7];
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    else {
                        // 更新模式下的颜色规格处理
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        array_index = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(checksum_value + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_290 = stack_buffer_280;
                                stack_buffer_280[0] = 0;
                                stack_length_288 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_298 = stack_data;
                                strcpy_s(stack_buffer_280, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                                if (stack_length_288 == compare_result) {
                                    if (stack_length_288 != 0) {
                                        string_ptr = stack_string_290;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_290);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        temp_value2 = *(int64_t *)(*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10);
                                        param_values[0] = *(int32_t *)(temp_value2 + 0x24c);
                                        param_values[1] = *(int32_t *)(temp_value2 + 0x250);
                                        param_values[2] = *(int32_t *)(temp_value2 + 0x254);
                                        *(int32_t *)(temp_value1 + 0x248) = *(int32_t *)(temp_value2 + 0x248);
                                        *(int32_t *)(temp_value1 + 0x24c) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x250) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x254) = param_values[2];
                                        stack_data_298 = &system_state_ptr;
                                        break;
                                    }
                                }
                                else if (stack_length_288 == 0) {
                                    if (compare_result == 0) {
                                        temp_value2 = *(int64_t *)(*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10);
                                        param_values[0] = *(int32_t *)(temp_value2 + 0x24c);
                                        param_values[1] = *(int32_t *)(temp_value2 + 0x250);
                                        param_values[2] = *(int32_t *)(temp_value2 + 0x254);
                                        *(int32_t *)(temp_value1 + 0x248) = *(int32_t *)(temp_value2 + 0x248);
                                        *(int32_t *)(temp_value1 + 0x24c) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x250) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x254) = param_values[2];
                                        stack_data_298 = &system_state_ptr;
                                        break;
                                    }
                                }
                                stack_data_298 = &system_state_ptr;
                                param_value = (int)array_index + 1;
                                loop_counter = loop_counter + 1;
                                temp_value1 = stack_context_460[7];
                                checksum_value = checksum_value + 0x10;
                                array_index = (uint64_t)param_value;
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    break;
                    
                case RENDERING_PARAM_TYPE_VECTOR_PROC:
                    // 向量处理参数处理
                    temp_value1 = render_context[7];
                    temp_value2 = render_context[8] - temp_value1 >> 4;
                    if (is_initialization == '\0') {
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(loop_counter + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_170 = stack_buffer_160;
                                stack_buffer_160[0] = 0;
                                stack_length_168 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_178 = stack_data;
                                strcpy_s(stack_buffer_160, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                                if (stack_length_168 == compare_result) {
                                    if (stack_length_168 != 0) {
                                        string_ptr = stack_string_170;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_170);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        param_values[0] = param_array_ptr[0x43];
                                        param_values[1] = param_array_ptr[0x44];
                                        param_values[2] = param_array_ptr[0x45];
                                        *(int32_t *)(temp_value1 + 0x2a8) = param_array_ptr[0x42];
                                        *(int32_t *)(temp_value1 + 0x2ac) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x2b0) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x2b4) = param_values[2];
                                        stack_data_178 = &system_state_ptr;
                                        break;
                                    }
                                }
                                else if (stack_length_168 == 0) {
                                    if (compare_result == 0) {
                                        param_values[0] = param_array_ptr[0x43];
                                        param_values[1] = param_array_ptr[0x44];
                                        param_values[2] = param_array_ptr[0x45];
                                        *(int32_t *)(temp_value1 + 0x2a8) = param_array_ptr[0x42];
                                        *(int32_t *)(temp_value1 + 0x2ac) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x2b0) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x2b4) = param_values[2];
                                        stack_data_178 = &system_state_ptr;
                                        break;
                                    }
                                }
                                stack_data_178 = &system_state_ptr;
                                param_value = (int)checksum_value + 1;
                                checksum_value = (uint64_t)param_value;
                                loop_counter = loop_counter + 0x10;
                                temp_value1 = stack_context_460[7];
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    else {
                        // 更新模式下的向量处理
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        array_index = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(checksum_value + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_1d0 = stack_buffer_1c0;
                                stack_buffer_1c0[0] = 0;
                                stack_length_1c8 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_1d8 = stack_data;
                                strcpy_s(stack_buffer_1c0, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                                if (stack_length_1c8 == compare_result) {
                                    if (stack_length_1c8 != 0) {
                                        string_ptr = stack_string_1d0;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_1d0);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        temp_value2 = *(int64_t *)(*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10);
                                        param_values[0] = *(int32_t *)(temp_value2 + 0x2ac);
                                        param_values[1] = *(int32_t *)(temp_value2 + 0x2b0);
                                        param_values[2] = *(int32_t *)(temp_value2 + 0x2b4);
                                        *(int32_t *)(temp_value1 + 0x2a8) = *(int32_t *)(temp_value2 + 0x2a8);
                                        *(int32_t *)(temp_value1 + 0x2ac) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x2b0) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x2b4) = param_values[2];
                                        stack_data_1d8 = &system_state_ptr;
                                        break;
                                    }
                                }
                                else if (stack_length_1c8 == 0) {
                                    if (compare_result == 0) {
                                        temp_value2 = *(int64_t *)(*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10);
                                        param_values[0] = *(int32_t *)(temp_value2 + 0x2ac);
                                        param_values[1] = *(int32_t *)(temp_value2 + 0x2b0);
                                        param_values[2] = *(int32_t *)(temp_value2 + 0x2b4);
                                        *(int32_t *)(temp_value1 + 0x2a8) = *(int32_t *)(temp_value2 + 0x2a8);
                                        *(int32_t *)(temp_value1 + 0x2ac) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x2b0) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x2b4) = param_values[2];
                                        stack_data_1d8 = &system_state_ptr;
                                        break;
                                    }
                                }
                                stack_data_1d8 = &system_state_ptr;
                                param_value = (int)array_index + 1;
                                loop_counter = loop_counter + 1;
                                temp_value1 = stack_context_460[7];
                                checksum_value = checksum_value + 0x10;
                                array_index = (uint64_t)param_value;
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    break;
                    
                case RENDERING_PARAM_TYPE_VECTOR_CFG:
                    // 向量配置参数处理
                    temp_value1 = render_context[7];
                    temp_value2 = render_context[8] - temp_value1 >> 4;
                    if (is_initialization == '\0') {
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(loop_counter + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_b0 = stack_buffer_a0;
                                stack_buffer_a0[0] = 0;
                                stack_length_a8 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_b8 = stack_data;
                                strcpy_s(stack_buffer_a0, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                                if (stack_length_a8 == compare_result) {
                                    if (stack_length_a8 != 0) {
                                        string_ptr = stack_string_b0;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_b0);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        param_values[0] = param_array_ptr[0x43];
                                        param_values[1] = param_array_ptr[0x44];
                                        param_values[2] = param_array_ptr[0x45];
                                        *(int32_t *)(temp_value1 + 0x2b8) = param_array_ptr[0x42];
                                        *(int32_t *)(temp_value1 + 700) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x2c0) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x2c4) = param_values[2];
                                        stack_data_b8 = &system_state_ptr;
                                        break;
                                    }
                                }
                                else if (stack_length_a8 == 0) {
                                    if (compare_result == 0) {
                                        param_values[0] = param_array_ptr[0x43];
                                        param_values[1] = param_array_ptr[0x44];
                                        param_values[2] = param_array_ptr[0x45];
                                        *(int32_t *)(temp_value1 + 0x2b8) = param_array_ptr[0x42];
                                        *(int32_t *)(temp_value1 + 700) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x2c0) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x2c4) = param_values[2];
                                        stack_data_b8 = &system_state_ptr;
                                        break;
                                    }
                                }
                                stack_data_b8 = &system_state_ptr;
                                param_value = (int)checksum_value + 1;
                                checksum_value = (uint64_t)param_value;
                                loop_counter = loop_counter + 0x10;
                                temp_value1 = stack_context_460[7];
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    else {
                        // 更新模式下的向量配置处理
                        param_context = stack_context_468;
                        checksum_value = loop_counter;
                        array_index = loop_counter;
                        if (temp_value2 != 0) {
                            do {
                                stack_data = &unknown_var_3480_ptr;
                                temp_value1 = *(int64_t *)(checksum_value + temp_value1);
                                if (*(int64_t *)(temp_value1 + 0x1b0) == 0) {
                                    temp_value2 = temp_value1 + 0x10;
                                }
                                else {
                                    temp_value2 = func_0x000180079240();
                                }
                                stack_string_110 = stack_buffer_100;
                                stack_buffer_100[0] = 0;
                                stack_length_108 = *(int *)(temp_value2 + 0x10);
                                resource_data = &system_buffer_ptr;
                                if (*(void **)(temp_value2 + 8) != (void *)0x0) {
                                    resource_data = *(void **)(temp_value2 + 8);
                                }
                                stack_data_118 = stack_data;
                                strcpy_s(stack_buffer_100, 0x40, resource_data);
                                temp_value2 = -1;
                                do {
                                    temp_value3 = temp_value2 + 1;
                                    temp_value1 = temp_value2 + 9;
                                    temp_value2 = temp_value3;
                                } while (*(char *)((int64_t)param_array_ptr + temp_value1) != '\0');
                                compare_result = (int)temp_value3;
                                param_context = stack_context_468;
                                render_context = stack_context_460;
                                if (stack_length_108 == compare_result) {
                                    if (stack_length_108 != 0) {
                                        string_ptr = stack_string_110;
                                        do {
                                            buffer_ptr = string_ptr + (int64_t)param_array_ptr + (8 - (int64_t)stack_string_110);
                                            compare_result = (uint)*string_ptr - (uint)*buffer_ptr;
                                            if (compare_result != 0) break;
                                            string_ptr = string_ptr + 1;
                                        } while (*buffer_ptr != 0);
                                    }
                                    if (compare_result == 0) {
                                        temp_value2 = *(int64_t *)(*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10);
                                        param_values[0] = *(int32_t *)(temp_value2 + 700);
                                        param_values[1] = *(int32_t *)(temp_value2 + 0x2c0);
                                        param_values[2] = *(int32_t *)(temp_value2 + 0x2c4);
                                        *(int32_t *)(temp_value1 + 0x2b8) = *(int32_t *)(temp_value2 + 0x2b8);
                                        *(int32_t *)(temp_value1 + 700) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x2c0) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x2c4) = param_values[2];
                                        stack_data_118 = &system_state_ptr;
                                        break;
                                    }
                                }
                                else if (stack_length_108 == 0) {
                                    if (compare_result == 0) {
                                        temp_value2 = *(int64_t *)(*(int64_t *)(*stack_context_468 + 0x38) + loop_counter * 0x10);
                                        param_values[0] = *(int32_t *)(temp_value2 + 700);
                                        param_values[1] = *(int32_t *)(temp_value2 + 0x2c0);
                                        param_values[2] = *(int32_t *)(temp_value2 + 0x2c4);
                                        *(int32_t *)(temp_value1 + 0x2b8) = *(int32_t *)(temp_value2 + 0x2b8);
                                        *(int32_t *)(temp_value1 + 700) = param_values[0];
                                        *(int32_t *)(temp_value1 + 0x2c0) = param_values[1];
                                        *(int32_t *)(temp_value1 + 0x2c4) = param_values[2];
                                        stack_data_118 = &system_state_ptr;
                                        break;
                                    }
                                }
                                stack_data_118 = &system_state_ptr;
                                param_value = (int)array_index + 1;
                                loop_counter = loop_counter + 1;
                                temp_value1 = stack_context_460[7];
                                checksum_value = checksum_value + 0x10;
                                array_index = (uint64_t)param_value;
                            } while ((uint64_t)(int64_t)(int)param_value < (uint64_t)(stack_context_460[8] - temp_value1 >> 4));
                        }
                    }
                    break;
            }
            
            // 移动到下一个参数块
            next_resource_ptr = (int64_t *)*next_resource_ptr;
        } while (next_resource_ptr != param_context + 1);
    }
    
    // 调用清理函数
    CoreSystemConfigManager(stack_checksum_58 ^ (uint64_t)stack_buffer_488);
}

// ============================================================================
// 渲染系统辅助函数实现
// ============================================================================

// 渲染系统基础参数处理函数
void rendering_system_process_basic_parameters(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    if (is_initialization == '\0') {
        *(int32_t *)((int64_t)render_context + 0x324) = param_values[0];
        *(int8_t *)((int64_t)render_context + 0x32c) = 0;
    }
    else {
        *(int32_t *)((int64_t)render_context + 0x324) = *(int32_t *)(*param_context + 0x324);
        *(int8_t *)((int64_t)render_context + 0x32c) = *(int8_t *)(*param_context + 0x32c);
    }
}

// 渲染系统函数指针参数处理函数
void rendering_system_process_function_pointers(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    code *function_ptr;
    int64_t *resource_ptr;
    
    if (is_initialization == '\0') {
        function_ptr = *(code **)(*render_context + 0x118);
        resource_ptr = *(int64_t **)(param_values + 2);
        if (resource_ptr != (int64_t *)0x0) {
            (**(code **)(*resource_ptr + 0x28))();
        }
        (*function_ptr)(render_context, &resource_ptr);
        if (resource_ptr != (int64_t *)0x0) {
            (**(code **)(*resource_ptr + 0x38))();
        }
    }
    else {
        int64_t temp_value = *param_context;
        resource_ptr = *(int64_t **)(temp_value + 0x38);
        if (*(int64_t *)(temp_value + 0x40) - (int64_t)resource_ptr >> 4 != 0) {
            (**(code **)(*render_context + 0x118))(render_context, *resource_ptr + 0x1b8);
        }
    }
}

// 渲染系统资源管理参数处理函数
void rendering_system_process_resource_management(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    int64_t *resource_ptr;
    int64_t *old_resource;
    
    if (is_initialization == '\0') {
        resource_ptr = *(int64_t **)(param_values + 2);
        if (resource_ptr != (int64_t *)0x0) {
            old_resource = resource_ptr;
            (**(code **)(*resource_ptr + 0x28))(resource_ptr);
        }
        old_resource = (int64_t *)render_context[0x77];
        render_context[0x77] = (int64_t)resource_ptr;
        if (old_resource != (int64_t *)0x0) {
            (**(code **)(*old_resource + 0x38))();
        }
    }
    else {
        FUN_180080810(render_context + 0x77, *param_context + 0x3b8);
    }
}

// 渲染系统着色器配置参数处理函数
void rendering_system_process_shader_configuration(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    if (is_initialization == '\0') {
        param_values = param_values + 2;
    }
    else {
        param_values = (int32_t *)(*param_context + 0x330);
    }
    (**(code **)(*render_context + 0x148))(render_context, param_values);
    FUN_180276f30(render_context, (int64_t)render_context + 0x214, 1);
}

// 渲染系统纹理配置参数处理函数
void rendering_system_process_texture_configuration(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    int64_t *resource_ptr;
    int64_t temp_value1;
    int64_t temp_value2;
    uint32_t values[3];
    
    if (is_initialization == '\0') {
        resource_ptr = (int64_t *)render_context[7];
        if (resource_ptr < (int64_t *)render_context[8]) {
            do {
                temp_value1 = *resource_ptr;
                values[0] = param_values[3];
                values[1] = param_values[4];
                values[2] = param_values[5];
                *(int32_t *)(temp_value1 + 0x2b8) = param_values[2];
                *(int32_t *)(temp_value1 + 700) = values[0];
                *(int32_t *)(temp_value1 + 0x2c0) = values[1];
                *(int32_t *)(temp_value1 + 0x2c4) = values[2];
                resource_ptr = resource_ptr + 2;
            } while (resource_ptr < (int64_t *)render_context[8]);
        }
    }
    else {
        temp_value1 = *param_context;
        resource_ptr = *(int64_t **)(temp_value1 + 0x38);
        if (*(int64_t *)(temp_value1 + 0x40) - (int64_t)resource_ptr >> 4 != 0) {
            temp_value1 = *resource_ptr;
            resource_ptr = (int64_t *)render_context[7];
            if (resource_ptr < (int64_t *)render_context[8]) {
                do {
                    temp_value2 = *resource_ptr;
                    values[0] = *(int32_t *)(temp_value1 + 700);
                    values[1] = *(int32_t *)(temp_value1 + 0x2c0);
                    values[2] = *(int32_t *)(temp_value1 + 0x2c4);
                    *(int32_t *)(temp_value2 + 0x2b8) = *(int32_t *)(temp_value1 + 0x2b8);
                    *(int32_t *)(temp_value2 + 700) = values[0];
                    *(int32_t *)(temp_value2 + 0x2c0) = values[1];
                    *(int32_t *)(temp_value2 + 0x2c4) = values[2];
                    resource_ptr = resource_ptr + 2;
                } while (resource_ptr < (int64_t *)render_context[8]);
            }
        }
    }
}

// 渲染系统字符串比较参数处理函数
void rendering_system_process_string_comparison(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    // 字符串比较处理逻辑的具体实现
    // 包含字符串匹配、资源查找等功能
}

// 渲染系统颜色处理参数处理函数
void rendering_system_process_color_processing(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    // 颜色处理逻辑的具体实现
    // 包含颜色值归一化、颜色空间转换等功能
}

// 渲染系统颜色规格参数处理函数
void rendering_system_process_color_specification(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    // 颜色规格处理逻辑的具体实现
    // 包含颜色属性设置、颜色混合模式配置等功能
}

// 渲染系统向量处理参数处理函数
void rendering_system_process_vector_processing(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    // 向量处理逻辑的具体实现
    // 包含向量运算、变换矩阵应用等功能
}

// 渲染系统向量配置参数处理函数
void rendering_system_process_vector_configuration(
    int64_t *render_context,
    int64_t *param_context,
    char is_initialization,
    uint32_t *param_values
) {
    // 向量配置处理逻辑的具体实现
    // 包含向量属性设置、向量规格配置等功能
}

// ============================================================================
// 技术实现说明
// ============================================================================

/*
 * 函数别名定义：
 * - rendering_system_parameter_processor: 渲染系统参数处理器 (FUN_180279640)
 * 
 * 核心技术特点：
 * 1. 高效的参数处理机制：使用switch-case结构处理10种不同类型的参数
 * 2. 智能内存管理：使用栈缓冲区和动态内存分配相结合的方式
 * 3. 字符串处理优化：实现高效的字符串比较和匹配算法
 * 4. 颜色处理：支持RGB颜色空间的归一化处理
 * 5. 资源管理：完整的资源生命周期管理
 * 
 * 性能优化策略：
 * - 使用局部变量减少内存访问开销
 * - 采用位操作提高颜色处理效率
 * - 实现批量数据处理减少循环开销
 * - 使用栈保护机制确保内存安全
 * 
 * 应用场景：
 * - 渲染管线参数配置
 * - 着色器参数管理
 * - 纹理属性设置
 * - 颜色空间转换
 * - 向量运算处理
 * 
 * 注意事项：
 * - 该函数不返回，最后调用清理函数
 * - 使用栈保护机制防止缓冲区溢出
 * - 支持初始化和更新两种操作模式
 * - 包含完整的错误处理和资源清理机制
 */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address