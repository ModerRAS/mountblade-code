#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part162.c - 核心引擎边界框计算模块

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
 * @param spatial_data 空间数据指针
 * @param tree_node 树节点指针
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
    
    start_addr = *spatial_data;
    index = 0;
    current_offset = spatial_data[1] - start_addr >> 0x3f;
    
    // 处理主要数据块
    if ((spatial_data[1] - start_addr) / 0x30 + current_offset != current_offset) {
        current_offset = 0;
        do {
            key_value = *(unsigned long long *)(start_addr + 0x28 + current_offset);
            is_smaller = true;
            parent_ptr = (unsigned long long *)tree_node[2];
            node_ptr = tree_node;
            
            // 在树中查找合适位置
            while (parent_ptr != (unsigned long long *)0x0) {
                is_smaller = key_value < (unsigned long long)parent_ptr[4];
                node_ptr = parent_ptr;
                if (is_smaller) {
                    parent_ptr = (unsigned long long *)parent_ptr[1];
                }
                else {
                    parent_ptr = (unsigned long long *)*parent_ptr;
                }
            }
            
            node_ptr = node_ptr;
            if (is_smaller) {
                if (node_ptr == (unsigned long long *)tree_node[1]) {
                    goto insert_new_node_1;
                }
                node_ptr = (unsigned long long *)func_0x00018066b9a0(node_ptr);
            }
            
            if ((unsigned long long)node_ptr[4] < key_value) {
            insert_new_node_1:
                start_addr = FUN_18062b420(_DAT_180c8ed18, 0x28, *(unsigned char *)(tree_node + 5));
                *(unsigned long long *)(start_addr + 0x20) = key_value;
                
                if ((node_ptr == tree_node) || (key_value < (unsigned long long)node_ptr[4])) {
                    flags = 0;
                }
                else {
                    flags = 1;
                }
                
                // 插入新节点
                FUN_18066bdc0(start_addr, node_ptr, tree_node, flags);
            }
            
            start_addr = *spatial_data;
            index = index + 1;
            current_offset = current_offset + 0x30;
        } while ((unsigned long long)(long long)index < (unsigned long long)((spatial_data[1] - start_addr) / 0x30));
    }
    
    // 处理第二数据块
    start_addr = spatial_data[4];
    index = 0;
    if (spatial_data[5] - start_addr >> 5 != 0) {
        current_offset = 0;
        do {
            is_smaller = true;
            key_value = *(unsigned long long *)(start_addr + 0x18 + current_offset);
            parent_ptr = (unsigned long long *)tree_node[2];
            node_ptr = tree_node;
            
            while (parent_ptr != (unsigned long long *)0x0) {
                is_smaller = key_value < (unsigned long long)parent_ptr[4];
                node_ptr = parent_ptr;
                if (is_smaller) {
                    parent_ptr = (unsigned long long *)parent_ptr[1];
                }
                else {
                    parent_ptr = (unsigned long long *)*parent_ptr;
                }
            }
            
            node_ptr = node_ptr;
            if (is_smaller) {
                if (node_ptr == (unsigned long long *)tree_node[1]) {
                    goto insert_new_node_2;
                }
                node_ptr = (unsigned long long *)func_0x00018066b9a0(node_ptr);
            }
            
            if ((unsigned long long)node_ptr[4] < key_value) {
            insert_new_node_2:
                start_addr = FUN_18062b420(_DAT_180c8ed18, 0x28, *(unsigned char *)(tree_node + 5));
                *(unsigned long long *)(start_addr + 0x20) = key_value;
                
                if ((node_ptr == tree_node) || (key_value < (unsigned long long)node_ptr[4])) {
                    flags = 0;
                }
                else {
                    flags = 1;
                }
                
                FUN_18066bdc0(start_addr, node_ptr, tree_node, flags);
            }
            
            start_addr = spatial_data[4];
            index = index + 1;
            current_offset = current_offset + 0x20;
        } while ((unsigned long long)(long long)index < (unsigned long long)(spatial_data[5] - start_addr >> 5));
    }
    
    // 处理第三数据块
    start_addr = spatial_data[8];
    index = 0;
    current_offset = spatial_data[9] - start_addr >> 0x3f;
    
    if ((spatial_data[9] - start_addr) / 0x88 + current_offset != current_offset) {
        current_offset = 0;
        do {
            end_addr = *(long long *)(current_offset + start_addr);
            data_ptr = (long long *)(current_offset + start_addr);
            sub_index = 0;
            
            if (data_ptr[1] - end_addr >> 3 != 0) {
                start_addr = 0;
                do {
                    is_smaller = true;
                    key_value = *(unsigned long long *)(start_addr + end_addr);
                    parent_ptr = (unsigned long long *)tree_node[2];
                    node_ptr = tree_node;
                    
                    while (parent_ptr != (unsigned long long *)0x0) {
                        is_smaller = key_value < (unsigned long long)parent_ptr[4];
                        node_ptr = parent_ptr;
                        if (is_smaller) {
                            parent_ptr = (unsigned long long *)parent_ptr[1];
                        }
                        else {
                            parent_ptr = (unsigned long long *)*parent_ptr;
                        }
                    }
                    
                    node_ptr = node_ptr;
                    if (is_smaller) {
                        if (node_ptr == (unsigned long long *)tree_node[1]) {
                            goto insert_new_node_3;
                        }
                        node_ptr = (unsigned long long *)func_0x00018066b9a0(node_ptr);
                    }
                    
                    if ((unsigned long long)node_ptr[4] < key_value) {
                    insert_new_node_3:
                        start_addr = FUN_18062b420(_DAT_180c8ed18, 0x28, *(unsigned char *)(tree_node + 5));
                        *(unsigned long long *)(start_addr + 0x20) = key_value;
                        
                        if ((node_ptr == tree_node) || (key_value < (unsigned long long)node_ptr[4])) {
                            flags = 0;
                        }
                        else {
                            flags = 1;
                        }
                        
                        FUN_18066bdc0(start_addr, node_ptr, tree_node, flags);
                    }
                    
                    end_addr = *data_ptr;
                    sub_index = sub_index + 1;
                    start_addr = start_addr + 8;
                } while ((unsigned long long)(long long)sub_index < (unsigned long long)(data_ptr[1] - end_addr >> 3));
            }
            
            index = index + 1;
            current_offset = current_offset + 0x88;
            start_addr = spatial_data[8];
        } while ((unsigned long long)(long long)index < (unsigned long long)((spatial_data[9] - start_addr) / 0x88));
    }
    
    return;
}