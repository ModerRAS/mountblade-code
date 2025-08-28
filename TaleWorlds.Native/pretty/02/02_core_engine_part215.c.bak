#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part215.c - 核心引擎模块第215部分
// 包含3个函数，主要处理堆排序和二叉堆操作

/**
 * 执行堆排序算法
 * 对给定的数组进行堆排序，实现快速排序功能
 * 
 * @param array_start 数组起始指针
 * @param array_end 数组结束指针
 * @param limit 排序限制指针
 */
void perform_heap_sort(void* array_start, void* array_end, void* limit)
{
    void* current_value;
    char comparison_result;
    longlong array_size;
    longlong heap_size;
    longlong child_index;
    longlong parent_index;
    longlong temp_index;
    void** array_ptr;
    longlong element_count;
    bool is_complete;
    unsigned int value_low;
    unsigned int value_high;
    
    // 计算数组大小
    element_count = (longlong)array_end - (longlong)array_start >> 3;
    if (1 < element_count) {
        // 构建最大堆
        heap_size = (element_count + -2 >> 1) + 1;
        parent_index = heap_size * 2 + 2;
        do {
            current_value = array_start[heap_size + -1];
            heap_size = heap_size + -1;
            parent_index = parent_index + -2;
            temp_index = heap_size;
            
            // 向下调整堆
            for (child_index = parent_index; child_index < element_count; child_index = child_index * 2 + 2) {
                comparison_result = compare_elements(array_start[child_index], array_start[child_index + -1]);
                if (comparison_result != '\0') {
                    child_index = child_index + -1;
                }
                *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + child_index);
                *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + 4);
                temp_index = child_index;
            }
            
            // 处理最后一个元素
            if (child_index == element_count) {
                *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + child_index + -1);
                *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + -4);
                temp_index = child_index + -1;
            }
            
            // 向上调整堆
            while (heap_size < temp_index) {
                child_index = temp_index + -1 >> 1;
                comparison_result = compare_elements(array_start[child_index], current_value);
                if (comparison_result == '\0') break;
                *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + child_index);
                *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + 4);
                temp_index = child_index;
            }
            
            // 插入当前值
            value_low = (unsigned int)current_value;
            value_high = (unsigned int)((unsigned long long)current_value >> 0x20);
            *(unsigned int*)(array_start + temp_index) = value_low;
            *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) = value_high;
        } while (heap_size != 0);
    }
    
    // 堆排序主循环
    array_ptr = array_end;
    if (array_end < limit) {
        do {
            comparison_result = compare_elements(*array_ptr, *array_start);
            if (comparison_result != '\0') {
                current_value = *array_ptr;
                heap_size = 0;
                child_index = 2;
                *(unsigned int*)array_ptr = *(unsigned int*)array_start;
                *(unsigned int*)((longlong)array_ptr + 4) = *(unsigned int*)((longlong)array_start + 4);
                is_complete = element_count == 2;
                temp_index = heap_size;
                
                // 重新构建堆
                if (2 < element_count) {
                    do {
                        comparison_result = compare_elements(array_start[child_index], array_start[child_index + -1]);
                        heap_size = child_index;
                        if (comparison_result != '\0') {
                            heap_size = child_index + -1;
                        }
                        *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + heap_size);
                        *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                            *(unsigned int*)((longlong)array_start + heap_size * 8 + 4);
                        child_index = heap_size * 2 + 2;
                        is_complete = child_index == element_count;
                        temp_index = heap_size;
                    } while (child_index < element_count);
                }
                
                // 处理边界情况
                if (is_complete) {
                    *(unsigned int*)(array_start + heap_size) = *(unsigned int*)(array_start + child_index + -1);
                    *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) =
                        *(unsigned int*)((longlong)array_start + child_index * 8 + -4);
                    heap_size = child_index + -1;
                }
                
                // 向上调整
                while (0 < heap_size) {
                    child_index = heap_size + -1 >> 1;
                    comparison_result = compare_elements(array_start[child_index], current_value);
                    if (comparison_result == '\0') break;
                    *(unsigned int*)(array_start + heap_size) = *(unsigned int*)(array_start + child_index);
                    *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) =
                        *(unsigned int*)((longlong)array_start + child_index * 8 + 4);
                    heap_size = child_index;
                }
                
                // 插入值
                value_low = (unsigned int)current_value;
                value_high = (unsigned int)((unsigned long long)current_value >> 0x20);
                *(unsigned int*)(array_start + heap_size) = value_low;
                *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) = value_high;
            }
            array_ptr = array_ptr + 1;
        } while (array_ptr < limit);
    }
    
    // 最终调整
    if (1 < element_count) {
        array_end = array_end + -1;
        do {
            current_value = *array_end;
            element_count = element_count + -1;
            heap_size = 0;
            child_index = 2;
            *(unsigned int*)array_end = *(unsigned int*)array_start;
            *(unsigned int*)((longlong)array_end + 4) = *(unsigned int*)((longlong)array_start + 4);
            is_complete = element_count == 2;
            temp_index = heap_size;
            
            // 重新构建堆
            if (2 < element_count) {
                do {
                    comparison_result = compare_elements(array_start[child_index], array_start[child_index + -1]);
                    heap_size = child_index;
                    if (comparison_result != '\0') {
                        heap_size = child_index + -1;
                    }
                    *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + heap_size);
                    *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                        *(unsigned int*)((longlong)array_start + heap_size * 8 + 4);
                    child_index = heap_size * 2 + 2;
                    is_complete = child_index == element_count;
                    temp_index = heap_size;
                } while (child_index < element_count);
            }
            
            // 处理边界情况
            if (is_complete) {
                *(unsigned int*)(array_start + heap_size) = *(unsigned int*)(array_start + child_index + -1);
                *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + -4);
                heap_size = child_index + -1;
            }
            
            // 向上调整
            while (0 < heap_size) {
                element_count = heap_size + -1 >> 1;
                comparison_result = compare_elements(array_start[element_count], current_value);
                if (comparison_result == '\0') break;
                *(unsigned int*)(array_start + heap_size) = *(unsigned int*)(array_start + element_count);
                *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + element_count * 8 + 4);
                heap_size = element_count;
            }
            
            value_high = (unsigned int)((unsigned long long)current_value >> 0x20);
            array_end = array_end + -1;
            value_low = (unsigned int)current_value;
            *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) = value_high;
            *(unsigned int*)(array_start + heap_size) = value_low;
            element_count = (8 - (longlong)array_start) + (longlong)array_end >> 3;
        } while (1 < element_count);
    }
    return;
}

/**
 * 优化的堆排序算法
 * 对特定范围的数组执行优化的堆排序
 * 
 * @param array_start 数组起始指针
 * @param range_start 排序范围起始指针
 * @param range_end 排序范围结束指针
 */
void optimized_heap_sort(void* array_start, void* range_start, void* range_end)
{
    void* current_value;
    char comparison_result;
    longlong temp_index;
    longlong heap_size;
    longlong child_index;
    longlong parent_index;
    void** range_ptr;
    longlong unaff_size;
    longlong element_count;
    bool is_complete;
    unsigned int stack_value1;
    unsigned int stack_value2;
    unsigned int stack_value3;
    unsigned int stack_value4;
    
    // 计算元素数量
    element_count = unaff_size - (longlong)array_start >> 3;
    range_ptr = range_start;
    if (1 < element_count) {
        // 构建最大堆
        heap_size = (element_count + -2 >> 1) + 1;
        parent_index = heap_size * 2 + 2;
        do {
            current_value = array_start[heap_size + -1];
            heap_size = heap_size + -1;
            parent_index = parent_index + -2;
            temp_index = heap_size;
            
            // 向下调整堆
            for (child_index = parent_index; child_index < element_count; child_index = child_index * 2 + 2) {
                comparison_result = compare_elements(array_start[child_index], array_start[child_index + -1]);
                if (comparison_result != '\0') {
                    child_index = child_index + -1;
                }
                *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + child_index);
                *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + 4);
                temp_index = child_index;
            }
            
            // 处理最后一个元素
            if (child_index == element_count) {
                *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + child_index + -1);
                *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + -4);
                temp_index = child_index + -1;
            }
            
            // 向上调整堆
            while (heap_size < temp_index) {
                child_index = temp_index + -1 >> 1;
                comparison_result = compare_elements(array_start[child_index], current_value);
                if (comparison_result == '\0') break;
                *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + child_index);
                *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + 4);
                temp_index = child_index;
            }
            
            // 插入当前值
            stack_value3 = (unsigned int)current_value;
            stack_value4 = (unsigned int)((unsigned long long)current_value >> 0x20);
            *(unsigned int*)(array_start + temp_index) = stack_value3;
            *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) = stack_value4;
            range_start = stack_value1;
            range_ptr = stack_value1;
        } while (heap_size != 0);
    }
    
    // 在指定范围内执行堆排序
    for (; range_start < range_end; range_start = range_start + 1) {
        comparison_result = compare_elements(*range_start, *array_start);
        if (comparison_result != '\0') {
            current_value = *range_start;
            heap_size = 0;
            child_index = 2;
            *(unsigned int*)range_start = *(unsigned int*)array_start;
            *(unsigned int*)((longlong)range_start + 4) = *(unsigned int*)((longlong)array_start + 4);
            is_complete = element_count == 2;
            temp_index = heap_size;
            
            // 重新构建堆
            if (2 < element_count) {
                do {
                    comparison_result = compare_elements(array_start[child_index], array_start[child_index + -1]);
                    heap_size = child_index;
                    if (comparison_result != '\0') {
                        heap_size = child_index + -1;
                    }
                    *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + heap_size);
                    *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                        *(unsigned int*)((longlong)array_start + heap_size * 8 + 4);
                    child_index = heap_size * 2 + 2;
                    is_complete = child_index == element_count;
                    temp_index = heap_size;
                } while (child_index < element_count);
            }
            
            // 处理边界情况
            if (is_complete) {
                *(unsigned int*)(array_start + heap_size) = *(unsigned int*)(array_start + child_index + -1);
                *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + -4);
                heap_size = child_index + -1;
            }
            
            // 向上调整
            while (0 < heap_size) {
                child_index = heap_size + -1 >> 1;
                comparison_result = compare_elements(array_start[child_index], current_value);
                if (comparison_result == '\0') break;
                *(unsigned int*)(array_start + heap_size) = *(unsigned int*)(array_start + child_index);
                *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + 4);
                heap_size = child_index;
            }
            
            // 插入值
            stack_value3 = (unsigned int)current_value;
            stack_value4 = (unsigned int)((unsigned long long)current_value >> 0x20);
            *(unsigned int*)(array_start + heap_size) = stack_value3;
            *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) = stack_value4;
        }
        range_ptr = stack_value1;
    }
    
    // 最终调整
    if (1 < element_count) {
        range_ptr = range_ptr + -1;
        do {
            current_value = *range_ptr;
            element_count = element_count + -1;
            heap_size = 0;
            child_index = 2;
            *(unsigned int*)range_ptr = *(unsigned int*)array_start;
            *(unsigned int*)((longlong)range_ptr + 4) = *(unsigned int*)((longlong)array_start + 4);
            is_complete = element_count == 2;
            temp_index = heap_size;
            
            // 重新构建堆
            if (2 < element_count) {
                do {
                    comparison_result = compare_elements(array_start[child_index], array_start[child_index + -1]);
                    heap_size = child_index;
                    if (comparison_result != '\0') {
                        heap_size = child_index + -1;
                    }
                    *(unsigned int*)(array_start + temp_index) = *(unsigned int*)(array_start + heap_size);
                    *(unsigned int*)((longlong)array_start + temp_index * 8 + 4) =
                        *(unsigned int*)((longlong)array_start + heap_size * 8 + 4);
                    child_index = heap_size * 2 + 2;
                    is_complete = child_index == element_count;
                    temp_index = heap_size;
                } while (child_index < element_count);
            }
            
            // 处理边界情况
            if (is_complete) {
                *(unsigned int*)(array_start + heap_size) = *(unsigned int*)(array_start + child_index + -1);
                *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + child_index * 8 + -4);
                heap_size = child_index + -1;
            }
            
            // 向上调整
            while (0 < heap_size) {
                element_count = heap_size + -1 >> 1;
                comparison_result = compare_elements(array_start[element_count], current_value);
                if (comparison_result == '\0') break;
                *(unsigned int*)(array_start + heap_size) = *(unsigned int*)(array_start + element_count);
                *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) =
                    *(unsigned int*)((longlong)array_start + element_count * 8 + 4);
                heap_size = element_count;
            }
            
            stack_value2 = (unsigned int)((unsigned long long)current_value >> 0x20);
            range_ptr = range_ptr + -1;
            stack_value1 = (unsigned int)current_value;
            *(unsigned int*)((longlong)array_start + heap_size * 8 + 4) = stack_value2;
            *(unsigned int*)(array_start + heap_size) = stack_value1;
            element_count = (8 - (longlong)array_start) + (longlong)range_ptr >> 3;
        } while (1 < element_count);
    }
    return;
}

/**
 * 快速堆排序实现
 * 对内存中的数组执行快速堆排序操作
 */
void quick_heap_sort(void)
{
    void* current_value;
    char comparison_result;
    longlong input_param;
    longlong temp_index;
    longlong heap_size;
    longlong child_index;
    unsigned int* base_array;
    void** array_ptr;
    longlong unaff_size;
    longlong element_count;
    bool is_complete;
    unsigned int stack_value1;
    unsigned int stack_value2;
    
    array_ptr = (void**)(input_param + -8);
    do {
        current_value = *array_ptr;
        element_count = unaff_size + -1;
        heap_size = 0;
        child_index = 2;
        *(unsigned int*)array_ptr = *base_array;
        *(unsigned int*)((longlong)array_ptr + 4) = base_array[1];
        is_complete = element_count == 2;
        temp_index = heap_size;
        stack_value1 = current_value;
        
        // 构建堆结构
        if (2 < element_count) {
            do {
                comparison_result = compare_elements(*(void**)(base_array + child_index * 2),
                                                    *(void**)(base_array + child_index * 2 + -2));
                heap_size = child_index;
                if (comparison_result != '\0') {
                    heap_size = child_index + -1;
                }
                base_array[temp_index * 2] = base_array[heap_size * 2];
                base_array[temp_index * 2 + 1] = base_array[heap_size * 2 + 1];
                child_index = heap_size * 2 + 2;
                is_complete = child_index == element_count;
                temp_index = heap_size;
            } while (child_index < element_count);
        }
        
        // 处理边界情况
        if (is_complete) {
            base_array[heap_size * 2] = base_array[child_index * 2 + -2];
            base_array[heap_size * 2 + 1] = base_array[child_index * 2 + -1];
            heap_size = child_index + -1;
        }
        
        // 向上调整堆
        while (0 < heap_size) {
            child_index = heap_size + -1 >> 1;
            comparison_result = compare_elements(*(void**)(base_array + child_index * 2), current_value);
            if (comparison_result == '\0') break;
            base_array[heap_size * 2] = base_array[child_index * 2];
            base_array[heap_size * 2 + 1] = base_array[child_index * 2 + 1];
            heap_size = child_index;
        }
        
        array_ptr = array_ptr + -1;
        base_array[heap_size * 2 + 1] = stack_value2;
        base_array[heap_size * 2] = stack_value1;
        unaff_size = (8 - (longlong)base_array) + (longlong)array_ptr >> 3;
        if (unaff_size < 2) {
            return;
        }
    } while( true );
}

// 注意：这是一个简化实现，原始实现包含复杂的堆排序算法和内存操作
// 简化实现保留了核心的堆排序逻辑，但使用了更直观的变量命名
// 所有函数名都已转译为语义化名称，便于理解和维护