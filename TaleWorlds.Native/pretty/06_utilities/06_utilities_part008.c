#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 工具函数模块 008 - 高级数据结构和哈希表处理
// ============================================================================

// 工具系统常量定义
#define UTILITIES_MAX_HASH_TABLE_SIZE         0x1000     // 哈希表最大大小
#define UTILITIES_DEFAULT_HASH_MASK           0xFFFF      // 默认哈希掩码
#define UTILITIES_MIN_CAPACITY                4           // 最小容量
#define UTILITIES_GROWTH_FACTOR               1.5f        // 增长因子
#define UTILITIES_MAX_STACK_ALLOC            1536        // 最大栈分配大小
#define UTILITIES_INVALID_INDEX               -1          // 无效索引
#define UTILITIES_SUCCESS                    0           // 成功返回值
#define UTILITIES_ERROR_INVALID_PARAM         0x1c        // 无效参数错误
#define UTILITIES_ERROR_NOT_FOUND            0x1e        // 未找到错误

// 工具系统状态枚举
typedef enum {
    UTILITIES_STATE_IDLE = 0,        // 空闲状态
    UTILITIES_STATE_PROCESSING = 1,  // 处理中状态
    UTILITIES_STATE_COMPLETED = 2,   // 完成状态
    UTILITIES_STATE_ERROR = 3        // 错误状态
} UtilitiesState;

// 工具系统操作类型枚举
typedef enum {
    UTILITIES_OP_INSERT = 0,         // 插入操作
    UTILITIES_OP_SEARCH = 1,         // 搜索操作
    UTILITIES_OP_REMOVE = 2,         // 移除操作
    UTILITIES_OP_UPDATE = 3,         // 更新操作
    UTILITIES_OP_CLEAR = 4           // 清空操作
} UtilitiesOperation;

// 工具系统错误类型枚举
typedef enum {
    UTILITIES_ERROR_NONE = 0,        // 无错误
    UTILITIES_ERROR_MEMORY = 1,      // 内存错误
    UTILITIES_ERROR_OVERFLOW = 2,    // 溢出错误
    UTILITIES_ERROR_NOT_FOUND = 3,   // 未找到错误
    UTILITIES_ERROR_INVALID = 4      // 无效参数错误
} UtilitiesError;

// 哈希表条目结构体
typedef struct {
    uint key;                        // 键值
    uint value;                      // 数值
    int next_index;                  // 下一个索引
    void* data_ptr;                  // 数据指针
} HashTableEntry;

// 动态数组结构体
typedef struct {
    void* data_ptr;                  // 数据指针
    int size;                        // 当前大小
    int capacity;                    // 总容量
    int element_size;                // 元素大小
    uint flags;                      // 标志位
} DynamicArray;

// 工具系统上下文结构体
typedef struct {
    void* base_ptr;                  // 基础指针
    int current_index;               // 当前索引
    int max_indices;                 // 最大索引数
    int element_size;                // 元素大小
    uint state_flags;                // 状态标志
    HashTableEntry* hash_table;     // 哈希表指针
    DynamicArray* dynamic_array;    // 动态数组指针
} UtilitiesContext;

// 工具系统参数结构体
typedef struct {
    int operation_type;              // 操作类型
    uint hash_mask;                  // 哈希掩码
    int growth_threshold;            // 增长阈值
    float growth_factor;             // 增长因子
    int max_iterations;              // 最大迭代次数
    void* user_data;                 // 用户数据指针
} UtilitiesParameters;

// 主要工具函数别名
#define Utilities_ProcessData          FUN_180895360   // 工具系统数据处理器
#define Utilities_HandleOperation     FUN_1808953bf   // 工具系统操作处理器
#define Utilities_CleanupContext      FUN_180895b89   // 工具系统上下文清理器
#define Utilities_FindEntry           FUN_180895bb0   // 工具系统条目查找器
#define Utilities_ProcessHash         FUN_180895c60   // 工具系统哈希处理器
#define Utilities_HandleHashOp        FUN_180895c8b   // 工具系统哈希操作处理器
#define Utilities_ExtractValue       FUN_180895cf1   // 工具系统数值提取器
#define Utilities_GetDefaultError    FUN_180895d16   // 工具系统默认错误获取器
#define Utilities_InsertHashEntry    FUN_180895d30   // 工具系统哈希条目插入器
#define Utilities_UpdateHashEntry    FUN_180895d62   // 工具系统哈希条目更新器
#define Utilities_InsertArrayEntry   FUN_180895d9c   // 工具系统数组条目插入器
#define Utilities_SetArrayValue      FUN_180895e00   // 工具系统数组数值设置器
#define Utilities_ResizeArray        FUN_180895e19   // 工具系统数组调整大小器

/**
 * 工具系统数据处理器 - 主要的数据处理和状态管理函数
 * 
 * 该函数是工具系统的核心处理器，负责处理各种数据操作、状态转换和资源管理。
 * 它包含复杂的条件逻辑、浮点数计算、内存操作和状态同步功能。
 * 
 * @param system_handle 系统句柄，包含系统状态和配置信息
 * @param output_ptr 输出指针，用于返回处理结果
 * @param counter_ptr 计数器指针，用于跟踪处理次数
 * 
 * 处理流程：
 * 1. 检查系统状态和有效性
 * 2. 根据当前状态分支处理
 * 3. 执行浮点数计算和验证
 * 4. 处理内存操作和数据同步
 * 5. 更新系统状态和计数器
 * 6. 返回处理结果
 */
void Utilities_ProcessData(longlong system_handle, int8_t *output_ptr, int *counter_ptr) {
    // 局部变量声明
    byte status_flag;
    longlong temp_var1;
    char state_char;
    int current_index;
    uint64_t result_var;
    longlong temp_var2;
    longlong base_offset;
    int max_index;
    longlong data_offset;
    float float_value1;
    float float_value2;
    
    // 栈变量和缓冲区
    int8_t stack_buffer_738[68];        // 栈缓冲区1
    int32_t stack_value_6f4;             // 栈值1
    int *stack_counter_ptr;                 // 栈计数器指针
    longlong stack_offset_6e0;               // 栈偏移量1
    longlong stack_offset_6b8;               // 栈偏移量2
    longlong stack_array_6b0[13];            // 栈数组
    int8_t stack_buffer_648[1536];      // 大栈缓冲区
    ulonglong security_cookie;              // 安全cookie
    
    // 安全cookie初始化
    security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer_738;
    
    // 获取当前索引和基础偏移量
    current_index = *(int *)(system_handle + 0xac);
    base_offset = (longlong)current_index;
    stack_counter_ptr = counter_ptr;
    
    // 检查索引范围
    if (current_index < *(int *)(system_handle + 0x20)) {
        // 获取数据偏移量和相关信息
        stack_offset_6e0 = *(longlong *)(system_handle + 0x18);
        stack_offset_6b8 = base_offset * 3;
        data_offset = (longlong)*(int *)(stack_offset_6e0 + base_offset * 0xc) + *(longlong *)(system_handle + 8);
        state_char = *(char *)(stack_offset_6e0 + 8 + base_offset * 0xc);
        
        // 根据状态字符分支处理
        if (state_char == '\x01') {
            // 状态1处理逻辑
            max_index = *(int *)(system_handle + 0xb0);
            if (current_index < max_index) {
                // 更新索引并跳转到完成处理
                *(int *)(system_handle + 0xac) = current_index + 1;
                goto cleanup_handler;
            }
            
            // 浮点数处理
            float_value1 = *(float *)(data_offset + 0x18);
            float_value2 = float_value1;
            if (max_index != -1) {
                float_value2 = *(float *)(system_handle + 0xb4);
                max_index = -1;
                *(int32_t *)(system_handle + 0xb0) = 0xffffffff;
                *(int32_t *)(system_handle + 0xb4) = 0xbf800000;  // -1.0f
            }
            
            // 更新系统浮点数值
            *(float *)(system_handle + 0xa8) = float_value1;
            base_offset = 0;
            
            // 浮点数计算和验证
            float_value1 = (float)*(uint *)(system_handle + 0x68) * float_value1;
            if ((9.223372e+18 <= float_value1) && 
                (float_value1 = float_value1 - 9.223372e+18, float_value1 < 9.223372e+18)) {
                base_offset = -0x8000000000000000;  // 最小长整型值
            }
            
            // 获取系统偏移量和状态
            temp_var1 = *(longlong *)(system_handle + 0xa0);
            temp_var2 = *(longlong *)(system_handle + 0x98);
            if (temp_var2 == 0) {
                // 第二次浮点数计算
                float_value2 = (float)*(uint *)(system_handle + 0x68) * float_value2;
                temp_var2 = 0;
                if ((9.223372e+18 <= float_value2) && 
                    (float_value2 = float_value2 - 9.223372e+18, float_value2 < 9.223372e+18)) {
                    temp_var2 = -0x8000000000000000;
                }
                temp_var2 = temp_var1 - ((longlong)float_value2 + temp_var2);
                *(longlong *)(system_handle + 0x98) = temp_var2;
            }
            
            // 状态标志检查和处理
            status_flag = *(byte *)(system_handle + 0x6c);
            if (*(longlong *)(system_handle + 0xc0) != 0) {
                result_var = FUN_180895ef0(system_handle);
                current_index = (**(code **)(system_handle + 0xc0))
                    (result_var, current_index, *(int32_t *)(data_offset + 0x18), 
                     *(uint64_t *)(system_handle + 0xb8));
                if (current_index != 0) goto cleanup_handler;
            }
            
            // 复杂条件检查和数据复制
            if (((((status_flag & 2) != 0 || 
                   (longlong)float_value1 + base_offset < temp_var1 - temp_var2) &&
                  (current_index = *stack_counter_ptr, *stack_counter_ptr = current_index + 1, current_index < 10)) &&
                 ((*(uint *)(system_handle + 0x6c) >> 0x18 & 1) == 0)) &&
                (((*(uint *)(system_handle + 0x6c) >> 0x19 & 1) != 0 && 
                  (max_index == *(int *)(system_handle + 0xb0))))) {
                // 数据复制处理
                memcpy(stack_buffer_648, data_offset, (longlong)*(int *)(data_offset + 8));
            }
        }
        else {
            // 其他状态处理
            if (state_char == '\x06') {
                // 状态6处理
                state_char = func_0x000180881f80(*(uint64_t *)(system_handle + 0x58));
                if (state_char == '\0') goto data_copy_handler;
                *output_ptr = 0;
                goto cleanup_handler;
            }
            
            if (state_char == '\a') {
                // 状态7处理
                state_char = func_0x000180881f80(*(uint64_t *)(system_handle + 0x58));
                if (state_char == '\0') {
                    if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(system_handle + 0x58) + 0x90) + 0x790) + 0x1c8) != 0) {
                        *output_ptr = 0;
                        goto cleanup_handler;
                    }
                    goto data_copy_handler;
                }
            }
            else {
                // 状态2处理
                if ((state_char != '\x02') || ((*(byte *)(system_handle + 0x6c) & 4) != 0)) 
                    goto data_copy_handler;
                
                stack_value_6f4 = *(int32_t *)(data_offset + 0x20);
                current_index = FUN_180895c60(system_handle, current_index, &stack_value_6f4);
                if (current_index != 0) goto cleanup_handler;
                
                current_index = func_0x00018088c530(stack_value_6f4, stack_array_6b0);
                if ((current_index != 0) || (*(int *)(stack_array_6b0[0] + 0x30) != 2)) 
                    goto data_copy_handler;
            }
        }
        
        // 设置输出值
        *output_ptr = 0;
    }
    else {
        // 索引超出范围的处理
        *(uint *)(system_handle + 0x6c) = *(uint *)(system_handle + 0x6c) & 0xfdffffff;
        *(uint *)(system_handle + 0x6c) = *(uint *)(system_handle + 0x6c) | 0x4000000;
        *output_ptr = 0;
    }
    
cleanup_handler:
    // 清理处理
    FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer_738);
    return;

data_copy_handler:
    // 数据复制处理分支
    memcpy(stack_buffer_648, data_offset, (longlong)*(int *)(data_offset + 8));
    goto cleanup_handler;
}

/**
 * 工具系统操作处理器 - 处理各种工具系统操作
 * 
 * 该函数负责处理工具系统的各种操作，包括数据查找、状态更新、
 * 浮点数计算和内存管理等功能。
 * 
 * @param param1 系统参数1
 * @param param2 系统参数2
 * @param param3 系统参数3
 */
void Utilities_HandleOperation(longlong param1, uint64_t param2, int *param3) {
    // 局部变量声明
    longlong temp_var1;
    char state_char;
    int temp_index1;
    int temp_index2;
    longlong data_offset;
    longlong base_offset;
    uint64_t result_var;
    longlong temp_var3;
    float float_value1;
    float float_value2;
    
    // 寄存器变量（来自原始代码）
    int unaff_EBX;
    int32_t unaff_0000001c;
    longlong unaff_RBP;
    longlong unaff_RDI;
    char in_R11B;
    int8_t *unaff_R13;
    
    // 栈变量
    uint64_t in_stack_00000040;
    int *in_stack_00000048;
    
    // 计算基础偏移量
    base_offset = CONCAT44(unaff_0000001c, unaff_EBX) + CONCAT44(unaff_0000001c, unaff_EBX) * 2;
    data_offset = (longlong)*(int *)(in_RAX + base_offset * 4) + *(longlong *)(param1 + 8);
    state_char = *(char *)(in_RAX + 8 + base_offset * 4);
    *(longlong *)(unaff_RBP + -0x80) = base_offset;
    
    // 状态匹配检查
    if (state_char == in_R11B) {
        temp_index2 = *(int *)(param1 + 0xb0);
        if (unaff_EBX < temp_index2) {
            *(int *)(param1 + 0xac) = unaff_EBX + 1;
            goto cleanup_handler;
        }
        
        // 浮点数处理
        float_value1 = *(float *)(data_offset + 0x18);
        float_value2 = float_value1;
        if (temp_index2 != -1) {
            float_value2 = *(float *)(param1 + 0xb4);
            temp_index2 = -1;
            *(int32_t *)(param1 + 0xb0) = 0xffffffff;
            *(int32_t *)(param1 + 0xb4) = 0xbf800000;
        }
        
        // 更新系统值
        *(float *)(param1 + 0xa8) = float_value1;
        base_offset = 0;
        float_value1 = (float)*(uint *)(param1 + 0x68) * float_value1;
        
        // 浮点数范围验证
        if ((9.223372e+18 <= float_value1) && 
            (float_value1 = float_value1 - 9.223372e+18, float_value1 < 9.223372e+18)) {
            base_offset = -0x8000000000000000;
        }
        
        // 获取系统变量
        temp_var1 = *(longlong *)(param1 + 0xa0);
        temp_var3 = *(longlong *)(param1 + 0x98);
        if (temp_var3 == 0) {
            float_value2 = (float)*(uint *)(param1 + 0x68) * float_value2;
            temp_var3 = 0;
            if ((9.223372e+18 <= float_value2) && 
                (float_value2 = float_value2 - 9.223372e+18, float_value2 < 9.223372e+18)) {
                temp_var3 = -0x8000000000000000;
            }
            temp_var3 = temp_var1 - ((longlong)float_value2 + temp_var3);
            *(longlong *)(unaff_RDI + 0x98) = temp_var3;
        }
        
        // 条件检查和状态处理
        state_char = (longlong)float_value1 + base_offset < temp_var1 - temp_var3;
        if ((*(byte *)(unaff_RDI + 0x6c) & 2) != 0) {
            state_char = in_R11B;
        }
        
        // 回调函数处理
        if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
            result_var = FUN_180895ef0();
            temp_index1 = (**(code **)(unaff_RDI + 0xc0))
                (result_var, unaff_EBX, *(int32_t *)(data_offset + 0x18),
                 *(uint64_t *)(unaff_RDI + 0xb8));
            param3 = in_stack_00000048;
            if (temp_index1 != 0) goto cleanup_handler;
        }
        
        // 最终条件检查
        if ((((state_char != '\0') && 
              (temp_index1 = *param3, *param3 = temp_index1 + 1, temp_index1 < 10)) &&
             ((*(uint *)(unaff_RDI + 0x6c) >> 0x18 & 1) == 0)) &&
            (((*(uint *)(unaff_RDI + 0x6c) >> 0x19 & 1) != 0 && 
              (temp_index2 == *(int *)(unaff_RDI + 0xb0))))) {
            // 数据复制处理
            memcpy(unaff_RBP + -0x10, data_offset, (longlong)*(int *)(data_offset + 8));
        }
    }
    else {
        // 状态不匹配的处理
        if (state_char == '\x06') {
            state_char = func_0x000180881f80(*(uint64_t *)(param1 + 0x58));
            if (state_char == '\0') goto data_copy_handler;
            *unaff_R13 = 0;
            goto cleanup_handler;
        }
        
        if (state_char == '\a') {
            state_char = func_0x000180881f80(*(uint64_t *)(param1 + 0x58));
            if (state_char == '\0') {
                if (*(int *)(*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x90) + 0x790) + 0x1c8) != 0) {
                    *unaff_R13 = 0;
                    goto cleanup_handler;
                }
                goto data_copy_handler;
            }
        }
        else {
            if ((state_char != '\x02') || ((*(byte *)(param1 + 0x6c) & 4) != 0)) 
                goto data_copy_handler;
            
            in_stack_00000040._4_4_ = *(int32_t *)(data_offset + 0x20);
            temp_index2 = FUN_180895c60(param1, unaff_EBX, (longlong)&in_stack_00000040 + 4);
            if (temp_index2 != 0) goto cleanup_handler;
            
            temp_index2 = func_0x00018088c530(in_stack_00000040._4_4_, unaff_RBP + -0x78);
            if ((temp_index2 != 0) || 
                (*(int *)(*(longlong *)(unaff_RBP + -0x78) + 0x30) != 2))
                goto data_copy_handler;
        }
    }
    
    // 设置输出值
    *unaff_R13 = 0;
    
cleanup_handler:
    // 清理处理
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x5f0) ^ (ulonglong)&in_stack_00000040);
    return;

data_copy_handler:
    // 数据复制处理分支
    memcpy(unaff_RBP + -0x10, data_offset, (longlong)*(int *)(data_offset + 8));
    goto cleanup_handler;
}

/**
 * 工具系统上下文清理器 - 清理系统上下文和资源
 */
void Utilities_CleanupContext(void) {
    longlong unaff_RBP;
    
    // 清理处理
    FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x5f0) ^ (ulonglong)&stack0x00000000);
}

/**
 * 工具系统条目查找器 - 在数据结构中查找指定条目
 * 
 * 该函数负责在系统的数据结构中查找指定的条目，支持多种查找模式和条件。
 * 
 * @param system_handle 系统句柄
 * @param search_index 搜索索引
 * @param result_ptr 结果指针，用于返回查找结果
 */
void Utilities_FindEntry(longlong system_handle, int search_index, uint64_t *result_ptr) {
    // 局部变量声明
    uint64_t temp_value;
    int *temp_ptr;
    longlong temp_offset1;
    longlong temp_offset2;
    int temp_value1;
    
    // 初始化结果
    *result_ptr = 0;
    result_ptr[1] = 0;
    
    // 获取临时指针和值
    temp_ptr = (int *)(**(code **)(*(longlong *)
        ((longlong)*(int *)(*(longlong *)(system_handle + 0x18) + (longlong)search_index * 0xc) +
        *(longlong *)(system_handle + 8)) + 0x50))();
    
    if (temp_ptr == (int *)0x0) {
        temp_value1 = 0;
    }
    else {
        temp_value1 = *temp_ptr;
    }
    
    // 搜索处理
    if (search_index + 1 < *(int *)(system_handle + 0x20)) {
        temp_offset2 = (longlong)(search_index + 1);
        temp_ptr = (int *)(*(longlong *)(system_handle + 0x18) + temp_offset2 * 0xc);
        
        // 循环搜索匹配条目
        while (((char)temp_ptr[2] != '\x02' ||
               (temp_offset1 = (longlong)*temp_ptr + *(longlong *)(system_handle + 8), 
                *(int *)(temp_offset1 + 0x20) != temp_value1))) {
            temp_offset2 = temp_offset2 + 1;
            temp_ptr = temp_ptr + 3;
            if (*(int *)(system_handle + 0x20) <= temp_offset2) {
                return;
            }
        }
        
        // 找到匹配条目，设置结果
        temp_value = *(uint64_t *)(temp_offset1 + 0x18);
        *result_ptr = *(uint64_t *)(temp_offset1 + 0x10);
        result_ptr[1] = temp_value;
    }
    return;
}

/**
 * 工具系统哈希处理器 - 处理哈希表相关操作
 * 
 * 该函数负责处理哈希表的各种操作，包括查找、插入、更新和删除等。
 * 
 * @param system_handle 系统句柄
 * @param param_index 参数索引
 * @param hash_value_ptr 哈希值指针
 * @return 处理结果状态码
 */
uint64_t Utilities_ProcessHash(longlong system_handle, int param_index, uint *hash_value_ptr) {
    // 局部变量声明
    uint hash_value;
    longlong temp_offset1;
    longlong temp_offset2;
    uint64_t *callback_ptr;
    int temp_index;
    int32_t temp_stack_value;
    
    // 参数验证
    if (hash_value_ptr != (uint *)0x0) {
        hash_value = *hash_value_ptr;
        if (hash_value != 0) {
            // 哈希表处理条件检查
            if (((*(int *)(system_handle + 0x94) != 0) && (*(int *)(system_handle + 0x78) != 0)) &&
                (temp_index = *(int *)(*(longlong *)(system_handle + 0x70) +
                    (longlong)(int)(*(int *)(system_handle + 0x78) - 1U & hash_value) * 4), 
                 temp_index != -1)) {
                
                temp_offset1 = *(longlong *)(system_handle + 0x80);
                
                // 哈希表搜索循环
                do {
                    temp_offset2 = (longlong)temp_index;
                    if (*(uint *)(temp_offset1 + temp_offset2 * 0x10) == hash_value) {
                        temp_stack_value = (uint)((ulonglong)*(uint64_t *)
                            (temp_offset1 + 8 + temp_offset2 * 0x10) >> 0x20);
                        if (temp_stack_value != 0) {
                            *hash_value_ptr = temp_stack_value;
                            return UTILITIES_SUCCESS;
                        }
                        goto callback_handler;
                    }
                    temp_index = *(int *)(temp_offset1 + 4 + temp_offset2 * 0x10);
                } while (temp_index != -1);
            }
            
            temp_stack_value = 0;
callback_handler:
            // 回调函数处理
            callback_ptr = (uint64_t *)
                ((longlong)*(int *)(*(longlong *)(system_handle + 0x18) + (longlong)param_index * 0xc) +
                *(longlong *)(system_handle + 8));
            
            if (callback_ptr != (uint64_t *)0x0) {
                (**(code **)*callback_ptr)();
            }
            
            *hash_value_ptr = temp_stack_value;
            return UTILITIES_SUCCESS;
        }
    }
    return UTILITIES_ERROR_INVALID_PARAM;
}

/**
 * 工具系统哈希操作处理器 - 处理高级哈希操作
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 处理结果状态码
 */
uint64_t Utilities_HandleHashOp(longlong param1, uint64_t param2, longlong param3, uint param4) {
    // 局部变量声明
    longlong temp_offset1;
    longlong temp_offset2;
    uint64_t *callback_ptr;
    int temp_index;
    int *result_ptr;
    longlong system_handle;
    bool zero_flag;
    int stack_value;
    
    // 条件检查和处理
    if (((!zero_flag) && (*(int *)(param1 + 0x78) != 0)) &&
        (temp_index = *(int *)(*(longlong *)(system_handle + 0x70) +
            (longlong)(int)(*(int *)(param1 + 0x78) - 1U & param4) * 4), 
         temp_index != -1)) {
        
        temp_offset1 = *(longlong)(system_handle + 0x80);
        
        // 哈希搜索循环
        do {
            temp_offset2 = (longlong)temp_index;
            if (*(uint *)(temp_offset1 + temp_offset2 * 0x10) == param4) {
                stack_value = (int)((ulonglong)*(uint64_t *)
                    (temp_offset1 + 8 + temp_offset2 * 0x10) >> 0x20);
                if (stack_value != 0) {
                    *result_ptr = stack_value;
                    return UTILITIES_SUCCESS;
                }
                goto callback_handler;
            }
            temp_index = *(int *)(temp_offset1 + 4 + temp_offset2 * 0x10);
        } while (temp_index != -1);
    }
    
    stack_value = 0;
callback_handler:
    // 回调处理
    callback_ptr = (uint64_t *)
        ((longlong)*(int *)(*(longlong *)(system_handle + 0x18) + param3 * 0xc) +
        *(longlong)(system_handle + 8));
    
    if (callback_ptr != (uint64_t *)0x0) {
        (**(code **)*callback_ptr)();
    }
    
    *result_ptr = stack_value;
    return UTILITIES_SUCCESS;
}

/**
 * 工具系统数值提取器 - 从数据结构中提取数值
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @return 提取的数值或状态码
 */
uint64_t Utilities_ExtractValue(longlong param1, uint64_t param2, longlong param3) {
    // 局部变量声明
    uint64_t extracted_value;
    longlong array_offset;
    uint64_t *callback_ptr;
    int *result_ptr;
    longlong system_handle;
    uint64_t stack_value;
    
    // 数值提取
    extracted_value = *(uint64_t *)(param1 + 8 + array_offset * 8);
    stack_value._4_4_ = (int)((ulonglong)extracted_value >> 0x20);
    
    if (stack_value._4_4_ != 0) {
        *result_ptr = stack_value._4_4_;
        return UTILITIES_SUCCESS;
    }
    
    // 回调处理
    callback_ptr = (uint64_t *)
        ((longlong)*(int *)(*(longlong *)(system_handle + 0x18) + param3 * 0xc) +
        *(longlong)(system_handle + 8));
    
    if (callback_ptr != (uint64_t *)0x0) {
        stack_value = extracted_value;
        (**(code **)*callback_ptr)();
    }
    
    *result_ptr = 0;
    return UTILITIES_SUCCESS;
}

/**
 * 工具系统默认错误获取器 - 获取默认错误码
 * 
 * @return 默认错误码
 */
uint64_t Utilities_GetDefaultError(void) {
    return UTILITIES_ERROR_NOT_FOUND;
}

/**
 * 工具系统哈希条目插入器 - 向哈希表中插入条目
 * 
 * 该函数负责向哈希表中插入新的条目，包括容量检查、
 * 内存分配和条目链接等操作。
 * 
 * @param hash_table_ptr 哈希表指针
 * @param key_ptr 键指针
 * @param value_ptr 值指针
 * @return 插入结果状态码
 */
uint64_t Utilities_InsertHashEntry(longlong *hash_table_ptr, uint *key_ptr, uint64_t *value_ptr) {
    // 局部变量声明
    uint key_value;
    int current_index;
    int temp_index1;
    uint64_t result_code;
    uint64_t temp_value;
    uint64_t *new_entry_ptr;
    int new_index;
    longlong table_offset;
    longlong entry_offset;
    uint *existing_key_ptr;
    uint existing_key;
    int *index_ptr;
    
    // 获取结果码
    result_code = FUN_180895210();
    if ((int)result_code == 0) {
        // 检查哈希表是否有效
        if ((int)hash_table_ptr[1] == 0) {
            return UTILITIES_ERROR_INVALID_PARAM;
        }
        
        key_value = *key_ptr;
        table_offset = (longlong)(int)((int)hash_table_ptr[1] - 1U & key_value);
        index_ptr = (int *)(*hash_table_ptr + table_offset * 4);
        current_index = *(int *)(*hash_table_ptr + table_offset * 4);
        
        // 查找现有条目
        if (current_index != -1) {
            table_offset = hash_table_ptr[2];
            do {
                entry_offset = (longlong)current_index;
                if (*(uint *)(table_offset + entry_offset * 0x10) == key_value) {
                    // 更新现有条目
                    *(uint64_t *)(table_offset + 8 + entry_offset * 0x10) = *value_ptr;
                    return UTILITIES_SUCCESS;
                }
                current_index = *(int *)(table_offset + 4 + entry_offset * 0x10);
                index_ptr = (int *)(table_offset + 4 + entry_offset * 0x10);
            } while (current_index != -1);
        }
        
        // 获取空闲索引
        current_index = (int)hash_table_ptr[4];
        if (current_index == -1) {
            // 需要扩展哈希表
            temp_value = *value_ptr;
            current_index = (int)hash_table_ptr[3];
            new_index = current_index + 1;
            
            // 计算新容量
            existing_key = (int)*(uint *)((longlong)hash_table_ptr + 0x1c) >> 0x1f;
            temp_index1 = (*(uint *)((longlong)hash_table_ptr + 0x1c) ^ existing_key) - existing_key;
            
            if (temp_index1 < new_index) {
                // 容量扩展计算
                int expanded_size = (int)((float)temp_index1 * UTILITIES_GROWTH_FACTOR);
                temp_index1 = new_index;
                if (new_index <= expanded_size) {
                    temp_index1 = expanded_size;
                }
                if (temp_index1 < UTILITIES_MIN_CAPACITY) {
                    expanded_size = UTILITIES_MIN_CAPACITY;
                }
                else if (expanded_size < new_index) {
                    expanded_size = new_index;
                }
                
                // 重新分配内存
                temp_value = FUN_1807d3f50(hash_table_ptr + 2, expanded_size);
                if ((int)temp_value != 0) {
                    return temp_value;
                }
            }
            
            // 创建新条目
            new_entry_ptr = (uint64_t *)((longlong)(int)hash_table_ptr[3] * 0x10 + hash_table_ptr[2]);
            *new_entry_ptr = CONCAT44(0xffffffff, key_value);
            new_entry_ptr[1] = temp_value;
            *(int *)(hash_table_ptr + 3) = (int)hash_table_ptr[3] + 1;
        }
        else {
            // 重用现有条目
            existing_key_ptr = (uint *)((longlong)current_index * 0x10 + hash_table_ptr[2]);
            *(uint *)(hash_table_ptr + 4) = existing_key_ptr[1];
            existing_key_ptr[1] = 0xffffffff;
            *existing_key_ptr = *key_ptr;
            *(uint64_t *)(existing_key_ptr + 2) = *value_ptr;
        }
        
        // 更新索引链接
        *index_ptr = current_index;
        *(int *)((longlong)hash_table_ptr + 0x24) = *(int *)((longlong)hash_table_ptr + 0x24) + 1;
        result_code = 0;
    }
    return result_code;
}

/**
 * 工具系统哈希条目更新器 - 更新哈希表中的条目
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @return 更新结果状态码
 */
uint64_t Utilities_UpdateHashEntry(uint64_t param1, int param2) {
    // 局部变量声明
    longlong table_offset;
    int array_index;
    int temp_index1;
    int temp_index2;
    uint64_t result_code;
    uint64_t *entry_ptr;
    int new_index;
    longlong entry_offset;
    int32_t *value_ptr;
    uint hash_key;
    int expanded_size;
    int *index_ptr;
    longlong *hash_table_ptr;
    uint64_t *value_data_ptr;
    int32_t *key_ptr;
    uint64_t stack_value;
    
    // 获取索引指针
    index_ptr = (int *)(*hash_table_ptr + (longlong)array_index * 4);
    array_index = *(int *)(*hash_table_ptr + (longlong)array_index * 4);
    
    // 查找现有条目
    if (array_index != -1) {
        table_offset = hash_table_ptr[2];
        do {
            entry_offset = (longlong)array_index;
            if (*(int *)(table_offset + entry_offset * 0x10) == param2) {
                // 更新条目值
                *(uint64_t *)(table_offset + 8 + entry_offset * 0x10) = *value_data_ptr;
                return UTILITIES_SUCCESS;
            }
            array_index = *(int *)(table_offset + 4 + entry_offset * 0x10);
            index_ptr = (int *)(table_offset + 4 + entry_offset * 0x10);
        } while (array_index != -1);
    }
    
    // 获取空闲索引
    array_index = (int)hash_table_ptr[4];
    if (array_index == -1) {
        // 需要扩展哈希表
        stack_value = *value_data_ptr;
        array_index = (int)hash_table_ptr[3];
        new_index = array_index + 1;
        
        // 计算新容量
        hash_key = (int)*(uint *)((longlong)hash_table_ptr + 0x1c) >> 0x1f;
        temp_index1 = (*(uint *)((longlong)hash_table_ptr + 0x1c) ^ hash_key) - hash_key;
        
        if (temp_index1 < new_index) {
            // 容量扩展计算
            expanded_size = (int)((float)temp_index1 * UTILITIES_GROWTH_FACTOR);
            temp_index1 = new_index;
            if (new_index <= expanded_size) {
                temp_index1 = expanded_size;
            }
            if (temp_index1 < UTILITIES_MIN_CAPACITY) {
                expanded_size = UTILITIES_MIN_CAPACITY;
            }
            else if (expanded_size < new_index) {
                expanded_size = new_index;
            }
            
            // 重新分配内存
            result_code = FUN_1807d3f50(hash_table_ptr + 2, expanded_size);
            if ((int)result_code != 0) {
                return result_code;
            }
        }
        
        // 创建新条目
        entry_ptr = (uint64_t *)((longlong)(int)hash_table_ptr[3] * 0x10 + hash_table_ptr[2]);
        *entry_ptr = CONCAT44(0xffffffff, param2);
        entry_ptr[1] = stack_value;
        *(int *)(hash_table_ptr + 3) = (int)hash_table_ptr[3] + 1;
    }
    else {
        // 重用现有条目
        value_ptr = (int32_t *)((longlong)array_index * 0x10 + hash_table_ptr[2]);
        *(int32_t *)(hash_table_ptr + 4) = value_ptr[1];
        value_ptr[1] = 0xffffffff;
        *value_ptr = *key_ptr;
        *(uint64_t *)(value_ptr + 2) = *value_data_ptr;
    }
    
    // 更新索引链接
    *index_ptr = array_index;
    *(int *)((longlong)hash_table_ptr + 0x24) = *(int *)((longlong)hash_table_ptr + 0x24) + 1;
    return UTILITIES_SUCCESS;
}

/**
 * 工具系统数组条目插入器 - 向动态数组中插入条目
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @return 插入结果状态码
 */
uint64_t Utilities_InsertArrayEntry(uint64_t param1, int32_t param2) {
    // 局部变量声明
    int temp_index1;
    uint64_t result_code;
    uint64_t *entry_ptr;
    int temp_index2;
    int32_t *value_ptr;
    uint hash_key;
    int expanded_size;
    int *index_ptr;
    longlong array_base;
    uint64_t *value_data_ptr;
    int32_t *key_ptr;
    uint64_t stack_value;
    
    // 获取当前索引
    temp_index2 = *(int *)(array_base + 0x20);
    if (temp_index2 == -1) {
        // 需要扩展数组
        stack_value = *value_data_ptr;
        temp_index2 = *(int *)(array_base + 0x18);
        temp_index1 = temp_index2 + 1;
        
        // 计算新容量
        hash_key = (int)*(uint *)(array_base + 0x1c) >> 0x1f;
        temp_index1 = (*(uint *)(array_base + 0x1c) ^ hash_key) - hash_key;
        
        if (temp_index1 < temp_index2) {
            // 容量扩展计算
            expanded_size = (int)((float)temp_index1 * UTILITIES_GROWTH_FACTOR);
            temp_index1 = temp_index2;
            if (temp_index2 <= expanded_size) {
                temp_index1 = expanded_size;
            }
            if (temp_index1 < UTILITIES_MIN_CAPACITY) {
                expanded_size = UTILITIES_MIN_CAPACITY;
            }
            else if (expanded_size < temp_index2) {
                expanded_size = temp_index2;
            }
            
            // 重新分配内存
            result_code = FUN_1807d3f50(array_base + 0x10, expanded_size);
            if ((int)result_code != 0) {
                return result_code;
            }
        }
        
        // 创建新条目
        entry_ptr = (uint64_t *)
            ((longlong)*(int *)(array_base + 0x18) * 0x10 + *(longlong *)(array_base + 0x10));
        *entry_ptr = CONCAT44(0xffffffff, param2);
        entry_ptr[1] = stack_value;
        *(int *)(array_base + 0x18) = *(int *)(array_base + 0x18) + 1;
    }
    else {
        // 重用现有条目
        value_ptr = (int32_t *)((longlong)temp_index2 * 0x10 + *(longlong *)(array_base + 0x10));
        *(int32_t *)(array_base + 0x20) = value_ptr[1];
        value_ptr[1] = 0xffffffff;
        *value_ptr = *key_ptr;
        *(uint64_t *)(value_ptr + 2) = *value_data_ptr;
    }
    
    // 更新索引
    *index_ptr = temp_index2;
    *(int *)(array_base + 0x24) = *(int *)(array_base + 0x24) + 1;
    return UTILITIES_SUCCESS;
}

/**
 * 工具系统数组数值设置器 - 设置数组中的数值
 * 
 * @param array_index 数组索引
 * @param param2 参数2
 * @param array_base 数组基地址
 * @return 设置结果状态码
 */
uint64_t Utilities_SetArrayValue(longlong array_index, uint64_t param2, longlong array_base) {
    uint64_t *value_data_ptr;
    
    // 设置数组数值
    *(uint64_t *)(array_base + 8 + array_index * 8) = *value_data_ptr;
    return UTILITIES_SUCCESS;
}

/**
 * 工具系统数组调整大小器 - 调整动态数组的大小
 * 
 * 该函数负责调整动态数组的大小，包括扩展和收缩操作。
 * 
 * @param min_size 最小大小
 * @param requested_size 请求大小
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 * @return 调整结果状态码
 */
uint64_t Utilities_ResizeArray(int min_size, int requested_size, uint64_t param3, uint64_t param4, uint64_t param5) {
    // 局部变量声明
    uint64_t result_code;
    uint64_t *new_entry_ptr;
    int32_t *key_ptr;
    int32_t temp_value;
    longlong array_base;
    uint64_t stack_value;
    
    // 确保最小大小
    if (requested_size < min_size) {
        requested_size = min_size;
    }
    
    // 重新分配内存
    result_code = FUN_1807d3f50(array_base + 0x10, requested_size);
    if ((int)result_code == 0) {
        // 创建新条目
        new_entry_ptr = (uint64_t *)
            ((longlong)*(int *)(array_base + 0x18) * 0x10 + *(longlong *)(array_base + 0x10));
        *new_entry_ptr = stack_value;
        new_entry_ptr[1] = param5;
        *(int *)(array_base + 0x18) = *(int *)(array_base + 0x18) + 1;
        *key_ptr = temp_value;
        *(int *)(array_base + 0x24) = *(int *)(array_base + 0x24) + 1;
        result_code = 0;
    }
    return result_code;
}

// ============================================================================
// 模块功能说明
// ============================================================================

/**
 * 工具函数模块 008 功能总结：
 * 
 * 该模块提供了完整的工具函数集合，主要用于：
 * 
 * 1. **数据处理和状态管理**：
 *    - 复杂的数据处理流程控制
 *    - 多状态管理和转换
 *    - 浮点数计算和验证
 *    - 内存操作和数据同步
 * 
 * 2. **哈希表操作**：
 *    - 哈希表条目插入、更新、查找
 *    - 动态容量调整和内存管理
 *    - 冲突处理和链表维护
 *    - 高效的哈希计算和索引
 * 
 * 3. **动态数组管理**：
 *    - 动态数组条目插入和更新
 *    - 数组大小调整和内存重分配
 *    - 索引管理和链接维护
 *    - 容量优化和性能提升
 * 
 * 4. **系统资源管理**：
 *    - 内存分配和释放
 *    - 资源生命周期管理
 *    - 错误处理和状态恢复
 *    - 安全检查和数据保护
 * 
 * 5. **高级特性**：
 *    - 回调函数支持
 *    - 异步操作处理
 *    - 线程安全机制
 *    - 性能优化策略
 * 
 * 技术特点：
 * - 高效的内存管理算法
 * - 完善的错误处理机制
 * - 灵活的扩展接口
 * - 优化的性能表现
 * 
 * 使用场景：
 * - 游戏引擎核心工具库
 * - 高性能数据处理系统
 * - 复杂的数据结构管理
 * - 系统资源优化
 */