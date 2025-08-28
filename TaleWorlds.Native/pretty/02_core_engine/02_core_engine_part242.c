#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part242.c - 核心引擎模块第242部分
// 包含游戏实体和预制体处理相关功能

/**
 * @brief 处理游戏实体和预制体数据的函数
 * @param param_1 上下文参数
 * @param param_2 实体指针
 * @param param_3 实体数据
 * @param param_4 输出参数1
 * @param param_5 输出参数2
 */
void process_game_entities_and_prefabs(void *param_1, int64_t param_2, int64_t param_3, 
                                       int64_t *param_4, int64_t *param_5)
{
    byte temp_byte1;
    bool comparison_result;
    char char_result;
    int temp_int;
    int64_t *temp_ptr1;
    void *temp_void1;
    void *temp_void2;
    void **temp_void_ptr1;
    int64_t long_temp1;
    int64_t *long_ptr_temp1;
    void *********void_ptr_ptr1;
    byte *byte_ptr_temp1;
    void ******void_ptr_ptr2;
    void **temp_void_ptr2;
    void **temp_void_ptr3;
    void **temp_void_ptr4;
    char *char_ptr1;
    uint uint_temp1;
    char *char_ptr2;
    char *char_ptr3;
    char *char_ptr4;
    int int_temp1;
    void *void_ptr_temp1;
    int64_t *long_ptr_temp2;
    int64_t long_temp2;
    void *********void_ptr_ptr3;
    int int_temp2;
    char *char_ptr5;
    char *char_ptr6;
    void *********void_ptr_ptr4;
    void *********void_ptr_ptr5;
    int int_temp3;
    
    // 栈变量声明
    byte stack_buffer1[32];
    byte stack_buffer2[8];
    void *stack_void_ptr1;
    byte *stack_byte_ptr1;
    int stack_int1;
    uint64_t stack_ulonglong1;
    char *stack_char_ptr1;
    void **stack_void_ptr2;
    int64_t *stack_long_ptr1;
    void *stack_void_ptr3;
    int64_t *stack_long_ptr2;
    char *stack_char_ptr2;
    int64_t *stack_long_ptr3;
    void *********stack_void_ptr_ptr1;
    void *********stack_void_ptr_ptr2;
    void *********stack_void_ptr_ptr3;
    void *stack_void_ptr4;
    void *stack_void_ptr5;
    int stack_int2;
    int stack_int3;
    int64_t *stack_long_ptr4;
    int64_t *stack_long_ptr5;
    int64_t *stack_long_ptr6;
    int64_t *stack_long_ptr7;
    int64_t *stack_long_ptr8;
    int64_t stack_long1;
    void *stack_void_ptr6;
    void *stack_void_ptr_array[3];
    byte stack_buffer3[8];
    byte stack_buffer4[152];
    int64_t stack_long_array[13];
    void *stack_void_ptr7;
    void *stack_void_ptr8;
    char stack_char_array[144];
    uint64_t stack_ulonglong2;
    
    // 初始化变量
    char_ptr5 = GLOBAL_STRING_TABLE_001;
    stack_void_ptr6 = (void *)0xfffffffffffffffe;
    stack_ulonglong2 = GLOBAL_STACK_CHECK_VALUE ^ (uint64_t)stack_buffer1;
    stack_long_ptr8 = param_5;
    int_temp2 = 0;
    stack_int3 = 0;
    stack_char_ptr2 = GLOBAL_STRING_TABLE_001;
    stack_long_ptr5 = param_4;
    stack_long_ptr7 = (int64_t *)param_2;
    stack_long1 = param_3;
    
    // 分配并初始化临时结构体
    temp_ptr1 = (int64_t *)allocate_memory(GLOBAL_MEMORY_POOL, 0x50, 8, 3);
    *temp_ptr1 = (int64_t)&GLOBAL_STRING_001;
    temp_ptr1[1] = 0;
    *(int *)(temp_ptr1 + 2) = 0;
    *temp_ptr1 = (int64_t)&GLOBAL_STRING_002;
    temp_ptr1[3] = 0;
    temp_ptr1[1] = 0;
    *(int *)(temp_ptr1 + 2) = 0;
    stack_long_ptr2 = temp_ptr1 + 5;
    *stack_long_ptr2 = 0;
    temp_ptr1[6] = 0;
    temp_ptr1[7] = 0;
    *(int *)(temp_ptr1 + 8) = 3;
    *(byte *)(temp_ptr1 + 9) = 1;
    stack_long_ptr4 = temp_ptr1;
    stack_long_ptr6 = temp_ptr1;
    
    // 调用虚函数初始化
    (*(void (**)(void *, int64_t))(*temp_ptr1 + 0x10))(temp_ptr1, param_2);
    
    temp_void2 = *GLOBAL_ENGINE_STATE;
    temp_void1 = create_entity_reference(&stack_char_ptr1, temp_ptr1);
    temp_int = register_entity_component(temp_void2, temp_void1);
    *(int *)(temp_ptr1 + 4) = temp_int;
    stack_char_ptr1 = &GLOBAL_STRING_002;
    
    // 内存分配检查
    if (stack_void_ptr2 != (void **)0x0) {
        // 内存分配失败处理
        handle_memory_error();
    }
    stack_void_ptr2 = (void **)0x0;
    stack_void_ptr3 = (void *)((uint64_t)stack_void_ptr3._4_4_ << 0x20);
    stack_char_ptr1 = &GLOBAL_STRING_001;
    temp_void2 = load_entity_data(char_ptr5, temp_ptr1 + 4);
    process_entity_data(temp_void2, &stack_long_ptr4);
    stack_int2 = 3;
    
    // 初始化链表结构
    stack_void_ptr_ptr1 = &stack_void_ptr_ptr1;
    stack_void_ptr_ptr2 = &stack_void_ptr_ptr1;
    stack_void_ptr_ptr3 = (void *********)0x0;
    stack_void_ptr4 = 0;
    stack_void_ptr5 = 0;
    
    // 检查调试模式
    if (*(int *)(GLOBAL_ENGINE_STATE + 4) == 1) {
        // 调试模式处理
        stack_char_ptr1 = &GLOBAL_STRING_002;
        stack_void_ptr3 = (void *)0x0;
        stack_void_ptr2 = (void **)0x0;
        stack_long_ptr1 = (int64_t *)((uint64_t)stack_long_ptr1 & 0xffffffff00000000);
        temp_void_ptr1 = (void **)allocate_memory(GLOBAL_MEMORY_POOL, 0x45, 0x13);
        *(byte *)temp_void_ptr1 = 0;
        stack_void_ptr2 = temp_void_ptr1;
        temp_int = validate_memory_allocation(temp_void_ptr1);
        stack_void_ptr3 = (void *)CONCAT44(stack_void_ptr3._4_4_, temp_int);
        
        // 设置调试信息字符串
        *temp_void_ptr1 = 0x6f4d2f4553414224;  // "$BASE/Module"
        temp_void_ptr1[1] = 0x614e2f73656c7564;   // "dules/Na"
        temp_void_ptr1[2] = 0x646f4d2f65766974;   // "tive/Mod"
        temp_void_ptr1[3] = 0x2f61746144656c75;   // "ule/Data"
        *(int *)(temp_void_ptr1 + 4) = 0x65726f43;  // "Core"
        *(int *)((int64_t)temp_void_ptr1 + 0x24) = 0x656d6147;  // "Game"
        *(int *)(temp_void_ptr1 + 5) = 0x65666552;  // "Refe"
        *(int *)((int64_t)temp_void_ptr1 + 0x2c) = 0x636e6572;  // "renc"
        *(int *)(temp_void_ptr1 + 6) = 0x702f7365;  // "es/p"
        *(int *)((int64_t)temp_void_ptr1 + 0x34) = 0x61666572;  // "prefa"
        *(int *)(temp_void_ptr1 + 7) = 0x6e655f62;  // "b_en"
        *(int *)((int64_t)temp_void_ptr1 + 0x3c) = 0x79746974;  // "tity"
        *(int *)(temp_void_ptr1 + 8) = 0x7478742e;  // ".txt"
        *(byte *)((int64_t)temp_void_ptr1 + 0x44) = 0;
        stack_long_ptr1 = (int64_t *)CONCAT44(stack_long_ptr1._4_4_, 0x44);
        
        // 文件读取操作
        open_file_stream(&stack_void_ptr7, &stack_char_ptr1);
        void_ptr_temp1 = &GLOBAL_DATA_001;
        if (stack_void_ptr8 != (void *)0x0) {
            void_ptr_temp1 = stack_void_ptr8;
        }
        stack_void_ptr_array[0] = &GLOBAL_STREAM_001;
        stack_void_ptr_array[2] = &GLOBAL_STREAM_002;
        
        // 初始化IO流
        initialize_io_stream(stack_long_array);
        stack_int3 = 1;
        create_input_stream(stack_void_ptr_array, stack_buffer3, 0);
        *(void **)((int64_t)stack_void_ptr_array + (int64_t)*(int *)(stack_void_ptr_array[0] + 4)) =
             &GLOBAL_STREAM_003;
        *(int *)((int64_t)stack_void_ptr_array + (int64_t)*(int *)(stack_void_ptr_array[0] + 4) + -4) =
             *(int *)(stack_void_ptr_array[0] + 4) + -0xb8;
        cleanup_stream_buffer(stack_buffer3);
        long_temp1 = read_stream_data(stack_buffer3, void_ptr_temp1, 1);
        
        if (long_temp1 == 0) {
            set_stream_error_state((int64_t)stack_void_ptr_array + (int64_t)*(int *)(stack_void_ptr_array[0] + 4), 2, 0);
        }
        
        // 读取行数据
        temp_ptr1 = (int64_t *)get_stream_line(stack_void_ptr_array, stack_char_array, 0x80);
        
        if ((*(byte *)((int64_t)*(int *)(*temp_ptr1 + 4) + 0x10 + (int64_t)temp_ptr1) & 6) == 0) {
            // 处理字符串数据
            stack_void_ptr1 = &GLOBAL_STRING_002;
            stack_ulonglong1 = 0;
            stack_byte_ptr1 = (byte *)0x0;
            stack_int1 = 0;
            long_temp1 = -1;
            
            // 计算字符串长度
            do {
                long_temp2 = long_temp1;
                long_temp1 = long_temp2 + 1;
            } while (stack_char_array[long_temp2 + 1] != '\0');
            
            if ((int)(long_temp2 + 1) != 0) {
                int_temp1 = (int)long_temp2 + 2;
                int_temp3 = int_temp1;
                if (int_temp1 < 0x10) {
                    int_temp3 = 0x10;
                }
                stack_byte_ptr1 = (byte *)allocate_memory(GLOBAL_MEMORY_POOL, (int64_t)int_temp3, 0x13);
                *stack_byte_ptr1 = 0;
                temp_int = validate_memory_allocation(stack_byte_ptr1);
                stack_ulonglong1 = CONCAT44(stack_ulonglong1._4_4_, temp_int);
                memcpy(stack_byte_ptr1, stack_char_array, int_temp1);
            }
            stack_int1 = 0;
            cleanup_string_buffer(&stack_void_ptr1);
            
            // 创建实体数据结构
            long_ptr_temp1 = (int64_t *)allocate_memory(GLOBAL_MEMORY_POOL, 0x40, (byte)stack_int2);
            temp_ptr1 = long_ptr_temp1 + 4;
            create_entity_data_structure(temp_ptr1, &stack_void_ptr1);
            stack_long_ptr4 = long_ptr_temp1;
            comparison_result = true;
            void_ptr_ptr5 = &stack_void_ptr_ptr1;
            void_ptr_ptr1 = stack_void_ptr_ptr3;
            
            // 遍历链表
            while (void_ptr_ptr1 != (void *********)0x0) {
                void_ptr_ptr5 = void_ptr_ptr1;
                if (*(int *)(void_ptr_ptr1 + 6) == 0) {
                    comparison_result = false;
                    void_ptr_ptr1 = (void *********)*void_ptr_ptr1;
                }
                else {
                    if ((int)long_ptr_temp1[6] == 0) {
                        comparison_result = true;
                    }
                    else {
                        void_ptr_ptr2 = void_ptr_ptr1[5];
                        long_temp1 = long_ptr_temp1[5] - (int64_t)void_ptr_ptr2;
                        do {
                            temp_byte1 = *(byte *)void_ptr_ptr2;
                            uint_temp1 = (uint)*(byte *)((int64_t)void_ptr_ptr2 + long_temp1);
                            if (temp_byte1 != uint_temp1) break;
                            void_ptr_ptr2 = (void ******)((int64_t)void_ptr_ptr2 + 1);
                        } while (uint_temp1 != 0);
                        comparison_result = 0 < (int)(temp_byte1 - uint_temp1);
                    }
                    if (!comparison_result) {
                        void_ptr_ptr1 = (void *********)*void_ptr_ptr1;
                    }
                    else {
                        void_ptr_ptr1 = (void *********)void_ptr_ptr1[1];
                    }
                }
            }
            void_ptr_ptr1 = void_ptr_ptr5;
            
            if (comparison_result) {
                if (void_ptr_ptr5 != stack_void_ptr_ptr2) {
                    void_ptr_ptr1 = (void *********)process_entity_reference(void_ptr_ptr5);
                }
                else {
                    if ((int)long_ptr_temp1[6] == 0) {
                        *temp_ptr1 = (int64_t)&GLOBAL_STRING_002;
                        stack_long_ptr3 = temp_ptr1;
                        if (long_ptr_temp1[5] == 0) {
                            long_ptr_temp1[5] = 0;
                            *(int *)(long_ptr_temp1 + 7) = 0;
                            *temp_ptr1 = (int64_t)&GLOBAL_STRING_001;
                            handle_memory_error(long_ptr_temp1);
                        }
                        handle_memory_error();
                    }
                    if (*(int *)(void_ptr_ptr1 + 6) != 0) {
                        byte_ptr_temp1 = (byte *)long_ptr_temp1[5];
                        long_temp1 = (int64_t)void_ptr_ptr1[5] - (int64_t)byte_ptr_temp1;
                        do {
                            temp_byte1 = *byte_ptr_temp1;
                            uint_temp1 = (uint)byte_ptr_temp1[long_temp1];
                            if (temp_byte1 != uint_temp1) break;
                            byte_ptr_temp1 = byte_ptr_temp1 + 1;
                        } while (uint_temp1 != 0);
                        if ((int)(temp_byte1 - uint_temp1) < 1) {
                            *temp_ptr1 = (int64_t)&GLOBAL_STRING_002;
                            stack_long_ptr3 = temp_ptr1;
                            if (long_ptr_temp1[5] == 0) {
                                long_ptr_temp1[5] = 0;
                                *(int *)(long_ptr_temp1 + 7) = 0;
                                *temp_ptr1 = (int64_t)&GLOBAL_STRING_001;
                                handle_memory_error(long_ptr_temp1);
                            }
                            handle_memory_error();
                        }
                    }
                }
                if ((void **********)void_ptr_ptr5 == &stack_void_ptr_ptr1) {
                    int_temp2 = 1;
                }
                else {
                    if (*(int *)(void_ptr_ptr5 + 6) != 0) {
                        if ((int)long_ptr_temp1[6] == 0) {
                            int_temp2 = 1;
                        }
                        else {
                            void_ptr_ptr2 = void_ptr_ptr5[5];
                            long_temp1 = long_ptr_temp1[5] - (int64_t)void_ptr_ptr2;
                            do {
                                temp_byte1 = *(byte *)void_ptr_ptr2;
                                uint_temp1 = (uint)*(byte *)((int64_t)void_ptr_ptr2 + long_temp1);
                                if (temp_byte1 != uint_temp1) break;
                                void_ptr_ptr2 = (void ******)((int64_t)void_ptr_ptr2 + 1);
                            } while (uint_temp1 != 0);
                            if (0 < (int)(temp_byte1 - uint_temp1)) {
                                int_temp2 = 1;
                            }
                            else {
                                int_temp2 = 0;
                            }
                        }
                    }
                    else {
                        int_temp2 = 1;
                    }
                }
                insert_entity_into_list(long_ptr_temp1, void_ptr_ptr5, &stack_void_ptr_ptr1, int_temp2);
            }
            stack_long_ptr3 = stack_long_array;
            *(void **)((int64_t)stack_void_ptr_array + (int64_t)*(int *)(stack_void_ptr_array[0] + 4)) =
                 &GLOBAL_STREAM_003;
            *(int *)((int64_t)stack_void_ptr_array + (int64_t)*(int *)(stack_void_ptr_array[0] + 4) + -4) =
                 *(int *)(stack_void_ptr_array[0] + 4) + -0xb8;
            cleanup_input_stream(stack_buffer3);
            destroy_input_stream(stack_buffer4);
            destroy_io_stream(stack_long_array);
            stack_void_ptr7 = &GLOBAL_STRING_001;
            stack_char_ptr1 = &GLOBAL_STRING_002;
            if (stack_void_ptr2 != (void **)0x0) {
                handle_memory_error();
            }
            stack_void_ptr2 = (void **)0x0;
            stack_void_ptr3 = (void *)((uint64_t)stack_void_ptr3 & 0xffffffff00000000);
            stack_char_ptr1 = &GLOBAL_STRING_001;
        }
    }
    
    // 获取实体类型
    temp_void2 = get_entity_type(&stack_char_ptr1, param_2);
    char_result = validate_entity_type(temp_void2);
    stack_char_ptr1 = &GLOBAL_STRING_002;
    if (stack_void_ptr2 != (void **)0x0) {
        handle_memory_error();
    }
    stack_void_ptr2 = (void **)0x0;
    stack_void_ptr3 = (void *)((uint64_t)stack_void_ptr3 & 0xffffffff00000000);
    stack_char_ptr1 = &GLOBAL_STRING_001;
    
    if (char_result == '\0') {
        goto cleanup_and_exit;
    }
    
    // 创建预制体对象
    temp_void_ptr1 = (void **)allocate_memory(GLOBAL_MEMORY_POOL, 0x3088, 8, 3);
    *temp_void_ptr1 = 0;
    temp_void_ptr1[1] = 0;
    temp_void_ptr1[4] = 0;
    *(int *)(temp_void_ptr1 + 5) = 0;
    temp_void_ptr1[6] = 0;
    temp_void_ptr1[8] = 0;
    temp_void_ptr1[0x60f] = 0;
    temp_void_ptr1[0x610] = 0;
    temp_void_ptr2 = temp_void_ptr1 + 0xf;
    temp_void_ptr1[0xc] = temp_void_ptr2;
    temp_void_ptr1[0xd] = (uint64_t)(-(int)temp_void_ptr2 & 7) + (int64_t)temp_void_ptr2;
    temp_void_ptr1[0xe] = temp_void_ptr1 + 0x60f;
    temp_void_ptr1[0x60f] = &GLOBAL_PREFAB_VTABLE_001;
    temp_void_ptr1[0x610] = GLOBAL_PREFAB_DESTRUCTOR;
    temp_void_ptr2 = (void **)param_4[1];
    stack_long_ptr3 = temp_void_ptr1;
    
    if (temp_void_ptr2 < (void **)param_4[2]) {
        param_4[1] = (int64_t)(temp_void_ptr2 + 1);
        *temp_void_ptr2 = temp_void_ptr1;
    }
    else {
        temp_void_ptr4 = (void **)*param_4;
        long_temp1 = (int64_t)temp_void_ptr2 - (int64_t)temp_void_ptr4 >> 3;
        if (long_temp1 == 0) {
            long_temp1 = 1;
        }
        else {
            long_temp1 = long_temp1 * 2;
            if (long_temp1 == 0) {
                temp_void_ptr3 = (void **)0x0;
            }
            else {
                temp_void_ptr3 = (void **)allocate_memory(GLOBAL_MEMORY_POOL, long_temp1 * 8, (char)param_4[3]);
                temp_void_ptr2 = (void **)param_4[1];
                temp_void_ptr4 = (void **)*param_4;
            }
        }
        
        if (temp_void_ptr4 != temp_void_ptr2) {
            memmove(temp_void_ptr3, temp_void_ptr4, (int64_t)temp_void_ptr2 - (int64_t)temp_void_ptr4);
        }
        *temp_void_ptr3 = temp_void_ptr1;
        if (*param_4 != 0) {
            handle_memory_error();
        }
        *param_4 = (int64_t)temp_void_ptr3;
        param_4[1] = (int64_t)(temp_void_ptr3 + 1);
        param_4[2] = (int64_t)(temp_void_ptr3 + long_temp1);
    }
    
    temp_void_ptr4 = (void **)0x0;
    temp_ptr1 = (int64_t *)allocate_memory(GLOBAL_MEMORY_POOL, 0x20, 8, 3);
    *temp_ptr1 = 0;
    temp_ptr1[1] = 0;
    temp_ptr1[2] = 0;
    *(int *)(temp_ptr1 + 3) = 10;
    temp_void_ptr2 = (void **)param_5[1];
    stack_long_ptr3 = temp_ptr1;
    
    if (temp_void_ptr2 < (void **)param_5[2]) {
        param_5[1] = (int64_t)(temp_void_ptr2 + 1);
        *temp_void_ptr2 = temp_ptr1;
    }
    else {
        temp_void_ptr3 = (void **)*param_5;
        long_temp1 = (int64_t)temp_void_ptr2 - (int64_t)temp_void_ptr3 >> 3;
        if (long_temp1 == 0) {
            long_temp1 = 1;
        }
        else {
            long_temp1 = long_temp1 * 2;
            if (long_temp1 == 0) {
                temp_void_ptr4 = (void **)0x0;
            }
            else {
                temp_void_ptr4 = (void **)allocate_memory(GLOBAL_MEMORY_POOL, long_temp1 * 8, (char)param_5[3]);
                temp_void_ptr2 = (void **)param_5[1];
                temp_void_ptr3 = (void **)*param_5;
            }
        }
        
        if (temp_void_ptr3 != temp_void_ptr2) {
            memmove(temp_void_ptr4, temp_void_ptr3, (int64_t)temp_void_ptr2 - (int64_t)temp_void_ptr3);
        }
        *temp_void_ptr4 = temp_ptr1;
        if (*param_5 != 0) {
            handle_memory_error();
        }
        *param_5 = (int64_t)temp_void_ptr4;
        param_5[1] = (int64_t)(temp_void_ptr4 + 1);
        param_5[2] = (int64_t)(temp_void_ptr4 + long_temp1);
    }
    
    if (param_2 != 0) {
        setup_entity_components(param_2, temp_void_ptr1, temp_ptr1);
    }
    
    // 处理预制体名称
    char_ptr5 = "prefabs";
    do {
        char_ptr6 = char_ptr5;
        char_ptr5 = char_ptr6 + 1;
    } while (*char_ptr5 != '\0');
    
    // 遍历预制体列表
    for (temp_void_ptr2 = (void **)temp_void_ptr1[6]; temp_void_ptr2 != (void **)0x0;
         temp_void_ptr2 = (void **)temp_void_ptr2[0xb]) {
        char_ptr2 = (char *)*temp_void_ptr2;
        char_ptr5 = (char *)0x0;
        if (char_ptr2 == (char *)0x0) {
            char_ptr2 = (char *)0x180d48d24;
        }
        else {
            char_ptr5 = (char *)temp_void_ptr2[2];
        }
        if (char_ptr5 == char_ptr6 + -0x180a0ffa7) {
            char_ptr5 = char_ptr5 + (int64_t)char_ptr2;
            if (char_ptr5 <= char_ptr2) {
                goto prefab_search_done;
            }
            long_temp1 = (int64_t)&GLOBAL_PREFAB_NAME_001 - (int64_t)char_ptr2;
            while (*char_ptr2 == char_ptr2[long_temp1]) {
                char_ptr2 = char_ptr2 + 1;
                if (char_ptr5 <= char_ptr2) {
                    goto prefab_search_done;
                }
            }
        }
    }
    temp_void_ptr2 = (void **)0x0;
    
prefab_search_done:
    long_temp1 = find_prefab_by_name(temp_void_ptr2, &GLOBAL_PREFAB_NAME_002, stack_buffer2);
    temp_ptr1 = stack_long_ptr6;
    if (long_temp1 == 0) {
        stack_buffer2[0] = 1;
    }
    *(byte *)(stack_long_ptr6 + 9) = stack_buffer2[0];
    long_ptr_temp1 = (int64_t *)load_entity_data(stack_char_ptr2, stack_long_ptr6 + 4);
    stack_long_ptr5 = long_ptr_temp1;
    
    if (temp_void_ptr2 != (void **)0x0) {
        char_ptr5 = "game_entity";
        do {
            char_ptr6 = char_ptr5;
            char_ptr5 = char_ptr6 + 1;
        } while (*char_ptr5 != '\0');
        
        // 搜索游戏实体
        for (char_ptr5 = (char *)temp_void_ptr2[6]; char_ptr5 != (char *)0x0; 
             char_ptr5 = *(char **)(char_ptr5 + 0x58)) {
            char_ptr2 = *(char **)char_ptr5;
            if (char_ptr2 == (char *)0x0) {
                char_ptr2 = (char *)0x180d48d24;
                char_ptr4 = (char *)0x0;
            }
            else {
                char_ptr4 = *(char **)(char_ptr5 + 0x10);
            }
            if (char_ptr4 == char_ptr6 + -0x180a0b67f) {
                char_ptr4 = char_ptr4 + (int64_t)char_ptr2;
                if (char_ptr4 <= char_ptr2) {
                    goto entity_search_done;
                }
                long_temp1 = (int64_t)&GLOBAL_ENTITY_NAME_001 - (int64_t)char_ptr2;
                while (*char_ptr2 == char_ptr2[long_temp1]) {
                    char_ptr2 = char_ptr2 + 1;
                    if (char_ptr4 <= char_ptr2) {
                        goto entity_search_done;
                    }
                }
            }
        }
    }
    
entity_search_done:
    // 清理资源并退出
cleanup_and_exit:
    cleanup_entity_list(&stack_void_ptr_ptr1, stack_void_ptr_ptr3);
    cleanup_stack_frame(stack_ulonglong2 ^ (uint64_t)stack_buffer1);
    
    // 主处理循环
    while (true) {
        stack_ulonglong1 = stack_ulonglong1 & 0xffffffff00000000;
        stack_byte_ptr1 = (byte *)0x0;
        stack_void_ptr1 = &GLOBAL_STRING_001;
        if (char_ptr5 == (char *)0x0) {
            break;
        }
        
        // 处理实体名称
        char_ptr6 = (char *)0x0;
        stack_void_ptr1 = &GLOBAL_STRING_002;
        stack_ulonglong1 = 0;
        stack_byte_ptr1 = (byte *)0x0;
        stack_int1 = 0;
        char_ptr2 = "name";
        do {
            char_ptr4 = char_ptr2;
            char_ptr2 = char_ptr4 + 1;
        } while (*char_ptr2 != '\0');
        
        // 搜索实体属性
        for (temp_void_ptr2 = *(void ***)(char_ptr5 + 0x40); temp_void_ptr2 != (void **)0x0;
             temp_void_ptr2 = (void **)temp_void_ptr2[6]) {
            char_ptr2 = (char *)*temp_void_ptr2;
            if (char_ptr2 == (char *)0x0) {
                char_ptr2 = (char *)0x180d48d24;
                char_ptr1 = char_ptr6;
            }
            else {
                char_ptr1 = (char *)temp_void_ptr2[2];
            }
            if (char_ptr1 == char_ptr4 + -0x180a03a83) {
                char_ptr1 = char_ptr2 + (int64_t)char_ptr1;
                if (char_ptr1 <= char_ptr2) {
                    long_temp1 = 0x180d48d24;
                    if (temp_void_ptr2[1] != 0) {
                        long_temp1 = temp_void_ptr2[1];
                    }
                    add_entity_attribute(&stack_void_ptr1, long_temp1);
                    break;
                }
                long_temp1 = (int64_t)&GLOBAL_ATTRIBUTE_NAME_001 - (int64_t)char_ptr2;
                while (*char_ptr2 == char_ptr2[long_temp1]) {
                    char_ptr2 = char_ptr2 + 1;
                    if (char_ptr1 <= char_ptr2) {
                        long_temp1 = 0x180d48d24;
                        if (temp_void_ptr2[1] != 0) {
                            long_temp1 = temp_void_ptr2[1];
                        }
                        add_entity_attribute(&stack_void_ptr1, long_temp1);
                        break;
                    }
                }
            }
        }
        
        if (*(int *)(GLOBAL_ENGINE_STATE + 4) != 1) {
            goto process_entity_data;
        }
        
        // 处理实体数据
        void_ptr_ptr5 = &stack_void_ptr_ptr1;
        void_ptr_ptr1 = stack_void_ptr_ptr3;
        if (stack_void_ptr_ptr3 == (void *********)0x0) {
            // 处理游戏实体类型
            char_ptr2 = "game_entity";
            do {
                char_ptr4 = char_ptr2;
                char_ptr2 = char_ptr4 + 1;
            } while (*char_ptr2 != '\0');
            
            for (char_ptr2 = *(char **)(char_ptr5 + 0x58); char_ptr5 = char_ptr6, char_ptr2 != (char *)0x0;
                 char_ptr2 = *(char **)(char_ptr2 + 0x58)) {
                char_ptr1 = *(char **)char_ptr2;
                if (char_ptr1 == (char *)0x0) {
                    char_ptr1 = (char *)0x180d48d24;
                    char_ptr3 = char_ptr6;
                }
                else {
                    char_ptr3 = *(char **)(char_ptr2 + 0x10);
                }
                if (char_ptr3 == char_ptr4 + -0x180a0b67f) {
                    char_ptr3 = char_ptr3 + (int64_t)char_ptr1;
                    char_ptr5 = char_ptr2;
                    if (char_ptr3 <= char_ptr1) {
                        break;
                    }
                    long_temp1 = (int64_t)&GLOBAL_ENTITY_TYPE_NAME_001 - (int64_t)char_ptr1;
                    while (*char_ptr1 == char_ptr1[long_temp1]) {
                        char_ptr1 = char_ptr1 + 1;
                        if (char_ptr3 <= char_ptr1) {
                            goto entity_type_found;
                        }
                    }
                }
            }
            
entity_type_found:
            stack_void_ptr1 = &GLOBAL_STRING_002;
            if (stack_byte_ptr1 != (byte *)0x0) {
                handle_memory_error();
            }
        }
        else {
            // 处理实体属性列表
            do {
                if (stack_int1 == 0) {
                    comparison_result = false;
                    void_ptr_ptr3 = (void *********)void_ptr_ptr1[1];
                }
                else {
                    if (*(int *)(void_ptr_ptr1 + 6) == 0) {
                        comparison_result = true;
                    }
                    else {
                        byte_ptr_temp1 = stack_byte_ptr1;
                        do {
                            uint_temp1 = (uint)byte_ptr_temp1[(int64_t)void_ptr_ptr1[5] - (int64_t)stack_byte_ptr1];
                            int_temp3 = *byte_ptr_temp1 - uint_temp1;
                            if (*byte_ptr_temp1 != uint_temp1) {
                                break;
                            }
                            byte_ptr_temp1 = byte_ptr_temp1 + 1;
                        } while (uint_temp1 != 0);
                        comparison_result = 0 < int_temp3;
                        if (int_temp3 < 1) {
                            void_ptr_ptr3 = (void *********)void_ptr_ptr1[1];
                        }
                        else {
                            void_ptr_ptr3 = (void *********)*void_ptr_ptr1;
                        }
                    }
                }
                void_ptr_ptr4 = void_ptr_ptr1;
                if (comparison_result) {
                    void_ptr_ptr4 = void_ptr_ptr5;
                }
                void_ptr_ptr1 = void_ptr_ptr3;
                void_ptr_ptr5 = void_ptr_ptr4;
            } while (void_ptr_ptr3 != (void *********)0x0);
            
            if ((void **********)void_ptr_ptr4 == &stack_void_ptr_ptr1) {
                // 处理游戏实体类型
                char_ptr2 = "game_entity";
                do {
                    char_ptr4 = char_ptr2;
                    char_ptr2 = char_ptr4 + 1;
                } while (*char_ptr2 != '\0');
                
                for (char_ptr2 = *(char **)(char_ptr5 + 0x58); char_ptr5 = char_ptr6, char_ptr2 != (char *)0x0;
                     char_ptr2 = *(char **)(char_ptr2 + 0x58)) {
                    char_ptr1 = *(char **)char_ptr2;
                    if (char_ptr1 == (char *)0x0) {
                        char_ptr1 = (char *)0x180d48d24;
                        char_ptr3 = char_ptr6;
                    }
                    else {
                        char_ptr3 = *(char **)(char_ptr2 + 0x10);
                    }
                    if (char_ptr3 == char_ptr4 + -0x180a0b67f) {
                        char_ptr3 = char_ptr3 + (int64_t)char_ptr1;
                        char_ptr5 = char_ptr2;
                        if (char_ptr3 <= char_ptr1) {
                            break;
                        }
                        long_temp1 = (int64_t)&GLOBAL_ENTITY_TYPE_NAME_001 - (int64_t)char_ptr1;
                        while (*char_ptr1 == char_ptr1[long_temp1]) {
                            char_ptr1 = char_ptr1 + 1;
                            if (char_ptr3 <= char_ptr1) {
                                goto entity_type_processed;
                            }
                        }
                    }
                }
                
entity_type_processed:
                stack_void_ptr1 = &GLOBAL_STRING_002;
                if (stack_byte_ptr1 != (byte *)0x0) {
                    handle_memory_error();
                }
            }
            
            if (*(int *)(void_ptr_ptr4 + 6) != 0) {
                if (stack_int1 != 0) {
                    void_ptr_ptr2 = void_ptr_ptr4[5];
                    long_temp1 = (int64_t)stack_byte_ptr1 - (int64_t)void_ptr_ptr2;
                    do {
                        temp_byte1 = *(byte *)void_ptr_ptr2;
                        uint_temp1 = (uint)*(byte *)((int64_t)void_ptr_ptr2 + long_temp1);
                        if (temp_byte1 != uint_temp1) {
                            break;
                        }
                        void_ptr_ptr2 = (void ******)((int64_t)void_ptr_ptr2 + 1);
                    } while (uint_temp1 != 0);
                    if ((int)(temp_byte1 - uint_temp1) < 1) {
                        goto process_entity_data;
                    }
                }
                // 处理游戏实体类型
                char_ptr2 = "game_entity";
                do {
                    char_ptr4 = char_ptr2;
                    char_ptr2 = char_ptr4 + 1;
                } while (*char_ptr2 != '\0');
                
                for (char_ptr2 = *(char **)(char_ptr5 + 0x58); char_ptr5 = char_ptr6, char_ptr2 != (char *)0x0;
                     char_ptr2 = *(char **)(char_ptr2 + 0x58)) {
                    char_ptr1 = *(char **)char_ptr2;
                    if (char_ptr1 == (char *)0x0) {
                        char_ptr1 = (char *)0x180d48d24;
                        char_ptr3 = char_ptr6;
                    }
                    else {
                        char_ptr3 = *(char **)(char_ptr2 + 0x10);
                    }
                    if (char_ptr3 == char_ptr4 + -0x180a0b67f) {
                        char_ptr3 = char_ptr3 + (int64_t)char_ptr1;
                        char_ptr5 = char_ptr2;
                        if (char_ptr3 <= char_ptr1) {
                            break;
                        }
                        long_temp1 = (int64_t)&GLOBAL_ENTITY_TYPE_NAME_001 - (int64_t)char_ptr1;
                        while (*char_ptr1 == char_ptr1[long_temp1]) {
                            char_ptr1 = char_ptr1 + 1;
                            if (char_ptr3 <= char_ptr1) {
                                goto entity_type_final;
                            }
                        }
                    }
                }
                
entity_type_final:
                stack_void_ptr1 = &GLOBAL_STRING_002;
                if (stack_byte_ptr1 != (byte *)0x0) {
                    handle_memory_error();
                }
            }
        }
        
process_entity_data:
        // 处理实体数据
        stack_long_ptr1 = (int64_t *)0x0;
        int_temp3 = (int)(long_ptr_temp1[1] - *long_ptr_temp1 >> 3) + -1;
        stack_void_ptr2 = (void **)CONCAT44(stack_void_ptr2._4_4_, int_temp3);
        stack_char_ptr1 = char_ptr5;
        stack_void_ptr3 = temp_ptr1;
        temp_void2 = allocate_memory(GLOBAL_MEMORY_POOL, 0x2f0, 0x10, 0xd);
        long_ptr_temp1 = (int64_t *)create_entity_object(temp_void2, 4);
        stack_long_ptr3 = long_ptr_temp1;
        
        if (long_ptr_temp1 != (int64_t *)0x0) {
            (*(void (**)(void *))(*long_ptr_temp1 + 0x28))(long_ptr_temp1);
        }
        
        long_ptr_temp2 = stack_long_ptr2;
        temp_void_ptr2 = (void **)stack_long_ptr2[1];
        if (temp_void_ptr2 < (void **)stack_long_ptr2[2]) {
            stack_long_ptr2[1] = (int64_t)(temp_void_ptr2 + 1);
            *temp_void_ptr2 = long_ptr_temp1;
            if (long_ptr_temp1 != (int64_t *)0x0) {
                (*(void (**)(void *))(*long_ptr_temp1 + 0x28))(long_ptr_temp1);
            }
        }
        else {
            temp_void_ptr1 = (void **)*stack_long_ptr2;
            long_temp1 = (int64_t)temp_void_ptr2 - (int64_t)temp_void_ptr1 >> 3;
            if (long_temp1 == 0) {
                long_temp1 = 1;
            }
            else {
                long_temp1 = long_temp1 * 2;
                if (long_temp1 == 0) {
                    temp_void_ptr3 = (void **)0x0;
                }
                else {
                    temp_void_ptr3 = (void **)allocate_memory(GLOBAL_MEMORY_POOL, long_temp1 * 8);
                    temp_void_ptr2 = (void **)long_ptr_temp2[1];
                    temp_void_ptr1 = (void **)*stack_long_ptr2;
                }
            }
            
            if (temp_void_ptr1 != temp_void_ptr2) {
                memmove(temp_void_ptr3, temp_void_ptr1, (int64_t)temp_void_ptr2 - (int64_t)temp_void_ptr1);
            }
            *(int64_t **)temp_void_ptr3 = long_ptr_temp1;
            if (long_ptr_temp1 != (int64_t *)0x0) {
                (*(void (**)(void *))(*long_ptr_temp1 + 0x28))(long_ptr_temp1);
            }
            stack_char_ptr2 = (char *)temp_void_ptr3 + 8;
            temp_ptr1 = (int64_t *)long_ptr_temp2[1];
            long_ptr_temp2 = (int64_t *)*stack_long_ptr2;
            
            if (long_ptr_temp2 != temp_ptr1) {
                do {
                    if ((int64_t *)*long_ptr_temp2 != (int64_t *)0x0) {
                        (*(void (**)(void))(*(int64_t *)*long_ptr_temp2 + 0x38))();
                    }
                    long_ptr_temp2 = long_ptr_temp2 + 1;
                } while (long_ptr_temp2 != temp_ptr1);
                long_ptr_temp2 = (int64_t *)*stack_long_ptr2;
            }
            
            if (long_ptr_temp2 != (int64_t *)0x0) {
                handle_memory_error(long_ptr_temp2);
            }
            *stack_long_ptr2 = (int64_t)temp_void_ptr3;
            stack_long_ptr2[1] = (int64_t)stack_char_ptr2;
            stack_long_ptr2[2] = (int64_t)(temp_void_ptr3 + long_temp1 * 8);
            temp_ptr1 = stack_long_ptr6;
        }
        
        if (long_ptr_temp1 != (int64_t *)0x0) {
            stack_long_ptr7 = long_ptr_temp1;
            (*(void (**)(void *))(*long_ptr_temp1 + 0x28))(long_ptr_temp1);
        }
        stack_long_ptr7 = (int64_t *)0x0;
        char_ptr6 = *(char **)(stack_long1 + 8);
        stack_long_ptr1 = long_ptr_temp1;
        
        if (char_ptr6 < *(char **)(stack_long1 + 0x10)) {
            *(char **)(stack_long1 + 8) = char_ptr6 + 0x20;
            *(char **)char_ptr6 = char_ptr5;
            *(int *)(char_ptr6 + 8) = int_temp3;
            *(int64_t **)(char_ptr6 + 0x10) = long_ptr_temp1;
            stack_char_ptr2 = char_ptr6;
            if (long_ptr_temp1 != (int64_t *)0x0) {
                (*(void (**)(void *))(*long_ptr_temp1 + 0x28))(long_ptr_temp1);
            }
            *(int64_t **)(char_ptr6 + 0x18) = temp_ptr1;
            long_ptr_temp2 = long_ptr_temp1;
        }
        else {
            expand_entity_buffer(stack_long1, &stack_char_ptr1);
            long_ptr_temp2 = stack_long_ptr1;
        }
        
        // 处理游戏实体类型
        char_ptr6 = "game_entity";
        do {
            char_ptr2 = char_ptr6;
            char_ptr6 = char_ptr2 + 1;
        } while (*char_ptr6 != '\0');
        
        for (char_ptr6 = *(char **)(char_ptr5 + 0x58); char_ptr5 = (char *)0x0, char_ptr6 != (char *)0x0;
             char_ptr6 = *(char **)(char_ptr6 + 0x58)) {
            char_ptr4 = *(char **)char_ptr6;
            if (char_ptr4 == (char *)0x0) {
                char_ptr1 = (char *)0x0;
                char_ptr4 = (char *)0x180d48d24;
            }
            else {
                char_ptr1 = *(char **)(char_ptr6 + 0x10);
            }
            if (char_ptr1 == char_ptr2 + -0x180a0b67f) {
                char_ptr1 = char_ptr1 + (int64_t)char_ptr4;
                char_ptr5 = char_ptr6;
                if (char_ptr1 <= char_ptr4) {
                    break;
                }
                long_temp1 = (int64_t)&GLOBAL_ENTITY_TYPE_NAME_001 - (int64_t)char_ptr4;
                while (*char_ptr4 == char_ptr4[long_temp1]) {
                    char_ptr4 = char_ptr4 + 1;
                    if (char_ptr1 <= char_ptr4) {
                        goto entity_type_cleanup;
                    }
                }
            }
        }
        
entity_type_cleanup:
        if (long_ptr_temp1 != (int64_t *)0x0) {
            (*(void (**)(void *))(*long_ptr_temp1 + 0x38))(long_ptr_temp1);
        }
        if (long_ptr_temp2 != (int64_t *)0x0) {
            (*(void (**)(void *))(*long_ptr_temp2 + 0x38))(long_ptr_temp2);
        }
        stack_void_ptr1 = &GLOBAL_STRING_002;
        long_ptr_temp1 = stack_long_ptr5;
        if (stack_byte_ptr1 != (byte *)0x0) {
            handle_memory_error();
        }
    }
    goto cleanup_and_exit;
}

/**
 * @brief 初始化游戏引擎的函数
 * 简化实现：直接调用引擎初始化函数
 */
void initialize_game_engine(void)
{
    // 调用引擎初始化函数
    initialize_engine_core();
}

// 全局变量和常量定义
#define GLOBAL_STRING_TABLE_001    ((char *)0x180c868e8)
#define GLOBAL_STACK_CHECK_VALUE   ((uint64_t)0x180bf00a8)
#define GLOBAL_MEMORY_POOL         ((void *)0x180c8ed18)
#define GLOBAL_STRING_001          ((void *)0x18098bcb0)
#define GLOBAL_STRING_002          ((void *)0x180a3c3e0)
#define GLOBAL_ENGINE_STATE        ((void *)0x180c86870)
#define GLOBAL_DATA_001           ((void *)0x18098bc73)
#define GLOBAL_STREAM_001          ((void *)0x180a03ac8)
#define GLOBAL_STREAM_002          ((void *)0x180a01620)
#define GLOBAL_STREAM_003          ((void *)0x180a03ad8)
#define GLOBAL_PREFAB_VTABLE_001   ((void *)0x180059b80)
#define GLOBAL_PREFAB_DESTRUCTOR   ((void *)0x180059ba0)
#define GLOBAL_PREFAB_NAME_001     ((void *)0x180a0ffa8)
#define GLOBAL_PREFAB_NAME_002     ((void *)0x180a0ffb0)
#define GLOBAL_ENTITY_NAME_001     ((void *)0x180a0b680)
#define GLOBAL_ENTITY_TYPE_NAME_001 ((void *)0x180a0b680)
#define GLOBAL_ATTRIBUTE_NAME_001  ((void *)0x180a03a84)

// 函数声明（简化实现）
void *allocate_memory(void *pool, size_t size, int alignment, int flags);
void *create_entity_reference(void **ref, void *data);
int register_entity_component(void *engine_state, void *ref);
void handle_memory_error(void);
void *load_entity_data(char *name, void *data);
void process_entity_data(void *data, void **output);
void initialize_io_stream(int64_t *stream);
void create_input_stream(void **array, void *buffer, int flags);
void cleanup_stream_buffer(void *buffer);
int64_t read_stream_data(void *buffer, void *data, int count);
void set_stream_error_state(int64_t state, int error, int flags);
int64_t *get_stream_line(void **stream, char *buffer, size_t size);
void cleanup_string_buffer(void **buffer);
void create_entity_data_structure(void *data, void **input);
void *process_entity_reference(void *ref);
void insert_entity_into_list(void *data, void *ref, void **list, int flags);
void cleanup_input_stream(void *buffer);
void destroy_input_stream(void *buffer);
void destroy_io_stream(int64_t *stream);
void *get_entity_type(void **ref, int64_t param);
char validate_entity_type(void *type);
void setup_entity_components(int64_t param, void *prefab, void *data);
int64_t find_prefab_by_name(void *prefab, void *name, void *buffer);
void cleanup_entity_list(void **list1, void **list2);
void cleanup_stack_frame(uint64_t value);
void add_entity_attribute(void **attr, int64_t value);
void *create_entity_object(void *data, int flags);
void expand_entity_buffer(int64_t *buffer, void **output);
void initialize_engine_core(void);