#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part117_sub002_sub002.c - 核心引擎模块第117部分第二子文件第二子文件
// 包含1个函数

/**
 * 处理场景对象的状态更新和渲染
 * @param scene_name 场景名称字符串
 * @param render_params 渲染参数指针
 * @param render_flags 渲染标志位
 */
void process_scene_object_state(char *scene_name, uint8_t *render_params, uint render_flags)
{
    char temp_flag1;
    uint16_t temp_u16;
    bool condition1;
    bool condition2;
    longlong global_base_ptr;
    uint8_t *temp_ptr1;
    char temp_char1;
    char temp_char2;
    uint temp_uint1;
    uint32_t temp_u32_1;
    uint32_t temp_u32_2;
    char *temp_char_ptr;
    longlong temp_long1;
    uint64_t temp_u64;
    longlong *long_ptr1;
    float *float_ptr1;
    float *float_ptr2;
    longlong temp_long2;
    uint64_t *u64_ptr1;
    uint64_t temp_u64_2;
    uint8_t temp_u8;
    uint temp_uint2;
    uint temp_uint3;
    int temp_int1;
    int *int_ptr1;
    uint64_t *u64_ptr2;
    int temp_int2;
    uint32_t *u32_ptr1;
    uint8_t temp_byte1;
    uint temp_uint4;
    longlong temp_long3;
    bool condition3;
    uint64_t temp_u64_3;
    float temp_float1;
    float temp_float2;
    float temp_float3;
    float temp_float4;
    float temp_float5;
    float temp_float6;
    float temp_float7;
    uint8_t buffer_array1[32];
    float *stack_float_ptr1;
    float *stack_float_ptr2;
    float *stack_float_ptr3;
    longlong *stack_long_ptr1;
    char stack_char1;
    char stack_char2;
    char stack_char3;
    uint64_t stack_u64_1;
    char stack_char4;
    char stack_char_array1[7];
    float stack_float1;
    float stack_float2;
    uint stack_uint1;
    uint64_t stack_u64_2;
    int stack_int1;
    float stack_float3;
    float stack_float4;
    float stack_float5;
    float stack_float6;
    float stack_float7;
    float stack_float8;
    float stack_float9;
    float stack_float10;
    float stack_float11;
    float stack_float12;
    float stack_float13;
    float stack_float14;
    float stack_float15;
    float stack_float16;
    float stack_float17;
    float stack_float18;
    float stack_float19;
    float stack_float20;
    float stack_float21;
    float stack_float22;
    float stack_float23;
    float stack_float24;
    float stack_float25;
    float stack_float26;
    float stack_float27;
    float stack_float28;
    float stack_float29;
    float stack_float30;
    float stack_float31;
    float stack_float32;
    float stack_float33;
    float stack_float34;
    float stack_float35;
    float stack_float36;
    float stack_float37;
    float stack_float38;
    float stack_float39;
    float stack_float40;
    float stack_float41;
    float stack_float42;
    float stack_float43;
    float stack_float44;
    uint64_t stack_u64_3;
    uint64_t stack_u64_4;
    longlong stack_long1;
    uint8_t *stack_u8_ptr1;
    uint stack_uint5;
    float stack_float45;
    float stack_float46;
    float stack_float47;
    float stack_float48;
    float stack_float49;
    float stack_float50;
    float stack_float51;
    float stack_float52;
    float stack_float53;
    float stack_float54;
    uint stack_uint6;
    float stack_float55;
    float stack_float56;
    uint32_t stack_u32_1;
    float stack_float57;
    float stack_float58;
    float stack_float59;
    char *stack_char_ptr1;
    uint64_t stack_u64_5;
    uint64_t stack_u64_6;
    uint64_t stack_u64_7;
    
    // 获取全局基础指针
    global_base_ptr = GLOBAL_ENGINE_BASE_ADDRESS;
    stack_u64_7 = GLOBAL_RANDOM_SEED ^ (uint64_t)buffer_array1;
    stack_u8_ptr1 = render_params;
    stack_char_ptr1 = scene_name;
    stack_long_ptr1 = (longlong *)get_current_scene_manager();
    temp_int1 = *(int *)(global_base_ptr + ENGINE_CONFIG_OFFSET);
    stack_char2 = stack_long_ptr1 == (longlong *)0x0;
    
    // 如果场景管理器为空，则创建新的场景管理器
    if (stack_long_ptr1 == (longlong *)0x0) {
        if (*(int *)(global_base_ptr + RENDER_CONTEXT_OFFSET) == 0) {
            stack_u64_1 = 0;
            u64_ptr1 = &stack_u64_1;
        }
        else {
            u64_ptr1 = &stack_u64_2;
            stack_u64_2 = *(longlong *)(global_base_ptr + SHADER_CACHE_OFFSET);
        }
        stack_long_ptr1 = (longlong *)create_scene_manager(scene_name, *u64_ptr1, render_flags);
    }
    
    // 初始化场景对象属性
    stack_int1 = (int)stack_long_ptr1[0x50];
    temp_uint1 = *(uint *)((longlong)stack_long_ptr1 + 0xdc);
    temp_uint4 = render_flags | 6;
    if ((render_flags & 0xc0200) != 0xc0200) {
        temp_uint4 = render_flags;
    }
    temp_int2 = *(int *)(global_base_ptr + MAX_OBJECTS_OFFSET);
    stack_char3 = stack_int1 < temp_int2 + -1;
    
    // 检查是否需要更新场景对象
    if ((temp_uint4 >> 0x1a & 1) != 0) {
        int_ptr1 = (int *)((longlong)*(int *)(global_base_ptr + OBJECT_POOL_OFFSET) * 0x30 + *(longlong *)(global_base_ptr + OBJECT_LIST_OFFSET));
        stack_char3 = (bool)stack_char3 || (stack_long_ptr1 != *(longlong **)(int_ptr1 + 2) || (int)stack_long_ptr1[0x18] != *int_ptr1);
    }
    
    // 设置更新标志
    if (((bool)stack_char3) || (0 < (int)temp_uint1)) {
        temp_char1 = '\x01';
    }
    else {
        temp_char1 = '\0';
    }
    *(char *)((longlong)stack_long_ptr1 + 0xb5) = temp_char1;
    stack_uint5 = temp_uint1;
    stack_int2 = temp_int2;
    
    // 如果需要更新，则调用更新函数
    if (temp_char1 != '\0') {
        update_scene_object_flags(stack_long_ptr1, 8, 1);
    }
    
    // 处理场景对象状态切换
    if (stack_int1 == temp_int2) {
        temp_uint4 = *(uint *)((longlong)stack_long_ptr1 + 0xc);
    }
    else {
        *(uint32_t *)(stack_long_ptr1 + 2) = *(uint32_t *)((longlong)stack_long_ptr1 + 0xc);
        *(uint *)((longlong)stack_long_ptr1 + 0xc) = temp_uint4;
        *(int *)(stack_long_ptr1 + 0x50) = temp_int2;
        *(uint16_t *)((longlong)stack_long_ptr1 + 0xba) = 0;
        temp_u16 = *(uint16_t *)(global_base_ptr + OBJECT_COUNTER_OFFSET);
        *(int *)(global_base_ptr + OBJECT_COUNTER_OFFSET) = *(int *)(global_base_ptr + OBJECT_COUNTER_OFFSET) + 1;
        *(uint16_t *)((longlong)stack_long_ptr1 + 0xbc) = temp_u16;
    }
    
    // 处理渲染状态
    if (*(int *)(global_base_ptr + RENDER_STATE_OFFSET) != 0) {
        update_render_state(stack_long_ptr1, *(uint32_t *)(global_base_ptr + MATERIAL_OFFSET));
    }
    
    // 处理特殊渲染模式
    if ((stack_int1 != temp_int2) &&
        ((((int)stack_long_ptr1[0x83] != 0 || (stack_long_ptr1[0x81] != 0)) ||
          ((*(char *)(global_base_ptr + RENDER_FLAG_OFFSET) != '\0' && (((temp_uint4 & 0x1200001) == 0 && (temp_int1 != 0)))))))) {
        apply_special_render_mode(stack_long_ptr1, render_params);
        temp_uint4 = *(uint *)((longlong)stack_long_ptr1 + 0xc);
    }
    
    // 处理纹理引用
    if ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) == 0) {
        if (*(int *)(global_base_ptr + ENGINE_CONFIG_OFFSET) == 0) {
            temp_long1 = 0;
        }
        else {
            temp_long1 = *(longlong *)(*(longlong *)(global_base_ptr + TEXTURE_CACHE_OFFSET) + -8 + (longlong)*(int *)(global_base_ptr + ENGINE_CONFIG_OFFSET) * 8);
        }
    }
    else {
        temp_long1 = *(longlong *)(stack_long_ptr1[0x81] + 0x68);
    }
    
    // 处理着色器缓存
    if (stack_int1 == temp_int2) {
        stack_long1 = stack_long_ptr1[0x73];
    }
    else {
        stack_long1 = 0;
        if ((temp_uint4 & 0x5000000) != 0) {
            stack_long1 = temp_long1;
        }
    }
    
    // 更新场景对象引用
    update_object_reference(global_base_ptr + ENGINE_CONFIG_OFFSET, &stack_long_ptr1);
    *(uint64_t *)(global_base_ptr + LAST_OBJECT_OFFSET) = 0;
    initialize_object_rendering(stack_long_ptr1, 1);
    
    // 处理对象池更新
    if ((temp_uint4 >> 0x1a & 1) != 0) {
        u32_ptr1 = (uint32_t *)((longlong)*(int *)(global_base_ptr + OBJECT_POOL_OFFSET) * 0x30 + *(longlong *)(global_base_ptr + OBJECT_LIST_OFFSET));
        *(longlong **)(u32_ptr1 + 2) = stack_long_ptr1;
        update_object_pool((int *)(global_base_ptr + OBJECT_POOL_OFFSET), u32_ptr1);
        *(uint32_t *)(stack_long_ptr1 + 0x18) = *u32_ptr1;
    }
    
    // 处理可见性检查
    if ((0 < (int)temp_uint1) && ((temp_uint4 >> 0x18 & 1) == 0)) {
        *(uint32_t *)(stack_long_ptr1 + 0x79) = 0;
    }
    
    condition3 = false;
    condition2 = false;
    stack_char1 = '\0';
    
    // 处理阴影和光照计算
    if (*(uint *)(global_base_ptr + SHADOW_ENABLE_OFFSET) != 0) {
        temp_uint1 = *(uint *)(stack_long_ptr1 + 0x1c) & *(uint *)(global_base_ptr + SHADOW_ENABLE_OFFSET);
        stack_char1 = temp_uint1 != 0;
        if ((temp_uint1 == 0) || (*(float *)(global_base_ptr + SHADOW_DISTANCE_OFFSET) * *(float *)(global_base_ptr + SHADOW_DISTANCE_OFFSET) + *(float *)(global_base_ptr + LIGHT_INTENSITY_OFFSET) * *(float *)(global_base_ptr + LIGHT_INTENSITY_OFFSET) <= 1e-05)) {
            calculate_shadow_volume(stack_long_ptr1, global_base_ptr + SHADOW_VOLUME_OFFSET);
        }
        else {
            stack_long_ptr1[0x1e] = *(longlong *)(global_base_ptr + SHADOW_VOLUME_OFFSET);
            stack_long_ptr1[0x1f] = *(longlong *)(global_base_ptr + SHADOW_DISTANCE_OFFSET);
            *(uint *)(stack_long_ptr1 + 0x1c) = *(uint *)(stack_long_ptr1 + 0x1c) & 0xfffffff1;
        }
    }
    
    // 处理反射和环境光遮蔽
    if (*(uint *)(global_base_ptr + REFLECTION_ENABLE_OFFSET) != 0) {
        temp_uint1 = *(uint *)((longlong)stack_long_ptr1 + 0xe4) & *(uint *)(global_base_ptr + REFLECTION_ENABLE_OFFSET);
        if ((temp_uint1 == 0) || (*(float *)(global_base_ptr + REFLECTION_INTENSITY_OFFSET) <= 0.0)) {
            condition3 = false;
        }
        else {
            condition3 = true;
        }
        if ((temp_uint1 == 0) || (*(float *)(global_base_ptr + AMBIENT_OCCLUSION_OFFSET) <= 0.0)) {
            condition2 = false;
        }
        else {
            condition2 = true;
        }
        init_lighting_system();
    }
    
    // 处理动画状态
    if (*(int *)(global_base_ptr + ANIMATION_SYSTEM_OFFSET) == 0) {
        if (stack_int1 != stack_int2) {
            stack_long_ptr1[0xd] = 0;
        }
    }
    else {
        stack_long_ptr1[0xd] = *(longlong *)(global_base_ptr + ANIMATION_STATE_OFFSET);
        if (*(float *)((longlong)stack_long_ptr1 + 0x6c) != 0.0) {
            temp_float1 = (float)get_current_frame_time();
            temp_float2 = (float)get_animation_delta_time(stack_long_ptr1);
            *(float *)((longlong)stack_long_ptr1 + 0x6c) = temp_float1 + temp_float2 + *(float *)((longlong)stack_long_ptr1 + 0x6c);
        }
    }
    
    // 保存状态变量
    temp_int2 = stack_int2;
    temp_int1 = stack_int1;
    temp_u64 = *(uint64_t *)(global_base_ptr + POST_PROCESS_OFFSET);
    *(uint64_t *)((longlong)stack_long_ptr1 + 0x14) = *(uint64_t *)(global_base_ptr + POST_PROCESS_SETTINGS_OFFSET);
    *(uint64_t *)((longlong)stack_long_ptr1 + 0x1c) = temp_u64;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x24) = *(uint32_t *)(global_base_ptr + POST_PROCESS_QUALITY_OFFSET);
    
    // 处理后期处理效果
    if (*(uint *)(global_base_ptr + BLOOM_ENABLE_OFFSET) != 0) {
        if ((*(uint *)(global_base_ptr + BLOOM_ENABLE_OFFSET) & *(uint *)(stack_long_ptr1 + 0x1d)) != 0) {
            *(uint8_t *)((longlong)stack_long_ptr1 + 0xb2) = *(uint8_t *)(global_base_ptr + BLOOM_INTENSITY_OFFSET);
            *(uint *)(stack_long_ptr1 + 0x1d) = *(uint *)(stack_long_ptr1 + 0x1d) & 0xfffffff1;
        }
    }
    
    // 处理景深效果
    if (*(int *)(global_base_ptr + DEPTH_OF_FIELD_OFFSET) != 0) {
        init_depth_of_field_system();
    }
    
    // 处理更新标志
    if (*(char *)((longlong)stack_long_ptr1 + 0xb5) != '\0') {
        update_scene_object_flags(stack_long_ptr1, 8);
    }
    
    // 处理场景对象状态
    if (temp_int1 == temp_int2) {
        update_object_transform(stack_long_ptr1, stack_long_ptr1[5]);
        update_object_material(stack_long_ptr1);
        temp_long1 = stack_long1;
        goto FINAL_RENDER_STAGE;
    }
    
    // 处理渲染管线
    stack_float20 = (float)(temp_uint4 & 0x3000000);
    setup_render_pipeline(stack_long_ptr1, temp_uint4, stack_long1);
    stack_u64_5 = 0xff7fffffff7fffff;
    stack_u64_6 = 0x7f7fffff7f7fffff;
    *(uint8_t *)((longlong)stack_long_ptr1 + 0xaf) = 1;
    *(bool *)((longlong)stack_long_ptr1 + 0xb7) = stack_u8_ptr1 != (uint8_t *)0x0;
    init_render_buffers(&stack_float3, &stack_u64_5);
    stack_long_ptr1[0x45] = CONCAT44(stack_float4, stack_float3);
    stack_long_ptr1[0x46] = CONCAT44(stack_float6, stack_float5);
    setup_vertex_buffer(stack_long_ptr1 + 0x43, 1);
    
    temp_char1 = stack_char2;
    
    // 处理对象名称匹配
    if (((((stack_long_ptr1[5] != 0) && (*(longlong **)(stack_long_ptr1[5] + 0x78) == stack_long_ptr1)) ||
          ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) != 0)) ||
         ((*(longlong *)(global_base_ptr + CURRENT_SCENE_OFFSET) != 0 &&
           ((*(uint *)((longlong)stack_long_ptr1 + 0xc) & 0x80000) == 0)))) && (stack_char2 == '\0')) {
        temp_char_ptr1 = stack_char_ptr1;
        do {
            temp_char1 = *temp_char_ptr1;
            temp_char2 = temp_char_ptr1[*stack_long_ptr1 - (longlong)stack_char_ptr1];
            if (temp_char1 != temp_char2) break;
            temp_char_ptr1 = temp_char_ptr1 + 1;
        } while (temp_char2 != '\0');
        if (temp_char1 != temp_char2) {
            stack_u64_1 = (longlong)(int)stack_long_ptr1[0x10];
            temp_long1 = find_object_by_name(*stack_long_ptr1, &stack_u64_1, stack_char_ptr1);
            *stack_long_ptr1 = temp_long1;
            *(float *)(stack_long_ptr1 + 0x10) = (float)stack_u64_1;
        }
    }
    
    // 处理边界框计算
    if (*(char *)((longlong)stack_long_ptr1 + 0xb2) == '\0') {
        if (((*(char *)((longlong)stack_long_ptr1 + 0xb6) == '\0') ||
            (*(int *)((longlong)stack_long_ptr1 + 0xdc) != 0)) || ((int)stack_long_ptr1[0x1b] < 1)) {
            temp_float1 = *(float *)(stack_long_ptr1 + 0xd);
            if (temp_float1 == 0.0) {
                temp_float1 = (*(float *)(stack_long_ptr1 + 0x23) - *(float *)(stack_long_ptr1 + 8)) + *(float *)((longlong)stack_long_ptr1 + 0x8c);
            }
            temp_float2 = *(float *)((longlong)stack_long_ptr1 + 0x6c);
            if (temp_float2 == 0.0) {
                temp_float2 = (*(float *)((longlong)stack_long_ptr1 + 0x11c) - *(float *)((longlong)stack_long_ptr1 + 0x44)) + *(float *)(stack_long_ptr1 + 0x12);
            }
            temp_float1 = (float)(int)temp_float1 + *(float *)(stack_long_ptr1 + 0xe);
            temp_float2 = (float)(int)temp_float2 + *(float *)((longlong)stack_long_ptr1 + 0x74);
        }
        else {
            temp_float1 = *(float *)(stack_long_ptr1 + 0xc);
            temp_float2 = *(float *)((longlong)stack_long_ptr1 + 100);
        }
    }
    else {
        temp_float1 = *(float *)(stack_long_ptr1 + 0xc);
        temp_float2 = *(float *)((longlong)stack_long_ptr1 + 100);
    }
    
    *(float *)(stack_long_ptr1 + 0xc) = temp_float1;
    *(float *)((longlong)stack_long_ptr1 + 100) = temp_float2;
    
    // 更新引用计数
    if (0 < (int)stack_long_ptr1[0x1b]) {
        *(int *)(stack_long_ptr1 + 0x1b) = (int)stack_long_ptr1[0x1b] + -1;
    }
    if (0 < *(int *)((longlong)stack_long_ptr1 + 0xdc)) {
        *(int *)((longlong)stack_long_ptr1 + 0xdc) = *(int *)((longlong)stack_long_ptr1 + 0xdc) + -1;
    }
    
    // 处理条件渲染
    if ((temp_char1 != '\0') && ((!condition3 || (!condition2)))) {
        *(uint32_t *)((longlong)stack_long_ptr1 + 0xdc) = 1;
    }
    
    if (((stack_char3 != '\0') && ((temp_uint4 & 0x6000000) != 0)) && (*(uint32_t *)((longlong)stack_long_ptr1 + 0xdc) = 1, (temp_uint4 & 0x40) != 0)) {
        if (!condition3) {
            *(uint32_t *)(stack_long_ptr1 + 10) = 0;
            *(uint32_t *)(stack_long_ptr1 + 9) = 0;
        }
        if (!condition2) {
            *(uint32_t *)((longlong)stack_long_ptr1 + 0x54) = 0;
            *(uint32_t *)((longlong)stack_long_ptr1 + 0x4c) = 0;
        }
        stack_long_ptr1[0xc] = 0;
    }
    
    // 应用材质和着色器
    apply_material_shader(stack_long_ptr1);
    update_object_transform(stack_long_ptr1, stack_long_ptr1[5]);
    
    // 处理透明度
    if ((*(uint *)(global_base_ptr + 8) & 0x8000) == 0) {
        temp_u32_1 = 0x3f800000;
    }
    else {
        temp_u32_1 = *(uint32_t *)(stack_long_ptr1[5] + 0x18);
    }
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x2dc) = temp_u32_1;
    update_object_material(stack_long_ptr1);
    
    temp_uint1 = *(uint *)((longlong)stack_long_ptr1 + 0xc);
    temp_u64_3 = (uint64_t)temp_uint1;
    stack_u64_2 = CONCAT44(stack_u64_2._4_4_, temp_uint1);
    
    // 处理着色器类型
    if ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) == 0) {
        if ((temp_uint1 >> 0x18 & 1) == 0) {
            if (((temp_uint1 & 0x6000000) == 0) || ((temp_uint1 >> 0x1b & 1) != 0)) {
                temp_u32_1 = *(uint32_t *)(global_base_ptr + SHADER_TYPE_OFFSET);
            }
            else {
                temp_u32_1 = *(uint32_t *)(global_base_ptr + SHADER_VARIANT_OFFSET);
            }
            *(uint32_t *)((longlong)stack_long_ptr1 + 0x7c) = temp_u32_1;
        }
        else {
            *(uint32_t *)((longlong)stack_long_ptr1 + 0x7c) = *(uint32_t *)(global_base_ptr + SHADER_SPECIAL_OFFSET);
        }
    }
    else {
        *(uint32_t *)((longlong)stack_long_ptr1 + 0x7c) = 0;
    }
    
    // 处理LOD级别
    if ((((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) == 0) && ((temp_uint1 & 0x5010000) == 0x1000000)) && (*(float *)((longlong)stack_long_ptr1 + 0x7c) == 0.0)) {
        if ((temp_uint1 >> 10 & 1) == 0) {
            *(uint32_t *)(stack_long_ptr1 + 0xe) = 0;
            *(uint32_t *)((longlong)stack_long_ptr1 + 0x74) = 0;
        }
        else {
            temp_u32_1 = *(uint32_t *)(global_base_ptr + LOD_BIAS_OFFSET);
            *(uint32_t *)(stack_long_ptr1 + 0xe) = 0;
            *(uint32_t *)((longlong)stack_long_ptr1 + 0x74) = temp_u32_1;
        }
    }
    else {
        stack_long_ptr1[0xe] = *(longlong *)(global_base_ptr + LOD_DISTANCE_OFFSET);
    }
    
    // 计算LOD距离
    temp_float1 = *(float *)(stack_long_ptr1 + 0xe);
    if (*(float *)(stack_long_ptr1 + 0xe) <= *(float *)(global_base_ptr + MIN_LOD_DISTANCE_OFFSET)) {
        temp_float1 = *(float *)(global_base_ptr + MIN_LOD_DISTANCE_OFFSET);
    }
    if (temp_float1 <= *(float *)(global_base_ptr + MAX_LOD_DISTANCE_OFFSET)) {
        temp_float1 = *(float *)(global_base_ptr + MAX_LOD_DISTANCE_OFFSET);
    }
    *(float *)(stack_long_ptr1 + 0x30) = temp_float1;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x184) = *(uint32_t *)(global_base_ptr + LOD_QUALITY_OFFSET);
    
    // 处理遮挡剔除
    if (((temp_uint1 & 0x21) == 0) && ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) == 0)) {
        perform_occlusion_culling(stack_long_ptr1, &stack_u64_5);
        if ((((*(longlong **)(global_base_ptr + CURRENT_OBJECT_OFFSET) == stack_long_ptr1) && (*(int *)(global_base_ptr + OCCLUSION_QUERY_OFFSET) == 0)) && (*(int *)(global_base_ptr + OCCLUSION_RESULT_OFFSET) == 0)) && ((temp_char1 = check_occlusion_result(&stack_u64_5, &stack_u64_6, 1), temp_char1 != '\0' && (*(char *)(global_base_ptr + OCCLUSION_FLAG_OFFSET) != '\0')))) {
            *(uint8_t *)((longlong)stack_long_ptr1 + 0xb3) = 1;
        }
        if (*(char *)((longlong)stack_long_ptr1 + 0xb3) != '\0') {
            *(bool *)((longlong)stack_long_ptr1 + 0xb2) = *(char *)((longlong)stack_long_ptr1 + 0xb2) == '\0';
            if (((*(uint *)((longlong)stack_long_ptr1 + 0xc) & 0x100) == 0) && (*(float *)(GLOBAL_ENGINE_BASE_ADDRESS + OCCLUSION_TIMEOUT_OFFSET) <= 0.0)) {
                *(uint32_t *)(GLOBAL_ENGINE_BASE_ADDRESS + OCCLUSION_TIMEOUT_OFFSET) = *(uint32_t *)(GLOBAL_ENGINE_BASE_ADDRESS + ENGINE_CONFIG_OFFSET);
            }
            update_occlusion_data(stack_long_ptr1);
        }
    }
    else {
        *(uint8_t *)((longlong)stack_long_ptr1 + 0xb2) = 0;
    }
    
    // 处理视锥体裁剪
    long_ptr1 = stack_long_ptr1;
    temp_long1 = GLOBAL_ENGINE_BASE_ADDRESS;
    *(uint8_t *)((longlong)stack_long_ptr1 + 0xb3) = 0;
    if ((*(uint *)((longlong)stack_long_ptr1 + 0xc) >> 0x19 & 1) == 0) {
        stack_u64_2 = *(uint64_t *)(temp_long1 + FRUSTUM_DATA_OFFSET);
        if ((*(uint *)((longlong)stack_long_ptr1 + 0xc) & 0x14000000) != 0) {
            stack_u64_1 = 0x4080000040800000;
            u64_ptr1 = (uint64_t *)calculate_frustum_intersection(&stack_u64_3, &stack_u64_2, &stack_u64_1);
            stack_u64_2 = *u64_ptr1;
        }
        temp_float1 = *(float *)(long_ptr1[5] + 0x10);
        temp_float2 = *(float *)(long_ptr1[5] + 0x14);
        if (*(char *)((longlong)long_ptr1 + 0xae) != '\0') {
            temp_float1 = 3.4028235e+38;
            temp_float2 = 3.4028235e+38;
        }
        temp_int1 = *(int *)((longlong)long_ptr1 + 0x3c);
        if ((-1 < temp_int1) && (temp_int1 < *(int *)(temp_long1 + MAX_FRUSTUM_PLANES_OFFSET))) {
            temp_float1 = *(float *)(*(longlong *)(temp_long1 + FRUSTUM_PLANES_OFFSET) + 0x18 + (longlong)temp_int1 * 0x24);
            temp_float2 = *(float *)(*(longlong *)(temp_long1 + FRUSTUM_PLANES_OFFSET) + 0x1c + (longlong)temp_int1 * 0x24);
        }
        stack_u64_1 = CONCAT44(temp_float2 - (*(float *)(temp_long1 + FRUSTUM_ADJUST_OFFSET) + *(float *)(temp_long1 + FRUSTUM_ADJUST_OFFSET)), temp_float1 - (*(float *)(temp_long1 + FRUSTUM_BASE_OFFSET) + *(float *)(temp_long1 + FRUSTUM_BASE_OFFSET)));
        u64_ptr1 = (uint64_t *)apply_frustum_culling(&stack_u64_3, long_ptr1 + 0xc, &stack_u64_2, *u64_ptr1);
        update_object_bounds(&stack_float23, long_ptr1, CONCAT44(stack_float24, stack_float23));
        if (((stack_float22 < *(float *)(long_ptr1 + 0xc)) && ((*(uint *)((longlong)long_ptr1 + 0xc) & 8) == 0)) && ((*(uint *)((longlong)long_ptr1 + 0xc) >> 0xb & 1) != 0)) {
            stack_float24 = stack_float24 + *(float *)(temp_long1 + BOUNDS_EXPANSION_OFFSET);
        }
        temp_long2 = GLOBAL_ENGINE_BASE_ADDRESS;
        temp_float2 = stack_float23;
        temp_float1 = stack_float24;
        if ((stack_float21 < *(float *)((longlong)long_ptr1 + 100)) && ((*(uint8_t *)((longlong)long_ptr1 + 0xc) & 8) == 0)) {
            stack_float23 = stack_float23 + *(float *)(temp_long1 + BOUNDS_EXPANSION_OFFSET);
            temp_float2 = stack_float23;
        }
    }
    else {
        temp_long2 = temp_long1;
        temp_float2 = *(float *)(stack_long_ptr1 + 0xc);
        temp_float1 = *(float *)((longlong)stack_long_ptr1 + 100);
    }
    
    // 处理渲染优先级
    temp_float4 = 3.4028235e+38;
    stack_u64_1 = CONCAT44(temp_float1, temp_float2);
    temp_float6 = 3.4028235e+38;
    
    if (((temp_uint1 & 0x40) == 0) || (*(char *)((longlong)stack_long_ptr1 + 0xb2) != '\0')) {
        if ((0 < *(int *)((longlong)stack_long_ptr1 + 0xc4)) || (0 < (int)stack_long_ptr1[0x19])) {
            if ((!condition3) && (0 < *(int *)((longlong)stack_long_ptr1 + 0xc4))) {
                temp_float4 = temp_float2;
                if ((*(char *)((longlong)stack_long_ptr1 + 0xcc) != '\0') && (temp_float4 = *(float *)(stack_long_ptr1 + 10), *(float *)(stack_long_ptr1 + 10) <= temp_float2)) {
                    temp_float4 = temp_float2;
                }
                *(float *)(stack_long_ptr1 + 10) = temp_float4;
            }
            if ((!condition2) && (0 < (int)stack_long_ptr1[0x19])) {
                temp_float6 = temp_float1;
                if ((*(char *)((longlong)stack_long_ptr1 + 0xcc) != '\0') && (temp_float6 = *(float *)((longlong)stack_long_ptr1 + 0x54), *(float *)((longlong)stack_long_ptr1 + 0x54) <= temp_float1)) {
                    temp_float6 = temp_float1;
                }
                *(float *)((longlong)stack_long_ptr1 + 0x54) = temp_float6;
            }
            if (((*(char *)((longlong)stack_long_ptr1 + 0xb2) == '\0') && ((*(uint *)((longlong)stack_long_ptr1 + 0xc) & 0x100) == 0)) && (*(float *)(temp_long2 + OCCLUSION_TIMEOUT_OFFSET) <= 0.0)) {
                *(uint32_t *)(temp_long2 + OCCLUSION_TIMEOUT_OFFSET) = *(uint32_t *)(temp_long2 + ENGINE_CONFIG_OFFSET);
            }
        }
    }
    else {
        if (!condition3) {
            *(float *)(stack_long_ptr1 + 10) = temp_float2;
            temp_float4 = temp_float2;
        }
        if (!condition2) {
            *(float *)((longlong)stack_long_ptr1 + 0x54) = temp_float1;
            temp_float6 = temp_float1;
        }
    }
    
    // 更新渲染优先级
    u32_ptr1 = (uint32_t *)update_object_bounds(&stack_u64_3, stack_long_ptr1, stack_long_ptr1[10]);
    temp_u32_1 = u32_ptr1[1];
    *(uint32_t *)(stack_long_ptr1 + 10) = *u32_ptr1;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x54) = temp_u32_1;
    
    // 处理特殊渲染模式
    if ((*(char *)((longlong)stack_long_ptr1 + 0xb2) == '\0') || ((temp_uint1 >> 0x18 & 1) != 0)) {
        long_ptr1 = &stack_u64_2;
        stack_u64_2 = stack_long_ptr1[10];
    }
    else {
        temp_u64 = calculate_object_bounds(stack_long_ptr1, &stack_u64_5);
        long_ptr1 = (longlong *)apply_bounds_transform(temp_u64, &stack_u64_3);
    }
    
    temp_long1 = stack_long1;
    temp_char1 = stack_char3;
    temp_char2 = stack_char1;
    stack_long_ptr1[9] = *long_ptr1;
    
    // 处理裁剪结果
    if (*(char *)((longlong)stack_long_ptr1 + 0xb2) == '\0') {
        if (temp_float4 == 3.4028235e+38) {
            temp_float1 = *(float *)(stack_long_ptr1 + 0xb);
        }
        else {
            temp_float1 = *(float *)(stack_long_ptr1 + 10);
        }
        if (temp_float6 == 3.4028235e+38) {
            temp_float2 = *(float *)((longlong)stack_long_ptr1 + 0x5c);
        }
        else {
            temp_float2 = *(float *)((longlong)stack_long_ptr1 + 0x54);
        }
        if (((temp_uint1 >> 0xe & 1) != 0) || ((temp_float2 < *(float *)((longlong)stack_long_ptr1 + 100) && ((temp_uint1 & 8) == 0)))) {
            temp_char2 = '\x01';
        }
        else {
            temp_char2 = '\0';
        }
        *(char *)((longlong)stack_long_ptr1 + 0xad) = temp_char2;
        if ((temp_uint1 >> 0xf & 1) == 0) {
            if (temp_char2 == '\0') {
                temp_float4 = 0.0;
            }
            else {
                temp_float4 = *(float *)(global_base_ptr + BOUNDS_EXPANSION_OFFSET);
            }
            if ((temp_float1 - temp_float4 < *(float *)(stack_long_ptr1 + 0xc)) && ((temp_uint1 & 0x808) == 0x800)) goto SKIP_RENDERING;
            temp_char2 = '\0';
        }
        else {
SKIP_RENDERING:
            temp_char2 = '\x01';
        }
        *(char *)((longlong)stack_long_ptr1 + 0xac) = temp_char2;
        if ((temp_char2 != '\0') && (*(char *)((longlong)stack_long_ptr1 + 0xad) == '\0')) {
            if ((*(float *)((longlong)stack_long_ptr1 + 100) <= temp_float2 - *(float *)(global_base_ptr + BOUNDS_EXPANSION_OFFSET)) || ((temp_uint1 & 8) != 0)) {
                temp_u8 = 0;
            }
            else {
                temp_u8 = 1;
            }
            *(uint8_t *)((longlong)stack_long_ptr1 + 0xad) = temp_u8;
        }
        if (*(char *)((longlong)stack_long_ptr1 + 0xac) == '\0') {
            temp_u32_1 = 0;
        }
        else {
            temp_u32_1 = *(uint32_t *)(global_base_ptr + BOUNDS_EXPANSION_OFFSET);
        }
        if (*(char *)((longlong)stack_long_ptr1 + 0xad) == '\0') {
            temp_u32_2 = 0;
        }
        else {
            temp_u32_2 = *(uint32_t *)(global_base_ptr + BOUNDS_EXPANSION_OFFSET);
        }
        *(uint32_t *)((longlong)stack_long_ptr1 + 0xa4) = temp_u32_2;
        *(uint32_t *)(stack_long_ptr1 + 0x15) = temp_u32_1;
    }
    
    stack_uint6 = 0xffffffff;
    
    // 处理动态对象
    if (((stack_char3 != '\0') && (*(uint32_t *)((longlong)stack_long_ptr1 + 0xd4) = 0xffffffff, (temp_uint1 >> 0x1a & 1) != 0)) && (stack_char1 == '\0')) {
        temp_u32_1 = *(uint32_t *)(*(longlong *)(global_base_ptr + DYNAMIC_OBJECTS_OFFSET) + -0xc + (longlong)*(int *)(global_base_ptr + OBJECT_POOL_OFFSET) * 0x30);
        *(uint32_t *)(stack_long_ptr1 + 8) = *(uint32_t *)(*(longlong *)(global_base_ptr + DYNAMIC_OBJECTS_OFFSET) + -0x10 + (longlong)*(int *)(global_base_ptr + OBJECT_POOL_OFFSET) * 0x30);
        *(uint32_t *)((longlong)stack_long_ptr1 + 0x44) = temp_u32_1;
    }
    
    temp_uint4 = temp_uint1 & 0x1000000;
    stack_uint6 = temp_uint4;
    if (temp_uint4 != 0) {
        *(uint16_t *)((longlong)stack_long_ptr1 + 0xba) = *(uint16_t *)(stack_long1 + 0x188);
        update_object_reference((uint16_t *)(stack_long1 + 0x188), &stack_long_ptr1);
        if ((((temp_uint1 >> 0x1a & 1) == 0) && (stack_char1 == '\0')) && (stack_float20 != 3.761582e-37)) {
            stack_long_ptr1[8] = *(longlong *)(temp_long1 + SHADER_CACHE_OFFSET);
        }
    }
    
    // 处理纹理动画
    if ((*(float *)(stack_long_ptr1 + 0x1e) == 3.4028235e+38) || (*(int *)((longlong)stack_long_ptr1 + 0xdc) != 0)) {
        if ((temp_uint1 >> 0x1c & 1) == 0) {
            if (((((temp_uint1 >> 0x1a & 1) != 0) && (stack_char1 == '\0')) && (0 < (int)stack_uint5)) || (((temp_char2 = stack_char1, (temp_uint1 >> 0x19 & 1) != 0 && (stack_char1 == '\0')) && (stack_float20 != 3.761582e-37)))) {
                u32_ptr1 = (uint32_t *)calculate_texture_animation(&stack_u64_3, stack_long_ptr1);
                temp_u32_1 = u32_ptr1[1];
                *(uint32_t *)(stack_long_ptr1 + 8) = *u32_ptr1;
                *(uint32_t *)((longlong)stack_long_ptr1 + 0x44) = temp_u32_1;
                temp_char2 = stack_char1;
            }
        }
        else {
            u32_ptr1 = (uint32_t *)calculate_texture_animation(&stack_u64_3, stack_long_ptr1);
            temp_u32_1 = u32_ptr1[1];
            *(uint32_t *)(stack_long_ptr1 + 8) = *u32_ptr1;
            *(uint32_t *)((longlong)stack_long_ptr1 + 0x44) = temp_u32_1;
        }
    }
    else {
        temp_float2 = *(float *)(stack_long_ptr1 + 0x1e) - *(float *)(stack_long_ptr1 + 0x1f) * *(float *)(stack_long_ptr1 + 10);
        temp_float1 = *(float *)((longlong)stack_long_ptr1 + 0xf4) - *(float *)((longlong)stack_long_ptr1 + 0x54) * *(float *)((longlong)stack_long_ptr1 + 0xfc);
        if (temp_float2 <= *(float *)(global_base_ptr + MIN_TEXTURE_COORD_OFFSET)) {
            temp_float2 = *(float *)(global_base_ptr + MIN_TEXTURE_COORD_OFFSET);
        }
        if (temp_float1 <= *(float *)(global_base_ptr + MIN_TEXTURE_COORD_OFFSET)) {
            temp_float1 = *(float *)(global_base_ptr + MIN_TEXTURE_COORD_OFFSET);
        }
        stack_u64_2 = CONCAT44(temp_float1, temp_float2);
        calculate_shadow_volume(stack_long_ptr1, &stack_u64_2, 0);
    }
    
    // 处理LOD切换
    if (*(int *)((longlong)stack_long_ptr1 + 0x3c) < 0) {
        if (*(char *)((longlong)stack_long_ptr1 + 0xae) != '\0') goto HANDLE_INSTANCED_RENDERING;
    }
    else {
        if (*(char *)((longlong)stack_long_ptr1 + 0xae) == '\0') {
            if (*(char *)(stack_long_ptr1[5] + 0x77) == '\0') {
                float_ptr1 = (float *)get_object_bounds(stack_long_ptr1[5], &stack_u64_5);
                float_ptr2 = (float *)get_object_transform(stack_long_ptr1, &stack_float3);
                if (((*float_ptr2 <= *float_ptr1 && *float_ptr1 != *float_ptr2) || (float_ptr2[1] <= float_ptr1[1] && float_ptr1[1] != float_ptr2[1])) || ((float_ptr1[2] < float_ptr2[2] || (float_ptr1[3] < float_ptr2[3])))) {
                    stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 4);
                    temp_long1 = update_object_lod(stack_long_ptr1, (int)stack_long_ptr1[1], stack_long_ptr1 + 8, stack_long_ptr1 + 9);
                    stack_long_ptr1[5] = temp_long1;
                    update_object_transform(stack_long_ptr1, temp_long1);
                    if ((*(uint *)(global_base_ptr + 8) & 0x8000) == 0) {
                        temp_u32_1 = 0x3f800000;
                    }
                    else {
                        temp_u32_1 = *(uint32_t *)(stack_long_ptr1[5] + 0x18);
                    }
                    *(uint32_t *)((longlong)stack_long_ptr1 + 0x2dc) = temp_u32_1;
                    update_object_material(stack_long_ptr1);
                }
            }
            if (*(char *)(stack_long_ptr1[5] + 0x49) != '\0') {
                stack_long_ptr1[8] = *(longlong *)(stack_long_ptr1[5] + 8);
            }
            if (*(char *)(stack_long_ptr1[5] + 0x4a) != '\0') {
                temp_long1 = *(longlong *)(stack_long_ptr1[5] + 0x10);
                stack_long_ptr1[10] = temp_long1;
                stack_long_ptr1[9] = temp_long1;
            }
            temp_uint2 = *(uint *)(stack_long_ptr1[5] + 4) & 0xffffffdc;
            temp_uint3 = temp_uint2 | 0x20;
            if ((temp_uint1 & 0x2000000) == 0) {
                temp_uint3 = temp_uint2;
            }
            if ((*(char *)(global_base_ptr + SPECIAL_RENDER_FLAG_OFFSET) != '\0') || ((temp_uint1 & 0x16000000) != 0)) {
                temp_uint3 = temp_uint3 | 2;
            }
            if ((*(char *)(global_base_ptr + DYNAMIC_RENDER_FLAG_OFFSET) != '\0') || ((temp_uint1 & 0x16000000) != 0)) {
                temp_uint3 = temp_uint3 | 1;
            }
            temp_int1 = (int)stack_long_ptr1[3];
            if ((temp_int1 == 0) && (temp_int1 = 0x11111111, *(char *)(global_base_ptr + HIGH_QUALITY_FLAG_OFFSET) != '\0')) {
                temp_int1 = 0;
            }
            *(int *)(stack_long_ptr1[5] + 0x28) = temp_int1;
            temp_uint2 = *(uint *)((longlong)stack_long_ptr1 + 0x1c);
            if (temp_uint2 != 0) {
                temp_uint3 = temp_uint3 & ~temp_uint2 | *(uint *)(stack_long_ptr1 + 4) & temp_uint2;
            }
            *(uint *)(stack_long_ptr1[5] + 4) = temp_uint3 | 0x10;
        }
HANDLE_INSTANCED_RENDERING:
        if (*(char *)(stack_long_ptr1[5] + 0x49) != '\0') {
            stack_long_ptr1[8] = *(longlong *)(stack_long_ptr1[5] + 8);
        }
        if (*(char *)(stack_long_ptr1[5] + 0x4a) != '\0') {
            temp_long1 = *(longlong *)(stack_long_ptr1[5] + 0x10);
            stack_long_ptr1[10] = temp_long1;
            stack_long_ptr1[9] = temp_long1;
        }
        temp_uint2 = *(uint *)(stack_long_ptr1[5] + 4) & 0xffffffdc;
        temp_uint3 = temp_uint2 | 0x20;
        if ((temp_uint1 & 0x2000000) == 0) {
            temp_uint3 = temp_uint2;
        }
        if ((*(char *)(global_base_ptr + SPECIAL_RENDER_FLAG_OFFSET) != '\0') || ((temp_uint1 & 0x16000000) != 0)) {
            temp_uint3 = temp_uint3 | 2;
        }
        if ((*(char *)(global_base_ptr + DYNAMIC_RENDER_FLAG_OFFSET) != '\0') || ((temp_uint1 & 0x16000000) != 0)) {
            temp_uint3 = temp_uint3 | 1;
        }
        temp_int1 = (int)stack_long_ptr1[3];
        if ((temp_int1 == 0) && (temp_int1 = 0x11111111, *(char *)(global_base_ptr + HIGH_QUALITY_FLAG_OFFSET) != '\0')) {
            temp_int1 = 0;
        }
        *(int *)(stack_long_ptr1[5] + 0x28) = temp_int1;
        temp_uint2 = *(uint *)((longlong)stack_long_ptr1 + 0x1c);
        if (temp_uint2 != 0) {
            temp_uint3 = temp_uint3 & ~temp_uint2 | *(uint *)(stack_long_ptr1 + 4) & temp_uint2;
        }
        *(uint *)(stack_long_ptr1[5] + 4) = temp_uint3 | 0x10;
    }
    
    // 处理实例化渲染
    get_object_bounds(stack_long_ptr1[5], &stack_u64_4);
    if ((((temp_char2 == '\0') && (temp_uint4 == 0)) && (*(int *)((longlong)stack_long_ptr1 + 0xc4) < 1)) && ((int)stack_long_ptr1[0x19] < 1)) {
        calculate_object_bounds(&stack_float23, global_base_ptr + BOUNDS_CALC_OFFSET, global_base_ptr + FRUSTUM_BASE_OFFSET);
        if (*(char *)((longlong)stack_long_ptr1 + 0xae) == '\0') {
            if (0.0 < (float)stack_u64_3 - (float)stack_u64_4) {
                if (0.0 < stack_u64_3._4_4_ - stack_u64_4._4_4_) {
                    float_ptr1 = (float *)&stack_u64_4;
                    goto APPLY_TEXTURE_MAPPING;
                }
            }
        }
        else if (0 < *(int *)(global_base_ptr + MAX_FRUSTUM_PLANES_OFFSET)) {
            if (*(short *)(stack_long_ptr1[5] + 0x74) == -1) {
                stack_u64_2 = CONCAT44(*(float *)(global_base_ptr + FRUSTUM_ADJUST_OFFSET) + *(float *)(**(longlong **)(global_base_ptr + FRUSTUM_PLANES_OFFSET) + 0xc), *(float *)(**(longlong **)(global_base_ptr + FRUSTUM_PLANES_OFFSET) + 8) + *(float *)(global_base_ptr + BOUNDS_CALC_OFFSET));
                calculate_shadow_volume(stack_long_ptr1, &stack_u64_2, 1);
            }
            else {
                temp_long2 = (longlong)*(short *)(stack_long_ptr1[5] + 0x74);
                float_ptr1 = &stack_float21;
                temp_long1 = *(longlong *)(global_base_ptr + FRUSTUM_PLANES_OFFSET);
                stack_float21 = *(float *)(temp_long1 + 0x10 + temp_long2 * 0x24);
                stack_float20 = *(float *)(temp_long1 + 0x14 + temp_long2 * 0x24);
                stack_float19 = stack_float21 + *(float *)(temp_long1 + 0x18 + temp_long2 * 0x24);
                stack_float18 = stack_float20 + *(float *)(temp_long1 + 0x1c + temp_long2 * 0x24);
APPLY_TEXTURE_MAPPING:
                apply_texture_mapping(stack_long_ptr1, float_ptr1, &stack_float23);
            }
        }
    }
    
    // 更新位置数据
    *(float *)(stack_long_ptr1 + 8) = (float)(int)*(float *)(stack_long_ptr1 + 8);
    *(float *)((longlong)stack_long_ptr1 + 0x44) = (float)(int)*(float *)((longlong)stack_long_ptr1 + 0x44);
    
    // 处理着色器参数
    if (temp_uint4 == 0) {
        if ((temp_uint1 & 0xc000000) == 0x4000000) {
            temp_u32_1 = *(uint32_t *)(global_base_ptr + SHADER_PARAM_OFFSET);
        }
        else {
            temp_u32_1 = *(uint32_t *)(global_base_ptr + DEFAULT_SHADER_OFFSET);
        }
    }
    else {
        temp_u32_1 = *(uint32_t *)(global_base_ptr + ALTERNATIVE_SHADER_OFFSET);
    }
    temp_uint3 = 0;
    *(uint32_t *)(stack_long_ptr1 + 0xf) = temp_u32_1;
    if (*(char *)((longlong)stack_long_ptr1 + 0xae) != '\0') {
        *(uint32_t *)(stack_long_ptr1 + 0xf) = 0;
    }
    
    // 处理动画帧
    if (((int)stack_long_ptr1[0x80] == 0x7fffffff) || (temp_int1 = (int)stack_long_ptr1[0x7e], temp_int1 == -1)) {
        temp_int1 = 0x7fffffff;
    }
    else {
        temp_int1 = ((int)stack_long_ptr1[0x80] + 1 + temp_int1) % (temp_int1 + 1);
    }
    *(int *)(stack_long_ptr1 + 0x7f) = temp_int1;
    if ((*(int *)((longlong)stack_long_ptr1 + 0x404) == 0x7fffffff) || (temp_int1 = *(int *)((longlong)stack_long_ptr1 + 0x3f4), temp_int1 == -1)) {
        temp_int1 = 0x7fffffff;
    }
    else {
        temp_int1 = (*(int *)((longlong)stack_long_ptr1 + 0x404) + 1 + temp_int1) % (temp_int1 + 1);
    }
    *(int *)((longlong)stack_long_ptr1 + 0x3fc) = temp_int1;
    u64_ptr1 = &stack_u64_3;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x3f4) = 0xffffffff;
    *(uint32_t *)(stack_long_ptr1 + 0x7e) = 0xffffffff;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x404) = 0x7fffffff;
    *(uint32_t *)(stack_long_ptr1 + 0x80) = 0x7fffffff;
    u32_ptr1 = (uint32_t *)update_animation_state(u64_ptr1, stack_long_ptr1, 1);
    long_ptr1 = stack_long_ptr1;
    stack_uint5 = (uint)u64_ptr1 & 0xffffff00;
    temp_u32_1 = u32_ptr1[1];
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x8c) = *u32_ptr1;
    *(uint32_t *)(stack_long_ptr1 + 0x12) = temp_u32_1;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x94) = 0x7f7fffff;
    *(uint32_t *)(stack_long_ptr1 + 0x13) = 0x7f7fffff;
    temp_long1 = GLOBAL_ENGINE_BASE_ADDRESS;
    if ((temp_char1 != '\0') && ((temp_uint1 >> 0xc & 1) == 0)) {
        if ((temp_uint1 >> 0x1a & 1) == 0) {
            if (((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) != 0) || (temp_uint4 == 0)) {
                stack_uint5 = (uint)((temp_uint1 >> 0x19 & 1) == 0);
            }
        }
        else {
            temp_uint1 = stack_uint5 >> 8;
            stack_uint5 = CONCAT31((int3)temp_uint1, 1);
        }
    }
    
    // 处理雾效
    stack_u64_5 = 0;
    stack_u64_6 = 0;
    temp_float2 = *(float *)(global_base_ptr + FOG_DENSITY_OFFSET) * 1.35;
    temp_float1 = *(float *)(global_base_ptr + FOG_DENSITY_OFFSET) * 0.2 + *(float *)(stack_long_ptr1 + 0xf) + 1.0;
    if (temp_float1 <= temp_float2) {
        temp_float1 = temp_float2;
    }
    stack_u64_2 = (uint64_t)(*(char *)(global_base_ptr + FOG_ENABLED_OFFSET) != '\0') + 1;
    temp_float1 = (float)(int)temp_float1;
    if ((((*(char *)((longlong)stack_long_ptr1 + 0xb2) == '\0') && ((*(uint8_t *)((longlong)stack_long_ptr1 + 0xc) & 0x42) == 0)) && (*(int *)((longlong)stack_long_ptr1 + 0xc4) < 1)) && (((int)stack_long_ptr1[0x19] < 1 && ((char)stack_long_ptr1[0x16] != '\0')))) {
        temp_float4 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + FOG_DENSITY_OFFSET) * 1.35;
        temp_float2 = *(float *)(stack_long_ptr1 + 0xf) + 1.0 + *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + FOG_DENSITY_OFFSET) * 0.2;
        stack_float22 = (float)(-(uint)(*(char *)(GLOBAL_ENGINE_BASE_ADDRESS + FOG_ENABLED_OFFSET) != '\0') & 4);
        if (temp_float2 <= temp_float4) {
            temp_float2 = temp_float4;
        }
        temp_float2 = (float)(int)((float)(int)temp_float2 * 0.75);
        if (*(char *)(GLOBAL_ENGINE_BASE_ADDRESS + FOG_ENABLED_OFFSET) == '\0') {
            temp_float4 = 0.0;
        }
        else {
            temp_float4 = 4.0;
        }
        stack_u64_2 = 0x7f7fffff7f7fffff;
        stack_float23 = 3.4028235e+38;
        stack_float24 = 3.4028235e+38;
        init_fog_system(&FOG_SHADER_PARAMS);
        temp_long2 = stack_u64_1;
        temp_long3 = 0;
        float_ptr1 = (float *)0x180bf66e8;
        do {
            stack_u64_1 = CONCAT44(*(float *)((longlong)long_ptr1 + 0x4c) + *(float *)((longlong)long_ptr1 + 0x44), *(float *)(long_ptr1 + 8) + *(float *)(long_ptr1 + 9));
            calculate_fog_density(&stack_float16, long_ptr1 + 8, &stack_u64_1, float_ptr1 + -2);
            stack_float11 = temp_float2 * *float_ptr1 + stack_float16;
            stack_float10 = temp_float2 * float_ptr1[1] + stack_float17;
            temp_float6 = stack_float16 - temp_float4 * *float_ptr1;
            temp_float7 = stack_float17 - temp_float4 * float_ptr1[1];
            stack_float13 = temp_float6;
            if (stack_float11 < temp_float6) {
                stack_float13 = stack_float11;
                stack_float11 = temp_float6;
            }
            stack_float12 = temp_float7;
            if (stack_float10 < temp_float7) {
                stack_float12 = stack_float10;
                stack_float10 = temp_float7;
            }
            temp_u32_1 = get_object_render_flags(long_ptr1, (longlong)(int)temp_uint3);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 0x2020);
            check_object_visibility(&stack_float13, temp_u32_1, &stack_char1, &stack_char2);
            if (((stack_char1 == '\0') && (stack_char2 == '\0')) || (*(uint *)(temp_long1 + VISIBILITY_CHECK_OFFSET) = (~temp_uint3 & 1) + 5, stack_char2 == '\0')) {
                if (temp_uint3 == 0) goto HANDLE_OCCLUSION_RESULT;
                if (stack_char2 != '\0') goto HANDLE_SPECIAL_RENDER;
                if (stack_char1 != '\0') goto HANDLE_SPECIAL_RENDER;
            }
            else {
                if ((*(char *)(temp_long1 + VISIBILITY_FLAG_OFFSET) == '\0') || (temp_uint3 != 0)) {
                    stack_float19 = *float_ptr1 * -temp_float2;
                    stack_float18 = float_ptr1[1] * -temp_float2;
                    stack_float17 = temp_float4 * *float_ptr1;
                    stack_float16 = temp_float4 * float_ptr1[1];
                    float_ptr2 = (float *)calculate_fog_density(&stack_float14, &stack_float17, &stack_float19, float_ptr1 + -2);
                    stack_float15 = (*(float *)(temp_long1 + 0x11c) - *(float *)(temp_long1 + BOUNDS_EXPANSION_OFFSET)) + float_ptr2[1];
                    stack_float16 = (*(float *)(temp_long1 + 0x118) - *(float *)(temp_long1 + OCCLUSION_TIMEOUT_OFFSET)) + *float_ptr2;
                    stack_float_ptr1 = &stack_float23;
                    apply_fog_effect(long_ptr1, &stack_float16, float_ptr1 + -2, &stack_u64_2);
                    goto HANDLE_OCCLUSION_RESULT;
                }
                float_ptr2 = (float *)update_object_bounds(&stack_u64_3, long_ptr1, temp_long2);
                stack_float23 = *float_ptr2;
                stack_float24 = float_ptr2[1];
                reset_render_state(0, 0);
HANDLE_OCCLUSION_RESULT:
                if (stack_char2 == '\0') {
HANDLE_SPECIAL_RENDER:
                    temp_char2 = (stack_char1 != '\0') + '\x1e';
                }
                else {
HANDLE_SPECIAL_RENDER:
                    temp_char2 = ' ';
                }
                temp_u32_1 = get_character_code(temp_char2);
                *(uint32_t *)((longlong)&stack_u64_5 + temp_long3 * 4) = temp_u32_1;
            }
            temp_float7 = stack_float22;
            temp_uint3 = temp_uint3 + 1;
            temp_long3 = temp_long3 + 1;
            float_ptr1 = float_ptr1 + 6;
        } while (temp_long3 < stack_u64_2);
        temp_u64_3 = stack_u64_2 & 0xffffffff;
        temp_uint1 = 0;
        if (stack_float22 != 0.0) {
            do {
                stack_float_ptr1._0_4_ = 0x40800000;
                calculate_lighting_contribution(&stack_float3, long_ptr1, temp_uint1, temp_float2);
                temp_u32_1 = get_object_render_flags(long_ptr1, (longlong)(int)(temp_uint1 + 4));
                stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 0x20);
                check_object_visibility(&stack_float3, temp_u32_1, stack_char_array1, &stack_char4);
                if ((((stack_char_array1[0] != '\0') && (0.04 < *(float *)(temp_long1 + MIN_LIGHT_INTENSITY_OFFSET))) || (stack_char4 != '\0')) && (*(uint *)(temp_long1 + VISIBILITY_CHECK_OFFSET) = (temp_uint1 & 1) + 3, stack_char4 != '\0')) {
                    stack_u64_2 = long_ptr1[8];
                    stack_u64_1 = 0;
                    if (temp_uint1 == 0) {
                        stack_u64_2 = CONCAT44((*(float *)(temp_long1 + 0x11c) - *(float *)(temp_long1 + BOUNDS_EXPANSION_OFFSET)) + 4.0, (int)stack_u64_2);
                    }
                    else if (temp_uint1 == 1) {
                        stack_u64_1 = 0x3f800000;
HANDLE_TEXTURE_ADJUSTMENT:
                        stack_u64_2._4_4_ = (uint32_t)(stack_u64_2 >> 0x20);
                        stack_u64_2 = CONCAT44(stack_u64_2._4_4_, (*(float *)(temp_long1 + 0x118) - *(float *)(temp_long1 + OCCLUSION_TIMEOUT_OFFSET)) + 4.0);
                    }
                    else {
                        if (temp_uint1 == 2) {
                            stack_u64_1 = 0x3f80000000000000;
                            goto HANDLE_TEXTURE_ADJUSTMENT;
                        }
                        if (temp_uint1 == 3) goto HANDLE_TEXTURE_ADJUSTMENT;
                    }
                    stack_float_ptr1 = &stack_float23;
                    stack_uint6 = temp_uint1;
                    apply_lighting_effect(long_ptr1, &stack_u64_2, &stack_u64_1, &stack_u64_2);
                }
                temp_uint1 = temp_uint1 + 1;
            } while ((int)temp_uint1 < (int)stack_float22);
        }
        int_ptr1 = (int *)(*(longlong *)(GLOBAL_ENGINE_BASE_ADDRESS + LAST_OBJECT_OFFSET) + 0x218);
        *int_ptr1 = *int_ptr1 + -1;
        if ((*(longlong *)(temp_long1 + POST_PROCESS_SYSTEM_OFFSET) != 0) && (*(longlong **)(*(longlong *)(temp_long1 + POST_PROCESS_SYSTEM_OFFSET) + 0x3a0) == long_ptr1)) {
            temp_int1 = *(int *)(temp_long1 + POST_PROCESS_EFFECT_OFFSET);
            temp_float4 = 0.0;
            temp_float2 = 0.0;
            if (temp_int1 == 3) {
                if (*(char *)(temp_long1 + HIGH_QUALITY_FLAG_OFFSET) == '\0') goto SKIP_POST_PROCESS;
                stack_float_ptr1 = (float *)((ulonglong)stack_float_ptr1 & 0xffffffff00000000);
                float_ptr1 = (float *)calculate_post_process_effect(&stack_u64_3, 1, 0, 0);
                temp_float2 = *float_ptr1;
                temp_float4 = float_ptr1[1];
                temp_int1 = *(int *)(temp_long1 + POST_PROCESS_EFFECT_OFFSET);
            }
            if (temp_int1 == 4) {
                stack_float_ptr1 = (float *)((ulonglong)stack_float_ptr1 & 0xffffffff00000000);
                float_ptr1 = (float *)calculate_post_process_effect(&stack_float15, 2, 0, 0);
                temp_float2 = *float_ptr1;
                temp_float4 = float_ptr1[1];
            }
            if ((temp_float2 != 0.0) || (temp_float4 != 0.0)) {
                temp_float7 = *(float *)(temp_long1 + BOUNDING_BOX_SIZE_OFFSET);
                if (*(float *)(temp_long1 + BOUNDING_BOX_MIN_OFFSET) <= *(float *)(temp_long1 + BOUNDING_BOX_SIZE_OFFSET)) {
                    temp_float7 = *(float *)(temp_long1 + BOUNDING_BOX_MIN_OFFSET);
                }
                *(uint8_t *)(temp_long1 + POST_PROCESS_FLAG_OFFSET) = 0;
                *(uint8_t *)(temp_long1 + POST_PROCESS_STATUS_OFFSET) = 1;
                temp_float7 = (float)(int)(temp_float7 * *(float *)(temp_long1 + TIME_SCALE_OFFSET) * 600.0);
                temp_u32_1 = get_character_code(0x20);
                stack_u64_5 = CONCAT44(stack_u64_5._4_4_, temp_u32_1);
                float_ptr1 = (float *)update_object_bounds(&stack_u64_3, long_ptr1, CONCAT44(temp_float4 * temp_float7 + *(float *)((longlong)long_ptr1 + 0x54), temp_float2 * temp_float7 + *(float *)(long_ptr1 + 10)));
                stack_float23 = *float_ptr1;
                stack_float24 = float_ptr1[1];
            }
        }
SKIP_POST_PROCESS:
        temp_long1 = GLOBAL_ENGINE_BASE_ADDRESS;
        if ((stack_float23 != 3.4028235e+38) && ((stack_float23 != *(float *)(long_ptr1 + 10) || (stack_float24 != *(float *)((longlong)long_ptr1 + 0x54))))) {
            *(float *)(long_ptr1 + 10) = stack_float23;
            *(float *)((longlong)long_ptr1 + 0x54) = stack_float24;
            if (((*(uint *)((longlong)long_ptr1 + 0xc) & 0x100) == 0) && (*(float *)(temp_long1 + OCCLUSION_TIMEOUT_OFFSET) <= 0.0)) {
                *(uint32_t *)(temp_long1 + OCCLUSION_TIMEOUT_OFFSET) = *(uint32_t *)(temp_long1 + ENGINE_CONFIG_OFFSET);
            }
        }
        temp_long1 = GLOBAL_ENGINE_BASE_ADDRESS;
        if ((float)stack_u64_2 != 3.4028235e+38) {
            *(float *)(long_ptr1 + 8) = (float)(int)(float)stack_u64_2;
            *(float *)((longlong)long_ptr1 + 0x44) = (float)(int)stack_u64_2._4_4_;
            if (((*(uint *)((longlong)long_ptr1 + 0xc) & 0x100) == 0) && (*(float *)(temp_long1 + OCCLUSION_TIMEOUT_OFFSET) <= 0.0)) {
                *(uint32_t *)(temp_long1 + OCCLUSION_TIMEOUT_OFFSET) = *(uint32_t *)(temp_long1 + ENGINE_CONFIG_OFFSET);
            }
        }
        long_ptr1[9] = long_ptr1[10];
    }
    temp_uint4 = (uint)temp_u64_3;
    float_ptr1 = (float *)0x180bf66e8;
    if (*(char *)((longlong)stack_long_ptr1 + 0xae) != '\0') {
        if (*(char *)(stack_long_ptr1[5] + 0x49) == '\0') {
            *(longlong *)(stack_long_ptr1[5] + 8) = stack_long_ptr1[8];
        }
        if (*(char *)(stack_long_ptr1[5] + 0x4a) == '\0') {
            *(longlong *)(stack_long_ptr1[5] + 0x10) = stack_long_ptr1[9];
        }
        u64_ptr1 = (uint64_t *)get_object_bounds(stack_long_ptr1[5]);
        stack_u64_4 = *u64_ptr1;
        stack_u64_3 = u64_ptr1[1];
    }
    *(uint64_t *)((longlong)stack_long_ptr1 + 0x34) = *(uint64_t *)(stack_long_ptr1[5] + 8);
    if ((*(float *)(stack_long_ptr1 + 9) <= 0.0) || ((temp_u64_3 & 0x2000040) != 0)) {
        temp_float2 = *(float *)(global_base_ptr + FOG_DENSITY_OFFSET) * 16.0;
    }
    else {
        temp_float2 = *(float *)(stack_long_ptr1 + 9) * 0.65;
    }
    *(float *)((longlong)stack_long_ptr1 + 0x284) = (float)(int)temp_float2;
    init_particle_system(stack_long_ptr1[0x5d]);
    *(uint *)(stack_long_ptr1[0x5d] + 0x30) = -(uint)(*(char *)(global_base_ptr + PARTICLE_ENABLE_OFFSET) != '\0') & 2 | (uint)(*(char *)(global_base_ptr + PARTICLE_FLAG_OFFSET) != '\0');
    temp_long1 = stack_long_ptr1[0x5d];
    stack_u64_3 = *(uint64_t *)(*(longlong *)(*(longlong *)(global_base_ptr + PARTICLE_SYSTEM_OFFSET) + 0x58) + 8);
    update_object_reference(temp_long1 + 0x70, &stack_u64_3);
    update_particle_system(temp_long1);
    if (((temp_uint4 & 0x5000000) == 0x1000000) && (stack_float20 != 3.761582e-37)) {
        u64_ptr1 = (uint64_t *)(stack_long1 + 0x228);
        u64_ptr2 = (uint64_t *)(stack_long1 + 0x230);
    }
    else {
        u64_ptr1 = &stack_u64_4;
        u64_ptr2 = &stack_u64_3;
    }
    apply_particle_transform(u64_ptr1, u64_ptr2);
    if ((((temp_uint4 >> 0x1b & 1) == 0) || (long_ptr1 = (longlong *)get_current_camera(), stack_long_ptr1 != long_ptr1)) || (0 < *(int *)((longlong)stack_long_ptr1 + 0xdc))) {
        temp_byte1 = 0;
    }
    else {
        temp_byte1 = 1;
    }
    temp_long1 = *(longlong *)(global_base_ptr + CAMERA_TARGET_OFFSET);
    if ((temp_long1 == 0) || ((stack_long_ptr1 != *(longlong **)(temp_long1 + 0x3a0) && (((long_ptr1 = *(longlong **)(global_base_ptr + CAMERA_POSITION_OFFSET), long_ptr1 == (longlong *)0x0 || (stack_long_ptr1 != long_ptr1)) || (long_ptr1[5] == *(longlong *)(temp_long1 + 0x28))))))) {
        condition3 = false;
    }
    else {
        condition3 = true;
    }
    if ((temp_byte1 != 0) || (condition3)) {
        float_ptr1 = (float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET + ((ulonglong)temp_byte1 + 0x3a) * 0x10);
        stack_float3 = *float_ptr1;
        stack_float4 = float_ptr1[1];
        stack_float5 = float_ptr1[2];
        stack_float6 = float_ptr1[3] * *(float *)(global_base_ptr + TIME_SCALE_OFFSET) * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET);
        temp_u32_1 = calculate_shader_params(&stack_float3);
        stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 0xf);
        stack_float_ptr1 = (float *)((ulonglong)stack_float_ptr1 & 0xffffffff00000000);
        apply_shader_effects(stack_long_ptr1[0x5d], &stack_u64_4, &stack_u64_3, temp_u32_1);
        if ((condition3) && (stack_long_ptr1 == *(longlong **)(global_base_ptr + CAMERA_TARGET_OFFSET))) {
            get_object_bounds(stack_long_ptr1, &stack_u64_5);
            get_camera_transform(stack_long_ptr1, &stack_u64_3);
            transform_camera_to_object(&stack_float19, stack_u64_3);
            if ((float)stack_u64_3 <= (float)stack_u64_4) {
                if (((stack_u64_3._4_4_ <= stack_u64_4._4_4_) && ((float)stack_u64_3 <= stack_float10)) && (stack_u64_3._4_4_ <= stack_float9))) goto FINAL_SHADER_APPLICATION;
            }
            temp_long1 = stack_long_ptr1[0x5d];
            temp_u32_1 = *(uint32_t *)(global_base_ptr + DEFAULT_SHADER_OFFSET);
            stack_float3 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + CAMERA_FOV_OFFSET);
            stack_float4 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + CAMERA_ASPECT_OFFSET);
            stack_float5 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + CAMERA_NEAR_OFFSET);
            stack_float6 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + CAMERA_FAR_OFFSET) * *(float *)(global_base_ptr + TIME_SCALE_OFFSET) * 0.25 * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET);
            temp_u32_2 = calculate_shader_params(&stack_float3);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 0xf);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_u32_1);
            apply_shader_effects(temp_long1, &stack_u64_3, &stack_float10, temp_u32_2);
        }
    }
FINAL_SHADER_APPLICATION:
    temp_uint1 = stack_uint5;
    temp_long1 = *(longlong *)(global_base_ptr + POST_PROCESS_SYSTEM_OFFSET);
    temp_float2 = *(float *)(stack_long_ptr1 + 0xf);
    temp_float4 = *(float *)((longlong)stack_long_ptr1 + 0x7c);
    if (temp_long1 == 0) {
        temp_long1 = *(longlong *)(global_base_ptr + POST_PROCESS_SETTINGS_OFFSET);
    }
    if (((char)stack_uint5 == '\0') && ((temp_long1 == 0 || ((stack_long_ptr1[0x76] != *(longlong *)(temp_long1 + 0x3b0) && ((stack_long_ptr1[0x81] == 0 || (stack_long_ptr1[0x81] != *(longlong *)(temp_long1 + 0x408)))))))))) {
        temp_byte1 = 0;
    }
    else {
        temp_byte1 = 1;
    }
    get_object_bounds(stack_long_ptr1, &stack_float20);
    long_ptr1 = stack_long_ptr1;
    if (*(char *)((longlong)stack_long_ptr1 + 0xb2) == '\0') {
        stack_u64_2 = CONCAT44(stack_u64_2._4_4_, temp_uint4) & 0xffffffff00000080;
        if ((temp_u64_3 & 0x80) == 0) {
            condition3 = false;
            if (((*(char *)(global_base_ptr + HIGH_QUALITY_FLAG_OFFSET) != '\0') && (*(int *)(global_base_ptr + MAX_OBJECTS_OFFSET) - *(int *)(global_base_ptr + QUALITY_SETTINGS_OFFSET) < 2)) && ((*(char *)(global_base_ptr + SPECIAL_RENDER_FLAG_OFFSET) != '\0' && (((*(int *)(global_base_ptr + QUALITY_LEVEL_OFFSET) != -1 && (temp_int1 = strcmp(DEFAULT_QUALITY_STRING, global_base_ptr + QUALITY_STRING_OFFSET), temp_int1 == 0)) && (condition3 = false, (longlong *)**(uint64_t **)(global_base_ptr + QUALITY_SETTINGS_OFFSET) == long_ptr1)))))) {
                condition3 = true;
            }
            if ((temp_u64_3 & 0x6000000) == 0) {
                temp_long1 = 0xc0;
                if (stack_uint6 != 0) {
                    temp_long1 = 0xd0;
                }
            }
            else {
                temp_long1 = 0xe0;
            }
            float_ptr1 = (float *)(temp_long1 + SHADER_PARAMS_OFFSET + GLOBAL_ENGINE_BASE_ADDRESS);
            stack_float3 = *float_ptr1;
            stack_float4 = float_ptr1[1];
            stack_float5 = float_ptr1[2];
            stack_float6 = float_ptr1[3] * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET);
            temp_uint1 = calculate_shader_params(&stack_float3);
            if (*(char *)((longlong)stack_long_ptr1 + 0xae) == '\0') {
                temp_float7 = 1.0;
                if (*(int *)(global_base_ptr + QUALITY_SETTINGS_OFFSET) != 0) {
                    temp_float7 = *(float *)(global_base_ptr + QUALITY_MULTIPLIER_OFFSET);
                }
                if (condition3) {
                    temp_float7 = temp_float7 * 0.5;
                }
                if (temp_float7 != 1.0) {
                    if (0.0 <= temp_float7) {
                        if (1.0 <= temp_float7) {
                            temp_float7 = 1.0;
                        }
                    }
                    else {
                        temp_float7 = 0.0;
                    }
                    temp_uint1 = (int)(temp_float7 * 255.0 + 0.5) << 0x18 | temp_uint1 & 0xffffff;
                }
            }
            else {
                temp_uint1 = temp_uint1 | 0xff000000;
                if (condition3) {
                    *(float *)(stack_long_ptr1[5] + 0x6c) = *(float *)(stack_long_ptr1[5] + 0x6c) * 0.5;
                }
            }
            stack_float15 = *(float *)((longlong)stack_long_ptr1 + 0x4c) + *(float *)((longlong)stack_long_ptr1 + 0x44);
            stack_float16 = *(float *)(stack_long_ptr1 + 9) + *(float *)(stack_long_ptr1 + 8);
            temp_long1 = stack_long_ptr1[0x5d];
            stack_float17 = (float)get_animation_delta_time(stack_long_ptr1);
            stack_float17 = stack_float17 + *(float *)((longlong)stack_long_ptr1 + 0x44);
            stack_float18 = *(float *)(stack_long_ptr1 + 8);
            temp_u32_1 = 0xc;
            if ((temp_u64_3 & 1) != 0) {
                temp_u32_1 = 0xf;
            }
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_u32_1);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_float2);
            apply_shader_effects(temp_long1, &stack_float18, &stack_float16, temp_uint1);
        }
        condition3 = false;
        *(uint32_t *)(global_base_ptr + QUALITY_SETTINGS_OFFSET) = 0;
        if (((temp_u64_3 & 1) == 0) && ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) == 0)) {
            float_ptr1 = (float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET + ((ulonglong)temp_byte1 + 0x14) * 0x10);
            stack_float3 = *float_ptr1;
            stack_float4 = float_ptr1[1];
            stack_float5 = float_ptr1[2];
            stack_float6 = float_ptr1[3] * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET);
            temp_u32_1 = calculate_shader_params(&stack_float3);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 3);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_float2);
            apply_shader_effects(stack_long_ptr1[0x5d], &stack_float20, &stack_float18, temp_u32_1);
        }
        if ((temp_uint4 >> 10 & 1) != 0) {
            get_object_transform(stack_long_ptr1, &stack_float21);
            temp_u64 = get_camera_transform(stack_long_ptr1, &stack_u64_3);
            transform_object_to_camera(&stack_float21, temp_u64);
            temp_long1 = stack_long_ptr1[0x5d];
            temp_float7 = temp_float2;
            if ((temp_u64_3 & 1) == 0) {
                temp_float7 = 0.0;
            }
            stack_float3 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + MOTION_BLUR_OFFSET);
            stack_float4 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + MOTION_BLUR_INTENSITY_OFFSET);
            stack_float5 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + MOTION_BLUR_SPEED_OFFSET);
            stack_float6 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + MOTION_BLUR_QUALITY_OFFSET) * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET);
            temp_u32_1 = calculate_shader_params(&stack_float3);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 3);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_float7);
            apply_shader_effects(temp_long1, &stack_float21, &stack_float19, temp_u32_1);
            temp_float7 = *(float *)(global_base_ptr + MIN_LOD_DISTANCE_OFFSET);
            if ((0.0 < temp_float7) && (stack_float12 < *(float *)((longlong)stack_long_ptr1 + 0x4c) + *(float *)((longlong)stack_long_ptr1 + 0x44))) {
                temp_long1 = stack_long_ptr1[0x5d];
                stack_float3 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_OFFSET);
                stack_float4 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_INTENSITY_OFFSET);
                stack_float5 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_FOCUS_OFFSET);
                stack_float6 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_QUALITY_OFFSET) * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET);
                temp_u32_1 = calculate_shader_params(&stack_float3);
                stack_u64_3 = CONCAT44(stack_float12, stack_float19);
                stack_float14 = stack_float12;
                stack_float15 = stack_float21;
                stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_float7);
                apply_depth_of_field(temp_long1, &stack_float15, &stack_u64_3, temp_u32_1);
            }
        }
        temp_long1 = stack_long_ptr1[0x81];
        if ((temp_long1 != 0) && ((*(uint8_t *)(temp_long1 + 0xa0) & 0x40) != 0)) {
            stack_float3 = *(float *)(temp_long1 + 0x38);
            stack_float4 = *(float *)(temp_long1 + 0x3c);
            stack_u64_1 = *(longlong *)(temp_long1 + 0x38);
            temp_float7 = (float)(int)(*(float *)(global_base_ptr + FOG_DENSITY_OFFSET) * 0.7);
            stack_float6 = (float)(int)(*(float *)(global_base_ptr + FOG_DENSITY_OFFSET) * 0.55);
            stack_float5 = stack_float3 + stack_float6;
            stack_float6 = stack_float4 + stack_float6;
            temp_u32_1 = get_object_render_flags(stack_long_ptr1, &SHADOW_VOLUME_OFFSET, 0);
            stack_float_ptr1._0_4_ = 0x20;
            temp_char2 = check_object_visibility(&stack_float3, temp_u32_1, stack_char_array1, &stack_char4);
            if (temp_char2 != '\0') {
                *(uint8_t *)(stack_long_ptr1[0x81] + 0xa1) = *(uint8_t *)(stack_long_ptr1[0x81] + 0xa1) | 0x10;
            }
            if (((stack_char4 == '\0') || (stack_char_array1[0] == '\0')) && (((*(uint8_t *)(stack_long_ptr1[0x81] + 0xa0) & 8) == 0 || (stack_char_array1[0] != '\0')))) {
                temp_long1 = (ulonglong)(stack_char_array1[0] != '\0') + 0x15;
            }
            else {
                temp_long1 = 0x17;
            }
            u64_ptr1 = (uint64_t *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET + (temp_long1 + 10) * 0x10);
            stack_u64_3 = *u64_ptr1;
            stack_u32_1 = *(uint32_t *)(u64_ptr1 + 1);
            stack_float11 = *(float *)((longlong)u64_ptr1 + 0xc) * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET);
            temp_u32_1 = calculate_shader_params(&stack_u64_3);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_u32_1);
            stack_float17 = stack_u64_1._4_4_ + temp_float7;
            stack_float16 = (float)stack_u64_1;
            stack_u64_2 = CONCAT44(stack_u64_1._4_4_, (float)stack_u64_1 + temp_float7);
            apply_special_effects(stack_long_ptr1[0x5d], &stack_u64_1, &stack_u64_2, &stack_float16);
        }
        if (*(char *)((longlong)stack_long_ptr1 + 0xac) != '\0') {
            trigger_special_effect(0);
        }
        if (*(char *)((longlong)stack_long_ptr1 + 0xad) != '\0') {
            trigger_special_effect(1);
        }
        if ((temp_u64_3 & 2) == 0) {
            temp_long1 = 0;
            do {
                temp_float7 = *(float *)(stack_long_ptr1 + 8);
                temp_float6 = *(float *)((longlong)stack_long_ptr1 + 0x44);
                temp_float7 = ((temp_float7 + *(float *)(stack_long_ptr1 + 9)) - temp_float7) * float_ptr1[-2] + temp_float7;
                temp_float6 = ((temp_float6 + *(float *)((longlong)stack_long_ptr1 + 0x4c)) - temp_float6) * float_ptr1[-1] + temp_float6;
                if (condition3) {
                    stack_float22 = temp_float4;
                    stack_float21 = temp_float2;
                    temp_float5 = temp_float4;
                }
                else {
                    stack_float23 = temp_float2;
                    stack_float24 = temp_float4;
                    temp_float5 = temp_float2;
                }
                float_ptr2 = &stack_float24;
                if (condition3) {
                    float_ptr2 = &stack_float21;
                }
                stack_float20 = temp_float5 * *float_ptr1 + temp_float7;
                stack_float19 = *float_ptr2 * float_ptr1[1] + temp_float6;
                update_object_bounds(stack_long_ptr1[0x5d] + 0x80, &stack_float20);
                if (condition3) {
                    stack_float14 = temp_float2;
                    stack_float13 = temp_float4;
                    temp_float5 = temp_float2;
                }
                else {
                    stack_float11 = temp_float4;
                    stack_float10 = temp_float2;
                    temp_float5 = temp_float4;
                }
                float_ptr2 = &stack_float10;
                if (condition3) {
                    float_ptr2 = &stack_float13;
                }
                stack_float18 = temp_float5 * *float_ptr1 + temp_float7;
                stack_float17 = *float_ptr2 * float_ptr1[1] + temp_float6;
                update_object_bounds(stack_long_ptr1[0x5d] + 0x80, &stack_float18);
                stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, float_ptr1[3]);
                stack_u64_3 = CONCAT44((temp_float4 + temp_float2) * float_ptr1[1] + temp_float6, (temp_float4 + temp_float2) * *float_ptr1 + temp_float7);
                apply_texture_mapping(stack_long_ptr1[0x5d], &stack_u64_3);
                temp_long2 = stack_long_ptr1[0x5d];
                update_shader_parameters(temp_long2, *(uint64_t *)(temp_long2 + 0x88), *(uint32_t *)(temp_long2 + 0x80), *(uint32_t *)((longlong)&stack_u64_5 + temp_long1 * 4));
                condition3 = (bool)(condition3 ^ 1);
                *(uint32_t *)(temp_long2 + 0x80) = 0;
                temp_long1 = temp_long1 + 1;
                float_ptr1 = float_ptr1 + 6;
            } while (temp_long1 < stack_u64_2);
        }
        if ((0.0 < temp_float4) && ((int)stack_u64_2 == 0)) {
            temp_long1 = stack_long_ptr1[0x5d];
            stack_u64_5 = *(uint64_t *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_OFFSET);
            stack_u64_4 = CONCAT44(*(float *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_QUALITY_OFFSET) * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET), *(uint32_t *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_FOCUS_OFFSET));
            temp_uint1 = calculate_shader_params(&stack_u64_5);
            temp_float7 = *(float *)(stack_long_ptr1 + 8) + *(float *)(stack_long_ptr1 + 9);
            temp_float6 = *(float *)((longlong)stack_long_ptr1 + 0x44) + *(float *)((longlong)stack_long_ptr1 + 0x4c);
            if ((temp_uint1 & 0xff000000) != 0) {
                stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 0xf);
                stack_u64_3 = CONCAT44(*(float *)((longlong)stack_long_ptr1 + 0x44) + 0.5, *(float *)(stack_long_ptr1 + 8) + 0.5);
                if ((*(uint8_t *)(temp_long1 + 0x30) & 1) == 0) {
                    temp_float7 = temp_float7 - 0.49;
                    temp_float6 = temp_float6 - 0.49;
                }
                else {
                    temp_float7 = temp_float7 - 0.5;
                    temp_float6 = temp_float6 - 0.5;
                }
                stack_u64_2 = CONCAT44(temp_float6, temp_float7);
                apply_depth_of_field(temp_long1, &stack_u64_3, &stack_u64_2, temp_float2);
                apply_post_processing(temp_long1, temp_uint1, 1, temp_float4);
            }
        }
        if (stack_uint6 != 0xffffffff) {
            stack_float_ptr1 = (float *)((ulonglong)stack_float_ptr1 & 0xffffffff00000000);
            calculate_lighting_contribution(&stack_u64_3, stack_long_ptr1, stack_uint6, temp_float2);
            temp_long1 = stack_long_ptr1[0x5d];
            stack_u64_2 = *(longlong *)(GLOBAL_ENGINE_BASE_ADDRESS + BLOOM_SETTINGS_OFFSET);
            stack_u32_1 = *(uint32_t *)(GLOBAL_ENGINE_BASE_ADDRESS + BLOOM_INTENSITY_OFFSET);
            stack_float11 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + BLOOM_QUALITY_OFFSET) * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET);
            temp_uint1 = calculate_shader_params(&stack_u64_2);
            if (temp_float4 <= 1.0) {
                temp_float4 = 1.0;
            }
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_float4);
            apply_depth_of_field(temp_long1, &stack_u64_3, &stack_u64_1, temp_uint1);
        }
        temp_float2 = *(float *)(global_base_ptr + MIN_LOD_DISTANCE_OFFSET);
        temp_uint1 = stack_uint5;
        if (((0.0 < temp_float2) && ((temp_u64_3 & 1) == 0)) && ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) == 0)) {
            temp_long1 = stack_long_ptr1[0x5d];
            stack_float18 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_OFFSET);
            stack_float17 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_INTENSITY_OFFSET);
            stack_u32_1 = *(uint32_t *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_FOCUS_OFFSET);
            stack_float16 = *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + DEPTH_OF_FIELD_QUALITY_OFFSET) * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET);
            temp_uint1 = calculate_shader_params(&stack_float18);
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_float2);
            stack_u64_2 = CONCAT44(stack_float22 - 1.0, stack_float18 - *(float *)(global_base_ptr + DEFAULT_SHADER_OFFSET));
            stack_u64_3 = CONCAT44(stack_float22 - 1.0, stack_float20 + *(float *)(global_base_ptr + DEFAULT_SHADER_OFFSET));
            apply_depth_of_field(temp_long1, &stack_u64_3, &stack_u64_2, temp_uint1);
            temp_uint1 = stack_uint5;
        }
    }
    else {
        temp_u32_1 = *(uint32_t *)(global_base_ptr + MIN_LOD_DISTANCE_OFFSET);
        *(uint32_t *)(global_base_ptr + MIN_LOD_DISTANCE_OFFSET) = *(uint32_t *)((longlong)stack_long_ptr1 + 0x7c);
        if ((temp_byte1 == 0) || (temp_long1 = 0x150, *(char *)(global_base_ptr + SPECIAL_EFFECTS_FLAG_OFFSET) != '\0')) {
            temp_long1 = 0x160;
        }
        u64_ptr1 = (uint64_t *)(temp_long1 + SHADER_PARAMS_OFFSET + GLOBAL_ENGINE_BASE_ADDRESS);
        stack_u64_5 = *u64_ptr1;
        stack_u64_6 = CONCAT44(*(float *)((longlong)u64_ptr1 + 0xc) * *(float *)(GLOBAL_ENGINE_BASE_ADDRESS + SHADER_PARAMS_OFFSET), *(uint32_t *)(u64_ptr1 + 1));
        temp_u32_2 = calculate_shader_params(&stack_u64_5);
        stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, temp_float2);
        apply_special_effects(CONCAT44(stack_float12, stack_float20), CONCAT44(stack_float22, stack_float18), temp_u32_2, 1);
        *(uint32_t *)(global_base_ptr + MIN_LOD_DISTANCE_OFFSET) = temp_u32_1;
    }
    float_ptr1 = (float *)(global_base_ptr + MIN_LOD_DISTANCE_OFFSET);
    stack_long_ptr1[0xb] = stack_long_ptr1[10];
    *(float *)(stack_long_ptr1 + 0x4e) = ((*(float *)(stack_long_ptr1 + 8) - *(float *)((longlong)stack_long_ptr1 + 0x8c)) + *(float *)(stack_long_ptr1 + 0xe);
    temp_float7 = (float)get_animation_delta_time(stack_long_ptr1);
    temp_float2 = *(float *)((longlong)stack_long_ptr1 + 0x44);
    temp_float4 = *(float *)(stack_long_ptr1 + 0x12);
    temp_float6 = *(float *)((longlong)stack_long_ptr1 + 0x74);
    temp_float1 = (float)get_current_frame_time();
    *(float *)((longlong)stack_long_ptr1 + 0x274) = temp_float1 + temp_float7 + (temp_float2 - temp_float4) + temp_float6;
    temp_float2 = *(float *)(stack_long_ptr1 + 0xd);
    if (temp_float2 == 0.0) {
        temp_float2 = *(float *)(stack_long_ptr1 + 9) - *(float *)((longlong)stack_long_ptr1 + 0xa4);
    }
    *(float *)(stack_long_ptr1 + 0x4f) = ((*(float *)(stack_long_ptr1 + 8) - *(float *)((longlong)stack_long_ptr1 + 0x8c)) - *(float *)(stack_long_ptr1 + 0xe)) + temp_float2;
    temp_float2 = *(float *)((longlong)stack_long_ptr1 + 0x6c);
    if (temp_float2 == 0.0) {
        temp_float2 = *(float *)((longlong)stack_long_ptr1 + 0x4c) - *(float *)(stack_long_ptr1 + 0x15);
    }
    *(float *)((longlong)stack_long_ptr1 + 0x27c) = ((*(float *)((longlong)stack_long_ptr1 + 0x44) - *(float *)(stack_long_ptr1 + 0x12)) - *(float *)((longlong)stack_long_ptr1 + 0x74)) + temp_float2;
    *(float *)((longlong)stack_long_ptr1 + 0x204) = *(float *)(stack_long_ptr1 + 0xe) - *(float *)((longlong)stack_long_ptr1 + 0x8c);
    temp_u32_2 = 0;
    *(uint32_t *)(stack_long_ptr1 + 0x41) = 0;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x20c) = 0;
    get_current_frame_time();
    get_animation_delta_time(stack_long_ptr1);
    temp_u64 = calculate_object_distance(&stack_u64_3, *(float *)((longlong)stack_long_ptr1 + 0x20c) + *(float *)((longlong)stack_long_ptr1 + 0x204));
    u32_ptr1 = (uint32_t *)calculate_object_transform(&stack_u64_2, stack_long_ptr1 + 8, temp_u64);
    temp_u32_1 = u32_ptr1[1];
    *(uint32_t *)(stack_long_ptr1 + 0x22) = *u32_ptr1;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x114) = temp_u32_1;
    stack_long_ptr1[0x20] = stack_long_ptr1[0x22];
    stack_long_ptr1[0x21] = stack_long_ptr1[0x22];
    stack_long_ptr1[0x23] = stack_long_ptr1[0x22];
    u32_ptr1 = (uint32_t *)calculate_object_distance(&stack_u64_3);
    temp_u32_1 = u32_ptr1[1];
    *(uint32_t *)((longlong)stack_long_ptr1 + 300) = *u32_ptr1;
    *(uint32_t *)(stack_long_ptr1 + 0x26) = temp_u32_1;
    stack_long_ptr1[0x24] = *(longlong *)((longlong)stack_long_ptr1 + 300);
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x134) = 0;
    *(uint32_t *)(stack_long_ptr1 + 0x25) = 0;
    *(uint8_t *)((longlong)stack_long_ptr1 + 0x17c) = 0;
    temp_float2 = (float)calculate_render_quality(stack_long_ptr1);
    *(bool *)((longlong)stack_long_ptr1 + 0x17d) = 0.0 < temp_float2;
    *(int *)((longlong)stack_long_ptr1 + 0x174) = (int)stack_long_ptr1[0x2f];
    *(uint32_t *)(stack_long_ptr1 + 0x2f) = 0;
    *(uint8_t *)((longlong)stack_long_ptr1 + 0x17e) = 0;
    *(float *)(stack_long_ptr1 + 0x27) = *(float *)((longlong)stack_long_ptr1 + 0x104) - 9999.0;
    init_particle_system(stack_long_ptr1 + 0x31, 0);
    temp_long1 = stack_long1;
    *(uint32_t *)(stack_long_ptr1 + 0x34) = 1;
    if (stack_long1 == 0) {
        temp_u32_1 = 1;
    }
    else {
        temp_u32_1 = *(uint32_t *)(stack_long1 + 0x1a0);
    }
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x1a4) = temp_u32_1;
    if (stack_long1 != 0) {
        temp_u32_2 = *(uint32_t *)(stack_long1 + 0x1a8);
    }
    *(uint32_t *)(stack_long_ptr1 + 0x35) = temp_u32_2;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x1ac) = *(uint32_t *)((longlong)stack_long_ptr1 + 0x284);
    *(uint32_t *)(stack_long_ptr1 + 0x36) = 0xbf800000;
    init_particle_system(stack_long_ptr1 + 0x37, 0);
    init_particle_system(stack_long_ptr1 + 0x39, 0);
    init_particle_system(stack_long_ptr1 + 0x3b, 0);
    stack_long_ptr1[0x42] = 0;
    *(uint32_t *)((longlong)stack_long_ptr1 + 0x13c) = 0;
    *(uint32_t *)(stack_long_ptr1 + 0x28) = 0;
    stack_long_ptr1[0x33] = (longlong)(stack_long_ptr1 + 0x57);
    init_shader_cache(stack_long_ptr1 + 0x3d, 0);
    update_render_quality(stack_long_ptr1 + 0x51, 3);
    if ((stack_uint6 != 0) && ((int)stack_long_ptr1[0x35] != *(int *)(temp_long1 + 0x1a8))) {
        *(int *)(stack_long_ptr1 + 0x35) = *(int *)(temp_long1 + 0x1a8);
        update_render_quality(stack_long_ptr1 + 0x37, stack_long_ptr1 + 0x35);
    }
    if (0 < *(int *)((longlong)stack_long_ptr1 + 0xc4)) {
        *(int *)((longlong)stack_long_ptr1 + 0xc4) = *(int *)((longlong)stack_long_ptr1 + 0xc4) + -1;
    }
    if (0 < (int)stack_long_ptr1[0x19]) {
        *(int *)(stack_long_ptr1 + 0x19) = (int)stack_long_ptr1[0x19] + -1;
    }
    if ((char)temp_uint1 != '\0') {
        update_occlusion_data(stack_long_ptr1);
        update_post_processing(stack_long_ptr1, 0);
    }
    temp_ptr1 = stack_u8_ptr1;
    if ((((stack_u8_ptr1 != (uint8_t *)0x0) && (temp_long2 = stack_long_ptr1[5], *(char *)(temp_long2 + 0x48) != '\0')) && (temp_long3 = get_current_scene(), temp_long2 != temp_long3)) && (((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) == 0 || ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 2) != 0)))) {
        *(uint8_t *)(temp_long2 + 0x48) = 0;
        *(uint8_t *)(global_base_ptr + POST_PROCESS_FLAG_OFFSET) = 0;
        *temp_ptr1 = 0;
    }
    if (((temp_u64_3 & 1) == 0) && ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) == 0)) {
        temp_uint1 = *(uint *)(stack_long_ptr1 + 0x35);
        *(uint *)(stack_long_ptr1 + 0x35) = temp_uint1 | 0x10;
        *(uint32_t *)((longlong)stack_long_ptr1 + 0x16c) = 1;
        *(uint32_t *)(stack_long_ptr1 + 0x2e) = 2;
        if ((temp_u64_3 & 0x20) == 0) {
            long_ptr1 = stack_long_ptr1 + 8;
            temp_u32_1 = get_object_render_flags(stack_long_ptr1, &SHADOW_VOLUME_OFFSET, 0);
            temp_char2 = check_object_intersection(temp_u32_1, long_ptr1, 0);
            if (temp_char2 != '\0') {
                *(uint8_t *)((longlong)stack_long_ptr1 + 0xb3) = 1;
            }
        }
        if (stack_u8_ptr1 != (uint8_t *)0x0) {
            temp_float2 = *(float *)(global_base_ptr + FOG_DENSITY_OFFSET) * 0.5;
            temp_u64 = calculate_object_distance(&stack_u64_3, ((*(float *)(stack_long_ptr1 + 9) + *(float *)(stack_long_ptr1 + 8)) - *(float *)(global_base_ptr + DEPTH_OF_FIELD_OFFSET)) - temp_float2, *(float *)((longlong)stack_long_ptr1 + 0x44) + *(float *)(global_base_ptr + MOTION_BLUR_OFFSET) + temp_float2);
            temp_u32_1 = get_object_render_flags(stack_long_ptr1, &AMBIENT_OCCLUSION_OFFSET, 0);
            temp_char2 = check_object_visibility(temp_u32_1, temp_u64);
            if (temp_char2 != '\0') {
                *stack_u8_ptr1 = 0;
            }
        }
        *(uint32_t *)((longlong)stack_long_ptr1 + 0x16c) = 0;
        *(uint32_t *)(stack_long_ptr1 + 0x2e) = 1;
        *(uint *)(stack_long_ptr1 + 0x35) = temp_uint1;
        if ((temp_u64_3 & 0x100000) == 0) {
            temp_float2 = 0.0;
        }
        else {
            stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 0xbf800000);
            float_ptr1 = (float *)calculate_texture_mapping(&stack_u64_3, &GLOBAL_TEXTURE_OFFSET, 0, 0);
            temp_float2 = *float_ptr1;
        }
        temp_u64 = calculate_object_distance(&stack_u64_3);
        stack_float_ptr1 = (float *)CONCAT44(stack_float_ptr1._4_4_, 0xbf800000);
        temp_u64_2 = calculate_texture_mapping(&stack_u64_2, stack_char_ptr1, 0, 1);
        calculate_object_transform(&stack_u64_1, temp_u64_2, temp_u64);
        temp_ptr1 = stack_u8_ptr1;
        stack_float11 = stack_float20;
        stack_float10 = stack_float12;
        stack_float13 = stack_float18;
        stack_float12 = stack_float22;
        if ((temp_u64_3 & 0x20) == 0) {
            temp_float4 = *(float *)(global_base_ptr + DEPTH_OF_FIELD_OFFSET);
            temp_float6 = temp_float4 + *(float *)(global_base_ptr + FOG_DENSITY_OFFSET) + *(float *)(global_base_ptr + PARTICLE_FLAG_OFFSET);
        }
        else {
            temp_float4 = *(float *)(global_base_ptr + DEPTH_OF_FIELD_OFFSET);
            temp_float6 = temp_float4;
        }
        if (stack_u8_ptr1 != (uint8_t *)0x0) {
            temp_float4 = temp_float4 + *(float *)(global_base_ptr + FOG_DENSITY_OFFSET) + *(float *)(global_base_ptr + PARTICLE_FLAG_OFFSET);
        }
        if (0.0 < *(float *)(global_base_ptr + MOTION_BLUR_OFFSET)) {
            temp_float4 = (float)get_current_scene_time();
        }
        stack_float11 = stack_float11 + temp_float6;
        stack_float13 = stack_float13 - temp_float4;
        stack_float_ptr1 = &stack_float11;
        stack_float_ptr1 = (float *)((ulonglong)stack_float_ptr1 & 0xffffffff00000000);
        float_ptr2 = (float *)(global_base_ptr + MOTION_BLUR_OFFSET);
        calculate_object_intersection(&stack_float11, &stack_float13, stack_char_ptr1, 0);
        if ((temp_u64_3 & 0x100000) != 0) {
            temp_u64 = calculate_object_distance(&stack_u64_3, 2.0 - temp_float2);
            get_camera_transform(&stack_float11);
            get_current_scene_time();
            temp_u64_2 = calculate_object_distance(&stack_u64_3);
            float_ptr1 = (float *)calculate_object_distance(&stack_u64_3);
            calculate_object_transform(&stack_float14, &stack_float13, &stack_u64_3);
            calculate_object_transform(&stack_float8, &stack_u64_1, &stack_u64_3);
            stack_float_ptr1 = &stack_float11;
            stack_float_ptr1 = (float *)0x0;
            float_ptr2 = float_ptr1;
            calculate_object_intersection(temp_u64_2, temp_u64, &GLOBAL_TEXTURE_OFFSET, 0);
        }
    }
    *(uint16_t *)((longlong)stack_long_ptr1 + 0x26a) = 0;
    *(uint16_t *)(stack_long_ptr1 + 0x4d) = 0;
    long_ptr1 = (longlong *)get_camera_transform(stack_long_ptr1, &stack_u64_5);
    temp_long2 = long_ptr1[1];
    stack_long_ptr1[0x47] = *long_ptr1;
    stack_long_ptr1[0x48] = temp_long2;
    if ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) != 0) {
        temp_float2 = (float)get_current_frame_time();
        *(float *)((longlong)stack_long_ptr1 + 0x23c) = temp_float2 + *(float *)((longlong)stack_long_ptr1 + 0x23c);
    }
    transform_object_to_camera(stack_long_ptr1 + 0x47, stack_long_ptr1 + 0x45);
    *(float *)(stack_long_ptr1 + 0x49) = stack_float20 + *(float *)((longlong)stack_long_ptr1 + 0x7c);
    if ((temp_uint4 & 0x401) == 1) {
        float_ptr1 = (float *)((longlong)stack_long_ptr1 + 0x7c);
    }
    temp_float2 = *float_ptr1;
    temp_float4 = (float)get_current_frame_time();
    *(float *)((longlong)stack_long_ptr1 + 0x24c) = temp_float4 + stack_float22 + temp_float2;
    *(float *)(stack_long_ptr1 + 0x4a) = ((*(float *)(stack_long_ptr1 + 9) + *(float *)(stack_long_ptr1 + 8)) - *(float *)((longlong)stack_long_ptr1 + 0xa4)) - *(float *)((longlong)stack_long_ptr1 + 0x7c);
    *(float *)((longlong)stack_long_ptr1 + 0x254) = ((*(float *)((longlong)stack_long_ptr1 + 0x4c) + *(float *)((longlong)stack_long_ptr1 + 0x44)) - *(float *)(stack_long_ptr1 + 0x15)) - *(float *)((longlong)stack_long_ptr1 + 0x7c);
    temp_float2 = (float)get_current_scene_time();
    *(float *)(stack_long_ptr1 + 0x4b) = (float)(int)(temp_float2 + *(float *)(stack_long_ptr1 + 0x49) + 0.5);
    *(float *)((longlong)stack_long_ptr1 + 0x25c) = (float)(int)(*(float *)((longlong)stack_long_ptr1 + 0x24c) + 0.5);
    temp_float2 = *(float *)(stack_long_ptr1 + 0x4a);
    temp_float4 = (float)get_current_scene_time();
    *(float *)(stack_long_ptr1 + 0x4c) = (float)(int)((temp_float2 + 0.5) - temp_float4);
    *(float *)((longlong)stack_long_ptr1 + 0x264) = (float)(int)(*(float *)((longlong)stack_long_ptr1 + 0x254) + 0.5);
    if ((*(uint8_t *)(global_base_ptr + 8) & 0x40) != 0) {
        if ((*(int *)(global_base_ptr + RENDER_QUEUE_OFFSET) == *(int *)((longlong)stack_long_ptr1 + 0x84)) && (((*(char *)(global_base_ptr + HIGH_QUALITY_FLAG_OFFSET) == '\0' || (*(char *)(global_base_ptr + SPECIAL_RENDER_FLAG_OFFSET) != '\0')) && ((*(uint *)(stack_long_ptr1[0x74] + 0xc) & 0x200004) == 0)))) {
            trigger_special_render_pass();
        }
        if ((((*(char *)(global_base_ptr + HIGH_QUALITY_FLAG_OFFSET) != '\0') && ((temp_uint4 >> 0x15 & 1) == 0)) && ((*(longlong *)(global_base_ptr + RENDER_TARGET_OFFSET) == 0 || (*(longlong **)(*(longlong *)(global_base_ptr + RENDER_TARGET_OFFSET) + 0x3a0) != stack_long_ptr1)))) && ((stack_long_ptr1 == (longlong *)stack_long_ptr1[0x74] && ((*(uint *)((longlong)stack_long_ptr1 + 0xc) & 0x20000000) == 0)))) {
            trigger_secondary_render_pass();
        }
    }
    if ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) == 0) {
        *(uint32_t *)((longlong)stack_long_ptr1 + 0x144) = *(uint32_t *)((longlong)stack_long_ptr1 + 0x84);
        temp_char2 = check_occlusion_result(&stack_float20, &stack_float18, 0);
        *(uint *)(stack_long_ptr1 + 0x29) = (uint)(temp_char2 != '\0');
        *(uint64_t *)((longlong)stack_long_ptr1 + 0x14c) = CONCAT44(stack_float12, stack_float20);
        *(uint64_t *)((longlong)stack_long_ptr1 + 0x154) = CONCAT44(stack_float22, stack_float18);
        temp_int1 = stack_int1;
        temp_int2 = stack_int2;
    }
    else {
        *(int *)((longlong)stack_long_ptr1 + 0x144) = (int)stack_long_ptr1[1];
        *(uint32_t *)(stack_long_ptr1 + 0x29) = *(uint32_t *)((longlong)stack_long_ptr1 + 0x41c);
        *(longlong *)((longlong)stack_long_ptr1 + 0x14c) = stack_long_ptr1[0x84];
        *(longlong *)((longlong)stack_long_ptr1 + 0x154) = stack_long_ptr1[0x85];
        temp_int1 = stack_int1;
        temp_int2 = stack_int2;
    }
FINAL_RENDER_STAGE:
    if ((temp_uint4 >> 0x1d & 1) == 0) {
        apply_final_transform(stack_long_ptr1 + 0x4b, stack_long_ptr1 + 0x4c, 1);
    }
    if (temp_int1 != temp_int2) {
        *(uint8_t *)((longlong)stack_long_ptr1 + 0xb1) = 0;
    }
    *(short *)(stack_long_ptr1 + 0x17) = (short)stack_long_ptr1[0x17] + 1;
    update_object_reference(global_base_ptr + SHADOW_ENABLE_OFFSET);
    if (((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 1) != 0) && ((*(uint8_t *)((longlong)stack_long_ptr1 + 0x432) & 2) == 0)) {
        *(uint32_t *)(stack_long_ptr1 + 0x1b) = 1;
    }
    if ((temp_uint4 >> 0x18 & 1) != 0) {
        if (((((temp_uint4 & 0x40) == 0) && (*(int *)((longlong)stack_long_ptr1 + 0xc4) < 1)) && ((int)stack_long_ptr1[0x19] < 1)) && ((*(float *)(stack_long_ptr1 + 0x48) < *(float *)(stack_long_ptr1 + 0x47) || *(float *)(stack_long_ptr1 + 0x48) == *(float *)(stack_long_ptr1 + 0x47) || (*(float *)((longlong)stack_long_ptr1 + 0x244) < *(float *)((longlong)stack_long_ptr1 + 0x23c) || *(float *)((longlong)stack_long_ptr1 + 0x244) == *(float *)((longlong)stack_long_ptr1 + 0x23c))))) {
            *(uint32_t *)(stack_long_ptr1 + 0x1b) = 1;
        }
        if ((temp_long1 != 0) && ((*(char *)(temp_long1 + 0xb2) != '\0' || (*(char *)(temp_long1 + 0xb6) != '\0')))) {
            *(uint32_t *)(stack_long_ptr1 + 0x1b) = 1;
        }
    }
    if (*(float *)(global_base_ptr + SHADER_PARAMS_OFFSET) <= 0.0) {
        *(uint32_t *)(stack_long_ptr1 + 0x1b) = 1;
    }
    if (((int)stack_long_ptr1[0x1b] < 1) && (*(int *)((longlong)stack_long_ptr1 + 0xdc) < 1)) {
        temp_char2 = '\0';
    }
    else {
        temp_char2 = '\x01';
    }
    *(char *)((longlong)stack_long_ptr1 + 0xb6) = temp_char2;
    if (((((*(char *)((longlong)stack_long_ptr1 + 0xb2) == '\0') && (*(char *)((longlong)stack_long_ptr1 + 0xaf) != '\0')) && (temp_char2 == '\0')) || ((0 < *(int *)((longlong)stack_long_ptr1 + 0xc4) || (0 < (int)stack_long_ptr1[0x19])))) || (0 < *(int *)((longlong)stack_long_ptr1 + 0xdc))) {
        temp_u8 = 0;
    }
    else {
        temp_u8 = 1;
    }
    *(uint8_t *)((longlong)stack_long_ptr1 + 0xb4) = temp_u8;
    
    // 返回随机数种子
    return_random_seed(stack_u64_7 ^ (uint64_t)buffer_array1);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address