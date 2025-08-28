/**
 * 渲染系统高级初始化和配置模块
 * 
 * 本模块包含渲染系统的高级初始化、配置、资源管理和数据处理等功能
 * 涉及渲染系统初始化、资源分配、内存管理、状态配置等核心功能
 * 
 * 作者: Claude
 * 创建时间: 2025-08-28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

// 渲染配置常量定义
#define RENDER_CONFIG_FLAG_INITIALIZED  0x00000001
#define RENDER_CONFIG_FLAG_ACTIVE       0x00000002
#define RENDER_CONFIG_FLAG_VALID        0x00000004

// 内存管理常量
#define RENDER_MEMORY_POOL_SIZE         0x1c58
#define RENDER_MEMORY_ALIGNMENT         0x10
#define RENDER_MAX_INITIALIZATION_SIZE  0x100

// 渲染状态常量
#define RENDER_STATE_UNINITIALIZED      0x00000000
#define RENDER_STATE_INITIALIZING       0x00000001
#define RENDER_STATE_READY             0x00000002
#define RENDER_STATE_ACTIVE            0x00000003

// 渲染上下文结构体
typedef struct {
    void* device_context;
    void* render_surface;
    uint32_t config_flags;
    uint32_t state_flags;
    void* resource_pool;
    void* memory_manager;
    uint32_t initialization_count;
    char render_name[64];
} RenderContext;

// 渲染配置结构体
typedef struct {
    uint32_t initialization_params[0x100];
    uint32_t config_params[0x100];
    uint32_t state_params[0x100];
    void* function_table;
    uint32_t active_flags;
} RenderConfig;

// 渲染资源管理器结构体
typedef struct {
    void* resource_data;
    uint32_t resource_size;
    uint32_t resource_flags;
    uint32_t reference_count;
    void* allocation_table;
} RenderResourceManager;

// 全局渲染上下文
static RenderContext* g_render_context = NULL;

/**
 * @brief 渲染系统高级初始化器
 * @param param_1 渲染上下文指针
 * @param param_2 初始化参数
 * 
 * 该函数初始化渲染系统的高级配置和资源
 * 设置渲染参数、分配内存资源、初始化状态变量
 */
void render_system_advanced_initializer(undefined8 *param_1, int param_2) {
    if (!param_1) {
        return;
    }
    
    // 初始化渲染上下文
    RenderContext* context = (RenderContext*)param_1;
    
    // 设置安全标志
    uint64_t security_key = 0xfffffffffffffffe;
    
    // 初始化基本参数
    *param_1 = (undefined8)&render_system_function_table;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 3;
    
    // 设置函数表
    *param_1 = (undefined8)&render_system_main_table;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    
    // 线程安全初始化
    acquire_render_lock();
    *(undefined4 *)(param_1 + 0xf) = 0;
    release_render_lock();
    
    // 初始化参数数组
    uint32_t init_index = 0;
    do {
        param_1[(longlong)(int)init_index + 0x10] = 0;
        acquire_render_lock();
        *(undefined1 *)((longlong)param_1 + (longlong)(int)init_index + 0x880) = 1;
        release_render_lock();
        init_index++;
    } while (init_index < RENDER_MAX_INITIALIZATION_SIZE);
    
    // 初始化配置参数
    acquire_render_lock();
    *(undefined4 *)(param_1 + 0x130) = 0;
    release_render_lock();
    
    uint32_t config_index = 0;
    do {
        param_1[(longlong)(int)config_index + 0x131] = 0;
        acquire_render_lock();
        *(undefined1 *)((longlong)param_1 + (longlong)(int)config_index + 0x1188) = 1;
        release_render_lock();
        config_index++;
    } while (config_index < RENDER_MAX_INITIALIZATION_SIZE);
    
    // 初始化状态参数
    acquire_render_lock();
    *(undefined4 *)(param_1 + 0x251) = 0;
    release_render_lock();
    
    uint32_t state_index = 0;
    do {
        param_1[(longlong)(int)state_index + 0x252] = 0;
        acquire_render_lock();
        *(undefined1 *)((longlong)param_1 + (longlong)(int)state_index + 0x1a90) = 1;
        release_render_lock();
        state_index++;
    } while (state_index < RENDER_MAX_INITIALIZATION_SIZE);
    
    // 设置渲染状态
    param_1[0x372] = 0;
    param_1[0x373] = 0;
    param_1[0x374] = 0;
    *(undefined4 *)(param_1 + 0x375) = 3;
    
    // 初始化互斥锁
    initialize_render_mutex(param_1 + 0x376, 2);
    
    // 设置渲染参数
    param_1[0x380] = (undefined8)&render_system_parameter_table;
    param_1[0x381] = 0;
    *(undefined4 *)(param_1 + 0x382) = 0;
    
    // 配置渲染名称
    configure_render_name(param_1);
    
    // 设置初始化参数
    *(int *)(param_1 + 0x387) = param_2;
    
    // 配置渲染系统
    configure_render_system(param_1);
    
    // 验证初始化
    validate_render_initialization(param_1);
    
    // 清理临时资源
    cleanup_temporary_initialization_resources(security_key);
}

/**
 * @brief 渲染系统资源释放器
 * @param param_1 资源指针
 * @param param_2 释放标志
 * @return 释放后的资源指针
 * 
 * 该函数释放渲染系统的资源
 * 根据释放标志决定是否释放内存资源
 */
undefined8 render_system_resource_releaser(undefined8 param_1, ulonglong param_2) {
    // 执行资源清理操作
    cleanup_render_resources();
    
    // 根据标志释放内存
    if ((param_2 & 1) != 0) {
        free(param_1, RENDER_MEMORY_POOL_SIZE);
    }
    
    return param_1;
}

/**
 * @brief 渲染系统上下文清理器
 * @param param_1 渲染上下文指针
 * @param param_2 清理参数
 * @param param_3 附加参数
 * @param param_4 配置参数
 * 
 * 该函数清理渲染系统的上下文和资源
 * 释放内存、清理状态、重置配置
 */
void render_system_context_cleaner(undefined8 *param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    if (!param_1) {
        return;
    }
    
    // 设置安全标志
    undefined8 security_key = 0xfffffffffffffffe;
    
    // 重置函数表
    *param_1 = (undefined8)&render_system_main_table;
    
    // 执行状态清理
    cleanup_render_system_state();
    
    // 计算资源数量
    longlong *resource_ptr = param_1 + 0x372;
    longlong resource_count = param_1[0x373] - *resource_ptr >> 3;
    
    // 处理资源数据
    void* resource_data = NULL;
    if (resource_count == 0) {
        resource_data = 0;
    } else {
        resource_data = allocate_render_resource_data(resource_count * 8, *(uint *)(param_1 + 0x375) & 0xff, param_4, security_key);
    }
    
    // 移动资源数据
    longlong resource_start = *resource_ptr;
    if (resource_start != param_1[0x373]) {
        memmove(resource_data, resource_start, param_1[0x373] - resource_start);
    }
    
    // 释放资源数据
    if (resource_data != 0) {
        release_render_resource_data(resource_data);
    }
    
    // 执行回调函数
    if ((longlong *)param_1[0x389] != (longlong *)0x0) {
        execute_render_callback(param_1[0x389]);
    }
    
    // 重置参数表
    param_1[0x380] = (undefined8)&render_system_parameter_table;
    destroy_render_mutex();
    
    // 清理基础资源
    if (*resource_ptr == 0) {
        cleanup_render_parameter_block(param_1 + 0x251);
        cleanup_render_parameter_block(param_1 + 0x130);
        cleanup_render_parameter_block(param_1 + 0xf);
        
        // 执行额外回调
        if ((longlong *)param_1[0xe] != (longlong *)0x0) {
            execute_render_callback(param_1[0xe]);
        }
        if ((longlong *)param_1[0xd] != (longlong *)0x0) {
            execute_render_callback(param_1[0xd]);
        }
        
        // 重置主表
        *param_1 = (undefined8)&render_system_function_table;
        
        // 清理额外资源
        if (param_1[1] == 0) {
            return;
        }
        
        release_render_resource_data();
    }
    
    release_render_resource_data();
}

/**
 * @brief 渲染系统数据配置器
 * @param param_1 渲染上下文指针
 * @param param_2 配置参数
 * @param param_3 数据参数
 * @param param_4 标志参数
 * 
 * 该函数配置渲染系统的数据和参数
 * 处理渲染参数、数据转换、状态更新等操作
 */
void render_system_data_configurator(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined1 param_4) {
    if (!param_1) {
        return;
    }
    
    // 获取渲染数据
    void* render_data = get_render_data_from_context(param_1);
    
    // 计算配置数据数量
    longlong config_count = ((longlong)render_config_table_end - (longlong)render_config_table_start) / 0x38;
    uint32_t config_flags = render_config_flags;
    
    // 分配配置内存
    void* config_data = NULL;
    if (config_count == 0) {
        config_data = 0;
    } else {
        config_data = allocate_render_config_data(config_count * 0x38, config_flags & 0xff, param_4, 0, 0xfffffffffffffffe);
    }
    
    // 处理配置数据
    void* config_source = render_config_table_start;
    longlong config_end = config_count * 0x38 + config_data;
    longlong config_start = config_data;
    
    if (render_config_table_start != render_config_table_end) {
        void* config_ptr = render_config_table_start + 9;
        longlong current_config = config_data;
        
        do {
            process_render_config_data(config_data, config_ptr - 9);
            *(undefined4 *)(config_data + 0x20) = config_ptr[-1];
            *(undefined4 *)(config_data + 0x24) = *config_ptr;
            *(undefined4 *)(config_data + 0x28) = config_ptr[1];
            *(undefined1 *)(config_data + 0x2c) = *(undefined1 *)(config_ptr + 2);
            *(undefined1 *)(config_data + 0x2d) = *(undefined1 *)((longlong)config_ptr + 9);
            *(undefined8 *)(config_data + 0x30) = *(undefined8 *)(config_ptr + 3);
            
            config_data = config_data + 0x38;
            config_ptr = config_ptr + 0xe;
        } while (config_ptr + 5 != config_source);
    }
    
    // 处理配置项
    uint32_t process_flag = 1;
    int process_index = 0;
    
    if ((config_data - config_start) / 0x38 != 0) {
        longlong item_index = 0;
        do {
            // 分配配置项内存
            void* config_item = allocate_render_config_item(0x560, 8, 3, process_flag);
            
            // 处理配置项数据
            longlong item_offset = item_index + config_start;
            process_render_config_item_data(config_data, item_offset);
            
            // 提取配置参数
            uint32_t config_param1 = *(undefined4 *)(item_offset + 0x20);
            uint32_t config_param2 = *(undefined4 *)(item_offset + 0x24);
            uint32_t config_param3 = *(undefined4 *)(item_offset + 0x28);
            uint8_t config_flag1 = *(undefined1 *)(item_offset + 0x2c);
            uint8_t config_flag2 = *(undefined1 *)(item_offset + 0x2d);
            uint64_t config_value = *(undefined8 *)(item_offset + 0x30);
            
            // 处理配置项
            void* processed_item = process_render_config_item(config_item, config_data);
            
            // 插入配置项到渲染上下文
            insert_config_item_to_context(param_1, processed_item);
            
            process_index++;
            item_index = item_index + 0x38;
        } while ((ulonglong)(longlong)process_index < (ulonglong)((config_data - config_start) / 0x38));
    }
    
    // 清理配置数据
    cleanup_render_config_data(&config_start);
}

/**
 * @brief 渲染系统参数计算器
 * @param param_1 渲染上下文指针
 * @param param_2 参数数据指针
 * @param param_3 输出参数指针
 * @param param_4 输出数据指针
 * @param param_5 计算参数
 * @param param_6 浮点参数1
 * @param param_7 浮点参数2
 * 
 * 该函数计算渲染系统的参数和数据
 * 处理复杂的参数计算、数据转换、状态更新等操作
 */
void render_system_parameter_calculator(longlong param_1, longlong *param_2, undefined8 *param_3, undefined8 *param_4,
                                      longlong param_5, float param_6, float param_7) {
    if (!param_1 || !param_2 || !param_3 || !param_4) {
        return;
    }
    
    // 获取渲染数据
    void* render_data = get_render_data_from_context(param_2);
    
    // 提取基本参数
    float param_x = *(float *)(render_data + 2);
    float param_y = *(float *)((longlong)render_data + 0x14);
    float param_z = *(float *)(render_data + 3);
    uint32_t param_flags = *(undefined4 *)((longlong)render_data + 0x1c);
    
    // 提取扩展参数
    uint64_t extended_param1 = render_data[6];
    uint64_t extended_param2 = render_data[7];
    uint64_t base_param1 = *render_data;
    uint64_t base_param2 = render_data[1];
    uint64_t base_param3 = render_data[4];
    uint64_t base_param4 = render_data[5];
    
    // 设置输出参数
    *param_4 = extended_param1;
    param_4[1] = extended_param2;
    
    // 计算距离参数
    float distance = sqrtf(param_x * param_x + param_y * param_y + param_z * param_z);
    *(float *)((longlong)param_4 + 0xc) = distance * 1.5f;
    
    // 处理渲染对象数据
    void* object_data = get_render_object_data(param_2);
    uint64_t object_params[8];
    
    // 提取对象参数
    object_params[0] = *object_data;
    object_params[1] = object_data[1];
    object_params[2] = object_data[2];
    object_params[3] = object_data[3];
    object_params[4] = object_data[4];
    object_params[5] = object_data[5];
    object_params[6] = object_data[6];
    object_params[7] = object_data[7];
    
    // 设置对象参数到输出
    param_4[2] = object_params[0];
    param_4[3] = object_params[1];
    param_4[4] = object_params[2];
    param_4[5] = object_params[3];
    param_4[6] = object_params[4];
    param_4[7] = object_params[5];
    param_4[8] = object_params[6];
    param_4[9] = object_params[7];
    
    // 设置基础参数到输出
    *param_3 = object_params[0];
    param_3[1] = object_params[1];
    param_3[8] = base_param1;
    param_3[9] = base_param2;
    *(float *)(param_3 + 10) = param_x;
    *(float *)((longlong)param_3 + 0x54) = param_y;
    *(float *)(param_3 + 0xb) = param_z;
    *(undefined4 *)((longlong)param_3 + 0x5c) = param_flags;
    
    // 设置扩展参数到输出
    param_3[2] = object_params[2];
    param_3[3] = object_params[3];
    param_3[4] = object_params[4];
    param_3[5] = object_params[5];
    param_3[0xc] = base_param3;
    param_3[0xd] = base_param4;
    param_3[6] = object_params[6];
    param_3[7] = object_params[7];
    param_3[0xe] = extended_param1;
    param_3[0xf] = extended_param2;
    
    // 计算位置参数
    longlong position_param1, position_param2;
    if ((((*(float *)(param_2 + 10) == 0.0f) && (*(float *)((longlong)param_2 + 0x54) == 0.0f)) &&
        (*(float *)(param_2 + 0xb) == 0.0f)) && (*(float *)((longlong)param_2 + 0x5c) == 0.0f)) {
        position_param1 = 0x3f8000003f800000;
        position_param2 = 0;
    } else {
        position_param1 = param_2[10];
        position_param2 = param_2[0xb];
    }
    
    param_3[0x10] = position_param1;
    param_3[0x11] = position_param2;
    
    // 处理渲染状态参数
    longlong render_state = param_2[0x2b];
    uint32_t state_params[4];
    
    if (*(longlong *)(render_state + 0xb8) == 0) {
        state_params[0] = 0;
        state_params[1] = 0;
        state_params[2] = 0;
        state_params[3] = 0;
    } else {
        // 提取状态参数
        longlong state_index = (longlong)*(int *)(param_1 + 0x1c38);
        longlong state_data = *(longlong *)(*(longlong *)(render_state + 0xb8) + 0x280);
        
        if (*(char *)(state_data + state_index * 0x14) != '\0') {
            uint64_t state_value1 = *(undefined8 *)(state_data + 4 + state_index * 0x14);
            uint64_t state_value2 = *(undefined8 *)(state_data + 0xc + state_index * 0x14);
            state_params[0] = (undefined4)state_value1;
            state_params[1] = (undefined4)((ulonglong)state_value1 >> 0x20);
            state_params[2] = (undefined4)state_value2;
            state_params[3] = (undefined4)((ulonglong)state_value2 >> 0x20);
        }
    }
    
    // 设置状态参数到输出
    *(undefined4 *)(param_3 + 0x12) = state_params[0];
    *(undefined4 *)((longlong)param_3 + 0x94) = state_params[1];
    *(undefined4 *)(param_3 + 0x13) = state_params[2];
    *(undefined4 *)((longlong)param_3 + 0x9c) = state_params[3];
    
    // 处理附加参数
    uint64_t additional_params[2];
    if (((*(byte *)(param_2 + 0xe) & 2) == 0) || (*(longlong *)(render_state + 200) == 0)) {
        additional_params[0] = 0;
        additional_params[1] = 0;
    } else {
        longlong add_index = (longlong)*(int *)(param_1 + 0x1c38);
        longlong add_data = *(longlong *)(*(longlong *)(render_state + 200) + 0x280);
        
        if (*(char *)(add_data + add_index * 0x14) != '\0') {
            additional_params[1] = *(undefined8 *)(add_data + 4 + add_index * 0x14);
            additional_params[0] = *(undefined8 *)(add_data + 0xc + add_index * 0x14);
        }
    }
    
    param_3[0x16] = additional_params[0];
    param_3[0x17] = additional_params[1];
    
    // 处理扩展参数
    uint64_t extended_params[2];
    if (((*(byte *)(param_2 + 0xe) & 4) != 0) && (*(longlong *)(render_state + 0xd8) != 0)) {
        longlong ext_index = (longlong)*(int *)(param_1 + 0x1c38);
        longlong ext_data = *(longlong *)(*(longlong *)(render_state + 0xd8) + 0x280);
        
        if (*(char *)(ext_data + ext_index * 0x14) != '\0') {
            extended_params[1] = *(undefined8 *)(ext_data + 4 + ext_index * 0x14);
            extended_params[0] = *(undefined8 *)(ext_data + 0xc + ext_index * 0x14);
        }
    } else {
        extended_params[0] = 0;
        extended_params[1] = 0;
    }
    
    // 设置扩展参数到输出
    param_3[0x14] = extended_params[0];
    param_3[0x15] = extended_params[1];
    
    // 计算渲染参数
    float render_param1 = *(float *)(param_2 + 0x51);
    float render_param2 = *(float *)((longlong)param_2 + 0x28c);
    float scale_param1 = *(float *)(render_state + 0x2ac);
    float scale_param2 = *(float *)(render_state + 0x2b0);
    float alpha_param = 1.0f;
    
    // 设置渲染参数到输出
    *(float *)(param_3 + 0x1a) = *(float *)((longlong)param_2 + 0x284) * *(float *)(render_state + 0x2a8);
    *(float *)((longlong)param_3 + 0xd4) = render_param1 * scale_param1;
    *(float *)(param_3 + 0x1b) = render_param2 * scale_param2;
    *(undefined4 *)((longlong)param_3 + 0xdc) = 0x7f7fffff;
    *(float *)((longlong)param_3 + 0xdc) = *(float *)(param_2 + 0x52) * *(float *)(render_state + 0x2b4);
    
    // 计算透明度参数
    if (0.0f < *(float *)((longlong)param_2 + 100)) {
        alpha_param = 1.0f - *(float *)(param_2 + 6) / (*(float *)((longlong)param_2 + 100) + 1e-9f);
        if (0.0f <= alpha_param) {
            if (1.0f <= alpha_param) {
                alpha_param = 1.0f;
            }
        } else {
            alpha_param = 0.0f;
        }
    }
    
    // 设置透明度参数
    float alpha_param2 = *(float *)(param_2 + 0xc);
    if (alpha_param2 == 0.0f) {
        alpha_param2 = *(float *)(render_state + 0x298);
    }
    *(float *)(param_3 + 0x1c) = alpha_param2 * alpha_param;
    
    // 计算距离衰减参数
    float coord_x = (float)((uint)extended_param1 >> 0x20);
    float coord_y = (float)extended_param1;
    float coord_z = (float)extended_param2;
    float distance_factor = -(((*(float *)(param_5 + 0x18) * coord_x + *(float *)(param_5 + 8) * coord_y +
                              *(float *)(param_5 + 0x28) * coord_z + *(float *)(param_5 + 0x38)) * param_7) /
                           distance;
    
    // 计算最终参数
    float float_param = (float)(((uint)distance_factor & 0x807fffff) + 0x3f800000);
    param_6 = (((2.0f - float_param * 0.33333334f) * float_param - 0.6666667f) +
              (float)(int)(((int)distance_factor >> 0x17 & 0xffU) - 0x80)) * param_6;
    
    if (param_6 <= 0.0f) {
        param_6 = 0.0f;
    }
    param_6 = param_6 + 1.0f;
    *(float *)((longlong)param_3 + 0xc4) = param_6;
    
    // 处理特殊渲染参数
    void* global_config = get_global_render_config();
    if (*(int *)(global_config + 0x700) == 1) {
        *(float *)((longlong)param_3 + 0xc4) = param_6 + param_6;
    }
    
    // 设置渲染状态参数
    *(undefined4 *)(param_3 + 0x19) = *(undefined4 *)(render_state + 0x278);
    *(undefined4 *)((longlong)param_3 + 0xcc) = *(undefined4 *)(render_state + 0x268);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(render_state + 0x270);
    *(undefined4 *)((longlong)param_3 + 0xe4) = *(undefined4 *)(render_state + 0x274);
    
    // 处理渲染对象更新
    if (param_2[0x2d] != *(longlong *)(param_2[0x2b] + 0x140)) {
        update_render_object(param_2);
    }
    
    // 设置最终参数到输出
    longlong final_param1 = param_2[0x10];
    param_3[0x1e] = param_2[0xf];
    param_3[0x1f] = final_param1;
    
    // 处理可见性参数
    uint32_t visibility_param = 0;
    if (*(char *)((longlong)param_2 + 0x74) != '\0') {
        visibility_param = *(undefined4 *)(param_2 + 0x15);
    }
    *(undefined4 *)((longlong)param_3 + 0xfc) = visibility_param;
    
    // 处理渲染标志
    uint32_t render_flags = *(uint *)(param_2 + 0xe);
    if ((render_flags >> 0xb & 1) != 0) {
        float intensity_param = *(float *)((longlong)param_3 + 0xc4);
        if (3.0f <= intensity_param) {
            intensity_param = 3.0f;
        }
        *(float *)((longlong)param_3 + 0xc4) = intensity_param;
        render_flags = *(uint *)(param_2 + 0xe);
    }
    
    *(uint *)(param_3 + 0x1d) = render_flags;
    
    // 设置附加参数到输出
    longlong additional_param1 = param_2[0x12];
    param_3[0x20] = param_2[0x11];
    param_3[0x21] = additional_param1;
    
    longlong additional_param2 = param_2[0x14];
    param_3[0x22] = param_2[0x13];
    param_3[0x23] = additional_param2;
    
    longlong additional_param3 = param_2[0x16];
    param_3[0x24] = param_2[0x15];
    param_3[0x25] = additional_param3;
    
    longlong additional_param4 = param_2[0x18];
    param_3[0x26] = param_2[0x17];
    param_3[0x27] = additional_param4;
    
    longlong additional_param5 = param_2[0x1a];
    param_3[0x28] = param_2[0x19];
    param_3[0x29] = additional_param5;
    
    longlong additional_param6 = param_2[0x1c];
    param_3[0x2a] = param_2[0x1b];
    param_3[0x2b] = additional_param6;
    
    longlong additional_param7 = param_2[0x1e];
    param_3[0x2c] = param_2[0x1d];
    param_3[0x2d] = additional_param7;
    
    longlong additional_param8 = param_2[0x20];
    param_3[0x2e] = param_2[0x1f];
    param_3[0x2f] = additional_param8;
    
    longlong additional_param9 = param_2[0x22];
    param_3[0x30] = param_2[0x21];
    param_3[0x31] = additional_param9;
    
    longlong additional_param10 = param_2[0x24];
    param_3[0x32] = param_2[0x23];
    param_3[0x33] = additional_param10;
    
    longlong additional_param11 = param_2[0x26];
    param_3[0x34] = param_2[0x25];
    param_3[0x35] = additional_param11;
    
    // 处理特殊渲染标志
    if (((render_flags >> 0xc & 1) != 0) && (*(float *)(param_3 + 0x24) == 0.0f)) {
        *(uint *)(param_3 + 0x1d) = render_flags & 0xffffefff;
    }
}

// 辅助函数声明
static void acquire_render_lock(void);
static void release_render_lock(void);
static void initialize_render_mutex(void* mutex_ptr, int type);
static void destroy_render_mutex(void);
static void configure_render_name(undefined8* context);
static void configure_render_system(undefined8* context);
static void validate_render_initialization(undefined8* context);
static void cleanup_temporary_initialization_resources(uint64_t security_key);
static void cleanup_render_resources(void);
static void cleanup_render_system_state(void);
static void* allocate_render_resource_data(size_t size, uint8_t flags, undefined8 param, undefined8 security_key);
static void release_render_resource_data(void* data);
static void execute_render_callback(undefined8 callback_ptr);
static void cleanup_render_parameter_block(undefined8* param_block);
static void* get_render_data_from_context(longlong context);
static void process_render_config_data(void* config_data, void* source_data);
static void* allocate_render_config_data(size_t size, uint8_t flags, undefined8 param, undefined8 param2, undefined8 security_key);
static void process_render_config_item_data(void* config_data, void* item_data);
static void* process_render_config_item(void* config_item, void* config_data);
static void insert_config_item_to_context(undefined8 context, void* config_item);
static void cleanup_render_config_data(void* config_data);
static void* get_render_object_data(longlong* context);
static void* get_global_render_config(void);
static void update_render_object(longlong* context);