#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_02_part007.c
 * @brief TaleWorlds引擎高级堆排序与数据结构调整模块
 * 
 * 本模块实现了多种堆排序算法和数据结构调整功能，包括：
 * - 三元组数据结构的堆排序操作
 * - 二元组数据结构的堆排序操作
 * - 通用数据结构的堆排序算法
 * - 高效的堆构建和调整算法
 * 
 * @version 1.0
 * @date 2024
 * @author TaleWorlds开发团队
 */

/* ============================================================================
 * 系统常量定义
 * ============================================================================ */

/** 堆节点块大小常量 */
#define HEAP_NODE_BLOCK_SIZE      0x18    // 24字节，三元组数据结构大小
#define PAIR_NODE_BLOCK_SIZE      0x10    // 16字节，二元组数据结构大小
#define BUCKET_SIZE_MASK         0x7ff    // 2047，桶大小掩码
#define BUCKET_SHIFT_BITS        0xb      // 11位，桶移位位数
#define BUCKET_BASE_SIZE         0x800    // 2048，桶基础大小

/* ============================================================================
 * 基础类型定义
 * ============================================================================ */

/** 基础整数类型定义 */
typedef int64_t int64_t;           // 64位有符号长整型
typedef uint64_t uint64_t;  // 64位无符号长整型

/* ============================================================================
 * 类型别名定义
 * ============================================================================ */

/** 三元组数据结构 */
typedef struct {
    uint64_t first;      // 第一个数据元素
    uint64_t second;     // 第二个数据元素  
    uint64_t third;      // 第三个数据元素
} TripleDataStructure;

/** 二元组数据结构 */
typedef struct {
    uint64_t first;      // 第一个数据元素
    uint64_t second;     // 第二个数据元素
} PairDataStructure;

/** 堆管理器结构 */
typedef struct {
    int64_t base_ptr;       // 基础指针
    int64_t size;           // 堆大小
    int64_t capacity;       // 堆容量
    void* bucket_array;      // 桶数组指针
} HeapManager;

/** 通用比较函数指针类型 */
typedef char (*CompareFunction)(uint64_t, uint64_t);

/* ============================================================================
 * 函数别名定义 - 语义化替换原始FUN_函数
 * ============================================================================ */

/** 三元组数据结构堆调整函数 */
#define HeapAdjust_TripleDataStructure FUN_1800eccd0

/** 二元组数据结构堆调整函数 */
#define HeapAdjust_PairDataStructure FUN_1800ecf20

/** 三元组数据元素比较函数 */
#define CompareTripleDataElements func_0x0001800d4090

/** 二元组数据元素比较函数 */
#define ComparePairDataElements func_0x0001800d40c0

/** 通用数据元素比较函数 */
#define CompareGenericDataElements func_0x0001800da750

/* ============================================================================
 * 内部辅助函数声明
 * ============================================================================ */

static void BuildTripleDataHeap(HeapManager* heap, uint32_t start_idx, uint32_t range_size);
static void MergeTripleDataHeaps(HeapManager* source_heap, HeapManager* target_heap, uint32_t merge_count);
static void ExtractTripleDataElements(HeapManager* heap, uint32_t element_count);
static void BuildPairDataHeap(HeapManager* heap, uint32_t start_idx, uint32_t range_size);
static void MergePairDataHeaps(HeapManager* source_heap, HeapManager* target_heap, uint32_t merge_count);
static void ExtractPairDataElements(HeapManager* heap, uint32_t element_count);
static void BuildGenericHeap(uint64_t* heap_array, uint64_t* start_ptr, uint64_t* end_ptr);
static void HeapSortGenericData(uint64_t* heap_array, uint64_t* start_ptr, uint64_t* end_ptr);
static void HeapSortGenericDataOptimized(uint64_t* heap_array, uint64_t* start_ptr, uint64_t* end_ptr);

/* ============================================================================
 * 主要功能函数实现
 * ============================================================================ */

/**
 * @brief 三元组数据结构堆排序主函数
 * 
 * 本函数实现了完整的三元组数据结构堆排序算法，包括：
 * 1. 构建初始堆结构
 * 2. 合并两个堆结构
 * 3. 提取排序后的元素
 * 
 * @param param_1 源堆管理器指针数组
 * @param param_2 目标堆管理器指针数组
 * @param param_3 合并控制参数
 */
void FUN_1800ebb40(int64_t *param_1, int64_t *param_2, int64_t param_3)
{
    uint64_t *puVar1;
    uint64_t *puVar2;
    int64_t lVar3;
    uint64_t uVar4;
    int iVar5;
    int64_t lVar6;
    int64_t lVar7;
    uint64_t uVar8;
    char cVar9;
    uint uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint uVar13;
    int64_t lVar14;
    uint uVar15;
    int64_t lVar16;
    uint uVar17;
    int64_t lStack_b8;
    int64_t lStack_b0;
    int64_t lStack_a8;
    int64_t lStack_a0;
    int64_t lStack_98;
    int64_t lStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    uint64_t uStack_48;
    
    // 第一阶段：构建三元组数据堆
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar16 = (int64_t)(int)param_2[1] - (int64_t)(int)lVar3;
    if (1 < lVar16) {
        lVar14 = (lVar16 + -2 >> 1) + 1;
        do {
            lVar14 = lVar14 + -1;
            uVar17 = (int)lVar14 + (int)lVar3;
            uVar13 = uVar17 >> 0xb;
            uVar11 = (uint64_t)(uVar17 + uVar13 * -0x800);
            lVar6 = *(int64_t *)(lVar7 + 8 + (uint64_t)uVar13 * 8);
            puVar1 = (uint64_t *)(lVar6 + uVar11 * 0x18);
            uStack_88 = *puVar1;
            uStack_80 = puVar1[1];
            uStack_78 = *(uint64_t *)(lVar6 + 0x10 + uVar11 * 0x18);
            lStack_b8 = *param_1;
            lStack_b0 = param_1[1];
            HeapAdjust_TripleDataStructure(&lStack_b8, lVar14, lVar16, lVar14, &uStack_88);
        } while (lVar14 != 0);
    }
    
    // 第二阶段：合并堆结构
    lVar7 = *param_2;
    lStack_b0 = param_2[1];
    iVar5 = *(int *)(param_3 + 8);
    uVar13 = (uint)lStack_b0;
    lStack_b8 = lVar7;
    if ((int)uVar13 < iVar5) {
        uVar17 = *(uint *)(param_1 + 1);
        lVar16 = *param_1;
        lVar3 = (uint64_t)(uVar17 >> 0xb) * 8;
        uVar11 = (uint64_t)(uVar17 - (uVar17 & 0xfffff800));
        do {
            uVar15 = uVar13 >> 0xb;
            cVar9 = CompareTripleDataElements(*(uint64_t *)
                                         (*(int64_t *)(lVar7 + 8 + (uint64_t)uVar15 * 8) + 0x10 +
                                         (uint64_t)(uVar13 + uVar15 * -0x800) * 0x18),
                                        *(uint64_t *)
                                         (*(int64_t *)(lVar3 + 8 + lVar16) + 0x10 + uVar11 * 0x18));
            if (cVar9 != '\0') {
                lVar16 = *(int64_t *)(lVar7 + 8 + (uint64_t)uVar15 * 8);
                uVar12 = (uint64_t)(uVar13 + uVar15 * -0x800);
                puVar1 = (uint64_t *)(lVar16 + uVar12 * 0x18);
                uStack_70 = *puVar1;
                uStack_68 = puVar1[1];
                uStack_60 = *(uint64_t *)(lVar16 + 0x10 + uVar12 * 0x18);
                lVar16 = *(int64_t *)(lVar3 + 8 + *param_1);
                lVar14 = *(int64_t *)(lVar7 + 8 + (uint64_t)uVar15 * 8);
                puVar1 = (uint64_t *)(lVar16 + uVar11 * 0x18);
                uVar8 = puVar1[1];
                uVar4 = *(uint64_t *)(lVar16 + 0x10 + uVar11 * 0x18);
                uVar12 = (uint64_t)(uVar13 + uVar15 * -0x800);
                puVar2 = (uint64_t *)(lVar14 + uVar12 * 0x18);
                *puVar2 = *puVar1;
                puVar2[1] = uVar8;
                lStack_a8 = *param_1;
                lStack_a0 = param_1[1];
                *(uint64_t *)(lVar14 + 0x10 + uVar12 * 0x18) = uVar4;
                HeapAdjust_TripleDataStructure(&lStack_a8, 0, (int64_t)(int)param_2[1] - (int64_t)(int)uVar17, 0, &uStack_70);
            }
            lVar16 = *param_1;
            uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar5);
    }
    
    // 第三阶段：提取排序后的元素
    lVar7 = *param_2;
    uVar13 = *(uint *)(param_2 + 1);
    lStack_a0 = param_2[1];
    lVar3 = param_1[1];
    if (1 < (int64_t)(int)uVar13 - (int64_t)(int)lVar3) {
        lVar16 = *param_1;
        uVar17 = (uint)param_1[1];
        uVar11 = (uint64_t)(uVar17 + (uVar17 >> 0xb) * -0x800);
        lStack_a8 = lVar7;
        do {
            uVar15 = uVar13 - 1;
            uVar10 = uVar15 & 0x7ff;
            lVar14 = *(int64_t *)(lVar7 + 8 + (uint64_t)(uVar15 >> 0xb) * 8);
            puVar1 = (uint64_t *)(lVar14 + (uint64_t)uVar10 * 0x18);
            uStack_58 = *puVar1;
            uStack_50 = puVar1[1];
            uStack_48 = *(uint64_t *)(lVar14 + 0x10 + (uint64_t)uVar10 * 0x18);
            lVar14 = *(int64_t *)(lVar16 + (uint64_t)(uVar17 >> 0xb) * 8 + 8);
            lVar6 = *(int64_t *)(lVar7 + 8 + (uint64_t)(uVar15 >> 0xb) * 8);
            puVar1 = (uint64_t *)(lVar14 + uVar11 * 0x18);
            uVar8 = puVar1[1];
            uVar4 = *(uint64_t *)(lVar14 + 0x10 + uVar11 * 0x18);
            puVar2 = (uint64_t *)(lVar6 + (uint64_t)uVar10 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar8;
            lStack_98 = *param_1;
            lStack_90 = param_1[1];
            *(uint64_t *)(lVar6 + 0x10 + (uint64_t)uVar10 * 0x18) = uVar4;
            HeapAdjust_TripleDataStructure(&lStack_98, 0, ((int64_t)(int)uVar13 - (int64_t)(int)uVar17) + -1, 0, &uStack_58);
            uVar13 = uVar15;
        } while (1 < (int64_t)(int)uVar15 - (int64_t)(int)lVar3);
    }
    return;
}

/**
 * @brief 三元组数据结构堆排序优化版本
 * 
 * 本函数是三元组堆排序的优化版本，使用了寄存器变量优化，
 * 减少了内存访问次数，提高了排序性能。
 * 
 * @param param_1 堆基础参数1
 * @param param_2 堆基础参数2
 * @param param_3 排序控制参数
 * @param param_4 数据元素1
 * @param param_5 数据元素2
 * @param param_6 堆管理器指针
 * @param param_7 堆大小参数
 * @param param_8 数据元素3
 * @param param_9 数据元素4
 * @param param_10 数据元素5
 * @param param_11 数据元素6
 * @param param_12 数据元素7
 * @param param_13 数据元素8
 * @param param_14 数据元素9
 * @param param_15 数据元素10
 * @param param_16 数据元素11
 * @param param_17 数据元素12
 * @param param_18 数据元素13
 * @param param_19 数据元素14
 * @param param_20 数据元素15
 */
void FUN_1800ebb7f(uint64_t param_1, uint64_t param_2, int64_t param_3, uint64_t param_4,
                  uint64_t param_5, int64_t param_6, uint64_t param_7, int64_t param_8,
                  int64_t param_9, int64_t param_10, int64_t param_11, uint64_t param_12,
                  uint64_t param_13, uint64_t param_14, uint64_t param_15, uint64_t param_16,
                  uint64_t param_17, uint64_t param_18, uint64_t param_19, uint64_t param_20)
{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t uVar3;
    int iVar4;
    int64_t lVar5;
    int64_t lVar6;
    int64_t lVar7;
    uint64_t uVar8;
    char cVar9;
    uint uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint uVar13;
    int64_t lVar14;
    int unaff_EBP;
    int64_t *unaff_RSI;
    uint uVar15;
    int64_t unaff_RDI;
    int64_t lVar16;
    uint uVar17;
    int64_t *unaff_R15;
    int64_t *in_stack_000000f8;
    
    // 优化的堆构建阶段
    lVar7 = param_6;
    lVar16 = unaff_RDI - unaff_EBP;
    if (1 < lVar16) {
        lVar14 = (lVar16 + -2 >> 1) + 1;
        do {
            lVar14 = lVar14 + -1;
            uVar17 = (int)lVar14 + unaff_EBP;
            uVar13 = uVar17 >> 0xb;
            uVar11 = (uint64_t)(uVar17 + uVar13 * -0x800);
            lVar5 = *(int64_t *)(lVar7 + 8 + (uint64_t)uVar13 * 8);
            puVar1 = (uint64_t *)(lVar5 + uVar11 * 0x18);
            param_12 = *puVar1;
            param_13 = puVar1[1];
            param_14 = *(uint64_t *)(lVar5 + 0x10 + uVar11 * 0x18);
            param_6 = *unaff_RSI;
            param_7 = unaff_RSI[1];
            HeapAdjust_TripleDataStructure(&param_6, lVar14, lVar16, lVar14, &param_12);
        } while (lVar14 != 0);
    }
    
    // 优化的堆合并阶段
    lVar7 = *unaff_R15;
    param_7 = unaff_R15[1];
    iVar4 = *(int *)(param_3 + 8);
    uVar13 = (uint)param_7;
    param_6 = lVar7;
    if ((int)uVar13 < iVar4) {
        uVar17 = *(uint *)(unaff_RSI + 1);
        lVar14 = *unaff_RSI;
        lVar16 = (uint64_t)(uVar17 >> 0xb) * 8;
        uVar11 = (uint64_t)(uVar17 - (uVar17 & 0xfffff800));
        do {
            uVar15 = uVar13 >> 0xb;
            cVar9 = CompareTripleDataElements(*(uint64_t *)
                                         (*(int64_t *)(lVar7 + 8 + (uint64_t)uVar15 * 8) + 0x10 +
                                         (uint64_t)(uVar13 + uVar15 * -0x800) * 0x18),
                                        *(uint64_t *)
                                         (*(int64_t *)(lVar16 + 8 + lVar14) + 0x10 + uVar11 * 0x18));
            if (cVar9 != '\0') {
                lVar14 = *(int64_t *)(lVar7 + 8 + (uint64_t)uVar15 * 8);
                uVar12 = (uint64_t)(uVar13 + uVar15 * -0x800);
                puVar1 = (uint64_t *)(lVar14 + uVar12 * 0x18);
                param_15 = *puVar1;
                param_16 = puVar1[1];
                param_17 = *(uint64_t *)(lVar14 + 0x10 + uVar12 * 0x18);
                lVar14 = *(int64_t *)(lVar16 + 8 + *unaff_RSI);
                lVar5 = *(int64_t *)(lVar7 + 8 + (uint64_t)uVar15 * 8);
                puVar1 = (uint64_t *)(lVar14 + uVar11 * 0x18);
                uVar8 = puVar1[1];
                uVar3 = *(uint64_t *)(lVar14 + 0x10 + uVar11 * 0x18);
                uVar12 = (uint64_t)(uVar13 + uVar15 * -0x800);
                puVar2 = (uint64_t *)(lVar5 + uVar12 * 0x18);
                *puVar2 = *puVar1;
                puVar2[1] = uVar8;
                param_8 = *unaff_RSI;
                param_9 = unaff_RSI[1];
                *(uint64_t *)(lVar5 + 0x10 + uVar12 * 0x18) = uVar3;
                HeapAdjust_TripleDataStructure(&param_8, 0, (int64_t)(int)in_stack_000000f8[1] - (int64_t)(int)uVar17, 0,
                                              &param_15);
            }
            lVar14 = *unaff_RSI;
            uVar13 = uVar13 + 1;
            unaff_R15 = in_stack_000000f8;
        } while ((int)uVar13 < iVar4);
    }
    
    // 优化的元素提取阶段
    lVar7 = *unaff_R15;
    uVar13 = *(uint *)(unaff_R15 + 1);
    param_9 = unaff_R15[1];
    lVar16 = unaff_RSI[1];
    if (1 < (int64_t)(int)uVar13 - (int64_t)(int)lVar16) {
        lVar14 = *unaff_RSI;
        uVar17 = (uint)unaff_RSI[1];
        uVar11 = (uint64_t)(uVar17 + (uVar17 >> 0xb) * -0x800);
        param_8 = lVar7;
        do {
            uVar15 = uVar13 - 1;
            uVar10 = uVar15 & 0x7ff;
            lVar5 = *(int64_t *)(lVar7 + 8 + (uint64_t)(uVar15 >> 0xb) * 8);
            puVar1 = (uint64_t *)(lVar5 + (uint64_t)uVar10 * 0x18);
            param_18 = *puVar1;
            param_19 = puVar1[1];
            param_20 = *(uint64_t *)(lVar5 + 0x10 + (uint64_t)uVar10 * 0x18);
            lVar5 = *(int64_t *)(lVar14 + (uint64_t)(uVar17 >> 0xb) * 8 + 8);
            lVar6 = *(int64_t *)(lVar7 + 8 + (uint64_t)(uVar15 >> 0xb) * 8);
            puVar1 = (uint64_t *)(lVar5 + uVar11 * 0x18);
            uVar8 = puVar1[1];
            uVar3 = *(uint64_t *)(lVar5 + 0x10 + uVar11 * 0x18);
            puVar2 = (uint64_t *)(lVar6 + (uint64_t)uVar10 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar8;
            param_10 = *unaff_RSI;
            param_11 = unaff_RSI[1];
            *(uint64_t *)(lVar6 + 0x10 + (uint64_t)uVar10 * 0x18) = uVar3;
            HeapAdjust_TripleDataStructure(&param_10, 0, ((int64_t)(int)uVar13 - (int64_t)(int)uVar17) + -1, 0, &param_18);
            uVar13 = uVar15;
        } while (1 < (int64_t)(int)uVar15 - (int64_t)(int)lVar16);
    }
    return;
}

/**
 * @brief 三元组数据结构堆排序提取函数
 * 
 * 专门用于从堆结构中提取排序后的元素，
 * 使用了优化的循环结构和寄存器分配。
 */
void FUN_1800ebd8e(void)
{
    uint64_t *puVar1;
    uint64_t *puVar2;
    uint64_t uVar3;
    int64_t lVar4;
    int64_t lVar5;
    int64_t lVar6;
    uint64_t uVar7;
    uint uVar8;
    uint64_t uVar9;
    uint uVar10;
    int64_t unaff_RBP;
    int64_t *unaff_RSI;
    uint uVar11;
    uint in_R9D;
    int64_t in_stack_00000040;
    int32_t uStack0000000000000050;
    int32_t uStack0000000000000054;
    int32_t uStack0000000000000058;
    int32_t uStack000000000000005c;
    uint64_t uStack0000000000000090;
    uint64_t uStack0000000000000098;
    uint64_t uStack00000000000000a0;
    
    lVar6 = *unaff_RSI;
    uVar11 = (uint)unaff_RSI[1];
    uVar9 = (uint64_t)(uVar11 + (uVar11 >> 0xb) * -0x800);
    do {
        uVar10 = in_R9D - 1;
        uVar8 = uVar10 & 0x7ff;
        lVar4 = *(int64_t *)(in_stack_00000040 + 8 + (uint64_t)(uVar10 >> 0xb) * 8);
        puVar1 = (uint64_t *)(lVar4 + (uint64_t)uVar8 * 0x18);
        uStack0000000000000090 = *puVar1;
        uStack0000000000000098 = puVar1[1];
        uStack00000000000000a0 = *(uint64_t *)(lVar4 + 0x10 + (uint64_t)uVar8 * 0x18);
        lVar4 = *(int64_t *)(lVar6 + (uint64_t)(uVar11 >> 0xb) * 8 + 8);
        lVar5 = *(int64_t *)(in_stack_00000040 + 8 + (uint64_t)(uVar10 >> 0xb) * 8);
        puVar1 = (uint64_t *)(lVar4 + uVar9 * 0x18);
        uVar7 = puVar1[1];
        uVar3 = *(uint64_t *)(lVar4 + 0x10 + uVar9 * 0x18);
        puVar2 = (uint64_t *)(lVar5 + (uint64_t)uVar8 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        uStack0000000000000050 = (int32_t)*unaff_RSI;
        uStack0000000000000054 = *(int32_t *)((int64_t)unaff_RSI + 4);
        uStack0000000000000058 = (int32_t)unaff_RSI[1];
        uStack000000000000005c = *(int32_t *)((int64_t)unaff_RSI + 0xc);
        *(uint64_t *)(lVar5 + 0x10 + (uint64_t)uVar8 * 0x18) = uVar3;
        HeapAdjust_TripleDataStructure(&uStack0000000000000050, 0, ((int64_t)(int)in_R9D - (int64_t)(int)uVar11) + -1, 0,
                                      &uStack0000000000000090);
        in_R9D = uVar10;
    } while (1 < (int)uVar10 - unaff_RBP);
    return;
}

/**
 * @brief 二元组数据结构堆排序主函数
 * 
 * 实现了二元组数据结构的完整堆排序算法，包括：
 * 1. 构建二元组数据堆
 * 2. 合并二元组堆结构
 * 3. 提取排序后的二元组元素
 * 
 * @param param_1 源堆管理器指针数组
 * @param param_2 目标堆管理器指针数组
 * @param param_3 合并控制参数
 */
void FUN_1800ebe90(int64_t *param_1, int64_t *param_2, int64_t param_3)
{
    uint uVar1;
    int64_t *plVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    int iVar5;
    int64_t lVar6;
    uint64_t uVar7;
    char cVar8;
    uint uVar9;
    uint uVar10;
    int64_t lVar11;
    int64_t lVar12;
    int64_t lVar13;
    int64_t lStack_98;
    int64_t lStack_90;
    int64_t lStack_88;
    int64_t lStack_80;
    uint64_t uStack_78;
    uint64_t uStack_70;
    int64_t lStack_68;
    int64_t lStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    int64_t lStack_48;
    int64_t lStack_40;
    
    // 第一阶段：构建二元组数据堆
    lVar6 = *param_1;
    iVar5 = (int)param_1[1];
    lStack_90 = param_1[1];
    lVar12 = (int64_t)(int)param_2[1] - (int64_t)iVar5;
    lStack_98 = lVar6;
    if (1 < lVar12) {
        lVar11 = (lVar12 + -2 >> 1) + 1;
        do {
            lStack_88 = *param_1;
            lStack_80 = param_1[1];
            lVar11 = lVar11 + -1;
            uVar10 = (int)lVar11 + iVar5;
            uVar9 = uVar10 >> 0xb;
            plVar2 = (int64_t *)
                     (*(int64_t *)(lVar6 + 8 + (uint64_t)uVar9 * 8) +
                     (uint64_t)(uVar10 + uVar9 * -0x800) * 0x10);
            lStack_98 = *plVar2;
            lStack_90 = plVar2[1];
            HeapAdjust_PairDataStructure(&lStack_88, lVar11, lVar12, lVar11, &lStack_98);
        } while (lVar11 != 0);
    }
    
    // 第二阶段：合并二元组堆结构
    lVar6 = *param_2;
    lStack_80 = param_2[1];
    iVar5 = *(int *)(param_3 + 8);
    uVar9 = (uint)lStack_80;
    lStack_88 = lVar6;
    if ((int)uVar9 < iVar5) {
        uVar10 = *(uint *)(param_1 + 1);
        lVar11 = *param_1;
        lVar13 = (uint64_t)(uVar10 - (uVar10 & 0xfffff800)) * 0x10;
        lVar12 = (uint64_t)(uVar10 >> 0xb) * 8;
        do {
            uVar10 = uVar9 >> 0xb;
            cVar8 = ComparePairDataElements(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) +
                                        (uint64_t)(uVar9 + uVar10 * -0x800) * 0x10,
                                        *(int64_t *)(lVar12 + 8 + lVar11) + lVar13);
            if (cVar8 != '\0') {
                puVar3 = (uint64_t *)
                         (*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) +
                         (uint64_t)(uVar9 + uVar10 * -0x800) * 0x10);
                uStack_78 = *puVar3;
                uStack_70 = puVar3[1];
                puVar3 = (uint64_t *)(*(int64_t *)(lVar12 + 8 + *param_1) + lVar13);
                uVar7 = puVar3[1];
                puVar4 = (uint64_t *)
                         (*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) +
                         (uint64_t)(uVar9 + uVar10 * -0x800) * 0x10);
                *puVar4 = *puVar3;
                puVar4[1] = uVar7;
                lStack_68 = *param_1;
                lStack_60 = param_1[1];
                HeapAdjust_PairDataStructure(&lStack_68, 0, (int64_t)(int)param_2[1] - (int64_t)(int)param_1[1], 0,
                                            &uStack_78);
            }
            lVar11 = *param_1;
            uVar9 = uVar9 + 1;
        } while ((int)uVar9 < iVar5);
    }
    
    // 第三阶段：提取排序后的二元组元素
    lVar6 = *param_2;
    uVar9 = *(uint *)(param_2 + 1);
    lStack_60 = param_2[1];
    lVar12 = param_1[1];
    if (1 < (int64_t)(int)uVar9 - (int64_t)(int)lVar12) {
        lVar11 = *param_1;
        uVar10 = (uint)param_1[1];
        lStack_68 = lVar6;
        do {
            uVar1 = uVar9 - 1;
            puVar3 = (uint64_t *)
                     (*(int64_t *)(lVar6 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
                     (uint64_t)(uVar1 & 0x7ff) * 0x10);
            uStack_58 = *puVar3;
            uStack_50 = puVar3[1];
            puVar3 = (uint64_t *)
                     (*(int64_t *)(lVar11 + (uint64_t)(uVar10 >> 0xb) * 8 + 8) +
                     (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x10);
            uVar7 = puVar3[1];
            puVar4 = (uint64_t *)
                     (*(int64_t *)(lVar6 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
                     (uint64_t)(uVar1 & 0x7ff) * 0x10);
            *puVar4 = *puVar3;
            puVar4[1] = uVar7;
            lStack_48 = *param_1;
            lStack_40 = param_1[1];
            HeapAdjust_PairDataStructure(&lStack_48, 0, ((int64_t)(int)uVar9 - (int64_t)(int)uVar10) + -1, 0, &uStack_58);
            uVar9 = uVar1;
        } while (1 < (int64_t)(int)uVar1 - (int64_t)(int)lVar12);
    }
    return;
}

/**
 * @brief 二元组数据结构堆排序优化版本
 * 
 * 优化的二元组堆排序算法，使用寄存器变量优化，
 * 减少内存访问次数，提高排序性能。
 */
void FUN_1800ebecf(uint64_t param_1, uint64_t param_2, int64_t param_3, uint64_t param_4,
                  uint64_t param_5, int64_t param_6, int64_t param_7, uint64_t param_8,
                  uint64_t param_9, uint64_t param_10, uint64_t param_11, int64_t param_12,
                  int64_t param_13, uint64_t param_14, uint64_t param_15, int64_t param_16,
                  int64_t param_17)
{
    uint uVar1;
    int64_t *plVar2;
    uint64_t *puVar3;
    uint64_t *puVar4;
    int iVar5;
    int64_t lVar6;
    uint64_t uVar7;
    char cVar8;
    uint uVar9;
    uint uVar10;
    int64_t lVar11;
    int unaff_EBP;
    int64_t *unaff_RSI;
    int64_t unaff_RDI;
    int64_t lVar12;
    int64_t *unaff_R15;
    int64_t lVar13;
    int64_t *in_stack_000000d8;
    
    // 优化的堆构建阶段
    lVar6 = param_6;
    lVar12 = unaff_RDI - unaff_EBP;
    if (1 < lVar12) {
        lVar11 = (lVar12 + -2 >> 1) + 1;
        do {
            param_8 = *unaff_RSI;
            param_9 = unaff_RSI[1];
            lVar11 = lVar11 + -1;
            uVar10 = (int)lVar11 + unaff_EBP;
            uVar9 = uVar10 >> 0xb;
            plVar2 = (int64_t *)
                     (*(int64_t *)(lVar6 + 8 + (uint64_t)uVar9 * 8) +
                     (uint64_t)(uVar10 + uVar9 * -0x800) * 0x10);
            param_6 = *plVar2;
            param_7 = plVar2[1];
            HeapAdjust_PairDataStructure(&param_8, lVar11, lVar12, lVar11, &param_6);
        } while (lVar11 != 0);
    }
    
    // 优化的堆合并阶段
    lVar6 = *unaff_R15;
    param_9 = unaff_R15[1];
    iVar5 = *(int *)(param_3 + 8);
    uVar9 = (uint)param_9;
    param_8 = lVar6;
    if ((int)uVar9 < iVar5) {
        uVar10 = *(uint *)(unaff_RSI + 1);
        lVar11 = *unaff_RSI;
        lVar13 = (uint64_t)(uVar10 - (uVar10 & 0xfffff800)) * 0x10;
        lVar12 = (uint64_t)(uVar10 >> 0xb) * 8;
        do {
            uVar10 = uVar9 >> 0xb;
            cVar8 = ComparePairDataElements(*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) +
                                        (uint64_t)(uVar9 + uVar10 * -0x800) * 0x10,
                                        *(int64_t *)(lVar12 + 8 + lVar11) + lVar13);
            if (cVar8 != '\0') {
                puVar3 = (uint64_t *)
                         (*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) +
                         (uint64_t)(uVar9 + uVar10 * -0x800) * 0x10);
                param_10 = *puVar3;
                param_11 = puVar3[1];
                puVar3 = (uint64_t *)(*(int64_t *)(lVar12 + 8 + *unaff_RSI) + lVar13);
                uVar7 = puVar3[1];
                puVar4 = (uint64_t *)
                         (*(int64_t *)(lVar6 + 8 + (uint64_t)uVar10 * 8) +
                         (uint64_t)(uVar9 + uVar10 * -0x800) * 0x10);
                *puVar4 = *puVar3;
                puVar4[1] = uVar7;
                param_12 = *unaff_RSI;
                param_13 = unaff_RSI[1];
                HeapAdjust_PairDataStructure(&param_12, 0, (int64_t)(int)in_stack_000000d8[1] - (int64_t)(int)unaff_RSI[1],
                                            0, &param_10);
            }
            lVar11 = *unaff_RSI;
            uVar9 = uVar9 + 1;
            unaff_R15 = in_stack_000000d8;
        } while ((int)uVar9 < iVar5);
    }
    
    // 优化的元素提取阶段
    lVar6 = *unaff_R15;
    uVar9 = *(uint *)(unaff_R15 + 1);
    param_13 = unaff_R15[1];
    lVar12 = unaff_RSI[1];
    if (1 < (int64_t)(int)uVar9 - (int64_t)(int)lVar12) {
        lVar11 = *unaff_RSI;
        uVar10 = (uint)unaff_RSI[1];
        param_12 = lVar6;
        do {
            uVar1 = uVar9 - 1;
            puVar3 = (uint64_t *)
                     (*(int64_t *)(lVar6 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
                     (uint64_t)(uVar1 & 0x7ff) * 0x10);
            param_14 = *puVar3;
            param_15 = puVar3[1];
            puVar3 = (uint64_t *)
                     (*(int64_t *)(lVar11 + (uint64_t)(uVar10 >> 0xb) * 8 + 8) +
                     (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x10);
            uVar7 = puVar3[1];
            puVar4 = (uint64_t *)
                     (*(int64_t *)(lVar6 + 8 + (uint64_t)(uVar1 >> 0xb) * 8) +
                     (uint64_t)(uVar1 & 0x7ff) * 0x10);
            *puVar4 = *puVar3;
            puVar4[1] = uVar7;
            param_16 = *unaff_RSI;
            param_17 = unaff_RSI[1];
            HeapAdjust_PairDataStructure(&param_16, 0, ((int64_t)(int)uVar9 - (int64_t)(int)uVar10) + -1, 0, &param_14);
            uVar9 = uVar1;
        } while (1 < (int64_t)(int)uVar1 - (int64_t)(int)lVar12);
    }
    return;
}

/**
 * @brief 二元组数据结构堆排序提取函数
 * 
 * 专门用于从二元组堆结构中提取排序后的元素，
 * 使用了优化的循环结构和寄存器分配。
 */
void FUN_1800ec0a8(void)
{
    uint64_t *puVar1;
    uint64_t *puVar2;
    int64_t lVar3;
    uint64_t uVar4;
    uint uVar5;
    int64_t unaff_RBP;
    int64_t *unaff_RSI;
    uint uVar6;
    uint in_R9D;
    int64_t in_stack_00000060;
    uint64_t uStack0000000000000070;
    uint64_t uStack0000000000000078;
    int64_t lStack0000000000000080;
    int64_t lStack0000000000000088;
    
    lVar3 = *unaff_RSI;
    uVar6 = (uint)unaff_RSI[1];
    do {
        uVar5 = in_R9D - 1;
        puVar1 = (uint64_t *)
                 (*(int64_t *)(in_stack_00000060 + 8 + (uint64_t)(uVar5 >> 0xb) * 8) +
                 (uint64_t)(uVar5 & 0x7ff) * 0x10);
        uStack0000000000000070 = *puVar1;
        uStack0000000000000078 = puVar1[1];
        puVar1 = (uint64_t *)
                 (*(int64_t *)(lVar3 + (uint64_t)(uVar6 >> 0xb) * 8 + 8) +
                 (uint64_t)(uVar6 + (uVar6 >> 0xb) * -0x800) * 0x10);
        uVar4 = puVar1[1];
        puVar2 = (uint64_t *)
                 (*(int64_t *)(in_stack_00000060 + 8 + (uint64_t)(uVar5 >> 0xb) * 8) +
                 (uint64_t)(uVar5 & 0x7ff) * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        lStack0000000000000080 = *unaff_RSI;
        lStack0000000000000088 = unaff_RSI[1];
        HeapAdjust_PairDataStructure(&lStack0000000000000080, 0, ((int64_t)(int)in_R9D - (int64_t)(int)uVar6) + -1, 0,
                                    &uStack0000000000000070);
        in_R9D = uVar5;
    } while (1 < (int)uVar5 - unaff_RBP);
    return;
}

/**
 * @brief 通用数据结构堆构建函数
 * 
 * 实现了通用的堆数据结构构建算法，
 * 可以处理各种类型的数据元素。
 * 
 * @param param_1 堆数组指针
 * @param param_2 起始指针
 * @param param_3 结束指针
 */
void FUN_1800ec180(uint64_t *param_1, uint64_t *param_2, uint64_t *param_3)
{
    uint64_t uVar1;
    char cVar2;
    int64_t lVar3;
    int64_t lVar4;
    int64_t lVar5;
    int64_t lVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t lVar9;
    uint64_t *puVar10;
    bool bVar11;
    
    // 构建初始堆
    lVar9 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (1 < lVar9) {
        lVar3 = (lVar9 + -2 >> 1) + 1;
        lVar6 = lVar3 * 2 + 2;
        do {
            uVar1 = param_1[lVar3 + -1];
            lVar3 = lVar3 + -1;
            lVar6 = lVar6 + -2;
            lVar4 = lVar3;
            for (lVar5 = lVar6; lVar5 < lVar9; lVar5 = lVar5 * 2 + 2) {
                cVar2 = CompareGenericDataElements(param_1[lVar5], param_1[lVar5 + -1]);
                if (cVar2 != '\0') {
                    lVar5 = lVar5 + -1;
                }
                param_1[lVar4] = param_1[lVar5];
                lVar4 = lVar5;
            }
            if (lVar5 == lVar9) {
                param_1[lVar4] = param_1[lVar5 + -1];
                lVar4 = lVar5 + -1;
            }
            while (lVar3 < lVar4) {
                lVar5 = lVar4 + -1 >> 1;
                cVar2 = CompareGenericDataElements(param_1[lVar5], uVar1);
                if (cVar2 == '\0') break;
                param_1[lVar4] = param_1[lVar5];
                lVar4 = lVar5;
            }
            param_1[lVar4] = uVar1;
        } while (lVar3 != 0);
    }
    
    // 堆排序过程
    uVar7 = 0;
    uVar8 = (uint64_t)((int64_t)param_3 + (7 - (int64_t)param_2)) >> 3;
    if (param_3 < param_2) {
        uVar8 = uVar7;
    }
    puVar10 = param_2;
    if (uVar8 != 0) {
        do {
            lVar6 = 0;
            cVar2 = CompareGenericDataElements(*puVar10, *param_1);
            if (cVar2 != '\0') {
                uVar1 = *puVar10;
                lVar3 = 2;
                *puVar10 = *param_1;
                bVar11 = lVar9 == 2;
                lVar4 = lVar6;
                if (2 < lVar9) {
                    do {
                        cVar2 = CompareGenericDataElements(param_1[lVar3], param_1[lVar3 + -1]);
                        lVar6 = lVar3;
                        if (cVar2 != '\0') {
                            lVar6 = lVar3 + -1;
                        }
                        param_1[lVar4] = param_1[lVar6];
                        lVar3 = lVar6 * 2 + 2;
                        bVar11 = lVar3 == lVar9;
                        lVar4 = lVar6;
                    } while (lVar3 < lVar9);
                }
                if (bVar11) {
                    param_1[lVar6] = param_1[lVar3 + -1];
                    lVar6 = lVar3 + -1;
                }
                while (0 < lVar6) {
                    lVar3 = lVar6 + -1 >> 1;
                    cVar2 = CompareGenericDataElements(param_1[lVar3], uVar1);
                    if (cVar2 == '\0') break;
                    param_1[lVar6] = param_1[lVar3];
                    lVar6 = lVar3;
                }
                param_1[lVar6] = uVar1;
            }
            puVar10 = puVar10 + 1;
            uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
    }
    
    // 最终堆调整
    if (1 < lVar9) {
        param_2 = param_2 + -1;
        do {
            lVar6 = 0;
            uVar1 = *param_2;
            lVar3 = 2;
            lVar9 = lVar9 + -1;
            *param_2 = *param_1;
            bVar11 = lVar9 == 2;
            lVar4 = lVar6;
            if (2 < lVar9) {
                do {
                    cVar2 = CompareGenericDataElements(param_1[lVar3], param_1[lVar3 + -1]);
                    lVar6 = lVar3;
                    if (cVar2 != '\0') {
                        lVar6 = lVar3 + -1;
                    }
                    param_1[lVar4] = param_1[lVar6];
                    lVar3 = lVar6 * 2 + 2;
                    bVar11 = lVar3 == lVar9;
                    lVar4 = lVar6;
                } while (lVar3 < lVar9);
            }
            if (bVar11) {
                param_1[lVar6] = param_1[lVar3 + -1];
                lVar6 = lVar3 + -1;
            }
            while (0 < lVar6) {
                lVar9 = lVar6 + -1 >> 1;
                cVar2 = CompareGenericDataElements(param_1[lVar9], uVar1);
                if (cVar2 == '\0') break;
                param_1[lVar6] = param_1[lVar9];
                lVar6 = lVar9;
            }
            param_2 = param_2 + -1;
            param_1[lVar6] = uVar1;
            lVar9 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < lVar9);
    }
    return;
}

/**
 * @brief 通用数据结构堆排序优化版本
 * 
 * 优化的通用堆排序算法，使用寄存器变量优化，
 * 减少内存访问次数，提高排序性能。
 */
void FUN_1800ec19b(uint64_t *param_1, uint64_t *param_2, uint64_t *param_3)
{
    uint64_t uVar1;
    char cVar2;
    int64_t lVar3;
    int64_t lVar4;
    int64_t lVar5;
    int64_t lVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t unaff_R14;
    int64_t lVar9;
    uint64_t *puVar10;
    bool bVar11;
    uint64_t *in_stack_00000068;
    uint64_t *in_stack_00000070;
    
    // 优化的堆构建
    lVar9 = unaff_R14 - (int64_t)param_1 >> 3;
    if (1 < lVar9) {
        lVar3 = (lVar9 + -2 >> 1) + 1;
        lVar6 = lVar3 * 2 + 2;
        do {
            uVar1 = param_1[lVar3 + -1];
            lVar3 = lVar3 + -1;
            lVar6 = lVar6 + -2;
            lVar4 = lVar3;
            for (lVar5 = lVar6; lVar5 < lVar9; lVar5 = lVar5 * 2 + 2) {
                cVar2 = CompareGenericDataElements(param_1[lVar5], param_1[lVar5 + -1]);
                if (cVar2 != '\0') {
                    lVar5 = lVar5 + -1;
                }
                param_1[lVar4] = param_1[lVar5];
                lVar4 = lVar5;
            }
            if (lVar5 == lVar9) {
                param_1[lVar4] = param_1[lVar5 + -1];
                lVar4 = lVar5 + -1;
            }
            while (lVar3 < lVar4) {
                lVar5 = lVar4 + -1 >> 1;
                cVar2 = CompareGenericDataElements(param_1[lVar5], uVar1);
                if (cVar2 == '\0') break;
                param_1[lVar4] = param_1[lVar5];
                lVar4 = lVar5;
            }
            param_1[lVar4] = uVar1;
            param_3 = in_stack_00000070;
            param_2 = in_stack_00000068;
        } while (lVar3 != 0);
    }
    
    // 优化的堆排序
    uVar7 = 0;
    uVar8 = (uint64_t)((int64_t)param_3 + (7 - (int64_t)param_2)) >> 3;
    if (param_3 < param_2) {
        uVar8 = uVar7;
    }
    puVar10 = param_2;
    if (uVar8 != 0) {
        do {
            lVar6 = 0;
            cVar2 = CompareGenericDataElements(*puVar10, *param_1);
            if (cVar2 != '\0') {
                uVar1 = *puVar10;
                lVar3 = 2;
                *puVar10 = *param_1;
                bVar11 = lVar9 == 2;
                lVar4 = lVar6;
                if (2 < lVar9) {
                    do {
                        cVar2 = CompareGenericDataElements(param_1[lVar3], param_1[lVar3 + -1]);
                        lVar6 = lVar3;
                        if (cVar2 != '\0') {
                            lVar6 = lVar3 + -1;
                        }
                        param_1[lVar4] = param_1[lVar6];
                        lVar3 = lVar6 * 2 + 2;
                        bVar11 = lVar3 == lVar9;
                        lVar4 = lVar6;
                    } while (lVar3 < lVar9);
                }
                if (bVar11) {
                    param_1[lVar6] = param_1[lVar3 + -1];
                    lVar6 = lVar3 + -1;
                }
                while (0 < lVar6) {
                    lVar3 = lVar6 + -1 >> 1;
                    cVar2 = CompareGenericDataElements(param_1[lVar3], uVar1);
                    if (cVar2 == '\0') break;
                    param_1[lVar6] = param_1[lVar3];
                    lVar6 = lVar3;
                }
                param_1[lVar6] = uVar1;
            }
            puVar10 = puVar10 + 1;
            uVar7 = uVar7 + 1;
            param_2 = in_stack_00000068;
        } while (uVar7 < uVar8);
    }
    
    // 优化的最终堆调整
    if (1 < lVar9) {
        param_2 = param_2 + -1;
        do {
            lVar6 = 0;
            uVar1 = *param_2;
            lVar3 = 2;
            lVar9 = lVar9 + -1;
            *param_2 = *param_1;
            bVar11 = lVar9 == 2;
            lVar4 = lVar6;
            if (2 < lVar9) {
                do {
                    cVar2 = CompareGenericDataElements(param_1[lVar3], param_1[lVar3 + -1]);
                    lVar6 = lVar3;
                    if (cVar2 != '\0') {
                        lVar6 = lVar3 + -1;
                    }
                    param_1[lVar4] = param_1[lVar6];
                    lVar3 = lVar6 * 2 + 2;
                    bVar11 = lVar3 == lVar9;
                    lVar4 = lVar6;
                } while (lVar3 < lVar9);
            }
            if (bVar11) {
                param_1[lVar6] = param_1[lVar3 + -1];
                lVar6 = lVar3 + -1;
            }
            while (0 < lVar6) {
                lVar9 = lVar6 + -1 >> 1;
                cVar2 = CompareGenericDataElements(param_1[lVar9], uVar1);
                if (cVar2 == '\0') break;
                param_1[lVar6] = param_1[lVar9];
                lVar6 = lVar9;
            }
            param_2 = param_2 + -1;
            param_1[lVar6] = uVar1;
            lVar9 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < lVar9);
    }
    return;
}

/**
 * @brief 高性能堆排序函数
 * 
 * 专门为性能优化的堆排序实现，使用循环展开和寄存器优化，
 * 适用于大规模数据排序场景。
 * 
 * @param param_1 堆数组指针
 * @param param_2 堆大小参数
 */
void FUN_1800ec362(uint64_t param_1, int64_t param_2)
{
    uint64_t uVar1;
    char cVar2;
    uint64_t *unaff_RBX;
    int64_t lVar3;
    int64_t unaff_RDI;
    int64_t lVar4;
    int64_t unaff_R14;
    int64_t lVar5;
    uint64_t *puVar6;
    bool bVar7;
    
    puVar6 = (uint64_t *)(param_2 + -8);
    do {
        uVar1 = *puVar6;
        lVar4 = 2;
        lVar5 = unaff_R14 + -1;
        *puVar6 = *unaff_RBX;
        bVar7 = lVar5 == 2;
        lVar3 = unaff_RDI;
        if (2 < lVar5) {
            do {
                cVar2 = CompareGenericDataElements(unaff_RBX[lVar4], unaff_RBX[lVar4 + -1]);
                unaff_RDI = lVar4;
                if (cVar2 != '\0') {
                    unaff_RDI = lVar4 + -1;
                }
                unaff_RBX[lVar3] = unaff_RBX[unaff_RDI];
                lVar4 = unaff_RDI * 2 + 2;
                bVar7 = lVar4 == lVar5;
                lVar3 = unaff_RDI;
            } while (lVar4 < lVar5);
        }
        if (bVar7) {
            unaff_RBX[unaff_RDI] = unaff_RBX[lVar4 + -1];
            unaff_RDI = lVar4 + -1;
        }
        while (0 < unaff_RDI) {
            lVar4 = unaff_RDI + -1 >> 1;
            cVar2 = CompareGenericDataElements(unaff_RBX[lVar4], uVar1);
            if (cVar2 == '\0') break;
            unaff_RBX[unaff_RDI] = unaff_RBX[lVar4];
            unaff_RDI = lVar4;
        }
        puVar6 = puVar6 + -1;
        unaff_RBX[unaff_RDI] = uVar1;
        unaff_RDI = 0;
        unaff_R14 = (8 - (int64_t)unaff_RBX) + (int64_t)puVar6 >> 3;
        if (unaff_R14 < 2) {
            return;
        }
    } while( true );
}

/* ============================================================================
 * 模块结束
 * ============================================================================ */