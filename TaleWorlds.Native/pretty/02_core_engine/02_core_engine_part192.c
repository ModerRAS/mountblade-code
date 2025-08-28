#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part192.c - 13 个函数
// 核心引擎模块第192部分 - 线程管理、文件操作、图形设备初始化相关功能

// 全局变量声明
static const char* EMPTY_STRING = "";  // 原始代码中的 system_buffer_ptr
static void* NULL_HANDLE = (void*)0x0;  // 空句柄
static longlong GLOBAL_MUTEX_COUNTER = 0;  // 全局互斥锁计数器
static void* GLOBAL_ENGINE_CONTEXT = NULL;  // 全局引擎上下文
static void* GLOBAL_PERFORMANCE_MANAGER = NULL;  // 全局性能管理器

// 函数: 线程资源初始化和信号通知
// 原始函数名: FUN_1801749d0
// 功能: 初始化线程资源，设置线程状态，发送条件变量信号
void initialize_thread_resources_and_signal(void* context, ThreadContext* thread_ctx)
{
    ThreadInternalData* internal_data;
    ConditionVariable* cond_var;
    Mutex* thread_mutex;
    void* thread_event_data;
    PerformanceManager* perf_manager;
    uint thread_id;
    uint thread_priority;
    ulonglong timeout_value;
    
    // 初始化栈保护变量
    ulonglong stack_guard = 0xfffffffffffffffe;
    ulonglong security_cookie = GLOBAL_SECURITY_COOKIE ^ (ulonglong)&stack_guard;
    
    // 获取线程内部数据
    internal_data = thread_ctx->internal_data;
    thread_event_data = thread_ctx->event_data;
    
    // 设置线程状态为运行中
    thread_ctx->status = THREAD_STATUS_RUNNING;
    
    // 加锁操作
    ACQUIRE_GLOBAL_LOCK();
    *thread_event_data = THREAD_EVENT_READY;
    RELEASE_GLOBAL_LOCK();
    
    // 创建线程描述字符串
    StringHandle thread_desc = create_string_handle();
    char desc_buffer[256];
    desc_buffer[0] = '\0';
    
    // 设置线程名称和优先级
    thread_id = thread_ctx->thread_id;
    thread_priority = thread_ctx->priority;
    
    // 获取线程描述信息
    const char* thread_name = EMPTY_STRING;
    if (internal_data->thread_name != NULL) {
        thread_name = internal_data->thread_name;
    }
    
    // 格式化线程描述
    format_thread_description(&thread_desc, thread_name);
    
    // 设置线程参数
    timeout_value = thread_ctx->timeout;
    thread_priority = thread_ctx->priority_level;
    
    // 调用性能管理器注册线程
    perf_manager = get_performance_manager_from_context(GLOBAL_ENGINE_CONTEXT);
    if (perf_manager != NULL) {
        register_thread_with_performance_manager(perf_manager, &thread_desc);
    }
    
    // 发送条件变量信号
    cond_var = thread_ctx->condition_variable;
    int signal_result = signal_condition_variable(cond_var);
    if (signal_result != 0) {
        throw_thread_error(signal_result);
    }
    
    // 清理资源
    cleanup_string_handle(&thread_desc);
    cleanup_thread_event_data(&thread_event_data);
    
    // 执行栈保护检查
    execute_stack_protection_check(security_cookie ^ (ulonglong)&stack_guard);
}

// 函数: 文件句柄关闭和清理
// 原始函数名: FUN_180174c70
// 功能: 安全关闭文件句柄，清理文件操作相关资源
longlong close_file_handle_and_cleanup(void* context, FileContext* file_ctx)
{
    FileInternalData* file_data;
    Mutex* file_mutex;
    longlong file_position;
    longlong write_size;
    longlong write_offset;
    char write_success;
    int lock_result;
    
    // 获取文件内部数据
    file_data = file_ctx->internal_data;
    
    // 获取文件名
    const char* filename = EMPTY_STRING;
    if (file_data->filename != NULL) {
        filename = file_data->filename;
    }
    
    // 尝试写入缓冲数据
    write_success = flush_file_buffer(file_data->file_handle, filename, 
                                     file_ctx->buffer_size, 0x105, 0xfffffffffffffffe);
    
    if (write_success != '\0') {
        // 获取写入参数
        write_size = file_ctx->write_size;
        write_offset = file_ctx->write_offset;
        file_position = file_ctx->file_position;
        
        // 加锁进行文件操作
        lock_result = lock_mutex(file_mutex);
        if (lock_result != 0) {
            throw_thread_error(lock_result);
        }
        
        // 设置文件指针位置
        set_file_pointer_ex(file_data->file_handle, write_offset, &file_position, FILE_BEGIN);
        
        // 执行写入操作
        write_file_data(file_data->file_handle, file_position, (int)write_size);
        
        // 解锁
        lock_result = unlock_mutex(file_mutex);
        if (lock_result != 0) {
            throw_thread_error(lock_result);
        }
    }
    
    // 关闭文件句柄
    if (file_data->file_handle != INVALID_HANDLE_VALUE) {
        ACQUIRE_GLOBAL_LOCK();
        GLOBAL_MUTEX_COUNTER = GLOBAL_MUTEX_COUNTER - 1;
        RELEASE_GLOBAL_LOCK();
        
        close_handle(file_data->file_handle);
        file_data->file_handle = INVALID_HANDLE_VALUE;
    }
    
    return FILE_OPERATION_SUCCESS;
}

// 函数: 宽字符串转多字节字符串
// 原始函数名: FUN_180174d60
// 功能: 将宽字符串转换为多字节字符串并存储
void convert_wide_string_to_multibyte(void* context, const wchar_t* wide_string)
{
    char multibyte_buffer[256];
    StringHandle converted_string;
    size_t string_length;
    size_t buffer_size;
    uint allocation_flags;
    uint memory_size;
    
    // 初始化栈保护变量
    ulonglong stack_guard = 0xfffffffffffffffe;
    ulonglong security_cookie = GLOBAL_SECURITY_COOKIE ^ (ulonglong)&stack_guard;
    
    // 转换宽字符串为多字节字符串
    wcstombs(multibyte_buffer, wide_string, sizeof(multibyte_buffer));
    
    // 计算字符串长度
    string_length = strlen(multibyte_buffer);
    
    // 创建字符串句柄
    converted_string = create_string_handle();
    
    // 检查字符串长度是否有效
    if (string_length == (size_t)-1) {
        // 分配默认缓冲区
        buffer_size = allocate_string_buffer(GLOBAL_STRING_POOL, 0x80, 8, MEMORY_FLAG_THREAD_SAFE);
        memset(buffer_size + 0x14, 0, 0x6c);
    }
    
    // 计算需要的缓冲区大小
    memory_size = string_length + 1;
    if (memory_size < 0x10) {
        memory_size = 0x10;
    }
    
    // 分配内存并复制字符串
    char* string_buffer = (char*)allocate_memory(GLOBAL_STRING_POOL, memory_size, ALLOCATION_FLAG_STRING);
    *string_buffer = '\0';
    converted_string->buffer = string_buffer;
    allocation_flags = get_memory_allocation_flags(string_buffer);
    
    // 复制字符串内容
    memcpy(string_buffer, multibyte_buffer, memory_size);
}

// 函数: 文件上下文销毁
// 原始函数名: FUN_180174f70
// 功能: 销毁文件上下文，释放相关资源
void destroy_file_context(void* context, FileContext* file_ctx)
{
    if (file_ctx == NULL) {
        return;
    }
    
    // 销毁互斥锁
    destroy_mutex_in_situ();
    
    // 关闭文件句柄
    if (file_ctx->file_handle != INVALID_HANDLE_VALUE) {
        ACQUIRE_GLOBAL_LOCK();
        GLOBAL_MUTEX_COUNTER = GLOBAL_MUTEX_COUNTER - 1;
        RELEASE_GLOBAL_LOCK();
        
        close_handle(file_ctx->file_handle);
        file_ctx->file_handle = INVALID_HANDLE_VALUE;
    }
    
    // 清理文件上下文
    file_ctx->vtable = &FILE_VTABLE;
    if (file_ctx->buffer != NULL) {
        free_memory(file_ctx->buffer);
    }
    file_ctx->buffer = NULL;
    file_ctx->buffer_size = 0;
    
    // 最终清理
    file_ctx->vtable = &CLEANUP_VTABLE;
    free_memory(file_ctx);
}

// 函数: 内存分配器重置
// 原始函数名: FUN_180175020
// 功能: 重置内存分配器状态
MemoryAllocator* reset_memory_allocator(MemoryAllocator* allocator, ulonglong reset_flags, 
                                       void* context1, void* context2)
{
    allocator->vtable = &RESET_VTABLE1;
    allocator->vtable = &RESET_VTABLE2;
    
    if ((reset_flags & MEMORY_FLAG_RESET) != 0) {
        free_memory(allocator, sizeof(MemoryAllocator), context1, context2, 0xfffffffffffffffe);
    }
    
    return allocator;
}

// 函数: 日志记录函数
// 原始函数名: FUN_180175120
// 功能: 记录日志信息
void log_message(void* context, const wchar_t* message)
{
    char message_buffer[512];
    size_t message_length;
    
    // 初始化栈保护变量
    ulonglong stack_guard = GLOBAL_SECURITY_COOKIE ^ (ulonglong)&message_length;
    
    // 计算消息长度
    message_length = 0;
    while (message[message_length] != L'\0') {
        message_length++;
    }
    
    // 转换为多字节字符串
    wcstombs(message_buffer, message, message_length + 1);
    
    // 执行栈保护检查
    execute_stack_protection_check(stack_guard);
}

// 函数: 调试信息记录
// 原始函数名: FUN_180175180
// 功能: 记录调试信息到日志系统
void log_debug_info(void* context, const wchar_t* debug_info)
{
    char info_buffer[128];
    StringHandle log_message;
    char prefix_buffer[136];
    size_t info_length;
    uint prefix_length;
    
    // 初始化栈保护变量
    ulonglong stack_guard = 0xfffffffffffffffe;
    ulonglong security_cookie = GLOBAL_SECURITY_COOKIE ^ (ulonglong)&stack_guard;
    
    // 转换调试信息
    wcstombs(info_buffer, debug_info, sizeof(info_buffer));
    
    // 创建日志消息
    log_message = create_debug_log_handle();
    prefix_buffer[0] = '\0';
    prefix_length = 9;
    strcpy_s(prefix_buffer, sizeof(prefix_buffer), "[DEBUG] ");
    
    // 计算信息长度
    info_length = strlen(info_buffer);
    
    // 检查缓冲区大小
    if ((info_length > 0) && (prefix_length + info_length < 0x7f)) {
        memcpy(prefix_buffer + prefix_length, info_buffer, info_length + 1);
    }
    
    // 更新调试计数器
    GLOBAL_DEBUG_COUNTER = GLOBAL_DEBUG_COUNTER + 1;
    
    // 清理资源
    cleanup_debug_log_handle(&log_message);
    
    // 执行栈保护检查
    execute_stack_protection_check(security_cookie ^ (ulonglong)&stack_guard);
}

// 函数: 错误信息记录
// 原始函数名: FUN_1801752b0
// 功能: 记录错误信息到日志系统
void log_error_info(void* context, const wchar_t* error_info)
{
    char info_buffer[128];
    StringHandle log_message;
    char prefix_buffer[136];
    size_t info_length;
    uint prefix_length;
    
    // 初始化栈保护变量
    ulonglong stack_guard = 0xfffffffffffffffe;
    ulonglong security_cookie = GLOBAL_SECURITY_COOKIE ^ (ulonglong)&stack_guard;
    
    // 转换错误信息
    wcstombs(info_buffer, error_info, sizeof(info_buffer));
    
    // 创建日志消息
    log_message = create_error_log_handle();
    prefix_buffer[0] = '\0';
    prefix_length = 9;
    strcpy_s(prefix_buffer, sizeof(prefix_buffer), "[ERROR] ");
    
    // 计算信息长度
    info_length = strlen(info_buffer);
    
    // 检查缓冲区大小
    if ((info_length > 0) && (prefix_length + info_length < 0x7f)) {
        memcpy(prefix_buffer + prefix_length, info_buffer, info_length + 1);
    }
    
    // 清理资源
    cleanup_error_log_handle(&log_message);
    
    // 执行栈保护检查
    execute_stack_protection_check(security_cookie ^ (ulonglong)&stack_guard);
}

// 函数: 资源管理器清理
// 原始函数名: FUN_1801753d0
// 功能: 清理资源管理器及其管理的资源
ResourceManager* cleanup_resource_manager(ResourceManager* manager, uint cleanup_flags)
{
    ResourceHandle** resource_list;
    ResourceHandle* current_resource;
    uint resource_index;
    ulonglong cleanup_cookie;
    
    cleanup_cookie = 0xfffffffffffffffe;
    
    // 重置管理器虚表
    manager->vtable = &CLEANUP_VTABLE3;
    
    // 清理资源列表
    resource_index = 0;
    resource_list = manager->resource_handles;
    
    do {
        current_resource = *resource_list;
        *resource_list = NULL;
        
        if (current_resource != NULL) {
            // 调用资源清理函数
            ResourceCleanupFunc cleanup_func = current_resource->cleanup_function;
            cleanup_func();
        }
        
        resource_index++;
        resource_list++;
    } while (resource_index < 3);
    
    // 清理管理器数据
    manager->data_vtable = &EMPTY_VTABLE;
    if (manager->additional_data != NULL) {
        free_memory(manager->additional_data);
    }
    manager->additional_data = NULL;
    manager->data_size = 0;
    
    manager->data_vtable = &CLEANUP_VTABLE4;
    
    // 清理资源列表内存
    cleanup_memory_pool(manager->resource_handles, sizeof(ResourceHandle*) * 3, 
                       MEMORY_POOL_RESOURCE, cleanup_cookie);
    
    // 如果需要，释放管理器本身
    if ((cleanup_flags & CLEANUP_FLAG_FREE_MANAGER) != 0) {
        free_memory(manager, sizeof(ResourceManager));
    }
    
    return manager;
}

// 函数: 简单指针清零
// 原始函数名: FUN_1801754b0
// 功能: 将指针内容清零
void** clear_pointer(void** pointer)
{
    *pointer = NULL;
    return pointer;
}

// 函数: 图形渲染管线更新
// 原始函数名: FUN_180175500
// 功能: 更新图形渲染管线状态
void update_graphics_render_pipeline(void* render_context, void* frame_data)
{
    ulonglong frame_counter;
    ulonglong pipeline_index;
    GraphicsDevice* graphics_device;
    SwapChain* swap_chain;
    RenderTarget* render_target;
    PresentParameters present_params;
    void* performance_data;
    int present_result;
    
    // 获取帧计数器
    frame_counter = *(ulonglong*)(render_context + 0x40);
    pipeline_index = (frame_counter + 4) % 3;
    
    // 预处理渲染数据
    preprocess_render_data(render_context, frame_data);
    
    // 获取渲染目标
    void* pipeline_data = render_context + pipeline_index * 8;
    if (*(longlong*)(render_context + 0x28 + pipeline_index * 8) != 0) {
        // 获取图形设备
        graphics_device = get_graphics_device_from_context(GLOBAL_ENGINE_CONTEXT);
        
        // 获取交换链
        swap_chain = get_swap_chain_from_device(graphics_device);
        
        // 获取渲染目标
        render_target = get_render_target_from_swap_chain(swap_chain);
        
        // 设置渲染参数
        present_params.width = *(ushort*)(render_target + 0x32c);
        present_params.height = *(ushort*)(render_target + 0x32e);
        
        // 执行渲染操作
        present_result = execute_render_operation(graphics_device, render_target, 
                                                &present_params.width, &present_params.height,
                                                render_context + 8);
        
        if (present_result != 0) {
            // 记录渲染错误
            log_render_error(5, &RENDER_ERROR_MESSAGE);
        }
        
        // 清理渲染资源
        cleanup_render_target(render_target);
    }
    
    // 更新帧计数器
    *(longlong*)(render_context + 0x40) = *(longlong*)(render_context + 0x40) + 1;
}

// 函数: 性能监控更新
// 原始函数名: FUN_180175572
// 功能: 更新性能监控数据
void update_performance_monitoring(void* monitor_context)
{
    PerformanceManager* perf_manager;
    PerformanceData* perf_data;
    int update_result;
    void* perf_handle;
    
    // 获取性能管理器
    perf_manager = get_performance_manager_from_context(GLOBAL_ENGINE_CONTEXT);
    
    // 获取性能数据
    perf_data = get_performance_data();
    
    // 更新性能数据
    update_result = update_performance_metrics(perf_manager, perf_data);
    if (update_result < 0) {
        log_performance_error(update_result, &PERF_ERROR_MESSAGE);
    }
    
    // 执行性能分析
    update_result = analyze_performance_data(perf_manager, perf_handle);
    if (update_result != 0) {
        log_performance_analysis_error(5, &PERF_ANALYSIS_ERROR_MESSAGE);
    }
    
    // 清理性能数据
    cleanup_performance_data(perf_data);
    
    // 更新监控计数器
    update_monitor_counter();
}

// 函数: 资源加载优化
// 原始函数名: FUN_180175686
// 功能: 优化资源加载过程
void optimize_resource_loading(void* resource_context)
{
    ResourceOptimizationParams opt_params;
    
    // 设置优化参数
    opt_params.optimization_level = 1;
    opt_params.async_loading = 0;
    opt_params.cache_enabled = 0;
    opt_params.target_device = *(void**)(*(longlong**)(resource_context + 0x50) + 0x428);
    
    // 执行资源优化
    optimize_resource_loading_process(GLOBAL_ENGINE_CONTEXT,
                                   *(void**)(resource_context + 0x28 + opt_params.pipeline_index * 8),
                                   0, 0, 1);
    
    // 更新资源计数器
    update_resource_counter();
}

// 函数: 渲染目标配置
// 原始函数名: FUN_180175700
// 功能: 配置渲染目标和管线参数
void configure_render_targets(void* render_context, void* frame_data)
{
    ushort target_width;
    ushort target_height;
    uint target_format;
    uint target_flags;
    RenderTargetConfig target_config;
    void* perf_context;
    
    // 初始化栈保护变量
    ulonglong stack_guard = 0xfffffffffffffffe;
    ulonglong security_cookie = GLOBAL_SECURITY_COOKIE ^ (ulonglong)&stack_guard;
    
    // 检查性能数据是否可用
    if (*(longlong*)(frame_data + 0x99e0) != 0) {
        void* perf_manager = get_performance_manager_from_frame_data(frame_data);
        if (perf_manager != NULL) {
            // 获取目标配置参数
            target_format = 7;
            if (*(char*)(render_context + 0x58) != '\0') {
                target_format = 9;
            }
            
            target_width = *(ushort*)(perf_manager + 0x32c);
            target_height = *(ushort*)(perf_manager + 0x32e);
            
            // 检查是否需要重新配置
            RenderTarget** current_target = (RenderTarget**)(render_context + 0x28);
            if ((*current_target == NULL) || 
                ((*current_target)->width != target_width) || 
                ((*current_target)->height != target_height)) {
                
                uint target_index = 0;
                do {
                    // 配置渲染目标参数
                    target_config.sample_count = 1;
                    target_config.mip_levels = 0;
                    target_config.array_size = 0;
                    target_config.bind_flags = 0xffffffff;
                    target_config.misc_flags = 0;
                    
                    // 创建渲染目标描述
                    ulonglong target_desc = ((ulonglong)target_height << 16) | target_width;
                    target_config.format_flags = 0x100;
                    target_config.usage = CONCAT44(target_format, 1);
                    target_config.cpu_access = 2;
                    
                    // 创建渲染目标
                    RenderTarget* new_target = create_render_target(GLOBAL_STRING_POOL, 0x19, ALLOCATION_FLAG_RENDER_TARGET);
                    *(char*)new_target = '\0';
                    
                    // 设置目标名称
                    set_render_target_name(new_target, "render_target_");
                    
                    // 设置目标大小和格式
                    if (*(int*)(render_context + 0x70) > 0) {
                        resize_render_target(new_target, *(int*)(render_context + 0x70));
                    }
                    
                    // 添加到渲染管线
                    add_render_target_to_pipeline(render_context, new_target, &target_config);
                    
                    target_index++;
                } while (target_index < 3);
            }
        }
    }
    
    // 执行栈保护检查
    execute_stack_protection_check(security_cookie ^ (ulonglong)&stack_guard);
}

// 函数: 渲染管线清理
// 原始函数名: FUN_180175a30
// 功能: 清理渲染管线资源
void cleanup_render_pipeline(void* render_context)
{
    RenderTarget** render_targets;
    RenderTarget* current_target;
    uint target_index;
    
    target_index = 0;
    render_targets = (RenderTarget**)(render_context + 0x28);
    
    do {
        current_target = *render_targets;
        *render_targets = NULL;
        
        if (current_target != NULL) {
            // 调用目标清理函数
            RenderTargetCleanupFunc cleanup_func = current_target->cleanup_function;
            cleanup_func();
        }
        
        target_index++;
        render_targets++;
    } while (target_index < 3);
}

// 函数: 图形设备初始化
// 原始函数名: FUN_180175aa0
// 功能: 初始化DirectX 11图形设备
void initialize_directx11_device(GraphicsDeviceContext* device_context)
{
    GraphicsDeviceVTable* device_vtable;
    SwapChain* swap_chain;
    RenderContext* render_context;
    PerformanceManager* perf_manager;
    LogManager* log_manager;
    DirectX11DeviceOptions dx11_options;
    ContextCreationParameters context_params;
    int init_result;
    ulonglong context_budget;
    
    // 初始化栈保护变量
    ulonglong stack_guard = 0xfffffffffffffffe;
    ulonglong security_cookie = GLOBAL_SECURITY_COOKIE ^ (ulonglong)&stack_guard;
    
    // 设置设备上下文虚表
    device_context->vtable = &GRAPHICS_DEVICE_VTABLE;
    
    // 初始化互斥锁
    initialize_mutex_in_situ(&device_context->device_mutex, 2);
    
    // 设置设备参数
    device_context->device_type = DEVICE_TYPE_DIRECTX11;
    device_context->feature_level = D3D_FEATURE_LEVEL_11_0;
    device_context->flags = 0;
    device_context->adapter_index = 0;
    
    // 初始化渲染管线
    initialize_render_pipeline(&device_context->render_pipeline);
    
    // 获取性能管理器
    perf_manager = get_performance_manager();
    if (perf_manager != NULL) {
        register_device_with_performance_manager(perf_manager, device_context);
        set_performance_monitoring_enabled(perf_manager, 0);
    }
    
    // 设置设备标识
    device_context->device_id = 0;
    *(uint*)((longlong)device_context + 0x1ec) = 0;
    
    // 注册内存分配器
    register_memory_allocator(device_context);
    
    // 获取日志管理器
    log_manager = get_log_manager();
    if (log_manager != NULL) {
        register_device_with_log_manager(log_manager, device_context);
    }
    
    // 初始化Granite引擎
    init_result = initialize_granite_engine(0x1450);
    if (init_result != 0) {
        log_initialization_error(&GRANITE_INIT_ERROR, init_result);
    }
    
    // 设置DirectX 11设备选项
    initialize_directx11_options(&dx11_options);
    dx11_options.enable_debug = 1;
    dx11_options.enable_multithreading = 0;
    
    // 创建DirectX 11设备
    void* d3d_device = get_d3d_device_from_context(GLOBAL_ENGINE_CONTEXT);
    GraphicsDevice* graphics_device = create_directx11_device(d3d_device, device_context, &dx11_options);
    
    device_context->graphics_device = graphics_device;
    device_context->swap_chain_device = graphics_device;
    
    if (graphics_device == NULL) {
        log_device_creation_error(&DEVICE_CREATE_ERROR);
    }
    
    // 创建渲染上下文
    render_context = create_render_context(GLOBAL_STRING_POOL, sizeof(RenderContext), ALLOCATION_FLAG_RENDER_CONTEXT);
    render_context->device = graphics_device;
    
    // 设置上下文创建参数
    initialize_context_parameters(&context_params);
    context_params.device = device_context->graphics_device;
    context_params.flags = 0x80;
    device_context->render_context = 0;
    
    // 创建图形上下文
    init_result = create_graphics_context(&context_params, &device_context->render_context);
    render_context = (RenderContext*)device_context->render_context;
    
    if ((render_context == NULL) || (init_result != 0)) {
        log_context_creation_error(&CONTEXT_CREATE_ERROR, init_result);
        render_context = (RenderContext*)device_context->render_context;
    }
    
    // 设置上下文参数
    init_result = render_context->set_render_target(render_context, &DEFAULT_RENDER_TARGET);
    if (init_result != 0) {
        log_render_target_error(&RENDER_TARGET_ERROR, init_result);
    }
    
    // 设置上下文预算
    initialize_context_budget(&render_context->budget);
    render_context->budget = CONCAT44(render_context->budget._4_4_, 0x400000);
    render_context->set_context_budget(render_context, &render_context->budget);
    
    // 设置内存限制
    context_budget = 0xc0;
    if (*(int*)(GLOBAL_ENGINE_CONTEXT + 0x380) != 4) {
        uint memory_limit = 0x30;
        if (*(int*)(GLOBAL_ENGINE_CONTEXT + 0x380) == 3) {
            memory_limit = 0xc0;
        }
        context_budget = (ulonglong)memory_limit;
    }
    
    // 应用内存限制
    render_context->set_memory_limit(render_context, context_budget << 0x14, device_context + 0x1f);
    render_context->set_multithreading_mode(render_context, 2);
    
    device_context->frame_index = 0;
    *(uint*)((longlong)device_context + 0x1ec) = 0;
    
    // 执行栈保护检查
    execute_stack_protection_check(security_cookie ^ (ulonglong)&stack_guard);
}

// 函数: 图形设备重置
// 原始函数名: FUN_180175ee0
// 功能: 重置图形设备状态
GraphicsDevice* reset_graphics_device(GraphicsDevice* device, ulonglong reset_flags, 
                                     void* context1, void* context2)
{
    device->vtable = &RESET_DEVICE_VTABLE;
    
    if ((reset_flags & DEVICE_FLAG_RESET) != 0) {
        free_memory(device, sizeof(GraphicsDevice), context1, context2, 0xfffffffffffffffe);
    }
    
    return device;
}

// 函数: 渲染上下文重置
// 原始函数名: FUN_180175f20
// 功能: 重置渲染上下文
RenderContext* reset_render_context(RenderContext* context, uint reset_flags, 
                                    void* context1, void* context2)
{
    cleanup_render_pipeline(context + 1, context->pipeline_data, context1, context2, 0xfffffffffffffffe);
    context->vtable = &RESET_CONTEXT_VTABLE;
    
    if ((reset_flags & CONTEXT_FLAG_RESET) != 0) {
        free_memory(context, sizeof(RenderContext));
    }
    
    return context;
}

// 函数: 纹理加载
// 原始函数名: FUN_180175f80
// 功能: 加载纹理资源
longlong load_texture_resource(void* texture_manager, void* texture_data, 
                               void* context1, void* context2)
{
    int load_result;
    ulonglong texture_handle;
    TextureResource* texture_resource;
    longlong texture_index;
    void* texture_cache;
    
    // 获取纹理缓存
    texture_cache = get_texture_cache(GLOBAL_TEXTURE_MANAGER);
    texture_handle = create_texture_handle(texture_cache, texture_data, texture_data, 
                                          context1, context2, 0xfffffffffffffffe);
    
    // 尝试加载纹理
    load_result = load_texture_from_cache(texture_cache, texture_handle);
    
    // 检查是否需要创建新纹理
    if ((load_result < 0) || 
        (texture_cache = get_texture_cache_segment(GLOBAL_TEXTURE_MANAGER),
         (ulonglong)(get_texture_cache_end(GLOBAL_TEXTURE_MANAGER) - texture_cache >> 5) <= (ulonglong)(longlong)load_result)) {
        texture_index = create_new_texture_entry();
    } else {
        texture_index = (longlong)load_result * 0x20 + texture_cache;
    }
    
    // 设置纹理数据
    set_texture_data(texture_data, texture_index);
    
    // 格式化纹理名称
    int name_length = *(int*)(texture_data + 0x10) + 9;
    set_texture_name_length(texture_data, name_length);
    
    // 设置纹理名称
    char* name_buffer = (char*)((ulonglong)*(uint*)(texture_data + 0x10) + *(longlong*)(texture_data + 8));
    *name_buffer = 'T';
    *(name_buffer + 1) = 'e';
    *(name_buffer + 2) = 'x';
    *(name_buffer + 3) = 't';
    *(name_buffer + 4) = 'u';
    *(name_buffer + 5) = 'r';
    *(name_buffer + 6) = 'e';
    *(name_buffer + 7) = 's';
    *(name_buffer + 8) = '/';
    *(name_buffer + 9) = '\0';
    
    *(int*)(texture_data + 0x10) = name_length;
    
    return texture_data;
}

// 函数: 互斥锁操作
// 原始函数名: FUN_180176060
// 功能: 执行互斥锁保护的操作
void execute_mutex_protected_operation(void* operation_context)
{
    int lock_result;
    
    // 加锁
    lock_result = lock_mutex(operation_context + 0x100);
    if (lock_result != 0) {
        throw_thread_error(lock_result);
    }
    
    // 执行保护的操作
    execute_protected_function(operation_context);
    
    // 解锁
    lock_result = unlock_mutex(operation_context + 0x100);
    if (lock_result != 0) {
        throw_thread_error(lock_result);
    }
}