#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_08_part003.c
 * @brief 高级数据结构和排序算法模块
 * 
 * 本模块实现了游戏引擎中的高级数据结构管理、内存分配、位掩码处理和多种排序算法。
 * 主要功能包括：
 * - 动态数据结构的扩展和重新分配
 * - 基于位掩码的高效数据查找
 * - 多种排序算法实现（插入排序变种）
 * - 内存安全的数据复制和清理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

/*=====================================================================================
 * 常量定义
 *=====================================================================================*/

/** 数据结构大小常量 */
#define DATA_STRUCTURE_SIZE_LARGE   0x68    /**< 大型数据结构大小 (104字节) */
#define DATA_STRUCTURE_SIZE_MEDIUM  0x30    /**< 中型数据结构大小 (48字节) */
#define DATA_STRUCTURE_SIZE_SMALL   0x0d    /**< 小型数据结构大小 (13字节) */
#define DATA_STRUCTURE_SIZE_ALT     0x1a    /**< 替代数据结构大小 (26字节) */

/** 位掩码常量 */
#define BIT_MASK_32BIT              0xffffffff    /**< 32位全1掩码 */
#define BIT_MASK_10BIT_SHIFT        10            /**< 10位移位掩码 */
#define BIT_MASK_HASH_KEY           0x2b18        /**< 哈希键掩码 */
#define BIT_MASK_HASH_KEY_2         0x6b8         /**< 第二哈希键掩码 */
#define BIT_MASK_HASH_KEY_3         0x4a8         /**< 第三哈希键掩码 */

/** 内存分配标志 */
#define MEMORY_FLAG_PERSISTENT      0xfffffffe    /**< 持久内存标志 */

/** 算法阈值 */
#define SORT_THRESHOLD_SMALL        0x1d    /**< 小型排序阈值 (29个元素) */
#define SORT_THRESHOLD_MEDIUM       0x54    /**< 中型排序阈值 (84个元素) */

/*=====================================================================================
 * 类型别名
 *=====================================================================================*/

/** 数据结构句柄类型 */
typedef longlong* DataStructureHandle;
typedef const longlong* ConstDataStructureHandle;

/** 内存指针类型 */
typedef void* MemoryPointer;
typedef const void* ConstMemoryPointer;

/** 数据元素类型 */
typedef uint8_t* DataElement;
typedef const uint8_t* ConstDataElement;

/** 排序元素类型 */
typedef uint16_t* SortElement;
typedef const uint16_t* ConstSortElement;

/** 哈希表类型 */
typedef uint32_t HashKey;
typedef uint32_t HashValue;

/** 函数指针类型 */
typedef void (*CleanupFunction)(void);
typedef void (*DataProcessor)(void*, void*);

/*=====================================================================================
 * 结构体定义
 *=====================================================================================*/

/**
 * @brief 大型数据结构 (104字节)
 * 
 * 用于存储复杂的数据集合，包含多个指针和状态信息
 */
typedef struct {
    void* pointers[8];        /**< 指针数组 */
    uint32_t values[6];       /**< 数值数组 */
    uint8_t flags[8];         /**< 标志数组 */
    void* cleanup_handlers;   /**< 清理处理器 */
    void* data_handlers;      /**< 数据处理器 */
} LargeDataStructure;

/**
 * @brief 中型数据结构 (48字节)
 * 
 * 用于存储中等复杂度的数据集合
 */
typedef struct {
    void* pointers[4];        /**< 指针数组 */
    uint32_t values[4];       /**< 数值数组 */
    uint8_t flags[8];         /**< 标志数组 */
    void* handlers[3];        /**< 处理器数组 */
} MediumDataStructure;

/**
 * @brief 排序元素结构
 * 
 * 用于排序操作的三字节元素
 */
typedef struct {
    uint16_t value;       /**< 主要值 */
    uint8_t extra;        /**< 额外字节 */
} SortTriple;

/*=====================================================================================
 * 函数别名
 *=====================================================================================*/

/** 数据结构管理函数 */
#define DataStructure_ExpandLarge          FUN_1804de090    /**< 大型数据结构扩展器 */
#define DataStructure_ExpandLargeAlt       FUN_1804de240    /**< 大型数据结构替代扩展器 */
#define DataStructure_ExpandMedium         FUN_1804de3f0    /**< 中型数据结构扩展器 */

/** 位掩码处理函数 */
#define Bitmask_ProcessData                FUN_1804de580    /**< 位掩码数据处理器 */
#define Bitmask_ProcessDataAlt             FUN_1804de5ac    /**< 位掩码数据替代处理器 */

/** 工具函数 */
#define Utility_EmptyFunction              FUN_1804de663    /**< 空函数 */

/** 排序算法函数 */
#define Sort_InsertionTriple               FUN_1804de680    /**< 三字节插入排序 */
#define Sort_InsertionTripleRange          FUN_1804de696    /**< 范围三字节插入排序 */
#define Sort_InsertionTripleOptimized      FUN_1804de700    /**< 优化三字节插入排序 */
#define Sort_InsertionTripleSimple        FUN_1804de776    /**< 简单三字节插入排序 */
#define Sort_InsertionTripleWords          FUN_1804de7ea    /**< 单词三字节插入排序 */

/*=====================================================================================
 * 内部函数声明
 *=====================================================================================*/

static void DataStructure_CleanupHandlers(LargeDataStructure* structure);
static void DataStructure_CopyData(void* dest, const void* src, size_t size);
static void Sort_CompareAndSwap(SortTriple* a, SortTriple* b);
static HashValue Bitmask_ComputeHash(HashKey key, uint32_t mask);

/*=====================================================================================
 * 核心功能实现
 *=====================================================================================*/

/**
 * @brief 大型数据结构扩展和重新分配
 * 
 * 该函数负责扩展大型数据结构(104字节)的容量，包括：
 * - 计算新的容量需求（当前容量的2倍）
 * - 分配新的内存空间
 * - 复制现有数据到新位置
 * - 调用清理处理器释放旧资源
 * - 更新结构体指针
 * 
 * @param param_1 数据结构句柄数组 [基地址, 结束地址, 容量限制, 标志]
 * @param param_2 扩展参数
 */
void FUN_1804de090(longlong *param_1, undefined8 param_2)
{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 *puVar9;
    longlong lVar10;
    undefined8 *puVar11;
    longlong lVar12;
    
    /* 计算当前元素数量和新的容量需求 */
    puVar11 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)*param_1;
    lVar12 = ((longlong)puVar11 - (longlong)puVar7) / DATA_STRUCTURE_SIZE_LARGE;
    puVar6 = (undefined8 *)0x0;
    
    /* 确定新的容量 */
    if (lVar12 == 0) {
        lVar12 = 1;  /* 最小容量为1 */
    }
    else {
        lVar12 = lVar12 * 2;  /* 容量翻倍 */
        if (lVar12 == 0) goto LAB_1804de118;
    }
    
    /* 分配新的内存空间 */
    puVar6 = (undefined8 *)
             FUN_18062b420(_DAT_180c8ed18, lVar12 * DATA_STRUCTURE_SIZE_LARGE, 
                          (char)param_1[3], puVar7, MEMORY_FLAG_PERSISTENT);
    
    /* 重新计算指针位置 */
    puVar11 = (undefined8 *)param_1[1];
    puVar7 = (undefined8 *)*param_1;
LAB_1804de118:
    puVar9 = puVar6;
    
    /* 复制现有数据到新位置 */
    if (puVar7 != puVar11) {
        lVar8 = (longlong)puVar6 - (longlong)puVar7;
        puVar7 = puVar7 + 9;
        do {
            /* 复制数据元素 */
            uVar5 = puVar7[-8];
            *puVar9 = puVar7[-9];
            puVar9[1] = uVar5;
            uVar5 = puVar7[-6];
            puVar9[2] = puVar7[-7];
            puVar9[3] = uVar5;
            
            /* 复制数值数据 */
            uVar2 = *(undefined4 *)((longlong)puVar7 + -0x24);
            uVar3 = *(undefined4 *)(puVar7 + -4);
            uVar4 = *(undefined4 *)((longlong)puVar7 + -0x1c);
            *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar7 + -5);
            *(undefined4 *)((longlong)puVar9 + 0x24) = uVar2;
            *(undefined4 *)(puVar9 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar4;
            
            /* 复制剩余数据 */
            uVar5 = puVar7[-2];
            puVar9[6] = puVar7[-3];
            puVar9[7] = uVar5;
            *(undefined8 *)(lVar8 + -8 + (longlong)puVar7) = puVar7[-1];
            puVar7[-1] = 0;
            *(undefined8 *)(lVar8 + (longlong)puVar7) = *puVar7;
            *puVar7 = 0;
            *(undefined1 *)(lVar8 + 8 + (longlong)puVar7) = *(undefined1 *)(puVar7 + 1);
            *(undefined4 *)(lVar8 + 0xc + (longlong)puVar7) = *(undefined4 *)((longlong)puVar7 + 0xc);
            *(undefined4 *)((longlong)puVar7 + lVar8 + 0x10) = *(undefined4 *)(puVar7 + 2);
            *(undefined4 *)((longlong)puVar7 + lVar8 + 0x14) = *(undefined4 *)((longlong)puVar7 + 0x14);
            *(undefined4 *)((longlong)puVar7 + lVar8 + 0x18) = *(undefined4 *)(puVar7 + 3);
            *(undefined1 *)((longlong)puVar7 + lVar8 + 0x1c) = *(undefined1 *)((longlong)puVar7 + 0x1c);
            
            puVar9 = puVar9 + DATA_STRUCTURE_SIZE_SMALL;
            puVar1 = puVar7 + 4;
            puVar7 = puVar7 + DATA_STRUCTURE_SIZE_SMALL;
        } while (puVar1 != puVar11);
    }
    
    /* 处理新元素 */
    FUN_1804ddda0(puVar9, param_2);
    
    /* 清理旧数据结构的处理器 */
    lVar8 = param_1[1];
    lVar10 = *param_1;
    if (lVar10 != lVar8) {
        do {
            if (*(longlong **)(lVar10 + 0x48) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar10 + 0x48) + 0x38))();
            }
            if (*(longlong **)(lVar10 + 0x40) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar10 + 0x40) + 0x38))();
            }
            lVar10 = lVar10 + DATA_STRUCTURE_SIZE_LARGE;
        } while (lVar10 != lVar8);
        lVar10 = *param_1;
    }
    
    /* 更新数据结构指针 */
    if (lVar10 == 0) {
        *param_1 = (longlong)puVar6;
        param_1[1] = (longlong)(puVar9 + DATA_STRUCTURE_SIZE_SMALL);
        param_1[2] = (longlong)(puVar6 + lVar12 * DATA_STRUCTURE_SIZE_SMALL);
        return;
    }
    
    /* 释放旧内存 */
    FUN_18064e900(lVar10);
}

/**
 * @brief 大型数据结构替代扩展器
 * 
 * 功能与 DataStructure_ExpandLarge 类似，但处理的数据结构布局略有不同
 * 
 * @param param_1 数据结构句柄数组
 * @param param_2 扩展参数
 */
void FUN_1804de240(longlong *param_1, undefined8 param_2)
{
    undefined8 *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    undefined4 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined4 *puVar10;
    longlong lVar11;
    undefined8 *puVar12;
    longlong lVar13;
    
    /* 计算当前元素数量和新的容量需求 */
    puVar12 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
    lVar13 = ((longlong)puVar12 - (longlong)puVar8) / DATA_STRUCTURE_SIZE_LARGE;
    puVar7 = (undefined4 *)0x0;
    
    /* 确定新的容量 */
    if (lVar13 == 0) {
        lVar13 = 1;  /* 最小容量为1 */
    }
    else {
        lVar13 = lVar13 * 2;  /* 容量翻倍 */
        if (lVar13 == 0) goto LAB_1804de2c8;
    }
    
    /* 分配新的内存空间 */
    puVar7 = (undefined4 *)
             FUN_18062b420(_DAT_180c8ed18, lVar13 * DATA_STRUCTURE_SIZE_LARGE, 
                          (char)param_1[3], puVar8, MEMORY_FLAG_PERSISTENT);
    
    /* 重新计算指针位置 */
    puVar12 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)*param_1;
LAB_1804de2c8:
    puVar10 = puVar7;
    
    /* 复制现有数据到新位置 */
    if (puVar8 != puVar12) {
        lVar9 = (longlong)puVar7 - (longlong)puVar8;
        puVar8 = puVar8 + 1;
        do {
            /* 复制数据元素 */
            *puVar10 = *(undefined4 *)(puVar8 + -1);
            *(undefined1 *)((longlong)puVar8 + lVar9 + -4) = *(undefined1 *)((longlong)puVar8 + -4);
            *(undefined1 *)((longlong)puVar8 + lVar9 + -3) = *(undefined1 *)((longlong)puVar8 + -3);
            *(undefined8 *)((longlong)puVar8 + lVar9) = *puVar8;
            *puVar8 = 0;
            *(undefined8 *)((longlong)puVar8 + lVar9 + 8) = puVar8[1];
            puVar8[1] = 0;
            *(undefined4 *)((longlong)puVar8 + lVar9 + 0x10) = *(undefined4 *)(puVar8 + 2);
            
            /* 复制复杂数据结构 */
            uVar6 = *(undefined8 *)((longlong)puVar8 + 0x1c);
            puVar1 = (undefined8 *)((longlong)puVar8 + lVar9 + 0x14);
            *puVar1 = *(undefined8 *)((longlong)puVar8 + 0x14);
            puVar1[1] = uVar6;
            uVar6 = *(undefined8 *)((longlong)puVar8 + 0x2c);
            puVar1 = (undefined8 *)((longlong)puVar8 + lVar9 + 0x24);
            *puVar1 = *(undefined8 *)((longlong)puVar8 + 0x24);
            puVar1[1] = uVar6;
            
            /* 复制数值数据 */
            uVar3 = *(undefined4 *)(puVar8 + 7);
            uVar4 = *(undefined4 *)((longlong)puVar8 + 0x3c);
            uVar5 = *(undefined4 *)(puVar8 + 8);
            puVar2 = (undefined4 *)((longlong)puVar8 + lVar9 + 0x34);
            *puVar2 = *(undefined4 *)((longlong)puVar8 + 0x34);
            puVar2[1] = uVar3;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
            
            /* 复制剩余数据 */
            uVar6 = *(undefined8 *)((longlong)puVar8 + 0x4c);
            puVar1 = (undefined8 *)((longlong)puVar8 + lVar9 + 0x44);
            *puVar1 = *(undefined8 *)((longlong)puVar8 + 0x44);
            puVar1[1] = uVar6;
            *(undefined4 *)((longlong)puVar8 + lVar9 + 0x54) = *(undefined4 *)((longlong)puVar8 + 0x54);
            *(undefined4 *)((longlong)puVar8 + lVar9 + 0x58) = *(undefined4 *)(puVar8 + 0xb);
            *(undefined4 *)((longlong)puVar8 + lVar9 + 0x5c) = *(undefined4 *)((longlong)puVar8 + 0x5c);
            
            puVar10 = puVar10 + DATA_STRUCTURE_SIZE_ALT;
            puVar1 = puVar8 + 0xc;
            puVar8 = puVar8 + DATA_STRUCTURE_SIZE_SMALL;
        } while (puVar1 != puVar12);
    }
    
    /* 处理新元素 */
    FUN_1804dde40(puVar10, param_2);
    
    /* 清理旧数据结构的处理器 */
    lVar9 = param_1[1];
    lVar11 = *param_1;
    if (lVar11 != lVar9) {
        do {
            if (*(longlong **)(lVar11 + 0x10) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar11 + 0x10) + 0x38))();
            }
            if (*(longlong **)(lVar11 + 8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar11 + 8) + 0x38))();
            }
            lVar11 = lVar11 + DATA_STRUCTURE_SIZE_LARGE;
        } while (lVar11 != lVar9);
        lVar11 = *param_1;
    }
    
    /* 更新数据结构指针 */
    if (lVar11 == 0) {
        *param_1 = (longlong)puVar7;
        param_1[1] = (longlong)(puVar10 + DATA_STRUCTURE_SIZE_ALT);
        param_1[2] = (longlong)(puVar7 + lVar13 * DATA_STRUCTURE_SIZE_ALT);
        return;
    }
    
    /* 释放旧内存 */
    FUN_18064e900(lVar11);
}

/**
 * @brief 中型数据结构扩展和重新分配
 * 
 * 处理48字节的中型数据结构，功能与前两个函数类似
 * 
 * @param param_1 数据结构句柄数组
 * @param param_2 扩展参数
 */
void FUN_1804de3f0(longlong *param_1, undefined8 param_2)
{
    undefined8 *puVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    
    /* 计算当前元素数量和新的容量需求 */
    puVar7 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)*param_1;
    lVar8 = ((longlong)puVar7 - (longlong)puVar3) / DATA_STRUCTURE_SIZE_MEDIUM;
    puVar2 = (undefined4 *)0x0;
    
    /* 确定新的容量 */
    if (lVar8 == 0) {
        lVar8 = 1;  /* 最小容量为1 */
    }
    else {
        lVar8 = lVar8 * 2;  /* 容量翻倍 */
        if (lVar8 == 0) goto LAB_1804de47c;
    }
    
    /* 分配新的内存空间 */
    puVar2 = (undefined4 *)
             FUN_18062b420(_DAT_180c8ed18, lVar8 * DATA_STRUCTURE_SIZE_MEDIUM, 
                          (char)param_1[3], puVar3, MEMORY_FLAG_PERSISTENT);
    
    /* 重新计算指针位置 */
    puVar7 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)*param_1;
LAB_1804de47c:
    puVar5 = puVar2;
    
    /* 复制现有数据到新位置 */
    if (puVar3 != puVar7) {
        lVar4 = (longlong)puVar2 - (longlong)puVar3;
        puVar3 = puVar3 + 2;
        do {
            /* 复制数据元素 */
            *puVar5 = *(undefined4 *)(puVar3 + -2);
            *(undefined8 *)(lVar4 + -8 + (longlong)puVar3) = puVar3[-1];
            puVar3[-1] = 0;
            *(undefined8 *)(lVar4 + (longlong)puVar3) = *puVar3;
            *puVar3 = 0;
            *(undefined8 *)(lVar4 + 8 + (longlong)puVar3) = puVar3[1];
            puVar3[1] = 0;
            *(undefined4 *)(lVar4 + 0x10 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 2);
            *(undefined4 *)(lVar4 + 0x14 + (longlong)puVar3) = *(undefined4 *)((longlong)puVar3 + 0x14);
            *(undefined4 *)(lVar4 + 0x18 + (longlong)puVar3) = *(undefined4 *)(puVar3 + 3);
            
            puVar5 = puVar5 + 0xc;
            puVar1 = puVar3 + 4;
            puVar3 = puVar3 + 6;
        } while (puVar1 != puVar7);
    }
    
    /* 处理新元素 */
    FUN_1804ddee0(puVar5, param_2);
    
    /* 清理旧数据结构的处理器 */
    lVar4 = param_1[1];
    lVar6 = *param_1;
    if (lVar6 != lVar4) {
        do {
            if (*(longlong **)(lVar6 + 0x18) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x38))();
            }
            if (*(longlong **)(lVar6 + 0x10) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar6 + 0x10) + 0x38))();
            }
            if (*(longlong **)(lVar6 + 8) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar6 + 8) + 0x38))();
            }
            lVar6 = lVar6 + DATA_STRUCTURE_SIZE_MEDIUM;
        } while (lVar6 != lVar4);
        lVar6 = *param_1;
    }
    
    /* 更新数据结构指针 */
    if (lVar6 == 0) {
        *param_1 = (longlong)puVar2;
        param_1[1] = (longlong)(puVar5 + 0xc);
        param_1[2] = (longlong)(puVar2 + lVar8 * 0xc);
        return;
    }
    
    /* 释放旧内存 */
    FUN_18064e900(lVar6);
}

/**
 * @brief 基于位掩码的数据处理器
 * 
 * 使用位掩码技术高效地处理和查找数据
 * 
 * @param param_1 输入数据指针
 * @param param_2 数据表指针
 */
void FUN_1804de580(longlong param_1, longlong param_2)
{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    
    /* 计算要处理的元素数量 */
    iVar4 = (int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 2);
    if (0 < iVar4) {
        lVar6 = 0;
        do {
            /* 获取当前元素的键值 */
            uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + lVar6 * 4);
            if (uVar1 != BIT_MASK_32BIT) {
                /* 计算哈希值和数据偏移 */
                lVar5 = (longlong)(int)(*(uint *)(param_2 + BIT_MASK_HASH_KEY) & uVar1) * 0xd8;
                lVar3 = *(longlong *)(*(longlong *)(param_2 + 11000) + (longlong)((int)uVar1 >> BIT_MASK_10BIT_SHIFT) * 8);
                uVar1 = *(uint *)(lVar3 + 0x1c + lVar5);
                if (uVar1 != BIT_MASK_32BIT) {
                    /* 获取第二个键值 */
                    uVar2 = *(uint *)(lVar3 + 0x18 + lVar5);
                    /* 调用处理函数 */
                    FUN_180387e60(*(undefined8 *)
                                   (*(longlong *)
                                     (*(longlong *)(param_2 + 0x698) + (longlong)((int)uVar1 >> BIT_MASK_10BIT_SHIFT) * 8) + 8 +
                                   (longlong)(int)(*(uint *)(param_2 + BIT_MASK_HASH_KEY_2) & uVar1) * 0x30),
                                  *(longlong *)
                                   (*(longlong *)(param_2 + 0x488) + (longlong)((int)uVar2 >> BIT_MASK_10BIT_SHIFT) * 8) +
                                  ((longlong)(int)(*(uint *)(param_2 + BIT_MASK_HASH_KEY_3) & uVar2) * 9 + 1) * 8);
                }
            }
            lVar6 = lVar6 + 1;
        } while (lVar6 < iVar4);
    }
    return;
}

/**
 * @brief 位掩码数据替代处理器
 * 
 * 功能与 Bitmask_ProcessData 类似，但使用不同的寄存器传递参数
 */
void FUN_1804de5ac(void)
{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong unaff_RBP;
    longlong unaff_RSI;
    longlong unaff_RDI;
    
    /* 使用寄存器参数进行处理 */
    lVar5 = 0;
    do {
        uVar1 = *(uint *)(*(longlong *)(unaff_RSI + 0x18) + lVar5 * 4);
        if (uVar1 != BIT_MASK_32BIT) {
            lVar4 = (longlong)(int)(*(uint *)(unaff_RDI + BIT_MASK_HASH_KEY) & uVar1) * 0xd8;
            lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 11000) + (longlong)((int)uVar1 >> BIT_MASK_10BIT_SHIFT) * 8);
            uVar1 = *(uint *)(lVar3 + 0x1c + lVar4);
            if (uVar1 != BIT_MASK_32BIT) {
                uVar2 = *(uint *)(lVar3 + 0x18 + lVar4);
                FUN_180387e60(*(undefined8 *)
                               (*(longlong *)
                                 (*(longlong *)(unaff_RDI + 0x698) + (longlong)((int)uVar1 >> BIT_MASK_10BIT_SHIFT) * 8) + 8 +
                               (longlong)(int)(*(uint *)(unaff_RDI + BIT_MASK_HASH_KEY_2) & uVar1) * 0x30),
                              *(longlong *)
                               (*(longlong *)(unaff_RDI + 0x488) + (longlong)((int)uVar2 >> BIT_MASK_10BIT_SHIFT) * 8) +
                              ((longlong)(int)(*(uint *)(unaff_RDI + BIT_MASK_HASH_KEY_3) & uVar2) * 9 + 1) * 8);
            }
        }
        lVar5 = lVar5 + 1;
    } while (lVar5 < unaff_RBP);
    return;
}

/**
 * @brief 空函数
 * 
 * 用作占位符或默认处理器
 */
void FUN_1804de663(void)
{
    return;
}

/**
 * @brief 三字节插入排序算法
 * 
 * 对三字节元素进行插入排序，使用优化的比较和交换操作
 * 
 * @param param_1 数据起始指针
 * @param param_2 数据结束指针
 */
void FUN_1804de680(char *param_1, char *param_2)
{
    char cVar1;
    char cVar2;
    undefined2 uVar3;
    char cVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    char *pcVar8;
    char *pcVar9;
    char *pcVar10;
    char cVar11;
    char *pcVar12;
    char *pcVar13;
    bool bVar14;
    bool bVar15;
    char cStackX_9;
    
    if (param_1 != param_2) {
        /* 计算排序深度 */
        iVar7 = 0;
        lVar5 = ((longlong)param_2 - (longlong)param_1) / 3;
        for (lVar6 = lVar5; lVar6 != 0; lVar6 = lVar6 >> 1) {
            iVar7 = iVar7 + 1;
        }
        FUN_1804df7c0(param_1, param_2, (longlong)(iVar7 + -1) * 2);
        
        /* 小型数据集使用简单插入排序 */
        if (lVar5 < SORT_THRESHOLD_SMALL) {
            for (pcVar13 = param_1 + 3; pcVar13 != param_2; pcVar13 = pcVar13 + 3) {
                uVar3 = *(undefined2 *)pcVar13;
                cVar1 = pcVar13[2];
                pcVar12 = pcVar13;
                if (pcVar13 != param_1) {
                    cStackX_9 = (char)((ushort)uVar3 >> 8);
                    cVar11 = (char)uVar3;
                    pcVar10 = pcVar13;
                    do {
                        cVar2 = pcVar10[-3];
                        pcVar9 = pcVar10 + -3;
                        bVar15 = SBORROW1(cVar11, cVar2);
                        cVar4 = cVar11 - cVar2;
                        bVar14 = cVar11 == cVar2;
                        if (bVar14) {
                            cVar2 = pcVar10[-2];
                            bVar15 = SBORROW1(cStackX_9, cVar2);
                            cVar4 = cStackX_9 - cVar2;
                            bVar14 = cStackX_9 == cVar2;
                        }
                        if (bVar14 || bVar15 != cVar4 < '\0') break;
                        *(undefined2 *)pcVar12 = *(undefined2 *)pcVar9;
                        pcVar12[2] = pcVar10[-1];
                        pcVar12 = pcVar12 + -3;
                        pcVar10 = pcVar9;
                    } while (pcVar9 != param_1);
                }
                *(undefined2 *)pcVar12 = uVar3;
                pcVar12[2] = cVar1;
            }
        }
        else {
            /* 大型数据集使用优化的排序策略 */
            pcVar13 = param_1 + SORT_THRESHOLD_MEDIUM;
            if (param_1 != pcVar13) {
                for (pcVar12 = param_1 + 3; pcVar12 != pcVar13; pcVar12 = pcVar12 + 3) {
                    uVar3 = *(undefined2 *)pcVar12;
                    cVar1 = pcVar12[2];
                    pcVar10 = pcVar12;
                    if (pcVar12 != param_1) {
                        cStackX_9 = (char)((ushort)uVar3 >> 8);
                        cVar11 = (char)uVar3;
                        pcVar9 = pcVar12;
                        do {
                            cVar2 = pcVar9[-3];
                            pcVar8 = pcVar9 + -3;
                            bVar15 = SBORROW1(cVar11, cVar2);
                            cVar4 = cVar11 - cVar2;
                            bVar14 = cVar11 == cVar2;
                            if (bVar14) {
                                cVar2 = pcVar9[-2];
                                bVar15 = SBORROW1(cStackX_9, cVar2);
                                cVar4 = cStackX_9 - cVar2;
                                bVar14 = cStackX_9 == cVar2;
                            }
                            if (bVar14 || bVar15 != cVar4 < '\0') break;
                            *(undefined2 *)pcVar10 = *(undefined2 *)pcVar8;
                            pcVar10[2] = pcVar9[-1];
                            pcVar10 = pcVar10 + -3;
                            pcVar9 = pcVar8;
                        } while (pcVar8 != param_1);
                    }
                    *(undefined2 *)pcVar10 = uVar3;
                    pcVar10[2] = cVar1;
                }
            }
            
            /* 处理剩余的元素 */
            if (pcVar13 != param_2) {
                do {
                    uVar3 = *(undefined2 *)pcVar13;
                    cVar1 = pcVar13[2];
                    cVar11 = (char)uVar3;
                    cStackX_9 = (char)((ushort)uVar3 >> 8);
                    pcVar10 = pcVar13;
                    pcVar12 = pcVar13;
                    while( true ) {
                        pcVar9 = pcVar12 + -3;
                        cVar2 = *pcVar9;
                        bVar15 = SBORROW1(cVar11, cVar2);
                        cVar4 = cVar11 - cVar2;
                        bVar14 = cVar11 == cVar2;
                        if (bVar14) {
                            cVar2 = pcVar12[-2];
                            bVar15 = SBORROW1(cStackX_9, cVar2);
                            cVar4 = cStackX_9 - cVar2;
                            bVar14 = cStackX_9 == cVar2;
                        }
                        if (bVar14 || bVar15 != cVar4 < '\0') break;
                        *(undefined2 *)pcVar10 = *(undefined2 *)pcVar9;
                        pcVar10[2] = pcVar12[-1];
                        pcVar10 = pcVar10 + -3;
                        pcVar12 = pcVar9;
                    }
                    pcVar13 = pcVar13 + 3;
                    *(undefined2 *)pcVar10 = uVar3;
                    pcVar10[2] = cVar1;
                } while (pcVar13 != param_2);
                return;
            }
        }
    }
    return;
}

/**
 * @brief 范围三字节插入排序
 * 
 * 在指定范围内对三字节元素进行插入排序
 * 
 * @param param_1 数据起始指针
 * @param param_2 数据结束指针
 * @param param_3 范围结束指针
 */
void FUN_1804de696(char *param_1, char *param_2, longlong param_3)
{
    char cVar1;
    char cVar2;
    undefined2 uVar3;
    char cVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    char *pcVar8;
    char *pcVar9;
    char *pcVar10;
    char cVar11;
    char *pcVar12;
    char *pcVar13;
    bool bVar14;
    bool bVar15;
    char cStack0000000000000031;
    
    /* 计算排序深度 */
    iVar7 = 0;
    lVar5 = (param_3 - (longlong)param_1) / 3;
    for (lVar6 = lVar5; lVar6 != 0; lVar6 = lVar6 >> 1) {
        iVar7 = iVar7 + 1;
    }
    FUN_1804df7c0(param_1, param_2, (longlong)(iVar7 + -1) * 2);
    
    /* 小型数据集使用简单插入排序 */
    if (lVar5 < SORT_THRESHOLD_SMALL) {
        for (pcVar13 = param_1 + 3; pcVar13 != param_2; pcVar13 = pcVar13 + 3) {
            uVar3 = *(undefined2 *)pcVar13;
            cVar1 = pcVar13[2];
            pcVar12 = pcVar13;
            if (pcVar13 != param_1) {
                cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
                cVar11 = (char)uVar3;
                pcVar10 = pcVar13;
                do {
                    cVar2 = pcVar10[-3];
                    pcVar9 = pcVar10 + -3;
                    bVar15 = SBORROW1(cVar11, cVar2);
                    cVar4 = cVar11 - cVar2;
                    bVar14 = cVar11 == cVar2;
                    if (bVar14) {
                        cVar2 = pcVar10[-2];
                        bVar15 = SBORROW1(cStack0000000000000031, cVar2);
                        cVar4 = cStack0000000000000031 - cVar2;
                        bVar14 = cStack0000000000000031 == cVar2;
                    }
                    if (bVar14 || bVar15 != cVar4 < '\0') break;
                    *(undefined2 *)pcVar12 = *(undefined2 *)pcVar9;
                    pcVar12[2] = pcVar10[-1];
                    pcVar12 = pcVar12 + -3;
                    pcVar10 = pcVar9;
                } while (pcVar9 != param_1);
            }
            *(undefined2 *)pcVar12 = uVar3;
            pcVar12[2] = cVar1;
        }
    }
    else {
        /* 大型数据集使用优化的排序策略 */
        pcVar13 = param_1 + SORT_THRESHOLD_MEDIUM;
        if (param_1 != pcVar13) {
            for (pcVar12 = param_1 + 3; pcVar12 != pcVar13; pcVar12 = pcVar12 + 3) {
                uVar3 = *(undefined2 *)pcVar12;
                cVar1 = pcVar12[2];
                pcVar10 = pcVar12;
                if (pcVar12 != param_1) {
                    cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
                    cVar11 = (char)uVar3;
                    pcVar9 = pcVar12;
                    do {
                        cVar2 = pcVar9[-3];
                        pcVar8 = pcVar9 + -3;
                        bVar15 = SBORROW1(cVar11, cVar2);
                        cVar4 = cVar11 - cVar2;
                        bVar14 = cVar11 == cVar2;
                        if (bVar14) {
                            cVar2 = pcVar9[-2];
                            bVar15 = SBORROW1(cStack0000000000000031, cVar2);
                            cVar4 = cStack0000000000000031 - cVar2;
                            bVar14 = cStack0000000000000031 == cVar2;
                        }
                        if (bVar14 || bVar15 != cVar4 < '\0') break;
                        *(undefined2 *)pcVar10 = *(undefined2 *)pcVar8;
                        pcVar10[2] = pcVar9[-1];
                        pcVar10 = pcVar10 + -3;
                        pcVar9 = pcVar8;
                    } while (pcVar8 != param_1);
                }
                *(undefined2 *)pcVar10 = uVar3;
                pcVar10[2] = cVar1;
            }
        }
        
        /* 处理剩余的元素 */
        if (pcVar13 != param_2) {
            do {
                uVar3 = *(undefined2 *)pcVar13;
                cVar1 = pcVar13[2];
                cVar11 = (char)uVar3;
                cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
                pcVar10 = pcVar13;
                pcVar12 = pcVar13;
                while( true ) {
                    pcVar9 = pcVar12 + -3;
                    cVar2 = *pcVar9;
                    bVar15 = SBORROW1(cVar11, cVar2);
                    cVar4 = cVar11 - cVar2;
                    bVar14 = cVar11 == cVar2;
                    if (bVar14) {
                        cVar2 = pcVar12[-2];
                        bVar15 = SBORROW1(cStack0000000000000031, cVar2);
                        cVar4 = cStack0000000000000031 - cVar2;
                        bVar14 = cStack0000000000000031 == cVar2;
                    }
                    if (bVar14 || bVar15 != cVar4 < '\0') break;
                    *(undefined2 *)pcVar10 = *(undefined2 *)pcVar9;
                    pcVar10[2] = pcVar12[-1];
                    pcVar10 = pcVar10 + -3;
                    pcVar12 = pcVar9;
                }
                pcVar13 = pcVar13 + 3;
                *(undefined2 *)pcVar10 = uVar3;
                pcVar10[2] = cVar1;
            } while (pcVar13 != param_2);
            return;
        }
    }
    return;
}

/**
 * @brief 优化三字节插入排序
 * 
 * 使用寄存器参数优化的三字节插入排序算法
 */
void FUN_1804de700(void)
{
    char cVar1;
    char cVar2;
    undefined2 uVar3;
    char cVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *unaff_RBX;
    char *unaff_RBP;
    char cVar8;
    char *in_R9;
    char *in_R10;
    bool bVar9;
    bool bVar10;
    char cStack0000000000000031;
    
    /* 使用寄存器参数进行优化排序 */
    do {
        uVar3 = *(undefined2 *)in_R9;
        cVar1 = in_R9[2];
        pcVar6 = in_R9;
        if (in_R9 != unaff_RBX) {
            cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
            cVar8 = (char)uVar3;
            pcVar7 = in_R9;
            do {
                cVar2 = pcVar7[-3];
                pcVar5 = pcVar7 + -3;
                bVar10 = SBORROW1(cVar8, cVar2);
                cVar4 = cVar8 - cVar2;
                bVar9 = cVar8 == cVar2;
                if (bVar9) {
                    cVar2 = pcVar7[-2];
                    bVar10 = SBORROW1(cStack0000000000000031, cVar2);
                    cVar4 = cStack0000000000000031 - cVar2;
                    bVar9 = cStack0000000000000031 == cVar2;
                }
                if (bVar9 || bVar10 != cVar4 < '\0') break;
                *(undefined2 *)pcVar6 = *(undefined2 *)pcVar5;
                pcVar6[2] = pcVar7[-1];
                pcVar6 = pcVar6 + -3;
                pcVar7 = pcVar5;
            } while (pcVar5 != unaff_RBX);
        }
        in_R9 = in_R9 + 3;
        *(undefined2 *)pcVar6 = uVar3;
        pcVar6[2] = cVar1;
        if (in_R9 == in_R10) {
            if (in_R10 != unaff_RBP) {
                do {
                    uVar3 = *(undefined2 *)in_R10;
                    cVar1 = in_R10[2];
                    cVar8 = (char)uVar3;
                    cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
                    pcVar7 = in_R10;
                    pcVar6 = in_R10;
                    while( true ) {
                        pcVar5 = pcVar6 + -3;
                        cVar2 = *pcVar5;
                        bVar10 = SBORROW1(cVar8, cVar2);
                        cVar4 = cVar8 - cVar2;
                        bVar9 = cVar8 == cVar2;
                        if (bVar9) {
                            cVar2 = pcVar6[-2];
                            bVar10 = SBORROW1(cStack0000000000000031, cVar2);
                            cVar4 = cStack0000000000000031 - cVar2;
                            bVar9 = cStack0000000000000031 == cVar2;
                        }
                        if (bVar9 || bVar10 != cVar4 < '\0') break;
                        *(undefined2 *)pcVar7 = *(undefined2 *)pcVar5;
                        pcVar7[2] = pcVar6[-1];
                        pcVar7 = pcVar7 + -3;
                        pcVar6 = pcVar5;
                    }
                    in_R10 = in_R10 + 3;
                    *(undefined2 *)pcVar7 = uVar3;
                    pcVar7[2] = cVar1;
                } while (in_R10 != unaff_RBP);
                return;
            }
            return;
        }
    } while( true );
}

/**
 * @brief 简单三字节插入排序
 * 
 * 简化版的三字节插入排序算法
 */
void FUN_1804de776(void)
{
    char cVar1;
    char cVar2;
    undefined2 uVar3;
    char cVar4;
    char *pcVar5;
    char *pcVar6;
    char *pcVar7;
    char *unaff_RBP;
    char *in_R10;
    char cVar8;
    bool bVar9;
    bool bVar10;
    char cStack0000000000000031;
    
    if (in_R10 != unaff_RBP) {
        do {
            uVar3 = *(undefined2 *)in_R10;
            cVar1 = in_R10[2];
            cVar8 = (char)uVar3;
            cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
            pcVar7 = in_R10;
            pcVar5 = in_R10;
            while( true ) {
                pcVar6 = pcVar5 + -3;
                cVar2 = *pcVar6;
                bVar10 = SBORROW1(cVar8, cVar2);
                cVar4 = cVar8 - cVar2;
                bVar9 = cVar8 == cVar2;
                if (bVar9) {
                    cVar2 = pcVar5[-2];
                    bVar10 = SBORROW1(cStack0000000000000031, cVar2);
                    cVar4 = cStack0000000000000031 - cVar2;
                    bVar9 = cStack0000000000000031 == cVar2;
                }
                if (bVar9 || bVar10 != cVar4 < '\0') break;
                *(undefined2 *)pcVar7 = *(undefined2 *)pcVar6;
                pcVar7[2] = pcVar5[-1];
                pcVar7 = pcVar7 + -3;
                pcVar5 = pcVar6;
            }
            in_R10 = in_R10 + 3;
            *(undefined2 *)pcVar7 = uVar3;
            pcVar7[2] = cVar1;
        } while (in_R10 != unaff_RBP);
        return;
    }
    return;
}

/**
 * @brief 单词三字节插入排序
 * 
 * 处理16位单词的三字节插入排序算法
 */
void FUN_1804de7ea(void)
{
    undefined1 uVar1;
    char cVar2;
    undefined2 uVar3;
    char cVar4;
    undefined2 *puVar5;
    undefined2 *puVar6;
    undefined2 *puVar7;
    undefined2 *unaff_RBX;
    undefined2 *unaff_RBP;
    undefined2 *puVar8;
    char cVar9;
    bool bVar10;
    bool bVar11;
    char cStack0000000000000031;
    
    puVar8 = (undefined2 *)((longlong)unaff_RBX + 3);
    do {
        if (puVar8 == unaff_RBP) {
            return;
        }
        uVar3 = *puVar8;
        uVar1 = *(undefined1 *)(puVar8 + 1);
        puVar7 = puVar8;
        if (puVar8 != unaff_RBX) {
            cStack0000000000000031 = (char)((ushort)uVar3 >> 8);
            cVar9 = (char)uVar3;
            puVar5 = puVar8;
            do {
                cVar2 = *(char *)((longlong)puVar5 + -3);
                puVar6 = (undefined2 *)((longlong)puVar5 + -3);
                bVar11 = SBORROW1(cVar9, cVar2);
                cVar4 = cVar9 - cVar2;
                bVar10 = cVar9 == cVar2;
                if (bVar10) {
                    cVar2 = *(char *)(puVar5 + -1);
                    bVar11 = SBORROW1(cStack0000000000000031, cVar2);
                    cVar4 = cStack0000000000000031 - cVar2;
                    bVar10 = cStack0000000000000031 == cVar2;
                }
                if (bVar10 || bVar11 != cVar4 < '\0') break;
                *puVar7 = *puVar6;
                *(undefined1 *)(puVar7 + 1) = *(undefined1 *)((longlong)puVar5 + -1);
                puVar7 = (undefined2 *)((longlong)puVar7 + -3);
                puVar5 = puVar6;
            } while (puVar6 != unaff_RBX);
        }
        puVar8 = (undefined2 *)((longlong)puVar8 + 3);
        *puVar7 = uVar3;
        *(undefined1 *)(puVar7 + 1) = uVar1;
    } while( true );
}

/*=====================================================================================
 * 内部函数实现
 *=====================================================================================*/

/**
 * @brief 清理数据结构的处理器
 * 
 * @param structure 要清理的数据结构
 */
static void DataStructure_CleanupHandlers(LargeDataStructure* structure)
{
    if (structure->cleanup_handlers) {
        ((CleanupFunction)structure->cleanup_handlers)();
    }
    if (structure->data_handlers) {
        ((CleanupFunction)structure->data_handlers)();
    }
}

/**
 * @brief 数据复制函数
 * 
 * @param dest 目标地址
 * @param src 源地址
 * @param size 复制大小
 */
static void DataStructure_CopyData(void* dest, const void* src, size_t size)
{
    uint8_t* d = (uint8_t*)dest;
    const uint8_t* s = (const uint8_t*)src;
    
    for (size_t i = 0; i < size; i++) {
        d[i] = s[i];
    }
}

/**
 * @brief 比较并交换排序元素
 * 
 * @param a 第一个元素
 * @param b 第二个元素
 */
static void Sort_CompareAndSwap(SortTriple* a, SortTriple* b)
{
    if (a->value > b->value || (a->value == b->value && a->extra > b->extra)) {
        SortTriple temp = *a;
        *a = *b;
        *b = temp;
    }
}

/**
 * @brief 计算哈希值
 * 
 * @param key 哈希键
 * @param mask 掩码
 * @return 计算得到的哈希值
 */
static HashValue Bitmask_ComputeHash(HashKey key, uint32_t mask)
{
    return (key & mask) * 0xd8;
}

/*=====================================================================================
 * 模块功能说明
 *=====================================================================================*/

/**
 * @module 高级数据结构和排序算法模块
 * 
 * 本模块提供了游戏引擎中核心的数据结构和算法支持，包括：
 * 
 * ### 主要功能
 * 
 * 1. **动态数据结构管理**
 *    - 支持大型(104字节)、中型(48字节)数据结构的动态扩展
 *    - 自动容量调整（翻倍策略）
 *    - 内存安全的资源管理
 * 
 * 2. **位掩码处理系统**
 *    - 高效的基于位掩码的数据查找
 *    - 支持多级哈希表查找
 *    - 优化的键值计算
 * 
 * 3. **多种排序算法**
 *    - 三字节元素插入排序
 *    - 支持不同数据集大小的优化策略
 *    - 内存高效的排序实现
 * 
 * ### 技术特点
 * 
 * - **内存管理**: 使用持久内存分配标志，确保数据安全
 * - **算法优化**: 根据数据集大小选择最优算法
 * - **资源清理**: 自动清理处理器调用，避免内存泄漏
 * - **性能优化**: 使用位运算和寄存器优化提高性能
 * 
 * ### 使用场景
 * 
 * - 游戏对象管理系统的数据结构扩展
 * - 渲染系统的资源管理
 * - 物理系统的数据排序
 * - 网络系统的数据查找
 * 
 * @see TaleWorlds.Native.Split.h
 * @see FUN_18062b420 (内存分配函数)
 * @see FUN_180387e60 (数据处理函数)
 */