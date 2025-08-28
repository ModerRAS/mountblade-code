#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part205.c - 核心引擎内存管理和数据结构操作函数

// 函数: 释放资源管理器指针
// 功能: 释放并清除资源管理器中的指针资源
void cleanup_resource_manager(longlong *resource_manager)
{
    longlong *resource_ptr;
    
    resource_ptr = (longlong *)resource_manager[7];
    if (resource_ptr != (longlong *)0x0) {
        (**(code **)(*resource_ptr + 0x20))(resource_ptr, resource_ptr != resource_manager);
        resource_manager[7] = 0;
    }
    return;
}

// 函数: 清理数组容器
// 功能: 释放数组容器中的所有元素并重置容器状态
void cleanup_array_container(longlong *container, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    ulonglong element_count;
    longlong start_ptr;
    longlong end_ptr;
    undefined8 size_flag;
    
    size_flag = 0xfffffffffffffffe;
    start_ptr = *container;
    if (start_ptr != 0) {
        end_ptr = container[1];
        if (start_ptr != end_ptr) {
            do {
                release_element(start_ptr);
                start_ptr = start_ptr + 0x28;
            } while (start_ptr != end_ptr);
            start_ptr = *container;
        }
        element_count = ((container[2] - start_ptr) / 0x28) * 0x28;
        end_ptr = start_ptr;
        if (0xfff < element_count) {
            end_ptr = *(longlong *)(start_ptr + -8);
            if (0x1f < (start_ptr - end_ptr) - 8U) {
                // 内存安全检查失败
                _invalid_parameter_noinfo_noreturn(container[2] - start_ptr, element_count + 0x27, param_3, param_4, size_flag);
            }
        }
        free(end_ptr);
        *container = 0;
        container[1] = 0;
        container[2] = 0;
    }
    return;
}

// 函数: 清理链表容器
// 功能: 释放链表容器中的所有节点并重置容器状态
void cleanup_linked_list(longlong *list_container)
{
    longlong current_ptr;
    longlong end_ptr;
    
    current_ptr = *list_container;
    if (current_ptr != 0) {
        end_ptr = list_container[1];
        if (current_ptr != end_ptr) {
            do {
                destroy_node(current_ptr);
                current_ptr = current_ptr + 0x40;
            } while (current_ptr != end_ptr);
            current_ptr = *list_container;
        }
        end_ptr = current_ptr;
        if ((0xfff < (list_container[2] - current_ptr & 0xffffffffffffffc0U)) &&
           (end_ptr = *(longlong *)(current_ptr + -8), 0x1f < (current_ptr - end_ptr) - 8U)) {
            // 内存安全检查失败
            _invalid_parameter_noinfo_noreturn();
        }
        free(end_ptr);
        *list_container = 0;
        list_container[1] = 0;
        list_container[2] = 0;
    }
    return;
}

// 函数: 重置双端队列
// 功能: 重置双端队列到初始状态
void reset_deque(longlong *deque, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    longlong start_ptr;
    
    start_ptr = *deque;
    cleanup_deque_internal(deque, *(undefined8 *)(start_ptr + 8), param_3, param_4, 0xfffffffffffffffe);
    *(longlong *)(*deque + 8) = start_ptr;
    *(longlong *)*deque = start_ptr;
    *(longlong *)(*deque + 0x10) = start_ptr;
    deque[1] = 0;
    // 释放双端队列内存
    free(*deque, 0x60);
    return;
}

// 函数: 释放哈希表
// 功能: 释放哈希表及其所有条目
void free_hash_table(longlong *hash_table, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    longlong start_ptr;
    longlong mem_ptr;
    ulonglong table_size;
    
    start_ptr = *hash_table;
    if (start_ptr != 0) {
        table_size = hash_table[2] - start_ptr & 0xfffffffffffffff8;
        mem_ptr = start_ptr;
        if (0xfff < table_size) {
            mem_ptr = *(longlong *)(start_ptr + -8);
            if (0x1f < (start_ptr - mem_ptr) - 8U) {
                // 内存安全检查失败
                _invalid_parameter_noinfo_noreturn(start_ptr - mem_ptr, table_size + 0x27, mem_ptr, param_4, 0xfffffffffffffffe);
            }
        }
        free(mem_ptr);
        *hash_table = 0;
        hash_table[1] = 0;
        hash_table[2] = 0;
    }
    return;
}

// 函数: 清理红黑树
// 功能: 递归清理红黑树的所有节点
void cleanup_red_black_tree(longlong *tree_root, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    longlong current_ptr;
    longlong *node_ptr;
    longlong root_ptr;
    longlong *next_node;
    undefined8 cleanup_flag;
    
    cleanup_flag = 0xfffffffffffffffe;
    current_ptr = *tree_root;
    next_node = *(longlong **)(current_ptr + 8);
    root_ptr = current_ptr;
    if (*(char *)((longlong)next_node + 0x19) == '\0') {
        do {
            cleanup_tree_node(tree_root, next_node[2], param_3, param_4, cleanup_flag);
            node_ptr = (longlong *)*next_node;
            free(next_node, 0x28);
            next_node = node_ptr;
        } while (*(char *)((longlong)node_ptr + 0x19) == '\0');
        root_ptr = *tree_root;
    }
    *(longlong *)(root_ptr + 8) = current_ptr;
    *(longlong *)*tree_root = current_ptr;
    *(longlong *)(*tree_root + 0x10) = current_ptr;
    tree_root[1] = 0;
    // 释放树节点内存
    free(*tree_root, 0x28);
    return;
}

// 函数: 在映射表中查找键值
// 功能: 在映射表中查找指定的键，返回对应的值指针
undefined8 *find_in_map(longlong *map_container, undefined8 *key_data)
{
    undefined8 *current_node;
    ulonglong key_length;
    ulonglong node_key_length;
    int compare_result;
    longlong element_ptr;
    longlong *node_data;
    undefined8 *node_ptr;
    undefined8 *prev_node;
    undefined8 *next_node;
    ulonglong current_key_len;
    ulonglong min_key_len;
    longlong temp_buffer[2];
    
    current_node = (undefined8 *)*map_container;
    prev_node = current_node;
    if (*(char *)((longlong)current_node[1] + 0x19) == '\0') {
        key_length = key_data[2];
        node_key_length = key_data[3];
        next_node = (undefined8 *)current_node[1];
        do {
            node_data = next_node + 4;
            node_ptr = key_data;
            if (0xf < node_key_length) {
                node_ptr = (undefined8 *)*key_data;
            }
            current_key_len = next_node[6];
            if (0xf < (ulonglong)next_node[7]) {
                node_data = (longlong *)*node_data;
            }
            min_key_len = current_key_len;
            if (key_length < current_key_len) {
                min_key_len = key_length;
            }
            compare_result = memcmp(node_data, node_ptr, min_key_len);
            if (compare_result == 0) {
                if (current_key_len < key_length) goto KEY_NOT_FOUND;
            SAME_NODE:
                node_ptr = (undefined8 *)*next_node;
                prev_node = next_node;
            }
            else {
                if (-1 < compare_result) goto SAME_NODE;
            KEY_NOT_FOUND:
                node_ptr = (undefined8 *)next_node[2];
            }
            next_node = node_ptr;
        } while (*(char *)((longlong)node_ptr + 0x19) == '\0');
    }
    if (prev_node != current_node) {
        node_data = prev_node + 4;
        key_length = prev_node[6];
        if (0xf < (ulonglong)prev_node[7]) {
            node_data = (longlong *)*node_data;
        }
        node_key_length = key_data[2];
        if (0xf < (ulonglong)key_data[3]) {
            key_data = (undefined8 *)*key_data;
        }
        min_key_len = node_key_length;
        if (key_length < node_key_length) {
            min_key_len = key_length;
        }
        compare_result = memcmp(key_data, node_data, min_key_len);
        if (compare_result == 0) {
            if (key_length <= node_key_length) {
            FOUND_KEY:
                return prev_node + 8;
            }
        }
        else if (-1 < compare_result) goto FOUND_KEY;
    }
    element_ptr = allocate_map_element(map_container);
    insert_map_element(map_container, temp_buffer, prev_node, element_ptr + 0x20, element_ptr);
    return (undefined8 *)(temp_buffer[0] + 0x40);
}

// 函数: 在集合中查找元素
// 功能: 在集合数据结构中查找指定的元素
undefined8 *find_in_set(undefined8 set_ptr, longlong element_data)
{
    ulonglong element_len;
    ulonglong node_len;
    int compare_result;
    longlong node_ptr;
    longlong *data_ptr;
    undefined8 *set_root;
    undefined8 *current_node;
    longlong set_info;
    undefined8 *next_node;
    undefined8 *found_node;
    longlong stack_data;
    
    current_node = set_root;
    if (*(char *)((longlong)set_root[1] + 0x19) == '\0') {
        element_len = *(ulonglong *)(element_data + 0x10);
        next_node = (undefined8 *)set_root[1];
        do {
            node_ptr = next_node + 4;
            node_len = next_node[6];
            if (0xf < (ulonglong)next_node[7]) {
                node_ptr = (longlong *)*node_ptr;
            }
            compare_result = memcmp(node_ptr);
            if (compare_result == 0) {
                if (element_len <= node_len) goto SAME_NODE;
            KEY_NOT_FOUND:
                found_node = (undefined8 *)next_node[2];
            }
            else {
                if (compare_result < 0) goto KEY_NOT_FOUND;
            SAME_NODE:
                found_node = (undefined8 *)*next_node;
                current_node = next_node;
            }
            next_node = found_node;
        } while (*(char *)((longlong)found_node + 0x19) == '\0');
    }
    if (current_node != set_root) {
        element_len = current_node[6];
        node_len = *(ulonglong *)(set_info + 0x10);
        compare_result = memcmp();
        if (compare_result == 0) {
            if (element_len <= node_len) {
            FOUND_ELEMENT:
                return current_node + 8;
            }
        }
        else if (-1 < compare_result) goto FOUND_ELEMENT;
    }
    node_ptr = allocate_set_element(set_ptr);
    insert_set_element(set_ptr, &stack_data, current_node, node_ptr + 0x20, node_ptr);
    return (undefined8 *)(stack_data + 0x40);
}

// 函数: 在有序集合中查找
// 功能: 在有序集合数据结构中查找元素位置
undefined8 *find_in_ordered_set(undefined8 set_ptr, longlong element_data)
{
    ulonglong element_len;
    ulonglong node_len;
    int compare_result;
    longlong *node_ptr;
    undefined8 *set_root;
    longlong set_info;
    undefined8 *set_end;
    undefined8 *current_node;
    undefined8 *found_node;
    longlong stack_data;
    
    element_len = *(ulonglong *)(element_data + 0x10);
    do {
        node_ptr = set_end + 4;
        node_len = set_end[6];
        if (0xf < (ulonglong)set_end[7]) {
            node_ptr = (longlong *)*node_ptr;
        }
        compare_result = memcmp(node_ptr);
        if (compare_result == 0) {
            if (element_len <= node_len) goto SAME_NODE;
        KEY_NOT_FOUND:
            found_node = (undefined8 *)set_end[2];
        }
        else {
            if (compare_result < 0) goto KEY_NOT_FOUND;
        SAME_NODE:
            found_node = (undefined8 *)*set_end;
            set_root = set_end;
        }
        set_end = found_node;
    } while (*(char *)((longlong)found_node + 0x19) == '\0');
    if (set_root != found_node) {
        element_len = set_root[6];
        node_len = *(ulonglong *)(set_info + 0x10);
        compare_result = memcmp();
        if (compare_result == 0) {
            if (element_len <= node_len) {
            FOUND_ELEMENT:
                return set_root + 8;
            }
        }
        else if (-1 < compare_result) goto FOUND_ELEMENT;
    }
    allocate_set_element();
    insert_set_element();
    return (undefined8 *)(stack_data + 0x40);
}

// 函数: 获取堆栈元素
// 功能: 从堆栈数据结构中获取元素
longlong get_stack_element(void)
{
    ulonglong element_size;
    ulonglong max_size;
    int compare_result;
    longlong stack_ptr;
    longlong stack_info;
    longlong stack_limit;
    longlong stack_data;
    
    if (stack_ptr != stack_limit) {
        element_size = *(ulonglong *)(stack_ptr + 0x30);
        max_size = *(ulonglong *)(stack_info + 0x10);
        compare_result = memcmp();
        if (compare_result == 0) {
            if (element_size <= max_size) {
            FOUND_ELEMENT:
                return stack_ptr + 0x40;
            }
        }
        else if (-1 < compare_result) goto FOUND_ELEMENT;
    }
    allocate_stack_element();
    insert_stack_element();
    return stack_data + 0x40;
}

// 函数: 检查堆栈顶部
// 功能: 检查堆栈顶部的元素
longlong peek_stack(void)
{
    ulonglong element_size;
    ulonglong max_size;
    int compare_result;
    longlong stack_ptr;
    longlong stack_info;
    longlong stack_data;
    
    element_size = *(ulonglong *)(stack_ptr + 0x30);
    max_size = *(ulonglong *)(stack_info + 0x10);
    compare_result = memcmp();
    if (compare_result == 0) {
        if (element_size <= max_size) {
        FOUND_ELEMENT:
            return stack_ptr + 0x40;
        }
    }
    else if (-1 < compare_result) goto FOUND_ELEMENT;
    allocate_stack_element();
    insert_stack_element();
    return stack_data + 0x40;
}

// 函数: 在树结构中查找
// 功能: 在树形数据结构中查找指定元素
undefined8 *find_in_tree(void)
{
    ulonglong element_size;
    ulonglong node_size;
    int compare_result;
    longlong *node_data;
    undefined8 *tree_root;
    longlong tree_info;
    undefined8 *current_node;
    undefined8 *tree_end;
    undefined8 *found_node;
    ulonglong tree_size;
    undefined1 comparison_flag;
    longlong stack_data;
    
FIND_IN_TREE_ENTRY:
    if (!(bool)comparison_flag) goto SAME_NODE;
KEY_NOT_FOUND:
    current_node = (undefined8 *)current_node[2];
    do {
        if (*(char *)((longlong)current_node + 0x19) != '\0') {
            if (tree_root != found_node) {
                element_size = tree_root[6];
                node_size = *(ulonglong *)(tree_info + 0x10);
                compare_result = memcmp();
                if (compare_result == 0) {
                    if (element_size <= node_size) {
                    FOUND_NODE:
                        return tree_root + 8;
                    }
                }
                else if (-1 < compare_result) goto FOUND_NODE;
            }
            allocate_tree_element();
            insert_tree_element();
            return (undefined8 *)(stack_data + 0x40);
        }
        node_data = current_node + 4;
        element_size = current_node[6];
        if (0xf < (ulonglong)current_node[7]) {
            node_data = (longlong *)*node_data;
        }
        compare_result = memcmp(node_data);
        comparison_flag = compare_result < 0;
        if (compare_result != 0) goto FIND_IN_TREE_ENTRY;
        if (element_size < tree_size) goto KEY_NOT_FOUND;
    SAME_NODE:
        tree_root = current_node;
        current_node = (undefined8 *)*tree_root;
    } while( true );
}

// 函数: 获取树节点值
// 功能: 获取树节点的值
longlong get_tree_node_value(void)
{
    longlong tree_root;
    bool comparison_flag;
    longlong stack_data;
    
    if (!comparison_flag) {
        return tree_root + 0x40;
    }
    allocate_tree_element();
    insert_tree_element();
    return stack_data + 0x40;
}

// 函数: 清理位图容器
// 功能: 释放位图容器的内存
void cleanup_bitmap_container(longlong *bitmap, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    longlong start_ptr;
    longlong mem_ptr;
    ulonglong bitmap_size;
    
    start_ptr = *bitmap;
    if (start_ptr != 0) {
        bitmap_size = bitmap[2] - start_ptr & 0xfffffffffffffffc;
        mem_ptr = start_ptr;
        if (0xfff < bitmap_size) {
            mem_ptr = *(longlong *)(start_ptr + -8);
            if (0x1f < (start_ptr - mem_ptr) - 8U) {
                // 内存安全检查失败
                _invalid_parameter_noinfo_noreturn(start_ptr - mem_ptr, bitmap_size + 0x27, mem_ptr, param_4, 0xfffffffffffffffe);
            }
        }
        free(mem_ptr);
        *bitmap = 0;
        bitmap[1] = 0;
        bitmap[2] = 0;
    }
    return;
}

// 函数: 释放固定大小缓冲区
// 功能: 释放固定大小的内存缓冲区
void free_fixed_buffer(undefined8 *buffer_ptr)
{
    // 释放固定大小缓冲区
    free(*buffer_ptr, 0x60);
    return;
}

// 函数: 重置环形缓冲区
// 功能: 重置环形缓冲区到初始状态
void reset_circular_buffer(longlong *buffer, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    longlong start_ptr;
    
    start_ptr = *buffer;
    cleanup_buffer_internal(buffer, *(undefined8 *)(start_ptr + 8), param_3, param_4, 0xfffffffffffffffe);
    *(longlong *)(*buffer + 8) = start_ptr;
    *(longlong *)*buffer = start_ptr;
    *(longlong *)(*buffer + 0x10) = start_ptr;
    buffer[1] = 0;
    return;
}

// 函数: 释放对象池
// 功能: 释放对象池中的所有对象
void free_object_pool(undefined8 pool_ptr, longlong *object_ptr, undefined8 param_3, undefined8 param_4)
{
    longlong *pool_data;
    
    if (object_ptr != (longlong *)0x0) {
        pool_data = (longlong *)object_ptr[7];
        if (pool_data != (longlong *)0x0) {
            (**(code **)(*pool_data + 0x20))(pool_data, pool_data != object_ptr, param_3, param_4, 0xfffffffffffffffe);
            object_ptr[7] = 0;
        }
        free(object_ptr, 0x48);
    }
    return;
}

// 函数: 释放链表节点
// 功能: 释放链表节点内存
void free_linked_list_node(undefined8 *node_ptr)
{
    // 释放链表节点内存
    free(*node_ptr, 0x28);
    return;
}

// 函数: 转移对象引用
// 功能: 将对象引用从一个容器转移到另一个
void transfer_object_reference(longlong target_ptr, longlong *source_ptr)
{
    longlong *object_ref;
    undefined8 ref_data;
    
    object_ref = (longlong *)source_ptr[7];
    if (object_ref != (longlong *)0x0) {
        if (object_ref == source_ptr) {
            ref_data = (**(code **)(*object_ref + 8))(object_ref, target_ptr);
            *(undefined8 *)(target_ptr + 0x38) = ref_data;
            object_ref = (longlong *)source_ptr[7];
            if (object_ref != (longlong *)0x0) {
                (**(code **)(*object_ref + 0x20))(object_ref, object_ref != source_ptr);
                source_ptr[7] = 0;
                return;
            }
        }
        else {
            *(longlong **)(target_ptr + 0x38) = object_ref;
            source_ptr[7] = 0;
        }
    }
    return;
}

// 函数: 批量释放对象数组
// 功能: 释放对象数组中的所有对象
void free_object_array(undefined8 pool_ptr, longlong array_ptr, longlong count)
{
    longlong mem_ptr;
    ulonglong total_size;
    
    total_size = count * 0x10;
    mem_ptr = array_ptr;
    if (0xfff < total_size) {
        mem_ptr = *(longlong *)(array_ptr + -8);
        total_size = total_size + 0x27;
        if (0x1f < (array_ptr - mem_ptr) - 8U) {
            // 内存安全检查失败
            _invalid_parameter_noinfo_noreturn();
        }
    }
    // 批量释放对象
    free(mem_ptr, total_size);
    return;
}

// 函数: 批量释放结构体数组
// 功能: 释放结构体数组中的所有元素
void free_struct_array(undefined8 pool_ptr, longlong array_ptr, longlong count)
{
    longlong mem_ptr;
    
    mem_ptr = array_ptr;
    if (0xfff < (ulonglong)(count * 0x18)) {
        mem_ptr = *(longlong *)(array_ptr + -8);
        if (0x1f < (array_ptr - mem_ptr) - 8U) {
            // 内存安全检查失败
            _invalid_parameter_noinfo_noreturn(mem_ptr, count * 0x18 + 0x27);
        }
    }
    // 释放结构体数组
    free(mem_ptr);
    return;
}

// 函数: 批量释放容器数组
// 功能: 释放容器数组中的所有容器
void free_container_array(undefined8 pool_ptr, longlong array_ptr, longlong count)
{
    longlong mem_ptr;
    
    mem_ptr = array_ptr;
    if (0xfff < (ulonglong)(count * 0x28)) {
        mem_ptr = *(longlong *)(array_ptr + -8);
        if (0x1f < (array_ptr - mem_ptr) - 8U) {
            // 内存安全检查失败
            _invalid_parameter_noinfo_noreturn(mem_ptr, count * 0x28 + 0x27);
        }
    }
    // 释放容器数组
    free(mem_ptr);
    return;
}

// 函数: 迭代释放数组元素
// 功能: 迭代释放数组中的每个元素
void iterate_free_array_elements(undefined8 pool_ptr, longlong start_ptr, longlong end_ptr)
{
    if (start_ptr != end_ptr) {
        do {
            release_element(start_ptr);
            start_ptr = start_ptr + 0x28;
        } while (start_ptr != end_ptr);
    }
    return;
}

// 函数: 迭代释放链表节点
// 功能: 迭代释放链表中的每个节点
void iterate_free_list_nodes(undefined8 pool_ptr, longlong start_ptr, longlong end_ptr)
{
    if (start_ptr != end_ptr) {
        do {
            destroy_node(start_ptr);
            start_ptr = start_ptr + 0x40;
        } while (start_ptr != end_ptr);
    }
    return;
}

// 函数: 批量释放对象块
// 功能: 释放对象内存块
void free_object_block(undefined8 pool_ptr, longlong block_ptr, longlong count)
{
    longlong mem_ptr;
    ulonglong total_size;
    
    total_size = count * 0x40;
    mem_ptr = block_ptr;
    if (0xfff < total_size) {
        mem_ptr = *(longlong *)(block_ptr + -8);
        total_size = total_size + 0x27;
        if (0x1f < (block_ptr - mem_ptr) - 8U) {
            // 内存安全检查失败
            _invalid_parameter_noinfo_noreturn();
        }
    }
    // 释放对象块
    free(mem_ptr, total_size);
    return;
}

// 函数: 批量释放指针数组
// 功能: 释放指针数组中的所有指针
void free_pointer_array(undefined8 pool_ptr, longlong array_ptr, longlong count)
{
    longlong mem_ptr;
    
    mem_ptr = array_ptr;
    if (0xfff < (ulonglong)(count * 8)) {
        mem_ptr = *(longlong *)(array_ptr + -8);
        if (0x1f < (array_ptr - mem_ptr) - 8U) {
            // 内存安全检查失败
            _invalid_parameter_noinfo_noreturn(mem_ptr, count * 8 + 0x27);
        }
    }
    // 释放指针数组
    free(mem_ptr);
    return;
}

// 函数: 批量释放整数数组
// 功能: 释放整数数组中的所有元素
void free_integer_array(undefined8 pool_ptr, longlong array_ptr, longlong count)
{
    longlong mem_ptr;
    
    mem_ptr = array_ptr;
    if (0xfff < (ulonglong)(count * 4)) {
        mem_ptr = *(longlong *)(array_ptr + -8);
        if (0x1f < (array_ptr - mem_ptr) - 8U) {
            // 内存安全检查失败
            _invalid_parameter_noinfo_noreturn(mem_ptr, count * 4 + 0x27);
        }
    }
    // 释放整数数组
    free(mem_ptr);
    return;
}

// 函数: 初始化双端队列
// 功能: 初始化双端队列数据结构
void initialize_deque(void)
{
    longlong deque_ptr;
    
    deque_ptr = allocate_memory(0x60);
    *(longlong *)deque_ptr = deque_ptr;
    *(longlong *)(deque_ptr + 8) = deque_ptr;
    *(longlong *)(deque_ptr + 0x10) = deque_ptr;
    *(undefined2 *)(deque_ptr + 0x18) = 0x101;
    return;
}

// 函数: 递归清理双端队列
// 功能: 递归清理双端队列的所有节点
void cleanup_deque_recursive(undefined8 deque_ptr, longlong *node_ptr, undefined8 param_3, undefined8 param_4)
{
    char node_flag;
    longlong *next_node;
    undefined8 cleanup_flag;
    
    cleanup_flag = 0xfffffffffffffffe;
    node_flag = *(char *)((longlong)node_ptr + 0x19);
    while (node_flag == '\0') {
        cleanup_deque_recursive(deque_ptr, node_ptr[2], param_3, param_4, cleanup_flag);
        next_node = (longlong *)*node_ptr;
        release_element(node_ptr + 8);
        release_element(node_ptr + 4);
        free(node_ptr, 0x60);
        node_ptr = next_node;
        node_flag = *(char *)((longlong)next_node + 0x19);
    }
    return;
}

// 函数: 初始化链表
// 功能: 初始化链表数据结构
void initialize_linked_list(void)
{
    longlong list_ptr;
    
    list_ptr = allocate_memory(0x28);
    *(longlong *)list_ptr = list_ptr;
    *(longlong *)(list_ptr + 8) = list_ptr;
    *(longlong *)(list_ptr + 0x10) = list_ptr;
    *(undefined2 *)(list_ptr + 0x18) = 0x101;
    return;
}

// 函数: 递归清理链表
// 功能: 递归清理链表的所有节点
void cleanup_linked_list_recursive(undefined8 list_ptr, longlong *node_ptr)
{
    char node_flag;
    longlong *next_node;
    
    node_flag = *(char *)((longlong)node_ptr + 0x19);
    while (node_flag == '\0') {
        cleanup_linked_list_recursive(list_ptr, node_ptr[2]);
        next_node = (longlong *)*node_ptr;
        free(node_ptr, 0x28);
        node_ptr = next_node;
        node_flag = *(char *)((longlong)next_node + 0x19);
    }
    return;
}

// 函数: 创建资源句柄
// 功能: 创建资源句柄并初始化相关数据
void create_resource_handle(longlong resource_id, undefined8 *resource_data)
{
    undefined8 handle_data;
    undefined1 stack_buffer[32];
    undefined8 stack_data1;
    undefined *stack_ptr;
    undefined8 stack_data2;
    undefined1 stack_flag1;
    undefined1 stack_flag2;
    undefined8 stack_data3;
    undefined **stack_ptr_ptr;
    longlong temp_buffer[7];
    longlong *temp_ptr;
    ulonglong checksum;
    
    stack_data1 = 0xfffffffffffffffe;
    checksum = RESOURCE_CHECKSUM ^ (ulonglong)stack_buffer;
    stack_data2 = *resource_data;
    stack_flag1 = *(undefined1 *)(resource_data + 1);
    stack_flag2 = *(undefined1 *)((longlong)resource_data + 9);
    stack_data3 = resource_data[2];
    stack_ptr = &RESOURCE_MARKER;
    stack_ptr_ptr = &stack_ptr;
    temp_ptr = (longlong *)0x0;
    if ((stack_ptr_ptr != (undefined **)0x0) &&
       (temp_ptr = (longlong *)(*(code *)&INITIALIZE_RESOURCE_HANDLE)(stack_ptr_ptr, temp_buffer),
       stack_ptr_ptr != (undefined **)0x0)) {
        (**(code **)(*stack_ptr_ptr + 0x20))
                  (stack_ptr_ptr, CONCAT71((int7)((ulonglong)&stack_ptr >> 8), stack_ptr_ptr != &stack_ptr));
        stack_ptr_ptr = (undefined **)0x0;
    }
    transfer_object_reference(&stack_ptr, resource_id);
    if (temp_ptr != (longlong *)0x0) {
        if (temp_ptr == temp_buffer) {
            handle_data = (**(code **)(*temp_ptr + 8))(temp_ptr, resource_id);
            *(undefined8 *)(resource_id + 0x38) = handle_data;
            if (temp_ptr == (longlong *)0x0) goto CLEANUP_COMPLETE;
            (**(code **)(*temp_ptr + 0x20))
                    (temp_ptr, CONCAT71((int7)((ulonglong)temp_buffer >> 8), temp_ptr != temp_buffer));
        }
        else {
            *(longlong **)(resource_id + 0x38) = temp_ptr;
        }
        temp_ptr = (longlong *)0x0;
    }
CLEANUP_COMPLETE:
    if (temp_ptr != (longlong *)0x0) {
        (**(code **)(*temp_ptr + 0x20))
                  (temp_ptr, CONCAT71((int7)((ulonglong)temp_buffer >> 8), temp_ptr != temp_buffer));
        temp_ptr = (longlong *)0x0;
    }
    if (stack_ptr_ptr != (undefined **)0x0) {
        (**(code **)(*stack_ptr_ptr + 0x20))(stack_ptr_ptr, stack_ptr_ptr != &stack_ptr);
        stack_ptr_ptr = (undefined **)0x0;
    }
    // 完成资源句柄创建
    complete_resource_creation(checksum ^ (ulonglong)stack_buffer);
}

// 函数: 向向量容器插入元素
// 功能: 向向量容器中插入新元素
void insert_into_vector(longlong *vector, longlong position, undefined4 *element_data, undefined8 param_4)
{
    code *exception_handler;
    undefined4 elem_data1;
    undefined4 elem_data2;
    undefined4 elem_data3;
    undefined4 elem_data4;
    ulonglong capacity;
    longlong start_ptr;
    ulonglong new_capacity;
    longlong end_ptr;
    undefined4 *target_ptr;
    undefined1 temp_buffer[8];
    ulonglong required_size;
    longlong new_memory;
    undefined8 insert_flag;
    
    insert_flag = 0xfffffffffffffffe;
    end_ptr = *vector;
    start_ptr = vector[1] - end_ptr >> 4;
    if (start_ptr == 0xfffffffffffffff) {
        handle_vector_overflow();
        exception_handler = (code *)swi(3);
        (*exception_handler)();
        return;
    }
    new_capacity = start_ptr + 1;
    capacity = vector[2] - end_ptr >> 4;
    required_size = new_capacity;
    if ((capacity <= 0xfffffffffffffff - (capacity >> 1)) &&
       (required_size = (capacity >> 1) + capacity, required_size < new_capacity)) {
        required_size = new_capacity;
    }
    start_ptr = required_size << 4;
    if (0xfffffffffffffff < required_size) {
        start_ptr = -1;
    }
    start_ptr = allocate_memory(start_ptr);
    target_ptr = (undefined4 *)((position - end_ptr & 0xfffffffffffffff0U) + start_ptr);
    elem_data1 = element_data[1];
    elem_data2 = element_data[2];
    elem_data3 = element_data[3];
    elem_data4 = element_data[4];
    *target_ptr = *element_data;
    target_ptr[1] = elem_data1;
    target_ptr[2] = elem_data2;
    target_ptr[3] = elem_data3;
    target_ptr[4] = elem_data4;
    end_ptr = vector[1];
    new_memory = start_ptr;
    resize_vector(temp_buffer, *vector, end_ptr, param_4, insert_flag);
    if (position != end_ptr) {
        // 移动现有元素
        memmove(new_memory);
    }
    // 完成插入操作
    memmove(new_memory);
}

// 函数: 在哈希表中插入键值对
// 功能: 向哈希表中插入新的键值对
undefined8 *insert_into_hash_table(longlong *hash_table, longlong key_hash, undefined8 *key_data)
{
    ulonglong bucket_count;
    code *exception_handler;
    undefined8 *bucket_ptr;
    undefined8 *new_bucket;
    longlong current_size;
    longlong table_size;
    ulonglong max_buckets;
    longlong start_ptr;
    ulonglong new_bucket_count;
    undefined8 *current_bucket;
    undefined8 *insertion_point;
    undefined8 *next_bucket;
    undefined8 insert_flag;
    
    insert_flag = 0xfffffffffffffffe;
    start_ptr = *hash_table;
    current_size = (key_hash - start_ptr) / 6 + (key_hash - start_ptr >> 0x3f);
    table_size = (hash_table[1] - start_ptr) / 0x18;
    if (table_size == 0xaaaaaaaaaaaaaaa) {
        handle_hash_table_overflow();
        exception_handler = (code *)swi(3);
        new_bucket = (undefined8 *)(*exception_handler)();
        return new_bucket;
    }
    bucket_count = table_size + 1;
    max_buckets = (hash_table[2] - start_ptr) / 0x18;
    new_bucket_count = bucket_count;
    if ((max_buckets <= 0xaaaaaaaaaaaaaaa - (max_buckets >> 1)) && 
        (new_bucket_count = max_buckets + (max_buckets >> 1), new_bucket_count < bucket_count)) {
        new_bucket_count = bucket_count;
    }
    bucket_ptr = (undefined8 *)allocate_memory();
    new_bucket = bucket_ptr + ((current_size >> 2) - (current_size >> 0x3f)) * 3;
    *new_bucket = 0;
    new_bucket[1] = 0;
    new_bucket[2] = 0;
    *new_bucket = *key_data;
    new_bucket[1] = key_data[1];
    new_bucket[2] = key_data[2];
    *key_data = 0;
    key_data[1] = 0;
    key_data[2] = 0;
    start_ptr = hash_table[1];
    table_size = *hash_table;
    current_bucket = bucket_ptr;
    insertion_point = new_bucket;
    next_bucket = bucket_ptr;
    if (key_hash != start_ptr) {
        rehash_hash_table(*hash_table, key_hash, bucket_ptr, hash_table, new_bucket, bucket_ptr, insert_flag);
        start_ptr = hash_table[1];
        table_size = key_hash;
        current_bucket = new_bucket + 3;
        insertion_point = bucket_ptr;
    }
    rehash_hash_table(table_size, start_ptr, current_bucket, hash_table, insertion_point, next_bucket, insert_flag);
    if (*hash_table != 0) {
        cleanup_old_hash_table(*hash_table, hash_table[1]);
        start_ptr = *hash_table;
        max_buckets = ((hash_table[2] - start_ptr) / 0x18) * 0x18;
        table_size = start_ptr;
        if (0xfff < max_buckets) {
            table_size = *(longlong *)(start_ptr + -8);
            if (0x1f < (start_ptr - table_size) - 8U) {
                // 内存安全检查失败
                _invalid_parameter_noinfo_noreturn(table_size, max_buckets + 0x27);
            }
        }
        free(table_size);
    }
    *hash_table = (longlong)bucket_ptr;
    hash_table[1] = (longlong)(bucket_ptr + new_bucket_count * 3);
    hash_table[2] = (longlong)(bucket_ptr + new_bucket_count * 3);
    return new_bucket;
}