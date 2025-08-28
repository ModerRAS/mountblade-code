#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part223_sub002_sub002.c - 核心引擎模块 - 材质使用统计处理

/**
 * 处理材质使用统计信息
 * 
 * 该函数负责统计和管理材质的使用情况，包括：
 * 1. 初始化材质统计相关的数据结构
 * 2. 遍历材质列表并统计使用次数
 * 3. 处理材质的名称匹配和计数
 * 4. 更新材质使用统计信息
 * 
 * @param engine_context 引擎上下文指针，包含材质相关数据
 */
void process_material_usage_statistics(longlong engine_context)
{
    byte temp_byte1;
    bool comparison_result;
    longlong *material_ptr1;
    longlong *material_ptr2;
    longlong *material_ptr3;
    byte *name_buffer_ptr1;
    longlong *material_ptr4;
    undefined8 *******tree_node_ptr1;
    int loop_counter1;
    undefined8 *data_ptr1;
    undefined8 *******tree_node_ptr2;
    longlong *material_ptr5;
    undefined8 *******tree_node_ptr3;
    undefined4 *name_ptr1;
    uint char_comparison1;
    undefined8 ******array_ptr1;
    byte *name_buffer_ptr2;
    undefined *temp_ptr1;
    ulonglong address_offset1;
    int char_diff1;
    uint *uint_ptr1;
    longlong material_data1;
    longlong material_data2;
    longlong material_data3;
    undefined8 *******tree_node_ptr4;
    ulonglong material_count1;
    ulonglong material_count2;
    longlong *material_ptr6;
    ulonglong material_count3;
    uint stack_var1;
    undefined4 stack_var2;
    longlong **stack_ptr_array1;
    undefined *stack_ptr1;
    byte *stack_buffer1;
    int stack_int1;
    ulonglong stack_offset1;
    undefined *stack_ptr2;
    byte *stack_buffer2;
    int stack_int2;
    ulonglong stack_offset2;
    undefined *stack_ptr3;
    byte *stack_buffer3;
    int stack_int3;
    ulonglong stack_offset3;
    undefined *stack_ptr4;
    byte *stack_buffer4;
    int stack_int4;
    ulonglong stack_offset4;
    undefined *stack_ptr5;
    byte *stack_buffer5;
    int stack_int5;
    ulonglong stack_offset5;
    undefined *stack_ptr6;
    byte *stack_buffer6;
    int stack_int6;
    ulonglong stack_offset6;
    undefined8 ******stack_tree_array1;
    undefined8 ******stack_tree_array2;
    undefined8 ******stack_tree_array3;
    undefined8 stack_var3;
    undefined8 stack_var4;
    undefined4 stack_var5;
    ulonglong stack_offset7;
    undefined8 ******stack_tree_array4;
    undefined8 ******stack_tree_array5;
    undefined8 ******stack_tree_array6;
    undefined8 stack_var6;
    undefined8 stack_var7;
    undefined4 stack_var8;
    undefined8 ******stack_tree_array7;
    undefined8 ******stack_tree_array8;
    undefined8 ******stack_tree_array9;
    undefined8 stack_var9;
    undefined8 stack_var10;
    undefined4 stack_var11;
    longlong *material_ptr7;
    ulonglong stack_offset8;
    longlong stack_var12;
    longlong *material_ptr8;
    ulonglong stack_offset9;
    undefined4 stack_var13;
    undefined4 stack_var14;
    undefined4 stack_var15;
    longlong stack_var16;
    undefined8 *data_ptr2;
    longlong *material_ptr9;
    longlong *material_ptr10;
    undefined8 stack_var17;
    undefined4 stack_var18;
    undefined8 stack_var19;
    undefined8 stack_var20;
    undefined8 stack_var21;
    undefined4 stack_var22;
    undefined8 stack_var23;
    undefined1 stack_buffer7[8];
    undefined1 stack_buffer8[8];
    undefined1 stack_buffer9[8];
    undefined1 stack_buffer10[8];
    undefined1 stack_buffer11[16];
    
    // 初始化材质统计相关的变量
    stack_var23 = 0xfffffffffffffffe;
    material_count2 = 0;
    
    // 初始化材质引用计数器
    (**(code **)(*(longlong *)(engine_context + 0x60740) + 0x10))
            ((longlong *)(engine_context + 0x60740), &MATERIAL_REF_COUNTER);
    (**(code **)(*(longlong *)(engine_context + 0x60760) + 0x10))
            ((longlong *)(engine_context + 0x60760), &MATERIAL_REF_COUNTER);
    
    // 复制材质状态标志
    *(undefined1 *)(engine_context + 0x607a2) = *(undefined1 *)(engine_context + 0x331c);
    
    // 获取当前材质索引对应的材质数据
    address_offset1 = material_count2;
    if (*(int *)(engine_context + 0x60c40) != -1) {
        address_offset1 = *(ulonglong *)
                  (*(longlong *)(engine_context + 0x60c20) + 
                   (longlong)*(int *)(engine_context + 0x60c40) * 8);
    }
    
    // 设置材质存在标志
    *(bool *)(engine_context + 0x607a1) = address_offset1 != 0;
    
    // 获取材质总数
    address_offset1 = *(ulonglong *)(engine_context + 0x60838);
    stack_var11 = 3;
    stack_tree_array7 = &stack_tree_array7;
    stack_tree_array8 = &stack_tree_array7;
    stack_tree_array9 = (undefined8 *******)0x0;
    stack_var9 = 0;
    stack_var10 = 0;
    
    stack_var8 = 3;
    stack_tree_array4 = &stack_tree_array4;
    stack_tree_array5 = &stack_tree_array4;
    stack_tree_array6 = (undefined8 *******)0x0;
    stack_var6 = 0;
    stack_var7 = 0;
    
    stack_var5 = 3;
    stack_tree_array1 = &stack_tree_array1;
    stack_tree_array2 = &stack_tree_array1;
    stack_tree_array3 = (undefined8 *******)0x0;
    stack_var3 = 0;
    stack_var4 = 0;
    
    stack_offset8 = address_offset1;
    get_material_list(engine_context + 0x60830, &material_ptr8);
    stack_offset7 = stack_offset9;
    
    // 遍历材质列表
    if (stack_offset9 != address_offset1) {
        stack_var12 = CONCAT44(stack_var14, stack_var13);
        material_ptr5 = material_ptr8;
        material_count3 = stack_offset9;
        material_count1 = material_count2;
        
        do {
            // 检查材质类型标志
            if (*(char *)(stack_var12 + 0x2e5) == '\x04') {
                material_ptr9 = (longlong *)0x0;
                material_ptr10 = (longlong *)0x0;
                stack_var17 = 0;
                stack_var18 = 3;
                stack_offset7 = material_count3;
                
                // 获取材质子列表
                get_material_sublist(stack_var12, &material_ptr9, 0, 0xffffffff);
                
                stack_ptr_array1 = (longlong **)
                               CONCAT44(stack_ptr_array1._4_4_,
                                        (int)material_count1 +
                                        (int)((longlong)material_ptr10 - 
                                              (longlong)material_ptr9 >> 3));
                material_ptr6 = material_ptr9;
                material_ptr7 = material_ptr9;
                material_ptr1 = material_ptr9;
                material_ptr2 = material_ptr9;
                material_ptr3 = material_ptr10;
                
                // 遍历材质子列表
                if (material_ptr9 != material_ptr10) {
                    do {
                        material_data1 = *material_ptr6;
                        stack_ptr3 = &MATERIAL_NAME_BUFFER;
                        stack_offset2 = 0;
                        stack_buffer3 = (byte *)0x0;
                        stack_int3 = 0;
                        material_ptr7 = material_ptr6;
                        
                        // 分配并复制材质名称
                        allocate_name_buffer(&stack_ptr3, *(undefined4 *)(material_data1 + 0x20));
                        name_buffer_ptr1 = stack_buffer3;
                        
                        if (0 < *(int *)(material_data1 + 0x20)) {
                            temp_ptr1 = &EMPTY_STRING;
                            if (*(undefined **)(material_data1 + 0x18) != (undefined *)0x0) {
                                temp_ptr1 = *(undefined **)(material_data1 + 0x18);
                            }
                            // 复制材质名称
                            memcpy(stack_buffer3, temp_ptr1, 
                                   (longlong)(*(int *)(material_data1 + 0x20) + 1));
                        }
                        
                        // 确保字符串以null结尾
                        if ((*(longlong *)(material_data1 + 0x18) != 0) && 
                            (stack_int3 = 0, stack_buffer3 != (byte *)0x0)) {
                            *stack_buffer3 = 0;
                        }
                        
                        // 在材质名称树中查找匹配项
                        tree_node_ptr1 = &stack_tree_array7;
                        tree_node_ptr4 = (undefined8 *******)stack_tree_array9;
                        
                        while (tree_node_ptr2 = tree_node_ptr1, 
                               tree_node_ptr4 != (undefined8 *******)0x0) {
                            if (stack_int3 == 0) {
                                comparison_result = false;
                                tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                            }
                            else {
                                if (*(int *)(tree_node_ptr4 + 6) == 0) {
                                    comparison_result = true;
                                }
                                else {
                                    name_buffer_ptr2 = stack_buffer3;
                                    do {
                                        char_comparison1 = (uint)name_buffer_ptr2[
                                            (longlong)tree_node_ptr4[5] - 
                                            (longlong)stack_buffer3];
                                        char_diff1 = *name_buffer_ptr2 - char_comparison1;
                                        if (*name_buffer_ptr2 != char_comparison1) break;
                                        name_buffer_ptr2 = name_buffer_ptr2 + 1;
                                    } while (char_comparison1 != 0);
                                    comparison_result = 0 < char_diff1;
                                    if (char_diff1 < 1) {
                                        tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                                        goto MATCH_FOUND;
                                    }
                                }
                                tree_node_ptr3 = (undefined8 *******)*tree_node_ptr4;
                            }
                        MATCH_FOUND:
                            tree_node_ptr1 = tree_node_ptr4;
                            tree_node_ptr4 = tree_node_ptr3;
                            if (comparison_result) {
                                tree_node_ptr1 = tree_node_ptr2;
                            }
                        }
                        
                        // 处理匹配结果
                        if (tree_node_ptr2 == &stack_tree_array7) {
                        PROCESS_MATCH:
                            data_ptr1 = (undefined8 *)find_material_by_name(
                                &stack_tree_array7, stack_buffer7);
                            tree_node_ptr2 = (undefined8 *******)*data_ptr1;
                        }
                        else if (*(int *)(tree_node_ptr2 + 6) != 0) {
                            if (stack_int3 != 0) {
                                array_ptr1 = tree_node_ptr2[5];
                                material_data1 = (longlong)stack_buffer3 - 
                                                (longlong)array_ptr1;
                                do {
                                    temp_byte1 = *(byte *)array_ptr1;
                                    char_comparison1 = (uint)*(byte *)
                                        ((longlong)array_ptr1 + material_data1);
                                    if (temp_byte1 != char_comparison1) break;
                                    array_ptr1 = (undefined8 ******)
                                        ((longlong)array_ptr1 + 1);
                                } while (char_comparison1 != 0);
                                if ((int)(temp_byte1 - char_comparison1) < 1) 
                                    goto PROCESS_MATCH;
                            }
                            goto PROCESS_MATCH;
                        }
                        
                        // 更新材质使用计数
                        char_diff1 = *(int *)(tree_node_ptr2 + 8);
                        stack_ptr3 = &MATERIAL_NAME_BUFFER;
                        if (name_buffer_ptr1 != (byte *)0x0) {
                            // 释放名称缓冲区
                            free_name_buffer(name_buffer_ptr1);
                        }
                        
                        // 处理第二个材质名称
                        stack_buffer3 = (byte *)0x0;
                        stack_offset2 = stack_offset2 & 0xffffffff00000000;
                        stack_ptr3 = &EMPTY_STRING_PTR;
                        material_data1 = *material_ptr6;
                        stack_ptr4 = &MATERIAL_NAME_BUFFER;
                        stack_offset3 = 0;
                        stack_buffer4 = (byte *)0x0;
                        stack_int4 = 0;
                        
                        allocate_name_buffer(&stack_ptr4, *(undefined4 *)(material_data1 + 0x20));
                        name_buffer_ptr1 = stack_buffer4;
                        
                        if (0 < *(int *)(material_data1 + 0x20)) {
                            temp_ptr1 = &EMPTY_STRING;
                            if (*(undefined **)(material_data1 + 0x18) != (undefined *)0x0) {
                                temp_ptr1 = *(undefined **)(material_data1 + 0x18);
                            }
                            memcpy(stack_buffer4, temp_ptr1, 
                                   (longlong)(*(int *)(material_data1 + 0x20) + 1));
                        }
                        
                        if ((*(longlong *)(material_data1 + 0x18) != 0) && 
                            (stack_int4 = 0, stack_buffer4 != (byte *)0x0)) {
                            *stack_buffer4 = 0;
                        }
                        
                        // 在第二个材质名称树中查找
                        tree_node_ptr1 = &stack_tree_array7;
                        tree_node_ptr4 = (undefined8 *******)stack_tree_array9;
                        
                        while (tree_node_ptr2 = tree_node_ptr1, 
                               tree_node_ptr4 != (undefined8 *******)0x0) {
                            if (stack_int4 == 0) {
                                comparison_result = false;
                                tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                            }
                            else {
                                if (*(int *)(tree_node_ptr4 + 6) == 0) {
                                    comparison_result = true;
                                }
                                else {
                                    name_buffer_ptr2 = stack_buffer4;
                                    do {
                                        char_comparison1 = (uint)name_buffer_ptr2[
                                            (longlong)tree_node_ptr4[5] - 
                                            (longlong)stack_buffer4];
                                        loop_counter1 = *name_buffer_ptr2 - char_comparison1;
                                        if (*name_buffer_ptr2 != char_comparison1) break;
                                        name_buffer_ptr2 = name_buffer_ptr2 + 1;
                                    } while (char_comparison1 != 0);
                                    comparison_result = 0 < loop_counter1;
                                    if (loop_counter1 < 1) {
                                        tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                                        goto SECOND_MATCH_FOUND;
                                    }
                                }
                                tree_node_ptr3 = (undefined8 *******)*tree_node_ptr4;
                            }
                        SECOND_MATCH_FOUND:
                            tree_node_ptr1 = tree_node_ptr4;
                            tree_node_ptr4 = tree_node_ptr3;
                            if (comparison_result) {
                                tree_node_ptr1 = tree_node_ptr2;
                            }
                        }
                        
                        // 处理第二个匹配结果
                        if (tree_node_ptr2 == &stack_tree_array7) {
                        PROCESS_SECOND_MATCH:
                            data_ptr1 = (undefined8 *)find_material_by_name(
                                &stack_tree_array7, stack_buffer8);
                            tree_node_ptr2 = (undefined8 *******)*data_ptr1;
                        }
                        else if (*(int *)(tree_node_ptr2 + 6) != 0) {
                            if (stack_int4 != 0) {
                                array_ptr1 = tree_node_ptr2[5];
                                material_data1 = (longlong)stack_buffer4 - 
                                                (longlong)array_ptr1;
                                do {
                                    temp_byte1 = *(byte *)array_ptr1;
                                    char_comparison1 = (uint)*(byte *)
                                        ((longlong)array_ptr1 + material_data1);
                                    if (temp_byte1 != char_comparison1) break;
                                    array_ptr1 = (undefined8 ******)
                                        ((longlong)array_ptr1 + 1);
                                } while (char_comparison1 != 0);
                                if ((int)(temp_byte1 - char_comparison1) < 1) 
                                    goto PROCESS_SECOND_MATCH;
                            }
                            goto PROCESS_SECOND_MATCH;
                        }
                        
                        // 更新材质使用计数
                        *(int *)(tree_node_ptr2 + 8) = char_diff1 + 1;
                        stack_ptr4 = &MATERIAL_NAME_BUFFER;
                        if (name_buffer_ptr1 != (byte *)0x0) {
                            free_name_buffer(name_buffer_ptr1);
                        }
                        
                        stack_buffer4 = (byte *)0x0;
                        stack_offset3 = stack_offset3 & 0xffffffff00000000;
                        stack_ptr4 = &EMPTY_STRING_PTR;
                        material_data1 = *material_ptr6;
                        material_data2 = material_data1;
                        
                        // 检查材质标志
                        if ((*(byte *)(material_data1 + 0xfd) & 0x20) == 0) {
                            material_data2 = get_material_type_data(
                                *(undefined8 *)(material_data1 + 0x1b0));
                        }
                        
                        stack_var1 = (int)material_count1 + 
                                    *(int *)(material_data2 + 0x1fc);
                        material_data1 = *(longlong *)(material_data1 + 0x1b8);
                        stack_ptr5 = &MATERIAL_NAME_BUFFER;
                        stack_offset4 = 0;
                        stack_buffer5 = (byte *)0x0;
                        stack_int5 = 0;
                        
                        allocate_name_buffer(&stack_ptr5, *(undefined4 *)(material_data1 + 0x20));
                        name_buffer_ptr1 = stack_buffer5;
                        
                        if (0 < *(int *)(material_data1 + 0x20)) {
                            temp_ptr1 = &EMPTY_STRING;
                            if (*(undefined **)(material_data1 + 0x18) != (undefined *)0x0) {
                                temp_ptr1 = *(undefined **)(material_data1 + 0x18);
                            }
                            memcpy(stack_buffer5, temp_ptr1, 
                                   (longlong)(*(int *)(material_data1 + 0x20) + 1));
                        }
                        
                        if ((*(longlong *)(material_data1 + 0x18) != 0) && 
                            (stack_int5 = 0, stack_buffer5 != (byte *)0x0)) {
                            *stack_buffer5 = 0;
                        }
                        
                        // 在第三个材质名称树中查找
                        tree_node_ptr1 = &stack_tree_array4;
                        tree_node_ptr4 = (undefined8 *******)stack_tree_array6;
                        
                        while (tree_node_ptr2 = tree_node_ptr1, 
                               tree_node_ptr4 != (undefined8 *******)0x0) {
                            if (stack_int5 == 0) {
                                comparison_result = false;
                                tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                            }
                            else {
                                if (*(int *)(tree_node_ptr4 + 6) == 0) {
                                    comparison_result = true;
                                }
                                else {
                                    name_buffer_ptr2 = stack_buffer5;
                                    do {
                                        char_comparison1 = (uint)name_buffer_ptr2[
                                            (longlong)tree_node_ptr4[5] - 
                                            (longlong)stack_buffer5];
                                        char_diff1 = *name_buffer_ptr2 - char_comparison1;
                                        if (*name_buffer_ptr2 != char_comparison1) break;
                                        name_buffer_ptr2 = name_buffer_ptr2 + 1;
                                    } while (char_comparison1 != 0);
                                    comparison_result = 0 < char_diff1;
                                    if (char_diff1 < 1) {
                                        tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                                        goto THIRD_MATCH_FOUND;
                                    }
                                }
                                tree_node_ptr3 = (undefined8 *******)*tree_node_ptr4;
                            }
                        THIRD_MATCH_FOUND:
                            tree_node_ptr1 = tree_node_ptr4;
                            tree_node_ptr4 = tree_node_ptr3;
                            if (comparison_result) {
                                tree_node_ptr1 = tree_node_ptr2;
                            }
                        }
                        
                        // 处理第三个匹配结果
                        if (tree_node_ptr2 == &stack_tree_array4) {
                        PROCESS_THIRD_MATCH:
                            data_ptr1 = (undefined8 *)find_material_by_name(
                                &stack_tree_array4, stack_buffer9);
                            tree_node_ptr2 = (undefined8 *******)*data_ptr1;
                        }
                        else if (*(int *)(tree_node_ptr2 + 6) != 0) {
                            if (stack_int5 != 0) {
                                array_ptr1 = tree_node_ptr2[5];
                                material_data2 = (longlong)stack_buffer5 - 
                                                (longlong)array_ptr1;
                                do {
                                    temp_byte1 = *(byte *)array_ptr1;
                                    char_comparison1 = (uint)*(byte *)
                                        ((longlong)array_ptr1 + material_data2);
                                    if (temp_byte1 != char_comparison1) break;
                                    array_ptr1 = (undefined8 ******)
                                        ((longlong)array_ptr1 + 1);
                                } while (char_comparison1 != 0);
                                if ((int)(temp_byte1 - char_comparison1) < 1) 
                                    goto PROCESS_THIRD_MATCH;
                            }
                            goto PROCESS_THIRD_MATCH;
                        }
                        
                        // 更新材质使用计数
                        char_diff1 = *(int *)(tree_node_ptr2 + 8);
                        stack_ptr5 = &MATERIAL_NAME_BUFFER;
                        if (name_buffer_ptr1 != (byte *)0x0) {
                            free_name_buffer(name_buffer_ptr1);
                        }
                        
                        stack_buffer5 = (byte *)0x0;
                        stack_offset4 = stack_offset4 & 0xffffffff00000000;
                        stack_ptr5 = &EMPTY_STRING_PTR;
                        stack_ptr6 = &MATERIAL_NAME_BUFFER;
                        stack_offset5 = 0;
                        stack_buffer6 = (byte *)0x0;
                        stack_int6 = 0;
                        
                        allocate_name_buffer(&stack_ptr6, *(undefined4 *)(material_data1 + 0x20));
                        name_buffer_ptr1 = stack_buffer6;
                        
                        if (0 < *(int *)(material_data1 + 0x20)) {
                            temp_ptr1 = &EMPTY_STRING;
                            if (*(undefined **)(material_data1 + 0x18) != (undefined *)0x0) {
                                temp_ptr1 = *(undefined **)(material_data1 + 0x18);
                            }
                            memcpy(stack_buffer6, temp_ptr1, 
                                   (longlong)(*(int *)(material_data1 + 0x20) + 1));
                        }
                        
                        if ((*(longlong *)(material_data1 + 0x18) != 0) && 
                            (stack_int6 = 0, stack_buffer6 != (byte *)0x0)) {
                            *stack_buffer6 = 0;
                        }
                        
                        // 在第四个材质名称树中查找
                        tree_node_ptr1 = &stack_tree_array4;
                        tree_node_ptr4 = (undefined8 *******)stack_tree_array6;
                        
                        while (tree_node_ptr2 = tree_node_ptr1, 
                               tree_node_ptr4 != (undefined8 *******)0x0) {
                            if (stack_int6 == 0) {
                                comparison_result = false;
                                tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                            }
                            else {
                                if (*(int *)(tree_node_ptr4 + 6) == 0) {
                                    comparison_result = true;
                                }
                                else {
                                    name_buffer_ptr2 = stack_buffer6;
                                    do {
                                        char_comparison1 = (uint)name_buffer_ptr2[
                                            (longlong)tree_node_ptr4[5] - 
                                            (longlong)stack_buffer6];
                                        loop_counter1 = *name_buffer_ptr2 - char_comparison1;
                                        if (*name_buffer_ptr2 != char_comparison1) break;
                                        name_buffer_ptr2 = name_buffer_ptr2 + 1;
                                    } while (char_comparison1 != 0);
                                    comparison_result = 0 < loop_counter1;
                                    if (loop_counter1 < 1) {
                                        tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                                        goto FOURTH_MATCH_FOUND;
                                    }
                                }
                                tree_node_ptr3 = (undefined8 *******)*tree_node_ptr4;
                            }
                        FOURTH_MATCH_FOUND:
                            tree_node_ptr1 = tree_node_ptr4;
                            tree_node_ptr4 = tree_node_ptr3;
                            if (comparison_result) {
                                tree_node_ptr1 = tree_node_ptr2;
                            }
                        }
                        
                        // 处理第四个匹配结果
                        if (tree_node_ptr2 == &stack_tree_array4) {
                        PROCESS_FOURTH_MATCH:
                            data_ptr1 = (undefined8 *)find_material_by_name(
                                &stack_tree_array4, stack_buffer10);
                            tree_node_ptr2 = (undefined8 *******)*data_ptr1;
                        }
                        else if (*(int *)(tree_node_ptr2 + 6) != 0) {
                            if (stack_int6 != 0) {
                                array_ptr1 = tree_node_ptr2[5];
                                material_data2 = (longlong)stack_buffer6 - 
                                                (longlong)array_ptr1;
                                do {
                                    temp_byte1 = *(byte *)array_ptr1;
                                    char_comparison1 = (uint)*(byte *)
                                        ((longlong)array_ptr1 + material_data2);
                                    if (temp_byte1 != char_comparison1) break;
                                    array_ptr1 = (undefined8 ******)
                                        ((longlong)array_ptr1 + 1);
                                } while (char_comparison1 != 0);
                                if ((int)(temp_byte1 - char_comparison1) < 1) 
                                    goto PROCESS_FOURTH_MATCH;
                            }
                            goto PROCESS_FOURTH_MATCH;
                        }
                        
                        // 更新材质使用计数
                        *(int *)(tree_node_ptr2 + 8) = char_diff1 + 1;
                        stack_ptr6 = &MATERIAL_NAME_BUFFER;
                        if (name_buffer_ptr1 != (byte *)0x0) {
                            free_name_buffer(name_buffer_ptr1);
                        }
                        
                        stack_buffer6 = (byte *)0x0;
                        stack_offset5 = stack_offset5 & 0xffffffff00000000;
                        stack_ptr6 = &EMPTY_STRING_PTR;
                        
                        // 处理材质属性列表
                        material_ptr5 = (longlong *)(material_data1 + 0xb8);
                        material_data1 = 0x10;
                        
                        do {
                            material_data2 = *material_ptr5;
                            if (material_data2 != 0) {
                                stack_ptr1 = &MATERIAL_NAME_BUFFER;
                                stack_offset1 = 0;
                                stack_buffer1 = (byte *)0x0;
                                stack_int1 = 0;
                                
                                allocate_name_buffer(&stack_ptr1, 
                                                   *(undefined4 *)(material_data2 + 0x20));
                                name_buffer_ptr1 = stack_buffer1;
                                
                                if (0 < *(int *)(material_data2 + 0x20)) {
                                    temp_ptr1 = &EMPTY_STRING;
                                    if (*(undefined **)(material_data2 + 0x18) != 
                                        (undefined *)0x0) {
                                        temp_ptr1 = *(undefined **)(material_data2 + 0x18);
                                    }
                                    memcpy(stack_buffer1, temp_ptr1, 
                                           (longlong)(*(int *)(material_data2 + 0x20) + 1));
                                }
                                
                                if ((*(longlong *)(material_data2 + 0x18) != 0) && 
                                    (stack_int1 = 0, stack_buffer1 != (byte *)0x0)) {
                                    *stack_buffer1 = 0;
                                }
                                
                                // 在材质属性名称树中查找
                                tree_node_ptr1 = &stack_tree_array1;
                                tree_node_ptr4 = (undefined8 *******)stack_tree_array3;
                                
                                while (tree_node_ptr2 = tree_node_ptr1, 
                                       tree_node_ptr4 != (undefined8 *******)0x0) {
                                    if (stack_int1 == 0) {
                                        comparison_result = false;
                                        tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                                    }
                                    else {
                                        if (*(int *)(tree_node_ptr4 + 6) == 0) {
                                            comparison_result = true;
                                        }
                                        else {
                                            name_buffer_ptr2 = stack_buffer1;
                                            do {
                                                char_comparison1 = (uint)name_buffer_ptr2[
                                                    (longlong)tree_node_ptr4[5] - 
                                                    (longlong)stack_buffer1];
                                                char_diff1 = *name_buffer_ptr2 - char_comparison1;
                                                if (*name_buffer_ptr2 != char_comparison1) break;
                                                name_buffer_ptr2 = name_buffer_ptr2 + 1;
                                            } while (char_comparison1 != 0);
                                            comparison_result = 0 < char_diff1;
                                            if (char_diff1 < 1) {
                                                tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                                                goto PROPERTY_MATCH_FOUND;
                                            }
                                        }
                                        tree_node_ptr3 = (undefined8 *******)*tree_node_ptr4;
                                    }
                                PROPERTY_MATCH_FOUND:
                                    tree_node_ptr1 = tree_node_ptr4;
                                    tree_node_ptr4 = tree_node_ptr3;
                                    if (comparison_result) {
                                        tree_node_ptr1 = tree_node_ptr2;
                                    }
                                }
                                
                                // 处理属性匹配结果
                                if (tree_node_ptr2 == &stack_tree_array1) {
                                PROCESS_PROPERTY_MATCH:
                                    data_ptr1 = (undefined8 *)find_material_by_name(
                                        &stack_tree_array1, stack_buffer11);
                                    tree_node_ptr2 = (undefined8 *******)*data_ptr1;
                                }
                                else if (*(int *)(tree_node_ptr2 + 6) != 0) {
                                    if (stack_int1 != 0) {
                                        array_ptr1 = tree_node_ptr2[5];
                                        material_data3 = (longlong)stack_buffer1 - 
                                                        (longlong)array_ptr1;
                                        do {
                                            temp_byte1 = *(byte *)array_ptr1;
                                            char_comparison1 = (uint)*(byte *)
                                                ((longlong)array_ptr1 + material_data3);
                                            if (temp_byte1 != char_comparison1) break;
                                            array_ptr1 = (undefined8 ******)
                                                ((longlong)array_ptr1 + 1);
                                        } while (char_comparison1 != 0);
                                        if ((int)(temp_byte1 - char_comparison1) < 1) 
                                            goto PROCESS_PROPERTY_MATCH;
                                    }
                                    goto PROCESS_PROPERTY_MATCH;
                                }
                                
                                // 更新属性使用计数
                                char_diff1 = *(int *)(tree_node_ptr2 + 8);
                                stack_ptr1 = &MATERIAL_NAME_BUFFER;
                                if (name_buffer_ptr1 != (byte *)0x0) {
                                    free_name_buffer(name_buffer_ptr1);
                                }
                                
                                stack_buffer1 = (byte *)0x0;
                                stack_offset1 = stack_offset1 & 0xffffffff00000000;
                                stack_ptr1 = &EMPTY_STRING_PTR;
                                stack_ptr2 = &MATERIAL_NAME_BUFFER;
                                stack_offset6 = 0;
                                stack_buffer2 = (byte *)0x0;
                                stack_int2 = 0;
                                
                                allocate_name_buffer(&stack_ptr2, 
                                                   *(undefined4 *)(material_data2 + 0x20));
                                name_buffer_ptr1 = stack_buffer2;
                                
                                if (0 < *(int *)(material_data2 + 0x20)) {
                                    temp_ptr1 = &EMPTY_STRING;
                                    if (*(undefined **)(material_data2 + 0x18) != 
                                        (undefined *)0x0) {
                                        temp_ptr1 = *(undefined **)(material_data2 + 0x18);
                                    }
                                    memcpy(stack_buffer2, temp_ptr1, 
                                           (longlong)(*(int *)(material_data2 + 0x20) + 1));
                                }
                                
                                if ((*(longlong *)(material_data2 + 0x18) != 0) && 
                                    (stack_int2 = 0, stack_buffer2 != (byte *)0x0)) {
                                    *stack_buffer2 = 0;
                                }
                                
                                // 在第二个属性名称树中查找
                                tree_node_ptr1 = &stack_tree_array1;
                                tree_node_ptr4 = (undefined8 *******)stack_tree_array3;
                                
                                while (tree_node_ptr2 = tree_node_ptr1, 
                                       tree_node_ptr4 != (undefined8 *******)0x0) {
                                    if (stack_int2 == 0) {
                                        comparison_result = false;
                                        tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                                    }
                                    else {
                                        if (*(int *)(tree_node_ptr4 + 6) == 0) {
                                            comparison_result = true;
                                        }
                                        else {
                                            name_buffer_ptr2 = stack_buffer2;
                                            do {
                                                char_comparison1 = (uint)name_buffer_ptr2[
                                                    (longlong)tree_node_ptr4[5] - 
                                                    (longlong)stack_buffer2];
                                                loop_counter1 = *name_buffer_ptr2 - char_comparison1;
                                                if (*name_buffer_ptr2 != char_comparison1) break;
                                                name_buffer_ptr2 = name_buffer_ptr2 + 1;
                                            } while (char_comparison1 != 0);
                                            comparison_result = 0 < loop_counter1;
                                            if (loop_counter1 < 1) {
                                                tree_node_ptr3 = (undefined8 *******)tree_node_ptr4[1];
                                                goto SECOND_PROPERTY_MATCH_FOUND;
                                            }
                                        }
                                        tree_node_ptr3 = (undefined8 *******)*tree_node_ptr4;
                                    }
                                SECOND_PROPERTY_MATCH_FOUND:
                                    tree_node_ptr1 = tree_node_ptr4;
                                    tree_node_ptr4 = tree_node_ptr3;
                                    if (comparison_result) {
                                        tree_node_ptr1 = tree_node_ptr2;
                                    }
                                }
                                
                                // 处理第二个属性匹配结果
                                if (tree_node_ptr2 == &stack_tree_array1) {
                                PROCESS_SECOND_PROPERTY_MATCH:
                                    data_ptr1 = (undefined8 *)find_material_by_name(
                                        &stack_tree_array1, &stack_var16);
                                    tree_node_ptr2 = (undefined8 *******)*data_ptr1;
                                }
                                else if (*(int *)(tree_node_ptr2 + 6) != 0) {
                                    if (stack_int2 != 0) {
                                        array_ptr1 = tree_node_ptr2[5];
                                        material_data3 = (longlong)stack_buffer2 - 
                                                        (longlong)array_ptr1;
                                        do {
                                            temp_byte1 = *(byte *)array_ptr1;
                                            char_comparison1 = (uint)*(byte *)
                                                ((longlong)array_ptr1 + material_data3);
                                            if (temp_byte1 != char_comparison1) break;
                                            array_ptr1 = (undefined8 ******)
                                                ((longlong)array_ptr1 + 1);
                                        } while (char_comparison1 != 0);
                                        if ((int)(temp_byte1 - char_comparison1) < 1) 
                                            goto PROCESS_SECOND_PROPERTY_MATCH;
                                    }
                                    goto PROCESS_SECOND_PROPERTY_MATCH;
                                }
                                
                                // 更新属性使用计数
                                *(int *)(tree_node_ptr2 + 8) = char_diff1 + 1;
                                stack_ptr2 = &MATERIAL_NAME_BUFFER;
                                if (name_buffer_ptr1 != (byte *)0x0) {
                                    free_name_buffer(name_buffer_ptr1);
                                }
                                
                                stack_buffer2 = (byte *)0x0;
                                stack_offset6 = stack_offset6 & 0xffffffff00000000;
                                stack_ptr2 = &EMPTY_STRING_PTR;
                            }
                            
                            material_ptr5 = material_ptr5 + 1;
                            material_data1 = material_data1 + -1;
                        } while (material_data1 != 0);
                        
                        material_ptr7 = material_ptr7 + 1;
                        material_count1 = (ulonglong)stack_var1;
                        material_ptr6 = material_ptr7;
                        address_offset1 = stack_offset8;
                        material_ptr5 = material_ptr8;
                        material_ptr1 = material_ptr9;
                        material_ptr2 = material_ptr9;
                        material_ptr3 = material_ptr10;
                        material_count3 = stack_offset7;
                    } while (material_ptr7 != material_ptr10);
                }
                
                // 清理材质子列表
                for (; material_ptr4 = material_ptr10, material_ptr6 = material_ptr9, 
                    stack_offset8 = address_offset1, material_ptr8 = material_ptr5,
                    material_ptr1 != material_ptr10; material_ptr1 = material_ptr1 + 1) {
                    material_ptr9 = material_ptr2;
                    material_ptr10 = material_ptr3;
                    if ((longlong *)*material_ptr1 != (longlong *)0x0) {
                        (**(code **)(*(longlong *)*material_ptr1 + 0x38))();
                    }
                    address_offset1 = stack_offset8;
                    material_ptr5 = material_ptr8;
                    material_ptr2 = material_ptr9;
                    material_ptr3 = material_ptr10;
                    material_ptr10 = material_ptr4;
                    material_ptr9 = material_ptr6;
                }
                
                if (material_ptr9 != (longlong *)0x0) {
                    material_ptr9 = material_ptr2;
                    material_ptr10 = material_ptr3;
                    free_material_list(material_ptr6);
                }
                
                material_count2 = (ulonglong)stack_ptr_array1 & 0xffffffff;
                material_ptr9 = material_ptr2;
                material_ptr10 = material_ptr3;
            }
            
            material_data1 = *material_ptr5;
            do {
                material_count3 = material_count3 + 1;
                material_data3 = (material_count3 & 0xffffffff) * 0x10;
                material_data2 = material_data3 + 8 + material_data1;
                if ((*(ulonglong *)(material_data3 + material_data1) & 0xffffffff00000000) == 0) {
                    material_data2 = 0;
                }
                if (material_data2 != 0) {
                    stack_var12 = *(longlong *)(material_data1 + 8 + 
                                              (material_count3 & 0xffffffff) * 0x10);
                    break;
                }
            } while (material_count3 != material_ptr5[1]);
            stack_offset7 = material_count3;
        } while (material_count3 != address_offset1);
    }
    
    // 处理材质统计结果
    char_diff1 = 0;
    loop_counter1 = 0;
    tree_node_ptr4 = (undefined8 *******)stack_tree_array2;
    
    if ((undefined8 *******)stack_tree_array2 != &stack_tree_array1) {
        do {
            free_material_tree(&material_ptr8, tree_node_ptr4 + 4);
            stack_var15 = *(undefined4 *)(tree_node_ptr4 + 8);
            material_ptr5 = (longlong *)create_material_from_template(
                MATERIAL_TEMPLATE_BASE, &stack_var1, &material_ptr8, 0);
            material_data1 = *material_ptr5;
            
            if ((longlong *)CONCAT44(stack_var2, stack_var1) != (longlong *)0x0) {
                (**(code **)(*(longlong *)CONCAT44(stack_var2, stack_var1) + 0x38))();
            }
            
            loop_counter1 = char_diff1;
            if (material_data1 != 0) {
                loop_counter1 = calculate_material_usage_count(
                    *(undefined4 *)(material_data1 + 0x324));
                loop_counter1 = char_diff1 + 
                               (uint)*(ushort *)(material_data1 + 0x32e) * 
                               (uint)*(ushort *)(material_data1 + 0x32c) *
                               ((int)(loop_counter1 + (loop_counter1 >> 0x1f & 7U)) >> 3);
            }
            
            stack_ptr_array1 = &material_ptr8;
            material_ptr8 = (longlong *)&MATERIAL_NAME_BUFFER;
            
            if (stack_offset9 != 0) {
                free_memory_pool();
            }
            
            stack_offset9 = 0;
            stack_var13 = 0;
            material_ptr8 = (longlong *)&EMPTY_STRING_PTR;
            tree_node_ptr4 = (undefined8 *******)next_material_node(tree_node_ptr4);
            char_diff1 = loop_counter1;
        } while (tree_node_ptr4 != &stack_tree_array1);
    }
    
    // 更新材质统计总数
    *(int *)(engine_context + 0x607b8) = loop_counter1;
    
    // 初始化材质统计报告数据
    stack_var19 = 0;
    stack_var20 = 0;
    char_comparison1 = 0;
    stack_var21 = 0;
    stack_var22 = 3;
    *(undefined4 *)(engine_context + 0x60790) = 0;
    
    if (*(undefined1 **)(engine_context + 0x60788) != (undefined1 *)0x0) {
        **(undefined1 **)(engine_context + 0x60788) = 0;
    }
    
    data_ptr2 = &stack_var19;
    stack_ptr2 = &MATERIAL_NAME_BUFFER;
    stack_offset6 = 0;
    stack_buffer2 = (byte *)0x0;
    stack_int2 = 0;
    stack_var16 = engine_context;
    name_ptr1 = (undefined4 *)create_material_name(MATERIAL_NAME_BASE, 0x10, 0x13);
    
    *(undefined1 *)name_ptr1 = 0;
    address_offset1 = (ulonglong)name_ptr1 & 0xffffffffffc00000;
    
    if (address_offset1 != 0) {
        material_data1 = ((longlong)name_ptr1 - address_offset1 >> 0x10) * 0x50 + 
                        0x80 + address_offset1;
        uint_ptr1 = (uint *)(material_data1 - 
                           (ulonglong)*(uint *)(material_data1 + 4));
        
        if ((*(byte *)((longlong)uint_ptr1 + 0xe) & 2) == 0) {
            char_comparison1 = uint_ptr1[7];
            if (0x3ffffff < char_comparison1) {
                char_comparison1 = *uint_ptr1 << 0x10;
            }
        }
        else {
            char_comparison1 = uint_ptr1[7];
            if (char_comparison1 < 0x4000000) {
                material_count2 = (ulonglong)char_comparison1;
            }
            else {
                material_count2 = (ulonglong)*uint_ptr1 << 0x10;
            }
            if (0x3ffffff < char_comparison1) {
                char_comparison1 = *uint_ptr1 << 0x10;
            }
            char_comparison1 = char_comparison1 - (int)(((longlong)name_ptr1 -
                                (((longlong)((longlong)uint_ptr1 + 
                                  (-0x80 - address_offset1)) / 0x50) * 0x10000 +
                                 address_offset1)) % material_count2);
        }
    }
    
    stack_offset6 = CONCAT44(stack_offset6._4_4_, char_comparison1);
    
    // 设置材质统计报告名称
    *name_ptr1 = 0x6574614d;  // "Mate"
    name_ptr1[1] = 0x6c616972; // "rial"
    name_ptr1[2] = 0x61735520; // "Usage "
    name_ptr1[3] = 0x736567;   // "Segs"
    
    stack_int2 = 0xf;
    stack_buffer2 = (byte *)name_ptr1;
    
    // 生成材质统计报告
    generate_material_report(&stack_var16, &stack_tree_array4, &stack_ptr2);
    
    stack_ptr2 = &MATERIAL_NAME_BUFFER;
    // 释放材质名称内存
    free_material_name(name_ptr1);
}