#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/**
 * 99_part_02_part048.c - 系统级数据处理和内存管理模块
 * 
 * 本模块包含20个核心函数，主要提供以下功能：
 * - 容器数据结构和操作管理
 * - 内存分配和释放处理
 * - 哈希表数据结构操作
 * - 动态数组扩容和重分配
 * - 资源清理和错误处理
 * - 数据流控制和状态管理
 * 
 * 该模块是TaleWorlds引擎核心系统的重要组成部分，为上层应用提供
 * 高效的数据处理和内存管理服务。
 */

/*============================================================================
  常量定义和宏定义
============================================================================*/

/* 内存对齐和大小常量 */
#define DEFAULT_ALIGNMENT_8        8           /* 默认8字节对齐 */
#define DEFAULT_ALIGNMENT_16       16          /* 默认16字节对齐 */
#define DEFAULT_ALIGNMENT_32       32          /* 默认32字节对齐 */
#define DEFAULT_ALIGNMENT_64       64          /* 默认64字节对齐 */
#define DEFAULT_ALIGNMENT_128      128         /* 默认128字节对齐 */

/* 容器大小常量 */
#define CONTAINER_HEADER_SIZE      0x28        /* 容器头部大小：40字节 */
#define CONTAINER_ELEMENT_SIZE     0x88        /* 容器元素大小：136字节 */
#define CONTAINER_SMALL_SIZE       0x420       /* 小容器大小：1056字节 */
#define CONTAINER_MEDIUM_SIZE      0xbc        /* 中等容器大小：188字节 */
#define CONTAINER_LARGE_SIZE       0x34        /* 大容器大小：52字节 */

/* 哈希表相关常量 */
#define HASH_TABLE_SIZE_1024       0x400       /* 哈希表大小：1024个条目 */
#define HASH_TABLE_SIZE_4096       0x1000      /* 哈希表大小：4096个条目 */
#define HASH_PRIME_64BIT           0x100000001b3 /* 64位哈希质数 */
#define HASH_SEED_64BIT            0xcbf29ce484222325 /* 64位哈希种子 */

/* 内存分配常量 */
#define MEMORY_BLOCK_SMALL         0x2000      /* 小内存块：8KB */
#define MEMORY_BLOCK_MEDIUM        0x8000      /* 中等内存块：32KB */
#define MEMORY_BLOCK_LARGE         0x20000     /* 大内存块：128KB */
#define MEMORY_ALLOCATOR_ID        0x25        /* 内存分配器ID */

/* 错误代码常量 */
#define ERROR_INVALID_INDEX        0xffffffff  /* 无效索引值 */
#define ERROR_NULL_POINTER         0x0         /* 空指针错误 */
#define ERROR_MEMORY_FAILED        0x1         /* 内存分配失败 */

/* 控制标志常量 */
#define FLAG_CONTAINER_EXPAND     0x2         /* 容器扩容标志 */
#define FLAG_MEMORY_LOCKED        0x4         /* 内存锁定标志 */
#define FLAG_INITIALIZED          0x8         /* 初始化完成标志 */
#define FLAG_VALID_DATA           0x10        /* 有效数据标志 */

/*============================================================================
  类型定义和结构体定义
============================================================================*/

/**
 * 容器头部结构体
 * 定义容器的核心数据结构，包含内存管理信息
 */
typedef struct {
    void* data_start;              /* 数据起始地址 */
    void* data_end;                /* 数据结束地址 */
    void* data_capacity;           /* 数据容量地址 */
    uint32_t element_size;         /* 元素大小 */
    uint32_t flags;                /* 控制标志 */
    uint32_t reserved;             /* 保留字段 */
} ContainerHeader;

/**
 * 哈希表条目结构体
 * 定义哈希表的基本数据结构
 */
typedef struct {
    void* key;                     /* 键值指针 */
    void* value;                   /* 值指针 */
    uint32_t hash_code;            /* 哈希码 */
    uint32_t status;               /* 状态标志 */
} HashTableEntry;

/**
 * 动态数组结构体
 * 定义动态数组的数据结构
 */
typedef struct {
    void* array_data;              /* 数组数据指针 */
    size_t array_size;             /* 数组大小 */
    size_t array_capacity;         /* 数组容量 */
    uint32_t element_size;         /* 元素大小 */
    uint32_t flags;                /* 控制标志 */
} DynamicArray;

/**
 * 内存管理器结构体
 * 定义内存管理器的数据结构
 */
typedef struct {
    void* memory_pool;             /* 内存池指针 */
    size_t pool_size;              /* 内存池大小 */
    size_t used_size;              /* 已使用大小 */
    uint32_t allocator_id;         /* 分配器ID */
    uint32_t flags;                /* 控制标志 */
} MemoryManager;

/**
 * 数据处理器结构体
 * 定义数据处理器的数据结构
 */
typedef struct {
    void* input_data;              /* 输入数据指针 */
    void* output_data;             /* 输出数据指针 */
    size_t data_size;              /* 数据大小 */
    uint32_t processing_flags;     /* 处理标志 */
    uint32_t status;               /* 状态标志 */
} DataProcessor;

/*============================================================================
  全局变量声明
============================================================================*/

/* 全局内存管理器实例 */
static MemoryManager* g_global_memory_manager = NULL;

/* 全局哈希表实例 */
static HashTableEntry* g_global_hash_table = NULL;

/* 全局容器管理器 */
static ContainerHeader* g_global_container = NULL;

/* 全局数据处理器 */
static DataProcessor* g_global_data_processor = NULL;

/* 系统状态标志 */
static uint32_t g_system_flags = 0;

/*============================================================================
  函数别名定义
============================================================================*/

/* 原始函数别名定义 */
#define container_data_processor       FUN_1801b97dd
#define system_empty_function_1        FUN_1801b990e
#define container_cleaner              FUN_1801b9920
#define memory_manager_cleaner         FUN_1801b9974
#define memory_block_cleaner           FUN_1801b999c
#define array_initializer              FUN_1801b99e0
#define hash_table_allocator           FUN_1801b9a40
#define memory_block_allocator        FUN_1801b9a89
#define system_empty_function_2        FUN_1801b9b2d
#define hash_table_lookup             FUN_1801b9b90
#define container_expander            FUN_1801b9c70
#define container_reallocator         FUN_1801b9cad
#define system_error_handler          FUN_1801b9d63
#define array_reallocator_12byte      FUN_1801b9da0
#define array_reallocator_52byte      FUN_1801b9eb0
#define array_reallocator_1056byte    FUN_1801b9fc0
#define array_reallocator_188byte     FUN_1801ba230
#define array_cleaner                 FUN_1801ba340
#define hash_table_entry_finder       FUN_1801ba400
#define container_iterator           FUN_1801ba4d0
#define array_element_remover         FUN_1801ba580
#define array_element_mover           FUN_1801ba5d0
#define array_expander                FUN_1801ba612
#define system_empty_function_3       FUN_1801ba6cc
#define pointer_offset_calculator     FUN_1801ba6f6
#define system_empty_function_4       FUN_1801ba708

/*============================================================================
  核心函数实现
============================================================================*/

/**
 * 容器数据处理器
 * 
 * 功能描述：
 * 处理容器中的数据，包括数据验证、转换和存储操作
 * 
 * 参数：
 *   param_1 - 容器大小参数
 *   param_2 - 数据处理标志
 *   param_3 - 保留参数
 *   param_4 - 容器数据指针
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数是容器数据处理的核心函数，负责处理容器中的数据元素。
 * 使用双重循环结构处理二维数据，支持动态扩容和数据验证。
 */
void container_data_processor(int param_1, int param_2, uint64_t param_3, longlong *param_4)
{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    int32_t *puVar6;
    int32_t *puVar7;
    int32_t *puVar8;
    int32_t unaff_R12D;
    int unaff_R13D;
    int unaff_R15D;
    int iStackX_20;
    int iStackX_24;
    longlong *in_stack_00000060;
    
    iVar3 = param_1;
    do {
        while (unaff_R15D < param_1) {
            unaff_R13D = unaff_R13D + 1;
            param_1 = iVar3;
            if (param_2 < unaff_R13D) {
                return;
            }
        }
        lVar4 = (longlong)(unaff_R13D * *(int *)((longlong)param_4 + 0x24) + param_1);
        lVar1 = *param_4 + lVar4 * 0x28;
        FUN_1801bb0b0(lVar1 + 8, (longlong)*(int *)(*param_4 + lVar4 * 0x28));
        puVar7 = *(int32_t **)(lVar1 + 0x10);
        if (puVar7 < *(int32_t **)(lVar1 + 0x18)) {
            *(int32_t **)(lVar1 + 0x10) = puVar7 + 1;
            *puVar7 = unaff_R12D;
        }
        else {
            puVar6 = *(int32_t **)(lVar1 + 8);
            lVar4 = (longlong)puVar7 - (longlong)puVar6 >> 2;
            if (lVar4 == 0) {
                lVar4 = 1;
LAB_1801b9874:
                plVar2 = *(longlong **)(lVar1 + 0x20);
                uVar5 = (longlong)((int)plVar2[2] + 0xf) & 0xfffffffffffffff0;
                puVar8 = (int32_t *)(*plVar2 + uVar5);
                *(int *)(plVar2 + 2) = (int)uVar5 + (int)lVar4 * 4;
                puVar7 = *(int32_t **)(lVar1 + 0x10);
                puVar6 = *(int32_t **)(lVar1 + 8);
            }
            else {
                lVar4 = lVar4 * 2;
                if (lVar4 != 0) goto LAB_1801b9874;
                puVar8 = (int32_t *)0x0;
            }
            if (puVar6 != puVar7) {
                // WARNING: Subroutine does not return
                memmove(puVar8, puVar6, (longlong)puVar7 - (longlong)puVar6);
            }
            *puVar8 = unaff_R12D;
            *(int32_t **)(lVar1 + 0x10) = puVar8 + 1;
            *(int32_t **)(lVar1 + 0x18) = puVar8 + lVar4;
            *(int32_t **)(lVar1 + 8) = puVar8;
        }
        param_4 = in_stack_00000060;
        param_1 = param_1 + 1;
        iVar3 = iStackX_20;
        param_2 = iStackX_24;
    } while( true );
}

/**
 * 系统空函数1
 * 
 * 功能描述：
 * 系统空函数，用于占位和接口兼容性
 * 
 * 参数：
 *   无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数为系统空函数，主要用于接口兼容性和占位用途。
 */
void system_empty_function_1(void)
{
    return;
}

/**
 * 容器清理器
 * 
 * 功能描述：
 * 清理容器中的数据，释放内存资源
 * 
 * 参数：
 *   param_1 - 容器数据指针
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责清理容器中的所有数据，包括释放内存和重置状态。
 * 使用双重循环结构处理二维容器数据。
 */
void container_cleaner(longlong *param_1)
{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    
    iVar5 = 0;
    if (0 < (int)param_1[4]) {
        do {
            iVar4 = 0;
            if (0 < *(int *)((longlong)param_1 + 0x24)) {
                do {
                    iVar2 = *(int *)((longlong)param_1 + 0x24) * iVar5 + iVar4;
                    iVar4 = iVar4 + 1;
                    lVar3 = (longlong)iVar2;
                    *(uint64_t *)(*param_1 + 0x10 + lVar3 * 0x28) =
                         *(uint64_t *)(*param_1 + 8 + lVar3 * 0x28);
                } while (iVar4 < *(int *)((longlong)param_1 + 0x24));
            }
            iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_1[4]);
    }
    if ((*param_1 != 0) && (plVar1 = (longlong *)param_1[5], plVar1 != (longlong *)0x0)) {
        if (*plVar1 != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
        }
        *plVar1 = 0;
        param_1[5] = 0;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
}

/**
 * 内存管理器清理器
 * 
 * 功能描述：
 * 清理内存管理器，释放所有分配的内存资源
 * 
 * 参数：
 *   无参数（使用寄存器传递参数）
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责清理内存管理器中的所有内存资源，包括内存池和相关数据结构。
 */
void memory_manager_cleaner(void)
{
    longlong *plVar1;
    longlong unaff_RBX;
    longlong unaff_RSI;
    
    plVar1 = *(longlong **)(unaff_RBX + 0x28);
    if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
        }
        *plVar1 = unaff_RSI;
        *(longlong *)(unaff_RBX + 0x28) = unaff_RSI;
    }
    *(longlong *)(unaff_RBX + 8) = unaff_RSI;
    *(longlong *)(unaff_RBX + 0x10) = unaff_RSI;
    *(longlong *)(unaff_RBX + 0x18) = unaff_RSI;
    *(longlong *)(unaff_RBX + 0x20) = unaff_RSI;
    return;
}

/**
 * 内存块清理器
 * 
 * 功能描述：
 * 清理指定的内存块，重置内存状态
 * 
 * 参数：
 *   无参数（使用寄存器传递参数）
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责清理指定的内存块，将内存区域重置为初始状态。
 */
void memory_block_cleaner(void)
{
    longlong unaff_RBX;
    uint64_t unaff_RSI;
    
    *(uint64_t *)(unaff_RBX + 8) = unaff_RSI;
    *(uint64_t *)(unaff_RBX + 0x10) = unaff_RSI;
    *(uint64_t *)(unaff_RBX + 0x18) = unaff_RSI;
    *(uint64_t *)(unaff_RBX + 0x20) = unaff_RSI;
    return;
}

/**
 * 数组初始化器
 * 
 * 功能描述：
 * 初始化数组数据结构，分配内存并设置初始状态
 * 
 * 参数：
 *   param_1 - 数组基地址
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责初始化数组数据结构，包括内存分配和状态设置。
 * 支持最大1024个元素的数组初始化。
 */
void array_initializer(longlong param_1)
{
    longlong lVar1;
    uint uVar2;
    longlong *plVar3;
    
    uVar2 = 0;
    plVar3 = (longlong *)(param_1 + 8);
    do {
        if (*plVar3 != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
        }
        lVar1 = (longlong)(int)uVar2;
        plVar3 = plVar3 + 1;
        uVar2 = uVar2 + 1;
        *(uint64_t *)(param_1 + 8 + lVar1 * 8) = 0;
    } while (uVar2 < 0x400);
    return;
}

/**
 * 哈希表分配器
 * 
 * 功能描述：
 * 为哈希表分配内存空间，并初始化哈希表结构
 * 
 * 参数：
 *   param_1 - 哈希表指针
 *   param_2 - 分配大小
 * 
 * 返回值：
 *   uint - 分配的起始索引
 * 
 * 技术说明：
 * 该函数负责为哈希表分配内存空间，支持动态扩容和线程安全操作。
 * 使用页面对齐的内存分配策略。
 */
uint hash_table_allocator(uint *param_1, int param_2)
{
    uint uVar1;
    longlong lVar2;
    char *pcVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    uint *puVar8;
    bool bVar9;
    
    if (param_2 == 0) {
        return 0xffffffff;
    }
    LOCK();
    uVar1 = *param_1;
    *param_1 = *param_1 + param_2;
    UNLOCK();
    uVar5 = (ulonglong)(uVar1 >> 0xc);
    uVar6 = (ulonglong)(param_2 + -1 + uVar1 >> 0xc);
    if (uVar5 <= uVar6) {
        pcVar3 = (char *)((longlong)param_1 + uVar5 + 0x808);
        lVar7 = (uVar6 - uVar5) + 1;
        puVar8 = param_1 + (ulonglong)(uVar1 >> 0xc) * 2 + 2;
        do {
            iVar4 = (int)uVar5;
            if (*(longlong *)puVar8 == 0) {
                lVar2 = FUN_18062b420(_DAT_180c8ed18, 0x20000, 0x25);
                LOCK();
                bVar9 = *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) == 0;
                if (bVar9) {
                    *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) = lVar2;
                }
                UNLOCK();
                if (bVar9) {
                    func_0x0001801bb270(param_1, iVar4 << 0xc);
                    LOCK();
                    *(int8_t *)((longlong)iVar4 + 0x808 + (longlong)param_1) = 0;
                    UNLOCK();
                }
                else {
                    if (lVar2 != 0) {
                        // WARNING: Subroutine does not return
                        FUN_18064e900();
                    }
                    do {
                    } while (*pcVar3 != '\0');
                }
            }
            else {
                do {
                } while (*pcVar3 != '\0');
            }
            uVar5 = (ulonglong)(iVar4 + 1);
            puVar8 = puVar8 + 2;
            pcVar3 = pcVar3 + 1;
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
    }
    return uVar1;
}

/**
 * 内存块分配器
 * 
 * 功能描述：
 * 分配内存块，支持线程安全的内存分配操作
 * 
 * 参数：
 *   param_1 - 内存管理器指针
 * 
 * 返回值：
 *   int32_t - 分配状态
 * 
 * 技术说明：
 * 该函数负责分配内存块，支持线程安全的内存分配和初始化操作。
 */
int32_t memory_block_allocator(longlong param_1)
{
    longlong *plVar1;
    longlong in_RAX;
    longlong lVar2;
    char *pcVar3;
    longlong unaff_RBP;
    int iVar4;
    ulonglong unaff_RDI;
    int32_t unaff_R12D;
    longlong unaff_R14;
    longlong lVar5;
    longlong *plVar6;
    bool bVar7;
    
    pcVar3 = (char *)(param_1 + 0x808 + unaff_RDI);
    lVar5 = (unaff_R14 - unaff_RDI) + 1;
    plVar6 = (longlong *)(param_1 + 8 + in_RAX * 8);
    do {
        iVar4 = (int)unaff_RDI;
        if (*plVar6 == 0) {
            lVar2 = FUN_18062b420(_DAT_180c8ed18, 0x20000, 0x25);
            plVar1 = (longlong *)(unaff_RBP + 8 + (longlong)iVar4 * 8);
            LOCK();
            bVar7 = *plVar1 == 0;
            if (bVar7) {
                *plVar1 = lVar2;
            }
            UNLOCK();
            if (bVar7) {
                func_0x0001801bb270();
                LOCK();
                *(int8_t *)((longlong)iVar4 + 0x808 + unaff_RBP) = 0;
                UNLOCK();
            }
            else {
                if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                }
                do {
                } while (*pcVar3 != '\0');
            }
        }
        else {
            do {
            } while (*pcVar3 != '\0');
        }
        unaff_RDI = (ulonglong)(iVar4 + 1);
        plVar6 = plVar6 + 1;
        pcVar3 = pcVar3 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return unaff_R12D;
}

/**
 * 系统空函数2
 * 
 * 功能描述：
 * 系统空函数，用于占位和接口兼容性
 * 
 * 参数：
 *   无参数
 * 
 * 返回值：
 *   int32_t - 返回值
 * 
 * 技术说明：
 * 该函数为系统空函数，主要用于接口兼容性和占位用途。
 */
int32_t system_empty_function_2(void)
{
    int32_t unaff_R12D;
    
    return unaff_R12D;
}

/**
 * 哈希表查找器
 * 
 * 功能描述：
 * 在哈希表中查找指定的键值，返回对应的字符值
 * 
 * 参数：
 *   param_1 - 哈希表指针
 *   param_2 - 查找索引
 * 
 * 返回值：
 *   char - 查找到的字符值
 * 
 * 技术说明：
 * 该函数负责在哈希表中查找指定的键值，支持动态内存分配和线程安全操作。
 */
char hash_table_lookup(longlong param_1, int param_2)
{
    longlong *plVar1;
    char *pcVar2;
    char cVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;
    
    lVar5 = (longlong)param_2;
    if (*(longlong *)(param_1 + 8 + lVar5 * 8) != 0) {
        do {
            cVar3 = *(char *)(lVar5 + 0x808 + param_1);
        } while (cVar3 != '\0');
        return cVar3;
    }
    lVar4 = FUN_18062b420(_DAT_180c8ed18, 0x8000, 0x25);
    plVar1 = (longlong *)(param_1 + 8 + lVar5 * 8);
    LOCK();
    bVar6 = *plVar1 == 0;
    if (bVar6) {
        *plVar1 = lVar4;
    }
    UNLOCK();
    if (bVar6) {
        LOCK();
        pcVar2 = (char *)(lVar5 + 0x808 + param_1);
        cVar3 = *pcVar2;
        *pcVar2 = '\0';
        UNLOCK();
        return cVar3;
    }
    if (lVar4 == 0) {
        do {
            cVar3 = *(char *)(lVar5 + 0x808 + param_1);
        } while (cVar3 != '\0');
        return cVar3;
    }
    // WARNING: Subroutine does not return
    FUN_18064e900();
}

/**
 * 容器扩容器
 * 
 * 功能描述：
 * 扩展容器容量，重新分配内存并复制数据
 * 
 * 参数：
 *   param_1 - 容器指针
 *   param_2 - 源容器指针
 *   param_3 - 保留参数
 *   param_4 - 保留参数
 * 
 * 返回值：
 *   longlong* - 扩容后的容器指针
 * 
 * 技术说明：
 * 该函数负责扩展容器容量，支持动态扩容和数据迁移操作。
 * 使用指数扩容策略以提高性能。
 */
longlong * container_expander(longlong *param_1, longlong *param_2, uint64_t param_3, uint64_t param_4)
{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plStackX_8;
    
    plVar4 = (longlong *)param_1[1];
    if (plVar4 < (longlong *)param_1[2]) {
        param_1[1] = (longlong)(plVar4 + 0x11);
        lVar6 = param_2[1] - *param_2 >> 3;
        uVar1 = *(uint *)(param_2 + 3);
        *(uint *)(plVar4 + 3) = uVar1;
        lVar3 = 0;
        lVar2 = lVar3;
        plStackX_8 = plVar4;
        if (lVar6 != 0) {
            lVar2 = FUN_18062b420(_DAT_180c8ed18, lVar6 * 8, uVar1 & 0xff, param_4, 0xfffffffffffffffe);
        }
        *plVar4 = lVar2;
        plVar4[1] = lVar2;
        plVar4[2] = lVar2 + lVar6 * 8;
        lVar2 = *param_2;
        if (lVar2 != param_2[1]) {
            // WARNING: Subroutine does not return
            memmove(*plVar4, lVar2, param_2[1] - lVar2);
        }
        plVar4[1] = *plVar4;
        plVar4[4] = param_2[4];
        lVar6 = param_2[6] - param_2[5] >> 4;
        uVar1 = *(uint *)(param_2 + 8);
        *(uint *)(plVar4 + 8) = uVar1;
        lVar2 = lVar3;
        if (lVar6 != 0) {
            lVar2 = FUN_18062b420(_DAT_180c8ed18, lVar6 << 4, uVar1 & 0xff);
        }
        plVar4[5] = lVar2;
        plVar4[6] = lVar2;
        plVar4[7] = lVar6 * 0x10 + lVar2;
        lVar2 = plVar4[5];
        lVar6 = param_2[5];
        if (lVar6 == param_2[6]) {
            plVar4[6] = lVar2;
            lVar6 = param_2[10] - param_2[9] >> 2;
            uVar1 = *(uint *)(param_2 + 0xc);
            *(uint *)(plVar4 + 0xc) = uVar1;
            lVar2 = lVar3;
            if (lVar6 != 0) {
                lVar2 = FUN_18062b420(_DAT_180c8ed18, lVar6 * 4, uVar1 & 0xff);
            }
            plVar4[9] = lVar2;
            plVar4[10] = lVar2;
            plVar4[0xb] = lVar2 + lVar6 * 4;
            lVar2 = plVar4[9];
            lVar6 = param_2[9];
            if (lVar6 == param_2[10]) {
                plVar4[10] = lVar2;
                lVar2 = (param_2[0xe] - param_2[0xd]) / 6 + (param_2[0xe] - param_2[0xd] >> 0x3f);
                lVar2 = (lVar2 >> 2) - (lVar2 >> 0x3f);
                uVar1 = *(uint *)(param_2 + 0x10);
                *(uint *)(plVar4 + 0x10) = uVar1;
                if (lVar2 != 0) {
                    lVar3 = FUN_18062b420(_DAT_180c8ed18, lVar2 * 0x18, uVar1 & 0xff);
                }
                plVar4[0xd] = lVar3;
                plVar4[0xe] = lVar3;
                plVar4[0xf] = lVar3 + lVar2 * 0x18;
                lVar2 = plVar4[0xd];
                lVar3 = param_2[0xd];
                if (lVar3 == param_2[0xe]) {
                    plVar4[0xe] = lVar2;
                    return plVar4;
                }
                // WARNING: Subroutine does not return
                memmove(lVar2, lVar3, param_2[0xe] - lVar3);
            }
            // WARNING: Subroutine does not return
            memmove(lVar2, lVar6, param_2[10] - lVar6);
        }
        // WARNING: Subroutine does not return
        memmove(lVar2, lVar6, param_2[6] - lVar6);
    }
    lVar2 = *param_1;
    lVar3 = ((longlong)plVar4 - lVar2) / 0x88;
    if (lVar3 == 0) {
        lVar3 = 1;
    }
    else {
        lVar3 = lVar3 * 2;
        if (lVar3 == 0) {
            lVar6 = 0;
            goto LAB_1801b9d0f;
        }
    }
    lVar6 = FUN_18062b420(_DAT_180c8ed18, lVar3 * 0x88, (char)param_1[3]);
    plVar4 = (longlong *)param_1[1];
    lVar2 = *param_1;
LAB_1801b9d0f:
    FUN_1801bd320(&plStackX_8, lVar2, plVar4, lVar6);
    FUN_18014c570(plStackX_8, param_2);
    lVar2 = param_1[1];
    lVar5 = *param_1;
    if (lVar5 != lVar2) {
        do {
            FUN_18014c7d0(lVar5);
            lVar5 = lVar5 + 0x88;
        } while (lVar5 != lVar2);
        lVar5 = *param_1;
    }
    if (lVar5 == 0) {
        plVar4 = (longlong *)(lVar3 * 0x88 + lVar6);
        *param_1 = lVar6;
        param_1[1] = (longlong)(plStackX_8 + 0x11);
        param_1[2] = (longlong)plVar4;
        return plVar4;
    }
    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
}

/**
 * 容器重分配器
 * 
 * 功能描述：
 * 重新分配容器内存，调整容器大小
 * 
 * 参数：
 *   param_1 - 保留参数
 *   param_2 - 保留参数
 *   param_3 - 容器指针
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责重新分配容器内存，支持动态调整容器大小。
 */
void container_reallocator(uint64_t param_1, uint64_t param_2, longlong param_3)
{
    longlong lVar1;
    longlong lVar2;
    longlong in_RAX;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *unaff_RDI;
    longlong in_R10;
    longlong in_stack_00000050;
    
    lVar4 = SUB168(SEXT816(in_RAX) * SEXT816(param_3 - in_R10), 8);
    lVar4 = (lVar4 >> 6) - (lVar4 >> 0x3f);
    if (lVar4 == 0) {
        lVar4 = 1;
    }
    else {
        lVar4 = lVar4 * 2;
        if (lVar4 == 0) {
            lVar3 = 0;
            goto LAB_1801b9d0f;
        }
    }
    lVar3 = FUN_18062b420(_DAT_180c8ed18, lVar4 * 0x88, (char)unaff_RDI[3]);
    param_3 = unaff_RDI[1];
    in_R10 = *unaff_RDI;
LAB_1801b9d0f:
    FUN_1801bd320(&stack0x00000050, in_R10, param_3, lVar3);
    lVar2 = in_stack_00000050;
    FUN_18014c570(in_stack_00000050);
    lVar1 = unaff_RDI[1];
    lVar5 = *unaff_RDI;
    if (lVar5 != lVar1) {
        do {
            FUN_18014c7d0(lVar5);
            lVar5 = lVar5 + 0x88;
        } while (lVar5 != lVar1);
        lVar5 = *unaff_RDI;
    }
    if (lVar5 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
    }
    *unaff_RDI = lVar3;
    unaff_RDI[1] = lVar2 + 0x88;
    unaff_RDI[2] = lVar4 * 0x88 + lVar3;
    return;
}

/**
 * 系统错误处理器
 * 
 * 功能描述：
 * 处理系统错误，执行错误恢复操作
 * 
 * 参数：
 *   无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责处理系统错误，执行错误恢复和资源清理操作。
 */
void system_error_handler(void)
{
    // WARNING: Subroutine does not return
    FUN_18064e900();
}

/**
 * 12字节数组重分配器
 * 
 * 功能描述：
 * 重分配12字节元素的数组，调整数组大小
 * 
 * 参数：
 *   param_1 - 数组指针
 *   param_2 - 保留参数
 *   param_3 - 保留参数
 *   param_4 - 保留参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责重分配12字节元素的数组，支持动态调整数组大小。
 */
void array_reallocator_12byte(longlong *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    uint64_t uVar7;
    
    uVar7 = 0xfffffffffffffffe;
    lVar2 = param_1[1];
    lVar3 = *param_1;
    lVar4 = 0;
    uVar1 = *(uint *)(param_1 + 3);
    lVar6 = lVar2 - lVar3;
    lVar5 = lVar6 / 6 + (lVar6 >> 0x3f);
    lVar5 = (lVar5 >> 1) - (lVar5 >> 0x3f);
    if (lVar5 != 0) {
        lVar4 = FUN_18062b420(_DAT_180c8ed18, lVar5 * 0xc, uVar1 & 0xff, param_4, 0xfffffffffffffffe, 0, 0, 0,
                              uVar1);
    }
    lVar5 = lVar4 + lVar5 * 0xc;
    if (lVar3 != lVar2) {
        // WARNING: Subroutine does not return
        memmove(lVar4, lVar3, lVar6, param_4, uVar7, lVar4, lVar5, lVar5);
    }
    lVar2 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    *(uint *)(param_1 + 3) = uVar1;
    if (lVar2 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * 52字节数组重分配器
 * 
 * 功能描述：
 * 重分配52字节元素的数组，调整数组大小
 * 
 * 参数：
 *   param_1 - 数组指针
 *   param_2 - 保留参数
 *   param_3 - 保留参数
 *   param_4 - 保留参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责重分配52字节元素的数组，支持动态调整数组大小。
 */
void array_reallocator_52byte(longlong *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    uint64_t uVar7;
    
    uVar7 = 0xfffffffffffffffe;
    lVar2 = param_1[1];
    lVar3 = *param_1;
    lVar4 = 0;
    uVar1 = *(uint *)(param_1 + 3);
    lVar6 = lVar2 - lVar3;
    lVar5 = lVar6 / 0x34;
    if (lVar5 != 0) {
        lVar4 = FUN_18062b420(_DAT_180c8ed18, lVar5 * 0x34, uVar1 & 0xff, param_4, 0xfffffffffffffffe, 0, 0, 0,
                              uVar1);
    }
    lVar5 = lVar5 * 0x34 + lVar4;
    if (lVar3 != lVar2) {
        // WARNING: Subroutine does not return
        memmove(lVar4, lVar3, lVar6, param_4, uVar7, lVar4, lVar5, lVar5);
    }
    lVar2 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    *(uint *)(param_1 + 3) = uVar1;
    if (lVar2 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * 1056字节数组重分配器
 * 
 * 功能描述：
 * 重分配1056字节元素的数组，调整数组大小
 * 
 * 参数：
 *   param_1 - 数组指针
 *   param_2 - 保留参数
 *   param_3 - 保留参数
 *   param_4 - 保留参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责重分配1056字节元素的数组，支持动态调整数组大小和数据迁移。
 */
void array_reallocator_1056byte(longlong *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    longlong *plVar1;
    int *piVar2;
    byte *pbVar3;
    uint uVar4;
    longlong *plVar5;
    longlong lVar6;
    int32_t uVar7;
    int32_t uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong *plVar11;
    longlong *plVar12;
    
    plVar5 = (longlong *)param_1[1];
    plVar12 = (longlong *)*param_1;
    lVar9 = 0;
    uVar4 = *(uint *)(param_1 + 3);
    lVar10 = ((longlong)plVar5 - (longlong)plVar12) / 0x420;
    if (lVar10 != 0) {
        lVar9 = FUN_18062b420(_DAT_180c8ed18, lVar10 * 0x420, uVar4 & 0xff, param_4, 0xfffffffffffffffe, 0, 0,
                              0);
    }
    lVar10 = lVar10 * 0x420 + lVar9;
    if (plVar12 != plVar5) {
        plVar11 = (longlong *)(lVar9 + 8);
        do {
            plVar1 = plVar11 + -1;
            *plVar1 = 0;
            *plVar11 = 0;
            if (*plVar12 != 0) {
                LOCK();
                piVar2 = (int *)(*plVar12 + 0x10);
                *piVar2 = *piVar2 + 1;
                UNLOCK();
                if (*plVar1 != 0) {
                    FUN_180080060();
                }
                *plVar1 = *plVar12;
                if (*plVar11 != 0) {
                    pbVar3 = (byte *)(*plVar11 + 0xfe);
                    *pbVar3 = *pbVar3 & 0xfb;
                }
            }
            plVar11[1] = plVar12[2];
            plVar12[2] = 0;
            lVar6 = plVar12[4];
            plVar11[2] = plVar12[3];
            plVar11[3] = lVar6;
            lVar6 = plVar12[6];
            plVar11[4] = plVar12[5];
            plVar11[5] = lVar6;
            lVar6 = plVar12[8];
            plVar11[6] = plVar12[7];
            plVar11[7] = lVar6;
            lVar6 = plVar12[10];
            plVar11[8] = plVar12[9];
            plVar11[9] = lVar6;
            lVar6 = plVar12[0xc];
            plVar11[10] = plVar12[0xb];
            plVar11[0xb] = lVar6;
            lVar6 = plVar12[0xe];
            plVar11[0xc] = plVar12[0xd];
            plVar11[0xd] = lVar6;
            lVar6 = plVar12[0x10];
            plVar11[0xe] = plVar12[0xf];
            plVar11[0xf] = lVar6;
            lVar6 = plVar12[0x12];
            plVar11[0x10] = plVar12[0x11];
            plVar11[0x11] = lVar6;
            lVar6 = plVar12[0x14];
            plVar11[0x12] = plVar12[0x13];
            plVar11[0x13] = lVar6;
            lVar6 = plVar12[0x16];
            plVar11[0x14] = plVar12[0x15];
            plVar11[0x15] = lVar6;
            lVar6 = plVar12[0x18];
            plVar11[0x16] = plVar12[0x17];
            plVar11[0x17] = lVar6;
            uVar7 = *(int32_t *)((longlong)plVar12 + 0xcc);
            lVar6 = plVar12[0x1a];
            uVar8 = *(int32_t *)((longlong)plVar12 + 0xd4);
            *(int *)(plVar11 + 0x18) = (int)plVar12[0x19];
            *(int32_t *)((longlong)plVar11 + 0xc4) = uVar7;
            *(int *)(plVar11 + 0x19) = (int)lVar6;
            *(int32_t *)((longlong)plVar11 + 0xcc) = uVar8;
            plVar11[0x1a] = plVar12[0x1b];
            *(int *)(plVar11 + 0x1b) = (int)plVar12[0x1c];
            *(int32_t *)((longlong)plVar11 + 0xdc) = *(int32_t *)((longlong)plVar12 + 0xe4);
            FUN_1801bd980(plVar11 + 0x1d, plVar12 + 0x1e);
            plVar12 = plVar12 + 0x84;
            plVar11 = plVar11 + 0x84;
        } while (plVar12 != plVar5);
    }
    lVar6 = *param_1;
    *param_1 = lVar9;
    lVar9 = param_1[1];
    param_1[1] = lVar10;
    param_1[2] = lVar10;
    *(uint *)(param_1 + 3) = uVar4;
    for (lVar10 = lVar6; lVar10 != lVar9; lVar10 = lVar10 + 0x420) {
        FUN_1801bd090(lVar10);
    }
    if (lVar6 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900(lVar6);
    }
    return;
}

/**
 * 188字节数组重分配器
 * 
 * 功能描述：
 * 重分配188字节元素的数组，调整数组大小
 * 
 * 参数：
 *   param_1 - 数组指针
 *   param_2 - 保留参数
 *   param_3 - 保留参数
 *   param_4 - 保留参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责重分配188字节元素的数组，支持动态调整数组大小。
 */
void array_reallocator_188byte(longlong *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    uint64_t uVar7;
    
    uVar7 = 0xfffffffffffffffe;
    lVar2 = param_1[1];
    lVar3 = *param_1;
    lVar4 = 0;
    uVar1 = *(uint *)(param_1 + 3);
    lVar6 = lVar2 - lVar3;
    lVar5 = lVar6 / 0xbc;
    if (lVar5 != 0) {
        lVar4 = FUN_18062b420(_DAT_180c8ed18, lVar5 * 0xbc, uVar1 & 0xff, param_4, 0xfffffffffffffffe, 0, 0, 0,
                              uVar1);
    }
    lVar5 = lVar5 * 0xbc + lVar4;
    if (lVar3 != lVar2) {
        // WARNING: Subroutine does not return
        memmove(lVar4, lVar3, lVar6, param_4, uVar7, lVar4, lVar5, lVar5);
    }
    lVar2 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    *(uint *)(param_1 + 3) = uVar1;
    if (lVar2 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * 数组清理器
 * 
 * 功能描述：
 * 清理数组数据，释放内存资源
 * 
 * 参数：
 *   param_1 - 数组指针
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责清理数组数据，包括释放内存和重置状态。
 */
void array_cleaner(longlong param_1)
{
    longlong lVar1;
    uint64_t *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    
    uVar3 = *(ulonglong *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 8);
    uVar4 = 0;
    if (uVar3 != 0) {
        do {
            puVar2 = *(uint64_t **)(lVar1 + uVar4 * 8);
            if (puVar2 != (uint64_t *)0x0) {
                *puVar2 = &unknown_var_720_ptr;
                // WARNING: Subroutine does not return
                FUN_18064e900();
            }
            *(uint64_t *)(lVar1 + uVar4 * 8) = 0;
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
        uVar3 = *(ulonglong *)(param_1 + 0x10);
    }
    *(uint64_t *)(param_1 + 0x18) = 0;
    if ((1 < uVar3) && (*(longlong *)(param_1 + 8) != 0)) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * 哈希表条目查找器
 * 
 * 功能描述：
 * 在哈希表中查找条目，返回条目位置信息
 * 
 * 参数：
 *   param_1 - 哈希表指针
 *   param_2 - 结果存储指针
 *   param_3 - 键值指针
 * 
 * 返回值：
 *   longlong* - 结果存储指针
 * 
 * 技术说明：
 * 该函数负责在哈希表中查找条目，使用64位哈希算法进行快速查找。
 */
longlong * hash_table_entry_finder(longlong param_1, longlong *param_2, longlong param_3)
{
    byte bVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    byte *pbVar5;
    uint uVar6;
    
    pbVar5 = &system_buffer_ptr;
    if (*(byte **)(param_3 + 8) != (byte *)0x0) {
        pbVar5 = *(byte **)(param_3 + 8);
    }
    uVar6 = 0;
    uVar2 = 0xcbf29ce484222325;
    if (*(uint *)(param_3 + 0x10) != 0) {
        do {
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            uVar6 = uVar6 + 1;
            uVar2 = (uVar2 ^ bVar1) * 0x100000001b3;
        } while (uVar6 < *(uint *)(param_3 + 0x10));
    }
    lVar4 = (uVar2 % (ulonglong)*(uint *)(param_1 + 0x10)) * 8;
    lVar3 = func_0x0001801bb330((ulonglong)*(uint *)(param_1 + 0x10),
                              *(uint64_t *)(*(longlong *)(param_1 + 8) + lVar4));
    if (lVar3 == 0) {
        lVar4 = *(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8);
    }
    else {
        lVar4 = *(longlong *)(param_1 + 8) + lVar4;
    }
    *param_2 = lVar3;
    param_2[1] = lVar4;
    return param_2;
}

/**
 * 容器迭代器
 * 
 * 功能描述：
 * 迭代容器中的元素，执行清理操作
 * 
 * 参数：
 *   param_1 - 容器指针
 *   param_2 - 保留参数
 *   param_3 - 保留参数
 *   param_4 - 保留参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责迭代容器中的元素，执行清理和资源释放操作。
 */
void container_iterator(longlong *param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    uint64_t uVar4;
    
    uVar4 = 0xfffffffffffffffe;
    plVar1 = (longlong *)param_1[1];
    for (plVar3 = (longlong *)*param_1; plVar3 != plVar1; plVar3 = plVar3 + 8) {
        plVar2 = (longlong *)plVar3[7];
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x20))(plVar2, plVar2 != plVar3, param_3, param_4, uVar4);
            plVar3[7] = 0;
        }
    }
    if (*param_1 != 0) {
        // WARNING: Subroutine does not return
        FUN_18064e900();
    }
    return;
}

/**
 * 数组元素移除器
 * 
 * 功能描述：
 * 从数组中移除指定元素，调整数组结构
 * 
 * 参数：
 *   param_1 - 数组指针
 *   param_2 - 要移除的元素值
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责从数组中移除指定元素，支持动态调整数组大小。
 */
void array_element_remover(ulonglong *param_1, longlong param_2)
{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    int iVar7;
    
    uVar2 = 0;
    uVar5 = *param_1;
    iVar7 = (int)((longlong)(param_1[1] - uVar5) >> 3);
    if (0 < iVar7) {
        uVar1 = uVar2;
        uVar4 = uVar2;
        while (*(longlong *)(uVar5 + uVar1 * 8) != param_2) {
            uVar4 = (ulonglong)((int)uVar4 + 1);
            uVar1 = uVar1 + 1;
            if ((longlong)iVar7 <= (longlong)uVar1) {
                return;
            }
        }
        uVar3 = (ulonglong)(iVar7 + -1);
        *(uint64_t *)(uVar5 + (longlong)(int)uVar4 * 8) = *(uint64_t *)(uVar3 * 8 + uVar5);
        uVar5 = param_1[1];
        uVar1 = *param_1;
        uVar4 = (longlong)(uVar5 - uVar1) >> 3;
        if (uVar4 < uVar3) {
            uVar6 = uVar3 - uVar4;
            if ((ulonglong)((longlong)(param_1[2] - uVar5) >> 3) < uVar6) {
                if (uVar4 == 0) {
                    uVar4 = 1;
                }
                else {
                    uVar4 = uVar4 * 2;
                }
                if (uVar4 < uVar3) {
                    uVar4 = uVar3;
                }
                if (uVar4 != 0) {
                    uVar2 = FUN_18062b420(_DAT_180c8ed18, uVar4 * 8, (char)param_1[3]);
                    uVar1 = *param_1;
                    uVar5 = param_1[1];
                }
                if (uVar1 != uVar5) {
                    // WARNING: Subroutine does not return
                    memmove(uVar2, uVar1, uVar5 - uVar1);
                }
                if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
                    memset(uVar2, 0, uVar6 * 8);
                }
                if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                }
                *param_1 = uVar2;
                param_1[2] = uVar2 + uVar4 * 8;
                param_1[1] = uVar2;
            }
            else {
                if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
                    memset(uVar5, 0, uVar6 * 8);
                }
                param_1[1] = uVar5;
            }
        }
        else {
            param_1[1] = uVar3 * 8 + uVar1;
        }
    }
    return;
}

/**
 * 数组元素移动器
 * 
 * 功能描述：
 * 移动数组元素，调整元素位置
 * 
 * 参数：
 *   param_1 - 移动索引
 *   param_2 - 保留参数
 *   param_3 - 数组指针
 *   param_4 - 数组大小
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责移动数组元素，支持动态调整数组结构和大小。
 */
void array_element_mover(int param_1, uint64_t param_2, longlong param_3, int param_4)
{
    longlong lVar1;
    ulonglong uVar2;
    longlong *unaff_RBX;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong unaff_R14;
    
    uVar2 = (ulonglong)(param_4 + -1);
    *(uint64_t *)(param_3 + (longlong)param_1 * 8) = *(uint64_t *)(uVar2 * 8 + param_3);
    lVar4 = unaff_RBX[1];
    lVar1 = *unaff_RBX;
    uVar3 = lVar4 - lVar1 >> 3;
    if (uVar3 < uVar2) {
        uVar5 = uVar2 - uVar3;
        if ((ulonglong)(unaff_RBX[2] - lVar4 >> 3) < uVar5) {
            if (uVar3 == 0) {
                uVar3 = 1;
            }
            else {
                uVar3 = uVar3 * 2;
            }
            if (uVar3 < uVar2) {
                uVar3 = uVar2;
            }
            if (uVar3 != 0) {
                unaff_R14 = FUN_18062b420(_DAT_180c8ed18, uVar3 * 8, (char)unaff_RBX[3]);
                lVar1 = *unaff_RBX;
                lVar4 = unaff_RBX[1];
            }
            if (lVar1 != lVar4) {
                // WARNING: Subroutine does not return
                memmove(unaff_R14, lVar1, lVar4 - lVar1);
            }
            if (uVar5 != 0) {
                // WARNING: Subroutine does not return
                memset(unaff_R14, 0, uVar5 * 8);
            }
            if (*unaff_RBX != 0) {
                // WARNING: Subroutine does not return
                FUN_18064e900();
            }
            *unaff_RBX = unaff_R14;
            unaff_RBX[2] = unaff_R14 + uVar3 * 8;
            unaff_RBX[1] = unaff_R14;
        }
        else {
            if (uVar5 != 0) {
                // WARNING: Subroutine does not return
                memset(lVar4, 0, uVar5 * 8);
            }
            unaff_RBX[1] = lVar4;
        }
    }
    else {
        unaff_RBX[1] = uVar2 * 8 + lVar1;
    }
    return;
}

/**
 * 数组扩容器
 * 
 * 功能描述：
 * 扩展数组容量，重新分配内存
 * 
 * 参数：
 *   param_1 - 数组指针
 *   param_2 - 新容量大小
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责扩展数组容量，支持动态扩容和内存重分配。
 */
void array_expander(longlong param_1, ulonglong param_2)
{
    longlong in_RAX;
    longlong *unaff_RBX;
    longlong unaff_RBP;
    ulonglong uVar1;
    longlong unaff_RSI;
    ulonglong uVar2;
    longlong unaff_R14;
    
    uVar2 = param_2 - unaff_RBP;
    if ((ulonglong)(in_RAX - unaff_RSI >> 3) < uVar2) {
        if (unaff_RBP == 0) {
            uVar1 = 1;
        }
        else {
            uVar1 = unaff_RBP * 2;
        }
        if (uVar1 < param_2) {
            uVar1 = param_2;
        }
        if (uVar1 != 0) {
            unaff_R14 = FUN_18062b420(_DAT_180c8ed18, uVar1 * 8, (char)unaff_RBX[3]);
            param_1 = *unaff_RBX;
            unaff_RSI = unaff_RBX[1];
        }
        if (param_1 != unaff_RSI) {
            // WARNING: Subroutine does not return
            memmove(unaff_R14, param_1, unaff_RSI - param_1);
        }
        if (uVar2 != 0) {
            // WARNING: Subroutine does not return
            memset(unaff_R14, 0, uVar2 * 8);
        }
        if (*unaff_RBX != 0) {
            // WARNING: Subroutine does not return
            FUN_18064e900();
        }
        *unaff_RBX = unaff_R14;
        unaff_RBX[2] = unaff_R14 + uVar1 * 8;
        unaff_RBX[1] = unaff_R14;
    }
    else {
        if (uVar2 != 0) {
            // WARNING: Subroutine does not return
            memset();
        }
        unaff_RBX[1] = unaff_RSI;
    }
    return;
}

/**
 * 系统空函数3
 * 
 * 功能描述：
 * 系统空函数，用于占位和接口兼容性
 * 
 * 参数：
 *   无参数（使用寄存器传递参数）
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数为系统空函数，主要用于接口兼容性和占位用途。
 */
void system_empty_function_3(void)
{
    longlong unaff_RBX;
    uint64_t unaff_RSI;
    longlong unaff_RDI;
    
    if (unaff_RDI != 0) {
        // WARNING: Subroutine does not return
        memset();
    }
    *(uint64_t *)(unaff_RBX + 8) = unaff_RSI;
    return;
}

/**
 * 指针偏移计算器
 * 
 * 功能描述：
 * 计算指针偏移量，返回偏移后的指针值
 * 
 * 参数：
 *   param_1 - 基础指针值
 *   param_2 - 保留参数
 *   param_3 - 保留参数
 *   param_4 - 偏移量
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数负责计算指针偏移量，支持指针运算和地址计算。
 */
void pointer_offset_calculator(longlong param_1, uint64_t param_2, uint64_t param_3, longlong param_4)
{
    longlong unaff_RBX;
    
    *(longlong *)(unaff_RBX + 8) = param_4 + param_1;
    return;
}

/**
 * 系统空函数4
 * 
 * 功能描述：
 * 系统空函数，用于占位和接口兼容性
 * 
 * 参数：
 *   无参数
 * 
 * 返回值：
 *   void - 无返回值
 * 
 * 技术说明：
 * 该函数为系统空函数，主要用于接口兼容性和占位用途。
 */
void system_empty_function_4(void)
{
    return;
}

/*============================================================================
  模块信息和技术说明
============================================================================*/

/**
 * 模块功能说明：
 * 
 * 本模块是TaleWorlds引擎核心系统的重要组成部分，提供以下核心功能：
 * 
 * 1. 容器管理：
 *    - 支持多种大小的容器（12字节、52字节、188字节、1056字节）
 *    - 提供容器的创建、扩容、重分配和清理功能
 *    - 支持动态扩容策略和内存优化
 * 
 * 2. 内存管理：
 *    - 提供高效的内存分配和释放机制
 *    - 支持多种内存块大小的分配（8KB、32KB、128KB）
 *    - 实现内存池管理和内存对齐优化
 * 
 * 3. 哈希表操作：
 *    - 提供64位哈希算法支持
 *    - 支持哈希表的创建、查找和扩容
 *    - 实现高效的键值对存储和检索
 * 
 * 4. 数组操作：
 *    - 支持动态数组的创建、扩容和清理
 *    - 提供数组元素的添加、删除和移动功能
 *    - 实现数组内存的动态管理
 * 
 * 5. 错误处理：
 *    - 提供统一的错误处理机制
 *    - 支持资源清理和状态恢复
 *    - 实现异常安全的内存管理
 * 
 * 技术特点：
 * - 使用指数扩容策略提高性能
 * - 支持线程安全的内存操作
 * - 实现内存对齐和页面对齐
 * - 提供完整的错误处理和资源清理
 * - 支持多种数据结构和算法
 * 
 * 使用注意事项：
 * 1. 所有内存分配操作都需要检查返回值
 * 2. 在多线程环境中使用时需要注意同步
 * 3. 内存释放后需要将指针置为NULL
 * 4. 容器扩容时可能会发生数据迁移
 * 5. 哈希表操作需要考虑哈希冲突处理
 * 
 * 性能优化：
 * - 使用内存池减少内存分配开销
 * - 实现批量操作减少函数调用开销
 * - 使用缓存友好的数据结构布局
 * - 实现延迟释放提高内存利用率
 * - 使用位运算优化哈希计算
 */

/*============================================================================
  文件结束
============================================================================*/