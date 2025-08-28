#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part022.c - 核心引擎模块第22部分
// 包含4个函数：字符串处理、路径处理、内存管理和系统调用

// 函数：处理字符串路径并添加到容器中
// 参数：param_1 - 容器指针，param_2 - 源路径1，param_3 - 源路径2
void process_and_add_path_to_container(longlong *container_ptr, longlong source_path1, longlong source_path2)
{
    uint temp_uint1;
    int temp_int;
    uint64_t *temp_ptr1;
    uint64_t *temp_ptr2;
    int8_t *temp_ptr3;
    void *temp_ptr4;
    uint *temp_ptr5;
    ulonglong temp_ulong1;
    ulonglong temp_ulong2;
    longlong temp_long1;
    longlong temp_long2;
    longlong temp_long3;
    ulonglong temp_ulong3;
    uint64_t *temp_ptr6;
    int8_t stack_buffer1[32];
    longlong stack_long1;
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
    ulonglong stack_ulong3;
    uint stack_uint3;
    int32_t stack_uint4;
    int32_t stack_uint5;
    int32_t stack_uint6;
    ulonglong stack_ulong4;
    ulonglong stack_ulong5;
    int8_t stack_byte2;
    uint8_t stack_pad2;
    longlong stack_long2;
    ulonglong stack_ulong6;
    uint stack_uint7;
    int32_t stack_uint8;
    int32_t stack_uint9;
    int32_t stack_uint10;
    ulonglong stack_ulong7;
    ulonglong stack_ulong8;
    ulonglong stack_ulong9;
    
    stack_ulong2 = 0xfffffffffffffffe;
    stack_ulong9 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
    stack_uint2 = 0;
    FUN_180057110();
    temp_ptr4 = &DAT_18098bc73;
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
    temp_ptr4 = &DAT_18098bc73;
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
                temp_ulong3 = *(ulonglong *)(temp_ulong2 - 8);
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
                temp_long3 = *(longlong *)(temp_long2 + -8);
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
                temp_long2 = *(longlong *)(temp_long3 + -8);
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
        FUN_1808fc050(stack_ulong9 ^ (ulonglong)stack_buffer1);
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
    FUN_180067070(&stack_uint3);
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
    stack_ptr1 = &UNK_180a3c3e0;
    stack_ulong1 = 0;
    stack_ptr2 = (int8_t *)0x0;
    stack_uint1 = 0;
    stack_ulong4._0_4_ = (int)temp_ulong2;
    temp_int = (int)stack_ulong4;
    stack_ulong4 = temp_ulong2;
    FUN_1806277c0(&stack_ptr1, temp_ulong2 & 0xffffffff);
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
        container_ptr[1] = (longlong)(temp_ptr2 + 4);
        *temp_ptr2 = &UNK_18098bcb0;
        temp_ptr2[1] = 0;
        *(int32_t *)(temp_ptr2 + 2) = 0;
        *temp_ptr2 = &UNK_180a3c3e0;
        temp_ptr2[3] = 0;
        temp_ptr2[1] = 0;
        *(int32_t *)(temp_ptr2 + 2) = 0;
        *(int32_t *)(temp_ptr2 + 2) = 0;
        temp_ptr2[1] = stack_ptr2;
        *(int32_t *)((longlong)temp_ptr2 + 0x1c) = stack_ulong1._4_4_;
        *(int32_t *)(temp_ptr2 + 3) = (int32_t)stack_ulong1;
        stack_uint1 = 0;
        stack_ptr2 = (int8_t *)0x0;
        stack_ulong1 = 0;
        stack_ptr7 = temp_ptr2;
    }
    else {
        temp_long3 = *container_ptr;
        temp_long1 = (longlong)temp_ptr2 - temp_long3 >> 5;
        if (temp_long1 == 0) {
            temp_long1 = 1;
EXPAND_CONTAINER:
            temp_long2 = FUN_18062b420(_DAT_180c8ed18, temp_long1 << 5, (char)container_ptr[3]);
            temp_ptr2 = (uint64_t *)container_ptr[1];
            temp_long3 = *container_ptr;
        }
        else {
            temp_long1 = temp_long1 * 2;
            if (temp_long1 != 0) goto EXPAND_CONTAINER;
        }
        stack_ptr8 = (uint64_t *)FUN_180059780(temp_long3, temp_ptr2, temp_long2);
        *stack_ptr8 = &UNK_18098bcb0;
        stack_ptr8[1] = 0;
        *(int32_t *)(stack_ptr8 + 2) = 0;
        *stack_ptr8 = &UNK_180a3c3e0;
        stack_ptr8[3] = 0;
        stack_ptr8[1] = 0;
        *(int32_t *)(stack_ptr8 + 2) = 0;
        *(int32_t *)(stack_ptr8 + 2) = stack_uint1;
        stack_ptr8[1] = stack_ptr2;
        *(int32_t *)((longlong)stack_ptr8 + 0x1c) = stack_ulong1._4_4_;
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
            FUN_18064e900(temp_ptr2);
        }
        *container_ptr = temp_long2;
        container_ptr[1] = (longlong)temp_ptr6;
        container_ptr[2] = temp_long1 * 0x20 + temp_long2;
        temp_long3 = stack_long2;
        temp_ptr1 = stack_ptr7;
    }
    stack_ptr1 = &UNK_180a3c3e0;
    if (stack_ptr2 != (int8_t *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    stack_ptr2 = (int8_t *)0x0;
    stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
    stack_ptr1 = &UNK_18098bcb0;
PATH_PROCESSING_DONE:
    temp_ptr2 = (uint64_t *)(temp_long3 + (longlong)temp_ptr1);
    if (stack_ptr9 < (uint64_t *)(temp_long3 + (longlong)temp_ptr1)) {
        temp_ptr2 = stack_ptr9;
    }
    temp_ptr3 = &stack_byte1;
    if (0xf < stack_ulong3) {
        temp_ptr3 = (int8_t *)CONCAT71(stack_pad1, stack_byte1);
    }
    stack_ptr9 = (uint64_t *)((longlong)stack_ptr9 - (longlong)temp_ptr2);
    // 警告：子函数不返回
    memmove(temp_ptr3, temp_ptr3 + (longlong)temp_ptr2, (longlong)stack_ptr9 + 1);
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
    longlong temp_long1;
    ulonglong temp_ulong1;
    uint64_t temp_ulong2;
    ulonglong temp_ulong3;
    byte *byte_ptr2;
    longlong temp_long2;
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
    longlong stack_long1;
    int stack_int1;
    ulonglong stack_ulong1;
    int32_t stack_uint1;
    void *stack_ptr3;
    void *stack_ptr4;
    int32_t stack_uint2;
    ulonglong stack_ulong2;
    void *stack_ptr5;
    void *stack_ptr6;
    int32_t stack_uint3;
    ulonglong stack_ulong3;
    ulonglong stack_ulong4;
    void *stack_ptr7;
    uint64_t stack_ulong5;
    int32_t stack_uint4;
    ulonglong stack_ulong6;
    void *stack_ptr8;
    char *char_ptr;
    int stack_int2;
    int32_t stack_uint5;
    uint64_t stack_ulong7;
    longlong stack_long2;
    longlong stack_long3;
    uint64_t *stack_ptr9;
    uint64_t *stack_ptr10;
    uint64_t stack_ulong8;
    int32_t stack_uint6;
    void *stack_ptr11;
    longlong stack_long4;
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
    ulonglong stack_ulong13;
    ulonglong stack_ulong14;
    
    stack_ulong12 = 0xfffffffffffffffe;
    stack_ulong14 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
    stack_uint1 = 0;
    FUN_180627e10(report_param, &stack_ptr19, &UNK_1809fe900);
    stack_ulong7 = 0;
    stack_long2 = 0;
    temp_ptr4 = &DAT_18098bc73;
    if (stack_ptr17 != (void *)0x0) {
        temp_ptr4 = stack_ptr17;
    }
    temp_uint = FUN_18062dee0(&stack_ulong7, temp_ptr4, &UNK_1809fe80c);
    stack_ptr2 = &UNK_180a3c3e0;
    stack_ulong1 = 0;
    stack_long1 = 0;
    stack_int1 = 0;
    FUN_180052020(temp_uint, &stack_ptr15);
    if ((_DAT_180c8f008 == (longlong *)0x0) ||
       (temp_char = (**(code **)(*_DAT_180c8f008 + 0x28))(), temp_char == '\0')) {
        temp_ptr4 = &UNK_1809fe910;
    }
    else {
        temp_long1 = (**(code **)(_DAT_180c8a9c0 + 0x30))();
        temp_ptr4 = &DAT_18098bc73;
        if (*(void **)(temp_long1 + 8) != (void *)0x0) {
            temp_ptr4 = *(void **)(temp_long1 + 8);
        }
    }
    FUN_180627910(&stack_ptr18, temp_ptr4);
    if ((_DAT_180c8f008 == (longlong *)0x0) ||
       (temp_char = (**(code **)(*_DAT_180c8f008 + 0x28))(), temp_char == '\0')) {
        temp_ptr4 = &UNK_1809fe928;
    }
    else {
        temp_long1 = (**(code **)(_DAT_180c8a9c0 + 0x20))();
        temp_ptr4 = &DAT_18098bc73;
        if (*(void **)(temp_long1 + 8) != (void *)0x0) {
            temp_ptr4 = *(void **)(temp_long1 + 8);
        }
    }
    FUN_180627910(&stack_ptr16, temp_ptr4);
    stack_ptr28 = &UNK_18098bc80;
    stack_ptr29 = stack_buffer4;
    stack_uint16 = 0;
    stack_buffer4[0] = 0;
    stack_uint1 = 4;
    FUN_18004b860(&stack_ptr28, &UNK_1809fd0a0, 0x130a7);
    stack_ptr1 = &DAT_18098bc73;
    if (stack_ptr29 != (void *)0x0) {
        stack_ptr1 = stack_ptr29;
    }
    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba80);
    stack_uint1 = 0;
    stack_ptr28 = &UNK_18098bcb0;
    stack_ptr1 = &UNK_18098ba98;
    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098baa0);
    stack_ptr1 = &DAT_18098ba28;
    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba40);
    stack_ptr1 = &DAT_18098bc73;
    if (stack_ptr18 != (void *)0x0) {
        stack_ptr1 = stack_ptr18;
    }
    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba70);
    stack_ptr1 = &DAT_18098bc73;
    if (stack_ptr16 != (void *)0x0) {
        stack_ptr1 = stack_ptr16;
    }
    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba60);
    stack_ptr16 = &UNK_180a3c3e0;
    if (stack_ptr16 != (void *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    stack_ptr16 = (void *)0x0;
    stack_uint10 = 0;
    stack_ptr16 = &UNK_18098bcb0;
    stack_ptr18 = &UNK_180a3c3e0;
    if (stack_ptr18 != (void *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    stack_ptr18 = (void *)0x0;
    stack_uint9 = 0;
    stack_ptr18 = &UNK_18098bcb0;
    stack_ptr7 = &UNK_180a3c3e0;
    stack_ulong6 = 0;
    stack_ulong5 = 0;
    stack_uint4 = 0;
    stack_ptr5 = &UNK_180a3c3e0;
    stack_ulong3 = 0;
    stack_ptr6 = (void *)0x0;
    stack_uint3 = 0;
    stack_ptr3 = &UNK_180a3c3e0;
    stack_ulong2 = 0;
    stack_ptr4 = (void *)0x0;
    stack_uint2 = 0;
    temp_ulong1 = FUN_180623ce0();
    FUN_180628040(&stack_ptr5, &UNK_1809fe8f8, temp_ulong1 / 0x100000 & 0xffffffff);
    stack_buffer5[0] = 0x48;
    temp_ulong2 = GetCurrentProcess();
    temp_int = K32GetProcessMemoryInfo(temp_ulong2, stack_buffer5, 0x48);
    temp_ulong1 = 0;
    if (temp_int != 0) {
        temp_ulong1 = stack_ulong13;
    }
    FUN_180628040(&stack_ptr3, &UNK_1809fe8f8, temp_ulong1 / 0x100000 & 0xffffffff);
    stack_ptr1 = &DAT_18098bc73;
    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_18098ba10, &UNK_1809fe950);
    stack_ptr1 = &DAT_18098bc73;
    if (stack_ptr6 != (void *)0x0) {
        stack_ptr1 = stack_ptr6;
    }
    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_18098ba10, &UNK_1809fe968);
    stack_ptr1 = &DAT_18098bc73;
    if (stack_ptr4 != (void *)0x0) {
        stack_ptr1 = stack_ptr4;
    }
    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_18098ba10, &UNK_1809fe978);
    temp_long1 = _DAT_180c86870;
    stack_ptr3 = &UNK_180a3c3e0;
    if (stack_ptr4 != (void *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    stack_ptr4 = (void *)0x0;
    stack_ulong2 = stack_ulong2 & 0xffffffff00000000;
    stack_ptr3 = &UNK_18098bcb0;
    stack_ptr5 = &UNK_180a3c3e0;
    if (stack_ptr6 != (void *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    stack_ptr6 = (void *)0x0;
    stack_ulong3 = stack_ulong3 & 0xffffffff00000000;
    stack_ptr5 = &UNK_18098bcb0;
    stack_ulong5 = 0;
    stack_ulong6 = stack_ulong6 & 0xffffffff00000000;
    stack_ptr7 = &UNK_18098bcb0;
    temp_long2 = _DAT_180c8ed58;
    if (_DAT_180c8ed58 == 0) {
        QueryPerformanceCounter(&stack_long3);
        temp_long2 = stack_long3;
    }
    stack_ptr1 = (void *)
                ((double)(temp_long2 - _DAT_180c8ed48) * _DAT_180c8ed50 - *(double *)(temp_long1 + 0x210));
    FUN_180628040(&stack_ptr2, &UNK_1809fe998, &UNK_18098ba10, &UNK_1809fe988);
    stack_ptr1 = &DAT_18098bc73;
    if (stack_ptr15 != (void *)0x0) {
        stack_ptr1 = stack_ptr15;
    }
    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_18098ba10, &UNK_18098ba50);
    stack_ptr12 = (uint64_t *)0x0;
    stack_ptr13 = (uint64_t *)0x0;
    stack_ulong9 = 0;
    stack_uint6 = 3;
    stack_ptr20 = (uint64_t *)0x0;
    stack_ptr21 = (uint64_t *)0x0;
    stack_ulong10 = 0;
    stack_uint12 = 3;
    stack_ptr26 = &UNK_1809fdc18;
    stack_ptr27 = stack_buffer3;
    stack_buffer3[0] = 0;
    stack_uint15 = 9;
    strcpy_s(stack_buffer3, 0x10, &UNK_1809fe9a8);
    process_and_add_path_to_container(&stack_ptr20, &stack_ptr15, &stack_ptr26);
    temp_ptr7 = stack_ptr21;
    temp_ptr8 = stack_ptr20;
    if (1 < (ulonglong)((longlong)stack_ptr21 - (longlong)stack_ptr20 >> 5)) {
        stack_ptr24 = &UNK_1809fdc18;
        stack_ptr25 = stack_buffer2;
        stack_buffer2[0] = 0;
        stack_uint14 = 1;
        strcpy_s(stack_buffer2, 0x10, &DAT_1809fdf28);
        process_and_add_path_to_container(&stack_ptr12, temp_ptr8 + 4, &stack_ptr24);
        stack_ptr24 = &UNK_18098bcb0;
    }
    stack_ptr26 = &UNK_18098bcb0;
    temp_ptr2 = stack_ptr12;
    for (temp_ptr5 = temp_ptr8; stack_ptr12 = temp_ptr2, temp_ptr5 != temp_ptr7; temp_ptr5 = temp_ptr5 + 4) {
        (**(code **)*temp_ptr5)(temp_ptr5, 0);
        temp_ptr2 = stack_ptr12;
    }
    if (temp_ptr8 != (uint64_t *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900(temp_ptr8);
    }
    temp_ulong1 = (longlong)stack_ptr13 - (longlong)temp_ptr2 >> 5;
    if (temp_ulong1 != 0) {
        if ((_DAT_180c8f008 == (longlong *)0x0) ||
           (temp_char = (**(code **)(*_DAT_180c8f008 + 0x28))(), temp_char == '\0')) {
            temp_ptr4 = &UNK_1809fe9b8;
        }
        else {
            temp_long1 = (**(code **)(_DAT_180c8a9c0 + 0x28))();
            temp_ptr4 = &DAT_18098bc73;
            if (*(void **)(temp_long1 + 8) != (void *)0x0) {
                temp_ptr4 = *(void **)(temp_long1 + 8);
            }
        }
        FUN_180627910(&stack_ptr11, temp_ptr4);
        stack_ptr9 = (uint64_t *)0x0;
        stack_ptr10 = (uint64_t *)0x0;
        stack_ulong8 = 0;
        stack_uint7 = 3;
        stack_short1[0] = 10;
        if (stack_long4 != 0) {
            FUN_180057980(&stack_ptr11, &stack_ptr9, stack_short1);
        }
        temp_ulong3 = (longlong)stack_ptr10 - (longlong)stack_ptr9 >> 5;
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
                if (((longlong)stack_ptr23 - (longlong)stack_ptr22 & 0xffffffffffffffe0U) == 0x40) {
                    FUN_180627ae0(&stack_ptr8, stack_ptr22);
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
                                    temp_long1 = (longlong)char_ptr - (longlong)byte_ptr2;
                                    do {
                                        byte_ptr1 = byte_ptr2 + temp_long1;
                                        temp_int3 = (uint)*byte_ptr2 - (uint)*byte_ptr1;
                                        if (temp_int3 != 0) break;
                                        byte_ptr2 = byte_ptr2 + 1;
                                    } while (*byte_ptr1 != 0);
                                }
STRING_MATCH_FOUND:
                                if (temp_int3 == 0) {
                                    stack_ptr1 = &DAT_18098bc73;
                                    if ((void *)temp_ptr5[5] != (void *)0x0) {
                                        stack_ptr1 = (void *)temp_ptr5[5];
                                    }
                                    temp_ptr4 = &DAT_18098bc73;
                                    if ((void *)temp_ptr5[1] != (void *)0x0) {
                                        temp_ptr4 = (void *)temp_ptr5[1];
                                    }
                                    FUN_180628040(&stack_ptr2, &UNK_1809fe940, &UNK_1809fe9c8, temp_ptr4);
                                    break;
                                }
                            }
                            else if (temp_int2 == 0) goto STRING_MATCH_FOUND;
                            temp_int = temp_int + 1;
                            temp_ptr7 = temp_ptr7 + 4;
                        } while ((ulonglong)(longlong)temp_int < temp_ulong1);
                    }
                    stack_ptr8 = &UNK_180a3c3e0;
                    if (char_ptr != (char *)0x0) {
                        // 警告：子函数不返回
                        FUN_18064e900();
                    }
                    char_ptr = (char *)0x0;
                    stack_uint5 = 0;
                    stack_ptr8 = &UNK_18098bcb0;
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
                    FUN_18064e900(temp_ptr5);
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
            FUN_18064e900(temp_ptr3);
        }
        stack_ptr11 = &UNK_180a3c3e0;
        if (stack_long4 != 0) {
            stack_ptr9 = temp_ptr7;
            stack_ptr10 = temp_ptr5;
            // 警告：子函数不返回
            FUN_18064e900();
        }
        stack_long4 = 0;
        stack_uint7 = 0;
        stack_ptr11 = &UNK_18098bcb0;
        stack_ptr9 = temp_ptr7;
        stack_ptr10 = temp_ptr5;
    }
    if ((_DAT_180c8a9c0 == 0) || (*(int *)(_DAT_180c86870 + 0x340) == 0)) {
        temp_bool = false;
    }
    else {
        temp_bool = true;
    }
    if (((_DAT_180c86870 != 0) && (*(int *)(_DAT_180c86870 + 0x340) == 1)) && (temp_bool)) {
        temp_long1 = (**(code **)(_DAT_180c8a9c0 + 0x18))();
        temp_ptr4 = &DAT_18098bc73;
        if (*(void **)(temp_long1 + 8) != (void *)0x0) {
            temp_ptr4 = *(void **)(temp_long1 + 8);
        }
        FUN_180627910(&stack_ptr14, temp_ptr4);
        temp_ptr4 = &DAT_18098bc73;
        if (stack_ptr19 != (void *)0x0) {
            temp_ptr4 = stack_ptr19;
        }
        FUN_180628040(&stack_ptr2, &UNK_1809fe7f8, temp_ptr4);
        stack_ptr14 = &UNK_180a3c3e0;
        if (stack_ptr19 != (void *)0x0) {
            // 警告：子函数不返回
            FUN_18064e900();
        }
        stack_ptr19 = (void *)0x0;
        stack_uint11 = 0;
        stack_ptr14 = &UNK_18098bcb0;
    }
    temp_long1 = stack_long2;
    fwrite(stack_long1, 1, (longlong)stack_int1, stack_long2);
    temp_ptr8 = stack_ptr13;
    temp_ptr7 = temp_ptr2;
    if (temp_long1 != 0) {
        fclose(temp_long1);
        stack_long2 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
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
        FUN_18064e900(temp_ptr7);
    }
    stack_ptr15 = &UNK_180a3c3e0;
    if (stack_ptr15 != (void *)0x0) {
        stack_ptr13 = temp_ptr8;
        // 警告：子函数不返回
        FUN_18064e900();
    }
    stack_ptr15 = (void *)0x0;
    stack_uint9 = 0;
    stack_ptr15 = &UNK_18098bcb0;
    stack_ptr2 = &UNK_180a3c3e0;
    if (stack_long1 == 0) {
        stack_long1 = 0;
        stack_ulong1 = stack_ulong1 & 0xffffffff00000000;
        stack_ptr2 = &UNK_18098bcb0;
        stack_ptr13 = temp_ptr8;
        if (temp_long1 != 0) {
            fclose(temp_long1);
            stack_long2 = 0;
            LOCK();
            _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
            UNLOCK();
        }
        stack_ptr19 = &UNK_180a3c3e0;
        if (stack_ptr17 == (void *)0x0) {
            stack_ptr17 = (void *)0x0;
            stack_uint8 = 0;
            stack_ptr19 = &UNK_18098bcb0;
            // 警告：子函数不返回
            FUN_1808fc050(stack_ulong14 ^ (ulonglong)stack_buffer1);
        }
        // 警告：子函数不返回
        FUN_18064e900();
    }
    stack_ptr13 = temp_ptr8;
    // 警告：子函数不返回
    FUN_18064e900();
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
    ulonglong stack_ulong3;
    
    stack_ulong3 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
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
void execute_engine_core_operation(uint64_t operation_type, longlong operation_param, uint64_t extra_data1, uint64_t extra_data2)
{
    code *code_ptr;
    char temp_char;
    uint64_t temp_ulong;
    longlong temp_long;
    int temp_int;
    longlong *long_ptr_ptr;
    void *ptr1;
    longlong stack_long1;
    uint stack_uint;
    void *ptr2;
    longlong stack_long2;
    int32_t stack_uint1;
    void **ptr_ptr;
    longlong **long_ptr_ptr_ptr;
    int32_t stack_uint2;
    uint64_t stack_ulong;
    
    stack_ulong = 0xfffffffffffffffe;
    long_ptr_ptr = *(longlong **)(_DAT_180c8ed08 + 0x18);
    FUN_180627ae0(&ptr1, _DAT_180c86870 + 0x170, extra_data1, extra_data2, 0);
    temp_int = stack_uint + 3;
    FUN_1806277c0(&ptr1, temp_int);
    *(int32_t *)((ulonglong)stack_uint + stack_long1) = 0x706d74;
    stack_uint = temp_int;
    temp_char = FUN_180624a00(&ptr1);
    if (temp_char == '\0') {
        FUN_180624910(&ptr1);
    }
    ptr_ptr = &ptr1;
    long_ptr_ptr_ptr = &long_ptr_ptr;
    FUN_180066140(&ptr_ptr, _DAT_180c86920, &DAT_1809fc7d8);
    FUN_180066140(&ptr_ptr, _DAT_180c868b0, &DAT_1809fcfc0);
    code_ptr = *(code **)(*long_ptr_ptr + 0x40);
    temp_ulong = FUN_180627ae0(&ptr_ptr, _DAT_180c86928 + 0x28);
    (*code_ptr)(long_ptr_ptr, temp_ulong);
    ptr_ptr = (void **)&UNK_180a3c3e0;
    if (long_ptr_ptr_ptr != (longlong **)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    long_ptr_ptr_ptr = (longlong **)0x0;
    stack_uint2 = 0;
    ptr_ptr = (void **)&UNK_18098bcb0;
    code_ptr = *(code **)(*long_ptr_ptr + 0x40);
    temp_ulong = FUN_180627ae0(&ptr2, _DAT_180c86928 + 0xe0);
    (*code_ptr)(long_ptr_ptr, temp_ulong);
    ptr2 = &UNK_180a3c3e0;
    if (stack_long2 != 0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    stack_long2 = 0;
    stack_uint1 = 0;
    ptr2 = &UNK_18098bcb0;
    if (operation_param == 0) {
        temp_long = FUN_18005e890(_DAT_180c82868);
        (**(code **)(*long_ptr_ptr + 8))(long_ptr_ptr, operation_type, *(int32_t *)(temp_long + 0x38));
    }
    else {
        code_ptr = *(code **)(*long_ptr_ptr + 0x10);
        temp_ulong = FUN_180627910(&ptr2, operation_param);
        (*code_ptr)(long_ptr_ptr, operation_type, temp_ulong);
        ptr2 = &UNK_180a3c3e0;
        if (stack_long2 != 0) {
            // 警告：子函数不返回
            FUN_18064e900();
        }
        stack_long2 = 0;
        stack_uint1 = 0;
        ptr2 = &UNK_18098bcb0;
    }
    FUN_18062c470(&ptr1);
    ptr1 = &UNK_180a3c3e0;
    if (stack_long1 != 0) {
        // 警告：子函数不返回
        FUN_18064e900();
    }
    return;
}

// 警告：以'_'开头的全局变量与同一地址的较小符号重叠