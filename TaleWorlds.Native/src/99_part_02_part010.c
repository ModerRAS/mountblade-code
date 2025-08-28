#include "TaleWorlds.Native.Split.h"

// =============================================================================
// 模块99未匹配函数第2部分第10个文件 - 高级内存管理和数据处理模块
// =============================================================================

// 常量定义
#define INVALID_HANDLE          0xFFFFFFFFFFFFFFFE
#define CONTAINER_BLOCK_SIZE    0x78
#define CONTAINER_CHUNK_SIZE    0x1E0
#define FLOAT_ONE               0x3F800000
#define FLOAT_MAX_VALUE         0x7F7FFFFF
#define DOUBLE_ONE              0x3FF0000000000000
#define DOUBLE_MAX_VALUE        0x7FEFFFFFFFFFFFFF
#define DEFAULT_ALIGNMENT       8
#define MUTEX_TYPE_2            2
#define ARRAY_SIZE_10           10
#define ARRAY_SIZE_8            8

// 偏移量常量
#define OFFSET_0x10            0x10
#define OFFSET_0x18            0x18
#define OFFSET_0x20            0x20
#define OFFSET_0x28            0x28
#define OFFSET_0x30            0x30
#define OFFSET_0x40            0x40
#define OFFSET_0x48            0x48
#define OFFSET_0x58            0x58
#define OFFSET_0x68            0x68
#define OFFSET_0x70            0x70
#define OFFSET_0x78            0x78
#define OFFSET_0x80            0x80
#define OFFSET_0x88            0x88
#define OFFSET_0x90            0x90

// =============================================================================
// 1. 系统调用和函数指针操作模块
// =============================================================================

/**
 * @brief 系统调用分发器类型1
 * @param system_context 系统上下文指针
 * @param interface_ptr 接口指针
 * @param param3 第三个参数
 * @param param4 第四个参数
 * @return 无返回值
 * 
 * 该函数用于分发系统调用到具体的处理函数，主要功能包括：
 * - 获取系统上下文中的接口指针
 * - 调用底层系统调用处理函数
 * - 处理系统调用结果
 */
void system_call_dispatcher_type1(longlong system_context, undefined8 interface_ptr, undefined8 param3, undefined8 param4)
{
    // 调用系统调用处理函数
    system_call_handler_080(system_context, *(undefined8 *)(system_context + OFFSET_0x10), param3, param4, INVALID_HANDLE);
    return;
}

// 函数别名
#define system_call_dispatcher_1    system_call_dispatcher_type1






/**
 * @brief 系统调用分发器类型2
 * @param system_context 系统上下文指针
 * @param interface_ptr 接口指针
 * @param param3 第三个参数
 * @param param4 第四个参数
 * @return 无返回值
 * 
 * 该函数用于分发系统调用到具体的处理函数，主要功能包括：
 * - 获取系统上下文中的接口指针
 * - 调用底层系统调用处理函数130
 * - 处理系统调用结果
 */
void system_call_dispatcher_type2(longlong system_context, undefined8 interface_ptr, undefined8 param3, undefined8 param4)
{
    // 调用系统调用处理函数130
    system_call_handler_130(system_context, *(undefined8 *)(system_context + OFFSET_0x10), param3, param4, INVALID_HANDLE);
    return;
}

// 函数别名
#define system_call_dispatcher_2    system_call_dispatcher_type2






/**
 * @brief 资源清理和状态重置函数
 * @param resource_handle 资源句柄
 * @param unused_param 未使用的参数
 * @param param3 第三个参数
 * @param param4 第四个参数
 * @return 无返回值
 * 
 * 该函数用于清理资源并重置系统状态，主要功能包括：
 * - 调用资源清理回调函数
 * - 释放相关资源
 * - 重置系统状态
 * - 验证资源释放结果
 */
void resource_cleanup_and_reset(longlong resource_handle, undefined8 unused_param, undefined8 param3, undefined8 param4)
{
    // 调用资源清理回调函数
    if (*(code **)(resource_handle + OFFSET_0x68) != (code *)0x0) {
        (**(code **)(resource_handle + OFFSET_0x68))(resource_handle + OFFSET_0x58, 0, 0, param4, INVALID_HANDLE);
    }
    
    // 释放48偏移处的资源
    if (*(longlong **)(resource_handle + OFFSET_0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(resource_handle + OFFSET_0x48) + OFFSET_0x30))();
    }
    
    // 释放40偏移处的资源
    if (*(longlong **)(resource_handle + OFFSET_0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(resource_handle + OFFSET_0x40) + OFFSET_0x30))();
    }
    
    // 设置清理标记
    *(undefined8 *)(resource_handle + OFFSET_0x18) = &CLEANUP_FLAG_ACTIVE;
    
    // 检查是否有未释放的资源
    if (*(longlong *)(resource_handle + OFFSET_0x20) != 0) {
        // 如果有未释放的资源，调用错误处理函数
        error_handler_critical();
    }
    
    // 重置资源状态
    *(undefined8 *)(resource_handle + OFFSET_0x20) = 0;
    *(undefined4 *)(resource_handle + OFFSET_0x30) = 0;
    *(undefined8 *)(resource_handle + OFFSET_0x18) = &CLEANUP_FLAG_INACTIVE;
    
    return;
}

// 函数别名
#define resource_cleanup_reset    resource_cleanup_and_reset



/**
 * @brief 数据结构初始化函数
 * @param data_structure 数据结构指针
 * @return 初始化后的数据结构指针
 * 
 * 该函数用于初始化数据结构，主要功能包括：
 * - 设置数据结构的自引用指针
 * - 初始化数据结构的状态字段
 * - 设置默认的配置参数
 * - 返回初始化后的数据结构指针
 */
longlong data_structure_initializer(longlong data_structure)
{
    // 初始化数据结构的基本字段
    *(undefined8 *)(data_structure + OFFSET_0x18) = 0;
    *(undefined4 *)(data_structure + OFFSET_0x28) = 3;  // 设置状态为3
    
    // 设置自引用指针
    *(longlong *)data_structure = data_structure;        // 头部指针指向自己
    *(longlong *)(data_structure + 8) = data_structure;  // 尾部指针指向自己
    
    // 初始化其他字段
    *(undefined8 *)(data_structure + OFFSET_0x10) = 0;   // 清空接口指针
    *(undefined1 *)(data_structure + OFFSET_0x18) = 0;   // 清空状态标志
    *(undefined8 *)(data_structure + OFFSET_0x20) = 0;   // 清空资源句柄
    
    return data_structure;
}

// 函数别名
#define data_structure_init        data_structure_initializer






/**
 * @brief 系统调用分发器类型3
 * @param system_context 系统上下文指针
 * @param interface_ptr 接口指针
 * @param param3 第三个参数
 * @param param4 第四个参数
 * @return 无返回值
 * 
 * 该函数用于分发系统调用到具体的处理函数，主要功能包括：
 * - 获取系统上下文中的接口指针
 * - 调用底层系统调用处理函数080
 * - 处理系统调用结果
 */
void system_call_dispatcher_type3(longlong system_context, undefined8 interface_ptr, undefined8 param3, undefined8 param4)
{
    // 调用系统调用处理函数080
    system_call_handler_080(system_context, *(undefined8 *)(system_context + OFFSET_0x10), param3, param4, INVALID_HANDLE);
    return;
}

// 函数别名
#define system_call_dispatcher_3    system_call_dispatcher_type3






/**
 * @brief 系统调用分发器类型4
 * @param system_context 系统上下文指针
 * @param interface_ptr 接口指针
 * @param param3 第三个参数
 * @param param4 第四个参数
 * @return 无返回值
 * 
 * 该函数用于分发系统调用到具体的处理函数，主要功能包括：
 * - 获取系统上下文中的接口指针
 * - 调用底层系统调用处理函数130
 * - 处理系统调用结果
 */
void system_call_dispatcher_type4(longlong system_context, undefined8 interface_ptr, undefined8 param3, undefined8 param4)
{
    // 调用系统调用处理函数130
    system_call_handler_130(system_context, *(undefined8 *)(system_context + OFFSET_0x10), param3, param4, INVALID_HANDLE);
    return;
}

// 函数别名
#define system_call_dispatcher_4    system_call_dispatcher_type4






/**
 * @brief 容器批量清理函数
 * @param container_info 容器信息结构指针
 * @return 无返回值
 * 
 * 该函数用于批量清理容器中的资源，主要功能包括：
 * - 遍历容器中的所有块
 * - 清理每个块中的资源
 * - 验证资源释放结果
 * - 重置容器状态
 */
void container_batch_cleanup(longlong *container_info)
{
    longlong current_block;
    longlong block_end;
    longlong *block_ptr;
    
    // 获取容器的基本信息
    current_block = container_info[2];      // 当前块起始地址
    block_end = container_info[4];          // 当前块结束地址
    block_ptr = (longlong *)container_info[5]; // 块指针数组
    
    // 遍历所有块进行清理
    if (current_block != container_info[6]) {  // 如果不是结束状态
        do {
            // 清理当前块
            resource_cleanup_and_reset(current_block, 0, 0, 0);
            current_block = current_block + CONTAINER_BLOCK_SIZE;  // 移动到下一个块
            
            // 检查是否需要切换到下一个块组
            if (current_block == block_end) {
                block_ptr = block_ptr + 1;          // 移动到下一个块指针
                current_block = *block_ptr;          // 获取新的块起始地址
                block_end = current_block + CONTAINER_CHUNK_SIZE;  // 计算新的块结束地址
            }
        } while (current_block != container_info[6]);  // 直到遍历完所有块
    }
    
    // 验证所有资源都已释放
    if (*container_info != 0) {
        block_ptr = (longlong *)container_info[5];
        while (block_ptr < (longlong *)(container_info[9] + 8)) {
            longlong block_check = *block_ptr;
            block_ptr = block_ptr + 1;
            if (block_check != 0) {
                // 如果还有未释放的资源，调用错误处理函数
                error_handler_critical();
            }
        }
        
        // 再次验证容器状态
        if (*container_info != 0) {
            // 如果容器未正确清理，调用错误处理函数
            error_handler_critical();
        }
        
        // 重置容器状态
        *container_info = 0;
    }
    
    return;
}

// 函数别名
#define container_cleanup_batch    container_batch_cleanup






/**
 * @brief 容器管理器清理函数
 * @return 无返回值
 * 
 * 该函数用于清理容器管理器中的所有资源，主要功能包括：
 * - 遍历容器管理器中的所有容器
 * - 清理每个容器中的资源
 * - 重置容器管理器状态
 * - 处理错误情况
 */
void container_manager_cleanup(void)
{
    ulonglong container_start;
    ulonglong container_end;
    ulonglong *container_ptr;
    longlong manager_context;
    
    // 无限循环遍历所有容器
    while (true) {
        container_start = *container_ptr;           // 获取容器起始地址
        container_end = container_start + CONTAINER_CHUNK_SIZE;  // 计算容器结束地址
        
        // 清理当前容器中的所有块
        if (container_start < container_end) {
            do {
                // 清理当前块
                resource_cleanup_and_reset(container_start, 0, 0, 0);
                container_start = container_start + CONTAINER_BLOCK_SIZE;  // 移动到下一个块
            } while (container_start < container_end);
            container_start = *container_ptr;  // 重新获取容器起始地址
        }
        
        // 检查容器是否为空
        if (container_start != 0) break;  // 如果容器不为空，跳出循环
        
        // 移动到下一个容器
        container_ptr = container_ptr + 1;
        
        // 检查是否已经遍历完所有容器
        if (*(ulonglong **)(manager_context + OFFSET_0x48) <= container_ptr) {
            // 重置容器管理器状态
            *(undefined8 *)(manager_context + OFFSET_0x30) = *(undefined8 *)(manager_context + OFFSET_0x10);
            *(undefined8 *)(manager_context + OFFSET_0x38) = *(undefined8 *)(manager_context + OFFSET_0x18);
            *(undefined8 *)(manager_context + OFFSET_0x40) = *(undefined8 *)(manager_context + OFFSET_0x20);
            *(undefined8 *)(manager_context + OFFSET_0x48) = *(undefined8 *)(manager_context + OFFSET_0x28);
            return;
        }
    }
    
    // 如果容器不为空，调用错误处理函数
    error_handler_critical(container_start);
}

// 函数别名
#define container_manager_clean    container_manager_cleanup






/**
 * @brief 容器管理器状态重置函数
 * @return 无返回值
 * 
 * 该函数用于重置容器管理器的状态，主要功能包括：
 * - 备份当前状态到工作区域
 * - 重置管理器的各个状态字段
 * - 确保状态一致性
 */
void container_manager_state_reset(void)
{
    longlong manager_context;
    
    // 重置容器管理器的状态字段
    *(undefined8 *)(manager_context + OFFSET_0x30) = *(undefined8 *)(manager_context + OFFSET_0x10);  // 重置30偏移处状态
    *(undefined8 *)(manager_context + OFFSET_0x38) = *(undefined8 *)(manager_context + OFFSET_0x18);  // 重置38偏移处状态
    *(undefined8 *)(manager_context + OFFSET_0x40) = *(undefined8 *)(manager_context + OFFSET_0x20);  // 重置40偏移处状态
    *(undefined8 *)(manager_context + OFFSET_0x48) = *(undefined8 *)(manager_context + OFFSET_0x28);  // 重置48偏移处状态
    
    return;
}

// 函数别名
#define container_state_reset      container_manager_state_reset






/**
 * @brief 资源组清理函数
 * @param resource_group 资源组指针
 * @return 无返回值
 * 
 * 该函数用于清理资源组中的所有资源，主要功能包括：
 * - 遍历资源组中的所有资源项
 * - 调用每个资源的清理函数
 * - 验证资源组状态
 * - 处理错误情况
 */
void resource_group_cleanup(longlong *resource_group)
{
    longlong *resource_end;
    longlong *resource_current;
    
    // 获取资源组的基本信息
    resource_end = (longlong *)resource_group[1];  // 资源组结束地址
    
    // 遍历资源组中的所有资源项
    for (resource_current = (longlong *)*resource_group; resource_current != resource_end; resource_current = resource_current + 4) {
        // 清理资源项中的各个资源
        if ((longlong *)resource_current[3] != (longlong *)0x0) {
            (**(code **)(*(longlong *)resource_current[3] + OFFSET_0x30))();  // 清理第三个资源
        }
        if ((longlong *)resource_current[2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)resource_current[2] + OFFSET_0x30))();  // 清理第二个资源
        }
        if ((longlong *)resource_current[1] != (longlong *)0x0) {
            (**(code **)(*(longlong *)resource_current[1] + OFFSET_0x30))();  // 清理第一个资源
        }
        if ((longlong *)*resource_current != (longlong *)0x0) {
            (**(code **)(*(longlong *)*resource_current + OFFSET_0x30))();    // 清理主资源
        }
    }
    
    // 验证资源组状态
    if (*resource_group == 0) {
        return;  // 资源组已正确清理
    }
    
    // 如果资源组未正确清理，调用错误处理函数
    error_handler_critical();
}

// 函数别名
#define resource_group_clean      resource_group_cleanup






/**
 * @brief 递归内存清理函数类型1
 * @param context 上下文指针
 * @param memory_block 内存块指针
 * @param param3 第三个参数
 * @param param4 第四个参数
 * @return 无返回值
 * 
 * 该函数用于递归清理内存块，主要功能包括：
 * - 检查内存块有效性
 * - 递归清理子内存块
 * - 设置清理标记
 * - 验证清理结果
 */
void recursive_memory_cleanup_type1(undefined8 context, undefined8 *memory_block, undefined8 param3, undefined8 param4)
{
    // 检查内存块有效性
    if (memory_block == (undefined8 *)0x0) {
        return;  // 内存块为空，直接返回
    }
    
    // 递归清理子内存块
    recursive_memory_cleanup_type1(context, *memory_block, param3, param4, INVALID_HANDLE);
    
    // 设置清理标记
    memory_block[5] = &CLEANUP_FLAG_ACTIVE;
    
    // 检查内存块是否已被占用
    if (memory_block[6] != 0) {
        // 如果内存块被占用，调用错误处理函数
        error_handler_critical();
    }
    
    // 重置内存块状态
    memory_block[6] = 0;
    *(undefined4 *)(memory_block + 8) = 0;
    memory_block[5] = &CLEANUP_FLAG_INACTIVE;
    
    // 验证内存块清理结果
    error_handler_critical(memory_block);
}

// 函数别名
#define memory_cleanup_recursive_1  recursive_memory_cleanup_type1






/**
 * @brief 递归内存清理函数类型2
 * @param context 上下文指针
 * @param memory_block 内存块指针
 * @param param3 第三个参数
 * @param param4 第四个参数
 * @return 无返回值
 * 
 * 该函数用于递归清理内存块，主要功能包括：
 * - 检查内存块有效性
 * - 递归清理子内存块
 * - 调用内存块的清理回调函数
 * - 释放内存块
 */
void recursive_memory_cleanup_type2(undefined8 context, undefined8 *memory_block, undefined8 param3, undefined8 param4)
{
    // 检查内存块有效性
    if (memory_block != (undefined8 *)0x0) {
        // 递归清理子内存块
        recursive_memory_cleanup_type2(context, *memory_block, param3, param4, INVALID_HANDLE);
        
        // 调用内存块的清理回调函数
        if ((longlong *)memory_block[5] != (longlong *)0x0) {
            (**(code **)(*(longlong *)memory_block[5] + OFFSET_0x30))();
        }
        
        // 释放内存块
        error_handler_critical(memory_block);
    }
    
    return;
}

// 函数别名
#define memory_cleanup_recursive_2  recursive_memory_cleanup_type2






/**
 * @brief 容器完整性验证函数
 * @param container_info 容器信息结构指针
 * @return 无返回值
 * 
 * 该函数用于验证容器的完整性，主要功能包括：
 * - 检查容器是否已正确清理
 * - 验证容器中的所有块都已释放
 * - 重置容器状态
 * - 处理验证失败情况
 */
void container_integrity_verify(longlong *container_info)
{
    longlong container_state;
    longlong *block_ptr;
    
    // 获取容器状态
    container_state = *container_info;
    
    // 检查容器是否已清理
    if (container_state != 0) {
        // 获取块指针数组
        block_ptr = (longlong *)container_info[5];
        
        // 验证所有块都已释放
        if (block_ptr < (longlong *)(container_info[9] + 8)) {
            do {
                container_state = *block_ptr;
                block_ptr = block_ptr + 1;
                if (container_state != 0) {
                    // 如果还有未释放的块，调用错误处理函数
                    error_handler_critical();
                }
            } while (block_ptr < (longlong *)(container_info[9] + 8));
            
            // 重新获取容器状态
            container_state = *container_info;
        }
        
        // 最终验证容器状态
        if (container_state != 0) {
            // 如果容器未正确清理，调用错误处理函数
            error_handler_critical();
        }
        
        // 重置容器状态
        *container_info = 0;
    }
    
    return;
}

// 函数别名
#define container_verify_integrity  container_integrity_verify






/**
 * @brief 容器状态清理函数
 * @param container_context 容器上下文指针
 * @return 无返回值
 * 
 * 该函数用于清理容器状态，主要功能包括：
 * - 验证容器中的所有块都已释放
 * - 重置容器状态
 * - 处理清理失败情况
 */
void container_state_cleanup(longlong container_context)
{
    longlong block_state;
    longlong *block_ptr;
    longlong *container_ptr;
    
    // 获取容器指针
    block_ptr = (longlong *)container_ptr[5];
    
    // 验证所有块都已释放
    if (block_ptr < (longlong *)(container_ptr[9] + 8)) {
        do {
            block_state = *block_ptr;
            block_ptr = block_ptr + 1;
            if (block_state != 0) {
                // 如果还有未释放的块，调用错误处理函数
                error_handler_critical();
            }
        } while (block_ptr < (longlong *)(container_ptr[9] + 8));
        container_context = *container_ptr;
    }
    
    // 最终验证容器状态
    if (container_context != 0) {
        // 如果容器未正确清理，调用错误处理函数
        error_handler_critical();
    }
    
    // 重置容器状态
    *container_ptr = 0;
    
    return;
}

// 函数别名
#define container_clean_state      container_state_cleanup



/**
 * @brief 错误处理函数
 * @return 无返回值
 * 
 * 该函数用于处理系统错误，主要功能包括：
 * - 调用底层错误处理机制
 * - 终止程序执行
 */
void error_handler_critical(void)
{
    // 调用底层错误处理函数
    system_error_handler();
}

// 函数别名
#define error_handler              error_handler_critical



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ee210(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800ee210(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  puVar7 = (undefined8 *)param_1[1];
  if ((ulonglong)(param_1[2] - (longlong)puVar7 >> 5) < param_2) {
    puVar6 = (undefined8 *)*param_1;
    lVar3 = (longlong)puVar7 - (longlong)puVar6 >> 5;
    uVar10 = lVar3 * 2;
    if (lVar3 == 0) {
      uVar10 = 1;
    }
    if (uVar10 < lVar3 + param_2) {
      uVar10 = lVar3 + param_2;
    }
    puVar4 = (undefined8 *)0x0;
    if (uVar10 != 0) {
      puVar4 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,uVar10 << 5,(char)param_1[3],param_4,0xfffffffffffffffe)
      ;
      puVar7 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)*param_1;
    }
    puVar5 = puVar4;
    if (puVar6 != puVar7) {
      lVar3 = (longlong)puVar4 - (longlong)puVar6;
      puVar6 = puVar6 + 1;
      do {
        *puVar5 = puVar6[-1];
        puVar6[-1] = 0;
        *(undefined8 *)((longlong)puVar6 + lVar3) = *puVar6;
        *puVar6 = 0;
        *(undefined8 *)(lVar3 + 8 + (longlong)puVar6) = puVar6[1];
        puVar6[1] = 0;
        *(undefined8 *)(lVar3 + 0x10 + (longlong)puVar6) = puVar6[2];
        puVar6[2] = 0;
        puVar5 = puVar5 + 4;
        puVar1 = puVar6 + 3;
        puVar6 = puVar6 + 4;
      } while (puVar1 != puVar7);
    }
    puVar7 = puVar5;
    uVar8 = param_2;
    if (param_2 != 0) {
      do {
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7 = puVar7 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    plVar2 = (longlong *)param_1[1];
    plVar9 = (longlong *)*param_1;
    if (plVar9 != plVar2) {
      do {
        if ((longlong *)plVar9[3] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar9[3] + 0x38))();
        }
        if ((longlong *)plVar9[2] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar9[2] + 0x38))();
        }
        if ((longlong *)plVar9[1] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar9[1] + 0x38))();
        }
        if ((longlong *)*plVar9 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar9 + 0x38))();
        }
        plVar9 = plVar9 + 4;
      } while (plVar9 != plVar2);
      plVar9 = (longlong *)*param_1;
    }
    if (plVar9 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar9);
    }
    *param_1 = (longlong)puVar4;
    param_1[1] = (longlong)(puVar5 + param_2 * 4);
    param_1[2] = (longlong)(puVar4 + uVar10 * 4);
  }
  else {
    uVar10 = param_2;
    if (param_2 != 0) {
      do {
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7 = puVar7 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      puVar7 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar7 + param_2 * 4);
  }
  return;
}






// 函数: void FUN_1800ee430(longlong param_1)
void FUN_1800ee430(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = &UNK_18098bcb0;
  return;
}






// 函数: void FUN_1800ee490(longlong param_1)
void FUN_1800ee490(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  }
  return;
}



undefined8 * FUN_1800ee510(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x7f7fffff00000000;
  param_1[2] = 0;
  param_1[3] = 0x7f7fffff00000000;
  param_1[4] = 0;
  param_1[5] = 0x7f7fffff00000000;
  param_1[0x16] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xc;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xc;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3f80000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f80000000000000;
  param_1[0x2e] = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ee650(longlong param_1)
void FUN_1800ee650(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x178,8,0x1c);
    uVar2 = FUN_1800ee510(uVar2);
    *(byte *)(param_1 + 0x2e9) = *(byte *)(param_1 + 0x2e9) & 0xfb;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  uVar3 = 0;
  uVar5 = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar3 + *(longlong *)(param_1 + 0x1c0));
      FUN_1800ee650(lVar1,lVar1 + 0x70);
      uVar3 = uVar3 + 8;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((ulonglong)(longlong)(int)uVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  return;
}






// 函数: void FUN_1800ee6aa(void)
void FUN_1800ee6aa(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  ulonglong uVar2;
  uint unaff_EDI;
  
  uVar2 = (ulonglong)unaff_EDI;
  do {
    lVar1 = *(longlong *)(uVar2 + *(longlong *)(unaff_RBX + 0x1c0));
    FUN_1800ee650(lVar1,lVar1 + 0x70);
    uVar2 = uVar2 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x1c8) - *(longlong *)(unaff_RBX + 0x1c0) >> 3));
  return;
}






// 函数: void FUN_1800ee6ea(void)
void FUN_1800ee6ea(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ee700(undefined8 param_1,longlong *param_2,undefined1 param_3)
void FUN_1800ee700(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plStackX_20;
  undefined8 uVar5;
  longlong *plVar6;
  longlong **pplVar7;
  
  uVar5 = 0xfffffffffffffffe;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,3,0xfffffffffffffffe);
  plVar2 = (longlong *)FUN_180275090(uVar1);
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(*param_2 + 0x18) != (undefined *)0x0) {
    puVar4 = *(undefined **)(*param_2 + 0x18);
  }
  (**(code **)(plVar2[0x3e] + 0x10))(plVar2 + 0x3e,puVar4);
  pplVar7 = &plStackX_20;
  plStackX_20 = (longlong *)*param_2;
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x28))();
  }
  FUN_180275cf0(plVar2,0,&plStackX_20,1,uVar5,plVar6,pplVar7);
  if (*(longlong *)(*param_2 + 0x1b0) == 0) {
    lVar3 = *param_2 + 0x10;
  }
  else {
    lVar3 = func_0x000180079240();
  }
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(lVar3 + 8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(lVar3 + 8);
  }
  (**(code **)(plVar2[0x3e] + 0x10))(plVar2 + 0x3e,puVar4);
  plStackX_20 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_1802edcd0(param_1,plStackX_20,param_3);
  if (plStackX_20 != (longlong *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}






// 函数: void FUN_1800ee890(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800ee890(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1802edcd0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001800ee8bf. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)*param_2 + 0x38))();
    return;
  }
  return;
}



undefined4 * FUN_1800ee8d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  _Mtx_init_in_situ(param_1 + 2,2);
  FUN_1800f9010(param_1 + 0x16,0x2000,1);
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  param_1[0x46] = 3;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  param_1[0x56] = 3;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 3;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  param_1[0x66] = 3;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  param_1[0x6e] = 3;
  _Mtx_init_in_situ(param_1 + 0x70,2);
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  param_1[0x8a] = 3;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  param_1[0x92] = 3;
  LOCK();
  param_1[0x94] = 0;
  UNLOCK();
  do {
    *(undefined8 *)(param_1 + (longlong)(int)uVar2 * 2 + 0x96) = 0;
    LOCK();
    *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar2 + 0x2a8) = 1;
    UNLOCK();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  *(undefined8 *)(param_1 + 0xae) = 0;
  puVar1 = param_1 + 0xb2;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  param_1[0xbc] = 3;
  *(undefined4 **)puVar1 = puVar1;
  *(undefined4 **)(param_1 + 0xb4) = puVar1;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xba) = 0;
  FUN_1808fc838(param_1 + 0xc2,8,0xd,&SUB_18005d5f0,FUN_180045af0);
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xde) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe2) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  FUN_1808fc838(param_1 + 0xea,8,0xd,&SUB_18005d5f0,FUN_180045af0);
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x10e) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x116) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  puVar1 = param_1 + 0x11c;
  *(undefined8 *)(param_1 + 0x122) = 0;
  param_1[0x126] = 3;
  *(undefined4 **)puVar1 = puVar1;
  *(undefined4 **)(param_1 + 0x11e) = puVar1;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x122) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x1028) = 0;
  *(undefined8 *)(param_1 + 0x102a) = 0;
  *(undefined8 *)(param_1 + 0x102c) = 0;
  puVar1 = param_1 + 0x1038;
  *(undefined8 *)(param_1 + 0x103e) = 0;
  param_1[0x1042] = 3;
  *(undefined4 **)puVar1 = puVar1;
  *(undefined4 **)(param_1 + 0x103a) = puVar1;
  *(undefined8 *)(param_1 + 0x103c) = 0;
  *(undefined1 *)(param_1 + 0x103e) = 0;
  *(undefined8 *)(param_1 + 0x1040) = 0;
  puVar1 = param_1 + 0x1044;
  *(undefined8 *)(param_1 + 0x104a) = 0;
  param_1[0x104e] = 3;
  *(undefined4 **)puVar1 = puVar1;
  *(undefined4 **)(param_1 + 0x1046) = puVar1;
  *(undefined8 *)(param_1 + 0x1048) = 0;
  *(undefined1 *)(param_1 + 0x104a) = 0;
  *(undefined8 *)(param_1 + 0x104c) = 0;
  FUN_1800f63f0(param_1 + 0x1050);
  *(undefined **)(param_1 + 0x1064) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x1066) = 0;
  param_1[0x1068] = 0;
  *(undefined **)(param_1 + 0x1064) = &UNK_180a3c3e0;
  *(undefined8 *)(param_1 + 0x106a) = 0;
  *(undefined8 *)(param_1 + 0x1066) = 0;
  param_1[0x1068] = 0;
  param_1[0xbe] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return param_1;
}






// 函数: void FUN_1800eec90(longlong *param_1)
void FUN_1800eec90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_1800f89b0();
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1800eecb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800eecb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800f7260(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800eece0(longlong param_1)
void FUN_1800eece0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))();
  }
  FUN_1808fc8a8(param_1,8,0xd,FUN_180045af0);
  return;
}






// 函数: void FUN_1800eed80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800eed80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800f7320(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800eedb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800eedb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800f74f0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800eede0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800eede0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800f7260(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800eee10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800eee10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800f7320(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1800eee40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800eee40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1800f74f0(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




