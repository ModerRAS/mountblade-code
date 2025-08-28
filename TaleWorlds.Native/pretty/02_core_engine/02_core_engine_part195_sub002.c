#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part195_sub002.c - 核心引擎内存管理函数 (2个函数)

/**
 * 内存块复制函数
 * 将源内存块复制到目标位置
 * 
 * @param target_ptr 目标内存指针指针
 * @param source_ptr 源内存指针
 * @param size_ptr 包含复制大小的指针
 * 
 * 注意：此函数不返回，通常用于致命错误处理
 */
void memory_block_copy(void **target_ptr, void *source_ptr, long long *size_ptr)
{
    // WARNING: 此函数不返回
    memcpy(*(void **)(*size_ptr + 0x18), source_ptr, ((char *)source_ptr)[2]);
}

/**
 * 内存指针初始化和清理函数
 * 初始化内存指针指向全局数据，并根据标志进行清理
 * 
 * @param mem_ptr 内存指针
 * @param flags 控制标志位
 * @return 返回初始化后的内存指针
 */
void *initialize_memory_pointer(void *mem_ptr, unsigned long long flags)
{
    // 将指针指向全局数据结构
    *(void **)mem_ptr = (void *)0x180a09578;  // UNK_180a09578 全局数据结构
    
    // 如果设置了第1位标志，则释放内存
    if ((flags & 1) != 0) {
        free(mem_ptr);
    }
    
    return mem_ptr;
}