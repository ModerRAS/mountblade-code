#include "TaleWorlds.Native.Split.h"

// 03_rendering_part006.c - 渲染状态管理函数
// 本文件包含渲染状态初始化、资源管理和序列化相关功能

/* ================================================
   渲染状态初始化函数
   ================================================ */

/**
 * 初始化渲染状态管理器
 * @param state_manager 渲染状态管理器指针
 * 
 * 该函数负责初始化渲染状态管理器的所有状态指针，
 * 包括清除现有的状态引用和重置状态计数器
 */
void initialize_rendering_state_manager(void* state_manager)
{
    uint64_t cleanup_flag = 0xfffffffffffffffe;
    
    // 调用基础初始化函数
    initialize_rendering_pipeline(state_manager + 2000);
    
    // 设置渲染回调函数和状态清理
    setup_render_callback(state_manager + 0x248, 0x58, 0x10, get_default_render_handler, cleanup_flag);
    
    // 初始化多个渲染状态槽位
    initialize_render_slot(state_manager + 0x228, 0x230, 0x240);
    initialize_render_slot(state_manager + 0x208, 0x210, 0x220);
    initialize_render_slot(state_manager + 0x1e8, 0x1f0, 0x200);
    initialize_render_slot(state_manager + 0x1c8, 0x1d0, 0x1e0);
    initialize_render_slot(state_manager + 0x1a8, 0x1b0, 0x1c0);
    initialize_render_slot(state_manager + 0x188, 400, 0x1a0);
    initialize_render_slot(state_manager + 0x168, 0x170, 0x180);
    initialize_render_slot(state_manager + 0x148, 0x150, 0x160);
    
    // 执行中间初始化步骤
    execute_intermediate_initialization();
    
    // 继续初始化剩余的状态槽位
    initialize_render_slot(state_manager + 0x108, 0x110, 0x120);
    initialize_render_slot(state_manager + 0xe8, 0xf0, 0x100);
    initialize_render_slot(state_manager + 200, 0xd0, 0xe0);
    initialize_render_slot(state_manager + 0xa8, 0xb0, 0xc0);
    initialize_render_slot(state_manager + 0x88, 0x90, 0xa0);
    initialize_render_slot(state_manager + 0x68, 0x70, 0x80);
    initialize_render_slot(state_manager + 0x48, 0x50, 0x60);
    initialize_render_slot(state_manager + 0x28, 0x30, 0x40);
    initialize_render_slot(state_manager + 8, 0x10, 0x20);
}

/**
 * 初始化单个渲染状态槽位
 * @param base_address 基础地址
 * @param status_address 状态地址
 * @param counter_address 计数器地址
 * 
 * 内部函数：负责初始化单个渲染状态槽位
 */
static void initialize_render_slot(void* base_address, void* status_address, void* counter_address)
{
    // 设置初始状态指针
    *(void**)base_address = get_active_render_state_table();
    
    // 检查并清理现有状态
    if (*(int64_t*)status_address != 0) {
        trigger_cleanup_error();
    }
    
    // 重置状态和计数器
    *(int64_t*)status_address = 0;
    *(uint32_t*)counter_address = 0;
    *(void**)base_address = get_clean_render_state_table();
}


/* ================================================
   渲染资源管理函数
   ================================================ */

/**
 * 创建渲染资源管理器
 * @param resource_config 资源配置参数
 * @param size_hint 大小提示
 * @return 资源管理器指针
 * 
 * 创建并初始化一个新的渲染资源管理器实例
 */
void* create_render_resource_manager(void* resource_config, int64_t size_hint)
{
    void* resource_manager;
    
    // 分配资源管理器内存
    resource_manager = allocate_render_resource_memory(get_global_resource_pool(), 0x1c68, 8, 3, 0xfffffffffffffffe);
    
    // 初始化资源管理器的基本结构
    *resource_manager = get_default_resource_table();
    *resource_manager = get_extended_resource_table();
    initialize_resource_subsystem(resource_manager + 1);
    
    // 如果需要，设置资源大小
    if (size_hint != 0) {
        configure_resource_size(resource_manager + 1, size_hint + 8);
    }
    
    return resource_manager;
}

/**
 * 复制渲染资源数据
 * @param destination 目标资源指针
 * @param source 源资源指针
 * @return 目标资源指针
 * 
 * 将源资源数据复制到目标资源中
 */
void* copy_render_resource_data(void* destination, void* source)
{
    // 复制基本资源数据
    *destination = *source;
    copy_resource_data_block(destination + 2, source + 2);
    copy_resource_data_block(destination + 10, source + 10);
    copy_resource_data_block(destination + 0x12, source + 0x12);
    copy_resource_data_block(destination + 0x1a, source + 0x1a);
    copy_resource_data_block(destination + 0x22, source + 0x22);
    copy_resource_data_block(destination + 0x2a, source + 0x2a);
    copy_resource_data_block(destination + 0x32, source + 0x32);
    copy_resource_data_block(destination + 0x3a, source + 0x3a);
    copy_resource_data_block(destination + 0x42, source + 0x42);
    
    // 处理可变大小的数据块
    if (destination + 0x4a != source + 0x4a) {
        copy_variable_resource_data(destination + 0x4a, *(uint64_t*)(source + 0x4a), *(uint64_t*)(source + 0x4c));
    }
    
    // 复制额外的资源数据块
    copy_resource_data_block(destination + 0x52, source + 0x52);
    copy_resource_data_block(destination + 0x5a, source + 0x5a);
    copy_resource_data_block(destination + 0x62, source + 0x62);
    copy_resource_data_block(destination + 0x6a, source + 0x6a);
    copy_resource_data_block(destination + 0x72, source + 0x72);
    copy_resource_data_block(destination + 0x7a, source + 0x7a);
    copy_resource_data_block(destination + 0x82, source + 0x82);
    copy_resource_data_block(destination + 0x8a, source + 0x8a);
    
    // 复制资源名称和描述信息
    copy_resource_metadata(destination + 0x96, source, 0x10);
    
    // 复制最后的资源标识符
    destination[0x1f2] = source[0x1f2];
    *(uint8_t*)(destination + 499) = *(uint8_t*)(source + 499);
    
    // 复制扩展资源数据
    copy_extended_resource_data(destination + 500, source + 500);
    
    return destination;
}


/* ================================================
   渲染状态更新函数
   ================================================ */

/**
 * 更新渲染状态
 * @param state_context 状态上下文
 * 
 * 更新渲染状态并同步相关资源
 */
void update_rendering_state(void* state_context)
{
    int update_result;
    uint64_t update_flags;
    void** current_state;
    void** previous_state;
    void** new_state;
    int64_t state_id;
    void** temp_state;
    void** target_state;
    
    // 分配状态更新内存
    update_flags = allocate_state_update_memory(get_global_resource_pool(), 0x2210, 0x10, 0x11, 0xfffffffffffffffe);
    current_state = (void**)get_state_update_handler(update_flags);
    
    // 执行状态更新前的检查
    if (current_state != (void**)0x0) {
        (**(code**)(*current_state + 0x28))(current_state);
    }
    
    // 更新状态引用
    previous_state = *(void**)(state_context + 0xb0);
    *(void**)(state_context + 0xb0) = current_state;
    
    // 清理之前的状态
    if (previous_state != (void**)0x0) {
        (**(code**)(*previous_state + 0x38))();
    }
    
    // 设置新状态的上下文引用
    *(int64_t*)(*(void**)(state_context + 0xb0) + 0xa8) = state_context;
    *(uint8_t*)(*(void**)(state_context + 0xb0) + 0xb1) = 1;
    
    // 初始化状态更新
    initialize_state_update(*(void**)(state_context + 0xb0));
    
    // 获取状态ID和更新队列
    state_id = get_global_state_queue();
    current_state = *(void**)(state_context + 0xb0);
    update_result = (**(code**)(*current_state + 0x60))(current_state);
    *(uint8_t*)((int64_t)current_state + 0xb2) = 1;
    
    // 获取状态队列位置
    previous_state = (void**)((int64_t)update_result * 0x98 + state_id + 8);
    update_result = lock_state_queue(previous_state + 8);
    
    if (update_result != 0) {
        throw_state_update_error(update_result);
    }
    
    // 将状态添加到更新队列
    if (current_state != (void**)0x0) {
        (**(code**)(*current_state + 0x28))(current_state);
    }
    
    temp_state = (void**)previous_state[1];
    new_state = (void**)0x0;
    
    if (temp_state < (void**)previous_state[2]) {
        // 有可用空间，直接添加
        previous_state[1] = (int64_t)(temp_state + 1);
        *temp_state = (int64_t)current_state;
    } else {
        // 需要扩展队列空间
        state_id = (int64_t)temp_state - (int64_t)*previous_state >> 3;
        if (state_id == 0) {
            state_id = 1;
        } else {
            state_id = state_id * 2;
        }
        
        new_state = (void**)expand_state_queue(get_global_resource_pool(), state_id * 8, previous_state[3]);
        temp_state = (void**)previous_state[1];
        target_state = *previous_state;
    }
    
    // 重新排列状态数据
    for (; target_state != temp_state; target_state = target_state + 1) {
        *new_state = *target_state;
        *target_state = 0;
        new_state = new_state + 1;
    }
    
    *new_state = (int64_t)current_state;
    current_state = (void**)previous_state[1];
    target_state = (void**)*previous_state;
    
    // 清理旧的状态数据
    if (target_state != current_state) {
        do {
            if ((void**)*target_state != (void**)0x0) {
                (**(code**)(*(int64_t*)*target_state + 0x38))();
            }
            target_state = target_state + 1;
        } while (target_state != current_state);
        target_state = (void**)*previous_state;
    }
    
    // 释放旧的队列内存
    if (target_state != (void**)0x0) {
        release_state_queue_memory(target_state);
    }
    
    // 更新队列指针
    *previous_state = (int64_t)new_state;
    previous_state[1] = (int64_t)(new_state + 1);
    previous_state[2] = (int64_t)(new_state + state_id);
    
    // 标记队列为已更新
    *(uint8_t*)(previous_state + 0x12) = 1;
    update_result = unlock_state_queue(previous_state + 8);
    
    if (update_result != 0) {
        throw_state_update_error(update_result);
    }
}


/* ================================================
   渲染序列化函数
   ================================================ */

/**
 * 序列化渲染数据
 * @param render_data 渲染数据指针
 * @param serialization_context 序列化上下文
 * 
 * 将渲染数据序列化为可存储或传输的格式
 */
void serialize_render_data(uint32_t* render_data, int64_t serialization_context)
{
    uint32_t data_block;
    void** resource_ptr;
    uint32_t* current_ptr;
    uint32_t* target_ptr;
    void* string_ptr;
    int metadata_index;
    uint64_t block_count;
    int64_t context_offset;
    uint32_t stack_buffer[32];
    int stack_index;
    uint32_t* original_data;
    void** resource_list;
    uint64_t resource_flags;
    void* resource_name;
    void* resource_desc;
    uint32_t resource_id;
    uint32_t temp_buffer[64];
    uint64_t checksum;
    uint64_t validation_key;
    
    // 初始化序列化参数
    resource_flags = 0xfffffffffffffffe;
    validation_key = get_serialization_checksum() ^ (uint64_t)stack_buffer;
    
    // 获取元数据索引
    metadata_index = **(int**)(serialization_context + 8);
    *(int**)(serialization_context + 8) = *(int**)(serialization_context + 8) + 1;
    stack_index = metadata_index;
    original_data = render_data;
    
    // 开始序列化过程
    initialize_serialization(&get_serialization_header(), serialization_context, render_data);
    
    // 序列化主要数据块
    data_block = **(uint32_t**)(serialization_context + 8);
    current_ptr = *(uint32_t**)(serialization_context + 8) + 1;
    *(uint32_t**)(serialization_context + 8) = current_ptr;
    
    if (data_block != 0) {
        // 处理第一个数据块
        (**(code**)(*(int64_t*)(render_data + 2) + 0x18))(render_data + 2, current_ptr, data_block);
        *(int64_t*)(serialization_context + 8) = *(int64_t*)(serialization_context + 8) + (uint64_t)data_block;
        current_ptr = *(uint32_t**)(serialization_context + 8);
    }
    
    // 继续序列化其他数据块
    serialize_data_blocks(render_data, serialization_context, &current_ptr);
    
    // 序列化资源列表
    serialize_resource_list(render_data, serialization_context, &current_ptr);
    
    // 序列化元数据
    serialize_metadata_blocks(render_data, serialization_context, &current_ptr, 0x10);
    
    // 处理最终的元数据
    if (metadata_index == 0) {
        render_data[0x1f2] = *current_ptr;
        *(int64_t*)(serialization_context + 8) = *(int64_t*)(serialization_context + 8) + 4;
    } else {
        serialize_final_metadata(&get_final_metadata_header(), serialization_context, render_data + 0x1f2);
    }
    
    // 序列化校验和
    *(uint8_t*)(render_data + 499) = **(uint8_t**)(serialization_context + 8);
    *(int64_t*)(serialization_context + 8) = *(int64_t*)(serialization_context + 8) + 1;
    
    if ((char)render_data[499] != '\0') {
        serialize_extended_data(render_data + 500, serialization_context);
        *(uint8_t*)(render_data + 0x632) = (uint8_t)(*render_data >> 0xc) & 1;
    }
    
    // 完成序列化并验证
    complete_serialization(validation_key ^ (uint64_t)stack_buffer);
}

/**
 * 反序列化渲染数据
 * @param target_data 目标数据指针
 * @param source_data 源数据指针
 * @param format_flags 格式标志
 * @param compression_flags 压缩标志
 * 
 * 从序列化格式恢复渲染数据
 */
void deserialize_render_data(uint32_t* target_data, int64_t* source_data, uint64_t format_flags, uint64_t compression_flags)
{
    uint8_t data_byte;
    uint32_t data_word;
    uint8_t* byte_ptr;
    uint32_t* word_ptr;
    int* int_ptr;
    int64_t block_size;
    int element_count;
    uint32_t array_size;
    uint64_t processed_count;
    int current_index;
    int64_t element_offset;
    uint64_t remaining_count;
    uint64_t chunk_count;
    uint64_t unaff_RDI;
    uint64_t progress_counter;
    uint64_t unaff_R14;
    uint64_t unaff_R15;
    
    // 检查数据缓冲区空间
    word_ptr = (uint32_t*)source_data[1];
    if ((uint64_t)((*source_data - (int64_t)word_ptr) + source_data[2]) < 5) {
        expand_serialization_buffer(source_data, (int64_t)word_ptr + (4 - *source_data));
        word_ptr = (uint32_t*)source_data[1];
    }
    
    *word_ptr = 1;
    source_data[1] = source_data[1] + 4;
    
    // 初始化反序列化过程
    initialize_deserialization(&get_deserialization_header(), *target_data, source_data);
    
    // 反序列化主要数据块
    deserialize_data_blocks(source_data, target_data + 2);
    deserialize_data_blocks(source_data, target_data + 10);
    deserialize_data_blocks(source_data, target_data + 0x12);
    deserialize_data_blocks(source_data, target_data + 0x1a);
    deserialize_data_blocks(source_data, target_data + 0x22);
    deserialize_data_blocks(source_data, target_data + 0x2a);
    deserialize_data_blocks(source_data, target_data + 0x32);
    deserialize_data_blocks(source_data, target_data + 0x3a);
    deserialize_data_blocks(source_data, target_data + 0x42);
    
    // 计算资源列表大小
    block_size = (*(int64_t*)(target_data + 0x4c) - *(int64_t*)(target_data + 0x4a)) / 6 +
                (*(int64_t*)(target_data + 0x4c) - *(int64_t*)(target_data + 0x4a) >> 0x3f);
    
    int_ptr = (int*)source_data[1];
    element_count = (int)(block_size >> 4) - (int)(block_size >> 0x3f);
    
    if ((uint64_t)((*source_data - (int64_t)int_ptr) + source_data[2]) < 5) {
        expand_serialization_buffer(source_data, (int64_t)int_ptr + (4 - *source_data));
        int_ptr = (int*)source_data[1];
    }
    
    *int_ptr = element_count;
    current_index = 0;
    source_data[1] = source_data[1] + 4;
    block_size = (int64_t)element_count;
    
    // 反序列化资源列表
    if (0 < element_count) {
        element_offset = 0;
        do {
            deserialize_resource_entry(source_data, (int64_t)current_index * 0x60 + *(int64_t*)(target_data + 0x4a));
            word_ptr = (uint32_t*)source_data[1];
            data_word = *(uint32_t*)(element_offset + 0x58 + *(int64_t*)(target_data + 0x4a));
            
            if ((uint64_t)((*source_data - (int64_t)word_ptr) + source_data[2]) < 5) {
                expand_serialization_buffer(source_data, (int64_t)word_ptr + (4 - *source_data));
                word_ptr = (uint32_t*)source_data[1];
            }
            
            *word_ptr = data_word;
            source_data[1] = source_data[1] + 4;
            word_ptr = (uint32_t*)source_data[1];
            data_word = *(uint32_t*)(element_offset + 0x5c + *(int64_t*)(target_data + 0x4a));
            
            if ((uint64_t)((*source_data - (int64_t)word_ptr) + source_data[2]) < 5) {
                expand_serialization_buffer(source_data, (int64_t)word_ptr + (4 - *source_data));
                word_ptr = (uint32_t*)source_data[1];
            }
            
            *word_ptr = data_word;
            current_index = current_index + 1;
            source_data[1] = source_data[1] + 4;
            element_offset = element_offset + 0x60;
            block_size = block_size + -1;
        } while (block_size != 0);
    }
    
    // 继续反序列化其他数据块
    deserialize_remaining_data(target_data, source_data);
    
    // 处理字符串数据
    byte_ptr = (uint8_t*)source_data[1];
    data_byte = *(uint8_t*)(target_data + 499);
    
    if ((uint64_t)((*source_data - (int64_t)byte_ptr) + source_data[2]) < 2) {
        expand_serialization_buffer(source_data, byte_ptr + (1 - *source_data));
        byte_ptr = (uint8_t*)source_data[1];
    }
    
    *byte_ptr = data_byte;
    source_data[1] = source_data[1] + 1;
    
    if (*(char*)(target_data + 499) == '\0') {
        return;
    }
    
    // 反序列化扩展数据
    deserialize_extended_data(target_data, source_data, format_flags, compression_flags);
}

// 内部辅助函数声明
static void setup_render_callback(void* callback_address, uint64_t param1, uint64_t param2, void* handler, uint64_t flags);
static void* get_active_render_state_table(void);
static void* get_clean_render_state_table(void);
static void trigger_cleanup_error(void);
static void initialize_rendering_pipeline(void* pipeline);
static void execute_intermediate_initialization(void);
static void* allocate_render_resource_memory(void* pool, uint64_t size, uint64_t align, uint64_t flags, uint64_t mode);
static void* get_global_resource_pool(void);
static void* get_default_resource_table(void);
static void* get_extended_resource_table(void);
static void initialize_resource_subsystem(void* resource);
static void configure_resource_size(void* resource, uint64_t size);
static void copy_resource_data_block(void* dest, void* src);
static void copy_variable_resource_data(void* dest, uint64_t size, uint64_t flags);
static void copy_resource_metadata(void* dest, void* src, uint64_t count);
static void copy_extended_resource_data(void* dest, void* src);
static void* allocate_state_update_memory(void* pool, uint64_t size, uint64_t align, uint64_t flags, uint64_t mode);
static void* get_state_update_handler(void* memory);
static void initialize_state_update(void* state);
static int64_t get_global_state_queue(void);
static int lock_state_queue(void* queue);
static void throw_state_update_error(int error_code);
static void unlock_state_queue(void* queue);
static void** expand_state_queue(void* pool, uint64_t size, uint64_t flags);
static void release_state_queue_memory(void* memory);
static void initialize_serialization(void* header, void* context, void* data);
static void serialize_data_blocks(void* data, void* context, void** current);
static void serialize_resource_list(void* data, void* context, void** current);
static void serialize_metadata_blocks(void* data, void* context, void** current, uint64_t count);
static void serialize_final_metadata(void* header, void* context, void* data);
static void serialize_extended_data(void* data, void* context);
static uint64_t get_serialization_checksum(void);
static void* get_serialization_header(void);
static void* get_final_metadata_header(void);
static void complete_serialization(uint64_t validation_key);
static void initialize_deserialization(void* header, uint32_t data, void* context);
static void deserialize_data_blocks(void* context, void* data);
static void deserialize_resource_entry(void* context, int64_t offset);
static void deserialize_remaining_data(void* data, void* context);
static void deserialize_extended_data(void* data, void* context, uint64_t format, uint64_t compression);
static void expand_serialization_buffer(void* context, int64_t size);
static void* get_deserialization_header(void);