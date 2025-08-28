#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part091.c - 核心引擎模块第091部分
// 
// 本文件包含文本处理和缓冲区管理相关的函数
// 主要功能包括：文本编辑操作、光标移动、字符插入、删除等

/**
 * 文本编辑核心处理函数
 * 
 * 根据不同的操作码执行相应的文本编辑操作
 * 支持的功能包括：光标移动、文本选择、字符插入、删除等
 * 
 * @param engine_context 引擎上下文指针
 * @param text_buffer 文本缓冲区指针
 * @param operation_code 操作码
 */
void process_text_edit_operations(longlong engine_context, int *text_buffer, uint operation_code) {
    int16_t *temp_ptr;
    short index_val;
    int32_t temp_val;
    char char_val;
    int int_val1;
    int int_val2;
    int int_val3;
    int *ptr_val1;
    int *ptr_val2;
    ulonglong ulong_val;
    int int_val4;
    bool bool_val1;
    bool bool_val2;
    int int_val5;
    float float_val1;
    float float_val2;
    float float_val3;
    float float_val4;
    int16_t temp_stack1[4];
    int8_t temp_stack2[16];
    int stack_val1;
    int stack_val2;
    float float_stack[5];
    uint stack_val3;
    
    // 处理基础操作码范围 (0x10000-0x30000)
    if ((int)operation_code < 0x30001) {
        if (operation_code == 0x30000) {
            // 执行文本缓冲区初始化操作
            initialize_text_buffer(engine_context, text_buffer);
            int_val3 = text_buffer[2];
            if (text_buffer[1] == int_val3) {
                int_val3 = *text_buffer;
                text_buffer[2] = int_val3;
                text_buffer[1] = int_val3;
            }
            if (0 < int_val3) {
                int_val3 = int_val3 + -1;
                text_buffer[2] = int_val3;
            }
            *text_buffer = int_val3;
            goto cleanup_exit;
        }
        
        switch(operation_code) {
        case 0x10000:
            // 处理文本选择操作
            int_val3 = text_buffer[1];
            int_val5 = text_buffer[2];
            bool_val2 = check_underflow(int_val3, int_val5);
            int_val4 = int_val3 - int_val5;
            bool_val1 = int_val3 == int_val5;
            if (bool_val1) {
                if (0 < *text_buffer) {
                    *text_buffer = *text_buffer + -1;
                }
                goto cleanup_exit;
            }
            break;
            
        case 0x10001:
            // 处理文本插入操作
            if (text_buffer[1] == text_buffer[2]) {
                *text_buffer = *text_buffer + 1;
                initialize_text_buffer(engine_context, text_buffer);
            }
            else {
                process_text_insertion(engine_context, text_buffer);
                initialize_text_buffer(engine_context);
            }
            goto cleanup_exit;
            
        case 0x10002:
            goto text_operation_1;
        case 0x10003:
            goto text_operation_2;
        case 0x10004:
            // 处理行首移动操作
            int_val3 = text_buffer[1];
            int_val5 = text_buffer[2];
            int_val4 = *(int *)(engine_context + 0x3c);
            if (int_val3 != int_val5) {
                if (int_val4 < int_val3) {
                    text_buffer[1] = int_val4;
                    int_val3 = int_val4;
                }
                if (int_val4 < int_val5) {
                    text_buffer[2] = int_val4;
                    int_val5 = int_val4;
                }
                if (int_val3 == int_val5) {
                    *text_buffer = int_val3;
                }
            }
            int_val2 = *text_buffer;
            if (int_val4 < *text_buffer) {
                *text_buffer = int_val4;
                int_val2 = int_val4;
            }
            if (int_val3 != int_val5) {
                int_val2 = int_val3;
                if (int_val5 < int_val3) {
                    text_buffer[1] = int_val5;
                    int_val2 = int_val5;
                }
                *text_buffer = int_val2;
                text_buffer[2] = int_val2;
                *(int8_t *)((longlong)text_buffer + 0xf) = 0;
            }
            if ((char)text_buffer[4] == '\0') {
                while ((0 < int_val2 &&
                       (*(short *)(*(longlong *)(engine_context + 0x10) + -2 + (longlong)int_val2 * 2) != 10))) {
                    int_val2 = int_val2 + -1;
                    *text_buffer = int_val2;
                }
            }
            else {
                *text_buffer = 0;
            }
            goto cleanup_exit;
            
        case 0x10005:
            // 处理行尾移动操作
            int_val3 = text_buffer[1];
            int_val5 = text_buffer[2];
            int_val4 = *(int *)(engine_context + 0x3c);
            if (int_val3 != int_val5) {
                if (int_val4 < int_val3) {
                    text_buffer[1] = int_val4;
                    int_val3 = int_val4;
                }
                if (int_val4 < int_val5) {
                    text_buffer[2] = int_val4;
                    int_val5 = int_val4;
                }
                if (int_val3 == int_val5) {
                    *text_buffer = int_val3;
                }
            }
            int_val2 = *text_buffer;
            if (int_val4 < *text_buffer) {
                *text_buffer = int_val4;
                int_val2 = int_val4;
            }
            if (int_val3 != int_val5) {
                int_val2 = int_val3;
                if (int_val5 < int_val3) {
                    text_buffer[1] = int_val5;
                    int_val2 = int_val5;
                }
                *text_buffer = int_val2;
                text_buffer[2] = int_val2;
                *(int8_t *)((longlong)text_buffer + 0xf) = 0;
            }
            if ((char)text_buffer[4] == '\0') {
                while ((int_val2 < int_val4 &&
                       (*(short *)(*(longlong *)(engine_context + 0x10) + (longlong)int_val2 * 2) != 10))) {
                    int_val2 = int_val2 + 1;
                    *text_buffer = int_val2;
                }
            }
            else {
                *text_buffer = int_val4;
            }
            goto cleanup_exit;
            
        case 0x10006:
            // 重置文本缓冲区
            text_buffer[1] = 0;
            text_buffer[2] = 0;
            *text_buffer = 0;
            *(int8_t *)((longlong)text_buffer + 0xf) = 0;
            return;
            
        case 0x10007:
            // 初始化文本缓冲区到最大长度
            int_val3 = *(int *)(engine_context + 0x3c);
            text_buffer[1] = 0;
            text_buffer[2] = 0;
            *(int8_t *)((longlong)text_buffer + 0xf) = 0;
            *text_buffer = int_val3;
            return;
            
        case 0x10008:
            goto text_operation_3;
        case 0x10009:
            goto text_operation_4;
        case 0x1000a:
            // 执行文本搜索操作
            search_text_in_buffer(engine_context, text_buffer);
            goto cleanup_exit;
            
        case 0x1000b:
            // 处理文本替换操作
            if ((short)text_buffer[0x386] != 99) {
                ptr_val2 = text_buffer + (longlong)*(short *)((longlong)text_buffer + 0xe16) * 4 + 6;
                temp_stack2 = *(int8_t (*) [16])(text_buffer + (longlong)(short)text_buffer[0x386] * 4 + 6);
                int_val5 = temp_stack2._0_4_;
                ulong_val = temp_stack2._0_8_;
                ptr_val2[3] = -1;
                *ptr_val2 = int_val5;
                int_val3 = temp_stack2._8_4_;
                ptr_val2[2] = temp_stack2._4_4_;
                ptr_val2[1] = int_val3;
                if (int_val3 != 0) {
                    int_val4 = 0;
                    if (text_buffer[0x388] < text_buffer[0x387] + int_val3) {
                        ptr_val2[1] = 0;
                        ptr_val2[2] = 0;
                    }
                    else {
                        ptr_val2[3] = text_buffer[0x387];
                        text_buffer[0x387] = text_buffer[0x387] + int_val3;
                        if (0 < ptr_val2[1]) {
                            do {
                                int_val2 = *ptr_val2 + int_val4;
                                int_val3 = ptr_val2[3] + int_val4;
                                int_val4 = int_val4 + 1;
                                *(int16_t *)((longlong)text_buffer + (longlong)int_val3 * 2 + 0x648) =
                                     *(int16_t *)(*(longlong *)(engine_context + 0x10) + (longlong)int_val2 * 2);
                            } while (int_val4 < ptr_val2[1]);
                        }
                    }
                    update_text_cache(engine_context, int_val5, int_val3);
                }
                temp_val = temp_stack2._4_4_;
                if (temp_stack2._4_4_ != 0) {
                    process_text_replacement(engine_context, ulong_val & 0xffffffff,
                                           (longlong)text_buffer + ((longlong)(int)temp_stack2._12_4_ + 0x318) * 2 + 0x18,
                                           temp_stack2._4_4_);
                    text_buffer[0x388] = text_buffer[0x388] + temp_val;
                }
                *text_buffer = int_val5 + temp_val;
                *(short *)((longlong)text_buffer + 0xe16) = *(short *)((longlong)text_buffer + 0xe16) + 1;
                *(short *)(text_buffer + 0x386) = (short)text_buffer[0x386] + 1;
            }
            goto cleanup_exit;
            
        case 0x1000c:
            // 处理文本删除操作
            int_val3 = text_buffer[1];
            int_val5 = text_buffer[2];
            bool_val2 = check_underflow(int_val3, int_val5);
            int_val4 = int_val3 - int_val5;
            bool_val1 = int_val3 == int_val5;
            if (bool_val1) {
                int_val3 = get_next_text_position(engine_context, *text_buffer);
                *text_buffer = int_val3;
                initialize_text_buffer(engine_context, text_buffer);
                return;
            }
            break;
            
        case 0x1000d:
            // 处理文本撤销操作
            if (text_buffer[1] != text_buffer[2]) {
                process_text_undo(engine_context, text_buffer);
                return;
            }
            int_val3 = get_previous_text_position(engine_context, *text_buffer);
            *text_buffer = int_val3;
            initialize_text_buffer(engine_context, text_buffer);
            return;
            
        default:
            goto default_operation;
        }
        
        if (!bool_val1 && bool_val2 == int_val4 < 0) {
            text_buffer[1] = int_val5;
            int_val3 = int_val5;
        }
        *text_buffer = int_val3;
        text_buffer[2] = int_val3;
        goto cleanup_exit;
    }
    
    // 处理扩展操作码范围 (0x30001-0x3000d)
    switch(operation_code) {
    case 0x30001:
        // 处理文本复制操作
        int_val3 = text_buffer[2];
        if (text_buffer[1] == int_val3) {
            int_val3 = *text_buffer;
            text_buffer[1] = int_val3;
        }
        else {
            *text_buffer = int_val3;
        }
        text_buffer[2] = int_val3 + 1;
        initialize_text_buffer(engine_context, text_buffer);
        *text_buffer = text_buffer[2];
        goto cleanup_exit;
        
    case 0x30002:
    text_operation_1:
        if ((char)text_buffer[4] == '\0') {
            int_val3 = text_buffer[2];
            int_val5 = text_buffer[1];
            if ((operation_code >> 0x11 & 1) == 0) {
                if (int_val5 != int_val3) {
                    if (int_val3 < int_val5) {
                        text_buffer[1] = int_val3;
                        int_val5 = int_val3;
                    }
                    *text_buffer = int_val5;
                    *(int8_t *)((longlong)text_buffer + 0xf) = 0;
                    goto text_processing_1;
                }
            }
            else if (int_val5 == int_val3) {
                int_val5 = *text_buffer;
                text_buffer[1] = int_val5;
            text_processing_1:
                text_buffer[2] = int_val5;
            }
            else {
                *text_buffer = int_val3;
            }
            initialize_text_buffer(engine_context, text_buffer);
            process_text_formatting(temp_stack2, engine_context, *text_buffer, (char)text_buffer[4]);
            if (stack_val2 == temp_stack2._12_4_) {
                return;
            }
            if (*(char *)((longlong)text_buffer + 0xf) == '\0') {
                float_val4 = (float)temp_stack2._0_4_;
            }
            else {
                float_val4 = (float)text_buffer[5];
            }
            *text_buffer = stack_val2;
            calculate_text_metrics(float_stack, engine_context, stack_val2);
            ulong_val = (ulonglong)stack_val3;
            int_val3 = 0;
            if ((int)stack_val3 < 1) goto text_processing_2;
            float_val3 = -1.0;
            float_val2 = float_stack[0];
            goto text_processing_3;
        }
        operation_code = operation_code & 0x20000 | 0x10000;
        goto process_operations;
        
    case 0x30003:
    text_operation_2:
        if ((char)text_buffer[4] != '\0') goto text_operation_2_continue;
        int_val3 = text_buffer[2];
        if ((operation_code >> 0x11 & 1) == 0) {
            if (text_buffer[1] != int_val3) {
                process_text_selection(engine_context, text_buffer);
            }
        }
        else if (text_buffer[1] == int_val3) {
            text_buffer[2] = *text_buffer;
            text_buffer[1] = *text_buffer;
        }
        else {
            *text_buffer = int_val3;
        }
        initialize_text_buffer(engine_context, text_buffer);
        process_text_formatting(temp_stack2, engine_context, *text_buffer, (char)text_buffer[4]);
        if (stack_val1 == 0) {
            return;
        }
        if (*(char *)((longlong)text_buffer + 0xf) == '\0') {
            float_val4 = (float)temp_stack2._0_4_;
        }
        else {
            float_val4 = (float)text_buffer[5];
        }
        int_val5 = temp_stack2._12_4_ + stack_val1;
        *text_buffer = int_val5;
        calculate_text_metrics(float_stack, engine_context, int_val5);
        ulong_val = (ulonglong)stack_val3;
        int_val3 = 0;
        if (0 < (int)stack_val3) {
            float_val3 = -1.0;
            float_val2 = float_stack[0];
            do {
                float_val1 = (float)get_character_width(engine_context, int_val5, int_val3);
                if ((float_val1 == float_val3) || (float_val2 = float_val2 + float_val1, float_val4 < float_val2)) break;
                *text_buffer = *text_buffer + 1;
                int_val3 = int_val3 + 1;
            } while (int_val3 < (int)ulong_val);
        }
        goto text_processing_2;
        
    case 0x30004:
        // 处理文本粘贴操作
        initialize_text_buffer(engine_context, text_buffer);
        int_val3 = text_buffer[2];
        if (text_buffer[1] == int_val3) {
            int_val3 = *text_buffer;
            text_buffer[2] = int_val3;
            text_buffer[1] = int_val3;
        }
        else {
            *text_buffer = int_val3;
        }
        if ((char)text_buffer[4] == '\0') {
            while ((0 < int_val3 &&
                   (*(short *)(*(longlong *)(engine_context + 0x10) + -2 + (longlong)int_val3 * 2) != 10))) {
                int_val3 = int_val3 + -1;
                *text_buffer = int_val3;
            }
            text_buffer[2] = int_val3;
        }
        else {
            *text_buffer = 0;
            text_buffer[2] = 0;
        }
        goto cleanup_exit;
        
    case 0x30005:
        // 处理文本全选操作
        int_val5 = text_buffer[1];
        int_val3 = text_buffer[2];
        int_val4 = *(int *)(engine_context + 0x3c);
        if (int_val5 != int_val3) {
            if (int_val4 < int_val5) {
                text_buffer[1] = int_val4;
                int_val5 = int_val4;
            }
            if (int_val4 < int_val3) {
                text_buffer[2] = int_val4;
                int_val3 = int_val4;
            }
            if (int_val5 == int_val3) {
                *text_buffer = int_val5;
            }
        }
        int_val2 = *text_buffer;
        if (int_val4 < *text_buffer) {
            *text_buffer = int_val4;
            int_val2 = int_val4;
        }
        if (int_val5 == int_val3) {
            text_buffer[2] = int_val2;
            text_buffer[1] = int_val2;
            int_val3 = int_val2;
        }
        else {
            *text_buffer = int_val3;
        }
        if ((char)text_buffer[4] == '\0') {
            while ((int_val3 < int_val4 &&
                   (*(short *)(*(longlong *)(engine_context + 0x10) + (longlong)int_val3 * 2) != 10))) {
                int_val3 = int_val3 + 1;
                *text_buffer = int_val3;
            }
            text_buffer[2] = int_val3;
        }
        else {
            *text_buffer = int_val4;
            text_buffer[2] = int_val4;
        }
        goto cleanup_exit;
        
    case 0x30006:
        // 处理文本剪切操作
        if (text_buffer[1] == text_buffer[2]) {
            text_buffer[1] = *text_buffer;
        }
        text_buffer[2] = 0;
        *text_buffer = 0;
        *(int8_t *)((longlong)text_buffer + 0xf) = 0;
        return;
        
    case 0x30007:
        // 处理文本重做操作
        if (text_buffer[1] == text_buffer[2]) {
            text_buffer[2] = *text_buffer;
            text_buffer[1] = *text_buffer;
            int_val3 = *(int *)(engine_context + 0x3c);
            text_buffer[2] = int_val3;
            *text_buffer = int_val3;
        }
        else {
            *text_buffer = text_buffer[2];
            int_val3 = *(int *)(engine_context + 0x3c);
            text_buffer[2] = int_val3;
            *text_buffer = int_val3;
        }
        goto cleanup_exit;
        
    case 0x30008:
    text_operation_3:
        if (text_buffer[1] == text_buffer[2]) {
            if (*text_buffer < *(int *)(engine_context + 0x3c)) {
                process_text_extension(engine_context, text_buffer, *text_buffer, 1);
            }
            goto cleanup_exit;
        }
        break;
        
    case 0x30009:
    text_operation_4:
        if (text_buffer[1] == text_buffer[2]) {
            int_val3 = *(int *)(engine_context + 0x3c);
            int_val5 = *text_buffer;
            if (int_val3 < *text_buffer) {
                *text_buffer = int_val3;
                int_val5 = int_val3;
            }
            if (0 < int_val5) {
                process_text_extension(engine_context, text_buffer, int_val5 + -1, 1);
                *text_buffer = *text_buffer + -1;
            }
            goto cleanup_exit;
        }
        break;
        
    default:
    default_operation:
        if (0xffff < (int)operation_code) {
            operation_code = 0;
        }
        if ((int)operation_code < 1) {
            return;
        }
        temp_stack1[0] = (int16_t)operation_code;
        if ((operation_code == 10) && ((char)text_buffer[4] != '\0')) {
            return;
        }
        if (((char)text_buffer[3] != '\0') && (text_buffer[1] == text_buffer[2])) {
            int_val3 = *text_buffer;
            if (int_val3 < *(int *)(engine_context + 0x3c)) {
                ptr_val2 = text_buffer + 6;
                *(int16_t *)(text_buffer + 0x386) = 99;
                text_buffer[0x388] = 999;
                if (*(short *)((longlong)text_buffer + 0xe16) == 99) {
                    cleanup_text_buffer(ptr_val2);
                }
                if (999 < text_buffer[0x387] + 1) {
                    do {
                        cleanup_text_buffer(ptr_val2);
                    } while (0x3e6 < text_buffer[0x387]);
                }
                index_val = *(short *)((longlong)text_buffer + 0xe16);
                *(short *)((longlong)text_buffer + 0xe16) = index_val + 1;
                ptr_val1 = ptr_val2 + (longlong)index_val * 4;
                if (ptr_val1 != (int *)0x0) {
                    *ptr_val1 = int_val3;
                    ptr_val1[1] = 1;
                    ptr_val1[2] = 1;
                    ptr_val1[3] = text_buffer[0x387];
                    text_buffer[0x387] = text_buffer[0x387] + 1;
                    temp_ptr = (int16_t *)((longlong)ptr_val2 + ((longlong)ptr_val1[3] + 0x318) * 2);
                    if (temp_ptr != (int16_t *)0x0) {
                        *temp_ptr = *(int16_t *)(*(longlong *)(engine_context + 0x10) + (longlong)int_val3 * 2);
                    }
                }
                update_text_cache(engine_context, *text_buffer, 1);
                char_val = process_text_character(engine_context, *text_buffer, temp_stack1, 1);
                if (char_val == '\0') {
                    return;
                }
            text_increment:
                *text_buffer = *text_buffer + 1;
            cleanup_exit:
                *(int8_t *)((longlong)text_buffer + 0xf) = 0;
                return;
            }
        }
        process_text_input(engine_context, text_buffer);
        char_val = process_text_character(engine_context, *text_buffer, temp_stack1, 1);
        if (char_val == '\0') {
            return;
        }
        update_text_display(text_buffer, *text_buffer, 1);
        goto text_increment;
        
    case 0x3000c:
        if (text_buffer[1] == text_buffer[2]) {
            text_buffer[2] = *text_buffer;
            text_buffer[1] = *text_buffer;
        }
        int_val3 = get_next_text_position(engine_context);
        goto text_operation_5;
        
    case 0x3000d:
        if (text_buffer[1] == text_buffer[2]) {
            text_buffer[2] = *text_buffer;
            text_buffer[1] = *text_buffer;
        }
        int_val3 = get_previous_text_position(engine_context);
    text_operation_5:
        *text_buffer = int_val3;
        text_buffer[2] = int_val3;
        initialize_text_buffer(engine_context, text_buffer);
        return;
    }
    process_text_input(engine_context, text_buffer);
    goto cleanup_exit;
    
text_operation_2_continue:
    operation_code = operation_code & 0x20000 | 0x10001;
    goto process_operations;
    
    while( true ) {
        *text_buffer = *text_buffer + 1;
        int_val3 = int_val3 + 1;
        if ((int)ulong_val <= int_val3) break;
    text_processing_3:
        float_val1 = (float)get_character_width(engine_context, stack_val2, int_val3);
        if ((float_val1 == float_val3) || (float_val2 = float_val2 + float_val1, float_val4 < float_val2)) break;
    }
    
text_processing_2:
    int_val3 = text_buffer[2];
    int_val5 = text_buffer[1];
    int_val4 = *(int *)(engine_context + 0x3c);
    if (int_val5 != int_val3) {
        if (int_val4 < int_val5) {
            text_buffer[1] = int_val4;
            int_val5 = int_val4;
        }
        if (int_val4 < int_val3) {
            text_buffer[2] = int_val4;
            int_val3 = int_val4;
        }
        if (int_val5 == int_val3) {
            *text_buffer = int_val5;
        }
    }
    int_val3 = *text_buffer;
    if (int_val4 < *text_buffer) {
        *text_buffer = int_val4;
        int_val3 = int_val4;
    }
    text_buffer[5] = (int)float_val4;
    *(int8_t *)((longlong)text_buffer + 0xf) = 1;
    if ((operation_code >> 0x11 & 1) != 0) {
        text_buffer[2] = int_val3;
    }
    return;
}

/**
 * 文本缓冲区数据插入函数
 * 
 * 向文本缓冲区插入新的数据项
 * 
 * @param param1 参数1（上下文相关）
 * @param param2 参数2（数据源）
 * @param target_buffer 目标缓冲区
 */
void insert_text_buffer_data(uint64_t param1, uint64_t param2, int *target_buffer) {
    int8_t temp_data[16];
    int int_val1;
    int int_val2;
    longlong reg_rax;
    int *ptr_reg_rbx;
    longlong ptr_reg_rbp;
    longlong ptr_reg_rsi;
    longlong ptr_reg_rdi;
    int int_val3;
    int int_val4;
    int int_val5;
    uint64_t temp_val;
    
    temp_data = *(int8_t (*) [16])(ptr_reg_rsi + reg_rax * 8);
    int_val5 = temp_data._0_4_;
    target_buffer[3] = -1;
    *(int8_t (*) [16])(ptr_reg_rbp + -0x40) = temp_data;
    *target_buffer = int_val5;
    temp_val = temp_data._8_8_;
    int_val4 = temp_data._8_4_;
    target_buffer[2] = temp_data._4_4_;
    target_buffer[1] = int_val4;
    if (int_val4 != 0) {
        int_val3 = 0;
        if (*(int *)(ptr_reg_rsi + 0xe08) < *(int *)(ptr_reg_rsi + 0xe04) + int_val4) {
            target_buffer[1] = 0;
            target_buffer[2] = 0;
        }
        else {
            target_buffer[3] = *(int *)(ptr_reg_rsi + 0xe04);
            *(int *)(ptr_reg_rsi + 0xe04) = *(int *)(ptr_reg_rsi + 0xe04) + int_val4;
            if (0 < target_buffer[1]) {
                do {
                    int_val1 = *target_buffer + int_val3;
                    int_val2 = target_buffer[3] + int_val3;
                    int_val3 = int_val3 + 1;
                    *(int16_t *)(ptr_reg_rsi + 0x630 + (longlong)int_val2 * 2) =
                         *(int16_t *)(*(longlong *)(ptr_reg_rdi + 0x10) + (longlong)int_val1 * 2);
                } while (int_val3 < target_buffer[1]);
            }
        }
        temp_val = update_text_cache(temp_val, int_val5, int_val4);
    }
    int_val4 = *(int *)(ptr_reg_rbp + -0x3c);
    if (int_val4 != 0) {
        process_text_replacement(temp_val, temp_data._0_8_ & 0xffffffff,
                                 ptr_reg_rsi + ((longlong)*(int *)(ptr_reg_rbp + -0x34) + 0x318) * 2, int_val4);
        *(int *)(ptr_reg_rsi + 0xe08) = *(int *)(ptr_reg_rsi + 0xe08) + int_val4;
    }
    *ptr_reg_rbx = int_val5 + int_val4;
    *(short *)(ptr_reg_rsi + 0xdfe) = *(short *)(ptr_reg_rsi + 0xdfe) + 1;
    *(short *)(ptr_reg_rsi + 0xe00) = *(short *)(ptr_reg_rsi + 0xe00) + 1;
    *(int8_t *)((longlong)ptr_reg_rbx + 0xf) = 0;
    return;
}

/**
 * 文本缓冲区简化函数
 * 
 * 简化文本缓冲区的内容，移除冗余数据
 */
void simplify_text_buffer(void) {
    int int_val1;
    int int_val2;
    int *buffer_ptr;
    
    int_val2 = buffer_ptr[1];
    int_val1 = buffer_ptr[2];
    if (int_val2 == int_val1) {
        if (0 < *buffer_ptr) {
            *buffer_ptr = *buffer_ptr + -1;
        }
    }
    else {
        if (int_val1 < int_val2) {
            buffer_ptr[1] = int_val1;
            int_val2 = int_val1;
        }
        *buffer_ptr = int_val2;
        buffer_ptr[2] = int_val2;
    }
    *(int8_t *)((longlong)buffer_ptr + 0xf) = 0;
    return;
}

/**
 * 文本缓冲区清理函数
 * 
 * 清理文本缓冲区中的过期数据
 * 
 * @param buffer_ptr 缓冲区指针
 */
void cleanup_text_buffer(longlong buffer_ptr) {
    short index_val;
    
    if (*(short *)(buffer_ptr + 0xdfe) < 1) {
        return;
    }
    if (-1 < *(int *)(buffer_ptr + 0xc)) {
        *(int *)(buffer_ptr + 0xe04) = *(int *)(buffer_ptr + 0xe04) - *(int *)(buffer_ptr + 4);
        memmove(buffer_ptr + 0x630, buffer_ptr + 0x630 + (longlong)*(int *)(buffer_ptr + 4) * 2,
                (longlong)*(int *)(buffer_ptr + 0xe04) * 2);
    }
    index_val = *(short *)(buffer_ptr + 0xdfe) + -1;
    *(short *)(buffer_ptr + 0xdfe) = index_val;
    memmove(buffer_ptr, buffer_ptr + 0x10, (longlong)index_val << 4);
}

/**
 * 文本缓冲区移除函数
 * 
 * 从缓冲区中移除指定位置的数据
 * 
 * @param buffer_ptr 缓冲区指针
 * @param index 要移除的索引
 */
void remove_from_text_buffer(longlong buffer_ptr, short index) {
    longlong ptr_reg_rdi;
    char flag_sf;
    char flag_of;
    
    if (flag_of == flag_sf) {
        *(int *)(buffer_ptr + 0xe04) = *(int *)(buffer_ptr + 0xe04) - *(int *)(buffer_ptr + 4);
        memmove(buffer_ptr + 0x630, buffer_ptr + 0x630 + (longlong)*(int *)(buffer_ptr + 4) * 2,
                (longlong)*(int *)(buffer_ptr + 0xe04) * 2);
    }
    *(short *)(ptr_reg_rdi + 0xdfe) = index + -1;
    memmove();
}

/**
 * 文本缓冲区释放函数
 * 
 * 释放文本缓冲区中的指定数据块
 * 
 * @param buffer_ptr 缓冲区指针
 */
void free_text_buffer_block(longlong buffer_ptr) {
    longlong reg_rax;
    
    *(int *)(buffer_ptr + 0xe04) = *(int *)(buffer_ptr + 0xe04) - *(int *)(buffer_ptr + 4);
    memmove(buffer_ptr + 0x630, reg_rax + (longlong)*(int *)(buffer_ptr + 4) * 2,
            (longlong)*(int *)(buffer_ptr + 0xe04) * 2);
}

/**
 * 文本缓冲区索引调整函数
 * 
 * 调整文本缓冲区的索引值
 * 
 * @param param1 参数1
 * @param index 新的索引值
 */
void adjust_text_buffer_index(uint64_t param1, short index) {
    longlong ptr_reg_rdi;
    
    *(short *)(ptr_reg_rdi + 0xdfe) = index + -1;
    memmove();
}

/**
 * 空操作函数
 * 
 * 执行空操作，用于占位或同步
 */
void empty_operation(void) {
    return;
}

/**
 * 文本缓冲区分配函数
 * 
 * 在文本缓冲区中分配新的空间
 * 
 * @param buffer_ptr 缓冲区指针
 * @param param2 参数2
 * @param size 要分配的大小
 * @param param4 参数4
 * @return 分配的内存地址或0
 */
longlong allocate_text_buffer(longlong buffer_ptr, int32_t param2, int size, int32_t param4) {
    short index_val;
    int int_val1;
    int32_t *ptr_val;
    
    *(int32_t *)(buffer_ptr + 0xe08) = 999;
    *(int16_t *)(buffer_ptr + 0xe00) = 99;
    if (*(short *)(buffer_ptr + 0xdfe) == 99) {
        cleanup_text_buffer();
    }
    if (size < 1000) {
        int_val1 = *(int *)(buffer_ptr + 0xe04);
        while (999 < int_val1 + size) {
            cleanup_text_buffer(buffer_ptr);
            int_val1 = *(int *)(buffer_ptr + 0xe04);
        }
        index_val = *(short *)(buffer_ptr + 0xdfe);
        *(short *)(buffer_ptr + 0xdfe) = index_val + 1;
        ptr_val = (int32_t *)((longlong)index_val * 0x10 + buffer_ptr);
        if (ptr_val != (int32_t *)0x0) {
            *ptr_val = param2;
            ptr_val[1] = size;
            ptr_val[2] = param4;
            if (size != 0) {
                ptr_val[3] = *(int32_t *)(buffer_ptr + 0xe04);
                *(int *)(buffer_ptr + 0xe04) = *(int *)(buffer_ptr + 0xe04) + size;
                return buffer_ptr + ((longlong)(int)ptr_val[3] + 0x318) * 2;
            }
            ptr_val[3] = 0xffffffff;
        }
    }
    else {
        *(int16_t *)(buffer_ptr + 0xdfe) = 0;
        *(int32_t *)(buffer_ptr + 0xe04) = 0;
    }
    return 0;
}

/**
 * 文本缓冲区数据删除函数
 * 
 * 从文本缓冲区中删除指定的数据
 * 
 * @param engine_context 引擎上下文
 * @param text_buffer 文本缓冲区
 */
void delete_text_buffer_data(longlong engine_context, int *text_buffer) {
    int8_t temp_data[16];
    short index_val;
    int int_val1;
    int int_val2;
    int int_val3;
    int int_val4;
    int int_val5;
    int int_val6;
    int int_val7;
    longlong long_val;
    int int_val8;
    int stack_val;
    
    if (*(short *)((longlong)text_buffer + 0xe16) != 0) {
        index_val = (short)text_buffer[0x386];
        temp_data = *(int8_t (*) [16])
                     (text_buffer + (longlong)*(short *)((longlong)text_buffer + 0xe16) * 4 + 2);
        int_val8 = temp_data._0_4_;
        text_buffer[(longlong)index_val * 4 + 5] = -1;
        text_buffer[(longlong)index_val * 4 + 2] = int_val8;
        int_val6 = temp_data._8_4_;
        text_buffer[(longlong)index_val * 4 + 3] = int_val6;
        int_val2 = temp_data._4_4_;
        text_buffer[(longlong)index_val * 4 + 4] = int_val2;
        if (int_val6 != 0) {
            if (text_buffer[0x387] + int_val6 < 999) {
                int_val5 = text_buffer[0x388];
                if (int_val5 < text_buffer[0x387] + int_val6) {
                    index_val = (short)text_buffer[0x386];
                    do {
                        if (index_val == 99) {
                            return;
                        }
                        if (index_val < 99) {
                            if (-1 < text_buffer[0x191]) {
                                int_val5 = int_val5 + text_buffer[399];
                                text_buffer[0x388] = int_val5;
                                memmove((longlong)text_buffer + ((longlong)int_val5 + 0x324) * 2,
                                        (longlong)text_buffer + (((longlong)int_val5 - (longlong)text_buffer[399]) + 0x324) * 2,
                                        (longlong)(999 - int_val5) * 2);
                            }
                            memmove(text_buffer + (longlong)index_val * 4 + 6 + 4, text_buffer + (longlong)index_val * 4 + 6,
                                    (longlong)(99 - index_val) << 4);
                        }
                    } while (int_val5 < text_buffer[0x387] + int_val6);
                }
                int_val1 = text_buffer[0x386];
                int_val7 = 0;
                text_buffer[(longlong)(short)int_val1 * 4 + 5] = int_val5 - int_val6;
                text_buffer[0x388] = text_buffer[0x388] - int_val6;
                if (0 < int_val6) {
                    long_val = (longlong)int_val8 * 2;
                    do {
                        int_val5 = text_buffer[(longlong)(short)int_val1 * 4 + 5] + int_val7;
                        int_val7 = int_val7 + 1;
                        *(int16_t *)((longlong)text_buffer + (longlong)int_val5 * 2 + 0x648) =
                             *(int16_t *)(long_val + *(longlong *)(engine_context + 0x10));
                        long_val = long_val + 2;
                    } while (int_val7 < int_val6);
                }
            }
            else {
                text_buffer[(longlong)index_val * 4 + 3] = 0;
            }
            update_text_cache(engine_context, int_val8, int_val6);
        }
        if (int_val2 != 0) {
            stack_val = temp_data._12_4_;
            process_text_replacement(engine_context, int_val8, (longlong)text_buffer + ((longlong)stack_val + 0x324) * 2, int_val2);
            text_buffer[0x387] = text_buffer[0x387] - int_val2;
        }
        *text_buffer = int_val8 + int_val2;
        *(short *)((longlong)text_buffer + 0xe16) = *(short *)((longlong)text_buffer + 0xe16) + -1;
        *(short *)(text_buffer + 0x386) = (short)text_buffer[0x386] + -1;
    }
    return;
}

/**
 * 文本缓冲区数据插入函数（变体）
 * 
 * 向文本缓冲区插入数据的另一种实现
 * 
 * @param param1 参数1
 * @param param2 参数2
 * @param engine_context 引擎上下文
 */
void insert_text_buffer_data_variant(longlong param1, longlong param2) {
    int8_t temp_data[16];
    short index_val;
    int int_val1;
    longlong reg_rax;
    int int_val2;
    longlong long_val;
    int int_val3;
    longlong ptr_reg_rbp;
    int *ptr_reg_rsi;
    int int_val4;
    int int_val5;
    uint64_t temp_val;
    int int_val6;
    int stack_val;
    
    long_val = param1 * 0x10 + param2;
    temp_data = *(int8_t (*) [16])(param2 + 8 + reg_rax * 8);
    int_val6 = temp_data._0_4_;
    *(int32_t *)(long_val + 0x14) = 0xffffffff;
    *(int *)(long_val + 8) = int_val6;
    temp_val = temp_data._8_8_;
    int_val4 = temp_data._8_4_;
    *(int *)(long_val + 0xc) = int_val4;
    int_val1 = temp_data._4_4_;
    *(int *)(long_val + 0x10) = int_val1;
    if (int_val4 != 0) {
        int_val3 = *(int *)(param2 + 0xe1c) + int_val4;
        if (int_val3 < 999) {
            int_val2 = ptr_reg_rsi[0x388];
            if (int_val2 < int_val3) {
                index_val = (short)ptr_reg_rsi[0x386];
                do {
                    if (index_val == 99) {
                        return;
                    }
                    if (index_val < 99) {
                        if (-1 < ptr_reg_rsi[0x191]) {
                            int_val2 = int_val2 + ptr_reg_rsi[399];
                            ptr_reg_rsi[0x388] = int_val2;
                            memmove((longlong)ptr_reg_rsi + ((longlong)int_val2 + 0x324) * 2,
                                    (longlong)ptr_reg_rsi +
                                    (((longlong)int_val2 - (longlong)ptr_reg_rsi[399]) + 0x324) * 2,
                                    (longlong)(999 - int_val2) * 2);
                        }
                        memmove(ptr_reg_rsi + (longlong)index_val * 4 + 6 + 4, ptr_reg_rsi + (longlong)index_val * 4 + 6,
                                (longlong)(99 - index_val) << 4);
                    }
                } while (int_val2 < ptr_reg_rsi[0x387] + int_val4);
            }
            int_val3 = ptr_reg_rsi[0x386];
            int_val5 = 0;
            ptr_reg_rsi[(longlong)(short)int_val3 * 4 + 5] = int_val2 - int_val4;
            ptr_reg_rsi[0x388] = ptr_reg_rsi[0x388] - int_val4;
            if (0 < int_val4) {
                long_val = (longlong)int_val6 * 2;
                do {
                    int_val2 = ptr_reg_rsi[(longlong)(short)int_val3 * 4 + 5] + int_val5;
                    int_val5 = int_val5 + 1;
                    *(int16_t *)((longlong)ptr_reg_rsi + (longlong)int_val2 * 2 + 0x648) =
                         *(int16_t *)(long_val + *(longlong *)(ptr_reg_rbp + 0x10));
                    long_val = long_val + 2;
                } while (int_val5 < int_val4);
            }
        }
        else {
            *(int32_t *)(long_val + 0xc) = 0;
        }
        temp_val = update_text_cache(temp_val, int_val6, int_val4);
    }
    if (int_val1 != 0) {
        stack_val = temp_data._12_4_;
        process_text_replacement(temp_val, int_val6, (longlong)ptr_reg_rsi + ((longlong)stack_val + 0x324) * 2,
                                 int_val1);
        ptr_reg_rsi[0x387] = ptr_reg_rsi[0x387] - int_val1;
    }
    *ptr_reg_rsi = int_val6 + int_val1;
    *(short *)((longlong)ptr_reg_rsi + 0xe16) = *(short *)((longlong)ptr_reg_rsi + 0xe16) + -1;
    *(short *)(ptr_reg_rsi + 0x386) = (short)ptr_reg_rsi[0x386] + -1;
    return;
}

/**
 * 空操作函数（变体）
 * 
 * 执行空操作的另一种实现
 */
void empty_operation_variant(void) {
    return;
}