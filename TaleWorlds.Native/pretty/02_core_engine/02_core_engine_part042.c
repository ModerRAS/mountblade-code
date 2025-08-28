#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part042.c - 核心引擎数据结构和容器管理 (14 个函数)

/**
 * 验证并清理指针数组
 * @param array_info 数组信息结构体指针，包含开始和结束指针
 * 功能：遍历数组检查非空指针，如果发现非空指针则触发错误处理
 */
void validate_and_cleanup_pointer_array(longlong *array_info)
{
    longlong *current_ptr;
    
    // 遍历指针数组，检查每个元素是否为空
    for (current_ptr = (longlong *)*array_info; current_ptr != (longlong *)array_info[1]; current_ptr = current_ptr + 4) {
        if (*current_ptr != 0) {
            // 发现非空指针，触发错误处理（该函数不返回）
            trigger_critical_error();
        }
    }
    
    // 检查数组起始指针是否为空
    if (*array_info == 0) {
        return;
    }
    
    // 数组起始指针非空，触发错误处理
    trigger_critical_error();
}

/**
 * 创建并初始化数据结构实例
 * @param target_ptr 目标指针数组
 * @param source_data 源数据指针
 * @return 返回目标指针数组
 * 功能：从源数据复制信息并创建新的数据结构实例
 */
undefined8 *create_data_structure_instance(undefined8 *target_ptr, undefined8 *source_data)
{
    undefined1 byte_val;
    undefined8 data1;
    undefined8 data2;
    undefined8 data3;
    undefined8 *new_instance;
    
    // 从源数据提取信息
    data1 = *source_data;
    byte_val = *(undefined1 *)(source_data + 1);
    data2 = source_data[2];
    source_data[2] = 0;
    data3 = source_data[3];
    source_data[3] = 0;
    
    // 设置目标指针的函数指针
    target_ptr[2] = data_structure_operation_func1;
    target_ptr[3] = data_structure_operation_func2;
    
    // 分配新实例内存
    new_instance = (undefined8 *)allocate_managed_memory(
        global_memory_allocator, 
        0x20, 
        8, 
        default_allocation_flags, 
        0xfffffffffffffffe
    );
    
    // 初始化新实例
    *new_instance = data1;
    *(undefined1 *)(new_instance + 1) = byte_val;
    new_instance[2] = data2;
    new_instance[3] = data3;
    *target_ptr = new_instance;
    
    // 调用清理函数（如果存在）
    if ((longlong *)source_data[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)source_data[3] + 0x38))();
    }
    if ((longlong *)source_data[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)source_data[2] + 0x38))();
    }
    
    return target_ptr;
}

/**
 * 创建整型数组容器（4字节元素）
 * @param container_id 容器标识符
 * @param container_ptr 容器指针指针
 * @param element_count 元素数量
 * 功能：创建包含4字节整型元素的数组容器
 */
void create_int32_array_container(undefined8 container_id, longlong *container_ptr, int element_count)
{
    undefined8 global_val;
    undefined8 array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    undefined8 stack_guard;
    longlong *temp_ptr;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    global_val = global_container_manager;
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    element_count = element_count * 4;  // 计算总字节数
    
    debug_info1 = &debug_symbol_table1;
    debug_info2 = local_buffer;
    local_buffer[0] = 0;
    alloc_size = 0x1c;
    temp_ptr = container_ptr;
    
    // 初始化调试信息
    strcpy_s(local_buffer, 0x40, &debug_string_table);
    enable_debug_tracing();
    debug_info1 = &debug_symbol_table2;
    
    // 分配数组内存
    array_data = allocate_managed_memory(
        global_memory_allocator, 
        element_count, 
        0x10, 
        3
    );
    
    // 调用初始化函数
    initialize_int32_container(global_val, container_ptr);
    
    // 设置容器属性
    *(undefined8 *)(*container_ptr + 0x10) = array_data;
    *(int *)(*container_ptr + 0x18) = element_count;
    *(int *)(*container_ptr + 0x1c) = element_count;
    *(undefined1 *)(*container_ptr + 0x20) = 0;
    
    stack_flag = 1;
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 创建整型数组容器（2字节元素）
 * @param container_id 容器标识符
 * @param container_ptr 容器指针指针
 * @param element_count 元素数量
 * 功能：创建包含2字节整型元素的数组容器
 */
void create_int16_array_container(undefined8 container_id, longlong *container_ptr, int element_count)
{
    undefined8 global_val;
    undefined8 array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    undefined8 stack_guard;
    longlong *temp_ptr;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    global_val = global_container_manager;
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    element_count = element_count * 2;  // 计算总字节数
    
    debug_info1 = &debug_symbol_table1;
    debug_info2 = local_buffer;
    local_buffer[0] = 0;
    alloc_size = 0x1c;
    temp_ptr = container_ptr;
    
    // 初始化调试信息
    strcpy_s(local_buffer, 0x40, &debug_string_table);
    enable_debug_tracing();
    debug_info1 = &debug_symbol_table2;
    
    // 分配数组内存
    array_data = allocate_managed_memory(
        global_memory_allocator, 
        element_count, 
        0x10, 
        3
    );
    
    // 调用初始化函数
    initialize_int16_container(global_val, container_ptr);
    
    // 设置容器属性
    *(undefined8 *)(*container_ptr + 0x10) = array_data;
    *(int *)(*container_ptr + 0x18) = element_count;
    *(int *)(*container_ptr + 0x1c) = element_count;
    *(undefined1 *)(*container_ptr + 0x20) = 0;
    
    stack_flag = 1;
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 创建整型数组容器（4字节元素，简化版）
 * @param container_id 容器标识符
 * @param container_ptr 容器指针指针
 * @param element_count 元素数量
 * 功能：创建包含4字节整型元素的数组容器（简化实现）
 */
void create_int32_array_container_simple(undefined8 container_id, longlong *container_ptr, undefined4 element_count)
{
    undefined8 array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    undefined8 stack_guard;
    longlong *temp_ptr;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    
    debug_info1 = &debug_symbol_table1;
    debug_info2 = local_buffer;
    local_buffer[0] = 0;
    alloc_size = 0x1c;
    temp_ptr = container_ptr;
    
    // 初始化调试信息
    strcpy_s(local_buffer, 0x40, &debug_string_table);
    enable_debug_tracing();
    debug_info1 = &debug_symbol_table2;
    
    // 分配数组内存
    array_data = allocate_managed_memory(
        global_memory_allocator, 
        element_count, 
        0x10, 
        3
    );
    
    // 调用初始化函数
    initialize_container_simple(container_id, container_ptr);
    
    stack_flag = 1;
    // 设置容器属性
    *(undefined8 *)(*container_ptr + 0x10) = array_data;
    *(undefined4 *)(*container_ptr + 0x18) = element_count;
    *(undefined4 *)(*container_ptr + 0x1c) = element_count;
    *(undefined1 *)(*container_ptr + 0x20) = 0;
    
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 创建整型数组容器（4字节元素，扩展版）
 * @param container_id 容器标识符
 * @param container_ptr 容器指针指针
 * @param element_count 元素数量
 * 功能：创建包含4字节整型元素的数组容器（扩展实现）
 */
void create_int32_array_container_extended(undefined8 container_id, longlong *container_ptr, undefined4 element_count)
{
    undefined8 global_val;
    undefined8 array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    undefined8 stack_guard;
    longlong *temp_ptr;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    global_val = global_container_manager;
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    
    debug_info1 = &debug_symbol_table1;
    debug_info2 = local_buffer;
    local_buffer[0] = 0;
    alloc_size = 0x1c;
    temp_ptr = container_ptr;
    
    // 初始化调试信息
    strcpy_s(local_buffer, 0x40, &debug_string_table);
    enable_debug_tracing();
    debug_info1 = &debug_symbol_table2;
    
    // 分配数组内存
    array_data = allocate_managed_memory(
        global_memory_allocator, 
        element_count, 
        0x10, 
        0x20
    );
    
    // 调用初始化函数
    initialize_container_simple(global_val, container_ptr);
    
    // 设置容器属性
    *(undefined8 *)(*container_ptr + 0x10) = array_data;
    *(undefined4 *)(*container_ptr + 0x18) = element_count;
    *(undefined4 *)(*container_ptr + 0x1c) = element_count;
    *(undefined1 *)(*container_ptr + 0x20) = 0;
    
    stack_flag = 1;
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 处理4字节整型数组数据
 * @param data_source 数据源指针
 * @param container_ptr 容器指针指针
 * 功能：从数据源提取4字节整型数据并存储到容器中
 */
void process_int32_array_data(longlong data_source, longlong *container_ptr)
{
    int data_count;
    undefined8 global_val;
    longlong *new_container;
    longlong *old_container;
    longlong array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    longlong *temp_ptr1;
    longlong *temp_ptr2;
    undefined8 stack_guard;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    
    // 获取数据计数
    data_count = **(int **)(data_source + 8);
    *(int **)(data_source + 8) = *(int **)(data_source + 8) + 1;
    global_val = global_container_manager;
    
    if (data_count != 0) {
        data_count = data_count * 4;  // 计算总字节数
        
        debug_info1 = &debug_symbol_table1;
        debug_info2 = local_buffer;
        local_buffer[0] = 0;
        alloc_size = 0x1c;
        strcpy_s(local_buffer, 0x40, &debug_string_table);
        enable_debug_tracing();
        debug_info1 = &debug_symbol_table2;
        
        // 分配数组内存
        array_data = allocate_managed_memory(
            global_memory_allocator, 
            data_count, 
            0x10, 
            0x1e
        );
        
        // 调用处理函数
        process_int32_data(global_val, &temp_ptr1);
        new_container = temp_ptr1;
        temp_ptr1[2] = array_data;
        *(int *)(temp_ptr1 + 3) = data_count;
        *(int *)((longlong)temp_ptr1 + 0x1c) = data_count;
        *(undefined1 *)(temp_ptr1 + 4) = 0;
        
        stack_flag = 1;
        temp_ptr1 = (longlong *)0x0;
        temp_ptr2 = (longlong *)*container_ptr;
        *container_ptr = (longlong)new_container;
        
        // 清理旧容器
        if (temp_ptr2 != (longlong *)0x0) {
            (**(code **)(*temp_ptr2 + 0x38))();
        }
        
        stack_flag = 0;
        if (temp_ptr1 != (longlong *)0x0) {
            (**(code **)(*temp_ptr1 + 0x38))();
        }
        
        // 复制数据（该函数不返回）
        memcpy(
            *(undefined8 *)(*container_ptr + 0x10), 
            *(undefined8 *)(data_source + 8), 
            (longlong)*(int *)(*container_ptr + 0x1c)
        );
    }
    
    // 清理容器
    temp_ptr2 = (longlong *)*container_ptr;
    *container_ptr = 0;
    if (temp_ptr2 != (longlong *)0x0) {
        (**(code **)(*temp_ptr2 + 0x38))();
    }
    
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 处理4字节整型数组数据（变体1）
 * @param data_source 数据源指针
 * @param container_ptr 容器指针指针
 * 功能：从数据源提取4字节整型数据并存储到容器中（变体实现）
 */
void process_int32_array_data_variant1(longlong data_source, longlong *container_ptr)
{
    int data_count;
    undefined8 global_val;
    longlong *new_container;
    longlong *old_container;
    longlong array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    longlong *temp_ptr1;
    longlong *temp_ptr2;
    undefined8 stack_guard;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    
    // 获取数据计数
    data_count = **(int **)(data_source + 8);
    *(int **)(data_source + 8) = *(int **)(data_source + 8) + 1;
    global_val = global_container_manager;
    
    if (data_count != 0) {
        data_count = data_count * 4;  // 计算总字节数
        
        debug_info1 = &debug_symbol_table1;
        debug_info2 = local_buffer;
        local_buffer[0] = 0;
        alloc_size = 0x1c;
        strcpy_s(local_buffer, 0x40, &debug_string_table);
        enable_debug_tracing();
        debug_info1 = &debug_symbol_table2;
        
        // 分配数组内存
        array_data = allocate_managed_memory(
            global_memory_allocator, 
            data_count, 
            0x10, 
            0x1e
        );
        
        // 调用处理函数
        process_int32_data_variant1(global_val, &temp_ptr1);
        new_container = temp_ptr1;
        temp_ptr1[2] = array_data;
        *(int *)(temp_ptr1 + 3) = data_count;
        *(int *)((longlong)temp_ptr1 + 0x1c) = data_count;
        *(undefined1 *)(temp_ptr1 + 4) = 0;
        
        stack_flag = 1;
        temp_ptr1 = (longlong *)0x0;
        temp_ptr2 = (longlong *)*container_ptr;
        *container_ptr = (longlong)new_container;
        
        // 清理旧容器
        if (temp_ptr2 != (longlong *)0x0) {
            (**(code **)(*temp_ptr2 + 0x38))();
        }
        
        stack_flag = 0;
        if (temp_ptr1 != (longlong *)0x0) {
            (**(code **)(*temp_ptr1 + 0x38))();
        }
        
        // 复制数据（该函数不返回）
        memcpy(
            *(undefined8 *)(*container_ptr + 0x10), 
            *(undefined8 *)(data_source + 8), 
            (longlong)*(int *)(*container_ptr + 0x1c)
        );
    }
    
    // 清理容器
    temp_ptr2 = (longlong *)*container_ptr;
    *container_ptr = 0;
    if (temp_ptr2 != (longlong *)0x0) {
        (**(code **)(*temp_ptr2 + 0x38))();
    }
    
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 处理结构体数组数据（24字节元素）
 * @param data_source 数据源指针
 * @param container_ptr 容器指针指针
 * 功能：从数据源提取24字节结构体数据并存储到容器中
 */
void process_struct_array_data(longlong data_source, longlong *container_ptr)
{
    undefined8 global_val;
    longlong *new_container;
    longlong *old_container;
    longlong array_data;
    int data_count;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    longlong *temp_ptr1;
    longlong *temp_ptr2;
    undefined8 stack_guard;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    
    // 获取数据计数
    data_count = **(int **)(data_source + 8);
    *(int **)(data_source + 8) = *(int **)(data_source + 8) + 1;
    global_val = global_container_manager;
    
    if (data_count != 0) {
        data_count = data_count * 0x18;  // 每个结构体24字节
        
        debug_info1 = &debug_symbol_table1;
        debug_info2 = local_buffer;
        local_buffer[0] = 0;
        alloc_size = 0x1c;
        strcpy_s(local_buffer, 0x40, &debug_string_table);
        enable_debug_tracing();
        debug_info1 = &debug_symbol_table2;
        
        // 分配数组内存
        array_data = allocate_managed_memory(
            global_memory_allocator, 
            data_count, 
            0x10, 
            0x1e
        );
        
        // 调用处理函数
        process_struct_data(global_val, &temp_ptr1);
        new_container = temp_ptr1;
        temp_ptr1[2] = array_data;
        *(int *)(temp_ptr1 + 3) = data_count;
        *(int *)((longlong)temp_ptr1 + 0x1c) = data_count;
        *(undefined1 *)(temp_ptr1 + 4) = 0;
        
        stack_flag = 1;
        temp_ptr1 = (longlong *)0x0;
        temp_ptr2 = (longlong *)*container_ptr;
        *container_ptr = (longlong)new_container;
        
        // 清理旧容器
        if (temp_ptr2 != (longlong *)0x0) {
            (**(code **)(*temp_ptr2 + 0x38))();
        }
        
        stack_flag = 0;
        if (temp_ptr1 != (longlong *)0x0) {
            (**(code **)(*temp_ptr1 + 0x38))();
        }
        
        // 复制数据（该函数不返回）
        memcpy(
            *(undefined8 *)(*container_ptr + 0x10), 
            *(undefined8 *)(data_source + 8), 
            (longlong)*(int *)(*container_ptr + 0x1c)
        );
    }
    
    // 清理容器
    temp_ptr2 = (longlong *)*container_ptr;
    *container_ptr = 0;
    if (temp_ptr2 != (longlong *)0x0) {
        (**(code **)(*temp_ptr2 + 0x38))();
    }
    
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 处理8字节数据数组
 * @param data_source 数据源指针
 * @param container_ptr 容器指针指针
 * 功能：从数据源提取8字节数据并存储到容器中
 */
void process_int64_array_data(longlong data_source, longlong *container_ptr)
{
    int data_count;
    undefined8 global_val;
    longlong *new_container;
    longlong *old_container;
    longlong array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    longlong *temp_ptr1;
    longlong *temp_ptr2;
    undefined8 stack_guard;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    
    // 获取数据计数
    data_count = **(int **)(data_source + 8);
    *(int **)(data_source + 8) = *(int **)(data_source + 8) + 1;
    global_val = global_container_manager;
    
    if (data_count != 0) {
        data_count = data_count * 8;  // 计算总字节数
        
        debug_info1 = &debug_symbol_table1;
        debug_info2 = local_buffer;
        local_buffer[0] = 0;
        alloc_size = 0x1c;
        strcpy_s(local_buffer, 0x40, &debug_string_table);
        enable_debug_tracing();
        debug_info1 = &debug_symbol_table2;
        
        // 分配数组内存
        array_data = allocate_managed_memory(
            global_memory_allocator, 
            data_count, 
            0x10, 
            0x1e
        );
        
        // 调用处理函数
        process_int64_data(global_val, &temp_ptr1);
        new_container = temp_ptr1;
        temp_ptr1[2] = array_data;
        *(int *)(temp_ptr1 + 3) = data_count;
        *(int *)((longlong)temp_ptr1 + 0x1c) = data_count;
        *(undefined1 *)(temp_ptr1 + 4) = 0;
        
        stack_flag = 1;
        temp_ptr1 = (longlong *)0x0;
        temp_ptr2 = (longlong *)*container_ptr;
        *container_ptr = (longlong)new_container;
        
        // 清理旧容器
        if (temp_ptr2 != (longlong *)0x0) {
            (**(code **)(*temp_ptr2 + 0x38))();
        }
        
        stack_flag = 0;
        if (temp_ptr1 != (longlong *)0x0) {
            (**(code **)(*temp_ptr1 + 0x38))();
        }
        
        // 复制数据（该函数不返回）
        memcpy(
            *(undefined8 *)(*container_ptr + 0x10), 
            *(undefined8 *)(data_source + 8), 
            (longlong)*(int *)(*container_ptr + 0x1c)
        );
    }
    
    // 清理容器
    temp_ptr2 = (longlong *)*container_ptr;
    *container_ptr = 0;
    if (temp_ptr2 != (longlong *)0x0) {
        (**(code **)(*temp_ptr2 + 0x38))();
    }
    
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 处理4字节整型数组数据（变体2）
 * @param data_source 数据源指针
 * @param container_ptr 容器指针指针
 * 功能：从数据源提取4字节整型数据并存储到容器中（变体实现2）
 */
void process_int32_array_data_variant2(longlong data_source, longlong *container_ptr)
{
    int data_count;
    undefined8 global_val;
    longlong *new_container;
    longlong *old_container;
    longlong array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    longlong *temp_ptr1;
    longlong *temp_ptr2;
    undefined8 stack_guard;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    
    // 获取数据计数
    data_count = **(int **)(data_source + 8);
    *(int **)(data_source + 8) = *(int **)(data_source + 8) + 1;
    global_val = global_container_manager;
    
    if (data_count != 0) {
        data_count = data_count * 4;  // 计算总字节数
        
        debug_info1 = &debug_symbol_table1;
        debug_info2 = local_buffer;
        local_buffer[0] = 0;
        alloc_size = 0x1c;
        strcpy_s(local_buffer, 0x40, &debug_string_table);
        enable_debug_tracing();
        debug_info1 = &debug_symbol_table2;
        
        // 分配数组内存
        array_data = allocate_managed_memory(
            global_memory_allocator, 
            data_count, 
            0x10, 
            0x1e
        );
        
        // 调用处理函数
        process_int32_data(global_val, &temp_ptr1);
        new_container = temp_ptr1;
        temp_ptr1[2] = array_data;
        *(int *)(temp_ptr1 + 3) = data_count;
        *(int *)((longlong)temp_ptr1 + 0x1c) = data_count;
        *(undefined1 *)(temp_ptr1 + 4) = 0;
        
        stack_flag = 1;
        temp_ptr1 = (longlong *)0x0;
        temp_ptr2 = (longlong *)*container_ptr;
        *container_ptr = (longlong)new_container;
        
        // 清理旧容器
        if (temp_ptr2 != (longlong *)0x0) {
            (**(code **)(*temp_ptr2 + 0x38))();
        }
        
        stack_flag = 0;
        if (temp_ptr1 != (longlong *)0x0) {
            (**(code **)(*temp_ptr1 + 0x38))();
        }
        
        // 复制数据（该函数不返回）
        memcpy(
            *(undefined8 *)(*container_ptr + 0x10), 
            *(undefined8 *)(data_source + 8), 
            (longlong)*(int *)(*container_ptr + 0x1c)
        );
    }
    
    // 清理容器
    temp_ptr2 = (longlong *)*container_ptr;
    *container_ptr = 0;
    if (temp_ptr2 != (longlong *)0x0) {
        (**(code **)(*temp_ptr2 + 0x38))();
    }
    
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 处理4字节整型数组数据（变体3）
 * @param data_source 数据源指针
 * @param container_ptr 容器指针指针
 * 功能：从数据源提取4字节整型数据并存储到容器中（变体实现3）
 */
void process_int32_array_data_variant3(longlong data_source, longlong *container_ptr)
{
    int data_count;
    undefined8 global_val;
    longlong *new_container;
    longlong *old_container;
    longlong array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    longlong *temp_ptr1;
    longlong *temp_ptr2;
    undefined8 stack_guard;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    
    // 获取数据计数
    data_count = **(int **)(data_source + 8);
    *(int **)(data_source + 8) = *(int **)(data_source + 8) + 1;
    global_val = global_container_manager;
    
    if (data_count != 0) {
        debug_info1 = &debug_symbol_table1;
        debug_info2 = local_buffer;
        local_buffer[0] = 0;
        alloc_size = 0x1c;
        strcpy_s(local_buffer, 0x40, &debug_string_table);
        enable_debug_tracing();
        debug_info1 = &debug_symbol_table2;
        
        // 分配数组内存
        array_data = allocate_managed_memory(
            global_memory_allocator, 
            data_count, 
            0x10, 
            0x1e
        );
        
        // 调用处理函数
        process_int32_data_simple(global_val, &temp_ptr1);
        new_container = temp_ptr1;
        temp_ptr1[2] = array_data;
        *(int *)(temp_ptr1 + 3) = data_count;
        *(int *)((longlong)temp_ptr1 + 0x1c) = data_count;
        *(undefined1 *)(temp_ptr1 + 4) = 0;
        
        stack_flag = 1;
        temp_ptr1 = (longlong *)0x0;
        temp_ptr2 = (longlong *)*container_ptr;
        *container_ptr = (longlong)new_container;
        
        // 清理旧容器
        if (temp_ptr2 != (longlong *)0x0) {
            (**(code **)(*temp_ptr2 + 0x38))();
        }
        
        stack_flag = 0;
        if (temp_ptr1 != (longlong *)0x0) {
            (**(code **)(*temp_ptr1 + 0x38))();
        }
        
        // 复制数据（该函数不返回）
        memcpy(
            *(undefined8 *)(*container_ptr + 0x10), 
            *(undefined8 *)(data_source + 8), 
            (longlong)*(int *)(*container_ptr + 0x1c)
        );
    }
    
    // 清理容器
    temp_ptr2 = (longlong *)*container_ptr;
    *container_ptr = 0;
    if (temp_ptr2 != (longlong *)0x0) {
        (**(code **)(*temp_ptr2 + 0x38))();
    }
    
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 处理2字节整型数组数据
 * @param data_source 数据源指针
 * @param container_ptr 容器指针指针
 * 功能：从数据源提取2字节整型数据并存储到容器中
 */
void process_int16_array_data(longlong data_source, longlong *container_ptr)
{
    int data_count;
    undefined8 global_val;
    longlong *new_container;
    longlong *old_container;
    longlong array_data;
    undefined1 stack_buffer[32];
    undefined4 stack_flag;
    longlong *temp_ptr1;
    longlong *temp_ptr2;
    undefined8 stack_guard;
    undefined *debug_info1;
    undefined1 *debug_info2;
    undefined4 alloc_size;
    undefined1 local_buffer[72];
    ulonglong stack_canary;
    
    stack_guard = 0xfffffffffffffffe;
    stack_canary = global_stack_cookie ^ (ulonglong)stack_buffer;
    stack_flag = 0;
    
    // 获取数据计数
    data_count = **(int **)(data_source + 8);
    *(int **)(data_source + 8) = *(int **)(data_source + 8) + 1;
    global_val = global_container_manager;
    
    if (data_count != 0) {
        data_count = data_count * 2;  // 计算总字节数
        
        debug_info1 = &debug_symbol_table1;
        debug_info2 = local_buffer;
        local_buffer[0] = 0;
        alloc_size = 0x1c;
        strcpy_s(local_buffer, 0x40, &debug_string_table);
        enable_debug_tracing();
        debug_info1 = &debug_symbol_table2;
        
        // 分配数组内存
        array_data = allocate_managed_memory(
            global_memory_allocator, 
            data_count, 
            0x10, 
            0x1e
        );
        
        // 调用处理函数
        process_int16_data(global_val, &temp_ptr1);
        new_container = temp_ptr1;
        temp_ptr1[2] = array_data;
        *(int *)(temp_ptr1 + 3) = data_count;
        *(int *)((longlong)temp_ptr1 + 0x1c) = data_count;
        *(undefined1 *)(temp_ptr1 + 4) = 0;
        
        stack_flag = 1;
        temp_ptr1 = (longlong *)0x0;
        temp_ptr2 = (longlong *)*container_ptr;
        *container_ptr = (longlong)new_container;
        
        // 清理旧容器
        if (temp_ptr2 != (longlong *)0x0) {
            (**(code **)(*temp_ptr2 + 0x38))();
        }
        
        stack_flag = 0;
        if (temp_ptr1 != (longlong *)0x0) {
            (**(code **)(*temp_ptr1 + 0x38))();
        }
        
        // 复制数据（该函数不返回）
        memcpy(
            *(undefined8 *)(*container_ptr + 0x10), 
            *(undefined8 *)(data_source + 8), 
            (longlong)*(int *)(*container_ptr + 0x1c)
        );
    }
    
    // 清理容器
    temp_ptr2 = (longlong *)*container_ptr;
    *container_ptr = 0;
    if (temp_ptr2 != (longlong *)0x0) {
        (**(code **)(*temp_ptr2 + 0x38))();
    }
    
    // 调用栈保护检查（该函数不返回）
    check_stack_protection(stack_canary ^ (ulonglong)stack_buffer);
}

/**
 * 调整动态数组大小（类型1）
 * @param array_info 数组信息结构体指针
 * @param new_elements_needed 需要的新元素数量
 * @param allocation_type 分配类型
 * @param allocation_flags 分配标志
 * 功能：扩展动态数组容量以容纳更多元素
 */
void resize_dynamic_array_type1(longlong *array_info, ulonglong new_elements_needed, undefined8 allocation_type, undefined8 allocation_flags)
{
    undefined8 *current_end;
    undefined4 element_data;
    undefined8 temp_val;
    longlong current_capacity;
    undefined8 *new_array_start;
    undefined8 *new_array_ptr;
    undefined8 *old_array_start;
    longlong *element_ptr;
    ulonglong new_capacity;
    undefined8 *array_start;
    ulonglong element_count;
    
    current_end = (undefined8 *)array_info[1];
    
    // 检查是否有足够的剩余空间
    if ((ulonglong)(array_info[2] - (longlong)current_end >> 5) < new_elements_needed) {
        array_start = (undefined8 *)*array_info;
        current_capacity = (longlong)current_end - (longlong)array_start >> 5;
        new_capacity = current_capacity * 2;
        
        if (current_capacity == 0) {
            new_capacity = 1;
        }
        if (new_capacity < current_capacity + new_elements_needed) {
            new_capacity = current_capacity + new_elements_needed;
        }
        
        new_array_start = (undefined8 *)0x0;
        if (new_capacity != 0) {
            // 分配新的数组空间
            new_array_start = (undefined8 *)allocate_array_memory(
                global_memory_allocator, 
                new_capacity << 5, 
                (char)array_info[3], 
                allocation_flags, 
                0xfffffffffffffffe
            );
            current_end = (undefined8 *)array_info[1];
            array_start = (undefined8 *)*array_info;
        }
        
        new_array_ptr = new_array_start;
        if (array_start != current_end) {
            current_capacity = (longlong)new_array_start - (longlong)array_start;
            array_start = array_start + 3;
            
            // 迁移现有元素到新数组
            do {
                *new_array_ptr = 0;
                *(undefined8 *)(current_capacity + -0x10 + (longlong)array_start) = 0;
                *(undefined8 *)(current_capacity + -8 + (longlong)array_start) = 0;
                *(undefined4 *)(current_capacity + (longlong)array_start) = *(undefined4 *)array_start;
                temp_val = *new_array_ptr;
                *new_array_ptr = array_start[-3];
                array_start[-3] = temp_val;
                temp_val = *(undefined8 *)(current_capacity + -0x10 + (longlong)array_start);
                *(undefined8 *)(current_capacity + -0x10 + (longlong)array_start) = array_start[-2];
                array_start[-2] = temp_val;
                temp_val = *(undefined8 *)(current_capacity + -8 + (longlong)array_start);
                *(undefined8 *)(current_capacity + -8 + (longlong)array_start) = array_start[-1];
                array_start[-1] = temp_val;
                element_data = *(undefined4 *)(current_capacity + (longlong)array_start);
                *(undefined4 *)(current_capacity + (longlong)array_start) = *(undefined4 *)array_start;
                *(undefined4 *)array_start = element_data;
                new_array_ptr = new_array_ptr + 4;
                element_ptr = array_start + 1;
                array_start = array_start + 4;
            } while (element_ptr != current_end);
        }
        
        // 初始化新元素
        if (new_elements_needed != 0) {
            current_end = new_array_ptr + 1;
            element_count = new_elements_needed;
            do {
                current_end[-1] = 0;
                *current_end = 0;
                current_end[1] = 0;
                *(undefined4 *)(current_end + 2) = 3;
                current_end = current_end + 4;
                element_count = element_count - 1;
            } while (element_count != 0);
        }
        
        // 清理旧数组
        element_ptr = (longlong *)*array_info;
        if (element_ptr != (longlong *)array_info[1]) {
            do {
                if (*element_ptr != 0) {
                    // 触发错误处理（该函数不返回）
                    trigger_critical_error();
                }
                element_ptr = element_ptr + 4;
            } while (element_ptr != (longlong *)array_info[1]);
            element_ptr = (longlong *)*array_info;
        }
        
        if (element_ptr != (longlong *)0x0) {
            // 释放旧数组内存（该函数不返回）
            release_memory(element_ptr);
        }
        
        // 更新数组信息
        *array_info = (longlong)new_array_start;
        array_info[1] = (longlong)(new_array_ptr + new_elements_needed * 4);
        array_info[2] = (longlong)(new_array_start + new_capacity * 4);
    }
    else {
        element_count = new_elements_needed;
        if (new_elements_needed != 0) {
            do {
                *current_end = 0;
                current_end[1] = 0;
                current_end[2] = 0;
                *(undefined4 *)(current_end + 3) = 3;
                current_end = current_end + 4;
                element_count = element_count - 1;
            } while (element_count != 0);
            current_end = (undefined8 *)array_info[1];
        }
        array_info[1] = (longlong)(current_end + new_elements_needed * 4);
    }
    return;
}

/**
 * 调整动态数组大小（类型2）
 * @param array_info 数组信息结构体指针
 * @param new_elements_needed 需要的新元素数量
 * @param allocation_type 分配类型
 * @param allocation_flags 分配标志
 * 功能：扩展动态数组容量以容纳更多元素（变体实现）
 */
void resize_dynamic_array_type2(longlong *array_info, ulonglong new_elements_needed, undefined8 allocation_type, undefined8 allocation_flags)
{
    undefined8 *current_end;
    undefined4 element_data;
    undefined8 temp_val;
    longlong current_capacity;
    undefined8 *new_array_start;
    undefined8 *new_array_ptr;
    undefined8 *old_array_start;
    longlong *element_ptr;
    ulonglong new_capacity;
    undefined8 *array_start;
    ulonglong element_count;
    
    current_end = (undefined8 *)array_info[1];
    
    // 检查是否有足够的剩余空间
    if ((ulonglong)(array_info[2] - (longlong)current_end >> 5) < new_elements_needed) {
        array_start = (undefined8 *)*array_info;
        current_capacity = (longlong)current_end - (longlong)array_start >> 5;
        new_capacity = current_capacity * 2;
        
        if (current_capacity == 0) {
            new_capacity = 1;
        }
        if (new_capacity < current_capacity + new_elements_needed) {
            new_capacity = current_capacity + new_elements_needed;
        }
        
        new_array_start = (undefined8 *)0x0;
        if (new_capacity != 0) {
            // 分配新的数组空间
            new_array_start = (undefined8 *)allocate_array_memory(
                global_memory_allocator, 
                new_capacity << 5, 
                (char)array_info[3], 
                allocation_flags, 
                0xfffffffffffffffe
            );
            current_end = (undefined8 *)array_info[1];
            array_start = (undefined8 *)*array_info;
        }
        
        new_array_ptr = new_array_start;
        if (array_start != current_end) {
            current_capacity = (longlong)new_array_start - (longlong)array_start;
            array_start = array_start + 3;
            
            // 迁移现有元素到新数组
            do {
                *new_array_ptr = 0;
                *(undefined8 *)(current_capacity + -0x10 + (longlong)array_start) = 0;
                *(undefined8 *)(current_capacity + -8 + (longlong)array_start) = 0;
                *(undefined4 *)(current_capacity + (longlong)array_start) = *(undefined4 *)array_start;
                temp_val = *new_array_ptr;
                *new_array_ptr = array_start[-3];
                array_start[-3] = temp_val;
                temp_val = *(undefined8 *)(current_capacity + -0x10 + (longlong)array_start);
                *(undefined8 *)(current_capacity + -0x10 + (longlong)array_start) = array_start[-2];
                array_start[-2] = temp_val;
                temp_val = *(undefined8 *)(current_capacity + -8 + (longlong)array_start);
                *(undefined8 *)(current_capacity + -8 + (longlong)array_start) = array_start[-1];
                array_start[-1] = temp_val;
                element_data = *(undefined4 *)(current_capacity + (longlong)array_start);
                *(undefined4 *)(current_capacity + (longlong)array_start) = *(undefined4 *)array_start;
                *(undefined4 *)array_start = element_data;
                new_array_ptr = new_array_ptr + 4;
                element_ptr = array_start + 1;
                array_start = array_start + 4;
            } while (element_ptr != current_end);
        }
        
        // 初始化新元素
        if (new_elements_needed != 0) {
            current_end = new_array_ptr + 1;
            element_count = new_elements_needed;
            do {
                current_end[-1] = 0;
                *current_end = 0;
                current_end[1] = 0;
                *(undefined4 *)(current_end + 2) = 3;
                current_end = current_end + 4;
                element_count = element_count - 1;
            } while (element_count != 0);
        }
        
        // 清理旧数组
        element_ptr = (longlong *)*array_info;
        if (element_ptr != (longlong *)array_info[1]) {
            do {
                if (*element_ptr != 0) {
                    // 触发错误处理（该函数不返回）
                    trigger_critical_error();
                }
                element_ptr = element_ptr + 4;
            } while (element_ptr != (longlong *)array_info[1]);
            element_ptr = (longlong *)*array_info;
        }
        
        if (element_ptr != (longlong *)0x0) {
            // 释放旧数组内存（该函数不返回）
            release_memory(element_ptr);
        }
        
        // 更新数组信息
        *array_info = (longlong)new_array_start;
        array_info[1] = (longlong)(new_array_ptr + new_elements_needed * 4);
        array_info[2] = (longlong)(new_array_start + new_capacity * 4);
    }
    else {
        element_count = new_elements_needed;
        if (new_elements_needed != 0) {
            do {
                *current_end = 0;
                current_end[1] = 0;
                current_end[2] = 0;
                *(undefined4 *)(current_end + 3) = 3;
                current_end = current_end + 4;
                element_count = element_count - 1;
            } while (element_count != 0);
            current_end = (undefined8 *)array_info[1];
        }
        array_info[1] = (longlong)(current_end + new_elements_needed * 4);
    }
    return;
}

// 注意：以下为简化实现中使用的函数占位符
// 在实际实现中，这些函数应该替换为实际的函数指针或实现

// 全局变量和函数占位符
void trigger_critical_error(void) { /* 简化实现：错误处理函数 */ }
undefined8 *allocate_managed_memory(undefined8 allocator, ulonglong size, int align, int flags) { return (undefined8 *)0; }
void initialize_int32_container(undefined8 id, longlong *ptr) { /* 简化实现：容器初始化 */ }
void initialize_int16_container(undefined8 id, longlong *ptr) { /* 简化实现：容器初始化 */ }
void initialize_container_simple(undefined8 id, longlong *ptr) { /* 简化实现：容器初始化 */ }
void process_int32_data(undefined8 val, longlong **ptr) { /* 简化实现：数据处理 */ }
void process_int32_data_variant1(undefined8 val, longlong **ptr) { /* 简化实现：数据处理 */ }
void process_struct_data(undefined8 val, longlong **ptr) { /* 简化实现：数据处理 */ }
void process_int64_data(undefined8 val, longlong **ptr) { /* 简化实现：数据处理 */ }
void process_int16_data(undefined8 val, longlong **ptr) { /* 简化实现：数据处理 */ }
void process_int32_data_simple(undefined8 val, longlong **ptr) { /* 简化实现：数据处理 */ }
undefined8 *allocate_array_memory(undefined8 allocator, ulonglong size, char type, undefined8 flags, longlong align) { return (undefined8 *)0; }
void release_memory(longlong *ptr) { /* 简化实现：内存释放 */ }
void enable_debug_tracing(void) { /* 简化实现：调试追踪 */ }
void check_stack_protection(ulonglong canary) { /* 简化实现：栈保护检查 */ }

// 全局变量占位符
undefined8 global_container_manager = 0;
undefined8 global_memory_allocator = 0;
undefined8 global_stack_cookie = 0;
undefined8 default_allocation_flags = 0;
undefined *debug_symbol_table1 = (undefined *)0;
undefined *debug_symbol_table2 = (undefined *)0;
undefined1 *debug_string_table = (undefined1 *)0;

// 函数指针占位符
undefined8 data_structure_operation_func1 = 0;
undefined8 data_structure_operation_func2 = 0;