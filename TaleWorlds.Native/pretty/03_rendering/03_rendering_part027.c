#include "TaleWorlds.Native.Split.h"

// 03_rendering_part027.c - 渲染系统批处理和材质管理模块
// 包含3个核心函数：渲染批处理、材质数据管理和系统初始化

/* 渲染系统常量定义 */
#define RENDER_BATCH_SIZE 0x50
#define MATERIAL_HASH_SIZE 0x20
#define RENDER_FLAG_MASK 0xffffffff
#define MATERIAL_ALIGNMENT 0xf
#define MATERIAL_ALIGN_MASK 0xfffffffffffffff0

/* 材质数据结构 */
typedef struct {
    ulonglong material_id;
    ulonglong texture_hash;
    ulonglong data_ptr;
    ulonglong next_ptr;
} MaterialEntry;

/* 渲染批处理数据结构 */
typedef struct {
    uint* batch_start;
    uint* batch_end;
    uint* batch_capacity;
    ulonglong* material_table;
    uint flags;
    uint batch_count;
} RenderBatch;

/* 渲染上下文结构 */
typedef struct {
    void* render_context;
    longlong* material_cache;
    uint material_count;
    uint batch_count;
    void* texture_manager;
} RenderContext;

/**
 * 处理渲染批处理和材质映射
 * @param render_context 渲染上下文指针
 * @param batch_data 批处理数据数组
 */
void process_render_batches(void* render_context, longlong* batch_data)
{
    MaterialEntry* material_entry;
    longlong material_offset;
    longlong batch_offset;
    longlong* context_data;
    void* texture_ptr;
    ulonglong texture_hash1;
    ulonglong texture_hash2;
    ulonglong combined_hash;
    longlong material_data;
    longlong texture_data;
    longlong cache_data;
    longlong batch_start;
    longlong batch_end;
    longlong batch_size;
    ulonglong material_key;
    uint batch_flags;
    uint material_index;
    uint batch_index;
    int material_count;
    longlong data_offset;
    uint* batch_ptr;
    ulonglong* hash_table_ptr;
    int texture_count;
    uint* material_array;
    uint* source_ptr;
    uint* dest_ptr;
    int entry_count;
    longlong loop_counter;
    uint flag_mask;
    ulonglong hash_result;
    
    // 初始化栈保护
    char stack_guard[32];
    uint texture_id;
    int batch_counter;
    uint material_flags;
    char texture_name[4];
    uint hash_size;
    longlong* batch_info;
    longlong* material_info;
    longlong batch_base;
    longlong texture_offset;
    ulonglong* material_cache;
    longlong cache_offset;
    ulonglong cache_key;
    ulonglong cache_value;
    ulonglong cache_size;
    
    // 计算栈校验和
    cache_size = _DAT_180bf00a8 ^ (ulonglong)stack_guard;
    material_data = batch_data[7];
    batch_counter = 0;
    material_info = batch_data;
    
    // 处理每个批处理块
    if (batch_data[8] - material_data >> 4 != 0) {
        batch_base = 0;
        do {
            // 获取批处理数据
            batch_flags = *(uint *)(material_data + 8 + batch_base);
            material_data = *(longlong *)(material_data + batch_base);
            material_flags = batch_flags;
            texture_offset = material_data;
            
            // 获取材质缓存指针
            if (*(code **)(*batch_data + 0x158) == (code *)&UNK_18027d980) {
                batch_info = batch_data + 0x66;
            } else {
                batch_info = (longlong *)(**(code **)(*batch_data + 0x158))(batch_data);
                batch_data = material_info;
            }
            
            // 遍历材质索引
            entry_count = 0;
            material_count = *(int *)*render_context;
            if (0 < material_count) {
                flag_mask = 1;
                loop_counter = 0;
                do {
                    // 检查材质标志
                    if ((batch_flags & flag_mask) != 0) {
                        texture_data = render_context[1];
                        material_offset = *(longlong *)(*(longlong *)(material_data + 0x1b8) + 0xa8);
                        cache_data = *(longlong *)(texture_data + 8);
                        texture_hash1 = *(ulonglong *)(material_offset + 0xc);
                        texture_hash2 = *(ulonglong *)(material_offset + 0x14);
                        combined_hash = texture_hash1 ^ texture_hash2;
                        
                        // 在哈希表中查找材质
                        for (hash_table_ptr = *(ulonglong **)(cache_data + (combined_hash % (ulonglong)*(uint *)(texture_data + 0x10)) * 8);
                             hash_table_ptr != (ulonglong *)0x0; hash_table_ptr = (ulonglong *)hash_table_ptr[3]) {
                            if ((texture_hash1 == *hash_table_ptr) && (texture_hash2 == hash_table_ptr[1])) {
                                if (hash_table_ptr != (ulonglong *)0x0) {
                                    texture_data = *(longlong *)(texture_data + 0x10);
                                    goto material_found;
                                }
                                break;
                            }
                        }
                        
                        // 创建新材质条目
                        texture_data = *(longlong *)(texture_data + 0x10);
                        hash_table_ptr = *(ulonglong **)(cache_data + texture_data * 8);
material_found:
                        if (hash_table_ptr == *(ulonglong **)(cache_data + texture_data * 8)) {
                            context_data = (longlong *)render_context[2];
                            entry_count = 0;
                            cache_size = (longlong)((int)context_data[2] + MATERIAL_ALIGNMENT) & MATERIAL_ALIGN_MASK;
                            *(int *)(context_data + 2) = material_count * MATERIAL_HASH_SIZE + (int)cache_size;
                            cache_size = *context_data + cache_size;
                            
                            // 初始化材质数据
                            if (0 < *(int *)*render_context) {
                                texture_ptr = (void *)(cache_size + 8);
                                do {
                                    texture_ptr = (void *)render_context[3];
                                    entry_count = entry_count + 1;
                                    ((uint*)texture_ptr)[-1] = 0;
                                    *(uint*)texture_ptr = 0;
                                    ((uint*)texture_ptr)[1] = 0;
                                    ((uint*)texture_ptr)[2] = *(uint*)texture_ptr;
                                    texture_ptr = (void*)((uint*)texture_ptr + 4);
                                } while (entry_count < *(int *)*render_context);
                            }
                            
                            // 更新材质缓存
                            material_data = render_context[1];
                            hash_result = combined_hash % (ulonglong)*(uint *)(material_data + 0x10);
                            for (hash_table_ptr = *(ulonglong **)(*(longlong *)(material_data + 8) + hash_result * 8);
                                 hash_table_ptr != (ulonglong *)0x0; hash_table_ptr = (ulonglong *)hash_table_ptr[3]) {
                                if ((texture_hash1 == *hash_table_ptr) && (texture_hash2 == hash_table_ptr[1])) {
                                    texture_data = *(longlong *)(material_data + 8) + hash_result * 8;
                                    if (hash_table_ptr != (ulonglong *)0x0) goto cache_updated;
                                    break;
                                }
                            }
                            
                            // 创建新缓存条目
                            context_data = *(longlong **)(material_data + 0x30);
                            texture_id = 1;
                            cache_value = (longlong)(int)context_data[2] + MATERIAL_ALIGNMENT & MATERIAL_ALIGN_MASK;
                            hash_table_ptr = (ulonglong *)(*context_data + cache_value);
                            *(int *)(context_data + 2) = (int)cache_value + MATERIAL_HASH_SIZE;
                            *hash_table_ptr = texture_hash1;
                            hash_table_ptr[1] = texture_hash2;
                            hash_table_ptr[2] = cache_size;
                            hash_table_ptr[3] = 0;
                            material_cache = (ulonglong *)texture_hash1;
                            cache_key = texture_hash2;
                            
                            // 生成材质名称
                            FUN_18066c220(material_data + 0x20, texture_name, *(undefined4 *)(material_data + 0x10),
                                          *(undefined4 *)(material_data + 0x18));
                            if (texture_name[0] != '\0') {
                                hash_result = combined_hash % (ulonglong)hash_size;
                                FUN_180285760(material_data, hash_size);
                            }
                            
                            // 更新哈希表链接
                            hash_table_ptr[3] = *(ulonglong *)(*(longlong *)(material_data + 8) + hash_result * 8);
                            *(ulonglong **)(*(longlong *)(material_data + 8) + hash_result * 8) = hash_table_ptr;
                            *(longlong *)(material_data + 0x18) = *(longlong *)(material_data + 0x18) + 1;
                            batch_flags = material_flags;
                            texture_data = *(longlong *)(material_data + 8) + hash_result * 8;
cache_updated:
                            cache_offset = texture_data;
                            material_cache = hash_table_ptr;
                            cache_key = cache_offset;
                            hash_table_ptr = material_cache;
                            material_data = texture_offset;
                        }
                        
                        // 处理批处理数据
                        hash_table_ptr = (ulonglong *)(hash_table_ptr[2] + loop_counter);
                        texture_data = *batch_info;
                        material_offset = batch_info[1];
                        material_array = (uint *)hash_table_ptr[1];
                        cache_data = batch_info[2];
                        batch_start = batch_info[3];
                        batch_end = batch_info[4];
                        batch_size = batch_info[5];
                        data_offset = batch_info[6];
                        cache_offset = batch_info[7];
                        
                        // 检查批处理容量
                        if (material_array < (uint *)hash_table_ptr[2]) {
                            hash_table_ptr[1] = (ulonglong)(material_array + 0x14);
                            *material_array = batch_flags;
                            *(longlong *)(material_array + 1) = texture_data;
                            *(longlong *)(material_array + 3) = material_offset;
                            *(longlong *)(material_array + 5) = cache_data;
                            *(longlong *)(material_array + 7) = batch_start;
                            *(longlong *)(material_array + 9) = batch_end;
                            *(longlong *)(material_array + 0xb) = batch_size;
                            *(longlong *)(material_array + 0xd) = data_offset;
                            *(longlong *)(material_array + 0xf) = cache_offset;
                            *(longlong *)(material_array + 0x12) = material_data;
                        } else {
                            // 扩展批处理容量
                            source_ptr = (uint *)*hash_table_ptr;
                            texture_offset = ((longlong)material_array - (longlong)source_ptr) / RENDER_BATCH_SIZE;
                            if (texture_offset == 0) {
                                texture_offset = 1;
resize_batch:
                                context_data = (longlong *)hash_table_ptr[3];
                                texture_hash1 = (longlong)((int)context_data[2] + MATERIAL_ALIGNMENT) & MATERIAL_ALIGN_MASK;
                                *(int *)(context_data + 2) = (int)texture_offset * RENDER_BATCH_SIZE + (int)texture_hash1;
                                dest_ptr = (uint *)(*context_data + texture_hash1);
                                material_array = (uint *)hash_table_ptr[1];
                                source_ptr = (uint *)*hash_table_ptr;
                            } else {
                                texture_offset = texture_offset * 2;
                                if (texture_offset != 0) goto resize_batch;
                                dest_ptr = (uint *)0x0;
                            }
                            
                            // 复制批处理数据
                            batch_ptr = dest_ptr;
                            if (source_ptr != material_array) {
                                material_array = dest_ptr + 1;
                                do {
                                    source_ptr = material_array + 0x14;
                                    *batch_ptr = *(uint *)((longlong)source_ptr + (-4 - (longlong)dest_ptr) +
                                                        (longlong)material_array);
                                    batch_ptr = batch_ptr + 0x14;
                                    texture_ptr = (void *)((longlong)source_ptr + (-RENDER_BATCH_SIZE - (longlong)dest_ptr) + (longlong)material_array);
                                    texture_id = ((uint*)texture_ptr)[1];
                                    *(void*)material_array = *texture_ptr;
                                    ((void*)material_array)[2] = texture_id;
                                    texture_ptr = (void *)((longlong)source_ptr + (-0x40 - (longlong)dest_ptr) + (longlong)material_array);
                                    texture_id = ((uint*)texture_ptr)[1];
                                    ((void*)material_array)[4] = *texture_ptr;
                                    ((void*)material_array)[6] = texture_id;
                                    texture_ptr = (void *)((longlong)source_ptr + (-0x30 - (longlong)dest_ptr) + (longlong)material_array);
                                    texture_id = ((uint*)texture_ptr)[1];
                                    ((void*)material_array)[8] = *texture_ptr;
                                    ((void*)material_array)[10] = texture_id;
                                    texture_ptr = (void *)((longlong)source_ptr + (-0x20 - (longlong)dest_ptr) + (longlong)material_array);
                                    texture_id = ((uint*)texture_ptr)[1];
                                    ((void*)material_array)[12] = *texture_ptr;
                                    ((void*)material_array)[14] = texture_id;
                                    ((void*)material_array)[17] = *(void *)((longlong)source_ptr + (-0xc - (longlong)dest_ptr) + (longlong)material_array);
                                    material_array = (uint *)((longlong)material_array +
                                                      (longlong)source_ptr + (0x4c - (longlong)dest_ptr));
                                    material_array = source_ptr;
                                } while (material_array != dest_ptr);
                            }
                            
                            // 添加新的批处理条目
                            *batch_ptr = batch_flags;
                            *(longlong *)(batch_ptr + 1) = texture_data;
                            *(longlong *)(batch_ptr + 3) = material_offset;
                            *(longlong *)(batch_ptr + 5) = cache_data;
                            *(longlong *)(batch_ptr + 7) = batch_start;
                            *(longlong *)(batch_ptr + 9) = batch_end;
                            *(longlong *)(batch_ptr + 0xb) = batch_size;
                            *(longlong *)(batch_ptr + 0xd) = data_offset;
                            *(longlong *)(batch_ptr + 0xf) = cache_offset;
                            *(longlong *)(batch_ptr + 0x12) = material_data;
                            hash_table_ptr[1] = (ulonglong)(batch_ptr + 0x14);
                            *hash_table_ptr = (ulonglong)dest_ptr;
                            hash_table_ptr[2] = (ulonglong)(dest_ptr + texture_offset * 0x14);
                        }
                    }
                    entry_count = entry_count + 1;
                    flag_mask = flag_mask << 1 | (uint)((int)flag_mask < 0);
                    loop_counter = loop_counter + 0x20;
                    material_count = *(int *)*render_context;
                    batch_data = material_info;
                } while (entry_count < material_count);
            }
            batch_counter = batch_counter + 1;
            material_data = batch_data[7];
            batch_base = batch_base + 0x10;
        } while ((ulonglong)(longlong)batch_counter < (ulonglong)(batch_data[8] - material_data >> 4));
    }
    
    // 清理栈保护并返回
    FUN_1808fc050(cache_size ^ (ulonglong)stack_guard);
}

/**
 * 高级渲染批处理管理器
 * @param render_device 渲染设备指针
 * @param texture_manager 纹理管理器
 * @param batch_data 批处理数据
 * @param render_context 渲染上下文
 * @param material_data 材质数据
 * @param batch_count 批处理数量
 * @param shader_data 着色器数据
 * @param context_data 上下文数据
 * @param vertex_data 顶点数据
 * @param index_data 索引数据
 * @param material_cache 材质缓存
 * @param texture_cache 纹理缓存
 * @param hash_table 哈希表
 * @param batch_info 批处理信息
 * @param render_state 渲染状态
 * @param cache_data 缓存数据
 * @param hash_value1 哈希值1
 * @param hash_value2 哈希值2
 */
void advanced_render_batch_manager(void* render_device, void* texture_manager, longlong batch_data, longlong* render_context,
                                   void* material_data, int batch_count, void* shader_data, longlong* context_data,
                                   longlong* vertex_data, longlong* index_data, void* material_cache, void* texture_cache,
                                   ulonglong* hash_table, longlong batch_info, void* render_state, void* cache_data,
                                   ulonglong hash_value1, ulonglong hash_value2)
{
    MaterialEntry* material_entry;
    longlong material_offset;
    longlong batch_offset;
    longlong* device_data;
    void* texture_ptr;
    ulonglong texture_hash1;
    ulonglong texture_hash2;
    ulonglong combined_hash;
    longlong material_info;
    longlong texture_data;
    longlong cache_info;
    longlong batch_start;
    longlong batch_end;
    longlong batch_size;
    ulonglong material_key;
    uint batch_flags;
    uint material_index;
    uint batch_index;
    int entry_count;
    longlong data_offset;
    uint* batch_ptr;
    ulonglong* hash_table_ptr;
    int texture_count;
    uint* material_array;
    uint* source_ptr;
    uint* dest_ptr;
    int loop_counter;
    longlong render_offset;
    uint flag_mask;
    ulonglong hash_result;
    void* register_rbx;
    longlong cache_offset;
    void* register_rbp;
    void* register_rsi;
    uint texture_id;
    void* register_rdi;
    ulonglong* cache_ptr;
    int material_count;
    uint* material_list;
    uint* temp_ptr;
    int register_r10d;
    longlong register_r11;
    uint* batch_data_ptr;
    int entry_index;
    void* register_r12;
    void* register_r13;
    longlong loop_counter2;
    uint flag_mask2;
    void* register_r14;
    void* register_r15;
    ulonglong combined_hash2;
    uint stack_var;
    
    // 保存寄存器状态
    *(void *)(register_r11 + 0x18) = register_rbx;
    *(void *)(register_r11 + -0x10) = register_rbp;
    *(void *)(register_r11 + -0x18) = register_rdi;
    *(void *)(register_r11 + -0x20) = register_r12;
    *(void *)(register_r11 + -0x28) = register_r13;
    *(void *)(register_r11 + -0x30) = register_r14;
    *(void *)(register_r11 + -0x38) = register_r15;
    render_state = 0;
    
    // 主处理循环
    do {
        // 获取批处理标志和数据
        texture_id = *(uint *)(batch_data + 8 + render_state);
        cache_offset = *(longlong *)(batch_data + render_state);
        stack_var = texture_id;
        material_data = cache_offset;
        
        // 获取渲染上下文
        if (*(code **)(*render_context + 0x158) == (code *)&UNK_18027d980) {
            context_data = render_context + 0x66;
        } else {
            context_data = (longlong *)(**(code **)(*render_context + 0x158))(render_context);
            render_context = vertex_data;
            register_r10d = batch_count;
        }
        
        // 处理材质
        entry_index = 0;
        material_count = *(int *)*register_rsi;
        if (0 < material_count) {
            flag_mask2 = 1;
            loop_counter2 = 0;
            do {
                // 检查材质标志
                if ((texture_id & flag_mask2) != 0) {
                    material_info = register_rsi[1];
                    material_offset = *(longlong *)(*(longlong *)(cache_offset + 0x1b8) + 0xa8);
                    batch_offset = *(longlong *)(material_info + 8);
                    texture_hash1 = *(ulonglong *)(material_offset + 0xc);
                    texture_hash2 = *(ulonglong *)(material_offset + 0x14);
                    combined_hash2 = texture_hash1 ^ texture_hash2;
                    
                    // 在哈希表中查找材质
                    for (cache_ptr = *(ulonglong **)(batch_offset + (combined_hash2 % (ulonglong)*(uint *)(material_info + 0x10)) * 8);
                         cache_ptr != (ulonglong *)0x0; cache_ptr = (ulonglong *)cache_ptr[3]) {
                        if ((texture_hash1 == *cache_ptr) && (texture_hash2 == cache_ptr[1])) {
                            if (cache_ptr != (ulonglong *)0x0) {
                                material_info = *(longlong *)(material_info + 0x10);
                                goto material_found2;
                            }
                            break;
                        }
                    }
                    
                    // 创建新材质条目
                    material_info = *(longlong *)(material_info + 0x10);
                    cache_ptr = *(ulonglong **)(batch_offset + material_info * 8);
material_found2:
                    if (cache_ptr == *(ulonglong **)(batch_offset + material_info * 8)) {
                        device_data = (longlong *)register_rsi[2];
                        entry_count = 0;
                        hash_value2 = (longlong)((int)device_data[2] + MATERIAL_ALIGNMENT) & MATERIAL_ALIGN_MASK;
                        *(int *)(device_data + 2) = material_count * MATERIAL_HASH_SIZE + (int)hash_value2;
                        hash_value2 = *device_data + hash_value2;
                        
                        // 初始化材质数据
                        if (0 < *(int *)*register_rsi) {
                            texture_ptr = (void *)(hash_value2 + 8);
                            do {
                                texture_ptr = (void *)register_rsi[3];
                                entry_count = entry_count + 1;
                                ((uint*)texture_ptr)[-1] = 0;
                                *(uint*)texture_ptr = 0;
                                ((uint*)texture_ptr)[1] = 0;
                                ((uint*)texture_ptr)[2] = *(uint*)texture_ptr;
                                texture_ptr = (void*)((uint*)texture_ptr + 4);
                            } while (entry_count < *(int *)*register_rsi);
                        }
                        
                        // 更新材质缓存
                        cache_offset = register_rsi[1];
                        hash_result = combined_hash2 % (ulonglong)*(uint *)(cache_offset + 0x10);
                        for (cache_ptr = *(ulonglong **)(*(longlong *)(cache_offset + 8) + hash_result * 8);
                             cache_ptr != (ulonglong *)0x0; cache_ptr = (ulonglong *)cache_ptr[3]) {
                            if ((texture_hash1 == *cache_ptr) && (texture_hash2 == cache_ptr[1])) {
                                material_info = *(longlong *)(cache_offset + 8) + hash_result * 8;
                                if (cache_ptr != (ulonglong *)0x0) goto cache_updated2;
                                break;
                            }
                        }
                        
                        // 创建新缓存条目
                        device_data = *(longlong **)(cache_offset + 0x30);
                        texture_hash2 = (longlong)(int)device_data[2] + MATERIAL_ALIGNMENT & MATERIAL_ALIGN_MASK;
                        cache_ptr = (ulonglong *)(*device_data + texture_hash2);
                        *(int *)(device_data + 2) = (int)texture_hash2 + MATERIAL_HASH_SIZE;
                        *cache_ptr = texture_hash1;
                        cache_ptr[1] = texture_hash2;
                        cache_ptr[2] = hash_value2;
                        cache_ptr[3] = 0;
                        texture_cache = (ulonglong *)texture_hash1;
                        hash_value2 = texture_hash2;
                        
                        // 生成材质名称
                        FUN_18066c220(cache_offset + 0x20, &shader_data, *(undefined4 *)(cache_offset + 0x10),
                                      *(undefined4 *)(cache_offset + 0x18), 1);
                        if ((char)shader_data != '\0') {
                            hash_result = combined_hash2 % (ulonglong)shader_data._4_4_;
                            FUN_180285760(cache_offset, shader_data._4_4_);
                        }
                        
                        // 更新哈希表链接
                        cache_ptr[3] = *(ulonglong *)(*(longlong *)(cache_offset + 8) + hash_result * 8);
                        *(ulonglong **)(*(longlong *)(cache_offset + 8) + hash_result * 8) = cache_ptr;
                        *(longlong *)(cache_offset + 0x18) = *(longlong *)(cache_offset + 0x18) + 1;
                        texture_id = stack_var;
                        material_info = *(longlong *)(cache_offset + 8) + hash_result * 8;
cache_updated2:
                        batch_offset = material_info;
                        hash_table = cache_ptr;
                        texture_cache = hash_table;
                        hash_value2 = batch_offset;
                        cache_ptr = hash_table;
                        cache_offset = material_data;
                    }
                    
                    // 处理批处理数据
                    cache_ptr = (ulonglong *)(cache_ptr[2] + loop_counter2);
                    material_info = *context_data;
                    material_offset = context_data[1];
                    material_list = (uint *)cache_ptr[1];
                    batch_offset = context_data[2];
                    batch_start = context_data[3];
                    batch_end = context_data[4];
                    batch_size = context_data[5];
                    data_offset = context_data[6];
                    cache_offset = context_data[7];
                    
                    // 检查批处理容量
                    if (material_list < (uint *)cache_ptr[2]) {
                        cache_ptr[1] = (ulonglong)(material_list + 0x14);
                        *material_list = texture_id;
                        *(longlong *)(material_list + 1) = material_info;
                        *(longlong *)(material_list + 3) = material_offset;
                        *(longlong *)(material_list + 5) = batch_offset;
                        *(longlong *)(material_list + 7) = batch_start;
                        *(longlong *)(material_list + 9) = batch_end;
                        *(longlong *)(material_list + 0xb) = batch_size;
                        *(longlong *)(material_list + 0xd) = data_offset;
                        *(longlong *)(material_list + 0xf) = cache_offset;
                        *(longlong *)(material_list + 0x12) = cache_offset;
                    } else {
                        // 扩展批处理容量
                        temp_ptr = (uint *)*cache_ptr;
                        texture_offset = ((longlong)material_list - (longlong)temp_ptr) / RENDER_BATCH_SIZE;
                        if (texture_offset == 0) {
                            texture_offset = 1;
resize_batch2:
                            device_data = (longlong *)cache_ptr[3];
                            texture_hash1 = (longlong)((int)device_data[2] + MATERIAL_ALIGNMENT) & MATERIAL_ALIGN_MASK;
                            *(int *)(device_data + 2) = (int)texture_offset * RENDER_BATCH_SIZE + (int)texture_hash1;
                            batch_data_ptr = (uint *)(*device_data + texture_hash1);
                            material_list = (uint *)cache_ptr[1];
                            temp_ptr = (uint *)*cache_ptr;
                        } else {
                            texture_offset = texture_offset * 2;
                            if (texture_offset != 0) goto resize_batch2;
                            batch_data_ptr = (uint *)0x0;
                        }
                        
                        // 复制批处理数据
                        batch_ptr = batch_data_ptr;
                        if (temp_ptr != material_list) {
                            material_list = batch_data_ptr + 1;
                            do {
                                temp_ptr = material_list + 0x14;
                                *batch_ptr = *(uint *)((longlong)temp_ptr + (-4 - (longlong)batch_data_ptr) +
                                                    (longlong)material_list);
                                batch_ptr = batch_ptr + 0x14;
                                texture_ptr = (void *)((longlong)temp_ptr + (-RENDER_BATCH_SIZE - (longlong)batch_data_ptr) + (longlong)material_list);
                                texture_id = ((uint*)texture_ptr)[1];
                                *(void*)material_list = *texture_ptr;
                                ((void*)material_list)[2] = texture_id;
                                texture_ptr = (void *)((longlong)temp_ptr + (-0x40 - (longlong)batch_data_ptr) + (longlong)material_list);
                                texture_id = ((uint*)texture_ptr)[1];
                                ((void*)material_list)[4] = *texture_ptr;
                                ((void*)material_list)[6] = texture_id;
                                texture_ptr = (void *)((longlong)temp_ptr + (-0x30 - (longlong)batch_data_ptr) + (longlong)material_list);
                                texture_id = ((uint*)texture_ptr)[1];
                                ((void*)material_list)[8] = *texture_ptr;
                                ((void*)material_list)[10] = texture_id;
                                texture_ptr = (void *)((longlong)temp_ptr + (-0x20 - (longlong)batch_data_ptr) + (longlong)material_list);
                                texture_id = ((uint*)texture_ptr)[1];
                                ((void*)material_list)[12] = *texture_ptr;
                                ((void*)material_list)[14] = texture_id;
                                ((void*)material_list)[17] = *(void *)((longlong)temp_ptr + (-0xc - (longlong)batch_data_ptr) + (longlong)material_list);
                                material_list = (uint *)((longlong)material_list +
                                                  (longlong)temp_ptr + (0x4c - (longlong)batch_data_ptr));
                                material_list = temp_ptr;
                            } while (material_list != batch_data_ptr);
                        }
                        
                        // 添加新的批处理条目
                        *batch_ptr = texture_id;
                        *(longlong *)(batch_ptr + 1) = material_info;
                        *(longlong *)(batch_ptr + 3) = material_offset;
                        *(longlong *)(batch_ptr + 5) = batch_offset;
                        *(longlong *)(batch_ptr + 7) = batch_start;
                        *(longlong *)(batch_ptr + 9) = batch_end;
                        *(longlong *)(batch_ptr + 0xb) = batch_size;
                        *(longlong *)(batch_ptr + 0xd) = data_offset;
                        *(longlong *)(batch_ptr + 0xf) = cache_offset;
                        *(longlong *)(batch_ptr + 0x12) = cache_offset;
                        cache_ptr[1] = (ulonglong)(batch_ptr + 0x14);
                        *cache_ptr = (ulonglong)batch_data_ptr;
                        cache_ptr[2] = (ulonglong)(batch_data_ptr + texture_offset * 0x14);
                    }
                }
                entry_index = entry_index + 1;
                flag_mask2 = flag_mask2 << 1 | (uint)((int)flag_mask2 < 0);
                loop_counter2 = loop_counter2 + 0x20;
                material_count = *(int *)*register_rsi;
                render_context = vertex_data;
                register_r10d = batch_count;
            } while (entry_index < material_count);
        }
        register_r10d = register_r10d + 1;
        batch_data = render_context[7];
        render_state = render_state + 0x10;
        batch_count = register_r10d;
        if ((ulonglong)(render_context[8] - batch_data >> 4) <= (ulonglong)(longlong)register_r10d) {
            // 清理并返回
            FUN_1808fc050(hash_value2 ^ (ulonglong)&stack0x00000000);
        }
    } while( true );
}

/**
 * 渲染系统初始化和清理函数
 * 负责初始化渲染系统的全局状态和资源清理
 */
void initialize_rendering_system(void)
{
    ulonglong stack_cookie;
    
    // 执行系统初始化
    FUN_1808fc050(stack_cookie ^ (ulonglong)&stack0x00000000);
}