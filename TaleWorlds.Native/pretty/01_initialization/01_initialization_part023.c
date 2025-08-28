#include "TaleWorlds.Native.Split.h"

// 01_initialization_part023.c - 初始化模块第23部分
// 包含27个函数，主要负责内存管理、对象清理和资源释放工作

// 函数: 清理对象数组并释放资源
// 原始实现: FUN_180057550
// 功能: 遍历对象管理器中的对象数组，逐个释放对象资源，并清理内存
void cleanup_object_array_and_free_resources(longlong object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    int *memory_pool_count_ptr;
    longlong object_ptr;
    undefined8 *object_array_ptr;
    longlong memory_pool_data;
    ulonglong object_count;
    ulonglong index;
    
    // 获取对象数组大小
    object_count = *(ulonglong *)(object_manager + 0x10);
    memory_pool_data = *(longlong *)(object_manager + 8);
    index = 0;
    if (object_count != 0) {
        do {
            // 遍历对象数组
            object_ptr = *(longlong *)(memory_pool_data + index * 8);
            if (object_ptr != 0) {
                // 释放对象资源
                release_object_resources(object_ptr);
            }
            // 清空对象指针
            *(undefined8 *)(memory_pool_data + index * 8) = 0;
            index = index + 1;
        } while (index < object_count);
        object_count = *(ulonglong *)(object_manager + 0x10);
    }
    // 重置管理器状态
    *(undefined8 *)(object_manager + 0x18) = 0;
    if ((1 < object_count) && (object_array_ptr = *(undefined8 **)(object_manager + 8), object_array_ptr != (undefined8 *)0x0)) {
        // 处理内存池释放
        object_count = (ulonglong)object_array_ptr & 0xffffffffffc00000;
        if (object_count != 0) {
            memory_pool_data = object_count + 0x80 + ((longlong)object_array_ptr - object_count >> 0x10) * 0x50;
            memory_pool_data = memory_pool_data - (ulonglong)*(uint *)(memory_pool_data + 4);
            if ((*(void ***)(object_count + 0x70) == &ExceptionList) && (*(char *)(memory_pool_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(undefined8 *)(memory_pool_data + 0x20);
                *(undefined8 **)(memory_pool_data + 0x20) = object_array_ptr;
                memory_pool_count_ptr = (int *)(memory_pool_data + 0x18);
                *memory_pool_count_ptr = *memory_pool_count_ptr + -1;
                if (*memory_pool_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(object_count, CONCAT71(0xff000000, *(void ***)(object_count + 0x70) == &ExceptionList),
                                 object_array_ptr, object_count, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 清理对象数组并释放资源（变体1）
// 原始实现: FUN_180057556
// 功能: 与主函数类似，但可能在不同的上下文中使用，用于对象资源清理
void cleanup_object_array_and_free_resources_variant1(longlong object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    int *memory_pool_count_ptr;
    longlong object_ptr;
    undefined8 *object_array_ptr;
    longlong memory_pool_data;
    ulonglong object_count;
    ulonglong index;
    
    // 获取对象数组大小
    object_count = *(ulonglong *)(object_manager + 0x10);
    memory_pool_data = *(longlong *)(object_manager + 8);
    index = 0;
    if (object_count != 0) {
        do {
            // 遍历对象数组
            object_ptr = *(longlong *)(memory_pool_data + index * 8);
            if (object_ptr != 0) {
                // 释放对象资源
                release_object_resources(object_ptr);
            }
            // 清空对象指针
            *(undefined8 *)(memory_pool_data + index * 8) = 0;
            index = index + 1;
        } while (index < object_count);
        object_count = *(ulonglong *)(object_manager + 0x10);
    }
    // 重置管理器状态
    *(undefined8 *)(object_manager + 0x18) = 0;
    if ((1 < object_count) && (object_array_ptr = *(undefined8 **)(object_manager + 8), object_array_ptr != (undefined8 *)0x0)) {
        // 处理内存池释放
        object_count = (ulonglong)object_array_ptr & 0xffffffffffc00000;
        if (object_count != 0) {
            memory_pool_data = object_count + 0x80 + ((longlong)object_array_ptr - object_count >> 0x10) * 0x50;
            memory_pool_data = memory_pool_data - (ulonglong)*(uint *)(memory_pool_data + 4);
            if ((*(void ***)(object_count + 0x70) == &ExceptionList) && (*(char *)(memory_pool_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(undefined8 *)(memory_pool_data + 0x20);
                *(undefined8 **)(memory_pool_data + 0x20) = object_array_ptr;
                memory_pool_count_ptr = (int *)(memory_pool_data + 0x18);
                *memory_pool_count_ptr = *memory_pool_count_ptr + -1;
                if (*memory_pool_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(object_count, CONCAT71(0xff000000, *(void ***)(object_count + 0x70) == &ExceptionList),
                                 object_array_ptr, object_count, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 清理对象数组并释放资源（变体2）
// 原始实现: FUN_180057580
void cleanup_object_array_and_free_resources_variant2(void)
{
    int *resource_count_ptr;
    undefined8 *object_array_ptr;
    longlong manager_data;
    longlong object_manager_ptr;
    ulonglong array_size;
    ulonglong object_count;
    ulonglong index;
    longlong array_base;
    undefined8 empty_value;
    
    do {
        // 遍历对象数组
        manager_data = *(longlong *)(array_base + object_count * 8);
        if (manager_data != 0) {
            // 释放对象资源
            release_object_resources(manager_data);
        }
        *(undefined8 *)(array_base + object_count * 8) = empty_value;
        object_count = object_count + 1;
    } while (object_count < array_size);
    *(undefined8 *)(object_manager_ptr + 0x18) = empty_value;
    if ((1 < *(ulonglong *)(object_manager_ptr + 0x10)) &&
       (object_array_ptr = *(undefined8 **)(object_manager_ptr + 8), object_array_ptr != (undefined8 *)0x0)) {
        array_size = (ulonglong)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((longlong)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (ulonglong)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(undefined8 *)(manager_data + 0x20);
                *(undefined8 **)(manager_data + 0x20) = object_array_ptr;
                resource_count_ptr = (int *)(manager_data + 0x18);
                *resource_count_ptr = *resource_count_ptr + -1;
                if (*resource_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                                 object_array_ptr, array_size, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 清理对象数组并释放资源（变体3）
// 原始实现: FUN_1800575b6
void cleanup_object_array_and_free_resources_variant3(void)
{
    int *resource_count_ptr;
    undefined8 *object_array_ptr;
    longlong manager_data;
    longlong object_manager_ptr;
    ulonglong array_size;
    ulonglong object_count;
    undefined8 empty_value;
    
    *(undefined8 *)(object_manager_ptr + 0x18) = empty_value;
    if ((1 < object_count) && (object_array_ptr = *(undefined8 **)(object_manager_ptr + 8), object_array_ptr != (undefined8 *)0x0)) {
        array_size = (ulonglong)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((longlong)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (ulonglong)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(undefined8 *)(manager_data + 0x20);
                *(undefined8 **)(manager_data + 0x20) = object_array_ptr;
                resource_count_ptr = (int *)(manager_data + 0x18);
                *resource_count_ptr = *resource_count_ptr + -1;
                if (*resource_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                                 object_array_ptr, array_size, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 释放对象管理器资源
// 原始实现: FUN_1800575d4
void release_object_manager_resources(void)
{
    int *resource_count_ptr;
    undefined8 *object_array_ptr;
    longlong manager_data;
    longlong object_manager_ptr;
    ulonglong array_size;
    
    // 获取对象数组指针
    object_array_ptr = *(undefined8 **)(object_manager_ptr + 8);
    if (object_array_ptr == (undefined8 *)0x0) {
        return;
    }
    // 处理内存池释放
    array_size = (ulonglong)object_array_ptr & 0xffffffffffc00000;
    if (array_size != 0) {
        manager_data = array_size + 0x80 + ((longlong)object_array_ptr - array_size >> 0x10) * 0x50;
        manager_data = manager_data - (ulonglong)*(uint *)(manager_data + 4);
        if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
            // 释放到内存池
            *object_array_ptr = *(undefined8 *)(manager_data + 0x20);
            *(undefined8 **)(manager_data + 0x20) = object_array_ptr;
            resource_count_ptr = (int *)(manager_data + 0x18);
            *resource_count_ptr = *resource_count_ptr + -1;
            if (*resource_count_ptr == 0) {
                cleanup_memory_pool();
                return;
            }
        }
        else {
            // 使用通用释放函数
            free_memory_block(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                             object_array_ptr, array_size, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: 递归清理对象链表
// 原始实现: FUN_1800575f0
void recursively_cleanup_object_chain(longlong object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    // 递归调用清理函数
    cleanup_object_chain_recursive(object_manager, *(undefined8 *)(object_manager + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

// 函数: 清理对象链表（迭代方式）
// 原始实现: FUN_180057610
void cleanup_object_chain_iterative(longlong *chain_head, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    undefined8 *current_node;
    undefined8 *end_node;
    undefined8 cleanup_flag;
    
    cleanup_flag = 0xfffffffffffffffe;
    end_node = (undefined8 *)chain_head[1];
    for (current_node = (undefined8 *)*chain_head; current_node != end_node; current_node = current_node + 0x69) {
        // 调用每个对象的清理函数
        (**(code **)*current_node)(current_node, 0, param_3, param_4, cleanup_flag);
    }
    if (*chain_head == 0) {
        return;
    }
    // 释放链表头节点
    release_memory_block();
}

// 函数: 清理对象数组并调用析构函数
// 原始实现: FUN_180057680
void cleanup_object_array_and_call_destructors(longlong object_manager)
{
    longlong object_ptr;
    longlong destructor_ptr;
    ulonglong array_size;
    ulonglong index;
    
    array_size = *(ulonglong *)(object_manager + 0x10);
    object_ptr = *(longlong *)(object_manager + 8);
    index = 0;
    if (array_size != 0) {
        do {
            destructor_ptr = *(longlong *)(object_ptr + index * 8);
            if (destructor_ptr != 0) {
                // 调用对象的析构函数
                if (*(longlong **)(destructor_ptr + 0x10) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(destructor_ptr + 0x10) + 0x38))();
                }
                // 释放对象资源
                release_object_resources(destructor_ptr);
            }
            *(undefined8 *)(object_ptr + index * 8) = 0;
            index = index + 1;
        } while (index < array_size);
        array_size = *(ulonglong *)(object_manager + 0x10);
    }
    *(undefined8 *)(object_manager + 0x18) = 0;
    if ((1 < array_size) && (*(longlong *)(object_manager + 8) != 0)) {
        // 释放管理器资源
        release_memory_block();
    }
    return;
}

// 函数: 清理对象队列
// 原始实现: FUN_180057730
void cleanup_object_queue(longlong *queue_head)
{
    longlong queue_end;
    longlong current_node;
    
    queue_end = queue_head[1];
    for (current_node = *queue_head; current_node != queue_end; current_node = current_node + 0x18) {
        // 释放队列节点
        release_queue_node(current_node);
    }
    if (*queue_head == 0) {
        return;
    }
    // 释放队列头
    release_memory_block();
}

// 函数: 清理对象数组并释放资源（变体4）
// 原始实现: FUN_180057790
void cleanup_object_array_and_free_resources_variant4(longlong object_manager)
{
    int *resource_count_ptr;
    longlong object_ptr;
    undefined8 *object_array_ptr;
    longlong manager_data;
    ulonglong array_size;
    ulonglong index;
    
    // 获取对象数组大小
    array_size = *(ulonglong *)(object_manager + 0x10);
    manager_data = *(longlong *)(object_manager + 8);
    index = 0;
    if (array_size != 0) {
        do {
            // 遍历对象数组
            object_ptr = *(longlong *)(manager_data + index * 8);
            if (object_ptr != 0) {
                // 释放对象资源
                release_object_resources(object_ptr);
            }
            // 清空对象指针
            *(undefined8 *)(manager_data + index * 8) = 0;
            index = index + 1;
        } while (index < array_size);
        array_size = *(ulonglong *)(object_manager + 0x10);
    }
    // 重置管理器状态
    *(undefined8 *)(object_manager + 0x18) = 0;
    if ((1 < array_size) && (object_array_ptr = *(undefined8 **)(object_manager + 8), object_array_ptr != (undefined8 *)0x0)) {
        // 处理内存池释放
        array_size = (ulonglong)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((longlong)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (ulonglong)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(undefined8 *)(manager_data + 0x20);
                *(undefined8 **)(manager_data + 0x20) = object_array_ptr;
                resource_count_ptr = (int *)(manager_data + 0x18);
                *resource_count_ptr = *resource_count_ptr + -1;
                if (*resource_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                                 object_array_ptr, array_size, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 清理对象数组并释放资源（变体5）
// 原始实现: FUN_180057796
void cleanup_object_array_and_free_resources_variant5(longlong object_manager)
{
    int *resource_count_ptr;
    longlong object_ptr;
    undefined8 *object_array_ptr;
    longlong manager_data;
    ulonglong array_size;
    ulonglong index;
    
    // 获取对象数组大小
    array_size = *(ulonglong *)(object_manager + 0x10);
    manager_data = *(longlong *)(object_manager + 8);
    index = 0;
    if (array_size != 0) {
        do {
            // 遍历对象数组
            object_ptr = *(longlong *)(manager_data + index * 8);
            if (object_ptr != 0) {
                // 释放对象资源
                release_object_resources(object_ptr);
            }
            // 清空对象指针
            *(undefined8 *)(manager_data + index * 8) = 0;
            index = index + 1;
        } while (index < array_size);
        array_size = *(ulonglong *)(object_manager + 0x10);
    }
    // 重置管理器状态
    *(undefined8 *)(object_manager + 0x18) = 0;
    if ((1 < array_size) && (object_array_ptr = *(undefined8 **)(object_manager + 8), object_array_ptr != (undefined8 *)0x0)) {
        // 处理内存池释放
        array_size = (ulonglong)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((longlong)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (ulonglong)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(undefined8 *)(manager_data + 0x20);
                *(undefined8 **)(manager_data + 0x20) = object_array_ptr;
                resource_count_ptr = (int *)(manager_data + 0x18);
                *resource_count_ptr = *resource_count_ptr + -1;
                if (*resource_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                                 object_array_ptr, array_size, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 清理对象数组并释放资源（变体6）
// 原始实现: FUN_1800577c0
void cleanup_object_array_and_free_resources_variant6(void)
{
    int *resource_count_ptr;
    undefined8 *object_array_ptr;
    longlong manager_data;
    longlong object_manager_ptr;
    ulonglong array_size;
    ulonglong object_count;
    ulonglong index;
    longlong array_base;
    undefined8 empty_value;
    
    do {
        // 遍历对象数组
        manager_data = *(longlong *)(array_base + object_count * 8);
        if (manager_data != 0) {
            // 释放对象资源
            release_object_resources(manager_data);
        }
        *(undefined8 *)(array_base + object_count * 8) = empty_value;
        object_count = object_count + 1;
    } while (object_count < array_size);
    *(undefined8 *)(object_manager_ptr + 0x18) = empty_value;
    if ((1 < *(ulonglong *)(object_manager_ptr + 0x10)) &&
       (object_array_ptr = *(undefined8 **)(object_manager_ptr + 8), object_array_ptr != (undefined8 *)0x0)) {
        array_size = (ulonglong)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((longlong)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (ulonglong)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(undefined8 *)(manager_data + 0x20);
                *(undefined8 **)(manager_data + 0x20) = object_array_ptr;
                resource_count_ptr = (int *)(manager_data + 0x18);
                *resource_count_ptr = *resource_count_ptr + -1;
                if (*resource_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                                 object_array_ptr, array_size, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 清理对象数组并释放资源（变体7）
// 原始实现: FUN_1800577f6
void cleanup_object_array_and_free_resources_variant7(void)
{
    int *resource_count_ptr;
    undefined8 *object_array_ptr;
    longlong manager_data;
    longlong object_manager_ptr;
    ulonglong array_size;
    ulonglong object_count;
    undefined8 empty_value;
    
    *(undefined8 *)(object_manager_ptr + 0x18) = empty_value;
    if ((1 < object_count) && (object_array_ptr = *(undefined8 **)(object_manager_ptr + 8), object_array_ptr != (undefined8 *)0x0)) {
        array_size = (ulonglong)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((longlong)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (ulonglong)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(undefined8 *)(manager_data + 0x20);
                *(undefined8 **)(manager_data + 0x20) = object_array_ptr;
                resource_count_ptr = (int *)(manager_data + 0x18);
                *resource_count_ptr = *resource_count_ptr + -1;
                if (*resource_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                                 object_array_ptr, array_size, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 释放对象管理器资源（变体2）
// 原始实现: FUN_180057814
void release_object_manager_resources_variant2(void)
{
    int *resource_count_ptr;
    undefined8 *object_array_ptr;
    longlong manager_data;
    longlong object_manager_ptr;
    ulonglong array_size;
    
    // 获取对象数组指针
    object_array_ptr = *(undefined8 **)(object_manager_ptr + 8);
    if (object_array_ptr == (undefined8 *)0x0) {
        return;
    }
    // 处理内存池释放
    array_size = (ulonglong)object_array_ptr & 0xffffffffffc00000;
    if (array_size != 0) {
        manager_data = array_size + 0x80 + ((longlong)object_array_ptr - array_size >> 0x10) * 0x50;
        manager_data = manager_data - (ulonglong)*(uint *)(manager_data + 4);
        if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
            // 释放到内存池
            *object_array_ptr = *(undefined8 *)(manager_data + 0x20);
            *(undefined8 **)(manager_data + 0x20) = object_array_ptr;
            resource_count_ptr = (int *)(manager_data + 0x18);
            *resource_count_ptr = *resource_count_ptr + -1;
            if (*resource_count_ptr == 0) {
                cleanup_memory_pool();
                return;
            }
        }
        else {
            // 使用通用释放函数
            free_memory_block(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                             object_array_ptr, array_size, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: 清理指针数组并调用析构函数
// 原始实现: FUN_180057830
void cleanup_pointer_array_and_call_destructors(longlong *array_head)
{
    longlong *current_ptr;
    longlong *end_ptr;
    
    end_ptr = (longlong *)array_head[1];
    for (current_ptr = (longlong *)*array_head; current_ptr != end_ptr; current_ptr = current_ptr + 1) {
        if ((longlong *)*current_ptr != (longlong *)0x0) {
            // 调用析构函数
            (**(code **)(*(longlong *)*current_ptr + 0x38))();
        }
    }
    if (*array_head == 0) {
        return;
    }
    // 释放数组内存
    release_memory_block();
}

// 全局变量声明
// 原始实现: 全局变量重叠声明

// 函数: 清理全局对象管理器
// 原始实现: FUN_1800578a0
void cleanup_global_object_manager(void)
{
    int *resource_count_ptr;
    undefined8 *global_manager;
    longlong manager_data;
    ulonglong array_size;
    
    // 获取全局管理器指针
    global_manager = global_object_manager;
    if (global_object_manager == (undefined8 *)0x0) {
        return;
    }
    // 清理指针数组
    cleanup_pointer_array_and_call_destructors();
    if ((longlong *)global_manager[0x30b] != (longlong *)0x0) {
        // 调用析构函数
        (**(code **)(*(longlong *)global_manager[0x30b] + 0x38))();
    }
    // 销毁互斥锁
    destroy_mutex_in_situ();
    if ((longlong *)global_manager[0x300] != (longlong *)0x0) {
        (**(code **)(*(longlong *)global_manager[0x300] + 0x38))();
    }
    if ((longlong *)global_manager[0x2d3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)global_manager[0x2d3] + 0x38))();
    }
    if ((longlong *)global_manager[0x2c0] != (longlong *)0x0) {
        (**(code **)(*(longlong *)global_manager[0x2c0] + 0x38))();
    }
    // 清理字符串资源
    cleanup_string_resources(global_manager + 0x116);
    cleanup_string_resources(global_manager + 6);
    if (global_manager[2] != 0) {
        // 释放管理器内存
        release_memory_block();
    }
    // 处理内存池释放
    array_size = (ulonglong)global_manager & 0xffffffffffc00000;
    if (array_size != 0) {
        manager_data = array_size + 0x80 + ((longlong)global_manager - array_size >> 0x10) * 0x50;
        manager_data = manager_data - (ulonglong)*(uint *)(manager_data + 4);
        if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
            // 释放到内存池
            *global_manager = *(undefined8 *)(manager_data + 0x20);
            *(undefined8 **)(manager_data + 0x20) = global_manager;
            resource_count_ptr = (int *)(manager_data + 0x18);
            *resource_count_ptr = *resource_count_ptr + -1;
            if (*resource_count_ptr == 0) {
                cleanup_memory_pool();
                return;
            }
        }
        else {
            // 使用通用释放函数
            free_memory_block(array_size, CONCAT71(0xff000000, *(void ***)(array_size + 0x70) == &ExceptionList),
                             global_manager, array_size, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: 分割字符串并添加到结果列表
// 原始实现: FUN_180057980
void split_string_and_add_to_result_list(longlong string_processor, longlong result_list, undefined8 delimiters, undefined8 param_4)
{
    char current_char;
    longlong delimiter_pos;
    char *string_ptr;
    char *segment_start;
    undefined8 cleanup_flag;
    undefined *temp_result;
    longlong temp_size;
    undefined4 temp_flags;
    ulonglong temp_capacity;
    
    cleanup_flag = 0xfffffffffffffffe;
    string_ptr = *(char **)(string_processor + 8);
    current_char = *string_ptr;
    segment_start = string_ptr;
    if (current_char != '\0') {
        do {
            // 查找分隔符
            delimiter_pos = strchr(delimiters, (int)current_char);
            if ((delimiter_pos != 0) && (segment_start != string_ptr)) {
                // 创建临时结果对象
                temp_result = &empty_string_token;
                temp_capacity = 0;
                temp_size = 0;
                temp_flags = 0;
                create_string_token(&temp_result, segment_start, (int)string_ptr - (int)segment_start, param_4, cleanup_flag);
                segment_start = string_ptr + 1;
                if (*(ulonglong *)(result_list + 8) < *(ulonglong *)(result_list + 0x10)) {
                    // 扩展结果列表
                    *(ulonglong *)(result_list + 8) = *(ulonglong *)(result_list + 8) + 0x20;
                    expand_result_list();
                }
                else {
                    // 添加到结果列表
                    add_to_result_list(result_list, &temp_result);
                }
                temp_result = &empty_string_token;
                if (temp_size != 0) {
                    // 释放临时结果
                    release_memory_block();
                }
                temp_size = 0;
                temp_capacity = temp_capacity & 0xffffffff00000000;
                temp_result = &string_token_pool;
            }
            string_ptr = string_ptr + 1;
            current_char = *string_ptr;
        } while (current_char != '\0');
        if (segment_start != string_ptr) {
            // 处理最后一个分段
            temp_result = &empty_string_token;
            temp_capacity = 0;
            temp_size = 0;
            temp_flags = 0;
            create_string_token(&temp_result, segment_start, (int)string_ptr - (int)segment_start, param_4, cleanup_flag);
            if (*(ulonglong *)(result_list + 8) < *(ulonglong *)(result_list + 0x10)) {
                // 扩展结果列表
                *(ulonglong *)(result_list + 8) = *(ulonglong *)(result_list + 8) + 0x20;
                expand_result_list();
            }
            else {
                // 添加到结果列表
                add_to_result_list(result_list, &temp_result);
            }
            temp_result = &empty_string_token;
            if (temp_size != 0) {
                // 释放临时结果
                release_memory_block();
            }
        }
    }
    return;
}

// 全局变量声明
// 原始实现: 全局变量重叠声明

// 函数: 比较并返回字符串处理结果
// 原始实现: FUN_180057b00
longlong * compare_and_return_string_result(longlong string_processor, longlong *result_ptr, undefined8 param_3)
{
    byte compare_result;
    uint string_char;
    longlong temp_result;
    longlong string_data;
    byte *string_ptr;
    longlong string_length;
    undefined8 comparison_flag;
    char temp_buffer[8];
    
    // 创建临时字符串缓冲区
    temp_result = create_string_buffer(global_string_pool, 0x40, *(undefined1 *)(string_processor + 0x28));
    initialize_string_buffer(temp_result + 0x20, param_3);
    string_data = process_string_data(string_processor, temp_buffer, temp_result + 0x20);
    if (temp_buffer[0] == '\0') {
        // 空字符串处理
        create_empty_string();
        *result_ptr = string_data;
        *(undefined1 *)(result_ptr + 1) = 0;
        return result_ptr;
    }
    if (string_data != string_processor) {
        if (*(int *)(string_data + 0x30) == 0) {
            // 字符串不匹配
            comparison_flag = 1;
            goto comparison_complete;
        }
        if (*(int *)(temp_result + 0x30) != 0) {
            // 逐字符比较
            string_ptr = *(byte **)(string_data + 0x28);
            string_length = *(longlong *)(temp_result + 0x28) - (longlong)string_ptr;
            do {
                compare_result = *string_ptr;
                string_char = (uint)string_ptr[string_length];
                if (compare_result != string_char) break;
                string_ptr = string_ptr + 1;
            } while (string_char != 0);
            if ((int)(compare_result - string_char) < 1) goto comparison_complete;
        }
    }
    comparison_flag = 0;
comparison_complete:
    // 完成比较并返回结果
    complete_string_comparison(temp_result, string_data, string_processor, comparison_flag);
}

// 函数: 释放字符串标记对象
// 原始实现: FUN_180057bf0
void release_string_token_object(undefined8 *token_object)
{
    if (token_object == (undefined8 *)0x0) {
        return;
    }
    if (token_object[9] != 0) {
        // 释放标记对象内存
        release_memory_block();
    }
    token_object[4] = &empty_string_token;
    if (token_object[5] != 0) {
        // 释放标记对象内存
        release_memory_block();
    }
    token_object[5] = 0;
    *(undefined4 *)(token_object + 7) = 0;
    token_object[4] = &string_token_pool;
    *token_object = &empty_string_token;
    if (token_object[1] != 0) {
        // 释放标记对象内存
        release_memory_block();
    }
    token_object[1] = 0;
    *(undefined4 *)(token_object + 3) = 0;
    *token_object = &string_token_pool;
    // 释放标记对象
    release_memory_block(token_object);
}

// 全局变量声明
// 原始实现: 全局变量重叠声明

// 函数: 创建并初始化字符串标记对象
// 原始实现: FUN_180057cb0
undefined8 * create_and_initialize_string_token(undefined8 *token_object, uint token_flags, undefined8 param_3, undefined8 param_4)
{
    *token_object = &string_token_base;
    initialize_string_token(global_string_allocator, token_object[0x28], param_3, param_4, 0xfffffffffffffffe);
    token_object[0x28] = 0;
    token_object[0x29] = &empty_string_token;
    if (token_object[0x2a] != 0) {
        // 释放标记对象内存
        release_memory_block();
    }
    token_object[0x2a] = 0;
    *(undefined4 *)(token_object + 0x2c) = 0;
    token_object[0x29] = &string_token_pool;
    // 执行初始化后处理
    perform_post_initialization();
    if ((token_flags & 1) != 0) {
        // 释放标记对象内存
        free(token_object, 0x170);
    }
    return token_object;
}

// 函数: 初始化对象管理器并设置回调
// 原始实现: FUN_180057d70
void initialize_object_manager_and_set_callbacks(longlong *manager_ptr, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    undefined8 *current_callback;
    undefined8 *end_callback;
    undefined8 cleanup_flag;
    
    cleanup_flag = 0xfffffffffffffffe;
    // 执行初始化前处理
    perform_pre_initialization();
    perform_pre_initialization();
    manager_ptr[0x123] = (longlong)&empty_string_token;
    if (manager_ptr[0x124] != 0) {
        // 释放管理器内存
        release_memory_block();
    }
    manager_ptr[0x124] = 0;
    *(undefined4 *)(manager_ptr + 0x126) = 0;
    manager_ptr[0x123] = (longlong)&string_token_pool;
    // 设置回调函数
    set_manager_callbacks(manager_ptr + 0x11d, manager_ptr[0x11f], param_3, param_4, cleanup_flag);
    if (manager_ptr[0x119] == 0) {
        // 执行初始化步骤
        perform_initialization_step();
        perform_initialization_step();
        initialize_manager_subsystem(manager_ptr + 0x10b, manager_ptr[0x10d]);
        manager_ptr[0x87] = (longlong)&string_token_pool;
        manager_ptr[4] = (longlong)&string_token_pool;
        cleanup_flag = 0xfffffffffffffffe;
        current_callback = (undefined8 *)manager_ptr[1];
        for (end_callback = (undefined8 *)*manager_ptr; current_callback != end_callback; current_callback = current_callback + 4) {
            // 调用每个回调函数
            (**(code **)*current_callback)(current_callback, 0, param_3, param_4, cleanup_flag);
        }
        if (*manager_ptr == 0) {
            return;
        }
        // 释放管理器内存
        release_memory_block();
    }
    // 释放管理器内存
    release_memory_block();
}

// 函数: 递归清理对象链表（简化版）
// 原始实现: FUN_180057e90
void recursively_cleanup_object_chain_simplified(longlong object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    // 递归调用清理函数
    cleanup_object_chain_recursive(object_manager, *(undefined8 *)(object_manager + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

// 函数: 清理对象链表头节点
// 原始实现: FUN_180057ec0
void cleanup_object_chain_head_node(longlong object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    undefined8 *head_node;
    
    head_node = *(undefined8 **)(object_manager + 0x10);
    if (head_node != (undefined8 *)0x0) {
        // 递归清理链表
        cleanup_object_chain_recursive(object_manager, *head_node, param_3, param_4, 0xfffffffffffffffe);
        // 清理链表节点
        cleanup_chain_node(head_node);
        // 释放头节点内存
        release_memory_block(head_node);
    }
    return;
}

// 函数: 递归清理对象链表（简化版2）
// 原始实现: FUN_180057ee0
void recursively_cleanup_object_chain_simplified2(longlong object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    // 递归调用清理函数
    cleanup_object_chain_recursive(object_manager, *(undefined8 *)(object_manager + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

// 函数: 清理对象链表头节点（变体）
// 原始实现: FUN_180057f10
void cleanup_object_chain_head_node_variant(longlong object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    undefined8 *head_node;
    
    head_node = *(undefined8 **)(object_manager + 0x10);
    if (head_node != (undefined8 *)0x0) {
        // 递归清理链表
        cleanup_object_chain_recursive(object_manager, *head_node, param_3, param_4, 0xfffffffffffffffe);
        // 清理链表节点
        cleanup_chain_node(head_node);
        // 释放头节点内存
        release_memory_block(head_node);
    }
    return;
}

// 函数: 重置对象管理器状态
// 原始实现: FUN_180057f30
void reset_object_manager_state(longlong *manager_ptr)
{
    longlong saved_value1;
    longlong saved_value2;
    longlong saved_value3;
    undefined8 *current_callback;
    undefined8 *end_callback;
    longlong saved_value4;
    undefined8 *start_callback;
    
    // 执行重置前处理
    perform_pre_reset();
    saved_value1 = *manager_ptr;
    *manager_ptr = 0;
    saved_value2 = manager_ptr[1];
    manager_ptr[1] = 0;
    saved_value3 = manager_ptr[2];
    manager_ptr[2] = 0;
    saved_value4 = manager_ptr[3];
    *(int *)(manager_ptr + 3) = (int)manager_ptr[3];
    start_callback = (undefined8 *)*manager_ptr;
    *manager_ptr = saved_value1;
    end_callback = (undefined8 *)manager_ptr[1];
    manager_ptr[1] = saved_value2;
    manager_ptr[2] = saved_value3;
    *(int *)(manager_ptr + 3) = (int)saved_value4;
    for (current_callback = start_callback; current_callback != end_callback; current_callback = current_callback + 4) {
        // 调用重置回调函数
        (**(code **)*current_callback)(current_callback, 0);
    }
    if (start_callback != (undefined8 *)0x0) {
        // 释放回调列表内存
        release_memory_block(start_callback);
    }
    return;
}

// 函数: 递归清理对象链表（简化版3）
// 原始实现: FUN_180058000
void recursively_cleanup_object_chain_simplified3(longlong object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    // 递归调用清理函数
    cleanup_object_chain_recursive(object_manager, *(undefined8 *)(object_manager + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

// 函数: 清理对象链表头节点（变体2）
// 原始实现: FUN_180058020
void cleanup_object_chain_head_node_variant2(longlong object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    undefined8 *head_node;
    
    head_node = *(undefined8 **)(object_manager + 0x10);
    if (head_node != (undefined8 *)0x0) {
        // 递归清理链表
        cleanup_object_chain_recursive(object_manager, *head_node, param_3, param_4, 0xfffffffffffffffe);
        // 清理链表节点
        cleanup_chain_node(head_node);
        // 释放头节点内存
        release_memory_block(head_node);
    }
    return;
}

// 函数: 在对象链表中查找匹配节点
// 原始实现: FUN_180058080
undefined8 * find_matching_node_in_object_chain(undefined8 *chain_head, undefined8 *result_ptr, longlong search_criteria)
{
    byte comparison_result;
    bool match_found;
    byte *node_name_ptr;
    uint criteria_char;
    int name_comparison;
    longlong name_length;
    undefined8 *current_node;
    undefined8 *next_node;
    undefined8 *previous_node;
    undefined8 *matched_node;
    
    if ((undefined8 *)chain_head[2] != (undefined8 *)0x0) {
        current_node = (undefined8 *)chain_head[2];
        previous_node = chain_head;
        do {
            if (*(int *)(search_criteria + 0x10) == 0) {
                next_node = (undefined8 *)current_node[1];
                match_found = false;
            }
            else {
                if (*(int *)(current_node + 6) == 0) {
                    match_found = true;
                }
                else {
                    // 比较节点名称
                    node_name_ptr = *(byte **)(search_criteria + 8);
                    name_length = current_node[5] - (longlong)node_name_ptr;
                    do {
                        criteria_char = (uint)node_name_ptr[name_length];
                        name_comparison = *node_name_ptr - criteria_char;
                        if (*node_name_ptr != criteria_char) break;
                        node_name_ptr = node_name_ptr + 1;
                    } while (criteria_char != 0);
                    match_found = 0 < name_comparison;
                    if (name_comparison < 1) {
                        next_node = (undefined8 *)current_node[1];
                        goto match_check;
                    }
                }
                next_node = (undefined8 *)*current_node;
            }
match_check:
            matched_node = current_node;
            if (match_found) {
                matched_node = previous_node;
            }
            current_node = next_node;
            previous_node = matched_node;
        } while (next_node != (undefined8 *)0x0);
        if (matched_node != chain_head) {
            if (*(int *)(matched_node + 6) == 0) {
node_found:
                // 找到匹配节点
                *result_ptr = matched_node;
                return result_ptr;
            }
            if (*(int *)(search_criteria + 0x10) != 0) {
                node_name_ptr = (byte *)matched_node[5];
                name_length = *(longlong *)(search_criteria + 8) - (longlong)node_name_ptr;
                do {
                    comparison_result = *node_name_ptr;
                    criteria_char = (uint)node_name_ptr[name_length];
                    if (comparison_result != criteria_char) break;
                    node_name_ptr = node_name_ptr + 1;
                } while (criteria_char != 0);
                if ((int)(comparison_result - criteria_char) < 1) goto node_found;
            }
        }
    }
    // 未找到匹配节点，返回链表头
    *result_ptr = chain_head;
    return result_ptr;
}

// 函数: 重置对象管理器状态并释放内存
// 原始实现: FUN_180058160
void reset_object_manager_state_and_free_memory(ulonglong *manager_ptr)
{
    int *resource_count_ptr;
    ulonglong saved_value1;
    ulonglong saved_value2;
    ulonglong saved_value3;
    undefined8 *callback_list;
    ulonglong saved_value4;
    longlong pool_data;
    ulonglong current_value;
    
    // 保存管理器状态
    manager_ptr[1] = *manager_ptr;
    current_value = *manager_ptr;
    *manager_ptr = 0;
    saved_value1 = manager_ptr[1];
    manager_ptr[1] = 0;
    saved_value2 = manager_ptr[2];
    manager_ptr[2] = 0;
    saved_value4 = manager_ptr[3];
    *(int *)(manager_ptr + 3) = (int)manager_ptr[3];
    callback_list = (undefined8 *)*manager_ptr;
    *manager_ptr = current_value;
    manager_ptr[1] = saved_value1;
    manager_ptr[2] = saved_value2;
    *(int *)(manager_ptr + 3) = (int)saved_value4;
    if (callback_list == (undefined8 *)0x0) {
        return;
    }
    // 处理内存池释放
    current_value = (ulonglong)callback_list & 0xffffffffffc00000;
    if (current_value != 0) {
        pool_data = current_value + 0x80 + ((longlong)callback_list - current_value >> 0x10) * 0x50;
        pool_data = pool_data - (ulonglong)*(uint *)(pool_data + 4);
        if ((*(void ***)(current_value + 0x70) == &ExceptionList) && (*(char *)(pool_data + 0xe) == '\0')) {
            // 释放到内存池
            *callback_list = *(undefined8 *)(pool_data + 0x20);
            *(undefined8 **)(pool_data + 0x20) = callback_list;
            resource_count_ptr = (int *)(pool_data + 0x18);
            *resource_count_ptr = *resource_count_ptr + -1;
            if (*resource_count_ptr == 0) {
                cleanup_memory_pool();
                return;
            }
        }
        else {
            // 使用通用释放函数
            free_memory_block(current_value, CONCAT71(0xff000000, *(void ***)(current_value + 0x70) == &ExceptionList),
                             callback_list, current_value, 0xfffffffffffffffe);
        }
    }
    return;
}