#include "TaleWorlds.Native.Split.h"

// 03_rendering_part018.c - 渲染系统高级标志位和材质处理模块
// 包含3个核心函数，涵盖渲染标志位处理、材质参数初始化、材质数据解析等高级渲染功能

/**
 * 渲染标志位处理函数
 * 处理渲染对象的标志位设置和链表更新
 * 
 * @param render_obj 渲染对象指针，包含标志位数据和链表信息
 * 
 * 功能说明：
 * - 遍历渲染对象的标志位数组
 * - 根据标志位状态更新相关数据结构
 * - 处理链表节点的标志位继承
 * - 更新相关计数器状态
 */
void process_rendering_flags(longlong render_obj)
{
    ulonglong array_start;
    ulonglong array_end;
    uint flag_mask;
    int flag_index;
    int match_count;
    ulonglong current_pos;
    
    flag_index = 1;
    if (1 < *(int *)(render_obj + 0x58)) {
        do {
            array_start = *(ulonglong *)(render_obj + 0x38);
            array_end = *(ulonglong *)(render_obj + 0x40);
            flag_mask = 1 << ((byte)flag_index & 0x1f);
            match_count = 0;
            current_pos = array_start;
            if (array_start < array_end) {
                do {
                    if ((*(uint *)(current_pos + 8) & flag_mask) == 0) {
                        match_count = match_count;
                    }
                    else {
                        match_count = match_count + 1;
                    }
                    current_pos = current_pos + 0x10;
                } while (current_pos < array_end);
                if (match_count == 0) goto APPLY_FLAGS;
            }
            else {
APPLY_FLAGS:
                if (array_start < array_end) {
                    do {
                        if ((1 << ((byte)flag_index - 1 & 0x1f) & *(uint *)(array_start + 8)) != 0) {
                            *(uint *)(array_start + 8) = *(uint *)(array_start + 8) | flag_mask;
                        }
                        array_start = array_start + 0x10;
                    } while (array_start < *(ulonglong *)(render_obj + 0x40));
                }
            }
            flag_index = flag_index + 1;
        } while (flag_index < *(int *)(render_obj + 0x58));
    }
    
    // 更新链表节点的标志位计数
    longlong list_node = *(longlong *)(render_obj + 0x28);
    if (list_node != 0) {
        *(short *)(list_node + 0x2b0) = *(short *)(list_node + 0x2b0) + 1;
        list_node = *(longlong *)(list_node + 0x168);
        if (list_node != 0) {
            *(short *)(list_node + 0x2b0) = *(short *)(list_node + 0x2b0) + 1;
            for (list_node = *(longlong *)(list_node + 0x168); list_node != 0; list_node = *(longlong *)(list_node + 0x168)) {
                *(short *)(list_node + 0x2b0) = *(short *)(list_node + 0x2b0) + 1;
            }
            return;
        }
    }
    return;
}

/**
 * 渲染参数初始化函数
 * 初始化渲染对象的各项参数和默认值
 * 
 * @param render_obj 渲染对象指针
 * @param param2 参数2（未使用）
 * @param param3 参数3（传递给回调函数）
 * @param param4 参数4（传递给回调函数）
 * 
 * 功能说明：
 * - 初始化渲染对象的各种状态标志
 * - 设置默认的浮点数值（1.0, 0.0等）
 * - 初始化渲染材质和环境参数
 * - 设置默认的透明度和混合模式
 * - 初始化相关的回调接口
 */
void initialize_rendering_parameters(longlong render_obj, undefined8 param2, undefined8 param3, undefined1 param4)
{
    longlong *callback_obj1;
    longlong *callback_obj2;
    
    // 初始化状态标志
    *(undefined1 *)(render_obj + 0x60) = 0;
    *(undefined8 *)(render_obj + 0x58) = 0;
    *(undefined8 *)(render_obj + 0x30) = 0;
    
    // 初始化浮点参数数组（0x330-0x390）
    *(undefined8 *)(render_obj + 0x330) = 0x3f800000;        // 1.0f
    *(undefined8 *)(render_obj + 0x338) = 0;
    *(undefined8 *)(render_obj + 0x340) = 0x3f80000000000000; // 1.0
    *(undefined8 *)(render_obj + 0x348) = 0;
    *(undefined8 *)(render_obj + 0x350) = 0;
    *(undefined8 *)(render_obj + 0x358) = 0x3f800000;        // 1.0f
    *(undefined8 *)(render_obj + 0x360) = 0;
    *(undefined8 *)(render_obj + 0x368) = 0x3f80000000000000; // 1.0
    *(undefined8 *)(render_obj + 0x370) = 0x3f800000;        // 1.0f
    *(undefined8 *)(render_obj + 0x378) = 0;
    *(undefined8 *)(render_obj + 0x380) = 0x3f80000000000000; // 1.0
    *(undefined8 *)(render_obj + 0x388) = 0;
    *(undefined4 *)(render_obj + 0x390) = 0;
    *(undefined4 *)(render_obj + 0x394) = 0;
    *(undefined4 *)(render_obj + 0x398) = 0x3f800000;       // 1.0f
    *(undefined4 *)(render_obj + 0x39c) = 0;
    *(undefined4 *)(render_obj + 0x3a0) = 0;
    *(undefined4 *)(render_obj + 0x3a4) = 0;
    *(undefined4 *)(render_obj + 0x3a8) = 0;
    *(undefined4 *)(render_obj + 0x3ac) = 0x3f800000;       // 1.0f
    
    // 设置默认的透明度和颜色值
    *(undefined1 *)(render_obj + 0x3b0) = 0xff;              // 完全不透明
    *(undefined1 *)(render_obj + 800) = 1;
    *(undefined4 *)(render_obj + 0x210) = 0x21;
    *(undefined1 *)(render_obj + 0x3c0) = 0;
    *(undefined4 *)(render_obj + 0x328) = 0xffffffff;      // 最大值
    *(undefined4 *)(render_obj + 0x3c4) = 0;
    *(undefined4 *)(render_obj + 0x324) = 0;
    *(undefined1 *)(render_obj + 0x32c) = 0;
    *(undefined4 *)(render_obj + 0x68) = 0x7f7fffff;       // 最大浮点数
    *(undefined4 *)(render_obj + 0x7c) = 0;
    
    // 处理回调对象1
    callback_obj1 = *(longlong **)(render_obj + 0x3b8);
    *(undefined8 *)(render_obj + 0x3b8) = 0;
    if (callback_obj1 != (longlong *)0x0) {
        (**(code **)(*callback_obj1 + 0x38))(callback_obj1, 0, param3, param4, 0xfffffffffffffffe);
    }
    
    *(undefined4 *)(render_obj + 0x248) = 0xffffffff;
    
    // 创建并初始化回调对象2
    callback_obj2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18, 0x30, 8, 0x1e);
    *callback_obj2 = (longlong)&UNK_180a21690;
    *callback_obj2 = (longlong)&UNK_180a21720;
    *(undefined4 *)(callback_obj2 + 1) = 0;
    *callback_obj2 = (longlong)&UNK_180a16940;
    callback_obj2[3] = 0;
    callback_obj2[4] = 0;
    *(undefined4 *)(callback_obj2 + 2) = 0;
    *(undefined4 *)(callback_obj2 + 5) = 0;
    (**(code **)(*callback_obj2 + 0x28))(callback_obj2);
    
    // 处理回调对象替换
    callback_obj1 = *(longlong **)(render_obj + 0x3c8);
    *(longlong **)(render_obj + 0x3c8) = callback_obj2;
    if (callback_obj1 != (longlong *)0x0) {
        (**(code **)(*callback_obj1 + 0x38))();
    }
    
    // 完成初始化
    *(undefined1 *)(render_obj + 0x322) = 0;
    *(undefined4 *)(render_obj + 0x3b4) = 0;
    return;
}

/**
 * 材质数据解析函数
 * 解析和处理渲染对象的材质数据
 * 
 * @param render_obj 渲染对象指针
 * @param data_buffer 数据缓冲区指针
 * @param material_data 材质数据指针
 * 
 * 功能说明：
 * - 解析材质的各种属性和参数
 * - 处理材质名称和标识符
 * - 设置材质的因子和参数
 * - 处理网格数据关联
 * - 创建材质数据结构并添加到渲染队列
 */
void parse_material_data(longlong render_obj, longlong data_buffer, longlong material_data)
{
    char *property_name;
    longlong *material_obj;
    undefined4 property_value;
    undefined4 *material_params;
    undefined8 *material_props;
    longlong *temp_ptr;
    longlong data_size;
    longlong property_offset;
    ulonglong alloc_size;
    undefined *property_ptr;
    longlong *list_item;
    undefined8 *list_ptr;
    char *string_ptr;
    char *char_ptr;
    float factor1, factor2, factor3;
    float color_r, color_g, color_b, color_a;
    float uv_u, uv_v, uv_w;
    float blend_factor;
    undefined material_stack[32];
    undefined4 temp_param1;
    undefined4 temp_param2;
    longlong temp_long;
    undefined8 temp_ullong1;
    undefined8 temp_ullong2;
    undefined8 temp_ullong3;
    undefined8 temp_ullong4;
    float stack_float1;
    float stack_float2;
    float stack_float3;
    undefined4 stack_param1;
    longlong stack_long1;
    undefined8 stack_ullong1;
    undefined8 stack_ullong2;
    undefined8 stack_ullong3;
    undefined4 stack_param2;
    undefined4 stack_param3;
    undefined4 stack_param4;
    float stack_float4;
    float stack_float5;
    float stack_float6;
    longlong *stack_ptr_array[2];
    longlong *stack_ptr;
    undefined4 stack_param5;
    undefined4 stack_param6;
    undefined4 stack_param7;
    undefined4 stack_param8;
    undefined4 stack_param9;
    undefined4 stack_param10;
    undefined4 stack_param11;
    undefined4 stack_param12;
    undefined8 stack_ullong5;
    undefined8 stack_ullong6;
    undefined8 stack_ullong7;
    undefined8 stack_ullong8;
    float stack_float7;
    float stack_float8;
    float stack_float9;
    undefined4 stack_param13;
    undefined8 stack_ullong9;
    undefined4 stack_param14;
    undefined4 stack_param15;
    undefined4 stack_param16;
    undefined4 stack_param17;
    undefined *stack_ptr1;
    undefined1 *stack_ptr2;
    undefined4 stack_param18;
    undefined1 stack_buffer[136];
    undefined *stack_ptr3;
    undefined *stack_ptr4;
    undefined4 stack_param19;
    undefined stack_buffer2[136];
    ulonglong stack_size;
    
    // 初始化栈变量
    stack_ullong9 = 0xfffffffffffffffe;
    stack_size = _DAT_180bf00a8 ^ (ulonglong)material_stack;
    list_item = (longlong *)0x0;
    stack_ptr1 = &UNK_1809fcc28;
    stack_ptr2 = stack_buffer;
    stack_param18 = 0;
    stack_buffer[0] = 0;
    
    // 处理材质名称
    string_ptr = "material";
    do {
        char_ptr = string_ptr;
        string_ptr = char_ptr + 1;
    } while (*string_ptr != '\0');
    
    material_props = *(undefined8 **)(material_data + 0x40);
    do {
        stack_long1 = material_data;
        stack_ullong2 = data_buffer;
        if (material_props == (undefined8 *)0x0) {
SKIP_MATERIAL:
            material_props = *(undefined8 **)(stack_long1 + 0x30);
            if (material_props == (undefined8 *)0x0) {
END_MATERIAL_PARSE:
                data_size = stack_long1;
                temp_param2 = 0;
                
                // 处理漫反射颜色
                property_offset = FUN_1800a02a0(stack_long1, &UNK_180a16828);
                if (property_offset != 0) {
                    string_ptr = (char *)0x180d48d24;
                    if (*(char **)(property_offset + 8) != (char *)0x0) {
                        string_ptr = *(char **)(property_offset + 8);
                    }
                    alloc_size = 0xffffffffffffffff;
                    do {
                        alloc_size = alloc_size + 1;
                    } while (string_ptr[alloc_size] != '\0');
                    if (((alloc_size < 3) || (*string_ptr != '0')) ||
                        (property_ptr = &UNK_180a3cb84, (string_ptr[1] + 0xa8U & 0xdf) != 0)) {
                        property_ptr = &UNK_180a063a0;
                    }
                    FUN_18010cbc0(string_ptr, property_ptr, &temp_param2);
                    material_params = (undefined4 *)FUN_18039ffc0(render_obj);
                    *material_params = 0;
                    material_params[2] = temp_param2;
                    material_obj = *(longlong **)(data_buffer + 0x18);
                    LOCK();
                    temp_ptr = material_obj + 1;
                    property_offset = *temp_ptr;
                    *temp_ptr = *temp_ptr + 0x28;
                    UNLOCK();
                    alloc_size = property_offset + 0xfU & 0xfffffffffffffff0;
                    temp_ptr = list_item;
                    if (alloc_size + 0x18 < 0x2000000) {
                        temp_ptr = (longlong *)(alloc_size + *material_obj);
                    }
                    temp_ptr[2] = (longlong)material_params;
                    *temp_ptr = data_buffer + 8;
                    temp_ptr[1] = *(longlong *)(data_buffer + 0x10);
                    **(undefined8 **)(data_buffer + 0x10) = temp_ptr;
                    *(longlong **)(data_buffer + 0x10) = temp_ptr;
                    *(longlong *)(data_buffer + 0x20) = *(longlong *)(data_buffer + 0x20) + 1;
                }
                
                // 处理高光颜色
                property_offset = FUN_1800a02a0(data_size, &UNK_180a16840);
                if (property_offset != 0) {
                    data_size = 0x180d48d24;
                    if (*(longlong *)(property_offset + 8) != 0) {
                        data_size = *(longlong *)(property_offset + 8);
                    }
                    (**(code **)(stack_ptr1 + 0x10))(&stack_ptr1, data_size);
                    material_params = (undefined4 *)FUN_18039ffc0(render_obj);
                    *material_params = 2;
                    material_props = (undefined8 *)FUN_1800b30d0(_DAT_180c86930, &stack_ptr, &stack_ptr1, 1);
                    *(undefined8 *)(material_params + 2) = *material_props;
                    if (stack_ptr != (longlong *)0x0) {
                        (**(code **)(*stack_ptr + 0x38))();
                    }
                    material_obj = *(longlong **)(data_buffer + 0x18);
                    LOCK();
                    temp_ptr = material_obj + 1;
                    data_size = *temp_ptr;
                    *temp_ptr = *temp_ptr + 0x28;
                    UNLOCK();
                    alloc_size = data_size + 0xfU & 0xfffffffffffffff0;
                    temp_ptr = list_item;
                    if (alloc_size + 0x18 < 0x2000000) {
                        temp_ptr = (longlong *)(data_size + *material_obj);
                    }
                    temp_ptr[2] = (longlong)material_params;
                    *temp_ptr = data_buffer + 8;
                    temp_ptr[1] = *(longlong *)(data_buffer + 0x10);
                    **(undefined8 **)(data_buffer + 0x10) = temp_ptr;
                    *(longlong **)(data_buffer + 0x10) = temp_ptr;
                    *(longlong *)(data_buffer + 0x20) = *(longlong *)(data_buffer + 0x20) + 1;
                    data_size = stack_long1;
                }
                
                // 处理环境光颜色
                stack_ullong1 = 0x3f800000;
                stack_ullong3 = 0;
                stack_ullong4 = 0x3f80000000000000;
                stack_ullong2 = 0;
                stack_float1 = 0.0;
                stack_float2 = 0.0;
                stack_float3 = 1.0;
                stack_param1 = 0;
                stack_long1 = 0;
                stack_ullong5 = 0x3f80000000000000;
                stack_param9 = 0;
                stack_param10 = 0;
                stack_param11 = 0;
                stack_param12 = 0x3f800000;
                FUN_1801c1720(&stack_ullong1, &stack_param2);
                FUN_180085020(&stack_ullong1, &stack_float4);
                property_offset = FUN_180631960(data_size, &UNK_180a16808, &stack_param9);
                if (((property_offset != 0) || 
                     (property_offset = FUN_180631960(data_size, &UNK_180a16818, &stack_param2), property_offset != 0)) ||
                    (property_offset = FUN_180631960(data_size, &UNK_180a0f108, &stack_float4), property_offset != 0)) {
                    
                    stack_long1 = CONCAT44(stack_param10, stack_param9);
                    stack_ullong5 = CONCAT44(stack_param12, stack_param11);
                    stack_ullong6 = 0x3f800000;
                    stack_ullong7 = 0;
                    stack_ullong8 = 0x3f80000000000000;
                    stack_ullong2 = 0;
                    stack_float7 = 0.0;
                    stack_float8 = 0.0;
                    stack_float9 = 1.0;
                    stack_param13 = 0;
                    stack_ullong2 = stack_long1;
                    stack_ullong3 = stack_ullong5;
                    FUN_180085c10(&stack_ullong6, stack_param17);
                    FUN_180085970(&stack_ullong6, stack_param2);
                    FUN_180085ac0(&stack_ullong6, stack_param16);
                    temp_param1 = stack_param14;
                    stack_ullong4 = stack_ullong8;
                    stack_ullong2._0_4_ = (float)stack_ullong2;
                    stack_ullong2._4_4_ = stack_ullong2._4_4_;
                    stack_float1 = stack_float7;
                    stack_float2 = stack_float8;
                    stack_float3 = stack_float9;
                    stack_param1 = stack_param13;
                    factor1 = (float)stack_ullong6 * stack_float4;
                    factor3 = stack_ullong6._4_4_ * stack_float4;
                    factor2 = (float)stack_ullong7 * stack_float4;
                    color_r = (float)stack_ullong4 * stack_float5;
                    color_g = stack_ullong4._4_4_ * stack_float5;
                    color_b = (float)stack_ullong2 * stack_float5;
                    blend_factor = stack_float7 * stack_float6;
                    uv_u = stack_float8 * stack_float6;
                    uv_v = stack_float9 * stack_float6;
                    
                    material_params = (undefined4 *)FUN_18039ffc0(render_obj);
                    *material_params = 3;
                    stack_ullong1 = CONCAT44(factor3, factor1);
                    stack_ullong3 = CONCAT44(temp_param1, factor2);
                    material_params[2] = factor1;
                    material_params[3] = factor3;
                    material_params[4] = factor2;
                    material_params[5] = temp_param1;
                    stack_ullong4 = CONCAT44(color_g, color_r);
                    stack_ullong2 = CONCAT44(stack_ullong2._4_4_, color_b);
                    material_params[6] = color_r;
                    material_params[7] = color_g;
                    material_params[8] = color_b;
                    material_params[9] = stack_ullong2._4_4_;
                    material_params[10] = blend_factor;
                    material_params[0xb] = uv_u;
                    material_params[0xc] = uv_v;
                    material_params[0xd] = stack_param1;
                    material_params[0xe] = (undefined4)stack_ullong2;
                    material_params[0xf] = stack_ullong2._4_4_;
                    material_params[0x10] = (undefined4)stack_ullong3;
                    material_params[0x11] = stack_ullong3._4_4_;
                    material_obj = *(longlong **)(data_buffer + 0x18);
                    LOCK();
                    temp_ptr = material_obj + 1;
                    property_offset = *temp_ptr;
                    *temp_ptr = *temp_ptr + 0x28;
                    UNLOCK();
                    alloc_size = property_offset + 0xfU & 0xfffffffffffffff0;
                    temp_ptr = list_item;
                    if (alloc_size + 0x18 < 0x2000000) {
                        temp_ptr = (longlong *)(alloc_size + *material_obj);
                    }
                    temp_ptr[2] = (longlong)material_params;
                    *temp_ptr = data_buffer + 8;
                    temp_ptr[1] = *(longlong *)(data_buffer + 0x10);
                    **(undefined8 **)(data_buffer + 0x10) = temp_ptr;
                    *(longlong **)(data_buffer + 0x10) = temp_ptr;
                    *(longlong *)(data_buffer + 0x20) = *(longlong *)(data_buffer + 0x20) + 1;
                    stack_float1 = blend_factor;
                    stack_float2 = uv_u;
                    stack_float3 = uv_v;
                }
                
                // 处理其他材质属性
                data_size = FUN_180631b90(data_size, &UNK_180a167f0, &stack_param14);
                if (data_size != 0) {
                    material_params = (undefined4 *)FUN_18039ffc0(render_obj);
                    *material_params = 4;
                    material_params[0x42] = stack_param14;
                    material_params[0x43] = stack_param15;
                    material_params[0x44] = stack_param16;
                    material_params[0x45] = stack_param17;
                    material_obj = *(longlong **)(data_buffer + 0x18);
                    LOCK();
                    temp_ptr = material_obj + 1;
                    data_size = *temp_ptr;
                    *temp_ptr = *temp_ptr + 0x28;
                    UNLOCK();
                    alloc_size = data_size + 0xfU & 0xfffffffffffffff0;
                    if (alloc_size + 0x18 < 0x2000000) {
                        list_item = (longlong *)(*material_obj + alloc_size);
                    }
                    list_item[2] = (longlong)material_params;
                    *list_item = data_buffer + 8;
                    list_item[1] = *(longlong *)(data_buffer + 0x10);
                    **(undefined8 **)(data_buffer + 0x10) = list_item;
                    *(longlong **)(data_buffer + 0x10) = list_item;
                    *(longlong *)(data_buffer + 0x20) = *(longlong *)(data_buffer + 0x20) + 1;
                }
                
                stack_ptr1 = &UNK_18098bcb0;
                // 函数不会返回
                FUN_1808fc050(stack_size ^ (ulonglong)material_stack);
            }
            
            // 处理材质属性名称
            stack_ptr3 = &UNK_1809fcc28;
            stack_ptr4 = stack_buffer2;
            stack_param19 = 0;
            stack_buffer2[0] = 0;
            
PROCESS_PROPERTIES:
            do {
                string_ptr = "name";
                do {
                    char_ptr = string_ptr;
                    string_ptr = char_ptr + 1;
                } while (*string_ptr != '\0');
                
                // 查找名称属性
                for (list_ptr = (undefined8 *)material_props[8]; list_ptr != (undefined8 *)0x0;
                     list_ptr = (undefined8 *)list_ptr[6]) {
                    string_ptr = (char *)*list_ptr;
                    if (string_ptr == (char *)0x0) {
                        string_ptr = (char *)0x180d48d24;
                        temp_ptr = list_item;
                    }
                    else {
                        temp_ptr = (longlong *)list_ptr[2];
                    }
                    if (temp_ptr == (longlong *)(char_ptr + -0x180a03a83)) {
                        char_ptr = (char *)((longlong)temp_ptr + (longlong)string_ptr);
                        if (char_ptr <= string_ptr) {
FIND_PROPERTY_VALUE:
                            data_size = 0x180d48d24;
                            if (list_ptr[1] != 0) {
                                data_size = list_ptr[1];
                            }
                            (**(code **)(stack_ptr3 + 0x10))(&stack_ptr3, data_size);
                            break;
                        }
                        data_size = (longlong)&DAT_180a03a84 - (longlong)string_ptr;
                        while (*string_ptr == string_ptr[data_size]) {
                            string_ptr = string_ptr + 1;
                            if (char_ptr <= string_ptr) goto FIND_PROPERTY_VALUE;
                        }
                    }
                }
                
                // 处理材质属性
                temp_param1 = 0;
                string_ptr = "material";
                do {
                    char_ptr = string_ptr;
                    string_ptr = char_ptr + 1;
                } while (*string_ptr != '\0');
                
                for (list_ptr = (undefined8 *)material_props[8]; list_ptr != (undefined8 *)0x0;
                     list_ptr = (undefined8 *)list_ptr[6]) {
                    string_ptr = (char *)*list_ptr;
                    if (string_ptr == (char *)0x0) {
                        string_ptr = (char *)0x180d48d24;
                        temp_ptr = list_item;
                    }
                    else {
                        temp_ptr = (longlong *)list_ptr[2];
                    }
                    if (temp_ptr == (longlong *)(char_ptr + -0x180a04ebf)) {
                        char_ptr = (char *)((longlong)temp_ptr + (longlong)string_ptr);
                        if (char_ptr <= string_ptr) {
MATERIAL_PROPERTY_FOUND:
                            data_size = 0x180d48d24;
                            if (list_ptr[1] != 0) {
                                data_size = list_ptr[1];
                            }
                            (**(code **)(stack_ptr1 + 0x10))(&stack_ptr1, data_size);
                            material_obj = *(longlong **)(render_obj + 0x50);
                            LOCK();
                            temp_ptr = material_obj + 1;
                            data_size = *temp_ptr;
                            *temp_ptr = *temp_ptr + 0x128;
                            UNLOCK();
                            alloc_size = data_size + 0xfU & 0xfffffffffffffff0;
                            if (alloc_size + 0x118 < 0x2000000) {
                                list_item = (longlong *)(*material_obj + alloc_size);
                            }
                            // 函数不会返回
                            memset((undefined *)((longlong)list_item + 4), 0, 0x114);
                        }
                        data_size = (longlong)&UNK_180a04ec0 - (longlong)string_ptr;
                        while (*string_ptr == string_ptr[data_size]) {
                            string_ptr = string_ptr + 1;
                            if (char_ptr <= string_ptr) goto MATERIAL_PROPERTY_FOUND;
                        }
                    }
                }
                
                // 处理因子属性
                string_ptr = "factor";
                do {
                    char_ptr = string_ptr;
                    string_ptr = char_ptr + 1;
                } while (*string_ptr != '\0');
                
                for (list_ptr = (undefined8 *)material_props[8]; list_ptr != (undefined8 *)0x0;
                     list_ptr = (undefined8 *)list_ptr[6]) {
                    string_ptr = (char *)*list_ptr;
                    if (string_ptr == (char *)0x0) {
                        string_ptr = (char *)0x180d48d24;
                        temp_ptr = list_item;
                    }
                    else {
                        temp_ptr = (longlong *)list_ptr[2];
                    }
                    if (temp_ptr == (longlong *)(char_ptr + -0x180a1674b)) {
                        char_ptr = (char *)((longlong)temp_ptr + (longlong)string_ptr);
                        if (char_ptr <= string_ptr) {
FACTOR_PROPERTY_FOUND:
                            data_size = 0x180d48d24;
                            if (list_ptr[1] != 0) {
                                data_size = list_ptr[1];
                            }
                            FUN_18010cbc0(data_size, &UNK_180a063a0, &temp_param1);
                            material_obj = *(longlong **)(render_obj + 0x50);
                            LOCK();
                            temp_ptr = material_obj + 1;
                            data_size = *temp_ptr;
                            *temp_ptr = *temp_ptr + 0x128;
                            UNLOCK();
                            alloc_size = data_size + 0xfU & 0xfffffffffffffff0;
                            if (alloc_size + 0x118 < 0x2000000) {
                                list_item = (longlong *)(*material_obj + alloc_size);
                            }
                            // 函数不会返回
                            memset((undefined *)((longlong)list_item + 4), 0, 0x114);
                        }
                        data_size = (longlong)&UNK_180a1674c - (longlong)string_ptr;
                        while (*string_ptr == string_ptr[data_size]) {
                            string_ptr = string_ptr + 1;
                            if (char_ptr <= string_ptr) goto FACTOR_PROPERTY_FOUND;
                        }
                    }
                }
                
                // 处理第二因子属性
                string_ptr = "factor2";
                do {
                    char_ptr = string_ptr;
                    string_ptr = char_ptr + 1;
                } while (*string_ptr != '\0');
                
                for (list_ptr = (undefined8 *)material_props[8]; list_ptr != (undefined8 *)0x0;
                     list_ptr = (undefined8 *)list_ptr[6]) {
                    string_ptr = (char *)*list_ptr;
                    if (string_ptr == (char *)0x0) {
                        string_ptr = (char *)0x180d48d24;
                        temp_ptr = list_item;
                    }
                    else {
                        temp_ptr = (longlong *)list_ptr[2];
                    }
                    if (temp_ptr == (longlong *)(char_ptr + -0x180a167ff)) {
                        char_ptr = (char *)((longlong)temp_ptr + (longlong)string_ptr);
                        if (char_ptr <= string_ptr) {
FACTOR2_PROPERTY_FOUND:
                            data_size = 0x180d48d24;
                            if (list_ptr[1] != 0) {
                                data_size = list_ptr[1];
                            }
                            FUN_18010cbc0(data_size, &UNK_180a063a0, &temp_param1);
                            material_obj = *(longlong **)(render_obj + 0x50);
                            LOCK();
                            temp_ptr = material_obj + 1;
                            data_size = *temp_ptr;
                            *temp_ptr = *temp_ptr + 0x128;
                            UNLOCK();
                            alloc_size = data_size + 0xfU & 0xfffffffffffffff0;
                            if (alloc_size + 0x118 < 0x2000000) {
                                list_item = (longlong *)(*material_obj + alloc_size);
                            }
                            // 函数不会返回
                            memset((undefined *)((longlong)list_item + 4), 0, 0x114);
                        }
                        data_size = (longlong)&UNK_180a16800 - (longlong)string_ptr;
                        while (*string_ptr == string_ptr[data_size]) {
                            string_ptr = string_ptr + 1;
                            if (char_ptr <= string_ptr) goto FACTOR2_PROPERTY_FOUND;
                        }
                    }
                }
                
                // 处理其他材质属性
                data_size = FUN_180631b90(material_props, &UNK_180a167e0, &stack_param5);
                if (data_size != 0) {
                    material_obj = *(longlong **)(render_obj + 0x50);
                    LOCK();
                    temp_ptr = material_obj + 1;
                    data_size = *temp_ptr;
                    *temp_ptr = *temp_ptr + 0x128;
                    UNLOCK();
                    alloc_size = data_size + 0xfU & 0xfffffffffffffff0;
                    if (alloc_size + 0x118 < 0x2000000) {
                        list_item = (longlong *)(*material_obj + alloc_size);
                    }
                    // 函数不会返回
                    memset((undefined *)((longlong)list_item + 4), 0, 0x114);
                }
                
                data_size = FUN_180631b90(material_props, &UNK_180a167f0, &stack_param5);
                if (data_size != 0) {
                    material_params = (undefined4 *)FUN_18039ffc0(render_obj);
                    *material_params = 9;
                    material_params[0x42] = stack_param5;
                    material_params[0x43] = stack_param6;
                    material_params[0x44] = stack_param7;
                    material_params[0x45] = stack_param8;
                    property_ptr = &DAT_18098bc73;
                    if (stack_ptr4 != (undefined *)0x0) {
                        property_ptr = stack_ptr4;
                    }
                    strcpy_s(material_params + 2, 0x80, property_ptr);
                    material_obj = *(longlong **)(data_buffer + 0x18);
                    LOCK();
                    temp_ptr = material_obj + 1;
                    data_size = *temp_ptr;
                    *temp_ptr = *temp_ptr + 0x28;
                    UNLOCK();
                    alloc_size = data_size + 0xfU & 0xfffffffffffffff0;
                    temp_ptr = list_item;
                    if (alloc_size + 0x18 < 0x2000000) {
                        temp_ptr = (longlong *)(alloc_size + *material_obj);
                    }
                    temp_ptr[2] = (longlong)material_params;
                    *temp_ptr = data_buffer + 8;
                    temp_ptr[1] = *(longlong *)(data_buffer + 0x10);
                    **(undefined8 **)(data_buffer + 0x10) = temp_ptr;
                    *(longlong **)(data_buffer + 0x10) = temp_ptr;
                    *(longlong *)(data_buffer + 0x20) = *(longlong *)(data_buffer + 0x20) + 1;
                }
                
                // 处理网格属性
                string_ptr = "mesh";
                do {
                    char_ptr = string_ptr;
                    string_ptr = char_ptr + 1;
                } while (*string_ptr != '\0');
                
                while (true) {
                    do {
                        material_props = (undefined8 *)material_props[0xb];
                        if (material_props == (undefined8 *)0x0) {
                            stack_ptr3 = &UNK_18098bcb0;
                            goto END_MATERIAL_PARSE;
                        }
                        string_ptr = (char *)*material_props;
                        if (string_ptr == (char *)0x0) {
                            string_ptr = (char *)0x180d48d24;
                            temp_ptr = list_item;
                        }
                        else {
                            temp_ptr = (longlong *)material_props[2];
                        }
                    } while (temp_ptr != (longlong *)(char_ptr + -0x180a0f3e7));
                    
                    char_ptr = (char *)((longlong)temp_ptr + (longlong)string_ptr);
                    if (char_ptr <= string_ptr) break;
                    data_size = (longlong)&UNK_180a0f3e8 - (longlong)string_ptr;
                    while (*string_ptr == string_ptr[data_size]) {
                        string_ptr = string_ptr + 1;
                        if (char_ptr <= string_ptr) goto PROCESS_PROPERTIES;
                    }
                }
            } while (true);
        }
        
        string_ptr = (char *)*material_props;
        if (string_ptr == (char *)0x0) {
            string_ptr = (char *)0x180d48d24;
            temp_ptr = list_item;
        }
        else {
            temp_ptr = (longlong *)material_props[2];
        }
        if (temp_ptr == (longlong *)(char_ptr + -0x180a04ebf)) {
            char_ptr = (char *)((longlong)temp_ptr + (longlong)string_ptr);
            if (char_ptr <= string_ptr) {
MATERIAL_REF_FOUND:
                data_size = 0x180d48d24;
                if (material_props[1] != 0) {
                    data_size = material_props[1];
                }
                FUN_18004a180(&stack_ptr1, data_size);
                material_params = (undefined4 *)FUN_18039ffc0(render_obj);
                *material_params = 1;
                material_props = (undefined8 *)FUN_1800b30d0(_DAT_180c86930, stack_ptr_array, &stack_ptr1, 1);
                *(undefined8 *)(material_params + 2) = *material_props;
                if (stack_ptr_array[0] != (longlong *)0x0) {
                    (**(code **)(*stack_ptr_array[0] + 0x38))();
                }
                material_obj = *(longlong **)(data_buffer + 0x18);
                LOCK();
                temp_ptr = material_obj + 1;
                data_size = *temp_ptr;
                *temp_ptr = *temp_ptr + 0x28;
                UNLOCK();
                alloc_size = data_size + 0xfU & 0xfffffffffffffff0;
                temp_ptr = list_item;
                if (alloc_size + 0x18 < 0x2000000) {
                    temp_ptr = (longlong *)(alloc_size + *material_obj);
                }
                temp_ptr[2] = (longlong)material_params;
                *temp_ptr = data_buffer + 8;
                temp_ptr[1] = *(longlong *)(data_buffer + 0x10);
                **(undefined8 **)(data_buffer + 0x10) = temp_ptr;
                *(longlong **)(data_buffer + 0x10) = temp_ptr;
                *(longlong *)(data_buffer + 0x20) = *(longlong *)(data_buffer + 0x20) + 1;
                goto SKIP_MATERIAL;
            }
            data_size = (longlong)&UNK_180a04ec0 - (longlong)string_ptr;
            while (*string_ptr == string_ptr[data_size]) {
                string_ptr = string_ptr + 1;
                if (char_ptr <= string_ptr) goto MATERIAL_REF_FOUND;
            }
        }
        material_props = (undefined8 *)material_props[6];
    } while (true);
}