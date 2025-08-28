#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part102.c - 渲染系统高级数据处理和资源管理模块
// 包含2个核心函数，涵盖渲染系统资源处理、状态管理、内存管理、数据验证等高级渲染功能

// 常量定义
#define RENDERING_SYSTEM_INVALID_HANDLE 0xfffffffffffffffe
#define RENDERING_SYSTEM_MUTEX_LOCK_SUCCESS 0
#define RENDERING_SYSTEM_MUTEX_UNLOCK_SUCCESS 0
#define RENDERING_SYSTEM_DEFAULT_BUFFER_SIZE 3
#define RENDERING_SYSTEM_MAX_PRIORITY 0x3f800000
#define RENDERING_SYSTEM_SUCCESS 1
#define RENDERING_SYSTEM_FAILURE 0

// 函数别名定义
#define RenderingSystemEmptyFunction rendering_system_empty_function
#define RenderingSystemProcessResourceRequest rendering_system_process_resource_request
#define RenderingSystemCleanupResources rendering_system_cleanup_resources

/**
 * 渲染系统空函数
 * 功能：空函数占位符，用于系统初始化和错误处理
 * 参数：无
 * 返回值：无
 */
void RenderingSystemEmptyFunction(void)
{
    return;
}

/**
 * 渲染系统资源请求处理器
 * 功能：处理渲染系统资源请求，包括资源分配、状态管理和线程同步
 * 
 * 参数：
 * - render_context: 渲染上下文指针
 * - resource_handle: 资源句柄指针（输出参数）
 * - resource_params: 资源参数指针
 * - request_flags: 请求标志位
 * 
 * 返回值：
 * - 成功：RENDERING_SYSTEM_SUCCESS
 * - 失败：RENDERING_SYSTEM_FAILURE
 */
uint64_t RenderingSystemProcessResourceRequest(longlong render_context, longlong *resource_handle, longlong resource_params, uint request_flags)
{
    longlong *temp_ptr1;
    int mutex_result;
    uint64_t *temp_ptr2;
    uint64_t return_value;
    longlong *temp_ptr3;
    longlong temp_long1;
    longlong temp_long2;
    byte resource_flag;
    longlong *stack_ptr1;
    uint stack_array1[2];
    longlong *stack_ptr2;
    longlong *stack_ptr3;
    longlong *stack_ptr4;
    longlong stack_array2[3];
    int32_t stack_value1;
    longlong *stack_ptr5;
    longlong stack_array3[3];
    int32_t stack_value2;
    longlong stack_array4[3];
    int32_t stack_value3;
    uint64_t stack_value4;
    
    // 初始化返回值和栈变量
    stack_value4 = RENDERING_SYSTEM_INVALID_HANDLE;
    return_value = RENDERING_SYSTEM_FAILURE;
    resource_flag = *(byte *)(resource_params + 0x10) & 1;
    stack_array1[0] = CONCAT31(stack_array1[0]._1_3_, *(byte *)(resource_params + 0x10)) & 0xffffff01;
    
    // 检查请求标志位
    if ((request_flags >> 1 & 1) == 0) {
        // 处理简单请求
        if ((request_flags >> 2 & 1) == 0) {
            if ((request_flags >> 1 & 1) != 0) {
                return return_value;
            }
            if (resource_flag == 0) {
                return return_value;
            }
            // 获取资源句柄
            temp_long2 = FUN_18033b3a0(render_context, *(int32_t *)(resource_params + 8));
            *resource_handle = temp_long2;
        }
        else {
            // 处理批量请求
            stack_array1[0] = *(uint *)(resource_params + 8);
            temp_long1 = FUN_18033b3a0(render_context);
            temp_long2 = RENDERING_SYSTEM_FAILURE;
            if (temp_long1 != 0) {
                temp_ptr3 = (longlong *)(render_context + 0x3d8);
                stack_ptr1 = temp_ptr3;
                mutex_result = _Mtx_lock(temp_ptr3);
                if (mutex_result != RENDERING_SYSTEM_MUTEX_LOCK_SUCCESS) {
                    __Throw_C_error_std__YAXH_Z(mutex_result);
                }
                FUN_18033bc80(render_context + 0x3a8, stack_array1);
                mutex_result = _Mtx_unlock(temp_ptr3);
                temp_long2 = temp_long1;
                if (mutex_result != RENDERING_SYSTEM_MUTEX_UNLOCK_SUCCESS) {
                    __Throw_C_error_std__YAXH_Z(mutex_result);
                }
            }
            *resource_handle = temp_long2;
        }
        return RENDERING_SYSTEM_SUCCESS;
    }
    
    // 根据资源类型处理请求
    switch(*(int32_t *)(resource_params + 0x8c)) {
        case 0:
        case 7:
            // 处理基础渲染资源
            stack_ptr1 = (longlong *)CONCAT44(stack_ptr1._4_4_, *(int32_t *)(resource_params + 8));
            temp_ptr1 = (longlong *)(render_context + 0x3d8);
            stack_ptr4 = temp_ptr1;
            mutex_result = _Mtx_lock(temp_ptr1);
            if (mutex_result != RENDERING_SYSTEM_MUTEX_LOCK_SUCCESS) {
                __Throw_C_error_std__YAXH_Z(mutex_result);
            }
            return_value = FUN_18062b1e0(system_memory_pool_ptr, 0x3d0, 8, 3);
            temp_ptr3 = (longlong *)FUN_180275090(return_value);
            stack_ptr2 = (longlong *)CONCAT44(stack_ptr2._4_4_, stack_ptr1._0_4_);
            stack_ptr3 = temp_ptr3;
            FUN_18033b220(render_context + 0x3a8, stack_array2, &stack_ptr2);
            mutex_result = _Mtx_unlock(temp_ptr1);
            if (mutex_result != RENDERING_SYSTEM_MUTEX_UNLOCK_SUCCESS) {
                __Throw_C_error_std__YAXH_Z(mutex_result);
            }
            (**(code **)(*temp_ptr3 + 0x1e8))(temp_ptr3, render_context, resource_params);
            break;
            
        case 1:
            // 处理纹理资源
            stack_ptr1 = (longlong *)CONCAT44(stack_ptr1._4_4_, *(int32_t *)(resource_params + 8));
            temp_ptr1 = (longlong *)(render_context + 0x3d8);
            stack_ptr4 = temp_ptr1;
            mutex_result = _Mtx_lock(temp_ptr1);
            if (mutex_result != RENDERING_SYSTEM_MUTEX_LOCK_SUCCESS) {
                __Throw_C_error_std__YAXH_Z(mutex_result);
            }
            return_value = FUN_18062b1e0(system_memory_pool_ptr, 0x468, 8, 3);
            temp_ptr3 = (longlong *)FUN_1803dd0f0(return_value);
            stack_ptr2 = (longlong *)CONCAT44(stack_ptr2._4_4_, stack_ptr1._0_4_);
            stack_ptr3 = temp_ptr3;
            FUN_18033b220(render_context + 0x3a8, stack_array2, &stack_ptr2);
            mutex_result = _Mtx_unlock(temp_ptr1);
            if (mutex_result != RENDERING_SYSTEM_MUTEX_UNLOCK_SUCCESS) {
                __Throw_C_error_std__YAXH_Z(mutex_result);
            }
            
            // 处理纹理资源相关操作
            if (*(int *)(resource_params + 0x160) != 0) {
                temp_ptr2 = (uint64_t *)FUN_1800b32c0(system_resource_state, &stack_ptr2, resource_params + 0x150, 1, &unknown_var_7656_ptr);
                FUN_1800763c0(*temp_ptr2, &stack_ptr1);
                if (stack_ptr2 != (longlong *)0x0) {
                    (**(code **)(*stack_ptr2 + 0x38))();
                }
                temp_ptr1 = stack_ptr1;
                stack_ptr5 = stack_ptr1;
                if (stack_ptr1 != (longlong *)0x0) {
                    (**(code **)(*stack_ptr1 + 0x28))(stack_ptr1);
                }
                stack_ptr5 = (longlong *)temp_ptr3[0x21];
                temp_ptr3[0x21] = (longlong)temp_ptr1;
                if (stack_ptr5 != (longlong *)0x0) {
                    (**(code **)(*stack_ptr5 + 0x38))();
                }
                if (stack_ptr1 != (longlong *)0x0) {
                    (**(code **)(*stack_ptr1 + 0x38))();
                }
            }
            
            if (*(int *)(resource_params + 0x1b8) != 0) {
                temp_ptr2 = (uint64_t *)FUN_1800b30d0(system_resource_state, &stack_ptr4, resource_params + 0x1a8, 1);
                FUN_18022cb40(*temp_ptr2, &stack_ptr5);
                if (stack_ptr4 != (longlong *)0x0) {
                    (**(code **)(*stack_ptr4 + 0x38))();
                }
                temp_ptr1 = stack_ptr5;
                stack_ptr1 = stack_ptr5;
                if (stack_ptr5 != (longlong *)0x0) {
                    (**(code **)(*stack_ptr5 + 0x28))(stack_ptr5);
                }
                stack_ptr1 = (longlong *)temp_ptr3[0x22];
                temp_ptr3[0x22] = (longlong)temp_ptr1;
                if (stack_ptr1 != (longlong *)0x0) {
                    (**(code **)(*stack_ptr1 + 0x38))();
                }
                if (stack_ptr5 != (longlong *)0x0) {
                    (**(code **)(*stack_ptr5 + 0x38))();
                }
            }
            break;
            
        case 2:
            // 处理着色器资源
            stack_ptr1 = (longlong *)CONCAT44(stack_ptr1._4_4_, *(int32_t *)(resource_params + 8));
            stack_ptr4 = (longlong *)(render_context + 0x3d8);
            mutex_result = _Mtx_lock(stack_ptr4);
            if (mutex_result != RENDERING_SYSTEM_MUTEX_LOCK_SUCCESS) {
                __Throw_C_error_std__YAXH_Z(mutex_result);
            }
            return_value = FUN_18062b1e0(system_memory_pool_ptr, 0xf0, 8, 3);
            temp_ptr3 = (longlong *)FUN_18039dda0(return_value);
            stack_ptr2 = (longlong *)CONCAT44(stack_ptr2._4_4_, stack_ptr1._0_4_);
            stack_ptr3 = temp_ptr3;
            FUN_18033b220(render_context + 0x3a8, stack_array2, &stack_ptr2);
            goto mutex_unlock_label;
            
        case 3:
        case 5:
            // 处理特殊资源类型
            goto code_r0x000180329ed1;
            
        case 4:
            // 处理缓冲区资源
            stack_ptr1 = (longlong *)CONCAT44(stack_ptr1._4_4_, *(int32_t *)(resource_params + 8));
            temp_ptr1 = (longlong *)(render_context + 0x3d8);
            stack_ptr4 = temp_ptr1;
            mutex_result = _Mtx_lock(temp_ptr1);
            if (mutex_result != RENDERING_SYSTEM_MUTEX_LOCK_SUCCESS) {
                __Throw_C_error_std__YAXH_Z(mutex_result);
            }
            return_value = FUN_18062b1e0(system_memory_pool_ptr, 0x168, 8, 3);
            temp_ptr3 = (longlong *)FUN_1802ac390(return_value);
            stack_ptr2 = (longlong *)CONCAT44(stack_ptr2._4_4_, stack_ptr1._0_4_);
            stack_ptr3 = temp_ptr3;
            FUN_18033b220(render_context + 0x3a8, stack_array2, &stack_ptr2);
            mutex_result = _Mtx_unlock(temp_ptr1);
            if (mutex_result != RENDERING_SYSTEM_MUTEX_UNLOCK_SUCCESS) {
                __Throw_C_error_std__YAXH_Z(mutex_result);
            }
            *(int *)(render_context + 0xb4) = *(int *)(render_context + 0xb4) + 1;
            break;
            
        case 6:
            // 处理复杂渲染资源
            stack_ptr1 = stack_array3;
            stack_array3[0] = 0;
            stack_array3[1] = 0;
            stack_array3[2] = 0;
            stack_value2 = RENDERING_SYSTEM_DEFAULT_BUFFER_SIZE;
            stack_ptr4 = stack_array2;
            stack_ptr2 = stack_array4;
            stack_array4[0] = 0;
            stack_array2[0] = 0;
            stack_array4[1] = 0;
            stack_array2[1] = 0;
            stack_array4[2] = 0;
            stack_array2[2] = 0;
            stack_value3 = RENDERING_SYSTEM_DEFAULT_BUFFER_SIZE;
            stack_value1 = RENDERING_SYSTEM_DEFAULT_BUFFER_SIZE;
            temp_ptr3 = (longlong *)(*render_system_buffer)(stack_array4, &system_buffer_17c0);
            if (stack_array2[0] != 0) {
                // 错误处理
                FUN_18064e900();
            }
            if (stack_array3[0] != 0) {
                // 错误处理
                FUN_18064e900();
            }
            (**(code **)(*temp_ptr3 + 0x1e8))(temp_ptr3, render_context, resource_params);
            stack_ptr1 = (longlong *)CONCAT44(stack_ptr1._4_4_, *(int32_t *)(resource_params + 8));
            stack_ptr4 = (longlong *)(render_context + 0x3d8);
            mutex_result = _Mtx_lock(stack_ptr4);
            if (mutex_result != RENDERING_SYSTEM_MUTEX_LOCK_SUCCESS) {
                __Throw_C_error_std__YAXH_Z(mutex_result);
            }
            stack_ptr2 = (longlong *)CONCAT44(stack_ptr2._4_4_, stack_ptr1._0_4_);
            stack_ptr3 = temp_ptr3;
            FUN_18033b220(render_context + 0x3a8, stack_array2, &stack_ptr2);
            break;
    }
    
    return return_value;
    
mutex_unlock_label:
    mutex_result = _Mtx_unlock(stack_ptr4);
    if (mutex_result != RENDERING_SYSTEM_MUTEX_UNLOCK_SUCCESS) {
        __Throw_C_error_std__YAXH_Z(mutex_result);
    }
    return return_value;
}

/**
 * 渲染系统资源清理器
 * 功能：清理渲染系统资源，包括内存释放、状态重置、资源销毁等操作
 * 
 * 参数：
 * - render_context: 渲染上下文指针
 * 
 * 返回值：无
 */
void RenderingSystemCleanupResources(longlong render_context)
{
    int temp_int1;
    longlong *temp_ptr1;
    uint64_t *temp_ptr2;
    double temp_double1;
    char temp_char1;
    int temp_int2;
    longlong temp_long1;
    longlong *temp_ptr3;
    longlong temp_long2;
    longlong temp_long3;
    int *int_ptr1;
    int *int_ptr2;
    longlong *temp_ptr4;
    int *int_ptr3;
    int *int_ptr4;
    ulonglong temp_ulong1;
    int *int_ptr5;
    uint temp_uint1;
    int temp_int3;
    double temp_double2;
    longlong *stack_ptr1;
    longlong *stack_ptr2;
    longlong *stack_ptr3;
    uint64_t temp_int8_t;
    int *int_ptr6;
    int *int_ptr7;
    int *int_ptr8;
    int32_t temp_int16_t;
    uint temp_uint2;
    int *int_ptr9;
    
    // 初始化渲染上下文
    *(int16_t *)(render_context + 0xae0) = 0;
    *(uint64_t *)(render_context + 0xb0) = 0;
    *(int32_t *)(render_context + 0xb8) = 0;
    *(int32_t *)(render_context + 600) = 0;
    *(uint64_t *)(render_context + 0x2d0) = 0;
    *(uint64_t *)(render_context + 0x2d8) = 0;
    *(int32_t *)(render_context + 800) = 0;
    *(int32_t *)(render_context + 0x110) = 0;
    *(int32_t *)(render_context + 0x144) = 0;
    *(uint64_t *)(render_context + 0x158) = 0xffffffffffffffff;
    *(uint64_t *)(render_context + 0x150) = 0;
    *(uint64_t *)(render_context + 0x160) = 0;
    
    // 执行渲染回调
    (**(code **)(*(longlong *)(render_context + 0x208) + 0x10))((longlong *)(render_context + 0x208), &system_buffer_ptr);
    
    *(int8_t *)(render_context + 0x114) = 0;
    *(int32_t *)(render_context + 0x140) = 0x3e4ccccd;
    temp_long3 = render_context + 0x80;
    FUN_18033ba80(temp_long3, *(uint64_t *)(render_context + 0x90));
    *(longlong *)temp_long3 = temp_long3;
    *(longlong *)(render_context + 0x88) = temp_long3;
    *(uint64_t *)(render_context + 0x90) = 0;
    *(int8_t *)(render_context + 0x98) = 0;
    *(uint64_t *)(render_context + 0xa0) = 0;
    *(int32_t *)(render_context + 0x9b8) = 0;
    *(int32_t *)(render_context + 0x560) = 0;
    
    // 清理渲染队列
    temp_long3 = render_context + 0x358;
    stack_ptr2 = (longlong *)temp_long3;
    temp_int3 = _Mtx_lock(temp_long3);
    if (temp_int3 != RENDERING_SYSTEM_MUTEX_LOCK_SUCCESS) {
        __Throw_C_error_std__YAXH_Z(temp_int3);
    }
    FUN_18033ad00(render_context + 0x328);
    temp_int3 = _Mtx_unlock(temp_long3);
    if (temp_int3 != RENDERING_SYSTEM_MUTEX_UNLOCK_SUCCESS) {
        __Throw_C_error_std__YAXH_Z(temp_int3);
    }
    
    // 清理渲染资源
    temp_long3 = render_context + 0x3d8;
    stack_ptr3 = (longlong *)temp_long3;
    temp_int3 = _Mtx_lock(temp_long3);
    if (temp_int3 != RENDERING_SYSTEM_MUTEX_LOCK_SUCCESS) {
        __Throw_C_error_std__YAXH_Z(temp_int3);
    }
    FUN_18033ad00(render_context + 0x3a8);
    temp_int3 = _Mtx_unlock(temp_long3);
    if (temp_int3 != RENDERING_SYSTEM_MUTEX_UNLOCK_SUCCESS) {
        __Throw_C_error_std__YAXH_Z(temp_int3);
    }
    
    *(int32_t *)(render_context + 0x228) = 0xffffffff;
    (**(code **)(*(longlong *)(render_context + 0x118) + 0x10))((longlong *)(render_context + 0x118), &system_buffer_ptr);
    
    // 清理渲染对象链表
    temp_ptr1 = *(longlong **)(render_context + 0x9f8);
    temp_long3 = *temp_ptr1;
    temp_ptr4 = temp_ptr1;
    if (temp_long3 == 0) {
        temp_ptr4 = temp_ptr1 + 1;
        temp_long3 = *temp_ptr4;
        while (temp_long3 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long3 = *temp_ptr4;
        }
    }
    
    if (temp_long3 != temp_ptr1[*(longlong *)(render_context + 0xa00)]) {
        do {
            temp_ptr1 = *(longlong **)(temp_long3 + 8);
            if (temp_ptr1 != (longlong *)0x0) {
                temp_ptr4 = (longlong *)temp_ptr1[1];
                temp_long3 = temp_ptr4[temp_ptr1[2]];
                temp_long2 = *temp_ptr4;
                if (temp_long2 == 0) {
                    temp_ptr4 = temp_ptr4 + 1;
                    temp_long2 = *temp_ptr4;
                    while (temp_long2 == 0) {
                        temp_ptr4 = temp_ptr4 + 1;
                        temp_long2 = *temp_ptr4;
                    }
                }
                while (stack_ptr1 = temp_ptr1, temp_long2 != temp_long3) {
                    temp_long1 = *(longlong *)(temp_long2 + 8);
                    if (temp_long1 != 0) {
                        FUN_180320da0(temp_long1);
                        FUN_18064e900(temp_long1);
                    }
                    *(uint64_t *)(temp_long2 + 8) = 0;
                    temp_long2 = *(longlong *)(temp_long2 + 0x10);
                    while (temp_long2 == 0) {
                        temp_ptr4 = temp_ptr4 + 1;
                        temp_long2 = *temp_ptr4;
                    }
                }
                FUN_18033ad00(temp_ptr1);
                _Mtx_destroy_in_situ();
                stack_ptr1 = temp_ptr1;
                FUN_18033ad00(temp_ptr1);
                if ((1 < (ulonglong)temp_ptr1[2]) && (temp_ptr1[1] != 0)) {
                    FUN_18064e900();
                }
                FUN_18064e900(temp_ptr1);
            }
            temp_long3 = *(longlong *)(temp_long3 + 0x10);
            while (temp_long3 == 0) {
                temp_ptr4 = temp_ptr4 + 1;
                temp_long3 = *temp_ptr4;
            }
        } while (temp_long3 != *(longlong *)((*(longlong *)(render_context + 0x9f8) + *(longlong *)(render_context + 0xa00) * 8)));
        stack_ptr1 = (longlong *)0x0;
    }
    
    // 继续清理其他资源...
    FUN_18033ad00(render_context + 0x9f0);
    FUN_18033ae70(render_context + 0x4a8);
    
    // 清理纹理资源
    temp_ptr1 = *(longlong **)(render_context + 0x570);
    temp_long3 = *temp_ptr1;
    temp_ptr4 = temp_ptr1;
    if (temp_long3 == 0) {
        temp_ptr4 = temp_ptr1 + 1;
        temp_long3 = *temp_ptr4;
        while (temp_long3 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long3 = *temp_ptr4;
        }
    }
    
    if (temp_long3 != temp_ptr1[*(longlong *)(render_context + 0x578)]) {
        do {
            stack_ptr1 = *(longlong **)(temp_long3 + 8);
            if (stack_ptr1 != (longlong *)0x0) {
                if (*stack_ptr1 == 0) {
                    FUN_18064e900(stack_ptr1);
                }
                FUN_18064e900();
            }
            *(uint64_t *)(temp_long3 + 8) = 0;
            temp_long3 = *(longlong *)(temp_long3 + 0x10);
            while (temp_long3 == 0) {
                temp_ptr4 = temp_ptr4 + 1;
                temp_long3 = *temp_ptr4;
            }
            stack_ptr1 = (longlong *)0x0;
        } while (temp_long3 != *(longlong *)((*(longlong *)(render_context + 0x570) + *(longlong *)(render_context + 0x578) * 8)));
    }
    
    FUN_18033ad00(render_context + 0x568);
    
    // 清理渲染缓冲区
    temp_long3 = render_context + 0x530;
    temp_ptr2 = *(uint64_t **)(render_context + 0x540);
    if (temp_ptr2 != (uint64_t *)0x0) {
        FUN_18004b790(temp_long3, *temp_ptr2);
        FUN_18064e900(temp_ptr2);
    }
    
    *(longlong *)temp_long3 = temp_long3;
    *(longlong *)(render_context + 0x538) = temp_long3;
    *(uint64_t *)(render_context + 0x540) = 0;
    *(int8_t *)(render_context + 0x548) = 0;
    *(uint64_t *)(render_context + 0x550) = 0;
    FUN_18033ad00(render_context + 0x568);
    
    // 清理着色器资源
    temp_ptr1 = *(longlong **)(render_context + 0x6c0);
    temp_long3 = *temp_ptr1;
    temp_ptr4 = temp_ptr1;
    if (temp_long3 == 0) {
        temp_ptr4 = temp_ptr1 + 1;
        temp_long3 = *temp_ptr4;
        while (temp_long3 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long3 = *temp_ptr4;
        }
    }
    
    if (temp_long3 != temp_ptr1[*(longlong *)(render_context + 0x6c8)]) {
        do {
            temp_ptr1 = *(longlong **)(temp_long3 + 8);
            if (temp_ptr1 != (longlong *)0x0) {
                temp_ptr4 = (longlong *)temp_ptr1[1];
                temp_long3 = temp_ptr4[temp_ptr1[2]];
                temp_long2 = *temp_ptr4;
                if (temp_long2 == 0) {
                    temp_ptr4 = temp_ptr4 + 1;
                    temp_long2 = *temp_ptr4;
                    while (temp_long2 == 0) {
                        temp_ptr4 = temp_ptr4 + 1;
                        temp_long2 = *temp_ptr4;
                    }
                }
                while (stack_ptr1 = temp_ptr1, temp_long2 != temp_long3) {
                    if (*(longlong *)(temp_long2 + 8) != 0) {
                        *(void **)(*(longlong *)(temp_long2 + 8) + 0x50) = &system_state_ptr;
                        FUN_18064e900();
                    }
                    *(uint64_t *)(temp_long2 + 8) = 0;
                    temp_long2 = *(longlong *)(temp_long2 + 0x10);
                    while (temp_long2 == 0) {
                        temp_ptr4 = temp_ptr4 + 1;
                        temp_long2 = *temp_ptr4;
                    }
                }
                FUN_18033ad00(temp_ptr1);
                _Mtx_destroy_in_situ();
                stack_ptr1 = temp_ptr1;
                FUN_18033ad00(temp_ptr1);
                if ((1 < (ulonglong)temp_ptr1[2]) && (temp_ptr1[1] != 0)) {
                    FUN_18064e900();
                }
                FUN_18064e900(temp_ptr1);
            }
            temp_long3 = *(longlong *)(temp_long3 + 0x10);
            while (temp_long3 == 0) {
                temp_ptr4 = temp_ptr4 + 1;
                temp_long3 = *temp_ptr4;
            }
        } while (temp_long3 != *(longlong *)((*(longlong *)(render_context + 0x6c0) + *(longlong *)(render_context + 0x6c8) * 8)));
        stack_ptr1 = (longlong *)0x0;
    }
    
    // 执行最终清理操作
    FUN_1803214c0(render_context);
    FUN_18033ae70(render_context + 0x638);
    FUN_18033ad00(render_context + 0x6b8);
    FUN_18033b1a0(render_context + 0x988);
    
    // 清理渲染目标
    temp_long3 = render_context + 0xbf8;
    FUN_18033c0f0(temp_long3, *(uint64_t *)(render_context + 0xc08));
    *(longlong *)temp_long3 = temp_long3;
    *(longlong *)(render_context + 0xc00) = temp_long3;
    *(uint64_t *)(render_context + 0xc08) = 0;
    *(int8_t *)(render_context + 0xc10) = 0;
    *(uint64_t *)(render_context + 0xc18) = 0;
    
    // 清理渲染管线
    temp_ptr1 = *(longlong **)(render_context + 0x430);
    temp_long3 = *temp_ptr1;
    temp_ptr4 = temp_ptr1;
    if (temp_long3 == 0) {
        temp_ptr4 = temp_ptr1 + 1;
        temp_long3 = *temp_ptr4;
        while (temp_long3 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long3 = *temp_ptr4;
        }
    }
    
    if (temp_long3 != temp_ptr1[*(longlong *)(render_context + 0x438)]) {
        do {
            (**(code **)(**(longlong **)(temp_long3 + 8) + 0x38))();
            temp_long3 = *(longlong *)(temp_long3 + 0x10);
            while (temp_long3 == 0) {
                temp_ptr4 = temp_ptr4 + 1;
                temp_long3 = *temp_ptr4;
            }
        } while (temp_long3 != *(longlong *)((*(longlong *)(render_context + 0x430) + *(longlong *)(render_context + 0x438) * 8)));
    }
    
    FUN_18033ad00(render_context + 0x428);
    
    // 清理渲染状态
    temp_ptr4 = *(longlong **)(render_context + 0xbd0);
    temp_long3 = temp_ptr4[*(longlong *)(render_context + 0xbd8)];
    temp_long2 = *temp_ptr4;
    if (temp_long2 == 0) {
        temp_ptr4 = temp_ptr4 + 1;
        temp_long2 = *temp_ptr4;
        while (temp_long2 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long2 = *temp_ptr4;
        }
    }
    
    while (temp_long2 != temp_long3) {
        if (*(longlong *)(temp_long2 + 8) != 0) {
            FUN_18064e900();
        }
        *(uint64_t *)(temp_long2 + 8) = 0;
        temp_long2 = *(longlong *)(temp_long2 + 0x10);
        while (temp_long2 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long2 = *temp_ptr4;
        }
    }
    
    FUN_18033ad00(render_context + 0xbc8);
    
    // 清理材质资源
    temp_ptr4 = *(longlong **)(render_context + 0xb20);
    temp_long3 = temp_ptr4[*(longlong *)(render_context + 0xb28)];
    temp_long2 = *temp_ptr4;
    if (temp_long2 == 0) {
        temp_ptr4 = temp_ptr4 + 1;
        temp_long2 = *temp_ptr4;
        while (temp_long2 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long2 = *temp_ptr4;
        }
    }
    
    while (temp_long2 != temp_long3) {
        temp_ptr1 = *(longlong **)(temp_long2 + 8);
        if (*temp_ptr1 != 0) {
            FUN_18064e900();
        }
        *temp_ptr1 = 0;
        *(uint64_t *)((longlong)temp_ptr1 + 0xc) = RENDERING_SYSTEM_MAX_PRIORITY;
        *(uint64_t *)((longlong)temp_ptr1 + 0x14) = 0;
        *(uint64_t *)((longlong)temp_ptr1 + 0x1c) = 0x3f80000000000000;
        *(uint64_t *)((longlong)temp_ptr1 + 0x24) = 0;
        *(int32_t *)((longlong)temp_ptr1 + 0x2c) = 0;
        *(int32_t *)(temp_ptr1 + 6) = 0;
        *(int32_t *)((longlong)temp_ptr1 + 0x34) = RENDERING_SYSTEM_MAX_PRIORITY;
        *(int32_t *)(temp_ptr1 + 7) = 0;
        *(int32_t *)((longlong)temp_ptr1 + 0x3c) = 0;
        *(int32_t *)(temp_ptr1 + 8) = 0;
        *(int32_t *)((longlong)temp_ptr1 + 0x44) = 0;
        *(int32_t *)(temp_ptr1 + 9) = RENDERING_SYSTEM_MAX_PRIORITY;
        (**(code **)(temp_ptr1[10] + 0x10))(temp_ptr1 + 10, &system_buffer_ptr);
        *(int32_t *)(temp_ptr1 + 0xe) = 0xffffffff;
        temp_long2 = *(longlong *)(temp_long2 + 0x10);
        while (temp_long2 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long2 = *temp_ptr4;
        }
    }
    
    FUN_18033ad00(render_context + 0xb18);
    
    // 清理渲染对象
    temp_ptr4 = *(longlong **)(render_context + 0xaf0);
    temp_long3 = temp_ptr4[*(longlong *)(render_context + 0xaf8)];
    temp_long2 = *temp_ptr4;
    if (temp_long2 == 0) {
        temp_ptr4 = temp_ptr4 + 1;
        temp_long2 = *temp_ptr4;
        while (temp_long2 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long2 = *temp_ptr4;
        }
    }
    
    while (temp_long2 != temp_long3) {
        temp_ptr1 = *(longlong **)(temp_long2 + 8);
        if ((void *)*temp_ptr1 == &unknown_var_8720_ptr) {
            LOCK();
            temp_ptr3 = temp_ptr1 + 1;
            temp_long1 = *temp_ptr3;
            *(int *)temp_ptr3 = (int)*temp_ptr3 + -1;
            UNLOCK();
            if ((int)temp_long1 == 1) {
                temp_char1 = (**(code **)(*temp_ptr1 + 0x58))(temp_ptr1);
                if (temp_char1 == '\0') {
                    (**(code **)(*(longlong *)*render_system_data_buffer + 0x60))((longlong *)*render_system_data_buffer, temp_ptr1);
                }
                else {
                    temp_long1 = __RTCastToVoid(temp_ptr1);
                    (**(code **)*temp_ptr1)(temp_ptr1, 0);
                    if (temp_long1 != 0) {
                        FUN_18064e900(temp_long1);
                    }
                }
            }
            else if ((int)temp_long1 == 2) {
                temp_ptr3 = render_system_data_buffer;
                if (render_system_data_buffer == (longlong *)0x0) {
                    QueryPerformanceCounter(&stack_ptr1);
                    temp_ptr3 = stack_ptr1;
                }
                temp_ptr1[0x4e] = (longlong)((double)((longlong)temp_ptr3 - render_system_data_buffer) * render_system_data_buffer);
            }
        }
        else {
            (**(code **)((void *)*temp_ptr1 + 0x38))(temp_ptr1);
        }
        temp_long2 = *(longlong *)(temp_long2 + 0x10);
        while (temp_long2 == 0) {
            temp_ptr4 = temp_ptr4 + 1;
            temp_long2 = *temp_ptr4;
        }
    }
    
    FUN_18033ad00(render_context + 0xae8);
    
    // 清理渲染缓冲区队列
    temp_long3 = render_context + 0x848;
    stack_ptr3 = (longlong *)temp_long3;
    for (temp_long2 = *(longlong *)(render_context + 0x850); stack_ptr2 = (longlong *)temp_long2, temp_long2 != temp_long3;
         temp_long2 = func_0x00018066bd70(temp_long2)) {
        temp_long1 = *(longlong *)(temp_long2 + 0x30) - *(longlong *)(temp_long2 + 0x28) >> 3;
        if (temp_long1 == 0) {
            stack_ptr1 = (longlong *)0x0;
        }
        else {
            stack_ptr1 = (longlong *)FUN_18062b420(system_memory_pool_ptr, temp_long1 * 8, *(uint *)(temp_long2 + 0x40) & 0xff);
        }
        temp_long1 = *(longlong *)(temp_long2 + 0x28);
        if (temp_long1 != *(longlong *)(temp_long2 + 0x30)) {
            memmove(stack_ptr1, temp_long1, *(longlong *)(temp_long2 + 0x30) - temp_long1);
        }
        if (stack_ptr1 != (longlong *)0x0) {
            FUN_18064e900(stack_ptr1);
        }
    }
    
    // 继续清理其他缓冲区...
    temp_ptr4 = *(longlong **)(render_context + 0x858);
    if (temp_ptr4 != (longlong *)0x0) {
        stack_ptr1 = temp_ptr4;
        FUN_180179f00(temp_long3, *temp_ptr4);
        stack_ptr2 = temp_ptr4 + 4;
        stack_ptr3 = temp_ptr4 + 5;
        if (*stack_ptr3 == 0) {
            FUN_18064e900(temp_ptr4);
        }
        FUN_18064e900();
    }
    
    *(longlong *)temp_long3 = temp_long3;
    *(longlong *)(render_context + 0x850) = temp_long3;
    *(uint64_t *)(render_context + 0x858) = 0;
    *(int8_t *)(render_context + 0x860) = 0;
    *(uint64_t *)(render_context + 0x868) = 0;
    
    // 清理第二组缓冲区
    temp_long3 = render_context + 0x878;
    temp_long2 = *(longlong *)(render_context + 0x880);
    stack_ptr2 = (longlong *)temp_long2;
    stack_ptr3 = (longlong *)temp_long3;
    if (temp_long2 != temp_long3) {
        stack_ptr1 = (longlong *)0x0;
        do {
            temp_long1 = *(longlong *)(temp_long2 + 0x30) - *(longlong *)(temp_long2 + 0x28) >> 3;
            stack_ptr2 = (longlong *)temp_long2;
            if (temp_long1 == 0) {
                stack_ptr1 = (longlong *)0x0;
            }
            else {
                stack_ptr1 = (longlong *)FUN_18062b420(system_memory_pool_ptr, temp_long1 * 8, *(uint *)(temp_long2 + 0x40) & 0xff);
            }
            temp_long1 = *(longlong *)(temp_long2 + 0x28);
            if (temp_long1 != *(longlong *)(temp_long2 + 0x30)) {
                memmove(stack_ptr1, temp_long1, *(longlong *)(temp_long2 + 0x30) - temp_long1);
            }
            if (stack_ptr1 != (longlong *)0x0) {
                FUN_18064e900(stack_ptr1);
            }
            temp_long2 = func_0x00018066bd70(temp_long2);
            stack_ptr2 = (longlong *)temp_long2;
        } while (temp_long2 != temp_long3);
    }
    
    temp_ptr4 = *(longlong **)(render_context + 0x888);
    if (temp_ptr4 != (longlong *)0x0) {
        stack_ptr1 = temp_ptr4;
        FUN_180179f00(temp_long3, *temp_ptr4);
        stack_ptr2 = temp_ptr4 + 4;
        stack_ptr3 = temp_ptr4 + 5;
        if (*stack_ptr3 == 0) {
            FUN_18064e900(temp_ptr4);
        }
        FUN_18064e900();
    }
    
    *(longlong *)temp_long3 = temp_long3;
    *(longlong *)(render_context + 0x880) = temp_long3;
    *(uint64_t *)(render_context + 0x888) = 0;
    *(int8_t *)(render_context + 0x890) = 0;
    *(uint64_t *)(render_context + 0x898) = 0;
    
    // 清理第三组缓冲区
    temp_long3 = render_context + 0x8a8;
    temp_long2 = *(longlong *)(render_context + 0x8b0);
    stack_ptr1 = (longlong *)0x0;
    stack_ptr2 = (longlong *)temp_long2;
    stack_ptr3 = (longlong *)temp_long3;
    if (temp_long2 != temp_long3) {
        stack_ptr1 = (longlong *)0x0;
        do {
            temp_long1 = *(longlong *)(temp_long2 + 0x30) - *(longlong *)(temp_long2 + 0x28) >> 3;
            stack_ptr2 = (longlong *)temp_long2;
            if (temp_long1 == 0) {
                stack_ptr1 = (longlong *)0x0;
            }
            else {
                stack_ptr1 = (longlong *)FUN_18062b420(system_memory_pool_ptr, temp_long1 * 8, *(uint *)(temp_long2 + 0x40) & 0xff);
            }
            temp_long1 = *(longlong *)(temp_long2 + 0x28);
            if (temp_long1 != *(longlong *)(temp_long2 + 0x30)) {
                memmove(stack_ptr1, temp_long1, *(longlong *)(temp_long2 + 0x30) - temp_long1);
            }
            if (stack_ptr1 != (longlong *)0x0) {
                FUN_18064e900(stack_ptr1);
            }
            temp_long2 = func_0x00018066bd70(temp_long2);
            stack_ptr2 = (longlong *)temp_long2;
        } while (temp_long2 != temp_long3);
    }
    
    FUN_180179f00(temp_long3, *(uint64_t *)(render_context + 0x8b8));
    *(longlong *)temp_long3 = temp_long3;
    *(longlong *)(render_context + 0x8b0) = temp_long3;
    *(uint64_t *)(render_context + 0x8b8) = 0;
    *(int8_t *)(render_context + 0x8c0) = 0;
    *(uint64_t *)(render_context + 0x8c8) = 0;
    
    // 清理渲染参数
    temp_int8_t = RENDERING_SYSTEM_INVALID_HANDLE;
    temp_double2 = (double)*(longlong *)(render_context + 0x150);
    if (*(longlong *)(render_context + 0x150) < 0) {
        temp_double2 = temp_double2 + 1.8446744073709552e+19;
    }
    temp_double1 = temp_double2 - 2.0;
    if (temp_double1 <= 0.0) {
        temp_double1 = 0.0;
    }
    temp_int3 = (int)temp_double1;
    stack_ptr1 = (longlong *)CONCAT44(stack_ptr1._4_4_, temp_int3);
    temp_long3 = *(longlong *)(render_context + 0x160) + -1;
    temp_double1 = (double)temp_long3;
    if (temp_long3 < 0) {
        temp_double1 = temp_double1 + 1.8446744073709552e+19;
    }
    if (temp_double2 + 2.0 <= temp_double1) {
        temp_double1 = temp_double2 + 2.0;
    }
    temp_int2 = (int)temp_double1;
    stack_ptr2 = (longlong *)CONCAT44(stack_ptr2._4_4_, temp_int2);
    int_ptr6 = (int *)0x0;
    int_ptr7 = (int *)0x0;
    int_ptr2 = (int *)0x0;
    int_ptr8 = (int *)0x0;
    temp_int16_t = RENDERING_SYSTEM_DEFAULT_BUFFER_SIZE;
    temp_uint1 = 0;
    temp_long3 = *(longlong *)(render_context + 0x230);
    int_ptr4 = (int *)0x0;
    int_ptr1 = (int *)0x0;
    
    if (*(longlong *)(render_context + 0x238) - temp_long3 >> 2 != 0) {
        stack_ptr3 = (longlong *)0x0;
        int_ptr3 = int_ptr4;
        int_ptr5 = int_ptr1;
        int_ptr9 = int_ptr2;
        do {
            temp_int1 = *(int *)((longlong)stack_ptr3 + temp_long3);
            int_ptr1 = int_ptr5;
            temp_uint2 = (uint)int_ptr9;
            if ((temp_int1 < temp_int3) || (int_ptr4 = int_ptr3, temp_int2 <= temp_int1)) {
                if (int_ptr3 < int_ptr2) {
                    int_ptr4 = int_ptr3 + 1;
                    *int_ptr3 = temp_int1;
                    int_ptr7 = int_ptr4;
                }
                else {
                    temp_long2 = (longlong)int_ptr3 - (longlong)int_ptr5 >> 2;
                    if (temp_long2 == 0) {
                        temp_long2 = 1;
parameter_allocation_label:
                        int_ptr1 = (int *)FUN_18062b420(system_memory_pool_ptr, temp_long2 * 4,
                                                       CONCAT71((int7)((ulonglong)stack_ptr3 >> 8), 3), int_ptr9,
                                                       temp_int8_t, int_ptr6, int_ptr7, int_ptr8, temp_int16_t);
                    }
                    else {
                        temp_long2 = temp_long2 * 2;
                        if (temp_long2 != 0) goto parameter_allocation_label;
                        int_ptr1 = (int *)0x0;
                    }
                    if (int_ptr5 != int_ptr3) {
                        memmove(int_ptr1, int_ptr5, (longlong)int_ptr3 - (longlong)int_ptr5);
                    }
                    *int_ptr1 = *(int *)((longlong)stack_ptr3 + temp_long3);
                    int_ptr4 = int_ptr1 + 1;
                    if (int_ptr5 != (int *)0x0) {
                        FUN_18064e900(int_ptr5);
                    }
                    int_ptr2 = int_ptr1 + temp_long2;
                    temp_int3 = (int)stack_ptr1;
                    temp_int2 = (int)stack_ptr2;
                    int_ptr6 = int_ptr1;
                    int_ptr7 = int_ptr4;
                    int_ptr8 = int_ptr2;
                    temp_uint2 = temp_uint1;
                }
            }
            temp_uint1 = temp_uint2 + 1;
            int_ptr9 = (int *)(ulonglong)temp_uint1;
            stack_ptr3 = (longlong *)((longlong)stack_ptr3 + 4);
            temp_long3 = *(longlong *)(render_context + 0x230);
            int_ptr3 = int_ptr4;
            int_ptr5 = int_ptr1;
        } while ((ulonglong)(longlong)(int)temp_uint1 < (ulonglong)(*(longlong *)(render_context + 0x238) - temp_long3 >> 2));
    }
    
    temp_int3 = 0;
    temp_ulong1 = (longlong)int_ptr4 - (longlong)int_ptr1 >> 2;
    int_ptr2 = int_ptr1;
    if (temp_ulong1 != 0) {
        do {
            FUN_180333a00(render_context, *int_ptr2);
            int_ptr4 = *(int **)(render_context + 0x238);
            for (int_ptr6 = *(int **)(render_context + 0x230); (int_ptr6 != int_ptr4 && (*int_ptr6 != *int_ptr2));
                 int_ptr6 = int_ptr6 + 1) {
            }
            int_ptr7 = int_ptr6 + 1;
            if (int_ptr7 < int_ptr4) {
                memmove(int_ptr6, int_ptr7, (longlong)int_ptr4 - (longlong)int_ptr7);
            }
            *(int **)(render_context + 0x238) = int_ptr4 + -1;
            temp_int3 = temp_int3 + 1;
            int_ptr2 = int_ptr2 + 1;
        } while ((ulonglong)(longlong)temp_int3 < temp_ulong1);
    }
    
    if (int_ptr1 == (int *)0x0) {
        return;
    }
    
    FUN_18064e900(int_ptr1);
}