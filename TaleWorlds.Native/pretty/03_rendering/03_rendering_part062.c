#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

/**
 * 渲染系统高级纹理处理和资源管理模块
 * 
 * 本文件包含15个核心函数，主要用于渲染系统的高级纹理处理、资源管理、
 * 数据缓冲区操作、内存管理、渲染状态控制、性能优化和资源管理等功能。
 * 
 * 主要功能：
 * - 渲染系统纹理处理和资源管理
 * - 数据缓冲区和内存管理
 * - 渲染状态控制和同步
 * - 纹理和材质处理
 * - 性能优化和资源管理
 * - 信号量控制和线程同步
 * - 渲染参数计算和优化
 * - 渲染数据批处理
 * - 渲染系统初始化和清理
 */

// 常量定义
#define RENDER_CONTEXT_OFFSET 0x8400
#define RENDER_TEXTURE_OFFSET 0x16c
#define RENDER_GLOBAL_DATA_OFFSET 0x224
#define RENDER_SECURITY_COOKIE 0xbf00a8
#define RENDER_STACK_SIZE 32
#define RENDER_FLAG_MASK 0x1f
#define RENDER_BUFFER_ALIGNMENT 0x10
#define RENDER_BATCH_SIZE 0x4000
#define RENDER_MAX_TEXTURES 0x100
#define RENDER_RESOURCE_POOL_SIZE 0x80

// 函数别名定义
#define rendering_texture_processor FUN_18029e3e0
#define rendering_texture_manager FUN_18029e450
#define rendering_resource_handler FUN_18029e500
#define rendering_texture_batch_processor FUN_18029e570
#define rendering_texture_optimizer FUN_18029e630
#define rendering_resource_allocator FUN_18029e6e0
#define rendering_data_processor FUN_18029e910
#define rendering_memory_manager FUN_18029ea30
#define rendering_buffer_handler FUN_18029ead0
#define rendering_resource_manager FUN_18029eb90
#define rendering_texture_loader FUN_18029ef00
#define rendering_data_synchronizer FUN_18029efd0
#define rendering_performance_optimizer FUN_18029f070
#define rendering_state_controller FUN_18029f560
#define rendering_batch_renderer FUN_18029f830
#define rendering_texture_renderer FUN_18029f9b0

/**
 * 渲染纹理处理器函数
 * 
 * 该函数负责渲染系统的高级纹理处理、资源管理和数据同步。
 * 主要功能包括：
 * 1. 纹理处理和资源管理
 * 2. 数据缓冲区和内存管理
 * 3. 渲染状态控制和同步
 * 4. 性能优化和资源管理
 * 
 * @param render_context 渲染上下文指针
 * @param texture_data 纹理数据指针
 * @param resource_data 资源数据指针
 */
void rendering_texture_processor(int64_t render_context, uint64_t texture_data, uint64_t resource_data)
{
    int64_t *context_ptr;
    code *render_function;
    uint64_t texture_handle;
    int64_t resource_handle;
    
    context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
    render_function = *(code **)(*context_ptr + 0x178);
    resource_handle = FUN_18023a940(texture_data);
    texture_handle = *(uint64_t *)(resource_handle + 8);
    resource_handle = FUN_18023a940(resource_data);
    
    // 执行渲染处理
    (*render_function)(context_ptr, *(uint64_t *)(resource_handle + 8), texture_handle);
    return;
}

/**
 * 渲染纹理管理器函数
 * 
 * 该函数负责渲染系统的纹理管理和资源分配。
 * 主要功能包括：
 * 1. 纹理资源管理
 * 2. 内存分配和释放
 * 3. 渲染参数计算
 * 4. 批处理操作
 * 
 * @param render_context 渲染上下文指针
 * @param texture_data 纹理数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param resource_data 资源数据指针
 * @param param4 参数4
 * @param param5 参数5
 * @param param6 参数6
 */
void rendering_texture_manager(int64_t render_context, uint64_t texture_data, int param1, int param2, int param3,
                              uint64_t resource_data, int param4, int param5, int param6)
{
    int64_t *context_ptr;
    code *render_function;
    uint64_t texture_handle;
    int64_t resource_handle;
    
    context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
    render_function = *(code **)(*context_ptr + 0x170);
    resource_handle = FUN_18023a940(resource_data);
    texture_handle = *(uint64_t *)(resource_handle + 8);
    resource_handle = FUN_18023a940();
    
    // 执行纹理管理操作
    (*render_function)(context_ptr, *(uint64_t *)(resource_handle + 8), param1 + param2 * param3, 0, 0, 0, texture_handle,
                      param5 * param6 + param4, 0);
    return;
}

/**
 * 渲染资源处理器函数
 * 
 * 该函数负责渲染系统的资源处理和状态管理。
 * 主要功能包括：
 * 1. 资源状态管理
 * 2. 纹理数据处理
 * 3. 渲染同步控制
 * 4. 内存管理
 * 
 * @param render_context 渲染上下文指针
 * @param resource1 资源1指针
 * @param resource2 资源2指针
 */
void rendering_resource_handler(int64_t render_context, int64_t resource1, int64_t resource2)
{
    int64_t *context_ptr;
    code *render_function;
    uint64_t texture_data;
    int64_t global_data;
    
    global_data = system_main_module_state;
    context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
    render_function = *(code **)(*context_ptr + 0x170);
    
    // 设置资源状态
    *(int32_t *)(resource2 + RENDER_TEXTURE_OFFSET) = *(int32_t *)(system_main_module_state + RENDER_GLOBAL_DATA_OFFSET);
    texture_data = *(uint64_t *)(resource2 + 0x10);
    *(int32_t *)(resource1 + RENDER_TEXTURE_OFFSET) = *(int32_t *)(global_data + RENDER_GLOBAL_DATA_OFFSET);
    
    // 执行资源处理
    (*render_function)(context_ptr, *(uint64_t *)(resource1 + 0x10), 0, 0, 0, 0, texture_data, 0, 0);
    return;
}

/**
 * 渲染纹理批处理器函数
 * 
 * 该函数负责渲染系统的纹理批处理和资源优化。
 * 主要功能包括：
 * 1. 纹理批处理
 * 2. 资源优化
 * 3. 内存管理
 * 4. 状态同步
 * 
 * @param render_context 渲染上下文指针
 * @param resource1 资源1指针
 * @param resource2 资源2指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 */
void rendering_texture_batch_processor(int64_t render_context, int64_t resource1, int64_t resource2, int param1, int32_t param2,
                                     int param3)
{
    int64_t *context_ptr;
    code *render_function;
    int64_t global_data;
    int8_t stack_buffer[RENDER_STACK_SIZE];
    int32_t stack_param1;
    int32_t stack_param2;
    uint64_t stack_param3;
    int32_t stack_param4;
    int *stack_ptr;
    int stack_array[4];
    int32_t stack_flag1;
    int32_t stack_flag2;
    uint64_t security_cookie;
    
    global_data = system_main_module_state;
    security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer;
    context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
    stack_array[3] = param3 + param1;
    stack_param3 = *(uint64_t *)(resource2 + 0x10);
    stack_array[1] = 0;
    stack_array[2] = 0;
    stack_flag1 = 1;
    stack_flag2 = 1;
    render_function = *(code **)(*context_ptr + 0x170);
    
    // 设置渲染状态
    *(int32_t *)(resource2 + RENDER_TEXTURE_OFFSET) = *(int32_t *)(system_main_module_state + RENDER_GLOBAL_DATA_OFFSET);
    *(int32_t *)(resource1 + RENDER_TEXTURE_OFFSET) = *(int32_t *)(global_data + RENDER_GLOBAL_DATA_OFFSET);
    stack_ptr = stack_array;
    stack_param4 = 0;
    stack_param2 = 0;
    stack_param1 = 0;
    stack_array[0] = param1;
    
    // 执行批处理操作
    (*render_function)(context_ptr, *(uint64_t *)(resource1 + 0x10), 0, param2);
    
    // 安全退出
    CoreSystemConfigManager(security_cookie ^ (uint64_t)stack_buffer);
}

/**
 * 渲染纹理优化器函数
 * 
 * 该函数负责渲染系统的纹理优化和性能提升。
 * 主要功能包括：
 * 1. 纹理优化
 * 2. 性能提升
 * 3. 资源管理
 * 4. 参数计算
 * 
 * @param render_context 渲染上下文指针
 * @param texture_data 纹理数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param resource_data 资源数据指针
 */
void rendering_texture_optimizer(int64_t render_context, int64_t texture_data, int param1, int param2, int32_t param3,
                                int64_t resource_data)
{
    byte texture_flag;
    uint texture_count;
    int64_t *context_ptr;
    code *render_function;
    uint64_t resource_handle;
    int64_t texture_handle;
    uint optimized_param;
    
    context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
    texture_flag = *(byte *)(texture_data + 0x335);
    texture_count = *(uint *)(texture_data + 0x35c);
    render_function = *(code **)(*context_ptr + 0x180);
    resource_handle = *(uint64_t *)(resource_data + 0x10);
    texture_handle = FUN_18023a940(texture_data);
    optimized_param = (uint)texture_flag;
    
    // 优化参数计算
    if ((int)texture_count < (int)(uint)texture_flag) {
        optimized_param = texture_count;
    }
    
    // 执行优化操作
    (*render_function)(context_ptr, *(uint64_t *)(texture_handle + 8), optimized_param * param2 + param1, 0, resource_handle, param3, 0);
    return;
}

/**
 * 渲染资源分配器函数
 * 
 * 该函数负责渲染系统的资源分配和内存管理。
 * 主要功能包括：
 * 1. 资源分配
 * 2. 内存管理
 * 3. 数据处理
 * 4. 状态控制
 * 
 * @param render_context 渲染上下文指针
 * @param resource_data 资源数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param resource_ptr 资源指针
 */
void rendering_resource_allocator(uint64_t render_context, int64_t resource_data, int32_t param1, int32_t param2,
                                  int64_t *resource_ptr)
{
    uint param_value1;
    uint param_value2;
    void *data_ptr;
    int8_t stack_buffer[RENDER_STACK_SIZE];
    uint stack_param1;
    int64_t *stack_ptr1;
    int32_t stack_param2;
    int32_t stack_param3;
    uint stack_param4;
    uint stack_param5;
    int32_t stack_param6;
    int32_t stack_param7;
    int32_t stack_param8;
    uint64_t stack_param9;
    int32_t stack_param10;
    int32_t stack_param11;
    int64_t *stack_ptr2;
    int32_t stack_param12;
    int8_t stack_param13;
    int64_t *stack_ptr3;
    uint64_t stack_param14;
    int64_t *stack_ptr4;
    uint64_t stack_param15;
    void *stack_ptr5;
    void *stack_ptr6;
    int32_t stack_param17;
    uint8_t stack_buffer2[16];
    void *stack_ptr7;
    int8_t *stack_ptr8;
    int32_t stack_param18;
    int8_t stack_buffer3[136];
    uint64_t security_cookie;
    
    stack_param15 = 0xfffffffffffffffe;
    security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer;
    param_value1 = (uint)(*(ushort *)(resource_data + 0x32c) >> ((byte)param2 & 0x1f));
    param_value2 = 1;
    if (1 < param_value1) {
        param_value2 = param_value1;
    }
    stack_param6 = 1;
    stack_param9 = 0;
    stack_param14 = 0;
    stack_ptr2 = (int64_t *)0x0;
    stack_param12 = 0xffffffff;
    stack_param13 = 0;
    _stack_param5 = CONCAT44(param_value2, param_value2);
    _stack_param11 = CONCAT44(*(int32_t *)(resource_data + 0x324), 1);
    stack_param10 = 2;
    stack_param11 = 0x100;
    stack_ptr4 = resource_ptr;
    
    // 初始化资源
    if (resource_ptr != (int64_t *)0x0) {
        (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    stack_ptr4 = (int64_t *)0x0;
    stack_ptr2 = resource_ptr;
    stack_ptr5 = &system_config_ptr;
    stack_ptr6 = stack_buffer2;
    stack_buffer2[0] = 0;
    stack_param17 = 9;
    strcpy_s(stack_buffer2, 0x10, &ui_system_data_1832_ptr);
    stack_ptr7 = &memory_allocator_3432_ptr;
    stack_ptr8 = stack_buffer3;
    stack_buffer3[0] = 0;
    stack_param18 = stack_param17;
    data_ptr = &system_buffer_ptr;
    if (stack_ptr6 != (void *)0x0) {
        data_ptr = stack_ptr6;
    }
    strcpy_s(stack_buffer3, 0x80, data_ptr);
    FUN_1800b2450();
    stack_ptr7 = &system_state_ptr;
    stack_ptr5 = &system_state_ptr;
    
    // 执行资源分配
    stack_param4 = (uint)*(byte *)((int64_t)stack_ptr3 + 0x335);
    if ((int)*(uint *)((int64_t)stack_ptr3 + 0x35c) < (int)(uint)*(byte *)((int64_t)stack_ptr3 + 0x335)) {
        stack_param4 = *(uint *)((int64_t)stack_ptr3 + 0x35c);
    }
    stack_param1 = (uint)*(byte *)(resource_data + 0x335);
    if ((int)*(uint *)(resource_data + 0x35c) < (int)(uint)*(byte *)(resource_data + 0x335)) {
        stack_param1 = *(uint *)(resource_data + 0x35c);
    }
    stack_param3 = 0;
    stack_param2 = 0;
    stack_ptr1 = stack_ptr3;
    rendering_texture_manager(render_context, resource_data, param2, param1);
    
    // 清理资源
    if (stack_ptr3 != (int64_t *)0x0) {
        (**(code **)(*stack_ptr3 + 0x38))();
    }
    if (stack_ptr2 != (int64_t *)0x0) {
        (**(code **)(*stack_ptr2 + 0x38))();
    }
    
    // 安全退出
    CoreSystemConfigManager(security_cookie ^ (uint64_t)stack_buffer);
}

/**
 * 渲染数据处理器函数
 * 
 * 该函数负责渲染系统的数据处理和优化。
 * 主要功能包括：
 * 1. 数据处理
 * 2. 性能优化
 * 3. 内存管理
 * 4. 资源分配
 * 
 * @param render_context 渲染上下文指针
 * @param texture_data 纹理数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param resource_data 资源数据指针
 */
void rendering_data_processor(int64_t render_context, int64_t texture_data, int param1, int param2, int param3,
                             int64_t resource_data)
{
    byte texture_flag;
    uint texture_count;
    uint64_t texture_handle;
    int64_t texture_ptr;
    uint param_value1;
    uint param_value2;
    uint64_t stack_param;
    int stack_counter;
    
    texture_flag = *(byte *)(texture_data + 0x335);
    texture_count = *(uint *)(texture_data + 0x35c);
    param_value1 = 1;
    if (1 < *(ushort *)(texture_data + 0x32e)) {
        param_value1 = (uint)*(ushort *)(texture_data + 0x32e);
    }
    texture_ptr = FUN_18023a940(texture_data);
    texture_handle = *(uint64_t *)(texture_ptr + 8);
    param_value2 = (uint)texture_flag;
    if ((int)texture_count < (int)(uint)texture_flag) {
        param_value2 = texture_count;
    }
    param1 = param_value2 * param2 + param1;
    
    // 执行数据处理
    (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x70))
            (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), texture_handle, param1, 4, 0, &stack_param);
    
    if (stack_counter == param3) {
        memcpy(stack_param, *(uint64_t *)(resource_data + 0x10), (int64_t)(int)(param_value1 * param3));
    }
    if (param_value1 != 0) {
        memcpy(stack_param, *(uint64_t *)(resource_data + 0x10), (int64_t)param3);
    }
    (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x78))
            (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), texture_handle, param1);
    return;
}

/**
 * 渲染内存管理器函数
 * 
 * 该函数负责渲染系统的内存管理和资源控制。
 * 主要功能包括：
 * 1. 内存管理
 * 2. 资源控制
 * 3. 数据处理
 * 4. 状态同步
 * 
 * @param render_context 渲染上下文指针
 * @param resource_data 资源数据指针
 * @param param1 参数1
 * @param texture_data 纹理数据指针
 * @param param2 参数2
 */
void rendering_memory_manager(int64_t render_context, int64_t resource_data, int param1, uint64_t texture_data, int param2)
{
    int64_t *context_ptr;
    code *render_function;
    int8_t stack_buffer[RENDER_STACK_SIZE];
    uint64_t stack_param1;
    int32_t stack_param2;
    int32_t stack_param3;
    int stack_array[4];
    int32_t stack_flag1;
    int32_t stack_flag2;
    uint64_t security_cookie;
    
    security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer;
    context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
    stack_array[3] = param2 + param1;
    stack_param3 = 0;
    stack_array[1] = 0;
    stack_array[2] = 0;
    stack_param2 = 0;
    stack_flag1 = 1;
    stack_flag2 = 1;
    render_function = *(code **)(*context_ptr + 0x180);
    *(int32_t *)(resource_data + RENDER_TEXTURE_OFFSET) = *(int32_t *)(system_main_module_state + RENDER_GLOBAL_DATA_OFFSET);
    stack_param1 = texture_data;
    stack_array[0] = param1;
    
    // 执行内存管理
    (*render_function)(context_ptr, *(uint64_t *)(resource_data + 0x10), 0, stack_array);
    
    // 安全退出
    CoreSystemConfigManager(security_cookie ^ (uint64_t)stack_buffer);
}

/**
 * 渲染缓冲区处理器函数
 * 
 * 该函数负责渲染系统的缓冲区处理和数据传输。
 * 主要功能包括：
 * 1. 缓冲区处理
 * 2. 数据传输
 * 3. 内存管理
 * 4. 资源控制
 * 
 * @param render_context 渲染上下文指针
 * @param resource_data 资源数据指针
 * @param texture_data 纹理数据指针
 * @param param1 参数1
 */
void rendering_buffer_handler(int64_t render_context, int64_t resource_data, uint64_t texture_data, int param1)
{
    int64_t *context_ptr;
    code *render_function;
    uint64_t stack_array[2];
    
    context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
    render_function = *(code **)(*context_ptr + 0x70);
    *(int32_t *)(resource_data + RENDER_TEXTURE_OFFSET) = *(int32_t *)(system_main_module_state + RENDER_GLOBAL_DATA_OFFSET);
    
    // 执行缓冲区处理
    (*render_function)(context_ptr, *(uint64_t *)(resource_data + 0x10), 0, 4, 0, stack_array);
    memcpy(stack_array[0], texture_data, (int64_t)param1);
}

/**
 * 渲染资源管理器函数
 * 
 * 该函数负责渲染系统的资源管理和优化。
 * 主要功能包括：
 * 1. 资源管理
 * 2. 性能优化
 * 3. 数据处理
 * 4. 内存管理
 * 
 * @param render_context 渲染上下文指针
 * @param resource_data 资源数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 */
void rendering_resource_manager(int64_t render_context, int64_t resource_data, int param1, int param2, uint64_t *param3,
                               int *param4)
{
    int64_t *context_ptr;
    code *render_function;
    uint param_value1;
    uint param_value2;
    int param_result;
    int64_t resource_handle;
    uint64_t texture_handle;
    void *data_ptr;
    uint param_value3;
    int8_t stack_buffer1[RENDER_STACK_SIZE];
    int32_t stack_param1;
    uint64_t stack_param2;
    uint64_t stack_param3;
    int stack_param4;
    uint64_t stack_param5;
    uint64_t stack_param6;
    int stack_param7;
    uint stack_param8;
    uint stack_param9;
    int32_t stack_param10;
    int32_t stack_param11;
    int32_t stack_param12;
    uint64_t stack_param13;
    int32_t stack_param14;
    int32_t stack_param15;
    int64_t *stack_ptr1;
    int32_t stack_param16;
    int8_t stack_param17;
    int64_t *stack_ptr2;
    int64_t stack_param18;
    uint64_t *stack_ptr3;
    uint64_t stack_array[2];
    uint64_t stack_param19;
    void *stack_ptr4;
    void *stack_ptr5;
    int32_t stack_param20;
    uint8_t stack_buffer2[32];
    void *stack_ptr6;
    int8_t *stack_ptr7;
    int32_t stack_param21;
    int8_t stack_buffer3[136];
    uint64_t security_cookie;
    
    stack_param19 = 0xfffffffffffffffe;
    security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer1;
    stack_ptr3 = param3;
    stack_param18 = render_context;
    
    // 检查资源状态
    if (*(char *)(resource_data + 900) == '\0') {
        FUN_18023ab60(resource_data, resource_data, *(int32_t *)(resource_data + 0x1e8));
    }
    
    param_value1 = (uint)(*(ushort *)(resource_data + 0x32c) >> ((byte)param2 & 0x1f));
    param_value3 = 1;
    if (1 < param_value1) {
        param_value3 = param_value1;
    }
    param_value2 = (uint)(*(ushort *)(resource_data + 0x32e) >> ((byte)param2 & 0x1f));
    param_value1 = 1;
    if (1 < param_value2) {
        param_value1 = param_value2;
    }
    stack_param10 = 1;
    stack_param13 = 0;
    stack_param6 = 0;
    stack_ptr1 = (int64_t *)0x0;
    stack_param16 = 0xffffffff;
    stack_param17 = 0;
    _stack_param8 = CONCAT44(param_value1, param_value3);
    _stack_param15 = CONCAT44(*(int32_t *)(resource_data + 0x324), 1);
    stack_param14 = 2;
    stack_param15 = 0x100;
    stack_ptr5 = &processed_var_672_ptr;
    stack_ptr4 = stack_buffer2;
    stack_buffer2[0] = 0;
    stack_param20 = 0xf;
    strcpy_s(stack_buffer2, 0x20, &ui_system_data_1920_ptr);
    stack_ptr6 = &memory_allocator_3432_ptr;
    stack_ptr7 = stack_buffer3;
    stack_buffer3[0] = 0;
    stack_param21 = stack_param20;
    data_ptr = &system_buffer_ptr;
    if (stack_ptr4 != (void *)0x0) {
        data_ptr = stack_ptr4;
    }
    strcpy_s(stack_buffer3, 0x80, data_ptr);
    FUN_1800b2450();
    stack_ptr6 = &system_state_ptr;
    stack_ptr5 = &system_state_ptr;
    resource_handle = FUN_18023a940(stack_ptr2);
    stack_param6 = *(uint64_t *)(resource_handle + 8);
    param_value2 = (uint)*(byte *)(resource_data + 0x335);
    if ((int)*(uint *)(resource_data + 0x35c) < (int)(uint)*(byte *)(resource_data + 0x335)) {
        param_value2 = *(uint *)(resource_data + 0x35c);
    }
    stack_param7 = param1 * param_value2 + param2;
    context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
    render_function = *(code **)(*context_ptr + 0x170);
    resource_handle = FUN_18023a940();
    stack_param3 = *(uint64_t *)(resource_handle + 8);
    stack_param5 = 0;
    stack_param4 = stack_param7;
    stack_param2 = (uint64_t *)((uint64_t)stack_param2._4_4_ << 0x20);
    stack_param1 = 0;
    
    // 执行资源管理
    (*render_function)(context_ptr, stack_param6, 0, 0);
    stack_param2 = stack_array;
    stack_param1 = 0;
    param_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x70))
                    (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), stack_param6, 0, 1);
    if (param_result < 0) {
        FUN_180220810(param_result, &ui_system_data_1936_ptr);
    }
    else {
        param_result = func_0x000180225d90(*(int32_t *)(resource_data + 0x324));
        param_result = param_result * param_value1 * param_value3;
        texture_handle = CoreSystem_LoggingManager0(system_memory_pool_ptr, param_result, 0x10, 3);
        if (param4 != (int *)0x0) {
            *param4 = param_result;
        }
        param_result = func_0x000180225d90(*(int32_t *)(resource_data + 0x324));
        if (param_value1 != 0) {
            memcpy(texture_handle, stack_array[0], (int64_t)(int)(param_result * param_value3));
        }
        (**(code **)(**(int64_t **)(stack_param18 + RENDER_CONTEXT_OFFSET) + 0x78))
                  (*(int64_t **)(stack_param18 + RENDER_CONTEXT_OFFSET), stack_param6, 0);
        *stack_ptr3 = texture_handle;
    }
    
    // 清理资源
    if (stack_ptr2 != (int64_t *)0x0) {
        (**(code **)(*stack_ptr2 + 0x38))();
    }
    if (stack_ptr1 != (int64_t *)0x0) {
        (**(code **)(*stack_ptr1 + 0x38))();
    }
    
    // 安全退出
    CoreSystemConfigManager(security_cookie ^ (uint64_t)stack_buffer1);
}

/**
 * 渲染纹理加载器函数
 * 
 * 该函数负责渲染系统的纹理加载和资源管理。
 * 主要功能包括：
 * 1. 纹理加载
 * 2. 资源管理
 * 3. 内存管理
 * 4. 状态控制
 * 
 * @param render_context 渲染上下文指针
 * @param texture_data 纹理数据指针
 */
void rendering_texture_loader(int64_t render_context, int64_t texture_data)
{
    int64_t *context_ptr;
    int64_t *resource_ptr;
    code *render_function;
    int64_t texture_handle;
    int8_t stack_buffer1[RENDER_STACK_SIZE];
    int8_t stack_buffer2[8];
    int32_t stack_param;
    uint64_t security_cookie;
    
    security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer1;
    texture_handle = FUN_18023a940(texture_data);
    context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
    resource_ptr = *(int64_t **)(texture_handle + 8);
    render_function = *(code **)(*context_ptr + 0x1b0);
    texture_handle = FUN_18023a940(texture_data);
    
    // 执行纹理加载
    (*render_function)(context_ptr, *(uint64_t *)(texture_handle + 0x10));
    (**(code **)(*resource_ptr + 0x50))(resource_ptr, stack_buffer2);
    *(int32_t *)(texture_data + 0x35c) = stack_param;
    
    // 安全退出
    CoreSystemConfigManager(security_cookie ^ (uint64_t)stack_buffer1);
}

/**
 * 渲染数据同步器函数
 * 
 * 该函数负责渲染系统的数据同步和状态管理。
 * 主要功能包括：
 * 1. 数据同步
 * 2. 状态管理
 * 3. 资源控制
 * 4. 内存管理
 * 
 * @param render_context 渲染上下文指针
 * @param data_ptr 数据指针
 */
uint64_t rendering_data_synchronizer(int64_t render_context, uint64_t *data_ptr)
{
    int sync_result;
    uint64_t stack_data;
    
    if (*(char *)((int64_t)data_ptr + 0xc) != '\0') {
        sync_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                          (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *data_ptr, &stack_data, 8, 0);
        while (sync_result != 0) {
            Sleep(1);
            sync_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                            (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *data_ptr, &stack_data, 8, 0);
        }
        return stack_data;
    }
    return 0xffffffffffffffff;
}

/**
 * 渲染性能优化器函数
 * 
 * 该函数负责渲染系统的性能优化和资源管理。
 * 主要功能包括：
 * 1. 性能优化
 * 2. 资源管理
 * 3. 数据处理
 * 4. 状态控制
 * 
 * @param render_context 渲染上下文指针
 * @param resource_data 资源数据指针
 */
void rendering_performance_optimizer(int64_t render_context, int64_t resource_data)
{
    short performance_flag;
    int optimization_result;
    int64_t resource_handle;
    int64_t *context_ptr;
    void *data_ptr1;
    void *data_ptr2;
    float performance_value1;
    float performance_value2;
    int8_t stack_buffer1[RENDER_STACK_SIZE];
    int32_t stack_param1;
    float stack_param2;
    int32_t stack_param3;
    int64_t stack_param4;
    int64_t stack_param5;
    uint64_t stack_param6;
    int64_t stack_param7;
    int stack_param8;
    void *stack_ptr1;
    int8_t *stack_ptr2;
    int32_t stack_param9;
    int8_t stack_buffer2[264];
    int8_t stack_buffer3[40];
    int64_t stack_param10;
    int64_t stack_param11;
    int64_t stack_param12;
    void *stack_ptr3;
    int8_t *stack_ptr4;
    int32_t stack_param13;
    int8_t stack_buffer4[264];
    void *stack_ptr5;
    int8_t *stack_ptr6;
    int32_t stack_param14;
    int8_t stack_buffer5[264];
    uint64_t security_cookie;
    
    stack_param6 = 0xfffffffffffffffe;
    security_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer1;
    stack_param1 = 0;
    optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                          (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_data + 0x68), &stack_param7,
                           0x10);
    while (optimization_result != 0) {
        Sleep(1);
        stack_param1 = 0;
        optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                              (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_data + 0x68), &stack_param7,
                               0x10);
    }
    stack_param5 = 0;
    stack_param1 = 0;
    optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                          (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_data + 0x70), &stack_param5, 8);
    while (optimization_result != 0) {
        Sleep(1);
        stack_param1 = 0;
        optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                              (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_data + 0x70), &stack_param5,
                               8);
    }
    stack_param4 = 0;
    stack_param1 = 0;
    optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                          (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_data + 0x78), &stack_param4, 8);
    while (optimization_result != 0) {
        Sleep(1);
        stack_param1 = 0;
        optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                              (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_data + 0x78), &stack_param4,
                               8);
    }
    
    // 处理资源数据
    if (*(int64_t *)(resource_data + 0x88) != 0) {
        stack_param1 = 0;
        optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                              (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(int64_t *)(resource_data + 0x88), stack_buffer3,
                               0x58);
        while (optimization_result != 0) {
            Sleep(1);
            stack_param1 = 0;
            optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                                (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_data + 0x88),
                                 stack_buffer3, 0x58);
        }
        stack_ptr3 = &rendering_buffer_2008_ptr;
        stack_ptr4 = stack_buffer4;
        stack_buffer4[0] = 0;
        stack_param13 = *(int32_t *)(*(int64_t *)(resource_data + 0x58) + 0x30);
        data_ptr2 = *(void **)(*(int64_t *)(resource_data + 0x58) + 0x28);
        data_ptr1 = &system_buffer_ptr;
        if (data_ptr2 != (void *)0x0) {
            data_ptr1 = data_ptr2;
        }
        strcpy_s(stack_buffer4, 0x100, data_ptr1);
        resource_handle = FUN_18029fcf0(render_context + 0x8208, &stack_ptr3);
        *(int64_t *)(resource_handle + 8) = *(int64_t *)(resource_handle + 8) + stack_param12;
        stack_ptr3 = &system_state_ptr;
        stack_ptr5 = &rendering_buffer_2008_ptr;
        stack_ptr6 = stack_buffer5;
        stack_buffer5[0] = 0;
        stack_param14 = *(int32_t *)(*(int64_t *)(resource_data + 0x58) + 0x30);
        data_ptr2 = *(void **)(*(int64_t *)(resource_data + 0x58) + 0x28);
        data_ptr1 = &system_buffer_ptr;
        if (data_ptr2 != (void *)0x0) {
            data_ptr1 = data_ptr2;
        }
        strcpy_s(stack_buffer5, 0x100, data_ptr1);
        resource_handle = FUN_18029fcf0(render_context + 0x8208, &stack_ptr5);
        *(int64_t *)(resource_handle + 0x18) = *(int64_t *)(resource_handle + 0x18) + stack_param11;
        stack_ptr5 = &system_state_ptr;
        stack_ptr1 = &rendering_buffer_2008_ptr;
        stack_ptr2 = stack_buffer2;
        stack_buffer2[0] = 0;
        stack_param9 = *(int32_t *)(*(int64_t *)(resource_data + 0x58) + 0x30);
        data_ptr2 = *(void **)(*(int64_t *)(resource_data + 0x58) + 0x28);
        data_ptr1 = &system_buffer_ptr;
        if (data_ptr2 != (void *)0x0) {
            data_ptr1 = data_ptr2;
        }
        strcpy_s(stack_buffer2, 0x100, data_ptr1);
        resource_handle = FUN_18029fcf0(render_context + 0x8208, &stack_ptr1);
        *(int64_t *)(resource_handle + 0x10) = *(int64_t *)(resource_handle + 0x10) + stack_param10;
        stack_ptr1 = &system_state_ptr;
    }
    
    // 处理性能数据
    if (*(int64_t *)(resource_data + 0x80) != 0) {
        stack_param1 = 0;
        optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                              (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(int64_t *)(resource_data + 0x80), &stack_param2, 8);
        while (optimization_result != 0) {
            Sleep(1);
            stack_param1 = 0;
            optimization_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xe8))
                                (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_data + 0x80),
                                 &stack_param2, 8);
        }
        resource_handle = CONCAT44(stack_param3, stack_param2);
        stack_ptr1 = &rendering_buffer_2008_ptr;
        stack_ptr2 = stack_buffer2;
        stack_buffer2[0] = 0;
        stack_param9 = *(int32_t *)(resource_data + 0x10);
        data_ptr1 = &system_buffer_ptr;
        if (*(void **)(resource_data + 8) != (void *)0x0) {
            data_ptr1 = *(void **)(resource_data + 8);
        }
        strcpy_s(stack_buffer2, 0x100, data_ptr1);
        context_ptr = (int64_t *)FUN_18029fcf0(render_context + 0x8208, &stack_ptr1);
        *context_ptr = *context_ptr + resource_handle;
        stack_ptr1 = &system_state_ptr;
    }
    
    // 性能优化计算
    if (stack_param8 == 0) {
        performance_value2 = (float)(stack_param4 - stack_param5);
        if (stack_param4 - stack_param5 < 0) {
            performance_value2 = performance_value2 + 1.8446744e+19;
        }
        performance_value1 = (float)stack_param7;
        if (stack_param7 < 0) {
            performance_value1 = performance_value1 + 1.8446744e+19;
        }
        stack_param2 = performance_value2 / performance_value1;
        performance_flag = _fdtest(&stack_param2);
        resource_handle = *(int64_t *)(resource_data + 0x58);
        if (performance_flag != 2) {
            *(double *)(resource_handle + 0x40) = (double)(performance_value2 / performance_value1);
            goto LAB_18029f52c;
        }
    }
    else {
        resource_handle = *(int64_t *)(resource_data + 0x58);
    }
    *(uint64_t *)(resource_handle + 0x40) = 0;
LAB_18029f52c:
    // 安全退出
    CoreSystemConfigManager(security_cookie ^ (uint64_t)stack_buffer1);
}

/**
 * 渲染状态控制器函数
 * 
 * 该函数负责渲染系统的状态控制和资源管理。
 * 主要功能包括：
 * 1. 状态控制
 * 2. 资源管理
 * 3. 数据处理
 * 4. 内存管理
 * 
 * @param render_context 渲染上下文指针
 * @param resource_ptr 资源指针
 * @param param1 参数1
 * @param param2 参数2
 */
void rendering_state_controller(int64_t render_context, uint64_t *resource_ptr, char param1, char param2)
{
    int *int_ptr;
    uint64_t resource_handle1;
    uint64_t resource_handle2;
    uint64_t resource_value1;
    uint64_t resource_value2;
    uint64_t resource_value3;
    uint64_t resource_value4;
    uint64_t resource_value5;
    uint64_t resource_value6;
    uint64_t resource_value7;
    uint64_t resource_value8;
    
    int_ptr = (int *)*resource_ptr;
    resource_value1 = 0xffffffffffffffff;
    if (int_ptr == (int *)0x0) {
        resource_value5 = 0xffffffffffffffff;
    }
    else {
        resource_value5 = (uint64_t)*int_ptr;
    }
    if ((int *)resource_ptr[3] == (int *)0x0) {
        resource_value6 = 0xffffffffffffffff;
    }
    else {
        resource_value6 = (uint64_t)*(int *)resource_ptr[3];
    }
    if ((int *)resource_ptr[4] == (int *)0x0) {
        resource_value3 = 0xffffffffffffffff;
    }
    else {
        resource_value3 = (uint64_t)*(int *)resource_ptr[4];
    }
    if ((int *)resource_ptr[5] == (int *)0x0) {
        resource_value4 = 0xffffffffffffffff;
    }
    else {
        resource_value4 = (uint64_t)*(int *)resource_ptr[5];
    }
    if ((int *)resource_ptr[1] != (int *)0x0) {
        resource_value1 = (uint64_t)*(int *)resource_ptr[1];
    }
    if (param1 != '\0') {
        resource_value5 = resource_value5 | 0x1000000000000;
        resource_value6 = resource_value6 | 0x1000000000000;
        resource_value3 = resource_value3 | 0x1000000000000;
        resource_value4 = resource_value4 | 0x1000000000000;
        resource_value1 = resource_value1 | 0x1000000000000;
    }
    resource_handle2 = 0;
    if (*(uint64_t *)(render_context + 0x8278) != resource_value5) {
        resource_handle1 = resource_handle2;
        if (int_ptr != (int *)0x0) {
            resource_handle1 = *(uint64_t *)(int_ptr + 6);
        }
        (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x58))
                  (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), resource_handle1, 0, 0);
        *(uint64_t *)(render_context + 0x8278) = resource_value5;
    }
    if (*(uint64_t *)(render_context + 0x8280) != resource_value6) {
        resource_handle1 = resource_handle2;
        if (resource_ptr[3] != 0) {
            resource_handle1 = *(uint64_t *)(resource_ptr[3] + 0x18);
        }
        (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x1e0))
                  (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), resource_handle1, 0, 0);
        *(uint64_t *)(render_context + 0x8280) = resource_value6;
    }
    if (*(uint64_t *)(render_context + 0x8288) != resource_value3) {
        resource_handle1 = resource_handle2;
        if (resource_ptr[4] != 0) {
            resource_handle1 = *(uint64_t *)(resource_ptr[4] + 0x18);
        }
        (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x200))
                  (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), resource_handle1, 0, 0);
        *(uint64_t *)(render_context + 0x8288) = resource_value3;
    }
    if (*(uint64_t *)(render_context + 0x8290) != resource_value4) {
        if (resource_ptr[5] != 0) {
            resource_handle2 = *(uint64_t *)(resource_ptr[5] + 0x18);
        }
        (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0xb8))
                  (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), resource_handle2, 0, 0);
        *(uint64_t *)(render_context + 0x8290) = resource_value4;
    }
    if (param2 == '\0') {
        if (*(uint64_t *)(render_context + 0x8298) != resource_value1) {
            (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x48))
                      (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_ptr[1] + 0x18), 0, 0);
            *(uint64_t *)(render_context + 0x8298) = resource_value1;
        }
    }
    else if (*(uint64_t *)(render_context + 0x8298) != 0xfffffffffffffffe) {
        (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x48))(*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), 0, 0, 0);
        *(uint64_t *)(render_context + 0x8298) = 0xfffffffffffffffe;
    }
    return;
}

/**
 * 渲染批处理器函数
 * 
 * 该函数负责渲染系统的批处理和优化。
 * 主要功能包括：
 * 1. 批处理
 * 2. 性能优化
 * 3. 资源管理
 * 4. 数据处理
 * 
 * @param render_context 渲染上下文指针
 * @param param1 参数1
 * @param param2 参数2
 */
void rendering_batch_renderer(int64_t render_context, uint param1, uint param2)
{
    uint64_t *data_ptr1;
    int32_t *data_ptr2;
    int64_t resource_handle;
    int64_t *context_ptr;
    code *render_function;
    uint64_t resource_value;
    uint param_value;
    int32_t param_data1;
    int32_t param_data2;
    int32_t param_data3;
    uint64_t param_data4;
    int render_result;
    int64_t resource_ptr;
    uint64_t resource_size;
    int64_t resource_offset;
    uint64_t resource_count;
    uint64_t *resource_array[2];
    
    resource_size = (uint64_t)param1;
    resource_count = (uint64_t)param2;
    resource_offset = *(int64_t *)(system_message_buffer + 0x1c90);
    *(int32_t *)(resource_offset + RENDER_TEXTURE_OFFSET) = *(int32_t *)(system_main_module_state + RENDER_GLOBAL_DATA_OFFSET);
    render_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x70))
                     (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_offset + 0x10), 0, 4, 0,
                      resource_array);
    if (render_result < 0) {
        FUN_180220810(render_result, &ui_system_data_1768_ptr);
    }
    param_value = param1 >> 0xe;
    resource_offset = (int64_t)*(int *)(system_parameter_buffer + 0x1538) * 0x488 + system_parameter_buffer + 0x1a18;
    if (param_value != param1 + param2 >> 0xe) {
        if (param2 != 0) {
            do {
                render_result = (int)resource_size;
                resource_value = resource_size >> 0xe;
                resource_size = (uint64_t)(render_result + 1);
                resource_handle = *(int64_t *)(resource_offset + 8 + resource_value * 8);
                resource_ptr = (uint64_t)(uint)(render_result + (int)resource_value * -RENDER_BATCH_SIZE) * 0x40;
                param_data4 = ((uint64_t *)(resource_handle + resource_ptr))[1];
                *resource_array[0] = *(uint64_t *)(resource_handle + resource_ptr);
                resource_array[0][1] = param_data4;
                data_ptr1 = (uint64_t *)(resource_handle + 0x10 + resource_ptr);
                param_data4 = data_ptr1[1];
                resource_array[0][2] = *data_ptr1;
                resource_array[0][3] = param_data4;
                data_ptr2 = (int32_t *)(resource_handle + 0x20 + resource_ptr);
                param_data1 = data_ptr2[1];
                param_data2 = data_ptr2[2];
                param_data3 = data_ptr2[3];
                *(int32_t *)(resource_array[0] + 4) = *data_ptr2;
                *(int32_t *)((int64_t)resource_array[0] + 0x24) = param_data1;
                *(int32_t *)(resource_array[0] + 5) = param_data2;
                *(int32_t *)((int64_t)resource_array[0] + 0x2c) = param_data3;
                data_ptr1 = (uint64_t *)(resource_handle + 0x30 + resource_ptr);
                param_data4 = data_ptr1[1];
                resource_array[0][6] = *data_ptr1;
                resource_array[0][7] = param_data4;
                resource_count = resource_count - 1;
                resource_array[0] = resource_array[0] + 8;
            } while (resource_count != 0);
        }
        context_ptr = *(int64_t **)(render_context + RENDER_CONTEXT_OFFSET);
        resource_offset = *(int64_t *)(system_message_buffer + 0x1c90);
        render_function = *(code **)(*context_ptr + 0x78);
        *(int32_t *)(resource_offset + RENDER_TEXTURE_OFFSET) = *(int32_t *)(system_main_module_state + RENDER_GLOBAL_DATA_OFFSET);
        (*render_function)(context_ptr, *(uint64_t *)(resource_offset + 0x10), 0, render_function);
        return;
    }
    memcpy(resource_array[0],
           *(int64_t *)(resource_offset + 8 + (uint64_t)param_value * 8) +
           (uint64_t)(param1 + param_value * -RENDER_BATCH_SIZE) * 0x40, resource_count << 6);
}

/**
 * 渲染纹理渲染器函数
 * 
 * 该函数负责渲染系统的纹理渲染和处理。
 * 主要功能包括：
 * 1. 纹理渲染
 * 2. 数据处理
 * 3. 内存管理
 * 4. 资源控制
 * 
 * @param render_context 渲染上下文指针
 * @param texture_data 纹理数据指针
 * @param param1 参数1
 */
void rendering_texture_renderer(int64_t render_context, uint64_t texture_data, int param1)
{
    int64_t resource_handle;
    int render_result;
    uint64_t resource_array[2];
    
    resource_handle = *(int64_t *)(system_message_buffer + 0x1c90);
    *(int32_t *)(resource_handle + RENDER_TEXTURE_OFFSET) = *(int32_t *)(system_main_module_state + RENDER_GLOBAL_DATA_OFFSET);
    render_result = (**(code **)(**(int64_t **)(render_context + RENDER_CONTEXT_OFFSET) + 0x70))
                    (*(int64_t **)(render_context + RENDER_CONTEXT_OFFSET), *(uint64_t *)(resource_handle + 0x10), 0, 4, 0, resource_array);
    if (render_result < 0) {
        FUN_180220810(render_result, &ui_system_data_1768_ptr);
    }
    memcpy(resource_array[0], texture_data, (int64_t)param1 << 5);
}