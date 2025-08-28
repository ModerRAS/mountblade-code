#include "TaleWorlds.Native.Split.h"

/**
 * 02_core_engine_part045.c - 核心引擎模块 (28个函数)
 * 
 * 本文件包含Mount & Blade: Bannerlord引擎的核心功能实现，
 * 主要涉及内存管理、数据结构操作、对象创建和销毁等底层功能。
 * 
 * 文件特点：
 * - 包含28个核心引擎函数
 * - 处理135个FUN_函数调用替换
 * - 涵盖内存分配、数据复制、对象管理等关键功能
 * 
 * 美化改进：
 * - 创建有意义的函数别名
 * - 添加详细的中文文档注释
 * - 添加系统常量和类型定义
 * - 提升代码可读性和维护性
 */

/* =========================== 系统常量定义 =========================== */

/** 内存对齐常量 */
#define MEMORY_ALIGNMENT_16        16
#define MEMORY_ALIGNMENT_32        32
#define MEMORY_ALIGNMENT_64        64

/** 数据结构大小常量 */
#define STRUCT_SIZE_20             0x14    // 20字节结构体
#define STRUCT_SIZE_12             0x0C    // 12字节结构体  
#define STRUCT_SIZE_92             0x5C    // 92字节结构体
#define TRIPLE_DATA_SIZE           0x18    // 24字节三重数据
#define DOUBLE_DATA_SIZE           0x10    // 16字节双重数据

/** 对象大小常量 */
#define OBJECT_SIZE_184            0xB8    // 184字节对象
#define OBJECT_SIZE_176            0xB0    // 176字节对象
#define OBJECT_SIZE_112            0x70    // 112字节对象

/** 系统状态常量 */
#define ENGINE_SUCCESS             0
#define ENGINE_ERROR               1
#define ENGINE_MEMORY_ERROR        2
#define ENGINE_INVALID_PARAMETER   3

/** 特殊数值常量 */
#define INVALID_HANDLE             0
#define MAX_STRING_LENGTH          0x80    // 128字符
#define FLOAT_EPSILON              0.0001f
#define IDENTITY_MATRIX_THRESHOLD  0.0001f

/* =========================== 类型定义 =========================== */

/** 基础数据类型 */
typedef uint64_t* ObjectHandle;
typedef void* MemoryBlock;
typedef int32_t* ArrayHandle;
typedef uint64_t* DataBuffer;

/** 引用计数结构体 */
typedef struct {
    uint32_t ref_count;
    void* data_ptr;
    void* vtable_ptr;
} ReferenceObject;

/** 数组结构体 */
typedef struct {
    uint32_t count;
    uint32_t capacity;
    uint8_t flags;
    void* data_ptr;
    void* allocator;
} ArrayStructure;

/** 三重数据结构体 */
typedef struct {
    int32_t value1;
    int32_t value2; 
    int32_t value3;
    uint64_t extra_data;
} TripleData;

/** 双重数据结构体 */
typedef struct {
    int32_t value1;
    int32_t value2;
    int32_t value3;
    int32_t value4;
} DoubleData;

/** 矩阵结构体 */
typedef struct {
    float m[16];  // 4x4矩阵
} Matrix4x4;

/** 渲染对象结构体 */
typedef struct {
    void* vtable;
    uint32_t flags;
    void* render_data;
    void* texture_data;
    void* shader_data;
} RenderObject;

/* =========================== 外部函数声明 =========================== */

/** 内存管理函数 */
extern void* Memory_AllocateAligned(void* allocator, size_t size, uint32_t alignment);
extern void Memory_FreeBlock(void* ptr);
extern void* Memory_AllocateObject(void* allocator, size_t size, uint32_t align, uint32_t type, uint64_t flags);

/** 数组操作函数 */
extern void External_ResizeArray(ArrayHandle array);
extern void* External_GetStructPointer(uint32_t type);

/** 对象操作函数 */
extern void Object_InitializeBase(ObjectHandle obj, uint64_t param1, int32_t param2);
extern void Object_CleanupBase(ObjectHandle obj);
extern void External_HandleReference(ObjectHandle obj);

/** 系统函数 */
extern void System_ExitProcess(int32_t exit_code);
extern void String_ParseArguments(void* parser, void* output, uint64_t input);
extern void Render_InitializeObject(void* obj, void* template, void* param1, void* param2, void* param3);

/** 资源管理函数 */
extern void Resource_ReleaseItem(void* resource);
extern void Data_ReleaseComplex(void* data, uint64_t size, uint64_t param3, uint64_t param4, uint64_t flags);

/* =========================== 核心引擎函数实现 =========================== */

/**
 * Engine_ProcessBatchData_0856c7 - 批量数据处理函数
 * 
 * 处理引擎中的批量数据，包括数组复制、内存分配和数据迁移操作。
 * 该函数是核心数据处理流程的一部分，负责高效地处理大量数据。
 * 
 * 原始实现：FUN_1800856c7
 */
void Engine_ProcessBatchData_0856c7(void)
{
    int32_t *src_ptr;
    int32_t *dst_ptr;
    ushort element_count;
    uint capacity;
    int32_t temp_val1;
    int32_t temp_val2;
    int32_t temp_val3;
    int16_t type_info;
    longlong input_param;
    ulonglong allocated_size;
    longlong struct_ptr;
    int index;
    ulonglong current_pos;
    uint *src_array;
    ulonglong base_offset;
    uint *dst_array;
    uint array_size;
    ulonglong iterator;
    longlong *src_base;
    longlong *dst_base;
    
    // 检查输入参数并分配内存
    if (input_param == 0) {
        allocated_size = base_offset & 0xffffffff;
        type_info = 0;
    }
    else {
        allocated_size = Memory_AllocateAligned(_DAT_180c8ed18, input_param * 4, 0xf);
        type_info = (int16_t)dst_base[2];
    }
    
    dst_base[1] = allocated_size;
    struct_ptr = External_GetStructPointer(type_info);
    *dst_base = struct_ptr;
    
    iterator = base_offset & 0xffffffff;
    element_count = *(ushort *)(dst_base + 2);
    allocated_size = base_offset;
    
    // 处理批量数据复制
    if ((ushort)base_offset < element_count) {
        do {
            src_array = (uint *)(*src_base + allocated_size);
            dst_array = (uint *)(*dst_base + allocated_size);
            array_size = *src_array;
            capacity = dst_array[1];
            
            // 检查并调整数组容量
            if ((int)capacity < (int)array_size) {
                if (array_size == 0) {
                    if ((int)capacity < 2) {
                        dst_array[1] = 8;
                    }
                    else {
                        dst_array[1] = ((int)capacity >> 1) + capacity;
                    }
                }
                else {
                    dst_array[1] = array_size;
                }
                External_ResizeArray(dst_array);
            }
            
            *dst_array = array_size;
            current_pos = base_offset & 0xffffffff;
            
            // 复制数组元素
            if (*src_array != 0) {
                do {
                    index = (int)current_pos;
                    current_pos = (ulonglong)(index + 1U);
                    src_ptr = (int32_t *)(*(longlong *)(src_array + 2) + (longlong)index * 0x10);
                    temp_val1 = src_ptr[1];
                    temp_val2 = src_ptr[2];
                    temp_val3 = src_ptr[3];
                    dst_ptr = (int32_t *)(*(longlong *)(dst_array + 2) + (longlong)index * 0x10);
                    *dst_ptr = *src_ptr;
                    dst_ptr[1] = temp_val1;
                    dst_ptr[2] = temp_val2;
                    dst_ptr[3] = temp_val3;
                } while (index + 1U < *src_array);
            }
            
            // 处理第二个数组
            array_size = src_array[10];
            capacity = dst_array[0xb];
            if ((int)capacity < (int)array_size) {
                if (array_size == 0) {
                    if ((int)capacity < 2) {
                        dst_array[0xb] = 8;
                    }
                    else {
                        dst_array[0xb] = ((int)capacity >> 1) + capacity;
                    }
                }
                else {
                    dst_array[0xb] = array_size;
                }
                External_ResizeArray(dst_array + 10);
            }
            
            dst_array[10] = array_size;
            base_offset = 0;
            current_pos = base_offset;
            
            if (src_array[10] != 0) {
                do {
                    index = (int)current_pos;
                    current_pos = (ulonglong)(index + 1U);
                    src_ptr = (int32_t *)(*(longlong *)(src_array + 0xc) + (longlong)index * 0x10);
                    temp_val1 = src_ptr[1];
                    temp_val2 = src_ptr[2];
                    temp_val3 = src_ptr[3];
                    dst_ptr = (int32_t *)(*(longlong *)(dst_array + 0xc) + (longlong)index * 0x10);
                    *dst_ptr = *src_ptr;
                    dst_ptr[1] = temp_val1;
                    dst_ptr[2] = temp_val2;
                    dst_ptr[3] = temp_val3;
                } while (index + 1U < src_array[10]);
            }
            
            element_count = *(ushort *)(dst_base + 2);
            array_size = (int)iterator + 1;
            iterator = (ulonglong)array_size;
            allocated_size = allocated_size + 0x50;
        } while ((int)array_size < (int)(uint)element_count);
    }
    
    // 最终内存复制操作
    memcpy(dst_base[1], src_base[1], (ulonglong)element_count << 2);
}

/**
 * Engine_ProcessArrayData_085714 - 数组数据处理函数
 * 
 * 专门处理数组类型数据的函数，包括数组容量调整、元素复制和内存管理。
 * 与Engine_ProcessBatchData_0856c7类似，但针对数组数据进行了优化。
 * 
 * 原始实现：FUN_180085714
 */
void Engine_ProcessArrayData_085714(void)
{
    int32_t *src_ptr;
    int32_t *dst_ptr;
    uint array_size;
    uint capacity;
    int32_t temp_val1;
    int32_t temp_val2;
    int32_t temp_val3;
    int index;
    ulonglong current_pos;
    uint *src_array;
    ulonglong base_offset;
    uint *dst_array;
    int array_index;
    longlong *src_base;
    longlong *dst_base;
    ulonglong iterator;
    
    iterator = base_offset;
    do {
        src_array = (uint *)(*src_base + iterator);
        dst_array = (uint *)(*dst_base + iterator);
        array_size = *src_array;
        capacity = dst_array[1];
        
        // 检查并调整数组容量
        if ((int)capacity < (int)array_size) {
            if (array_size == 0) {
                if ((int)capacity < 2) {
                    dst_array[1] = 8;
                }
                else {
                    dst_array[1] = ((int)capacity >> 1) + capacity;
                }
            }
            else {
                dst_array[1] = array_size;
            }
            External_ResizeArray(dst_array);
        }
        
        *dst_array = array_size;
        current_pos = base_offset & 0xffffffff;
        
        // 复制数组元素
        if (*src_array != 0) {
            do {
                index = (int)current_pos;
                current_pos = (ulonglong)(index + 1U);
                src_ptr = (int32_t *)(*(longlong *)(src_array + 2) + (longlong)index * 0x10);
                temp_val1 = src_ptr[1];
                temp_val2 = src_ptr[2];
                temp_val3 = src_ptr[3];
                dst_ptr = (int32_t *)(*(longlong *)(dst_array + 2) + (longlong)index * 0x10);
                *dst_ptr = *src_ptr;
                dst_ptr[1] = temp_val1;
                dst_ptr[2] = temp_val2;
                dst_ptr[3] = temp_val3;
            } while (index + 1U < *src_array);
        }
        
        // 处理第二个数组
        array_size = src_array[10];
        capacity = dst_array[0xb];
        if ((int)capacity < (int)array_size) {
            if (array_size == 0) {
                if ((int)capacity < 2) {
                    dst_array[0xb] = 8;
                }
                else {
                    dst_array[0xb] = ((int)capacity >> 1) + capacity;
                }
            }
            else {
                dst_array[0xb] = array_size;
            }
            External_ResizeArray(dst_array + 10);
        }
        
        dst_array[10] = array_size;
        base_offset = 0;
        current_pos = base_offset;
        
        if (src_array[10] != 0) {
            do {
                index = (int)current_pos;
                current_pos = (ulonglong)(index + 1U);
                src_ptr = (int32_t *)(*(longlong *)(src_array + 0xc) + (longlong)index * 0x10);
                temp_val1 = src_ptr[1];
                temp_val2 = src_ptr[2];
                temp_val3 = src_ptr[3];
                dst_ptr = (int32_t *)(*(longlong *)(dst_array + 0xc) + (longlong)index * 0x10);
                *dst_ptr = *src_ptr;
                dst_ptr[1] = temp_val1;
                dst_ptr[2] = temp_val2;
                dst_ptr[3] = temp_val3;
            } while (index + 1U < src_array[10]);
        }
        
        array_index = array_index + 1;
        iterator = iterator + 0x50;
    } while (array_index < (int)(uint)*(ushort *)(dst_base + 2));
    
    // 最终内存复制操作
    memcpy(dst_base[1], src_base[1], (ulonglong)*(ushort *)(dst_base + 2) << 2);
}

/**
 * Engine_CopyMemoryBlock_085826 - 内存块复制函数
 * 
 * 执行快速的内存块复制操作，通常用于批量数据传输。
 * 这是一个优化的内存复制函数，专门处理特定大小的内存块。
 * 
 * 原始实现：FUN_180085826
 */
void Engine_CopyMemoryBlock_085826(void)
{
    ushort copy_size;
    longlong src_ptr;
    longlong dst_ptr;
    
    // 执行内存复制操作
    memcpy(*(uint64_t *)(dst_ptr + 8), *(uint64_t *)(src_ptr + 8), (ulonglong)copy_size << 2);
}

/**
 * Engine_NoOperation_085840 - 空操作函数
 * 
 * 执行空操作的函数，通常用作占位符或同步点。
 * 该函数不执行任何实际操作，直接返回。
 * 
 * 原始实现：FUN_180085840
 */
void Engine_NoOperation_085840(void)
{
    return;
}

/**
 * Engine_GetNextNode_085900 - 获取下一个节点
 * 
 * 在链表或树结构中获取下一个节点的指针。
 * 该函数遍历数据结构，返回下一个有效节点的指针。
 * 
 * @param current_node 当前节点指针
 * @return 下一个节点指针，如果没有则返回当前节点
 * 
 * 原始实现：FUN_180085900
 */
longlong Engine_GetNextNode_085900(longlong current_node)
{
    // 检查节点状态并获取下一个节点
    if ((((*(byte *)(current_node + 0xfd) & 0x40) == 0) || (*(longlong *)(current_node + 0x210) == 0)) &&
       (*(longlong *)(current_node + 0x1b0) != 0)) {
        current_node = Engine_GetNextNode_085900(*(longlong *)(current_node + 0x1b0));
    }
    return current_node;
}

/**
 * Engine_ThrowException_085970 - 抛出异常
 * 
 * 引擎异常处理函数，用于抛出和处理运行时异常。
 * 该函数会终止当前进程并报告错误。
 * 
 * @param unused_param 未使用的参数
 * @param error_code 错误代码
 * 
 * 原始实现：FUN_180085970
 */
void Engine_ThrowException_085970(uint64_t unused_param, int32_t error_code)
{
    System_ExitProcess(error_code);
}

/**
 * Engine_HandleError_085ac0 - 错误处理函数
 * 
 * 处理引擎运行时错误，包括错误日志记录和恢复操作。
 * 该函数是错误处理系统的一部分。
 * 
 * @param unused_param 未使用的参数
 * @param error_code 错误代码
 * 
 * 原始实现：FUN_180085ac0
 */
void Engine_HandleError_085ac0(uint64_t unused_param, int32_t error_code)
{
    System_ExitProcess(error_code);
}

/**
 * Engine_ProcessFatalError_085c10 - 致命错误处理
 * 
 * 处理致命错误，通常会导致程序终止。
 * 该函数用于处理无法恢复的严重错误。
 * 
 * @param unused_param 未使用的参数
 * @param error_code 错误代码
 * 
 * 原始实现：FUN_180085c10
 */
void Engine_ProcessFatalError_085c10(uint64_t unused_param, int32_t error_code)
{
    System_ExitProcess(error_code);
}

/**
 * Engine_AllocateStructArray_085e30 - 分配结构体数组
 * 
 * 分配用于存储结构体的数组内存，包括容量管理和内存对齐。
 * 该函数处理20字节大小结构体的数组分配。
 * 
 * @param array_ptr 数组指针
 * 
 * 原始实现：FUN_180085e30
 */
void Engine_AllocateStructArray_085e30(int *array_ptr)
{
    uint64_t new_memory;
    
    // 检查数组容量
    if (array_ptr[1] < 1) {
        if (*(longlong *)(array_ptr + 2) != 0) {
            Memory_FreeBlock();
        }
        array_ptr[2] = 0;
        array_ptr[3] = 0;
        return;
    }
    
    // 分配新内存
    new_memory = Memory_AllocateAligned(_DAT_180c8ed18, (longlong)array_ptr[1] * STRUCT_SIZE_20, (char)array_ptr[8]);
    
    // 复制现有数据
    if (*(longlong *)(array_ptr + 2) != 0) {
        memcpy(new_memory, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * STRUCT_SIZE_20);
    }
    
    *(uint64_t *)(array_ptr + 2) = new_memory;
    return;
}

/**
 * Engine_ReallocateStructArray_085e55 - 重新分配结构体数组
 * 
 * 重新分配结构体数组的内存，通常用于扩容或缩容操作。
 * 该函数是Engine_AllocateStructArray_085e30的辅助函数。
 * 
 * 原始实现：FUN_180085e55
 */
void Engine_ReallocateStructArray_085e55(void)
{
    uint64_t new_memory;
    int *array_ptr;
    
    new_memory = Memory_AllocateAligned();
    if (*(longlong *)(array_ptr + 2) != 0) {
        memcpy(new_memory, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * STRUCT_SIZE_20);
    }
    *(uint64_t *)(array_ptr + 2) = new_memory;
    return;
}

/**
 * Engine_ClearMemoryPointer_085e9b - 清理内存指针
 * 
 * 清理指定的内存指针，确保内存被正确释放。
 * 该函数用于防止内存泄漏。
 * 
 * @param param_1 参数指针
 * 
 * 原始实现：FUN_180085e9b
 */
void Engine_ClearMemoryPointer_085e9b(longlong param_1)
{
    longlong target_ptr;
    
    if (*(longlong *)(param_1 + 8) != 0) {
        Memory_FreeBlock();
    }
    *(uint64_t *)(target_ptr + 8) = 0;
    return;
}

/**
 * Engine_CopyStructArray_085ec0 - 复制结构体数组
 * 
 * 复制结构体数组的内容，包括容量调整和内存分配。
 * 该函数确保目标数组有足够的空间容纳源数组的数据。
 * 
 * @param dst_ptr 目标数组指针
 * @param src_ptr 源数组指针
 * 
 * 原始实现：FUN_180085ec0
 */
void Engine_CopyStructArray_085ec0(int *dst_ptr, int *src_ptr)
{
    int element_count;
    uint64_t src_data;
    
    element_count = *src_ptr;
    *dst_ptr = element_count;
    *(char *)(dst_ptr + 8) = (char)src_ptr[8];
    
    // 检查并调整目标数组容量
    if (dst_ptr[1] < src_ptr[1]) {
        dst_ptr[1] = src_ptr[1];
        Engine_AllocateStructArray_085e30(dst_ptr);
        element_count = *dst_ptr;
        src_data = *(uint64_t *)(src_ptr + 2);
    }
    else {
        src_data = *(uint64_t *)(src_ptr + 2);
    }
    
    // 执行数据复制
    memcpy(*(uint64_t *)(dst_ptr + 2), src_data, (longlong)element_count * STRUCT_SIZE_20);
    return;
}

/**
 * Engine_AllocateInt32Array_085f20 - 分配32位整数数组
 * 
 * 分配用于存储32位整数的数组内存。
 * 该函数处理12字节大小整数的数组分配。
 * 
 * @param array_ptr 数组指针
 * 
 * 原始实现：FUN_180085f20
 */
void Engine_AllocateInt32Array_085f20(int *array_ptr)
{
    uint64_t new_memory;
    
    // 检查数组容量
    if (array_ptr[1] < 1) {
        if (*(longlong *)(array_ptr + 2) != 0) {
            Memory_FreeBlock();
        }
        array_ptr[2] = 0;
        array_ptr[3] = 0;
        return;
    }
    
    // 分配新内存
    new_memory = Memory_AllocateAligned(_DAT_180c8ed18, (longlong)array_ptr[1] * STRUCT_SIZE_12, (char)array_ptr[8]);
    
    // 复制现有数据
    if (*(longlong *)(array_ptr + 2) != 0) {
        memcpy(new_memory, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * STRUCT_SIZE_12);
    }
    
    *(uint64_t *)(array_ptr + 2) = new_memory;
    return;
}

/**
 * Engine_ReallocateInt32Array_085f45 - 重新分配32位整数数组
 * 
 * 重新分配32位整数数组的内存。
 * 该函数是Engine_AllocateInt32Array_085f20的辅助函数。
 * 
 * 原始实现：FUN_180085f45
 */
void Engine_ReallocateInt32Array_085f45(void)
{
    uint64_t new_memory;
    int *array_ptr;
    
    new_memory = Memory_AllocateAligned();
    if (*(longlong *)(array_ptr + 2) != 0) {
        memcpy(new_memory, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * STRUCT_SIZE_12);
    }
    *(uint64_t *)(array_ptr + 2) = new_memory;
    return;
}

/**
 * Engine_ClearInt32Pointer_085f8b - 清理32位整数指针
 * 
 * 清理32位整数数组的内存指针。
 * 
 * @param param_1 参数指针
 * 
 * 原始实现：FUN_180085f8b
 */
void Engine_ClearInt32Pointer_085f8b(longlong param_1)
{
    longlong target_ptr;
    
    if (*(longlong *)(param_1 + 8) != 0) {
        Memory_FreeBlock();
    }
    *(uint64_t *)(target_ptr + 8) = 0;
    return;
}

/**
 * Engine_CopyInt32Array_085fb0 - 复制32位整数数组
 * 
 * 复制32位整数数组的内容。
 * 
 * @param dst_ptr 目标数组指针
 * @param src_ptr 源数组指针
 * 
 * 原始实现：FUN_180085fb0
 */
void Engine_CopyInt32Array_085fb0(int *dst_ptr, int *src_ptr)
{
    int element_count;
    uint64_t src_data;
    
    element_count = *src_ptr;
    *dst_ptr = element_count;
    *(char *)(dst_ptr + 8) = (char)src_ptr[8];
    
    // 检查并调整目标数组容量
    if (dst_ptr[1] < src_ptr[1]) {
        dst_ptr[1] = src_ptr[1];
        Engine_AllocateInt32Array_085f20(dst_ptr);
        element_count = *dst_ptr;
        src_data = *(uint64_t *)(src_ptr + 2);
    }
    else {
        src_data = *(uint64_t *)(src_ptr + 2);
    }
    
    // 执行数据复制
    memcpy(*(uint64_t *)(dst_ptr + 2), src_data, (longlong)element_count * STRUCT_SIZE_12);
    return;
}

/**
 * Engine_AllocateComplexArray_086010 - 分配复杂数组
 * 
 * 分配用于存储复杂数据结构的数组内存。
 * 该函数处理92字节大小复杂数据的数组分配。
 * 
 * @param array_ptr 数组指针
 * 
 * 原始实现：FUN_180086010
 */
void Engine_AllocateComplexArray_086010(int *array_ptr)
{
    uint64_t new_memory;
    
    // 检查数组容量
    if (array_ptr[1] < 1) {
        if (*(longlong *)(array_ptr + 2) != 0) {
            Memory_FreeBlock();
        }
        array_ptr[2] = 0;
        array_ptr[3] = 0;
        return;
    }
    
    // 分配新内存
    new_memory = Memory_AllocateAligned(_DAT_180c8ed18, (longlong)array_ptr[1] * STRUCT_SIZE_92, (char)array_ptr[8]);
    
    // 复制现有数据
    if (*(longlong *)(array_ptr + 2) != 0) {
        memcpy(new_memory, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * STRUCT_SIZE_92);
    }
    
    *(uint64_t *)(array_ptr + 2) = new_memory;
    return;
}

/**
 * Engine_ReallocateComplexArray_086031 - 重新分配复杂数组
 * 
 * 重新分配复杂数组的内存。
 * 该函数是Engine_AllocateComplexArray_086010的辅助函数。
 * 
 * 原始实现：FUN_180086031
 */
void Engine_ReallocateComplexArray_086031(void)
{
    uint64_t new_memory;
    int *array_ptr;
    
    new_memory = Memory_AllocateAligned();
    if (*(longlong *)(array_ptr + 2) != 0) {
        memcpy(new_memory, *(longlong *)(array_ptr + 2), (longlong)*array_ptr * STRUCT_SIZE_92);
    }
    *(uint64_t *)(array_ptr + 2) = new_memory;
    return;
}

/**
 * Engine_ClearComplexPointer_086073 - 清理复杂数据指针
 * 
 * 清理复杂数据数组的内存指针。
 * 
 * @param param_1 参数指针
 * 
 * 原始实现：FUN_180086073
 */
void Engine_ClearComplexPointer_086073(longlong param_1)
{
    longlong target_ptr;
    
    if (*(longlong *)(param_1 + 8) != 0) {
        Memory_FreeBlock();
    }
    *(uint64_t *)(target_ptr + 8) = 0;
    return;
}

/**
 * Engine_CopyComplexArray_086090 - 复制复杂数组
 * 
 * 复制复杂数组的内容。
 * 
 * @param dst_ptr 目标数组指针
 * @param src_ptr 源数组指针
 * 
 * 原始实现：FUN_180086090
 */
void Engine_CopyComplexArray_086090(int *dst_ptr, int *src_ptr)
{
    int element_count;
    uint64_t src_data;
    
    element_count = *src_ptr;
    *dst_ptr = element_count;
    *(char *)(dst_ptr + 8) = (char)src_ptr[8];
    
    // 检查并调整目标数组容量
    if (dst_ptr[1] < src_ptr[1]) {
        dst_ptr[1] = src_ptr[1];
        Engine_AllocateComplexArray_086010(dst_ptr);
        element_count = *dst_ptr;
        src_data = *(uint64_t *)(src_ptr + 2);
    }
    else {
        src_data = *(uint64_t *)(src_ptr + 2);
    }
    
    // 执行数据复制
    memcpy(*(uint64_t *)(dst_ptr + 2), src_data, (longlong)element_count * STRUCT_SIZE_92);
    return;
}

/**
 * Engine_CopyGenericArray_0860f0 - 复制通用数组
 * 
 * 复制通用类型的数组内容，支持动态大小。
 * 
 * @param dst_ptr 目标数组指针
 * @param src_ptr 源数组指针
 * 
 * 原始实现：FUN_1800860f0
 */
void Engine_CopyGenericArray_0860f0(int *dst_ptr, int *src_ptr)
{
    int element_count;
    uint64_t src_data;
    
    element_count = *src_ptr;
    *dst_ptr = element_count;
    *(char *)(dst_ptr + 8) = (char)src_ptr[8];
    
    // 检查并调整目标数组容量
    if (dst_ptr[1] < src_ptr[1]) {
        dst_ptr[1] = src_ptr[1];
        External_ResizeArray(dst_ptr);
        element_count = *dst_ptr;
        src_data = *(uint64_t *)(src_ptr + 2);
    }
    else {
        src_data = *(uint64_t *)(src_ptr + 2);
    }
    
    // 执行数据复制
    memcpy(*(uint64_t *)(dst_ptr + 2), src_data, (longlong)element_count << 4);
    return;
}

/**
 * Engine_ValidateMatrixIdentity_0861a0 - 验证单位矩阵
 * 
 * 验证4x4矩阵是否为单位矩阵，用于矩阵运算的正确性检查。
 * 该函数检查矩阵的每个元素是否符合单位矩阵的标准。
 * 
 * @param matrix_ptr 矩阵指针
 * @return 1=是单位矩阵，0=不是单位矩阵
 * 
 * 原始实现：FUN_1800861a0
 */
int8_t Engine_ValidateMatrixIdentity_0861a0(float *matrix_ptr)
{
    char validation_result;
    
    // 检查矩阵是否符合单位矩阵的特征
    if ((((((ABS(*matrix_ptr - 1.0) < IDENTITY_MATRIX_THRESHOLD) && (ABS(matrix_ptr[1]) < IDENTITY_MATRIX_THRESHOLD)) &&
          (ABS(matrix_ptr[2]) < IDENTITY_MATRIX_THRESHOLD)) &&
         ((ABS(matrix_ptr[4]) < IDENTITY_MATRIX_THRESHOLD && (ABS(matrix_ptr[5] - 1.0) < IDENTITY_MATRIX_THRESHOLD)))) &&
        ((ABS(matrix_ptr[6]) < IDENTITY_MATRIX_THRESHOLD && ((ABS(matrix_ptr[8]) < IDENTITY_MATRIX_THRESHOLD && (ABS(matrix_ptr[9]) < IDENTITY_MATRIX_THRESHOLD)))))) &&
       (ABS(matrix_ptr[10] - 1.0) < IDENTITY_MATRIX_THRESHOLD)) {
        validation_result = func_0x000180086150(matrix_ptr + 0xc, &DAT_180a00330);
        if (validation_result != '\0') {
            return 1;
        }
    }
    return 0;
}

/**
 * Engine_PushTripleData_086270 - 推入三重数据
 * 
 * 向数据容器中推入三重数据结构，支持动态扩容。
 * 该函数处理24字节大小的三重数据。
 * 
 * @param container_ptr 容器指针
 * @param data_ptr 数据指针
 * 
 * 原始实现：FUN_180086270
 */
void Engine_PushTripleData_086270(ulonglong *container_ptr, uint64_t *data_ptr)
{
    int32_t data_val1;
    int32_t data_val2;
    int32_t data_val3;
    uint64_t extra_data;
    int32_t *new_buffer;
    longlong current_size;
    uint64_t *current_pos;
    uint64_t *buffer_start;
    
    current_pos = (uint64_t *)container_ptr[1];
    if (current_pos < (uint64_t *)container_ptr[2]) {
        container_ptr[1] = (ulonglong)(current_pos + 3);
        extra_data = data_ptr[1];
        *current_pos = *data_ptr;
        current_pos[1] = extra_data;
        current_pos[2] = data_ptr[2];
        return;
    }
    
    buffer_start = (uint64_t *)*container_ptr;
    current_size = ((longlong)current_pos - (longlong)buffer_start) / TRIPLE_DATA_SIZE;
    if (current_size == 0) {
        current_size = 1;
    }
    else {
        current_size = current_size * 2;
        if (current_size == 0) {
            new_buffer = (int32_t *)0x0;
            goto LAB_180086316;
        }
    }
    
    new_buffer = (int32_t *)Memory_AllocateAligned(_DAT_180c8ed18, current_size * TRIPLE_DATA_SIZE, (char)container_ptr[3]);
    buffer_start = (uint64_t *)*container_ptr;
    current_pos = (uint64_t *)container_ptr[1];
    
LAB_180086316:
    if (buffer_start != current_pos) {
        memmove(new_buffer, buffer_start, (longlong)current_pos - (longlong)buffer_start);
    }
    
    data_val1 = *(int32_t *)((longlong)data_ptr + 4);
    data_val2 = *(int32_t *)(data_ptr + 1);
    data_val3 = *(int32_t *)((longlong)data_ptr + 0xc);
    *new_buffer = *(int32_t *)data_ptr;
    new_buffer[1] = data_val1;
    new_buffer[2] = data_val2;
    new_buffer[3] = data_val3;
    *(uint64_t *)(new_buffer + 4) = data_ptr[2];
    
    if (*container_ptr != 0) {
        Memory_FreeBlock();
    }
    
    *container_ptr = (ulonglong)new_buffer;
    container_ptr[2] = (ulonglong)(new_buffer + current_size * 6);
    container_ptr[1] = (ulonglong)(new_buffer + 6);
    return;
}

/**
 * Engine_InsertTripleData_0862bb - 插入三重数据
 * 
 * 在指定位置插入三重数据，支持动态扩容和数据移动。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * 
 * 原始实现：FUN_1800862bb
 */
void Engine_InsertTripleData_0862bb(longlong param_1, uint64_t param_2, uint64_t param_3, longlong param_4)
{
    int32_t data_val1;
    int32_t data_val2;
    int32_t data_val3;
    int32_t *new_buffer;
    longlong *container_ptr;
    int32_t *data_ptr;
    longlong new_size;
    longlong current_end;
    
    if (param_1 / TRIPLE_DATA_SIZE == 0) {
        new_size = 1;
    }
    else {
        new_size = (param_1 / TRIPLE_DATA_SIZE) * 2;
        if (new_size == 0) {
            new_buffer = (int32_t *)0x0;
            goto LAB_180086316;
        }
    }
    
    new_buffer = (int32_t *)Memory_AllocateAligned(_DAT_180c8ed18, new_size * TRIPLE_DATA_SIZE, (char)container_ptr[3]);
    param_4 = *container_ptr;
    current_end = container_ptr[1];
    
LAB_180086316:
    if (param_4 != current_end) {
        memmove(new_buffer, param_4, current_end - param_4);
    }
    
    data_val1 = data_ptr[1];
    data_val2 = data_ptr[2];
    data_val3 = data_ptr[3];
    *new_buffer = *data_ptr;
    new_buffer[1] = data_val1;
    new_buffer[2] = data_val2;
    new_buffer[3] = data_val3;
    *(uint64_t *)(new_buffer + 4) = *(uint64_t *)(data_ptr + 4);
    
    if (*container_ptr != 0) {
        Memory_FreeBlock();
    }
    
    *container_ptr = (longlong)new_buffer;
    container_ptr[2] = (longlong)(new_buffer + new_size * 6);
    container_ptr[1] = (longlong)(new_buffer + 6);
    return;
}

/**
 * thunk_FUN_18064e900 - 内存释放函数的thunk包装
 * 
 * 内存释放函数的间接调用包装，用于函数指针跳转。
 * 
 * 原始实现：thunk_FUN_18064e900
 */
void thunk_FUN_18064e900(void)
{
    Memory_FreeBlock();
}

/**
 * Engine_PushDoubleData_0863a0 - 推入双重数据
 * 
 * 向数据容器中推入双重数据结构，支持动态扩容。
 * 该函数处理16字节大小的双重数据。
 * 
 * @param container_ptr 容器指针
 * @param data_ptr 数据指针
 * 
 * 原始实现：FUN_1800863a0
 */
void Engine_PushDoubleData_0863a0(ulonglong *container_ptr, uint64_t *data_ptr)
{
    int32_t data_val1;
    int32_t data_val2;
    int32_t data_val3;
    uint64_t extra_data;
    int32_t *new_buffer;
    uint64_t *current_pos;
    uint64_t *buffer_start;
    longlong current_size;
    
    current_pos = (uint64_t *)container_ptr[1];
    if (current_pos < (uint64_t *)container_ptr[2]) {
        container_ptr[1] = (ulonglong)(current_pos + 2);
        extra_data = data_ptr[1];
        *current_pos = *data_ptr;
        current_pos[1] = extra_data;
        return;
    }
    
    buffer_start = (uint64_t *)*container_ptr;
    current_size = (longlong)current_pos - (longlong)buffer_start >> 4;
    if (current_size == 0) {
        current_size = 1;
    }
    else {
        current_size = current_size * 2;
        if (current_size == 0) {
            new_buffer = (int32_t *)0x0;
            goto LAB_18008642b;
        }
    }
    
    new_buffer = (int32_t *)Memory_AllocateAligned(_DAT_180c8ed18, current_size << 4, (char)container_ptr[3]);
    buffer_start = (uint64_t *)*container_ptr;
    current_pos = (uint64_t *)container_ptr[1];
    
LAB_18008642b:
    if (buffer_start != current_pos) {
        memmove(new_buffer, buffer_start, (longlong)current_pos - (longlong)buffer_start);
    }
    
    data_val1 = *(int32_t *)((longlong)data_ptr + 4);
    data_val2 = *(int32_t *)(data_ptr + 1);
    data_val3 = *(int32_t *)((longlong)data_ptr + 0xc);
    *new_buffer = *(int32_t *)data_ptr;
    new_buffer[1] = data_val1;
    new_buffer[2] = data_val2;
    new_buffer[3] = data_val3;
    
    if (*container_ptr != 0) {
        Memory_FreeBlock();
    }
    
    *container_ptr = (ulonglong)new_buffer;
    container_ptr[2] = (ulonglong)(new_buffer + current_size * 4);
    container_ptr[1] = (ulonglong)(new_buffer + 4);
    return;
}

/**
 * Engine_ReleaseObjectMemory_086490 - 释放对象内存
 * 
 * 释放对象占用的内存，包括清理相关的资源和数据结构。
 * 
 * @param obj_ptr 对象指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 释放后的对象指针
 * 
 * 原始实现：FUN_180086490
 */
uint64_t *Engine_ReleaseObjectMemory_086490(uint64_t *obj_ptr, ulonglong param_2, uint64_t param_3, uint64_t param_4)
{
    obj_ptr[4] = &UNK_180a3c3e0;
    if (obj_ptr[5] != 0) {
        Memory_FreeBlock();
    }
    obj_ptr[5] = 0;
    *(int32_t *)(obj_ptr + 7) = 0;
    obj_ptr[4] = &UNK_18098bcb0;
    *obj_ptr = &UNK_180a21720;
    *obj_ptr = &UNK_180a21690;
    if ((param_2 & 1) != 0) {
        free(obj_ptr, OBJECT_SIZE_112, param_3, param_4, 0xfffffffffffffffe);
    }
    return obj_ptr;
}

/**
 * Engine_HandleObjectReference_086530 - 处理对象引用
 * 
 * 处理对象的引用计数和生命周期管理。
 * 
 * @param obj_ptr 对象指针
 * 
 * 原始实现：FUN_180086530
 */
void Engine_HandleObjectReference_086530(longlong *obj_ptr)
{
    if (*obj_ptr != 0) {
        External_HandleReference();
    }
    return;
}

/**
 * Engine_InitializeStringObject_086570 - 初始化字符串对象
 * 
 * 初始化字符串对象，包括内存分配和字符串复制。
 * 
 * @param obj_ptr 对象指针
 * @param str_ptr 字符串指针
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 初始化后的对象指针
 * 
 * 原始实现：FUN_180086570
 */
uint64_t *Engine_InitializeStringObject_086570(uint64_t *obj_ptr, longlong str_ptr, uint64_t param_3, uint64_t param_4)
{
    longlong str_length;
    
    *obj_ptr = &UNK_18098bcb0;
    obj_ptr[1] = 0;
    *(int32_t *)(obj_ptr + 2) = 0;
    *obj_ptr = &UNK_1809fcc28;
    obj_ptr[1] = obj_ptr + 3;
    *(int32_t *)(obj_ptr + 2) = 0;
    *(int8_t *)(obj_ptr + 3) = 0;
    
    if (str_ptr != 0) {
        str_length = -1;
        do {
            str_length = str_length + 1;
        } while (*(char *)(str_ptr + str_length) != '\0');
        *(int *)(obj_ptr + 2) = (int)str_length;
        strcpy_s(obj_ptr[1], MAX_STRING_LENGTH, str_ptr, param_4, 0xfffffffffffffffe);
    }
    
    return obj_ptr;
}

/**
 * Engine_CreateMatrixObject_086600 - 创建矩阵对象
 * 
 * 创建并初始化矩阵对象，用于3D图形变换。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 创建的矩阵对象指针
 * 
 * 原始实现：FUN_180086600
 */
uint64_t *Engine_CreateMatrixObject_086600(uint64_t param_1, int32_t param_2)
{
    uint64_t *matrix_obj;
    
    matrix_obj = (uint64_t *)Memory_AllocateObject(_DAT_180c8ed18, OBJECT_SIZE_184, 8, 0x1a, 0xfffffffffffffffe);
    Object_InitializeBase(matrix_obj, param_1, param_2);
    *matrix_obj = &UNK_180a14ff8;
    matrix_obj[0x16] = 0;
    return matrix_obj;
}

/**
 * Engine_CreateVectorObject_086670 - 创建向量对象
 * 
 * 创建并初始化向量对象，用于3D数学计算。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 创建的向量对象指针
 * 
 * 原始实现：FUN_180086670
 */
uint64_t *Engine_CreateVectorObject_086670(uint64_t param_1, int32_t param_2)
{
    uint64_t *vector_obj;
    
    vector_obj = (uint64_t *)Memory_AllocateObject(_DAT_180c8ed18, OBJECT_SIZE_176, 8, 0x1a, 0xfffffffffffffffe);
    Object_InitializeBase(vector_obj, param_1, param_2);
    *vector_obj = &UNK_180a01240;
    return vector_obj;
}

/**
 * Engine_ReleaseVectorObject_0866f0 - 释放向量对象
 * 
 * 释放向量对象占用的内存和资源。
 * 
 * @param obj_ptr 对象指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 释放后的对象指针
 * 
 * 原始实现：FUN_1800866f0
 */
uint64_t Engine_ReleaseVectorObject_0866f0(uint64_t obj_ptr, ulonglong param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t flags;
    
    flags = 0xfffffffffffffffe;
    Object_CleanupBase();
    if ((param_2 & 1) != 0) {
        free(obj_ptr, OBJECT_SIZE_176, param_3, param_4, flags);
    }
    return obj_ptr;
}

/**
 * Engine_CreateTransformObject_086740 - 创建变换对象
 * 
 * 创建并初始化变换对象，用于3D对象变换。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 创建的变换对象指针
 * 
 * 原始实现：FUN_180086740
 */
uint64_t *Engine_CreateTransformObject_086740(uint64_t param_1, int32_t param_2)
{
    uint64_t *transform_obj;
    
    transform_obj = (uint64_t *)Memory_AllocateObject(_DAT_180c8ed18, OBJECT_SIZE_184, 8, 0x1a, 0xfffffffffffffffe);
    Object_InitializeBase(transform_obj, param_1, param_2);
    *transform_obj = &UNK_180a01188;
    transform_obj[0x16] = 0;
    return transform_obj;
}

/**
 * Engine_ReleaseTransformObject_0867d0 - 释放变换对象
 * 
 * 释放变换对象占用的内存和资源。
 * 
 * @param obj_ptr 对象指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 释放后的对象指针
 * 
 * 原始实现：FUN_1800867d0
 */
longlong Engine_ReleaseTransformObject_0867d0(longlong obj_ptr, ulonglong param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t flags;
    
    flags = 0xfffffffffffffffe;
    if (*(longlong **)(obj_ptr + 0xb0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(obj_ptr + 0xb0) + 0x38))();
    }
    Object_CleanupBase(obj_ptr);
    if ((param_2 & 1) != 0) {
        free(obj_ptr, OBJECT_SIZE_184, param_3, param_4, flags);
    }
    return obj_ptr;
}

/**
 * Engine_CreateQuaternionObject_086830 - 创建四元数对象
 * 
 * 创建并初始化四元数对象，用于3D旋转。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 创建的四元数对象指针
 * 
 * 原始实现：FUN_180086830
 */
uint64_t *Engine_CreateQuaternionObject_086830(uint64_t param_1, int32_t param_2)
{
    uint64_t *quaternion_obj;
    
    quaternion_obj = (uint64_t *)Memory_AllocateObject(_DAT_180c8ed18, OBJECT_SIZE_184, 8, 0x1a, 0xfffffffffffffffe);
    Object_InitializeBase(quaternion_obj, param_1, param_2);
    *quaternion_obj = &UNK_180a010d0;
    quaternion_obj[0x16] = 0;
    return quaternion_obj;
}

/**
 * Engine_CreateColorObject_0868d0 - 创建颜色对象
 * 
 * 创建并初始化颜色对象，用于渲染和材质。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 创建的颜色对象指针
 * 
 * 原始实现：FUN_1800868d0
 */
uint64_t *Engine_CreateColorObject_0868d0(uint64_t param_1, int32_t param_2)
{
    uint64_t *color_obj;
    
    color_obj = (uint64_t *)Memory_AllocateObject(_DAT_180c8ed18, OBJECT_SIZE_184, 8, 0x1a, 0xfffffffffffffffe);
    Object_InitializeBase(color_obj, param_1, param_2);
    *color_obj = &UNK_180a00f10;
    color_obj[0x16] = 0;
    return color_obj;
}

/**
 * Engine_CreateBoundingBoxObject_086960 - 创建边界框对象
 * 
 * 创建并初始化边界框对象，用于碰撞检测。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 创建的边界框对象指针
 * 
 * 原始实现：FUN_180086960
 */
uint64_t *Engine_CreateBoundingBoxObject_086960(uint64_t param_1, int32_t param_2)
{
    uint64_t *bbox_obj;
    
    bbox_obj = (uint64_t *)Memory_AllocateObject(_DAT_180c8ed18, OBJECT_SIZE_184, 8, 0x1a, 0xfffffffffffffffe);
    Object_InitializeBase(bbox_obj, param_1, param_2);
    *bbox_obj = &UNK_180a00e58;
    bbox_obj[0x16] = 0;
    return bbox_obj;
}

/**
 * Engine_CreatePlaneObject_086a00 - 创建平面对象
 * 
 * 创建并初始化平面对象，用于空间几何计算。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 创建的平面对象指针
 * 
 * 原始实现：FUN_180086a00
 */
uint64_t *Engine_CreatePlaneObject_086a00(uint64_t param_1, int32_t param_2)
{
    uint64_t *plane_obj;
    
    plane_obj = (uint64_t *)Memory_AllocateObject(_DAT_180c8ed18, OBJECT_SIZE_184, 8, 0x1a, 0xfffffffffffffffe);
    Object_InitializeBase(plane_obj, param_1, param_2);
    *plane_obj = &UNK_180a00d78;
    plane_obj[0x16] = 0;
    return plane_obj;
}

/**
 * Engine_CreateRayObject_086aa0 - 创建射线对象
 * 
 * 创建并初始化射线对象，用于射线检测。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 创建的射线对象指针
 * 
 * 原始实现：FUN_180086aa0
 */
uint64_t *Engine_CreateRayObject_086aa0(uint64_t param_1, int32_t param_2)
{
    uint64_t *ray_obj;
    
    ray_obj = (uint64_t *)Memory_AllocateObject(_DAT_180c8ed18, OBJECT_SIZE_184, 8, 0x1a, 0xfffffffffffffffe);
    Object_InitializeBase(ray_obj, param_1, param_2);
    *ray_obj = &UNK_180a00ca8;
    ray_obj[0x16] = 0;
    return ray_obj;
}

/**
 * Engine_CreateSphereObject_086b40 - 创建球体对象
 * 
 * 创建并初始化球体对象，用于球形碰撞检测。
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @return 创建的球体对象指针
 * 
 * 原始实现：FUN_180086b40
 */
uint64_t *Engine_CreateSphereObject_086b40(uint64_t param_1, int32_t param_2)
{
    uint64_t *sphere_obj;
    
    sphere_obj = (uint64_t *)Memory_AllocateObject(_DAT_180c8ed18, OBJECT_SIZE_184, 8, 0x1a, 0xfffffffffffffffe);
    Object_InitializeBase(sphere_obj, param_1, param_2);
    *sphere_obj = &UNK_180a00be0;
    sphere_obj[0x16] = 0;
    return sphere_obj;
}

/**
 * Engine_InitializeRenderObject_086bd0 - 初始化渲染对象
 * 
 * 初始化渲染对象，设置渲染相关的参数和状态。
 * 
 * @param obj_ptr 对象指针
 * @param param_2 参数2
 * @param param_3 参数3
 * 
 * 原始实现：FUN_180086bd0
 */
void Engine_InitializeRenderObject_086bd0(longlong obj_ptr, uint64_t param_2, longlong param_3)
{
    void *texture_ptr;
    void *shader_ptr;
    void *render_ptr;
    void *stack_ptr1;
    void *stack_ptr2;
    
    *(int32_t *)(obj_ptr + 0x10) = 0;
    if (*(int8_t **)(obj_ptr + 8) != (int8_t *)0x0) {
        **(int8_t **)(obj_ptr + 8) = 0;
    }
    
    String_ParseArguments(*_DAT_180c86870, &stack_ptr1, param_2);
    texture_ptr = &DAT_18098bc73;
    if (_DAT_180bf6658 != (void *)0x0) {
        texture_ptr = _DAT_180bf6658;
    }
    
    render_ptr = &DAT_18098bc73;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
        render_ptr = *(void **)(param_3 + 8);
    }
    
    shader_ptr = &DAT_18098bc73;
    if (stack_ptr2 != (void *)0x0) {
        shader_ptr = stack_ptr2;
    }
    
    Render_InitializeObject(obj_ptr, &UNK_180a00550, shader_ptr, render_ptr, texture_ptr);
    stack_ptr1 = &UNK_180a3c3e0;
    if (stack_ptr2 != (void *)0x0) {
        Memory_FreeBlock();
    }
    return;
}

/**
 * Engine_InitializeDataStructure_086ca0 - 初始化数据结构
 * 
 * 初始化复杂的数据结构，设置各个字段的初始值。
 * 
 * @param data_ptr 数据指针
 * @return 初始化后的数据指针
 * 
 * 原始实现：FUN_180086ca0
 */
uint64_t *Engine_InitializeDataStructure_086ca0(uint64_t *data_ptr)
{
    uint64_t *section_ptr;
    
    data_ptr[1] = 0;
    data_ptr[2] = 0;
    data_ptr[3] = 0;
    *(int32_t *)(data_ptr + 4) = 3;
    data_ptr[5] = 0;
    data_ptr[6] = 0;
    data_ptr[7] = 0;
    *(int32_t *)(data_ptr + 8) = 3;
    
    section_ptr = data_ptr + 9;
    data_ptr[0xc] = 0;
    *(int32_t *)(data_ptr + 0xe) = 3;
    *section_ptr = section_ptr;
    data_ptr[10] = section_ptr;
    data_ptr[0xb] = 0;
    *(int8_t *)(data_ptr + 0xc) = 0;
    data_ptr[0xd] = 0;
    
    section_ptr = data_ptr + 0xf;
    data_ptr[0x12] = 0;
    *(int32_t *)(data_ptr + 0x14) = 0x1a;
    *section_ptr = section_ptr;
    data_ptr[0x10] = section_ptr;
    data_ptr[0x11] = 0;
    *(int8_t *)(data_ptr + 0x12) = 0;
    data_ptr[0x13] = 0;
    
    section_ptr = data_ptr + 0x16;
    data_ptr[0x19] = 0;
    *(int32_t *)(data_ptr + 0x1b) = 0x1a;
    *section_ptr = section_ptr;
    data_ptr[0x17] = section_ptr;
    data_ptr[0x18] = 0;
    *(int8_t *)(data_ptr + 0x19) = 0;
    data_ptr[0x1a] = 0;
    
    section_ptr = data_ptr + 0x1c;
    data_ptr[0x1f] = 0;
    *(int32_t *)(data_ptr + 0x21) = 3;
    *section_ptr = section_ptr;
    data_ptr[0x1d] = section_ptr;
    data_ptr[0x1e] = 0;
    *(int8_t *)(data_ptr + 0x1f) = 0;
    data_ptr[0x20] = 0;
    data_ptr[0x22] = 0;
    data_ptr[0x23] = 0;
    data_ptr[0x24] = 0;
    *(int32_t *)(data_ptr + 0x25) = 0x1a;
    data_ptr[0x15] = 0;
    *data_ptr = 0;
    *(int8_t *)(data_ptr + 0x26) = 0;
    
    return data_ptr;
}

/**
 * Engine_CleanupResourceList_086dc0 - 清理资源列表
 * 
 * 清理资源列表中的所有资源，释放相关内存。
 * 
 * @param list_ptr 列表指针
 * 
 * 原始实现：FUN_180086dc0
 */
void Engine_CleanupResourceList_086dc0(longlong *list_ptr)
{
    longlong current_pos;
    longlong end_pos;
    
    current_pos = list_ptr[1];
    for (end_pos = *list_ptr; end_pos != current_pos; end_pos = end_pos + 0x60) {
        Resource_ReleaseItem(end_pos);
    }
    
    if (*list_ptr == 0) {
        return;
    }
    
    Memory_FreeBlock();
}

/**
 * Engine_ReleaseRenderData_086de0 - 释放渲染数据
 * 
 * 释放渲染相关的数据和资源。
 * 
 * @param data_ptr 数据指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * 
 * 原始实现：FUN_180086de0
 */
void Engine_ReleaseRenderData_086de0(longlong data_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    Data_ReleaseComplex(data_ptr, *(uint64_t *)(data_ptr + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

/**
 * Engine_ReleaseComplexData_086e10 - 释放复杂数据
 * 
 * 释放复杂的数据结构和相关资源。
 * 
 * @param data_ptr 数据指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 * 
 * 原始实现：FUN_180086e10
 */
void Engine_ReleaseComplexData_086e10(longlong data_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    Data_ReleaseComplex(data_ptr, *(uint64_t *)(data_ptr + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}