#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part194.c - 核心引擎模块第194部分
// 包含资源管理、字符串处理和系统初始化相关功能

// 全局变量
static void* g_engine_context = (void*)0x180c8a9d0;      // 引擎上下文
static void* g_resource_manager = (void*)0x180c86870;   // 资源管理器
static void* g_memory_allocator = (void*)0x180c8ed18;    // 内存分配器
static void* g_string_constants = (void*)0x18098bc73;    // 字符串常量池
static void* g_system_handles = (void*)0x180a3c3e0;     // 系统句柄
static void* g_path_constants = (void*)0x180a092c4;       // 路径常量

/**
 * 初始化引擎资源管理系统
 * 负责扫描、加载和管理游戏资源文件
 */
void initialize_resource_system(void)
{
    void** resource_iterator;
    void** temp_ptr1, **temp_ptr2, **temp_ptr3, **temp_ptr4;
    uint32_t flags;
    int iteration_count;
    char* resource_path;
    int64_t resource_count;
    void* temp_ptr5;
    int64_t temp_long1;
    void** temp_ptr6;
    int temp_int1;
    int64_t temp_long2;
    uint32_t* temp_uint_ptr;
    uint64_t temp_ulong1, temp_ulong2, temp_ulong3, temp_ulong4, temp_ulong5;
    bool temp_bool;
    char stack_buffer[32];
    void* stack_ptr1;
    char* stack_ptr2;
    uint32_t stack_uint1;
    uint64_t stack_ulong1;
    uint32_t stack_uint2;
    int stack_int1, stack_int2;
    int64_t stack_long1;
    void** stack_ptr3, **stack_ptr4, **stack_ptr5;
    uint64_t stack_ulong2, stack_ulong3;
    uint32_t stack_uint3;
    void* stack_ptr6, **stack_ptr7, **stack_ptr8;
    uint64_t stack_ulong4;
    int64_t stack_long2;
    uint32_t stack_uint4;
    int64_t stack_long3;
    uint64_t stack_ulong5;
    int64_t stack_long4;
    void** stack_ptr9, **stack_ptr10, **stack_ptr11;
    uint64_t stack_ulong6;
    void* stack_ptr12;
    char* stack_ptr13;
    uint32_t stack_uint5;
    char stack_buffer2[16];
    uint64_t stack_ulong7, stack_ulong8, stack_ulong9;
    
    // 初始化栈变量
    stack_ulong6 = 0xfffffffffffffffe;
    stack_ulong9 = ((uint64_t)g_engine_context) ^ ((uint64_t)stack_buffer);
    stack_uint2 = 0;
    stack_long2 = *(int64_t*)g_engine_context;
    *(uint64_t*)(*(int64_t*)g_engine_context + 0xf0) = 0;
    stack_uint3 = 3;
    stack_ptr3 = &stack_ptr3;
    stack_ptr4 = &stack_ptr3;
    stack_ptr5 = (void**)0x0;
    stack_ulong2 = 0;
    stack_ulong3 = 0;
    stack_long4 = *(int64_t*)g_resource_manager;
    stack_int2 = 0;
    temp_long2 = *(int64_t*)(stack_long4 + 0x8a8);
    
    // 遍历资源列表
    if ((*(int64_t*)(stack_long4 + 0x8b0) - temp_long2) >> 5 != 0) {
        stack_long1 = 0;
        do {
            temp_long1 = stack_long1;
            iteration_count = stack_int2;
            resource_path = *(char**)(stack_long1 * 0x20 + 8 + temp_long2);
            temp_ptr5 = g_string_constants;
            if (resource_path != (char*)0x0) {
                temp_ptr5 = resource_path;
            }
            
            // 处理资源路径字符串
            stack_ptr1 = g_system_handles;
            stack_ulong4 = 0;
            stack_ptr2 = (char*)0x0;
            stack_uint1 = 0;
            
            if (temp_ptr5 != (void*)0x0) {
                temp_long2 = -1;
                do {
                    temp_long1 = temp_long2;
                    temp_long2 = temp_long1 + 1;
                } while (((char*)temp_ptr5)[temp_long2] != '\0');
                
                if ((int)temp_long2 != 0) {
                    temp_int1 = (int)temp_long1 + 2;
                    iteration_count = temp_int1;
                    if (temp_int1 < 0x10) {
                        iteration_count = 0x10;
                    }
                    stack_ptr2 = (char*)allocate_string_memory(g_memory_allocator, (int64_t)iteration_count, 0x13);
                    *stack_ptr2 = 0;
                    stack_ulong4 = get_string_hash(stack_ptr2);
                    // 复制字符串内容
                    memcpy(stack_ptr2, temp_ptr5, temp_int1);
                }
            }
            
            stack_uint1 = 0;
            process_system_handles(g_system_handles, &stack_ptr6, &stack_ptr1);
            stack_ptr2 = (char*)0x0;
            stack_ulong4 = stack_ulong4 & 0xffffffff00000000;
            stack_ptr1 = g_string_constants;
            
            // 初始化路径处理结构
            stack_ptr7 = (void**)0x0;
            stack_ptr8 = (void**)0x0;
            stack_ulong7 = 0;
            stack_uint4 = 3;
            stack_ptr12 = g_path_constants;
            stack_ptr13 = stack_buffer2;
            stack_buffer2[0] = 0;
            stack_uint5 = 4;
            strcpy_s(stack_buffer2, 0x10, g_path_constants);
            process_path_data(&stack_ptr6, &stack_ptr7, &stack_ptr12);
            
            // 处理路径组件
            stack_ptr12 = g_string_constants;
            stack_int1 = 0;
            stack_long3 = 0;
            stack_ulong5 = (int64_t)stack_ptr8 - (int64_t)stack_ptr7 >> 5;
            temp_ptr2 = stack_ptr7;
            temp_ptr3 = stack_ptr7;
            temp_ptr4 = stack_ptr8;
            
            if (stack_ulong5 != 0) {
                do {
                    temp_long2 = stack_long3;
                    temp_ptr2 = stack_ptr7;
                    iteration_count = stack_int1;
                    temp_ptr5 = g_string_constants;
                    
                    // 提取文件路径信息
                    if ((void*)stack_ptr7[stack_long3 * 4 + 1] != (void*)0x0) {
                        temp_ptr5 = (void*)stack_ptr7[stack_long3 * 4 + 1];
                    }
                    
                    temp_long1 = strrchr(temp_ptr5, '/');
                    if (temp_long1 == 0) {
                        temp_ptr5 = g_string_constants;
                        if ((void*)temp_ptr2[temp_long2 * 4 + 1] != (void*)0x0) {
                            temp_ptr5 = (void*)temp_ptr2[temp_long2 * 4 + 1];
                        }
                    } else {
                        temp_ptr5 = (void*)(temp_long1 + 1);
                    }
                    
                    temp_ptr1 = (void*)strchr(temp_ptr5, '.');
                    if (temp_ptr1 == (void*)0x0) {
                        temp_ptr1 = g_string_constants;
                        if ((void*)temp_ptr2[temp_long2 * 4 + 1] != (void*)0x0) {
                            temp_ptr1 = (void*)temp_ptr2[temp_long2 * 4 + 1];
                        }
                        temp_ptr1 = temp_ptr1 + *(int*)(temp_ptr2 + temp_long2 * 4 + 2);
                    }
                    
                    // 提取文件名部分
                    if ((int64_t)temp_ptr1 - (int64_t)temp_ptr5 != 0) {
                        memcpy(&stack_ulong8, temp_ptr5, (int64_t)temp_ptr1 - (int64_t)temp_ptr5);
                    }
                    stack_ulong8 = 0;
                    
                    // 处理文件名字符串
                    temp_ulong1 = 0;
                    flags = 0;
                    stack_ptr6 = g_system_handles;
                    stack_ulong4 = 0;
                    stack_ptr9 = (void*)0x0;
                    stack_uint3 = 0;
                    
                    temp_long1 = -1;
                    do {
                        temp_long1 = temp_long1 + 1;
                    } while (*((char*)((int64_t)&stack_ulong8 + temp_long1 + 1)) != '\0');
                    
                    if ((int)(temp_long1 + 1) != 0) {
                        temp_int1 = (int)temp_long1 + 2;
                        iteration_count = temp_int1;
                        if (temp_int1 < 0x10) {
                            iteration_count = 0x10;
                        }
                        stack_ptr9 = (void*)allocate_string_memory(g_memory_allocator, (int64_t)iteration_count, 0x13);
                        *stack_ptr9 = 0;
                        
                        // 计算字符串哈希值
                        temp_ulong2 = (uint64_t)stack_ptr9 & 0xffffffffffc00000;
                        if (temp_ulong2 != 0) {
                            temp_long2 = ((int64_t)stack_ptr9 - temp_ulong2 >> 0x10) * 0x50 + 0x80 + temp_ulong2;
                            temp_uint_ptr = (uint32_t*)(temp_long2 - (uint64_t)*(uint32_t*)(temp_long2 + 4));
                            if ((*(byte*)((int64_t)temp_uint_ptr + 0xe) & 2) == 0) {
                                temp_ulong1 = temp_uint_ptr[7];
                                if (0x3ffffff < temp_ulong1) {
                                    temp_ulong1 = *temp_uint_ptr << 0x10;
                                }
                            } else {
                                temp_ulong1 = temp_uint_ptr[7];
                                if (temp_ulong1 < 0x4000000) {
                                    temp_ulong3 = (uint64_t)temp_ulong1;
                                } else {
                                    temp_ulong3 = (uint64_t)*temp_uint_ptr << 0x10;
                                }
                                if (0x3ffffff < temp_ulong1) {
                                    temp_ulong1 = *temp_uint_ptr << 0x10;
                                }
                                temp_ulong1 = temp_ulong1 - (int)(((int64_t)stack_ptr9 - 
                                    (((int64_t)((int64_t)temp_uint_ptr + (-0x80 - temp_ulong2)) / 0x50) * 
                                     0x10000 + temp_ulong2)) % temp_ulong3);
                            }
                        }
                        stack_ulong4 = temp_ulong1;
                        memcpy(stack_ptr9, &stack_ulong8, temp_int1);
                    }
                    
                    stack_uint3 = 0;
                    temp_ptr6 = &stack_ptr3;
                    
                    // 遍历资源链表
                    for (temp_ptr1 = (void***)stack_ptr5; temp_ptr1 != (void***)0x0; temp_ptr1 = (void***)temp_ptr1[1]) {
                        temp_ptr6 = temp_ptr1;
                    }
                    
                    if ((temp_ptr6 == &stack_ptr3) || (*(int*)(temp_ptr6 + 6) != 0)) {
                        if ((temp_ptr6 != (void***)stack_ptr3) && (temp_ptr6 != &stack_ptr3)) {
                            cleanup_resource_node(temp_ptr6);
                        }
                        temp_bool = true;
                        temp_ptr6 = &stack_ptr3;
                        temp_ptr1 = (void***)stack_ptr5;
                        
                        while (temp_ptr1 != (void***)0x0) {
                            temp_bool = *(int*)(temp_ptr1 + 6) != 0;
                            temp_ptr6 = temp_ptr1;
                            if (temp_bool) {
                                temp_ptr1 = (void***)temp_ptr1[1];
                            } else {
                                temp_ptr1 = (void***)*temp_ptr1;
                            }
                        }
                        
                        temp_long1 = stack_long3;
                        iteration_count = stack_int1;
                        if (temp_bool) {
                            if (temp_ptr6 == (void***)stack_ptr4) {
                                if ((temp_ptr6 != &stack_ptr3) && (*(int*)(temp_ptr6 + 6) == 0)) {
                                    flags = 1;
                                }
                                temp_long2 = allocate_resource_node(g_memory_allocator, 0x60, (byte)stack_uint3);
                                stack_ptr9 = (void**)(temp_long2 + 0x20);
                                *stack_ptr9 = g_string_constants;
                                *(void**)(temp_long2 + 0x28) = 0;
                                *(uint32_t*)(temp_long2 + 0x30) = 0;
                                *stack_ptr9 = g_system_handles;
                                *(void**)(temp_long2 + 0x38) = 0;
                                *(void**)(temp_long2 + 0x28) = 0;
                                *(uint32_t*)(temp_long2 + 0x30) = 0;
                                stack_ptr10 = stack_ptr9;
                                initialize_resource_node(stack_ptr9, 0);
                                stack_ptr11 = (void**)(temp_long2 + 0x40);
                                *stack_ptr11 = g_string_constants;
                                *(void**)(temp_long2 + 0x48) = 0;
                                *(uint32_t*)(temp_long2 + 0x50) = 0;
                                *stack_ptr11 = g_system_handles;
                                *(void**)(temp_long2 + 0x58) = 0;
                                *(void**)(temp_long2 + 0x48) = 0;
                                *(uint32_t*)(temp_long2 + 0x50) = 0;
                                add_resource_to_tree(temp_long2, temp_ptr6, &stack_ptr3, flags);
                            }
                            temp_ptr6 = (void***)navigate_resource_tree(temp_ptr6);
                            temp_long1 = stack_long3;
                            iteration_count = stack_int1;
                        }
                    }
                    
                    temp_ulong1 = *(uint32_t*)(temp_ptr2 + temp_long1 * 4 + 2);
                    temp_ulong2 = (uint64_t)temp_ulong1;
                    if (temp_ptr2[temp_long1 * 4 + 1] != 0) {
                        initialize_resource_data(temp_ptr6 + 8, temp_ulong2);
                    }
                    
                    if (temp_ulong1 != 0) {
                        memcpy(temp_ptr6[9], temp_ptr2[temp_long1 * 4 + 1], temp_ulong2);
                    }
                    
                    *(uint32_t*)(temp_ptr6 + 10) = 0;
                    if (temp_ptr6[9] != (void**)0x0) {
                        *(byte*)(temp_ulong2 + (int64_t)temp_ptr6[9]) = 0;
                    }
                    
                    *(uint32_t*)((int64_t)temp_ptr6 + 0x5c) = 
                         *(uint32_t*)((int64_t)temp_ptr2 + temp_long1 * 0x20 + 0x1c);
                    
                    stack_ptr9 = (void*)0x0;
                    stack_ulong4 = stack_ulong4 & 0xffffffff00000000;
                    stack_ptr6 = g_string_constants;
                    stack_int1 = iteration_count + 1;
                    stack_long3 = temp_long1 + 1;
                    temp_ptr2 = stack_ptr7;
                    temp_ptr3 = stack_ptr7;
                    temp_ptr4 = stack_ptr8;
                    iteration_count = stack_int2;
                    temp_long1 = stack_long1;
                } while ((uint64_t)(int64_t)stack_int1 < stack_ulong5);
            }
            
            // 清理临时数据结构
            for (; temp_ptr4 = stack_ptr8, temp_ptr3 = stack_ptr7, temp_ptr2 != stack_ptr8; temp_ptr2 = temp_ptr2 + 4) {
                stack_ptr7 = temp_ptr3;
                stack_ptr8 = temp_ptr4;
                (**(code**)*temp_ptr2)(temp_ptr2, 0);
                temp_ptr3 = stack_ptr7;
                temp_ptr4 = stack_ptr8;
                stack_ptr8 = temp_ptr4;
                stack_ptr7 = temp_ptr3;
            }
            
            if (stack_ptr7 != (void**)0x0) {
                stack_ptr7 = temp_ptr3;
                stack_ptr8 = temp_ptr4;
                release_string_memory(temp_ptr3);
            }
            
            stack_ptr6 = g_system_handles;
            if (stack_long4 != 0) {
                stack_ptr7 = temp_ptr3;
                stack_ptr8 = temp_ptr4;
                release_string_memory();
            }
            stack_long4 = 0;
            stack_uint4 = 0;
            stack_ptr6 = g_string_constants;
            stack_int2 = iteration_count + 1;
            stack_long1 = temp_long1 + 1;
            temp_long2 = *(int64_t*)(stack_long4 + 0x8a8);
            stack_ptr7 = temp_ptr3;
            stack_ptr8 = temp_ptr4;
        } while ((uint64_t)(int64_t)stack_int2 < 
                 (uint64_t)(*(int64_t*)(stack_long4 + 0x8b0) - temp_long2 >> 5));
    }
    
    // 初始化默认值
    stack_ulong8 = 0x3f8000003f800000;
    stack_ulong7 = 0x3f000000;
    stack_uint4 = 0;
    
    // 处理资源树节点
    if ((void***)stack_ptr4 != &stack_ptr3) {
        temp_long2 = stack_long2 + 0x150;
        temp_ptr6 = (void***)stack_ptr4;
        temp_long1 = stack_long2;
        stack_long1 = temp_long2;
        
        do {
            temp_ptr1 = (int64_t*)process_resource_node(temp_long2, &stack_ptr10, temp_ptr6 + 4);
            if (*temp_ptr1 != temp_long2) {
                temp_bool = false;
                temp_ulong3 = 0;
                temp_long1 = *(int64_t*)(temp_long1 + 0xc0);
                temp_ulong2 = temp_ulong3;
                
                if (*(int64_t*)(temp_long1 + 200) - temp_long1 >> 3 != 0) {
                    do {
                        temp_long2 = *(int64_t*)(temp_long1 + temp_ulong3);
                        stack_ptr1 = g_system_handles;
                        stack_ulong4 = 0;
                        stack_ptr2 = (char*)0x0;
                        stack_uint1 = 0;
                        
                        if (*(int*)(temp_long2 + 0xb8) != 0) {
                            iteration_count = *(int*)(temp_long2 + 0xb8) + 1;
                            if (iteration_count < 0x10) {
                                iteration_count = 0x10;
                            }
                            stack_ptr2 = (char*)allocate_string_memory(g_memory_allocator, (int64_t)iteration_count, 0x13);
                            *stack_ptr2 = 0;
                            
                            temp_ulong4 = (uint64_t)stack_ptr2 & 0xffffffffffc00000;
                            if (temp_ulong4 == 0) {
                                temp_ulong1 = 0;
                            } else {
                                temp_long1 = ((int64_t)stack_ptr2 - temp_ulong4 >> 0x10) * 0x50 + 0x80 + temp_ulong4;
                                temp_uint_ptr = (uint32_t*)(temp_long1 - (uint64_t)*(uint32_t*)(temp_long1 + 4));
                                if ((*(byte*)((int64_t)temp_uint_ptr + 0xe) & 2) == 0) {
                                    temp_ulong1 = temp_uint_ptr[7];
                                    if (0x3ffffff < temp_ulong1) {
                                        temp_ulong1 = *temp_uint_ptr << 0x10;
                                    }
                                } else {
                                    temp_ulong1 = temp_uint_ptr[7];
                                    if (temp_ulong1 < 0x4000000) {
                                        temp_ulong5 = (uint64_t)temp_ulong1;
                                    } else {
                                        temp_ulong5 = (uint64_t)*temp_uint_ptr << 0x10;
                                    }
                                    if (0x3ffffff < temp_ulong1) {
                                        temp_ulong1 = *temp_uint_ptr << 0x10;
                                    }
                                    temp_ulong1 = temp_ulong1 - (int)(((int64_t)stack_ptr2 - 
                                        (((int64_t)((int64_t)temp_uint_ptr + (-0x80 - temp_ulong4)) / 0x50) * 
                                         0x10000 + temp_ulong4)) % temp_ulong5);
                                }
                            }
                            stack_ulong4 = temp_ulong1;
                            if (*(int*)(temp_long2 + 0xb8) != 0) {
                                memcpy(stack_ptr2, *(void**)(temp_long2 + 0xb0), *(int*)(temp_long2 + 0xb8) + 1);
                            }
                        }
                        
                        if (*(int64_t*)(temp_long2 + 0xb0) != 0) {
                            stack_uint1 = 0;
                            if (stack_ptr2 != (char*)0x0) {
                                *stack_ptr2 = 0;
                            }
                            stack_ulong4 = stack_ulong4 & 0xffffffff;
                        }
                        
                        stack_uint2 = stack_uint2 & 0xfffffffd;
                        stack_ptr1 = g_system_handles;
                        if (stack_ptr2 != (char*)0x0) {
                            release_string_memory(stack_ptr2);
                        }
                        stack_ptr2 = (char*)0x0;
                        stack_ulong4 = stack_ulong4 & 0xffffffff00000000;
                        stack_ptr1 = g_string_constants;
                        temp_long1 = stack_long2;
                        temp_long2 = stack_long1;
                        
                        if (*(int*)(temp_ptr6 + 6) == 0) {
                            temp_bool = true;
                            break;
                        }
                        
                        temp_ulong1 = (int)temp_ulong2 + 1;
                        temp_ulong2 = (uint64_t)temp_ulong1;
                        temp_ulong3 = temp_ulong3 + 8;
                        temp_long1 = *(int64_t*)(stack_long2 + 0xc0);
                    } while ((uint64_t)(int64_t)(int)temp_ulong1 < 
                             (uint64_t)(*(int64_t)(stack_long2 + 200) - temp_long1 >> 3));
                }
                
                if (!temp_bool) {
                    temp_ulong7 = calculate_resource_hash(&stack_ulong8, temp_ptr6 + 8);
                    initialize_resource_data(&stack_ptr6, temp_ulong7);
                    stack_ulong8 = g_string_constants;
                    temp_ptr1 = (void***)g_string_constants;
                    if (temp_ptr6[5] != (void**)0x0) {
                        temp_ptr1 = temp_ptr6[5];
                    }
                    initialize_resource_data(&stack_ptr7, temp_ptr1);
                    temp_ptr5 = g_string_constants;
                    if (stack_ptr9 != (void*)0x0) {
                        temp_ptr5 = stack_ptr9;
                    }
                    initialize_resource_data(&stack_ptr6, temp_ptr5);
                    process_resource_tree(temp_long1, &stack_ptr6, &stack_ptr7, &stack_ulong8);
                    stack_ptr6 = g_system_handles;
                    if (stack_long4 != 0) {
                        release_string_memory();
                    }
                    stack_long4 = 0;
                    stack_uint4 = 0;
                    stack_ptr6 = g_string_constants;
                    stack_ptr7 = (void**)g_system_handles;
                    if (stack_ptr8 != (void**)0x0) {
                        release_string_memory();
                    }
                    stack_ptr8 = (void**)0x0;
                    stack_uint4 = 0;
                    stack_ptr7 = (void**)g_string_constants;
                    stack_ptr6 = g_system_handles;
                    if (stack_ptr9 != (void*)0x0) {
                        release_string_memory();
                    }
                    stack_ptr9 = (void*)0x0;
                    stack_ulong4 = stack_ulong4 & 0xffffffff00000000;
                    stack_ptr6 = g_string_constants;
                }
            }
            temp_ptr6 = (void***)cleanup_resource_node(temp_ptr6);
        } while (temp_ptr6 != &stack_ptr3);
    }
    
    cleanup_resource_tree(&stack_ptr3);
    perform_system_cleanup(stack_ulong9 ^ (uint64_t)stack_buffer);
}

/**
 * 在资源列表中搜索匹配的资源项
 * @param context 资源管理器上下文
 * @param search_params 搜索参数结构
 * @param param3 保留参数
 * @param param4 保留参数
 * @return 找到的资源项指针，未找到返回0
 */
int64_t search_resource_item(int64_t context, int64_t search_params, void* param3, void* param4)
{
    char cmp_char1, cmp_char2;
    int64_t* resource_list_ptr;
    int64_t resource_item;
    char* resource_name;
    int64_t* search_list_ptr;
    bool is_match;
    uint32_t temp_uint;
    uint64_t temp_ulong;
    void* temp_ptr;
    char* temp_char_ptr;
    int temp_int;
    uint64_t stack_ulong;
    
    temp_ulong = 0xfffffffffffffffe;
    resource_list_ptr = *(int64_t**)(context + 0xc0);
    search_list_ptr = *(int64_t**)(context + 200);
    
    do {
        if (resource_list_ptr == search_list_ptr) {
            return 0;
        }
        
        temp_uint = 0;
        resource_item = *resource_list_ptr;
        temp_ptr = g_system_handles;
        stack_ulong = 0;
        temp_char_ptr = (char*)0x0;
        temp_int = 0;
        initialize_resource_data(&temp_ptr, *(uint32_t*)(resource_item + 0xb8));
        
        if (*(int*)(resource_item + 0xb8) != 0) {
            memcpy(temp_char_ptr, *(void**)(resource_item + 0xb0), *(int*)(resource_item + 0xb8) + 1, param4, temp_uint, temp_ulong);
        }
        
        if (*(int64_t*)(resource_item + 0xb0) != 0) {
            temp_int = 0;
            if (temp_char_ptr != (char*)0x0) {
                *temp_char_ptr = '\0';
            }
            stack_ulong = stack_ulong & 0xffffffff;
        }
        
        // 比较资源名称长度
        if (temp_int == *(int*)(search_params + 0x10)) {
            if (temp_int == 0) {
                if (*(int*)(search_params + 0x10) != 0) goto length_mismatch;
                is_match = true;
            } else {
                // 逐字符比较资源名称
                resource_name = temp_char_ptr;
                do {
                    cmp_char1 = *resource_name;
                    cmp_char2 = resource_name[*(int64_t*)(search_params + 8) - (int64_t)temp_char_ptr];
                    if (cmp_char1 != cmp_char2) break;
                    resource_name = resource_name + 1;
                } while (cmp_char2 != '\0');
                is_match = cmp_char1 == cmp_char2;
            }
        } else {
            if (temp_int == 0) {
length_mismatch:
                if (*(int*)(search_params + 0x10) != 0) goto length_mismatch;
                is_match = true;
            } else {
length_mismatch:
                is_match = false;
            }
        }
        
        temp_ptr = g_system_handles;
        if (temp_char_ptr != (char*)0x0) {
            release_string_memory();
        }
        
        if (is_match) {
            return resource_item;
        }
        
        resource_list_ptr = resource_list_ptr + 1;
    } while (true);
}

/**
 * 处理资源注册和映射
 * @param param1 保留参数
 * @param param2 资源描述符
 */
void process_resource_registration(void* param1, int64_t param2)
{
    void** temp_ptr1;
    byte temp_byte1, temp_byte2;
    bool temp_bool;
    void** temp_ptr2;
    int temp_int;
    int64_t temp_long1, temp_long2;
    void** temp_ptr3;
    byte* temp_byte_ptr;
    uint32_t temp_uint;
    void* temp_ptr4;
    int64_t* temp_long_ptr;
    int64_t temp_long3, temp_long4;
    uint64_t temp_ulong;
    int64_t temp_long5;
    int64_t* temp_long_ptr2;
    char stack_buffer[32];
    void* stack_ptr1;
    char* stack_ptr2;
    uint32_t stack_uint;
    uint64_t stack_ulong;
    int64_t* stack_long_ptr;
    void** stack_ptr3, **stack_ptr4;
    void* stack_ptr5;
    int64_t stack_long;
    uint32_t stack_uint2;
    int64_t stack_long2;
    uint64_t stack_ulong2;
    int64_t stack_long3;
    char stack_buffer2[2048];
    uint64_t stack_ulong3;
    
    // 初始化栈变量
    stack_ulong2 = 0xfffffffffffffffe;
    stack_ulong3 = ((uint64_t)g_engine_context) ^ ((uint64_t)stack_buffer);
    temp_long_ptr2 = *(int64_t**)((int64_t)g_engine_context + 0xc0);
    temp_long_ptr = *(int64_t**)((int64_t)g_engine_context + 200);
    stack_long_ptr = temp_long_ptr;
    
    if (temp_long_ptr2 != temp_long_ptr) {
        do {
            temp_long3 = *temp_long_ptr2;
            temp_long4 = temp_long3 + 8;
            stack_long3 = temp_long4;
            temp_int = _Mtx_lock(temp_long4);
            if (temp_int != 0) {
                __Throw_C_error_std__YAXH_Z(temp_int);
            }
            
            temp_long1 = check_resource_exists(temp_long3, param2);
            if (temp_long1 == 0) {
                temp_ptr4 = g_string_constants;
                if (*(void**)(param2 + 8) != (void*)0x0) {
                    temp_ptr4 = *(void**)(param2 + 8);
                }
                mbstowcs(stack_buffer2, temp_ptr4, (int64_t)(*(int*)(param2 + 0x10) + 1));
                
                temp_long2 = (**(code**)(**(int64_t**)(temp_long3 + 0x148) + 0x10))
                               (*(int64_t**)(temp_long3 + 0x148), stack_buffer2);
                
                if ((temp_long2 == 0) && 
                   (temp_long2 = (**(code**)(**(int64_t**)(temp_long3 + 0x148) + 0x10))
                                   (*(int64_t**)(temp_long3 + 0x148), &system_memory_93d8), temp_long2 == 0)) {
                    temp_long2 = (**(code**)(**(int64_t**)(temp_long3 + 0x148) + 8))
                                  (*(int64_t**)(temp_long3 + 0x148), 0);
                }
                
                temp_long1 = allocate_resource_object(g_memory_allocator, 0x30, 8, 3);
                *(int64_t*)(temp_long1 + 0x20) = temp_long2;
                *(int64_t*)(temp_long1 + 0x28) = temp_long3;
                
                stack_ptr1 = g_system_handles;
                stack_ulong = 0;
                stack_ptr2 = (char*)0x0;
                stack_uint = 0;
                initialize_resource_data(&stack_ptr1, *(uint32_t*)(param2 + 0x10));
                
                if (0 < *(int*)(param2 + 0x10)) {
                    temp_ptr4 = g_string_constants;
                    if (*(void**)(param2 + 8) != (void*)0x0) {
                        temp_ptr4 = *(void**)(param2 + 8);
                    }
                    memcpy(stack_ptr2, temp_ptr4, (int64_t)(*(int*)(param2 + 0x10) + 1));
                }
                
                if ((*(int64_t*)(param2 + 8) != 0) && (stack_uint = 0, stack_ptr2 != (char*)0x0)) {
                    *stack_ptr2 = 0;
                }
                
                temp_long2 = check_resource_exists(temp_long3, &stack_ptr1);
                if (temp_long2 == 0) {
                    create_resource_handle(&stack_ptr4, &stack_ptr1);
                    temp_ptr1 = (void**)(temp_long3 + 0x150);
                    stack_long2 = temp_long1;
                    temp_long2 = allocate_string_memory(g_memory_allocator, 0x48, *(byte*)(temp_long3 + 0x178));
                    stack_ptr3 = (void**)(temp_long2 + 0x20);
                    initialize_resource_data(stack_ptr3, &stack_ptr4);
                    *(int64_t*)(temp_long2 + 0x40) = stack_long2;
                    temp_bool = true;
                    temp_ptr2 = temp_ptr1;
                    temp_ptr3 = *(void**)(temp_long3 + 0x160);
                    
                    while (temp_ptr3 != (void**)0x0) {
                        temp_ptr2 = temp_ptr3;
                        if (*(int*)(temp_ptr3 + 6) == 0) {
                            temp_bool = false;
next_node:
                            temp_ptr3 = (void**)*temp_ptr3;
                        } else {
                            if (*(int*)(temp_long2 + 0x30) == 0) {
                                temp_bool = true;
                            } else {
                                temp_byte_ptr = (byte*)temp_ptr3[5];
                                temp_long5 = *(int64_t*)(temp_long2 + 0x28) - (int64_t)temp_byte_ptr;
                                do {
                                    temp_byte1 = *temp_byte_ptr;
                                    temp_uint = (uint32_t)temp_byte_ptr[temp_long5];
                                    if (temp_byte1 != temp_uint) break;
                                    temp_byte_ptr = temp_byte_ptr + 1;
                                } while (temp_uint != 0);
                                temp_bool = 0 < (int)(temp_byte1 - temp_uint);
                            }
                            if (!temp_bool) goto next_node;
                            temp_ptr3 = (void**)temp_ptr3[1];
                        }
                    }
                    
                    temp_ptr3 = temp_ptr2;
                    if (temp_bool) {
                        if (temp_ptr2 != *(void**)(temp_long3 + 0x158)) {
                            temp_ptr3 = (void**)navigate_resource_tree(temp_ptr2);
                            goto insert_node;
                        }
                    } else {
insert_node:
                        if (*(int*)(temp_long2 + 0x30) == 0) {
handle_error:
                            handle_system_error();
                            stack_ptr3 = &stack_ptr4;
                            stack_ptr4 = g_system_handles;
                            if (stack_long != 0) {
                                release_string_memory();
                            }
                            stack_long = 0;
                            stack_uint2 = 0;
                            stack_ptr4 = g_string_constants;
                            goto continue_processing;
                        }
                        if (*(int*)(temp_ptr3 + 6) != 0) {
                            temp_byte_ptr = *(byte**)(temp_long2 + 0x28);
                            temp_long3 = temp_ptr3[5] - (int64_t)temp_byte_ptr;
                            do {
                                temp_byte1 = *temp_byte_ptr;
                                temp_uint = (uint32_t)temp_byte_ptr[temp_long3];
                                if (temp_byte1 != temp_uint) break;
                                temp_byte_ptr = temp_byte_ptr + 1;
                            } while (temp_uint != 0);
                            if ((int)(temp_byte1 - temp_uint) < 1) goto handle_error;
                        }
                    }
                    
                    if (temp_ptr2 == temp_ptr1) goto skip_insertion;
                    if (*(int*)(temp_ptr2 + 6) == 0) goto skip_insertion;
                    if (*(int*)(temp_long2 + 0x30) == 0) goto skip_insertion;
                    temp_byte_ptr = (byte*)temp_ptr2[5];
                    temp_long4 = *(int64_t*)(temp_long2 + 0x28) - (int64_t)temp_byte_ptr;
                    goto compare_strings;
                }
continue_processing:
                stack_ptr1 = g_system_handles;
                if (stack_ptr2 != (char*)0x0) {
                    release_string_memory();
                }
                stack_ptr2 = (char*)0x0;
                stack_ulong = stack_ulong & 0xffffffff00000000;
                stack_ptr1 = g_string_constants;
                temp_int = _Mtx_unlock(temp_long4);
                temp_long_ptr = stack_long_ptr;
                if (temp_int != 0) {
                    __Throw_C_error_std__YAXH_Z(temp_int);
                    temp_long_ptr = stack_long_ptr;
                }
            } else {
                temp_int = _Mtx_unlock(temp_long4);
                if (temp_int != 0) {
                    __Throw_C_error_std__YAXH_Z(temp_int);
                }
            }
        } while ((temp_long1 == 0) && (temp_long_ptr2 = temp_long_ptr2 + 1, temp_long_ptr2 != temp_long_ptr));
    }
    
    perform_system_cleanup(stack_ulong3 ^ (uint64_t)stack_buffer);
    
    // 字符串比较循环
    while (temp_byte_ptr = temp_byte_ptr + 1, temp_uint != 0) {
compare_strings:
        temp_byte1 = *temp_byte_ptr;
        temp_uint = (uint32_t)temp_byte_ptr[temp_long4];
        if (temp_byte1 != temp_uint) break;
    }
    
    if ((int)(temp_byte1 - temp_uint) < 1) {
        temp_ulong = 1;
    } else {
skip_insertion:
        temp_ulong = 0;
    }
    add_resource_to_tree(temp_long2, temp_ptr3, temp_ptr1, temp_ulong);
}

// 简化实现说明：
// 1. 原始实现包含大量复杂的指针操作和内存管理
// 2. 简化实现使用语义化函数名和变量名
// 3. 保留了核心逻辑结构，但简化了复杂的嵌套循环
// 4. 内存分配和释放操作使用统一的接口函数
// 5. 字符串处理使用标准的字符串操作函数