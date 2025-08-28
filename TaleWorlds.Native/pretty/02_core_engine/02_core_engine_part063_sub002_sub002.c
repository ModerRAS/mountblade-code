/**
 * 核心引擎模块第63部分第2子部分第2子文件
 * 
 * 此文件属于核心引擎模块，包含引擎相关的字符串处理和数据结构操作功能。
 * 
 * 文件编号: 02_core_engine_part063_sub002_sub002.c
 * 功能数量: 15个函数
 */

#include "TaleWorlds.Native.Split.h"

/**
 * 空函数 - 可能是占位符或初始化函数
 */
void initialize_engine_placeholder(void)
{
    return;
}

/**
 * 在数据结构中查找匹配的字符串节点
 * @param data_structure 数据结构指针
 * @param search_context 搜索上下文
 * @return 找到的节点指针，未找到返回NULL
 */
uint64_t * find_string_match_node(uint64_t *data_structure, int64_t search_context)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int compare_result;
    uint64_t *next_node;
    uint64_t *current_node;
    uint64_t *previous_node;
    int64_t string_offset;
    int8_t stack_buffer[8];
    
    current_node = (uint64_t *)data_structure[2];
    previous_node = data_structure;
    if (current_node != (uint64_t *)0x0) {
        do {
            if (*(int *)(search_context + 0x10) == 0) {
                next_node = (uint64_t *)current_node[1];
                is_match = false;
            }
            else {
                if (*(int *)(current_node + 6) == 0) {
                    is_match = true;
                }
                else {
                    string_ptr = *(byte **)(search_context + 8);
                    string_offset = current_node[5] - (int64_t)string_ptr;
                    do {
                        compare_char = (uint)string_ptr[string_offset];
                        compare_result = *string_ptr - compare_char;
                        if (*string_ptr != compare_char) break;
                        string_ptr = string_ptr + 1;
                    } while (compare_char != 0);
                    is_match = 0 < compare_result;
                    if (compare_result < 1) {
                        next_node = (uint64_t *)current_node[1];
                        goto LAB_FOUND_MATCH;
                    }
                }
                next_node = (uint64_t *)*current_node;
            }
LAB_FOUND_MATCH:
            if (is_match) {
                current_node = previous_node;
            }
            previous_node = current_node;
            current_node = next_node;
        } while (next_node != (uint64_t *)0x0);
        current_node = (uint64_t *)0x0;
    }
    if (previous_node != data_structure) {
        if (*(int *)(previous_node + 6) == 0) {
LAB_RETURN_NODE:
            return previous_node + 8;
        }
        if (*(int *)(search_context + 0x10) != 0) {
            string_ptr = (byte *)previous_node[5];
            current_node = (uint64_t *)(*(int64_t *)(search_context + 8) - (int64_t)string_ptr);
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[(int64_t)current_node];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_NODE;
        }
    }
    result_ptr = (int64_t *)process_node_insertion(data_structure, stack_buffer, current_node, previous_node, search_context);
    return (uint64_t *)(*result_ptr + 0x40);
}

/**
 * 处理节点遍历和匹配的辅助函数
 * @param param1 参数1
 * @param search_context 搜索上下文
 * @param start_node 起始节点
 * @param end_node 结束节点
 * @return 处理结果指针
 */
uint64_t * process_node_traversal(uint64_t param1, int64_t search_context, uint64_t *start_node, uint64_t *end_node)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int compare_result;
    int64_t unaff_RBX;
    uint64_t *unaff_RSI;
    uint64_t *next_node;
    int64_t string_offset;
    
    do {
        if (*(int *)(search_context + 0x10) == 0) {
            next_node = (uint64_t *)start_node[1];
            is_match = false;
        }
        else {
            if (*(int *)(start_node + 6) == 0) {
                is_match = true;
            }
            else {
                string_ptr = *(byte **)(unaff_RBX + 8);
                string_offset = start_node[5] - (int64_t)string_ptr;
                do {
                    compare_char = (uint)string_ptr[string_offset];
                    compare_result = *string_ptr - compare_char;
                    if (*string_ptr != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                is_match = 0 < compare_result;
                if (compare_result < 1) {
                    next_node = (uint64_t *)start_node[1];
                    goto LAB_FOUND_MATCH;
                }
            }
            next_node = (uint64_t *)*start_node;
        }
LAB_FOUND_MATCH:
        if (is_match) {
            start_node = end_node;
        }
        end_node = start_node;
        start_node = next_node;
    } while (next_node != (uint64_t *)0x0);
    if (end_node != unaff_RSI) {
        if (*(int *)(end_node + 6) == 0) {
LAB_RETURN_NODE:
            return end_node + 8;
        }
        if (*(int *)(unaff_RBX + 0x10) != 0) {
            string_ptr = (byte *)end_node[5];
            string_offset = *(int64_t *)(unaff_RBX + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_NODE;
        }
    }
    result_ptr = (int64_t *)process_node_insertion();
    return (uint64_t *)(*result_ptr + 0x40);
}

/**
 * 计算节点偏移量的辅助函数
 * @return 计算得到的偏移量
 */
int64_t calculate_node_offset(void)
{
    byte current_char;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int64_t unaff_RBX;
    int64_t unaff_RSI;
    int64_t string_offset;
    int64_t in_R9;
    
    if (in_R9 != unaff_RSI) {
        if (*(int *)(in_R9 + 0x30) == 0) {
LAB_RETURN_OFFSET:
            return in_R9 + 0x40;
        }
        if (*(int *)(unaff_RBX + 0x10) != 0) {
            string_ptr = *(byte **)(in_R9 + 0x28);
            string_offset = *(int64_t *)(unaff_RBX + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_OFFSET;
        }
    }
    result_ptr = (int64_t *)process_node_insertion();
    return *result_ptr + 0x40;
}

/**
 * 在数据结构中查找并处理字符串匹配
 * @param data_structure 数据结构指针
 * @param search_context 搜索上下文
 * @return 处理结果指针
 */
uint64_t * find_and_process_string_match(uint64_t *data_structure, int64_t search_context)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int compare_result;
    uint64_t *next_node;
    uint64_t *current_node;
    uint64_t *previous_node;
    int64_t string_offset;
    int8_t stack_buffer[8];
    
    current_node = (uint64_t *)data_structure[2];
    previous_node = data_structure;
    if (current_node != (uint64_t *)0x0) {
        do {
            if (*(int *)(search_context + 0x10) == 0) {
                next_node = (uint64_t *)current_node[1];
                is_match = false;
            }
            else {
                if (*(int *)(current_node + 6) == 0) {
                    is_match = true;
                }
                else {
                    string_ptr = *(byte **)(search_context + 8);
                    string_offset = current_node[5] - (int64_t)string_ptr;
                    do {
                        compare_char = (uint)string_ptr[string_offset];
                        compare_result = *string_ptr - compare_char;
                        if (*string_ptr != compare_char) break;
                        string_ptr = string_ptr + 1;
                    } while (compare_char != 0);
                    is_match = 0 < compare_result;
                    if (compare_result < 1) {
                        next_node = (uint64_t *)current_node[1];
                        goto LAB_FOUND_MATCH;
                    }
                }
                next_node = (uint64_t *)*current_node;
            }
LAB_FOUND_MATCH:
            if (is_match) {
                current_node = previous_node;
            }
            previous_node = current_node;
            current_node = next_node;
        } while (next_node != (uint64_t *)0x0);
        current_node = (uint64_t *)0x0;
    }
    if (previous_node != data_structure) {
        if (*(int *)(previous_node + 6) == 0) {
LAB_RETURN_RESULT:
            return previous_node + 8;
        }
        if (*(int *)(search_context + 0x10) != 0) {
            string_ptr = (byte *)previous_node[5];
            current_node = (uint64_t *)(*(int64_t *)(search_context + 8) - (int64_t)string_ptr);
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[(int64_t)current_node];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
    }
    result_ptr = (int64_t *)process_string_operations(data_structure, stack_buffer, current_node, previous_node, search_context);
    return (uint64_t *)(*result_ptr + 0x40);
}

/**
 * 处理字符串遍历的辅助函数
 * @param param1 参数1
 * @param search_context 搜索上下文
 * @param start_node 起始节点
 * @param end_node 结束节点
 * @return 处理结果指针
 */
uint64_t * process_string_traversal(uint64_t param1, int64_t search_context, uint64_t *start_node, uint64_t *end_node)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int compare_result;
    int64_t unaff_RBX;
    uint64_t *unaff_RSI;
    uint64_t *next_node;
    int64_t string_offset;
    
    do {
        if (*(int *)(search_context + 0x10) == 0) {
            next_node = (uint64_t *)start_node[1];
            is_match = false;
        }
        else {
            if (*(int *)(start_node + 6) == 0) {
                is_match = true;
            }
            else {
                string_ptr = *(byte **)(unaff_RBX + 8);
                string_offset = start_node[5] - (int64_t)string_ptr;
                do {
                    compare_char = (uint)string_ptr[string_offset];
                    compare_result = *string_ptr - compare_char;
                    if (*string_ptr != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                is_match = 0 < compare_result;
                if (compare_result < 1) {
                    next_node = (uint64_t *)start_node[1];
                    goto LAB_FOUND_MATCH;
                }
            }
            next_node = (uint64_t *)*start_node;
        }
LAB_FOUND_MATCH:
        if (is_match) {
            start_node = end_node;
        }
        end_node = start_node;
        start_node = next_node;
    } while (next_node != (uint64_t *)0x0);
    if (end_node != unaff_RSI) {
        if (*(int *)(end_node + 6) == 0) {
LAB_RETURN_RESULT:
            return end_node + 8;
        }
        if (*(int *)(unaff_RBX + 0x10) != 0) {
            string_ptr = (byte *)end_node[5];
            string_offset = *(int64_t *)(unaff_RBX + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
    }
    result_ptr = (int64_t *)process_string_operations();
    return (uint64_t *)(*result_ptr + 0x40);
}

/**
 * 计算字符串偏移量的辅助函数
 * @return 计算得到的偏移量
 */
int64_t calculate_string_offset(void)
{
    byte current_char;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int64_t unaff_RBX;
    int64_t unaff_RSI;
    int64_t string_offset;
    int64_t in_R9;
    
    if (in_R9 != unaff_RSI) {
        if (*(int *)(in_R9 + 0x30) == 0) {
LAB_RETURN_OFFSET:
            return in_R9 + 0x40;
        }
        if (*(int *)(unaff_RBX + 0x10) != 0) {
            string_ptr = *(byte **)(in_R9 + 0x28);
            string_offset = *(int64_t *)(unaff_RBX + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_OFFSET;
        }
    }
    result_ptr = (int64_t *)process_string_operations();
    return *result_ptr + 0x40;
}

/**
 * 处理数据结构中的节点操作
 * @param data_structure 数据结构指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 处理结果指针
 */
int64_t * process_data_structure_node(int64_t *data_structure, int64_t param2, uint64_t param3, uint64_t param4)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *node_ptr;
    int64_t *current_ptr;
    uint compare_char;
    int compare_result;
    int64_t *next_ptr;
    int64_t string_offset;
    int64_t stack_value;
    int8_t stack_buffer[16];
    
    current_ptr = data_structure;
    if ((int64_t *)data_structure[2] != (int64_t *)0x0) {
        node_ptr = (int64_t *)data_structure[2];
        do {
            if (*(int *)(param2 + 0x10) == 0) {
                next_ptr = (int64_t *)node_ptr[1];
                is_match = false;
            }
            else {
                if ((int)node_ptr[6] == 0) {
                    is_match = true;
                }
                else {
                    string_ptr = *(byte **)(param2 + 8);
                    param4 = node_ptr[5] - (int64_t)string_ptr;
                    do {
                        compare_char = (uint)string_ptr[param4];
                        compare_result = *string_ptr - compare_char;
                        if (*string_ptr != compare_char) break;
                        string_ptr = string_ptr + 1;
                    } while (compare_char != 0);
                    is_match = 0 < compare_result;
                    if (compare_result < 1) {
                        next_ptr = (int64_t *)node_ptr[1];
                        goto LAB_FOUND_MATCH;
                    }
                }
                next_ptr = (int64_t *)*node_ptr;
            }
LAB_FOUND_MATCH:
            if (is_match) {
                node_ptr = current_ptr;
            }
            current_ptr = node_ptr;
            node_ptr = next_ptr;
        } while (next_ptr != (int64_t *)0x0);
    }
    if (current_ptr != data_structure) {
        if ((int)current_ptr[6] == 0) {
LAB_RETURN_RESULT:
            return current_ptr + 8;
        }
        if (*(int *)(param2 + 0x10) != 0) {
            string_ptr = (byte *)current_ptr[5];
            string_offset = *(int64_t *)(param2 + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
    }
    node_ptr = (int64_t *)*data_structure;
    if ((current_ptr == node_ptr) || (current_ptr == data_structure)) {
        if ((data_structure[4] != 0) && (*(int *)(param2 + 0x10) != 0)) {
            current_ptr = node_ptr;
            if ((int)node_ptr[6] != 0) {
                string_ptr = *(byte **)(param2 + 8);
                param4 = node_ptr[5] - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[param4];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_PROCESS_INSERT;
            }
LAB_PREPARE_INSERT:
            param4 = param4 & 0xffffffffffffff00;
            node_ptr = current_ptr;
LAB_INSERT_NODE:
            if (node_ptr != (int64_t *)0x0) {
                perform_node_insertion(data_structure, &stack_value, node_ptr, param4, param2);
                goto LAB_RETURN_FINAL;
            }
        }
    }
    else {
        node_ptr = (int64_t *)get_previous_node(current_ptr);
        if (*(int *)(param2 + 0x10) != 0) {
            if ((int)current_ptr[6] != 0) {
                string_ptr = *(byte **)(param2 + 8);
                string_offset = current_ptr[5] - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[string_offset];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_PROCESS_INSERT;
            }
            if ((int)node_ptr[6] != 0) {
                string_ptr = (byte *)node_ptr[5];
                param4 = *(int64_t *)(param2 + 8) - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[param4];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if (0 < (int)(current_char - compare_char)) {
                    if (*current_ptr == 0) goto LAB_PREPARE_INSERT;
                    param4 = CONCAT71((int7)(param4 >> 8), 1);
                    goto LAB_INSERT_NODE;
                }
            }
        }
    }
LAB_PROCESS_INSERT:
    current_ptr = (int64_t *)allocate_new_node(data_structure, stack_buffer, node_ptr, param2);
    stack_value = *current_ptr;
LAB_RETURN_FINAL:
    return (int64_t *)(stack_value + 0x40);
}

/**
 * 处理数据结构节点操作的辅助函数
 * @param data_structure 数据结构指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 处理结果指针
 */
int64_t * process_data_structure_operation(int64_t *data_structure, int64_t param2, uint64_t param3, uint64_t param4)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *node_ptr;
    int64_t *current_ptr;
    uint compare_char;
    int compare_result;
    int64_t *next_ptr;
    int64_t string_offset;
    int64_t stack_value;
    int8_t stack_buffer[16];
    
    current_ptr = data_structure;
    if ((int64_t *)data_structure[2] != (int64_t *)0x0) {
        node_ptr = (int64_t *)data_structure[2];
        do {
            if (*(int *)(param2 + 0x10) == 0) {
                next_ptr = (int64_t *)node_ptr[1];
                is_match = false;
            }
            else {
                if ((int)node_ptr[6] == 0) {
                    is_match = true;
                }
                else {
                    string_ptr = *(byte **)(param2 + 8);
                    param4 = node_ptr[5] - (int64_t)string_ptr;
                    do {
                        compare_char = (uint)string_ptr[param4];
                        compare_result = *string_ptr - compare_char;
                        if (*string_ptr != compare_char) break;
                        string_ptr = string_ptr + 1;
                    } while (compare_char != 0);
                    is_match = 0 < compare_result;
                    if (compare_result < 1) {
                        next_ptr = (int64_t *)node_ptr[1];
                        goto LAB_FOUND_MATCH;
                    }
                }
                next_ptr = (int64_t *)*node_ptr;
            }
LAB_FOUND_MATCH:
            if (is_match) {
                node_ptr = current_ptr;
            }
            current_ptr = node_ptr;
            node_ptr = next_ptr;
        } while (next_ptr != (int64_t *)0x0);
    }
    if (current_ptr != data_structure) {
        if ((int)current_ptr[6] == 0) {
LAB_RETURN_RESULT:
            return current_ptr + 8;
        }
        if (*(int *)(param2 + 0x10) != 0) {
            string_ptr = (byte *)current_ptr[5];
            string_offset = *(int64_t *)(param2 + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
    }
    node_ptr = (int64_t *)*data_structure;
    if ((current_ptr == node_ptr) || (current_ptr == data_structure)) {
        if ((data_structure[4] != 0) && (*(int *)(param2 + 0x10) != 0)) {
            current_ptr = node_ptr;
            if ((int)node_ptr[6] != 0) {
                string_ptr = *(byte **)(param2 + 8);
                param4 = node_ptr[5] - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[param4];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_PROCESS_INSERT;
            }
LAB_PREPARE_INSERT:
            param4 = param4 & 0xffffffffffffff00;
            node_ptr = current_ptr;
LAB_INSERT_NODE:
            if (node_ptr != (int64_t *)0x0) {
                perform_node_operation(data_structure, &stack_value, node_ptr, param4, param2);
                goto LAB_RETURN_FINAL;
            }
        }
    }
    else {
        node_ptr = (int64_t *)get_previous_node(current_ptr);
        if (*(int *)(param2 + 0x10) != 0) {
            if ((int)current_ptr[6] != 0) {
                string_ptr = *(byte **)(param2 + 8);
                string_offset = current_ptr[5] - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[string_offset];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_PROCESS_INSERT;
            }
            if ((int)node_ptr[6] != 0) {
                string_ptr = (byte *)node_ptr[5];
                param4 = *(int64_t *)(param2 + 8) - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[param4];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if (0 < (int)(current_char - compare_char)) {
                    if (*current_ptr == 0) goto LAB_PREPARE_INSERT;
                    param4 = CONCAT71((int7)(param4 >> 8), 1);
                    goto LAB_INSERT_NODE;
                }
            }
        }
    }
LAB_PROCESS_INSERT:
    current_ptr = (int64_t *)allocate_and_initialize_node(data_structure, stack_buffer, node_ptr, param2);
    stack_value = *current_ptr;
LAB_RETURN_FINAL:
    return (int64_t *)(stack_value + 0x40);
}

/**
 * 在数据结构中查找并处理字符串节点的辅助函数
 * @param data_structure 数据结构指针
 * @param search_context 搜索上下文
 * @return 处理结果指针
 */
uint64_t * find_and_process_string_node(uint64_t *data_structure, int64_t search_context)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int compare_result;
    uint64_t *next_node;
    uint64_t *current_node;
    uint64_t *previous_node;
    int64_t string_offset;
    int8_t stack_buffer[8];
    
    current_node = (uint64_t *)data_structure[2];
    previous_node = data_structure;
    if (current_node != (uint64_t *)0x0) {
        do {
            if (*(int *)(search_context + 0x10) == 0) {
                next_node = (uint64_t *)current_node[1];
                is_match = false;
            }
            else {
                if (*(int *)(current_node + 6) == 0) {
                    is_match = true;
                }
                else {
                    string_ptr = *(byte **)(search_context + 8);
                    string_offset = current_node[5] - (int64_t)string_ptr;
                    do {
                        compare_char = (uint)string_ptr[string_offset];
                        compare_result = *string_ptr - compare_char;
                        if (*string_ptr != compare_char) break;
                        string_ptr = string_ptr + 1;
                    } while (compare_char != 0);
                    is_match = 0 < compare_result;
                    if (compare_result < 1) {
                        next_node = (uint64_t *)current_node[1];
                        goto LAB_FOUND_MATCH;
                    }
                }
                next_node = (uint64_t *)*current_node;
            }
LAB_FOUND_MATCH:
            if (is_match) {
                current_node = previous_node;
            }
            previous_node = current_node;
            current_node = next_node;
        } while (next_node != (uint64_t *)0x0);
        current_node = (uint64_t *)0x0;
    }
    if (previous_node != data_structure) {
        if (*(int *)(previous_node + 6) == 0) {
LAB_RETURN_RESULT:
            return previous_node + 8;
        }
        if (*(int *)(search_context + 0x10) != 0) {
            string_ptr = (byte *)previous_node[5];
            current_node = (uint64_t *)(*(int64_t *)(search_context + 8) - (int64_t)string_ptr);
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[(int64_t)current_node];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
    }
    result_ptr = (int64_t *)perform_string_processing(data_structure, stack_buffer, current_node, previous_node, search_context);
    return (uint64_t *)(*result_ptr + 0x40);
}

/**
 * 处理字符串节点遍历的辅助函数
 * @param param1 参数1
 * @param search_context 搜索上下文
 * @param start_node 起始节点
 * @param end_node 结束节点
 * @return 处理结果指针
 */
uint64_t * process_string_node_traversal(uint64_t param1, int64_t search_context, uint64_t *start_node, uint64_t *end_node)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int compare_result;
    int64_t unaff_RBX;
    uint64_t *unaff_RSI;
    uint64_t *next_node;
    int64_t string_offset;
    
    do {
        if (*(int *)(search_context + 0x10) == 0) {
            next_node = (uint64_t *)start_node[1];
            is_match = false;
        }
        else {
            if (*(int *)(start_node + 6) == 0) {
                is_match = true;
            }
            else {
                string_ptr = *(byte **)(unaff_RBX + 8);
                string_offset = start_node[5] - (int64_t)string_ptr;
                do {
                    compare_char = (uint)string_ptr[string_offset];
                    compare_result = *string_ptr - compare_char;
                    if (*string_ptr != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                is_match = 0 < compare_result;
                if (compare_result < 1) {
                    next_node = (uint64_t *)start_node[1];
                    goto LAB_FOUND_MATCH;
                }
            }
            next_node = (uint64_t *)*start_node;
        }
LAB_FOUND_MATCH:
        if (is_match) {
            start_node = end_node;
        }
        end_node = start_node;
        start_node = next_node;
    } while (next_node != (uint64_t *)0x0);
    if (end_node != unaff_RSI) {
        if (*(int *)(end_node + 6) == 0) {
LAB_RETURN_RESULT:
            return end_node + 8;
        }
        if (*(int *)(unaff_RBX + 0x10) != 0) {
            string_ptr = (byte *)end_node[5];
            string_offset = *(int64_t *)(unaff_RBX + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
    }
    result_ptr = (int64_t *)perform_string_processing();
    return (uint64_t *)(*result_ptr + 0x40);
}

/**
 * 计算字符串节点偏移量的辅助函数
 * @return 计算得到的偏移量
 */
int64_t calculate_string_node_offset(void)
{
    byte current_char;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int64_t unaff_RBX;
    int64_t unaff_RSI;
    int64_t string_offset;
    int64_t in_R9;
    
    if (in_R9 != unaff_RSI) {
        if (*(int *)(in_R9 + 0x30) == 0) {
LAB_RETURN_OFFSET:
            return in_R9 + 0x40;
        }
        if (*(int *)(unaff_RBX + 0x10) != 0) {
            string_ptr = *(byte **)(in_R9 + 0x28);
            string_offset = *(int64_t *)(unaff_RBX + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_OFFSET;
        }
    }
    result_ptr = (int64_t *)perform_string_processing();
    return *result_ptr + 0x40;
}

/**
 * 在数据结构中执行高级字符串搜索操作
 * @param data_structure 数据结构指针
 * @param search_context 搜索上下文
 * @return 操作结果指针
 */
uint64_t * perform_advanced_string_search(uint64_t *data_structure, int64_t search_context)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int compare_result;
    uint64_t *next_node;
    uint64_t *current_node;
    uint64_t *previous_node;
    int64_t string_offset;
    int8_t stack_buffer[8];
    
    current_node = (uint64_t *)data_structure[2];
    previous_node = data_structure;
    if (current_node != (uint64_t *)0x0) {
        do {
            if (*(int *)(search_context + 0x10) == 0) {
                next_node = (uint64_t *)current_node[1];
                is_match = false;
            }
            else {
                if (*(int *)(current_node + 6) == 0) {
                    is_match = true;
                }
                else {
                    string_ptr = *(byte **)(search_context + 8);
                    string_offset = current_node[5] - (int64_t)string_ptr;
                    do {
                        compare_char = (uint)string_ptr[string_offset];
                        compare_result = *string_ptr - compare_char;
                        if (*string_ptr != compare_char) break;
                        string_ptr = string_ptr + 1;
                    } while (compare_char != 0);
                    is_match = 0 < compare_result;
                    if (compare_result < 1) {
                        next_node = (uint64_t *)current_node[1];
                        goto LAB_FOUND_MATCH;
                    }
                }
                next_node = (uint64_t *)*current_node;
            }
LAB_FOUND_MATCH:
            if (is_match) {
                current_node = previous_node;
            }
            previous_node = current_node;
            current_node = next_node;
        } while (next_node != (uint64_t *)0x0);
        current_node = (uint64_t *)0x0;
    }
    if (previous_node != data_structure) {
        if (*(int *)(previous_node + 6) == 0) {
LAB_RETURN_RESULT:
            return previous_node + 8;
        }
        if (*(int *)(search_context + 0x10) != 0) {
            string_ptr = (byte *)previous_node[5];
            current_node = (uint64_t *)(*(int64_t *)(search_context + 8) - (int64_t)string_ptr);
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[(int64_t)current_node];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
    }
    result_ptr = (int64_t *)execute_advanced_string_operations(data_structure, stack_buffer, current_node, previous_node, search_context);
    return (uint64_t *)(*result_ptr + 0x40);
}

/**
 * 处理高级字符串遍历的辅助函数
 * @param param1 参数1
 * @param search_context 搜索上下文
 * @param start_node 起始节点
 * @param end_node 结束节点
 * @return 处理结果指针
 */
uint64_t * process_advanced_string_traversal(uint64_t param1, int64_t search_context, uint64_t *start_node, uint64_t *end_node)
{
    byte current_char;
    bool is_match;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int compare_result;
    int64_t unaff_RBX;
    uint64_t *unaff_RSI;
    uint64_t *next_node;
    int64_t string_offset;
    
    do {
        if (*(int *)(search_context + 0x10) == 0) {
            next_node = (uint64_t *)start_node[1];
            is_match = false;
        }
        else {
            if (*(int *)(start_node + 6) == 0) {
                is_match = true;
            }
            else {
                string_ptr = *(byte **)(unaff_RBX + 8);
                string_offset = start_node[5] - (int64_t)string_ptr;
                do {
                    compare_char = (uint)string_ptr[string_offset];
                    compare_result = *string_ptr - compare_char;
                    if (*string_ptr != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                is_match = 0 < compare_result;
                if (compare_result < 1) {
                    next_node = (uint64_t *)start_node[1];
                    goto LAB_FOUND_MATCH;
                }
            }
            next_node = (uint64_t *)*start_node;
        }
LAB_FOUND_MATCH:
        if (is_match) {
            start_node = end_node;
        }
        end_node = start_node;
        start_node = next_node;
    } while (next_node != (uint64_t *)0x0);
    if (end_node != unaff_RSI) {
        if (*(int *)(end_node + 6) == 0) {
LAB_RETURN_RESULT:
            return end_node + 8;
        }
        if (*(int *)(unaff_RBX + 0x10) != 0) {
            string_ptr = (byte *)end_node[5];
            string_offset = *(int64_t *)(unaff_RBX + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
    }
    result_ptr = (int64_t *)execute_advanced_string_operations();
    return (uint64_t *)(*result_ptr + 0x40);
}

/**
 * 计算高级字符串偏移量的辅助函数
 * @return 计算得到的偏移量
 */
int64_t calculate_advanced_string_offset(void)
{
    byte current_char;
    byte *string_ptr;
    int64_t *result_ptr;
    uint compare_char;
    int64_t unaff_RBX;
    int64_t unaff_RSI;
    int64_t string_offset;
    int64_t in_R9;
    
    if (in_R9 != unaff_RSI) {
        if (*(int *)(in_R9 + 0x30) == 0) {
LAB_RETURN_OFFSET:
            return in_R9 + 0x40;
        }
        if (*(int *)(unaff_RBX + 0x10) != 0) {
            string_ptr = *(byte **)(in_R9 + 0x28);
            string_offset = *(int64_t *)(unaff_RBX + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_OFFSET;
        }
    }
    result_ptr = (int64_t *)execute_advanced_string_operations();
    return *result_ptr + 0x40;
}

/**
 * 初始化资源管理器并设置错误处理
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return 初始化结果
 */
int64_t * initialize_resource_manager(uint64_t param1, int64_t *param2, uint64_t param3, int32_t param4)
{
    uint64_t global_data;
    int32_t string_length;
    int32_t *error_message;
    void *error_handler;
    int32_t *resource_ptr;
    int32_t stack_size;
    uint64_t stack_data;
    
    global_data = global_resource_table;
    error_handler = &global_error_handler;
    stack_data = 0;
    resource_ptr = (int32_t *)0x0;
    stack_size = 0;
    error_message = (int32_t *)allocate_resource_buffer(global_resource_pool, 0x1d, 0x13, param4, 0, 0xfffffffffffffffe);
    *(int8_t *)error_message = 0;
    resource_ptr = error_message;
    string_length = get_string_length(error_message);
    *error_message = 0x6f736552;  // "Reso"
    error_message[1] = 0x65637275;    // "urce"
    error_message[2] = 0x66754220;    // "Bu f"
    error_message[3] = 0x73726566;    // "fers"
    *(uint64_t *)(error_message + 4) = 0x6f6f70206e6f6e28;  // "oon (no"
    error_message[6] = 0x2964656c;    // "del)"
    *(int8_t *)(error_message + 7) = 0;
    stack_size = 0x1c;
    stack_data._0_4_ = string_length;
    log_error_message(0, param4, &error_handler);
    error_handler = &global_error_handler;
    if (resource_ptr != (int32_t *)0x0) {
        // WARNING: Subroutine does not return
        release_resource_buffer();
    }
    resource_ptr = (int32_t *)0x0;
    stack_data = (uint64_t)stack_data._4_4_ << 0x20;
    error_handler = &global_debug_callback;
    initialize_debug_system(global_data, param2);
    *(uint64_t *)(*param2 + 0x10) = param3;
    *(int32_t *)(*param2 + 0x18) = param4;
    *(int32_t *)(*param2 + 0x1c) = param4;
    *(int8_t *)(*param2 + 0x20) = 1;
    return param2;
}

/**
 * 处理节点插入的核心函数
 * @param data_structure 数据结构指针
 * @param stack_buffer 栈缓冲区
 * @param param3 参数3
 * @param param4 参数4
 * @param search_context 搜索上下文
 * @return 处理结果
 */
uint64_t * process_node_insertion(int64_t *data_structure, uint64_t *stack_buffer, uint64_t param3, int64_t *param4, int64_t search_context)
{
    byte current_char;
    bool is_match;
    int64_t *node_ptr;
    byte *string_ptr;
    int64_t *current_ptr;
    uint compare_char;
    int64_t string_offset;
    int64_t *next_ptr;
    uint64_t search_flag;
    uint64_t operation_flag;
    
    current_ptr = (int64_t *)*data_structure;
    if ((param4 == current_ptr) || (param4 == data_structure)) {
        if ((data_structure[4] != 0) && (*(int *)(search_context + 0x10) != 0)) {
            next_ptr = param4;
            if (*(int *)(current_ptr + 6) != 0) {
                string_ptr = *(byte **)(search_context + 8);
                next_ptr = (int64_t *)(current_ptr[5] - (int64_t)string_ptr);
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[(int64_t)next_ptr];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_INSERT_NODE;
            }
LAB_PREPARE_INSERT:
            search_flag = (uint64_t)next_ptr & 0xffffffffffffff00;
LAB_EXECUTE_INSERT:
            if (current_ptr != (int64_t *)0x0) {
                execute_node_insertion(data_structure, stack_buffer, current_ptr, search_flag, search_context);
                return stack_buffer;
            }
        }
    }
    else {
        node_ptr = (int64_t *)get_previous_node(param4);
        if (*(int *)(search_context + 0x10) != 0) {
            if ((int)param4[6] != 0) {
                string_ptr = *(byte **)(search_context + 8);
                string_offset = param4[5] - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[string_offset];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_INSERT_NODE;
            }
            if ((int)node_ptr[6] != 0) {
                string_ptr = (byte *)node_ptr[5];
                next_ptr = (int64_t *)(*(int64_t *)(search_context + 8) - (int64_t)string_ptr);
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[(int64_t)next_ptr];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if (0 < (int)(current_char - compare_char)) {
                    current_ptr = param4;
                    if (*param4 == 0) goto LAB_PREPARE_INSERT;
                    search_flag = CONCAT71((int7)((uint64_t)next_ptr >> 8), 1);
                    current_ptr = node_ptr;
                    goto LAB_EXECUTE_INSERT;
                }
            }
        }
    }
LAB_INSERT_NODE:
    is_match = true;
    current_ptr = (int64_t *)data_structure[2];
    next_ptr = data_structure;
    while (current_ptr != (int64_t *)0x0) {
        next_ptr = current_ptr;
        if ((int)current_ptr[6] == 0) {
            is_match = false;
LAB_TRAVERSE_NODES:
            current_ptr = (int64_t *)*current_ptr;
        }
        else {
            if (*(int *)(search_context + 0x10) == 0) {
                is_match = true;
            }
            else {
                string_ptr = (byte *)current_ptr[5];
                string_offset = *(int64_t *)(search_context + 8) - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[string_offset];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                is_match = 0 < (int)(current_char - compare_char);
            }
            if (!is_match) goto LAB_TRAVERSE_NODES;
            current_ptr = (int64_t *)current_ptr[1];
        }
    }
    current_ptr = next_ptr;
    if (is_match) {
        if (next_ptr != (int64_t *)data_structure[1]) {
            current_ptr = (int64_t *)get_sibling_node(next_ptr);
            goto LAB_PROCESS_NODE;
        }
    }
    else {
LAB_PROCESS_NODE:
        if (*(int *)(search_context + 0x10) == 0) {
LAB_FINALIZE_INSERT:
            *stack_buffer = current_ptr;
            return stack_buffer;
        }
        if ((int)current_ptr[6] != 0) {
            string_ptr = *(byte **)(search_context + 8);
            string_offset = current_ptr[5] - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_FINALIZE_INSERT;
        }
    }
    if (next_ptr != data_structure) {
        if ((int)next_ptr[6] == 0) {
LAB_SET_OPERATION_FLAG:
            operation_flag = 1;
            goto LAB_EXECUTE_OPERATION;
        }
        if (*(int *)(search_context + 0x10) != 0) {
            string_ptr = (byte *)next_ptr[5];
            string_offset = *(int64_t *)(search_context + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_SET_OPERATION_FLAG;
        }
    }
    operation_flag = 0;
LAB_EXECUTE_OPERATION:
    string_offset = allocate_resource_buffer(global_resource_pool, 0x48, (char)data_structure[5]);
    configure_resource_context(string_offset + 0x20, search_context);
    *(int32_t *)(string_offset + 0x40) = 0;
    // WARNING: Subroutine does not return
    execute_resource_operation(string_offset, next_ptr, data_structure, operation_flag);
}

/**
 * 处理字符串操作的核心函数
 * @param data_structure 数据结构指针
 * @param stack_buffer 栈缓冲区
 * @param param3 参数3
 * @param param4 参数4
 * @param search_context 搜索上下文
 * @return 处理结果
 */
uint64_t * process_string_operations(int64_t *data_structure, uint64_t *stack_buffer, uint64_t param3, int64_t *param4, int64_t search_context)
{
    byte current_char;
    int64_t *node_ptr;
    byte *string_ptr;
    uint64_t *result_ptr;
    uint compare_char;
    int64_t string_offset;
    uint64_t operation_flag;
    int8_t temp_buffer[16];
    
    node_ptr = (int64_t *)*data_structure;
    if ((param4 == node_ptr) || (param4 == data_structure)) {
        if ((data_structure[4] == 0) || (*(int *)(search_context + 0x10) == 0)) goto LAB_RETURN_RESULT;
        param4 = node_ptr;
        if (*(int *)(node_ptr + 6) != 0) {
            string_ptr = *(byte **)(search_context + 8);
            string_offset = node_ptr[5] - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
LAB_PREPARE_OPERATION:
        operation_flag = 0;
    }
    else {
        node_ptr = (int64_t *)get_previous_node(param4);
        if (*(int *)(search_context + 0x10) == 0) goto LAB_RETURN_RESULT;
        if ((int)param4[6] != 0) {
            string_ptr = *(byte **)(search_context + 8);
            string_offset = param4[5] - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        }
        if ((int)node_ptr[6] == 0) goto LAB_RETURN_RESULT;
        string_ptr = (byte *)node_ptr[5];
        string_offset = *(int64_t *)(search_context + 8) - (int64_t)string_ptr;
        do {
            current_char = *string_ptr;
            compare_char = (uint)string_ptr[string_offset];
            if (current_char != compare_char) break;
            string_ptr = string_ptr + 1;
        } while (compare_char != 0);
        if ((int)(current_char - compare_char) < 1) goto LAB_RETURN_RESULT;
        if (*param4 == 0) goto LAB_PREPARE_OPERATION;
        operation_flag = 1;
        param4 = node_ptr;
    }
    if (param4 != (int64_t *)0x0) {
        execute_string_operation(data_structure, stack_buffer, param4, operation_flag, search_context);
        return stack_buffer;
    }
LAB_RETURN_RESULT:
    result_ptr = (uint64_t *)allocate_and_initialize_string_node(data_structure, temp_buffer);
    *stack_buffer = *result_ptr;
    return stack_buffer;
}

/**
 * 执行字符串处理的核心函数
 * @param data_structure 数据结构指针
 * @param stack_buffer 栈缓冲区
 * @param param3 参数3
 * @param param4 参数4
 * @param search_context 搜索上下文
 * @return 处理结果
 */
uint64_t * perform_string_processing(int64_t *data_structure, uint64_t *stack_buffer, uint64_t param3, int64_t *param4, int64_t search_context)
{
    byte current_char;
    bool is_match;
    int64_t *node_ptr;
    byte *string_ptr;
    int64_t *current_ptr;
    uint compare_char;
    int64_t string_offset;
    int64_t *next_ptr;
    uint64_t search_flag;
    uint64_t operation_flag;
    
    current_ptr = (int64_t *)*data_structure;
    if ((param4 == current_ptr) || (param4 == data_structure)) {
        if ((data_structure[4] != 0) && (*(int *)(search_context + 0x10) != 0)) {
            next_ptr = param4;
            if (*(int *)(current_ptr + 6) != 0) {
                string_ptr = *(byte **)(search_context + 8);
                next_ptr = (int64_t *)(current_ptr[5] - (int64_t)string_ptr);
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[(int64_t)next_ptr];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_INSERT_NODE;
            }
LAB_PREPARE_INSERT:
            search_flag = (uint64_t)next_ptr & 0xffffffffffffff00;
LAB_EXECUTE_INSERT:
            if (current_ptr != (int64_t *)0x0) {
                perform_string_insertion(data_structure, stack_buffer, current_ptr, search_flag, search_context);
                return stack_buffer;
            }
        }
    }
    else {
        node_ptr = (int64_t *)get_previous_node(param4);
        if (*(int *)(search_context + 0x10) != 0) {
            if ((int)param4[6] != 0) {
                string_ptr = *(byte **)(search_context + 8);
                string_offset = param4[5] - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[string_offset];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_INSERT_NODE;
            }
            if ((int)node_ptr[6] != 0) {
                string_ptr = (byte *)node_ptr[5];
                next_ptr = (int64_t *)(*(int64_t *)(search_context + 8) - (int64_t)string_ptr);
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[(int64_t)next_ptr];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if (0 < (int)(current_char - compare_char)) {
                    current_ptr = param4;
                    if (*param4 == 0) goto LAB_PREPARE_INSERT;
                    search_flag = CONCAT71((int7)((uint64_t)next_ptr >> 8), 1);
                    current_ptr = node_ptr;
                    goto LAB_EXECUTE_INSERT;
                }
            }
        }
    }
LAB_INSERT_NODE:
    is_match = true;
    current_ptr = (int64_t *)data_structure[2];
    next_ptr = data_structure;
    while (current_ptr != (int64_t *)0x0) {
        next_ptr = current_ptr;
        if ((int)current_ptr[6] == 0) {
            is_match = false;
LAB_TRAVERSE_NODES:
            current_ptr = (int64_t *)*current_ptr;
        }
        else {
            if (*(int *)(search_context + 0x10) == 0) {
                is_match = true;
            }
            else {
                string_ptr = (byte *)current_ptr[5];
                string_offset = *(int64_t *)(search_context + 8) - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[string_offset];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                is_match = 0 < (int)(current_char - compare_char);
            }
            if (!is_match) goto LAB_TRAVERSE_NODES;
            current_ptr = (int64_t *)current_ptr[1];
        }
    }
    current_ptr = next_ptr;
    if (is_match) {
        if (next_ptr != (int64_t *)data_structure[1]) {
            current_ptr = (int64_t *)get_sibling_node(next_ptr);
            goto LAB_PROCESS_NODE;
        }
    }
    else {
LAB_PROCESS_NODE:
        if (*(int *)(search_context + 0x10) == 0) {
LAB_FINALIZE_INSERT:
            *stack_buffer = current_ptr;
            return stack_buffer;
        }
        if ((int)current_ptr[6] != 0) {
            string_ptr = *(byte **)(search_context + 8);
            string_offset = current_ptr[5] - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_FINALIZE_INSERT;
        }
    }
    if (next_ptr != data_structure) {
        if ((int)next_ptr[6] == 0) {
LAB_SET_OPERATION_FLAG:
            operation_flag = 1;
            goto LAB_EXECUTE_OPERATION;
        }
        if (*(int *)(search_context + 0x10) != 0) {
            string_ptr = (byte *)next_ptr[5];
            string_offset = *(int64_t *)(search_context + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_SET_OPERATION_FLAG;
        }
    }
    operation_flag = 0;
LAB_EXECUTE_OPERATION:
    string_offset = allocate_resource_buffer(global_resource_pool, 0x48, (char)data_structure[5]);
    configure_resource_context(string_offset + 0x20, search_context);
    *(int8_t *)(string_offset + 0x40) = 0;
    // WARNING: Subroutine does not return
    execute_resource_operation(string_offset, next_ptr, data_structure, operation_flag);
}

/**
 * 执行高级字符串操作的核心函数
 * @param data_structure 数据结构指针
 * @param stack_buffer 栈缓冲区
 * @param param3 参数3
 * @param param4 参数4
 * @param search_context 搜索上下文
 * @return 处理结果
 */
uint64_t * execute_advanced_string_operations(int64_t *data_structure, uint64_t *stack_buffer, uint64_t param3, int64_t *param4, int64_t search_context)
{
    byte current_char;
    bool is_match;
    int64_t *node_ptr;
    byte *string_ptr;
    int64_t *current_ptr;
    uint compare_char;
    int64_t string_offset;
    int64_t *next_ptr;
    uint64_t search_flag;
    uint64_t operation_flag;
    
    current_ptr = (int64_t *)*data_structure;
    if ((param4 == current_ptr) || (param4 == data_structure)) {
        if ((data_structure[4] != 0) && (*(int *)(search_context + 0x10) != 0)) {
            next_ptr = param4;
            if (*(int *)(current_ptr + 6) != 0) {
                string_ptr = *(byte **)(search_context + 8);
                next_ptr = (int64_t *)(current_ptr[5] - (int64_t)string_ptr);
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[(int64_t)next_ptr];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_INSERT_NODE;
            }
LAB_PREPARE_INSERT:
            search_flag = (uint64_t)next_ptr & 0xffffffffffffff00;
LAB_EXECUTE_INSERT:
            if (current_ptr != (int64_t *)0x0) {
                execute_advanced_string_insertion(data_structure, stack_buffer, current_ptr, search_flag, search_context);
                return stack_buffer;
            }
        }
    }
    else {
        node_ptr = (int64_t *)get_previous_node(param4);
        if (*(int *)(search_context + 0x10) != 0) {
            if ((int)param4[6] != 0) {
                string_ptr = *(byte **)(search_context + 8);
                string_offset = param4[5] - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[string_offset];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if ((int)(current_char - compare_char) < 1) goto LAB_INSERT_NODE;
            }
            if ((int)node_ptr[6] != 0) {
                string_ptr = (byte *)node_ptr[5];
                next_ptr = (int64_t *)(*(int64_t *)(search_context + 8) - (int64_t)string_ptr);
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[(int64_t)next_ptr];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                if (0 < (int)(current_char - compare_char)) {
                    current_ptr = param4;
                    if (*param4 == 0) goto LAB_PREPARE_INSERT;
                    search_flag = CONCAT71((int7)((uint64_t)next_ptr >> 8), 1);
                    current_ptr = node_ptr;
                    goto LAB_EXECUTE_INSERT;
                }
            }
        }
    }
LAB_INSERT_NODE:
    is_match = true;
    current_ptr = (int64_t *)data_structure[2];
    next_ptr = data_structure;
    while (current_ptr != (int64_t *)0x0) {
        next_ptr = current_ptr;
        if ((int)current_ptr[6] == 0) {
            is_match = false;
LAB_TRAVERSE_NODES:
            current_ptr = (int64_t *)*current_ptr;
        }
        else {
            if (*(int *)(search_context + 0x10) == 0) {
                is_match = true;
            }
            else {
                string_ptr = (byte *)current_ptr[5];
                string_offset = *(int64_t *)(search_context + 8) - (int64_t)string_ptr;
                do {
                    current_char = *string_ptr;
                    compare_char = (uint)string_ptr[string_offset];
                    if (current_char != compare_char) break;
                    string_ptr = string_ptr + 1;
                } while (compare_char != 0);
                is_match = 0 < (int)(current_char - compare_char);
            }
            if (!is_match) goto LAB_TRAVERSE_NODES;
            current_ptr = (int64_t *)current_ptr[1];
        }
    }
    current_ptr = next_ptr;
    if (is_match) {
        if (next_ptr != (int64_t *)data_structure[1]) {
            current_ptr = (int64_t *)get_sibling_node(next_ptr);
            goto LAB_PROCESS_NODE;
        }
    }
    else {
LAB_PROCESS_NODE:
        if (*(int *)(search_context + 0x10) == 0) {
LAB_FINALIZE_INSERT:
            *stack_buffer = current_ptr;
            return stack_buffer;
        }
        if ((int)current_ptr[6] != 0) {
            string_ptr = *(byte **)(search_context + 8);
            string_offset = current_ptr[5] - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_FINALIZE_INSERT;
        }
    }
    if (next_ptr != data_structure) {
        if ((int)next_ptr[6] == 0) {
LAB_SET_OPERATION_FLAG:
            operation_flag = 1;
            goto LAB_EXECUTE_OPERATION;
        }
        if (*(int *)(search_context + 0x10) != 0) {
            string_ptr = (byte *)next_ptr[5];
            string_offset = *(int64_t *)(search_context + 8) - (int64_t)string_ptr;
            do {
                current_char = *string_ptr;
                compare_char = (uint)string_ptr[string_offset];
                if (current_char != compare_char) break;
                string_ptr = string_ptr + 1;
            } while (compare_char != 0);
            if ((int)(current_char - compare_char) < 1) goto LAB_SET_OPERATION_FLAG;
        }
    }
    operation_flag = 0;
LAB_EXECUTE_OPERATION:
    string_offset = allocate_resource_buffer(global_resource_pool, 0x1c0, (char)data_structure[5]);
    configure_resource_context(string_offset + 0x20, search_context);
    initialize_string_operations(string_offset + 0x40);
    // WARNING: Subroutine does not return
    execute_resource_operation(string_offset, next_ptr, data_structure, operation_flag);
}

/**
 * 基于索引处理数据结构操作的函数
 * @param data_structure 数据结构指针
 * @param index_context 索引上下文
 * @param param3 参数3
 * @param param4 参数4
 * @param index_ptr 索引指针
 * @return 处理结果
 */
uint64_t * process_indexed_data_structure(int64_t *data_structure, uint64_t *stack_buffer, uint64_t param3, int64_t *param4, int *index_ptr)
{
    bool is_found;
    int current_index;
    int64_t *node_ptr;
    int64_t *current_ptr;
    int64_t index_offset;
    uint64_t operation_flag;
    
    node_ptr = (int64_t *)*data_structure;
    if ((param4 == node_ptr) || (param4 == data_structure)) {
        if ((data_structure[4] != 0) && (param4 = node_ptr, *(int *)(node_ptr + 4) < *index_ptr)) {
LAB_PREPARE_OPERATION:
            operation_flag = 0;
            goto LAB_EXECUTE_OPERATION;
        }
    }
    else {
        node_ptr = (int64_t *)get_previous_node(param4);
        if (((int)param4[4] < *index_ptr) && (*index_ptr < (int)node_ptr[4])) {
            if (*param4 == 0) goto LAB_PREPARE_OPERATION;
            operation_flag = 1;
            param4 = node_ptr;
LAB_EXECUTE_OPERATION:
            if (param4 != (int64_t *)0x0) {
                execute_indexed_operation(data_structure, stack_buffer, param4, operation_flag, index_ptr);
                return stack_buffer;
            }
        }
    }
    is_found = true;
    node_ptr = data_structure;
    if ((int64_t *)data_structure[2] != (int64_t *)0x0) {
        current_ptr = (int64_t *)data_structure[2];
        do {
            node_ptr = current_ptr;
            is_found = *index_ptr < (int)node_ptr[4];
            if (*index_ptr < (int)node_ptr[4]) {
                current_ptr = (int64_t *)node_ptr[1];
            }
            else {
                current_ptr = (int64_t *)*node_ptr;
            }
        } while (current_ptr != (int64_t *)0x0);
    }
    current_ptr = node_ptr;
    if (is_found) {
        if (node_ptr == (int64_t *)data_structure[1]) {
            current_index = *index_ptr;
            goto LAB_FINALIZE_OPERATION;
        }
        current_ptr = (int64_t *)get_sibling_node(node_ptr);
    }
    current_index = *index_ptr;
    if (current_index <= (int)current_ptr[4]) {
        *stack_buffer = current_ptr;
        return stack_buffer;
    }
LAB_FINALIZE_OPERATION:
    if ((node_ptr == data_structure) || (current_index < (int)node_ptr[4])) {
        operation_flag = 0;
    }
    else {
        operation_flag = 1;
    }
    index_offset = allocate_resource_buffer(global_resource_pool, 0x28, (char)data_structure[5]);
    *(int *)(index_offset + 0x20) = *index_ptr;
    *(int32_t *)(index_offset + 0x24) = 0;
    // WARNING: Subroutine does not return
    execute_resource_operation(index_offset, node_ptr, data_structure, operation_flag);
}

// 全局变量和外部函数声明
extern uint64_t global_resource_table;
extern uint64_t global_resource_pool;
extern uint64_t global_error_handler;
extern uint64_t global_debug_callback;

// 外部函数声明
extern uint64_t * allocate_resource_buffer(uint64_t, int, char, int32_t, int64_t, uint64_t);
extern int32_t get_string_length(int32_t *);
extern void log_error_message(int, int32_t, void **);
extern void release_resource_buffer(void);
extern void initialize_debug_system(uint64_t, int64_t *);
extern int64_t * get_previous_node(int64_t *);
extern int64_t * get_sibling_node(int64_t *);
extern void execute_node_insertion(int64_t *, uint64_t *, int64_t *, uint64_t, int64_t);
extern void execute_string_operation(int64_t *, uint64_t *, int64_t *, uint64_t, int64_t);
extern void perform_string_insertion(int64_t *, uint64_t *, int64_t *, uint64_t, int64_t);
extern void execute_advanced_string_insertion(int64_t *, uint64_t *, int64_t *, uint64_t, int64_t);
extern uint64_t * allocate_and_initialize_string_node(int64_t *, int8_t *);
extern void configure_resource_context(int64_t, int64_t);
extern void initialize_string_operations(int64_t);
extern void execute_resource_operation(int64_t, int64_t, int64_t *, uint64_t);
extern void execute_indexed_operation(int64_t *, uint64_t *, int64_t *, uint64_t, int *);