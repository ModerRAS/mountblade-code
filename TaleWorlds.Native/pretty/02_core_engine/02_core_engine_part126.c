#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part126.c - 核心引擎渲染函数
// 包含5个函数，主要处理渲染管线、相机变换和渲染状态管理

/**
 * 初始化渲染管线
 * 设置渲染参数、变换矩阵和渲染状态
 */
void initialize_render_pipeline(void)
{
    float transform_x;
    float transform_y;
    uint render_flags;
    longlong context_ptr;
    undefined1 *texture_ptr;
    longlong camera_ptr;
    char is_visible;
    undefined4 color_value;
    longlong render_context;
    undefined8 matrix_data;
    undefined4 *shader_params;
    longlight vertex_buffer;
    float *position_ptr;
    undefined8 texture_data;
    undefined8 *render_target;
    undefined1 depth_test;
    float *camera_matrix;
    longlong scene_manager;
    undefined4 ambient_light;
    undefined8 world_matrix;
    float *viewport_ptr;
    char shadow_enabled;
    uint render_mode;
    float view_distance;
    float fog_density;
    float light_intensity;
    float material_shininess;
    float camera_fov;
    float camera_near;
    float camera_far;
    
    // 设置基础渲染参数
    color_value = (undefined4)((ulonglong)world_matrix >> 0x20);
    *(float *)(render_context + 0x278) =
         ((*(float *)(render_context + 0x40) - *(float *)(render_context + 0x8c)) - *(float *)(render_context + 0x70)) +
         (*(float *)(render_context + 0x48) - *(float *)(render_context + 0xa4));
    
    // 计算视图变换矩阵
    view_distance = *(float *)(camera_ptr + 0x6c);
    if (view_distance == camera_near) {
        view_distance = *(float *)(camera_ptr + 0x4c) - *(float *)(camera_ptr + 0xa8);
    }
    
    *(float *)(camera_ptr + 0x27c) =
         ((*(float *)(camera_ptr + 0x44) - *(float *)(camera_ptr + 0x90)) -
         *(float *)(camera_ptr + 0x74)) + view_distance;
    
    // 设置投影矩阵
    *(float *)(camera_ptr + 0x204) = *(float *)(camera_ptr + 0x70) - *(float *)(camera_ptr + 0x8c);
    ambient_light = (undefined4)world_matrix;
    *(undefined4 *)(camera_ptr + 0x208) = ambient_light;
    *(undefined4 *)(camera_ptr + 0x20c) = ambient_light;
    
    // 初始化渲染管线
    setup_render_pipeline(camera_ptr);
    setup_shader_parameters(camera_ptr);
    
    // 计算世界矩阵
    matrix_data = calculate_world_matrix(camera_matrix + -0x18,
                              *(float *)(camera_ptr + 0x20c) +
                              *(float *)(camera_ptr + 0x204));
    
    // 设置着色器参数
    shader_params = (undefined4 *)setup_vertex_shader(camera_matrix + -0xe,camera_ptr + 0x40,matrix_data);
    color_value = shader_params[1];
    *(undefined4 *)(camera_ptr + 0x110) = *shader_params;
    *(undefined4 *)(camera_ptr + 0x114) = color_value;
    
    // 复制矩阵数据
    *(undefined8 *)(camera_ptr + 0x100) = *(undefined8 *)(camera_ptr + 0x110);
    *(undefined8 *)(camera_ptr + 0x108) = *(undefined8 *)(camera_ptr + 0x110);
    *(undefined8 *)(camera_ptr + 0x118) = *(undefined8 *)(camera_ptr + 0x110);
    
    // 设置投影矩阵
    shader_params = (undefined4 *)calculate_world_matrix(camera_matrix + -0x18);
    color_value = shader_params[1];
    *(undefined4 *)(camera_ptr + 300) = *shader_params;
    *(undefined4 *)(camera_ptr + 0x130) = color_value;
    *(undefined8 *)(camera_ptr + 0x120) = *(undefined8 *)(camera_ptr + 300);
    *(undefined4 *)(camera_ptr + 0x134) = ambient_light;
    *(undefined4 *)(camera_ptr + 0x128) = ambient_light;
    
    // 启用深度测试
    *(undefined1 *)(camera_ptr + 0x17c) = 0;
    view_distance = (float)calculate_lod_distance(camera_ptr);
    *(bool *)(camera_ptr + 0x17d) = camera_near < view_distance;
    
    // 设置雾效参数
    *(undefined4 *)(camera_ptr + 0x174) = *(undefined4 *)(camera_ptr + 0x178);
    *(undefined4 *)(camera_ptr + 0x178) = ambient_light;
    *(undefined1 *)(camera_ptr + 0x17e) = 0;
    
    // 计算裁剪平面
    *(float *)(camera_ptr + 0x138) = *(float *)(camera_ptr + 0x104) - 9999.0;
    setup_clipping_planes(camera_ptr + 0x188,0);
    
    // 设置渲染状态
    context_ptr = *(longlong *)(camera_matrix + 8);
    *(undefined4 *)(camera_ptr + 0x1a0) = 1;
    if (context_ptr == 0) {
        color_value = 1;
    }
    else {
        color_value = *(undefined4 *)(context_ptr + 0x1a0);
    }
    *(undefined4 *)(camera_ptr + 0x1a4) = color_value;
    
    color_value = ambient_light;
    if (context_ptr != 0) {
        color_value = *(undefined4 *)(context_ptr + 0x1a8);
    }
    *(undefined4 *)(camera_ptr + 0x1a8) = color_value;
    *(undefined4 *)(camera_ptr + 0x1ac) = *(undefined4 *)(camera_ptr + 0x284);
    *(undefined4 *)(camera_ptr + 0x1b0) = 0xbf800000;
    
    // 初始化渲染目标
    setup_render_target(camera_ptr + 0x1b8,0);
    setup_depth_buffer(camera_ptr + 0x1c8,0);
    setup_stencil_buffer(camera_ptr + 0x1d8,0);
    
    *(undefined8 *)(camera_ptr + 0x210) = world_matrix;
    *(undefined4 *)(camera_ptr + 0x13c) = ambient_light;
    *(undefined4 *)(camera_ptr + 0x140) = ambient_light;
    *(longlong *)(camera_ptr + 0x198) = camera_ptr + 0x2b8;
    
    // 设置纹理采样器
    setup_texture_sampler(camera_ptr + 0x1e8,0);
    setup_vertex_buffer(camera_ptr + 0x288,3);
    
    // 处理光照变化
    if ((camera_matrix[0x16] != 0.0) && (*(int *)(camera_ptr + 0x1a8) != *(int *)(context_ptr + 0x1a8)))
    {
        *(int *)(camera_ptr + 0x1a8) = *(int *)(context_ptr + 0x1a8);
        update_lighting(camera_ptr + 0x1b8,camera_ptr + 0x1a8);
    }
    
    // 更新渲染队列
    if (0 < *(int *)(camera_ptr + 0xc4)) {
        *(int *)(camera_ptr + 0xc4) = *(int *)(camera_ptr + 0xc4) + -1;
    }
    if (0 < *(int *)(camera_ptr + 200)) {
        *(int *)(camera_ptr + 200) = *(int *)(camera_ptr + 200) + -1;
    }
    
    // 处理阴影映射
    if (shadow_enabled != '\0') {
        update_shadow_map(camera_ptr);
        update_render_state(camera_ptr,0);
    }
    
    // 处理纹理更新
    texture_ptr = *(undefined1 **)(camera_matrix + 10);
    if ((((texture_ptr != (undefined1 *)0x0) &&
         (vertex_buffer = *(longlong *)(camera_ptr + 0x28), *(char *)(vertex_buffer + 0x48) != '\0')) &&
        (context_ptr = get_current_texture(), vertex_buffer != context_ptr)) &&
       (((*(byte *)(camera_ptr + 0x432) & 1) == 0 ||
        ((*(byte *)(camera_ptr + 0x432) & 2) != 0)))) {
        *(undefined1 *)(vertex_buffer + 0x48) = 0;
        *(undefined1 *)(scene_manager + 0x1cf8) = 0;
        *texture_ptr = 0;
    }
    
    // 处理渲染模式切换
    if (((render_mode & 1) == 0) && ((*(byte *)(camera_ptr + 0x432) & 1) == 0)) {
        render_flags = *(uint *)(camera_ptr + 0x1a8);
        *(uint *)(camera_ptr + 0x1a8) = render_flags | 0x10;
        *(undefined4 *)(camera_ptr + 0x16c) = 1;
        *(undefined4 *)(camera_ptr + 0x170) = 2;
        
        // 处理透明度混合
        if ((render_mode & 0x20) == 0) {
            color_value = setup_alpha_blending(camera_ptr,&GLOBAL_RENDER_STATE,0);
            is_visible = check_visibility(color_value,camera_ptr + 0x40,0);
            if (is_visible != '\0') {
                *(undefined1 *)(camera_ptr + 0xb3) = 1;
            }
        }
        
        // 处理反射渲染
        if (*(longlong *)(camera_matrix + 10) != 0) {
            view_distance = *(float *)(scene_manager + 0x19f8) * camera_fov;
            matrix_data = calculate_world_matrix(camera_matrix + -0x18,
                                        ((*(float *)(camera_ptr + 0x48) +
                                         *(float *)(camera_ptr + 0x40)) -
                                        *(float *)(scene_manager + 0x165c)) - view_distance,
                                        *(float *)(camera_ptr + 0x44) +
                                        *(float *)(scene_manager + 0x1660) + view_distance);
            color_value = setup_alpha_blending(camera_ptr,&GLOBAL_REFLECTION_STATE,0);
            is_visible = render_reflection(color_value,matrix_data);
            if (is_visible != '\0') {
                **(undefined1 **)(camera_matrix + 10) = 0;
            }
        }
        
        *(undefined4 *)(camera_ptr + 0x16c) = 0;
        *(undefined4 *)(camera_ptr + 0x170) = 1;
        *(uint *)(camera_ptr + 0x1a8) = render_flags;
        view_distance = camera_near;
        
        // 处理后处理效果
        if ((render_mode & 0x100000) != 0) {
            matrix_data = CONCAT44(color_value,0xbf800000);
            position_ptr = (float *)setup_post_processing(camera_matrix + -0x18,&GLOBAL_POSTPROCESS_DATA,0,0,matrix_data);
            color_value = (undefined4)((ulonglong)matrix_data >> 0x20);
            view_distance = *position_ptr;
        }
        
        // 计算最终变换矩阵
        matrix_data = calculate_world_matrix(camera_matrix + -0x18);
        texture_data = setup_post_processing(camera_matrix + -0xe,*(undefined8 *)(camera_matrix + 0x1e),0,1,
                           CONCAT44(color_value,0xbf800000));
        setup_vertex_shader(&render_target,texture_data,matrix_data);
        
        // 设置相机参数
        transform_x = camera_matrix[-2];
        fog_density = camera_matrix[-1];
        transform_y = *camera_matrix;
        light_intensity = camera_matrix[1];
        camera_matrix[-0x1c] = transform_x;
        camera_matrix[-0x1b] = fog_density;
        camera_matrix[-0x1a] = transform_y;
        camera_matrix[-0x19] = light_intensity;
        
        // 计算视图距离
        if ((render_mode & 0x20) == 0) {
            material_shininess = *(float *)(scene_manager + 0x165c);
            camera_far = material_shininess + *(float *)(scene_manager + 0x19f8) + *(float *)(scene_manager + 0x1674);
        }
        else {
            camera_far = *(float *)(scene_manager + 0x165c);
            material_shininess = camera_far;
        }
        
        vertex_buffer = *(longlong *)(camera_matrix + 10);
        if (vertex_buffer != 0) {
            material_shininess = material_shininess + *(float *)(scene_manager + 0x19f8) + *(float *)(scene_manager + 0x1674);
        }
        
        // 处理LOD切换
        if (camera_near < *(float *)(scene_manager + 0x1644)) {
            material_shininess = (float)calculate_lod_level();
            light_intensity = camera_matrix[-0x19];
            transform_y = camera_matrix[-0x1a];
            fog_density = camera_matrix[-0x1b];
            transform_x = camera_matrix[-0x1c];
        }
        
        // 更新变换矩阵
        camera_matrix[-7] = fog_density;
        camera_matrix[-5] = light_intensity;
        camera_matrix[-0x1c] = transform_x + camera_far;
        camera_matrix[-0x1a] = transform_y - material_shininess;
        camera_matrix[-8] = transform_x + camera_far;
        camera_matrix[-6] = transform_y - material_shininess;
        
        // 处理近裁剪面
        if (vertex_buffer == 0) {
            fog_density = *(float *)(scene_manager + 0x165c);
        }
        else {
            fog_density = (float)calculate_near_plane(camera_matrix + -2);
            fog_density = fog_density - 3.0;
        }
        
        camera_matrix[-6] = (*(float *)(camera_ptr + 0x48) + *(float *)(camera_ptr + 0x40)) - fog_density;
        render_scene(camera_matrix + -0x1c,camera_matrix + -0x1a,*(undefined8 *)(camera_matrix + 0x1e),0,&render_target);
        
        // 处理后处理效果
        if ((render_mode & 0x100000) == 0) {
            world_matrix = 0;
        }
        else {
            matrix_data = calculate_world_matrix(camera_matrix + -0x14,2.0 - view_distance);
            apply_post_processing(camera_matrix + -0x1c);
            apply_bloom_effect();
            texture_data = calculate_world_matrix(camera_matrix + 0x18);
            setup_vertex_shader(camera_matrix + -0x18,texture_data,matrix_data);
            calculate_world_matrix(camera_matrix + -0xe);
            calculate_world_matrix(camera_matrix + -0x14);
            matrix_data = setup_vertex_shader(camera_matrix + 0x18,camera_matrix + -0x1a,camera_matrix + -0xe);
            texture_data = setup_vertex_shader(camera_matrix + 0x1c,camera_matrix + -0x18,camera_matrix + -0xe);
            world_matrix = 0;
            render_scene(texture_data,matrix_data,&GLOBAL_POSTPROCESS_DATA,0,0);
        }
    }
    
    // 更新渲染统计信息
    *(short *)(camera_ptr + 0x26a) = (short)world_matrix;
    *(short *)(camera_ptr + 0x268) = (short)world_matrix;
    
    // 处理渲染目标
    render_target = (undefined8 *)get_render_target(camera_ptr,camera_matrix + 0x20);
    matrix_data = render_target[1];
    *(undefined8 *)(camera_ptr + 0x238) = *render_target;
    *(undefined8 *)(camera_ptr + 0x240) = matrix_data;
    
    // 处理运动模糊
    if ((*(byte *)(camera_ptr + 0x432) & 1) != 0) {
        view_distance = (float)get_current_time();
        *(float *)(camera_ptr + 0x23c) = view_distance + *(float *)(camera_ptr + 0x23c);
    }
    
    // 应用最终变换
    apply_transform_matrix(camera_ptr + 0x238,camera_ptr + 0x228);
    *(float *)(camera_ptr + 0x248) = camera_matrix[-2] + *(float *)(camera_ptr + 0x7c);
    
    // 处理相机抖动
    if ((render_mode & 0x401) == 1) {
        viewport_ptr = (float *)(camera_ptr + 0x7c);
    }
    view_distance = *viewport_ptr;
    fog_density = (float)calculate_world_matrix();
    *(float *)(camera_ptr + 0x24c) = fog_density + camera_matrix[1] + view_distance;
    
    // 计算屏幕坐标
    *(float *)(camera_ptr + 0x250) =
         ((*(float *)(camera_ptr + 0x48) + *(float *)(camera_ptr + 0x40)) -
         *(float *)(camera_ptr + 0xa4)) - *(float *)(camera_ptr + 0x7c);
    *(float *)(camera_ptr + 0x254) =
         ((*(float *)(camera_ptr + 0x4c) + *(float *)(camera_ptr + 0x44)) -
         *(float *)(camera_ptr + 0xa8)) - *(float *)(camera_ptr + 0x7c);
    
    // 处理深度缓冲
    view_distance = (float)calculate_world_matrix();
    *(float *)(camera_ptr + 600) = (float)(int)(view_distance + *(float *)(camera_ptr + 0x248) + camera_fov);
    *(float *)(camera_ptr + 0x25c) = (float)(int)(*(float *)(camera_ptr + 0x24c) + camera_fov);
    view_distance = *(float *)(camera_ptr + 0x250);
    fog_density = (float)calculate_world_matrix();
    *(float *)(camera_ptr + 0x260) = (float)(int)((view_distance + camera_fov) - fog_density);
    *(float *)(camera_ptr + 0x264) = (float)(int)(*(float *)(camera_ptr + 0x254) + camera_fov);
    
    // 处理特殊渲染效果
    if ((*(byte *)(scene_manager + 8) & 0x40) != 0) {
        if ((*(int *)(scene_manager + 0x1b2c) == *(int *)(camera_ptr + 0x84)) &&
           (((*(char *)(scene_manager + 0xc1) == '\0' || (*(char *)(scene_manager + 0x135) != '\0')) &&
            ((*(uint *)(*(longlong *)(camera_ptr + 0x3a0) + 0xc) & 0x200004) == 0)))) {
            trigger_special_effect();
        }
        if ((((*(char *)(scene_manager + 0x1dd0) != '\0') && ((render_mode >> 0x15 & 1) == 0)) &&
            ((*(longlong *)(scene_manager + 0x1b78) == 0 ||
             (*(longlong *)(*(longlong *)(scene_manager + 0x1b78) + 0x3a0) != camera_ptr)))) &&
           ((camera_ptr == *(longlong *)(camera_ptr + 0x3a0) &&
            ((*(uint *)(camera_ptr + 0xc) & 0x20000000) == 0)))) {
            trigger_secondary_effect();
        }
    }
    
    // 处理渲染状态
    if ((*(byte *)(camera_ptr + 0x432) & 1) == 0) {
        *(undefined4 *)(camera_ptr + 0x144) = *(undefined4 *)(camera_ptr + 0x84);
        is_visible = check_shader_status(camera_matrix + -2);
        view_distance = camera_matrix[-0x10];
        *(uint *)(camera_ptr + 0x148) = (uint)(is_visible != '\0');
        matrix_data = *(undefined8 *)camera_matrix;
        *(undefined8 *)(camera_ptr + 0x14c) = *(undefined8 *)(camera_matrix + -2);
        *(undefined8 *)(camera_ptr + 0x154) = matrix_data;
    }
    else {
        view_distance = camera_matrix[-0x10];
        *(undefined4 *)(camera_ptr + 0x144) = *(undefined4 *)(camera_ptr + 8);
        *(undefined4 *)(camera_ptr + 0x148) = *(undefined4 *)(camera_ptr + 0x41c);
        *(undefined8 *)(camera_ptr + 0x14c) = *(undefined8 *)(camera_ptr + 0x420);
        *(undefined8 *)(camera_ptr + 0x154) = *(undefined8 *)(camera_ptr + 0x428);
    }
    
    fog_density = render_target;
    if ((render_mode >> 0x1d & 1) == 0) {
        apply_depth_of_field(camera_ptr + 600,camera_ptr + 0x260,1);
    }
    if (fog_density != view_distance) {
        *(undefined1 *)(camera_ptr + 0xb1) = 0;
    }
    
    // 更新帧计数器
    *(short *)(camera_ptr + 0xb8) = *(short *)(camera_ptr + 0xb8) + 1;
    update_frame_counter(scene_manager + 0x1bd0);
    
    // 处理渲染模式
    if (((*(byte *)(camera_ptr + 0x432) & 1) != 0) &&
       ((*(byte *)(camera_ptr + 0x432) & 2) == 0)) {
        *(undefined4 *)(camera_ptr + 0xd8) = 1;
    }
    
    // 处理渲染质量设置
    if ((render_mode >> 0x18 & 1) != 0) {
        if (((((render_mode & 0x40) == 0) && (*(int *)(camera_ptr + 0xc4) < 1)) &&
            (*(int *)(camera_ptr + 200) < 1)) &&
           ((*(float *)(camera_ptr + 0x240) < *(float *)(camera_ptr + 0x238) ||
             *(float *)(camera_ptr + 0x240) == *(float *)(camera_ptr + 0x238) ||
            (*(float *)(camera_ptr + 0x244) < *(float *)(camera_ptr + 0x23c) ||
             *(float *)(camera_ptr + 0x244) == *(float *)(camera_ptr + 0x23c))))) {
            *(undefined4 *)(camera_ptr + 0xd8) = 1;
        }
        if ((context_ptr != 0) && ((*(char *)(context_ptr + 0xb2) != '\0' || (*(char *)(context_ptr + 0xb6) != '\0')))) {
            *(undefined4 *)(camera_ptr + 0xd8) = 1;
        }
    }
    
    // 处理性能优化
    if (*(float *)(scene_manager + 0x1628) <= camera_near) {
        *(undefined4 *)(camera_ptr + 0xd8) = 1;
    }
    
    // 确定是否需要渲染
    if ((*(int *)(camera_ptr + 0xd8) < 1) && (*(int *)(camera_ptr + 0xdc) < 1)) {
        is_visible = '\0';
    }
    else {
        is_visible = '\x01';
    }
    *(char *)(camera_ptr + 0xb6) = is_visible;
    
    // 检查是否跳过渲染
    if ((((*(char *)(camera_ptr + 0xb2) == '\0') &&
         (*(char *)(camera_ptr + 0xaf) != '\0')) && (is_visible == '\0')) ||
       (((0 < *(int *)(camera_ptr + 0xc4) || (0 < *(int *)(camera_ptr + 200))) ||
        (0 < *(int *)(camera_ptr + 0xdc))))) {
        depth_test = 0;
    }
    else {
        depth_test = 1;
    }
    *(undefined1 *)(camera_ptr + 0xb4) = depth_test;
    
    // 执行最终渲染
    execute_render_pipeline(*(ulonglong *)(camera_matrix + 0x24) ^ (ulonglong)&render_target);
}


/**
 * 更新渲染管线状态
 * 处理渲染目标的切换和状态更新
 */
void update_render_pipeline_state(void)
{
    undefined8 render_data;
    char state_flag;
    undefined1 render_enabled;
    int frame_count;
    undefined8 *render_context;
    longlong scene_manager;
    float *viewport;
    longlong camera_params;
    uint render_mode;
    float clear_color;
    float blend_factor;
    float camera_fov;
    float camera_near;
    longlong render_target;
    int render_pass;
    
    // 获取当前渲染时间
    clear_color = (float)get_current_time();
    *(float *)(render_target + 0x23c) = clear_color + *(float *)(render_target + 0x23c);
    
    // 应用变换矩阵
    apply_transform_matrix(render_target + 0x238,render_target + 0x228);
    
    // 计算视口变换
    *(float *)(render_target + 0x248) = *(float *)(render_context + -1) + *(float *)(render_target + 0x7c);
    
    // 处理视口参数
    if ((render_mode & 0x401) == 1) {
        viewport = (float *)(render_target + 0x7c);
    }
    clear_color = *viewport;
    blend_factor = (float)calculate_world_matrix();
    *(float *)(render_target + 0x24c) = blend_factor + *(float *)((longlong)render_context + 4) + clear_color;
    
    // 计算屏幕坐标
    *(float *)(render_target + 0x250) =
         ((*(float *)(render_target + 0x48) + *(float *)(render_target + 0x40)) -
         *(float *)(render_target + 0xa4)) - *(float *)(render_target + 0x7c);
    *(float *)(render_target + 0x254) =
         ((*(float *)(render_target + 0x4c) + *(float *)(render_target + 0x44)) -
         *(float *)(render_target + 0xa8)) - *(float *)(render_target + 0x7c);
    
    // 处理深度缓冲
    clear_color = (float)calculate_world_matrix();
    *(float *)(render_target + 600) = (float)(int)(clear_color + *(float *)(render_target + 0x248) + camera_fov);
    *(float *)(render_target + 0x25c) = (float)(int)(*(float *)(render_target + 0x24c) + camera_fov);
    clear_color = *(float *)(render_target + 0x250);
    blend_factor = (float)calculate_world_matrix();
    *(float *)(render_target + 0x260) = (float)(int)((clear_color + camera_fov) - blend_factor);
    *(float *)(render_target + 0x264) = (float)(int)(*(float *)(render_target + 0x254) + camera_fov);
    
    // 处理特殊渲染效果
    if ((*(byte *)(scene_manager + 8) & 0x40) != 0) {
        if ((*(int *)(scene_manager + 0x1b2c) == *(int *)(render_target + 0x84)) &&
           (((*(char *)(scene_manager + 0xc1) == '\0' || (*(char *)(scene_manager + 0x135) != '\0')) &&
            ((*(uint *)(*(longlong *)(render_target + 0x3a0) + 0xc) & 0x200004) == 0)))) {
            trigger_special_effect();
        }
        if ((((*(char *)(scene_manager + 0x1dd0) != '\0') && ((render_mode >> 0x15 & 1) == 0)) &&
            ((*(longlong *)(scene_manager + 0x1b78) == 0 ||
             (*(longlong *)(*(longlong *)(scene_manager + 0x1b78) + 0x3a0) != render_target)))) &&
           ((render_target == *(longlong *)(render_target + 0x3a0) &&
            ((*(uint *)(render_target + 0xc) & 0x20000000) == 0)))) {
            trigger_secondary_effect();
        }
    }
    
    // 处理渲染状态
    if ((*(byte *)(render_target + 0x432) & 1) == 0) {
        *(undefined4 *)(render_target + 0x144) = *(undefined4 *)(render_target + 0x84);
        state_flag = check_shader_status(render_context + -1);
        frame_count = *(int *)(render_context + -8);
        *(uint *)(render_target + 0x148) = (uint)(state_flag != '\0');
        render_data = *render_context;
        *(undefined8 *)(render_target + 0x14c) = render_context[-1];
        *(undefined8 *)(render_target + 0x154) = render_data;
    }
    else {
        frame_count = *(int *)(render_context + -8);
        *(undefined4 *)(render_target + 0x144) = *(undefined4 *)(render_target + 8);
        *(undefined4 *)(render_target + 0x148) = *(undefined4 *)(render_target + 0x41c);
        *(undefined8 *)(render_target + 0x14c) = *(undefined8 *)(render_target + 0x420);
        *(undefined8 *)(render_target + 0x154) = *(undefined8 *)(render_target + 0x428);
    }
    
    // 应用后处理效果
    if ((render_mode >> 0x1d & 1) == 0) {
        apply_depth_of_field(render_target + 600,render_target + 0x260,1);
    }
    
    // 检查渲染状态变化
    if (render_pass != frame_count) {
        *(undefined1 *)(render_target + 0xb1) = 0;
    }
    
    // 更新帧计数器
    *(short *)(render_target + 0xb8) = *(short *)(render_target + 0xb8) + 1;
    update_frame_counter(scene_manager + 0x1bd0);
    
    // 处理渲染模式
    if (((*(byte *)(render_target + 0x432) & 1) != 0) &&
       ((*(byte *)(render_target + 0x432) & 2) == 0)) {
        *(undefined4 *)(render_target + 0xd8) = 1;
    }
    
    // 处理渲染质量设置
    if ((render_mode >> 0x18 & 1) != 0) {
        if (((((render_mode & 0x40) == 0) && (*(int *)(render_target + 0xc4) < 1)) &&
            (*(int *)(render_target + 200) < 1)) &&
           ((*(float *)(render_target + 0x240) < *(float *)(render_target + 0x238) ||
             *(float *)(render_target + 0x240) == *(float *)(render_target + 0x238) ||
            (*(float *)(render_target + 0x244) < *(float *)(render_target + 0x23c) ||
             *(float *)(render_target + 0x244) == *(float *)(render_target + 0x23c))))) {
            *(undefined4 *)(render_target + 0xd8) = 1;
        }
        if ((camera_params != 0) &&
           ((*(char *)(camera_params + 0xb2) != '\0' || (*(char *)(camera_params + 0xb6) != '\0')))) {
            *(undefined4 *)(render_target + 0xd8) = 1;
        }
    }
    
    // 处理性能优化
    if (*(float *)(scene_manager + 0x1628) <= camera_near) {
        *(undefined4 *)(render_target + 0xd8) = 1;
    }
    
    // 确定是否需要渲染
    if ((*(int *)(render_target + 0xd8) < 1) && (*(int *)(render_target + 0xdc) < 1)) {
        state_flag = '\0';
    }
    else {
        state_flag = '\x01';
    }
    *(char *)(render_target + 0xb6) = state_flag;
    
    // 检查是否跳过渲染
    if ((((*(char *)(render_target + 0xb2) == '\0') &&
         (*(char *)(render_target + 0xaf) != '\0')) && (state_flag == '\0')) ||
       (((0 < *(int *)(render_target + 0xc4) || (0 < *(int *)(render_target + 200))) ||
        (0 < *(int *)(render_target + 0xdc))))) {
        render_enabled = 0;
    }
    else {
        render_enabled = 1;
    }
    *(undefined1 *)(render_target + 0xb4) = render_enabled;
    
    // 执行最终渲染
    execute_render_pipeline(render_context[0x12] ^ (ulonglong)&render_target);
}


/**
 * 处理特殊渲染效果
 * 根据场景参数触发特殊的视觉效果
 */
void process_special_effects(longlong render_context)
{
    undefined4 effect_param1;
    undefined4 effect_param2;
    undefined4 effect_param3;
    char effect_active;
    undefined1 effect_enabled;
    int effect_id;
    undefined4 *effect_data;
    longlong scene_manager;
    longlong camera_params;
    uint render_mode;
    float camera_near;
    longlong target_context;
    int effect_priority;
    
    // 检查是否需要触发特殊效果
    if ((*(int *)(scene_manager + 0x1b2c) == *(int *)(render_context + 0x84)) &&
       (((*(char *)(scene_manager + 0xc1) == '\0' || (*(char *)(scene_manager + 0x135) != '\0')) &&
        ((*(uint *)(*(longlong *)(render_context + 0x3a0) + 0xc) & 0x200004) == 0)))) {
        trigger_special_effect();
        render_context = target_context;
    }
    
    // 检查是否需要触发次要效果
    if ((((*(char *)(scene_manager + 0x1dd0) != '\0') && ((render_mode >> 0x15 & 1) == 0)) &&
        ((*(longlong *)(scene_manager + 0x1b78) == 0 ||
         (*(longlong *)(*(longlong *)(scene_manager + 0x1b78) + 0x3a0) != render_context)))) &&
       ((render_context == *(longlong *)(render_context + 0x3a0) &&
        ((*(uint *)(render_context + 0xc) & 0x20000000) == 0)))) {
        trigger_secondary_effect();
        render_context = target_context;
    }
    
    // 处理渲染状态
    if ((*(byte *)(render_context + 0x432) & 1) == 0) {
        *(undefined4 *)(render_context + 0x144) = *(undefined4 *)(render_context + 0x84);
        effect_active = check_shader_status(effect_data + -2);
        effect_id = effect_data[-0x10];
        *(uint *)(target_context + 0x148) = (uint)(effect_active != '\0');
        effect_param1 = effect_data[-1];
        effect_param2 = *effect_data;
        effect_param3 = effect_data[1];
        *(undefined4 *)(target_context + 0x14c) = effect_data[-2];
        *(undefined4 *)(target_context + 0x150) = effect_param1;
        *(undefined4 *)(target_context + 0x154) = effect_param2;
        *(undefined4 *)(target_context + 0x158) = effect_param3;
    }
    else {
        effect_id = effect_data[-0x10];
        *(undefined4 *)(render_context + 0x144) = *(undefined4 *)(render_context + 8);
        *(undefined4 *)(target_context + 0x148) = *(undefined4 *)(target_context + 0x41c);
        *(undefined4 *)(target_context + 0x14c) = *(undefined4 *)(target_context + 0x420);
        *(undefined4 *)(target_context + 0x150) = *(undefined4 *)(target_context + 0x424);
        *(undefined4 *)(target_context + 0x154) = *(undefined4 *)(target_context + 0x428);
        *(undefined4 *)(target_context + 0x158) = *(undefined4 *)(target_context + 0x42c);
    }
    
    // 应用后处理效果
    if ((render_mode >> 0x1d & 1) == 0) {
        apply_depth_of_field(target_context + 600,target_context + 0x260,1);
    }
    
    // 检查效果状态变化
    if (effect_priority != effect_id) {
        *(undefined1 *)(target_context + 0xb1) = 0;
    }
    
    // 更新效果计数器
    *(short *)(target_context + 0xb8) = *(short *)(target_context + 0xb8) + 1;
    update_frame_counter(scene_manager + 0x1bd0);
    
    // 处理效果模式
    if (((*(byte *)(target_context + 0x432) & 1) != 0) &&
       ((*(byte *)(target_context + 0x432) & 2) == 0)) {
        *(undefined4 *)(target_context + 0xd8) = 1;
    }
    
    // 处理效果质量设置
    if ((render_mode >> 0x18 & 1) != 0) {
        if (((((render_mode & 0x40) == 0) && (*(int *)(target_context + 0xc4) < 1)) &&
            (*(int *)(target_context + 200) < 1)) &&
           ((*(float *)(target_context + 0x240) < *(float *)(target_context + 0x238) ||
             *(float *)(target_context + 0x240) == *(float *)(target_context + 0x238) ||
            (*(float *)(target_context + 0x244) < *(float *)(target_context + 0x23c) ||
             *(float *)(target_context + 0x244) == *(float *)(target_context + 0x23c))))) {
            *(undefined4 *)(target_context + 0xd8) = 1;
        }
        if ((camera_params != 0) &&
           ((*(char *)(camera_params + 0xb2) != '\0' || (*(char *)(camera_params + 0xb6) != '\0')))) {
            *(undefined4 *)(target_context + 0xd8) = 1;
        }
    }
    
    // 处理性能优化
    if (*(float *)(scene_manager + 0x1628) <= camera_near) {
        *(undefined4 *)(target_context + 0xd8) = 1;
    }
    
    // 确定是否需要渲染效果
    if ((*(int *)(target_context + 0xd8) < 1) && (*(int *)(target_context + 0xdc) < 1)) {
        effect_active = '\0';
    }
    else {
        effect_active = '\x01';
    }
    *(char *)(target_context + 0xb6) = effect_active;
    
    // 检查是否跳过效果渲染
    if ((((*(char *)(target_context + 0xb2) == '\0') &&
         (*(char *)(target_context + 0xaf) != '\0')) && (effect_active == '\0')) ||
       (((0 < *(int *)(target_context + 0xc4) || (0 < *(int *)(target_context + 200))) ||
        (0 < *(int *)(target_context + 0xdc))))) {
        effect_enabled = 0;
    }
    else {
        effect_enabled = 1;
    }
    *(undefined1 *)(target_context + 0xb4) = effect_enabled;
    
    // 执行效果渲染
    execute_render_pipeline(*(ulonglong *)(effect_data + 0x24) ^ (ulonglong)&target_context);
}


/**
 * 应用后处理效果
 * 处理深度场、运动模糊等后处理效果
 */
void apply_postprocessing_effects(void)
{
    char effect_enabled;
    undefined1 render_skip;
    int previous_frame;
    longlong render_context;
    longlong scene_manager;
    int current_frame;
    longlong camera_params;
    uint render_mode;
    float camera_near;
    longlong render_target;
    
    // 应用深度场效果
    apply_depth_of_field(render_target + 600,render_target + 0x260,1);
    
    // 检查帧变化
    if (current_frame != previous_frame) {
        *(undefined1 *)(render_target + 0xb1) = 0;
    }
    
    // 更新帧计数器
    *(short *)(render_target + 0xb8) = *(short *)(render_target + 0xb8) + 1;
    update_frame_counter(scene_manager + 0x1bd0);
    
    // 处理渲染模式
    if (((*(byte *)(render_target + 0x432) & 1) != 0) &&
       ((*(byte *)(render_target + 0x432) & 2) == 0)) {
        *(undefined4 *)(render_target + 0xd8) = 1;
    }
    
    // 处理渲染质量设置
    if ((render_mode >> 0x18 & 1) != 0) {
        if (((((render_mode & 0x40) == 0) && (*(int *)(render_target + 0xc4) < 1)) &&
            (*(int *)(render_target + 200) < 1)) &&
           ((*(float *)(render_target + 0x240) < *(float *)(render_target + 0x238) ||
             *(float *)(render_target + 0x240) == *(float *)(render_target + 0x238) ||
            (*(float *)(render_target + 0x244) < *(float *)(render_target + 0x23c) ||
             *(float *)(render_target + 0x244) == *(float *)(render_target + 0x23c))))) {
            *(undefined4 *)(render_target + 0xd8) = 1;
        }
        if ((camera_params != 0) &&
           ((*(char *)(camera_params + 0xb2) != '\0' || (*(char *)(camera_params + 0xb6) != '\0')))) {
            *(undefined4 *)(render_target + 0xd8) = 1;
        }
    }
    
    // 处理性能优化
    if (*(float *)(scene_manager + 0x1628) <= camera_near) {
        *(undefined4 *)(render_target + 0xd8) = 1;
    }
    
    // 确定是否需要渲染
    if ((*(int *)(render_target + 0xd8) < 1) && (*(int *)(render_target + 0xdc) < 1)) {
        effect_enabled = '\0';
    }
    else {
        effect_enabled = '\x01';
    }
    *(char *)(render_target + 0xb6) = effect_enabled;
    
    // 检查是否跳过渲染
    if (((((*(char *)(render_target + 0xb2) == '\0') &&
         (*(char *)(render_target + 0xaf) != '\0')) && (effect_enabled == '\0')) ||
        ((0 < *(int *)(render_target + 0xc4) || (0 < *(int *)(render_target + 200))))) ||
       (0 < *(int *)(render_target + 0xdc))) {
        render_skip = 0;
    }
    else {
        render_skip = 1;
    }
    *(undefined1 *)(render_target + 0xb4) = render_skip;
    
    // 执行最终渲染
    execute_render_pipeline(*(ulonglong *)(render_context + 0x90) ^ (ulonglong)&render_target);
}


/**
 * 清理渲染状态
 * 重置渲染参数和状态标志
 */
void cleanup_render_state(void)
{
    char render_enabled;
    undefined1 render_skip;
    longlong render_context;
    longlong scene_manager;
    longlong camera_params;
    uint render_mode;
    float camera_near;
    longlong render_target;
    
    // 重置渲染状态
    *(undefined1 *)(render_target + 0xb1) = 0;
    
    // 更新帧计数器
    *(short *)(render_target + 0xb8) = *(short *)(render_target + 0xb8) + 1;
    update_frame_counter(scene_manager + 0x1bd0);
    
    // 处理渲染模式
    if (((*(byte *)(render_target + 0x432) & 1) != 0) &&
       ((*(byte *)(render_target + 0x432) & 2) == 0)) {
        *(undefined4 *)(render_target + 0xd8) = 1;
    }
    
    // 处理渲染质量设置
    if ((render_mode >> 0x18 & 1) != 0) {
        if (((((render_mode & 0x40) == 0) && (*(int *)(render_target + 0xc4) < 1)) &&
            (*(int *)(render_target + 200) < 1)) &&
           ((*(float *)(render_target + 0x240) < *(float *)(render_target + 0x238) ||
             *(float *)(render_target + 0x240) == *(float *)(render_target + 0x238) ||
            (*(float *)(render_target + 0x244) < *(float *)(render_target + 0x23c) ||
             *(float *)(render_target + 0x244) == *(float *)(render_target + 0x23c))))) {
            *(undefined4 *)(render_target + 0xd8) = 1;
        }
        if ((camera_params != 0) &&
           ((*(char *)(camera_params + 0xb2) != '\0' || (*(char *)(camera_params + 0xb6) != '\0')))) {
            *(undefined4 *)(render_target + 0xd8) = 1;
        }
    }
    
    // 处理性能优化
    if (*(float *)(scene_manager + 0x1628) <= camera_near) {
        *(undefined4 *)(render_target + 0xd8) = 1;
    }
    
    // 确定是否需要渲染
    if ((*(int *)(render_target + 0xd8) < 1) && (*(int *)(render_target + 0xdc) < 1)) {
        render_enabled = '\0';
    }
    else {
        render_enabled = '\x01';
    }
    *(char *)(render_target + 0xb6) = render_enabled;
    
    // 检查是否跳过渲染
    if (((((*(char *)(render_target + 0xb2) == '\0') &&
         (*(char *)(render_target + 0xaf) != '\0')) && (render_enabled == '\0')) ||
        ((0 < *(int *)(render_target + 0xc4) || (0 < *(int *)(render_target + 200))))) ||
       (0 < *(int *)(render_target + 0xdc))) {
        render_skip = 0;
    }
    else {
        render_skip = 1;
    }
    *(undefined1 *)(render_target + 0xb4) = render_skip;
    
    // 执行最终渲染
    execute_render_pipeline(*(ulonglong *)(render_context + 0x90) ^ (ulonglong)&render_target);
}

// 全局渲染状态常量
#define GLOBAL_RENDER_STATE 0x180a064b0
#define GLOBAL_REFLECTION_STATE 0x180a064d0
#define GLOBAL_POSTPROCESS_DATA 0x1809fdf28