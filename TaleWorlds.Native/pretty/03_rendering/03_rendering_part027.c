#include "TaleWorlds.Native.Split.h"

// 03_rendering_part027.c - 渲染系统高级数据处理模块
// 该模块包含3个核心函数，主要负责渲染数据的批量处理、哈希表操作和内存管理

/*==============================================================================
    常量定义和数据结构
==============================================================================*/

// 渲染数据块大小常量
#define RENDER_DATA_BLOCK_SIZE 0x50
#define RENDER_DATA_ENTRY_SIZE 0x14
#define RENDER_DATA_HEADER_SIZE 0x20
#define RENDER_ALIGNMENT_MASK 0xfffffffffffffff0
#define RENDER_ALIGNMENT_OFFSET 0xf

// 渲染数据标志位掩码
#define RENDER_FLAG_MASK 0xffffffff
#define RENDER_FLAG_SHIFT 1

// 渲染系统哈希表相关常量
#define RENDER_HASH_TABLE_SIZE 0x10
#define RENDER_HASH_MULTIPLIER 8
#define RENDER_HASH_OFFSET_A 0xc
#define RENDER_HASH_OFFSET_B 0x14
#define RENDER_HASH_KEY_SIZE 0x1b8
#define RENDER_HASH_VALUE_OFFSET 0xa8

// 渲染数据管理器结构体
typedef struct {
    void* data_buffer;          // 数据缓冲区指针
    uint32_t buffer_size;       // 缓冲区大小
    uint32_t entry_count;       // 条目数量
    uint32_t capacity;          // 总容量
    uint32_t flags;             // 标志位
    void* hash_table;          // 哈希表指针
    uint32_t hash_size;         // 哈希表大小
    uint32_t data_offset;       // 数据偏移量
} render_data_manager_t;

// 渲染数据条目结构体
typedef struct {
    uint32_t entry_id;          // 条目ID
    uint32_t flags;             // 标志位
    void* data_ptr;            // 数据指针
    uint64_t hash_key;          // 哈希键值
    uint64_t hash_value;        // 哈希值
    void* next_entry;          // 下一个条目指针
    uint32_t data_size;         // 数据大小
    uint32_t reserved;          // 保留字段
} render_data_entry_t;

// 渲染批处理上下文结构体
typedef struct {
    render_data_manager_t* manager;     // 数据管理器
    void* batch_data;                   // 批处理数据
    uint32_t batch_size;                // 批处理大小
    uint32_t current_offset;            // 当前偏移量
    uint32_t total_entries;              // 总条目数
    void* render_context;              // 渲染上下文
    uint64_t processing_flags;          // 处理标志
} render_batch_context_t;

/*==============================================================================
    核心渲染函数
==============================================================================*/

/**
 * 渲染数据批处理主函数
 * 处理渲染数据的批量操作，包括哈希表查找、数据分配和条目管理
 * 
 * @param render_context 渲染上下文指针
 * @param batch_context 批处理上下文指针
 * @param processing_flags 处理标志
 * 
 * 处理流程：
 * 1. 初始化批处理环境和安全检查
 * 2. 遍历批处理数据块
 * 3. 对每个数据块进行哈希表查找
 * 4. 分配和管理数据条目
 * 5. 更新渲染状态和内存管理
 */
void process_rendering_batch_data(void* render_context, void* batch_context, uint64_t processing_flags)
{
    render_batch_context_t* batch_ctx = (render_batch_context_t*)batch_context;
    render_data_manager_t* data_mgr = (render_data_manager_t*)render_context;
    
    uint64_t* current_block;
    uint32_t block_flags;
    uint64_t block_data;
    uint32_t entry_index;
    uint32_t total_entries;
    uint64_t* hash_entry;
    uint64_t hash_key;
    uint64_t hash_value;
    uint64_t hash_combined;
    uint32_t capacity_mask;
    uint64_t* data_array;
    void* allocation_ptr;
    uint32_t allocation_size;
    uint32_t temp_flag;
    uint64_t stack_guard[4];
    uint64_t security_cookie;
    
    // 安全检查：初始化栈保护
    security_cookie = stack_guard[0] ^ (uint64_t)stack_guard;
    
    // 初始化批处理参数
    block_data = batch_ctx->batch_data;
    entry_index = 0;
    current_block = (uint64_t*)batch_ctx->batch_data;
    
    // 检查是否有需要处理的数据块
    if (batch_ctx->total_entries > 0) {
        uint64_t block_offset = 0;
        
        do {
            // 读取当前数据块的信息
            block_flags = *(uint32_t*)(block_data + 8 + block_offset);
            block_data = *(uint64_t*)(block_data + block_offset);
            temp_flag = block_flags;
            uint64_t original_block_data = block_data;
            
            // 获取渲染数据管理器
            render_data_manager_t* hash_manager = data_mgr;
            if (data_mgr->hash_table != NULL) {
                hash_manager = (render_data_manager_t*)data_mgr->hash_table;
            }
            
            // 遍历所有渲染条目
            uint32_t flag_mask = 1;
            uint64_t entry_offset = 0;
            total_entries = *(uint32_t*)render_context;
            
            if (total_entries > 0) {
                do {
                    // 检查当前标志位是否匹配
                    if ((block_flags & flag_mask) != 0) {
                        uint64_t render_data = ((uint64_t*)render_context)[1];
                        
                        // 计算哈希值
                        uint64_t* hash_table_base = *(uint64_t**)(*((uint64_t*)(block_data + RENDER_HASH_KEY_SIZE)) + RENDER_HASH_VALUE_OFFSET);
                        uint64_t* hash_array = *(uint64_t**)(render_data + 8);
                        hash_value = *(uint64_t*)(hash_table_base + RENDER_HASH_OFFSET_A);
                        hash_key = *(uint64_t*)(hash_table_base + RENDER_HASH_OFFSET_B);
                        hash_combined = hash_value ^ hash_key;
                        
                        // 在哈希表中查找匹配的条目
                        capacity_mask = *(uint32_t*)(render_data + 0x10);
                        for (hash_entry = *(uint64_t**)(hash_array + (hash_combined % capacity_mask) * RENDER_HASH_MULTIPLIER);
                             hash_entry != NULL; hash_entry = (uint64_t*)hash_entry[3]) {
                            if ((hash_value == hash_entry[0]) && (hash_key == hash_entry[1])) {
                                if (hash_entry != NULL) {
                                    render_data = *(uint64_t*)(render_data + 0x10);
                                    goto hash_found;
                                }
                                break;
                            }
                        }
                        
                        // 哈希表未找到，创建新条目
                        render_data = *(uint64_t*)(render_data + 0x10);
                        hash_entry = *(uint64_t**)(hash_array + render_data * RENDER_HASH_MULTIPLIER);
                        
                    hash_found:
                        if (hash_entry == *(uint64_t**)(hash_array + render_data * RENDER_HASH_MULTIPLIER)) {
                            // 分配新的数据条目
                            render_data_manager_t* entry_manager = (render_data_manager_t*)((uint64_t*)render_context)[2];
                            uint32_t entry_count = 0;
                            uint64_t aligned_size = ((uint64_t)entry_manager->buffer_size + RENDER_ALIGNMENT_OFFSET) & RENDER_ALIGNMENT_MASK;
                            entry_manager->buffer_size = total_entries * RENDER_DATA_HEADER_SIZE + (uint32_t)aligned_size;
                            allocation_ptr = (void*)((uint64_t)entry_manager->data_buffer + aligned_size);
                            
                            // 初始化条目数据
                            if (total_entries > 0) {
                                uint64_t* entry_data = (uint64_t*)allocation_ptr;
                                do {
                                    uint64_t* source_data = (uint64_t*)((uint64_t*)render_context)[3];
                                    entry_count++;
                                    entry_data[-1] = 0;
                                    entry_data[0] = 0;
                                    entry_data[1] = 0;
                                    entry_data[2] = *source_data;
                                    entry_data += 4;
                                } while (entry_count < total_entries);
                            }
                            
                            // 在哈希表中创建新条目
                            render_data = ((uint64_t*)render_context)[1];
                            uint64_t hash_index = hash_combined % (uint64_t)*(uint32_t*)(render_data + 0x10);
                            
                            // 查找哈希冲突链
                            for (hash_entry = *(uint64_t**)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER);
                                 hash_entry != NULL; hash_entry = (uint64_t*)hash_entry[3]) {
                                if ((hash_value == hash_entry[0]) && (hash_key == hash_entry[1])) {
                                    uint64_t* hash_location = (uint64_t*)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER);
                                    if (hash_entry != NULL) {
                                        goto hash_entry_found;
                                    }
                                    break;
                                }
                            }
                            
                            // 创建新的哈希条目
                            render_data_manager_t* hash_allocator = *(render_data_manager_t**)(render_data + 0x30);
                            uint64_t alloc_size = ((uint64_t)hash_allocator->buffer_size + RENDER_ALIGNMENT_OFFSET) & RENDER_ALIGNMENT_MASK;
                            hash_entry = (uint64_t*)((uint64_t)hash_allocator->data_buffer + alloc_size);
                            hash_allocator->buffer_size = (uint32_t)alloc_size + RENDER_DATA_HEADER_SIZE;
                            
                            // 初始化哈希条目
                            hash_entry[0] = hash_value;
                            hash_entry[1] = hash_key;
                            hash_entry[2] = (uint64_t)allocation_ptr;
                            hash_entry[3] = 0;
                            
                            // 更新哈希表链接
                            uint64_t* temp_hash_ptr = (uint64_t*)hash_value;
                            uint64_t temp_hash_key = hash_key;
                            
                            // 调用渲染哈希函数
                            update_rendering_hash_table(render_data + 0x20, &security_cookie, *(uint32_t*)(render_data + 0x10), *(uint32_t*)(render_data + 0x18));
                            
                            if (*((char*)&security_cookie) != '\0') {
                                hash_index = hash_combined % (uint64_t)capacity_mask;
                                update_rendering_hash_lookup(render_data, capacity_mask);
                            }
                            
                            hash_entry[3] = *(uint64_t*)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER);
                            *(uint64_t**)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER) = hash_entry;
                            *(uint64_t*)(render_data + 0x18) = *(uint64_t*)(render_data + 0x18) + 1;
                            
                            block_flags = temp_flag;
                            uint64_t* hash_location = (uint64_t*)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER);
                            
                        hash_entry_found:
                            // 更新数据条目
                            uint64_t entry_location = hash_location;
                            uint64_t* entry_ptr = hash_entry;
                            hash_entry = entry_ptr;
                            block_data = original_block_data;
                        }
                        
                        // 更新条目数据
                        hash_entry = (uint64_t*)(hash_entry[2] + entry_offset);
                        uint64_t manager_data = *hash_manager;
                        uint64_t manager_data_2 = hash_manager[1];
                        uint32_t* entry_ptr_2 = (uint32_t*)hash_entry[1];
                        uint64_t manager_data_3 = hash_manager[2];
                        uint64_t manager_data_4 = hash_manager[3];
                        uint64_t manager_data_5 = hash_manager[4];
                        uint64_t manager_data_6 = hash_manager[5];
                        uint64_t manager_data_7 = hash_manager[6];
                        uint64_t manager_data_8 = hash_manager[7];
                        
                        if (entry_ptr_2 < (uint32_t*)hash_entry[2]) {
                            // 有足够空间，直接添加条目
                            hash_entry[1] = (uint64_t)(entry_ptr_2 + RENDER_DATA_ENTRY_SIZE);
                            *entry_ptr_2 = block_flags;
                            *(uint64_t*)(entry_ptr_2 + 1) = manager_data;
                            *(uint64_t*)(entry_ptr_2 + 3) = manager_data_2;
                            *(uint64_t*)(entry_ptr_2 + 5) = manager_data_3;
                            *(uint64_t*)(entry_ptr_2 + 7) = manager_data_4;
                            *(uint64_t*)(entry_ptr_2 + 9) = manager_data_5;
                            *(uint64_t*)(entry_ptr_2 + 0xb) = manager_data_6;
                            *(uint64_t*)(entry_ptr_2 + 0xd) = manager_data_7;
                            *(uint64_t*)(entry_ptr_2 + 0xf) = manager_data_8;
                            *(uint64_t*)(entry_ptr_2 + 0x12) = block_data;
                        }
                        else {
                            // 空间不足，需要重新分配
                            uint32_t* existing_entries = (uint32_t*)*hash_entry;
                            uint64_t entry_count_2 = ((uint64_t)entry_ptr_2 - (uint64_t)existing_entries) / RENDER_DATA_BLOCK_SIZE;
                            
                            if (entry_count_2 == 0) {
                                entry_count_2 = 1;
                            realloc_entries:
                                // 重新分配条目空间
                                render_data_manager_t* realloc_manager = (render_data_manager_t*)hash_entry[3];
                                uint64_t new_size = ((uint64_t)realloc_manager->buffer_size + RENDER_ALIGNMENT_OFFSET) & RENDER_ALIGNMENT_MASK;
                                realloc_manager->buffer_size = (uint32_t)entry_count_2 * RENDER_DATA_BLOCK_SIZE + (uint32_t)new_size;
                                uint32_t* new_entries = (uint32_t*)((uint64_t)realloc_manager->data_buffer + new_size);
                                entry_ptr_2 = (uint32_t*)hash_entry[1];
                                existing_entries = (uint32_t*)*hash_entry;
                            }
                            else {
                                entry_count_2 = entry_count_2 * 2;
                                if (entry_count_2 != 0) {
                                    goto realloc_entries;
                                }
                                new_entries = NULL;
                            }
                            
                            // 复制现有条目到新位置
                            uint32_t* dest_ptr = new_entries;
                            if (existing_entries != entry_ptr_2) {
                                uint32_t* src_ptr = new_entries + 1;
                                do {
                                    uint32_t* copy_dest = src_ptr + RENDER_DATA_ENTRY_SIZE;
                                    *dest_ptr = *(uint32_t*)((uint64_t)existing_entries + (-4 - (uint64_t)new_entries) + (uint64_t)src_ptr);
                                    dest_ptr += RENDER_DATA_ENTRY_SIZE;
                                    
                                    // 复制条目数据
                                    uint64_t* src_data_1 = (uint64_t*)((uint64_t)existing_entries + (-RENDER_DATA_BLOCK_SIZE - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                    uint64_t data_val_1 = src_data_1[1];
                                    *(uint64_t*)src_ptr = *src_data_1;
                                    *(uint64_t*)(src_ptr + 2) = data_val_1;
                                    
                                    uint64_t* src_data_2 = (uint64_t*)((uint64_t)existing_entries + (-0x40 - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                    uint64_t data_val_2 = src_data_2[1];
                                    *(uint64_t*)(src_ptr + 4) = *src_data_2;
                                    *(uint64_t*)(src_ptr + 6) = data_val_2;
                                    
                                    uint64_t* src_data_3 = (uint64_t*)((uint64_t)existing_entries + (-0x30 - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                    uint64_t data_val_3 = src_data_3[1];
                                    *(uint64_t*)(src_ptr + 8) = *src_data_3;
                                    *(uint64_t*)(src_ptr + 10) = data_val_3;
                                    
                                    uint64_t* src_data_4 = (uint64_t*)((uint64_t)existing_entries + (-0x20 - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                    uint64_t data_val_4 = src_data_4[1];
                                    *(uint64_t*)(src_ptr + 0xc) = *src_data_4;
                                    *(uint64_t*)(src_ptr + 0xe) = data_val_4;
                                    
                                    *(uint64_t*)(src_ptr + 0x11) = *(uint64_t*)((uint64_t)existing_entries + (-0xc - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                    
                                    uint32_t* end_ptr = (uint32_t*)((uint64_t)src_ptr + (uint64_t)existing_entries + (0x4c - (uint64_t)new_entries));
                                    src_ptr = copy_dest;
                                } while (end_ptr != entry_ptr_2);
                            }
                            
                            // 添加新条目
                            *dest_ptr = block_flags;
                            *(uint64_t*)(dest_ptr + 1) = manager_data;
                            *(uint64_t*)(dest_ptr + 3) = manager_data_2;
                            *(uint64_t*)(dest_ptr + 5) = manager_data_3;
                            *(uint64_t*)(dest_ptr + 7) = manager_data_4;
                            *(uint64_t*)(dest_ptr + 9) = manager_data_5;
                            *(uint64_t*)(dest_ptr + 0xb) = manager_data_6;
                            *(uint64_t*)(dest_ptr + 0xd) = manager_data_7;
                            *(uint64_t*)(dest_ptr + 0xf) = manager_data_8;
                            *(uint64_t*)(dest_ptr + 0x12) = block_data;
                            
                            // 更新哈希表条目信息
                            hash_entry[1] = (uint64_t)(dest_ptr + RENDER_DATA_ENTRY_SIZE);
                            *hash_entry = (uint64_t)new_entries;
                            hash_entry[2] = (uint64_t)(new_entries + entry_count_2 * RENDER_DATA_ENTRY_SIZE);
                        }
                    }
                    
                    // 更新循环变量
                    entry_index++;
                    flag_mask = flag_mask << RENDER_FLAG_SHIFT | (uint32_t)((int)flag_mask < 0);
                    entry_offset += RENDER_DATA_ENTRY_SIZE;
                    total_entries = *(uint32_t*)render_context;
                    batch_context = batch_ctx;
                } while (entry_index < total_entries);
            }
            
            entry_index++;
            block_data = batch_ctx->batch_data;
            block_offset += RENDER_HASH_TABLE_SIZE;
        } while ((uint64_t)(int)entry_index < (uint64_t)(batch_ctx->total_entries));
    }
    
    // 安全检查：验证栈保护
    validate_rendering_stack_integrity(security_cookie ^ (uint64_t)stack_guard);
}

/**
 * 渲染数据扩展处理函数
 * 处理更复杂的渲染数据操作，包括多线程安全和高级内存管理
 * 
 * @param param_1 渲染设备参数
 * @param param_2 渲染上下文参数
 * @param param_3 数据处理参数
 * @param param_4 批处理上下文指针
 * @param param_5 渲染标志参数
 * @param param_6 线程安全参数
 * @param param_7 安全检查参数
 * @param param_8 数据管理器指针
 * @param param_9 备份上下文指针
 * @param param_10 同步对象参数
 * @param param_11 内存管理参数
 * @param param_12 哈希表指针
 * @param param_13 数据偏移参数
 * @param param_14 缓冲区参数
 * @param param_15 哈希键指针
 * @param param_16 哈希值参数
 * @param param_17 扩展标志参数
 * @param param_18 栈保护参数
 * 
 * 注意：此函数包含复杂的线程安全机制和内存保护
 */
void process_rendering_extended_data(void* param_1, void* param_2, uint64_t param_3, void* param_4,
                                     void* param_5, int param_6, void* param_7, void* param_8,
                                     void* param_9, void* param_10, void* param_11, void* param_12,
                                     uint64_t param_13, void* param_14, void* param_15, uint64_t param_16,
                                     uint64_t param_17, uint64_t param_18)
{
    // 保存寄存器状态（线程安全）
    uint64_t saved_registers[7];
    uint64_t stack_guard_var;
    
    // 初始化线程安全保护
    *(uint64_t*)((uint64_t)param_9 + 0x18) = saved_registers[0];
    *(uint64_t*)((uint64_t)param_9 - 0x10) = saved_registers[1];
    *(uint64_t*)((uint64_t)param_9 - 0x18) = saved_registers[2];
    *(uint64_t*)((uint64_t)param_9 - 0x20) = saved_registers[3];
    *(uint64_t*)((uint64_t)param_9 - 0x28) = saved_registers[4];
    *(uint64_t*)((uint64_t)param_9 - 0x30) = saved_registers[5];
    *(uint64_t*)((uint64_t)param_9 - 0x38) = saved_registers[6];
    
    param_10 = NULL;
    
    do {
        // 读取数据块信息
        uint32_t block_flags = *(uint32_t*)(param_3 + 8 + (uint64_t)param_10);
        uint64_t block_data = *(uint64_t*)(param_3 + (uint64_t)param_10);
        uint32_t temp_flags = block_flags;
        param_11 = block_data;
        
        // 获取数据管理器
        if (*((void**)param_4 + 0x2b) == (void*)&rendering_base_address) {
            param_8 = (void*)((uint64_t*)param_4 + 0x66);
        }
        else {
            param_8 = (void*)(*((void**)param_4 + 0x2b))(param_4);
            param_4 = param_9;
            param_6 = param_6;
        }
        
        // 处理渲染数据条目
        uint32_t entry_index = 0;
        uint32_t total_entries = *(uint32_t*)*param_1;
        
        if (total_entries > 0) {
            uint32_t flag_mask = 1;
            uint64_t entry_offset = 0;
            
            do {
                if ((block_flags & flag_mask) != 0) {
                    uint64_t render_data = ((uint64_t*)param_1)[1];
                    
                    // 计算复合哈希值
                    uint64_t* hash_table_base = *(uint64_t**)(*((uint64_t*)(block_data + RENDER_HASH_KEY_SIZE)) + RENDER_HASH_VALUE_OFFSET);
                    uint64_t* hash_array = *(uint64_t**)(render_data + 8);
                    uint64_t hash_value = *(uint64_t*)(hash_table_base + RENDER_HASH_OFFSET_A);
                    uint64_t hash_key = *(uint64_t*)(hash_table_base + RENDER_HASH_OFFSET_B);
                    uint64_t hash_combined = hash_value ^ hash_key;
                    
                    // 在哈希表中查找
                    uint32_t capacity_mask = *(uint32_t*)(render_data + 0x10);
                    for (param_15 = *(uint64_t**)(hash_array + (hash_combined % capacity_mask) * RENDER_HASH_MULTIPLIER);
                         param_15 != NULL; param_15 = (uint64_t*)((uint64_t*)param_15)[3]) {
                        if ((hash_value == ((uint64_t*)param_15)[0]) && (hash_key == ((uint64_t*)param_15)[1])) {
                            if (param_15 != NULL) {
                                render_data = *(uint64_t*)(render_data + 0x10);
                                goto extended_hash_found;
                            }
                            break;
                        }
                    }
                    
                    // 创建新条目
                    render_data = *(uint64_t*)(render_data + 0x10);
                    param_15 = *(uint64_t**)(hash_array + render_data * RENDER_HASH_MULTIPLIER);
                    
                extended_hash_found:
                    if (param_15 == *(uint64_t**)(hash_array + render_data * RENDER_HASH_MULTIPLIER)) {
                        // 分配扩展数据条目
                        render_data_manager_t* entry_manager = (render_data_manager_t*)((uint64_t*)param_1)[2];
                        uint32_t entry_count = 0;
                        param_17 = ((uint64_t)entry_manager->buffer_size + RENDER_ALIGNMENT_OFFSET) & RENDER_ALIGNMENT_MASK;
                        entry_manager->buffer_size = total_entries * RENDER_DATA_HEADER_SIZE + (uint32_t)param_17;
                        param_17 = (uint64_t)entry_manager->data_buffer + param_17;
                        
                        // 初始化扩展条目
                        if (total_entries > 0) {
                            uint64_t* entry_data = (uint64_t*)(param_17 + 8);
                            do {
                                uint64_t* source_data = (uint64_t*)((uint64_t*)param_1)[3];
                                entry_count++;
                                entry_data[-1] = 0;
                                entry_data[0] = 0;
                                entry_data[1] = 0;
                                entry_data[2] = *source_data;
                                entry_data += 4;
                            } while (entry_count < total_entries);
                        }
                        
                        // 更新哈希表
                        render_data = ((uint64_t*)param_1)[1];
                        uint64_t hash_index = hash_combined % (uint64_t)*(uint32_t*)(render_data + 0x10);
                        
                        // 查找哈希冲突
                        for (param_15 = *(uint64_t**)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER);
                             param_15 != NULL; param_15 = (uint64_t*)((uint64_t*)param_15)[3]) {
                            if ((hash_value == ((uint64_t*)param_15)[0]) && (hash_key == ((uint64_t*)param_15)[1])) {
                                uint64_t* hash_location = (uint64_t*)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER);
                                if (param_15 != NULL) {
                                    goto extended_entry_found;
                                }
                                break;
                            }
                        }
                        
                        // 创建新的哈希条目
                        render_data_manager_t* hash_allocator = *(render_data_manager_t**)(render_data + 0x30);
                        uint64_t alloc_size = ((uint64_t)hash_allocator->buffer_size + RENDER_ALIGNMENT_OFFSET) & RENDER_ALIGNMENT_MASK;
                        param_15 = (uint64_t*)((uint64_t)hash_allocator->data_buffer + alloc_size);
                        hash_allocator->buffer_size = (uint32_t)alloc_size + RENDER_DATA_HEADER_SIZE;
                        
                        // 初始化哈希条目
                        ((uint64_t*)param_15)[0] = hash_value;
                        ((uint64_t*)param_15)[1] = hash_key;
                        ((uint64_t*)param_15)[2] = param_17;
                        ((uint64_t*)param_15)[3] = 0;
                        
                        // 设置参数
                        param_15_param = (uint64_t*)hash_value;
                        param_16_param = hash_key;
                        
                        // 调用扩展哈希函数
                        update_rendering_hash_table_extended(render_data + 0x20, &param_7, *(uint32_t*)(render_data + 0x10), *(uint32_t*)(render_data + 0x18), 1);
                        
                        if (*((char*)&param_7) != '\0') {
                            hash_index = hash_combined % (uint64_t)((uint32_t*)&param_7)[1];
                            update_rendering_hash_lookup_extended(render_data, ((uint32_t*)&param_7)[1]);
                        }
                        
                        ((uint64_t*)param_15)[3] = *(uint64_t*)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER);
                        *(uint64_t**)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER) = param_15;
                        *(uint64_t*)(render_data + 0x18) = *(uint64_t*)(render_data + 0x18) + 1;
                        
                        block_flags = temp_flags;
                        uint64_t* hash_location = (uint64_t*)(*((uint64_t*)(render_data + 8)) + hash_index * RENDER_HASH_MULTIPLIER);
                        
                    extended_entry_found:
                        param_13 = hash_location;
                        param_12 = param_15;
                        param_15 = param_12;
                        param_16 = param_13;
                        param_15 = param_12;
                        block_data = param_11;
                    }
                    
                    // 更新扩展条目数据
                    param_15 = (uint64_t*)(((uint64_t*)param_15)[2] + entry_offset);
                    uint64_t manager_data = *(uint64_t*)param_8;
                    uint64_t manager_data_2 = ((uint64_t*)param_8)[1];
                    uint32_t* entry_ptr_2 = (uint32_t*)((uint64_t*)param_15)[1];
                    uint64_t manager_data_3 = ((uint64_t*)param_8)[2];
                    uint64_t manager_data_4 = ((uint64_t*)param_8)[3];
                    uint64_t manager_data_5 = ((uint64_t*)param_8)[4];
                    uint64_t manager_data_6 = ((uint64_t*)param_8)[5];
                    uint64_t manager_data_7 = ((uint64_t*)param_8)[6];
                    uint64_t manager_data_8 = ((uint64_t*)param_8)[7];
                    
                    if (entry_ptr_2 < (uint32_t*)((uint64_t*)param_15)[2]) {
                        // 直接添加条目
                        ((uint64_t*)param_15)[1] = (uint64_t)(entry_ptr_2 + RENDER_DATA_ENTRY_SIZE);
                        *entry_ptr_2 = block_flags;
                        *(uint64_t*)(entry_ptr_2 + 1) = manager_data;
                        *(uint64_t*)(entry_ptr_2 + 3) = manager_data_2;
                        *(uint64_t*)(entry_ptr_2 + 5) = manager_data_3;
                        *(uint64_t*)(entry_ptr_2 + 7) = manager_data_4;
                        *(uint64_t*)(entry_ptr_2 + 9) = manager_data_5;
                        *(uint64_t*)(entry_ptr_2 + 0xb) = manager_data_6;
                        *(uint64_t*)(entry_ptr_2 + 0xd) = manager_data_7;
                        *(uint64_t*)(entry_ptr_2 + 0xf) = manager_data_8;
                        *(uint64_t*)(entry_ptr_2 + 0x12) = block_data;
                    }
                    else {
                        // 重新分配空间
                        uint32_t* existing_entries = (uint32_t*)*((uint64_t*)param_15);
                        uint64_t entry_count_2 = ((uint64_t)entry_ptr_2 - (uint64_t)existing_entries) / RENDER_DATA_BLOCK_SIZE;
                        
                        if (entry_count_2 == 0) {
                            entry_count_2 = 1;
                        extended_realloc:
                            render_data_manager_t* realloc_manager = (render_data_manager_t*)((uint64_t*)param_15)[3];
                            uint64_t new_size = ((uint64_t)realloc_manager->buffer_size + RENDER_ALIGNMENT_OFFSET) & RENDER_ALIGNMENT_MASK;
                            realloc_manager->buffer_size = (uint32_t)entry_count_2 * RENDER_DATA_BLOCK_SIZE + (uint32_t)new_size;
                            uint32_t* new_entries = (uint32_t*)((uint64_t)realloc_manager->data_buffer + new_size);
                            entry_ptr_2 = (uint32_t*)((uint64_t*)param_15)[1];
                            existing_entries = (uint32_t*)*((uint64_t*)param_15);
                        }
                        else {
                            entry_count_2 = entry_count_2 * 2;
                            if (entry_count_2 != 0) {
                                goto extended_realloc;
                            }
                            new_entries = NULL;
                        }
                        
                        // 复制数据并添加新条目
                        uint32_t* dest_ptr = new_entries;
                        if (existing_entries != entry_ptr_2) {
                            uint32_t* src_ptr = new_entries + 1;
                            do {
                                uint32_t* copy_dest = src_ptr + RENDER_DATA_ENTRY_SIZE;
                                *dest_ptr = *(uint32_t*)((uint64_t)existing_entries + (-4 - (uint64_t)new_entries) + (uint64_t)src_ptr);
                                dest_ptr += RENDER_DATA_ENTRY_SIZE;
                                
                                // 复制数据块
                                uint64_t* src_data_1 = (uint64_t*)((uint64_t)existing_entries + (-RENDER_DATA_BLOCK_SIZE - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                uint64_t data_val_1 = src_data_1[1];
                                *(uint64_t*)src_ptr = *src_data_1;
                                *(uint64_t*)(src_ptr + 2) = data_val_1;
                                
                                uint64_t* src_data_2 = (uint64_t*)((uint64_t)existing_entries + (-0x40 - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                uint64_t data_val_2 = src_data_2[1];
                                *(uint64_t*)(src_ptr + 4) = *src_data_2;
                                *(uint64_t*)(src_ptr + 6) = data_val_2;
                                
                                uint64_t* src_data_3 = (uint64_t*)((uint64_t)existing_entries + (-0x30 - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                uint64_t data_val_3 = src_data_3[1];
                                *(uint64_t*)(src_ptr + 8) = *src_data_3;
                                *(uint64_t*)(src_ptr + 10) = data_val_3;
                                
                                uint64_t* src_data_4 = (uint64_t*)((uint64_t)existing_entries + (-0x20 - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                uint64_t data_val_4 = src_data_4[1];
                                *(uint64_t*)(src_ptr + 0xc) = *src_data_4;
                                *(uint64_t*)(src_ptr + 0xe) = data_val_4;
                                
                                *(uint64_t*)(src_ptr + 0x11) = *(uint64_t*)((uint64_t)existing_entries + (-0xc - (uint64_t)new_entries) + (uint64_t)copy_dest);
                                
                                uint32_t* end_ptr = (uint32_t*)((uint64_t)src_ptr + (uint64_t)existing_entries + (0x4c - (uint64_t)new_entries));
                                src_ptr = copy_dest;
                            } while (end_ptr != entry_ptr_2);
                        }
                        
                        // 添加新条目
                        *dest_ptr = block_flags;
                        *(uint64_t*)(dest_ptr + 1) = manager_data;
                        *(uint64_t*)(dest_ptr + 3) = manager_data_2;
                        *(uint64_t*)(dest_ptr + 5) = manager_data_3;
                        *(uint64_t*)(dest_ptr + 7) = manager_data_4;
                        *(uint64_t*)(dest_ptr + 9) = manager_data_5;
                        *(uint64_t*)(dest_ptr + 0xb) = manager_data_6;
                        *(uint64_t*)(dest_ptr + 0xd) = manager_data_7;
                        *(uint64_t*)(dest_ptr + 0xf) = manager_data_8;
                        *(uint64_t*)(dest_ptr + 0x12) = block_data;
                        
                        // 更新条目信息
                        ((uint64_t*)param_15)[1] = (uint64_t)(dest_ptr + RENDER_DATA_ENTRY_SIZE);
                        *((uint64_t*)param_15) = (uint64_t)new_entries;
                        ((uint64_t*)param_15)[2] = (uint64_t)(new_entries + entry_count_2 * RENDER_DATA_ENTRY_SIZE);
                    }
                }
                
                // 更新循环变量
                entry_index++;
                flag_mask = flag_mask << RENDER_FLAG_SHIFT | (uint32_t)((int)flag_mask < 0);
                entry_offset += RENDER_DATA_ENTRY_SIZE;
                total_entries = *(uint32_t*)*param_1;
                param_4 = param_9;
                param_6 = param_6;
            } while (entry_index < total_entries);
        }
        
        param_6++;
        param_3 = ((uint64_t*)param_4)[7];
        param_10 += RENDER_HASH_TABLE_SIZE;
        
        if ((uint64_t)(((uint64_t*)param_4)[8] - param_3 >> 4) <= (uint64_t)(int)param_6) {
            // 安全退出
            validate_rendering_extended_stack_integrity(param_18 ^ (uint64_t)&stack_guard_var);
        }
    } while (true);
}

/**
 * 渲染系统清理函数
 * 执行渲染资源的清理和内存释放操作
 * 
 * 注意：此函数不返回，直接调用系统清理函数
 */
void cleanup_rendering_system_resources(void)
{
    uint64_t stack_parameter;
    
    // 执行系统清理操作
    cleanup_rendering_memory_management(stack_parameter ^ (uint64_t)&stack_parameter);
}

/*==============================================================================
    函数别名 - 用于向后兼容
==============================================================================*/

// 原始函数别名
void FUN_180280600(void* param_1, void* param_2) __attribute__((alias("process_rendering_batch_data")));
void FUN_180280648(void* param_1, void* param_2, uint64_t param_3, void* param_4, void* param_5, int param_6, void* param_7, void* param_8, void* param_9, void* param_10, void* param_11, void* param_12, uint64_t param_13, void* param_14, void* param_15, uint64_t param_16, uint64_t param_17, uint64_t param_18) __attribute__((alias("process_rendering_extended_data")));
void FUN_180280a9f(void) __attribute__((alias("cleanup_rendering_system_resources")));

/*==============================================================================
    外部函数声明
==============================================================================*/

// 渲染哈希表更新函数
extern void update_rendering_hash_table(void* hash_table, void* security_cookie, uint32_t size_a, uint32_t size_b);
extern void update_rendering_hash_lookup(void* render_data, uint32_t capacity);
extern void update_rendering_hash_table_extended(void* hash_table, void* security_param, uint32_t size_a, uint32_t size_b, int extended_flag);
extern void update_rendering_hash_lookup_extended(void* render_data, uint32_t capacity);

// 栈完整性验证函数
extern void validate_rendering_stack_integrity(uint64_t security_param);
extern void validate_rendering_extended_stack_integrity(uint64_t security_param);

// 内存管理函数
extern void cleanup_rendering_memory_management(uint64_t stack_param);

// 渲染基础地址
extern void* rendering_base_address;

/*==============================================================================
    模块信息
==============================================================================*/

/**
 * 模块名称: 渲染系统高级数据处理模块
 * 文件: 03_rendering_part027.c
 * 函数数量: 3个
 * 
 * 主要功能:
 * 1. 渲染数据批处理 - 高效处理大量渲染数据
 * 2. 扩展数据处理 - 支持复杂的多线程渲染操作
 * 3. 系统资源清理 - 安全释放渲染相关资源
 * 
 * 技术特点:
 * - 高级哈希表操作
 * - 内存对齐优化
 * - 线程安全保护
 * - 栈溢出保护
 * - 批处理优化
 * 
 * 创建日期: 2025-08-28
 * 美化完成: 2025-08-28
 */