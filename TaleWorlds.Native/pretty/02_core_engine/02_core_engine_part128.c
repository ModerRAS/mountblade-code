#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part128.c - 核心引擎模块第128部分
// 包含19个函数，主要处理渲染状态、材质属性和图形缓冲区管理

// 全局变量：引擎上下文指针
static void *engine_context = (void *)0x180c8a9b0;

// 材质属性表结构
typedef struct {
    int property_type;      // 属性类型
    int property_format;     // 属性格式
    uint property_id;        // 属性ID
    float property_values[2]; // 属性值
} material_property_t;

// 渲染状态结构
typedef struct {
    float *current_material;    // 当前材质指针
    float material_scale;        // 材质缩放
    float color_multiplier;      // 颜色乘数
    float *texture_pointer;      // 纹理指针
    float u_offset;             // U偏移
    float v_offset;             // V偏移
    int shader_flags;           // 着色器标志
    int material_count;         // 材质计数
    int render_state;           // 渲染状态
    float *material_buffer;     // 材质缓冲区
} render_state_t;

// 函数：更新材质状态
void update_material_state(void)
{
    render_state_t *render_ctx;
    float *material_ptr;
    int material_index;
    void *engine_base;
    float scale_factor;
    
    engine_base = engine_context;
    render_ctx = (render_state_t *)engine_base;
    
    // 减少材质引用计数
    material_index = render_ctx->material_count;
    render_ctx->material_count = material_index - 1;
    
    // 调用渲染更新函数
    FUN_180291a50();
    
    // 更新材质状态
    material_index = *(int *)(engine_base + 0x1ba0);
    render_ctx->material_count = material_index - 1;
    
    // 获取当前材质
    if (material_index == 0) {
        material_ptr = *(float **)(engine_base + 0xb0);
        if (material_ptr == NULL) {
            material_ptr = (float *)**(void **)(*(longlong *)(engine_base + 0xa0) + 0x48);
        }
    } else {
        material_ptr = *(float **)(*(longlong *)(engine_base + 0x1ba8) + -0x10 + (longlong)material_index * 8);
    }
    
    // 更新渲染状态
    render_ctx->current_material = material_ptr;
    scale_factor = *(float *)(engine_base + 0xa8) * *material_ptr * material_ptr[1];
    render_ctx->material_scale = scale_factor;
    
    // 计算颜色乘数
    if (*(longlong *)(engine_base + 0x1af8) == 0) {
        render_ctx->color_multiplier = 0.0f;
    } else {
        render_ctx->color_multiplier = scale_factor * *(float *)((longlong)engine_base + 0x2d8) * 
                                     *(float *)((longlong)engine_base + 0x2dc);
    }
    
    // 更新纹理和着色器状态
    *(void **)(engine_base + 0x1a00) = *(void **)(*(longlong *)(material_ptr + 0x16) + 0x38);
    render_ctx->texture_pointer = material_ptr;
    
    return;
}

// 函数：设置材质属性
void set_material_property(int property_index, void *property_data)
{
    render_state_t *render_ctx;
    material_property_t *property_table;
    uint64_t property_value;
    
    render_ctx = (render_state_t *)engine_context;
    property_table = (material_property_t *)(engine_base + 0x16c8 + (longlong)property_index * 0x10);
    
    // 保存当前属性值
    material_property_t old_property = *property_table;
    
    // 调用属性更新回调
    FUN_18013e100(engine_base + 0x1b80, &property_index);
    
    // 更新属性值
    property_value = ((uint64_t *)property_data)[1];
    *(uint64_t *)property_table = *(uint64_t *)property_data;
    ((uint64_t *)property_table)[1] = property_value;
    
    return;
}

// 函数：设置材质属性值
void set_material_property_value(int property_index, uint32_t property_value)
{
    material_property_t *property_table;
    uint property_id;
    void *engine_base;
    longlong property_offset;
    
    engine_base = engine_context;
    property_offset = (longlong)property_index;
    
    // 检查属性类型和格式
    if ((*(int *)(&UNK_18098d180 + property_offset * 0xc) == 4) && 
        (*(int *)(&UNK_18098d184 + property_offset * 0xc) == 1)) {
        
        property_id = *(uint *)(&UNK_18098d188 + property_offset * 0xc);
        uint32_t old_value = *(uint32_t *)((ulonglong)property_id + 0x1628 + engine_base);
        
        // 调用属性设置回调
        FUN_18013e000(engine_base + 0x1b90, &property_index);
        
        // 设置新值
        *(uint32_t *)((ulonglong)property_id + 0x1628 + engine_base) = property_value;
    }
    
    return;
}

// 函数：更新材质属性（带参数）
void update_material_property_ex(uint32_t property_type, longlong property_offset, 
                                uint64_t param1, uint64_t param2)
{
    uint property_id;
    void *engine_base;
    longlong register_value;
    uint32_t property_value;
    
    engine_base = engine_context;
    property_id = *(uint *)(register_value + 8 + property_offset * 4);
    
    // 调用属性更新回调
    FUN_18013e000(engine_base + 0x1b90, &property_offset, param1, param2, property_type);
    
    // 设置属性值
    *(uint32_t *)((ulonglong)property_id + 0x1628 + engine_base) = property_value;
    
    return;
}

// 函数：空操作函数
void nop_function(void)
{
    return;
}

// 函数：设置材质属性数组
void set_material_property_array(int property_index, uint64_t *property_array)
{
    render_state_t *render_ctx;
    longlong property_offset;
    ulonglong property_id;
    int stack_index;
    uint64_t old_values[2];
    
    render_ctx = (render_state_t *)engine_context;
    property_offset = (longlong)property_index;
    
    // 检查属性类型和格式
    if ((*(int *)(&UNK_18098d180 + property_offset * 0xc) == 4) && 
        *(int *)(&UNK_18098d184 + property_offset * 0xc) == 2) {
        
        property_id = (ulonglong)*(uint *)(&UNK_18098d188 + property_offset * 0xc);
        old_values[0] = *(uint64_t *)(property_id + 0x1628 + engine_base);
        old_values[1] = *(uint64_t *)(property_id + 0x1630 + engine_base);
        
        stack_index = property_index;
        FUN_18013e000(engine_base + 0x1b90, &stack_index);
        
        // 设置新的属性数组
        *(uint64_t *)(property_id + 0x1628 + render_ctx) = *property_array;
    }
    
    return;
}

// 函数：更新材质属性数组
void update_material_property_array(uint32_t property_type, uint64_t property_array, 
                                   longlong property_offset, uint64_t param2)
{
    render_state_t *render_ctx;
    longlong register_value;
    ulonglong property_id;
    uint64_t *source_array;
    uint32_t second_value;
    
    render_ctx = (render_state_t *)engine_context;
    property_id = (ulonglong)*(uint *)(register_value + 8 + property_offset * 4);
    second_value = *(uint32_t *)(property_id + 0x1630 + engine_base);
    
    // 调用属性更新回调
    FUN_18013e000(engine_base + 0x1b90, &property_offset, param2, property_type);
    
    // 设置新的属性数组
    *(uint64_t *)(property_id + 0x1628 + render_ctx) = *source_array;
    
    return;
}

// 函数：空操作函数2
void nop_function_2(void)
{
    return;
}

// 函数：批量更新材质属性
void batch_update_material_properties(int property_count)
{
    int current_count;
    longlong engine_base;
    longlong property_buffer;
    longlong property_index;
    uint property_id;
    longlong temp_offset;
    ulonglong buffer_offset;
    ulonglong loop_counter;
    
    engine_base = (longlong)engine_context;
    
    // 批量处理属性（每次处理4个）
    if (3 < property_count) {
        loop_counter = (property_count - 4U >> 2) + 1;
        buffer_offset = (ulonglong)loop_counter;
        property_count = property_count + loop_counter * -4;
        
        do {
            // 处理4个属性
            for (int i = 0; i < 4; i++) {
                temp_offset = (longlong)*(int *)(engine_base + 0x1b90);
                property_buffer = *(longlong *)(engine_base + 0x1b98);
                property_index = (longlong)*(int *)(property_buffer + -0xc + temp_offset * 0xc);
                buffer_offset = (ulonglong)*(uint *)(&UNK_18098d188 + property_index * 0xc);
                
                if (*(int *)(&UNK_18098d180 + property_index * 0xc) == 4) {
                    if (*(int *)(&UNK_18098d184 + property_index * 0xc) == 1) {
                        *(uint32_t *)(buffer_offset + 0x1628 + engine_base) = 
                            *(uint32_t *)(property_buffer + -8 + temp_offset * 0xc);
                    } else if (*(int *)(&UNK_18098d184 + property_index * 0xc) == 2) {
                        *(uint32_t *)(buffer_offset + 0x1628 + engine_base) = 
                            *(uint32_t *)(property_buffer + -8 + temp_offset * 0xc);
                        *(uint32_t *)(buffer_offset + 0x162c + engine_base) = 
                            *(uint32_t *)(property_buffer + -4 + temp_offset * 0xc);
                    }
                }
                
                // 减少计数器
                current_count = *(int *)(engine_base + 0x1b90);
                *(int *)(engine_base + 0x1b90) = current_count - 1;
            }
            
            buffer_offset--;
        } while (buffer_offset != 0);
    }
    
    // 处理剩余的属性
    for (; 0 < property_count; property_count--) {
        temp_offset = (longlong)*(int *)(engine_base + 0x1b90);
        property_buffer = *(longlong *)(engine_base + 0x1b98);
        property_index = (longlong)*(int *)(property_buffer + -0xc + temp_offset * 0xc);
        buffer_offset = (ulonglong)*(uint *)(&UNK_18098d188 + property_index * 0xc);
        
        if (*(int *)(&UNK_18098d180 + property_index * 0xc) == 4) {
            if (*(int *)(&UNK_18098d184 + property_index * 0xc) == 1) {
                *(uint32_t *)(buffer_offset + 0x1628 + engine_base) = 
                    *(uint32_t *)(property_buffer + -8 + temp_offset * 0xc);
            } else if (*(int *)(&UNK_18098d184 + property_index * 0xc) == 2) {
                *(uint32_t *)(buffer_offset + 0x1628 + engine_base) = 
                    *(uint32_t *)(property_buffer + -8 + temp_offset * 0xc);
                *(uint32_t *)(buffer_offset + 0x162c + engine_base) = 
                    *(uint32_t *)(property_buffer + -4 + temp_offset * 0xc);
            }
        }
        
        *(int *)(engine_base + 0x1b90) = *(int *)(engine_base + 0x1b90) - 1;
    }
    
    return;
}

// 函数：批量更新材质属性（扩展版本）
void batch_update_material_properties_ex(int property_count, longlong context_ptr)
{
    int current_count;
    longlong property_buffer;
    uint property_id;
    longlong property_index;
    ulonglong buffer_offset;
    ulonglong loop_counter;
    longlong property_table;
    
    loop_counter = (property_id >> 2) + 1;
    buffer_offset = (ulonglong)loop_counter;
    property_count = property_count + loop_counter * -4;
    
    do {
        // 批量处理4个属性
        for (int i = 0; i < 4; i++) {
            property_buffer = (longlong)*(int *)(context_ptr + 0x1b90);
            property_buffer = *(longlong *)(context_ptr + 0x1b98);
            property_index = (longlong)*(int *)(property_buffer + -0xc + property_buffer * 0xc);
            buffer_offset = (ulonglong)*(uint *)(property_table + 8 + property_index * 0xc);
            
            if (*(int *)(property_table + property_index * 0xc) == 4) {
                current_count = *(int *)(property_table + 4 + property_index * 0xc);
                if (current_count == 1) {
                    *(uint32_t *)(buffer_offset + 0x1628 + context_ptr) = 
                        *(uint32_t *)(property_buffer + -8 + property_buffer * 0xc);
                } else if (current_count == 2) {
                    *(uint32_t *)(buffer_offset + 0x1628 + context_ptr) = 
                        *(uint32_t *)(property_buffer + -8 + property_buffer * 0xc);
                    *(uint32_t *)(buffer_offset + 0x162c + context_ptr) = 
                        *(uint32_t *)(property_buffer + -4 + property_buffer * 0xc);
                }
            }
            
            current_count = *(int *)(context_ptr + 0x1b90);
            *(int *)(context_ptr + 0x1b90) = current_count - 1;
        }
        
        buffer_offset--;
    } while (buffer_offset != 0);
    
    // 处理剩余属性
    for (; 0 < property_count; property_count--) {
        property_buffer = (longlong)*(int *)(context_ptr + 0x1b90);
        property_buffer = *(longlong *)(context_ptr + 0x1b98);
        property_index = (longlong)*(int *)(property_buffer + -0xc + property_buffer * 0xc);
        buffer_offset = (ulonglong)*(uint *)(property_table + 8 + property_index * 0xc);
        
        if (*(int *)(property_table + property_index * 0xc) == 4) {
            current_count = *(int *)(property_table + 4 + property_index * 0xc);
            if (current_count == 1) {
                *(uint32_t *)(buffer_offset + 0x1628 + context_ptr) = 
                    *(uint32_t *)(property_buffer + -8 + property_buffer * 0xc);
            } else if (current_count == 2) {
                *(uint32_t *)(buffer_offset + 0x1628 + context_ptr) = 
                    *(uint32_t *)(property_buffer + -8 + property_buffer * 0xc);
                *(uint32_t *)(buffer_offset + 0x162c + context_ptr) = 
                    *(uint32_t *)(property_buffer + -4 + property_buffer * 0xc);
            }
        }
        
        *(int *)(context_ptr + 0x1b90) = *(int *)(context_ptr + 0x1b90) - 1;
    }
    
    return;
}

// 函数：快速更新材质属性
void fast_update_material_properties(uint64_t param1, longlong context_ptr)
{
    int current_count;
    longlong property_buffer;
    longlong property_index;
    longlong property_table;
    ulonglong buffer_offset;
    int iteration_count;
    
    if (0 < iteration_count) {
        do {
            property_buffer = (longlong)*(int *)(context_ptr + 0x1b90);
            property_buffer = *(longlong *)(context_ptr + 0x1b98);
            property_index = (longlong)*(int *)(property_buffer + -0xc + property_buffer * 0xc);
            buffer_offset = (ulonglong)*(uint *)(property_table + 8 + property_index * 0xc);
            
            if (*(int *)(property_table + property_index * 0xc) == 4) {
                current_count = *(int *)(property_table + 4 + property_index * 0xc);
                if (current_count == 1) {
                    *(uint32_t *)(buffer_offset + 0x1628 + context_ptr) = 
                        *(uint32_t *)(property_buffer + -8 + property_buffer * 0xc);
                } else if (current_count == 2) {
                    *(uint32_t *)(buffer_offset + 0x1628 + context_ptr) = 
                        *(uint32_t *)(property_buffer + -8 + property_buffer * 0xc);
                    *(uint32_t *)(buffer_offset + 0x162c + context_ptr) = 
                        *(uint32_t *)(property_buffer + -4 + property_buffer * 0xc);
                }
            }
            
            *(int *)(context_ptr + 0x1b90) = *(int *)(context_ptr + 0x1b90) - 1;
            iteration_count--;
        } while (0 < iteration_count);
    }
    
    return;
}

// 函数：获取材质状态
uint64_t get_material_status(void)
{
    uint property_id;
    uint64_t result;
    longlong engine_base;
    longlong material_context;
    
    material_context = *(longlong *)(engine_context + 0x1b00);
    if (material_context == *(longlong *)(engine_context + 0x1af8)) {
        engine_base = (longlong)engine_context;
        result = func_0x000180124000(*(uint64_t *)(engine_context + 0x1b08), 8);
        
        if ((char)result != '\0') {
            property_id = *(uint *)(engine_base + 0x1b2c);
            result = (uint64_t)property_id;
            
            if (((property_id == 0) || (*(char *)(engine_base + 0x1b3d) != '\0')) ||
                (property_id == *(uint *)(material_context + 0x84))) {
                return ((property_id >> 8) & 0xFF) | 0x100;
            }
        }
    }
    
    return result & 0xFFFFFFFFFFFFFF00;
}

// 函数：更新渲染参数
void update_render_parameters(void)
{
    float param1, param2, param3, param4;
    float param5, param6, param7, param8;
    longlong engine_base;
    longlong render_context;
    longlong material_context;
    char update_flag;
    
    engine_base = (longlong)engine_context;
    render_context = *(longlong *)(engine_context + 0x1af8);
    
    // 检查是否需要更新渲染参数
    if ((((*(char *)(render_context + 0xb5) != '\0') &&
          (material_context = *(longlong *)(engine_context + 0x1c98), 
           material_context == *(longlong *)(render_context + 0x3b8))) &&
         ((*(char *)(engine_context + 0x1d09) != '\0' || 
           *(int *)(engine_context + 0x1d0c) != 0))) &&
        *(int *)(engine_context + 0x1cfc) == *(int *)(material_context + 0x16c)) {
        
        update_flag = *(char *)(engine_context + 0x1d21);
        *(char *)(engine_context + 0x1d09) = 0;
        *(int *)(engine_base + 0x1d0c) = *(int *)(material_context + 0x144);
        
        // 计算渲染参数差值
        param1 = *(float *)(material_context + 0x14c);
        param2 = *(float *)(material_context + 0x40);
        param3 = *(float *)(material_context + 0x150);
        param4 = *(float *)(material_context + 0x44);
        param5 = *(float *)(material_context + 0x154);
        param6 = *(float *)(material_context + 0x40);
        param7 = *(float *)(material_context + 0x158);
        param8 = *(float *)(material_context + 0x44);
        
        *(bool *)(engine_base + 0x1d08) = update_flag != '\0';
        *(float *)(engine_base + 0x1d10) = param1 - param2;
        *(float *)(engine_base + 0x1d14) = param3 - param4;
        *(float *)(engine_base + 0x1d18) = param5 - param6;
        *(float *)(engine_base + 0x1d1c) = param7 - param8;
        
        // 调用渲染更新函数
        update_flag = func_0x000180128350();
        if (update_flag == '\0') {
            *(char *)(render_context + 0xb1) = 1;
            render_context = *(longlong *)(engine_base + 0x1af8);
            param1 = *(float *)(render_context + 0x130);
            param2 = *(float *)(render_context + 0x10c);
            param3 = *(float *)(render_context + 0x44);
            *(char *)(render_context + 0xb1) = 1;
            render_context = *(longlong *)(engine_base + 0x1af8);
            *(int *)(render_context + 0xa0) = 0x3f000000; // 0.5f
            *(float *)(render_context + 0x98) = 
                (float)((int)((param2 - param3) + param1 * 0.5 + *(float *)(render_context + 0x90)));
        }
    }
    
    return;
}

// 函数：添加纹理到渲染队列
void add_texture_to_render_queue(uint64_t texture_handle)
{
    longlong render_context;
    uint32_t texture_id;
    int texture_count;
    int max_count;
    int new_count;
    int *texture_array;
    
    render_context = *(longlong *)(engine_context + 0x1af8);
    texture_array = (int *)(render_context + 0x218);
    texture_count = *texture_array;
    max_count = *(int *)(render_context + 0x21c);
    
    // 检查是否需要扩展数组
    if (texture_count == max_count) {
        if (max_count == 0) {
            max_count = 8;
        } else {
            max_count = max_count / 2 + max_count;
        }
        new_count = texture_count + 1;
        if (texture_count + 1 < max_count) {
            new_count = max_count;
        }
        FUN_18011dbd0(texture_array, new_count);
        texture_count = *texture_array;
        max_count = *(int *)(render_context + 0x21c);
    }
    
    // 添加纹理ID
    *(uint32_t *)(*(longlong *)(render_context + 0x220) + (longlong)texture_count * 4) = 
        FUN_180121250(texture_handle, 0, *(uint32_t *)(max_count + -4 + (longlong)texture_count * 4));
    *texture_array = *texture_array + 1;
    
    return;
}

// 函数：添加着色器到渲染队列
void add_shader_to_render_queue(uint64_t shader_handle)
{
    int *shader_array;
    longlong render_context;
    uint32_t shader_id;
    int shader_count;
    int max_count;
    int new_count;
    
    render_context = *(longlong *)(engine_context + 0x1af8);
    shader_array = (int *)(render_context + 0x218);
    shader_id = func_0x000180123d70(render_context, shader_handle);
    shader_count = *shader_array;
    max_count = *(int *)(render_context + 0x21c);
    
    // 检查是否需要扩展数组
    if (shader_count == max_count) {
        if (max_count == 0) {
            max_count = 8;
        } else {
            max_count = max_count / 2 + max_count;
        }
        new_count = shader_count + 1;
        if (shader_count + 1 < max_count) {
            new_count = max_count;
        }
        FUN_18011dbd0(shader_array, new_count);
        shader_count = *shader_array;
    }
    
    // 添加着色器ID
    *(uint32_t *)(*(longlong *)(render_context + 0x220) + (longlong)shader_count * 4) = shader_id;
    *shader_array = *shader_array + 1;
    
    return;
}

// 函数：添加材质ID到渲染队列
void add_material_id_to_queue(int material_id)
{
    int *material_array;
    longlong render_context;
    uint32_t material_index;
    int material_count;
    int max_count;
    int new_count;
    
    render_context = *(longlong *)(engine_context + 0x1af8);
    material_array = (int *)(render_context + 0x218);
    material_index = func_0x000180123d70(render_context, (longlong)material_id);
    material_count = *material_array;
    max_count = *(int *)(render_context + 0x21c);
    
    // 检查是否需要扩展数组
    if (material_count == max_count) {
        if (max_count == 0) {
            max_count = 8;
        } else {
            max_count = max_count / 2 + max_count;
        }
        new_count = material_count + 1;
        if (material_count + 1 < max_count) {
            new_count = max_count;
        }
        FUN_18011dbd0(material_array, new_count);
        material_count = *material_array;
    }
    
    // 添加材质索引
    *(uint32_t *)(*(longlong *)(render_context + 0x220) + (longlong)material_count * 4) = material_index;
    *material_array = *material_array + 1;
    
    return;
}

// 函数：验证材质ID
void validate_material_id(uint64_t material_handle)
{
    longlong engine_base;
    int material_id;
    
    engine_base = (longlong)engine_context;
    material_id = FUN_180121250(material_handle, 0,
        *(uint32_t *)(*(longlong *)(*(longlong *)(engine_context + 0x1af8) + 0x220) + -4 +
        (longlong)*(int *)(*(longlong *)(engine_context + 0x1af8) + 0x218) * 4));
    
    // 检查材质ID是否匹配
    if (*(int *)(engine_base + 0x1b2c) == material_id) {
        *(int *)(engine_base + 0x1b34) = material_id;
    }
    
    // 检查是否需要激活材质
    if (*(int *)(engine_base + 0x1b30) == material_id) {
        *(char *)(engine_base + 0x1b3f) = 1;
    }
    
    return;
}

// 函数：初始化渲染状态
void initialize_render_state(void)
{
    longlong engine_base;
    longlong render_context;
    longlong state_buffer;
    longlong buffer_ptr;
    float depth_value;
    
    engine_base = (longlong)engine_context;
    *(char *)(*(longlong *)(engine_context + 0x1af8) + 0xb1) = 1;
    
    render_context = *(longlong *)(engine_base + 0x1af8);
    FUN_18013db40(render_context + 0x1e8, *(int *)(render_context + 0x1e8) + 1);
    
    buffer_ptr = (longlong)*(int *)(render_context + 0x1e8);
    state_buffer = *(longlong *)(render_context + 0x1f0);
    
    // 初始化渲染状态缓冲区
    *(uint64_t *)(state_buffer + -0x30 + buffer_ptr * 0x30) = *(uint64_t *)(render_context + 0x100);
    *(uint64_t *)(state_buffer + -0x28 + buffer_ptr * 0x30) = *(uint64_t *)(render_context + 0x118);
    *(int *)(state_buffer + -0x20 + buffer_ptr * 0x30) = *(int *)(render_context + 0x204);
    *(int *)(state_buffer + -0x1c + buffer_ptr * 0x30) = *(int *)(render_context + 0x208);
    *(uint64_t *)(state_buffer + -0x18 + buffer_ptr * 0x30) = *(uint64_t *)(render_context + 0x120);
    *(int *)(state_buffer + -0x10 + buffer_ptr * 0x30) = *(int *)(render_context + 0x128);
    *(int *)(state_buffer + -0xc + buffer_ptr * 0x30) = *(int *)(state_buffer + -8 + buffer_ptr * 0x30);
    *(char *)(state_buffer + -4 + buffer_ptr * 0x30) = *(char *)(engine_base + 0x1b3f);
    *(char *)(state_buffer + -3 + buffer_ptr * 0x30) = 1;
    
    // 重置渲染状态
    *(uint64_t *)(render_context + 0x120) = 0;
    depth_value = (*(float *)(render_context + 0x100) - *(float *)(render_context + 0x40)) - 
                  *(float *)(render_context + 0x20c);
    *(float *)(render_context + 0x208) = depth_value;
    *(float *)(render_context + 0x204) = depth_value;
    *(uint64_t *)(render_context + 0x118) = *(uint64_t *)(render_context + 0x100);
    *(float *)(render_context + 0x138) = *(float *)(render_context + 0x104) - 9999.0f;
    
    return;
}

// 函数：更新渲染缓冲区
void update_render_buffer(void)
{
    float min_x, max_x, min_y, max_y;
    float depth_min, depth_max;
    longlong engine_base;
    longlong render_context;
    longlong buffer_ptr;
    longlong state_buffer;
    char update_flag;
    int material_id;
    longlong temp_context;
    float depth_value;
    float position[4];
    
    engine_base = (longlong)engine_context;
    *(char *)(*(longlong *)(engine_context + 0x1af8) + 0xb1) = 1;
    
    render_context = *(longlong *)(engine_base + 0x1af8);
    state_buffer = *(longlong *)(render_context + 0x1f0);
    buffer_ptr = (longlong)*(int *)(render_context + 0x1e8);
    
    // 获取当前深度范围
    depth_max = (float)*(uint64_t *)(render_context + 0x118);
    depth_min = (float)((uint64_t)*(uint64_t *)(render_context + 0x118) >> 0x20);
    min_x = *(float *)(state_buffer + -0x2c + buffer_ptr * 0x30);
    max_x = *(float *)(state_buffer + -0x30 + buffer_ptr * 0x30);
    max_y = min_x;
    if (min_x <= depth_min) {
        max_y = depth_min;
    }
    depth_min = max_x;
    if (max_x <= depth_max) {
        depth_min = depth_max;
    }
    
    // 更新渲染状态
    *(uint64_t *)(render_context + 0x100) = *(uint64_t *)(state_buffer + -0x30 + buffer_ptr * 0x30);
    depth_max = *(float *)(state_buffer + -0x28 + buffer_ptr * 0x30);
    depth_value = *(float *)(state_buffer + -0x24 + buffer_ptr * 0x30);
    if (depth_value <= *(float *)(render_context + 0x11c)) {
        depth_value = *(float *)(render_context + 0x11c);
    }
    if (depth_max <= *(float *)(render_context + 0x118)) {
        depth_max = *(float *)(render_context + 0x118);
    }
    *(float *)(render_context + 0x11c) = depth_value;
    *(float *)(render_context + 0x118) = depth_max;
    *(int *)(render_context + 0x204) = *(int *)(state_buffer + -0x20 + buffer_ptr * 0x30);
    *(int *)(render_context + 0x208) = *(int *)(state_buffer + -0x1c + buffer_ptr * 0x30);
    *(uint64_t *)(render_context + 0x120) = *(uint64_t *)(state_buffer + -0x18 + buffer_ptr * 0x30);
    *(int *)(render_context + 0x128) = *(int *)(state_buffer + -0x10 + buffer_ptr * 0x30);
    *(float *)(render_context + 0x138) = *(float *)(render_context + 0x104) - 9999.0f;
    
    // 检查是否需要更新材质
    if (*(char *)(state_buffer + -3 + buffer_ptr * 0x30) != '\0') {
        depth_max = *(float *)(state_buffer + -0x10 + buffer_ptr * 0x30);
        depth_value = *(float *)(render_context + 0x134);
        if (*(float *)(render_context + 0x134) <= depth_max) {
            depth_value = depth_max;
        }
        position[0] = depth_min - max_x;
        *(float *)(render_context + 0x128) = depth_value;
        position[1] = max_y - min_x;
        depth_max = depth_min;
        position[2] = max_x;
        position[3] = min_x;
        func_0x000180124080(&position[0], *(int *)(state_buffer + -0x10 + buffer_ptr * 0x30));
        
        temp_context = *(longlong *)(engine_base + 0x1af8);
        *(uint64_t *)(temp_context + 0x144) = 0;
        *(float *)(temp_context + 0x14c) = max_x;
        *(float *)(temp_context + 0x150) = min_x;
        *(float *)(temp_context + 0x154) = depth_min;
        *(float *)(temp_context + 0x158) = max_y;
        
        temp_context = *(longlong *)(engine_base + 0x1af8);
        if ((((((*(float *)(temp_context + 0x22c) <= max_y && max_y != *(float *)(temp_context + 0x22c)) &&
               (min_x < *(float *)(temp_context + 0x234))) &&
              (*(float *)(temp_context + 0x228) <= depth_max && depth_max != *(float *)(temp_context + 0x228))) &&
             (max_x < *(float *)(temp_context + 0x230))) || (*(char *)(engine_base + 0x2e38) != '\0')) &&
            (update_flag = FUN_180128040(&position[2], &position[3], 1), update_flag != '\0')) {
            *(uint *)(temp_context + 0x148) = *(uint *)(temp_context + 0x148) | 1;
        }
    }
    
    // 更新材质ID
    material_id = *(int *)(engine_base + 0x1b2c);
    if (((*(int *)(state_buffer + -8 + buffer_ptr * 0x30) == material_id) || 
         (*(int *)(engine_base + 0x1b34) != material_id)) || (material_id == 0)) {
        if ((*(char *)(state_buffer + -4 + buffer_ptr * 0x30) != '\0') || 
            (*(char *)(engine_base + 0x1b3f) == '\0')) {
            goto update_complete;
        }
        material_id = *(int *)(engine_base + 0x1b30);
    }
    *(int *)(render_context + 0x144) = material_id;
    
update_complete:
    *(float *)(render_context + 0x14c) = max_x;
    *(float *)(render_context + 0x150) = min_x;
    *(float *)(render_context + 0x154) = depth_min;
    *(float *)(render_context + 0x158) = max_y;
    *(int *)(render_context + 0x1e8) = *(int *)(render_context + 0x1e8) - 1;
    
    return;
}

// 函数：更新渲染缓冲区（扩展版本）
void update_render_buffer_ex(uint64_t param1, uint64_t param2, char param3, uint64_t param4)
{
    float min_x, max_x, min_y, max_y;
    float depth_min, depth_max;
    longlong engine_base;
    longlong render_context;
    longlong buffer_ptr;
    longlong state_buffer;
    char update_flag;
    int material_id;
    longlong temp_context;
    float depth_value;
    float position[4];
    longlong register_value;
    
    *(char *)(*(longlong *)(register_value + 0x1af8) + 0xb1) = 1;
    
    render_context = *(longlong *)(engine_base + 0x1af8);
    state_buffer = *(longlong *)(render_context + 0x1f0);
    buffer_ptr = (longlong)*(int *)(render_context + 0x1e8);
    
    // 获取当前深度范围
    depth_max = (float)*(uint64_t *)(render_context + 0x118);
    depth_min = (float)((uint64_t)*(uint64_t *)(render_context + 0x118) >> 0x20);
    min_x = *(float *)(state_buffer + -0x2c + buffer_ptr * 0x30);
    max_x = *(float *)(state_buffer + -0x30 + buffer_ptr * 0x30);
    max_y = min_x;
    if (min_x <= depth_min) {
        max_y = depth_min;
    }
    depth_min = max_x;
    if (max_x <= depth_max) {
        depth_min = depth_max;
    }
    
    // 更新渲染状态
    *(uint64_t *)(render_context + 0x100) = *(uint64_t *)(state_buffer + -0x30 + buffer_ptr * 0x30);
    depth_max = *(float *)(state_buffer + -0x28 + buffer_ptr * 0x30);
    depth_value = *(float *)(state_buffer + -0x24 + buffer_ptr * 0x30);
    if (depth_value <= *(float *)(render_context + 0x11c)) {
        depth_value = *(float *)(render_context + 0x11c);
    }
    if (depth_max <= *(float *)(render_context + 0x118)) {
        depth_max = *(float *)(render_context + 0x118);
    }
    *(float *)(render_context + 0x11c) = depth_value;
    *(float *)(render_context + 0x118) = depth_max;
    *(int *)(render_context + 0x204) = *(int *)(state_buffer + -0x20 + buffer_ptr * 0x30);
    *(int *)(render_context + 0x208) = *(int *)(state_buffer + -0x1c + buffer_ptr * 0x30);
    *(uint64_t *)(render_context + 0x120) = *(uint64_t *)(state_buffer + -0x18 + buffer_ptr * 0x30);
    *(int *)(render_context + 0x128) = *(int *)(state_buffer + -0x10 + buffer_ptr * 0x30);
    *(float *)(render_context + 0x138) = *(float *)(render_context + 0x104) - 9999.0f;
    
    // 检查是否需要更新材质
    if (*(char *)(state_buffer + -3 + buffer_ptr * 0x30) != '\0') {
        depth_max = *(float *)(state_buffer + -0x10 + buffer_ptr * 0x30);
        depth_value = *(float *)(render_context + 0x134);
        if (*(float *)(render_context + 0x134) <= depth_max) {
            depth_value = depth_max;
        }
        position[0] = depth_min - max_x;
        *(float *)(render_context + 0x128) = depth_value;
        position[1] = max_y - min_x;
        depth_max = depth_min;
        position[2] = max_x;
        position[3] = min_x;
        func_0x000180124080(&position[0], *(int *)(state_buffer + -0x10 + buffer_ptr * 0x30), param3, param4, max_x);
        
        temp_context = *(longlong *)(engine_base + 0x1af8);
        *(uint64_t *)(temp_context + 0x144) = 0;
        *(float *)(temp_context + 0x14c) = max_x;
        *(float *)(temp_context + 0x150) = min_x;
        *(float *)(temp_context + 0x154) = depth_min;
        *(float *)(temp_context + 0x158) = max_y;
        
        temp_context = *(longlong *)(engine_base + 0x1af8);
        if ((((((*(float *)(temp_context + 0x22c) <= max_y && max_y != *(float *)(temp_context + 0x22c)) &&
               (min_x < *(float *)(temp_context + 0x234))) &&
              (*(float *)(temp_context + 0x228) <= depth_max && depth_max != *(float *)(temp_context + 0x228))) &&
             (max_x < *(float *)(temp_context + 0x230))) || (*(char *)(engine_base + 0x2e38) != '\0')) &&
            (update_flag = FUN_180128040(&position[2], &position[3], 1), update_flag != '\0')) {
            *(uint *)(temp_context + 0x148) = *(uint *)(temp_context + 0x148) | 1;
        }
    }
    
    // 更新材质ID
    material_id = *(int *)(engine_base + 0x1b2c);
    if (((*(int *)(state_buffer + -8 + buffer_ptr * 0x30) == material_id) || 
         (*(int *)(engine_base + 0x1b34) != material_id)) || (material_id == 0)) {
        if ((*(char *)(state_buffer + -4 + buffer_ptr * 0x30) != '\0') || 
            (*(char *)(engine_base + 0x1b3f) == '\0')) {
            goto update_complete;
        }
        material_id = *(int *)(engine_base + 0x1b30);
    }
    *(int *)(render_context + 0x144) = material_id;
    
update_complete:
    *(float *)(render_context + 0x14c) = max_x;
    *(float *)(render_context + 0x150) = min_x;
    *(float *)(render_context + 0x154) = depth_min;
    *(float *)(render_context + 0x158) = max_y;
    *(int *)(render_context + 0x1e8) = *(int *)(render_context + 0x1e8) - 1;
    
    return;
}