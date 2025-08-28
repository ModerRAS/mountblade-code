#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part129.c - 核心引擎模块第129部分
// 功能：游戏对象属性管理和动画系统处理

// 全局常量定义
#define MAX_OBJECTS 0x1000
#define INVALID_OBJECT_ID -1
#define ANIMATION_FLAG_ENABLED 0x1000000
#define TRANSFORM_MATRIX_SIZE 16
#define BOUNDARY_CHECK_THRESHOLD -256000.0f

// 游戏对象属性结构
typedef struct {
    uint32_t object_id;
    float position_x;
    float position_y;
    float position_z;
    float rotation_x;
    float rotation_y;
    float rotation_z;
    float scale_x;
    float scale_y;
    float scale_z;
    uint32_t flags;
    uint32_t animation_state;
    uint32_t render_flags;
} GameObjectProperties;

// 变换矩阵结构
typedef struct {
    float matrix[16];
    float bounding_min[3];
    float bounding_max[3];
    uint32_t transform_flags;
} TransformMatrix;

// 动画控制结构
typedef struct {
    uint32_t current_frame;
    uint32_t total_frames;
    float animation_speed;
    uint32_t animation_flags;
    uint32_t blend_state;
    float blend_weight;
} AnimationController;

// 对象索引结构
typedef struct {
    uint32_t object_id;
    uint32_t property_index;
    uint32_t animation_index;
    uint32_t transform_index;
    uint32_t state_flags;
} ObjectIndex;

// 对象池结构
typedef struct {
    ObjectIndex *indices;
    uint32_t capacity;
    uint32_t count;
    uint32_t growth_factor;
} ObjectPool;

// 全局数据指针
static void *global_engine_context = (void *)0x180c8a9b0;
static void *global_transform_table = (void *)0x180bf00a8;

/**
 * @brief 更新游戏对象属性
 * @param object_id 对象ID
 * @param property_value 属性值
 * @return void
 * 
 * 此函数负责：
 * 1. 设置对象的基本属性
 * 2. 更新对象的变换矩阵
 * 3. 处理对象的边界检查
 * 4. 更新对象的状态标志
 */
void update_game_object_properties(uint32_t object_id, float property_value)
{
    uint64_t *object_context = (uint64_t *)global_engine_context;
    uint64_t *transform_data = (uint64_t *)global_transform_table;
    float *position_ptr = (float *)((uint8_t *)global_engine_context + 0x118);
    float *rotation_ptr = (float *)((uint8_t *)global_engine_context + 0x11c);
    uint32_t *property_flags = (uint32_t *)((uint8_t *)global_engine_context + 0x1b2c);
    
    float delta_x = property_value - position_ptr[0];
    float delta_y = rotation_ptr[0] - rotation_ptr[1];
    
    // 设置对象属性
    *(uint32_t *)((uint8_t *)global_engine_context + 0x128) = object_id;
    
    // 处理变换更新
    process_transform_update(delta_y, *(uint32_t *)((uint8_t *)object_context[1] + -0x10));
    
    // 初始化对象变换矩阵
    uint64_t transform_ptr = *(uint64_t *)((uint8_t *)global_engine_context + 0x1af8);
    *(uint64_t *)((uint8_t *)transform_ptr + 0x144) = 0;
    
    // 设置变换矩阵元素
    set_transform_matrix_elements(transform_ptr, transform_data);
    
    // 边界检查和状态更新
    if (check_boundary_conditions(transform_ptr, transform_data)) {
        update_object_state_flags(transform_ptr);
    }
    
    // 更新对象引用计数
    update_object_reference_count();
}

/**
 * @brief 处理变换更新
 * @param transform_delta 变换增量
 * @param context_data 上下文数据
 * @return void
 */
void process_transform_update(float transform_delta, uint32_t context_data)
{
    // 调用底层变换处理函数
    void (*transform_func)(float, uint32_t) = (void (*)(float, uint32_t))0x180124080;
    transform_func(transform_delta, context_data);
}

/**
 * @brief 设置变换矩阵元素
 * @param transform_ptr 变换指针
 * @param transform_data 变换数据
 * @return void
 */
void set_transform_matrix_elements(uint64_t transform_ptr, uint64_t *transform_data)
{
    // 设置矩阵的4个向量元素
    *(uint32_t *)((uint8_t *)transform_ptr + 0x14c) = *(uint32_t *)((uint8_t *)transform_data + 0x0);
    *(uint32_t *)((uint8_t *)transform_ptr + 0x150) = *(uint32_t *)((uint8_t *)transform_data + 0x4);
    *(uint32_t *)((uint8_t *)transform_ptr + 0x154) = *(uint32_t *)((uint8_t *)transform_data + 0x8);
    *(uint32_t *)((uint8_t *)transform_ptr + 0x158) = *(uint32_t *)((uint8_t *)transform_data + 0xc);
}

/**
 * @brief 检查边界条件
 * @param transform_ptr 变换指针
 * @param transform_data 变换数据
 * @return bool 是否满足边界条件
 */
bool check_boundary_conditions(uint64_t transform_ptr, uint64_t *transform_data)
{
    float *boundary_values = (float *)((uint8_t *)transform_ptr + 0x228);
    float *current_values = (float *)((uint8_t *)transform_data + 0x10);
    
    // 检查边界值是否在有效范围内
    bool boundary_check = (boundary_values[0] <= current_values[0] && current_values[0] != boundary_values[0]) &&
                         (current_values[1] < boundary_values[1]) &&
                         (boundary_values[2] <= current_values[2] && current_values[2] != boundary_values[2]) &&
                         (current_values[3] < boundary_values[3]);
    
    return boundary_check || (*(char *)((uint8_t *)global_engine_context + 0x2e38) != '\0');
}

/**
 * @brief 更新对象状态标志
 * @param transform_ptr 变换指针
 * @return void
 */
void update_object_state_flags(uint64_t transform_ptr)
{
    char result = validate_object_state();
    if (result != '\0') {
        *(uint32_t *)((uint8_t *)transform_ptr + 0x148) |= 1;
    }
}

/**
 * @brief 验证对象状态
 * @return char 验证结果
 */
char validate_object_state(void)
{
    // 调用状态验证函数
    char (*validate_func)(void *, void *, uint32_t) = (char (*)(void *, void *, uint32_t))0x180128040;
    return validate_func((void *)0x0, (void *)0x28, 1);
}

/**
 * @brief 更新对象引用计数
 * @return void
 */
void update_object_reference_count(void)
{
    uint32_t *ref_count = (uint32_t *)((uint8_t *)global_engine_context + 0x1e8);
    *ref_count = *ref_count - 1;
}

/**
 * @brief 简化的对象属性更新
 * @return void
 */
void simplified_property_update(void)
{
    uint32_t property_value = *(uint32_t *)((uint8_t *)global_engine_context + 0x1b2c);
    uint32_t *target_ptr = (uint32_t *)((uint8_t *)global_engine_context + 0x144);
    
    if (should_update_property(property_value)) {
        *target_ptr = property_value;
    }
    
    // 设置变换矩阵
    set_transform_matrix_elements(0, (uint64_t *)global_engine_context);
    
    // 更新引用计数
    update_object_reference_count();
}

/**
 * @brief 条件属性更新
 * @param input_value 输入值
 * @return void
 */
void conditional_property_update(uint32_t input_value)
{
    uint32_t *target_ptr = (uint32_t *)((uint8_t *)global_engine_context + 0x144);
    
    if (should_update_with_input(input_value)) {
        *target_ptr = input_value;
    }
    
    // 设置变换矩阵
    set_transform_matrix_elements(0, (uint64_t *)global_engine_context);
    
    // 更新引用计数
    update_object_reference_count();
}

/**
 * @brief 初始化动画系统
 * @return void
 */
void initialize_animation_system(void)
{
    uint64_t engine_context = *(uint64_t *)global_engine_context;
    
    if (*(char *)((uint8_t *)global_engine_context + 0x1dd1) != '\0') {
        setup_animation_parameters(engine_context);
        start_animation_sequence(0, 1);
        return;
    }
    
    // 执行默认初始化
    perform_default_initialization();
}

/**
 * @brief 设置动画参数
 * @param engine_context 引擎上下文
 * @return void
 */
void setup_animation_parameters(uint64_t engine_context)
{
    float *position_data = (float *)((uint8_t *)engine_context + 0x16bc);
    float *offset_data = (float *)((uint8_t *)engine_context + 0x118);
    float *rotation_data = (float *)((uint8_t *)engine_context + 0x11c);
    
    // 初始化动画状态
    *(uint64_t *)((uint8_t *)engine_context + 0x1bfc) = 0;
    *(uint32_t *)((uint8_t *)engine_context + 0x1bd0) = 1;
    
    // 计算动画位置
    *(float *)((uint8_t *)engine_context + 0x1bf4) = position_data[0] * 16.0f + offset_data[0];
    *(uint8_t *)((uint8_t *)engine_context + 0x1c14) = 1;
    *(float *)((uint8_t *)engine_context + 0x1bf8) = position_data[0] * 8.0f + rotation_data[0];
    
    // 设置动画标志
    *(uint32_t *)((uint8_t *)engine_context + 0x1be8) = 1;
    *(float *)((uint8_t *)engine_context + 0x1c38) = *(float *)((uint8_t *)engine_context + 0x1714) * 0.6f;
}

/**
 * @brief 开始动画序列
 * @param sequence_id 序列ID
 * @param sequence_flags 序列标志
 * @return void
 */
void start_animation_sequence(uint64_t sequence_id, uint32_t sequence_flags)
{
    void (*start_func)(uint64_t, uint32_t) = (void (*)(uint64_t, uint32_t))0x18012e910;
    start_func(sequence_id, sequence_flags);
}

/**
 * @brief 执行默认初始化
 * @return void
 */
void perform_default_initialization(void)
{
    // 执行初始化函数
    void (*init_func)(void *, uint32_t, void *, uint32_t) = (void (*)(void *, uint32_t, void *, uint32_t))0x180121200;
    void *buffer = (void *)0x28;
    init_func(buffer, 0x10, (void *)0x180a064e0, *(uint32_t *)((uint8_t *)global_engine_context + 0x2dcc));
    
    // 处理初始化结果
    void (*process_func)(void *, uint32_t, uint32_t) = (void (*)(void *, uint32_t, uint32_t))0x1801299b0;
    process_func(buffer, 0, 0x22c0347);
}

/**
 * @brief 动画序列处理
 * @param param1 参数1
 * @param param2 参数2
 * @return void
 */
void process_animation_sequence(uint64_t param1, uint32_t param2)
{
    uint64_t engine_context = *(uint64_t *)global_engine_context;
    
    if (param2 != '\0') {
        process_animation_data(engine_context);
    }
    
    // 处理动画序列
    void (*process_func)(void *, uint32_t, void *, uint32_t) = (void (*)(void *, uint32_t, void *, uint32_t))0x180121200;
    void *buffer = (void *)0x28;
    process_func(buffer, 0x10, (void *)0x180a064e0, *(uint32_t *)((uint8_t *)engine_context + 0x2dcc));
    
    // 完成序列处理
    void (*complete_func)(void *, uint32_t, uint32_t) = (void (*)(void *, uint32_t, uint32_t))0x1801299b0;
    complete_func(buffer, 0, 0x22c0347);
}

/**
 * @brief 处理动画数据
 * @param engine_context 引擎上下文
 * @return void
 */
void process_animation_data(uint64_t engine_context)
{
    uint32_t hash_value = 0xffffffff;
    uint8_t *data_buffer = (uint8_t *)0x27;
    
    // 计算数据哈希值
    while (*data_buffer != 0) {
        if (is_special_marker(data_buffer)) {
            hash_value = 0xffffffff;
        }
        hash_value = calculate_hash_value(hash_value, *data_buffer);
        data_buffer++;
    }
    
    // 查找匹配的对象
    uint64_t object_ptr = find_matching_object(engine_context + 0x1ae0, ~hash_value);
    if (object_ptr != 0 && *(char *)((uint8_t *)object_ptr + 0xaf) != '\0') {
        update_object_animation_state(object_ptr, engine_context);
    }
}

/**
 * @brief 检查特殊标记
 * @param data_ptr 数据指针
 * @return bool 是否为特殊标记
 */
bool is_special_marker(uint8_t *data_ptr)
{
    return (data_ptr[0] == 0x23 && data_ptr[1] == 0x23 && data_ptr[2] == 0x23);
}

/**
 * @brief 计算哈希值
 * @param current_hash 当前哈希值
 * @param data_byte 数据字节
 * @return uint32_t 新的哈希值
 */
uint32_t calculate_hash_value(uint32_t current_hash, uint8_t data_byte)
{
    uint32_t *hash_table = (uint32_t *)0x18098d290;
    uint32_t table_index = ((current_hash & 0xff) ^ data_byte) * 4;
    return hash_table[table_index] ^ (current_hash >> 8);
}

/**
 * @brief 查找匹配的对象
 * @param search_base 搜索基地址
 * @param search_hash 搜索哈希值
 * @return uint64_t 对象指针
 */
uint64_t find_matching_object(uint64_t search_base, uint32_t search_hash)
{
    uint64_t (*find_func)(uint64_t, uint32_t) = (uint64_t (*)(uint64_t, uint32_t))0x180121fa0;
    return find_func(search_base, search_hash);
}

/**
 * @brief 更新对象动画状态
 * @param object_ptr 对象指针
 * @param engine_context 引擎上下文
 * @return void
 */
void update_object_animation_state(uint64_t object_ptr, uint64_t engine_context)
{
    *(uint8_t *)((uint8_t *)object_ptr + 0xb6) = 1;
    *(uint32_t *)((uint8_t *)object_ptr + 0xd8) = 1;
    
    uint32_t *counter = (uint32_t *)((uint8_t *)engine_context + 0x2dcc);
    *counter = *counter + 1;
}

/**
 * @brief 动画事件处理
 * @param event_id 事件ID
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @return void
 */
void handle_animation_event(uint64_t event_id, uint64_t param2, uint64_t param3, uint64_t param4)
{
    uint64_t event_params[3];
    event_params[0] = param2;
    event_params[1] = param3;
    event_params[2] = param4;
    
    if (*(char *)((uint8_t *)global_engine_context + 0x1dd1) == '\0') {
        start_animation_sequence(event_id, 1);
    } else {
        initialize_animation_system();
    }
    
    // 处理事件回调
    void (*callback_func)(uint64_t, uint64_t *) = (void (*)(uint64_t, uint64_t *))0x18010f040;
    callback_func(event_id, event_params);
    
    // 完成事件处理
    void (*complete_func)(void) = (void (*)(void))0x18012cfe0;
    complete_func();
}

/**
 * @brief 添加对象到索引
 * @param object_id 对象ID
 * @return void
 */
void add_object_to_index(uint32_t object_id)
{
    uint64_t engine_context = *(uint64_t *)global_engine_context;
    uint32_t *property_counter = (uint32_t *)((uint8_t *)engine_context + 0x1b2c);
    
    // 更新属性引用
    if (*property_counter == object_id) {
        *(uint32_t *)((uint8_t *)engine_context + 0x1b34) = object_id;
    }
    
    uint32_t *state_counter = (uint32_t *)((uint8_t *)engine_context + 0x1b30);
    if (*state_counter == object_id) {
        *(uint8_t *)((uint8_t *)engine_context + 0x1b3f) = 1;
    }
    
    // 准备对象数据
    ObjectIndex *index_data = prepare_object_data(object_id);
    
    // 添加到对象池
    add_to_object_pool(index_data, object_id);
}

/**
 * @brief 准备对象数据
 * @param object_id 对象ID
 * @return ObjectIndex* 索引数据
 */
ObjectIndex *prepare_object_data(uint32_t object_id)
{
    uint64_t object_context = *(uint64_t *)((uint8_t *)global_engine_context + 0x1af8);
    uint32_t property_flags = *(uint32_t *)((uint8_t *)global_engine_context + 0x1a90);
    uint32_t *counter_ptr = (uint32_t *)((uint8_t *)global_engine_context + 0x1bc0);
    
    // 获取对象属性数据
    uint32_t object_data = *(uint32_t *)((uint8_t *)object_context + 0x220 + -4 + (uint64_t)*counter_ptr * 4);
    
    // 创建索引数据
    ObjectIndex *index_data = (ObjectIndex *)allocate_index_memory();
    index_data->object_id = object_id;
    index_data->property_index = property_flags;
    
    return index_data;
}

/**
 * @brief 分配索引内存
 * @return ObjectIndex* 索引指针
 */
ObjectIndex *allocate_index_memory(void)
{
    void *(*alloc_func)(void *) = (void *(*)(void *))0x180131890;
    return (ObjectIndex *)alloc_func((void *)0x10);
}

/**
 * @brief 添加到对象池
 * @param index_data 索引数据
 * @param object_id 对象ID
 * @return void
 */
void add_to_object_pool(ObjectIndex *index_data, uint32_t object_id)
{
    uint32_t *pool_count = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb0);
    uint32_t *pool_capacity = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb4);
    
    if (*pool_count >= *pool_capacity) {
        expand_object_pool();
    }
    
    uint64_t pool_base = *(uint64_t *)((uint8_t *)global_engine_context + 0x1bb8);
    uint64_t index = (uint64_t)*pool_count;
    
    // 存储索引数据
    store_index_data(pool_base, index, index_data, object_id);
    
    // 更新池计数
    *pool_count = *pool_count + 1;
}

/**
 * @brief 扩展对象池
 * @return void
 */
void expand_object_pool(void)
{
    uint32_t *pool_capacity = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb4);
    uint32_t new_capacity = calculate_new_capacity(*pool_capacity);
    
    void (*expand_func)(uint32_t *, uint32_t) = (void (*)(uint32_t *, uint32_t))0x18013e760;
    expand_func((uint32_t *)((uint8_t *)global_engine_context + 0x1bb0), new_capacity);
}

/**
 * @brief 计算新的容量
 * @param current_capacity 当前容量
 * @return uint32_t 新容量
 */
uint32_t calculate_new_capacity(uint32_t current_capacity)
{
    if (current_capacity == 0) {
        return 8;
    }
    return current_capacity / 2 + current_capacity;
}

/**
 * @brief 存储索引数据
 * @param pool_base 池基地址
 * @param index 索引位置
 * @param index_data 索引数据
 * @param object_id 对象ID
 * @return void
 */
void store_index_data(uint64_t pool_base, uint64_t index, ObjectIndex *index_data, uint32_t object_id)
{
    uint64_t *index_ptr = (uint64_t *)(pool_base + index * 0x30);
    index_ptr[0] = object_id;
    index_ptr[1] = 0;
    
    uint64_t *data_ptr = (uint64_t *)(pool_base + 0x10 + index * 0x30);
    data_ptr[0] = *(uint64_t *)((uint8_t *)global_engine_context + 0x1af8);
    data_ptr[1] = *(uint64_t *)((uint8_t *)global_engine_context + 0x1a90);
    
    uint64_t *transform_ptr = (uint64_t *)(pool_base + 0x20 + index * 0x30);
    transform_ptr[0] = *(uint64_t *)index_data;
    transform_ptr[1] = *(uint64_t *)((uint8_t *)index_data + 8);
}

/**
 * @brief 指定对象添加到索引
 * @param object_id 对象ID
 * @return void
 */
void add_specific_object_to_index(uint32_t object_id)
{
    uint64_t engine_context = *(uint64_t *)global_engine_context;
    
    // 准备对象数据
    ObjectIndex *index_data = prepare_object_data(object_id);
    
    // 添加到对象池
    add_to_object_pool(index_data, object_id);
}

/**
 * @brief 更新索引中的对象
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 * @param param6 参数6
 * @param param7 参数7
 * @param param8 参数8
 * @param param9 参数9
 * @return void
 */
void update_object_in_index(uint32_t param1, uint64_t param2, uint64_t param3, uint64_t param4,
                           uint64_t param5, uint64_t param6, uint64_t param7, uint64_t param8, uint64_t param9)
{
    uint64_t *index_base = (uint64_t *)param4;
    uint32_t *pool_capacity = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb4);
    
    if (should_update_existing_object(index_base, param4, param1)) {
        update_existing_object(index_base, param4, param1);
    } else {
        expand_and_update_object(param1, param4, param5, param6, param7, param8, param9);
    }
}

/**
 * @brief 检查是否应该更新现有对象
 * @param index_base 索引基地址
 * @param index 索引位置
 * @param object_id 对象ID
 * @return bool 是否应该更新
 */
bool should_update_existing_object(uint64_t *index_base, uint64_t index, uint32_t object_id)
{
    return (*(uint32_t *)(index_base + index * 0x30) == object_id) &&
           (*(uint32_t *)(index_base + 0x18 + index * 0x30) == *(uint32_t *)((uint8_t *)global_engine_context + 0x1a90) + -1);
}

/**
 * @brief 更新现有对象
 * @param index_base 索引基地址
 * @param index 索引位置
 * @param object_id 对象ID
 * @return void
 */
void update_existing_object(uint64_t *index_base, uint64_t index, uint32_t object_id)
{
    *(uint32_t *)(index_base + 0x18 + index * 0x30) = *(uint32_t *)((uint8_t *)global_engine_context + 0x1a90);
}

/**
 * @brief 扩展并更新对象
 * @param object_id 对象ID
 * @param index 索引位置
 * @param param5 参数5
 * @param param6 参数6
 * @param param7 参数7
 * @param param8 参数8
 * @param param9 参数9
 * @return void
 */
void expand_and_update_object(uint32_t object_id, uint64_t index, uint64_t param5, uint64_t param6,
                             uint64_t param7, uint64_t param8, uint64_t param9)
{
    uint32_t *pool_capacity = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb4);
    uint32_t new_capacity = calculate_new_capacity(*pool_capacity);
    
    void (*expand_func)(uint32_t *, uint32_t) = (void (*)(uint32_t *, uint32_t))0x18013e760;
    expand_func((uint32_t *)((uint8_t *)global_engine_context + 0x1bb0), new_capacity);
    
    // 更新索引数据
    uint64_t *index_base = (uint64_t *)((uint8_t *)global_engine_context + 0x1bb8);
    uint64_t *index_ptr = (uint64_t *)(index_base + index * 0x30);
    index_ptr[0] = object_id;
    index_ptr[1] = param5;
    
    uint64_t *data_ptr = (uint64_t *)(index_base + 0x10 + index * 0x30);
    data_ptr[0] = param6;
    data_ptr[1] = param7;
    
    uint64_t *transform_ptr = (uint64_t *)(index_base + 0x20 + index * 0x30);
    transform_ptr[0] = param8;
    transform_ptr[1] = param9;
}

/**
 * @brief 从对象中移除指定对象
 * @param target_object 目标对象
 * @return void
 */
void remove_object_from_index(uint64_t target_object)
{
    uint32_t *pool_count = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb0);
    uint32_t *pool_capacity = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb4);
    
    if (*pool_count != 0) {
        uint32_t new_count = find_object_index(target_object);
        
        if (new_count < *pool_count) {
            if (*pool_capacity < new_count) {
                uint32_t new_capacity = calculate_new_capacity(*pool_capacity);
                uint32_t final_capacity = (new_count < new_capacity) ? new_capacity : new_count;
                
                void (*expand_func)(uint32_t *, uint32_t) = (void (*)(uint32_t *, uint32_t))0x18013e760;
                expand_func((uint32_t *)((uint8_t *)global_engine_context + 0x1bb0), final_capacity);
            }
            
            *(uint32_t *)((uint8_t *)global_engine_context + 0x1bb0) = new_count;
        }
    }
}

/**
 * @brief 查找对象索引
 * @param target_object 目标对象
 * @return uint32_t 对象索引
 */
uint32_t find_object_index(uint64_t target_object)
{
    uint32_t pool_count = *(uint32_t *)((uint8_t *)global_engine_context + 0x1bb0);
    uint32_t found_index = 0;
    
    if (target_object != 0 && pool_count > 0) {
        uint64_t pool_base = *(uint64_t *)((uint8_t *)global_engine_context + 0x1bb8);
        uint64_t *object_ptr = (uint64_t *)(pool_base + 8);
        
        for (uint32_t i = 0; i < pool_count; i++) {
            if ((*object_ptr != 0) && ((*(uint32_t *)(*object_ptr + 0xc) & ANIMATION_FLAG_ENABLED) == 0)) {
                if (find_matching_object_in_pool(object_ptr, target_object, pool_count)) {
                    found_index = i;
                    break;
                }
            }
            object_ptr += 6;
        }
    }
    
    return found_index;
}

/**
 * @brief 在池中查找匹配对象
 * @param object_ptr 对象指针
 * @param target_object 目标对象
 * @param pool_count 池计数
 * @return bool 是否找到匹配对象
 */
bool find_matching_object_in_pool(uint64_t *object_ptr, uint64_t target_object, uint32_t pool_count)
{
    for (uint32_t i = 0; i < pool_count; i++) {
        if ((*object_ptr != 0) && (*(uint64_t *)(*object_ptr + 0x3a0) == *(uint64_t *)(target_object + 0x3a0))) {
            return true;
        }
        object_ptr += 6;
    }
    return false;
}

/**
 * @brief 替代的对象移除函数
 * @param target_object 目标对象
 * @return void
 */
void alternative_object_removal(uint64_t target_object)
{
    uint32_t pool_count = *(uint32_t *)((uint8_t *)global_engine_context + 0x1bb0);
    uint32_t found_index = 0;
    
    if (target_object != 0 && pool_count > 0) {
        uint64_t pool_base = *(uint64_t *)((uint8_t *)global_engine_context + 0x1bb8);
        uint64_t *object_ptr = (uint64_t *)(pool_base + 8);
        
        for (uint32_t i = 0; i < pool_count; i++) {
            if ((*object_ptr != 0) && ((*(uint32_t *)(*object_ptr + 0xc) & ANIMATION_FLAG_ENABLED) == 0)) {
                if (find_matching_object_in_pool(object_ptr, target_object, pool_count)) {
                    found_index = i;
                    break;
                }
            }
            object_ptr += 6;
        }
    }
    
    update_pool_count(found_index);
}

/**
 * @brief 更新池计数
 * @param new_count 新计数
 * @return void
 */
void update_pool_count(uint32_t new_count)
{
    uint32_t *pool_count = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb0);
    uint32_t *pool_capacity = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb4);
    
    if (*pool_capacity < new_count) {
        uint32_t new_capacity = calculate_new_capacity(*pool_capacity);
        uint32_t final_capacity = (new_count < new_capacity) ? new_capacity : new_count;
        
        void (*expand_func)(uint32_t *, uint32_t) = (void (*)(uint32_t *, uint32_t))0x18013e760;
        expand_func(pool_count, final_capacity);
    }
    
    *pool_count = new_count;
}

/**
 * @brief 批量对象处理
 * @return void
 */
void batch_object_processing(void)
{
    uint32_t pool_count = *(uint32_t *)((uint8_t *)global_engine_context + 0x1bb0);
    uint32_t processed_count = 0;
    uint64_t pool_base = *(uint64_t *)((uint8_t *)global_engine_context + 0x1bb8);
    uint64_t *object_ptr = (uint64_t *)(pool_base + 8);
    
    for (uint32_t i = 0; i < pool_count; i++) {
        if ((*object_ptr != 0) && ((*(uint32_t *)(*object_ptr + 0xc) & ANIMATION_FLAG_ENABLED) == 0)) {
            if (process_batch_object(object_ptr, pool_count)) {
                processed_count++;
            }
        }
        object_ptr += 6;
    }
    
    update_pool_count(processed_count);
}

/**
 * @brief 处理批量对象
 * @param object_ptr 对象指针
 * @param pool_count 池计数
 * @return bool 是否成功处理
 */
bool process_batch_object(uint64_t *object_ptr, uint32_t pool_count)
{
    uint64_t target_object = *(uint64_t *)((uint8_t *)global_engine_context + 0x1bb8);
    
    for (uint32_t i = 0; i < pool_count; i++) {
        if ((*object_ptr != 0) && (*(uint64_t *)(*object_ptr + 0x3a0) == *(uint64_t *)(target_object + 0x3a0))) {
            return true;
        }
        object_ptr += 6;
    }
    
    return false;
}

/**
 * @brief 简化的池计数更新
 * @param new_count 新计数
 * @return void
 */
void simplified_pool_count_update(uint32_t new_count)
{
    uint32_t *pool_capacity = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb4);
    
    if (*pool_capacity < new_count) {
        uint32_t new_capacity = calculate_new_capacity(*pool_capacity);
        uint32_t final_capacity = (new_count < new_capacity) ? new_capacity : new_count;
        
        void (*expand_func)(uint32_t *, uint32_t) = (void (*)(uint32_t *, uint32_t))0x18013e760;
        expand_func((uint32_t *)((uint8_t *)global_engine_context + 0x1bb0), final_capacity);
    }
    
    *(uint32_t *)((uint8_t *)global_engine_context + 0x1bb0) = new_count;
}

/**
 * @brief 空函数 - 占位符
 * @return void
 */
void empty_function_placeholder(void)
{
    return;
}

/**
 * @brief 移除指定索引的对象
 * @param object_index 对象索引
 * @param should_remove 是否应该移除
 * @return void
 */
void remove_object_by_index(uint32_t object_index, uint32_t should_remove)
{
    uint64_t *object_pool = (uint64_t *)((uint8_t *)global_engine_context + 0x1bb8);
    uint64_t target_object;
    
    if (object_index < 1) {
        target_object = *(uint64_t *)(object_pool + 0x10);
    } else {
        target_object = *(uint64_t *)(object_pool + -0x28 + (uint64_t)object_index * 0x30);
    }
    
    uint32_t *pool_capacity = (uint32_t *)((uint8_t *)global_engine_context + 0x1bb4);
    if (*pool_capacity < object_index) {
        uint32_t new_capacity = calculate_new_capacity(*pool_capacity);
        uint32_t final_capacity = (object_index < new_capacity) ? new_capacity : object_index;
        
        void (*expand_func)(uint32_t *, uint32_t) = (void (*)(uint32_t *, uint32_t))0x18013e760;
        expand_func((uint32_t *)((uint8_t *)global_engine_context + 0x1bb0), final_capacity);
    }
    
    *(uint32_t *)((uint8_t *)global_engine_context + 0x1bb0) = object_index;
    
    if (should_remove != 0) {
        if ((*(uint32_t *)((uint8_t *)global_engine_context + 0x1cfc) == 0) && (*(uint64_t *)((uint8_t *)target_object + 0x3c0) != 0)) {
            target_object = *(uint64_t *)((uint8_t *)target_object + 0x3c0);
        }
        
        void (*remove_func)(uint64_t) = (void (*)(uint64_t))0x18012d2e0;
        remove_func(target_object);
    }
}

/**
 * @brief 执行对象事件
 * @param event_id 事件ID
 * @param event_flags 事件标志
 * @return void
 */
void execute_object_event(uint32_t event_id, uint32_t event_flags)
{
    uint64_t engine_context = *(uint64_t *)global_engine_context;
    uint64_t *transform_table = (uint64_t *)global_transform_table;
    uint32_t *counter_ptr = (uint32_t *)((uint8_t *)engine_context + 0x1bc0);
    
    if ((*counter_ptr < *(uint32_t *)((uint8_t *)engine_context + 0x1bb0)) &&
        (*(uint32_t *)((uint8_t *)engine_context + 0x1bb8 + (uint64_t)*counter_ptr * 0x30) == event_id)) {
        
        void *message_template = (void *)((event_flags >> 0x1c & 1) == 0) ? (void *)0x180a064f0 : (void *)0x180a06500;
        
        void (*message_func)(void *, uint32_t, void *, uint64_t) = (void (*)(void *, uint32_t, void *, uint64_t))0x180121200;
        void *message_buffer = (void *)0x28;
        message_func(message_buffer, 0x14, message_template, event_id);
        
        char (*process_func)(void *, uint32_t, uint32_t) = (char (*)(void *, uint32_t, uint32_t))0x1801299b0;
        char result = process_func(message_buffer, 0, event_flags | 0x4000000);
        
        if (result == '\0') {
            void (*error_func)(void) = (void (*)(void))0x18012f0c0;
            error_func();
        }
    }
    
    // 重置事件状态
    reset_event_state();
}

/**
 * @brief 重置事件状态
 * @return void
 */
void reset_event_state(void)
{
    uint64_t engine_context = *(uint64_t *)global_engine_context;
    
    *(uint64_t *)((uint8_t *)engine_context + 0x1bec) = 0;
    *(uint64_t *)((uint8_t *)engine_context + 0x1be4) = 0;
    *(uint64_t *)((uint8_t *)engine_context + 0x1bdc) = 0;
    *(uint64_t *)((uint8_t *)engine_context + 0x1bd4) = 0;
    *(uint32_t *)((uint8_t *)engine_context + 0x1bd0) = 0;
    *(uint32_t *)((uint8_t *)engine_context + 0x1c44) = 0;
    *(uint32_t *)((uint8_t *)engine_context + 0x1c48) = 0;
    *(uint32_t *)((uint8_t *)engine_context + 0x1c4c) = 0;
    *(uint32_t *)((uint8_t *)engine_context + 0x1c50) = 0;
    *(uint32_t *)((uint8_t *)engine_context + 0x1c54) = 0x1000000;
}

/**
 * @brief 处理对象完成事件
 * @return uint64_t 事件结果
 */
uint64_t handle_object_completion_event(void)
{
    uint64_t engine_context = *(uint64_t *)global_engine_context;
    uint32_t *pool_count = (uint32_t *)((uint8_t *)engine_context + 0x1bb0);
    uint32_t *counter_ptr = (uint32_t *)((uint8_t *)engine_context + 0x1bc0);
    
    if (*pool_count <= *counter_ptr) {
        // 返回完成状态
        return 0x1000000;
    }
    
    // 获取对象ID
    uint32_t object_id = get_object_id_from_counter();
    
    // 更新对象引用
    update_object_references(object_id);
    
    // 处理完成事件
    process_completion_event(object_id);
    
    return 0;
}

/**
 * @brief 从计数器获取对象ID
 * @return uint32_t 对象ID
 */
uint32_t get_object_id_from_counter(void)
{
    uint32_t (*get_id_func)(void *, uint32_t, uint32_t) = (uint32_t (*)(void *, uint32_t, uint32_t))0x180121250;
    uint64_t object_context = *(uint64_t *)((uint8_t *)global_engine_context + 0x1af8);
    uint32_t counter_value = *(uint32_t *)((uint8_t *)object_context + 0x218);
    uint32_t array_offset = *(uint32_t *)((uint8_t *)object_context + 0x220) + -4 + (uint64_t)counter_value * 4;
    
    return get_id_func((void *)0x180a06588, 0, *(uint32_t *)((uint8_t *)object_context + array_offset));
}

/**
 * @brief 更新对象引用
 * @param object_id 对象ID
 * @return void
 */
void update_object_references(uint32_t object_id)
{
    uint64_t engine_context = *(uint64_t *)global_engine_context;
    uint32_t *property_counter = (uint32_t *)((uint8_t *)engine_context + 0x1b2c);
    
    if (*property_counter == object_id) {
        *(uint32_t *)((uint8_t *)engine_context + 0x1b34) = object_id;
    }
    
    uint32_t *state_counter = (uint32_t *)((uint8_t *)engine_context + 0x1b30);
    if (*state_counter == object_id) {
        *(uint8_t *)((uint8_t *)engine_context + 0x1b3f) = 1;
    }
}

/**
 * @brief 处理完成事件
 * @param object_id 对象ID
 * @return void
 */
void process_completion_event(uint32_t object_id)
{
    uint64_t engine_context = *(uint64_t *)global_engine_context;
    uint64_t *transform_table = (uint64_t *)global_transform_table;
    uint32_t *counter_ptr = (uint32_t *)((uint8_t *)engine_context + 0x1bc0);
    
    if ((*counter_ptr < *(uint32_t *)((uint8_t *)engine_context + 0x1bb0)) &&
        (*(uint32_t *)((uint8_t *)engine_context + 0x1bb8 + (uint64_t)*counter_ptr * 0x30) == object_id)) {
        
        void (*message_func)(void *, uint32_t, void *, uint64_t) = (void (*)(void *, uint32_t, void *, uint64_t))0x180121200;
        void *message_buffer = (void *)0x28;
        message_func(message_buffer, 0x14, (void *)0x180a064f0, object_id);
        
        char (*process_func)(void *, uint32_t, uint32_t) = (char (*)(void *, uint32_t, uint32_t))0x1801299b0;
        char result = process_func(message_buffer, 0, 0x4200141);
        
        if (result == '\0') {
            void (*error_func)(void) = (void (*)(void))0x18012f0c0;
            error_func();
        }
    }
    
    // 重置事件状态
    reset_event_state();
}

// 辅助函数声明
bool should_update_property(uint32_t property_value);
bool should_update_with_input(uint32_t input_value);
void store_index_data(uint64_t pool_base, uint64_t index, ObjectIndex *index_data, uint32_t object_id);
uint32_t calculate_new_capacity(uint32_t current_capacity);
bool should_update_existing_object(uint64_t *index_base, uint64_t index, uint32_t object_id);
void update_existing_object(uint64_t *index_base, uint64_t index, uint32_t object_id);
void expand_and_update_object(uint32_t object_id, uint64_t index, uint64_t param5, uint64_t param6, uint64_t param7, uint64_t param8, uint64_t param9);
uint32_t find_object_index(uint64_t target_object);
bool find_matching_object_in_pool(uint64_t *object_ptr, uint64_t target_object, uint32_t pool_count);
void update_pool_count(uint32_t new_count);
bool process_batch_object(uint64_t *object_ptr, uint32_t pool_count);
uint32_t get_object_id_from_counter(void);
void update_object_references(uint32_t object_id);
void process_completion_event(uint32_t object_id);