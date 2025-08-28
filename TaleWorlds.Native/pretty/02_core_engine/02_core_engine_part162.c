#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part162.c - 核心引擎边界框计算模块

// 全局变量和常量定义
// system_memory_pool_ptr - 内存分配器/池管理器
#define MEMORY_POOL_MANAGER ((void *)0x180c8ed18)
// 边界框相关偏移量
#define BBOX_MIN_X_OFFSET (-0x79)
#define BBOX_MIN_Y_OFFSET (-0x75)
#define BBOX_MIN_Z_OFFSET (-0x71)
#define BBOX_MAX_X_OFFSET (-0x69)
#define BBOX_MAX_Y_OFFSET (-0x65)
#define BBOX_MAX_Z_OFFSET (-0x61)
#define BBOX_RESULT_OFFSET (-0x49)
#define BBOX_RESULT_Y_OFFSET (-0x45)
#define BBOX_RESULT_Z_OFFSET (-0x41)
#define BBOX_TEMP_OFFSET (-0x59)
#define BBOX_TEMP_Y_OFFSET (-0x55)
#define BBOX_TEMP_Z_OFFSET (-0x51)
// 空间索引结构体偏移量
#define SPATIAL_INDEX_DATA_OFFSET 0x20
#define SPATIAL_INDEX_SIZE_OFFSET 0x28
#define SPATIAL_INDEX_RESULT_OFFSET 0xf8
#define SPATIAL_INDEX_BLOCK_SIZE 0x30
#define SPATIAL_INDEX_SMALL_BLOCK_SIZE 0x20
#define SPATIAL_INDEX_LARGE_BLOCK_SIZE 0x88
#define SPATIAL_NODE_KEY_OFFSET 0x20
#define SPATIAL_NODE_LEFT_OFFSET 0x0
#define SPATIAL_NODE_RIGHT_OFFSET 0x8
#define SPATIAL_NODE_ROOT_OFFSET 0x10
#define SPATIAL_NODE_TYPE_OFFSET 0x14

/**
 * 计算边界框的最小最大值
 * @param count 元素数量
 * @param data_ptr 数据指针
 * @param float_array 浮点数组
 */
void calculate_bounding_box_minmax(int count, unsigned long long data_ptr, float *float_array)
{
    float value1;
    float value2;
    float value3;
    float value4;
    float value5;
    float value6;
    float value7;
    float value8;
    float value9;
    float value10;
    float value11;
    float value12;
    float value13;
    float value14;
    float value15;
    float value16;
    float value17;
    float value18;
    float value19;
    float value20;
    float value21;
    float value22;
    unsigned int temp1;
    unsigned int temp2;
    unsigned int temp3;
    unsigned int temp4;
    
    do {
        value13 = *float_array;
        value16 = float_array[1];
        value12 = float_array[5];
        value14 = float_array[3];
        value11 = value16;
        if (value12 <= value16) {
            value11 = value12;
        }
        value15 = float_array[2];
        value22 = float_array[7];
        value1 = float_array[6];
        value21 = value14;
        if (value22 <= value14) {
            value21 = value22;
        }
        value10 = value15;
        if (value1 <= value15) {
            value10 = value1;
        }
        
        // 计算最小值
        if (*(float *)(data_ptr - 0x79) <= value11 - value13) {
            *(float *)(data_ptr - 0x49) = *(float *)(data_ptr - 0x79);
        }
        else {
            *(float *)(data_ptr - 0x49) = value11 - value13;
        }
        
        if (*(float *)(data_ptr - 0x75) <= value10 - value13) {
            *(float *)(data_ptr - 0x45) = *(float *)(data_ptr - 0x75);
        }
        else {
            *(float *)(data_ptr - 0x45) = value10 - value13;
        }
        
        if (*(float *)(data_ptr - 0x71) <= value21 - value13) {
            *(float *)(data_ptr - 0x41) = *(float *)(data_ptr - 0x71);
        }
        else {
            *(float *)(data_ptr - 0x41) = value21 - value13;
        }
        
        if (value16 <= value12) {
            value16 = value12;
        }
        if (value14 <= value22) {
            value14 = value22;
        }
        
        *(unsigned long long *)(data_ptr - 0x79) = *(unsigned long long *)(data_ptr - 0x49);
        *(unsigned long long *)(data_ptr - 0x71) = *(unsigned long long *)(data_ptr - 0x41);
        
        if (value15 <= value1) {
            value15 = value1;
        }
        
        // 计算最大值
        if (value16 + value13 <= *(float *)(data_ptr - 0x69)) {
            *(float *)(data_ptr - 0x59) = *(float *)(data_ptr - 0x69);
        }
        else {
            *(float *)(data_ptr - 0x59) = value16 + value13;
        }
        
        if (value15 + value13 <= *(float *)(data_ptr - 0x65)) {
            *(float *)(data_ptr - 0x55) = *(float *)(data_ptr - 0x65);
        }
        else {
            *(float *)(data_ptr - 0x55) = value15 + value13;
        }
        
        if (value14 + value13 <= *(float *)(data_ptr - 0x61)) {
            *(float *)(data_ptr - 0x51) = *(float *)(data_ptr - 0x61);
        }
        else {
            *(float *)(data_ptr - 0x51) = value14 + value13;
        }
        
        temp1 = *(unsigned int *)(data_ptr - 0x59);
        temp2 = *(unsigned int *)(data_ptr - 0x55);
        temp3 = *(unsigned int *)(data_ptr - 0x51);
        temp4 = *(unsigned int *)(data_ptr - 0x4d);
        count = count + 1;
        float_array = float_array + 0xc;
        *(unsigned int *)(data_ptr - 0x69) = temp1;
        *(unsigned int *)(data_ptr - 0x65) = temp2;
        *(unsigned int *)(data_ptr - 0x61) = temp3;
        *(unsigned int *)(data_ptr - 0x5d) = temp4;
    } while ((unsigned long long)(long long)count < data_ptr);
    
    // 处理剩余数据
    long long base_ptr = *(long long *)(data_ptr + 0x20);
    unsigned long long remaining_count = *(long long *)(data_ptr + 0x28) - base_ptr >> 5;
    unsigned long long offset = data_ptr;
    
    if (remaining_count != 0) {
        do {
            value13 = *(float *)(base_ptr + offset);
            value16 = *(float *)(base_ptr + 4 + offset);
            value12 = *(float *)(base_ptr + 8 + offset);
            value14 = *(float *)(base_ptr + 0xc + offset);
            value22 = value16 - value13;
            value11 = value12 - value13;
            value15 = value14 - value13;
            
            // 计算最小值
            if (*(float *)(data_ptr - 0x79) <= value22) {
                *(float *)(data_ptr - 0x49) = *(float *)(data_ptr - 0x79);
            }
            else {
                *(float *)(data_ptr - 0x49) = value22;
            }
            
            if (*(float *)(data_ptr - 0x75) <= value11) {
                *(float *)(data_ptr - 0x45) = *(float *)(data_ptr - 0x75);
            }
            else {
                *(float *)(data_ptr - 0x45) = value11;
            }
            
            if (*(float *)(data_ptr - 0x71) <= value15) {
                *(float *)(data_ptr - 0x41) = *(float *)(data_ptr - 0x71);
            }
            else {
                *(float *)(data_ptr - 0x41) = value15;
            }
            
            value16 = value13 + value16;
            *(unsigned long long *)(data_ptr - 0x79) = *(unsigned long long *)(data_ptr - 0x49);
            *(unsigned long long *)(data_ptr - 0x71) = *(unsigned long long *)(data_ptr - 0x41);
            
            // 计算最大值
            if (value16 <= *(float *)(data_ptr - 0x69)) {
                *(float *)(data_ptr - 0x59) = *(float *)(data_ptr - 0x69);
            }
            else {
                *(float *)(data_ptr - 0x59) = value16;
            }
            
            value12 = value13 + value12;
            value13 = value13 + value14;
            
            if (value12 <= *(float *)(data_ptr - 0x65)) {
                *(float *)(data_ptr - 0x55) = *(float *)(data_ptr - 0x65);
            }
            else {
                *(float *)(data_ptr - 0x55) = value12;
            }
            
            if (value13 <= *(float *)(data_ptr - 0x61)) {
                *(float *)(data_ptr - 0x51) = *(float *)(data_ptr - 0x61);
            }
            else {
                *(float *)(data_ptr - 0x51) = value13;
            }
            
            temp1 = *(unsigned int *)(data_ptr - 0x59);
            temp2 = *(unsigned int *)(data_ptr - 0x55);
            temp3 = *(unsigned int *)(data_ptr - 0x51);
            temp4 = *(unsigned int *)(data_ptr - 0x4d);
            unsigned int index = (unsigned int)offset + 1;
            offset = offset + 0x20;
            *(unsigned int *)(data_ptr - 0x69) = temp1;
            *(unsigned int *)(data_ptr - 0x65) = temp2;
            *(unsigned int *)(data_ptr - 0x61) = temp3;
            *(unsigned int *)(data_ptr - 0x5d) = temp4;
            offset = (unsigned long long)index;
        } while ((unsigned long long)(long long)(int)index < remaining_count);
    }
    
    // 保存结果
    *(unsigned int *)(data_ptr - 0x39) = *(unsigned int *)(data_ptr - 0x79);
    *(unsigned int *)(data_ptr - 0x35) = *(unsigned int *)(data_ptr - 0x75);
    *(unsigned int *)(data_ptr - 0x31) = *(unsigned int *)(data_ptr - 0x71);
    *(unsigned int *)(data_ptr - 0x2d) = *(unsigned int *)(data_ptr - 0x6d);
    *(unsigned int *)(data_ptr - 0x29) = temp1;
    *(unsigned int *)(data_ptr - 0x25) = temp2;
    *(unsigned int *)(data_ptr - 0x21) = temp3;
    *(unsigned int *)(data_ptr - 0x1d) = temp4;
    
    FUN_1800b9f60(data_ptr - 0x39);
    
    // 复制结果到目标位置
    unsigned long long temp_value1 = *(unsigned long long *)(data_ptr - 0x31);
    unsigned int result_value = *(unsigned int *)(data_ptr - 9);
    unsigned long long temp_value2 = *(unsigned long long *)(data_ptr - 0x29);
    unsigned long long temp_value3 = *(unsigned long long *)(data_ptr - 0x21);
    
    *(unsigned long long *)(data_ptr + 0xf8) = *(unsigned long long *)(data_ptr - 0x39);
    *(unsigned long long *)(data_ptr + 0x100) = temp_value1;
    
    unsigned long long temp_value4 = *(unsigned long long *)(data_ptr - 0x19);
    unsigned long long temp_value5 = *(unsigned long long *)(data_ptr - 0x11);
    
    *(unsigned long long *)(data_ptr + 0x108) = temp_value2;
    *(unsigned long long *)(data_ptr + 0x110) = temp_value3;
    *(unsigned long long *)(data_ptr + 0x118) = temp_value4;
    *(unsigned long long *)(data_ptr + 0x120) = temp_value5;
    *(unsigned int *)(data_ptr + 0x128) = result_value;
    
    return;
}

/**
 * 计算边界框的简化版本
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 */
void calculate_bounding_box_simple(unsigned long long param1, unsigned long long param2, unsigned long long param3)
{
    float value1;
    float value2;
    float value3;
    float value4;
    float value5;
    float value6;
    float value7;
    float value8;
    float value9;
    float value10;
    float value11;
    float value12;
    float value13;
    float value14;
    float value15;
    float value16;
    float value17;
    unsigned int temp1;
    unsigned int temp2;
    unsigned int temp3;
    unsigned int temp4;
    
    temp1 = (unsigned int)(param3 >> 0x20);
    temp2 = (unsigned int)param3;
    
    long long base_ptr = *(long long *)(param2 + 0x20);
    unsigned long long count = *(long long *)(param2 + 0x28) - base_ptr >> 5;
    unsigned long long offset = param1;
    
    if (count != 0) {
        do {
            value12 = *(float *)(base_ptr + offset);
            value14 = *(float *)(base_ptr + 4 + offset);
            value11 = *(float *)(base_ptr + 8 + offset);
            value1 = *(float *)(base_ptr + 0xc + offset);
            value17 = value14 - value12;
            value10 = value11 - value12;
            value13 = value1 - value12;
            
            // 计算最小值
            if (*(float *)(param1 - 0x79) <= value17) {
                *(float *)(param1 - 0x49) = *(float *)(param1 - 0x79);
            }
            else {
                *(float *)(param1 - 0x49) = value17;
            }
            
            if (*(float *)(param1 - 0x75) <= value10) {
                *(float *)(param1 - 0x45) = *(float *)(param1 - 0x75);
            }
            else {
                *(float *)(param1 - 0x45) = value10;
            }
            
            if (*(float *)(param1 - 0x71) <= value13) {
                *(float *)(param1 - 0x41) = *(float *)(param1 - 0x71);
            }
            else {
                *(float *)(param1 - 0x41) = value13;
            }
            
            value14 = value12 + value14;
            *(unsigned long long *)(param1 - 0x79) = *(unsigned long long *)(param1 - 0x49);
            *(unsigned long long *)(param1 - 0x71) = *(unsigned long long *)(param1 - 0x41);
            
            // 计算最大值
            if (value14 <= *(float *)(param1 - 0x69)) {
                *(float *)(param1 - 0x59) = *(float *)(param1 - 0x69);
            }
            else {
                *(float *)(param1 - 0x59) = value14;
            }
            
            value11 = value12 + value11;
            value12 = value12 + value1;
            
            if (value11 <= *(float *)(param1 - 0x65)) {
                *(float *)(param1 - 0x55) = *(float *)(param1 - 0x65);
            }
            else {
                *(float *)(param1 - 0x55) = value11;
            }
            
            if (value12 <= *(float *)(param1 - 0x61)) {
                *(float *)(param1 - 0x51) = *(float *)(param1 - 0x61);
            }
            else {
                *(float *)(param1 - 0x51) = value12;
            }
            
            temp2 = *(unsigned int *)(param1 - 0x59);
            temp1 = *(unsigned int *)(param1 - 0x55);
            temp3 = *(unsigned int *)(param1 - 0x51);
            temp4 = *(unsigned int *)(param1 - 0x4d);
            unsigned int index = (unsigned int)offset + 1;
            offset = offset + 0x20;
            *(unsigned int *)(param1 - 0x69) = temp2;
            *(unsigned int *)(param1 - 0x65) = temp1;
            *(unsigned int *)(param1 - 0x61) = temp3;
            *(unsigned int *)(param1 - 0x5d) = temp4;
            offset = (unsigned long long)index;
        } while ((unsigned long long)(long long)(int)index < count);
    }
    
    // 保存结果
    *(unsigned int *)(param1 - 0x39) = *(unsigned int *)(param1 - 0x79);
    *(unsigned int *)(param1 - 0x35) = *(unsigned int *)(param1 - 0x75);
    *(unsigned int *)(param1 - 0x31) = *(unsigned int *)(param1 - 0x71);
    *(unsigned int *)(param1 - 0x2d) = *(unsigned int *)(param1 - 0x6d);
    *(unsigned int *)(param1 - 0x29) = temp2;
    *(unsigned int *)(param1 - 0x25) = temp1;
    *(unsigned int *)(param1 - 0x21) = temp3;
    *(unsigned int *)(param1 - 0x1d) = temp4;
    
    FUN_1800b9f60(param1 - 0x39);
    
    // 复制结果到目标位置
    unsigned long long temp_value1 = *(unsigned long long *)(param1 - 0x31);
    unsigned int result_value = *(unsigned int *)(param1 - 9);
    unsigned long long temp_value2 = *(unsigned long long *)(param1 - 0x29);
    unsigned long long temp_value3 = *(unsigned long long *)(param1 - 0x21);
    
    *(unsigned long long *)(param2 + 0xf8) = *(unsigned long long *)(param1 - 0x39);
    *(unsigned long long *)(param2 + 0x100) = temp_value1;
    
    unsigned long long temp_value4 = *(unsigned long long *)(param1 - 0x19);
    unsigned long long temp_value5 = *(unsigned long long *)(param1 - 0x11);
    
    *(unsigned long long *)(param2 + 0x108) = temp_value2;
    *(unsigned long long *)(param2 + 0x110) = temp_value3;
    *(unsigned long long *)(param2 + 0x118) = temp_value4;
    *(unsigned long long *)(param2 + 0x120) = temp_value5;
    *(unsigned int *)(param2 + 0x128) = result_value;
    
    return;
}

/**
 * 处理空间分区数据
 * @param spatial_data 空间数据指针，包含三个数据块的信息
 * @param tree_node 树节点指针，用于构建空间索引树
 * 
 * 该函数处理三种不同大小的空间数据块：
 * 1. 主要数据块：0x30字节块，从spatial_data[0]开始
 * 2. 第二数据块：0x20字节块，从spatial_data[4]开始
 * 3. 第三数据块：0x88字节块，从spatial_data[8]开始，包含嵌套的子数据块
 * 
 * 每个数据块都通过二叉树索引结构进行组织，支持快速空间查询
 */
void process_spatial_partition_data(long long *spatial_data, unsigned long long *tree_node)
{
    long long *data_ptr;
    unsigned long long key_value;
    unsigned long long *node_ptr;
    unsigned long long *parent_ptr;
    long long start_addr;
    long long end_addr;
    int index;
    long long current_offset;
    unsigned long long flags;
    int sub_index;
    bool is_smaller;
    
    // 第一阶段：处理主要数据块（0x30字节块）
    start_addr = *spatial_data;                             // 数据块起始地址
    index = 0;                                               // 索引计数器
    current_offset = spatial_data[1] - start_addr >> 0x3f;  // 计算偏移量
    
    // 检查是否有主要数据块需要处理
    if ((spatial_data[1] - start_addr) / SPATIAL_INDEX_BLOCK_SIZE + current_offset != current_offset) {
        current_offset = 0;
        do {
            // 从数据块中提取键值（位于块内0x28偏移处）
            key_value = *(unsigned long long *)(start_addr + 0x28 + current_offset);
            is_smaller = true;
            parent_ptr = (unsigned long long *)tree_node[2];  // 树的根节点
            node_ptr = tree_node;                              // 当前节点
            
            // 在二叉搜索树中查找合适的插入位置
            while (parent_ptr != (unsigned long long *)0x0) {
                is_smaller = key_value < (unsigned long long)parent_ptr[4];  // 比较键值
                node_ptr = parent_ptr;  // 保存父节点
                if (is_smaller) {
                    parent_ptr = (unsigned long long *)parent_ptr[SPATIAL_NODE_RIGHT_OFFSET];  // 右子树
                }
                else {
                    parent_ptr = (unsigned long long *)*parent_ptr;  // 左子树
                }
            }
            
            node_ptr = node_ptr;  // 最终位置
            if (is_smaller) {
                if (node_ptr == (unsigned long long *)tree_node[SPATIAL_NODE_ROOT_OFFSET]) {
                    goto insert_new_node_1;  // 需要插入新节点
                }
                node_ptr = (unsigned long long *)func_0x00018066b9a0(node_ptr);  // 获取前驱节点
            }
            
            // 检查是否需要插入新节点
            if ((unsigned long long)node_ptr[4] < key_value) {
            insert_new_node_1:
                // 分配新节点内存
                start_addr = CoreEngineMemoryPoolAllocator(MEMORY_POOL_MANAGER, SPATIAL_INDEX_BLOCK_SIZE, *(unsigned char *)(tree_node + SPATIAL_NODE_TYPE_OFFSET));
                *(unsigned long long *)(start_addr + SPATIAL_NODE_KEY_OFFSET) = key_value;  // 设置键值
                
                // 确定插入位置（左子树还是右子树）
                if ((node_ptr == tree_node) || (key_value < (unsigned long long)node_ptr[4])) {
                    flags = 0;  // 左子树
                }
                else {
                    flags = 1;  // 右子树
                }
                
                // 插入新节点到树中
                FUN_18066bdc0(start_addr, node_ptr, tree_node, flags);
            }
            
            start_addr = *spatial_data;  // 重新获取起始地址
            index = index + 1;            // 增加索引
            current_offset = current_offset + SPATIAL_INDEX_BLOCK_SIZE;  // 移动到下一个块
        } while ((unsigned long long)(long long)index < (unsigned long long)((spatial_data[1] - start_addr) / SPATIAL_INDEX_BLOCK_SIZE));
    }
    
    // 第二阶段：处理第二数据块（0x20字节块）
    start_addr = spatial_data[4];  // 第二数据块起始地址
    index = 0;
    // 检查是否有第二数据块需要处理
    if (spatial_data[5] - start_addr >> 5 != 0) {
        current_offset = 0;
        do {
            is_smaller = true;
            // 从第二数据块中提取键值（位于块内0x18偏移处）
            key_value = *(unsigned long long *)(start_addr + 0x18 + current_offset);
            parent_ptr = (unsigned long long *)tree_node[2];  // 树的根节点
            node_ptr = tree_node;                              // 当前节点
            
            // 在二叉搜索树中查找合适的插入位置
            while (parent_ptr != (unsigned long long *)0x0) {
                is_smaller = key_value < (unsigned long long)parent_ptr[4];  // 比较键值
                node_ptr = parent_ptr;  // 保存父节点
                if (is_smaller) {
                    parent_ptr = (unsigned long long *)parent_ptr[SPATIAL_NODE_RIGHT_OFFSET];  // 右子树
                }
                else {
                    parent_ptr = (unsigned long long *)*parent_ptr;  // 左子树
                }
            }
            
            node_ptr = node_ptr;  // 最终位置
            if (is_smaller) {
                if (node_ptr == (unsigned long long *)tree_node[SPATIAL_NODE_ROOT_OFFSET]) {
                    goto insert_new_node_2;  // 需要插入新节点
                }
                node_ptr = (unsigned long long *)func_0x00018066b9a0(node_ptr);  // 获取前驱节点
            }
            
            // 检查是否需要插入新节点
            if ((unsigned long long)node_ptr[4] < key_value) {
            insert_new_node_2:
                // 分配新节点内存
                start_addr = CoreEngineMemoryPoolAllocator(MEMORY_POOL_MANAGER, SPATIAL_INDEX_BLOCK_SIZE, *(unsigned char *)(tree_node + SPATIAL_NODE_TYPE_OFFSET));
                *(unsigned long long *)(start_addr + SPATIAL_NODE_KEY_OFFSET) = key_value;  // 设置键值
                
                // 确定插入位置（左子树还是右子树）
                if ((node_ptr == tree_node) || (key_value < (unsigned long long)node_ptr[4])) {
                    flags = 0;  // 左子树
                }
                else {
                    flags = 1;  // 右子树
                }
                
                // 插入新节点到树中
                FUN_18066bdc0(start_addr, node_ptr, tree_node, flags);
            }
            
            start_addr = spatial_data[4];  // 重新获取起始地址
            index = index + 1;            // 增加索引
            current_offset = current_offset + SPATIAL_INDEX_SMALL_BLOCK_SIZE;  // 移动到下一个块
        } while ((unsigned long long)(long long)index < (unsigned long long)(spatial_data[5] - start_addr >> 5));
    }
    
    // 第三阶段：处理第三数据块（0x88字节块，包含嵌套子数据块）
    start_addr = spatial_data[8];  // 第三数据块起始地址
    index = 0;
    current_offset = spatial_data[9] - start_addr >> 0x3f;  // 计算偏移量
    
    // 检查是否有第三数据块需要处理
    if ((spatial_data[9] - start_addr) / SPATIAL_INDEX_LARGE_BLOCK_SIZE + current_offset != current_offset) {
        current_offset = 0;
        do {
            // 每个大块包含一个子数据块数组
            end_addr = *(long long *)(current_offset + start_addr);      // 子数据块起始地址
            data_ptr = (long long *)(current_offset + start_addr);       // 子数据块指针
            sub_index = 0;                                              // 子数据块索引
            
            // 处理子数据块中的键值数组（每个键值8字节）
            if (data_ptr[1] - end_addr >> 3 != 0) {
                start_addr = 0;  // 重置为子数据块内的偏移量
                do {
                    is_smaller = true;
                    // 从子数据块中提取键值
                    key_value = *(unsigned long long *)(start_addr + end_addr);
                    parent_ptr = (unsigned long long *)tree_node[2];  // 树的根节点
                    node_ptr = tree_node;                              // 当前节点
                    
                    // 在二叉搜索树中查找合适的插入位置
                    while (parent_ptr != (unsigned long long *)0x0) {
                        is_smaller = key_value < (unsigned long long)parent_ptr[4];  // 比较键值
                        node_ptr = parent_ptr;  // 保存父节点
                        if (is_smaller) {
                            parent_ptr = (unsigned long long *)parent_ptr[SPATIAL_NODE_RIGHT_OFFSET];  // 右子树
                        }
                        else {
                            parent_ptr = (unsigned long long *)*parent_ptr;  // 左子树
                        }
                    }
                    
                    node_ptr = node_ptr;  // 最终位置
                    if (is_smaller) {
                        if (node_ptr == (unsigned long long *)tree_node[SPATIAL_NODE_ROOT_OFFSET]) {
                            goto insert_new_node_3;  // 需要插入新节点
                        }
                        node_ptr = (unsigned long long *)func_0x00018066b9a0(node_ptr);  // 获取前驱节点
                    }
                    
                    // 检查是否需要插入新节点
                    if ((unsigned long long)node_ptr[4] < key_value) {
                    insert_new_node_3:
                        // 分配新节点内存
                        start_addr = CoreEngineMemoryPoolAllocator(MEMORY_POOL_MANAGER, SPATIAL_INDEX_BLOCK_SIZE, *(unsigned char *)(tree_node + SPATIAL_NODE_TYPE_OFFSET));
                        *(unsigned long long *)(start_addr + SPATIAL_NODE_KEY_OFFSET) = key_value;  // 设置键值
                        
                        // 确定插入位置（左子树还是右子树）
                        if ((node_ptr == tree_node) || (key_value < (unsigned long long)node_ptr[4])) {
                            flags = 0;  // 左子树
                        }
                        else {
                            flags = 1;  // 右子树
                        }
                        
                        // 插入新节点到树中
                        FUN_18066bdc0(start_addr, node_ptr, tree_node, flags);
                    }
                    
                    end_addr = *data_ptr;  // 重新获取子数据块起始地址
                    sub_index = sub_index + 1;  // 增加子数据块索引
                    start_addr = start_addr + 8;  // 移动到下一个键值（8字节）
                } while ((unsigned long long)(long long)sub_index < (unsigned long long)(data_ptr[1] - end_addr >> 3));
            }
            
            index = index + 1;  // 增加大块索引
            current_offset = current_offset + SPATIAL_INDEX_LARGE_BLOCK_SIZE;  // 移动到下一个大块
            start_addr = spatial_data[8];  // 重新获取起始地址
        } while ((unsigned long long)(long long)index < (unsigned long long)((spatial_data[9] - start_addr) / SPATIAL_INDEX_LARGE_BLOCK_SIZE));
    }
    
    return;
}

// 函数说明：
// FUN_1800b9f60 - 边界框处理函数，用于处理计算出的边界框数据
// CoreEngineMemoryPoolAllocator - 内存分配函数，从内存池中分配指定大小的内存块
// FUN_18066b9a0 - 树节点操作函数，获取树节点的前驱或后继节点
// FUN_18066bdc0 - 树节点插入函数，将新节点插入到二叉搜索树中
// 
// 注意：这是一个简化实现，用于展示空间分区数据的基本处理逻辑。
// 实际的游戏引擎实现会更复杂，包含更多优化和错误处理。