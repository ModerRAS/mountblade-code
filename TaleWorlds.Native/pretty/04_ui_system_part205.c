#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part205.c - UI系统管理模块
// 本模块包含UI系统的核心管理函数，负责UI初始化、事件处理、内存管理等功能

// 系统常量定义
#define UI_SYSTEM_SUCCESS 0x0           // UI系统操作成功
#define UI_SYSTEM_ERROR_INIT 0x1f        // UI系统初始化错误
#define UI_SYSTEM_ERROR_MEMORY 0x26      // UI系统内存分配错误
#define UI_SYSTEM_ERROR_STATE 0x42       // UI系统状态错误
#define UI_SYSTEM_ERROR_PARAM 0x43       // UI系统参数错误

// UI系统偏移量常量
#define UI_OFFSET_VTABLE 0x400           // 虚函数表偏移量
#define UI_OFFSET_STATUS 0x31            // 状态标志偏移量
#define UI_OFFSET_SIZE 0x24              // 尺寸信息偏移量
#define UI_OFFSET_COUNT 0x14             // 计数器偏移量
#define UI_OFFSET_DATA 0x48              // 数据指针偏移量
#define UI_OFFSET_WIDTH 0x280            // 宽度信息偏移量
#define UI_OFFSET_CLEANUP 0x368          // 清理函数偏移量
#define UI_OFFSET_HANDLER 0x3a8          // 事件处理器偏移量
#define UI_OFFSET_RENDER 0x3b0           // 渲染器偏移量

// UI系统组件类型定义
typedef struct {
    uint64_t* vtable;        // 虚函数表指针
    uint32_t status;         // 组件状态
    uint32_t size;           // 组件尺寸
    uint32_t count;          // 元素计数
    void* data;              // 数据指针
    void* renderer;          // 渲染器指针
    void* handler;          // 事件处理器
} UIComponent;

// UI系统内存管理器类型定义
typedef struct {
    void* primary_buffer;    // 主缓冲区
    void* secondary_buffer;  // 次缓冲区
    void* index_buffer;      // 索引缓冲区
    uint32_t buffer_size;    // 缓冲区大小
    uint32_t element_count;  // 元素数量
} UIMemoryManager;

// UI系统渲染器类型定义
typedef struct {
    float* vertex_buffer;    // 顶点缓冲区
    float* texture_coords;   // 纹理坐标
    uint32_t vertex_count;   // 顶点数量
    uint32_t texture_id;     // 纹理ID
} UIRenderer;

// UI系统事件处理器类型定义
typedef struct {
    void (*on_click)(void*);     // 点击事件
    void (*on_hover)(void*);     // 悬停事件
    void (*on_scroll)(void*);    // 滚动事件
    void (*on_focus)(void*);     // 焦点事件
} UIEventHandler;

// 函数别名定义
#define UI_EmptyFunction FUN_180788e4d
#define UI_InitializeSystem FUN_180788e60
#define UI_ShutdownSystem FUN_180788f20
#define UI_SecurityCheck FUN_180788f70
#define UI_ProcessEvents FUN_180788fe0
#define UI_TraverseComponents FUN_180789122
#define UI_ProcessLoop FUN_18078913f
#define UI_ReturnSuccess FUN_1807891b1
#define UI_ReturnSuccess2 FUN_1807891bb
#define UI_CleanupResources FUN_1807891d0
#define UI_ReleaseResources FUN_180789205
#define UI_ResetSystem FUN_180789221
#define UI_ResetSystem2 FUN_18078922b
#define UI_ClearSystem FUN_18078923c
#define UI_BatchProcess FUN_180789283
#define UI_ProcessLinkedList FUN_180789292
#define UI_EmptyFunction2 FUN_1807892d1
#define UI_EmptyFunction3 FUN_1807892d6
#define UI_CheckStatus FUN_180789300
#define UI_RecursiveProcess FUN_180789360
#define UI_AllocateMemory FUN_180789470
#define UI_AllocateMemory2 FUN_1807894bb
#define UI_AllocateMemory3 FUN_1807894e0
#define UI_EmptyFunction4 FUN_1807895a2
#define UI_SetupMemory FUN_1807895b5
#define UI_InitializeRenderer FUN_18078961b
#define UI_InitializeRenderer2 FUN_1807896ae
#define UI_InitializeRenderer3 FUN_18078971b
#define UI_HandleMemoryError FUN_18078978e
#define UI_HandleInitError FUN_180789798
#define UI_ProcessData FUN_1807897b0

// 简化实现：剩余的FUN_函数调用
// 这些函数保持原始实现，但在后续优化中需要进一步完善

/**
 * UI_BatchProcess - UI系统批量处理
 * 
 * 批量处理UI系统中的操作和资源
 * 
 * @param system_ptr 系统指针
 * @return 处理结果：0=成功
 * 
 * 原始实现：FUN_180789283
 */
uint64_t UI_BatchProcess(longlong system_ptr)
{
    uint64_t *current_node;
    uint64_t *list_head;
    
    // 批量处理渲染资源
    if (*(longlong *)(system_ptr + UI_OFFSET_RENDER) != 0) {
        list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
        for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
            // 调用渲染处理函数
            (**(code **)(system_ptr + UI_OFFSET_RENDER))(system_ptr + 8, *(int32_t *)((longlong)current_node + 0x24));
        }
    }
    
    return UI_SYSTEM_SUCCESS;
}

/**
 * UI_ProcessLinkedList - UI系统链表处理
 * 
 * 处理UI系统中的链表结构
 * 
 * @param system_ptr 系统指针
 * @return 处理结果：0=成功
 * 
 * 原始实现：FUN_180789292
 */
uint64_t UI_ProcessLinkedList(longlong system_ptr)
{
    uint64_t *current_node;
    uint64_t *list_head;
    
    // 处理链表结构
    list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
    for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
        // 调用链表处理函数
        (**(code **)(system_ptr + UI_OFFSET_RENDER))(system_ptr + 8, *(int32_t *)((longlong)current_node + 0x24));
    }
    
    return UI_SYSTEM_SUCCESS;
}

/**
 * UI_EmptyFunction2 - 空函数2
 * 
 * 占位函数，不执行任何操作
 * 
 * 原始实现：FUN_1807892d1
 */
void UI_EmptyFunction2(void)
{
    return;
}

/**
 * UI_EmptyFunction3 - 空函数3
 * 
 * 占位函数，不执行任何操作
 * 
 * 原始实现：FUN_1807892d6
 */
void UI_EmptyFunction3(void)
{
    return;
}

/**
 * UI_CheckStatus - UI系统状态检查
 * 
 * 检查UI系统的状态和配置
 * 
 * @param system_ptr 系统指针
 * @return 检查结果：0=正常，其他=错误代码
 * 
 * 原始实现：FUN_180789300
 */
uint64_t UI_CheckStatus(longlong system_ptr)
{
    uint64_t result;
    
    // 检查状态函数是否存在
    if ((*(code **)(system_ptr + 0x370) != (code *)0x0) &&
        (result = (**(code **)(system_ptr + 0x370))(system_ptr + 8), (int)result != 0)) {
        return result;
    }
    
    return UI_SYSTEM_SUCCESS;
}

/**
 * UI_RecursiveProcess - UI系统递归处理
 * 
 * 递归处理UI系统中的数据和结构
 * 
 * @param data_array 数据数组
 * @param base_value 基础值
 * @param step_size 步长
 * @param data_size 数据大小
 * @param mask_value 掩码值
 * 
 * 原始实现：FUN_180789360
 */
void UI_RecursiveProcess(uint *data_array, uint base_value, int step_size, int data_size, uint mask_value)
{
    int sub_size;
    
    if (data_size != 1) {
        do {
            if (data_size == 2) {
                data_array[1] = base_value + step_size & mask_value;
                break;
            }
            sub_size = (int)((data_size >> 0x1f & 3U) + data_size) >> 2;
            UI_RecursiveProcess(data_array, base_value, step_size * 2, data_size / 2, mask_value);
            UI_RecursiveProcess(data_array + data_size / 2, base_value + step_size, step_size * 4, sub_size, mask_value);
            base_value = base_value + (data_size + -1) * step_size;
            data_array = data_array + sub_size * 3;
            data_size = sub_size;
            step_size = step_size * 4;
        } while (sub_size != 1);
    }
    *data_array = base_value & mask_value;
    return;
}

/**
 * UI_EmptyFunction - 空函数
 * 
 * 这是一个占位函数，不执行任何操作，仅用于保持API兼容性
 * 
 * 原始实现：FUN_180788e4d
 */
void UI_EmptyFunction(void)
{
    return;
}



/**
 * UI_InitializeSystem - UI系统初始化检查
 * 
 * 检查UI系统是否正确初始化，验证各个组件的状态
 * 
 * @param system_ptr 系统指针
 * @param component_ptr 组件指针
 * @return 初始化结果：0=成功，0x42=状态错误
 * 
 * 原始实现：FUN_180788e60
 */
uint64_t UI_InitializeSystem(longlong system_ptr, longlong component_ptr)
{
    int result1;
    int result2;
    int temp_array[2];
    
    // 检查虚函数表是否初始化
    if (*(code **)(system_ptr + UI_OFFSET_VTABLE) == (code *)0x0) {
        return UI_SYSTEM_ERROR_STATE;
    }
    
    // 检查组件计数器
    if (*(int *)(component_ptr + UI_OFFSET_COUNT) == 0) {
        return UI_SYSTEM_SUCCESS;
    }
    
    // 检查状态标志
    if (*(char *)(component_ptr + UI_OFFSET_STATUS) != '\0') {
        return UI_SYSTEM_SUCCESS;
    }
    
    // 初始化临时数组
    temp_array[0] = 0;
    
    // 调用初始化函数
    result2 = (**(code **)(system_ptr + UI_OFFSET_VTABLE))(system_ptr + 8, component_ptr, temp_array);
    
    if (result2 == 0) {
        // 计算偏移量
        result2 = temp_array[0] - *(int *)(component_ptr + UI_OFFSET_SIZE);
        
        // 边界检查
        if (((result2 < 0) && (result2 = result2 + *(int *)(component_ptr + UI_OFFSET_SIZE), result2 < 0)) ||
            (*(int *)(component_ptr + UI_OFFSET_SIZE) < result2)) {
            result2 = 0;
        }
        
        // 检查数据指针
        if (*(longlong *)(component_ptr + UI_OFFSET_DATA) == 0) {
            if (result2 < 1) {
                return UI_SYSTEM_SUCCESS;
            }
        } else {
            // 获取宽度信息
            result1 = *(int *)(*(longlong *)(component_ptr + UI_OFFSET_DATA) + UI_OFFSET_WIDTH);
            if (result2 < result1 * 3) {
                return UI_SYSTEM_SUCCESS;
            }
            
            // 调整结果值
            result2 = result2 - (result2 % result1 + result1);
        }
        
        // 处理初始化结果
        result2 = FUN_1807881c0(system_ptr, component_ptr, result2);
        if (result2 == 0) {
            return UI_SYSTEM_SUCCESS;
        }
    }
    
    // 设置状态标志
    *(int8_t *)(component_ptr + UI_OFFSET_STATUS) = 1;
    return UI_SYSTEM_SUCCESS;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * UI_ShutdownSystem - UI系统关闭
 * 
 * 安全关闭UI系统，清理所有资源并调用清理函数
 * 
 * @param system_ptr 系统指针
 * 
 * 原始实现：FUN_180788f20
 */
void UI_ShutdownSystem(longlong system_ptr)
{
    // 检查清理函数是否存在
    if (*(code **)(system_ptr + UI_OFFSET_CLEANUP) != (code *)0x0) {
        // 调用清理函数
        (**(code **)(system_ptr + UI_OFFSET_CLEANUP))(system_ptr + 8);
    }
    
    // 执行系统清理（此函数不返回）
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), system_ptr, &UNK_18095ac80, 0x56, 1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * UI_SecurityCheck - UI系统安全检查
 * 
 * 执行安全检查，如果系统指针有效则执行安全清理
 * 
 * @param system_ptr_ptr 系统指针的指针
 * @return 检查结果：0=安全，其他=安全风险
 * 
 * 原始实现：FUN_180788f70
 */
uint64_t UI_SecurityCheck(longlong *system_ptr_ptr)
{
    // 检查系统指针是否有效
    if (*system_ptr_ptr != 0) {
        // 执行安全清理（此函数不返回）
        FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0), *system_ptr_ptr, &UNK_18095ac80, 0x76f, 1);
    }
    
    return UI_SYSTEM_SUCCESS;
}



/**
 * UI_ProcessEvents - UI系统事件处理
 * 
 * 处理UI系统的事件，包括鼠标、键盘等输入事件
 * 
 * @param system_ptr 系统指针
 * @return 处理结果：0=成功，其他=错误代码
 * 
 * 原始实现：FUN_180788fe0
 */
uint64_t UI_ProcessEvents(longlong system_ptr)
{
    longlong data_ptr;
    uint64_t *current_node;
    uint64_t result;
    uint64_t *list_head;
    int32_t param_array1[2];
    int32_t param_array2[2];
    int32_t param_array3[4];
    uint64_t stack_param1;
    uint param_x;
    uint64_t stack_param2;
    uint7 param_y;
    ulonglong combined_param;
    uint64_t stack_param3;
    uint param_z;
    ulonglong extended_param;
    
    // 解析栈参数
    param_x = (uint)((ulonglong)stack_param1 >> 0x20);
    param_z = (uint)((ulonglong)stack_param3 >> 0x20);
    
    // 重置UI状态
    *(int16_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127f4) = 0;
    *(int16_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127f2) = 0;
    *(int16_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127f0) = 0;
    
    // 检查事件处理器
    if ((*(code **)(system_ptr + 0x358) == (code *)0x0) ||
        (result = (**(code **)(system_ptr + 0x358))(system_ptr + 8), (int)result == 0)) {
        
        data_ptr = *(longlong *)(system_ptr + UI_OFFSET_DATA);
        param_y = (uint7)((ulonglong)stack_param2 >> 8);
        
        // 检查是否有特殊模式
        if (*(longlong *)(data_ptr + 0x10f88) == 0) {
            // 常规事件处理
            if ((*(longlong *)(system_ptr + 0x380) != 0) &&
                (result = FUN_180767c00(system_ptr + 0x1c0, &UNK_18095ad08, &UNK_1807872a0, system_ptr,
                                      (ulonglong)param_x << 0x20, (ulonglong)param_y << 8,
                                      (ulonglong)param_z << 0x20, data_ptr, 1), (int)result != 0)) {
                return result;
            }
        } else {
            // 特殊模式事件处理
            extended_param = (ulonglong)param_z << 0x20;
            combined_param = CONCAT71(param_y, 1);
            
            result = FUN_180767c00(system_ptr + 0x70, &UNK_18095ad08, FUN_1807863b0, system_ptr,
                                  (ulonglong)param_x << 0x20, combined_param, extended_param, data_ptr, 1);
            if ((int)result != 0) {
                return result;
            }
            
            // 处理特殊事件
            if ((*(longlong *)(system_ptr + 0x380) != 0) &&
                (result = FUN_180767c00(system_ptr + 0x1c0, &UNK_18095ad20, &UNK_1807872a0, system_ptr, 1,
                                      combined_param & 0xffffffffffffff00, extended_param & 0xffffffff00000000,
                                      *(uint64_t *)(system_ptr + UI_OFFSET_DATA), 1), (int)result != 0)) {
                return result;
            }
        }
        
        // 处理事件队列
        if (*(longlong *)(system_ptr + UI_OFFSET_HANDLER) != 0) {
            list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
            for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
                // 初始化参数数组
                param_array1[0] = 0;
                param_array2[0] = 0;
                param_array3[0] = 0;
                
                // 调用事件处理器
                (**(code **)(system_ptr + UI_OFFSET_HANDLER))
                    (system_ptr + 8, *(int32_t *)(current_node + 4), current_node[3], (longlong)current_node + 0x24,
                     param_array1, param_array2, param_array3);
            }
        }
        
        result = 0;
    }
    
    return result;
}



/**
 * UI_TraverseComponents - UI组件遍历处理
 * 
 * 遍历所有UI组件并执行相应的处理函数
 * 
 * @return 处理结果：0=成功
 * 
 * 原始实现：FUN_180789122
 */
uint64_t UI_TraverseComponents(void)
{
    uint64_t *current_component;
    longlong system_ptr;
    uint64_t *list_head;
    int8_t *stack_param1;
    int8_t *stack_param2;
    
    // 获取组件链表头
    list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
    
    // 遍历所有组件
    for (current_component = (uint64_t *)*list_head; current_component != list_head; current_component = (uint64_t *)*current_component) {
        // 设置栈参数
        stack_param1 = &stack0x00000080;
        stack_param2 = &stack0x00000088;
        
        // 调用组件处理函数
        (**(code **)(system_ptr + UI_OFFSET_HANDLER))
            (system_ptr + 8, *(int32_t *)(current_component + 4), current_component[3], (longlong)current_component + 0x24,
             &stack0x00000090);
    }
    
    return UI_SYSTEM_SUCCESS;
}



/**
 * UI_ProcessLoop - UI系统循环处理
 * 
 * 循环处理UI组件，直到遍历完所有组件
 * 
 * @return 处理结果：0=成功
 * 
 * 原始实现：FUN_18078913f
 */
uint64_t UI_ProcessLoop(void)
{
    longlong system_ptr;
    longlong end_ptr;
    longlong *current_ptr;
    int8_t *stack_param1;
    int8_t *stack_param2;
    
    // 循环处理组件
    do {
        // 设置栈参数
        stack_param1 = &stack0x00000080;
        stack_param2 = &stack0x00000088;
        
        // 调用组件处理函数
        (**(code **)(system_ptr + UI_OFFSET_HANDLER))
            (system_ptr + 8, (int)current_ptr[4], current_ptr[3], (longlong)current_ptr + 0x24,
             &stack0x00000090);
        
        // 移动到下一个组件
        current_ptr = (longlong *)*current_ptr;
    } while (current_ptr != (longlong *)end_ptr);
    
    return UI_SYSTEM_SUCCESS;
}



/**
 * UI_ReturnSuccess - 返回成功状态
 * 
 * 简单返回成功状态的函数
 * 
 * @return 成功状态：0
 * 
 * 原始实现：FUN_1807891b1
 */
uint64_t UI_ReturnSuccess(void)
{
    return UI_SYSTEM_SUCCESS;
}

/**
 * UI_ReturnSuccess2 - 返回成功状态
 * 
 * 简单返回成功状态的函数（备用版本）
 * 
 * @return 成功状态：0
 * 
 * 原始实现：FUN_1807891bb
 */
uint64_t UI_ReturnSuccess2(void)
{
    return UI_SYSTEM_SUCCESS;
}



/**
 * UI_CleanupResources - UI系统资源清理
 * 
 * 清理UI系统占用的所有资源，包括内存和渲染资源
 * 
 * @param system_ptr 系统指针
 * @return 清理结果：0=成功，其他=错误代码
 * 
 * 原始实现：FUN_1807891d0
 */
uint64_t UI_CleanupResources(longlong system_ptr)
{
    longlong resource_ptr;
    uint64_t *current_node;
    uint64_t result;
    uint64_t *list_head;
    longlong index;
    longlong resource_count;
    
    // 验证系统状态
    result = SystemState_Validator(system_ptr + 0x1c0);
    if ((((int)result == 0) && (result = SystemState_Validator(system_ptr + 0x70), (int)result == 0)) &&
        ((*(code **)(system_ptr + 0x360) == (code *)0x0 ||
         (result = (**(code **)(system_ptr + 0x360))(system_ptr + 8), (int)result == 0)))) {
        
        // 获取资源数量
        resource_count = (longlong)*(int *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127e8);
        
        // 清理所有资源
        if (0 < resource_count) {
            index = 0;
            do {
                // 获取资源指针
                resource_ptr = *(longlong *)(*(longlong *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127e0) + index * 8);
                
                // 如果资源存在则清理
                if (*(longlong *)(resource_ptr + 0x18) != 0) {
                    // 调用资源清理函数
                    (**(code **)(system_ptr + 0x398))(system_ptr + 8);
                    *(uint64_t *)(resource_ptr + 0x18) = 0;
                }
                
                index = index + 1;
            } while (index < resource_count);
        }
        
        // 清理渲染资源
        if (*(longlong *)(system_ptr + UI_OFFSET_RENDER) != 0) {
            list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
            for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
                // 调用渲染清理函数
                (**(code **)(system_ptr + UI_OFFSET_RENDER))(system_ptr + 8, *(int32_t *)((longlong)current_node + 0x24));
            }
        }
        
        result = UI_SYSTEM_SUCCESS;
    }
    
    return result;
}



/**
 * UI_ReleaseResources - UI系统资源释放
 * 
 * 释放UI系统占用的所有资源，包括内存和渲染资源
 * 
 * @param cleanup_func 清理函数指针
 * @param system_ptr 系统指针
 * @return 释放结果：0=成功，其他=错误代码
 * 
 * 原始实现：FUN_180789205
 */
uint64_t UI_ReleaseResources(code *cleanup_func, longlong system_ptr)
{
    longlong resource_ptr;
    uint64_t *current_node;
    uint64_t result;
    uint64_t *list_head;
    longlong index;
    longlong resource_count;
    
    // 检查清理函数并执行
    if ((cleanup_func == (code *)0x0) || (result = (*cleanup_func)(system_ptr + 8), (int)result == 0)) {
        // 获取资源数量
        resource_count = (longlong)*(int *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127e8);
        
        // 释放所有资源
        if (0 < resource_count) {
            index = 0;
            do {
                // 获取资源指针
                resource_ptr = *(longlong *)(*(longlong *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127e0) + index * 8);
                
                // 如果资源存在则释放
                if (*(longlong *)(resource_ptr + 0x18) != 0) {
                    // 调用资源释放函数
                    (**(code **)(system_ptr + 0x398))(system_ptr + 8);
                    *(uint64_t *)(resource_ptr + 0x18) = 0;
                }
                
                index = index + 1;
            } while (index < resource_count);
        }
        
        // 释放渲染资源
        if (*(longlong *)(system_ptr + UI_OFFSET_RENDER) != 0) {
            list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
            for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
                // 调用渲染释放函数
                (**(code **)(system_ptr + UI_OFFSET_RENDER))(system_ptr + 8, *(int32_t *)((longlong)current_node + 0x24));
            }
        }
        
        result = UI_SYSTEM_SUCCESS;
    }
    
    return result;
}



/**
 * UI_ResetSystem - UI系统重置
 * 
 * 重置UI系统到初始状态，清理所有资源并重置状态
 * 
 * @param data_ptr 数据指针
 * @param system_ptr 系统指针
 * @return 重置结果：0=成功
 * 
 * 原始实现：FUN_180789221
 */
uint64_t UI_ResetSystem(longlong data_ptr, longlong system_ptr)
{
    int resource_count;
    longlong resource_ptr;
    uint64_t *current_node;
    longlong index;
    
    // 获取资源数量
    resource_count = *(int *)(data_ptr + 0x127e8);
    
    // 释放所有资源
    if (0 < resource_count) {
        index = 0;
        do {
            // 获取资源指针
            resource_ptr = *(longlong *)(*(longlong *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127e0) + index * 8);
            
            // 如果资源存在则释放
            if (*(longlong *)(resource_ptr + 0x18) != 0) {
                // 调用资源释放函数
                (**(code **)(system_ptr + 0x398))(system_ptr + 8);
                *(uint64_t *)(resource_ptr + 0x18) = 0;
            }
            
            index = index + 1;
        } while (index < resource_count);
    }
    
    // 释放渲染资源
    if (*(longlong *)(system_ptr + UI_OFFSET_RENDER) != 0) {
        uint64_t *list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
        for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
            // 调用渲染释放函数
            (**(code **)(system_ptr + UI_OFFSET_RENDER))(system_ptr + 8, *(int32_t *)((longlong)current_node + 0x24));
        }
    }
    
    return UI_SYSTEM_SUCCESS;
}



/**
 * UI_ResetSystem2 - UI系统重置（备用版本）
 * 
 * 重置UI系统到初始状态的备用实现，提供相同的重置功能
 * 
 * @param data_ptr 数据指针
 * @param system_ptr 系统指针
 * @return 重置结果：0=成功
 * 
 * 原始实现：FUN_18078922b
 */
uint64_t UI_ResetSystem2(longlong data_ptr, longlong system_ptr)
{
    int resource_count;
    longlong resource_ptr;
    uint64_t *current_node;
    longlong index;
    
    // 获取资源数量
    resource_count = *(int *)(data_ptr + 0x127e8);
    
    // 释放所有资源
    if (0 < resource_count) {
        index = 0;
        do {
            // 获取资源指针
            resource_ptr = *(longlong *)(*(longlong *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127e0) + index * 8);
            
            // 如果资源存在则释放
            if (*(longlong *)(resource_ptr + 0x18) != 0) {
                // 调用资源释放函数
                (**(code **)(system_ptr + 0x398))(system_ptr + 8);
                *(uint64_t *)(resource_ptr + 0x18) = 0;
            }
            
            index = index + 1;
        } while (index < resource_count);
    }
    
    // 释放渲染资源
    if (*(longlong *)(system_ptr + UI_OFFSET_RENDER) != 0) {
        uint64_t *list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
        for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
            // 调用渲染释放函数
            (**(code **)(system_ptr + UI_OFFSET_RENDER))(system_ptr + 8, *(int32_t *)((longlong)current_node + 0x24));
        }
    }
    
    return UI_SYSTEM_SUCCESS;
}



/**
 * UI_ClearSystem - UI系统清理
 * 
 * 清理UI系统所有资源和状态，恢复到初始状态
 * 
 * @param system_ptr 系统指针
 * @param resource_count 资源数量
 * @return 清理结果：0=成功
 * 
 * 原始实现：FUN_18078923c
 */
uint64_t UI_ClearSystem(longlong system_ptr, longlong resource_count)
{
    longlong resource_ptr;
    uint64_t *current_node;
    longlong index;
    
    // 清理所有资源
    index = 0;
    do {
        // 获取资源指针
        resource_ptr = *(longlong *)(*(longlong *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x127e0) + index * 8);
        
        // 如果资源存在则清理
        if (*(longlong *)(resource_ptr + 0x18) != 0) {
            // 调用资源清理函数
            (**(code **)(system_ptr + 0x398))(system_ptr + 8);
            *(uint64_t *)(resource_ptr + 0x18) = 0;
        }
        
        index = index + 1;
    } while (index < resource_count);
    
    // 清理渲染资源
    if (*(longlong *)(system_ptr + UI_OFFSET_RENDER) != 0) {
        uint64_t *list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
        for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
            // 调用渲染清理函数
            (**(code **)(system_ptr + UI_OFFSET_RENDER))(system_ptr + 8, *(int32_t *)((longlong)current_node + 0x24));
        }
    }
    
    return UI_SYSTEM_SUCCESS;
}



/**
 * UI_BatchProcess - UI系统批量处理
 * 
 * 批量处理UI系统中的渲染资源，检查渲染函数是否存在后执行批量操作
 * 
 * @return 处理结果：0=成功
 * 
 * 原始实现：FUN_180789283
 */
uint64_t UI_BatchProcess(void)
{
    uint64_t *current_node;
    longlong system_ptr;
    uint64_t *list_head;
    
    // 检查渲染函数是否存在
    if (*(longlong *)(system_ptr + UI_OFFSET_RENDER) != 0) {
        list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
        
        // 遍历链表执行批量处理
        for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
            // 调用渲染处理函数
            (**(code **)(system_ptr + UI_OFFSET_RENDER))(system_ptr + 8, *(int32_t *)((longlong)current_node + 0x24));
        }
    }
    
    return UI_SYSTEM_SUCCESS;
}



/**
 * UI_ProcessLinkedList - UI系统链表处理
 * 
 * 处理UI系统中的链表结构，遍历链表节点并执行相应的处理函数
 * 
 * @return 处理结果：0=成功
 * 
 * 原始实现：FUN_180789292
 */
uint64_t UI_ProcessLinkedList(void)
{
    uint64_t *current_node;
    longlong system_ptr;
    uint64_t *list_head;
    
    // 获取链表头指针
    list_head = (uint64_t *)(*(longlong *)(system_ptr + UI_OFFSET_DATA) + 0x6c0);
    
    // 遍历链表处理每个节点
    for (current_node = (uint64_t *)*list_head; current_node != list_head; current_node = (uint64_t *)*current_node) {
        // 调用链表节点处理函数
        (**(code **)(system_ptr + UI_OFFSET_RENDER))(system_ptr + 8, *(int32_t *)((longlong)current_node + 0x24));
    }
    
    return UI_SYSTEM_SUCCESS;
}





/**
 * UI_EmptyFunction2 - UI系统空函数2
 * 
 * 空函数，用于占位或作为默认函数指针
 * 
 * 原始实现：FUN_1807892d1
 */
void UI_EmptyFunction2(void)
{
    // 空函数实现
    return;
}





// 函数: void FUN_1807892d6(void)
void FUN_1807892d6(void)

{
  return;
}



uint64_t FUN_180789300(longlong param_1)

{
  uint64_t uVar1;
  
  if ((*(code **)(param_1 + 0x370) != (code *)0x0) &&
     (uVar1 = (**(code **)(param_1 + 0x370))(param_1 + 8), (int)uVar1 != 0)) {
    return uVar1;
  }
  return 0;
}





// 函数: void FUN_180789360(uint *param_1,uint param_2,int param_3,int param_4,uint param_5)
void FUN_180789360(uint *param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  
  if (param_4 != 1) {
    do {
      if (param_4 == 2) {
        param_1[1] = param_2 + param_3 & param_5;
        break;
      }
      iVar1 = (int)((param_4 >> 0x1f & 3U) + param_4) >> 2;
      FUN_180789360(param_1,param_2,param_3 * 2,param_4 / 2,param_5);
      FUN_180789360(param_1 + param_4 / 2,param_2 + param_3,param_3 * 4,iVar1,param_5);
      param_2 = param_2 + (param_4 + -1) * param_3;
      param_1 = param_1 + iVar1 * 3;
      param_4 = iVar1;
      param_3 = param_3 * 4;
    } while (iVar1 != 1);
  }
  *param_1 = param_2 & param_5;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180789470(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  *(longlong *)(param_1 + 8) = param_1;
  *(longlong *)param_1 = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  if (((*(int *)(param_1 + 0x18) != 0) || (0xfff0 < param_2 - 0x10)) ||
     ((param_2 & param_2 - 1) != 0)) {
    return 0x1f;
  }
  uVar3 = FUN_1807682e0(param_1 + 0x60,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar6 = param_2 * 8 + 0x10;
  lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar6,&UNK_18095ad40,0x4f,0,0,1);
  *(longlong *)(param_1 + 0x40) = lVar4;
  if (lVar4 != 0) {
    uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_1 + 0x20) = uVar5;
    if (param_3 == '\0') {
      *(ulonglong *)(param_1 + 0x28) = uVar5;
      *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0x60);
      *(uint64_t *)(param_1 + 0x48) = 0;
    }
    else {
      lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar6,&UNK_18095ad40,0x58,0,0,1)
      ;
      *(longlong *)(param_1 + 0x48) = lVar4;
      if (lVar4 == 0) {
        return 0x26;
      }
      *(ulonglong *)(param_1 + 0x28) = lVar4 + 0xfU & 0xfffffffffffffff0;
      uVar3 = FUN_1807682e0(param_1 + 0x68,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    uVar1 = param_2 >> 1;
    lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                          ((param_2 >> 2) + uVar1) * 8 + 0x10,&UNK_18095ad40,0x6b,0,0,1);
    *(longlong *)(param_1 + 0x50) = lVar4;
    if (lVar4 != 0) {
      *(ulonglong *)(param_1 + 0x30) = lVar4 + 0xfU & 0xfffffffffffffff0;
      uVar2 = uVar1;
      if (0 < (int)param_2 / 2) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      while( true ) {
        if (uVar2 == 0) {
          uVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar1 * 4,&UNK_18095ad40,
                                0x8a,0,0,1);
          *(uint64_t *)(param_1 + 0x58) = uVar3;
          *(uint64_t *)(param_1 + 0x38) = uVar3;
          FUN_180789360(uVar3,0,1,uVar1,uVar1 - 1);
          *(uint *)(param_1 + 0x18) = param_2;
          return 0;
        }
        if ((int)uVar2 >> 2 != 0) break;
        uVar2 = (int)uVar2 >> 1;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807894bb(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char unaff_BPL;
  uint uVar6;
  longlong unaff_RSI;
  int iVar7;
  uint64_t unaff_R12;
  uint uVar8;
  ulonglong unaff_R15;
  
  uVar3 = FUN_1807682e0(param_1 + 0x60);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar1 = (int)unaff_R15;
  iVar7 = iVar1 * 8 + 0x10;
  lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar7,&UNK_18095ad40,
                        (int)unaff_R12 + 0x4f);
  *(longlong *)(unaff_RSI + 0x40) = lVar4;
  if (lVar4 != 0) {
    uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(unaff_RSI + 0x20) = uVar5;
    if (unaff_BPL == '\0') {
      *(ulonglong *)(unaff_RSI + 0x28) = uVar5;
      *(uint64_t *)(unaff_RSI + 0x68) = *(uint64_t *)(unaff_RSI + 0x60);
      *(uint64_t *)(unaff_RSI + 0x48) = unaff_R12;
    }
    else {
      lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar7,&UNK_18095ad40,
                            (int)unaff_R12 + 0x58);
      *(longlong *)(unaff_RSI + 0x48) = lVar4;
      if (lVar4 == 0) {
        return 0x26;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = lVar4 + 0xfU & 0xfffffffffffffff0;
      uVar3 = FUN_1807682e0(unaff_RSI + 0x68,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    uVar5 = unaff_R15 >> 1 & 0x7fffffff;
    uVar8 = (uint)uVar5;
    lVar4 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                          (((uint)(unaff_R15 >> 2) & 0x3fffffff) + uVar8) * 8 + 0x10,&UNK_18095ad40,
                          0x6b);
    *(longlong *)(unaff_RSI + 0x50) = lVar4;
    if (lVar4 != 0) {
      *(ulonglong *)(unaff_RSI + 0x30) = lVar4 + 0xfU & 0xfffffffffffffff0;
      uVar2 = uVar5;
      uVar6 = uVar8;
      if (0 < iVar1 / 2) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      while( true ) {
        if (uVar6 == 0) {
          uVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar8 * 4,&UNK_18095ad40,
                                0x8a);
          *(uint64_t *)(unaff_RSI + 0x58) = uVar3;
          *(uint64_t *)(unaff_RSI + 0x38) = uVar3;
          FUN_180789360(uVar3,0,1,uVar5,uVar8 - 1);
          *(int *)(unaff_RSI + 0x18) = iVar1;
          return 0;
        }
        if ((int)uVar2 >> 2 != 0) break;
        uVar6 = (int)uVar2 >> 1;
        uVar2 = (ulonglong)uVar6;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
  }
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807894e0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint64_t uVar5;
  char unaff_BPL;
  uint uVar6;
  longlong unaff_RSI;
  int iVar7;
  int8_t uVar8;
  uint64_t unaff_R12;
  uint uVar9;
  ulonglong unaff_R15;
  int8_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  uStack0000000000000030 = 1;
  iVar1 = (int)unaff_R15;
  iVar7 = iVar1 * 8 + 0x10;
  uVar8 = (int8_t)unaff_R12;
  uStack0000000000000028 = uVar8;
  lVar3 = FUN_180741e10(*(uint64_t *)(param_1 + 0x1a0),iVar7,&UNK_18095ad40);
  *(longlong *)(unaff_RSI + 0x40) = lVar3;
  if (lVar3 != 0) {
    uVar4 = lVar3 + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(unaff_RSI + 0x20) = uVar4;
    if (unaff_BPL == '\0') {
      *(ulonglong *)(unaff_RSI + 0x28) = uVar4;
      *(uint64_t *)(unaff_RSI + 0x68) = *(uint64_t *)(unaff_RSI + 0x60);
      *(uint64_t *)(unaff_RSI + 0x48) = unaff_R12;
    }
    else {
      uStack0000000000000030 = 1;
      uStack0000000000000028 = uVar8;
      lVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),iVar7,&UNK_18095ad40,
                            (int)unaff_R12 + 0x58);
      *(longlong *)(unaff_RSI + 0x48) = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = lVar3 + 0xfU & 0xfffffffffffffff0;
      uVar5 = FUN_1807682e0(unaff_RSI + 0x68,0);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    uStack0000000000000030 = 1;
    uVar4 = unaff_R15 >> 1 & 0x7fffffff;
    uVar9 = (uint)uVar4;
    uStack0000000000000028 = uVar8;
    lVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                          (((uint)(unaff_R15 >> 2) & 0x3fffffff) + uVar9) * 8 + 0x10,&UNK_18095ad40,
                          0x6b);
    *(longlong *)(unaff_RSI + 0x50) = lVar3;
    if (lVar3 != 0) {
      *(ulonglong *)(unaff_RSI + 0x30) = lVar3 + 0xfU & 0xfffffffffffffff0;
      uVar2 = uVar4;
      uVar6 = uVar9;
      if (0 < iVar1 / 2) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      while( true ) {
        if (uVar6 == 0) {
          uStack0000000000000030 = 1;
          uStack0000000000000028 = uVar8;
          uVar5 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar9 * 4,&UNK_18095ad40,
                                0x8a);
          *(uint64_t *)(unaff_RSI + 0x58) = uVar5;
          *(uint64_t *)(unaff_RSI + 0x38) = uVar5;
          FUN_180789360(uVar5,0,1,uVar4,uVar9 - 1);
          *(int *)(unaff_RSI + 0x18) = iVar1;
          return 0;
        }
        if ((int)uVar2 >> 2 != 0) break;
        uVar6 = (int)uVar2 >> 1;
        uVar2 = (ulonglong)uVar6;
      }
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
  }
  return 0x26;
}





// 函数: void FUN_1807895a2(void)
void FUN_1807895a2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807895b5(void)

{
  ulonglong uVar1;
  uint64_t in_RAX;
  longlong lVar2;
  uint64_t uVar3;
  uint uVar4;
  longlong unaff_RSI;
  uint64_t unaff_R12;
  uint uVar5;
  ulonglong uVar6;
  ulonglong unaff_R15;
  int8_t uStack0000000000000028;
  int8_t uStack0000000000000030;
  
  *(uint64_t *)(unaff_RSI + 0x28) = in_RAX;
  *(uint64_t *)(unaff_RSI + 0x68) = *(uint64_t *)(unaff_RSI + 0x60);
  *(uint64_t *)(unaff_RSI + 0x48) = unaff_R12;
  uStack0000000000000030 = 1;
  uVar6 = unaff_R15 >> 1 & 0x7fffffff;
  uVar5 = (uint)uVar6;
  uStack0000000000000028 = (char)unaff_R12;
  lVar2 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                        (((uint)(unaff_R15 >> 2) & 0x3fffffff) + uVar5) * 8 + 0x10,&UNK_18095ad40,
                        0x6b);
  *(longlong *)(unaff_RSI + 0x50) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x26;
  }
  else {
    *(ulonglong *)(unaff_RSI + 0x30) = lVar2 + 0xfU & 0xfffffffffffffff0;
    uVar1 = uVar6;
    uVar4 = uVar5;
    if (0 < (int)unaff_R15 / 2) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400();
    }
    while (uVar4 != 0) {
      if ((int)uVar1 >> 2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400();
      }
      uVar4 = (int)uVar1 >> 1;
      uVar1 = (ulonglong)uVar4;
    }
    uStack0000000000000030 = 1;
    uStack0000000000000028 = (char)unaff_R12;
    uVar3 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),uVar5 * 4,&UNK_18095ad40,0x8a);
    *(uint64_t *)(unaff_RSI + 0x58) = uVar3;
    *(uint64_t *)(unaff_RSI + 0x38) = uVar3;
    FUN_180789360(uVar3,0,1,uVar6,uVar5 - 1);
    uVar3 = 0;
    *(int *)(unaff_RSI + 0x18) = (int)unaff_R15;
  }
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078961b(uint64_t param_1)

{
  uint64_t uVar1;
  ulonglong unaff_RBX;
  int iVar2;
  longlong unaff_RSI;
  int unaff_R12D;
  int unaff_R13D;
  longlong unaff_R15;
  
  *(ulonglong *)(unaff_RSI + 0x30) = unaff_RBX & 0xfffffffffffffff0;
  if (0 < (int)unaff_R15 / 2) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(param_1,(float)unaff_R12D * -6.2831855 * (1.0 / (float)unaff_R15));
  }
  iVar2 = unaff_R13D;
  if (unaff_R13D != 0) {
    do {
      if (0 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
                    // WARNING: Subroutine does not return
        FUN_1808fd400(param_1,(float)unaff_R12D * 6.2831855 * (1.0 / (float)iVar2));
      }
      iVar2 = iVar2 >> 1;
    } while (iVar2 != 0);
  }
  uVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_R13D * 4,&UNK_18095ad40,0x8a);
  *(uint64_t *)(unaff_RSI + 0x58) = uVar1;
  *(uint64_t *)(unaff_RSI + 0x38) = uVar1;
  FUN_180789360(uVar1,0,1,unaff_R13D,unaff_R13D + -1);
  *(int *)(unaff_RSI + 0x18) = (int)unaff_R15;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807896ae(uint64_t param_1)

{
  uint64_t uVar1;
  int unaff_EBP;
  longlong unaff_RSI;
  int unaff_R12D;
  int unaff_R13D;
  int32_t unaff_R15D;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  do {
    if (0 < (int)(unaff_EBP + (unaff_EBP >> 0x1f & 3U)) >> 2) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(param_1,(float)unaff_R12D * unaff_XMM7_Da * (unaff_XMM8_Da / (float)unaff_EBP));
    }
    unaff_EBP = unaff_EBP >> 1;
  } while (unaff_EBP != 0);
  uVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_R13D * 4,&UNK_18095ad40,0x8a);
  *(uint64_t *)(unaff_RSI + 0x58) = uVar1;
  *(uint64_t *)(unaff_RSI + 0x38) = uVar1;
  FUN_180789360(uVar1,0,1,unaff_R13D,unaff_R13D + -1);
  *(int32_t *)(unaff_RSI + 0x18) = unaff_R15D;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18078971b(void)

{
  uint64_t uVar1;
  longlong unaff_RSI;
  int unaff_R13D;
  int32_t unaff_R15D;
  int8_t uStack0000000000000030;
  
  uStack0000000000000030 = 1;
  uVar1 = FUN_180741e10(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),unaff_R13D * 4,&UNK_18095ad40,0x8a);
  *(uint64_t *)(unaff_RSI + 0x58) = uVar1;
  *(uint64_t *)(unaff_RSI + 0x38) = uVar1;
  FUN_180789360(uVar1,0,1,unaff_R13D,unaff_R13D + -1);
  *(int32_t *)(unaff_RSI + 0x18) = unaff_R15D;
  return 0;
}



uint64_t FUN_18078978e(void)

{
  return 0x26;
}



uint64_t FUN_180789798(void)

{
  return 0x1f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t
FUN_1807897b0(longlong param_1,longlong param_2,uint64_t param_3,longlong param_4,int param_5)

{
  uint64_t uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0x43;
  }
  if (param_5 == 0) {
    return 0x1f;
  }
  uVar1 = *(uint64_t *)(param_1 + 0x60);
  FUN_180768360(uVar1);
  iVar4 = *(int *)(param_1 + 0x18);
  pfVar2 = *(float **)(param_1 + 0x20);
  if (param_5 == 1) {
    if (param_4 == 0) {
      iVar3 = 0;
      if (0 < iVar4 / 2) {
        lVar5 = 0;
        pfVar6 = pfVar2;
        do {
          iVar3 = iVar3 + 1;
          *pfVar6 = *(float *)(param_2 +
                              (longlong)(*(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * 2) * 4);
          pfVar6[1] = *(float *)(param_2 + 4 +
                                (longlong)(*(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * 2) * 4)
          ;
          iVar4 = *(int *)(param_1 + 0x18);
          lVar5 = lVar5 + 4;
          pfVar6 = pfVar6 + 2;
        } while (iVar3 < iVar4 / 2);
      }
      goto LAB_180789990;
    }
  }
  else if (param_4 == 0) {
    iVar3 = 0;
    if (0 < iVar4 / 2) {
      lVar5 = 0;
      pfVar6 = pfVar2;
      do {
        iVar3 = iVar3 + 1;
        *pfVar6 = *(float *)(param_2 +
                            (longlong)
                            (*(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * param_5 * 2) * 4);
        pfVar6[1] = *(float *)(param_2 +
                              (longlong)
                              ((*(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * 2 + 1) * param_5)
                              * 4);
        iVar4 = *(int *)(param_1 + 0x18);
        lVar5 = lVar5 + 4;
        pfVar6 = pfVar6 + 2;
      } while (iVar3 < iVar4 / 2);
    }
    goto LAB_180789990;
  }
  iVar3 = 0;
  if (0 < iVar4 / 2) {
    lVar5 = 0;
    pfVar6 = pfVar2;
    do {
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(lVar5 + *(longlong *)(param_1 + 0x38));
      *pfVar6 = *(float *)(param_2 + (longlong)(iVar4 * param_5 * 2) * 4) *
                *(float *)(param_4 + (longlong)(iVar4 * 2) * 4);
      iVar4 = *(int *)(lVar5 + *(longlong *)(param_1 + 0x38)) * 2;
      pfVar6[1] = *(float *)(param_2 + (longlong)((iVar4 + 1) * param_5) * 4) *
                  *(float *)(param_4 + 4 + (longlong)iVar4 * 4);
      iVar4 = *(int *)(param_1 + 0x18);
      lVar5 = lVar5 + 4;
      pfVar6 = pfVar6 + 2;
    } while (iVar3 < iVar4 / 2);
  }
LAB_180789990:
  (*(code *)*_DAT_180c108d0)(pfVar2,*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 4,iVar4 / 2);
  (*(code *)_DAT_180c108d0[2])
            (pfVar2,param_3,*(uint64_t *)(param_1 + 0x30),*(int32_t *)(param_1 + 0x18));
                    // WARNING: Subroutine does not return
  FUN_180768400(uVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



