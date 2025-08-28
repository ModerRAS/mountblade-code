#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统高级特效和材质处理模块
 * 包含18个核心函数，涵盖渲染特效处理、材质管理、状态更新、渲染控制等高级渲染功能
 * 主要函数包括：
 * - process_rendering_effects: 处理渲染特效
 * - update_rendering_materials: 更新渲染材质
 * - apply_rendering_states: 应用渲染状态
 * - process_rendering_parameters: 处理渲染参数
 * - update_rendering_transforms: 更新渲染变换
 * - process_rendering_batches: 处理渲染批次
 * - update_rendering_textures: 更新渲染纹理
 * - apply_rendering_shaders: 应用渲染着色器
 * - process_rendering_lights: 处理渲染光照
 * - update_rendering_cameras: 更新渲染相机
 * - process_rendering_shadows: 处理渲染阴影
 * - apply_rendering_post_effects: 应用渲染后处理效果
 * - update_rendering_buffers: 更新渲染缓冲区
 * - process_rendering_targets: 处理渲染目标
 * - apply_rendering_filters: 应用渲染过滤器
 * - update_rendering_quality: 更新渲染质量
 * - process_rendering_debug: 处理渲染调试
 * - cleanup_rendering_resources: 清理渲染资源
 */

// 渲染特效处理器常量定义
#define RENDER_EFFECT_FLAG_NONE           0x00    // 无特效标志
#define RENDER_EFFECT_FLAG_BASIC           0x01    // 基础特效标志
#define RENDER_EFFECT_FLAG_ADVANCED        0x02    // 高级特效标志
#define RENDER_EFFECT_FLAG_PARTICLE        0x04    // 粒子特效标志
#define RENDER_EFFECT_FLAG_LIGHTING        0x08    // 光照特效标志
#define RENDER_EFFECT_FLAG_SHADOW          0x10    // 阴影特效标志
#define RENDER_EFFECT_FLAG_POST_PROCESS    0x20    // 后处理特效标志
#define RENDER_EFFECT_FLAG_ALL             0x3F    // 所有特效标志

// 渲染状态常量定义
#define RENDER_STATE_INACTIVE              0x00    // 渲染状态：未激活
#define RENDER_STATE_ACTIVE               0x01    // 渲染状态：激活
#define RENDER_STATE_PAUSED               0x02    // 渲染状态：暂停
#define RENDER_STATE_ERROR                0x03    // 渲染状态：错误

// 渲染质量级别定义
#define RENDER_QUALITY_LOW                0x00    // 渲染质量：低
#define RENDER_QUALITY_MEDIUM             0x01    // 渲染质量：中
#define RENDER_QUALITY_HIGH               0x02    // 渲染质量：高
#define RENDER_QUALITY_ULTRA              0x03    // 渲染质量：超高

// 渲染缓冲区大小定义
#define RENDER_BUFFER_SIZE_SMALL          256     // 渲染缓冲区：小
#define RENDER_BUFFER_SIZE_MEDIUM         512     // 渲染缓冲区：中
#define RENDER_BUFFER_SIZE_LARGE          1024    // 渲染缓冲区：大
#define RENDER_BUFFER_SIZE_EXTRA_LARGE    2048    // 渲染缓冲区：超大

// 渲染系统全局数据指针
static void* render_system_global_data = NULL;
static uint32_t render_effect_flags = RENDER_EFFECT_FLAG_NONE;
static int render_current_state = RENDER_STATE_INACTIVE;
static int render_quality_level = RENDER_QUALITY_MEDIUM;

/**
 * 处理渲染特效
 * 根据特效标志位应用相应的渲染特效
 * 
 * @param render_context 渲染上下文指针
 * @param effect_type 特效类型索引
 * @param effect_params 特效参数
 * @param effect_flags 特效标志位组合
 */
void process_rendering_effects(int64_t render_context, int effect_type, uint32_t effect_params, uint32_t effect_flags)
{
    // 渲染特效数据数组
    void* effect_data_array[2];
    
    // 获取特效数据
    effect_data_array[0] = *(void**)((uintptr_t)render_system_global_data + 0x1e08 + (int64_t)effect_type * 8);
    
    // 根据特效标志位应用相应的特效
    if ((effect_flags & RENDER_EFFECT_FLAG_BASIC) != 0) {
        // 应用基础特效
        void* effect_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0xd0);
        ((void(*)(void*, uint32_t, int, void**))effect_processor)
            (*(int64_t**)(render_context + 0x8400), effect_params, 1, effect_data_array);
    }
    
    if ((effect_flags & RENDER_EFFECT_FLAG_ADVANCED) != 0) {
        // 应用高级特效
        void* effect_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x208);
        ((void(*)(void*, uint32_t, int, void**))effect_processor)
            (*(int64_t**)(render_context + 0x8400), effect_params, 1, effect_data_array);
    }
    
    if ((effect_flags & RENDER_EFFECT_FLAG_PARTICLE) != 0) {
        // 应用粒子特效
        void* effect_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x1e8);
        ((void(*)(void*, uint32_t, int, void**))effect_processor)
            (*(int64_t**)(render_context + 0x8400), effect_params, 1, effect_data_array);
    }
    
    if ((effect_flags & RENDER_EFFECT_FLAG_LIGHTING) != 0) {
        // 应用光照特效
        void* effect_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x100);
        ((void(*)(void*, uint32_t, int, void**))effect_processor)
            (*(int64_t**)(render_context + 0x8400), effect_params, 1, effect_data_array);
    }
    
    if ((effect_flags & RENDER_EFFECT_FLAG_SHADOW) != 0) {
        // 应用阴影特效
        void* effect_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x50);
        ((void(*)(void*, uint32_t, int, void**))effect_processor)
            (*(int64_t**)(render_context + 0x8400), effect_params, 1, effect_data_array);
    }
    
    if ((effect_flags & RENDER_EFFECT_FLAG_POST_PROCESS) != 0) {
        // 应用后处理特效
        void* effect_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x230);
        ((void(*)(void*, uint32_t, int, void**))effect_processor)
            (*(int64_t**)(render_context + 0x8400), effect_params, 1, effect_data_array);
    }
}

/**
 * 更新渲染材质
 * 根据材质数据更新渲染材质参数
 * 
 * @param render_context 渲染上下文指针
 * @param material_data 材质数据指针
 */
void update_rendering_materials(int64_t render_context, uint64_t* material_data)
{
    int64_t material_index;
    uint8_t material_type;
    int64_t material_base;
    uint8_t stack_buffer[32];
    uint32_t material_params[4];
    uint64_t material_checksum;
    
    // 计算材质数据校验和
    material_checksum = *(uint64_t*)0x180bf00a8 ^ (uint64_t)(uintptr_t)stack_buffer;
    
    // 获取材质索引
    material_index = *(int64_t*)
        ((uintptr_t)render_system_global_data + 0x1e50 +
         ((uint64_t)*(uint8_t*)((int64_t)material_data + 0x16) +
          ((uint64_t)*(uint8_t*)((int64_t)material_data + 0x14) +
           ((uint64_t)*(uint8_t*)((int64_t)material_data + 0x15) +
            (uint64_t)*(uint8_t*)((int64_t)material_data + 0x12) * 4) * 2) * 3 +
          (uint64_t)*(uint8_t*)((int64_t)material_data + 0x13)) * 2) * 8);
    
    material_base = (int64_t)render_system_global_data;
    
    // 更新主材质
    if (material_index != *(int64_t*)(render_context + 0x8418)) {
        void* material_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x158);
        ((void(*)(void*, int64_t))material_processor)
            (*(int64_t**)(render_context + 0x8400), material_index);
        material_base = (int64_t)render_system_global_data;
        *(int64_t*)(render_context + 0x8418) = material_index;
    }
    
    // 获取材质类型
    if (*(char*)((int64_t)material_data + 0x11) == '\0') {
        material_type = *(uint8_t*)((int64_t)material_data + 0xf);
    } else {
        material_type = *(uint8_t*)(material_data + 2);
    }
    
    // 获取子材质索引
    material_index = *(int64_t*)
        (material_base + 0x21b8 +
         ((uint64_t)*(uint8_t*)((int64_t)material_data + 0xe) +
          ((uint64_t)*(uint8_t*)((int64_t)material_data + 0xd) +
           ((uint64_t)*(uint8_t*)((int64_t)material_data + 0xc) +
            ((uint64_t)*(uint8_t*)((int64_t)material_data + 0xb) +
             ((uint64_t)*(uint8_t*)((int64_t)material_data + 10) +
              ((uint64_t)*(uint8_t*)((int64_t)material_data + 9) + 
               (uint64_t)*(uint8_t*)(material_data + 1) * 2) * 8) * 2) * 8) * 2) * 8);
    
    // 更新子材质
    if ((material_index != *(int64_t*)(render_context + 0x8420)) || 
        ((uint32_t)material_type != *(uint32_t*)(render_context + 0x8428))) {
        void* material_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x120);
        ((void(*)(void*, int64_t, uint8_t))material_processor)
            (*(int64_t**)(render_context + 0x8400), material_index, material_type);
        material_base = (int64_t)render_system_global_data;
        *(int64_t*)(render_context + 0x8420) = material_index;
        *(uint32_t*)(render_context + 0x8428) = (uint32_t)material_type;
    }
    
    // 更新纹理材质
    material_index = *(int64_t*)(material_base + 0x2150 + (uint64_t)*(uint8_t*)(material_data + 7) * 8);
    if (material_index != *(int64_t*)(render_context + 0x8430)) {
        // 设置默认材质参数
        material_params[0] = 0x3f800000;  // 1.0f
        material_params[1] = 0x3f800000;  // 1.0f
        material_params[2] = 0x3f800000;  // 1.0f
        material_params[3] = 0x3f800000;  // 1.0f
        
        void* texture_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x118);
        ((void(*)(void*, int64_t, uint32_t*, uint32_t))texture_processor)
            (*(int64_t**)(render_context + 0x8400), material_index, &material_params[0], 0xffffffff);
        material_base = (int64_t)render_system_global_data;
        *(int64_t*)(render_context + 0x8430) = material_index;
    }
    
    // 更新着色器材质
    material_index = *(int64_t*)(material_base + 0x1d88 + (uint64_t)*(uint8_t*)((int64_t)material_data + 0x39) * 8);
    if (*(int64_t*)(render_context + 0x8410) != material_index) {
        void* shader_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x88);
        ((void(*)(void*, int64_t))shader_processor)
            (*(int64_t**)(render_context + 0x8400), material_index);
        *(int64_t*)(render_context + 0x8410) = material_index;
    }
    
    // 处理材质特效和纹理参数
    apply_rendering_states(render_context, *(uint8_t*)((int64_t)material_data + 0x17));
    process_rendering_parameters(render_context, *material_data, *(uint8_t*)((int64_t)material_data + 0x3b),
                                *(uint8_t*)((int64_t)material_data + 0x3a));
    
    // 清理临时缓冲区
    cleanup_rendering_resources(material_checksum ^ (uint64_t)(uintptr_t)stack_buffer);
}

/**
 * 应用渲染状态
 * 根据状态类型设置相应的渲染状态
 * 
 * @param render_context 渲染上下文指针
 * @param state_type 状态类型
 */
void apply_rendering_states(int64_t render_context, uint8_t state_type)
{
    int render_state;
    
    render_state = 0;
    switch(state_type) {
    case 1:
        render_state = 1;
        break;
    case 2:
        render_state = 2;
        break;
    case 3:
        render_state = 3;
        break;
    case 4:
        render_state = 4;
        break;
    case 5:
        render_state = 5;
        break;
    case 6:
        render_state = 0x23;
        break;
    }
    
    if (render_state != *(int*)(render_context + 0x8408)) {
        void* state_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0xc0);
        ((void(*)(void*, int))state_processor)
            (*(int64_t**)(render_context + 0x8400), render_state);
        *(int*)(render_context + 0x8408) = render_state;
    }
}

/**
 * 处理渲染参数
 * 处理渲染系统的高级参数和变换数据
 * 
 * @param render_context 渲染上下文指针
 * @param param_data 参数数据指针
 * @param transform_data 变换数据指针
 */
void process_rendering_parameters(int64_t render_context, uint64_t* param_data, uint32_t* transform_data)
{
    uint8_t stack_buffer[32];
    uint32_t transform_params[4];
    uint64_t param_values[2];
    uint32_t param_flags[2];
    uint64_t param_checksum;
    
    // 计算参数校验和
    param_checksum = *(uint64_t*)0x180bf00a8 ^ (uint64_t)(uintptr_t)stack_buffer;
    
    // 提取参数值
    param_values[0] = *param_data;
    param_values[1] = param_data[1];
    param_flags[0] = *(uint32_t*)((int64_t)param_data + 0x14);
    param_flags[1] = *(uint32_t*)(param_data + 2);
    
    // 应用参数变换
    void* transform_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x160);
    ((void(*)(void*, int, uint64_t*))transform_processor)
        (*(int64_t**)(render_context + 0x8400), 1, &param_values[0]);
    
    // 应用变换数据
    transform_params[3] = transform_data[3];
    transform_params[1] = transform_data[1];
    transform_params[2] = transform_data[2];
    transform_params[0] = *transform_data;
    
    void* param_processor = *(void**)(*(int64_t**)(render_context + 0x8400) + 0x168);
    ((void(*)(void*, int, uint32_t*))param_processor)
        (*(int64_t**)(render_context + 0x8400), 1, &transform_params[0]);
    
    // 清理资源
    cleanup_rendering_resources(param_checksum ^ (uint64_t)(uintptr_t)stack_buffer);
}

/**
 * 更新渲染变换
 * 根据变换参数更新渲染对象的变换矩阵
 * 
 * @param render_context 渲染上下文指针
 * @param transform_type 变换类型
 * @param transform_matrix 变换矩阵指针
 * @param transform_params 变换参数
 * @param quality_params 质量参数
 */
void update_rendering_transforms(int64_t render_context, int transform_type, int64_t transform_matrix, 
                                 int transform_params, int quality_params)
{
    int64_t matrix_data;
    int64_t shader_data;
    int64_t texture_data;
    int64_t effect_data;
    
    effect_data = (int64_t)transform_type;
    texture_data = 0;
    shader_data = texture_data;
    
    // 特殊处理类型33的变换
    if (transform_type == 0x21) {
        if (transform_matrix != 0) {
            *(int64_t*)(transform_matrix + 0x340) = (int64_t)*(int*)((uintptr_t)render_system_global_data + 0x224);
            shader_data = transform_matrix + 0x1a0;
        }
    } else if ((((transform_matrix != 0) && (matrix_data = get_render_matrix_data(), matrix_data != 0)) &&
               (shader_data = matrix_data, *(int64_t*)(matrix_data + 8) == 0)) && (*(int64_t*)(matrix_data + 0x10) == 0)) {
        shader_data = 0;
    }
    
    // 检查是否需要更新变换
    if (((*(int64_t*)(render_context + 0x8438 + effect_data * 8) != shader_data) ||
        (*(int*)(render_context + 0x8838 + effect_data * 4) != quality_params)) ||
       (*(int*)(render_context + 0x8a38 + effect_data * 4) != transform_params)) {
        
        if (shader_data != 0) {
            if ((*(int64_t*)(shader_data + 8) == 0) && (*(int64_t*)(shader_data + 0x10) == 0)) {
                return;
            }
            if (shader_data != 0) {
                if (quality_params == -1) {
                    texture_data = *(int64_t*)(shader_data + 0x10);
                } else {
                    texture_data = *(int64_t*)(*(int64_t*)(shader_data + 0x18) + (int64_t)quality_params * 8);
                }
            }
        }
        
        // 应用变换矩阵
        apply_transform_matrix(render_context, transform_type, texture_data, transform_params);
        *(int64_t*)(render_context + 0x8438 + effect_data * 8) = shader_data;
        *(int*)(render_context + 0x8838 + effect_data * 4) = quality_params;
        *(int*)(render_context + 0x8a38 + effect_data * 4) = transform_params;
        *(int*)(render_context + 0x82b4) = *(int*)(render_context + 0x82b4) + 1;
    }
}

/**
 * 处理渲染批次
 * 批量处理渲染操作，提高渲染效率
 * 
 * @param render_context 渲染上下文指针
 * @param batch_data 批次数据指针
 */
void process_rendering_batches(int64_t render_context, int64_t batch_data)
{
    uint32_t batch_id;
    int64_t render_object;
    uint32_t* render_flags;
    uint16_t* render_params;
    int buffer_size;
    int object_count;
    void* object_data;
    uint32_t* quality_flags;
    uint8_t batch_buffer[40];
    uint64_t batch_checksum;
    
    // 初始化批次数据
    batch_checksum = *(uint64_t*)0x180bf00a8 ^ (uint64_t)(uintptr_t)batch_buffer;
    object_count = 0;
    buffer_size = *(int*)(batch_data + 0x10) + 0x14;
    
    // 准备批次缓冲区
    prepare_render_buffer(batch_data, buffer_size);
    render_flags = (uint32_t*)((uint64_t)*(uint32_t*)(batch_data + 0x10) + *(int64_t*)(batch_data + 8));
    
    // 设置批次头信息
    *render_flags = 0x74786554;  // "Text"
    render_flags[1] = 0x20657275;  // "ure "
    render_flags[2] = 0x746f6c53;  // "Slot"
    render_flags[3] = 0x73694c20;  // "Lis "
    render_flags[4] = 0xa3a2074;  // 批次结束标记
    *(uint8_t*)(render_flags + 5) = 0;
    *(int*)(batch_data + 0x10) = buffer_size;
    
    // 处理渲染对象
    quality_flags = (uint32_t*)(render_context + 0x8a38);
    render_object = (int64_t*)(render_context + 0x8438);
    
    do {
        if (*render_object != 0) {
            // 获取对象数据
            object_data = get_render_object_data(*render_object, batch_buffer);
            void* object_name = &DAT_18098bc73;
            if (*(void**)((int64_t)object_data + 8) != (void*)0x0) {
                object_name = *(void**)((int64_t)object_data + 8);
            }
            
            // 添加对象到批次
            add_object_to_batch(batch_data, &UNK_180a172e0, object_count, object_name);
            batch_buffer[0] = &UNK_18098bcb0;
            batch_id = *quality_flags;
            
            // 根据质量标志处理不同的渲染属性
            if ((batch_id & 1) != 0) {
                buffer_size = *(int*)(batch_data + 0x10) + 7;
                prepare_render_buffer(batch_data, buffer_size);
                *(uint64_t*)((uint64_t)*(uint32_t*)(batch_data + 0x10) + *(int64_t*)(batch_data + 8)) = 0x20786574726576;  // "vertex "
                *(int*)(batch_data + 0x10) = buffer_size;
            }
            
            if ((batch_id & 2) != 0) {
                buffer_size = *(int*)(batch_data + 0x10) + 7;
                prepare_render_buffer(batch_data, buffer_size);
                *(uint64_t*)((uint64_t)*(uint32_t*)(batch_data + 0x10) + *(int64_t*)(batch_data + 8)) = 0x206e69616d6f64;  // "domain "
                *(int*)(batch_data + 0x10) = buffer_size;
            }
            
            if ((batch_id & 4) != 0) {
                buffer_size = *(int*)(batch_data + 0x10) + 5;
                prepare_render_buffer(batch_data, buffer_size);
                render_flags = (uint32_t*)((uint64_t)*(uint32_t*)(batch_data + 0x10) + *(int64_t*)(batch_data + 8));
                *render_flags = 0x6c6c7568;  // "hull"
                *(uint16_t*)(render_flags + 1) = 0x20;
                *(int*)(batch_data + 0x10) = buffer_size;
            }
            
            if ((batch_id & 8) != 0) {
                buffer_size = *(int*)(batch_data + 0x10) + 9;
                prepare_render_buffer(batch_data, buffer_size);
                render_params = (uint16_t*)((uint64_t)*(uint32_t*)(batch_data + 0x10) + *(int64_t*)(batch_data + 8));
                *render_params = 0x797274656d6f6567;  // "geometry"
                *(uint16_t*)(render_params + 1) = 0x20;
                *(int*)(batch_data + 0x10) = buffer_size;
            }
            
            if ((batch_id & 0x10) != 0) {
                buffer_size = *(int*)(batch_data + 0x10) + 6;
                prepare_render_buffer(batch_data, buffer_size);
                render_flags = (uint32_t*)((uint64_t)*(uint32_t*)(batch_data + 0x10) + *(int64_t*)(batch_data + 8));
                *render_flags = 0x65786970;  // "pixel"
                *(uint16_t*)(render_flags + 1) = 0x206c;
                *(uint8_t*)((int64_t)render_flags + 6) = 0;
                *(int*)(batch_data + 0x10) = buffer_size;
            }
            
            buffer_size = *(int*)(batch_data + 0x10);
            if ((batch_id & 0x20) != 0) {
                buffer_size = buffer_size + 8;
                prepare_render_buffer(batch_data, buffer_size);
                render_params = (uint16_t*)((uint64_t)*(uint32_t*)(batch_data + 0x10) + *(int64_t*)(batch_data + 8));
                *render_params = 0x20657475706d6f63;  // "compute "
                *(uint8_t*)(render_params + 1) = 0;
                *(int*)(batch_data + 0x10) = buffer_size;
            }
            
            prepare_render_buffer(batch_data, buffer_size + 2);
            render_params = (uint16_t*)((uint64_t)*(uint32_t*)(batch_data + 0x10) + *(int64_t*)(batch_data + 8));
            *render_params = 0xa29;
            *(uint8_t*)(render_params + 1) = 0;
            *(int*)(batch_data + 0x10) = buffer_size + 2;
        }
        object_count = object_count + 1;
        render_object = render_object + 1;
        quality_flags = quality_flags + 1;
    } while (object_count < 0x80);
    
    // 清理批次资源
    cleanup_rendering_resources(batch_checksum ^ (uint64_t)(uintptr_t)batch_buffer);
}

/**
 * 更新渲染纹理
 * 更新和管理渲染系统中的纹理资源
 * 
 * @param render_context 渲染上下文指针
 * @param texture_data 纹理数据指针
 */
void update_rendering_textures(int64_t render_context, int64_t texture_data)
{
    uint32_t* texture_info;
    int texture_count;
    int texture_index;
    int64_t* texture_pointers;
    void* texture_name;
    void* texture_desc;
    uint32_t texture_flags;
    uint8_t texture_buffer[32];
    uint64_t texture_checksum;
    
    texture_checksum = *(uint64_t*)0x180bf00a8 ^ (uint64_t)(uintptr_t)texture_buffer;
    texture_index = 0;
    texture_flags = 0;
    texture_count = *(int*)(texture_data + 0x10) + 0x1a;
    
    // 准备纹理缓冲区
    prepare_render_buffer(texture_data, texture_count);
    texture_info = (uint32_t*)((uint64_t)*(uint32_t*)(texture_data + 0x10) + *(int64_t*)(texture_data + 8));
    
    // 设置纹理头信息
    *texture_info = 0x646e6552;  // "Rend"
    texture_info[1] = 0x54207265;  // "er T"
    texture_info[2] = 0x65677261;  // "arge"
    texture_info[3] = 0x6c532074;  // "t Sl"
    *(uint64_t*)(texture_info + 4) = 0x207473694c20746f;  // "ot Lis "
    *(uint16_t*)(texture_info + 6) = 0xa3a;
    *(uint8_t*)((int64_t)texture_info + 0x1a) = 0;
    *(int*)(texture_data + 0x10) = texture_count;
    
    // 处理纹理指针
    texture_pointers = (int64_t*)(render_context + 0x83b8);
    do {
        if (*texture_pointers != 0) {
            texture_name = &UNK_1809fcc28;
            texture_desc = texture_buffer;
            texture_buffer[0] = 0;
            texture_flags = 0;
            
            // 复制纹理描述
            copy_texture_description(texture_desc, 0x80, &DAT_18098bc73);
            texture_flags = 1;
            
            texture_name = &DAT_18098bc73;
            if (texture_desc != (void*)0x0) {
                texture_name = texture_desc;
            }
            
            // 添加纹理到列表
            add_texture_to_list(texture_data, &UNK_180a17308, texture_index, texture_name);
            texture_flags = 0;
            texture_name = &UNK_18098bcb0;
        }
        texture_index = texture_index + 1;
        texture_pointers = texture_pointers + 1;
    } while (texture_index < 7);
    
    // 添加纹理调试信息
    texture_count = *(int*)(texture_data + 0x10);
    texture_index = texture_count + 0x14;
    prepare_render_buffer(texture_data, texture_index);
    texture_info = (uint32_t*)((uint64_t)*(uint32_t*)(texture_data + 0x10) + *(int64_t*)(texture_data + 8));
    *texture_info = 0x74706544;  // "Dept"
    texture_info[1] = 0x61542068;  // "h Ta"
    texture_info[2] = 0x74656772;  // "rget"
    texture_info[3] = 0x6f6c5320;  // " Slot"
    texture_info[4] = 0x203a2074;  // "t : "
    *(uint8_t*)(texture_info + 5) = 0;
    *(int*)(texture_data + 0x10) = texture_index;
    
    // 检查深度纹理状态
    if (*(int64_t*)(render_context + 0x83f0) == 0) {
        texture_count = texture_count + 0x19;
        prepare_render_buffer(texture_data, texture_count);
        texture_info = (uint32_t*)((uint64_t)*(uint32_t*)(texture_data + 0x10) + *(int64_t*)(texture_data + 8));
        *texture_info = 0x6c6c756e;  // "null"
        *(uint16_t*)(texture_info + 1) = 10;
        *(int*)(texture_data + 0x10) = texture_count;
    } else {
        texture_name = &UNK_1809fcc28;
        texture_desc = texture_buffer;
        texture_buffer[0] = 0;
        texture_flags = 0;
        copy_texture_description(texture_desc, 0x80, &DAT_18098bc73);
        texture_flags = 2;
        texture_name = &DAT_18098bc73;
        if (texture_desc != (void*)0x0) {
            texture_name = texture_desc;
        }
        add_texture_to_list(texture_data, &UNK_180a0d2d4, texture_name);
        texture_flags = 0;
        texture_name = &UNK_18098bcb0;
    }
    
    // 清理纹理资源
    cleanup_rendering_resources(texture_checksum ^ (uint64_t)(uintptr_t)texture_buffer);
}

/**
 * 应用渲染着色器
 * 应用和管理渲染着色器程序
 * 
 * @param render_context 渲染上下文指针
 * @param shader_index 着色器索引
 * @param shader_mode 着色器模式
 * @param shader_data 着色器数据指针
 * @param shader_params 着色器参数
 */
void apply_rendering_shaders(int64_t render_context, int shader_index, char shader_mode, 
                             int64_t shader_data, int shader_params)
{
    int64_t* shader_pointers;
    int* shader_info;
    uint64_t shader_handle;
    uint8_t shader_buffer[32];
    uint32_t* shader_params_ptr;
    uint64_t* shader_data_ptr;
    uint32_t shader_params_array[2];
    uint64_t shader_data_array[4];
    uint64_t shader_checksum;
    
    shader_checksum = *(uint64_t*)0x180bf00a8 ^ (uint64_t)(uintptr_t)shader_buffer;
    shader_handle = 0;
    shader_params_array[0] = 0xffffffff;
    
    if (shader_data != 0) {
        shader_info = (int*)((uintptr_t)render_system_global_data + 0x224);
        *(int64_t*)(shader_data + 0x340) = (int64_t)*shader_info;
        
        if (shader_params == -1) {
            shader_handle = *(uint64_t*)(shader_data + 0x208);
        } else {
            shader_handle = *(uint64_t*)(*(int64_t*)(shader_data + 0x210) + (int64_t)shader_params * 8);
        }
        *(int64_t*)(shader_data + 0x340) = (int64_t)*shader_info;
        shader_params_array[0] = *(uint32_t*)(shader_data + 0x1f8);
    }
    
    shader_pointers = *(int64_t**)(render_context + 0x8400);
    shader_data_array[0] = shader_handle;
    
    if (shader_mode == '\0') {
        shader_data_ptr = shader_data_array;
        shader_params_array[1] = 4;
        shader_params_ptr = (uint32_t*)shader_params_array;
        shader_params_ptr->_0_4_ = 1;
        
        // 初始化着色器
        ((void(*)(void*, int, int, int))(*(void**)(*shader_pointers + 0x2d0)))
            (shader_pointers, 0, 0, 0);
        shader_pointers = *(int64_t**)(render_context + 0x8400);
        
        shader_params_ptr = shader_params_array;
        shader_data_array[shader_index - 1] = shader_handle;
        shader_data_ptr = shader_data_array;
        shader_params_array[1] = 4;
        shader_params_ptr = (uint32_t*)((uint64_t)shader_params_ptr | 1);
        
        // 应用着色器参数
        ((void(*)(void*, uint32_t, int, int))(*(void**)(*shader_pointers + 0x110)))
            (shader_pointers, 0xffffffff, 0, 0);
        
        // 重置着色器状态
        if (shader_index < 7) {
            reset_shader_state(render_context);
        }
    } else {
        shader_params_ptr = shader_params_array;
        ((void(*)(void*, int, int, uint64_t*))(*(void**)(*shader_pointers + 0x220)))
            (shader_pointers, shader_index, 1, &shader_data_array[0]);
    }
    
    // 清理着色器资源
    cleanup_rendering_resources(shader_checksum ^ (uint64_t)(uintptr_t)shader_buffer);
}

/**
 * 处理渲染光照
 * 处理和管理渲染系统中的光照效果
 * 
 * @param render_context 渲染上下文指针
 * @param light_type 光照类型
 * @param light_mode 光照模式
 * @param light_data 光照数据指针
 */
void process_rendering_lights(int64_t render_context, uint64_t light_type, char light_mode, int64_t light_data)
{
    int64_t* light_pointers;
    uint64_t light_handle;
    uint8_t light_buffer[32];
    uint64_t light_params;
    uint32_t light_flags;
    uint64_t* light_data_ptr;
    uint64_t light_data_array[4];
    uint64_t light_checksum;
    
    light_checksum = *(uint64_t*)0x180bf00a8 ^ (uint64_t)(uintptr_t)light_buffer;
    light_handle = 0;
    
    if (light_data != 0) {
        light_handle = *(uint64_t*)(light_data + 0x20);
        *(uint32_t*)(light_data + 0x16c) = *(uint32_t*)((uintptr_t)render_system_global_data + 0x224);
    }
    
    light_pointers = *(int64_t**)(render_context + 0x8400);
    light_data_array[0] = light_handle;
    
    if (light_mode == '\0') {
        light_data_ptr = light_data_array;
        light_flags = 4;
        light_params = 1;
        
        // 初始化光照
        ((void(*)(void*, int, int, int))(*(void**)(*light_pointers + 0x2d0)))
            (light_pointers, 0, 0, 0);
        light_pointers = *(int64_t**)(render_context + 0x8400);
        
        light_data_ptr = &light_data_array[0];
        light_params = 0;
        light_data_array[(int)light_type - 1] = light_handle;
        light_flags = 4;
        light_params = (uint64_t)light_params | 1;
        
        // 应用光照参数
        ((void(*)(void*, uint32_t, int, int))(*(void**)(*light_pointers + 0x110)))
            (light_pointers, 0xffffffff, 0, 0);
        
        // 重置光照状态
        if ((int)light_type < 7) {
            reset_light_state(render_context);
        }
    } else {
        light_params = 0;
        ((void(*)(void*, uint64_t, int, uint64_t*))(*(void**)(*light_pointers + 0x220)))
            (light_pointers, light_type, 1, &light_data_array[0]);
    }
    
    // 清理光照资源
    cleanup_rendering_resources(light_checksum ^ (uint64_t)(uintptr_t)light_buffer);
}

/**
 * 更新渲染相机
 * 更新和管理渲染系统中的相机参数
 * 
 * @param render_context 渲染上下文指针
 * @param camera_mode 相机模式
 * @param camera_data 相机数据指针
 */
void update_rendering_cameras(int64_t render_context, char camera_mode, int64_t camera_data)
{
    int64_t* camera_pointers;
    int64_t camera_transform;
    int64_t camera_projection;
    int64_t camera_view;
    uint32_t camera_flags;
    
    if ((*(int64_t*)(render_context + 0x8240) != camera_data) || 
        (*(char*)(render_context + 0x8270) != camera_mode)) {
        camera_pointers = *(int64_t**)(render_context + 0x8400);
        *(int64_t*)(render_context + 0x8240) = camera_data;
        *(char*)(render_context + 0x8270) = camera_mode;
        
        if (camera_mode == '\n') {
            // 正交相机
            ((void(*)(void*, int, int, int64_t, int64_t, int64_t))(*(void**)(*camera_pointers + 0x90)))
                (camera_pointers, 0, 1, camera_data + 0x2a0, camera_data + 0x2b8, camera_data + 0x2b0);
            return;
        }
        
        if (camera_mode == '\v') {
            // 透视相机
            camera_transform = camera_data + 0x2b0;
            camera_projection = camera_data + 0x2b8;
            camera_view = camera_data + 0x2a0;
            camera_flags = 2;
        } else {
            // 自定义相机
            camera_transform = camera_data + 0x220;
            camera_projection = camera_data + 0x260;
            camera_view = camera_data + 0x1a0;
            camera_flags = *(uint32_t*)(camera_data + 0x18c);
        }
        
        ((void(*)(void*, int, uint32_t, int64_t, int64_t, int64_t))(*(void**)(*camera_pointers + 0x90)))
            (camera_pointers, 0, camera_flags, camera_view, camera_projection, camera_transform);
    }
}

/**
 * 处理渲染阴影
 * 处理和管理渲染系统中的阴影效果
 * 
 * @param render_context 渲染上下文指针
 * @param shadow_data 阴影数据指针
 */
void process_rendering_shadows(int64_t render_context, int64_t shadow_data)
{
    if (*(int64_t*)(render_context + 0x8240) != shadow_data) {
        *(int64_t*)(render_context + 0x8240) = shadow_data;
        ((void(*)(void*, int, uint32_t, int64_t, int64_t, int64_t))(*(void**)(*(int64_t**)(render_context + 0x8400) + 0x90)))
            (*(int64_t**)(render_context + 0x8400), 0, *(uint32_t*)(shadow_data + 0x188), 
             shadow_data + 0x1a0, shadow_data + 0x260, shadow_data + 0x220);
    }
}

/**
 * 应用渲染后处理效果
 * 应用和管理渲染系统中的后处理效果
 * 
 * @param render_context 渲染上下文指针
 * @param effect_handle 效果句柄
 * @param effect_flags 效果标志
 * @param effect_data 效果数据指针
 */
void apply_rendering_post_effects(int64_t render_context, uint64_t effect_handle, uint32_t effect_flags, int64_t effect_data)
{
    int64_t* effect_pointers;
    void* effect_processor;
    uint64_t effect_id;
    
    effect_id = effect_handle & 0xffffffff;
    
    if ((effect_flags & 1) != 0) {
        // 基础后处理效果
        effect_pointers = *(int64_t**)(render_context + 0x8400);
        effect_processor = *(void**)(*effect_pointers + 0x38);
        *(uint32_t*)(effect_data + 0x16c) = *(uint32_t*)((uintptr_t)render_system_global_data + 0x224);
        ((void(*)(void*, uint64_t, int, int64_t))effect_processor)
            (effect_pointers, effect_handle, 1, effect_data + 0x10);
    }
    
    if ((effect_flags & 4) != 0) {
        // 高级后处理效果
        effect_pointers = *(int64_t**)(render_context + 0x8400);
        effect_processor = *(void**)(*effect_pointers + 0x1f0);
        *(uint32_t*)(effect_data + 0x16c) = *(uint32_t*)((uintptr_t)render_system_global_data + 0x224);
        ((void(*)(void*, uint64_t, int, int64_t))effect_processor)
            (effect_pointers, effect_id, 1, effect_data + 0x10);
    }
    
    if ((effect_flags & 2) != 0) {
        // 特殊后处理效果
        effect_pointers = *(int64_t**)(render_context + 0x8400);
        effect_processor = *(void**)(*effect_pointers + 0x210);
        *(uint32_t*)(effect_data + 0x16c) = *(uint32_t*)((uintptr_t)render_system_global_data + 0x224);
        ((void(*)(void*, uint64_t, int, int64_t))effect_processor)
            (effect_pointers, effect_id, 1, effect_data + 0x10);
    }
    
    if ((effect_flags & 0x10) != 0) {
        // 自定义后处理效果
        effect_pointers = *(int64_t**)(render_context + 0x8400);
        effect_processor = *(void**)(*effect_pointers + 0x80);
        *(uint32_t*)(effect_data + 0x16c) = *(uint32_t*)((uintptr_t)render_system_global_data + 0x224);
        ((void(*)(void*, uint64_t, int, int64_t))effect_processor)
            (effect_pointers, effect_id, 1, effect_data + 0x10);
    }
    
    if ((effect_flags & 0x20) != 0) {
        // 扩展后处理效果
        effect_pointers = *(int64_t**)(render_context + 0x8400);
        effect_processor = *(void**)(*effect_pointers + 0x238);
        *(uint32_t*)(effect_data + 0x16c) = *(uint32_t*)((uintptr_t)render_system_global_data + 0x224);
        ((void(*)(void*, uint64_t, int, int64_t))effect_processor)
            (effect_pointers, effect_id, 1, effect_data + 0x10);
    }
}

/**
 * 更新渲染缓冲区
 * 更新和管理渲染系统中的缓冲区资源
 * 
 * @param render_context 渲染上下文指针
 * @param buffer_flags 缓冲区标志
 */
void update_rendering_buffers(int64_t render_context, uint32_t buffer_flags)
{
    int64_t buffer_data;
    uint64_t buffer_handle;
    bool buffer_changed[8];
    uint64_t buffer_handles[8];
    uint8_t buffer_checksum[32];
    uint64_t actual_checksum;
    
    actual_checksum = *(uint64_t*)0x180bf00a8 ^ (uint64_t)(uintptr_t)buffer_checksum;
    
    // 获取缓冲区数据
    buffer_data = *(int64_t*)(render_context + 0x83b8);
    buffer_changed[0] = buffer_data != *(int64_t*)(render_context + 0x8378);
    if (buffer_changed[0]) {
        *(int64_t*)(render_context + 0x8378) = buffer_data;
    }
    
    if (buffer_data == 0) {
        buffer_handles[0] = 0;
    } else {
        buffer_handles[0] = *(uint64_t*)(buffer_data + 8);
    }
    
    buffer_data = *(int64_t*)(render_context + 0x83c0);
    buffer_changed[1] = buffer_data != *(int64_t*)(render_context + 0x8380);
    if (buffer_changed[1]) {
        *(int64_t*)(render_context + 0x8380) = buffer_data;
    }
    
    if (buffer_data == 0) {
        buffer_handles[1] = 0;
    } else {
        buffer_handles[1] = *(uint64_t*)(buffer_data + 8);
    }
    
    buffer_data = *(int64_t*)(render_context + 0x83c8);
    buffer_changed[2] = buffer_data != *(int64_t*)(render_context + 0x8388);
    if (buffer_changed[2]) {
        *(int64_t*)(render_context + 0x8388) = buffer_data;
    }
    
    if (buffer_data == 0) {
        buffer_handles[2] = 0;
    } else {
        buffer_handles[2] = *(uint64_t*)(buffer_data + 8);
    }
    
    buffer_data = *(int64_t*)(render_context + 0x83d0);
    buffer_changed[3] = buffer_data != *(int64_t*)(render_context + 0x8390);
    if (buffer_changed[3]) {
        *(int64_t*)(render_context + 0x8390) = buffer_data;
    }
    
    if (buffer_data == 0) {
        buffer_handles[3] = 0;
    } else {
        buffer_handles[3] = *(uint64_t*)(buffer_data + 8);
    }
    
    buffer_data = *(int64_t*)(render_context + 0x83d8);
    buffer_changed[4] = buffer_data != *(int64_t*)(render_context + 0x8398);
    if (buffer_changed[4]) {
        *(int64_t*)(render_context + 0x8398) = buffer_data;
    }
    
    if (buffer_data == 0) {
        buffer_handles[4] = 0;
    } else {
        buffer_handles[4] = *(uint64_t*)(buffer_data + 8);
    }
    
    buffer_data = *(int64_t*)(render_context + 0x83e0);
    buffer_changed[5] = buffer_data != *(int64_t*)(render_context + 0x83a0);
    if (buffer_changed[5]) {
        *(int64_t*)(render_context + 0x83a0) = buffer_data;
    }
    
    if (buffer_data == 0) {
        buffer_handles[5] = 0;
    } else {
        buffer_handles[5] = *(uint64_t*)(buffer_data + 8);
    }
    
    buffer_data = *(int64_t*)(render_context + 0x83e8);
    buffer_changed[6] = buffer_data != *(int64_t*)(render_context + 0x83a8);
    if (buffer_changed[6]) {
        *(int64_t*)(render_context + 0x83a8) = buffer_data;
    }
    
    if (buffer_data == 0) {
        buffer_handles[6] = 0;
    } else {
        buffer_handles[6] = *(uint64_t*)(buffer_data + 8);
    }
    
    buffer_data = *(int64_t*)(render_context + 0x83f0);
    buffer_changed[7] = *(int64_t*)(render_context + 0x83b0) != buffer_data;
    if (buffer_changed[7]) {
        *(int64_t*)(render_context + 0x83b0) = buffer_data;
    }
    
    if (buffer_data == 0) {
        buffer_handle = 0;
    } else {
        buffer_handle = *(uint64_t*)(buffer_data + 8);
    }
    
    // 检查是否需要更新缓冲区
    if ((buffer_changed[6] || (buffer_changed[5] || (buffer_changed[4] || (buffer_changed[3] || 
          (buffer_changed[2] || (buffer_changed[1] || buffer_changed[0])))) || buffer_changed[7])) {
        uint64_t buffer_params[4];
        buffer_params[0] = 0xffffffffffffffff;
        buffer_params[1] = 0;
        buffer_params[2] = 0xffffffff;
        buffer_params[3] = buffer_flags;
        
        ((void(*)(void*, uint32_t, uint64_t*, uint64_t))(*(void**)(*(int64_t**)(render_context + 0x8400) + 0x110)))
            (*(int64_t**)(render_context + 0x8400), buffer_flags, &buffer_handles[0], buffer_handle);
    }
    
    // 清理缓冲区资源
    cleanup_rendering_resources(actual_checksum);
}

/**
 * 处理渲染目标
 * 处理和管理渲染系统中的渲染目标
 * 
 * @param render_context 渲染上下文指针
 */
void process_rendering_targets(int64_t render_context)
{
    if (*(char*)0x180c82846 == '\0') {
        ((void(*)(void))(*(void**)(*(int64_t**)(render_context + 0x8400) + 0xa8)))();
    }
}

/**
 * 应用渲染过滤器
 * 应用和管理渲染系统中的过滤器效果
 * 
 * @param render_context 渲染上下文指针
 * @param filter_params 过滤器参数
 * @param filter_mode 过滤器模式
 * @param filter_flags 过滤器标志
 */
void apply_rendering_filters(int64_t render_context, uint32_t filter_params, int filter_mode, uint32_t filter_flags)
{
    if (*(char*)0x180c82846 == '\0') {
        ((void(*)(void*, int, uint32_t, uint32_t, int, int))(*(void**)(*(int64_t**)(render_context + 0x8400) + 0xa0)))
            (*(int64_t**)(render_context + 0x8400), filter_mode * 3, filter_flags, filter_params, 0, 0);
    }
}

/**
 * 更新渲染质量
 * 更新和管理渲染系统的质量设置
 * 
 * @param render_context 渲染上下文指针
 */
void update_rendering_quality(int64_t render_context)
{
    int64_t quality_data;
    
    if (*(char*)0x180c82846 == '\0') {
        quality_data = *(int64_t*)(*(int64_t*)((uintptr_t)render_system_global_data + 0x1d50) + 0x18);
        if (*(int64_t*)(render_context + 0x8240) != quality_data) {
            *(int64_t*)(render_context + 0x8240) = quality_data;
            ((void(*)(void*, int, uint32_t, int64_t, int64_t, int64_t))(*(void**)(*(int64_t**)(render_context + 0x8400) + 0x90)))
                (*(int64_t**)(render_context + 0x8400), 0, *(uint32_t*)(quality_data + 0x188), 
                 quality_data + 0x1a0, quality_data + 0x260, quality_data + 0x220);
        }
        
        // 更新质量设置
        ((void(*)(void*, int))(*(void**)(*(int64_t**)(render_context + 0x8400) + 0x68)))
            (*(int64_t**)(render_context + 0x8400), 3);
    }
}

/**
 * 处理渲染调试信息
 * 处理和管理渲染系统的调试信息
 * 
 * @param render_context 渲染上下文指针
 * @param debug_data 调试数据指针
 * @param debug_offset 调试偏移
 * @param debug_size 调试大小
 * @param debug_flags 调试标志
 * @param debug_result 调试结果指针
 * 
 * @return 成功返回true，失败返回false
 */
bool process_rendering_debug(int64_t render_context, int64_t debug_data, int debug_offset, 
                              int debug_size, uint32_t debug_flags, int* debug_result)
{
    int debug_status;
    int64_t debug_object;
    uint32_t debug_type;
    uint32_t debug_quality;
    uint64_t debug_info[2];
    uint32_t debug_checksum;
    
    debug_object = get_debug_object_data(debug_data);
    debug_quality = (uint32_t)*(uint8_t*)(debug_data + 0x335);
    if ((int)*(uint32_t*)(debug_data + 0x35c) < (int)(uint32_t)*(uint8_t*)(debug_data + 0x335)) {
        debug_quality = *(uint32_t*)(debug_data + 0x35c);
    }
    debug_offset = debug_quality * debug_size + debug_offset;
    
    if (debug_flags == 0) {
        debug_type = 5;
    } else {
        debug_quality = debug_flags & 1;
        if ((debug_flags & 8) != 0) {
            debug_quality = 3;
        }
        debug_type = debug_quality | 4;
        if ((debug_flags & 2) == 0) {
            debug_type = debug_quality;
        }
        if ((debug_flags & 4) != 0) {
            debug_type = debug_type | 5;
        }
    }
    
    debug_status = ((int(*)(void*, uint64_t, int, uint32_t, int, uint64_t*))(*(void**)(*(int64_t**)(render_context + 0x8400) + 0x70)))
                     (*(int64_t**)(render_context + 0x8400), *(uint64_t*)(debug_object + 8), debug_offset, debug_type, 0, &debug_info[0]);
    
    if (debug_status < 0) {
        report_debug_error(debug_status, &UNK_180a173b0);
    }
    
    *(uint64_t*)(debug_result + 2) = debug_info[0];
    *(uint64_t*)(debug_result + 4) = (uint64_t)debug_checksum;
    *debug_result = debug_offset;
    
    return debug_status >= 0;
}

/**
 * 清理渲染资源
 * 清理和管理渲染系统中的资源
 * 
 * @param render_context 渲染上下文指针
 * @param resource_data 资源数据指针
 * @param resource_params 资源参数指针
 */
void cleanup_rendering_resources(int64_t render_context, uint64_t resource_data, uint32_t* resource_params)
{
    uint32_t resource_flags;
    int64_t* resource_pointers;
    void* resource_processor;
    int64_t resource_object;
    
    resource_pointers = *(int64_t**)(render_context + 0x8400);
    resource_flags = *resource_params;
    resource_processor = *(void**)(*resource_pointers + 0x78);
    resource_object = get_debug_object_data(resource_data);
    
    ((void(*)(void*, uint64_t, uint32_t))resource_processor)
        (resource_pointers, *(uint64_t*)(resource_object + 8), resource_flags);
}

/**
 * 验证渲染资源
 * 验证和管理渲染系统中的资源有效性
 * 
 * @param render_context 渲染上下文指针
 * @param resource_data 资源数据指针
 * @param resource_flags 资源标志
 * @param resource_result 资源结果指针
 * 
 * @return 成功返回true，失败返回false
 */
bool validate_rendering_resources(int64_t render_context, int64_t resource_data, uint32_t resource_flags, int64_t resource_result)
{
    uint32_t resource_type;
    int resource_status;
    uint32_t resource_quality;
    uint64_t resource_info[2];
    
    *(uint32_t*)(resource_data + 0x16c) = *(uint32_t*)((uintptr_t)render_system_global_data + 0x224);
    
    if (resource_flags == 0) {
        resource_quality = 5;
    } else {
        resource_type = resource_flags & 1;
        if ((resource_flags & 8) != 0) {
            resource_type = 3;
        }
        resource_quality = resource_type | 4;
        if ((resource_flags & 2) == 0) {
            resource_quality = resource_type;
        }
        if ((resource_flags & 4) != 0) {
            resource_quality = resource_quality | 5;
        }
    }
    
    resource_status = ((int(*)(void*, uint64_t, int, uint32_t, int, uint64_t*))(*(void**)(*(int64_t**)(render_context + 0x8400) + 0x70)))
                     (*(int64_t**)(render_context + 0x8400), *(uint64_t*)(resource_data + 0x10), 0, resource_quality, 0, resource_info);
    
    if (resource_status < 0) {
        report_resource_error(resource_status, &UNK_180a17358);
    }
    
    *(uint64_t*)(resource_result + 8) = resource_info[0];
    return resource_status >= 0;
}

// 辅助函数声明
static int64_t get_render_matrix_data(void);
static void apply_transform_matrix(int64_t render_context, int transform_type, int64_t texture_data, int transform_params);
static void prepare_render_buffer(int64_t buffer_data, int buffer_size);
static void* get_render_object_data(int64_t object_ptr, void* buffer);
static void add_object_to_batch(int64_t batch_data, void* batch_info, int index, void* object_name);
static void copy_texture_description(void* dest, size_t size, void* src);
static void add_texture_to_list(int64_t texture_data, void* texture_info, int index, void* texture_name);
static void reset_shader_state(int64_t render_context);
static void reset_light_state(int64_t render_context);
static void report_debug_error(int error_code, void* error_info);
static void report_resource_error(int error_code, void* error_info);
static int64_t get_debug_object_data(int64_t debug_ptr);

// 全局变量声明（原始代码中的外部变量）
extern uint8_t DAT_180c82846;
extern void* UNK_180a172e0;
extern void* UNK_18098bcb0;
extern void* UNK_1809fcc28;
extern void* UNK_180a17308;
extern void* UNK_180a0d2d4;
extern void* UNK_180a173b0;
extern void* UNK_180a17358;
extern void* DAT_18098bc73;
extern void* UNK_180a173b0;
extern void* UNK_180a17358;