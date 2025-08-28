#include "TaleWorlds.Native.Split.h"

// 01_initialization_part023.c - 初始化模块第23部分
// 包含27个函数，主要负责内存管理、对象清理和资源释放工作

// 函数: 清理对象数组并释放资源
// 原始实现: FUN_180057550
// 功能: 遍历对象管理器中的对象数组，逐个释放对象资源，并清理内存
void cleanup_object_array_and_free_resources(int64_t object_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int *memory_pool_count_ptr;
    int64_t object_ptr;
    uint64_t *object_array_ptr;
    int64_t memory_pool_data;
    uint64_t object_count;
    uint64_t index;
    
    // 获取对象数组大小
    object_count = *(uint64_t *)(object_manager + 0x10);
    memory_pool_data = *(int64_t *)(object_manager + 8);
    index = 0;
    if (object_count != 0) {
        do {
            // 遍历对象数组
            object_ptr = *(int64_t *)(memory_pool_data + index * 8);
            if (object_ptr != 0) {
                // 释放对象资源
                release_object_resources(object_ptr);
            }
            // 清空对象指针
            *(uint64_t *)(memory_pool_data + index * 8) = 0;
            index = index + 1;
        } while (index < object_count);
        object_count = *(uint64_t *)(object_manager + 0x10);
    }
    // 重置管理器状态
    *(uint64_t *)(object_manager + 0x18) = 0;
    if ((1 < object_count) && (object_array_ptr = *(uint64_t **)(object_manager + 8), object_array_ptr != (uint64_t *)0x0)) {
        // 处理内存池释放
        object_count = (uint64_t)object_array_ptr & 0xffffffffffc00000;
        if (object_count != 0) {
            memory_pool_data = object_count + 0x80 + ((int64_t)object_array_ptr - object_count >> 0x10) * 0x50;
            memory_pool_data = memory_pool_data - (uint64_t)*(uint *)(memory_pool_data + 4);
            if ((*(void ***)(object_count + 0x70) == &ExceptionList) && (*(char *)(memory_pool_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(uint64_t *)(memory_pool_data + 0x20);
                *(uint64_t **)(memory_pool_data + 0x20) = object_array_ptr;
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
void cleanup_object_array_and_free_resources_variant1(int64_t object_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int *memory_pool_count_ptr;
    int64_t object_ptr;
    uint64_t *object_array_ptr;
    int64_t memory_pool_data;
    uint64_t object_count;
    uint64_t index;
    
    // 获取对象数组大小
    object_count = *(uint64_t *)(object_manager + 0x10);
    memory_pool_data = *(int64_t *)(object_manager + 8);
    index = 0;
    if (object_count != 0) {
        do {
            // 遍历对象数组
            object_ptr = *(int64_t *)(memory_pool_data + index * 8);
            if (object_ptr != 0) {
                // 释放对象资源
                release_object_resources(object_ptr);
            }
            // 清空对象指针
            *(uint64_t *)(memory_pool_data + index * 8) = 0;
            index = index + 1;
        } while (index < object_count);
        object_count = *(uint64_t *)(object_manager + 0x10);
    }
    // 重置管理器状态
    *(uint64_t *)(object_manager + 0x18) = 0;
    if ((1 < object_count) && (object_array_ptr = *(uint64_t **)(object_manager + 8), object_array_ptr != (uint64_t *)0x0)) {
        // 处理内存池释放
        object_count = (uint64_t)object_array_ptr & 0xffffffffffc00000;
        if (object_count != 0) {
            memory_pool_data = object_count + 0x80 + ((int64_t)object_array_ptr - object_count >> 0x10) * 0x50;
            memory_pool_data = memory_pool_data - (uint64_t)*(uint *)(memory_pool_data + 4);
            if ((*(void ***)(object_count + 0x70) == &ExceptionList) && (*(char *)(memory_pool_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(uint64_t *)(memory_pool_data + 0x20);
                *(uint64_t **)(memory_pool_data + 0x20) = object_array_ptr;
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
// 功能: 使用不同的参数结构和变量名实现对象数组清理，可能是为了适应不同的调用场景
void cleanup_object_array_and_free_resources_variant2(void)
{
    int *memory_pool_count_ptr;
    uint64_t *object_array_ptr;
    int64_t memory_pool_data;
    int64_t object_manager_ptr;
    uint64_t memory_pool_size;
    uint64_t object_count;
    uint64_t index;
    int64_t array_base;
    uint64_t empty_value;
    
    do {
        // 遍历对象数组
        memory_pool_data = *(int64_t *)(array_base + object_count * 8);
        if (memory_pool_data != 0) {
            // 释放对象资源
            release_object_resources(memory_pool_data);
        }
        *(uint64_t *)(array_base + object_count * 8) = empty_value;
        object_count = object_count + 1;
    } while (object_count < memory_pool_size);
    *(uint64_t *)(object_manager_ptr + 0x18) = empty_value;
    if ((1 < *(uint64_t *)(object_manager_ptr + 0x10)) &&
       (object_array_ptr = *(uint64_t **)(object_manager_ptr + 8), object_array_ptr != (uint64_t *)0x0)) {
        memory_pool_size = (uint64_t)object_array_ptr & 0xffffffffffc00000;
        if (memory_pool_size != 0) {
            memory_pool_data = memory_pool_size + 0x80 + ((int64_t)object_array_ptr - memory_pool_size >> 0x10) * 0x50;
            memory_pool_data = memory_pool_data - (uint64_t)*(uint *)(memory_pool_data + 4);
            if ((*(void ***)(memory_pool_size + 0x70) == &ExceptionList) && (*(char *)(memory_pool_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(uint64_t *)(memory_pool_data + 0x20);
                *(uint64_t **)(memory_pool_data + 0x20) = object_array_ptr;
                memory_pool_count_ptr = (int *)(memory_pool_data + 0x18);
                *memory_pool_count_ptr = *memory_pool_count_ptr + -1;
                if (*memory_pool_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(memory_pool_size, CONCAT71(0xff000000, *(void ***)(memory_pool_size + 0x70) == &ExceptionList),
                                 object_array_ptr, memory_pool_size, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 清理对象数组并释放资源（变体3）
// 原始实现: FUN_1800575b6
// 功能: 简化版本的资源清理，只处理内存池释放部分
void cleanup_object_array_and_free_resources_variant3(void)
{
    int *memory_pool_count_ptr;
    uint64_t *object_array_ptr;
    int64_t memory_pool_data;
    int64_t object_manager_ptr;
    uint64_t memory_pool_size;
    uint64_t object_count;
    uint64_t empty_value;
    
    *(uint64_t *)(object_manager_ptr + 0x18) = empty_value;
    if ((1 < object_count) && (object_array_ptr = *(uint64_t **)(object_manager_ptr + 8), object_array_ptr != (uint64_t *)0x0)) {
        memory_pool_size = (uint64_t)object_array_ptr & 0xffffffffffc00000;
        if (memory_pool_size != 0) {
            memory_pool_data = memory_pool_size + 0x80 + ((int64_t)object_array_ptr - memory_pool_size >> 0x10) * 0x50;
            memory_pool_data = memory_pool_data - (uint64_t)*(uint *)(memory_pool_data + 4);
            if ((*(void ***)(memory_pool_size + 0x70) == &ExceptionList) && (*(char *)(memory_pool_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(uint64_t *)(memory_pool_data + 0x20);
                *(uint64_t **)(memory_pool_data + 0x20) = object_array_ptr;
                memory_pool_count_ptr = (int *)(memory_pool_data + 0x18);
                *memory_pool_count_ptr = *memory_pool_count_ptr + -1;
                if (*memory_pool_count_ptr == 0) {
                    cleanup_memory_pool();
                    return;
                }
            }
            else {
                // 使用通用释放函数
                free_memory_block(memory_pool_size, CONCAT71(0xff000000, *(void ***)(memory_pool_size + 0x70) == &ExceptionList),
                                 object_array_ptr, memory_pool_size, 0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数: 释放对象管理器资源
// 原始实现: FUN_1800575d4
// 功能: 专门用于释放对象管理器占用的内存资源
void release_object_manager_resources(void)
{
    int *memory_pool_count_ptr;
    uint64_t *object_array_ptr;
    int64_t memory_pool_data;
    int64_t object_manager_ptr;
    uint64_t memory_pool_size;
    
    // 获取对象数组指针
    object_array_ptr = *(uint64_t **)(object_manager_ptr + 8);
    if (object_array_ptr == (uint64_t *)0x0) {
        return;
    }
    // 处理内存池释放
    memory_pool_size = (uint64_t)object_array_ptr & 0xffffffffffc00000;
    if (memory_pool_size != 0) {
        memory_pool_data = memory_pool_size + 0x80 + ((int64_t)object_array_ptr - memory_pool_size >> 0x10) * 0x50;
        memory_pool_data = memory_pool_data - (uint64_t)*(uint *)(memory_pool_data + 4);
        if ((*(void ***)(memory_pool_size + 0x70) == &ExceptionList) && (*(char *)(memory_pool_data + 0xe) == '\0')) {
            // 释放到内存池
            *object_array_ptr = *(uint64_t *)(memory_pool_data + 0x20);
            *(uint64_t **)(memory_pool_data + 0x20) = object_array_ptr;
            memory_pool_count_ptr = (int *)(memory_pool_data + 0x18);
            *memory_pool_count_ptr = *memory_pool_count_ptr + -1;
            if (*memory_pool_count_ptr == 0) {
                cleanup_memory_pool();
                return;
            }
        }
        else {
            // 使用通用释放函数
            free_memory_block(memory_pool_size, CONCAT71(0xff000000, *(void ***)(memory_pool_size + 0x70) == &ExceptionList),
                             object_array_ptr, memory_pool_size, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: 递归清理对象链表
// 原始实现: FUN_1800575f0
// 功能: 启动递归清理过程，清理对象链表中的所有节点
void recursively_cleanup_object_chain(int64_t object_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    // 递归调用清理函数
    cleanup_object_chain_recursive(object_manager, *(uint64_t *)(object_manager + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

// 函数: 清理对象链表（迭代方式）
// 原始实现: FUN_180057610
// 功能: 使用迭代而非递归方式清理对象链表，避免递归深度过大
void cleanup_object_chain_iterative(int64_t *chain_head, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t *current_node;
    uint64_t *end_node;
    uint64_t cleanup_flag;
    
    cleanup_flag = 0xfffffffffffffffe;
    end_node = (uint64_t *)chain_head[1];
    for (current_node = (uint64_t *)*chain_head; current_node != end_node; current_node = current_node + 0x69) {
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
// 功能: 在清理对象数组时，先调用对象的析构函数，再释放资源
void cleanup_object_array_and_call_destructors(int64_t object_manager)
{
    int64_t object_ptr;
    int64_t destructor_ptr;
    uint64_t object_count;
    uint64_t index;
    
    object_count = *(uint64_t *)(object_manager + 0x10);
    object_ptr = *(int64_t *)(object_manager + 8);
    index = 0;
    if (object_count != 0) {
        do {
            destructor_ptr = *(int64_t *)(object_ptr + index * 8);
            if (destructor_ptr != 0) {
                // 调用对象的析构函数
                if (*(int64_t **)(destructor_ptr + 0x10) != (int64_t *)0x0) {
                    (**(code **)(**(int64_t **)(destructor_ptr + 0x10) + 0x38))();
                }
                // 释放对象资源
                release_object_resources(destructor_ptr);
            }
            *(uint64_t *)(object_ptr + index * 8) = 0;
            index = index + 1;
        } while (index < object_count);
        object_count = *(uint64_t *)(object_manager + 0x10);
    }
    *(uint64_t *)(object_manager + 0x18) = 0;
    if ((1 < object_count) && (*(int64_t *)(object_manager + 8) != 0)) {
        // 释放管理器资源
        release_memory_block();
    }
    return;
}

// 函数: 清理对象队列
// 原始实现: FUN_180057730
// 功能: 清理FIFO队列中的所有节点，释放队列资源
void cleanup_object_queue(int64_t *queue_head)
{
    int64_t queue_end;
    int64_t current_node;
    
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
void cleanup_object_array_and_free_resources_variant4(int64_t object_manager)
{
    int *resource_count_ptr;
    int64_t object_ptr;
    uint64_t *object_array_ptr;
    int64_t manager_data;
    uint64_t array_size;
    uint64_t index;
    
    // 获取对象数组大小
    array_size = *(uint64_t *)(object_manager + 0x10);
    manager_data = *(int64_t *)(object_manager + 8);
    index = 0;
    if (array_size != 0) {
        do {
            // 遍历对象数组
            object_ptr = *(int64_t *)(manager_data + index * 8);
            if (object_ptr != 0) {
                // 释放对象资源
                release_object_resources(object_ptr);
            }
            // 清空对象指针
            *(uint64_t *)(manager_data + index * 8) = 0;
            index = index + 1;
        } while (index < array_size);
        array_size = *(uint64_t *)(object_manager + 0x10);
    }
    // 重置管理器状态
    *(uint64_t *)(object_manager + 0x18) = 0;
    if ((1 < array_size) && (object_array_ptr = *(uint64_t **)(object_manager + 8), object_array_ptr != (uint64_t *)0x0)) {
        // 处理内存池释放
        array_size = (uint64_t)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((int64_t)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (uint64_t)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(uint64_t *)(manager_data + 0x20);
                *(uint64_t **)(manager_data + 0x20) = object_array_ptr;
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
void cleanup_object_array_and_free_resources_variant5(int64_t object_manager)
{
    int *resource_count_ptr;
    int64_t object_ptr;
    uint64_t *object_array_ptr;
    int64_t manager_data;
    uint64_t array_size;
    uint64_t index;
    
    // 获取对象数组大小
    array_size = *(uint64_t *)(object_manager + 0x10);
    manager_data = *(int64_t *)(object_manager + 8);
    index = 0;
    if (array_size != 0) {
        do {
            // 遍历对象数组
            object_ptr = *(int64_t *)(manager_data + index * 8);
            if (object_ptr != 0) {
                // 释放对象资源
                release_object_resources(object_ptr);
            }
            // 清空对象指针
            *(uint64_t *)(manager_data + index * 8) = 0;
            index = index + 1;
        } while (index < array_size);
        array_size = *(uint64_t *)(object_manager + 0x10);
    }
    // 重置管理器状态
    *(uint64_t *)(object_manager + 0x18) = 0;
    if ((1 < array_size) && (object_array_ptr = *(uint64_t **)(object_manager + 8), object_array_ptr != (uint64_t *)0x0)) {
        // 处理内存池释放
        array_size = (uint64_t)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((int64_t)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (uint64_t)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(uint64_t *)(manager_data + 0x20);
                *(uint64_t **)(manager_data + 0x20) = object_array_ptr;
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
    uint64_t *object_array_ptr;
    int64_t manager_data;
    int64_t object_manager_ptr;
    uint64_t array_size;
    uint64_t object_count;
    uint64_t index;
    int64_t array_base;
    uint64_t empty_value;
    
    do {
        // 遍历对象数组
        manager_data = *(int64_t *)(array_base + object_count * 8);
        if (manager_data != 0) {
            // 释放对象资源
            release_object_resources(manager_data);
        }
        *(uint64_t *)(array_base + object_count * 8) = empty_value;
        object_count = object_count + 1;
    } while (object_count < array_size);
    *(uint64_t *)(object_manager_ptr + 0x18) = empty_value;
    if ((1 < *(uint64_t *)(object_manager_ptr + 0x10)) &&
       (object_array_ptr = *(uint64_t **)(object_manager_ptr + 8), object_array_ptr != (uint64_t *)0x0)) {
        array_size = (uint64_t)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((int64_t)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (uint64_t)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(uint64_t *)(manager_data + 0x20);
                *(uint64_t **)(manager_data + 0x20) = object_array_ptr;
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
    uint64_t *object_array_ptr;
    int64_t manager_data;
    int64_t object_manager_ptr;
    uint64_t array_size;
    uint64_t object_count;
    uint64_t empty_value;
    
    *(uint64_t *)(object_manager_ptr + 0x18) = empty_value;
    if ((1 < object_count) && (object_array_ptr = *(uint64_t **)(object_manager_ptr + 8), object_array_ptr != (uint64_t *)0x0)) {
        array_size = (uint64_t)object_array_ptr & 0xffffffffffc00000;
        if (array_size != 0) {
            manager_data = array_size + 0x80 + ((int64_t)object_array_ptr - array_size >> 0x10) * 0x50;
            manager_data = manager_data - (uint64_t)*(uint *)(manager_data + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
                // 释放到内存池
                *object_array_ptr = *(uint64_t *)(manager_data + 0x20);
                *(uint64_t **)(manager_data + 0x20) = object_array_ptr;
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
    uint64_t *object_array_ptr;
    int64_t manager_data;
    int64_t object_manager_ptr;
    uint64_t array_size;
    
    // 获取对象数组指针
    object_array_ptr = *(uint64_t **)(object_manager_ptr + 8);
    if (object_array_ptr == (uint64_t *)0x0) {
        return;
    }
    // 处理内存池释放
    array_size = (uint64_t)object_array_ptr & 0xffffffffffc00000;
    if (array_size != 0) {
        manager_data = array_size + 0x80 + ((int64_t)object_array_ptr - array_size >> 0x10) * 0x50;
        manager_data = manager_data - (uint64_t)*(uint *)(manager_data + 4);
        if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(manager_data + 0xe) == '\0')) {
            // 释放到内存池
            *object_array_ptr = *(uint64_t *)(manager_data + 0x20);
            *(uint64_t **)(manager_data + 0x20) = object_array_ptr;
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
void cleanup_pointer_array_and_call_destructors(int64_t *array_head)
{
    int64_t *current_ptr;
    int64_t *end_ptr;
    
    end_ptr = (int64_t *)array_head[1];
    for (current_ptr = (int64_t *)*array_head; current_ptr != end_ptr; current_ptr = current_ptr + 1) {
        if ((int64_t *)*current_ptr != (int64_t *)0x0) {
            // 调用析构函数
            (**(code **)(*(int64_t *)*current_ptr + 0x38))();
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
// 功能: 清理全局对象管理器，包括指针数组、互斥锁、字符串资源和内存池
void cleanup_global_object_manager(void)
{
    int *memory_pool_count_ptr;
    uint64_t *global_manager;
    int64_t memory_pool_data;
    uint64_t memory_pool_size;
    
    // 获取全局管理器指针
    global_manager = global_object_manager;
    if (global_object_manager == (uint64_t *)0x0) {
        return;
    }
    // 清理指针数组
    cleanup_pointer_array_and_call_destructors();
    if ((int64_t *)global_manager[0x30b] != (int64_t *)0x0) {
        // 调用析构函数
        (**(code **)(*(int64_t *)global_manager[0x30b] + 0x38))();
    }
    // 销毁互斥锁
    destroy_mutex_in_situ();
    if ((int64_t *)global_manager[0x300] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)global_manager[0x300] + 0x38))();
    }
    if ((int64_t *)global_manager[0x2d3] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)global_manager[0x2d3] + 0x38))();
    }
    if ((int64_t *)global_manager[0x2c0] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)global_manager[0x2c0] + 0x38))();
    }
    // 清理字符串资源
    cleanup_string_resources(global_manager + 0x116);
    cleanup_string_resources(global_manager + 6);
    if (global_manager[2] != 0) {
        // 释放管理器内存
        release_memory_block();
    }
    // 处理内存池释放
    memory_pool_size = (uint64_t)global_manager & 0xffffffffffc00000;
    if (memory_pool_size != 0) {
        memory_pool_data = memory_pool_size + 0x80 + ((int64_t)global_manager - memory_pool_size >> 0x10) * 0x50;
        memory_pool_data = memory_pool_data - (uint64_t)*(uint *)(memory_pool_data + 4);
        if ((*(void ***)(memory_pool_size + 0x70) == &ExceptionList) && (*(char *)(memory_pool_data + 0xe) == '\0')) {
            // 释放到内存池
            *global_manager = *(uint64_t *)(memory_pool_data + 0x20);
            *(uint64_t **)(memory_pool_data + 0x20) = global_manager;
            memory_pool_count_ptr = (int *)(memory_pool_data + 0x18);
            *memory_pool_count_ptr = *memory_pool_count_ptr + -1;
            if (*memory_pool_count_ptr == 0) {
                cleanup_memory_pool();
                return;
            }
        }
        else {
            // 使用通用释放函数
            free_memory_block(memory_pool_size, CONCAT71(0xff000000, *(void ***)(memory_pool_size + 0x70) == &ExceptionList),
                             global_manager, memory_pool_size, 0xfffffffffffffffe);
        }
    }
    return;
}

// 函数: 分割字符串并添加到结果列表
// 原始实现: FUN_180057980
void split_string_and_add_to_result_list(int64_t string_processor, int64_t result_list, uint64_t delimiters, uint64_t param_4)
{
    char current_char;
    int64_t delimiter_pos;
    char *string_ptr;
    char *segment_start;
    uint64_t cleanup_flag;
    void *temp_result;
    int64_t temp_size;
    int32_t temp_flags;
    uint64_t temp_capacity;
    
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
                if (*(uint64_t *)(result_list + 8) < *(uint64_t *)(result_list + 0x10)) {
                    // 扩展结果列表
                    *(uint64_t *)(result_list + 8) = *(uint64_t *)(result_list + 8) + 0x20;
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
            if (*(uint64_t *)(result_list + 8) < *(uint64_t *)(result_list + 0x10)) {
                // 扩展结果列表
                *(uint64_t *)(result_list + 8) = *(uint64_t *)(result_list + 8) + 0x20;
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
int64_t * compare_and_return_string_result(int64_t string_processor, int64_t *result_ptr, uint64_t param_3)
{
    byte compare_result;
    uint string_char;
    int64_t temp_result;
    int64_t string_data;
    byte *string_ptr;
    int64_t string_length;
    uint64_t comparison_flag;
    char temp_buffer[8];
    
    // 创建临时字符串缓冲区
    temp_result = create_string_buffer(global_string_pool, 0x40, *(int8_t *)(string_processor + 0x28));
    initialize_string_buffer(temp_result + 0x20, param_3);
    string_data = process_string_data(string_processor, temp_buffer, temp_result + 0x20);
    if (temp_buffer[0] == '\0') {
        // 空字符串处理
        create_empty_string();
        *result_ptr = string_data;
        *(int8_t *)(result_ptr + 1) = 0;
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
            string_length = *(int64_t *)(temp_result + 0x28) - (int64_t)string_ptr;
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
void release_string_token_object(uint64_t *token_object)
{
    if (token_object == (uint64_t *)0x0) {
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
    *(int32_t *)(token_object + 7) = 0;
    token_object[4] = &string_token_pool;
    *token_object = &empty_string_token;
    if (token_object[1] != 0) {
        // 释放标记对象内存
        release_memory_block();
    }
    token_object[1] = 0;
    *(int32_t *)(token_object + 3) = 0;
    *token_object = &string_token_pool;
    // 释放标记对象
    release_memory_block(token_object);
}

// 全局变量声明
// 原始实现: 全局变量重叠声明

// 函数: 创建并初始化字符串标记对象
// 原始实现: FUN_180057cb0
uint64_t * create_and_initialize_string_token(uint64_t *token_object, uint token_flags, uint64_t param_3, uint64_t param_4)
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
    *(int32_t *)(token_object + 0x2c) = 0;
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
void initialize_object_manager_and_set_callbacks(int64_t *manager_ptr, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t *current_callback;
    uint64_t *end_callback;
    uint64_t cleanup_flag;
    
    cleanup_flag = 0xfffffffffffffffe;
    // 执行初始化前处理
    perform_pre_initialization();
    perform_pre_initialization();
    manager_ptr[0x123] = (int64_t)&empty_string_token;
    if (manager_ptr[0x124] != 0) {
        // 释放管理器内存
        release_memory_block();
    }
    manager_ptr[0x124] = 0;
    *(int32_t *)(manager_ptr + 0x126) = 0;
    manager_ptr[0x123] = (int64_t)&string_token_pool;
    // 设置回调函数
    set_manager_callbacks(manager_ptr + 0x11d, manager_ptr[0x11f], param_3, param_4, cleanup_flag);
    if (manager_ptr[0x119] == 0) {
        // 执行初始化步骤
        perform_initialization_step();
        perform_initialization_step();
        initialize_manager_subsystem(manager_ptr + 0x10b, manager_ptr[0x10d]);
        manager_ptr[0x87] = (int64_t)&string_token_pool;
        manager_ptr[4] = (int64_t)&string_token_pool;
        cleanup_flag = 0xfffffffffffffffe;
        current_callback = (uint64_t *)manager_ptr[1];
        for (end_callback = (uint64_t *)*manager_ptr; current_callback != end_callback; current_callback = current_callback + 4) {
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
void recursively_cleanup_object_chain_simplified(int64_t object_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    // 递归调用清理函数
    cleanup_object_chain_recursive(object_manager, *(uint64_t *)(object_manager + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

// 函数: 清理对象链表头节点
// 原始实现: FUN_180057ec0
void cleanup_object_chain_head_node(int64_t object_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t *head_node;
    
    head_node = *(uint64_t **)(object_manager + 0x10);
    if (head_node != (uint64_t *)0x0) {
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
void recursively_cleanup_object_chain_simplified2(int64_t object_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    // 递归调用清理函数
    cleanup_object_chain_recursive(object_manager, *(uint64_t *)(object_manager + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

// 函数: 清理对象链表头节点（变体）
// 原始实现: FUN_180057f10
void cleanup_object_chain_head_node_variant(int64_t object_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t *head_node;
    
    head_node = *(uint64_t **)(object_manager + 0x10);
    if (head_node != (uint64_t *)0x0) {
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
// 功能: 重置对象管理器到初始状态，保存并恢复关键值，调用重置回调
void reset_object_manager_state(int64_t *manager_ptr)
{
    int64_t saved_value1;
    int64_t saved_value2;
    int64_t saved_value3;
    uint64_t *current_callback;
    uint64_t *end_callback;
    int64_t saved_value4;
    uint64_t *start_callback;
    
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
    start_callback = (uint64_t *)*manager_ptr;
    *manager_ptr = saved_value1;
    end_callback = (uint64_t *)manager_ptr[1];
    manager_ptr[1] = saved_value2;
    manager_ptr[2] = saved_value3;
    *(int *)(manager_ptr + 3) = (int)saved_value4;
    for (current_callback = start_callback; current_callback != end_callback; current_callback = current_callback + 4) {
        // 调用重置回调函数
        (**(code **)*current_callback)(current_callback, 0);
    }
    if (start_callback != (uint64_t *)0x0) {
        // 释放回调列表内存
        release_memory_block(start_callback);
    }
    return;
}

// 函数: 递归清理对象链表（简化版3）
// 原始实现: FUN_180058000
void recursively_cleanup_object_chain_simplified3(int64_t object_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    // 递归调用清理函数
    cleanup_object_chain_recursive(object_manager, *(uint64_t *)(object_manager + 0x10), param_3, param_4, 0xfffffffffffffffe);
    return;
}

// 函数: 清理对象链表头节点（变体2）
// 原始实现: FUN_180058020
void cleanup_object_chain_head_node_variant2(int64_t object_manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t *head_node;
    
    head_node = *(uint64_t **)(object_manager + 0x10);
    if (head_node != (uint64_t *)0x0) {
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
uint64_t * find_matching_node_in_object_chain(uint64_t *chain_head, uint64_t *result_ptr, int64_t search_criteria)
{
    byte comparison_result;
    bool match_found;
    byte *node_name_ptr;
    uint criteria_char;
    int name_comparison;
    int64_t name_length;
    uint64_t *current_node;
    uint64_t *next_node;
    uint64_t *previous_node;
    uint64_t *matched_node;
    
    if ((uint64_t *)chain_head[2] != (uint64_t *)0x0) {
        current_node = (uint64_t *)chain_head[2];
        previous_node = chain_head;
        do {
            if (*(int *)(search_criteria + 0x10) == 0) {
                next_node = (uint64_t *)current_node[1];
                match_found = false;
            }
            else {
                if (*(int *)(current_node + 6) == 0) {
                    match_found = true;
                }
                else {
                    // 比较节点名称
                    node_name_ptr = *(byte **)(search_criteria + 8);
                    name_length = current_node[5] - (int64_t)node_name_ptr;
                    do {
                        criteria_char = (uint)node_name_ptr[name_length];
                        name_comparison = *node_name_ptr - criteria_char;
                        if (*node_name_ptr != criteria_char) break;
                        node_name_ptr = node_name_ptr + 1;
                    } while (criteria_char != 0);
                    match_found = 0 < name_comparison;
                    if (name_comparison < 1) {
                        next_node = (uint64_t *)current_node[1];
                        goto match_check;
                    }
                }
                next_node = (uint64_t *)*current_node;
            }
match_check:
            matched_node = current_node;
            if (match_found) {
                matched_node = previous_node;
            }
            current_node = next_node;
            previous_node = matched_node;
        } while (next_node != (uint64_t *)0x0);
        if (matched_node != chain_head) {
            if (*(int *)(matched_node + 6) == 0) {
node_found:
                // 找到匹配节点
                *result_ptr = matched_node;
                return result_ptr;
            }
            if (*(int *)(search_criteria + 0x10) != 0) {
                node_name_ptr = (byte *)matched_node[5];
                name_length = *(int64_t *)(search_criteria + 8) - (int64_t)node_name_ptr;
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
// 功能: 重置管理器状态并释放回调列表内存，处理内存池回收
void reset_object_manager_state_and_free_memory(uint64_t *manager_ptr)
{
    int *memory_pool_count_ptr;
    uint64_t saved_value1;
    uint64_t saved_value2;
    uint64_t saved_value3;
    uint64_t *callback_list;
    uint64_t saved_value4;
    int64_t memory_pool_data;
    uint64_t current_value;
    
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
    callback_list = (uint64_t *)*manager_ptr;
    *manager_ptr = current_value;
    manager_ptr[1] = saved_value1;
    manager_ptr[2] = saved_value2;
    *(int *)(manager_ptr + 3) = (int)saved_value4;
    if (callback_list == (uint64_t *)0x0) {
        return;
    }
    // 处理内存池释放
    current_value = (uint64_t)callback_list & 0xffffffffffc00000;
    if (current_value != 0) {
        memory_pool_data = current_value + 0x80 + ((int64_t)callback_list - current_value >> 0x10) * 0x50;
        memory_pool_data = memory_pool_data - (uint64_t)*(uint *)(memory_pool_data + 4);
        if ((*(void ***)(current_value + 0x70) == &ExceptionList) && (*(char *)(memory_pool_data + 0xe) == '\0')) {
            // 释放到内存池
            *callback_list = *(uint64_t *)(memory_pool_data + 0x20);
            *(uint64_t **)(memory_pool_data + 0x20) = callback_list;
            memory_pool_count_ptr = (int *)(memory_pool_data + 0x18);
            *memory_pool_count_ptr = *memory_pool_count_ptr + -1;
            if (*memory_pool_count_ptr == 0) {
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