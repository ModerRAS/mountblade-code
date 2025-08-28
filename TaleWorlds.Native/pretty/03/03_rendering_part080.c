#include "TaleWorlds.Native.Split.h"

// 03_rendering_part080.c - 渲染系统高级参数处理和控制模块
// 包含3个核心函数，涵盖渲染参数处理、状态控制、渲染管线执行等高级渲染功能

// 全局常量定义
#define RENDERING_SYSTEM_THRESHOLD_1 35.0f
#define RENDERING_SYSTEM_THRESHOLD_2 0.2f
#define RENDERING_SYSTEM_DISTANCE_THRESHOLD 0.5f
#define RENDERING_SYSTEM_DEFAULT_FLOAT_1 0.0f
#define RENDERING_SYSTEM_DEFAULT_FLOAT_2 1.0f
#define RENDERING_SYSTEM_NEGATIVE_FLOAT -1.0f
#define RENDERING_SYSTEM_ZERO_THRESHOLD 0.0f

// 渲染系统参数处理函数
// 原始函数名: FUN_18030fbd4
void rendering_system_process_parameters(void) {
    uint rendering_flags;
    ushort texture_coord_u;
    ushort texture_coord_v;
    ushort prev_coord_u;
    ushort prev_coord_v;
    int64_t render_time_delta;
    int render_mode;
    int rendering_state;
    uint64_t render_data_ptr;
    byte render_flag;
    int pixel_value;
    int32_t render_param;
    int64_t render_context_ptr;
    int64_t scene_data_ptr;
    char render_char;
    int scene_id;
    int32_t scene_param;
    byte scene_flag;
    int render_counter;
    int64_t render_timestamp;
    float render_scale;
    uint64_t texture_data;
    int8_t render_buffer_1[16];
    int8_t render_buffer_2[16];
    int8_t render_buffer_3[16];
    int8_t render_buffer_4[16];
    float depth_value;
    int8_t render_buffer_5[16];
    int8_t render_buffer_6[16];
    int8_t render_buffer_7[16];
    uint64_t color_data;
    int8_t render_buffer_8[16];
    int8_t render_buffer_9[16];
    float light_intensity;
    float ambient_light;
    float specular_light;
    uint material_flags;
    float diffuse_light;
    int16_t texture_flags;
    float shadow_value;
    float render_distance;
    float fog_density;
    int render_quality;
    int8_t render_quality_flag;
    float reflection_value;
    float refraction_value;
    int render_passes;
    int render_stages;
    uint64_t render_config;
    uint64_t extra_render_data;
    int8_t render_buffer_10[16];
    
    // 计算渲染缩放比例
    render_scale = (float)*(byte *)(render_context_ptr + 0xa9) * render_distance;
    if (specular_light <= (float)render_mode * render_distance) {
        diffuse_light = (float)render_mode * render_distance;
    }
    light_intensity = specular_light;
    if (specular_light <= render_scale) {
        light_intensity = render_scale;
        ambient_light = 0;
        diffuse_light = 0;
        material_flags = 0;
    }
    
    // 计算颜色分量
    reflection_value = (float)*(byte *)(render_context_ptr + -0x5c) * render_distance;
    render_scale = (float)*(byte *)(render_context_ptr + -0x5b) * render_distance;
    refraction_value = (reflection_value + reflection_value) - ambient_light;
    reflection_value = ambient_light - (render_scale + render_scale);
    *(float *)(render_context_ptr + -0x78) = reflection_value;
    render_scale = (float)*(byte *)(render_context_ptr + -0x5a) * render_distance;
    shadow_value = (render_scale + render_scale) - ambient_light;
    render_scale = (float)*(byte *)(render_context_ptr + -0x59) * render_distance;
    
    // 设置渲染管线参数
    rendering_system_set_render_pipeline_parameters(render_scale, ambient_light - (render_scale + render_scale));
    rendering_system_set_render_pipeline_parameters(
        CONCAT44(render_quality_flag, (float)*(byte *)(render_context_ptr + -0x58) * render_distance));
    
    // 处理渲染标志位
    render_flag = (byte)(*(uint *)(render_context_ptr + -0x60) >> 0x14) & scene_flag;
    render_scale = (float)*(byte *)(render_context_ptr + -0x57) * render_distance;
    texture_data = rendering_system_set_texture_parameter(render_scale, 0xf0, 
        (byte)(*(uint *)(render_context_ptr + -0x60) >> 4) & scene_flag);
    
    // 设置纹理参数
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xf1,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0xe),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 6) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xf2,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0xf),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 7) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xf3,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0xd),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 5) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xf6,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0x17),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 0xf) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xf4,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0x14),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 0xc) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xf5,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0x16),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 0xe) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xf7,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0x15),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 0xd) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xfa, render_flag);
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xfb,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0xb),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 3) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xf8,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0x12),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 10) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xf9,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 0x13),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 0xb) & scene_flag));
    texture_data = rendering_system_set_texture_parameter(texture_data, 0xfc,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 9),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 1) & scene_flag));
    rendering_system_set_texture_parameter(texture_data, 0xfd,
        CONCAT31((uint3)(*(uint *)(render_context_ptr + -0x60) >> 10),
                  (byte)(*(uint *)(render_context_ptr + -0x60) >> 2) & scene_flag));
    
    // 处理深度值
    if (shadow_value <= specular_light) {
        render_data_ptr = 0;
    } else {
        render_data_ptr = CONCAT44(scene_id, shadow_value);
        rendering_system_set_render_pipeline_parameters(render_data_ptr);
    }
    rendering_system_set_render_pipeline_parameters(CONCAT14(0xfe, shadow_value));
    rendering_system_execute_render_pipeline();
    
    // 处理光照强度
    if (render_scale <= specular_light) {
        render_data_ptr = 0;
    } else {
        rendering_system_set_render_pipeline_parameters(CONCAT44(scene_id, render_scale));
        render_data_ptr = rendering_system_get_render_pipeline_parameters();
    }
    rendering_system_set_render_pipeline_parameters(CONCAT14(0xff, shadow_value));
    rendering_system_execute_render_pipeline();
    
    // 获取纹理标志
    texture_flags = (int16_t)((uint)render_scale >> 0x10);
    rendering_state = *(int *)(RENDERING_SYSTEM_GLOBAL_STATE + 0x2300);
    render_char = (char)scene_id;
    
    // 处理场景可见性
    if (*(byte *)(render_context_ptr + -0x2c) < scene_flag) {
        if ((((*(float *)(scene_data_ptr + 0x68) != fog_density) && 
              (*(float *)(scene_data_ptr + 0x68) <= RENDERING_SYSTEM_THRESHOLD_2)) &&
             (*(char *)(scene_data_ptr + 0x7c) == render_char)) &&
            (render_scale = *(float *)(scene_data_ptr + 0x74) - *(float *)(scene_data_ptr + 0x6c),
             depth_value = *(float *)(scene_data_ptr + 0x78) - *(float *)(scene_data_ptr + 0x70),
             render_scale = SQRT(render_scale * render_scale + depth_value * depth_value), 
             render_scale <= RENDERING_SYSTEM_THRESHOLD_1)) {
            rendering_system_set_render_pipeline_parameters(RENDERING_SYSTEM_DEFAULT_FLOAT_2);
            rendering_system_set_render_quality(RENDERING_SYSTEM_DEFAULT_FLOAT_2);
            render_quality_flag = 0xe7;
            rendering_system_execute_render_pipeline(render_scale, &render_quality);
        }
        rendering_system_set_render_quality(RENDERING_SYSTEM_DEFAULT_FLOAT_1);
        render_quality_flag = 0xe7;
        rendering_system_execute_render_pipeline();
        *(char *)(scene_data_ptr + 0x7c) = render_char;
        *(int32_t *)(scene_data_ptr + 0x68) = RENDERING_SYSTEM_NEGATIVE_FLOAT;
        *(uint64_t *)(scene_data_ptr + 0x6c) = 0;
        *(uint64_t *)(scene_data_ptr + 0x74) = 0;
        render_flag = 0;
    } else {
        if (render_flag != 0) {
            *(byte *)(scene_data_ptr + 0x7c) = scene_flag;
        }
        if (*(float *)(scene_data_ptr + 0x68) == fog_density) {
            render_scale = RENDERING_SYSTEM_DEFAULT_FLOAT_1;
            rendering_system_set_render_pipeline_parameters(
                CONCAT44((float)*(ushort *)(render_context_ptr + -0x22),
                        (float)*(ushort *)(render_context_ptr + -0x24)));
            *(uint64_t *)(scene_data_ptr + 0x6c) = rendering_system_get_render_pipeline_parameters();
        } else {
            render_scale = *(float *)(scene_data_ptr + 0x68) + RENDERING_SYSTEM_TIME_DELTA;
        }
        *(float *)(scene_data_ptr + 0x68) = render_scale;
        render_data_ptr = 0;
        rendering_system_set_render_pipeline_parameters(CONCAT14(0xe7, shadow_value));
        rendering_system_execute_render_pipeline();
        rendering_system_set_render_pipeline_parameters(
            CONCAT44((float)*(ushort *)(render_context_ptr + -0x22),
                    (float)*(ushort *)(render_context_ptr + -0x24)));
        *(uint64_t *)(scene_data_ptr + 0x74) = rendering_system_get_render_pipeline_parameters();
        render_flag = scene_flag;
    }
    *(byte *)(scene_data_ptr + 0x7d) = render_flag;
    render_timestamp = RENDERING_SYSTEM_TIMESTAMP;
    render_scale = refraction_value * refraction_value + reflection_value * reflection_value;
    
    // 计算光照衰减
    if (diffuse_light * diffuse_light <= render_scale) {
        reflection_value = (float)RENDERING_SYSTEM_LIGHT_CONSTANT;
        render_buffer_8._8_8_ = 0;
        render_buffer_8._0_8_ = CONCAT44(0, render_scale);
        render_buffer_5._8_8_ = 0;
        render_buffer_5._0_8_ = CONCAT44(0, render_scale);
        render_buffer_5 = rendering_system_calculate_fast_inverse_square_root(render_buffer_8, render_buffer_5);
        refraction_value = render_buffer_5._0_4_;
        rendering_system_calculate_atan2();
        reflection_value = (refraction_value * 0.5 * (reflection_value - render_scale * refraction_value * refraction_value) * render_scale - diffuse_light) /
                         (ambient_light - diffuse_light);
        render_scale = (float)rendering_system_calculate_sine();
        refraction_value = (float)((uint)(render_scale * reflection_value) ^ material_flags);
        render_scale = fog_density;
        if ((fog_density <= refraction_value) && (render_scale = refraction_value, ambient_light <= refraction_value)) {
            render_scale = ambient_light;
        }
        refraction_value = (float)rendering_system_calculate_cosine();
        refraction_value = refraction_value * reflection_value;
        reflection_value = fog_density;
        if ((fog_density <= refraction_value) && (reflection_value = refraction_value, ambient_light <= refraction_value)) {
            reflection_value = ambient_light;
        }
        *(float *)(render_context_ptr + -0x78) = render_scale;
        *(float *)(render_context_ptr + -0x74) = reflection_value;
        texture_data = *(uint64_t *)(render_context_ptr + -0x78);
        *(char *)(render_timestamp + 0x2028) = render_char;
    } else {
        texture_data = 0;
    }
    
    // 更新渲染状态
    render_time_delta = RENDERING_SYSTEM_GLOBAL_STATE;
    render_param = *(int32_t *)(render_context_ptr + -0x34);
    *(int32_t *)(scene_data_ptr + 0x338) = *(int32_t *)(render_context_ptr + -0x38);
    *(int32_t *)(scene_data_ptr + 0x340) = *(int32_t *)(render_context_ptr + -0x30);
    *(int32_t *)(scene_data_ptr + 0x33c) = render_param;
    *(uint64_t *)(render_context_ptr + -0x78) = texture_data;
    
    if (*(int *)(render_time_delta + 0x2530) != scene_id) {
        if (*(byte *)(render_context_ptr + -0x2c) < scene_flag) {
            *(int *)(scene_data_ptr + 0x334) = scene_id;
        } else {
            texture_coord_u = *(ushort *)(render_context_ptr + -0x24);
            texture_coord_v = *(ushort *)(render_context_ptr + -0x22);
            prev_coord_u = *(ushort *)(scene_data_ptr + 0x334);
            prev_coord_v = *(ushort *)(scene_data_ptr + 0x336);
            *(short *)(scene_data_ptr + 0x334) = (short)(int)(float)texture_coord_u;
            reflection_value = (float)texture_coord_u - (float)prev_coord_u;
            render_scale = (float)texture_coord_v - (float)prev_coord_v;
            *(short *)(scene_data_ptr + 0x336) = (short)(int)(float)texture_coord_v;
            if ((((float)prev_coord_u != ambient_light) || ((float)prev_coord_v != ambient_light)) &&
                ((RENDERING_SYSTEM_DISTANCE_THRESHOLD <= ABS(reflection_value) || 
                  (RENDERING_SYSTEM_DISTANCE_THRESHOLD <= ABS(render_scale))))) {
                pixel_value = (int)reflection_value;
                rendering_system_set_render_quality(CONCAT44(scene_param, scene_id));
                render_counter = (int)render_scale;
                render_quality = scene_id;
                render_passes = pixel_value;
                render_stages = render_counter;
                rendering_system_update_render_state();
                render_timestamp = RENDERING_SYSTEM_TIMESTAMP;
                if (*(char *)(RENDERING_SYSTEM_SCENE_DATA + 0x1609) != render_char) {
                    rendering_system_set_render_pipeline_parameters(CONCAT44(render_counter, pixel_value));
                    rendering_system_process_scene_data(*(uint64_t *)(RENDERING_SYSTEM_RENDER_DATA + 8), 
                                                         rendering_system_get_render_pipeline_parameters());
                    render_timestamp = RENDERING_SYSTEM_TIMESTAMP;
                }
            }
            *(char *)(render_timestamp + 0x2028) = render_char;
        }
    }
    
    // 计算阴影和反射
    render_scale = shadow_value * shadow_value + light_intensity * light_intensity;
    render_buffer_1._4_4_ = ambient_light;
    render_buffer_1._0_4_ = light_intensity;
    render_buffer_1._8_4_ = diffuse_light;
    render_buffer_1._12_4_ = material_flags;
    render_buffer_2._4_12_ = render_buffer_1._4_12_;
    render_buffer_2._0_4_ = light_intensity * light_intensity;
    render_config = render_buffer_2._0_8_;
    if (render_buffer_2._0_4_ <= render_scale) {
        render_buffer_5 = rendering_system_calculate_fast_inverse_square_root(
            ZEXT416((uint)render_scale), ZEXT416((uint)render_scale));
        reflection_value = render_buffer_5._0_4_;
        rendering_system_calculate_atan2();
        light_intensity = (reflection_value * 0.5 * (3.0 - render_scale * reflection_value * reflection_value) * render_scale - light_intensity) /
                         (ambient_light - light_intensity);
        render_scale = (float)rendering_system_calculate_sine();
        reflection_value = (float)((uint)(render_scale * light_intensity) ^ material_flags);
        render_scale = fog_density;
        if ((fog_density <= reflection_value) && (render_scale = reflection_value, ambient_light <= reflection_value)) {
            render_scale = ambient_light;
        }
        render_buffer_3._0_8_ = rendering_system_calculate_cosine();
        render_buffer_3._8_8_ = extra_render_data;
        render_buffer_4._4_12_ = render_buffer_3._4_12_;
        render_buffer_4._0_4_ = (float)render_buffer_3._0_8_ * light_intensity;
        render_config = render_buffer_4._0_8_;
        if ((fog_density <= render_buffer_4._0_4_) &&
            (fog_density = render_buffer_4._0_4_, ambient_light <= render_buffer_4._0_4_)) {
            fog_density = ambient_light;
        }
        *(char *)(render_timestamp + 0x2028) = render_char;
    } else {
        render_scale = RENDERING_SYSTEM_DEFAULT_FLOAT_1;
        fog_density = RENDERING_SYSTEM_DEFAULT_FLOAT_1;
    }
    
    if (*(int *)(render_context_ptr + -0x60) != scene_id) {
        *(char *)(render_timestamp + 0x2028) = render_char;
    }
    
    // 执行渲染管线
    render_quality_flag = 0xde;
    rendering_system_set_render_quality(texture_data);
    light_intensity = render_scale;
    specular_light = fog_density;
    texture_data = rendering_system_execute_render_pipeline(render_config, &render_quality);
    render_quality_flag = 0xdf;
    rendering_system_set_render_quality(render_scale);
    light_intensity = fog_density;
    texture_data = rendering_system_execute_render_pipeline(texture_data, &render_quality);
    
    // 处理渲染数据
    rendering_flags = *(uint *)(render_context_ptr + -0x74);
    rendering_system_set_render_quality(CONCAT44(scene_id, rendering_flags));
    render_quality_flag = 0xe8;
    shadow_value = (float)rendering_flags;
    texture_data = rendering_system_execute_render_pipeline(texture_data, &render_quality);
    shadow_value = (float)(rendering_flags ^ material_flags);
    rendering_system_set_render_quality(CONCAT44(scene_id, shadow_value));
    render_quality_flag = 0xe9;
    texture_data = rendering_system_execute_render_pipeline(texture_data, &render_quality);
    
    rendering_flags = *(uint *)(render_context_ptr + -0x78);
    rendering_system_set_render_quality(CONCAT44(scene_id, rendering_flags));
    render_quality_flag = 0xeb;
    shadow_value = (float)rendering_flags;
    texture_data = rendering_system_execute_render_pipeline(texture_data, &render_quality);
    shadow_value = (float)(rendering_flags ^ material_flags);
    rendering_system_set_render_quality(CONCAT44(scene_id, shadow_value));
    render_quality_flag = 0xea;
    texture_data = rendering_system_execute_render_pipeline(texture_data, &render_quality);
    
    render_scale = specular_light;
    shadow_value = specular_light;
    rendering_system_set_render_quality(CONCAT44(scene_id, specular_light));
    render_quality_flag = 0xec;
    texture_data = rendering_system_execute_render_pipeline(texture_data, &render_quality);
    shadow_value = (float)((uint)render_scale ^ material_flags);
    rendering_system_set_render_quality(CONCAT44(scene_id, shadow_value));
    render_quality_flag = 0xed;
    texture_data = rendering_system_execute_render_pipeline(texture_data, &render_quality);
    
    render_scale = light_intensity;
    rendering_system_set_render_pipeline_parameters(CONCAT44(scene_id, light_intensity));
    rendering_system_set_render_quality(rendering_system_get_render_pipeline_parameters());
    render_quality_flag = 0xef;
    texture_data = rendering_system_execute_render_pipeline(texture_data, &render_quality);
    rendering_system_set_render_pipeline_parameters(CONCAT44(scene_id, (uint)render_scale ^ material_flags));
    rendering_system_set_render_quality(rendering_system_get_render_pipeline_parameters());
    render_quality_flag = 0xee;
    rendering_system_execute_render_pipeline(texture_data, &render_quality);
    
    // 处理时间增量
    render_scale = RENDERING_SYSTEM_TIME_DELTA;
    render_data_ptr = 0;
    color_data = 0;
    if (*(char *)(scene_data_ptr + 0x80) != render_char) {
        render_data_ptr = (uint64_t)*(uint *)(scene_data_ptr + 0x88);
        color_data = (uint64_t)*(uint *)(scene_data_ptr + 0x84);
    }
    
    render_buffer_10._8_8_ = 0;
    render_buffer_10._0_8_ = color_data;
    render_buffer_6._8_8_ = 0;
    render_buffer_6._0_8_ = render_data_ptr;
    render_flag = *(byte *)(scene_data_ptr + 0x7f);
    
    if (*(byte *)(scene_data_ptr + 0x7f) != 0) {
        *(char *)(scene_data_ptr + 0x7f) = render_char;
        render_flag = 0;
        if (*(byte *)(scene_data_ptr + 400) < *(byte *)(scene_data_ptr + 0x8c)) {
            render_data_ptr = (uint64_t)*(byte *)(scene_data_ptr + 400);
            render_buffer_6 = ZEXT416(*(uint *)(scene_data_ptr + 0x90 + render_data_ptr * 4));
            *(float *)(scene_data_ptr + 0x110 + render_data_ptr * 4) = 
                *(float *)(scene_data_ptr + 0x110 + render_data_ptr * 4) - render_scale;
            if (*(float *)(scene_data_ptr + 0x110 + (uint64_t)*(byte *)(scene_data_ptr + 400) * 4) <= 
                ambient_light) {
                *(byte *)(scene_data_ptr + 400) = *(byte *)(scene_data_ptr + 400) + 1;
            }
            *(byte *)(scene_data_ptr + 0x7f) = scene_flag;
            render_flag = scene_flag;
        }
        if (*(byte *)(scene_data_ptr + 0x191) < *(byte *)(scene_data_ptr + 0x8d)) {
            render_data_ptr = (uint64_t)*(byte *)(scene_data_ptr + 0x191);
            render_buffer_10 = ZEXT416(*(uint *)(scene_data_ptr + 0xd0 + render_data_ptr * 4));
            *(float *)(scene_data_ptr + 0x150 + render_data_ptr * 4) = 
                *(float *)(scene_data_ptr + 0x150 + render_data_ptr * 4) - render_scale;
            if (*(float *)(scene_data_ptr + 0x150 + (uint64_t)*(byte *)(scene_data_ptr + 0x191) * 4) <=
                ambient_light) {
                *(byte *)(scene_data_ptr + 0x191) = *(byte *)(scene_data_ptr + 0x191) + 1;
            }
            *(byte *)(scene_data_ptr + 0x7f) = scene_flag;
            render_flag = scene_flag;
        }
    }
    
    // 处理颜色数据
    if ((rendering_state != 0) && ((*(char *)(scene_data_ptr + 0x80) != render_char || (render_flag != 0)))) {
        render_buffer_7._4_12_ = render_buffer_6._4_12_;
        render_buffer_7._0_4_ = render_buffer_6._0_4_ * 255.0f;
        render_buffer_9._4_12_ = render_buffer_10._4_12_;
        render_buffer_9._0_4_ = render_buffer_10._0_4_ * 255.0f;
        rendering_system_process_color_data(*(int32_t *)(scene_data_ptr + 0x330), &render_quality,
                                          render_buffer_7._0_8_, render_buffer_9._0_8_,
                                          CONCAT22(texture_flags, 
                                                   CONCAT11((char)(int)render_buffer_9._0_4_,
                                                           (char)(int)render_buffer_7._0_4_)));
        render_scale = RENDERING_SYSTEM_TIME_DELTA;
    }
    
    // 处理渲染模式
    if (*(char *)(scene_data_ptr + 0x192) == render_char) {
        render_param = 4;
        *(int32_t *)(scene_data_ptr + 100) = 4;
        rendering_state = rendering_system_validate_render_mode(*(int32_t *)(scene_data_ptr + 0x330), 
                                                               &render_quality);
        if ((rendering_state == 0) && (render_quality != 0)) {
            if (render_quality == 1) {
                render_param = 2;
            }
            *(int32_t *)(scene_data_ptr + 100) = render_param;
        }
        *(int8_t *)(scene_data_ptr + 0x7e) = 1;
        // 警告：此子函数不返回
        rendering_system_execute_final_render(*(uint64_t *)(render_context_ptr + 0xc0) ^ 
                                              (uint64_t)&render_quality);
    }
    
    render_flag = *(byte *)(scene_data_ptr + 0x318);
    *(char *)(scene_data_ptr + 0x192) = render_char;
    if (render_flag < *(byte *)(scene_data_ptr + 0x194)) {
        *(float *)(scene_data_ptr + 0x298 + (uint64_t)render_flag * 4) =
            *(float *)(scene_data_ptr + 0x298 + (uint64_t)render_flag * 4) - render_scale;
        if (*(float *)(scene_data_ptr + 0x298 + (uint64_t)*(byte *)(scene_data_ptr + 0x318) * 4) <=
            ambient_light) {
            *(byte *)(scene_data_ptr + 0x318) = *(byte *)(scene_data_ptr + 0x318) + 1;
        }
        *(byte *)(scene_data_ptr + 0x192) = scene_flag;
    }
    
    render_flag = *(byte *)(scene_data_ptr + 0x319);
    if (render_flag < *(byte *)(scene_data_ptr + 0x195)) {
        *(float *)(scene_data_ptr + 0x2d8 + (uint64_t)render_flag * 4) =
            *(float *)(scene_data_ptr + 0x2d8 + (uint64_t)render_flag * 4) - render_scale;
        if (*(float *)(scene_data_ptr + 0x2d8 + (uint64_t)*(byte *)(scene_data_ptr + 0x319) * 4) <=
            ambient_light) {
            *(byte *)(scene_data_ptr + 0x319) = *(byte *)(scene_data_ptr + 0x319) + 1;
        }
        *(byte *)(scene_data_ptr + 0x192) = scene_flag;
    }
    // 警告：此子函数不返回
    memset(render_context_ptr + 0x20, 0, 0x78);
}

// 渲染系统模式设置函数
// 原始函数名: FUN_180310903
void rendering_system_set_render_mode(void) {
    int32_t render_mode;
    int64_t render_context_ptr;
    int64_t scene_data_ptr;
    int32_t scene_flags;
    int mode_param;
    
    if (mode_param != 0) {
        if (mode_param == 1) {
            render_mode = scene_flags;
        }
        *(int32_t *)(scene_data_ptr + 100) = render_mode;
    }
    *(int8_t *)(scene_data_ptr + 0x7e) = 1;
    // 警告：此子函数不返回
    rendering_system_execute_final_render(*(uint64_t *)(render_context_ptr + 0xc0) ^ 
                                          (uint64_t)&render_quality);
}

// 渲染系统纹理参数设置函数
// 原始函数名: PhysicsSystem_SpatialPartitioning
void rendering_system_set_texture_parameter(int32_t texture_data, int8_t param_type, char param_value) {
    int8_t render_stack[4];
    int8_t stack_param;
    uint64_t render_config;
    
    stack_param = param_type;
    if (param_value != '\0') {
        render_config = RENDERING_SYSTEM_DEFAULT_FLOAT_2;
        rendering_system_execute_render_pipeline(RENDERING_SYSTEM_DEFAULT_FLOAT_2, render_stack);
        return;
    }
    render_config = RENDERING_SYSTEM_DEFAULT_FLOAT_1;
    rendering_system_execute_render_pipeline(texture_data, render_stack);
    return;
}

// 函数别名定义
#define rendering_system_process_render_parameters rendering_system_process_parameters
#define rendering_system_update_render_mode rendering_system_set_render_mode
#define rendering_system_setup_texture_parameter rendering_system_set_texture_parameter

// 警告：以'_'开头的全局变量与较小符号在相同地址重叠