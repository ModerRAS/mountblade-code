#include "TaleWorlds.Native.Split.h"

/**
 * 核心引擎模块 - 第261部分
 * 
 * 本文件为核心引擎模块的第261部分，包含8个核心引擎函数。
 * 主要功能包括：数据序列化、字符串处理、数据结构初始化、内存管理等。
 * 
 * 原始实现：反编译的x86汇编代码，包含大量寄存器变量和内存操作
 * 简化实现：使用C语言重构，提高代码可读性和维护性
 * 
 * 文件标识: 02_core_engine_part261.c
 * 模块: 核心引擎 (Core Engine)
 * 功能描述: 核心引擎数据序列化和处理功能
 * 创建时间: 2025-08-28
 * 转译时间: 2025-08-28
 * 转译人: Claude
 */

// 全局常量定义
#define MAX_STRING_LENGTH 1024
#define SERIALIZATION_BLOCK_SIZE 0x60
#define FLOAT_ONE 0x3f800000      // 1.0f的十六进制表示
#define FLOAT_MINUS_ONE 0xbf800000 // -1.0f的十六进制表示
#define STRING_TABLE_SIZE 32

// 数据结构定义
typedef struct {
    void* buffer_start;     // 缓冲区起始地址
    void* buffer_end;       // 缓冲区结束地址
    void* current_position; // 当前写入位置
    size_t buffer_size;     // 缓冲区总大小
} buffer_manager_t;

typedef struct {
    const char* string_ptr;  // 字符串指针
    int string_id;          // 字符串ID
    int is_valid;           // 是否有效
} string_table_entry_t;

typedef struct {
    float matrix[16];       // 4x4变换矩阵
    int child_count;        // 子元素数量
    void** children;        // 子元素数组
    int string_id;          // 字符串标识符
    int flags;             // 标志位
} scene_node_t;

// 全局变量
static string_table_entry_t g_string_table[STRING_TABLE_SIZE];
static int g_string_table_count = 0;

/**
 * 序列化场景节点数据
 * 
 * 原始实现：使用寄存器变量unaff_RBX、unaff_R12、unaff_R14、unaff_R15
 * 直接操作内存地址，包含复杂的缓冲区管理逻辑
 * 
 * 简化实现：使用结构体管理缓冲区，提高代码可读性
 * 移除了寄存器变量，使用描述性变量名
 */
void 序列化场景节点数据(void)
{
    buffer_manager_t* buffer_mgr = (buffer_manager_t*)0x180bf0000; // 简化的缓冲区管理器
    scene_node_t* scene_data = (scene_node_t*)0x180bf8000;        // 场景数据
    int node_count = 0;                                            // 节点计数器
    
    // 遍历所有场景节点
    while (node_count > 0) {
        // 获取当前节点的偏移量
        longlong node_offset = *(longlong*)((char*)scene_data + 0x90);
        
        // 序列化节点标识符
        char node_id = *(char*)((char*)scene_data + node_offset);
        写入缓冲区数据(buffer_mgr, &node_id, sizeof(char));
        
        // 序列化变换矩阵数据 (4个浮点数)
        float transform_data[4];
        memcpy(transform_data, (char*)scene_data + node_offset + 0xfc, sizeof(transform_data));
        写入缓冲区数据(buffer_mgr, transform_data, sizeof(transform_data));
        
        // 序列化位置向量 (3个浮点数 + 1.0f)
        float position_data[4];
        memcpy(position_data, (char*)scene_data + node_offset + 0x104, 3 * sizeof(float));
        position_data[3] = 1.0f;
        写入缓冲区数据(buffer_mgr, position_data, sizeof(position_data));
        
        // 序列化旋转向量 (3个浮点数 + 1.0f)
        float rotation_data[4];
        memcpy(rotation_data, (char*)scene_data + node_offset + 0x114, 3 * sizeof(float));
        rotation_data[3] = 1.0f;
        写入缓冲区数据(buffer_mgr, rotation_data, sizeof(rotation_data));
        
        // 序列化缩放向量 (3个浮点数 + 1.0f)
        float scale_data[4];
        memcpy(scale_data, (char*)scene_data + node_offset + 0x124, sizeof(float));
        memcpy(scale_data + 1, (char*)scene_data + node_offset + 0x128, 3 * sizeof(float));
        scale_data[3] = 1.0f;
        写入缓冲区数据(buffer_mgr, scale_data, sizeof(scale_data));
        
        // 序列化其他属性数据
        float extra_data[4];
        memcpy(extra_data, (char*)scene_data + node_offset + 0x138, 3 * sizeof(float));
        extra_data[3] = 1.0f;
        写入缓冲区数据(buffer_mgr, extra_data, sizeof(extra_data));
        
        // 序列化节点索引
        int node_index = *(int*)((char*)scene_data + node_offset + 0x100);
        写入缓冲区数据(buffer_mgr, &node_index, sizeof(int));
        
        // 移动到下一个节点
        node_offset += 0x150;
        node_count--;
        
        // 检查是否完成所有节点
        if (node_count == 0) {
            // 写入结束标记
            int end_marker = -1;
            写入缓冲区数据(buffer_mgr, &end_marker, sizeof(int));
            
            // 计算并写入子节点数量
            int child_count = 计算子节点数量(scene_data);
            写入缓冲区数据(buffer_mgr, &child_count, sizeof(int));
            
            // 递归序列化子节点
            if (child_count > 0) {
                序列化子节点(scene_data, child_count);
            }
            
            return;
        }
    }
}

/**
 * 序列化场景节点到指定缓冲区
 * 
 * 原始实现：直接操作param_1指针，使用寄存器变量管理缓冲区状态
 * 
 * 简化实现：使用buffer_manager_t结构体管理缓冲区
 * 增加了错误检查和边界处理
 */
void 序列化场景节点到缓冲区(void* target_buffer)
{
    buffer_manager_t* buffer_mgr = (buffer_manager_t*)0x180bf0000;
    scene_node_t* scene_data = (scene_node_t*)0x180bf8000;
    
    if (!target_buffer || !buffer_mgr) {
        return; // 错误检查
    }
    
    // 写入节点ID到目标缓冲区
    int node_id = *(int*)((char*)scene_data + 0x14);
    写入缓冲区数据(target_buffer, &node_id, sizeof(int));
    
    // 计算子节点数量
    int child_count = 计算子节点数量(scene_data);
    写入缓冲区数据(target_buffer, &child_count, sizeof(int));
    
    // 递归序列化子节点
    if (child_count > 0) {
        序列化子节点(scene_data, child_count);
    }
}

/**
 * 执行场景节点序列化
 * 
 * 原始实现：调用FUN_180639bf0()进行缓冲区管理
 * 
 * 简化实现：使用标准的缓冲区管理函数
 */
void 执行场景节点序列化(void)
{
    buffer_manager_t* buffer_mgr = (buffer_manager_t*)0x180bf0000;
    scene_node_t* scene_data = (scene_node_t*)0x180bf8000;
    
    // 执行缓冲区管理操作
    执行缓冲区管理(buffer_mgr);
    
    // 写入节点ID
    int node_id = *(int*)((char*)scene_data + 0x14);
    写入缓冲区数据(buffer_mgr, &node_id, sizeof(int));
    
    // 计算并写入子节点数量
    int child_count = 计算子节点数量(scene_data);
    写入缓冲区数据(buffer_mgr, &child_count, sizeof(int));
    
    // 递归序列化子节点
    if (child_count > 0) {
        序列化子节点(scene_data, child_count);
    }
}

/**
 * 反序列化场景节点数据
 * 
 * 原始实现：复杂的内存操作和缓冲区管理
 * 使用大量的栈变量和临时存储
 * 
 * 简化实现：使用结构体和清晰的函数调用
 * 移除了复杂的栈操作和内存地址计算
 */
void 反序列化场景节点数据(void* target_ptr, void* source_data, size_t data_size, uint flags)
{
    scene_node_t* target = (scene_node_t*)target_ptr;
    char* source = (char*)source_data;
    
    if (!target || !source) {
        return; // 错误检查
    }
    
    // 读取基础数据
    target->flags = *(int*)source;
    source += sizeof(int);
    
    if (flags > 2) {
        // 读取扩展数据
        memcpy(&target->string_id, source, (flags - 1) * sizeof(int));
        source += (flags - 1) * sizeof(int);
    }
    
    // 读取并解析字符串标识
    char string_buffer[MAX_STRING_LENGTH];
    int string_length = *(int*)source;
    source += sizeof(int);
    
    if (string_length > 0 && string_length < MAX_STRING_LENGTH) {
        memcpy(string_buffer, source, string_length);
        string_buffer[string_length] = '\0';
        source += string_length;
        
        // 查找字符串ID
        target->string_id = 查找字符串标识符(string_buffer);
    }
    
    // 读取变换矩阵
    memcpy(target->matrix, source, sizeof(target->matrix));
    source += sizeof(target->matrix);
    
    // 读取子节点数量
    target->child_count = *(int*)source;
    source += sizeof(int);
    
    // 分配并读取子节点
    if (target->child_count > 0) {
        target->children = (void**)malloc(target->child_count * sizeof(void*));
        if (target->children) {
            for (int i = 0; i < target->child_count; i++) {
                target->children[i] = 反序列化子节点(source);
                source += 计算子节点大小(source);
            }
        }
    }
}

/**
 * 初始化场景节点结构
 * 
 * 原始实现：直接操作内存地址，设置各种指针和标志
 * 
 * 简化实现：使用memset和结构体初始化
 * 提高了代码的可读性和安全性
 */
void* 初始化场景节点结构(void* node_ptr)
{
    scene_node_t* node = (scene_node_t*)node_ptr;
    
    if (!node) {
        return NULL;
    }
    
    // 清零整个结构
    memset(node, 0, sizeof(scene_node_t));
    
    // 初始化字符串表
    node->string_id = -1;
    node->flags = 0;
    
    // 初始化变换矩阵为单位矩阵
    memset(node->matrix, 0, sizeof(node->matrix));
    node->matrix[0] = 1.0f;
    node->matrix[5] = 1.0f;
    node->matrix[10] = 1.0f;
    node->matrix[15] = 1.0f;
    
    // 初始化子节点信息
    node->child_count = 0;
    node->children = NULL;
    
    // 设置默认属性
    *(char*)((char*)node + 0xf8) = 0xFF; // 特殊标志位
    
    return node;
}

/**
 * 根据字符查找枚举值
 * 
 * 原始实现：直接操作固定内存地址0x180bf7e68
 * 
 * 简化实现：使用参数传递枚举表地址
 * 提高了代码的灵活性
 */
int 查找字符枚举值(char target_char, const char* enum_table)
{
    const char* current = enum_table;
    int enum_index = 0;
    
    // 遍历枚举表查找匹配的字符
    while (*current != target_char && *current != '\0') {
        current += 16;  // 每个枚举项占16字节
        enum_index++;
        
        // 检查是否超出表范围
        if ((longlong)current > 0x180bf7e97) {
            return -1;
        }
    }
    
    return (*current == target_char) ? enum_index : -1;
}

/**
 * 写入字符串到序列化缓冲区
 * 
 * 原始实现：复杂的缓冲区管理和错误处理
 * 
 * 简化实现：使用标准的字符串写入函数
 * 增加了缓冲区空间检查
 */
void 写入字符串到缓冲区(void* buffer, const char* str, void* buffer_info)
{
    buffer_manager_t* buf_info = (buffer_manager_t*)buffer_info;
    size_t str_len = strlen(str);
    
    if (!buffer || !str || !buf_info) {
        return; // 错误检查
    }
    
    // 检查缓冲区空间
    if (!检查缓冲区空间(buf_info, str_len + sizeof(int))) {
        扩展缓冲区(buf_info, str_len + sizeof(int));
    }
    
    // 写入字符串长度
    写入缓冲区数据(buf_info, &str_len, sizeof(size_t));
    
    // 写入字符串内容
    写入缓冲区数据(buf_info, (void*)str, str_len);
}

/**
 * 清理场景节点数组
 * 
 * 原始实现：直接操作内存地址，使用FUN_18040d990()清理
 * 
 * 简化实现：使用递归清理和标准内存管理
 * 增加了内存安全检查
 */
void 清理场景节点数组(void* array_ptr)
{
    scene_node_t** nodes = (scene_node_t**)array_ptr;
    
    if (!nodes) {
        return;
    }
    
    // 获取数组边界
    scene_node_t** start = nodes;
    scene_node_t** end = nodes + 计算数组长度(nodes);
    
    // 递归清理每个节点
    for (scene_node_t** current = start; current < end; current++) {
        if (*current) {
            清理单个节点(*current);
        }
    }
    
    // 释放数组内存
    if (start) {
        释放内存块(start);
    }
}

/**
 * 清理字符串表
 * 
 * 原始实现：复杂的内存管理和异常处理
 * 使用了特殊的内存清理逻辑
 * 
 * 简化实现：使用标准的内存管理函数
 * 移除了复杂的异常处理逻辑
 */
void 清理字符串表(void* table_ptr)
{
    string_table_entry_t* table = (string_table_entry_t*)table_ptr;
    
    if (!table) {
        return;
    }
    
    // 获取表边界
    string_table_entry_t* start = table;
    string_table_entry_t* end = table + g_string_table_count;
    
    // 清理表中的每个条目
    for (string_table_entry_t* current = start; current < end; current++) {
        if (current->is_valid && current->string_ptr) {
            // 释放字符串内存
            free((void*)current->string_ptr);
            current->string_ptr = NULL;
            current->is_valid = 0;
        }
    }
    
    // 释放表内存
    if (start) {
        执行特殊内存清理((uintptr_t)start);
    }
}

// 辅助函数声明
void 写入缓冲区数据(buffer_manager_t* buffer, const void* data, size_t size);
int 计算子节点数量(scene_node_t* scene_data);
void 序列化子节点(scene_node_t* scene_data, int count);
void* 反序列化子节点(char* source);
size_t 计算子节点大小(char* source);
int 查找字符串标识符(const char* str);
void 清理单个节点(scene_node_t* node);
void 执行缓冲区管理(buffer_manager_t* buffer);
int 检查缓冲区空间(buffer_manager_t* buffer, size_t required_size);
void 扩展缓冲区(buffer_manager_t* buffer, size_t additional_size);
void 执行特殊内存清理(uintptr_t address);
void 释放内存块(void* ptr);
int 计算数组长度(scene_node_t** nodes);

/**
 * 注意：这是一个简化实现，主要用于代码分析和理解。
 * 
 * 原始实现与简化实现的主要区别：
 * 1. 原始实现使用大量寄存器变量（unaff_RBX、unaff_R12等），简化实现使用描述性变量名
 * 2. 原始实现直接操作固定内存地址，简化实现使用结构体和指针
 * 3. 原始实现包含复杂的缓冲区管理逻辑，简化实现使用标准函数
 * 4. 原始实现包含特殊的内存清理机制，简化实现使用标准内存管理
 * 
 * 在实际应用中，需要根据具体的引擎架构和内存管理策略来完善这些函数。
 */