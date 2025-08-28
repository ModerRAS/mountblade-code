#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part069.c - 渲染系统高级初始化和资源管理模块
// 包含4个核心函数，涵盖渲染系统初始化、资源管理、状态清理、数据转换等高级渲染功能

// 常量定义
#define RENDERING_SYSTEM_MAX_CONTEXT_SIZE 0x1c58
#define RENDERING_SYSTEM_MAX_PRIORITY_LEVELS 5
#define RENDERING_SYSTEM_DEFAULT_TIMEOUT 9999.0f
#define RENDERING_SYSTEM_MAX_BUFFER_SIZE 0x560
#define RENDERING_SYSTEM_ALIGNMENT_SIZE 0x38
#define RENDERING_SYSTEM_MAX_ARRAY_SIZE 0x100

// 函数别名定义
#define rendering_system_initialize_context FUN_180306d80
#define rendering_system_free_memory FUN_180307050
#define rendering_system_cleanup_resources FUN_180307090
#define rendering_system_process_data FUN_1803073e0
#define rendering_system_transform_data FUN_1803076d0

// 全局变量别名定义
#define g_rendering_system_context_table memory_allocator_3832
#define g_rendering_system_context_vtable memory_allocator_3952
#define g_rendering_system_string_constants memory_allocator_3784
#define g_rendering_system_string_table memory_allocator_3800
#define g_rendering_system_memory_allocator system_main_module_state
#define g_rendering_system_texture_manager system_buffer_ptr
#define g_rendering_system_resource_manager system_memory_bc80
#define g_rendering_system_state_manager system_memory_bcb0
#define g_rendering_system_heap_base GET_SECURITY_COOKIE()
#define g_rendering_system_resource_array render_system_control_buffer
#define g_rendering_system_resource_end render_system_control_buffer
#define g_rendering_system_resource_count render_system_control_buffer
#define g_rendering_system_module_registry system_memory_pool_ptr
#define g_rendering_system_global_state SYSTEM_STATE_MANAGER
#define g_rendering_system_name_registry processed_var_6504

// 函数声明
void rendering_system_initialize_context(uint64_t *context, int context_id);
uint64_t rendering_system_free_memory(uint64_t memory_block, uint64_t free_flag);
void rendering_system_cleanup_resources(uint64_t *context, uint64_t param2, uint64_t param3, uint64_t param4);
void rendering_system_process_data(int64_t context, uint64_t param2, uint64_t param3, int8_t param4);
void rendering_system_transform_data(int64_t context, int64_t *transform_data, uint64_t *output1, uint64_t *output2, int64_t param5, float param6, float param7);

// 函数实现
void rendering_system_initialize_context(uint64_t *context, int context_id)
{
    int8_t result;
    int64_t temp_long;
    uint index1;
    uint index2;
    void *temp_ptr;
    int8_t stack_buffer1[32];
    uint64_t *stack_ptr1;
    uint64_t stack_value1;
    uint64_t *stack_ptr2;
    void *stack_ptr3;
    void *stack_ptr4;
    int32_t stack_value2;
    uint8_t stack_buffer2[32];
    void *stack_ptr5;
    int8_t *stack_ptr6;
    int32_t stack_value3;
    int8_t stack_buffer3[32];
    uint64_t stack_canary;
    int64_t temp_long2;
    
    // 初始化堆栈保护
    stack_value1 = 0xfffffffffffffffe;
    stack_canary = g_rendering_system_heap_base ^ (uint64_t)stack_buffer1;
    
    // 初始化上下文基础结构
    *context = &g_rendering_system_context_vtable;
    index2 = 0;
    context[1] = 0;
    context[2] = 0;
    context[3] = 0;
    *(int32_t *)(context + 4) = 3;
    
    // 设置上下文虚拟表
    *context = &g_rendering_system_context_table;
    context[0xd] = 0;
    context[0xe] = 0;
    
    // 初始化互斥锁保护区域
    LOCK();
    *(int32_t *)(context + 0xf) = 0;
    UNLOCK();
    
    // 初始化第一组资源缓冲区（0x100个元素）
    index1 = index2;
    do {
        context[(int64_t)(int)index1 + 0x10] = 0;
        LOCK();
        *(int8_t *)((int64_t)context + (int64_t)(int)index1 + 0x880) = 1;
        UNLOCK();
        index1 = index1 + 1;
    } while (index1 < RENDERING_SYSTEM_MAX_ARRAY_SIZE);
    
    // 初始化第二组资源缓冲区（0x100个元素）
    LOCK();
    *(int32_t *)(context + 0x130) = 0;
    UNLOCK();
    index1 = index2;
    do {
        context[(int64_t)(int)index1 + 0x131] = 0;
        LOCK();
        *(int8_t *)((int64_t)context + (int64_t)(int)index1 + 0x1188) = 1;
        UNLOCK();
        index1 = index1 + 1;
    } while (index1 < RENDERING_SYSTEM_MAX_ARRAY_SIZE);
    
    // 初始化第三组资源缓冲区（0x100个元素）
    LOCK();
    *(int32_t *)(context + 0x251) = 0;
    UNLOCK();
    do {
        context[(int64_t)(int)index2 + 0x252] = 0;
        LOCK();
        *(int8_t *)((int64_t)context + (int64_t)(int)index2 + 0x1a90) = 1;
        UNLOCK();
        index2 = index2 + 1;
    } while (index2 < RENDERING_SYSTEM_MAX_ARRAY_SIZE);
    
    // 初始化上下文状态字段
    context[0x372] = 0;
    context[0x373] = 0;
    context[0x374] = 0;
    *(int32_t *)(context + 0x375) = 3;
    
    // 初始化互斥锁
    stack_ptr1 = context + 0x376;
    stack_ptr2 = context;
    _Mtx_init_in_situ(stack_ptr1, 2);
    
    // 初始化资源管理器
    stack_ptr1 = context + 0x380;
    *stack_ptr1 = &g_rendering_system_state_manager;
    context[0x381] = 0;
    *(int32_t *)(context + 0x382) = 0;
    *stack_ptr1 = &g_rendering_system_resource_manager;
    context[0x381] = context + 899;
    *(int32_t *)(context + 0x382) = 0;
    *(int8_t *)(context + 899) = 0;
    *(uint64_t *)((int64_t)context + 0x1c3c) = 0;
    context[0x389] = 0;
    
    // 设置字符串处理参数
    stack_ptr5 = &g_rendering_system_resource_manager;
    stack_ptr6 = stack_buffer3;
    stack_buffer3[0] = 0;
    stack_value3 = 0x15;
    strcpy_s(stack_buffer3, 0x20, &g_rendering_system_string_table);
    
    // 调用字符串处理函数
    result = FUN_180051f00(g_rendering_system_memory_allocator, &stack_ptr5);
    *(int8_t *)(context + 0x38a) = result;
    
    // 处理渲染数据
    stack_ptr5 = &g_rendering_system_state_manager;
    rendering_system_process_data(context);
    
    // 设置上下文ID
    *(int *)(context + 0x387) = context_id;
    
    // 处理第二个字符串
    stack_ptr3 = &g_rendering_system_resource_manager;
    stack_ptr4 = stack_buffer2;
    stack_buffer2[0] = 0;
    stack_value2 = 0xc;
    strcpy_s(stack_buffer2, 0x20, &g_rendering_system_string_constants);
    *(int32_t *)(context + 0x382) = stack_value2;
    
    // 复制字符串数据
    temp_ptr = &g_rendering_system_texture_manager;
    if (stack_ptr4 != (void *)0x0) {
        temp_ptr = stack_ptr4;
    }
    strcpy_s(context[0x381], 0x20, temp_ptr);
    
    // 处理第三个字符串（名称注册表）
    stack_ptr3 = &g_rendering_system_state_manager;
    temp_long = -1;
    do {
        temp_long2 = temp_long;
        temp_long = temp_long2 + 1;
    } while (*(char *)(*(int64_t *)(&g_rendering_system_name_registry + (int64_t)context_id * 8) + temp_long) != '\0');
    
    // 安全复制字符串数据
    if ((0 < (int)temp_long) && (*(uint *)(context + 0x382) + (int)temp_long < 0x1f)) {
        memcpy((uint64_t)*(uint *)(context + 0x382) + context[0x381],
               *(int64_t *)(&g_rendering_system_name_registry + (int64_t)context_id * 8), (int64_t)((int)temp_long2 + 2));
    }
    
    // 清理堆栈保护
    *(uint64_t *)((int64_t)context + 0x1c3c) = 0;
    CoreSystemConfigManager(stack_canary ^ (uint64_t)stack_buffer1);
}

// 内存释放函数
uint64_t rendering_system_free_memory(uint64_t memory_block, uint64_t free_flag)
{
    rendering_system_cleanup_resources();
    if ((free_flag & 1) != 0) {
        free(memory_block, RENDERING_SYSTEM_MAX_CONTEXT_SIZE);
    }
    return memory_block;
}

// 资源清理函数
void rendering_system_cleanup_resources(uint64_t *context, uint64_t param2, uint64_t param3, uint64_t param4)
{
    int64_t *resource_ptr;
    int64_t resource_size;
    int64_t allocated_memory;
    uint64_t cleanup_flag;
    
    cleanup_flag = 0xfffffffffffffffe;
    *context = &g_rendering_system_context_table;
    
    // 调用初始化函数
    FUN_180306c30();
    
    // 计算资源大小
    resource_ptr = context + 0x372;
    resource_size = context[0x373] - *resource_ptr >> 3;
    if (resource_size == 0) {
        resource_size = 0;
    }
    else {
        // 分配内存用于资源清理
        resource_size = CoreEngine_MemoryAllocator(g_rendering_system_module_registry, resource_size * 8, *(uint *)(context + 0x375) & 0xff, param4, cleanup_flag);
    }
    
    // 移动资源数据
    allocated_memory = *resource_ptr;
    if (allocated_memory != context[0x373]) {
        memmove(resource_size, allocated_memory, context[0x373] - allocated_memory);
    }
    
    // 释放资源内存
    if (resource_size != 0) {
        CoreEngine_MemoryPoolManager(resource_size);
    }
    
    // 调用清理回调函数
    if ((int64_t *)context[0x389] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)context[0x389] + 0x38))();
    }
    
    // 重置资源管理器
    context[0x380] = &g_rendering_system_state_manager;
    _Mtx_destroy_in_situ();
    
    // 清理基础资源
    if (*resource_ptr == 0) {
        FUN_1800e7d00(context + 0x251);
        FUN_1800e7d00(context + 0x130);
        FUN_1800e7d00(context + 0xf);
        
        // 调用额外的清理回调
        if ((int64_t *)context[0xe] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)context[0xe] + 0x38))();
        }
        if ((int64_t *)context[0xd] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)context[0xd] + 0x38))();
        }
        
        // 重置上下文
        *context = &g_rendering_system_context_vtable;
        if (context[1] == 0) {
            return;
        }
        CoreEngine_MemoryPoolManager();
    }
    CoreEngine_MemoryPoolManager();
}

// 数据处理函数
void rendering_system_process_data(int64_t context, uint64_t param2, uint64_t param3, int8_t param4)
{
    int32_t *data_ptr1;
    int32_t *data_ptr2;
    int64_t allocated_memory;
    uint64_t temp_var1;
    uint64_t *temp_ptr1;
    uint64_t *temp_ptr2;
    int64_t temp_long1;
    uint64_t *temp_ptr3;
    int32_t *data_ptr3;
    int index;
    int64_t stack_var1;
    int32_t temp_var2;
    int64_t stack_long1;
    int64_t stack_long2;
    int64_t stack_long3;
    uint stack_uint1;
    int8_t stack_buffer1[32];
    int32_t stack_value1;
    int32_t stack_value2;
    int32_t stack_value3;
    int8_t stack_byte1;
    int8_t stack_byte2;
    uint64_t stack_value4;
    
    // 计算资源数组大小
    temp_long1 = ((int64_t)g_rendering_system_resource_count - (int64_t)g_rendering_system_resource_array) / RENDERING_SYSTEM_ALIGNMENT_SIZE;
    stack_uint1 = g_rendering_system_resource_count;
    
    // 分配内存用于数据处理
    if (temp_long1 == 0) {
        allocated_memory = 0;
    }
    else {
        allocated_memory = CoreEngine_MemoryAllocator(g_rendering_system_module_registry, temp_long1 * RENDERING_SYSTEM_ALIGNMENT_SIZE, 
                                       g_rendering_system_resource_count & 0xff, param4, 0, 0xfffffffffffffffe);
    }
    
    // 复制资源数据
    data_ptr2 = g_rendering_system_resource_end;
    stack_long3 = temp_long1 * RENDERING_SYSTEM_ALIGNMENT_SIZE + allocated_memory;
    stack_long2 = allocated_memory;
    
    if (g_rendering_system_resource_array != g_rendering_system_resource_end) {
        data_ptr3 = g_rendering_system_resource_array + 9;
        stack_long1 = allocated_memory;
        do {
            SystemCore_NetworkHandler0(allocated_memory, data_ptr3 + -9);
            *(int32_t *)(allocated_memory + 0x20) = data_ptr3[-1];
            *(int32_t *)(allocated_memory + 0x24) = *data_ptr3;
            *(int32_t *)(allocated_memory + 0x28) = data_ptr3[1];
            *(int8_t *)(allocated_memory + 0x2c) = *(int8_t *)(data_ptr3 + 2);
            *(int8_t *)(allocated_memory + 0x2d) = *(int8_t *)((int64_t)data_ptr3 + 9);
            *(uint64_t *)(allocated_memory + 0x30) = *(uint64_t *)(data_ptr3 + 3);
            allocated_memory = allocated_memory + RENDERING_SYSTEM_ALIGNMENT_SIZE;
            data_ptr1 = data_ptr3 + 5;
            data_ptr3 = data_ptr3 + 0xe;
        } while (data_ptr1 != data_ptr2);
    }
    
    // 处理资源数据
    temp_var2 = 1;
    index = 0;
    stack_long1 = allocated_memory;
    if ((allocated_memory - stack_long2) / RENDERING_SYSTEM_ALIGNMENT_SIZE != 0) {
        stack_var1 = 0;
        do {
            // 分配缓冲区内存
            temp_var1 = CoreSystem_LoggingManager0(g_rendering_system_module_registry, RENDERING_SYSTEM_MAX_BUFFER_SIZE, 8, 3, temp_var2);
            temp_long1 = stack_var1 + stack_long2;
            
            // 复制数据到缓冲区
            SystemCore_NetworkHandler0(stack_buffer1, temp_long1);
            stack_value1 = *(int32_t *)(temp_long1 + 0x20);
            stack_value2 = *(int32_t *)(temp_long1 + 0x24);
            stack_value3 = *(int32_t *)(temp_long1 + 0x28);
            stack_byte1 = *(int8_t *)(temp_long1 + 0x2c);
            stack_byte2 = *(int8_t *)(temp_long1 + 0x2d);
            stack_value4 = *(uint64_t *)(temp_long1 + 0x30);
            
            // 处理数据
            temp_var1 = FUN_1803a6710(temp_var1, stack_buffer1);
            temp_ptr3 = *(uint64_t **)(context + 0x1b98);
            
            // 存储处理结果
            if (temp_ptr3 < *(uint64_t **)(context + 0x1ba0)) {
                *(uint64_t **)(context + 0x1b98) = temp_ptr3 + 1;
                *temp_ptr3 = temp_var1;
            }
            else {
                // 处理缓冲区扩容
                temp_ptr2 = *(uint64_t **)(context + 0x1b90);
                temp_long1 = (int64_t)temp_ptr3 - (int64_t)temp_ptr2 >> 3;
                if (temp_long1 == 0) {
                    temp_long1 = 1;
LAB_1803075e0:
                    temp_ptr1 = (uint64_t *)
                             CoreEngine_MemoryAllocator(g_rendering_system_module_registry, temp_long1 * 8, *(int8_t *)(context + 0x1ba8));
                    temp_ptr3 = *(uint64_t **)(context + 0x1b98);
                    temp_ptr2 = *(uint64_t **)(context + 0x1b90);
                }
                else {
                    temp_long1 = temp_long1 * 2;
                    if (temp_long1 != 0) goto LAB_1803075e0;
                    temp_ptr1 = (uint64_t *)0x0;
                }
                
                // 移动数据到新缓冲区
                if (temp_ptr2 != temp_ptr3) {
                    memmove(temp_ptr1, temp_ptr2, (int64_t)temp_ptr3 - (int64_t)temp_ptr2);
                }
                *temp_ptr1 = temp_var1;
                
                // 更新缓冲区指针
                if (*(int64_t *)(context + 0x1b90) != 0) {
                    CoreEngine_MemoryPoolManager();
                }
                *(uint64_t **)(context + 0x1b90) = temp_ptr1;
                *(uint64_t **)(context + 0x1b98) = temp_ptr1 + 1;
                *(uint64_t **)(context + 0x1ba0) = temp_ptr1 + temp_long1;
            }
            
            index = index + 1;
            stack_var1 = stack_var1 + RENDERING_SYSTEM_ALIGNMENT_SIZE;
        } while ((uint64_t)(int64_t)index < (uint64_t)((stack_long1 - stack_long2) / RENDERING_SYSTEM_ALIGNMENT_SIZE));
    }
    
    // 清理处理数据
    FUN_180309520(&stack_long2);
    return;
}

// 数据转换函数
void rendering_system_transform_data(int64_t context, int64_t *transform_data, uint64_t *output1, uint64_t *output2,
                                   int64_t param5, float param6, float param7)
{
    uint64_t transform_matrix[16];
    float vector_length;
    float scale_factor;
    uint64_t temp_var1;
    uint64_t temp_var2;
    float temp_float1;
    float temp_float2;
    uint64_t temp_var3;
    uint64_t temp_var4;
    uint64_t temp_var5;
    uint64_t temp_var6;
    uint64_t temp_var7;
    uint64_t temp_var8;
    uint64_t temp_var9;
    uint64_t temp_var10;
    uint64_t temp_var11;
    uint64_t temp_var12;
    uint64_t temp_var13;
    uint64_t temp_var14;
    uint64_t temp_var15;
    uint64_t temp_var16;
    float temp_float3;
    uint64_t *temp_ptr1;
    int64_t temp_long1;
    uint temp_uint1;
    int64_t temp_long2;
    int64_t temp_long3;
    float temp_float4;
    float temp_float5;
    int32_t temp_var4;
    float temp_float6;
    int32_t stack_var1;
    int32_t stack_var2;
    int32_t stack_var3;
    int32_t stack_var4;
    uint64_t stack_value1;
    uint64_t stack_value2;
    float stack_float1;
    float stack_float2;
    float stack_float3;
    
    // 获取变换数据
    temp_ptr1 = (uint64_t *)(**(code **)(*transform_data + 0x218))(transform_data);
    temp_float3 = *(float *)(temp_ptr1 + 2);
    temp_float5 = *(float *)((int64_t)temp_ptr1 + 0x14);
    temp_float1 = *(float *)(temp_ptr1 + 3);
    temp_var4 = *(int32_t *)((int64_t)temp_ptr1 + 0x1c);
    temp_var5 = temp_ptr1[6];
    temp_var6 = temp_ptr1[7];
    temp_var1 = *temp_ptr1;
    temp_var2 = temp_ptr1[1];
    temp_var7 = temp_ptr1[4];
    temp_var8 = temp_ptr1[5];
    
    // 设置输出变换矩阵
    *output2 = temp_var5;
    output2[1] = temp_var6;
    vector_length = SQRT(temp_float3 * temp_float3 + temp_float5 * temp_float5 + temp_float1 * temp_float1);
    *(float *)((int64_t)output2 + 0xc) = vector_length * 1.5;
    
    // 处理变换数据
    if ((void *)*transform_data == &ui_system_data_1008_ptr) {
        temp_ptr1 = (uint64_t *)((int64_t)transform_data + 0x244);
    }
    else {
        temp_ptr1 = (uint64_t *)(**(code **)((void *)*transform_data + 0x220))(transform_data);
    }
    
    // 复制变换矩阵数据
    temp_var9 = *temp_ptr1;
    temp_var10 = temp_ptr1[1];
    temp_var11 = temp_ptr1[2];
    temp_var12 = temp_ptr1[3];
    temp_var13 = temp_ptr1[4];
    temp_var14 = temp_ptr1[5];
    temp_var15 = temp_ptr1[6];
    temp_var16 = temp_ptr1[7];
    
    // 设置输出1的变换矩阵
    output2[2] = temp_var9;
    output2[3] = temp_var10;
    output2[4] = temp_var11;
    output2[5] = temp_var12;
    output2[6] = temp_var13;
    output2[7] = temp_var14;
    output2[8] = temp_var15;
    output2[9] = temp_var16;
    
    // 设置输出1的基础数据
    *output1 = temp_var9;
    output1[1] = temp_var10;
    output1[8] = temp_var1;
    output1[9] = temp_var2;
    *(float *)(output1 + 10) = temp_float3;
    *(float *)((int64_t)output1 + 0x54) = temp_float5;
    *(float *)(output1 + 0xb) = temp_float1;
    *(int32_t *)((int64_t)output1 + 0x5c) = temp_var4;
    output1[2] = temp_var11;
    output1[3] = temp_var12;
    output1[4] = temp_var13;
    output1[5] = temp_var14;
    output1[0xc] = temp_var7;
    output1[0xd] = temp_var8;
    output1[6] = temp_var15;
    output1[7] = temp_var16;
    output1[0xe] = temp_var5;
    output1[0xf] = temp_var6;
    
    // 处理位置数据
    if ((((*(float *)(transform_data + 10) == 0.0) && (*(float *)((int64_t)transform_data + 0x54) == 0.0)) &&
        (*(float *)(transform_data + 0xb) == 0.0)) && (*(float *)((int64_t)transform_data + 0x5c) == 0.0)) {
        temp_long2 = 0x3f8000003f800000;
        temp_long3 = 0;
    }
    else {
        temp_long2 = transform_data[10];
        temp_long3 = transform_data[0xb];
    }
    output1[0x10] = temp_long2;
    output1[0x11] = temp_long3;
    
    // 处理材质数据
    temp_long2 = transform_data[0x2b];
    if (*(int64_t *)(temp_long2 + 0xb8) == 0) {
LAB_180307880:
        stack_var1 = 0;
        stack_var2 = 0;
        stack_var3 = 0;
        stack_var4 = 0;
    }
    else {
        temp_long1 = (int64_t)*(int *)(context + 0x1c38);
        temp_long3 = *(int64_t *)(*(int64_t *)(temp_long2 + 0xb8) + 0x280);
        if (*(char *)(temp_long3 + temp_long1 * 0x14) == '\0') goto LAB_180307880;
        temp_var1 = *(uint64_t *)(temp_long3 + 4 + temp_long1 * 0x14);
        temp_var2 = *(uint64_t *)(temp_long3 + 0xc + temp_long1 * 0x14);
        stack_var3 = (int32_t)temp_var1;
        stack_var4 = (int32_t)((uint64_t)temp_var1 >> 0x20);
        stack_var1 = (int32_t)temp_var2;
        stack_var2 = (int32_t)((uint64_t)temp_var2 >> 0x20);
    }
    
    // 设置材质参数
    *(int32_t *)(output1 + 0x12) = stack_var1;
    *(int32_t *)((int64_t)output1 + 0x94) = stack_var2;
    *(int32_t *)(output1 + 0x13) = stack_var3;
    *(int32_t *)((int64_t)output1 + 0x9c) = stack_var4;
    
    // 处理纹理数据
    if (((*(byte *)(transform_data + 0xe) & 2) == 0) || (*(int64_t *)(temp_long2 + 200) == 0)) {
LAB_1803078fd:
        stack_value1 = 0;
        stack_value2 = 0;
    }
    else {
        temp_long1 = (int64_t)*(int *)(context + 0x1c38);
        temp_long3 = *(int64_t *)(*(int64_t *)(temp_long2 + 200) + 0x280);
        if (*(char *)(temp_long3 + temp_long1 * 0x14) == '\0') goto LAB_1803078fd;
        stack_value2 = *(uint64_t *)(temp_long3 + 4 + temp_long1 * 0x14);
        stack_value1 = *(uint64_t *)(temp_long3 + 0xc + temp_long1 * 0x14);
    }
    
    // 设置纹理参数
    output1[0x16] = stack_value1;
    output1[0x17] = stack_value2;
    
    // 处理法线贴图数据
    if (((*(byte *)(transform_data + 0xe) & 4) != 0) && (*(int64_t *)(temp_long2 + 0xd8) != 0)) {
        temp_long1 = (int64_t)*(int *)(context + 0x1c38);
        temp_long3 = *(int64_t *)(*(int64_t *)(temp_long2 + 0xd8) + 0x280);
        if (*(char *)(temp_long3 + temp_long1 * 0x14) != '\0') {
            stack_value2 = *(uint64_t *)(temp_long3 + 4 + temp_long1 * 0x14);
            stack_value1 = *(uint64_t *)(temp_long3 + 0xc + temp_long1 * 0x14);
            goto LAB_180307986;
        }
    }
    stack_value1 = 0;
    stack_value2 = 0;
LAB_180307986:
    temp_var4 = 0x3f800000;
    output1[0x14] = stack_value1;
    output1[0x15] = stack_value2;
    
    // 处理缩放和UV数据
    temp_float1 = *(float *)(transform_data + 0x51);
    temp_float2 = *(float *)((int64_t)transform_data + 0x28c);
    temp_float3 = *(float *)(temp_long2 + 0x2ac);
    temp_float5 = *(float *)(temp_long2 + 0x2b0);
    temp_float4 = 1.0;
    
    // 设置UV变换参数
    *(float *)(output1 + 0x1a) = *(float *)((int64_t)transform_data + 0x284) * *(float *)(temp_long2 + 0x2a8);
    *(float *)((int64_t)output1 + 0xd4) = temp_float1 * temp_float3;
    *(float *)(output1 + 0x1b) = temp_float2 * temp_float5;
    *(int32_t *)((int64_t)output1 + 0xdc) = 0x7f7fffff;
    *(float *)((int64_t)output1 + 0xdc) = *(float *)(transform_data + 0x52) * *(float *)(temp_long2 + 0x2b4);
    
    // 计算透明度
    if (0.0 < *(float *)((int64_t)transform_data + 100)) {
        temp_float4 = 1.0 - *(float *)(transform_data + 6) / (*(float *)((int64_t)transform_data + 100) + 1e-09);
        if (0.0 <= temp_float4) {
            if (1.0 <= temp_float4) {
                temp_float4 = 1.0;
            }
        }
        else {
            temp_float4 = 0.0;
        }
    }
    
    // 处理透明度数据
    temp_float3 = *(float *)(transform_data + 0xc);
    if (temp_float3 == 0.0) {
        temp_float3 = *(float *)(temp_long2 + 0x298);
    }
    *(float *)(output1 + 0x1c) = temp_float3 * temp_float4;
    
    // 计算光照参数
    temp_long3 = g_rendering_system_global_state;
    stack_float2 = (float)((uint64_t)temp_var5 >> 0x20);
    stack_float1 = (float)temp_var5;
    stack_float3 = (float)temp_var6;
    temp_float5 = -(((*(float *)(param5 + 0x18) * stack_float2 + *(float *)(param5 + 8) * stack_float1 +
                   *(float *)(param5 + 0x28) * stack_float3 + *(float *)(param5 + 0x38)) * param7) /
                vector_length;
    temp_float3 = (float)(((uint)temp_float5 & 0x807fffff) + 0x3f800000);
    param6 = (((2.0 - temp_float3 * 0.33333334) * temp_float3 - 0.6666667) +
            (float)(int)(((int)temp_float5 >> 0x17 & 0xffU) - 0x80)) * param6;
    
    // 应用光照参数
    if (param6 <= 0.0) {
        param6 = 0.0;
    }
    param6 = param6 + 1.0;
    *(float *)((int64_t)output1 + 0xc4) = param6;
    if (*(int *)(temp_long3 + 0x700) == 1) {
        *(float *)((int64_t)output1 + 0xc4) = param6 + param6;
    }
    
    // 设置渲染状态
    *(int32_t *)(output1 + 0x19) = *(int32_t *)(temp_long2 + 0x278);
    *(int32_t *)((int64_t)output1 + 0xcc) = *(int32_t *)(temp_long2 + 0x268);
    *(int32_t *)(output1 + 0x18) = *(int32_t *)(temp_long2 + 0x270);
    *(int32_t *)((int64_t)output1 + 0xe4) = *(int32_t *)(temp_long2 + 0x274);
    
    // 处理变换数据更新
    if (transform_data[0x2d] != *(int64_t *)(transform_data[0x2b] + 0x140)) {
        FUN_1802f65b0(transform_data);
    }
    
    // 设置输出参数
    temp_long2 = transform_data[0x10];
    output1[0x1e] = transform_data[0xf];
    output1[0x1f] = temp_long2;
    if (*(char *)((int64_t)transform_data + 0x74) == '\0') {
        temp_var4 = 0;
    }
    *(int32_t *)((int64_t)output1 + 0xfc) = temp_var4;
    
    // 处理渲染标志
    temp_uint1 = *(uint *)(transform_data + 0xe);
    if ((temp_uint1 >> 0xb & 1) != 0) {
        temp_float3 = *(float *)((int64_t)output1 + 0xc4);
        if (3.0 <= temp_float3) {
            temp_float3 = 3.0;
        }
        *(float *)((int64_t)output1 + 0xc4) = temp_float3;
        temp_uint1 = *(uint *)(transform_data + 0xe);
    }
    *(uint *)(output1 + 0x1d) = temp_uint1;
    
    // 复制变换矩阵的其他部分
    temp_long2 = transform_data[0x12];
    output1[0x20] = transform_data[0x11];
    output1[0x21] = temp_long2;
    temp_long2 = transform_data[0x14];
    output1[0x22] = transform_data[0x13];
    output1[0x23] = temp_long2;
    temp_long2 = transform_data[0x16];
    output1[0x24] = transform_data[0x15];
    output1[0x25] = temp_long2;
    temp_long2 = transform_data[0x18];
    output1[0x26] = transform_data[0x17];
    output1[0x27] = temp_long2;
    temp_long2 = transform_data[0x1a];
    output1[0x28] = transform_data[0x19];
    output1[0x29] = temp_long2;
    temp_long2 = transform_data[0x1c];
    output1[0x2a] = transform_data[0x1b];
    output1[0x2b] = temp_long2;
    temp_long2 = transform_data[0x1e];
    output1[0x2c] = transform_data[0x1d];
    output1[0x2d] = temp_long2;
    temp_long2 = transform_data[0x20];
    output1[0x2e] = transform_data[0x1f];
    output1[0x2f] = temp_long2;
    temp_long2 = transform_data[0x22];
    output1[0x30] = transform_data[0x21];
    output1[0x31] = temp_long2;
    temp_long2 = transform_data[0x24];
    output1[0x32] = transform_data[0x23];
    output1[0x33] = temp_long2;
    temp_long2 = transform_data[0x26];
    output1[0x34] = transform_data[0x25];
    output1[0x35] = temp_long2;
    
    // 处理特殊渲染标志
    if (((temp_uint1 >> 0xc & 1) != 0) && (*(float *)(output1 + 0x24) == 0.0)) {
        *(uint *)(output1 + 0x1d) = temp_uint1 & 0xffffefff;
    }
    return;
}