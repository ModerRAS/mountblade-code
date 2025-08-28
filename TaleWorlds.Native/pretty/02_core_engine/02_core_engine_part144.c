#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part144.c - 核心引擎模块第144部分
// 包含9个函数，主要处理游戏引擎的资源管理、清理和初始化

// 函数：清理和重置引擎资源
// 原始函数名: FUN_1801356a0
void cleanup_engine_resources(int64_t engine_context)
{
    int *resource_count;
    int64_t *resource_array;
    int *cleanup_status;
    int32_t *resource_ptr;
    int64_t global_context;
    uint resource_index;
    uint64_t *temp_array;
    uint64_t *array_ptr;
    uint64_t *working_array;
    uint64_t *result_array;
    uint64_t *alloc_array;
    uint64_t *current_ptr;
    int item_count;
    int64_t item_address;
    int array_size;
    uint new_size;
    uint64_t iteration_count;
    int64_t loop_var;
    int item_id;
    uint compare_result;
    uint64_t address_val;
    uint64_t *ptr_var;
    uint64_t temp_val;
    uint64_t *final_array;
    uint64_t cleanup_flag;
    
    resource_count = *(int **)(engine_context + 0x2df8);
    if ((*(byte *)(engine_context + 8) & 0x40) == 0) {
        if ((0 < *resource_count) || (0 < resource_count[4])) {
            trigger_resource_cleanup();
            global_context = SYSTEM_DATA_MANAGER_A;
            resource_count = *(int **)(SYSTEM_DATA_MANAGER_A + 0x2df8);
            temp_array = (uint64_t *)0x0;
            resource_index = 0;
            array_ptr = temp_array;
            working_array = temp_array;
            result_array = temp_array;
            final_array = temp_array;
            alloc_array = temp_array;
            if (0 < *resource_count) {
                do {
                    item_address = *(int64_t *)((int64_t)result_array + *(int64_t *)(resource_count + 2) + 8);
                    alloc_array = final_array;
                    if (item_address != 0) {
                        item_count = (int)working_array;
                        array_size = (int)array_ptr;
                        if (array_size == item_count) {
                            if (item_count == 0) {
                                resource_index = 8;
                            }
                            else {
                                resource_index = item_count / 2 + item_count;
                            }
                            new_size = array_size + 1U;
                            if ((int)(array_size + 1U) < (int)resource_index) {
                                new_size = resource_index;
                            }
                            if (item_count < (int)new_size) {
                                if (SYSTEM_DATA_MANAGER_A != 0) {
                                    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
                                }
                                alloc_array = (uint64_t *)
                                         allocate_memory_array((int64_t)(int)new_size << 3,SYSTEM_DATA_MANAGER_B);
                                if (final_array != (uint64_t *)0x0) {
                                    // 复制现有数组内容到新数组
                                    memcpy(alloc_array,final_array,(int64_t)array_size << 3);
                                }
                                working_array = (uint64_t *)(uint64_t)new_size;
                            }
                        }
                        alloc_array[array_size] = item_address;
                        array_ptr = (uint64_t *)(uint64_t)(array_size + 1);
                    }
                    resource_index = (uint)array_ptr;
                    new_size = (int)temp_array + 1;
                    temp_array = (uint64_t *)(uint64_t)new_size;
                    result_array = result_array + 2;
                    final_array = alloc_array;
                } while ((int)new_size < *resource_count);
            }
            cleanup_flag = 0;
            temp_val = cleanup_flag;
            if (0 < *(int *)(global_context + 0x2e28)) {
                do {
                    item_id = *(int *)(*(int64_t *)(global_context + 0x2e30) + 0x28 + temp_val);
                    if ((item_id != 0) && (item_count = 0, array_ptr = alloc_array, 0 < (int)resource_index)) {
                        do {
                            if (*(int *)*array_ptr == item_id) {
                                *(int32_t *)(*(int64_t *)(global_context + 0x2e30) + 0x28 + temp_val) = 0;
                                break;
                            }
                            item_count = item_count + 1;
                            array_ptr = array_ptr + 1;
                        } while (item_count < (int)resource_index);
                    }
                    new_size = (int)cleanup_flag + 1;
                    cleanup_flag = (uint64_t)new_size;
                    temp_val = temp_val + 0x38;
                } while ((int)new_size < *(int *)(global_context + 0x2e28));
            }
            if (1 < (int)resource_index) {
                qsort(alloc_array,(int64_t)(int)resource_index,8,&resource_compare_function);
            }
            if (0 < (int)resource_index) {
                temp_val = (uint64_t)resource_index;
                array_ptr = alloc_array;
                do {
                    process_resource_item(global_context,*array_ptr,0);
                    array_ptr = array_ptr + 1;
                    temp_val = temp_val - 1;
                } while (temp_val != 0);
            }
            global_context = *(int64_t *)(resource_count + 2);
            if (global_context != 0) {
                resource_count[0] = 0;
                resource_count[1] = 0;
                if (SYSTEM_DATA_MANAGER_A != 0) {
                    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
                }
                // 释放资源数组内存
                free_memory_array(global_context,SYSTEM_DATA_MANAGER_B);
            }
            global_context = *(int64_t *)(resource_count + 6);
            if (global_context != 0) {
                resource_count[4] = 0;
                resource_count[5] = 0;
                if (SYSTEM_DATA_MANAGER_A != 0) {
                    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
                }
                // 释放资源数组内存
                free_memory_array(global_context,SYSTEM_DATA_MANAGER_B);
            }
            if (alloc_array == (uint64_t *)0x0) {
                return;
            }
            if (SYSTEM_DATA_MANAGER_A != 0) {
                *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
            }
            // 释放分配的数组内存
            free_memory_array(alloc_array,SYSTEM_DATA_MANAGER_B);
        }
    }
    else {
        temp_val = 0;
        if ((*(char *)(engine_context + 0xc0) != '\0') && (cleanup_flag = temp_val, address_val = temp_val, 0 < *resource_count)) {
            do {
                resource_ptr = *(int32_t **)(address_val + 8 + *(int64_t *)(resource_count + 2));
                if ((resource_ptr != (int32_t *)0x0) &&
                   ((*(int64_t *)(resource_ptr + 2) == 0 && (*(int64_t *)(resource_ptr + 4) != 0)))) {
                    release_resource_handle(*resource_ptr);
                }
                resource_index = (int)cleanup_flag + 1;
                cleanup_flag = (uint64_t)resource_index;
                address_val = address_val + 0x10;
            } while ((int)resource_index < *resource_count);
        }
        if ((char)resource_count[0xc] != '\0') {
            global_context = *(int64_t *)(engine_context + 0x2df8);
            initialize_resource_cleanup(0);
            cleanup_status = (int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0);
            if (0 < *cleanup_status) {
                resource_array = (int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1aa8);
                loop_var = SYSTEM_DATA_MANAGER_A;
                cleanup_flag = temp_val;
                do {
                    item_address = *(int64_t *)(cleanup_flag + *resource_array);
                    if (*(int64_t *)(item_address + 0x408) == 0) {
                        *(int32_t *)(item_address + 0x418) = 0;
                    }
                    else {
                        cleanup_resource_data(*(int64_t *)(item_address + 0x408),item_address,*(int32_t *)(item_address + 0x418));
                        loop_var = SYSTEM_DATA_MANAGER_A;
                    }
                    *(byte *)(item_address + 0x432) = *(byte *)(item_address + 0x432) & 0xfc;
                    *(int8_t *)(item_address + 0xb2) = 0;
                    if (*(float *)(loop_var + 0x2e04) <= 0.0) {
                        *(int32_t *)(loop_var + 0x2e04) = *(int32_t *)(loop_var + 0x1c);
                    }
                    resource_index = (int)cleanup_flag + 1;
                    cleanup_flag = (uint64_t)resource_index;
                    address_val = address_val + 8;
                } while ((int)resource_index < *cleanup_status);
            }
            release_resource_handle(0);
            process_resource_batch(engine_context,*(uint64_t *)(global_context + 0x28),*(int32_t *)(global_context + 0x20));
            finalize_resource_processing(engine_context);
            *(int8_t *)(resource_count + 0xc) = 0;
        }
        global_context = 0;
        item_id = 0;
        if (0 < resource_count[4]) {
            do {
                loop_var = *(int64_t *)(resource_count + 6);
                if (*(int *)(global_context + loop_var) == 2) {
                    item_address = *(int64_t *)(global_context + 0x30 + loop_var);
                    if (item_address == 0) {
                        if (*(int64_t *)(global_context + 0x38 + loop_var) != 0) {
                            trigger_resource_reinitialization(engine_context);
                        }
                    }
                    else {
                        if (*(int64_t *)(item_address + 0x408) == 0) {
                            *(int32_t *)(item_address + 0x418) = 0;
                        }
                        else {
                            cleanup_resource_data(*(int64_t *)(item_address + 0x408),item_address,0);
                        }
                        loop_var = SYSTEM_DATA_MANAGER_A;
                        *(byte *)(item_address + 0x432) = *(byte *)(item_address + 0x432) & 0xfc;
                        *(int8_t *)(item_address + 0xb2) = 0;
                        if (*(float *)(loop_var + 0x2e04) <= 0.0) {
                            *(int32_t *)(loop_var + 0x2e04) = *(int32_t *)(loop_var + 0x1c);
                        }
                    }
                }
                item_id = item_id + 1;
                global_context = global_context + 0x40;
            } while (item_id < resource_count[4]);
        }
    }
    return;
}


// 函数：清理特定类型的资源
// 原始函数名: FUN_1801356dc
void cleanup_specific_resources(int64_t context)
{
    int *resource_ptr;
    int64_t *array_ptr;
    int32_t *resource_data;
    int64_t item_address;
    int64_t data_ptr;
    uint index;
    int resource_count;
    int *status_array;
    uint64_t iteration_val;
    uint64_t loop_counter;
    int64_t current_item;
    uint64_t array_index;
    
    loop_counter = 0;
    if ((*(char *)(context + 0xc0) != '\0') && (array_index = loop_counter, iteration_val = loop_counter, 0 < *status_array)) {
        do {
            resource_data = *(int32_t **)(iteration_val + 8 + *(int64_t *)(status_array + 2));
            if ((resource_data != (int32_t *)0x0) &&
               ((*(int64_t *)(resource_data + 2) == 0 && (*(int64_t *)(resource_data + 4) != 0)))) {
                release_resource_handle(*resource_data);
            }
            index = (int)array_index + 1;
            array_index = (uint64_t)index;
            iteration_val = iteration_val + 0x10;
        } while ((int)index < *status_array);
    }
    if ((char)status_array[0xc] != '\0') {
        initialize_resource_cleanup(0);
        resource_ptr = (int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0);
        if (0 < *resource_ptr) {
            array_ptr = (int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1aa8);
            current_item = SYSTEM_DATA_MANAGER_A;
            array_index = loop_counter;
            do {
                item_address = *(int64_t *)(array_index + *array_ptr);
                if (*(int64_t *)(item_address + 0x408) == 0) {
                    *(int32_t *)(item_address + 0x418) = 0;
                }
                else {
                    cleanup_resource_data(*(int64_t *)(item_address + 0x408),item_address,*(int32_t *)(item_address + 0x418));
                    current_item = SYSTEM_DATA_MANAGER_A;
                }
                *(byte *)(item_address + 0x432) = *(byte *)(item_address + 0x432) & 0xfc;
                *(int8_t *)(item_address + 0xb2) = 0;
                if (*(float *)(current_item + 0x2e04) <= 0.0) {
                    *(int32_t *)(current_item + 0x2e04) = *(int32_t *)(current_item + 0x1c);
                }
                index = (int)loop_counter + 1;
                loop_counter = (uint64_t)index;
                array_index = array_index + 8;
            } while ((int)index < *resource_ptr);
        }
        release_resource_handle(0);
        initialize_resource_batch();
        finalize_resource_processing();
        *(int8_t *)(status_array + 0xc) = 0;
    }
    current_item = 0;
    resource_count = 0;
    if (0 < status_array[4]) {
        do {
            item_address = *(int64_t *)(status_array + 6);
            if (*(int *)(current_item + item_address) == 2) {
                data_ptr = *(int64_t *)(current_item + 0x30 + item_address);
                if (data_ptr == 0) {
                    if (*(int64_t *)(current_item + 0x38 + item_address) != 0) {
                        trigger_resource_reinitialization();
                    }
                }
                else {
                    if (*(int64_t *)(data_ptr + 0x408) == 0) {
                        *(int32_t *)(data_ptr + 0x418) = 0;
                    }
                    else {
                        cleanup_resource_data(*(int64_t *)(data_ptr + 0x408),data_ptr,0);
                    }
                    item_address = SYSTEM_DATA_MANAGER_A;
                    *(byte *)(data_ptr + 0x432) = *(byte *)(data_ptr + 0x432) & 0xfc;
                    *(int8_t *)(data_ptr + 0xb2) = 0;
                    if (*(float *)(item_address + 0x2e04) <= 0.0) {
                        *(int32_t *)(item_address + 0x2e04) = *(int32_t *)(item_address + 0x1c);
                    }
                }
            }
            resource_count = resource_count + 1;
            current_item = current_item + 0x40;
        } while (resource_count < status_array[4]);
    }
    return;
}


// 函数：执行全局资源清理
// 原始函数名: FUN_180135748
void perform_global_resource_cleanup(void)
{
    int *resource_count;
    int64_t *resource_array;
    int64_t item_address;
    int64_t data_ptr;
    uint64_t index;
    int64_t context_base;
    uint loop_index;
    int32_t status_flag;
    uint64_t array_size;
    float time_threshold;
    
    initialize_resource_cleanup(0);
    index = array_size & 0xffffffff;
    resource_count = (int *)(SYSTEM_DATA_MANAGER_A + 0x1aa0);
    if ((int)array_size < *resource_count) {
        resource_array = (int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1aa8);
        data_ptr = SYSTEM_DATA_MANAGER_A;
        do {
            item_address = *(int64_t *)(array_size + *resource_array);
            if (*(int64_t *)(item_address + 0x408) == 0) {
                *(int32_t *)(item_address + 0x418) = 0;
            }
            else {
                cleanup_resource_data(*(int64_t *)(item_address + 0x408),item_address,*(int32_t *)(item_address + 0x418));
                data_ptr = SYSTEM_DATA_MANAGER_A;
            }
            *(byte *)(item_address + 0x432) = *(byte *)(item_address + 0x432) & 0xfc;
            *(int8_t *)(item_address + 0xb2) = 0;
            if (*(float *)(data_ptr + 0x2e04) <= time_threshold) {
                *(int32_t *)(data_ptr + 0x2e04) = *(int32_t *)(data_ptr + 0x1c);
            }
            loop_index = (int)index + 1;
            index = (uint64_t)loop_index;
            array_size = array_size + 8;
        } while ((int)loop_index < *resource_count);
        array_size = 0;
    }
    release_resource_handle(0);
    initialize_resource_batch();
    finalize_resource_processing();
    *(int8_t *)(context_base + 0x30) = 0;
    status_flag = (int32_t)array_size;
    index = array_size & 0xffffffff;
    if (0 < *(int *)(context_base + 0x10)) {
        do {
            data_ptr = *(int64_t *)(context_base + 0x18);
            if (*(int *)(array_size + data_ptr) == 2) {
                item_address = *(int64_t *)(array_size + 0x30 + data_ptr);
                if (item_address == 0) {
                    if (*(int64_t *)(array_size + 0x38 + data_ptr) != 0) {
                        trigger_resource_reinitialization();
                    }
                }
                else {
                    if (*(int64_t *)(item_address + 0x408) == 0) {
                        *(int32_t *)(item_address + 0x418) = status_flag;
                    }
                    else {
                        cleanup_resource_data(*(int64_t *)(item_address + 0x408),item_address,0);
                    }
                    data_ptr = SYSTEM_DATA_MANAGER_A;
                    *(byte *)(item_address + 0x432) = *(byte *)(item_address + 0x432) & 0xfc;
                    *(int8_t *)(item_address + 0xb2) = 0;
                    if (*(float *)(data_ptr + 0x2e04) <= time_threshold) {
                        *(int32_t *)(data_ptr + 0x2e04) = *(int32_t *)(data_ptr + 0x1c);
                    }
                }
            }
            loop_index = (int)index + 1;
            index = (uint64_t)loop_index;
            array_size = array_size + 0x40;
        } while ((int)loop_index < *(int *)(context_base + 0x10));
    }
    return;
}


// 函数：带参数的资源清理
// 原始函数名: FUN_180135772
void cleanup_resources_with_params(uint64_t param_1,int64_t context)
{
    int64_t *resource_array;
    int64_t item_address;
    int64_t data_ptr;
    uint index;
    int *resource_count;
    int64_t context_base;
    int loop_counter;
    uint64_t array_index;
    int64_t array_offset;
    float time_threshold;
    uint64_t loop_var;
    
    resource_array = (int64_t *)(context + 0x1aa8);
    do {
        item_address = *(int64_t *)(array_offset + *resource_array);
        if (*(int64_t *)(item_address + 0x408) == 0) {
            *(int32_t *)(item_address + 0x418) = 0;
        }
        else {
            cleanup_resource_data(*(int64_t *)(item_address + 0x408),item_address,*(int32_t *)(item_address + 0x418));
            context = SYSTEM_DATA_MANAGER_A;
        }
        *(byte *)(item_address + 0x432) = *(byte *)(item_address + 0x432) & 0xfc;
        *(int8_t *)(item_address + 0xb2) = 0;
        if (*(float *)(context + 0x2e04) <= time_threshold) {
            *(int32_t *)(context + 0x2e04) = *(int32_t *)(context + 0x1c);
        }
        loop_counter = loop_counter + 1;
        array_offset = array_offset + 8;
    } while (loop_counter < *resource_count);
    loop_var = 0;
    release_resource_handle(0);
    initialize_resource_batch();
    finalize_resource_processing();
    *(int8_t *)(context_base + 0x30) = 0;
    array_index = loop_var;
    if (0 < *(int *)(context_base + 0x10)) {
        do {
            item_address = *(int64_t *)(context_base + 0x18);
            if (*(int *)(array_index + item_address) == 2) {
                data_ptr = *(int64_t *)(array_index + 0x30 + item_address);
                if (data_ptr == 0) {
                    if (*(int64_t *)(array_index + 0x38 + item_address) != 0) {
                        trigger_resource_reinitialization();
                    }
                }
                else {
                    if (*(int64_t *)(data_ptr + 0x408) == 0) {
                        *(int32_t *)(data_ptr + 0x418) = 0;
                    }
                    else {
                        cleanup_resource_data(*(int64_t *)(data_ptr + 0x408),data_ptr,0);
                    }
                    item_address = SYSTEM_DATA_MANAGER_A;
                    *(byte *)(data_ptr + 0x432) = *(byte *)(data_ptr + 0x432) & 0xfc;
                    *(int8_t *)(data_ptr + 0xb2) = 0;
                    if (*(float *)(item_address + 0x2e04) <= time_threshold) {
                        *(int32_t *)(item_address + 0x2e04) = *(int32_t *)(item_address + 0x1c);
                    }
                }
            }
            index = (int)loop_var + 1;
            loop_var = (uint64_t)index;
            array_index = array_index + 0x40;
        } while ((int)index < *(int *)(context_base + 0x10));
    }
    return;
}


// 函数：快速资源清理
// 原始函数名: FUN_1801357e9
void quick_resource_cleanup(void)
{
    int64_t item_address;
    int64_t data_ptr;
    uint index;
    uint64_t array_index;
    int64_t context_base;
    int32_t status_flag;
    uint64_t array_offset;
    float time_threshold;
    
    release_resource_handle(0);
    initialize_resource_batch();
    finalize_resource_processing();
    *(int8_t *)(context_base + 0x30) = 0;
    status_flag = (int32_t)array_offset;
    array_index = array_offset & 0xffffffff;
    if (0 < *(int *)(context_base + 0x10)) {
        do {
            item_address = *(int64_t *)(context_base + 0x18);
            if (*(int *)(array_offset + item_address) == 2) {
                data_ptr = *(int64_t *)(array_offset + 0x30 + item_address);
                if (data_ptr == 0) {
                    if (*(int64_t *)(array_offset + 0x38 + item_address) != 0) {
                        trigger_resource_reinitialization();
                    }
                }
                else {
                    if (*(int64_t *)(data_ptr + 0x408) == 0) {
                        *(int32_t *)(data_ptr + 0x418) = status_flag;
                    }
                    else {
                        cleanup_resource_data(*(int64_t *)(data_ptr + 0x408),data_ptr,0);
                    }
                    item_address = SYSTEM_DATA_MANAGER_A;
                    *(byte *)(data_ptr + 0x432) = *(byte *)(data_ptr + 0x432) & 0xfc;
                    *(int8_t *)(data_ptr + 0xb2) = 0;
                    if (*(float *)(item_address + 0x2e04) <= time_threshold) {
                        *(int32_t *)(item_address + 0x2e04) = *(int32_t *)(item_address + 0x1c);
                    }
                }
            }
            index = (int)array_index + 1;
            array_index = (uint64_t)index;
            array_offset = array_offset + 0x40;
        } while ((int)index < *(int *)(context_base + 0x10));
    }
    return;
}


// 函数：最小化资源清理
// 原始函数名: FUN_180135811
void minimal_resource_cleanup(void)
{
    int64_t item_address;
    int64_t data_ptr;
    uint index;
    uint64_t array_index;
    int64_t context_base;
    int32_t status_flag;
    uint64_t array_offset;
    float time_threshold;
    
    status_flag = (int32_t)array_offset;
    array_index = array_offset & 0xffffffff;
    if (0 < *(int *)(context_base + 0x10)) {
        do {
            item_address = *(int64_t *)(context_base + 0x18);
            if (*(int *)(array_offset + item_address) == 2) {
                data_ptr = *(int64_t *)(array_offset + 0x30 + item_address);
                if (data_ptr == 0) {
                    if (*(int64_t *)(array_offset + 0x38 + item_address) != 0) {
                        trigger_resource_reinitialization();
                    }
                }
                else {
                    if (*(int64_t *)(data_ptr + 0x408) == 0) {
                        *(int32_t *)(data_ptr + 0x418) = status_flag;
                    }
                    else {
                        cleanup_resource_data(*(int64_t *)(data_ptr + 0x408),data_ptr,0);
                    }
                    item_address = SYSTEM_DATA_MANAGER_A;
                    *(byte *)(data_ptr + 0x432) = *(byte *)(data_ptr + 0x432) & 0xfc;
                    *(int8_t *)(data_ptr + 0xb2) = 0;
                    if (*(float *)(item_address + 0x2e04) <= time_threshold) {
                        *(int32_t *)(item_address + 0x2e04) = *(int32_t *)(item_address + 0x1c);
                    }
                }
            }
            index = (int)array_index + 1;
            array_index = (uint64_t)index;
            array_offset = array_offset + 0x40;
        } while ((int)index < *(int *)(context_base + 0x10));
    }
    return;
}


// 函数：空操作函数
// 原始函数名: FUN_1801358b4
void noop_function(void)
{
    return;
}


// 函数：生成唯一资源ID
// 原始函数名: FUN_1801358c0
uint generate_unique_resource_id(int64_t context)
{
    int array_size;
    uint *resource_array;
    uint64_t search_index;
    uint64_t compare_index;
    uint *current_item;
    uint resource_id;
    
    resource_id = 1;
    array_size = **(int **)(context + 0x2df8);
    resource_array = *(uint **)(*(int **)(context + 0x2df8) + 2);
    while( true ) {
        search_index = (int64_t)array_size;
        current_item = resource_array;
        if (array_size != 0) {
            do {
                compare_index = search_index >> 1;
                if (current_item[compare_index * 4] < resource_id) {
                    current_item = current_item + compare_index * 4 + 4;
                    compare_index = search_index + (-1 - compare_index);
                }
                search_index = compare_index;
            } while (compare_index != 0);
        }
        if (((current_item == resource_array + (int64_t)array_size * 4) || (*current_item != resource_id)) ||
           (*(int64_t *)(current_item + 2) == 0)) break;
        resource_id = resource_id + 1;
    }
    return resource_id;
}


// 函数：创建资源对象
// 原始函数名: FUN_180135960
int32_t *create_resource_object(int64_t context,int resource_type,uint64_t param_3,uint64_t param_4)
{
    int32_t *resource_obj;
    int8_t stack_data [8];
    int8_t *stack_ptr;
    int64_t allocated_memory;
    uint64_t flags;
    
    flags = 0xfffffffffffffffe;
    if (resource_type == 0) {
        resource_type = generate_unique_resource_id();
    }
    if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    allocated_memory = allocate_memory_array(0xa8,SYSTEM_DATA_MANAGER_B);
    stack_ptr = stack_data;
    if (allocated_memory == 0) {
        resource_obj = (int32_t *)0x0;
    }
    else {
        resource_obj = (int32_t *)initialize_resource_object(allocated_memory,resource_type);
    }
    *(byte *)(resource_obj + 0x28) = *(byte *)(resource_obj + 0x28) | 3;
    register_resource_object(*(uint64_t *)(context + 0x2df8),*resource_obj,resource_obj,param_4,flags);
    return resource_obj;
}


// 函数：处理资源对象释放
// 原始函数名: FUN_1801359f0
void process_resource_release(int64_t context,uint64_t *resource_obj,char release_mode)
{
    int *resource_count;
    int32_t flag1;
    int32_t flag2;
    int32_t flag3;
    byte status_byte;
    uint64_t resource_handle;
    int32_t *prev_obj;
    int32_t *next_obj;
    int32_t *current_obj;
    int64_t link_data;
    byte link_status;
    int64_t resource_data;
    uint obj_index;
    uint64_t iteration_count;
    uint64_t *linked_obj;
    uint64_t link_count;
    
    resource_handle = *(uint64_t *)(context + 0x2df8);
    if (resource_obj[0xd] != 0) {
        *(uint64_t *)(resource_obj[0xd] + 0x410) = 0;
    }
    current_obj = (int32_t *)resource_obj[1];
    if (release_mode == '\0') {
        if (current_obj != (int32_t *)0x0) {
            for (resource_data = 0x10; resource_data < 0x20; resource_data = resource_data + 8) {
                if (*(uint64_t **)(resource_data + (int64_t)current_obj) == resource_obj) {
                    *(uint64_t *)(resource_data + resource_obj[1]) = 0;
                }
            }
        }
    }
    else if (current_obj != (int32_t *)0x0) {
        linked_obj = *(uint64_t **)(current_obj + 4);
        if (linked_obj == resource_obj) {
            linked_obj = *(uint64_t **)(current_obj + 6);
        }
        prev_obj = *(int32_t **)(current_obj + 4);
        next_obj = *(int32_t **)(current_obj + 6);
        flag1 = current_obj[0x12];
        flag2 = current_obj[0x13];
        resource_data = linked_obj[2];
        *(int64_t *)(current_obj + 4) = resource_data;
        link_data = linked_obj[3];
        *(int64_t *)(current_obj + 6) = link_data;
        if (resource_data != 0) {
            *(int32_t **)(resource_data + 8) = current_obj;
            link_data = *(int64_t *)(current_obj + 6);
        }
        if (link_data != 0) {
            *(int32_t **)(link_data + 8) = current_obj;
        }
        link_count = 0;
        current_obj[0x14] = *(int32_t *)(linked_obj + 10);
        *(uint64_t *)(current_obj + 0x12) = linked_obj[9];
        linked_obj[3] = 0;
        linked_obj[2] = 0;
        if (prev_obj != (int32_t *)0x0) {
            update_resource_links(current_obj,prev_obj);
            update_resource_reference(*prev_obj,*current_obj);
        }
        if (next_obj != (int32_t *)0x0) {
            update_resource_links(current_obj,next_obj);
            update_resource_reference(*next_obj,*current_obj);
        }
        iteration_count = link_count;
        if (0 < (int)current_obj[8]) {
            do {
                obj_index = (int)iteration_count + 1;
                flag3 = current_obj[0xf];
                resource_data = *(int64_t *)(link_count + *(int64_t *)(current_obj + 10));
                *(int32_t *)(resource_data + 0x40) = current_obj[0xe];
                *(int32_t *)(resource_data + 0x44) = flag3;
                flag3 = current_obj[0x11];
                resource_data = *(int64_t *)(link_count + *(int64_t *)(current_obj + 10));
                *(int32_t *)(resource_data + 0x50) = current_obj[0x10];
                *(int32_t *)(resource_data + 0x54) = flag3;
                link_count = link_count + 8;
                iteration_count = (uint64_t)obj_index;
            } while ((int)obj_index < (int)current_obj[8]);
        }
        status_byte = *(byte *)(current_obj + 0x28);
        *(byte *)(current_obj + 0x28) = status_byte & 0xfc;
        *(uint64_t *)(current_obj + 0x1c) = linked_obj[0xe];
        if (((prev_obj == (int32_t *)0x0) || ((*(byte *)(prev_obj + 0x28) & 0x20) == 0)) &&
           ((next_obj == (int32_t *)0x0 || ((*(byte *)(next_obj + 0x28) & 0x20) == 0)))) {
            link_status = 0;
        }
        else {
            link_status = 0x20;
        }
        link_status = status_byte & 0xdc | link_status;
        *(byte *)(current_obj + 0x28) = link_status;
        status_byte = *(byte *)(linked_obj + 0x14);
        current_obj[0x12] = flag1;
        current_obj[0x13] = flag2;
        *(byte *)(current_obj + 0x28) = (status_byte ^ link_status) & 0x40 ^ link_status;
        if (prev_obj == (int32_t *)0x0) {
            if (next_obj == (int32_t *)0x0) {
                return;
            }
            register_resource_object(*(uint64_t *)(context + 0x2df8),*next_obj,0);
            finalize_resource_object(next_obj);
            if (SYSTEM_DATA_MANAGER_A != 0) {
                *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
            }
            // 释放资源对象内存
            free_memory_array(next_obj,SYSTEM_DATA_MANAGER_B);
        }
        register_resource_object(*(uint64_t *)(context + 0x2df8),*prev_obj,0);
        finalize_resource_object(prev_obj);
        if (SYSTEM_DATA_MANAGER_A != 0) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
        // 释放资源对象内存
        free_memory_array(prev_obj,SYSTEM_DATA_MANAGER_B);
    }
    register_resource_object(resource_handle,*(int32_t *)resource_obj,0,resource_handle,0xfffffffffffffffe);
    cleanup_resource_memory(resource_obj[6]);
    resource_obj[6] = 0;
    resource_obj[3] = 0;
    resource_obj[2] = 0;
    resource_data = resource_obj[5];
    if (resource_data != 0) {
        if (SYSTEM_DATA_MANAGER_A != 0) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
        // 释放资源数据内存
        free_memory_array(resource_data,SYSTEM_DATA_MANAGER_B);
    }
    if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
    if (resource_obj != (uint64_t *)0x0) {
        link_count = (uint64_t)resource_obj & 0xffffffffffc00000;
        if (link_count != 0) {
            resource_data = link_count + 0x80 + ((int64_t)resource_obj - link_count >> 0x10) * 0x50;
            resource_data = resource_data - (uint64_t)*(uint *)(resource_data + 4);
            if ((*(void ***)(link_count + 0x70) == &ExceptionList) && (*(char *)(resource_data + 0xe) == '\0')) {
                *resource_obj = *(uint64_t *)(resource_data + 0x20);
                *(uint64_t **)(resource_data + 0x20) = resource_obj;
                resource_count = (int *)(resource_data + 0x18);
                *resource_count = *resource_count + -1;
                if (*resource_count == 0) {
                    cleanup_exception_handler();
                    return;
                }
            }
            else {
                handle_memory_exception(link_count,CONCAT71(0xff000000,*(void ***)(link_count + 0x70) == &ExceptionList)
                                    ,resource_obj,link_count,0xfffffffffffffffe);
            }
        }
        return;
    }
    return;
}


// 函数：处理资源批次
// 原始函数名: FUN_180136210
void process_resource_batch(int64_t context,int64_t resource_data,int batch_size)
{
    byte status_flag;
    short coord_y;
    int32_t *resource_obj;
    int32_t *linked_obj;
    byte *byte_ptr;
    int32_t *temp_obj;
    int32_t *next_obj;
    int64_t resource_handle;
    uint64_t hash_value;
    byte byte_val;
    byte process_flag;
    uint hash_result;
    int64_t loop_var;
    short *coord_ptr;
    int8_t stack_data [32];
    byte stack_byte;
    byte stack_array [23];
    uint64_t stack_checksum;
    
    if (batch_size < 1) {
        return;
    }
    stack_checksum = GET_SECURITY_COOKIE() ^ (uint64_t)stack_data;
    coord_ptr = (short *)(resource_data + 0x12);
    loop_var = (int64_t)batch_size;
    do {
        if (*(int *)(coord_ptr + -9) != 0) {
            next_obj = (int32_t *)create_resource_object();
            if (*(int *)(coord_ptr + -7) == 0) {
                resource_handle = 0;
            }
            else {
                resource_handle = get_resource_handle(*(uint64_t *)(context + 0x2df8));
            }
            *(int64_t *)(next_obj + 2) = resource_handle;
            coord_y = coord_ptr[1];
            next_obj[0xe] = (float)(int)*coord_ptr;
            next_obj[0xf] = (float)(int)coord_y;
            coord_y = coord_ptr[3];
            next_obj[0x10] = (float)(int)coord_ptr[2];
            next_obj[0x11] = (float)(int)coord_y;
            coord_y = coord_ptr[5];
            next_obj[0x12] = (float)(int)coord_ptr[4];
            next_obj[0x13] = (float)(int)coord_y;
            if (resource_handle != 0) {
                if (*(int64_t *)(resource_handle + 0x10) == 0) {
                    *(int32_t **)(resource_handle + 0x10) = next_obj;
                }
                else if ((resource_handle != 0) && (*(int64_t *)(resource_handle + 0x18) == 0)) {
                    *(int32_t **)(resource_handle + 0x18) = next_obj;
                }
            }
            next_obj[0x26] = *(int32_t *)(coord_ptr + -5);
            next_obj[0x14] = (int)(char)coord_ptr[-3];
            status_flag = *(byte *)(next_obj + 0x28);
            byte_val = -((char)coord_ptr[-2] != '\0') & 0x10;
            *(byte *)(next_obj + 0x28) = byte_val | status_flag & 0xef;
            process_flag = -(*(char *)((int64_t)coord_ptr + -3) != '\0') & 0x20;
            *(byte *)(next_obj + 0x28) = process_flag | byte_val | status_flag & 0xcf;
            *(byte *)(next_obj + 0x28) =
                 -((char)coord_ptr[-1] != '\0') & 0x40U | process_flag | byte_val | status_flag & 0x8f;
            temp_obj = *(int32_t **)(next_obj + 2);
            linked_obj = next_obj;
            while (resource_obj = temp_obj, resource_obj != (int32_t *)0x0) {
                linked_obj = resource_obj;
                temp_obj = *(int32_t **)(resource_obj + 2);
            }
            calculate_resource_hash(&stack_byte,0x14,&hash_constant,*linked_obj);
            hash_result = 0xffffffff;
            byte_ptr = stack_array;
            status_flag = stack_byte;
            while (status_flag != 0) {
                if (((status_flag == 0x23) && (*byte_ptr == 0x23)) && (byte_ptr[1] == 0x23)) {
                    hash_result = 0xffffffff;
                }
                hash_result = *(uint *)(&hash_table + ((uint64_t)(hash_result & 0xff) ^ (uint64_t)status_flag) * 4) ^
                         hash_result >> 8;
                status_flag = *byte_ptr;
                byte_ptr = byte_ptr + 1;
            }
            hash_value = get_resource_handle(SYSTEM_DATA_MANAGER_A + 0x1ae0,~hash_result);
            *(uint64_t *)(next_obj + 0x1a) = hash_value;
        }
        coord_ptr = coord_ptr + 0x10;
        loop_var = loop_var + -1;
    } while (loop_var != 0);
    // 清理栈数据
    cleanup_stack_data(stack_checksum ^ (uint64_t)stack_data);
}