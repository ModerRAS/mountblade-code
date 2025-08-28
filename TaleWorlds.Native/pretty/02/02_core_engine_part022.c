#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part022.c - 核心引擎模块第22部分
// 包含4个函数：字符串处理、路径处理、内存管理和系统调用

// 函数：处理字符串路径并添加到容器中
// 参数：param_1 - 容器指针，param_2 - 源路径1，param_3 - 源路径2
void process_and_add_path_to_container(int64_t *container_ptr, int64_t source_path1, int64_t source_path2)
{
    uint temp_uint1;
    int temp_int;
    uint64_t *temp_ptr1;
    uint64_t *temp_ptr2;
    int8_t *temp_ptr3;
    void *temp_ptr4;
    uint *temp_ptr5;
    uint64_t temp_ulong1;
    uint64_t temp_ulong2;
    int64_t temp_long1;
    int64_t temp_long2;
    int64_t temp_long3;
    uint64_t temp_ulong3;
    uint64_t *temp_ptr6;
    int8_t stack_buffer1[32];
    int64_t stack_long1;
    void *stack_ptr1;
    int8_t *stack_ptr2;
    int32_t stack_uint1;
    uint64_t stack_ulong1;
    int32_t stack_uint2;
    uint64_t *stack_ptr7;
    uint64_t stack_ulong2;
    uint64_t *stack_ptr8;
    int8_t stack_byte1;
    uint8_t stack_pad1;
    uint64_t *stack_ptr9;
    uint64_t stack_ulong3;
    uint stack_uint3;
    int32_t stack_uint4;
    int32_t stack_uint5;
    int32_t stack_uint6;
    uint64_t stack_ulong4;
    uint64_t stack_ulong5;
    int8_t stack_byte2;
    uint8_t stack_pad2;
    int64_t stack_long2;
    uint64_t stack_ulong6;
    uint stack_uint7;
    int32_t stack_uint8;
    int32_t stack_uint9;
    int32_t stack_uint10;
    uint64_t stack_ulong7;
    uint64_t stack_ulong8;
    uint64_t stack_ulong9;
    
    stack_ulong2 = 0xfffffffffffffffe;
    stack_ulong9 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer1;
    stack_uint2 = 0;
    FUN_180057110();
    temp_ptr4 = &system_buffer_ptr;
    if (*(void **)(source_path1 + 8) != (void *)0x0) {
        temp_ptr4 = *(void **)(source_path1 + 8);
    }
    stack_ptr9 = (uint64_t *)0x0;
    stack_ulong3 = 0xf;
    stack_byte1 = 0;
    temp_long2 = -1;
    temp_long3 = -1;
    do {
        temp_long3 = temp_long3 + 1;
    } while (temp_ptr4[temp_long3] != '\0');
    FUN_1800671b0(&stack_byte1);
    temp_ptr4 = &system_buffer_ptr;
    if (*(void **)(source_path2 + 8) != (void *)0x0) {
        temp_ptr4 = *(void **)(source_path2 + 8);
    }
    stack_long2 = 0;
    stack_ulong6 = 0xf;
    stack_byte2 = 0;
    do {
        temp_long2 = temp_long2 + 1;
    } while (temp_ptr4[temp_long2] != '\0');
    FUN_1800671b0(&stack_byte2, temp_ptr4, temp_long2);
    temp_long3 = stack_long2;
    temp_uint1 = stack_uint3;
    stack_ulong4 = 0;
    stack_ulong5 = 0xf;
    stack_uint3 = stack_uint3 & 0xffffff00;
    temp_long2 = CONCAT71(stack_pad2, stack_byte2);
    temp_ulong2 = CONCAT44(stack_uint4, temp_uint1) & 0xffffffffffffff00;
    temp_ptr3 = &stack_byte1;
    if (0xf < stack_ulong3) {
        temp_ptr3 = (int8_t *)CONCAT71(stack_pad1, stack_byte1);
    }
    stack_long1 = stack_long2;
    temp_ptr1 = (uint64_t *)FUN_180066f90(temp_ptr3, stack_ptr9);
    stack_ptr7 = temp_ptr1;
    if (temp_ptr1 == (uint64_t *)0xffffffffffffffff) {
        if (0xf < stack_ulong5) {
            temp_ulong1 = stack_ulong5 + 1;
            temp_ulong3 = temp_ulong2;
            if (0xfff < temp_ulong1) {
                temp_ulong1 = stack_ulong5 + 0x28;
                temp_ulong3 = *(uint64_t *)(temp_ulong2 - 8);
                if (0x1f < (temp_ulong2 - temp_ulong3) - 8) {
                    // 警告：子函数不返回
                    _invalid_parameter_noinfo_noreturn();
                }
            }
            free(temp_ulong3, temp_ulong1);
        }
        stack_ulong4 = 0;
        stack_ulong5 = 0xf;
        stack_uint3 = stack_uint3 & 0xffffff00;
        if (0xf < stack_ulong6) {
            temp_ulong2 = stack_ulong6 + 1;
            temp_long3 = temp_long2;
            if (0xfff < temp_ulong2) {
                temp_ulong2 = stack_ulong6 + 0x28;
                temp_long3 = *(int64_t *)(temp_long2 + -8);
                if (0x1f < (temp_long2 - temp_long3) - 8U) {
                    // 警告：子函数不返回
                    _invalid_parameter_noinfo_noreturn();
                }
            }
            free(temp_long3, temp_ulong2);
        }
        stack_long2 = 0;
        stack_ulong6 = 0xf;
        stack_byte2 = 0;
        if (0xf < stack_ulong3) {
            temp_ulong2 = stack_ulong3 + 1;
            temp_long3 = CONCAT71(stack_pad1, stack_byte1);
            temp_long2 = temp_long3;
            if (0xfff < temp_ulong2) {
                temp_ulong2 = stack_ulong3 + 0x28;
                temp_long2 = *(int64_t *)(temp_long3 + -8);
                if (0x1f < (temp_long3 - temp_long2) - 8U) {
                    // 警告：子函数不返回
                    _invalid_parameter_noinfo_noreturn();
                }
            }
            free(temp_long2, temp_ulong2);
        }
        stack_ptr9 = (uint64_t *)0x0;
        stack_ulong3 = 0xf;
        stack_byte1 = 0;
        // 警告：子函数不返回
        SystemSecurityChecker(stack_ulong9 ^ (uint64_t)stack_buffer1);
    }
    stack_ulong7 = 0;
    stack_ulong8 = 0xf;
    stack_uint7 = stack_uint7 & 0xffffff00;
    temp_ptr2 = temp_ptr1;
    if (stack_ptr9 < temp_ptr1) {
        temp_ptr2 = stack_ptr9;
    }
    temp_ptr3 = &stack_byte1;
    if (0xf < stack_ulong3) {
        temp_ptr3 = (int8_t *)CONCAT71(stack_pad1, stack_byte1);
    }
    FUN_1800671b0(&stack_uint7, temp_ptr3, temp_ptr2);
    stack_uint2 = 1;
    SystemResourceAllocator(&stack_uint3);
    temp_ulong2 = stack_ulong7;
    temp_uint1 = stack_uint7;
    stack_uint3 = stack_uint7;
    stack_uint4 = stack_uint8;
    stack_uint5 = stack_uint9;
    stack_uint6 = stack_uint10;
    stack_ulong5 = stack_ulong8;
    stack_uint2 = 0;
    stack_ulong7 = 0;
    stack_ulong8 = 0xf;
    stack_uint7 = stack_uint7 & 0xffffff00;
    stack_ulong4 = temp_ulong2;
    if (temp_ulong2 == 0) goto PATH_PROCESSING_DONE;
    temp_long2 = 0;
    stack_ptr1 = &system_data_buffer_ptr;
    stack_ulong1 = 0;
    stack_ptr2 = (int8_t *)0x0;
    stack_uint1 = 0;
    stack_ulong4._0_4_ = (int)temp_ulong2;
    temp_int = (int)stack_ulong4;
    stack_ulong4 = temp_ulong2;
    CoreMemoryPoolProcessor(&stack_ptr1, temp_ulong2 & 0xffffffff);
    if (temp_int != 0) {
        temp_ptr5 = &stack_uint3;
        if (0xf < stack_ulong5) {
            temp_ptr5 = (uint *)CONCAT44(stack_uint4, temp_uint1);
        }
        // 警告：子函数不返回
        memcpy(stack_ptr2, temp_ptr5, temp_ulong2 & 0xffffffff);
    }
    stack_uint1 = 0;
    if (stack_ptr2 != (int8_t *)0x0) {
        *stack_ptr2 = 0;
    }
    temp_ptr2 = (uint64_t *)container_ptr[1];
    if (temp_ptr2 < (uint64_t *)container_ptr[2]) {
        container_ptr[1] = (int64_t)(temp_ptr2 + 4);
        *temp_ptr2 = &system_state_ptr;
        temp_ptr2[1] = 0;
        *(int32_t *)(temp_ptr2 + 2) = 0;
        *temp_ptr2 = &system_data_buffer_ptr;
        temp_ptr2[3] = 0;
        temp_ptr2[1] = 0;
        *(int32_t *)(temp_ptr2 + 2) = 0;
        *(int32_t *)(temp_ptr2 + 2) = 0;
        temp_ptr2[1] = stack_ptr2;
        *(int32_t *)((int64_t)temp_ptr2 + 0x1c) = stack_ulong1._4_4_;
        *(int32_t *)(temp_ptr2 + 3) = (int32_t)stack_ulong1;
        stack_uint1 = 0;
        stack_ptr2 = (int8_t *)0x0;
        stack_ulong1 = 0;
        stack_ptr7 = temp_ptr2;
    }
    else {
        temp_long3 = *container_ptr;
        temp_long1 = (int64_t)temp_ptr2 - temp_long3 >> 5;
        if (temp_long1 == 0) {
            temp_long1 = 1;
EXPAND_CONTAINER:
            temp_long2 = CoreMemoryPoolAllocator(system_memory_pool_ptr, temp_long1 << 5, (char)container_ptr[3]);
            temp_ptr2 = (uint64_t *)container_ptr[1];
            temp_long3 = *container_ptr;
        }
        else {
            temp_long1 = temp_long1 * 2;
            if (temp_long1 != 0) goto EXPAND_CONTAINER;
        }
        stack_ptr8 = (uint64_t *)FUN_180059780(temp_long3, temp_ptr2, temp_long2);
        *stack_ptr8 = &system_state_ptr;
        stack_ptr8[1] = 0;
        *(int32_t *)(stack_ptr8 + 2) = 0;
        *stack_ptr8 = &system_data_buffer_ptr;
        stack_ptr8[3] = 0;
        stack_ptr8[1] = 0;
        *(int32_t *)(stack_ptr8 + 2) = 0;
        *(int32_t *)(stack_ptr8 + 2) = stack_uint1;
        stack_ptr8[1] = stack_ptr2;
        *(int32_t *)((int64_t)stack_ptr8 + 0x1c) = stack_ulong1._4_4_;
        *(int32_t *)(stack_ptr8 + 3) = (int32_t)stack_ulong1;
        stack_uint1 = 0;
        stack_ptr2 = (int8_t *)0x0;
        stack_ulong1 = 0;
        temp_ptr6 = stack_ptr8 + 4;
        temp_ptr1 = (uint64_t *)container_ptr[1];
        temp_ptr2 = (uint64_t *)*container_ptr;
        if (temp_ptr2 != temp_ptr1) {
            do {
                (**(code **)*temp_ptr2)(temp_ptr2, 0);
                temp_ptr2 = temp_ptr2 + 4;
            } while (temp_ptr2 != temp_ptr1);
            temp_ptr2 = (uint64_t *)*container_ptr;
        }
        if (temp_ptr2 != (uint64_t *)0x0) {
            // 警告：子函数不返回
            CoreEngine_MemoryPoolManager(temp_ptr2);
        }
        *container_ptr = temp_long2;
        container_ptr[1] = (int64_t)temp_ptr6;
        container_ptr[2] = temp_long1 * 0x20 + temp_long2;
        temp_long3 = stack_long2;
        temp_ptr1 = stack_ptr7;
    }
    stack_ptr1 = &system_data_buffer_ptr;
    if (stack_ptr2 != (int8_t *)0x0) {
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    stack_ptr2 = (int8_t *)0x0;
    stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
    stack_ptr1 = &system_state_ptr;
PATH_PROCESSING_DONE:
    temp_ptr2 = (uint64_t *)(temp_long3 + (int64_t)temp_ptr1);
    if (stack_ptr9 < (uint64_t *)(temp_long3 + (int64_t)temp_ptr1)) {
        temp_ptr2 = stack_ptr9;
    }
    temp_ptr3 = &stack_byte1;
    if (0xf < stack_ulong3) {
        temp_ptr3 = (int8_t *)CONCAT71(stack_pad1, stack_byte1);
    }
    stack_ptr9 = (uint64_t *)((int64_t)stack_ptr9 - (int64_t)temp_ptr2);
    // 警告：子函数不返回
    memmove(temp_ptr3, temp_ptr3 + (int64_t)temp_ptr2, (int64_t)stack_ptr9 + 1);
}

// 警告：移除不可达的代码块 (ram,0x0001800654e7)
// 警告：移除不可达的代码块 (ram,0x0001800654f0)
// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

// 函数：生成系统信息报告
// 参数：param_1 - 报告输出参数
void generate_system_info_report(uint64_t report_param)
{
    byte *byte_ptr1;
    int temp_int;
    bool temp_bool;
    uint64_t *temp_ptr1;
    uint64_t *temp_ptr2;
    uint64_t *temp_ptr3;
    char temp_char;
    int temp_int2;
    int64_t temp_long1;
    uint64_t temp_ulong1;
    uint64_t temp_ulong2;
    uint64_t temp_ulong3;
    byte *byte_ptr2;
    int64_t temp_long2;
    int temp_int3;
    void *temp_ptr4;
    uint64_t *temp_ptr5;
    uint64_t *temp_ptr6;
    uint64_t *temp_ptr7;
    uint64_t *temp_ptr8;
    int32_t temp_uint;
    int8_t stack_buffer1[32];
    void *stack_ptr1;
    int16_t stack_short1[2];
    int16_t stack_short2[2];
    void *stack_ptr2;
    int64_t stack_long1;
    int stack_int1;
    uint64_t stack_ulong1;
    int32_t stack_uint1;
    void *stack_ptr3;
    void *stack_ptr4;
    int32_t stack_uint2;
    uint64_t stack_ulong2;
    void *stack_ptr5;
    void *stack_ptr6;
    int32_t stack_uint3;
    uint64_t stack_ulong3;
    uint64_t stack_ulong4;
    void *stack_ptr7;
    uint64_t stack_ulong5;
    int32_t stack_uint4;
    uint64_t stack_ulong6;
    void *stack_ptr8;
    char *char_ptr;
    int stack_int2;
    int32_t stack_uint5;
    uint64_t stack_ulong7;
    int64_t stack_long2;
    int64_t stack_long3;
    uint64_t *stack_ptr9;
    uint64_t *stack_ptr10;
    uint64_t stack_ulong8;
    int32_t stack_uint6;
    void *stack_ptr11;
    int64_t stack_long4;
    int32_t stack_uint7;
    uint64_t *stack_ptr12;
    uint64_t *stack_ptr13;
    uint64_t stack_ulong9;
    int32_t stack_uint8;
    void *stack_ptr14;
    void *stack_ptr15;
    int32_t stack_uint9;
    void *stack_ptr16;
    void *stack_ptr17;
    int32_t stack_uint10;
    void *stack_ptr18;
    void *stack_ptr19;
    int32_t stack_uint11;
    uint64_t *stack_ptr20;
    uint64_t *stack_ptr21;
    uint64_t stack_ulong10;
    int32_t stack_uint12;
    uint64_t *stack_ptr22;
    uint64_t *stack_ptr23;
    uint64_t stack_ulong11;
    int32_t stack_uint13;
    uint64_t stack_ulong12;
    void *stack_ptr24;
    int8_t *stack_ptr25;
    int32_t stack_uint14;
    int8_t stack_buffer2[16];
    void *stack_ptr26;
    int8_t *stack_ptr27;
    int32_t stack_uint15;
    int8_t stack_buffer3[16];
    void *stack_ptr28;
    void *stack_ptr29;
    int32_t stack_uint16;
    uint8_t stack_buffer4[40];
    int32_t stack_buffer5[14];
    uint64_t stack_ulong13;
    uint64_t stack_ulong14;
    
    stack_ulong12 = 0xfffffffffffffffe;
    stack_ulong14 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer1;
    stack_uint1 = 0;
    FUN_180627e10(report_param, &stack_ptr19, &unknown_var_816_ptr);
    stack_ulong7 = 0;
    stack_long2 = 0;
    temp_ptr4 = &system_buffer_ptr;
    if (stack_ptr17 != (void *)0x0) {
        temp_ptr4 = stack_ptr17;
    }
    temp_uint = FUN_18062dee0(&stack_ulong7, temp_ptr4, &unknown_var_572_ptr);
    stack_ptr2 = &system_data_buffer_ptr;
    stack_ulong1 = 0;
    stack_long1 = 0;
    stack_int1 = 0;
    FUN_180052020(temp_uint, &stack_ptr15);
    if ((system_cache_buffer == (int64_t *)0x0) ||
       (temp_char = (**(code **)(*system_cache_buffer + 0x28))(), temp_char == '\0')) {
        temp_ptr4 = &unknown_var_832_ptr;
    }
    else {
        temp_long1 = (**(code **)(core_system_data_pointer + 0x30))();
        temp_ptr4 = &system_buffer_ptr;
        if (*(void **)(temp_long1 + 8) != (void *)0x0) {
            temp_ptr4 = *(void **)(temp_long1 + 8);
        }
    }
    CoreMemoryPoolValidator(&stack_ptr18, temp_ptr4);
    if ((system_cache_buffer == (int64_t *)0x0) ||
       (temp_char = (**(code **)(*system_cache_buffer + 0x28))(), temp_char == '\0')) {
        temp_ptr4 = &unknown_var_856_ptr;
    }
    else {
        temp_long1 = (**(code **)(core_system_data_pointer + 0x20))();
        temp_ptr4 = &system_buffer_ptr;
        if (*(void **)(temp_long1 + 8) != (void *)0x0) {
            temp_ptr4 = *(void **)(temp_long1 + 8);
        }
    }
    CoreMemoryPoolValidator(&stack_ptr16, temp_ptr4);
    stack_ptr28 = &unknown_var_672_ptr;
    stack_ptr29 = stack_buffer4;
    stack_uint16 = 0;
    stack_buffer4[0] = 0;
    stack_uint1 = 4;
    FUN_18004b860(&stack_ptr28, &unknown_var_4576_ptr, 0x130a7);
    stack_ptr1 = &system_buffer_ptr;
    if (stack_ptr29 != (void *)0x0) {
        stack_ptr1 = stack_ptr29;
    }
    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_48_ptr, &unknown_var_160_ptr);
    stack_uint1 = 0;
    stack_ptr28 = &system_state_ptr;
    stack_ptr1 = &unknown_var_184_ptr;
    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_48_ptr, &unknown_var_192_ptr);
    stack_ptr1 = &system_memory_ba28;
    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_48_ptr, &unknown_var_96_ptr);
    stack_ptr1 = &system_buffer_ptr;
    if (stack_ptr18 != (void *)0x0) {
        stack_ptr1 = stack_ptr18;
    }
    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_48_ptr, &unknown_var_144_ptr);
    stack_ptr1 = &system_buffer_ptr;
    if (stack_ptr16 != (void *)0x0) {
        stack_ptr1 = stack_ptr16;
    }
    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_48_ptr, &unknown_var_128_ptr);
    stack_ptr16 = &system_data_buffer_ptr;
    if (stack_ptr16 != (void *)0x0) {
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    stack_ptr16 = (void *)0x0;
    stack_uint10 = 0;
    stack_ptr16 = &system_state_ptr;
    stack_ptr18 = &system_data_buffer_ptr;
    if (stack_ptr18 != (void *)0x0) {
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    stack_ptr18 = (void *)0x0;
    stack_uint9 = 0;
    stack_ptr18 = &system_state_ptr;
    stack_ptr7 = &system_data_buffer_ptr;
    stack_ulong6 = 0;
    stack_ulong5 = 0;
    stack_uint4 = 0;
    stack_ptr5 = &system_data_buffer_ptr;
    stack_ulong3 = 0;
    stack_ptr6 = (void *)0x0;
    stack_uint3 = 0;
    stack_ptr3 = &system_data_buffer_ptr;
    stack_ulong2 = 0;
    stack_ptr4 = (void *)0x0;
    stack_uint2 = 0;
    temp_ulong1 = FUN_180623ce0();
    System_DataHandler(&stack_ptr5, &unknown_var_808_ptr, temp_ulong1 / 0x100000 & 0xffffffff);
    stack_buffer5[0] = 0x48;
    temp_ulong2 = GetCurrentProcess();
    temp_int = K32GetProcessMemoryInfo(temp_ulong2, stack_buffer5, 0x48);
    temp_ulong1 = 0;
    if (temp_int != 0) {
        temp_ulong1 = stack_ulong13;
    }
    System_DataHandler(&stack_ptr3, &unknown_var_808_ptr, temp_ulong1 / 0x100000 & 0xffffffff);
    stack_ptr1 = &system_buffer_ptr;
    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_48_ptr, &unknown_var_896_ptr);
    stack_ptr1 = &system_buffer_ptr;
    if (stack_ptr6 != (void *)0x0) {
        stack_ptr1 = stack_ptr6;
    }
    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_48_ptr, &unknown_var_920_ptr);
    stack_ptr1 = &system_buffer_ptr;
    if (stack_ptr4 != (void *)0x0) {
        stack_ptr1 = stack_ptr4;
    }
    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_48_ptr, &unknown_var_936_ptr);
    temp_long1 = system_main_module_state;
    stack_ptr3 = &system_data_buffer_ptr;
    if (stack_ptr4 != (void *)0x0) {
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    stack_ptr4 = (void *)0x0;
    stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
    stack_ptr3 = &system_state_ptr;
    stack_ptr5 = &system_data_buffer_ptr;
    if (stack_ptr6 != (void *)0x0) {
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    stack_ptr6 = (void *)0x0;
    stack_ulong3 = stack_ulong3 & 0xffffffff00000000;
    stack_ptr5 = &system_state_ptr;
    stack_ulong5 = 0;
    stack_ulong6 = stack_ulong6 & 0xffffffff00000000;
    stack_ptr7 = &system_state_ptr;
    temp_long2 = core_system_data_pointer;
    if (core_system_data_pointer == 0) {
        QueryPerformanceCounter(&stack_long3);
        temp_long2 = stack_long3;
    }
    stack_ptr1 = (void *)
                ((double)(temp_long2 - core_system_data_pointer) * core_system_data_pointer - *(double *)(temp_long1 + 0x210));
    System_DataHandler(&stack_ptr2, &unknown_var_968_ptr, &unknown_var_48_ptr, &unknown_var_952_ptr);
    stack_ptr1 = &system_buffer_ptr;
    if (stack_ptr15 != (void *)0x0) {
        stack_ptr1 = stack_ptr15;
    }
    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_48_ptr, &unknown_var_112_ptr);
    stack_ptr12 = (uint64_t *)0x0;
    stack_ptr13 = (uint64_t *)0x0;
    stack_ulong9 = 0;
    stack_uint6 = 3;
    stack_ptr20 = (uint64_t *)0x0;
    stack_ptr21 = (uint64_t *)0x0;
    stack_ulong10 = 0;
    stack_uint12 = 3;
    stack_ptr26 = &system_config_ptr;
    stack_ptr27 = stack_buffer3;
    stack_buffer3[0] = 0;
    stack_uint15 = 9;
    strcpy_s(stack_buffer3, 0x10, &unknown_var_984_ptr);
    process_and_add_path_to_container(&stack_ptr20, &stack_ptr15, &stack_ptr26);
    temp_ptr7 = stack_ptr21;
    temp_ptr8 = stack_ptr20;
    if (1 < (uint64_t)((int64_t)stack_ptr21 - (int64_t)stack_ptr20 >> 5)) {
        stack_ptr24 = &system_config_ptr;
        stack_ptr25 = stack_buffer2;
        stack_buffer2[0] = 0;
        stack_uint14 = 1;
        strcpy_s(stack_buffer2, 0x10, &system_memory_df28);
        process_and_add_path_to_container(&stack_ptr12, temp_ptr8 + 4, &stack_ptr24);
        stack_ptr24 = &system_state_ptr;
    }
    stack_ptr26 = &system_state_ptr;
    temp_ptr2 = stack_ptr12;
    for (temp_ptr5 = temp_ptr8; stack_ptr12 = temp_ptr2, temp_ptr5 != temp_ptr7; temp_ptr5 = temp_ptr5 + 4) {
        (**(code **)*temp_ptr5)(temp_ptr5, 0);
        temp_ptr2 = stack_ptr12;
    }
    if (temp_ptr8 != (uint64_t *)0x0) {
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager(temp_ptr8);
    }
    temp_ulong1 = (int64_t)stack_ptr13 - (int64_t)temp_ptr2 >> 5;
    if (temp_ulong1 != 0) {
        if ((system_cache_buffer == (int64_t *)0x0) ||
           (temp_char = (**(code **)(*system_cache_buffer + 0x28))(), temp_char == '\0')) {
            temp_ptr4 = &unknown_var_1000_ptr;
        }
        else {
            temp_long1 = (**(code **)(core_system_data_pointer + 0x28))();
            temp_ptr4 = &system_buffer_ptr;
            if (*(void **)(temp_long1 + 8) != (void *)0x0) {
                temp_ptr4 = *(void **)(temp_long1 + 8);
            }
        }
        CoreMemoryPoolValidator(&stack_ptr11, temp_ptr4);
        stack_ptr9 = (uint64_t *)0x0;
        stack_ptr10 = (uint64_t *)0x0;
        stack_ulong8 = 0;
        stack_uint7 = 3;
        stack_short1[0] = 10;
        if (stack_long4 != 0) {
            FUN_180057980(&stack_ptr11, &stack_ptr9, stack_short1);
        }
        temp_ulong3 = (int64_t)stack_ptr10 - (int64_t)stack_ptr9 >> 5;
        temp_ptr8 = stack_ptr9;
        temp_ptr7 = stack_ptr9;
        temp_ptr5 = stack_ptr10;
        if ((int)temp_ulong3 != 0) {
            stack_ulong4 = temp_ulong3 & 0xffffffff;
            do {
                stack_ptr22 = (uint64_t *)0x0;
                stack_ptr23 = (uint64_t *)0x0;
                stack_ulong11 = 0;
                stack_uint8 = 3;
                stack_short2[0] = 0x23;
                if (temp_ptr8[1] != 0) {
                    FUN_180057980(temp_ptr8, &stack_ptr22, stack_short2);
                }
                temp_ptr3 = stack_ptr23;
                temp_ptr5 = stack_ptr22;
                temp_ptr7 = stack_ptr22;
                if (((int64_t)stack_ptr23 - (int64_t)stack_ptr22 & 0xffffffffffffffe0U) == 0x40) {
                    SystemCore_NetworkHandler0(&stack_ptr8, stack_ptr22);
                    if (char_ptr != (char *)0x0) {
                        stack_int2 = 0;
                        temp_long2 = 0;
                        temp_long1 = 0;
                        temp_char = *char_ptr;
                        while (temp_char != '\0') {
                            if (' ' < char_ptr[temp_long1]) {
                                if (temp_long2 != temp_long1) {
                                    char_ptr[temp_long2] = char_ptr[temp_long1];
                                }
                                stack_int2 = stack_int2 + 1;
                                temp_long2 = temp_long2 + 1;
                            }
                            temp_long1 = temp_long1 + 1;
                            temp_char = char_ptr[temp_long1];
                        }
                        char_ptr[temp_long2] = '\0';
                    }
                    temp_int = 0;
                    if (temp_ulong1 != 0) {
                        temp_ptr7 = temp_ptr2 + 1;
                        do {
                            temp_int2 = *(int *)(temp_ptr7 + 1);
                            temp_int3 = stack_int2;
                            if (temp_int2 == stack_int2) {
                                if (temp_int2 != 0) {
                                    byte_ptr2 = (byte *)*temp_ptr7;
                                    temp_long1 = (int64_t)char_ptr - (int64_t)byte_ptr2;
                                    do {
                                        byte_ptr1 = byte_ptr2 + temp_long1;
                                        temp_int3 = (uint)*byte_ptr2 - (uint)*byte_ptr1;
                                        if (temp_int3 != 0) break;
                                        byte_ptr2 = byte_ptr2 + 1;
                                    } while (*byte_ptr1 != 0);
                                }
STRING_MATCH_FOUND:
                                if (temp_int3 == 0) {
                                    stack_ptr1 = &system_buffer_ptr;
                                    if ((void *)temp_ptr5[5] != (void *)0x0) {
                                        stack_ptr1 = (void *)temp_ptr5[5];
                                    }
                                    temp_ptr4 = &system_buffer_ptr;
                                    if ((void *)temp_ptr5[1] != (void *)0x0) {
                                        temp_ptr4 = (void *)temp_ptr5[1];
                                    }
                                    System_DataHandler(&stack_ptr2, &unknown_var_880_ptr, &unknown_var_1016_ptr, temp_ptr4);
                                    break;
                                }
                            }
                            else if (temp_int2 == 0) goto STRING_MATCH_FOUND;
                            temp_int = temp_int + 1;
                            temp_ptr7 = temp_ptr7 + 4;
                        } while ((uint64_t)(int64_t)temp_int < temp_ulong1);
                    }
                    stack_ptr8 = &system_data_buffer_ptr;
                    if (char_ptr != (char *)0x0) {
                        // 警告：子函数不返回
                        CoreEngine_MemoryPoolManager();
                    }
                    char_ptr = (char *)0x0;
                    stack_uint5 = 0;
                    stack_ptr8 = &system_state_ptr;
                    for (temp_ptr7 = temp_ptr5; temp_ptr7 != temp_ptr3; temp_ptr7 = temp_ptr7 + 4) {
                        (**(code **)*temp_ptr7)(temp_ptr7, 0);
                    }
                }
                else {
                    for (; temp_ptr7 != temp_ptr3; temp_ptr7 = temp_ptr7 + 4) {
                        (**(code **)*temp_ptr7)(temp_ptr7, 0);
                    }
                }
                if (temp_ptr5 != (uint64_t *)0x0) {
                    // 警告：子函数不返回
                    CoreEngine_MemoryPoolManager(temp_ptr5);
                }
                temp_ptr8 = temp_ptr8 + 4;
                stack_ulong4 = stack_ulong4 - 1;
            } while (stack_ulong4 != 0);
            stack_ulong4 = 0;
            temp_ptr8 = stack_ptr9;
            temp_ptr7 = stack_ptr9;
            temp_ptr5 = stack_ptr10;
        }
        for (; temp_ptr6 = stack_ptr10, temp_ptr3 = stack_ptr9, temp_ptr8 != stack_ptr10; temp_ptr8 = temp_ptr8 + 4) {
            stack_ptr9 = temp_ptr7;
            stack_ptr10 = temp_ptr5;
            (**(code **)*temp_ptr8)(temp_ptr8, 0);
            temp_ptr7 = stack_ptr9;
            temp_ptr5 = stack_ptr10;
            stack_ptr10 = temp_ptr6;
            stack_ptr9 = temp_ptr3;
        }
        if (stack_ptr9 != (uint64_t *)0x0) {
            stack_ptr9 = temp_ptr7;
            stack_ptr10 = temp_ptr5;
            // 警告：子函数不返回
            CoreEngine_MemoryPoolManager(temp_ptr3);
        }
        stack_ptr11 = &system_data_buffer_ptr;
        if (stack_long4 != 0) {
            stack_ptr9 = temp_ptr7;
            stack_ptr10 = temp_ptr5;
            // 警告：子函数不返回
            CoreEngine_MemoryPoolManager();
        }
        stack_long4 = 0;
        stack_uint7 = 0;
        stack_ptr11 = &system_state_ptr;
        stack_ptr9 = temp_ptr7;
        stack_ptr10 = temp_ptr5;
    }
    if ((core_system_data_pointer == 0) || (*(int *)(system_main_module_state + 0x340) == 0)) {
        temp_bool = false;
    }
    else {
        temp_bool = true;
    }
    if (((system_main_module_state != 0) && (*(int *)(system_main_module_state + 0x340) == 1)) && (temp_bool)) {
        temp_long1 = (**(code **)(core_system_data_pointer + 0x18))();
        temp_ptr4 = &system_buffer_ptr;
        if (*(void **)(temp_long1 + 8) != (void *)0x0) {
            temp_ptr4 = *(void **)(temp_long1 + 8);
        }
        CoreMemoryPoolValidator(&stack_ptr14, temp_ptr4);
        temp_ptr4 = &system_buffer_ptr;
        if (stack_ptr19 != (void *)0x0) {
            temp_ptr4 = stack_ptr19;
        }
        System_DataHandler(&stack_ptr2, &unknown_var_552_ptr, temp_ptr4);
        stack_ptr14 = &system_data_buffer_ptr;
        if (stack_ptr19 != (void *)0x0) {
            // 警告：子函数不返回
            CoreEngine_MemoryPoolManager();
        }
        stack_ptr19 = (void *)0x0;
        stack_uint11 = 0;
        stack_ptr14 = &system_state_ptr;
    }
    temp_long1 = stack_long2;
    fwrite(stack_long1, 1, (int64_t)stack_int1, stack_long2);
    temp_ptr8 = stack_ptr13;
    temp_ptr7 = temp_ptr2;
    if (temp_long1 != 0) {
        fclose(temp_long1);
        stack_long2 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
        temp_long1 = 0;
        temp_ptr2 = stack_ptr12;
        temp_ptr8 = stack_ptr13;
        temp_ptr7 = stack_ptr12;
    }
    for (; temp_ptr5 = stack_ptr13, temp_ptr2 != stack_ptr13; temp_ptr2 = temp_ptr2 + 4) {
        stack_ptr13 = temp_ptr8;
        (**(code **)*temp_ptr2)(temp_ptr2, 0);
        temp_ptr8 = stack_ptr13;
        stack_ptr13 = temp_ptr5;
    }
    if (temp_ptr7 != (uint64_t *)0x0) {
        stack_ptr13 = temp_ptr8;
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager(temp_ptr7);
    }
    stack_ptr15 = &system_data_buffer_ptr;
    if (stack_ptr15 != (void *)0x0) {
        stack_ptr13 = temp_ptr8;
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    stack_ptr15 = (void *)0x0;
    stack_uint9 = 0;
    stack_ptr15 = &system_state_ptr;
    stack_ptr2 = &system_data_buffer_ptr;
    if (stack_long1 == 0) {
        stack_long1 = 0;
        stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
        stack_ptr2 = &system_state_ptr;
        stack_ptr13 = temp_ptr8;
        if (temp_long1 != 0) {
            fclose(temp_long1);
            stack_long2 = 0;
            LOCK();
            SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
            UNLOCK();
        }
        stack_ptr19 = &system_data_buffer_ptr;
        if (stack_ptr17 == (void *)0x0) {
            stack_ptr17 = (void *)0x0;
            stack_uint8 = 0;
            stack_ptr19 = &system_state_ptr;
            // 警告：子函数不返回
            SystemSecurityChecker(stack_ulong14 ^ (uint64_t)stack_buffer1);
        }
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    stack_ptr13 = temp_ptr8;
    // 警告：子函数不返回
    CoreEngine_MemoryPoolManager();
}

// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

// 函数：初始化错误处理路径
void initialize_error_handling_path(void)
{
    int8_t stack_buffer1[104];
    uint64_t stack_ulong1;
    uint64_t stack_ulong2;
    int32_t stack_uint1;
    int32_t stack_uint2;
    int32_t stack_uint3;
    int32_t stack_uint4;
    int32_t stack_uint5;
    int32_t stack_uint6;
    int32_t stack_uint7;
    int32_t stack_uint8;
    int32_t stack_uint9;
    int8_t stack_byte1;
    int8_t stack_buffer2[512];
    uint64_t stack_ulong3;
    
    stack_ulong3 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_buffer1;
    stack_uint9 = 0x22657865;
    stack_ulong1 = 0x736172435c2e2e22;
    stack_ulong2 = 0x6564616f6c705568;
    stack_byte1 = 0;
    stack_uint5 = 0x616f6c70;
    stack_uint6 = 0x2e726564;
    stack_uint7 = 0x6c627550;
    stack_uint8 = 0x2e687369;
    stack_uint1 = 0x75502e72;
    stack_uint2 = 0x73696c62;
    stack_uint3 = 0x72435c68;
    stack_uint4 = 0x55687361;
    // 警告：子函数不返回
    memset(stack_buffer2, 0, 0x80);
}

// 警告：以'_'开头的全局变量与同一地址的较小符号重叠

// 函数：执行引擎核心操作
// 参数：param_1 - 操作类型，param_2 - 操作参数，param_3 - 附加数据1，param_4 - 附加数据2
void execute_engine_core_operation(uint64_t operation_type, int64_t operation_param, uint64_t extra_data1, uint64_t extra_data2)
{
    code *code_ptr;
    char temp_char;
    uint64_t temp_ulong;
    int64_t temp_long;
    int temp_int;
    int64_t *long_ptr_ptr;
    void *ptr1;
    int64_t stack_long1;
    uint stack_uint;
    void *ptr2;
    int64_t stack_long2;
    int32_t stack_uint1;
    void **ptr_ptr;
    int64_t **long_ptr_ptr_ptr;
    int32_t stack_uint2;
    uint64_t stack_ulong;
    
    stack_ulong = 0xfffffffffffffffe;
    long_ptr_ptr = *(int64_t **)(core_system_data_pointer + 0x18);
    SystemCore_NetworkHandler0(&ptr1, system_main_module_state + 0x170, extra_data1, extra_data2, 0);
    temp_int = stack_uint + 3;
    CoreMemoryPoolProcessor(&ptr1, temp_int);
    *(int32_t *)((uint64_t)stack_uint + stack_long1) = 0x706d74;
    stack_uint = temp_int;
    temp_char = FUN_180624a00(&ptr1);
    if (temp_char == '\0') {
        FUN_180624910(&ptr1);
    }
    ptr_ptr = &ptr1;
    long_ptr_ptr_ptr = &long_ptr_ptr;
    FUN_180066140(&ptr_ptr, SYSTEM_STATE_MANAGER, &system_memory_c7d8);
    FUN_180066140(&ptr_ptr, core_system_data_pointer, &system_memory_cfc0);
    code_ptr = *(code **)(*long_ptr_ptr + 0x40);
    temp_ulong = SystemCore_NetworkHandler0(&ptr_ptr, system_message_context + 0x28);
    (*code_ptr)(long_ptr_ptr, temp_ulong);
    ptr_ptr = (void **)&system_data_buffer_ptr;
    if (long_ptr_ptr_ptr != (int64_t **)0x0) {
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    long_ptr_ptr_ptr = (int64_t **)0x0;
    stack_uint2 = 0;
    ptr_ptr = (void **)&system_state_ptr;
    code_ptr = *(code **)(*long_ptr_ptr + 0x40);
    temp_ulong = SystemCore_NetworkHandler0(&ptr2, system_message_context + 0xe0);
    (*code_ptr)(long_ptr_ptr, temp_ulong);
    ptr2 = &system_data_buffer_ptr;
    if (stack_long2 != 0) {
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    stack_long2 = 0;
    stack_uint1 = 0;
    ptr2 = &system_state_ptr;
    if (operation_param == 0) {
        temp_long = FUN_18005e890(system_context_ptr);
        (**(code **)(*long_ptr_ptr + 8))(long_ptr_ptr, operation_type, *(int32_t *)(temp_long + 0x38));
    }
    else {
        code_ptr = *(code **)(*long_ptr_ptr + 0x10);
        temp_ulong = CoreMemoryPoolValidator(&ptr2, operation_param);
        (*code_ptr)(long_ptr_ptr, operation_type, temp_ulong);
        ptr2 = &system_data_buffer_ptr;
        if (stack_long2 != 0) {
            // 警告：子函数不返回
            CoreEngine_MemoryPoolManager();
        }
        stack_long2 = 0;
        stack_uint1 = 0;
        ptr2 = &system_state_ptr;
    }
    FUN_18062c470(&ptr1);
    ptr1 = &system_data_buffer_ptr;
    if (stack_long1 != 0) {
        // 警告：子函数不返回
        CoreEngine_MemoryPoolManager();
    }
    return;
}

// 警告：以'_'开头的全局变量与同一地址的较小符号重叠