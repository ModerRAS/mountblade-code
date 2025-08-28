#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part011_sub001_sub001.c - 核心引擎模块 - 文件处理和配置管理

// 全局变量定义
static char *g_config_file_path = (char *)0x180bf5240;  // 配置文件路径
static void *g_engine_context = (void *)0x180c86870;    // 引擎上下文
static void *g_memory_pool = (void *)0x180c8ed18;      // 内存池
static int g_file_handle_count = 0;                    // 文件句柄计数

// 字符替换表，用于文件名清理
static const char g_invalid_chars[] = "\\/*?\"<>|";     // 非法字符表

/**
 * @brief 处理并生成配置文件
 * @param param_1 引擎上下文指针
 * @param param_2 输出缓冲区
 * @param param_3 输出缓冲区大小
 * @param param_4 保留参数
 * 
 * 此函数负责读取和处理游戏配置文件，生成标准化的配置输出。
 * 包括路径处理、文件名清理、参数格式化等操作。
 */
void generate_config_file(void *param_1, void *param_2, void *param_3, void *param_4)
{
    double temp_double1, temp_double2;
    char current_char;
    uint buffer_size;
    void *temp_ptr;
    int64_t temp_long1, temp_long2;
    void *output_buffer;
    char *string_ptr;
    uint temp_uint;
    int temp_int;
    
    // 检查配置文件路径是否有效
    if (g_config_file_path == '\0') {
        return;
    }
    
    // 初始化输出缓冲区
    output_buffer = &g_invalid_chars;  // 临时使用，后续会被重新分配
    buffer_size = *(uint *)((int64_t)g_engine_context + 0x180);
    
    // 分配并初始化缓冲区
    if (*(int64_t *)((int64_t)g_engine_context + 0x178) != 0) {
        allocate_buffer(&output_buffer, buffer_size, param_3, param_4, 1, 0xfffffffffffffffe);
    }
    
    // 复制数据到缓冲区
    if (buffer_size != 0) {
        memcpy(output_buffer, *(void **)((int64_t)g_engine_context + 0x178), buffer_size);
    }
    
    // 确保字符串以null结尾
    if (output_buffer != (void *)0x0) {
        ((char *)output_buffer)[buffer_size] = 0;
    }
    
    // 写入文件头信息
    write_string_to_buffer(&output_buffer, "logs/", 5);
    write_string_to_buffer(&output_buffer, "framework_config.txt", 0x18);
    
    // 创建配置对象
    temp_ptr = create_config_object(g_memory_pool, 0x18, 8, 3);
    string_ptr = "";  // 默认空字符串
    
    if (output_buffer != (void *)0x0) {
        string_ptr = (char *)output_buffer;
    }
    
    // 初始化配置对象
    *temp_ptr = 0;
    *(char *)((int64_t)temp_ptr + 2) = 0;
    initialize_config_object(temp_ptr, string_ptr, &g_config_template);
    
    // 处理配置项
    process_config_items(temp_ptr);
    
    // 处理附加配置
    process_additional_configs(temp_ptr);
    
    // 清理资源
    cleanup_config_object(temp_ptr);
}

/**
 * @brief 处理配置项列表
 * @param config_obj 配置对象指针
 */
void process_config_items(void *config_obj)
{
    uint item_count = 0;
    uint64_t current_offset = 0;
    int64_t base_address;
    int64_t item_index;
    
    // 遍历所有配置项
    while ((uint64_t)(int64_t)item_count < (uint64_t)((g_config_end - g_config_start) >> 8)) {
        base_address = g_config_start;
        item_index = 0;
        
        // 处理单个配置项
        process_single_config_item(config_obj, base_address, current_offset);
        
        item_count++;
        current_offset += 0x100;
    }
}

/**
 * @brief 处理单个配置项
 * @param config_obj 配置对象
 * @param base_address 基地址
 * @param offset 偏移量
 */
void process_single_config_item(void *config_obj, int64_t base_address, uint64_t offset)
{
    char *item_name;
    char *cleaned_name;
    double value1, value2;
    int64_t long_value;
    
    // 获取配置项名称
    item_name = get_config_item_name(base_address, offset);
    
    // 清理名称中的非法字符
    cleaned_name = clean_string(item_name);
    
    // 添加名称到配置对象
    add_config_string(config_obj, &g_name_key, cleaned_name);
    
    // 处理浮点数值
    value1 = *(double *)(base_address + 0xa0 + offset);
    value2 = (double)*(uint *)(base_address + 0xb0 + offset);
    if (value2 != 0.0) {
        add_config_double(config_obj, &g_value_key, &g_float_suffix, value2);
    }
    if (value1 != 0.0) {
        add_config_double(config_obj, &g_value_key, &g_double_suffix, value1);
    }
    
    // 处理其他数值类型
    process_numeric_values(config_obj, base_address, offset);
    
    // 处理子项
    process_sub_items(config_obj, base_address, offset);
}

/**
 * @brief 清理字符串中的非法字符
 * @param input_string 输入字符串
 * @return 清理后的字符串
 */
char *clean_string(char *input_string)
{
    char *current_char = input_string;
    int64_t index = 0;
    
    if (input_string == (char *)0x0) {
        return "";
    }
    
    // 替换非法字符为下划线
    while (*current_char != '\0') {
        if (strchr(g_invalid_chars, (int)*current_char) != 0) {
            *current_char = '_';
        }
        current_char++;
        index++;
    }
    
    return input_string;
}

/**
 * @brief 释放资源数组
 * @param resource_array 资源数组指针
 */
void free_resource_array(int64_t *resource_array)
{
    int64_t start_addr = *resource_array;
    int64_t end_addr = resource_array[1];
    int64_t current_addr;
    
    // 遍历并释放每个资源
    for (current_addr = start_addr; current_addr != end_addr; current_addr += 0x100) {
        release_resource(current_addr);
    }
    
    // 释放数组本身
    if (start_addr != 0) {
        free_memory(resource_array);
    }
}

/**
 * @brief 清理数据结构数组
 * @param data_array 数据数组指针
 */
void cleanup_data_array(int64_t *data_array)
{
    void **current_ptr;
    void **end_ptr;
    
    current_ptr = (void **)*data_array;
    end_ptr = (void **)data_array[1];
    
    // 遍历并清理每个数据项
    while (current_ptr != end_ptr) {
        *current_ptr = &g_invalid_chars;  // 重置指针
        if (current_ptr[1] != 0) {
            free_memory(current_ptr[1]);    // 释放关联内存
        }
        current_ptr[1] = 0;                // 清空指针
        *(uint *)(current_ptr + 3) = 0;    // 清空标志
        *current_ptr = &g_memory_pool;     // 重新关联到内存池
        current_ptr += 5;                   // 移动到下一项
    }
    
    // 清理数组本身
    if (*data_array != 0) {
        free_memory(data_array);
    }
}

/**
 * @brief 安全释放内存对象
 * @param memory_obj 内存对象指针
 */
void safe_free_memory(void *memory_obj)
{
    if (memory_obj != 0) {
        // 检查是否有文件句柄需要关闭
        if (*(int64_t *)((int64_t)memory_obj + 8) != 0) {
            close_file_handle(*(int64_t *)((int64_t)memory_obj + 8));
            *(int64_t *)((int64_t)memory_obj + 8) = 0;
            
            // 减少文件句柄计数
            acquire_lock();
            g_file_handle_count--;
            release_lock();
        }
        
        // 释放内存
        free_memory(memory_obj);
    }
}

/**
 * @brief 复制配置对象
 * @param dest 目标对象
 * @param source 源对象
 * @param param_3 保留参数
 * @param param_4 保留参数
 * @return 目标对象指针
 */
int64_t copy_config_object(int64_t dest, int64_t source, void *param_3, void *param_4)
{
    void *temp_ptr;
    uint temp_uint1, temp_uint2, temp_uint3, temp_uint4;
    uint64_t temp_ulong;
    
    // 初始化复制操作
    initialize_copy_operation();
    
    // 复制基本数据成员
    copy_basic_members(dest, source);
    
    // 复制复杂数据结构
    copy_complex_structures(dest, source);
    
    // 复制数组数据
    copy_array_data(dest, source);
    
    // 复制配置项
    copy_config_items(dest, source, param_3, param_4);
    
    return dest;
}

/**
 * @brief 释放配置内存
 * @param memory_ptr 内存指针
 * @param flags 释放标志
 * @param param_3 保留参数
 * @param param_4 保留参数
 * @return 释放后的内存指针
 */
uint64_t free_config_memory(uint64_t memory_ptr, uint64_t flags, uint64_t param_3, uint64_t param_4)
{
    initialize_memory_free();
    
    // 根据标志决定是否释放内存
    if ((flags & 1) != 0) {
        free_memory(memory_ptr, 200, param_3, param_4, 0xfffffffffffffffe);
    }
    
    return memory_ptr;
}

/**
 * @brief 查找配置项
 * @param config_array 配置数组
 * @param search_key 搜索键
 * @param param_3 保留参数
 * @param search_item 搜索项
 * @param param_5 保留参数
 * @return 找到的配置项
 */
uint64_t *find_config_item(int64_t *config_array, uint64_t *search_key, uint64_t param_3, 
                           int64_t *search_item, int64_t param_5)
{
    byte *key_data, *search_data;
    uint key_char, search_char;
    int64_t key_length;
    bool match_found;
    int64_t *current_item, *prev_item;
    
    // 检查边界条件
    if ((search_item == (int64_t *)*config_array) || (search_item == config_array)) {
        // 检查是否匹配当前项
        if (config_matches_criteria(config_array, search_item, param_5)) {
            return process_matching_item(config_array, search_key, search_item, param_5);
        }
    }
    
    // 在链表中搜索
    current_item = (int64_t *)traverse_list(search_item);
    if (compare_items(current_item, search_item, param_5)) {
        return find_best_match(config_array, search_key, current_item, search_item, param_5);
    }
    
    // 遍历配置项
    match_found = find_matching_config(config_array, search_item, param_5);
    
    // 处理找到的配置
    return process_found_config(config_array, search_key, search_item, match_found, param_5);
}

/**
 * @brief 插入配置项
 * @param config_array 配置数组
 * @param insert_pos 插入位置
 * @param config_item 配置项
 * @param insert_flag 插入标志
 * @param param_5 保留参数
 */
void insert_config_item(int64_t config_array, uint64_t insert_pos, int64_t config_item, 
                       uint64_t insert_flag, int64_t param_5)
{
    byte *name1, *name2;
    uint char1, char2;
    int64_t name_length;
    void *new_item;
    uint64_t temp_ulong;
    
    // 检查是否可以直接插入
    if (((char)insert_flag != '\0') || (config_item == config_array)) {
        if (can_insert_directly(config_item, param_5)) {
            return;
        }
    }
    
    // 创建新的配置项
    new_item = create_config_item(g_memory_pool, 0x68, *(char *)((int64_t)config_array + 0x28), 
                                 insert_flag, 0xfffffffffffffffe);
    
    // 初始化新项
    initialize_config_item(new_item, config_item, config_array, insert_flag);
    
    // 执行插入操作
    perform_insertion(config_array, insert_pos, new_item, config_item, insert_flag);
}

/**
 * @brief 复制配置树结构
 * @param dest 目标位置
 * @param source_tree 源树
 * @param param_3 保留参数
 * @param param_4 保留参数
 * @return 复制的树结构
 */
uint64_t *copy_config_tree(int64_t dest, int64_t *source_tree, uint64_t param_3, uint64_t param_4)
{
    int64_t *current_node;
    uint64_t *new_node;
    uint64_t *prev_node;
    uint64_t temp_ulong;
    
    // 创建根节点
    new_node = (uint64_t *)create_config_node();
    
    // 递归复制子节点
    if (*source_tree != 0) {
        temp_ulong = copy_config_tree(dest, *source_tree, new_node, param_4, 0xfffffffffffffffe);
        *new_node = temp_ulong;
    }
    
    prev_node = new_node;
    
    // 复制兄弟节点
    for (current_node = (int64_t *)source_tree[1]; current_node != (int64_t *)0x0; 
         current_node = (int64_t *)current_node[1]) {
        
        // 创建新节点
        new_node = create_config_node();
        copy_node_data(new_node, current_node);
        
        // 链接节点
        prev_node[1] = new_node;
        
        // 递归复制子树
        if (*current_node != 0) {
            temp_ulong = copy_config_tree(dest, *current_node, new_node);
            *new_node = temp_ulong;
        }
        
        prev_node = new_node;
    }
    
    return prev_node;
}

/**
 * @brief 创建配置节点
 * @param dest 目标位置
 * @param source 源数据
 * @param param_3 保留参数
 * @param param_4 保留参数
 * @return 新创建的节点
 */
uint64_t *create_config_node(int64_t dest, int64_t *source, uint64_t param_3, uint64_t param_4)
{
    uint64_t *new_node;
    
    // 分配节点内存
    new_node = (uint64_t *)allocate_config_node(g_memory_pool, 0x68, 
                                                 *(char *)((int64_t)dest + 0x28), 
                                                 param_4, 0xfffffffffffffffe);
    
    // 复制节点数据
    copy_node_data(new_node + 4, source + 4);
    copy_node_data(new_node + 8, source + 8);
    new_node[0xc] = source[0xc];
    
    // 初始化节点链接
    *new_node = 0;
    new_node[1] = 0;
    new_node[2] = param_3;
    *(char *)(new_node + 3) = (char)source[3];
    
    return new_node;
}

/**
 * @brief 批量处理配置项
 * @param result_ptr 结果指针
 * @param start_range 开始范围
 * @param end_range 结束范围
 * @param param_4 保留参数
 * @return 处理结果
 */
uint64_t *batch_process_config_items(uint64_t *result_ptr, int64_t *start_range, 
                                       int64_t *end_range, uint64_t *param_4)
{
    int64_t *current_item;
    uint64_t *current_result;
    int32_t temp_uint;
    int64_t temp_long;
    
    *result_ptr = param_4;
    
    // 检查是否有需要处理的项目
    if (start_range != end_range) {
        current_item = start_range + 0x1b;
        
        do {
            // 处理单个配置项
            current_result = process_single_config_item_batch(current_item, param_4);
            
            // 更新结果和指针
            *result_ptr = current_result;
            current_item += 0x20;
            param_4 += 0x20;
            
        } while (current_item != end_range);
    }
    
    return result_ptr;
}

/**
 * @brief 初始化同步对象
 * @param sync_obj 同步对象指针
 */
void initialize_sync_object(uint64_t *sync_obj)
{
    *sync_obj = &g_sync_template;
    destroy_mutex_in_place();
    destroy_condition_in_place(sync_obj + 4);
    *sync_obj = &g_mutex_template;
    *sync_obj = &g_event_template;
    *sync_obj = &g_semaphore_template;
}

/**
 * @brief 清理同步对象
 * @param sync_obj 同步对象指针
 * @param flags 清理标志
 * @return 清理后的对象指针
 */
uint64_t cleanup_sync_object(uint64_t sync_obj, uint64_t flags)
{
    initialize_sync_object();
    
    if ((flags & 1) != 0) {
        free_memory(sync_obj, 0xc0);
    }
    
    return sync_obj;
}

/**
 * @brief 设置同步状态
 * @param sync_obj 同步对象
 * @param state 要设置的状态
 */
void set_sync_state(int64_t sync_obj, int8_t state)
{
    int lock_result;
    
    // 获取互斥锁
    lock_result = mutex_lock(sync_obj + 0x48);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    // 设置状态
    *(int8_t *)(sync_obj + 0x98) = state;
    
    // 释放互斥锁
    lock_result = mutex_unlock(sync_obj + 0x48);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
}

/**
 * @brief 等待同步条件
 * @param condition 条件变量
 * @param mutex 互斥锁
 * @param timeout 超时时间
 */
void wait_for_condition(uint64_t condition, uint64_t *mutex, int64_t *timeout)
{
    int wait_result;
    uint timed_wait_result;
    int64_t abs_timeout;
    int rel_timeout_ns;
    uint64_t stack_cookie;
    
    // 栈保护检查
    stack_cookie = g_stack_cookie ^ (uint64_t)&abs_timeout;
    
    // 计算绝对超时时间
    if (*timeout < 1) {
        abs_timeout = 0;
        rel_timeout_ns = 0;
    } else {
        abs_timeout = get_current_time() + *timeout * 1000;
        rel_timeout_ns = (int)abs_timeout % 1000000000;
        abs_timeout = abs_timeout / 1000000000;
    }
    
    // 检查互斥锁所有权
    wait_result = mutex_owns(*mutex);
    if (wait_result == 0) {
        throw_cpp_error(4);
    }
    
    // 等待条件变量
    timed_wait_result = condition_timedwait(condition, *mutex, &abs_timeout);
    if ((timed_wait_result & 0xfffffffd) != 0) {
        throw_c_error(timed_wait_result);
    }
    
    // 栈保护清理
    cleanup_stack_protection(stack_cookie ^ (uint64_t)&abs_timeout);
}

/**
 * @brief 等待状态变化
 * @param sync_obj 同步对象
 * @param param_2 保留参数
 * @param param_3 保留参数
 * @param param_4 保留参数
 * @return 状态值
 */
int8_t wait_for_state_change(int64_t sync_obj, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    int8_t current_state;
    int lock_result;
    uint64_t wait_timeout;
    int64_t lock_addr;
    char lock_acquired;
    
    lock_addr = sync_obj + 0x48;
    lock_acquired = 0;
    
    // 获取锁
    lock_result = mutex_lock();
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    lock_acquired = '\x01';
    
    // 检查当前状态
    if (*(char *)(sync_obj + 0x98) == '\x01') {
        current_state = 1;
    } else {
        wait_timeout = 1;
        wait_for_condition(sync_obj, &lock_addr, &wait_timeout, param_4);
        current_state = *(int8_t *)(sync_obj + 0x98);
    }
    
    // 重置状态
    *(int8_t *)(sync_obj + 0x98) = 0;
    
    // 释放锁
    if (lock_acquired != '\0') {
        lock_result = mutex_unlock(lock_addr);
        if (lock_result != 0) {
            throw_c_error(lock_result);
        }
    }
    
    return current_state;
}

/**
 * @brief 清理条件变量
 */
void cleanup_condition_variable(void)
{
    destroy_condition_in_place();
}