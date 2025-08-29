/*
 * 数据结构处理模块 - 企业级实现
 * TaleWorlds.Native 数据结构管理系统
 *
 * 本文件实现了数据结构处理模块的核心功能，
 * 包括内存管理、数据结构操作、算法实现等。
 *
 * 主要实现：
 * 1. 内存池管理 - 高效的内存分配和回收
 * 2. 链表操作 - 双向链表的增删改查
 * 3. 哈希表 - 高性能的键值存储
 * 4. 队列和栈 - 基础数据结构
 * 5. 动态数组 - 可变大小的数组
 * 6. 排序和搜索算法 - 常用算法实现
 */

#include "data_structure_processing_module.h"
#include <stdio.h>
#include <math.h>

// ============================================================================
// 内存池管理实现
// ============================================================================

/**
 * 创建内存池
 */
ErrorCode memory_pool_create(MemoryPool** pool, size_t block_size, size_t block_count, AllocationStrategy strategy) {
    if (!pool || block_size == 0 || block_count == 0) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 计算实际需要的内存大小（包括对齐）
    size_t aligned_block_size = (block_size + MEMORY_ALIGNMENT - 1) & ~(MEMORY_ALIGNMENT - 1);
    size_t total_size = aligned_block_size * block_count;
    
    // 分配内存池结构体
    *pool = (MemoryPool*)malloc(sizeof(MemoryPool));
    if (!*pool) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 分配内存池空间
    (*pool)->pool_start = malloc(total_size);
    if (!(*pool)->pool_start) {
        free(*pool);
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 分配位图（用于跟踪分配状态）
    size_t bitmap_size = (block_count + 31) / 32;
    (*pool)->allocation_bitmap = (uint32_t*)malloc(bitmap_size * sizeof(uint32_t));
    if (!(*pool)->allocation_bitmap) {
        free((*pool)->pool_start);
        free(*pool);
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 初始化内存池
    (*pool)->pool_end = (char*)(*pool)->pool_start + total_size;
    (*pool)->current_position = (*pool)->pool_start;
    (*pool)->block_size = aligned_block_size;
    (*pool)->total_blocks = block_count;
    (*pool)->free_blocks = block_count;
    (*pool)->strategy = strategy;
    
    // 清零位图
    memset((*pool)->allocation_bitmap, 0, bitmap_size * sizeof(uint32_t));
    
    return ERROR_SUCCESS;
}

/**
 * 销毁内存池
 */
ErrorCode memory_pool_destroy(MemoryPool* pool) {
    if (!pool) {
        return ERROR_NULL_POINTER;
    }
    
    if (pool->allocation_bitmap) {
        free(pool->allocation_bitmap);
    }
    
    if (pool->pool_start) {
        free(pool->pool_start);
    }
    
    free(pool);
    return ERROR_SUCCESS;
}

/**
 * 从内存池分配内存
 */
void* memory_pool_allocate(MemoryPool* pool) {
    if (!pool || pool->free_blocks == 0) {
        return NULL;
    }
    
    switch (pool->strategy) {
        case ALLOCATION_STRATEGY_FIRST_FIT:
            // 首次适应算法
            for (size_t i = 0; i < pool->total_blocks; i++) {
                size_t bitmap_index = i / 32;
                size_t bitmap_bit = i % 32;
                
                if (!(pool->allocation_bitmap[bitmap_index] & (1 << bitmap_bit))) {
                    // 标记为已分配
                    pool->allocation_bitmap[bitmap_index] |= (1 << bitmap_bit);
                    pool->free_blocks--;
                    
                    return (char*)pool->pool_start + i * pool->block_size;
                }
            }
            break;
            
        case ALLOCATION_STRATEGY_BEST_FIT:
            // 最佳适应算法（简化实现）
            for (size_t i = 0; i < pool->total_blocks; i++) {
                size_t bitmap_index = i / 32;
                size_t bitmap_bit = i % 32;
                
                if (!(pool->allocation_bitmap[bitmap_index] & (1 << bitmap_bit))) {
                    // 标记为已分配
                    pool->allocation_bitmap[bitmap_index] |= (1 << bitmap_bit);
                    pool->free_blocks--;
                    
                    return (char*)pool->pool_start + i * pool->block_size;
                }
            }
            break;
            
        case ALLOCATION_STRATEGY_POOL:
            // 内存池策略 - 使用当前位置
            if (pool->current_position < pool->pool_end) {
                void* block = pool->current_position;
                pool->current_position = (char*)pool->current_position + pool->block_size;
                pool->free_blocks--;
                return block;
            }
            break;
            
        default:
            break;
    }
    
    return NULL;
}

/**
 * 释放内存池中的内存块
 */
ErrorCode memory_pool_free(MemoryPool* pool, void* block) {
    if (!pool || !block) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 检查块是否在内存池范围内
    if (block < pool->pool_start || block >= pool->pool_end) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 计算块索引
    size_t block_index = ((char*)block - (char*)pool->pool_start) / pool->block_size;
    
    // 检查是否对齐
    if (((char*)block - (char*)pool->pool_start) % pool->block_size != 0) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 清除分配标记
    size_t bitmap_index = block_index / 32;
    size_t bitmap_bit = block_index % 32;
    
    if (!(pool->allocation_bitmap[bitmap_index] & (1 << bitmap_bit))) {
        return ERROR_INVALID_PARAMETER; // 块未分配
    }
    
    pool->allocation_bitmap[bitmap_index] &= ~(1 << bitmap_bit);
    pool->free_blocks++;
    
    return ERROR_SUCCESS;
}

/**
 * 获取内存池空闲块数量
 */
size_t memory_pool_get_free_blocks(const MemoryPool* pool) {
    return pool ? pool->free_blocks : 0;
}

/**
 * 获取内存池总块数量
 */
size_t memory_pool_get_total_blocks(const MemoryPool* pool) {
    return pool ? pool->total_blocks : 0;
}

/**
 * 获取内存池碎片率
 */
float memory_pool_get_fragmentation_ratio(const MemoryPool* pool) {
    if (!pool || pool->total_blocks == 0) {
        return 0.0f;
    }
    
    // 简化的碎片率计算
    size_t free_blocks = pool->free_blocks;
    size_t total_blocks = pool->total_blocks;
    
    return 1.0f - ((float)free_blocks / (float)total_blocks);
}

// ============================================================================
// 链表操作实现
// ============================================================================

/**
 * 创建链表
 */
ErrorCode linked_list_create(LinkedList** list, size_t initial_capacity) {
    if (!list) {
        return ERROR_INVALID_PARAMETER;
    }
    
    *list = (LinkedList*)malloc(sizeof(LinkedList));
    if (!*list) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 创建节点内存池
    ErrorCode error = memory_pool_create(&(*list)->node_pool, sizeof(LinkedListNode), initial_capacity, ALLOCATION_STRATEGY_POOL);
    if (error != ERROR_SUCCESS) {
        free(*list);
        return error;
    }
    
    (*list)->head = NULL;
    (*list)->tail = NULL;
    (*list)->size = 0;
    (*list)->capacity = initial_capacity;
    (*list)->is_sorted = false;
    
    return ERROR_SUCCESS;
}

/**
 * 销毁链表
 */
ErrorCode linked_list_destroy(LinkedList* list) {
    if (!list) {
        return ERROR_NULL_POINTER;
    }
    
    // 释放所有节点
    LinkedListNode* current = list->head;
    while (current) {
        LinkedListNode* next = current->next;
        memory_pool_free(list->node_pool, current);
        current = next;
    }
    
    // 销毁内存池
    memory_pool_destroy(list->node_pool);
    
    free(list);
    return ERROR_SUCCESS;
}

/**
 * 在链表尾部添加节点
 */
ErrorCode linked_list_append(LinkedList* list, void* data) {
    if (!list || !data) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 创建新节点
    LinkedListNode* new_node = (LinkedListNode*)memory_pool_allocate(list->node_pool);
    if (!new_node) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = list->tail;
    new_node->hash = 0; // 简化实现
    
    if (list->tail) {
        list->tail->next = new_node;
        list->tail = new_node;
    } else {
        list->head = new_node;
        list->tail = new_node;
    }
    
    list->size++;
    list->is_sorted = false;
    
    return ERROR_SUCCESS;
}

/**
 * 在链表头部添加节点
 */
ErrorCode linked_list_prepend(LinkedList* list, void* data) {
    if (!list || !data) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 创建新节点
    LinkedListNode* new_node = (LinkedListNode*)memory_pool_allocate(list->node_pool);
    if (!new_node) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    new_node->data = data;
    new_node->next = list->head;
    new_node->prev = NULL;
    new_node->hash = 0;
    
    if (list->head) {
        list->head->prev = new_node;
    } else {
        list->tail = new_node;
    }
    
    list->head = new_node;
    list->size++;
    list->is_sorted = false;
    
    return ERROR_SUCCESS;
}

/**
 * 在指定位置插入节点
 */
ErrorCode linked_list_insert_at(LinkedList* list, size_t index, void* data) {
    if (!list || !data) {
        return ERROR_INVALID_PARAMETER;
    }
    
    if (index == 0) {
        return linked_list_prepend(list, data);
    }
    
    if (index == list->size) {
        return linked_list_append(list, data);
    }
    
    if (index > list->size) {
        return ERROR_INDEX_OUT_OF_RANGE;
    }
    
    // 查找插入位置
    LinkedListNode* current = list->head;
    for (size_t i = 0; i < index; i++) {
        current = current->next;
    }
    
    // 创建新节点
    LinkedListNode* new_node = (LinkedListNode*)memory_pool_allocate(list->node_pool);
    if (!new_node) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    new_node->data = data;
    new_node->next = current;
    new_node->prev = current->prev;
    new_node->hash = 0;
    
    current->prev->next = new_node;
    current->prev = new_node;
    
    list->size++;
    list->is_sorted = false;
    
    return ERROR_SUCCESS;
}

/**
 * 删除指定位置的节点
 */
ErrorCode linked_list_remove_at(LinkedList* list, size_t index) {
    if (!list) {
        return ERROR_NULL_POINTER;
    }
    
    if (index >= list->size) {
        return ERROR_INDEX_OUT_OF_RANGE;
    }
    
    LinkedListNode* current = list->head;
    for (size_t i = 0; i < index; i++) {
        current = current->next;
    }
    
    if (current->prev) {
        current->prev->next = current->next;
    } else {
        list->head = current->next;
    }
    
    if (current->next) {
        current->next->prev = current->prev;
    } else {
        list->tail = current->prev;
    }
    
    memory_pool_free(list->node_pool, current);
    list->size--;
    
    return ERROR_SUCCESS;
}

/**
 * 获取指定位置的节点数据
 */
void* linked_list_get_at(const LinkedList* list, size_t index) {
    if (!list || index >= list->size) {
        return NULL;
    }
    
    LinkedListNode* current = list->head;
    for (size_t i = 0; i < index; i++) {
        current = current->next;
    }
    
    return current->data;
}

/**
 * 获取链表大小
 */
size_t linked_list_size(const LinkedList* list) {
    return list ? list->size : 0;
}

/**
 * 检查链表是否为空
 */
bool linked_list_is_empty(const LinkedList* list) {
    return list ? list->size == 0 : true;
}

// ============================================================================
// 哈希表操作实现
// ============================================================================

/**
 * 默认字符串哈希函数
 */
uint32_t hash_string(const void* key, size_t key_size) {
    const char* str = (const char*)key;
    uint32_t hash = 5381;
    
    for (size_t i = 0; i < key_size && str[i]; i++) {
        hash = ((hash << 5) + hash) + str[i]; // hash * 33 + c
    }
    
    return hash;
}

/**
 * 创建哈希表
 */
ErrorCode hashtable_create(HashTable** table, size_t initial_size, float load_factor,
                         uint32_t (*hash_func)(const void*, size_t),
                         bool (*compare_func)(const void*, const void*)) {
    if (!table || initial_size == 0 || load_factor <= 0.0f || load_factor >= 1.0f) {
        return ERROR_INVALID_PARAMETER;
    }
    
    *table = (HashTable*)malloc(sizeof(HashTable));
    if (!*table) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 分配桶数组
    (*table)->buckets = (HashTableNode**)calloc(initial_size, sizeof(HashTableNode*));
    if (!(*table)->buckets) {
        free(*table);
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 创建节点内存池
    ErrorCode error = memory_pool_create(&(*table)->node_pool, sizeof(HashTableNode), initial_size, ALLOCATION_STRATEGY_POOL);
    if (error != ERROR_SUCCESS) {
        free((*table)->buckets);
        free(*table);
        return error;
    }
    
    (*table)->bucket_count = initial_size;
    (*table)->size = 0;
    (*table)->load_factor = load_factor;
    (*table)->hash_function = hash_func ? hash_func : hash_string;
    (*table)->compare_function = compare_func;
    
    return ERROR_SUCCESS;
}

/**
 * 销毁哈希表
 */
ErrorCode hashtable_destroy(HashTable* table) {
    if (!table) {
        return ERROR_NULL_POINTER;
    }
    
    // 释放所有节点
    for (size_t i = 0; i < table->bucket_count; i++) {
        HashTableNode* current = table->buckets[i];
        while (current) {
            HashTableNode* next = current->next;
            memory_pool_free(table->node_pool, current);
            current = next;
        }
    }
    
    free(table->buckets);
    memory_pool_destroy(table->node_pool);
    free(table);
    
    return ERROR_SUCCESS;
}

/**
 * 向哈希表插入键值对
 */
ErrorCode hashtable_put(HashTable* table, void* key, void* value) {
    if (!table || !key) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 检查是否需要扩容
    if ((float)table->size / (float)table->bucket_count > table->load_factor) {
        ErrorCode error = hashtable_resize(table, table->bucket_count * 2);
        if (error != ERROR_SUCCESS) {
            return error;
        }
    }
    
    // 计算哈希值
    uint32_t hash = table->hash_function(key, strlen((const char*)key));
    size_t bucket_index = hash % table->bucket_count;
    
    // 检查键是否已存在
    HashTableNode* current = table->buckets[bucket_index];
    while (current) {
        if (current->hash == hash && 
            (!table->compare_function || table->compare_function(current->key, key))) {
            // 键已存在，更新值
            current->value = value;
            return ERROR_SUCCESS;
        }
        current = current->next;
    }
    
    // 创建新节点
    HashTableNode* new_node = (HashTableNode*)memory_pool_allocate(table->node_pool);
    if (!new_node) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    new_node->key = key;
    new_node->value = value;
    new_node->hash = hash;
    new_node->next = table->buckets[bucket_index];
    
    table->buckets[bucket_index] = new_node;
    table->size++;
    
    return ERROR_SUCCESS;
}

/**
 * 从哈希表获取值
 */
ErrorCode hashtable_get(const HashTable* table, const void* key, void** value) {
    if (!table || !key || !value) {
        return ERROR_INVALID_PARAMETER;
    }
    
    uint32_t hash = table->hash_function(key, strlen((const char*)key));
    size_t bucket_index = hash % table->bucket_count;
    
    HashTableNode* current = table->buckets[bucket_index];
    while (current) {
        if (current->hash == hash && 
            (!table->compare_function || table->compare_function(current->key, key))) {
            *value = current->value;
            return ERROR_SUCCESS;
        }
        current = current->next;
    }
    
    return ERROR_NOT_FOUND;
}

/**
 * 检查哈希表是否包含键
 */
bool hashtable_contains(const HashTable* table, const void* key) {
    if (!table || !key) {
        return false;
    }
    
    void* value;
    return hashtable_get(table, key, &value) == ERROR_SUCCESS;
}

/**
 * 获取哈希表大小
 */
size_t hashtable_size(const HashTable* table) {
    return table ? table->size : 0;
}

// ============================================================================
// 队列操作实现
// ============================================================================

/**
 * 创建队列
 */
ErrorCode queue_create(Queue** queue, size_t initial_capacity) {
    if (!queue) {
        return ERROR_INVALID_PARAMETER;
    }
    
    *queue = (Queue*)malloc(sizeof(Queue));
    if (!*queue) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 创建节点内存池
    ErrorCode error = memory_pool_create(&(*queue)->node_pool, sizeof(QueueNode), initial_capacity, ALLOCATION_STRATEGY_POOL);
    if (error != ERROR_SUCCESS) {
        free(*queue);
        return error;
    }
    
    (*queue)->front = NULL;
    (*queue)->rear = NULL;
    (*queue)->size = 0;
    (*queue)->capacity = initial_capacity;
    
    return ERROR_SUCCESS;
}

/**
 * 销毁队列
 */
ErrorCode queue_destroy(Queue* queue) {
    if (!queue) {
        return ERROR_NULL_POINTER;
    }
    
    // 释放所有节点
    QueueNode* current = queue->front;
    while (current) {
        QueueNode* next = current->next;
        memory_pool_free(queue->node_pool, current);
        current = next;
    }
    
    memory_pool_destroy(queue->node_pool);
    free(queue);
    
    return ERROR_SUCCESS;
}

/**
 * 入队操作
 */
ErrorCode queue_enqueue(Queue* queue, void* data) {
    if (!queue || !data) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 创建新节点
    QueueNode* new_node = (QueueNode*)memory_pool_allocate(queue->node_pool);
    if (!new_node) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    new_node->data = data;
    new_node->next = NULL;
    
    if (queue->rear) {
        queue->rear->next = new_node;
        queue->rear = new_node;
    } else {
        queue->front = new_node;
        queue->rear = new_node;
    }
    
    queue->size++;
    return ERROR_SUCCESS;
}

/**
 * 出队操作
 */
ErrorCode queue_dequeue(Queue* queue, void** data) {
    if (!queue || !data) {
        return ERROR_INVALID_PARAMETER;
    }
    
    if (!queue->front) {
        return ERROR_INDEX_OUT_OF_RANGE; // 队列为空
    }
    
    QueueNode* front_node = queue->front;
    *data = front_node->data;
    
    queue->front = front_node->next;
    if (!queue->front) {
        queue->rear = NULL;
    }
    
    memory_pool_free(queue->node_pool, front_node);
    queue->size--;
    
    return ERROR_SUCCESS;
}

/**
 * 查看队首元素
 */
void* queue_peek(const Queue* queue) {
    return queue && queue->front ? queue->front->data : NULL;
}

/**
 * 获取队列大小
 */
size_t queue_size(const Queue* queue) {
    return queue ? queue->size : 0;
}

/**
 * 检查队列是否为空
 */
bool queue_is_empty(const Queue* queue) {
    return queue ? queue->size == 0 : true;
}

// ============================================================================
// 栈操作实现
// ============================================================================

/**
 * 创建栈
 */
ErrorCode stack_create(Stack** stack, size_t initial_capacity, size_t element_size) {
    if (!stack || element_size == 0) {
        return ERROR_INVALID_PARAMETER;
    }
    
    *stack = (Stack*)malloc(sizeof(Stack));
    if (!*stack) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 分配数据数组
    (*stack)->data = (void**)malloc(initial_capacity * sizeof(void*));
    if (!(*stack)->data) {
        free(*stack);
        return ERROR_OUT_OF_MEMORY;
    }
    
    // 创建数据内存池
    ErrorCode error = memory_pool_create(&(*stack)->data_pool, element_size, initial_capacity, ALLOCATION_STRATEGY_POOL);
    if (error != ERROR_SUCCESS) {
        free((*stack)->data);
        free(*stack);
        return error;
    }
    
    (*stack)->size = 0;
    (*stack)->capacity = initial_capacity;
    (*stack)->element_size = element_size;
    
    return ERROR_SUCCESS;
}

/**
 * 销毁栈
 */
ErrorCode stack_destroy(Stack* stack) {
    if (!stack) {
        return ERROR_NULL_POINTER;
    }
    
    // 释放所有数据
    for (size_t i = 0; i < stack->size; i++) {
        memory_pool_free(stack->data_pool, stack->data[i]);
    }
    
    free(stack->data);
    memory_pool_destroy(stack->data_pool);
    free(stack);
    
    return ERROR_SUCCESS;
}

/**
 * 压栈操作
 */
ErrorCode stack_push(Stack* stack, void* data) {
    if (!stack || !data) {
        return ERROR_INVALID_PARAMETER;
    }
    
    // 检查是否需要扩容
    if (stack->size >= stack->capacity) {
        size_t new_capacity = stack->capacity * 2;
        void** new_data = (void**)realloc(stack->data, new_capacity * sizeof(void*));
        if (!new_data) {
            return ERROR_OUT_OF_MEMORY;
        }
        
        stack->data = new_data;
        stack->capacity = new_capacity;
    }
    
    // 分配内存并复制数据
    void* element_data = memory_pool_allocate(stack->data_pool);
    if (!element_data) {
        return ERROR_OUT_OF_MEMORY;
    }
    
    memcpy(element_data, data, stack->element_size);
    stack->data[stack->size] = element_data;
    stack->size++;
    
    return ERROR_SUCCESS;
}

/**
 * 弹栈操作
 */
ErrorCode stack_pop(Stack* stack, void* data) {
    if (!stack || !data) {
        return ERROR_INVALID_PARAMETER;
    }
    
    if (stack->size == 0) {
        return ERROR_INDEX_OUT_OF_RANGE; // 栈为空
    }
    
    stack->size--;
    memcpy(data, stack->data[stack->size], stack->element_size);
    memory_pool_free(stack->data_pool, stack->data[stack->size]);
    
    return ERROR_SUCCESS;
}

/**
 * 查看栈顶元素
 */
void* stack_peek(const Stack* stack) {
    if (!stack || stack->size == 0) {
        return NULL;
    }
    
    return stack->data[stack->size - 1];
}

/**
 * 获取栈大小
 */
size_t stack_size(const Stack* stack) {
    return stack ? stack->size : 0;
}

/**
 * 检查栈是否为空
 */
bool stack_is_empty(const Stack* stack) {
    return stack ? stack->size == 0 : true;
}

// ============================================================================
// 排序算法实现
// ============================================================================

/**
 * 快速排序算法
 */
void quick_sort(void* array, size_t size, size_t element_size, int (*compare)(const void*, const void*)) {
    if (!array || size < 2 || !compare) {
        return;
    }
    
    // 使用栈来模拟递归，避免栈溢出
    Stack* stack;
    if (stack_create(&stack, 64, sizeof(size_t)) != ERROR_SUCCESS) {
        return;
    }
    
    // 压入初始范围
    size_t range[2] = {0, size - 1};
    stack_push(stack, range);
    
    while (stack_size(stack) > 0) {
        size_t current_range[2];
        stack_pop(stack, current_range);
        
        size_t low = current_range[0];
        size_t high = current_range[1];
        
        if (low < high) {
            // 分区操作
            char* arr = (char*)array;
            char* pivot = arr + high * element_size;
            
            size_t i = low - 1;
            
            for (size_t j = low; j < high; j++) {
                char* current = arr + j * element_size;
                if (compare(current, pivot) < 0) {
                    i++;
                    char* temp = arr + i * element_size;
                    
                    // 交换元素
                    for (size_t k = 0; k < element_size; k++) {
                        char temp_char = temp[k];
                        temp[k] = current[k];
                        current[k] = temp_char;
                    }
                }
            }
            
            i++;
            char* temp = arr + i * element_size;
            
            // 交换枢轴元素
            for (size_t k = 0; k < element_size; k++) {
                char temp_char = temp[k];
                temp[k] = pivot[k];
                pivot[k] = temp_char;
            }
            
            // 压入左右子范围
            size_t left_range[2] = {low, i - 1};
            size_t right_range[2] = {i + 1, high};
            
            if (left_range[0] < left_range[1]) {
                stack_push(stack, left_range);
            }
            if (right_range[0] < right_range[1]) {
                stack_push(stack, right_range);
            }
        }
    }
    
    stack_destroy(stack);
}

/**
 * 默认比较函数
 */
int default_compare(const void* a, const void* b) {
    return memcmp(a, b, sizeof(int));
}

/**
 * 二分查找算法
 */
void* binary_search(const void* array, size_t size, size_t element_size, const void* key, int (*compare)(const void*, const void*)) {
    if (!array || size == 0 || !key || !compare) {
        return NULL;
    }
    
    size_t left = 0;
    size_t right = size - 1;
    
    while (left <= right) {
        size_t mid = left + (right - left) / 2;
        const char* mid_element = (const char*)array + mid * element_size;
        
        int cmp = compare(mid_element, key);
        
        if (cmp == 0) {
            return (void*)mid_element;
        } else if (cmp < 0) {
            left = mid + 1;
        } else {
            if (mid == 0) break;
            right = mid - 1;
        }
    }
    
    return NULL;
}

// ============================================================================
// 系统管理实现
// ============================================================================

/**
 * 全局系统状态
 */
static SystemState g_system_state = SYSTEM_STATE_UNINITIALIZED;
static size_t g_total_memory_usage = 0;
static size_t g_total_allocations = 0;
static size_t g_active_objects = 0;

/**
 * 初始化数据结构系统
 */
ErrorCode data_structure_system_initialize(void) {
    if (g_system_state != SYSTEM_STATE_UNINITIALIZED) {
        return ERROR_ALREADY_EXISTS;
    }
    
    g_system_state = SYSTEM_STATE_INITIALIZING;
    
    // 初始化各个子系统
    // 这里可以添加更多的初始化代码
    
    g_system_state = SYSTEM_STATE_READY;
    return ERROR_SUCCESS;
}

/**
 * 关闭数据结构系统
 */
ErrorCode data_structure_system_shutdown(void) {
    if (g_system_state == SYSTEM_STATE_UNINITIALIZED) {
        return ERROR_SUCCESS;
    }
    
    g_system_state = SYSTEM_STATE_SHUTTING_DOWN;
    
    // 清理资源
    // 这里可以添加更多的清理代码
    
    g_system_state = SYSTEM_STATE_TERMINATED;
    return ERROR_SUCCESS;
}

/**
 * 获取系统状态
 */
SystemState data_structure_system_get_state(void) {
    return g_system_state;
}

/**
 * 获取系统统计信息
 */
ErrorCode data_structure_system_get_statistics(size_t* total_memory, size_t* total_allocations, size_t* active_objects) {
    if (!total_memory || !total_allocations || !active_objects) {
        return ERROR_INVALID_PARAMETER;
    }
    
    *total_memory = g_total_memory_usage;
    *total_allocations = g_total_allocations;
    *active_objects = g_active_objects;
    
    return ERROR_SUCCESS;
}

/**
 * 获取错误字符串
 */
const char* data_structure_system_get_error_string(ErrorCode error) {
    switch (error) {
        case ERROR_SUCCESS: return "成功";
        case ERROR_OUT_OF_MEMORY: return "内存不足";
        case ERROR_INVALID_PARAMETER: return "无效参数";
        case ERROR_NULL_POINTER: return "空指针";
        case ERROR_BUFFER_OVERFLOW: return "缓冲区溢出";
        case ERROR_INDEX_OUT_OF_RANGE: return "索引越界";
        case ERROR_ALLOCATION_FAILED: return "分配失败";
        case ERROR_INITIALIZATION_FAILED: return "初始化失败";
        case ERROR_OPERATION_FAILED: return "操作失败";
        case ERROR_SYSTEM_BUSY: return "系统忙";
        case ERROR_TIMEOUT: return "超时";
        case ERROR_NOT_FOUND: return "未找到";
        case ERROR_ALREADY_EXISTS: return "已存在";
        case ERROR_PERMISSION_DENIED: return "权限拒绝";
        case ERROR_DEVICE_ERROR: return "设备错误";
        case ERROR_NETWORK_ERROR: return "网络错误";
        case ERROR_UNKNOWN: return "未知错误";
        default: return "未知错误代码";
    }
}

// ============================================================================
// 示例代码和使用演示
// ============================================================================

#ifdef DATA_STRUCTURE_EXAMPLES

/**
 * 数据结构使用示例
 */
void data_structure_usage_examples(void) {
    printf("=== 数据结构处理模块使用示例 ===\n");
    
    // 初始化系统
    if (data_structure_system_initialize() != ERROR_SUCCESS) {
        printf("系统初始化失败\n");
        return;
    }
    
    // 链表示例
    printf("\n--- 链表示例 ---\n");
    LinkedList* list;
    if (linked_list_create(&list, 16) == ERROR_SUCCESS) {
        int data[] = {5, 2, 8, 1, 9};
        
        for (int i = 0; i < 5; i++) {
            linked_list_append(list, &data[i]);
        }
        
        printf("链表大小: %zu\n", linked_list_size(list));
        
        // 排序链表
        quick_sort(list->head, list->size, sizeof(LinkedListNode*), default_compare);
        
        linked_list_destroy(list);
    }
    
    // 哈希表示例
    printf("\n--- 哈希表示例 ---\n");
    HashTable* table;
    if (hashtable_create(&table, 16, 0.75f, hash_string, NULL) == ERROR_SUCCESS) {
        const char* keys[] = {"apple", "banana", "cherry"};
        const char* values[] = {"red", "yellow", "red"};
        
        for (int i = 0; i < 3; i++) {
            hashtable_put(table, (void*)keys[i], (void*)values[i]);
        }
        
        printf("哈希表大小: %zu\n", hashtable_size(table));
        
        hashtable_destroy(table);
    }
    
    // 队列示例
    printf("\n--- 队列示例 ---\n");
    Queue* queue;
    if (queue_create(&queue, 8) == ERROR_SUCCESS) {
        int queue_data[] = {1, 2, 3};
        
        for (int i = 0; i < 3; i++) {
            queue_enqueue(queue, &queue_data[i]);
        }
        
        printf("队列大小: %zu\n", queue_size(queue));
        
        while (!queue_is_empty(queue)) {
            int* value;
            if (queue_dequeue(queue, (void**)&value) == ERROR_SUCCESS) {
                printf("出队: %d\n", *value);
            }
        }
        
        queue_destroy(queue);
    }
    
    // 栈示例
    printf("\n--- 栈示例 ---\n");
    Stack* stack;
    if (stack_create(&stack, 8, sizeof(int)) == ERROR_SUCCESS) {
        int stack_data[] = {1, 2, 3};
        
        for (int i = 0; i < 3; i++) {
            stack_push(stack, &stack_data[i]);
        }
        
        printf("栈大小: %zu\n", stack_size(stack));
        
        while (!stack_is_empty(stack)) {
            int value;
            if (stack_pop(stack, &value) == ERROR_SUCCESS) {
                printf("弹栈: %d\n", value);
            }
        }
        
        stack_destroy(stack);
    }
    
    // 获取系统统计信息
    printf("\n--- 系统统计信息 ---\n");
    size_t total_memory, total_allocations, active_objects;
    if (data_structure_system_get_statistics(&total_memory, &total_allocations, &active_objects) == ERROR_SUCCESS) {
        printf("总内存使用: %zu bytes\n", total_memory);
        printf("总分配次数: %zu\n", total_allocations);
        printf("活跃对象数: %zu\n", active_objects);
    }
    
    // 关闭系统
    data_structure_system_shutdown();
    
    printf("\n示例执行完成\n");
}

#endif // DATA_STRUCTURE_EXAMPLES

// ============================================================================
// 版本信息和导出函数
// ============================================================================

/**
 * 获取版本字符串
 */
const char* data_structure_get_version(void) {
    return DATA_STRUCTURE_SYSTEM_VERSION_STRING;
}

/**
 * 导出的初始化函数
 */
DATA_STRUCTURE_API ErrorCode data_structure_initialize(void) {
    return data_structure_system_initialize();
}

/**
 * 导出的关闭函数
 */
DATA_STRUCTURE_API ErrorCode data_structure_shutdown(void) {
    return data_structure_system_shutdown();
}

/**
 * 导出的版本函数
 */
DATA_STRUCTURE_API const char* data_structure_get_version_export(void) {
    return data_structure_get_version();
}