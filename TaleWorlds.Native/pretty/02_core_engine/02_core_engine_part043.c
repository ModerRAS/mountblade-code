#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part043.c - 核心引擎模块第43部分
// 本文件包含26个函数，主要涉及内存管理、数据结构操作和资源清理等功能

// 函数：重新分配和扩容容器
// 原始函数名：FUN_1800826b0
void resize_container(longlong *container_ptr, longlong *data_range_ptr)
{
    undefined4 *data_start;
    undefined4 *data_end;
    uint allocation_flags;
    undefined8 new_memory_block;
    undefined8 *new_container;
    undefined4 *current_data;
    undefined8 *iterator;
    undefined8 *temp_ptr;
    longlong *current_slot;
    longlong capacity;
    longlong new_capacity;
    undefined4 *element_ptr;
    undefined8 element_data;
    
    // 内存分配标志位
    element_data = 0xfffffffffffffffe;
    element_ptr = (undefined4 *)container_ptr[1];
    data_start = (undefined4 *)*container_ptr;
    
    // 计算当前容量
    capacity = (longlong)element_ptr - (longlong)data_start >> 5;
    new_container = (undefined8 *)0x0;
    
    // 确定新容量
    if (capacity == 0) {
        capacity = 1;
    }
    else {
        capacity = capacity * 2;
        new_container = new_container;
        if (capacity == 0) goto ALLOCATION_COMPLETE;
    }
    
    // 分配新内存块
    new_container = (undefined8 *)
                   allocate_memory(_global_memory_allocator, capacity << 5, 
                                 (char)container_ptr[3], element_ptr, 0xfffffffffffffffe);
    
    element_ptr = (undefined4 *)container_ptr[1];
    data_start = (undefined4 *)*container_ptr;

ALLOCATION_COMPLETE:
    iterator = new_container;
    
    // 如果有数据需要迁移
    if (data_start != element_ptr) {
        new_capacity = (longlong)new_container - (longlong)data_start;
        data_start = data_start + 6;
        do {
            *iterator = 0;
            *(undefined8 *)(new_capacity + -0x10 + (longlong)data_start) = 0;
            *(undefined8 *)(new_capacity + -8 + (longlong)data_start) = 0;
            *(undefined4 *)(new_capacity + (longlong)data_start) = *data_start;
            element_data = *iterator;
            *iterator = *(undefined8 *)(data_start + -6);
            *(undefined8 *)(data_start + -6) = element_data;
            element_data = *(undefined8 *)(new_capacity + -0x10 + (longlong)data_start);
            *(undefined8 *)(new_capacity + -0x10 + (longlong)data_start) = *(undefined8 *)(data_start + -4);
            *(undefined8 *)(data_start + -4) = element_data;
            element_data = *(undefined8 *)(new_capacity + -8 + (longlong)data_start);
            *(undefined8 *)(new_capacity + -8 + (longlong)data_start) = *(undefined8 *)(data_start + -2);
            *(undefined8 *)(data_start + -2) = element_data;
            element_ptr = *(undefined4 *)(new_capacity + (longlong)data_start);
            *(undefined4 *)(new_capacity + (longlong)data_start) = *data_start;
            *data_start = element_ptr;
            iterator = iterator + 4;
            temp_ptr = data_start + 2;
            data_start = data_start + 8;
        } while (temp_ptr != element_ptr);
    }
    
    // 处理数据范围
    new_capacity = data_range_ptr[1] - *data_range_ptr >> 2;
    allocation_flags = *(uint *)(data_range_ptr + 3);
    *(uint *)(iterator + 3) = allocation_flags;
    
    if (new_capacity != 0) {
        temp_ptr = (undefined8 *)allocate_memory(_global_memory_allocator, new_capacity * 4, 
                                              allocation_flags & 0xff, element_ptr, element_data);
    }
    
    *iterator = temp_ptr;
    iterator[1] = temp_ptr;
    iterator[2] = (longlong)temp_ptr + new_capacity * 4;
    new_capacity = *data_range_ptr;
    
    // 复制数据
    if (new_capacity != data_range_ptr[1]) {
        // WARNING: 此子程序不返回
        memmove(*iterator, new_capacity, data_range_ptr[1] - new_capacity);
    }
    
    iterator[1] = *iterator;
    current_slot = (longlong *)*container_ptr;
    
    // 清理原有数据
    if (current_slot != (longlong *)container_ptr[1]) {
        do {
            if (*current_slot != 0) {
                // WARNING: 此子程序不返回
                cleanup_memory();
            }
            current_slot = current_slot + 4;
        } while (current_slot != (longlong *)container_ptr[1]);
        current_slot = (longlong *)*container_ptr;
    }
    
    // 更新容器指针
    if (current_slot == (longlong *)0x0) {
        *container_ptr = (longlong)new_container;
        container_ptr[1] = (longlong)(iterator + 4);
        container_ptr[2] = (longlong)(new_container + capacity * 4);
        return;
    }
    
    // WARNING: 此子程序不返回
    cleanup_memory(current_slot);
}

// 函数：清理内存区域
// 原始函数名：FUN_180082880
void cleanup_memory_region(longlong *start_ptr, longlong *end_ptr)
{
    if (start_ptr != end_ptr) {
        do {
            if (*start_ptr != 0) {
                // WARNING: 此子程序不返回
                cleanup_memory();
            }
            start_ptr = start_ptr + 4;
        } while (start_ptr != end_ptr);
    }
    return;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：从内存池分配对象
// 原始函数名：FUN_1800828d0
undefined8 * allocate_from_pool(longlong pool_handle, undefined8 *object_ptr)
{
    longlong pool_position;
    int lock_result;
    longlong *new_object;
    undefined4 init_flag;
    undefined8 allocation_flags;
    
    allocation_flags = 0xfffffffffffffffe;
    init_flag = 0;
    
    // 加锁
    lock_result = mutex_lock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    pool_position = *(longlong *)(pool_handle + 200);
    
    // 检查池是否为空
    if (*(longlong *)(pool_handle + 0xc0) == pool_position) {
        // 分配新对象
        new_object = (longlong *)allocate_object(_global_memory_allocator, 0x28, 8, 0x20, init_flag, allocation_flags);
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffef8;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    else {
        // 从池中重用对象
        new_object = *(longlong **)(pool_position + -8);
        *(longlong *)(pool_handle + 200) = pool_position + -8;
        new_object[1] = -0x5a5a5a5a5a5a5a5b;  // 填充模式
        new_object[2] = -0x5a5a5a5a5a5a5a5b;
        new_object[3] = -0x5a5a5a5a5a5a5a5b;
        new_object[4] = -0x5a5a5a5a5a5a5a5b;
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffef8;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    
    // 解锁
    lock_result = mutex_unlock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    return object_ptr;
}

// 函数：内存块移动
// 原始函数名：FUN_180082a50
void move_memory_block(longlong source, longlong destination, undefined8 size)
{
    if (source != destination) {
        // WARNING: 此子程序不返回
        memmove(destination, source, destination - source);
    }
    return;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：分配特定类型对象
// 原始函数名：FUN_180082aa0
undefined8 * allocate_specific_type(longlong pool_handle, undefined8 *object_ptr)
{
    longlong pool_position;
    int lock_result;
    longlong *new_object;
    undefined4 init_flag;
    undefined8 allocation_flags;
    
    allocation_flags = 0xfffffffffffffffe;
    init_flag = 0;
    
    // 加锁
    lock_result = mutex_lock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    pool_position = *(longlong *)(pool_handle + 200);
    
    // 检查池是否为空
    if (*(longlong *)(pool_handle + 0xc0) == pool_position) {
        // 分配新对象
        new_object = (longlong *)allocate_object(_global_memory_allocator, 0x28, 8, 0x20, init_flag, allocation_flags);
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffe28;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    else {
        // 从池中重用对象
        new_object = *(longlong **)(pool_position + -8);
        *(longlong *)(pool_handle + 200) = pool_position + -8;
        new_object[1] = -0x5a5a5a5a5a5a5a5b;
        new_object[2] = -0x5a5a5a5a5a5a5a5b;
        new_object[3] = -0x5a5a5a5a5a5a5a5b;
        new_object[4] = -0x5a5a5a5a5a5a5a5b;
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffe28;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    
    // 解锁
    lock_result = mutex_unlock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    return object_ptr;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：分配另一种特定类型对象
// 原始函数名：FUN_180082c20
undefined8 * allocate_alternative_type(longlong pool_handle, undefined8 *object_ptr)
{
    longlong pool_position;
    int lock_result;
    longlong *new_object;
    undefined4 init_flag;
    undefined8 allocation_flags;
    
    allocation_flags = 0xfffffffffffffffe;
    init_flag = 0;
    
    // 加锁
    lock_result = mutex_lock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    pool_position = *(longlong *)(pool_handle + 200);
    
    // 检查池是否为空
    if (*(longlong *)(pool_handle + 0xc0) == pool_position) {
        // 分配新对象
        new_object = (longlong *)allocate_object(_global_memory_allocator, 0x28, 8, 0x20, init_flag, allocation_flags);
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffe90;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    else {
        // 从池中重用对象
        new_object = *(longlong **)(pool_position + -8);
        *(longlong *)(pool_handle + 200) = pool_position + -8;
        new_object[1] = -0x5a5a5a5a5a5a5a5b;
        new_object[2] = -0x5a5a5a5a5a5a5a5b;
        new_object[3] = -0x5a5a5a5a5a5a5a5b;
        new_object[4] = -0x5a5a5a5a5a5a5a5b;
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffe90;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    
    // 解锁
    lock_result = mutex_unlock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    return object_ptr;
}

// 函数：处理对象状态更新
// 原始函数名：FUN_180082da0
undefined1 update_object_state(longlong *object_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
    undefined1 *state_ptr;
    undefined1 old_state;
    undefined8 vtable_entry;
    longlong *subsystem_a;
    longlong *subsystem_b;
    longlong **temp_ptr_a;
    undefined8 allocation_flags;
    
    allocation_flags = 0xfffffffffffffffe;
    object_manager = (longlong *)*object_manager;
    vtable_entry = *(undefined8 *)
                   (*(longlong *)(*object_manager + 0x1e0) + (ulonglong)*(byte *)(object_manager + 1) * 0x18);
    
    temp_ptr_a = &subsystem_a;
    subsystem_a = (longlong *)object_manager[2];
    if (subsystem_a != (longlong *)0x0) {
        (*(code **)(*subsystem_a + 0x28))();
    }
    
    process_subsystem(vtable_entry, &subsystem_a, param_3, param_4, allocation_flags);
    
    vtable_entry = *(undefined8 *)
                   (*(longlong *)(*object_manager + 0x1e0) + 8 + (ulonglong)*(byte *)(object_manager + 1) * 0x18);
    
    temp_ptr_a = &subsystem_b;
    subsystem_b = (longlong *)object_manager[3];
    if (subsystem_b != (longlong *)0x0) {
        (*(code **)(*subsystem_b + 0x28))();
    }
    
    process_secondary_subsystem(vtable_entry, &subsystem_b);
    
    // 锁定并更新状态
    acquire_global_lock();
    state_ptr = (undefined1 *)
               (*(longlong *)(*object_manager + 0x1e0) + 0x15 + (ulonglong)*(byte *)(object_manager + 1) * 0x18);
    old_state = *state_ptr;
    *state_ptr = 3;
    release_global_lock();
    
    return old_state;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：对象生命周期管理
// 原始函数名：FUN_180082e70
longlong manage_object_lifecycle(longlong *object_ptr, longlong *source_ptr, int operation)
{
    undefined8 *new_object;
    longlong *ref_counted_obj;
    longlong object_handle;
    undefined8 *source_data;
    
    if (operation == 3) {
        return 0x180bfdd20;  // 返回类型信息
    }
    if (operation == 4) {
        return *object_ptr;  // 返回对象引用
    }
    if (operation == 0) {
        // 销毁对象
        object_handle = *object_ptr;
        if (object_handle != 0) {
            if (*(longlong **)(object_handle + 0x18) != (longlong *)0x0) {
                (*(code **)(**(longlong **)(object_handle + 0x18) + 0x38))();
            }
            if (*(longlong **)(object_handle + 0x10) != (longlong *)0x0) {
                (*(code **)(**(longlong **)(object_handle + 0x10) + 0x38))();
            }
            // WARNING: 此子程序不返回
            cleanup_memory(object_handle);
        }
    }
    else {
        if (operation == 1) {
            // 复制构造对象
            source_data = (undefined8 *)allocate_object(_global_memory_allocator, 0x20, 8, 
                                                      object_type_descriptor, 0xfffffffffffffffe);
            new_object = (undefined8 *)*source_ptr;
            *source_data = *new_object;
            *(undefined1 *)(source_data + 1) = *(undefined1 *)(new_object + 1);
            ref_counted_obj = (longlong *)new_object[2];
            source_data[2] = ref_counted_obj;
            if (ref_counted_obj != (longlong *)0x0) {
                (*(code **)(*ref_counted_obj + 0x28))();
            }
            ref_counted_obj = (longlong *)new_object[3];
            source_data[3] = ref_counted_obj;
            if (ref_counted_obj != (longlong *)0x0) {
                (*(code **)(*ref_counted_obj + 0x28))();
            }
            *object_ptr = (longlong)source_data;
            return 0;
        }
        if (operation == 2) {
            // 移动对象
            *object_ptr = *source_ptr;
            *source_ptr = 0;
            return 0;
        }
    }
    return 0;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：初始化渲染上下文
// 原始函数名：FUN_180082fd0
void initialize_render_context(longlong context_handle, undefined8 param_2, undefined8 param_3, longlong *render_data)
{
    int render_param_a;
    int render_param_b;
    longlong context_base;
    longlong *new_renderer;
    undefined8 render_object;
    longlong *renderer_list;
    
    context_base = *render_data;
    render_object = allocate_object(_global_memory_allocator, 0xf0, 8, 3, 0xfffffffffffffffe);
    renderer_list = (longlong *)create_renderer_instance(render_object);
    
    if (renderer_list != (longlong *)0x0) {
        (*(code **)(*renderer_list + 0x28))(renderer_list);
    }
    
    new_renderer = *(longlong **)(context_base + 0x210);
    *(longlong **)(context_base + 0x210) = renderer_list;
    
    if (new_renderer != (longlong *)0x0) {
        (*(code **)(*new_renderer + 0x38))();
    }
    
    *(undefined1 *)(context_handle + 0x1a) = 0x12;
    context_base = *(longlong *)(context_base + 0x210);
    initialize_render_pipeline(context_base + 0x10);
    initialize_render_pipeline(context_base + 0x38, context_handle);
    
    *(undefined1 *)(context_base + 0x80) = *(undefined1 *)(context_handle + 0x1a);
    *(undefined4 *)(context_base + 0x60) = **(undefined4 **)(context_handle + 8);
    *(longlong *)(context_handle + 8) = *(longlong *)(context_handle + 8) + 4;
    
    render_param_a = *(int *)(context_base + 0x60);
    render_param_b = *(int *)(context_base + 100);
    
    if (render_param_b < render_param_a) {
        if (render_param_a == 0) {
            if (render_param_b < 2) {
                *(undefined4 *)(context_base + 100) = 8;
            }
            else {
                *(int *)(context_base + 100) = (render_param_b >> 1) + render_param_b;
            }
        }
        else {
            *(int *)(context_base + 100) = render_param_a;
        }
        resize_render_buffer(context_base + 0x60);
    }
    
    *(int *)(context_base + 0x60) = render_param_a;
    // WARNING: 此子程序不返回
    memcpy(*(undefined8 *)(context_base + 0x68), *(undefined8 *)(context_handle + 8), 
           (longlong)(render_param_a * 0x5c));
}

// 函数：减少引用计数
// 原始函数名：FUN_180083100
int decrease_reference_count(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 *ref_count_ptr)
{
    int current_count;
    int *count_ptr;
    
    update_reference_tracking(ref_count_ptr[1], param_1);
    count_ptr = (int *)*ref_count_ptr;
    
    acquire_global_lock();
    current_count = *count_ptr;
    *count_ptr = *count_ptr - 1;
    release_global_lock();
    
    return current_count;
}

// 函数：处理对象销毁
// 原始函数名：FUN_1800831c0
void handle_object_destruction(undefined8 param_1, undefined8 param_2, undefined8 param_3, longlong *object_ptr)
{
    undefined8 *object_data;
    undefined8 object_header;
    longlong *destructor_a;
    longlong *destructor_b;
    undefined8 stack_temp;
    longlong **temp_ptr_a;
    longlong **temp_ptr_b;
    
    stack_temp = 0xfffffffffffffffe;
    object_data = (undefined8 *)*object_ptr;
    
    // 调用析构函数
    call_object_destructor(object_data[2], object_data[3], *(undefined1 *)(object_data + 1), param_1);
    
    object_header = *object_data;
    temp_ptr_a = &destructor_a;
    destructor_a = (longlong *)object_data[3];
    if (destructor_a != (longlong *)0x0) {
        (*(code **)(*destructor_a + 0x28))();
    }
    
    temp_ptr_b = &destructor_b;
    destructor_b = (longlong *)object_data[2];
    if (destructor_b != (longlong *)0x0) {
        (*(code **)(*destructor_b + 0x28))();
    }
    
    // 执行清理操作
    perform_cleanup_operations(object_header, *(undefined1 *)(object_data + 1), &destructor_b, &destructor_a);
    
    // WARNING: 无法恢复跳转表，分支过多
    // WARNING: 将间接跳转作为调用处理
    (*(code **)(*(longlong *)*object_data + 0x38))();
    return;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：管理对象生命周期（变体）
// 原始函数名：FUN_180083260
longlong manage_object_lifecycle_variant(longlong *object_ptr, longlong *source_ptr, int operation)
{
    longlong result;
    
    if (operation == 3) {
        return 0x180bfdbe0;  // 返回类型信息
    }
    if (operation == 4) {
        return *object_ptr;  // 返回对象引用
    }
    if (operation == 0) {
        // 销毁对象
        result = *object_ptr;
        if (result != 0) {
            if (*(longlong **)(result + 0x18) != (longlong *)0x0) {
                (*(code **)(**(longlong **)(result + 0x18) + 0x38))();
            }
            if (*(longlong **)(result + 0x10) != (longlong *)0x0) {
                (*(code **)(**(longlong **)(result + 0x10) + 0x38))();
            }
            // WARNING: 此子程序不返回
            cleanup_memory(result);
        }
    }
    else {
        if (operation == 1) {
            // 创建新对象
            result = allocate_object(_global_memory_allocator, 0x20, 8, 
                                   object_type_descriptor, 0xfffffffffffffffe);
            initialize_object(result, *source_ptr);
            *object_ptr = result;
            return 0;
        }
        if (operation == 2) {
            // 移动对象
            *object_ptr = *source_ptr;
            *source_ptr = 0;
            return 0;
        }
    }
    return 0;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：管理对象生命周期（另一种变体）
// 原始函数名：FUN_180083390
longlong manage_object_lifecycle_alternative(longlong *object_ptr, longlong *source_ptr, int operation)
{
    undefined8 *new_object;
    longlong *ref_counted_obj;
    longlong object_handle;
    undefined8 *source_data;
    
    if (operation == 3) {
        return 0x180bfdba0;  // 返回类型信息
    }
    if (operation == 4) {
        return *object_ptr;  // 返回对象引用
    }
    if (operation == 0) {
        // 销毁对象
        object_handle = *object_ptr;
        if (object_handle != 0) {
            if (*(longlong **)(object_handle + 0x18) != (longlong *)0x0) {
                (*(code **)(**(longlong **)(object_handle + 0x18) + 0x38))();
            }
            if (*(longlong **)(object_handle + 0x10) != (longlong *)0x0) {
                (*(code **)(**(longlong **)(object_handle + 0x10) + 0x38))();
            }
            // WARNING: 此子程序不返回
            cleanup_memory(object_handle);
        }
    }
    else {
        if (operation == 1) {
            // 复制构造对象
            source_data = (undefined8 *)allocate_object(_global_memory_allocator, 0x20, 8, 
                                                      object_type_descriptor, 0xfffffffffffffffe);
            new_object = (undefined8 *)*source_ptr;
            *source_data = *new_object;
            *(undefined1 *)(source_data + 1) = *(undefined1 *)(new_object + 1);
            ref_counted_obj = (longlong *)new_object[2];
            source_data[2] = ref_counted_obj;
            if (ref_counted_obj != (longlong *)0x0) {
                (*(code **)(*ref_counted_obj + 0x28))();
            }
            ref_counted_obj = (longlong *)new_object[3];
            source_data[3] = ref_counted_obj;
            if (ref_counted_obj != (longlong *)0x0) {
                (*(code **)(*ref_counted_obj + 0x28))();
            }
            *object_ptr = (longlong)source_data;
            return 0;
        }
        if (operation == 2) {
            // 移动对象
            *object_ptr = *source_ptr;
            *source_ptr = 0;
            return 0;
        }
    }
    return 0;
}

// 函数：释放对象引用
// 原始函数名：FUN_1800834f0
void release_object_reference(ulonglong *object_ref_ptr)
{
    int *ref_count;
    undefined8 *object_ptr;
    longlong memory_block;
    ulonglong block_header;
    
    object_ptr = (undefined8 *)*object_ref_ptr;
    if (object_ptr == (undefined8 *)0x0) {
        return;
    }
    
    block_header = (ulonglong)object_ptr & 0xffffffffffc00000;
    if (block_header != 0) {
        memory_block = block_header + 0x80 + ((longlong)object_ptr - block_header >> 0x10) * 0x50;
        memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
        
        if ((*(void ***)(block_header + 0x70) == &ExceptionList) && 
            (*(char *)(memory_block + 0xe) == '\0')) {
            // 将对象返回到空闲列表
            *object_ptr = *(undefined8 *)(memory_block + 0x20);
            *(undefined8 **)(memory_block + 0x20) = object_ptr;
            ref_count = (int *)(memory_block + 0x18);
            *ref_count = *ref_count - 1;
            if (*ref_count == 0) {
                cleanup_memory_pool();
                return;
            }
        }
        else {
            // 使用通用释放函数
            release_memory_block(block_header, 
                               CONCAT71(0xff000000, *(void ***)(block_header + 0x70) == &ExceptionList),
                               object_ptr, block_header, 0xfffffffffffffffe);
        }
    }
    return;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：分配特定类型对象（变体A）
// 原始函数名：FUN_180083520
undefined8 * allocate_specific_type_variant_a(longlong pool_handle, undefined8 *object_ptr)
{
    longlong pool_position;
    int lock_result;
    longlong *new_object;
    undefined4 init_flag;
    undefined8 allocation_flags;
    
    allocation_flags = 0xfffffffffffffffe;
    init_flag = 0;
    
    // 加锁
    lock_result = mutex_lock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    pool_position = *(longlong *)(pool_handle + 200);
    
    // 检查池是否为空
    if (*(longlong *)(pool_handle + 0xc0) == pool_position) {
        // 分配新对象
        new_object = (longlong *)allocate_object(_global_memory_allocator, 0x28, 8, 0x20, init_flag, allocation_flags);
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffc88;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    else {
        // 从池中重用对象
        new_object = *(longlong **)(pool_position + -8);
        *(longlong *)(pool_handle + 200) = pool_position + -8;
        new_object[1] = -0x5a5a5a5a5a5a5a5b;
        new_object[2] = -0x5a5a5a5a5a5a5a5b;
        new_object[3] = -0x5a5a5a5a5a5a5a5b;
        new_object[4] = -0x5a5a5a5a5a5a5a5b;
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffc88;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    
    // 解锁
    lock_result = mutex_unlock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    return object_ptr;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：分配特定类型对象（变体B）
// 原始函数名：FUN_1800836a0
undefined8 * allocate_specific_type_variant_b(longlong pool_handle, undefined8 *object_ptr)
{
    longlong pool_position;
    int lock_result;
    longlong *new_object;
    undefined4 init_flag;
    undefined8 allocation_flags;
    
    allocation_flags = 0xfffffffffffffffe;
    init_flag = 0;
    
    // 加锁
    lock_result = mutex_lock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    pool_position = *(longlong *)(pool_handle + 200);
    
    // 检查池是否为空
    if (*(longlong *)(pool_handle + 0xc0) == pool_position) {
        // 分配新对象
        new_object = (longlong *)allocate_object(_global_memory_allocator, 0x28, 8, 0x20, init_flag, allocation_flags);
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffcf0;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    else {
        // 从池中重用对象
        new_object = *(longlong **)(pool_position + -8);
        *(longlong *)(pool_handle + 200) = pool_position + -8;
        new_object[1] = -0x5a5a5a5a5a5a5a5b;
        new_object[2] = -0x5a5a5a5a5a5a5a5b;
        new_object[3] = -0x5a5a5a5a5a5a5a5b;
        new_object[4] = -0x5a5a5a5a5a5a5a5b;
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffcf0;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    
    // 解锁
    lock_result = mutex_unlock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    return object_ptr;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：分配特定类型对象（变体C）
// 原始函数名：FUN_180083820
undefined8 * allocate_specific_type_variant_c(longlong pool_handle, undefined8 *object_ptr)
{
    longlong pool_position;
    int lock_result;
    longlong *new_object;
    undefined4 init_flag;
    undefined8 allocation_flags;
    
    allocation_flags = 0xfffffffffffffffe;
    init_flag = 0;
    
    // 加锁
    lock_result = mutex_lock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    pool_position = *(longlong *)(pool_handle + 200);
    
    // 检查池是否为空
    if (*(longlong *)(pool_handle + 0xc0) == pool_position) {
        // 分配新对象
        new_object = (longlong *)allocate_object(_global_memory_allocator, 0x28, 8, 0x20, init_flag, allocation_flags);
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffd58;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    else {
        // 从池中重用对象
        new_object = *(longlong **)(pool_position + -8);
        *(longlong *)(pool_handle + 200) = pool_position + -8;
        new_object[1] = -0x5a5a5a5a5a5a5a5b;
        new_object[2] = -0x5a5a5a5a5a5a5a5b;
        new_object[3] = -0x5a5a5a5a5a5a5a5b;
        new_object[4] = -0x5a5a5a5a5a5a5a5b;
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffd58;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    
    // 解锁
    lock_result = mutex_unlock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    return object_ptr;
}

// WARNING: 全局变量以'_'开头与较小符号重叠

// 函数：分配特定类型对象（变体D）
// 原始函数名：FUN_1800839a0
undefined8 * allocate_specific_type_variant_d(longlong pool_handle, undefined8 *object_ptr)
{
    longlong pool_position;
    int lock_result;
    longlong *new_object;
    undefined4 init_flag;
    undefined8 allocation_flags;
    
    allocation_flags = 0xfffffffffffffffe;
    init_flag = 0;
    
    // 加锁
    lock_result = mutex_lock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    pool_position = *(longlong *)(pool_handle + 200);
    
    // 检查池是否为空
    if (*(longlong *)(pool_handle + 0xc0) == pool_position) {
        // 分配新对象
        new_object = (longlong *)allocate_object(_global_memory_allocator, 0x28, 8, 0x20, init_flag, allocation_flags);
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffdc0;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    else {
        // 从池中重用对象
        new_object = *(longlong **)(pool_position + -8);
        *(longlong *)(pool_handle + 200) = pool_position + -8;
        new_object[1] = -0x5a5a5a5a5a5a5a5b;
        new_object[2] = -0x5a5a5a5a5a5a5a5b;
        new_object[3] = -0x5a5a5a5a5a5a5a5b;
        new_object[4] = -0x5a5a5a5a5a5a5a5b;
        *new_object = (longlong)&vtable_type_180a21690;
        *new_object = (longlong)&vtable_type_180a21720;
        *(undefined4 *)(new_object + 1) = 0;
        *new_object = (longlong)&vtable_type_1809fff60;
        new_object[2] = 0;
        new_object[3] = 0;
        *(undefined1 *)(new_object + 4) = 0;
        *new_object = (longlong)&vtable_type_1809ffdc0;
        // 调用虚函数
        (*(code **)(*new_object + 0x28))(new_object);
        *object_ptr = new_object;
    }
    
    // 解锁
    lock_result = mutex_unlock(pool_handle + 0x50);
    if (lock_result != 0) {
        throw_c_error(lock_result);
    }
    
    return object_ptr;
}

// 函数：扩展缓冲区容量
// 原始函数名：FUN_180083b20
void expand_buffer_capacity(longlong buffer_manager, longlong additional_size)
{
    longlong *buffer_info;
    ulonglong current_size;
    
    buffer_info = *(longlong **)(buffer_manager + 0x30);
    current_size = (longlong)(int)buffer_info[2] + 7U & 0xfffffffffffffff8;
    *(int *)(buffer_info + 2) = (int)current_size + ((int)additional_size + 1) * 8;
    // WARNING: 此子程序不返回
    memset(*buffer_info + current_size, 0, additional_size * 8);
}

// 函数：检查对象状态
// 原始函数名：FUN_180083bf0
undefined8 check_object_status(longlong object_handle)
{
    longlong vtable_ptr;
    longlong index;
    
    // 检查特定标志位
    if ((*(byte *)(object_handle + 0xfd) & 0x20) == 0) {
        object_handle = get_object_type_info(*(undefined8 *)(object_handle + 0x1b0));
    }
    
    index = 0;
    // 遍历对象状态表
    while ((*(longlong *)(object_handle + 0x1e0) == 0 ||
           ((*(char *)(*(longlong *)(object_handle + 0x1e0) + 0x15 + index) != '\x01' &&
            (*(char *)(*(longlong *)(object_handle + 0x1e0) + 0x15 + index) != '\x02'))))) {
        index = index + 0x18;
        if (0x17f < index) {
            return 1;  // 未找到匹配状态
        }
    }
    return 0;  // 找到匹配状态
}

// 函数：初始化特定类型对象（变体A）
// 原始函数名：FUN_180083c60
undefined8 * initialize_specific_type_a(undefined8 *object_ptr, ulonglong flags, undefined8 param_3, undefined8 param_4)
{
    *object_ptr = &vtable_type_1809ffc88;
    *object_ptr = &vtable_type_180a21720;
    *object_ptr = &vtable_type_180a21690;
    if ((flags & 1) != 0) {
        free(object_ptr, 0x28, param_3, param_4, 0xfffffffffffffffe);
    }
    return object_ptr;
}

// 函数：初始化特定类型对象（变体B）
// 原始函数名：FUN_180083cb0
undefined8 * initialize_specific_type_b(undefined8 *object_ptr, ulonglong flags, undefined8 param_3, undefined8 param_4)
{
    *object_ptr = &vtable_type_1809ffcf0;
    *object_ptr = &vtable_type_180a21720;
    *object_ptr = &vtable_type_180a21690;
    if ((flags & 1) != 0) {
        free(object_ptr, 0x28, param_3, param_4, 0xfffffffffffffffe);
    }
    return object_ptr;
}

// 函数：初始化特定类型对象（变体C）
// 原始函数名：FUN_180083d00
undefined8 * initialize_specific_type_c(undefined8 *object_ptr, ulonglong flags, undefined8 param_3, undefined8 param_4)
{
    *object_ptr = &vtable_type_1809ffd58;
    *object_ptr = &vtable_type_180a21720;
    *object_ptr = &vtable_type_180a21690;
    if ((flags & 1) != 0) {
        free(object_ptr, 0x28, param_3, param_4, 0xfffffffffffffffe);
    }
    return object_ptr;
}

// 函数：初始化特定类型对象（变体D）
// 原始函数名：FUN_180083d50
undefined8 * initialize_specific_type_d(undefined8 *object_ptr, ulonglong flags, undefined8 param_3, undefined8 param_4)
{
    *object_ptr = &vtable_type_1809ffdc0;
    *object_ptr = &vtable_type_180a21720;
    *object_ptr = &vtable_type_180a21690;
    if ((flags & 1) != 0) {
        free(object_ptr, 0x28, param_3, param_4, 0xfffffffffffffffe);
    }
    return object_ptr;
}

// 函数：初始化特定类型对象（变体E）
// 原始函数名：FUN_180083da0
undefined8 * initialize_specific_type_e(undefined8 *object_ptr, ulonglong flags, undefined8 param_3, undefined8 param_4)
{
    *object_ptr = &vtable_type_1809ffe28;
    *object_ptr = &vtable_type_180a21720;
    *object_ptr = &vtable_type_180a21690;
    if ((flags & 1) != 0) {
        free(object_ptr, 0x28, param_3, param_4, 0xfffffffffffffffe);
    }
    return object_ptr;
}

// 函数：初始化特定类型对象（变体F）
// 原始函数名：FUN_180083df0
undefined8 * initialize_specific_type_f(undefined8 *object_ptr, ulonglong flags, undefined8 param_3, undefined8 param_4)
{
    *object_ptr = &vtable_type_1809ffe90;
    *object_ptr = &vtable_type_180a21720;
    *object_ptr = &vtable_type_180a21690;
    if ((flags & 1) != 0) {
        free(object_ptr, 0x28, param_3, param_4, 0xfffffffffffffffe);
    }
    return object_ptr;
}

// 函数：初始化特定类型对象（变体G）
// 原始函数名：FUN_180083e40
undefined8 * initialize_specific_type_g(undefined8 *object_ptr, ulonglong flags, undefined8 param_3, undefined8 param_4)
{
    *object_ptr = &vtable_type_1809ffef8;
    *object_ptr = &vtable_type_180a21720;
    *object_ptr = &vtable_type_180a21690;
    if ((flags & 1) != 0) {
        free(object_ptr, 0x28, param_3, param_4, 0xfffffffffffffffe);
    }
    return object_ptr;
}

// 函数：设置对象虚表
// 原始函数名：FUN_180083e90
void set_object_vtable(undefined8 *object_ptr)
{
    *object_ptr = &vtable_type_180a21720;
    *object_ptr = &vtable_type_180a21690;
    return;
}

// 函数：初始化基础对象类型
// 原始函数名：FUN_180083ec0
undefined8 * initialize_base_object_type(undefined8 *object_ptr, ulonglong flags, undefined8 param_3, undefined8 param_4)
{
    *object_ptr = &vtable_type_180a21720;
    *object_ptr = &vtable_type_180a21690;
    if ((flags & 1) != 0) {
        free(object_ptr, 0x28, param_3, param_4, 0xfffffffffffffffe);
    }
    return object_ptr;
}

// 函数：销毁复合对象
// 原始函数名：FUN_180083f10
void destroy_composite_object(longlong *object_ptr)
{
    // 依次销毁所有子对象
    if ((longlong *)object_ptr[0xc] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[0xc] + 0x38))();
    }
    if ((longlong *)object_ptr[0xb] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[0xb] + 0x38))();
    }
    if ((longlong *)object_ptr[10] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[10] + 0x38))();
    }
    if ((longlong *)object_ptr[9] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[9] + 0x38))();
    }
    if ((longlong *)object_ptr[8] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[8] + 0x38))();
    }
    if ((longlong *)object_ptr[7] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[7] + 0x38))();
    }
    if ((longlong *)object_ptr[6] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[6] + 0x38))();
    }
    if ((longlong *)object_ptr[5] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[5] + 0x38))();
    }
    if ((longlong *)object_ptr[4] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[4] + 0x38))();
    }
    if ((longlong *)object_ptr[3] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[3] + 0x38))();
    }
    if ((longlong *)object_ptr[2] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[2] + 0x38))();
    }
    if ((longlong *)object_ptr[1] != (longlong *)0x0) {
        (*(code **)(*(longlong *)object_ptr[1] + 0x38))();
    }
    if ((longlong *)*object_ptr != (longlong *)0x0) {
        (*(code **)(*(longlong *)*object_ptr + 0x38))();
    }
    return;
}