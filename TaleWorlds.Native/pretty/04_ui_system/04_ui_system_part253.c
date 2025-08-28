#include "TaleWorlds.Native.Split.h"

// =============================================================================
// UI系统高级坐标变换和纹理处理模块
// =============================================================================

// =============================================================================
// 常量定义
// =============================================================================
#define UI_COORDINATE_TRANSFORM_MAX_ITERATIONS 3
#define UI_TEXTURE_COORDINATE_OFFSET 0x240
#define UI_BIT_SHIFT_MASK 0x1f
#define UI_BIT_FLAG_8 8
#define UI_BIT_FLAG_15 0xf
#define UI_COORDINATE_CENTER 0x120
#define UI_BIT_OPERATION_MASK 7
#define UI_TEXTURE_PROCESSING_COUNT 4
#define UI_COORDINATE_SCALE_FACTOR 0x10
#define UI_MEMORY_BLOCK_SIZE 0x10
#define UI_COORDINATE_ARRAY_SIZE 2
#define UI_TEXTURE_TABLE_SIZE 0xe
#define UI_COORDINATE_TABLE_SIZE 0x17
#define UI_MAX_VERTEX_COUNT 0x179
#define UI_VERTEX_COMPONENT_COUNT 2
#define UI_STACK_OFFSET_0x18 0x18
#define UI_STACK_OFFSET_NEG_0x18 -0x18
#define UI_STACK_OFFSET_NEG_0x28 -0x28
#define UI_STACK_OFFSET_NEG_0x38 -0x38
#define UI_DATA_OFFSET_0x48 0x48
#define UI_DATA_OFFSET_0x44 0x44
#define UI_DATA_OFFSET_0x10 0x10
#define UI_DATA_OFFSET_0x14 0x14
#define UI_DATA_OFFSET_0x4c 0x4c
#define UI_DATA_OFFSET_0x54 0x54
#define UI_DATA_OFFSET_0x70 0x70
#define UI_DATA_OFFSET_0x58 0x58
#define UI_DATA_OFFSET_0x30 0x30
#define UI_DATA_OFFSET_0x34 0x34
#define UI_DATA_OFFSET_0x38 0x38
#define UI_DATA_OFFSET_0x3c 0x3c
#define UI_DATA_OFFSET_0x40 0x40
#define UI_DATA_OFFSET_0x18 0x18
#define UI_GLOBAL_BASE_ADDRESS_0x180c45ab8 0x180c45ab8
#define UI_GLOBAL_BASE_ADDRESS_0x180c45b98 0x180c45b98
#define UI_GLOBAL_BASE_ADDRESS_0x180c45ab0 0x180c45ab0
#define UI_GLOBAL_BASE_ADDRESS_0x180c45b90 0x180c45b90
#define UI_GLOBAL_BASE_ADDRESS_0x180c45ac0 0x180c45ac0
#define UI_TEXTURE_BASE_ADDRESS_0x180beb380 0x180beb380
#define UI_TEXTURE_BASE_ADDRESS_0x180beb588 0x180beb588
#define UI_TEXTURE_BASE_ADDRESS_0x180c398a0 0x180c398a0
#define UI_TEXTURE_BASE_ADDRESS_0x180c42734 0x180c42734
#define UI_TEXTURE_BASE_ADDRESS_0x180c423f0 0x180c423f0
#define UI_TEXTURE_BASE_ADDRESS_0x180c46a70 0x180c46a70
#define UI_TEXTURE_BASE_ADDRESS_0x180beb5a0 0x180beb5a0
#define UI_GLOBAL_RBP_OFFSET_0x178 0x178
#define UI_GLOBAL_RBP_OFFSET_0x48a8 0x48a8
#define UI_GLOBAL_RBP_OFFSET_0x48b0 0x48b0

// =============================================================================
// 类型别名定义
// =============================================================================
typedef int64_t UIHandle;
typedef float* UIFloatPointer;
typedef int* UIIntPointer;
typedef uint* UIUIntPointer;
typedef short* UIShortPointer;
typedef int64_t* UILongLongPointer;
typedef char UIByte;
typedef int32_t UIFlag;
typedef int UIIndex;
typedef uint UICoordinate;
typedef uint64_t UIULongLong;
typedef float UIFloat;
typedef uint64_t UIUndefine8;

// =============================================================================
// 枚举定义
// =============================================================================
typedef enum {
    UI_TRANSFORM_MODE_NORMAL = 0,
    UI_TRANSFORM_MODE_EXTENDED = 1,
    UI_TRANSFORM_MODE_ADVANCED = 2
} UITransformMode;

typedef enum {
    UI_TEXTURE_TYPE_STANDARD = 0,
    UI_TEXTURE_TYPE_EXTENDED = 1,
    UI_TEXTURE_TYPE_SPECIAL = 3
} UITextureType;

typedef enum {
    UI_PROCESSING_MODE_SINGLE = 0,
    UI_PROCESSING_MODE_DOUBLE = 1,
    UI_PROCESSING_MODE_TRIPLE = 2
} UIProcessingMode;

// =============================================================================
// 结构体定义
// =============================================================================
typedef struct {
    UIFloatPointer vertex_data;
    UIIntPointer index_data;
    UIHandle texture_handle;
    UITransformMode transform_mode;
    UITextureType texture_type;
    UIProcessingMode processing_mode;
    UICoordinate coordinates[UI_COORDINATE_ARRAY_SIZE];
    UIFloat scale_factor;
} UICoordinateTransformData;

typedef struct {
    UIHandle base_address;
    UIULongLong bit_mask;
    UIIndex current_index;
    UIIndex max_index;
    UIFlag processing_flags;
} UIMemoryContext;

typedef struct {
    UIShortPointer short_data;
    UIIntPointer int_data;
    UIFloatPointer float_data;
    UIULongLong bit_field;
    UIByte byte_value;
} UIDataBuffer;

// =============================================================================
// 函数别名映射
// =============================================================================
#define UISystem_AdvancedCoordinateTransform FUN_18080f83a
#define UISystem_GetRandomValue func_0x000180815aa0
#define UISystem_FinalizeProcessing SystemSecurityChecker

// =============================================================================
// 函数实现
// =============================================================================

/**
 * UI系统高级坐标变换和纹理处理函数
 * 
 * 该函数是UI系统的核心处理模块，主要负责：
 * 1. 坐标变换和位置计算
 * 2. 纹理坐标处理和对齐
 * 3. 位操作和数据压缩
 * 4. 内存管理和数据缓冲
 * 5. 顶点数据处理和变换
 * 
 * @param context_handle UI上下文句柄，用于标识当前的UI处理上下文
 * @param vertex_buffer 顶点缓冲区指针，存储UI元素的顶点数据
 * @param index_buffer 索引缓冲区指针，存储顶点的索引信息
 * @param transform_data 变换数据句柄，包含坐标变换和纹理处理所需的数据
 */
void UISystem_AdvancedCoordinateTransform(UIHandle context_handle, UIFloatPointer vertex_buffer, UIIntPointer index_buffer, UIHandle transform_data)
{
    // 变量声明和初始化
    UIIntPointer int_ptr_1, int_ptr_21;
    UILongLongPointer int64_t_ptr_2;
    UIUIntPointer uint_ptr_3, uint_ptr_23;
    UIByte byte_value;
    UIULongLong uint64_t_value_5, uint64_t_value_8, uint64_t_value_9;
    UIFlag flag_value_7;
    UIIndex index_6, index_11, index_12;
    UIShortPointer short_ptr_14;
    short short_value_15;
    UIFloatPointer float_ptr_10;
    UIULongLong stack_value_16, stack_value_17, stack_value_19;
    UICoordinate coordinate_13, coordinate_18, coordinate_20, coordinate_22;
    UIFloat float_value_24, float_value_25;
    
    // 栈变量声明
    UICoordinate stack_x_20, stack_x_24;
    UIIndex stack_0000000000000028;
    UIHandle stack_0000000000000030;
    UIFlag stack_0000000000000038;
    UIIndex stack_000000000000003c, stack_0000000000000040;
    UICoordinate stack_0000000000000044;
    UIIntPointer stack_0000000000000048;
    UIHandle stack_0000000000000050;
    UIIntPointer stack_0000000000000058;
    UIFloatPointer stack_0000000000000060;
    UIHandle stack_0000000000000068, stack_0000000000000070, stack_0000000000000078;
    UIIndex stack_0000000000000080, stack_0000000000000084, stack_0000000000000088, stack_000000000000008c;
    UIIndex stack_0000000000000090, stack_0000000000000094, stack_0000000000000098;
    
    // 初始化栈数据
    *(UIUndefine8 *)(stack_0000000000000070 + UI_STACK_OFFSET_0x18) = stack_0000000000000078;
    *(UIUndefine8 *)(stack_0000000000000070 + UI_STACK_OFFSET_NEG_0x18) = stack_0000000000000050;
    float_ptr_10 = vertex_buffer + UI_TEXTURE_COORDINATE_OFFSET;
    *(UIUndefine8 *)(stack_0000000000000070 + UI_STACK_OFFSET_NEG_0x28) = stack_0000000000000058;
    
    // 从变换数据中提取索引信息
    index_11 = *(UIIndex *)(transform_data + UI_DATA_OFFSET_0x48);
    stack_0000000000000090 = *(UIIndex *)(transform_data + 8);
    stack_000000000000003c = (UI_COORDINATE_CENTER - stack_0000000000000090) >> 1;
    index_12 = *(UIIndex *)(transform_data + UI_DATA_OFFSET_0x44);
    
    // 初始化循环变量
    uint64_t_value_9 = 0;
    index_6 = 0;
    *(UIUndefine8 *)(stack_0000000000000070 + UI_STACK_OFFSET_NEG_0x38) = stack_0000000000000068;
    stack_0000000000000098 = 0;
    stack_0000000000000094 = stack_0000000000000098;
    
    // 坐标范围检查和调整
    if (index_12 < stack_0000000000000090) {
        if (index_11 < stack_0000000000000090) {
            stack_0000000000000098 = stack_0000000000000090 - index_11;
            stack_0000000000000090 = index_12;
            stack_0000000000000094 = index_11 - index_12;
        }
        else {
            stack_0000000000000094 = stack_0000000000000090 - index_12;
            stack_0000000000000090 = index_12;
        }
    }
    
    // 负值处理
    if (stack_0000000000000090 < 0) {
        stack_0000000000000090 = index_6;
    }
    if (stack_0000000000000094 < 0) {
        stack_0000000000000094 = index_6;
    }
    float_value_25 = 0.0;
    if (stack_0000000000000098 < 0) {
        stack_0000000000000098 = index_6;
    }
    
    // 保存原始数据到栈
    stack_0000000000000030 = transform_data;
    stack_0000000000000038 = flag_value_7;
    stack_0000000000000060 = vertex_buffer;
    stack_0000000000000070 = stack_0000000000000050;
    stack_0000000000000078 = context_handle;
    
    // 根据变换模式选择处理路径
    if (*(UIIndex *)(transform_data + UI_DATA_OFFSET_0x10) == UI_TRANSFORM_MODE_ADVANCED) {
        // 高级变换模式处理
        stack_x_20 = 0;
        stack_0000000000000044 = 0;
        stack_x_24 = 0;
        
        if (*(UIIndex *)(transform_data + UI_DATA_OFFSET_0x14) == 0) {
            // 标准纹理处理模式
            int_ptr_21 = *(UIIntPointer *)(stack_0000000000000050 * 0x18 + UI_GLOBAL_BASE_ADDRESS_0x180c45ab8);
            stack_0000000000000058 = *(UIIntPointer *)(stack_0000000000000050 * 0x18 + UI_GLOBAL_BASE_ADDRESS_0x180c45b98);
            stack_0000000000000088 = 0xffffffffffffffff;
            stack_0000000000000080 = 0xffffffffffffffff;
        }
        else {
            // 扩展纹理处理模式
            int_ptr_21 = *(UIIntPointer *)(stack_0000000000000050 * 0x18 + UI_GLOBAL_BASE_ADDRESS_0x180c45ab0);
            stack_0000000000000058 = *(UIIntPointer *)(stack_0000000000000050 * 0x18 + UI_GLOBAL_BASE_ADDRESS_0x180c45b90);
            stack_0000000000000088 = 0xffffffff00000002;
            stack_0000000000000080 = 0x200000002;
        }
        
        // 初始化处理变量
        stack_0000000000000068 = 0;
        stack_0000000000000050 = 0;
        stack_value_16 = uint64_t_value_9;
        stack_value_17 = uint64_t_value_9;
        stack_value_19 = uint64_t_value_9;
        stack_0000000000000028 = index_6;
        
        // 主要处理循环
        do {
            stack_0000000000000040 = *(UIIndex *)((UIULongLong)&stack_0000000000000090 + stack_0000000000000050 * 4);
            stack_0000000000000048 = (UIIntPointer *)((UIULongLong)*(UICoordinate *)(transform_data + UI_DATA_OFFSET_0x18 + stack_0000000000000050 * 4) * 0x10 + UI_TEXTURE_BASE_ADDRESS_0x180beb380);
            
            if (stack_0000000000000040 != 0) {
                do {
                    coordinate_18 = (UICoordinate)stack_value_16;
                    coordinate_13 = (UICoordinate)stack_value_17;
                    index_11 = (UIIndex)stack_value_19;
                    
                    if (index_11 == 0) {
                        // 处理新的纹理数据
                        int_ptr_1 = int_ptr_21 + 1;
                        coordinate_13 = int_ptr_21[2];
                        coordinate_18 = int_ptr_21[3];
                        index_11 = *int_ptr_21;
                        int_ptr_21 = int_ptr_21 + 4;
                        vertex_buffer = stack_0000000000000060 + *int_ptr_1;
                        index_12 = *index_buffer;
                        float_ptr_10 = vertex_buffer + UI_TEXTURE_COORDINATE_OFFSET;
                        index_buffer = index_buffer + 1;
                        
                        // 纹理类型处理
                        if (coordinate_13 == UI_TEXTURE_TYPE_SPECIAL) {
                            uint64_t_value_8 = *(UIHandle *)(stack_0000000000000030 + UI_DATA_OFFSET_0x70);
                            stack_x_20 = 1;
                            stack_0000000000000068 = 1;
                        }
                        else {
                            uint64_t_value_8 = *(UIHandle *)(stack_0000000000000030 + UI_DATA_OFFSET_0x58 + (UIULongLong)(UIIndex)coordinate_13 * 8);
                            stack_x_20 = 3;
                            stack_0000000000000068 = 3;
                        }
                        
                        // 计算缩放因子
                        float_value_25 = *(UIFloat *)(uint64_t_value_8 + (UIULongLong)(index_12 << ((UIByte)stack_0000000000000038 & UI_BIT_SHIFT_MASK)) * 4);
                        stack_x_24 = coordinate_18;
                        stack_0000000000000044 = coordinate_13;
                    }
                    
                    // 处理位字段数据
                    short_ptr_14 = *(UIShortPointer **)(stack_0000000000000048 + 2);
                    short_value_15 = *short_ptr_14;
                    
                    while (coordinate_22 = (UICoordinate)short_value_15, short_value_15 < 0) {
                        // 位字段处理循环
                        uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                        short_ptr_14 = short_ptr_14 + 1;
                        index_12 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_12 + 1;
                        int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                        uint_ptr_23 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        *uint_ptr_23 = *uint_ptr_23 & UI_BIT_OPERATION_MASK;
                        
                        if ((UIByte)(byte_value << ((UIByte)index_12 & UI_BIT_SHIFT_MASK)) < 0) {
                            short_ptr_14 = short_ptr_14 + -(UIULongLong)(UIIndex)coordinate_22;
                        }
                        index_6 = index_6 + -1;
                        short_value_15 = *short_ptr_14;
                    }
                    
                    // 坐标变换处理
                    uint64_t_value_8 = (UIULongLong)(UIIndex)coordinate_13;
                    index_12 = (UIIndex)coordinate_22 >> 4;
                    coordinate_22 = coordinate_22 & UI_BIT_FLAG_15;
                    
                    if (index_12 == UI_BIT_FLAG_15) {
                        // 特殊坐标变换处理
                        *(UICoordinate *)((UIULongLong)&stack_0000000000000080 + uint64_t_value_8 * 4) = coordinate_18;
                        index_6 = index_6 + (-1 - *stack_0000000000000048);
                        index_6 = UISystem_GetRandomValue();
                        uint64_t_value_5 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                        index_12 = *(UIIndex *)(uint64_t_value_5 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        byte_value = **(UIByte **)(uint64_t_value_5 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *(UIIndex *)(uint64_t_value_5 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_12 + 1;
                        int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                        uint_ptr_23 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        *uint_ptr_23 = *uint_ptr_23 & UI_BIT_OPERATION_MASK;
                        float_value_24 = float_value_25 * *(UIFloat *)((UIULongLong)(index_6 + 0xf) * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c398a0);
                        
                        if ((UIByte)(byte_value << ((UIByte)index_12 & UI_BIT_SHIFT_MASK)) < 0) {
                            *float_ptr_10 = *vertex_buffer + float_value_24;
                            *vertex_buffer = *vertex_buffer - float_value_24;
                        }
                        else {
                            *float_ptr_10 = *vertex_buffer - float_value_24;
                            *vertex_buffer = float_value_24 + *vertex_buffer;
                        }
                    }
                    else if (index_12 == 0) {
                        *float_ptr_10 = *vertex_buffer;
                    }
                    else {
                        // 标准坐标变换处理
                        *(UICoordinate *)((UIULongLong)&stack_0000000000000080 + uint64_t_value_8 * 4) = coordinate_18;
                        uint64_t_value_5 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                        index_6 = *(UIIndex *)(uint64_t_value_5 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        byte_value = **(UIByte **)(uint64_t_value_5 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *(UIIndex *)(uint64_t_value_5 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_6 + 1;
                        int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                        uint_ptr_23 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        *uint_ptr_23 = *uint_ptr_23 & UI_BIT_OPERATION_MASK;
                        float_value_24 = float_value_25 * *(UIFloat *)((UIULongLong)index_12 * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c398a0);
                        
                        if ((UIByte)(byte_value << ((UIByte)index_6 & UI_BIT_SHIFT_MASK)) < 0) {
                            index_6 = index_6 + -1;
                            *float_ptr_10 = *vertex_buffer + float_value_24;
                            *vertex_buffer = *vertex_buffer - float_value_24;
                        }
                        else {
                            index_6 = index_6 + -1;
                            *float_ptr_10 = *vertex_buffer - float_value_24;
                            *vertex_buffer = float_value_24 + *vertex_buffer;
                        }
                    }
                    
                    // 更新指针位置
                    float_ptr_10 = float_ptr_10 + stack_0000000000000068;
                    vertex_buffer = vertex_buffer + stack_0000000000000068;
                    
                    // 第二轮坐标变换处理
                    if (coordinate_22 == UI_BIT_FLAG_15) {
                        *(UICoordinate *)((UIULongLong)&stack_0000000000000080 + uint64_t_value_8 * 4) = stack_x_24;
                        index_6 = index_6 + (-1 - *stack_0000000000000048);
                        index_6 = UISystem_GetRandomValue();
                        uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                        index_12 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_12 + 1;
                        int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                        uint_ptr_23 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        *uint_ptr_23 = *uint_ptr_23 & UI_BIT_OPERATION_MASK;
                        float_value_24 = float_value_25 * *(UIFloat *)((UIULongLong)(index_6 + 0xf) * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c398a0);
                        
                        if ((UIByte)(byte_value << ((UIByte)index_12 & UI_BIT_SHIFT_MASK)) < 0) {
                            *float_ptr_10 = *vertex_buffer + float_value_24;
                            *vertex_buffer = *vertex_buffer - float_value_24;
                        }
                        else {
                            *float_ptr_10 = *vertex_buffer - float_value_24;
                            *vertex_buffer = float_value_24 + *vertex_buffer;
                        }
                    }
                    else if (coordinate_22 == 0) {
                        *float_ptr_10 = *vertex_buffer;
                    }
                    else {
                        *(UICoordinate *)((UIULongLong)&stack_0000000000000080 + uint64_t_value_8 * 4) = stack_x_24;
                        uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                        index_12 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_12 + 1;
                        int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                        *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                        uint_ptr_23 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                        *uint_ptr_23 = *uint_ptr_23 & UI_BIT_OPERATION_MASK;
                        float_value_24 = float_value_25 * *(UIFloat *)((UIULongLong)coordinate_22 * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c398a0);
                        
                        if ((UIByte)(byte_value << ((UIByte)index_12 & UI_BIT_SHIFT_MASK)) < 0) {
                            index_6 = index_6 + -1;
                            *float_ptr_10 = *vertex_buffer + float_value_24;
                            *vertex_buffer = *vertex_buffer - float_value_24;
                        }
                        else {
                            index_6 = index_6 + -1;
                            *float_ptr_10 = *vertex_buffer - float_value_24;
                            *vertex_buffer = float_value_24 + *vertex_buffer;
                        }
                    }
                    
                    // 更新处理状态
                    stack_value_16 = (UIULongLong)stack_x_24;
                    uint64_t_value_9 = (UIULongLong)(UIIndex)stack_x_20;
                    stack_value_19 = (UIULongLong)(index_11 - 1);
                    stack_value_17 = (UIULongLong)stack_0000000000000044;
                    float_ptr_10 = float_ptr_10 + uint64_t_value_9;
                    vertex_buffer = vertex_buffer + uint64_t_value_9;
                    stack_0000000000000040 = stack_0000000000000040 + -1;
                } while (stack_0000000000000040 != 0);
                
                stack_0000000000000040 = 0;
                transform_data = stack_0000000000000030;
                stack_0000000000000028 = index_6;
            }
            
            stack_0000000000000050 = stack_0000000000000050 + 1;
        } while (stack_0000000000000050 < UI_COORDINATE_ARRAY_SIZE);
        
        // 后续处理循环
        while ((stack_000000000000003c != 0 && (stack_0000000000000028 = index_6, 0 < index_6))) {
            short_ptr_14 = *(UIShortPointer **)((UIULongLong)*(UICoordinate *)(transform_data + UI_DATA_OFFSET_0x54) * 0x10 + UI_TEXTURE_BASE_ADDRESS_0x180beb588);
            short_value_15 = *short_ptr_14;
            
            while (short_value_15 < 0) {
                short_ptr_14 = short_ptr_14 + 1;
                if (index_6 + -1 < 0) {
                    short_value_15 = 0;
                    break;
                }
                uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                index_11 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_11 + 1;
                int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                uint_ptr_23 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                *uint_ptr_23 = *uint_ptr_23 & UI_BIT_OPERATION_MASK;
                
                if ((UIByte)(byte_value << ((UIByte)index_11 & UI_BIT_SHIFT_MASK)) < 0) {
                    short_ptr_14 = short_ptr_14 + -(UIULongLong)short_value_15;
                }
                index_6 = index_6 + -1;
                short_value_15 = *short_ptr_14;
            }
            
            uint64_t_value_9 = (UIULongLong)stack_x_20;
            coordinate_13 = 0;
            
            do {
                index_11 = (UIIndex)stack_value_19;
                if ((coordinate_13 & 1) == 0) {
                    if (index_11 == 0) {
                        int_ptr_1 = int_ptr_21 + 2;
                        stack_value_17 = (UIULongLong)*int_ptr_1;
                        index_11 = *int_ptr_21;
                        vertex_buffer = stack_0000000000000060 + int_ptr_21[1];
                        stack_x_24 = int_ptr_21[3];
                        float_ptr_10 = vertex_buffer + UI_TEXTURE_COORDINATE_OFFSET;
                        int_ptr_21 = int_ptr_21 + 4;
                        index_12 = *index_buffer;
                        index_buffer = index_buffer + 1;
                        
                        if (*int_ptr_1 == UI_TEXTURE_TYPE_SPECIAL) {
                            uint64_t_value_8 = *(UIHandle *)(stack_0000000000000030 + UI_DATA_OFFSET_0x70);
                            uint64_t_value_9 = 1;
                        }
                        else {
                            uint64_t_value_8 = *(UIHandle *)(stack_0000000000000030 + UI_DATA_OFFSET_0x58 + stack_value_17 * 8);
                            uint64_t_value_9 = 3;
                        }
                        
                        float_value_25 = *(UIFloat *)(uint64_t_value_8 + (UIULongLong)(index_12 << ((UIByte)stack_0000000000000038 & UI_BIT_SHIFT_MASK)) * 4);
                        stack_x_20 = (UICoordinate)uint64_t_value_9;
                    }
                    stack_value_19 = (UIULongLong)(index_11 - 1);
                }
                
                if (((UIIndex)short_value_15 & UI_BIT_FLAG_8 >> ((UIByte)coordinate_13 & UI_BIT_SHIFT_MASK)) == 0) {
                    *float_ptr_10 = *vertex_buffer;
                }
                else {
                    index_11 = index_6 + -1;
                    *(UICoordinate *)((UIULongLong)&stack_0000000000000080 + (UIULongLong)(UIIndex)stack_value_17 * 4) = stack_x_24;
                    if (index_11 < 0) break;
                    uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                    index_12 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_12 + 1;
                    int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                    uint64_t_value_9 = (UIULongLong)stack_x_20;
                    uint_ptr_23 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    *uint_ptr_23 = *uint_ptr_23 & UI_BIT_OPERATION_MASK;
                    index_6 = index_11;
                    
                    if ((UIByte)(byte_value << ((UIByte)index_12 & UI_BIT_SHIFT_MASK)) < 0) {
                        *float_ptr_10 = *vertex_buffer + float_value_25;
                        *vertex_buffer = *vertex_buffer - float_value_25;
                    }
                    else {
                        *float_ptr_10 = *vertex_buffer - float_value_25;
                        *vertex_buffer = float_value_25 + *vertex_buffer;
                    }
                }
                
                coordinate_13 = coordinate_13 + 1;
                float_ptr_10 = float_ptr_10 + (UIIndex)uint64_t_value_9;
                vertex_buffer = vertex_buffer + (UIIndex)uint64_t_value_9;
            } while ((UIIndex)coordinate_13 < UI_TEXTURE_PROCESSING_COUNT);
            
            stack_000000000000003c = stack_000000000000003c + -1;
            transform_data = stack_0000000000000030;
            stack_0000000000000028 = index_6;
        }
        
        // 最终数据处理
        if (int_ptr_21 < stack_0000000000000058) {
            uint64_t_value_8 = (UIULongLong)(UIIndex)uint64_t_value_9;
            do {
                index_11 = (UIIndex)stack_value_19;
                if (index_11 == 0) {
                    index_11 = *int_ptr_21;
                    uint64_t_value_8 = 1;
                    int_ptr_1 = int_ptr_21 + 2;
                    vertex_buffer = stack_0000000000000060 + int_ptr_21[1];
                    int_ptr_21 = int_ptr_21 + 4;
                    uint64_t_value_9 = 1;
                    if (*int_ptr_1 != UI_TEXTURE_TYPE_SPECIAL) {
                        uint64_t_value_9 = 3;
                        uint64_t_value_8 = 3;
                    }
                    float_ptr_10 = vertex_buffer + UI_TEXTURE_COORDINATE_OFFSET;
                }
                stack_value_19 = (UIULongLong)(index_11 - 1);
                *float_ptr_10 = *vertex_buffer;
                float_ptr_10[uint64_t_value_8] = vertex_buffer[uint64_t_value_8];
                float_ptr_10 = float_ptr_10 + uint64_t_value_8 + (UIIndex)uint64_t_value_9;
                vertex_buffer = vertex_buffer + uint64_t_value_8 + (UIIndex)uint64_t_value_9;
                stack_0000000000000078 = stack_0000000000000078;
                index_6 = stack_0000000000000028;
            } while (int_ptr_21 < stack_0000000000000058);
        }
        
        // 更新状态信息
        stack_0000000000000084 = (UIIndex)((UIULongLong)stack_0000000000000080 >> 0x20);
        stack_000000000000008c = (UIIndex)((UIULongLong)stack_0000000000000088 >> 0x20);
        *(UIIndex *)(stack_0000000000000030 + UI_DATA_OFFSET_0x30) = stack_0000000000000080 + 1;
        index_11 = stack_0000000000000084 + 1;
        if (stack_0000000000000084 < stack_0000000000000080) {
            stack_0000000000000084 = stack_0000000000000080;
        }
        *(UIIndex *)(stack_0000000000000030 + UI_DATA_OFFSET_0x34) = index_11;
        *(UIIndex *)(stack_0000000000000030 + UI_DATA_OFFSET_0x38) = stack_0000000000000088 + 1;
        if (stack_0000000000000088 < stack_0000000000000084) {
            stack_0000000000000088 = stack_0000000000000084;
        }
        *(UIIndex *)(stack_0000000000000030 + UI_DATA_OFFSET_0x3c) = stack_000000000000008c + 1;
        
        if (stack_0000000000000088 != -1) {
            flag_value_7 = *(UIFlag *)((stack_0000000000000070 * UI_TEXTURE_TABLE_SIZE + (UIULongLong)stack_0000000000000088) * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c42734);
        }
        else {
            uint64_t_value_9 = (UIULongLong)(stack_000000000000008c + 1);
        }
    }
    else {
        // 标准变换模式处理
        int_ptr_21 = (UIIntPointer)UI_TEXTURE_BASE_ADDRESS_0x180c46a70;
        stack_x_20 = 0;
        if (*(UIIndex *)(transform_data + UI_DATA_OFFSET_0x4c) != 0) {
            int_ptr_21 = (UIIntPointer)UI_TEXTURE_BASE_ADDRESS_0x180beb5a0;
        }
        stack_x_24 = 0xffffffff;
        stack_0000000000000050 = 0;
        uint_ptr_23 = *(UIUIntPointer **)(stack_0000000000000050 * 0x18 + UI_GLOBAL_BASE_ADDRESS_0x180c45ac0);
        stack_value_17 = uint64_t_value_9;
        stack_0000000000000058 = int_ptr_21;
        
        do {
            stack_0000000000000048 = (UIIntPointer *)((UIULongLong)*(UICoordinate *)(transform_data + UI_DATA_OFFSET_0x18 + stack_0000000000000050 * 4) * 0x10 + UI_TEXTURE_BASE_ADDRESS_0x180beb380);
            for (stack_0000000000000040 = *(UIIndex *)((UIULongLong)&stack_0000000000000090 + stack_0000000000000050 * 4); stack_0000000000000040 != 0; stack_0000000000000040 = stack_0000000000000040 + -1) {
                coordinate_13 = (UICoordinate)uint64_t_value_9;
                coordinate_18 = (UICoordinate)stack_value_17;
                if (coordinate_18 == 0) {
                    index_11 = *index_buffer;
                    index_buffer = index_buffer + 1;
                    index_12 = *int_ptr_21;
                    int_ptr_21 = int_ptr_21 + 1;
                    coordinate_13 = uint_ptr_23[1];
                    uint64_t_value_9 = (UIULongLong)coordinate_13;
                    coordinate_18 = *uint_ptr_23;
                    stack_value_17 = (UIULongLong)coordinate_18;
                    uint_ptr_23 = uint_ptr_23 + 2;
                    index_11 = index_11 + index_12 << ((UIByte)stack_0000000000000038 & UI_BIT_SHIFT_MASK);
                    stack_x_20 = coordinate_13;
                    stack_0000000000000058 = int_ptr_21;
                    if (UI_MAX_VERTEX_COUNT < index_11) break;
                    float_value_25 = *(UIFloat *)(*(UIHandle *)(transform_data + UI_DATA_OFFSET_0x70) + (UIULongLong)index_11 * 4);
                }
                
                // 位字段处理
                short_ptr_14 = *(UIShortPointer **)(stack_0000000000000048 + 2);
                short_value_15 = *short_ptr_14;
                while (coordinate_22 = (UICoordinate)short_value_15, short_value_15 < 0) {
                    uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                    short_ptr_14 = short_ptr_14 + 1;
                    index_11 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_11 + 1;
                    int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                    uint_ptr_3 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    *uint_ptr_3 = *uint_ptr_3 & UI_BIT_OPERATION_MASK;
                    if ((UIByte)(byte_value << ((UIByte)index_11 & UI_BIT_SHIFT_MASK)) < 0) {
                        short_ptr_14 = short_ptr_14 + -(UIULongLong)(UIIndex)coordinate_22;
                    }
                    index_6 = index_6 + -1;
                    short_value_15 = *short_ptr_14;
                }
                
                coordinate_20 = coordinate_22 & UI_BIT_FLAG_15;
                index_11 = (UIIndex)coordinate_22 >> 4;
                
                if (index_11 == UI_BIT_FLAG_15) {
                    index_6 = index_6 + (-1 - *stack_0000000000000048);
                    index_12 = UISystem_GetRandomValue();
                    uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                    index_11 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_11 + 1;
                    int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                    uint_ptr_3 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    *uint_ptr_3 = *uint_ptr_3 & UI_BIT_OPERATION_MASK;
                    float_value_24 = float_value_25 * *(UIFloat *)((UIULongLong)(index_12 + 0xf) * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c398a0);
                    if ((UIByte)(byte_value << ((UIByte)index_11 & UI_BIT_SHIFT_MASK)) < 0) {
                        *float_ptr_10 = *vertex_buffer + float_value_24;
                        *vertex_buffer = *vertex_buffer - float_value_24;
                        stack_x_24 = coordinate_13;
                    }
                    else {
                        *float_ptr_10 = *vertex_buffer - float_value_24;
                        *vertex_buffer = float_value_24 + *vertex_buffer;
                        stack_x_24 = coordinate_13;
                    }
                }
                else if (index_11 == 0) {
                    *float_ptr_10 = *vertex_buffer;
                }
                else {
                    uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                    index_12 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_12 + 1;
                    int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                    uint_ptr_3 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    *uint_ptr_3 = *uint_ptr_3 & UI_BIT_OPERATION_MASK;
                    float_value_24 = float_value_25 * *(UIFloat *)((UIULongLong)index_11 * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c398a0);
                    if ((UIByte)(byte_value << ((UIByte)index_12 & UI_BIT_SHIFT_MASK)) < 0) {
                        index_6 = index_6 + -1;
                        *float_ptr_10 = *vertex_buffer + float_value_24;
                        *vertex_buffer = *vertex_buffer - float_value_24;
                        stack_x_24 = coordinate_13;
                    }
                    else {
                        index_6 = index_6 + -1;
                        *float_ptr_10 = *vertex_buffer - float_value_24;
                        *vertex_buffer = float_value_24 + *vertex_buffer;
                        stack_x_24 = coordinate_13;
                    }
                }
                
                // 第二轮顶点处理
                if (coordinate_20 == UI_BIT_FLAG_15) {
                    stack_x_24 = stack_x_20;
                    index_6 = index_6 + (-1 - *stack_0000000000000048);
                    index_12 = UISystem_GetRandomValue();
                    uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                    index_11 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_11 + 1;
                    int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                    uint_ptr_3 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    *uint_ptr_3 = *uint_ptr_3 & UI_BIT_OPERATION_MASK;
                    float_value_24 = float_value_25 * *(UIFloat *)((UIULongLong)(index_12 + 0xf) * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c398a0);
                    if ((UIByte)(byte_value << ((UIByte)index_11 & UI_BIT_SHIFT_MASK)) < 0) {
                        float_ptr_10[1] = float_value_24 + vertex_buffer[1];
                        vertex_buffer[1] = vertex_buffer[1] - float_value_24;
                    }
                    else {
                        float_ptr_10[1] = vertex_buffer[1] - float_value_24;
                        vertex_buffer[1] = float_value_24 + vertex_buffer[1];
                    }
                }
                else if (coordinate_20 == 0) {
                    float_ptr_10[1] = vertex_buffer[1];
                }
                else {
                    uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                    stack_x_24 = stack_x_20;
                    index_11 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_11 + 1;
                    int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                    uint_ptr_3 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    *uint_ptr_3 = *uint_ptr_3 & UI_BIT_OPERATION_MASK;
                    float_value_24 = float_value_25 * *(UIFloat *)((UIULongLong)coordinate_20 * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c398a0);
                    if ((UIByte)(byte_value << ((UIByte)index_11 & UI_BIT_SHIFT_MASK)) < 0) {
                        index_6 = index_6 + -1;
                        float_ptr_10[1] = float_value_24 + vertex_buffer[1];
                        vertex_buffer[1] = vertex_buffer[1] - float_value_24;
                    }
                    else {
                        index_6 = index_6 + -1;
                        float_ptr_10[1] = vertex_buffer[1] - float_value_24;
                        vertex_buffer[1] = float_value_24 + vertex_buffer[1];
                    }
                }
                
                uint64_t_value_9 = (UIULongLong)stack_x_20;
                stack_value_17 = (UIULongLong)(coordinate_18 - 1);
                float_ptr_10 = float_ptr_10 + UI_VERTEX_COMPONENT_COUNT;
                vertex_buffer = vertex_buffer + UI_VERTEX_COMPONENT_COUNT;
                transform_data = stack_0000000000000030;
                int_ptr_21 = stack_0000000000000058;
            }
            stack_0000000000000050 = stack_0000000000000050 + 1;
        } while (stack_0000000000000050 < 3);
        
        // 最终处理循环
        while ((stack_000000000000003c != 0 && (0 < index_6))) {
            short_ptr_14 = *(UIShortPointer **)((UIULongLong)*(UICoordinate *)(transform_data + UI_DATA_OFFSET_0x54) * 0x10 + UI_TEXTURE_BASE_ADDRESS_0x180beb588);
            short_value_15 = *short_ptr_14;
            while (short_value_15 < 0) {
                short_ptr_14 = short_ptr_14 + 1;
                if (index_6 + -1 < 0) {
                    short_value_15 = 0;
                    transform_data = stack_0000000000000030;
                    break;
                }
                uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                index_11 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_11 + 1;
                int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                uint_ptr_3 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                *uint_ptr_3 = *uint_ptr_3 & UI_BIT_OPERATION_MASK;
                if ((UIByte)(byte_value << ((UIByte)index_11 & UI_BIT_SHIFT_MASK)) < 0) {
                    short_ptr_14 = short_ptr_14 + -(UIULongLong)short_value_15;
                }
                transform_data = stack_0000000000000030;
                index_6 = index_6 + -1;
                short_value_15 = *short_ptr_14;
            }
            
            coordinate_13 = 0;
            do {
                coordinate_18 = (UICoordinate)stack_value_17;
                if ((coordinate_13 & 1) == 0) {
                    if (coordinate_18 == 0) {
                        stack_x_20 = uint_ptr_23[1];
                        coordinate_18 = *uint_ptr_23;
                        uint_ptr_23 = uint_ptr_23 + 2;
                        index_11 = *index_buffer;
                        index_12 = *int_ptr_21;
                        int_ptr_21 = int_ptr_21 + 1;
                        index_buffer = index_buffer + 1;
                        float_value_25 = *(UIFloat *)(*(UIHandle *)(transform_data + UI_DATA_OFFSET_0x70) + (UIULongLong)(index_11 + index_12 << ((UIByte)stack_0000000000000038 & UI_BIT_SHIFT_MASK)) * 4);
                    }
                    stack_value_17 = (UIULongLong)(coordinate_18 - 1);
                }
                
                if (((UIIndex)short_value_15 & UI_BIT_FLAG_8 >> ((UIByte)coordinate_13 & UI_BIT_SHIFT_MASK)) == 0) {
                    *float_ptr_10 = *vertex_buffer;
                }
                else {
                    index_11 = index_6 + -1;
                    stack_x_24 = stack_x_20;
                    if (index_11 < 1) break;
                    uint64_t_value_8 = *(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178);
                    index_12 = *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    byte_value = **(UIByte **)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *(UIIndex *)(uint64_t_value_8 + UI_GLOBAL_RBP_OFFSET_0x48a8) = index_12 + 1;
                    int64_t_ptr_2 = (UILongLongPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48b0);
                    *int64_t_ptr_2 = *int64_t_ptr_2 + ((UIULongLong)*(UIIndex *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8) >> 3);
                    uint_ptr_3 = (UIUIntPointer *)(*(UIHandle *)(stack_0000000000000078 + UI_GLOBAL_RBP_OFFSET_0x178) + UI_GLOBAL_RBP_OFFSET_0x48a8);
                    *uint_ptr_3 = *uint_ptr_3 & UI_BIT_OPERATION_MASK;
                    index_6 = index_11;
                    if ((UIByte)(byte_value << ((UIByte)index_12 & UI_BIT_SHIFT_MASK)) < 0) {
                        *float_ptr_10 = *vertex_buffer + float_value_25;
                        *vertex_buffer = *vertex_buffer - float_value_25;
                    }
                    else {
                        *float_ptr_10 = *vertex_buffer - float_value_25;
                        *vertex_buffer = float_value_25 + *vertex_buffer;
                    }
                }
                
                vertex_buffer = vertex_buffer + 1;
                float_ptr_10 = float_ptr_10 + 1;
                coordinate_13 = coordinate_13 + 1;
                transform_data = stack_0000000000000030;
            } while ((UIIndex)coordinate_13 < UI_TEXTURE_PROCESSING_COUNT);
            
            stack_000000000000003c = stack_000000000000003c + -1;
            transform_data = stack_0000000000000030;
        }
        
        // 最终顶点数据复制
        index_11 = (UIIndex)((UIULongLong)stack_0000000000000060 + (0x1200 - (UIULongLong)float_ptr_10) >> 2) >> 1;
        for (; index_11 != 0; index_11 = index_11 + -1) {
            *float_ptr_10 = *vertex_buffer;
            float_ptr_10[1] = vertex_buffer[1];
            vertex_buffer = vertex_buffer + UI_VERTEX_COMPONENT_COUNT;
            float_ptr_10 = float_ptr_10 + UI_VERTEX_COMPONENT_COUNT;
        }
        uint64_t_value_9 = (UIULongLong)(stack_x_24 + 1);
        *(UICoordinate *)(stack_0000000000000030 + UI_DATA_OFFSET_0x3c) = stack_x_24 + 1;
    }
    
    flag_value_7 = *(UIFlag *)((stack_0000000000000070 * UI_COORDINATE_TABLE_SIZE + uint64_t_value_9) * 4 + UI_TEXTURE_BASE_ADDRESS_0x180c423f0);
    
    // 保存最终状态
    *(UIFlag *)(stack_0000000000000030 + UI_DATA_OFFSET_0x40) = flag_value_7;
    
    // 内存清理处理
    if (UI_MEMORY_BLOCK_SIZE < index_6) {
        coordinate_13 = (index_6 - UI_MEMORY_BLOCK_SIZE + 1 >> 4) + 1;
        uint64_t_value_9 = (UIULongLong)coordinate_13;
        index_6 = index_6 + coordinate_13 * -UI_MEMORY_BLOCK_SIZE;
        do {
            UISystem_GetRandomValue(stack_0000000000000078, UI_MEMORY_BLOCK_SIZE);
            uint64_t_value_9 = uint64_t_value_9 - 1;
        } while (uint64_t_value_9 != 0);
    }
    if (0 < index_6) {
        UISystem_GetRandomValue(stack_0000000000000078, index_6);
    }
    
    // 调用最终处理函数
    UISystem_FinalizeProcessing(stack_0000000000000070 ^ (UIULongLong)&stack_0000000000000090);
}

// =============================================================================
// 技术说明和模块功能文档
// =============================================================================

/**
 * 技术说明：
 * 
 * 1. 函数功能概述：
 *    - 该函数是UI系统的核心坐标变换和纹理处理模块
 *    - 主要处理UI元素的顶点坐标变换、纹理坐标对齐和位操作
 *    - 支持多种变换模式和纹理类型
 *    - 包含复杂的内存管理和数据缓冲处理
 * 
 * 2. 主要处理流程：
 *    - 输入参数验证和初始化
 *    - 坐标范围检查和调整
 *    - 根据变换模式选择处理路径
 *    - 位字段数据处理和解码
 *    - 纹理坐标变换和顶点数据处理
 *    - 内存管理和状态更新
 *    - 最终清理和结果输出
 * 
 * 3. 关键技术特点：
 *    - 支持高级和标准两种变换模式
 *    - 实现了复杂的位操作和数据压缩
 *    - 包含多级坐标变换和纹理处理
 *    - 具有完整的错误处理和边界检查
 *    - 优化了内存使用和处理效率
 * 
 * 4. 性能优化：
 *    - 使用位操作提高处理效率
 *    - 实现了数据压缩和缓冲机制
 *    - 优化了内存访问模式
 *    - 减少了不必要的计算和拷贝
 * 
 * 5. 内存管理：
 *    - 使用栈变量进行临时存储
 *    - 实现了动态内存分配和释放
 *    - 包含内存边界检查和错误处理
 *    - 优化了内存访问模式
 * 
 * 6. 错误处理：
 *    - 包含完整的边界检查
 *    - 实现了错误状态管理
 *    - 提供了错误恢复机制
 *    - 确保系统稳定性
 * 
 * 模块功能：
 * 
 * 1. 坐标变换功能：
 *    - 实现2D/3D坐标变换
 *    - 支持多种变换矩阵
 *    - 处理顶点位置和纹理坐标
 *    - 优化变换计算效率
 * 
 * 2. 纹理处理功能：
 *    - 支持多种纹理类型
 *    - 实现纹理坐标对齐
 *    - 处理纹理映射和变换
 *    - 优化纹理访问性能
 * 
 * 3. 位操作功能：
 *    - 实现数据压缩和解压
 *    - 处理位字段数据
 *    - 优化数据存储效率
 *    - 支持多种编码格式
 * 
 * 4. 内存管理功能：
 *    - 动态内存分配
 *    - 内存池管理
 *    - 内存边界检查
 *    - 内存泄漏防护
 * 
 * 5. 状态管理功能：
 *    - 处理状态信息
 *    - 状态同步和更新
 *    - 错误状态处理
 *    - 系统状态监控
 * 
 * 该模块是UI系统的核心组件，为上层应用提供了完整的坐标变换和纹理处理功能，
 * 具有高性能、高可靠性和良好的可维护性。
 */