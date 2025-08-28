#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part009_sub001_sub002.c - 1 个函数

// 最大安全拷贝大小常量
#define MAX_SAFE_COPY_SIZE 0x400

/**
 * 安全拷贝并初始化内存
 * 
 * 功能：将源数据安全地拷贝到目标位置，并进行内存初始化
 * 参数：
 *   targetPtr - 目标数据结构指针
 *   sourceData - 要拷贝的源数据
 *   dataLength - 要拷贝的数据长度
 * 
 * 说明：
 * 1. 检查数据长度是否在安全范围内（小于1024字节）
 * 2. 如果安全，则执行内存拷贝操作
 * 3. 在目标位置写入字符串结束符（0字节）
 * 4. 初始化目标结构体的长度字段为0
 */
void SafeCopyAndInitializeMemory(int64_t targetPtr, uint64_t sourceData, int dataLength)
{
    // 检查数据长度是否在安全范围内
    if (dataLength + 1 < MAX_SAFE_COPY_SIZE) {
        // 执行内存拷贝操作
        memcpy(*(int8_t **)(targetPtr + 8), sourceData, (int64_t)dataLength);
    }
    
    // 在目标数据末尾写入字符串结束符
    **(int8_t **)(targetPtr + 8) = 0;
    
    // 初始化数据长度字段为0
    *(int32_t *)(targetPtr + 0x10) = 0;
    
    return;
}







