#include "TaleWorlds.Native.Split.h"

// 03_rendering_part036.c - 渲染系统高级管理和初始化模块
// 包含5个核心函数，涵盖渲染系统初始化、资源管理、场景创建、系统配置和内存清理等功能

/**
 * 初始化渲染系统管理器
 * 设置渲染管理器的基本参数、缓冲区和状态
 * 
 * @param render_manager 渲染管理器指针
 */
void initialize_rendering_manager(undefined8 *render_manager)
{
    longlong *buffer_ptr;
    undefined8 *resource_ptr;
    undefined8 *texture_ptr;
    undefined8 *shader_ptr;
    longlong buffer_size;
    undefined8 resource_handle;
    int texture_index;
    longlong *texture_list;
    longlong *shader_list;
    uint texture_count;
    undefined8 *material_ptr;
    undefined4 material_id;
    undefined4 extra_out_XMM0_Da;
    undefined1 stack_buffer[32];
    uint stack_counter;
    longlong *stack_buffer_ptr;
    longlong *stack_texture_ptr;
    longlong *stack_shader_ptr;
    longlong *stack_material_ptr;
    undefined4 stack_texture_id;
    undefined4 stack_shader_id;
    int stack_index;
    undefined4 stack_param;
    longlong *stack_resource_ptr;
    longlong *stack_buffer_ptr2;
    undefined *stack_data_ptr;
    longlong stack_data_size;
    undefined4 stack_param2;
    undefined8 stack_resource_handle;
    undefined4 stack_texture_size;
    undefined4 stack_shader_size;
    undefined2 stack_flags;
    undefined1 stack_flag_byte;
    undefined4 stack_buffer_size;
    undefined1 stack_init_flag;
    undefined8 stack_matrix_data;
    longlong stack_matrix_array[3];
    undefined4 stack_matrix_id;
    undefined8 stack_transform_data;
    undefined8 stack_projection_data;
    undefined8 *stack_manager_ptr;
    undefined *stack_render_ptr;
    undefined1 *stack_texture_ptr2;
    undefined4 stack_render_id;
    undefined4 stack_shader_count;
    undefined1 stack_buffer_array[8];
    undefined8 stack_buffer_data;
    longlong stack_buffer_array2[3];
    undefined4 stack_buffer_id;
    undefined8 stack_buffer_handle;
    undefined *stack_material_ptr2;
    undefined1 *stack_color_ptr;
    undefined4 stack_color_id;
    undefined1 stack_array[72];
    ulonglong stack_checksum;
    
    // 初始化堆栈数据
    stack_resource_handle = 0xfffffffffffffffe;
    stack_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
    stack_counter = 0;
    stack_manager_ptr = render_manager;
    
    // 调用渲染初始化函数
    FUN_180244190();
    
    // 设置渲染管理器基本参数
    *render_manager = &UNK_180a16dc0;
    buffer_ptr = render_manager + 0x1f;
    *buffer_ptr = 0;
    render_manager[0x20] = 0;
    render_manager[0x21] = 0;
    *(undefined4 *)(render_manager + 0x22) = 3;
    render_manager[0x24] = 0;
    render_manager[0x25] = 0;
    shader_list = render_manager + 0x27;
    *shader_list = 0;
    render_manager[0x28] = 0;
    render_manager[0x29] = 0;
    *(undefined4 *)(render_manager + 0x2a) = 3;
    *(undefined1 *)((longlong)render_manager + 0x11c) = 1;
    *(undefined1 *)(render_manager + 0x1e) = 0;
    *(undefined4 *)(render_manager + 0x23) = 0;
    
    // 获取渲染资源句柄
    resource_handle = _DAT_180c86930;
    stack_render_ptr = &UNK_1809fcc58;
    stack_texture_ptr2 = stack_buffer_array;
    stack_buffer_array[0] = 0;
    stack_render_id = 0x23;
    stack_material_ptr = shader_list;
    strcpy_s(stack_buffer_array, 0x40, &UNK_180a16c68);
    
    // 创建材质资源
    FUN_1800b30d0(resource_handle, &stack_texture_ptr, &stack_render_ptr, 1);
    stack_counter = 1;
    stack_render_ptr = &UNK_18098bcb0;
    material_id = FUN_18022cb40(stack_texture_ptr, &stack_shader_ptr);
    texture_count = 0;
    stack_counter = 0;
    
    // 处理材质初始化
    if (stack_texture_ptr != (longlong *)0x0) {
        material_id = (**(code **)(*stack_texture_ptr + 0x38))();
    }
    
    // 分配纹理资源
    texture_ptr = (undefined8 *)FUN_1800bf050(material_id, &stack_buffer_ptr2);
    texture_ptr = (undefined8 *)FUN_1800763c0(*texture_ptr, &stack_resource_ptr);
    resource_handle = *texture_ptr;
    *texture_ptr = 0;
    stack_buffer_ptr = (longlong *)render_manager[0x24];
    render_manager[0x24] = resource_handle;
    
    // 释放旧资源
    if (stack_buffer_ptr != (longlong *)0x0) {
        (**(code **)(*stack_buffer_ptr + 0x38))();
    }
    if (stack_resource_ptr != (longlong *)0x0) {
        (**(code **)(*stack_resource_ptr + 0x38))();
    }
    if (stack_buffer_ptr2 != (longlong *)0x0) {
        (**(code **)(*stack_buffer_ptr2 + 0x38))();
    }
    
    // 配置渲染管线
    if ((render_manager[0x24] != 0) && (stack_shader_ptr != (longlong *)0x0)) {
        FUN_180288f30(render_manager, &stack_texture_ptr);
        *(uint *)(stack_texture_ptr + 0x65) = *(uint *)(stack_texture_ptr + 0x65) | 0x20000000;
        
        if (stack_texture_ptr != (longlong *)0x0) {
            FUN_18022cd30(stack_shader_ptr, 0);
        }
        
        *(uint *)(stack_shader_ptr + 0x27) = *(uint *)(stack_shader_ptr + 0x27) | 0x20;
        FUN_180076910(render_manager[0x24], &stack_shader_ptr);
        
        // 处理纹理缓冲区
        shader_list = (longlong *)(render_manager[0x28] - *shader_list >> 5);
        stack_index = 0;
        stack_material_ptr = shader_list;
        
        if (0 < (int)shader_list) {
            do {
                texture_index = stack_index;
                material_ptr = (undefined8 *)0x0;
                FUN_180627ae0(&stack_data_ptr, (longlong)stack_index * 0x20 + render_manager[0x27]);
                FUN_1800b08e0(_DAT_180c86930, &stack_buffer_ptr, &stack_data_ptr, 1);
                *(uint *)(stack_buffer_ptr + 0x65) = *(uint *)(stack_buffer_ptr + 0x65) | 0x20000000;
                
                // 添加纹理到队列
                texture_ptr = (undefined8 *)render_manager[0x20];
                if (texture_ptr < (undefined8 *)render_manager[0x21]) {
                    render_manager[0x20] = texture_ptr + 1;
                    *texture_ptr = stack_buffer_ptr;
                    if (stack_buffer_ptr != (longlong *)0x0) {
                        (**(code **)(*stack_buffer_ptr + 0x28))(stack_buffer_ptr);
                    }
                }
                else {
                    // 重新分配纹理缓冲区
                    shader_ptr = (undefined8 *)*buffer_ptr;
                    buffer_size = (longlong)texture_ptr - (longlong)shader_ptr >> 3;
                    if (buffer_size == 0) {
                        buffer_size = 1;
                    LAB_18028834f:
                    material_ptr = (undefined8 *)
                            FUN_18062b420(_DAT_180c8ed18, buffer_size * 8, *(undefined1 *)(render_manager + 0x22));
                    texture_ptr = (undefined8 *)render_manager[0x20];
                    shader_ptr = (undefined8 *)*buffer_ptr;
                    resource_ptr = material_ptr;
                }
                else {
                    buffer_size = buffer_size * 2;
                    resource_ptr = material_ptr;
                    if (buffer_size != 0) goto LAB_18028834f;
                }
                
                // 复制纹理数据
                for (; shader_ptr != texture_ptr; shader_ptr = shader_ptr + 1) {
                    *material_ptr = *shader_ptr;
                    *shader_ptr = 0;
                    material_ptr = material_ptr + 1;
                }
                *material_ptr = stack_buffer_ptr;
                if (stack_buffer_ptr != (longlong *)0x0) {
                    (**(code **)(*stack_buffer_ptr + 0x28))(stack_buffer_ptr);
                }
                
                // 清理旧纹理数据
                shader_list = (longlong *)render_manager[0x20];
                texture_list = (longlong *)*buffer_ptr;
                if (texture_list != shader_list) {
                    do {
                        if ((longlong *)*texture_list != (longlong *)0x0) {
                            (**(code **)(*(longlong *)*texture_list + 0x38))();
                        }
                        texture_list = texture_list + 1;
                    } while (texture_list != shader_list);
                    texture_list = (longlong *)*buffer_ptr;
                }
                if (texture_list != (longlong *)0x0) {
                    FUN_18064e900(texture_list);
                }
                *buffer_ptr = (longlong)resource_ptr;
                render_manager[0x20] = material_ptr + 1;
                render_manager[0x21] = resource_ptr + buffer_size;
                shader_list = stack_material_ptr;
                texture_index = stack_index;
            }
            
            // 应用材质参数
            if (texture_index == 0) {
                if (stack_buffer_ptr != (longlong *)0x0) {
                    resource_handle = 0;
                LAB_18028843a:
                    FUN_18022cd30(*(undefined8 *)(render_manager[0x24] + 0x1b8), resource_handle);
                }
            }
            else if ((texture_index == 1) && (stack_buffer_ptr != (longlong *)0x0)) {
                resource_handle = 1;
                goto LAB_18028843a;
            }
            
            if (((int)shader_list == 1) && (stack_buffer_ptr != (longlong *)0x0)) {
                FUN_18022cd30(*(undefined8 *)(render_manager[0x24] + 0x1b8), (ulonglong)shader_list & 0xffffffff);
            }
            
            if (stack_buffer_ptr != (longlong *)0x0) {
                (**(code **)(*stack_buffer_ptr + 0x38))();
            }
            
            stack_data_ptr = &UNK_180a3c3e0;
            if (stack_data_size != 0) {
                FUN_18064e900();
            }
            stack_data_size = 0;
            stack_param2 = 0;
            stack_data_ptr = &UNK_18098bcb0;
            stack_index = texture_index + 1;
            texture_count = stack_counter;
        } while (stack_index < (int)shader_list);
    }
    
    // 设置最终渲染参数
    stack_render_ptr = (undefined *)0x0;
    stack_texture_ptr2 = (undefined1 *)0xffffffff00000000;
    stack_render_id = CONCAT13(stack_render_id._3_1_, 1);
    stack_shader_count = 0xffffffff;
    stack_buffer_array[0] = 1;
    stack_buffer_data = 0;
    stack_material_ptr = stack_buffer_array2;
    stack_buffer_array2[0] = 0;
    stack_buffer_array2[1] = 0;
    stack_buffer_array2[2] = 0;
    stack_buffer_id = 3;
    stack_buffer_handle = 0;
    FUN_180076c50(render_manager[0x24], &stack_render_ptr);
    stack_material_ptr = stack_buffer_array2;
    if (stack_buffer_array2[0] != 0) {
        FUN_18064e900();
    }
    if (stack_texture_ptr != (longlong *)0x0) {
        (**(code **)(*stack_texture_ptr + 0x38))();
    }
    
    // 第二阶段渲染初始化
    resource_handle = _DAT_180c86930;
    stack_material_ptr2 = &UNK_1809fcc58;
    stack_color_ptr = stack_array;
    stack_array[0] = 0;
    stack_color_id = 0xb;
    strcpy_s(stack_array, 0x40, &UNK_180a16c28);
    FUN_1800b30d0(resource_handle, &stack_buffer_ptr, &stack_material_ptr2, 1);
    stack_counter = texture_count & 0xffffffef | 8;
    stack_material_ptr2 = &UNK_18098bcb0;
    texture_ptr = (undefined8 *)FUN_18022cb40(stack_buffer_ptr, &stack_index);
    buffer_ptr = (longlong *)*texture_ptr;
    *texture_ptr = 0;
    stack_material_ptr = stack_shader_ptr;
    material_id = extraout_XMM0_Da;
    
    if (stack_shader_ptr != (longlong *)0x0) {
        buffer_size = *stack_shader_ptr;
        stack_shader_ptr = buffer_ptr;
        material_id = (**(code **)(buffer_size + 0x38))();
        buffer_ptr = stack_shader_ptr;
    }
    stack_shader_ptr = buffer_ptr;
    
    if ((longlong *)CONCAT44(stack_param, stack_index) != (longlong *)0x0) {
        material_id = (**(code **)(*(longlong *)CONCAT44(stack_param, stack_index) + 0x38))();
    }
    stack_counter = texture_count & 0xffffffe7;
    if (stack_buffer_ptr != (longlong *)0x0) {
        material_id = (**(code **)(*stack_buffer_ptr + 0x38))();
    }
    
    texture_ptr = (undefined8 *)FUN_1800bf6c0(material_id, &stack_resource_ptr);
    texture_ptr = (undefined8 *)FUN_1800763c0(*texture_ptr, &stack_buffer_ptr2);
    resource_handle = *texture_ptr;
    *texture_ptr = 0;
    stack_material_ptr = (longlong *)render_manager[0x25];
    render_manager[0x25] = resource_handle;
    
    if (stack_material_ptr != (longlong *)0x0) {
        (**(code **)(*stack_material_ptr + 0x38))();
    }
    if (stack_buffer_ptr2 != (longlong *)0x0) {
        (**(code **)(*stack_buffer_ptr2 + 0x38))();
    }
    if (stack_resource_ptr != (longlong *)0x0) {
        (**(code **)(*stack_resource_ptr + 0x38))();
    }
    
    FUN_180076910(render_manager[0x25], &stack_shader_ptr);
    
    // 设置投影矩阵参数
    stack_resource_handle = 0;
    stack_texture_size = 0;
    stack_shader_size = 0xffffffff;
    stack_flags = 1;
    stack_flag_byte = 0;
    stack_buffer_size = 0xffffffff;
    stack_init_flag = 1;
    stack_matrix_data = 0;
    stack_material_ptr = stack_matrix_array;
    stack_matrix_array[0] = 0;
    stack_matrix_array[1] = 0;
    stack_matrix_array[2] = 0;
    stack_matrix_id = 3;
    stack_transform_data = 0;
    FUN_180076c50(render_manager[0x25], &stack_resource_handle);
    stack_material_ptr = (longlong *)0x3dcccccd00000000;
    stack_texture_id = 0;
    stack_shader_id = 0x7f7fffff;
    FUN_1800c12e0(render_manager[0x25], &stack_material_ptr);
    FUN_1800b6620();
    *(undefined4 *)((longlong)render_manager + 0x15c) = 0xc0a00000;
    stack_material_ptr = stack_matrix_array;
    if (stack_matrix_array[0] == 0) {
        if (stack_shader_ptr != (longlong *)0x0) {
            (**(code **)(*stack_shader_ptr + 0x38))();
        }
        FUN_1808fc050(stack_checksum ^ (ulonglong)stack_buffer);
    }
    FUN_18064e900();
}

/**
 * 清理渲染系统资源
 * 释放所有渲染相关的内存和资源
 * 
 * @param render_manager 渲染管理器指针
 * @param free_flag 是否释放管理器内存的标志
 * @return 渲染管理器指针
 */
undefined8 * cleanup_rendering_resources(undefined8 *render_manager, ulonglong free_flag)
{
    longlong *resource_ptr;
    
    // 重置渲染管理器
    *render_manager = &UNK_180a16dc0;
    resource_ptr = (longlong *)render_manager[0x25];
    render_manager[0x25] = 0;
    if (resource_ptr != (longlong *)0x0) {
        (**(code **)(*resource_ptr + 0x38))();
    }
    resource_ptr = (longlong *)render_manager[0x24];
    render_manager[0x24] = 0;
    if (resource_ptr != (longlong *)0x0) {
        (**(code **)(*resource_ptr + 0x38))();
    }
    
    // 清理渲染系统
    FUN_18005d580();
    if ((longlong *)render_manager[0x25] != (longlong *)0x0) {
        (**(code **)(*(longlong *)render_manager[0x25] + 0x38))();
    }
    if ((longlong *)render_manager[0x24] != (longlong *)0x0) {
        (**(code **)(*(longlong *)render_manager[0x24] + 0x38))();
    }
    
    // 执行最终清理
    FUN_180057830();
    FUN_180244780(render_manager);
    
    // 根据标志释放管理器内存
    if ((free_flag & 1) != 0) {
        free(render_manager, 0x160);
    }
    return render_manager;
}

/**
 * 创建渲染场景
 * 初始化渲染场景的参数、缓冲区和状态
 * 
 * @param scene_param 场景参数
 * @param renderer_ptr 渲染器指针
 * @return 创建的场景句柄
 */
longlong create_rendering_scene(longlong scene_param, longlong renderer_ptr)
{
    int *state_ptr;
    float aspect_ratio;
    int render_flags;
    longlong *resource_list1;
    longlong *resource_list2;
    undefined4 render_param1;
    undefined4 render_param2;
    undefined8 scene_data;
    longlong scene_id;
    undefined8 *resource_ptr1;
    undefined8 *resource_ptr2;
    undefined1 resource_flag;
    uint texture_index;
    undefined4 material_param;
    longlong resource_size;
    byte scene_active;
    float viewport_width;
    float viewport_height;
    float projection_width;
    float projection_height;
    float ortho_width;
    float ortho_height;
    undefined8 stack_scene_data;
    undefined4 stack_render_id;
    undefined4 stack_texture_id;
    undefined2 stack_flags;
    undefined1 stack_flag_byte;
    undefined4 stack_param;
    undefined1 stack_init_flag;
    undefined8 stack_matrix_data;
    longlong stack_scene_id;
    undefined8 stack_transform_data;
    undefined8 stack_projection_data;
    undefined4 stack_buffer_id;
    undefined8 stack_buffer_data;
    undefined8 stack_render_data;
    undefined4 stack_material_id;
    undefined2 stack_resource_flag;
    undefined8 stack_resource_handle;
    undefined4 stack_texture_size;
    undefined1 stack_active_flag;
    undefined4 stack_param2;
    undefined8 stack_handle_data;
    undefined2 stack_handle_flag;
    undefined8 stack_scene_handle;
    undefined4 stack_scene_id2;
    undefined1 stack_scene_flag;
    undefined8 stack_config_data;
    undefined4 stack_config_id;
    undefined4 stack_param3;
    undefined4 stack_param4;
    undefined4 stack_param5;
    undefined4 stack_param6;
    undefined4 stack_param7;
    undefined4 stack_param8;
    undefined4 stack_param9;
    undefined4 stack_param10;
    undefined4 stack_param11;
    undefined4 stack_param12;
    undefined4 stack_param13;
    undefined4 stack_param14;
    undefined4 stack_param15;
    undefined4 stack_param16;
    undefined4 stack_param17;
    undefined4 stack_param18;
    undefined4 stack_param19;
    undefined4 stack_param20;
    undefined4 stack_param21;
    undefined4 stack_param22;
    undefined4 stack_param23;
    undefined4 stack_param24;
    undefined4 stack_param25;
    undefined4 stack_param26;
    undefined4 stack_param27;
    undefined4 stack_param28;
    undefined4 stack_param29;
    undefined4 stack_param30;
    undefined4 stack_param31;
    undefined4 stack_param32;
    undefined4 stack_param33;
    undefined4 stack_param34;
    undefined4 stack_param35;
    undefined4 stack_param36;
    undefined4 stack_param37;
    undefined4 stack_param38;
    undefined4 stack_param39;
    undefined4 stack_param40;
    undefined4 stack_param41;
    undefined4 stack_param42;
    undefined4 stack_param43;
    undefined4 stack_param44;
    undefined4 stack_param45;
    undefined4 stack_param46;
    undefined4 stack_param47;
    
    // 初始化场景数据
    stack_scene_handle = 0xfffffffffffffffe;
    if (*(char *)(scene_param + 0x11c) != '\0') {
        *(undefined1 *)(scene_param + 0x11c) = 0;
        *(float *)(scene_param + 0x15c) = (float)_DAT_180c8ed30 * 1e-05;
    }
    
    if (*(char *)(scene_param + 0x130) != '\0') {
        FUN_180289f50();
    }
    
    stack_buffer_id = 0;
    scene_active = 0;
    stack_material_id = 0;
    stack_texture_id = 0xffffffff;
    stack_flags = 1;
    stack_flag_byte = 0;
    stack_param = 0xffffffff;
    stack_init_flag = 1;
    stack_matrix_data = 0;
    stack_scene_id = 0;
    stack_transform_data = 0;
    stack_projection_data = 0;
    stack_buffer_data = 3;
    stack_render_data = 0;
    stack_scene_data = 0;
    stack_render_id = 0;
    stack_texture_size = 0;
    stack_texture_id = 0xffffffff;
    stack_handle_flag = 1;
    stack_param2 = 0xffffffff;
    stack_active_flag = 1;
    stack_config_data = 0;
    stack_scene_id2 = 0;
    stack_projection_data = 0;
    stack_config_id = 3;
    stack_handle_data = 0;
    
    // 设置场景参数
    FUN_180076c50(*(undefined8 *)(scene_param + 0x120), &stack_buffer_id);
    FUN_180076c50(*(undefined8 *)(scene_param + 0x128), &stack_scene_data);
    FUN_1800b6620();
    
    scene_id = FUN_1800daa50();
    FUN_180094b30(scene_id, &DAT_180a16c50);
    
    // 获取渲染资源
    resource_list1 = *(longlong **)(_DAT_180c86938 + 0x121e0);
    if (resource_list1 != (longlong *)0x0) {
        (**(code **)(*resource_list1 + 0x28))(resource_list1);
    }
    resource_list2 = *(longlong **)(scene_id + 0x9690);
    *(longlong **)(scene_id + 0x9690) = resource_list1;
    if (resource_list2 != (longlong *)0x0) {
        (**(code **)(*resource_list2 + 0x38))();
    }
    resource_list1 = *(longlong **)(scene_id + 0x96a8);
    *(undefined8 *)(scene_id + 0x96a8) = 0;
    if (resource_list1 != (longlong *)0x0) {
        (**(code **)(*resource_list1 + 0x38))();
    }
    
    // 设置场景渲染参数
    scene_data = *(undefined8 *)(scene_param + 0x24);
    *(undefined8 *)(scene_id + 0x11c18) = *(undefined8 *)(scene_param + 0x1c);
    *(undefined8 *)(scene_id + 0x11c20) = scene_data;
    *(undefined8 *)(scene_id + 0x11c28) = *(undefined8 *)(scene_param + 0x2c);
    
    // 计算投影参数
    resource_size = _DAT_180c86950;
    aspect_ratio = *(float *)(_DAT_180c86950 + 0x17ec);
    viewport_width = aspect_ratio / *(float *)(_DAT_180c86950 + 0x17f0);
    ortho_width = 0.0;
    viewport_height = 1.0;
    ortho_height = 0.0;
    projection_height = 1.0;
    
    // 计算视口和投影矩阵
    if (viewport_width <= 1.7777778) {
        viewport_width = 0.5625 / (1.0 / viewport_width);
        projection_height = (viewport_width + 1.0) * 0.5;
        ortho_height = (1.0 - viewport_width) * 0.5;
    }
    else {
        viewport_height = (1.7777778 / viewport_width + 1.0) * 0.5;
        ortho_width = (1.0 - 1.7777778 / viewport_width) * 0.5;
    }
    
    viewport_width = *(float *)(_DAT_180c86950 + 0x17f0);
    ortho_height = ortho_height * *(float *)(_DAT_180c86950 + 0x17f0);
    *(float *)(scene_id + 0x11c18) = ortho_width * aspect_ratio;
    *(float *)(scene_id + 0x11c1c) = ortho_height;
    *(float *)(scene_id + 0x11c20) = viewport_height * aspect_ratio - ortho_width * aspect_ratio;
    *(float *)(scene_id + 0x11c24) = projection_height * viewport_width - ortho_height;
    
    // 设置场景渲染标志
    *(undefined4 *)(scene_id + 0x11cf0) = 0x1000000;
    *(undefined2 *)(scene_id + 0x11c36) = 0x100;
    *(undefined1 *)(scene_id + 0x9a31) = 0;
    texture_index = *(uint *)(scene_param + 0xcc);
    *(uint *)(scene_id + 4) = texture_index | 0x10010082;
    
    if (*(char *)(scene_param + 0xf0) == '\0') {
        texture_index = texture_index | 0x10010083;
    }
    else {
        texture_index = texture_index & 0xfffffffe | 0x10010082;
    }
    *(uint *)(scene_id + 4) = texture_index;
    *(float *)(scene_id + 0x124e4) = (float)(_DAT_180c8ed30 % 1000000000) * 1e-05;
    
    // 复制场景数据
    resource_size = 2;
    resource_ptr1 = (undefined8 *)(resource_size + 0x16a0);
    resource_ptr2 = (undefined8 *)(scene_id + 0x30);
    do {
        resource_ptr2 = resource_ptr2;
        resource_ptr1 = resource_ptr1;
        scene_data = resource_ptr1[1];
        *resource_ptr2 = *resource_ptr1;
        resource_ptr2[1] = scene_data;
        scene_data = resource_ptr1[3];
        resource_ptr2[2] = resource_ptr1[2];
        resource_ptr2[3] = scene_data;
        scene_data = resource_ptr1[5];
        resource_ptr2[4] = resource_ptr1[4];
        resource_ptr2[5] = scene_data;
        scene_data = resource_ptr1[7];
        resource_ptr2[6] = resource_ptr1[6];
        resource_ptr2[7] = scene_data;
        scene_data = resource_ptr1[9];
        resource_ptr2[8] = resource_ptr1[8];
        resource_ptr2[9] = scene_data;
        scene_data = resource_ptr1[0xb];
        resource_ptr2[10] = resource_ptr1[10];
        resource_ptr2[0xb] = scene_data;
        scene_data = resource_ptr1[0xd];
        resource_ptr2[0xc] = resource_ptr1[0xc];
        resource_ptr2[0xd] = scene_data;
        scene_data = resource_ptr1[0xf];
        resource_ptr2[0xe] = resource_ptr1[0xe];
        resource_ptr2[0xf] = scene_data;
        resource_size = resource_size + -1;
        resource_ptr1 = resource_ptr1 + 0x10;
        resource_ptr2 = resource_ptr2 + 0x10;
    } while (resource_size != 0);
    
    scene_data = resource_ptr1[0x11];
    resource_ptr2[0x10] = resource_ptr1[0x10];
    resource_ptr2[0x11] = scene_data;
    scene_data = resource_ptr1[0x13];
    resource_ptr2[0x12] = resource_ptr1[0x12];
    resource_ptr2[0x13] = scene_data;
    material_param = *(undefined4 *)((longlong)resource_ptr1 + 0xa4);
    render_param1 = *(undefined4 *)(resource_ptr1 + 0x15);
    render_param2 = *(undefined4 *)((longlong)resource_ptr1 + 0xac);
    *(undefined4 *)(resource_ptr2 + 0x14) = *(undefined4 *)(resource_ptr1 + 0x14);
    *(undefined4 *)((longlong)resource_ptr2 + 0xa4) = material_param;
    *(undefined4 *)(resource_ptr2 + 0x15) = render_param1;
    *(undefined4 *)((longlong)resource_ptr2 + 0xac) = render_param2;
    material_param = *(undefined4 *)((longlong)resource_ptr1 + 0xb4);
    render_param1 = *(undefined4 *)(resource_ptr1 + 0x17);
    render_param2 = *(undefined4 *)((longlong)resource_ptr1 + 0xbc);
    *(undefined4 *)(resource_ptr2 + 0x16) = *(undefined4 *)(resource_ptr1 + 0x16);
    *(undefined4 *)((longlong)resource_ptr2 + 0xb4) = material_param;
    *(undefined4 *)(resource_ptr2 + 0x17) = render_param1;
    *(undefined4 *)((longlong)resource_ptr2 + 0xbc) = render_param2;
    
    // 初始化场景
    FUN_18024b8d0(scene_id);
    if (*(char *)(scene_param + 0xdc) != '\0') {
        *(uint *)(scene_id + 4) = *(uint *)(scene_id + 4) | 0x40000;
    }
    *(undefined4 *)(scene_id + 0x9a2c) = 10000;
    
    // 设置渲染参数矩阵
    stack_param26 = 0x3f800000;
    stack_param25 = 0;
    stack_param24 = 0;
    stack_param23 = 0;
    stack_param22 = 0;
    stack_param21 = 0;
    stack_param20 = 0x3f800000;
    stack_param19 = 0;
    stack_param18 = 0;
    stack_param17 = 0;
    stack_param16 = 0;
    stack_param15 = 0x3f800000;
    stack_param14 = 0;
    stack_param13 = 0;
    stack_param12 = 0;
    stack_param11 = 0x3f80000000000000;
    stack_param10 = 0x3d377777;
    stack_param9 = 0;
    stack_param8 = 0;
    stack_param7 = 0;
    stack_param6 = 0;
    stack_param5 = 0;
    stack_param4 = 0x3da314dc;
    stack_param3 = 0;
    stack_param2 = 0;
    stack_param1 = 0;
    stack_param33 = 0;
    stack_param32 = 0x3f800000;
    stack_param31 = 0;
    stack_param30 = 0x3f5c28f6;
    stack_param29 = 0x3e000000;
    stack_param28 = 0;
    stack_param27 = 0x7f7fffff;
    
    *(undefined1 *)(scene_id + 0x1c60) = 1;
    stack_param38 = stack_param10;
    stack_param37 = stack_param9;
    stack_param36 = stack_param8;
    stack_param35 = stack_param7;
    stack_param34 = stack_param6;
    stack_param39 = stack_param5;
    stack_param40 = stack_param4;
    stack_param41 = stack_param3;
    stack_param42 = stack_param2;
    stack_param43 = stack_param1;
    stack_param44 = stack_param33;
    stack_param45 = stack_param32;
    resource_flag = func_0x0001800e2bf0(_DAT_180c86890, scene_id);
    *(undefined1 *)(scene_id + 0x1c61) = resource_flag;
    
    if (*(int *)(scene_id + 8) != -1) {
        scene_active = (byte)*(undefined4 *)(scene_id + 0x18);
    }
    *(byte *)(scene_id + 0x1c62) = scene_active & 1;
    material_param = func_0x00018024c420(scene_id);
    *(undefined4 *)(scene_id + 0x1c64) = material_param;
    
    // 设置场景渲染数据
    stack_projection_data = 0;
    stack_buffer_id = 0xffffffff;
    stack_handle_flag = 0xff00;
    stack_resource_handle = 0;
    stack_scene_handle = 0xffffffffffffffff;
    stack_texture_size = 0xffffffff;
    stack_active_flag = 0xff;
    stack_param2 = 0xffffffff;
    stack_config_data = 0;
    stack_handle_flag = 0x400;
    stack_scene_data = 0;
    stack_buffer_id = 0;
    stack_scene_id2 = 0;
    stack_active_flag = 0;
    stack_config_data = 0;
    
    // 初始化场景渲染器
    if (*(char *)(scene_param + 0xf0) == '\0') {
        FUN_180077750(*(undefined8 *)(scene_param + 0x120), scene_id, &stack_param26, 0, &stack_projection_data);
    }
    FUN_180077750(*(undefined8 *)(scene_param + 0x128), scene_id, &stack_param10, 0, &stack_projection_data);
    
    // 锁定并更新场景计数器
    LOCK();
    state_ptr = (int *)(renderer_ptr + 0x11a48);
    render_flags = *state_ptr;
    *state_ptr = *state_ptr + 1;
    UNLOCK();
    *(longlong *)(renderer_ptr + 0x9a48 + (longlong)render_flags * 8) = scene_id;
    
    // 复制场景参数
    material_param = *(undefined4 *)(renderer_ptr + 0x9a38);
    render_param1 = *(undefined4 *)(renderer_ptr + 0x9a3c);
    render_param2 = *(undefined4 *)(renderer_ptr + 0x9a40);
    *(undefined4 *)(scene_id + 0x9a34) = *(undefined4 *)(renderer_ptr + 0x9a34);
    *(undefined4 *)(scene_id + 0x9a38) = material_param;
    *(undefined4 *)(scene_id + 0x9a3c) = render_param1;
    *(undefined4 *)(scene_id + 0x9a40) = render_param2;
    
    if (stack_scene_id2 == 0) {
        if (stack_scene_id == 0) {
            return scene_id;
        }
        FUN_18064e900();
    }
    FUN_18064e900();
}

/**
 * 初始化渲染管线
 * 设置渲染管线的基本参数和状态
 * 
 * @param pipeline_param 管线参数
 * @param pipeline_data 管线数据指针
 * @param init_param1 初始化参数1
 * @param init_param2 初始化参数2
 * @return 管线数据指针
 */
undefined8 *
initialize_rendering_pipeline(undefined8 pipeline_param, undefined8 *pipeline_data, undefined8 init_param1, undefined8 init_param2)
{
    undefined8 *pipeline_ptr;
    
    // 初始化管线数据
    *pipeline_data = &UNK_18098bcb0;
    pipeline_data[1] = 0;
    *(undefined4 *)(pipeline_data + 2) = 0;
    *pipeline_data = &UNK_180a3c3e0;
    pipeline_data[3] = 0;
    pipeline_data[1] = 0;
    *(undefined4 *)(pipeline_data + 2) = 0;
    
    // 设置管线参数
    FUN_1806277c0(pipeline_data, 0x16, init_param1, init_param2, 0, 0xfffffffffffffffe);
    pipeline_ptr = (undefined8 *)pipeline_data[1];
    
    // 设置管线标识
    *pipeline_ptr = 0x6964616f4c6c6772;  // "GlobalLogic"
    pipeline_ptr[1] = 0x65657263735f676e;  // "ng_services"
    *(undefined4 *)(pipeline_ptr + 2) = 0x69765f6e;  // "n_vi"
    *(undefined2 *)((longlong)pipeline_ptr + 0x14) = 0x7765;  // "ew"
    *(undefined1 *)((longlong)pipeline_ptr + 0x16) = 0;
    *(undefined4 *)(pipeline_data + 2) = 0x16;
    
    return pipeline_data;
}

/**
 * 处理渲染系统事件
 * 处理渲染系统的各种事件和状态更新
 * 
 * @param event_data 事件数据指针
 * @return 处理结果
 */
ulonglong process_rendering_events(longlong event_data)
{
    int *event_counter;
    byte event_flag;
    longlong event_offset;
    longlong event_base;
    ulonglong event_result;
    longlong resource_offset;
    longlong resource_size;
    
    // 处理主渲染事件
    FUN_180077040(*(undefined8 *)(event_data + 0x120));
    event_base = *(longlong *)(event_data + 0x128);
    
    if (*(longlong *)(event_base + 0x1b8) != 0) {
        resource_offset = 0xb8;
        resource_size = _DAT_180c86870;
        do {
            event_offset = *(longlong *)(resource_offset + *(longlong *)(event_base + 0x1b8));
            if ((((event_offset != 0) && (*(longlong *)(*(longlong *)(event_base + 0x1b8) + 0x328 + resource_offset) == 0)) &&
                ((*(uint *)(event_offset + 0x328) & 0x20000000) == 0)) && (*(longlong *)(event_offset + 0x370) == 0)) {
                if (*(longlong *)(event_offset + 0x1d8) == 0) {
                    FUN_18023b050(event_offset, 0);
                    resource_size = _DAT_180c86870;
                    event_counter = (int *)(*(longlong *)(resource_offset + *(longlong *)(event_base + 0x1b8)) + 0x3a8);
                    *event_counter = *event_counter + 1;
                }
                else if (resource_size != 0) {
                    *(longlong *)(event_offset + 0x340) = (longlong)*(int *)(resource_size + 0x224);
                }
            }
            resource_offset = resource_offset + 8;
        } while (resource_offset < 0x138);
    }
    
    // 处理事件标志
    event_flag = *(byte *)(event_base + 0xf9);
    if (event_flag != 0) {
        if (*(longlong *)(event_base + 0x1d8) != 0) {
            FUN_18064e900();
        }
        *(undefined8 *)(event_base + 0x1d8) = 0;
        LOCK();
        event_flag = *(byte *)(event_base + 0xf9);
        *(byte *)(event_base + 0xf9) = 0;
        UNLOCK();
    }
    event_result = (ulonglong)event_flag;
    
    // 处理最终事件
    if (*(longlong *)(event_base + 0x1e8) != 0) {
        FUN_180080060();
        event_result = *(ulonglong *)(event_base + 0x1f0);
        *(undefined8 *)(event_base + 0x1e8) = 0;
        if (event_result != 0) {
            *(byte *)(event_result + 0xfe) = *(byte *)(event_result + 0xfe) & 0xfb;
        }
    }
    return event_result;
}