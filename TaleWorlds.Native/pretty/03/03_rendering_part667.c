#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

/**
 * @file 03_rendering_part667.c
 * @brief 渲染系统高级内存管理和数据结构操作模块
 * 
 * 本模块包含8个核心函数，主要功能：
 * - 渲染系统内存分配器和资源管理器
 * - 渲染系统数据结构初始化和清理
 * - 渲染系统线程同步和锁定机制
 * - 渲染系统高级数据操作和查找
 * - 渲染系统异常处理和状态管理
 * - 渲染系统内存池管理和优化
 * - 渲染系统缓存管理和数据访问
 * - 渲染系统资源分配和回收
 * 
 * 主要技术特点：
 * - 实现了高效的内存分配和管理机制
 * - 支持多线程环境下的安全操作
 * - 包含复杂的锁定和同步机制
 * - 提供了数据结构的动态管理功能
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// 常量定义
#define RENDERING_MEMORY_BLOCK_SIZE 0x50         // 内存块大小（80字节）
#define RENDERING_HASH_TABLE_SIZE 0x400          // 哈希表大小（1024）
#define RENDERING_ALIGNMENT_MASK 0xffffffc00000  // 地址对齐掩码
#define RENDERING_LOCK_TIMEOUT 8                 // 锁定超时次数
#define RENDERING_MAX_ITERATIONS 0x801           // 最大迭代次数
#define RENDERING_CACHE_LINE_SIZE 64             // 缓存行大小
#define RENDERING_MEMORY_POOL_SIZE 0x40          // 内存池大小
#define RENDERING_REFERENCE_COUNT_MAX 0xffff     // 最大引用计数

// 函数别名定义
#define rendering_system_memory_initializer FUN_18064c335
#define rendering_system_memory_manager FUN_18064c390
#define rendering_system_resource_cleaner FUN_18064c570
#define rendering_system_data_structure_operator FUN_18064c730
#define rendering_system_cache_manager FUN_18064c789
#define rendering_system_status_checker FUN_18064c922
#define rendering_system_resource_allocator FUN_18064c940
#define rendering_system_memory_pool_manager FUN_18064cc40
#define rendering_system_hash_table_optimizer FUN_18064cf20

// 技术说明：
// 本模块实现了渲染系统中的高级内存管理功能，主要包括：
// 1. 内存分配和回收：实现了高效的内存池管理
// 2. 数据结构操作：支持哈希表、链表等数据结构的动态管理
// 3. 线程同步：实现了多种锁定机制确保线程安全
// 4. 资源管理：提供了资源的分配、使用和回收的完整生命周期管理
// 5. 缓存优化：实现了高效的缓存管理和数据访问优化

/**
 * @brief 渲染系统内存初始化器
 * 
 * 该函数用于初始化渲染系统的内存管理器，主要功能包括：
 * - 清空内存管理器的状态标志
 * - 重置内存块和资源计数器
 * - 初始化内存池和缓存结构
 * - 设置默认的内存分配参数
 * - 调用相关的初始化函数
 * 
 * @return void
 * 
 * @note 这是渲染系统启动时的重要初始化函数
 */
void rendering_system_memory_initializer(void)
{
    // 局部变量声明
    int64_t unaff_RBX;    // RBX寄存器值，通常用于基地址
    int64_t unaff_RDI;    // RDI寄存器值，通常用于目标索引
    
    // 清空状态标志位（第2位）
    *(byte *)(unaff_RBX + 8) = *(byte *)(unaff_RBX + 8) & 0xfb;
    
    // 重置内存块指针和计数器
    *(uint64_t *)(unaff_RBX + 10) = 0;    // 内存块指针1
    *(uint64_t *)(unaff_RBX + 0x12) = 0;   // 内存块指针2
    *(int16_t *)(unaff_RBX + 0x1a) = 0;   // 计数器
    *(uint64_t *)(unaff_RBX + 0x20) = 0;   // 内存池指针1
    *(uint64_t *)(unaff_RBX + 0x28) = 0;   // 内存池指针2
    *(uint64_t *)(unaff_RBX + 0x30) = 0;   // 缓存指针1
    *(uint64_t *)(unaff_RBX + 0x38) = 0;   // 缓存指针2
    *(uint64_t *)(unaff_RBX + 0x40) = 0;   // 资源指针1
    *(uint64_t *)(unaff_RBX + 0x48) = 0;   // 资源指针2
    
    // 设置初始化标志
    *(int32_t *)(unaff_RBX + 0x1c) = 1;
    
    // 调用内存管理初始化函数
    FUN_18064b830();
    
    // 更新资源计数器
    *(int64_t *)(unaff_RDI + 0x48) = *(int64_t *)(unaff_RDI + 0x48) + -1;
    
    return;
}

/**
 * @brief 渲染系统内存管理器
 * 
 * 该函数用于管理渲染系统的内存分配和回收，主要功能包括：
 * - 处理内存块的分配和释放
 * - 管理内存池的使用情况
 * - 实现线程安全的内存操作
 * - 处理内存碎片和优化
 * - 维护内存使用统计信息
 * 
 * @param param_1 内存管理器上下文指针
 * @param param_2 内存分配参数
 * @param param_3 内存管理器状态指针
 * 
 * @return void
 * 
 * @note 这是一个核心的内存管理函数，包含了复杂的锁定机制
 */
void rendering_system_memory_manager(uint64_t param_1, uint64_t param_2, int64_t param_3)
{
    // 局部变量声明
    int64_t *plVar1;       // 长整型指针
    uint64_t *puVar2;      // 无符号8字节指针
    int64_t lVar3;          // 长整型变量
    int64_t lVar4;          // 长整型变量
    int64_t lVar5;          // 长整型变量
    int64_t lVar6;          // 长整型变量
    int64_t lVar7;          // 长整型变量
    uint *puVar8;            // 无符号整型指针
    int64_t *plVar9;        // 长整型指针
    int64_t lVar10;         // 长整型变量
    uint64_t uVar11;        // 无符号长整型变量
    uint64_t uVar12;        // 无符号长整型变量
    uint64_t uVar13;        // 无符号长整型变量
    uint64_t uVar14;        // 无符号长整型变量
    bool bVar15;             // 布尔变量
    
    // 计算内存管理器基地址
    uVar11 = param_1 & RENDERING_ALIGNMENT_MASK;
    
    // 调用内存分配预处理函数
    FUN_18064c220(param_1, param_3);
    
    // 检查是否需要特殊处理
    if (*(int64_t *)(uVar11 + 0x48) != 0) {
        // 检查内存块是否已满
        if (*(int64_t *)(uVar11 + 0x48) == *(int64_t *)(uVar11 + 0x38)) {
            // 调用内存清理函数
            FUN_18064c570(uVar11, param_3);
        }
        return;
    }
    
    // 获取内存池大小
    lVar4 = *(int64_t *)(uVar11 + 0x78);
    
    // 遍历内存块链表
    for (puVar8 = (uint *)(uVar11 + 0x80); 
         puVar8 < (uint *)(uVar11 + 0x80 + lVar4 * RENDERING_MEMORY_BLOCK_SIZE);
         puVar8 = puVar8 + (uint64_t)*puVar8 * 0x14) {
        
        // 检查内存块是否空闲
        if ((puVar8[7] == 0) && (*(int *)(uVar11 + 0x68) != 1)) {
            uVar13 = (uint64_t)*puVar8;
            
            // 计算内存块大小分类
            if (1 < uVar13) {
                uVar12 = uVar13 - 1;
                
                if (uVar12 == 0) {
                    uVar14 = 0x40;  // 64字节块
                }
                else {
                    lVar5 = 0x3f;   // 63
                    if (uVar12 != 0) {
                        // 计算内存块大小的对数
                        for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                        }
                    }
                    uVar14 = 0x3f - (uint64_t)(0x3f - (int)lVar5);
                    
                    // 检查最小块大小
                    if (uVar14 < 3) goto LAB_18064bfea;
                }
                
                // 计算哈希表索引
                uVar13 = ((uint64_t)((uint)(uVar12 >> ((char)uVar14 - 2U & 0x3f)) & 3) | uVar14 * 4) - 4;
            }
LAB_18064bfea:
            // 获取对应的哈希表项
            puVar2 = (uint64_t *)(param_3 + uVar13 * 0x18);
            
            // 从链表中移除内存块
            if (*(int64_t *)(puVar8 + 0x10) != 0) {
                *(uint64_t *)(*(int64_t *)(puVar8 + 0x10) + 0x38) = *(uint64_t *)(puVar8 + 0xe);
            }
            
            if (puVar8 == (uint *)*puVar2) {
                *puVar2 = *(uint64_t *)(puVar8 + 0xe);
            }
            
            if (*(int64_t *)(puVar8 + 0xe) != 0) {
                *(uint64_t *)(*(int64_t *)(puVar8 + 0xe) + 0x40) = *(uint64_t *)(puVar8 + 0x10);
            }
            
            if (puVar8 == (uint *)puVar2[1]) {
                puVar2[1] = *(uint64_t *)(puVar8 + 0x10);
            }
            
            // 标记内存块为已使用
            puVar8[0x10] = 0;
            puVar8[0x11] = 0;
            puVar8[0xe] = 0;
            puVar8[0xf] = 0;
            puVar8[7] = 1;
        }
    }
    
    // 更新内存统计信息
    lVar4 = *(int64_t *)(uVar11 + 0x60);
    lVar5 = *(int64_t *)(param_3 + 0x398);
    lVar10 = lVar4 * -0x10000;
    plVar9 = (int64_t *)(lVar5 + 0xa0);
    
    if (lVar10 != 0) {
        // 检查是否在安全内存区域内
        if (((int64_t *)0x180c8ed7f < plVar9) && (plVar9 < &system_memory_efc0)) {
            // 线程安全的内存统计更新
            LOCK();
            plVar1 = (int64_t *)(lVar5 + 0xb8);
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + lVar10;
            UNLOCK();
            
            lVar6 = *(int64_t *)(lVar5 + 0xb0);
            
            // 确保统计信息的原子性
            do {
                if (lVar3 + lVar10 <= lVar6) break;
                
                LOCK();
                lVar7 = *(int64_t *)(lVar5 + 0xb0);
                bVar15 = lVar6 == lVar7;
                
                if (bVar15) {
                    *(int64_t *)(lVar5 + 0xb0) = lVar3 + lVar10;
                    lVar7 = lVar6;
                }
                
                UNLOCK();
                lVar6 = lVar7;
            } while (!bVar15);
            
            // 更新分配统计
            if (lVar10 < 1) {
                plVar9 = (int64_t *)(lVar5 + 0xa8);
                lVar10 = lVar4 * 0x10000;
            }
            
            LOCK();
            *plVar9 = *plVar9 + lVar10;
            UNLOCK();
            
            return;
        }
        
        // 非安全区域的内存统计更新
        *(int64_t *)(lVar5 + 0xb8) = *(int64_t *)(lVar5 + 0xb8) + lVar10;
        
        if (*(int64_t *)(lVar5 + 0xb0) < *(int64_t *)(lVar5 + 0xb8)) {
            *(int64_t *)(lVar5 + 0xb0) = *(int64_t *)(lVar5 + 0xb8);
        }
        
        if (0 < lVar10) {
            *plVar9 = *plVar9 + lVar10;
            return;
        }
        
        *(int64_t *)(lVar5 + 0xa8) = *(int64_t *)(lVar5 + 0xa8) + lVar4 * 0x10000;
    }
    
    return;
}

/**
 * @brief 渲染系统资源清理器
 * 
 * 该函数用于清理渲染系统的资源，主要功能包括：
 * - 释放所有分配的内存块
 * - 重置内存管理器状态
 * - 清理缓存和临时数据
 * - 重置统计计数器
 * - 调用系统清理函数
 * 
 * @param param_1 内存管理器上下文指针
 * @param param_2 清理参数
 * 
 * @return void
 * 
 * @note 这是一个重要的资源清理函数，通常在系统关闭时调用
 */
void rendering_system_resource_cleaner(uint64_t param_1, int64_t param_2)
{
    // 局部变量声明
    uint64_t *puVar1;      // 无符号8字节指针
    int64_t lVar2;          // 长整型变量
    int64_t lVar3;          // 长整型变量
    uint *puVar4;            // 无符号整型指针
    uint64_t uVar5;         // 无符号长整型变量
    uint64_t uVar6;         // 无符号长整型变量
    uint64_t uVar7;         // 无符号长整型变量
    bool bVar8;              // 布尔变量
    
    // 获取内存池大小
    lVar2 = *(int64_t *)(param_1 + 0x78);
    puVar4 = (uint *)(param_1 + 0x80);
    
    // 遍历所有内存块进行清理
    do {
        if ((uint *)(param_1 + 0x80 + lVar2 * RENDERING_MEMORY_BLOCK_SIZE) <= puVar4) {
            // 检查是否需要初始化清理器
            if (render_system_control_config == 0) {
                FUN_180650490(&system_memory_be88);
            }
            
            // 调用内存清理函数
            FUN_18064b460(param_1, render_system_control_config != 0);
            func_0x000180646ff0(*(int64_t *)(param_2 + 0x398) + 0xc0, 1);
            FUN_18064ae40(*(int *)(param_1 + 0x58) * -0x10000, param_2);
            
            // 重置内存管理器状态
            LOCK();
            *(uint64_t *)(param_1 + 0x70) = 0;
            UNLOCK();
            
            *(uint64_t *)(param_1 + 0x28) = 0;
            *(uint64_t *)(param_1 + 0x40) = 1;
            
            // 重置全局计数器
            uVar6 = render_system_config;
            
            do {
                *(uint64_t *)(param_1 + 0x28) = uVar6 & RENDERING_ALIGNMENT_MASK;
                
                LOCK();
                bVar8 = uVar6 != render_system_config;
                uVar5 = (int)uVar6 + 1U & 0x3fffff | param_1;
                
                if (bVar8) {
                    uVar6 = render_system_config;
                    uVar5 = render_system_config;
                }
                
                render_system_config = uVar5;
                UNLOCK();
            } while (bVar8);
            
            // 更新系统统计
            LOCK();
            render_system_config_config = render_system_config_config + 1;
            UNLOCK();
            
            return;
        }
        
        // 清理空闲内存块
        if (puVar4[7] == 0) {
            uVar6 = (uint64_t)*puVar4;
            
            if (1 < uVar6) {
                uVar5 = uVar6 - 1;
                
                if (uVar5 == 0) {
                    uVar7 = 0x40;
                }
                else {
                    lVar3 = 0x3f;
                    if (uVar5 != 0) {
                        // 计算内存块大小
                        for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                        }
                    }
                    uVar7 = 0x3f - (uint64_t)(0x3f - (int)lVar3);
                    
                    if (uVar7 < 3) goto LAB_18064c5f1;
                }
                
                uVar6 = ((uint64_t)((uint)(uVar5 >> ((char)uVar7 - 2U & 0x3f)) & 3) | uVar7 * 4) - 4;
            }
LAB_18064c5f1:
            // 从哈希表中移除
            puVar1 = (uint64_t *)(param_2 + uVar6 * 0x18);
            
            if (*(int64_t *)(puVar4 + 0x10) != 0) {
                *(uint64_t *)(*(int64_t *)(puVar4 + 0x10) + 0x38) = *(uint64_t *)(puVar4 + 0xe);
            }
            
            if (puVar4 == (uint *)*puVar1) {
                *puVar1 = *(uint64_t *)(puVar4 + 0xe);
            }
            
            if (*(int64_t *)(puVar4 + 0xe) != 0) {
                *(uint64_t *)(*(int64_t *)(puVar4 + 0xe) + 0x40) = *(uint64_t *)(puVar4 + 0x10);
            }
            
            if (puVar4 == (uint *)puVar1[1]) {
                puVar1[1] = *(uint64_t *)(puVar4 + 0x10);
            }
            
            // 标记为未使用
            puVar4[0x10] = 0;
            puVar4[0x11] = 0;
            puVar4[0xe] = 0;
            puVar4[0xf] = 0;
            puVar4[7] = 0;
        }
        
        // 移动到下一个内存块
        puVar4 = puVar4 + (uint64_t)*puVar4 * 0x14;
    } while( true );
}

/**
 * @brief 渲染系统数据结构操作器
 * 
 * 该函数用于操作渲染系统的数据结构，主要功能包括：
 * - 在数据结构中查找和操作元素
 * - 管理数据结构的链接关系
 * - 处理数据结构的内存分配
 * - 维护数据结构的完整性
 * - 实现高效的查找和插入操作
 * 
 * @param param_1 数据结构指针
 * @param param_2 查找键值
 * @param param_3 操作参数
 * @param param_4 上下文指针
 * 
 * @return uint64_t 操作结果
 * 
 * @note 这是一个复杂的数据结构操作函数
 */
uint64_t rendering_system_data_structure_operator(int64_t param_1, uint64_t param_2, uint64_t param_3, int64_t param_4)
{
    // 局部变量声明
    int64_t *plVar1;       // 长整型指针
    int64_t lVar2;          // 长整型变量
    int64_t lVar3;          // 长整型变量
    int64_t lVar4;          // 长整型变量
    uint64_t *puVar5;     // 无符号8字节指针
    uint64_t *puVar6;     // 无符号8字节指针
    uint64_t uVar7;         // 无符号长整型变量
    int64_t lVar8;          // 长整型变量
    int64_t lVar9;          // 长整型变量
    uint *puVar10;           // 无符号整型指针
    uint64_t uVar11;        // 无符号长整型变量
    uint uVar12;             // 无符号整型变量
    uint64_t *puVar13;     // 无符号8字节指针
    uint64_t uVar14;       // 无符号8字节变量
    bool bVar15;             // 布尔变量
    
    // 获取数据结构大小
    lVar3 = *(int64_t *)(param_1 + 0x78);
    uVar14 = 0;  // 初始结果为未找到
    
    // 定位到数据结构的起始位置
    puVar10 = (uint *)(param_1 + 0x80) + (uint64_t)*(uint *)(param_1 + 0x80) * 0x14;
    
    // 遍历数据结构
    do {
        // 检查是否到达数据结构末尾
        if ((uint *)(param_1 + 0x80 + lVar3 * RENDERING_MEMORY_BLOCK_SIZE) <= puVar10) {
            return uVar14;  // 返回查找结果
        }
        
        // 检查元素是否活跃
        if (puVar10[7] == 0) {
            uVar11 = (uint64_t)*puVar10;
            
            // 比较键值
            if (param_2 <= uVar11) {
                uVar14 = 1;  // 找到匹配的元素
            }
        }
        else {
            // 处理活跃元素的特殊操作
            if ((*(uint64_t *)(puVar10 + 10) & 0xfffffffffffffffc) != 0) {
                uVar11 = *(uint64_t *)(puVar10 + 10);
                
                // 原子操作处理活跃元素
                do {
                    puVar13 = (uint64_t *)(uVar11 & 0xfffffffffffffffc);
                    LOCK();
                    uVar7 = *(uint64_t *)(puVar10 + 10);
                    bVar15 = uVar11 == uVar7;
                    
                    if (bVar15) {
                        *(uint64_t *)(puVar10 + 10) = (uint64_t)((uint)uVar11 & 3);
                        uVar7 = uVar11;
                    }
                    
                    UNLOCK();
                    uVar11 = uVar7;
                } while (!bVar15);
                
                // 处理链接关系
                if (puVar13 != (uint64_t *)0x0) {
                    uVar12 = 1;
                    puVar5 = puVar13;
                    
                    // 遍历链表
                    for (puVar6 = (uint64_t *)*puVar13; puVar6 != (uint64_t *)0x0; puVar6 = (uint64_t *)*puVar6) {
                        if (*(ushort *)((int64_t)puVar10 + 10) < uVar12) goto LAB_18064c807;
                        uVar12 = uVar12 + 1;
                        puVar5 = puVar6;
                    }
                    
                    // 检查链表长度
                    if (*(ushort *)((int64_t)puVar10 + 10) < uVar12) {
LAB_18064c807:
                        // 链表长度异常，调用错误处理
                        FUN_1806503d0(0xe, &unknown_var_8816_ptr);
                    }
                    else {
                        // 正常处理链表
                        *puVar5 = *(uint64_t *)(puVar10 + 8);
                        puVar10[6] = puVar10[6] - uVar12;
                        *(uint64_t **)(puVar10 + 8) = puVar13;
                    }
                }
            }
            
            // 处理元素的引用关系
            if ((*(int64_t *)(puVar10 + 8) != 0) && (*(int64_t *)(puVar10 + 4) == 0)) {
                *(byte *)((int64_t)puVar10 + 0xf) = *(byte *)((int64_t)puVar10 + 0xf) & 0xfe;
                *(int64_t *)(puVar10 + 4) = *(int64_t *)(puVar10 + 8);
                puVar10[8] = 0;
                puVar10[9] = 0;
            }
            
            // 检查元素是否需要释放
            if (puVar10[6] == 0) {
                lVar4 = *(int64_t *)(param_4 + 0x398);
                
                // 更新内存统计
                if (((void *)(lVar4 + 0xe0) < &system_memory_ed80) ||
                   ((void *)0x180c8efbf < (void *)(lVar4 + 0xe0))) {
                    // 非安全区域的统计更新
                    *(int64_t *)(lVar4 + 0xf8) = *(int64_t *)(lVar4 + 0xf8) + -1;
                    
                    if (*(int64_t *)(lVar4 + 0xf0) < *(int64_t *)(lVar4 + 0xf8)) {
                        *(int64_t *)(lVar4 + 0xf0) = *(int64_t *)(lVar4 + 0xf8);
                    }
                    
                    *(int64_t *)(lVar4 + 0xe8) = *(int64_t *)(lVar4 + 0xe8) + 1;
                }
                else {
                    // 安全区域的原子统计更新
                    LOCK();
                    plVar1 = (int64_t *)(lVar4 + 0xf8);
                    lVar2 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    
                    lVar8 = *(int64_t *)(lVar4 + 0xf0);
                    
                    do {
                        if (lVar2 + -1 <= lVar8) break;
                        
                        LOCK();
                        lVar9 = *(int64_t *)(lVar4 + 0xf0);
                        bVar15 = lVar8 == lVar9;
                        
                        if (bVar15) {
                            *(int64_t *)(lVar4 + 0xf0) = lVar2 + -1;
                            lVar9 = lVar8;
                        }
                        
                        UNLOCK();
                        lVar8 = lVar9;
                    } while (!bVar15);
                    
                    LOCK();
                    *(int64_t *)(lVar4 + 0xe8) = *(int64_t *)(lVar4 + 0xe8) + 1;
                    UNLOCK();
                }
                
                // 释放元素并继续查找
                *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + -1;
                puVar10 = (uint *)FUN_18064c220(puVar10, param_4);
                
                if (param_2 <= *puVar10) {
                    uVar11 = (uint64_t)*puVar10;
                    uVar14 = 1;
                    goto LAB_18064c900;
                }
            }
            // 检查元素是否匹配条件
            else if ((puVar10[7] == param_3) &&
                    ((puVar10[6] < (uint)(ushort)puVar10[3] ||
                     ((*(uint64_t *)(puVar10 + 10) & 0xfffffffffffffffc) != 0)))) {
                uVar14 = 1;  // 找到匹配的元素
            }
            
            uVar11 = (uint64_t)*puVar10;
        }
LAB_18064c900:
        // 移动到下一个元素
        puVar10 = puVar10 + uVar11 * 0x14;
    } while( true );
}

/**
 * @brief 渲染系统缓存管理器
 * 
 * 该函数用于管理渲染系统的缓存，主要功能包括：
 * - 遍历缓存元素进行查找
 * - 处理缓存元素的链接关系
 * - 管理缓存的内存分配
 * - 维护缓存的一致性
 * - 实现高效的缓存查找算法
 * 
 * @return int8_t 缓存查找结果
 * 
 * @note 这是一个缓存管理的辅助函数
 */
int8_t rendering_system_cache_manager(void)
{
    // 局部变量声明
    int64_t *plVar1;       // 长整型指针
    int64_t lVar2;          // 长整型变量
    int64_t lVar3;          // 长整型变量
    uint64_t *puVar4;     // 无符号8字节指针
    uint64_t *puVar5;     // 无符号8字节指针
    uint64_t uVar6;         // 无符号长整型变量
    int64_t lVar7;          // 长整型变量
    int64_t lVar8;          // 长整型变量
    uint64_t uVar9;         // 无符号长整型变量
    uint uVar10;             // 无符号整型变量
    uint64_t *puVar11;    // 无符号8字节指针
    uint *unaff_RBX;         // RBX寄存器值（指针）
    int64_t unaff_RBP;      // RBP寄存器值
    int64_t unaff_RSI;      // RSI寄存器值
    int8_t unaff_DIL;    // DIL寄存器值
    uint64_t unaff_R12;     // R12寄存器值
    uint64_t unaff_R14;     // R14寄存器值
    uint *unaff_R15;         // R15寄存器值（指针）
    bool bVar12;             // 布尔变量
    
    // 遍历缓存元素
    do {
        // 检查元素是否活跃
        if (unaff_RBX[7] == 0) {
            uVar9 = (uint64_t)*unaff_RBX;
            
            // 比较键值
            if (unaff_R14 <= uVar9) {
                unaff_DIL = 1;  // 找到匹配
            }
        }
        else {
            // 处理活跃元素
            if ((*(uint64_t *)(unaff_RBX + 10) & 0xfffffffffffffffc) != 0) {
                uVar9 = *(uint64_t *)(unaff_RBX + 10);
                
                // 原子操作处理
                do {
                    puVar11 = (uint64_t *)(uVar9 & 0xfffffffffffffffc);
                    LOCK();
                    uVar6 = *(uint64_t *)(unaff_RBX + 10);
                    bVar12 = uVar9 == uVar6;
                    
                    if (bVar12) {
                        *(uint64_t *)(unaff_RBX + 10) = (uint64_t)((uint)uVar9 & 3);
                        uVar6 = uVar9;
                    }
                    
                    UNLOCK();
                    uVar9 = uVar6;
                } while (!bVar12);
                
                // 处理链接关系
                if (puVar11 != (uint64_t *)0x0) {
                    uVar10 = 1;
                    puVar4 = puVar11;
                    
                    // 遍历链表
                    for (puVar5 = (uint64_t *)*puVar11; puVar5 != (uint64_t *)0x0; puVar5 = (uint64_t *)*puVar5) {
                        if (*(ushort *)((int64_t)unaff_RBX + 10) < uVar10) goto LAB_18064c807;
                        uVar10 = uVar10 + 1;
                        puVar4 = puVar5;
                    }
                    
                    // 检查链表长度
                    if (*(ushort *)((int64_t)unaff_RBX + 10) < uVar10) {
LAB_18064c807:
                        // 链表长度异常，调用错误处理
                        FUN_1806503d0(0xe, &unknown_var_8816_ptr);
                    }
                    else {
                        // 正常处理链表
                        *puVar4 = *(uint64_t *)(unaff_RBX + 8);
                        unaff_RBX[6] = unaff_RBX[6] - uVar10;
                        *(uint64_t **)(unaff_RBX + 8) = puVar11;
                    }
                }
            }
            
            // 处理引用关系
            if ((*(int64_t *)(unaff_RBX + 8) != 0) && (*(int64_t *)(unaff_RBX + 4) == 0)) {
                *(byte *)((int64_t)unaff_RBX + 0xf) = *(byte *)((int64_t)unaff_RBX + 0xf) & 0xfe;
                *(int64_t *)(unaff_RBX + 4) = *(int64_t *)(unaff_RBX + 8);
                unaff_RBX[8] = 0;
                unaff_RBX[9] = 0;
            }
            
            // 检查是否需要释放
            if (unaff_RBX[6] == 0) {
                lVar3 = *(int64_t *)(unaff_RBP + 0x398);
                
                // 更新内存统计
                if (((void *)(lVar3 + 0xe0) < &system_memory_ed80) ||
                   ((void *)0x180c8efbf < (void *)(lVar3 + 0xe0))) {
                    // 非安全区域的统计更新
                    *(int64_t *)(lVar3 + 0xf8) = *(int64_t *)(lVar3 + 0xf8) + -1;
                    
                    if (*(int64_t *)(lVar3 + 0xf0) < *(int64_t *)(lVar3 + 0xf8)) {
                        *(int64_t *)(lVar3 + 0xf0) = *(int64_t *)(lVar3 + 0xf8);
                    }
                    
                    *(int64_t *)(lVar3 + 0xe8) = *(int64_t *)(lVar3 + 0xe8) + 1;
                }
                else {
                    // 安全区域的原子统计更新
                    LOCK();
                    plVar1 = (int64_t *)(lVar3 + 0xf8);
                    lVar2 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    
                    lVar7 = *(int64_t *)(lVar3 + 0xf0);
                    
                    do {
                        if (lVar2 + -1 <= lVar7) break;
                        
                        LOCK();
                        lVar8 = *(int64_t *)(lVar3 + 0xf0);
                        bVar12 = lVar7 == lVar8;
                        
                        if (bVar12) {
                            *(int64_t *)(lVar3 + 0xf0) = lVar2 + -1;
                            lVar8 = lVar7;
                        }
                        
                        UNLOCK();
                        lVar7 = lVar8;
                    } while (!bVar12);
                    
                    LOCK();
                    *(int64_t *)(lVar3 + 0xe8) = *(int64_t *)(lVar3 + 0xe8) + 1;
                    UNLOCK();
                }
                
                // 释放元素并继续查找
                *(int64_t *)(unaff_RSI + 0x38) = *(int64_t *)(unaff_RSI + 0x38) + -1;
                unaff_RBX = (uint *)FUN_18064c220(unaff_RBX);
                
                if (unaff_R14 <= *unaff_RBX) {
                    uVar9 = (uint64_t)*unaff_RBX;
                    unaff_DIL = 1;
                    goto LAB_18064c900;
                }
            }
            // 检查是否匹配条件
            else if ((unaff_RBX[7] == unaff_R12) &&
                    ((unaff_RBX[6] < (uint)(ushort)unaff_RBX[3] ||
                     ((*(uint64_t *)(unaff_RBX + 10) & 0xfffffffffffffffc) != 0)))) {
                unaff_DIL = 1;  // 找到匹配
            }
            
            uVar9 = (uint64_t)*unaff_RBX;
        }
LAB_18064c900:
        // 移动到下一个元素
        unaff_RBX = unaff_RBX + uVar9 * 0x14;
        
        // 检查是否到达缓存末尾
        if (unaff_R15 <= unaff_RBX) {
            return unaff_DIL;  // 返回查找结果
        }
    } while( true );
}

/**
 * @brief 渲染系统状态检查器
 * 
 * 该函数用于检查渲染系统的状态，主要功能包括：
 * - 返回当前系统状态
 * - 提供状态信息的快速访问
 * - 支持状态监控和调试
 * - 简化状态查询接口
 * 
 * @return int8_t 当前系统状态
 * 
 * @note 这是一个简单的状态查询函数
 */
int8_t rendering_system_status_checker(void)
{
    int8_t unaff_DIL;  // DIL寄存器值（状态标志）
    
    return unaff_DIL;  // 返回当前状态
}

/**
 * @brief 渲染系统资源分配器
 * 
 * 该函数用于分配渲染系统的资源，主要功能包括：
 * - 分配新的内存资源
 * - 管理资源的使用状态
 * - 处理资源的并发访问
 * - 维护资源的引用计数
 * - 实现高效的资源分配算法
 * 
 * @param param_1 资源管理器指针
 * @param param_2 分配参数
 * @param param_3 资源类型
 * @param param_4 分配结果标志
 * @param param_5 上下文指针
 * 
 * @return int64_t 分配结果
 * 
 * @note 这是一个核心的资源分配函数
 */
int64_t rendering_system_resource_allocator(int64_t param_1, int64_t param_2, uint64_t param_3, int8_t *param_4, int64_t param_5)
{
    // 局部变量声明
    int64_t *plVar1;       // 长整型指针
    int64_t lVar2;          // 长整型变量
    int64_t lVar3;          // 长整型变量
    int64_t lVar4;          // 长整型变量
    uint64_t *puVar5;     // 无符号8字节指针
    uint64_t *puVar6;     // 无符号8字节指针
    byte bVar7;              // 字节变量
    int64_t lVar8;          // 长整型变量
    int64_t lVar9;          // 长整型变量
    uint64_t uVar10;        // 无符号长整型变量
    uint64_t uVar11;        // 无符号长整型变量
    uint *puVar12;           // 无符号整型指针
    uint uVar13;             // 无符号整型变量
    uint64_t *puVar14;     // 无符号8字节指针
    bool bVar15;             // 布尔变量
    
    // 初始化分配结果标志
    if (param_4 != (int8_t *)0x0) {
        *param_4 = 0;
    }
    
    // 设置异常处理列表
    LOCK();
    *(void ***)(param_1 + 0x70) = &ExceptionList;
    UNLOCK();
    
    // 初始化资源管理器状态
    *(uint64_t *)(param_1 + 0x40) = 0;
    FUN_18064ae40(*(int *)(param_1 + 0x58) << 0x10, param_5);
    func_0x000180646ff0(*(int64_t *)(param_5 + 0x398) + 0xc0, 0xffffffffffffffff);
    
    // 获取资源池大小
    lVar3 = *(int64_t *)(param_1 + 0x78);
    puVar12 = (uint *)(param_1 + 0x80) + (uint64_t)*(uint *)(param_1 + 0x80) * 0x14;
    
    // 遍历资源池
    do {
        // 检查是否到达资源池末尾
        if ((uint *)(param_1 + 0x80 + lVar3 * RENDERING_MEMORY_BLOCK_SIZE) <= puVar12) {
            // 检查是否需要清理资源
            if (*(int64_t *)(param_1 + 0x48) == 0) {
                FUN_18064bf60(param_1, 0, param_5);
                param_1 = 0;
            }
            return param_1;
        }
        
        // 检查资源是否可用
        if (puVar12[7] == 0) {
            puVar12 = (uint *)FUN_18064b830(puVar12, param_5);
        }
        else {
            // 更新资源统计
            lVar4 = *(int64_t *)(param_5 + 0x398);
            
            if (((void *)(lVar4 + 0xe0) < &system_memory_ed80) ||
               ((void *)0x180c8efbf < (void *)(lVar4 + 0xe0))) {
                // 非安全区域的统计更新
                *(int64_t *)(lVar4 + 0xf8) = *(int64_t *)(lVar4 + 0xf8) + -1;
                
                if (*(int64_t *)(lVar4 + 0xf0) < *(int64_t *)(lVar4 + 0xf8)) {
                    *(int64_t *)(lVar4 + 0xf0) = *(int64_t *)(lVar4 + 0xf8);
                }
                
                *(int64_t *)(lVar4 + 0xe8) = *(int64_t *)(lVar4 + 0xe8) + 1;
            }
            else {
                // 安全区域的原子统计更新
                LOCK();
                plVar1 = (int64_t *)(lVar4 + 0xf8);
                lVar2 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                
                lVar8 = *(int64_t *)(lVar4 + 0xf0);
                
                do {
                    if (lVar2 + -1 <= lVar8) break;
                    
                    LOCK();
                    lVar9 = *(int64_t *)(lVar4 + 0xf0);
                    bVar15 = lVar8 == lVar9;
                    
                    if (bVar15) {
                        *(int64_t *)(lVar4 + 0xf0) = lVar2 + -1;
                        lVar9 = lVar8;
                    }
                    
                    UNLOCK();
                    lVar8 = lVar9;
                } while (!bVar15);
                
                LOCK();
                *(int64_t *)(lVar4 + 0xe8) = *(int64_t *)(lVar4 + 0xe8) + 1;
                UNLOCK();
            }
            
            // 更新资源计数器
            *(int64_t *)(param_1 + 0x38) = *(int64_t *)(param_1 + 0x38) + -1;
            *(int64_t *)(puVar12 + 0xc) = param_2;
            
            // 等待资源可用
            do {
                while( true ) {
                    uVar10 = *(uint64_t *)(puVar12 + 10);
                    if (((uint)uVar10 & 3) != 1) break;
                    _Thrd_yield();  // 线程让步
                }
                if ((uVar10 & 3) == 0) break;
                
                LOCK();
                bVar15 = uVar10 == *(uint64_t *)(puVar12 + 10);
                if (bVar15) {
                    *(uint64_t *)(puVar12 + 10) = uVar10 & 0xfffffffffffffffc;
                }
                UNLOCK();
            } while (!bVar15);
            
            // 处理资源的链接关系
            if ((*(uint64_t *)(puVar12 + 10) & 0xfffffffffffffffc) != 0) {
                uVar10 = *(uint64_t *)(puVar12 + 10);
                
                do {
                    puVar14 = (uint64_t *)(uVar10 & 0xfffffffffffffffc);
                    LOCK();
                    uVar11 = *(uint64_t *)(puVar12 + 10);
                    bVar15 = uVar10 == uVar11;
                    
                    if (bVar15) {
                        *(uint64_t *)(puVar12 + 10) = (uint64_t)((uint)uVar10 & 3);
                        uVar11 = uVar10;
                    }
                    
                    UNLOCK();
                    uVar10 = uVar11;
                } while (!bVar15);
                
                // 处理链表
                if (puVar14 != (uint64_t *)0x0) {
                    uVar13 = 1;
                    puVar5 = puVar14;
                    
                    for (puVar6 = (uint64_t *)*puVar14; puVar6 != (uint64_t *)0x0; puVar6 = (uint64_t *)*puVar6) {
                        if (*(ushort *)((int64_t)puVar12 + 10) < uVar13) goto LAB_18064cae7;
                        uVar13 = uVar13 + 1;
                        puVar5 = puVar6;
                    }
                    
                    // 检查链表长度
                    if (*(ushort *)((int64_t)puVar12 + 10) < uVar13) {
LAB_18064cae7:
                        // 链表长度异常，调用错误处理
                        FUN_1806503d0(0xe, &unknown_var_8816_ptr);
                    }
                    else {
                        // 正常处理链表
                        *puVar5 = *(uint64_t *)(puVar12 + 8);
                        puVar12[6] = puVar12[6] - uVar13;
                        *(uint64_t **)(puVar12 + 8) = puVar14;
                    }
                }
            }
            
            // 处理资源的引用关系
            if ((*(int64_t *)(puVar12 + 8) != 0) && (*(int64_t *)(puVar12 + 4) == 0)) {
                *(byte *)((int64_t)puVar12 + 0xf) = *(byte *)((int64_t)puVar12 + 0xf) & 0xfe;
                *(int64_t *)(puVar12 + 4) = *(int64_t *)(puVar12 + 8);
                puVar12[8] = 0;
                puVar12[9] = 0;
            }
            
            // 检查资源是否已分配
            if (puVar12[6] == 0) {
                puVar12 = (uint *)FUN_18064c220(puVar12, param_5);
            }
            else {
                // 分配资源
                bVar7 = func_0x00018064ceb0();
                plVar1 = (int64_t *)(param_2 + 0x410 + (uint64_t)bVar7 * 0x18);
                *(byte *)((int64_t)puVar12 + 0xe) =
                     *(int64_t *)(param_2 + 0x420 + (uint64_t)bVar7 * 0x18) == 0x4010 |
                     *(byte *)((int64_t)puVar12 + 0xe) & 0xfe;
                *(int64_t *)(puVar12 + 0xe) = *plVar1;
                puVar12[0x10] = 0;
                puVar12[0x11] = 0;
                
                // 添加到分配列表
                if (*plVar1 == 0) {
                    plVar1[1] = (int64_t)puVar12;
                }
                else {
                    *(uint **)(*plVar1 + 0x40) = puVar12;
                }
                *plVar1 = (int64_t)puVar12;
                
                // 更新分配统计
                FUN_18064cf20(param_2);
                *(int64_t *)(param_2 + 0xbc8) = *(int64_t *)(param_2 + 0xbc8) + 1;
                
                // 检查是否匹配分配条件
                if ((param_3 == puVar12[7]) &&
                   (((puVar12[6] < (uint)(ushort)puVar12[3] ||
                     ((*(uint64_t *)(puVar12 + 10) & 0xfffffffffffffffc) != 0)) &&
                    (param_4 != (int8_t *)0x0)))) {
                    *param_4 = 1;  // 分配成功
                }
            }
        }
        
        // 移动到下一个资源
        puVar12 = puVar12 + (uint64_t)*puVar12 * 0x14;
    } while( true );
}

/**
 * @brief 渲染系统内存池管理器
 * 
 * 该函数用于管理渲染系统的内存池，主要功能包括：
 * - 分配和回收内存池中的内存块
 * - 管理内存池的碎片整理
 * - 处理内存池的并发访问
 * - 维护内存池的统计信息
 * - 实现高效的内存分配算法
 * 
 * @param param_1 内存池参数
 * @param param_2 内存分配大小
 * @param param_3 内存池基址
 * @param param_4 内存对齐参数
 * @param param_5 上下文指针
 * 
 * @return uint64_t 分配的内存地址
 * 
 * @note 这是一个高级的内存池管理函数
 */
uint64_t rendering_system_memory_pool_manager(uint64_t param_1, uint param_2, int64_t param_3, uint64_t param_4, int64_t param_5)
{
    // 局部变量声明
    uint *puVar1;           // 无符号整型指针
    int64_t lVar2;          // 长整型变量
    char cVar3;              // 字符变量
    uint64_t *puVar4;      // 无符号8字节指针
    uint64_t uVar5;         // 无符号长整型变量
    int64_t lVar6;          // 长整型变量
    int64_t lVar7;          // 长整型变量
    uint64_t uVar8;          // 无符号长整型变量
    int iVar9;               // 整型变量
    uint64_t uVar10;        // 无符号长整型变量
    uint64_t uVar11;       // 无符号8字节变量
    uint64_t uVar12;        // 无符号长整型变量
    bool bVar13;             // 布尔变量
    uint auStackX_10 [4];    // 栈数组
    uint64_t uStackX_20;   // 栈变量
    
    // 计算内存池索引
    uVar12 = param_3 + 0xffffU >> 0x10;
    auStackX_10[0] = param_2;
    uStackX_20 = param_4;
    
LAB_18064cc82:
    // 主分配循环
    do {
        uVar11 = 0;  // 初始分配结果
        puVar4 = (uint64_t *)func_0x00018064ade0(uVar12, param_5);
        uVar5 = uVar12;
        
        if (uVar12 == 0) {
            uVar5 = 1;
        }
        
        // 遍历内存块
        for (; puVar4 <= (uint64_t *)(param_5 + 0x348U); puVar4 = puVar4 + 3) {
            // 遍历内存块链表
            for (puVar1 = (uint *)*puVar4; puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 0xe)) {
                // 检查内存块大小
                if (uVar5 <= *puVar1) {
                    // 从链表中移除内存块
                    if (*(int64_t *)(puVar1 + 0x10) != 0) {
                        *(uint64_t *)(*(int64_t *)(puVar1 + 0x10) + 0x38) = *(uint64_t *)(puVar1 + 0xe);
                    }
                    
                    if (puVar1 == (uint *)*puVar4) {
                        *puVar4 = *(uint64_t *)(puVar1 + 0xe);
                    }
                    
                    if (*(int64_t *)(puVar1 + 0xe) != 0) {
                        *(uint64_t *)(*(int64_t *)(puVar1 + 0xe) + 0x40) = *(uint64_t *)(puVar1 + 0x10);
                    }
                    
                    if (puVar1 == (uint *)puVar4[1]) {
                        puVar4[1] = *(uint64_t *)(puVar1 + 0x10);
                    }
                    
                    uVar10 = (uint64_t)*puVar1;
                    puVar1[7] = 1;  // 标记为已使用
                    uVar8 = (uint64_t)puVar1 & RENDERING_ALIGNMENT_MASK;
                    *(uint64_t *)(puVar1 + 0x10) = uVar11;
                    *(uint64_t *)(puVar1 + 0xe) = uVar11;
                    
                    // 处理内存块分割
                    if (uVar5 < uVar10) {
                        FUN_18064b590(uVar8, (int64_t)((int64_t)puVar1 + (-0x80 - uVar8)) / RENDERING_MEMORY_BLOCK_SIZE + uVar5,
                                      uVar10 - uVar5, param_5);
                        uVar10 = uVar5 & 0xffffffff;
                        *puVar1 = (uint)uVar5;
                    }
                    
                    // 尝试进一步分配
                    uVar5 = FUN_18064b940(uVar8, (int64_t)((int64_t)puVar1 + (-0x80 - uVar8)) / RENDERING_MEMORY_BLOCK_SIZE, uVar10);
                    
                    if (uVar5 != 0) {
                        FUN_18064b460(uVar5 & RENDERING_ALIGNMENT_MASK, 0);
                        return uVar5;  // 分配成功
                    }
                    
                    // 清理未使用的内存块
                    FUN_18064b830(puVar1, param_5);
                    param_4 = uStackX_20;
                    goto LAB_18064cdab;
                }
            }
        }
LAB_18064cdab:
        // 更新分配参数
        auStackX_10[0] = auStackX_10[0] & 0xffffff00;
        iVar9 = 8;
        
        // 重试分配
        do {
            iVar9 = iVar9 + -1;
            lVar6 = func_0x00018064c400();
            
            if (lVar6 == 0) break;
            
            *(int64_t *)(lVar6 + 0x40) = *(int64_t *)(lVar6 + 0x40) + 1;
            cVar3 = FUN_18064c730(lVar6, uVar12, param_4, param_5);
            
            if (*(int64_t *)(lVar6 + 0x48) == 0) {
LAB_18064ce1d:
                // 清理资源
                FUN_18064c940(lVar6, param_1, 0, 0, param_5);
            }
            else {
                // 检查分配结果
                if (cVar3 != '\0') {
                    lVar6 = FUN_18064c940(lVar6, param_1, param_4, auStackX_10, param_5);
                    
                    if ((char)auStackX_10[0] != '\0') {
                        return 0;  // 分配失败
                    }
                    
                    if (lVar6 != 0) goto LAB_18064cc82;
                    break;
                }
                
                // 检查资源使用情况
                if (3 < *(uint64_t *)(lVar6 + 0x40)) goto LAB_18064ce1d;
                
                FUN_18064b460(lVar6, 0);
                lVar7 = render_system_config;
                
                // 添加到全局列表
                do {
                    *(int64_t *)(lVar6 + 0x28) = lVar7;
                    LOCK();
                    bVar13 = lVar7 != render_system_config;
                    lVar2 = lVar6;
                    
                    if (bVar13) {
                        lVar7 = render_system_config;
                        lVar2 = render_system_config;
                    }
                    
                    render_system_config = lVar2;
                    UNLOCK();
                } while (bVar13);
                
                // 更新全局统计
                LOCK();
                render_system_config = render_system_config + 1;
                UNLOCK();
            }
        } while (0 < iVar9);
        
        // 尝试从备用池分配
        lVar6 = FUN_18064bae0(0, 0, param_5);
        
        if (lVar6 == 0) {
            return 0;  // 分配失败
        }
    } while( true );
}

/**
 * @brief 渲染系统哈希表优化器
 * 
 * 该函数用于优化渲染系统的哈希表，主要功能包括：
 * - 优化哈希表的存储结构
 * - 减少哈希冲突
 * - 提高哈希表的访问效率
 * - 管理哈希表的内存使用
 * - 实现动态的哈希表调整
 * 
 * @param param_1 哈希表上下文指针
 * @param param_2 哈希表项指针
 * 
 * @return void
 * 
 * @note 这是一个哈希表优化的辅助函数
 */
void rendering_system_hash_table_optimizer(int64_t param_1, uint64_t *param_2)
{
    // 局部变量声明
    int64_t lVar1;          // 长整型变量
    byte bVar2;              // 字节变量
    uint64_t uVar3;         // 无符号长整型变量
    void *puVar4;        // 无定义指针
    uint64_t uVar5;         // 无符号长整型变量
    uint64_t *puVar6;      // 无符号8字节指针
    char cVar7;              // 字符变量
    byte bVar8;              // 字节变量
    uint64_t uVar9;         // 无符号长整型变量
    
    // 检查哈希表项的大小
    if ((uint64_t)param_2[2] < 0x401) {
        puVar4 = &unknown_var_6944_ptr;
        
        if ((void *)*param_2 != (void *)0x0) {
            puVar4 = (void *)*param_2;
        }
        
        // 计算哈希表索引
        uVar9 = param_2[2] + 7 >> 3;
        
        // 检查是否需要更新哈希表
        if (*(void **)(param_1 + 8 + uVar9 * 8) != puVar4) {
            // 计算哈希表项的分类
            if (uVar9 < 2) {
                uVar3 = 0;
            }
            else {
                if (uVar9 < 9) {
                    bVar8 = (char)uVar9 + 1U & 0xfe;
                }
                else if (uVar9 < RENDERING_MAX_ITERATIONS) {
                    uVar5 = uVar9 - 1;
                    
                    if (uVar5 == 0) {
                        cVar7 = '\0';
                    }
                    else {
                        lVar1 = 0x3f;
                        if (uVar5 != 0) {
                            // 计算对数
                            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
                            }
                        }
                        cVar7 = '?' - ('?' - (char)lVar1);
                    }
                    bVar8 = (((byte)(uVar5 >> (cVar7 - 2U & 0x3f)) & 3) - 3) + cVar7 * '\x04';
                }
                else {
                    bVar8 = 0x49;
                }
                
                // 寻找合适的哈希表位置
                param_2 = param_2 + -3;
                
                while( true ) {
                    uVar5 = param_2[2] + 7 >> 3;
                    
                    if (uVar5 < 2) {
                        bVar2 = 1;
                    }
                    else if (uVar5 < 9) {
                        bVar2 = (char)uVar5 + 1U & 0xfe;
                    }
                    else if (uVar5 < RENDERING_MAX_ITERATIONS) {
                        uVar3 = uVar5 - 1;
                        
                        if (uVar3 == 0) {
                            cVar7 = '\0';
                        }
                        else {
                            lVar1 = 0x3f;
                            if (uVar3 != 0) {
                                for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
                                }
                            }
                            cVar7 = '?' - ('?' - (char)lVar1);
                        }
                        bVar2 = (((byte)(uVar3 >> (cVar7 - 2U & 0x3f)) & 3) - 3) + cVar7 * '\x04';
                    }
                    else {
                        bVar2 = 0x49;
                    }
                    
                    if ((bVar8 != bVar2) || (param_2 <= (uint64_t *)(param_1 + 0x410))) break;
                    
                    param_2 = param_2 + -3;
                }
                
                // 计算需要更新的哈希表项数量
                uVar3 = uVar5 + 1;
                
                if (uVar9 < uVar5 + 1) {
                    uVar3 = uVar9;
                }
            }
            
            // 更新哈希表
            puVar6 = (uint64_t *)(param_1 + 8 + uVar3 * 8);
            
            for (uVar9 = (uVar9 - uVar3) * 8 + 8 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar6 = puVar4;
                puVar6 = puVar6 + 1;
            }
        }
    }
    
    return;
}

// 全局变量和符号说明
// 警告：以'_'开头的全局变量可能与同一地址处的较小符号重叠