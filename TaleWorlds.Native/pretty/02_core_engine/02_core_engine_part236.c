#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part236.c - 核心引擎模块第236部分
// 功能：资源管理和数据结构操作

// 函数：释放资源管理器相关内存
// 参数：param_1 - 资源管理器实例指针
void release_resource_manager_memory(longlong resource_manager)
{
    int temp_int;
    longlong *ptr_temp;
    undefined4 *ptr_undefined;
    int temp_int2;
    undefined8 *ptr_undefined8;
    undefined8 *ptr_undefined8_2;
    undefined4 temp_undefined4;
    undefined8 *ptr_undefined8_3;
    longlong temp_long;
    longlong temp_long2;
    longlong temp_long3;
    undefined4 *ptr_undefined4;
    longlong temp_long4;
    undefined8 *ptr_undefined8_4;
    int *ptr_int;
    int temp_int3;
    int temp_int4;
    longlong *ptr_long;
    int temp_int5;
    undefined8 *ptr_undefined8_5;
    longlong *ptr_long2;
    bool temp_bool;
    int stack_offset;
    uint stack_flag;
    undefined8 stack_var1;
    int stack_var2;
    undefined4 stack_var3;
    longlong *ptr_stack1;
    longlong *ptr_stack2;
    undefined8 stack_var4;
    int stack_var5;
    undefined4 stack_var6;
    longlong *ptr_stack3;
    longlong stack_var7;
    longlong *ptr_stack4;
    longlong stack_var8;
    longlong stack_var9;
    longlong stack_var10;
    longlong stack_var11;
    longlong stack_var12;
    undefined4 *ptr_stack5;
    longlong stack_var13;
    undefined8 stack_var14;
    undefined8 *ptr_stack6;
    undefined8 *ptr_stack7;
    undefined8 *ptr_stack8;
    undefined4 stack_var15;
    undefined8 *ptr_stack9;
    undefined8 *ptr_stack10;
    undefined8 *ptr_stack11;
    undefined4 stack_var16;
    longlong stack_var17;
    longlong *ptr_stack12;
    longlong *ptr_stack13;
    longlong stack_var18;
    longlong *ptr_stack14;
    longlong *ptr_stack15;
    longlong *ptr_stack16;
    longlong *ptr_stack17;
    longlong stack_var19;
    longlong *ptr_stack18;
    longlong *ptr_stack19;
    longlong *ptr_stack20;
    longlong stack_var21;
    longlong stack_var22;
    longlong stack_var23;
    undefined4 stack_var24;
    longlong stack_var25;
    longlong stack_var26;
    longlong stack_var27;
    longlong stack_var28;
    undefined4 stack_var29;
    undefined8 stack_var30;
    longlong stack_var31;
    longlong stack_var32;
    undefined1 stack_array1[16];
    longlong *ptr_stack21;
    undefined1 stack_array2[16];
    longlong *ptr_stack22;
    undefined1 stack_array3[16];
    longlong *ptr_stack23;
    undefined1 stack_array4[16];
    longlong *ptr_stack24;
    
    stack_var30 = 0xfffffffffffffffe;
    temp_int5 = 0;
    if (*(int *)(resource_manager + 0x60) != -1) {
        *(undefined4 *)(resource_manager + 0x60) = 0xffffffff;
        cleanup_resource_manager(resource_manager, 1);
        stack_var8 = 0;
        do {
            temp_int4 = 0;
            if (temp_int5 < 0xe) {
                ptr_stack6 = (undefined8 *)0x0;
                ptr_stack7 = (undefined8 *)0x0;
                ptr_stack8 = (undefined8 *)0x0;
                stack_var15 = 3;
                ptr_long = (longlong *)((stack_var8 + 0x25) * 0x20 + resource_manager);
                temp_long4 = *ptr_long;
                *ptr_long = 0;
                temp_long2 = ptr_long[1];
                ptr_long[1] = 0;
                stack_var23 = ptr_long[2];
                ptr_long[2] = 0;
                stack_var24 = (undefined4)ptr_long[3];
                *(undefined4 *)(ptr_long + 3) = 3;
                temp_long = temp_long2 - temp_long4;
                temp_long3 = temp_long / 6 + (temp_long >> 0x3f);
                temp_long3 = (temp_long3 >> 2) - (temp_long3 >> 0x3f);
                stack_var10 = temp_long4;
                stack_var9 = temp_long3;
                stack_var12 = temp_long2;
                stack_var21 = temp_long4;
                stack_var22 = temp_long2;
                temp_undefined4 = calculate_resource_size(temp_long, 0, temp_int5);
                initialize_resource_data(resource_manager, &stack_var17, temp_undefined4, temp_int5);
                if ((ulonglong)ptr_long[1] < (ulonglong)ptr_long[2]) {
                    allocate_resource_buffer();
                    ptr_long[1] = ptr_long[1] + 0x18;
                }
                else {
                    add_resource_to_manager(ptr_long, &stack_var17);
                }
                temp_int4 = 0;
                temp_long = temp_long4;
                if (0 < (int)temp_long3) {
                    do {
                        ptr_temp = *(longlong **)(resource_manager + 8);
                        ptr_stack2 = (longlong *)*ptr_temp;
                        ptr_stack1 = ptr_temp;
                        if (ptr_stack2 == (longlong *)0x0) {
                            ptr_stack1 = ptr_temp + 1;
                            ptr_stack2 = (longlong *)*ptr_stack1;
                            while (ptr_stack2 == (longlong *)0x0) {
                                ptr_stack1 = ptr_stack1 + 1;
                                ptr_stack2 = (longlong *)*ptr_stack1;
                            }
                        }
                        ptr_long2 = ptr_stack1;
                        stack_var13 = temp_long4;
                        if (ptr_stack2 != (longlong *)ptr_temp[*(longlong *)(resource_manager + 0x10)]) {
                            do {
                                ptr_undefined8_4 = ptr_stack6;
                                temp_long4 = *ptr_stack2;
                                temp_long2 = (ulonglong)*(byte *)(temp_long4 + 0x181) * 0x1c0;
                                stack_var7 = (longlong)*(int *)(temp_long2 + 0x70 + RESOURCE_BASE_ADDRESS);
                                stack_var19 = temp_long4;
                                if (0 < stack_var7) {
                                    ptr_undefined4 = (undefined4 *)(RESOURCE_BASE_ADDRESS + 0x1e8 + temp_long2);
                                    ptr_int = (int *)(temp_long4 + 0xc);
                                    stack_offset = 0;
                                    do {
                                        if (((*ptr_int == temp_int5) && (ptr_int[-3] != -1)) && (ptr_int[-1] == temp_int4)) {
                                            temp_int = ptr_undefined4[-0x40];
                                            stack_flag = stack_flag & 0xffffff00;
                                            ptr_stack5 = ptr_undefined4;
                                            create_resource_instance(resource_manager, &stack_var4, temp_int5, 0, 
                                                                  *(undefined4 *)(temp_long4 + 0x184), stack_flag, 1);
                                            if (stack_var5 == -1) {
                                                temp_int2 = (int)(((longlong)ptr_stack7 - (longlong)ptr_undefined8_4) / 0x18);
                                                temp_int3 = 0;
                                                temp_long2 = 0;
                                                if (0 < temp_int2) {
                                                    ptr_undefined8_3 = ptr_undefined8_4;
                                                    do {
                                                        if (((int *)*ptr_undefined8_3 != (int *)0x0) &&
                                                           (ptr_int[-2] * temp_int <= *(int *)*ptr_undefined8_3)) {
                                                            if ((ulonglong)ptr_long[1] < (ulonglong)ptr_long[2]) {
                                                                allocate_resource_buffer();
                                                                ptr_long[1] = ptr_long[1] + 0x18;
                                                            }
                                                            else {
                                                                add_resource_to_manager(ptr_long, ptr_undefined8_4 + (longlong)temp_int3 * 3);
                                                            }
                                                            ptr_undefined = *(undefined4 **)
                                                                      (*(longlong *)(stack_var8 * 0x20 + 0x4a8 + resource_manager) + -0x18);
                                                            if (*(longlong *)(ptr_undefined + 2) != 0) {
                                                                // WARNING: Subroutine does not return
                                                                handle_memory_error();
                                                            }
                                                            ptr_undefined8_3 = (undefined8 *)allocate_memory_block(MEMORY_POOL_ADDRESS, 0x18, 8, 3);
                                                            temp_long4 = stack_var19;
                                                            ptr_undefined8_3[2] = 0;
                                                            *ptr_undefined8_3 = 0;
                                                            ptr_undefined8_3[1] = 0;
                                                            *(undefined4 *)(ptr_undefined8_3 + 2) = *ptr_undefined;
                                                            *(undefined8 **)(ptr_undefined + 2) = ptr_undefined8_3;
                                                            *(undefined8 **)(ptr_undefined + 4) = ptr_undefined8_3;
                                                            ptr_undefined8_3 = (undefined8 *)
                                                                     create_resource_instance(resource_manager, stack_array1, temp_int5, 0,
                                                                                           *(undefined4 *)(stack_var19 + 0x184),
                                                                                           stack_flag & 0xffffff00, 1);
                                                            stack_var4 = *ptr_undefined8_3;
                                                            stack_var5 = *(int *)(ptr_undefined8_3 + 1);
                                                            stack_var6 = *(undefined4 *)((longlong)ptr_undefined8_3 + 0xc);
                                                            ptr_temp = (longlong *)ptr_undefined8_3[2];
                                                            ptr_undefined8_3[2] = 0;
                                                            ptr_stack18 = ptr_stack3;
                                                            if (ptr_stack3 != (longlong *)0x0) {
                                                                temp_long2 = *ptr_stack3;
                                                                ptr_stack3 = ptr_temp;
                                                                (**(code **)(temp_long2 + 0x38))();
                                                                ptr_temp = ptr_stack3;
                                                            }
                                                            ptr_stack3 = ptr_temp;
                                                            if (ptr_stack21 != (longlong *)0x0) {
                                                                (**(code **)(*ptr_stack21 + 0x38))();
                                                            }
                                                            break;
                                                        }
                                                        temp_int3 = temp_int3 + 1;
                                                        temp_long2 = temp_long2 + 1;
                                                        ptr_undefined8_3 = ptr_undefined8_3 + 3;
                                                    } while (temp_long2 < temp_int2);
                                                }
                                                if (stack_var5 == -1) {
                                                    ptr_undefined8_3 = (undefined8 *)
                                                             create_resource_instance(resource_manager, stack_array2, temp_int5, 0,
                                                                                   *(undefined4 *)(temp_long4 + 0x184), 1, 1);
                                                    stack_var4 = *ptr_undefined8_3;
                                                    stack_var5 = *(int *)(ptr_undefined8_3 + 1);
                                                    stack_var6 = *(undefined4 *)((longlong)ptr_undefined8_3 + 0xc);
                                                    ptr_temp = (longlong *)ptr_undefined8_3[2];
                                                    ptr_undefined8_3[2] = 0;
                                                    ptr_stack19 = ptr_stack3;
                                                    if (ptr_stack3 != (longlong *)0x0) {
                                                        temp_long2 = *ptr_stack3;
                                                        ptr_stack3 = ptr_temp;
                                                        (**(code **)(temp_long2 + 0x38))();
                                                        ptr_temp = ptr_stack3;
                                                    }
                                                    ptr_stack3 = ptr_temp;
                                                    if (ptr_stack22 != (longlong *)0x0) {
                                                        (**(code **)(*ptr_stack22 + 0x38))();
                                                    }
                                                }
                                            }
                                            stack_flag = stack_var4._4_4_ * temp_int;
                                            (**(code **)(**(longlong **)(RESOURCE_BASE_ADDRESS + 0x1cd8) + 0x1a8))
                                                      (*(longlong **)(RESOURCE_BASE_ADDRESS + 0x1cd8), ptr_stack3,
                                                       *(undefined8 *)(ptr_int + 1), ptr_int[-3] * temp_int,
                                                       (int)stack_var4 * temp_int, stack_flag);
                                            release_resource_memory(temp_long4 + (longlong)stack_offset * 0x18);
                                            update_resource_data(temp_long4, &stack_var4, stack_offset, *ptr_undefined4, temp_int);
                                            if (ptr_stack3 != (longlong *)0x0) {
                                                (**(code **)(*ptr_stack3 + 0x38))();
                                            }
                                        }
                                        stack_offset = stack_offset + 1;
                                        ptr_undefined4 = ptr_undefined4 + 1;
                                        ptr_int = ptr_int + 6;
                                        stack_var7 = stack_var7 + -1;
                                    } while (stack_var7 != 0);
                                    stack_var7 = 0;
                                    ptr_long2 = ptr_stack1;
                                    ptr_stack5 = ptr_undefined4;
                                }
                                ptr_stack2 = (longlong *)ptr_stack2[1];
                                while (ptr_stack2 == (longlong *)0x0) {
                                    ptr_long2 = ptr_long2 + 1;
                                    ptr_stack1 = ptr_long2;
                                    ptr_stack2 = (longlong *)*ptr_long2;
                                }
                            } while (ptr_stack2 !=
                                     *(longlong **)
                                      (*(longlong *)(resource_manager + 8) + *(longlong *)(resource_manager + 0x10) * 8));
                        }
                        ptr_undefined8_4 = ptr_stack7;
                        temp_long4 = stack_var13;
                        if (ptr_stack7 < ptr_stack8) {
                            allocate_resource_buffer(ptr_stack7);
                            ptr_stack7 = ptr_undefined8_4 + 3;
                        }
                        else {
                            add_resource_to_manager(&ptr_stack6, stack_var13);
                        }
                        temp_int4 = temp_int4 + 1;
                        temp_long4 = temp_long4 + 0x18;
                        temp_long = stack_var10;
                        temp_long2 = stack_var12;
                        stack_var13 = temp_long4;
                    } while (temp_int4 < (int)stack_var9);
                }
                temp_long4 = stack_var17;
                if (stack_var17 != 0) {
                    if (*(longlong *)(stack_var17 + 8) != 0) {
                        // WARNING: Subroutine does not return
                        handle_memory_error();
                    }
                    stack_var31 = stack_var17 + 0x18;
                    destroy_mutex_in_situ();
                    if (temp_long4 != 0) {
                        // WARNING: Subroutine does not return
                        handle_memory_error(temp_long4);
                    }
                }
                stack_var17 = 0;
                if (ptr_stack13 != (longlong *)0x0) {
                    (**(code **)(*ptr_stack13 + 0x38))();
                }
                ptr_undefined8_4 = ptr_stack6;
                ptr_undefined8_3 = ptr_stack6;
                ptr_undefined8_5 = ptr_stack7;
                if (ptr_stack12 != (longlong *)0x0) {
                    (**(code **)(*ptr_stack12 + 0x38))();
                    ptr_undefined8_4 = ptr_stack6;
                    ptr_undefined8_3 = ptr_stack6;
                    ptr_undefined8_5 = ptr_stack7;
                }
                for (; ptr_undefined8_2 = ptr_stack7, ptr_undefined8_5 = ptr_stack6, ptr_undefined8_4 != ptr_stack7;
                    ptr_undefined8_4 = ptr_undefined8_4 + 3) {
                    ptr_stack6 = ptr_undefined8_3;
                    ptr_stack7 = ptr_undefined8_5;
                    release_resource_data(ptr_undefined8_4);
                    ptr_undefined8_3 = ptr_stack6;
                    ptr_undefined8_5 = ptr_stack7;
                    ptr_stack7 = ptr_undefined8_2;
                    ptr_stack6 = ptr_undefined8_5;
                }
                temp_bool = ptr_stack6 != (undefined8 *)0x0;
                temp_long = temp_long;
                ptr_stack6 = ptr_undefined8_3;
                ptr_stack7 = ptr_undefined8_5;
                if (temp_bool) {
                    // WARNING: Subroutine does not return
                    handle_memory_error(ptr_undefined8_5);
                }
                for (; temp_long != temp_long2; temp_long = temp_long + 0x18) {
                    release_resource_data(temp_long);
                }
                if (temp_long != 0) {
                    // WARNING: Subroutine does not return
                    handle_memory_error(temp_long);
                }
            }
            else {
                ptr_stack9 = (undefined8 *)0x0;
                ptr_stack10 = (undefined8 *)0x0;
                ptr_stack11 = (undefined8 *)0x0;
                stack_var16 = 3;
                ptr_long = (longlong *)((stack_var8 + 0x25) * 0x20 + resource_manager);
                temp_long4 = *ptr_long;
                *ptr_long = 0;
                temp_long2 = ptr_long[1];
                ptr_long[1] = 0;
                stack_var28 = ptr_long[2];
                ptr_long[2] = 0;
                stack_var29 = (undefined4)ptr_long[3];
                *(undefined4 *)(ptr_long + 3) = 3;
                temp_long3 = temp_long2 - temp_long4;
                temp_long = temp_long3 / 6 + (temp_long3 >> 0x3f);
                temp_long = (temp_long >> 2) - (temp_long >> 0x3f);
                stack_var10 = temp_long;
                stack_var9 = temp_long4;
                stack_var12 = temp_long2;
                stack_var25 = temp_long4;
                stack_var26 = temp_long2;
                temp_undefined4 = calculate_resource_size(temp_long3, 0, temp_int5);
                initialize_resource_data(resource_manager, &stack_var18, temp_undefined4, temp_int5);
                if ((ulonglong)ptr_long[1] < (ulonglong)ptr_long[2]) {
                    allocate_resource_buffer();
                    ptr_long[1] = ptr_long[1] + 0x18;
                }
                else {
                    add_resource_to_manager(ptr_long, &stack_var18);
                }
                if (0 < (int)temp_long) {
                    do {
                        ptr_undefined8_3 = *(undefined8 **)(resource_manager + 0x38);
                        ptr_undefined8_5 = (undefined8 *)*ptr_undefined8_3;
                        ptr_undefined8_4 = ptr_undefined8_3;
                        if (ptr_undefined8_5 == (undefined8 *)0x0) {
                            ptr_undefined8_4 = ptr_undefined8_3 + 1;
                            ptr_undefined8_5 = (undefined8 *)*ptr_undefined8_4;
                            while (ptr_undefined8_5 == (undefined8 *)0x0) {
                                ptr_undefined8_4 = ptr_undefined8_4 + 1;
                                ptr_undefined8_5 = (undefined8 *)*ptr_undefined8_4;
                            }
                        }
                        if (ptr_undefined8_5 != (undefined8 *)ptr_undefined8_3[*(longlong *)(resource_manager + 0x40)]) {
                            do {
                                ptr_undefined4 = (undefined4 *)*ptr_undefined8_5;
                                if (((ptr_undefined4[5] == temp_int5) && (ptr_undefined4[2] != -1)) && (ptr_undefined4[4] == temp_int4)) {
                                    temp_int = (*(byte *)(ptr_undefined4 + 1) & 1) * 2 + 2;
                                    stack_flag = stack_flag & 0xffffff00;
                                    create_resource_instance(resource_manager, &stack_var1, temp_int5, 0, *ptr_undefined4, stack_flag, 1);
                                    if (stack_var2 == -1) {
                                        temp_int2 = (int)(((longlong)ptr_stack10 - (longlong)ptr_stack9) / 0x18);
                                        temp_int3 = 0;
                                        temp_long2 = 0;
                                        if (0 < temp_int2) {
                                            ptr_undefined8_3 = ptr_stack9;
                                            do {
                                                if (((int *)*ptr_undefined8_3 != (int *)0x0) &&
                                                   (ptr_undefined4[3] * temp_int <= *(int *)*ptr_undefined8_3)) {
                                                    if ((ulonglong)ptr_long[1] < (ulonglong)ptr_long[2]) {
                                                        allocate_resource_buffer();
                                                        ptr_long[1] = ptr_long[1] + 0x18;
                                                    }
                                                    else {
                                                        add_resource_to_manager(ptr_long, ptr_stack9 + (longlong)temp_int3 * 3);
                                                    }
                                                    ptr_undefined = *(undefined4 **)
                                                              (*(longlong *)(stack_var8 * 0x20 + 0x4a8 + resource_manager) + -0x18);
                                                    if (*(longlong *)(ptr_undefined + 2) != 0) {
                                                        // WARNING: Subroutine does not return
                                                        handle_memory_error();
                                                    }
                                                    ptr_undefined8_3 = (undefined8 *)allocate_memory_block(MEMORY_POOL_ADDRESS, 0x18, 8, 3);
                                                    ptr_undefined8_3[2] = 0;
                                                    *ptr_undefined8_3 = 0;
                                                    ptr_undefined8_3[1] = 0;
                                                    *(undefined4 *)(ptr_undefined8_3 + 2) = *ptr_undefined;
                                                    *(undefined8 **)(ptr_undefined + 2) = ptr_undefined8_3;
                                                    *(undefined8 **)(ptr_undefined + 4) = ptr_undefined8_3;
                                                    ptr_undefined8_3 = (undefined8 *)
                                                             create_resource_instance(resource_manager, stack_array3, temp_int5, 0, *ptr_undefined4,
                                                                                   stack_flag & 0xffffff00, 1);
                                                    stack_var1 = *ptr_undefined8_3;
                                                    stack_var2 = *(int *)(ptr_undefined8_3 + 1);
                                                    stack_var3 = *(undefined4 *)((longlong)ptr_undefined8_3 + 0xc);
                                                    ptr_temp = (longlong *)ptr_undefined8_3[2];
                                                    ptr_undefined8_3[2] = 0;
                                                    ptr_stack20 = ptr_stack23;
                                                    if (ptr_stack23 != (longlong *)0x0) {
                                                        temp_long2 = *ptr_stack23;
                                                        ptr_stack23 = ptr_temp;
                                                        (**(code **)(temp_long2 + 0x38))();
                                                        ptr_temp = ptr_stack23;
                                                    }
                                                    ptr_stack23 = ptr_temp;
                                                    if (ptr_stack23 != (longlong *)0x0) {
                                                        (**(code **)(*ptr_stack23 + 0x38))();
                                                    }
                                                    break;
                                                }
                                                temp_int3 = temp_int3 + 1;
                                                temp_long2 = temp_long2 + 1;
                                                ptr_undefined8_3 = ptr_undefined8_3 + 3;
                                            } while (temp_long2 < temp_int2);
                                        }
                                        if (stack_var2 == -1) {
                                            ptr_undefined8_3 = (undefined8 *)create_resource_instance(resource_manager, stack_array4, temp_int5, 0, *ptr_undefined4, 1, 1);
                                            stack_var1 = *ptr_undefined8_3;
                                            stack_var2 = *(int *)(ptr_undefined8_3 + 1);
                                            stack_var3 = *(undefined4 *)((longlong)ptr_undefined8_3 + 0xc);
                                            ptr_temp = (longlong *)ptr_undefined8_3[2];
                                            ptr_undefined8_3[2] = 0;
                                            ptr_stack15 = ptr_stack23;
                                            if (ptr_stack23 != (longlong *)0x0) {
                                                temp_long2 = *ptr_stack23;
                                                ptr_stack23 = ptr_temp;
                                                (**(code **)(temp_long2 + 0x38))();
                                                ptr_temp = ptr_stack23;
                                            }
                                            ptr_stack23 = ptr_temp;
                                            if (ptr_stack24 != (longlong *)0x0) {
                                                (**(code **)(*ptr_stack24 + 0x38))();
                                            }
                                        }
                                    }
                                    stack_flag = stack_var1._4_4_ * temp_int;
                                    (**(code **)(**(longlong **)(RESOURCE_BASE_ADDRESS + 0x1cd8) + 0x1a8))
                                              (*(longlong **)(RESOURCE_BASE_ADDRESS + 0x1cd8), ptr_stack23,
                                               *(undefined8 *)(ptr_undefined4 + 6), ptr_undefined4[2] * temp_int, (int)stack_var1 * temp_int
                                               , stack_flag);
                                    stack_var14 = 0xffffffffffffffff;
                                    *(undefined8 *)(ptr_undefined4 + 2) = 0xffffffffffffffff;
                                    ptr_stack16 = *(longlong **)(ptr_undefined4 + 6);
                                    *(undefined8 *)(ptr_undefined4 + 6) = 0;
                                    if (ptr_stack16 != (longlong *)0x0) {
                                        (**(code **)(*ptr_stack16 + 0x38))();
                                    }
                                    ptr_temp = ptr_stack23;
                                    *(undefined8 *)(ptr_undefined4 + 2) = stack_var1;
                                    ptr_undefined4[4] = stack_var2;
                                    ptr_undefined4[5] = stack_var3;
                                    ptr_stack14 = ptr_stack23;
                                    if (ptr_stack23 != (longlong *)0x0) {
                                        (**(code **)(*ptr_stack23 + 0x28))(ptr_stack23);
                                    }
                                    ptr_stack14 = *(longlong **)(ptr_undefined4 + 6);
                                    *(longlong **)(ptr_undefined4 + 6) = ptr_temp;
                                    if (ptr_stack14 != (longlong *)0x0) {
                                        (**(code **)(*ptr_stack14 + 0x38))();
                                    }
                                    if (ptr_stack23 != (longlong *)0x0) {
                                        (**(code **)(*ptr_stack23 + 0x38))();
                                    }
                                }
                                ptr_undefined8_5 = (undefined8 *)ptr_undefined8_5[1];
                                while (ptr_undefined8_5 == (undefined8 *)0x0) {
                                    ptr_undefined8_4 = ptr_undefined8_4 + 1;
                                    ptr_undefined8_5 = (undefined8 *)*ptr_undefined8_4;
                                }
                                temp_long = stack_var10;
                            } while (ptr_undefined8_5 !=
                                     *(undefined8 **)
                                      (*(longlong *)(resource_manager + 0x38) + *(longlong *)(resource_manager + 0x40) * 8));
                        }
                        ptr_undefined8_4 = ptr_stack10;
                        if (ptr_stack10 < ptr_stack11) {
                            allocate_resource_buffer(ptr_stack10);
                            ptr_stack10 = ptr_undefined8_4 + 3;
                        }
                        else {
                            add_resource_to_manager(&ptr_stack9, temp_long4);
                        }
                        temp_int4 = temp_int4 + 1;
                        temp_long4 = temp_long4 + 0x18;
                        temp_long2 = stack_var12;
                    } while (temp_int4 < (int)temp_long);
                }
                temp_long4 = stack_var18;
                if (stack_var18 != 0) {
                    if (*(longlong *)(stack_var18 + 8) != 0) {
                        // WARNING: Subroutine does not return
                        handle_memory_error();
                    }
                    stack_var32 = stack_var18 + 0x18;
                    destroy_mutex_in_situ();
                    if (temp_long4 != 0) {
                        // WARNING: Subroutine does not return
                        handle_memory_error(temp_long4);
                    }
                }
                stack_var18 = 0;
                if (ptr_stack14 != (longlong *)0x0) {
                    (**(code **)(*ptr_stack14 + 0x38))();
                }
                temp_long4 = stack_var9;
                ptr_undefined8_4 = ptr_stack9;
                ptr_undefined8_3 = ptr_stack9;
                ptr_undefined8_5 = ptr_stack10;
                if (ptr_stack15 != (longlong *)0x0) {
                    (**(code **)(*ptr_stack15 + 0x38))();
                    temp_long4 = stack_var9;
                    ptr_undefined8_4 = ptr_stack9;
                    ptr_undefined8_3 = ptr_stack9;
                    ptr_undefined8_5 = ptr_stack10;
                }
                for (; ptr_undefined8_2 = ptr_stack10, ptr_undefined8_5 = ptr_stack9, stack_var9 = temp_long4,
                    ptr_undefined8_4 != ptr_stack10; ptr_undefined8_4 = ptr_undefined8_4 + 3) {
                    ptr_stack9 = ptr_undefined8_3;
                    ptr_stack10 = ptr_undefined8_5;
                    release_resource_data(ptr_undefined8_4);
                    temp_long4 = stack_var9;
                    ptr_undefined8_3 = ptr_stack9;
                    ptr_undefined8_5 = ptr_stack10;
                    ptr_stack10 = ptr_undefined8_2;
                    ptr_stack9 = ptr_undefined8_5;
                }
                temp_bool = ptr_stack9 != (undefined8 *)0x0;
                ptr_stack9 = ptr_undefined8_3;
                ptr_stack10 = ptr_undefined8_5;
                temp_long = temp_long4;
                if (temp_bool) {
                    // WARNING: Subroutine does not return
                    handle_memory_error(ptr_undefined8_5);
                }
                for (; temp_long != temp_long2; temp_long = temp_long + 0x18) {
                    release_resource_data(temp_long);
                }
                if (temp_long4 != 0) {
                    // WARNING: Subroutine does not return
                    handle_memory_error(temp_long4);
                }
            }
            temp_int5 = temp_int5 + 1;
            stack_var8 = stack_var8 + 1;
        } while (temp_int5 < 0x10);
    }
    return;
}

// 函数：复制数据结构内容
// 参数：param_1 - 目标数据结构指针
// 参数：param_2 - 源数据结构指针
// 返回：目标数据结构指针
undefined8 * copy_data_structure(undefined8 *target, undefined8 *source)
{
    undefined8 temp_value;
    longlong *ptr_temp;
    
    *target = *source;
    *(undefined4 *)(target + 1) = *(undefined4 *)(source + 1);
    *(undefined4 *)((longlong)target + 0xc) = *(undefined4 *)((longlong)source + 0xc);
    temp_value = source[2];
    source[2] = 0;
    ptr_temp = (longlong *)target[2];
    target[2] = temp_value;
    if (ptr_temp != (longlong *)0x0) {
        (**(code **)(*ptr_temp + 0x38))();
    }
    return target;
}

// 函数：移动数据结构内容
// 参数：param_1 - 目标数据结构指针
// 参数：param_2 - 源数据结构指针
// 返回：目标数据结构指针
undefined8 * move_data_structure(undefined8 *target, undefined8 *source)
{
    longlong *ptr_temp1;
    longlong *ptr_temp2;
    
    *target = *source;
    *(undefined4 *)(target + 1) = *(undefined4 *)(source + 1);
    *(undefined4 *)((longlong)target + 0xc) = *(undefined4 *)((longlong)source + 0xc);
    ptr_temp1 = (longlong *)source[2];
    if (ptr_temp1 != (longlong *)0x0) {
        (**(code **)(*ptr_temp1 + 0x28))(ptr_temp1);
    }
    ptr_temp2 = (longlong *)target[2];
    target[2] = ptr_temp1;
    if (ptr_temp2 != (longlong *)0x0) {
        (**(code **)(*ptr_temp2 + 0x38))();
    }
    return target;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数：初始化数据结构
// 参数：param_1 - 资源管理器实例指针
// 参数：param_2 - 数据结构指针
// 参数：param_3 - 数据类型标识符
// 参数：param_4 - 数据类型编号
// 返回：数据结构指针
undefined8 * initialize_data_structure(longlong resource_manager, undefined8 *data_ptr, undefined4 type_id, int type_number)
{
    undefined8 temp_value1;
    undefined4 temp_value2;
    undefined4 temp_value3;
    longlong *ptr_temp;
    undefined8 *ptr_undefined;
    undefined4 temp_value4;
    uint temp_value5;
    undefined4 temp_value6;
    longlong *ptr_stack1;
    undefined8 stack_var1;
    longlong *ptr_stack2;
    
    stack_var1 = 0xfffffffffffffffe;
    if (type_number - 0xeU < 2) {
        temp_value5 = 0x800;
        temp_value2 = 5;
        if (type_number == 0xe) {
            temp_value2 = 0x2c;
        }
    }
    else {
        temp_value5 = 0x401;
        temp_value2 = get_resource_type_config(type_number);
        temp_value2 = calculate_resource_size_config(temp_value2);
    }
    data_ptr[1] = 0;
    data_ptr[2] = 0;
    ptr_temp = (longlong *)allocate_memory_block(MEMORY_POOL_ADDRESS, 0x68, 8, 3);
    *(undefined1 *)((longlong)ptr_temp + 4) = 0;
    ptr_stack2 = ptr_temp + 3;
    ptr_stack1 = ptr_temp;
    initialize_mutex_in_situ(ptr_stack2, 2);
    ptr_undefined = (undefined8 *)allocate_memory_block(MEMORY_POOL_ADDRESS, 0x18, 8, 3);
    *(undefined4 *)((longlong)ptr_undefined + 0x14) = 0;
    *ptr_undefined = 0;
    ptr_undefined[1] = 0;
    *(undefined4 *)(ptr_undefined + 2) = type_id;
    ptr_temp[1] = (longlong)ptr_undefined;
    ptr_temp[2] = (longlong)ptr_undefined;
    *(undefined4 *)ptr_temp = type_id;
    *data_ptr = ptr_temp;
    temp_value6 = 1;
    temp_value4 = *(undefined4 *)*data_ptr;
    temp_value3 = get_resource_type_flags(type_number);
    ptr_undefined = (undefined8 *)
             create_resource_instance(&RESOURCE_BASE_ADDRESS, &ptr_stack1, *(undefined4 *)(resource_manager + 0x298),
                           &RESOURCE_BASE_ADDRESS + (longlong)type_number * 0x98, temp_value5 | 4, 0, temp_value2, temp_value3, temp_value4, 0, 0
                           , 1, temp_value6);
    temp_value1 = *ptr_undefined;
    *ptr_undefined = 0;
    ptr_temp = (longlong *)data_ptr[1];
    data_ptr[1] = temp_value1;
    if (ptr_temp != (longlong *)0x0) {
        (**(code **)(*ptr_temp + 0x38))();
    }
    if (ptr_stack1 != (longlong *)0x0) {
        (**(code **)(*ptr_stack1 + 0x38))();
    }
    return data_ptr;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数：清理资源管理器
// 参数：param_1 - 资源管理器实例指针
// 参数：param_2 - 清理标志
// 参数：param_3 - 保留参数1
// 参数：param_4 - 保留参数2
void cleanup_resource_manager(longlong resource_manager, char cleanup_flag, undefined8 reserved1, undefined8 reserved2)
{
    longlong temp_long1;
    longlong *ptr_temp1;
    longlong temp_long2;
    uint temp_uint;
    int temp_int;
    longlong temp_long3;
    ulonglong temp_ulong;
    longlong *ptr_temp2;
    longlong temp_long4;
    longlong *ptr_temp3;
    longlong temp_long5;
    ulonglong temp_ulong2;
    undefined8 temp_value;
    
    temp_value = 0xfffffffffffffffe;
    if (cleanup_flag == '\0') {
        temp_uint = *(int *)(resource_manager + 0x90) + 1U & 0xf;
        temp_ulong2 = (ulonglong)temp_uint;
        temp_uint = temp_uint + 1;
    }
    else {
        temp_uint = 0x10;
        temp_ulong2 = 0;
    }
    if (temp_ulong2 < temp_uint) {
        ptr_temp3 = (longlong *)(resource_manager + 0x98 + temp_ulong2 * 0x20);
        temp_long5 = temp_uint - temp_ulong2;
        do {
            temp_int = (int)(ptr_temp3[1] - *ptr_temp3 >> 4);
            temp_long4 = (longlong)temp_int;
            temp_ulong = 0;
            if (0 < temp_int) {
                do {
                    temp_long3 = *ptr_temp3;
                    temp_int = *(int *)(temp_long3 + 8 + temp_ulong);
                    if (temp_int != -1) {
                        process_resource_instance(*(undefined8 *)
                               (*(longlong *)
                                 (((longlong)*(int *)(temp_long3 + 0xc + temp_ulong) + 0x25) * 0x20 + resource_manager) +
                               (longlong)temp_int * 0x18), *(undefined8 *)(temp_long3 + temp_ulong), temp_long3, reserved2,
                              temp_value);
                    }
                    temp_long4 = temp_long4 + -1;
                    temp_ulong = temp_ulong + 0x10;
                } while (temp_long4 != 0);
            }
            temp_long4 = *ptr_temp3;
            *ptr_temp3 = 0;
            temp_long3 = ptr_temp3[1];
            ptr_temp3[1] = 0;
            temp_long1 = ptr_temp3[2];
            ptr_temp3[2] = 0;
            temp_long2 = ptr_temp3[3];
            *(undefined4 *)(ptr_temp3 + 3) = 3;
            if (temp_long4 != 0) {
                // WARNING: Subroutine does not return
                handle_memory_error();
            }
            if ((ulonglong)(ptr_temp3[2] - *ptr_temp3 >> 4) < 0x200) {
                temp_long3 = allocate_large_memory_block(MEMORY_POOL_ADDRESS, 0x2000, (char)ptr_temp3[3], reserved2, temp_value, 0, temp_long3, temp_long1,
                              (int)temp_long2);
                temp_long4 = *ptr_temp3;
                if (temp_long4 != ptr_temp3[1]) {
                    // WARNING: Subroutine does not return
                    memory_move(temp_long3, temp_long4, ptr_temp3[1] - temp_long4);
                }
                if (temp_long4 != 0) {
                    // WARNING: Subroutine does not return
                    handle_memory_error();
                }
                *ptr_temp3 = temp_long3;
                ptr_temp3[1] = temp_long3;
                ptr_temp3[2] = temp_long3 + 0x2000;
            }
            *(int *)(resource_manager + 0x90) = (int)temp_ulong2;
            ptr_temp1 = (longlong *)ptr_temp3[0x42];
            ptr_temp2 = (longlong *)ptr_temp3[0x41];
            if (ptr_temp2 != ptr_temp1) {
                do {
                    if ((longlong *)*ptr_temp2 != (longlong *)0x0) {
                        (**(code **)(*(longlong *)*ptr_temp2 + 0x38))();
                    }
                    ptr_temp2 = ptr_temp2 + 1;
                } while (ptr_temp2 != ptr_temp1);
                ptr_temp2 = (longlong *)ptr_temp3[0x41];
            }
            ptr_temp3[0x42] = (longlong)ptr_temp2;
            temp_ulong2 = (ulonglong)((int)temp_ulong2 + 1);
            ptr_temp3 = ptr_temp3 + 4;
            temp_long5 = temp_long5 + -1;
        } while (temp_long5 != 0);
    }
    return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address