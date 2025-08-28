#include "ultra_high_freq_fun_definitions.h"
#include "SystemAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"

// 03_rendering_part030.c - 渲染系统高级对象管理模块
// 包含6个函数：渲染对象高级管理器、渲染对象查找器、渲染对象处理器、渲染对象初始化器等

// 全局常量定义
#define RENDERING_OBJECT_DEFAULT_PTR 0x18098bc73          // 渲染对象默认指针
#define RENDERING_MEMORY_CONTEXT 0x180c8ed18              // 渲染内存上下文
#define RENDERING_GLOBAL_DATA_1 0x180c86930               // 渲染全局数据1
#define RENDERING_INTERFACE_PTR 0x180277350               // 渲染接口指针
#define RENDERING_STRING_CONSTANT_1 0x1809fcc28           // 渲染字符串常量1
#define RENDERING_STRING_CONSTANT_2 0x18098bcb0           // 渲染字符串常量2
#define RENDERING_DATA_STRUCTURE_1 0x180a3c3e0            // 渲染数据结构1
#define RENDERING_STACK_GUARD 0x180bf00a8                // 渲染堆栈保护
#define RENDERING_OBJECT_SIGNATURE 0x73656d5f6174656d     // 渲染对象签名 "temat_"

// 函数别名定义
#define rendering_object_advanced_manager FUN_180282110    // 渲染对象高级管理器
#define rendering_object_finder FUN_1802828a0             // 渲染对象查找器
#define rendering_object_processor FUN_1802829c0          // 渲染对象处理器
#define rendering_object_initializer FUN_180282be0        // 渲染对象初始化器
#define rendering_object_data_handler FUN_180282d80       // 渲染对象数据处理器
#define rendering_object_batch_processor FUN_180282e00    // 渲染对象批处理器

// 函数声明
uint64_t rendering_object_finder(int64_t *render_context, int64_t object_id);
void rendering_object_processor(int64_t process_context, int64_t *object_data);
void rendering_object_initializer(int64_t init_context, int64_t *object_data, uint64_t param_3, uint64_t param_4);
uint64_t * rendering_object_data_handler(uint64_t param_1, uint64_t *param_2, uint64_t param_3, uint64_t param_4);
void rendering_object_batch_processor(int64_t batch_context, int64_t data_stream);

/**
 * 渲染对象高级管理器
 * 
 * 该函数是渲染系统的核心管理组件，负责处理复杂的渲染对象生命周期管理、
 * 内存分配、对象创建和销毁等高级功能。支持多级指针管理和复杂的对象关系处理。
 * 
 * @param render_context 渲染上下文指针数组（多级指针结构）
 * @param object_manager 对象管理器指针数组（多级指针结构）
 * 
 * 处理流程：
 * 1. 初始化渲染上下文和对象管理器
 * 2. 处理对象数组的内存分配和初始化
 * 3. 遍历和处理现有对象
 * 4. 执行对象查找和创建操作
 * 5. 管理对象生命周期和资源清理
 * 6. 更新渲染状态和计数器
 * 7. 执行最终的资源释放操作
 */
void rendering_object_advanced_manager(int64_t ******render_context, int64_t *******object_manager)
{
    int64_t *****current_object_array;
    int64_t *****start_object_array;
    int64_t ****object_sub_array;
    int64_t ***object_element;
    int32_t render_status;
    int64_t *******manager_ptr;
    int64_t object_count;
    int64_t *******temp_manager;
    uint64_t memory_flag;
    int64_t **object_ptr;
    int64_t ******object_array_ptr;
    void *data_ptr;
    int64_t ***temp_element;
    int64_t *****temp_object_array;
    int64_t **temp_ptr;
    int64_t *******process_manager;
    int iteration_count;
    int64_t **search_ptr;
    int64_t search_offset;
    uint64_t search_limit;
    int64_t *target_object;
    int64_t object_difference;
    int32_t object_flags;
    int32_t extra_status;
    int32_t extra_status_2;
    int64_t *******stack_manager_1;
    int64_t *******stack_manager_2;
    int64_t *******stack_manager_3;
    int64_t stack_offset;
    int64_t *******stack_manager_4;
    int stack_counter;
    int64_t *******stack_manager_5;
    int64_t **stack_object_ptr;
    int64_t *******stack_manager_6;
    int64_t *******stack_manager_7;
    int64_t *******stack_manager_8;
    int64_t *******stack_manager_9;
    int64_t *******stack_manager_10;
    int64_t *******stack_manager_11;
    uint stack_flags;
    uint64_t stack_memory;
    int64_t *******stack_manager_12;
    
    // 初始化内存标志和管理器指针
    stack_memory = 0xfffffffffffffffe;
    temp_manager = (int64_t *******)render_context[6][4];
    object_array_ptr = (int64_t ******)&RENDERING_OBJECT_DEFAULT_PTR;
    if (temp_manager[3] != (int64_t ******)0x0) {
        object_array_ptr = temp_manager[3];
    }
    stack_manager_1 = object_manager;
    stack_manager_3 = temp_manager;
    
    // 执行渲染初始化操作
    (*(code *)render_context[0x10][2])(render_context + 0x10, object_array_ptr);
    *(int32_t *)(render_context + 0xd) = *(int32_t *)(temp_manager + 1);
    render_status = (*(code *)render_context[0x23][2])(render_context + 0x23);
    *(int32_t *)(render_context[0x79] + 5) = *(int32_t *)(temp_manager + 0xe);
    
    // 检查并处理渲染状态
    if (((temp_manager[6] != (int64_t ******)0x0) || (temp_manager[7] != (int64_t ******)0x0)) &&
       (object_count = FUN_180255f80(render_context[6]), render_status = extra_status, object_count != 0)) {
        render_status = (*(code *)render_context[0x23][2])(render_context + 0x23);
    }
    
    // 计算对象数量并分配内存
    object_count = (int64_t)render_context[8] - (int64_t)render_context[7] >> 4;
    stack_flags = *(uint *)(render_context + 10);
    if (object_count == 0) {
        temp_manager = (int64_t *******)0x0;
    }
    else {
        temp_manager = (int64_t *******)CoreMemoryPoolAllocator(RENDERING_MEMORY_CONTEXT, object_count << 4, stack_flags & 0xff);
        render_status = extra_status_2;
    }
    
    // 初始化对象数组指针
    stack_manager_12 = temp_manager + object_count * 2;
    current_object_array = render_context[8];
    start_object_array = render_context[7];
    process_manager = temp_manager;
    stack_manager_11 = temp_manager;
    stack_manager_10 = temp_manager;
    
    // 遍历并处理对象数组
    for (temp_object_array = start_object_array; temp_object_array != current_object_array; temp_object_array = temp_object_array + 2) {
        object_array_ptr = (int64_t ******)*temp_object_array;
        *process_manager = object_array_ptr;
        stack_manager_1 = process_manager;
        if (object_array_ptr != (int64_t ******)0x0) {
            render_status = (*(code *)(*object_array_ptr)[5])();
        }
        *(int32_t *)((int64_t)temp_object_array + (int64_t)temp_manager + (8 - (int64_t)start_object_array)) =
             *(int32_t *)(temp_object_array + 1);
        process_manager = process_manager + 2;
    }
    
    stack_manager_10 = process_manager;
    
    // 处理特殊渲染状态
    if ((*(char *)((int64_t)render_context + 0x322) != '\0') && (*(char *)render_context[6][0x11][1] == '\0')) {
        iteration_count = 0;
        search_limit = (int64_t)process_manager - (int64_t)temp_manager >> 4;
        temp_manager = temp_manager;
        if (search_limit != 0) {
            do {
                stack_manager_2 = (int64_t *******)&stack_manager_1;
                stack_manager_1 = (int64_t *******)*temp_manager;
                if (stack_manager_1 != (int64_t *******)0x0) {
                    render_status = (*(code *)(*stack_manager_1)[5])();
                }
                render_status = FUN_1800b55b0(render_status, &stack_manager_1);
                iteration_count = iteration_count + 1;
                temp_manager = temp_manager + 2;
            } while ((uint64_t)(int64_t)iteration_count < search_limit);
        }
    }
    
    // 执行渲染清理操作
    FUN_180284500(render_context + 7);
    *(int32_t *)(render_context + 0xb) = 0;
    current_object_array = render_context[5];
    
    // 处理渲染对象引用
    if ((current_object_array != (int64_t *****)0x0) &&
       (*(short *)(current_object_array + 0x56) = *(short *)(current_object_array + 0x56) + 1,
       current_object_array[0x2d] != (int64_t ****)0x0)) {
        func_0x0001802eeba0();
    }
    
    // 计算对象偏移量
    object_count = SUB168(SEXT816(-0x4de9bd37a6f4de9b) *
                 SEXT816((int64_t)stack_manager_3[9] - (int64_t)stack_manager_3[8]), 8) +
          ((int64_t)stack_manager_3[9] - (int64_t)stack_manager_3[8]);
    object_difference = (int64_t)(int)((int64_t)process_manager - (int64_t)temp_manager >> 4);
    object_count = (int64_t)((int)((uint64_t)object_count >> 8) - (int)(object_count >> 0x3f));
    
    // 处理对象查找和创建
    if (0 < object_count) {
        stack_offset = 0;
        temp_manager = stack_manager_3;
        do {
            search_ptr = (int64_t **)0x0;
            target_object = (int64_t *)((int64_t)temp_manager[8] + stack_offset);
            if ((char)target_object[0x2a] != '\0') {
                object_ptr = search_ptr;
                temp_manager = temp_manager;
                temp_ptr = (int64_t **)0xffffffffffffffff;
                if (0 < object_difference) {
                    do {
                        if (((*temp_manager)[0x17] == (int64_t *****)*target_object) &&
                           (temp_ptr = object_ptr, (*temp_manager)[0x18] == (int64_t *****)target_object[1])) break;
                        object_ptr = (int64_t **)((int64_t)object_ptr + 1);
                        temp_manager = temp_manager + 2;
                        temp_ptr = (int64_t **)0xffffffffffffffff;
                    } while ((int64_t)object_ptr < object_difference);
                }
                stack_manager_2 = (int64_t *******)0x0;
                if (temp_ptr == (int64_t **)0xffffffffffffffff) {
                    // 创建新的渲染对象
                    memory_flag = CoreMemoryPoolReallocator(RENDERING_MEMORY_CONTEXT, 0x300, 0x10);
                    temp_manager = (int64_t *******)FUN_180075030(memory_flag, 0, 1);
                    if (temp_manager != (int64_t *******)0x0) {
                        stack_manager_5 = temp_manager;
                        (*(code *)(*temp_manager)[5])(temp_manager);
                    }
                    stack_manager_5 = (int64_t *******)0x0;
                    data_ptr = &RENDERING_OBJECT_DEFAULT_PTR;
                    if ((void *)target_object[3] != (void *)0x0) {
                        data_ptr = (void *)target_object[3];
                    }
                    stack_manager_2 = temp_manager;
                    (*(code *)temp_manager[2][2])(temp_manager + 2, data_ptr);
                    render_status = *(int32_t *)((int64_t)target_object + 4);
                    search_offset = target_object[1];
                    object_flags = *(int32_t *)((int64_t)target_object + 0xc);
                    *(int *)(temp_manager + 0x17) = (int)*target_object;
                    *(int32_t *)((int64_t)temp_manager + 0xbc) = render_status;
                    *(int *)(temp_manager + 0x18) = (int)search_offset;
                    *(int32_t *)((int64_t)temp_manager + 0xc4) = object_flags;
                    
                    // 处理渲染上下文
                    if (*(char *)((int64_t)render_context + 0x322) == '\0') {
                        iteration_count = 0;
                        search_offset = 0;
                        object_sub_array = render_context[6][0x16];
                        object_element = object_sub_array[7];
                        temp_element = object_element;
                        if ((int64_t)object_sub_array[8] - (int64_t)object_element >> 4 != 0) {
                            do {
                                if (((*temp_element)[0x17] == (int64_t *)*target_object) &&
                                   ((*temp_element)[0x18] == (int64_t *)target_object[1])) {
                                    search_ptr = object_element[search_offset * 2];
                                    break;
                                }
                                iteration_count = iteration_count + 1;
                                search_offset = search_offset + 1;
                                temp_element = temp_element + 2;
                            } while ((uint64_t)(int64_t)iteration_count <
                                     (uint64_t)((int64_t)object_sub_array[8] - (int64_t)object_element >> 4));
                        }
                        stack_object_ptr = search_ptr;
                        if (search_ptr != (int64_t **)0x0) {
                            (*(code *)(*search_ptr)[5])(search_ptr);
                        }
                        FUN_180075990(temp_manager, &stack_object_ptr);
                        if (search_ptr != (int64_t **)0x0) {
                            (*(code *)(*search_ptr)[7])(search_ptr);
                        }
                    }
                }
                else {
                    temp_manager = (int64_t *******)temp_manager[(int64_t)temp_ptr * 2];
                    if (temp_manager != (int64_t *******)0x0) {
                        stack_manager_7 = temp_manager;
                        (*(code *)(*temp_manager)[5])(temp_manager);
                    }
                    stack_manager_7 = (int64_t *******)0x0;
                    stack_manager_2 = temp_manager;
                    SystemInitializer(temp_manager);
                }
                
                // 设置对象属性并执行初始化
                temp_manager[0x15] = (int64_t ******)render_context[6];
                search_offset = RENDERING_GLOBAL_DATA_1;
                if ((*(char *)((int64_t)render_context + 0x322) != '\0') && (*(char *)render_context[6][0x11][1] == '\0')) {
                    iteration_count = (*(code *)(*temp_manager)[0xc])(temp_manager);
                    *(int8_t *)((int64_t)temp_manager + 0xb2) = 1;
                    FUN_1802abe00((int64_t)iteration_count * 0x98 + search_offset + 8, temp_manager);
                }
                FUN_18007bbb0(temp_manager, 0, target_object);
                stack_manager_9 = (int64_t *******)&stack_manager_1;
                stack_manager_1 = temp_manager;
                (*(code *)(*temp_manager)[5])(temp_manager);
                manager_ptr = stack_manager_1;
                stack_manager_8 = (int64_t *******)&stack_manager_1;
                search_offset = target_object[0x2d];
                stack_manager_4 = (int64_t *******)0x0;
                stack_manager_6 = stack_manager_1;
                if (stack_manager_1 != (int64_t *******)0x0) {
                    (*(code *)(*stack_manager_1)[5])(stack_manager_1);
                }
                stack_manager_6 = (int64_t *******)0x0;
                stack_manager_4 = manager_ptr;
                stack_counter = 1 << ((byte)(int)search_offset & 0x1f);
                FUN_1802842e0(render_context + 7, &stack_manager_4);
                stack_manager_1[0x39] = render_context;
                iteration_count = (int)search_offset + 1;
                if (*(int *)(render_context + 0xb) < iteration_count) {
                    *(int *)(render_context + 0xb) = iteration_count;
                }
                if (stack_manager_4 != (int64_t *******)0x0) {
                    (*(code *)(*stack_manager_4)[7])();
                }
                if (stack_manager_1 != (int64_t *******)0x0) {
                    (*(code *)(*stack_manager_1)[7])();
                }
                (*(code *)(*temp_manager)[7])(temp_manager);
                temp_manager = stack_manager_3;
            }
            stack_offset = stack_offset + 0x170;
            object_count = object_count + -1;
        } while (object_count != 0);
    }
    
    // 执行最终的对象清理
    object_count = 0;
    iteration_count = (int)((int64_t)render_context[8] - (int64_t)render_context[7] >> 4);
    object_difference = (int64_t)iteration_count;
    if (0 < iteration_count) {
        stack_manager_3 = (int64_t *******)&stack_manager_1;
        do {
            stack_manager_8 = (int64_t *******)&stack_manager_1;
            stack_manager_1 = (int64_t *******)0x0;
            stack_manager_2 = *(int64_t ********)(*(int64_t *)(object_count + (int64_t)render_context[7]) + 0x118);
            *(uint64_t *)(*(int64_t *)(object_count + (int64_t)render_context[7]) + 0x118) = 0;
            if (stack_manager_2 != (int64_t *******)0x0) {
                (*(code *)(*stack_manager_2)[7])();
            }
            if (stack_manager_1 != (int64_t *******)0x0) {
                (*(code *)(*stack_manager_1)[7])();
            }
            *(int8_t *)(*(int64_t *)(object_count + (int64_t)render_context[7]) + 0x2e9) = 0;
            *(int8_t *)(*(int64_t *)(object_count + (int64_t)render_context[7]) + 0x2f9) = 0;
            object_count = object_count + 0x10;
            object_difference = object_difference + -1;
        } while (object_difference != 0);
    }
    
    // 更新渲染状态
    *(int *)(render_context[0x79] + 2) = *(int *)(render_context[0x79] + 2) + 1;
    FUN_180278270(render_context);
    temp_manager = temp_manager;
    if ((*render_context)[0x2c] == (int64_t ****)&RENDERING_INTERFACE_PTR) {
        SystemCore_UpdateState(render_context, (int64_t)render_context + 0x214, 0);
    }
    else {
        (*(code *)(*render_context)[0x2c])(render_context);
    }
    
    // 清理所有对象
    for (; stack_manager_1 = temp_manager, temp_manager != process_manager;
        temp_manager = temp_manager + 2) {
        if (*temp_manager != (int64_t ******)0x0) {
            (*(code *)(**temp_manager)[7])();
        }
    }
    
    // 释放内存
    if (temp_manager == (int64_t *******)0x0) {
        return;
    }
    // 警告：此子函数不返回
    CoreMemoryPoolInitializer(temp_manager);
}

/**
 * 渲染对象查找器
 * 
 * 该函数负责在渲染系统中查找指定的对象，根据对象ID进行搜索和移除操作。
 * 支持对象移除、状态更新和资源清理。
 * 
 * @param render_context 渲染上下文指针
 * @param object_id 要查找的对象ID
 * 
 * @return 查找结果：1表示找到并移除对象，0表示未找到对象
 * 
 * 处理流程：
 * 1. 遍历对象数组查找指定ID
 * 2. 如果找到对象，清除其引用
 * 3. 执行对象移除操作
 * 4. 更新渲染状态
 * 5. 返回查找结果
 */
uint64_t rendering_object_finder(int64_t *render_context, int64_t object_id)
{
    int64_t object_index;
    uint64_t object_count;
    int64_t *current_object;
    int search_index;
    
    // 初始化搜索参数
    current_object = (int64_t *)render_context[7];
    search_index = 0;
    object_count = render_context[8] - (int64_t)current_object >> 4;
    
    // 遍历对象数组
    if (object_count != 0) {
        do {
            if (*current_object == object_id) {
                // 清除对象引用
                *(uint64_t *)(object_id + 0x1c8) = 0;
                FUN_180284450(render_context + 7, (int64_t)search_index * 0x10 + render_context[7]);
                
                // 更新渲染状态
                if (*(code **)(*render_context + 0x160) == (code *)&RENDERING_INTERFACE_PTR) {
                    SystemCore_UpdateState(render_context, (int64_t)render_context + 0x214, 0);
                }
                else {
                    (**(code **)(*render_context + 0x160))(render_context);
                }
                
                // 处理对象引用计数
                object_index = render_context[5];
                if (object_index != 0) {
                    *(short *)(object_index + 0x2b0) = *(short *)(object_index + 0x2b0) + 1;
                    if (*(int64_t *)(object_index + 0x168) != 0) {
                        func_0x0001802eeba0();
                    }
                }
                return 1;
            }
            search_index = search_index + 1;
            current_object = current_object + 2;
        } while ((uint64_t)(int64_t)search_index < object_count);
    }
    return 0;
}

/**
 * 渲染对象处理器
 * 
 * 该函数负责处理渲染对象的初始化、配置和管理操作。
 * 支持对象链表管理、字符串处理和资源分配。
 * 
 * @param process_context 处理上下文
 * @param object_data 对象数据指针
 * 
 * 处理流程：
 * 1. 初始化处理参数和对象数据
 * 2. 管理对象链表关系
 * 3. 处理字符串数据和配置
 * 4. 执行对象初始化操作
 * 5. 清理资源和返回结果
 */
void rendering_object_processor(int64_t process_context, int64_t *object_data)
{
    int64_t context_offset;
    int64_t *current_object;
    void *data_ptr;
    int32_t object_flags;
    uint process_flags;
    void *temp_data;
    int8_t stack_data_1[32];
    uint stack_flags_1;
    int64_t *stack_object_1;
    int64_t **stack_ptr_1;
    uint64_t stack_memory_1;
    int64_t *stack_object_2;
    int64_t **stack_ptr_2;
    void *stack_data_2;
    void *stack_data_3;
    int32_t stack_flags_2;
    uint8_t stack_data_4[136];
    void *stack_data_5;
    void *stack_data_6;
    int32_t stack_flags_3;
    uint8_t stack_data_7[136];
    uint64_t stack_guard;
    
    // 初始化处理参数
    stack_memory_1 = 0xfffffffffffffffe;
    stack_guard = RENDERING_STACK_GUARD ^ (uint64_t)stack_data_1;
    stack_flags_1 = 0;
    context_offset = *(int64_t *)(process_context + 0x3c8);
    stack_ptr_1 = &stack_object_1;
    stack_object_1 = (int64_t *)*object_data;
    stack_object_2 = object_data;
    
    // 执行对象初始化
    if (stack_object_1 != (int64_t *)0x0) {
        (**(code **)(*stack_object_1 + 0x28))();
    }
    
    current_object = stack_object_1;
    stack_ptr_2 = &stack_object_1;
    
    // 管理对象链表
    if (*(int64_t **)(context_offset + 0x18) != stack_object_1) {
        stack_ptr_1 = (int64_t **)stack_object_1;
        if (stack_object_1 != (int64_t *)0x0) {
            (**(code **)(*stack_object_1 + 0x28))(stack_object_1);
        }
        stack_ptr_1 = *(int64_t ***)(context_offset + 0x18);
        *(int64_t **)(context_offset + 0x18) = current_object;
        if (stack_ptr_1 != (int64_t **)0x0) {
            (*(code *)(*stack_ptr_1)[7])();
        }
        *(int *)(context_offset + 0x10) = *(int *)(context_offset + 0x10) + 1;
    }
    
    // 执行对象处理
    if (stack_object_1 != (int64_t *)0x0) {
        (**(code **)(*stack_object_1 + 0x38))();
    }
    
    context_offset = *object_data;
    if (context_offset == 0) {
        // 处理默认对象配置
        stack_data_2 = &RENDERING_STRING_CONSTANT_1;
        stack_data_3 = stack_data_4;
        stack_data_4[0] = 0;
        stack_flags_2 = 0;
        strcpy_s(stack_data_4, 0x80, &RENDERING_OBJECT_DEFAULT_PTR);
        process_flags = 2;
        stack_flags_1 = 2;
        data_ptr = stack_data_3;
        object_flags = stack_flags_2;
    }
    else {
        // 处理特定对象配置
        stack_data_5 = &RENDERING_STRING_CONSTANT_1;
        stack_data_6 = stack_data_7;
        stack_data_7[0] = 0;
        stack_flags_3 = *(int32_t *)(context_offset + 0x48);
        data_ptr = &RENDERING_OBJECT_DEFAULT_PTR;
        if (*(void **)(context_offset + 0x40) != (void *)0x0) {
            data_ptr = *(void **)(context_offset + 0x40);
        }
        strcpy_s(stack_data_7, 0x80, data_ptr);
        process_flags = 1;
        stack_flags_1 = 1;
        data_ptr = stack_data_6;
        object_flags = stack_flags_3;
    }
    
    // 设置对象属性
    *(int32_t *)(process_context + 0x90) = object_flags;
    temp_data = &RENDERING_OBJECT_DEFAULT_PTR;
    if (data_ptr != (void *)0x0) {
        temp_data = data_ptr;
    }
    strcpy_s(*(uint64_t *)(process_context + 0x88), 0x80, temp_data);
    
    // 处理标志位
    if ((process_flags & 2) != 0) {
        stack_flags_1 = process_flags & 0xfffffffd;
        stack_data_2 = &RENDERING_STRING_CONSTANT_2;
        process_flags = stack_flags_1;
    }
    if ((process_flags & 1) != 0) {
        stack_flags_1 = process_flags & 0xfffffffe;
        stack_data_5 = &RENDERING_STRING_CONSTANT_2;
    }
    
    // 执行最终的对象处理
    if ((int64_t *)*object_data != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*object_data + 0x38))();
    }
    // 警告：此子函数不返回
    SystemSecurityChecker(stack_guard ^ (uint64_t)stack_data_1);
}

/**
 * 渲染对象初始化器
 * 
 * 该函数负责初始化渲染对象，设置对象的初始状态和属性。
 * 支持对象链表管理、数据结构初始化和资源配置。
 * 
 * @param init_context 初始化上下文
 * @param object_data 对象数据指针
 * @param param_3 保留参数3
 * @param param_4 保留参数4
 * 
 * 处理流程：
 * 1. 初始化对象链表关系
 * 2. 处理对象数据和属性
 * 3. 执行对象初始化操作
 * 4. 配置对象参数
 * 5. 清理资源和返回结果
 */
void rendering_object_initializer(int64_t init_context, int64_t *object_data, uint64_t param_3, uint64_t param_4)
{
    int64_t context_offset;
    code *init_function;
    int64_t *current_object;
    void **data_ptr_ptr;
    void *data_ptr;
    bool is_default_object;
    int64_t *stack_object_1;
    int64_t *stack_object_2;
    int64_t **stack_ptr_1;
    int64_t **stack_ptr_2;
    int32_t init_flags;
    uint64_t memory_flag;
    void *stack_data_1;
    int64_t stack_offset_1;
    int32_t stack_flags_1;
    uint64_t stack_limit_1;
    void *stack_data_2;
    int64_t stack_offset_2;
    int32_t stack_flags_2;
    
    // 初始化参数
    memory_flag = 0xfffffffffffffffe;
    context_offset = *(int64_t *)(init_context + 0x3c8);
    stack_ptr_1 = &stack_object_1;
    stack_object_1 = (int64_t *)*object_data;
    stack_object_2 = object_data;
    
    // 执行对象初始化
    if (stack_object_1 != (int64_t *)0x0) {
        (**(code **)(*stack_object_1 + 0x28))();
    }
    
    current_object = stack_object_1;
    stack_ptr_2 = &stack_object_1;
    
    // 管理对象链表
    if (*(int64_t **)(context_offset + 0x20) != stack_object_1) {
        stack_ptr_1 = (int64_t **)stack_object_1;
        if (stack_object_1 != (int64_t *)0x0) {
            (**(code **)(*stack_object_1 + 0x28))(stack_object_1);
        }
        stack_ptr_1 = *(int64_t ***)(context_offset + 0x20);
        *(int64_t **)(context_offset + 0x20) = current_object;
        if (stack_ptr_1 != (int64_t **)0x0) {
            (*(code *)(*stack_ptr_1)[7])();
        }
        *(int *)(context_offset + 0x10) = *(int *)(context_offset + 0x10) + 1;
    }
    
    // 执行对象处理
    if (stack_object_1 != (int64_t *)0x0) {
        (**(code **)(*stack_object_1 + 0x38))();
    }
    
    is_default_object = *object_data == 0;
    if (is_default_object) {
        // 处理默认对象
        stack_data_1 = &RENDERING_DATA_STRUCTURE_1;
        stack_limit_1 = 0;
        stack_offset_1 = 0;
        stack_flags_1 = 0;
        data_ptr_ptr = &stack_data_1;
        init_flags = 2;
    }
    else {
        // 处理特定对象
        data_ptr_ptr = (void **)SystemCore_NetworkHandler0(&stack_data_2, *object_data + 0x1f0);
        init_flags = 1;
    }
    
    context_offset = stack_offset_1;
    init_function = *(code **)(*(int64_t *)(init_context + 0x118) + 0x10);
    data_ptr = &RENDERING_OBJECT_DEFAULT_PTR;
    if (data_ptr_ptr[1] != (void *)0x0) {
        data_ptr = data_ptr_ptr[1];
    }
    
    // 执行初始化函数
    (*init_function)((int64_t *)(init_context + 0x118), data_ptr, init_function, param_4, init_flags, memory_flag);
    
    // 清理默认对象资源
    if (is_default_object) {
        stack_data_1 = &RENDERING_DATA_STRUCTURE_1;
        if (context_offset != 0) {
            // 警告：此子函数不返回
            CoreMemoryPoolInitializer(context_offset);
        }
        stack_offset_1 = 0;
        stack_limit_1 = stack_limit_1 & 0xffffffff00000000;
        stack_data_1 = &RENDERING_STRING_CONSTANT_2;
    }
    
    // 清理特定对象资源
    if (!is_default_object) {
        stack_data_2 = &RENDERING_DATA_STRUCTURE_1;
        if (stack_offset_2 != 0) {
            // 警告：此子函数不返回
            CoreMemoryPoolInitializer();
        }
        stack_offset_2 = 0;
        stack_flags_2 = 0;
        stack_data_2 = &RENDERING_STRING_CONSTANT_2;
    }
    
    // 执行最终的对象处理
    if ((int64_t *)*object_data != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*object_data + 0x38))();
    }
    return;
}

/**
 * 渲染对象数据处理器
 * 
 * 该函数负责处理渲染对象的数据结构和属性设置。
 * 支持对象签名验证、数据结构初始化和属性配置。
 * 
 * @param param_1 处理参数1
 * @param param_2 数据指针
 * @param param_3 处理参数3
 * @param param_4 处理参数4
 * 
 * @return 处理后的数据指针
 * 
 * 处理流程：
 * 1. 初始化数据结构
 * 2. 设置对象签名
 * 3. 配置数据属性
 * 4. 返回处理结果
 */
uint64_t * rendering_object_data_handler(uint64_t param_1, uint64_t *param_2, uint64_t param_3, uint64_t param_4)
{
    uint64_t *result_ptr;
    
    // 初始化数据结构
    *param_2 = &RENDERING_STRING_CONSTANT_2;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    *param_2 = &RENDERING_DATA_STRUCTURE_1;
    param_2[3] = 0;
    param_2[1] = 0;
    *(int32_t *)(param_2 + 2) = 0;
    
    // 配置数据属性
    CoreMemoryPoolProcessor(param_2, 0x13, param_3, param_4, 0, 0xfffffffffffffffe);
    result_ptr = (uint64_t *)param_2[1];
    
    // 设置对象签名
    *result_ptr = RENDERING_OBJECT_SIGNATURE;
    result_ptr[1] = 0x6e6f706d6f635f68;
    *(int32_t *)(result_ptr + 2) = 0x746e65;
    *(int32_t *)(param_2 + 2) = 0x13;
    
    return param_2;
}

/**
 * 渲染对象批处理器
 * 
 * 该函数负责批量处理渲染对象，支持对象创建、配置和管理。
 * 处理复杂的数据流和对象关系管理。
 * 
 * @param batch_context 批处理上下文
 * @param data_stream 数据流指针
 * 
 * 处理流程：
 * 1. 初始化批处理参数
 * 2. 处理数据流和对象创建
 * 3. 批量配置对象属性
 * 4. 管理对象关系和链表
 * 5. 清理资源和返回结果
 */
void rendering_object_batch_processor(int64_t batch_context, int64_t data_stream)
{
    char data_flag;
    uint data_size;
    uint64_t *data_ptr;
    uint64_t data_value;
    int64_t object_index;
    int64_t *current_object;
    int64_t object_offset;
    uint64_t object_data;
    char *string_ptr;
    char *temp_string;
    uint *uint_ptr;
    int32_t *uint4_ptr;
    uint64_t process_limit;
    uint64_t data_limit;
    int64_t *stack_object_1;
    int64_t *stack_object_2;
    void *stack_data_1;
    int64_t stack_offset_1;
    uint stack_flags_1;
    uint64_t stack_memory_1;
    void *stack_data_2;
    int64_t stack_offset_2;
    int32_t stack_flags_2;
    uint64_t stack_limit_2;
    void *stack_data_3;
    int64_t stack_offset_3;
    int32_t stack_flags_3;
    uint64_t stack_limit_3;
    uint64_t stack_memory_2;
    uint64_t stack_memory_3;
    int32_t stack_flags_4;
    uint64_t stack_limit_4;
    uint64_t stack_memory_4;
    
    // 初始化批处理参数
    stack_memory_4 = 0xfffffffffffffffe;
    stack_data_1 = &RENDERING_DATA_STRUCTURE_1;
    stack_memory_1 = 0;
    stack_offset_1 = 0;
    stack_flags_1 = 0;
    data_size = **(uint **)(data_stream + 8);
    uint_ptr = *(uint **)(data_stream + 8) + 1;
    *(uint **)(data_stream + 8) = uint_ptr;
    
    // 处理数据流
    if (data_size != 0) {
        FUN_180628f30(&stack_data_1, uint_ptr, data_size);
        *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + (uint64_t)data_size;
    }
    
    object_index = RenderingSystem_VertexProcessor(RENDERING_GLOBAL_DATA_1, &stack_data_1, 1);
    data_size = stack_flags_1;
    if (object_index == 0) {
        process_limit = (uint64_t)stack_flags_1;
        if (stack_offset_1 != 0) {
            CoreMemoryPoolProcessor(batch_context + 0x1f0, process_limit);
        }
        if (data_size != 0) {
            // 警告：此子函数不返回
            memcpy(*(uint64_t *)(batch_context + 0x1f8), stack_offset_1, process_limit);
        }
        *(int32_t *)(batch_context + 0x200) = 0;
        if (*(int64_t *)(batch_context + 0x1f8) != 0) {
            *(int8_t *)(process_limit + *(int64_t *)(batch_context + 0x1f8)) = 0;
        }
        *(int32_t *)(batch_context + 0x20c) = stack_memory_1._4_4_;
    }
    else {
        FUN_180275a60(object_index, batch_context, 1);
    }
    
    process_limit = 0;
    *(int32_t *)(batch_context + 0x324) = **(int32_t **)(data_stream + 8);
    *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
    uint4_ptr = (int32_t *)((int64_t)&stack_memory_2 + 4);
    data_limit = 4;
    temp_string = *(char **)(data_stream + 8);
    
    // 处理数据块
    do {
        string_ptr = temp_string;
        uint4_ptr[-1] = *(int32_t *)string_ptr;
        *uint4_ptr = *(int32_t *)(string_ptr + 4);
        uint4_ptr[1] = *(int32_t *)(string_ptr + 8);
        uint4_ptr[2] = *(int32_t *)(string_ptr + 0xc);
        temp_string = string_ptr + 0x10;
        uint4_ptr = uint4_ptr + 4;
        data_limit = data_limit - 1;
    } while (data_limit != 0);
    
    *(char **)(data_stream + 8) = temp_string;
    data_flag = *temp_string;
    uint_ptr = (uint *)(string_ptr + 0x11);
    *(uint **)(data_stream + 8) = uint_ptr;
    
    // 处理字符串数据
    if (data_flag != '\0') {
        stack_data_2 = &RENDERING_DATA_STRUCTURE_1;
        stack_offset_2 = 0;
        stack_flags_2 = 0;
        data_size = *uint_ptr;
        *(char **)(data_stream + 8) = string_ptr + 0x15;
        stack_limit_2 = data_limit;
        if (data_size != 0) {
            FUN_180628f30(&stack_data_2, string_ptr + 0x15, data_size);
            *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + (uint64_t)data_size;
        }
        
        current_object = (int64_t *)SystemCore_PerformanceMonitor(RENDERING_GLOBAL_DATA_1, &stack_object_2, &stack_data_2, 1);
        current_object = (int64_t *)*current_object;
        if (current_object != (int64_t *)0x0) {
            stack_object_1 = current_object;
            (**(code **)(*current_object + 0x28))(current_object);
        }
        
        stack_object_1 = *(int64_t **)(batch_context + 0x3b8);
        *(int64_t **)(batch_context + 0x3b8) = current_object;
        if (stack_object_1 != (int64_t **)0x0) {
            (**(code **)(*stack_object_1 + 0x38))();
        }
        if (stack_object_2 != (int64_t *)0x0) {
            (**(code **)(*stack_object_2 + 0x38))();
        }
        
        stack_data_2 = &RENDERING_DATA_STRUCTURE_1;
        if (stack_offset_2 != 0) {
            // 警告：此子函数不返回
            CoreMemoryPoolInitializer();
        }
        stack_offset_2 = 0;
        stack_limit_2 = stack_limit_2 & 0xffffffff00000000;
        stack_data_2 = &RENDERING_STRING_CONSTANT_2;
        uint_ptr = *(uint **)(data_stream + 8);
    }
    
    // 处理对象数据
    data_size = *uint_ptr;
    object_index = (int64_t)(int)data_size;
    *(uint **)(data_stream + 8) = uint_ptr + 1;
    data_limit = process_limit;
    if (0 < (int)data_size) {
        do {
            if ((uint64_t)(int64_t)(int)process_limit <
                (uint64_t)(*(int64_t *)(batch_context + 0x40) - *(int64_t *)(batch_context + 0x38) >> 4)) {
                object_offset = *(int64_t *)(*(int64_t *)(batch_context + 0x38) + data_limit);
            }
            else {
                data_value = CoreMemoryPoolReallocator(RENDERING_MEMORY_CONTEXT, 0x300, 0x10, 9);
                object_offset = FUN_180075030(data_value, 0, 1);
            }
            
            // 处理对象数据流
            stack_memory_2 = &RENDERING_DATA_STRUCTURE_1;
            stack_limit_4 = 0;
            stack_memory_3 = 0;
            stack_flags_4 = 0;
            data_size = **(uint **)(data_stream + 8);
            uint_ptr = *(uint **)(data_stream + 8) + 1;
            *(uint **)(data_stream + 8) = uint_ptr;
            if (data_size != 0) {
                FUN_180628f30(&stack_memory_2, uint_ptr, data_size);
                *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + (uint64_t)data_size;
            }
            
            stack_data_3 = &RENDERING_DATA_STRUCTURE_1;
            stack_limit_3 = 0;
            stack_offset_3 = 0;
            stack_flags_3 = 0;
            data_size = **(uint **)(data_stream + 8);
            uint_ptr = *(uint **)(data_stream + 8) + 1;
            *(uint **)(data_stream + 8) = uint_ptr;
            if (data_size != 0) {
                FUN_180628f30(&stack_data_3, uint_ptr, data_size);
                *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + (uint64_t)data_size;
            }
            
            data_value = SystemCore_PerformanceMonitor(RENDERING_GLOBAL_DATA_1, &stack_object_2, &stack_data_3, 1);
            UltraHighFreq_SecurityValidator1(object_offset, data_value);
            if (stack_object_2 != (int64_t *)0x0) {
                (**(code **)(*stack_object_2 + 0x38))();
            }
            
            // 处理对象属性
            data_ptr = *(uint64_t **)(data_stream + 8);
            data_value = *data_ptr;
            object_data = data_ptr[1];
            *(uint64_t **)(data_stream + 8) = data_ptr + 2;
            *(uint64_t *)(object_offset + 0x238) = data_value;
            *(uint64_t *)(object_offset + 0x240) = object_data;
            
            data_ptr = *(uint64_t **)(data_stream + 8);
            data_value = *data_ptr;
            object_data = data_ptr[1];
            *(uint64_t **)(data_stream + 8) = data_ptr + 2;
            *(uint64_t *)(object_offset + 0x238) = data_value;
            *(uint64_t *)(object_offset + 0x240) = object_data;
            
            data_ptr = *(uint64_t **)(data_stream + 8);
            data_value = *data_ptr;
            object_data = data_ptr[1];
            *(uint64_t **)(data_stream + 8) = data_ptr + 2;
            *(uint64_t *)(object_offset + 0x2a8) = data_value;
            *(uint64_t *)(object_offset + 0x2b0) = object_data;
            
            data_ptr = *(uint64_t **)(data_stream + 8);
            data_value = *data_ptr;
            object_data = data_ptr[1];
            *(uint64_t **)(data_stream + 8) = data_ptr + 2;
            *(uint64_t *)(object_offset + 0x2b8) = data_value;
            *(uint64_t *)(object_offset + 0x2c0) = object_data;
            
            // 处理对象标志位
            uint4_ptr = *(int32_t **)(data_stream + 8);
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x10) = *uint4_ptr;
            *(int32_t **)(data_stream + 8) = uint4_ptr + 1;
            current_object = (int64_t *)(*(int64_t *)(object_offset + 0x268) + 0x20);
            data_size = uint4_ptr[1];
            uint4_ptr = uint4_ptr + 2;
            *(int32_t **)(data_stream + 8) = uint4_ptr;
            if (data_size != 0) {
                (**(code **)(*current_object + 0x18))(current_object, uint4_ptr, data_size);
                *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + (uint64_t)data_size;
                uint4_ptr = *(int32_t **)(data_stream + 8);
            }
            
            // 设置对象属性
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x44) = *uint4_ptr;
            *(int32_t **)(data_stream + 8) = uint4_ptr + 1;
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x48) = uint4_ptr[1];
            *(int32_t **)(data_stream + 8) = uint4_ptr + 2;
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x4c) = uint4_ptr[2];
            *(int32_t **)(data_stream + 8) = uint4_ptr + 3;
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x54) = uint4_ptr[3];
            *(int32_t **)(data_stream + 8) = uint4_ptr + 4;
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x58) = uint4_ptr[4];
            *(int32_t **)(data_stream + 8) = uint4_ptr + 5;
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x5c) = uint4_ptr[5];
            *(int32_t **)(data_stream + 8) = uint4_ptr + 6;
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x60) = uint4_ptr[6];
            *(int32_t **)(data_stream + 8) = uint4_ptr + 7;
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 100) = uint4_ptr[7];
            *(int32_t **)(data_stream + 8) = uint4_ptr + 8;
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x68) = uint4_ptr[8];
            *(int32_t **)(data_stream + 8) = uint4_ptr + 9;
            *(int32_t *)(*(int64_t *)(object_offset + 0x268) + 0x6c) = uint4_ptr[9];
            *(int32_t **)(data_stream + 8) = uint4_ptr + 10;
            
            // 清理资源
            stack_data_3 = &RENDERING_DATA_STRUCTURE_1;
            if (stack_offset_3 != 0) {
                // 警告：此子函数不返回
                CoreMemoryPoolInitializer();
            }
            stack_offset_3 = 0;
            stack_limit_3 = stack_limit_3 & 0xffffffff00000000;
            stack_data_3 = &RENDERING_STRING_CONSTANT_2;
            stack_memory_2 = &RENDERING_DATA_STRUCTURE_1;
            if (stack_memory_3 != 0) {
                // 警告：此子函数不返回
                CoreMemoryPoolInitializer();
            }
            stack_memory_3 = 0;
            stack_limit_4 = stack_limit_4 & 0xffffffff00000000;
            stack_memory_2 = &RENDERING_STRING_CONSTANT_2;
            process_limit = (uint64_t)((int)process_limit + 1);
            object_index = object_index + -1;
            data_limit = data_limit + 0x10;
        } while (object_index != 0);
    }
    
    // 清理最终资源
    stack_data_1 = &RENDERING_DATA_STRUCTURE_1;
    if (stack_offset_1 == 0) {
        return;
    }
    // 警告：此子函数不返回
    CoreMemoryPoolInitializer();
}

// 警告：以'_'开头的全局变量与相同地址的较小符号重叠