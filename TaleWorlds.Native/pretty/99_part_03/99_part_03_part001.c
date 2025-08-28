#include "TaleWorlds.Native.Split.h"

// 99_part_03_part001.c - 游戏存档和序列化模块
// 包含7个核心函数，涵盖存档处理、序列化、文件操作、数据验证等功能

/* 常量定义 */
#define MAX_PATH_LENGTH 260
#define HASH_BUFFER_SIZE 32
#define FILE_SIGNATURE_1 0x5ef
#define FILE_SIGNATURE_2 0x706d6f63
#define SERIALIZATION_BUFFER_SIZE 0x580
#define DATA_BUFFER_SIZE 0xe0
#define SMALL_BUFFER_SIZE 0x30
#define LOCK_TIMEOUT 0xffffffff
#define STRING_BUFFER_SIZE 0x10

/* 函数别名定义 */
#define process_save_data FUN_1801c4410
#define initialize_save_context FUN_1801c46e0
#define load_game_data FUN_1801c4730
#define validate_save_file FUN_1801c4eb0
#define process_save_chunk FUN_1801c5160
#define create_save_file FUN_1801c5450
#define build_save_path FUN_1801c5700
#define resolve_save_path FUN_1801c5870

/**
 * 处理存档数据的主要函数
 * @param data_ptr 数据指针数组
 * @param context_ptr 上下文指针
 */
void process_save_data(uint64_t **data_ptr, longlong context_ptr)
{
    uint64_t *global_data;
    int context_type;
    longlong loop_counter;
    uint64_t allocated_buffer;
    longlong *processed_data;
    uint64_t **temp_ptr1;
    uint64_t ***temp_ptr2;
    uint64_t **temp_ptr3;
    uint64_t *temp_ptr4;
    uint64_t *stack_data1;
    int8_t stack_data2;
    void *stack_data3;
    longlong stack_data4;
    int32_t stack_data5;
    uint64_t *stack_data6;
    int8_t stack_data7;
    void *stack_data8;
    longlong stack_data9;
    int32_t stack_data10;
    uint64_t *stack_array1[2];
    code *function_ptr1;
    code *function_ptr2;
    uint64_t stack_data11;
    
    global_data = _DAT_180c8aa08;
    stack_data11 = 0xfffffffffffffffe;
    stack_data2 = 0;
    context_type = *(int *)(context_ptr + 0x10);
    temp_ptr1 = data_ptr;
    
    // 验证上下文类型
    if (context_type == 7) {
        loop_counter = 0;
        do {
            // 检查字符串匹配
            if (*(char *)(*(longlong *)(context_ptr + 8) + loop_counter) != (&UNK_180a0ce90)[loop_counter])
                goto validation_failed;
            loop_counter = loop_counter + 1;
        } while (loop_counter != 8);
    }
    else {
validation_failed:
        if (context_type == 5) {
            loop_counter = 0;
            do {
                // 检查备用字符串匹配
                if (*(char *)(*(longlong *)(context_ptr + 8) + loop_counter) != (&UNK_180a0ce64)[loop_counter])
                    goto validation_failed2;
                loop_counter = loop_counter + 1;
            } while (loop_counter != 6);
        }
        else {
validation_failed2:
            if ((context_type != 8) ||
                ((context_type = strcmp(*(uint64_t *)(context_ptr + 8), &UNK_180a0ce70), context_type != 0 &&
                 (context_type = strcmp(*(uint64_t *)(context_ptr + 8), &UNK_180a0cf50), context_type != 0))))
                goto final_validation;
        }
    }
    stack_data2 = 1;
final_validation:
    FUN_18005e630(_DAT_180c82868);
    FUN_1801c9940(global_data);
    allocated_buffer = FUN_18062b1e0(_DAT_180c8ed18, SERIALIZATION_BUFFER_SIZE, 8, 3);
    processed_data = (longlong *)FUN_1803e8a40(allocated_buffer, context_ptr);
    *global_data = processed_data;
    (**(code **)(*processed_data + 0x28))(processed_data);
    *(int8_t *)(_DAT_180c86870 + 0x60) = 1;
    
    // 分配数据缓冲区
    allocated_buffer = FUN_18062b1e0(_DAT_180c8ed18, DATA_BUFFER_SIZE, 8, 3);
    temp_ptr1 = stack_array1;
    temp_ptr2 = (uint64_t ***)&stack_data6;
    stack_data6 = global_data;
    stack_data7 = stack_data2;
    FUN_180627ae0(&stack_data8, context_ptr);
    temp_ptr2 = (uint64_t ***)&stack_data6;
    temp_ptr3 = &stack_data1;
    stack_data1 = stack_data6;
    stack_data2 = stack_data7;
    FUN_180627ae0(&stack_data3, &stack_data8);
    temp_ptr3 = &stack_data1;
    function_ptr1 = FUN_1801eb5a0;
    function_ptr2 = FUN_1801eb560;
    
    // 创建处理结构
    temp_ptr4 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18, SMALL_BUFFER_SIZE, 8, system_allocation_flags);
    *temp_ptr4 = stack_data1;
    *(int8_t *)(temp_ptr4 + 1) = stack_data2;
    stack_data1 = temp_ptr4;
    FUN_180627ae0(temp_ptr4 + 2, &stack_data3);
    temp_ptr3 = (uint64_t **)&stack_data3;
    stack_data3 = &UNK_180a3c3e0;
    stack_array1[0] = temp_ptr4;
    
    // 执行数据处理
    if (stack_data4 != 0) {
        FUN_18064e900();
    }
    stack_data4 = 0;
    stack_data5 = 0;
    stack_data3 = &UNK_18098bcb0;
    temp_ptr2 = (uint64_t ***)&stack_data8;
    stack_data8 = &UNK_180a3c3e0;
    
    if (stack_data9 != 0) {
        FUN_18064e900();
    }
    stack_data9 = 0;
    stack_data10 = 0;
    stack_data8 = &UNK_18098bcb0;
    
    // 调用数据处理函数
    temp_ptr1 = (uint64_t **)FUN_18006b640(allocated_buffer, stack_array1);
    if (temp_ptr1 != (uint64_t **)0x0) {
        temp_ptr1 = temp_ptr1;
        (*(code *)(*temp_ptr1)[5])(temp_ptr1);
    }
    
    // 清理和更新状态
    temp_ptr1 = (uint64_t **)global_data[9];
    global_data[9] = temp_ptr1;
    if (temp_ptr1 != (uint64_t **)0x0) {
        (*(code *)(*temp_ptr1)[7])();
    }
    *(uint64_t *)(global_data[9] + 0x18) = 0xfffffffffffffffd;
    allocated_buffer = _DAT_180c82868;
    temp_ptr2 = &temp_ptr1;
    temp_ptr1 = (uint64_t **)global_data[9];
    if (temp_ptr1 != (uint64_t **)0x0) {
        (*(code *)(*temp_ptr1)[5])();
    }
    FUN_18005e110(allocated_buffer, &temp_ptr1);
    return;
}

/**
 * 初始化存档上下文
 * @param context_ptr 上下文指针
 */
void initialize_save_context(longlong context_ptr)
{
    *(uint64_t *)(context_ptr + 0x10) = &UNK_180a3c3e0;
    if (*(longlong *)(context_ptr + 0x18) != 0) {
        FUN_18064e900();
    }
    *(uint64_t *)(context_ptr + 0x18) = 0;
    *(int32_t *)(context_ptr + 0x28) = 0;
    *(uint64_t *)(context_ptr + 0x10) = &UNK_18098bcb0;
    return;
}

/**
 * 加载游戏数据文件
 * @param param1 参数1
 * @param context_ptr 上下文指针
 */
void load_game_data(uint64_t param1, longlong context_ptr)
{
    uint64_t *global_data;
    uint file_size1;
    uint file_size2;
    uint64_t *temp_ptr1;
    bool comparison_result;
    char temp_char;
    uint64_t temp_data1;
    longlong file_position;
    uint64_t *temp_ptr2;
    uint64_t *temp_ptr3;
    int32_t *temp_ptr4;
    uint64_t *temp_ptr5;
    void *temp_ptr6;
    ulonglong file_size_total;
    int file_descriptor;
    longlong temp_long1;
    longlong temp_long2;
    uint *temp_uint1;
    int8_t stack_data1[32];
    uint *temp_uint2;
    int8_t stack_data2;
    char stack_data3[7];
    longlong stack_data4;
    uint *temp_uint3;
    uint64_t stack_data5;
    int16_t stack_data6;
    int8_t stack_data7;
    void *stack_data8;
    void *stack_data9;
    uint stack_data10;
    ulonglong stack_data11;
    uint stack_data12;
    uint stack_data13;
    uint64_t stack_data14;
    uint64_t stack_data15;
    uint64_t stack_data16;
    void *stack_data17;
    longlong stack_data18;
    int stack_data19;
    ulonglong stack_data20;
    uint64_t *stack_data21;
    longlong stack_data22;
    int8_t stack_data23;
    longlong stack_data24;
    uint64_t stack_data25;
    longlong stack_data26;
    uint64_t *stack_data27;
    longlong stack_data28;
    int8_t stack_data29;
    longlong stack_data30;
    int8_t stack_data31;
    longlong stack_data32;
    int8_t stack_data33;
    longlong stack_data34;
    uint64_t *stack_data35;
    uint64_t *stack_data36;
    uint64_t *stack_data37;
    longlong stack_data38;
    uint64_t *stack_data39;
    longlong stack_data40;
    uint64_t *stack_data41;
    uint64_t *stack_data42;
    uint64_t *stack_data43;
    longlong stack_data44;
    uint64_t *stack_data45;
    longlong stack_data46;
    uint64_t *stack_data47;
    uint64_t *stack_data48;
    uint64_t *stack_data49;
    longlong stack_data50;
    uint *temp_uint4;
    uint64_t stack_data51;
    uint stack_data52;
    uint stack_data53;
    uint stack_data54;
    uint stack_data55;
    int32_t stack_data56;
    ulonglong stack_data57;
    
    temp_long1 = _DAT_180c8aa08;
    stack_data51 = 0xfffffffffffffffe;
    stack_data57 = _DAT_180bf00a8 ^ (ulonglong)stack_data1;
    stack_data22 = _DAT_180c8aa08;
    FUN_1801d8e90(_DAT_180c8aa08, context_ptr, 0);
    stack_data8 = &UNK_180a3c3e0;
    stack_data11 = 0;
    stack_data9 = (void *)0x0;
    stack_data10 = 0;
    FUN_1801c5870(&stack_data8, context_ptr);
    file_descriptor = stack_data10 + 0x12;
    FUN_1806277c0(&stack_data8, file_descriptor);
    temp_ptr4 = (int32_t *)(stack_data9 + stack_data10);
    *temp_ptr4 = 0x64616873;  // "hash"
    temp_ptr4[1] = 0x6d5f7265;  // "re_m"
    temp_ptr4[2] = 0x69707061;  // "appi"
    temp_ptr4[3] = 0x622e676e;  // "ng.b"
    *(int16_t *)(temp_ptr4 + 4) = 0x6e69;  // "in"
    *(int8_t *)((longlong)temp_ptr4 + 0x12) = 0;
    stack_data16 = 0;
    stack_data26 = 0;
    temp_ptr6 = &system_buffer_ptr;
    if (stack_data9 != (void *)0x0) {
        temp_ptr6 = stack_data9;
    }
    stack_data10 = file_descriptor;
    file_descriptor = FUN_18062dee0(&stack_data16, temp_ptr6, &UNK_180a01ff0);
    temp_long2 = stack_data26;
    if (file_descriptor == 0) {
        temp_data1 = _ftelli64(stack_data26);
        _fseeki64(temp_long2, 0, 2);
        file_position = _ftelli64(temp_long2);
        _fseeki64(temp_long2, temp_data1, 0);
        stack_data4 = 0;
        temp_uint3 = (uint *)0x0;
        stack_data5 = 0;
        stack_data6 = 0;
        stack_data7 = 3;
        FUN_180639bf0(&stack_data4, file_position);
        fread(stack_data4, file_position, 1, temp_long2);
        stack_data17 = &UNK_180a3c3e0;
        stack_data20 = 0;
        stack_data18 = 0;
        stack_data19 = 0;
        file_size1 = *(uint *)((longlong)temp_uint3 + 4);
        temp_uint1 = (uint *)((longlong)temp_uint3 + 8);
        if (file_size1 != 0) {
            temp_uint3 = temp_uint1;
            FUN_180628f30(&stack_data17, temp_uint1, file_size1);
            temp_uint1 = (uint *)((longlong)temp_uint1 + (ulonglong)file_size1);
        }
        file_descriptor = stack_data19 + 8;
        temp_uint3 = temp_uint1;
        if (context_ptr == 0) {
            temp_long1 = *(longlong *)(temp_long1 + 0x50);
            stack_data28 = temp_long1 + 0x360;
            stack_data29 = 0;
            stack_data24 = temp_long1;
            AcquireSRWLockExclusive(stack_data28);
            stack_data29 = 1;
            file_size_total = (ulonglong)(file_position - file_descriptor) / 0x18;
            file_position = stack_data28;
            if (0 < (int)file_size_total) {
                file_size_total = file_size_total & 0xffffffff;
                do {
                    stack_data52 = *temp_uint1;
                    stack_data53 = temp_uint1[1];
                    stack_data54 = temp_uint1[2];
                    stack_data55 = temp_uint1[3];
                    file_size1 = temp_uint1[4];
                    file_size2 = temp_uint1[5];
                    temp_uint1 = temp_uint1 + 6;
                    temp_ptr1 = *(uint64_t **)(temp_long1 + 0x318);
                    stack_data56._2_1_ = (byte)(file_size1 >> 0x10);
                    stack_data56._0_2_ = (ushort)file_size1;
                    temp_ptr3 = temp_ptr1;
                    temp_ptr2 = (uint64_t *)temp_ptr1[2];
                    while (temp_ptr5 = temp_ptr3, temp_ptr2 != (uint64_t *)0x0) {
                        if ((*(uint *)(temp_ptr2 + 4) < stack_data52) ||
                            ((*(uint *)(temp_ptr2 + 4) <= stack_data52 &&
                             ((*(ushort *)(temp_ptr2 + 6) < (ushort)stack_data56 ||
                              ((*(ushort *)(temp_ptr2 + 6) <= (ushort)stack_data56 &&
                               ((*(uint *)((longlong)temp_ptr2 + 0x24) < stack_data53 ||
                                ((*(uint *)((longlong)temp_ptr2 + 0x24) <= stack_data53 &&
                                 ((*(uint *)(temp_ptr2 + 5) < stack_data54 ||
                                  ((*(uint *)(temp_ptr2 + 5) <= stack_data54 &&
                                   ((*(uint *)((longlong)temp_ptr2 + 0x2c) < stack_data55 ||
                                    ((*(uint *)((longlong)temp_ptr2 + 0x2c) <= stack_data55 &&
                                     (*(byte *)((longlong)temp_ptr2 + 0x32) < stack_data56._2_1_))))))))))))))))))) {
                            comparison_result = true;
                            temp_ptr5 = (uint64_t *)*temp_ptr2;
                        }
                        else {
                            comparison_result = false;
                            temp_ptr5 = (uint64_t *)temp_ptr2[1];
                        }
                        temp_ptr3 = temp_ptr2;
                        temp_ptr2 = temp_ptr5;
                        if (comparison_result) {
                            temp_ptr3 = temp_ptr5;
                        }
                    }
                    temp_uint3 = temp_uint1;
                    if (((temp_ptr5 == temp_ptr1) || (stack_data52 < *(uint *)(temp_ptr5 + 4))) ||
                        ((temp_ptr2 = stack_data21, stack_data52 <= *(uint *)(temp_ptr5 + 4) &&
                         (((ushort)stack_data56 < *(ushort *)(temp_ptr5 + 6) ||
                           (((ushort)stack_data56 <= *(ushort *)(temp_ptr5 + 6) &&
                            ((stack_data53 < *(uint *)((longlong)temp_ptr5 + 0x24) ||
                             ((stack_data53 <= *(uint *)((longlong)temp_ptr5 + 0x24) &&
                              ((stack_data54 < *(uint *)(temp_ptr5 + 5) ||
                               ((stack_data54 <= *(uint *)(temp_ptr5 + 5) &&
                                ((stack_data55 < *(uint *)((longlong)temp_ptr5 + 0x2c) ||
                                 ((stack_data55 <= *(uint *)((longlong)temp_ptr5 + 0x2c) &&
                                  (stack_data56._2_1_ < *(byte *)((longlong)temp_ptr5 + 0x32))))))))))))))))))))) {
                        stack_data56 = file_size1;
                        temp_long1 = FUN_1801ea180(temp_ptr1, temp_ptr5, &stack_data2, &stack_data52);
                        if (temp_long1 == 0) {
                            temp_ptr5 = (uint64_t *)FUN_1801ea730(temp_ptr1, stack_data3, &stack_data52);
                            temp_ptr2 = temp_ptr5;
                            file_size1 = stack_data56;
                            if (stack_data3[0] != '\0') {
                                temp_uint2 = &stack_data52;
                                FUN_1801ea0a0(temp_ptr1, &stack_data27, temp_ptr5, 0);
                                temp_ptr5 = stack_data27;
                                temp_ptr2 = stack_data27;
                                file_size1 = stack_data56;
                            }
                        }
                        else {
                            temp_uint2 = &stack_data52;
                            FUN_1801ea0a0(temp_ptr1, &stack_data21, temp_long1, stack_data2);
                            temp_ptr5 = stack_data21;
                            temp_ptr2 = stack_data21;
                            file_size1 = stack_data56;
                        }
                    }
                    stack_data56 = file_size1;
                    stack_data21 = temp_ptr2;
                    *(uint *)((longlong)temp_ptr5 + 0x34) = file_size2;
                    temp_long2 = (ulonglong)stack_data56._2_1_ * 0x70 + *(longlong *)(stack_data22 + 0x50);
                    temp_long1 = temp_long2 + 0x70;
                    stack_data33 = 0;
                    stack_data34 = temp_long1;
                    AcquireSRWLockExclusive(temp_long1);
                    stack_data33 = 1;
                    if (*(int *)(temp_long2 + 0x78) < (int)file_size2) {
                        *(uint *)(temp_long2 + 0x78) = file_size2;
                    }
                    ReleaseSRWLockExclusive(temp_long1);
                    file_size_total = file_size_total - 1;
                    file_position = stack_data28;
                    temp_long1 = stack_data24;
                    temp_long2 = stack_data26;
                } while (file_size_total != 0);
            }
        }
        else {
            temp_ptr1 = (uint64_t *)(context_ptr + 0x328);
            stack_data22 = context_ptr + 0x360;
            stack_data23 = 0;
            AcquireSRWLockExclusive(stack_data22);
            stack_data23 = 1;
            file_size_total = (file_position - 4U) / 0x24;
            file_position = stack_data22;
            if (0 < (int)file_size_total) {
                file_size_total = file_size_total & 0xffffffff;
                do {
                    stack_data12 = *temp_uint1;
                    stack_data13 = temp_uint1[1];
                    stack_data14 = *(uint64_t *)(temp_uint1 + 2);
                    stack_data15 = *(uint64_t *)(temp_uint1 + 4);
                    stack_data16 = *(ulonglong *)(temp_uint1 + 6);
                    file_size1 = temp_uint1[8];
                    temp_uint1 = temp_uint1 + 9;
                    temp_ptr3 = temp_ptr1;
                    temp_uint3 = temp_uint1;
                    temp_ptr2 = *(uint64_t **)(context_ptr + 0x338);
                    while (temp_ptr2 != (uint64_t *)0x0) {
                        stack_data45 = temp_ptr2 + 4;
                        stack_data34 = (longlong)&stack_data16 + 4;
                        stack_data35 = &stack_data16;
                        stack_data36 = &stack_data15;
                        stack_data37 = &stack_data14;
                        stack_data38 = (longlong)&stack_data15 + 4;
                        temp_uint4 = &stack_data12;
                        stack_data39 = temp_ptr2 + 7;
                        stack_data40 = temp_ptr2 + 6;
                        stack_data41 = temp_ptr2 + 5;
                        stack_data42 = (longlong)temp_ptr2 + 0x3c;
                        temp_char = func_0x0001801eb6f0(&stack_data42, &stack_data34);
                        if (temp_char == '\0') {
                            temp_ptr3 = temp_ptr2;
                            temp_ptr2 = (uint64_t *)temp_ptr2[1];
                        }
                        else {
                            temp_ptr2 = (uint64_t *)*temp_ptr2;
                        }
                    }
                    if (temp_ptr3 == temp_ptr1) {
data_not_found:
                        temp_uint2 = &stack_data12;
                        temp_ptr3 = (uint64_t *)FUN_1801e8280(temp_ptr1, &stack_data24);
                        temp_ptr3 = (uint64_t *)*temp_ptr3;
                    }
                    else {
                        stack_data46 = temp_ptr3 + 4;
                        stack_data40 = (longlong)temp_ptr3 + 0x3c;
                        stack_data47 = temp_ptr3 + 7;
                        stack_data48 = temp_ptr3 + 6;
                        stack_data49 = temp_ptr3 + 5;
                        stack_data50 = (longlong)temp_ptr3 + 0x34;
                        stack_data44 = (longlong)&stack_data16 + 4;
                        stack_data35 = &stack_data16;
                        stack_data36 = &stack_data15;
                        stack_data37 = &stack_data14;
                        stack_data30 = (longlong)&stack_data15 + 4;
                        temp_uint4 = &stack_data12;
                        temp_char = func_0x0001801eb6f0(&stack_data44, &stack_data40);
                        if (temp_char != '\0') goto data_not_found;
                    }
                    *(uint *)(temp_ptr3 + 8) = file_size1;
                    temp_long1 = (stack_data16 & 0xff) * 0x70;
                    temp_long2 = context_ptr + 0x70 + temp_long1;
                    stack_data31 = 0;
                    stack_data32 = temp_long2;
                    AcquireSRWLockExclusive(temp_long2);
                    stack_data31 = 1;
                    if (*(int *)(temp_long1 + 0x78 + context_ptr) < (int)file_size1) {
                        *(uint *)(temp_long1 + 0x78 + context_ptr) = file_size1;
                    }
                    ReleaseSRWLockExclusive(temp_long2);
                    file_size_total = file_size_total - 1;
                    file_position = stack_data22;
                    temp_long2 = stack_data26;
                } while (file_size_total != 0);
            }
        }
        ReleaseSRWLockExclusive(file_position);
        stack_data17 = &UNK_180a3c3e0;
        if (stack_data18 != 0) {
            FUN_18064e900();
        }
        stack_data18 = 0;
        stack_data20 = stack_data20 & 0xffffffff00000000;
        stack_data17 = &UNK_18098bcb0;
        if (((char)stack_data6 == '\0') && (stack_data4 != 0)) {
            FUN_18064e900();
        }
    }
    if (temp_long2 != 0) {
        fclose(temp_long2);
        stack_data26 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
    }
    stack_data8 = &UNK_180a3c3e0;
    if (stack_data9 == (void *)0x0) {
        stack_data9 = (void *)0x0;
        stack_data11 = stack_data11 & 0xffffffff00000000;
        stack_data8 = &UNK_18098bcb0;
        FUN_1808fc050(stack_data57 ^ (ulonglong)stack_data1);
    }
    FUN_18064e900();
}

/**
 * 验证存档文件的有效性
 * @param file_handle 文件句柄
 * @return 验证结果
 */
bool validate_save_file(longlong file_handle)
{
    longlong temp_long1;
    int32_t *temp_ptr1;
    void *temp_ptr2;
    int temp_int1;
    ulonglong bytes_read1;
    ulonglong bytes_read2;
    ulonglong bytes_read3;
    bool validation_result;
    int stack_array1[2];
    uint stack_array2[2];
    uint stack_array3[2];
    longlong stack_array4[2];
    void *stack_data1;
    void *stack_data2;
    uint stack_data3;
    uint64_t stack_data4;
    
    validation_result = true;
    bytes_read2 = 0;
    stack_data1 = &UNK_180a3c3e0;
    stack_data4 = 0;
    stack_data2 = (void *)0x0;
    stack_data3 = 0;
    FUN_1801c5700(&stack_data1, file_handle);
    temp_int1 = stack_data3 + 0x1c;
    FUN_1806277c0(&stack_data1, temp_int1);
    temp_ptr1 = (int32_t *)(stack_data2 + stack_data3);
    *temp_ptr1 = 0x706d6f63;  // "comp"
    temp_ptr1[1] = 0x73736572;  // "ress"
    temp_ptr1[2] = 0x735f6465;  // "de_s"
    temp_ptr1[3] = 0x65646168;  // "hade"
    *(uint64_t *)(temp_ptr1 + 4) = 0x2e65686361635f72;  // "r_cache."
    temp_ptr1[6] = 0x6b636173;  // "sack"
    *(int8_t *)(temp_ptr1 + 7) = 0;
    stack_array4[0] = -1;
    temp_ptr2 = &system_buffer_ptr;
    if (stack_data2 != (void *)0x0) {
        temp_ptr2 = stack_data2;
    }
    stack_data3 = temp_int1;
    FUN_18063ba00(stack_array4, temp_ptr2, 5, 0x104);
    temp_long1 = stack_array4[0];
    stack_array1[0] = 0;
    bytes_read1 = bytes_read2;
    if (stack_array4[0] != -1) {
        do {
            bytes_read3 = 0x1000000;
            if (4 - bytes_read1 < 0x1000000) {
                bytes_read3 = 4 - bytes_read1 & 0xffffffff;
            }
            stack_array2[0] = 0;
            temp_int1 = ReadFile(temp_long1, (longlong)stack_array1 + bytes_read1, bytes_read3, stack_array2, 0);
        } while (((temp_int1 != 0) && (stack_array2[0] != 0)) && (bytes_read1 = bytes_read1 + stack_array2[0], bytes_read1 < 4))
        ;
        do {
            bytes_read1 = 0x1000000;
            if (4 - bytes_read2 < 0x1000000) {
                bytes_read1 = 4 - bytes_read2 & 0xffffffff;
            }
            stack_array3[0] = 0;
            temp_int1 = ReadFile(temp_long1, (longlong)stack_array1 + bytes_read2, bytes_read1, stack_array3, 0);
        } while (((temp_int1 != 0) && (stack_array3[0] != 0)) && (bytes_read2 = bytes_read2 + stack_array3[0], bytes_read2 < 4))
        ;
        LOCK();
        _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
        UNLOCK();
        CloseHandle(stack_array4[0]);
        stack_array4[0] = -1;
        validation_result = stack_array1[0] == FILE_SIGNATURE_1;
    }
    temp_long1 = stack_array4[0];
    if (((system_debug_flag == '\0') && (validation_result == false)) &&
       ((*(int *)(_DAT_180c86908 + 0x620) == 0 && (file_handle == 0)))) {
        if (system_debug_flag2 == '\0') {
            MessageBoxA(0, &UNK_180a0cea0, &UNK_180a0cf60, 0x41040);
        }
        else if (*(char *)(_DAT_180c86928 + 0x18) != '\0') {
            FUN_1800623b0(_DAT_180c86928, 3, 0xffffffff00000000, 0xd, &UNK_180a04f08, &UNK_180a0cf60,
                          &UNK_180a0cea0);
        }
    }
    if (temp_long1 != -1) {
        LOCK();
        _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
        UNLOCK();
        CloseHandle(stack_array4[0]);
        stack_array4[0] = -1;
    }
    stack_data1 = &UNK_180a3c3e0;
    if (stack_data2 == (void *)0x0) {
        return validation_result;
    }
    FUN_18064e900();
}

/**
 * 处理存档数据块
 * @param param1 参数1
 */
void process_save_chunk(uint64_t param1)
{
    longlong temp_long1;
    uint64_t temp_data1;
    int32_t *temp_ptr1;
    void *temp_ptr2;
    int temp_int1;
    int8_t stack_data1[32];
    int stack_data2;
    int stack_array1[3];
    void *stack_data3;
    void *stack_data4;
    uint stack_data5;
    ulonglong stack_data6;
    uint64_t stack_data7;
    longlong stack_data8;
    uint64_t stack_data9;
    void *stack_data10;
    int8_t *stack_data11;
    int32_t stack_data12;
    int8_t stack_data13[32];
    ulonglong stack_data14;
    
    stack_data9 = 0xfffffffffffffffe;
    stack_data14 = _DAT_180bf00a8 ^ (ulonglong)stack_data1;
    temp_data1 = 0;
    stack_array1[1] = 0;
    stack_data3 = &UNK_180a3c3e0;
    stack_data6 = 0;
    stack_data4 = (void *)0x0;
    stack_data5 = 0;
    FUN_1801c5870(&stack_data3, param1);
    temp_int1 = stack_data5 + 0x12;
    FUN_1806277c0(&stack_data3, temp_int1);
    temp_ptr1 = (int32_t *)(stack_data4 + stack_data5);
    *temp_ptr1 = 0x64616873;  // "hash"
    temp_ptr1[1] = 0x6d5f7265;  // "re_m"
    temp_ptr1[2] = 0x69707061;  // "appi"
    temp_ptr1[3] = 0x622e676e;  // "ng.b"
    *(int16_t *)(temp_ptr1 + 4) = 0x6e69;  // "in"
    *(int8_t *)((longlong)temp_ptr1 + 0x12) = 0;
    stack_data7 = 0;
    stack_data8 = 0;
    temp_ptr2 = &system_buffer_ptr;
    if (stack_data4 != (void *)0x0) {
        temp_ptr2 = stack_data4;
    }
    stack_data5 = temp_int1;
    FUN_18062dee0(&stack_data7, temp_ptr2, &UNK_180a01ff0);
    temp_long1 = stack_data8;
    stack_array1[0] = 0;
    if (stack_data8 != 0) {
        fread(stack_array1, 4, 1, stack_data8);
        if (stack_array1[0] == FILE_SIGNATURE_1) {
            stack_data10 = &UNK_18098bc80;
            stack_data11 = stack_data13;
            stack_data12 = 0;
            stack_data13[0] = 0;
            stack_array1[1] = 1;
            FUN_18004b860(&stack_data10, &UNK_1809fd0a0, 0x130a7);
            stack_data2 = 0;
            fread(&stack_data2, 4, 1, temp_long1);
            if (stack_data2 < 9) {
                if (stack_data2 + 1 != 0) {
                    temp_data1 = FUN_18062b420(_DAT_180c8ed18, (longlong)(stack_data2 + 1), 3);
                }
                memset(temp_data1, 0, (longlong)(stack_data2 + 1));
            }
            stack_array1[1] = 0;
            stack_data10 = &UNK_18098bcb0;
        }
        fclose(temp_long1);
        stack_data8 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
    }
    if (stack_data8 != 0) {
        fclose(stack_data8);
        stack_data8 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
    }
    stack_data3 = &UNK_180a3c3e0;
    if (stack_data4 == (void *)0x0) {
        stack_data4 = (void *)0x0;
        stack_data6 = stack_data6 & 0xffffffff00000000;
        stack_data3 = &UNK_18098bcb0;
        FUN_1808fc050(stack_data14 ^ (ulonglong)stack_data1);
    }
    FUN_18064e900();
}

/**
 * 创建存档文件
 */
void create_save_file(void)
{
    longlong temp_long1;
    char temp_char;
    int32_t *temp_ptr1;
    int8_t *temp_ptr2;
    int temp_int1;
    void *temp_ptr3;
    int8_t stack_data1[32];
    void *stack_data2;
    int8_t *stack_data3;
    uint stack_data4;
    ulonglong stack_data5;
    int stack_array1[2];
    void *stack_data6;
    longlong stack_data7;
    int stack_data8;
    ulonglong stack_data9;
    int32_t stack_array2[2];
    uint64_t stack_data10;
    longlong stack_data11;
    uint64_t stack_data12;
    void *stack_data13;
    void *stack_data14;
    int stack_data15;
    uint8_t stack_data16[32];
    ulonglong stack_data17;
    
    stack_data12 = 0xfffffffffffffffe;
    stack_data17 = _DAT_180bf00a8 ^ (ulonglong)stack_data1;
    stack_array1[1] = 0;
    if (*(char *)(_DAT_180c86870 + 0x168) == '\0') {
        stack_data6 = &UNK_180a3c3e0;
        stack_data9 = 0;
        stack_data7 = 0;
        stack_data8 = 0;
        FUN_1801c5870(&stack_data6);
        stack_data2 = &UNK_180a3c3e0;
        stack_data5 = 0;
        stack_data3 = (int8_t *)0x0;
        stack_data4 = 0;
        FUN_1806277c0(&stack_data2, stack_data8);
        if (stack_data8 != 0) {
            memcpy(stack_data3, stack_data7, stack_data8 + 1);
        }
        if (stack_data7 != 0) {
            stack_data4 = 0;
            if (stack_data3 != (int8_t *)0x0) {
                *stack_data3 = 0;
            }
            stack_data5 = stack_data5 & 0xffffffff;
        }
        temp_int1 = stack_data4 + 0x12;
        FUN_1806277c0(&stack_data2, temp_int1);
        temp_ptr1 = (int32_t *)(stack_data3 + stack_data4);
        *temp_ptr1 = 0x64616873;  // "hash"
        temp_ptr1[1] = 0x6d5f7265;  // "re_m"
        temp_ptr1[2] = 0x69707061;  // "appi"
        temp_ptr1[3] = 0x622e676e;  // "ng.b"
        *(int16_t *)(temp_ptr1 + 4) = 0x6e69;  // "in"
        *(int8_t *)((longlong)temp_ptr1 + 0x12) = 0;
        stack_data4 = temp_int1;
        temp_char = FUN_180624af0(&stack_data2);
        if (temp_char == '\0') {
            FUN_18062c1e0(&stack_data6, 1);
            stack_data10 = 0;
            stack_data11 = 0;
            temp_ptr2 = &system_buffer_ptr;
            if (stack_data3 != (int8_t *)0x0) {
                temp_ptr2 = stack_data3;
            }
            FUN_18062dee0(&stack_data10, temp_ptr2, &UNK_180a0cf4c);
            temp_long1 = stack_data11;
            if (stack_data11 == 0) {
                FUN_180062300(_DAT_180c86928, &UNK_180a0cfa0);
            }
            stack_array2[0] = FILE_SIGNATURE_1;
            fwrite(stack_array2, 4, 1, stack_data11);
            stack_data13 = &UNK_18098bc80;
            stack_data14 = stack_data16;
            stack_data15 = 0;
            stack_data16[0] = 0;
            stack_array1[1] = 1;
            FUN_18004b860(&stack_data13, &UNK_1809fd0a0, 0x130a7);
            stack_array1[0] = stack_data15;
            fwrite(stack_array1, 4, 1, temp_long1);
            temp_ptr3 = &system_buffer_ptr;
            if (stack_data14 != (void *)0x0) {
                temp_ptr3 = stack_data14;
            }
            fwrite(temp_ptr3, 1, (longlong)stack_array1[0], temp_long1);
            fclose(temp_long1);
            stack_data11 = 0;
            LOCK();
            _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
            UNLOCK();
            stack_array1[1] = 0;
            stack_data13 = &UNK_18098bcb0;
        }
        stack_data2 = &UNK_180a3c3e0;
        if (stack_data3 != (int8_t *)0x0) {
            FUN_18064e900();
        }
        stack_data3 = (int8_t *)0x0;
        stack_data5 = stack_data5 & 0xffffffff00000000;
        stack_data2 = &UNK_18098bcb0;
        stack_data6 = &UNK_180a3c3e0;
        if (stack_data7 != 0) {
            FUN_18064e900();
        }
        stack_data7 = 0;
        stack_data9 = stack_data9 & 0xffffffff00000000;
        stack_data6 = &UNK_18098bcb0;
    }
    FUN_1808fc050(stack_data17 ^ (ulonglong)stack_data1);
}

/**
 * 构建存档文件路径
 * @param path_ptr 路径指针
 * @param context_ptr 上下文指针
 */
void build_save_path(longlong *path_ptr, longlong context_ptr)
{
    uint temp_uint1;
    longlong temp_long1;
    longlong temp_long2;
    int32_t *temp_ptr1;
    void *temp_ptr2;
    int temp_int1;
    int8_t stack_data1[32];
    int32_t stack_data2;
    uint64_t stack_data3;
    void *stack_data4;
    void *stack_data5;
    int32_t stack_data6;
    uint8_t stack_data7[16];
    ulonglong stack_data8;
    
    stack_data3 = 0xfffffffffffffffe;
    stack_data8 = _DAT_180bf00a8 ^ (ulonglong)stack_data1;
    stack_data2 = 0;
    *(int32_t *)(path_ptr + 2) = 0;
    if ((int8_t *)path_ptr[1] != (int8_t *)0x0) {
        *(int8_t *)path_ptr[1] = 0;
    }
    if (context_ptr == 0) {
        stack_data4 = &UNK_1809fdc18;
        stack_data5 = stack_data7;
        stack_data7[0] = 0;
        stack_data6 = 6;
        strcpy_s(stack_data7, 0x10, &UNK_180a3c07c);
        stack_data2 = 1;
        temp_ptr2 = &system_buffer_ptr;
        if (stack_data5 != (void *)0x0) {
            temp_ptr2 = stack_data5;
        }
        (**(code **)(*path_ptr + 0x10))(path_ptr, temp_ptr2);
        stack_data2 = 0;
        stack_data4 = &UNK_18098bcb0;
        temp_long2 = path_ptr[2];
        temp_int1 = (int)temp_long2 + 8;
        FUN_1806277c0(path_ptr, temp_int1);
        temp_uint1 = *(uint *)(path_ptr + 2);
        temp_long1 = path_ptr[1];
        *(uint64_t *)((ulonglong)temp_uint1 + temp_long1) = 0x2f73726564616853;  // "Shared/"
        *(int8_t *)((uint64_t *)((ulonglong)temp_uint1 + temp_long1) + 1) = 0;
        *(int *)(path_ptr + 2) = temp_int1;
        temp_int1 = (int)temp_long2 + 0xe;
        FUN_1806277c0(path_ptr, temp_int1);
        temp_ptr1 = (int32_t *)((ulonglong)*(uint *)(path_ptr + 2) + path_ptr[1]);
        *temp_ptr1 = 0x31443344;  // "D3D1"
        *(int16_t *)(temp_ptr1 + 1) = 0x2f31;  // "/1"
        *(int8_t *)((longlong)temp_ptr1 + 6) = 0;
        *(int *)(path_ptr + 2) = temp_int1;
        FUN_18062c1e0(path_ptr, 1);
    }
    else {
        FUN_180627be0(path_ptr, context_ptr + 0x2d0);
    }
    FUN_1808fc050(stack_data8 ^ (ulonglong)stack_data1);
}

/**
 * 解析存档文件路径
 * @param path_ptr 路径指针
 * @param context_ptr 上下文指针
 * @return 解析结果
 */
longlong resolve_save_path(longlong path_ptr, longlong context_ptr)
{
    uint temp_uint1;
    uint64_t temp_data1;
    uint64_t *temp_ptr1;
    int temp_int1;
    ulonglong buffer_size;
    void *stack_data1;
    longlong stack_data2;
    int32_t stack_data3;
    
    *(int32_t *)(path_ptr + 0x10) = 0;
    if (*(int8_t **)(path_ptr + 8) != (int8_t *)0x0) {
        **(int8_t **)(path_ptr + 8) = 0;
    }
    if (context_ptr == 0) {
        temp_data1 = FUN_1800baa80(&stack_data1);
        FUN_18005d190(path_ptr, temp_data1);
        stack_data1 = &UNK_180a3c3e0;
        if (stack_data2 != 0) {
            FUN_18064e900();
        }
        stack_data2 = 0;
        stack_data3 = 0;
        stack_data1 = &UNK_18098bcb0;
        temp_int1 = *(int *)(path_ptr + 0x10) + 0x12;
        FUN_1806277c0(path_ptr, temp_int1);
        temp_ptr1 = (uint64_t *)((ulonglong)*(uint *)(path_ptr + 0x10) + *(longlong *)(path_ptr + 8));
        *temp_ptr1 = 0x6461685365726f43;  // "CoreShared"
        temp_ptr1[1] = 0x314433442f737265;  // "res/D3D1"
        *(int16_t *)(temp_ptr1 + 2) = 0x2f31;  // "/1"
        *(int8_t *)((longlong)temp_ptr1 + 0x12) = 0;
        *(int *)(path_ptr + 0x10) = temp_int1;
        return 0;
    }
    temp_uint1 = *(uint *)(context_ptr + 0x2c0);
    buffer_size = (ulonglong)temp_uint1;
    if (*(longlong *)(context_ptr + 0x2b8) != 0) {
        stack_data1 = (void *)0x180627c06;
        FUN_1806277c0(path_ptr, buffer_size);
    }
    if (temp_uint1 != 0) {
        stack_data1 = (void *)0x180627c1a;
        memcpy(*(uint64_t *)(path_ptr + 8), *(uint64_t *)(context_ptr + 0x2b8), buffer_size);
    }
    *(int32_t *)(path_ptr + 0x10) = 0;
    if (*(longlong *)(path_ptr + 8) != 0) {
        *(int8_t *)(buffer_size + *(longlong *)(path_ptr + 8)) = 0;
    }
    *(int32_t *)(path_ptr + 0x1c) = *(int32_t *)(context_ptr + 0x2cc);
    return path_ptr;
}