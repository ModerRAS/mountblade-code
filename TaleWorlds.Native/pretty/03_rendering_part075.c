#include "TaleWorlds.Native.Split.h"

// 03_rendering_part075.c - 渲染系统高级参数处理和渲染管线控制模块
// 包含10个核心函数，涵盖渲染参数计算、渲染管线控制、矩阵变换、随机数生成、渲染对象管理、状态控制等高级渲染功能

// 常量定义
#define MAX_CLOTH_SIMULATOR_NAME_LENGTH 32
#define DEFAULT_RENDER_FLAG 0xffffffff
#define MIN_RENDER_STEP 0.05f
#define MAX_FLOAT_VALUE 0x7f7fffff

// 函数别名定义
#define rendering_system_process_render_parameters FUN_18030b270
#define rendering_system_initialize_render_object FUN_18030b420
#define rendering_system_cleanup_render_object FUN_18030b510
#define rendering_system_get_render_data_size FUN_18030b610
#define rendering_system_get_render_data_pointer FUN_18030b650
#define rendering_system_create_cloth_simulator FUN_18030b680
#define rendering_system_process_render_object_name FUN_18030b780
#define rendering_system_create_render_instance FUN_18030b970
#define rendering_system_initialize_cloth_system FUN_18030bac0
#define rendering_system_process_cloth_data FUN_18030bb40
#define rendering_system_cleanup_cloth_system FUN_18030bc60
#define rendering_system_update_render_state FUN_18030bd90

/**
 * 渲染系统处理渲染参数的核心函数
 * 处理渲染对象的参数设置、边界计算和状态更新
 * 
 * @param render_context 渲染上下文指针
 * @param render_params 渲染参数指针
 */
void rendering_system_process_render_parameters(longlong render_context, longlong *render_params)
{
    float *min_bounds;
    longlong *previous_params;
    undefined8 *data_array;
    float step_x;
    float step_y;
    float step_z;
    
    // 调用渲染参数的初始化函数
    if (render_params != (longlong *)0x0) {
        (**(code **)(*render_params + 0x28))(render_params);
    }
    
    // 更新渲染上下文中的参数引用
    previous_params = *(longlong **)(render_context + 0x48);
    *(longlong **)(render_context + 0x48) = render_params;
    
    // 清理之前的参数
    if (previous_params != (longlong *)0x0) {
        (**(code **)(*previous_params + 0x38))();
    }
    
    // 设置渲染标志
    *(undefined4 *)(render_context + 0x30) = DEFAULT_RENDER_FLAG;
    
    // 如果没有渲染参数，重置所有数据
    if (*(longlong *)(render_context + 0x48) == 0) {
        *(undefined8 *)(render_context + 0x84) = 0;  // 最小X坐标
        *(undefined8 *)(render_context + 0x8c) = 0;  // 最小Y坐标
        *(undefined8 *)(render_context + 0x94) = 0;  // 最大X坐标
        *(undefined8 *)(render_context + 0x9c) = 0;  // 最大Y坐标
        *(undefined8 *)(render_context + 0xa4) = 0;  // 最大Z坐标
        *(undefined8 *)(render_context + 0xac) = 0;  // 最小Z坐标
        *(undefined4 *)(render_context + 0xb4) = 0;  // 距离值
        return;
    }
    
    // 处理渲染参数数据
    (**(code **)(*render_params + 0x1e0))(render_params, *(undefined8 *)(render_context + 0x28));
    
    // 获取渲染数据数组
    if (*(code **)(*render_params + 0x198) == (code *)&UNK_18027d990) {
        data_array = (undefined8 *)((longlong)render_params + 0x214);
    }
    else {
        data_array = (undefined8 *)(**(code **)(*render_params + 0x198))(render_params);
    }
    
    // 设置边界框数据
    min_bounds = (float *)(render_context + 0x84);
    *(undefined8 *)min_bounds = *data_array;                    // 最小X
    *(undefined8 *)(render_context + 0x8c) = data_array[1];      // 最小Y
    *(undefined8 *)(render_context + 0x94) = data_array[2];      // 最大X
    *(undefined8 *)(render_context + 0x9c) = data_array[3];      // 最大Y
    *(undefined8 *)(render_context + 0xa4) = data_array[4];      // 最大Z
    *(undefined8 *)(render_context + 0xac) = data_array[5];      // 最小Z
    *(undefined4 *)(render_context + 0xb4) = *(undefined4 *)(data_array + 6);  // 距离
    
    // 计算步长值
    step_x = (*(float *)(render_context + 0x94) - *(float *)(render_context + 0xa4)) * 0.05;
    if (step_x <= MIN_RENDER_STEP) {
        step_x = MIN_RENDER_STEP;
    }
    
    step_y = (*(float *)(render_context + 0x98) - *(float *)(render_context + 0xa8)) * 0.05;
    if (step_y <= MIN_RENDER_STEP) {
        step_y = MIN_RENDER_STEP;
    }
    
    step_z = (*(float *)(render_context + 0x9c) - *(float *)(render_context + 0xac)) * 0.05;
    if (step_z <= MIN_RENDER_STEP) {
        step_z = MIN_RENDER_STEP;
    }
    
    // 更新边界值
    *(float *)(render_context + 0x94) = step_x + *(float *)(render_context + 0x94);
    *(float *)(render_context + 0x98) = step_y + *(float *)(render_context + 0x98);
    *(float *)(render_context + 0x9c) = step_z + *(float *)(render_context + 0x9c);
    *min_bounds = *min_bounds - step_x;
    *(float *)(render_context + 0x88) = *(float *)(render_context + 0x88) - step_y;
    *(float *)(render_context + 0x8c) = *(float *)(render_context + 0x8c) - step_z;
    
    // 检查边界条件并计算中心点
    step_x = *(float *)(render_context + 0x94);
    if (*min_bounds <= step_x) {
        step_y = (step_x + *min_bounds) * 0.5;
        *(float *)(render_context + 0xa4) = step_y;
        *(float *)(render_context + 0xa8) = (*(float *)(render_context + 0x98) + *(float *)(render_context + 0x88)) * 0.5;
        *(float *)(render_context + 0xac) = (*(float *)(render_context + 0x9c) + *(float *)(render_context + 0x8c)) * 0.5;
        *(undefined4 *)(render_context + 0xb0) = MAX_FLOAT_VALUE;
        
        // 计算距离
        step_x = step_x - step_y;
        step_z = *(float *)(render_context + 0x9c) - *(float *)(render_context + 0xac);
        step_y = *(float *)(render_context + 0x98) - *(float *)(render_context + 0xa8);
        *(float *)(render_context + 0xb4) = SQRT(step_y * step_y + step_x * step_x + step_z * step_z);
        return;
    }
    
    // 重置所有数据
    *(undefined4 *)(render_context + 0xb4) = 0;
    min_bounds[0] = 0.0;
    min_bounds[1] = 0.0;
    *(undefined8 *)(render_context + 0x8c) = 0;
    *(undefined8 *)(render_context + 0x94) = 0;
    *(undefined8 *)(render_context + 0x9c) = 0;
    *(undefined8 *)(render_context + 0xa4) = 0;
    *(undefined8 *)(render_context + 0xac) = 0;
    return;
}

/**
 * 初始化渲染对象的函数
 * 设置渲染对象的基本属性和初始状态
 * 
 * @param render_object 渲染对象指针
 * @param param2 参数2
 * @param param3 参数3
 * @return 初始化后的渲染对象指针
 */
undefined8 * rendering_system_initialize_render_object(undefined8 *render_object, undefined8 param2, undefined1 param3)
{
    // 设置渲染对象的基本属性
    *render_object = &UNK_180a21690;
    *render_object = &UNK_180a21720;
    *(undefined4 *)(render_object + 1) = 0;
    *render_object = &UNK_180a14860;
    *(undefined4 *)(render_object + 2) = 4;
    render_object[3] = 0;
    render_object[4] = 0;
    *(undefined4 *)(render_object + 1) = 0;
    render_object[5] = 0;
    *render_object = &UNK_180a1a4a0;
    render_object[7] = 0;
    render_object[9] = 0;
    render_object[10] = 0;
    render_object[0xb] = 0;
    render_object[0xc] = 0;
    *(undefined4 *)(render_object + 0xd) = 3;
    
    // 初始化边界数据
    *(undefined4 *)((longlong)render_object + 0xb4) = 0;
    *(undefined8 *)((longlong)render_object + 0x84) = 0;  // 最小X
    *(undefined8 *)((longlong)render_object + 0x8c) = 0;  // 最小Y
    *(undefined8 *)((longlong)render_object + 0x94) = 0;  // 最大X
    *(undefined8 *)((longlong)render_object + 0x9c) = 0;  // 最大Y
    *(undefined8 *)((longlong)render_object + 0xa4) = 0;  // 最大Z
    *(undefined8 *)((longlong)render_object + 0xac) = 0;  // 最小Z
    
    // 设置渲染标志和属性
    *(undefined4 *)(render_object + 6) = DEFAULT_RENDER_FLAG;
    *(undefined2 *)((longlong)render_object + 0x41) = 0;
    *(undefined1 *)((longlong)render_object + 0x43) = param3;
    *(undefined1 *)((longlong)render_object + 0x44) = 1;
    *(undefined4 *)((longlong)render_object + 0xbc) = 0;
    *(undefined1 *)(render_object + 8) = 0;
    *(undefined1 *)(render_object + 0x18) = 0;
    *(undefined4 *)(render_object + 0xe) = 0;
    *(undefined4 *)((longlong)render_object + 0x74) = 0;
    *(undefined4 *)(render_object + 0xf) = 0;
    *(undefined4 *)((longlong)render_object + 0x7c) = 0;
    *(undefined4 *)(render_object + 0x10) = 0;
    *(undefined4 *)(render_object + 0x17) = 0x3f800000;  // 1.0f
    
    // 处理渲染参数
    rendering_system_process_render_parameters(render_object);
    return render_object;
}

/**
 * 清理渲染对象的函数
 * 释放渲染对象占用的资源并重置状态
 * 
 * @param render_object 渲染对象指针
 * @param cleanup_flag 清理标志
 * @param param3 参数3
 * @param param4 参数4
 * @return 清理后的渲染对象指针
 */
undefined8 *
rendering_system_cleanup_render_object(undefined8 *render_object, ulonglong cleanup_flag, undefined8 param3, undefined8 param4)
{
    undefined8 cleanup_mask;
    
    cleanup_mask = 0xfffffffffffffffe;
    *render_object = &UNK_180a1a4a0;
    
    // 检查渲染对象状态
    if (render_object[10] != 0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    
    // 清理相关资源
    if ((longlong *)render_object[9] != (longlong *)0x0) {
        (**(code **)(*(longlong *)render_object[9] + 0x38))();
    }
    if ((longlong *)render_object[7] != (longlong *)0x0) {
        (**(code **)(*(longlong *)render_object[7] + 0x38))();
    }
    
    // 重置渲染对象
    *render_object = &UNK_180a14860;
    render_object[5] = 0;
    *render_object = &UNK_180a21720;
    *render_object = &UNK_180a21690;
    
    // 根据清理标志释放内存
    if ((cleanup_flag & 1) != 0) {
        free(render_object, 200, param3, param4, cleanup_mask);
    }
    return render_object;
}

/**
 * 获取渲染数据大小的函数
 * 从渲染对象中提取数据大小信息
 * 
 * @param render_context 渲染上下文指针
 * @return 渲染数据的大小
 */
ulonglong rendering_system_get_render_data_size(longlong render_context)
{
    undefined *data_type;
    ulonglong data_size;
    
    data_type = (undefined *)**(undefined8 **)(render_context + 0x48);
    if (data_type == &UNK_180a169b8) {
        return (ulonglong)*(uint *)(*(undefined8 **)(render_context + 0x48) + 0x42);
    }
    data_size = (**(code **)(data_type + 0x130))();
    return data_size;
}

/**
 * 获取渲染数据指针的函数
 * 从渲染对象中获取数据指针
 * 
 * @param render_context 渲染上下文指针
 * @return 渲染数据的指针
 */
undefined8 * rendering_system_get_render_data_pointer(longlong render_context)
{
    undefined *data_type;
    undefined8 *data_pointer;
    
    data_type = (undefined *)**(undefined8 **)(render_context + 0x48);
    if (data_type == &UNK_180a169b8) {
        return *(undefined8 **)(render_context + 0x48) + 0x66;
    }
    data_pointer = (undefined8 *)(**(code **)(data_type + 0x158))();
    return data_pointer;
}

/**
 * 创建布料模拟器的函数
 * 初始化并设置布料模拟器的参数
 * 
 * @param render_context 渲染上下文指针
 * @param simulator_data 模拟器数据指针
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 */
void rendering_system_create_cloth_simulator(longlong render_context, longlong simulator_data, longlong param3, longlong param4, undefined4 param5)
{
    undefined8 *simulator_object;
    char *name_ptr;
    undefined8 texture_data;
    char *name_end;
    
    // 创建模拟器对象
    simulator_object = (undefined8 *)FUN_1804c1300(simulator_data + 0x60, 0x60);
    texture_data = 0;
    
    // 初始化模拟器对象
    *simulator_object = 0;
    simulator_object[1] = 0;
    simulator_object[4] = 0;
    *(undefined4 *)(simulator_object + 5) = 1;
    simulator_object[6] = 0;
    simulator_object[8] = 0;
    
    // 设置模拟器名称
    name_ptr = "cloth_simulator";
    do {
        name_end = name_ptr;
        name_ptr = name_end + 1;
    } while (*name_ptr != '\0');
    
    *simulator_object = &DAT_180a09de8;
    simulator_object[2] = name_end + -0x180a09de7;
    
    // 获取纹理数据
    if (param4 != 0) {
        texture_data = *(undefined8 *)(param4 + 0x48);
    }
    
    // 处理渲染管线
    (**(code **)(**(longlong **)(render_context + 0x48) + 0x70))
            (*(longlong **)(render_context + 0x48), simulator_data, simulator_object, texture_data, param5);
    
    // 链接模拟器对象
    if (*(longlong *)(param3 + 0x30) == 0) {
        simulator_object[10] = 0;
        *(undefined8 **)(param3 + 0x30) = simulator_object;
    }
    else {
        simulator_object[10] = *(undefined8 *)(param3 + 0x38);
        *(undefined8 **)(*(longlong *)(param3 + 0x38) + 0x58) = simulator_object;
    }
    
    *(undefined8 **)(param3 + 0x38) = simulator_object;
    simulator_object[4] = param3;
    simulator_object[0xb] = 0;
    return;
}

/**
 * 处理渲染对象名称的函数
 * 根据名称查找和处理渲染对象
 * 
 * @param render_context 渲染上下文指针
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void rendering_system_process_render_object_name(longlong render_context, undefined8 param2, undefined8 param3, undefined8 param4)
{
    longlong name_handle;
    undefined8 name_data;
    longlong *render_params;
    char *target_name;
    longlong name_length;
    undefined8 *name_array;
    char *current_name;
    undefined *name_stack;
    longlong stack_data;
    int match_count;
    undefined8 stack_value;
    char *name_compare;
    
    // 查找名称
    name_handle = FUN_18005d4b0(param2, &DAT_180a09d80, 0, param4, 0xfffffffffffffffe);
    if (name_handle != 0) {
        name_stack = &UNK_180a3c3e0;
        stack_value = 0;
        stack_data = 0;
        match_count = 0;
        target_name = "name";
        
        // 获取目标名称长度
        do {
            name_compare = target_name;
            target_name = name_compare + 1;
        } while (*target_name != '\0');
        
        name_array = *(undefined8 **)(name_handle + 0x40);
        if (name_array != (undefined8 *)0x0) {
            // 遍历名称数组
            do {
                current_name = (char *)*name_array;
                if (current_name == (char *)0x0) {
                    current_name = (char *)0x180d48d24;
                    target_name = (char *)0x0;
                }
                else {
                    target_name = (char *)name_array[2];
                }
                
                // 比较名称
                if (target_name == name_compare + -0x180a03a83) {
                    target_name = target_name + (longlong)current_name;
                    if (target_name <= current_name) {
LAB_18030b860:
                        name_length = 0x180d48d24;
                        if (name_array[1] != 0) {
                            name_length = name_array[1];
                        }
                        FUN_180627c50(&name_stack, name_length);
                        break;
                    }
                    name_length = (longlong)&DAT_180a03a84 - (longlong)current_name;
                    while (*current_name == current_name[name_length]) {
                        current_name = current_name + 1;
                        if (target_name <= current_name) goto LAB_18030b860;
                    }
                }
                name_array = (undefined8 *)name_array[6];
            } while (name_array != (undefined8 *)0x0);
        }
        
        // 根据匹配结果处理
        if (match_count < 1) {
            name_data = FUN_18062b1e0(_DAT_180c8ed18, 0x3d0, 8, 0x16);
            render_params = (longlong *)FUN_180275540(name_data, *(longlong *)(render_context + 0x48) + 0x1f0, name_handle);
            if (render_params != (longlong *)0x0) {
                (**(code **)(*render_params + 0x28))(render_params);
            }
            rendering_system_process_render_parameters(render_context, render_params);
        }
        else {
            name_data = FUN_18062b1e0(_DAT_180c8ed18, 0x3d0, 8, 0x16);
            render_params = (longlong *)FUN_180275370(name_data, name_handle);
            if (render_params != (longlong *)0x0) {
                (**(code **)(*render_params + 0x28))(render_params);
            }
            rendering_system_process_render_parameters(render_context, render_params);
        }
        
        // 清理资源
        if (render_params != (longlong *)0x0) {
            (**(code **)(*render_params + 0x38))(render_params);
        }
        name_stack = &UNK_180a3c3e0;
        if (stack_data != 0) {
            // 警告：子函数不返回
            FUN_18064e900();
        }
    }
    return;
}

/**
 * 创建渲染实例的函数
 * 创建新的渲染实例并设置相关参数
 * 
 * @param render_context 渲染上下文指针
 * @param instance_ptr 实例指针
 * @return 创建的实例指针
 */
undefined8 * rendering_system_create_render_instance(longlong render_context, undefined8 *instance_ptr)
{
    undefined1 render_flag;
    undefined8 context_data;
    undefined8 instance_data;
    undefined8 param_data;
    longlong *render_params;
    longlong *instance_object;
    
    // 分配实例内存
    instance_data = FUN_18062b1e0(_DAT_180c8ed18, 200, 8, 3, 0, 0xfffffffffffffffe);
    render_flag = *(undefined1 *)(render_context + 0x43);
    context_data = *(undefined8 *)(render_context + 0x48);
    param_data = FUN_18062b1e0(_DAT_180c8ed18, 0x3d0, 8, 0x16);
    
    // 创建渲染参数
    render_params = (longlong *)FUN_180275090(param_data);
    if (render_params != (longlong *)0x0) {
        (**(code **)(*render_params + 0x28))(render_params);
    }
    
    // 关联上下文数据
    FUN_180275a60(context_data, render_params, 1);
    
    // 创建实例对象
    instance_object = (longlong *)rendering_system_initialize_render_object(instance_data, render_params, render_flag);
    if (instance_object != (longlong *)0x0) {
        (**(code **)(*instance_object + 0x28))(instance_object);
    }
    
    // 清理渲染参数
    if (render_params != (longlong *)0x0) {
        (**(code **)(*render_params + 0x38))(render_params);
    }
    
    *instance_ptr = instance_object;
    if (instance_object != (longlong *)0x0) {
        (**(code **)(*instance_object + 0x28))(instance_object);
        (**(code **)(*instance_object + 0x38))(instance_object);
    }
    return instance_ptr;
}

/**
 * 初始化布料系统的函数
 * 设置布料系统的基本参数和状态
 * 
 * @param param1 参数1
 * @param system_ptr 系统指针
 * @param param3 参数3
 * @param param4 参数4
 * @return 初始化后的系统指针
 */
undefined8 *
rendering_system_initialize_cloth_system(undefined8 param1, undefined8 *system_ptr, undefined8 param3, undefined8 param4)
{
    undefined8 *system_object;
    
    // 设置系统对象的基本属性
    *system_ptr = &UNK_18098bcb0;
    system_ptr[1] = 0;
    *(undefined4 *)(system_ptr + 2) = 0;
    *system_ptr = &UNK_180a3c3e0;
    system_ptr[3] = 0;
    system_ptr[1] = 0;
    *(undefined4 *)(system_ptr + 2) = 0;
    
    // 初始化系统
    FUN_1806277c0(system_ptr, 0xf, param3, param4, 0, 0xfffffffffffffffe);
    
    // 设置系统名称
    system_object = (undefined8 *)system_ptr[1];
    *system_object = 0x69735f68746f6c63;  // "cloth_si"
    system_object[1] = 0x726f74616c756d;  // "mulator"
    *(undefined4 *)(system_ptr + 2) = 0xf;
    
    return system_ptr;
}

/**
 * 处理布料数据的函数
 * 处理布料模拟器的数据和状态更新
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 布料数据标志
 */
void rendering_system_process_cloth_data(undefined8 param1, longlong param2, undefined8 param3, undefined1 param4)
{
    uint *data_size;
    uint data_length;
    undefined8 param_data;
    longlong *render_params;
    undefined *data_stack;
    longlong stack_data;
    undefined4 stack_value;
    undefined8 stack_param;
    
    // 初始化栈数据
    data_stack = &UNK_180a3c3e0;
    stack_param = 0;
    stack_data = 0;
    stack_value = 0;
    
    // 获取数据大小
    data_length = **(uint **)(param2 + 8);
    data_size = *(uint **)(param2 + 8) + 1;
    *(uint **)(param2 + 8) = data_size;
    
    // 处理数据
    if (data_length != 0) {
        FUN_180628f30(&data_stack, data_size, data_length, param4, 0xfffffffffffffffe);
        *(longlong *)(param2 + 8) = *(longlong *)(param2 + 8) + (ulonglong)data_length;
    }
    
    // 创建渲染参数
    param_data = FUN_18062b1e0(_DAT_180c8ed18, 0x3d0, 8, 3);
    render_params = (longlong *)FUN_180275090(param_data);
    if (render_params != (longlong *)0x0) {
        (**(code **)(*render_params + 0x28))(render_params);
    }
    
    // 处理渲染数据
    (**(code **)(*render_params + 0x68))(render_params, param2);
    rendering_system_process_render_parameters(param1, render_params);
    (**(code **)(*render_params + 0x38))(render_params);
    
    // 清理栈数据
    data_stack = &UNK_180a3c3e0;
    if (stack_data != 0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    return;
}

/**
 * 清理布料系统的函数
 * 释放布料系统占用的资源
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void rendering_system_cleanup_cloth_system(undefined8 param1, undefined8 param2, undefined8 param3, undefined8 param4)
{
    undefined4 system_id;
    undefined4 *system_data;
    undefined *data_stack;
    undefined4 *stack_ptr;
    undefined4 stack_value;
    undefined8 stack_param;
    
    // 初始化栈数据
    data_stack = &UNK_180a3c3e0;
    stack_param = 0;
    stack_ptr = (undefined4 *)0x0;
    stack_value = 0;
    
    // 创建系统数据
    system_data = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13, param4, 0, 0xfffffffffffffffe);
    *(undefined1 *)system_data = 0;
    stack_ptr = system_data;
    
    // 获取系统ID
    system_id = FUN_18064e990(system_data);
    stack_param = CONCAT44(stack_param._4_4_, system_id);
    
    // 设置系统名称
    *system_data = 0x746f6c63;      // "clot"
    system_data[1] = 0x69735f68;    // "hs_i"
    system_data[2] = 0x616c756d;    // "mulat"
    system_data[3] = 0x726f74;      // "or"
    stack_value = 0xf;
    
    // 处理系统数据
    FUN_180639ec0(param2, &data_stack);
    data_stack = &UNK_180a3c3e0;
    // 警告：子函数不返回
    FUN_18064e900(system_data);
}

/**
 * 更新渲染状态的函数
 * 检查并更新渲染系统的状态
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 */
void rendering_system_update_render_state(undefined8 param1, undefined8 param2, undefined8 param3)
{
    undefined8 stack_param;
    undefined8 *stack_ptr;
    
    // 检查状态变化
    if (*(int *)(_DAT_180c86920 + 0x624) != *(int *)(_DAT_180c86920 + 0x620)) {
        stack_ptr = &stack_param;
        stack_param = 0;
        FUN_1800f5a90(param1, param1, param3, &stack_ptr, 0xfffffffffffffffe);
    }
    return;
}