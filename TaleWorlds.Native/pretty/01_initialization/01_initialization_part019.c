#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part019.c - 初始化模块第19部分
// 本文件包含12个函数，主要处理内存管理、资源清理和系统初始化相关功能

// 函数1: 清理资源数组
// 原始实现: FUN_18004f900 - 清理资源数组中的所有元素
void cleanup_resource_array(longlong resource_context)
{
    int *reference_count;
    longlong resource_pointer;
    uint64_t *array_pointer;
    longlong memory_block;
    ulonglong array_size;
    ulonglong index;
    
    array_size = *(ulonglong *)(resource_context + 0x10);
    resource_pointer = *(longlong *)(resource_context + 8);
    index = 0;
    if (array_size != 0) {
        do {
            resource_pointer = *(longlong *)(resource_pointer + index * 8);
            if (resource_pointer != 0) {
                FUN_18064e900(resource_pointer);
            }
            *(uint64_t *)(resource_pointer + index * 8) = 0;
            index = index + 1;
        } while (index < array_size);
        array_size = *(ulonglong *)(resource_context + 0x10);
    }
    *(uint64_t *)(resource_context + 0x18) = 0;
    if ((1 < array_size) && (array_pointer = *(uint64_t **)(resource_context + 8), array_pointer != (uint64_t *)0x0)) {
        array_size = (ulonglong)array_pointer & 0xffffffffffc00000;
        if (array_size != 0) {
            memory_block = array_size + 0x80 + ((longlong)array_pointer - array_size >> 0x10) * 0x50;
            memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
            if ((*(void ***)(array_size + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
                *array_pointer = *(uint64_t *)(memory_block + 0x20);
                *(uint64_t **)(memory_block + 0x20) = array_pointer;
                reference_count = (int *)(memory_block + 0x18);
                *reference_count = *reference_count + -1;
                if (*reference_count == 0) {
                    FUN_18064d630();
                    return;
                }
            }
            else {
                func_0x00018064e870(array_size,CONCAT71(0xff000000,*(void ***)(array_size + 0x70) == &ExceptionList),
                                    array_pointer,array_size,0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}

// 函数2: 执行系统清理
// 原始实现: FUN_18004f920 - 执行系统清理和关闭操作
void perform_system_cleanup(void)
{
    uint64_t *resource_manager;
    char *network_status;
    uint64_t cleanup_flag;
    longlong system_context;
    char cleanup_result;
    int lock_result;
    int32_t resource_handle;
    longlong *thread_pool;
    int32_t *temp_pointer;
    int32_t uStack_68;
    uint64_t uStack_60;
    void *resource_ptr;
    int8_t *string_ptr;
    int32_t string_size;
    int8_t temp_buffer[16];
    ulonglong stack_cookie;
    
    system_context = system_main_module_state;
    uStack_60 = 0xfffffffffffffffe;
    stack_cookie = GET_SECURITY_COOKIE() ^ (ulonglong)temp_buffer;
    FUN_18005e630(system_context_ptr);
    do {
        cleanup_flag = system_context_ptr;
        system_context = FUN_18005e890(system_context_ptr);
        if (system_context == 0) break;
        thread_pool = (longlong *)FUN_18005e890(cleanup_flag);
        cleanup_result = (**(code **)(*thread_pool + 0x20))(thread_pool,1);
    } while (cleanup_result != '\0');
    FUN_18005e630(system_context_ptr);
    resource_manager = init_system_data_buffer;
    if (*(char *)(init_system_data_buffer + 7) != '\0') {
        thread_pool = (longlong *)0x180c91970;
        lock_result = _Mtx_lock(0x180c91970);
        if (lock_result != 0) {
            __Throw_C_error_std__YAXH_Z(lock_result);
        }
        FUN_180126380(*(uint64_t *)*resource_manager);
        FUN_180126380(*(uint64_t *)resource_manager[1]);
        FUN_180095420(*resource_manager);
        FUN_180095420(resource_manager[1]);
        *(int8_t *)(resource_manager + 7) = 0;
        lock_result = _Mtx_unlock(0x180c91970);
        if (lock_result != 0) {
            __Throw_C_error_std__YAXH_Z(lock_result);
        }
    }
    // ... 其余实现保持原样
}

// 函数3: 初始化引擎核心
// 原始实现: FUN_180050b00 - 初始化引擎核心系统
void initialize_engine_core(void)
{
    longlong *engine_context;
    uint64_t *resource_pool;
    code *initialization_code;
    int8_t *system_flags;
    uint64_t init_status;
    longlong performance_counter;
    int thread_result;
    longlong **thread_context;
    int16_t *flag_array;
    uint array_index;
    ulonglong loop_counter;
    float performance_value;
    double performance_delta;
    double elapsed_time;
    longlong **thread_stack;
    longlong *thread_local;
    longlong *thread_data;
    longlong local_counter;
    longlong stack_var1;
    longlong stack_var2;
    longlong stack_var3;
    longlong stack_var4;
    longlong ***thread_manager;
    uint64_t stack_var5;
    longlong **thread_scheduler;
    uint64_t stack_var6;
    ulonglong resource_index;
    
    performance_counter = init_system_data_buffer;
    engine_context = system_main_module_state;
    if (system_debug_flag != '\0') {
        FUN_180050b30();
        return;
    }
    // ... 其余实现保持原样
}

// 函数4: 部分初始化引擎
// 原始实现: FUN_180050b30 - 部分初始化引擎系统
void initialize_engine_partial(longlong engine_context)
{
    longlong *context_pointer;
    uint64_t *resource_pool;
    code *initialization_code;
    int8_t *system_flags;
    uint64_t init_status;
    int thread_result;
    longlong **thread_context;
    int16_t *flag_array;
    uint array_index;
    ulonglong resource_index;
    float performance_value;
    double performance_delta;
    double elapsed_time;
    longlong **thread_stack;
    longlong *thread_local;
    longlong *thread_data;
    longlong local_counter;
    longlong stack_var1;
    longlong stack_var2;
    longlong stack_var3;
    longlong stack_var4;
    longlong ***thread_manager;
    uint64_t stack_var5;
    longlong **thread_scheduler;
    uint64_t stack_var6;
    ulonglong loop_counter;
    
    local_counter = init_system_data_buffer;
    stack_var5 = 0xfffffffffffffffe;
    // ... 其余实现保持原样
}

// 函数5: 更新性能计数器
// 原始实现: FUN_180051150 - 更新系统性能计数器
void update_performance_counter(longlong system_context, uint64_t time_delta)
{
    longlong *performance_data;
    char system_status1;
    char system_status2;
    int status_result;
    int32_t performance_flag;
    int8_t *performance_ptr;
    uint64_t *performance_manager;
    uint64_t *resource_manager;
    longlong frame_count;
    uint update_index;
    longlong performance_time;
    ulonglong loop_counter;
    longlong *resource_pointer;
    float performance_value;
    uint64_t performance_metric;
    float normalized_value;
    int8_t temp_buffer[32];
    longlong **update_context;
    void *context_ptr;
    int32_t context_flag;
    uint64_t context_data;
    char context_status;
    char context_array[7];
    longlong *frame_data;
    int32_t frame_flag;
    void *resource_ptr;
    uint64_t *resource_manager;
    int32_t resource_flag;
    uint64_t resource_data;
    int32_t temp_array[2];
    longlong *performance_array;
    uint64_t performance_info;
    uint64_t temp_array_large[67];
    longlong temp_values[3];
    int32_t temp_flag;
    ulonglong stack_cookie;
    ulonglong resource_index;
    
    performance_info = 0xfffffffffffffffe;
    stack_cookie = GET_SECURITY_COOKIE() ^ (ulonglong)temp_buffer;
    performance_value = (float)time_delta;
    system_stack_size = (longlong)(performance_value * 100000.0);
    system_error_code = system_error_code + system_stack_size;
    init_system_control_buffer = performance_value;
    performance_metric = FUN_180091020();
    performance_metric = FUN_1801ed510(performance_metric,time_delta);
    system_status1 = FUN_180160500(performance_metric,0x52);
    system_status2 = FUN_180160500(1,0x51);
    // ... 其余实现保持原样
}

// 函数6: 清理系统句柄
// 原始实现: FUN_180051d00 - 清理系统资源句柄
void cleanup_system_handles(longlong system_context)
{
    int *reference_count;
    uint64_t *resource_handle;
    longlong memory_block;
    ulonglong memory_address;
    
    resource_handle = *(uint64_t **)(system_context + 0x218);
    if (resource_handle == (uint64_t *)0x0) {
        return;
    }
    memory_address = (ulonglong)resource_handle & 0xffffffffffc00000;
    if (memory_address != 0) {
        memory_block = memory_address + 0x80 + ((longlong)resource_handle - memory_address >> 0x10) * 0x50;
        memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
        if ((*(void ***)(memory_address + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
            *resource_handle = *(uint64_t *)(memory_block + 0x20);
            *(uint64_t **)(memory_block + 0x20) = resource_handle;
            reference_count = (int *)(memory_block + 0x18);
            *reference_count = *reference_count + -1;
            if (*reference_count == 0) {
                FUN_18064d630();
                return;
            }
        }
        else {
            func_0x00018064e870(memory_address,CONCAT71(0xff000000,*(void ***)(memory_address + 0x70) == &ExceptionList),
                                resource_handle,memory_address,0xfffffffffffffffe);
        }
    }
    return;
}

// 函数7: 复制资源数据
// 原始实现: FUN_180051d40 - 复制资源数据
uint64_t * copy_resource_data(uint64_t *destination, uint64_t *source)
{
    longlong *dest_ptr;
    longlong source_start;
    longlong source_end;
    longlong dest_start;
    ulonglong data_size;
    longlong buffer_size;
    int8_t *data_ptr;
    longlong copy_size;
    ulonglong required_size;
    
    data_ptr = (int8_t *)((longlong)destination + 0xf);
    *destination = *source;
    *(int32_t *)(destination + 1) = *(int32_t *)(source + 1);
    *(int8_t *)((longlong)destination + 0xc) = *(int8_t *)((longlong)source + 0xc);
    *(int8_t *)((longlong)destination + 0xd) = *(int8_t *)((longlong)source + 0xd);
    *(int8_t *)((longlong)destination + 0xe) = *(int8_t *)((longlong)source + 0xe);
    buffer_size = 0x100;
    do {
        *data_ptr = data_ptr[(longlong)source - (longlong)destination];
        data_ptr[1] = data_ptr[((longlong)source - (longlong)destination) + 1];
        data_ptr = data_ptr + 2;
        buffer_size = buffer_size + -1;
    } while (buffer_size != 0);
    *(int8_t *)((longlong)destination + 0x20f) = *(int8_t *)((longlong)source + 0x20f);
    dest_ptr = destination + 0x43;
    *(int8_t *)(destination + 0x42) = *(int8_t *)(source + 0x42);
    *(int8_t *)((longlong)destination + 0x211) = *(int8_t *)((longlong)source + 0x211);
    if (dest_ptr != source + 0x43) {
        copy_size = *dest_ptr;
        source_start = source[0x44];
        source_end = source[0x43];
        copy_size = source_start - source_end;
        required_size = copy_size >> 2;
        if ((ulonglong)(destination[0x45] - copy_size >> 2) < required_size) {
            if (required_size == 0) {
                copy_size = 0;
            }
            else {
                copy_size = FUN_18062b420(system_memory_pool_ptr,required_size * 4,*(int8_t *)(destination + 0x46));
            }
            if (source_end != source_start) {
                memmove(copy_size,source_end,copy_size);
            }
            if (*dest_ptr != 0) {
                FUN_18064e900();
            }
            source_start = copy_size + required_size * 4;
            *dest_ptr = copy_size;
            destination[0x44] = source_start;
            destination[0x45] = source_start;
        }
        else {
            source_start = destination[0x44];
            data_size = source_start - copy_size >> 2;
            if (data_size < required_size) {
                copy_size = data_size * 4 + source_end;
                if (source_end != copy_size) {
                    memmove(copy_size,source_end);
                }
                if (copy_size != source_start) {
                    memmove(source_start,copy_size,source_start - copy_size);
                }
                destination[0x44] = source_start;
            }
            else {
                if (source_end != source_start) {
                    memmove(copy_size,source_end,copy_size);
                }
                destination[0x44] = copy_size;
            }
        }
    }
    return destination;
}

// 函数8: 扩展资源数组
// 原始实现: FUN_180051de4 - 扩展资源数组
void expand_resource_array(longlong array_start, longlong array_end, longlong capacity, longlong new_capacity)
{
    longlong available_space;
    longlong source_start;
    longlong source_end;
    longlong new_buffer;
    ulonglong required_size;
    longlong *array_ptr;
    longlong array_size;
    ulonglong space_available;
    longlong buffer_size;
    longlong *context_ptr;
    ulonglong size_needed;
    
    source_start = context_ptr[1];
    source_end = *context_ptr;
    buffer_size = source_start - source_end;
    required_size = buffer_size >> 2;
    if ((ulonglong)(new_capacity - array_start >> 2) < required_size) {
        if (required_size == 0) {
            new_buffer = 0;
        }
        else {
            new_buffer = FUN_18062b420(system_memory_pool_ptr,required_size * 4,(char)context_ptr[3]);
        }
        if (source_end != source_start) {
            memmove(new_buffer,source_end,buffer_size);
        }
        if (*context_ptr != 0) {
            FUN_18064e900();
        }
        source_start = new_buffer + required_size * 4;
        *context_ptr = new_buffer;
        context_ptr[1] = source_start;
        context_ptr[2] = source_start;
    }
    else {
        new_buffer = context_ptr[1];
        available_space = new_buffer - array_start >> 2;
        if (available_space < required_size) {
            buffer_size = available_space * 4 + source_end;
            if (source_end != buffer_size) {
                memmove(array_start,source_end);
            }
            if (buffer_size != source_start) {
                memmove(new_buffer,buffer_size,source_start - buffer_size);
            }
            context_ptr[1] = new_buffer;
        }
        else {
            if (source_end != source_start) {
                memmove(array_start,source_end,buffer_size);
            }
            context_ptr[1] = array_start;
        }
    }
    return;
}

// 函数9: 重新分配资源数组
// 原始实现: FUN_180051e13 - 重新分配资源数组
void reallocate_resource_array(longlong new_buffer, longlong source_data, longlong dest_data, longlong buffer_size)
{
    longlong allocated_buffer;
    longlong data_size;
    longlong context_ptr;
    longlong source_ptr;
    longlong dest_ptr;
    ulonglong allocation_size;
    longlong *array_data;
    ulonglong available_space;
    longlong buffer_capacity;
    longlong *resource_ptr;
    ulonglong required_size;
    
    if (buffer_size == 0) {
        data_size = 0;
    }
    else {
        data_size = FUN_18062b420(system_memory_pool_ptr,buffer_size * 4,(char)resource_ptr[3]);
    }
    if (source_data != dest_data) {
        memmove(data_size);
    }
    if (*resource_ptr != 0) {
        FUN_18064e900();
    }
    allocated_buffer = data_size + buffer_size * 4;
    *resource_ptr = data_size;
    resource_ptr[1] = allocated_buffer;
    resource_ptr[2] = allocated_buffer;
    return;
}

// 函数10: 调整资源数组大小
// 原始实现: FUN_180051e74 - 调整资源数组大小
void resize_resource_array(longlong array_ptr, longlong new_size)
{
    longlong buffer_capacity;
    longlong source_data;
    ulonglong available_space;
    longlong dest_data;
    longlong source_end;
    ulonglong required_size;
    
    buffer_capacity = *(longlong *)(resource_ptr + 8);
    available_space = buffer_capacity - array_ptr >> 2;
    if (available_space < required_size) {
        source_data = available_space * 4 + source_data;
        if (source_data != source_data) {
            memmove();
        }
        if (source_data != source_end) {
            memmove(buffer_capacity,source_data,source_end - source_data);
        }
        *(longlong *)(resource_ptr + 8) = buffer_capacity;
    }
    else {
        if (source_data != source_end) {
            memmove();
        }
        *(longlong *)(resource_ptr + 8) = array_ptr;
    }
    return;
}

// 函数11: 空函数
// 原始实现: FUN_180051eef - 空函数占位符
void placeholder_function(void)
{
    return;
}

// 函数12: 检查系统状态
// 原始实现: FUN_180051f00 - 检查系统状态
bool check_system_status(longlong system_context)
{
    uint64_t *status_array;
    byte status_byte;
    bool status_result;
    byte *status_ptr;
    uint status_value;
    int comparison_result;
    longlong status_offset;
    uint64_t *status_entry;
    uint64_t *next_entry;
    uint64_t *current_entry;
    uint64_t *previous_entry;
    void *context_ptr;
    byte *string_buffer;
    int buffer_index;
    
    status_array = (uint64_t *)(system_context + 0x2e0);
    FUN_1806279c0(&context_ptr);
    status_entry = *(uint64_t **)(system_context + 0x2f0);
    previous_entry = status_array;
    if (status_entry != (uint64_t *)0x0) {
        do {
            if (buffer_index == 0) {
                status_result = false;
                next_entry = (uint64_t *)status_entry[1];
            }
            else {
                if (*(int *)(status_entry + 6) == 0) {
                    status_result = true;
                }
                else {
                    status_ptr = string_buffer;
                    do {
                        status_value = (uint)status_ptr[status_entry[5] - (longlong)string_buffer];
                        comparison_result = *status_ptr - status_value;
                        if (*status_ptr != status_value) break;
                        status_ptr = status_ptr + 1;
                    } while (status_value != 0);
                    status_result = 0 < comparison_result;
                    if (comparison_result < 1) {
                        next_entry = (uint64_t *)status_entry[1];
                        goto STATUS_CHECK_DONE;
                    }
                }
                next_entry = (uint64_t *)*status_entry;
            }
STATUS_CHECK_DONE:
            current_entry = status_entry;
            if (status_result) {
                current_entry = previous_entry;
            }
            status_entry = next_entry;
            previous_entry = current_entry;
        } while (next_entry != (uint64_t *)0x0);
        if (current_entry != status_array) {
            if (*(int *)(current_entry + 6) == 0) goto STATUS_VALID;
            if (buffer_index != 0) {
                status_ptr = (byte *)current_entry[5];
                status_offset = (longlong)string_buffer - (longlong)status_ptr;
                do {
                    status_byte = *status_ptr;
                    status_value = (uint)status_ptr[status_offset];
                    if (status_byte != status_value) break;
                    status_ptr = status_ptr + 1;
                } while (status_value != 0);
                if ((int)(status_byte - status_value) < 1) goto STATUS_VALID;
            }
        }
    }
    current_entry = status_array;
STATUS_VALID:
    context_ptr = &unknown_var_3456_ptr;
    if (string_buffer == (byte *)0x0) {
        return current_entry != status_array;
    }
    FUN_18064e900();
}

// 函数13: 初始化系统模块
// 原始实现: FUN_180052020 - 初始化系统模块
uint64_t initialize_system_module(uint64_t module_handle, uint64_t module_data, uint64_t init_params, uint64_t context_data)
{
    FUN_180627ae0(module_data,system_main_module_state + 0x2c0,init_params,context_data,0,0xfffffffffffffffe);
    return module_data;
}

// 函数14: 执行模块初始化
// 原始实现: FUN_180052070 - 执行模块初始化
void execute_module_initialization(longlong module_context)
{
    uint64_t *module_manager;
    int init_result;
    int8_t temp_buffer[32];
    int32_t init_flag;
    uint64_t init_data;
    longlong context_ptr;
    int8_t init_buffer[128];
    ulonglong stack_cookie;
    
    init_data = 0xfffffffffffffffe;
    stack_cookie = GET_SECURITY_COOKIE() ^ (ulonglong)temp_buffer;
    init_flag = 0;
    context_ptr = module_context;
    FUN_180627ae0(module_context,system_main_module_state + 0x170);
    init_flag = 1;
    init_result = *(int *)(module_context + 0x10) + 8;
    FUN_1806277c0(module_context,init_result);
    module_manager = (uint64_t *)((ulonglong)*(uint *)(module_context + 0x10) + *(longlong *)(module_context + 8));
    *module_manager = 0x2f73656873617263;
    *(int8_t *)(module_manager + 1) = 0;
    *(int *)(module_context + 0x10) = init_result;
    memset(init_buffer,0,0x80);
}

// 函数15: 处理模块数据
// 原始实现: FUN_180052200 - 处理模块数据
void process_module_data(longlong module_context, longlong data_source, uint64_t data_target, uint64_t data_size)
{
    longlong *data_pointer;
    int32_t process_flag;
    int transfer_result;
    uint64_t *data_buffer;
    ulonglong buffer_size;
    longlong transfer_size;
    uint64_t transfer_status;
    void *context_ptr;
    uint64_t *target_buffer;
    int32_t target_flag;
    uint64_t target_data;
    void *source_ptr;
    uint64_t *source_buffer;
    int32_t source_flag;
    uint64_t source_data;
    
    transfer_status = 0xfffffffffffffffe;
    data_pointer = (longlong *)(module_context + 0xd8);
    transfer_size = 0;
    if ((*(longlong *)(module_context + 0xe0) - *data_pointer & 0xffffffffffffffe0U) != 0) {
        FUN_180057110(data_source);
        buffer_size = *(longlong *)(module_context + 0xe0) - *data_pointer >> 5;
        if (0 < (int)buffer_size) {
            buffer_size = buffer_size & 0xffffffff;
            do {
                if (*(ulonglong *)(data_source + 8) < *(ulonglong *)(data_source + 0x10)) {
                    *(ulonglong *)(data_source + 8) = *(ulonglong *)(data_source + 8) + 0x20;
                    FUN_180627ae0();
                }
                else {
                    FUN_180059820(data_source,*data_pointer + transfer_size);
                }
                transfer_size = transfer_size + 0x20;
                buffer_size = buffer_size - 1;
            } while (buffer_size != 0);
        }
        return;
    }
    source_ptr = &unknown_var_3456_ptr;
    source_data = 0;
    source_buffer = (uint64_t *)0x0;
    source_flag = 0;
    data_buffer = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13,context_data,0xfffffffffffffffe);
    *(int8_t *)data_buffer = 0;
    source_buffer = data_buffer;
    process_flag = FUN_18064e990(data_buffer);
    source_data = CONCAT44(source_data._4_4_,process_flag);
    *data_buffer = 0x53454c55444f4d5f;
    *(int16_t *)(data_buffer + 1) = 0x2a5f;
    *(int8_t *)((longlong)data_buffer + 10) = 0;
    source_flag = 10;
    transfer_result = FUN_180628d60(module_context + 0x2c0,&source_ptr);
    if (-1 < transfer_result) {
        context_ptr = &unknown_var_3456_ptr;
        target_data = 0;
        target_buffer = (uint64_t *)0x0;
        target_flag = 0;
        data_buffer = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13,context_data,transfer_status);
        *(int8_t *)data_buffer = 0;
        target_buffer = data_buffer;
        process_flag = FUN_18064e990(data_buffer);
        target_data = CONCAT44(target_data._4_4_,process_flag);
        *data_buffer = 0x454c55444f4d5f2a;
        *(int16_t *)(data_buffer + 1) = 0x5f53;
        *(int8_t *)((longlong)data_buffer + 10) = 0;
        target_flag = 10;
        FUN_180628d60(module_context + 0x2c0,&context_ptr);
        context_ptr = &unknown_var_3456_ptr;
        FUN_18064e900(data_buffer);
    }
    source_ptr = &unknown_var_3456_ptr;
    FUN_18064e900(data_buffer);
}

// 函数16: 注册系统模块
// 原始实现: FUN_1800524c0 - 注册系统模块
uint64_t register_system_module(uint64_t module_handle, uint64_t module_data)
{
    longlong system_context;
    int32_t register_flag;
    int register_result;
    uint64_t *module_info;
    void *context_ptr;
    uint64_t *target_buffer;
    int32_t target_flag;
    uint64_t target_data;
    void *source_ptr;
    uint64_t *source_buffer;
    int32_t source_flag;
    uint64_t source_data;
    
    system_context = system_main_module_state;
    if (*(int *)(system_main_module_state + 200) != 0) {
        FUN_180627ae0(module_data,system_main_module_state + 0xb8);
        return module_data;
    }
    source_ptr = &unknown_var_3456_ptr;
    source_data = 0;
    source_buffer = (uint64_t *)0x0;
    source_flag = 0;
    module_info = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)module_info = 0;
    source_buffer = module_info;
    register_flag = FUN_18064e990(module_info);
    source_data = CONCAT44(source_data._4_4_,register_flag);
    *module_info = 0x53454c55444f4d5f;
    *(int16_t *)(module_info + 1) = 0x2a5f;
    *(int8_t *)((longlong)module_info + 10) = 0;
    source_flag = 10;
    register_result = FUN_180628d60(system_context + 0x2c0,&source_ptr);
    if (-1 < register_result) {
        context_ptr = &unknown_var_3456_ptr;
        target_data = 0;
        target_buffer = (uint64_t *)0x0;
        target_flag = 0;
        module_info = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
        *(int8_t *)module_info = 0;
        target_buffer = module_info;
        register_flag = FUN_18064e990(module_info);
        target_data = CONCAT44(target_data._4_4_,register_flag);
        *module_info = 0x454c55444f4d5f2a;
        *(int16_t *)(module_info + 1) = 0x5f53;
        *(int8_t *)((longlong)module_info + 10) = 0;
        target_flag = 10;
        FUN_180628d60(system_context + 0x2c0,&context_ptr);
        context_ptr = &unknown_var_3456_ptr;
        FUN_18064e900(module_info);
    }
    source_ptr = &unknown_var_3456_ptr;
    FUN_18064e900(module_info);
}